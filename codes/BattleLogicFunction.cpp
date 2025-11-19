void BattleLogicFunction___ctor(BattleLogicFunction_o *this, const MethodInfo *method)
{
  __int64 v3; // x0
  __int64 v4; // x1
  int32_t v5; // w2
  const MethodInfo *v6; // x3
  int v7; // w9
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
  BattleLogicFunctionProcess_ToFieldCommonFunctionProcess_o *v18; // x21
  BattleLogicFunctionProcess_FieldAddStateProcess_o *v19; // x21
  BattleLogicFunctionProcess_FieldAddStateShortProcess_o *v20; // x21
  int32_t v21; // w2
  const MethodInfo *v22; // x3

  if ( (byte_4CB9403 & 1) == 0 )
  {
    sub_1C6BA08(&BattleLogicFunctionProcess_AddStateProcess_TypeInfo);
    sub_1C6BA08(&BattleLogicFunctionProcess_AddStateShortProcess_TypeInfo);
    sub_1C6BA08(&BattleLogicFunctionProcess_CommonAddStateProcess_TypeInfo);
    sub_1C6BA08(&BattleLogicFunctionProcess_CommonFieldFunctionProcess_TypeInfo);
    sub_1C6BA08(&BattleLogicFunctionProcess_CommonFunctionTypeProcess_TypeInfo);
    sub_1C6BA08(&Method_System_Collections_Generic_Dictionary_FuncList_TYPE__BattleLogicFunctionProcess_BaseFunctionTypeProcess__Add__);
    sub_1C6BA08(&Method_System_Collections_Generic_Dictionary_FuncList_TYPE__BattleLogicFunctionProcess_BaseFunctionTypeProcess___ctor__);
    sub_1C6BA08(&System_Collections_Generic_Dictionary_FuncList_TYPE__BattleLogicFunctionProcess_BaseFunctionTypeProcess__TypeInfo);
    sub_1C6BA08(&BattleLogicFunctionProcess_FieldAddStateProcess_TypeInfo);
    sub_1C6BA08(&BattleLogicFunctionProcess_FieldAddStateShortProcess_TypeInfo);
    sub_1C6BA08(&int___TypeInfo);
    sub_1C6BA08(&BattleLogicFunctionProcess_MoveToLastSubMemberProcess_TypeInfo);
    sub_1C6BA08(&BattleLogicFunctionProcess_ToFieldCommonFunctionProcess_TypeInfo);
    sub_1C6BA08(&BattleLogicFunctionProcess_TransformServantProcess_TypeInfo);
    byte_4CB9403 = 1;
  }
  v3 = sub_1C6BAB0(int___TypeInfo, 2);
  if ( !v3 )
    goto LABEL_8;
  v7 = *(_DWORD *)(v3 + 24);
  if ( !v7 || (*(_DWORD *)(v3 + 32) = 701601, v7 == 1) )
    sub_1C6BC68(v3);
  *(_DWORD *)(v3 + 36) = 701602;
  this->fields.tamamocatTreasureDeviceIds = (struct System_Int32_array *)v3;
  sub_1C6B9AC((CGThumbnailListItem_o *)&this->fields.tamamocatTreasureDeviceIds, v3, v5, v6);
  v8 = (System_Collections_Generic_Dictionary_TKey__TValue__o *)sub_1C6BC54(System_Collections_Generic_Dictionary_FuncList_TYPE__BattleLogicFunctionProcess_BaseFunctionTypeProcess__TypeInfo);
  System_Collections_Generic_Dictionary_Int32Enum__object____ctor(
    v8,
    (const MethodInfo_3484F58 *)Method_System_Collections_Generic_Dictionary_FuncList_TYPE__BattleLogicFunctionProcess_BaseFunctionTypeProcess___ctor__);
  v9 = (BattleLogicFunctionProcess_CommonFunctionTypeProcess_o *)sub_1C6BC54(BattleLogicFunctionProcess_CommonFunctionTypeProcess_TypeInfo);
  BattleLogicFunctionProcess_CommonFunctionTypeProcess___ctor(v9, 0);
  if ( !v8 )
LABEL_8:
    sub_1C6BC60(v3, v4);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v8,
    0,
    (Il2CppObject *)v9,
    (const MethodInfo_348592C *)Method_System_Collections_Generic_Dictionary_FuncList_TYPE__BattleLogicFunctionProcess_BaseFunctionTypeProcess__Add__);
  v10 = (BattleLogicFunctionProcess_AddStateProcess_o *)sub_1C6BC54(BattleLogicFunctionProcess_AddStateProcess_TypeInfo);
  BattleLogicFunctionProcess_AddStateProcess___ctor(v10, 0);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v8,
    1,
    (Il2CppObject *)v10,
    (const MethodInfo_348592C *)Method_System_Collections_Generic_Dictionary_FuncList_TYPE__BattleLogicFunctionProcess_BaseFunctionTypeProcess__Add__);
  v11 = (BattleLogicFunctionProcess_AddStateShortProcess_o *)sub_1C6BC54(BattleLogicFunctionProcess_AddStateShortProcess_TypeInfo);
  BattleLogicFunctionProcess_AddStateShortProcess___ctor(v11, 0);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v8,
    16,
    (Il2CppObject *)v11,
    (const MethodInfo_348592C *)Method_System_Collections_Generic_Dictionary_FuncList_TYPE__BattleLogicFunctionProcess_BaseFunctionTypeProcess__Add__);
  v12 = (BattleLogicFunctionProcess_MoveToLastSubMemberProcess_o *)sub_1C6BC54(BattleLogicFunctionProcess_MoveToLastSubMemberProcess_TypeInfo);
  BattleLogicFunctionProcess_MoveToLastSubMemberProcess___ctor(v12, 0);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v8,
    61,
    (Il2CppObject *)v12,
    (const MethodInfo_348592C *)Method_System_Collections_Generic_Dictionary_FuncList_TYPE__BattleLogicFunctionProcess_BaseFunctionTypeProcess__Add__);
  v13 = (BattleLogicFunctionProcess_TransformServantProcess_o *)sub_1C6BC54(BattleLogicFunctionProcess_TransformServantProcess_TypeInfo);
  BattleLogicFunctionProcess_TransformServantProcess___ctor(v13, 0);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v8,
    109,
    (Il2CppObject *)v13,
    (const MethodInfo_348592C *)Method_System_Collections_Generic_Dictionary_FuncList_TYPE__BattleLogicFunctionProcess_BaseFunctionTypeProcess__Add__);
  v14 = (BattleLogicFunctionProcess_CommonFieldFunctionProcess_o *)sub_1C6BC54(BattleLogicFunctionProcess_CommonFieldFunctionProcess_TypeInfo);
  BattleLogicFunctionProcess_CommonFieldFunctionProcess___ctor(v14, 0);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v8,
    29,
    (Il2CppObject *)v14,
    (const MethodInfo_348592C *)Method_System_Collections_Generic_Dictionary_FuncList_TYPE__BattleLogicFunctionProcess_BaseFunctionTypeProcess__Add__);
  v15 = (BattleLogicFunctionProcess_CommonFieldFunctionProcess_o *)sub_1C6BC54(BattleLogicFunctionProcess_CommonFieldFunctionProcess_TypeInfo);
  BattleLogicFunctionProcess_CommonFieldFunctionProcess___ctor(v15, 0);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v8,
    128,
    (Il2CppObject *)v15,
    (const MethodInfo_348592C *)Method_System_Collections_Generic_Dictionary_FuncList_TYPE__BattleLogicFunctionProcess_BaseFunctionTypeProcess__Add__);
  v16 = (BattleLogicFunctionProcess_CommonAddStateProcess_o *)sub_1C6BC54(BattleLogicFunctionProcess_CommonAddStateProcess_TypeInfo);
  BattleLogicFunctionProcess_CommonAddStateProcess___ctor(v16, 0);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v8,
    130,
    (Il2CppObject *)v16,
    (const MethodInfo_348592C *)Method_System_Collections_Generic_Dictionary_FuncList_TYPE__BattleLogicFunctionProcess_BaseFunctionTypeProcess__Add__);
  v17 = (BattleLogicFunctionProcess_ToFieldCommonFunctionProcess_o *)sub_1C6BC54(BattleLogicFunctionProcess_ToFieldCommonFunctionProcess_TypeInfo);
  BattleLogicFunctionProcess_ToFieldCommonFunctionProcess___ctor(v17, 0);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v8,
    131,
    (Il2CppObject *)v17,
    (const MethodInfo_348592C *)Method_System_Collections_Generic_Dictionary_FuncList_TYPE__BattleLogicFunctionProcess_BaseFunctionTypeProcess__Add__);
  v18 = (BattleLogicFunctionProcess_ToFieldCommonFunctionProcess_o *)sub_1C6BC54(BattleLogicFunctionProcess_ToFieldCommonFunctionProcess_TypeInfo);
  BattleLogicFunctionProcess_ToFieldCommonFunctionProcess___ctor(v18, 0);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v8,
    158,
    (Il2CppObject *)v18,
    (const MethodInfo_348592C *)Method_System_Collections_Generic_Dictionary_FuncList_TYPE__BattleLogicFunctionProcess_BaseFunctionTypeProcess__Add__);
  v19 = (BattleLogicFunctionProcess_FieldAddStateProcess_o *)sub_1C6BC54(BattleLogicFunctionProcess_FieldAddStateProcess_TypeInfo);
  BattleLogicFunctionProcess_FieldAddStateProcess___ctor(v19, 0);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v8,
    160,
    (Il2CppObject *)v19,
    (const MethodInfo_348592C *)Method_System_Collections_Generic_Dictionary_FuncList_TYPE__BattleLogicFunctionProcess_BaseFunctionTypeProcess__Add__);
  v20 = (BattleLogicFunctionProcess_FieldAddStateShortProcess_o *)sub_1C6BC54(BattleLogicFunctionProcess_FieldAddStateShortProcess_TypeInfo);
  BattleLogicFunctionProcess_FieldAddStateShortProcess___ctor(v20, 0);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v8,
    161,
    (Il2CppObject *)v20,
    (const MethodInfo_348592C *)Method_System_Collections_Generic_Dictionary_FuncList_TYPE__BattleLogicFunctionProcess_BaseFunctionTypeProcess__Add__);
  this->fields.dicFuncProcess = (struct System_Collections_Generic_Dictionary_FuncList_TYPE__BattleLogicFunctionProcess_BaseFunctionTypeProcess__o *)v8;
  sub_1C6B9AC((CGThumbnailListItem_o *)&this->fields.dicFuncProcess, (int32_t)v8, v21, v22);
  System_Object___ctor((Il2CppObject *)this, 0);
}


BattleActionData_o *BattleLogicFunction__AbsorbNpPoint(
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
  BattleActionData_o *NoEffectObject; // x0
  __int64 v49; // x8
  __int64 v50; // x9
  int *v51; // x10
  __int64 v52; // x0
  const MethodInfo *v54; // [xsp+0h] [xbp-80h]
  BattleLogicFunction_o *v55; // [xsp+8h] [xbp-78h]
  unsigned __int64 v56; // [xsp+10h] [xbp-70h]
  int32_t diffNp; // [xsp+1Ch] [xbp-64h] BYREF

  v8 = this;
  if ( (byte_4CB93E0 & 1) == 0 )
  {
    sub_1C6BA08(&BattleActionData_TypeInfo);
    sub_1C6BA08(&System_IDisposable_TypeInfo);
    sub_1C6BA08(&System_Collections_Generic_IEnumerable_BattleLogicFunctionProcess_FunctionTargetCheck__TypeInfo);
    sub_1C6BA08(&System_Collections_Generic_IEnumerator_BattleLogicFunctionProcess_FunctionTargetCheck__TypeInfo);
    sub_1C6BA08(&System_Collections_IEnumerator_TypeInfo);
    sub_1C6BA08(&Method_System_Collections_Generic_List_FuncList_TYPE__Add__);
    sub_1C6BA08(&Method_System_Collections_Generic_List_FuncList_TYPE___ctor__);
    this = (BattleLogicFunction_o *)sub_1C6BA08(&System_Collections_Generic_List_FuncList_TYPE__TypeInfo);
    byte_4CB93E0 = 1;
  }
  if ( !funcTarget )
    goto LABEL_65;
  funcUnit_k__BackingField = funcTarget->fields._funcUnit_k__BackingField;
  if ( !funcUnit_k__BackingField )
    goto LABEL_65;
  procArg_k__BackingField = funcUnit_k__BackingField->fields._procArg_k__BackingField;
  dataVals_k__BackingField = funcUnit_k__BackingField->fields._dataVals_k__BackingField;
  v12 = (BattleActionData_o *)sub_1C6BC54(BattleActionData_TypeInfo);
  BattleActionData___ctor(v12, 0);
  v13 = (System_Collections_Generic_List_T__o *)sub_1C6BC54(System_Collections_Generic_List_FuncList_TYPE__TypeInfo);
  System_Collections_Generic_List_Int32Enum____ctor(
    v13,
    (const MethodInfo_37E5928 *)Method_System_Collections_Generic_List_FuncList_TYPE___ctor__);
  if ( !v13 )
    goto LABEL_65;
  items = v13->fields._items;
  v15 = Method_System_Collections_Generic_List_FuncList_TYPE__Add__;
  ++v13->fields._version;
  if ( !items )
    goto LABEL_65;
  size = v13->fields._size;
  if ( (unsigned int)size >= LODWORD(items->max_length) )
  {
    System_Collections_Generic_List_Int32Enum___AddWithResize(
      v13,
      8,
      *(const MethodInfo_37E617C **)(*(_QWORD *)(v15[4] + 192LL) + 112LL));
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
                                    0);
  if ( !this )
    goto LABEL_65;
  logic = this->fields.logic;
  if ( (int)logic >= 1 )
  {
    v18 = 0;
    v55 = this;
    while ( 1 )
    {
      if ( v18 >= (unsigned int)logic )
        sub_1C6BC68(this);
      v19 = (DataVals_o *)*((_QWORD *)&this->fields.logictarget + v18);
      diffNp = 0;
      if ( !result )
        break;
      this = (BattleLogicFunction_o *)result->fields._Convert_k__BackingField;
      v56 = v18;
      if ( !this )
        break;
      ((void (__fastcall *)(BattleLogicFunction_o *, DataVals_o *, const char *))this->klass[1]._1.name)(
        this,
        v19,
        this->klass[1]._1.namespaze);
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
      v23 = *(unsigned __int16 *)&this->klass->_2.rank;
      if ( *(_WORD *)&this->klass->_2.rank )
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
        v25 = (__int64)&klass->vtable + 16 * *p_offset;
      }
      else
      {
LABEL_22:
        v25 = sub_1C41D90(
                this,
                System_Collections_Generic_IEnumerable_BattleLogicFunctionProcess_FunctionTargetCheck__TypeInfo,
                0);
      }
      v27 = (*(__int64 (__fastcall **)(BattleLogicFunction_o *, _QWORD))v25)(v22, *(_QWORD *)(v25 + 8));
      if ( !v27 )
        sub_1C6BC60(0, v26);
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
          v31 = sub_1C41D90(v27, System_Collections_IEnumerator_TypeInfo, 0);
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
          v35 = sub_1C41D90(
                  v27,
                  System_Collections_Generic_IEnumerator_BattleLogicFunctionProcess_FunctionTargetCheck__TypeInfo,
                  0);
        }
        v36 = (*(__int64 (__fastcall **)(__int64, _QWORD))v35)(v27, *(_QWORD *)(v35 + 8));
        v38 = v36;
        if ( !v36 )
          sub_1C6BC60(0, v37);
        v39 = (*(__int64 (__fastcall **)(__int64, BattleActionData_o *, _QWORD))(*(_QWORD *)v36 + 408LL))(
                v36,
                mainAction,
                *(_QWORD *)(*(_QWORD *)v36 + 416LL));
        if ( (v39 & 1) != 0 )
        {
          if ( !mainAction )
            sub_1C6BC60(v39, v40);
          v43 = *(_DWORD *)(v38 + 32);
          v44 = BattleLogicFunction__functionLossNp(v8, procArg_k__BackingField, v41, v43, v19, &diffNp, v42);
          v45 = diffNp;
          if ( diffNp < 1 )
          {
            if ( v44 )
            {
              if ( !v19 )
                sub_1C6BC60(v44, v44);
              if ( !procArg_k__BackingField )
                sub_1C6BC60(v44, v44);
              funcIndex = v19->fields.funcIndex;
              IsCommandSideEffect = BattleLogicFunction_ProcListInArgs__get_IsCommandSideEffect(
                                      procArg_k__BackingField,
                                      0);
              NoEffectObject = BattleLogicFunction__getNoEffectObject(
                                 v8,
                                 v43,
                                 funcIndex,
                                 v19,
                                 IsCommandSideEffect,
                                 0,
                                 0,
                                 0,
                                 v54);
              if ( !v12 )
                sub_1C6BC60(NoEffectObject, NoEffectObject);
              BattleActionData__addAction(v12, NoEffectObject, 0);
            }
          }
          else
          {
            if ( !v12 )
              sub_1C6BC60(v44, v44);
            BattleActionData__addAction(v12, v44, 0);
            NpGaugeAbsorbResult__AddPoint(result, v45, 0);
          }
        }
      }
      v49 = *(_QWORD *)v27;
      v50 = *(unsigned __int16 *)(*(_QWORD *)v27 + 302LL);
      if ( *(_WORD *)(*(_QWORD *)v27 + 302LL) )
      {
        v51 = (int *)(*(_QWORD *)(v49 + 176) + 8LL);
        while ( *((System_IDisposable_c **)v51 - 1) != System_IDisposable_TypeInfo )
        {
          --v50;
          v51 += 4;
          if ( !v50 )
            goto LABEL_53;
        }
        v52 = v49 + 16LL * *v51 + 312;
      }
      else
      {
LABEL_53:
        v52 = sub_1C41D90(v27, System_IDisposable_TypeInfo, 0);
      }
      (*(void (__fastcall **)(__int64, _QWORD))v52)(v27, *(_QWORD *)(v52 + 8));
      this = v55;
      LODWORD(logic) = v55->fields.logic;
      v18 = v56 + 1;
      if ( (__int64)(v56 + 1) >= (int)logic )
        return v12;
    }
LABEL_65:
    sub_1C6BC60(this, mainAction);
  }
  return v12;
}


BattleActionData_o *BattleLogicFunction__AbsorbNpTurn(
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
  if ( (byte_4CB93DF & 1) == 0 )
  {
    sub_1C6BA08(&BattleActionData_TypeInfo);
    sub_1C6BA08(&System_IDisposable_TypeInfo);
    sub_1C6BA08(&System_Collections_Generic_IEnumerable_BattleLogicFunctionProcess_FunctionTargetCheck__TypeInfo);
    sub_1C6BA08(&System_Collections_Generic_IEnumerator_BattleLogicFunctionProcess_FunctionTargetCheck__TypeInfo);
    sub_1C6BA08(&System_Collections_IEnumerator_TypeInfo);
    sub_1C6BA08(&Method_System_Collections_Generic_List_FuncList_TYPE__Add__);
    sub_1C6BA08(&Method_System_Collections_Generic_List_FuncList_TYPE___ctor__);
    this = (BattleLogicFunction_o *)sub_1C6BA08(&System_Collections_Generic_List_FuncList_TYPE__TypeInfo);
    byte_4CB93DF = 1;
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
  v11 = (BattleActionData_o *)sub_1C6BC54(BattleActionData_TypeInfo);
  BattleActionData___ctor(v11, 0);
  v12 = (System_Collections_Generic_List_T__o *)sub_1C6BC54(System_Collections_Generic_List_FuncList_TYPE__TypeInfo);
  System_Collections_Generic_List_Int32Enum____ctor(
    v12,
    (const MethodInfo_37E5928 *)Method_System_Collections_Generic_List_FuncList_TYPE___ctor__);
  if ( !v12 )
    goto LABEL_59;
  items = v12->fields._items;
  v14 = Method_System_Collections_Generic_List_FuncList_TYPE__Add__;
  ++v12->fields._version;
  if ( !items )
    goto LABEL_59;
  size = v12->fields._size;
  if ( (unsigned int)size >= LODWORD(items->max_length) )
  {
    System_Collections_Generic_List_Int32Enum___AddWithResize(
      v12,
      20,
      *(const MethodInfo_37E617C **)(*(_QWORD *)(v14[4] + 192LL) + 112LL));
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
                                    0);
  if ( !this )
    goto LABEL_59;
  logic = this->fields.logic;
  if ( (int)logic >= 1 )
  {
    v17 = 0;
    v51 = this;
    while ( 1 )
    {
      if ( v17 >= (unsigned int)logic )
        sub_1C6BC68(this);
      v18 = (DataVals_o *)*((_QWORD *)&this->fields.logictarget + v17);
      absorptionCount = 0;
      if ( !result )
        break;
      this = (BattleLogicFunction_o *)result->fields._Convert_k__BackingField;
      v52 = v17;
      if ( !this )
        break;
      ((void (__fastcall *)(BattleLogicFunction_o *, DataVals_o *, const char *))this->klass[1]._1.name)(
        this,
        v18,
        this->klass[1]._1.namespaze);
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
      v22 = *(unsigned __int16 *)&this->klass->_2.rank;
      if ( *(_WORD *)&this->klass->_2.rank )
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
        v24 = (__int64)&klass->vtable + 16 * *p_offset;
      }
      else
      {
LABEL_22:
        v24 = sub_1C41D90(
                this,
                System_Collections_Generic_IEnumerable_BattleLogicFunctionProcess_FunctionTargetCheck__TypeInfo,
                0);
      }
      v26 = (*(__int64 (__fastcall **)(BattleLogicFunction_o *, _QWORD))v24)(v21, *(_QWORD *)(v24 + 8));
      if ( !v26 )
        sub_1C6BC60(0, v25);
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
          v30 = sub_1C41D90(v26, System_Collections_IEnumerator_TypeInfo, 0);
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
          v34 = sub_1C41D90(
                  v26,
                  System_Collections_Generic_IEnumerator_BattleLogicFunctionProcess_FunctionTargetCheck__TypeInfo,
                  0);
        }
        v35 = (*(__int64 (__fastcall **)(__int64, _QWORD))v34)(v26, *(_QWORD *)(v34 + 8));
        v37 = v35;
        if ( !v35 )
          sub_1C6BC60(0, v36);
        v38 = (*(__int64 (__fastcall **)(__int64, BattleActionData_o *, _QWORD))(*(_QWORD *)v35 + 408LL))(
                v35,
                mainAction,
                *(_QWORD *)(*(_QWORD *)v35 + 416LL));
        if ( (v38 & 1) != 0 )
        {
          if ( !v18 )
            sub_1C6BC60(v38, v39);
          if ( !procArg_k__BackingField )
            sub_1C6BC60(v38, v39);
          v40 = *(_DWORD *)(v37 + 32);
          funcEnt = v18->fields.funcEnt;
          funcIndex = v18->fields.funcIndex;
          IsCommandSideEffect = BattleLogicFunction_ProcListInArgs__get_IsCommandSideEffect(procArg_k__BackingField, 0);
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
            sub_1C6BC60(v45, v45);
          BattleActionData__addAction(v11, v45, 0);
          if ( absorptionCount >= 1 )
            NpGaugeAbsorbResult__AddTurn(result, absorptionCount, 0);
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
        v49 = sub_1C41D90(v26, System_IDisposable_TypeInfo, 0);
      }
      (*(void (__fastcall **)(__int64, _QWORD))v49)(v26, *(_QWORD *)(v49 + 8));
      this = v51;
      LODWORD(logic) = v51->fields.logic;
      v17 = v52 + 1;
      if ( (__int64)(v52 + 1) >= (int)logic )
        return v11;
    }
LABEL_59:
    sub_1C6BC60(this, mainAction);
  }
  return v11;
}


void BattleLogicFunction__AfterAddedBuffProcess(
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
  if ( (byte_4CB93B6 & 1) == 0 )
  {
    this = (BattleLogicFunction_o *)sub_1C6BA08(&UnityEngine_Object_TypeInfo);
    byte_4CB93B6 = 1;
  }
  if ( !buffEnt )
    goto LABEL_18;
  if ( buffEnt->fields.effectId >= 1 )
  {
    logic = (UnityEngine_Object_o *)v6->fields.logic;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    this = (BattleLogicFunction_o *)UnityEngine_Object__op_Inequality(logic, 0, 0);
    ServantActor = 0;
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
                                               0);
    }
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    this = (BattleLogicFunction_o *)UnityEngine_Object__op_Inequality(ServantActor, 0, 0);
    if ( ((unsigned __int8)this & 1) != 0 )
    {
      if ( ServantActor )
      {
        BattleActorControl__AddReservedEffectBuffEffectId(
          (BattleActorControl_o *)ServantActor,
          buffEnt->fields.effectId,
          0);
        return;
      }
LABEL_18:
      sub_1C6BC60(this, targetSvtData);
    }
  }
}


void BattleLogicFunction__ApplySubBuffChanges(
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
  const MethodInfo *v22; // x3
  BattleServantData_o **v23; // x23
  const MethodInfo *v24; // x6
  int32_t m_CancellationTokenSource; // w28
  int32_t AuraSum_k__BackingField; // w29
  BattleServantData_o *v27; // x24
  System_Func_object__object__o *v28; // x28
  System_Collections_Generic_IEnumerable_TSource__o *v29; // x0
  System_Collections_Generic_List_TSource__o *v30; // x0
  int32_t v31; // w2
  const MethodInfo *v32; // x3
  System_Func_object__bool__o *v33; // x27
  _BOOL8 v34; // x0
  __int64 v35; // x1
  Il2CppObject *current; // x25
  BattleData_o *v37; // x0
  BattleLogicFunction___c_c *v38; // x0
  System_Func_object__bool__o *_9__79_1; // x25
  Il2CppObject *v40; // x26
  struct BattleLogicFunction___c_StaticFields *static_fields; // x0
  int32_t v42; // w2
  const MethodInfo *v43; // x3
  struct BattleData_o *v44; // x8
  BattleFieldEnvironmentData_o *FieldEnvData_k__BackingField; // x22
  BattleActionEffect_ChangeBgmBuff_o *v46; // x22
  int32_t MaxHp_k__BackingField; // w22
  int32_t Hp_k__BackingField; // w21
  int v49; // w22
  BattleActionEffect_SubChangeMaxHpBuff_o *v50; // x20
  BattleActionEffect_Base_o *v51; // x0
  System_Collections_Generic_List_Enumerator_object__o v52; // [xsp+8h] [xbp-98h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v53; // [xsp+20h] [xbp-80h] BYREF

  if ( (byte_4CB93C5 & 1) == 0 )
  {
    sub_1C6BA08(&Method_BasicHelper_Any_BattleBuffData_BuffData___);
    sub_1C6BA08(&Method_BattleBuffData_IsOverwriteClass__);
    sub_1C6BA08(&BattleActionEffect_ChangeBgmBuff_TypeInfo);
    sub_1C6BA08(&Method_System_Linq_Enumerable_Select_BattleBuffData_BuffData__BattleBuffData_BuffData___);
    sub_1C6BA08(&Method_System_Linq_Enumerable_ToList_BattleBuffData_BuffData___);
    sub_1C6BA08(&Method_System_Collections_Generic_List_Enumerator_BattleBuffData_BuffData__Dispose__);
    sub_1C6BA08(&Method_System_Collections_Generic_List_Enumerator_BattleBuffData_BuffData__MoveNext__);
    sub_1C6BA08(&Method_System_Collections_Generic_List_Enumerator_BattleBuffData_BuffData__get_Current__);
    sub_1C6BA08(&System_Func_BattleBuffData_BuffData__BattleBuffData_BuffData__TypeInfo);
    sub_1C6BA08(&System_Func_BattleBuffData_BuffData__bool__TypeInfo);
    sub_1C6BA08(&Method_System_Collections_Generic_List_BattleBuffData_BuffData__GetEnumerator__);
    sub_1C6BA08(&Method_System_Collections_Generic_List_BattleBuffData_BuffData__ToArray__);
    sub_1C6BA08(&BattleActionEffect_SubChangeMaxHpBuff_TypeInfo);
    sub_1C6BA08(&Method_BattleLogicFunction___c__ApplySubBuffChanges_b__79_1__);
    sub_1C6BA08(&Method_BattleLogicFunction___c__DisplayClass79_0__ApplySubBuffChanges_b__0__);
    sub_1C6BA08(&BattleLogicFunction___c__DisplayClass79_0_TypeInfo);
    sub_1C6BA08(&BattleLogicFunction___c_TypeInfo);
    byte_4CB93C5 = 1;
  }
  memset(&v53, 0, sizeof(v53));
  v18 = sub_1C6BC54(BattleLogicFunction___c__DisplayClass79_0_TypeInfo);
  BattleLogicFunction___c__DisplayClass79_0___ctor((BattleLogicFunction___c__DisplayClass79_0_o *)v18, 0);
  if ( !BasicHelper__IsNullOrEmpty((System_Collections_ICollection_o *)subBuffList, 0) )
  {
    data = this->fields.data;
    if ( data )
    {
      data = (BattleData_o *)BattleData__getServantData(data, targetId, 0);
      if ( v18 )
      {
        *(_QWORD *)(v18 + 16) = data;
        v23 = (BattleServantData_o **)(v18 + 16);
        sub_1C6B9AC((CGThumbnailListItem_o *)(v18 + 16), (int32_t)data, v21, v22);
        data = *(BattleData_o **)(v18 + 16);
        if ( data )
        {
          data = (BattleData_o *)BattleServantData__getAuraIdList((BattleServantData_o *)data, 0);
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
                                           0,
                                           v24);
                  if ( data )
                  {
                    BYTE4(data->fields.player_datalist) = AuraSum_k__BackingField > m_CancellationTokenSource;
                    v27 = (BattleServantData_o *)data;
                    v28 = (System_Func_object__object__o *)sub_1C6BC54(System_Func_BattleBuffData_BuffData__BattleBuffData_BuffData__TypeInfo);
                    System_Func_object__object____ctor(
                      v28,
                      (Il2CppObject *)v18,
                      Method_BattleLogicFunction___c__DisplayClass79_0__ApplySubBuffChanges_b__0__,
                      0);
                    v29 = (System_Collections_Generic_IEnumerable_TSource__o *)System_Linq_Enumerable__Select_object__object_(
                                                                                 (System_Collections_Generic_IEnumerable_TSource__o *)subBuffList,
                                                                                 (System_Func_TSource__TResult__o *)v28,
                                                                                 (const MethodInfo_3171B10 *)Method_System_Linq_Enumerable_Select_BattleBuffData_BuffData__BattleBuffData_BuffData___);
                    v30 = System_Linq_Enumerable__ToList_object_(
                            v29,
                            (const MethodInfo_317FEE4 *)Method_System_Linq_Enumerable_ToList_BattleBuffData_BuffData___);
                    *(_QWORD *)&v27->fields._frameType_k__BackingField = v30;
                    sub_1C6B9AC(
                      (CGThumbnailListItem_o *)&v27->fields._frameType_k__BackingField,
                      (int32_t)v30,
                      v31,
                      v32);
                    v33 = (System_Func_object__bool__o *)sub_1C6BC54(System_Func_BattleBuffData_BuffData__bool__TypeInfo);
                    System_Func_object__bool____ctor(v33, 0, Method_BattleBuffData_IsOverwriteClass__, 0);
                    data = (BattleData_o *)BasicHelper__Any_object_(
                                             (System_Collections_Generic_List_T__o *)subBuffList,
                                             (System_Func_T__bool__o *)v33,
                                             (const MethodInfo_3124430 *)Method_BasicHelper_Any_BattleBuffData_BuffData___);
                    if ( ((unsigned __int8)data & 1) != 0 )
                      LODWORD(v27->fields.userSvtId.fields.currentCryptoKey) = 7;
                    if ( args )
                    {
                      data = (BattleData_o *)BattleLogicFunction_ProcListInArgs__get_ParentActBuffData(args, 0);
                      if ( actionData )
                      {
                        BattleActionData__setBuffData(
                          actionData,
                          (BattleActionData_BuffData_o *)v27,
                          baseVals,
                          (BattleActionData_BuffData_o *)data,
                          0);
                        if ( subBuffList )
                        {
                          System_Collections_Generic_List_object___GetEnumerator(
                            (System_Collections_Generic_List_Enumerator_T__o *)&v52,
                            (System_Collections_Generic_List_object__o *)subBuffList,
                            (const MethodInfo_380146C *)Method_System_Collections_Generic_List_BattleBuffData_BuffData__GetEnumerator__);
                          v53 = v52;
                          while ( 1 )
                          {
                            v34 = System_Collections_Generic_List_Enumerator_object___MoveNext(
                                    &v53,
                                    (const MethodInfo_3586524 *)Method_System_Collections_Generic_List_Enumerator_BattleBuffData_BuffData__MoveNext__);
                            if ( !v34 )
                              break;
                            current = v53.fields._current;
                            if ( !v53.fields._current )
                              sub_1C6BC60(v34, v35);
                            v37 = this->fields.data;
                            if ( !v37 )
                              sub_1C6BC60(0, v35);
                            BattleData__RemoveDoNotSelectCommandCardBuff(
                              v37,
                              (int32_t)v53.fields._current[1].klass,
                              *v23,
                              0);
                            if ( BattleBuffData__CheckInvalidSacrificeIndiv((BattleBuffData_BuffData_o *)current, 0) )
                              args->fields.updateField = 1;
                          }
                          System_Collections_Generic_List_Enumerator_object___Dispose(
                            &v53,
                            (const MethodInfo_3586520 *)Method_System_Collections_Generic_List_Enumerator_BattleBuffData_BuffData__Dispose__);
                          v38 = BattleLogicFunction___c_TypeInfo;
                          if ( !BattleLogicFunction___c_TypeInfo->_2.cctor_finished )
                          {
                            j_il2cpp_runtime_class_init_0(BattleLogicFunction___c_TypeInfo);
                            v38 = BattleLogicFunction___c_TypeInfo;
                          }
                          _9__79_1 = (System_Func_object__bool__o *)v38->static_fields->__9__79_1;
                          if ( !_9__79_1 )
                          {
                            if ( !v38->_2.cctor_finished )
                            {
                              j_il2cpp_runtime_class_init_0(v38);
                              v38 = BattleLogicFunction___c_TypeInfo;
                            }
                            v40 = (Il2CppObject *)v38->static_fields->__9;
                            _9__79_1 = (System_Func_object__bool__o *)sub_1C6BC54(System_Func_BattleBuffData_BuffData__bool__TypeInfo);
                            System_Func_object__bool____ctor(
                              _9__79_1,
                              v40,
                              Method_BattleLogicFunction___c__ApplySubBuffChanges_b__79_1__,
                              0);
                            static_fields = BattleLogicFunction___c_TypeInfo->static_fields;
                            static_fields->__9__79_1 = (struct System_Func_BattleBuffData_BuffData__bool__o *)_9__79_1;
                            sub_1C6B9AC((CGThumbnailListItem_o *)&static_fields->__9__79_1, (int32_t)_9__79_1, v42, v43);
                          }
                          data = (BattleData_o *)BasicHelper__Any_object_(
                                                   (System_Collections_Generic_List_T__o *)subBuffList,
                                                   (System_Func_T__bool__o *)_9__79_1,
                                                   (const MethodInfo_3124430 *)Method_BasicHelper_Any_BattleBuffData_BuffData___);
                          if ( ((unsigned __int8)data & 1) != 0 )
                          {
                            v44 = this->fields.data;
                            if ( !v44 )
                              goto LABEL_45;
                            FieldEnvData_k__BackingField = v44->fields._FieldEnvData_k__BackingField;
                            data = (BattleData_o *)System_Collections_Generic_List_object___ToArray(
                                                     (System_Collections_Generic_List_object__o *)subBuffList,
                                                     (const MethodInfo_38024CC *)Method_System_Collections_Generic_List_BattleBuffData_BuffData__ToArray__);
                            if ( !FieldEnvData_k__BackingField )
                              goto LABEL_45;
                            BattleFieldEnvironmentData__RemoveBgmRelateBuff(
                              FieldEnvData_k__BackingField,
                              (BattleBuffData_BuffData_array *)data,
                              0);
                            v46 = (BattleActionEffect_ChangeBgmBuff_o *)sub_1C6BC54(BattleActionEffect_ChangeBgmBuff_TypeInfo);
                            BattleActionEffect_ChangeBgmBuff___ctor(v46, 0);
                            BattleActionData_BuffData__SetActionEffectProc(
                              (BattleActionData_BuffData_o *)v27,
                              (BattleActionEffect_Base_o *)v46,
                              0);
                          }
                          data = (BattleData_o *)*v23;
                          if ( *v23 )
                          {
                            BattleServantData__FixHpWhenHpBaseBuffReleased((BattleServantData_o *)data, 0);
                            data = (BattleData_o *)*v23;
                            if ( *v23 )
                            {
                              MaxHp_k__BackingField = svtSnapShotOnBuffUpdate->fields._MaxHp_k__BackingField;
                              if ( MaxHp_k__BackingField == BattleServantData__getMaxHp((BattleServantData_o *)data, 0) )
                                return;
                              data = (BattleData_o *)*v23;
                              if ( *v23 )
                              {
                                data = (BattleData_o *)BattleServantData__getNowHp((BattleServantData_o *)data, 0);
                                if ( *v23 )
                                {
                                  Hp_k__BackingField = svtSnapShotOnBuffUpdate->fields._Hp_k__BackingField;
                                  v49 = (int)data;
                                  BattleServantData__ResetBaseHpBuffActivedTimeHealValue(*v23, 0);
                                  if ( *v23 )
                                  {
                                    BattleActionData__addReflectLogicResultServantId(
                                      actionData,
                                      (*v23)->fields.uniqueId,
                                      0);
                                    v50 = (BattleActionEffect_SubChangeMaxHpBuff_o *)sub_1C6BC54(BattleActionEffect_SubChangeMaxHpBuff_TypeInfo);
                                    BattleActionEffect_SubChangeMaxHpBuff___ctor(v50, 0);
                                    data = (BattleData_o *)System_Collections_Generic_List_object___ToArray(
                                                             (System_Collections_Generic_List_object__o *)subBuffList,
                                                             (const MethodInfo_38024CC *)Method_System_Collections_Generic_List_BattleBuffData_BuffData__ToArray__);
                                    if ( *v23 )
                                    {
                                      if ( v50 )
                                      {
                                        v51 = (BattleActionEffect_Base_o *)((__int64 (__fastcall *)(BattleActionEffect_SubChangeMaxHpBuff_o *, BattleData_o *, _QWORD, _QWORD, const MethodInfo *))v50->klass->vtable._7_InitBuff.methodPtr)(
                                                                             v50,
                                                                             data,
                                                                             (unsigned int)(*v23)->fields.uniqueId,
                                                                             (unsigned int)(v49 - Hp_k__BackingField),
                                                                             v50->klass->vtable._7_InitBuff.method);
                                        BattleActionData_BuffData__SetActionEffectProc(
                                          (BattleActionData_BuffData_o *)v27,
                                          v51,
                                          0);
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
          }
        }
      }
    }
LABEL_45:
    sub_1C6BC60(data, v19);
  }
}


void BattleLogicFunction__BehaveLinkageBuffAsFamily(
        BattleLogicFunction_o *this,
        BattleBuffData_BuffData_o *buffData,
        BattleLogicFunctionProcess_FunctionTargetCheck_o *funcTarget,
        const MethodInfo *method)
{
  __int64 v7; // x21
  BattleData_o *data; // x0
  __int64 v9; // x1
  int32_t v10; // w2
  const MethodInfo *v11; // x3
  __int64 v12; // x8
  BattleServantData_o *ServantData; // x0
  int32_t v14; // w2
  const MethodInfo *v15; // x3
  System_Func_int__int__o *v16; // x20
  System_Collections_Generic_IEnumerable_TSource__o *v17; // x0
  struct System_Int32_array *v18; // x0
  int32_t v19; // w2
  const MethodInfo *v20; // x3
  System_Collections_Generic_IEnumerable_TSource__o *v21; // x0
  struct System_Int32_array *v22; // x0
  int32_t v23; // w2
  const MethodInfo *v24; // x3

  if ( (byte_4CB93C3 & 1) == 0 )
  {
    sub_1C6BA08(&Method_System_Linq_Enumerable_Select_int__int___);
    sub_1C6BA08(&Method_System_Linq_Enumerable_ToArray_int___);
    sub_1C6BA08(&System_Func_int__int__TypeInfo);
    sub_1C6BA08(&Method_BattleLogicFunction___c__DisplayClass77_0__BehaveLinkageBuffAsFamily_b__0__);
    sub_1C6BA08(&BattleLogicFunction___c__DisplayClass77_0_TypeInfo);
    byte_4CB93C3 = 1;
  }
  v7 = sub_1C6BC54(BattleLogicFunction___c__DisplayClass77_0_TypeInfo);
  BattleLogicFunction___c__DisplayClass77_0___ctor((BattleLogicFunction___c__DisplayClass77_0_o *)v7, 0);
  if ( !v7 )
    goto LABEL_13;
  *(_QWORD *)(v7 + 16) = funcTarget;
  sub_1C6B9AC((CGThumbnailListItem_o *)(v7 + 16), (int32_t)funcTarget, v10, v11);
  v12 = *(_QWORD *)(v7 + 16);
  if ( !v12 )
    goto LABEL_13;
  data = this->fields.data;
  if ( !data )
    goto LABEL_13;
  ServantData = BattleData__getServantData(data, *(_DWORD *)(v12 + 32), 0);
  *(_QWORD *)(v7 + 24) = ServantData;
  sub_1C6B9AC((CGThumbnailListItem_o *)(v7 + 24), (int32_t)ServantData, v14, v15);
  if ( !*(_QWORD *)(v7 + 24) )
    return;
  v16 = (System_Func_int__int__o *)sub_1C6BC54(System_Func_int__int__TypeInfo);
  System_Func_int__int____ctor(
    v16,
    (Il2CppObject *)v7,
    Method_BattleLogicFunction___c__DisplayClass77_0__BehaveLinkageBuffAsFamily_b__0__,
    0);
  if ( !buffData )
LABEL_13:
    sub_1C6BC60(data, v9);
  if ( !BasicHelper__IsNullOrEmpty((System_Collections_ICollection_o *)buffData->fields.addIndividualty, 0) )
  {
    v17 = (System_Collections_Generic_IEnumerable_TSource__o *)System_Linq_Enumerable__Select_int__int_(
                                                                 (System_Collections_Generic_IEnumerable_TSource__o *)buffData->fields.addIndividualty,
                                                                 (System_Func_TSource__TResult__o *)v16,
                                                                 (const MethodInfo_316E7FC *)Method_System_Linq_Enumerable_Select_int__int___);
    v18 = System_Linq_Enumerable__ToArray_int_(
            v17,
            (const MethodInfo_317B0B0 *)Method_System_Linq_Enumerable_ToArray_int___);
    buffData->fields.familyLinkageIds = v18;
    sub_1C6B9AC((CGThumbnailListItem_o *)&buffData->fields.familyLinkageIds, (int32_t)v18, v19, v20);
    BattleBuffData_BuffData__onState(buffData, 0x400000, 0);
  }
  if ( !BasicHelper__IsNullOrEmpty((System_Collections_ICollection_o *)buffData->fields.linkageTargetIndividualty, 0) )
  {
    v21 = (System_Collections_Generic_IEnumerable_TSource__o *)System_Linq_Enumerable__Select_int__int_(
                                                                 (System_Collections_Generic_IEnumerable_TSource__o *)buffData->fields.linkageTargetIndividualty,
                                                                 (System_Func_TSource__TResult__o *)v16,
                                                                 (const MethodInfo_316E7FC *)Method_System_Linq_Enumerable_Select_int__int___);
    v22 = System_Linq_Enumerable__ToArray_int_(
            v21,
            (const MethodInfo_317B0B0 *)Method_System_Linq_Enumerable_ToArray_int___);
    buffData->fields.linkageTargetIndividualty = v22;
    sub_1C6B9AC((CGThumbnailListItem_o *)&buffData->fields.linkageTargetIndividualty, (int32_t)v22, v23, v24);
    BattleBuffData_BuffData__onState(buffData, 0x400000, 0);
  }
}


void BattleLogicFunction__ChangeBGMCostume(
        BattleLogicFunction_o *this,
        DataVals_o *baseVals,
        BattleActionData_o *actionData,
        const MethodInfo *method)
{
  struct FunctionEntity_o *funcEnt; // x8
  struct System_Int32_array *vals; // x8
  il2cpp_array_size_t max_length; // x9
  BattleLogicFunction_o *v9; // x20
  unsigned int v10; // w8
  struct BattleData_o *data; // x9
  struct BattleData_o *v12; // x9
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
  max_length = vals->max_length;
  v9 = this;
  if ( !max_length )
  {
    v10 = 1;
    goto LABEL_10;
  }
  if ( !(_DWORD)max_length )
    goto LABEL_22;
  v10 = vals->m_Items[0];
  if ( (v10 & 0x80000000) == 0 )
  {
LABEL_10:
    this = (BattleLogicFunction_o *)this->fields.data;
    if ( this )
    {
      data = this[3].fields.data;
      if ( data )
      {
        if ( (signed int)v10 >= SLODWORD(data->fields.m_CancellationTokenSource) )
          v10 = 1;
        goto LABEL_14;
      }
    }
LABEL_21:
    sub_1C6BC60(this, baseVals);
  }
  this = (BattleLogicFunction_o *)this->fields.data;
  if ( !this )
    goto LABEL_21;
  v10 = 1;
LABEL_14:
  v12 = this[3].fields.data;
  if ( !v12 )
    goto LABEL_21;
  if ( v10 >= LODWORD(v12->fields.m_CancellationTokenSource) )
LABEL_22:
    sub_1C6BC68(this);
  v13 = *((_DWORD *)&v12->fields.rootfsm + v10);
  if ( v13 == -1 )
  {
    BgmMasterFromCostume = 0;
  }
  else
  {
    BgmMasterFromCostume = BattleData__getBgmMasterFromCostume((BattleData_o *)this, v13, 0);
    if ( !BgmMasterFromCostume )
      BgmMasterFromCostume = BattleLogicFunction__ChangeBgmSvt(v9, v13, actionData, method);
  }
  BattleLogicFunction__ChangeBgmOrReset(v9, BgmMasterFromCostume, baseVals, method);
}


void BattleLogicFunction__ChangeBgmOrReset(
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
  if ( (byte_4CB93F3 & 1) == 0 )
  {
    sub_1C6BA08(&Generator_BGMFromChangeBGMFunc_TypeInfo);
    this = (BattleLogicFunction_o *)sub_1C6BA08(&UnityEngine_Object_TypeInfo);
    byte_4CB93F3 = 1;
  }
  data = v6->fields.data;
  if ( !data )
    goto LABEL_16;
  FieldEnvData_k__BackingField = data->fields._FieldEnvData_k__BackingField;
  if ( bgmEnt )
  {
    id = bgmEnt->fields.id;
    v10 = (Generator_BGMFromChangeBGMFunc_o *)sub_1C6BC54(Generator_BGMFromChangeBGMFunc_TypeInfo);
    Generator_BGMFromChangeBGMFunc___ctor(v10, data, id, baseVals, 1, 0);
    if ( !FieldEnvData_k__BackingField )
      goto LABEL_16;
    ((void (__fastcall *)(struct BattleFieldEnvironmentData_o *, Generator_BGMFromChangeBGMFunc_o *, __int64, _QWORD, const MethodInfo *))FieldEnvData_k__BackingField->klass->vtable._6_AddBGM.methodPtr)(
      FieldEnvData_k__BackingField,
      v10,
      2,
      0,
      FieldEnvData_k__BackingField->klass->vtable._6_AddBGM.method);
  }
  else
  {
    if ( !FieldEnvData_k__BackingField )
      goto LABEL_16;
    ((void (__fastcall *)(struct BattleFieldEnvironmentData_o *, const MethodInfo *, DataVals_o *, const MethodInfo *))FieldEnvData_k__BackingField->klass->vtable._7_RemoveAfterResetBGM.methodPtr)(
      data->fields._FieldEnvData_k__BackingField,
      FieldEnvData_k__BackingField->klass->vtable._7_RemoveAfterResetBGM.method,
      baseVals,
      method);
  }
  logic = (UnityEngine_Object_o *)v6->fields.logic;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(logic, 0, 0) )
  {
    this = (BattleLogicFunction_o *)v6->fields.logic;
    if ( this )
    {
      BattleLogic__loadBgmName((BattleLogic_o *)this, 0, 0);
      this = (BattleLogicFunction_o *)v6->fields.logic;
      if ( this )
      {
        BattleLogic__PlayCurrentBgm((BattleLogic_o *)this, 0.0, 0);
        return;
      }
    }
LABEL_16:
    sub_1C6BC60(this, bgmEnt);
  }
}


// local variable allocation has failed, the output may be wrong!
BgmEntity_o *BattleLogicFunction__ChangeBgmSvt(
        BattleLogicFunction_o *this,
        int32_t uniqueID,
        BattleActionData_o *actionData,
        const MethodInfo *method)
{
  long double v4; // q0
  BgmEntity_o *result; // x0
  __int64 v9; // x0
  __int64 v10; // x0
  _QWORD *MasterData_object; // x0
  struct BattleSkillInfoData_o *skillInfo; // x8
  SkillLvMaster_o *v13; // x22
  struct BattleSkillInfoData_o *v14; // x8
  SkillLvEntity_o *v15; // x22
  DataMasterBase_TMaster__TEntity__PKType__o *v16; // x20
  BattleData_o *data; // x8
  System_Collections_Generic_List_object__o *v18; // x21
  System_Int32_array *v19; // x19
  int32_t v20; // w22
  int32_t v21; // w23
  int64_t v22; // x24
  bool IsOpen; // w23
  __int64 v24; // x8
  Il2CppObject *entity; // [xsp+8h] [xbp-68h] BYREF

  if ( (byte_4CB93F2 & 1) == 0 )
  {
    sub_1C6BA08(&Method_System_Array_IndexOf_int___);
    sub_1C6BA08(&CondType_TypeInfo);
    sub_1C6BA08(&Method_DataManager_GetMasterData_BgmMaster___);
    sub_1C6BA08(&Method_DataManager_GetMasterData_SkillLvMaster___);
    sub_1C6BA08(&Method_DataMasterBase_BgmMaster__BgmEntity__int__TryGetEntity__);
    sub_1C6BA08(&Method_System_Collections_Generic_List_SkillLvEntity_SvtChangeBgm__get_Count__);
    sub_1C6BA08(&Method_System_Collections_Generic_List_SkillLvEntity_SvtChangeBgm__get_Item__);
    sub_1C6BA08(&Method_SingletonMonoBehaviour_DataManager__getInstance__);
    sub_1C6BA08(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_4CB93F2 = 1;
  }
  result = 0;
  entity = 0;
  if ( uniqueID != -1 && actionData )
  {
    v9 = *((_QWORD *)Method_SingletonMonoBehaviour_DataManager__getInstance__ + 4);
    if ( (*(_BYTE *)(v9 + 309) & 1) == 0 )
      v9 = sub_1C41A9C(v4);
    v10 = *(_QWORD *)(*(_QWORD *)(v9 + 192) + 16LL);
    if ( (*(_BYTE *)(v10 + 309) & 1) == 0 )
      v10 = sub_1C41A9C(v4);
    MasterData_object = **(_QWORD ***)(v10 + 184);
    if ( !MasterData_object )
      goto LABEL_35;
    MasterData_object = DataManager__GetMasterData_object_(
                          (DataManager_o *)MasterData_object,
                          (const MethodInfo_313B368 *)Method_DataManager_GetMasterData_SkillLvMaster___);
    skillInfo = actionData->fields.skillInfo;
    if ( !skillInfo )
      goto LABEL_35;
    v13 = (SkillLvMaster_o *)MasterData_object;
    MasterData_object = ((_QWORD *(__fastcall *)(struct BattleSkillInfoData_o *__return_ptr, struct BattleSkillInfoData_o *, const MethodInfo *))skillInfo->klass->vtable._5_get_skillId.methodPtr)(
                          skillInfo,
                          actionData->fields.skillInfo,
                          skillInfo->klass->vtable._5_get_skillId.method);
    v14 = actionData->fields.skillInfo;
    if ( !v14 )
      goto LABEL_35;
    if ( !v13 )
      goto LABEL_35;
    v15 = SkillLvMaster__GetEntity(v13, (int32_t)MasterData_object, v14->fields.skilllv, 0);
    MasterData_object = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3A4F3B4 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !MasterData_object )
      goto LABEL_35;
    MasterData_object = DataManager__GetMasterData_object_(
                          (DataManager_o *)MasterData_object,
                          (const MethodInfo_313B368 *)Method_DataManager_GetMasterData_BgmMaster___);
    if ( !v15 )
      goto LABEL_35;
    v16 = (DataMasterBase_TMaster__TEntity__PKType__o *)MasterData_object;
    MasterData_object = SkillLvEntity__GetSvtChangeBgm(v15, 0);
    data = this->fields.data;
    if ( !data )
      goto LABEL_35;
    v18 = (System_Collections_Generic_List_object__o *)MasterData_object;
    MasterData_object = BattleData__getPlayerServantData(data, uniqueID, 0);
    if ( !MasterData_object )
      goto LABEL_35;
    MasterData_object = BattleServantData__getIndividualities((BattleServantData_o *)MasterData_object, 0, 1, 0, 1, 0);
    if ( !v18 )
      goto LABEL_35;
    if ( v18->fields._size >= 1 )
    {
      v19 = (System_Int32_array *)MasterData_object;
      v20 = 0;
      while ( 1 )
      {
        MasterData_object = System_Collections_Generic_List_object___get_Item(
                              v18,
                              v20,
                              (const MethodInfo_38006A4 *)Method_System_Collections_Generic_List_SkillLvEntity_SvtChangeBgm__get_Item__);
        if ( !MasterData_object )
          break;
        if ( System_Array__IndexOf_int_(
               v19,
               *((_DWORD *)MasterData_object + 4),
               (const MethodInfo_324317C *)Method_System_Array_IndexOf_int___) != -1 )
        {
          MasterData_object = System_Collections_Generic_List_object___get_Item(
                                v18,
                                v20,
                                (const MethodInfo_38006A4 *)Method_System_Collections_Generic_List_SkillLvEntity_SvtChangeBgm__get_Item__);
          if ( !MasterData_object )
            break;
          v21 = *((_DWORD *)MasterData_object + 5);
          MasterData_object = System_Collections_Generic_List_object___get_Item(
                                v18,
                                v20,
                                (const MethodInfo_38006A4 *)Method_System_Collections_Generic_List_SkillLvEntity_SvtChangeBgm__get_Item__);
          if ( !MasterData_object )
            break;
          v22 = *((int *)MasterData_object + 6);
          if ( !CondType_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(CondType_TypeInfo);
          IsOpen = CondType__IsOpen(46, v21, v22, 0, 0, 0);
          MasterData_object = System_Collections_Generic_List_object___get_Item(
                                v18,
                                v20,
                                (const MethodInfo_38006A4 *)Method_System_Collections_Generic_List_SkillLvEntity_SvtChangeBgm__get_Item__);
          if ( !MasterData_object || !v16 )
            break;
          if ( IsOpen )
            v24 = 32;
          else
            v24 = 28;
          if ( DataMasterBase_object__object__int___TryGetEntity(
                 v16,
                 &entity,
                 *(_DWORD *)((char *)MasterData_object + v24),
                 (const MethodInfo_33F9128 *)Method_DataMasterBase_BgmMaster__BgmEntity__int__TryGetEntity__) )
          {
            return (BgmEntity_o *)entity;
          }
        }
        if ( ++v20 >= v18->fields._size )
          return (BgmEntity_o *)entity;
      }
LABEL_35:
      sub_1C6BC60(MasterData_object, *(_QWORD *)&uniqueID);
    }
    return (BgmEntity_o *)entity;
  }
  return result;
}


void BattleLogicFunction__CheckFuncInstantDeath(
        BattleLogicFunction_o *this,
        BattleServantData_o *actionSvtData,
        BattleServantData_o *targetSvtData,
        DataVals_o *baseVals,
        bool isTreasureDevice,
        bool isIgnoreResist,
        int32_t *seedRate,
        int32_t *baseRate,
        BattleLogicFunction_FuncActionResult_o *result,
        const MethodInfo *method)
{
  int32_t Param; // w25
  int v18; // w27
  int32_t uniqueId; // w8
  BattleBuffData_o *BuffData; // x28
  BattleBuffData_CheckIndividualitiesData_o *v21; // x29
  BattleBuffData_BuffData_o *v22; // x28
  BattleLogicFunction_o *Next; // x0
  int32_t InstantDeathRate; // w0
  BattleLogicFunction_o *v25; // x0
  const MethodInfo *v26; // [xsp+8h] [xbp-78h]
  bool isResisted[4]; // [xsp+1Ch] [xbp-64h] BYREF

  if ( (byte_4CB9401 & 1) == 0 )
  {
    this = (BattleLogicFunction_o *)sub_1C6BA08(&BattleBuffData_CheckIndividualitiesData_TypeInfo);
    byte_4CB9401 = 1;
  }
  if ( !baseVals )
LABEL_23:
    sub_1C6BC60(this, actionSvtData);
  Param = DataVals__GetParam(baseVals, 0, 0, 0);
  this = (BattleLogicFunction_o *)DataVals__GetParam(baseVals, 242, 0, 0);
  v18 = (int)this;
  isResisted[0] = 0;
  if ( actionSvtData )
  {
    uniqueId = actionSvtData->fields.uniqueId;
    if ( !targetSvtData )
      goto LABEL_23;
  }
  else
  {
    uniqueId = -1;
    if ( !targetSvtData )
      goto LABEL_23;
  }
  if ( uniqueId == targetSvtData->fields.uniqueId && DataVals__GetParam(baseVals, 58, 0, 0) >= 1 )
  {
    *seedRate = 0;
    *baseRate = 1000;
    return;
  }
  BuffData = BattleServantData__get_BuffData(targetSvtData, 0);
  v21 = (BattleBuffData_CheckIndividualitiesData_o *)sub_1C6BC54(BattleBuffData_CheckIndividualitiesData_TypeInfo);
  BattleBuffData_CheckIndividualitiesData___ctor_45921048(v21, targetSvtData, actionSvtData, 0, 0, 0, 0, 1, 0);
  if ( !BuffData )
    goto LABEL_23;
  this = (BattleLogicFunction_o *)BattleBuffData__GetFirstMatchCondPriorityBuff(BuffData, 164, v21, 0, 0, 0, 0, 0);
  if ( this )
  {
    if ( !result )
      goto LABEL_23;
    v22 = (BattleBuffData_BuffData_o *)this;
    result->fields._IsExistSubstituteBuff_k__BackingField = 1;
    Next = (BattleLogicFunction_o *)BattleRandom__getNext(1000, 0);
    *seedRate = (int)Next;
    InstantDeathRate = BattleLogicFunction__GetInstantDeathRate(
                         Next,
                         (float)Param,
                         targetSvtData,
                         actionSvtData,
                         isTreasureDevice,
                         isIgnoreResist,
                         v18 == 1,
                         (int32_t)Next,
                         isResisted,
                         v22,
                         v26);
    *baseRate = InstantDeathRate;
    if ( *seedRate < InstantDeathRate )
    {
      v22->fields._IsSubstituteSuccess_k__BackingField = 1;
      targetSvtData->fields._IsSubstituteBuffActive_k__BackingField = 1;
      v22->fields.isUse = 1;
      BattleLogicFunction_FuncActionResult__SetResultBySubstituteBuff(result, v22, 0, 0);
LABEL_17:
      *seedRate = 1000;
      *baseRate = 0;
      return;
    }
    if ( isResisted[0] )
    {
      v22->fields._IsSubstituteResisted_k__BackingField = 1;
      targetSvtData->fields._IsSubstituteBuffActive_k__BackingField = 1;
      BattleLogicFunction_FuncActionResult__SetResultBySubstituteBuff(result, v22, 1, 0);
    }
  }
  else
  {
    if ( BattleServantData__checkAvoidInstantDeath(targetSvtData, actionSvtData, 0) )
      goto LABEL_17;
    v25 = (BattleLogicFunction_o *)BattleRandom__getNext(1000, 0);
    *seedRate = (int)v25;
    this = (BattleLogicFunction_o *)BattleLogicFunction__GetInstantDeathRate(
                                      v25,
                                      (float)Param,
                                      targetSvtData,
                                      actionSvtData,
                                      isTreasureDevice,
                                      isIgnoreResist,
                                      v18 == 1,
                                      (int32_t)v25,
                                      isResisted,
                                      0,
                                      v26);
    *baseRate = (int)this;
    if ( !result )
      goto LABEL_23;
    result->fields._IsResisted_k__BackingField = isResisted[0];
  }
}


int32_t BattleLogicFunction__ConvertLogicBuffTurn(
        BattleLogicFunction_o *this,
        int32_t dispTurn,
        bool isProgressSelfTurn,
        const MethodInfo *method)
{
  return 2 * dispTurn - isProgressSelfTurn;
}


void BattleLogicFunction__CreateMasterBuffEffect(
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

  if ( (byte_4CB93FA & 1) == 0 )
  {
    sub_1C6BA08(&BattleActionData_MasterBuffData_TypeInfo);
    byte_4CB93FA = 1;
  }
  v12 = (BattleActionData_MasterBuffData_o *)sub_1C6BC54(BattleActionData_MasterBuffData_TypeInfo);
  BattleActionData_MasterBuffData___ctor(v12, funcEnt, 0);
  FunctionObject = BattleLogicFunction__getFunctionObject(
                     v13,
                     funcEnt,
                     -1,
                     index,
                     isCommandSideEffect,
                     (BattleActionData_BuffData_o *)v12,
                     v14);
  if ( !action )
    sub_1C6BC60(FunctionObject, v16);
  BattleActionData__setBuffData(action, FunctionObject, baseVals, 0, 0);
}


void BattleLogicFunction__DebugLog(BattleLogicFunction_o *this, System_String_o *str, const MethodInfo *method)
{
  ;
}


void BattleLogicFunction__FunctionAddBattleMissionValue(
        BattleLogicFunction_o *this,
        FunctionEntity_o *funcEnt,
        const MethodInfo *method)
{
  BattleData_o *IsExistBattleMissionValueInMasterData; // x0
  __int64 v6; // x1
  struct System_Int32_array *vals; // x8
  int v8; // w23
  unsigned int max_length; // w10
  unsigned int v10; // w9
  int32_t v11; // w22
  int32_t v12; // w21
  int32_t battleValueKey[2]; // [xsp+8h] [xbp-38h] BYREF

  *(_QWORD *)battleValueKey = 0;
  IsExistBattleMissionValueInMasterData = (BattleData_o *)BattleLogicFunction__IsExistBattleMissionValueInMasterData(
                                                            funcEnt,
                                                            (const MethodInfo *)funcEnt);
  if ( ((unsigned __int8)IsExistBattleMissionValueInMasterData & 1) != 0 )
  {
    if ( !funcEnt || (vals = funcEnt->fields.vals) == 0 )
LABEL_14:
      sub_1C6BC60(IsExistBattleMissionValueInMasterData, v6);
    v8 = 1;
    while ( 1 )
    {
      max_length = vals->max_length;
      v10 = v8 - 1;
      if ( v8 - 1 >= (int)max_length )
        break;
      if ( v10 >= max_length || v8 >= max_length )
        sub_1C6BC68(IsExistBattleMissionValueInMasterData);
      v11 = vals->m_Items[v10];
      v12 = vals->m_Items[v8];
      if ( FunctionEntity__IsToQuoteBattleValue(funcEnt, &battleValueKey[1], 0) )
      {
        IsExistBattleMissionValueInMasterData = this->fields.data;
        if ( !IsExistBattleMissionValueInMasterData )
          goto LABEL_14;
        if ( BattleData__TryGetBattleValue(IsExistBattleMissionValueInMasterData, battleValueKey[1], battleValueKey, 0) )
          v12 = battleValueKey[0];
      }
      IsExistBattleMissionValueInMasterData = this->fields.data;
      if ( IsExistBattleMissionValueInMasterData )
      {
        BattleData__AddBattleMissionValue(IsExistBattleMissionValueInMasterData, v11, v12, 0);
        vals = funcEnt->fields.vals;
        v8 += 2;
        if ( vals )
          continue;
      }
      goto LABEL_14;
    }
  }
}


BattleActionData_o *BattleLogicFunction__FunctionAddBattlePoint(
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

  if ( (byte_4CB93FB & 1) == 0 )
  {
    sub_1C6BA08(&BattleActionData_TypeInfo);
    byte_4CB93FB = 1;
  }
  data = this->fields.data;
  if ( !data )
    goto LABEL_22;
  data = (BattleData_o *)BattleData__getServantData(data, targetId, 0);
  if ( !data )
    goto LABEL_22;
  v10 = (BattleServantData_o *)data;
  data = (BattleData_o *)BattleServantData__checkPlayer((BattleServantData_o *)data, 0);
  v11 = 0;
  if ( ((unsigned __int8)data & 1) != 0 )
  {
    if ( !baseVals )
      goto LABEL_22;
    Param = DataVals__GetParam(baseVals, 173, 0, 0);
    v13 = DataVals__GetParam(baseVals, 174, 0, 0);
    v14 = DataVals__GetParam(baseVals, 176, 0, 0) != 0;
    v15 = BattleServantData__AddBattlePoint(v10, Param, v13, v14, 0);
    BattlePointData = BattleServantData__GetBattlePointData(v10, Param, 0);
    if ( BattlePointData )
      v17 = !BattlePointData->fields._IsShowedEffectAfterLastChanged_k__BackingField;
    else
      v17 = 0;
    data = (BattleData_o *)DataVals__GetParam(baseVals, 175, 0, 0);
    v18 = (int)data;
    if ( (_DWORD)data == 1 )
      goto LABEL_14;
    if ( !procArg )
      goto LABEL_22;
    v11 = 0;
    if ( BattleLogicFunction_ProcListInArgs__get_IsShowBattlePointEffect(procArg, 0) )
    {
      if ( !(v17 | v15) )
        return 0;
LABEL_14:
      data = (BattleData_o *)BattleServantData__GetBattlePointData(v10, Param, 0);
      if ( data )
        BattlePointData__NotifyShowedEffect((BattlePointData_o *)data, 0);
      if ( procArg )
      {
        funcIndex = baseVals->fields.funcIndex;
        uniqueId = v10->fields.uniqueId;
        funcEnt = baseVals->fields.funcEnt;
        IsCommandSideEffect = BattleLogicFunction_ProcListInArgs__get_IsCommandSideEffect(procArg, 0);
        data = (BattleData_o *)BattleLogicFunction__getFunctionObject(
                                 (BattleLogicFunction_o *)IsCommandSideEffect,
                                 funcEnt,
                                 uniqueId,
                                 funcIndex,
                                 IsCommandSideEffect,
                                 0,
                                 v23);
        if ( data )
        {
          data->fields.turnCount = v18;
          LOBYTE(data->fields.wavecount) = 1;
          v24 = (BattleActionData_BuffData_o *)data;
          v11 = (BattleActionData_o *)sub_1C6BC54(BattleActionData_TypeInfo);
          BattleActionData___ctor(v11, 0);
          if ( v11 )
          {
            BattleActionData__setBuffData(v11, v24, baseVals, 0, 0);
            return v11;
          }
        }
      }
LABEL_22:
      sub_1C6BC60(data, procArg);
    }
  }
  return v11;
}


// local variable allocation has failed, the output may be wrong!
void BattleLogicFunction__FunctionAddBattleValue(
        BattleLogicFunction_o *this,
        int32_t actorId,
        FunctionEntity_o *funcEnt,
        const MethodInfo *method)
{
  BattleServantData_o *IsExistBattleValueInMasterData; // x0
  __int64 v8; // x1
  char v9; // w21
  struct System_Int32_array *vals; // x8
  BattleServantData_o *v11; // x22
  unsigned int v12; // w9
  unsigned int max_length; // w10
  unsigned int v14; // w25
  int32_t v15; // w23
  int32_t DealtDamage; // w0
  System_Collections_Generic_List_int____o *DealtDamageSpritList_k__BackingField; // x2
  int32_t v18; // w24
  int32_t valueTargetType; // [xsp+Ch] [xbp-44h] BYREF

  valueTargetType = 0;
  IsExistBattleValueInMasterData = (BattleServantData_o *)BattleLogicFunction__IsExistBattleValueInMasterData(
                                                            funcEnt,
                                                            *(const MethodInfo **)&actorId);
  if ( ((unsigned __int8)IsExistBattleValueInMasterData & 1) != 0 )
  {
    if ( !funcEnt
      || (IsExistBattleValueInMasterData = (BattleServantData_o *)FunctionEntity__TryGetBattleValueTarget(
                                                                    funcEnt,
                                                                    &valueTargetType,
                                                                    0),
          !this->fields.data)
      || (v9 = (char)IsExistBattleValueInMasterData,
          IsExistBattleValueInMasterData = BattleData__getServantData(this->fields.data, actorId, 0),
          (vals = funcEnt->fields.vals) == 0) )
    {
LABEL_18:
      sub_1C6BC60(IsExistBattleValueInMasterData, v8);
    }
    v11 = IsExistBattleValueInMasterData;
    v12 = 0;
    while ( 1 )
    {
      max_length = vals->max_length;
      if ( (int)v12 >= (int)max_length )
        break;
      if ( v12 >= max_length || (v14 = v12 + 1, v12 + 1 >= max_length) )
        sub_1C6BC68(IsExistBattleValueInMasterData);
      v15 = vals->m_Items[v12];
      if ( valueTargetType != 1 || (v9 & 1) == 0 )
      {
        v18 = vals->m_Items[v14];
      }
      else
      {
        if ( v11 )
        {
          DealtDamage = BattleServantData__get_DealtDamage(v11, 0);
          DealtDamageSpritList_k__BackingField = v11->fields._DealtDamageSpritList_k__BackingField;
          v18 = DealtDamage;
        }
        else
        {
          v18 = 0;
          DealtDamageSpritList_k__BackingField = 0;
        }
        IsExistBattleValueInMasterData = (BattleServantData_o *)this->fields.data;
        if ( !IsExistBattleValueInMasterData )
          goto LABEL_18;
        BattleData__SetSplitBattleValueForExBattleUi(
          (BattleData_o *)IsExistBattleValueInMasterData,
          v15,
          DealtDamageSpritList_k__BackingField,
          0);
      }
      IsExistBattleValueInMasterData = (BattleServantData_o *)this->fields.data;
      if ( IsExistBattleValueInMasterData )
      {
        BattleData__AddBattleValue((BattleData_o *)IsExistBattleValueInMasterData, v15, v18, 0);
        vals = funcEnt->fields.vals;
        v12 = v14 + 1;
        if ( vals )
          continue;
      }
      goto LABEL_18;
    }
  }
}


void BattleLogicFunction__FunctionBattleModelChange(
        BattleLogicFunction_o *this,
        BattleActionData_o *mainAction,
        BattleLogicFunctionProcess_FunctionTargetCheck_o *funcTarget,
        const MethodInfo *method)
{
  BattleLogicFunction_o *v6; // x20
  int32_t targetId_k__BackingField; // w20
  struct BattleLogicFunctionProcess_FunctionUnitCheck_o *funcUnit_k__BackingField; // x8
  BattleServantData_o *v9; // x23
  DataVals_o *dataVals_k__BackingField; // x21
  BattleLogicFunction_ProcListInArgs_o *procArg_k__BackingField; // x22
  BattleActionData_ChangeModelActionData_o *v12; // x24
  FunctionEntity_o *funcEnt; // x23
  int32_t funcIndex; // w24
  _BOOL8 IsCommandSideEffect; // x0
  const MethodInfo *v16; // x6
  BattleActionData_BuffData_o *FunctionObject; // x1

  v6 = this;
  if ( (byte_4CB93D5 & 1) == 0 )
  {
    this = (BattleLogicFunction_o *)sub_1C6BA08(&BattleActionData_ChangeModelActionData_TypeInfo);
    byte_4CB93D5 = 1;
  }
  if ( !funcTarget )
    goto LABEL_16;
  this = (BattleLogicFunction_o *)v6->fields.data;
  if ( !this )
    goto LABEL_16;
  targetId_k__BackingField = funcTarget->fields._targetId_k__BackingField;
  this = (BattleLogicFunction_o *)BattleData__getServantData((BattleData_o *)this, targetId_k__BackingField, 0);
  if ( this )
  {
    funcUnit_k__BackingField = funcTarget->fields._funcUnit_k__BackingField;
    if ( !funcUnit_k__BackingField )
      goto LABEL_16;
    v9 = (BattleServantData_o *)this;
    procArg_k__BackingField = funcUnit_k__BackingField->fields._procArg_k__BackingField;
    dataVals_k__BackingField = funcUnit_k__BackingField->fields._dataVals_k__BackingField;
    v12 = (BattleActionData_ChangeModelActionData_o *)sub_1C6BC54(BattleActionData_ChangeModelActionData_TypeInfo);
    BattleActionData_ChangeModelActionData___ctor(v12, targetId_k__BackingField, dataVals_k__BackingField, 0);
    if ( !procArg_k__BackingField )
      goto LABEL_16;
    this = (BattleLogicFunction_o *)BattleLogicFunction_ProcListInArgs__get_IsPassive(procArg_k__BackingField, 0);
    if ( ((unsigned __int8)this & 1) == 0 && v9->fields.isEntry )
    {
      if ( mainAction )
      {
        BattleActionData__AddChangeModelData(mainAction, v12, 0);
        if ( dataVals_k__BackingField )
        {
          funcEnt = dataVals_k__BackingField->fields.funcEnt;
          funcIndex = dataVals_k__BackingField->fields.funcIndex;
          IsCommandSideEffect = BattleLogicFunction_ProcListInArgs__get_IsCommandSideEffect(procArg_k__BackingField, 0);
          FunctionObject = BattleLogicFunction__getFunctionObject(
                             (BattleLogicFunction_o *)IsCommandSideEffect,
                             funcEnt,
                             targetId_k__BackingField,
                             funcIndex,
                             IsCommandSideEffect,
                             0,
                             v16);
          BattleActionData__setBuffData(mainAction, FunctionObject, dataVals_k__BackingField, 0, 0);
          return;
        }
      }
LABEL_16:
      sub_1C6BC60(this, mainAction);
    }
    if ( !v12 )
      goto LABEL_16;
    BattleServantData__SetChangeModelData(v9, v12->fields._ChangeData_k__BackingField, 0);
  }
}


void BattleLogicFunction__FunctionChangeBgm(
        BattleLogicFunction_o *this,
        BattleLogicFunction_ProcListInArgs_o *args,
        Generator_BGM_o *bgmGenerator,
        AddBgmArgument_o *addBgmArg,
        float fadeTime,
        const MethodInfo *method)
{
  BattleLogicFunction_o *v10; // x19
  struct BattleData_o *data; // x8
  UnityEngine_Object_o *logic; // x21
  struct BattleLogicFunction_FunctionArgument_o *externalArg; // x8

  v10 = this;
  if ( (byte_4CB93F5 & 1) == 0 )
  {
    this = (BattleLogicFunction_o *)sub_1C6BA08(&UnityEngine_Object_TypeInfo);
    byte_4CB93F5 = 1;
  }
  data = v10->fields.data;
  if ( !data )
    goto LABEL_15;
  this = (BattleLogicFunction_o *)data->fields._FieldEnvData_k__BackingField;
  if ( !this )
    goto LABEL_15;
  ((void (__fastcall *)(BattleLogicFunction_o *, Generator_BGM_o *, __int64, AddBgmArgument_o *, _QWORD))this->klass[1]._1.byval_arg.data)(
    this,
    bgmGenerator,
    2,
    addBgmArg,
    *(_QWORD *)&this->klass[1]._1.byval_arg.bits);
  logic = (UnityEngine_Object_o *)v10->fields.logic;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(logic, 0, 0) )
  {
    this = (BattleLogicFunction_o *)v10->fields.logic;
    if ( this )
    {
      BattleLogic__loadBgmName((BattleLogic_o *)this, 0, 0);
      if ( args )
      {
        externalArg = args->fields.externalArg;
        if ( externalArg )
        {
          if ( externalArg->fields.isDeckDataLoad )
            return;
          this = (BattleLogicFunction_o *)v10->fields.logic;
          if ( this )
          {
            BattleLogic__PlayCurrentBgm((BattleLogic_o *)this, fadeTime, 0);
            return;
          }
        }
      }
    }
LABEL_15:
    sub_1C6BC60(this, args);
  }
}


// local variable allocation has failed, the output may be wrong!
void BattleLogicFunction__FunctionChangeEnemyMasterFace(
        BattleLogicFunction_o *this,
        int32_t faceId,
        const MethodInfo *method)
{
  struct BattleData_o *data; // x8
  BattleLogicFunction_o *v4; // x19
  struct BattleData_o *v6; // x8
  int v7; // w9

  data = this->fields.data;
  if ( !data )
    goto LABEL_11;
  if ( !data->fields.enemyMasterInfo )
    return;
  v4 = this;
  this = (BattleLogicFunction_o *)data->fields.perf;
  if ( !this )
    goto LABEL_11;
  if ( faceId < 1 )
  {
    BattlePerformance__HideEnemyMaster((BattlePerformance_o *)this, 0);
    v6 = v4->fields.data;
    if ( v6 )
    {
      v7 = -1;
      goto LABEL_9;
    }
LABEL_11:
    sub_1C6BC60(this, *(_QWORD *)&faceId);
  }
  BattlePerformance__ChangeEnemyMasterFace((BattlePerformance_o *)this, faceId, 0);
  v6 = v4->fields.data;
  if ( !v6 )
    goto LABEL_11;
  v6->fields.enemyMasterChangedFaceId = faceId;
  v7 = 1;
LABEL_9:
  v6->fields.enemyMasterDispStatus = v7;
}


void BattleLogicFunction__FunctionChangeEnemyStatusUiType(
        BattleLogicFunction_o *this,
        int32_t param,
        const MethodInfo *method)
{
  BattleData_o *data; // x0

  data = this->fields.data;
  if ( !data )
    sub_1C6BC60(0, param);
  BattleData__ChangeEnemyPosType(data, param, 0);
}


void BattleLogicFunction__FunctionChangeMasterFace(
        BattleLogicFunction_o *this,
        int32_t faceId,
        const MethodInfo *method)
{
  struct BattleData_o *data; // x8

  data = this->fields.data;
  if ( !data )
    goto LABEL_7;
  if ( faceId >= 1 )
  {
    this = (BattleLogicFunction_o *)data->fields.perf;
    data->fields.masterChangedFaceId = faceId;
    data->fields.masterDispStatus = 1;
    if ( this )
    {
      BattlePerformance__ChangeMasterFace((BattlePerformance_o *)this, faceId, 0);
      return;
    }
LABEL_7:
    sub_1C6BC60(this, faceId);
  }
  this = (BattleLogicFunction_o *)data->fields.perf;
  data->fields.masterDispStatus = -1;
  if ( !this )
    goto LABEL_7;
  BattlePerformance__HideMaster((BattlePerformance_o *)this, 0);
}


void BattleLogicFunction__FunctionEnableMasterCommandSpell(
        BattleLogicFunction_o *this,
        int32_t enable,
        const MethodInfo *method)
{
  struct BattleData_o *data; // x8
  int v4; // w9

  data = this->fields.data;
  if ( !data
    || ((this = (BattleLogicFunction_o *)data->fields.perf, enable < 1) ? (v4 = -1) : (v4 = 1),
        data->fields.masterCommandSpellDispStatus = v4,
        !this) )
  {
    sub_1C6BC60(this, enable);
  }
  BattlePerformance__UpdateCommandSpell((BattlePerformance_o *)this, 0);
}


void BattleLogicFunction__FunctionEnableMasterSkill(
        BattleLogicFunction_o *this,
        int32_t enable,
        const MethodInfo *method)
{
  struct BattleData_o *data; // x8
  int v4; // w9

  data = this->fields.data;
  if ( !data
    || ((this = (BattleLogicFunction_o *)data->fields.perf, enable < 1) ? (v4 = -1) : (v4 = 1),
        data->fields.masterSkillDispStatus = v4,
        !this) )
  {
    sub_1C6BC60(this, enable);
  }
  BattlePerformance__UpdateMasterSkill((BattlePerformance_o *)this, 0);
}


void BattleLogicFunction__FunctionLastSkillCopy(
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
  const MethodInfo *v20; // x3
  int v21; // w8
  BattleLogicFunction_o *v22; // x24
  unsigned int v23; // w27
  __int64 v24; // x25
  struct BattleLogic_o *v25; // x8
  BattleActionData_o *v26; // x25
  BattleLogicFunction_FuncSideEffectFunctionArgument_o *FuncSideEffectArg; // x0
  BattleActionData_o *baseActionData; // [xsp+18h] [xbp-58h] BYREF

  v8 = this;
  if ( (byte_4CB93F9 & 1) == 0 )
  {
    sub_1C6BA08(&BattleSkillInfoData_TypeInfo);
    sub_1C6BA08(&int___TypeInfo);
    this = (BattleLogicFunction_o *)sub_1C6BA08(&BattleLogicFunction_OnlyCheckFuncSideEffectFunctionArgument_TypeInfo);
    byte_4CB93F9 = 1;
  }
  baseActionData = 0;
  data = v8->fields.data;
  if ( !data )
    goto LABEL_32;
  if ( !data->fields._lastUsedPlayerSkillInfo_k__BackingField )
    return;
  v10 = (BattleSkillInfoData_o *)sub_1C6BC54(BattleSkillInfoData_TypeInfo);
  BattleSkillInfoData___ctor(v10, 0);
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
  v12 = ((__int64 (__fastcall *)(BattleLogicFunction_o *, const char *))this->klass[1]._1.name)(
          this,
          this->klass[1]._1.namespaze);
  this = (BattleLogicFunction_o *)((__int64 (__fastcall *)(BattleSkillInfoData_o *, _QWORD, const MethodInfo *))v10->klass->vtable._4_set_skillId.methodPtr)(
                                    v10,
                                    v12,
                                    v10->klass->vtable._4_set_skillId.method);
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
    0);
  if ( !args )
    goto LABEL_32;
  this = (BattleLogicFunction_o *)BattleLogicFunction_ProcListInArgs__get_FuncSideEffectArg(args, 0);
  v15 = this != 0;
  if ( this )
  {
    v16 = (BattleLogicFunction_OnlyCheckFuncSideEffectFunctionArgument_o *)sub_1C6BC54(BattleLogicFunction_OnlyCheckFuncSideEffectFunctionArgument_TypeInfo);
    BattleLogicFunction_OnlyCheckFuncSideEffectFunctionArgument___ctor(v16, 0);
  }
  else
  {
    v16 = 0;
  }
  logic = v8->fields.logic;
  if ( !logic )
    goto LABEL_32;
  logicSkill = logic->fields.logicSkill;
  this = (BattleLogicFunction_o *)sub_1C6BAB0(int___TypeInfo, 1);
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
                                          0,
                                          0,
                                          0,
                                          0,
                                          0,
                                          0,
                                          0)) == 0 )
  {
LABEL_32:
    sub_1C6BC60(this, actionData);
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
      *(_QWORD *)(v24 + 200) = v16;
      *(_BYTE *)(v24 + 193) = v15;
      sub_1C6B9AC((CGThumbnailListItem_o *)(v24 + 200), (int32_t)v16, v19, v20);
      v25 = v8->fields.logic;
      if ( !v25 )
        goto LABEL_32;
      this = (BattleLogicFunction_o *)v25->fields.logicSkill;
      if ( !this )
        goto LABEL_32;
      v26 = BattleLogicSkill__createSkillData_47347224(
              (BattleLogicSkill_o *)this,
              (BattleLogicTask_o *)v24,
              1,
              baseVals,
              &baseActionData,
              0);
      BattleActionData__addAction(actionData, v26, 0);
      if ( v26 )
        actionData->fields.isSuccessSkillCopyFunction = 1;
      v21 = (int)v22->fields.logic;
      if ( (int)++v23 >= v21 )
        goto LABEL_29;
    }
LABEL_33:
    sub_1C6BC68(this);
  }
LABEL_29:
  FuncSideEffectArg = BattleLogicFunction_ProcListInArgs__get_FuncSideEffectArg(args, 0);
  if ( FuncSideEffectArg )
    BattleLogicFunction_FuncSideEffectFunctionArgument__AddTarget_47124408(
      FuncSideEffectArg,
      (BattleLogicFunction_FuncSideEffectFunctionArgument_o *)v16,
      0);
}


BattleActionData_o *BattleLogicFunction__FunctionMoveToLastSubMember(
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
  if ( (byte_4CB93D3 & 1) == 0 )
  {
    sub_1C6BA08(&Method_BasicHelper_IndexValue_int____78573472);
    sub_1C6BA08(&BattleActionData_TypeInfo);
    sub_1C6BA08(&MoveToSubMemberWaveTurnEvent_TypeInfo);
    this = (BattleLogicFunction_o *)sub_1C6BA08(&RestockServantLogicByMoveToSubMember_TypeInfo);
    byte_4CB93D3 = 1;
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
                   0);
  targetServantData->fields.deckIndex = ServantIndex;
  BattleServantData__resetParamObject(targetServantData, 0);
  this = (BattleLogicFunction_o *)v9->fields.data;
  if ( !this )
    goto LABEL_13;
  BattleData__RemoveEntry((BattleData_o *)this, targetServantData, 0);
  this = (BattleLogicFunction_o *)v9->fields.data;
  if ( !this )
    goto LABEL_13;
  BattleData__SubBuffFromPT_45986296((BattleData_o *)this, targetServantData, 0);
  this = (BattleLogicFunction_o *)v9->fields.data;
  if ( !this )
    goto LABEL_13;
  BattleData__SubBuffExitSvt((BattleData_o *)this, targetServantData, 0);
  this = (BattleLogicFunction_o *)v9->fields.data;
  if ( !this )
    goto LABEL_13;
  targetServantData->fields.deckIndex = BattleData__GetSubServantUsableDeckIndex((BattleData_o *)this, isEnemy, 0);
  data = v9->fields.data;
  v13 = (MoveToSubMemberWaveTurnEvent_o *)sub_1C6BC54(MoveToSubMemberWaveTurnEvent_TypeInfo);
  MoveToSubMemberWaveTurnEvent___ctor(v13, data, 0);
  BattleServantData__RegisterWaveTurnEvent(targetServantData, (ServantWaveTurnEvent_o *)v13, 0);
  if ( !funcEnt )
    goto LABEL_13;
  v14 = isEnemy;
  v15 = BasicHelper__IndexValue_int_(
          funcEnt->fields.vals,
          0,
          0,
          (const MethodInfo_312954C *)Method_BasicHelper_IndexValue_int____78573472);
  uniqueId = targetServantData->fields.uniqueId;
  v17 = v15;
  v18 = (RestockServantLogicByMoveToSubMember_o *)sub_1C6BC54(RestockServantLogicByMoveToSubMember_TypeInfo);
  RestockServantLogicByMoveToSubMember___ctor(v18, ServantIndex, v14, v17, uniqueId, 0);
  this = (BattleLogicFunction_o *)v9->fields.data;
  if ( !this
    || (BattleData__AppendRestockServantLogic((BattleData_o *)this, (RestockServantLogic_o *)v18, 0),
        v19 = (BattleActionData_o *)sub_1C6BC54(BattleActionData_TypeInfo),
        BattleActionData___ctor(v19, 0),
        !v19) )
  {
LABEL_13:
    sub_1C6BC60(this, targetServantData);
  }
  BattleActionData__AddNewMoveToSubMember(v19, ServantIndex, targetServantData->fields.uniqueId, funcIndex, 1, 0);
  return v19;
}


void BattleLogicFunction__FunctionQuickChangeBG(
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
  if ( (byte_4CB93F6 & 1) == 0 )
  {
    this = (BattleLogicFunction_o *)sub_1C6BA08(&UnityEngine_Object_TypeInfo);
    byte_4CB93F6 = 1;
  }
  data = v6->fields.data;
  if ( !data )
    goto LABEL_19;
  this = (BattleLogicFunction_o *)data->fields._FieldEnvData_k__BackingField;
  if ( !this )
    goto LABEL_19;
  ((void (__fastcall *)(BattleLogicFunction_o *, Generator_Background_o *, __int64, const char *))this->klass[1]._1.name)(
    this,
    bgGenerator,
    2,
    this->klass[1]._1.namespaze);
  v8 = v6->fields.data;
  if ( v8 )
  {
    perf = v8->fields.perf;
    if ( perf )
    {
      if ( !byte_4CAFC09 )
      {
        sub_1C6BA08(&UnityEngine_Vector3_TypeInfo);
        byte_4CAFC09 = 1;
      }
      static_fields = UnityEngine_Vector3_TypeInfo->static_fields;
      zeroVector = static_fields->zeroVector;
      v14.fields.x = static_fields->zeroVector.fields.x;
      v14.fields.y = zeroVector.fields.y;
      v14.fields.z = zeroVector.fields.z;
      BattlePerformance__ChangeBg(perf, static_fields->zeroVector, v14, 0, 0, 0, 0);
    }
  }
  logic = (UnityEngine_Object_o *)v6->fields.logic;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  this = (BattleLogicFunction_o *)UnityEngine_Object__op_Inequality(logic, 0, 0);
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
          BattleLogic__PlayCurrentBgm((BattleLogic_o *)this, 0.0, 0);
          return;
        }
      }
    }
LABEL_19:
    sub_1C6BC60(this, args);
  }
}


void BattleLogicFunction__FunctionRevival(
        BattleLogicFunction_o *this,
        BattleActionData_o *actionData,
        BattleLogicFunctionProcess_FunctionTargetCheck_o *funcTarget,
        const MethodInfo *method)
{
  SkillLvEntity_o *Master_object; // x0
  __int64 v8; // x1
  SkillLvMaster_o *v9; // x22
  struct BattleSkillInfoData_o *skillInfo; // x8
  SkillLvEntity_o *v11; // x22
  const MethodInfo *v12; // x3

  if ( (byte_4CB93EA & 1) == 0 )
  {
    sub_1C6BA08(&Method_DataManager_GetMaster_SkillLvMaster___);
    sub_1C6BA08(&DataManager_TypeInfo);
    byte_4CB93EA = 1;
  }
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_object = (SkillLvEntity_o *)DataManager__GetMaster_object_((const MethodInfo_313B314 *)Method_DataManager_GetMaster_SkillLvMaster___);
  if ( !actionData
    || (v9 = (SkillLvMaster_o *)Master_object, (Master_object = (SkillLvEntity_o *)actionData->fields.skillInfo) == 0)
    || (Master_object = (SkillLvEntity_o *)((__int64 (__fastcall *)(SkillLvEntity_o *, const MethodInfo *))Master_object->klass->vtable._5_CreatePrimaryKey.methodPtr)(
                                             Master_object,
                                             Master_object->klass->vtable._5_CreatePrimaryKey.method),
        (skillInfo = actionData->fields.skillInfo) == 0)
    || !v9
    || (Master_object = SkillLvMaster__GetEntity(v9, (int32_t)Master_object, skillInfo->fields.skilllv, 0)) == 0 )
  {
    sub_1C6BC60(Master_object, v8);
  }
  v11 = Master_object;
  if ( SkillLvEntity__IsRevivalUp(Master_object, 0) || SkillLvEntity__IsRevivalUnder(v11, 0) )
    BattleLogicFunction__FunctionRevivalForMultiTarget(this, actionData, funcTarget, v12);
  else
    BattleLogicFunction__FunctionRevivalInDetail(this, actionData, funcTarget, v12);
}


void BattleLogicFunction__FunctionRevivalForMultiTarget(
        BattleLogicFunction_o *this,
        BattleActionData_o *actionData,
        BattleLogicFunctionProcess_FunctionTargetCheck_o *funcTarget,
        const MethodInfo *method)
{
  BattleLogicFunction_o *v6; // x20
  DataVals_o *logictarget; // x21
  FunctionEntity_o *funcEnt; // x22
  struct BattleLogicFunctionProcess_FunctionUnitCheck_o *funcUnit_k__BackingField; // x8
  int32_t v10; // w23
  bool IsCommandSideEffect; // w24
  long double v12; // q0
  __int64 v13; // x8
  __int64 v14; // x0
  SkillLvMaster_o *v15; // x25
  struct BattleSkillInfoData_o *skillInfo; // x8
  SkillLvEntity_o *v17; // x27
  bool IsRevivalUp; // w0
  SkillLvEntity_o *v19; // x29
  BattleActorControl_o *PartsActor; // x26
  BattleActionData_o *v21; // x25
  SkillLvEntity_o *v22; // x28
  int32_t targetId; // w1
  const MethodInfo *v24; // x6
  BattleActionData_o *RevivalHealData; // x0
  BattleActorControl_o *v26; // x26
  BattleServantData_o *battleSvtData; // x0
  BattleActionData_o *v28; // x27
  int32_t v29; // w1
  const MethodInfo *v30; // x6
  BattleActionData_o *v31; // x0

  v6 = this;
  if ( (byte_4CB93EB & 1) == 0 )
  {
    sub_1C6BA08(&BattleActionData_TypeInfo);
    sub_1C6BA08(&Method_DataManager_GetMasterData_SkillLvMaster___);
    sub_1C6BA08(&UnityEngine_Object_TypeInfo);
    this = (BattleLogicFunction_o *)sub_1C6BA08(&Method_SingletonMonoBehaviour_DataManager__getInstance__);
    byte_4CB93EB = 1;
  }
  if ( !funcTarget )
    goto LABEL_56;
  this = (BattleLogicFunction_o *)funcTarget->fields._funcUnit_k__BackingField;
  if ( !this )
    goto LABEL_56;
  logictarget = (DataVals_o *)this->fields.logictarget;
  if ( !logictarget )
    goto LABEL_56;
  funcEnt = logictarget->fields.funcEnt;
  this = (BattleLogicFunction_o *)BattleLogicFunctionProcess_FunctionUnitCheck__get_FuncIndex(
                                    (BattleLogicFunctionProcess_FunctionUnitCheck_o *)this,
                                    0);
  funcUnit_k__BackingField = funcTarget->fields._funcUnit_k__BackingField;
  if ( !funcUnit_k__BackingField )
    goto LABEL_56;
  v10 = (int)this;
  this = (BattleLogicFunction_o *)funcUnit_k__BackingField->fields._procArg_k__BackingField;
  if ( !this )
    goto LABEL_56;
  IsCommandSideEffect = BattleLogicFunction_ProcListInArgs__get_IsCommandSideEffect(
                          (BattleLogicFunction_ProcListInArgs_o *)this,
                          0);
  v13 = *((_QWORD *)Method_SingletonMonoBehaviour_DataManager__getInstance__ + 4);
  if ( (*(_BYTE *)(v13 + 309) & 1) == 0 )
    v13 = sub_1C41A9C(v12);
  v14 = *(_QWORD *)(*(_QWORD *)(v13 + 192) + 16LL);
  if ( (*(_BYTE *)(v14 + 309) & 1) == 0 )
    v14 = sub_1C41A9C(v12);
  this = **(BattleLogicFunction_o ***)(v14 + 184);
  if ( !this )
    goto LABEL_56;
  this = (BattleLogicFunction_o *)DataManager__GetMasterData_object_(
                                    (DataManager_o *)this,
                                    (const MethodInfo_313B368 *)Method_DataManager_GetMasterData_SkillLvMaster___);
  if ( !actionData )
    goto LABEL_56;
  v15 = (SkillLvMaster_o *)this;
  this = (BattleLogicFunction_o *)actionData->fields.skillInfo;
  if ( !this )
    goto LABEL_56;
  this = (BattleLogicFunction_o *)((__int64 (__fastcall *)(BattleLogicFunction_o *, const char *))this->klass[1]._1.name)(
                                    this,
                                    this->klass[1]._1.namespaze);
  skillInfo = actionData->fields.skillInfo;
  if ( !skillInfo )
    goto LABEL_56;
  if ( !v15 )
    goto LABEL_56;
  this = (BattleLogicFunction_o *)SkillLvMaster__GetEntity(v15, (int32_t)this, skillInfo->fields.skilllv, 0);
  if ( !this )
    goto LABEL_56;
  v17 = (SkillLvEntity_o *)this;
  IsRevivalUp = SkillLvEntity__IsRevivalUp((SkillLvEntity_o *)this, 0);
  v19 = IsRevivalUp ? v17 : 0LL;
  if ( IsRevivalUp )
  {
    this = (BattleLogicFunction_o *)v6->fields.data;
    if ( !this )
      goto LABEL_56;
    PartsActor = BattleData__GetPartsActor((BattleData_o *)this, 0, 0);
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    this = (BattleLogicFunction_o *)UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)PartsActor, 0, 0);
    v21 = 0;
    if ( ((unsigned __int8)this & 1) != 0 )
      v22 = v19;
    else
      v22 = 0;
    if ( ((unsigned __int8)this & 1) != 0 )
    {
      if ( !PartsActor )
        goto LABEL_56;
      this = (BattleLogicFunction_o *)PartsActor->fields.battleSvtData;
      if ( this )
      {
        this = (BattleLogicFunction_o *)BattleServantData__isAlive((BattleServantData_o *)this, 0, 0);
        if ( ((unsigned __int8)this & 1) != 0 )
        {
          v21 = 0;
        }
        else
        {
          v21 = (BattleActionData_o *)sub_1C6BC54(BattleActionData_TypeInfo);
          BattleActionData___ctor(v21, 0);
          if ( !v21 )
            goto LABEL_56;
          v21->fields.actorId = actionData->fields.actorId;
          v21->fields.targetId = PartsActor->fields.uniqueID;
          BattleActionData__setStateActors(v21, 0);
          targetId = v21->fields.targetId;
          v21->fields.motionId = 2201;
          RevivalHealData = BattleLogicFunction__createRevivalHealData(
                              v6,
                              targetId,
                              funcEnt,
                              logictarget,
                              v10,
                              IsCommandSideEffect,
                              v24);
          BattleActionData__addAction(v21, RevivalHealData, 0);
          this = (BattleLogicFunction_o *)PartsActor->fields.battleSvtData;
          if ( !this )
            goto LABEL_56;
          BattleServantData__ProcessSkillRevive((BattleServantData_o *)this, 0);
        }
        v17 = v22;
      }
      else
      {
        v21 = 0;
        v17 = v19;
      }
    }
    if ( !v17 )
      goto LABEL_56;
  }
  else
  {
    v21 = 0;
  }
  if ( !SkillLvEntity__IsRevivalUnder(v17, 0) )
    goto LABEL_48;
  this = (BattleLogicFunction_o *)v6->fields.data;
  if ( !this )
LABEL_56:
    sub_1C6BC60(this, actionData);
  v26 = BattleData__GetPartsActor((BattleData_o *)this, 2, 0);
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  this = (BattleLogicFunction_o *)UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)v26, 0, 0);
  if ( ((unsigned __int8)this & 1) != 0 )
  {
    if ( v26 )
    {
      battleSvtData = v26->fields.battleSvtData;
      if ( !battleSvtData || BattleServantData__isAlive(battleSvtData, 0, 0) )
        goto LABEL_48;
      v28 = (BattleActionData_o *)sub_1C6BC54(BattleActionData_TypeInfo);
      BattleActionData___ctor(v28, 0);
      if ( v28 )
      {
        v28->fields.actorId = actionData->fields.actorId;
        v28->fields.targetId = v26->fields.uniqueID;
        BattleActionData__setStateActors(v28, 0);
        v29 = v28->fields.targetId;
        v28->fields.motionId = 2202;
        v31 = BattleLogicFunction__createRevivalHealData(v6, v29, funcEnt, logictarget, v10, IsCommandSideEffect, v30);
        BattleActionData__addAction(v28, v31, 0);
        this = (BattleLogicFunction_o *)v26->fields.battleSvtData;
        if ( this )
        {
          BattleServantData__ProcessSkillRevive((BattleServantData_o *)this, 0);
          if ( v21 )
            BattleActionData__AddAfterActionData(v21, v28, 0, 0);
          else
            v21 = v28;
          goto LABEL_49;
        }
      }
    }
    goto LABEL_56;
  }
LABEL_48:
  if ( v21 )
LABEL_49:
    BattleActionData__AddAfterActionData(actionData, v21, 0, 0);
}


void BattleLogicFunction__FunctionRevivalInDetail(
        BattleLogicFunction_o *this,
        BattleActionData_o *actionData,
        BattleLogicFunctionProcess_FunctionTargetCheck_o *funcTarget,
        const MethodInfo *method)
{
  int32_t v7; // w2
  const MethodInfo *v8; // x3
  __int64 procArg_k__BackingField; // x0
  __int64 v10; // x1
  int32_t v11; // w2
  const MethodInfo *v12; // x3
  struct BattleLogicFunctionProcess_FunctionUnitCheck_o *funcUnit_k__BackingField; // x8
  int32_t v14; // w2
  const MethodInfo *v15; // x3
  struct BattleLogicFunctionProcess_FunctionUnitCheck_o *v16; // x8
  System_Collections_Generic_List_object__o *v17; // x20
  int32_t v18; // w2
  const MethodInfo *v19; // x3
  SkillLvMaster_o *v20; // x20
  _DWORD *methods; // x8
  System_Collections_ICollection_o *RevivalTargetArray; // x20
  _BOOL8 IsNullOrEmpty; // x0
  const MethodInfo *v24; // x2
  System_Collections_Generic_IEnumerable_TSource__o *DeadAnimBeDoneSvtArray; // x21
  BattleLogicFunction___c_c *v26; // x8
  System_Func_object__int__o *_9__120_0; // x22
  Il2CppObject *v28; // x23
  struct BattleLogicFunction___c_StaticFields *static_fields; // x0
  int32_t v30; // w2
  const MethodInfo *v31; // x3
  System_Collections_Generic_IEnumerable_IGrouping_TKey__TSource___o *v32; // x0
  BattleLogicFunction___c_c *v33; // x8
  System_Collections_Generic_IEnumerable_TSource__o *v34; // x21
  System_Func_object__int__o *_9__120_1; // x22
  Il2CppObject *v36; // x23
  struct BattleLogicFunction___c_StaticFields *v37; // x0
  int32_t v38; // w2
  const MethodInfo *v39; // x3
  System_Func_object__object__o *_9__120_2; // x23
  Il2CppObject *v41; // x24
  struct BattleLogicFunction___c_StaticFields *v42; // x0
  int32_t v43; // w2
  const MethodInfo *v44; // x3
  int32_t v45; // w2
  const MethodInfo *v46; // x3
  const MethodInfo *v47; // x2
  long double inited; // q0
  void *monitor; // x8
  unsigned __int64 v50; // x28
  int32_t v51; // w23
  _QWORD *v52; // x24
  __int64 v53; // x8
  __int64 v54; // x0
  __int64 v55; // x0
  BattleLogicFunction___c__DisplayClass120_0_o *v56; // x4
  const MethodInfo *v57; // x5
  __int64 v58; // x8
  __int64 v59; // x24
  unsigned __int64 v60; // x21
  __int64 v61; // x20
  BattleServantData_o *v62; // x25
  const MethodInfo *v63; // x6
  int32_t v64; // w27
  BattleActionData_o *v65; // x26
  int32_t v66; // w2
  const MethodInfo *v67; // x3
  int32_t v68; // w2
  const MethodInfo *v69; // x3
  __int64 v70; // x8
  _QWORD *v71; // x9
  __int64 v72; // x10
  __int64 v73; // x8
  System_Collections_ICollection_o *v74; // [xsp+8h] [xbp-B8h]
  System_Collections_Generic_Dictionary_K__V__o *dic; // [xsp+10h] [xbp-B0h]
  int32_t expelledUniqueId[2]; // [xsp+18h] [xbp-A8h] BYREF
  CGThumbnailListItem_o v77; // [xsp+20h] [xbp-A0h] BYREF

  if ( (byte_4CB93ED & 1) == 0 )
  {
    sub_1C6BA08(&Method_System_Array_Empty_BattleServantData___);
    sub_1C6BA08(&Method_BasicHelper_GetValue_int__BattleServantData_____);
    sub_1C6BA08(&Method_DataManager_GetMaster_SkillLvMaster___);
    sub_1C6BA08(&DataManager_TypeInfo);
    sub_1C6BA08(&Method_System_Linq_Enumerable_GroupBy_BattleServantData__int___);
    sub_1C6BA08(&Method_System_Linq_Enumerable_ToDictionary_IGrouping_int__BattleServantData___int__BattleServantData_____);
    sub_1C6BA08(&System_Func_IGrouping_int__BattleServantData___int__TypeInfo);
    sub_1C6BA08(&System_Func_BattleServantData__int__TypeInfo);
    sub_1C6BA08(&System_Func_IGrouping_int__BattleServantData___BattleServantData____TypeInfo);
    sub_1C6BA08(&Method_System_Collections_Generic_List_BattleServantData__Add__);
    sub_1C6BA08(&Method_System_Collections_Generic_List_BattleServantData___ctor__);
    sub_1C6BA08(&System_Collections_Generic_List_BattleServantData__TypeInfo);
    sub_1C6BA08(&Method_BattleLogicFunction___c__FunctionRevivalInDetail_b__120_0__);
    sub_1C6BA08(&Method_BattleLogicFunction___c__FunctionRevivalInDetail_b__120_1__);
    sub_1C6BA08(&Method_BattleLogicFunction___c__FunctionRevivalInDetail_b__120_2__);
    sub_1C6BA08(&BattleLogicFunction___c_TypeInfo);
    byte_4CB93ED = 1;
  }
  *(_QWORD *)expelledUniqueId = 0;
  v77.klass = (CGThumbnailListItem_c *)actionData;
  memset(&v77.monitor, 0, 56);
  sub_1C6B9AC(&v77, (int32_t)actionData, (int32_t)funcTarget, method);
  v77.monitor = this;
  sub_1C6B9AC((CGThumbnailListItem_o *)&v77.monitor, (int32_t)this, v7, v8);
  if ( !funcTarget )
    goto LABEL_67;
  funcUnit_k__BackingField = funcTarget->fields._funcUnit_k__BackingField;
  if ( !funcUnit_k__BackingField )
    goto LABEL_67;
  v77.fields.sortValue0 = (int64_t)funcUnit_k__BackingField->fields._dataVals_k__BackingField;
  sub_1C6B9AC((CGThumbnailListItem_o *)&v77.fields.sortValue0, v77.fields.sortValue0, v11, v12);
  if ( !v77.fields.sortValue0 )
    goto LABEL_67;
  *(_QWORD *)&v77.fields.sortIndex = *(_QWORD *)(v77.fields.sortValue0 + 40);
  sub_1C6B9AC((CGThumbnailListItem_o *)&v77.fields.sortIndex, v77.fields.sortIndex, v14, v15);
  procArg_k__BackingField = (__int64)funcTarget->fields._funcUnit_k__BackingField;
  if ( !procArg_k__BackingField )
    goto LABEL_67;
  procArg_k__BackingField = BattleLogicFunctionProcess_FunctionUnitCheck__get_FuncIndex(
                              (BattleLogicFunctionProcess_FunctionUnitCheck_o *)procArg_k__BackingField,
                              0);
  v77.fields.index = procArg_k__BackingField;
  v16 = funcTarget->fields._funcUnit_k__BackingField;
  if ( !v16 )
    goto LABEL_67;
  procArg_k__BackingField = (__int64)v16->fields._procArg_k__BackingField;
  if ( !procArg_k__BackingField )
    goto LABEL_67;
  LOBYTE(v77.fields.sortValue0B) = BattleLogicFunction_ProcListInArgs__get_IsCommandSideEffect(
                                     (BattleLogicFunction_ProcListInArgs_o *)procArg_k__BackingField,
                                     0);
  v17 = (System_Collections_Generic_List_object__o *)sub_1C6BC54(System_Collections_Generic_List_BattleServantData__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v17,
    (const MethodInfo_3800140 *)Method_System_Collections_Generic_List_BattleServantData___ctor__);
  v77.fields.sortValue1 = (int64_t)v17;
  sub_1C6B9AC((CGThumbnailListItem_o *)&v77.fields.sortValue1, (int32_t)v17, v18, v19);
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  procArg_k__BackingField = (__int64)DataManager__GetMaster_object_((const MethodInfo_313B314 *)Method_DataManager_GetMaster_SkillLvMaster___);
  if ( !v77.klass )
    goto LABEL_67;
  v20 = (SkillLvMaster_o *)procArg_k__BackingField;
  procArg_k__BackingField = (__int64)v77.klass->_1.methods;
  if ( !procArg_k__BackingField )
    goto LABEL_67;
  procArg_k__BackingField = (*(__int64 (__fastcall **)(__int64, _QWORD))(*(_QWORD *)procArg_k__BackingField + 392LL))(
                              procArg_k__BackingField,
                              *(_QWORD *)(*(_QWORD *)procArg_k__BackingField + 400LL));
  if ( !v77.klass )
    goto LABEL_67;
  methods = v77.klass->_1.methods;
  if ( !methods )
    goto LABEL_67;
  if ( !v20 )
    goto LABEL_67;
  procArg_k__BackingField = (__int64)SkillLvMaster__GetEntity(v20, procArg_k__BackingField, methods[9], 0);
  if ( !procArg_k__BackingField )
    goto LABEL_67;
  RevivalTargetArray = (System_Collections_ICollection_o *)SkillLvEntity__GetRevivalTargetArray(
                                                             (SkillLvEntity_o *)procArg_k__BackingField,
                                                             0);
  IsNullOrEmpty = BasicHelper__IsNullOrEmpty(RevivalTargetArray, 0);
  if ( IsNullOrEmpty )
    goto LABEL_66;
  procArg_k__BackingField = v77.fields.sortValue0;
  if ( !v77.fields.sortValue0 )
    goto LABEL_67;
  v77.fields.selectNum = DataVals__GetValue((DataVals_o *)v77.fields.sortValue0, 0);
  procArg_k__BackingField = (__int64)this->fields.data;
  if ( !procArg_k__BackingField )
    goto LABEL_67;
  DeadAnimBeDoneSvtArray = (System_Collections_Generic_IEnumerable_TSource__o *)BattleData__GetDeadAnimBeDoneSvtArray(
                                                                                  (BattleData_o *)procArg_k__BackingField,
                                                                                  0);
  v26 = BattleLogicFunction___c_TypeInfo;
  if ( !BattleLogicFunction___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BattleLogicFunction___c_TypeInfo);
    v26 = BattleLogicFunction___c_TypeInfo;
  }
  _9__120_0 = (System_Func_object__int__o *)v26->static_fields->__9__120_0;
  if ( !_9__120_0 )
  {
    if ( !v26->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v26);
      v26 = BattleLogicFunction___c_TypeInfo;
    }
    v28 = (Il2CppObject *)v26->static_fields->__9;
    _9__120_0 = (System_Func_object__int__o *)sub_1C6BC54(System_Func_BattleServantData__int__TypeInfo);
    System_Func_object__int____ctor(
      _9__120_0,
      v28,
      Method_BattleLogicFunction___c__FunctionRevivalInDetail_b__120_0__,
      0);
    static_fields = BattleLogicFunction___c_TypeInfo->static_fields;
    static_fields->__9__120_0 = (struct System_Func_BattleServantData__int__o *)_9__120_0;
    sub_1C6B9AC((CGThumbnailListItem_o *)&static_fields->__9__120_0, (int32_t)_9__120_0, v30, v31);
  }
  v32 = System_Linq_Enumerable__GroupBy_object__int_(
          DeadAnimBeDoneSvtArray,
          (System_Func_TSource__TKey__o *)_9__120_0,
          (const MethodInfo_316581C *)Method_System_Linq_Enumerable_GroupBy_BattleServantData__int___);
  v33 = BattleLogicFunction___c_TypeInfo;
  v34 = (System_Collections_Generic_IEnumerable_TSource__o *)v32;
  if ( !BattleLogicFunction___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BattleLogicFunction___c_TypeInfo);
    v33 = BattleLogicFunction___c_TypeInfo;
  }
  _9__120_1 = (System_Func_object__int__o *)v33->static_fields->__9__120_1;
  if ( !_9__120_1 )
  {
    if ( !v33->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v33);
      v33 = BattleLogicFunction___c_TypeInfo;
    }
    v36 = (Il2CppObject *)v33->static_fields->__9;
    _9__120_1 = (System_Func_object__int__o *)sub_1C6BC54(System_Func_IGrouping_int__BattleServantData___int__TypeInfo);
    System_Func_object__int____ctor(
      _9__120_1,
      v36,
      Method_BattleLogicFunction___c__FunctionRevivalInDetail_b__120_1__,
      0);
    v37 = BattleLogicFunction___c_TypeInfo->static_fields;
    v37->__9__120_1 = (struct System_Func_IGrouping_int__BattleServantData___int__o *)_9__120_1;
    sub_1C6B9AC((CGThumbnailListItem_o *)&v37->__9__120_1, (int32_t)_9__120_1, v38, v39);
    v33 = BattleLogicFunction___c_TypeInfo;
  }
  if ( !v33->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(v33);
    v33 = BattleLogicFunction___c_TypeInfo;
  }
  _9__120_2 = (System_Func_object__object__o *)v33->static_fields->__9__120_2;
  if ( !_9__120_2 )
  {
    if ( !v33->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v33);
      v33 = BattleLogicFunction___c_TypeInfo;
    }
    v41 = (Il2CppObject *)v33->static_fields->__9;
    _9__120_2 = (System_Func_object__object__o *)sub_1C6BC54(System_Func_IGrouping_int__BattleServantData___BattleServantData____TypeInfo);
    System_Func_object__object____ctor(
      _9__120_2,
      v41,
      Method_BattleLogicFunction___c__FunctionRevivalInDetail_b__120_2__,
      0);
    v42 = BattleLogicFunction___c_TypeInfo->static_fields;
    v42->__9__120_2 = (struct System_Func_IGrouping_int__BattleServantData___BattleServantData____o *)_9__120_2;
    sub_1C6B9AC((CGThumbnailListItem_o *)&v42->__9__120_2, (int32_t)_9__120_2, v43, v44);
  }
  procArg_k__BackingField = (__int64)System_Linq_Enumerable__ToDictionary_object__int__object_(
                                       v34,
                                       (System_Func_TSource__TKey__o *)_9__120_1,
                                       (System_Func_TSource__TElement__o *)_9__120_2,
                                       (const MethodInfo_317BB60 *)Method_System_Linq_Enumerable_ToDictionary_IGrouping_int__BattleServantData___int__BattleServantData_____);
  dic = (System_Collections_Generic_Dictionary_K__V__o *)procArg_k__BackingField;
  if ( !v77.klass
    || (v77.fields.sortStr1 = (struct System_String_o *)BattleActionData__SeekLastActionData(
                                                          (BattleActionData_o *)v77.klass,
                                                          0),
        sub_1C6B9AC((CGThumbnailListItem_o *)&v77.fields.sortStr1, (int32_t)v77.fields.sortStr1, v45, v46),
        !RevivalTargetArray) )
  {
LABEL_67:
    sub_1C6BC60(procArg_k__BackingField, v10);
  }
  monitor = RevivalTargetArray[1].monitor;
  if ( (int)monitor >= 1 )
  {
    v50 = 0;
    v74 = RevivalTargetArray;
    while ( 1 )
    {
      if ( v50 >= (unsigned int)monitor )
        goto LABEL_68;
      v51 = *((_DWORD *)&RevivalTargetArray[2].klass + v50);
      v52 = Method_System_Array_Empty_BattleServantData___;
      v53 = *((_QWORD *)Method_System_Array_Empty_BattleServantData___ + 7);
      if ( !v53 )
      {
        sub_1C41AF8(Method_System_Array_Empty_BattleServantData___);
        v53 = v52[7];
      }
      v54 = *(_QWORD *)(v53 + 16);
      if ( (*(_BYTE *)(v54 + 309) & 1) == 0 )
        v54 = sub_1C41A9C(inited);
      if ( !*(_DWORD *)(v54 + 224) )
        inited = j_il2cpp_runtime_class_init_0(v54);
      v55 = *(_QWORD *)(v52[7] + 16LL);
      if ( (*(_BYTE *)(v55 + 309) & 1) == 0 )
        v55 = sub_1C41A9C(inited);
      procArg_k__BackingField = (__int64)BasicHelper__GetValue_int__object_(
                                           dic,
                                           v51,
                                           **(Il2CppObject ***)(v55 + 184),
                                           (const MethodInfo_3128DDC *)Method_BasicHelper_GetValue_int__BattleServantData_____);
      if ( !procArg_k__BackingField )
        goto LABEL_67;
      v58 = *(_QWORD *)(procArg_k__BackingField + 24);
      v59 = procArg_k__BackingField;
      if ( (int)v58 >= 1 )
        break;
LABEL_64:
      RevivalTargetArray = v74;
      ++v50;
      LODWORD(monitor) = v74[1].monitor;
      if ( (__int64)v50 >= (int)monitor )
        goto LABEL_65;
    }
    v60 = 0;
    v61 = procArg_k__BackingField + 32;
    while ( v60 < (unsigned int)v58 )
    {
      v62 = *(BattleServantData_o **)(v61 + 8 * v60);
      procArg_k__BackingField = BattleLogicFunction___FunctionRevivalInDetail_g__TryGetEntryIndex_120_5(
                                  this,
                                  v62,
                                  &expelledUniqueId[1],
                                  expelledUniqueId,
                                  v56,
                                  v57);
      if ( (procArg_k__BackingField & 1) != 0 )
      {
        v64 = expelledUniqueId[1];
        procArg_k__BackingField = (__int64)BattleLogicFunction___FunctionRevivalInDetail_g__GenerateRevivalActionData_120_3(
                                             this,
                                             v62,
                                             v51,
                                             expelledUniqueId[1],
                                             expelledUniqueId[0],
                                             (BattleLogicFunction___c__DisplayClass120_0_o *)&v77,
                                             v63);
        if ( !this->fields.data )
          goto LABEL_67;
        v65 = (BattleActionData_o *)procArg_k__BackingField;
        BattleData__SetEntry(this->fields.data, v62, v64, 1, 0);
        procArg_k__BackingField = (__int64)v77.fields.sortStr1;
        if ( !v77.fields.sortStr1 )
          goto LABEL_67;
        BattleActionData__AddAfterActionData((BattleActionData_o *)v77.fields.sortStr1, v65, 0, 0);
        v77.fields.sortStr1 = (struct System_String_o *)v65;
        sub_1C6B9AC((CGThumbnailListItem_o *)&v77.fields.sortStr1, (int32_t)v65, v66, v67);
        procArg_k__BackingField = v77.fields.sortValue1;
        if ( !v77.fields.sortValue1 )
          goto LABEL_67;
        v70 = *(_QWORD *)(v77.fields.sortValue1 + 16);
        v71 = Method_System_Collections_Generic_List_BattleServantData__Add__;
        ++*(_DWORD *)(v77.fields.sortValue1 + 28);
        if ( !v70 )
          goto LABEL_67;
        v72 = *(int *)(procArg_k__BackingField + 24);
        if ( (unsigned int)v72 >= *(_DWORD *)(v70 + 24) )
        {
          System_Collections_Generic_List_object___AddWithResize(
            (System_Collections_Generic_List_object__o *)procArg_k__BackingField,
            (Il2CppObject *)v62,
            *(const MethodInfo_3800974 **)(*(_QWORD *)(v71[4] + 192LL) + 112LL));
        }
        else
        {
          v73 = v70 + 8 * v72;
          *(_DWORD *)(procArg_k__BackingField + 24) = v72 + 1;
          *(_QWORD *)(v73 + 32) = v62;
          sub_1C6B9AC((CGThumbnailListItem_o *)(v73 + 32), (int32_t)v62, v68, v69);
        }
      }
      LODWORD(v58) = *(_DWORD *)(v59 + 24);
      if ( (__int64)++v60 >= (int)v58 )
        goto LABEL_64;
    }
LABEL_68:
    sub_1C6BC68(procArg_k__BackingField);
  }
LABEL_65:
  BattleLogicFunction___FunctionRevivalInDetail_g__AfterProcessForRevivedServants_120_6(
    this,
    (BattleLogicFunction___c__DisplayClass120_0_o *)&v77,
    v47);
LABEL_66:
  BattleLogicFunction___FunctionRevivalInDetail_g__SetMissIfNoActions_120_4(
    (BattleLogicFunction_o *)IsNullOrEmpty,
    (BattleLogicFunction___c__DisplayClass120_0_o *)&v77,
    v24);
}


void BattleLogicFunction__FunctionSetBattleMissionValue(
        BattleLogicFunction_o *this,
        FunctionEntity_o *funcEnt,
        const MethodInfo *method)
{
  BattleData_o *IsExistBattleMissionValueInMasterData; // x0
  __int64 v6; // x1
  struct System_Int32_array *vals; // x8
  int v8; // w23
  unsigned int max_length; // w10
  unsigned int v10; // w9
  int32_t v11; // w22
  int32_t v12; // w21
  int32_t battleValueKey[2]; // [xsp+8h] [xbp-38h] BYREF

  *(_QWORD *)battleValueKey = 0;
  IsExistBattleMissionValueInMasterData = (BattleData_o *)BattleLogicFunction__IsExistBattleMissionValueInMasterData(
                                                            funcEnt,
                                                            (const MethodInfo *)funcEnt);
  if ( ((unsigned __int8)IsExistBattleMissionValueInMasterData & 1) != 0 )
  {
    if ( !funcEnt || (vals = funcEnt->fields.vals) == 0 )
LABEL_14:
      sub_1C6BC60(IsExistBattleMissionValueInMasterData, v6);
    v8 = 1;
    while ( 1 )
    {
      max_length = vals->max_length;
      v10 = v8 - 1;
      if ( v8 - 1 >= (int)max_length )
        break;
      if ( v10 >= max_length || v8 >= max_length )
        sub_1C6BC68(IsExistBattleMissionValueInMasterData);
      v11 = vals->m_Items[v10];
      v12 = vals->m_Items[v8];
      if ( FunctionEntity__IsToQuoteBattleValue(funcEnt, &battleValueKey[1], 0) )
      {
        IsExistBattleMissionValueInMasterData = this->fields.data;
        if ( !IsExistBattleMissionValueInMasterData )
          goto LABEL_14;
        if ( BattleData__TryGetBattleValue(IsExistBattleMissionValueInMasterData, battleValueKey[1], battleValueKey, 0) )
          v12 = battleValueKey[0];
      }
      IsExistBattleMissionValueInMasterData = this->fields.data;
      if ( IsExistBattleMissionValueInMasterData )
      {
        BattleData__SetBattleMissionValue(IsExistBattleMissionValueInMasterData, v11, v12, 0);
        vals = funcEnt->fields.vals;
        v8 += 2;
        if ( vals )
          continue;
      }
      goto LABEL_14;
    }
  }
}


// local variable allocation has failed, the output may be wrong!
void BattleLogicFunction__FunctionSetBattleValue(
        BattleLogicFunction_o *this,
        int32_t actorId,
        FunctionEntity_o *funcEnt,
        const MethodInfo *method)
{
  BattleServantData_o *IsExistBattleValueInMasterData; // x0
  __int64 v8; // x1
  char v9; // w21
  struct System_Int32_array *vals; // x8
  BattleServantData_o *v11; // x22
  unsigned int v12; // w9
  unsigned int max_length; // w10
  unsigned int v14; // w25
  int32_t v15; // w23
  int32_t DealtDamage; // w0
  System_Collections_Generic_List_int____o *DealtDamageSpritList_k__BackingField; // x2
  int32_t v18; // w24
  int32_t valueTargetType; // [xsp+Ch] [xbp-44h] BYREF

  valueTargetType = 0;
  IsExistBattleValueInMasterData = (BattleServantData_o *)BattleLogicFunction__IsExistBattleValueInMasterData(
                                                            funcEnt,
                                                            *(const MethodInfo **)&actorId);
  if ( ((unsigned __int8)IsExistBattleValueInMasterData & 1) != 0 )
  {
    if ( !funcEnt
      || (IsExistBattleValueInMasterData = (BattleServantData_o *)FunctionEntity__TryGetBattleValueTarget(
                                                                    funcEnt,
                                                                    &valueTargetType,
                                                                    0),
          !this->fields.data)
      || (v9 = (char)IsExistBattleValueInMasterData,
          IsExistBattleValueInMasterData = BattleData__getServantData(this->fields.data, actorId, 0),
          (vals = funcEnt->fields.vals) == 0) )
    {
LABEL_18:
      sub_1C6BC60(IsExistBattleValueInMasterData, v8);
    }
    v11 = IsExistBattleValueInMasterData;
    v12 = 0;
    while ( 1 )
    {
      max_length = vals->max_length;
      if ( (int)v12 >= (int)max_length )
        break;
      if ( v12 >= max_length || (v14 = v12 + 1, v12 + 1 >= max_length) )
        sub_1C6BC68(IsExistBattleValueInMasterData);
      v15 = vals->m_Items[v12];
      if ( valueTargetType != 1 || (v9 & 1) == 0 )
      {
        v18 = vals->m_Items[v14];
      }
      else
      {
        if ( v11 )
        {
          DealtDamage = BattleServantData__get_DealtDamage(v11, 0);
          DealtDamageSpritList_k__BackingField = v11->fields._DealtDamageSpritList_k__BackingField;
          v18 = DealtDamage;
        }
        else
        {
          v18 = 0;
          DealtDamageSpritList_k__BackingField = 0;
        }
        IsExistBattleValueInMasterData = (BattleServantData_o *)this->fields.data;
        if ( !IsExistBattleValueInMasterData )
          goto LABEL_18;
        BattleData__SetSplitBattleValueForExBattleUi(
          (BattleData_o *)IsExistBattleValueInMasterData,
          v15,
          DealtDamageSpritList_k__BackingField,
          0);
      }
      IsExistBattleValueInMasterData = (BattleServantData_o *)this->fields.data;
      if ( IsExistBattleValueInMasterData )
      {
        BattleData__SetBattleValue((BattleData_o *)IsExistBattleValueInMasterData, v15, v18, 0);
        vals = funcEnt->fields.vals;
        v12 = v14 + 1;
        if ( vals )
          continue;
      }
      goto LABEL_18;
    }
  }
}


void BattleLogicFunction__FunctionSetDisplayDirectBattleMessageInFsm(
        BattleLogicFunction_o *this,
        BattleActionData_o *mainActionData,
        BattleLogicFunctionProcess_FunctionTargetCheck_o *funcTarget,
        const MethodInfo *method)
{
  struct BattleLogicFunctionProcess_FunctionUnitCheck_o *funcUnit_k__BackingField; // x8

  if ( !funcTarget
    || (funcUnit_k__BackingField = funcTarget->fields._funcUnit_k__BackingField) == 0
    || (this = (BattleLogicFunction_o *)funcUnit_k__BackingField->fields._dataVals_k__BackingField) == 0
    || (this = (BattleLogicFunction_o *)DataVals__GetValue((DataVals_o *)this, 0), !mainActionData) )
  {
    sub_1C6BC60(this, mainActionData);
  }
  BattleActionData__AddDirectDisplayMessageId(mainActionData, (int32_t)this, 0);
}


BattleActionData_o *BattleLogicFunction__FunctionSetNpExecutedState(
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

  if ( (byte_4CB93FC & 1) == 0 )
  {
    sub_1C6BA08(&BattleActionData_TypeInfo);
    byte_4CB93FC = 1;
  }
  data = this->fields.data;
  if ( !data )
    goto LABEL_12;
  data = (BattleData_o *)BattleData__getServantData(data, targetId, 0);
  if ( !data )
    goto LABEL_12;
  v10 = (BattleServantData_o *)data;
  v11 = 0;
  if ( !BattleServantData__checkPlayer((BattleServantData_o *)data, 0) )
  {
    BattleServantData__SetTdAfterStatus(v10, this->fields.data, 0);
    if ( baseVals )
    {
      if ( procArg )
      {
        funcIndex = baseVals->fields.funcIndex;
        funcEnt = baseVals->fields.funcEnt;
        IsCommandSideEffect = BattleLogicFunction_ProcListInArgs__get_IsCommandSideEffect(procArg, 0);
        data = (BattleData_o *)BattleLogicFunction__getFunctionObject(
                                 (BattleLogicFunction_o *)IsCommandSideEffect,
                                 funcEnt,
                                 targetId,
                                 funcIndex,
                                 IsCommandSideEffect,
                                 0,
                                 v15);
        if ( data )
        {
          LODWORD(data->fields.rootfsm) = 5;
          v16 = (BattleActionData_BuffData_o *)data;
          v11 = (BattleActionData_o *)sub_1C6BC54(BattleActionData_TypeInfo);
          BattleActionData___ctor(v11, 0);
          if ( v11 )
          {
            BattleActionData__setBuffData(v11, v16, baseVals, 0, 0);
            return v11;
          }
        }
      }
    }
LABEL_12:
    sub_1C6BC60(data, procArg);
  }
  return v11;
}


void BattleLogicFunction__FunctionSubFieldBuff(
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
  BattleActionData_BuffData_o *FunctionObject; // x23
  System_Func_object__object__o *v21; // x24
  System_Collections_Generic_IEnumerable_TSource__o *v22; // x0
  int32_t v23; // w2
  const MethodInfo *v24; // x3
  BattleLogicFunction___c_c *v25; // x0
  System_Func_object__bool__o *_9__135_1; // x21
  Il2CppObject *v27; // x24
  CGThumbnailListItem_o *static_fields; // x0
  int32_t v29; // w2
  const MethodInfo *v30; // x3
  BattleActionEffect_UpdateAllInfo_o *v31; // x21
  const MethodInfo *v32; // [xsp+0h] [xbp-70h]

  v8 = (Il2CppObject *)this;
  if ( (byte_4CB93F8 & 1) == 0 )
  {
    sub_1C6BA08(&Method_BasicHelper_Any_BattleBuffData_BuffData___);
    sub_1C6BA08(&Method_BattleLogicFunction__FunctionSubFieldBuff_b__135_0__);
    sub_1C6BA08(&Method_System_Linq_Enumerable_Select_BattleBuffData_BuffData__BattleBuffData_BuffData___);
    sub_1C6BA08(&Method_System_Linq_Enumerable_ToList_BattleBuffData_BuffData___);
    sub_1C6BA08(&System_Func_BattleBuffData_BuffData__BattleBuffData_BuffData__TypeInfo);
    sub_1C6BA08(&System_Func_BattleBuffData_BuffData__bool__TypeInfo);
    sub_1C6BA08(&Method_System_Collections_Generic_List_BattleBuffData_BuffData__get_Count__);
    sub_1C6BA08(&Method_BattleLogicFunction___c__FunctionSubFieldBuff_b__135_1__);
    sub_1C6BA08(&BattleLogicFunction___c_TypeInfo);
    this = (BattleLogicFunction_o *)sub_1C6BA08(&BattleActionEffect_UpdateAllInfo_TypeInfo);
    byte_4CB93F8 = 1;
  }
  if ( !funcTarget )
    goto LABEL_26;
  funcUnit_k__BackingField = funcTarget->fields._funcUnit_k__BackingField;
  if ( !funcUnit_k__BackingField )
    goto LABEL_26;
  this = (BattleLogicFunction_o *)BattleLogicFunctionProcess_FunctionUnitCheck__get_FuncIndex(
                                    funcTarget->fields._funcUnit_k__BackingField,
                                    0);
  dataVals_k__BackingField = funcUnit_k__BackingField->fields._dataVals_k__BackingField;
  if ( !dataVals_k__BackingField )
    goto LABEL_26;
  targetId_k__BackingField = funcTarget->fields._targetId_k__BackingField;
  funcEnt = dataVals_k__BackingField->fields.funcEnt;
  v13 = (int)this;
  this = (BattleLogicFunction_o *)((__int64 (__fastcall *)(BattleLogicFunctionProcess_FunctionTargetCheck_o *, const MethodInfo *))funcTarget->klass->vtable._8_MakeActionBuffData.methodPtr)(
                                    funcTarget,
                                    funcTarget->klass->vtable._8_MakeActionBuffData.method);
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
                                    0);
  if ( !this )
    goto LABEL_26;
  data = this->fields.data;
  if ( !data || !args )
    goto LABEL_26;
  m_CancellationTokenSource = (int)data->fields.m_CancellationTokenSource;
  IsCommandSideEffect = BattleLogicFunction_ProcListInArgs__get_IsCommandSideEffect(args, 0);
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
    v21 = (System_Func_object__object__o *)sub_1C6BC54(System_Func_BattleBuffData_BuffData__BattleBuffData_BuffData__TypeInfo);
    System_Func_object__object____ctor(v21, v8, Method_BattleLogicFunction__FunctionSubFieldBuff_b__135_0__, 0);
    v22 = (System_Collections_Generic_IEnumerable_TSource__o *)System_Linq_Enumerable__Select_object__object_(
                                                                 (System_Collections_Generic_IEnumerable_TSource__o *)data,
                                                                 (System_Func_TSource__TResult__o *)v21,
                                                                 (const MethodInfo_3171B10 *)Method_System_Linq_Enumerable_Select_BattleBuffData_BuffData__BattleBuffData_BuffData___);
    this = (BattleLogicFunction_o *)System_Linq_Enumerable__ToList_object_(
                                      v22,
                                      (const MethodInfo_317FEE4 *)Method_System_Linq_Enumerable_ToList_BattleBuffData_BuffData___);
    if ( FunctionObject )
    {
      FunctionObject->fields.removeBuffList = (struct System_Collections_Generic_List_BattleBuffData_BuffData__o *)this;
      sub_1C6B9AC((CGThumbnailListItem_o *)&FunctionObject->fields.removeBuffList, (int32_t)this, v23, v24);
      v25 = BattleLogicFunction___c_TypeInfo;
      if ( !BattleLogicFunction___c_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(BattleLogicFunction___c_TypeInfo);
        v25 = BattleLogicFunction___c_TypeInfo;
      }
      _9__135_1 = (System_Func_object__bool__o *)v25->static_fields->__9__135_1;
      if ( !_9__135_1 )
      {
        if ( !v25->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(v25);
          v25 = BattleLogicFunction___c_TypeInfo;
        }
        v27 = (Il2CppObject *)v25->static_fields->__9;
        _9__135_1 = (System_Func_object__bool__o *)sub_1C6BC54(System_Func_BattleBuffData_BuffData__bool__TypeInfo);
        System_Func_object__bool____ctor(
          _9__135_1,
          v27,
          Method_BattleLogicFunction___c__FunctionSubFieldBuff_b__135_1__,
          0);
        static_fields = (CGThumbnailListItem_o *)BattleLogicFunction___c_TypeInfo->static_fields;
        static_fields[1].klass = (CGThumbnailListItem_c *)_9__135_1;
        sub_1C6B9AC(static_fields + 1, (int32_t)_9__135_1, v29, v30);
      }
      this = (BattleLogicFunction_o *)BasicHelper__Any_object_(
                                        (System_Collections_Generic_List_T__o *)data,
                                        (System_Func_T__bool__o *)_9__135_1,
                                        (const MethodInfo_3124430 *)Method_BasicHelper_Any_BattleBuffData_BuffData___);
      if ( ((unsigned __int8)this & 1) != 0 )
      {
        v31 = (BattleActionEffect_UpdateAllInfo_o *)sub_1C6BC54(BattleActionEffect_UpdateAllInfo_TypeInfo);
        BattleActionEffect_UpdateAllInfo___ctor(v31, 0);
        BattleActionData_BuffData__SetActionEffectProc(FunctionObject, (BattleActionEffect_Base_o *)v31, 0);
      }
      if ( mainAction )
      {
        BattleActionData__setBuffData(mainAction, FunctionObject, dataVals_k__BackingField, 0, 0);
        return;
      }
    }
LABEL_26:
    sub_1C6BC60(this, args);
  }
  this = (BattleLogicFunction_o *)BattleLogicFunction__getNoEffectObject(
                                    (BattleLogicFunction_o *)v8,
                                    targetId_k__BackingField,
                                    v13,
                                    dataVals_k__BackingField,
                                    IsCommandSideEffect,
                                    0,
                                    v15,
                                    0,
                                    v32);
  if ( !mainAction )
    goto LABEL_26;
  BattleActionData__addAction(mainAction, (BattleActionData_o *)this, 0);
}


BattleActionData_o *BattleLogicFunction__FunctionSwapFieldPosition(
        BattleLogicFunction_o *this,
        DataVals_o *baseVals,
        int32_t functionIndex,
        System_Int32_array *entryIdArray,
        bool isEnemy,
        bool noTargetSkipSkill,
        const MethodInfo *method)
{
  BattleLogicFunction___c__DisplayClass157_0_o *v12; // x24
  __int64 IsNullOrEmpty; // x0
  __int64 v14; // x1
  System_Int32_array *BackStepTargetArray; // x20
  System_Int32_array *ReplacePositionTargetArray; // x27
  BattleActionData_o *v17; // x26
  int max_length; // w8
  _BOOL4 v19; // w28
  int v20; // w10
  unsigned __int64 v21; // x8
  int32_t *m_Items; // x11
  int32_t *v23; // x12
  int v24; // w14
  int v25; // w15
  int v26; // w14
  int v27; // w14
  bool v28; // zf
  bool v29; // nf
  int v30; // w15
  System_Collections_Generic_List_object__o *v31; // x25
  const MethodInfo *v32; // x3
  int v33; // w8
  __int64 v34; // x22
  __int64 v35; // x8
  char *v36; // x8
  int32_t v37; // w2
  const MethodInfo *v38; // x3
  struct System_Object_array *items; // x8
  _QWORD *v40; // x9
  __int64 size; // x10
  __int64 v42; // x1
  Il2CppClass **v43; // x0
  BattleLogicFunction___c_c *v44; // x0
  System_Func_int__Guid__o *_9__157_0; // x27
  Il2CppObject *v46; // x28
  struct BattleLogicFunction___c_StaticFields *static_fields; // x0
  int32_t v48; // w2
  const MethodInfo *v49; // x3
  System_Collections_Generic_IEnumerable_TSource__o *v50; // x0
  __int64 v51; // x27
  int v52; // w29
  unsigned __int64 v53; // x28
  unsigned int v54; // w19
  char *v55; // x21
  _DWORD *v56; // x21
  int v57; // t1
  struct BattleData_o *data; // x8
  struct BattleData_o *v60; // x8
  struct System_Int32_array *e_entryid; // x9
  System_Collections_IEnumerable_o *RestockServantLogicList; // x0
  System_Collections_Generic_IEnumerable_TSource__o *v63; // x21
  System_Func_object__bool__o *v64; // x22
  System_Collections_Generic_IEnumerable_TSource__o *v65; // x0
  System_Object_array *v66; // x21
  int v67; // w8
  unsigned int v68; // w19
  RestockServantLogic_o *v69; // x22
  int32_t FieldMemberIndex_k__BackingField; // w23
  unsigned __int64 v71; // x21
  int32_t v72; // w2
  int32_t v73; // [xsp+Ch] [xbp-74h]
  int32_t v74; // [xsp+10h] [xbp-70h]
  bool v75; // [xsp+14h] [xbp-6Ch]

  if ( (byte_4CB93FF & 1) == 0 )
  {
    sub_1C6BA08(&Method_BasicHelper_IsValidIndex_int___);
    sub_1C6BA08(&BattleActionData_TypeInfo);
    sub_1C6BA08(&Method_System_Linq_Enumerable_Contains_int___);
    sub_1C6BA08(&Method_System_Linq_Enumerable_OfType_RestockServantLogicByMoveToSubMember___);
    sub_1C6BA08(&Method_System_Linq_Enumerable_OrderBy_int__Guid___);
    sub_1C6BA08(&Method_System_Linq_Enumerable_ToArray_int___);
    sub_1C6BA08(&Method_System_Linq_Enumerable_ToArray_RestockServantLogicByMoveToSubMember___);
    sub_1C6BA08(&Method_System_Linq_Enumerable_Where_RestockServantLogicByMoveToSubMember___);
    sub_1C6BA08(&System_Func_int__Guid__TypeInfo);
    sub_1C6BA08(&System_Func_RestockServantLogicByMoveToSubMember__bool__TypeInfo);
    sub_1C6BA08(&Method_System_Collections_Generic_List_BattleServantData__Add__);
    sub_1C6BA08(&Method_System_Collections_Generic_List_BattleServantData___ctor__);
    sub_1C6BA08(&Method_System_Collections_Generic_List_BattleServantData__get_Count__);
    sub_1C6BA08(&Method_System_Collections_Generic_List_BattleServantData__get_Item__);
    sub_1C6BA08(&System_Collections_Generic_List_BattleServantData__TypeInfo);
    sub_1C6BA08(&Method_BattleLogicFunction___c__FunctionSwapFieldPosition_b__157_0__);
    sub_1C6BA08(&Method_BattleLogicFunction___c__DisplayClass157_0__FunctionSwapFieldPosition_b__1__);
    sub_1C6BA08(&BattleLogicFunction___c__DisplayClass157_0_TypeInfo);
    sub_1C6BA08(&BattleLogicFunction___c_TypeInfo);
    byte_4CB93FF = 1;
  }
  v12 = (BattleLogicFunction___c__DisplayClass157_0_o *)sub_1C6BC54(BattleLogicFunction___c__DisplayClass157_0_TypeInfo);
  BattleLogicFunction___c__DisplayClass157_0___ctor(v12, 0);
  if ( !v12 )
    goto LABEL_107;
  v12->fields.isEnemy = isEnemy;
  if ( !baseVals )
    goto LABEL_107;
  BackStepTargetArray = DataVals__GetBackStepTargetArray(baseVals, 0);
  ReplacePositionTargetArray = DataVals__GetReplacePositionTargetArray(baseVals, 0);
  v17 = 0;
  if ( BasicHelper__IsNullOrEmpty((System_Collections_ICollection_o *)BackStepTargetArray, 0) )
    return v17;
  IsNullOrEmpty = BasicHelper__IsNullOrEmpty((System_Collections_ICollection_o *)ReplacePositionTargetArray, 0);
  v17 = 0;
  if ( (IsNullOrEmpty & 1) != 0 )
    return v17;
  if ( !ReplacePositionTargetArray )
    goto LABEL_107;
  max_length = ReplacePositionTargetArray->max_length;
  v19 = max_length == 1 && ReplacePositionTargetArray->m_Items[0] == 0;
  if ( !BackStepTargetArray )
    goto LABEL_107;
  v20 = BackStepTargetArray->max_length;
  if ( v20 != max_length && !v19 )
    return 0;
  if ( v12->fields.isEnemy )
  {
    IsNullOrEmpty = (__int64)this->fields.data;
    if ( !IsNullOrEmpty )
      goto LABEL_107;
    IsNullOrEmpty = BattleData__getServantIndex((BattleData_o *)IsNullOrEmpty, 1, *(_DWORD *)(IsNullOrEmpty + 336), 0);
    v20 = BackStepTargetArray->max_length;
  }
  else
  {
    IsNullOrEmpty = 0xFFFFFFFFLL;
  }
  if ( v20 >= 1 )
  {
    v21 = 0;
    m_Items = BackStepTargetArray->m_Items;
    v23 = ReplacePositionTargetArray->m_Items;
    do
    {
      if ( v21 >= (unsigned int)v20 )
        goto LABEL_108;
      v24 = m_Items[v21] - 1;
      m_Items[v21] = v24;
      if ( v24 < 0 )
      {
        v26 = 0;
      }
      else
      {
        if ( !entryIdArray )
          goto LABEL_107;
        v25 = entryIdArray->max_length;
        if ( v24 < v25 )
          goto LABEL_27;
        v26 = v25 - 1;
      }
      m_Items[v21] = v26;
LABEL_27:
      if ( !v19 )
      {
        if ( v21 >= LODWORD(ReplacePositionTargetArray->max_length) )
          goto LABEL_108;
        v27 = v23[v21] - 1;
        v28 = v23[v21] == -1;
        v29 = v23[v21] + 1 < 0;
        v23[v21] = v27;
        if ( v29 ^ __OFSUB__(v27, -2) | v28 )
        {
          v23[v21] = -1;
        }
        else
        {
          if ( !entryIdArray )
            goto LABEL_107;
          v30 = entryIdArray->max_length;
          if ( v27 >= v30 )
            v23[v21] = v30 - 1;
        }
      }
      ++v21;
    }
    while ( (__int64)v21 < v20 );
  }
  v73 = IsNullOrEmpty;
  v74 = functionIndex;
  v75 = noTargetSkipSkill;
  v31 = (System_Collections_Generic_List_object__o *)sub_1C6BC54(System_Collections_Generic_List_BattleServantData__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v31,
    (const MethodInfo_3800140 *)Method_System_Collections_Generic_List_BattleServantData___ctor__);
  v33 = BackStepTargetArray->max_length;
  if ( v33 >= 1 )
  {
    v34 = 0;
    while ( (unsigned int)v34 < v33 )
    {
      if ( !entryIdArray )
        goto LABEL_107;
      v35 = BackStepTargetArray->m_Items[v34];
      if ( (unsigned int)v35 >= LODWORD(entryIdArray->max_length) )
        break;
      v36 = (char *)entryIdArray + 4 * v35;
      v14 = *((unsigned int *)v36 + 8);
      *((_DWORD *)v36 + 8) = -1;
      IsNullOrEmpty = (__int64)this->fields.data;
      if ( !IsNullOrEmpty )
        goto LABEL_107;
      IsNullOrEmpty = (__int64)BattleData__getServantData((BattleData_o *)IsNullOrEmpty, v14, 0);
      if ( !v31 )
        goto LABEL_107;
      items = v31->fields._items;
      v40 = Method_System_Collections_Generic_List_BattleServantData__Add__;
      ++v31->fields._version;
      if ( !items )
        goto LABEL_107;
      size = v31->fields._size;
      v42 = IsNullOrEmpty;
      if ( (unsigned int)size >= LODWORD(items->max_length) )
      {
        System_Collections_Generic_List_object___AddWithResize(
          v31,
          (Il2CppObject *)IsNullOrEmpty,
          *(const MethodInfo_3800974 **)(*(_QWORD *)(v40[4] + 192LL) + 112LL));
      }
      else
      {
        v43 = &items->obj.klass + size;
        v31->fields._size = size + 1;
        v43[4] = (Il2CppClass *)v42;
        sub_1C6B9AC((CGThumbnailListItem_o *)(v43 + 4), v42, v37, v38);
      }
      v33 = BackStepTargetArray->max_length;
      if ( (int)++v34 >= v33 )
        goto LABEL_47;
    }
LABEL_108:
    sub_1C6BC68(IsNullOrEmpty);
  }
LABEL_47:
  if ( v19 )
  {
    v44 = BattleLogicFunction___c_TypeInfo;
    if ( !BattleLogicFunction___c_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(BattleLogicFunction___c_TypeInfo);
      v44 = BattleLogicFunction___c_TypeInfo;
    }
    _9__157_0 = v44->static_fields->__9__157_0;
    if ( !_9__157_0 )
    {
      if ( !v44->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(v44);
        v44 = BattleLogicFunction___c_TypeInfo;
      }
      v46 = (Il2CppObject *)v44->static_fields->__9;
      _9__157_0 = (System_Func_int__Guid__o *)sub_1C6BC54(System_Func_int__Guid__TypeInfo);
      System_Func_int__Guid____ctor(
        _9__157_0,
        v46,
        Method_BattleLogicFunction___c__FunctionSwapFieldPosition_b__157_0__,
        0);
      static_fields = BattleLogicFunction___c_TypeInfo->static_fields;
      static_fields->__9__157_0 = _9__157_0;
      sub_1C6B9AC((CGThumbnailListItem_o *)&static_fields->__9__157_0, (int32_t)_9__157_0, v48, v49);
    }
    v50 = (System_Collections_Generic_IEnumerable_TSource__o *)System_Linq_Enumerable__OrderBy_int__Guid_(
                                                                 (System_Collections_Generic_IEnumerable_TSource__o *)BackStepTargetArray,
                                                                 (System_Func_TSource__TKey__o *)_9__157_0,
                                                                 (const MethodInfo_316A97C *)Method_System_Linq_Enumerable_OrderBy_int__Guid___);
    IsNullOrEmpty = (__int64)System_Linq_Enumerable__ToArray_int_(
                               v50,
                               (const MethodInfo_317B0B0 *)Method_System_Linq_Enumerable_ToArray_int___);
  }
  else
  {
    IsNullOrEmpty = (__int64)BattleLogicFunction__GetReplaceIndexArray(
                               (BattleLogicFunction_o *)IsNullOrEmpty,
                               BackStepTargetArray,
                               ReplacePositionTargetArray,
                               v32);
  }
  v51 = IsNullOrEmpty;
  if ( !IsNullOrEmpty || !v31 )
LABEL_107:
    sub_1C6BC60(IsNullOrEmpty, v14);
  if ( *(int *)(IsNullOrEmpty + 24) >= 1 )
  {
    v52 = 0;
    v53 = 0;
    while ( 1 )
    {
      if ( !System_Collections_Generic_List_object___get_Item(
              v31,
              v53,
              (const MethodInfo_38006A4 *)Method_System_Collections_Generic_List_BattleServantData__get_Item__) )
        goto LABEL_63;
      IsNullOrEmpty = (__int64)System_Collections_Generic_List_object___get_Item(
                                 v31,
                                 v53,
                                 (const MethodInfo_38006A4 *)Method_System_Collections_Generic_List_BattleServantData__get_Item__);
      if ( !IsNullOrEmpty )
        goto LABEL_107;
      if ( !BattleServantData__isAliveLogic((BattleServantData_o *)IsNullOrEmpty, 1, 0) )
LABEL_63:
        ++v52;
      IsNullOrEmpty = (__int64)System_Collections_Generic_List_object___get_Item(
                                 v31,
                                 v53,
                                 (const MethodInfo_38006A4 *)Method_System_Collections_Generic_List_BattleServantData__get_Item__);
      if ( IsNullOrEmpty )
      {
        if ( v53 >= *(unsigned int *)(v51 + 24) )
          goto LABEL_108;
        if ( !entryIdArray )
          goto LABEL_107;
        v54 = *(_DWORD *)(v51 + 32 + 4 * v53);
        if ( v54 >= LODWORD(entryIdArray->max_length) )
          goto LABEL_108;
        v55 = (char *)entryIdArray + 4 * (int)v54;
        v57 = *((_DWORD *)v55 + 8);
        v56 = v55 + 32;
        if ( v57 == -1 )
        {
          IsNullOrEmpty = (__int64)System_Collections_Generic_List_object___get_Item(
                                     v31,
                                     v53,
                                     (const MethodInfo_38006A4 *)Method_System_Collections_Generic_List_BattleServantData__get_Item__);
          if ( !IsNullOrEmpty )
            goto LABEL_107;
          *(_DWORD *)(IsNullOrEmpty + 20) = v54;
          IsNullOrEmpty = (__int64)System_Collections_Generic_List_object___get_Item(
                                     v31,
                                     v53,
                                     (const MethodInfo_38006A4 *)Method_System_Collections_Generic_List_BattleServantData__get_Item__);
          if ( !IsNullOrEmpty )
            goto LABEL_107;
          if ( v54 >= LODWORD(entryIdArray->max_length) )
            goto LABEL_108;
          *v56 = *(_DWORD *)(IsNullOrEmpty + 24);
        }
      }
      if ( (__int64)++v53 >= *(int *)(v51 + 24) )
        goto LABEL_76;
    }
  }
  v52 = 0;
LABEL_76:
  if ( v52 == v31->fields._size && v75 )
    return 0;
  if ( v12->fields.isEnemy )
  {
    data = this->fields.data;
    if ( !data )
      goto LABEL_107;
    IsNullOrEmpty = BasicHelper__IsValidIndex_int_(
                      data->fields.e_entryid,
                      v73,
                      (const MethodInfo_312997C *)Method_BasicHelper_IsValidIndex_int___);
    if ( (IsNullOrEmpty & 1) != 0 )
    {
      v60 = this->fields.data;
      if ( !v60 )
        goto LABEL_107;
      e_entryid = v60->fields.e_entryid;
      if ( !e_entryid )
        goto LABEL_107;
      if ( (unsigned int)v73 >= LODWORD(e_entryid->max_length) )
        goto LABEL_108;
      v60->fields.globaltargetId = e_entryid->m_Items[v73];
    }
  }
  IsNullOrEmpty = (__int64)this->fields.data;
  if ( !IsNullOrEmpty )
    goto LABEL_107;
  RestockServantLogicList = (System_Collections_IEnumerable_o *)BattleData__GetRestockServantLogicList(
                                                                  (BattleData_o *)IsNullOrEmpty,
                                                                  0);
  v63 = (System_Collections_Generic_IEnumerable_TSource__o *)System_Linq_Enumerable__OfType_object_(
                                                               RestockServantLogicList,
                                                               (const MethodInfo_316A620 *)Method_System_Linq_Enumerable_OfType_RestockServantLogicByMoveToSubMember___);
  v64 = (System_Func_object__bool__o *)sub_1C6BC54(System_Func_RestockServantLogicByMoveToSubMember__bool__TypeInfo);
  System_Func_object__bool____ctor(
    v64,
    (Il2CppObject *)v12,
    Method_BattleLogicFunction___c__DisplayClass157_0__FunctionSwapFieldPosition_b__1__,
    0);
  v65 = System_Linq_Enumerable__Where_object_(
          v63,
          (System_Func_TSource__bool__o *)v64,
          (const MethodInfo_3182364 *)Method_System_Linq_Enumerable_Where_RestockServantLogicByMoveToSubMember___);
  v66 = System_Linq_Enumerable__ToArray_object_(
          v65,
          (const MethodInfo_317B248 *)Method_System_Linq_Enumerable_ToArray_RestockServantLogicByMoveToSubMember___);
  IsNullOrEmpty = BasicHelper__IsNullOrEmpty((System_Collections_ICollection_o *)v66, 0);
  if ( (IsNullOrEmpty & 1) == 0 )
  {
    if ( v66 )
    {
      v67 = v66->max_length;
      if ( v67 >= 1 )
      {
        v68 = 0;
        while ( v68 < v67 )
        {
          v69 = (RestockServantLogic_o *)v66->m_Items[v68];
          if ( !v69 )
            goto LABEL_107;
          FieldMemberIndex_k__BackingField = v69->fields._FieldMemberIndex_k__BackingField;
          IsNullOrEmpty = System_Linq_Enumerable__Contains_int_(
                            (System_Collections_Generic_IEnumerable_TSource__o *)BackStepTargetArray,
                            FieldMemberIndex_k__BackingField,
                            (const MethodInfo_31583F4 *)Method_System_Linq_Enumerable_Contains_int___);
          if ( (IsNullOrEmpty & 1) != 0 )
          {
            if ( (unsigned int)FieldMemberIndex_k__BackingField >= *(_DWORD *)(v51 + 24) )
              goto LABEL_108;
            RestockServantLogic__OverwriteFieldMemberIndex(
              v69,
              *(_DWORD *)(v51 + 4LL * FieldMemberIndex_k__BackingField + 32),
              0);
          }
          v67 = v66->max_length;
          if ( (int)++v68 >= v67 )
            goto LABEL_98;
        }
        goto LABEL_108;
      }
      goto LABEL_98;
    }
    goto LABEL_107;
  }
LABEL_98:
  v17 = (BattleActionData_o *)sub_1C6BC54(BattleActionData_TypeInfo);
  BattleActionData___ctor(v17, 0);
  if ( SLODWORD(BackStepTargetArray->max_length) >= 1 )
  {
    v71 = 0;
    while ( 1 )
    {
      IsNullOrEmpty = (__int64)System_Collections_Generic_List_object___get_Item(
                                 v31,
                                 v71,
                                 (const MethodInfo_38006A4 *)Method_System_Collections_Generic_List_BattleServantData__get_Item__);
      v72 = IsNullOrEmpty ? *(_DWORD *)(IsNullOrEmpty + 24) : -1;
      if ( v71 >= LODWORD(BackStepTargetArray->max_length) )
        goto LABEL_108;
      if ( !v17 )
        goto LABEL_107;
      BattleActionData__setReplaceMember(v17, BackStepTargetArray->m_Items[v71++], v72, v72, v74, 0);
      if ( (__int64)v71 >= SLODWORD(BackStepTargetArray->max_length) )
        return v17;
    }
  }
  return v17;
}


void BattleLogicFunction__FunctionToFieldAddChangeFieldBuff(
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
  BattleBuffData_FieldChangeData_o *logic; // x24
  struct BattleData_o *data; // x8
  Generator_BGFromFieldChangeBGBuff_o *v17; // x22
  const MethodInfo *v18; // x3
  BattleData_o *v19; // x22
  Generator_BGMFromFieldChangeBGBuff_o *v20; // x23
  const MethodInfo *v21; // x4

  v10 = this;
  if ( (byte_4CB93F7 & 1) == 0 )
  {
    sub_1C6BA08(&Generator_BGFromFieldChangeBGBuff_TypeInfo);
    this = (BattleLogicFunction_o *)sub_1C6BA08(&Generator_BGMFromFieldChangeBGBuff_TypeInfo);
    byte_4CB93F7 = 1;
  }
  if ( !funcTarget )
    goto LABEL_17;
  this = (BattleLogicFunction_o *)funcTarget->fields._funcUnit_k__BackingField;
  if ( !this )
    goto LABEL_17;
  logictarget = (DataVals_o *)this->fields.logictarget;
  this = (BattleLogicFunction_o *)BattleLogicFunctionProcess_FunctionUnitCheck__MakeAddBgmArgument(
                                    (BattleLogicFunctionProcess_FunctionUnitCheck_o *)this,
                                    0);
  if ( !logictarget )
    goto LABEL_17;
  v12 = (AddBgmArgument_o *)this;
  isParam = DataVals__isParam(logictarget, 102, 0);
  this = (BattleLogicFunction_o *)BattleLogicFunction__functionAddState(v10, mainAction, funcTarget, args, isParam, v14);
  if ( !this )
    goto LABEL_17;
  logic = (BattleBuffData_FieldChangeData_o *)this[3].fields.logic;
  if ( isTreasureDvc )
  {
    data = v10->fields.data;
    if ( data && mainAction )
    {
      BattleActionData__SetAfterChangeField(
        mainAction,
        logic,
        logictarget,
        data->fields._FieldEnvData_k__BackingField,
        v12,
        0);
      return;
    }
LABEL_17:
    sub_1C6BC60(this, args);
  }
  if ( !logic )
    goto LABEL_17;
  if ( logic->fields.bgId >= 1 )
  {
    v17 = (Generator_BGFromFieldChangeBGBuff_o *)sub_1C6BC54(Generator_BGFromFieldChangeBGBuff_TypeInfo);
    Generator_BGFromFieldChangeBGBuff___ctor(v17, logic, 0);
    BattleLogicFunction__FunctionQuickChangeBG(v10, args, (Generator_Background_o *)v17, v18);
  }
  if ( logic->fields.bgmId >= 1 )
  {
    v19 = v10->fields.data;
    v20 = (Generator_BGMFromFieldChangeBGBuff_o *)sub_1C6BC54(Generator_BGMFromFieldChangeBGBuff_TypeInfo);
    Generator_BGMFromFieldChangeBGBuff___ctor(v20, v19, logic, 0);
    BattleLogicFunction__FunctionChangeBgm(v10, args, (Generator_BGM_o *)v20, v12, 0.0, v21);
  }
}


void BattleLogicFunction__FunctionUpdateEntryMaxCountEachTurn(
        BattleLogicFunction_o *this,
        DataVals_o *baseVals,
        const MethodInfo *method)
{
  struct BattleData_o *data; // x19

  if ( !baseVals || (data = this->fields.data, this = (BattleLogicFunction_o *)DataVals__GetValue(baseVals, 0), !data) )
    sub_1C6BC60(this, baseVals);
  data->fields._EnemyEntryMaxCountEachTurn_k__BackingField = (int)this;
}


void BattleLogicFunction__FunctionUpdateEntryPositions(
        BattleLogicFunction_o *this,
        DataVals_o *baseVals,
        const MethodInfo *method)
{
  BattleLogicFunction_o *v4; // x19
  BattleData_o *data; // x8

  if ( !baseVals
    || (v4 = this, this = (BattleLogicFunction_o *)DataVals__GetParamArray(baseVals, 82, 0), !v4->fields.data)
    || (BattleData__UpdateTargetPosEnemyAppearValid(v4->fields.data, (System_Int32_array *)this, 1, 0),
        this = (BattleLogicFunction_o *)DataVals__GetParamArray(baseVals, 83, 0),
        (data = v4->fields.data) == 0) )
  {
    sub_1C6BC60(this, baseVals);
  }
  BattleData__UpdateTargetPosEnemyAppearValid(data, (System_Int32_array *)this, 0, 0);
}


int32_t BattleLogicFunction__GetActualRecoveryHealPoint(
        BattleLogicFunction_o *this,
        DataVals_o *dataVals,
        BattleServantData_o *targetSvtData,
        int32_t healPoint,
        const MethodInfo *method)
{
  int32_t MaxHp; // w21
  int v9; // w20

  if ( (byte_4CB93C8 & 1) == 0 )
  {
    this = (BattleLogicFunction_o *)sub_1C6BA08(&System_Math_TypeInfo);
    byte_4CB93C8 = 1;
  }
  if ( !dataVals )
    goto LABEL_10;
  this = (BattleLogicFunction_o *)DataVals__isParam(dataVals, 116, 0);
  if ( ((unsigned __int8)this & 1) == 0 )
    return healPoint;
  if ( !targetSvtData )
LABEL_10:
    sub_1C6BC60(this, dataVals);
  MaxHp = BattleServantData__getMaxHp(targetSvtData, 0);
  v9 = ((__int64 (__fastcall *)(BattleServantData_o *, const MethodInfo *))targetSvtData->klass->vtable._13_get_resultHp.methodPtr)(
         targetSvtData,
         targetSvtData->klass->vtable._13_get_resultHp.method);
  if ( !System_Math_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(System_Math_TypeInfo);
  return System_Math__Min_65488940(healPoint, MaxHp - v9, 0);
}


int32_t BattleLogicFunction__GetAddCondParamValue(
        BattleLogicFunction_o *this,
        DataVals_o *baseVals,
        BattleServantData_o *targetSvtData,
        const MethodInfo *method)
{
  BattleLogicFunction_o *v6; // x21
  struct BattleData_o *data; // x8
  struct BattleEntity_o *battle_ent; // x8
  BattleInfoData_o *battleInfo; // x23
  int32_t v10; // w22
  ClassStatisticsInfo_array *ClassStatisticsInfos; // x0
  int32_t AddValue; // w22
  struct BattleData_o *v13; // x8
  struct BattleEntity_o *v14; // x8
  BattleInfoData_o *v15; // x23
  int32_t v16; // w21
  ClassStatisticsInfo_array *v17; // x0
  int32_t param[2]; // [xsp+8h] [xbp-38h] BYREF

  *(_QWORD *)param = 0;
  if ( !baseVals )
    goto LABEL_16;
  v6 = this;
  this = (BattleLogicFunction_o *)DataVals__TryGetParam(baseVals, 220, &param[1], 0);
  if ( ((unsigned __int8)this & 1) != 0 )
  {
    data = v6->fields.data;
    if ( !data )
      goto LABEL_16;
    battle_ent = data->fields.battle_ent;
    if ( !battle_ent )
      goto LABEL_16;
    if ( !targetSvtData )
      goto LABEL_16;
    battleInfo = battle_ent->fields.battleInfo;
    v10 = param[1];
    this = (BattleLogicFunction_o *)BattleServantData__IsFollwerSupport(targetSvtData, 0);
    if ( !battleInfo )
      goto LABEL_16;
    ClassStatisticsInfos = BattleInfoData__GetClassStatisticsInfos(battleInfo, (unsigned __int8)this & 1, 0);
    AddValue = CondParamAddType__GetAddValue(baseVals, v10, ClassStatisticsInfos, 0);
  }
  else
  {
    AddValue = 0;
  }
  this = (BattleLogicFunction_o *)DataVals__TryGetParam(baseVals, 224, param, 0);
  if ( ((unsigned __int8)this & 1) != 0 )
  {
    v13 = v6->fields.data;
    if ( v13 )
    {
      v14 = v13->fields.battle_ent;
      if ( v14 )
      {
        if ( targetSvtData )
        {
          v15 = v14->fields.battleInfo;
          v16 = param[0];
          this = (BattleLogicFunction_o *)BattleServantData__IsFollwerSupport(targetSvtData, 0);
          if ( v15 )
          {
            v17 = BattleInfoData__GetClassStatisticsInfos(v15, (unsigned __int8)this & 1, 0);
            AddValue += CondParamAddType__GetRangeRateValue(baseVals, v16, v17, 0);
            return AddValue;
          }
        }
      }
    }
LABEL_16:
    sub_1C6BC60(this, baseVals);
  }
  return AddValue;
}


int32_t BattleLogicFunction__GetAdjustmentBuffTurn(
        BattleLogicFunction_o *this,
        DataVals_o *dataVals,
        BattleServantData_o *actionServant,
        const MethodInfo *method)
{
  BattleLogicFunction_o *v5; // x21
  const MethodInfo *v7; // x4
  _BOOL4 v8; // w22
  struct BattleData_o *data; // x8
  int32_t currentTurn; // w8
  _BOOL4 v11; // w9
  _BOOL4 v12; // w8
  int32_t v13; // w23
  int32_t v14; // w20
  bool isEnemyTurn; // [xsp+Ch] [xbp-34h] BYREF

  isEnemyTurn = 0;
  if ( !dataVals )
    goto LABEL_22;
  v5 = this;
  this = (BattleLogicFunction_o *)DataVals__IsAdjustmentBuffTurn(dataVals, 0);
  if ( ((unsigned __int8)this & 1) == 0 )
    return 0;
  v8 = !actionServant || !actionServant->fields.isEnemy;
  data = v5->fields.data;
  if ( !data )
LABEL_22:
    sub_1C6BC60(this, dataVals);
  currentTurn = data->fields.currentTurn;
  v11 = currentTurn == 0;
  v12 = currentTurn == 1;
  if ( v8 )
    v13 = v12;
  else
    v13 = v11;
  if ( BattleLogicFunction__IsSituationForceTurnProgressExecutable(v5, actionServant, dataVals, &isEnemyTurn, v7) )
    v14 = isEnemyTurn != !v8;
  else
    v14 = v13;
  if ( !DataVals__IsExtendBuffHalfTurnInOpponentTurn(dataVals, 0) )
  {
    if ( DataVals__IsShortenBuffHalfTurnInOpponentTurn(dataVals, 0) )
      return v14 << 31 >> 31;
    if ( DataVals__IsExtendBuffHalfTurnInPartyTurn(dataVals, 0) )
      return v14 ^ 1;
    if ( DataVals__IsShortenBuffHalfTurnInPartyTurn(dataVals, 0) )
      return --v14;
    return 0;
  }
  return v14;
}


BuffEntity_o *BattleLogicFunction__GetBuffEntity(
        BattleLogicFunction_o *this,
        FunctionEntity_o *funcEnt,
        const MethodInfo *method)
{
  Il2CppObject *Master_object; // x0
  __int64 v5; // x1
  struct System_Int32_array *vals; // x8

  if ( (byte_4CB93AA & 1) == 0 )
  {
    sub_1C6BA08(&Method_DataManager_GetMaster_BuffMaster___);
    sub_1C6BA08(&DataManager_TypeInfo);
    sub_1C6BA08(&Method_DataMasterBase_BuffMaster__BuffEntity__int__GetEntity__);
    byte_4CB93AA = 1;
  }
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_object = DataManager__GetMaster_object_((const MethodInfo_313B314 *)Method_DataManager_GetMaster_BuffMaster___);
  if ( !funcEnt )
    goto LABEL_10;
  vals = funcEnt->fields.vals;
  if ( !vals )
    goto LABEL_10;
  if ( !LODWORD(vals->max_length) )
    sub_1C6BC68(Master_object);
  if ( !Master_object )
LABEL_10:
    sub_1C6BC60(Master_object, v5);
  return (BuffEntity_o *)DataMasterBase_object__object__int___GetEntity(
                           (DataMasterBase_TMaster__TEntity__PKType__o *)Master_object,
                           vals->m_Items[0],
                           (const MethodInfo_33F90DC *)Method_DataMasterBase_BuffMaster__BuffEntity__int__GetEntity__);
}


System_Int32_array *BattleLogicFunction__GetBuffTargetCardIndexArray(
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
  il2cpp_array_size_t max_length; // x8
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
  unsigned int v29; // w11
  int32_t v30; // w1
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v32; // 0:x0.16

  if ( (byte_4CB93EE & 1) == 0 )
  {
    sub_1C6BA08(&Method_DataManager_GetMasterData_ServantMaster___);
    sub_1C6BA08(&Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
    sub_1C6BA08(&Method_System_Linq_Enumerable_Repeat_int___);
    sub_1C6BA08(&Method_System_Linq_Enumerable_ToArray_int___);
    sub_1C6BA08(&Method_System_Collections_Generic_List_int__AddRange__);
    sub_1C6BA08(&Method_System_Collections_Generic_List_int__Add__);
    sub_1C6BA08(&Method_System_Collections_Generic_List_int__Contains__);
    sub_1C6BA08(&Method_System_Collections_Generic_List_int__ToArray__);
    sub_1C6BA08(&Method_System_Collections_Generic_List_int___ctor__);
    sub_1C6BA08(&Method_System_Collections_Generic_List_int__get_Count__);
    sub_1C6BA08(&Method_System_Collections_Generic_List_int__get_Item__);
    sub_1C6BA08(&System_Collections_Generic_List_int__TypeInfo);
    sub_1C6BA08(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    sub_1C6BA08(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_4CB93EE = 1;
  }
  v6 = (System_Collections_Generic_List_int__o *)sub_1C6BC54(System_Collections_Generic_List_int__TypeInfo);
  System_Collections_Generic_List_int____ctor(
    v6,
    (const MethodInfo_37E30FC *)Method_System_Collections_Generic_List_int___ctor__);
  if ( !baseVals )
    goto LABEL_55;
  CardIndex = DataVals__GetCardIndex(baseVals, 0);
  CardIndividuality = DataVals__GetCardIndividuality(baseVals, 0);
  if ( (CardIndividuality & 0x80000000) == 0 )
  {
    IdArrayFromIndividuality = CardMaster__getIdArrayFromIndividuality(CardIndividuality, 0);
    CardIndividuality = (unsigned __int64)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3A4F3B4 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !CardIndividuality )
      goto LABEL_55;
    CardIndividuality = (unsigned __int64)DataManager__GetMasterData_object_(
                                            (DataManager_o *)CardIndividuality,
                                            (const MethodInfo_313B368 *)Method_DataManager_GetMasterData_ServantMaster___);
    if ( !targetServant )
      goto LABEL_55;
    v11 = (DataMasterBase_TMaster__TEntity__PKType__o *)CardIndividuality;
    v13 = *(_QWORD *)&targetServant->fields.svtId.fields.currentCryptoKey;
    v12 = *(_QWORD *)&targetServant->fields.svtId.fields.fakeValue;
    if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    *(_QWORD *)&v32.fields.currentCryptoKey = v13;
    *(_QWORD *)&v32.fields.fakeValue = v12;
    CardIndividuality = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_49233020(v32, 0);
    if ( !v11 )
      goto LABEL_55;
    CardIndividuality = (unsigned __int64)DataMasterBase_object__object__int___GetEntity(
                                            v11,
                                            CardIndividuality,
                                            (const MethodInfo_33F90DC *)Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
    if ( !CardIndividuality )
      goto LABEL_55;
    v14 = *(_QWORD *)(CardIndividuality + 144);
    v15 = (System_Collections_Generic_List_int__o *)sub_1C6BC54(System_Collections_Generic_List_int__TypeInfo);
    System_Collections_Generic_List_int____ctor(
      v15,
      (const MethodInfo_37E30FC *)Method_System_Collections_Generic_List_int___ctor__);
    CardIndividuality = (unsigned __int64)BattleServantData__get_BuffData(targetServant, 0);
    if ( !CardIndividuality )
      goto LABEL_55;
    CardIndividuality = (unsigned __int64)BattleBuffData__GetCommandCardTypeChangeBuff(
                                            (BattleBuffData_o *)CardIndividuality,
                                            0);
    if ( CardIndividuality )
    {
      if ( !v14 )
        goto LABEL_55;
      v16 = (System_Collections_Generic_IEnumerable_TSource__o *)System_Linq_Enumerable__Repeat_int_(
                                                                   *(_DWORD *)(CardIndividuality + 28),
                                                                   *(_DWORD *)(v14 + 24),
                                                                   (const MethodInfo_316B710 *)Method_System_Linq_Enumerable_Repeat_int___);
      CardIndividuality = (unsigned __int64)System_Linq_Enumerable__ToArray_int_(
                                              v16,
                                              (const MethodInfo_317B0B0 *)Method_System_Linq_Enumerable_ToArray_int___);
      v14 = CardIndividuality;
    }
    if ( !IdArrayFromIndividuality )
      goto LABEL_55;
    max_length = IdArrayFromIndividuality->max_length;
    if ( (int)max_length >= 1 )
    {
      v18 = 0;
      while ( 1 )
      {
        if ( v18 >= (unsigned int)max_length )
          goto LABEL_54;
        if ( !v14 )
          goto LABEL_55;
        v19 = *(_QWORD *)(v14 + 24);
        if ( (int)v19 >= 1 )
          break;
LABEL_31:
        LODWORD(max_length) = IdArrayFromIndividuality->max_length;
        if ( (__int64)++v18 >= (int)max_length )
          goto LABEL_32;
      }
      v20 = IdArrayFromIndividuality->m_Items[v18];
      v21 = 0;
      while ( v21 < (unsigned int)v19 )
      {
        if ( v20 == *(_DWORD *)(v14 + 32 + 4 * v21) )
        {
          if ( !v15 )
            goto LABEL_55;
          CardIndividuality = System_Collections_Generic_List_int___Contains(
                                v15,
                                v21,
                                (const MethodInfo_37E3CC8 *)Method_System_Collections_Generic_List_int__Contains__);
          if ( (CardIndividuality & 1) == 0 )
          {
            items = v15->fields._items;
            v23 = Method_System_Collections_Generic_List_int__Add__;
            ++v15->fields._version;
            if ( !items )
              goto LABEL_55;
            size = v15->fields._size;
            if ( (unsigned int)size >= LODWORD(items->max_length) )
            {
              System_Collections_Generic_List_int___AddWithResize(
                v15,
                v21,
                *(const MethodInfo_37E3950 **)(*(_QWORD *)(v23[4] + 192LL) + 112LL));
            }
            else
            {
              v15->fields._size = size + 1;
              items->m_Items[size] = v21;
            }
          }
        }
        LODWORD(v19) = *(_DWORD *)(v14 + 24);
        if ( (__int64)++v21 >= (int)v19 )
          goto LABEL_31;
      }
LABEL_54:
      sub_1C6BC68(CardIndividuality);
    }
LABEL_32:
    if ( !v15 )
LABEL_55:
      sub_1C6BC60(CardIndividuality, v8);
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
            (const MethodInfo_37E3B5C *)Method_System_Collections_Generic_List_int__AddRange__);
          return System_Collections_Generic_List_int___ToArray(
                   v6,
                   (const MethodInfo_37E5408 *)Method_System_Collections_Generic_List_int__ToArray__);
        }
        goto LABEL_55;
      }
      Next = BattleRandom__getNext(CardIndividuality, 0);
      CardIndividuality = System_Collections_Generic_List_int___get_Item(
                            v15,
                            Next,
                            (const MethodInfo_37E3660 *)Method_System_Collections_Generic_List_int__get_Item__);
      if ( !v6 )
        goto LABEL_55;
      goto LABEL_45;
    }
    goto LABEL_40;
  }
  if ( CardIndex < 0 )
    goto LABEL_40;
  if ( !CardIndex )
  {
    CardIndividuality = BattleRandom__getNext(5, 0);
    if ( !v6 )
      goto LABEL_55;
LABEL_45:
    v26 = v6->fields._items;
    v27 = Method_System_Collections_Generic_List_int__Add__;
    ++v6->fields._version;
    if ( !v26 )
      goto LABEL_55;
    v28 = v6->fields._size;
    v29 = v26->max_length;
    v30 = CardIndividuality;
    goto LABEL_50;
  }
  if ( CardIndex > 5 )
  {
LABEL_40:
    if ( v6 )
      return System_Collections_Generic_List_int___ToArray(
               v6,
               (const MethodInfo_37E5408 *)Method_System_Collections_Generic_List_int__ToArray__);
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
  v29 = v26->max_length;
  v30 = CardIndex - 1;
LABEL_50:
  if ( (unsigned int)v28 >= v29 )
  {
    System_Collections_Generic_List_int___AddWithResize(
      v6,
      v30,
      *(const MethodInfo_37E3950 **)(*(_QWORD *)(v27[4] + 192LL) + 112LL));
  }
  else
  {
    v6->fields._size = v28 + 1;
    v26->m_Items[v28] = v30;
  }
  return System_Collections_Generic_List_int___ToArray(
           v6,
           (const MethodInfo_37E5408 *)Method_System_Collections_Generic_List_int__ToArray__);
}


System_Collections_Generic_IEnumerable_BattleLogicFunctionProcess_FunctionTargetCheck__o *BattleLogicFunction__GetDependFuncTargets(
        BattleLogicFunction_o *this,
        BattleLogicFunction_ProcListInArgs_o *args,
        BattleActionData_o *mainAction,
        DataVals_o *dataVal,
        const MethodInfo *method)
{
  BattleLogicFunctionProcess_DependFunctionUnitCheck_o *v9; // x23
  __int64 v10; // x0
  __int64 v11; // x1
  long double inited; // q0
  System_Collections_Generic_IEnumerable_BattleLogicFunctionProcess_FunctionTargetCheck__o **p_funcTargetArray_k__BackingField; // x8
  _QWORD *v14; // x19
  __int64 v15; // x8
  __int64 v16; // x0
  __int64 v17; // x0

  if ( (byte_4CB93B8 & 1) == 0 )
  {
    sub_1C6BA08(&Method_System_Array_Empty_BattleLogicFunctionProcess_FunctionTargetCheck___);
    sub_1C6BA08(&BattleLogicFunctionProcess_DependFunctionUnitCheck_TypeInfo);
    byte_4CB93B8 = 1;
  }
  v9 = (BattleLogicFunctionProcess_DependFunctionUnitCheck_o *)sub_1C6BC54(BattleLogicFunctionProcess_DependFunctionUnitCheck_TypeInfo);
  BattleLogicFunctionProcess_DependFunctionUnitCheck___ctor(v9, this, args, dataVal, 0);
  if ( !v9 )
    sub_1C6BC60(v10, v11);
  if ( BattleLogicFunctionProcess_FunctionUnitCheck__checkCondtion(
         (BattleLogicFunctionProcess_FunctionUnitCheck_o *)v9,
         mainAction,
         0) )
  {
    p_funcTargetArray_k__BackingField = (System_Collections_Generic_IEnumerable_BattleLogicFunctionProcess_FunctionTargetCheck__o **)&v9->fields._funcTargetArray_k__BackingField;
  }
  else
  {
    v14 = Method_System_Array_Empty_BattleLogicFunctionProcess_FunctionTargetCheck___;
    v15 = *((_QWORD *)Method_System_Array_Empty_BattleLogicFunctionProcess_FunctionTargetCheck___ + 7);
    if ( !v15 )
    {
      sub_1C41AF8(Method_System_Array_Empty_BattleLogicFunctionProcess_FunctionTargetCheck___);
      v15 = v14[7];
    }
    v16 = *(_QWORD *)(v15 + 16);
    if ( (*(_BYTE *)(v16 + 309) & 1) == 0 )
      v16 = sub_1C41A9C(inited);
    if ( !*(_DWORD *)(v16 + 224) )
      inited = j_il2cpp_runtime_class_init_0(v16);
    v17 = *(_QWORD *)(v14[7] + 16LL);
    if ( (*(_BYTE *)(v17 + 309) & 1) == 0 )
      v17 = sub_1C41A9C(inited);
    p_funcTargetArray_k__BackingField = *(System_Collections_Generic_IEnumerable_BattleLogicFunctionProcess_FunctionTargetCheck__o ***)(v17 + 184);
  }
  return *p_funcTargetArray_k__BackingField;
}


int32_t BattleLogicFunction__GetInstantDeathRate(
        BattleLogicFunction_o *this,
        float funcVals,
        BattleServantData_o *targetSvtData,
        BattleServantData_o *actionSvtData,
        bool isTreasureDevice,
        bool isIgnoreResist,
        bool isIgnoreDeathRate,
        int32_t seedRate,
        bool *isResisted,
        BattleBuffData_BuffData_o *substituteBuff,
        const MethodInfo *method)
{
  float v17; // s8
  struct BattleBuffData_SubstituteData_o *substituteData; // x8
  char v19; // w26
  float v20; // s10
  float BuffResistInstantDeath; // s0
  float GrantInstantDeathMagnification; // s9
  int32_t v23; // w20

  v17 = funcVals;
  if ( !isIgnoreDeathRate )
  {
    if ( substituteBuff )
    {
      substituteData = substituteBuff->fields.substituteData;
      if ( !substituteData )
        goto LABEL_17;
      if ( !substituteData->fields.useSvtResistRate )
      {
        v17 = substituteData->fields.rate * funcVals;
        goto LABEL_9;
      }
    }
    if ( !targetSvtData )
      goto LABEL_17;
    v17 = BattleServantData__getDeathRate(targetSvtData, 0) * funcVals;
  }
  if ( !substituteBuff )
  {
    v19 = 1;
    goto LABEL_12;
  }
  substituteData = substituteBuff->fields.substituteData;
  if ( !substituteData )
    goto LABEL_17;
LABEL_9:
  if ( !substituteData->fields.useBuffResistRate )
  {
    v20 = 0.0;
LABEL_19:
    v20 = v20 + substituteData->fields.resist;
    goto LABEL_20;
  }
  v19 = 0;
LABEL_12:
  v20 = 0.0;
  if ( !isIgnoreResist )
  {
    if ( !targetSvtData )
      goto LABEL_17;
    BuffResistInstantDeath = BattleServantData__getBuffResistInstantDeath(targetSvtData, actionSvtData, 0);
    v20 = (float)(BuffResistInstantDeath
                - BattleServantData__getBuffNonResistInstantDeath(targetSvtData, actionSvtData, 0))
        + 0.0;
  }
  if ( (v19 & 1) == 0 )
  {
    substituteData = substituteBuff->fields.substituteData;
    if ( !substituteData )
LABEL_17:
      sub_1C6BC60(this, targetSvtData);
    goto LABEL_19;
  }
LABEL_20:
  if ( actionSvtData )
    GrantInstantDeathMagnification = BattleServantData__getGrantInstantDeathMagnification(
                                       actionSvtData,
                                       targetSvtData,
                                       isTreasureDevice,
                                       0);
  else
    GrantInstantDeathMagnification = 0.0;
  v23 = BattleUtility__FloorToInt(v20 * 1000.0, 0) + seedRate;
  *isResisted = v23 >= BattleUtility__FloorToInt(v17 + (float)(GrantInstantDeathMagnification * 1000.0), 0) && v23 > 999;
  return BattleUtility__FloorToInt(v17 * (float)((float)(1.0 - v20) + GrantInstantDeathMagnification), 0);
}


System_Int32_array *BattleLogicFunction__GetReplaceIndexArray(
        BattleLogicFunction_o *this,
        System_Int32_array *backStepTargetArray,
        System_Int32_array *replaceTargetArray,
        const MethodInfo *method)
{
  __int64 v6; // x22
  System_Collections_Generic_List_int__o *v7; // x20
  BattleLogicFunction___c_c *v8; // x0
  System_Func_int__bool__o *_9__158_0; // x23
  Il2CppObject *v10; // x24
  struct BattleLogicFunction___c_StaticFields *static_fields; // x0
  int32_t v12; // w2
  const MethodInfo *v13; // x3
  System_Collections_Generic_IEnumerable_TSource__o *v14; // x0
  System_Collections_Generic_IEnumerable_TSource__o *v15; // x0
  __int64 v16; // x1
  int32_t v17; // w2
  const MethodInfo *v18; // x3
  System_Func_int__bool__o *v19; // x23
  System_Collections_Generic_IEnumerable_TSource__o *v20; // x0
  BattleLogicFunction___c_c *v21; // x8
  System_Collections_Generic_IEnumerable_TSource__o *v22; // x21
  System_Func_int__Guid__o *_9__158_2; // x22
  Il2CppObject *v24; // x23
  struct BattleLogicFunction___c_StaticFields *v25; // x0
  int32_t v26; // w2
  const MethodInfo *v27; // x3
  System_Collections_Generic_IEnumerable_TSource__o *v28; // x0
  il2cpp_array_size_t max_length; // x8
  System_Collections_Generic_IEnumerable_TSource__o *v30; // x21
  unsigned __int64 v31; // x22
  struct System_Int32_array *v32; // x8
  _QWORD *v33; // x9
  __int64 v34; // x10
  struct System_Int32_array *items; // x8
  _QWORD *v36; // x9
  __int64 size; // x10

  if ( (byte_4CB9400 & 1) == 0 )
  {
    sub_1C6BA08(&Method_System_Linq_Enumerable_Contains_int___);
    sub_1C6BA08(&Method_System_Linq_Enumerable_First_int___);
    sub_1C6BA08(&Method_System_Linq_Enumerable_OrderBy_int__Guid___);
    sub_1C6BA08(&Method_System_Linq_Enumerable_ToArray_int___);
    sub_1C6BA08(&Method_System_Linq_Enumerable_ToList_int___);
    sub_1C6BA08(&Method_System_Linq_Enumerable_Where_int___);
    sub_1C6BA08(&System_Func_int__Guid__TypeInfo);
    sub_1C6BA08(&System_Func_int__bool__TypeInfo);
    sub_1C6BA08(&Method_System_Collections_Generic_List_int__Add__);
    sub_1C6BA08(&Method_System_Collections_Generic_List_int__RemoveAt__);
    sub_1C6BA08(&Method_System_Collections_Generic_List_int__ToArray__);
    sub_1C6BA08(&Method_System_Collections_Generic_List_int___ctor__);
    sub_1C6BA08(&System_Collections_Generic_List_int__TypeInfo);
    sub_1C6BA08(&Method_BattleLogicFunction___c__GetReplaceIndexArray_b__158_0__);
    sub_1C6BA08(&Method_BattleLogicFunction___c__GetReplaceIndexArray_b__158_2__);
    sub_1C6BA08(&Method_BattleLogicFunction___c__DisplayClass158_0__GetReplaceIndexArray_b__1__);
    sub_1C6BA08(&BattleLogicFunction___c__DisplayClass158_0_TypeInfo);
    sub_1C6BA08(&BattleLogicFunction___c_TypeInfo);
    byte_4CB9400 = 1;
  }
  v6 = sub_1C6BC54(BattleLogicFunction___c__DisplayClass158_0_TypeInfo);
  BattleLogicFunction___c__DisplayClass158_0___ctor((BattleLogicFunction___c__DisplayClass158_0_o *)v6, 0);
  if ( !System_Linq_Enumerable__Contains_int_(
          (System_Collections_Generic_IEnumerable_TSource__o *)replaceTargetArray,
          -1,
          (const MethodInfo_31583F4 *)Method_System_Linq_Enumerable_Contains_int___) )
    return replaceTargetArray;
  v7 = (System_Collections_Generic_List_int__o *)sub_1C6BC54(System_Collections_Generic_List_int__TypeInfo);
  System_Collections_Generic_List_int____ctor(
    v7,
    (const MethodInfo_37E30FC *)Method_System_Collections_Generic_List_int___ctor__);
  v8 = BattleLogicFunction___c_TypeInfo;
  if ( !BattleLogicFunction___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BattleLogicFunction___c_TypeInfo);
    v8 = BattleLogicFunction___c_TypeInfo;
  }
  _9__158_0 = v8->static_fields->__9__158_0;
  if ( !_9__158_0 )
  {
    if ( !v8->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v8);
      v8 = BattleLogicFunction___c_TypeInfo;
    }
    v10 = (Il2CppObject *)v8->static_fields->__9;
    _9__158_0 = (System_Func_int__bool__o *)sub_1C6BC54(System_Func_int__bool__TypeInfo);
    System_Func_int__bool____ctor(_9__158_0, v10, Method_BattleLogicFunction___c__GetReplaceIndexArray_b__158_0__, 0);
    static_fields = BattleLogicFunction___c_TypeInfo->static_fields;
    static_fields->__9__158_0 = _9__158_0;
    sub_1C6B9AC((CGThumbnailListItem_o *)&static_fields->__9__158_0, (int32_t)_9__158_0, v12, v13);
  }
  v14 = System_Linq_Enumerable__Where_int_(
          (System_Collections_Generic_IEnumerable_TSource__o *)replaceTargetArray,
          (System_Func_TSource__bool__o *)_9__158_0,
          (const MethodInfo_3181DBC *)Method_System_Linq_Enumerable_Where_int___);
  v15 = (System_Collections_Generic_IEnumerable_TSource__o *)System_Linq_Enumerable__ToArray_int_(
                                                               v14,
                                                               (const MethodInfo_317B0B0 *)Method_System_Linq_Enumerable_ToArray_int___);
  if ( !v6 )
    goto LABEL_38;
  *(_QWORD *)(v6 + 16) = v15;
  sub_1C6B9AC((CGThumbnailListItem_o *)(v6 + 16), (int32_t)v15, v17, v18);
  v19 = (System_Func_int__bool__o *)sub_1C6BC54(System_Func_int__bool__TypeInfo);
  System_Func_int__bool____ctor(
    v19,
    (Il2CppObject *)v6,
    Method_BattleLogicFunction___c__DisplayClass158_0__GetReplaceIndexArray_b__1__,
    0);
  v20 = System_Linq_Enumerable__Where_int_(
          (System_Collections_Generic_IEnumerable_TSource__o *)backStepTargetArray,
          (System_Func_TSource__bool__o *)v19,
          (const MethodInfo_3181DBC *)Method_System_Linq_Enumerable_Where_int___);
  v21 = BattleLogicFunction___c_TypeInfo;
  v22 = v20;
  if ( !BattleLogicFunction___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BattleLogicFunction___c_TypeInfo);
    v21 = BattleLogicFunction___c_TypeInfo;
  }
  _9__158_2 = v21->static_fields->__9__158_2;
  if ( !_9__158_2 )
  {
    if ( !v21->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v21);
      v21 = BattleLogicFunction___c_TypeInfo;
    }
    v24 = (Il2CppObject *)v21->static_fields->__9;
    _9__158_2 = (System_Func_int__Guid__o *)sub_1C6BC54(System_Func_int__Guid__TypeInfo);
    System_Func_int__Guid____ctor(_9__158_2, v24, Method_BattleLogicFunction___c__GetReplaceIndexArray_b__158_2__, 0);
    v25 = BattleLogicFunction___c_TypeInfo->static_fields;
    v25->__9__158_2 = _9__158_2;
    sub_1C6B9AC((CGThumbnailListItem_o *)&v25->__9__158_2, (int32_t)_9__158_2, v26, v27);
  }
  v28 = (System_Collections_Generic_IEnumerable_TSource__o *)System_Linq_Enumerable__OrderBy_int__Guid_(
                                                               v22,
                                                               (System_Func_TSource__TKey__o *)_9__158_2,
                                                               (const MethodInfo_316A97C *)Method_System_Linq_Enumerable_OrderBy_int__Guid___);
  v15 = (System_Collections_Generic_IEnumerable_TSource__o *)System_Linq_Enumerable__ToList_int_(
                                                               v28,
                                                               (const MethodInfo_317FC78 *)Method_System_Linq_Enumerable_ToList_int___);
  if ( !replaceTargetArray )
    goto LABEL_38;
  max_length = replaceTargetArray->max_length;
  if ( (int)max_length >= 1 )
  {
    v30 = v15;
    v31 = 0;
    do
    {
      if ( v31 >= (unsigned int)max_length )
        sub_1C6BC68(v15);
      v16 = (unsigned int)replaceTargetArray->m_Items[v31];
      if ( (v16 & 0x80000000) != 0 )
      {
        v15 = (System_Collections_Generic_IEnumerable_TSource__o *)System_Linq_Enumerable__First_int_(
                                                                     v30,
                                                                     (const MethodInfo_31618CC *)Method_System_Linq_Enumerable_First_int___);
        if ( !v7 )
          goto LABEL_38;
        items = v7->fields._items;
        v36 = Method_System_Collections_Generic_List_int__Add__;
        ++v7->fields._version;
        if ( !items )
          goto LABEL_38;
        size = v7->fields._size;
        v16 = (unsigned int)v15;
        if ( (unsigned int)size >= LODWORD(items->max_length) )
        {
          System_Collections_Generic_List_int___AddWithResize(
            v7,
            (int32_t)v15,
            *(const MethodInfo_37E3950 **)(*(_QWORD *)(v36[4] + 192LL) + 112LL));
        }
        else
        {
          v7->fields._size = size + 1;
          items->m_Items[size] = (int)v15;
        }
        if ( !v30 )
          goto LABEL_38;
        System_Collections_Generic_List_int___RemoveAt(
          (System_Collections_Generic_List_int__o *)v30,
          0,
          (const MethodInfo_37E50D0 *)Method_System_Collections_Generic_List_int__RemoveAt__);
      }
      else
      {
        if ( !v7 )
          goto LABEL_38;
        v32 = v7->fields._items;
        v33 = Method_System_Collections_Generic_List_int__Add__;
        ++v7->fields._version;
        if ( !v32 )
          goto LABEL_38;
        v34 = v7->fields._size;
        if ( (unsigned int)v34 >= LODWORD(v32->max_length) )
        {
          System_Collections_Generic_List_int___AddWithResize(
            v7,
            v16,
            *(const MethodInfo_37E3950 **)(*(_QWORD *)(v33[4] + 192LL) + 112LL));
        }
        else
        {
          v7->fields._size = v34 + 1;
          v32->m_Items[v34] = v16;
        }
      }
      LODWORD(max_length) = replaceTargetArray->max_length;
    }
    while ( (__int64)++v31 < (int)max_length );
  }
  if ( !v7 )
LABEL_38:
    sub_1C6BC60(v15, v16);
  return System_Collections_Generic_List_int___ToArray(
           v7,
           (const MethodInfo_37E5408 *)Method_System_Collections_Generic_List_int__ToArray__);
}


BattleActionData_BuffData_o *BattleLogicFunction__GetShowEffectDummyFunctionObject(
        int32_t uniqueId,
        System_Int32_array *effectIds,
        const MethodInfo *method)
{
  __int64 v5; // x21
  __int64 v6; // x0
  __int64 v7; // x1
  int32_t v8; // w2
  const MethodInfo *v9; // x3
  int32_t v10; // w1
  int32_t v11; // w2
  const MethodInfo *v12; // x3

  if ( (byte_4CB93D7 & 1) == 0 )
  {
    sub_1C6BA08(&BattleActionData_BuffData_TypeInfo);
    sub_1C6BA08(&StringLiteral_1/*""*/);
    byte_4CB93D7 = 1;
  }
  v5 = sub_1C6BC54(BattleActionData_BuffData_TypeInfo);
  BattleActionData_BuffData___ctor((BattleActionData_BuffData_o *)v5, 0);
  if ( !v5 )
    sub_1C6BC60(v6, v7);
  *(_DWORD *)(v5 + 44) = uniqueId;
  *(_DWORD *)(v5 + 16) = 0;
  v10 = StringLiteral_1/*""*/;
  *(_QWORD *)(v5 + 56) = StringLiteral_1/*""*/;
  sub_1C6B9AC((CGThumbnailListItem_o *)(v5 + 56), v10, v8, v9);
  *(_QWORD *)(v5 + 64) = 0x100000000LL;
  *(_QWORD *)(v5 + 72) = effectIds;
  sub_1C6B9AC((CGThumbnailListItem_o *)(v5 + 72), (int32_t)effectIds, v11, v12);
  *(_BYTE *)(v5 + 86) = 0;
  *(_DWORD *)(v5 + 32) = 0;
  return (BattleActionData_BuffData_o *)v5;
}


RemovedBuffInfoGroup_o *BattleLogicFunction__GetStealBuffInfoGroup(
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

  if ( (byte_4CB93F0 & 1) == 0 )
  {
    sub_1C6BA08(&System_IDisposable_TypeInfo);
    sub_1C6BA08(&System_Collections_Generic_IEnumerable_BattleLogicFunctionProcess_FunctionTargetCheck__TypeInfo);
    sub_1C6BA08(&System_Collections_Generic_IEnumerator_BattleLogicFunctionProcess_FunctionTargetCheck__TypeInfo);
    sub_1C6BA08(&System_Collections_IEnumerator_TypeInfo);
    sub_1C6BA08(&Method_System_Collections_Generic_List_FuncList_TYPE__Add__);
    sub_1C6BA08(&Method_System_Collections_Generic_List_FuncList_TYPE___ctor__);
    sub_1C6BA08(&System_Collections_Generic_List_FuncList_TYPE__TypeInfo);
    sub_1C6BA08(&RemovedBuffInfoGroup_TypeInfo);
    byte_4CB93F0 = 1;
  }
  subBuffInfo = 0;
  v9 = (System_Collections_Generic_List_T__o *)sub_1C6BC54(System_Collections_Generic_List_FuncList_TYPE__TypeInfo);
  System_Collections_Generic_List_Int32Enum____ctor(
    v9,
    (const MethodInfo_37E5928 *)Method_System_Collections_Generic_List_FuncList_TYPE___ctor__);
  if ( !v9 )
    goto LABEL_56;
  items = v9->fields._items;
  v13 = Method_System_Collections_Generic_List_FuncList_TYPE__Add__;
  ++v9->fields._version;
  if ( !items )
    goto LABEL_56;
  size = v9->fields._size;
  if ( (unsigned int)size >= LODWORD(items->max_length) )
  {
    System_Collections_Generic_List_Int32Enum___AddWithResize(
      v9,
      2,
      *(const MethodInfo_37E617C **)(*(_QWORD *)(v13[4] + 192LL) + 112LL));
  }
  else
  {
    v9->fields._size = size + 1;
    *((_DWORD *)items->m_Items + size) = 2;
  }
  v15 = (RemovedBuffInfoGroup_o *)sub_1C6BC54(RemovedBuffInfoGroup_TypeInfo);
  RemovedBuffInfoGroup___ctor(v15, 0);
  if ( !baseVals )
    goto LABEL_56;
  DependDataValsArray = DataVals__GetDependDataValsArray(
                          baseVals,
                          (System_Collections_Generic_List_FuncList_TYPE__o *)v9,
                          1,
                          0);
  if ( !DependDataValsArray )
    goto LABEL_56;
  v17 = DependDataValsArray[3];
  if ( (int)v17 >= 1 )
  {
    v18 = 0;
    v53 = DependDataValsArray;
    while ( 1 )
    {
      if ( v18 >= (unsigned int)v17 )
        sub_1C6BC68(DependDataValsArray);
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
        v24 = sub_1C41D90(
                DependDataValsArray,
                System_Collections_Generic_IEnumerable_BattleLogicFunctionProcess_FunctionTargetCheck__TypeInfo,
                0);
      }
      v26 = (*(__int64 (__fastcall **)(_QWORD *, _QWORD))v24)(v21, *(_QWORD *)(v24 + 8));
      if ( !v26 )
        sub_1C6BC60(0, v25);
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
          v30 = sub_1C41D90(v26, System_Collections_IEnumerator_TypeInfo, 0);
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
          v34 = sub_1C41D90(
                  v26,
                  System_Collections_Generic_IEnumerator_BattleLogicFunctionProcess_FunctionTargetCheck__TypeInfo,
                  0);
        }
        v35 = (*(__int64 (__fastcall **)(__int64, _QWORD))v34)(v26, *(_QWORD *)(v34 + 8));
        v37 = v35;
        if ( !v35 )
          sub_1C6BC60(0, v36);
        v38 = (*(__int64 (__fastcall **)(__int64, BattleActionData_o *, _QWORD))(*(_QWORD *)v35 + 408LL))(
                v35,
                mainAction,
                *(_QWORD *)(*(_QWORD *)v35 + 416LL));
        if ( (v38 & 1) != 0 )
        {
          if ( !v19 )
            sub_1C6BC60(v38, v39);
          if ( !procArg )
            sub_1C6BC60(v38, v39);
          v40 = *(_DWORD *)(v37 + 32);
          funcEnt = v19->fields.funcEnt;
          funcIndex = v19->fields.funcIndex;
          IsCommandSideEffect = BattleLogicFunction_ProcListInArgs__get_IsCommandSideEffect(procArg, 0);
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
            sub_1C6BC60(v44, v44);
          BattleActionData__addAction(mainAction, v44, 0);
          if ( !v15 )
            sub_1C6BC60(v45, v46);
          RemovedBuffInfoGroup__Register(v15, v40, subBuffInfo, 0);
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
        v50 = sub_1C41D90(v26, System_IDisposable_TypeInfo, 0);
      }
      (*(void (__fastcall **)(__int64, _QWORD))v50)(v26, *(_QWORD *)(v50 + 8));
      DependDataValsArray = v53;
      LODWORD(v17) = *((_DWORD *)v53 + 6);
      v18 = v54 + 1;
      if ( (__int64)(v54 + 1) >= (int)v17 )
        return v15;
    }
LABEL_56:
    sub_1C6BC60(DependDataValsArray, v11);
  }
  return v15;
}


BattleActionData_o *BattleLogicFunction__GetSubstitutePopupActionData(
        BattleLogicFunction_o *this,
        BattleLogicFunctionProcess_FunctionTargetCheck_o *funcTarget,
        BattleActionData_o *mainAction,
        const MethodInfo *method)
{
  BattleActionData_o *v6; // x20
  BattleLogicFunction_o *v7; // x0
  const MethodInfo *v8; // x2
  System_Collections_Generic_Dictionary_object__object__o *CustomActionBuffData; // x0
  __int64 v10; // x1
  Il2CppObject *v11; // x21
  CGThumbnailListItem_o *p_substituteActBuffDict; // x22
  System_Collections_Generic_Dictionary_object__object__o *v13; // x23
  int32_t v14; // w2
  const MethodInfo *v15; // x3

  if ( (byte_4CB93C2 & 1) == 0 )
  {
    sub_1C6BA08(&BattleActionData_TypeInfo);
    sub_1C6BA08(&Method_System_Collections_Generic_Dictionary_BattleBuffData_BuffData__BattleActionData_BuffData___ctor__);
    sub_1C6BA08(&Method_System_Collections_Generic_Dictionary_BattleBuffData_BuffData__BattleActionData_BuffData__set_Item__);
    sub_1C6BA08(&System_Collections_Generic_Dictionary_BattleBuffData_BuffData__BattleActionData_BuffData__TypeInfo);
    byte_4CB93C2 = 1;
  }
  v6 = (BattleActionData_o *)sub_1C6BC54(BattleActionData_TypeInfo);
  BattleActionData___ctor(v6, 0);
  CustomActionBuffData = (System_Collections_Generic_Dictionary_object__object__o *)BattleLogicFunction__MakeCustomActionBuffData(
                                                                                      v7,
                                                                                      funcTarget,
                                                                                      v8);
  if ( !mainAction )
    goto LABEL_10;
  v11 = (Il2CppObject *)CustomActionBuffData;
  CustomActionBuffData = (System_Collections_Generic_Dictionary_object__object__o *)mainAction->fields.substituteActBuffDict;
  if ( !CustomActionBuffData )
  {
    p_substituteActBuffDict = (CGThumbnailListItem_o *)&mainAction->fields.substituteActBuffDict;
    v13 = (System_Collections_Generic_Dictionary_object__object__o *)sub_1C6BC54(System_Collections_Generic_Dictionary_BattleBuffData_BuffData__BattleActionData_BuffData__TypeInfo);
    System_Collections_Generic_Dictionary_object__object____ctor(
      v13,
      (const MethodInfo_34BAF8C *)Method_System_Collections_Generic_Dictionary_BattleBuffData_BuffData__BattleActionData_BuffData___ctor__);
    p_substituteActBuffDict->klass = (CGThumbnailListItem_c *)v13;
    sub_1C6B9AC(p_substituteActBuffDict, (int32_t)v13, v14, v15);
    CustomActionBuffData = (System_Collections_Generic_Dictionary_object__object__o *)p_substituteActBuffDict->klass;
  }
  if ( !funcTarget
    || !CustomActionBuffData
    || (System_Collections_Generic_Dictionary_object__object___set_Item(
          CustomActionBuffData,
          (Il2CppObject *)funcTarget->fields.SubstituteBuff,
          v11,
          (const MethodInfo_34BB928 *)Method_System_Collections_Generic_Dictionary_BattleBuffData_BuffData__BattleActionData_BuffData__set_Item__),
        CustomActionBuffData = (System_Collections_Generic_Dictionary_object__object__o *)BattleLogicFunctionProcess_FunctionTargetCheck__get_ParentActBuffData(
                                                                                            funcTarget,
                                                                                            0),
        !v6) )
  {
LABEL_10:
    sub_1C6BC60(CustomActionBuffData, v10);
  }
  BattleActionData__setBuffData(
    v6,
    (BattleActionData_BuffData_o *)v11,
    0,
    (BattleActionData_BuffData_o *)CustomActionBuffData,
    0);
  return v6;
}


bool BattleLogicFunction__IsAddStateFieldFlag(
        BattleLogicFunction_o *this,
        BattleBuffData_BuffData_o *buffData,
        const MethodInfo *method)
{
  BattleLogicFunction_o *v4; // x20
  UnityEngine_Object_o *logic; // x21

  v4 = this;
  if ( (byte_4CB93B7 & 1) == 0 )
  {
    this = (BattleLogicFunction_o *)sub_1C6BA08(&UnityEngine_Object_TypeInfo);
    byte_4CB93B7 = 1;
  }
  if ( !buffData )
    goto LABEL_11;
  if ( buffData->fields.onfiledUniqueId >= 1 )
  {
    logic = (UnityEngine_Object_o *)v4->fields.logic;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    if ( UnityEngine_Object__op_Inequality(logic, 0, 0) )
    {
      this = (BattleLogicFunction_o *)v4->fields.logic;
      if ( this )
        return BattleLogic__checkInField((BattleLogic_o *)this, buffData->fields.onfiledUniqueId, 0);
LABEL_11:
      sub_1C6BC60(this, buffData);
    }
  }
  return 1;
}


bool BattleLogicFunction__IsAttackSideEffectInvokeFunc(
        BattleLogicFunction_o *this,
        int32_t funcType,
        DataVals_o *baseVal,
        const MethodInfo *method)
{
  if ( funcType != 34 && funcType != 137 && funcType != 122 )
    return FuncList__isDamage(funcType, 0);
  if ( !baseVal )
    sub_1C6BC60(this, funcType);
  return DataVals__IsActAttackFunction(baseVal, 0);
}


bool BattleLogicFunction__IsExistBattleMissionValueInMasterData(FunctionEntity_o *funcEnt, const MethodInfo *method)
{
  struct System_Int32_array *vals; // x8

  if ( !funcEnt || (vals = funcEnt->fields.vals) == 0 )
    sub_1C6BC60(funcEnt, method);
  return vals->max_length != 0 && (vals->max_length & 1) == 0;
}


bool BattleLogicFunction__IsExistBattleValueInMasterData(FunctionEntity_o *funcEnt, const MethodInfo *method)
{
  struct System_Int32_array *vals; // x8

  if ( !funcEnt || (vals = funcEnt->fields.vals) == 0 )
    sub_1C6BC60(funcEnt, method);
  return vals->max_length != 0 && (vals->max_length & 1) == 0;
}


bool BattleLogicFunction__IsIgnoreResistFunc(
        BattleLogicFunction_o *this,
        System_Int32_array *funcIndividuality,
        const MethodInfo *method)
{
  System_Int32_array *IgnoreResistFuncIndividuality; // x20

  if ( (byte_4CB93AE & 1) == 0 )
  {
    sub_1C6BA08(&Individuality_TypeInfo);
    byte_4CB93AE = 1;
  }
  IgnoreResistFuncIndividuality = BattleLogicFunction__get_IgnoreResistFuncIndividuality(
                                    this,
                                    (const MethodInfo *)funcIndividuality);
  if ( !Individuality_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(Individuality_TypeInfo);
  return Individuality__IsPartialMatchArray(IgnoreResistFuncIndividuality, funcIndividuality, 0);
}


// local variable allocation has failed, the output may be wrong!
bool BattleLogicFunction__IsSafeWin(BattleLogicFunction_o *this, int32_t targetId, const MethodInfo *method)
{
  BattleData_o *data; // x0
  BattleServantData_o *ServantData; // x8

  data = this->fields.data;
  if ( !data )
    goto LABEL_8;
  ServantData = BattleData__getServantData(data, targetId, 0);
  if ( !ServantData )
    return (unsigned __int8)ServantData & 1;
  data = this->fields.data;
  if ( !data )
LABEL_8:
    sub_1C6BC60(data, *(_QWORD *)&targetId);
  if ( ServantData->fields.isEnemy )
    LOBYTE(ServantData) = ~BattleData__IsAliveLogic(data, 0, 0);
  else
    LOBYTE(ServantData) = !BattleData__checkBattleContinuationEnemys(data, 0);
  return (unsigned __int8)ServantData & 1;
}


bool BattleLogicFunction__IsSituationForceTurnProgressExecutable(
        BattleLogicFunction_o *this,
        BattleServantData_o *actionServant,
        DataVals_o *dataVals,
        bool *isEnemyTurn,
        const MethodInfo *method)
{
  UnityEngine_Object_o *logic; // x22
  __int64 v10; // x1
  BattleLogic_o *v12; // x0
  const MethodInfo *v13; // x2
  char v14; // w0
  BattleLogicFunction___c__DisplayClass69_0_o v16; // [xsp+8h] [xbp-38h] BYREF

  if ( (byte_4CB93BB & 1) == 0 )
  {
    sub_1C6BA08(&UnityEngine_Object_TypeInfo);
    byte_4CB93BB = 1;
  }
  v16.fields.dataVals = dataVals;
  sub_1C6B9AC((CGThumbnailListItem_o *)&v16, (int32_t)dataVals, (int32_t)dataVals, (const MethodInfo *)isEnemyTurn);
  *isEnemyTurn = 0;
  logic = (UnityEngine_Object_o *)this->fields.logic;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Equality(logic, 0, 0) )
    return 0;
  if ( actionServant )
    LOBYTE(actionServant) = actionServant->fields.isEnemy;
  v12 = this->fields.logic;
  if ( !v12 )
    goto LABEL_17;
  if ( BattleLogic__IsPlayerTurnAfterBuffTurnProgress(v12, 0) )
  {
    v14 = (unsigned __int8)actionServant ^ 1;
    return BattleLogicFunction___IsSituationForceTurnProgressExecutable_g__IsForceTurnProgress_69_0(v14, &v16, v13);
  }
  v12 = this->fields.logic;
  if ( !v12 )
LABEL_17:
    sub_1C6BC60(v12, v10);
  if ( BattleLogic__IsEnemyTurnAfterBuffTurnProgress(v12, 0) )
  {
    v14 = (char)actionServant;
    *isEnemyTurn = 1;
    return BattleLogicFunction___IsSituationForceTurnProgressExecutable_g__IsForceTurnProgress_69_0(v14, &v16, v13);
  }
  return 0;
}


// local variable allocation has failed, the output may be wrong!
bool BattleLogicFunction__IsSvtBuffTurnExtend(
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

  if ( (byte_4CB93BA & 1) == 0 )
  {
    sub_1C6BA08(&Method_DataManager_GetMaster_ConstantStrMaster___);
    sub_1C6BA08(&DataManager_TypeInfo);
    sub_1C6BA08(&StringLiteral_5811/*"EXTEND_TURN_BUFF_TYPE"*/);
    byte_4CB93BA = 1;
  }
  data = this->fields.data;
  if ( !data )
    goto LABEL_27;
  ServantData = BattleData__getServantData(data, targetId, 0);
  if ( !ServantData )
    return (char)ServantData;
  v11 = ServantData;
  data = (BattleData_o *)ServantData->fields.svtdata;
  if ( !data )
    goto LABEL_27;
  if ( !ServantEntity__IsSvtBuffTurnExtend((ServantEntity_o *)data, 0) )
    goto LABEL_25;
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  data = (BattleData_o *)DataManager__GetMaster_object_((const MethodInfo_313B314 *)Method_DataManager_GetMaster_ConstantStrMaster___);
  if ( !buffEnt || !data )
    goto LABEL_27;
  data = (BattleData_o *)ConstantStrMaster__ExistValueArray(
                           (ConstantStrMaster_o *)data,
                           (System_String_o *)StringLiteral_5811/*"EXTEND_TURN_BUFF_TYPE"*/,
                           buffEnt->fields.type,
                           0);
  if ( ((unsigned __int8)data & 1) == 0 )
    goto LABEL_25;
  v12 = this->fields.data;
  if ( !v12 )
LABEL_27:
    sub_1C6BC60(data, *(_QWORD *)&targetId);
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


bool BattleLogicFunction__IsUpdateBuffProgressTurn(
        BattleLogicFunction_o *this,
        int32_t buffType,
        System_String_o *keyName,
        System_Collections_Generic_List_int__o **typeList,
        const MethodInfo *method)
{
  DataManager_o *Instance; // x0
  System_Collections_Generic_List_int__o *v9; // x22
  int32_t v10; // w2
  const MethodInfo *v11; // x3
  System_Collections_Generic_IEnumerable_T__o *v12; // x1
  System_Int32_array *ValueArray; // x0

  if ( (byte_4CB93AC & 1) == 0 )
  {
    sub_1C6BA08(&Method_DataManager_GetMasterData_ConstantStrMaster___);
    sub_1C6BA08(&Method_System_Collections_Generic_List_int__AddRange__);
    sub_1C6BA08(&Method_System_Collections_Generic_List_int__Contains__);
    sub_1C6BA08(&Method_System_Collections_Generic_List_int___ctor__);
    sub_1C6BA08(&System_Collections_Generic_List_int__TypeInfo);
    sub_1C6BA08(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_4CB93AC = 1;
  }
  Instance = (DataManager_o *)*typeList;
  if ( !*typeList )
  {
    v9 = (System_Collections_Generic_List_int__o *)sub_1C6BC54(System_Collections_Generic_List_int__TypeInfo);
    System_Collections_Generic_List_int____ctor(
      v9,
      (const MethodInfo_37E30FC *)Method_System_Collections_Generic_List_int___ctor__);
    *typeList = v9;
    sub_1C6B9AC((CGThumbnailListItem_o *)typeList, (int32_t)v9, v10, v11);
    Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3A4F3B4 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( Instance )
    {
      Instance = (DataManager_o *)DataManager__GetMasterData_object_(
                                    Instance,
                                    (const MethodInfo_313B368 *)Method_DataManager_GetMasterData_ConstantStrMaster___);
      if ( Instance )
      {
        ValueArray = ConstantStrMaster__GetValueArray((ConstantStrMaster_o *)Instance, keyName, 0, 0);
        if ( ValueArray )
        {
          v12 = (System_Collections_Generic_IEnumerable_T__o *)ValueArray;
          Instance = (DataManager_o *)*typeList;
          if ( !*typeList )
            goto LABEL_11;
          System_Collections_Generic_List_int___AddRange(
            (System_Collections_Generic_List_int__o *)Instance,
            v12,
            (const MethodInfo_37E3B5C *)Method_System_Collections_Generic_List_int__AddRange__);
        }
        Instance = (DataManager_o *)*typeList;
        if ( *typeList )
          return System_Collections_Generic_List_int___Contains(
                   (System_Collections_Generic_List_int__o *)Instance,
                   buffType,
                   (const MethodInfo_37E3CC8 *)Method_System_Collections_Generic_List_int__Contains__);
      }
    }
LABEL_11:
    sub_1C6BC60(Instance, v12);
  }
  return System_Collections_Generic_List_int___Contains(
           (System_Collections_Generic_List_int__o *)Instance,
           buffType,
           (const MethodInfo_37E3CC8 *)Method_System_Collections_Generic_List_int__Contains__);
}


void BattleLogicFunction__LossCommandSpell(
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
  const MethodInfo *v11; // x3
  struct BattleSkillInfoData_o *skillInfo; // x1
  int32_t v13; // w2
  const MethodInfo *v14; // x3
  __int64 v15; // x22

  if ( (byte_4CB93F4 & 1) == 0 )
  {
    sub_1C6BA08(&BattleActionData_TypeInfo);
    sub_1C6BA08(&StringLiteral_8333/*"LOSS_COMMAND_SPELL"*/);
    byte_4CB93F4 = 1;
  }
  v6 = sub_1C6BC54(BattleActionData_TypeInfo);
  BattleActionData___ctor((BattleActionData_o *)v6, 0);
  if ( !actionData )
    goto LABEL_8;
  if ( !v6 )
    goto LABEL_8;
  *(_QWORD *)(v6 + 32) = *(_QWORD *)&actionData->fields.actorId;
  BattleActionData__setStateField((BattleActionData_o *)v6, 0);
  v9 = StringLiteral_8333/*"LOSS_COMMAND_SPELL"*/;
  *(_QWORD *)(v6 + 72) = StringLiteral_8333/*"LOSS_COMMAND_SPELL"*/;
  sub_1C6B9AC((CGThumbnailListItem_o *)(v6 + 72), v9, v10, v11);
  skillInfo = actionData->fields.skillInfo;
  *(_QWORD *)(v6 + 152) = skillInfo;
  sub_1C6B9AC((CGThumbnailListItem_o *)(v6 + 152), (int32_t)skillInfo, v13, v14);
  if ( !baseVals || (v15 = *(_QWORD *)(v6 + 152), Value = DataVals__GetValue(baseVals, 0), !v15) )
LABEL_8:
    sub_1C6BC60(Value, v8);
  *(_DWORD *)(v15 + 100) = Value;
  *(_BYTE *)(v6 + 249) = DataVals__isForcedEffectSpeedOne(baseVals, 0);
  BattleActionData__AddAfterActionData(actionData, (BattleActionData_o *)v6, 0, 0);
}


BattleActionData_BuffData_o *BattleLogicFunction__MakeAddActionBuffData(
        BattleLogicFunction_o *this,
        BattleActionData_BuffData_o *actBuffData,
        BattleBuffData_BuffData_o *buffData,
        FunctionEntity_o *funcEnt,
        bool isCommandSideEffect,
        bool isConvertBuffFailed,
        const MethodInfo *method)
{
  bool v9; // w21
  BattleActionData_BuffData_o *result; // x0

  if ( !buffData || !actBuffData )
    sub_1C6BC60(this, actBuffData);
  actBuffData->fields.buffId = buffData->fields.buffId;
  v9 = isCommandSideEffect;
  actBuffData->fields.auraEffectId = buffData->fields.auraEffectId;
  actBuffData->fields.classIconAuraEffectId = buffData->fields.classIconAuraEffectId;
  BattleActionData_BuffData__SetFuncEntityData(actBuffData, funcEnt, 0);
  actBuffData->fields.isCommandAfter = v9;
  result = actBuffData;
  actBuffData->fields.addOrder = buffData->fields.addOrder;
  return result;
}


BattleActionData_BuffData_o *BattleLogicFunction__MakeCustomActionBuffData(
        BattleLogicFunction_o *this,
        BattleLogicFunctionProcess_FunctionTargetCheck_o *funcTarget,
        const MethodInfo *method)
{
  __int64 v4; // x19
  BattleLogicFunctionProcess_FunctionUnitCheck_o *funcUnit_k__BackingField; // x0
  __int64 v6; // x1
  struct System_String_o *invalidText; // x1
  int32_t v8; // w2
  const MethodInfo *v9; // x3
  int32_t v10; // w2
  const MethodInfo *v11; // x3
  long double inited; // q0
  struct System_Int32_array *invalidEffectList; // x1
  _QWORD *v14; // x20
  __int64 v15; // x8
  __int64 v16; // x0
  __int64 v17; // x0

  if ( (byte_4CB93C1 & 1) == 0 )
  {
    sub_1C6BA08(&Method_System_Array_Empty_int___);
    sub_1C6BA08(&BattleActionData_BuffData_TypeInfo);
    byte_4CB93C1 = 1;
  }
  v4 = sub_1C6BC54(BattleActionData_BuffData_TypeInfo);
  BattleActionData_BuffData___ctor((BattleActionData_BuffData_o *)v4, 0);
  if ( !funcTarget
    || !v4
    || (*(_DWORD *)(v4 + 44) = funcTarget->fields._targetId_k__BackingField,
        (funcUnit_k__BackingField = funcTarget->fields._funcUnit_k__BackingField) == 0) )
  {
    sub_1C6BC60(funcUnit_k__BackingField, v6);
  }
  *(_DWORD *)(v4 + 16) = BattleLogicFunctionProcess_FunctionUnitCheck__get_FuncIndex(funcUnit_k__BackingField, 0);
  *(_DWORD *)(v4 + 64) = funcTarget->fields.invalidIconId;
  invalidText = funcTarget->fields.invalidText;
  *(_QWORD *)(v4 + 56) = invalidText;
  sub_1C6B9AC((CGThumbnailListItem_o *)(v4 + 56), (int32_t)invalidText, v8, v9);
  invalidEffectList = funcTarget->fields.invalidEffectList;
  if ( !invalidEffectList )
  {
    v14 = Method_System_Array_Empty_int___;
    v15 = *((_QWORD *)Method_System_Array_Empty_int___ + 7);
    if ( !v15 )
    {
      sub_1C41AF8(Method_System_Array_Empty_int___);
      v15 = v14[7];
    }
    v16 = *(_QWORD *)(v15 + 16);
    if ( (*(_BYTE *)(v16 + 309) & 1) == 0 )
      v16 = sub_1C41A9C(inited);
    if ( !*(_DWORD *)(v16 + 224) )
      inited = j_il2cpp_runtime_class_init_0(v16);
    v17 = *(_QWORD *)(v14[7] + 16LL);
    if ( (*(_BYTE *)(v17 + 309) & 1) == 0 )
      v17 = sub_1C41A9C(inited);
    invalidEffectList = **(struct System_Int32_array ***)(v17 + 184);
  }
  *(_QWORD *)(v4 + 72) = invalidEffectList;
  sub_1C6B9AC((CGThumbnailListItem_o *)(v4 + 72), (int32_t)invalidEffectList, v10, v11);
  return (BattleActionData_BuffData_o *)v4;
}


BattleActionData_BuffData_o *BattleLogicFunction__MakeGrayActionBuffData(
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
  const MethodInfo *v16; // x3
  int32_t v17; // w2
  const MethodInfo *v18; // x3

  if ( (byte_4CB93BF & 1) == 0 )
  {
    sub_1C6BA08(&BattleActionData_BuffData_TypeInfo);
    byte_4CB93BF = 1;
  }
  v12 = sub_1C6BC54(BattleActionData_BuffData_TypeInfo);
  BattleActionData_BuffData___ctor((BattleActionData_BuffData_o *)v12, 0);
  if ( !v12 )
    sub_1C6BC60(v13, v14);
  *(_DWORD *)(v12 + 44) = targetId;
  *(_DWORD *)(v12 + 16) = funcIndex;
  *(_DWORD *)(v12 + 64) = iconId;
  *(_QWORD *)(v12 + 56) = popupText;
  sub_1C6B9AC((CGThumbnailListItem_o *)(v12 + 56), (int32_t)popupText, v15, v16);
  *(_DWORD *)(v12 + 68) = popupTextColor;
  *(_QWORD *)(v12 + 72) = 0;
  sub_1C6B9AC((CGThumbnailListItem_o *)(v12 + 72), 0, v17, v18);
  *(_BYTE *)(v12 + 106) = 1;
  return (BattleActionData_BuffData_o *)v12;
}


void BattleLogicFunction__ResetFamilyLinkageIdToStolenFamilyBuffs(
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
  const MethodInfo *v20; // x3
  System_Int32_array *FamilyLinkageTargetIdArray; // x0
  int32_t v22; // w2
  const MethodInfo *v23; // x3
  __int64 IsNullOrEmpty; // x0
  __int64 v25; // x8
  unsigned __int64 v26; // x26
  System_Collections_ICollection_o *v27; // x22
  __int64 v28; // x1
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

  if ( (byte_4CB93F1 & 1) == 0 )
  {
    sub_1C6BA08(&Method_System_Collections_Generic_Dictionary_int__int__ContainsKey__);
    sub_1C6BA08(&Method_System_Collections_Generic_Dictionary_int__int___ctor__);
    sub_1C6BA08(&Method_System_Collections_Generic_Dictionary_int__int__get_Item__);
    sub_1C6BA08(&Method_System_Collections_Generic_Dictionary_int__RemovedBuffInfo__get_Values__);
    sub_1C6BA08(&Method_System_Collections_Generic_Dictionary_int__int__set_Item__);
    sub_1C6BA08(&System_Collections_Generic_Dictionary_int__int__TypeInfo);
    sub_1C6BA08(&Method_System_Collections_Generic_Dictionary_ValueCollection_Enumerator_int__RemovedBuffInfo__Dispose__);
    sub_1C6BA08(&Method_System_Collections_Generic_List_Enumerator_BattleBuffData_BuffData__Dispose__);
    sub_1C6BA08(&Method_System_Collections_Generic_Dictionary_ValueCollection_Enumerator_int__RemovedBuffInfo__MoveNext__);
    sub_1C6BA08(&Method_System_Collections_Generic_List_Enumerator_BattleBuffData_BuffData__MoveNext__);
    sub_1C6BA08(&Method_System_Collections_Generic_Dictionary_ValueCollection_Enumerator_int__RemovedBuffInfo__get_Current__);
    sub_1C6BA08(&Method_System_Collections_Generic_List_Enumerator_BattleBuffData_BuffData__get_Current__);
    sub_1C6BA08(&int_____TypeInfo);
    sub_1C6BA08(&Method_System_Collections_Generic_List_BattleBuffData_BuffData__GetEnumerator__);
    this = (BattleLogicFunction_o *)sub_1C6BA08(&Method_System_Collections_Generic_Dictionary_ValueCollection_int__RemovedBuffInfo__GetEnumerator__);
    byte_4CB93F1 = 1;
  }
  memset(&v39, 0, sizeof(v39));
  memset(&v38, 0, sizeof(v38));
  if ( targetServant )
  {
    if ( !procArg
      || (this = (BattleLogicFunction_o *)BattleLogicFunction_ProcListInArgs__GetFamilyBuffLinkageIdGenerator(
                                            procArg,
                                            targetServant,
                                            0),
          !stealBuffInfoGroup)
      || (v8 = (FamilyBuffLinkageIdGenerator_o *)this,
          (this = (BattleLogicFunction_o *)stealBuffInfoGroup->fields._servantUniqueIdToRemovedBuffInfoMap_k__BackingField) == 0)
      || (this = (BattleLogicFunction_o *)System_Collections_Generic_Dictionary_int__object___get_Values(
                                            (System_Collections_Generic_Dictionary_int__object__o *)this,
                                            (const MethodInfo_3452300 *)Method_System_Collections_Generic_Dictionary_int__RemovedBuffInfo__get_Values__)) == 0 )
    {
      sub_1C6BC60(this, procArg);
    }
    System_Collections_Generic_Dictionary_ValueCollection_int__object___GetEnumerator(
      (System_Collections_Generic_Dictionary_ValueCollection_Enumerator_TKey__TValue__o *)&v37,
      (System_Collections_Generic_Dictionary_ValueCollection_TKey__TValue__o *)this,
      (const MethodInfo_3B3CC54 *)Method_System_Collections_Generic_Dictionary_ValueCollection_int__RemovedBuffInfo__GetEnumerator__);
    v39 = v37;
    while ( System_Collections_Generic_Dictionary_ValueCollection_Enumerator_int__object___MoveNext(
              (System_Collections_Generic_Dictionary_ValueCollection_Enumerator_TKey__TValue__o *)&v39,
              (const MethodInfo_35AAF84 *)Method_System_Collections_Generic_Dictionary_ValueCollection_Enumerator_int__RemovedBuffInfo__MoveNext__) )
    {
      current = v39.fields._current;
      v10 = (System_Collections_Generic_Dictionary_int__int__o *)sub_1C6BC54(System_Collections_Generic_Dictionary_int__int__TypeInfo);
      System_Collections_Generic_Dictionary_int__int____ctor(
        v10,
        (const MethodInfo_3449074 *)Method_System_Collections_Generic_Dictionary_int__int___ctor__);
      if ( !current )
        sub_1C6BC60(v11, v12);
      klass = (System_Collections_Generic_List_object__o *)current[1].klass;
      if ( !klass )
        sub_1C6BC60(0, v12);
      System_Collections_Generic_List_object___GetEnumerator(
        (System_Collections_Generic_List_Enumerator_T__o *)&v37,
        klass,
        (const MethodInfo_380146C *)Method_System_Collections_Generic_List_BattleBuffData_BuffData__GetEnumerator__);
      v38 = v37;
      while ( 1 )
      {
        v14 = System_Collections_Generic_List_Enumerator_object___MoveNext(
                &v38,
                (const MethodInfo_3586524 *)Method_System_Collections_Generic_List_Enumerator_BattleBuffData_BuffData__MoveNext__);
        if ( !v14 )
          break;
        v16 = v38.fields._current;
        if ( !v38.fields._current )
          sub_1C6BC60(v14, v15);
        if ( BattleBuffData_BuffData__IsFamilyBuff((BattleBuffData_BuffData_o *)v38.fields._current, 0) )
        {
          v17 = sub_1C6BAB0(int_____TypeInfo, 2);
          FamilyLinkageIdArray = BattleBuffData_BuffData__get_FamilyLinkageIdArray((BattleBuffData_BuffData_o *)v16, 0);
          if ( !v17 )
            sub_1C6BC60(FamilyLinkageIdArray, FamilyLinkageIdArray);
          if ( !*(_DWORD *)(v17 + 24) )
            sub_1C6BC68(FamilyLinkageIdArray);
          *(_QWORD *)(v17 + 32) = FamilyLinkageIdArray;
          sub_1C6B9AC((CGThumbnailListItem_o *)(v17 + 32), (int32_t)FamilyLinkageIdArray, v19, v20);
          FamilyLinkageTargetIdArray = BattleBuffData_BuffData__get_FamilyLinkageTargetIdArray(
                                         (BattleBuffData_BuffData_o *)v16,
                                         0);
          if ( *(_DWORD *)(v17 + 24) <= 1u )
            sub_1C6BC68(FamilyLinkageTargetIdArray);
          *(_QWORD *)(v17 + 40) = FamilyLinkageTargetIdArray;
          sub_1C6B9AC((CGThumbnailListItem_o *)(v17 + 40), (int32_t)FamilyLinkageTargetIdArray, v22, v23);
          v25 = *(_QWORD *)(v17 + 24);
          if ( (int)v25 >= 1 )
          {
            v26 = 0;
            do
            {
              if ( v26 >= (unsigned int)v25 )
                sub_1C6BC68(IsNullOrEmpty);
              v27 = *(System_Collections_ICollection_o **)(v17 + 8 * v26 + 32);
              IsNullOrEmpty = BasicHelper__IsNullOrEmpty(v27, 0);
              if ( (IsNullOrEmpty & 1) == 0 )
              {
                if ( !v27 )
                  sub_1C6BC60(IsNullOrEmpty, v28);
                monitor = (unsigned __int64)v27[1].monitor;
                if ( (int)monitor >= 1 )
                {
                  v30 = (unsigned int)v27[1].monitor;
                  v31 = 0;
                  v32 = v27 + 2;
                  do
                  {
                    if ( v31 >= (unsigned int)monitor )
                      sub_1C6BC68(IsNullOrEmpty);
                    if ( !v10 )
                      sub_1C6BC60(IsNullOrEmpty, v28);
                    v33 = System_Collections_Generic_Dictionary_int__int___ContainsKey(
                            v10,
                            *((_DWORD *)&v32->klass + v31),
                            (const MethodInfo_3449C24 *)Method_System_Collections_Generic_Dictionary_int__int__ContainsKey__);
                    if ( !v33 )
                    {
                      if ( v31 >= LODWORD(v27[1].monitor) )
                        sub_1C6BC68(v33);
                      if ( !v8 )
                        sub_1C6BC60(v33, v34);
                      v35 = *((_DWORD *)&v32->klass + v31);
                      v36 = FamilyBuffLinkageIdGenerator__Next(v8, 0);
                      System_Collections_Generic_Dictionary_int__int___set_Item(
                        v10,
                        v35,
                        v36,
                        (const MethodInfo_3449A24 *)Method_System_Collections_Generic_Dictionary_int__int__set_Item__);
                    }
                    if ( v31 >= LODWORD(v27[1].monitor) )
                      sub_1C6BC68(v33);
                    IsNullOrEmpty = System_Collections_Generic_Dictionary_int__int___get_Item(
                                      v10,
                                      *((_DWORD *)&v32->klass + v31),
                                      (const MethodInfo_344999C *)Method_System_Collections_Generic_Dictionary_int__int__get_Item__);
                    monitor = LODWORD(v27[1].monitor);
                    if ( v31 >= monitor )
                      sub_1C6BC68(IsNullOrEmpty);
                    *((_DWORD *)&v32->klass + v31++) = IsNullOrEmpty;
                  }
                  while ( v30 != v31 );
                }
              }
              LODWORD(v25) = *(_DWORD *)(v17 + 24);
              ++v26;
            }
            while ( (__int64)v26 < (int)v25 );
          }
        }
      }
      System_Collections_Generic_List_Enumerator_object___Dispose(
        &v38,
        (const MethodInfo_3586520 *)Method_System_Collections_Generic_List_Enumerator_BattleBuffData_BuffData__Dispose__);
    }
    System_Collections_Generic_Dictionary_ValueCollection_Enumerator_int__object___Dispose(
      (System_Collections_Generic_Dictionary_ValueCollection_Enumerator_TKey__TValue__o *)&v39,
      (const MethodInfo_35AAF80 *)Method_System_Collections_Generic_Dictionary_ValueCollection_Enumerator_int__RemovedBuffInfo__Dispose__);
  }
}


void BattleLogicFunction__SetBattleSkillDropGeneratorBuff(
        BattleLogicFunction_o *this,
        BattleActionData_o *actionData,
        BattleLogicFunction_ProcListInArgs_o *procArg,
        int32_t dropperUniqueId,
        DataVals_o *baseVals,
        const MethodInfo *method)
{
  int32_t funcIndex; // w23
  FunctionEntity_o *funcEnt; // x24
  _BOOL8 IsCommandSideEffect; // x0
  const MethodInfo *v13; // x6
  BattleLogicFunction_o *v14; // x22
  BattleSkillDropInfo_o *v15; // x23
  int32_t v16; // w2
  const MethodInfo *v17; // x3

  if ( (byte_4CB93FE & 1) == 0 )
  {
    this = (BattleLogicFunction_o *)sub_1C6BA08(&BattleSkillDropInfo_TypeInfo);
    byte_4CB93FE = 1;
  }
  if ( !baseVals )
    goto LABEL_8;
  if ( !procArg )
    goto LABEL_8;
  funcIndex = baseVals->fields.funcIndex;
  funcEnt = baseVals->fields.funcEnt;
  IsCommandSideEffect = BattleLogicFunction_ProcListInArgs__get_IsCommandSideEffect(procArg, 0);
  this = (BattleLogicFunction_o *)BattleLogicFunction__getFunctionObject(
                                    (BattleLogicFunction_o *)IsCommandSideEffect,
                                    funcEnt,
                                    dropperUniqueId,
                                    funcIndex,
                                    IsCommandSideEffect,
                                    0,
                                    v13);
  if ( !this
    || (LODWORD(this->fields.logictarget) = 0,
        v14 = this,
        v15 = (BattleSkillDropInfo_o *)sub_1C6BC54(BattleSkillDropInfo_TypeInfo),
        BattleSkillDropInfo___ctor(v15, dropperUniqueId, baseVals, 0),
        v14[2].fields.logic = (struct BattleLogic_o *)v15,
        sub_1C6B9AC((CGThumbnailListItem_o *)&v14[2].fields.logic, (int32_t)v15, v16, v17),
        !actionData) )
  {
LABEL_8:
    sub_1C6BC60(this, actionData);
  }
  BattleActionData__setBuffData(actionData, (BattleActionData_BuffData_o *)v14, baseVals, 0, 0);
}


void BattleLogicFunction__SetDisplayBattleMessage(
        BattleLogicFunction_o *this,
        BattleActionData_o *mainActionData,
        BattleLogicFunctionProcess_FunctionTargetCheck_o *funcTarget,
        const MethodInfo *method)
{
  struct BattleLogicFunctionProcess_FunctionUnitCheck_o *funcUnit_k__BackingField; // x8
  DataVals_o *dataVals_k__BackingField; // x20
  BattleActionData_BuffData_o *v7; // x21

  if ( !funcTarget
    || (funcUnit_k__BackingField = funcTarget->fields._funcUnit_k__BackingField) == 0
    || (dataVals_k__BackingField = funcUnit_k__BackingField->fields._dataVals_k__BackingField,
        (this = (BattleLogicFunction_o *)BattleLogicFunctionProcess_FunctionTargetCheck__GetFunctionDisplayData(
                                           funcTarget,
                                           0)) == 0)
    || (v7 = (BattleActionData_BuffData_o *)this,
        BattleActionData_BuffData__SetMultiMessage((BattleActionData_BuffData_o *)this, dataVals_k__BackingField, 0),
        !mainActionData) )
  {
    sub_1C6BC60(this, mainActionData);
  }
  BattleActionData__setBuffData(mainActionData, v7, dataVals_k__BackingField, 0, 0);
}


void BattleLogicFunction__SetEnemyCountChangeActionData(
        BattleLogicFunction_o *this,
        DataVals_o *baseVals,
        BattleActionData_o *mainActionData,
        const MethodInfo *method)
{
  __int64 v6; // x21
  __int64 Value; // x0
  __int64 v8; // x1
  int32_t v9; // w2
  const MethodInfo *v10; // x3
  int32_t v11; // w1
  __int64 v12; // x22
  int32_t v13; // w2
  const MethodInfo *v14; // x3
  BattleSkillInfoData_o *skillInfo; // x0
  System_String_o *v16; // x1
  int32_t v17; // w2
  const MethodInfo *v18; // x3

  if ( (byte_4CB93FD & 1) == 0 )
  {
    sub_1C6BA08(&BattleActionData_TypeInfo);
    sub_1C6BA08(&BattleActionData_EnemyCountChangeData_TypeInfo);
    sub_1C6BA08(&StringLiteral_5456/*"ENEMY_COUNT_CHANGE"*/);
    byte_4CB93FD = 1;
  }
  v6 = sub_1C6BC54(BattleActionData_TypeInfo);
  BattleActionData___ctor((BattleActionData_o *)v6, 0);
  if ( !mainActionData
    || !v6
    || (*(_QWORD *)(v6 + 32) = *(_QWORD *)&mainActionData->fields.actorId,
        v11 = StringLiteral_5456/*"ENEMY_COUNT_CHANGE"*/,
        *(_QWORD *)(v6 + 72) = StringLiteral_5456/*"ENEMY_COUNT_CHANGE"*/,
        sub_1C6B9AC((CGThumbnailListItem_o *)(v6 + 72), v11, v9, v10),
        v12 = sub_1C6BC54(BattleActionData_EnemyCountChangeData_TypeInfo),
        BattleActionData_EnemyCountChangeData___ctor((BattleActionData_EnemyCountChangeData_o *)v12, 0),
        !baseVals)
    || (Value = DataVals__GetValue(baseVals, 0), !v12) )
  {
    sub_1C6BC60(Value, v8);
  }
  *(_DWORD *)(v12 + 16) = Value;
  *(float *)(v12 + 20) = DataVals__GetEnemyCountChangeTime(baseVals, 3000, 0);
  skillInfo = mainActionData->fields.skillInfo;
  if ( skillInfo )
    v16 = BattleSkillInfoData__GetEnemyCountChangeMessage(skillInfo, 0);
  else
    v16 = 0;
  *(_QWORD *)(v12 + 24) = v16;
  sub_1C6B9AC((CGThumbnailListItem_o *)(v12 + 24), (int32_t)v16, v13, v14);
  *(_DWORD *)(v12 + 32) = DataVals__GetEnemyCountChangeEffectId(baseVals, 0);
  *(float *)(v12 + 36) = DataVals__GetEnemyCountWaitTimeAfterMessage(baseVals, 0);
  *(_QWORD *)(v6 + 536) = v12;
  sub_1C6B9AC((CGThumbnailListItem_o *)(v6 + 536), v12, v17, v18);
  BattleActionData__setStateField((BattleActionData_o *)v6, 0);
  BattleActionData__AddAfterActionData(mainActionData, (BattleActionData_o *)v6, 0, 0);
}


void BattleLogicFunction__SetFuncSideEffect(
        BattleLogicFunction_o *this,
        BattleLogicFunction_FuncSideEffectFunctionArgument_o *sideEffectArg,
        BattleActionData_o *actionData,
        BattleServantData_o *actorSvtData,
        System_Int32_array *targetIds,
        const MethodInfo *method)
{
  __int64 naturalAligment; // x10
  Il2CppObject *Master_object; // x22
  void *FuncSideEffectTargetServants; // x0
  __int64 v12; // x1
  __int64 v13; // x8
  unsigned __int64 v14; // x9
  bool v15; // w23
  __int64 v16; // x8
  _QWORD *v17; // x28
  unsigned __int64 v18; // x24
  BattleServantData_o *v19; // x29
  __int64 v20; // x8
  _QWORD *v21; // x23
  unsigned __int64 v22; // x25
  BattleBuffData_BuffData_o *v23; // x26
  BattleActionData_o *SideEffectActionData_45877472; // x0
  const MethodInfo *v25; // x6
  BattleData_o *data; // x8
  int v27; // w8
  _DWORD *v28; // x24
  unsigned int v29; // w28
  char *v30; // x8
  __int64 v31; // x25
  __int64 v32; // x8
  _QWORD *v33; // x26
  unsigned __int64 v34; // x29
  BattleBuffData_BuffData_o *v35; // x27
  const MethodInfo *v36; // x6
  System_Collections_Generic_IEnumerable_T__o *SideEffectList; // x19
  BattleLogicFunction___c_c *v38; // x8
  System_Action_object__o *_9__53_0; // x20
  Il2CppObject *v40; // x21
  struct BattleLogicFunction___c_StaticFields *static_fields; // x0
  int32_t v42; // w2
  const MethodInfo *v43; // x3
  _DWORD *v44; // [xsp+0h] [xbp-90h]
  unsigned __int64 v46; // [xsp+10h] [xbp-80h]
  BattleCommandData_o *command; // [xsp+18h] [xbp-78h]
  System_Int32_array *questIndividualityArray; // [xsp+28h] [xbp-68h]
  System_Int32_array *questIndividualityArraya; // [xsp+28h] [xbp-68h]

  if ( (byte_4CB93B2 & 1) == 0 )
  {
    sub_1C6BA08(&System_Action_BattleActionData__TypeInfo);
    sub_1C6BA08(&Method_BasicHelper_ForEach_BattleActionData___);
    sub_1C6BA08(&BattleTreasureDeviceCommandData_TypeInfo);
    sub_1C6BA08(&bool___TypeInfo);
    sub_1C6BA08(&Method_DataManager_GetMaster_SkillLvMaster___);
    sub_1C6BA08(&DataManager_TypeInfo);
    sub_1C6BA08(&BattleLogicFunction_TreasureDeviceSideEffectFunctionArgument_TypeInfo);
    sub_1C6BA08(&Method_BattleLogicFunction___c__SetFuncSideEffect_b__53_0__);
    sub_1C6BA08(&BattleLogicFunction___c_TypeInfo);
    byte_4CB93B2 = 1;
  }
  if ( actionData && actorSvtData )
  {
    if ( sideEffectArg
      && (naturalAligment = BattleLogicFunction_TreasureDeviceSideEffectFunctionArgument_TypeInfo->_2.naturalAligment,
          sideEffectArg->klass->_2.naturalAligment >= (unsigned int)naturalAligment)
      && (BattleLogicFunction_TreasureDeviceSideEffectFunctionArgument_c *)sideEffectArg->klass->_2.typeHierarchy[naturalAligment - 1] == BattleLogicFunction_TreasureDeviceSideEffectFunctionArgument_TypeInfo )
    {
      command = (BattleCommandData_o *)sub_1C6BC54(BattleTreasureDeviceCommandData_TypeInfo);
      BattleTreasureDeviceCommandData___ctor((BattleTreasureDeviceCommandData_o *)command, actorSvtData, 0);
    }
    else
    {
      command = 0;
    }
    if ( !DataManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
    Master_object = DataManager__GetMaster_object_((const MethodInfo_313B314 *)Method_DataManager_GetMaster_SkillLvMaster___);
    FuncSideEffectTargetServants = (void *)sub_1C6BAB0(bool___TypeInfo, 2);
    if ( !FuncSideEffectTargetServants )
      goto LABEL_54;
    v13 = *((_QWORD *)FuncSideEffectTargetServants + 3);
    if ( !(_DWORD)v13 )
      goto LABEL_53;
    *((_BYTE *)FuncSideEffectTargetServants + 32) = 1;
    if ( (int)v13 >= 1 )
    {
      v14 = 0;
      v44 = FuncSideEffectTargetServants;
      while ( 1 )
      {
        if ( v14 >= (unsigned int)v13 )
          goto LABEL_53;
        if ( !sideEffectArg )
          goto LABEL_54;
        v46 = v14;
        v15 = *((_BYTE *)FuncSideEffectTargetServants + v14 + 32) != 0;
        questIndividualityArray = (System_Int32_array *)((__int64 (__fastcall *)(BattleLogicFunction_FuncSideEffectFunctionArgument_o *, bool, const MethodInfo *))sideEffectArg->klass->vtable._6_GetActArray.methodPtr)(
                                                          sideEffectArg,
                                                          v15,
                                                          sideEffectArg->klass->vtable._6_GetActArray.method);
        FuncSideEffectTargetServants = BattleActionData__GetFuncSideEffectTargetServants(
                                         actionData,
                                         this->fields.data,
                                         v15,
                                         targetIds,
                                         0);
        if ( !FuncSideEffectTargetServants )
          goto LABEL_54;
        v16 = *((_QWORD *)FuncSideEffectTargetServants + 3);
        v17 = FuncSideEffectTargetServants;
        if ( (int)v16 >= 1 )
          break;
LABEL_28:
        FuncSideEffectTargetServants = v44;
        LODWORD(v13) = v44[6];
        v14 = v46 + 1;
        if ( (__int64)(v46 + 1) >= (int)v13 )
          goto LABEL_29;
      }
      v18 = 0;
      while ( 1 )
      {
        if ( v18 >= (unsigned int)v16 )
          goto LABEL_53;
        v19 = (BattleServantData_o *)v17[v18 + 4];
        FuncSideEffectTargetServants = BattleServantData__GetAddSideEffectBuffList(
                                         actorSvtData,
                                         (BuffList_ACTION_array *)questIndividualityArray,
                                         v19,
                                         command,
                                         0,
                                         0);
        if ( !FuncSideEffectTargetServants )
          goto LABEL_54;
        v20 = *((_QWORD *)FuncSideEffectTargetServants + 3);
        v21 = FuncSideEffectTargetServants;
        if ( (int)v20 >= 1 )
          break;
LABEL_27:
        LODWORD(v16) = *((_DWORD *)v17 + 6);
        if ( (__int64)++v18 >= (int)v16 )
          goto LABEL_28;
      }
      v22 = 0;
      while ( v22 < (unsigned int)v20 )
      {
        if ( !v19 )
          goto LABEL_54;
        v23 = (BattleBuffData_BuffData_o *)v21[v22 + 4];
        SideEffectActionData_45877472 = BattleActionData__MakeSideEffectActionData_45877472(
                                          actionData,
                                          4,
                                          v19->fields.uniqueId,
                                          0);
        BattleLogicFunction__SetSideEffectBuff(
          this,
          (SkillLvMaster_o *)Master_object,
          SideEffectActionData_45877472,
          v23,
          (BattleLogicFunction_CommonSideEffectFunctionArgument_o *)sideEffectArg,
          1,
          v25);
        LODWORD(v20) = *((_DWORD *)v21 + 6);
        if ( (__int64)++v22 >= (int)v20 )
          goto LABEL_27;
      }
LABEL_53:
      sub_1C6BC68(FuncSideEffectTargetServants);
    }
LABEL_29:
    FuncSideEffectTargetServants = this->fields.data;
    if ( !FuncSideEffectTargetServants
      || (FuncSideEffectTargetServants = BattleData__getQuestIndividualities(
                                           (BattleData_o *)FuncSideEffectTargetServants,
                                           0),
          data = this->fields.data,
          questIndividualityArraya = (System_Int32_array *)FuncSideEffectTargetServants,
          !data)
      || (FuncSideEffectTargetServants = BattleData__getFieldServantList(data, 0, 0)) == 0 )
    {
LABEL_54:
      sub_1C6BC60(FuncSideEffectTargetServants, v12);
    }
    v27 = *((_DWORD *)FuncSideEffectTargetServants + 6);
    v28 = FuncSideEffectTargetServants;
    if ( v27 >= 1 )
    {
      v29 = 0;
      while ( 1 )
      {
        if ( v29 >= v27 )
          goto LABEL_53;
        v30 = (char *)&v28[2 * v29];
        v31 = *((_QWORD *)v30 + 4);
        if ( !v31 )
          goto LABEL_54;
        FuncSideEffectTargetServants = BattleServantData__GetFieldIndividualityChangedFunctionBuff(
                                         *((BattleServantData_o **)v30 + 4),
                                         questIndividualityArraya,
                                         0);
        if ( !FuncSideEffectTargetServants )
          goto LABEL_54;
        v32 = *((_QWORD *)FuncSideEffectTargetServants + 3);
        v33 = FuncSideEffectTargetServants;
        if ( (int)v32 >= 1 )
          break;
LABEL_42:
        v27 = v28[6];
        if ( (int)++v29 >= v27 )
          goto LABEL_43;
      }
      v34 = 0;
      while ( v34 < (unsigned int)v32 )
      {
        v35 = (BattleBuffData_BuffData_o *)v33[v34 + 4];
        FuncSideEffectTargetServants = BattleActionData__MakeSideEffectActionData_45877472(
                                         actionData,
                                         4,
                                         *(_DWORD *)(v31 + 24),
                                         0);
        if ( !FuncSideEffectTargetServants )
          goto LABEL_54;
        *((_DWORD *)FuncSideEffectTargetServants + 8) = *(_DWORD *)(v31 + 24);
        BattleLogicFunction__SetSideEffectBuff(
          this,
          (SkillLvMaster_o *)Master_object,
          (BattleActionData_o *)FuncSideEffectTargetServants,
          v35,
          (BattleLogicFunction_CommonSideEffectFunctionArgument_o *)sideEffectArg,
          1,
          v36);
        LODWORD(v32) = *((_DWORD *)v33 + 6);
        if ( (__int64)++v34 >= (int)v32 )
          goto LABEL_42;
      }
      goto LABEL_53;
    }
LABEL_43:
    if ( BattleActionData__ExistSideEffect(actionData, 4, 0) )
    {
      BattleActionData__SetFuncSideEffectTrigger(actionData, 0);
      SideEffectList = (System_Collections_Generic_IEnumerable_T__o *)BattleActionData__getSideEffectList(
                                                                        actionData,
                                                                        4,
                                                                        0);
      v38 = BattleLogicFunction___c_TypeInfo;
      if ( !BattleLogicFunction___c_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(BattleLogicFunction___c_TypeInfo);
        v38 = BattleLogicFunction___c_TypeInfo;
      }
      _9__53_0 = (System_Action_object__o *)v38->static_fields->__9__53_0;
      if ( !_9__53_0 )
      {
        if ( !v38->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(v38);
          v38 = BattleLogicFunction___c_TypeInfo;
        }
        v40 = (Il2CppObject *)v38->static_fields->__9;
        _9__53_0 = (System_Action_object__o *)sub_1C6BC54(System_Action_BattleActionData__TypeInfo);
        System_Action_object____ctor(_9__53_0, v40, Method_BattleLogicFunction___c__SetFuncSideEffect_b__53_0__, 0);
        static_fields = BattleLogicFunction___c_TypeInfo->static_fields;
        static_fields->__9__53_0 = (struct System_Action_BattleActionData__o *)_9__53_0;
        sub_1C6B9AC((CGThumbnailListItem_o *)&static_fields->__9__53_0, (int32_t)_9__53_0, v42, v43);
      }
      BasicHelper__ForEach_object_(
        SideEffectList,
        (System_Action_T__o *)_9__53_0,
        (const MethodInfo_3127050 *)Method_BasicHelper_ForEach_BattleActionData___);
    }
  }
}


void BattleLogicFunction__SetGainHpBuff(
        BattleLogicFunction_o *this,
        BattleActionData_o *actiondata,
        int32_t healPoint,
        int32_t funcIndex,
        BattleServantData_o *targetSvtData,
        FunctionEntity_o *funcEnt,
        DataVals_o *baseVals,
        bool isCommandSideEffect,
        bool isHideEffect,
        BattleLogicFunction_HealFuncApplyArgs_o *healFuncApplyArgs,
        const MethodInfo *method)
{
  BattleLogicFunction_o *v18; // x27
  BattleLogicFunction_o *v19; // x26
  _BOOL8 v20; // x0
  const MethodInfo *v21; // x6
  int32_t v22; // w2
  const MethodInfo *v23; // x3
  BattleLogicFunction_o *v24; // x22
  int32_t v25; // w2
  const MethodInfo *v26; // x3
  BattleLogicFunction_o *v27; // x21
  int logic; // w8
  __int64 v29; // x23
  BattleActionData_BuffData_o *v30; // x22
  BattleActionData_o *NoEffectObject; // x23
  __int64 v32; // x0
  MethodInfo *methoda; // [xsp+0h] [xbp-70h]

  v18 = this;
  if ( (byte_4CB93CB & 1) == 0 )
  {
    this = (BattleLogicFunction_o *)sub_1C6BA08(&BattleActionData_BuffData___TypeInfo);
    byte_4CB93CB = 1;
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
                                    healFuncApplyArgs,
                                    0);
  v19 = this;
  if ( healPoint <= 0 )
  {
    if ( !baseVals )
      goto LABEL_26;
    if ( !baseVals->fields.isShowForcedEffect )
    {
      NoEffectObject = BattleLogicFunction__getNoEffectObject(
                         v18,
                         targetSvtData->fields.uniqueId,
                         funcIndex,
                         baseVals,
                         isCommandSideEffect,
                         0,
                         0,
                         0,
                         methoda);
      BattleActionData__addAction(actiondata, NoEffectObject, 0);
      if ( NoEffectObject )
      {
        this = (BattleLogicFunction_o *)BattleActionData__getBuffList(NoEffectObject, funcIndex, 0);
        v27 = this;
        if ( !this )
          return;
        goto LABEL_15;
      }
LABEL_26:
      sub_1C6BC60(this, actiondata);
    }
  }
  v20 = BattleServantData__resultHeal(targetSvtData, healPoint, 0);
  this = (BattleLogicFunction_o *)BattleLogicFunction__getFunctionObject(
                                    (BattleLogicFunction_o *)v20,
                                    funcEnt,
                                    targetSvtData->fields.uniqueId,
                                    funcIndex,
                                    isCommandSideEffect,
                                    0,
                                    v21);
  if ( !v19 )
    goto LABEL_26;
  v24 = this;
  v19->fields.tamamocatTreasureDeviceIds = (struct System_Int32_array *)this;
  sub_1C6B9AC((CGThumbnailListItem_o *)&v19->fields.tamamocatTreasureDeviceIds, (int32_t)this, v22, v23);
  if ( !baseVals )
    goto LABEL_26;
  LODWORD(v19->fields.buffProgressTurnSelfList) = DataVals__GetParam(baseVals, 65, 0, 0);
  this = (BattleLogicFunction_o *)sub_1C6BAB0(BattleActionData_BuffData___TypeInfo, 1);
  if ( !this )
    goto LABEL_26;
  v27 = this;
  if ( v24 )
  {
    this = (BattleLogicFunction_o *)sub_1C6BB44(v24, this->klass->_1.element_class);
    if ( !this )
    {
      v32 = sub_1C6BC84(0);
      sub_1C6BB30(v32, 0);
    }
  }
  if ( !LODWORD(v27->fields.logic) )
    goto LABEL_27;
  v27->fields.logictarget = (struct BattleLogicTarget_o *)v24;
  sub_1C6B9AC((CGThumbnailListItem_o *)&v27->fields.logictarget, (int32_t)v24, v25, v26);
LABEL_15:
  logic = (int)v27->fields.logic;
  if ( logic >= 1 )
  {
    v29 = 0;
    while ( (unsigned int)v29 < logic )
    {
      v30 = (BattleActionData_BuffData_o *)*((_QWORD *)&v27->fields.logictarget + v29);
      if ( !v30 )
        goto LABEL_26;
      v30->fields.isHideEffect = isHideEffect;
      this = (BattleLogicFunction_o *)BattleServantData__isLogicResultAlive(targetSvtData, 0);
      if ( ((unsigned __int8)this & 1) != 0 )
        BattleActionData_BuffData__SetCheckHideWhenDeadInfo(v30, baseVals, 0);
      logic = (int)v27->fields.logic;
      if ( (int)++v29 >= logic )
        return;
    }
LABEL_27:
    sub_1C6BC68(this);
  }
}


void BattleLogicFunction__SetRateForceFailure(
        BattleLogicFunction_o *this,
        int32_t *seedRate,
        int32_t *baseRate,
        const MethodInfo *method)
{
  *seedRate = 1000;
  *baseRate = 0;
}


void BattleLogicFunction__SetRateForceSuccess(
        BattleLogicFunction_o *this,
        int32_t *seedRate,
        int32_t *baseRate,
        const MethodInfo *method)
{
  *seedRate = 0;
  *baseRate = 1000;
}


// local variable allocation has failed, the output may be wrong!
void BattleLogicFunction__SetReceiveFunctionId(
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
    data = (BattleData_o *)BattleData__getServantData(data, funcTargetId, 0);
    if ( data )
    {
      if ( funcEntity )
      {
        BattleServantData__SetReceiveFunctionId((BattleServantData_o *)data, funcEntity->fields.id, 0);
        return;
      }
LABEL_7:
      sub_1C6BC60(data, funcResult);
    }
  }
}


void BattleLogicFunction__SetSideEffectBuff(
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

  SkillFromBuff = BattleServantData__getSkillFromBuff(skillLvMst, buff, 0);
  if ( SkillFromBuff )
  {
    if ( !buff || !arg )
      sub_1C6BC60(SkillFromBuff, v13);
    addOrder = buff->fields.addOrder;
    arg->fields.isShowBattlePointEffect = 1;
    arg->fields.buffUniqueId = addOrder;
    funcId = SkillFromBuff->fields.funcId;
    DataValsList = SkillLvEntity__getDataValsList(SkillFromBuff, 0);
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


void BattleLogicFunction__SetSubstituteAction(
        BattleLogicFunction_o *this,
        BattleActionData_o *mainAction,
        bool isTreasureDvc,
        const MethodInfo *method)
{
  BattleData_o *data; // x0
  int m_CancellationTokenSource; // w8
  BattleData_o *v8; // x26
  Il2CppObject *Master_object; // x0
  BattleLogicFunction___c_c *v10; // x8
  SkillLvMaster_o *v11; // x24
  System_Func_object__bool__o *_9__162_1; // x19
  Il2CppObject *v13; // x20
  struct BattleLogicFunction___c_StaticFields *static_fields; // x0
  int32_t v15; // w2
  const MethodInfo *v16; // x3
  BattleData_c *klass; // x8
  BattleData_o *v18; // x20
  __int64 v19; // x9
  int *p_offset; // x10
  __int64 v21; // x0
  __int64 v22; // x1
  __int64 v23; // x8
  __int64 v24; // x9
  int *v25; // x10
  __int64 v26; // x0
  __int64 v27; // x8
  __int64 v28; // x9
  int *v29; // x10
  __int64 v30; // x0
  BattleBuffData_BuffData_array *BuffList; // x0
  __int64 v32; // x1
  struct System_Threading_CancellationTokenSource_o *v33; // x8
  BattleServantData_o *v34; // x25
  unsigned __int64 v35; // x23
  int32_t v36; // w26
  BattleLogicFunction___c_c *v37; // x8
  System_Func_object__bool__o *_9__162_2; // x19
  Il2CppObject *v39; // x20
  struct BattleLogicFunction___c_StaticFields *v40; // x0
  int32_t v41; // w2
  const MethodInfo *v42; // x3
  BattleBuffData_BuffData_array *v43; // x26
  int max_length; // w8
  int i; // w22
  Il2CppClass **v46; // x8
  Il2CppClass *v47; // x27
  SkillLvEntity_o *SkillEntityFromSubstituteBuff; // x0
  __int64 v49; // x1
  SkillLvEntity_o *v50; // x29
  struct System_Collections_Generic_Dictionary_BattleBuffData_BuffData__BattleActionData_BuffData__o *substituteActBuffDict; // x0
  __int64 v52; // x28
  __int64 v53; // x0
  __int64 v54; // x1
  int32_t v55; // w2
  const MethodInfo *v56; // x3
  struct System_Int32_array *pttargetIds; // x1
  int32_t v58; // w1
  int32_t v59; // w2
  const MethodInfo *v60; // x3
  __int64 argument; // x19
  __int64 v62; // x0
  __int64 v63; // x1
  int32_t v64; // w2
  const MethodInfo *v65; // x3
  int32_t v66; // w1
  System_Int32_array *funcId; // x20
  DataVals_array *DataValsList; // x3
  __int64 v69; // x8
  __int64 v70; // x9
  int *v71; // x10
  __int64 v72; // x21
  __int64 v73; // x0
  BattleLogicFunction___c_c *v74; // x8
  System_Action_object__o *_9__162_0; // x19
  Il2CppObject *v76; // x20
  struct BattleLogicFunction___c_StaticFields *v77; // x0
  int32_t v78; // w2
  const MethodInfo *v79; // x3
  const MethodInfo *v80; // [xsp+28h] [xbp-98h]
  System_Collections_Generic_IEnumerable_TSource__o *source; // [xsp+30h] [xbp-90h]
  __int64 v82; // [xsp+38h] [xbp-88h]
  BattleData_o *v83; // [xsp+40h] [xbp-80h]
  bool v84; // [xsp+4Ch] [xbp-74h]
  Il2CppObject *value; // [xsp+58h] [xbp-68h] BYREF

  if ( (byte_4CB9402 & 1) == 0 )
  {
    sub_1C6BA08(&BuffList_ACTION___TypeInfo);
    sub_1C6BA08(&System_Action_BattleServantData__TypeInfo);
    sub_1C6BA08(&Method_BasicHelper_ForEach_BattleServantData___);
    sub_1C6BA08(&BattleActionData_TypeInfo);
    sub_1C6BA08(&Method_DataManager_GetMaster_SkillLvMaster___);
    sub_1C6BA08(&DataManager_TypeInfo);
    sub_1C6BA08(&Method_System_Collections_Generic_Dictionary_BattleBuffData_BuffData__BattleActionData_BuffData__TryGetValue__);
    sub_1C6BA08(&Method_System_Linq_Enumerable_Where_BattleServantData___);
    sub_1C6BA08(&System_Func_BattleBuffData_BuffData__bool__TypeInfo);
    sub_1C6BA08(&System_Func_BattleServantData__bool__TypeInfo);
    sub_1C6BA08(&BattleLogicFunction_FunctionArgument_TypeInfo);
    sub_1C6BA08(&System_IDisposable_TypeInfo);
    sub_1C6BA08(&System_Collections_Generic_IEnumerable_BattleServantData__TypeInfo);
    sub_1C6BA08(&System_Collections_Generic_IEnumerator_BattleServantData__TypeInfo);
    sub_1C6BA08(&System_Collections_IEnumerator_TypeInfo);
    sub_1C6BA08(&Method_BattleLogicFunction___c__SetSubstituteAction_b__162_0__);
    sub_1C6BA08(&Method_BattleLogicFunction___c__SetSubstituteAction_b__162_1__);
    sub_1C6BA08(&Method_BattleLogicFunction___c__SetSubstituteAction_b__162_2__);
    sub_1C6BA08(&BattleLogicFunction___c_TypeInfo);
    byte_4CB9402 = 1;
  }
  value = 0;
  data = this->fields.data;
  if ( !data )
    goto LABEL_83;
  source = (System_Collections_Generic_IEnumerable_TSource__o *)BattleData__getFieldServantList(data, 0, 0);
  data = (BattleData_o *)sub_1C6BAB0(BuffList_ACTION___TypeInfo, 2);
  if ( !data )
    goto LABEL_83;
  m_CancellationTokenSource = (int)data->fields.m_CancellationTokenSource;
  v8 = data;
  if ( !m_CancellationTokenSource || (LODWORD(data->fields.rootfsm) = 164, m_CancellationTokenSource == 1) )
    sub_1C6BC68(data);
  HIDWORD(data->fields.rootfsm) = 165;
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_object = DataManager__GetMaster_object_((const MethodInfo_313B314 *)Method_DataManager_GetMaster_SkillLvMaster___);
  v10 = BattleLogicFunction___c_TypeInfo;
  v11 = (SkillLvMaster_o *)Master_object;
  if ( !BattleLogicFunction___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BattleLogicFunction___c_TypeInfo);
    v10 = BattleLogicFunction___c_TypeInfo;
  }
  _9__162_1 = (System_Func_object__bool__o *)v10->static_fields->__9__162_1;
  if ( !_9__162_1 )
  {
    if ( !v10->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v10);
      v10 = BattleLogicFunction___c_TypeInfo;
    }
    v13 = (Il2CppObject *)v10->static_fields->__9;
    _9__162_1 = (System_Func_object__bool__o *)sub_1C6BC54(System_Func_BattleServantData__bool__TypeInfo);
    System_Func_object__bool____ctor(_9__162_1, v13, Method_BattleLogicFunction___c__SetSubstituteAction_b__162_1__, 0);
    static_fields = BattleLogicFunction___c_TypeInfo->static_fields;
    static_fields->__9__162_1 = (struct System_Func_BattleServantData__bool__o *)_9__162_1;
    sub_1C6B9AC((CGThumbnailListItem_o *)&static_fields->__9__162_1, (int32_t)_9__162_1, v15, v16);
  }
  data = (BattleData_o *)System_Linq_Enumerable__Where_object_(
                           source,
                           (System_Func_TSource__bool__o *)_9__162_1,
                           (const MethodInfo_3182364 *)Method_System_Linq_Enumerable_Where_BattleServantData___);
  if ( !data )
LABEL_83:
    sub_1C6BC60(data, mainAction);
  klass = data->klass;
  v18 = data;
  v19 = *(unsigned __int16 *)&data->klass->_2.rank;
  if ( *(_WORD *)&data->klass->_2.rank )
  {
    p_offset = &klass->_1.interfaceOffsets->offset;
    while ( *((System_Collections_Generic_IEnumerable_BattleServantData__c **)p_offset - 1) != System_Collections_Generic_IEnumerable_BattleServantData__TypeInfo )
    {
      --v19;
      p_offset += 4;
      if ( !v19 )
        goto LABEL_20;
    }
    v21 = (__int64)&klass->vtable + 16 * *p_offset;
  }
  else
  {
LABEL_20:
    v21 = sub_1C41D90(data, System_Collections_Generic_IEnumerable_BattleServantData__TypeInfo, 0);
  }
  v82 = (*(__int64 (__fastcall **)(BattleData_o *, _QWORD))v21)(v18, *(_QWORD *)(v21 + 8));
  if ( !v82 )
    sub_1C6BC60(0, v22);
  v84 = isTreasureDvc;
  v83 = v8;
  while ( 1 )
  {
    v23 = *(_QWORD *)v82;
    v24 = *(unsigned __int16 *)(*(_QWORD *)v82 + 302LL);
    if ( *(_WORD *)(*(_QWORD *)v82 + 302LL) )
    {
      v25 = (int *)(*(_QWORD *)(v23 + 176) + 8LL);
      while ( *((System_Collections_IEnumerator_c **)v25 - 1) != System_Collections_IEnumerator_TypeInfo )
      {
        --v24;
        v25 += 4;
        if ( !v24 )
          goto LABEL_28;
      }
      v26 = v23 + 16LL * *v25 + 312;
    }
    else
    {
LABEL_28:
      v26 = sub_1C41D90(v82, System_Collections_IEnumerator_TypeInfo, 0);
    }
    if ( ((*(__int64 (__fastcall **)(__int64, _QWORD))v26)(v82, *(_QWORD *)(v26 + 8)) & 1) == 0 )
      break;
    v27 = *(_QWORD *)v82;
    v28 = *(unsigned __int16 *)(*(_QWORD *)v82 + 302LL);
    if ( *(_WORD *)(*(_QWORD *)v82 + 302LL) )
    {
      v29 = (int *)(*(_QWORD *)(v27 + 176) + 8LL);
      while ( *((System_Collections_Generic_IEnumerator_BattleServantData__c **)v29 - 1) != System_Collections_Generic_IEnumerator_BattleServantData__TypeInfo )
      {
        --v28;
        v29 += 4;
        if ( !v28 )
          goto LABEL_35;
      }
      v30 = v27 + 16LL * *v29 + 312;
    }
    else
    {
LABEL_35:
      v30 = sub_1C41D90(v82, System_Collections_Generic_IEnumerator_BattleServantData__TypeInfo, 0);
    }
    BuffList = (BattleBuffData_BuffData_array *)(*(__int64 (__fastcall **)(__int64, _QWORD))v30)(
                                                  v82,
                                                  *(_QWORD *)(v30 + 8));
    v33 = v8->fields.m_CancellationTokenSource;
    if ( (int)v33 >= 1 )
    {
      v34 = (BattleServantData_o *)BuffList;
      v35 = 0;
      do
      {
        if ( v35 >= (unsigned int)v33 )
          sub_1C6BC68(BuffList);
        v36 = *((_DWORD *)&v8->fields.rootfsm + v35);
        v37 = BattleLogicFunction___c_TypeInfo;
        if ( !BattleLogicFunction___c_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(BattleLogicFunction___c_TypeInfo);
          v37 = BattleLogicFunction___c_TypeInfo;
        }
        _9__162_2 = (System_Func_object__bool__o *)v37->static_fields->__9__162_2;
        if ( !_9__162_2 )
        {
          if ( !v37->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(v37);
            v37 = BattleLogicFunction___c_TypeInfo;
          }
          v39 = (Il2CppObject *)v37->static_fields->__9;
          _9__162_2 = (System_Func_object__bool__o *)sub_1C6BC54(System_Func_BattleBuffData_BuffData__bool__TypeInfo);
          System_Func_object__bool____ctor(
            _9__162_2,
            v39,
            Method_BattleLogicFunction___c__SetSubstituteAction_b__162_2__,
            0);
          v40 = BattleLogicFunction___c_TypeInfo->static_fields;
          v40->__9__162_2 = (struct System_Func_BattleBuffData_BuffData__bool__o *)_9__162_2;
          sub_1C6B9AC((CGThumbnailListItem_o *)&v40->__9__162_2, (int32_t)_9__162_2, v41, v42);
        }
        if ( !v34 )
          sub_1C6BC60(BuffList, v32);
        BuffList = BattleServantData__getBuffList(
                     v34,
                     v36,
                     1,
                     (System_Func_BattleBuffData_BuffData__bool__o *)_9__162_2,
                     0);
        v43 = BuffList;
        if ( !BuffList )
          sub_1C6BC60(0, v32);
        max_length = BuffList->max_length;
        if ( max_length >= 1 )
        {
          for ( i = 0; i < max_length; ++i )
          {
            if ( i >= (unsigned int)max_length )
              sub_1C6BC68(BuffList);
            v46 = &v43->obj.klass + i;
            v47 = v46[4];
            if ( !v47 )
              sub_1C6BC60(BuffList, v32);
            SkillEntityFromSubstituteBuff = BattleBuffData_BuffData__GetSkillEntityFromSubstituteBuff(
                                              (BattleBuffData_BuffData_o *)v46[4],
                                              v11,
                                              0);
            if ( !mainAction )
              sub_1C6BC60(SkillEntityFromSubstituteBuff, v49);
            v50 = SkillEntityFromSubstituteBuff;
            substituteActBuffDict = mainAction->fields.substituteActBuffDict;
            if ( !substituteActBuffDict )
              sub_1C6BC60(0, v49);
            BuffList = (BattleBuffData_BuffData_array *)System_Collections_Generic_Dictionary_object__object___TryGetValue(
                                                          (System_Collections_Generic_Dictionary_object__object__o *)substituteActBuffDict,
                                                          (Il2CppObject *)v47,
                                                          &value,
                                                          (const MethodInfo_34BD148 *)Method_System_Collections_Generic_Dictionary_BattleBuffData_BuffData__BattleActionData_BuffData__TryGetValue__);
            if ( ((v50 != 0) & (unsigned __int8)BuffList) != 0 )
            {
              v52 = sub_1C6BC54(BattleActionData_TypeInfo);
              BattleActionData___ctor((BattleActionData_o *)v52, 0);
              if ( !v52 )
                sub_1C6BC60(v53, v54);
              *(_DWORD *)(v52 + 32) = v34->fields.uniqueId;
              *(_DWORD *)(v52 + 36) = mainAction->fields.actorId;
              pttargetIds = mainAction->fields.pttargetIds;
              *(_QWORD *)(v52 + 40) = pttargetIds;
              sub_1C6B9AC((CGThumbnailListItem_o *)(v52 + 40), (int32_t)pttargetIds, v55, v56);
              v58 = (int)value;
              *(_QWORD *)(v52 + 336) = value;
              sub_1C6B9AC((CGThumbnailListItem_o *)(v52 + 336), v58, v59, v60);
              argument = sub_1C6BC54(BattleLogicFunction_FunctionArgument_TypeInfo);
              BattleLogicFunction_FunctionArgument___ctor((BattleLogicFunction_FunctionArgument_o *)argument, 0);
              if ( !argument )
                sub_1C6BC60(v62, v63);
              v66 = (int)value;
              *(_QWORD *)(argument + 64) = value;
              sub_1C6B9AC((CGThumbnailListItem_o *)(argument + 64), v66, v64, v65);
              funcId = v50->fields.funcId;
              DataValsList = SkillLvEntity__getDataValsList(v50, 0);
              BattleLogicFunction__procList(
                this,
                (BattleActionData_o *)v52,
                funcId,
                DataValsList,
                0,
                0,
                0,
                0,
                v84,
                0,
                1,
                (BattleLogicFunction_FunctionArgument_o *)argument,
                0,
                v80);
              BattleActionData__EnableSubstituteBuffSkillFlag((BattleActionData_o *)v52, 0);
              BattleActionData__OverwirteFuncIndex((BattleActionData_o *)v52, (int32_t)v47->vtable[17].methodPtr, 0);
              BattleActionData__addAction(mainAction, (BattleActionData_o *)v52, 0);
            }
            WORD2(v47->vtable[17].methodPtr) = 0;
            max_length = v43->max_length;
          }
        }
        v8 = v83;
        ++v35;
        LODWORD(v33) = v83->fields.m_CancellationTokenSource;
      }
      while ( (__int64)v35 < (int)v33 );
    }
  }
  v69 = *(_QWORD *)v82;
  v70 = *(unsigned __int16 *)(*(_QWORD *)v82 + 302LL);
  if ( *(_WORD *)(*(_QWORD *)v82 + 302LL) )
  {
    v71 = (int *)(*(_QWORD *)(v69 + 176) + 8LL);
    while ( *((System_IDisposable_c **)v71 - 1) != System_IDisposable_TypeInfo )
    {
      --v70;
      v71 += 4;
      if ( !v70 )
        goto LABEL_65;
    }
    v72 = v82;
    v73 = v69 + 16LL * *v71 + 312;
  }
  else
  {
LABEL_65:
    v72 = v82;
    v73 = sub_1C41D90(v82, System_IDisposable_TypeInfo, 0);
  }
  (*(void (__fastcall **)(__int64, _QWORD))v73)(v72, *(_QWORD *)(v73 + 8));
  v74 = BattleLogicFunction___c_TypeInfo;
  if ( !BattleLogicFunction___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BattleLogicFunction___c_TypeInfo);
    v74 = BattleLogicFunction___c_TypeInfo;
  }
  _9__162_0 = (System_Action_object__o *)v74->static_fields->__9__162_0;
  if ( !_9__162_0 )
  {
    if ( !v74->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v74);
      v74 = BattleLogicFunction___c_TypeInfo;
    }
    v76 = (Il2CppObject *)v74->static_fields->__9;
    _9__162_0 = (System_Action_object__o *)sub_1C6BC54(System_Action_BattleServantData__TypeInfo);
    System_Action_object____ctor(_9__162_0, v76, Method_BattleLogicFunction___c__SetSubstituteAction_b__162_0__, 0);
    v77 = BattleLogicFunction___c_TypeInfo->static_fields;
    v77->__9__162_0 = (struct System_Action_BattleServantData__o *)_9__162_0;
    sub_1C6B9AC((CGThumbnailListItem_o *)&v77->__9__162_0, (int32_t)_9__162_0, v78, v79);
  }
  BasicHelper__ForEach_object_(
    (System_Collections_Generic_IEnumerable_T__o *)source,
    (System_Action_T__o *)_9__162_0,
    (const MethodInfo_3127050 *)Method_BasicHelper_ForEach_BattleServantData___);
}


void BattleLogicFunction__SetTargetAttackSideEffect(
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
  System_Collections_Generic_KeyValuePair_int__int__o p_pairAttackAndTarget; // x0
  System_Collections_Generic_KeyValuePair_int__int__o v20; // x1
  struct System_Threading_CancellationTokenSource_o *m_CancellationTokenSource; // x8
  DataManager_o *v22; // x27
  unsigned __int64 v23; // x23
  BattleBuffData_BuffData_o *v24; // x29
  BattleActionData_o *v25; // x28
  int v26; // w0
  const MethodInfo *v27; // x6
  int32_t v28; // w0
  System_Collections_Generic_KeyValuePair_int__int__o v29; // x1
  struct BattleActionData_SideEffectData_array *v30; // [xsp+8h] [xbp-88h]
  SkillLvMaster_o *v32; // [xsp+18h] [xbp-78h]
  System_Collections_Generic_KeyValuePair_int__int__o pairAttackAndTarget; // [xsp+28h] [xbp-68h] BYREF

  if ( (byte_4CB93B4 & 1) == 0 )
  {
    sub_1C6BA08(&BattleActionData_TypeInfo);
    sub_1C6BA08(&Method_DataManager_GetMasterData_SkillLvMaster___);
    sub_1C6BA08(&Method_System_Collections_Generic_KeyValuePair_int__int___ctor__);
    sub_1C6BA08(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_4CB93B4 = 1;
  }
  pairAttackAndTarget = 0;
  Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3A4F3B4 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance
    || (Instance = (DataManager_o *)DataManager__GetMasterData_object_(
                                      Instance,
                                      (const MethodInfo_313B368 *)Method_DataManager_GetMasterData_SkillLvMaster___),
        v32 = (SkillLvMaster_o *)Instance,
        !attackArg)
    || (SideEffectList_k__BackingField = attackArg->fields._SideEffectList_k__BackingField) == 0 )
  {
LABEL_25:
    sub_1C6BC60(Instance, v12);
  }
  max_length = SideEffectList_k__BackingField->max_length;
  if ( max_length >= 1 )
  {
    v15 = 0;
    v30 = attackArg->fields._SideEffectList_k__BackingField;
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
      Instance = (DataManager_o *)BattleData__getServantData((BattleData_o *)Instance, v16->fields.targetId, 0);
      if ( Instance )
      {
        if ( !actionSvtData )
          goto LABEL_25;
        v17 = (BattleServantData_o *)Instance;
        v18 = BattleLogicFunction_SideEffectMakeArgument__MakeCheckKey(attackArg, actionSvtData->fields.uniqueId, 0);
        p_pairAttackAndTarget = (System_Collections_Generic_KeyValuePair_int__int__o)&pairAttackAndTarget;
        System_Collections_Generic_KeyValuePair_int__int____ctor(
          p_pairAttackAndTarget,
          v18,
          v17->fields.uniqueId,
          (const MethodInfo_3736CEC *)Method_System_Collections_Generic_KeyValuePair_int__int___ctor__);
        if ( !mainAction )
          goto LABEL_25;
        v20 = pairAttackAndTarget;
        Instance = (DataManager_o *)BattleActionData__isReflectedAttackSideEffect(mainAction, v20, 0);
        if ( ((unsigned __int8)Instance & 1) == 0 )
        {
          Instance = (DataManager_o *)BattleServantData__getAttackSideEffectBuffList_46573068(
                                        actionSvtData,
                                        v16->fields.sideEffectActs,
                                        command,
                                        v17,
                                        0);
          if ( !Instance )
            goto LABEL_25;
          m_CancellationTokenSource = Instance->fields.m_CancellationTokenSource;
          v22 = Instance;
          if ( m_CancellationTokenSource )
          {
            if ( (int)m_CancellationTokenSource >= 1 )
            {
              v23 = 0;
              while ( v23 < (unsigned int)m_CancellationTokenSource )
              {
                v24 = (BattleBuffData_BuffData_o *)*((_QWORD *)&v22->fields._DispLog + v23);
                v25 = (BattleActionData_o *)sub_1C6BC54(BattleActionData_TypeInfo);
                BattleActionData___ctor(v25, 0);
                if ( !v25 )
                  goto LABEL_25;
                v25->fields.actorId = actionSvtData->fields.uniqueId;
                v25->fields.targetId = v17->fields.uniqueId;
                v26 = ((__int64 (__fastcall *)(BattleLogicFunction_SideEffectMakeArgument_o *, const MethodInfo *))attackArg->klass->vtable._5_unknown.methodPtr)(
                        attackArg,
                        attackArg->klass->vtable._5_unknown.method);
                BattleLogicFunction__SetSideEffectBuff(
                  this,
                  v32,
                  v25,
                  v24,
                  (BattleLogicFunction_CommonSideEffectFunctionArgument_o *)arg,
                  v26 == 1,
                  v27);
                v28 = ((__int64 (__fastcall *)(BattleLogicFunction_SideEffectMakeArgument_o *, const MethodInfo *))attackArg->klass->vtable._5_unknown.methodPtr)(
                        attackArg,
                        attackArg->klass->vtable._5_unknown.method);
                BattleActionData__addSideEffectActionData(mainAction, v25, v28, 0);
                LODWORD(m_CancellationTokenSource) = v22->fields.m_CancellationTokenSource;
                if ( (__int64)++v23 >= (int)m_CancellationTokenSource )
                  goto LABEL_22;
              }
LABEL_26:
              sub_1C6BC68(Instance);
            }
LABEL_22:
            v29 = pairAttackAndTarget;
            BattleActionData__addReflectAttackSideEffect(mainAction, v29, 0);
            SideEffectList_k__BackingField = v30;
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
void BattleLogicFunction__SetTargetFuncList(
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
  if ( (byte_4CB93B1 & 1) == 0 )
  {
    sub_1C6BA08(&Method_DataManager_GetMasterData_FunctionMaster___);
    sub_1C6BA08(&Method_DataMasterBase_FunctionMaster__FunctionEntity__int__GetEntity__);
    sub_1C6BA08(&int___TypeInfo);
    sub_1C6BA08(&Method_System_Collections_Generic_List_int__AddRange__);
    sub_1C6BA08(&Method_System_Collections_Generic_List_int__Add__);
    this = (BattleLogicFunction_o *)sub_1C6BA08(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_4CB93B1 = 1;
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
      *(const MethodInfo_37E3950 **)(*(_QWORD *)(v10[4] + 192LL) + 112LL));
  }
  else
  {
    LODWORD(this->fields.logic) = logic_low + 1;
    *((_DWORD *)&data->fields.rootfsm + logic_low) = targetId;
  }
  if ( !baseVals )
    goto LABEL_23;
  funcType = baseVals->fields.funcType;
  this = (BattleLogicFunction_o *)sub_1C6BAB0(int___TypeInfo, 1);
  if ( !this )
    goto LABEL_23;
  if ( !LODWORD(this->fields.logic) )
    goto LABEL_24;
  LODWORD(this->fields.logictarget) = targetId;
  BattleActionData__AddHpDecreaseFuncTargets(action, funcType, (System_Int32_array *)this, 0);
  this = (BattleLogicFunction_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3A4F3B4 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !this
    || (MasterData_object = DataManager__GetMasterData_object_(
                              (DataManager_o *)this,
                              (const MethodInfo_313B368 *)Method_DataManager_GetMasterData_FunctionMaster___),
        (this = (BattleLogicFunction_o *)DataVals__GetDependFuncIdArray(baseVals, 0)) == 0) )
  {
LABEL_23:
    sub_1C6BC60(this, *(_QWORD *)&targetId);
  }
  logic = this->fields.logic;
  v15 = this;
  if ( (int)logic >= 1 )
  {
    v16 = 0;
    while ( v16 < (unsigned int)logic )
    {
      if ( !MasterData_object )
        goto LABEL_23;
      this = (BattleLogicFunction_o *)DataMasterBase_object__object__int___GetEntity(
                                        (DataMasterBase_TMaster__TEntity__PKType__o *)MasterData_object,
                                        *((_DWORD *)&v15->fields.logictarget + v16),
                                        (const MethodInfo_33F90DC *)Method_DataMasterBase_FunctionMaster__FunctionEntity__int__GetEntity__);
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
          (const MethodInfo_37E3B5C *)Method_System_Collections_Generic_List_int__AddRange__);
        BattleActionData__AddHpDecreaseFuncTargets(action, (int32_t)v18->fields.logic, (System_Int32_array *)v19, 0);
      }
      LODWORD(logic) = v15->fields.logic;
      if ( (__int64)++v16 >= (int)logic )
        return;
    }
LABEL_24:
    sub_1C6BC68(this);
  }
}


void BattleLogicFunction__UpdateBuffProgressTurn(
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
  if ( (byte_4CB93AB & 1) == 0 )
  {
    sub_1C6BA08(&StringLiteral_15470/*"WAR_BOARD_PROGRESS_OPPONENT_BUFF_TYPES"*/);
    this = (BattleLogicFunction_o *)sub_1C6BA08(&StringLiteral_15471/*"WAR_BOARD_PROGRESS_SELF_BUFF_TYPES"*/);
    byte_4CB93AB = 1;
  }
  IsUpdateBuffProgressTurn = BattleLogicFunction__IsUpdateBuffProgressTurn(
                               this,
                               buffType,
                               (System_String_o *)StringLiteral_15471/*"WAR_BOARD_PROGRESS_SELF_BUFF_TYPES"*/,
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
            (System_String_o *)StringLiteral_15470/*"WAR_BOARD_PROGRESS_OPPONENT_BUFF_TYPES"*/,
            &v7->fields.buffProgressTurnOpponentList,
            v9) )
      return;
    v10 = 0;
  }
  *isSelfTurn = v10;
}


bool BattleLogicFunction__UpdateUserEquipSkillChargeTurn(
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
  const MethodInfo *v13; // x3
  System_Action_object__o *v14; // x0
  System_Action_T__o *v15; // x21
  intptr_t *v16; // x8

  if ( (byte_4CB93E6 & 1) == 0 )
  {
    sub_1C6BA08(&System_Action_BattleSkillInfoData__TypeInfo);
    sub_1C6BA08(&Method_BasicHelper_ForEach_BattleSkillInfoData___);
    sub_1C6BA08(&Method_BattleLogicFunction___c__DisplayClass113_0__UpdateUserEquipSkillChargeTurn_b__0__);
    sub_1C6BA08(&Method_BattleLogicFunction___c__DisplayClass113_0__UpdateUserEquipSkillChargeTurn_b__1__);
    sub_1C6BA08(&BattleLogicFunction___c__DisplayClass113_0_TypeInfo);
    byte_4CB93E6 = 1;
  }
  v7 = sub_1C6BC54(BattleLogicFunction___c__DisplayClass113_0_TypeInfo);
  BattleLogicFunction___c__DisplayClass113_0___ctor((BattleLogicFunction___c__DisplayClass113_0_o *)v7, 0);
  data = this->fields.data;
  if ( !data
    || (data = (BattleData_o *)BattleData__getMasterSkillInfos(data, 0), !dataVals)
    || (v10 = (System_Collections_Generic_IEnumerable_T__o *)data,
        data = (BattleData_o *)DataVals__GetValue(dataVals, 0),
        !v7) )
  {
    sub_1C6BC60(data, v8);
  }
  *(_DWORD *)(v7 + 16) = (_DWORD)data;
  *(_DWORD *)(v7 + 20) = DataVals__GetValue2(dataVals, 0) - 1;
  TargetList = DataVals__GetTargetList(dataVals, 0);
  *(_QWORD *)(v7 + 24) = TargetList;
  sub_1C6B9AC((CGThumbnailListItem_o *)(v7 + 24), (int32_t)TargetList, v12, v13);
  *(_BYTE *)(v7 + 32) = 0;
  v14 = (System_Action_object__o *)sub_1C6BC54(System_Action_BattleSkillInfoData__TypeInfo);
  v15 = (System_Action_T__o *)v14;
  if ( isProgress )
    v16 = &Method_BattleLogicFunction___c__DisplayClass113_0__UpdateUserEquipSkillChargeTurn_b__0__;
  else
    v16 = &Method_BattleLogicFunction___c__DisplayClass113_0__UpdateUserEquipSkillChargeTurn_b__1__;
  System_Action_object____ctor(v14, (Il2CppObject *)v7, *v16, 0);
  BasicHelper__ForEach_object_(v10, v15, (const MethodInfo_3127050 *)Method_BasicHelper_ForEach_BattleSkillInfoData___);
  return *(_BYTE *)(v7 + 32);
}


void BattleLogicFunction___FunctionRevivalInDetail_g__AfterProcessForRevivedServants_120_6(
        BattleLogicFunction_o *this,
        BattleLogicFunction___c__DisplayClass120_0_o *a2,
        const MethodInfo *method)
{
  BattleLogicFunction_o *v4; // x20
  System_Collections_Generic_List_T__o *revivedSvtList; // x21
  BattleLogicFunction___c_c *v6; // x0
  System_Func_object__bool__o *_9__120_7; // x22
  Il2CppObject *v8; // x23
  struct BattleLogicFunction___c_StaticFields *static_fields; // x0
  int32_t v10; // w2
  const MethodInfo *v11; // x3
  struct BattleActionData_o *lastActionData; // x8
  System_Collections_Generic_List_object__o *v13; // x19
  System_Action_object__o *monitor; // x20
  Il2CppObject *klass; // x21
  struct BattleLogicFunction___c_StaticFields *v16; // x0
  int32_t v17; // w2
  const MethodInfo *v18; // x3

  v4 = this;
  if ( (byte_4CB9406 & 1) == 0 )
  {
    sub_1C6BA08(&System_Action_BattleServantData__TypeInfo);
    sub_1C6BA08(&Method_BasicHelper_Any_BattleServantData___);
    sub_1C6BA08(&System_Func_BattleServantData__bool__TypeInfo);
    sub_1C6BA08(&Method_System_Collections_Generic_List_BattleServantData__ForEach__);
    sub_1C6BA08(&Method_System_Collections_Generic_List_BattleServantData__get_Count__);
    sub_1C6BA08(&Method_BattleLogicFunction___c__FunctionRevivalInDetail_b__120_7__);
    sub_1C6BA08(&Method_BattleLogicFunction___c__FunctionRevivalInDetail_b__120_8__);
    this = (BattleLogicFunction_o *)sub_1C6BA08(&BattleLogicFunction___c_TypeInfo);
    byte_4CB9406 = 1;
  }
  revivedSvtList = (System_Collections_Generic_List_T__o *)a2->fields.revivedSvtList;
  if ( !revivedSvtList )
    goto LABEL_25;
  if ( revivedSvtList->fields._size >= 1 )
  {
    v6 = BattleLogicFunction___c_TypeInfo;
    if ( !BattleLogicFunction___c_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(BattleLogicFunction___c_TypeInfo);
      v6 = BattleLogicFunction___c_TypeInfo;
    }
    _9__120_7 = (System_Func_object__bool__o *)v6->static_fields->__9__120_7;
    if ( !_9__120_7 )
    {
      if ( !v6->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(v6);
        v6 = BattleLogicFunction___c_TypeInfo;
      }
      v8 = (Il2CppObject *)v6->static_fields->__9;
      _9__120_7 = (System_Func_object__bool__o *)sub_1C6BC54(System_Func_BattleServantData__bool__TypeInfo);
      System_Func_object__bool____ctor(
        _9__120_7,
        v8,
        Method_BattleLogicFunction___c__FunctionRevivalInDetail_b__120_7__,
        0);
      static_fields = BattleLogicFunction___c_TypeInfo->static_fields;
      static_fields->__9__120_7 = (struct System_Func_BattleServantData__bool__o *)_9__120_7;
      sub_1C6B9AC((CGThumbnailListItem_o *)&static_fields->__9__120_7, (int32_t)_9__120_7, v10, v11);
    }
    this = (BattleLogicFunction_o *)BasicHelper__Any_object_(
                                      revivedSvtList,
                                      (System_Func_T__bool__o *)_9__120_7,
                                      (const MethodInfo_3124430 *)Method_BasicHelper_Any_BattleServantData___);
    if ( ((unsigned __int8)this & 1) != 0 )
    {
      lastActionData = a2->fields.lastActionData;
      if ( !lastActionData )
        goto LABEL_25;
      lastActionData->fields.redrawCommandCard = 1;
      this = (BattleLogicFunction_o *)v4->fields.data;
      if ( !this )
        goto LABEL_25;
      BattleData__createCommandCard((BattleData_o *)this, 0);
      this = (BattleLogicFunction_o *)v4->fields.data;
      if ( !this )
        goto LABEL_25;
      BattleData__shuffleCommand((BattleData_o *)this, 0);
    }
    this = (BattleLogicFunction_o *)BattleLogicFunction___c_TypeInfo;
    v13 = (System_Collections_Generic_List_object__o *)a2->fields.revivedSvtList;
    if ( !BattleLogicFunction___c_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(BattleLogicFunction___c_TypeInfo);
      this = (BattleLogicFunction_o *)BattleLogicFunction___c_TypeInfo;
    }
    monitor = (System_Action_object__o *)this[1].fields.wkStr[5].monitor;
    if ( !monitor )
    {
      if ( !LODWORD(this[2].fields.logictarget) )
      {
        j_il2cpp_runtime_class_init_0(this);
        this = (BattleLogicFunction_o *)BattleLogicFunction___c_TypeInfo;
      }
      klass = (Il2CppObject *)this[1].fields.wkStr->klass;
      monitor = (System_Action_object__o *)sub_1C6BC54(System_Action_BattleServantData__TypeInfo);
      System_Action_object____ctor(
        monitor,
        klass,
        Method_BattleLogicFunction___c__FunctionRevivalInDetail_b__120_8__,
        0);
      v16 = BattleLogicFunction___c_TypeInfo->static_fields;
      v16->__9__120_8 = (struct System_Action_BattleServantData__o *)monitor;
      sub_1C6B9AC((CGThumbnailListItem_o *)&v16->__9__120_8, (int32_t)monitor, v17, v18);
    }
    if ( v13 )
    {
      System_Collections_Generic_List_object___ForEach(
        v13,
        (System_Action_T__o *)monitor,
        (const MethodInfo_38013B4 *)Method_System_Collections_Generic_List_BattleServantData__ForEach__);
      return;
    }
LABEL_25:
    sub_1C6BC60(this, a2);
  }
}


BattleActionData_o *BattleLogicFunction___FunctionRevivalInDetail_g__GenerateRevivalActionData_120_3(
        BattleLogicFunction_o *this,
        BattleServantData_o *target,
        int32_t requiredRevivalTargetId,
        int32_t entryIndex,
        int32_t expelledUniqueId,
        BattleLogicFunction___c__DisplayClass120_0_o *a6,
        const MethodInfo *method)
{
  __int64 v13; // x22
  BattleData_o *data; // x0
  __int64 v15; // x1
  int32_t v16; // w2
  const MethodInfo *v17; // x3
  struct BattleActionData_o *actionData; // x8
  int32_t v19; // w1
  BattleLogicFunction_HealFuncApplyArgs_o *healFuncApplyArgs; // x26
  bool v21; // w0
  const MethodInfo *v23; // [xsp+10h] [xbp-60h]

  if ( (byte_4CB9404 & 1) == 0 )
  {
    sub_1C6BA08(&BattleActionData_TypeInfo);
    sub_1C6BA08(&BattleLogicFunction_HealFuncApplyArgs_TypeInfo);
    sub_1C6BA08(&StringLiteral_8759/*"MOTION_MAKE_REVIVE"*/);
    byte_4CB9404 = 1;
  }
  v13 = sub_1C6BC54(BattleActionData_TypeInfo);
  BattleActionData___ctor((BattleActionData_o *)v13, 0);
  actionData = a6->fields.actionData;
  if ( !a6->fields.actionData )
    goto LABEL_13;
  if ( !v13 )
    goto LABEL_13;
  *(_DWORD *)(v13 + 32) = actionData->fields.actorId;
  if ( !target )
    goto LABEL_13;
  *(_DWORD *)(v13 + 36) = target->fields.uniqueId;
  *(_DWORD *)(v13 + 16) = actionData->fields.state;
  v19 = StringLiteral_8759/*"MOTION_MAKE_REVIVE"*/;
  *(_QWORD *)(v13 + 72) = StringLiteral_8759/*"MOTION_MAKE_REVIVE"*/;
  sub_1C6B9AC((CGThumbnailListItem_o *)(v13 + 72), v19, v16, v17);
  if ( !a6->fields.actionData
    || (*(_BYTE *)(v13 + 249) = a6->fields.actionData->fields.isForcedSpeedOne,
        healFuncApplyArgs = (BattleLogicFunction_HealFuncApplyArgs_o *)sub_1C6BC54(BattleLogicFunction_HealFuncApplyArgs_TypeInfo),
        BattleLogicFunction_HealFuncApplyArgs___ctor(healFuncApplyArgs, 0),
        !healFuncApplyArgs)
    || (healFuncApplyArgs->fields._RevivalTargetId_k__BackingField = requiredRevivalTargetId,
        healFuncApplyArgs->fields._EntryIndex_k__BackingField = entryIndex,
        healFuncApplyArgs->fields._ExpelledUniqueId_k__BackingField = expelledUniqueId,
        (data = this->fields.data) == 0) )
  {
LABEL_13:
    sub_1C6BC60(data, v15);
  }
  v21 = BattleData__GetEntryIndex(data, target, 0) == entryIndex && BattleServantData__IsDeadKeepStanding(target, 0);
  healFuncApplyArgs->fields._DeadKeepStanding_k__BackingField = v21;
  BattleLogicFunction__SetGainHpBuff(
    this,
    (BattleActionData_o *)v13,
    a6->fields.healPoint,
    a6->fields.funcIndex,
    target,
    a6->fields.funcEnt,
    a6->fields.baseVals,
    a6->fields.isCommandSideEffect,
    0,
    healFuncApplyArgs,
    v23);
  return (BattleActionData_o *)v13;
}


void BattleLogicFunction___FunctionRevivalInDetail_g__SetMissIfNoActions_120_4(
        BattleLogicFunction_o *this,
        BattleLogicFunction___c__DisplayClass120_0_o *a2,
        const MethodInfo *method)
{
  struct System_Collections_Generic_List_BattleServantData__o *revivedSvtList; // x8
  const MethodInfo *v5; // [xsp+0h] [xbp-30h]

  if ( (byte_4CB9405 & 1) == 0 )
  {
    this = (BattleLogicFunction_o *)sub_1C6BA08(&Method_System_Collections_Generic_List_BattleServantData__get_Count__);
    byte_4CB9405 = 1;
  }
  revivedSvtList = a2->fields.revivedSvtList;
  if ( !revivedSvtList )
    goto LABEL_8;
  if ( revivedSvtList->fields._size > 0 )
    return;
  if ( !a2->fields.actionData
    || (this = (BattleLogicFunction_o *)BattleLogicFunction__getMissObject(
                                          this,
                                          a2->fields.actionData->fields.actorId,
                                          a2->fields.funcIndex,
                                          a2->fields.baseVals,
                                          a2->fields.isCommandSideEffect,
                                          0,
                                          0,
                                          0,
                                          v5),
        !a2->fields.actionData) )
  {
LABEL_8:
    sub_1C6BC60(this, a2);
  }
  BattleActionData__addAction(a2->fields.actionData, (BattleActionData_o *)this, 0);
}


bool BattleLogicFunction___FunctionRevivalInDetail_g__TryGetEntryIndex_120_5(
        BattleLogicFunction_o *this,
        BattleServantData_o *target,
        int32_t *entryIndex,
        int32_t *expelledUniqueId,
        BattleLogicFunction___c__DisplayClass120_0_o *a5,
        const MethodInfo *method)
{
  BattleData_o *data; // x0
  BattleServantData_o *v10; // x22
  bool result; // w0
  unsigned int DeckIndex; // w0
  unsigned int UniqueIdByEntryIndex; // w0
  BattleServantData_o *ServantData; // x0
  BattleServantData_o *v15; // x20

  data = this->fields.data;
  if ( !data )
    goto LABEL_13;
  v10 = target;
  data = (BattleData_o *)BattleData__GetEntryIndex(data, target, 0);
  *entryIndex = (int)data;
  if ( !v10 )
    goto LABEL_13;
  if ( ((unsigned int)data & 0x80000000) == 0 )
  {
    result = 1;
    *expelledUniqueId = v10->fields.uniqueId;
    return result;
  }
  DeckIndex = BattleServantData__getDeckIndex(v10, 0);
  *entryIndex = DeckIndex;
  target = (BattleServantData_o *)DeckIndex;
  data = this->fields.data;
  if ( !data
    || (UniqueIdByEntryIndex = BattleData__GetUniqueIdByEntryIndex(data, (int32_t)target, v10->fields.isEnemy, 0),
        *expelledUniqueId = UniqueIdByEntryIndex,
        target = (BattleServantData_o *)UniqueIdByEntryIndex,
        (data = this->fields.data) == 0) )
  {
LABEL_13:
    sub_1C6BC60(data, target);
  }
  ServantData = BattleData__getServantData(data, (int32_t)target, 0);
  if ( ServantData )
  {
    v15 = ServantData;
    if ( BattleServantData__isLogicResultAlive(ServantData, 0)
      || !v15->fields.isDeadAnime
      || BattleServantData__IsDeadKeepStanding(v15, 0) )
    {
      *entryIndex = -1;
    }
  }
  return *entryIndex >= 0;
}


BattleBuffData_BuffData_o *BattleLogicFunction___FunctionSubFieldBuff_b__135_0(
        BattleLogicFunction_o *this,
        BattleBuffData_BuffData_o *buff,
        const MethodInfo *method)
{
  struct BattleData_o *data; // x8

  data = this->fields.data;
  if ( !data
    || (this = (BattleLogicFunction_o *)data->fields._FieldEnvData_k__BackingField) == 0
    || (this = (BattleLogicFunction_o *)BattleFieldEnvironmentData__get_BuffData(
                                          (BattleFieldEnvironmentData_o *)this,
                                          0)) == 0 )
  {
    sub_1C6BC60(this, buff);
  }
  return BattleBuffData__CreateDummyBuff((BattleBuffData_o *)this, buff, 0);
}


bool BattleLogicFunction___IsSituationForceTurnProgressExecutable_g__IsForceTurnProgress_69_0(
        bool isPartyTurn,
        BattleLogicFunction___c__DisplayClass69_0_o *a2,
        const MethodInfo *method)
{
  if ( !a2->fields.dataVals )
    sub_1C6BC60(isPartyTurn, a2);
  if ( isPartyTurn )
    return DataVals__IsForceTurnProgressIfTimingIsOverInPartyTurn(a2->fields.dataVals, 0);
  else
    return DataVals__IsForceTurnProgressIfTimingIsOverInOpponentTurn(a2->fields.dataVals, 0);
}


bool BattleLogicFunction___getTargetids_b__60_0(BattleLogicFunction_o *this, int32_t x, const MethodInfo *method)
{
  BattleData_o *data; // x0

  data = this->fields.data;
  if ( !data )
    sub_1C6BC60(0, x);
  return BattleData__getServantData(data, x, 0) != 0;
}


bool BattleLogicFunction__checkFuncAction(
        BattleLogicFunction_o *this,
        BattleLogicFunction_ProcListInArgs_o *args,
        int32_t actorId,
        int32_t targetId,
        BuffEntity_o *buffEnt,
        FunctionEntity_o *funcEnt,
        DataVals_o *baseVals,
        bool isTreasureDevice,
        BattleLogicFunctionProcess_FunctionUnitCheck_o *funcUnit,
        BattleLogicFunction_FuncActionResult_o *result,
        const MethodInfo *method)
{
  BattleData_o *data; // x0
  BattleServantData_o *v19; // x20
  int v20; // w25
  int v21; // w19
  int v22; // w23
  float BuffTOLERANCEMagnification; // s0
  int v24; // w23
  float BuffGRANTSTATEMagnification; // s0
  float v26; // s1
  float v27; // s0
  bool v28; // w0
  float BuffResistDelayNPTurn; // s0
  int32_t Next; // w0
  struct System_Int32_array **p_vals; // x8
  System_Int32_array *v32; // x22
  BattleServantData_o *v33; // x21
  BattleServantData_o *v34; // x20
  float v35; // s0
  float BuffGRANTSUBSTATEMagnification; // s0
  const MethodInfo *v37; // [xsp+8h] [xbp-88h]
  BattleServantData_o *targetSvtData; // [xsp+18h] [xbp-78h]
  int32_t baseRate; // [xsp+28h] [xbp-68h] BYREF
  int32_t seedRate; // [xsp+2Ch] [xbp-64h] BYREF

  data = this->fields.data;
  if ( !data )
    goto LABEL_48;
  data = (BattleData_o *)BattleData__getServantData(data, actorId, 0);
  if ( !this->fields.data )
    goto LABEL_48;
  v19 = (BattleServantData_o *)data;
  data = (BattleData_o *)BattleData__getServantData(this->fields.data, targetId, 0);
  targetSvtData = (BattleServantData_o *)data;
  if ( !funcUnit )
    goto LABEL_48;
  data = (BattleData_o *)BattleLogicFunctionProcess_FunctionUnitCheck__get_IsIgnoreResistFunc(funcUnit, 0);
  baseRate = 1000;
  seedRate = 1000;
  if ( !baseVals )
    goto LABEL_48;
  v20 = (int)data;
  data = (BattleData_o *)DataVals__GetParam(baseVals, 0, 0, 0);
  if ( !args )
    goto LABEL_48;
  v21 = (int)data;
  data = (BattleData_o *)BattleLogicFunction_ProcListInArgs__DidTriggeredFuncHaveSpecifyResults(
                           args,
                           targetId,
                           baseVals,
                           this->fields.data,
                           0);
  if ( ((unsigned __int8)data & 1) == 0 )
    goto LABEL_18;
  data = (BattleData_o *)BattleLogicFunction_ProcListInArgs__DidTriggeredFuncListHaveSpecifyResults(
                           args,
                           targetId,
                           baseVals,
                           this->fields.data,
                           0);
  if ( ((unsigned __int8)data & 1) == 0 )
    goto LABEL_18;
  if ( (v21 & 0x80000000) == 0 )
    goto LABEL_11;
  data = (BattleData_o *)BattleLogicFunction_ProcListInArgs__isPrevFuncSuccess(
                           args,
                           targetId,
                           baseVals->fields.funcIndex,
                           0);
  if ( ((unsigned __int8)data & 1) == 0 )
  {
LABEL_18:
    if ( result )
    {
      v28 = 0;
      result->fields._IsDisplayLastFuncInvalid_k__BackingField = 1;
      return v28;
    }
    goto LABEL_48;
  }
  data = (BattleData_o *)BattleUtility__Abs_46675488(v21, 0);
  v21 = (int)data;
LABEL_11:
  if ( !funcEnt )
    goto LABEL_48;
  if ( !FuncList__Check(1, funcEnt->fields.funcType, 0) )
  {
    if ( FuncList__Check(13, funcEnt->fields.funcType, 0) )
    {
      BattleLogicFunction__CheckFuncInstantDeath(
        this,
        v19,
        targetSvtData,
        baseVals,
        isTreasureDevice,
        v20 & 1,
        &seedRate,
        &baseRate,
        result,
        v37);
      v21 = baseRate;
      v24 = seedRate;
      return v24 < v21;
    }
    if ( !FuncList__Check(2, funcEnt->fields.funcType, 0) )
    {
      if ( !FuncList__Check(20, funcEnt->fields.funcType, 0) )
      {
        if ( !FuncList__Check(46, funcEnt->fields.funcType, 0) )
        {
          Next = BattleRandom__getNext(1000, 0);
          goto LABEL_40;
        }
        v24 = 0;
        seedRate = 0;
        v21 = 1000;
LABEL_41:
        baseRate = v21;
        return v24 < v21;
      }
      v24 = BattleRandom__getNext(1000, 0);
      if ( (v20 & 1) == 0 )
      {
        data = (BattleData_o *)targetSvtData;
        if ( !targetSvtData )
          goto LABEL_48;
        BuffResistDelayNPTurn = BattleServantData__getBuffResistDelayNPTurn(targetSvtData, v19, 0);
        v24 = BattleUtility__FloorToInt((float)(BuffResistDelayNPTurn * 1000.0) + (float)v24, 0);
      }
      seedRate = v24;
      goto LABEL_41;
    }
    if ( DataVals__isParam(baseVals, 90, 0) )
      return 1;
    p_vals = &funcEnt->fields.vals;
    if ( buffEnt )
      p_vals = &buffEnt->fields.vals;
    v32 = *p_vals;
    v33 = v19;
    if ( v19 )
    {
      if ( (v20 & 1) != 0 )
      {
LABEL_36:
        v34 = targetSvtData;
        v35 = (float)BattleRandom__getNext(1000, 0);
        goto LABEL_46;
      }
    }
    else if ( ((v20 | DataVals__isParam(baseVals, 75, 0)) & 1) != 0 )
    {
      goto LABEL_36;
    }
    data = (BattleData_o *)BattleRandom__getNext(1000, 0);
    v34 = targetSvtData;
    if ( targetSvtData )
    {
      v35 = (float)(BattleServantData__getBuffTOLERANCESUBSTATEMagnification(targetSvtData, v32, v33, 0) * 1000.0)
          + (float)(int)data;
LABEL_46:
      v24 = BattleUtility__FloorToInt(v35, 0);
      seedRate = v24;
      if ( v33 )
      {
        BuffGRANTSUBSTATEMagnification = BattleServantData__getBuffGRANTSUBSTATEMagnification(v33, v32, v34, 0);
        v26 = (float)v21;
        v27 = BuffGRANTSUBSTATEMagnification * 1000.0;
        goto LABEL_17;
      }
      goto LABEL_41;
    }
LABEL_48:
    sub_1C6BC60(data, args);
  }
  if ( !buffEnt )
  {
    v21 = 1000;
    v24 = 1000;
    return v24 < v21;
  }
  data = (BattleData_o *)BattleRandom__getNext(1000, 0);
  v22 = (int)data;
  if ( !v19 )
  {
    Next = BattleUtility__FloorToInt((float)(int)data, 0);
LABEL_40:
    v24 = Next;
    seedRate = Next;
    goto LABEL_41;
  }
  if ( !targetSvtData )
    goto LABEL_48;
  BuffTOLERANCEMagnification = BattleServantData__getBuffTOLERANCEMagnification(
                                 targetSvtData,
                                 buffEnt->fields.vals,
                                 v19,
                                 &this->fields.wkStr,
                                 0);
  seedRate = BattleUtility__FloorToInt((float)(BuffTOLERANCEMagnification * 1000.0) + (float)v22, 0);
  v24 = seedRate;
  BuffGRANTSTATEMagnification = BattleServantData__getBuffGRANTSTATEMagnification(
                                  v19,
                                  buffEnt->fields.vals,
                                  targetSvtData,
                                  &this->fields.wkStr,
                                  0,
                                  0);
  v26 = (float)v21;
  v27 = BuffGRANTSTATEMagnification * 1000.0;
LABEL_17:
  v21 = BattleUtility__FloorToInt(v27 + v26, 0);
  baseRate = v21;
  return v24 < v21;
}


// local variable allocation has failed, the output may be wrong!
bool BattleLogicFunction__checkNoActionCondition(
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
  data = (BattleData_o *)BattleData__getServantData(data, targetId, 0);
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
    sub_1C6BC60(data, *(_QWORD *)&targetId);
  return BYTE3(data->fields.doNotSelectCommandSvtIdList) != 0;
}


BattleActionData_o *BattleLogicFunction__createRevivalHealData(
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
  int32_t Value; // w26
  BattleLogicFunction_HealFuncApplyArgs_o *healFuncApplyArgs; // x27
  const MethodInfo *v20; // [xsp+10h] [xbp-70h]

  if ( (byte_4CB93EC & 1) == 0 )
  {
    sub_1C6BA08(&BattleActionData_TypeInfo);
    sub_1C6BA08(&BattleLogicFunction_HealFuncApplyArgs_TypeInfo);
    byte_4CB93EC = 1;
  }
  v13 = (BattleActionData_o *)sub_1C6BC54(BattleActionData_TypeInfo);
  BattleActionData___ctor(v13, 0);
  data = this->fields.data;
  if ( !data
    || (data = (BattleData_o *)BattleData__getServantData(data, targetId, 0), !baseVals)
    || (v16 = (BattleServantData_o *)data,
        baseVals->fields.isShowForcedEffect = 1,
        Value = DataVals__GetValue(baseVals, 0),
        healFuncApplyArgs = (BattleLogicFunction_HealFuncApplyArgs_o *)sub_1C6BC54(BattleLogicFunction_HealFuncApplyArgs_TypeInfo),
        BattleLogicFunction_HealFuncApplyArgs___ctor(healFuncApplyArgs, 0),
        !healFuncApplyArgs) )
  {
    sub_1C6BC60(data, v14);
  }
  healFuncApplyArgs->fields._IsMultiTargetRevival_k__BackingField = 1;
  BattleLogicFunction__SetGainHpBuff(
    this,
    v13,
    Value,
    funcIndex,
    v16,
    funcEnt,
    baseVals,
    isCommandSideEffect,
    0,
    healFuncApplyArgs,
    v20);
  return v13;
}


// local variable allocation has failed, the output may be wrong!
BattleActionData_o *BattleLogicFunction__functionAbsorbNpTurn(
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
  if ( (byte_4CB93E1 & 1) == 0 )
  {
    sub_1C6BA08(&BattleActionData_TypeInfo);
    sub_1C6BA08(&NpGaugeAbsorbResult_TypeInfo);
    this = (BattleLogicFunction_o *)sub_1C6BA08(&NpPointToTurnConvert_TypeInfo);
    byte_4CB93E1 = 1;
  }
  if ( !funcTarget )
    goto LABEL_12;
  funcUnit_k__BackingField = funcTarget->fields._funcUnit_k__BackingField;
  if ( !funcUnit_k__BackingField )
    goto LABEL_12;
  dataVals_k__BackingField = funcUnit_k__BackingField->fields._dataVals_k__BackingField;
  v15 = (BattleActionData_o *)sub_1C6BC54(BattleActionData_TypeInfo);
  BattleActionData___ctor(v15, 0);
  v16 = (NpPointToTurnConvert_o *)sub_1C6BC54(NpPointToTurnConvert_TypeInfo);
  NpPointToTurnConvert___ctor(v16, 0);
  v17 = (NpGaugeAbsorbResult_o *)sub_1C6BC54(NpGaugeAbsorbResult_TypeInfo);
  NpGaugeAbsorbResult___ctor(v17, (BaseNpGaugeConvert_o *)v16, 0);
  this = (BattleLogicFunction_o *)BattleLogicFunction__AbsorbNpTurn(v12, mainAction, funcTarget, v17, v18);
  if ( !v15
    || (BattleActionData__addAction(v15, (BattleActionData_o *)this, 0),
        v20 = BattleLogicFunction__AbsorbNpPoint(v12, mainAction, funcTarget, v17, v19),
        BattleActionData__addAction(v15, v20, 0),
        !dataVals_k__BackingField)
    || !v17 )
  {
LABEL_12:
    sub_1C6BC60(this, *(_QWORD *)&targetId);
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
  BattleActionData__addAction(v15, v24, 0);
  return v15;
}


// local variable allocation has failed, the output may be wrong!
BattleBuffData_BuffData_o *BattleLogicFunction__functionAddState(
        BattleLogicFunction_o *this,
        BattleActionData_o *mainAction,
        BattleLogicFunctionProcess_FunctionTargetCheck_o *funcTarget,
        BattleLogicFunction_ProcListInArgs_o *args,
        bool shortbuff,
        const MethodInfo *method)
{
  BattleActionData_o *v9; // x26
  BattleLogicFunction_o *v10; // x19
  struct BattleLogicFunctionProcess_FunctionUnitCheck_o *funcUnit_k__BackingField; // x22
  DataVals_o *dataVals_k__BackingField; // x23
  int32_t actorId; // w27
  BuffEntity_o *v14; // x28
  int32_t v15; // w0
  BattleActionData_o *v16; // x22
  BattleServantData_o *v17; // x24
  BattleServantData_o *ServantData; // x25
  __int64 v19; // x27
  const MethodInfo *v20; // x3
  char v21; // w22
  int32_t AdjustmentBuffTurn; // w0
  const MethodInfo *v23; // x4
  char v24; // w20
  bool v25; // w26
  int32_t type; // w22
  const MethodInfo *v27; // x3
  bool isEnemy; // w8
  bool *p_isEnemy; // x22
  char v30; // w9
  struct BattleData_o *data; // x8
  int32_t ProgressTurnCond; // w0
  int32_t v33; // w20
  int32_t v34; // w20
  int32_t v35; // w20
  int32_t v36; // w20
  int32_t tdCommandTypeChange; // w8
  char v38; // w26
  __int64 v39; // x0
  int32_t v40; // w2
  const MethodInfo *v41; // x3
  __int64 v42; // x22
  __int64 v43; // x20
  int32_t v44; // w20
  struct BattleData_o *v45; // x8
  struct BattleEntity_o *battle_ent; // x8
  int64_t userId; // x22
  int32_t eventId; // w20
  EventPointBuffMaster_o *v49; // x26
  int32_t EventPointGroupId; // w29
  UserEventPointEntity_o *EntityDefinitely; // x0
  int64_t value; // x20
  int logic; // w8
  int v54; // w10
  __int64 v55; // x9
  __int64 v56; // x11
  int v57; // w29
  BattleData_o *v58; // x20
  BattleBuffData_CheckIndividualitiesData_o *v59; // x22
  BattleBuffData_ParamAdd_o *v60; // x26
  __int64 v61; // x0
  int32_t v62; // w2
  const MethodInfo *v63; // x3
  __int64 v64; // x22
  __int64 v65; // x20
  const MethodInfo *v66; // x3
  int v67; // w20
  int32_t v68; // w22
  __int64 v69; // x20
  bool v70; // w8
  int v71; // w8
  System_Int32_array *TargetIndiv; // x0
  int32_t v73; // w2
  const MethodInfo *v74; // x3
  int32_t v75; // w2
  const MethodInfo *v76; // x3
  int32_t v77; // w20
  BattleBuffData_IntervalData_o *IntervalData; // x0
  int32_t v79; // w2
  const MethodInfo *v80; // x3
  System_Int32_array *ParamArray; // x0
  int32_t v82; // w2
  const MethodInfo *v83; // x3
  int32_t v84; // w20
  int32_t RelationId; // w22
  BattleBuffData_RelationOverwriteData_o *v86; // x20
  int32_t v87; // w2
  const MethodInfo *v88; // x3
  BattleDataDefine_c *v89; // x0
  int32_t v90; // w20
  bool v91; // w0
  float UpDownGiveHeal; // s8
  int32_t v93; // w0
  int v94; // s0
  int32_t v95; // w0
  int v96; // s0
  System_Int32_array *v97; // x0
  int32_t v98; // w2
  const MethodInfo *v99; // x3
  System_Int32_array *v100; // x0
  int32_t v101; // w2
  const MethodInfo *v102; // x3
  System_Int32_array *v103; // x0
  int32_t v104; // w2
  const MethodInfo *v105; // x3
  BattleBuffData_SaveArrayData_array *v106; // x0
  int32_t v107; // w2
  const MethodInfo *v108; // x3
  BattleBuffData_SaveArrayData_array *v109; // x0
  int32_t v110; // w2
  const MethodInfo *v111; // x3
  BattleBuffData_SaveArrayData_array *v112; // x0
  int32_t v113; // w2
  const MethodInfo *v114; // x3
  int32_t v115; // w20
  System_Int32_array *UpBuffRateBuffTypeList; // x0
  int32_t v117; // w2
  const MethodInfo *v118; // x3
  struct BattleLogicFunction_FunctionArgument_o *externalArg; // x8
  struct BattleData_o *v120; // x8
  System_Int32_array *AddIndividualty; // x0
  int32_t v122; // w2
  const MethodInfo *v123; // x3
  System_Int32_array *LinkageTargetIndividualty; // x0
  int32_t v125; // w2
  const MethodInfo *v126; // x3
  const MethodInfo *v127; // x3
  struct BattleData_o *v128; // x8
  System_Int32_array *ValsList; // x0
  int32_t v130; // w2
  const MethodInfo *v131; // x3
  int32_t v132; // w0
  int v133; // w8
  System_String_o *ParamStringFormat; // x0
  int32_t v135; // w2
  const MethodInfo *v136; // x3
  BattleBuffData_SubstituteData_o *v137; // x22
  __int64 v138; // x20
  int32_t v139; // w2
  const MethodInfo *v140; // x3
  __int64 v141; // x22
  __int64 v142; // x22
  __int64 v143; // x22
  __int64 v144; // x22
  __int64 v145; // x22
  __int64 v146; // x22
  __int64 v147; // x22
  int32_t v148; // w2
  const MethodInfo *v149; // x3
  __int64 v150; // x22
  __int64 v151; // x22
  int32_t v152; // w2
  const MethodInfo *v153; // x3
  __int64 v154; // x22
  int32_t v155; // w2
  const MethodInfo *v156; // x3
  __int64 v157; // x22
  __int64 v158; // x20
  int32_t v159; // w2
  const MethodInfo *v160; // x3
  UnityEngine_Object_o *v161; // x20
  bool v162; // w22
  int32_t v163; // w20
  CommandCodeInfo_o *UserCommandCode; // x0
  int32_t v165; // w29
  BattleLogicFunction_o *v166; // x20
  int32_t v167; // w2
  const MethodInfo *v168; // x3
  BattleActionEffect_AddServantBuff_o *v169; // x26
  int32_t MaxHp; // w26
  int32_t v171; // w29
  bool v172; // w0
  __int64 v173; // x4
  char v174; // w20
  int32_t v175; // w22
  bool IsCommandSideEffect; // w0
  int32_t id; // w22
  System_Collections_Generic_List_int__o *v178; // x0
  System_String_o *i; // x0
  System_String_o *v180; // x0
  System_String_o *v181; // x0
  System_String_o *v182; // x0
  System_Int32_array *QuestIndividualities; // x0
  UnityEngine_Object_o *v184; // x29
  System_Int32_array *v185; // x22
  BattleLogicFunction_ProcListInArgs_o *v186; // x29
  BattlePerformance_o *perf; // x2
  struct BattleLogic_o *v188; // x8
  BattleActionEffect_AddChangeMaxHpBuff_o *v189; // x22
  BattleLogicFunction_o *v190; // x29
  int32_t v191; // w2
  const MethodInfo *v192; // x3
  BattleActionEffect_Base_o *v193; // x0
  UnityEngine_Object_o *v194; // x22
  int v195; // w8
  BattleLogicFunction_o *v196; // x22
  unsigned int v197; // w20
  System_Int32_array *ShortenMaxCountArray; // x0
  int32_t v199; // w2
  const MethodInfo *v200; // x3
  BattleActionData_o *v201; // x22
  System_Int32_array *TargetFunctionIndividuality; // x0
  int32_t v203; // w2
  const MethodInfo *v204; // x3
  System_Int32_array *TargetBuffIndividuality; // x0
  int32_t v206; // w2
  const MethodInfo *v207; // x3
  int32_t v208; // w20
  struct BattleData_o *v209; // x8
  BattleBuffData_o *buffData; // x20
  BattleBuffData_CheckIndividualitiesData_o *v211; // x22
  FunctionEntity_o *v212; // x2
  DataVals_o *v213; // x3
  int32_t v214; // w4
  const MethodInfo *v215; // x5
  bool v216; // w0
  BattleActionData_BuffData_o *v217; // x20
  const MethodInfo *v218; // x3
  UnityEngine_Object_o *v219; // x20
  const MethodInfo *v220; // x4
  __int64 v222; // x0
  MethodInfo *methoda; // [xsp+0h] [xbp-F0h]
  bool *v224; // [xsp+8h] [xbp-E8h]
  char v225; // [xsp+14h] [xbp-DCh]
  BattleActionData_o *userCommandCodeId; // [xsp+18h] [xbp-D8h]
  int userCommandCodeIda; // [xsp+18h] [xbp-D8h]
  int32_t funcIndex; // [xsp+20h] [xbp-D0h]
  int32_t treasureDvcId; // [xsp+24h] [xbp-CCh]
  BattleActionData_o *v230; // [xsp+28h] [xbp-C8h]
  int32_t v231; // [xsp+34h] [xbp-BCh]
  BattleActionData_o *v232; // [xsp+38h] [xbp-B8h]
  BattleLogicFunction_ProcListInArgs_o *v233; // [xsp+40h] [xbp-B0h]
  FunctionEntity_o *funcEnt; // [xsp+48h] [xbp-A8h]
  unsigned int uniqueId; // [xsp+54h] [xbp-9Ch]
  BattleActionData_MasterBuffData_o *v236; // [xsp+58h] [xbp-98h]
  int v237; // [xsp+64h] [xbp-8Ch] BYREF
  int32_t skillId[2]; // [xsp+68h] [xbp-88h] BYREF
  Il2CppObject *entity; // [xsp+70h] [xbp-80h] BYREF
  bool isEnemyTurn; // [xsp+78h] [xbp-78h] BYREF
  int32_t v241; // [xsp+7Ch] [xbp-74h] BYREF
  int32_t param; // [xsp+88h] [xbp-68h] BYREF
  bool isSelfTurn; // [xsp+8Ch] [xbp-64h] BYREF

  v9 = mainAction;
  v10 = this;
  if ( (byte_4CB93B9 & 1) == 0 )
  {
    sub_1C6BA08(&BattleActionEffect_AddChangeMaxHpBuff_TypeInfo);
    sub_1C6BA08(&BattleActionEffect_AddServantBuff_TypeInfo);
    sub_1C6BA08(&BattleActionData_TypeInfo);
    sub_1C6BA08(&BattleDataDefine_TypeInfo);
    sub_1C6BA08(&BattleBuffData_BuffData___TypeInfo);
    sub_1C6BA08(&BattleBuffData_BuffData_TypeInfo);
    sub_1C6BA08(&BuffList_TypeInfo);
    sub_1C6BA08(&BattleBuffData_CheckIndividualitiesData_TypeInfo);
    sub_1C6BA08(&Method_DataManager_GetMasterData_EventPointBuffMaster___);
    sub_1C6BA08(&Method_DataManager_GetMasterData_UserEventPointMaster___);
    sub_1C6BA08(&Method_DataManager_GetMaster_BuffTypeDetailMaster___);
    sub_1C6BA08(&DataManager_TypeInfo);
    sub_1C6BA08(&Method_DataMasterBase_BuffTypeDetailMaster__BuffTypeDetailEntity__int__TryGetEntity__);
    sub_1C6BA08(&BattleBuffData_FieldAliveCondData_TypeInfo);
    sub_1C6BA08(&int___TypeInfo);
    sub_1C6BA08(&Method_System_Collections_Generic_List_int___ctor__);
    sub_1C6BA08(&System_Collections_Generic_List_int__TypeInfo);
    sub_1C6BA08(&BattleActionData_MasterBuffData_TypeInfo);
    sub_1C6BA08(&System_Math_TypeInfo);
    sub_1C6BA08(&UnityEngine_Object_TypeInfo);
    sub_1C6BA08(&BattleBuffData_ParamAdd_TypeInfo);
    sub_1C6BA08(&BattleBuffData_RelationOverwriteData_TypeInfo);
    sub_1C6BA08(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_1C6BA08(&BattleBuffData_SubstituteData_TypeInfo);
    sub_1C6BA08(&StringLiteral_13355/*"TAMAMOCAT_STUN_BUFF_ID"*/);
    sub_1C6BA08(&StringLiteral_13356/*"TAMAMOCAT_TREASURE_DEVICE_ID_"*/);
    this = (BattleLogicFunction_o *)sub_1C6BA08(&StringLiteral_1/*""*/);
    byte_4CB93B9 = 1;
  }
  isSelfTurn = 0;
  param = 0;
  v241 = 0;
  isEnemyTurn = 0;
  *(_QWORD *)skillId = 0;
  entity = 0;
  v237 = 0;
  if ( !funcTarget )
    goto LABEL_343;
  if ( !v9 )
    goto LABEL_343;
  funcUnit_k__BackingField = funcTarget->fields._funcUnit_k__BackingField;
  if ( !funcUnit_k__BackingField )
    goto LABEL_343;
  dataVals_k__BackingField = funcUnit_k__BackingField->fields._dataVals_k__BackingField;
  if ( !dataVals_k__BackingField )
    goto LABEL_343;
  actorId = v9->fields.actorId;
  uniqueId = funcTarget->fields._targetId_k__BackingField;
  funcEnt = dataVals_k__BackingField->fields.funcEnt;
  v14 = (BuffEntity_o *)((__int64 (__fastcall *)(BattleLogicFunctionProcess_FunctionTargetCheck_o *, const MethodInfo *, BattleLogicFunctionProcess_FunctionTargetCheck_o *, BattleLogicFunction_ProcListInArgs_o *, bool, const MethodInfo *))funcTarget->klass->vtable._15_GetFixBuffEntity.methodPtr)(
                          funcTarget,
                          funcTarget->klass->vtable._15_GetFixBuffEntity.method,
                          funcTarget,
                          args,
                          shortbuff,
                          method);
  v15 = BattleLogicFunctionProcess_FunctionUnitCheck__get_FuncIndex(funcUnit_k__BackingField, 0);
  userCommandCodeId = (BattleActionData_o *)v9->fields.userCommandCodeId;
  funcIndex = v15;
  treasureDvcId = v9->fields.treasureDvcId;
  v16 = (BattleActionData_o *)sub_1C6BC54(BattleActionData_TypeInfo);
  BattleActionData___ctor(v16, 0);
  this = (BattleLogicFunction_o *)v10->fields.data;
  if ( !this )
    goto LABEL_343;
  this = (BattleLogicFunction_o *)BattleData__getServantData((BattleData_o *)this, actorId, 0);
  if ( !v10->fields.data )
    goto LABEL_343;
  v17 = (BattleServantData_o *)this;
  ServantData = BattleData__getServantData(v10->fields.data, uniqueId, 0);
  this = (BattleLogicFunction_o *)((__int64 (__fastcall *)(BattleLogicFunctionProcess_FunctionTargetCheck_o *, const MethodInfo *))funcTarget->klass->vtable._8_MakeActionBuffData.methodPtr)(
                                    funcTarget,
                                    funcTarget->klass->vtable._8_MakeActionBuffData.method);
  v236 = (BattleActionData_MasterBuffData_o *)this;
  if ( !v14 )
    goto LABEL_343;
  this = (BattleLogicFunction_o *)BuffEntity__checkBuffType(v14, 142, 0);
  if ( ((unsigned __int8)this & 1) != 0 )
  {
    v236 = (BattleActionData_MasterBuffData_o *)sub_1C6BC54(BattleActionData_MasterBuffData_TypeInfo);
    BattleActionData_MasterBuffData___ctor(v236, funcEnt, 0);
  }
  if ( !ServantData )
    goto LABEL_343;
  v231 = actorId;
  if ( !v236 )
    goto LABEL_343;
  v236->fields.targetId = ServantData->fields.uniqueId;
  v236->fields.functionIndex = funcIndex;
  v19 = sub_1C6BC54(BattleBuffData_BuffData_TypeInfo);
  BattleBuffData_BuffData___ctor((BattleBuffData_BuffData_o *)v19, 0);
  if ( !v19 )
    goto LABEL_343;
  v230 = v16;
  *(_DWORD *)(v19 + 16) = v14->fields.id;
  if ( !args )
    goto LABEL_343;
  *(_DWORD *)(v19 + 164) = BattleLogicFunction_ProcListInArgs__get_SkillId(args, 0);
  *(_DWORD *)(v19 + 188) = BattleLogicFunction_ProcListInArgs__get_GrantSkillType(args, 0);
  *(_DWORD *)(v19 + 176) = DataVals__GetMotionChange(dataVals_k__BackingField, 0);
  *(_DWORD *)(v19 + 20) = 2 * DataVals__GetParam(dataVals_k__BackingField, 1, 0, 0);
  BattleBuffData_BuffData__RegisterGeneralParams((BattleBuffData_BuffData_o *)v19, dataVals_k__BackingField, 0);
  v21 = v9->fields.isReversalShortBuffTurn ^ shortbuff;
  if ( (v21 & 1) != 0 )
    --*(_DWORD *)(v19 + 20);
  AdjustmentBuffTurn = BattleLogicFunction__GetAdjustmentBuffTurn(v10, dataVals_k__BackingField, v17, v20);
  if ( AdjustmentBuffTurn )
  {
    v21 ^= 1u;
    *(_DWORD *)(v19 + 20) += AdjustmentBuffTurn;
  }
  this = (BattleLogicFunction_o *)BattleLogicFunction__IsSvtBuffTurnExtend(v10, uniqueId, v14, v21 & 1, v23);
  v24 = (char)this;
  if ( ((unsigned __int8)this & 1) != 0 )
  {
    v21 ^= 1u;
    ++*(_DWORD *)(v19 + 20);
  }
  v232 = v9;
  *(_DWORD *)(v19 + 68) = v231;
  if ( !funcEnt )
    goto LABEL_343;
  v25 = (v21 ^ Target__isEnemy(funcEnt->fields.targetType, 0)) & 1;
  isSelfTurn = v25;
  type = v14->fields.type;
  if ( !BuffList_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(BuffList_TypeInfo);
  this = (BattleLogicFunction_o *)BuffList__IsForceProgressSelfTurnType(type, 0);
  if ( ((unsigned __int8)this & 1) != 0 )
  {
    v25 = 1;
    isSelfTurn = 1;
  }
  if ( (v24 & 1) != 0 )
  {
    isEnemy = ServantData->fields.isEnemy;
    p_isEnemy = &ServantData->fields.isEnemy;
    v30 = isEnemy ^ v25 ^ 1;
  }
  else
  {
    BattleLogicFunction__UpdateBuffProgressTurn(v10, v14->fields.type, &isSelfTurn, v27);
    p_isEnemy = &ServantData->fields.isEnemy;
    *(_BYTE *)(v19 + 180) = ServantData->fields.isEnemy ^ isSelfTurn ^ 1;
    this = (BattleLogicFunction_o *)BuffEntity__GetProgressSelfTurn(v14, 0);
    if ( ((unsigned int)this & 0x80000000) != 0 )
    {
      v30 = *(_BYTE *)(v19 + 180);
      isEnemy = *p_isEnemy;
      goto LABEL_32;
    }
    isEnemy = *p_isEnemy;
    v30 = *p_isEnemy ^ ((_DWORD)this == 0);
  }
  *(_BYTE *)(v19 + 180) = v30;
LABEL_32:
  *(_BYTE *)(v19 + 192) = v30 ^ isEnemy ^ 1;
  data = v10->fields.data;
  if ( !data )
    goto LABEL_343;
  this = (BattleLogicFunction_o *)data->fields.battleEvent;
  if ( !this )
    goto LABEL_343;
  *(_DWORD *)(v19 + 184) = ((__int64 (__fastcall *)(BattleLogicFunction_o *, BuffEntity_o *, Il2CppMethodPointer))this->klass[1].vtable._0_Equals.method)(
                             this,
                             v14,
                             this->klass[1].vtable._1_Finalize.methodPtr);
  ProgressTurnCond = BuffEntity__GetProgressTurnCond(v14, 0);
  if ( (ProgressTurnCond & 0x80000000) == 0 )
    *(_DWORD *)(v19 + 184) = ProgressTurnCond;
  *(_DWORD *)(v19 + 24) = DataVals__GetParam(dataVals_k__BackingField, 2, 0, 0);
  *(_DWORD *)(v19 + 28) = DataVals__GetParam(dataVals_k__BackingField, 3, 0, 0);
  v236->fields.popDelay = DataVals__GetParam(dataVals_k__BackingField, 65, 0, 0);
  v33 = v14->fields.type;
  if ( !BuffList_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(BuffList_TypeInfo);
  v224 = p_isEnemy;
  if ( BuffList__CheckType(143, v33, 0) )
    goto LABEL_48;
  v34 = v14->fields.type;
  if ( !BuffList_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(BuffList_TypeInfo);
  if ( BuffList__CheckType(145, v34, 0) )
    goto LABEL_48;
  v35 = v14->fields.type;
  if ( !BuffList_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(BuffList_TypeInfo);
  if ( BuffList__CheckType(146, v35, 0) )
    goto LABEL_48;
  v36 = v14->fields.type;
  if ( !BuffList_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(BuffList_TypeInfo);
  if ( BuffList__CheckType(147, v36, 0) )
  {
LABEL_48:
    tdCommandTypeChange = args->fields.tdCommandTypeChange;
    if ( (tdCommandTypeChange & 0x80000000) == 0 )
      *(_DWORD *)(v19 + 28) = tdCommandTypeChange;
    v38 = 1;
  }
  else
  {
    v38 = 0;
  }
  *(_DWORD *)(v19 + 52) = DataVals__GetParam(dataVals_k__BackingField, 8, 0, 0);
  *(_DWORD *)(v19 + 56) = DataVals__GetParam(dataVals_k__BackingField, 9, 0, 0);
  v39 = sub_1C6BAB0(int___TypeInfo, 2);
  *(_QWORD *)(v19 + 40) = v39;
  sub_1C6B9AC((CGThumbnailListItem_o *)(v19 + 40), v39, v40, v41);
  v42 = *(_QWORD *)(v19 + 40);
  this = (BattleLogicFunction_o *)DataVals__GetParam(dataVals_k__BackingField, 3, 0, 0);
  if ( !v42 )
    goto LABEL_343;
  if ( !*(_DWORD *)(v42 + 24) )
    goto LABEL_344;
  *(_DWORD *)(v42 + 32) = (_DWORD)this;
  v43 = *(_QWORD *)(v19 + 40);
  this = (BattleLogicFunction_o *)DataVals__GetParam(dataVals_k__BackingField, 4, 0, 0);
  if ( !v43 )
    goto LABEL_343;
  if ( *(_DWORD *)(v43 + 24) <= 1u )
    goto LABEL_344;
  v225 = v38;
  v233 = args;
  *(_DWORD *)(v43 + 36) = (_DWORD)this;
  v44 = v14->fields.type;
  if ( !BuffList_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(BuffList_TypeInfo);
  this = (BattleLogicFunction_o *)BuffList__CheckType(135, v44, 0);
  if ( ((unsigned __int8)this & 1) != 0 )
  {
    v45 = v10->fields.data;
    if ( !v45 )
      goto LABEL_343;
    battle_ent = v45->fields.battle_ent;
    if ( !battle_ent )
      goto LABEL_343;
    userId = battle_ent->fields.userId;
    eventId = battle_ent->fields.eventId;
    this = (BattleLogicFunction_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3A4F3B4 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !this )
      goto LABEL_343;
    this = (BattleLogicFunction_o *)DataManager__GetMasterData_object_(
                                      (DataManager_o *)this,
                                      (const MethodInfo_313B368 *)Method_DataManager_GetMasterData_EventPointBuffMaster___);
    if ( !this )
      goto LABEL_343;
    v49 = (EventPointBuffMaster_o *)this;
    EventPointGroupId = EventPointBuffMaster__GetEventPointGroupId(
                          (EventPointBuffMaster_o *)this,
                          eventId,
                          funcEnt->fields.id,
                          0,
                          0);
    this = (BattleLogicFunction_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3A4F3B4 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !this )
      goto LABEL_343;
    this = (BattleLogicFunction_o *)DataManager__GetMasterData_object_(
                                      (DataManager_o *)this,
                                      (const MethodInfo_313B368 *)Method_DataManager_GetMasterData_UserEventPointMaster___);
    if ( !this )
      goto LABEL_343;
    EntityDefinitely = UserEventPointMaster__GetEntityDefinitely(
                         (UserEventPointMaster_o *)this,
                         userId,
                         eventId,
                         EventPointGroupId,
                         0);
    if ( EntityDefinitely )
    {
      value = EntityDefinitely->fields.value;
      this = (BattleLogicFunction_o *)EventPointBuffMaster__GetAllEventBuff(
                                        v49,
                                        EntityDefinitely->fields.eventId,
                                        EventPointGroupId,
                                        0);
      if ( !this )
        goto LABEL_343;
      logic = (int)this->fields.logic;
      if ( logic >= 1 )
      {
        v54 = 0;
        v55 = 0;
        do
        {
          if ( logic == v54 )
            goto LABEL_344;
          v56 = *((_QWORD *)&this->fields.logictarget + v54);
          if ( !v56 )
            goto LABEL_343;
          if ( value < *(int *)(v56 + 28) )
            break;
          ++v54;
          v55 = v56;
        }
        while ( logic != v54 );
        if ( v55 )
          *(_DWORD *)(v19 + 28) += *(_DWORD *)(v55 + 64);
      }
    }
  }
  *(_DWORD *)(v19 + 416) = DataVals__GetParamAddIndividualityTargetType(dataVals_k__BackingField, 0);
  if ( DataVals__IsExistSnapShotParamAddIndv(dataVals_k__BackingField, 0) )
  {
    v57 = *(_DWORD *)(v19 + 28);
    v58 = v10->fields.data;
    v59 = (BattleBuffData_CheckIndividualitiesData_o *)sub_1C6BC54(BattleBuffData_CheckIndividualitiesData_TypeInfo);
    BattleBuffData_CheckIndividualitiesData___ctor_45921048(v59, v17, ServantData, 0, 0, 0, 0, 1, 0);
    v60 = (BattleBuffData_ParamAdd_o *)sub_1C6BC54(BattleBuffData_ParamAdd_TypeInfo);
    BattleBuffData_ParamAdd___ctor_46198972(v60, dataVals_k__BackingField, 0);
    *(_DWORD *)(v19 + 28) = BattleBuffData__GetTotalParamAddValue((BattleBuffData_BuffData_o *)v19, v58, v59, v60, 0)
                          + v57;
  }
  if ( DataVals__isParam(dataVals_k__BackingField, 26, 0) && DataVals__isParam(dataVals_k__BackingField, 27, 0) )
  {
    v61 = sub_1C6BAB0(int___TypeInfo, 2);
    *(_QWORD *)(v19 + 104) = v61;
    sub_1C6B9AC((CGThumbnailListItem_o *)(v19 + 104), v61, v62, v63);
    v64 = *(_QWORD *)(v19 + 104);
    this = (BattleLogicFunction_o *)DataVals__GetParam(dataVals_k__BackingField, 26, 0, 0);
    if ( !v64 )
      goto LABEL_343;
    if ( !*(_DWORD *)(v64 + 24) )
      goto LABEL_344;
    *(_DWORD *)(v64 + 32) = (_DWORD)this;
    v65 = *(_QWORD *)(v19 + 104);
    this = (BattleLogicFunction_o *)DataVals__GetParam(dataVals_k__BackingField, 27, 0, 0);
    if ( !v65 )
      goto LABEL_343;
    if ( *(_DWORD *)(v65 + 24) <= 1u )
      goto LABEL_344;
    *(_DWORD *)(v65 + 36) = (_DWORD)this;
  }
  *(_DWORD *)(v19 + 64) = DataVals__GetParam(dataVals_k__BackingField, 15, 0, 0);
  *(_DWORD *)(v19 + 344) = DataVals__GetClassIconAuraEffectId(dataVals_k__BackingField, 0);
  if ( DataVals__GetParam(dataVals_k__BackingField, 11, 0, 0) >= 1 )
    *(_DWORD *)(v19 + 60) = v231;
  if ( DataVals__GetParam(dataVals_k__BackingField, 46, 0, 0) >= 1 )
    BattleBuffData_BuffData__onState((BattleBuffData_BuffData_o *)v19, 0x8000, 0);
  if ( DataVals__GetParam(dataVals_k__BackingField, 50, 0, 0) >= 1 )
    BattleBuffData_BuffData__onState((BattleBuffData_BuffData_o *)v19, 0x10000, 0);
  if ( DataVals__GetParam(dataVals_k__BackingField, 89, 0, 0) >= 1 )
    BattleBuffData_BuffData__onState((BattleBuffData_BuffData_o *)v19, 0x80000, 0);
  if ( DataVals__GetParam(dataVals_k__BackingField, 91, 0, 0) >= 1 )
    BattleBuffData_BuffData__onState((BattleBuffData_BuffData_o *)v19, 0x100000, 0);
  if ( DataVals__GetParam(dataVals_k__BackingField, 66, 0, 0) >= 1 )
    BattleBuffData_BuffData__onState((BattleBuffData_BuffData_o *)v19, 0x40000, 0);
  if ( DataVals__GetParam(dataVals_k__BackingField, 144, 0, 0) >= 1 )
    BattleBuffData_BuffData__onState((BattleBuffData_BuffData_o *)v19, 0x2000000, 0);
  if ( DataVals__TryGetParam(dataVals_k__BackingField, 215, &param, 0) )
    *(_DWORD *)(v19 + 448) = param;
  if ( DataVals__TryGetParam(dataVals_k__BackingField, 216, &v241, 0) )
  {
    *(_DWORD *)(v19 + 452) = v241;
    if ( DataVals__GetParam(dataVals_k__BackingField, 217, 0, 0) >= 1 )
      *(_BYTE *)(v19 + 456) = 1;
  }
  v67 = *(_DWORD *)(v19 + 28);
  *(_DWORD *)(v19 + 28) = BattleLogicFunction__GetAddCondParamValue(v10, dataVals_k__BackingField, ServantData, v66)
                        + v67;
  if ( DataVals__isParam(dataVals_k__BackingField, 42, 0) )
  {
    v68 = DataVals__GetParam(dataVals_k__BackingField, 42, 0, 0);
    v69 = sub_1C6BC54(BattleBuffData_FieldAliveCondData_TypeInfo);
    BattleBuffData_FieldAliveCondData___ctor((BattleBuffData_FieldAliveCondData_o *)v69, 0);
    if ( !v69 )
      goto LABEL_343;
    v70 = *v224;
    *(_BYTE *)(v69 + 17) = v68 > 0;
    *(_BYTE *)(v69 + 16) = v70;
    if ( !System_Math_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(System_Math_TypeInfo);
    if ( v68 >= 0 )
      v71 = v68;
    else
      v71 = -v68;
    *(_DWORD *)(v69 + 20) = v71;
    TargetIndiv = BuffEntity__GetTargetIndiv(v14, 0);
    *(_QWORD *)(v69 + 24) = TargetIndiv;
    sub_1C6B9AC((CGThumbnailListItem_o *)(v69 + 24), (int32_t)TargetIndiv, v73, v74);
    *(_BYTE *)(v69 + 32) = BuffEntity__IsIncludeIgnoreIndividuality(v14, 0);
    *(_QWORD *)(v19 + 152) = v69;
    sub_1C6B9AC((CGThumbnailListItem_o *)(v19 + 152), v69, v75, v76);
    v233->fields.updateField = 1;
  }
  v77 = v14->fields.type;
  if ( !BuffList_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(BuffList_TypeInfo);
  if ( BuffList__IsIntervalPossibleBuff(v77, 0) )
  {
    IntervalData = DataVals__GetIntervalData(dataVals_k__BackingField, 0);
    *(_QWORD *)(v19 + 360) = IntervalData;
    sub_1C6B9AC((CGThumbnailListItem_o *)(v19 + 360), (int32_t)IntervalData, v79, v80);
  }
  if ( BattleBuffData__CheckInvalidSacrificeIndiv((BattleBuffData_BuffData_o *)v19, 0) )
    v233->fields.updateField = 1;
  ParamArray = DataVals__GetParamArray(dataVals_k__BackingField, 115, 0);
  *(_QWORD *)(v19 + 328) = ParamArray;
  sub_1C6B9AC((CGThumbnailListItem_o *)(v19 + 328), (int32_t)ParamArray, v82, v83);
  *(_DWORD *)(v19 + 208) = BuffEntity__GetCardEffectId(v14, 0);
  v84 = v14->fields.type;
  if ( !BuffList_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(BuffList_TypeInfo);
  if ( BuffList__CheckType(144, v84, 0) )
  {
    RelationId = BuffEntity__getRelationId(v14, 0);
    v86 = (BattleBuffData_RelationOverwriteData_o *)sub_1C6BC54(BattleBuffData_RelationOverwriteData_TypeInfo);
    BattleBuffData_RelationOverwriteData___ctor(v86, 0);
    if ( RelationId >= 1 )
    {
      this = (BattleLogicFunction_o *)BuffEntity__getRelationId(v14, 0);
      if ( !v86 )
        goto LABEL_343;
      v86->fields.id = (int)this;
      v89 = BattleDataDefine_TypeInfo;
      if ( !BattleDataDefine_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(BattleDataDefine_TypeInfo);
        v89 = BattleDataDefine_TypeInfo;
      }
      v86->fields.atkPriority = BuffEntity__getAtkRelationPriority(
                                  v14,
                                  v89->static_fields->OVERWRITE_ATK_RATE_PRIORITY,
                                  0);
      v86->fields.defPriority = BuffEntity__getDefRelationPriority(
                                  v14,
                                  BattleDataDefine_TypeInfo->static_fields->OVERWRITE_DEF_RATE_PRIORITY,
                                  0);
    }
    *(_QWORD *)(v19 + 168) = v86;
    sub_1C6B9AC((CGThumbnailListItem_o *)(v19 + 168), (int32_t)v86, v87, v88);
  }
  v90 = v14->fields.type;
  if ( !BuffList_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(BuffList_TypeInfo);
  if ( BuffList__CheckType(154, v90, 0) )
  {
    this = (BattleLogicFunction_o *)BattleServantData__get_BuffData(ServantData, 0);
    if ( !this )
      goto LABEL_343;
    this = (BattleLogicFunction_o *)this->fields.wkStr;
    if ( !this )
      goto LABEL_343;
    BattleBuffData_SkillRankChangeData__UpdateAddRightAfter((BattleBuffData_SkillRankChangeData_o *)this, 1, 0);
    BattleActionData_BuffData__OnUpdateBuffType((BattleActionData_BuffData_o *)v236, 1, 0);
  }
  v91 = BuffEntity__checkBuffType(v14, 7, 0);
  if ( v17 && v91 )
  {
    UpDownGiveHeal = BattleServantData__getUpDownGiveHeal(v17, ServantData, 0);
    v93 = BattleUtility__FloorToInt(UpDownGiveHeal * (float)*(int *)(v19 + 28), 0);
    v94 = *(_DWORD *)(v19 + 52);
    *(_DWORD *)(v19 + 28) = v93;
    v95 = BattleUtility__FloorToInt(UpDownGiveHeal * (float)v94, 0);
    v96 = *(_DWORD *)(v19 + 56);
    *(_DWORD *)(v19 + 52) = v95;
    *(_DWORD *)(v19 + 56) = BattleUtility__FloorToInt(UpDownGiveHeal * (float)v96, 0);
    BattleServantData__getIndividualities(v17, 0, 1, 0, 1, 0);
  }
  *(_BYTE *)(v19 + 32) = 0;
  *(_BYTE *)(v19 + 33) = BattleLogicFunction_ProcListInArgs__get_IsPassive(v233, 0);
  if ( DataVals__isParam(dataVals_k__BackingField, 23, 0) )
    *(_BYTE *)(v19 + 33) = 1;
  if ( DataVals__isParam(dataVals_k__BackingField, 24, 0) )
  {
    *(_BYTE *)(v19 + 33) = 0;
  }
  else if ( *(_BYTE *)(v19 + 33) )
  {
    *(_DWORD *)(v19 + 460) = DataVals__GetParam(dataVals_k__BackingField, 218, 0, 0);
  }
  if ( dataVals_k__BackingField->fields.flgBoost )
    BattleBuffData_BuffData__onState((BattleBuffData_BuffData_o *)v19, 2, 0);
  if ( DataVals__isRatioHpRange(dataVals_k__BackingField, 0) )
  {
    *(_DWORD *)(v19 + 72) = DataVals__GetParam(dataVals_k__BackingField, 20, 0, 0);
    *(_DWORD *)(v19 + 76) = DataVals__GetParam(dataVals_k__BackingField, 21, 0, 0);
    *(_DWORD *)(v19 + 80) = DataVals__GetParam(dataVals_k__BackingField, 30, 0, 0);
    *(_DWORD *)(v19 + 84) = DataVals__GetParam(dataVals_k__BackingField, 31, 0, 0);
  }
  else if ( DataVals__isParam(dataVals_k__BackingField, 20, 0) )
  {
    *(_DWORD *)(v19 + 72) = DataVals__GetParam(dataVals_k__BackingField, 20, 0, 0);
  }
  else if ( DataVals__isParam(dataVals_k__BackingField, 21, 0) )
  {
    *(_DWORD *)(v19 + 76) = DataVals__GetParam(dataVals_k__BackingField, 21, 0, 0);
  }
  if ( DataVals__isParamAddIndividuality(dataVals_k__BackingField, 0) )
  {
    v97 = DataVals__GetParamArray(dataVals_k__BackingField, 70, 0);
    *(_QWORD *)(v19 + 224) = v97;
    sub_1C6B9AC((CGThumbnailListItem_o *)(v19 + 224), (int32_t)v97, v98, v99);
    v100 = DataVals__GetParamArray(dataVals_k__BackingField, 71, 0);
    *(_QWORD *)(v19 + 232) = v100;
    sub_1C6B9AC((CGThumbnailListItem_o *)(v19 + 232), (int32_t)v100, v101, v102);
    v103 = DataVals__GetParamArray(dataVals_k__BackingField, 72, 0);
    *(_QWORD *)(v19 + 240) = v103;
    sub_1C6B9AC((CGThumbnailListItem_o *)(v19 + 240), (int32_t)v103, v104, v105);
    v106 = DataVals__GetParamAddIndividualityAndCheckArrayData(dataVals_k__BackingField, 195, 0);
    *(_QWORD *)(v19 + 424) = v106;
    sub_1C6B9AC((CGThumbnailListItem_o *)(v19 + 424), (int32_t)v106, v107, v108);
    v109 = DataVals__GetParamAddIndividualityAndCheckArrayData(dataVals_k__BackingField, 196, 0);
    *(_QWORD *)(v19 + 432) = v109;
    sub_1C6B9AC((CGThumbnailListItem_o *)(v19 + 432), (int32_t)v109, v110, v111);
    v112 = DataVals__GetParamAddIndividualityAndCheckArrayData(dataVals_k__BackingField, 197, 0);
    *(_QWORD *)(v19 + 440) = v112;
    sub_1C6B9AC((CGThumbnailListItem_o *)(v19 + 440), (int32_t)v112, v113, v114);
    *(_DWORD *)(v19 + 248) = DataVals__GetParam(dataVals_k__BackingField, 73, 0, 0);
    *(_DWORD *)(v19 + 252) = DataVals__GetParam(dataVals_k__BackingField, 60, 0, 0);
    *(_DWORD *)(v19 + 268) = DataVals__GetParam(dataVals_k__BackingField, 61, 0, 0);
  }
  if ( DataVals__IsParamAddBattlePoint(dataVals_k__BackingField, 0) )
  {
    *(_DWORD *)(v19 + 384) = DataVals__GetParam(dataVals_k__BackingField, 182, 0, 0);
    *(_DWORD *)(v19 + 388) = DataVals__GetParam(dataVals_k__BackingField, 183, 0, 0);
  }
  v115 = v14->fields.type;
  if ( !BuffList_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(BuffList_TypeInfo);
  if ( BuffList__CheckType(162, v115, 0) )
  {
    UpBuffRateBuffTypeList = BuffEntity__GetUpBuffRateBuffTypeList(v14, 0);
    *(_QWORD *)(v19 + 256) = UpBuffRateBuffTypeList;
    sub_1C6B9AC((CGThumbnailListItem_o *)(v19 + 256), (int32_t)UpBuffRateBuffTypeList, v117, v118);
    *(_DWORD *)(v19 + 264) = BuffEntity__GetMaxBuffRate(v14, 0);
  }
  if ( DataVals__isParam(dataVals_k__BackingField, 22, 0) )
    BattleBuffData_BuffData__onState((BattleBuffData_BuffData_o *)v19, 64, 0);
  if ( DataVals__isParam(dataVals_k__BackingField, 25, 0) )
    BattleBuffData_BuffData__onState((BattleBuffData_BuffData_o *)v19, 128, 0);
  this = (BattleLogicFunction_o *)DataVals__isShowState(dataVals_k__BackingField, 0);
  if ( ((unsigned __int8)this & 1) != 0 )
  {
    LODWORD(mainAction) = DataVals__GetParam(dataVals_k__BackingField, 14, 0, 0);
LABEL_162:
    BattleBuffData_BuffData__setShowState((BattleBuffData_BuffData_o *)v19, (int32_t)mainAction, 0);
    goto LABEL_179;
  }
  if ( *(_BYTE *)(v19 + 33) )
  {
    externalArg = v233->fields.externalArg;
    if ( !externalArg )
      goto LABEL_343;
    if ( externalArg->fields.isWarBoard )
    {
      if ( !v17 )
        goto LABEL_343;
      if ( v17->fields.isEnemy && externalArg->fields.grantSkillType == 12 )
      {
        LODWORD(mainAction) = BuffEntity__GetShowStateWarBoardEnemyEquip(v14, 0, 0);
        if ( (_DWORD)mainAction )
          goto LABEL_162;
        if ( !DataManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
        this = (BattleLogicFunction_o *)DataManager__GetMaster_object_((const MethodInfo_313B314 *)Method_DataManager_GetMaster_BuffTypeDetailMaster___);
        if ( !this )
          goto LABEL_343;
        this = (BattleLogicFunction_o *)DataMasterBase_object__object__int___TryGetEntity(
                                          (DataMasterBase_TMaster__TEntity__PKType__o *)this,
                                          &entity,
                                          v14->fields.type,
                                          (const MethodInfo_33F9128 *)Method_DataMasterBase_BuffTypeDetailMaster__BuffTypeDetailEntity__int__TryGetEntity__);
        if ( ((unsigned __int8)this & 1) != 0 )
        {
          this = (BattleLogicFunction_o *)entity;
          if ( !entity )
            goto LABEL_343;
          this = (BattleLogicFunction_o *)BuffTypeDetailEntity__GetShowStateWarBoardEnemyEquip(
                                            (BuffTypeDetailEntity_o *)entity,
                                            0,
                                            0);
          mainAction = (BattleActionData_o *)(unsigned int)this;
          if ( (_DWORD)this )
            goto LABEL_162;
        }
      }
    }
    v120 = v10->fields.data;
    if ( !v120 )
      goto LABEL_343;
    this = (BattleLogicFunction_o *)v120->fields.battleEvent;
    if ( !this )
      goto LABEL_343;
    ((void (__fastcall *)(BattleLogicFunction_o *, __int64, Il2CppMethodPointer))this->klass[1].vtable._1_Finalize.method)(
      this,
      v19,
      this->klass[1].vtable._2_GetHashCode.methodPtr);
  }
LABEL_179:
  if ( DataVals__IsOpponentOnly(dataVals_k__BackingField, 0) )
    BattleBuffData_BuffData__onState((BattleBuffData_BuffData_o *)v19, 2048, 0);
  if ( DataVals__isShowCommand(dataVals_k__BackingField, 0) )
    BattleBuffData_BuffData__onState((BattleBuffData_BuffData_o *)v19, 512, 0);
  if ( DataVals__IsAddIndividualty(dataVals_k__BackingField, 0) )
  {
    AddIndividualty = DataVals__GetAddIndividualty(dataVals_k__BackingField, 0);
    *(_QWORD *)(v19 + 120) = AddIndividualty;
    sub_1C6B9AC((CGThumbnailListItem_o *)(v19 + 120), (int32_t)AddIndividualty, v122, v123);
  }
  if ( DataVals__IsAddLinkageTargetIndividualty(dataVals_k__BackingField, 0) )
  {
    LinkageTargetIndividualty = DataVals__GetLinkageTargetIndividualty(dataVals_k__BackingField, 0);
    *(_QWORD *)(v19 + 128) = LinkageTargetIndividualty;
    sub_1C6B9AC((CGThumbnailListItem_o *)(v19 + 128), (int32_t)LinkageTargetIndividualty, v125, v126);
  }
  this = (BattleLogicFunction_o *)funcTarget->fields._funcUnit_k__BackingField;
  if ( !this )
    goto LABEL_343;
  if ( BattleLogicFunctionProcess_FunctionUnitCheck__HasLinkedFuncUnit(
         (BattleLogicFunctionProcess_FunctionUnitCheck_o *)this,
         0)
    && DataVals__IsBehaveAsFamilyBuff(dataVals_k__BackingField, 0) )
  {
    BattleLogicFunction__BehaveLinkageBuffAsFamily(v10, (BattleBuffData_BuffData_o *)v19, funcTarget, v127);
  }
  if ( DataVals__isParam(dataVals_k__BackingField, 99, 0) )
    BattleBuffData_BuffData__onState((BattleBuffData_BuffData_o *)v19, 0x800000, 0);
  if ( DataVals__isParam(dataVals_k__BackingField, 100, 0) )
    BattleBuffData_BuffData__onState((BattleBuffData_BuffData_o *)v19, 0x1000000, 0);
  if ( BuffEntity__getAppearanceId(v14, 0) >= 1 )
  {
    this = (BattleLogicFunction_o *)BattleServantData__isShiftableServant(ServantData, 0);
    if ( ((unsigned __int8)this & 1) != 0 )
      goto LABEL_202;
    v128 = v10->fields.data;
    if ( !v128 )
      goto LABEL_343;
    this = (BattleLogicFunction_o *)v128->fields.battleEvent;
    if ( !this )
      goto LABEL_343;
    if ( (((__int64 (__fastcall *)(BattleLogicFunction_o *, BattleServantData_o *, _QWORD))this->klass[1]._2.genericContainerHandle)(
            this,
            ServantData,
            *(_QWORD *)&this->klass[1]._2.instance_size)
        & 1) != 0
      || BattleServantData__isLogicResultAlive(ServantData, 0)
      || BattleServantData__isGuts(ServantData, 0) )
    {
LABEL_202:
      BattleBuffData_BuffData__onState((BattleBuffData_BuffData_o *)v19, 256, 0);
    }
  }
  *(_BYTE *)(v19 + 370) = DataVals__IsEqualsTo1(dataVals_k__BackingField, 159, 0);
  *(_DWORD *)(v19 + 276) = DataVals__GetParam(dataVals_k__BackingField, 93, 0, 0);
  *(_DWORD *)(v19 + 280) = DataVals__GetParam(dataVals_k__BackingField, 94, 0, 0);
  *(_DWORD *)(v19 + 284) = DataVals__GetParam(dataVals_k__BackingField, 95, 0, 0);
  *(_BYTE *)(v19 + 288) = DataVals__GetParam(dataVals_k__BackingField, 96, 0, 0) == 1;
  *(_BYTE *)(v19 + 289) = DataVals__GetParam(dataVals_k__BackingField, 97, 0, 0) == 1;
  *(_BYTE *)(v19 + 464) = DataVals__GetParam(dataVals_k__BackingField, 219, 0, 0) == 1;
  ValsList = DataVals__GetValsList(dataVals_k__BackingField, 101, 0);
  *(_QWORD *)(v19 + 304) = ValsList;
  sub_1C6B9AC((CGThumbnailListItem_o *)(v19 + 304), (int32_t)ValsList, v130, v131);
  v132 = DataVals__GetParam(dataVals_k__BackingField, 5, 0, 0);
  if ( v132 )
    v133 = v132;
  else
    v133 = 1000;
  *(_DWORD *)(v19 + 48) = v133;
  *(_BYTE *)(v19 + 465) = DataVals__GetParam(dataVals_k__BackingField, 228, 0, 0) == 1;
  *(_BYTE *)(v19 + 480) = DataVals__GetParam(dataVals_k__BackingField, 230, 0, 0) == 1;
  *(_BYTE *)(v19 + 481) = DataVals__GetParam(dataVals_k__BackingField, 231, 0, 0) == 1;
  ParamStringFormat = DataVals__GetParamStringFormat(
                        dataVals_k__BackingField,
                        229,
                        (System_String_o *)StringLiteral_1/*""*/,
                        0);
  *(_QWORD *)(v19 + 472) = ParamStringFormat;
  sub_1C6B9AC((CGThumbnailListItem_o *)(v19 + 472), (int32_t)ParamStringFormat, v135, v136);
  *(_DWORD *)(v19 + 484) = DataVals__GetParam(dataVals_k__BackingField, 237, 0, 0);
  *(_DWORD *)(v19 + 488) = DataVals__GetParam(dataVals_k__BackingField, 239, 0, 0);
  *(_BYTE *)(v19 + 492) = DataVals__isUnaffected(dataVals_k__BackingField, 0);
  DataVals__SetUpHatePriority(dataVals_k__BackingField, (BattleBuffData_BuffData_o *)v19, 0);
  BattleBuffData_BuffData__SetJudgeUseEveryTimeFlag((BattleBuffData_BuffData_o *)v19, dataVals_k__BackingField, 0);
  if ( BattleBuffData_BuffData__IsSubstituteBuff((BattleBuffData_BuffData_o *)v19, 0) )
  {
    v137 = (BattleBuffData_SubstituteData_o *)sub_1C6BC54(BattleBuffData_SubstituteData_TypeInfo);
    BattleBuffData_SubstituteData___ctor(v137, 0);
    v138 = v19 + 504;
    *(_QWORD *)(v19 + 504) = v137;
    sub_1C6B9AC((CGThumbnailListItem_o *)(v19 + 504), (int32_t)v137, v139, v140);
    v141 = *(_QWORD *)(v19 + 504);
    this = (BattleLogicFunction_o *)DataVals__GetSubstituteRate(dataVals_k__BackingField, 0);
    if ( !v141 )
      goto LABEL_343;
    *(float *)(v141 + 16) = (float)(int)this / 1000.0;
    v142 = *(_QWORD *)v138;
    this = (BattleLogicFunction_o *)DataVals__GetSubstituteResist(dataVals_k__BackingField, 0);
    if ( !v142 )
      goto LABEL_343;
    *(float *)(v142 + 20) = (float)(int)this / 1000.0;
    v143 = *(_QWORD *)v138;
    this = (BattleLogicFunction_o *)DataVals__UseSvtResistRate(dataVals_k__BackingField, 0);
    if ( !v143 )
      goto LABEL_343;
    *(_BYTE *)(v143 + 24) = (unsigned __int8)this & 1;
    v144 = *(_QWORD *)v138;
    this = (BattleLogicFunction_o *)DataVals__UseBuffResistRate(dataVals_k__BackingField, 0);
    if ( !v144 )
      goto LABEL_343;
    *(_BYTE *)(v144 + 25) = (unsigned __int8)this & 1;
    this = (BattleLogicFunction_o *)DataVals__TryGetSubstituteSkillId(dataVals_k__BackingField, &skillId[1], 0);
    if ( ((unsigned __int8)this & 1) != 0 )
    {
      if ( !*(_QWORD *)v138 )
        goto LABEL_343;
      v145 = *(_QWORD *)(*(_QWORD *)v138 + 32LL);
      if ( !v145 )
        goto LABEL_343;
      *(_DWORD *)(v145 + 16) = skillId[1];
      *(_DWORD *)(v145 + 20) = DataVals__GetSubstituteSkillLv(dataVals_k__BackingField, 0);
    }
    this = (BattleLogicFunction_o *)DataVals__TryGetResistSkillId(dataVals_k__BackingField, skillId, 0);
    if ( ((unsigned __int8)this & 1) != 0 )
    {
      if ( !*(_QWORD *)v138 )
        goto LABEL_343;
      v146 = *(_QWORD *)(*(_QWORD *)v138 + 40LL);
      if ( !v146 )
        goto LABEL_343;
      *(_DWORD *)(v146 + 16) = skillId[0];
      this = (BattleLogicFunction_o *)DataVals__GetResistSkillLv(dataVals_k__BackingField, 0);
      *(_DWORD *)(v146 + 20) = (_DWORD)this;
    }
    if ( !*(_QWORD *)v138 )
      goto LABEL_343;
    v147 = *(_QWORD *)(*(_QWORD *)v138 + 48LL);
    this = (BattleLogicFunction_o *)DataVals__GetSubstitutePopupText(dataVals_k__BackingField, 0);
    if ( !v147 )
      goto LABEL_343;
    *(_QWORD *)(v147 + 16) = this;
    sub_1C6B9AC((CGThumbnailListItem_o *)(v147 + 16), (int32_t)this, v148, v149);
    if ( !*(_QWORD *)v138 )
      goto LABEL_343;
    v150 = *(_QWORD *)(*(_QWORD *)v138 + 48LL);
    this = (BattleLogicFunction_o *)DataVals__GetSubstitutePopupIconId(dataVals_k__BackingField, 0);
    if ( !v150 )
      goto LABEL_343;
    *(_DWORD *)(v150 + 24) = (_DWORD)this;
    if ( !*(_QWORD *)v138 )
      goto LABEL_343;
    v151 = *(_QWORD *)(*(_QWORD *)v138 + 48LL);
    this = (BattleLogicFunction_o *)DataVals__GetSubstituteEffectList(dataVals_k__BackingField, 0);
    if ( !v151 )
      goto LABEL_343;
    *(_QWORD *)(v151 + 32) = this;
    sub_1C6B9AC((CGThumbnailListItem_o *)(v151 + 32), (int32_t)this, v152, v153);
    if ( !*(_QWORD *)v138 )
      goto LABEL_343;
    v154 = *(_QWORD *)(*(_QWORD *)v138 + 56LL);
    this = (BattleLogicFunction_o *)DataVals__GetResistPopupText(dataVals_k__BackingField, 0);
    if ( !v154 )
      goto LABEL_343;
    *(_QWORD *)(v154 + 16) = this;
    sub_1C6B9AC((CGThumbnailListItem_o *)(v154 + 16), (int32_t)this, v155, v156);
    if ( !*(_QWORD *)v138 )
      goto LABEL_343;
    v157 = *(_QWORD *)(*(_QWORD *)v138 + 56LL);
    this = (BattleLogicFunction_o *)DataVals__GetResistPopupIconId(dataVals_k__BackingField, 0);
    if ( !v157 )
      goto LABEL_343;
    *(_DWORD *)(v157 + 24) = (_DWORD)this;
    if ( !*(_QWORD *)v138 )
      goto LABEL_343;
    v158 = *(_QWORD *)(*(_QWORD *)v138 + 56LL);
    this = (BattleLogicFunction_o *)DataVals__GetResistEffectList(dataVals_k__BackingField, 0);
    if ( !v158 )
      goto LABEL_343;
    *(_QWORD *)(v158 + 32) = this;
    sub_1C6B9AC((CGThumbnailListItem_o *)(v158 + 32), (int32_t)this, v159, v160);
  }
  if ( *(int *)(v19 + 60) < 1 )
    goto LABEL_238;
  v161 = (UnityEngine_Object_o *)v10->fields.logic;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(v161, 0, 0) )
  {
    this = (BattleLogicFunction_o *)v10->fields.logic;
    if ( !this )
      goto LABEL_343;
    v162 = BattleLogic__checkInField((BattleLogic_o *)this, *(_DWORD *)(v19 + 60), 0);
  }
  else
  {
LABEL_238:
    v162 = 1;
  }
  v163 = v14->fields.type;
  if ( !BuffList_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(BuffList_TypeInfo);
  if ( BuffList__CheckAccumulation(v163, 0) )
    BattleServantData__resetAccumulationDamage(ServantData, 0);
  mainAction = userCommandCodeId;
  *(_QWORD *)(v19 + 88) = userCommandCodeId;
  if ( (__int64)userCommandCodeId >= 1 )
  {
    this = (BattleLogicFunction_o *)v10->fields.data;
    if ( !this )
      goto LABEL_343;
    UserCommandCode = BattleData__getUserCommandCode((BattleData_o *)this, (int64_t)userCommandCodeId, 0);
    if ( UserCommandCode )
      *(_DWORD *)(v19 + 160) = UserCommandCode->fields.commandCodeId;
  }
  *(_QWORD *)(v19 + 348) = *(_QWORD *)&v232->fields.commandAssistId;
  ((void (__fastcall *)(BattleLogicFunctionProcess_FunctionTargetCheck_o *, __int64, const MethodInfo *))funcTarget->klass->vtable._7_ApplyPrevSaveBuffData.methodPtr)(
    funcTarget,
    v19,
    funcTarget->klass->vtable._7_ApplyPrevSaveBuffData.method);
  v165 = treasureDvcId;
  if ( ((unsigned __int8)v225 & v233->fields._IsTreasureDvc_k__BackingField) != 0 )
  {
    this = (BattleLogicFunction_o *)sub_1C6BAB0(BattleBuffData_BuffData___TypeInfo, 1);
    if ( !this )
      goto LABEL_343;
    v166 = this;
    this = (BattleLogicFunction_o *)sub_1C6BB44(v19, this->klass->_1.element_class);
    if ( !this )
      goto LABEL_345;
    if ( !LODWORD(v166->fields.logic) )
      goto LABEL_344;
    v166->fields.logictarget = (struct BattleLogicTarget_o *)v19;
    sub_1C6B9AC((CGThumbnailListItem_o *)&v166->fields.logictarget, v19, v167, v168);
    v169 = (BattleActionEffect_AddServantBuff_o *)sub_1C6BC54(BattleActionEffect_AddServantBuff_TypeInfo);
    BattleActionEffect_AddServantBuff___ctor(v169, uniqueId, (BattleBuffData_BuffData_array *)v166, 0);
    BattleActionData_BuffData__SetActionEffectProc(
      (BattleActionData_BuffData_o *)v236,
      (BattleActionEffect_Base_o *)v169,
      0);
    v232->fields.OverwriteTdMotionId = BattleServantData__getTreasureDvcMotionId(ServantData, 0);
  }
  if ( BuffEntity__checkBuffType(v14, 41, 0) )
    MaxHp = BattleServantData__getMaxHp(ServantData, 0);
  else
    MaxHp = -1;
  userCommandCodeIda = ((__int64 (__fastcall *)(BattleServantData_o *, const MethodInfo *))ServantData->klass->vtable._13_get_resultHp.methodPtr)(
                         ServantData,
                         ServantData->klass->vtable._13_get_resultHp.method);
  if ( !v162 )
    goto LABEL_261;
  v171 = v14->fields.type;
  if ( !BuffList_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(BuffList_TypeInfo);
  v172 = BuffList__CheckUpdateHp(v171, 0);
  v165 = treasureDvcId;
  if ( v172 )
  {
    v236->fields.procType = 2;
    if ( BattleServantData__isLogicResultAlive(ServantData, 0) )
    {
      v173 = 1;
    }
    else
    {
      if ( BattleServantData__isGuts(ServantData, 0) )
      {
        v175 = ServantData->fields.uniqueId;
        IsCommandSideEffect = BattleLogicFunction_ProcListInArgs__get_IsCommandSideEffect(v233, 0);
        mainAction = BattleLogicFunction__getNoEffectObject(
                       v10,
                       v175,
                       funcIndex,
                       dataVals_k__BackingField,
                       IsCommandSideEffect,
                       0,
                       0,
                       0,
                       methoda);
        this = (BattleLogicFunction_o *)v230;
        if ( !v230 )
          goto LABEL_343;
        BattleActionData__addAction(v230, mainAction, 0);
      }
      v173 = 0;
    }
    ((void (__fastcall *)(BattleLogicFunctionProcess_FunctionTargetCheck_o *, BattleActionData_MasterBuffData_o *, __int64, __int64, __int64, const MethodInfo *))funcTarget->klass->vtable._9_AddBuff.methodPtr)(
      funcTarget,
      v236,
      v19,
      1,
      v173,
      funcTarget->klass->vtable._9_AddBuff.method);
    v174 = 0;
  }
  else
  {
LABEL_261:
    ((void (__fastcall *)(BattleLogicFunctionProcess_FunctionTargetCheck_o *, BattleActionData_MasterBuffData_o *, __int64, bool, _QWORD, const MethodInfo *))funcTarget->klass->vtable._9_AddBuff.methodPtr)(
      funcTarget,
      v236,
      v19,
      v162,
      0,
      funcTarget->klass->vtable._9_AddBuff.method);
    v174 = 1;
  }
  id = v14->fields.id;
  if ( id == ConstantMaster__getValue((System_String_o *)StringLiteral_13355/*"TAMAMOCAT_STUN_BUFF_ID"*/, 0) )
  {
    v178 = (System_Collections_Generic_List_int__o *)sub_1C6BC54(System_Collections_Generic_List_int__TypeInfo);
    System_Collections_Generic_List_int____ctor(
      v178,
      (const MethodInfo_37E30FC *)Method_System_Collections_Generic_List_int___ctor__);
    v237 = 1;
    for ( i = System_Int32__ToString((int32_t)&v237, 0); ; i = System_Int32__ToString((int32_t)&v237, 0) )
    {
      v180 = System_String__Concat_63966792((System_String_o *)StringLiteral_13356/*"TAMAMOCAT_TREASURE_DEVICE_ID_"*/, i, 0);
      if ( ConstantMaster__getValue(v180, 0) == -1 )
        break;
      v181 = System_Int32__ToString((int32_t)&v237, 0);
      v182 = System_String__Concat_63966792((System_String_o *)StringLiteral_13356/*"TAMAMOCAT_TREASURE_DEVICE_ID_"*/, v181, 0);
      this = (BattleLogicFunction_o *)ConstantMaster__getValue(v182, 0);
      if ( (_DWORD)this == v165 )
      {
        if ( !v17 )
          goto LABEL_343;
        BattleServantData__SetIsSleepWaitMode(v17, 1, 0);
      }
      ++v237;
    }
  }
  this = (BattleLogicFunction_o *)v10->fields.data;
  if ( !this )
    goto LABEL_343;
  QuestIndividualities = BattleData__getQuestIndividualities((BattleData_o *)this, 0);
  v184 = (UnityEngine_Object_o *)v10->fields.logic;
  v185 = QuestIndividualities;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  this = (BattleLogicFunction_o *)UnityEngine_Object__op_Inequality(v184, 0, 0);
  v186 = v233;
  perf = 0;
  if ( ((unsigned __int8)this & 1) != 0 )
  {
    v188 = v10->fields.logic;
    if ( !v188 )
      goto LABEL_343;
    perf = v188->fields.perf;
  }
  BattleServantData__updateConditionsBuff(ServantData, v185, perf, 0, 0, 0);
  if ( (v174 & 1) == 0 )
  {
    this = (BattleLogicFunction_o *)v230;
    if ( !v230 )
      goto LABEL_343;
    BattleActionData__addReflectLogicResultServantId(v230, uniqueId, 0);
    v189 = (BattleActionEffect_AddChangeMaxHpBuff_o *)sub_1C6BC54(BattleActionEffect_AddChangeMaxHpBuff_TypeInfo);
    BattleActionEffect_AddChangeMaxHpBuff___ctor(v189, 0);
    this = (BattleLogicFunction_o *)sub_1C6BAB0(BattleBuffData_BuffData___TypeInfo, 1);
    if ( !this )
      goto LABEL_343;
    v190 = this;
    this = (BattleLogicFunction_o *)sub_1C6BB44(v19, this->klass->_1.element_class);
    if ( this )
    {
      if ( !LODWORD(v190->fields.logic) )
        goto LABEL_344;
      v190->fields.logictarget = (struct BattleLogicTarget_o *)v19;
      sub_1C6B9AC((CGThumbnailListItem_o *)&v190->fields.logictarget, v19, v191, v192);
      this = (BattleLogicFunction_o *)((__int64 (__fastcall *)(BattleServantData_o *, const MethodInfo *))ServantData->klass->vtable._13_get_resultHp.methodPtr)(
                                        ServantData,
                                        ServantData->klass->vtable._13_get_resultHp.method);
      if ( !v189 )
        goto LABEL_343;
      v193 = (BattleActionEffect_Base_o *)((__int64 (__fastcall *)(BattleActionEffect_AddChangeMaxHpBuff_o *, BattleLogicFunction_o *, _QWORD, _QWORD, const MethodInfo *))v189->klass->vtable._7_InitBuff.methodPtr)(
                                            v189,
                                            v190,
                                            uniqueId,
                                            (unsigned int)((_DWORD)this - userCommandCodeIda),
                                            v189->klass->vtable._7_InitBuff.method);
      BattleActionData_BuffData__SetActionEffectProc((BattleActionData_BuffData_o *)v236, v193, 0);
      v186 = v233;
      goto LABEL_288;
    }
LABEL_345:
    v222 = sub_1C6BC84(this);
    sub_1C6BB30(v222, 0);
  }
LABEL_288:
  if ( BuffEntity__checkBuffType(v14, 133, 0) || *(_QWORD *)(v19 + 312) )
  {
    v194 = (UnityEngine_Object_o *)v10->fields.logic;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    if ( UnityEngine_Object__op_Inequality(v194, 0, 0) )
    {
      this = (BattleLogicFunction_o *)v10->fields.logic;
      if ( !this )
        goto LABEL_343;
      BattleLogic__updateConditionsBuffAll((BattleLogic_o *)this, 0, 0, 0);
    }
    this = (BattleLogicFunction_o *)v10->fields.data;
    if ( !this )
      goto LABEL_343;
    this = (BattleLogicFunction_o *)BattleData__getFieldServantList((BattleData_o *)this, 0, 0);
    if ( !this )
      goto LABEL_343;
    v195 = (int)this->fields.logic;
    v196 = this;
    if ( v195 >= 1 )
    {
      v197 = 0;
      while ( v197 < v195 )
      {
        this = (BattleLogicFunction_o *)*((_QWORD *)&v196->fields.logictarget + (int)v197);
        if ( !this )
          goto LABEL_343;
        BattleServantData__updateBuff((BattleServantData_o *)this, 1, 1, 0);
        v195 = (int)v196->fields.logic;
        if ( (int)++v197 >= v195 )
          goto LABEL_302;
      }
LABEL_344:
      sub_1C6BC68(this);
    }
  }
LABEL_302:
  if ( BuffEntity__checkBuffType(v14, 206, 0) )
  {
    ShortenMaxCountArray = DataVals__GetShortenMaxCountArray(dataVals_k__BackingField, 0);
    *(_QWORD *)(v19 + 392) = ShortenMaxCountArray;
    sub_1C6B9AC((CGThumbnailListItem_o *)(v19 + 392), (int32_t)ShortenMaxCountArray, v199, v200);
  }
  this = (BattleLogicFunction_o *)BuffEntity__checkBuffType(v14, 208, 0);
  v201 = v230;
  if ( ((unsigned __int8)this & 1) != 0 )
  {
    TargetFunctionIndividuality = DataVals__GetTargetFunctionIndividuality(dataVals_k__BackingField, 0);
    *(_QWORD *)(v19 + 400) = TargetFunctionIndividuality;
    sub_1C6B9AC((CGThumbnailListItem_o *)(v19 + 400), (int32_t)TargetFunctionIndividuality, v203, v204);
    TargetBuffIndividuality = DataVals__GetTargetBuffIndividuality(dataVals_k__BackingField, 0);
    *(_QWORD *)(v19 + 408) = TargetBuffIndividuality;
    sub_1C6B9AC((CGThumbnailListItem_o *)(v19 + 408), (int32_t)TargetBuffIndividuality, v206, v207);
  }
  if ( (MaxHp & 0x80000000) == 0 )
  {
    this = (BattleLogicFunction_o *)BattleServantData__getMaxHp(ServantData, 0);
    if ( (int)this < MaxHp )
    {
      v208 = ServantData->fields.maxhp;
      if ( !System_Math_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(System_Math_TypeInfo);
      this = (BattleLogicFunction_o *)System_Math__Max_65488612(0, userCommandCodeIda - v208, 0);
      *(_DWORD *)(v19 + 136) = (_DWORD)this;
    }
  }
  v209 = v10->fields.data;
  if ( !v209 )
    goto LABEL_343;
  this = (BattleLogicFunction_o *)v209->fields.battleEvent;
  if ( !this )
    goto LABEL_343;
  *(_BYTE *)(v19 + 212) = (*(__int64 (__fastcall **)(BattleLogicFunction_o *, __int64, BuffEntity_o *, DataVals_o *, _QWORD))&this->klass[1]._2.thread_static_fields_offset)(
                            this,
                            v19,
                            v14,
                            dataVals_k__BackingField,
                            *(_QWORD *)&this->klass[1]._2.token)
                        & 1;
  if ( BuffEntity__checkBuffType(v14, 140, 0) )
  {
    buffData = ServantData->fields.buffData;
    v211 = (BattleBuffData_CheckIndividualitiesData_o *)sub_1C6BC54(BattleBuffData_CheckIndividualitiesData_TypeInfo);
    BattleBuffData_CheckIndividualitiesData___ctor_45921048(v211, ServantData, 0, 0, 0, 0, 0, 1, 0);
    if ( !buffData )
      goto LABEL_343;
    this = (BattleLogicFunction_o *)BattleBuffData__getBuffList_45762420(buffData, 83, v211, 1, 0, 0, 0, 0);
    if ( !this )
      goto LABEL_343;
    v201 = v230;
    if ( this->fields.logic )
      BattleLogicFunction__functionResetCommandCard(v10, (int32_t)mainAction, v212, v213, v214, v215);
  }
  if ( DataVals__IsOnParty(dataVals_k__BackingField, 0) )
    *(_DWORD *)(v19 + 272) = v231;
  v216 = BattleLogicFunction_ProcListInArgs__get_IsCommandSideEffect(v186, 0);
  v217 = (BattleActionData_BuffData_o *)((__int64 (__fastcall *)(BattleLogicFunctionProcess_FunctionTargetCheck_o *, BattleActionData_MasterBuffData_o *, __int64, FunctionEntity_o *, bool, const MethodInfo *))funcTarget->klass->vtable._12_MakeAddActionBuffData.methodPtr)(
                                          funcTarget,
                                          v236,
                                          v19,
                                          funcEnt,
                                          v216,
                                          funcTarget->klass->vtable._12_MakeAddActionBuffData.method);
  if ( DataVals__IsProgressTurnOnBoard(dataVals_k__BackingField, 0) )
    *(_BYTE *)(v19 + 368) = 1;
  if ( DataVals__GetParam(dataVals_k__BackingField, 149, 0, 0) > 0
    || BuffEntity__IsDelayRemoveExpiredOnPlayerTurn(v14, 0) )
  {
    *(_BYTE *)(v19 + 369) = 1;
  }
  BattleLogicFunction__AfterAddedBuffProcess(v10, ServantData, v14, v218);
  if ( BuffEntity__getDamageRelease(v14, 0) >= 1
    && !BattleServantData__isLogicResultAlive(ServantData, 0)
    && BattleServantData__isGuts(ServantData, 0)
    || BuffEntity__getDamageRelease(v14, 0) == -1 )
  {
    ServantData->fields.isGutsSleepRelease = 0;
  }
  this = (BattleLogicFunction_o *)BattleLogicFunction_ProcListInArgs__get_ParentActBuffData(v186, 0);
  if ( !v201 )
    goto LABEL_343;
  BattleActionData__setBuffData(v201, v217, dataVals_k__BackingField, (BattleActionData_BuffData_o *)this, 0);
  this = (BattleLogicFunction_o *)v10->fields.data;
  if ( !this )
    goto LABEL_343;
  BattleData__AddFreshBuffList((BattleData_o *)this, v217, 0);
  BattleActionData__addAction(v232, v201, 0);
  ((void (__fastcall *)(BattleLogicFunctionProcess_FunctionTargetCheck_o *, BattleActionData_o *, BattleActionData_BuffData_o *, __int64, const MethodInfo *))funcTarget->klass->vtable._10_AfterAddBuffProc.methodPtr)(
    funcTarget,
    v232,
    v217,
    v19,
    funcTarget->klass->vtable._10_AfterAddBuffProc.method);
  v219 = (UnityEngine_Object_o *)v10->fields.logic;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(v219, 0, 0)
    && BattleLogicFunction__IsSituationForceTurnProgressExecutable(
         v10,
         v17,
         dataVals_k__BackingField,
         &isEnemyTurn,
         v220) )
  {
    BattleBuffData__TurnProgressingSpecifiedBuff(
      v10->fields.logic,
      (BattleBuffData_BuffData_o *)v19,
      isEnemyTurn,
      ServantData->fields.uniqueId,
      0);
  }
  if ( DataVals__GetParam(dataVals_k__BackingField, 238, 0, 0) >= 1 )
    *(_BYTE *)(v19 + 529) = 1;
  this = (BattleLogicFunction_o *)v10->fields.logic;
  if ( !this )
LABEL_343:
    sub_1C6BC60(this, mainAction);
  BattleLogic__UpdateCondBuffValueFlag((BattleLogic_o *)this, 0);
  return (BattleBuffData_BuffData_o *)v19;
}


void BattleLogicFunction__functionBreakGaugeChange(
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
  __int64 v15; // x19
  int32_t v16; // w8
  __int64 v17; // x0
  int32_t v18; // w2
  const MethodInfo *v19; // x3
  int32_t v20; // w26
  int32_t v21; // w27
  FunctionEntity_o *funcEnt; // x28
  _BOOL8 v23; // x0
  const MethodInfo *v24; // x6
  BattleActionData_ShiftServant_o *v25; // x24
  SimpleHpData_o *v26; // x27
  int32_t MaxHp; // w0
  SimpleHpData_o *v28; // x25
  int32_t CurrentShiftPos; // w0
  EnemySimpleHpData_o *v30; // x25
  unsigned int Value; // w0
  int v32; // w0
  int v33; // w24
  int v34; // w28
  int32_t v35; // w29
  int32_t Param; // w0
  SimpleHpData_o *v37; // x26
  unsigned int v38; // w19
  unsigned int MaxShiftIconPos; // w0
  const MethodInfo *v40; // [xsp+0h] [xbp-90h]
  int v41; // [xsp+Ch] [xbp-84h]
  BattleActionData_ShiftServant_o *v42; // [xsp+10h] [xbp-80h]
  BattleActionData_o *v43; // [xsp+18h] [xbp-78h]
  BattleLogicFunction_o *v44; // [xsp+28h] [xbp-68h]

  v44 = this;
  if ( (byte_4CB93E8 & 1) == 0 )
  {
    sub_1C6BA08(&BattleActionData_TypeInfo);
    sub_1C6BA08(&EnemySimpleHpData_TypeInfo);
    sub_1C6BA08(&System_Math_TypeInfo);
    sub_1C6BA08(&BattleActionData_ShiftServant_TypeInfo);
    this = (BattleLogicFunction_o *)sub_1C6BA08(&SimpleHpData_TypeInfo);
    byte_4CB93E8 = 1;
  }
  if ( !funcUnit || !targetSvtData )
    goto LABEL_34;
  procArg_k__BackingField = funcUnit->fields._procArg_k__BackingField;
  dataVals_k__BackingField = funcUnit->fields._dataVals_k__BackingField;
  this = (BattleLogicFunction_o *)BattleServantData__isShiftServant(targetSvtData, 0);
  if ( ((unsigned __int8)this & 1) == 0 )
    goto LABEL_37;
  if ( !shiftGauge )
    goto LABEL_34;
  this = (BattleLogicFunction_o *)((__int64 (__fastcall *)(BattleActionData_BaseShiftGaugeData_o *, BattleServantData_o *, const MethodInfo *))shiftGauge->klass->vtable._8_unknown.methodPtr)(
                                    shiftGauge,
                                    targetSvtData,
                                    shiftGauge->klass->vtable._8_unknown.method);
  if ( ((unsigned __int8)this & 1) != 0 )
  {
LABEL_37:
    if ( dataVals_k__BackingField )
    {
      if ( procArg_k__BackingField )
      {
        uniqueId = targetSvtData->fields.uniqueId;
        funcIndex = dataVals_k__BackingField->fields.funcIndex;
        IsCommandSideEffect = BattleLogicFunction_ProcListInArgs__get_IsCommandSideEffect(procArg_k__BackingField, 0);
        this = (BattleLogicFunction_o *)BattleLogicFunction__getNoEffectObject(
                                          v44,
                                          uniqueId,
                                          funcIndex,
                                          dataVals_k__BackingField,
                                          IsCommandSideEffect,
                                          0,
                                          0,
                                          0,
                                          v40);
        if ( mainAction )
        {
          BattleActionData__addAction(mainAction, (BattleActionData_o *)this, 0);
          return;
        }
      }
    }
    goto LABEL_34;
  }
  v15 = sub_1C6BC54(BattleActionData_TypeInfo);
  BattleActionData___ctor((BattleActionData_o *)v15, 0);
  if ( !v15 )
    goto LABEL_34;
  v16 = targetSvtData->fields.uniqueId;
  *(_DWORD *)(v15 + 32) = v16;
  *(_DWORD *)(v15 + 36) = v16;
  v17 = ((__int64 (__fastcall *)(BattleActionData_BaseShiftGaugeData_o *, const MethodInfo *))shiftGauge->klass->vtable._7_unknown.methodPtr)(
          shiftGauge,
          shiftGauge->klass->vtable._7_unknown.method);
  *(_QWORD *)(v15 + 72) = v17;
  sub_1C6B9AC((CGThumbnailListItem_o *)(v15 + 72), v17, v18, v19);
  if ( !dataVals_k__BackingField )
    goto LABEL_34;
  if ( !procArg_k__BackingField )
    goto LABEL_34;
  v20 = dataVals_k__BackingField->fields.funcIndex;
  v21 = targetSvtData->fields.uniqueId;
  funcEnt = dataVals_k__BackingField->fields.funcEnt;
  v23 = BattleLogicFunction_ProcListInArgs__get_IsCommandSideEffect(procArg_k__BackingField, 0);
  this = (BattleLogicFunction_o *)BattleLogicFunction__getFunctionObject(
                                    (BattleLogicFunction_o *)v23,
                                    funcEnt,
                                    v21,
                                    v20,
                                    v23,
                                    0,
                                    v24);
  if ( !this )
    goto LABEL_34;
  BYTE5(this[1].fields.master) = 0;
  BattleActionData__setBuffData((BattleActionData_o *)v15, (BattleActionData_BuffData_o *)this, 0, 0, 0);
  v25 = (BattleActionData_ShiftServant_o *)sub_1C6BC54(BattleActionData_ShiftServant_TypeInfo);
  BattleActionData_ShiftServant___ctor(v25, 0, 0);
  if ( !v25 )
    goto LABEL_34;
  v43 = (BattleActionData_o *)v15;
  v42 = v25;
  BattleActionData_ShiftServant__setBeforeSvtData(v25, targetSvtData, 0);
  ((void (__fastcall *)(BattleActionData_BaseShiftGaugeData_o *, BattleServantData_o *, const MethodInfo *))shiftGauge->klass->vtable._12_Init.methodPtr)(
    shiftGauge,
    targetSvtData,
    shiftGauge->klass->vtable._12_Init.method);
  v26 = (SimpleHpData_o *)sub_1C6BC54(SimpleHpData_TypeInfo);
  SimpleHpData___ctor(v26, targetSvtData, 0);
  if ( DataVals__IsEqualsTo1(dataVals_k__BackingField, 185, 0) )
  {
    MaxHp = BattleServantData__getMaxHp(targetSvtData, 0);
    BattleServantData__setHp(targetSvtData, MaxHp, 1, 0, 0);
    v28 = (SimpleHpData_o *)sub_1C6BC54(SimpleHpData_TypeInfo);
    SimpleHpData___ctor(v28, targetSvtData, 0);
    CurrentShiftPos = BattleServantData__GetCurrentShiftPos(targetSvtData, 0);
    BattleActionData_BaseShiftGaugeData__AddHpUpDataBeforeShift(shiftGauge, CurrentShiftPos, v26, v28, 0);
    v26 = v28;
  }
  v30 = (EnemySimpleHpData_o *)sub_1C6BC54(EnemySimpleHpData_TypeInfo);
  EnemySimpleHpData___ctor(v30, targetSvtData, 0);
  Value = DataVals__GetValue(dataVals_k__BackingField, 0);
  v32 = ((__int64 (__fastcall *)(BattleActionData_BaseShiftGaugeData_o *, BattleServantData_o *, _QWORD, const MethodInfo *))shiftGauge->klass->vtable._9_unknown.methodPtr)(
          shiftGauge,
          targetSvtData,
          Value,
          shiftGauge->klass->vtable._9_unknown.method);
  v41 = v32;
  if ( v32 >= 0 )
    v33 = v32;
  else
    v33 = -v32;
  v34 = 1;
  if ( v32 < 1 )
    v35 = -1;
  else
    v35 = 1;
  while ( 1 )
  {
    if ( !System_Math_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(System_Math_TypeInfo);
    if ( v34 > v33 )
      break;
    BattleServantData__SetShiftServantChange(targetSvtData, v44->fields.data, v30, v35, 0);
    Param = DataVals__GetParam(dataVals_k__BackingField, 59, 0, 0);
    ((void (__fastcall *)(BattleActionData_BaseShiftGaugeData_o *, BattleServantData_o *, bool, const MethodInfo *))shiftGauge->klass->vtable._10_unknown.methodPtr)(
      shiftGauge,
      targetSvtData,
      Param > 0,
      shiftGauge->klass->vtable._10_unknown.method);
    v37 = (SimpleHpData_o *)sub_1C6BC54(SimpleHpData_TypeInfo);
    SimpleHpData___ctor(v37, targetSvtData, 0);
    v38 = BattleServantData__GetCurrentShiftPos(targetSvtData, 0);
    MaxShiftIconPos = BattleServantData__GetMaxShiftIconPos(targetSvtData, 0);
    ((void (__fastcall *)(BattleActionData_BaseShiftGaugeData_o *, _QWORD, _QWORD, SimpleHpData_o *, SimpleHpData_o *, const MethodInfo *))shiftGauge->klass->vtable._11_unknown.methodPtr)(
      shiftGauge,
      v38,
      MaxShiftIconPos,
      v26,
      v37,
      shiftGauge->klass->vtable._11_unknown.method);
    ++v34;
    v26 = v37;
  }
  if ( v41 )
  {
    this = (BattleLogicFunction_o *)v44->fields.logic;
    if ( !this )
      goto LABEL_34;
    BattleLogic__actEnemyPtPassiveSkill((BattleLogic_o *)this, targetSvtData->fields.uniqueId, 1, 0, 0);
  }
  BattleActionData_ShiftServant__setCheckSvtData(v42, targetSvtData, 0);
  BattleActionData__setShiftServant(v43, v42, 0);
  BattleActionData__SetShiftGauge(v43, shiftGauge, 0);
  if ( !mainAction )
LABEL_34:
    sub_1C6BC60(this, mainAction);
  BattleActionData__AddAfterActionData(mainAction, v43, 0, 0);
}


// local variable allocation has failed, the output may be wrong!
BattleActionData_o *BattleLogicFunction__functionCallServant(
        BattleLogicFunction_o *this,
        int32_t playerId,
        FunctionEntity_o *funcEnt,
        DataVals_o *baseVals,
        int32_t funcIndex,
        bool isCommandSideEffect,
        BattleLogicFunction_ProcListInArgs_o *procArg,
        const MethodInfo *method)
{
  BattleData_o *data; // x0
  BattleData_o *v15; // x26
  BattleServantData_o *v16; // x25
  BattleLogicFunction_o *FieldSpace; // x0
  BattleData_o *v18; // x25
  int32_t v19; // w25
  int32_t v20; // w23
  struct BattleData_o *v21; // x8
  struct System_Int32_array *e_entryid; // x8
  char *v23; // x8
  _DWORD *v24; // x8
  int32_t v25; // w23
  int32_t v26; // t1
  BattleServantData_o *v27; // x24
  BattleActionData_o *v28; // x22
  int32_t uniqueId; // w24
  bool isEffectSummon; // w25
  const MethodInfo *v32; // [xsp+0h] [xbp-60h]
  int32_t targetIndex; // [xsp+1Ch] [xbp-44h] BYREF

  if ( (byte_4CB93D9 & 1) == 0 )
  {
    sub_1C6BA08(&BattleActionData_TypeInfo);
    byte_4CB93D9 = 1;
  }
  data = this->fields.data;
  if ( !data )
    goto LABEL_26;
  data = (BattleData_o *)BattleData__getServantData(data, playerId, 0);
  targetIndex = -1;
  if ( !baseVals )
    goto LABEL_26;
  v15 = this->fields.data;
  v16 = (BattleServantData_o *)data;
  data = (BattleData_o *)DataVals__isCheckEnemyFieldSpace(baseVals, 0);
  if ( !v15 )
    goto LABEL_26;
  FieldSpace = (BattleLogicFunction_o *)BattleData__getFieldSpace(
                                          v15,
                                          playerId,
                                          &targetIndex,
                                          (unsigned __int8)data & 1,
                                          0);
  if ( !(_DWORD)FieldSpace )
    return BattleLogicFunction__getMissObject(
             FieldSpace,
             playerId,
             funcIndex,
             baseVals,
             isCommandSideEffect,
             0,
             0,
             0,
             v32);
  if ( playerId == -1 )
  {
    v18 = this->fields.data;
    data = (BattleData_o *)DataVals__GetValue(baseVals, 0);
    if ( !v18 )
      goto LABEL_26;
    FieldSpace = (BattleLogicFunction_o *)BattleData__GetEnemySummonId(v18, (int32_t)data, 0);
  }
  else
  {
    data = (BattleData_o *)DataVals__GetValue(baseVals, 0);
    if ( !v16 )
      goto LABEL_26;
    FieldSpace = (BattleLogicFunction_o *)BattleServantData__getSummonNpcId(v16, (int32_t)data, 0);
  }
  v19 = (int)FieldSpace;
  if ( (_DWORD)FieldSpace == -1 )
    return BattleLogicFunction__getMissObject(
             FieldSpace,
             playerId,
             funcIndex,
             baseVals,
             isCommandSideEffect,
             0,
             0,
             0,
             v32);
  data = this->fields.data;
  if ( !data )
    goto LABEL_26;
  data = (BattleData_o *)BattleData__getNextUniqueID(data, 0);
  if ( !this->fields.data )
    goto LABEL_26;
  v20 = (int)data;
  data = (BattleData_o *)BattleData__getNextNextIndex(this->fields.data, 0);
  if ( !this->fields.data )
    goto LABEL_26;
  data = (BattleData_o *)BattleData__createSummonEnemyServantData(this->fields.data, v20, (int32_t)data, v19, 0, 0, 0);
  v21 = this->fields.data;
  if ( !v21 )
    goto LABEL_26;
  e_entryid = v21->fields.e_entryid;
  if ( !e_entryid )
    goto LABEL_26;
  if ( (unsigned int)targetIndex >= LODWORD(e_entryid->max_length) )
    sub_1C6BC68(data);
  v23 = (char *)e_entryid + 4 * targetIndex;
  v26 = *((_DWORD *)v23 + 8);
  v24 = v23 + 32;
  v25 = v26;
  v27 = (BattleServantData_o *)data;
  if ( !data )
    goto LABEL_26;
  *v24 = data->fields.m_CancellationTokenSource;
  LOBYTE(data->fields.doNotSelectCommandSvtIdList) = 1;
  *(&data->fields.isCalcCritical + 5) = 1;
  BattleServantData__SetRemainActionCount((BattleServantData_o *)data, 1, 0);
  data = (BattleData_o *)this->fields.logic;
  if ( !data
    || (BattleLogic__addEnemyActPriorityList((BattleLogic_o *)data, v27, 0),
        v28 = (BattleActionData_o *)sub_1C6BC54(BattleActionData_TypeInfo),
        BattleActionData___ctor(v28, 0),
        uniqueId = v27->fields.uniqueId,
        isEffectSummon = DataVals__isEffectSummon(baseVals, 0),
        data = (BattleData_o *)DataVals__GetCallSvtEffectId(baseVals, 0),
        !v28)
    || (BattleActionData__setSummonServant(v28, uniqueId, v25, funcIndex, isEffectSummon, (int32_t)data, 0), !procArg) )
  {
LABEL_26:
    sub_1C6BC60(data, *(_QWORD *)&playerId);
  }
  procArg->fields.updateField = 1;
  return v28;
}


BattleActionData_o *BattleLogicFunction__functionChangeBg(
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
  int32_t FieldPriority; // w23
  bool v14; // w4

  if ( (byte_4CB93DC & 1) == 0 )
  {
    sub_1C6BA08(&BattleActionData_TypeInfo);
    byte_4CB93DC = 1;
  }
  v8 = (BattleActionData_o *)sub_1C6BC54(BattleActionData_TypeInfo);
  BattleActionData___ctor(v8, 0);
  if ( !v8 || (v8->fields.actorId = actionId, !baseVals) )
    sub_1C6BC60(v9, v10);
  Value = DataVals__GetValue(baseVals, 0);
  Param = DataVals__GetParam(baseVals, 4, 0, 0);
  FieldPriority = DataVals__GetFieldPriority(baseVals, 0);
  v14 = DataVals__GetParam(baseVals, 6, 0, 0) > 0;
  BattleActionData__setChangeBg(v8, Value, Param, FieldPriority, v14, 0);
  return v8;
}


// local variable allocation has failed, the output may be wrong!
BattleActionData_o *BattleLogicFunction__functionChangeServant(
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

  if ( (byte_4CB93DB & 1) == 0 )
  {
    sub_1C6BA08(&BattleActionData_TypeInfo);
    sub_1C6BA08(&BattleActionData_ShiftServant_TypeInfo);
    byte_4CB93DB = 1;
  }
  data = this->fields.data;
  if ( !data )
    goto LABEL_9;
  ServantData = BattleData__getServantData(data, targetId, 0);
  v13 = (BattleActionData_o *)sub_1C6BC54(BattleActionData_TypeInfo);
  BattleActionData___ctor(v13, 0);
  if ( !v13 )
    goto LABEL_9;
  v13->fields.actorId = actionId;
  v14 = (BattleActionData_ShiftServant_o *)sub_1C6BC54(BattleActionData_ShiftServant_TypeInfo);
  BattleActionData_ShiftServant___ctor(v14, 0, 0);
  if ( !v14
    || (BattleActionData_ShiftServant__setBeforeSvtData(v14, ServantData, 0),
        BattleActionData_ShiftServant__SetBeforeWeapon(v14, ServantData, 0),
        !ServantData)
    || (BattleServantData__setChangeServant(ServantData, this->fields.data, baseVals, 0),
        BattleActionData_ShiftServant__setCheckSvtData(v14, ServantData, 0),
        BattleActionData__setShiftServant(v13, v14, 0),
        (data = (BattleData_o *)this->fields.logic) == 0) )
  {
LABEL_9:
    sub_1C6BC60(data, *(_QWORD *)&actionId);
  }
  BattleLogic__actEnemyPtPassiveSkill((BattleLogic_o *)data, ServantData->fields.uniqueId, 0, 0, 0);
  return v13;
}


BattleActionData_o *BattleLogicFunction__functionDamage(
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

  if ( (byte_4CB93C6 & 1) == 0 )
  {
    sub_1C6BA08(&BattleActionData_TypeInfo);
    byte_4CB93C6 = 1;
  }
  v15 = (BattleActionData_o *)sub_1C6BC54(BattleActionData_TypeInfo);
  BattleActionData___ctor(v15, 0);
  data = this->fields.data;
  if ( !data )
    goto LABEL_10;
  data = (BattleData_o *)BattleData__getServantData(data, playerId, 0);
  if ( !this->fields.data )
    goto LABEL_10;
  v18 = (BattleServantData_o *)data;
  data = (BattleData_o *)BattleData__getServantData(this->fields.data, targetId, 0);
  if ( !baseVals
    || (logic = this->fields.logic,
        v20 = (BattleServantData_o *)data,
        data = (BattleData_o *)DataVals__GetValue(baseVals, 0),
        !logic)
    || (data = (BattleData_o *)BattleLogic__getFunctionDamagelist(
                                 logic,
                                 v18,
                                 v20,
                                 (int32_t)data,
                                 funcIndex,
                                 action,
                                 isSafe,
                                 0)) == 0
    || (v21 = (BattleActionData_DamageData_o *)data,
        BattleActionData_DamageData__addAttackSideEffectAction((BattleActionData_DamageData_o *)data, 80, 0),
        !v15) )
  {
LABEL_10:
    sub_1C6BC60(data, v16);
  }
  BattleActionData__SetFuncDamageData(v15, v21, baseVals, 0);
  return v15;
}


BattleActionData_o *BattleLogicFunction__functionDelayNpTurn(
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
  int32_t Value; // w0
  int32_t nexttpturn; // w28
  _BOOL8 TDTurn; // x0
  const MethodInfo *v23; // x6
  const MethodInfo *v25; // [xsp+0h] [xbp-70h]

  if ( (byte_4CB93CF & 1) == 0 )
  {
    sub_1C6BA08(&BattleActionData_TypeInfo);
    byte_4CB93CF = 1;
  }
  *absorptionCount = 0;
  v15 = (BattleActionData_o *)sub_1C6BC54(BattleActionData_TypeInfo);
  BattleActionData___ctor(v15, 0);
  data = this->fields.data;
  if ( !data )
    goto LABEL_22;
  data = (BattleData_o *)BattleData__getServantData(data, targetId, 0);
  if ( !data )
    goto LABEL_22;
  v18 = (BattleServantData_o *)data;
  if ( !BYTE3(data->fields.doNotSelectCommandSvtIdList) )
    return 0;
  if ( !BattleServantData__isLogicResultAlive((BattleServantData_o *)data, 0) && !BattleServantData__isGuts(v18, 0) )
  {
    data = (BattleData_o *)BattleServantData__isShiftableServant(v18, 0);
    if ( ((unsigned __int8)data & 1) == 0 )
    {
      v19 = this->fields.data;
      if ( !v19 )
        goto LABEL_22;
      data = (BattleData_o *)v19->fields.battleEvent;
      if ( !data )
        goto LABEL_22;
      if ( (((__int64 (__fastcall *)(BattleData_o *, BattleServantData_o *, _QWORD))data->klass[1]._2.unity_user_data)(
              data,
              v18,
              *(_QWORD *)&data->klass[1]._2.initializationExceptionGCHandle)
          & 1) == 0 )
        return 0;
    }
  }
  if ( !BattleServantData__hasTreasureDvc(v18, 0) )
    return BattleLogicFunction__getNoEffectObject(
             this,
             targetId,
             funcIndex,
             baseVals,
             isCommandSideEffect,
             0,
             0,
             0,
             v25);
  data = (BattleData_o *)BattleServantData__isTDSeraled(v18, 0);
  if ( ((unsigned __int8)data & 1) != 0 )
    return BattleLogicFunction__getNoEffectObject(
             this,
             targetId,
             funcIndex,
             baseVals,
             isCommandSideEffect,
             0,
             0,
             0,
             v25);
  if ( !baseVals )
    goto LABEL_22;
  Value = DataVals__GetValue(baseVals, 0);
  nexttpturn = v18->fields.nexttpturn;
  TDTurn = BattleServantData__updownNextTDTurn(v18, Value, 0);
  if ( !TDTurn )
    return BattleLogicFunction__getNoEffectObject(
             this,
             targetId,
             funcIndex,
             baseVals,
             isCommandSideEffect,
             0,
             0,
             0,
             v25);
  data = (BattleData_o *)BattleLogicFunction__getFunctionObject(
                           (BattleLogicFunction_o *)TDTurn,
                           funcEnt,
                           v18->fields.uniqueId,
                           funcIndex,
                           isCommandSideEffect,
                           0,
                           v23);
  if ( !data
    || (LODWORD(data->fields.rootfsm) = 5, v16 = data, *absorptionCount = v18->fields.nexttpturn - nexttpturn, !v15) )
  {
LABEL_22:
    sub_1C6BC60(data, v16);
  }
  BattleActionData__setBuffData(v15, (BattleActionData_BuffData_o *)data, baseVals, 0, 0);
  return v15;
}


BattleActionData_o *BattleLogicFunction__functionGainHp(
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
  BattleBuffData_o *buffData; // x29
  BattleBuffData_CheckIndividualitiesData_o *v24; // x20
  struct BattleData_o *v25; // x8
  char v26; // w20
  int32_t ActualRecoveryHealPoint; // w0
  float UpDownGiveHeal; // s0
  __int64 v30; // x8
  const MethodInfo *v31; // [xsp+10h] [xbp-80h]
  FunctionEntity_o *v32; // [xsp+20h] [xbp-70h]
  int32_t digit; // [xsp+2Ch] [xbp-64h] BYREF

  LODWORD(v9) = overwriteHeal;
  if ( (byte_4CB93C9 & 1) == 0 )
  {
    sub_1C6BA08(&BattleActionData_TypeInfo);
    sub_1C6BA08(&BattleBuffData_CheckIndividualitiesData_TypeInfo);
    byte_4CB93C9 = 1;
  }
  digit = 0;
  v17 = (BattleActionData_o *)sub_1C6BC54(BattleActionData_TypeInfo);
  BattleActionData___ctor(v17, 0);
  data = this->fields.data;
  if ( !data )
    goto LABEL_26;
  data = (BattleData_o *)BattleData__getServantData(data, playerId, 0);
  if ( !this->fields.data )
    goto LABEL_26;
  v20 = (BattleServantData_o *)data;
  data = (BattleData_o *)BattleData__getServantData(this->fields.data, targetId, 0);
  if ( !baseVals )
    goto LABEL_26;
  v21 = (BattleServantData_o *)data;
  baseVals->fields.isShowForcedEffect = 0;
  if ( (_DWORD)v9 == -1 )
    LODWORD(v9) = DataVals__GetValue(baseVals, 0);
  data = (BattleData_o *)DataVals__isUnaffected(baseVals, 0);
  if ( ((unsigned __int8)data & 1) != 0 )
    goto LABEL_20;
  if ( !v21 )
    goto LABEL_26;
  if ( ((int (__fastcall *)(BattleServantData_o *, const MethodInfo *))v21->klass->vtable._13_get_resultHp.methodPtr)(
         v21,
         v21->klass->vtable._13_get_resultHp.method) <= 0 )
  {
    data = (BattleData_o *)BattleServantData__isShiftableServant(v21, 0);
    if ( ((unsigned __int8)data & 1) != 0 )
      goto LABEL_19;
    v25 = this->fields.data;
    if ( v25 )
    {
      data = (BattleData_o *)v25->fields.battleEvent;
      if ( data )
      {
        data = (BattleData_o *)((__int64 (__fastcall *)(BattleData_o *, BattleServantData_o *, _QWORD))data->klass[1]._2.unity_user_data)(
                                 data,
                                 v21,
                                 *(_QWORD *)&data->klass[1]._2.initializationExceptionGCHandle);
        if ( ((unsigned __int8)data & 1) == 0 )
        {
          data = (BattleData_o *)BattleServantData__isGuts(v21, 0);
          LODWORD(v9) = 0;
          v26 = (unsigned __int8)data ^ 1;
          goto LABEL_21;
        }
        goto LABEL_19;
      }
    }
    goto LABEL_26;
  }
  data = (BattleData_o *)BattleServantData__isShiftReady(v21, 0);
  if ( ((unsigned __int8)data & 1) != 0 )
  {
LABEL_19:
    LODWORD(v9) = 0;
LABEL_20:
    v26 = 0;
    goto LABEL_21;
  }
  v32 = funcEnt;
  buffData = v21->fields.buffData;
  v24 = (BattleBuffData_CheckIndividualitiesData_o *)sub_1C6BC54(BattleBuffData_CheckIndividualitiesData_TypeInfo);
  BattleBuffData_CheckIndividualitiesData___ctor_45921048(v24, v21, 0, 0, 0, 0, 0, 1, 0);
  if ( !buffData )
LABEL_26:
    sub_1C6BC60(data, v18);
  if ( BattleBuffData__isTurnBuff(buffData, 42, v24, 1, 0) )
  {
    data = (BattleData_o *)DataVals__SetInvalidCauseByAnyBuff(baseVals, targetId, 0);
    funcEnt = v32;
    goto LABEL_19;
  }
  if ( v20 )
  {
    UpDownGiveHeal = BattleServantData__getUpDownGiveHeal(v20, v21, 0);
    LODWORD(v9) = BattleUtility__FloorToInt(UpDownGiveHeal * (float)(int)v9, 0);
  }
  funcEnt = v32;
  digit = 1;
  data = (BattleData_o *)BattleServantData__getUpDownHeal(v21, &digit, 0);
  v30 = digit;
  v26 = 0;
  baseVals->fields.isShowForcedEffect = 1;
  v9 = (int)data * (__int64)(int)v9 / v30;
LABEL_21:
  ActualRecoveryHealPoint = BattleLogicFunction__GetActualRecoveryHealPoint(
                              (BattleLogicFunction_o *)data,
                              baseVals,
                              v21,
                              v9,
                              v22);
  BattleLogicFunction__SetGainHpBuff(
    this,
    v17,
    ActualRecoveryHealPoint,
    funcIndex,
    v21,
    funcEnt,
    baseVals,
    isCommandSideEffect,
    v26 & 1,
    0,
    v31);
  return v17;
}


BattleActionData_o *BattleLogicFunction__functionGainHpFromTargets(
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
  BattleActionData_o *NoEffectObject; // x1
  __int64 v61; // x8
  __int64 v62; // x9
  int *v63; // x10
  __int64 v64; // x0
  int32_t v65; // w20
  FunctionEntity_o *v66; // x22
  int32_t v67; // w21
  int32_t targetId_k__BackingField; // w23
  bool v69; // w0
  const MethodInfo *overwriteLossHp; // [xsp+0h] [xbp-E0h]
  const MethodInfo *v72; // [xsp+18h] [xbp-C8h]
  DataVals_o *dataVals_k__BackingField; // [xsp+20h] [xbp-C0h]
  BattleLogicFunction_o *v75; // [xsp+38h] [xbp-A8h]
  unsigned int v76; // [xsp+40h] [xbp-A0h]
  int32_t v77; // [xsp+44h] [xbp-9Ch]
  BattleActionData_o *v78; // [xsp+48h] [xbp-98h]
  bool v79; // [xsp+54h] [xbp-8Ch]
  BattleLogicFunction_ProcListInArgs_o *v80; // [xsp+58h] [xbp-88h]
  BattleLogicFunction_o *v81; // [xsp+60h] [xbp-80h]
  System_Enum_o v82; // [xsp+68h] [xbp-78h] BYREF
  int32_t funcType; // [xsp+78h] [xbp-68h]

  v6 = procArg;
  v81 = this;
  if ( (byte_4CB93E5 & 1) == 0 )
  {
    sub_1C6BA08(&BattleActionData_TypeInfo);
    sub_1C6BA08(&System_IDisposable_TypeInfo);
    sub_1C6BA08(&System_Collections_Generic_IEnumerable_BattleLogicFunctionProcess_FunctionTargetCheck__TypeInfo);
    sub_1C6BA08(&System_Collections_Generic_IEnumerator_BattleLogicFunctionProcess_FunctionTargetCheck__TypeInfo);
    sub_1C6BA08(&System_Collections_IEnumerator_TypeInfo);
    sub_1C6BA08(&Method_System_Collections_Generic_List_FuncList_TYPE__Add__);
    sub_1C6BA08(&Method_System_Collections_Generic_List_FuncList_TYPE___ctor__);
    sub_1C6BA08(&System_Collections_Generic_List_FuncList_TYPE__TypeInfo);
    sub_1C6BA08(&FuncList_TYPE_TypeInfo);
    this = (BattleLogicFunction_o *)sub_1C6BA08(&StringLiteral_16320/*"_SAFE"*/);
    byte_4CB93E5 = 1;
  }
  if ( !funcTarget )
    goto LABEL_88;
  funcUnit_k__BackingField = funcTarget->fields._funcUnit_k__BackingField;
  if ( !funcUnit_k__BackingField )
    goto LABEL_88;
  dataVals_k__BackingField = funcUnit_k__BackingField->fields._dataVals_k__BackingField;
  v78 = (BattleActionData_o *)sub_1C6BC54(BattleActionData_TypeInfo);
  BattleActionData___ctor(v78, 0);
  v8 = (System_Collections_Generic_List_T__o *)sub_1C6BC54(System_Collections_Generic_List_FuncList_TYPE__TypeInfo);
  System_Collections_Generic_List_Int32Enum____ctor(
    v8,
    (const MethodInfo_37E5928 *)Method_System_Collections_Generic_List_FuncList_TYPE___ctor__);
  if ( !v8 )
    goto LABEL_88;
  items = v8->fields._items;
  v10 = Method_System_Collections_Generic_List_FuncList_TYPE__Add__;
  ++v8->fields._version;
  if ( !items )
    goto LABEL_88;
  size = v8->fields._size;
  if ( (unsigned int)size >= LODWORD(items->max_length) )
  {
    System_Collections_Generic_List_Int32Enum___AddWithResize(
      v8,
      12,
      *(const MethodInfo_37E617C **)(*(_QWORD *)(v10[4] + 192LL) + 112LL));
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
  if ( (unsigned int)v12 >= LODWORD(items->max_length) )
  {
    System_Collections_Generic_List_Int32Enum___AddWithResize(
      v8,
      25,
      *(const MethodInfo_37E617C **)(*(_QWORD *)(v10[4] + 192LL) + 112LL));
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
  if ( (unsigned int)v13 >= LODWORD(items->max_length) )
  {
    System_Collections_Generic_List_Int32Enum___AddWithResize(
      v8,
      50,
      *(const MethodInfo_37E617C **)(*(_QWORD *)(v10[4] + 192LL) + 112LL));
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
  if ( (unsigned int)v14 >= LODWORD(items->max_length) )
  {
    System_Collections_Generic_List_Int32Enum___AddWithResize(
      v8,
      51,
      *(const MethodInfo_37E617C **)(*(_QWORD *)(v10[4] + 192LL) + 112LL));
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
                                    0);
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
  v80 = v6;
  v75 = this;
  do
  {
    if ( v16 >= logic )
      sub_1C6BC68(this);
    v18 = (DataVals_o *)*((_QWORD *)&this->fields.logictarget + (int)v16);
    if ( !v18 )
      goto LABEL_88;
    v82.klass = (System_Enum_c *)FuncList_TYPE_TypeInfo;
    v82.monitor = (void *)-1LL;
    funcType = v18->fields.funcType;
    this = (BattleLogicFunction_o *)System_Enum__ToString(&v82, 0);
    if ( !this )
      goto LABEL_88;
    v79 = System_String__Contains((System_String_o *)this, (System_String_o *)StringLiteral_16320/*"_SAFE"*/, 0);
    this = (BattleLogicFunction_o *)BattleLogicFunction__GetDependFuncTargets(v81, v6, mainAction, v18, v19);
    if ( !this )
      goto LABEL_88;
    klass = this->klass;
    v21 = this;
    v22 = *(unsigned __int16 *)&this->klass->_2.rank;
    v76 = v16;
    if ( *(_WORD *)&this->klass->_2.rank )
    {
      p_offset = &klass->_1.interfaceOffsets->offset;
      while ( *((System_Collections_Generic_IEnumerable_BattleLogicFunctionProcess_FunctionTargetCheck__c **)p_offset - 1) != System_Collections_Generic_IEnumerable_BattleLogicFunctionProcess_FunctionTargetCheck__TypeInfo )
      {
        --v22;
        p_offset += 4;
        if ( !v22 )
          goto LABEL_31;
      }
      v24 = (__int64)&klass->vtable + 16 * *p_offset;
    }
    else
    {
LABEL_31:
      v24 = sub_1C41D90(
              this,
              System_Collections_Generic_IEnumerable_BattleLogicFunctionProcess_FunctionTargetCheck__TypeInfo,
              0);
    }
    v26 = (*(__int64 (__fastcall **)(BattleLogicFunction_o *, _QWORD))v24)(v21, *(_QWORD *)(v24 + 8));
    if ( !v26 )
      sub_1C6BC60(0, v25);
    v77 = v17;
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
        v30 = sub_1C41D90(v26, System_Collections_IEnumerator_TypeInfo, 0);
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
        v34 = sub_1C41D90(
                v26,
                System_Collections_Generic_IEnumerator_BattleLogicFunctionProcess_FunctionTargetCheck__TypeInfo,
                0);
      }
      v35 = (*(__int64 (__fastcall **)(__int64, _QWORD))v34)(v26, *(_QWORD *)(v34 + 8));
      v37 = v35;
      if ( !v35 )
        sub_1C6BC60(0, v36);
      if ( ((*(__int64 (__fastcall **)(__int64, BattleActionData_o *, _QWORD))(*(_QWORD *)v35 + 408LL))(
              v35,
              mainAction,
              *(_QWORD *)(*(_QWORD *)v35 + 416LL))
          & 1) != 0 )
      {
        data = v81->fields.data;
        if ( !data )
          sub_1C6BC60(0, v38);
        v40 = *(_DWORD *)(v37 + 32);
        ServantData = BattleData__getServantData(data, v40, 0);
        v43 = ServantData;
        if ( !ServantData )
          sub_1C6BC60(0, v42);
        Value = (BattleLogicFunction_o *)((__int64 (__fastcall *)(BattleServantData_o *, const MethodInfo *))ServantData->klass->vtable._13_get_resultHp.methodPtr)(
                                           ServantData,
                                           ServantData->klass->vtable._13_get_resultHp.method);
        v47 = (int)Value;
        if ( (int)Value >= 1 )
        {
          v48 = v18->fields.funcType;
          if ( v48 == 12 || v48 == 25 )
          {
            Value = (BattleLogicFunction_o *)DataVals__GetValue(v18, 0);
            v49 = (int)Value;
          }
          else
          {
            if ( (v48 & 0xFFFFFFFE) == 0x32 )
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
            sub_1C6BC60(Value, v45);
          if ( !v80 )
            sub_1C6BC60(0, v45);
          actorId = mainAction->fields.actorId;
          funcEnt = v18->fields.funcEnt;
          funcIndex = v18->fields.funcIndex;
          IsCommandSideEffect = BattleLogicFunction_ProcListInArgs__get_IsCommandSideEffect(v80, 0);
          v55 = BattleLogicFunction__functionlossHp(
                  v81,
                  actorId,
                  v40,
                  funcEnt,
                  v18,
                  funcIndex,
                  v79,
                  IsCommandSideEffect,
                  v49,
                  isRandomDamage,
                  0,
                  v72);
          v57 = v47
              - ((__int64 (__fastcall *)(BattleServantData_o *, const MethodInfo *))v43->klass->vtable._13_get_resultHp.methodPtr)(
                  v43,
                  v43->klass->vtable._13_get_resultHp.method);
          if ( v57 >= 1 )
          {
            if ( !v78 )
              sub_1C6BC60(0, v56);
            BattleActionData__addAction(v78, v55, 0);
            v77 += v57;
          }
          else
          {
            v58 = v18->fields.funcIndex;
            v59 = BattleLogicFunction_ProcListInArgs__get_IsCommandSideEffect(v80, 0);
            NoEffectObject = BattleLogicFunction__getNoEffectObject(v81, v40, v58, v18, v59, 0, 0, 0, overwriteLossHp);
            if ( !v78 )
              sub_1C6BC60(0, NoEffectObject);
            BattleActionData__addAction(v78, NoEffectObject, 0);
          }
        }
      }
    }
    v17 = v77;
    v61 = *(_QWORD *)v26;
    v62 = *(unsigned __int16 *)(*(_QWORD *)v26 + 302LL);
    if ( *(_WORD *)(*(_QWORD *)v26 + 302LL) )
    {
      v63 = (int *)(*(_QWORD *)(v61 + 176) + 8LL);
      while ( *((System_IDisposable_c **)v63 - 1) != System_IDisposable_TypeInfo )
      {
        --v62;
        v63 += 4;
        if ( !v62 )
          goto LABEL_71;
      }
      v64 = v61 + 16LL * *v63 + 312;
    }
    else
    {
LABEL_71:
      v64 = sub_1C41D90(v26, System_IDisposable_TypeInfo, 0);
    }
    (*(void (__fastcall **)(__int64, _QWORD))v64)(v26, *(_QWORD *)(v64 + 8));
    v6 = v80;
    this = v75;
    logic = (int)v75->fields.logic;
    v16 = v76 + 1;
  }
  while ( (int)(v76 + 1) < logic );
LABEL_84:
  if ( !mainAction
    || !v6
    || (v65 = dataVals_k__BackingField->fields.funcIndex,
        v66 = dataVals_k__BackingField->fields.funcEnt,
        v67 = mainAction->fields.actorId,
        targetId_k__BackingField = funcTarget->fields._targetId_k__BackingField,
        v69 = BattleLogicFunction_ProcListInArgs__get_IsCommandSideEffect(v6, 0),
        procArg = (BattleLogicFunction_ProcListInArgs_o *)BattleLogicFunction__functionGainHp(
                                                            v81,
                                                            v67,
                                                            targetId_k__BackingField,
                                                            v66,
                                                            dataVals_k__BackingField,
                                                            v65,
                                                            v69,
                                                            v17,
                                                            overwriteLossHp),
        (this = (BattleLogicFunction_o *)v78) == 0) )
  {
LABEL_88:
    sub_1C6BC60(this, procArg);
  }
  BattleActionData__addAction(v78, (BattleActionData_o *)procArg, 0);
  return v78;
}


BattleActionData_o *BattleLogicFunction__functionGainHpPer(
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
  int32_t v23; // w3
  BattleBuffData_o *buffData; // x29
  BattleBuffData_CheckIndividualitiesData_o *v25; // x20
  struct BattleData_o *v26; // x8
  int32_t ActualRecoveryHealPoint; // w0
  float UpDownGiveHeal; // s0
  int32_t UpDownHeal; // w0
  __int64 v31; // x27
  const MethodInfo *v32; // [xsp+10h] [xbp-80h]
  FunctionEntity_o *v33; // [xsp+20h] [xbp-70h]
  int32_t digit; // [xsp+2Ch] [xbp-64h] BYREF

  if ( (byte_4CB93CA & 1) == 0 )
  {
    sub_1C6BA08(&BattleActionData_TypeInfo);
    sub_1C6BA08(&BattleBuffData_CheckIndividualitiesData_TypeInfo);
    byte_4CB93CA = 1;
  }
  digit = 0;
  v15 = (BattleActionData_o *)sub_1C6BC54(BattleActionData_TypeInfo);
  BattleActionData___ctor(v15, 0);
  data = this->fields.data;
  if ( !data )
    goto LABEL_24;
  data = (BattleData_o *)BattleData__getServantData(data, playerId, 0);
  if ( !this->fields.data )
    goto LABEL_24;
  v18 = (BattleServantData_o *)data;
  data = (BattleData_o *)BattleData__getServantData(this->fields.data, targetId, 0);
  if ( !baseVals )
    goto LABEL_24;
  v19 = (BattleServantData_o *)data;
  baseVals->fields.isShowForcedEffect = 0;
  Value = DataVals__GetValue(baseVals, 0);
  data = (BattleData_o *)DataVals__isUnaffected(baseVals, 0);
  if ( !v19 )
    goto LABEL_24;
  if ( ((unsigned __int8)data & 1) != 0 )
  {
    data = (BattleData_o *)BattleServantData__getMaxHp(v19, 0);
    v22 = 0;
    v23 = (int)data * Value / 1000;
    goto LABEL_19;
  }
  if ( ((int (__fastcall *)(BattleServantData_o *, const MethodInfo *))v19->klass->vtable._13_get_resultHp.methodPtr)(
         v19,
         v19->klass->vtable._13_get_resultHp.method) <= 0 )
  {
    data = (BattleData_o *)BattleServantData__isShiftableServant(v19, 0);
    if ( ((unsigned __int8)data & 1) != 0 )
      goto LABEL_18;
    v26 = this->fields.data;
    if ( v26 )
    {
      data = (BattleData_o *)v26->fields.battleEvent;
      if ( data )
      {
        data = (BattleData_o *)((__int64 (__fastcall *)(BattleData_o *, BattleServantData_o *, _QWORD))data->klass[1]._2.unity_user_data)(
                                 data,
                                 v19,
                                 *(_QWORD *)&data->klass[1]._2.initializationExceptionGCHandle);
        if ( ((unsigned __int8)data & 1) == 0 )
        {
          data = (BattleData_o *)BattleServantData__isGuts(v19, 0);
          v23 = 0;
          v22 = (unsigned __int8)data ^ 1;
          goto LABEL_19;
        }
        goto LABEL_18;
      }
    }
    goto LABEL_24;
  }
  data = (BattleData_o *)BattleServantData__isShiftReady(v19, 0);
  if ( ((unsigned __int8)data & 1) != 0 )
  {
LABEL_18:
    v23 = 0;
    v22 = 0;
    goto LABEL_19;
  }
  v33 = funcEnt;
  buffData = v19->fields.buffData;
  v25 = (BattleBuffData_CheckIndividualitiesData_o *)sub_1C6BC54(BattleBuffData_CheckIndividualitiesData_TypeInfo);
  BattleBuffData_CheckIndividualitiesData___ctor_45921048(v25, v19, 0, 0, 0, 0, 0, 1, 0);
  if ( !buffData )
LABEL_24:
    sub_1C6BC60(data, v16);
  if ( BattleBuffData__isTurnBuff(buffData, 42, v25, 1, 0) )
  {
    data = (BattleData_o *)DataVals__SetInvalidCauseByAnyBuff(baseVals, targetId, 0);
    funcEnt = v33;
    goto LABEL_18;
  }
  if ( v18 )
  {
    UpDownGiveHeal = BattleServantData__getUpDownGiveHeal(v18, v19, 0);
    Value = BattleUtility__FloorToInt(UpDownGiveHeal * (float)Value, 0);
  }
  funcEnt = v33;
  digit = 1;
  UpDownHeal = BattleServantData__getUpDownHeal(v19, &digit, 0);
  v31 = UpDownHeal * (__int64)Value / digit;
  data = (BattleData_o *)BattleServantData__getMaxHp(v19, 0);
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
    0,
    v32);
  return v15;
}


BattleActionData_o *BattleLogicFunction__functionGainNp(
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
  bool v25; // w0
  const MethodInfo *v26; // [xsp+0h] [xbp-50h]

  if ( (byte_4CB93E4 & 1) == 0 )
  {
    sub_1C6BA08(&BattleActionData_TypeInfo);
    byte_4CB93E4 = 1;
  }
  data = this->fields.data;
  if ( !data )
    goto LABEL_18;
  data = (BattleData_o *)BattleData__getServantData(data, targetId, 0);
  if ( !data )
    goto LABEL_18;
  v13 = (BattleServantData_o *)data;
  v14 = 0;
  if ( !BattleServantData__checkPlayer((BattleServantData_o *)data, 0) )
    return v14;
  v14 = (BattleActionData_o *)sub_1C6BC54(BattleActionData_TypeInfo);
  BattleActionData___ctor(v14, 0);
  if ( !baseVals )
LABEL_18:
    sub_1C6BC60(data, procArg);
  data = (BattleData_o *)DataVals__isUnaffected(baseVals, 0);
  if ( ((unsigned __int8)data & 1) == 0 )
  {
    data = (BattleData_o *)BattleServantData__getCorrectedValueFuncGainNp(v13, value, 0);
    value = (int)data;
  }
  if ( value >= 1 )
  {
    data = (BattleData_o *)BattleServantData__isGainNp(v13, 1, baseVals, 0);
    if ( ((unsigned __int8)data & 1) != 0 )
    {
      data = (BattleData_o *)BattleServantData__addNp(v13, value, 0, 0);
      if ( procArg )
      {
        funcIndex = baseVals->fields.funcIndex;
        uniqueId = v13->fields.uniqueId;
        funcEnt = baseVals->fields.funcEnt;
        v18 = (int)data;
        IsCommandSideEffect = BattleLogicFunction_ProcListInArgs__get_IsCommandSideEffect(procArg, 0);
        data = (BattleData_o *)BattleLogicFunction__getFunctionObject(
                                 (BattleLogicFunction_o *)IsCommandSideEffect,
                                 funcEnt,
                                 uniqueId,
                                 funcIndex,
                                 IsCommandSideEffect,
                                 0,
                                 v20);
        if ( data )
        {
          v21 = (BattleActionData_BuffData_o *)data;
          LODWORD(data->fields.rootfsm) = 3;
          BattleActionData_BuffData__setSaveNp((BattleActionData_BuffData_o *)data, v18, 0);
          if ( v14 )
          {
            BattleActionData__setBuffData(v14, v21, baseVals, 0, 0);
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
  v25 = BattleLogicFunction_ProcListInArgs__get_IsCommandSideEffect(procArg, 0);
  return BattleLogicFunction__getNoEffectObject(this, v24, v23, baseVals, v25, 0, 0, 0, v26);
}


BattleActionData_o *BattleLogicFunction__functionGainNpFromTargets(
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
  if ( (byte_4CB93E2 & 1) == 0 )
  {
    sub_1C6BA08(&BattleActionData_TypeInfo);
    sub_1C6BA08(&NpGaugeAbsorbResult_TypeInfo);
    this = (BattleLogicFunction_o *)sub_1C6BA08(&NpTurnToPointConvert_TypeInfo);
    byte_4CB93E2 = 1;
  }
  if ( !funcTarget )
    goto LABEL_12;
  funcUnit_k__BackingField = funcTarget->fields._funcUnit_k__BackingField;
  if ( !funcUnit_k__BackingField )
    goto LABEL_12;
  dataVals_k__BackingField = funcUnit_k__BackingField->fields._dataVals_k__BackingField;
  v11 = (BattleActionData_o *)sub_1C6BC54(BattleActionData_TypeInfo);
  BattleActionData___ctor(v11, 0);
  v12 = (NpTurnToPointConvert_o *)sub_1C6BC54(NpTurnToPointConvert_TypeInfo);
  NpTurnToPointConvert___ctor(v12, 0);
  v13 = (NpGaugeAbsorbResult_o *)sub_1C6BC54(NpGaugeAbsorbResult_TypeInfo);
  NpGaugeAbsorbResult___ctor(v13, (BaseNpGaugeConvert_o *)v12, 0);
  this = (BattleLogicFunction_o *)BattleLogicFunction__AbsorbNpPoint(v8, mainAction, funcTarget, v13, v14);
  if ( !v11
    || (BattleActionData__addAction(v11, (BattleActionData_o *)this, 0),
        v16 = BattleLogicFunction__AbsorbNpTurn(v8, mainAction, funcTarget, v13, v15),
        BattleActionData__addAction(v11, v16, 0),
        !mainAction)
    || !v13 )
  {
LABEL_12:
    sub_1C6BC60(this, procArg);
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
  BattleActionData__addAction(v11, v21, 0);
  return v11;
}


BattleActionData_o *BattleLogicFunction__functionHastenNpTurn(
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
  int32_t Value; // w0
  int32_t v21; // w28
  _BOOL8 isGainNp; // x0
  const MethodInfo *v23; // x6
  const MethodInfo *v24; // [xsp+0h] [xbp-70h]

  if ( (byte_4CB93CE & 1) == 0 )
  {
    sub_1C6BA08(&BattleActionData_TypeInfo);
    byte_4CB93CE = 1;
  }
  v15 = (BattleActionData_o *)sub_1C6BC54(BattleActionData_TypeInfo);
  BattleActionData___ctor(v15, 0);
  data = this->fields.data;
  if ( !data )
    goto LABEL_21;
  data = (BattleData_o *)BattleData__getServantData(data, targetId, 0);
  if ( !data )
    goto LABEL_21;
  v18 = (BattleServantData_o *)data;
  if ( BYTE3(data->fields.doNotSelectCommandSvtIdList) )
  {
    if ( !BattleServantData__hasTreasureDvc((BattleServantData_o *)data, 0) )
      return BattleLogicFunction__getNoEffectObject(
               this,
               targetId,
               funcIndex,
               baseVals,
               isCommandSideEffect,
               0,
               0,
               0,
               v24);
    data = (BattleData_o *)BattleServantData__isTDSeraled(v18, 0);
    if ( ((unsigned __int8)data & 1) != 0 )
      return BattleLogicFunction__getNoEffectObject(
               this,
               targetId,
               funcIndex,
               baseVals,
               isCommandSideEffect,
               0,
               0,
               0,
               v24);
    if ( !baseVals )
      goto LABEL_21;
    Value = DataVals__GetValue(baseVals, 0);
    if ( absorptionCount < 0 )
    {
      v21 = Value;
      isGainNp = BattleServantData__isGainNp(v18, 1, 0, 0);
      absorptionCount = v21;
      if ( !isGainNp )
      {
LABEL_18:
        data = (BattleData_o *)BattleLogicFunction__getFunctionObject(
                                 (BattleLogicFunction_o *)isGainNp,
                                 funcEnt,
                                 v18->fields.uniqueId,
                                 funcIndex,
                                 isCommandSideEffect,
                                 0,
                                 v23);
        if ( data )
        {
          v16 = data;
          LODWORD(data->fields.rootfsm) = 5;
          if ( v15 )
          {
            BattleActionData__setBuffData(v15, (BattleActionData_BuffData_o *)data, baseVals, 0, 0);
            return v15;
          }
        }
LABEL_21:
        sub_1C6BC60(data, v16);
      }
    }
    else if ( !absorptionCount || !BattleServantData__isGainNp(v18, 1, baseVals, 0) )
    {
      return BattleLogicFunction__getNoEffectObject(
               this,
               targetId,
               funcIndex,
               baseVals,
               isCommandSideEffect,
               0,
               0,
               0,
               v24);
    }
    isGainNp = BattleServantData__updownNextTDTurn(v18, -absorptionCount, 0);
    goto LABEL_18;
  }
  return 0;
}


BattleActionData_o *BattleLogicFunction__functionInstantDeath(
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
  BattleActionData_o *v16; // x22
  BattleData_o *v17; // x1
  BattleData_o *data; // x0
  BattleServantData_o *v19; // x28
  BattleServantData_o *v20; // x29
  unsigned int v21; // w0
  int32_t v22; // w19
  bool IsOpponentPTUniqueID; // w0
  System_Int32_array *v24; // x19
  int32_t v25; // w0
  const MethodInfo *v26; // x6
  struct BattleData_o *v27; // x8
  int32_t uniqueId; // w2

  if ( (byte_4CB93CD & 1) == 0 )
  {
    sub_1C6BA08(&BattleActionData_TypeInfo);
    byte_4CB93CD = 1;
  }
  v16 = (BattleActionData_o *)sub_1C6BC54(BattleActionData_TypeInfo);
  BattleActionData___ctor(v16, 0);
  data = this->fields.data;
  if ( !data )
    goto LABEL_16;
  data = (BattleData_o *)BattleData__getServantData(data, targetId, 0);
  if ( !this->fields.data )
    goto LABEL_16;
  v19 = (BattleServantData_o *)data;
  data = (BattleData_o *)BattleData__getServantData(this->fields.data, playerId, 0);
  if ( !v19 )
    goto LABEL_16;
  v20 = (BattleServantData_o *)data;
  v21 = ((__int64 (__fastcall *)(BattleServantData_o *, const MethodInfo *))v19->klass->vtable._9_get_hp.methodPtr)(
          v19,
          v19->klass->vtable._9_get_hp.method);
  ((void (__fastcall *)(BattleServantData_o *, _QWORD, const MethodInfo *))v19->klass->vtable._12_set_reducedhp.methodPtr)(
    v19,
    v21,
    v19->klass->vtable._12_set_reducedhp.method);
  data = (BattleData_o *)this->fields.logic;
  if ( !data )
    goto LABEL_16;
  data = (BattleData_o *)BattleLogic__getWave((BattleLogic_o *)data, 0);
  if ( !this->fields.data )
    goto LABEL_16;
  v22 = (int)data;
  IsOpponentPTUniqueID = BattleData__IsOpponentPTUniqueID(this->fields.data, targetId, playerId, 0);
  BattleServantData__setActionHistory(v19, playerId, 4, v22, IsOpponentPTUniqueID, 0);
  if ( !funcUnit )
    goto LABEL_16;
  v24 = BattleLogicFunctionProcess_FunctionUnitCheck__get_FuncIndividuality(funcUnit, 0);
  v25 = ((__int64 (__fastcall *)(BattleServantData_o *, const MethodInfo *))v19->klass->vtable._13_get_resultHp.methodPtr)(
          v19,
          v19->klass->vtable._13_get_resultHp.method);
  BattleServantData__ResultDamage(v19, v25, v20, 0, v24, 0, 0);
  v27 = this->fields.data;
  if ( !v27 )
    goto LABEL_16;
  uniqueId = v19->fields.uniqueId;
  v19->fields.deadTurn = v27->fields.typeTurn;
  data = (BattleData_o *)BattleLogicFunction__getFunctionObject(
                           (BattleLogicFunction_o *)data,
                           funcEnt,
                           uniqueId,
                           funcIndex,
                           isCommandSideEffect,
                           0,
                           v26);
  if ( !data )
    goto LABEL_16;
  v17 = data;
  LODWORD(data->fields.rootfsm) = 1;
  if ( playerId == targetId || isNoAccumulation )
    BYTE5(data->fields.battle_info) = 1;
  if ( !v16 )
LABEL_16:
    sub_1C6BC60(data, v17);
  BattleActionData__setBuffData(v16, (BattleActionData_BuffData_o *)data, baseVals, 0, 0);
  return v16;
}


BattleActionData_o *BattleLogicFunction__functionLossNp(
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
  int32_t v23; // w24
  int32_t funcIndex; // w21
  int32_t uniqueId; // w22
  FunctionEntity_o *funcEnt; // x25
  _BOOL8 IsCommandSideEffect; // x0
  const MethodInfo *v28; // x6
  BattleActionData_BuffData_o *v29; // x20

  if ( (byte_4CB93E3 & 1) == 0 )
  {
    sub_1C6BA08(&BattleActionData_TypeInfo);
    sub_1C6BA08(&BattleDataDefine_TypeInfo);
    byte_4CB93E3 = 1;
  }
  *diffNp = 0;
  data = this->fields.data;
  if ( !data )
    goto LABEL_20;
  data = (BattleData_o *)BattleData__getServantData(data, targetId, 0);
  if ( !data )
    goto LABEL_20;
  v13 = (BattleServantData_o *)data;
  v14 = 0;
  if ( BattleServantData__checkPlayer((BattleServantData_o *)data, 0) )
  {
    data = (BattleData_o *)BattleServantData__isLogicResultAlive(v13, 0);
    if ( ((unsigned __int8)data & 1) != 0
      || (data = (BattleData_o *)BattleServantData__isGuts(v13, 0), v14 = 0, ((unsigned __int8)data & 1) != 0) )
    {
      if ( baseVals )
      {
        np = v13->fields.np;
        Value = DataVals__GetValue(baseVals, 0);
        v17 = BattleServantData__addNp(v13, -Value, 0, 0);
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
          BattleServantData__addNp(v13, v23, 0, 0);
          *diffNp -= v23;
        }
        v14 = (BattleActionData_o *)sub_1C6BC54(BattleActionData_TypeInfo);
        BattleActionData___ctor(v14, 0);
        if ( procArg )
        {
          funcIndex = baseVals->fields.funcIndex;
          uniqueId = v13->fields.uniqueId;
          funcEnt = baseVals->fields.funcEnt;
          IsCommandSideEffect = BattleLogicFunction_ProcListInArgs__get_IsCommandSideEffect(procArg, 0);
          data = (BattleData_o *)BattleLogicFunction__getFunctionObject(
                                   (BattleLogicFunction_o *)IsCommandSideEffect,
                                   funcEnt,
                                   uniqueId,
                                   funcIndex,
                                   IsCommandSideEffect,
                                   0,
                                   v28);
          if ( data )
          {
            v29 = (BattleActionData_BuffData_o *)data;
            LODWORD(data->fields.rootfsm) = 3;
            BattleActionData_BuffData__setSaveNp((BattleActionData_BuffData_o *)data, v19, 0);
            if ( v14 )
            {
              BattleActionData__setBuffData(v14, v29, baseVals, 0, 0);
              return v14;
            }
          }
        }
      }
LABEL_20:
      sub_1C6BC60(data, procArg);
    }
  }
  return v14;
}


void BattleLogicFunction__functionMovePosition(
        BattleLogicFunction_o *this,
        BattleActionData_o *actionData,
        BattleServantData_o *targetData,
        const MethodInfo *method)
{
  long double v4; // q0
  __int64 v8; // x0
  __int64 v9; // x0
  DataManager_o *MasterData_object; // x0
  SkillLvMaster_o *v11; // x22
  struct BattleSkillInfoData_o *skillInfo; // x8
  SkillLvEntity_o *v13; // x22
  int32_t MovePositionUp; // w23
  int32_t MovePositionDown; // w0
  int v16; // w24
  int v17; // w25
  _QWORD *monitor; // x8
  __int64 v19; // x9
  int i; // w10
  int v21; // w11
  int v22; // w10
  BattleServantData_o *v23; // x23
  struct BattleData_o *data; // x8
  __int64 *v25; // x8
  __int64 v26; // x21
  __int64 v27; // x22
  int32_t v28; // w2
  const MethodInfo *v29; // x3

  if ( (byte_4CB93E9 & 1) == 0 )
  {
    sub_1C6BA08(&BattleActionData_TypeInfo);
    sub_1C6BA08(&Method_DataManager_GetMasterData_SkillLvMaster___);
    sub_1C6BA08(&Method_SingletonMonoBehaviour_DataManager__getInstance__);
    sub_1C6BA08(&StringLiteral_6427/*"FOCUS_UP_EX"*/);
    sub_1C6BA08(&StringLiteral_6425/*"FOCUS_UNDER_EX"*/);
    sub_1C6BA08(&StringLiteral_6423/*"FOCUS_CENTER_EX"*/);
    sub_1C6BA08(&StringLiteral_6424/*"FOCUS_UNDER"*/);
    sub_1C6BA08(&StringLiteral_6422/*"FOCUS_CENTER"*/);
    sub_1C6BA08(&StringLiteral_6426/*"FOCUS_UP"*/);
    byte_4CB93E9 = 1;
  }
  v8 = *((_QWORD *)Method_SingletonMonoBehaviour_DataManager__getInstance__ + 4);
  if ( (*(_BYTE *)(v8 + 309) & 1) == 0 )
    v8 = sub_1C41A9C(v4);
  v9 = *(_QWORD *)(*(_QWORD *)(v8 + 192) + 16LL);
  if ( (*(_BYTE *)(v9 + 309) & 1) == 0 )
    v9 = sub_1C41A9C(v4);
  MasterData_object = **(DataManager_o ***)(v9 + 184);
  if ( !MasterData_object )
    goto LABEL_23;
  MasterData_object = (DataManager_o *)DataManager__GetMasterData_object_(
                                         MasterData_object,
                                         (const MethodInfo_313B368 *)Method_DataManager_GetMasterData_SkillLvMaster___);
  if ( !actionData )
    goto LABEL_23;
  v11 = (SkillLvMaster_o *)MasterData_object;
  MasterData_object = (DataManager_o *)actionData->fields.skillInfo;
  if ( !MasterData_object )
    goto LABEL_23;
  MasterData_object = (DataManager_o *)((__int64 (__fastcall *)(DataManager_o *, const char *))MasterData_object->klass[1]._1.name)(
                                         MasterData_object,
                                         MasterData_object->klass[1]._1.namespaze);
  skillInfo = actionData->fields.skillInfo;
  if ( !skillInfo )
    goto LABEL_23;
  if ( !v11 )
    goto LABEL_23;
  MasterData_object = (DataManager_o *)SkillLvMaster__GetEntity(
                                         v11,
                                         (int32_t)MasterData_object,
                                         skillInfo->fields.skilllv,
                                         0);
  if ( !MasterData_object )
    goto LABEL_23;
  v13 = (SkillLvEntity_o *)MasterData_object;
  MovePositionUp = SkillLvEntity__getMovePositionUp((SkillLvEntity_o *)MasterData_object, 0);
  MovePositionDown = SkillLvEntity__getMovePositionDown(v13, 0);
  if ( (MovePositionUp & MovePositionDown) != 0xFFFFFFFF )
  {
    v16 = MovePositionDown;
    MasterData_object = (DataManager_o *)this->fields.data;
    if ( !MasterData_object )
      goto LABEL_23;
    MasterData_object = (DataManager_o *)BattleData__getTargetEnemyId((BattleData_o *)MasterData_object, 0, 0);
    if ( !this->fields.data )
      goto LABEL_23;
    v17 = (int)MasterData_object;
    BattleData__getServantData(this->fields.data, (int32_t)MasterData_object, 0);
    MasterData_object = (DataManager_o *)this->fields.data;
    if ( !MasterData_object )
      goto LABEL_23;
    monitor = MasterData_object[2].monitor;
    if ( !monitor )
      goto LABEL_23;
    v19 = monitor[3];
    for ( i = 0; ; ++i )
    {
      if ( i >= (int)v19 )
        return;
      if ( i >= (unsigned int)v19 )
        goto LABEL_50;
      if ( v17 == *((_DWORD *)monitor + i + 8) )
        break;
    }
    v21 = MovePositionUp > 0 ? -MovePositionUp : v16;
    v22 = v21 + i;
    if ( v22 >= 0 && v22 < (int)v19 )
    {
      if ( v22 >= (unsigned int)v19 )
LABEL_50:
        sub_1C6BC68(MasterData_object);
      MasterData_object = (DataManager_o *)BattleData__getServantData(
                                             (BattleData_o *)MasterData_object,
                                             *((_DWORD *)monitor + (unsigned int)v22 + 8),
                                             0);
      if ( !MasterData_object )
        goto LABEL_23;
      v23 = (BattleServantData_o *)MasterData_object;
      MasterData_object = (DataManager_o *)BattleServantData__isAlive((BattleServantData_o *)MasterData_object, 0, 0);
      if ( ((unsigned __int8)MasterData_object & 1) != 0 )
      {
        data = this->fields.data;
        if ( !data )
          goto LABEL_23;
        data->fields.globaltargetId = v23->fields.uniqueId;
        if ( BattleServantData__isMultiTargetUp(v23, 0) )
        {
          if ( SkillLvEntity__IsAress(v13, 0) )
            v25 = &StringLiteral_6427/*"FOCUS_UP_EX"*/;
          else
            v25 = &StringLiteral_6426/*"FOCUS_UP"*/;
        }
        else if ( BattleServantData__isMultiTargetCore(v23, 0) )
        {
          if ( SkillLvEntity__IsAress(v13, 0) )
            v25 = &StringLiteral_6423/*"FOCUS_CENTER_EX"*/;
          else
            v25 = &StringLiteral_6422/*"FOCUS_CENTER"*/;
        }
        else
        {
          v26 = 0;
          if ( !BattleServantData__isMultiTargetUnder(v23, 0) )
          {
LABEL_47:
            v27 = sub_1C6BC54(BattleActionData_TypeInfo);
            BattleActionData___ctor((BattleActionData_o *)v27, 0);
            if ( targetData && v27 )
            {
              *(_DWORD *)(v27 + 32) = targetData->fields.uniqueId;
              *(_DWORD *)(v27 + 36) = actionData->fields.targetId;
              BattleActionData__setStateField((BattleActionData_o *)v27, 0);
              *(_QWORD *)(v27 + 72) = v26;
              sub_1C6B9AC((CGThumbnailListItem_o *)(v27 + 72), v26, v28, v29);
              BattleActionData__AddAfterActionData(actionData, (BattleActionData_o *)v27, 0, 0);
              return;
            }
LABEL_23:
            sub_1C6BC60(MasterData_object, actionData);
          }
          if ( SkillLvEntity__IsAress(v13, 0) )
            v25 = &StringLiteral_6425/*"FOCUS_UNDER_EX"*/;
          else
            v25 = &StringLiteral_6424/*"FOCUS_UNDER"*/;
        }
        v26 = *v25;
        goto LABEL_47;
      }
    }
  }
}


void BattleLogicFunction__functionMoveState(
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
  const MethodInfo *v22; // x3
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
  BattleBuffData_BuffData_o *v33; // x20
  const MethodInfo *v34; // x2
  const MethodInfo *v35; // x3
  int32_t DispTurn; // w0
  bool isProgressSelfTurn; // w8
  struct System_Int32_array *items; // x8
  _QWORD *v39; // x9
  __int64 size; // x10
  BattleActionData_BuffData_o *v41; // x27
  struct FunctionEntity_o *funcEnt; // x21
  bool v43; // w0
  System_Int32_array *v44; // x0
  int32_t v45; // w2
  const MethodInfo *v46; // x3
  int v47; // w22
  int32_t funcIndex; // w20
  bool IsCommandSideEffect; // w0
  struct BattleData_o *data; // x8
  BattleFieldEnvironmentData_o *FieldEnvData_k__BackingField; // x19
  BattleLogicFunction___c_c *v52; // x0
  System_Func_object__bool__o *_9__122_2; // x20
  Il2CppObject *v54; // x21
  struct BattleLogicFunction___c_StaticFields *static_fields; // x0
  int32_t v56; // w2
  const MethodInfo *v57; // x3
  System_Collections_Generic_IEnumerable_TSource__o *v58; // x0
  BattleActionEffect_ChangeBgmBuff_o *v59; // x19
  const MethodInfo *v60; // [xsp+0h] [xbp-A0h]
  BattleLogicFunctionProcess_FunctionTargetCheck_o *v61; // [xsp+10h] [xbp-90h]
  BattleLogicFunction_ProcListInArgs_o *v62; // [xsp+18h] [xbp-88h]
  Il2CppObject *entity; // [xsp+38h] [xbp-68h] BYREF

  if ( (byte_4CB93EF & 1) == 0 )
  {
    sub_1C6BA08(&BattleActionData_BuffData_TypeInfo);
    sub_1C6BA08(&BattleActionEffect_ChangeBgmBuff_TypeInfo);
    sub_1C6BA08(&Method_DataManager_GetMasterData_BuffMaster___);
    sub_1C6BA08(&Method_DataMasterBase_BuffMaster__BuffEntity__int__TryGetEntity__);
    sub_1C6BA08(&Method_System_Linq_Enumerable_ToArray_BattleBuffData_BuffData___);
    sub_1C6BA08(&Method_System_Linq_Enumerable_Where_BattleBuffData_BuffData___);
    sub_1C6BA08(&System_Func_BattleBuffData_BuffData__bool__TypeInfo);
    sub_1C6BA08(&Method_System_Collections_Generic_HashSet_BattleBuffData_BuffData___ctor___78498456);
    sub_1C6BA08(&System_Collections_Generic_HashSet_BattleBuffData_BuffData__TypeInfo);
    sub_1C6BA08(&Method_System_Collections_Generic_List_int__Add__);
    sub_1C6BA08(&Method_System_Collections_Generic_List_int__ToArray__);
    sub_1C6BA08(&Method_System_Collections_Generic_List_int___ctor__);
    sub_1C6BA08(&System_Collections_Generic_List_int__TypeInfo);
    sub_1C6BA08(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_1C6BA08(&Method_BattleLogicFunction___c__functionMoveState_b__122_2__);
    sub_1C6BA08(&Method_BattleLogicFunction___c__DisplayClass122_0__functionMoveState_b__0__);
    sub_1C6BA08(&Method_BattleLogicFunction___c__DisplayClass122_0__functionMoveState_b__1__);
    sub_1C6BA08(&BattleLogicFunction___c__DisplayClass122_0_TypeInfo);
    sub_1C6BA08(&BattleLogicFunction___c_TypeInfo);
    byte_4CB93EF = 1;
  }
  entity = 0;
  v7 = sub_1C6BC54(BattleLogicFunction___c__DisplayClass122_0_TypeInfo);
  BattleLogicFunction___c__DisplayClass122_0___ctor((BattleLogicFunction___c__DisplayClass122_0_o *)v7, 0);
  if ( !funcTarget )
    goto LABEL_61;
  funcUnit_k__BackingField = funcTarget->fields._funcUnit_k__BackingField;
  if ( !funcUnit_k__BackingField )
    goto LABEL_61;
  dataVals_k__BackingField = funcUnit_k__BackingField->fields._dataVals_k__BackingField;
  targetId_k__BackingField = funcTarget->fields._targetId_k__BackingField;
  StealBuffInfoGroup = BattleLogicFunction__GetStealBuffInfoGroup(
                         this,
                         procArg,
                         mainAction,
                         dataVals_k__BackingField,
                         v10);
  if ( !this->fields.data )
    goto LABEL_61;
  v14 = StealBuffInfoGroup;
  ServantData = BattleData__getServantData(this->fields.data, targetId_k__BackingField, 0);
  BattleLogicFunction__ResetFamilyLinkageIdToStolenFamilyBuffs(
    (BattleLogicFunction_o *)ServantData,
    procArg,
    ServantData,
    v14,
    v16);
  if ( !v7 )
    goto LABEL_61;
  v61 = funcTarget;
  v62 = procArg;
  *(_DWORD *)(v7 + 16) = 0x1000000;
  if ( !v14 )
    goto LABEL_61;
  v17 = RemovedBuffInfoGroup__RemovedLinkageBuffEnumerable(v14, 0);
  v18 = (System_Func_object__bool__o *)sub_1C6BC54(System_Func_BattleBuffData_BuffData__bool__TypeInfo);
  System_Func_object__bool____ctor(
    v18,
    (Il2CppObject *)v7,
    Method_BattleLogicFunction___c__DisplayClass122_0__functionMoveState_b__0__,
    0);
  v19 = (System_Collections_Generic_IEnumerable_T__o *)System_Linq_Enumerable__Where_object_(
                                                         (System_Collections_Generic_IEnumerable_TSource__o *)v17,
                                                         (System_Func_TSource__bool__o *)v18,
                                                         (const MethodInfo_3182364 *)Method_System_Linq_Enumerable_Where_BattleBuffData_BuffData___);
  v20 = (System_Collections_Generic_HashSet_T__o *)sub_1C6BC54(System_Collections_Generic_HashSet_BattleBuffData_BuffData__TypeInfo);
  System_Collections_Generic_HashSet_object____ctor_57373904(
    v20,
    v19,
    (const MethodInfo_36B74D0 *)Method_System_Collections_Generic_HashSet_BattleBuffData_BuffData___ctor___78498456);
  *(_QWORD *)(v7 + 24) = v20;
  sub_1C6B9AC((CGThumbnailListItem_o *)(v7 + 24), (int32_t)v20, v21, v22);
  v23 = RemovedBuffInfoGroup__RemovedAllBuffEnumerable(v14, 0);
  v24 = (System_Func_object__bool__o *)sub_1C6BC54(System_Func_BattleBuffData_BuffData__bool__TypeInfo);
  System_Func_object__bool____ctor(
    v24,
    (Il2CppObject *)v7,
    Method_BattleLogicFunction___c__DisplayClass122_0__functionMoveState_b__1__,
    0);
  v25 = System_Linq_Enumerable__Where_object_(
          (System_Collections_Generic_IEnumerable_TSource__o *)v23,
          (System_Func_TSource__bool__o *)v24,
          (const MethodInfo_3182364 *)Method_System_Linq_Enumerable_Where_BattleBuffData_BuffData___);
  StealBuffInfoGroup = (RemovedBuffInfoGroup_o *)System_Linq_Enumerable__ToArray_object_(
                                                   v25,
                                                   (const MethodInfo_317B248 *)Method_System_Linq_Enumerable_ToArray_BattleBuffData_BuffData___);
  if ( !StealBuffInfoGroup )
    goto LABEL_61;
  v26 = StealBuffInfoGroup;
  if ( !StealBuffInfoGroup[1].klass )
  {
    if ( dataVals_k__BackingField )
    {
      StealBuffInfoGroup = (RemovedBuffInfoGroup_o *)v62;
      if ( v62 )
      {
        funcIndex = dataVals_k__BackingField->fields.funcIndex;
        IsCommandSideEffect = BattleLogicFunction_ProcListInArgs__get_IsCommandSideEffect(v62, 0);
        NoEffectObject = BattleLogicFunction__getNoEffectObject(
                           this,
                           targetId_k__BackingField,
                           funcIndex,
                           dataVals_k__BackingField,
                           IsCommandSideEffect,
                           0,
                           0,
                           0,
                           v60);
        StealBuffInfoGroup = (RemovedBuffInfoGroup_o *)mainAction;
        if ( mainAction )
        {
          BattleActionData__addAction(mainAction, NoEffectObject, 0);
          return;
        }
      }
    }
    goto LABEL_61;
  }
  v27 = (System_Collections_Generic_List_int__o *)sub_1C6BC54(System_Collections_Generic_List_int__TypeInfo);
  System_Collections_Generic_List_int____ctor(
    v27,
    (const MethodInfo_37E30FC *)Method_System_Collections_Generic_List_int___ctor__);
  StealBuffInfoGroup = (RemovedBuffInfoGroup_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3A4F3B4 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !StealBuffInfoGroup )
    goto LABEL_61;
  StealBuffInfoGroup = (RemovedBuffInfoGroup_o *)DataManager__GetMasterData_object_(
                                                   (DataManager_o *)StealBuffInfoGroup,
                                                   (const MethodInfo_313B368 *)Method_DataManager_GetMasterData_BuffMaster___);
  klass = (int)v26[1].klass;
  v29 = this;
  if ( klass < 1 )
  {
    v32 = 0;
LABEL_47:
    v47 = 1;
    goto LABEL_48;
  }
  v30 = (DataMasterBase_TMaster__TEntity__PKType__o *)StealBuffInfoGroup;
  v31 = 0;
  v32 = 0;
  do
  {
    if ( (unsigned int)v31 >= klass )
      sub_1C6BC68(StealBuffInfoGroup);
    v33 = (BattleBuffData_BuffData_o *)*((_QWORD *)&v26[1].monitor + v31);
    if ( !v33 || !v30 )
      goto LABEL_61;
    StealBuffInfoGroup = (RemovedBuffInfoGroup_o *)DataMasterBase_object__object__int___TryGetEntity(
                                                     v30,
                                                     &entity,
                                                     v33->fields.buffId,
                                                     (const MethodInfo_33F9128 *)Method_DataMasterBase_BuffMaster__BuffEntity__int__TryGetEntity__);
    if ( ((unsigned __int8)StealBuffInfoGroup & 1) != 0 )
    {
      StealBuffInfoGroup = (RemovedBuffInfoGroup_o *)BattleLogicFunction__IsAddStateFieldFlag(v29, v33, v34);
      if ( !ServantData )
        goto LABEL_61;
      BattleServantData__addBuff(ServantData, v33, (unsigned __int8)StealBuffInfoGroup & 1, 0, 1, 0);
      if ( v33->fields.changeBgmData )
        BattleBuffData_ChangeBgmData__UpdateUniqueVal(
          v33->fields.changeBgmData,
          v33->fields.addOrder,
          ServantData->fields.uniqueId,
          0);
      StealBuffInfoGroup = (RemovedBuffInfoGroup_o *)entity;
      if ( !entity )
        goto LABEL_61;
      if ( !BuffEntity__IsDisableMoveStateTurnChange((BuffEntity_o *)entity, 0) )
      {
        if ( v33->fields.turn <= 0 )
        {
          isProgressSelfTurn = v33->fields.isProgressSelfTurn;
        }
        else
        {
          DispTurn = BattleBuffData_BuffData__get_DispTurn(v33, 0);
          isProgressSelfTurn = v33->fields.isProgressSelfTurn;
          v33->fields.turn = 2 * DispTurn - isProgressSelfTurn;
        }
        v33->fields.isProgressEndEnemyTurn = isProgressSelfTurn ^ ServantData->fields.isEnemy ^ 1;
      }
      BattleLogicFunction__AfterAddedBuffProcess(v29, ServantData, (BuffEntity_o *)entity, v35);
      if ( v32 )
      {
        if ( !v27 )
          goto LABEL_61;
        NoEffectObject = (BattleActionData_o *)(unsigned int)v33->fields.addOrder;
        items = v27->fields._items;
        v39 = Method_System_Collections_Generic_List_int__Add__;
        ++v27->fields._version;
        if ( !items )
          goto LABEL_61;
        size = v27->fields._size;
        if ( (unsigned int)size >= LODWORD(items->max_length) )
        {
          System_Collections_Generic_List_int___AddWithResize(
            v27,
            (int32_t)NoEffectObject,
            *(const MethodInfo_37E3950 **)(*(_QWORD *)(v39[4] + 192LL) + 112LL));
        }
        else
        {
          v27->fields._size = size + 1;
          items->m_Items[size] = (int)NoEffectObject;
        }
      }
      else
      {
        v41 = (BattleActionData_BuffData_o *)sub_1C6BC54(BattleActionData_BuffData_TypeInfo);
        BattleActionData_BuffData___ctor(v41, 0);
        if ( !v41 )
          goto LABEL_61;
        v41->fields.targetId = targetId_k__BackingField;
        if ( !dataVals_k__BackingField )
          goto LABEL_61;
        StealBuffInfoGroup = (RemovedBuffInfoGroup_o *)v62;
        v41->fields.functionIndex = dataVals_k__BackingField->fields.funcIndex;
        if ( !v62 )
          goto LABEL_61;
        funcEnt = dataVals_k__BackingField->fields.funcEnt;
        v43 = BattleLogicFunction_ProcListInArgs__get_IsCommandSideEffect(v62, 0);
        v32 = ((__int64 (__fastcall *)(BattleLogicFunctionProcess_FunctionTargetCheck_o *, BattleActionData_BuffData_o *, BattleBuffData_BuffData_o *, struct FunctionEntity_o *, bool, const MethodInfo *))v61->klass->vtable._12_MakeAddActionBuffData.methodPtr)(
                v61,
                v41,
                v33,
                funcEnt,
                v43,
                v61->klass->vtable._12_MakeAddActionBuffData.method);
        StealBuffInfoGroup = (RemovedBuffInfoGroup_o *)mainAction;
        if ( !mainAction )
          goto LABEL_61;
        BattleActionData__setBuffData(mainAction, (BattleActionData_BuffData_o *)v32, dataVals_k__BackingField, 0, 0);
        v29 = this;
        StealBuffInfoGroup = (RemovedBuffInfoGroup_o *)this->fields.data;
        if ( !StealBuffInfoGroup )
          goto LABEL_61;
        BattleData__AddFreshBuffList((BattleData_o *)StealBuffInfoGroup, (BattleActionData_BuffData_o *)v32, 0);
      }
    }
    klass = (int)v26[1].klass;
    ++v31;
  }
  while ( (int)v31 < klass );
  if ( !v32 )
    goto LABEL_47;
  if ( !v27 )
    goto LABEL_61;
  v44 = System_Collections_Generic_List_int___ToArray(
          v27,
          (const MethodInfo_37E5408 *)Method_System_Collections_Generic_List_int__ToArray__);
  *(_QWORD *)(v32 + 160) = v44;
  sub_1C6B9AC((CGThumbnailListItem_o *)(v32 + 160), (int32_t)v44, v45, v46);
  v47 = 0;
LABEL_48:
  data = v29->fields.data;
  if ( !data )
    goto LABEL_61;
  FieldEnvData_k__BackingField = data->fields._FieldEnvData_k__BackingField;
  v52 = BattleLogicFunction___c_TypeInfo;
  if ( !BattleLogicFunction___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BattleLogicFunction___c_TypeInfo);
    v52 = BattleLogicFunction___c_TypeInfo;
  }
  _9__122_2 = (System_Func_object__bool__o *)v52->static_fields->__9__122_2;
  if ( !_9__122_2 )
  {
    if ( !v52->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v52);
      v52 = BattleLogicFunction___c_TypeInfo;
    }
    v54 = (Il2CppObject *)v52->static_fields->__9;
    _9__122_2 = (System_Func_object__bool__o *)sub_1C6BC54(System_Func_BattleBuffData_BuffData__bool__TypeInfo);
    System_Func_object__bool____ctor(_9__122_2, v54, Method_BattleLogicFunction___c__functionMoveState_b__122_2__, 0);
    static_fields = BattleLogicFunction___c_TypeInfo->static_fields;
    static_fields->__9__122_2 = (struct System_Func_BattleBuffData_BuffData__bool__o *)_9__122_2;
    sub_1C6B9AC((CGThumbnailListItem_o *)&static_fields->__9__122_2, (int32_t)_9__122_2, v56, v57);
  }
  v58 = System_Linq_Enumerable__Where_object_(
          (System_Collections_Generic_IEnumerable_TSource__o *)v26,
          (System_Func_TSource__bool__o *)_9__122_2,
          (const MethodInfo_3182364 *)Method_System_Linq_Enumerable_Where_BattleBuffData_BuffData___);
  StealBuffInfoGroup = (RemovedBuffInfoGroup_o *)System_Linq_Enumerable__ToArray_object_(
                                                   v58,
                                                   (const MethodInfo_317B248 *)Method_System_Linq_Enumerable_ToArray_BattleBuffData_BuffData___);
  if ( !FieldEnvData_k__BackingField )
    goto LABEL_61;
  if ( BattleFieldEnvironmentData__AddBgmFromChangeBgmBuffArray(
         FieldEnvData_k__BackingField,
         (BattleBuffData_BuffData_array *)StealBuffInfoGroup,
         0)
    && v47 != 1 )
  {
    v59 = (BattleActionEffect_ChangeBgmBuff_o *)sub_1C6BC54(BattleActionEffect_ChangeBgmBuff_TypeInfo);
    BattleActionEffect_ChangeBgmBuff___ctor(v59, 0);
    if ( !v47 )
    {
      BattleActionData_BuffData__SetActionEffectProc(
        (BattleActionData_BuffData_o *)v32,
        (BattleActionEffect_Base_o *)v59,
        0);
      return;
    }
LABEL_61:
    sub_1C6BC60(StealBuffInfoGroup, NoEffectObject);
  }
}


BattleActionData_o *BattleLogicFunction__functionNPDamage(
        BattleLogicFunction_o *this,
        int32_t playerId,
        int32_t targetId,
        DataVals_o *baseVals,
        int32_t funcIndex,
        int32_t type,
        BattleActionData_o *action,
        const MethodInfo *method)
{
  BattleActionData_o *v15; // x19
  __int64 v16; // x1
  BattleData_o *data; // x0
  BattleData_o *v18; // x8
  BattleServantData_o *v19; // x22
  BattleServantData_o *ServantData; // x20
  System_Collections_Generic_List_int__o *v21; // x27
  struct System_Int32_array *items; // x8
  _QWORD *v23; // x9
  __int64 size; // x10
  int v25; // w11
  __int64 v26; // x29
  char v27; // w28
  char v28; // w10
  System_Int32_array *TargetRarityList; // x26
  bool v30; // w8
  System_Int32_array *buffIndv; // x19
  __int64 v32; // x20
  int32_t v33; // w1
  struct System_Int32_array *v34; // x8
  _QWORD *v35; // x9
  __int64 v36; // x10
  System_Int32_array_array *Int2DimensionalArray; // x0
  struct System_Int32_array *v38; // x8
  _QWORD *v39; // x9
  __int64 v40; // x10
  struct System_Int32_array *v41; // x8
  _QWORD *v42; // x9
  __int64 v43; // x10
  struct System_Int32_array *v44; // x8
  _QWORD *v45; // x9
  __int64 v46; // x10
  struct System_Int32_array *v47; // x8
  _QWORD *v48; // x9
  __int64 v49; // x10
  struct System_Int32_array *v50; // x8
  _QWORD *v51; // x9
  __int64 v52; // x10
  struct System_Int32_array *v53; // x8
  _QWORD *v54; // x9
  __int64 v55; // x10
  int32_t BattlePointPhase; // w20
  struct System_Int32_array *v57; // x8
  _QWORD *v58; // x9
  __int64 v59; // x10
  struct System_Int32_array *v60; // x8
  _QWORD *v61; // x9
  __int64 v62; // x10
  bool v63; // w0
  struct System_Int32_array *v64; // x8
  _QWORD *v65; // x9
  __int64 v66; // x10
  struct System_Int32_array *v67; // x8
  _QWORD *v68; // x9
  __int64 v69; // x10
  System_Array_o *v70; // x20
  System_RuntimeFieldHandle_o v71; // x1
  bool v72; // w20
  bool IsOverChargeState; // w0
  int32_t v74; // w2
  const MethodInfo *v75; // x3
  int32_t NPFixedDamageValue; // w21
  BattleLogic_DamageProcessArgs_o *damageProcessArgs; // x25
  BattleLogic_o *logic; // x24
  System_Int32_array *v79; // x27
  bool IsIncludeIgnoreIndividuality; // w29
  BattleActionData_DamageData_o *v81; // x20
  char v82; // w21
  bool v84; // [xsp+30h] [xbp-A0h]
  bool isRarityAtk; // [xsp+34h] [xbp-9Ch]
  BattleServantData_o *target; // [xsp+38h] [xbp-98h]
  BattleActionData_o *v87; // [xsp+40h] [xbp-90h]
  int32_t v88; // [xsp+48h] [xbp-88h]
  int32_t v89; // [xsp+4Ch] [xbp-84h]
  BattleActionData_o *actiona; // [xsp+50h] [xbp-80h]
  unsigned int v91; // [xsp+68h] [xbp-68h]

  if ( (byte_4CB93C7 & 1) == 0 )
  {
    sub_1C6BA08(&BattleActionData_TypeInfo);
    sub_1C6BA08(&BattleLogic_DamageProcessArgs_TypeInfo);
    sub_1C6BA08(&int_____TypeInfo);
    sub_1C6BA08(&int___TypeInfo);
    sub_1C6BA08(&Method_System_Collections_Generic_List_int__Add__);
    sub_1C6BA08(&Method_System_Collections_Generic_List_int__ToArray__);
    sub_1C6BA08(&Method_System_Collections_Generic_List_int___ctor__);
    sub_1C6BA08(&System_Collections_Generic_List_int__TypeInfo);
    sub_1C6BA08(&DataVals_OverChargeState___TypeInfo);
    sub_1C6BA08(&Field__PrivateImplementationDetails__44BE0EBF7C907BA44AD83314C6AD0AA399AD5B73911C129D2CD6A85D4A056C90);
    byte_4CB93C7 = 1;
  }
  v15 = (BattleActionData_o *)sub_1C6BC54(BattleActionData_TypeInfo);
  BattleActionData___ctor(v15, 0);
  data = this->fields.data;
  if ( !data )
    goto LABEL_93;
  data = (BattleData_o *)BattleData__getServantData(data, playerId, 0);
  v18 = this->fields.data;
  if ( !v18 )
    goto LABEL_93;
  v19 = (BattleServantData_o *)data;
  ServantData = BattleData__getServantData(v18, targetId, 0);
  v21 = (System_Collections_Generic_List_int__o *)sub_1C6BC54(System_Collections_Generic_List_int__TypeInfo);
  System_Collections_Generic_List_int____ctor(
    v21,
    (const MethodInfo_37E30FC *)Method_System_Collections_Generic_List_int___ctor__);
  if ( !baseVals
    || (data = (BattleData_o *)DataVals__GetParam(baseVals, 3, 0, 0), !v21)
    || (items = v21->fields._items,
        v23 = Method_System_Collections_Generic_List_int__Add__,
        ++v21->fields._version,
        !items) )
  {
LABEL_93:
    sub_1C6BC60(data, v16);
  }
  size = v21->fields._size;
  actiona = action;
  v88 = funcIndex;
  if ( (unsigned int)size >= LODWORD(items->max_length) )
  {
    System_Collections_Generic_List_int___AddWithResize(
      v21,
      (int32_t)data,
      *(const MethodInfo_37E3950 **)(*(_QWORD *)(v23[4] + 192LL) + 112LL));
  }
  else
  {
    v21->fields._size = size + 1;
    items->m_Items[size] = (int)data;
  }
  v25 = type - 3;
  v26 = 0;
  v89 = type;
  v27 = 0;
  target = ServantData;
  v87 = v15;
  v91 = v25;
  v28 = 0;
  TargetRarityList = 0;
  v30 = 0;
  buffIndv = 0;
  v32 = 0;
  switch ( v25 )
  {
    case 0:
    case 1:
    case 4:
    case 6:
    case 7:
      v33 = 7;
      goto LABEL_14;
    case 2:
    case 3:
      v33 = 6;
LABEL_14:
      data = (BattleData_o *)DataVals__GetParam(baseVals, v33, 0, 0);
      v34 = v21->fields._items;
      v35 = Method_System_Collections_Generic_List_int__Add__;
      ++v21->fields._version;
      if ( !v34 )
        goto LABEL_93;
      v36 = v21->fields._size;
      if ( (unsigned int)v36 >= LODWORD(v34->max_length) )
      {
        System_Collections_Generic_List_int___AddWithResize(
          v21,
          (int32_t)data,
          *(const MethodInfo_37E3950 **)(*(_QWORD *)(v35[4] + 192LL) + 112LL));
      }
      else
      {
        v21->fields._size = v36 + 1;
        v34->m_Items[v36] = (int)data;
      }
      break;
    case 5:
      goto LABEL_85;
    case 8:
      v21 = (System_Collections_Generic_List_int__o *)sub_1C6BC54(System_Collections_Generic_List_int__TypeInfo);
      System_Collections_Generic_List_int____ctor(
        v21,
        (const MethodInfo_37E30FC *)Method_System_Collections_Generic_List_int___ctor__);
      data = (BattleData_o *)DataVals__GetParam(baseVals, 3, 0, 0);
      if ( !v21 )
        goto LABEL_93;
      v38 = v21->fields._items;
      v39 = Method_System_Collections_Generic_List_int__Add__;
      ++v21->fields._version;
      if ( !v38 )
        goto LABEL_93;
      v40 = v21->fields._size;
      if ( (unsigned int)v40 >= LODWORD(v38->max_length) )
      {
        System_Collections_Generic_List_int___AddWithResize(
          v21,
          (int32_t)data,
          *(const MethodInfo_37E3950 **)(*(_QWORD *)(v39[4] + 192LL) + 112LL));
      }
      else
      {
        v21->fields._size = v40 + 1;
        v38->m_Items[v40] = (int)data;
      }
      data = (BattleData_o *)DataVals__GetParam(baseVals, 7, 0, 0);
      v47 = v21->fields._items;
      v48 = Method_System_Collections_Generic_List_int__Add__;
      ++v21->fields._version;
      if ( !v47 )
        goto LABEL_93;
      v49 = v21->fields._size;
      if ( (unsigned int)v49 >= LODWORD(v47->max_length) )
      {
        System_Collections_Generic_List_int___AddWithResize(
          v21,
          (int32_t)data,
          *(const MethodInfo_37E3950 **)(*(_QWORD *)(v48[4] + 192LL) + 112LL));
      }
      else
      {
        v21->fields._size = v49 + 1;
        v47->m_Items[v49] = (int)data;
      }
      data = (BattleData_o *)DataVals__GetParam(baseVals, 60, 0, 0);
      v53 = v21->fields._items;
      v54 = Method_System_Collections_Generic_List_int__Add__;
      ++v21->fields._version;
      if ( !v53 )
        goto LABEL_93;
      v55 = v21->fields._size;
      if ( (unsigned int)v55 >= LODWORD(v53->max_length) )
      {
        System_Collections_Generic_List_int___AddWithResize(
          v21,
          (int32_t)data,
          *(const MethodInfo_37E3950 **)(*(_QWORD *)(v54[4] + 192LL) + 112LL));
      }
      else
      {
        v21->fields._size = v55 + 1;
        v53->m_Items[v55] = (int)data;
      }
      data = (BattleData_o *)DataVals__GetParam(baseVals, 61, 0, 0);
      v60 = v21->fields._items;
      v61 = Method_System_Collections_Generic_List_int__Add__;
      ++v21->fields._version;
      if ( !v60 )
        goto LABEL_93;
      v62 = v21->fields._size;
      if ( (unsigned int)v62 >= LODWORD(v60->max_length) )
      {
        System_Collections_Generic_List_int___AddWithResize(
          v21,
          (int32_t)data,
          *(const MethodInfo_37E3950 **)(*(_QWORD *)(v61[4] + 192LL) + 112LL));
      }
      else
      {
        v21->fields._size = v62 + 1;
        v60->m_Items[v62] = (int)data;
      }
      data = (BattleData_o *)DataVals__GetParam(baseVals, 4, 0, 0);
      v64 = v21->fields._items;
      v65 = Method_System_Collections_Generic_List_int__Add__;
      ++v21->fields._version;
      if ( !v64 )
        goto LABEL_93;
      v66 = v21->fields._size;
      if ( (unsigned int)v66 >= LODWORD(v64->max_length) )
      {
        System_Collections_Generic_List_int___AddWithResize(
          v21,
          (int32_t)data,
          *(const MethodInfo_37E3950 **)(*(_QWORD *)(v65[4] + 192LL) + 112LL));
      }
      else
      {
        v21->fields._size = v66 + 1;
        v64->m_Items[v66] = (int)data;
      }
      data = (BattleData_o *)DataVals__GetParam(baseVals, 6, 0, 0);
      v67 = v21->fields._items;
      v68 = Method_System_Collections_Generic_List_int__Add__;
      ++v21->fields._version;
      if ( !v67 )
        goto LABEL_93;
      v69 = v21->fields._size;
      if ( (unsigned int)v69 >= LODWORD(v67->max_length) )
      {
        System_Collections_Generic_List_int___AddWithResize(
          v21,
          (int32_t)data,
          *(const MethodInfo_37E3950 **)(*(_QWORD *)(v68[4] + 192LL) + 112LL));
      }
      else
      {
        v21->fields._size = v69 + 1;
        v67->m_Items[v69] = (int)data;
      }
      buffIndv = DataVals__GetTargetList(baseVals, 0);
      v70 = (System_Array_o *)sub_1C6BAB0(DataVals_OverChargeState___TypeInfo, 3);
      v71.fields.value = Field__PrivateImplementationDetails__44BE0EBF7C907BA44AD83314C6AD0AA399AD5B73911C129D2CD6A85D4A056C90;
      System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray_64666016(v70, v71, 0);
      DataVals__UpdateOverChargeEachFunc(baseVals, (DataVals_OverChargeState_array *)v70, 0);
      v72 = DataVals__IsOverChargeState(baseVals, 2, 0) || DataVals__IsOverChargeState(baseVals, 8, 0);
      v27 = 1;
      IsOverChargeState = DataVals__IsOverChargeState(baseVals, 1, 0);
      v26 = 0;
      v28 = 0;
      TargetRarityList = 0;
      v30 = v72 && !IsOverChargeState;
      v32 = (__int64)buffIndv;
      goto LABEL_85;
    case 9:
      data = (BattleData_o *)DataVals__GetParam(baseVals, 7, 0, 0);
      v41 = v21->fields._items;
      v42 = Method_System_Collections_Generic_List_int__Add__;
      ++v21->fields._version;
      if ( !v41 )
        goto LABEL_93;
      v43 = v21->fields._size;
      if ( (unsigned int)v43 >= LODWORD(v41->max_length) )
      {
        System_Collections_Generic_List_int___AddWithResize(
          v21,
          (int32_t)data,
          *(const MethodInfo_37E3950 **)(*(_QWORD *)(v42[4] + 192LL) + 112LL));
      }
      else
      {
        v21->fields._size = v43 + 1;
        v41->m_Items[v43] = (int)data;
      }
      data = (BattleData_o *)DataVals__GetParam(baseVals, 4, 0, 0);
      v44 = v21->fields._items;
      v45 = Method_System_Collections_Generic_List_int__Add__;
      ++v21->fields._version;
      if ( !v44 )
        goto LABEL_93;
      v46 = v21->fields._size;
      if ( (unsigned int)v46 >= LODWORD(v44->max_length) )
      {
        System_Collections_Generic_List_int___AddWithResize(
          v21,
          (int32_t)data,
          *(const MethodInfo_37E3950 **)(*(_QWORD *)(v45[4] + 192LL) + 112LL));
      }
      else
      {
        v21->fields._size = v46 + 1;
        v44->m_Items[v46] = (int)data;
      }
      data = (BattleData_o *)DataVals__GetParam(baseVals, 6, 0, 0);
      v50 = v21->fields._items;
      v51 = Method_System_Collections_Generic_List_int__Add__;
      ++v21->fields._version;
      if ( !v50 )
        goto LABEL_93;
      v52 = v21->fields._size;
      if ( (unsigned int)v52 >= LODWORD(v50->max_length) )
      {
        System_Collections_Generic_List_int___AddWithResize(
          v21,
          (int32_t)data,
          *(const MethodInfo_37E3950 **)(*(_QWORD *)(v51[4] + 192LL) + 112LL));
      }
      else
      {
        v21->fields._size = v52 + 1;
        v50->m_Items[v52] = (int)data;
      }
      data = (BattleData_o *)DataVals__GetParam(baseVals, 6, 0, 0);
      if ( !v19 )
        goto LABEL_93;
      BattlePointPhase = BattleServantData__GetBattlePointPhase(v19, (int32_t)data, 0);
      data = (BattleData_o *)DataVals__GetParamAddTypeIndex(baseVals, 181, BattlePointPhase, -1, 0);
      v57 = v21->fields._items;
      v58 = Method_System_Collections_Generic_List_int__Add__;
      ++v21->fields._version;
      if ( !v57 )
        goto LABEL_93;
      v59 = v21->fields._size;
      if ( (unsigned int)v59 >= LODWORD(v57->max_length) )
      {
        System_Collections_Generic_List_int___AddWithResize(
          v21,
          (int32_t)data,
          *(const MethodInfo_37E3950 **)(*(_QWORD *)(v58[4] + 192LL) + 112LL));
      }
      else
      {
        v21->fields._size = v59 + 1;
        v57->m_Items[v59] = (int)data;
      }
      if ( DataVals__IsOverChargeState(baseVals, 1, 0) )
        goto LABEL_65;
      v63 = DataVals__IsOverChargeState(baseVals, 2, 0);
      v26 = 0;
      v27 = 0;
      if ( BattlePointPhase )
      {
LABEL_66:
        v28 = 0;
        TargetRarityList = 0;
        v30 = 0;
        buffIndv = 0;
        v32 = 0;
        goto LABEL_85;
      }
      v28 = 0;
      TargetRarityList = 0;
      v30 = 0;
      buffIndv = 0;
      v32 = 0;
      if ( v63 )
        goto LABEL_85;
      DataVals__SetOverCharge(baseVals, 0, 0);
LABEL_65:
      v27 = 0;
      v26 = 0;
      goto LABEL_84;
    default:
      goto LABEL_66;
  }
  v26 = 0;
  v27 = 0;
  v28 = 0;
  TargetRarityList = 0;
  v30 = 0;
  buffIndv = 0;
  v32 = 0;
  switch ( v91 )
  {
    case 0u:
    case 1u:
      v32 = sub_1C6BAB0(int___TypeInfo, 1);
      data = (BattleData_o *)DataVals__GetParam(baseVals, 6, 0, 0);
      if ( !v32 )
        goto LABEL_93;
      if ( !*(_DWORD *)(v32 + 24) )
        goto LABEL_94;
      v27 = 0;
      v26 = 0;
      v28 = 0;
      TargetRarityList = 0;
      v30 = 0;
      buffIndv = 0;
      *(_DWORD *)(v32 + 32) = (_DWORD)data;
      goto LABEL_85;
    case 2u:
    case 3u:
    case 5u:
      goto LABEL_85;
    case 4u:
      buffIndv = (System_Int32_array *)sub_1C6BAB0(int___TypeInfo, 1);
      data = (BattleData_o *)DataVals__GetParam(baseVals, 6, 0, 0);
      if ( !buffIndv )
        goto LABEL_93;
      if ( !LODWORD(buffIndv->max_length) )
        goto LABEL_94;
      v27 = 0;
      v26 = 0;
      v28 = 0;
      TargetRarityList = 0;
      v30 = 0;
      v32 = 0;
      buffIndv->m_Items[0] = (int)data;
      goto LABEL_85;
    case 6u:
      TargetRarityList = DataVals__GetTargetRarityList(baseVals, 0);
      v27 = 0;
      v26 = 0;
      v30 = 0;
      buffIndv = 0;
      v32 = 0;
      v28 = 1;
      goto LABEL_85;
    case 7u:
      Int2DimensionalArray = DataVals__GetInt2DimensionalArray(baseVals, 56, 0);
      if ( Int2DimensionalArray )
      {
        v26 = (__int64)Int2DimensionalArray;
      }
      else
      {
        v26 = sub_1C6BAB0(int_____TypeInfo, 1);
        data = (BattleData_o *)DataVals__GetAndCheckIndividuality(baseVals, 0);
        if ( !v26 )
          goto LABEL_93;
        if ( !*(_DWORD *)(v26 + 24) )
LABEL_94:
          sub_1C6BC68(data);
        *(_QWORD *)(v26 + 32) = data;
        sub_1C6B9AC((CGThumbnailListItem_o *)(v26 + 32), (int32_t)data, v74, v75);
      }
      v27 = 0;
LABEL_84:
      v28 = 0;
      TargetRarityList = 0;
      v30 = 0;
      buffIndv = 0;
      v32 = 0;
LABEL_85:
      v84 = v30;
      isRarityAtk = v28;
      NPFixedDamageValue = DataVals__GetNPFixedDamageValue(baseVals, 0);
      damageProcessArgs = (BattleLogic_DamageProcessArgs_o *)sub_1C6BC54(BattleLogic_DamageProcessArgs_TypeInfo);
      BattleLogic_DamageProcessArgs___ctor(damageProcessArgs, 0, NPFixedDamageValue, (System_Int32_array_array *)v26, 0);
      logic = this->fields.logic;
      v79 = System_Collections_Generic_List_int___ToArray(
              v21,
              (const MethodInfo_37E5408 *)Method_System_Collections_Generic_List_int__ToArray__);
      IsIncludeIgnoreIndividuality = DataVals__IsIncludeIgnoreIndividuality(baseVals, 0);
      data = (BattleData_o *)DataVals__isParam(baseVals, 91, 0);
      if ( !logic )
        goto LABEL_93;
      data = (BattleData_o *)BattleLogic__getFunctionNpDamagelist(
                               logic,
                               v19,
                               target,
                               v79,
                               v88,
                               v89,
                               actiona,
                               (System_Int32_array *)v32,
                               buffIndv,
                               TargetRarityList,
                               IsIncludeIgnoreIndividuality,
                               (unsigned __int8)data & 1,
                               damageProcessArgs,
                               0);
      v81 = (BattleActionData_DamageData_o *)data;
      if ( v91 < 8 && ((0x93u >> v91) & 1) != 0 )
      {
        v82 = 1;
        if ( !data )
          goto LABEL_93;
      }
      else
      {
        v82 = v27 & v84;
        if ( !data )
          goto LABEL_93;
      }
      BattleActionData_DamageData__addAttackSideEffectAction((BattleActionData_DamageData_o *)data, 80, 0);
      if ( !v87 )
        goto LABEL_93;
      BattleActionData__setDamageData(v87, v81, baseVals, v82, isRarityAtk, 0);
      return v87;
    default:
      goto LABEL_66;
  }
}


BattleActionData_o *BattleLogicFunction__functionPtShuffle(
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
  const MethodInfo *v16; // x3
  struct BattleData_o *v17; // x8
  System_Collections_Generic_List_object__o *v18; // x21
  System_Comparison_T__o *v19; // x22
  Il2CppObject *v20; // x23
  struct BattleLogicFunction___c_StaticFields *v21; // x0
  int32_t v22; // w2
  const MethodInfo *v23; // x3
  struct BattleData_o *v24; // x8
  int v25; // w8
  unsigned int *v26; // x21
  int32_t v27; // w23
  BattleServantData_o *v28; // x22
  struct BattleData_o *v29; // x8
  unsigned __int64 v30; // x24
  struct System_Int32_array *p_entryid; // x9
  unsigned __int64 max_length_low; // x10
  unsigned __int64 v33; // x9
  __int64 v34; // x22
  struct System_Int32_array *v35; // x9
  BattleLogicTask_o *v36; // x21

  if ( (byte_4CB93DA & 1) == 0 )
  {
    sub_1C6BA08(&System_Action_BattleServantData__TypeInfo);
    sub_1C6BA08(&BattleActionData_TypeInfo);
    sub_1C6BA08(&BattleLogicTask_TypeInfo);
    sub_1C6BA08(&System_Comparison_BattleServantData__TypeInfo);
    sub_1C6BA08(&Method_System_Collections_Generic_List_BattleServantData__ForEach__);
    sub_1C6BA08(&Method_System_Collections_Generic_List_BattleServantData__Sort__);
    sub_1C6BA08(&Method_System_Collections_Generic_List_BattleServantData__ToArray__);
    sub_1C6BA08(&Method_BattleLogicFunction___c__functionPtShuffle_b__101_0__);
    sub_1C6BA08(&Method_BattleLogicFunction___c__functionPtShuffle_b__101_1__);
    sub_1C6BA08(&BattleLogicFunction___c_TypeInfo);
    byte_4CB93DA = 1;
  }
  v7 = (BattleActionData_o *)sub_1C6BC54(BattleActionData_TypeInfo);
  BattleActionData___ctor(v7, 0);
  data = this->fields.data;
  if ( !data )
    goto LABEL_53;
  BattleData__SubBuffFromPT_45986296((BattleData_o *)data, 0, 0);
  data = this->fields.data;
  if ( !data )
    goto LABEL_53;
  BattleData__SubBuffExitSvt((BattleData_o *)data, 0, 0);
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
    v12 = (System_Action_object__o *)sub_1C6BC54(System_Action_BattleServantData__TypeInfo);
    System_Action_object____ctor(v12, v13, Method_BattleLogicFunction___c__functionPtShuffle_b__101_0__, 0);
    static_fields = BattleLogicFunction___c_TypeInfo->static_fields;
    static_fields->__9__101_0 = (struct System_Action_BattleServantData__o *)v12;
    sub_1C6B9AC((CGThumbnailListItem_o *)&static_fields->__9__101_0, (int32_t)v12, v15, v16);
  }
  if ( !player_datalist )
    goto LABEL_53;
  System_Collections_Generic_List_object___ForEach(
    player_datalist,
    (System_Action_T__o *)v12,
    (const MethodInfo_38013B4 *)Method_System_Collections_Generic_List_BattleServantData__ForEach__);
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
    v19 = (System_Comparison_T__o *)sub_1C6BC54(System_Comparison_BattleServantData__TypeInfo);
    System_Comparison_object____ctor(v19, v20, Method_BattleLogicFunction___c__functionPtShuffle_b__101_1__, 0);
    v21 = BattleLogicFunction___c_TypeInfo->static_fields;
    v21->__9__101_1 = (struct System_Comparison_BattleServantData__o *)v19;
    sub_1C6B9AC((CGThumbnailListItem_o *)&v21->__9__101_1, (int32_t)v19, v22, v23);
  }
  if ( !v18 )
    goto LABEL_53;
  System_Collections_Generic_List_object___Sort_58729528(
    v18,
    v19,
    (const MethodInfo_3802438 *)Method_System_Collections_Generic_List_BattleServantData__Sort__);
  v24 = this->fields.data;
  if ( !v24 )
    goto LABEL_53;
  data = v24->fields.player_datalist;
  if ( !data )
    goto LABEL_53;
  data = System_Collections_Generic_List_object___ToArray(
           (System_Collections_Generic_List_object__o *)data,
           (const MethodInfo_38024CC *)Method_System_Collections_Generic_List_BattleServantData__ToArray__);
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
        sub_1C6BC68(data);
      v28 = *(BattleServantData_o **)&v26[2 * v27 + 8];
      if ( !v28 )
        break;
      if ( v28->fields.isEntry )
      {
        data = (void *)BattleServantData__isAlive(v28, 0, 0);
        if ( ((unsigned __int8)data & 1) != 0 )
          v28->fields.isEntry = 0;
      }
      v28->fields.deckIndex = v27;
      v25 = v26[6];
      if ( ++v27 >= v25 )
        goto LABEL_32;
    }
LABEL_53:
    sub_1C6BC60(data, v8);
  }
LABEL_32:
  v29 = this->fields.data;
  if ( !v29 )
    goto LABEL_53;
  v30 = 0;
  while ( 1 )
  {
    p_entryid = v29->fields.p_entryid;
    if ( !p_entryid )
      goto LABEL_53;
    max_length_low = LODWORD(p_entryid->max_length);
    if ( (__int64)v30 >= (int)max_length_low )
      break;
    if ( v30 >= max_length_low )
      goto LABEL_54;
    p_entryid->m_Items[v30] = -1;
    v33 = v26[6];
    if ( (__int64)v30 < (int)v33 )
    {
      if ( v30 >= v33 )
        goto LABEL_54;
      v34 = *(_QWORD *)&v26[2 * v30 + 8];
      if ( !v34 )
        goto LABEL_53;
      data = (void *)BattleServantData__isAlive(*(BattleServantData_o **)&v26[2 * v30 + 8], 0, 0);
      v29 = this->fields.data;
      if ( ((unsigned __int8)data & 1) != 0 )
      {
        if ( !v29 )
          goto LABEL_53;
        v35 = v29->fields.p_entryid;
        if ( !v35 )
          goto LABEL_53;
        if ( v30 >= LODWORD(v35->max_length) )
          goto LABEL_54;
        v35->m_Items[v30] = *(_DWORD *)(v34 + 24);
        *(_BYTE *)(v34 + 504) = 1;
        *(_BYTE *)(v34 + 565) = 1;
      }
    }
    ++v30;
    if ( !v29 )
      goto LABEL_53;
  }
  BattleData__createCommandCard(v29, 0);
  data = this->fields.data;
  if ( !data )
    goto LABEL_53;
  BattleData__shuffleCommand((BattleData_o *)data, 0);
  data = this->fields.logic;
  if ( !data )
    goto LABEL_53;
  BattleLogic__drawCommand((BattleLogic_o *)data, 0);
  if ( !v7 )
    goto LABEL_53;
  v7->fields.redrawCommandCard = 1;
  v36 = (BattleLogicTask_o *)sub_1C6BC54(BattleLogicTask_TypeInfo);
  BattleLogicTask___ctor(v36, 0);
  if ( !v36 )
    goto LABEL_53;
  BattleLogicTask__setCheckEntryFunction(v36, 0);
  data = this->fields.logic;
  if ( !data )
    goto LABEL_53;
  BattleLogic__AddBattleLogicTask((BattleLogic_o *)data, v36, 0);
  return v7;
}


BattleActionData_o *BattleLogicFunction__functionReflection(
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
  int32_t v19; // w27
  int v20; // w29
  __int64 v22; // x0
  int32_t v23; // w2
  const MethodInfo *v24; // x3
  __int64 v25; // x0
  int32_t v26; // w2
  const MethodInfo *v27; // x3
  int32_t v28; // w2
  const MethodInfo *v29; // x3
  __int64 v30; // x0
  int32_t v31; // w2
  const MethodInfo *v32; // x3
  __int64 v33; // x0
  int32_t v34; // w2
  const MethodInfo *v35; // x3
  __int64 v36; // x0
  int32_t v37; // w2
  const MethodInfo *v38; // x3
  struct BattleData_o *v39; // x8
  int32_t uniqueId; // w21
  int32_t v41; // w22
  bool IsOpponentPTUniqueID; // w0

  if ( (byte_4CB93D8 & 1) == 0 )
  {
    sub_1C6BA08(&BattleActionData_TypeInfo);
    sub_1C6BA08(&BattleActionData_DamageData_TypeInfo);
    sub_1C6BA08(&int___TypeInfo);
    sub_1C6BA08(&BattleBuffData_ShowBuffData___TypeInfo);
    byte_4CB93D8 = 1;
  }
  v11 = (BattleActionData_o *)sub_1C6BC54(BattleActionData_TypeInfo);
  BattleActionData___ctor(v11, 0);
  data = (__int64)this->fields.data;
  if ( !data )
    goto LABEL_28;
  data = (__int64)BattleData__getServantData((BattleData_o *)data, playerId, 0);
  if ( !this->fields.data )
    goto LABEL_28;
  v14 = (BattleServantData_o *)data;
  ServantData = BattleData__getServantData(this->fields.data, targetId, 0);
  v16 = sub_1C6BC54(BattleActionData_DamageData_TypeInfo);
  BattleActionData_DamageData___ctor((BattleActionData_DamageData_o *)v16, 0);
  if ( !v14 )
    goto LABEL_28;
  data = BattleServantData__getAccumulationDamage(v14, 0);
  if ( !baseVals )
    goto LABEL_28;
  v17 = DataVals__GetValue(baseVals, 0) * (__int64)(int)data;
  data = (__int64)this->fields.data;
  v18 = (double)v17 / 1000.0;
  v19 = v18 == INFINITY ? 0x80000000 : (int)v18;
  if ( !data )
    goto LABEL_28;
  data = BattleData__IsDeadOkTurn((BattleData_o *)data, targetId, 0);
  if ( (data & 1) == 0 )
  {
    if ( !ServantData )
      goto LABEL_28;
    v20 = ((__int64 (__fastcall *)(BattleServantData_o *, const MethodInfo *))ServantData->klass->vtable._9_get_hp.methodPtr)(
            ServantData,
            ServantData->klass->vtable._9_get_hp.method);
    data = ((__int64 (__fastcall *)(BattleServantData_o *, const MethodInfo *))ServantData->klass->vtable._11_get_reducedhp.methodPtr)(
             ServantData,
             ServantData->klass->vtable._11_get_reducedhp.method);
    if ( v20 - (int)data < v19 && v20 - (int)data > 0 )
      v19 = v20 - data - 1;
  }
  if ( !v16 )
    goto LABEL_28;
  *(_DWORD *)(v16 + 32) = targetId;
  *(_DWORD *)(v16 + 16) = funcIndex;
  *(_WORD *)(v16 + 36) = 0;
  *(_BYTE *)(v16 + 38) = 0;
  *(_DWORD *)(v16 + 40) = 0;
  *(_BYTE *)(v16 + 44) = 0;
  v22 = sub_1C6BAB0(BattleBuffData_ShowBuffData___TypeInfo, 0);
  *(_QWORD *)(v16 + 64) = v22;
  sub_1C6B9AC((CGThumbnailListItem_o *)(v16 + 64), v22, v23, v24);
  v25 = sub_1C6BAB0(BattleBuffData_ShowBuffData___TypeInfo, 0);
  *(_QWORD *)(v16 + 72) = v25;
  sub_1C6B9AC((CGThumbnailListItem_o *)(v16 + 72), v25, v26, v27);
  data = sub_1C6BAB0(int___TypeInfo, 1);
  if ( !data )
    goto LABEL_28;
  if ( !*(_DWORD *)(data + 24) )
    sub_1C6BC68(data);
  *(_DWORD *)(data + 32) = v19;
  *(_QWORD *)(v16 + 96) = data;
  sub_1C6B9AC((CGThumbnailListItem_o *)(v16 + 96), data, v28, v29);
  BattleServantData__CacheDealtDamage(v14, (BattleActionData_DamageData_o *)v16, 0);
  v30 = sub_1C6BAB0(int___TypeInfo, 0);
  *(_QWORD *)(v16 + 104) = v30;
  sub_1C6B9AC((CGThumbnailListItem_o *)(v16 + 104), v30, v31, v32);
  v33 = sub_1C6BAB0(int___TypeInfo, 0);
  *(_QWORD *)(v16 + 112) = v33;
  sub_1C6B9AC((CGThumbnailListItem_o *)(v16 + 112), v33, v34, v35);
  v36 = sub_1C6BAB0(int___TypeInfo, 0);
  *(_QWORD *)(v16 + 120) = v36;
  sub_1C6B9AC((CGThumbnailListItem_o *)(v16 + 120), v36, v37, v38);
  if ( !ServantData )
    goto LABEL_28;
  BattleServantData__provisionalDamage(ServantData, v19, 0);
  BattleServantData__ResultDamage(ServantData, v19, v14, 0, 0, 0, 0);
  data = BattleServantData__isLogicResultAlive(ServantData, 0);
  if ( (data & 1) == 0 )
  {
    v39 = this->fields.data;
    if ( !v39 )
      goto LABEL_28;
    ServantData->fields.deadTurn = v39->fields.typeTurn;
  }
  BattleActionData_DamageData__addAttackSideEffectAction((BattleActionData_DamageData_o *)v16, 80, 0);
  if ( !v11
    || (BattleActionData__SetFuncDamageData(v11, (BattleActionData_DamageData_o *)v16, baseVals, 0),
        (data = (__int64)this->fields.data) == 0) )
  {
LABEL_28:
    sub_1C6BC60(data, v12);
  }
  uniqueId = v14->fields.uniqueId;
  v41 = *(_DWORD *)(data + 196);
  IsOpponentPTUniqueID = BattleData__IsOpponentPTUniqueID((BattleData_o *)data, targetId, playerId, 0);
  BattleServantData__setActionHistory(ServantData, uniqueId, 6, v41, IsOpponentPTUniqueID, 0);
  return v11;
}


BattleActionData_o *BattleLogicFunction__functionReplaceEnemyMember(
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
  System_Func_object__bool__o *_9__93_0; // x22
  Il2CppObject *v14; // x25
  struct BattleLogicFunction___c_StaticFields *static_fields; // x0
  int32_t v16; // w2
  const MethodInfo *v17; // x3
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
  il2cpp_array_size_t v32; // x11
  int32_t v33; // w24
  int32_t uniqueId; // w10
  __int64 v35; // x8
  __int64 v36; // x11
  int32_t *v37; // x9
  struct System_Int32_array *v38; // x8
  unsigned __int64 max_length_low; // x10
  unsigned __int64 v40; // x9
  int32_t *m_Items; // x12

  if ( (byte_4CB93D2 & 1) == 0 )
  {
    sub_1C6BA08(&BattleActionData_TypeInfo);
    sub_1C6BA08(&Method_System_Linq_Enumerable_Count_BattleServantData____78609176);
    sub_1C6BA08(&System_Func_BattleServantData__bool__TypeInfo);
    sub_1C6BA08(&Method_BattleLogicFunction___c__functionReplaceEnemyMember_b__93_0__);
    sub_1C6BA08(&BattleLogicFunction___c_TypeInfo);
    byte_4CB93D2 = 1;
  }
  data = this->fields.data;
  if ( !data )
    goto LABEL_61;
  data = (BattleData_o *)BattleData__getAliveFieldEnemyServantIDList(data, 0, 0);
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
  _9__93_0 = (System_Func_object__bool__o *)v12->static_fields->__9__93_0;
  if ( !_9__93_0 )
  {
    if ( !v12->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v12);
      v12 = BattleLogicFunction___c_TypeInfo;
    }
    v14 = (Il2CppObject *)v12->static_fields->__9;
    _9__93_0 = (System_Func_object__bool__o *)sub_1C6BC54(System_Func_BattleServantData__bool__TypeInfo);
    System_Func_object__bool____ctor(
      _9__93_0,
      v14,
      Method_BattleLogicFunction___c__functionReplaceEnemyMember_b__93_0__,
      0);
    static_fields = BattleLogicFunction___c_TypeInfo->static_fields;
    static_fields->__9__93_0 = (struct System_Func_BattleServantData__bool__o *)_9__93_0;
    sub_1C6B9AC((CGThumbnailListItem_o *)&static_fields->__9__93_0, (int32_t)_9__93_0, v16, v17);
  }
  data = (BattleData_o *)System_Linq_Enumerable__Count_object__51761312(
                           enemy_datalist,
                           (System_Func_TSource__bool__o *)_9__93_0,
                           (const MethodInfo_315D0A0 *)Method_System_Linq_Enumerable_Count_BattleServantData____78609176);
  if ( (int)data < 4 )
    return 0;
  if ( !v10 )
    goto LABEL_61;
  if ( !v10->fields.m_CancellationTokenSource )
    return 0;
  v18 = (BattleActionData_o *)sub_1C6BC54(BattleActionData_TypeInfo);
  BattleActionData___ctor(v18, 0);
  if ( !baseVals )
    goto LABEL_61;
  Param = DataVals__GetParam(baseVals, 47, 0, 0);
  data = (BattleData_o *)DataVals__GetParam(baseVals, 48, 0, 0);
  if ( !this->fields.data )
    goto LABEL_61;
  v20 = (int)data;
  data = (BattleData_o *)BattleData__getEnemyServantDataFromNpcId(this->fields.data, Param, 0);
  if ( !this->fields.data )
    goto LABEL_61;
  EnemyServantData = (BattleServantData_o *)data;
  EnemyServantDataFromNpcId = BattleData__getEnemyServantDataFromNpcId(this->fields.data, v20, 0);
  if ( !EnemyServantData )
  {
    data = (BattleData_o *)DataVals__GetParam(baseVals, 49, 0, 0);
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
    if ( (unsigned int)v24 >= LODWORD(v27->max_length) )
      goto LABEL_65;
    data = (BattleData_o *)BattleData__getEnemyServantData(this->fields.data, v27->m_Items[v24], 0);
    if ( !data )
      goto LABEL_61;
    EnemyServantData = (BattleServantData_o *)data;
    data = (BattleData_o *)BattleServantData__isDead((BattleServantData_o *)data, 0);
    if ( ((unsigned __int8)data & 1) != 0 )
    {
      if ( !LODWORD(v10->fields.m_CancellationTokenSource) )
        goto LABEL_65;
      data = this->fields.data;
      if ( !data )
        goto LABEL_61;
      EnemyServantData = BattleData__getEnemyServantData(data, (int32_t)v10->fields.rootfsm, 0);
    }
  }
  if ( !EnemyServantDataFromNpcId )
  {
    data = this->fields.data;
    if ( !data )
      goto LABEL_61;
    EnemyServantDataFromNpcId = BattleData__getEnemySubBackServantData(data, 0);
  }
  result = 0;
  if ( EnemyServantData && EnemyServantDataFromNpcId )
  {
    if ( !EnemyServantData->fields.isEntry || EnemyServantDataFromNpcId->fields.isEntry )
      return 0;
    DeckIndex = BattleServantData__getDeckIndex(EnemyServantData, 0);
    data = (BattleData_o *)BattleServantData__getDeckIndex(EnemyServantDataFromNpcId, 0);
    v30 = this->fields.data;
    if ( v30 )
    {
      v31 = v30->fields.e_entryid;
      if ( v31 )
      {
        v32 = v31->max_length;
        v33 = (int)data;
        if ( DeckIndex >= (int)v32 )
          goto LABEL_47;
        if ( DeckIndex < (unsigned int)v32 )
        {
          if ( v31->m_Items[DeckIndex] == EnemyServantData->fields.uniqueId )
          {
            EnemyServantData->fields.deckIndex = (int)data;
            EnemyServantDataFromNpcId->fields.deckIndex = DeckIndex;
LABEL_54:
            v38 = v30->fields.e_entryid;
            if ( v38 )
            {
              max_length_low = LODWORD(v38->max_length);
              v40 = 0;
              m_Items = v38->m_Items;
              while ( (__int64)v40 < (int)max_length_low )
              {
                if ( v40 >= max_length_low )
                  goto LABEL_65;
                if ( m_Items[v40] == EnemyServantData->fields.uniqueId )
                  m_Items[v40] = EnemyServantDataFromNpcId->fields.uniqueId;
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
                  0);
                data = (BattleData_o *)this->fields.logic;
                if ( data )
                {
                  BattleLogic__UpdateCondBuffValueFlag((BattleLogic_o *)data, 0);
                  return v18;
                }
              }
            }
            goto LABEL_61;
          }
LABEL_47:
          if ( (int)v32 >= 1 )
          {
            uniqueId = EnemyServantData->fields.uniqueId;
            v35 = 0;
            v36 = (unsigned int)v31->max_length;
            v37 = v31->m_Items;
            do
            {
              if ( v37[v35] == uniqueId )
                EnemyServantData->fields.deckIndex = v35;
              ++v35;
            }
            while ( v36 != v35 );
          }
          data = (BattleData_o *)BattleServantData__getDeckIndex(EnemyServantData, 0);
          v30 = this->fields.data;
          EnemyServantData->fields.deckIndex = v33;
          EnemyServantDataFromNpcId->fields.deckIndex = (int)data;
          if ( !v30 )
            goto LABEL_61;
          DeckIndex = (int)data;
          goto LABEL_54;
        }
LABEL_65:
        sub_1C6BC68(data);
      }
    }
LABEL_61:
    sub_1C6BC60(data, funcEnt);
  }
  return result;
}


BattleActionData_o *BattleLogicFunction__functionReplaceMember(
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
  il2cpp_array_size_t max_length; // x11
  int32_t v20; // w25
  int32_t uniqueId; // w10
  __int64 v22; // x8
  __int64 v23; // x11
  int32_t *m_Items; // x9
  struct System_Int32_array *v25; // x8
  unsigned __int64 max_length_low; // x10
  unsigned __int64 v27; // x9
  int32_t *v28; // x12

  if ( (byte_4CB93D1 & 1) == 0 )
  {
    sub_1C6BA08(&BattleActionData_TypeInfo);
    byte_4CB93D1 = 1;
  }
  v11 = (BattleActionData_o *)sub_1C6BC54(BattleActionData_TypeInfo);
  BattleActionData___ctor(v11, 0);
  data = this->fields.data;
  if ( !data )
    goto LABEL_27;
  data = (BattleData_o *)BattleData__getServantData(data, targetId, 0);
  if ( !this->fields.data )
    goto LABEL_27;
  v14 = (BattleServantData_o *)data;
  data = (BattleData_o *)BattleData__getServantData(this->fields.data, subTargetId, 0);
  if ( !v14 )
    goto LABEL_27;
  v15 = (BattleServantData_o *)data;
  data = (BattleData_o *)BattleServantData__getDeckIndex(v14, 0);
  if ( !v15 )
    goto LABEL_27;
  v16 = (int)data;
  data = (BattleData_o *)BattleServantData__getDeckIndex(v15, 0);
  v17 = this->fields.data;
  if ( !v17 )
    goto LABEL_27;
  p_entryid = v17->fields.p_entryid;
  if ( !p_entryid )
    goto LABEL_27;
  max_length = p_entryid->max_length;
  v20 = (int)data;
  if ( v16 >= (int)max_length )
    goto LABEL_36;
  if ( v16 >= (unsigned int)max_length )
LABEL_33:
    sub_1C6BC68(data);
  if ( p_entryid->m_Items[v16] == v14->fields.uniqueId )
  {
    v14->fields.deckIndex = (int)data;
    v15->fields.deckIndex = v16;
  }
  else
  {
LABEL_36:
    if ( (int)max_length >= 1 )
    {
      uniqueId = v14->fields.uniqueId;
      v22 = 0;
      v23 = (unsigned int)p_entryid->max_length;
      m_Items = p_entryid->m_Items;
      do
      {
        if ( m_Items[v22] == uniqueId )
          v14->fields.deckIndex = v22;
        ++v22;
      }
      while ( v23 != v22 );
    }
    data = (BattleData_o *)BattleServantData__getDeckIndex(v14, 0);
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
  max_length_low = LODWORD(v25->max_length);
  v27 = 0;
  v28 = v25->m_Items;
  while ( (__int64)v27 < (int)max_length_low )
  {
    if ( v27 >= max_length_low )
      goto LABEL_33;
    if ( v28[v27] == v14->fields.uniqueId )
      v28[v27] = v15->fields.uniqueId;
    ++v27;
  }
  if ( !v11
    || (BattleActionData__setReplaceMember(v11, v16, v15->fields.uniqueId, v14->fields.uniqueId, funcIndex, 0),
        v11->fields.redrawCommandCard = 1,
        (data = this->fields.data) == 0)
    || (BattleData__SubBuffFromPT_45986296(data, v15, 0), (data = this->fields.data) == 0)
    || (BattleData__SubBuffExitSvt(data, v14, 0), (data = (BattleData_o *)this->fields.logic) == 0) )
  {
LABEL_27:
    sub_1C6BC60(data, v12);
  }
  BattleLogic__UpdateCondBuffValueFlag((BattleLogic_o *)data, 0);
  return v11;
}


BattleActionData_o *BattleLogicFunction__functionResetCommandCard(
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

  if ( (byte_4CB93D0 & 1) == 0 )
  {
    sub_1C6BA08(&BattleActionData_TypeInfo);
    byte_4CB93D0 = 1;
  }
  v7 = (BattleActionData_o *)sub_1C6BC54(BattleActionData_TypeInfo);
  BattleActionData___ctor(v7, 0);
  data = this->fields.data;
  if ( !data
    || (BattleData__SubBuffFromPT_45986296(data, 0, 0), (data = this->fields.data) == 0)
    || (BattleData__shuffleCommand(data, 0), (data = (BattleData_o *)this->fields.logic) == 0)
    || (BattleLogic__drawCommand((BattleLogic_o *)data, 0), (data = (BattleData_o *)this->fields.logic) == 0)
    || (BattleLogic__setDrawCard((BattleLogic_o *)data, 0), !v7) )
  {
    sub_1C6BC60(data, v8);
  }
  v7->fields.redrawCommandCard = 1;
  return v7;
}


BattleActionData_o *BattleLogicFunction__functionResurrection(
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
  int32_t maxhp; // w24
  int32_t Value; // w0
  int32_t v20; // w1
  struct BattleData_o *v21; // x8
  __int64 v22; // x21
  int32_t v23; // w2
  const MethodInfo *v24; // x3
  unsigned int uniqueId; // w8
  struct System_String_o *popupText; // x1
  struct System_Int32_array *effectList; // x1
  int32_t v28; // w2
  const MethodInfo *v29; // x3
  const MethodInfo *v30; // [xsp+0h] [xbp-60h]

  if ( (byte_4CB93DE & 1) == 0 )
  {
    sub_1C6BA08(&BattleActionData_TypeInfo);
    sub_1C6BA08(&BattleActionData_BuffData_TypeInfo);
    byte_4CB93DE = 1;
  }
  v13 = (BattleActionData_o *)sub_1C6BC54(BattleActionData_TypeInfo);
  BattleActionData___ctor(v13, 0);
  data = this->fields.data;
  if ( !data )
    goto LABEL_22;
  data = (BattleData_o *)BattleData__getServantData(data, targetId, 0);
  if ( !data )
    goto LABEL_22;
  v16 = (BattleServantData_o *)data;
  data = (BattleData_o *)((__int64 (__fastcall *)(BattleData_o *, _QWORD))data->klass[1]._1.this_arg.data)(
                           data,
                           *(_QWORD *)&data->klass[1]._1.this_arg.bits);
  if ( (int)data >= 1 )
    return BattleLogicFunction__getNoEffectObject(this, targetId, funcIdx, dataVals, isSideEffect, 0, 0, 0, v30);
  if ( !dataVals )
    goto LABEL_22;
  maxhp = v16->fields.maxhp;
  if ( DataVals__GetValue2(dataVals, 0) < 1 )
    Value = DataVals__GetValue(dataVals, 0);
  else
    Value = DataVals__GetValue2(dataVals, 0) * maxhp / 1000;
  if ( Value <= 1 )
    v20 = 1;
  else
    v20 = Value;
  BattleServantData__setHp(v16, v20, 1, 0, 0);
  v16->fields.status = 0;
  data = (BattleData_o *)BattleServantData__isDeadEscape(v16, 0);
  if ( ((unsigned __int8)data & 1) != 0 )
  {
    v21 = this->fields.data;
    if ( !v21 )
      goto LABEL_22;
    if ( v21->fields.endbattleFlg )
      v16->fields.isSystemDead = 1;
  }
  v22 = sub_1C6BC54(BattleActionData_BuffData_TypeInfo);
  BattleActionData_BuffData___ctor((BattleActionData_BuffData_o *)v22, 0);
  if ( !v22 )
    goto LABEL_22;
  uniqueId = v16->fields.uniqueId;
  *(_DWORD *)(v22 + 16) = 0;
  *(_QWORD *)(v22 + 44) = uniqueId;
  if ( !funcEnt )
    goto LABEL_22;
  popupText = funcEnt->fields.popupText;
  *(_QWORD *)(v22 + 56) = popupText;
  sub_1C6B9AC((CGThumbnailListItem_o *)(v22 + 56), (int32_t)popupText, v23, v24);
  *(_QWORD *)(v22 + 64) = *(_QWORD *)&funcEnt->fields.popupIconId;
  effectList = funcEnt->fields.effectList;
  *(_QWORD *)(v22 + 72) = effectList;
  sub_1C6B9AC((CGThumbnailListItem_o *)(v22 + 72), (int32_t)effectList, v28, v29);
  *(_DWORD *)(v22 + 32) = 2;
  if ( !v13 )
LABEL_22:
    sub_1C6BC60(data, v14);
  BattleActionData__setBuffData(v13, (BattleActionData_BuffData_o *)v22, 0, 0, 0);
  return v13;
}


void BattleLogicFunction__functionShiftServant(
        BattleLogicFunction_o *this,
        BattleActionData_o *actionData,
        BattleServantData_o *targetData,
        DataVals_o *baseVals,
        const MethodInfo *method)
{
  BattleLogicFunction_o *v8; // x21
  int32_t Param; // w24
  int32_t v10; // w23
  __int64 v11; // x23
  int32_t v12; // w2
  const MethodInfo *v13; // x3
  int32_t targetId; // w8
  int32_t v15; // w1
  BattleData_o *data; // x22
  BattleActionData_SkillShiftServant_o *v17; // x21
  bool isOverwriteShift; // [xsp+4h] [xbp-4Ch] BYREF
  System_String_o *motionName; // [xsp+8h] [xbp-48h] BYREF

  v8 = this;
  if ( (byte_4CB93E7 & 1) == 0 )
  {
    sub_1C6BA08(&BattleActionData_TypeInfo);
    sub_1C6BA08(&BattleActorControl_TypeInfo);
    this = (BattleLogicFunction_o *)sub_1C6BA08(&BattleActionData_SkillShiftServant_TypeInfo);
    byte_4CB93E7 = 1;
  }
  motionName = 0;
  isOverwriteShift = 0;
  if ( !baseVals )
    goto LABEL_13;
  Param = DataVals__GetParam(baseVals, 53, 0, 0);
  v10 = DataVals__GetParam(baseVals, 232, 0, 0);
  if ( !BattleActorControl_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(BattleActorControl_TypeInfo);
  BattleActorControl__GetShiftMotionNameAndOverwriteFlag(v10, &motionName, &isOverwriteShift, 0);
  v11 = sub_1C6BC54(BattleActionData_TypeInfo);
  BattleActionData___ctor((BattleActionData_o *)v11, 0);
  if ( !targetData )
    goto LABEL_13;
  if ( !v11 )
    goto LABEL_13;
  *(_DWORD *)(v11 + 32) = targetData->fields.uniqueId;
  if ( !actionData )
    goto LABEL_13;
  targetId = actionData->fields.targetId;
  *(_BYTE *)(v11 + 251) = 1;
  *(_DWORD *)(v11 + 36) = targetId;
  v15 = (int)motionName;
  *(_QWORD *)(v11 + 72) = motionName;
  sub_1C6B9AC((CGThumbnailListItem_o *)(v11 + 72), v15, v12, v13);
  *(_BYTE *)(v11 + 252) = isOverwriteShift;
  *(_BYTE *)(v11 + 253) = DataVals__GetParam(baseVals, 233, 0, 0) == 1;
  BattleActionData__setStateMotion((BattleActionData_o *)v11, 0);
  data = v8->fields.data;
  v17 = (BattleActionData_SkillShiftServant_o *)sub_1C6BC54(BattleActionData_SkillShiftServant_TypeInfo);
  BattleActionData_SkillShiftServant___ctor(v17, data, Param, 0);
  if ( !v17 )
LABEL_13:
    sub_1C6BC60(this, actionData);
  BattleActionData_ShiftServant__setBeforeSvtData((BattleActionData_ShiftServant_o *)v17, targetData, 0);
  if ( actionData->fields.isOverwriteShift )
    BattleActionData_ShiftServant__SetBeforeWeapon((BattleActionData_ShiftServant_o *)v17, targetData, 0);
  BattleActionData__setShiftServant((BattleActionData_o *)v11, (BattleActionData_ShiftServant_o *)v17, 0);
  BattleActionData__setShiftServant(actionData, (BattleActionData_ShiftServant_o *)v17, 0);
  BattleActionData__AddAfterActionData(actionData, (BattleActionData_o *)v11, 1, 0);
}


// local variable allocation has failed, the output may be wrong!
BattleActionData_o *BattleLogicFunction__functionSubState(
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
  int32_t Value2; // w23
  RemovedBuffInfo_o *v22; // x0
  int32_t v23; // w2
  const MethodInfo *v24; // x3
  struct System_Collections_Generic_List_BattleBuffData_BuffData__o *RemovedAllBuffList_k__BackingField; // x27
  BattleActionData_o *v26; // x25
  const MethodInfo *v28; // [xsp+8h] [xbp-78h]
  BattleLogicFunction_ProcListInArgs_o *v29; // [xsp+18h] [xbp-68h]

  if ( (byte_4CB93C4 & 1) == 0 )
  {
    sub_1C6BA08(&BattleActionData_TypeInfo);
    sub_1C6BA08(&BattleServantSnapShotOnBuffUpdate_TypeInfo);
    sub_1C6BA08(&Method_System_Collections_Generic_List_BattleBuffData_BuffData__get_Count__);
    byte_4CB93C4 = 1;
  }
  data = this->fields.data;
  if ( !data )
    goto LABEL_13;
  ServantData = BattleData__getServantData(data, targetId, 0);
  v18 = (BattleServantSnapShotOnBuffUpdate_o *)sub_1C6BC54(BattleServantSnapShotOnBuffUpdate_TypeInfo);
  BattleServantSnapShotOnBuffUpdate___ctor(v18, ServantData, 0);
  if ( !funcEnt )
    goto LABEL_13;
  if ( !baseVals )
    goto LABEL_13;
  vals = funcEnt->fields.vals;
  Value = DataVals__GetValue(baseVals, 0);
  Value2 = DataVals__GetValue2(baseVals, 0);
  data = (BattleData_o *)DataVals__isParam(baseVals, 90, 0);
  if ( !ServantData )
    goto LABEL_13;
  v22 = BattleServantData__subBuffFromIndividualites(ServantData, vals, Value, Value2, 1, (unsigned __int8)data & 1, 0);
  *subBuffInfo = v22;
  sub_1C6B9AC((CGThumbnailListItem_o *)subBuffInfo, (int32_t)v22, v23, v24);
  if ( !*subBuffInfo )
    goto LABEL_13;
  RemovedAllBuffList_k__BackingField = (*subBuffInfo)->fields._RemovedAllBuffList_k__BackingField;
  if ( !RemovedAllBuffList_k__BackingField )
    goto LABEL_13;
  if ( RemovedAllBuffList_k__BackingField->fields._size >= 1 )
  {
    v26 = (BattleActionData_o *)sub_1C6BC54(BattleActionData_TypeInfo);
    BattleActionData___ctor(v26, 0);
    BattleLogicFunction__ApplySubBuffChanges(
      this,
      v26,
      RemovedAllBuffList_k__BackingField,
      targetId,
      v18,
      baseVals,
      index,
      isCommandSideEffect,
      v29,
      v28);
    data = (BattleData_o *)this->fields.logic;
    if ( data )
    {
      BattleLogic__UpdateCondBuffValueFlag((BattleLogic_o *)data, 0);
      return v26;
    }
LABEL_13:
    sub_1C6BC60(data, *(_QWORD *)&targetId);
  }
  return BattleLogicFunction__getNoEffectObject(this, targetId, index, baseVals, isCommandSideEffect, 0, 0, 0, method);
}


BattleActionData_o *BattleLogicFunction__functionTransformServant(
        BattleLogicFunction_o *this,
        int32_t targetId,
        FunctionEntity_o *funcEnt,
        DataVals_o *baeVals,
        int32_t funcIndex,
        BattleLogicFunction_ProcListInArgs_o *procArgs,
        const MethodInfo *method)
{
  BattleLogicFunction___c__DisplayClass95_0_o *v11; // x19
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
  System_Func_object__object__o *_9__95_0; // x20
  Il2CppObject *v23; // x29
  struct BattleLogicFunction___c_StaticFields *static_fields; // x0
  int32_t v25; // w2
  const MethodInfo *v26; // x3
  BattleLogicFunctionUtilities_FunctionProgressCache_o *v27; // x29
  BattleLogicFunctionUtilities_FunctionProgressCache_SvtCache_o *ElemByUniqueId; // x19
  BattleLogicSkill_SkillExecArgs_o *v29; // x20
  struct BattleServantSnapShot_o *Before_k__BackingField; // x8
  struct BattleServantSnapShot_o *After_k__BackingField; // x1
  int32_t v32; // w2
  const MethodInfo *v33; // x3
  struct BattleServantSnapShot_o *v34; // x8
  __int64 naturalAligment; // x11
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
  BattleLogicFunction___c__DisplayClass95_0_o *v57; // [xsp+28h] [xbp-78h]
  BattleActionData_o *v58; // [xsp+30h] [xbp-70h]

  if ( (byte_4CB93D4 & 1) == 0 )
  {
    sub_1C6BA08(&BattleActionEffect_AddSubChangeMaxHpBuff_TypeInfo);
    sub_1C6BA08(&BattleActionData_TypeInfo);
    sub_1C6BA08(&BattleServantSnapShotShiftServant_TypeInfo);
    sub_1C6BA08(&BattleActionData_BuffData_TypeInfo);
    sub_1C6BA08(&Method_System_Linq_Enumerable_FirstOrDefault_BattleActionData_BuffData___);
    sub_1C6BA08(&System_Func_BattleServantData__BattleServantSnapShot__TypeInfo);
    sub_1C6BA08(&System_Func_BattleActionData_BuffData__bool__TypeInfo);
    sub_1C6BA08(&BattleLogicFunctionUtilities_FunctionProgressCache_TypeInfo);
    sub_1C6BA08(&BattleActionData_ShiftServant_TypeInfo);
    sub_1C6BA08(&BattleLogicSkill_SkillExecArgs_TypeInfo);
    sub_1C6BA08(&Method_BattleLogicFunction___c__functionTransformServant_b__95_0__);
    sub_1C6BA08(&Method_BattleLogicFunction___c__DisplayClass95_0__functionTransformServant_b__1__);
    sub_1C6BA08(&BattleLogicFunction___c__DisplayClass95_0_TypeInfo);
    sub_1C6BA08(&BattleLogicFunction___c_TypeInfo);
    byte_4CB93D4 = 1;
  }
  v11 = (BattleLogicFunction___c__DisplayClass95_0_o *)sub_1C6BC54(BattleLogicFunction___c__DisplayClass95_0_TypeInfo);
  BattleLogicFunction___c__DisplayClass95_0___ctor(v11, 0);
  if ( !v11 )
    goto LABEL_49;
  v11->fields.targetId = targetId;
  v14 = (BattleActionData_o *)sub_1C6BC54(BattleActionData_TypeInfo);
  BattleActionData___ctor(v14, 0);
  data = this->fields.data;
  if ( !data )
    goto LABEL_49;
  data = (BattleData_o *)BattleData__getServantData(data, v11->fields.targetId, 0);
  if ( !baeVals )
    goto LABEL_49;
  v15 = (BattleServantData_o *)data;
  Param = DataVals__GetParam(baeVals, 6, 0, 0);
  v17 = DataVals__GetParam(baeVals, 77, 0, 0);
  data = (BattleData_o *)DataVals__IsCancelTransform(baeVals, 0);
  if ( ((unsigned __int8)data & 1) != 0 )
  {
    if ( !v15 )
      goto LABEL_49;
    if ( BattleServantData__get_isTransformed(v15, 0) )
      Param = -1;
  }
  v57 = v11;
  v18 = sub_1C6BC54(BattleActionData_ShiftServant_TypeInfo);
  BattleActionData_ShiftServant___ctor((BattleActionData_ShiftServant_o *)v18, funcIndex, 0);
  if ( !v18 )
    goto LABEL_49;
  BattleActionData_ShiftServant__setBeforeSvtData((BattleActionData_ShiftServant_o *)v18, v15, 0);
  if ( !v14 )
    goto LABEL_49;
  BattleActionData__setShiftServant(v14, (BattleActionData_ShiftServant_o *)v18, 0);
  if ( !v15 )
    goto LABEL_49;
  v15->fields.shiftNpcId = -1;
  v15->fields.beforeUserSvtId = -1;
  data = this->fields.data;
  if ( !data )
    goto LABEL_49;
  FieldAliveLogicServantArray = BattleData__GetFieldAliveLogicServantArray(data, 3, 0, 0);
  v20 = BattleLogicFunction___c_TypeInfo;
  v21 = FieldAliveLogicServantArray;
  if ( !BattleLogicFunction___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BattleLogicFunction___c_TypeInfo);
    v20 = BattleLogicFunction___c_TypeInfo;
  }
  v58 = v14;
  _9__95_0 = (System_Func_object__object__o *)v20->static_fields->__9__95_0;
  if ( !_9__95_0 )
  {
    if ( !v20->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v20);
      v20 = BattleLogicFunction___c_TypeInfo;
    }
    v23 = (Il2CppObject *)v20->static_fields->__9;
    _9__95_0 = (System_Func_object__object__o *)sub_1C6BC54(System_Func_BattleServantData__BattleServantSnapShot__TypeInfo);
    System_Func_object__object____ctor(
      _9__95_0,
      v23,
      Method_BattleLogicFunction___c__functionTransformServant_b__95_0__,
      0);
    static_fields = BattleLogicFunction___c_TypeInfo->static_fields;
    static_fields->__9__95_0 = (struct System_Func_BattleServantData__BattleServantSnapShot__o *)_9__95_0;
    sub_1C6B9AC((CGThumbnailListItem_o *)&static_fields->__9__95_0, (int32_t)_9__95_0, v25, v26);
  }
  v27 = (BattleLogicFunctionUtilities_FunctionProgressCache_o *)sub_1C6BC54(BattleLogicFunctionUtilities_FunctionProgressCache_TypeInfo);
  BattleLogicFunctionUtilities_FunctionProgressCache___ctor(
    v27,
    v21,
    (System_Func_BattleServantData__BattleServantSnapShot__o *)_9__95_0,
    0);
  if ( !v27 )
    goto LABEL_49;
  BattleLogicFunctionUtilities_FunctionProgressCache__MakeBeforeSvtCache(v27, 0);
  ElemByUniqueId = BattleLogicFunctionUtilities_FunctionProgressCache__GetElemByUniqueId(v27, v11->fields.targetId, 0);
  v29 = (BattleLogicSkill_SkillExecArgs_o *)sub_1C6BC54(BattleLogicSkill_SkillExecArgs_TypeInfo);
  BattleLogicSkill_SkillExecArgs___ctor(v29, 0);
  BattleServantData__setTransformServant(v15, this->fields.data, Param, v17, 0, v29, 0);
  if ( !ElemByUniqueId )
    goto LABEL_49;
  Before_k__BackingField = ElemByUniqueId->fields._Before_k__BackingField;
  if ( !Before_k__BackingField )
    goto LABEL_49;
  BattleServantData__CheckUpdateUpDownOnlyResultHp(v15, Before_k__BackingField->fields._MaxHp_k__BackingField, 1, 0);
  BattleLogicFunctionUtilities_FunctionProgressCache__MakeAfterSvtCache(v27, 0);
  After_k__BackingField = ElemByUniqueId->fields._After_k__BackingField;
  *(_QWORD *)(v18 + 64) = After_k__BackingField;
  sub_1C6B9AC((CGThumbnailListItem_o *)(v18 + 64), (int32_t)After_k__BackingField, v32, v33);
  v34 = ElemByUniqueId->fields._Before_k__BackingField;
  v54 = ElemByUniqueId;
  if ( !v34 )
    goto LABEL_25;
  naturalAligment = BattleServantSnapShotShiftServant_TypeInfo->_2.naturalAligment;
  if ( v34->klass->_2.naturalAligment >= (unsigned int)naturalAligment )
    v36 = (BattleServantSnapShotShiftServant_c *)v34->klass->_2.typeHierarchy[naturalAligment - 1] == BattleServantSnapShotShiftServant_TypeInfo
        ? (BattleServantSnapShotShiftServant_o *)ElemByUniqueId->fields._Before_k__BackingField
        : 0LL;
  else
LABEL_25:
    v36 = 0;
  v56 = this;
  BattleServantData__ApplyCacheForTransformServant(v15, v36, 0);
  SvtCacheArray_k__BackingField = v27->fields._SvtCacheArray_k__BackingField;
  if ( !SvtCacheArray_k__BackingField )
LABEL_49:
    sub_1C6BC60(data, v13);
  max_length = SvtCacheArray_k__BackingField->max_length;
  v39 = v58;
  v55 = v15;
  if ( max_length >= 1 )
  {
    v40 = 0;
    do
    {
      if ( v40 >= max_length )
        sub_1C6BC68(data);
      v41 = SvtCacheArray_k__BackingField->m_Items[v40];
      if ( !v41 )
        goto LABEL_49;
      SvtData_k__BackingField = v41->fields._SvtData_k__BackingField;
      if ( !SvtData_k__BackingField )
        goto LABEL_49;
      uniqueId = SvtData_k__BackingField->fields.uniqueId;
      v44 = (BattleActionData_BuffData_o *)sub_1C6BC54(BattleActionData_BuffData_TypeInfo);
      BattleActionData_BuffData___ctor(v44, 0);
      if ( !v44 )
        goto LABEL_49;
      v44->fields.targetId = uniqueId;
      v44->fields.isHideEffect = 1;
      v44->fields.functionIndex = funcIndex;
      v45 = v41->fields._Before_k__BackingField;
      v46 = v41->fields._After_k__BackingField;
      v47 = (BattleActionEffect_AddSubChangeMaxHpBuff_o *)sub_1C6BC54(BattleActionEffect_AddSubChangeMaxHpBuff_TypeInfo);
      BattleActionEffect_AddSubChangeMaxHpBuff___ctor(v47, uniqueId, v45, v46, 0);
      BattleActionData_BuffData__SetActionEffectProc(v44, (BattleActionEffect_Base_o *)v47, 0);
      v48 = v41->fields._SvtData_k__BackingField;
      if ( !v48 )
        goto LABEL_49;
      BattleActionData_BuffData__setSaveNp(v44, v48->fields.np, 0);
      v39 = v58;
      BattleActionData__setBuffData(v58, v44, 0, 0, 0);
      max_length = SvtCacheArray_k__BackingField->max_length;
    }
    while ( (int)++v40 < max_length );
  }
  BattleActionData__addReflectLogicResultServantId(v39, v57->fields.targetId, 0);
  buffdatalist = (System_Collections_Generic_IEnumerable_TSource__o *)v39->fields.buffdatalist;
  v50 = (System_Func_object__bool__o *)sub_1C6BC54(System_Func_BattleActionData_BuffData__bool__TypeInfo);
  System_Func_object__bool____ctor(
    v50,
    (Il2CppObject *)v57,
    Method_BattleLogicFunction___c__DisplayClass95_0__functionTransformServant_b__1__,
    0);
  data = (BattleData_o *)System_Linq_Enumerable__FirstOrDefault_object__51793644(
                           buffdatalist,
                           (System_Func_TSource__bool__o *)v50,
                           (const MethodInfo_3164EEC *)Method_System_Linq_Enumerable_FirstOrDefault_BattleActionData_BuffData___);
  if ( !procArgs )
    goto LABEL_49;
  if ( !procArgs->fields._IsTreasureDvc_k__BackingField )
  {
    if ( !data )
      goto LABEL_46;
    LODWORD(v13) = v55->fields.nexttpturn;
LABEL_45:
    BattleActionData_BuffData__SetSaveTpTurn((BattleActionData_BuffData_o *)data, v13, 0);
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
  BattleFieldEnvironmentData__RemoveBgmNotExistsChangeBgmBuff((BattleFieldEnvironmentData_o *)data, 0);
  return v39;
}


BattleActionData_o *BattleLogicFunction__functionValueDamage(
        BattleLogicFunction_o *this,
        int32_t playerId,
        int32_t targetId,
        DataVals_o *baseVals,
        int32_t funcIndex,
        bool safe,
        BattleActionData_o *mainAction,
        const MethodInfo *method)
{
  BattleActionData_o *v14; // x27
  __int64 v15; // x1
  BattleData_o *data; // x0
  BattleServantData_o *v17; // x25
  BattleServantData_o *v18; // x23
  System_Int32_array *FixDamageRates; // x19
  __int64 v20; // x24
  int32_t Param; // w0
  int Random; // w26
  bool v23; // w21
  int32_t v24; // w20
  int IsIgnoreShiftSafeDamage; // w19
  BattleActionData_o *v26; // x28
  struct BattleSkillInfoData_o *skillInfo; // x8
  DataMasterBase_TMaster__TEntity__PKType__o *v28; // x27
  BattleActionData_o *v29; // x27
  int v30; // w19
  int v31; // w8
  struct BattleSkillInfoData_o *v32; // x8
  int32_t type; // w1
  System_Nullable_Int32Enum__o v34; // x0
  bool v35; // zf
  unsigned __int64 v36; // x8
  bool v37; // w9
  bool v38; // w19
  int v39; // w19
  int32_t v40; // w2
  const MethodInfo *v41; // x3
  long double inited; // q0
  int v43; // w20
  int32_t v44; // w8
  _QWORD *v45; // x19
  __int64 v46; // x8
  __int64 v47; // x0
  __int64 v48; // x0
  __int64 *v49; // x8
  __int64 v50; // x1
  int32_t v51; // w2
  const MethodInfo *v52; // x3
  long double v53; // q0
  _QWORD *v54; // x19
  __int64 v55; // x8
  __int64 v56; // x0
  __int64 v57; // x0
  __int64 *v58; // x8
  __int64 v59; // x1
  int32_t v60; // w28
  System_Int32_array *v61; // x0
  int32_t v62; // w2
  const MethodInfo *v63; // x3
  int32_t v64; // w2
  const MethodInfo *v65; // x3
  long double v66; // q0
  _QWORD *v67; // x19
  __int64 v68; // x8
  __int64 v69; // x0
  __int64 v70; // x0
  __int64 *v71; // x8
  __int64 v72; // x1
  int32_t v73; // w2
  const MethodInfo *v74; // x3
  long double v75; // q0
  _QWORD *v76; // x19
  __int64 v77; // x8
  __int64 v78; // x0
  __int64 v79; // x0
  __int64 *v80; // x8
  __int64 v81; // x1
  int32_t v82; // w2
  const MethodInfo *v83; // x3
  long double v84; // q0
  _QWORD *v85; // x19
  __int64 v86; // x8
  __int64 v87; // x0
  __int64 v88; // x0
  __int64 *v89; // x8
  __int64 v90; // x1
  BattleLogicFunction_o *v91; // x19
  struct BattleData_o *v92; // x8
  int32_t wavecount; // w19
  bool IsOpponentPTUniqueID; // w0
  int32_t bId; // [xsp+1Ch] [xbp-A4h]
  BattleLogicFunction_o *v97; // [xsp+20h] [xbp-A0h]
  struct BattleSkillInfoData_o *v99; // [xsp+30h] [xbp-90h] BYREF
  Il2CppObject *entity; // [xsp+38h] [xbp-88h] BYREF
  bool minimumDamageFlg; // [xsp+40h] [xbp-80h] BYREF
  float damage; // [xsp+44h] [xbp-7Ch] BYREF
  System_Collections_Generic_List_int__o *v103; // [xsp+48h] [xbp-78h] BYREF
  int32_t executeEffectId; // [xsp+54h] [xbp-6Ch] BYREF
  int32_t hitStat[2]; // [xsp+58h] [xbp-68h] BYREF

  if ( (byte_4CB93DD & 1) == 0 )
  {
    sub_1C6BA08(&Method_System_Array_Empty_int___);
    sub_1C6BA08(&Method_System_Array_Empty_BattleBuffData_ShowBuffData___);
    sub_1C6BA08(&BattleActionData_TypeInfo);
    sub_1C6BA08(&BattleActionData_DamageValueFuncDamageData_TypeInfo);
    sub_1C6BA08(&Method_DataManager_GetMaster_SkillMaster___);
    sub_1C6BA08(&DataManager_TypeInfo);
    sub_1C6BA08(&Method_DataMasterBase_SkillMaster__SkillEntity__int__TryGetEntity__);
    sub_1C6BA08(&Method_System_Collections_Generic_List_int__ToArray__);
    sub_1C6BA08(&Method_System_Nullable_BattleSkillInfoData_TYPE__GetValueOrDefault__);
    sub_1C6BA08(&Method_System_Nullable_BattleSkillInfoData_TYPE___ctor__);
    sub_1C6BA08(&Method_System_Nullable_BattleSkillInfoData_TYPE__get_HasValue__);
    byte_4CB93DD = 1;
  }
  *(_QWORD *)hitStat = 0;
  executeEffectId = 0;
  v103 = 0;
  damage = 0.0;
  minimumDamageFlg = 0;
  entity = 0;
  v14 = (BattleActionData_o *)sub_1C6BC54(BattleActionData_TypeInfo);
  BattleActionData___ctor(v14, 0);
  data = this->fields.data;
  if ( !data )
    goto LABEL_111;
  data = (BattleData_o *)BattleData__getServantData(data, playerId, 0);
  if ( !this->fields.data )
    goto LABEL_111;
  v17 = (BattleServantData_o *)data;
  v97 = this;
  bId = playerId;
  data = (BattleData_o *)BattleData__getServantData(this->fields.data, targetId, 0);
  if ( !baseVals )
    goto LABEL_111;
  v18 = (BattleServantData_o *)data;
  FixDamageRates = DataVals__GetFixDamageRates(baseVals, 0);
  v20 = sub_1C6BC54(BattleActionData_DamageValueFuncDamageData_TypeInfo);
  BattleActionData_DamageValueFuncDamageData___ctor(
    (BattleActionData_DamageValueFuncDamageData_o *)v20,
    FixDamageRates,
    0);
  LODWORD(FixDamageRates) = DataVals__GetValue(baseVals, 0);
  Param = DataVals__GetParam(baseVals, 4, 0, 0);
  Random = BattleRandom__getRandom((int32_t)FixDamageRates, Param + 1, 0);
  hitStat[1] = 0;
  data = (BattleData_o *)DataVals__IsActNoDamageBuff(baseVals, 0);
  if ( ((unsigned __int8)data & 1) != 0 )
  {
    if ( !v18 )
      goto LABEL_111;
    v23 = safe;
    v24 = funcIndex;
    BattleServantData__CheckNoDamageBuff(
      v18,
      v97->fields.data,
      v17,
      0,
      (BattleActionData_DamageData_o *)v20,
      mainAction,
      0);
    damage = (float)Random;
    minimumDamageFlg = 1;
    BattleServantData__CheckInvincibleAvoidanceBuff(
      v18,
      v97->fields.data,
      v17,
      0,
      (BattleActionData_DamageData_o *)v20,
      &damage,
      &minimumDamageFlg,
      &hitStat[1],
      mainAction,
      0);
    if ( damage <= 0.0 )
      Random = 0;
  }
  else
  {
    v23 = safe;
    v24 = funcIndex;
  }
  IsIgnoreShiftSafeDamage = DataVals__IsIgnoreShiftSafeDamage(baseVals, 0);
  v26 = mainAction ? v14 : 0LL;
  if ( mainAction && mainAction->fields.skillInfo )
  {
    if ( !DataManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
    data = (BattleData_o *)DataManager__GetMaster_object_((const MethodInfo_313B314 *)Method_DataManager_GetMaster_SkillMaster___);
    skillInfo = mainAction->fields.skillInfo;
    if ( !skillInfo )
      goto LABEL_111;
    v28 = (DataMasterBase_TMaster__TEntity__PKType__o *)data;
    data = (BattleData_o *)((BattleData_o *(__fastcall *)(struct BattleSkillInfoData_o *__return_ptr, struct BattleSkillInfoData_o *, const MethodInfo *))skillInfo->klass->vtable._5_get_skillId.methodPtr)(
                             skillInfo,
                             mainAction->fields.skillInfo,
                             skillInfo->klass->vtable._5_get_skillId.method);
    if ( !v28 )
      goto LABEL_111;
    if ( DataMasterBase_object__object__int___TryGetEntity(
           v28,
           &entity,
           (int32_t)data,
           (const MethodInfo_33F9128 *)Method_DataMasterBase_SkillMaster__SkillEntity__int__TryGetEntity__) )
    {
      data = (BattleData_o *)entity;
      if ( !entity )
        goto LABEL_111;
      IsIgnoreShiftSafeDamage |= SkillEntity__IsCheckUpdateShiftServant((SkillEntity_o *)entity, 0);
    }
  }
  else
  {
    v26 = v14;
  }
  data = v97->fields.data;
  if ( !data )
    goto LABEL_111;
  data = (BattleData_o *)BattleData__IsDeadOkTurn(data, targetId, 0);
  v29 = ((unsigned __int8)data & 1) != 0 ? 0LL : v26;
  if ( (((unsigned __int8)data | (unsigned __int8)IsIgnoreShiftSafeDamage) & 1) != 0 )
  {
    if ( v23 )
    {
      if ( !v18 )
        goto LABEL_111;
      if ( (int)(((__int64 (__fastcall *)(BattleServantData_o *, const MethodInfo *))v18->klass->vtable._13_get_resultHp.methodPtr)(
                   v18,
                   v18->klass->vtable._13_get_resultHp.method)
               - Random) <= 0 )
        Random = ((__int64 (__fastcall *)(BattleServantData_o *, const MethodInfo *))v18->klass->vtable._13_get_resultHp.methodPtr)(
                   v18,
                   v18->klass->vtable._13_get_resultHp.method)
               - 1;
    }
    v29 = v26;
  }
  else
  {
    if ( !v18 )
      goto LABEL_111;
    v30 = ((__int64 (__fastcall *)(BattleServantData_o *, const MethodInfo *))v18->klass->vtable._9_get_hp.methodPtr)(
            v18,
            v18->klass->vtable._9_get_hp.method);
    v31 = v30
        - ((__int64 (__fastcall *)(BattleServantData_o *, const MethodInfo *))v18->klass->vtable._11_get_reducedhp.methodPtr)(
            v18,
            v18->klass->vtable._11_get_reducedhp.method);
    if ( v31 >= 1 && v31 < Random )
      Random = v31 - 1;
  }
  if ( mainAction )
  {
    v32 = mainAction->fields.skillInfo;
    if ( v32 )
    {
      type = v32->fields.type;
      v34 = (System_Nullable_Int32Enum__o)&v99;
      v99 = 0;
      System_Nullable_Int32Enum____ctor(
        v34,
        type,
        (const MethodInfo_3929354 *)Method_System_Nullable_BattleSkillInfoData_TYPE___ctor__);
      v32 = v99;
    }
    v35 = (unsigned __int8)v32 == 0;
    v36 = (unsigned __int64)v32 >> 32;
    v37 = !v35;
    v38 = v36 == 1 && v37;
  }
  else
  {
    v38 = 0;
  }
  data = (BattleData_o *)DataVals__IsActNoDamageBuff(baseVals, 0);
  if ( ((unsigned __int8)data & 1) == 0 )
    goto LABEL_51;
  if ( !v18 )
    goto LABEL_111;
  data = (BattleData_o *)BattleServantData__TryGetReactiveDamageGainHpValue(
                           v18,
                           hitStat,
                           &executeEffectId,
                           Random,
                           0,
                           v17,
                           0,
                           v38,
                           0);
  if ( ((unsigned __int8)data & 1) != 0 )
  {
    Random = hitStat[0];
    hitStat[1] = 6;
    if ( !v20 )
      goto LABEL_111;
    v39 = 1;
    *(_DWORD *)(v20 + 168) = executeEffectId;
  }
  else
  {
LABEL_51:
    if ( !v20 )
      goto LABEL_111;
    v39 = 0;
  }
  *(_DWORD *)(v20 + 16) = v24;
  *(_DWORD *)(v20 + 32) = targetId;
  data = (BattleData_o *)baseVals->fields.funcEnt;
  if ( !data )
    goto LABEL_111;
  data = (BattleData_o *)FunctionEntity__getEffectList((FunctionEntity_o *)data, 0);
  if ( !data )
    goto LABEL_111;
  v43 = v39;
  if ( data->fields.m_CancellationTokenSource )
  {
    *(_QWORD *)(v20 + 136) = data;
    sub_1C6B9AC((CGThumbnailListItem_o *)(v20 + 136), (int32_t)data, v40, v41);
  }
  *(_WORD *)(v20 + 36) = 0;
  *(_BYTE *)(v20 + 38) = 0;
  v44 = hitStat[1];
  *(_BYTE *)(v20 + 44) = 0;
  *(_DWORD *)(v20 + 40) = v44;
  v45 = Method_System_Array_Empty_BattleBuffData_ShowBuffData___;
  v46 = *((_QWORD *)Method_System_Array_Empty_BattleBuffData_ShowBuffData___ + 7);
  if ( !v46 )
  {
    sub_1C41AF8(Method_System_Array_Empty_BattleBuffData_ShowBuffData___);
    v46 = v45[7];
  }
  v47 = *(_QWORD *)(v46 + 16);
  if ( (*(_BYTE *)(v47 + 309) & 1) == 0 )
    v47 = sub_1C41A9C(inited);
  if ( !*(_DWORD *)(v47 + 224) )
    inited = j_il2cpp_runtime_class_init_0(v47);
  v48 = *(_QWORD *)(v45[7] + 16LL);
  if ( (*(_BYTE *)(v48 + 309) & 1) == 0 )
    v48 = sub_1C41A9C(inited);
  v49 = *(__int64 **)(v48 + 184);
  v50 = *v49;
  *(_QWORD *)(v20 + 64) = *v49;
  sub_1C6B9AC((CGThumbnailListItem_o *)(v20 + 64), v50, v40, v41);
  v54 = Method_System_Array_Empty_BattleBuffData_ShowBuffData___;
  v55 = *((_QWORD *)Method_System_Array_Empty_BattleBuffData_ShowBuffData___ + 7);
  if ( !v55 )
  {
    sub_1C41AF8(Method_System_Array_Empty_BattleBuffData_ShowBuffData___);
    v55 = v54[7];
  }
  v56 = *(_QWORD *)(v55 + 16);
  if ( (*(_BYTE *)(v56 + 309) & 1) == 0 )
    v56 = sub_1C41A9C(v53);
  if ( !*(_DWORD *)(v56 + 224) )
    v53 = j_il2cpp_runtime_class_init_0(v56);
  v57 = *(_QWORD *)(v54[7] + 16LL);
  if ( (*(_BYTE *)(v57 + 309) & 1) == 0 )
    v57 = sub_1C41A9C(v53);
  v58 = *(__int64 **)(v57 + 184);
  v59 = *v58;
  *(_QWORD *)(v20 + 72) = *v58;
  sub_1C6B9AC((CGThumbnailListItem_o *)(v20 + 72), v59, v51, v52);
  data = (BattleData_o *)(*(__int64 (__fastcall **)(__int64, System_Collections_Generic_List_int__o **, _QWORD, _QWORD, _QWORD))(*(_QWORD *)v20 + 376LL))(
                           v20,
                           &v103,
                           (unsigned int)Random,
                           0,
                           *(_QWORD *)(*(_QWORD *)v20 + 384LL));
  if ( !v103 )
    goto LABEL_111;
  v60 = (int)data;
  v61 = System_Collections_Generic_List_int___ToArray(
          v103,
          (const MethodInfo_37E5408 *)Method_System_Collections_Generic_List_int__ToArray__);
  *(_QWORD *)(v20 + 96) = v61;
  sub_1C6B9AC((CGThumbnailListItem_o *)(v20 + 96), (int32_t)v61, v62, v63);
  if ( v17 )
    BattleServantData__CacheDealtDamage(v17, (BattleActionData_DamageData_o *)v20, 0);
  v67 = Method_System_Array_Empty_int___;
  v68 = *((_QWORD *)Method_System_Array_Empty_int___ + 7);
  if ( !v68 )
  {
    sub_1C41AF8(Method_System_Array_Empty_int___);
    v68 = v67[7];
  }
  v69 = *(_QWORD *)(v68 + 16);
  if ( (*(_BYTE *)(v69 + 309) & 1) == 0 )
    v69 = sub_1C41A9C(v66);
  if ( !*(_DWORD *)(v69 + 224) )
    v66 = j_il2cpp_runtime_class_init_0(v69);
  v70 = *(_QWORD *)(v67[7] + 16LL);
  if ( (*(_BYTE *)(v70 + 309) & 1) == 0 )
    v70 = sub_1C41A9C(v66);
  v71 = *(__int64 **)(v70 + 184);
  v72 = *v71;
  *(_QWORD *)(v20 + 104) = *v71;
  sub_1C6B9AC((CGThumbnailListItem_o *)(v20 + 104), v72, v64, v65);
  v76 = Method_System_Array_Empty_int___;
  v77 = *((_QWORD *)Method_System_Array_Empty_int___ + 7);
  if ( !v77 )
  {
    sub_1C41AF8(Method_System_Array_Empty_int___);
    v77 = v76[7];
  }
  v78 = *(_QWORD *)(v77 + 16);
  if ( (*(_BYTE *)(v78 + 309) & 1) == 0 )
    v78 = sub_1C41A9C(v75);
  if ( !*(_DWORD *)(v78 + 224) )
    v75 = j_il2cpp_runtime_class_init_0(v78);
  v79 = *(_QWORD *)(v76[7] + 16LL);
  if ( (*(_BYTE *)(v79 + 309) & 1) == 0 )
    v79 = sub_1C41A9C(v75);
  v80 = *(__int64 **)(v79 + 184);
  v81 = *v80;
  *(_QWORD *)(v20 + 112) = *v80;
  sub_1C6B9AC((CGThumbnailListItem_o *)(v20 + 112), v81, v73, v74);
  v85 = Method_System_Array_Empty_int___;
  v86 = *((_QWORD *)Method_System_Array_Empty_int___ + 7);
  if ( !v86 )
  {
    sub_1C41AF8(Method_System_Array_Empty_int___);
    v86 = v85[7];
  }
  v87 = *(_QWORD *)(v86 + 16);
  if ( (*(_BYTE *)(v87 + 309) & 1) == 0 )
    v87 = sub_1C41A9C(v84);
  if ( !*(_DWORD *)(v87 + 224) )
    v84 = j_il2cpp_runtime_class_init_0(v87);
  v88 = *(_QWORD *)(v85[7] + 16LL);
  if ( (*(_BYTE *)(v88 + 309) & 1) == 0 )
    v88 = sub_1C41A9C(v84);
  v89 = *(__int64 **)(v88 + 184);
  v90 = *v89;
  *(_QWORD *)(v20 + 120) = *v89;
  sub_1C6B9AC((CGThumbnailListItem_o *)(v20 + 120), v90, v82, v83);
  if ( !v18 )
    goto LABEL_111;
  if ( v43 )
  {
    BattleServantData__resultHeal(v18, v60, 0);
    v91 = v97;
  }
  else
  {
    BattleServantData__provisionalDamage(v18, Random, 0);
    BattleServantData__ResultDamage(v18, Random, v17, 0, 0, 0, 0);
    data = (BattleData_o *)BattleServantData__isLogicResultAlive(v18, 0);
    v91 = v97;
    if ( ((unsigned __int8)data & 1) == 0 )
    {
      v92 = v97->fields.data;
      if ( !v92 )
        goto LABEL_111;
      v18->fields.deadTurn = v92->fields.typeTurn;
    }
  }
  data = (BattleData_o *)DataVals__IsActAttackFunction(baseVals, 0);
  if ( ((unsigned __int8)data & 1) != 0 )
    BattleActionData_DamageData__addAttackSideEffectAction((BattleActionData_DamageData_o *)v20, 80, 0);
  if ( !v29
    || (BattleActionData__SetFuncDamageData(v29, (BattleActionData_DamageData_o *)v20, baseVals, 0),
        (data = v91->fields.data) == 0) )
  {
LABEL_111:
    sub_1C6BC60(data, v15);
  }
  wavecount = data->fields.wavecount;
  IsOpponentPTUniqueID = BattleData__IsOpponentPTUniqueID(data, targetId, bId, 0);
  BattleServantData__setActionHistory(v18, bId, 7, wavecount, IsOpponentPTUniqueID, 0);
  return v29;
}


BattleActionData_o *BattleLogicFunction__functionlossHp(
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
  const MethodInfo *v33; // x3
  long double inited; // q0
  struct BattleBuffData_o *buffData; // x8
  _QWORD *v36; // x23
  __int64 v37; // x8
  __int64 v38; // x0
  __int64 v39; // x0
  __int64 *v40; // x8
  __int64 v41; // x23
  int32_t v42; // w2
  const MethodInfo *v43; // x3
  int32_t v44; // w2
  const MethodInfo *v45; // x3
  long double v46; // q0
  _QWORD *v47; // x23
  __int64 v48; // x8
  __int64 v49; // x0
  __int64 v50; // x0
  __int64 *v51; // x8
  __int64 v52; // x23
  int32_t v53; // w2
  const MethodInfo *v54; // x3
  int32_t v55; // w2
  const MethodInfo *v56; // x3
  struct BattleBuffData_o *v57; // x8
  CGThumbnailListItem_o *p_invalidLossHpData; // x0
  int32_t v59; // w1
  bool v60; // w25
  UnityEngine_Object_o *logic; // x23
  int32_t Wave; // w23
  bool IsOpponentPTUniqueID; // w0
  BattleActionEffect_LossHPFunc_o *v64; // x23
  BattleActionData_BuffData_o *v65; // x0
  struct BattleBuffData_o *v66; // x8
  int32_t v67; // w0
  int32_t v69; // [xsp+18h] [xbp-78h]
  int32_t v70; // [xsp+1Ch] [xbp-74h]
  bool v71; // [xsp+20h] [xbp-70h]
  bool v72; // [xsp+24h] [xbp-6Ch]
  bool minimumDamageFlg; // [xsp+28h] [xbp-68h] BYREF
  float damage; // [xsp+2Ch] [xbp-64h] BYREF

  if ( (byte_4CB93CC & 1) == 0 )
  {
    sub_1C6BA08(&Method_System_Array_Empty_int___);
    sub_1C6BA08(&Method_System_Array_Empty_BattleBuffData_ShowBuffData___);
    sub_1C6BA08(&BattleActionData_TypeInfo);
    sub_1C6BA08(&BattleActionData_DamageData_TypeInfo);
    sub_1C6BA08(&BattleActionEffect_LossHPFunc_TypeInfo);
    sub_1C6BA08(&UnityEngine_Object_TypeInfo);
    byte_4CB93CC = 1;
  }
  damage = 0.0;
  minimumDamageFlg = 0;
  v20 = (BattleActionData_o *)sub_1C6BC54(BattleActionData_TypeInfo);
  BattleActionData___ctor(v20, 0);
  data = (__int64)this->fields.data;
  if ( !data )
    goto LABEL_67;
  v72 = safe;
  data = (__int64)BattleData__getServantData((BattleData_o *)data, targetId, 0);
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
    data = DataVals__GetValue(baseVals, 0);
    Random = data;
  }
  if ( isRandomDamage )
  {
    if ( !baseVals )
      goto LABEL_67;
    Param = DataVals__GetParam(baseVals, 4, 0, 0);
    if ( Param >= 1 )
      Random = BattleRandom__getRandom(Random, Param + 1, 0);
  }
  if ( v25 < 1 )
    return 0;
  data = (__int64)this->fields.data;
  if ( !data )
    goto LABEL_67;
  IsDeadOkTurn = BattleData__IsDeadOkTurn((BattleData_o *)data, targetId, 0);
  v70 = funcIndex;
  v71 = IsDeadOkTurn;
  data = (__int64)BattleLogicFunction__getFunctionObject(
                    (BattleLogicFunction_o *)IsDeadOkTurn,
                    funcEnt,
                    v24->fields.uniqueId,
                    funcIndex,
                    isCommandSideEffect,
                    0,
                    v28);
  if ( !this->fields.data )
    goto LABEL_67;
  v29 = (BattleActionData_BuffData_o *)data;
  data = (__int64)BattleData__getServantData(this->fields.data, playerId, 0);
  if ( !baseVals )
    goto LABEL_67;
  v30 = (BattleServantData_o *)data;
  v69 = v25;
  if ( DataVals__IsActNoDamageBuff(baseVals, 0) )
  {
    v31 = sub_1C6BC54(BattleActionData_DamageData_TypeInfo);
    BattleActionData_DamageData___ctor((BattleActionData_DamageData_o *)v31, 0);
    BattleServantData__CheckNoDamageBuff(
      v24,
      this->fields.data,
      v30,
      0,
      (BattleActionData_DamageData_o *)v31,
      mainAction,
      0);
    damage = (float)Random;
    minimumDamageFlg = 1;
    if ( !v31 )
      goto LABEL_67;
    *(_DWORD *)(v31 + 40) = 0;
    BattleServantData__CheckInvincibleAvoidanceBuff(
      v24,
      this->fields.data,
      v30,
      0,
      (BattleActionData_DamageData_o *)v31,
      &damage,
      &minimumDamageFlg,
      (int32_t *)(v31 + 40),
      mainAction,
      0);
    *(float *)&inited = damage;
    buffData = v24->fields.buffData;
    if ( damage <= 0.0 )
      Random = 0;
    if ( !buffData )
      goto LABEL_67;
    if ( buffData->fields.isNoDamage )
    {
      v36 = Method_System_Array_Empty_BattleBuffData_ShowBuffData___;
      v37 = *((_QWORD *)Method_System_Array_Empty_BattleBuffData_ShowBuffData___ + 7);
      if ( !v37 )
      {
        sub_1C41AF8(Method_System_Array_Empty_BattleBuffData_ShowBuffData___);
        v37 = v36[7];
      }
      v38 = *(_QWORD *)(v37 + 16);
      if ( (*(_BYTE *)(v38 + 309) & 1) == 0 )
        v38 = sub_1C41A9C(inited);
      if ( !*(_DWORD *)(v38 + 224) )
        inited = j_il2cpp_runtime_class_init_0(v38);
      v39 = *(_QWORD *)(v36[7] + 16LL);
      if ( (*(_BYTE *)(v39 + 309) & 1) == 0 )
        v39 = sub_1C41A9C(inited);
      v40 = *(__int64 **)(v39 + 184);
      v41 = *v40;
      *(_QWORD *)(v31 + 72) = *v40;
      sub_1C6B9AC((CGThumbnailListItem_o *)(v31 + 72), v41, v32, v33);
      *(_QWORD *)(v31 + 64) = v41;
      sub_1C6B9AC((CGThumbnailListItem_o *)(v31 + 64), v41, v42, v43);
      v47 = Method_System_Array_Empty_int___;
      v48 = *((_QWORD *)Method_System_Array_Empty_int___ + 7);
      if ( !v48 )
      {
        sub_1C41AF8(Method_System_Array_Empty_int___);
        v48 = v47[7];
      }
      v49 = *(_QWORD *)(v48 + 16);
      if ( (*(_BYTE *)(v49 + 309) & 1) == 0 )
        v49 = sub_1C41A9C(v46);
      if ( !*(_DWORD *)(v49 + 224) )
        v46 = j_il2cpp_runtime_class_init_0(v49);
      v50 = *(_QWORD *)(v47[7] + 16LL);
      if ( (*(_BYTE *)(v50 + 309) & 1) == 0 )
        v50 = sub_1C41A9C(v46);
      v51 = *(__int64 **)(v50 + 184);
      v52 = *v51;
      *(_QWORD *)(v31 + 120) = *v51;
      sub_1C6B9AC((CGThumbnailListItem_o *)(v31 + 120), v52, v44, v45);
      *(_QWORD *)(v31 + 112) = v52;
      sub_1C6B9AC((CGThumbnailListItem_o *)(v31 + 112), v52, v53, v54);
      *(_QWORD *)(v31 + 104) = v52;
      sub_1C6B9AC((CGThumbnailListItem_o *)(v31 + 104), v52, v55, v56);
      v57 = v24->fields.buffData;
      if ( !v57 )
        goto LABEL_67;
      *(_BYTE *)(v31 + 57) = v57->fields.isNoDamage;
      if ( !v29 )
        goto LABEL_67;
      v29->fields.invalidLossHpData = (struct BattleActionData_DamageData_o *)v31;
      p_invalidLossHpData = (CGThumbnailListItem_o *)&v29->fields.invalidLossHpData;
      v59 = v31;
    }
    else
    {
      if ( !v29 )
        goto LABEL_67;
      v29->fields.invalidLossHpData = 0;
      p_invalidLossHpData = (CGThumbnailListItem_o *)&v29->fields.invalidLossHpData;
      v59 = 0;
    }
    sub_1C6B9AC(p_invalidLossHpData, v59, v32, v33);
  }
  v60 = !v71 || v72;
  BattleServantData__ResultDamage(v24, Random, v30, 0, 0, v60, 0);
  logic = (UnityEngine_Object_o *)this->fields.logic;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(logic, 0, 0) )
  {
    data = (__int64)this->fields.logic;
    if ( !data )
      goto LABEL_67;
    Wave = BattleLogic__getWave((BattleLogic_o *)data, 0);
  }
  else
  {
    Wave = 0;
  }
  data = (__int64)this->fields.data;
  if ( !data
    || (IsOpponentPTUniqueID = BattleData__IsOpponentPTUniqueID((BattleData_o *)data, targetId, playerId, 0),
        BattleServantData__setActionHistory(v24, playerId, 3, Wave, IsOpponentPTUniqueID, 0),
        !v29)
    || (v29->fields.procType = 2,
        v64 = (BattleActionEffect_LossHPFunc_o *)sub_1C6BC54(BattleActionEffect_LossHPFunc_TypeInfo),
        BattleActionEffect_LossHPFunc___ctor(v64, targetId, Random, v60, 0),
        BattleActionData_BuffData__SetActionEffectProc(v29, (BattleActionEffect_Base_o *)v64, 0),
        !v20) )
  {
LABEL_67:
    sub_1C6BC60(data, v21);
  }
  BattleActionData__setBuffData(v20, v29, baseVals, 0, 0);
  data = DataVals__isLossHpChangeDamage(baseVals, 0);
  if ( (data & 1) != 0 )
  {
    if ( !DataVals__IsActNoDamageBuff(baseVals, 0) )
    {
      data = (__int64)v24->fields.buffData;
      if ( !data )
        goto LABEL_67;
      goto LABEL_61;
    }
    data = DataVals__IsActNoDamageBuff(baseVals, 0);
    if ( (data & 1) != 0 )
    {
      data = (__int64)v24->fields.buffData;
      if ( !data )
        goto LABEL_67;
      if ( !*(_BYTE *)(data + 160) )
      {
LABEL_61:
        v65 = BattleBuffData__UseFieldProgressingDoNotAct((BattleBuffData_o *)data, v24, v70, 0);
        BattleActionData__setBuffData(v20, v65, baseVals, 0, 0);
      }
    }
  }
  v66 = v24->fields.buffData;
  if ( !v66 )
    goto LABEL_67;
  v66->fields.isNoDamage = 0;
  data = (__int64)this->fields.data;
  if ( !data )
    goto LABEL_67;
  if ( v24->fields.isEnemy != BattleData__isEnemyID((BattleData_o *)data, playerId, 0) )
  {
    v67 = ((__int64 (__fastcall *)(BattleServantData_o *, const MethodInfo *))v24->klass->vtable._13_get_resultHp.methodPtr)(
            v24,
            v24->klass->vtable._13_get_resultHp.method);
    BattleServantData__procAccumulationDamage(v24, v69, v67, 0);
  }
  return v20;
}


FunctionMaster_o *BattleLogicFunction__getFuncMaster(BattleLogicFunction_o *this, const MethodInfo *method)
{
  FunctionMaster_o *result; // x0
  CGThumbnailListItem_o *p_master; // x19
  FunctionMaster_o *master; // t1
  Il2CppObject *Instance; // x0
  __int64 v7; // x1
  Il2CppObject *MasterData_object; // x0
  int32_t v9; // w2
  const MethodInfo *v10; // x3

  if ( (byte_4CB93A9 & 1) == 0 )
  {
    sub_1C6BA08(&Method_DataManager_GetMasterData_FunctionMaster___);
    sub_1C6BA08(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_4CB93A9 = 1;
  }
  master = this->fields.master;
  p_master = (CGThumbnailListItem_o *)&this->fields.master;
  result = master;
  if ( !master )
  {
    Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3A4F3B4 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !Instance )
      sub_1C6BC60(0, v7);
    MasterData_object = DataManager__GetMasterData_object_(
                          (DataManager_o *)Instance,
                          (const MethodInfo_313B368 *)Method_DataManager_GetMasterData_FunctionMaster___);
    p_master->klass = (CGThumbnailListItem_c *)MasterData_object;
    sub_1C6B9AC(p_master, (int32_t)MasterData_object, v9, v10);
    return (FunctionMaster_o *)p_master->klass;
  }
  return result;
}


FunctionEntity_o *BattleLogicFunction__getFunctionEntity(
        BattleLogicFunction_o *this,
        int32_t id,
        const MethodInfo *method)
{
  Il2CppObject *Instance; // x0
  CGThumbnailListItem_o *p_master; // x20
  struct FunctionMaster_o *master; // t1
  __int64 v8; // x1
  Il2CppObject *MasterData_object; // x0
  int32_t v10; // w2
  const MethodInfo *v11; // x3

  if ( (byte_4CB93A8 & 1) == 0 )
  {
    sub_1C6BA08(&Method_DataManager_GetMasterData_FunctionMaster___);
    sub_1C6BA08(&Method_DataMasterBase_FunctionMaster__FunctionEntity__int__GetEntity__);
    sub_1C6BA08(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_4CB93A8 = 1;
  }
  master = this->fields.master;
  p_master = (CGThumbnailListItem_o *)&this->fields.master;
  Instance = (Il2CppObject *)master;
  if ( !master )
  {
    Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3A4F3B4 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !Instance
      || (MasterData_object = DataManager__GetMasterData_object_(
                                (DataManager_o *)Instance,
                                (const MethodInfo_313B368 *)Method_DataManager_GetMasterData_FunctionMaster___),
          p_master->klass = (CGThumbnailListItem_c *)MasterData_object,
          sub_1C6B9AC(p_master, (int32_t)MasterData_object, v10, v11),
          (Instance = (Il2CppObject *)p_master->klass) == 0) )
    {
      sub_1C6BC60(Instance, v8);
    }
  }
  return (FunctionEntity_o *)DataMasterBase_object__object__int___GetEntity(
                               (DataMasterBase_TMaster__TEntity__PKType__o *)Instance,
                               id,
                               (const MethodInfo_33F90DC *)Method_DataMasterBase_FunctionMaster__FunctionEntity__int__GetEntity__);
}


BattleActionData_BuffData_o *BattleLogicFunction__getFunctionObject(
        BattleLogicFunction_o *this,
        FunctionEntity_o *funcEnt,
        int32_t uniqueId,
        int32_t funcIndex,
        bool isCommandSideEffect,
        BattleActionData_BuffData_o *defBuffData,
        const MethodInfo *method)
{
  __int64 v12; // x0
  __int64 v13; // x1

  if ( (byte_4CB93D6 & 1) == 0 )
  {
    sub_1C6BA08(&BattleActionData_BuffData_TypeInfo);
    byte_4CB93D6 = 1;
  }
  if ( !defBuffData )
  {
    defBuffData = (BattleActionData_BuffData_o *)sub_1C6BC54(BattleActionData_BuffData_TypeInfo);
    BattleActionData_BuffData___ctor(defBuffData, 0);
    if ( !defBuffData )
      sub_1C6BC60(v12, v13);
  }
  defBuffData->fields.targetId = uniqueId;
  defBuffData->fields.functionIndex = funcIndex;
  BattleActionData_BuffData__SetFuncEntityData(defBuffData, funcEnt, 0);
  defBuffData->fields.isCommandAfter = isCommandSideEffect;
  defBuffData->fields.procType = 0;
  return defBuffData;
}


// local variable allocation has failed, the output may be wrong!
BattleLogicFunctionProcess_BaseFunctionTypeProcess_o *BattleLogicFunction__getFunctionTypeProcess(
        BattleLogicFunction_o *this,
        int32_t functType,
        const MethodInfo *method)
{
  System_Collections_Generic_Dictionary_TKey__TValue__o *dicFuncProcess; // x0
  int32_t v6; // w1
  BattleLogicFunctionProcess_BaseFunctionTypeProcess_o *v7; // x20

  if ( (byte_4CB93AF & 1) == 0 )
  {
    sub_1C6BA08(&Method_System_Collections_Generic_Dictionary_FuncList_TYPE__BattleLogicFunctionProcess_BaseFunctionTypeProcess__ContainsKey__);
    sub_1C6BA08(&Method_System_Collections_Generic_Dictionary_FuncList_TYPE__BattleLogicFunctionProcess_BaseFunctionTypeProcess__get_Item__);
    byte_4CB93AF = 1;
  }
  dicFuncProcess = (System_Collections_Generic_Dictionary_TKey__TValue__o *)this->fields.dicFuncProcess;
  if ( !dicFuncProcess
    || (dicFuncProcess = (System_Collections_Generic_Dictionary_TKey__TValue__o *)System_Collections_Generic_Dictionary_Int32Enum__object___ContainsKey(
                                                                                    dicFuncProcess,
                                                                                    functType,
                                                                                    (const MethodInfo_3485B20 *)Method_System_Collections_Generic_Dictionary_FuncList_TYPE__BattleLogicFunctionProcess_BaseFunctionTypeProcess__ContainsKey__),
        !this->fields.dicFuncProcess)
    || (((unsigned __int8)dicFuncProcess & 1) == 0 ? (v6 = 0) : (v6 = functType),
        (dicFuncProcess = (System_Collections_Generic_Dictionary_TKey__TValue__o *)System_Collections_Generic_Dictionary_Int32Enum__object___get_Item(
                                                                                     (System_Collections_Generic_Dictionary_TKey__TValue__o *)this->fields.dicFuncProcess,
                                                                                     v6,
                                                                                     (const MethodInfo_348588C *)Method_System_Collections_Generic_Dictionary_FuncList_TYPE__BattleLogicFunctionProcess_BaseFunctionTypeProcess__get_Item__)) == 0) )
  {
    sub_1C6BC60(dicFuncProcess, *(_QWORD *)&functType);
  }
  v7 = (BattleLogicFunctionProcess_BaseFunctionTypeProcess_o *)dicFuncProcess;
  if ( BattleLogicFunctionProcess_BaseFunctionTypeProcess__IsNeedInit(
         (BattleLogicFunctionProcess_BaseFunctionTypeProcess_o *)dicFuncProcess,
         this,
         0) )
  {
    ((void (__fastcall *)(BattleLogicFunctionProcess_BaseFunctionTypeProcess_o *, BattleLogicFunction_o *, const MethodInfo *))v7->klass->vtable._4_init.methodPtr)(
      v7,
      this,
      v7->klass->vtable._4_init.method);
  }
  return v7;
}


BattleActionData_o *BattleLogicFunction__getGrayPopupActionData(
        BattleLogicFunction_o *this,
        int32_t targetId,
        int32_t funcIndex,
        FunctionEntity_o *funcEnt,
        BattleLogicFunctionProcess_FunctionTargetCheck_o *funcTarget,
        const MethodInfo *method)
{
  BattleActionData_o *v10; // x20
  BattleActionData_BuffData_o *GrayActionBuffData; // x0
  __int64 v12; // x1
  const MethodInfo *v13; // x6
  BattleActionData_BuffData_o *v14; // x21

  if ( (byte_4CB93C0 & 1) == 0 )
  {
    sub_1C6BA08(&BattleActionData_TypeInfo);
    byte_4CB93C0 = 1;
  }
  v10 = (BattleActionData_o *)sub_1C6BC54(BattleActionData_TypeInfo);
  BattleActionData___ctor(v10, 0);
  if ( !funcEnt
    || (GrayActionBuffData = BattleLogicFunction__MakeGrayActionBuffData(
                               (BattleLogicFunction_o *)GrayActionBuffData,
                               targetId,
                               funcIndex,
                               funcEnt->fields.popupIconId,
                               funcEnt->fields.popupText,
                               funcEnt->fields.popupTextColor,
                               v13),
        !funcTarget)
    || (v14 = GrayActionBuffData,
        GrayActionBuffData = BattleLogicFunctionProcess_FunctionTargetCheck__get_ParentActBuffData(funcTarget, 0),
        !v10) )
  {
    sub_1C6BC60(GrayActionBuffData, v12);
  }
  BattleActionData__setBuffData(v10, v14, 0, GrayActionBuffData, 0);
  return v10;
}


int32_t BattleLogicFunction__getHpPerValue(
        BattleLogicFunction_o *this,
        DataVals_o *baseVals,
        BattleServantData_o *targetSvtData,
        const MethodInfo *method)
{
  int32_t MaxHp; // w0

  if ( !baseVals || (this = (BattleLogicFunction_o *)DataVals__isParam(baseVals, 119, 0), !targetSvtData) )
    sub_1C6BC60(this, baseVals);
  if ( ((unsigned __int8)this & 1) != 0 )
    MaxHp = ((__int64 (__fastcall *)(BattleServantData_o *, const MethodInfo *))targetSvtData->klass->vtable._13_get_resultHp.methodPtr)(
              targetSvtData,
              targetSvtData->klass->vtable._13_get_resultHp.method);
  else
    MaxHp = BattleServantData__getMaxHp(targetSvtData, 0);
  return DataVals__GetValue(baseVals, 0) * MaxHp / 1000;
}


BattleActionData_o *BattleLogicFunction__getInvalidObject(
        BattleLogicFunction_o *this,
        int32_t targetId,
        int32_t funcIndex,
        bool isHide,
        System_String_o *dispName,
        DataVals_o *dataVals,
        bool isCommandSideEffect,
        bool isNoEffect,
        BattleActionData_BuffData_o *defBuffData,
        BattleLogicFunctionProcess_FunctionTargetCheck_o *funcTarget,
        const MethodInfo *method)
{
  BattleActionData_BuffData_o *v11; // x20
  BattleActionData_o *v19; // x23
  int32_t v20; // w2
  const MethodInfo *v21; // x3
  BattleActionData_BuffData_o *v22; // x0
  __int64 v23; // x1
  __int64 v24; // x0
  int32_t v25; // w2
  const MethodInfo *v26; // x3
  BattleActionData_BuffData_o *v27; // x3
  __int64 v28; // x0
  int32_t v29; // w2
  const MethodInfo *v30; // x3

  v11 = defBuffData;
  if ( (byte_4CB93BC & 1) == 0 )
  {
    sub_1C6BA08(&BattleActionData_TypeInfo);
    sub_1C6BA08(&BattleActionData_BuffData_TypeInfo);
    sub_1C6BA08(&int___TypeInfo);
    sub_1C6BA08(&StringLiteral_1/*""*/);
    byte_4CB93BC = 1;
  }
  v19 = (BattleActionData_o *)sub_1C6BC54(BattleActionData_TypeInfo);
  BattleActionData___ctor(v19, 0);
  if ( !defBuffData )
  {
    v11 = (BattleActionData_BuffData_o *)sub_1C6BC54(BattleActionData_BuffData_TypeInfo);
    BattleActionData_BuffData___ctor(v11, 0);
    if ( !v11 )
LABEL_13:
      sub_1C6BC60(v22, v23);
  }
  v11->fields.functionIndex = funcIndex;
  v11->fields.isMiss = 1;
  v11->fields.targetId = targetId;
  v11->fields.buffId = 0;
  if ( isHide )
    dispName = (System_String_o *)StringLiteral_1/*""*/;
  v11->fields.popLabel = dispName;
  sub_1C6B9AC((CGThumbnailListItem_o *)&v11->fields.popLabel, (int32_t)dispName, v20, v21);
  if ( funcTarget )
  {
    v11->fields.popIcon = funcTarget->fields.invalidIconId;
    v24 = sub_1C6BAB0(int___TypeInfo, 0);
    v11->fields.effectList = (struct System_Int32_array *)v24;
    sub_1C6B9AC((CGThumbnailListItem_o *)&v11->fields.effectList, v24, v25, v26);
    v22 = BattleLogicFunctionProcess_FunctionTargetCheck__get_ParentActBuffData(funcTarget, 0);
    v27 = v22;
    if ( !v19 )
      goto LABEL_13;
  }
  else
  {
    v11->fields.popIcon = 0;
    v28 = sub_1C6BAB0(int___TypeInfo, 0);
    v11->fields.effectList = (struct System_Int32_array *)v28;
    sub_1C6B9AC((CGThumbnailListItem_o *)&v11->fields.effectList, v28, v29, v30);
    v27 = 0;
    if ( !v19 )
      goto LABEL_13;
  }
  BattleActionData__setBuffData(v19, v11, 0, v27, 0);
  v11->fields.IsNoEffect = isNoEffect;
  v11->fields.isCommandAfter = isCommandSideEffect;
  if ( !dataVals )
    goto LABEL_13;
  v11->fields.popDelay = DataVals__GetParam(dataVals, 65, 0, 0);
  v19->fields.funcResult = 0;
  return v19;
}


// local variable allocation has failed, the output may be wrong!
BattleActionData_o *BattleLogicFunction__getMissObject(
        BattleLogicFunction_o *this,
        int32_t targetId,
        int32_t funcIndex,
        DataVals_o *dataVals,
        bool isCommandSideEffect,
        System_String_o *uniqueText,
        BattleActionData_BuffData_o *defBuffData,
        BattleLogicFunctionProcess_FunctionTargetCheck_o *funcTarget,
        const MethodInfo *method)
{
  System_String_o *v11; // x25
  _BOOL8 isHideMiss; // x0
  const MethodInfo *v18; // [xsp+10h] [xbp-60h]

  v11 = uniqueText;
  if ( (byte_4CB93BD & 1) != 0 )
  {
    if ( uniqueText )
      goto LABEL_3;
  }
  else
  {
    sub_1C6BA08(&LocalizationManager_TypeInfo);
    this = (BattleLogicFunction_o *)sub_1C6BA08(&StringLiteral_2796/*"BATTLE_MISS_FUNCTION"*/);
    byte_4CB93BD = 1;
    if ( v11 )
    {
LABEL_3:
      if ( dataVals )
        goto LABEL_4;
LABEL_9:
      sub_1C6BC60(this, *(_QWORD *)&targetId);
    }
  }
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  this = (BattleLogicFunction_o *)LocalizationManager__Get((System_String_o *)StringLiteral_2796/*"BATTLE_MISS_FUNCTION"*/, 0);
  v11 = (System_String_o *)this;
  if ( !dataVals )
    goto LABEL_9;
LABEL_4:
  isHideMiss = DataVals__isHideMiss(dataVals, 0);
  return BattleLogicFunction__getInvalidObject(
           (BattleLogicFunction_o *)isHideMiss,
           targetId,
           funcIndex,
           isHideMiss,
           v11,
           dataVals,
           isCommandSideEffect,
           0,
           defBuffData,
           funcTarget,
           v18);
}


// local variable allocation has failed, the output may be wrong!
BattleActionData_o *BattleLogicFunction__getNoEffectObject(
        BattleLogicFunction_o *this,
        int32_t targetId,
        int32_t funcIndex,
        DataVals_o *dataVals,
        bool isCommandSideEffect,
        System_String_o *uniqueText,
        BattleActionData_BuffData_o *defBuffData,
        BattleLogicFunctionProcess_FunctionTargetCheck_o *funcTarget,
        const MethodInfo *method)
{
  System_String_o *v11; // x25
  _BOOL8 IsHideNoEffect; // x0
  const MethodInfo *v18; // [xsp+10h] [xbp-60h]

  v11 = uniqueText;
  if ( (byte_4CB93BE & 1) != 0 )
  {
    if ( uniqueText )
      goto LABEL_3;
  }
  else
  {
    sub_1C6BA08(&LocalizationManager_TypeInfo);
    this = (BattleLogicFunction_o *)sub_1C6BA08(&StringLiteral_2807/*"BATTLE_NO_EFFECT_FUNCTION"*/);
    byte_4CB93BE = 1;
    if ( v11 )
    {
LABEL_3:
      if ( dataVals )
        goto LABEL_4;
LABEL_9:
      sub_1C6BC60(this, *(_QWORD *)&targetId);
    }
  }
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  this = (BattleLogicFunction_o *)LocalizationManager__Get((System_String_o *)StringLiteral_2807/*"BATTLE_NO_EFFECT_FUNCTION"*/, 0);
  v11 = (System_String_o *)this;
  if ( !dataVals )
    goto LABEL_9;
LABEL_4:
  IsHideNoEffect = DataVals__IsHideNoEffect(dataVals, targetId, 0);
  return BattleLogicFunction__getInvalidObject(
           (BattleLogicFunction_o *)IsHideNoEffect,
           targetId,
           funcIndex,
           IsHideNoEffect,
           v11,
           dataVals,
           isCommandSideEffect,
           1,
           defBuffData,
           funcTarget,
           v18);
}


System_Int32_array *BattleLogicFunction__getTargetids(
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
  System_Collections_Generic_IEnumerable_TSource__o *TargetIds_40684584; // x20
  System_Func_int__bool__o *v17; // x21
  System_Collections_Generic_IEnumerable_TSource__o *v18; // x0

  if ( (byte_4CB93B5 & 1) == 0 )
  {
    sub_1C6BA08(&Method_BattleLogicFunction__getTargetids_b__60_0__);
    sub_1C6BA08(&Target_BattleTargetArgs_TypeInfo);
    sub_1C6BA08(&Method_System_Linq_Enumerable_ToArray_int___);
    sub_1C6BA08(&Method_System_Linq_Enumerable_Where_int___);
    sub_1C6BA08(&System_Func_int__bool__TypeInfo);
    byte_4CB93B5 = 1;
  }
  args = (Target_BattleTargetArgs_o *)sub_1C6BC54(Target_BattleTargetArgs_TypeInfo);
  Target_BattleTargetArgs___ctor(args, dataVals, 0);
  if ( !mainAction )
    sub_1C6BC60(v10, v11);
  data = this->fields.data;
  actorId = mainAction->fields.actorId;
  targetId = mainAction->fields.targetId;
  PTTargetId = BattleActionData__getPTTargetId(mainAction, 0);
  TargetIds_40684584 = (System_Collections_Generic_IEnumerable_TSource__o *)Target__getTargetIds_40684584(
                                                                              data,
                                                                              actorId,
                                                                              targetId,
                                                                              PTTargetId,
                                                                              targetType,
                                                                              0,
                                                                              0,
                                                                              0,
                                                                              0,
                                                                              args,
                                                                              0);
  v17 = (System_Func_int__bool__o *)sub_1C6BC54(System_Func_int__bool__TypeInfo);
  System_Func_int__bool____ctor(v17, (Il2CppObject *)this, Method_BattleLogicFunction__getTargetids_b__60_0__, 0);
  v18 = System_Linq_Enumerable__Where_int_(
          TargetIds_40684584,
          (System_Func_TSource__bool__o *)v17,
          (const MethodInfo_3181DBC *)Method_System_Linq_Enumerable_Where_int___);
  return System_Linq_Enumerable__ToArray_int_(
           v18,
           (const MethodInfo_317B0B0 *)Method_System_Linq_Enumerable_ToArray_int___);
}


BattleFieldEnvironmentData_o *BattleLogicFunction__get_FieldEnvData(
        BattleLogicFunction_o *this,
        const MethodInfo *method)
{
  struct BattleData_o *data; // x8

  data = this->fields.data;
  if ( !data )
    sub_1C6BC60(this, method);
  return data->fields._FieldEnvData_k__BackingField;
}


System_Int32_array *BattleLogicFunction__get_IgnoreResistFuncIndividuality(
        BattleLogicFunction_o *this,
        const MethodInfo *method)
{
  CGThumbnailListItem_o *p_ignoreResistFuncIndividuality; // x19
  System_Int32_array *ValueArray; // x20
  struct System_Int32_array *ignoreResistFuncIndividuality; // t1
  __int64 v6; // x1
  Il2CppObject *Master_object; // x20
  long double inited; // q0
  _QWORD *v9; // x21
  __int64 v10; // x8
  __int64 v11; // x0
  __int64 v12; // x0
  int32_t v13; // w2
  const MethodInfo *v14; // x3

  if ( (byte_4CB93AD & 1) == 0 )
  {
    sub_1C6BA08(&Method_System_Array_Empty_int___);
    sub_1C6BA08(&Method_DataManager_GetMaster_ConstantStrMaster___);
    sub_1C6BA08(&DataManager_TypeInfo);
    sub_1C6BA08(&StringLiteral_7425/*"IGNORE_RESIST_FUNC_INDIVIDUALITY"*/);
    byte_4CB93AD = 1;
  }
  ignoreResistFuncIndividuality = this->fields.ignoreResistFuncIndividuality;
  p_ignoreResistFuncIndividuality = (CGThumbnailListItem_o *)&this->fields.ignoreResistFuncIndividuality;
  ValueArray = ignoreResistFuncIndividuality;
  if ( !ignoreResistFuncIndividuality )
  {
    if ( !DataManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
    Master_object = DataManager__GetMaster_object_((const MethodInfo_313B314 *)Method_DataManager_GetMaster_ConstantStrMaster___);
    v9 = Method_System_Array_Empty_int___;
    v10 = *((_QWORD *)Method_System_Array_Empty_int___ + 7);
    if ( !v10 )
    {
      sub_1C41AF8(Method_System_Array_Empty_int___);
      v10 = v9[7];
    }
    v11 = *(_QWORD *)(v10 + 16);
    if ( (*(_BYTE *)(v11 + 309) & 1) == 0 )
      v11 = sub_1C41A9C(inited);
    if ( !*(_DWORD *)(v11 + 224) )
      inited = j_il2cpp_runtime_class_init_0(v11);
    v12 = *(_QWORD *)(v9[7] + 16LL);
    if ( (*(_BYTE *)(v12 + 309) & 1) == 0 )
      v12 = sub_1C41A9C(inited);
    if ( !Master_object )
      sub_1C6BC60(v12, v6);
    ValueArray = ConstantStrMaster__GetValueArray(
                   (ConstantStrMaster_o *)Master_object,
                   (System_String_o *)StringLiteral_7425/*"IGNORE_RESIST_FUNC_INDIVIDUALITY"*/,
                   **(System_Int32_array ***)(v12 + 184),
                   0);
    p_ignoreResistFuncIndividuality->klass = (CGThumbnailListItem_c *)ValueArray;
    sub_1C6B9AC(p_ignoreResistFuncIndividuality, (int32_t)ValueArray, v13, v14);
  }
  return ValueArray;
}


bool BattleLogicFunction__isDisabledBuff(
        BattleLogicFunction_o *this,
        bool passive,
        DataVals_o *baseVals,
        const MethodInfo *method)
{
  _BOOL4 v5; // w20
  bool isParam; // w0
  int v8; // w20

  if ( !baseVals )
    sub_1C6BC60(this, passive);
  v5 = passive;
  if ( DataVals__isParam(baseVals, 50, 0) || DataVals__isParam(baseVals, 88, 0) )
    return 1;
  isParam = DataVals__isParam(baseVals, 113, 0);
  if ( isParam || !v5 )
    return isParam;
  v8 = DataVals__isParam(baseVals, 23, 0) || v5;
  return v8 & ~DataVals__isParam(baseVals, 24, 0) & 1;
}


bool BattleLogicFunction__isFailDependentLastResult(
        BattleLogicFunction_o *this,
        BattleLogicFunction_ProcListInArgs_o *args,
        int32_t targetId,
        DataVals_o *baseVals,
        const MethodInfo *method)
{
  BattleLogicFunction_o *v8; // x23
  int v9; // w22

  if ( !baseVals || (v8 = this, this = (BattleLogicFunction_o *)DataVals__GetParam(baseVals, 0, 0, 0), !args) )
    sub_1C6BC60(this, args);
  v9 = (int)this;
  if ( !BattleLogicFunction_ProcListInArgs__DidTriggeredFuncHaveSpecifyResults(
          args,
          targetId,
          baseVals,
          v8->fields.data,
          0)
    || !BattleLogicFunction_ProcListInArgs__DidTriggeredFuncListHaveSpecifyResults(
          args,
          targetId,
          baseVals,
          v8->fields.data,
          0) )
  {
    return 1;
  }
  if ( v9 < 0 )
    return !BattleLogicFunction_ProcListInArgs__isPrevFuncSuccess(args, targetId, baseVals->fields.funcIndex, 0);
  return 0;
}


bool BattleLogicFunction__isSafeDamage(
        BattleLogicFunction_o *this,
        DataVals_o *baseVals,
        int32_t targetId,
        const MethodInfo *method)
{
  const MethodInfo *v6; // x2

  if ( !baseVals )
    sub_1C6BC60(this, 0);
  return !DataVals__IsEvenIfWinDie(baseVals, 0) && BattleLogicFunction__IsSafeWin(this, targetId, v6);
}


// local variable allocation has failed, the output may be wrong!
bool BattleLogicFunction__isSelectTarget(
        BattleLogicFunction_o *this,
        int32_t uniqueId,
        System_Int32_array *funclist,
        const MethodInfo *method)
{
  il2cpp_array_size_t max_length; // x8
  bool v6; // w21
  BattleLogicFunction_o *v7; // x20
  unsigned __int64 v8; // x22

  if ( !funclist )
    goto LABEL_10;
  max_length = funclist->max_length;
  v6 = (int)max_length > 0;
  if ( (int)max_length >= 1 )
  {
    v7 = this;
    v8 = 0;
    while ( 1 )
    {
      if ( v8 >= (unsigned int)max_length )
        sub_1C6BC68(this);
      this = (BattleLogicFunction_o *)BattleLogicFunction__getFunctionEntity(
                                        v7,
                                        funclist->m_Items[v8],
                                        (const MethodInfo *)funclist);
      if ( !this )
        break;
      this = (BattleLogicFunction_o *)Target__isChoose(HIDWORD(this->fields.logic), 0);
      if ( ((unsigned __int8)this & 1) == 0 )
      {
        LODWORD(max_length) = funclist->max_length;
        v6 = (__int64)++v8 < (int)max_length;
        if ( (__int64)v8 < (int)max_length )
          continue;
      }
      return v6;
    }
LABEL_10:
    sub_1C6BC60(this, *(_QWORD *)&uniqueId);
  }
  return v6;
}


bool BattleLogicFunction__isTreasureCommand(
        BattleLogicFunction_o *this,
        bool isTreasureDvc,
        int32_t funcType,
        const MethodInfo *method)
{
  return FuncList__Check(26, funcType, 0) || isTreasureDvc;
}


BattleActionData_o *BattleLogicFunction__procList(
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
  BattleActionData_o *mainAction; // x19
  BattleData_o *PTSubTargetId; // x0
  int32_t v22; // w2
  const MethodInfo *v23; // x3
  BattleData_o *v24; // x8
  int32_t v25; // w27
  UnityEngine_Object_o *logic; // x24
  BattleLogicFunction_ProcListInArgs_o *v27; // x24
  WeightRate_int__o *v28; // x22
  int max_length; // w8
  unsigned int v30; // w26
  Il2CppClass **v31; // x8
  DataVals_o *v32; // x23
  int32_t ActSetWeight; // w25
  int32_t Random; // w0
  int32_t actSetId; // w0
  BattleLogicFunction___c_c *v36; // x0
  System_Object_array *funcUnitArray_k__BackingField; // x21
  System_Func_object__bool__o *_9__45_0; // x22
  Il2CppObject *v39; // x23
  struct BattleLogicFunction___c_StaticFields *static_fields; // x0
  int32_t v41; // w2
  const MethodInfo *v42; // x3
  BattleLogicFunction___c_c *v43; // x0
  System_Collections_Generic_IEnumerable_TSource__o *v44; // x21
  System_Func_object__bool__o *_9__45_1; // x22
  Il2CppObject *v46; // x23
  struct BattleLogicFunction___c_StaticFields *v47; // x0
  int32_t v48; // w2
  const MethodInfo *v49; // x3
  _BOOL4 matched; // w0
  _BOOL4 v51; // w21
  bool IsIgnoreValueUp; // w0
  BattleData_o *v53; // x21
  SkillValueUpApplierPlayerMaster_o *v54; // x22
  struct BattleLogicFunctionProcess_FunctionUnitCheck_array *v55; // x25
  int v56; // w8
  int v57; // w26
  BattleLogicFunctionProcess_FunctionUnitCheck_o *v58; // x21
  DataVals_o *dataVals_k__BackingField; // x28
  const MethodInfo *v60; // x3
  const MethodInfo *v61; // x4
  UseInFsmFuncParam_o *v62; // x22
  BattleLogicFunction___c_c *v63; // x0
  UseInFsmFuncParam_o *v64; // x27
  System_Collections_Generic_IEnumerable_TSource__o *funcTargetArray_k__BackingField; // x21
  System_Func_object__bool__o *_9__45_2; // x22
  Il2CppObject *v67; // x26
  struct BattleLogicFunction___c_StaticFields *v68; // x0
  int32_t v69; // w2
  const MethodInfo *v70; // x3
  System_Collections_Generic_IEnumerable_TSource__o *v71; // x0
  BattleLogicFunction___c_c *v72; // x8
  System_Collections_Generic_IEnumerable_TSource__o *v73; // x21
  System_Func_object__int__o *_9__45_3; // x22
  Il2CppObject *v75; // x26
  struct BattleLogicFunction___c_StaticFields *v76; // x0
  int32_t v77; // w2
  const MethodInfo *v78; // x3
  System_Collections_Generic_IEnumerable_TSource__o *v79; // x0
  System_Int32_array *v80; // x21
  bool v81; // w22
  BattleLogicFunction_PreAttackSideEffectMakeArgument_o *v82; // x26
  BattleLogicFunction_SideEffectMakeArgument_o *v83; // x0
  const MethodInfo *v84; // x5
  struct BattleLogicFunctionProcess_FunctionTargetCheck_array *v85; // x23
  int v86; // w8
  unsigned int v87; // w25
  BattleLogicFunctionProcess_FunctionTargetCheck_o *v88; // x21
  BattleLogicFunction_FuncSideEffectFunctionArgument_o *FuncSideEffectArg; // x0
  int32_t targetId_k__BackingField; // w26
  BattleServantData_o *v91; // x27
  BattleActionData_o *NoEffectObject; // x0
  int32_t v93; // w22
  struct System_Int32_array *vals; // x8
  const MethodInfo *v95; // x5
  int commandType; // w8
  BattleActionData_o *v97; // x0
  bool isDamage; // w0
  int v99; // w9
  int v100; // w8
  struct System_Int32_array *items; // x8
  _QWORD *v102; // x9
  __int64 size; // x10
  const MethodInfo *v104; // x3
  int32_t actorId; // w21
  int32_t uniqueId; // w22
  bool isSafeDamage; // w0
  const MethodInfo *v108; // x7
  const MethodInfo *v109; // x7
  int32_t v110; // w1
  int32_t v111; // w2
  int32_t v112; // w5
  BattleActionData_o *v113; // x0
  const MethodInfo *v114; // x4
  BattleActionData_o *v115; // x0
  BattleData_o *v116; // x22
  BattleLogicFunction_o *v117; // x0
  const MethodInfo *v118; // x6
  BattleData_o **p_data; // x8
  BattleData_o *v120; // x21
  BattleLogicFunction_o *v121; // x0
  const MethodInfo *v122; // x6
  const MethodInfo *v123; // x7
  bool isUnaffected; // w22
  int CorrectedValueFuncGainNp; // w21
  BattleLogicFunction_o *v126; // x0
  int32_t v127; // w22
  const MethodInfo *v128; // x6
  BattleActionData_BuffData_o *v129; // x21
  BattleActionData_o *v130; // x0
  BattleActionData_BuffData_o *FunctionObject; // x1
  int32_t v132; // w1
  BattleLogicFunction_o *v133; // x0
  int32_t v134; // w21
  const MethodInfo *v135; // x6
  BattleActionData_BuffData_o *v136; // x22
  int32_t v137; // w21
  System_Int32_array *TargetList; // x22
  int32_t Value; // w0
  const MethodInfo *v140; // x6
  int32_t v141; // w21
  System_Int32_array *v142; // x22
  int32_t v143; // w0
  int32_t v144; // w2
  bool v145; // w8
  FunctionEntity_o *v146; // x1
  bool v147; // w8
  int32_t v148; // w1
  const MethodInfo *v149; // x3
  int32_t v150; // w21
  bool v151; // w6
  const MethodInfo *v152; // x7
  const MethodInfo *v153; // x7
  const MethodInfo *v154; // x6
  int32_t v155; // w1
  FunctionEntity_o *v156; // x2
  DataVals_o *v157; // x3
  int32_t v158; // w4
  const MethodInfo *v159; // x5
  BattleLogicFunction_o *v160; // x20
  BattleActionData_o *v161; // x0
  FunctionEntity_o *v162; // x1
  FunctionEntity_o *v163; // x3
  MethodInfo *v164; // x4
  const MethodInfo *v165; // x6
  int32_t applyTarget; // w8
  FunctionEntity_o *v167; // x2
  const MethodInfo *v168; // x6
  const MethodInfo *v169; // x5
  BattleActionData_o *v170; // x0
  FunctionEntity_o *v171; // x2
  const MethodInfo *v172; // x7
  int32_t v173; // w1
  FunctionEntity_o *v174; // x2
  DataVals_o *v175; // x3
  int32_t v176; // w4
  const MethodInfo *v177; // x5
  BattleActionData_o *v178; // x0
  FunctionEntity_o *v179; // x3
  int32_t v180; // w5
  const MethodInfo *v181; // x6
  _BOOL8 v182; // x0
  FunctionEntity_o *v183; // x2
  int32_t v184; // w4
  const MethodInfo *v185; // x5
  BattleActionData_o *v186; // x0
  const MethodInfo *v187; // x3
  int32_t v188; // w21
  int32_t v189; // w22
  char v190; // w5
  const MethodInfo *v191; // x7
  BattleLogicFunction_o *v192; // x0
  int32_t v193; // w1
  int32_t v194; // w2
  int32_t v195; // w2
  const MethodInfo *v196; // x3
  BattleData_o *v197; // x8
  struct BattleCommandData_array *draw_commandlist; // x1
  int v199; // w21
  bool v200; // w20
  bool isParam; // w22
  System_Int32_array *v202; // x0
  int32_t v203; // w22
  Generator_BGMFromChangeBGMFunc_o *v204; // x21
  float BgmFadeTime; // s0
  const MethodInfo *v206; // x4
  const MethodInfo *v207; // x6
  System_Int32_array *v208; // x21
  int32_t SameIndiualityBuffSum; // w0
  int32_t totalCriticalStars; // w21
  int32_t Value2; // w0
  int32_t v212; // w22
  bool v213; // w4
  BattleLogicFunction_o *v214; // x0
  int32_t v215; // w2
  DataVals_o *v216; // x3
  BattleActionData_BuffData_o *v217; // x6
  const MethodInfo *v218; // x7
  int32_t v219; // w1
  int32_t v220; // w2
  int32_t v221; // w5
  const MethodInfo *v222; // x4
  const MethodInfo *v223; // x4
  _BOOL8 v224; // x0
  const MethodInfo *v225; // x3
  bool v226; // w21
  int32_t v227; // w22
  int32_t HpPerValue; // w0
  const MethodInfo *v229; // x3
  BattleLogicFunction_o *v230; // x0
  bool v231; // w2
  DataVals_o *v232; // x1
  _BOOL8 updated; // x0
  const MethodInfo *v234; // x6
  BattleActionData_MasterBuffData_o *v235; // x22
  Generator_BGFromQuickChangeBGFunc_o *v236; // x21
  const MethodInfo *v237; // x3
  const MethodInfo *v238; // x4
  BattleBuffData_o *buffData; // x21
  BattleActionData_UpShiftGaugeData_o *v240; // x21
  const MethodInfo *v241; // x5
  DataVals_o *v242; // x3
  const MethodInfo *v243; // x5
  BattleActionData_o *SubMember; // x0
  const MethodInfo *v245; // x3
  const MethodInfo *v246; // x3
  const MethodInfo *v247; // x4
  const MethodInfo *v248; // x3
  _BOOL8 v249; // x0
  const MethodInfo *v250; // x3
  const MethodInfo *v251; // x2
  const MethodInfo *v252; // x2
  const MethodInfo *v253; // x5
  const MethodInfo *v254; // x4
  const MethodInfo *v255; // x4
  int32_t v256; // w0
  const MethodInfo *v257; // x2
  const MethodInfo *v258; // x3
  const MethodInfo *v259; // x3
  __int64 np; // x21
  int32_t v261; // w2
  const MethodInfo *v262; // x6
  float v263; // s0
  int32_t v264; // w5
  __int64 v265; // x21
  float v266; // s0
  int v267; // w8
  const MethodInfo *v268; // x4
  const MethodInfo *v269; // x4
  UnityEngine_Object_o *perf; // x21
  _BOOL8 v271; // x0
  const MethodInfo *v272; // x3
  _BOOL8 v273; // x0
  const MethodInfo *v274; // x3
  _BOOL8 v275; // x0
  const MethodInfo *v276; // x5
  int32_t v277; // w0
  const MethodInfo *v278; // x2
  int32_t v279; // w0
  const MethodInfo *v280; // x2
  int32_t v281; // w0
  const MethodInfo *v282; // x2
  const MethodInfo *v283; // x3
  const MethodInfo *v284; // x2
  const MethodInfo *v285; // x2
  const MethodInfo *v286; // x6
  struct BattleSkillInfoData_o *skillInfo; // x8
  BattleSkillInfoData_o *v288; // x9
  char v289; // w21
  BattleData_o *v290; // x22
  bool IsNoTargetSkipSkill; // w1
  System_Collections_Generic_List_Enumerator_int__o *v292; // x0
  _BOOL8 v293; // x0
  const MethodInfo *v294; // x3
  bool v295; // w5
  __int64 v296; // x8
  int v297; // w26
  bool v298; // w21
  BattleLogicFunction_AfterAttackSideEffectMakeArgument_o *v299; // x22
  BattleLogicFunction_SideEffectMakeArgument_o *Argument__Init; // x0
  const MethodInfo *v301; // x5
  BattleData_o *v302; // x21
  BattleCommandData_o *v303; // x22
  UnityEngine_Object_o *v304; // x23
  struct System_Threading_CancellationTokenSource_o *m_CancellationTokenSource; // x8
  unsigned __int64 v306; // x23
  UnityEngine_Object_o *v307; // x21
  int v308; // w8
  BattleData_o *v309; // x21
  unsigned int v310; // w22
  __int64 v311; // x8
  const MethodInfo *v312; // x3
  struct BattleLogicFunction_FunctionArgument_o *externalArg; // x8
  UnityEngine_Object_o *v314; // x21
  UnityEngine_Object_o *v315; // x21
  __int64 v316; // x1
  BattleServantData_o *ServantData; // x0
  const MethodInfo *overwriteLossHp; // [xsp+0h] [xbp-190h]
  const MethodInfo *isRandomDamage; // [xsp+8h] [xbp-188h]
  const MethodInfo *v321; // [xsp+18h] [xbp-178h]
  BattleServantSnapShotOnBuffUpdate_o *svtSnapShotOnBuffUpdate; // [xsp+28h] [xbp-168h]
  bool data; // [xsp+30h] [xbp-160h]
  BattleData_o *dataa; // [xsp+30h] [xbp-160h]
  BattleData_o *v325; // [xsp+38h] [xbp-158h]
  BattleSkillInfoData_o *v326; // [xsp+40h] [xbp-150h]
  int32_t subTargetId; // [xsp+48h] [xbp-148h]
  char v328; // [xsp+4Ch] [xbp-144h]
  char v329; // [xsp+50h] [xbp-140h]
  BattleLogicFunction_o *v330; // [xsp+58h] [xbp-138h]
  System_Collections_Generic_List_int__o *v331; // [xsp+60h] [xbp-130h]
  SkillValueUpApplierPlayerMaster_o *v332; // [xsp+68h] [xbp-128h]
  struct BattleLogicFunctionProcess_FunctionUnitCheck_array *v333; // [xsp+70h] [xbp-120h]
  char v334; // [xsp+7Ch] [xbp-114h]
  BattleServantData_o *actionSvtData; // [xsp+80h] [xbp-110h]
  BattleLogicFunctionProcess_FunctionUnitCheck_o *funcUnit; // [xsp+90h] [xbp-100h]
  int v337; // [xsp+9Ch] [xbp-F4h]
  DataMasterBase_TMaster__TEntity__PKType__o *MasterData_object; // [xsp+A0h] [xbp-F0h]
  UseInFsmFuncParam_o *v339; // [xsp+A8h] [xbp-E8h]
  int32_t functionIndex; // [xsp+B8h] [xbp-D8h]
  int32_t *p_funcType; // [xsp+C0h] [xbp-D0h]
  BattleLogicFunction_Fields *p_fields; // [xsp+C8h] [xbp-C8h]
  FunctionEntity_o *funcEnt; // [xsp+D0h] [xbp-C0h]
  System_Collections_Generic_List_Enumerator_int__o v345; // [xsp+D8h] [xbp-B8h] BYREF
  System_Collections_Generic_List_Enumerator_int__o v346; // [xsp+F0h] [xbp-A0h] BYREF
  System_Collections_Generic_HashSet_BattleBuffData_BuffData__o *buffsToRemove; // [xsp+108h] [xbp-88h] BYREF
  int32_t absorptionCount; // [xsp+114h] [xbp-7Ch] BYREF
  RemovedBuffInfo_o *subBuffInfo; // [xsp+118h] [xbp-78h] BYREF
  Il2CppObject *entity; // [xsp+120h] [xbp-70h] BYREF
  int32_t funcIndex; // [xsp+12Ch] [xbp-64h] BYREF

  mainAction = action;
  if ( (byte_4CB93B0 & 1) == 0 )
  {
    sub_1C6BA08(&BattleLogicFunction_AfterAttackSideEffectMakeArgument_TypeInfo);
    sub_1C6BA08(&Generator_BGFromQuickChangeBGFunc_TypeInfo);
    sub_1C6BA08(&Generator_BGMFromChangeBGMFunc_TypeInfo);
    sub_1C6BA08(&Method_BasicHelper_Any_BattleLogicFunctionProcess_FunctionUnitCheck___);
    sub_1C6BA08(&BattleCommandData_TypeInfo);
    sub_1C6BA08(&BattleServantSnapShotOnBuffUpdate_TypeInfo);
    sub_1C6BA08(&Method_DataManager_GetMasterData_BuffMaster___);
    sub_1C6BA08(&Method_DataManager_GetMasterData_SkillMaster___);
    sub_1C6BA08(&Method_DataMasterBase_BuffMaster__BuffEntity__int__GetEntity__);
    sub_1C6BA08(&Method_DataMasterBase_SkillMaster__SkillEntity__int__TryGetEntity__);
    sub_1C6BA08(&BattleActionData_DownShiftGaugeData_TypeInfo);
    sub_1C6BA08(&Method_System_Linq_Enumerable_All_BattleLogicFunctionProcess_FunctionUnitCheck___);
    sub_1C6BA08(&Method_System_Linq_Enumerable_Select_BattleLogicFunctionProcess_FunctionTargetCheck__int___);
    sub_1C6BA08(&Method_System_Linq_Enumerable_ToArray_int___);
    sub_1C6BA08(&Method_System_Linq_Enumerable_Where_BattleLogicFunctionProcess_FunctionTargetCheck___);
    sub_1C6BA08(&Method_System_Collections_Generic_List_Enumerator_int__Dispose__);
    sub_1C6BA08(&Method_System_Collections_Generic_List_Enumerator_int__MoveNext__);
    sub_1C6BA08(&Method_System_Collections_Generic_List_Enumerator_int__get_Current__);
    sub_1C6BA08(&System_Func_BattleLogicFunctionProcess_FunctionUnitCheck__bool__TypeInfo);
    sub_1C6BA08(&System_Func_BattleLogicFunctionProcess_FunctionTargetCheck__int__TypeInfo);
    sub_1C6BA08(&System_Func_BattleLogicFunctionProcess_FunctionTargetCheck__bool__TypeInfo);
    sub_1C6BA08(&Method_System_Collections_Generic_HashSet_BattleBuffData_BuffData__get_Count__);
    sub_1C6BA08(&Method_System_Collections_Generic_List_int__Add__);
    sub_1C6BA08(&Method_System_Collections_Generic_List_int__GetEnumerator__);
    sub_1C6BA08(&Method_System_Collections_Generic_List_int___ctor__);
    sub_1C6BA08(&System_Collections_Generic_List_int__TypeInfo);
    sub_1C6BA08(&BattleActionData_MasterBuffData_TypeInfo);
    sub_1C6BA08(&System_Math_TypeInfo);
    sub_1C6BA08(&Method_System_Nullable_bool__GetValueOrDefault__);
    sub_1C6BA08(&Method_System_Nullable_bool___ctor__);
    sub_1C6BA08(&UnityEngine_Object_TypeInfo);
    sub_1C6BA08(&BattleLogicFunction_PreAttackSideEffectMakeArgument_TypeInfo);
    sub_1C6BA08(&BattleLogicFunction_ProcListInArgs_TypeInfo);
    sub_1C6BA08(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_1C6BA08(&SkillValueUpApplierPlayerMaster_TypeInfo);
    sub_1C6BA08(&Method_BattleLogicFunction___c__procList_b__45_0__);
    sub_1C6BA08(&Method_BattleLogicFunction___c__procList_b__45_1__);
    sub_1C6BA08(&Method_BattleLogicFunction___c__procList_b__45_2__);
    sub_1C6BA08(&Method_BattleLogicFunction___c__procList_b__45_3__);
    sub_1C6BA08(&BattleLogicFunction___c_TypeInfo);
    sub_1C6BA08(&BattleActionData_UpShiftGaugeData_TypeInfo);
    sub_1C6BA08(&Method_WeightRate_int___ctor__);
    sub_1C6BA08(&Method_WeightRate_int__getCount__);
    sub_1C6BA08(&Method_WeightRate_int__getData__);
    sub_1C6BA08(&Method_WeightRate_int__getTotalWeight__);
    sub_1C6BA08(&Method_WeightRate_int__setWeight__);
    sub_1C6BA08(&WeightRate_int__TypeInfo);
    byte_4CB93B0 = 1;
  }
  funcIndex = 0;
  subBuffInfo = 0;
  entity = 0;
  absorptionCount = 0;
  buffsToRemove = 0;
  memset(&v346, 0, sizeof(v346));
  PTSubTargetId = this->fields.data;
  p_fields = &this->fields;
  if ( !mainAction )
    goto LABEL_502;
  if ( !PTSubTargetId )
    goto LABEL_502;
  actionSvtData = BattleData__getServantData(PTSubTargetId, mainAction->fields.actorId, 0);
  BattleActionData__getPTTargetId(mainAction, 0);
  PTSubTargetId = (BattleData_o *)BattleActionData__getPTSubTargetId(mainAction, 0);
  v24 = p_fields->data;
  if ( !p_fields->data )
    goto LABEL_502;
  v25 = (int)PTSubTargetId;
  v24->fields.beforeAction = mainAction;
  sub_1C6B9AC((CGThumbnailListItem_o *)&v24->fields.beforeAction, (int32_t)mainAction, v22, v23);
  v331 = (System_Collections_Generic_List_int__o *)sub_1C6BC54(System_Collections_Generic_List_int__TypeInfo);
  System_Collections_Generic_List_int____ctor(
    v331,
    (const MethodInfo_37E30FC *)Method_System_Collections_Generic_List_int___ctor__);
  PTSubTargetId = (BattleData_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3A4F3B4 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !PTSubTargetId )
    goto LABEL_502;
  MasterData_object = (DataMasterBase_TMaster__TEntity__PKType__o *)DataManager__GetMasterData_object_(
                                                                      (DataManager_o *)PTSubTargetId,
                                                                      (const MethodInfo_313B368 *)Method_DataManager_GetMasterData_BuffMaster___);
  if ( isReduceReset )
  {
    logic = (UnityEngine_Object_o *)this->fields.logic;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    if ( UnityEngine_Object__op_Inequality(logic, 0, 0) )
    {
      PTSubTargetId = (BattleData_o *)this->fields.logic;
      if ( !PTSubTargetId )
        goto LABEL_502;
      BattleLogic__resetReducedHpAll((BattleLogic_o *)PTSubTargetId, 0);
    }
  }
  subTargetId = v25;
  v27 = (BattleLogicFunction_ProcListInArgs_o *)sub_1C6BC54(BattleLogicFunction_ProcListInArgs_TypeInfo);
  BattleLogicFunction_ProcListInArgs___ctor(v27, argument, mainAction, 0);
  if ( !v27 )
    goto LABEL_502;
  BattleLogicFunction_ProcListInArgs__set_IsCommandSideEffect(v27, isCommandSideEffect, 0);
  BattleLogicFunction_ProcListInArgs__set_IsShift(v27, isShift, 0);
  BattleLogicFunction_ProcListInArgs__set_IsPassive(v27, passive, 0);
  v27->fields._IsTreasureDvc_k__BackingField = isTreasureDvc;
  if ( BattleLogicFunction_ProcListInArgs__get_SkillId(v27, 0) <= 0 )
    BattleLogicFunction_ProcListInArgs__set_SkillId(v27, skillId, 0);
  funcIndex = 0;
  BattleLogicFunction_ProcListInArgs__initFunctionUnitCheck(
    v27,
    this,
    functionlist,
    baseValslist,
    &funcIndex,
    mainAction,
    0);
  v27->fields.actSetId = 0;
  v28 = (WeightRate_int__o *)sub_1C6BC54(WeightRate_int__TypeInfo);
  WeightRate_int____ctor(v28, (const MethodInfo_3BF8CB8 *)Method_WeightRate_int___ctor__);
  if ( !baseValslist )
    goto LABEL_502;
  max_length = baseValslist->max_length;
  if ( max_length >= 1 )
  {
    v30 = 0;
    while ( v30 < max_length )
    {
      v31 = &baseValslist->obj.klass + (int)v30;
      v32 = (DataVals_o *)v31[4];
      if ( !v32 )
        goto LABEL_502;
      DataVals__loadActSet((DataVals_o *)v31[4], 0);
      PTSubTargetId = (BattleData_o *)DataVals__checkActSet(v32, 0);
      if ( ((unsigned __int8)PTSubTargetId & 1) != 0 )
      {
        PTSubTargetId = (BattleData_o *)DataVals__getActSetWeight(v32, 0);
        if ( (int)PTSubTargetId >= 1 )
        {
          ActSetWeight = DataVals__getActSetWeight(v32, 0);
          PTSubTargetId = (BattleData_o *)DataVals__getActSet(v32, 0);
          if ( !v28 )
            goto LABEL_502;
          WeightRate_int___setWeight(
            v28,
            ActSetWeight,
            (int32_t)PTSubTargetId,
            (const MethodInfo_3BF81D4 *)Method_WeightRate_int__setWeight__);
        }
      }
      max_length = baseValslist->max_length;
      if ( (int)++v30 >= max_length )
        goto LABEL_26;
    }
LABEL_503:
    sub_1C6BC68(PTSubTargetId);
  }
LABEL_26:
  if ( !v28 )
    goto LABEL_502;
  if ( WeightRate_int___getCount(v28, (const MethodInfo_3BF8590 *)Method_WeightRate_int__getCount__) <= 0 )
  {
    actSetId = v27->fields.actSetId;
  }
  else
  {
    Random = BattleRandom__getRandom(0, v28->fields.totalweight, 0);
    actSetId = WeightRate_int___getData(v28, Random, (const MethodInfo_3BF8648 *)Method_WeightRate_int__getData__);
    v27->fields.actSetId = actSetId;
  }
  mainAction->fields.ActSetId = actSetId;
  BattleActionData__initFuncTargetPlayerType(mainAction, funcIndex, 0);
  v36 = BattleLogicFunction___c_TypeInfo;
  funcUnitArray_k__BackingField = (System_Object_array *)v27->fields._funcUnitArray_k__BackingField;
  if ( !BattleLogicFunction___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BattleLogicFunction___c_TypeInfo);
    v36 = BattleLogicFunction___c_TypeInfo;
  }
  _9__45_0 = (System_Func_object__bool__o *)v36->static_fields->__9__45_0;
  if ( !_9__45_0 )
  {
    if ( !v36->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v36);
      v36 = BattleLogicFunction___c_TypeInfo;
    }
    v39 = (Il2CppObject *)v36->static_fields->__9;
    _9__45_0 = (System_Func_object__bool__o *)sub_1C6BC54(System_Func_BattleLogicFunctionProcess_FunctionUnitCheck__bool__TypeInfo);
    System_Func_object__bool____ctor(_9__45_0, v39, Method_BattleLogicFunction___c__procList_b__45_0__, 0);
    static_fields = BattleLogicFunction___c_TypeInfo->static_fields;
    static_fields->__9__45_0 = (struct System_Func_BattleLogicFunctionProcess_FunctionUnitCheck__bool__o *)_9__45_0;
    sub_1C6B9AC((CGThumbnailListItem_o *)&static_fields->__9__45_0, (int32_t)_9__45_0, v41, v42);
  }
  if ( !BasicHelper__Any_object__51528924(
          funcUnitArray_k__BackingField,
          (System_Func_T__bool__o *)_9__45_0,
          (const MethodInfo_31244DC *)Method_BasicHelper_Any_BattleLogicFunctionProcess_FunctionUnitCheck___) )
    mainAction->fields.isSuccessTargetSelection = 1;
  v43 = BattleLogicFunction___c_TypeInfo;
  v44 = (System_Collections_Generic_IEnumerable_TSource__o *)v27->fields._funcUnitArray_k__BackingField;
  if ( !BattleLogicFunction___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BattleLogicFunction___c_TypeInfo);
    v43 = BattleLogicFunction___c_TypeInfo;
  }
  _9__45_1 = (System_Func_object__bool__o *)v43->static_fields->__9__45_1;
  if ( !_9__45_1 )
  {
    if ( !v43->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v43);
      v43 = BattleLogicFunction___c_TypeInfo;
    }
    v46 = (Il2CppObject *)v43->static_fields->__9;
    _9__45_1 = (System_Func_object__bool__o *)sub_1C6BC54(System_Func_BattleLogicFunctionProcess_FunctionUnitCheck__bool__TypeInfo);
    System_Func_object__bool____ctor(_9__45_1, v46, Method_BattleLogicFunction___c__procList_b__45_1__, 0);
    v47 = BattleLogicFunction___c_TypeInfo->static_fields;
    v47->__9__45_1 = (struct System_Func_BattleLogicFunctionProcess_FunctionUnitCheck__bool__o *)_9__45_1;
    sub_1C6B9AC((CGThumbnailListItem_o *)&v47->__9__45_1, (int32_t)_9__45_1, v48, v49);
  }
  mainAction->fields.isSkillCopyFunctionOnly = System_Linq_Enumerable__All_object_(
                                                 v44,
                                                 (System_Func_TSource__bool__o *)_9__45_1,
                                                 (const MethodInfo_3145818 *)Method_System_Linq_Enumerable_All_BattleLogicFunctionProcess_FunctionUnitCheck___);
  v334 = 1;
  matched = BattleLogicFunction_ProcListInArgs__MatchSkillType(v27, 1, 0);
  if ( matched )
  {
    v51 = matched;
    PTSubTargetId = (BattleData_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3A4F3B4 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !PTSubTargetId )
      goto LABEL_502;
    PTSubTargetId = (BattleData_o *)DataManager__GetMasterData_object_(
                                      (DataManager_o *)PTSubTargetId,
                                      (const MethodInfo_313B368 *)Method_DataManager_GetMasterData_SkillMaster___);
    if ( !PTSubTargetId )
      goto LABEL_502;
    if ( DataMasterBase_object__object__int___TryGetEntity(
           (DataMasterBase_TMaster__TEntity__PKType__o *)PTSubTargetId,
           &entity,
           skillId,
           (const MethodInfo_33F9128 *)Method_DataMasterBase_SkillMaster__SkillEntity__int__TryGetEntity__) )
    {
      PTSubTargetId = (BattleData_o *)entity;
      if ( !entity )
        goto LABEL_502;
      IsIgnoreValueUp = SkillEntity__IsIgnoreValueUp((SkillEntity_o *)entity, 0);
    }
    else
    {
      IsIgnoreValueUp = 0;
    }
    v332 = 0;
    v334 = 1;
    if ( !IsIgnoreValueUp && v51 )
    {
      v53 = p_fields->data;
      v54 = (SkillValueUpApplierPlayerMaster_o *)sub_1C6BC54(SkillValueUpApplierPlayerMaster_TypeInfo);
      SkillValueUpApplierPlayerMaster___ctor(v54, v53, 0);
      if ( v54 )
      {
        v332 = v54;
        ((void (__fastcall *)(SkillValueUpApplierPlayerMaster_o *, const MethodInfo *))v54->klass->vtable._4_Init.methodPtr)(
          v54,
          v54->klass->vtable._4_Init.method);
        v334 = 0;
      }
      else
      {
        v332 = 0;
        v334 = 1;
      }
    }
  }
  else
  {
    v332 = 0;
  }
  BattleActionData__UpdateTargetRangeOfTreasureDevice(
    mainAction,
    p_fields->data,
    mainAction,
    v27->fields._funcUnitArray_k__BackingField,
    0);
  v55 = v27->fields._funcUnitArray_k__BackingField;
  if ( !v55 )
    goto LABEL_502;
  v56 = v55->max_length;
  if ( v56 >= 1 )
  {
    v57 = 0;
    v325 = 0;
    v326 = 0;
    v328 = 0;
    v329 = 0;
    v333 = v27->fields._funcUnitArray_k__BackingField;
    v330 = this;
    while ( 1 )
    {
      if ( v57 >= (unsigned int)v56 )
        goto LABEL_503;
      v58 = v55->m_Items[v57];
      v337 = v57;
      if ( !v58 )
        goto LABEL_502;
      PTSubTargetId = (BattleData_o *)BattleLogicFunctionProcess_FunctionUnitCheck__get_FuncIndex(v58, 0);
      dataVals_k__BackingField = v58->fields._dataVals_k__BackingField;
      functionIndex = (int)PTSubTargetId;
      if ( !dataVals_k__BackingField )
        goto LABEL_502;
      funcEnt = dataVals_k__BackingField->fields.funcEnt;
      funcUnit = v58;
      PTSubTargetId = (BattleData_o *)BattleLogicFunctionProcess_FunctionUnitCheck__checkCondtion(v58, mainAction, 0);
      if ( ((unsigned __int8)PTSubTargetId & 1) == 0 )
        goto LABEL_442;
      if ( (v334 & 1) == 0 )
        ((void (__fastcall *)(SkillValueUpApplierPlayerMaster_o *, BattleLogicFunctionProcess_FunctionUnitCheck_o *, const MethodInfo *))v332->klass->vtable._5_ApplyTo.methodPtr)(
          v332,
          v58,
          v332->klass->vtable._5_ApplyTo.method);
      PTSubTargetId = (BattleData_o *)UseInFsmFuncParam__Make(dataVals_k__BackingField, 0);
      v62 = (UseInFsmFuncParam_o *)PTSubTargetId;
      if ( isCreateSideEffect )
      {
        if ( !funcEnt )
          goto LABEL_502;
        PTSubTargetId = (BattleData_o *)BattleLogicFunction__IsAttackSideEffectInvokeFunc(
                                          (BattleLogicFunction_o *)PTSubTargetId,
                                          funcEnt->fields.funcType,
                                          dataVals_k__BackingField,
                                          v60);
        if ( ((unsigned __int8)PTSubTargetId & 1) != 0 )
        {
          v63 = BattleLogicFunction___c_TypeInfo;
          v64 = v62;
          funcTargetArray_k__BackingField = (System_Collections_Generic_IEnumerable_TSource__o *)v58->fields._funcTargetArray_k__BackingField;
          if ( !BattleLogicFunction___c_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(BattleLogicFunction___c_TypeInfo);
            v63 = BattleLogicFunction___c_TypeInfo;
          }
          _9__45_2 = (System_Func_object__bool__o *)v63->static_fields->__9__45_2;
          if ( !_9__45_2 )
          {
            if ( !v63->_2.cctor_finished )
            {
              j_il2cpp_runtime_class_init_0(v63);
              v63 = BattleLogicFunction___c_TypeInfo;
            }
            v67 = (Il2CppObject *)v63->static_fields->__9;
            _9__45_2 = (System_Func_object__bool__o *)sub_1C6BC54(System_Func_BattleLogicFunctionProcess_FunctionTargetCheck__bool__TypeInfo);
            System_Func_object__bool____ctor(_9__45_2, v67, Method_BattleLogicFunction___c__procList_b__45_2__, 0);
            v68 = BattleLogicFunction___c_TypeInfo->static_fields;
            v68->__9__45_2 = (struct System_Func_BattleLogicFunctionProcess_FunctionTargetCheck__bool__o *)_9__45_2;
            sub_1C6B9AC((CGThumbnailListItem_o *)&v68->__9__45_2, (int32_t)_9__45_2, v69, v70);
          }
          v71 = System_Linq_Enumerable__Where_object_(
                  funcTargetArray_k__BackingField,
                  (System_Func_TSource__bool__o *)_9__45_2,
                  (const MethodInfo_3182364 *)Method_System_Linq_Enumerable_Where_BattleLogicFunctionProcess_FunctionTargetCheck___);
          v72 = BattleLogicFunction___c_TypeInfo;
          v73 = v71;
          if ( !BattleLogicFunction___c_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(BattleLogicFunction___c_TypeInfo);
            v72 = BattleLogicFunction___c_TypeInfo;
          }
          _9__45_3 = (System_Func_object__int__o *)v72->static_fields->__9__45_3;
          if ( !_9__45_3 )
          {
            if ( !v72->_2.cctor_finished )
            {
              j_il2cpp_runtime_class_init_0(v72);
              v72 = BattleLogicFunction___c_TypeInfo;
            }
            v75 = (Il2CppObject *)v72->static_fields->__9;
            _9__45_3 = (System_Func_object__int__o *)sub_1C6BC54(System_Func_BattleLogicFunctionProcess_FunctionTargetCheck__int__TypeInfo);
            System_Func_object__int____ctor(_9__45_3, v75, Method_BattleLogicFunction___c__procList_b__45_3__, 0);
            v76 = BattleLogicFunction___c_TypeInfo->static_fields;
            v76->__9__45_3 = (struct System_Func_BattleLogicFunctionProcess_FunctionTargetCheck__int__o *)_9__45_3;
            sub_1C6B9AC((CGThumbnailListItem_o *)&v76->__9__45_3, (int32_t)_9__45_3, v77, v78);
          }
          v79 = (System_Collections_Generic_IEnumerable_TSource__o *)System_Linq_Enumerable__Select_object__int_(
                                                                       v73,
                                                                       (System_Func_TSource__TResult__o *)_9__45_3,
                                                                       (const MethodInfo_3171234 *)Method_System_Linq_Enumerable_Select_BattleLogicFunctionProcess_FunctionTargetCheck__int___);
          v80 = System_Linq_Enumerable__ToArray_int_(
                  v79,
                  (const MethodInfo_317B0B0 *)Method_System_Linq_Enumerable_ToArray_int___);
          v81 = FuncList__Check(26, funcEnt->fields.funcType, 0);
          v82 = (BattleLogicFunction_PreAttackSideEffectMakeArgument_o *)sub_1C6BC54(BattleLogicFunction_PreAttackSideEffectMakeArgument_TypeInfo);
          BattleLogicFunction_PreAttackSideEffectMakeArgument___ctor(v82, 0);
          if ( !v82 )
            goto LABEL_502;
          v83 = (BattleLogicFunction_SideEffectMakeArgument_o *)((__int64 (__fastcall *)(BattleLogicFunction_PreAttackSideEffectMakeArgument_o *, System_Int32_array *, const MethodInfo *))v82->klass->vtable._6_Init.methodPtr)(
                                                                  v82,
                                                                  v80,
                                                                  v82->klass->vtable._6_Init.method);
          BattleLogicFunction__setAttackSideEffect(this, mainAction, actionSvtData, v81 || isTreasureDvc, v83, v84);
          v62 = v64;
        }
      }
      v85 = funcUnit->fields._funcTargetArray_k__BackingField;
      if ( !v85 )
        goto LABEL_502;
      v86 = v85->max_length;
      p_funcType = &funcEnt->fields.funcType;
      if ( v86 >= 1 )
      {
        v87 = 0;
        v339 = v62;
        while ( 1 )
        {
          if ( v87 >= v86 )
            goto LABEL_503;
          v88 = v85->m_Items[v87];
          if ( !v88 )
            goto LABEL_502;
          BattleLogicFunction__SetTargetFuncList(
            this,
            v88->fields._targetId_k__BackingField,
            mainAction,
            dataVals_k__BackingField,
            v61);
          FuncSideEffectArg = BattleLogicFunction_ProcListInArgs__get_FuncSideEffectArg(v27, 0);
          if ( FuncSideEffectArg )
            BattleLogicFunction_FuncSideEffectFunctionArgument__AddTarget(FuncSideEffectArg, v88, 0);
          if ( !v88->fields._result_k__BackingField )
          {
            NoEffectObject = BattleLogicFunctionProcess_FunctionTargetCheck__getInvalidObject(v88, mainAction, 0);
            goto LABEL_96;
          }
          PTSubTargetId = p_fields->data;
          if ( !p_fields->data )
            goto LABEL_502;
          targetId_k__BackingField = v88->fields._targetId_k__BackingField;
          PTSubTargetId = (BattleData_o *)BattleData__getServantData(PTSubTargetId, targetId_k__BackingField, 0);
          if ( !PTSubTargetId )
            goto LABEL_502;
          v91 = (BattleServantData_o *)PTSubTargetId;
          PTSubTargetId = (BattleData_o *)BattleServantData__CheckNotTargetSkill(
                                            (BattleServantData_o *)PTSubTargetId,
                                            skillId,
                                            0);
          if ( ((unsigned __int8)PTSubTargetId & 1) != 0 )
          {
            NoEffectObject = BattleLogicFunction__getNoEffectObject(
                               this,
                               v91->fields.uniqueId,
                               functionIndex,
                               dataVals_k__BackingField,
                               isCommandSideEffect,
                               0,
                               0,
                               0,
                               overwriteLossHp);
LABEL_96:
            BattleActionData__addAction(mainAction, NoEffectObject, 0);
            goto LABEL_139;
          }
          mainAction->fields.funcResult = 1;
          v27->fields.tdCommandTypeChange = -1;
          if ( !funcEnt )
            goto LABEL_502;
          v93 = *p_funcType;
          if ( (unsigned int)(*p_funcType - 160) < 2 || v93 == 16 || v93 == 1 )
          {
            vals = funcEnt->fields.vals;
            if ( !vals )
              goto LABEL_502;
            if ( !LODWORD(vals->max_length) )
              goto LABEL_503;
            PTSubTargetId = (BattleData_o *)MasterData_object;
            if ( !MasterData_object )
              goto LABEL_502;
            PTSubTargetId = (BattleData_o *)DataMasterBase_object__object__int___GetEntity(
                                              MasterData_object,
                                              vals->m_Items[0],
                                              (const MethodInfo_33F90DC *)Method_DataMasterBase_BuffMaster__BuffEntity__int__GetEntity__);
            if ( !PTSubTargetId )
              goto LABEL_502;
            commandType = 1;
            switch ( HIDWORD(PTSubTargetId->fields.m_CachedPtr) )
            {
              case 0x8F:
                commandType = mainAction->fields.commandType;
                goto LABEL_111;
              case 0x91:
                goto LABEL_111;
              case 0x92:
                commandType = 2;
                goto LABEL_111;
              case 0x93:
                commandType = 3;
LABEL_111:
                v27->fields.tdCommandTypeChange = commandType;
                break;
              default:
                break;
            }
            BattleLogicFunction__functionAddState(this, mainAction, v88, v27, v93 == 16 || v93 == 161, v95);
            goto LABEL_113;
          }
          if ( FuncList__Check(2, v93, 0) )
          {
            v97 = BattleLogicFunction__functionSubState(
                    this,
                    targetId_k__BackingField,
                    funcEnt,
                    dataVals_k__BackingField,
                    functionIndex,
                    isCommandSideEffect,
                    &subBuffInfo,
                    v27,
                    overwriteLossHp);
            goto LABEL_131;
          }
          if ( FuncList__Check(3, *p_funcType, 0) )
          {
            this = v330;
            actorId = mainAction->fields.actorId;
            uniqueId = v91->fields.uniqueId;
            isSafeDamage = BattleLogicFunction__isSafeDamage(
                             v330,
                             dataVals_k__BackingField,
                             targetId_k__BackingField,
                             v104);
            v97 = BattleLogicFunction__functionDamage(
                    v330,
                    actorId,
                    uniqueId,
                    dataVals_k__BackingField,
                    functionIndex,
                    mainAction,
                    isSafeDamage,
                    v108);
            goto LABEL_131;
          }
          v62 = v339;
          if ( FuncList__Check(4, *p_funcType, 0) )
          {
            v110 = mainAction->fields.actorId;
            v111 = v91->fields.uniqueId;
            v112 = 1;
LABEL_155:
            this = v330;
            v115 = BattleLogicFunction__functionNPDamage(
                     v330,
                     v110,
                     v111,
                     dataVals_k__BackingField,
                     functionIndex,
                     v112,
                     mainAction,
                     v109);
LABEL_156:
            BattleActionData__addAction(mainAction, v115, 0);
            goto LABEL_114;
          }
          if ( FuncList__Check(14, *p_funcType, 0) )
          {
            v110 = mainAction->fields.actorId;
            v111 = v91->fields.uniqueId;
            v112 = 2;
            goto LABEL_155;
          }
          if ( FuncList__Check(15, *p_funcType, 0) )
          {
            v110 = mainAction->fields.actorId;
            v111 = v91->fields.uniqueId;
            v112 = 3;
            goto LABEL_155;
          }
          if ( FuncList__Check(18, *p_funcType, 0) )
          {
            v110 = mainAction->fields.actorId;
            v111 = v91->fields.uniqueId;
            v112 = 4;
            goto LABEL_155;
          }
          if ( FuncList__Check(27, *p_funcType, 0) )
          {
            v110 = mainAction->fields.actorId;
            v111 = v91->fields.uniqueId;
            v112 = 7;
            goto LABEL_155;
          }
          if ( FuncList__Check(21, *p_funcType, 0) )
          {
            v110 = mainAction->fields.actorId;
            v111 = v91->fields.uniqueId;
            v112 = 5;
            goto LABEL_155;
          }
          if ( FuncList__Check(22, *p_funcType, 0) )
          {
            v110 = mainAction->fields.actorId;
            v111 = v91->fields.uniqueId;
            v112 = 6;
            goto LABEL_155;
          }
          if ( FuncList__Check(28, *p_funcType, 0) )
          {
            v110 = mainAction->fields.actorId;
            v111 = v91->fields.uniqueId;
            v112 = 8;
            goto LABEL_155;
          }
          if ( FuncList__Check(5, *p_funcType, 0) )
          {
            v116 = p_fields->data;
            PTSubTargetId = (BattleData_o *)((__int64 (__fastcall *)(BattleLogicFunctionProcess_FunctionTargetCheck_o *, const MethodInfo *))v88->klass->vtable._16_GetCommonBaseValue.methodPtr)(
                                              v88,
                                              v88->klass->vtable._16_GetCommonBaseValue.method);
            if ( !v116 )
              goto LABEL_502;
            BattleData__addCriticalPoint(v116, (int32_t)PTSubTargetId, 0);
            PTSubTargetId = (BattleData_o *)BattleLogicFunction__getFunctionObject(
                                              v117,
                                              funcEnt,
                                              v91->fields.uniqueId,
                                              functionIndex,
                                              isCommandSideEffect,
                                              0,
                                              v118);
            this = v330;
            if ( !PTSubTargetId )
              goto LABEL_502;
            LODWORD(PTSubTargetId->fields.rootfsm) = 4;
            BattleActionData__setBuffData(
              mainAction,
              (BattleActionData_BuffData_o *)PTSubTargetId,
              dataVals_k__BackingField,
              0,
              0);
            p_data = &p_fields->data;
            v62 = v339;
LABEL_165:
            PTSubTargetId = *p_data;
            if ( !*p_data )
              goto LABEL_502;
            BattleData__AddPerformedVals(PTSubTargetId, dataVals_k__BackingField, 0);
            goto LABEL_114;
          }
          if ( FuncList__Check(31, *p_funcType, 0) )
          {
            v120 = p_fields->data;
            PTSubTargetId = (BattleData_o *)DataVals__GetValue(dataVals_k__BackingField, 0);
            if ( !v120 )
              goto LABEL_502;
            BattleData__lossCriticalPoint(v120, (int32_t)PTSubTargetId, 0);
            PTSubTargetId = (BattleData_o *)BattleLogicFunction__getFunctionObject(
                                              v121,
                                              funcEnt,
                                              v91->fields.uniqueId,
                                              functionIndex,
                                              isCommandSideEffect,
                                              0,
                                              v122);
            this = v330;
            if ( !PTSubTargetId )
              goto LABEL_502;
            LODWORD(PTSubTargetId->fields.rootfsm) = 4;
            BattleActionData__setBuffData(
              mainAction,
              (BattleActionData_BuffData_o *)PTSubTargetId,
              dataVals_k__BackingField,
              0,
              0);
            p_data = &p_fields->data;
            goto LABEL_165;
          }
          if ( FuncList__Check(6, *p_funcType, 0) )
          {
            this = v330;
            v115 = BattleLogicFunction__functionGainHp(
                     v330,
                     mainAction->fields.actorId,
                     targetId_k__BackingField,
                     funcEnt,
                     dataVals_k__BackingField,
                     functionIndex,
                     isCommandSideEffect,
                     -1,
                     overwriteLossHp);
            goto LABEL_156;
          }
          if ( FuncList__Check(17, *p_funcType, 0) )
          {
            this = v330;
            v115 = BattleLogicFunction__functionGainHpPer(
                     v330,
                     mainAction->fields.actorId,
                     targetId_k__BackingField,
                     funcEnt,
                     dataVals_k__BackingField,
                     functionIndex,
                     isCommandSideEffect,
                     v123);
            goto LABEL_156;
          }
          if ( FuncList__Check(7, *p_funcType, 0) )
            break;
          if ( FuncList__Check(8, *p_funcType, 0) )
          {
            if ( !BattleServantData__checkPlayer(v91, 0) )
              goto LABEL_193;
            v132 = -DataVals__GetValue(dataVals_k__BackingField, 0);
LABEL_183:
            v133 = (BattleLogicFunction_o *)BattleServantData__addNp(v91, v132, 0, 0);
            v134 = (int)v133;
            PTSubTargetId = (BattleData_o *)BattleLogicFunction__getFunctionObject(
                                              v133,
                                              funcEnt,
                                              v91->fields.uniqueId,
                                              functionIndex,
                                              isCommandSideEffect,
                                              0,
                                              v135);
            if ( !PTSubTargetId )
              goto LABEL_502;
            v136 = (BattleActionData_BuffData_o *)PTSubTargetId;
            LODWORD(PTSubTargetId->fields.rootfsm) = 3;
            BattleActionData_BuffData__setSaveNp((BattleActionData_BuffData_o *)PTSubTargetId, v134, 0);
            v130 = mainAction;
            FunctionObject = v136;
            goto LABEL_192;
          }
          if ( FuncList__Check(9, *p_funcType, 0) )
          {
            v137 = DataVals__GetValue2(dataVals_k__BackingField, 0) - 1;
            TargetList = DataVals__GetTargetList(dataVals_k__BackingField, 0);
            Value = DataVals__GetValue(dataVals_k__BackingField, 0);
            PTSubTargetId = (BattleData_o *)BattleServantData__skillChageShorten(v91, Value, 0, v137, TargetList, 0);
            goto LABEL_189;
          }
          if ( FuncList__Check(10, *p_funcType, 0) )
          {
            v141 = DataVals__GetValue2(dataVals_k__BackingField, 0) - 1;
            v142 = DataVals__GetTargetList(dataVals_k__BackingField, 0);
            v143 = DataVals__GetValue(dataVals_k__BackingField, 0);
            PTSubTargetId = (BattleData_o *)BattleServantData__skillChageExtend(v91, v143, 999, v141, v142, 0);
LABEL_189:
            v144 = v91->fields.uniqueId;
            if ( ((unsigned __int8)PTSubTargetId & 1) == 0 )
            {
              v147 = isCommandSideEffect;
              this = v330;
              v148 = v91->fields.uniqueId;
              goto LABEL_290;
            }
            goto LABEL_190;
          }
          if ( FuncList__Check(12, *p_funcType, 0) )
          {
            this = v330;
            v150 = mainAction->fields.actorId;
            v151 = BattleLogicFunction__isSafeDamage(v330, dataVals_k__BackingField, targetId_k__BackingField, v149);
            v97 = BattleLogicFunction__functionlossHp(
                    v330,
                    v150,
                    targetId_k__BackingField,
                    funcEnt,
                    dataVals_k__BackingField,
                    functionIndex,
                    v151,
                    isCommandSideEffect,
                    -1,
                    1,
                    mainAction,
                    v321);
            goto LABEL_131;
          }
          if ( FuncList__Check(25, *p_funcType, 0) )
          {
            this = v330;
            v97 = BattleLogicFunction__functionlossHp(
                    v330,
                    mainAction->fields.actorId,
                    targetId_k__BackingField,
                    funcEnt,
                    dataVals_k__BackingField,
                    functionIndex,
                    1,
                    isCommandSideEffect,
                    -1,
                    1,
                    mainAction,
                    v321);
            goto LABEL_131;
          }
          if ( FuncList__Check(13, *p_funcType, 0) )
          {
            this = v330;
            v97 = BattleLogicFunction__functionInstantDeath(
                    v330,
                    mainAction->fields.actorId,
                    targetId_k__BackingField,
                    funcEnt,
                    dataVals_k__BackingField,
                    functionIndex,
                    isCommandSideEffect,
                    0,
                    funcUnit,
                    isRandomDamage);
            goto LABEL_131;
          }
          if ( FuncList__Check(19, *p_funcType, 0) )
          {
            this = v330;
            v97 = BattleLogicFunction__functionHastenNpTurn(
                    v330,
                    targetId_k__BackingField,
                    funcEnt,
                    dataVals_k__BackingField,
                    functionIndex,
                    isCommandSideEffect,
                    -1,
                    v152);
            goto LABEL_131;
          }
          if ( FuncList__Check(20, *p_funcType, 0) )
          {
            this = v330;
            v97 = BattleLogicFunction__functionDelayNpTurn(
                    v330,
                    targetId_k__BackingField,
                    funcEnt,
                    dataVals_k__BackingField,
                    functionIndex,
                    isCommandSideEffect,
                    &absorptionCount,
                    v153);
            goto LABEL_131;
          }
          if ( FuncList__Check(56, *p_funcType, 0) )
          {
            this = v330;
            v97 = BattleLogicFunction__functionAbsorbNpTurn(
                    v330,
                    targetId_k__BackingField,
                    funcEnt,
                    mainAction,
                    v88,
                    isCommandSideEffect,
                    v154);
            goto LABEL_131;
          }
          if ( FuncList__Check(23, *p_funcType, 0) )
          {
            v160 = v330;
            v161 = BattleLogicFunction__functionResetCommandCard(v330, v155, v156, v157, v158, v159);
            goto LABEL_210;
          }
          if ( FuncList__Check(24, *p_funcType, 0) )
          {
            applyTarget = funcEnt->fields.applyTarget;
            if ( applyTarget == 2 )
            {
              this = v330;
              v97 = BattleLogicFunction__functionReplaceEnemyMember(
                      v330,
                      v162,
                      dataVals_k__BackingField,
                      functionIndex,
                      v164);
              goto LABEL_131;
            }
            if ( applyTarget != 1 )
              goto LABEL_193;
            v160 = v330;
            v161 = BattleLogicFunction__functionReplaceMember(
                     v330,
                     targetId_k__BackingField,
                     subTargetId,
                     v163,
                     (DataVals_o *)v164,
                     functionIndex,
                     v165);
LABEL_210:
            BattleActionData__addAction(mainAction, v161, 0);
            PTSubTargetId = v160->fields.data;
            if ( !PTSubTargetId )
              goto LABEL_502;
            BattleData__AddPerformedVals(PTSubTargetId, dataVals_k__BackingField, 0);
            goto LABEL_193;
          }
          if ( FuncList__Check(109, *p_funcType, 0) )
          {
            this = v330;
            v97 = BattleLogicFunction__functionTransformServant(
                    v330,
                    targetId_k__BackingField,
                    v167,
                    dataVals_k__BackingField,
                    functionIndex,
                    v27,
                    v168);
            goto LABEL_131;
          }
          if ( FuncList__Check(26, *p_funcType, 0) )
          {
            this = v330;
            v170 = BattleLogicFunction__functionReflection(
                     v330,
                     mainAction->fields.actorId,
                     v91->fields.uniqueId,
                     dataVals_k__BackingField,
                     functionIndex,
                     v169);
            BattleActionData__addAction(mainAction, v170, 0);
            v62 = v339;
            v329 = 1;
          }
          else
          {
            if ( FuncList__Check(29, *p_funcType, 0) )
            {
              this = v330;
              v97 = BattleLogicFunction__functionCallServant(
                      v330,
                      mainAction->fields.actorId,
                      v171,
                      dataVals_k__BackingField,
                      functionIndex,
                      isCommandSideEffect,
                      v27,
                      v172);
              goto LABEL_131;
            }
            if ( FuncList__Check(30, *p_funcType, 0) )
            {
              v178 = BattleLogicFunction__functionPtShuffle(v330, v173, v174, v175, v176, v177);
              BattleActionData__addAction(mainAction, v178, 0);
              PTSubTargetId = v330->fields.data;
              if ( !PTSubTargetId )
                goto LABEL_502;
              BattleData__AddPerformedVals(PTSubTargetId, dataVals_k__BackingField, 0);
              v328 = 1;
              goto LABEL_193;
            }
            if ( FuncList__Check(32, *p_funcType, 0) )
            {
              this = v330;
              v97 = BattleLogicFunction__functionChangeServant(
                      v330,
                      mainAction->fields.actorId,
                      targetId_k__BackingField,
                      v179,
                      dataVals_k__BackingField,
                      v180,
                      v181);
              goto LABEL_131;
            }
            v182 = FuncList__Check(33, *p_funcType, 0);
            if ( v182 )
            {
              v186 = BattleLogicFunction__functionChangeBg(
                       (BattleLogicFunction_o *)v182,
                       mainAction->fields.actorId,
                       v183,
                       dataVals_k__BackingField,
                       v184,
                       v185);
              goto LABEL_230;
            }
            if ( FuncList__Check(34, *p_funcType, 0) )
            {
              this = v330;
              v188 = mainAction->fields.actorId;
              v189 = v91->fields.uniqueId;
              v190 = BattleLogicFunction__isSafeDamage(v330, dataVals_k__BackingField, targetId_k__BackingField, v187);
              goto LABEL_233;
            }
            if ( FuncList__Check(122, *p_funcType, 0) )
            {
              this = v330;
              v193 = mainAction->fields.actorId;
              v194 = v91->fields.uniqueId;
              v190 = 1;
              v192 = v330;
              goto LABEL_236;
            }
            if ( FuncList__Check(35, *p_funcType, 0) )
            {
              v91->fields.isWithdraw = 1;
              goto LABEL_193;
            }
            PTSubTargetId = (BattleData_o *)FuncList__Check(36, *p_funcType, 0);
            if ( ((unsigned __int8)PTSubTargetId & 1) != 0 )
            {
              v197 = p_fields->data;
              if ( !p_fields->data )
                goto LABEL_502;
              draw_commandlist = v197->fields.draw_commandlist;
              v197->fields.fixedCommands = draw_commandlist;
              sub_1C6B9AC((CGThumbnailListItem_o *)&v197->fields.fixedCommands, (int32_t)draw_commandlist, v195, v196);
              goto LABEL_242;
            }
            if ( FuncList__Check(37, *p_funcType, 0)
              || FuncList__Check(38, *p_funcType, 0)
              || FuncList__Check(39, *p_funcType, 0)
              || FuncList__Check(40, *p_funcType, 0) )
            {
              v199 = DataVals__GetValue(dataVals_k__BackingField, 0);
              if ( FuncList__Check(37, *p_funcType, 0) || FuncList__Check(39, *p_funcType, 0) )
                v199 = -v199;
              if ( FuncList__Check(37, *p_funcType, 0) || FuncList__Check(38, *p_funcType, 0) )
              {
                v199 *= 2;
                v200 = 1;
              }
              else
              {
                v200 = 0;
              }
              data = DataVals__isParam(dataVals_k__BackingField, 91, 0);
              isParam = DataVals__isParam(dataVals_k__BackingField, 150, 0);
              svtSnapShotOnBuffUpdate = 0;
              if ( isParam )
              {
                svtSnapShotOnBuffUpdate = (BattleServantSnapShotOnBuffUpdate_o *)sub_1C6BC54(BattleServantSnapShotOnBuffUpdate_TypeInfo);
                BattleServantSnapShotOnBuffUpdate___ctor(svtSnapShotOnBuffUpdate, v91, 0);
              }
              v202 = DataVals__GetTargetList(dataVals_k__BackingField, 0);
              PTSubTargetId = (BattleData_o *)BattleServantData__ChangeBuffValue(
                                                v91,
                                                v199,
                                                v202,
                                                v200,
                                                1,
                                                isParam,
                                                &buffsToRemove,
                                                data,
                                                0);
              if ( ((unsigned __int8)PTSubTargetId & 1) == 0 )
                goto LABEL_288;
              if ( isParam )
              {
                action = (BattleActionData_o *)buffsToRemove;
                if ( !buffsToRemove )
                  goto LABEL_502;
                if ( buffsToRemove->fields._count >= 1 )
                {
                  PTSubTargetId = (BattleData_o *)v91->fields.buffData;
                  if ( !PTSubTargetId )
                    goto LABEL_502;
                  PTSubTargetId = (BattleData_o *)BattleBuffData__SubBuffSpecified(
                                                    (BattleBuffData_o *)PTSubTargetId,
                                                    buffsToRemove,
                                                    1,
                                                    0);
                  if ( !PTSubTargetId )
                    goto LABEL_502;
                  this = v330;
                  BattleLogicFunction__ApplySubBuffChanges(
                    v330,
                    mainAction,
                    (System_Collections_Generic_List_BattleBuffData_BuffData__o *)PTSubTargetId->fields.m_CachedPtr,
                    targetId_k__BackingField,
                    svtSnapShotOnBuffUpdate,
                    dataVals_k__BackingField,
                    functionIndex,
                    isCommandSideEffect,
                    v27,
                    isRandomDamage);
                  goto LABEL_113;
                }
              }
LABEL_242:
              v144 = v91->fields.uniqueId;
LABEL_190:
              v145 = isCommandSideEffect;
              v146 = funcEnt;
LABEL_191:
              FunctionObject = BattleLogicFunction__getFunctionObject(
                                 (BattleLogicFunction_o *)PTSubTargetId,
                                 v146,
                                 v144,
                                 functionIndex,
                                 v145,
                                 0,
                                 v140);
              v130 = mainAction;
              goto LABEL_192;
            }
            if ( FuncList__Check(41, *p_funcType, 0) )
            {
              this = v330;
              dataa = v330->fields.data;
              v203 = DataVals__GetValue(dataVals_k__BackingField, 0);
              v204 = (Generator_BGMFromChangeBGMFunc_o *)sub_1C6BC54(Generator_BGMFromChangeBGMFunc_TypeInfo);
              Generator_BGMFromChangeBGMFunc___ctor(v204, dataa, v203, dataVals_k__BackingField, 0, 0);
              BgmFadeTime = DataVals__GetBgmFadeTime(dataVals_k__BackingField, 0);
              BattleLogicFunction__FunctionChangeBgm(v330, v27, (Generator_BGM_o *)v204, 0, BgmFadeTime, v206);
              goto LABEL_113;
            }
            PTSubTargetId = (BattleData_o *)FuncList__Check(42, *p_funcType, 0);
            if ( ((unsigned __int8)PTSubTargetId & 1) != 0 )
              goto LABEL_242;
            if ( FuncList__Check(43, *p_funcType, 0) )
            {
              this = v330;
              v97 = BattleLogicFunction__functionResurrection(
                      v330,
                      v91->fields.uniqueId,
                      functionIndex,
                      funcEnt,
                      dataVals_k__BackingField,
                      isCommandSideEffect,
                      v207);
              goto LABEL_131;
            }
            if ( FuncList__Check(44, *p_funcType, 0)
              || FuncList__Check(133, *p_funcType, 0)
              || FuncList__Check(146, *p_funcType, 0)
              || FuncList__Check(154, *p_funcType, 0) )
            {
              v208 = funcEnt->fields.vals;
              if ( FuncList__Check(44, funcEnt->fields.funcType, 0) )
              {
                SameIndiualityBuffSum = BattleServantData__getSameIndiualityBuffSum(v91, v208, 1, 0, 0, 0);
                goto LABEL_284;
              }
              if ( FuncList__Check(133, *p_funcType, 0) )
              {
                SameIndiualityBuffSum = GainNpIndividualSum__GetSameIndiualitySum(
                                          p_fields->data,
                                          mainAction->fields.actorId,
                                          v91->fields.uniqueId,
                                          dataVals_k__BackingField,
                                          funcEnt,
                                          0);
                goto LABEL_284;
              }
              if ( FuncList__Check(146, *p_funcType, 0) )
              {
                SameIndiualityBuffSum = GainNpIndividualSum__GetIndividualityIncludeTargetSum(
                                          p_fields->data,
                                          mainAction->fields.actorId,
                                          v91->fields.uniqueId,
                                          dataVals_k__BackingField,
                                          funcEnt,
                                          0);
                goto LABEL_284;
              }
              PTSubTargetId = (BattleData_o *)FuncList__Check(154, *p_funcType, 0);
              if ( ((unsigned __int8)PTSubTargetId & 1) != 0 )
              {
                if ( !p_fields->data )
                  goto LABEL_502;
                totalCriticalStars = p_fields->data->fields.totalCriticalStars;
                Value2 = DataVals__GetValue2(dataVals_k__BackingField, 0);
                if ( Value2 >= 1 )
                {
                  v212 = Value2;
                  if ( !System_Math_TypeInfo->_2.cctor_finished )
                    j_il2cpp_runtime_class_init_0(System_Math_TypeInfo);
                  SameIndiualityBuffSum = System_Math__Min_65488940(totalCriticalStars, v212, 0);
LABEL_284:
                  totalCriticalStars = SameIndiualityBuffSum;
                }
              }
              else
              {
                totalCriticalStars = 0;
              }
              CorrectedValueFuncGainNp = DataVals__GetValue(dataVals_k__BackingField, 0) * totalCriticalStars;
              if ( !DataVals__isUnaffected(dataVals_k__BackingField, 0) )
                CorrectedValueFuncGainNp = BattleServantData__getCorrectedValueFuncGainNp(
                                             v91,
                                             CorrectedValueFuncGainNp,
                                             0);
              if ( CorrectedValueFuncGainNp < 1 )
              {
LABEL_288:
                v148 = v91->fields.uniqueId;
                goto LABEL_289;
              }
LABEL_175:
              if ( !BattleServantData__isGainNp(v91, 1, dataVals_k__BackingField, 0) )
                goto LABEL_288;
              v126 = (BattleLogicFunction_o *)BattleServantData__addNp(v91, CorrectedValueFuncGainNp, 0, 0);
              v127 = (int)v126;
              PTSubTargetId = (BattleData_o *)BattleLogicFunction__getFunctionObject(
                                                v126,
                                                funcEnt,
                                                v91->fields.uniqueId,
                                                functionIndex,
                                                isCommandSideEffect,
                                                0,
                                                v128);
              if ( !PTSubTargetId )
                goto LABEL_502;
              v129 = (BattleActionData_BuffData_o *)PTSubTargetId;
              LODWORD(PTSubTargetId->fields.rootfsm) = 3;
              BattleActionData_BuffData__setSaveNp((BattleActionData_BuffData_o *)PTSubTargetId, v127, 0);
              if ( isCommandSideEffect )
                v129->fields.isCommandAfter = 1;
              v130 = mainAction;
              FunctionObject = v129;
LABEL_192:
              BattleActionData__setBuffData(v130, FunctionObject, dataVals_k__BackingField, 0, 0);
              goto LABEL_193;
            }
            if ( FuncList__Check(45, *p_funcType, 0) )
            {
              v91->fields.isSystemAlive = DataVals__GetValue(dataVals_k__BackingField, 0) == 1;
              goto LABEL_193;
            }
            if ( FuncList__Check(46, *p_funcType, 0) )
            {
              this = v330;
              v97 = BattleLogicFunction__functionInstantDeath(
                      v330,
                      mainAction->fields.actorId,
                      targetId_k__BackingField,
                      funcEnt,
                      dataVals_k__BackingField,
                      functionIndex,
                      isCommandSideEffect,
                      1,
                      funcUnit,
                      isRandomDamage);
              goto LABEL_131;
            }
            if ( FuncList__Check(47, *p_funcType, 0) )
            {
              v219 = mainAction->fields.actorId;
              v220 = v91->fields.uniqueId;
              v221 = 9;
              goto LABEL_299;
            }
            if ( FuncList__Check(48, *p_funcType, 0) )
            {
              this = v330;
              v97 = BattleLogicFunction__functionGainNpFromTargets(v330, v27, mainAction, v88, v222);
              goto LABEL_131;
            }
            if ( FuncList__Check(49, *p_funcType, 0) )
            {
              this = v330;
              v97 = BattleLogicFunction__functionGainHpFromTargets(v330, v27, mainAction, v88, v223);
              goto LABEL_131;
            }
            v224 = FuncList__Check(50, *p_funcType, 0);
            if ( v224 || (v224 = FuncList__Check(51, *p_funcType, 0)) )
            {
              v226 = *p_funcType == 51;
              if ( *p_funcType == 50 )
              {
                v224 = BattleLogicFunction__isSafeDamage(v330, dataVals_k__BackingField, targetId_k__BackingField, v225);
                v226 = v224;
              }
              v227 = mainAction->fields.actorId;
              HpPerValue = BattleLogicFunction__getHpPerValue(
                             (BattleLogicFunction_o *)v224,
                             dataVals_k__BackingField,
                             v91,
                             v225);
              this = v330;
              v97 = BattleLogicFunction__functionlossHp(
                      v330,
                      v227,
                      targetId_k__BackingField,
                      funcEnt,
                      dataVals_k__BackingField,
                      functionIndex,
                      v226,
                      isCommandSideEffect,
                      HpPerValue,
                      0,
                      mainAction,
                      v321);
              goto LABEL_131;
            }
            if ( FuncList__Check(52, *p_funcType, 0) )
            {
              v230 = v330;
              v231 = 1;
              v232 = dataVals_k__BackingField;
              goto LABEL_313;
            }
            if ( FuncList__Check(62, *p_funcType, 0) )
            {
              v230 = v330;
              v232 = dataVals_k__BackingField;
              v231 = 0;
LABEL_313:
              updated = BattleLogicFunction__UpdateUserEquipSkillChargeTurn(v230, v232, v231, v229);
              if ( !updated )
              {
                v235 = (BattleActionData_MasterBuffData_o *)sub_1C6BC54(BattleActionData_MasterBuffData_TypeInfo);
                BattleActionData_MasterBuffData___ctor(v235, funcEnt, 0);
                if ( !v235 )
                  goto LABEL_502;
                v235->fields.popColor = 1;
                v215 = functionIndex;
                this = v330;
                v148 = v88->fields._targetId_k__BackingField;
                v216 = dataVals_k__BackingField;
                v213 = isCommandSideEffect;
                v214 = v330;
                v217 = (BattleActionData_BuffData_o *)v235;
                goto LABEL_291;
              }
              BattleLogicFunction__CreateMasterBuffEffect(
                (BattleLogicFunction_o *)updated,
                mainAction,
                funcEnt,
                functionIndex,
                isCommandSideEffect,
                dataVals_k__BackingField,
                v234);
              goto LABEL_193;
            }
            if ( FuncList__Check(53, *p_funcType, 0) )
            {
              v236 = (Generator_BGFromQuickChangeBGFunc_o *)sub_1C6BC54(Generator_BGFromQuickChangeBGFunc_TypeInfo);
              Generator_BGFromQuickChangeBGFunc___ctor(v236, dataVals_k__BackingField, 0);
              this = v330;
              BattleLogicFunction__FunctionQuickChangeBG(v330, v27, (Generator_Background_o *)v236, v237);
              goto LABEL_113;
            }
            if ( FuncList__Check(54, *p_funcType, 0) )
            {
              PTSubTargetId = (BattleData_o *)v91->fields.svtdata;
              if ( !PTSubTargetId )
                goto LABEL_502;
              if ( !ServantEntity__isInvalidSkillShift((ServantEntity_o *)PTSubTargetId, 0) )
              {
                this = v330;
                BattleLogicFunction__functionShiftServant(v330, mainAction, v91, dataVals_k__BackingField, v238);
                goto LABEL_113;
              }
              v148 = v88->fields._targetId_k__BackingField;
LABEL_289:
              v147 = isCommandSideEffect;
              this = v330;
LABEL_290:
              v213 = v147;
              v214 = this;
              v215 = functionIndex;
              v216 = dataVals_k__BackingField;
              v217 = 0;
LABEL_291:
              v97 = BattleLogicFunction__getNoEffectObject(v214, v148, v215, v216, v213, 0, v217, 0, overwriteLossHp);
              goto LABEL_131;
            }
            if ( FuncList__Check(55, *p_funcType, 0) )
            {
              v219 = mainAction->fields.actorId;
              v220 = v91->fields.uniqueId;
              v221 = 10;
LABEL_299:
              this = v330;
              v97 = BattleLogicFunction__functionNPDamage(
                      v330,
                      v219,
                      v220,
                      dataVals_k__BackingField,
                      functionIndex,
                      v221,
                      mainAction,
                      v218);
              goto LABEL_131;
            }
            if ( FuncList__Check(57, *p_funcType, 0) )
            {
              v91->fields.deadtype = DataVals__GetValue(dataVals_k__BackingField, 0);
              goto LABEL_193;
            }
            if ( FuncList__Check(58, *p_funcType, 0) )
            {
              buffData = v91->fields.buffData;
              PTSubTargetId = (BattleData_o *)DataVals__GetParam(dataVals_k__BackingField, 14, 0, 0);
              if ( !buffData )
                goto LABEL_502;
              BattleBuffData__UpdateForceAllBuffNoAct(buffData, (int32_t)PTSubTargetId, funcEnt->fields.vals, 0);
              v145 = isCommandSideEffect;
              v144 = v91->fields.uniqueId;
              v146 = funcEnt;
              goto LABEL_191;
            }
            if ( FuncList__Check(59, *p_funcType, 0) )
            {
              v240 = (BattleActionData_UpShiftGaugeData_o *)sub_1C6BC54(BattleActionData_UpShiftGaugeData_TypeInfo);
              BattleActionData_UpShiftGaugeData___ctor(v240, 0);
LABEL_335:
              this = v330;
              BattleLogicFunction__functionBreakGaugeChange(
                v330,
                mainAction,
                funcUnit,
                v91,
                (BattleActionData_BaseShiftGaugeData_o *)v240,
                v241);
              goto LABEL_113;
            }
            if ( FuncList__Check(60, *p_funcType, 0) )
            {
              v240 = (BattleActionData_UpShiftGaugeData_o *)sub_1C6BC54(BattleActionData_DownShiftGaugeData_TypeInfo);
              BattleActionData_DownShiftGaugeData___ctor((BattleActionData_DownShiftGaugeData_o *)v240, 0);
              goto LABEL_335;
            }
            if ( !FuncList__Check(61, *p_funcType, 0) )
            {
              if ( FuncList__Check(119, *p_funcType, 0) )
              {
                this = v330;
                BattleLogicFunction__functionMovePosition(v330, mainAction, v91, v245);
                goto LABEL_113;
              }
              if ( FuncList__Check(120, *p_funcType, 0) )
              {
                this = v330;
                BattleLogicFunction__FunctionRevival(v330, mainAction, v88, v246);
                goto LABEL_113;
              }
              if ( FuncList__Check(121, *p_funcType, 0) )
              {
                v219 = mainAction->fields.actorId;
                v220 = v91->fields.uniqueId;
                v221 = 11;
                goto LABEL_299;
              }
              if ( FuncList__Check(143, *p_funcType, 0) )
              {
                v219 = mainAction->fields.actorId;
                v220 = v91->fields.uniqueId;
                v221 = 12;
                goto LABEL_299;
              }
              if ( FuncList__Check(124, *p_funcType, 0) )
              {
                this = v330;
                BattleLogicFunction__functionMoveState(v330, v27, mainAction, v88, v247);
                goto LABEL_113;
              }
              if ( FuncList__Check(125, *p_funcType, 0) )
              {
                this = v330;
                BattleLogicFunction__ChangeBGMCostume(v330, dataVals_k__BackingField, mainAction, v248);
                goto LABEL_113;
              }
              v249 = FuncList__Check(126, *p_funcType, 0);
              if ( v249 )
              {
                BattleLogicFunction__LossCommandSpell(
                  (BattleLogicFunction_o *)v249,
                  dataVals_k__BackingField,
                  mainAction,
                  v250);
                goto LABEL_193;
              }
              if ( !FuncList__Check(127, *p_funcType, 0) )
              {
                if ( FuncList__Check(128, *p_funcType, 0) )
                {
                  this = v330;
                  BattleLogicFunction__FunctionUpdateEntryPositions(v330, dataVals_k__BackingField, v251);
                  goto LABEL_113;
                }
                if ( FuncList__Check(63, *p_funcType, 0) )
                {
                  this = v330;
                  BattleLogicFunction__FunctionUpdateEntryMaxCountEachTurn(v330, dataVals_k__BackingField, v252);
                  goto LABEL_113;
                }
                if ( FuncList__Check(130, *p_funcType, 0) )
                {
                  this = v330;
                  BattleLogicFunction__FunctionToFieldAddChangeFieldBuff(
                    v330,
                    v27,
                    mainAction,
                    v88,
                    isTreasureDvc,
                    v253);
                  goto LABEL_113;
                }
                if ( FuncList__Check(131, *p_funcType, 0) )
                {
                  this = v330;
                  BattleLogicFunction__FunctionSubFieldBuff(v330, v27, mainAction, v88, v254);
                  goto LABEL_113;
                }
                if ( FuncList__Check(134, *p_funcType, 0) )
                {
                  PTSubTargetId = (BattleData_o *)DataVals__GetValue(dataVals_k__BackingField, 0);
                  if ( !p_fields->data )
                    goto LABEL_502;
                  BattleData__AddQuestRouteId(p_fields->data, (int32_t)PTSubTargetId, 0);
                  goto LABEL_193;
                }
                if ( FuncList__Check(135, *p_funcType, 0) )
                {
                  this = v330;
                  BattleLogicFunction__FunctionLastSkillCopy(v330, mainAction, dataVals_k__BackingField, v27, v255);
                  goto LABEL_113;
                }
                if ( FuncList__Check(136, *p_funcType, 0) )
                {
                  v256 = DataVals__GetValue(dataVals_k__BackingField, 0);
                  this = v330;
                  BattleLogicFunction__FunctionChangeEnemyMasterFace(v330, v256, v257);
                  goto LABEL_113;
                }
                if ( FuncList__Check(137, *p_funcType, 0) )
                {
                  v188 = mainAction->fields.actorId;
                  v189 = v91->fields.uniqueId;
                  this = v330;
                  v190 = ((int (__fastcall *)(BattleServantData_o *, const MethodInfo *))v91->klass->vtable._9_get_hp.methodPtr)(
                           v91,
                           v91->klass->vtable._9_get_hp.method) > 1;
LABEL_233:
                  v192 = this;
                  v193 = v188;
                  v194 = v189;
LABEL_236:
                  v97 = BattleLogicFunction__functionValueDamage(
                          v192,
                          v193,
                          v194,
                          dataVals_k__BackingField,
                          functionIndex,
                          v190,
                          mainAction,
                          v191);
                  goto LABEL_131;
                }
                if ( FuncList__Check(138, *p_funcType, 0) )
                {
                  this = v330;
                  BattleLogicFunction__FunctionAddBattleValue(v330, mainAction->fields.actorId, funcEnt, v258);
                  goto LABEL_113;
                }
                if ( FuncList__Check(139, *p_funcType, 0) )
                {
                  this = v330;
                  BattleLogicFunction__FunctionSetBattleValue(v330, mainAction->fields.actorId, funcEnt, v259);
                  goto LABEL_113;
                }
                if ( FuncList__Check(140, *p_funcType, 0) )
                {
                  np = v91->fields.np;
                  this = v330;
                  v263 = (float)(DataVals__GetValue(dataVals_k__BackingField, 0) * np) / 1000.0;
                  if ( v263 == INFINITY )
                    v264 = 0x80000000;
                  else
                    v264 = (int)v263;
                  v97 = BattleLogicFunction__functionGainNp(
                          v330,
                          v27,
                          v261,
                          targetId_k__BackingField,
                          dataVals_k__BackingField,
                          v264,
                          v262);
                  goto LABEL_131;
                }
                if ( FuncList__Check(141, *p_funcType, 0) )
                {
                  v265 = v91->fields.np;
                  v266 = (float)(DataVals__GetValue(dataVals_k__BackingField, 0) * v265) / 1000.0;
                  v267 = (int)v266;
                  if ( v266 == INFINITY )
                    v267 = 0x80000000;
                  v132 = -v267;
                  goto LABEL_183;
                }
                if ( FuncList__Check(142, *p_funcType, 0) )
                {
                  v186 = BattleLogicFunction__FunctionAddBattlePoint(
                           v330,
                           v27,
                           targetId_k__BackingField,
                           dataVals_k__BackingField,
                           v268);
                  if ( !v186 )
                    goto LABEL_193;
LABEL_230:
                  BattleActionData__addAction(mainAction, v186, 0);
                  goto LABEL_193;
                }
                if ( FuncList__Check(144, *p_funcType, 0) )
                {
                  this = v330;
                  v97 = BattleLogicFunction__FunctionSetNpExecutedState(
                          v330,
                          v27,
                          targetId_k__BackingField,
                          dataVals_k__BackingField,
                          v269);
                  goto LABEL_131;
                }
                PTSubTargetId = (BattleData_o *)FuncList__Check(145, *p_funcType, 0);
                if ( ((unsigned __int8)PTSubTargetId & 1) != 0 )
                {
                  if ( !p_fields->data )
                    goto LABEL_502;
                  perf = (UnityEngine_Object_o *)p_fields->data->fields.perf;
                  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
                    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
                  PTSubTargetId = (BattleData_o *)UnityEngine_Object__op_Inequality(perf, 0, 0);
                  if ( ((unsigned __int8)PTSubTargetId & 1) != 0 )
                  {
                    if ( !p_fields->data )
                      goto LABEL_502;
                    PTSubTargetId = (BattleData_o *)p_fields->data->fields.perf;
                    if ( !PTSubTargetId )
                      goto LABEL_502;
                    BattlePerformance__HideOverGaugeMessage((BattlePerformance_o *)PTSubTargetId, 0);
                  }
                }
                else
                {
                  v271 = FuncList__Check(147, *p_funcType, 0);
                  if ( v271 )
                  {
                    BattleLogicFunction__SetEnemyCountChangeActionData(
                      (BattleLogicFunction_o *)v271,
                      dataVals_k__BackingField,
                      mainAction,
                      v272);
                  }
                  else
                  {
                    v273 = FuncList__Check(148, *p_funcType, 0);
                    if ( v273 )
                    {
                      BattleLogicFunction__SetDisplayBattleMessage((BattleLogicFunction_o *)v273, mainAction, v88, v274);
                    }
                    else
                    {
                      v275 = FuncList__Check(149, *p_funcType, 0);
                      if ( v275 )
                      {
                        BattleLogicFunction__SetBattleSkillDropGeneratorBuff(
                          (BattleLogicFunction_o *)v275,
                          mainAction,
                          v27,
                          targetId_k__BackingField,
                          dataVals_k__BackingField,
                          v276);
                      }
                      else
                      {
                        if ( FuncList__Check(150, *p_funcType, 0) )
                        {
                          v277 = DataVals__GetValue(dataVals_k__BackingField, 0);
                          this = v330;
                          BattleLogicFunction__FunctionChangeMasterFace(v330, v277, v278);
                          goto LABEL_113;
                        }
                        if ( FuncList__Check(151, *p_funcType, 0) )
                        {
                          v279 = DataVals__GetValue(dataVals_k__BackingField, 0);
                          this = v330;
                          BattleLogicFunction__FunctionEnableMasterSkill(v330, v279, v280);
                          goto LABEL_113;
                        }
                        if ( FuncList__Check(152, *p_funcType, 0) )
                        {
                          v281 = DataVals__GetValue(dataVals_k__BackingField, 0);
                          this = v330;
                          BattleLogicFunction__FunctionEnableMasterCommandSpell(v330, v281, v282);
                          goto LABEL_113;
                        }
                        if ( FuncList__Check(153, *p_funcType, 0) )
                        {
                          this = v330;
                          BattleLogicFunction__FunctionBattleModelChange(v330, mainAction, v88, v283);
                          goto LABEL_113;
                        }
                        if ( FuncList__Check(155, *p_funcType, 0) )
                        {
                          this = v330;
                          BattleLogicFunction__FunctionAddBattleMissionValue(v330, funcEnt, v284);
                          goto LABEL_113;
                        }
                        if ( FuncList__Check(156, *p_funcType, 0) )
                        {
                          this = v330;
                          BattleLogicFunction__FunctionSetBattleMissionValue(v330, funcEnt, v285);
                          goto LABEL_113;
                        }
                        if ( FuncList__Check(157, *p_funcType, 0) )
                        {
                          PTSubTargetId = (BattleData_o *)DataVals__GetValue(dataVals_k__BackingField, 0);
                          if ( !p_fields->data )
                            goto LABEL_502;
                          BattleData__ChangeEnemyPosType(p_fields->data, (int32_t)PTSubTargetId, 0);
                        }
                        else
                        {
                          if ( FuncList__Check(158, *p_funcType, 0) )
                          {
                            PTSubTargetId = (BattleData_o *)FunctionEntity__IsTargetEnemyOnly(funcEnt, 0);
                            skillInfo = mainAction->fields.skillInfo;
                            v288 = v326;
                            v289 = (char)PTSubTargetId;
                            if ( skillInfo )
                              v288 = mainAction->fields.skillInfo;
                            v326 = v288;
                            if ( skillInfo )
                            {
                              if ( !v288 )
                                goto LABEL_502;
                              PTSubTargetId = (BattleData_o *)BattleSkillInfoData__GetSelfSkillLvEntity(v288, 0);
                              v290 = PTSubTargetId;
                              if ( !PTSubTargetId )
                                PTSubTargetId = v325;
                              if ( v290 )
                              {
                                if ( !PTSubTargetId )
                                  goto LABEL_502;
                                IsNoTargetSkipSkill = SkillLvEntity__IsNoTargetSkipSkill(
                                                        (SkillLvEntity_o *)PTSubTargetId,
                                                        0);
                                v292 = &v345;
                                LOWORD(v345.fields._list) = 0;
                                System_Nullable_bool____ctor(
                                  (System_Nullable_bool__o)v292,
                                  IsNoTargetSkipSkill,
                                  (const MethodInfo_392535C *)Method_System_Nullable_bool___ctor__);
                                LOBYTE(skillInfo) = BYTE1(v345.fields._list);
                                v325 = v290;
                              }
                              else
                              {
                                LOBYTE(skillInfo) = 0;
                              }
                            }
                            if ( !p_fields->data )
                              goto LABEL_502;
                            v295 = (unsigned __int8)skillInfo != 0;
                            v296 = 304;
                            if ( (v289 & 1) != 0 )
                              v296 = 312;
                            this = v330;
                            v97 = BattleLogicFunction__FunctionSwapFieldPosition(
                                    v330,
                                    dataVals_k__BackingField,
                                    functionIndex,
                                    *(System_Int32_array **)((char *)&p_fields->data->klass + v296),
                                    v289 & 1,
                                    v295,
                                    v286);
LABEL_131:
                            BattleActionData__addAction(mainAction, v97, 0);
LABEL_113:
                            v62 = v339;
                            goto LABEL_114;
                          }
                          v293 = FuncList__Check(159, *p_funcType, 0);
                          if ( v293 )
                            BattleLogicFunction__FunctionSetDisplayDirectBattleMessageInFsm(
                              (BattleLogicFunction_o *)v293,
                              mainAction,
                              v88,
                              v294);
                        }
                      }
                    }
                  }
                }
              }
LABEL_193:
              v62 = v339;
LABEL_194:
              this = v330;
              goto LABEL_114;
            }
            this = v330;
            SubMember = BattleLogicFunction__FunctionMoveToLastSubMember(v330, v91, funcEnt, v242, functionIndex, v243);
            BattleActionData__addAction(mainAction, SubMember, 0);
            BattleActionData__UpdateForceBuffEffectAllTrue(mainAction, 0);
            v62 = v339;
            v328 = 1;
          }
LABEL_114:
          isDamage = FuncList__isDamage(*p_funcType, 0);
          if ( isDamage )
            v99 = 0;
          else
            v99 = -87;
          if ( isDamage )
            v100 = 0;
          else
            v100 = 169;
          if ( v99 != -87 )
          {
            if ( v100 )
              return mainAction;
            if ( !v91->fields.isTDLimitCount )
            {
              PTSubTargetId = (BattleData_o *)v91->fields.buffData;
              if ( !PTSubTargetId )
                goto LABEL_502;
              if ( !LOBYTE(PTSubTargetId->fields.p_cmlist) )
              {
                v91->fields.isTDLimitCount = 1;
                if ( !v331 )
                  goto LABEL_502;
                action = (BattleActionData_o *)(unsigned int)v91->fields.uniqueId;
                items = v331->fields._items;
                v102 = Method_System_Collections_Generic_List_int__Add__;
                ++v331->fields._version;
                if ( !items )
                  goto LABEL_502;
                size = v331->fields._size;
                if ( (unsigned int)size >= LODWORD(items->max_length) )
                {
                  System_Collections_Generic_List_int___AddWithResize(
                    v331,
                    (int32_t)action,
                    *(const MethodInfo_37E3950 **)(*(_QWORD *)(v102[4] + 192LL) + 112LL));
                  PTSubTargetId = (BattleData_o *)v91->fields.buffData;
                  if ( !PTSubTargetId )
                    goto LABEL_502;
                }
                else
                {
                  v331->fields._size = size + 1;
                  items->m_Items[size] = (int)action;
                }
                v113 = BattleBuffData__UseProgressingDoNotAct((BattleBuffData_o *)PTSubTargetId, v91, 0, 0);
                BattleActionData__addSideEffectActionData(mainAction, v113, 1, 0);
                PTSubTargetId = (BattleData_o *)v91->fields.buffData;
                if ( !PTSubTargetId )
                  goto LABEL_502;
              }
              LOBYTE(PTSubTargetId->fields.p_cmlist) = 0;
            }
          }
          BattleLogicFunction_ProcListInArgs__setFuncResult(
            v27,
            targetId_k__BackingField,
            mainAction->fields.funcResult,
            dataVals_k__BackingField->fields.funcIndex,
            0);
          BattleLogicFunction__SetReceiveFunctionId(
            this,
            mainAction->fields.funcResult,
            targetId_k__BackingField,
            funcEnt,
            v114);
          if ( v62 )
            UseInFsmFuncParam__AddTargetId(v62, mainAction->fields.funcResult, targetId_k__BackingField, 0);
LABEL_139:
          v86 = v85->max_length;
          if ( (int)++v87 >= v86 )
            goto LABEL_434;
        }
        if ( BattleServantData__checkPlayer(v91, 0) )
        {
          isUnaffected = DataVals__isUnaffected(dataVals_k__BackingField, 0);
          CorrectedValueFuncGainNp = ((__int64 (__fastcall *)(BattleLogicFunctionProcess_FunctionTargetCheck_o *, const MethodInfo *))v88->klass->vtable._16_GetCommonBaseValue.methodPtr)(
                                       v88,
                                       v88->klass->vtable._16_GetCommonBaseValue.method);
          if ( !isUnaffected )
            CorrectedValueFuncGainNp = BattleServantData__getCorrectedValueFuncGainNp(v91, CorrectedValueFuncGainNp, 0);
          goto LABEL_175;
        }
        goto LABEL_194;
      }
LABEL_434:
      BattleActionData__AddUseInFsmFuncParam(mainAction, v62, 0);
      if ( !isCreateSideEffect )
        break;
      v55 = v333;
      v297 = v337;
      if ( !funcEnt )
        goto LABEL_502;
      v298 = FuncList__Check(26, *p_funcType, 0);
      v299 = (BattleLogicFunction_AfterAttackSideEffectMakeArgument_o *)sub_1C6BC54(BattleLogicFunction_AfterAttackSideEffectMakeArgument_TypeInfo);
      BattleLogicFunction_AfterAttackSideEffectMakeArgument___ctor(v299, 0);
      if ( !v299 )
        goto LABEL_502;
      Argument__Init = BattleLogicFunction_AfterAttackSideEffectMakeArgument__Init(v299, mainAction, 0);
      BattleLogicFunction__setAttackSideEffect(
        this,
        mainAction,
        actionSvtData,
        v298 || isTreasureDvc,
        Argument__Init,
        v301);
      PTSubTargetId = (BattleData_o *)BattleActionData__getDamageTargetIdList(mainAction, 0);
      if ( !PTSubTargetId )
        goto LABEL_502;
      v302 = PTSubTargetId;
      if ( PTSubTargetId->fields.m_CancellationTokenSource )
      {
        if ( actionSvtData == 0 || !isTreasureDvc )
        {
          v303 = 0;
        }
        else
        {
          v303 = (BattleCommandData_o *)sub_1C6BC54(BattleCommandData_TypeInfo);
          BattleCommandData___ctor(v303, 0);
          PTSubTargetId = (BattleData_o *)BattleServantData__getTreasureDvcCardId(actionSvtData, 0);
          if ( !v303 )
            goto LABEL_502;
          v303->fields._type = (int)PTSubTargetId;
          v303->fields.treasureDvc = BattleServantData__getTreasureDvcId(actionSvtData, 1, 0, 0);
        }
        v304 = (UnityEngine_Object_o *)this->fields.logic;
        if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
        PTSubTargetId = (BattleData_o *)UnityEngine_Object__op_Inequality(v304, 0, 0);
        if ( ((unsigned __int8)PTSubTargetId & 1) != 0 )
        {
          m_CancellationTokenSource = v302->fields.m_CancellationTokenSource;
          if ( (int)m_CancellationTokenSource >= 1 )
          {
            v306 = 0;
            do
            {
              if ( v306 >= (unsigned int)m_CancellationTokenSource )
                goto LABEL_503;
              PTSubTargetId = (BattleData_o *)this->fields.logic;
              if ( !PTSubTargetId )
                goto LABEL_502;
              PTSubTargetId = (BattleData_o *)BattleLogic__SetDamageSideEffect(
                                                (BattleLogic_o *)PTSubTargetId,
                                                mainAction,
                                                mainAction->fields.actorId,
                                                *((_DWORD *)&v302->fields.rootfsm + v306),
                                                v303,
                                                0);
              LODWORD(m_CancellationTokenSource) = v302->fields.m_CancellationTokenSource;
              ++v306;
            }
            while ( (__int64)v306 < (int)m_CancellationTokenSource );
            v55 = v333;
          }
        }
      }
LABEL_443:
      v56 = v55->max_length;
      v57 = v297 + 1;
      if ( v57 >= v56 )
        goto LABEL_458;
    }
    v55 = v333;
LABEL_442:
    v297 = v337;
    goto LABEL_443;
  }
  v328 = 0;
  v329 = 0;
LABEL_458:
  PTSubTargetId = (BattleData_o *)BattleLogicFunction_ProcListInArgs__get_CheckDuplicateFunc(v27, 0);
  if ( !PTSubTargetId )
    goto LABEL_502;
  ((void (__fastcall *)(BattleData_o *, const MethodInfo *))PTSubTargetId->klass->vtable._5_isAiTarget.methodPtr)(
    PTSubTargetId,
    PTSubTargetId->klass->vtable._5_isAiTarget.method);
  if ( (v329 & 1) != 0 )
  {
    PTSubTargetId = p_fields->data;
    if ( !p_fields->data )
      goto LABEL_502;
    PTSubTargetId = (BattleData_o *)BattleData__getServantData(PTSubTargetId, mainAction->fields.actorId, 0);
    if ( !PTSubTargetId )
      goto LABEL_502;
    BattleServantData__resetAccumulationDamage((BattleServantData_o *)PTSubTargetId, 0);
  }
  if ( BattleActionData__checkSummonServantList(mainAction, 0) )
  {
    v307 = (UnityEngine_Object_o *)this->fields.logic;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    if ( UnityEngine_Object__op_Inequality(v307, 0, 0) )
    {
      PTSubTargetId = (BattleData_o *)BattleActionData__getSummonServant(mainAction, -1, 0);
      if ( !PTSubTargetId )
        goto LABEL_502;
      v308 = (int)PTSubTargetId->fields.m_CancellationTokenSource;
      v309 = PTSubTargetId;
      if ( v308 >= 1 )
      {
        v310 = 0;
        while ( v310 < v308 )
        {
          v311 = *((_QWORD *)&v309->fields.rootfsm + (int)v310);
          if ( !v311 )
            goto LABEL_502;
          PTSubTargetId = (BattleData_o *)this->fields.logic;
          if ( !PTSubTargetId )
            goto LABEL_502;
          BattleLogic__actEnemyPassiveSkill((BattleLogic_o *)PTSubTargetId, *(_DWORD *)(v311 + 32), 0);
          v308 = (int)v309->fields.m_CancellationTokenSource;
          if ( (int)++v310 >= v308 )
            goto LABEL_474;
        }
        goto LABEL_503;
      }
    }
  }
LABEL_474:
  PTSubTargetId = (BattleData_o *)BattleLogicFunction_ProcListInArgs__get_FuncSideEffectArg(v27, 0);
  if ( PTSubTargetId )
    PTSubTargetId = (BattleData_o *)((__int64 (__fastcall *)(BattleData_o *, BattleLogicFunction_o *, BattleActionData_o *, BattleServantData_o *, const char *))PTSubTargetId->klass[1]._1.name)(
                                      PTSubTargetId,
                                      this,
                                      mainAction,
                                      actionSvtData,
                                      PTSubTargetId->klass[1]._1.namespaze);
  externalArg = v27->fields.externalArg;
  if ( !externalArg )
    goto LABEL_502;
  if ( externalArg->fields._IsSetSubstituteBuffAction_k__BackingField )
    BattleLogicFunction__SetSubstituteAction(this, mainAction, isTreasureDvc, v312);
  if ( isBuffUpdate )
  {
    v314 = (UnityEngine_Object_o *)this->fields.logic;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    if ( UnityEngine_Object__op_Inequality(v314, 0, 0) )
    {
      PTSubTargetId = (BattleData_o *)this->fields.logic;
      if ( !PTSubTargetId )
        goto LABEL_502;
      BattleLogic__checkUsedBuff((BattleLogic_o *)PTSubTargetId, 0);
      if ( !p_fields->data )
        goto LABEL_502;
      PTSubTargetId = (BattleData_o *)p_fields->data->fields._FieldEnvData_k__BackingField;
      if ( !PTSubTargetId )
        goto LABEL_502;
      BattleFieldEnvironmentData__CheckUsedBuff((BattleFieldEnvironmentData_o *)PTSubTargetId, 0);
    }
  }
  if ( (v328 & 1) != 0 || v27->fields.updateField )
  {
    v315 = (UnityEngine_Object_o *)this->fields.logic;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    if ( UnityEngine_Object__op_Inequality(v315, 0, 0) )
    {
      PTSubTargetId = (BattleData_o *)this->fields.logic;
      if ( !PTSubTargetId )
        goto LABEL_502;
      BattleLogic__updateFieldBuff((BattleLogic_o *)PTSubTargetId, 0);
    }
  }
  PTSubTargetId = (BattleData_o *)v331;
  if ( !v331 )
LABEL_502:
    sub_1C6BC60(PTSubTargetId, action);
  System_Collections_Generic_List_int___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v345,
    v331,
    (const MethodInfo_37E4424 *)Method_System_Collections_Generic_List_int__GetEnumerator__);
  v346 = v345;
  while ( System_Collections_Generic_List_Enumerator_int___MoveNext(
            &v346,
            (const MethodInfo_358270C *)Method_System_Collections_Generic_List_Enumerator_int__MoveNext__) )
  {
    if ( !p_fields->data )
      sub_1C6BC60(0, v316);
    ServantData = BattleData__getServantData(p_fields->data, v346.fields._current, 0);
    if ( ServantData )
      ServantData->fields.isTDLimitCount = 0;
  }
  System_Collections_Generic_List_Enumerator_int___Dispose(
    &v346,
    (const MethodInfo_3582708 *)Method_System_Collections_Generic_List_Enumerator_int__Dispose__);
  return mainAction;
}


void BattleLogicFunction__setAttackSideEffect(
        BattleLogicFunction_o *this,
        BattleActionData_o *mainAction,
        BattleServantData_o *actionSvtData,
        bool isTreasureDvc,
        BattleLogicFunction_SideEffectMakeArgument_o *attackArg,
        const MethodInfo *method)
{
  BattleActionData_o *v9; // x20
  BattleLogicFunction_o *v10; // x22
  BattleCommandData_o *v11; // x23
  BattleLogicFunction_AttackSideEffectFunctionArgument_o *v12; // x24
  System_Collections_Generic_IEnumerable_TSource__o *SideEffectList_k__BackingField; // x25
  BattleLogicFunction___c_c *v14; // x0
  System_Func_object__int__o *_9__57_0; // x26
  Il2CppObject *v16; // x27
  struct BattleLogicFunction___c_StaticFields *static_fields; // x0
  int32_t v18; // w2
  const MethodInfo *v19; // x3
  System_Collections_Generic_IEnumerable_TSource__o *v20; // x0
  __int64 v21; // x25
  BattleLogicFunction_SideEffectMakeArgument_o *v22; // x0
  const MethodInfo *v23; // x6
  BattleLogicFunction_SideEffectMakeArgument_o *Argument__SortMainTargetToFirst; // x5
  const MethodInfo *v25; // x6

  v9 = mainAction;
  v10 = this;
  if ( (byte_4CB93B3 & 1) == 0 )
  {
    sub_1C6BA08(&BattleLogicFunction_AttackSideEffectFunctionArgument_TypeInfo);
    sub_1C6BA08(&BattleCommandData_TypeInfo);
    sub_1C6BA08(&Method_System_Linq_Enumerable_Select_BattleActionData_SideEffectData__int___);
    sub_1C6BA08(&Method_System_Linq_Enumerable_ToArray_int___);
    sub_1C6BA08(&System_Func_BattleActionData_SideEffectData__int__TypeInfo);
    sub_1C6BA08(&int___TypeInfo);
    sub_1C6BA08(&Method_BattleLogicFunction___c__setAttackSideEffect_b__57_0__);
    this = (BattleLogicFunction_o *)sub_1C6BA08(&BattleLogicFunction___c_TypeInfo);
    byte_4CB93B3 = 1;
  }
  if ( actionSvtData )
  {
    if ( !attackArg )
      goto LABEL_22;
    if ( BasicHelper__IsNullOrEmpty(
           (System_Collections_ICollection_o *)attackArg->fields._SideEffectList_k__BackingField,
           0) )
    {
      return;
    }
    if ( isTreasureDvc )
    {
      v11 = (BattleCommandData_o *)sub_1C6BC54(BattleCommandData_TypeInfo);
      BattleCommandData___ctor(v11, 0);
      this = (BattleLogicFunction_o *)BattleServantData__getTreasureDvcCardId(actionSvtData, 0);
      if ( !v11 )
        goto LABEL_22;
      v11->fields._type = (int)this;
      v11->fields.treasureDvc = BattleServantData__getTreasureDvcId(actionSvtData, 1, 0, 0);
    }
    else
    {
      v11 = 0;
    }
    v12 = (BattleLogicFunction_AttackSideEffectFunctionArgument_o *)sub_1C6BC54(BattleLogicFunction_AttackSideEffectFunctionArgument_TypeInfo);
    BattleLogicFunction_AttackSideEffectFunctionArgument___ctor(v12, 0);
    SideEffectList_k__BackingField = (System_Collections_Generic_IEnumerable_TSource__o *)attackArg->fields._SideEffectList_k__BackingField;
    v14 = BattleLogicFunction___c_TypeInfo;
    if ( !BattleLogicFunction___c_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(BattleLogicFunction___c_TypeInfo);
      v14 = BattleLogicFunction___c_TypeInfo;
    }
    _9__57_0 = (System_Func_object__int__o *)v14->static_fields->__9__57_0;
    if ( !_9__57_0 )
    {
      if ( !v14->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(v14);
        v14 = BattleLogicFunction___c_TypeInfo;
      }
      v16 = (Il2CppObject *)v14->static_fields->__9;
      _9__57_0 = (System_Func_object__int__o *)sub_1C6BC54(System_Func_BattleActionData_SideEffectData__int__TypeInfo);
      System_Func_object__int____ctor(_9__57_0, v16, Method_BattleLogicFunction___c__setAttackSideEffect_b__57_0__, 0);
      static_fields = BattleLogicFunction___c_TypeInfo->static_fields;
      static_fields->__9__57_0 = (struct System_Func_BattleActionData_SideEffectData__int__o *)_9__57_0;
      sub_1C6B9AC((CGThumbnailListItem_o *)&static_fields->__9__57_0, (int32_t)_9__57_0, v18, v19);
    }
    v20 = (System_Collections_Generic_IEnumerable_TSource__o *)System_Linq_Enumerable__Select_object__int_(
                                                                 SideEffectList_k__BackingField,
                                                                 (System_Func_TSource__TResult__o *)_9__57_0,
                                                                 (const MethodInfo_3171234 *)Method_System_Linq_Enumerable_Select_BattleActionData_SideEffectData__int___);
    this = (BattleLogicFunction_o *)System_Linq_Enumerable__ToArray_int_(
                                      v20,
                                      (const MethodInfo_317B0B0 *)Method_System_Linq_Enumerable_ToArray_int___);
    if ( v9 )
    {
      BattleActionData__SetFirstAtkMainTargetId(v9, (System_Int32_array *)this, 0);
      v21 = ((__int64 (__fastcall *)(BattleLogicFunction_SideEffectMakeArgument_o *, void *))attackArg->klass[1]._1.image)(
              attackArg,
              attackArg->klass[1]._1.gc_desc);
      this = (BattleLogicFunction_o *)sub_1C6BAB0(int___TypeInfo, 1);
      if ( this )
      {
        mainAction = (BattleActionData_o *)this;
        if ( !LODWORD(this->fields.logic) )
          sub_1C6BC68(this);
        LODWORD(this->fields.logictarget) = v9->fields._FirstAtkMainTargetId_k__BackingField;
        if ( v21 )
        {
          v22 = (BattleLogicFunction_SideEffectMakeArgument_o *)(*(__int64 (__fastcall **)(__int64, BattleLogicFunction_o *, _QWORD))(*(_QWORD *)v21 + 408LL))(
                                                                  v21,
                                                                  this,
                                                                  *(_QWORD *)(*(_QWORD *)v21 + 416LL));
          BattleLogicFunction__SetTargetAttackSideEffect(v10, v12, v9, actionSvtData, v11, v22, v23);
          Argument__SortMainTargetToFirst = BattleLogicFunction_SideEffectMakeArgument__SortMainTargetToFirst(
                                              attackArg,
                                              v9->fields._FirstAtkMainTargetId_k__BackingField,
                                              0);
          BattleLogicFunction__SetTargetAttackSideEffect(
            v10,
            v12,
            v9,
            actionSvtData,
            v11,
            Argument__SortMainTargetToFirst,
            v25);
          return;
        }
      }
    }
LABEL_22:
    sub_1C6BC60(this, mainAction);
  }
}


BattleLogicFunction_SideEffectMakeArgument_o *BattleLogicFunction_AfterAttackSideEffectMakeArgument__Init(
        BattleLogicFunction_AfterAttackSideEffectMakeArgument_o *this,
        BattleActionData_o *mainAction,
        const MethodInfo *method)
{
  struct BattleActionData_SideEffectData_array *DamageAttackSideEffectList; // x0
  int32_t v5; // w2
  const MethodInfo *v6; // x3

  if ( !mainAction )
    sub_1C6BC60(this, 0);
  DamageAttackSideEffectList = BattleActionData__getDamageAttackSideEffectList(mainAction, 0);
  this->fields._SideEffectList_k__BackingField = DamageAttackSideEffectList;
  sub_1C6B9AC((CGThumbnailListItem_o *)&this->fields, (int32_t)DamageAttackSideEffectList, v5, v6);
  return (BattleLogicFunction_SideEffectMakeArgument_o *)this;
}


BattleLogicFunction_SideEffectMakeArgument_o *BattleLogicFunction_AfterAttackSideEffectMakeArgument__MakeOnlyMainArgument(
        BattleLogicFunction_AfterAttackSideEffectMakeArgument_o *this,
        const MethodInfo *method)
{
  BattleLogicFunction_SideEffectMakeArgument_o *v2; // x19
  const MethodInfo *v3; // x1

  if ( (byte_4CB9429 & 1) == 0 )
  {
    sub_1C6BA08(&BattleLogicFunction_AfterMainAttackSideEffectMakeArgument_TypeInfo);
    byte_4CB9429 = 1;
  }
  v2 = (BattleLogicFunction_SideEffectMakeArgument_o *)sub_1C6BC54(BattleLogicFunction_AfterMainAttackSideEffectMakeArgument_TypeInfo);
  BattleLogicFunction_SideEffectMakeArgument___ctor(v2, v3);
  return v2;
}


int32_t BattleLogicFunction_AfterAttackSideEffectMakeArgument__get_BuffAct(
        BattleLogicFunction_AfterAttackSideEffectMakeArgument_o *this,
        const MethodInfo *method)
{
  return 80;
}


int32_t BattleLogicFunction_AfterAttackSideEffectMakeArgument__get_SideEffectType(
        BattleLogicFunction_AfterAttackSideEffectMakeArgument_o *this,
        const MethodInfo *method)
{
  return 1;
}


int32_t BattleLogicFunction_AfterMainAttackSideEffectMakeArgument__get_BuffAct(
        BattleLogicFunction_AfterMainAttackSideEffectMakeArgument_o *this,
        const MethodInfo *method)
{
  return 121;
}


void BattleLogicFunction_AttackSideEffectCheckDuplicateFunction___ctor(
        BattleLogicFunction_AttackSideEffectCheckDuplicateFunction_o *this,
        BattleLogicFunction_CommonSideEffectFunctionArgument_o *argument,
        const MethodInfo *method)
{
  int32_t v5; // w2
  const MethodInfo *v6; // x3

  BattleLogicFunction_CommonCheckDuplicateFunction___ctor(
    (BattleLogicFunction_CommonCheckDuplicateFunction_o *)this,
    (const MethodInfo *)argument);
  this->fields.argument = argument;
  sub_1C6B9AC((CGThumbnailListItem_o *)&this->fields.argument, (int32_t)argument, v5, v6);
}


void BattleLogicFunction_AttackSideEffectFunctionArgument___ctor(
        BattleLogicFunction_AttackSideEffectFunctionArgument_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x20
  const MethodInfo *v4; // x1
  int32_t v5; // w2
  const MethodInfo *v6; // x3
  int32_t v7; // w2
  const MethodInfo *v8; // x3

  if ( (byte_4CB940A & 1) == 0 )
  {
    sub_1C6BA08(&BattleLogicFunction_AttackSideEffectCheckDuplicateFunction_TypeInfo);
    byte_4CB940A = 1;
  }
  BattleLogicFunction_CommonSideEffectFunctionArgument___ctor(
    (BattleLogicFunction_CommonSideEffectFunctionArgument_o *)this,
    method);
  v3 = sub_1C6BC54(BattleLogicFunction_AttackSideEffectCheckDuplicateFunction_TypeInfo);
  BattleLogicFunction_CommonCheckDuplicateFunction___ctor((BattleLogicFunction_CommonCheckDuplicateFunction_o *)v3, v4);
  *(_QWORD *)(v3 + 24) = this;
  sub_1C6B9AC((CGThumbnailListItem_o *)(v3 + 24), (int32_t)this, v5, v6);
  this->fields.checkDuplicate = (struct BattleLogicFunction_CheckDuplicateFunction_o *)v3;
  sub_1C6B9AC((CGThumbnailListItem_o *)&this->fields.checkDuplicate, v3, v7, v8);
}


void BattleLogicFunction_CheckDuplicateFunction___ctor(
        BattleLogicFunction_CheckDuplicateFunction_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


void BattleLogicFunction_CheckDuplicateFunction__Init(
        BattleLogicFunction_CheckDuplicateFunction_o *this,
        const MethodInfo *method)
{
  ;
}


void BattleLogicFunction_CheckDuplicateFunction__enableExecutedFunctions(
        BattleLogicFunction_CheckDuplicateFunction_o *this,
        const MethodInfo *method)
{
  ;
}


bool BattleLogicFunction_CheckDuplicateFunction__isNotExec(
        BattleLogicFunction_CheckDuplicateFunction_o *this,
        DataVals_o *vals,
        System_Int32_array *targetIds,
        const MethodInfo *method)
{
  return 0;
}


void BattleLogicFunction_CommonCheckDuplicateFunction___ctor(
        BattleLogicFunction_CommonCheckDuplicateFunction_o *this,
        const MethodInfo *method)
{
  System_Collections_Generic_List_object__o *v3; // x20
  int32_t v4; // w2
  const MethodInfo *v5; // x3

  if ( (byte_4CB9417 & 1) == 0 )
  {
    sub_1C6BA08(&Method_System_Collections_Generic_List_BattleLogicFunction_ExecutedFunctionData___ctor__);
    sub_1C6BA08(&System_Collections_Generic_List_BattleLogicFunction_ExecutedFunctionData__TypeInfo);
    byte_4CB9417 = 1;
  }
  v3 = (System_Collections_Generic_List_object__o *)sub_1C6BC54(System_Collections_Generic_List_BattleLogicFunction_ExecutedFunctionData__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v3,
    (const MethodInfo_3800140 *)Method_System_Collections_Generic_List_BattleLogicFunction_ExecutedFunctionData___ctor__);
  this->fields.executedFuncList = (struct System_Collections_Generic_List_BattleLogicFunction_ExecutedFunctionData__o *)v3;
  sub_1C6B9AC((CGThumbnailListItem_o *)&this->fields, (int32_t)v3, v4, v5);
  System_Object___ctor((Il2CppObject *)this, 0);
}


void BattleLogicFunction_CommonCheckDuplicateFunction__Init(
        BattleLogicFunction_CommonCheckDuplicateFunction_o *this,
        const MethodInfo *method)
{
  ;
}


void BattleLogicFunction_CommonCheckDuplicateFunction__enableExecutedFunctions(
        BattleLogicFunction_CommonCheckDuplicateFunction_o *this,
        const MethodInfo *method)
{
  System_Collections_Generic_List_object__o *executedFuncList; // x0
  int32_t v4; // w20

  if ( (byte_4CB9413 & 1) == 0 )
  {
    sub_1C6BA08(&Method_System_Collections_Generic_List_BattleLogicFunction_ExecutedFunctionData__get_Count__);
    sub_1C6BA08(&Method_System_Collections_Generic_List_BattleLogicFunction_ExecutedFunctionData__get_Item__);
    byte_4CB9413 = 1;
  }
  executedFuncList = (System_Collections_Generic_List_object__o *)this->fields.executedFuncList;
  if ( !executedFuncList )
LABEL_8:
    sub_1C6BC60(executedFuncList, method);
  v4 = 0;
  while ( v4 < executedFuncList->fields._size )
  {
    executedFuncList = (System_Collections_Generic_List_object__o *)System_Collections_Generic_List_object___get_Item(
                                                                      executedFuncList,
                                                                      v4,
                                                                      (const MethodInfo_38006A4 *)Method_System_Collections_Generic_List_BattleLogicFunction_ExecutedFunctionData__get_Item__);
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


bool BattleLogicFunction_CommonCheckDuplicateFunction__isCheckCond(
        BattleLogicFunction_CommonCheckDuplicateFunction_o *this,
        DataVals_o *vals,
        const MethodInfo *method)
{
  if ( !vals )
    sub_1C6BC60(this, 0);
  return DataVals__isCheckDuplicate(vals, 0);
}


bool BattleLogicFunction_CommonCheckDuplicateFunction__isExecutedFunction(
        BattleLogicFunction_CommonCheckDuplicateFunction_o *this,
        DataVals_o *vals,
        const MethodInfo *method)
{
  __int64 v5; // x21
  __int64 v6; // x0
  __int64 v7; // x1
  int32_t v8; // w2
  const MethodInfo *v9; // x3
  System_Collections_Generic_List_object__o *executedFuncList; // x19
  System_Predicate_object__o *v11; // x20

  if ( (byte_4CB9415 & 1) == 0 )
  {
    sub_1C6BA08(&Method_System_Collections_Generic_List_BattleLogicFunction_ExecutedFunctionData__FindIndex__);
    sub_1C6BA08(&System_Predicate_BattleLogicFunction_ExecutedFunctionData__TypeInfo);
    sub_1C6BA08(&Method_BattleLogicFunction_CommonCheckDuplicateFunction___c__DisplayClass7_0__isExecutedFunction_b__0__);
    sub_1C6BA08(&BattleLogicFunction_CommonCheckDuplicateFunction___c__DisplayClass7_0_TypeInfo);
    byte_4CB9415 = 1;
  }
  v5 = sub_1C6BC54(BattleLogicFunction_CommonCheckDuplicateFunction___c__DisplayClass7_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v5, 0);
  if ( !v5
    || (*(_QWORD *)(v5 + 16) = vals,
        sub_1C6B9AC((CGThumbnailListItem_o *)(v5 + 16), (int32_t)vals, v8, v9),
        executedFuncList = (System_Collections_Generic_List_object__o *)this->fields.executedFuncList,
        v11 = (System_Predicate_object__o *)sub_1C6BC54(System_Predicate_BattleLogicFunction_ExecutedFunctionData__TypeInfo),
        System_Predicate_object____ctor(
          v11,
          (Il2CppObject *)v5,
          Method_BattleLogicFunction_CommonCheckDuplicateFunction___c__DisplayClass7_0__isExecutedFunction_b__0__,
          0),
        !executedFuncList) )
  {
    sub_1C6BC60(v6, v7);
  }
  return System_Collections_Generic_List_object___FindIndex(
           executedFuncList,
           (System_Predicate_T__o *)v11,
           (const MethodInfo_38011CC *)Method_System_Collections_Generic_List_BattleLogicFunction_ExecutedFunctionData__FindIndex__) >= 0;
}


bool BattleLogicFunction_CommonCheckDuplicateFunction__isExecutedTarget(
        BattleLogicFunction_CommonCheckDuplicateFunction_o *this,
        DataVals_o *vals,
        int32_t targetId,
        const MethodInfo *method)
{
  __int64 v7; // x22
  __int64 v8; // x0
  __int64 v9; // x1
  int32_t v10; // w2
  const MethodInfo *v11; // x3
  System_Collections_Generic_List_object__o *executedFuncList; // x19
  System_Predicate_object__o *v13; // x20

  if ( (byte_4CB9416 & 1) == 0 )
  {
    sub_1C6BA08(&Method_System_Collections_Generic_List_BattleLogicFunction_ExecutedFunctionData__FindIndex__);
    sub_1C6BA08(&System_Predicate_BattleLogicFunction_ExecutedFunctionData__TypeInfo);
    sub_1C6BA08(&Method_BattleLogicFunction_CommonCheckDuplicateFunction___c__DisplayClass8_0__isExecutedTarget_b__0__);
    sub_1C6BA08(&BattleLogicFunction_CommonCheckDuplicateFunction___c__DisplayClass8_0_TypeInfo);
    byte_4CB9416 = 1;
  }
  v7 = sub_1C6BC54(BattleLogicFunction_CommonCheckDuplicateFunction___c__DisplayClass8_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v7, 0);
  if ( !v7
    || (*(_QWORD *)(v7 + 16) = vals,
        sub_1C6B9AC((CGThumbnailListItem_o *)(v7 + 16), (int32_t)vals, v10, v11),
        *(_DWORD *)(v7 + 24) = targetId,
        executedFuncList = (System_Collections_Generic_List_object__o *)this->fields.executedFuncList,
        v13 = (System_Predicate_object__o *)sub_1C6BC54(System_Predicate_BattleLogicFunction_ExecutedFunctionData__TypeInfo),
        System_Predicate_object____ctor(
          v13,
          (Il2CppObject *)v7,
          Method_BattleLogicFunction_CommonCheckDuplicateFunction___c__DisplayClass8_0__isExecutedTarget_b__0__,
          0),
        !executedFuncList) )
  {
    sub_1C6BC60(v8, v9);
  }
  return System_Collections_Generic_List_object___FindIndex(
           executedFuncList,
           (System_Predicate_T__o *)v13,
           (const MethodInfo_38011CC *)Method_System_Collections_Generic_List_BattleLogicFunction_ExecutedFunctionData__FindIndex__) >= 0;
}


bool BattleLogicFunction_CommonCheckDuplicateFunction__isNotExec(
        BattleLogicFunction_CommonCheckDuplicateFunction_o *this,
        DataVals_o *vals,
        System_Int32_array *targetIds,
        const MethodInfo *method)
{
  char v7; // w22

  if ( targetIds && targetIds->max_length )
  {
    if ( (((__int64 (__fastcall *)(BattleLogicFunction_CommonCheckDuplicateFunction_o *, DataVals_o *, const MethodInfo *, const MethodInfo *))this->klass->vtable._7_isCheckCond.methodPtr)(
            this,
            vals,
            this->klass->vtable._7_isCheckCond.method,
            method)
        & 1) != 0 )
      v7 = ((__int64 (__fastcall *)(BattleLogicFunction_CommonCheckDuplicateFunction_o *, DataVals_o *, System_Int32_array *, const MethodInfo *))this->klass->vtable._9_isNotExecLocal.methodPtr)(
             this,
             vals,
             targetIds,
             this->klass->vtable._9_isNotExecLocal.method);
    else
      v7 = 0;
    ((void (__fastcall *)(BattleLogicFunction_CommonCheckDuplicateFunction_o *, DataVals_o *, System_Int32_array *, const MethodInfo *))this->klass->vtable._8_saveExecutedFunction.methodPtr)(
      this,
      vals,
      targetIds,
      this->klass->vtable._8_saveExecutedFunction.method);
  }
  else
  {
    v7 = 0;
  }
  return v7 & 1;
}


bool BattleLogicFunction_CommonCheckDuplicateFunction__isNotExecLocal(
        BattleLogicFunction_CommonCheckDuplicateFunction_o *this,
        DataVals_o *vals,
        System_Int32_array *targetIds,
        const MethodInfo *method)
{
  unsigned int targetType; // w8

  if ( !vals )
    sub_1C6BC60(this, 0);
  targetType = vals->fields.targetType;
  if ( targetType < 0x1B || targetType == 32 || targetType == 30 )
    return ((__int64 (__fastcall *)(BattleLogicFunction_CommonCheckDuplicateFunction_o *))this->klass->vtable._10_isExecutedFunction.methodPtr)(this);
  else
    return 0;
}


void BattleLogicFunction_CommonCheckDuplicateFunction__saveExecutedFunction(
        BattleLogicFunction_CommonCheckDuplicateFunction_o *this,
        DataVals_o *vals,
        System_Int32_array *targetIds,
        const MethodInfo *method)
{
  __int64 v7; // x21
  __int64 Index; // x0
  __int64 v9; // x1
  int32_t v10; // w2
  const MethodInfo *v11; // x3
  unsigned __int64 v12; // x26
  __int64 v13; // x22
  int32_t v14; // w2
  const MethodInfo *v15; // x3
  __int64 v16; // x23
  __int64 v17; // x0
  System_Collections_Generic_List_object__o *executedFuncList; // x24
  System_Predicate_object__o *v19; // x25
  DataVals_o *v20; // x24
  System_Collections_Generic_List_object__o *v21; // x23
  int32_t v22; // w25
  BattleLogicFunction_ExecutedFunctionData_o *v23; // x22
  const MethodInfo *v24; // x3
  int32_t v25; // w2
  const MethodInfo *v26; // x3
  struct System_Object_array *items; // x8
  _QWORD *v28; // x9
  __int64 size; // x10
  Il2CppClass **v30; // x0

  if ( (byte_4CB9414 & 1) == 0 )
  {
    sub_1C6BA08(&BattleLogicFunction_ExecutedFunctionData_TypeInfo);
    sub_1C6BA08(&Method_System_Collections_Generic_List_BattleLogicFunction_ExecutedFunctionData__Add__);
    sub_1C6BA08(&Method_System_Collections_Generic_List_BattleLogicFunction_ExecutedFunctionData__FindIndex__);
    sub_1C6BA08(&System_Predicate_BattleLogicFunction_ExecutedFunctionData__TypeInfo);
    sub_1C6BA08(&BattleLogicFunction_CommonCheckDuplicateFunction___c__DisplayClass5_0_TypeInfo);
    sub_1C6BA08(&Method_BattleLogicFunction_CommonCheckDuplicateFunction___c__DisplayClass5_1__saveExecutedFunction_b__0__);
    sub_1C6BA08(&BattleLogicFunction_CommonCheckDuplicateFunction___c__DisplayClass5_1_TypeInfo);
    byte_4CB9414 = 1;
  }
  v7 = sub_1C6BC54(BattleLogicFunction_CommonCheckDuplicateFunction___c__DisplayClass5_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v7, 0);
  if ( !v7 )
    goto LABEL_19;
  *(_QWORD *)(v7 + 16) = vals;
  sub_1C6B9AC((CGThumbnailListItem_o *)(v7 + 16), (int32_t)vals, v10, v11);
  if ( !targetIds )
    goto LABEL_19;
  if ( SLODWORD(targetIds->max_length) >= 1 )
  {
    v12 = 0;
    while ( 1 )
    {
      v13 = sub_1C6BC54(BattleLogicFunction_CommonCheckDuplicateFunction___c__DisplayClass5_1_TypeInfo);
      System_Object___ctor((Il2CppObject *)v13, 0);
      if ( !v13 )
        break;
      *(_QWORD *)(v13 + 24) = v7;
      v16 = v13 + 24;
      sub_1C6B9AC((CGThumbnailListItem_o *)(v13 + 24), v7, v14, v15);
      if ( v12 >= LODWORD(targetIds->max_length) )
        sub_1C6BC68(v17);
      *(_DWORD *)(v13 + 16) = targetIds->m_Items[v12];
      executedFuncList = (System_Collections_Generic_List_object__o *)this->fields.executedFuncList;
      v19 = (System_Predicate_object__o *)sub_1C6BC54(System_Predicate_BattleLogicFunction_ExecutedFunctionData__TypeInfo);
      System_Predicate_object____ctor(
        v19,
        (Il2CppObject *)v13,
        Method_BattleLogicFunction_CommonCheckDuplicateFunction___c__DisplayClass5_1__saveExecutedFunction_b__0__,
        0);
      if ( !executedFuncList )
        break;
      Index = System_Collections_Generic_List_object___FindIndex(
                executedFuncList,
                (System_Predicate_T__o *)v19,
                (const MethodInfo_38011CC *)Method_System_Collections_Generic_List_BattleLogicFunction_ExecutedFunctionData__FindIndex__);
      if ( (Index & 0x80000000) != 0 )
      {
        if ( !*(_QWORD *)v16 )
          break;
        v20 = *(DataVals_o **)(*(_QWORD *)v16 + 16LL);
        v21 = (System_Collections_Generic_List_object__o *)this->fields.executedFuncList;
        v22 = *(_DWORD *)(v13 + 16);
        v23 = (BattleLogicFunction_ExecutedFunctionData_o *)sub_1C6BC54(BattleLogicFunction_ExecutedFunctionData_TypeInfo);
        BattleLogicFunction_ExecutedFunctionData___ctor(v23, v20, v22, v24);
        if ( !v21 )
          break;
        items = v21->fields._items;
        v28 = Method_System_Collections_Generic_List_BattleLogicFunction_ExecutedFunctionData__Add__;
        ++v21->fields._version;
        if ( !items )
          break;
        size = v21->fields._size;
        if ( (unsigned int)size >= LODWORD(items->max_length) )
        {
          System_Collections_Generic_List_object___AddWithResize(
            v21,
            (Il2CppObject *)v23,
            *(const MethodInfo_3800974 **)(*(_QWORD *)(v28[4] + 192LL) + 112LL));
        }
        else
        {
          v30 = &items->obj.klass + size;
          v21->fields._size = size + 1;
          v30[4] = (Il2CppClass *)v23;
          sub_1C6B9AC((CGThumbnailListItem_o *)(v30 + 4), (int32_t)v23, v25, v26);
        }
      }
      if ( (__int64)++v12 >= SLODWORD(targetIds->max_length) )
        return;
    }
LABEL_19:
    sub_1C6BC60(Index, v9);
  }
}


void BattleLogicFunction_CommonCheckDuplicateFunction___c__DisplayClass5_0___ctor(
        BattleLogicFunction_CommonCheckDuplicateFunction___c__DisplayClass5_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


void BattleLogicFunction_CommonCheckDuplicateFunction___c__DisplayClass5_1___ctor(
        BattleLogicFunction_CommonCheckDuplicateFunction___c__DisplayClass5_1_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


bool BattleLogicFunction_CommonCheckDuplicateFunction___c__DisplayClass5_1___saveExecutedFunction_b__0(
        BattleLogicFunction_CommonCheckDuplicateFunction___c__DisplayClass5_1_o *this,
        BattleLogicFunction_ExecutedFunctionData_o *n,
        const MethodInfo *method)
{
  struct BattleLogicFunction_CommonCheckDuplicateFunction___c__DisplayClass5_0_o *CS___8__locals1; // x8
  struct DataVals_o *vals; // x8
  int32_t targetId; // w8
  bool result; // w0

  CS___8__locals1 = this->fields.CS___8__locals1;
  if ( !CS___8__locals1 || !n || (vals = CS___8__locals1->fields.vals) == 0 )
    sub_1C6BC60(this, n);
  result = 0;
  if ( n->fields.index == vals->fields.funcIndex )
  {
    targetId = this->fields.targetId;
    if ( targetId == -1 || n->fields.targetId == targetId )
      return 1;
  }
  return result;
}


void BattleLogicFunction_CommonCheckDuplicateFunction___c__DisplayClass7_0___ctor(
        BattleLogicFunction_CommonCheckDuplicateFunction___c__DisplayClass7_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


bool BattleLogicFunction_CommonCheckDuplicateFunction___c__DisplayClass7_0___isExecutedFunction_b__0(
        BattleLogicFunction_CommonCheckDuplicateFunction___c__DisplayClass7_0_o *this,
        BattleLogicFunction_ExecutedFunctionData_o *n,
        const MethodInfo *method)
{
  struct DataVals_o *vals; // x8

  if ( !n || (vals = this->fields.vals) == 0 )
    sub_1C6BC60(this, n);
  return n->fields.index == vals->fields.funcIndex && n->fields.isEnable;
}


void BattleLogicFunction_CommonCheckDuplicateFunction___c__DisplayClass8_0___ctor(
        BattleLogicFunction_CommonCheckDuplicateFunction___c__DisplayClass8_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


bool BattleLogicFunction_CommonCheckDuplicateFunction___c__DisplayClass8_0___isExecutedTarget_b__0(
        BattleLogicFunction_CommonCheckDuplicateFunction___c__DisplayClass8_0_o *this,
        BattleLogicFunction_ExecutedFunctionData_o *n,
        const MethodInfo *method)
{
  struct DataVals_o *vals; // x8
  int32_t targetId; // w8

  if ( !n || (vals = this->fields.vals) == 0 )
    sub_1C6BC60(this, n);
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


void BattleLogicFunction_CommonSideEffectCheckDuplicateFunction___ctor(
        BattleLogicFunction_CommonSideEffectCheckDuplicateFunction_o *this,
        BattleLogicFunction_CommonSideEffectFunctionArgument_o *argument,
        const MethodInfo *method)
{
  int32_t v5; // w2
  const MethodInfo *v6; // x3

  BattleLogicFunction_CommonCheckDuplicateFunction___ctor(
    (BattleLogicFunction_CommonCheckDuplicateFunction_o *)this,
    (const MethodInfo *)argument);
  this->fields.argument = argument;
  sub_1C6B9AC((CGThumbnailListItem_o *)&this->fields.argument, (int32_t)argument, v5, v6);
}


void BattleLogicFunction_CommonSideEffectCheckDuplicateFunction__Init(
        BattleLogicFunction_CommonSideEffectCheckDuplicateFunction_o *this,
        const MethodInfo *method)
{
  BattleLogicFunction_CommonSideEffectFunctionArgument_o *argument; // x0
  struct System_Collections_Generic_List_BattleLogicFunction_ExecutedFunctionData__o *v4; // x0
  int32_t v5; // w2
  const MethodInfo *v6; // x3

  argument = this->fields.argument;
  if ( !argument )
    sub_1C6BC60(0, method);
  v4 = BattleLogicFunction_CommonSideEffectFunctionArgument__getCheckBuffFuncList(argument, method);
  this->fields.executedFuncList = v4;
  sub_1C6B9AC((CGThumbnailListItem_o *)&this->fields, (int32_t)v4, v5, v6);
}


bool BattleLogicFunction_CommonSideEffectCheckDuplicateFunction__isNotExecLocal(
        BattleLogicFunction_CommonSideEffectCheckDuplicateFunction_o *this,
        DataVals_o *vals,
        System_Int32_array *targetIds,
        const MethodInfo *method)
{
  unsigned int targetType; // w8

  if ( !vals )
    goto LABEL_11;
  targetType = vals->fields.targetType;
  if ( targetType - 5 < 0x16 )
    return ((__int64 (__fastcall *)(BattleLogicFunction_CommonSideEffectCheckDuplicateFunction_o *))this->klass->vtable._10_isExecutedFunction.methodPtr)(this);
  if ( targetType > 0x20 )
    return 0;
  if ( ((1LL << targetType) & 0x14000000FLL) != 0 )
    return ((__int64 (__fastcall *)(BattleLogicFunction_CommonSideEffectCheckDuplicateFunction_o *))this->klass->vtable._10_isExecutedFunction.methodPtr)(this);
  if ( targetType != 4 )
    return 0;
  if ( !targetIds )
LABEL_11:
    sub_1C6BC60(this, vals);
  if ( !LODWORD(targetIds->max_length) )
    sub_1C6BC68(this);
  return ((__int64 (__fastcall *)(BattleLogicFunction_CommonSideEffectCheckDuplicateFunction_o *, DataVals_o *, _QWORD, const MethodInfo *))this->klass->vtable._11_isExecutedTarget.methodPtr)(
           this,
           vals,
           (unsigned int)targetIds->m_Items[0],
           this->klass->vtable._11_isExecutedTarget.method);
}


void BattleLogicFunction_CommonSideEffectFunctionArgument___ctor(
        BattleLogicFunction_CommonSideEffectFunctionArgument_o *this,
        const MethodInfo *method)
{
  System_Collections_Generic_Dictionary_int__object__o *v3; // x20
  int32_t v4; // w2
  const MethodInfo *v5; // x3
  const MethodInfo *v6; // x1

  if ( (byte_4CB9409 & 1) == 0 )
  {
    sub_1C6BA08(&Method_System_Collections_Generic_Dictionary_int__List_BattleLogicFunction_ExecutedFunctionData____ctor__);
    sub_1C6BA08(&System_Collections_Generic_Dictionary_int__List_BattleLogicFunction_ExecutedFunctionData___TypeInfo);
    byte_4CB9409 = 1;
  }
  this->fields.buffUniqueId = -1;
  v3 = (System_Collections_Generic_Dictionary_int__object__o *)sub_1C6BC54(System_Collections_Generic_Dictionary_int__List_BattleLogicFunction_ExecutedFunctionData___TypeInfo);
  System_Collections_Generic_Dictionary_int__object____ctor(
    v3,
    (const MethodInfo_3451B1C *)Method_System_Collections_Generic_Dictionary_int__List_BattleLogicFunction_ExecutedFunctionData____ctor__);
  this->fields.executedBuffFuncDic = (struct System_Collections_Generic_Dictionary_int__List_BattleLogicFunction_ExecutedFunctionData___o *)v3;
  sub_1C6B9AC((CGThumbnailListItem_o *)&this->fields.executedBuffFuncDic, (int32_t)v3, v4, v5);
  BattleLogicFunction_FunctionArgument___ctor((BattleLogicFunction_FunctionArgument_o *)this, v6);
}


System_Collections_Generic_List_BattleLogicFunction_ExecutedFunctionData__o *BattleLogicFunction_CommonSideEffectFunctionArgument__getCheckBuffFuncList(
        BattleLogicFunction_CommonSideEffectFunctionArgument_o *this,
        const MethodInfo *method)
{
  struct System_Collections_Generic_Dictionary_int__List_BattleLogicFunction_ExecutedFunctionData___o *executedBuffFuncDic; // x0
  struct System_Collections_Generic_Dictionary_int__List_BattleLogicFunction_ExecutedFunctionData___o *v4; // x20
  int32_t buffUniqueId; // w21
  System_Collections_Generic_List_object__o *v6; // x22

  if ( (byte_4CB9408 & 1) == 0 )
  {
    sub_1C6BA08(&Method_System_Collections_Generic_Dictionary_int__List_BattleLogicFunction_ExecutedFunctionData___ContainsKey__);
    sub_1C6BA08(&Method_System_Collections_Generic_Dictionary_int__List_BattleLogicFunction_ExecutedFunctionData___get_Item__);
    sub_1C6BA08(&Method_System_Collections_Generic_Dictionary_int__List_BattleLogicFunction_ExecutedFunctionData___set_Item__);
    sub_1C6BA08(&Method_System_Collections_Generic_List_BattleLogicFunction_ExecutedFunctionData___ctor__);
    sub_1C6BA08(&System_Collections_Generic_List_BattleLogicFunction_ExecutedFunctionData__TypeInfo);
    byte_4CB9408 = 1;
  }
  executedBuffFuncDic = this->fields.executedBuffFuncDic;
  if ( !executedBuffFuncDic )
    goto LABEL_9;
  if ( !System_Collections_Generic_Dictionary_int__object___ContainsKey(
          (System_Collections_Generic_Dictionary_int__object__o *)executedBuffFuncDic,
          this->fields.buffUniqueId,
          (const MethodInfo_34526E4 *)Method_System_Collections_Generic_Dictionary_int__List_BattleLogicFunction_ExecutedFunctionData___ContainsKey__) )
  {
    v4 = this->fields.executedBuffFuncDic;
    buffUniqueId = this->fields.buffUniqueId;
    v6 = (System_Collections_Generic_List_object__o *)sub_1C6BC54(System_Collections_Generic_List_BattleLogicFunction_ExecutedFunctionData__TypeInfo);
    System_Collections_Generic_List_object____ctor(
      v6,
      (const MethodInfo_3800140 *)Method_System_Collections_Generic_List_BattleLogicFunction_ExecutedFunctionData___ctor__);
    if ( !v4 )
      goto LABEL_9;
    System_Collections_Generic_Dictionary_int__object___set_Item(
      (System_Collections_Generic_Dictionary_int__object__o *)v4,
      buffUniqueId,
      (Il2CppObject *)v6,
      (const MethodInfo_34524DC *)Method_System_Collections_Generic_Dictionary_int__List_BattleLogicFunction_ExecutedFunctionData___set_Item__);
  }
  executedBuffFuncDic = this->fields.executedBuffFuncDic;
  if ( !executedBuffFuncDic )
LABEL_9:
    sub_1C6BC60(executedBuffFuncDic, method);
  return (System_Collections_Generic_List_BattleLogicFunction_ExecutedFunctionData__o *)System_Collections_Generic_Dictionary_int__object___get_Item(
                                                                                          (System_Collections_Generic_Dictionary_int__object__o *)executedBuffFuncDic,
                                                                                          this->fields.buffUniqueId,
                                                                                          (const MethodInfo_3452450 *)Method_System_Collections_Generic_Dictionary_int__List_BattleLogicFunction_ExecutedFunctionData___get_Item__);
}


void BattleLogicFunction_ExecutedFunctionData___ctor(
        BattleLogicFunction_ExecutedFunctionData_o *this,
        DataVals_o *vals,
        int32_t targetId,
        const MethodInfo *method)
{
  __int64 v7; // x0
  __int64 v8; // x1
  int32_t funcIndex; // w8

  *(_QWORD *)&this->fields.index = -1;
  System_Object___ctor((Il2CppObject *)this, 0);
  if ( !vals )
    sub_1C6BC60(v7, v8);
  funcIndex = vals->fields.funcIndex;
  this->fields.isEnable = 0;
  this->fields.index = funcIndex;
  this->fields.targetId = targetId;
}


bool BattleLogicFunction_ExecutedFunctionData__isMatch(
        BattleLogicFunction_ExecutedFunctionData_o *this,
        DataVals_o *vals,
        int32_t targetId,
        bool isCheckEnable,
        const MethodInfo *method)
{
  if ( !vals )
    sub_1C6BC60(this, 0);
  return this->fields.index == vals->fields.funcIndex
      && (targetId == -1 || this->fields.targetId == targetId)
      && (!isCheckEnable || this->fields.isEnable);
}


void BattleLogicFunction_FuncActionResult___ctor(
        BattleLogicFunction_FuncActionResult_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


void BattleLogicFunction_FuncActionResult__SetResultBySubstituteBuff(
        BattleLogicFunction_FuncActionResult_o *this,
        BattleBuffData_BuffData_o *buff,
        bool isResist,
        const MethodInfo *method)
{
  __int64 v7; // x1
  BattleBuffData_SubstituteData_o *substituteData; // x0
  struct System_String_o *ResistPopupText; // x0
  char v10; // w2
  const MethodInfo *v11; // x3
  struct System_Int32_array *ResistEffectList; // x0
  char v13; // w2
  const MethodInfo *v14; // x3
  int32_t v15; // w1
  struct System_Int32_array **p_ResistEffectList_k__BackingField; // x19
  struct System_String_o *PopupText; // x0
  char v18; // w2
  const MethodInfo *v19; // x3
  struct System_Int32_array *EffectList; // x0

  if ( buff )
  {
    this->fields._SubstituteBuff_k__BackingField = buff;
    sub_1C6B9AC((CGThumbnailListItem_o *)&this->fields._SubstituteBuff_k__BackingField, (int32_t)buff, isResist, method);
    if ( isResist )
    {
      this->fields._IsResisted_k__BackingField = 1;
      substituteData = buff->fields.substituteData;
      if ( substituteData )
      {
        ResistPopupText = BattleBuffData_SubstituteData__get_ResistPopupText(substituteData, 0);
        this->fields._ResistPopupText_k__BackingField = ResistPopupText;
        sub_1C6B9AC(
          (CGThumbnailListItem_o *)&this->fields._ResistPopupText_k__BackingField,
          (int32_t)ResistPopupText,
          v10,
          v11);
        substituteData = buff->fields.substituteData;
        if ( substituteData )
        {
          this->fields._ResistPopupIconId_k__BackingField = BattleBuffData_SubstituteData__get_ResistPopupIconId(
                                                              substituteData,
                                                              0);
          substituteData = buff->fields.substituteData;
          if ( substituteData )
          {
            ResistEffectList = BattleBuffData_SubstituteData__get_ResistEffectList(substituteData, 0);
            v15 = (int)ResistEffectList;
            this->fields._ResistEffectList_k__BackingField = ResistEffectList;
            p_ResistEffectList_k__BackingField = &this->fields._ResistEffectList_k__BackingField;
LABEL_12:
            sub_1C6B9AC((CGThumbnailListItem_o *)p_ResistEffectList_k__BackingField, v15, v13, v14);
            return;
          }
        }
      }
    }
    else
    {
      this->fields._IsSubstituted_k__BackingField = 1;
      substituteData = buff->fields.substituteData;
      if ( substituteData )
      {
        PopupText = BattleBuffData_SubstituteData__get_PopupText(substituteData, 0);
        this->fields._SubstitutePopupText_k__BackingField = PopupText;
        sub_1C6B9AC(
          (CGThumbnailListItem_o *)&this->fields._SubstitutePopupText_k__BackingField,
          (int32_t)PopupText,
          v18,
          v19);
        substituteData = buff->fields.substituteData;
        if ( substituteData )
        {
          this->fields._SubstitutePopupIconId_k__BackingField = BattleBuffData_SubstituteData__get_PopupIconId(
                                                                  substituteData,
                                                                  0);
          substituteData = buff->fields.substituteData;
          if ( substituteData )
          {
            EffectList = BattleBuffData_SubstituteData__get_EffectList(substituteData, 0);
            v15 = (int)EffectList;
            this->fields._SubstituteEffectList_k__BackingField = EffectList;
            p_ResistEffectList_k__BackingField = &this->fields._SubstituteEffectList_k__BackingField;
            goto LABEL_12;
          }
        }
      }
    }
    sub_1C6BC60(substituteData, v7);
  }
}


bool BattleLogicFunction_FuncActionResult__get_IsDisplayLastFuncInvalid(
        BattleLogicFunction_FuncActionResult_o *this,
        const MethodInfo *method)
{
  return this->fields._IsDisplayLastFuncInvalid_k__BackingField;
}


bool BattleLogicFunction_FuncActionResult__get_IsExistSubstituteBuff(
        BattleLogicFunction_FuncActionResult_o *this,
        const MethodInfo *method)
{
  return this->fields._IsExistSubstituteBuff_k__BackingField;
}


bool BattleLogicFunction_FuncActionResult__get_IsResisted(
        BattleLogicFunction_FuncActionResult_o *this,
        const MethodInfo *method)
{
  return this->fields._IsResisted_k__BackingField;
}


bool BattleLogicFunction_FuncActionResult__get_IsSubstituted(
        BattleLogicFunction_FuncActionResult_o *this,
        const MethodInfo *method)
{
  return this->fields._IsSubstituted_k__BackingField;
}


System_Int32_array *BattleLogicFunction_FuncActionResult__get_ResistEffectList(
        BattleLogicFunction_FuncActionResult_o *this,
        const MethodInfo *method)
{
  return this->fields._ResistEffectList_k__BackingField;
}


int32_t BattleLogicFunction_FuncActionResult__get_ResistPopupIconId(
        BattleLogicFunction_FuncActionResult_o *this,
        const MethodInfo *method)
{
  return this->fields._ResistPopupIconId_k__BackingField;
}


System_String_o *BattleLogicFunction_FuncActionResult__get_ResistPopupText(
        BattleLogicFunction_FuncActionResult_o *this,
        const MethodInfo *method)
{
  return this->fields._ResistPopupText_k__BackingField;
}


BattleBuffData_BuffData_o *BattleLogicFunction_FuncActionResult__get_SubstituteBuff(
        BattleLogicFunction_FuncActionResult_o *this,
        const MethodInfo *method)
{
  return this->fields._SubstituteBuff_k__BackingField;
}


System_Int32_array *BattleLogicFunction_FuncActionResult__get_SubstituteEffectList(
        BattleLogicFunction_FuncActionResult_o *this,
        const MethodInfo *method)
{
  return this->fields._SubstituteEffectList_k__BackingField;
}


int32_t BattleLogicFunction_FuncActionResult__get_SubstitutePopupIconId(
        BattleLogicFunction_FuncActionResult_o *this,
        const MethodInfo *method)
{
  return this->fields._SubstitutePopupIconId_k__BackingField;
}


System_String_o *BattleLogicFunction_FuncActionResult__get_SubstitutePopupText(
        BattleLogicFunction_FuncActionResult_o *this,
        const MethodInfo *method)
{
  return this->fields._SubstitutePopupText_k__BackingField;
}


void BattleLogicFunction_FuncActionResult__set_IsDisplayLastFuncInvalid(
        BattleLogicFunction_FuncActionResult_o *this,
        bool value,
        const MethodInfo *method)
{
  this->fields._IsDisplayLastFuncInvalid_k__BackingField = value;
}


void BattleLogicFunction_FuncActionResult__set_IsExistSubstituteBuff(
        BattleLogicFunction_FuncActionResult_o *this,
        bool value,
        const MethodInfo *method)
{
  this->fields._IsExistSubstituteBuff_k__BackingField = value;
}


void BattleLogicFunction_FuncActionResult__set_IsResisted(
        BattleLogicFunction_FuncActionResult_o *this,
        bool value,
        const MethodInfo *method)
{
  this->fields._IsResisted_k__BackingField = value;
}


void BattleLogicFunction_FuncActionResult__set_IsSubstituted(
        BattleLogicFunction_FuncActionResult_o *this,
        bool value,
        const MethodInfo *method)
{
  this->fields._IsSubstituted_k__BackingField = value;
}


void BattleLogicFunction_FuncActionResult__set_ResistEffectList(
        BattleLogicFunction_FuncActionResult_o *this,
        System_Int32_array *value,
        const MethodInfo *method)
{
  const MethodInfo *v3; // x3

  this->fields._ResistEffectList_k__BackingField = value;
  sub_1C6B9AC(
    (CGThumbnailListItem_o *)&this->fields._ResistEffectList_k__BackingField,
    (int32_t)value,
    (int32_t)method,
    v3);
}


void BattleLogicFunction_FuncActionResult__set_ResistPopupIconId(
        BattleLogicFunction_FuncActionResult_o *this,
        int32_t value,
        const MethodInfo *method)
{
  this->fields._ResistPopupIconId_k__BackingField = value;
}


void BattleLogicFunction_FuncActionResult__set_ResistPopupText(
        BattleLogicFunction_FuncActionResult_o *this,
        System_String_o *value,
        const MethodInfo *method)
{
  const MethodInfo *v3; // x3

  this->fields._ResistPopupText_k__BackingField = value;
  sub_1C6B9AC(
    (CGThumbnailListItem_o *)&this->fields._ResistPopupText_k__BackingField,
    (int32_t)value,
    (int32_t)method,
    v3);
}


void BattleLogicFunction_FuncActionResult__set_SubstituteBuff(
        BattleLogicFunction_FuncActionResult_o *this,
        BattleBuffData_BuffData_o *value,
        const MethodInfo *method)
{
  const MethodInfo *v3; // x3

  this->fields._SubstituteBuff_k__BackingField = value;
  sub_1C6B9AC(
    (CGThumbnailListItem_o *)&this->fields._SubstituteBuff_k__BackingField,
    (int32_t)value,
    (int32_t)method,
    v3);
}


void BattleLogicFunction_FuncActionResult__set_SubstituteEffectList(
        BattleLogicFunction_FuncActionResult_o *this,
        System_Int32_array *value,
        const MethodInfo *method)
{
  const MethodInfo *v3; // x3

  this->fields._SubstituteEffectList_k__BackingField = value;
  sub_1C6B9AC(
    (CGThumbnailListItem_o *)&this->fields._SubstituteEffectList_k__BackingField,
    (int32_t)value,
    (int32_t)method,
    v3);
}


void BattleLogicFunction_FuncActionResult__set_SubstitutePopupIconId(
        BattleLogicFunction_FuncActionResult_o *this,
        int32_t value,
        const MethodInfo *method)
{
  this->fields._SubstitutePopupIconId_k__BackingField = value;
}


void BattleLogicFunction_FuncActionResult__set_SubstitutePopupText(
        BattleLogicFunction_FuncActionResult_o *this,
        System_String_o *value,
        const MethodInfo *method)
{
  const MethodInfo *v3; // x3

  this->fields._SubstitutePopupText_k__BackingField = value;
  sub_1C6B9AC(
    (CGThumbnailListItem_o *)&this->fields._SubstitutePopupText_k__BackingField,
    (int32_t)value,
    (int32_t)method,
    v3);
}


void BattleLogicFunction_FuncSideEffectFunctionArgument___ctor(
        BattleLogicFunction_FuncSideEffectFunctionArgument_o *this,
        const MethodInfo *method)
{
  System_Collections_Generic_HashSet_int__o *v3; // x20
  int32_t v4; // w2
  const MethodInfo *v5; // x3
  const MethodInfo *v6; // x1
  __int64 v7; // x20
  const MethodInfo *v8; // x1
  int32_t v9; // w2
  const MethodInfo *v10; // x3
  int32_t v11; // w2
  const MethodInfo *v12; // x3

  if ( (byte_4CB940B & 1) == 0 )
  {
    sub_1C6BA08(&BattleLogicFunction_CommonSideEffectCheckDuplicateFunction_TypeInfo);
    sub_1C6BA08(&Method_System_Collections_Generic_HashSet_int___ctor__);
    sub_1C6BA08(&System_Collections_Generic_HashSet_int__TypeInfo);
    byte_4CB940B = 1;
  }
  v3 = (System_Collections_Generic_HashSet_int__o *)sub_1C6BC54(System_Collections_Generic_HashSet_int__TypeInfo);
  System_Collections_Generic_HashSet_int____ctor(
    v3,
    (const MethodInfo_36B0FBC *)Method_System_Collections_Generic_HashSet_int___ctor__);
  this->fields.hashTargetId = v3;
  sub_1C6B9AC((CGThumbnailListItem_o *)&this->fields.hashTargetId, (int32_t)v3, v4, v5);
  BattleLogicFunction_CommonSideEffectFunctionArgument___ctor(
    (BattleLogicFunction_CommonSideEffectFunctionArgument_o *)this,
    v6);
  v7 = sub_1C6BC54(BattleLogicFunction_CommonSideEffectCheckDuplicateFunction_TypeInfo);
  BattleLogicFunction_CommonCheckDuplicateFunction___ctor((BattleLogicFunction_CommonCheckDuplicateFunction_o *)v7, v8);
  *(_QWORD *)(v7 + 24) = this;
  sub_1C6B9AC((CGThumbnailListItem_o *)(v7 + 24), (int32_t)this, v9, v10);
  this->fields.checkDuplicate = (struct BattleLogicFunction_CheckDuplicateFunction_o *)v7;
  sub_1C6B9AC((CGThumbnailListItem_o *)&this->fields.checkDuplicate, v7, v11, v12);
}


void BattleLogicFunction_FuncSideEffectFunctionArgument__AddTarget(
        BattleLogicFunction_FuncSideEffectFunctionArgument_o *this,
        BattleLogicFunctionProcess_FunctionTargetCheck_o *funcTarget,
        const MethodInfo *method)
{
  BattleLogicFunction_FuncSideEffectFunctionArgument_o *v4; // x20
  struct BattleLogicFunctionProcess_FunctionUnitCheck_o *funcUnit_k__BackingField; // x8
  struct DataVals_o *dataVals_k__BackingField; // x8

  v4 = this;
  if ( (byte_4CB940D & 1) == 0 )
  {
    this = (BattleLogicFunction_FuncSideEffectFunctionArgument_o *)sub_1C6BA08(&Method_System_Collections_Generic_HashSet_int__Add__);
    byte_4CB940D = 1;
  }
  if ( !funcTarget )
    goto LABEL_12;
  funcUnit_k__BackingField = funcTarget->fields._funcUnit_k__BackingField;
  if ( !funcUnit_k__BackingField )
    goto LABEL_12;
  dataVals_k__BackingField = funcUnit_k__BackingField->fields._dataVals_k__BackingField;
  if ( !dataVals_k__BackingField )
    goto LABEL_12;
  if ( !FuncList__IsNotContainsDefaultTarget(dataVals_k__BackingField->fields.funcType, 0)
    && (funcTarget->fields._result_k__BackingField || funcTarget->fields.invalidType) )
  {
    this = (BattleLogicFunction_FuncSideEffectFunctionArgument_o *)v4->fields.hashTargetId;
    if ( this )
    {
      System_Collections_Generic_HashSet_int___Add(
        (System_Collections_Generic_HashSet_int__o *)this,
        funcTarget->fields._targetId_k__BackingField,
        (const MethodInfo_36B21C0 *)Method_System_Collections_Generic_HashSet_int__Add__);
      return;
    }
LABEL_12:
    sub_1C6BC60(this, funcTarget);
  }
}


void BattleLogicFunction_FuncSideEffectFunctionArgument__AddTarget_47124408(
        BattleLogicFunction_FuncSideEffectFunctionArgument_o *this,
        BattleLogicFunction_FuncSideEffectFunctionArgument_o *arg,
        const MethodInfo *method)
{
  System_Collections_Generic_HashSet_int__o *hashTargetId; // x0

  if ( (byte_4CB940E & 1) == 0 )
  {
    sub_1C6BA08(&Method_System_Collections_Generic_HashSet_int__UnionWith__);
    byte_4CB940E = 1;
  }
  if ( arg )
  {
    hashTargetId = this->fields.hashTargetId;
    if ( !hashTargetId )
      sub_1C6BC60(0, arg);
    System_Collections_Generic_HashSet_int___UnionWith(
      hashTargetId,
      (System_Collections_Generic_IEnumerable_T__o *)arg->fields.hashTargetId,
      (const MethodInfo_36B21D0 *)Method_System_Collections_Generic_HashSet_int__UnionWith__);
  }
}


BuffList_ACTION_array *BattleLogicFunction_FuncSideEffectFunctionArgument__GetActArray(
        BattleLogicFunction_FuncSideEffectFunctionArgument_o *this,
        bool isMainOnly,
        const MethodInfo *method)
{
  long double inited; // q0
  _QWORD *v4; // x19
  __int64 v5; // x8
  __int64 v6; // x0
  __int64 v7; // x0

  if ( (byte_4CB940C & 1) == 0 )
  {
    sub_1C6BA08(&Method_System_Array_Empty_BuffList_ACTION___);
    byte_4CB940C = 1;
  }
  v4 = Method_System_Array_Empty_BuffList_ACTION___;
  v5 = *((_QWORD *)Method_System_Array_Empty_BuffList_ACTION___ + 7);
  if ( !v5 )
  {
    sub_1C41AF8(Method_System_Array_Empty_BuffList_ACTION___);
    v5 = v4[7];
  }
  v6 = *(_QWORD *)(v5 + 16);
  if ( (*(_BYTE *)(v6 + 309) & 1) == 0 )
    v6 = sub_1C41A9C(inited);
  if ( !*(_DWORD *)(v6 + 224) )
    inited = j_il2cpp_runtime_class_init_0(v6);
  v7 = *(_QWORD *)(v4[7] + 16LL);
  if ( (*(_BYTE *)(v7 + 309) & 1) == 0 )
    v7 = sub_1C41A9C(inited);
  return **(BuffList_ACTION_array ***)(v7 + 184);
}


void BattleLogicFunction_FuncSideEffectFunctionArgument__SetSideEffect(
        BattleLogicFunction_FuncSideEffectFunctionArgument_o *this,
        BattleLogicFunction_o *logicFunc,
        BattleActionData_o *mainActionData,
        BattleServantData_o *actorSvtData,
        const MethodInfo *method)
{
  System_Int32_array *v9; // x0
  __int64 v10; // x1

  if ( (byte_4CB940F & 1) == 0 )
  {
    sub_1C6BA08(&Method_System_Linq_Enumerable_ToArray_int___);
    byte_4CB940F = 1;
  }
  v9 = System_Linq_Enumerable__ToArray_int_(
         (System_Collections_Generic_IEnumerable_TSource__o *)this->fields.hashTargetId,
         (const MethodInfo_317B0B0 *)Method_System_Linq_Enumerable_ToArray_int___);
  if ( !logicFunc )
    sub_1C6BC60(v9, v10);
  BattleLogicFunction__SetFuncSideEffect(logicFunc, this, mainActionData, actorSvtData, v9, 0);
}


void BattleLogicFunction_FunctionArgument___ctor(
        BattleLogicFunction_FunctionArgument_o *this,
        const MethodInfo *method)
{
  Il2CppObject *v3; // x20
  int32_t v4; // w2
  const MethodInfo *v5; // x3

  if ( (byte_4CB9407 & 1) == 0 )
  {
    sub_1C6BA08(&BattleLogicFunction_CheckDuplicateFunction_TypeInfo);
    byte_4CB9407 = 1;
  }
  v3 = (Il2CppObject *)sub_1C6BC54(BattleLogicFunction_CheckDuplicateFunction_TypeInfo);
  System_Object___ctor(v3, 0);
  this->fields.checkDuplicate = (struct BattleLogicFunction_CheckDuplicateFunction_o *)v3;
  sub_1C6B9AC((CGThumbnailListItem_o *)&this->fields.checkDuplicate, (int32_t)v3, v4, v5);
  System_Object___ctor((Il2CppObject *)this, 0);
}


System_Int32_array *BattleLogicFunction_FunctionArgument__GetFixTargetIds(
        BattleLogicFunction_FunctionArgument_o *this,
        int32_t targetType,
        System_Int32_array *beforeTargetIds,
        const MethodInfo *method)
{
  return beforeTargetIds;
}


void BattleLogicFunction_FunctionArgument__Init(BattleLogicFunction_FunctionArgument_o *this, const MethodInfo *method)
{
  struct BattleLogicFunction_CheckDuplicateFunction_o *checkDuplicate; // x0

  checkDuplicate = this->fields.checkDuplicate;
  if ( !checkDuplicate )
    sub_1C6BC60(0, method);
  ((void (__fastcall *)(struct BattleLogicFunction_CheckDuplicateFunction_o *, const MethodInfo *))checkDuplicate->klass->vtable._4_Init.methodPtr)(
    checkDuplicate,
    checkDuplicate->klass->vtable._4_Init.method);
}


void BattleLogicFunction_FunctionArgument__SetAfterFuncSideEffectArgument(
        BattleLogicFunction_FunctionArgument_o *this,
        BattleLogicFunction_FuncSideEffectFunctionArgument_o *arg,
        const MethodInfo *method)
{
  const MethodInfo *v3; // x3

  this->fields._FuncSideEffectArg_k__BackingField = arg;
  sub_1C6B9AC(
    (CGThumbnailListItem_o *)&this->fields._FuncSideEffectArg_k__BackingField,
    (int32_t)arg,
    (int32_t)method,
    v3);
}


BattleLogicFunction_FuncSideEffectFunctionArgument_o *BattleLogicFunction_FunctionArgument__get_FuncSideEffectArg(
        BattleLogicFunction_FunctionArgument_o *this,
        const MethodInfo *method)
{
  return this->fields._FuncSideEffectArg_k__BackingField;
}


bool BattleLogicFunction_FunctionArgument__get_IsSetSubstituteBuffAction(
        BattleLogicFunction_FunctionArgument_o *this,
        const MethodInfo *method)
{
  return this->fields._IsSetSubstituteBuffAction_k__BackingField;
}


bool BattleLogicFunction_FunctionArgument__get_IsTimingPassiveOnTransform(
        BattleLogicFunction_FunctionArgument_o *this,
        const MethodInfo *method)
{
  return this->fields._SkillTiming_k__BackingField == 1;
}


BattleActionData_BuffData_o *BattleLogicFunction_FunctionArgument__get_ParentActBuffData(
        BattleLogicFunction_FunctionArgument_o *this,
        const MethodInfo *method)
{
  return this->fields._ParentActBuffData_k__BackingField;
}


int32_t BattleLogicFunction_FunctionArgument__get_SkillTiming(
        BattleLogicFunction_FunctionArgument_o *this,
        const MethodInfo *method)
{
  return this->fields._SkillTiming_k__BackingField;
}


void BattleLogicFunction_FunctionArgument__set_FuncSideEffectArg(
        BattleLogicFunction_FunctionArgument_o *this,
        BattleLogicFunction_FuncSideEffectFunctionArgument_o *value,
        const MethodInfo *method)
{
  const MethodInfo *v3; // x3

  this->fields._FuncSideEffectArg_k__BackingField = value;
  sub_1C6B9AC(
    (CGThumbnailListItem_o *)&this->fields._FuncSideEffectArg_k__BackingField,
    (int32_t)value,
    (int32_t)method,
    v3);
}


void BattleLogicFunction_FunctionArgument__set_IsSetSubstituteBuffAction(
        BattleLogicFunction_FunctionArgument_o *this,
        bool value,
        const MethodInfo *method)
{
  this->fields._IsSetSubstituteBuffAction_k__BackingField = value;
}


void BattleLogicFunction_FunctionArgument__set_ParentActBuffData(
        BattleLogicFunction_FunctionArgument_o *this,
        BattleActionData_BuffData_o *value,
        const MethodInfo *method)
{
  const MethodInfo *v3; // x3

  this->fields._ParentActBuffData_k__BackingField = value;
  sub_1C6B9AC(
    (CGThumbnailListItem_o *)&this->fields._ParentActBuffData_k__BackingField,
    (int32_t)value,
    (int32_t)method,
    v3);
}


void BattleLogicFunction_FunctionArgument__set_SkillTiming(
        BattleLogicFunction_FunctionArgument_o *this,
        int32_t value,
        const MethodInfo *method)
{
  this->fields._SkillTiming_k__BackingField = value;
}


void BattleLogicFunction_HealFuncApplyArgs___ctor(
        BattleLogicFunction_HealFuncApplyArgs_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


bool BattleLogicFunction_HealFuncApplyArgs__get_DeadKeepStanding(
        BattleLogicFunction_HealFuncApplyArgs_o *this,
        const MethodInfo *method)
{
  return this->fields._DeadKeepStanding_k__BackingField;
}


int32_t BattleLogicFunction_HealFuncApplyArgs__get_EntryIndex(
        BattleLogicFunction_HealFuncApplyArgs_o *this,
        const MethodInfo *method)
{
  return this->fields._EntryIndex_k__BackingField;
}


int32_t BattleLogicFunction_HealFuncApplyArgs__get_ExpelledUniqueId(
        BattleLogicFunction_HealFuncApplyArgs_o *this,
        const MethodInfo *method)
{
  return this->fields._ExpelledUniqueId_k__BackingField;
}


bool BattleLogicFunction_HealFuncApplyArgs__get_IsMultiTargetRevival(
        BattleLogicFunction_HealFuncApplyArgs_o *this,
        const MethodInfo *method)
{
  return this->fields._IsMultiTargetRevival_k__BackingField;
}


int32_t BattleLogicFunction_HealFuncApplyArgs__get_RevivalTargetId(
        BattleLogicFunction_HealFuncApplyArgs_o *this,
        const MethodInfo *method)
{
  return this->fields._RevivalTargetId_k__BackingField;
}


void BattleLogicFunction_HealFuncApplyArgs__set_DeadKeepStanding(
        BattleLogicFunction_HealFuncApplyArgs_o *this,
        bool value,
        const MethodInfo *method)
{
  this->fields._DeadKeepStanding_k__BackingField = value;
}


void BattleLogicFunction_HealFuncApplyArgs__set_EntryIndex(
        BattleLogicFunction_HealFuncApplyArgs_o *this,
        int32_t value,
        const MethodInfo *method)
{
  this->fields._EntryIndex_k__BackingField = value;
}


void BattleLogicFunction_HealFuncApplyArgs__set_ExpelledUniqueId(
        BattleLogicFunction_HealFuncApplyArgs_o *this,
        int32_t value,
        const MethodInfo *method)
{
  this->fields._ExpelledUniqueId_k__BackingField = value;
}


void BattleLogicFunction_HealFuncApplyArgs__set_IsMultiTargetRevival(
        BattleLogicFunction_HealFuncApplyArgs_o *this,
        bool value,
        const MethodInfo *method)
{
  this->fields._IsMultiTargetRevival_k__BackingField = value;
}


void BattleLogicFunction_HealFuncApplyArgs__set_RevivalTargetId(
        BattleLogicFunction_HealFuncApplyArgs_o *this,
        int32_t value,
        const MethodInfo *method)
{
  this->fields._RevivalTargetId_k__BackingField = value;
}


void BattleLogicFunction_OnlyCheckFuncSideEffectFunctionArgument__SetSideEffect(
        BattleLogicFunction_OnlyCheckFuncSideEffectFunctionArgument_o *this,
        BattleLogicFunction_o *logicFunc,
        BattleActionData_o *mainActionData,
        BattleServantData_o *actorSvtData,
        const MethodInfo *method)
{
  ;
}


BattleLogicFunction_SideEffectMakeArgument_o *BattleLogicFunction_PreAttackSideEffectMakeArgument__MakeOnlyMainArgument(
        BattleLogicFunction_PreAttackSideEffectMakeArgument_o *this,
        const MethodInfo *method)
{
  BattleLogicFunction_SideEffectMakeArgument_o *v2; // x19
  const MethodInfo *v3; // x1

  if ( (byte_4CB9428 & 1) == 0 )
  {
    sub_1C6BA08(&BattleLogicFunction_PreMainAttackSideEffectMakeArgument_TypeInfo);
    byte_4CB9428 = 1;
  }
  v2 = (BattleLogicFunction_SideEffectMakeArgument_o *)sub_1C6BC54(BattleLogicFunction_PreMainAttackSideEffectMakeArgument_TypeInfo);
  BattleLogicFunction_SideEffectMakeArgument___ctor(v2, v3);
  return v2;
}


int32_t BattleLogicFunction_PreAttackSideEffectMakeArgument__get_BuffAct(
        BattleLogicFunction_PreAttackSideEffectMakeArgument_o *this,
        const MethodInfo *method)
{
  return 98;
}


int32_t BattleLogicFunction_PreAttackSideEffectMakeArgument__get_SideEffectType(
        BattleLogicFunction_PreAttackSideEffectMakeArgument_o *this,
        const MethodInfo *method)
{
  return 3;
}


int32_t BattleLogicFunction_PreMainAttackSideEffectMakeArgument__get_BuffAct(
        BattleLogicFunction_PreMainAttackSideEffectMakeArgument_o *this,
        const MethodInfo *method)
{
  return 120;
}


void BattleLogicFunction_ProcListInArgs___ctor(
        BattleLogicFunction_ProcListInArgs_o *this,
        BattleLogicFunction_FunctionArgument_o *argument,
        BattleActionData_o *actionData,
        const MethodInfo *method)
{
  System_Collections_Generic_Dictionary_KeyValuePair_int__int___bool__o *v7; // x22
  int32_t v8; // w2
  const MethodInfo *v9; // x3
  int32_t v10; // w2
  const MethodInfo *v11; // x3
  const MethodInfo *v12; // x1
  __int64 v13; // x1
  struct BattleLogicFunction_FunctionArgument_o *externalArg; // x0

  if ( (byte_4CB9419 & 1) == 0 )
  {
    sub_1C6BA08(&Method_System_Collections_Generic_Dictionary_KeyValuePair_int__int___bool___ctor__);
    sub_1C6BA08(&System_Collections_Generic_Dictionary_KeyValuePair_int__int___bool__TypeInfo);
    sub_1C6BA08(&BattleLogicFunction_FunctionArgument_TypeInfo);
    byte_4CB9419 = 1;
  }
  v7 = (System_Collections_Generic_Dictionary_KeyValuePair_int__int___bool__o *)sub_1C6BC54(System_Collections_Generic_Dictionary_KeyValuePair_int__int___bool__TypeInfo);
  System_Collections_Generic_Dictionary_KeyValuePair_int__int___bool____ctor(
    v7,
    (const MethodInfo_340A000 *)Method_System_Collections_Generic_Dictionary_KeyValuePair_int__int___bool___ctor__);
  this->fields.funcResults = v7;
  sub_1C6B9AC((CGThumbnailListItem_o *)&this->fields, (int32_t)v7, v8, v9);
  this->fields.tdCommandTypeChange = -1;
  System_Object___ctor((Il2CppObject *)this, 0);
  if ( !argument )
  {
    argument = (BattleLogicFunction_FunctionArgument_o *)sub_1C6BC54(BattleLogicFunction_FunctionArgument_TypeInfo);
    BattleLogicFunction_FunctionArgument___ctor(argument, v12);
  }
  this->fields.externalArg = argument;
  sub_1C6B9AC((CGThumbnailListItem_o *)&this->fields.externalArg, (int32_t)argument, v10, v11);
  externalArg = this->fields.externalArg;
  if ( !externalArg
    || (externalArg = (struct BattleLogicFunction_FunctionArgument_o *)((__int64 (__fastcall *)(struct BattleLogicFunction_FunctionArgument_o *, const MethodInfo *))externalArg->klass->vtable._4_Init.methodPtr)(
                                                                         externalArg,
                                                                         externalArg->klass->vtable._4_Init.method),
        !actionData) )
  {
    sub_1C6BC60(externalArg, v13);
  }
  this->fields._EnemyTargetId_k__BackingField = actionData->fields.targetId;
}


bool BattleLogicFunction_ProcListInArgs__DidTriggeredFuncHaveSpecifyResults(
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
  System_Collections_Generic_KeyValuePair_int__int__o p_key; // x0
  System_Collections_Generic_KeyValuePair_int__int__o v15; // x1
  char v16; // w21
  _BOOL4 v17; // w24
  struct System_Collections_Generic_Dictionary_KeyValuePair_int__int___bool__o *funcResults; // x20
  System_Func_KeyValuePair_KeyValuePair_int__int___bool___bool__o *v19; // x0
  System_Func_TSource__bool__o *v20; // x22
  System_Collections_Generic_IEnumerable_TSource__o *v21; // x20
  System_Collections_Generic_IEnumerable_TSource__c *klass; // x8
  __int64 v23; // x9
  int32_t *p_offset; // x10
  __int64 v25; // x0
  System_Collections_Generic_IEnumerable_TSource__o *v26; // x19
  System_Func_KeyValuePair_KeyValuePair_int__int___bool___bool__o *v27; // x20
  __int64 v28; // x1
  __int64 v29; // x20
  __int64 v30; // x8
  __int64 v31; // x9
  int *v32; // x10
  __int64 v33; // x0
  char v34; // w22
  __int64 v35; // x8
  __int64 v36; // x9
  int *v37; // x10
  __int64 v38; // x0
  __int64 v39; // x0
  __int64 v40; // x1
  char v41; // w23
  BattleServantData_o *ServantData; // x0
  __int64 v43; // x8
  __int64 v44; // x9
  int *v45; // x10
  __int64 v46; // x0
  bool value; // [xsp+Ch] [xbp-54h] BYREF
  System_Collections_Generic_KeyValuePair_int__int__o key; // [xsp+10h] [xbp-50h] BYREF
  bool isAllCond; // [xsp+18h] [xbp-48h] BYREF
  bool isSameTargetOnly; // [xsp+1Ch] [xbp-44h] BYREF

  if ( (byte_4CB941B & 1) == 0 )
  {
    sub_1C6BA08(&Method_System_Collections_Generic_Dictionary_KeyValuePair_int__int___bool__TryGetValue__);
    sub_1C6BA08(&Method_System_Linq_Enumerable_Any_KeyValuePair_KeyValuePair_int__int___bool____);
    sub_1C6BA08(&Method_System_Linq_Enumerable_Count_KeyValuePair_KeyValuePair_int__int___bool____);
    sub_1C6BA08(&Method_System_Linq_Enumerable_Where_KeyValuePair_KeyValuePair_int__int___bool____);
    sub_1C6BA08(&System_Func_KeyValuePair_KeyValuePair_int__int___bool___bool__TypeInfo);
    sub_1C6BA08(&System_IDisposable_TypeInfo);
    sub_1C6BA08(&System_Collections_Generic_IEnumerable_KeyValuePair_KeyValuePair_int__int___bool___TypeInfo);
    sub_1C6BA08(&System_Collections_Generic_IEnumerator_KeyValuePair_KeyValuePair_int__int___bool___TypeInfo);
    sub_1C6BA08(&System_Collections_IEnumerator_TypeInfo);
    sub_1C6BA08(&Method_System_Collections_Generic_KeyValuePair_int__int___ctor__);
    sub_1C6BA08(&Method_System_Collections_Generic_KeyValuePair_KeyValuePair_int__int___bool__get_Key__);
    sub_1C6BA08(&Method_System_Collections_Generic_KeyValuePair_int__int__get_Value__);
    sub_1C6BA08(&Method_System_Collections_Generic_KeyValuePair_KeyValuePair_int__int___bool__get_Value__);
    sub_1C6BA08(&System_Math_TypeInfo);
    sub_1C6BA08(&Method_BattleLogicFunction_ProcListInArgs___c__DisplayClass42_0__DidTriggeredFuncHaveSpecifyResults_b__0__);
    sub_1C6BA08(&Method_BattleLogicFunction_ProcListInArgs___c__DisplayClass42_0__DidTriggeredFuncHaveSpecifyResults_b__1__);
    sub_1C6BA08(&Method_BattleLogicFunction_ProcListInArgs___c__DisplayClass42_0__DidTriggeredFuncHaveSpecifyResults_b__2__);
    sub_1C6BA08(&BattleLogicFunction_ProcListInArgs___c__DisplayClass42_0_TypeInfo);
    byte_4CB941B = 1;
  }
  isSameTargetOnly = 0;
  isAllCond = 0;
  key = 0;
  value = 0;
  v9 = sub_1C6BC54(BattleLogicFunction_ProcListInArgs___c__DisplayClass42_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v9, 0);
  if ( !baseVals )
    goto LABEL_53;
  TriggeredFuncIndex = (System_Collections_Generic_Dictionary_KeyValuePair_int__int___bool__o *)DataVals__GetTriggeredFuncIndex(
                                                                                                  baseVals,
                                                                                                  &isSameTargetOnly,
                                                                                                  &isAllCond,
                                                                                                  0);
  if ( !v9 )
    goto LABEL_53;
  v12 = (int)TriggeredFuncIndex;
  *(_DWORD *)(v9 + 16) = (_DWORD)TriggeredFuncIndex;
  if ( !(_DWORD)TriggeredFuncIndex )
  {
    v16 = 1;
    return v16 & 1;
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
      (const MethodInfo_3736CEC *)Method_System_Collections_Generic_KeyValuePair_int__int___ctor__);
    TriggeredFuncIndex = this->fields.funcResults;
    if ( TriggeredFuncIndex )
    {
      v15 = key;
      if ( System_Collections_Generic_Dictionary_KeyValuePair_int__int___bool___TryGetValue(
             TriggeredFuncIndex,
             v15,
             &value,
             (const MethodInfo_340C15C *)Method_System_Collections_Generic_Dictionary_KeyValuePair_int__int___bool__TryGetValue__) )
      {
        v16 = value == *(_BYTE *)(v9 + 20);
        return v16 & 1;
      }
LABEL_24:
      v16 = 0;
      return v16 & 1;
    }
    goto LABEL_53;
  }
  v17 = isAllCond;
  funcResults = this->fields.funcResults;
  v19 = (System_Func_KeyValuePair_KeyValuePair_int__int___bool___bool__o *)sub_1C6BC54(System_Func_KeyValuePair_KeyValuePair_int__int___bool___bool__TypeInfo);
  v20 = (System_Func_TSource__bool__o *)v19;
  if ( !v17 )
  {
    System_Func_KeyValuePair_KeyValuePair_int__int___bool___bool____ctor(
      v19,
      (Il2CppObject *)v9,
      Method_BattleLogicFunction_ProcListInArgs___c__DisplayClass42_0__DidTriggeredFuncHaveSpecifyResults_b__0__,
      0);
    v26 = System_Linq_Enumerable__Where_KeyValuePair_KeyValuePair_int__int___bool__(
            (System_Collections_Generic_IEnumerable_TSource__o *)funcResults,
            v20,
            (const MethodInfo_318071C *)Method_System_Linq_Enumerable_Where_KeyValuePair_KeyValuePair_int__int___bool____);
    v27 = (System_Func_KeyValuePair_KeyValuePair_int__int___bool___bool__o *)sub_1C6BC54(System_Func_KeyValuePair_KeyValuePair_int__int___bool___bool__TypeInfo);
    System_Func_KeyValuePair_KeyValuePair_int__int___bool___bool____ctor(
      v27,
      (Il2CppObject *)v9,
      Method_BattleLogicFunction_ProcListInArgs___c__DisplayClass42_0__DidTriggeredFuncHaveSpecifyResults_b__1__,
      0);
    v16 = System_Linq_Enumerable__Any_KeyValuePair_KeyValuePair_int__int___bool__(
            v26,
            (System_Func_TSource__bool__o *)v27,
            (const MethodInfo_3147410 *)Method_System_Linq_Enumerable_Any_KeyValuePair_KeyValuePair_int__int___bool____);
    return v16 & 1;
  }
  System_Func_KeyValuePair_KeyValuePair_int__int___bool___bool____ctor(
    v19,
    (Il2CppObject *)v9,
    Method_BattleLogicFunction_ProcListInArgs___c__DisplayClass42_0__DidTriggeredFuncHaveSpecifyResults_b__2__,
    0);
  v21 = System_Linq_Enumerable__Where_KeyValuePair_KeyValuePair_int__int___bool__(
          (System_Collections_Generic_IEnumerable_TSource__o *)funcResults,
          v20,
          (const MethodInfo_318071C *)Method_System_Linq_Enumerable_Where_KeyValuePair_KeyValuePair_int__int___bool____);
  TriggeredFuncIndex = (System_Collections_Generic_Dictionary_KeyValuePair_int__int___bool__o *)System_Linq_Enumerable__Count_KeyValuePair_KeyValuePair_int__int___bool__(
                                                                                                  v21,
                                                                                                  (const MethodInfo_315A4D0 *)Method_System_Linq_Enumerable_Count_KeyValuePair_KeyValuePair_int__int___bool____);
  if ( !(_DWORD)TriggeredFuncIndex )
    goto LABEL_24;
  if ( !v21 )
LABEL_53:
    sub_1C6BC60(TriggeredFuncIndex, v11);
  klass = v21->klass;
  v23 = *(unsigned __int16 *)&v21->klass->_2.rank;
  if ( *(_WORD *)&v21->klass->_2.rank )
  {
    p_offset = &klass->_1.interfaceOffsets->offset;
    while ( *((System_Collections_Generic_IEnumerable_KeyValuePair_KeyValuePair_int__int___bool___c **)p_offset - 1) != System_Collections_Generic_IEnumerable_KeyValuePair_KeyValuePair_int__int___bool___TypeInfo )
    {
      --v23;
      p_offset += 4;
      if ( !v23 )
        goto LABEL_23;
    }
    v25 = (__int64)&klass->vtable[*p_offset];
  }
  else
  {
LABEL_23:
    v25 = sub_1C41D90(
            v21,
            System_Collections_Generic_IEnumerable_KeyValuePair_KeyValuePair_int__int___bool___TypeInfo,
            0);
  }
  v29 = (*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerable_TSource__o *, _QWORD))v25)(
          v21,
          *(_QWORD *)(v25 + 8));
  if ( !v29 )
    sub_1C6BC60(0, v28);
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
          goto LABEL_32;
      }
      v33 = v30 + 16LL * *v32 + 312;
    }
    else
    {
LABEL_32:
      v33 = sub_1C41D90(v29, System_Collections_IEnumerator_TypeInfo, 0);
    }
    v34 = (*(__int64 (__fastcall **)(__int64, _QWORD))v33)(v29, *(_QWORD *)(v33 + 8));
    if ( (v34 & 1) == 0 )
      break;
    v35 = *(_QWORD *)v29;
    v36 = *(unsigned __int16 *)(*(_QWORD *)v29 + 302LL);
    if ( *(_WORD *)(*(_QWORD *)v29 + 302LL) )
    {
      v37 = (int *)(*(_QWORD *)(v35 + 176) + 8LL);
      while ( *((System_Collections_Generic_IEnumerator_KeyValuePair_KeyValuePair_int__int___bool___c **)v37 - 1) != System_Collections_Generic_IEnumerator_KeyValuePair_KeyValuePair_int__int___bool___TypeInfo )
      {
        --v36;
        v37 += 4;
        if ( !v36 )
          goto LABEL_39;
      }
      v38 = v35 + 16LL * *v37 + 312;
    }
    else
    {
LABEL_39:
      v38 = sub_1C41D90(
              v29,
              System_Collections_Generic_IEnumerator_KeyValuePair_KeyValuePair_int__int___bool___TypeInfo,
              0);
    }
    v39 = (*(__int64 (__fastcall **)(__int64, _QWORD))v38)(v29, *(_QWORD *)(v38 + 8));
    if ( !data )
      sub_1C6BC60(v39, v40);
    v41 = v40;
    ServantData = BattleData__getServantData(data, SHIDWORD(v39), 0);
    if ( ServantData )
    {
      if ( !ServantData->fields.isDeadAnime && *(_BYTE *)(v9 + 20) != (v41 != 0) )
        break;
    }
  }
  v16 = v34 ^ 1;
  v43 = *(_QWORD *)v29;
  v44 = *(unsigned __int16 *)(*(_QWORD *)v29 + 302LL);
  if ( *(_WORD *)(*(_QWORD *)v29 + 302LL) )
  {
    v45 = (int *)(*(_QWORD *)(v43 + 176) + 8LL);
    while ( *((System_IDisposable_c **)v45 - 1) != System_IDisposable_TypeInfo )
    {
      --v44;
      v45 += 4;
      if ( !v44 )
        goto LABEL_49;
    }
    v46 = v43 + 16LL * *v45 + 312;
  }
  else
  {
LABEL_49:
    v46 = sub_1C41D90(v29, System_IDisposable_TypeInfo, 0);
  }
  (*(void (__fastcall **)(__int64, _QWORD))v46)(v29, *(_QWORD *)(v46 + 8));
  return v16 & 1;
}


// local variable allocation has failed, the output may be wrong!
bool BattleLogicFunction_ProcListInArgs__DidTriggeredFuncListHaveSpecifyResults(
        BattleLogicFunction_ProcListInArgs_o *this,
        int32_t targetId,
        DataVals_o *baseVals,
        BattleData_o *battleData,
        const MethodInfo *method)
{
  System_Int32_array *TriggeredFuncIndexArray; // x22
  char v7; // w8
  __int64 v8; // x20
  il2cpp_array_size_t max_length; // x8
  BattleLogicFunction_ProcListInArgs_o *v10; // x21
  unsigned __int64 v11; // x19
  int v12; // w27
  int v13; // w8
  unsigned __int64 v14; // x25
  __int64 v15; // x22
  System_Collections_Generic_IEnumerable_TSource__o *funcResults; // x23
  System_Func_KeyValuePair_KeyValuePair_int__int___bool___bool__o *v17; // x24
  System_Collections_Generic_IEnumerable_TSource__o *v18; // x23
  System_Func_KeyValuePair_KeyValuePair_int__int___bool___bool__o *v19; // x24
  _BOOL4 v20; // w0
  BattleLogicFunction_ProcListInArgs_o *v22; // [xsp+0h] [xbp-70h]
  bool isAndCheck; // [xsp+Ch] [xbp-64h] BYREF

  v22 = this;
  if ( (byte_4CB941C & 1) == 0 )
  {
    sub_1C6BA08(&bool___TypeInfo);
    sub_1C6BA08(&Method_System_Linq_Enumerable_Any_KeyValuePair_KeyValuePair_int__int___bool____);
    sub_1C6BA08(&Method_System_Linq_Enumerable_Where_KeyValuePair_KeyValuePair_int__int___bool____);
    sub_1C6BA08(&System_Func_KeyValuePair_KeyValuePair_int__int___bool___bool__TypeInfo);
    sub_1C6BA08(&int___TypeInfo);
    sub_1C6BA08(&System_Math_TypeInfo);
    sub_1C6BA08(&Method_BattleLogicFunction_ProcListInArgs___c__DisplayClass43_0__DidTriggeredFuncListHaveSpecifyResults_b__0__);
    sub_1C6BA08(&Method_BattleLogicFunction_ProcListInArgs___c__DisplayClass43_0__DidTriggeredFuncListHaveSpecifyResults_b__1__);
    this = (BattleLogicFunction_ProcListInArgs_o *)sub_1C6BA08(&BattleLogicFunction_ProcListInArgs___c__DisplayClass43_0_TypeInfo);
    byte_4CB941C = 1;
  }
  isAndCheck = 0;
  if ( !baseVals )
    goto LABEL_34;
  TriggeredFuncIndexArray = DataVals__GetTriggeredFuncIndexArray(baseVals, &isAndCheck, 0);
  this = (BattleLogicFunction_ProcListInArgs_o *)BasicHelper__IsNullOrEmpty(
                                                   (System_Collections_ICollection_o *)TriggeredFuncIndexArray,
                                                   0);
  if ( ((unsigned __int8)this & 1) == 0 )
  {
    if ( TriggeredFuncIndexArray )
    {
      v8 = sub_1C6BAB0(bool___TypeInfo, LODWORD(TriggeredFuncIndexArray->max_length));
      this = (BattleLogicFunction_ProcListInArgs_o *)sub_1C6BAB0(
                                                       int___TypeInfo,
                                                       LODWORD(TriggeredFuncIndexArray->max_length));
      max_length = TriggeredFuncIndexArray->max_length;
      v10 = this;
      if ( (int)max_length >= 1 )
      {
        v11 = 0;
        while ( v11 < (unsigned int)max_length )
        {
          if ( !v8 )
            goto LABEL_34;
          if ( v11 >= *(unsigned int *)(v8 + 24) )
            break;
          v12 = TriggeredFuncIndexArray->m_Items[v11];
          *(_BYTE *)(v8 + 32 + v11) = v12 > 0;
          this = (BattleLogicFunction_ProcListInArgs_o *)System_Math_TypeInfo;
          if ( !System_Math_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(System_Math_TypeInfo);
          if ( !v10 )
            goto LABEL_34;
          if ( v11 >= LODWORD(v10->fields.externalArg) )
            goto LABEL_33;
          if ( v12 >= 0 )
            v13 = v12;
          else
            v13 = -v12;
          *((_DWORD *)&v10->fields._IsTreasureDvc_k__BackingField + v11) = v13 - 1;
          LODWORD(max_length) = TriggeredFuncIndexArray->max_length;
          if ( (__int64)++v11 >= (int)max_length )
            goto LABEL_22;
        }
        goto LABEL_33;
      }
      if ( this )
      {
LABEL_22:
        if ( SLODWORD(v10->fields.externalArg) < 1 )
        {
LABEL_31:
          v7 = isAndCheck;
          return v7 & 1;
        }
        v14 = 0;
        while ( 1 )
        {
          v15 = sub_1C6BC54(BattleLogicFunction_ProcListInArgs___c__DisplayClass43_0_TypeInfo);
          System_Object___ctor((Il2CppObject *)v15, 0);
          if ( v14 >= LODWORD(v10->fields.externalArg) )
            break;
          if ( !v15 )
            goto LABEL_34;
          *(_DWORD *)(v15 + 16) = *((_DWORD *)&v10->fields._IsTreasureDvc_k__BackingField + v14);
          if ( !v8 )
            goto LABEL_34;
          if ( v14 >= *(unsigned int *)(v8 + 24) )
            break;
          *(_BYTE *)(v15 + 20) = *(_BYTE *)(v8 + 32 + v14);
          funcResults = (System_Collections_Generic_IEnumerable_TSource__o *)v22->fields.funcResults;
          v17 = (System_Func_KeyValuePair_KeyValuePair_int__int___bool___bool__o *)sub_1C6BC54(System_Func_KeyValuePair_KeyValuePair_int__int___bool___bool__TypeInfo);
          System_Func_KeyValuePair_KeyValuePair_int__int___bool___bool____ctor(
            v17,
            (Il2CppObject *)v15,
            Method_BattleLogicFunction_ProcListInArgs___c__DisplayClass43_0__DidTriggeredFuncListHaveSpecifyResults_b__0__,
            0);
          v18 = System_Linq_Enumerable__Where_KeyValuePair_KeyValuePair_int__int___bool__(
                  funcResults,
                  (System_Func_TSource__bool__o *)v17,
                  (const MethodInfo_318071C *)Method_System_Linq_Enumerable_Where_KeyValuePair_KeyValuePair_int__int___bool____);
          v19 = (System_Func_KeyValuePair_KeyValuePair_int__int___bool___bool__o *)sub_1C6BC54(System_Func_KeyValuePair_KeyValuePair_int__int___bool___bool__TypeInfo);
          System_Func_KeyValuePair_KeyValuePair_int__int___bool___bool____ctor(
            v19,
            (Il2CppObject *)v15,
            Method_BattleLogicFunction_ProcListInArgs___c__DisplayClass43_0__DidTriggeredFuncListHaveSpecifyResults_b__1__,
            0);
          v20 = System_Linq_Enumerable__Any_KeyValuePair_KeyValuePair_int__int___bool__(
                  v18,
                  (System_Func_TSource__bool__o *)v19,
                  (const MethodInfo_3147410 *)Method_System_Linq_Enumerable_Any_KeyValuePair_KeyValuePair_int__int___bool____);
          v7 = v20 || !isAndCheck;
          if ( !v20 && isAndCheck || (v20 & ~isAndCheck & 1) != 0 )
            return v7 & 1;
          if ( (__int64)++v14 >= SLODWORD(v10->fields.externalArg) )
            goto LABEL_31;
        }
LABEL_33:
        sub_1C6BC68(this);
      }
    }
LABEL_34:
    sub_1C6BC60(this, *(_QWORD *)&targetId);
  }
  v7 = 1;
  return v7 & 1;
}


// local variable allocation has failed, the output may be wrong!
int32_t BattleLogicFunction_ProcListInArgs__GetFamilyBuffLinkageId(
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
    sub_1C6BC60(0, v7);
  return GeneratedFamilyLinkageIdCacher__GetOrGenerateFamilyLinkageId(
           familyLinkageIdCacher,
           linkageIndividuality,
           targetSvtData,
           0);
}


FamilyBuffLinkageIdGenerator_o *BattleLogicFunction_ProcListInArgs__GetFamilyBuffLinkageIdGenerator(
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
    sub_1C6BC60(0, v5);
  return GeneratedFamilyLinkageIdCacher__GetOrCreateFamilyBuffLinkageIdGenerator(
           familyLinkageIdCacher,
           targetSvtData,
           0);
}


bool BattleLogicFunction_ProcListInArgs__MatchSkillType(
        BattleLogicFunction_ProcListInArgs_o *this,
        int32_t type,
        const MethodInfo *method)
{
  struct BattleLogicFunction_FunctionArgument_o *externalArg; // x8

  externalArg = this->fields.externalArg;
  if ( !externalArg )
    sub_1C6BC60(this, type);
  return externalArg->fields.grantSkillType == type;
}


BattleLogicFunction_CheckDuplicateFunction_o *BattleLogicFunction_ProcListInArgs__get_CheckDuplicateFunc(
        BattleLogicFunction_ProcListInArgs_o *this,
        const MethodInfo *method)
{
  struct BattleLogicFunction_FunctionArgument_o *externalArg; // x8

  externalArg = this->fields.externalArg;
  if ( !externalArg )
    sub_1C6BC60(this, method);
  return externalArg->fields.checkDuplicate;
}


int32_t BattleLogicFunction_ProcListInArgs__get_EnemyTargetId(
        BattleLogicFunction_ProcListInArgs_o *this,
        const MethodInfo *method)
{
  return this->fields._EnemyTargetId_k__BackingField;
}


BattleLogicFunction_FunctionArgument_o *BattleLogicFunction_ProcListInArgs__get_ExternalArg(
        BattleLogicFunction_ProcListInArgs_o *this,
        const MethodInfo *method)
{
  return this->fields.externalArg;
}


BattleLogicFunction_FuncSideEffectFunctionArgument_o *BattleLogicFunction_ProcListInArgs__get_FuncSideEffectArg(
        BattleLogicFunction_ProcListInArgs_o *this,
        const MethodInfo *method)
{
  struct BattleLogicFunction_FunctionArgument_o *externalArg; // x8

  externalArg = this->fields.externalArg;
  if ( !externalArg )
    sub_1C6BC60(this, method);
  return externalArg->fields._FuncSideEffectArg_k__BackingField;
}


int32_t BattleLogicFunction_ProcListInArgs__get_GrantSkillType(
        BattleLogicFunction_ProcListInArgs_o *this,
        const MethodInfo *method)
{
  struct BattleLogicFunction_FunctionArgument_o *externalArg; // x8

  externalArg = this->fields.externalArg;
  if ( !externalArg )
    sub_1C6BC60(this, method);
  return externalArg->fields.grantSkillType;
}


bool BattleLogicFunction_ProcListInArgs__get_IsCommandSideEffect(
        BattleLogicFunction_ProcListInArgs_o *this,
        const MethodInfo *method)
{
  struct BattleLogicFunction_FunctionArgument_o *externalArg; // x8

  externalArg = this->fields.externalArg;
  if ( !externalArg )
    sub_1C6BC60(this, method);
  return externalArg->fields.isCommandSideEffect;
}


bool BattleLogicFunction_ProcListInArgs__get_IsPassive(
        BattleLogicFunction_ProcListInArgs_o *this,
        const MethodInfo *method)
{
  struct BattleLogicFunction_FunctionArgument_o *externalArg; // x8

  externalArg = this->fields.externalArg;
  if ( !externalArg )
    sub_1C6BC60(this, method);
  return externalArg->fields.isPassive;
}


bool BattleLogicFunction_ProcListInArgs__get_IsShift(
        BattleLogicFunction_ProcListInArgs_o *this,
        const MethodInfo *method)
{
  struct BattleLogicFunction_FunctionArgument_o *externalArg; // x8

  externalArg = this->fields.externalArg;
  if ( !externalArg )
    sub_1C6BC60(this, method);
  return externalArg->fields.isShift;
}


bool BattleLogicFunction_ProcListInArgs__get_IsShowBattlePointEffect(
        BattleLogicFunction_ProcListInArgs_o *this,
        const MethodInfo *method)
{
  struct BattleLogicFunction_FunctionArgument_o *externalArg; // x8

  externalArg = this->fields.externalArg;
  if ( !externalArg )
    sub_1C6BC60(this, method);
  return externalArg->fields.isShowBattlePointEffect;
}


bool BattleLogicFunction_ProcListInArgs__get_IsTreasureDvc(
        BattleLogicFunction_ProcListInArgs_o *this,
        const MethodInfo *method)
{
  return this->fields._IsTreasureDvc_k__BackingField;
}


BattleActionData_BuffData_o *BattleLogicFunction_ProcListInArgs__get_ParentActBuffData(
        BattleLogicFunction_ProcListInArgs_o *this,
        const MethodInfo *method)
{
  struct BattleLogicFunction_FunctionArgument_o *externalArg; // x8

  externalArg = this->fields.externalArg;
  if ( !externalArg )
    sub_1C6BC60(this, method);
  return externalArg->fields._ParentActBuffData_k__BackingField;
}


int32_t BattleLogicFunction_ProcListInArgs__get_SkillId(
        BattleLogicFunction_ProcListInArgs_o *this,
        const MethodInfo *method)
{
  struct BattleLogicFunction_FunctionArgument_o *externalArg; // x8

  externalArg = this->fields.externalArg;
  if ( !externalArg )
    sub_1C6BC60(this, method);
  return externalArg->fields.skillId;
}


GeneratedFamilyLinkageIdCacher_o *BattleLogicFunction_ProcListInArgs__get_familyLinkageIdCacher(
        BattleLogicFunction_ProcListInArgs_o *this,
        const MethodInfo *method)
{
  GeneratedFamilyLinkageIdCacher_o *result; // x0
  CGThumbnailListItem_o *p_familyLinkageIdCacher; // x19
  GeneratedFamilyLinkageIdCacher_o *familyLinkageIdCacher; // t1
  GeneratedFamilyLinkageIdCacher_o *v6; // x20
  int32_t v7; // w2
  const MethodInfo *v8; // x3

  if ( (byte_4CB9418 & 1) == 0 )
  {
    sub_1C6BA08(&GeneratedFamilyLinkageIdCacher_TypeInfo);
    byte_4CB9418 = 1;
  }
  familyLinkageIdCacher = this->fields._familyLinkageIdCacher;
  p_familyLinkageIdCacher = (CGThumbnailListItem_o *)&this->fields._familyLinkageIdCacher;
  result = familyLinkageIdCacher;
  if ( !familyLinkageIdCacher )
  {
    v6 = (GeneratedFamilyLinkageIdCacher_o *)sub_1C6BC54(GeneratedFamilyLinkageIdCacher_TypeInfo);
    GeneratedFamilyLinkageIdCacher___ctor(v6, 0);
    p_familyLinkageIdCacher->klass = (CGThumbnailListItem_c *)v6;
    sub_1C6B9AC(p_familyLinkageIdCacher, (int32_t)v6, v7, v8);
    return (GeneratedFamilyLinkageIdCacher_o *)p_familyLinkageIdCacher->klass;
  }
  return result;
}


BattleLogicFunctionProcess_FunctionUnitCheck_array *BattleLogicFunction_ProcListInArgs__get_funcUnitArray(
        BattleLogicFunction_ProcListInArgs_o *this,
        const MethodInfo *method)
{
  return this->fields._funcUnitArray_k__BackingField;
}


void BattleLogicFunction_ProcListInArgs__initFunctionUnitCheck(
        BattleLogicFunction_ProcListInArgs_o *this,
        BattleLogicFunction_o *logic,
        System_Int32_array *functionIds,
        DataVals_array *dataValsList,
        int32_t *funcIndex,
        BattleActionData_o *actionData,
        const MethodInfo *method)
{
  BattleLogicFunction_ProcListInArgs_o *v11; // x25
  int max_length; // w26
  __int64 v13; // x0
  BattleLogicFunctionProcess_FunctionUnitCheck_array **p_funcUnitArray_k__BackingField; // x19
  int32_t v15; // w2
  const MethodInfo *v16; // x3
  struct BattleLogicFunctionProcess_FunctionUnitCheck_array *funcUnitArray_k__BackingField; // x28
  unsigned int v18; // w29
  BattleLogicFunctionProcess_FunctionUnitCheck_o *v19; // x27
  const MethodInfo *v20; // x3
  int32_t v21; // w2
  const MethodInfo *v22; // x3
  Il2CppClass **v23; // x0
  const MethodInfo *v24; // x5
  BattleLogicFunctionProcess_FunctionUnitCheck_array *v25; // x8
  int v26; // w8
  int v27; // w22
  BattleLogicFunctionProcess_FunctionUnitCheck_o *v28; // x21
  int v29; // w23
  BattleLogicFunctionProcess_FunctionUnitCheck_o *v30; // x20
  const MethodInfo *v31; // x2
  __int64 v32; // x0

  v11 = this;
  if ( (byte_4CB941E & 1) == 0 )
  {
    sub_1C6BA08(&BattleLogicFunctionProcess_FunctionUnitCheck___TypeInfo);
    this = (BattleLogicFunction_ProcListInArgs_o *)sub_1C6BA08(&BattleLogicFunctionProcess_FunctionUnitCheck_TypeInfo);
    byte_4CB941E = 1;
  }
  if ( !dataValsList )
    goto LABEL_36;
  max_length = dataValsList->max_length;
  v13 = sub_1C6BAB0(BattleLogicFunctionProcess_FunctionUnitCheck___TypeInfo, (unsigned int)max_length);
  v11->fields._funcUnitArray_k__BackingField = (struct BattleLogicFunctionProcess_FunctionUnitCheck_array *)v13;
  p_funcUnitArray_k__BackingField = &v11->fields._funcUnitArray_k__BackingField;
  sub_1C6B9AC((CGThumbnailListItem_o *)&v11->fields._funcUnitArray_k__BackingField, v13, v15, v16);
  funcUnitArray_k__BackingField = v11->fields._funcUnitArray_k__BackingField;
  if ( max_length >= 1 )
  {
    v18 = 0;
    while ( 1 )
    {
      v19 = (BattleLogicFunctionProcess_FunctionUnitCheck_o *)sub_1C6BC54(BattleLogicFunctionProcess_FunctionUnitCheck_TypeInfo);
      BattleLogicFunctionProcess_FunctionUnitCheck___ctor(v19, logic, v11, v20);
      if ( !funcUnitArray_k__BackingField )
        break;
      if ( v19 )
      {
        this = (BattleLogicFunction_ProcListInArgs_o *)sub_1C6BB44(
                                                         v19,
                                                         funcUnitArray_k__BackingField->obj.klass->_1.element_class);
        if ( !this )
        {
          v32 = sub_1C6BC84(0);
          sub_1C6BB30(v32, 0);
        }
      }
      if ( v18 >= LODWORD(funcUnitArray_k__BackingField->max_length) )
        goto LABEL_37;
      v23 = &funcUnitArray_k__BackingField->obj.klass + (int)v18;
      v23[4] = (Il2CppClass *)v19;
      sub_1C6B9AC((CGThumbnailListItem_o *)(v23 + 4), (int32_t)v19, v21, v22);
      v25 = *p_funcUnitArray_k__BackingField;
      if ( !*p_funcUnitArray_k__BackingField )
        break;
      if ( v18 >= LODWORD(v25->max_length) )
        goto LABEL_37;
      if ( !functionIds )
        break;
      if ( v18 >= LODWORD(functionIds->max_length) || v18 >= LODWORD(dataValsList->max_length) )
LABEL_37:
        sub_1C6BC68(this);
      this = (BattleLogicFunction_ProcListInArgs_o *)v25->m_Items[v18];
      if ( !this )
        break;
      BattleLogicFunctionProcess_FunctionUnitCheck__setDataVals(
        (BattleLogicFunctionProcess_FunctionUnitCheck_o *)this,
        funcIndex,
        functionIds->m_Items[v18],
        dataValsList->m_Items[v18],
        actionData,
        v24);
      ++v18;
      ++*funcIndex;
      funcUnitArray_k__BackingField = *p_funcUnitArray_k__BackingField;
      if ( max_length == v18 )
        goto LABEL_17;
    }
LABEL_36:
    sub_1C6BC60(this, logic);
  }
LABEL_17:
  if ( !funcUnitArray_k__BackingField )
    goto LABEL_36;
  v26 = funcUnitArray_k__BackingField->max_length;
  if ( v26 >= 1 )
  {
    v27 = 0;
    v28 = 0;
    v29 = -1;
    do
    {
      if ( v27 >= (unsigned int)v26 )
        goto LABEL_37;
      v30 = funcUnitArray_k__BackingField->m_Items[v27];
      if ( !v30 )
        goto LABEL_36;
      this = (BattleLogicFunction_ProcListInArgs_o *)v30->fields._dataVals_k__BackingField;
      if ( !this )
        goto LABEL_36;
      if ( DataVals__IsAddIndividualty((DataVals_o *)this, 0) )
        goto LABEL_26;
      this = (BattleLogicFunction_ProcListInArgs_o *)v30->fields._dataVals_k__BackingField;
      if ( !this )
        goto LABEL_36;
      if ( DataVals__IsAddLinkageTargetIndividualty((DataVals_o *)this, 0) )
LABEL_26:
        BattleLogicFunctionProcess_FunctionUnitCheck__setLinkFunction(v30, *p_funcUnitArray_k__BackingField, v31);
      this = (BattleLogicFunction_ProcListInArgs_o *)v30->fields._dataVals_k__BackingField;
      if ( !this )
        goto LABEL_36;
      this = (BattleLogicFunction_ProcListInArgs_o *)DataVals__GetFunctionTriggerStarNum((DataVals_o *)this, 0);
      if ( ((unsigned int)this & 0x80000000) == 0 && (v28 == 0 || (int)this < v29) )
      {
        v29 = (int)this;
        v28 = v30;
      }
      v26 = funcUnitArray_k__BackingField->max_length;
      ++v27;
    }
    while ( v27 < v26 );
    if ( v28 )
      v28->fields.isLowestStarFunction = 1;
  }
}


bool BattleLogicFunction_ProcListInArgs__isPrevFuncSuccess(
        BattleLogicFunction_ProcListInArgs_o *this,
        int32_t targetId,
        int32_t index,
        const MethodInfo *method)
{
  System_Collections_Generic_KeyValuePair_int__int__o p_key; // x0
  __int64 v8; // x1
  System_Collections_Generic_Dictionary_KeyValuePair_int__int___bool__o *funcResults; // x0
  System_Collections_Generic_KeyValuePair_int__int__o v10; // x1
  System_Collections_Generic_KeyValuePair_int__int__o v11; // x1
  System_Collections_Generic_KeyValuePair_int__int__o key; // [xsp+8h] [xbp-38h] BYREF

  if ( (byte_4CB941A & 1) == 0 )
  {
    sub_1C6BA08(&Method_System_Collections_Generic_Dictionary_KeyValuePair_int__int___bool__ContainsKey__);
    sub_1C6BA08(&Method_System_Collections_Generic_Dictionary_KeyValuePair_int__int___bool__get_Item__);
    sub_1C6BA08(&Method_System_Collections_Generic_KeyValuePair_int__int___ctor__);
    byte_4CB941A = 1;
  }
  p_key = (System_Collections_Generic_KeyValuePair_int__int__o)&key;
  key = 0;
  System_Collections_Generic_KeyValuePair_int__int____ctor(
    p_key,
    index - 1,
    targetId,
    (const MethodInfo_3736CEC *)Method_System_Collections_Generic_KeyValuePair_int__int___ctor__);
  funcResults = this->fields.funcResults;
  if ( !funcResults )
    goto LABEL_9;
  v10 = key;
  if ( !System_Collections_Generic_Dictionary_KeyValuePair_int__int___bool___ContainsKey(
          funcResults,
          v10,
          (const MethodInfo_340ABE8 *)Method_System_Collections_Generic_Dictionary_KeyValuePair_int__int___bool__ContainsKey__) )
    return 0;
  funcResults = this->fields.funcResults;
  if ( !funcResults )
LABEL_9:
    sub_1C6BC60(funcResults, v8);
  v11 = key;
  return System_Collections_Generic_Dictionary_KeyValuePair_int__int___bool___get_Item(
           funcResults,
           v11,
           (const MethodInfo_340A934 *)Method_System_Collections_Generic_Dictionary_KeyValuePair_int__int___bool__get_Item__);
}


void BattleLogicFunction_ProcListInArgs__setFuncResult(
        BattleLogicFunction_ProcListInArgs_o *this,
        int32_t targetId,
        bool result,
        int32_t index,
        const MethodInfo *method)
{
  System_Collections_Generic_KeyValuePair_int__int__o p_key; // x0
  __int64 v10; // x1
  System_Collections_Generic_Dictionary_KeyValuePair_int__int___bool__o *funcResults; // x0
  System_Collections_Generic_KeyValuePair_int__int__o v12; // x1
  System_Collections_Generic_KeyValuePair_int__int__o key; // [xsp+8h] [xbp-38h] BYREF

  if ( (byte_4CB941D & 1) == 0 )
  {
    sub_1C6BA08(&Method_System_Collections_Generic_Dictionary_KeyValuePair_int__int___bool__set_Item__);
    sub_1C6BA08(&Method_System_Collections_Generic_KeyValuePair_int__int___ctor__);
    byte_4CB941D = 1;
  }
  p_key = (System_Collections_Generic_KeyValuePair_int__int__o)&key;
  key = 0;
  System_Collections_Generic_KeyValuePair_int__int____ctor(
    p_key,
    index,
    targetId,
    (const MethodInfo_3736CEC *)Method_System_Collections_Generic_KeyValuePair_int__int___ctor__);
  funcResults = this->fields.funcResults;
  if ( !funcResults )
    sub_1C6BC60(0, v10);
  v12 = key;
  System_Collections_Generic_Dictionary_KeyValuePair_int__int___bool___set_Item(
    funcResults,
    v12,
    result,
    (const MethodInfo_340A9C8 *)Method_System_Collections_Generic_Dictionary_KeyValuePair_int__int___bool__set_Item__);
}


void BattleLogicFunction_ProcListInArgs__set_IsCommandSideEffect(
        BattleLogicFunction_ProcListInArgs_o *this,
        bool value,
        const MethodInfo *method)
{
  struct BattleLogicFunction_FunctionArgument_o *externalArg; // x8

  externalArg = this->fields.externalArg;
  if ( !externalArg )
    sub_1C6BC60(this, value);
  externalArg->fields.isCommandSideEffect = value;
}


void BattleLogicFunction_ProcListInArgs__set_IsPassive(
        BattleLogicFunction_ProcListInArgs_o *this,
        bool value,
        const MethodInfo *method)
{
  struct BattleLogicFunction_FunctionArgument_o *externalArg; // x8

  externalArg = this->fields.externalArg;
  if ( !externalArg )
    sub_1C6BC60(this, value);
  externalArg->fields.isPassive = value;
}


void BattleLogicFunction_ProcListInArgs__set_IsShift(
        BattleLogicFunction_ProcListInArgs_o *this,
        bool value,
        const MethodInfo *method)
{
  struct BattleLogicFunction_FunctionArgument_o *externalArg; // x8

  externalArg = this->fields.externalArg;
  if ( !externalArg )
    sub_1C6BC60(this, value);
  externalArg->fields.isShift = value;
}


void BattleLogicFunction_ProcListInArgs__set_IsTreasureDvc(
        BattleLogicFunction_ProcListInArgs_o *this,
        bool value,
        const MethodInfo *method)
{
  this->fields._IsTreasureDvc_k__BackingField = value;
}


void BattleLogicFunction_ProcListInArgs__set_SkillId(
        BattleLogicFunction_ProcListInArgs_o *this,
        int32_t value,
        const MethodInfo *method)
{
  struct BattleLogicFunction_FunctionArgument_o *externalArg; // x8

  externalArg = this->fields.externalArg;
  if ( !externalArg )
    sub_1C6BC60(this, value);
  externalArg->fields.skillId = value;
}


void BattleLogicFunction_ProcListInArgs__set_funcUnitArray(
        BattleLogicFunction_ProcListInArgs_o *this,
        BattleLogicFunctionProcess_FunctionUnitCheck_array *value,
        const MethodInfo *method)
{
  const MethodInfo *v3; // x3

  this->fields._funcUnitArray_k__BackingField = value;
  sub_1C6B9AC(
    (CGThumbnailListItem_o *)&this->fields._funcUnitArray_k__BackingField,
    (int32_t)value,
    (int32_t)method,
    v3);
}


void BattleLogicFunction_ProcListInArgs___c__DisplayClass42_0___ctor(
        BattleLogicFunction_ProcListInArgs___c__DisplayClass42_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


bool BattleLogicFunction_ProcListInArgs___c__DisplayClass42_0___DidTriggeredFuncHaveSpecifyResults_b__0(
        BattleLogicFunction_ProcListInArgs___c__DisplayClass42_0_o *this,
        System_Collections_Generic_KeyValuePair_KeyValuePair_int__int___bool__o x,
        const MethodInfo *method)
{
  int32_t key; // w19

  key = x.fields.key.fields.key;
  if ( (byte_4CB9420 & 1) == 0 )
  {
    sub_1C6BA08(&Method_System_Collections_Generic_KeyValuePair_KeyValuePair_int__int___bool__get_Key__);
    sub_1C6BA08(&Method_System_Collections_Generic_KeyValuePair_int__int__get_Key__);
    byte_4CB9420 = 1;
  }
  return this->fields.funcIndex == key;
}


bool BattleLogicFunction_ProcListInArgs___c__DisplayClass42_0___DidTriggeredFuncHaveSpecifyResults_b__1(
        BattleLogicFunction_ProcListInArgs___c__DisplayClass42_0_o *this,
        System_Collections_Generic_KeyValuePair_KeyValuePair_int__int___bool__o x,
        const MethodInfo *method)
{
  bool value; // w19

  value = x.fields.value;
  if ( (byte_4CB9421 & 1) == 0 )
  {
    sub_1C6BA08(&Method_System_Collections_Generic_KeyValuePair_KeyValuePair_int__int___bool__get_Value__);
    byte_4CB9421 = 1;
  }
  return this->fields.isTrue == value;
}


bool BattleLogicFunction_ProcListInArgs___c__DisplayClass42_0___DidTriggeredFuncHaveSpecifyResults_b__2(
        BattleLogicFunction_ProcListInArgs___c__DisplayClass42_0_o *this,
        System_Collections_Generic_KeyValuePair_KeyValuePair_int__int___bool__o x,
        const MethodInfo *method)
{
  int32_t key; // w19

  key = x.fields.key.fields.key;
  if ( (byte_4CB941F & 1) == 0 )
  {
    sub_1C6BA08(&Method_System_Collections_Generic_KeyValuePair_KeyValuePair_int__int___bool__get_Key__);
    sub_1C6BA08(&Method_System_Collections_Generic_KeyValuePair_int__int__get_Key__);
    byte_4CB941F = 1;
  }
  return this->fields.funcIndex == key;
}


void BattleLogicFunction_ProcListInArgs___c__DisplayClass43_0___ctor(
        BattleLogicFunction_ProcListInArgs___c__DisplayClass43_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


bool BattleLogicFunction_ProcListInArgs___c__DisplayClass43_0___DidTriggeredFuncListHaveSpecifyResults_b__0(
        BattleLogicFunction_ProcListInArgs___c__DisplayClass43_0_o *this,
        System_Collections_Generic_KeyValuePair_KeyValuePair_int__int___bool__o x,
        const MethodInfo *method)
{
  int32_t key; // w19

  key = x.fields.key.fields.key;
  if ( (byte_4CB9422 & 1) == 0 )
  {
    sub_1C6BA08(&Method_System_Collections_Generic_KeyValuePair_KeyValuePair_int__int___bool__get_Key__);
    sub_1C6BA08(&Method_System_Collections_Generic_KeyValuePair_int__int__get_Key__);
    byte_4CB9422 = 1;
  }
  return this->fields.funcIndex == key;
}


bool BattleLogicFunction_ProcListInArgs___c__DisplayClass43_0___DidTriggeredFuncListHaveSpecifyResults_b__1(
        BattleLogicFunction_ProcListInArgs___c__DisplayClass43_0_o *this,
        System_Collections_Generic_KeyValuePair_KeyValuePair_int__int___bool__o x,
        const MethodInfo *method)
{
  bool value; // w19

  value = x.fields.value;
  if ( (byte_4CB9423 & 1) == 0 )
  {
    sub_1C6BA08(&Method_System_Collections_Generic_KeyValuePair_KeyValuePair_int__int___bool__get_Value__);
    byte_4CB9423 = 1;
  }
  return this->fields.condition == value;
}


void BattleLogicFunction_SideEffectMakeArgument___ctor(
        BattleLogicFunction_SideEffectMakeArgument_o *this,
        const MethodInfo *method)
{
  int32_t v2; // w2
  const MethodInfo *v3; // x3
  long double inited; // q0
  _QWORD *v6; // x20
  __int64 v7; // x8
  __int64 v8; // x0
  __int64 v9; // x0
  struct BattleActionData_SideEffectData_array **v10; // x8
  struct BattleActionData_SideEffectData_array *v11; // x1

  if ( (byte_4CB9426 & 1) == 0 )
  {
    sub_1C6BA08(&Method_System_Array_Empty_BattleActionData_SideEffectData___);
    byte_4CB9426 = 1;
  }
  v6 = Method_System_Array_Empty_BattleActionData_SideEffectData___;
  v7 = *((_QWORD *)Method_System_Array_Empty_BattleActionData_SideEffectData___ + 7);
  if ( !v7 )
  {
    sub_1C41AF8(Method_System_Array_Empty_BattleActionData_SideEffectData___);
    v7 = v6[7];
  }
  v8 = *(_QWORD *)(v7 + 16);
  if ( (*(_BYTE *)(v8 + 309) & 1) == 0 )
    v8 = sub_1C41A9C(inited);
  if ( !*(_DWORD *)(v8 + 224) )
    inited = j_il2cpp_runtime_class_init_0(v8);
  v9 = *(_QWORD *)(v6[7] + 16LL);
  if ( (*(_BYTE *)(v9 + 309) & 1) == 0 )
    v9 = sub_1C41A9C(inited);
  v10 = *(struct BattleActionData_SideEffectData_array ***)(v9 + 184);
  v11 = *v10;
  this->fields._SideEffectList_k__BackingField = *v10;
  sub_1C6B9AC((CGThumbnailListItem_o *)&this->fields, (int32_t)v11, v2, v3);
  System_Object___ctor((Il2CppObject *)this, 0);
}


BattleLogicFunction_SideEffectMakeArgument_o *BattleLogicFunction_SideEffectMakeArgument__Init(
        BattleLogicFunction_SideEffectMakeArgument_o *this,
        System_Int32_array *targetIds,
        const MethodInfo *method)
{
  __int64 v5; // x21
  __int64 v6; // x22
  __int64 v7; // x0
  __int64 v8; // x1
  int32_t v9; // w2
  const MethodInfo *v10; // x3
  System_Func_T__TResult__o *v11; // x22
  System_Collections_Generic_IEnumerable_TSource__o *v12; // x0
  System_Object_array *v13; // x0
  int32_t v14; // w2
  const MethodInfo *v15; // x3

  if ( (byte_4CB9424 & 1) == 0 )
  {
    sub_1C6BA08(&BuffList_ACTION___TypeInfo);
    sub_1C6BA08(&Method_System_Linq_Enumerable_Select_int__BattleActionData_SideEffectData___);
    sub_1C6BA08(&Method_System_Linq_Enumerable_ToArray_BattleActionData_SideEffectData___);
    sub_1C6BA08(&System_Func_int__BattleActionData_SideEffectData__TypeInfo);
    sub_1C6BA08(&Method_BattleLogicFunction_SideEffectMakeArgument___c__DisplayClass9_0__Init_b__0__);
    sub_1C6BA08(&BattleLogicFunction_SideEffectMakeArgument___c__DisplayClass9_0_TypeInfo);
    byte_4CB9424 = 1;
  }
  v5 = sub_1C6BC54(BattleLogicFunction_SideEffectMakeArgument___c__DisplayClass9_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v5, 0);
  v6 = sub_1C6BAB0(BuffList_ACTION___TypeInfo, 1);
  v7 = ((__int64 (__fastcall *)(BattleLogicFunction_SideEffectMakeArgument_o *, const MethodInfo *))this->klass->vtable._4_unknown.methodPtr)(
         this,
         this->klass->vtable._4_unknown.method);
  if ( !v6 )
    goto LABEL_7;
  if ( !*(_DWORD *)(v6 + 24) )
    sub_1C6BC68(v7);
  *(_DWORD *)(v6 + 32) = v7;
  if ( !v5 )
LABEL_7:
    sub_1C6BC60(v7, v8);
  *(_QWORD *)(v5 + 16) = v6;
  sub_1C6B9AC((CGThumbnailListItem_o *)(v5 + 16), v6, v9, v10);
  v11 = (System_Func_T__TResult__o *)sub_1C6BC54(System_Func_int__BattleActionData_SideEffectData__TypeInfo);
  System_Func_int__object____ctor(
    v11,
    (Il2CppObject *)v5,
    Method_BattleLogicFunction_SideEffectMakeArgument___c__DisplayClass9_0__Init_b__0__,
    0);
  v12 = (System_Collections_Generic_IEnumerable_TSource__o *)System_Linq_Enumerable__Select_int__object_(
                                                               (System_Collections_Generic_IEnumerable_TSource__o *)targetIds,
                                                               (System_Func_TSource__TResult__o *)v11,
                                                               (const MethodInfo_316EE54 *)Method_System_Linq_Enumerable_Select_int__BattleActionData_SideEffectData___);
  v13 = System_Linq_Enumerable__ToArray_object_(
          v12,
          (const MethodInfo_317B248 *)Method_System_Linq_Enumerable_ToArray_BattleActionData_SideEffectData___);
  this->fields._SideEffectList_k__BackingField = (struct BattleActionData_SideEffectData_array *)v13;
  sub_1C6B9AC((CGThumbnailListItem_o *)&this->fields, (int32_t)v13, v14, v15);
  return this;
}


int32_t BattleLogicFunction_SideEffectMakeArgument__MakeCheckKey(
        BattleLogicFunction_SideEffectMakeArgument_o *this,
        int32_t actionUniqueID,
        const MethodInfo *method)
{
  return ((__int64 (__fastcall *)(BattleLogicFunction_SideEffectMakeArgument_o *, const MethodInfo *, const MethodInfo *))this->klass->vtable._4_unknown.methodPtr)(
           this,
           this->klass->vtable._4_unknown.method,
           method)
       + 10000 * actionUniqueID;
}


BattleLogicFunction_SideEffectMakeArgument_o *BattleLogicFunction_SideEffectMakeArgument__SortMainTargetToFirst(
        BattleLogicFunction_SideEffectMakeArgument_o *this,
        int32_t mainTargetId,
        const MethodInfo *method)
{
  __int64 v5; // x21
  __int64 v6; // x0
  __int64 v7; // x1
  System_Collections_Generic_IEnumerable_TSource__o *SideEffectList_k__BackingField; // x22
  System_Func_object__bool__o *v9; // x23
  System_Collections_Generic_IEnumerable_TSource__o *v10; // x0
  System_Collections_Generic_IEnumerable_TSource__o *v11; // x22
  System_Collections_Generic_IEnumerable_TSource__o *v12; // x23
  System_Func_object__bool__o *v13; // x24
  System_Collections_Generic_IEnumerable_TSource__o *v14; // x0
  System_Collections_Generic_IEnumerable_TSource__o *v15; // x0
  System_Object_array *v16; // x0
  int32_t v17; // w2
  const MethodInfo *v18; // x3

  if ( (byte_4CB9425 & 1) == 0 )
  {
    sub_1C6BA08(&Method_System_Linq_Enumerable_Concat_BattleActionData_SideEffectData___);
    sub_1C6BA08(&Method_System_Linq_Enumerable_ToArray_BattleActionData_SideEffectData___);
    sub_1C6BA08(&Method_System_Linq_Enumerable_Where_BattleActionData_SideEffectData___);
    sub_1C6BA08(&System_Func_BattleActionData_SideEffectData__bool__TypeInfo);
    sub_1C6BA08(&Method_BattleLogicFunction_SideEffectMakeArgument___c__DisplayClass11_0__SortMainTargetToFirst_b__0__);
    sub_1C6BA08(&Method_BattleLogicFunction_SideEffectMakeArgument___c__DisplayClass11_0__SortMainTargetToFirst_b__1__);
    sub_1C6BA08(&BattleLogicFunction_SideEffectMakeArgument___c__DisplayClass11_0_TypeInfo);
    byte_4CB9425 = 1;
  }
  v5 = sub_1C6BC54(BattleLogicFunction_SideEffectMakeArgument___c__DisplayClass11_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v5, 0);
  if ( !v5 )
    sub_1C6BC60(v6, v7);
  *(_DWORD *)(v5 + 16) = mainTargetId;
  SideEffectList_k__BackingField = (System_Collections_Generic_IEnumerable_TSource__o *)this->fields._SideEffectList_k__BackingField;
  v9 = (System_Func_object__bool__o *)sub_1C6BC54(System_Func_BattleActionData_SideEffectData__bool__TypeInfo);
  System_Func_object__bool____ctor(
    v9,
    (Il2CppObject *)v5,
    Method_BattleLogicFunction_SideEffectMakeArgument___c__DisplayClass11_0__SortMainTargetToFirst_b__0__,
    0);
  v10 = System_Linq_Enumerable__Where_object_(
          SideEffectList_k__BackingField,
          (System_Func_TSource__bool__o *)v9,
          (const MethodInfo_3182364 *)Method_System_Linq_Enumerable_Where_BattleActionData_SideEffectData___);
  v11 = (System_Collections_Generic_IEnumerable_TSource__o *)this->fields._SideEffectList_k__BackingField;
  v12 = v10;
  v13 = (System_Func_object__bool__o *)sub_1C6BC54(System_Func_BattleActionData_SideEffectData__bool__TypeInfo);
  System_Func_object__bool____ctor(
    v13,
    (Il2CppObject *)v5,
    Method_BattleLogicFunction_SideEffectMakeArgument___c__DisplayClass11_0__SortMainTargetToFirst_b__1__,
    0);
  v14 = System_Linq_Enumerable__Where_object_(
          v11,
          (System_Func_TSource__bool__o *)v13,
          (const MethodInfo_3182364 *)Method_System_Linq_Enumerable_Where_BattleActionData_SideEffectData___);
  v15 = System_Linq_Enumerable__Concat_object_(
          v12,
          v14,
          (const MethodInfo_3157E4C *)Method_System_Linq_Enumerable_Concat_BattleActionData_SideEffectData___);
  v16 = System_Linq_Enumerable__ToArray_object_(
          v15,
          (const MethodInfo_317B248 *)Method_System_Linq_Enumerable_ToArray_BattleActionData_SideEffectData___);
  this->fields._SideEffectList_k__BackingField = (struct BattleActionData_SideEffectData_array *)v16;
  sub_1C6B9AC((CGThumbnailListItem_o *)&this->fields, (int32_t)v16, v17, v18);
  return this;
}


BattleActionData_SideEffectData_array *BattleLogicFunction_SideEffectMakeArgument__get_SideEffectList(
        BattleLogicFunction_SideEffectMakeArgument_o *this,
        const MethodInfo *method)
{
  return this->fields._SideEffectList_k__BackingField;
}


void BattleLogicFunction_SideEffectMakeArgument__set_SideEffectList(
        BattleLogicFunction_SideEffectMakeArgument_o *this,
        BattleActionData_SideEffectData_array *value,
        const MethodInfo *method)
{
  const MethodInfo *v3; // x3

  this->fields._SideEffectList_k__BackingField = value;
  sub_1C6B9AC((CGThumbnailListItem_o *)&this->fields, (int32_t)value, (int32_t)method, v3);
}


void BattleLogicFunction_SideEffectMakeArgument___c__DisplayClass11_0___ctor(
        BattleLogicFunction_SideEffectMakeArgument___c__DisplayClass11_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


bool BattleLogicFunction_SideEffectMakeArgument___c__DisplayClass11_0___SortMainTargetToFirst_b__0(
        BattleLogicFunction_SideEffectMakeArgument___c__DisplayClass11_0_o *this,
        BattleActionData_SideEffectData_o *x,
        const MethodInfo *method)
{
  if ( !x )
    sub_1C6BC60(this, 0);
  return x->fields.targetId == this->fields.mainTargetId;
}


bool BattleLogicFunction_SideEffectMakeArgument___c__DisplayClass11_0___SortMainTargetToFirst_b__1(
        BattleLogicFunction_SideEffectMakeArgument___c__DisplayClass11_0_o *this,
        BattleActionData_SideEffectData_o *x,
        const MethodInfo *method)
{
  if ( !x )
    sub_1C6BC60(this, 0);
  return x->fields.targetId != this->fields.mainTargetId;
}


void BattleLogicFunction_SideEffectMakeArgument___c__DisplayClass9_0___ctor(
        BattleLogicFunction_SideEffectMakeArgument___c__DisplayClass9_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


BattleActionData_SideEffectData_o *BattleLogicFunction_SideEffectMakeArgument___c__DisplayClass9_0___Init_b__0(
        BattleLogicFunction_SideEffectMakeArgument___c__DisplayClass9_0_o *this,
        int32_t id,
        const MethodInfo *method)
{
  BuffList_ACTION_array *buffActs; // x20
  BattleActionData_SideEffectData_o *v6; // x21

  if ( (byte_4CB9427 & 1) == 0 )
  {
    sub_1C6BA08(&BattleActionData_SideEffectData_TypeInfo);
    byte_4CB9427 = 1;
  }
  buffActs = this->fields.buffActs;
  v6 = (BattleActionData_SideEffectData_o *)sub_1C6BC54(BattleActionData_SideEffectData_TypeInfo);
  BattleActionData_SideEffectData___ctor(v6, id, buffActs, 0);
  return v6;
}


BuffList_ACTION_array *BattleLogicFunction_SkillSideEffectFunctionArgument__GetActArray(
        BattleLogicFunction_SkillSideEffectFunctionArgument_o *this,
        bool isMainOnly,
        const MethodInfo *method)
{
  BuffList_ACTION_array *result; // x0
  __int64 v5; // x1
  int max_length; // w8
  int32_t v7; // w8

  if ( (byte_4CB9410 & 1) == 0 )
  {
    sub_1C6BA08(&BuffList_ACTION___TypeInfo);
    byte_4CB9410 = 1;
  }
  result = (BuffList_ACTION_array *)sub_1C6BAB0(BuffList_ACTION___TypeInfo, 1);
  if ( !result )
    sub_1C6BC60(0, v5);
  max_length = result->max_length;
  if ( !isMainOnly )
  {
    if ( max_length )
    {
      v7 = 122;
      goto LABEL_9;
    }
LABEL_11:
    sub_1C6BC68(result);
  }
  if ( !max_length )
    goto LABEL_11;
  v7 = 123;
LABEL_9:
  result->m_Items[0] = v7;
  return result;
}


BuffList_ACTION_array *BattleLogicFunction_TreasureDeviceSideEffectFunctionArgument__GetActArray(
        BattleLogicFunction_TreasureDeviceSideEffectFunctionArgument_o *this,
        bool isMainOnly,
        const MethodInfo *method)
{
  BuffList_ACTION_array *result; // x0
  __int64 v5; // x1
  int max_length; // w8
  int32_t v7; // w8

  if ( (byte_4CB9411 & 1) == 0 )
  {
    sub_1C6BA08(&BuffList_ACTION___TypeInfo);
    byte_4CB9411 = 1;
  }
  result = (BuffList_ACTION_array *)sub_1C6BAB0(BuffList_ACTION___TypeInfo, 1);
  if ( !result )
    sub_1C6BC60(0, v5);
  max_length = result->max_length;
  if ( !isMainOnly )
  {
    if ( max_length )
    {
      v7 = 124;
      goto LABEL_9;
    }
LABEL_11:
    sub_1C6BC68(result);
  }
  if ( !max_length )
    goto LABEL_11;
  v7 = 125;
LABEL_9:
  result->m_Items[0] = v7;
  return result;
}


// local variable allocation has failed, the output may be wrong!
void BattleLogicFunction_WarBoardFunctionArgument___ctor(
        BattleLogicFunction_WarBoardFunctionArgument_o *this,
        int32_t targetId,
        const MethodInfo *method)
{
  __int64 v5; // x0
  __int64 v6; // x1
  int32_t v7; // w2
  const MethodInfo *v8; // x3

  if ( (byte_4CB9412 & 1) == 0 )
  {
    sub_1C6BA08(&int___TypeInfo);
    byte_4CB9412 = 1;
  }
  BattleLogicFunction_FunctionArgument___ctor(
    (BattleLogicFunction_FunctionArgument_o *)this,
    *(const MethodInfo **)&targetId);
  v5 = sub_1C6BAB0(int___TypeInfo, 1);
  if ( !v5 )
    sub_1C6BC60(0, v6);
  if ( !*(_DWORD *)(v5 + 24) )
    sub_1C6BC68(v5);
  *(_DWORD *)(v5 + 32) = targetId;
  this->fields.fixTargetIds = (struct System_Int32_array *)v5;
  sub_1C6B9AC((CGThumbnailListItem_o *)&this->fields.fixTargetIds, v5, v7, v8);
}


System_Int32_array *BattleLogicFunction_WarBoardFunctionArgument__GetFixTargetIds(
        BattleLogicFunction_WarBoardFunctionArgument_o *this,
        int32_t targetType,
        System_Int32_array *beforeTargetIds,
        const MethodInfo *method)
{
  if ( !Target__Check(0, targetType, 0) )
    return this->fields.fixTargetIds;
  return beforeTargetIds;
}


void BattleLogicFunction___c___cctor(const MethodInfo *method)
{
  Il2CppObject *v1; // x19
  int32_t v2; // w2
  const MethodInfo *v3; // x3

  if ( (byte_4CB942A & 1) == 0 )
  {
    sub_1C6BA08(&BattleLogicFunction___c_TypeInfo);
    byte_4CB942A = 1;
  }
  v1 = (Il2CppObject *)sub_1C6BC54(BattleLogicFunction___c_TypeInfo);
  System_Object___ctor(v1, 0);
  BattleLogicFunction___c_TypeInfo->static_fields->__9 = (struct BattleLogicFunction___c_o *)v1;
  sub_1C6B9AC((CGThumbnailListItem_o *)BattleLogicFunction___c_TypeInfo->static_fields, (int32_t)v1, v2, v3);
}


void BattleLogicFunction___c___ctor(BattleLogicFunction___c_o *this, const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


bool BattleLogicFunction___c___ApplySubBuffChanges_b__79_1(
        BattleLogicFunction___c_o *this,
        BattleBuffData_BuffData_o *buff,
        const MethodInfo *method)
{
  if ( !buff )
    sub_1C6BC60(this, 0);
  return BattleBuffData_BuffData__get_ExistChangeBgm(buff, 0);
}


int32_t BattleLogicFunction___c___FunctionRevivalInDetail_b__120_0(
        BattleLogicFunction___c_o *this,
        BattleServantData_o *x,
        const MethodInfo *method)
{
  if ( !x || (this = (BattleLogicFunction___c_o *)x->fields.deckSvt) == 0 )
    sub_1C6BC60(this, x);
  return BattleDeckServantData__GetRevivalTargetId((BattleDeckServantData_o *)this, 0);
}


int32_t BattleLogicFunction___c___FunctionRevivalInDetail_b__120_1(
        BattleLogicFunction___c_o *this,
        System_Linq_IGrouping_int__BattleServantData__o *x,
        const MethodInfo *method)
{
  System_Linq_IGrouping_int__BattleServantData__c *klass; // x8
  __int64 v5; // x9
  int32_t *p_offset; // x10
  __int64 v7; // x0

  if ( (byte_4CB942C & 1) == 0 )
  {
    this = (BattleLogicFunction___c_o *)sub_1C6BA08(&System_Linq_IGrouping_int__BattleServantData__TypeInfo);
    byte_4CB942C = 1;
  }
  if ( !x )
    sub_1C6BC60(this, x);
  klass = x->klass;
  v5 = *(unsigned __int16 *)&x->klass->_2.rank;
  if ( *(_WORD *)&x->klass->_2.rank )
  {
    p_offset = &klass->_1.interfaceOffsets->offset;
    while ( *((System_Linq_IGrouping_int__BattleServantData__c **)p_offset - 1) != System_Linq_IGrouping_int__BattleServantData__TypeInfo )
    {
      --v5;
      p_offset += 4;
      if ( !v5 )
        goto LABEL_8;
    }
    v7 = (__int64)&klass->vtable[*p_offset];
  }
  else
  {
LABEL_8:
    v7 = sub_1C41D90(x, System_Linq_IGrouping_int__BattleServantData__TypeInfo, 0);
  }
  return (*(__int64 (__fastcall **)(System_Linq_IGrouping_int__BattleServantData__o *, _QWORD))v7)(
           x,
           *(_QWORD *)(v7 + 8));
}


BattleServantData_array *BattleLogicFunction___c___FunctionRevivalInDetail_b__120_2(
        BattleLogicFunction___c_o *this,
        System_Linq_IGrouping_int__BattleServantData__o *x,
        const MethodInfo *method)
{
  if ( (byte_4CB942D & 1) == 0 )
  {
    sub_1C6BA08(&Method_System_Linq_Enumerable_ToArray_BattleServantData___);
    byte_4CB942D = 1;
  }
  return (BattleServantData_array *)System_Linq_Enumerable__ToArray_object_(
                                      (System_Collections_Generic_IEnumerable_TSource__o *)x,
                                      (const MethodInfo_317B248 *)Method_System_Linq_Enumerable_ToArray_BattleServantData___);
}


bool BattleLogicFunction___c___FunctionRevivalInDetail_b__120_7(
        BattleLogicFunction___c_o *this,
        BattleServantData_o *x,
        const MethodInfo *method)
{
  if ( !x )
    sub_1C6BC60(this, 0);
  return !x->fields.isEnemy;
}


void BattleLogicFunction___c___FunctionRevivalInDetail_b__120_8(
        BattleLogicFunction___c_o *this,
        BattleServantData_o *x,
        const MethodInfo *method)
{
  if ( !x )
    sub_1C6BC60(this, 0);
  BattleServantData__ProcessSkillRevive(x, 0);
}


bool BattleLogicFunction___c___FunctionSubFieldBuff_b__135_1(
        BattleLogicFunction___c_o *this,
        BattleBuffData_BuffData_o *x,
        const MethodInfo *method)
{
  if ( !x )
    sub_1C6BC60(this, 0);
  return x->fields.fieldChangeData != 0;
}


// local variable allocation has failed, the output may be wrong!
System_Guid_o BattleLogicFunction___c___FunctionSwapFieldPosition_b__157_0(
        BattleLogicFunction___c_o *this,
        int32_t x,
        const MethodInfo *method)
{
  __int64 v3; // x0
  __int64 v4; // x1
  System_Guid_o v5; // kr00_16
  System_Guid_o result; // 0:x0.16

  v5 = System_Guid__NewGuid(0);
  v4 = *(_QWORD *)&v5.fields._d;
  v3 = *(_QWORD *)&v5.fields._a;
  *(_QWORD *)&result.fields._d = v4;
  *(_QWORD *)&result.fields._a = v3;
  return result;
}


bool BattleLogicFunction___c___GetReplaceIndexArray_b__158_0(
        BattleLogicFunction___c_o *this,
        int32_t x,
        const MethodInfo *method)
{
  return x >= 0;
}


// local variable allocation has failed, the output may be wrong!
System_Guid_o BattleLogicFunction___c___GetReplaceIndexArray_b__158_2(
        BattleLogicFunction___c_o *this,
        int32_t x,
        const MethodInfo *method)
{
  __int64 v3; // x0
  __int64 v4; // x1
  System_Guid_o v5; // kr00_16
  System_Guid_o result; // 0:x0.16

  v5 = System_Guid__NewGuid(0);
  v4 = *(_QWORD *)&v5.fields._d;
  v3 = *(_QWORD *)&v5.fields._a;
  *(_QWORD *)&result.fields._d = v4;
  *(_QWORD *)&result.fields._a = v3;
  return result;
}


void BattleLogicFunction___c___SetFuncSideEffect_b__53_0(
        BattleLogicFunction___c_o *this,
        BattleActionData_o *x,
        const MethodInfo *method)
{
  if ( !x )
    sub_1C6BC60(this, 0);
  BattleActionData__SetPopupOnce(x, 0);
}


void BattleLogicFunction___c___SetSubstituteAction_b__162_0(
        BattleLogicFunction___c_o *this,
        BattleServantData_o *svtData,
        const MethodInfo *method)
{
  if ( !svtData )
    sub_1C6BC60(this, 0);
  svtData->fields._IsSubstituteBuffActive_k__BackingField = 0;
}


bool BattleLogicFunction___c___SetSubstituteAction_b__162_1(
        BattleLogicFunction___c_o *this,
        BattleServantData_o *x,
        const MethodInfo *method)
{
  if ( !x )
    sub_1C6BC60(this, 0);
  return x->fields._IsSubstituteBuffActive_k__BackingField;
}


bool BattleLogicFunction___c___SetSubstituteAction_b__162_2(
        BattleLogicFunction___c_o *this,
        BattleBuffData_BuffData_o *buff,
        const MethodInfo *method)
{
  if ( !buff )
    sub_1C6BC60(this, 0);
  return buff->fields._IsSubstituteSuccess_k__BackingField || buff->fields._IsSubstituteResisted_k__BackingField;
}


bool BattleLogicFunction___c___functionMoveState_b__122_2(
        BattleLogicFunction___c_o *this,
        BattleBuffData_BuffData_o *x,
        const MethodInfo *method)
{
  if ( !x )
    sub_1C6BC60(this, 0);
  return BattleBuffData_BuffData__get_ExistChangeBgm(x, 0);
}


void BattleLogicFunction___c___functionPtShuffle_b__101_0(
        BattleLogicFunction___c_o *this,
        BattleServantData_o *s,
        const MethodInfo *method)
{
  __int64 Next; // x0
  __int64 v5; // x1

  Next = BattleRandom__getNext(1000, 0);
  if ( !s )
    sub_1C6BC60(Next, v5);
  s->fields._shuffuleSeed = Next;
}


int32_t BattleLogicFunction___c___functionPtShuffle_b__101_1(
        BattleLogicFunction___c_o *this,
        BattleServantData_o *a,
        BattleServantData_o *b,
        const MethodInfo *method)
{
  if ( !a || (this = (BattleLogicFunction___c_o *)BattleServantData__get_ShuffleSeed(a, 0), !b) )
    sub_1C6BC60(this, a);
  return (_DWORD)this - BattleServantData__get_ShuffleSeed(b, 0);
}


bool BattleLogicFunction___c___functionReplaceEnemyMember_b__93_0(
        BattleLogicFunction___c_o *this,
        BattleServantData_o *x,
        const MethodInfo *method)
{
  if ( !x )
    sub_1C6BC60(this, 0);
  return BattleServantData__isAlive(x, 0, 0);
}


BattleServantSnapShot_o *BattleLogicFunction___c___functionTransformServant_b__95_0(
        BattleLogicFunction___c_o *this,
        BattleServantData_o *x,
        const MethodInfo *method)
{
  BattleServantSnapShotShiftServant_o *v4; // x20

  if ( (byte_4CB942B & 1) == 0 )
  {
    sub_1C6BA08(&BattleServantSnapShotShiftServant_TypeInfo);
    byte_4CB942B = 1;
  }
  v4 = (BattleServantSnapShotShiftServant_o *)sub_1C6BC54(BattleServantSnapShotShiftServant_TypeInfo);
  BattleServantSnapShotShiftServant___ctor(v4, x, 0);
  return (BattleServantSnapShot_o *)v4;
}


bool BattleLogicFunction___c___procList_b__45_0(
        BattleLogicFunction___c_o *this,
        BattleLogicFunctionProcess_FunctionUnitCheck_o *x,
        const MethodInfo *method)
{
  struct DataVals_o *dataVals_k__BackingField; // x8

  if ( !x || (dataVals_k__BackingField = x->fields._dataVals_k__BackingField) == 0 )
    sub_1C6BC60(this, x);
  return dataVals_k__BackingField->fields.funcType != 0;
}


bool BattleLogicFunction___c___procList_b__45_1(
        BattleLogicFunction___c_o *this,
        BattleLogicFunctionProcess_FunctionUnitCheck_o *x,
        const MethodInfo *method)
{
  struct DataVals_o *dataVals_k__BackingField; // x8

  if ( !x || (dataVals_k__BackingField = x->fields._dataVals_k__BackingField) == 0 )
    sub_1C6BC60(this, x);
  return dataVals_k__BackingField->fields.funcType == 135;
}


bool BattleLogicFunction___c___procList_b__45_2(
        BattleLogicFunction___c_o *this,
        BattleLogicFunctionProcess_FunctionTargetCheck_o *target,
        const MethodInfo *method)
{
  if ( !target )
    sub_1C6BC60(this, 0);
  return target->fields._result_k__BackingField;
}


int32_t BattleLogicFunction___c___procList_b__45_3(
        BattleLogicFunction___c_o *this,
        BattleLogicFunctionProcess_FunctionTargetCheck_o *target,
        const MethodInfo *method)
{
  if ( !target )
    sub_1C6BC60(this, 0);
  return target->fields._targetId_k__BackingField;
}


int32_t BattleLogicFunction___c___setAttackSideEffect_b__57_0(
        BattleLogicFunction___c_o *this,
        BattleActionData_SideEffectData_o *x,
        const MethodInfo *method)
{
  if ( !x )
    sub_1C6BC60(this, 0);
  return x->fields.targetId;
}


void BattleLogicFunction___c__DisplayClass113_0___ctor(
        BattleLogicFunction___c__DisplayClass113_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


void BattleLogicFunction___c__DisplayClass113_0___UpdateUserEquipSkillChargeTurn_b__0(
        BattleLogicFunction___c__DisplayClass113_0_o *this,
        BattleSkillInfoData_o *x,
        const MethodInfo *method)
{
  if ( !x )
    sub_1C6BC60(this, 0);
  if ( BattleSkillInfoData__TurnProgress(
         x,
         this->fields.progressValue,
         0,
         this->fields.targetIndex,
         this->fields.targetIndividualityArray,
         0) )
  {
    this->fields.isEnable = 1;
  }
}


void BattleLogicFunction___c__DisplayClass113_0___UpdateUserEquipSkillChargeTurn_b__1(
        BattleLogicFunction___c__DisplayClass113_0_o *this,
        BattleSkillInfoData_o *x,
        const MethodInfo *method)
{
  if ( !x )
    sub_1C6BC60(this, 0);
  if ( BattleSkillInfoData__TurnExtend(
         x,
         this->fields.progressValue,
         999,
         this->fields.targetIndex,
         this->fields.targetIndividualityArray,
         0) )
  {
    this->fields.isEnable = 1;
  }
}


void BattleLogicFunction___c__DisplayClass122_0___ctor(
        BattleLogicFunction___c__DisplayClass122_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


bool BattleLogicFunction___c__DisplayClass122_0___functionMoveState_b__0(
        BattleLogicFunction___c__DisplayClass122_0_o *this,
        BattleBuffData_BuffData_o *x,
        const MethodInfo *method)
{
  if ( !x )
    sub_1C6BC60(this, 0);
  return BattleBuffData_BuffData__checkState(x, this->fields.stateUnstealable, 0);
}


bool BattleLogicFunction___c__DisplayClass122_0___functionMoveState_b__1(
        BattleLogicFunction___c__DisplayClass122_0_o *this,
        BattleBuffData_BuffData_o *x,
        const MethodInfo *method)
{
  System_Collections_Generic_HashSet_T__o *unstealableBuffs; // x0

  if ( (byte_4CB942E & 1) == 0 )
  {
    sub_1C6BA08(&Method_System_Collections_Generic_HashSet_BattleBuffData_BuffData__Contains__);
    byte_4CB942E = 1;
  }
  unstealableBuffs = (System_Collections_Generic_HashSet_T__o *)this->fields.unstealableBuffs;
  if ( !unstealableBuffs )
    sub_1C6BC60(0, x);
  return !System_Collections_Generic_HashSet_object___Contains(
            unstealableBuffs,
            (Il2CppObject *)x,
            (const MethodInfo_36B7AD4 *)Method_System_Collections_Generic_HashSet_BattleBuffData_BuffData__Contains__);
}


void BattleLogicFunction___c__DisplayClass157_0___ctor(
        BattleLogicFunction___c__DisplayClass157_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


bool BattleLogicFunction___c__DisplayClass157_0___FunctionSwapFieldPosition_b__1(
        BattleLogicFunction___c__DisplayClass157_0_o *this,
        RestockServantLogicByMoveToSubMember_o *x,
        const MethodInfo *method)
{
  if ( !x )
    sub_1C6BC60(this, 0);
  return this->fields.isEnemy == x->fields._IsEnemy_k__BackingField;
}


void BattleLogicFunction___c__DisplayClass158_0___ctor(
        BattleLogicFunction___c__DisplayClass158_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


bool BattleLogicFunction___c__DisplayClass158_0___GetReplaceIndexArray_b__1(
        BattleLogicFunction___c__DisplayClass158_0_o *this,
        int32_t x,
        const MethodInfo *method)
{
  if ( (byte_4CB942F & 1) == 0 )
  {
    sub_1C6BA08(&Method_System_Linq_Enumerable_Contains_int___);
    byte_4CB942F = 1;
  }
  return !System_Linq_Enumerable__Contains_int_(
            (System_Collections_Generic_IEnumerable_TSource__o *)this->fields.specifiedReplaceTargetArray,
            x,
            (const MethodInfo_31583F4 *)Method_System_Linq_Enumerable_Contains_int___);
}


void BattleLogicFunction___c__DisplayClass77_0___ctor(
        BattleLogicFunction___c__DisplayClass77_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


int32_t BattleLogicFunction___c__DisplayClass77_0___BehaveLinkageBuffAsFamily_b__0(
        BattleLogicFunction___c__DisplayClass77_0_o *this,
        int32_t linkageIndividuality,
        const MethodInfo *method)
{
  const MethodInfo *v3; // x3
  struct BattleLogicFunctionProcess_FunctionTargetCheck_o *funcTarget; // x8
  struct BattleLogicFunctionProcess_FunctionUnitCheck_o *funcUnit_k__BackingField; // x8
  BattleLogicFunction_ProcListInArgs_o *procArg_k__BackingField; // x8

  funcTarget = this->fields.funcTarget;
  if ( !funcTarget
    || (funcUnit_k__BackingField = funcTarget->fields._funcUnit_k__BackingField) == 0
    || (procArg_k__BackingField = funcUnit_k__BackingField->fields._procArg_k__BackingField) == 0 )
  {
    sub_1C6BC60(this, linkageIndividuality);
  }
  return BattleLogicFunction_ProcListInArgs__GetFamilyBuffLinkageId(
           procArg_k__BackingField,
           linkageIndividuality,
           this->fields.targetSvtData,
           v3);
}


void BattleLogicFunction___c__DisplayClass79_0___ctor(
        BattleLogicFunction___c__DisplayClass79_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


BattleBuffData_BuffData_o *BattleLogicFunction___c__DisplayClass79_0___ApplySubBuffChanges_b__0(
        BattleLogicFunction___c__DisplayClass79_0_o *this,
        BattleBuffData_BuffData_o *buff,
        const MethodInfo *method)
{
  BattleServantData_o *targetSvtData; // x0

  targetSvtData = this->fields.targetSvtData;
  if ( !targetSvtData || (targetSvtData = (BattleServantData_o *)BattleServantData__get_BuffData(targetSvtData, 0)) == 0 )
    sub_1C6BC60(targetSvtData, buff);
  return BattleBuffData__CreateDummyBuff((BattleBuffData_o *)targetSvtData, buff, 0);
}


void BattleLogicFunction___c__DisplayClass95_0___ctor(
        BattleLogicFunction___c__DisplayClass95_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


bool BattleLogicFunction___c__DisplayClass95_0___functionTransformServant_b__1(
        BattleLogicFunction___c__DisplayClass95_0_o *this,
        BattleActionData_BuffData_o *x,
        const MethodInfo *method)
{
  if ( !x )
    sub_1C6BC60(this, 0);
  return x->fields.targetId == this->fields.targetId;
}