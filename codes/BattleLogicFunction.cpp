void BattleLogicFunction___ctor(BattleLogicFunction_o *this, const MethodInfo *method)
{
  __int64 v3; // x0
  int32_t v4; // w2
  const MethodInfo *v5; // x3
  int v6; // w9
  System_Collections_Generic_Dictionary_TKey__TValue__o *v7; // x20
  BattleLogicFunctionProcess_CommonFunctionTypeProcess_o *v8; // x21
  BattleLogicFunctionProcess_AddStateProcess_o *v9; // x21
  BattleLogicFunctionProcess_AddStateShortProcess_o *v10; // x21
  BattleLogicFunctionProcess_MoveToLastSubMemberProcess_o *v11; // x21
  BattleLogicFunctionProcess_TransformServantProcess_o *v12; // x21
  BattleLogicFunctionProcess_CommonFieldFunctionProcess_o *v13; // x21
  BattleLogicFunctionProcess_CommonFieldFunctionProcess_o *v14; // x21
  BattleLogicFunctionProcess_CommonAddStateProcess_o *v15; // x21
  BattleLogicFunctionProcess_ToFieldCommonFunctionProcess_o *v16; // x21
  BattleLogicFunctionProcess_ToFieldCommonFunctionProcess_o *v17; // x21
  int32_t v18; // w2
  const MethodInfo *v19; // x3

  if ( (byte_4C3A9C3 & 1) == 0 )
  {
    sub_1C32C20(&BattleLogicFunctionProcess_AddStateProcess_TypeInfo);
    sub_1C32C20(&BattleLogicFunctionProcess_AddStateShortProcess_TypeInfo);
    sub_1C32C20(&BattleLogicFunctionProcess_CommonAddStateProcess_TypeInfo);
    sub_1C32C20(&BattleLogicFunctionProcess_CommonFieldFunctionProcess_TypeInfo);
    sub_1C32C20(&BattleLogicFunctionProcess_CommonFunctionTypeProcess_TypeInfo);
    sub_1C32C20(&Method_System_Collections_Generic_Dictionary_FuncList_TYPE__BattleLogicFunctionProcess_BaseFunctionTypeProcess__Add__);
    sub_1C32C20(&Method_System_Collections_Generic_Dictionary_FuncList_TYPE__BattleLogicFunctionProcess_BaseFunctionTypeProcess___ctor__);
    sub_1C32C20(&System_Collections_Generic_Dictionary_FuncList_TYPE__BattleLogicFunctionProcess_BaseFunctionTypeProcess__TypeInfo);
    sub_1C32C20(&int___TypeInfo);
    sub_1C32C20(&BattleLogicFunctionProcess_MoveToLastSubMemberProcess_TypeInfo);
    sub_1C32C20(&BattleLogicFunctionProcess_ToFieldCommonFunctionProcess_TypeInfo);
    sub_1C32C20(&BattleLogicFunctionProcess_TransformServantProcess_TypeInfo);
    byte_4C3A9C3 = 1;
  }
  v3 = sub_1C32CC8(int___TypeInfo, 2);
  if ( !v3 )
    goto LABEL_8;
  v6 = *(_DWORD *)(v3 + 24);
  if ( !v6 || (*(_DWORD *)(v3 + 32) = 701601, v6 == 1) )
    sub_1C32E84(v3);
  *(_DWORD *)(v3 + 36) = 701602;
  this->fields.tamamocatTreasureDeviceIds = (struct System_Int32_array *)v3;
  sub_1C32BC4((CGThumbnailListItem_o *)&this->fields.tamamocatTreasureDeviceIds, v3, v4, v5);
  v7 = (System_Collections_Generic_Dictionary_TKey__TValue__o *)sub_1C32E6C(System_Collections_Generic_Dictionary_FuncList_TYPE__BattleLogicFunctionProcess_BaseFunctionTypeProcess__TypeInfo);
  System_Collections_Generic_Dictionary_Int32Enum__object____ctor(
    v7,
    (const MethodInfo_34223E4 *)Method_System_Collections_Generic_Dictionary_FuncList_TYPE__BattleLogicFunctionProcess_BaseFunctionTypeProcess___ctor__);
  v8 = (BattleLogicFunctionProcess_CommonFunctionTypeProcess_o *)sub_1C32E6C(BattleLogicFunctionProcess_CommonFunctionTypeProcess_TypeInfo);
  BattleLogicFunctionProcess_CommonFunctionTypeProcess___ctor(v8, 0);
  if ( !v7 )
LABEL_8:
    sub_1C32E7C(v3);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v7,
    0,
    (Il2CppObject *)v8,
    (const MethodInfo_3422DB8 *)Method_System_Collections_Generic_Dictionary_FuncList_TYPE__BattleLogicFunctionProcess_BaseFunctionTypeProcess__Add__);
  v9 = (BattleLogicFunctionProcess_AddStateProcess_o *)sub_1C32E6C(BattleLogicFunctionProcess_AddStateProcess_TypeInfo);
  BattleLogicFunctionProcess_AddStateProcess___ctor(v9, 0);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v7,
    1,
    (Il2CppObject *)v9,
    (const MethodInfo_3422DB8 *)Method_System_Collections_Generic_Dictionary_FuncList_TYPE__BattleLogicFunctionProcess_BaseFunctionTypeProcess__Add__);
  v10 = (BattleLogicFunctionProcess_AddStateShortProcess_o *)sub_1C32E6C(BattleLogicFunctionProcess_AddStateShortProcess_TypeInfo);
  BattleLogicFunctionProcess_AddStateShortProcess___ctor(v10, 0);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v7,
    16,
    (Il2CppObject *)v10,
    (const MethodInfo_3422DB8 *)Method_System_Collections_Generic_Dictionary_FuncList_TYPE__BattleLogicFunctionProcess_BaseFunctionTypeProcess__Add__);
  v11 = (BattleLogicFunctionProcess_MoveToLastSubMemberProcess_o *)sub_1C32E6C(BattleLogicFunctionProcess_MoveToLastSubMemberProcess_TypeInfo);
  BattleLogicFunctionProcess_MoveToLastSubMemberProcess___ctor(v11, 0);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v7,
    61,
    (Il2CppObject *)v11,
    (const MethodInfo_3422DB8 *)Method_System_Collections_Generic_Dictionary_FuncList_TYPE__BattleLogicFunctionProcess_BaseFunctionTypeProcess__Add__);
  v12 = (BattleLogicFunctionProcess_TransformServantProcess_o *)sub_1C32E6C(BattleLogicFunctionProcess_TransformServantProcess_TypeInfo);
  BattleLogicFunctionProcess_TransformServantProcess___ctor(v12, 0);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v7,
    109,
    (Il2CppObject *)v12,
    (const MethodInfo_3422DB8 *)Method_System_Collections_Generic_Dictionary_FuncList_TYPE__BattleLogicFunctionProcess_BaseFunctionTypeProcess__Add__);
  v13 = (BattleLogicFunctionProcess_CommonFieldFunctionProcess_o *)sub_1C32E6C(BattleLogicFunctionProcess_CommonFieldFunctionProcess_TypeInfo);
  BattleLogicFunctionProcess_CommonFieldFunctionProcess___ctor(v13, 0);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v7,
    29,
    (Il2CppObject *)v13,
    (const MethodInfo_3422DB8 *)Method_System_Collections_Generic_Dictionary_FuncList_TYPE__BattleLogicFunctionProcess_BaseFunctionTypeProcess__Add__);
  v14 = (BattleLogicFunctionProcess_CommonFieldFunctionProcess_o *)sub_1C32E6C(BattleLogicFunctionProcess_CommonFieldFunctionProcess_TypeInfo);
  BattleLogicFunctionProcess_CommonFieldFunctionProcess___ctor(v14, 0);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v7,
    128,
    (Il2CppObject *)v14,
    (const MethodInfo_3422DB8 *)Method_System_Collections_Generic_Dictionary_FuncList_TYPE__BattleLogicFunctionProcess_BaseFunctionTypeProcess__Add__);
  v15 = (BattleLogicFunctionProcess_CommonAddStateProcess_o *)sub_1C32E6C(BattleLogicFunctionProcess_CommonAddStateProcess_TypeInfo);
  BattleLogicFunctionProcess_CommonAddStateProcess___ctor(v15, 0);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v7,
    130,
    (Il2CppObject *)v15,
    (const MethodInfo_3422DB8 *)Method_System_Collections_Generic_Dictionary_FuncList_TYPE__BattleLogicFunctionProcess_BaseFunctionTypeProcess__Add__);
  v16 = (BattleLogicFunctionProcess_ToFieldCommonFunctionProcess_o *)sub_1C32E6C(BattleLogicFunctionProcess_ToFieldCommonFunctionProcess_TypeInfo);
  BattleLogicFunctionProcess_ToFieldCommonFunctionProcess___ctor(v16, 0);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v7,
    131,
    (Il2CppObject *)v16,
    (const MethodInfo_3422DB8 *)Method_System_Collections_Generic_Dictionary_FuncList_TYPE__BattleLogicFunctionProcess_BaseFunctionTypeProcess__Add__);
  v17 = (BattleLogicFunctionProcess_ToFieldCommonFunctionProcess_o *)sub_1C32E6C(BattleLogicFunctionProcess_ToFieldCommonFunctionProcess_TypeInfo);
  BattleLogicFunctionProcess_ToFieldCommonFunctionProcess___ctor(v17, 0);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v7,
    158,
    (Il2CppObject *)v17,
    (const MethodInfo_3422DB8 *)Method_System_Collections_Generic_Dictionary_FuncList_TYPE__BattleLogicFunctionProcess_BaseFunctionTypeProcess__Add__);
  this->fields.dicFuncProcess = (struct System_Collections_Generic_Dictionary_FuncList_TYPE__BattleLogicFunctionProcess_BaseFunctionTypeProcess__o *)v7;
  sub_1C32BC4((CGThumbnailListItem_o *)&this->fields.dicFuncProcess, (int32_t)v7, v18, v19);
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
  __int64 v36; // x27
  __int64 v37; // x0
  int32_t v38; // w2
  const MethodInfo *v39; // x6
  int32_t v40; // w27
  BattleActionData_o *v41; // x0
  int32_t v42; // w28
  int32_t funcIndex; // w28
  bool IsCommandSideEffect; // w0
  const MethodInfo *v45; // x7
  BattleActionData_o *NoEffectObject; // x0
  __int64 v47; // x8
  __int64 v48; // x9
  int *v49; // x10
  __int64 v50; // x0
  BattleLogicFunction_o *v52; // [xsp+8h] [xbp-78h]
  unsigned __int64 v53; // [xsp+10h] [xbp-70h]
  int32_t diffNp; // [xsp+1Ch] [xbp-64h] BYREF

  v8 = this;
  if ( (byte_4C3A9A2 & 1) == 0 )
  {
    sub_1C32C20(&BattleActionData_TypeInfo);
    sub_1C32C20(&System_IDisposable_TypeInfo);
    sub_1C32C20(&System_Collections_Generic_IEnumerable_BattleLogicFunctionProcess_FunctionTargetCheck__TypeInfo);
    sub_1C32C20(&System_Collections_Generic_IEnumerator_BattleLogicFunctionProcess_FunctionTargetCheck__TypeInfo);
    sub_1C32C20(&System_Collections_IEnumerator_TypeInfo);
    sub_1C32C20(&Method_System_Collections_Generic_List_FuncList_TYPE__Add__);
    sub_1C32C20(&Method_System_Collections_Generic_List_FuncList_TYPE___ctor__);
    this = (BattleLogicFunction_o *)sub_1C32C20(&System_Collections_Generic_List_FuncList_TYPE__TypeInfo);
    byte_4C3A9A2 = 1;
  }
  if ( !funcTarget )
    goto LABEL_65;
  funcUnit_k__BackingField = funcTarget->fields._funcUnit_k__BackingField;
  if ( !funcUnit_k__BackingField )
    goto LABEL_65;
  procArg_k__BackingField = funcUnit_k__BackingField->fields._procArg_k__BackingField;
  dataVals_k__BackingField = funcUnit_k__BackingField->fields._dataVals_k__BackingField;
  v12 = (BattleActionData_o *)sub_1C32E6C(BattleActionData_TypeInfo);
  BattleActionData___ctor(v12, 0);
  v13 = (System_Collections_Generic_List_T__o *)sub_1C32E6C(System_Collections_Generic_List_FuncList_TYPE__TypeInfo);
  System_Collections_Generic_List_Int32Enum____ctor(
    v13,
    (const MethodInfo_377D770 *)Method_System_Collections_Generic_List_FuncList_TYPE___ctor__);
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
      *(const MethodInfo_377DFC4 **)(*(_QWORD *)(v15[4] + 192LL) + 112LL));
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
    v52 = this;
    while ( 1 )
    {
      if ( v18 >= (unsigned int)logic )
        sub_1C32E84(this);
      v19 = (DataVals_o *)*((_QWORD *)&this->fields.logictarget + v18);
      diffNp = 0;
      if ( !result )
        break;
      this = (BattleLogicFunction_o *)result->fields._Convert_k__BackingField;
      v53 = v18;
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
        v25 = sub_1C83438(
                this,
                System_Collections_Generic_IEnumerable_BattleLogicFunctionProcess_FunctionTargetCheck__TypeInfo,
                0);
      }
      v26 = (*(__int64 (__fastcall **)(BattleLogicFunction_o *, _QWORD))v25)(v22, *(_QWORD *)(v25 + 8));
      if ( !v26 )
        sub_1C32E7C(0);
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
          v30 = sub_1C83438(v26, System_Collections_IEnumerator_TypeInfo, 0);
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
          v34 = sub_1C83438(
                  v26,
                  System_Collections_Generic_IEnumerator_BattleLogicFunctionProcess_FunctionTargetCheck__TypeInfo,
                  0);
        }
        v35 = (*(__int64 (__fastcall **)(__int64, _QWORD))v34)(v26, *(_QWORD *)(v34 + 8));
        v36 = v35;
        if ( !v35 )
          sub_1C32E7C(0);
        v37 = (*(__int64 (__fastcall **)(__int64, BattleActionData_o *, _QWORD))(*(_QWORD *)v35 + 408LL))(
                v35,
                mainAction,
                *(_QWORD *)(*(_QWORD *)v35 + 416LL));
        if ( (v37 & 1) != 0 )
        {
          if ( !mainAction )
            sub_1C32E7C(v37);
          v40 = *(_DWORD *)(v36 + 32);
          v41 = BattleLogicFunction__functionLossNp(v8, procArg_k__BackingField, v38, v40, v19, &diffNp, v39);
          v42 = diffNp;
          if ( diffNp < 1 )
          {
            if ( v41 )
            {
              if ( !v19 )
                sub_1C32E7C(v41);
              if ( !procArg_k__BackingField )
                sub_1C32E7C(v41);
              funcIndex = v19->fields.funcIndex;
              IsCommandSideEffect = BattleLogicFunction_ProcListInArgs__get_IsCommandSideEffect(
                                      procArg_k__BackingField,
                                      0);
              NoEffectObject = BattleLogicFunction__getNoEffectObject(
                                 v8,
                                 v40,
                                 funcIndex,
                                 v19,
                                 IsCommandSideEffect,
                                 0,
                                 0,
                                 v45);
              if ( !v12 )
                sub_1C32E7C(NoEffectObject);
              BattleActionData__addAction(v12, NoEffectObject, 0);
            }
          }
          else
          {
            if ( !v12 )
              sub_1C32E7C(v41);
            BattleActionData__addAction(v12, v41, 0);
            NpGaugeAbsorbResult__AddPoint(result, v42, 0);
          }
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
            goto LABEL_53;
        }
        v50 = v47 + 16LL * *v49 + 312;
      }
      else
      {
LABEL_53:
        v50 = sub_1C83438(v26, System_IDisposable_TypeInfo, 0);
      }
      (*(void (__fastcall **)(__int64, _QWORD))v50)(v26, *(_QWORD *)(v50 + 8));
      this = v52;
      LODWORD(logic) = v52->fields.logic;
      v18 = v53 + 1;
      if ( (__int64)(v53 + 1) >= (int)logic )
        return v12;
    }
LABEL_65:
    sub_1C32E7C(this);
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
  __int64 v25; // x25
  __int64 v26; // x8
  __int64 v27; // x9
  int *v28; // x10
  __int64 v29; // x0
  __int64 v30; // x8
  __int64 v31; // x9
  int *v32; // x10
  __int64 v33; // x0
  __int64 v34; // x0
  __int64 v35; // x27
  __int64 v36; // x0
  int32_t v37; // w27
  FunctionEntity_o *funcEnt; // x28
  int32_t funcIndex; // w29
  bool IsCommandSideEffect; // w0
  const MethodInfo *v41; // x7
  BattleActionData_o *v42; // x0
  __int64 v43; // x8
  __int64 v44; // x9
  int *v45; // x10
  __int64 v46; // x0
  BattleLogicFunction_o *v48; // [xsp+0h] [xbp-80h]
  unsigned __int64 v49; // [xsp+8h] [xbp-78h]
  int32_t absorptionCount; // [xsp+1Ch] [xbp-64h] BYREF

  v7 = this;
  if ( (byte_4C3A9A1 & 1) == 0 )
  {
    sub_1C32C20(&BattleActionData_TypeInfo);
    sub_1C32C20(&System_IDisposable_TypeInfo);
    sub_1C32C20(&System_Collections_Generic_IEnumerable_BattleLogicFunctionProcess_FunctionTargetCheck__TypeInfo);
    sub_1C32C20(&System_Collections_Generic_IEnumerator_BattleLogicFunctionProcess_FunctionTargetCheck__TypeInfo);
    sub_1C32C20(&System_Collections_IEnumerator_TypeInfo);
    sub_1C32C20(&Method_System_Collections_Generic_List_FuncList_TYPE__Add__);
    sub_1C32C20(&Method_System_Collections_Generic_List_FuncList_TYPE___ctor__);
    this = (BattleLogicFunction_o *)sub_1C32C20(&System_Collections_Generic_List_FuncList_TYPE__TypeInfo);
    byte_4C3A9A1 = 1;
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
  v11 = (BattleActionData_o *)sub_1C32E6C(BattleActionData_TypeInfo);
  BattleActionData___ctor(v11, 0);
  v12 = (System_Collections_Generic_List_T__o *)sub_1C32E6C(System_Collections_Generic_List_FuncList_TYPE__TypeInfo);
  System_Collections_Generic_List_Int32Enum____ctor(
    v12,
    (const MethodInfo_377D770 *)Method_System_Collections_Generic_List_FuncList_TYPE___ctor__);
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
      *(const MethodInfo_377DFC4 **)(*(_QWORD *)(v14[4] + 192LL) + 112LL));
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
    v48 = this;
    while ( 1 )
    {
      if ( v17 >= (unsigned int)logic )
        sub_1C32E84(this);
      v18 = (DataVals_o *)*((_QWORD *)&this->fields.logictarget + v17);
      absorptionCount = 0;
      if ( !result )
        break;
      this = (BattleLogicFunction_o *)result->fields._Convert_k__BackingField;
      v49 = v17;
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
        v24 = sub_1C83438(
                this,
                System_Collections_Generic_IEnumerable_BattleLogicFunctionProcess_FunctionTargetCheck__TypeInfo,
                0);
      }
      v25 = (*(__int64 (__fastcall **)(BattleLogicFunction_o *, _QWORD))v24)(v21, *(_QWORD *)(v24 + 8));
      if ( !v25 )
        sub_1C32E7C(0);
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
              goto LABEL_29;
          }
          v29 = v26 + 16LL * *v28 + 312;
        }
        else
        {
LABEL_29:
          v29 = sub_1C83438(v25, System_Collections_IEnumerator_TypeInfo, 0);
        }
        if ( ((*(__int64 (__fastcall **)(__int64, _QWORD))v29)(v25, *(_QWORD *)(v29 + 8)) & 1) == 0 )
          break;
        v30 = *(_QWORD *)v25;
        v31 = *(unsigned __int16 *)(*(_QWORD *)v25 + 302LL);
        if ( *(_WORD *)(*(_QWORD *)v25 + 302LL) )
        {
          v32 = (int *)(*(_QWORD *)(v30 + 176) + 8LL);
          while ( *((System_Collections_Generic_IEnumerator_BattleLogicFunctionProcess_FunctionTargetCheck__c **)v32 - 1) != System_Collections_Generic_IEnumerator_BattleLogicFunctionProcess_FunctionTargetCheck__TypeInfo )
          {
            --v31;
            v32 += 4;
            if ( !v31 )
              goto LABEL_36;
          }
          v33 = v30 + 16LL * *v32 + 312;
        }
        else
        {
LABEL_36:
          v33 = sub_1C83438(
                  v25,
                  System_Collections_Generic_IEnumerator_BattleLogicFunctionProcess_FunctionTargetCheck__TypeInfo,
                  0);
        }
        v34 = (*(__int64 (__fastcall **)(__int64, _QWORD))v33)(v25, *(_QWORD *)(v33 + 8));
        v35 = v34;
        if ( !v34 )
          sub_1C32E7C(0);
        v36 = (*(__int64 (__fastcall **)(__int64, BattleActionData_o *, _QWORD))(*(_QWORD *)v34 + 408LL))(
                v34,
                mainAction,
                *(_QWORD *)(*(_QWORD *)v34 + 416LL));
        if ( (v36 & 1) != 0 )
        {
          if ( !v18 )
            sub_1C32E7C(v36);
          if ( !procArg_k__BackingField )
            sub_1C32E7C(v36);
          v37 = *(_DWORD *)(v35 + 32);
          funcEnt = v18->fields.funcEnt;
          funcIndex = v18->fields.funcIndex;
          IsCommandSideEffect = BattleLogicFunction_ProcListInArgs__get_IsCommandSideEffect(procArg_k__BackingField, 0);
          v42 = BattleLogicFunction__functionDelayNpTurn(
                  v7,
                  v37,
                  funcEnt,
                  v18,
                  funcIndex,
                  IsCommandSideEffect,
                  &absorptionCount,
                  v41);
          if ( !v11 )
            sub_1C32E7C(v42);
          BattleActionData__addAction(v11, v42, 0);
          if ( absorptionCount >= 1 )
            NpGaugeAbsorbResult__AddTurn(result, absorptionCount, 0);
        }
      }
      v43 = *(_QWORD *)v25;
      v44 = *(unsigned __int16 *)(*(_QWORD *)v25 + 302LL);
      if ( *(_WORD *)(*(_QWORD *)v25 + 302LL) )
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
        v46 = sub_1C83438(v25, System_IDisposable_TypeInfo, 0);
      }
      (*(void (__fastcall **)(__int64, _QWORD))v46)(v25, *(_QWORD *)(v46 + 8));
      this = v48;
      LODWORD(logic) = v48->fields.logic;
      v17 = v49 + 1;
      if ( (__int64)(v49 + 1) >= (int)logic )
        return v11;
    }
LABEL_59:
    sub_1C32E7C(this);
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
  if ( (byte_4C3A97A & 1) == 0 )
  {
    this = (BattleLogicFunction_o *)sub_1C32C20(&UnityEngine_Object_TypeInfo);
    byte_4C3A97A = 1;
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
      sub_1C32E7C(this);
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
  BattleData_o *data; // x0
  int32_t v20; // w2
  const MethodInfo *v21; // x3
  BattleServantData_o **v22; // x23
  const MethodInfo *v23; // x6
  int32_t m_CancellationTokenSource; // w28
  int32_t AuraSum_k__BackingField; // w29
  BattleServantData_o *v26; // x24
  System_Func_object__object__o *v27; // x26
  System_Collections_Generic_IEnumerable_TSource__o *v28; // x0
  System_Collections_Generic_List_TSource__o *v29; // x0
  int32_t v30; // w2
  const MethodInfo *v31; // x3
  System_Func_object__bool__o *v32; // x26
  _BOOL8 v33; // x0
  Il2CppObject *current; // x25
  BattleData_o *v35; // x0
  _BOOL8 v36; // x0
  BattleLogicFunction___c_c *v37; // x0
  System_Func_object__bool__o *_9__76_1; // x25
  Il2CppObject *v39; // x26
  struct BattleLogicFunction___c_StaticFields *static_fields; // x0
  int32_t v41; // w2
  const MethodInfo *v42; // x3
  struct BattleData_o *v43; // x8
  BattleFieldEnvironmentData_o *FieldEnvData_k__BackingField; // x22
  BattleActionEffect_ChangeBgmBuff_o *v45; // x22
  int32_t MaxHp_k__BackingField; // w22
  int32_t Hp_k__BackingField; // w21
  int v48; // w22
  BattleActionEffect_SubChangeMaxHpBuff_o *v49; // x20
  BattleActionEffect_Base_o *v50; // x0
  System_Collections_Generic_List_Enumerator_object__o v51; // [xsp+8h] [xbp-98h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v52; // [xsp+20h] [xbp-80h] BYREF

  if ( (byte_4C3A987 & 1) == 0 )
  {
    sub_1C32C20(&Method_BasicHelper_Any_BattleBuffData_BuffData___);
    sub_1C32C20(&Method_BattleBuffData_IsOverwriteClass__);
    sub_1C32C20(&BattleActionEffect_ChangeBgmBuff_TypeInfo);
    sub_1C32C20(&Method_System_Linq_Enumerable_Select_BattleBuffData_BuffData__BattleBuffData_BuffData___);
    sub_1C32C20(&Method_System_Linq_Enumerable_ToList_BattleBuffData_BuffData___);
    sub_1C32C20(&Method_System_Collections_Generic_List_Enumerator_BattleBuffData_BuffData__Dispose__);
    sub_1C32C20(&Method_System_Collections_Generic_List_Enumerator_BattleBuffData_BuffData__MoveNext__);
    sub_1C32C20(&Method_System_Collections_Generic_List_Enumerator_BattleBuffData_BuffData__get_Current__);
    sub_1C32C20(&System_Func_BattleBuffData_BuffData__BattleBuffData_BuffData__TypeInfo);
    sub_1C32C20(&System_Func_BattleBuffData_BuffData__bool__TypeInfo);
    sub_1C32C20(&Method_System_Collections_Generic_List_BattleBuffData_BuffData__GetEnumerator__);
    sub_1C32C20(&Method_System_Collections_Generic_List_BattleBuffData_BuffData__ToArray__);
    sub_1C32C20(&BattleActionEffect_SubChangeMaxHpBuff_TypeInfo);
    sub_1C32C20(&Method_BattleLogicFunction___c__ApplySubBuffChanges_b__76_1__);
    sub_1C32C20(&Method_BattleLogicFunction___c__DisplayClass76_0__ApplySubBuffChanges_b__0__);
    sub_1C32C20(&BattleLogicFunction___c__DisplayClass76_0_TypeInfo);
    sub_1C32C20(&BattleLogicFunction___c_TypeInfo);
    byte_4C3A987 = 1;
  }
  memset(&v52, 0, sizeof(v52));
  v18 = sub_1C32E6C(BattleLogicFunction___c__DisplayClass76_0_TypeInfo);
  BattleLogicFunction___c__DisplayClass76_0___ctor((BattleLogicFunction___c__DisplayClass76_0_o *)v18, 0);
  if ( !BasicHelper__IsNullOrEmpty((System_Collections_ICollection_o *)subBuffList, 0) )
  {
    data = this->fields.data;
    if ( data )
    {
      data = (BattleData_o *)BattleData__getServantData(data, targetId, 0);
      if ( v18 )
      {
        *(_QWORD *)(v18 + 16) = data;
        v22 = (BattleServantData_o **)(v18 + 16);
        sub_1C32BC4((CGThumbnailListItem_o *)(v18 + 16), (int32_t)data, v20, v21);
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
                if ( *v22 )
                {
                  m_CancellationTokenSource = (int32_t)data->fields.m_CancellationTokenSource;
                  AuraSum_k__BackingField = svtSnapShotOnBuffUpdate->fields._AuraSum_k__BackingField;
                  data = (BattleData_o *)BattleLogicFunction__getFunctionObject(
                                           (BattleLogicFunction_o *)data,
                                           baseVals->fields.funcEnt,
                                           (*v22)->fields.uniqueId,
                                           index,
                                           isCommandSideEffect,
                                           0,
                                           v23);
                  if ( data )
                  {
                    BYTE4(data->fields.boostSkillInfo) = AuraSum_k__BackingField > m_CancellationTokenSource;
                    v26 = (BattleServantData_o *)data;
                    v27 = (System_Func_object__object__o *)sub_1C32E6C(System_Func_BattleBuffData_BuffData__BattleBuffData_BuffData__TypeInfo);
                    System_Func_object__object____ctor(
                      v27,
                      (Il2CppObject *)v18,
                      Method_BattleLogicFunction___c__DisplayClass76_0__ApplySubBuffChanges_b__0__,
                      0);
                    v28 = (System_Collections_Generic_IEnumerable_TSource__o *)System_Linq_Enumerable__Select_object__object_(
                                                                                 (System_Collections_Generic_IEnumerable_TSource__o *)subBuffList,
                                                                                 (System_Func_TSource__TResult__o *)v27,
                                                                                 (const MethodInfo_3113ABC *)Method_System_Linq_Enumerable_Select_BattleBuffData_BuffData__BattleBuffData_BuffData___);
                    v29 = System_Linq_Enumerable__ToList_object_(
                            v28,
                            (const MethodInfo_3121728 *)Method_System_Linq_Enumerable_ToList_BattleBuffData_BuffData___);
                    *(_QWORD *)&v26->fields._iconLimitCount_k__BackingField.fields.fakeValue = v29;
                    sub_1C32BC4(
                      (CGThumbnailListItem_o *)&v26->fields._iconLimitCount_k__BackingField.fields.fakeValue,
                      (int32_t)v29,
                      v30,
                      v31);
                    v32 = (System_Func_object__bool__o *)sub_1C32E6C(System_Func_BattleBuffData_BuffData__bool__TypeInfo);
                    System_Func_object__bool____ctor(v32, 0, Method_BattleBuffData_IsOverwriteClass__, 0);
                    data = (BattleData_o *)BasicHelper__Any_object_(
                                             (System_Collections_Generic_List_T__o *)subBuffList,
                                             (System_Func_T__bool__o *)v32,
                                             (const MethodInfo_30C6790 *)Method_BasicHelper_Any_BattleBuffData_BuffData___);
                    if ( ((unsigned __int8)data & 1) != 0 )
                      *(&v26->fields.uniqueId + 1) = 7;
                    if ( actionData )
                    {
                      BattleActionData__setBuffData(actionData, (BattleActionData_BuffData_o *)v26, baseVals, 0);
                      if ( subBuffList )
                      {
                        System_Collections_Generic_List_object___GetEnumerator(
                          (System_Collections_Generic_List_Enumerator_T__o *)&v51,
                          (System_Collections_Generic_List_object__o *)subBuffList,
                          (const MethodInfo_37992B4 *)Method_System_Collections_Generic_List_BattleBuffData_BuffData__GetEnumerator__);
                        v52 = v51;
                        while ( 1 )
                        {
                          v33 = System_Collections_Generic_List_Enumerator_object___MoveNext(
                                  &v52,
                                  (const MethodInfo_3522FA8 *)Method_System_Collections_Generic_List_Enumerator_BattleBuffData_BuffData__MoveNext__);
                          if ( !v33 )
                            break;
                          current = v52.fields._current;
                          if ( !v52.fields._current )
                            sub_1C32E7C(v33);
                          v35 = this->fields.data;
                          if ( !v35 )
                            sub_1C32E7C(0);
                          BattleData__RemoveDoNotSelectCommandCardBuff(
                            v35,
                            (int32_t)v52.fields._current[1].klass,
                            *v22,
                            0);
                          v36 = BattleBuffData__CheckInvalidSacrificeIndiv((BattleBuffData_BuffData_o *)current, 0);
                          if ( v36 )
                          {
                            if ( !args )
                              sub_1C32E7C(v36);
                            args->fields.updateField = 1;
                          }
                        }
                        System_Collections_Generic_List_Enumerator_object___Dispose(
                          &v52,
                          (const MethodInfo_3522FA4 *)Method_System_Collections_Generic_List_Enumerator_BattleBuffData_BuffData__Dispose__);
                        v37 = BattleLogicFunction___c_TypeInfo;
                        if ( !BattleLogicFunction___c_TypeInfo->_2.cctor_finished )
                        {
                          j_il2cpp_runtime_class_init_0(BattleLogicFunction___c_TypeInfo);
                          v37 = BattleLogicFunction___c_TypeInfo;
                        }
                        _9__76_1 = (System_Func_object__bool__o *)v37->static_fields->__9__76_1;
                        if ( !_9__76_1 )
                        {
                          if ( !v37->_2.cctor_finished )
                          {
                            j_il2cpp_runtime_class_init_0(v37);
                            v37 = BattleLogicFunction___c_TypeInfo;
                          }
                          v39 = (Il2CppObject *)v37->static_fields->__9;
                          _9__76_1 = (System_Func_object__bool__o *)sub_1C32E6C(System_Func_BattleBuffData_BuffData__bool__TypeInfo);
                          System_Func_object__bool____ctor(
                            _9__76_1,
                            v39,
                            Method_BattleLogicFunction___c__ApplySubBuffChanges_b__76_1__,
                            0);
                          static_fields = BattleLogicFunction___c_TypeInfo->static_fields;
                          static_fields->__9__76_1 = (struct System_Func_BattleBuffData_BuffData__bool__o *)_9__76_1;
                          sub_1C32BC4((CGThumbnailListItem_o *)&static_fields->__9__76_1, (int32_t)_9__76_1, v41, v42);
                        }
                        data = (BattleData_o *)BasicHelper__Any_object_(
                                                 (System_Collections_Generic_List_T__o *)subBuffList,
                                                 (System_Func_T__bool__o *)_9__76_1,
                                                 (const MethodInfo_30C6790 *)Method_BasicHelper_Any_BattleBuffData_BuffData___);
                        if ( ((unsigned __int8)data & 1) != 0 )
                        {
                          v43 = this->fields.data;
                          if ( !v43 )
                            goto LABEL_45;
                          FieldEnvData_k__BackingField = v43->fields._FieldEnvData_k__BackingField;
                          data = (BattleData_o *)System_Collections_Generic_List_object___ToArray(
                                                   (System_Collections_Generic_List_object__o *)subBuffList,
                                                   (const MethodInfo_379A314 *)Method_System_Collections_Generic_List_BattleBuffData_BuffData__ToArray__);
                          if ( !FieldEnvData_k__BackingField )
                            goto LABEL_45;
                          BattleFieldEnvironmentData__RemoveBgmRelateBuff(
                            FieldEnvData_k__BackingField,
                            (BattleBuffData_BuffData_array *)data,
                            0);
                          v45 = (BattleActionEffect_ChangeBgmBuff_o *)sub_1C32E6C(BattleActionEffect_ChangeBgmBuff_TypeInfo);
                          BattleActionEffect_ChangeBgmBuff___ctor(v45, 0);
                          BattleActionData_BuffData__SetActionEffectProc(
                            (BattleActionData_BuffData_o *)v26,
                            (BattleActionEffect_Base_o *)v45,
                            0);
                        }
                        data = (BattleData_o *)*v22;
                        if ( *v22 )
                        {
                          BattleServantData__FixHpWhenHpBaseBuffReleased((BattleServantData_o *)data, 0);
                          data = (BattleData_o *)*v22;
                          if ( *v22 )
                          {
                            MaxHp_k__BackingField = svtSnapShotOnBuffUpdate->fields._MaxHp_k__BackingField;
                            if ( MaxHp_k__BackingField == BattleServantData__getMaxHp((BattleServantData_o *)data, 0) )
                              return;
                            data = (BattleData_o *)*v22;
                            if ( *v22 )
                            {
                              data = (BattleData_o *)BattleServantData__getNowHp((BattleServantData_o *)data, 0);
                              if ( *v22 )
                              {
                                Hp_k__BackingField = svtSnapShotOnBuffUpdate->fields._Hp_k__BackingField;
                                v48 = (int)data;
                                BattleServantData__ResetBaseHpBuffActivedTimeHealValue(*v22, 0);
                                if ( *v22 )
                                {
                                  BattleActionData__addReflectLogicResultServantId(
                                    actionData,
                                    (*v22)->fields.uniqueId,
                                    0);
                                  v49 = (BattleActionEffect_SubChangeMaxHpBuff_o *)sub_1C32E6C(BattleActionEffect_SubChangeMaxHpBuff_TypeInfo);
                                  BattleActionEffect_SubChangeMaxHpBuff___ctor(v49, 0);
                                  data = (BattleData_o *)System_Collections_Generic_List_object___ToArray(
                                                           (System_Collections_Generic_List_object__o *)subBuffList,
                                                           (const MethodInfo_379A314 *)Method_System_Collections_Generic_List_BattleBuffData_BuffData__ToArray__);
                                  if ( *v22 )
                                  {
                                    if ( v49 )
                                    {
                                      v50 = (BattleActionEffect_Base_o *)((__int64 (__fastcall *)(BattleActionEffect_SubChangeMaxHpBuff_o *, BattleData_o *, _QWORD, _QWORD, const MethodInfo *))v49->klass->vtable._7_InitBuff.methodPtr)(
                                                                           v49,
                                                                           data,
                                                                           (unsigned int)(*v22)->fields.uniqueId,
                                                                           (unsigned int)(v48 - Hp_k__BackingField),
                                                                           v49->klass->vtable._7_InitBuff.method);
                                      BattleActionData_BuffData__SetActionEffectProc(
                                        (BattleActionData_BuffData_o *)v26,
                                        v50,
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
LABEL_45:
    sub_1C32E7C(data);
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
  int32_t v9; // w2
  const MethodInfo *v10; // x3
  __int64 v11; // x8
  BattleServantData_o *ServantData; // x0
  int32_t v13; // w2
  const MethodInfo *v14; // x3
  System_Func_int__int__o *v15; // x20
  System_Collections_Generic_IEnumerable_TSource__o *v16; // x0
  struct System_Int32_array *v17; // x0
  int32_t v18; // w2
  const MethodInfo *v19; // x3
  System_Collections_Generic_IEnumerable_TSource__o *v20; // x0
  struct System_Int32_array *v21; // x0
  int32_t v22; // w2
  const MethodInfo *v23; // x3

  if ( (byte_4C3A985 & 1) == 0 )
  {
    sub_1C32C20(&Method_System_Linq_Enumerable_Select_int__int___);
    sub_1C32C20(&Method_System_Linq_Enumerable_ToArray_int___);
    sub_1C32C20(&System_Func_int__int__TypeInfo);
    sub_1C32C20(&Method_BattleLogicFunction___c__DisplayClass74_0__BehaveLinkageBuffAsFamily_b__0__);
    sub_1C32C20(&BattleLogicFunction___c__DisplayClass74_0_TypeInfo);
    byte_4C3A985 = 1;
  }
  v7 = sub_1C32E6C(BattleLogicFunction___c__DisplayClass74_0_TypeInfo);
  BattleLogicFunction___c__DisplayClass74_0___ctor((BattleLogicFunction___c__DisplayClass74_0_o *)v7, 0);
  if ( !v7 )
    goto LABEL_13;
  *(_QWORD *)(v7 + 16) = funcTarget;
  sub_1C32BC4((CGThumbnailListItem_o *)(v7 + 16), (int32_t)funcTarget, v9, v10);
  v11 = *(_QWORD *)(v7 + 16);
  if ( !v11 )
    goto LABEL_13;
  data = this->fields.data;
  if ( !data )
    goto LABEL_13;
  ServantData = BattleData__getServantData(data, *(_DWORD *)(v11 + 32), 0);
  *(_QWORD *)(v7 + 24) = ServantData;
  sub_1C32BC4((CGThumbnailListItem_o *)(v7 + 24), (int32_t)ServantData, v13, v14);
  if ( !*(_QWORD *)(v7 + 24) )
    return;
  v15 = (System_Func_int__int__o *)sub_1C32E6C(System_Func_int__int__TypeInfo);
  System_Func_int__int____ctor(
    v15,
    (Il2CppObject *)v7,
    Method_BattleLogicFunction___c__DisplayClass74_0__BehaveLinkageBuffAsFamily_b__0__,
    0);
  if ( !buffData )
LABEL_13:
    sub_1C32E7C(data);
  if ( !BasicHelper__IsNullOrEmpty((System_Collections_ICollection_o *)buffData->fields.addIndividualty, 0) )
  {
    v16 = (System_Collections_Generic_IEnumerable_TSource__o *)System_Linq_Enumerable__Select_int__int_(
                                                                 (System_Collections_Generic_IEnumerable_TSource__o *)buffData->fields.addIndividualty,
                                                                 (System_Func_TSource__TResult__o *)v15,
                                                                 (const MethodInfo_31107A8 *)Method_System_Linq_Enumerable_Select_int__int___);
    v17 = System_Linq_Enumerable__ToArray_int_(
            v16,
            (const MethodInfo_311C8F4 *)Method_System_Linq_Enumerable_ToArray_int___);
    buffData->fields.familyLinkageIds = v17;
    sub_1C32BC4((CGThumbnailListItem_o *)&buffData->fields.familyLinkageIds, (int32_t)v17, v18, v19);
    BattleBuffData_BuffData__onState(buffData, 0x400000, 0);
  }
  if ( !BasicHelper__IsNullOrEmpty((System_Collections_ICollection_o *)buffData->fields.linkageTargetIndividualty, 0) )
  {
    v20 = (System_Collections_Generic_IEnumerable_TSource__o *)System_Linq_Enumerable__Select_int__int_(
                                                                 (System_Collections_Generic_IEnumerable_TSource__o *)buffData->fields.linkageTargetIndividualty,
                                                                 (System_Func_TSource__TResult__o *)v15,
                                                                 (const MethodInfo_31107A8 *)Method_System_Linq_Enumerable_Select_int__int___);
    v21 = System_Linq_Enumerable__ToArray_int_(
            v20,
            (const MethodInfo_311C8F4 *)Method_System_Linq_Enumerable_ToArray_int___);
    buffData->fields.linkageTargetIndividualty = v21;
    sub_1C32BC4((CGThumbnailListItem_o *)&buffData->fields.linkageTargetIndividualty, (int32_t)v21, v22, v23);
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
    sub_1C32E7C(this);
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
    sub_1C32E84(this);
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
  if ( (byte_4C3A9B5 & 1) == 0 )
  {
    sub_1C32C20(&Generator_BGMFromChangeBGMFunc_TypeInfo);
    this = (BattleLogicFunction_o *)sub_1C32C20(&UnityEngine_Object_TypeInfo);
    byte_4C3A9B5 = 1;
  }
  data = v6->fields.data;
  if ( !data )
    goto LABEL_16;
  FieldEnvData_k__BackingField = data->fields._FieldEnvData_k__BackingField;
  if ( bgmEnt )
  {
    id = bgmEnt->fields.id;
    v10 = (Generator_BGMFromChangeBGMFunc_o *)sub_1C32E6C(Generator_BGMFromChangeBGMFunc_TypeInfo);
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
    sub_1C32E7C(this);
  }
}


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

  if ( (byte_4C3A9B4 & 1) == 0 )
  {
    sub_1C32C20(&Method_System_Array_IndexOf_int___);
    sub_1C32C20(&CondType_TypeInfo);
    sub_1C32C20(&Method_DataManager_GetMasterData_BgmMaster___);
    sub_1C32C20(&Method_DataManager_GetMasterData_SkillLvMaster___);
    sub_1C32C20(&Method_DataMasterBase_BgmMaster__BgmEntity__int__TryGetEntity__);
    sub_1C32C20(&Method_System_Collections_Generic_List_SkillLvEntity_SvtChangeBgm__get_Count__);
    sub_1C32C20(&Method_System_Collections_Generic_List_SkillLvEntity_SvtChangeBgm__get_Item__);
    sub_1C32C20(&Method_SingletonMonoBehaviour_DataManager__getInstance__);
    sub_1C32C20(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_4C3A9B4 = 1;
  }
  result = 0;
  entity = 0;
  if ( uniqueID != -1 && actionData )
  {
    v9 = *((_QWORD *)Method_SingletonMonoBehaviour_DataManager__getInstance__ + 4);
    if ( (*(_BYTE *)(v9 + 309) & 1) == 0 )
      v9 = sub_1C83334(v4);
    v10 = *(_QWORD *)(*(_QWORD *)(v9 + 192) + 16LL);
    if ( (*(_BYTE *)(v10 + 309) & 1) == 0 )
      v10 = sub_1C83334(v4);
    MasterData_object = **(_QWORD ***)(v10 + 184);
    if ( !MasterData_object )
      goto LABEL_35;
    MasterData_object = DataManager__GetMasterData_object_(
                          (DataManager_o *)MasterData_object,
                          (const MethodInfo_30DD3F0 *)Method_DataManager_GetMasterData_SkillLvMaster___);
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
    MasterData_object = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39E2904 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !MasterData_object )
      goto LABEL_35;
    MasterData_object = DataManager__GetMasterData_object_(
                          (DataManager_o *)MasterData_object,
                          (const MethodInfo_30DD3F0 *)Method_DataManager_GetMasterData_BgmMaster___);
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
                              (const MethodInfo_37984EC *)Method_System_Collections_Generic_List_SkillLvEntity_SvtChangeBgm__get_Item__);
        if ( !MasterData_object )
          break;
        if ( System_Array__IndexOf_int_(
               v19,
               *((_DWORD *)MasterData_object + 4),
               (const MethodInfo_31E4470 *)Method_System_Array_IndexOf_int___) != -1 )
        {
          MasterData_object = System_Collections_Generic_List_object___get_Item(
                                v18,
                                v20,
                                (const MethodInfo_37984EC *)Method_System_Collections_Generic_List_SkillLvEntity_SvtChangeBgm__get_Item__);
          if ( !MasterData_object )
            break;
          v21 = *((_DWORD *)MasterData_object + 5);
          MasterData_object = System_Collections_Generic_List_object___get_Item(
                                v18,
                                v20,
                                (const MethodInfo_37984EC *)Method_System_Collections_Generic_List_SkillLvEntity_SvtChangeBgm__get_Item__);
          if ( !MasterData_object )
            break;
          v22 = *((int *)MasterData_object + 6);
          if ( !CondType_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(CondType_TypeInfo);
          IsOpen = CondType__IsOpen(46, v21, v22, 0, 0, 0);
          MasterData_object = System_Collections_Generic_List_object___get_Item(
                                v18,
                                v20,
                                (const MethodInfo_37984EC *)Method_System_Collections_Generic_List_SkillLvEntity_SvtChangeBgm__get_Item__);
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
                 (const MethodInfo_3396884 *)Method_DataMasterBase_BgmMaster__BgmEntity__int__TryGetEntity__) )
          {
            return (BgmEntity_o *)entity;
          }
        }
        if ( ++v20 >= v18->fields._size )
          return (BgmEntity_o *)entity;
      }
LABEL_35:
      sub_1C32E7C(MasterData_object);
    }
    return (BgmEntity_o *)entity;
  }
  return result;
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

  if ( (byte_4C3A9BC & 1) == 0 )
  {
    sub_1C32C20(&BattleActionData_MasterBuffData_TypeInfo);
    byte_4C3A9BC = 1;
  }
  v12 = (BattleActionData_MasterBuffData_o *)sub_1C32E6C(BattleActionData_MasterBuffData_TypeInfo);
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
    sub_1C32E7C(FunctionObject);
  BattleActionData__setBuffData(action, FunctionObject, baseVals, 0);
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
  struct System_Int32_array *vals; // x8
  int v7; // w23
  unsigned int max_length; // w10
  unsigned int v9; // w9
  int32_t v10; // w22
  int32_t v11; // w21
  int32_t battleValueKey[2]; // [xsp+8h] [xbp-38h] BYREF

  *(_QWORD *)battleValueKey = 0;
  IsExistBattleMissionValueInMasterData = (BattleData_o *)BattleLogicFunction__IsExistBattleMissionValueInMasterData(
                                                            funcEnt,
                                                            (const MethodInfo *)funcEnt);
  if ( ((unsigned __int8)IsExistBattleMissionValueInMasterData & 1) != 0 )
  {
    if ( !funcEnt || (vals = funcEnt->fields.vals) == 0 )
LABEL_14:
      sub_1C32E7C(IsExistBattleMissionValueInMasterData);
    v7 = 1;
    while ( 1 )
    {
      max_length = vals->max_length;
      v9 = v7 - 1;
      if ( v7 - 1 >= (int)max_length )
        break;
      if ( v9 >= max_length || v7 >= max_length )
        sub_1C32E84(IsExistBattleMissionValueInMasterData);
      v10 = vals->m_Items[v9];
      v11 = vals->m_Items[v7];
      if ( FunctionEntity__IsToQuoteBattleValue(funcEnt, &battleValueKey[1], 0) )
      {
        IsExistBattleMissionValueInMasterData = this->fields.data;
        if ( !IsExistBattleMissionValueInMasterData )
          goto LABEL_14;
        if ( BattleData__TryGetBattleValue(IsExistBattleMissionValueInMasterData, battleValueKey[1], battleValueKey, 0) )
          v11 = battleValueKey[0];
      }
      IsExistBattleMissionValueInMasterData = this->fields.data;
      if ( IsExistBattleMissionValueInMasterData )
      {
        BattleData__AddBattleMissionValue(IsExistBattleMissionValueInMasterData, v10, v11, 0);
        vals = funcEnt->fields.vals;
        v7 += 2;
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

  if ( (byte_4C3A9BD & 1) == 0 )
  {
    sub_1C32C20(&BattleActionData_TypeInfo);
    byte_4C3A9BD = 1;
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
          data->fields.initturn = v18;
          BYTE4(data->fields.enemyMasterInfo) = 1;
          v24 = (BattleActionData_BuffData_o *)data;
          v11 = (BattleActionData_o *)sub_1C32E6C(BattleActionData_TypeInfo);
          BattleActionData___ctor(v11, 0);
          if ( v11 )
          {
            BattleActionData__setBuffData(v11, v24, baseVals, 0);
            return v11;
          }
        }
      }
LABEL_22:
      sub_1C32E7C(data);
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
  char v8; // w21
  struct System_Int32_array *vals; // x8
  BattleServantData_o *v10; // x22
  unsigned int v11; // w9
  unsigned int max_length; // w10
  unsigned int v13; // w25
  int32_t v14; // w23
  int32_t DealtDamage; // w0
  System_Collections_Generic_List_int____o *DealtDamageSpritList_k__BackingField; // x2
  int32_t v17; // w24
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
      || (v8 = (char)IsExistBattleValueInMasterData,
          IsExistBattleValueInMasterData = BattleData__getServantData(this->fields.data, actorId, 0),
          (vals = funcEnt->fields.vals) == 0) )
    {
LABEL_18:
      sub_1C32E7C(IsExistBattleValueInMasterData);
    }
    v10 = IsExistBattleValueInMasterData;
    v11 = 0;
    while ( 1 )
    {
      max_length = vals->max_length;
      if ( (int)v11 >= (int)max_length )
        break;
      if ( v11 >= max_length || (v13 = v11 + 1, v11 + 1 >= max_length) )
        sub_1C32E84(IsExistBattleValueInMasterData);
      v14 = vals->m_Items[v11];
      if ( valueTargetType != 1 || (v8 & 1) == 0 )
      {
        v17 = vals->m_Items[v13];
      }
      else
      {
        if ( v10 )
        {
          DealtDamage = BattleServantData__get_DealtDamage(v10, 0);
          DealtDamageSpritList_k__BackingField = v10->fields._DealtDamageSpritList_k__BackingField;
          v17 = DealtDamage;
        }
        else
        {
          v17 = 0;
          DealtDamageSpritList_k__BackingField = 0;
        }
        IsExistBattleValueInMasterData = (BattleServantData_o *)this->fields.data;
        if ( !IsExistBattleValueInMasterData )
          goto LABEL_18;
        BattleData__SetSplitBattleValueForExBattleUi(
          (BattleData_o *)IsExistBattleValueInMasterData,
          v14,
          DealtDamageSpritList_k__BackingField,
          0);
      }
      IsExistBattleValueInMasterData = (BattleServantData_o *)this->fields.data;
      if ( IsExistBattleValueInMasterData )
      {
        BattleData__AddBattleValue((BattleData_o *)IsExistBattleValueInMasterData, v14, v17, 0);
        vals = funcEnt->fields.vals;
        v11 = v13 + 1;
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
  if ( (byte_4C3A997 & 1) == 0 )
  {
    this = (BattleLogicFunction_o *)sub_1C32C20(&BattleActionData_ChangeModelActionData_TypeInfo);
    byte_4C3A997 = 1;
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
    v12 = (BattleActionData_ChangeModelActionData_o *)sub_1C32E6C(BattleActionData_ChangeModelActionData_TypeInfo);
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
          BattleActionData__setBuffData(mainAction, FunctionObject, dataVals_k__BackingField, 0);
          return;
        }
      }
LABEL_16:
      sub_1C32E7C(this);
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
  if ( (byte_4C3A9B7 & 1) == 0 )
  {
    this = (BattleLogicFunction_o *)sub_1C32C20(&UnityEngine_Object_TypeInfo);
    byte_4C3A9B7 = 1;
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
    sub_1C32E7C(this);
  }
}


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
    sub_1C32E7C(this);
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
    sub_1C32E7C(0);
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
    sub_1C32E7C(this);
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
    sub_1C32E7C(this);
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
    sub_1C32E7C(this);
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
  if ( (byte_4C3A9BB & 1) == 0 )
  {
    sub_1C32C20(&BattleSkillInfoData_TypeInfo);
    sub_1C32C20(&int___TypeInfo);
    this = (BattleLogicFunction_o *)sub_1C32C20(&BattleLogicFunction_OnlyCheckFuncSideEffectFunctionArgument_TypeInfo);
    byte_4C3A9BB = 1;
  }
  baseActionData = 0;
  data = v8->fields.data;
  if ( !data )
    goto LABEL_32;
  if ( !data->fields._lastUsedPlayerSkillInfo_k__BackingField )
    return;
  v10 = (BattleSkillInfoData_o *)sub_1C32E6C(BattleSkillInfoData_TypeInfo);
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
    v16 = (BattleLogicFunction_OnlyCheckFuncSideEffectFunctionArgument_o *)sub_1C32E6C(BattleLogicFunction_OnlyCheckFuncSideEffectFunctionArgument_TypeInfo);
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
  this = (BattleLogicFunction_o *)sub_1C32CC8(int___TypeInfo, 1);
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
    sub_1C32E7C(this);
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
      sub_1C32BC4((CGThumbnailListItem_o *)(v24 + 200), (int32_t)v16, v19, v20);
      v25 = v8->fields.logic;
      if ( !v25 )
        goto LABEL_32;
      this = (BattleLogicFunction_o *)v25->fields.logicSkill;
      if ( !this )
        goto LABEL_32;
      v26 = BattleLogicSkill__createSkillData_46827536(
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
    sub_1C32E84(this);
  }
LABEL_29:
  FuncSideEffectArg = BattleLogicFunction_ProcListInArgs__get_FuncSideEffectArg(args, 0);
  if ( FuncSideEffectArg )
    BattleLogicFunction_FuncSideEffectFunctionArgument__AddTarget_46711396(
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
  if ( (byte_4C3A995 & 1) == 0 )
  {
    sub_1C32C20(&Method_BasicHelper_IndexValue_int____78064648);
    sub_1C32C20(&BattleActionData_TypeInfo);
    sub_1C32C20(&MoveToSubMemberWaveTurnEvent_TypeInfo);
    this = (BattleLogicFunction_o *)sub_1C32C20(&RestockServantLogicByMoveToSubMember_TypeInfo);
    byte_4C3A995 = 1;
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
  BattleData__SubBuffFromPT_45600156((BattleData_o *)this, targetServantData, 0);
  this = (BattleLogicFunction_o *)v9->fields.data;
  if ( !this )
    goto LABEL_13;
  BattleData__SubBuffExitSvt((BattleData_o *)this, targetServantData, 0);
  this = (BattleLogicFunction_o *)v9->fields.data;
  if ( !this )
    goto LABEL_13;
  targetServantData->fields.deckIndex = BattleData__GetSubServantUsableDeckIndex((BattleData_o *)this, isEnemy, 0);
  data = v9->fields.data;
  v13 = (MoveToSubMemberWaveTurnEvent_o *)sub_1C32E6C(MoveToSubMemberWaveTurnEvent_TypeInfo);
  MoveToSubMemberWaveTurnEvent___ctor(v13, data, 0);
  BattleServantData__RegisterWaveTurnEvent(targetServantData, (ServantWaveTurnEvent_o *)v13, 0);
  if ( !funcEnt )
    goto LABEL_13;
  v14 = isEnemy;
  v15 = BasicHelper__IndexValue_int_(
          funcEnt->fields.vals,
          0,
          0,
          (const MethodInfo_30CB8AC *)Method_BasicHelper_IndexValue_int____78064648);
  uniqueId = targetServantData->fields.uniqueId;
  v17 = v15;
  v18 = (RestockServantLogicByMoveToSubMember_o *)sub_1C32E6C(RestockServantLogicByMoveToSubMember_TypeInfo);
  RestockServantLogicByMoveToSubMember___ctor(v18, ServantIndex, v14, v17, uniqueId, 0);
  this = (BattleLogicFunction_o *)v9->fields.data;
  if ( !this
    || (BattleData__AppendRestockServantLogic((BattleData_o *)this, (RestockServantLogic_o *)v18, 0),
        v19 = (BattleActionData_o *)sub_1C32E6C(BattleActionData_TypeInfo),
        BattleActionData___ctor(v19, 0),
        !v19) )
  {
LABEL_13:
    sub_1C32E7C(this);
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
  if ( (byte_4C3A9B8 & 1) == 0 )
  {
    this = (BattleLogicFunction_o *)sub_1C32C20(&UnityEngine_Object_TypeInfo);
    byte_4C3A9B8 = 1;
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
      if ( !byte_4C313D1 )
      {
        sub_1C32C20(&UnityEngine_Vector3_TypeInfo);
        byte_4C313D1 = 1;
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
    sub_1C32E7C(this);
  }
}


void BattleLogicFunction__FunctionRevival(
        BattleLogicFunction_o *this,
        BattleActionData_o *actionData,
        BattleLogicFunctionProcess_FunctionTargetCheck_o *funcTarget,
        const MethodInfo *method)
{
  SkillLvEntity_o *Master_object; // x0
  SkillLvMaster_o *v8; // x22
  struct BattleSkillInfoData_o *skillInfo; // x8
  SkillLvEntity_o *v10; // x22
  const MethodInfo *v11; // x3

  if ( (byte_4C3A9AC & 1) == 0 )
  {
    sub_1C32C20(&Method_DataManager_GetMaster_SkillLvMaster___);
    sub_1C32C20(&DataManager_TypeInfo);
    byte_4C3A9AC = 1;
  }
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_object = (SkillLvEntity_o *)DataManager__GetMaster_object_((const MethodInfo_30DD39C *)Method_DataManager_GetMaster_SkillLvMaster___);
  if ( !actionData
    || (v8 = (SkillLvMaster_o *)Master_object, (Master_object = (SkillLvEntity_o *)actionData->fields.skillInfo) == 0)
    || (Master_object = (SkillLvEntity_o *)((__int64 (__fastcall *)(SkillLvEntity_o *, const MethodInfo *))Master_object->klass->vtable._5_CreatePrimaryKey.methodPtr)(
                                             Master_object,
                                             Master_object->klass->vtable._5_CreatePrimaryKey.method),
        (skillInfo = actionData->fields.skillInfo) == 0)
    || !v8
    || (Master_object = SkillLvMaster__GetEntity(v8, (int32_t)Master_object, skillInfo->fields.skilllv, 0)) == 0 )
  {
    sub_1C32E7C(Master_object);
  }
  v10 = Master_object;
  if ( SkillLvEntity__IsRevivalUp(Master_object, 0) || SkillLvEntity__IsRevivalUnder(v10, 0) )
    BattleLogicFunction__FunctionRevivalForMultiTarget(this, actionData, funcTarget, v11);
  else
    BattleLogicFunction__FunctionRevivalInDetail(this, actionData, funcTarget, v11);
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
  if ( (byte_4C3A9AD & 1) == 0 )
  {
    sub_1C32C20(&BattleActionData_TypeInfo);
    sub_1C32C20(&Method_DataManager_GetMasterData_SkillLvMaster___);
    sub_1C32C20(&UnityEngine_Object_TypeInfo);
    this = (BattleLogicFunction_o *)sub_1C32C20(&Method_SingletonMonoBehaviour_DataManager__getInstance__);
    byte_4C3A9AD = 1;
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
    v13 = sub_1C83334(v12);
  v14 = *(_QWORD *)(*(_QWORD *)(v13 + 192) + 16LL);
  if ( (*(_BYTE *)(v14 + 309) & 1) == 0 )
    v14 = sub_1C83334(v12);
  this = **(BattleLogicFunction_o ***)(v14 + 184);
  if ( !this )
    goto LABEL_56;
  this = (BattleLogicFunction_o *)DataManager__GetMasterData_object_(
                                    (DataManager_o *)this,
                                    (const MethodInfo_30DD3F0 *)Method_DataManager_GetMasterData_SkillLvMaster___);
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
          v21 = (BattleActionData_o *)sub_1C32E6C(BattleActionData_TypeInfo);
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
    sub_1C32E7C(this);
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
      v28 = (BattleActionData_o *)sub_1C32E6C(BattleActionData_TypeInfo);
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
  int32_t v10; // w2
  const MethodInfo *v11; // x3
  struct BattleLogicFunctionProcess_FunctionUnitCheck_o *funcUnit_k__BackingField; // x8
  int32_t v13; // w2
  const MethodInfo *v14; // x3
  struct BattleLogicFunctionProcess_FunctionUnitCheck_o *v15; // x8
  System_Collections_Generic_List_object__o *v16; // x20
  int32_t v17; // w2
  const MethodInfo *v18; // x3
  SkillLvMaster_o *v19; // x20
  _DWORD *methods; // x8
  System_Collections_ICollection_o *RevivalTargetArray; // x20
  _BOOL8 IsNullOrEmpty; // x0
  const MethodInfo *v23; // x2
  System_Collections_Generic_IEnumerable_TSource__o *DeadAnimBeDoneSvtArray; // x21
  BattleLogicFunction___c_c *v25; // x8
  System_Func_object__int__o *_9__117_0; // x22
  Il2CppObject *v27; // x23
  struct BattleLogicFunction___c_StaticFields *static_fields; // x0
  int32_t v29; // w2
  const MethodInfo *v30; // x3
  System_Collections_Generic_IEnumerable_IGrouping_TKey__TSource___o *v31; // x0
  BattleLogicFunction___c_c *v32; // x8
  System_Collections_Generic_IEnumerable_TSource__o *v33; // x21
  System_Func_object__int__o *_9__117_1; // x22
  Il2CppObject *v35; // x23
  struct BattleLogicFunction___c_StaticFields *v36; // x0
  int32_t v37; // w2
  const MethodInfo *v38; // x3
  System_Func_object__object__o *_9__117_2; // x23
  Il2CppObject *v40; // x24
  struct BattleLogicFunction___c_StaticFields *v41; // x0
  int32_t v42; // w2
  const MethodInfo *v43; // x3
  int32_t v44; // w2
  const MethodInfo *v45; // x3
  const MethodInfo *v46; // x2
  long double inited; // q0
  void *monitor; // x8
  unsigned __int64 v49; // x28
  int32_t v50; // w23
  _QWORD *v51; // x24
  __int64 v52; // x8
  __int64 v53; // x0
  __int64 v54; // x0
  BattleLogicFunction___c__DisplayClass117_0_o *v55; // x4
  const MethodInfo *v56; // x5
  __int64 v57; // x8
  __int64 v58; // x24
  unsigned __int64 v59; // x21
  __int64 v60; // x20
  BattleServantData_o *v61; // x25
  const MethodInfo *v62; // x6
  int32_t v63; // w27
  BattleActionData_o *v64; // x26
  int32_t v65; // w2
  const MethodInfo *v66; // x3
  int32_t v67; // w2
  const MethodInfo *v68; // x3
  __int64 v69; // x8
  _QWORD *v70; // x9
  __int64 v71; // x10
  __int64 v72; // x8
  System_Collections_ICollection_o *v73; // [xsp+8h] [xbp-B8h]
  System_Collections_Generic_Dictionary_K__V__o *dic; // [xsp+10h] [xbp-B0h]
  int32_t expelledUniqueId[2]; // [xsp+18h] [xbp-A8h] BYREF
  CGThumbnailListItem_o v76; // [xsp+20h] [xbp-A0h] BYREF

  if ( (byte_4C3A9AF & 1) == 0 )
  {
    sub_1C32C20(&Method_System_Array_Empty_BattleServantData___);
    sub_1C32C20(&Method_BasicHelper_GetValue_int__BattleServantData_____);
    sub_1C32C20(&Method_DataManager_GetMaster_SkillLvMaster___);
    sub_1C32C20(&DataManager_TypeInfo);
    sub_1C32C20(&Method_System_Linq_Enumerable_GroupBy_BattleServantData__int___);
    sub_1C32C20(&Method_System_Linq_Enumerable_ToDictionary_IGrouping_int__BattleServantData___int__BattleServantData_____);
    sub_1C32C20(&System_Func_IGrouping_int__BattleServantData___int__TypeInfo);
    sub_1C32C20(&System_Func_BattleServantData__int__TypeInfo);
    sub_1C32C20(&System_Func_IGrouping_int__BattleServantData___BattleServantData____TypeInfo);
    sub_1C32C20(&Method_System_Collections_Generic_List_BattleServantData__Add__);
    sub_1C32C20(&Method_System_Collections_Generic_List_BattleServantData___ctor__);
    sub_1C32C20(&System_Collections_Generic_List_BattleServantData__TypeInfo);
    sub_1C32C20(&Method_BattleLogicFunction___c__FunctionRevivalInDetail_b__117_0__);
    sub_1C32C20(&Method_BattleLogicFunction___c__FunctionRevivalInDetail_b__117_1__);
    sub_1C32C20(&Method_BattleLogicFunction___c__FunctionRevivalInDetail_b__117_2__);
    sub_1C32C20(&BattleLogicFunction___c_TypeInfo);
    byte_4C3A9AF = 1;
  }
  *(_QWORD *)expelledUniqueId = 0;
  v76.klass = (CGThumbnailListItem_c *)actionData;
  memset(&v76.monitor, 0, 56);
  sub_1C32BC4(&v76, (int32_t)actionData, (int32_t)funcTarget, method);
  v76.monitor = this;
  sub_1C32BC4((CGThumbnailListItem_o *)&v76.monitor, (int32_t)this, v7, v8);
  if ( !funcTarget )
    goto LABEL_67;
  funcUnit_k__BackingField = funcTarget->fields._funcUnit_k__BackingField;
  if ( !funcUnit_k__BackingField )
    goto LABEL_67;
  v76.fields.sortValue0 = (int64_t)funcUnit_k__BackingField->fields._dataVals_k__BackingField;
  sub_1C32BC4((CGThumbnailListItem_o *)&v76.fields.sortValue0, v76.fields.sortValue0, v10, v11);
  if ( !v76.fields.sortValue0 )
    goto LABEL_67;
  *(_QWORD *)&v76.fields.sortIndex = *(_QWORD *)(v76.fields.sortValue0 + 40);
  sub_1C32BC4((CGThumbnailListItem_o *)&v76.fields.sortIndex, v76.fields.sortIndex, v13, v14);
  procArg_k__BackingField = (__int64)funcTarget->fields._funcUnit_k__BackingField;
  if ( !procArg_k__BackingField )
    goto LABEL_67;
  procArg_k__BackingField = BattleLogicFunctionProcess_FunctionUnitCheck__get_FuncIndex(
                              (BattleLogicFunctionProcess_FunctionUnitCheck_o *)procArg_k__BackingField,
                              0);
  v76.fields.index = procArg_k__BackingField;
  v15 = funcTarget->fields._funcUnit_k__BackingField;
  if ( !v15 )
    goto LABEL_67;
  procArg_k__BackingField = (__int64)v15->fields._procArg_k__BackingField;
  if ( !procArg_k__BackingField )
    goto LABEL_67;
  LOBYTE(v76.fields.sortValue0B) = BattleLogicFunction_ProcListInArgs__get_IsCommandSideEffect(
                                     (BattleLogicFunction_ProcListInArgs_o *)procArg_k__BackingField,
                                     0);
  v16 = (System_Collections_Generic_List_object__o *)sub_1C32E6C(System_Collections_Generic_List_BattleServantData__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v16,
    (const MethodInfo_3797F88 *)Method_System_Collections_Generic_List_BattleServantData___ctor__);
  v76.fields.sortValue1 = (int64_t)v16;
  sub_1C32BC4((CGThumbnailListItem_o *)&v76.fields.sortValue1, (int32_t)v16, v17, v18);
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  procArg_k__BackingField = (__int64)DataManager__GetMaster_object_((const MethodInfo_30DD39C *)Method_DataManager_GetMaster_SkillLvMaster___);
  if ( !v76.klass )
    goto LABEL_67;
  v19 = (SkillLvMaster_o *)procArg_k__BackingField;
  procArg_k__BackingField = (__int64)v76.klass->_1.methods;
  if ( !procArg_k__BackingField )
    goto LABEL_67;
  procArg_k__BackingField = (*(__int64 (__fastcall **)(__int64, _QWORD))(*(_QWORD *)procArg_k__BackingField + 392LL))(
                              procArg_k__BackingField,
                              *(_QWORD *)(*(_QWORD *)procArg_k__BackingField + 400LL));
  if ( !v76.klass )
    goto LABEL_67;
  methods = v76.klass->_1.methods;
  if ( !methods )
    goto LABEL_67;
  if ( !v19 )
    goto LABEL_67;
  procArg_k__BackingField = (__int64)SkillLvMaster__GetEntity(v19, procArg_k__BackingField, methods[9], 0);
  if ( !procArg_k__BackingField )
    goto LABEL_67;
  RevivalTargetArray = (System_Collections_ICollection_o *)SkillLvEntity__GetRevivalTargetArray(
                                                             (SkillLvEntity_o *)procArg_k__BackingField,
                                                             0);
  IsNullOrEmpty = BasicHelper__IsNullOrEmpty(RevivalTargetArray, 0);
  if ( IsNullOrEmpty )
    goto LABEL_66;
  procArg_k__BackingField = v76.fields.sortValue0;
  if ( !v76.fields.sortValue0 )
    goto LABEL_67;
  v76.fields.selectNum = DataVals__GetValue((DataVals_o *)v76.fields.sortValue0, 0);
  procArg_k__BackingField = (__int64)this->fields.data;
  if ( !procArg_k__BackingField )
    goto LABEL_67;
  DeadAnimBeDoneSvtArray = (System_Collections_Generic_IEnumerable_TSource__o *)BattleData__GetDeadAnimBeDoneSvtArray(
                                                                                  (BattleData_o *)procArg_k__BackingField,
                                                                                  0);
  v25 = BattleLogicFunction___c_TypeInfo;
  if ( !BattleLogicFunction___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BattleLogicFunction___c_TypeInfo);
    v25 = BattleLogicFunction___c_TypeInfo;
  }
  _9__117_0 = (System_Func_object__int__o *)v25->static_fields->__9__117_0;
  if ( !_9__117_0 )
  {
    if ( !v25->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v25);
      v25 = BattleLogicFunction___c_TypeInfo;
    }
    v27 = (Il2CppObject *)v25->static_fields->__9;
    _9__117_0 = (System_Func_object__int__o *)sub_1C32E6C(System_Func_BattleServantData__int__TypeInfo);
    System_Func_object__int____ctor(
      _9__117_0,
      v27,
      Method_BattleLogicFunction___c__FunctionRevivalInDetail_b__117_0__,
      0);
    static_fields = BattleLogicFunction___c_TypeInfo->static_fields;
    static_fields->__9__117_0 = (struct System_Func_BattleServantData__int__o *)_9__117_0;
    sub_1C32BC4((CGThumbnailListItem_o *)&static_fields->__9__117_0, (int32_t)_9__117_0, v29, v30);
  }
  v31 = System_Linq_Enumerable__GroupBy_object__int_(
          DeadAnimBeDoneSvtArray,
          (System_Func_TSource__TKey__o *)_9__117_0,
          (const MethodInfo_31077C8 *)Method_System_Linq_Enumerable_GroupBy_BattleServantData__int___);
  v32 = BattleLogicFunction___c_TypeInfo;
  v33 = (System_Collections_Generic_IEnumerable_TSource__o *)v31;
  if ( !BattleLogicFunction___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BattleLogicFunction___c_TypeInfo);
    v32 = BattleLogicFunction___c_TypeInfo;
  }
  _9__117_1 = (System_Func_object__int__o *)v32->static_fields->__9__117_1;
  if ( !_9__117_1 )
  {
    if ( !v32->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v32);
      v32 = BattleLogicFunction___c_TypeInfo;
    }
    v35 = (Il2CppObject *)v32->static_fields->__9;
    _9__117_1 = (System_Func_object__int__o *)sub_1C32E6C(System_Func_IGrouping_int__BattleServantData___int__TypeInfo);
    System_Func_object__int____ctor(
      _9__117_1,
      v35,
      Method_BattleLogicFunction___c__FunctionRevivalInDetail_b__117_1__,
      0);
    v36 = BattleLogicFunction___c_TypeInfo->static_fields;
    v36->__9__117_1 = (struct System_Func_IGrouping_int__BattleServantData___int__o *)_9__117_1;
    sub_1C32BC4((CGThumbnailListItem_o *)&v36->__9__117_1, (int32_t)_9__117_1, v37, v38);
    v32 = BattleLogicFunction___c_TypeInfo;
  }
  if ( !v32->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(v32);
    v32 = BattleLogicFunction___c_TypeInfo;
  }
  _9__117_2 = (System_Func_object__object__o *)v32->static_fields->__9__117_2;
  if ( !_9__117_2 )
  {
    if ( !v32->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v32);
      v32 = BattleLogicFunction___c_TypeInfo;
    }
    v40 = (Il2CppObject *)v32->static_fields->__9;
    _9__117_2 = (System_Func_object__object__o *)sub_1C32E6C(System_Func_IGrouping_int__BattleServantData___BattleServantData____TypeInfo);
    System_Func_object__object____ctor(
      _9__117_2,
      v40,
      Method_BattleLogicFunction___c__FunctionRevivalInDetail_b__117_2__,
      0);
    v41 = BattleLogicFunction___c_TypeInfo->static_fields;
    v41->__9__117_2 = (struct System_Func_IGrouping_int__BattleServantData___BattleServantData____o *)_9__117_2;
    sub_1C32BC4((CGThumbnailListItem_o *)&v41->__9__117_2, (int32_t)_9__117_2, v42, v43);
  }
  procArg_k__BackingField = (__int64)System_Linq_Enumerable__ToDictionary_object__int__object_(
                                       v33,
                                       (System_Func_TSource__TKey__o *)_9__117_1,
                                       (System_Func_TSource__TElement__o *)_9__117_2,
                                       (const MethodInfo_311D3A4 *)Method_System_Linq_Enumerable_ToDictionary_IGrouping_int__BattleServantData___int__BattleServantData_____);
  dic = (System_Collections_Generic_Dictionary_K__V__o *)procArg_k__BackingField;
  if ( !v76.klass
    || (v76.fields.sortStr1 = (struct System_String_o *)BattleActionData__SeekLastActionData(
                                                          (BattleActionData_o *)v76.klass,
                                                          0),
        sub_1C32BC4((CGThumbnailListItem_o *)&v76.fields.sortStr1, (int32_t)v76.fields.sortStr1, v44, v45),
        !RevivalTargetArray) )
  {
LABEL_67:
    sub_1C32E7C(procArg_k__BackingField);
  }
  monitor = RevivalTargetArray[1].monitor;
  if ( (int)monitor >= 1 )
  {
    v49 = 0;
    v73 = RevivalTargetArray;
    while ( 1 )
    {
      if ( v49 >= (unsigned int)monitor )
        goto LABEL_68;
      v50 = *((_DWORD *)&RevivalTargetArray[2].klass + v49);
      v51 = Method_System_Array_Empty_BattleServantData___;
      v52 = *((_QWORD *)Method_System_Array_Empty_BattleServantData___ + 7);
      if ( !v52 )
      {
        sub_1C83390(Method_System_Array_Empty_BattleServantData___);
        v52 = v51[7];
      }
      v53 = *(_QWORD *)(v52 + 16);
      if ( (*(_BYTE *)(v53 + 309) & 1) == 0 )
        v53 = sub_1C83334(inited);
      if ( !*(_DWORD *)(v53 + 224) )
        inited = j_il2cpp_runtime_class_init_0(v53);
      v54 = *(_QWORD *)(v51[7] + 16LL);
      if ( (*(_BYTE *)(v54 + 309) & 1) == 0 )
        v54 = sub_1C83334(inited);
      procArg_k__BackingField = (__int64)BasicHelper__GetValue_int__object_(
                                           dic,
                                           v50,
                                           **(Il2CppObject ***)(v54 + 184),
                                           (const MethodInfo_30CB13C *)Method_BasicHelper_GetValue_int__BattleServantData_____);
      if ( !procArg_k__BackingField )
        goto LABEL_67;
      v57 = *(_QWORD *)(procArg_k__BackingField + 24);
      v58 = procArg_k__BackingField;
      if ( (int)v57 >= 1 )
        break;
LABEL_64:
      RevivalTargetArray = v73;
      ++v49;
      LODWORD(monitor) = v73[1].monitor;
      if ( (__int64)v49 >= (int)monitor )
        goto LABEL_65;
    }
    v59 = 0;
    v60 = procArg_k__BackingField + 32;
    while ( v59 < (unsigned int)v57 )
    {
      v61 = *(BattleServantData_o **)(v60 + 8 * v59);
      procArg_k__BackingField = BattleLogicFunction___FunctionRevivalInDetail_g__TryGetEntryIndex_117_5(
                                  this,
                                  v61,
                                  &expelledUniqueId[1],
                                  expelledUniqueId,
                                  v55,
                                  v56);
      if ( (procArg_k__BackingField & 1) != 0 )
      {
        v63 = expelledUniqueId[1];
        procArg_k__BackingField = (__int64)BattleLogicFunction___FunctionRevivalInDetail_g__GenerateRevivalActionData_117_3(
                                             this,
                                             v61,
                                             v50,
                                             expelledUniqueId[1],
                                             expelledUniqueId[0],
                                             (BattleLogicFunction___c__DisplayClass117_0_o *)&v76,
                                             v62);
        if ( !this->fields.data )
          goto LABEL_67;
        v64 = (BattleActionData_o *)procArg_k__BackingField;
        BattleData__SetEntry(this->fields.data, v61, v63, 1, 0);
        procArg_k__BackingField = (__int64)v76.fields.sortStr1;
        if ( !v76.fields.sortStr1 )
          goto LABEL_67;
        BattleActionData__AddAfterActionData((BattleActionData_o *)v76.fields.sortStr1, v64, 0, 0);
        v76.fields.sortStr1 = (struct System_String_o *)v64;
        sub_1C32BC4((CGThumbnailListItem_o *)&v76.fields.sortStr1, (int32_t)v64, v65, v66);
        procArg_k__BackingField = v76.fields.sortValue1;
        if ( !v76.fields.sortValue1 )
          goto LABEL_67;
        v69 = *(_QWORD *)(v76.fields.sortValue1 + 16);
        v70 = Method_System_Collections_Generic_List_BattleServantData__Add__;
        ++*(_DWORD *)(v76.fields.sortValue1 + 28);
        if ( !v69 )
          goto LABEL_67;
        v71 = *(int *)(procArg_k__BackingField + 24);
        if ( (unsigned int)v71 >= *(_DWORD *)(v69 + 24) )
        {
          System_Collections_Generic_List_object___AddWithResize(
            (System_Collections_Generic_List_object__o *)procArg_k__BackingField,
            (Il2CppObject *)v61,
            *(const MethodInfo_37987BC **)(*(_QWORD *)(v70[4] + 192LL) + 112LL));
        }
        else
        {
          v72 = v69 + 8 * v71;
          *(_DWORD *)(procArg_k__BackingField + 24) = v71 + 1;
          *(_QWORD *)(v72 + 32) = v61;
          sub_1C32BC4((CGThumbnailListItem_o *)(v72 + 32), (int32_t)v61, v67, v68);
        }
      }
      LODWORD(v57) = *(_DWORD *)(v58 + 24);
      if ( (__int64)++v59 >= (int)v57 )
        goto LABEL_64;
    }
LABEL_68:
    sub_1C32E84(procArg_k__BackingField);
  }
LABEL_65:
  BattleLogicFunction___FunctionRevivalInDetail_g__AfterProcessForRevivedServants_117_6(
    this,
    (BattleLogicFunction___c__DisplayClass117_0_o *)&v76,
    v46);
LABEL_66:
  BattleLogicFunction___FunctionRevivalInDetail_g__SetMissIfNoActions_117_4(
    (BattleLogicFunction_o *)IsNullOrEmpty,
    (BattleLogicFunction___c__DisplayClass117_0_o *)&v76,
    v23);
}


void BattleLogicFunction__FunctionSetBattleMissionValue(
        BattleLogicFunction_o *this,
        FunctionEntity_o *funcEnt,
        const MethodInfo *method)
{
  BattleData_o *IsExistBattleMissionValueInMasterData; // x0
  struct System_Int32_array *vals; // x8
  int v7; // w23
  unsigned int max_length; // w10
  unsigned int v9; // w9
  int32_t v10; // w22
  int32_t v11; // w21
  int32_t battleValueKey[2]; // [xsp+8h] [xbp-38h] BYREF

  *(_QWORD *)battleValueKey = 0;
  IsExistBattleMissionValueInMasterData = (BattleData_o *)BattleLogicFunction__IsExistBattleMissionValueInMasterData(
                                                            funcEnt,
                                                            (const MethodInfo *)funcEnt);
  if ( ((unsigned __int8)IsExistBattleMissionValueInMasterData & 1) != 0 )
  {
    if ( !funcEnt || (vals = funcEnt->fields.vals) == 0 )
LABEL_14:
      sub_1C32E7C(IsExistBattleMissionValueInMasterData);
    v7 = 1;
    while ( 1 )
    {
      max_length = vals->max_length;
      v9 = v7 - 1;
      if ( v7 - 1 >= (int)max_length )
        break;
      if ( v9 >= max_length || v7 >= max_length )
        sub_1C32E84(IsExistBattleMissionValueInMasterData);
      v10 = vals->m_Items[v9];
      v11 = vals->m_Items[v7];
      if ( FunctionEntity__IsToQuoteBattleValue(funcEnt, &battleValueKey[1], 0) )
      {
        IsExistBattleMissionValueInMasterData = this->fields.data;
        if ( !IsExistBattleMissionValueInMasterData )
          goto LABEL_14;
        if ( BattleData__TryGetBattleValue(IsExistBattleMissionValueInMasterData, battleValueKey[1], battleValueKey, 0) )
          v11 = battleValueKey[0];
      }
      IsExistBattleMissionValueInMasterData = this->fields.data;
      if ( IsExistBattleMissionValueInMasterData )
      {
        BattleData__SetBattleMissionValue(IsExistBattleMissionValueInMasterData, v10, v11, 0);
        vals = funcEnt->fields.vals;
        v7 += 2;
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
  char v8; // w21
  struct System_Int32_array *vals; // x8
  BattleServantData_o *v10; // x22
  unsigned int v11; // w9
  unsigned int max_length; // w10
  unsigned int v13; // w25
  int32_t v14; // w23
  int32_t DealtDamage; // w0
  System_Collections_Generic_List_int____o *DealtDamageSpritList_k__BackingField; // x2
  int32_t v17; // w24
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
      || (v8 = (char)IsExistBattleValueInMasterData,
          IsExistBattleValueInMasterData = BattleData__getServantData(this->fields.data, actorId, 0),
          (vals = funcEnt->fields.vals) == 0) )
    {
LABEL_18:
      sub_1C32E7C(IsExistBattleValueInMasterData);
    }
    v10 = IsExistBattleValueInMasterData;
    v11 = 0;
    while ( 1 )
    {
      max_length = vals->max_length;
      if ( (int)v11 >= (int)max_length )
        break;
      if ( v11 >= max_length || (v13 = v11 + 1, v11 + 1 >= max_length) )
        sub_1C32E84(IsExistBattleValueInMasterData);
      v14 = vals->m_Items[v11];
      if ( valueTargetType != 1 || (v8 & 1) == 0 )
      {
        v17 = vals->m_Items[v13];
      }
      else
      {
        if ( v10 )
        {
          DealtDamage = BattleServantData__get_DealtDamage(v10, 0);
          DealtDamageSpritList_k__BackingField = v10->fields._DealtDamageSpritList_k__BackingField;
          v17 = DealtDamage;
        }
        else
        {
          v17 = 0;
          DealtDamageSpritList_k__BackingField = 0;
        }
        IsExistBattleValueInMasterData = (BattleServantData_o *)this->fields.data;
        if ( !IsExistBattleValueInMasterData )
          goto LABEL_18;
        BattleData__SetSplitBattleValueForExBattleUi(
          (BattleData_o *)IsExistBattleValueInMasterData,
          v14,
          DealtDamageSpritList_k__BackingField,
          0);
      }
      IsExistBattleValueInMasterData = (BattleServantData_o *)this->fields.data;
      if ( IsExistBattleValueInMasterData )
      {
        BattleData__SetBattleValue((BattleData_o *)IsExistBattleValueInMasterData, v14, v17, 0);
        vals = funcEnt->fields.vals;
        v11 = v13 + 1;
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
    sub_1C32E7C(this);
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

  if ( (byte_4C3A9BE & 1) == 0 )
  {
    sub_1C32C20(&BattleActionData_TypeInfo);
    byte_4C3A9BE = 1;
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
          HIDWORD(data->fields.m_CancellationTokenSource) = 5;
          v16 = (BattleActionData_BuffData_o *)data;
          v11 = (BattleActionData_o *)sub_1C32E6C(BattleActionData_TypeInfo);
          BattleActionData___ctor(v11, 0);
          if ( v11 )
          {
            BattleActionData__setBuffData(v11, v16, baseVals, 0);
            return v11;
          }
        }
      }
    }
LABEL_12:
    sub_1C32E7C(data);
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
  const MethodInfo *v20; // x7
  BattleActionData_BuffData_o *FunctionObject; // x23
  System_Func_object__object__o *v22; // x24
  System_Collections_Generic_IEnumerable_TSource__o *v23; // x0
  int32_t v24; // w2
  const MethodInfo *v25; // x3
  BattleLogicFunction___c_c *v26; // x0
  System_Func_object__bool__o *_9__132_1; // x21
  Il2CppObject *v28; // x24
  CGThumbnailListItem_o *static_fields; // x0
  int32_t v30; // w2
  const MethodInfo *v31; // x3
  BattleActionEffect_UpdateAllInfo_o *v32; // x21

  v8 = (Il2CppObject *)this;
  if ( (byte_4C3A9BA & 1) == 0 )
  {
    sub_1C32C20(&Method_BasicHelper_Any_BattleBuffData_BuffData___);
    sub_1C32C20(&Method_BattleLogicFunction__FunctionSubFieldBuff_b__132_0__);
    sub_1C32C20(&Method_System_Linq_Enumerable_Select_BattleBuffData_BuffData__BattleBuffData_BuffData___);
    sub_1C32C20(&Method_System_Linq_Enumerable_ToList_BattleBuffData_BuffData___);
    sub_1C32C20(&System_Func_BattleBuffData_BuffData__BattleBuffData_BuffData__TypeInfo);
    sub_1C32C20(&System_Func_BattleBuffData_BuffData__bool__TypeInfo);
    sub_1C32C20(&Method_System_Collections_Generic_List_BattleBuffData_BuffData__get_Count__);
    sub_1C32C20(&Method_BattleLogicFunction___c__FunctionSubFieldBuff_b__132_1__);
    sub_1C32C20(&BattleLogicFunction___c_TypeInfo);
    this = (BattleLogicFunction_o *)sub_1C32C20(&BattleActionEffect_UpdateAllInfo_TypeInfo);
    byte_4C3A9BA = 1;
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
    v22 = (System_Func_object__object__o *)sub_1C32E6C(System_Func_BattleBuffData_BuffData__BattleBuffData_BuffData__TypeInfo);
    System_Func_object__object____ctor(v22, v8, Method_BattleLogicFunction__FunctionSubFieldBuff_b__132_0__, 0);
    v23 = (System_Collections_Generic_IEnumerable_TSource__o *)System_Linq_Enumerable__Select_object__object_(
                                                                 (System_Collections_Generic_IEnumerable_TSource__o *)data,
                                                                 (System_Func_TSource__TResult__o *)v22,
                                                                 (const MethodInfo_3113ABC *)Method_System_Linq_Enumerable_Select_BattleBuffData_BuffData__BattleBuffData_BuffData___);
    this = (BattleLogicFunction_o *)System_Linq_Enumerable__ToList_object_(
                                      v23,
                                      (const MethodInfo_3121728 *)Method_System_Linq_Enumerable_ToList_BattleBuffData_BuffData___);
    if ( FunctionObject )
    {
      FunctionObject->fields.removeBuffList = (struct System_Collections_Generic_List_BattleBuffData_BuffData__o *)this;
      sub_1C32BC4((CGThumbnailListItem_o *)&FunctionObject->fields.removeBuffList, (int32_t)this, v24, v25);
      v26 = BattleLogicFunction___c_TypeInfo;
      if ( !BattleLogicFunction___c_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(BattleLogicFunction___c_TypeInfo);
        v26 = BattleLogicFunction___c_TypeInfo;
      }
      _9__132_1 = (System_Func_object__bool__o *)v26->static_fields->__9__132_1;
      if ( !_9__132_1 )
      {
        if ( !v26->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(v26);
          v26 = BattleLogicFunction___c_TypeInfo;
        }
        v28 = (Il2CppObject *)v26->static_fields->__9;
        _9__132_1 = (System_Func_object__bool__o *)sub_1C32E6C(System_Func_BattleBuffData_BuffData__bool__TypeInfo);
        System_Func_object__bool____ctor(
          _9__132_1,
          v28,
          Method_BattleLogicFunction___c__FunctionSubFieldBuff_b__132_1__,
          0);
        static_fields = (CGThumbnailListItem_o *)BattleLogicFunction___c_TypeInfo->static_fields;
        static_fields[1].klass = (CGThumbnailListItem_c *)_9__132_1;
        sub_1C32BC4(static_fields + 1, (int32_t)_9__132_1, v30, v31);
      }
      this = (BattleLogicFunction_o *)BasicHelper__Any_object_(
                                        (System_Collections_Generic_List_T__o *)data,
                                        (System_Func_T__bool__o *)_9__132_1,
                                        (const MethodInfo_30C6790 *)Method_BasicHelper_Any_BattleBuffData_BuffData___);
      if ( ((unsigned __int8)this & 1) != 0 )
      {
        v32 = (BattleActionEffect_UpdateAllInfo_o *)sub_1C32E6C(BattleActionEffect_UpdateAllInfo_TypeInfo);
        BattleActionEffect_UpdateAllInfo___ctor(v32, 0);
        BattleActionData_BuffData__SetActionEffectProc(FunctionObject, (BattleActionEffect_Base_o *)v32, 0);
      }
      if ( mainAction )
      {
        BattleActionData__setBuffData(mainAction, FunctionObject, dataVals_k__BackingField, 0);
        return;
      }
    }
LABEL_26:
    sub_1C32E7C(this);
  }
  this = (BattleLogicFunction_o *)BattleLogicFunction__getNoEffectObject(
                                    (BattleLogicFunction_o *)v8,
                                    targetId_k__BackingField,
                                    v13,
                                    dataVals_k__BackingField,
                                    IsCommandSideEffect,
                                    0,
                                    v15,
                                    v20);
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
  BattleLogicFunction___c__DisplayClass154_0_o *v12; // x24
  __int64 IsNullOrEmpty; // x0
  System_Int32_array *BackStepTargetArray; // x20
  System_Int32_array *ReplacePositionTargetArray; // x27
  BattleActionData_o *v16; // x26
  int max_length; // w8
  _BOOL4 v18; // w28
  int v19; // w10
  unsigned __int64 v20; // x8
  int32_t *m_Items; // x11
  int32_t *v22; // x12
  int v23; // w14
  int v24; // w15
  int v25; // w14
  int v26; // w14
  bool v27; // zf
  bool v28; // nf
  int v29; // w15
  System_Collections_Generic_List_object__o *v30; // x25
  const MethodInfo *v31; // x3
  int v32; // w8
  __int64 v33; // x22
  __int64 v34; // x8
  char *v35; // x8
  int32_t v36; // w1
  int32_t v37; // w2
  const MethodInfo *v38; // x3
  struct System_Object_array *items; // x8
  _QWORD *v40; // x9
  __int64 size; // x10
  __int64 v42; // x1
  Il2CppClass **v43; // x0
  BattleLogicFunction___c_c *v44; // x0
  System_Func_int__Guid__o *_9__154_0; // x27
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

  if ( (byte_4C3A9C1 & 1) == 0 )
  {
    sub_1C32C20(&Method_BasicHelper_IsValidIndex_int___);
    sub_1C32C20(&BattleActionData_TypeInfo);
    sub_1C32C20(&Method_System_Linq_Enumerable_Contains_int___);
    sub_1C32C20(&Method_System_Linq_Enumerable_OfType_RestockServantLogicByMoveToSubMember___);
    sub_1C32C20(&Method_System_Linq_Enumerable_OrderBy_int__Guid___);
    sub_1C32C20(&Method_System_Linq_Enumerable_ToArray_int___);
    sub_1C32C20(&Method_System_Linq_Enumerable_ToArray_RestockServantLogicByMoveToSubMember___);
    sub_1C32C20(&Method_System_Linq_Enumerable_Where_RestockServantLogicByMoveToSubMember___);
    sub_1C32C20(&System_Func_int__Guid__TypeInfo);
    sub_1C32C20(&System_Func_RestockServantLogicByMoveToSubMember__bool__TypeInfo);
    sub_1C32C20(&Method_System_Collections_Generic_List_BattleServantData__Add__);
    sub_1C32C20(&Method_System_Collections_Generic_List_BattleServantData___ctor__);
    sub_1C32C20(&Method_System_Collections_Generic_List_BattleServantData__get_Count__);
    sub_1C32C20(&Method_System_Collections_Generic_List_BattleServantData__get_Item__);
    sub_1C32C20(&System_Collections_Generic_List_BattleServantData__TypeInfo);
    sub_1C32C20(&Method_BattleLogicFunction___c__FunctionSwapFieldPosition_b__154_0__);
    sub_1C32C20(&Method_BattleLogicFunction___c__DisplayClass154_0__FunctionSwapFieldPosition_b__1__);
    sub_1C32C20(&BattleLogicFunction___c__DisplayClass154_0_TypeInfo);
    sub_1C32C20(&BattleLogicFunction___c_TypeInfo);
    byte_4C3A9C1 = 1;
  }
  v12 = (BattleLogicFunction___c__DisplayClass154_0_o *)sub_1C32E6C(BattleLogicFunction___c__DisplayClass154_0_TypeInfo);
  BattleLogicFunction___c__DisplayClass154_0___ctor(v12, 0);
  if ( !v12 )
    goto LABEL_107;
  v12->fields.isEnemy = isEnemy;
  if ( !baseVals )
    goto LABEL_107;
  BackStepTargetArray = DataVals__GetBackStepTargetArray(baseVals, 0);
  ReplacePositionTargetArray = DataVals__GetReplacePositionTargetArray(baseVals, 0);
  v16 = 0;
  if ( BasicHelper__IsNullOrEmpty((System_Collections_ICollection_o *)BackStepTargetArray, 0) )
    return v16;
  IsNullOrEmpty = BasicHelper__IsNullOrEmpty((System_Collections_ICollection_o *)ReplacePositionTargetArray, 0);
  v16 = 0;
  if ( (IsNullOrEmpty & 1) != 0 )
    return v16;
  if ( !ReplacePositionTargetArray )
    goto LABEL_107;
  max_length = ReplacePositionTargetArray->max_length;
  v18 = max_length == 1 && ReplacePositionTargetArray->m_Items[0] == 0;
  if ( !BackStepTargetArray )
    goto LABEL_107;
  v19 = BackStepTargetArray->max_length;
  if ( v19 != max_length && !v18 )
    return 0;
  if ( v12->fields.isEnemy )
  {
    IsNullOrEmpty = (__int64)this->fields.data;
    if ( !IsNullOrEmpty )
      goto LABEL_107;
    IsNullOrEmpty = BattleData__getServantIndex((BattleData_o *)IsNullOrEmpty, 1, *(_DWORD *)(IsNullOrEmpty + 336), 0);
    v19 = BackStepTargetArray->max_length;
  }
  else
  {
    IsNullOrEmpty = 0xFFFFFFFFLL;
  }
  if ( v19 >= 1 )
  {
    v20 = 0;
    m_Items = BackStepTargetArray->m_Items;
    v22 = ReplacePositionTargetArray->m_Items;
    do
    {
      if ( v20 >= (unsigned int)v19 )
        goto LABEL_108;
      v23 = m_Items[v20] - 1;
      m_Items[v20] = v23;
      if ( v23 < 0 )
      {
        v25 = 0;
      }
      else
      {
        if ( !entryIdArray )
          goto LABEL_107;
        v24 = entryIdArray->max_length;
        if ( v23 < v24 )
          goto LABEL_27;
        v25 = v24 - 1;
      }
      m_Items[v20] = v25;
LABEL_27:
      if ( !v18 )
      {
        if ( v20 >= LODWORD(ReplacePositionTargetArray->max_length) )
          goto LABEL_108;
        v26 = v22[v20] - 1;
        v27 = v22[v20] == -1;
        v28 = v22[v20] + 1 < 0;
        v22[v20] = v26;
        if ( v28 ^ __OFSUB__(v26, -2) | v27 )
        {
          v22[v20] = -1;
        }
        else
        {
          if ( !entryIdArray )
            goto LABEL_107;
          v29 = entryIdArray->max_length;
          if ( v26 >= v29 )
            v22[v20] = v29 - 1;
        }
      }
      ++v20;
    }
    while ( (__int64)v20 < v19 );
  }
  v73 = IsNullOrEmpty;
  v74 = functionIndex;
  v75 = noTargetSkipSkill;
  v30 = (System_Collections_Generic_List_object__o *)sub_1C32E6C(System_Collections_Generic_List_BattleServantData__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v30,
    (const MethodInfo_3797F88 *)Method_System_Collections_Generic_List_BattleServantData___ctor__);
  v32 = BackStepTargetArray->max_length;
  if ( v32 >= 1 )
  {
    v33 = 0;
    while ( (unsigned int)v33 < v32 )
    {
      if ( !entryIdArray )
        goto LABEL_107;
      v34 = BackStepTargetArray->m_Items[v33];
      if ( (unsigned int)v34 >= LODWORD(entryIdArray->max_length) )
        break;
      v35 = (char *)entryIdArray + 4 * v34;
      v36 = *((_DWORD *)v35 + 8);
      *((_DWORD *)v35 + 8) = -1;
      IsNullOrEmpty = (__int64)this->fields.data;
      if ( !IsNullOrEmpty )
        goto LABEL_107;
      IsNullOrEmpty = (__int64)BattleData__getServantData((BattleData_o *)IsNullOrEmpty, v36, 0);
      if ( !v30 )
        goto LABEL_107;
      items = v30->fields._items;
      v40 = Method_System_Collections_Generic_List_BattleServantData__Add__;
      ++v30->fields._version;
      if ( !items )
        goto LABEL_107;
      size = v30->fields._size;
      v42 = IsNullOrEmpty;
      if ( (unsigned int)size >= LODWORD(items->max_length) )
      {
        System_Collections_Generic_List_object___AddWithResize(
          v30,
          (Il2CppObject *)IsNullOrEmpty,
          *(const MethodInfo_37987BC **)(*(_QWORD *)(v40[4] + 192LL) + 112LL));
      }
      else
      {
        v43 = &items->obj.klass + size;
        v30->fields._size = size + 1;
        v43[4] = (Il2CppClass *)v42;
        sub_1C32BC4((CGThumbnailListItem_o *)(v43 + 4), v42, v37, v38);
      }
      v32 = BackStepTargetArray->max_length;
      if ( (int)++v33 >= v32 )
        goto LABEL_47;
    }
LABEL_108:
    sub_1C32E84(IsNullOrEmpty);
  }
LABEL_47:
  if ( v18 )
  {
    v44 = BattleLogicFunction___c_TypeInfo;
    if ( !BattleLogicFunction___c_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(BattleLogicFunction___c_TypeInfo);
      v44 = BattleLogicFunction___c_TypeInfo;
    }
    _9__154_0 = v44->static_fields->__9__154_0;
    if ( !_9__154_0 )
    {
      if ( !v44->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(v44);
        v44 = BattleLogicFunction___c_TypeInfo;
      }
      v46 = (Il2CppObject *)v44->static_fields->__9;
      _9__154_0 = (System_Func_int__Guid__o *)sub_1C32E6C(System_Func_int__Guid__TypeInfo);
      System_Func_int__Guid____ctor(
        _9__154_0,
        v46,
        Method_BattleLogicFunction___c__FunctionSwapFieldPosition_b__154_0__,
        0);
      static_fields = BattleLogicFunction___c_TypeInfo->static_fields;
      static_fields->__9__154_0 = _9__154_0;
      sub_1C32BC4((CGThumbnailListItem_o *)&static_fields->__9__154_0, (int32_t)_9__154_0, v48, v49);
    }
    v50 = (System_Collections_Generic_IEnumerable_TSource__o *)System_Linq_Enumerable__OrderBy_int__Guid_(
                                                                 (System_Collections_Generic_IEnumerable_TSource__o *)BackStepTargetArray,
                                                                 (System_Func_TSource__TKey__o *)_9__154_0,
                                                                 (const MethodInfo_310C928 *)Method_System_Linq_Enumerable_OrderBy_int__Guid___);
    IsNullOrEmpty = (__int64)System_Linq_Enumerable__ToArray_int_(
                               v50,
                               (const MethodInfo_311C8F4 *)Method_System_Linq_Enumerable_ToArray_int___);
  }
  else
  {
    IsNullOrEmpty = (__int64)BattleLogicFunction__GetReplaceIndexArray(
                               (BattleLogicFunction_o *)IsNullOrEmpty,
                               BackStepTargetArray,
                               ReplacePositionTargetArray,
                               v31);
  }
  v51 = IsNullOrEmpty;
  if ( !IsNullOrEmpty || !v30 )
LABEL_107:
    sub_1C32E7C(IsNullOrEmpty);
  if ( *(int *)(IsNullOrEmpty + 24) >= 1 )
  {
    v52 = 0;
    v53 = 0;
    while ( 1 )
    {
      if ( !System_Collections_Generic_List_object___get_Item(
              v30,
              v53,
              (const MethodInfo_37984EC *)Method_System_Collections_Generic_List_BattleServantData__get_Item__) )
        goto LABEL_63;
      IsNullOrEmpty = (__int64)System_Collections_Generic_List_object___get_Item(
                                 v30,
                                 v53,
                                 (const MethodInfo_37984EC *)Method_System_Collections_Generic_List_BattleServantData__get_Item__);
      if ( !IsNullOrEmpty )
        goto LABEL_107;
      if ( !BattleServantData__isAliveLogic((BattleServantData_o *)IsNullOrEmpty, 1, 0) )
LABEL_63:
        ++v52;
      IsNullOrEmpty = (__int64)System_Collections_Generic_List_object___get_Item(
                                 v30,
                                 v53,
                                 (const MethodInfo_37984EC *)Method_System_Collections_Generic_List_BattleServantData__get_Item__);
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
                                     v30,
                                     v53,
                                     (const MethodInfo_37984EC *)Method_System_Collections_Generic_List_BattleServantData__get_Item__);
          if ( !IsNullOrEmpty )
            goto LABEL_107;
          *(_DWORD *)(IsNullOrEmpty + 20) = v54;
          IsNullOrEmpty = (__int64)System_Collections_Generic_List_object___get_Item(
                                     v30,
                                     v53,
                                     (const MethodInfo_37984EC *)Method_System_Collections_Generic_List_BattleServantData__get_Item__);
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
  if ( v52 == v30->fields._size && v75 )
    return 0;
  if ( v12->fields.isEnemy )
  {
    data = this->fields.data;
    if ( !data )
      goto LABEL_107;
    IsNullOrEmpty = BasicHelper__IsValidIndex_int_(
                      data->fields.e_entryid,
                      v73,
                      (const MethodInfo_30CBCDC *)Method_BasicHelper_IsValidIndex_int___);
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
                                                               (const MethodInfo_310C5CC *)Method_System_Linq_Enumerable_OfType_RestockServantLogicByMoveToSubMember___);
  v64 = (System_Func_object__bool__o *)sub_1C32E6C(System_Func_RestockServantLogicByMoveToSubMember__bool__TypeInfo);
  System_Func_object__bool____ctor(
    v64,
    (Il2CppObject *)v12,
    Method_BattleLogicFunction___c__DisplayClass154_0__FunctionSwapFieldPosition_b__1__,
    0);
  v65 = System_Linq_Enumerable__Where_object_(
          v63,
          (System_Func_TSource__bool__o *)v64,
          (const MethodInfo_3123BA8 *)Method_System_Linq_Enumerable_Where_RestockServantLogicByMoveToSubMember___);
  v66 = System_Linq_Enumerable__ToArray_object_(
          v65,
          (const MethodInfo_311CA8C *)Method_System_Linq_Enumerable_ToArray_RestockServantLogicByMoveToSubMember___);
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
                            (const MethodInfo_30FA3A0 *)Method_System_Linq_Enumerable_Contains_int___);
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
  v16 = (BattleActionData_o *)sub_1C32E6C(BattleActionData_TypeInfo);
  BattleActionData___ctor(v16, 0);
  if ( SLODWORD(BackStepTargetArray->max_length) >= 1 )
  {
    v71 = 0;
    while ( 1 )
    {
      IsNullOrEmpty = (__int64)System_Collections_Generic_List_object___get_Item(
                                 v30,
                                 v71,
                                 (const MethodInfo_37984EC *)Method_System_Collections_Generic_List_BattleServantData__get_Item__);
      v72 = IsNullOrEmpty ? *(_DWORD *)(IsNullOrEmpty + 24) : -1;
      if ( v71 >= LODWORD(BackStepTargetArray->max_length) )
        goto LABEL_108;
      if ( !v16 )
        goto LABEL_107;
      BattleActionData__setReplaceMember(v16, BackStepTargetArray->m_Items[v71++], v72, v72, v74, 0);
      if ( (__int64)v71 >= SLODWORD(BackStepTargetArray->max_length) )
        return v16;
    }
  }
  return v16;
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
  if ( (byte_4C3A9B9 & 1) == 0 )
  {
    sub_1C32C20(&Generator_BGFromFieldChangeBGBuff_TypeInfo);
    this = (BattleLogicFunction_o *)sub_1C32C20(&Generator_BGMFromFieldChangeBGBuff_TypeInfo);
    byte_4C3A9B9 = 1;
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
    sub_1C32E7C(this);
  }
  if ( !logic )
    goto LABEL_17;
  if ( logic->fields.bgId >= 1 )
  {
    v17 = (Generator_BGFromFieldChangeBGBuff_o *)sub_1C32E6C(Generator_BGFromFieldChangeBGBuff_TypeInfo);
    Generator_BGFromFieldChangeBGBuff___ctor(v17, logic, 0);
    BattleLogicFunction__FunctionQuickChangeBG(v10, args, (Generator_Background_o *)v17, v18);
  }
  if ( logic->fields.bgmId >= 1 )
  {
    v19 = v10->fields.data;
    v20 = (Generator_BGMFromFieldChangeBGBuff_o *)sub_1C32E6C(Generator_BGMFromFieldChangeBGBuff_TypeInfo);
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
    sub_1C32E7C(this);
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
    sub_1C32E7C(this);
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

  if ( (byte_4C3A98A & 1) == 0 )
  {
    this = (BattleLogicFunction_o *)sub_1C32C20(&System_Math_TypeInfo);
    byte_4C3A98A = 1;
  }
  if ( !dataVals )
    goto LABEL_10;
  this = (BattleLogicFunction_o *)DataVals__isParam(dataVals, 116, 0);
  if ( ((unsigned __int8)this & 1) == 0 )
    return healPoint;
  if ( !targetSvtData )
LABEL_10:
    sub_1C32E7C(this);
  MaxHp = BattleServantData__getMaxHp(targetSvtData, 0);
  v9 = ((__int64 (__fastcall *)(BattleServantData_o *, const MethodInfo *))targetSvtData->klass->vtable._13_get_resultHp.methodPtr)(
         targetSvtData,
         targetSvtData->klass->vtable._13_get_resultHp.method);
  if ( !System_Math_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(System_Math_TypeInfo);
  return System_Math__Min_65042304(healPoint, MaxHp - v9, 0);
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
    sub_1C32E7C(this);
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
    sub_1C32E7C(this);
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
  struct System_Int32_array *vals; // x8

  if ( (byte_4C3A96E & 1) == 0 )
  {
    sub_1C32C20(&Method_DataManager_GetMaster_BuffMaster___);
    sub_1C32C20(&DataManager_TypeInfo);
    sub_1C32C20(&Method_DataMasterBase_BuffMaster__BuffEntity__int__GetEntity__);
    byte_4C3A96E = 1;
  }
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_object = DataManager__GetMaster_object_((const MethodInfo_30DD39C *)Method_DataManager_GetMaster_BuffMaster___);
  if ( !funcEnt )
    goto LABEL_10;
  vals = funcEnt->fields.vals;
  if ( !vals )
    goto LABEL_10;
  if ( !LODWORD(vals->max_length) )
    sub_1C32E84(Master_object);
  if ( !Master_object )
LABEL_10:
    sub_1C32E7C(Master_object);
  return (BuffEntity_o *)DataMasterBase_object__object__int___GetEntity(
                           (DataMasterBase_TMaster__TEntity__PKType__o *)Master_object,
                           vals->m_Items[0],
                           (const MethodInfo_3396838 *)Method_DataMasterBase_BuffMaster__BuffEntity__int__GetEntity__);
}


System_Int32_array *BattleLogicFunction__GetBuffTargetCardIndexArray(
        BattleLogicFunction_o *this,
        DataVals_o *baseVals,
        BattleServantData_o *targetServant,
        const MethodInfo *method)
{
  System_Collections_Generic_List_int__o *v6; // x19
  unsigned __int64 CardIndividuality; // x0
  int32_t CardIndex; // w20
  System_Int32_array *IdArrayFromIndividuality; // x21
  DataMasterBase_TMaster__TEntity__PKType__o *v10; // x22
  __int64 v11; // x24
  __int64 v12; // x25
  unsigned __int64 v13; // x24
  System_Collections_Generic_List_int__o *v14; // x22
  System_Collections_Generic_IEnumerable_TSource__o *v15; // x0
  il2cpp_array_size_t max_length; // x8
  unsigned __int64 v17; // x25
  __int64 v18; // x8
  int32_t v19; // w29
  unsigned __int64 v20; // x23
  struct System_Int32_array *items; // x8
  _QWORD *v22; // x9
  __int64 size; // x10
  int32_t Next; // w0
  struct System_Int32_array *v25; // x8
  _QWORD *v26; // x9
  __int64 v27; // x10
  unsigned int v28; // w11
  int32_t v29; // w1
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v31; // 0:x0.16

  if ( (byte_4C3A9B0 & 1) == 0 )
  {
    sub_1C32C20(&Method_DataManager_GetMasterData_ServantMaster___);
    sub_1C32C20(&Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
    sub_1C32C20(&Method_System_Linq_Enumerable_Repeat_int___);
    sub_1C32C20(&Method_System_Linq_Enumerable_ToArray_int___);
    sub_1C32C20(&Method_System_Collections_Generic_List_int__AddRange__);
    sub_1C32C20(&Method_System_Collections_Generic_List_int__Add__);
    sub_1C32C20(&Method_System_Collections_Generic_List_int__Contains__);
    sub_1C32C20(&Method_System_Collections_Generic_List_int__ToArray__);
    sub_1C32C20(&Method_System_Collections_Generic_List_int___ctor__);
    sub_1C32C20(&Method_System_Collections_Generic_List_int__get_Count__);
    sub_1C32C20(&Method_System_Collections_Generic_List_int__get_Item__);
    sub_1C32C20(&System_Collections_Generic_List_int__TypeInfo);
    sub_1C32C20(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    sub_1C32C20(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_4C3A9B0 = 1;
  }
  v6 = (System_Collections_Generic_List_int__o *)sub_1C32E6C(System_Collections_Generic_List_int__TypeInfo);
  System_Collections_Generic_List_int____ctor(
    v6,
    (const MethodInfo_377AF44 *)Method_System_Collections_Generic_List_int___ctor__);
  if ( !baseVals )
    goto LABEL_55;
  CardIndex = DataVals__GetCardIndex(baseVals, 0);
  CardIndividuality = DataVals__GetCardIndividuality(baseVals, 0);
  if ( (CardIndividuality & 0x80000000) == 0 )
  {
    IdArrayFromIndividuality = CardMaster__getIdArrayFromIndividuality(CardIndividuality, 0);
    CardIndividuality = (unsigned __int64)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39E2904 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !CardIndividuality )
      goto LABEL_55;
    CardIndividuality = (unsigned __int64)DataManager__GetMasterData_object_(
                                            (DataManager_o *)CardIndividuality,
                                            (const MethodInfo_30DD3F0 *)Method_DataManager_GetMasterData_ServantMaster___);
    if ( !targetServant )
      goto LABEL_55;
    v10 = (DataMasterBase_TMaster__TEntity__PKType__o *)CardIndividuality;
    v12 = *(_QWORD *)&targetServant->fields.svtId.fields.currentCryptoKey;
    v11 = *(_QWORD *)&targetServant->fields.svtId.fields.fakeValue;
    if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    *(_QWORD *)&v31.fields.currentCryptoKey = v12;
    *(_QWORD *)&v31.fields.fakeValue = v11;
    CardIndividuality = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_48887784(v31, 0);
    if ( !v10 )
      goto LABEL_55;
    CardIndividuality = (unsigned __int64)DataMasterBase_object__object__int___GetEntity(
                                            v10,
                                            CardIndividuality,
                                            (const MethodInfo_3396838 *)Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
    if ( !CardIndividuality )
      goto LABEL_55;
    v13 = *(_QWORD *)(CardIndividuality + 144);
    v14 = (System_Collections_Generic_List_int__o *)sub_1C32E6C(System_Collections_Generic_List_int__TypeInfo);
    System_Collections_Generic_List_int____ctor(
      v14,
      (const MethodInfo_377AF44 *)Method_System_Collections_Generic_List_int___ctor__);
    CardIndividuality = (unsigned __int64)BattleServantData__get_BuffData(targetServant, 0);
    if ( !CardIndividuality )
      goto LABEL_55;
    CardIndividuality = (unsigned __int64)BattleBuffData__GetCommandCardTypeChangeBuff(
                                            (BattleBuffData_o *)CardIndividuality,
                                            0);
    if ( CardIndividuality )
    {
      if ( !v13 )
        goto LABEL_55;
      v15 = (System_Collections_Generic_IEnumerable_TSource__o *)System_Linq_Enumerable__Repeat_int_(
                                                                   *(_DWORD *)(CardIndividuality + 28),
                                                                   *(_DWORD *)(v13 + 24),
                                                                   (const MethodInfo_310D6BC *)Method_System_Linq_Enumerable_Repeat_int___);
      CardIndividuality = (unsigned __int64)System_Linq_Enumerable__ToArray_int_(
                                              v15,
                                              (const MethodInfo_311C8F4 *)Method_System_Linq_Enumerable_ToArray_int___);
      v13 = CardIndividuality;
    }
    if ( !IdArrayFromIndividuality )
      goto LABEL_55;
    max_length = IdArrayFromIndividuality->max_length;
    if ( (int)max_length >= 1 )
    {
      v17 = 0;
      while ( 1 )
      {
        if ( v17 >= (unsigned int)max_length )
          goto LABEL_54;
        if ( !v13 )
          goto LABEL_55;
        v18 = *(_QWORD *)(v13 + 24);
        if ( (int)v18 >= 1 )
          break;
LABEL_31:
        LODWORD(max_length) = IdArrayFromIndividuality->max_length;
        if ( (__int64)++v17 >= (int)max_length )
          goto LABEL_32;
      }
      v19 = IdArrayFromIndividuality->m_Items[v17];
      v20 = 0;
      while ( v20 < (unsigned int)v18 )
      {
        if ( v19 == *(_DWORD *)(v13 + 32 + 4 * v20) )
        {
          if ( !v14 )
            goto LABEL_55;
          CardIndividuality = System_Collections_Generic_List_int___Contains(
                                v14,
                                v20,
                                (const MethodInfo_377BB10 *)Method_System_Collections_Generic_List_int__Contains__);
          if ( (CardIndividuality & 1) == 0 )
          {
            items = v14->fields._items;
            v22 = Method_System_Collections_Generic_List_int__Add__;
            ++v14->fields._version;
            if ( !items )
              goto LABEL_55;
            size = v14->fields._size;
            if ( (unsigned int)size >= LODWORD(items->max_length) )
            {
              System_Collections_Generic_List_int___AddWithResize(
                v14,
                v20,
                *(const MethodInfo_377B798 **)(*(_QWORD *)(v22[4] + 192LL) + 112LL));
            }
            else
            {
              v14->fields._size = size + 1;
              items->m_Items[size] = v20;
            }
          }
        }
        LODWORD(v18) = *(_DWORD *)(v13 + 24);
        if ( (__int64)++v20 >= (int)v18 )
          goto LABEL_31;
      }
LABEL_54:
      sub_1C32E84(CardIndividuality);
    }
LABEL_32:
    if ( !v14 )
LABEL_55:
      sub_1C32E7C(CardIndividuality);
    CardIndividuality = (unsigned int)v14->fields._size;
    if ( (int)CardIndividuality >= 1 )
    {
      if ( CardIndex )
      {
        if ( v6 )
        {
          System_Collections_Generic_List_int___AddRange(
            v6,
            (System_Collections_Generic_IEnumerable_T__o *)v14,
            (const MethodInfo_377B9A4 *)Method_System_Collections_Generic_List_int__AddRange__);
          return System_Collections_Generic_List_int___ToArray(
                   v6,
                   (const MethodInfo_377D250 *)Method_System_Collections_Generic_List_int__ToArray__);
        }
        goto LABEL_55;
      }
      Next = BattleRandom__getNext(CardIndividuality, 0);
      CardIndividuality = System_Collections_Generic_List_int___get_Item(
                            v14,
                            Next,
                            (const MethodInfo_377B4A8 *)Method_System_Collections_Generic_List_int__get_Item__);
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
    v25 = v6->fields._items;
    v26 = Method_System_Collections_Generic_List_int__Add__;
    ++v6->fields._version;
    if ( !v25 )
      goto LABEL_55;
    v27 = v6->fields._size;
    v28 = v25->max_length;
    v29 = CardIndividuality;
    goto LABEL_50;
  }
  if ( CardIndex > 5 )
  {
LABEL_40:
    if ( v6 )
      return System_Collections_Generic_List_int___ToArray(
               v6,
               (const MethodInfo_377D250 *)Method_System_Collections_Generic_List_int__ToArray__);
    goto LABEL_55;
  }
  if ( !v6 )
    goto LABEL_55;
  v25 = v6->fields._items;
  v26 = Method_System_Collections_Generic_List_int__Add__;
  ++v6->fields._version;
  if ( !v25 )
    goto LABEL_55;
  v27 = v6->fields._size;
  v28 = v25->max_length;
  v29 = CardIndex - 1;
LABEL_50:
  if ( (unsigned int)v27 >= v28 )
  {
    System_Collections_Generic_List_int___AddWithResize(
      v6,
      v29,
      *(const MethodInfo_377B798 **)(*(_QWORD *)(v26[4] + 192LL) + 112LL));
  }
  else
  {
    v6->fields._size = v27 + 1;
    v25->m_Items[v27] = v29;
  }
  return System_Collections_Generic_List_int___ToArray(
           v6,
           (const MethodInfo_377D250 *)Method_System_Collections_Generic_List_int__ToArray__);
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
  long double inited; // q0
  System_Collections_Generic_IEnumerable_BattleLogicFunctionProcess_FunctionTargetCheck__o **p_funcTargetArray_k__BackingField; // x8
  _QWORD *v13; // x19
  __int64 v14; // x8
  __int64 v15; // x0
  __int64 v16; // x0

  if ( (byte_4C3A97C & 1) == 0 )
  {
    sub_1C32C20(&Method_System_Array_Empty_BattleLogicFunctionProcess_FunctionTargetCheck___);
    sub_1C32C20(&BattleLogicFunctionProcess_DependFunctionUnitCheck_TypeInfo);
    byte_4C3A97C = 1;
  }
  v9 = (BattleLogicFunctionProcess_DependFunctionUnitCheck_o *)sub_1C32E6C(BattleLogicFunctionProcess_DependFunctionUnitCheck_TypeInfo);
  BattleLogicFunctionProcess_DependFunctionUnitCheck___ctor(v9, this, args, dataVal, 0);
  if ( !v9 )
    sub_1C32E7C(v10);
  if ( BattleLogicFunctionProcess_FunctionUnitCheck__checkCondtion(
         (BattleLogicFunctionProcess_FunctionUnitCheck_o *)v9,
         mainAction,
         0) )
  {
    p_funcTargetArray_k__BackingField = (System_Collections_Generic_IEnumerable_BattleLogicFunctionProcess_FunctionTargetCheck__o **)&v9->fields._funcTargetArray_k__BackingField;
  }
  else
  {
    v13 = Method_System_Array_Empty_BattleLogicFunctionProcess_FunctionTargetCheck___;
    v14 = *((_QWORD *)Method_System_Array_Empty_BattleLogicFunctionProcess_FunctionTargetCheck___ + 7);
    if ( !v14 )
    {
      sub_1C83390(Method_System_Array_Empty_BattleLogicFunctionProcess_FunctionTargetCheck___);
      v14 = v13[7];
    }
    v15 = *(_QWORD *)(v14 + 16);
    if ( (*(_BYTE *)(v15 + 309) & 1) == 0 )
      v15 = sub_1C83334(inited);
    if ( !*(_DWORD *)(v15 + 224) )
      inited = j_il2cpp_runtime_class_init_0(v15);
    v16 = *(_QWORD *)(v13[7] + 16LL);
    if ( (*(_BYTE *)(v16 + 309) & 1) == 0 )
      v16 = sub_1C83334(inited);
    p_funcTargetArray_k__BackingField = *(System_Collections_Generic_IEnumerable_BattleLogicFunctionProcess_FunctionTargetCheck__o ***)(v16 + 184);
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
        const MethodInfo *method)
{
  float DeathRate; // s9
  float GrantInstantDeathMagnification; // s10
  float v14; // s11
  float BuffResistInstantDeath; // s0

  if ( !targetSvtData )
    sub_1C32E7C(this);
  DeathRate = BattleServantData__getDeathRate(targetSvtData, 0);
  GrantInstantDeathMagnification = 0.0;
  v14 = 0.0;
  if ( !isIgnoreResist )
  {
    BuffResistInstantDeath = BattleServantData__getBuffResistInstantDeath(targetSvtData, actionSvtData, 0);
    v14 = BuffResistInstantDeath - BattleServantData__getBuffNonResistInstantDeath(targetSvtData, actionSvtData, 0);
  }
  if ( actionSvtData )
    GrantInstantDeathMagnification = BattleServantData__getGrantInstantDeathMagnification(
                                       actionSvtData,
                                       targetSvtData,
                                       isTreasureDevice,
                                       0);
  return BattleUtility__FloorToInt(
           (float)(DeathRate * funcVals) * (float)((float)(1.0 - v14) + GrantInstantDeathMagnification),
           0);
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
  System_Func_int__bool__o *_9__155_0; // x23
  Il2CppObject *v10; // x24
  struct BattleLogicFunction___c_StaticFields *static_fields; // x0
  int32_t v12; // w2
  const MethodInfo *v13; // x3
  System_Collections_Generic_IEnumerable_TSource__o *v14; // x0
  System_Collections_Generic_IEnumerable_TSource__o *v15; // x0
  int32_t v16; // w2
  const MethodInfo *v17; // x3
  System_Func_int__bool__o *v18; // x23
  System_Collections_Generic_IEnumerable_TSource__o *v19; // x0
  BattleLogicFunction___c_c *v20; // x8
  System_Collections_Generic_IEnumerable_TSource__o *v21; // x21
  System_Func_int__Guid__o *_9__155_2; // x22
  Il2CppObject *v23; // x23
  struct BattleLogicFunction___c_StaticFields *v24; // x0
  int32_t v25; // w2
  const MethodInfo *v26; // x3
  System_Collections_Generic_IEnumerable_TSource__o *v27; // x0
  il2cpp_array_size_t max_length; // x8
  System_Collections_Generic_IEnumerable_TSource__o *v29; // x21
  unsigned __int64 v30; // x22
  int32_t v31; // w1
  struct System_Int32_array *v32; // x8
  _QWORD *v33; // x9
  __int64 v34; // x10
  struct System_Int32_array *items; // x8
  _QWORD *v36; // x9
  __int64 size; // x10

  if ( (byte_4C3A9C2 & 1) == 0 )
  {
    sub_1C32C20(&Method_System_Linq_Enumerable_Contains_int___);
    sub_1C32C20(&Method_System_Linq_Enumerable_First_int___);
    sub_1C32C20(&Method_System_Linq_Enumerable_OrderBy_int__Guid___);
    sub_1C32C20(&Method_System_Linq_Enumerable_ToArray_int___);
    sub_1C32C20(&Method_System_Linq_Enumerable_ToList_int___);
    sub_1C32C20(&Method_System_Linq_Enumerable_Where_int___);
    sub_1C32C20(&System_Func_int__Guid__TypeInfo);
    sub_1C32C20(&System_Func_int__bool__TypeInfo);
    sub_1C32C20(&Method_System_Collections_Generic_List_int__Add__);
    sub_1C32C20(&Method_System_Collections_Generic_List_int__RemoveAt__);
    sub_1C32C20(&Method_System_Collections_Generic_List_int__ToArray__);
    sub_1C32C20(&Method_System_Collections_Generic_List_int___ctor__);
    sub_1C32C20(&System_Collections_Generic_List_int__TypeInfo);
    sub_1C32C20(&Method_BattleLogicFunction___c__GetReplaceIndexArray_b__155_0__);
    sub_1C32C20(&Method_BattleLogicFunction___c__GetReplaceIndexArray_b__155_2__);
    sub_1C32C20(&Method_BattleLogicFunction___c__DisplayClass155_0__GetReplaceIndexArray_b__1__);
    sub_1C32C20(&BattleLogicFunction___c__DisplayClass155_0_TypeInfo);
    sub_1C32C20(&BattleLogicFunction___c_TypeInfo);
    byte_4C3A9C2 = 1;
  }
  v6 = sub_1C32E6C(BattleLogicFunction___c__DisplayClass155_0_TypeInfo);
  BattleLogicFunction___c__DisplayClass155_0___ctor((BattleLogicFunction___c__DisplayClass155_0_o *)v6, 0);
  if ( !System_Linq_Enumerable__Contains_int_(
          (System_Collections_Generic_IEnumerable_TSource__o *)replaceTargetArray,
          -1,
          (const MethodInfo_30FA3A0 *)Method_System_Linq_Enumerable_Contains_int___) )
    return replaceTargetArray;
  v7 = (System_Collections_Generic_List_int__o *)sub_1C32E6C(System_Collections_Generic_List_int__TypeInfo);
  System_Collections_Generic_List_int____ctor(
    v7,
    (const MethodInfo_377AF44 *)Method_System_Collections_Generic_List_int___ctor__);
  v8 = BattleLogicFunction___c_TypeInfo;
  if ( !BattleLogicFunction___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BattleLogicFunction___c_TypeInfo);
    v8 = BattleLogicFunction___c_TypeInfo;
  }
  _9__155_0 = v8->static_fields->__9__155_0;
  if ( !_9__155_0 )
  {
    if ( !v8->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v8);
      v8 = BattleLogicFunction___c_TypeInfo;
    }
    v10 = (Il2CppObject *)v8->static_fields->__9;
    _9__155_0 = (System_Func_int__bool__o *)sub_1C32E6C(System_Func_int__bool__TypeInfo);
    System_Func_int__bool____ctor(_9__155_0, v10, Method_BattleLogicFunction___c__GetReplaceIndexArray_b__155_0__, 0);
    static_fields = BattleLogicFunction___c_TypeInfo->static_fields;
    static_fields->__9__155_0 = _9__155_0;
    sub_1C32BC4((CGThumbnailListItem_o *)&static_fields->__9__155_0, (int32_t)_9__155_0, v12, v13);
  }
  v14 = System_Linq_Enumerable__Where_int_(
          (System_Collections_Generic_IEnumerable_TSource__o *)replaceTargetArray,
          (System_Func_TSource__bool__o *)_9__155_0,
          (const MethodInfo_3123600 *)Method_System_Linq_Enumerable_Where_int___);
  v15 = (System_Collections_Generic_IEnumerable_TSource__o *)System_Linq_Enumerable__ToArray_int_(
                                                               v14,
                                                               (const MethodInfo_311C8F4 *)Method_System_Linq_Enumerable_ToArray_int___);
  if ( !v6 )
    goto LABEL_38;
  *(_QWORD *)(v6 + 16) = v15;
  sub_1C32BC4((CGThumbnailListItem_o *)(v6 + 16), (int32_t)v15, v16, v17);
  v18 = (System_Func_int__bool__o *)sub_1C32E6C(System_Func_int__bool__TypeInfo);
  System_Func_int__bool____ctor(
    v18,
    (Il2CppObject *)v6,
    Method_BattleLogicFunction___c__DisplayClass155_0__GetReplaceIndexArray_b__1__,
    0);
  v19 = System_Linq_Enumerable__Where_int_(
          (System_Collections_Generic_IEnumerable_TSource__o *)backStepTargetArray,
          (System_Func_TSource__bool__o *)v18,
          (const MethodInfo_3123600 *)Method_System_Linq_Enumerable_Where_int___);
  v20 = BattleLogicFunction___c_TypeInfo;
  v21 = v19;
  if ( !BattleLogicFunction___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BattleLogicFunction___c_TypeInfo);
    v20 = BattleLogicFunction___c_TypeInfo;
  }
  _9__155_2 = v20->static_fields->__9__155_2;
  if ( !_9__155_2 )
  {
    if ( !v20->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v20);
      v20 = BattleLogicFunction___c_TypeInfo;
    }
    v23 = (Il2CppObject *)v20->static_fields->__9;
    _9__155_2 = (System_Func_int__Guid__o *)sub_1C32E6C(System_Func_int__Guid__TypeInfo);
    System_Func_int__Guid____ctor(_9__155_2, v23, Method_BattleLogicFunction___c__GetReplaceIndexArray_b__155_2__, 0);
    v24 = BattleLogicFunction___c_TypeInfo->static_fields;
    v24->__9__155_2 = _9__155_2;
    sub_1C32BC4((CGThumbnailListItem_o *)&v24->__9__155_2, (int32_t)_9__155_2, v25, v26);
  }
  v27 = (System_Collections_Generic_IEnumerable_TSource__o *)System_Linq_Enumerable__OrderBy_int__Guid_(
                                                               v21,
                                                               (System_Func_TSource__TKey__o *)_9__155_2,
                                                               (const MethodInfo_310C928 *)Method_System_Linq_Enumerable_OrderBy_int__Guid___);
  v15 = (System_Collections_Generic_IEnumerable_TSource__o *)System_Linq_Enumerable__ToList_int_(
                                                               v27,
                                                               (const MethodInfo_31214BC *)Method_System_Linq_Enumerable_ToList_int___);
  if ( !replaceTargetArray )
    goto LABEL_38;
  max_length = replaceTargetArray->max_length;
  if ( (int)max_length >= 1 )
  {
    v29 = v15;
    v30 = 0;
    do
    {
      if ( v30 >= (unsigned int)max_length )
        sub_1C32E84(v15);
      v31 = replaceTargetArray->m_Items[v30];
      if ( v31 < 0 )
      {
        v15 = (System_Collections_Generic_IEnumerable_TSource__o *)System_Linq_Enumerable__First_int_(
                                                                     v29,
                                                                     (const MethodInfo_3103878 *)Method_System_Linq_Enumerable_First_int___);
        if ( !v7 )
          goto LABEL_38;
        items = v7->fields._items;
        v36 = Method_System_Collections_Generic_List_int__Add__;
        ++v7->fields._version;
        if ( !items )
          goto LABEL_38;
        size = v7->fields._size;
        if ( (unsigned int)size >= LODWORD(items->max_length) )
        {
          System_Collections_Generic_List_int___AddWithResize(
            v7,
            (int32_t)v15,
            *(const MethodInfo_377B798 **)(*(_QWORD *)(v36[4] + 192LL) + 112LL));
        }
        else
        {
          v7->fields._size = size + 1;
          items->m_Items[size] = (int)v15;
        }
        if ( !v29 )
          goto LABEL_38;
        System_Collections_Generic_List_int___RemoveAt(
          (System_Collections_Generic_List_int__o *)v29,
          0,
          (const MethodInfo_377CF18 *)Method_System_Collections_Generic_List_int__RemoveAt__);
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
            v31,
            *(const MethodInfo_377B798 **)(*(_QWORD *)(v33[4] + 192LL) + 112LL));
        }
        else
        {
          v7->fields._size = v34 + 1;
          v32->m_Items[v34] = v31;
        }
      }
      LODWORD(max_length) = replaceTargetArray->max_length;
    }
    while ( (__int64)++v30 < (int)max_length );
  }
  if ( !v7 )
LABEL_38:
    sub_1C32E7C(v15);
  return System_Collections_Generic_List_int___ToArray(
           v7,
           (const MethodInfo_377D250 *)Method_System_Collections_Generic_List_int__ToArray__);
}


BattleActionData_BuffData_o *BattleLogicFunction__GetShowEffectDummyFunctionObject(
        int32_t uniqueId,
        System_Int32_array *effectIds,
        const MethodInfo *method)
{
  __int64 v5; // x21
  __int64 v6; // x0
  int32_t v7; // w2
  const MethodInfo *v8; // x3
  int32_t v9; // w1
  int32_t v10; // w2
  const MethodInfo *v11; // x3

  if ( (byte_4C3A999 & 1) == 0 )
  {
    sub_1C32C20(&BattleActionData_BuffData_TypeInfo);
    sub_1C32C20(&StringLiteral_1/*""*/);
    byte_4C3A999 = 1;
  }
  v5 = sub_1C32E6C(BattleActionData_BuffData_TypeInfo);
  BattleActionData_BuffData___ctor((BattleActionData_BuffData_o *)v5, 0);
  if ( !v5 )
    sub_1C32E7C(v6);
  *(_DWORD *)(v5 + 40) = uniqueId;
  *(_DWORD *)(v5 + 16) = 0;
  v9 = StringLiteral_1/*""*/;
  *(_QWORD *)(v5 + 56) = StringLiteral_1/*""*/;
  sub_1C32BC4((CGThumbnailListItem_o *)(v5 + 56), v9, v7, v8);
  *(_QWORD *)(v5 + 64) = 0x100000000LL;
  *(_QWORD *)(v5 + 72) = effectIds;
  sub_1C32BC4((CGThumbnailListItem_o *)(v5 + 72), (int32_t)effectIds, v10, v11);
  *(_BYTE *)(v5 + 82) = 0;
  *(_DWORD *)(v5 + 28) = 0;
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
  struct System_Object_array *items; // x8
  _QWORD *v12; // x9
  __int64 size; // x10
  RemovedBuffInfoGroup_o *v14; // x22
  const MethodInfo *v15; // x4
  __int64 v16; // x8
  unsigned __int64 v17; // x9
  DataVals_o *v18; // x25
  __int64 v19; // x8
  _QWORD *v20; // x24
  __int64 v21; // x9
  int *v22; // x10
  __int64 v23; // x0
  __int64 v24; // x24
  __int64 v25; // x8
  __int64 v26; // x9
  int *v27; // x10
  __int64 v28; // x0
  __int64 v29; // x8
  __int64 v30; // x9
  int *v31; // x10
  __int64 v32; // x0
  __int64 v33; // x0
  __int64 v34; // x26
  __int64 v35; // x0
  int32_t v36; // w26
  FunctionEntity_o *funcEnt; // x27
  int32_t funcIndex; // w28
  bool IsCommandSideEffect; // w0
  BattleActionData_o *v40; // x0
  __int64 v41; // x0
  __int64 v42; // x8
  __int64 v43; // x9
  int *v44; // x10
  __int64 v45; // x0
  const MethodInfo *v47; // [xsp+0h] [xbp-80h]
  _QWORD *v48; // [xsp+8h] [xbp-78h]
  unsigned __int64 v49; // [xsp+10h] [xbp-70h]
  RemovedBuffInfo_o *subBuffInfo; // [xsp+18h] [xbp-68h] BYREF

  if ( (byte_4C3A9B2 & 1) == 0 )
  {
    sub_1C32C20(&System_IDisposable_TypeInfo);
    sub_1C32C20(&System_Collections_Generic_IEnumerable_BattleLogicFunctionProcess_FunctionTargetCheck__TypeInfo);
    sub_1C32C20(&System_Collections_Generic_IEnumerator_BattleLogicFunctionProcess_FunctionTargetCheck__TypeInfo);
    sub_1C32C20(&System_Collections_IEnumerator_TypeInfo);
    sub_1C32C20(&Method_System_Collections_Generic_List_FuncList_TYPE__Add__);
    sub_1C32C20(&Method_System_Collections_Generic_List_FuncList_TYPE___ctor__);
    sub_1C32C20(&System_Collections_Generic_List_FuncList_TYPE__TypeInfo);
    sub_1C32C20(&RemovedBuffInfoGroup_TypeInfo);
    byte_4C3A9B2 = 1;
  }
  subBuffInfo = 0;
  v9 = (System_Collections_Generic_List_T__o *)sub_1C32E6C(System_Collections_Generic_List_FuncList_TYPE__TypeInfo);
  System_Collections_Generic_List_Int32Enum____ctor(
    v9,
    (const MethodInfo_377D770 *)Method_System_Collections_Generic_List_FuncList_TYPE___ctor__);
  if ( !v9 )
    goto LABEL_56;
  items = v9->fields._items;
  v12 = Method_System_Collections_Generic_List_FuncList_TYPE__Add__;
  ++v9->fields._version;
  if ( !items )
    goto LABEL_56;
  size = v9->fields._size;
  if ( (unsigned int)size >= LODWORD(items->max_length) )
  {
    System_Collections_Generic_List_Int32Enum___AddWithResize(
      v9,
      2,
      *(const MethodInfo_377DFC4 **)(*(_QWORD *)(v12[4] + 192LL) + 112LL));
  }
  else
  {
    v9->fields._size = size + 1;
    *((_DWORD *)items->m_Items + size) = 2;
  }
  v14 = (RemovedBuffInfoGroup_o *)sub_1C32E6C(RemovedBuffInfoGroup_TypeInfo);
  RemovedBuffInfoGroup___ctor(v14, 0);
  if ( !baseVals )
    goto LABEL_56;
  DependDataValsArray = DataVals__GetDependDataValsArray(
                          baseVals,
                          (System_Collections_Generic_List_FuncList_TYPE__o *)v9,
                          1,
                          0);
  if ( !DependDataValsArray )
    goto LABEL_56;
  v16 = DependDataValsArray[3];
  if ( (int)v16 >= 1 )
  {
    v17 = 0;
    v48 = DependDataValsArray;
    while ( 1 )
    {
      if ( v17 >= (unsigned int)v16 )
        sub_1C32E84(DependDataValsArray);
      v18 = (DataVals_o *)DependDataValsArray[v17 + 4];
      v49 = v17;
      DependDataValsArray = BattleLogicFunction__GetDependFuncTargets(this, procArg, mainAction, v18, v15);
      if ( !DependDataValsArray )
        break;
      v19 = *DependDataValsArray;
      v20 = DependDataValsArray;
      v21 = *(unsigned __int16 *)(*DependDataValsArray + 302LL);
      if ( *(_WORD *)(*DependDataValsArray + 302LL) )
      {
        v22 = (int *)(*(_QWORD *)(v19 + 176) + 8LL);
        while ( *((System_Collections_Generic_IEnumerable_BattleLogicFunctionProcess_FunctionTargetCheck__c **)v22 - 1) != System_Collections_Generic_IEnumerable_BattleLogicFunctionProcess_FunctionTargetCheck__TypeInfo )
        {
          --v21;
          v22 += 4;
          if ( !v21 )
            goto LABEL_18;
        }
        v23 = v19 + 16LL * *v22 + 312;
      }
      else
      {
LABEL_18:
        v23 = sub_1C83438(
                DependDataValsArray,
                System_Collections_Generic_IEnumerable_BattleLogicFunctionProcess_FunctionTargetCheck__TypeInfo,
                0);
      }
      v24 = (*(__int64 (__fastcall **)(_QWORD *, _QWORD))v23)(v20, *(_QWORD *)(v23 + 8));
      if ( !v24 )
        sub_1C32E7C(0);
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
              goto LABEL_25;
          }
          v28 = v25 + 16LL * *v27 + 312;
        }
        else
        {
LABEL_25:
          v28 = sub_1C83438(v24, System_Collections_IEnumerator_TypeInfo, 0);
        }
        if ( ((*(__int64 (__fastcall **)(__int64, _QWORD))v28)(v24, *(_QWORD *)(v28 + 8)) & 1) == 0 )
          break;
        v29 = *(_QWORD *)v24;
        v30 = *(unsigned __int16 *)(*(_QWORD *)v24 + 302LL);
        if ( *(_WORD *)(*(_QWORD *)v24 + 302LL) )
        {
          v31 = (int *)(*(_QWORD *)(v29 + 176) + 8LL);
          while ( *((System_Collections_Generic_IEnumerator_BattleLogicFunctionProcess_FunctionTargetCheck__c **)v31 - 1) != System_Collections_Generic_IEnumerator_BattleLogicFunctionProcess_FunctionTargetCheck__TypeInfo )
          {
            --v30;
            v31 += 4;
            if ( !v30 )
              goto LABEL_32;
          }
          v32 = v29 + 16LL * *v31 + 312;
        }
        else
        {
LABEL_32:
          v32 = sub_1C83438(
                  v24,
                  System_Collections_Generic_IEnumerator_BattleLogicFunctionProcess_FunctionTargetCheck__TypeInfo,
                  0);
        }
        v33 = (*(__int64 (__fastcall **)(__int64, _QWORD))v32)(v24, *(_QWORD *)(v32 + 8));
        v34 = v33;
        if ( !v33 )
          sub_1C32E7C(0);
        v35 = (*(__int64 (__fastcall **)(__int64, BattleActionData_o *, _QWORD))(*(_QWORD *)v33 + 408LL))(
                v33,
                mainAction,
                *(_QWORD *)(*(_QWORD *)v33 + 416LL));
        if ( (v35 & 1) != 0 )
        {
          if ( !v18 )
            sub_1C32E7C(v35);
          if ( !procArg )
            sub_1C32E7C(v35);
          v36 = *(_DWORD *)(v34 + 32);
          funcEnt = v18->fields.funcEnt;
          funcIndex = v18->fields.funcIndex;
          IsCommandSideEffect = BattleLogicFunction_ProcListInArgs__get_IsCommandSideEffect(procArg, 0);
          v40 = BattleLogicFunction__functionSubState(
                  this,
                  v36,
                  funcEnt,
                  v18,
                  funcIndex,
                  IsCommandSideEffect,
                  &subBuffInfo,
                  procArg,
                  v47);
          if ( !mainAction )
            sub_1C32E7C(v40);
          BattleActionData__addAction(mainAction, v40, 0);
          if ( !v14 )
            sub_1C32E7C(v41);
          RemovedBuffInfoGroup__Register(v14, v36, subBuffInfo, 0);
        }
      }
      v42 = *(_QWORD *)v24;
      v43 = *(unsigned __int16 *)(*(_QWORD *)v24 + 302LL);
      if ( *(_WORD *)(*(_QWORD *)v24 + 302LL) )
      {
        v44 = (int *)(*(_QWORD *)(v42 + 176) + 8LL);
        while ( *((System_IDisposable_c **)v44 - 1) != System_IDisposable_TypeInfo )
        {
          --v43;
          v44 += 4;
          if ( !v43 )
            goto LABEL_45;
        }
        v45 = v42 + 16LL * *v44 + 312;
      }
      else
      {
LABEL_45:
        v45 = sub_1C83438(v24, System_IDisposable_TypeInfo, 0);
      }
      (*(void (__fastcall **)(__int64, _QWORD))v45)(v24, *(_QWORD *)(v45 + 8));
      DependDataValsArray = v48;
      LODWORD(v16) = *((_DWORD *)v48 + 6);
      v17 = v49 + 1;
      if ( (__int64)(v49 + 1) >= (int)v16 )
        return v14;
    }
LABEL_56:
    sub_1C32E7C(DependDataValsArray);
  }
  return v14;
}


bool BattleLogicFunction__IsAddStateFieldFlag(
        BattleLogicFunction_o *this,
        BattleBuffData_BuffData_o *buffData,
        const MethodInfo *method)
{
  BattleLogicFunction_o *v4; // x20
  UnityEngine_Object_o *logic; // x21

  v4 = this;
  if ( (byte_4C3A97B & 1) == 0 )
  {
    this = (BattleLogicFunction_o *)sub_1C32C20(&UnityEngine_Object_TypeInfo);
    byte_4C3A97B = 1;
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
      sub_1C32E7C(this);
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
    sub_1C32E7C(this);
  return DataVals__IsActAttackFunction(baseVal, 0);
}


bool BattleLogicFunction__IsExistBattleMissionValueInMasterData(FunctionEntity_o *funcEnt, const MethodInfo *method)
{
  struct System_Int32_array *vals; // x8

  if ( !funcEnt || (vals = funcEnt->fields.vals) == 0 )
    sub_1C32E7C(funcEnt);
  return vals->max_length != 0 && (vals->max_length & 1) == 0;
}


bool BattleLogicFunction__IsExistBattleValueInMasterData(FunctionEntity_o *funcEnt, const MethodInfo *method)
{
  struct System_Int32_array *vals; // x8

  if ( !funcEnt || (vals = funcEnt->fields.vals) == 0 )
    sub_1C32E7C(funcEnt);
  return vals->max_length != 0 && (vals->max_length & 1) == 0;
}


bool BattleLogicFunction__IsIgnoreResistFunc(
        BattleLogicFunction_o *this,
        System_Int32_array *funcIndividuality,
        const MethodInfo *method)
{
  System_Int32_array *IgnoreResistFuncIndividuality; // x20

  if ( (byte_4C3A972 & 1) == 0 )
  {
    sub_1C32C20(&Individuality_TypeInfo);
    byte_4C3A972 = 1;
  }
  IgnoreResistFuncIndividuality = BattleLogicFunction__get_IgnoreResistFuncIndividuality(
                                    this,
                                    (const MethodInfo *)funcIndividuality);
  if ( !Individuality_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(Individuality_TypeInfo);
  return Individuality__IsPartialMatchArray(IgnoreResistFuncIndividuality, funcIndividuality, 0);
}


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
    sub_1C32E7C(data);
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
  BattleLogic_o *v11; // x0
  const MethodInfo *v12; // x2
  char v13; // w0
  BattleLogicFunction___c__DisplayClass68_0_o v15; // [xsp+8h] [xbp-38h] BYREF

  if ( (byte_4C3A97F & 1) == 0 )
  {
    sub_1C32C20(&UnityEngine_Object_TypeInfo);
    byte_4C3A97F = 1;
  }
  v15.fields.dataVals = dataVals;
  sub_1C32BC4((CGThumbnailListItem_o *)&v15, (int32_t)dataVals, (int32_t)dataVals, (const MethodInfo *)isEnemyTurn);
  *isEnemyTurn = 0;
  logic = (UnityEngine_Object_o *)this->fields.logic;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Equality(logic, 0, 0) )
    return 0;
  if ( actionServant )
    LOBYTE(actionServant) = actionServant->fields.isEnemy;
  v11 = this->fields.logic;
  if ( !v11 )
    goto LABEL_17;
  if ( BattleLogic__IsPlayerTurnAfterBuffTurnProgress(v11, 0) )
  {
    v13 = (unsigned __int8)actionServant ^ 1;
    return BattleLogicFunction___IsSituationForceTurnProgressExecutable_g__IsForceTurnProgress_68_0(v13, &v15, v12);
  }
  v11 = this->fields.logic;
  if ( !v11 )
LABEL_17:
    sub_1C32E7C(v11);
  if ( BattleLogic__IsEnemyTurnAfterBuffTurnProgress(v11, 0) )
  {
    v13 = (char)actionServant;
    *isEnemyTurn = 1;
    return BattleLogicFunction___IsSituationForceTurnProgressExecutable_g__IsForceTurnProgress_68_0(v13, &v15, v12);
  }
  return 0;
}


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

  if ( (byte_4C3A97E & 1) == 0 )
  {
    sub_1C32C20(&Method_DataManager_GetMaster_ConstantStrMaster___);
    sub_1C32C20(&DataManager_TypeInfo);
    sub_1C32C20(&StringLiteral_5820/*"EXTEND_TURN_BUFF_TYPE"*/);
    byte_4C3A97E = 1;
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
  data = (BattleData_o *)DataManager__GetMaster_object_((const MethodInfo_30DD39C *)Method_DataManager_GetMaster_ConstantStrMaster___);
  if ( !buffEnt || !data )
    goto LABEL_27;
  data = (BattleData_o *)ConstantStrMaster__ExistValueArray(
                           (ConstantStrMaster_o *)data,
                           (System_String_o *)StringLiteral_5820/*"EXTEND_TURN_BUFF_TYPE"*/,
                           buffEnt->fields.type,
                           0);
  if ( ((unsigned __int8)data & 1) == 0 )
    goto LABEL_25;
  v12 = this->fields.data;
  if ( !v12 )
LABEL_27:
    sub_1C32E7C(data);
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
  System_Int32_array *ValueArray; // x0
  System_Collections_Generic_IEnumerable_T__o *v13; // x1

  if ( (byte_4C3A970 & 1) == 0 )
  {
    sub_1C32C20(&Method_DataManager_GetMasterData_ConstantStrMaster___);
    sub_1C32C20(&Method_System_Collections_Generic_List_int__AddRange__);
    sub_1C32C20(&Method_System_Collections_Generic_List_int__Contains__);
    sub_1C32C20(&Method_System_Collections_Generic_List_int___ctor__);
    sub_1C32C20(&System_Collections_Generic_List_int__TypeInfo);
    sub_1C32C20(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_4C3A970 = 1;
  }
  Instance = (DataManager_o *)*typeList;
  if ( !*typeList )
  {
    v9 = (System_Collections_Generic_List_int__o *)sub_1C32E6C(System_Collections_Generic_List_int__TypeInfo);
    System_Collections_Generic_List_int____ctor(
      v9,
      (const MethodInfo_377AF44 *)Method_System_Collections_Generic_List_int___ctor__);
    *typeList = v9;
    sub_1C32BC4((CGThumbnailListItem_o *)typeList, (int32_t)v9, v10, v11);
    Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39E2904 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( Instance )
    {
      Instance = (DataManager_o *)DataManager__GetMasterData_object_(
                                    Instance,
                                    (const MethodInfo_30DD3F0 *)Method_DataManager_GetMasterData_ConstantStrMaster___);
      if ( Instance )
      {
        ValueArray = ConstantStrMaster__GetValueArray((ConstantStrMaster_o *)Instance, keyName, 0, 0);
        if ( ValueArray )
        {
          v13 = (System_Collections_Generic_IEnumerable_T__o *)ValueArray;
          Instance = (DataManager_o *)*typeList;
          if ( !*typeList )
            goto LABEL_11;
          System_Collections_Generic_List_int___AddRange(
            (System_Collections_Generic_List_int__o *)Instance,
            v13,
            (const MethodInfo_377B9A4 *)Method_System_Collections_Generic_List_int__AddRange__);
        }
        Instance = (DataManager_o *)*typeList;
        if ( *typeList )
          return System_Collections_Generic_List_int___Contains(
                   (System_Collections_Generic_List_int__o *)Instance,
                   buffType,
                   (const MethodInfo_377BB10 *)Method_System_Collections_Generic_List_int__Contains__);
      }
    }
LABEL_11:
    sub_1C32E7C(Instance);
  }
  return System_Collections_Generic_List_int___Contains(
           (System_Collections_Generic_List_int__o *)Instance,
           buffType,
           (const MethodInfo_377BB10 *)Method_System_Collections_Generic_List_int__Contains__);
}


void BattleLogicFunction__LossCommandSpell(
        BattleLogicFunction_o *this,
        DataVals_o *baseVals,
        BattleActionData_o *actionData,
        const MethodInfo *method)
{
  __int64 v6; // x21
  __int64 Value; // x0
  int32_t v8; // w1
  int32_t v9; // w2
  const MethodInfo *v10; // x3
  struct BattleSkillInfoData_o *skillInfo; // x1
  int32_t v12; // w2
  const MethodInfo *v13; // x3
  __int64 v14; // x22

  if ( (byte_4C3A9B6 & 1) == 0 )
  {
    sub_1C32C20(&BattleActionData_TypeInfo);
    sub_1C32C20(&StringLiteral_8335/*"LOSS_COMMAND_SPELL"*/);
    byte_4C3A9B6 = 1;
  }
  v6 = sub_1C32E6C(BattleActionData_TypeInfo);
  BattleActionData___ctor((BattleActionData_o *)v6, 0);
  if ( !actionData )
    goto LABEL_8;
  if ( !v6 )
    goto LABEL_8;
  *(_QWORD *)(v6 + 32) = *(_QWORD *)&actionData->fields.actorId;
  BattleActionData__setStateField((BattleActionData_o *)v6, 0);
  v8 = StringLiteral_8335/*"LOSS_COMMAND_SPELL"*/;
  *(_QWORD *)(v6 + 72) = StringLiteral_8335/*"LOSS_COMMAND_SPELL"*/;
  sub_1C32BC4((CGThumbnailListItem_o *)(v6 + 72), v8, v9, v10);
  skillInfo = actionData->fields.skillInfo;
  *(_QWORD *)(v6 + 152) = skillInfo;
  sub_1C32BC4((CGThumbnailListItem_o *)(v6 + 152), (int32_t)skillInfo, v12, v13);
  if ( !baseVals || (v14 = *(_QWORD *)(v6 + 152), Value = DataVals__GetValue(baseVals, 0), !v14) )
LABEL_8:
    sub_1C32E7C(Value);
  *(_DWORD *)(v14 + 100) = Value;
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
  struct System_String_o *popupText; // x1
  bool v11; // w22
  struct System_Int32_array *EffectList; // x0
  int32_t v13; // w2
  const MethodInfo *v14; // x3
  BattleActionData_BuffData_o *result; // x0

  if ( !buffData
    || !actBuffData
    || (actBuffData->fields.buffId = buffData->fields.buffId,
        actBuffData->fields.auraEffectId = buffData->fields.auraEffectId,
        actBuffData->fields.classIconAuraEffectId = buffData->fields.classIconAuraEffectId,
        !funcEnt) )
  {
    sub_1C32E7C(this);
  }
  popupText = funcEnt->fields.popupText;
  v11 = isCommandSideEffect;
  actBuffData->fields.popLabel = popupText;
  sub_1C32BC4(
    (CGThumbnailListItem_o *)&actBuffData->fields.popLabel,
    (int32_t)popupText,
    (int32_t)buffData,
    (const MethodInfo *)funcEnt);
  *(_QWORD *)&actBuffData->fields.popIcon = *(_QWORD *)&funcEnt->fields.popupIconId;
  EffectList = FunctionEntity__getEffectList(funcEnt, 0);
  actBuffData->fields.effectList = EffectList;
  sub_1C32BC4((CGThumbnailListItem_o *)&actBuffData->fields.effectList, (int32_t)EffectList, v13, v14);
  actBuffData->fields.isCommandAfter = v11;
  result = actBuffData;
  actBuffData->fields.addOrder = buffData->fields.addOrder;
  return result;
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
  int32_t v14; // w2
  const MethodInfo *v15; // x3
  int32_t v16; // w2
  const MethodInfo *v17; // x3

  if ( (byte_4C3A983 & 1) == 0 )
  {
    sub_1C32C20(&BattleActionData_BuffData_TypeInfo);
    byte_4C3A983 = 1;
  }
  v12 = sub_1C32E6C(BattleActionData_BuffData_TypeInfo);
  BattleActionData_BuffData___ctor((BattleActionData_BuffData_o *)v12, 0);
  if ( !v12 )
    sub_1C32E7C(v13);
  *(_DWORD *)(v12 + 40) = targetId;
  *(_DWORD *)(v12 + 16) = funcIndex;
  *(_DWORD *)(v12 + 64) = iconId;
  *(_QWORD *)(v12 + 56) = popupText;
  sub_1C32BC4((CGThumbnailListItem_o *)(v12 + 56), (int32_t)popupText, v14, v15);
  *(_DWORD *)(v12 + 68) = popupTextColor;
  *(_QWORD *)(v12 + 72) = 0;
  sub_1C32BC4((CGThumbnailListItem_o *)(v12 + 72), 0, v16, v17);
  *(_BYTE *)(v12 + 102) = 1;
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
  System_Collections_Generic_List_object__o *klass; // x0
  _BOOL8 v13; // x0
  Il2CppObject *v14; // x22
  __int64 v15; // x21
  System_Int32_array *FamilyLinkageIdArray; // x0
  int32_t v17; // w2
  const MethodInfo *v18; // x3
  System_Int32_array *FamilyLinkageTargetIdArray; // x0
  int32_t v20; // w2
  const MethodInfo *v21; // x3
  __int64 IsNullOrEmpty; // x0
  __int64 v23; // x8
  unsigned __int64 v24; // x26
  System_Collections_ICollection_o *v25; // x22
  unsigned __int64 monitor; // x8
  __int64 v27; // x24
  unsigned __int64 v28; // x25
  System_Collections_ICollection_o *v29; // x29
  _BOOL8 v30; // x0
  int32_t v31; // w23
  int32_t v32; // w0
  System_Collections_Generic_List_Enumerator_object__o v33; // [xsp+8h] [xbp-B8h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v34; // [xsp+20h] [xbp-A0h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v35; // [xsp+40h] [xbp-80h] BYREF

  if ( (byte_4C3A9B3 & 1) == 0 )
  {
    sub_1C32C20(&Method_System_Collections_Generic_Dictionary_int__int__ContainsKey__);
    sub_1C32C20(&Method_System_Collections_Generic_Dictionary_int__int___ctor__);
    sub_1C32C20(&Method_System_Collections_Generic_Dictionary_int__int__get_Item__);
    sub_1C32C20(&Method_System_Collections_Generic_Dictionary_int__RemovedBuffInfo__get_Values__);
    sub_1C32C20(&Method_System_Collections_Generic_Dictionary_int__int__set_Item__);
    sub_1C32C20(&System_Collections_Generic_Dictionary_int__int__TypeInfo);
    sub_1C32C20(&Method_System_Collections_Generic_Dictionary_ValueCollection_Enumerator_int__RemovedBuffInfo__Dispose__);
    sub_1C32C20(&Method_System_Collections_Generic_List_Enumerator_BattleBuffData_BuffData__Dispose__);
    sub_1C32C20(&Method_System_Collections_Generic_Dictionary_ValueCollection_Enumerator_int__RemovedBuffInfo__MoveNext__);
    sub_1C32C20(&Method_System_Collections_Generic_List_Enumerator_BattleBuffData_BuffData__MoveNext__);
    sub_1C32C20(&Method_System_Collections_Generic_Dictionary_ValueCollection_Enumerator_int__RemovedBuffInfo__get_Current__);
    sub_1C32C20(&Method_System_Collections_Generic_List_Enumerator_BattleBuffData_BuffData__get_Current__);
    sub_1C32C20(&int_____TypeInfo);
    sub_1C32C20(&Method_System_Collections_Generic_List_BattleBuffData_BuffData__GetEnumerator__);
    this = (BattleLogicFunction_o *)sub_1C32C20(&Method_System_Collections_Generic_Dictionary_ValueCollection_int__RemovedBuffInfo__GetEnumerator__);
    byte_4C3A9B3 = 1;
  }
  memset(&v35, 0, sizeof(v35));
  memset(&v34, 0, sizeof(v34));
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
                                            (const MethodInfo_33EFB2C *)Method_System_Collections_Generic_Dictionary_int__RemovedBuffInfo__get_Values__)) == 0 )
    {
      sub_1C32E7C(this);
    }
    System_Collections_Generic_Dictionary_ValueCollection_int__object___GetEnumerator(
      (System_Collections_Generic_Dictionary_ValueCollection_Enumerator_TKey__TValue__o *)&v33,
      (System_Collections_Generic_Dictionary_ValueCollection_TKey__TValue__o *)this,
      (const MethodInfo_3ACF124 *)Method_System_Collections_Generic_Dictionary_ValueCollection_int__RemovedBuffInfo__GetEnumerator__);
    v35 = v33;
    while ( System_Collections_Generic_Dictionary_ValueCollection_Enumerator_int__object___MoveNext(
              (System_Collections_Generic_Dictionary_ValueCollection_Enumerator_TKey__TValue__o *)&v35,
              (const MethodInfo_3547804 *)Method_System_Collections_Generic_Dictionary_ValueCollection_Enumerator_int__RemovedBuffInfo__MoveNext__) )
    {
      current = v35.fields._current;
      v10 = (System_Collections_Generic_Dictionary_int__int__o *)sub_1C32E6C(System_Collections_Generic_Dictionary_int__int__TypeInfo);
      System_Collections_Generic_Dictionary_int__int____ctor(
        v10,
        (const MethodInfo_33E68A0 *)Method_System_Collections_Generic_Dictionary_int__int___ctor__);
      if ( !current )
        sub_1C32E7C(v11);
      klass = (System_Collections_Generic_List_object__o *)current[1].klass;
      if ( !klass )
        sub_1C32E7C(0);
      System_Collections_Generic_List_object___GetEnumerator(
        (System_Collections_Generic_List_Enumerator_T__o *)&v33,
        klass,
        (const MethodInfo_37992B4 *)Method_System_Collections_Generic_List_BattleBuffData_BuffData__GetEnumerator__);
      v34 = v33;
      while ( 1 )
      {
        v13 = System_Collections_Generic_List_Enumerator_object___MoveNext(
                &v34,
                (const MethodInfo_3522FA8 *)Method_System_Collections_Generic_List_Enumerator_BattleBuffData_BuffData__MoveNext__);
        if ( !v13 )
          break;
        v14 = v34.fields._current;
        if ( !v34.fields._current )
          sub_1C32E7C(v13);
        if ( BattleBuffData_BuffData__IsFamilyBuff((BattleBuffData_BuffData_o *)v34.fields._current, 0) )
        {
          v15 = sub_1C32CC8(int_____TypeInfo, 2);
          FamilyLinkageIdArray = BattleBuffData_BuffData__get_FamilyLinkageIdArray((BattleBuffData_BuffData_o *)v14, 0);
          if ( !v15 )
            sub_1C32E7C(FamilyLinkageIdArray);
          if ( !*(_DWORD *)(v15 + 24) )
            sub_1C32E84(FamilyLinkageIdArray);
          *(_QWORD *)(v15 + 32) = FamilyLinkageIdArray;
          sub_1C32BC4((CGThumbnailListItem_o *)(v15 + 32), (int32_t)FamilyLinkageIdArray, v17, v18);
          FamilyLinkageTargetIdArray = BattleBuffData_BuffData__get_FamilyLinkageTargetIdArray(
                                         (BattleBuffData_BuffData_o *)v14,
                                         0);
          if ( *(_DWORD *)(v15 + 24) <= 1u )
            sub_1C32E84(FamilyLinkageTargetIdArray);
          *(_QWORD *)(v15 + 40) = FamilyLinkageTargetIdArray;
          sub_1C32BC4((CGThumbnailListItem_o *)(v15 + 40), (int32_t)FamilyLinkageTargetIdArray, v20, v21);
          v23 = *(_QWORD *)(v15 + 24);
          if ( (int)v23 >= 1 )
          {
            v24 = 0;
            do
            {
              if ( v24 >= (unsigned int)v23 )
                sub_1C32E84(IsNullOrEmpty);
              v25 = *(System_Collections_ICollection_o **)(v15 + 8 * v24 + 32);
              IsNullOrEmpty = BasicHelper__IsNullOrEmpty(v25, 0);
              if ( (IsNullOrEmpty & 1) == 0 )
              {
                if ( !v25 )
                  sub_1C32E7C(IsNullOrEmpty);
                monitor = (unsigned __int64)v25[1].monitor;
                if ( (int)monitor >= 1 )
                {
                  v27 = (unsigned int)v25[1].monitor;
                  v28 = 0;
                  v29 = v25 + 2;
                  do
                  {
                    if ( v28 >= (unsigned int)monitor )
                      sub_1C32E84(IsNullOrEmpty);
                    if ( !v10 )
                      sub_1C32E7C(IsNullOrEmpty);
                    v30 = System_Collections_Generic_Dictionary_int__int___ContainsKey(
                            v10,
                            *((_DWORD *)&v29->klass + v28),
                            (const MethodInfo_33E7450 *)Method_System_Collections_Generic_Dictionary_int__int__ContainsKey__);
                    if ( !v30 )
                    {
                      if ( v28 >= LODWORD(v25[1].monitor) )
                        sub_1C32E84(v30);
                      if ( !v8 )
                        sub_1C32E7C(v30);
                      v31 = *((_DWORD *)&v29->klass + v28);
                      v32 = FamilyBuffLinkageIdGenerator__Next(v8, 0);
                      System_Collections_Generic_Dictionary_int__int___set_Item(
                        v10,
                        v31,
                        v32,
                        (const MethodInfo_33E7250 *)Method_System_Collections_Generic_Dictionary_int__int__set_Item__);
                    }
                    if ( v28 >= LODWORD(v25[1].monitor) )
                      sub_1C32E84(v30);
                    IsNullOrEmpty = System_Collections_Generic_Dictionary_int__int___get_Item(
                                      v10,
                                      *((_DWORD *)&v29->klass + v28),
                                      (const MethodInfo_33E71C8 *)Method_System_Collections_Generic_Dictionary_int__int__get_Item__);
                    monitor = LODWORD(v25[1].monitor);
                    if ( v28 >= monitor )
                      sub_1C32E84(IsNullOrEmpty);
                    *((_DWORD *)&v29->klass + v28++) = IsNullOrEmpty;
                  }
                  while ( v27 != v28 );
                }
              }
              LODWORD(v23) = *(_DWORD *)(v15 + 24);
              ++v24;
            }
            while ( (__int64)v24 < (int)v23 );
          }
        }
      }
      System_Collections_Generic_List_Enumerator_object___Dispose(
        &v34,
        (const MethodInfo_3522FA4 *)Method_System_Collections_Generic_List_Enumerator_BattleBuffData_BuffData__Dispose__);
    }
    System_Collections_Generic_Dictionary_ValueCollection_Enumerator_int__object___Dispose(
      (System_Collections_Generic_Dictionary_ValueCollection_Enumerator_TKey__TValue__o *)&v35,
      (const MethodInfo_3547800 *)Method_System_Collections_Generic_Dictionary_ValueCollection_Enumerator_int__RemovedBuffInfo__Dispose__);
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

  if ( (byte_4C3A9C0 & 1) == 0 )
  {
    this = (BattleLogicFunction_o *)sub_1C32C20(&BattleSkillDropInfo_TypeInfo);
    byte_4C3A9C0 = 1;
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
    || (HIDWORD(this->fields.logic) = 0,
        v14 = this,
        v15 = (BattleSkillDropInfo_o *)sub_1C32E6C(BattleSkillDropInfo_TypeInfo),
        BattleSkillDropInfo___ctor(v15, dropperUniqueId, baseVals, 0),
        v14[2].fields.data = (struct BattleData_o *)v15,
        sub_1C32BC4((CGThumbnailListItem_o *)&v14[2].fields, (int32_t)v15, v16, v17),
        !actionData) )
  {
LABEL_8:
    sub_1C32E7C(this);
  }
  BattleActionData__setBuffData(actionData, (BattleActionData_BuffData_o *)v14, baseVals, 0);
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
    sub_1C32E7C(this);
  }
  BattleActionData__setBuffData(mainActionData, v7, dataVals_k__BackingField, 0);
}


void BattleLogicFunction__SetEnemyCountChangeActionData(
        BattleLogicFunction_o *this,
        DataVals_o *baseVals,
        BattleActionData_o *mainActionData,
        const MethodInfo *method)
{
  __int64 v6; // x21
  __int64 Value; // x0
  int32_t v8; // w2
  const MethodInfo *v9; // x3
  int32_t v10; // w1
  __int64 v11; // x22
  int32_t v12; // w2
  const MethodInfo *v13; // x3
  BattleSkillInfoData_o *skillInfo; // x0
  System_String_o *v15; // x1
  int32_t v16; // w2
  const MethodInfo *v17; // x3

  if ( (byte_4C3A9BF & 1) == 0 )
  {
    sub_1C32C20(&BattleActionData_TypeInfo);
    sub_1C32C20(&BattleActionData_EnemyCountChangeData_TypeInfo);
    sub_1C32C20(&StringLiteral_5465/*"ENEMY_COUNT_CHANGE"*/);
    byte_4C3A9BF = 1;
  }
  v6 = sub_1C32E6C(BattleActionData_TypeInfo);
  BattleActionData___ctor((BattleActionData_o *)v6, 0);
  if ( !mainActionData
    || !v6
    || (*(_QWORD *)(v6 + 32) = *(_QWORD *)&mainActionData->fields.actorId,
        v10 = StringLiteral_5465/*"ENEMY_COUNT_CHANGE"*/,
        *(_QWORD *)(v6 + 72) = StringLiteral_5465/*"ENEMY_COUNT_CHANGE"*/,
        sub_1C32BC4((CGThumbnailListItem_o *)(v6 + 72), v10, v8, v9),
        v11 = sub_1C32E6C(BattleActionData_EnemyCountChangeData_TypeInfo),
        BattleActionData_EnemyCountChangeData___ctor((BattleActionData_EnemyCountChangeData_o *)v11, 0),
        !baseVals)
    || (Value = DataVals__GetValue(baseVals, 0), !v11) )
  {
    sub_1C32E7C(Value);
  }
  *(_DWORD *)(v11 + 16) = Value;
  *(float *)(v11 + 20) = DataVals__GetEnemyCountChangeTime(baseVals, 3000, 0);
  skillInfo = mainActionData->fields.skillInfo;
  if ( skillInfo )
    v15 = BattleSkillInfoData__GetEnemyCountChangeMessage(skillInfo, 0);
  else
    v15 = 0;
  *(_QWORD *)(v11 + 24) = v15;
  sub_1C32BC4((CGThumbnailListItem_o *)(v11 + 24), (int32_t)v15, v12, v13);
  *(_DWORD *)(v11 + 32) = DataVals__GetEnemyCountChangeEffectId(baseVals, 0);
  *(float *)(v11 + 36) = DataVals__GetEnemyCountWaitTimeAfterMessage(baseVals, 0);
  *(_QWORD *)(v6 + 512) = v11;
  sub_1C32BC4((CGThumbnailListItem_o *)(v6 + 512), v11, v16, v17);
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
  __int64 v12; // x8
  unsigned __int64 v13; // x9
  bool v14; // w23
  __int64 v15; // x8
  _QWORD *v16; // x28
  unsigned __int64 v17; // x24
  BattleServantData_o *v18; // x29
  __int64 v19; // x8
  _QWORD *v20; // x23
  unsigned __int64 v21; // x25
  BattleBuffData_BuffData_o *v22; // x26
  BattleActionData_o *SideEffectActionData_45401852; // x0
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
  System_Action_object__o *_9__53_0; // x20
  Il2CppObject *v39; // x21
  struct BattleLogicFunction___c_StaticFields *static_fields; // x0
  int32_t v41; // w2
  const MethodInfo *v42; // x3
  _DWORD *v43; // [xsp+0h] [xbp-90h]
  unsigned __int64 v45; // [xsp+10h] [xbp-80h]
  BattleCommandData_o *command; // [xsp+18h] [xbp-78h]
  System_Int32_array *questIndividualityArray; // [xsp+28h] [xbp-68h]
  System_Int32_array *questIndividualityArraya; // [xsp+28h] [xbp-68h]

  if ( (byte_4C3A976 & 1) == 0 )
  {
    sub_1C32C20(&System_Action_BattleActionData__TypeInfo);
    sub_1C32C20(&Method_BasicHelper_ForEach_BattleActionData___);
    sub_1C32C20(&BattleTreasureDeviceCommandData_TypeInfo);
    sub_1C32C20(&bool___TypeInfo);
    sub_1C32C20(&Method_DataManager_GetMaster_SkillLvMaster___);
    sub_1C32C20(&DataManager_TypeInfo);
    sub_1C32C20(&BattleLogicFunction_TreasureDeviceSideEffectFunctionArgument_TypeInfo);
    sub_1C32C20(&Method_BattleLogicFunction___c__SetFuncSideEffect_b__53_0__);
    sub_1C32C20(&BattleLogicFunction___c_TypeInfo);
    byte_4C3A976 = 1;
  }
  if ( actionData && actorSvtData )
  {
    if ( sideEffectArg
      && (naturalAligment = BattleLogicFunction_TreasureDeviceSideEffectFunctionArgument_TypeInfo->_2.naturalAligment,
          sideEffectArg->klass->_2.naturalAligment >= (unsigned int)naturalAligment)
      && (BattleLogicFunction_TreasureDeviceSideEffectFunctionArgument_c *)sideEffectArg->klass->_2.typeHierarchy[naturalAligment - 1] == BattleLogicFunction_TreasureDeviceSideEffectFunctionArgument_TypeInfo )
    {
      command = (BattleCommandData_o *)sub_1C32E6C(BattleTreasureDeviceCommandData_TypeInfo);
      BattleTreasureDeviceCommandData___ctor((BattleTreasureDeviceCommandData_o *)command, actorSvtData, 0);
    }
    else
    {
      command = 0;
    }
    if ( !DataManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
    Master_object = DataManager__GetMaster_object_((const MethodInfo_30DD39C *)Method_DataManager_GetMaster_SkillLvMaster___);
    FuncSideEffectTargetServants = (void *)sub_1C32CC8(bool___TypeInfo, 2);
    if ( !FuncSideEffectTargetServants )
      goto LABEL_54;
    v12 = *((_QWORD *)FuncSideEffectTargetServants + 3);
    if ( !(_DWORD)v12 )
      goto LABEL_53;
    *((_BYTE *)FuncSideEffectTargetServants + 32) = 1;
    if ( (int)v12 >= 1 )
    {
      v13 = 0;
      v43 = FuncSideEffectTargetServants;
      while ( 1 )
      {
        if ( v13 >= (unsigned int)v12 )
          goto LABEL_53;
        if ( !sideEffectArg )
          goto LABEL_54;
        v45 = v13;
        v14 = *((_BYTE *)FuncSideEffectTargetServants + v13 + 32) != 0;
        questIndividualityArray = (System_Int32_array *)((__int64 (__fastcall *)(BattleLogicFunction_FuncSideEffectFunctionArgument_o *, bool, const MethodInfo *))sideEffectArg->klass->vtable._6_GetActArray.methodPtr)(
                                                          sideEffectArg,
                                                          v14,
                                                          sideEffectArg->klass->vtable._6_GetActArray.method);
        FuncSideEffectTargetServants = BattleActionData__GetFuncSideEffectTargetServants(
                                         actionData,
                                         this->fields.data,
                                         v14,
                                         targetIds,
                                         0);
        if ( !FuncSideEffectTargetServants )
          goto LABEL_54;
        v15 = *((_QWORD *)FuncSideEffectTargetServants + 3);
        v16 = FuncSideEffectTargetServants;
        if ( (int)v15 >= 1 )
          break;
LABEL_28:
        FuncSideEffectTargetServants = v43;
        LODWORD(v12) = v43[6];
        v13 = v45 + 1;
        if ( (__int64)(v45 + 1) >= (int)v12 )
          goto LABEL_29;
      }
      v17 = 0;
      while ( 1 )
      {
        if ( v17 >= (unsigned int)v15 )
          goto LABEL_53;
        v18 = (BattleServantData_o *)v16[v17 + 4];
        FuncSideEffectTargetServants = BattleServantData__GetAddSideEffectBuffList(
                                         actorSvtData,
                                         (BuffList_ACTION_array *)questIndividualityArray,
                                         v18,
                                         command,
                                         0);
        if ( !FuncSideEffectTargetServants )
          goto LABEL_54;
        v19 = *((_QWORD *)FuncSideEffectTargetServants + 3);
        v20 = FuncSideEffectTargetServants;
        if ( (int)v19 >= 1 )
          break;
LABEL_27:
        LODWORD(v15) = *((_DWORD *)v16 + 6);
        if ( (__int64)++v17 >= (int)v15 )
          goto LABEL_28;
      }
      v21 = 0;
      while ( v21 < (unsigned int)v19 )
      {
        if ( !v18 )
          goto LABEL_54;
        v22 = (BattleBuffData_BuffData_o *)v20[v21 + 4];
        SideEffectActionData_45401852 = BattleActionData__MakeSideEffectActionData_45401852(
                                          actionData,
                                          4,
                                          v18->fields.uniqueId,
                                          0);
        BattleLogicFunction__SetSideEffectBuff(
          this,
          (SkillLvMaster_o *)Master_object,
          SideEffectActionData_45401852,
          v22,
          (BattleLogicFunction_CommonSideEffectFunctionArgument_o *)sideEffectArg,
          1,
          v24);
        LODWORD(v19) = *((_DWORD *)v20 + 6);
        if ( (__int64)++v21 >= (int)v19 )
          goto LABEL_27;
      }
LABEL_53:
      sub_1C32E84(FuncSideEffectTargetServants);
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
      sub_1C32E7C(FuncSideEffectTargetServants);
    }
    v26 = *((_DWORD *)FuncSideEffectTargetServants + 6);
    v27 = FuncSideEffectTargetServants;
    if ( v26 >= 1 )
    {
      v28 = 0;
      while ( 1 )
      {
        if ( v28 >= v26 )
          goto LABEL_53;
        v29 = (char *)&v27[2 * v28];
        v30 = *((_QWORD *)v29 + 4);
        if ( !v30 )
          goto LABEL_54;
        FuncSideEffectTargetServants = BattleServantData__GetFieldIndividualityChangedFunctionBuff(
                                         *((BattleServantData_o **)v29 + 4),
                                         questIndividualityArraya,
                                         0);
        if ( !FuncSideEffectTargetServants )
          goto LABEL_54;
        v31 = *((_QWORD *)FuncSideEffectTargetServants + 3);
        v32 = FuncSideEffectTargetServants;
        if ( (int)v31 >= 1 )
          break;
LABEL_42:
        v26 = v27[6];
        if ( (int)++v28 >= v26 )
          goto LABEL_43;
      }
      v33 = 0;
      while ( v33 < (unsigned int)v31 )
      {
        v34 = (BattleBuffData_BuffData_o *)v32[v33 + 4];
        FuncSideEffectTargetServants = BattleActionData__MakeSideEffectActionData_45401852(
                                         actionData,
                                         4,
                                         *(_DWORD *)(v30 + 24),
                                         0);
        if ( !FuncSideEffectTargetServants )
          goto LABEL_54;
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
      v37 = BattleLogicFunction___c_TypeInfo;
      if ( !BattleLogicFunction___c_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(BattleLogicFunction___c_TypeInfo);
        v37 = BattleLogicFunction___c_TypeInfo;
      }
      _9__53_0 = (System_Action_object__o *)v37->static_fields->__9__53_0;
      if ( !_9__53_0 )
      {
        if ( !v37->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(v37);
          v37 = BattleLogicFunction___c_TypeInfo;
        }
        v39 = (Il2CppObject *)v37->static_fields->__9;
        _9__53_0 = (System_Action_object__o *)sub_1C32E6C(System_Action_BattleActionData__TypeInfo);
        System_Action_object____ctor(_9__53_0, v39, Method_BattleLogicFunction___c__SetFuncSideEffect_b__53_0__, 0);
        static_fields = BattleLogicFunction___c_TypeInfo->static_fields;
        static_fields->__9__53_0 = (struct System_Action_BattleActionData__o *)_9__53_0;
        sub_1C32BC4((CGThumbnailListItem_o *)&static_fields->__9__53_0, (int32_t)_9__53_0, v41, v42);
      }
      BasicHelper__ForEach_object_(
        SideEffectList,
        (System_Action_T__o *)_9__53_0,
        (const MethodInfo_30C93B0 *)Method_BasicHelper_ForEach_BattleActionData___);
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
  const MethodInfo *v19; // x7
  BattleLogicFunction_o *v20; // x26
  _BOOL8 v21; // x0
  const MethodInfo *v22; // x6
  int32_t v23; // w2
  const MethodInfo *v24; // x3
  BattleLogicFunction_o *v25; // x22
  int32_t v26; // w2
  const MethodInfo *v27; // x3
  BattleLogicFunction_o *v28; // x21
  int logic; // w8
  __int64 v30; // x23
  BattleActionData_BuffData_o *v31; // x22
  BattleActionData_o *NoEffectObject; // x23
  __int64 v33; // x0

  v18 = this;
  if ( (byte_4C3A98D & 1) == 0 )
  {
    this = (BattleLogicFunction_o *)sub_1C32C20(&BattleActionData_BuffData___TypeInfo);
    byte_4C3A98D = 1;
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
  v20 = this;
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
                         v19);
      BattleActionData__addAction(actiondata, NoEffectObject, 0);
      if ( NoEffectObject )
      {
        this = (BattleLogicFunction_o *)BattleActionData__getBuffList(NoEffectObject, funcIndex, 0);
        v28 = this;
        if ( !this )
          return;
        goto LABEL_15;
      }
LABEL_26:
      sub_1C32E7C(this);
    }
  }
  v21 = BattleServantData__resultHeal(targetSvtData, healPoint, 0);
  this = (BattleLogicFunction_o *)BattleLogicFunction__getFunctionObject(
                                    (BattleLogicFunction_o *)v21,
                                    funcEnt,
                                    targetSvtData->fields.uniqueId,
                                    funcIndex,
                                    isCommandSideEffect,
                                    0,
                                    v22);
  if ( !v20 )
    goto LABEL_26;
  v25 = this;
  v20->fields.tamamocatTreasureDeviceIds = (struct System_Int32_array *)this;
  sub_1C32BC4((CGThumbnailListItem_o *)&v20->fields.tamamocatTreasureDeviceIds, (int32_t)this, v23, v24);
  if ( !baseVals )
    goto LABEL_26;
  LODWORD(v20->fields.buffProgressTurnSelfList) = DataVals__GetParam(baseVals, 65, 0, 0);
  this = (BattleLogicFunction_o *)sub_1C32CC8(BattleActionData_BuffData___TypeInfo, 1);
  if ( !this )
    goto LABEL_26;
  v28 = this;
  if ( v25 )
  {
    this = (BattleLogicFunction_o *)sub_1C32D5C(v25, this->klass->_1.element_class);
    if ( !this )
    {
      v33 = sub_1C32EA0(0);
      sub_1C32D48(v33, 0);
    }
  }
  if ( !LODWORD(v28->fields.logic) )
    goto LABEL_27;
  v28->fields.logictarget = (struct BattleLogicTarget_o *)v25;
  sub_1C32BC4((CGThumbnailListItem_o *)&v28->fields.logictarget, (int32_t)v25, v26, v27);
LABEL_15:
  logic = (int)v28->fields.logic;
  if ( logic >= 1 )
  {
    v30 = 0;
    while ( (unsigned int)v30 < logic )
    {
      v31 = (BattleActionData_BuffData_o *)*((_QWORD *)&v28->fields.logictarget + v30);
      if ( !v31 )
        goto LABEL_26;
      v31->fields.isHideEffect = isHideEffect;
      this = (BattleLogicFunction_o *)BattleServantData__isLogicResultAlive(targetSvtData, 0);
      if ( ((unsigned __int8)this & 1) != 0 )
        BattleActionData_BuffData__SetCheckHideWhenDeadInfo(v31, baseVals, 0);
      logic = (int)v28->fields.logic;
      if ( (int)++v30 >= logic )
        return;
    }
LABEL_27:
    sub_1C32E84(this);
  }
}


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
      sub_1C32E7C(data);
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
  int32_t addOrder; // w8
  System_Int32_array *funcId; // x23
  DataVals_array *DataValsList; // x0
  const MethodInfo *v16; // [xsp+28h] [xbp-38h]

  SkillFromBuff = BattleServantData__getSkillFromBuff(skillLvMst, buff, 0);
  if ( SkillFromBuff )
  {
    if ( !buff || !arg )
      sub_1C32E7C(SkillFromBuff);
    addOrder = buff->fields.addOrder;
    arg->fields.isShowBattlePointEffect = 1;
    *(&arg->fields._SkillTiming_k__BackingField + 1) = addOrder;
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
      v16);
  }
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
  struct BattleActionData_SideEffectData_array *SideEffectList_k__BackingField; // x25
  int max_length; // w8
  int v14; // w20
  BattleActionData_SideEffectData_o *v15; // x23
  BattleServantData_o *v16; // x26
  int32_t v17; // w1
  System_Collections_Generic_KeyValuePair_int__int__o p_pairAttackAndTarget; // x0
  System_Collections_Generic_KeyValuePair_int__int__o v19; // x1
  struct System_Threading_CancellationTokenSource_o *m_CancellationTokenSource; // x8
  DataManager_o *v21; // x27
  unsigned __int64 v22; // x23
  BattleBuffData_BuffData_o *v23; // x29
  BattleActionData_o *v24; // x28
  int v25; // w0
  const MethodInfo *v26; // x6
  int32_t v27; // w0
  System_Collections_Generic_KeyValuePair_int__int__o v28; // x1
  struct BattleActionData_SideEffectData_array *v29; // [xsp+8h] [xbp-88h]
  SkillLvMaster_o *v31; // [xsp+18h] [xbp-78h]
  System_Collections_Generic_KeyValuePair_int__int__o pairAttackAndTarget; // [xsp+28h] [xbp-68h] BYREF

  if ( (byte_4C3A978 & 1) == 0 )
  {
    sub_1C32C20(&BattleActionData_TypeInfo);
    sub_1C32C20(&Method_DataManager_GetMasterData_SkillLvMaster___);
    sub_1C32C20(&Method_System_Collections_Generic_KeyValuePair_int__int___ctor__);
    sub_1C32C20(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_4C3A978 = 1;
  }
  pairAttackAndTarget = 0;
  Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39E2904 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance
    || (Instance = (DataManager_o *)DataManager__GetMasterData_object_(
                                      Instance,
                                      (const MethodInfo_30DD3F0 *)Method_DataManager_GetMasterData_SkillLvMaster___),
        v31 = (SkillLvMaster_o *)Instance,
        !attackArg)
    || (SideEffectList_k__BackingField = attackArg->fields._SideEffectList_k__BackingField) == 0 )
  {
LABEL_25:
    sub_1C32E7C(Instance);
  }
  max_length = SideEffectList_k__BackingField->max_length;
  if ( max_length >= 1 )
  {
    v14 = 0;
    v29 = attackArg->fields._SideEffectList_k__BackingField;
    do
    {
      if ( v14 >= (unsigned int)max_length )
        goto LABEL_26;
      v15 = SideEffectList_k__BackingField->m_Items[v14];
      if ( !v15 )
        goto LABEL_25;
      Instance = (DataManager_o *)this->fields.data;
      if ( !Instance )
        goto LABEL_25;
      Instance = (DataManager_o *)BattleData__getServantData((BattleData_o *)Instance, v15->fields.targetId, 0);
      if ( Instance )
      {
        if ( !actionSvtData )
          goto LABEL_25;
        v16 = (BattleServantData_o *)Instance;
        v17 = BattleLogicFunction_SideEffectMakeArgument__MakeCheckKey(attackArg, actionSvtData->fields.uniqueId, 0);
        p_pairAttackAndTarget = (System_Collections_Generic_KeyValuePair_int__int__o)&pairAttackAndTarget;
        System_Collections_Generic_KeyValuePair_int__int____ctor(
          p_pairAttackAndTarget,
          v17,
          v16->fields.uniqueId,
          (const MethodInfo_36CEAC4 *)Method_System_Collections_Generic_KeyValuePair_int__int___ctor__);
        if ( !mainAction )
          goto LABEL_25;
        v19 = pairAttackAndTarget;
        Instance = (DataManager_o *)BattleActionData__isReflectedAttackSideEffect(mainAction, v19, 0);
        if ( ((unsigned __int8)Instance & 1) == 0 )
        {
          Instance = (DataManager_o *)BattleServantData__getAttackSideEffectBuffList_46176464(
                                        actionSvtData,
                                        v15->fields.sideEffectActs,
                                        command,
                                        v16,
                                        0);
          if ( !Instance )
            goto LABEL_25;
          m_CancellationTokenSource = Instance->fields.m_CancellationTokenSource;
          v21 = Instance;
          if ( m_CancellationTokenSource )
          {
            if ( (int)m_CancellationTokenSource >= 1 )
            {
              v22 = 0;
              while ( v22 < (unsigned int)m_CancellationTokenSource )
              {
                v23 = (BattleBuffData_BuffData_o *)*((_QWORD *)&v21->fields._DispLog + v22);
                v24 = (BattleActionData_o *)sub_1C32E6C(BattleActionData_TypeInfo);
                BattleActionData___ctor(v24, 0);
                if ( !v24 )
                  goto LABEL_25;
                v24->fields.actorId = actionSvtData->fields.uniqueId;
                v24->fields.targetId = v16->fields.uniqueId;
                v25 = ((__int64 (__fastcall *)(BattleLogicFunction_SideEffectMakeArgument_o *, const MethodInfo *))attackArg->klass->vtable._5_unknown.methodPtr)(
                        attackArg,
                        attackArg->klass->vtable._5_unknown.method);
                BattleLogicFunction__SetSideEffectBuff(
                  this,
                  v31,
                  v24,
                  v23,
                  (BattleLogicFunction_CommonSideEffectFunctionArgument_o *)arg,
                  v25 == 1,
                  v26);
                v27 = ((__int64 (__fastcall *)(BattleLogicFunction_SideEffectMakeArgument_o *, const MethodInfo *))attackArg->klass->vtable._5_unknown.methodPtr)(
                        attackArg,
                        attackArg->klass->vtable._5_unknown.method);
                BattleActionData__addSideEffectActionData(mainAction, v24, v27, 0);
                LODWORD(m_CancellationTokenSource) = v21->fields.m_CancellationTokenSource;
                if ( (__int64)++v22 >= (int)m_CancellationTokenSource )
                  goto LABEL_22;
              }
LABEL_26:
              sub_1C32E84(Instance);
            }
LABEL_22:
            v28 = pairAttackAndTarget;
            BattleActionData__addReflectAttackSideEffect(mainAction, v28, 0);
            SideEffectList_k__BackingField = v29;
          }
        }
      }
      max_length = SideEffectList_k__BackingField->max_length;
      ++v14;
    }
    while ( v14 < max_length );
  }
}


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
  if ( (byte_4C3A975 & 1) == 0 )
  {
    sub_1C32C20(&Method_DataManager_GetMasterData_FunctionMaster___);
    sub_1C32C20(&Method_DataMasterBase_FunctionMaster__FunctionEntity__int__GetEntity__);
    sub_1C32C20(&int___TypeInfo);
    sub_1C32C20(&Method_System_Collections_Generic_List_int__AddRange__);
    sub_1C32C20(&Method_System_Collections_Generic_List_int__Add__);
    this = (BattleLogicFunction_o *)sub_1C32C20(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_4C3A975 = 1;
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
      *(const MethodInfo_377B798 **)(*(_QWORD *)(v10[4] + 192LL) + 112LL));
  }
  else
  {
    LODWORD(this->fields.logic) = logic_low + 1;
    *((_DWORD *)&data->fields.rootfsm + logic_low) = targetId;
  }
  if ( !baseVals )
    goto LABEL_23;
  funcType = baseVals->fields.funcType;
  this = (BattleLogicFunction_o *)sub_1C32CC8(int___TypeInfo, 1);
  if ( !this )
    goto LABEL_23;
  if ( !LODWORD(this->fields.logic) )
    goto LABEL_24;
  LODWORD(this->fields.logictarget) = targetId;
  BattleActionData__AddHpDecreaseFuncTargets(action, funcType, (System_Int32_array *)this, 0);
  this = (BattleLogicFunction_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39E2904 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !this
    || (MasterData_object = DataManager__GetMasterData_object_(
                              (DataManager_o *)this,
                              (const MethodInfo_30DD3F0 *)Method_DataManager_GetMasterData_FunctionMaster___),
        (this = (BattleLogicFunction_o *)DataVals__GetDependFuncIdArray(baseVals, 0)) == 0) )
  {
LABEL_23:
    sub_1C32E7C(this);
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
                                        (const MethodInfo_3396838 *)Method_DataMasterBase_FunctionMaster__FunctionEntity__int__GetEntity__);
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
          (const MethodInfo_377B9A4 *)Method_System_Collections_Generic_List_int__AddRange__);
        BattleActionData__AddHpDecreaseFuncTargets(action, (int32_t)v18->fields.logic, (System_Int32_array *)v19, 0);
      }
      LODWORD(logic) = v15->fields.logic;
      if ( (__int64)++v16 >= (int)logic )
        return;
    }
LABEL_24:
    sub_1C32E84(this);
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
  if ( (byte_4C3A96F & 1) == 0 )
  {
    sub_1C32C20(&StringLiteral_15471/*"WAR_BOARD_PROGRESS_OPPONENT_BUFF_TYPES"*/);
    this = (BattleLogicFunction_o *)sub_1C32C20(&StringLiteral_15472/*"WAR_BOARD_PROGRESS_SELF_BUFF_TYPES"*/);
    byte_4C3A96F = 1;
  }
  IsUpdateBuffProgressTurn = BattleLogicFunction__IsUpdateBuffProgressTurn(
                               this,
                               buffType,
                               (System_String_o *)StringLiteral_15472/*"WAR_BOARD_PROGRESS_SELF_BUFF_TYPES"*/,
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
            (System_String_o *)StringLiteral_15471/*"WAR_BOARD_PROGRESS_OPPONENT_BUFF_TYPES"*/,
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
  BattleData_o *data; // x0
  System_Collections_Generic_IEnumerable_T__o *v9; // x22
  System_Int32_array *TargetList; // x0
  int32_t v11; // w2
  const MethodInfo *v12; // x3
  System_Action_object__o *v13; // x0
  System_Action_T__o *v14; // x21
  intptr_t *v15; // x8

  if ( (byte_4C3A9A8 & 1) == 0 )
  {
    sub_1C32C20(&System_Action_BattleSkillInfoData__TypeInfo);
    sub_1C32C20(&Method_BasicHelper_ForEach_BattleSkillInfoData___);
    sub_1C32C20(&Method_BattleLogicFunction___c__DisplayClass110_0__UpdateUserEquipSkillChargeTurn_b__0__);
    sub_1C32C20(&Method_BattleLogicFunction___c__DisplayClass110_0__UpdateUserEquipSkillChargeTurn_b__1__);
    sub_1C32C20(&BattleLogicFunction___c__DisplayClass110_0_TypeInfo);
    byte_4C3A9A8 = 1;
  }
  v7 = sub_1C32E6C(BattleLogicFunction___c__DisplayClass110_0_TypeInfo);
  BattleLogicFunction___c__DisplayClass110_0___ctor((BattleLogicFunction___c__DisplayClass110_0_o *)v7, 0);
  data = this->fields.data;
  if ( !data
    || (data = (BattleData_o *)BattleData__getMasterSkillInfos(data, 0), !dataVals)
    || (v9 = (System_Collections_Generic_IEnumerable_T__o *)data,
        data = (BattleData_o *)DataVals__GetValue(dataVals, 0),
        !v7) )
  {
    sub_1C32E7C(data);
  }
  *(_DWORD *)(v7 + 16) = (_DWORD)data;
  *(_DWORD *)(v7 + 20) = DataVals__GetValue2(dataVals, 0) - 1;
  TargetList = DataVals__GetTargetList(dataVals, 0);
  *(_QWORD *)(v7 + 24) = TargetList;
  sub_1C32BC4((CGThumbnailListItem_o *)(v7 + 24), (int32_t)TargetList, v11, v12);
  *(_BYTE *)(v7 + 32) = 0;
  v13 = (System_Action_object__o *)sub_1C32E6C(System_Action_BattleSkillInfoData__TypeInfo);
  v14 = (System_Action_T__o *)v13;
  if ( isProgress )
    v15 = &Method_BattleLogicFunction___c__DisplayClass110_0__UpdateUserEquipSkillChargeTurn_b__0__;
  else
    v15 = &Method_BattleLogicFunction___c__DisplayClass110_0__UpdateUserEquipSkillChargeTurn_b__1__;
  System_Action_object____ctor(v13, (Il2CppObject *)v7, *v15, 0);
  BasicHelper__ForEach_object_(v9, v14, (const MethodInfo_30C93B0 *)Method_BasicHelper_ForEach_BattleSkillInfoData___);
  return *(_BYTE *)(v7 + 32);
}


void BattleLogicFunction___FunctionRevivalInDetail_g__AfterProcessForRevivedServants_117_6(
        BattleLogicFunction_o *this,
        BattleLogicFunction___c__DisplayClass117_0_o *a2,
        const MethodInfo *method)
{
  BattleLogicFunction_o *v4; // x20
  System_Collections_Generic_List_T__o *revivedSvtList; // x21
  BattleLogicFunction___c_c *v6; // x0
  System_Func_object__bool__o *_9__117_7; // x22
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
  if ( (byte_4C3A9C6 & 1) == 0 )
  {
    sub_1C32C20(&System_Action_BattleServantData__TypeInfo);
    sub_1C32C20(&Method_BasicHelper_Any_BattleServantData___);
    sub_1C32C20(&System_Func_BattleServantData__bool__TypeInfo);
    sub_1C32C20(&Method_System_Collections_Generic_List_BattleServantData__ForEach__);
    sub_1C32C20(&Method_System_Collections_Generic_List_BattleServantData__get_Count__);
    sub_1C32C20(&Method_BattleLogicFunction___c__FunctionRevivalInDetail_b__117_7__);
    sub_1C32C20(&Method_BattleLogicFunction___c__FunctionRevivalInDetail_b__117_8__);
    this = (BattleLogicFunction_o *)sub_1C32C20(&BattleLogicFunction___c_TypeInfo);
    byte_4C3A9C6 = 1;
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
    _9__117_7 = (System_Func_object__bool__o *)v6->static_fields->__9__117_7;
    if ( !_9__117_7 )
    {
      if ( !v6->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(v6);
        v6 = BattleLogicFunction___c_TypeInfo;
      }
      v8 = (Il2CppObject *)v6->static_fields->__9;
      _9__117_7 = (System_Func_object__bool__o *)sub_1C32E6C(System_Func_BattleServantData__bool__TypeInfo);
      System_Func_object__bool____ctor(
        _9__117_7,
        v8,
        Method_BattleLogicFunction___c__FunctionRevivalInDetail_b__117_7__,
        0);
      static_fields = BattleLogicFunction___c_TypeInfo->static_fields;
      static_fields->__9__117_7 = (struct System_Func_BattleServantData__bool__o *)_9__117_7;
      sub_1C32BC4((CGThumbnailListItem_o *)&static_fields->__9__117_7, (int32_t)_9__117_7, v10, v11);
    }
    this = (BattleLogicFunction_o *)BasicHelper__Any_object_(
                                      revivedSvtList,
                                      (System_Func_T__bool__o *)_9__117_7,
                                      (const MethodInfo_30C6790 *)Method_BasicHelper_Any_BattleServantData___);
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
      monitor = (System_Action_object__o *)sub_1C32E6C(System_Action_BattleServantData__TypeInfo);
      System_Action_object____ctor(
        monitor,
        klass,
        Method_BattleLogicFunction___c__FunctionRevivalInDetail_b__117_8__,
        0);
      v16 = BattleLogicFunction___c_TypeInfo->static_fields;
      v16->__9__117_8 = (struct System_Action_BattleServantData__o *)monitor;
      sub_1C32BC4((CGThumbnailListItem_o *)&v16->__9__117_8, (int32_t)monitor, v17, v18);
    }
    if ( v13 )
    {
      System_Collections_Generic_List_object___ForEach(
        v13,
        (System_Action_T__o *)monitor,
        (const MethodInfo_37991FC *)Method_System_Collections_Generic_List_BattleServantData__ForEach__);
      return;
    }
LABEL_25:
    sub_1C32E7C(this);
  }
}


BattleActionData_o *BattleLogicFunction___FunctionRevivalInDetail_g__GenerateRevivalActionData_117_3(
        BattleLogicFunction_o *this,
        BattleServantData_o *target,
        int32_t requiredRevivalTargetId,
        int32_t entryIndex,
        int32_t expelledUniqueId,
        BattleLogicFunction___c__DisplayClass117_0_o *a6,
        const MethodInfo *method)
{
  __int64 v13; // x22
  BattleData_o *data; // x0
  int32_t v15; // w2
  const MethodInfo *v16; // x3
  struct BattleActionData_o *actionData; // x8
  int32_t v18; // w1
  BattleLogicFunction_HealFuncApplyArgs_o *healFuncApplyArgs; // x26
  bool v20; // w0
  const MethodInfo *v22; // [xsp+10h] [xbp-60h]

  if ( (byte_4C3A9C4 & 1) == 0 )
  {
    sub_1C32C20(&BattleActionData_TypeInfo);
    sub_1C32C20(&BattleLogicFunction_HealFuncApplyArgs_TypeInfo);
    sub_1C32C20(&StringLiteral_8761/*"MOTION_MAKE_REVIVE"*/);
    byte_4C3A9C4 = 1;
  }
  v13 = sub_1C32E6C(BattleActionData_TypeInfo);
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
  v18 = StringLiteral_8761/*"MOTION_MAKE_REVIVE"*/;
  *(_QWORD *)(v13 + 72) = StringLiteral_8761/*"MOTION_MAKE_REVIVE"*/;
  sub_1C32BC4((CGThumbnailListItem_o *)(v13 + 72), v18, v15, v16);
  if ( !a6->fields.actionData
    || (*(_BYTE *)(v13 + 249) = a6->fields.actionData->fields.isForcedSpeedOne,
        healFuncApplyArgs = (BattleLogicFunction_HealFuncApplyArgs_o *)sub_1C32E6C(BattleLogicFunction_HealFuncApplyArgs_TypeInfo),
        BattleLogicFunction_HealFuncApplyArgs___ctor(healFuncApplyArgs, 0),
        !healFuncApplyArgs)
    || (healFuncApplyArgs->fields._RevivalTargetId_k__BackingField = requiredRevivalTargetId,
        healFuncApplyArgs->fields._EntryIndex_k__BackingField = entryIndex,
        healFuncApplyArgs->fields._ExpelledUniqueId_k__BackingField = expelledUniqueId,
        (data = this->fields.data) == 0) )
  {
LABEL_13:
    sub_1C32E7C(data);
  }
  v20 = BattleData__GetEntryIndex(data, target, 0) == entryIndex && BattleServantData__IsDeadKeepStanding(target, 0);
  healFuncApplyArgs->fields._DeadKeepStanding_k__BackingField = v20;
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
    v22);
  return (BattleActionData_o *)v13;
}


void BattleLogicFunction___FunctionRevivalInDetail_g__SetMissIfNoActions_117_4(
        BattleLogicFunction_o *this,
        BattleLogicFunction___c__DisplayClass117_0_o *a2,
        const MethodInfo *method)
{
  const MethodInfo *v3; // x7
  struct System_Collections_Generic_List_BattleServantData__o *revivedSvtList; // x8

  if ( (byte_4C3A9C5 & 1) == 0 )
  {
    this = (BattleLogicFunction_o *)sub_1C32C20(&Method_System_Collections_Generic_List_BattleServantData__get_Count__);
    byte_4C3A9C5 = 1;
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
                                          v3),
        !a2->fields.actionData) )
  {
LABEL_8:
    sub_1C32E7C(this);
  }
  BattleActionData__addAction(a2->fields.actionData, (BattleActionData_o *)this, 0);
}


bool BattleLogicFunction___FunctionRevivalInDetail_g__TryGetEntryIndex_117_5(
        BattleLogicFunction_o *this,
        BattleServantData_o *target,
        int32_t *entryIndex,
        int32_t *expelledUniqueId,
        BattleLogicFunction___c__DisplayClass117_0_o *a5,
        const MethodInfo *method)
{
  BattleData_o *data; // x0
  bool result; // w0
  int32_t DeckIndex; // w0
  int32_t v13; // w1
  int32_t UniqueIdByEntryIndex; // w0
  int32_t v15; // w1
  BattleServantData_o *ServantData; // x0
  BattleServantData_o *v17; // x20

  data = this->fields.data;
  if ( !data )
    goto LABEL_13;
  data = (BattleData_o *)BattleData__GetEntryIndex(data, target, 0);
  *entryIndex = (int)data;
  if ( !target )
    goto LABEL_13;
  if ( ((unsigned int)data & 0x80000000) == 0 )
  {
    result = 1;
    *expelledUniqueId = target->fields.uniqueId;
    return result;
  }
  DeckIndex = BattleServantData__getDeckIndex(target, 0);
  *entryIndex = DeckIndex;
  v13 = DeckIndex;
  data = this->fields.data;
  if ( !data
    || (UniqueIdByEntryIndex = BattleData__GetUniqueIdByEntryIndex(data, v13, target->fields.isEnemy, 0),
        *expelledUniqueId = UniqueIdByEntryIndex,
        v15 = UniqueIdByEntryIndex,
        (data = this->fields.data) == 0) )
  {
LABEL_13:
    sub_1C32E7C(data);
  }
  ServantData = BattleData__getServantData(data, v15, 0);
  if ( ServantData )
  {
    v17 = ServantData;
    if ( BattleServantData__isLogicResultAlive(ServantData, 0)
      || !v17->fields.isDeadAnime
      || BattleServantData__IsDeadKeepStanding(v17, 0) )
    {
      *entryIndex = -1;
    }
  }
  return *entryIndex >= 0;
}


BattleBuffData_BuffData_o *BattleLogicFunction___FunctionSubFieldBuff_b__132_0(
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
    sub_1C32E7C(this);
  }
  return BattleBuffData__CreateDummyBuff((BattleBuffData_o *)this, buff, 0);
}


bool BattleLogicFunction___IsSituationForceTurnProgressExecutable_g__IsForceTurnProgress_68_0(
        bool isPartyTurn,
        BattleLogicFunction___c__DisplayClass68_0_o *a2,
        const MethodInfo *method)
{
  if ( !a2->fields.dataVals )
    sub_1C32E7C(isPartyTurn);
  if ( isPartyTurn )
    return DataVals__IsForceTurnProgressIfTimingIsOverInPartyTurn(a2->fields.dataVals, 0);
  else
    return DataVals__IsForceTurnProgressIfTimingIsOverInOpponentTurn(a2->fields.dataVals, 0);
}


bool BattleLogicFunction___getTargetids_b__59_0(BattleLogicFunction_o *this, int32_t x, const MethodInfo *method)
{
  BattleData_o *data; // x0

  data = this->fields.data;
  if ( !data )
    sub_1C32E7C(0);
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
        bool *isDisplayLastFuncInvalid,
        BattleLogicFunctionProcess_FunctionUnitCheck_o *funcUnit,
        const MethodInfo *method)
{
  BattleData_o *data; // x0
  BattleServantData_o *v20; // x22
  unsigned int v21; // w19
  int v22; // w21
  int32_t InstantDeathRate; // w0
  int v24; // w20
  float BuffTOLERANCEMagnification; // s0
  int32_t v26; // w0
  System_Int32_array *vals; // x1
  int32_t v28; // w24
  float BuffGRANTSTATEMagnification; // s0
  float v30; // s1
  float v31; // s0
  bool result; // w0
  float v33; // s0
  int32_t v34; // w0
  BattleLogicFunction_o *Next; // x0
  const MethodInfo *v36; // x5
  struct System_Int32_array **p_vals; // x8
  System_Int32_array *v38; // x20
  BattleServantData_o *v39; // x23
  float v40; // s0
  float BuffGRANTSUBSTATEMagnification; // s0
  int v42; // [xsp+Ch] [xbp-74h]
  BattleServantData_o *v43; // [xsp+18h] [xbp-68h]

  data = this->fields.data;
  if ( !data
    || (data = (BattleData_o *)BattleData__getServantData(data, actorId, 0), !this->fields.data)
    || (v20 = (BattleServantData_o *)data,
        data = (BattleData_o *)BattleData__getServantData(this->fields.data, targetId, 0),
        v43 = (BattleServantData_o *)data,
        !funcUnit)
    || (data = (BattleData_o *)BattleLogicFunctionProcess_FunctionUnitCheck__get_IsIgnoreResistFunc(funcUnit, 0),
        !baseVals)
    || (v42 = (int)data, data = (BattleData_o *)DataVals__GetParam(baseVals, 0, 0, 0), !args) )
  {
LABEL_53:
    sub_1C32E7C(data);
  }
  v21 = (unsigned int)data;
  if ( !BattleLogicFunction_ProcListInArgs__DidTriggeredFuncHaveSpecifyResults(
          args,
          targetId,
          baseVals,
          this->fields.data,
          0)
    || !BattleLogicFunction_ProcListInArgs__DidTriggeredFuncListHaveSpecifyResults(
          args,
          targetId,
          baseVals,
          this->fields.data,
          0) )
  {
    goto LABEL_19;
  }
  if ( (v21 & 0x80000000) != 0 )
  {
    if ( BattleLogicFunction_ProcListInArgs__isPrevFuncSuccess(args, targetId, baseVals->fields.funcIndex, 0) )
    {
      data = (BattleData_o *)BattleUtility__Abs_46278504(v21, 0);
      if ( !funcEnt )
        goto LABEL_53;
      goto LABEL_13;
    }
LABEL_19:
    result = 0;
    *isDisplayLastFuncInvalid = 1;
    return result;
  }
  data = (BattleData_o *)v21;
  if ( !funcEnt )
    goto LABEL_53;
LABEL_13:
  v22 = (int)data;
  if ( FuncList__Check(1, funcEnt->fields.funcType, 0) )
  {
    InstantDeathRate = 1000;
    if ( buffEnt )
    {
      data = (BattleData_o *)BattleRandom__getNext(1000, 0);
      v24 = (int)data;
      if ( v20 )
      {
        if ( !v43 )
          goto LABEL_53;
        BuffTOLERANCEMagnification = BattleServantData__getBuffTOLERANCEMagnification(
                                       v43,
                                       buffEnt->fields.vals,
                                       v20,
                                       &this->fields.wkStr,
                                       0);
        v26 = BattleUtility__FloorToInt((float)(BuffTOLERANCEMagnification * 1000.0) + (float)v24, 0);
        vals = buffEnt->fields.vals;
        v28 = v26;
        BuffGRANTSTATEMagnification = BattleServantData__getBuffGRANTSTATEMagnification(
                                        v20,
                                        vals,
                                        v43,
                                        &this->fields.wkStr,
                                        0,
                                        0);
        v30 = (float)v22;
        v31 = BuffGRANTSTATEMagnification * 1000.0;
        goto LABEL_18;
      }
      v33 = (float)(int)data;
LABEL_35:
      v34 = BattleUtility__FloorToInt(v33, 0);
LABEL_36:
      v28 = v34;
      goto LABEL_37;
    }
LABEL_26:
    v28 = 1000;
    return v28 < InstantDeathRate;
  }
  data = (BattleData_o *)FuncList__Check(13, funcEnt->fields.funcType, 0);
  if ( ((unsigned __int8)data & 1) != 0 )
  {
    if ( actorId != targetId || (data = (BattleData_o *)DataVals__GetParam(baseVals, 58, 0, 0), (int)data <= 0) )
    {
      if ( !v43 )
        goto LABEL_53;
      if ( !BattleServantData__checkAvoidInstantDeath(v43, v20, 0) )
      {
        Next = (BattleLogicFunction_o *)BattleRandom__getNext(1000, 0);
        v28 = (int)Next;
        InstantDeathRate = BattleLogicFunction__GetInstantDeathRate(
                             Next,
                             (float)v22,
                             v43,
                             v20,
                             isTreasureDevice,
                             v42 & 1,
                             v36);
        return v28 < InstantDeathRate;
      }
      InstantDeathRate = 0;
      goto LABEL_26;
    }
LABEL_45:
    v28 = 0;
    InstantDeathRate = 1000;
    return v28 < InstantDeathRate;
  }
  if ( !FuncList__Check(2, funcEnt->fields.funcType, 0) )
  {
    if ( FuncList__Check(20, funcEnt->fields.funcType, 0) )
    {
      v28 = BattleRandom__getNext(1000, 0);
      if ( (v42 & 1) != 0 )
      {
LABEL_37:
        InstantDeathRate = v22;
        return v28 < InstantDeathRate;
      }
      data = (BattleData_o *)v43;
      if ( !v43 )
        goto LABEL_53;
      v33 = (float)(BattleServantData__getBuffResistDelayNPTurn(v43, v20, 0) * 1000.0) + (float)v28;
      goto LABEL_35;
    }
    if ( !FuncList__Check(46, funcEnt->fields.funcType, 0) )
    {
      v34 = BattleRandom__getNext(1000, 0);
      goto LABEL_36;
    }
    goto LABEL_45;
  }
  if ( DataVals__isParam(baseVals, 90, 0) )
    return 1;
  p_vals = &funcEnt->fields.vals;
  if ( buffEnt )
    p_vals = &buffEnt->fields.vals;
  v38 = *p_vals;
  if ( v20 )
  {
    if ( (v42 & 1) != 0 )
    {
LABEL_43:
      v39 = v43;
      v40 = (float)BattleRandom__getNext(1000, 0);
      goto LABEL_51;
    }
  }
  else if ( ((v42 | DataVals__isParam(baseVals, 75, 0)) & 1) != 0 )
  {
    goto LABEL_43;
  }
  data = (BattleData_o *)BattleRandom__getNext(1000, 0);
  v39 = v43;
  if ( !v43 )
    goto LABEL_53;
  v40 = (float)(BattleServantData__getBuffTOLERANCESUBSTATEMagnification(v43, v38, v20, 0) * 1000.0) + (float)(int)data;
LABEL_51:
  v28 = BattleUtility__FloorToInt(v40, 0);
  if ( !v20 )
    goto LABEL_37;
  BuffGRANTSUBSTATEMagnification = BattleServantData__getBuffGRANTSUBSTATEMagnification(v20, v38, v39, 0);
  v30 = (float)v22;
  v31 = BuffGRANTSUBSTATEMagnification * 1000.0;
LABEL_18:
  InstantDeathRate = BattleUtility__FloorToInt(v31 + v30, 0);
  return v28 < InstantDeathRate;
}


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
    sub_1C32E7C(data);
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
  BattleData_o *data; // x0
  BattleServantData_o *v15; // x25
  int32_t Value; // w26
  BattleLogicFunction_HealFuncApplyArgs_o *healFuncApplyArgs; // x27
  const MethodInfo *v19; // [xsp+10h] [xbp-70h]

  if ( (byte_4C3A9AE & 1) == 0 )
  {
    sub_1C32C20(&BattleActionData_TypeInfo);
    sub_1C32C20(&BattleLogicFunction_HealFuncApplyArgs_TypeInfo);
    byte_4C3A9AE = 1;
  }
  v13 = (BattleActionData_o *)sub_1C32E6C(BattleActionData_TypeInfo);
  BattleActionData___ctor(v13, 0);
  data = this->fields.data;
  if ( !data
    || (data = (BattleData_o *)BattleData__getServantData(data, targetId, 0), !baseVals)
    || (v15 = (BattleServantData_o *)data,
        baseVals->fields.isShowForcedEffect = 1,
        Value = DataVals__GetValue(baseVals, 0),
        healFuncApplyArgs = (BattleLogicFunction_HealFuncApplyArgs_o *)sub_1C32E6C(BattleLogicFunction_HealFuncApplyArgs_TypeInfo),
        BattleLogicFunction_HealFuncApplyArgs___ctor(healFuncApplyArgs, 0),
        !healFuncApplyArgs) )
  {
    sub_1C32E7C(data);
  }
  healFuncApplyArgs->fields._IsMultiTargetRevival_k__BackingField = 1;
  BattleLogicFunction__SetGainHpBuff(
    this,
    v13,
    Value,
    funcIndex,
    v15,
    funcEnt,
    baseVals,
    isCommandSideEffect,
    0,
    healFuncApplyArgs,
    v19);
  return v13;
}


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
  if ( (byte_4C3A9A3 & 1) == 0 )
  {
    sub_1C32C20(&BattleActionData_TypeInfo);
    sub_1C32C20(&NpGaugeAbsorbResult_TypeInfo);
    this = (BattleLogicFunction_o *)sub_1C32C20(&NpPointToTurnConvert_TypeInfo);
    byte_4C3A9A3 = 1;
  }
  if ( !funcTarget )
    goto LABEL_12;
  funcUnit_k__BackingField = funcTarget->fields._funcUnit_k__BackingField;
  if ( !funcUnit_k__BackingField )
    goto LABEL_12;
  dataVals_k__BackingField = funcUnit_k__BackingField->fields._dataVals_k__BackingField;
  v15 = (BattleActionData_o *)sub_1C32E6C(BattleActionData_TypeInfo);
  BattleActionData___ctor(v15, 0);
  v16 = (NpPointToTurnConvert_o *)sub_1C32E6C(NpPointToTurnConvert_TypeInfo);
  NpPointToTurnConvert___ctor(v16, 0);
  v17 = (NpGaugeAbsorbResult_o *)sub_1C32E6C(NpGaugeAbsorbResult_TypeInfo);
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
    sub_1C32E7C(this);
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
  BattleLogicFunction_o *v10; // x19
  struct BattleLogicFunctionProcess_FunctionUnitCheck_o *funcUnit_k__BackingField; // x23
  DataVals_o *dataVals_k__BackingField; // x22
  int32_t actorId; // w27
  BuffEntity_o *v14; // x28
  int32_t v15; // w0
  BattleActionData_o *v16; // x23
  BattleServantData_o *v17; // x24
  BattleServantData_o *ServantData; // x25
  __int64 v19; // x27
  const MethodInfo *v20; // x3
  char v21; // w23
  int32_t AdjustmentBuffTurn; // w0
  const MethodInfo *v23; // x4
  char v24; // w20
  bool v25; // w26
  int32_t type; // w23
  const MethodInfo *v27; // x3
  bool isEnemy; // w8
  bool *p_isEnemy; // x23
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
  __int64 v42; // x23
  __int64 v43; // x20
  int32_t v44; // w20
  struct BattleData_o *v45; // x8
  struct BattleEntity_o *battle_ent; // x8
  int64_t userId; // x23
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
  BattleBuffData_CheckIndividualitiesData_o *v59; // x23
  BattleBuffData_ParamAdd_o *v60; // x26
  __int64 v61; // x0
  int32_t v62; // w2
  const MethodInfo *v63; // x3
  __int64 v64; // x23
  __int64 v65; // x20
  const MethodInfo *v66; // x3
  int v67; // w20
  int32_t v68; // w23
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
  int32_t RelationId; // w23
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
  int32_t ShowStateWarBoardEnemyEquip; // w1
  struct BattleLogicFunction_FunctionArgument_o *externalArg; // x8
  struct BattleData_o *v121; // x8
  System_Int32_array *AddIndividualty; // x0
  int32_t v123; // w2
  const MethodInfo *v124; // x3
  System_Int32_array *LinkageTargetIndividualty; // x0
  int32_t v126; // w2
  const MethodInfo *v127; // x3
  const MethodInfo *v128; // x3
  struct BattleData_o *v129; // x8
  System_Int32_array *ValsList; // x0
  int32_t v131; // w2
  const MethodInfo *v132; // x3
  int32_t v133; // w0
  int v134; // w8
  System_String_o *ParamStringFormat; // x0
  int32_t v136; // w2
  const MethodInfo *v137; // x3
  UnityEngine_Object_o *v138; // x20
  bool v139; // w23
  int32_t v140; // w20
  CommandCodeInfo_o *UserCommandCode; // x0
  int32_t v142; // w29
  BattleLogicFunction_o *v143; // x20
  int32_t v144; // w2
  const MethodInfo *v145; // x3
  BattleActionEffect_AddServantBuff_o *v146; // x26
  int32_t MaxHp; // w26
  int32_t v148; // w29
  bool v149; // w0
  __int64 v150; // x4
  char v151; // w20
  int32_t v152; // w23
  bool IsCommandSideEffect; // w0
  const MethodInfo *v154; // x7
  BattleActionData_o *NoEffectObject; // x1
  int32_t id; // w23
  System_Collections_Generic_List_int__o *v157; // x0
  System_String_o *i; // x0
  System_String_o *v159; // x0
  System_String_o *v160; // x0
  System_String_o *v161; // x0
  System_Int32_array *QuestIndividualities; // x0
  UnityEngine_Object_o *v163; // x29
  System_Int32_array *v164; // x23
  BattleLogicFunction_ProcListInArgs_o *v165; // x29
  BattlePerformance_o *perf; // x2
  struct BattleLogic_o *v167; // x8
  BattleActionEffect_AddChangeMaxHpBuff_o *v168; // x23
  BattleLogicFunction_o *v169; // x29
  int32_t v170; // w2
  const MethodInfo *v171; // x3
  BattleActionEffect_Base_o *v172; // x0
  UnityEngine_Object_o *v173; // x23
  int v174; // w8
  BattleLogicFunction_o *v175; // x23
  unsigned int v176; // w20
  System_Int32_array *ShortenMaxCountArray; // x0
  int32_t v178; // w2
  const MethodInfo *v179; // x3
  BattleActionData_o *v180; // x23
  System_Int32_array *TargetFunctionIndividuality; // x0
  int32_t v182; // w2
  const MethodInfo *v183; // x3
  System_Int32_array *TargetBuffIndividuality; // x0
  int32_t v185; // w2
  const MethodInfo *v186; // x3
  int32_t v187; // w20
  struct BattleData_o *v188; // x8
  BattleBuffData_o *buffData; // x20
  BattleBuffData_CheckIndividualitiesData_o *v190; // x23
  int32_t v191; // w1
  FunctionEntity_o *v192; // x2
  DataVals_o *v193; // x3
  int32_t v194; // w4
  const MethodInfo *v195; // x5
  bool v196; // w0
  BattleActionData_BuffData_o *v197; // x20
  const MethodInfo *v198; // x3
  UnityEngine_Object_o *v199; // x20
  const MethodInfo *v200; // x4
  __int64 v202; // x0
  bool *v203; // [xsp+10h] [xbp-E0h]
  char v204; // [xsp+1Ch] [xbp-D4h]
  __int64 userCommandCodeId; // [xsp+20h] [xbp-D0h]
  int userCommandCodeIda; // [xsp+20h] [xbp-D0h]
  int32_t funcIndex; // [xsp+28h] [xbp-C8h]
  int32_t treasureDvcId; // [xsp+2Ch] [xbp-C4h]
  BattleActionData_o *v209; // [xsp+30h] [xbp-C0h]
  int32_t v210; // [xsp+3Ch] [xbp-B4h]
  BattleActionData_o *v211; // [xsp+40h] [xbp-B0h]
  BattleLogicFunction_ProcListInArgs_o *v212; // [xsp+48h] [xbp-A8h]
  FunctionEntity_o *funcEnt; // [xsp+50h] [xbp-A0h]
  unsigned int uniqueId; // [xsp+5Ch] [xbp-94h]
  BattleActionData_MasterBuffData_o *v215; // [xsp+60h] [xbp-90h]
  int v216; // [xsp+6Ch] [xbp-84h] BYREF
  Il2CppObject *entity; // [xsp+70h] [xbp-80h] BYREF
  bool isEnemyTurn; // [xsp+78h] [xbp-78h] BYREF
  int32_t v219; // [xsp+7Ch] [xbp-74h] BYREF
  int32_t param; // [xsp+88h] [xbp-68h] BYREF
  bool isSelfTurn; // [xsp+8Ch] [xbp-64h] BYREF

  v10 = this;
  if ( (byte_4C3A97D & 1) == 0 )
  {
    sub_1C32C20(&BattleActionEffect_AddChangeMaxHpBuff_TypeInfo);
    sub_1C32C20(&BattleActionEffect_AddServantBuff_TypeInfo);
    sub_1C32C20(&BattleActionData_TypeInfo);
    sub_1C32C20(&BattleDataDefine_TypeInfo);
    sub_1C32C20(&BattleBuffData_BuffData___TypeInfo);
    sub_1C32C20(&BattleBuffData_BuffData_TypeInfo);
    sub_1C32C20(&BuffList_TypeInfo);
    sub_1C32C20(&BattleBuffData_CheckIndividualitiesData_TypeInfo);
    sub_1C32C20(&Method_DataManager_GetMasterData_EventPointBuffMaster___);
    sub_1C32C20(&Method_DataManager_GetMasterData_UserEventPointMaster___);
    sub_1C32C20(&Method_DataManager_GetMaster_BuffTypeDetailMaster___);
    sub_1C32C20(&DataManager_TypeInfo);
    sub_1C32C20(&Method_DataMasterBase_BuffTypeDetailMaster__BuffTypeDetailEntity__int__TryGetEntity__);
    sub_1C32C20(&BattleBuffData_FieldAliveCondData_TypeInfo);
    sub_1C32C20(&int___TypeInfo);
    sub_1C32C20(&Method_System_Collections_Generic_List_int___ctor__);
    sub_1C32C20(&System_Collections_Generic_List_int__TypeInfo);
    sub_1C32C20(&BattleActionData_MasterBuffData_TypeInfo);
    sub_1C32C20(&System_Math_TypeInfo);
    sub_1C32C20(&UnityEngine_Object_TypeInfo);
    sub_1C32C20(&BattleBuffData_ParamAdd_TypeInfo);
    sub_1C32C20(&BattleBuffData_RelationOverwriteData_TypeInfo);
    sub_1C32C20(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_1C32C20(&StringLiteral_13353/*"TAMAMOCAT_STUN_BUFF_ID"*/);
    sub_1C32C20(&StringLiteral_13354/*"TAMAMOCAT_TREASURE_DEVICE_ID_"*/);
    this = (BattleLogicFunction_o *)sub_1C32C20(&StringLiteral_1/*""*/);
    byte_4C3A97D = 1;
  }
  isSelfTurn = 0;
  param = 0;
  v219 = 0;
  isEnemyTurn = 0;
  entity = 0;
  v216 = 0;
  if ( !funcTarget )
    goto LABEL_316;
  if ( !mainAction )
    goto LABEL_316;
  funcUnit_k__BackingField = funcTarget->fields._funcUnit_k__BackingField;
  if ( !funcUnit_k__BackingField )
    goto LABEL_316;
  dataVals_k__BackingField = funcUnit_k__BackingField->fields._dataVals_k__BackingField;
  if ( !dataVals_k__BackingField )
    goto LABEL_316;
  actorId = mainAction->fields.actorId;
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
  userCommandCodeId = mainAction->fields.userCommandCodeId;
  funcIndex = v15;
  treasureDvcId = mainAction->fields.treasureDvcId;
  v16 = (BattleActionData_o *)sub_1C32E6C(BattleActionData_TypeInfo);
  BattleActionData___ctor(v16, 0);
  this = (BattleLogicFunction_o *)v10->fields.data;
  if ( !this )
    goto LABEL_316;
  this = (BattleLogicFunction_o *)BattleData__getServantData((BattleData_o *)this, actorId, 0);
  if ( !v10->fields.data )
    goto LABEL_316;
  v17 = (BattleServantData_o *)this;
  ServantData = BattleData__getServantData(v10->fields.data, uniqueId, 0);
  this = (BattleLogicFunction_o *)((__int64 (__fastcall *)(BattleLogicFunctionProcess_FunctionTargetCheck_o *, const MethodInfo *))funcTarget->klass->vtable._8_MakeActionBuffData.methodPtr)(
                                    funcTarget,
                                    funcTarget->klass->vtable._8_MakeActionBuffData.method);
  v215 = (BattleActionData_MasterBuffData_o *)this;
  if ( !v14 )
    goto LABEL_316;
  this = (BattleLogicFunction_o *)BuffEntity__checkBuffType(v14, 142, 0);
  if ( ((unsigned __int8)this & 1) != 0 )
  {
    v215 = (BattleActionData_MasterBuffData_o *)sub_1C32E6C(BattleActionData_MasterBuffData_TypeInfo);
    BattleActionData_MasterBuffData___ctor(v215, funcEnt, 0);
  }
  if ( !ServantData )
    goto LABEL_316;
  v210 = actorId;
  if ( !v215 )
    goto LABEL_316;
  v215->fields.targetId = ServantData->fields.uniqueId;
  v215->fields.functionIndex = funcIndex;
  v19 = sub_1C32E6C(BattleBuffData_BuffData_TypeInfo);
  BattleBuffData_BuffData___ctor((BattleBuffData_BuffData_o *)v19, 0);
  if ( !v19 )
    goto LABEL_316;
  v209 = v16;
  *(_DWORD *)(v19 + 16) = v14->fields.id;
  if ( !args )
    goto LABEL_316;
  *(_DWORD *)(v19 + 164) = BattleLogicFunction_ProcListInArgs__get_SkillId(args, 0);
  *(_DWORD *)(v19 + 188) = BattleLogicFunction_ProcListInArgs__get_GrantSkillType(args, 0);
  *(_DWORD *)(v19 + 176) = DataVals__GetMotionChange(dataVals_k__BackingField, 0);
  *(_DWORD *)(v19 + 20) = 2 * DataVals__GetParam(dataVals_k__BackingField, 1, 0, 0);
  BattleBuffData_BuffData__RegisterGeneralParams((BattleBuffData_BuffData_o *)v19, dataVals_k__BackingField, 0);
  v21 = mainAction->fields.isReversalShortBuffTurn ^ shortbuff;
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
  v211 = mainAction;
  *(_DWORD *)(v19 + 68) = v210;
  if ( !funcEnt )
    goto LABEL_316;
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
    goto LABEL_316;
  this = (BattleLogicFunction_o *)data->fields.battleEvent;
  if ( !this )
    goto LABEL_316;
  *(_DWORD *)(v19 + 184) = ((__int64 (__fastcall *)(BattleLogicFunction_o *, BuffEntity_o *, Il2CppMethodPointer))this->klass[1].vtable._0_Equals.method)(
                             this,
                             v14,
                             this->klass[1].vtable._1_Finalize.methodPtr);
  ProgressTurnCond = BuffEntity__GetProgressTurnCond(v14, 0);
  if ( (ProgressTurnCond & 0x80000000) == 0 )
    *(_DWORD *)(v19 + 184) = ProgressTurnCond;
  *(_DWORD *)(v19 + 24) = DataVals__GetParam(dataVals_k__BackingField, 2, 0, 0);
  *(_DWORD *)(v19 + 28) = DataVals__GetParam(dataVals_k__BackingField, 3, 0, 0);
  v215->fields.popDelay = DataVals__GetParam(dataVals_k__BackingField, 65, 0, 0);
  v33 = v14->fields.type;
  if ( !BuffList_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(BuffList_TypeInfo);
  v203 = p_isEnemy;
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
  v39 = sub_1C32CC8(int___TypeInfo, 2);
  *(_QWORD *)(v19 + 40) = v39;
  sub_1C32BC4((CGThumbnailListItem_o *)(v19 + 40), v39, v40, v41);
  v42 = *(_QWORD *)(v19 + 40);
  this = (BattleLogicFunction_o *)DataVals__GetParam(dataVals_k__BackingField, 3, 0, 0);
  if ( !v42 )
    goto LABEL_316;
  if ( !*(_DWORD *)(v42 + 24) )
    goto LABEL_317;
  *(_DWORD *)(v42 + 32) = (_DWORD)this;
  v43 = *(_QWORD *)(v19 + 40);
  this = (BattleLogicFunction_o *)DataVals__GetParam(dataVals_k__BackingField, 4, 0, 0);
  if ( !v43 )
    goto LABEL_316;
  if ( *(_DWORD *)(v43 + 24) <= 1u )
    goto LABEL_317;
  v204 = v38;
  v212 = args;
  *(_DWORD *)(v43 + 36) = (_DWORD)this;
  v44 = v14->fields.type;
  if ( !BuffList_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(BuffList_TypeInfo);
  this = (BattleLogicFunction_o *)BuffList__CheckType(135, v44, 0);
  if ( ((unsigned __int8)this & 1) != 0 )
  {
    v45 = v10->fields.data;
    if ( !v45 )
      goto LABEL_316;
    battle_ent = v45->fields.battle_ent;
    if ( !battle_ent )
      goto LABEL_316;
    userId = battle_ent->fields.userId;
    eventId = battle_ent->fields.eventId;
    this = (BattleLogicFunction_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39E2904 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !this )
      goto LABEL_316;
    this = (BattleLogicFunction_o *)DataManager__GetMasterData_object_(
                                      (DataManager_o *)this,
                                      (const MethodInfo_30DD3F0 *)Method_DataManager_GetMasterData_EventPointBuffMaster___);
    if ( !this )
      goto LABEL_316;
    v49 = (EventPointBuffMaster_o *)this;
    EventPointGroupId = EventPointBuffMaster__GetEventPointGroupId(
                          (EventPointBuffMaster_o *)this,
                          eventId,
                          funcEnt->fields.id,
                          0,
                          0);
    this = (BattleLogicFunction_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39E2904 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !this )
      goto LABEL_316;
    this = (BattleLogicFunction_o *)DataManager__GetMasterData_object_(
                                      (DataManager_o *)this,
                                      (const MethodInfo_30DD3F0 *)Method_DataManager_GetMasterData_UserEventPointMaster___);
    if ( !this )
      goto LABEL_316;
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
        goto LABEL_316;
      logic = (int)this->fields.logic;
      if ( logic >= 1 )
      {
        v54 = 0;
        v55 = 0;
        do
        {
          if ( logic == v54 )
            goto LABEL_317;
          v56 = *((_QWORD *)&this->fields.logictarget + v54);
          if ( !v56 )
            goto LABEL_316;
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
    v59 = (BattleBuffData_CheckIndividualitiesData_o *)sub_1C32E6C(BattleBuffData_CheckIndividualitiesData_TypeInfo);
    BattleBuffData_CheckIndividualitiesData___ctor_45709708(v59, v17, ServantData, 0, 0, 0, 0, 1, 0);
    v60 = (BattleBuffData_ParamAdd_o *)sub_1C32E6C(BattleBuffData_ParamAdd_TypeInfo);
    BattleBuffData_ParamAdd___ctor_45722656(v60, dataVals_k__BackingField, 0);
    *(_DWORD *)(v19 + 28) = BattleBuffData__GetTotalParamAddValue((BattleBuffData_BuffData_o *)v19, v58, v59, v60, 0)
                          + v57;
  }
  if ( DataVals__isParam(dataVals_k__BackingField, 26, 0) && DataVals__isParam(dataVals_k__BackingField, 27, 0) )
  {
    v61 = sub_1C32CC8(int___TypeInfo, 2);
    *(_QWORD *)(v19 + 104) = v61;
    sub_1C32BC4((CGThumbnailListItem_o *)(v19 + 104), v61, v62, v63);
    v64 = *(_QWORD *)(v19 + 104);
    this = (BattleLogicFunction_o *)DataVals__GetParam(dataVals_k__BackingField, 26, 0, 0);
    if ( !v64 )
      goto LABEL_316;
    if ( !*(_DWORD *)(v64 + 24) )
      goto LABEL_317;
    *(_DWORD *)(v64 + 32) = (_DWORD)this;
    v65 = *(_QWORD *)(v19 + 104);
    this = (BattleLogicFunction_o *)DataVals__GetParam(dataVals_k__BackingField, 27, 0, 0);
    if ( !v65 )
      goto LABEL_316;
    if ( *(_DWORD *)(v65 + 24) <= 1u )
      goto LABEL_317;
    *(_DWORD *)(v65 + 36) = (_DWORD)this;
  }
  *(_DWORD *)(v19 + 64) = DataVals__GetParam(dataVals_k__BackingField, 15, 0, 0);
  *(_DWORD *)(v19 + 344) = DataVals__GetClassIconAuraEffectId(dataVals_k__BackingField, 0);
  if ( DataVals__GetParam(dataVals_k__BackingField, 11, 0, 0) >= 1 )
    *(_DWORD *)(v19 + 60) = v210;
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
  if ( DataVals__TryGetParam(dataVals_k__BackingField, 216, &v219, 0) )
  {
    *(_DWORD *)(v19 + 452) = v219;
    if ( DataVals__GetParam(dataVals_k__BackingField, 217, 0, 0) >= 1 )
      *(_BYTE *)(v19 + 456) = 1;
  }
  v67 = *(_DWORD *)(v19 + 28);
  *(_DWORD *)(v19 + 28) = BattleLogicFunction__GetAddCondParamValue(v10, dataVals_k__BackingField, ServantData, v66)
                        + v67;
  if ( DataVals__isParam(dataVals_k__BackingField, 42, 0) )
  {
    v68 = DataVals__GetParam(dataVals_k__BackingField, 42, 0, 0);
    v69 = sub_1C32E6C(BattleBuffData_FieldAliveCondData_TypeInfo);
    BattleBuffData_FieldAliveCondData___ctor((BattleBuffData_FieldAliveCondData_o *)v69, 0);
    if ( !v69 )
      goto LABEL_316;
    v70 = *v203;
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
    sub_1C32BC4((CGThumbnailListItem_o *)(v69 + 24), (int32_t)TargetIndiv, v73, v74);
    *(_BYTE *)(v69 + 32) = BuffEntity__IsIncludeIgnoreIndividuality(v14, 0);
    *(_QWORD *)(v19 + 152) = v69;
    sub_1C32BC4((CGThumbnailListItem_o *)(v19 + 152), v69, v75, v76);
    v212->fields.updateField = 1;
  }
  v77 = v14->fields.type;
  if ( !BuffList_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(BuffList_TypeInfo);
  if ( BuffList__IsIntervalPossibleBuff(v77, 0) )
  {
    IntervalData = DataVals__GetIntervalData(dataVals_k__BackingField, 0);
    *(_QWORD *)(v19 + 360) = IntervalData;
    sub_1C32BC4((CGThumbnailListItem_o *)(v19 + 360), (int32_t)IntervalData, v79, v80);
  }
  if ( BattleBuffData__CheckInvalidSacrificeIndiv((BattleBuffData_BuffData_o *)v19, 0) )
    v212->fields.updateField = 1;
  ParamArray = DataVals__GetParamArray(dataVals_k__BackingField, 115, 0);
  *(_QWORD *)(v19 + 328) = ParamArray;
  sub_1C32BC4((CGThumbnailListItem_o *)(v19 + 328), (int32_t)ParamArray, v82, v83);
  *(_DWORD *)(v19 + 208) = BuffEntity__GetCardEffectId(v14, 0);
  v84 = v14->fields.type;
  if ( !BuffList_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(BuffList_TypeInfo);
  if ( BuffList__CheckType(144, v84, 0) )
  {
    RelationId = BuffEntity__getRelationId(v14, 0);
    v86 = (BattleBuffData_RelationOverwriteData_o *)sub_1C32E6C(BattleBuffData_RelationOverwriteData_TypeInfo);
    BattleBuffData_RelationOverwriteData___ctor(v86, 0);
    if ( RelationId >= 1 )
    {
      this = (BattleLogicFunction_o *)BuffEntity__getRelationId(v14, 0);
      if ( !v86 )
        goto LABEL_316;
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
    sub_1C32BC4((CGThumbnailListItem_o *)(v19 + 168), (int32_t)v86, v87, v88);
  }
  v90 = v14->fields.type;
  if ( !BuffList_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(BuffList_TypeInfo);
  if ( BuffList__CheckType(154, v90, 0) )
  {
    this = (BattleLogicFunction_o *)BattleServantData__get_BuffData(ServantData, 0);
    if ( !this )
      goto LABEL_316;
    this = (BattleLogicFunction_o *)this->fields.wkStr;
    if ( !this )
      goto LABEL_316;
    BattleBuffData_SkillRankChangeData__UpdateAddRightAfter((BattleBuffData_SkillRankChangeData_o *)this, 1, 0);
    BattleActionData_BuffData__OnUpdateBuffType((BattleActionData_BuffData_o *)v215, 1, 0);
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
  *(_BYTE *)(v19 + 33) = BattleLogicFunction_ProcListInArgs__get_IsPassive(v212, 0);
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
    sub_1C32BC4((CGThumbnailListItem_o *)(v19 + 224), (int32_t)v97, v98, v99);
    v100 = DataVals__GetParamArray(dataVals_k__BackingField, 71, 0);
    *(_QWORD *)(v19 + 232) = v100;
    sub_1C32BC4((CGThumbnailListItem_o *)(v19 + 232), (int32_t)v100, v101, v102);
    v103 = DataVals__GetParamArray(dataVals_k__BackingField, 72, 0);
    *(_QWORD *)(v19 + 240) = v103;
    sub_1C32BC4((CGThumbnailListItem_o *)(v19 + 240), (int32_t)v103, v104, v105);
    v106 = DataVals__GetParamAddIndividualityAndCheckArrayData(dataVals_k__BackingField, 195, 0);
    *(_QWORD *)(v19 + 424) = v106;
    sub_1C32BC4((CGThumbnailListItem_o *)(v19 + 424), (int32_t)v106, v107, v108);
    v109 = DataVals__GetParamAddIndividualityAndCheckArrayData(dataVals_k__BackingField, 196, 0);
    *(_QWORD *)(v19 + 432) = v109;
    sub_1C32BC4((CGThumbnailListItem_o *)(v19 + 432), (int32_t)v109, v110, v111);
    v112 = DataVals__GetParamAddIndividualityAndCheckArrayData(dataVals_k__BackingField, 197, 0);
    *(_QWORD *)(v19 + 440) = v112;
    sub_1C32BC4((CGThumbnailListItem_o *)(v19 + 440), (int32_t)v112, v113, v114);
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
    sub_1C32BC4((CGThumbnailListItem_o *)(v19 + 256), (int32_t)UpBuffRateBuffTypeList, v117, v118);
    *(_DWORD *)(v19 + 264) = BuffEntity__GetMaxBuffRate(v14, 0);
  }
  if ( DataVals__isParam(dataVals_k__BackingField, 22, 0) )
    BattleBuffData_BuffData__onState((BattleBuffData_BuffData_o *)v19, 64, 0);
  if ( DataVals__isParam(dataVals_k__BackingField, 25, 0) )
    BattleBuffData_BuffData__onState((BattleBuffData_BuffData_o *)v19, 128, 0);
  this = (BattleLogicFunction_o *)DataVals__isShowState(dataVals_k__BackingField, 0);
  if ( ((unsigned __int8)this & 1) != 0 )
  {
    ShowStateWarBoardEnemyEquip = DataVals__GetParam(dataVals_k__BackingField, 14, 0, 0);
LABEL_162:
    BattleBuffData_BuffData__setShowState((BattleBuffData_BuffData_o *)v19, ShowStateWarBoardEnemyEquip, 0);
    goto LABEL_179;
  }
  if ( *(_BYTE *)(v19 + 33) )
  {
    externalArg = v212->fields.externalArg;
    if ( !externalArg )
      goto LABEL_316;
    if ( externalArg->fields.isWarBoard )
    {
      if ( !v17 )
        goto LABEL_316;
      if ( v17->fields.isEnemy && externalArg->fields.grantSkillType == 12 )
      {
        ShowStateWarBoardEnemyEquip = BuffEntity__GetShowStateWarBoardEnemyEquip(v14, 0, 0);
        if ( ShowStateWarBoardEnemyEquip )
          goto LABEL_162;
        if ( !DataManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
        this = (BattleLogicFunction_o *)DataManager__GetMaster_object_((const MethodInfo_30DD39C *)Method_DataManager_GetMaster_BuffTypeDetailMaster___);
        if ( !this )
          goto LABEL_316;
        this = (BattleLogicFunction_o *)DataMasterBase_object__object__int___TryGetEntity(
                                          (DataMasterBase_TMaster__TEntity__PKType__o *)this,
                                          &entity,
                                          v14->fields.type,
                                          (const MethodInfo_3396884 *)Method_DataMasterBase_BuffTypeDetailMaster__BuffTypeDetailEntity__int__TryGetEntity__);
        if ( ((unsigned __int8)this & 1) != 0 )
        {
          this = (BattleLogicFunction_o *)entity;
          if ( !entity )
            goto LABEL_316;
          this = (BattleLogicFunction_o *)BuffTypeDetailEntity__GetShowStateWarBoardEnemyEquip(
                                            (BuffTypeDetailEntity_o *)entity,
                                            0,
                                            0);
          ShowStateWarBoardEnemyEquip = (int)this;
          if ( (_DWORD)this )
            goto LABEL_162;
        }
      }
    }
    v121 = v10->fields.data;
    if ( !v121 )
      goto LABEL_316;
    this = (BattleLogicFunction_o *)v121->fields.battleEvent;
    if ( !this )
      goto LABEL_316;
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
    sub_1C32BC4((CGThumbnailListItem_o *)(v19 + 120), (int32_t)AddIndividualty, v123, v124);
  }
  if ( DataVals__IsAddLinkageTargetIndividualty(dataVals_k__BackingField, 0) )
  {
    LinkageTargetIndividualty = DataVals__GetLinkageTargetIndividualty(dataVals_k__BackingField, 0);
    *(_QWORD *)(v19 + 128) = LinkageTargetIndividualty;
    sub_1C32BC4((CGThumbnailListItem_o *)(v19 + 128), (int32_t)LinkageTargetIndividualty, v126, v127);
  }
  this = (BattleLogicFunction_o *)funcTarget->fields._funcUnit_k__BackingField;
  if ( !this )
    goto LABEL_316;
  if ( BattleLogicFunctionProcess_FunctionUnitCheck__HasLinkedFuncUnit(
         (BattleLogicFunctionProcess_FunctionUnitCheck_o *)this,
         0)
    && DataVals__IsBehaveAsFamilyBuff(dataVals_k__BackingField, 0) )
  {
    BattleLogicFunction__BehaveLinkageBuffAsFamily(v10, (BattleBuffData_BuffData_o *)v19, funcTarget, v128);
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
    v129 = v10->fields.data;
    if ( !v129 )
      goto LABEL_316;
    this = (BattleLogicFunction_o *)v129->fields.battleEvent;
    if ( !this )
      goto LABEL_316;
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
  sub_1C32BC4((CGThumbnailListItem_o *)(v19 + 304), (int32_t)ValsList, v131, v132);
  v133 = DataVals__GetParam(dataVals_k__BackingField, 5, 0, 0);
  if ( v133 )
    v134 = v133;
  else
    v134 = 1000;
  *(_DWORD *)(v19 + 48) = v134;
  *(_BYTE *)(v19 + 465) = DataVals__GetParam(dataVals_k__BackingField, 228, 0, 0) == 1;
  *(_BYTE *)(v19 + 480) = DataVals__GetParam(dataVals_k__BackingField, 230, 0, 0) == 1;
  *(_BYTE *)(v19 + 481) = DataVals__GetParam(dataVals_k__BackingField, 231, 0, 0) == 1;
  ParamStringFormat = DataVals__GetParamStringFormat(
                        dataVals_k__BackingField,
                        229,
                        (System_String_o *)StringLiteral_1/*""*/,
                        0);
  *(_QWORD *)(v19 + 472) = ParamStringFormat;
  sub_1C32BC4((CGThumbnailListItem_o *)(v19 + 472), (int32_t)ParamStringFormat, v136, v137);
  *(_DWORD *)(v19 + 484) = DataVals__GetParam(dataVals_k__BackingField, 237, 0, 0);
  *(_DWORD *)(v19 + 488) = DataVals__GetParam(dataVals_k__BackingField, 239, 0, 0);
  *(_BYTE *)(v19 + 492) = DataVals__isUnaffected(dataVals_k__BackingField, 0);
  DataVals__SetUpHatePriority(dataVals_k__BackingField, (BattleBuffData_BuffData_o *)v19, 0);
  BattleBuffData_BuffData__SetJudgeUseEveryTimeFlag((BattleBuffData_BuffData_o *)v19, dataVals_k__BackingField, 0);
  if ( *(int *)(v19 + 60) < 1 )
    goto LABEL_212;
  v138 = (UnityEngine_Object_o *)v10->fields.logic;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(v138, 0, 0) )
  {
    this = (BattleLogicFunction_o *)v10->fields.logic;
    if ( !this )
      goto LABEL_316;
    v139 = BattleLogic__checkInField((BattleLogic_o *)this, *(_DWORD *)(v19 + 60), 0);
  }
  else
  {
LABEL_212:
    v139 = 1;
  }
  v140 = v14->fields.type;
  if ( !BuffList_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(BuffList_TypeInfo);
  if ( BuffList__CheckAccumulation(v140, 0) )
    BattleServantData__resetAccumulationDamage(ServantData, 0);
  *(_QWORD *)(v19 + 88) = userCommandCodeId;
  if ( userCommandCodeId >= 1 )
  {
    this = (BattleLogicFunction_o *)v10->fields.data;
    if ( !this )
      goto LABEL_316;
    UserCommandCode = BattleData__getUserCommandCode((BattleData_o *)this, userCommandCodeId, 0);
    if ( UserCommandCode )
      *(_DWORD *)(v19 + 160) = UserCommandCode->fields.commandCodeId;
  }
  *(_QWORD *)(v19 + 348) = *(_QWORD *)&v211->fields.commandAssistId;
  ((void (__fastcall *)(BattleLogicFunctionProcess_FunctionTargetCheck_o *, __int64, const MethodInfo *))funcTarget->klass->vtable._7_ApplyPrevSaveBuffData.methodPtr)(
    funcTarget,
    v19,
    funcTarget->klass->vtable._7_ApplyPrevSaveBuffData.method);
  v142 = treasureDvcId;
  if ( ((unsigned __int8)v204 & v212->fields._IsTreasureDvc_k__BackingField) != 0 )
  {
    this = (BattleLogicFunction_o *)sub_1C32CC8(BattleBuffData_BuffData___TypeInfo, 1);
    if ( !this )
      goto LABEL_316;
    v143 = this;
    this = (BattleLogicFunction_o *)sub_1C32D5C(v19, this->klass->_1.element_class);
    if ( !this )
      goto LABEL_318;
    if ( !LODWORD(v143->fields.logic) )
      goto LABEL_317;
    v143->fields.logictarget = (struct BattleLogicTarget_o *)v19;
    sub_1C32BC4((CGThumbnailListItem_o *)&v143->fields.logictarget, v19, v144, v145);
    v146 = (BattleActionEffect_AddServantBuff_o *)sub_1C32E6C(BattleActionEffect_AddServantBuff_TypeInfo);
    BattleActionEffect_AddServantBuff___ctor(v146, uniqueId, (BattleBuffData_BuffData_array *)v143, 0);
    BattleActionData_BuffData__SetActionEffectProc(
      (BattleActionData_BuffData_o *)v215,
      (BattleActionEffect_Base_o *)v146,
      0);
    v211->fields.OverwriteTdMotionId = BattleServantData__getTreasureDvcMotionId(ServantData, 0);
  }
  if ( BuffEntity__checkBuffType(v14, 41, 0) )
    MaxHp = BattleServantData__getMaxHp(ServantData, 0);
  else
    MaxHp = -1;
  userCommandCodeIda = ((__int64 (__fastcall *)(BattleServantData_o *, const MethodInfo *))ServantData->klass->vtable._13_get_resultHp.methodPtr)(
                         ServantData,
                         ServantData->klass->vtable._13_get_resultHp.method);
  if ( !v139 )
    goto LABEL_235;
  v148 = v14->fields.type;
  if ( !BuffList_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(BuffList_TypeInfo);
  v149 = BuffList__CheckUpdateHp(v148, 0);
  v142 = treasureDvcId;
  if ( v149 )
  {
    v215->fields.procType = 2;
    if ( BattleServantData__isLogicResultAlive(ServantData, 0) )
    {
      v150 = 1;
    }
    else
    {
      if ( BattleServantData__isGuts(ServantData, 0) )
      {
        v152 = ServantData->fields.uniqueId;
        IsCommandSideEffect = BattleLogicFunction_ProcListInArgs__get_IsCommandSideEffect(v212, 0);
        NoEffectObject = BattleLogicFunction__getNoEffectObject(
                           v10,
                           v152,
                           funcIndex,
                           dataVals_k__BackingField,
                           IsCommandSideEffect,
                           0,
                           0,
                           v154);
        this = (BattleLogicFunction_o *)v209;
        if ( !v209 )
          goto LABEL_316;
        BattleActionData__addAction(v209, NoEffectObject, 0);
      }
      v150 = 0;
    }
    ((void (__fastcall *)(BattleLogicFunctionProcess_FunctionTargetCheck_o *, BattleActionData_MasterBuffData_o *, __int64, __int64, __int64, const MethodInfo *))funcTarget->klass->vtable._9_AddBuff.methodPtr)(
      funcTarget,
      v215,
      v19,
      1,
      v150,
      funcTarget->klass->vtable._9_AddBuff.method);
    v151 = 0;
  }
  else
  {
LABEL_235:
    ((void (__fastcall *)(BattleLogicFunctionProcess_FunctionTargetCheck_o *, BattleActionData_MasterBuffData_o *, __int64, bool, _QWORD, const MethodInfo *))funcTarget->klass->vtable._9_AddBuff.methodPtr)(
      funcTarget,
      v215,
      v19,
      v139,
      0,
      funcTarget->klass->vtable._9_AddBuff.method);
    v151 = 1;
  }
  id = v14->fields.id;
  if ( id == ConstantMaster__getValue((System_String_o *)StringLiteral_13353/*"TAMAMOCAT_STUN_BUFF_ID"*/, 0) )
  {
    v157 = (System_Collections_Generic_List_int__o *)sub_1C32E6C(System_Collections_Generic_List_int__TypeInfo);
    System_Collections_Generic_List_int____ctor(
      v157,
      (const MethodInfo_377AF44 *)Method_System_Collections_Generic_List_int___ctor__);
    v216 = 1;
    for ( i = System_Int32__ToString((int32_t)&v216, 0); ; i = System_Int32__ToString((int32_t)&v216, 0) )
    {
      v159 = System_String__Concat_63518544((System_String_o *)StringLiteral_13354/*"TAMAMOCAT_TREASURE_DEVICE_ID_"*/, i, 0);
      if ( ConstantMaster__getValue(v159, 0) == -1 )
        break;
      v160 = System_Int32__ToString((int32_t)&v216, 0);
      v161 = System_String__Concat_63518544((System_String_o *)StringLiteral_13354/*"TAMAMOCAT_TREASURE_DEVICE_ID_"*/, v160, 0);
      this = (BattleLogicFunction_o *)ConstantMaster__getValue(v161, 0);
      if ( (_DWORD)this == v142 )
      {
        if ( !v17 )
          goto LABEL_316;
        BattleServantData__SetIsSleepWaitMode(v17, 1, 0);
      }
      ++v216;
    }
  }
  this = (BattleLogicFunction_o *)v10->fields.data;
  if ( !this )
    goto LABEL_316;
  QuestIndividualities = BattleData__getQuestIndividualities((BattleData_o *)this, 0);
  v163 = (UnityEngine_Object_o *)v10->fields.logic;
  v164 = QuestIndividualities;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  this = (BattleLogicFunction_o *)UnityEngine_Object__op_Inequality(v163, 0, 0);
  v165 = v212;
  perf = 0;
  if ( ((unsigned __int8)this & 1) != 0 )
  {
    v167 = v10->fields.logic;
    if ( !v167 )
      goto LABEL_316;
    perf = v167->fields.perf;
  }
  BattleServantData__updateConditionsBuff(ServantData, v164, perf, 0, 0);
  if ( (v151 & 1) == 0 )
  {
    this = (BattleLogicFunction_o *)v209;
    if ( !v209 )
      goto LABEL_316;
    BattleActionData__addReflectLogicResultServantId(v209, uniqueId, 0);
    v168 = (BattleActionEffect_AddChangeMaxHpBuff_o *)sub_1C32E6C(BattleActionEffect_AddChangeMaxHpBuff_TypeInfo);
    BattleActionEffect_AddChangeMaxHpBuff___ctor(v168, 0);
    this = (BattleLogicFunction_o *)sub_1C32CC8(BattleBuffData_BuffData___TypeInfo, 1);
    if ( !this )
      goto LABEL_316;
    v169 = this;
    this = (BattleLogicFunction_o *)sub_1C32D5C(v19, this->klass->_1.element_class);
    if ( this )
    {
      if ( !LODWORD(v169->fields.logic) )
        goto LABEL_317;
      v169->fields.logictarget = (struct BattleLogicTarget_o *)v19;
      sub_1C32BC4((CGThumbnailListItem_o *)&v169->fields.logictarget, v19, v170, v171);
      this = (BattleLogicFunction_o *)((__int64 (__fastcall *)(BattleServantData_o *, const MethodInfo *))ServantData->klass->vtable._13_get_resultHp.methodPtr)(
                                        ServantData,
                                        ServantData->klass->vtable._13_get_resultHp.method);
      if ( !v168 )
        goto LABEL_316;
      v172 = (BattleActionEffect_Base_o *)((__int64 (__fastcall *)(BattleActionEffect_AddChangeMaxHpBuff_o *, BattleLogicFunction_o *, _QWORD, _QWORD, const MethodInfo *))v168->klass->vtable._7_InitBuff.methodPtr)(
                                            v168,
                                            v169,
                                            uniqueId,
                                            (unsigned int)((_DWORD)this - userCommandCodeIda),
                                            v168->klass->vtable._7_InitBuff.method);
      BattleActionData_BuffData__SetActionEffectProc((BattleActionData_BuffData_o *)v215, v172, 0);
      v165 = v212;
      goto LABEL_262;
    }
LABEL_318:
    v202 = sub_1C32EA0(this);
    sub_1C32D48(v202, 0);
  }
LABEL_262:
  if ( BuffEntity__checkBuffType(v14, 133, 0) || *(_QWORD *)(v19 + 312) )
  {
    v173 = (UnityEngine_Object_o *)v10->fields.logic;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    if ( UnityEngine_Object__op_Inequality(v173, 0, 0) )
    {
      this = (BattleLogicFunction_o *)v10->fields.logic;
      if ( !this )
        goto LABEL_316;
      BattleLogic__updateConditionsBuffAll((BattleLogic_o *)this, 0, 0);
    }
    this = (BattleLogicFunction_o *)v10->fields.data;
    if ( !this )
      goto LABEL_316;
    this = (BattleLogicFunction_o *)BattleData__getFieldServantList((BattleData_o *)this, 0, 0);
    if ( !this )
      goto LABEL_316;
    v174 = (int)this->fields.logic;
    v175 = this;
    if ( v174 >= 1 )
    {
      v176 = 0;
      while ( v176 < v174 )
      {
        this = (BattleLogicFunction_o *)*((_QWORD *)&v175->fields.logictarget + (int)v176);
        if ( !this )
          goto LABEL_316;
        BattleServantData__updateBuff((BattleServantData_o *)this, 1, 1, 0);
        v174 = (int)v175->fields.logic;
        if ( (int)++v176 >= v174 )
          goto LABEL_276;
      }
LABEL_317:
      sub_1C32E84(this);
    }
  }
LABEL_276:
  if ( BuffEntity__checkBuffType(v14, 206, 0) )
  {
    ShortenMaxCountArray = DataVals__GetShortenMaxCountArray(dataVals_k__BackingField, 0);
    *(_QWORD *)(v19 + 392) = ShortenMaxCountArray;
    sub_1C32BC4((CGThumbnailListItem_o *)(v19 + 392), (int32_t)ShortenMaxCountArray, v178, v179);
  }
  this = (BattleLogicFunction_o *)BuffEntity__checkBuffType(v14, 208, 0);
  v180 = v209;
  if ( ((unsigned __int8)this & 1) != 0 )
  {
    TargetFunctionIndividuality = DataVals__GetTargetFunctionIndividuality(dataVals_k__BackingField, 0);
    *(_QWORD *)(v19 + 400) = TargetFunctionIndividuality;
    sub_1C32BC4((CGThumbnailListItem_o *)(v19 + 400), (int32_t)TargetFunctionIndividuality, v182, v183);
    TargetBuffIndividuality = DataVals__GetTargetBuffIndividuality(dataVals_k__BackingField, 0);
    *(_QWORD *)(v19 + 408) = TargetBuffIndividuality;
    sub_1C32BC4((CGThumbnailListItem_o *)(v19 + 408), (int32_t)TargetBuffIndividuality, v185, v186);
  }
  if ( (MaxHp & 0x80000000) == 0 )
  {
    this = (BattleLogicFunction_o *)BattleServantData__getMaxHp(ServantData, 0);
    if ( (int)this < MaxHp )
    {
      v187 = ServantData->fields.maxhp;
      if ( !System_Math_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(System_Math_TypeInfo);
      this = (BattleLogicFunction_o *)System_Math__Max_65041976(0, userCommandCodeIda - v187, 0);
      *(_DWORD *)(v19 + 136) = (_DWORD)this;
    }
  }
  v188 = v10->fields.data;
  if ( !v188 )
    goto LABEL_316;
  this = (BattleLogicFunction_o *)v188->fields.battleEvent;
  if ( !this )
    goto LABEL_316;
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
    v190 = (BattleBuffData_CheckIndividualitiesData_o *)sub_1C32E6C(BattleBuffData_CheckIndividualitiesData_TypeInfo);
    BattleBuffData_CheckIndividualitiesData___ctor_45709708(v190, ServantData, 0, 0, 0, 0, 0, 1, 0);
    if ( !buffData )
      goto LABEL_316;
    this = (BattleLogicFunction_o *)BattleBuffData__getBuffList_45487792(buffData, 83, v190, 1, 0, 0, 0, 0);
    if ( !this )
      goto LABEL_316;
    v180 = v209;
    if ( this->fields.logic )
      BattleLogicFunction__functionResetCommandCard(v10, v191, v192, v193, v194, v195);
  }
  if ( DataVals__IsOnParty(dataVals_k__BackingField, 0) )
    *(_DWORD *)(v19 + 272) = v210;
  v196 = BattleLogicFunction_ProcListInArgs__get_IsCommandSideEffect(v165, 0);
  v197 = (BattleActionData_BuffData_o *)((__int64 (__fastcall *)(BattleLogicFunctionProcess_FunctionTargetCheck_o *, BattleActionData_MasterBuffData_o *, __int64, FunctionEntity_o *, bool, const MethodInfo *))funcTarget->klass->vtable._12_MakeAddActionBuffData.methodPtr)(
                                          funcTarget,
                                          v215,
                                          v19,
                                          funcEnt,
                                          v196,
                                          funcTarget->klass->vtable._12_MakeAddActionBuffData.method);
  if ( DataVals__IsProgressTurnOnBoard(dataVals_k__BackingField, 0) )
    *(_BYTE *)(v19 + 368) = 1;
  if ( DataVals__GetParam(dataVals_k__BackingField, 149, 0, 0) > 0
    || BuffEntity__IsDelayRemoveExpiredOnPlayerTurn(v14, 0) )
  {
    *(_BYTE *)(v19 + 369) = 1;
  }
  BattleLogicFunction__AfterAddedBuffProcess(v10, ServantData, v14, v198);
  if ( BuffEntity__getDamageRelease(v14, 0) >= 1
    && !BattleServantData__isLogicResultAlive(ServantData, 0)
    && (this = (BattleLogicFunction_o *)BattleServantData__isGuts(ServantData, 0), ((unsigned __int8)this & 1) != 0)
    || (this = (BattleLogicFunction_o *)BuffEntity__getDamageRelease(v14, 0), (_DWORD)this == -1) )
  {
    ServantData->fields.isGutsSleepRelease = 0;
  }
  if ( !v180
    || (BattleActionData__setBuffData(v180, v197, dataVals_k__BackingField, 0),
        (this = (BattleLogicFunction_o *)v10->fields.data) == 0) )
  {
LABEL_316:
    sub_1C32E7C(this);
  }
  BattleData__AddFreshBuffList((BattleData_o *)this, v197, 0);
  BattleActionData__addAction(v211, v180, 0);
  ((void (__fastcall *)(BattleLogicFunctionProcess_FunctionTargetCheck_o *, BattleActionData_o *, BattleActionData_BuffData_o *, __int64, const MethodInfo *))funcTarget->klass->vtable._10_AfterAddBuffProc.methodPtr)(
    funcTarget,
    v211,
    v197,
    v19,
    funcTarget->klass->vtable._10_AfterAddBuffProc.method);
  v199 = (UnityEngine_Object_o *)v10->fields.logic;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(v199, 0, 0)
    && BattleLogicFunction__IsSituationForceTurnProgressExecutable(
         v10,
         v17,
         dataVals_k__BackingField,
         &isEnemyTurn,
         v200) )
  {
    BattleBuffData__TurnProgressingSpecifiedBuff(
      v10->fields.logic,
      (BattleBuffData_BuffData_o *)v19,
      isEnemyTurn,
      ServantData->fields.uniqueId,
      0);
  }
  if ( DataVals__GetParam(dataVals_k__BackingField, 238, 0, 0) >= 1 )
    *(_BYTE *)(v19 + 513) = 1;
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
  const MethodInfo *v15; // x7
  __int64 v16; // x19
  int32_t v17; // w8
  __int64 v18; // x0
  int32_t v19; // w2
  const MethodInfo *v20; // x3
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
  if ( (byte_4C3A9AA & 1) == 0 )
  {
    sub_1C32C20(&BattleActionData_TypeInfo);
    sub_1C32C20(&EnemySimpleHpData_TypeInfo);
    sub_1C32C20(&System_Math_TypeInfo);
    sub_1C32C20(&BattleActionData_ShiftServant_TypeInfo);
    this = (BattleLogicFunction_o *)sub_1C32C20(&SimpleHpData_TypeInfo);
    byte_4C3A9AA = 1;
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
                                          v15);
        if ( mainAction )
        {
          BattleActionData__addAction(mainAction, (BattleActionData_o *)this, 0);
          return;
        }
      }
    }
    goto LABEL_34;
  }
  v16 = sub_1C32E6C(BattleActionData_TypeInfo);
  BattleActionData___ctor((BattleActionData_o *)v16, 0);
  if ( !v16 )
    goto LABEL_34;
  v17 = targetSvtData->fields.uniqueId;
  *(_DWORD *)(v16 + 32) = v17;
  *(_DWORD *)(v16 + 36) = v17;
  v18 = ((__int64 (__fastcall *)(BattleActionData_BaseShiftGaugeData_o *, const MethodInfo *))shiftGauge->klass->vtable._7_unknown.methodPtr)(
          shiftGauge,
          shiftGauge->klass->vtable._7_unknown.method);
  *(_QWORD *)(v16 + 72) = v18;
  sub_1C32BC4((CGThumbnailListItem_o *)(v16 + 72), v18, v19, v20);
  if ( !dataVals_k__BackingField )
    goto LABEL_34;
  if ( !procArg_k__BackingField )
    goto LABEL_34;
  v21 = dataVals_k__BackingField->fields.funcIndex;
  v22 = targetSvtData->fields.uniqueId;
  funcEnt = dataVals_k__BackingField->fields.funcEnt;
  v24 = BattleLogicFunction_ProcListInArgs__get_IsCommandSideEffect(procArg_k__BackingField, 0);
  this = (BattleLogicFunction_o *)BattleLogicFunction__getFunctionObject(
                                    (BattleLogicFunction_o *)v24,
                                    funcEnt,
                                    v22,
                                    v21,
                                    v24,
                                    0,
                                    v25);
  if ( !this )
    goto LABEL_34;
  BYTE5(this[1].fields.logictarget) = 0;
  BattleActionData__setBuffData((BattleActionData_o *)v16, (BattleActionData_BuffData_o *)this, 0, 0);
  v26 = (BattleActionData_ShiftServant_o *)sub_1C32E6C(BattleActionData_ShiftServant_TypeInfo);
  BattleActionData_ShiftServant___ctor(v26, 0, 0);
  if ( !v26 )
    goto LABEL_34;
  v43 = (BattleActionData_o *)v16;
  v42 = v26;
  BattleActionData_ShiftServant__setBeforeSvtData(v26, targetSvtData, 0);
  ((void (__fastcall *)(BattleActionData_BaseShiftGaugeData_o *, BattleServantData_o *, const MethodInfo *))shiftGauge->klass->vtable._12_Init.methodPtr)(
    shiftGauge,
    targetSvtData,
    shiftGauge->klass->vtable._12_Init.method);
  v27 = (SimpleHpData_o *)sub_1C32E6C(SimpleHpData_TypeInfo);
  SimpleHpData___ctor(v27, targetSvtData, 0);
  if ( DataVals__IsEqualsTo1(dataVals_k__BackingField, 185, 0) )
  {
    MaxHp = BattleServantData__getMaxHp(targetSvtData, 0);
    BattleServantData__setHp(targetSvtData, MaxHp, 1, 0, 0);
    v29 = (SimpleHpData_o *)sub_1C32E6C(SimpleHpData_TypeInfo);
    SimpleHpData___ctor(v29, targetSvtData, 0);
    CurrentShiftPos = BattleServantData__GetCurrentShiftPos(targetSvtData, 0);
    BattleActionData_BaseShiftGaugeData__AddHpUpDataBeforeShift(shiftGauge, CurrentShiftPos, v27, v29, 0);
    v27 = v29;
  }
  v31 = (EnemySimpleHpData_o *)sub_1C32E6C(EnemySimpleHpData_TypeInfo);
  EnemySimpleHpData___ctor(v31, targetSvtData, 0);
  Value = DataVals__GetValue(dataVals_k__BackingField, 0);
  v33 = ((__int64 (__fastcall *)(BattleActionData_BaseShiftGaugeData_o *, BattleServantData_o *, _QWORD, const MethodInfo *))shiftGauge->klass->vtable._9_unknown.methodPtr)(
          shiftGauge,
          targetSvtData,
          Value,
          shiftGauge->klass->vtable._9_unknown.method);
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
    BattleServantData__SetShiftServantChange(targetSvtData, v44->fields.data, v31, v36, 0);
    Param = DataVals__GetParam(dataVals_k__BackingField, 59, 0, 0);
    ((void (__fastcall *)(BattleActionData_BaseShiftGaugeData_o *, BattleServantData_o *, bool, const MethodInfo *))shiftGauge->klass->vtable._10_unknown.methodPtr)(
      shiftGauge,
      targetSvtData,
      Param > 0,
      shiftGauge->klass->vtable._10_unknown.method);
    v38 = (SimpleHpData_o *)sub_1C32E6C(SimpleHpData_TypeInfo);
    SimpleHpData___ctor(v38, targetSvtData, 0);
    v39 = BattleServantData__GetCurrentShiftPos(targetSvtData, 0);
    MaxShiftIconPos = BattleServantData__GetMaxShiftIconPos(targetSvtData, 0);
    ((void (__fastcall *)(BattleActionData_BaseShiftGaugeData_o *, _QWORD, _QWORD, SimpleHpData_o *, SimpleHpData_o *, const MethodInfo *))shiftGauge->klass->vtable._11_unknown.methodPtr)(
      shiftGauge,
      v39,
      MaxShiftIconPos,
      v27,
      v38,
      shiftGauge->klass->vtable._11_unknown.method);
    ++v35;
    v27 = v38;
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
    sub_1C32E7C(this);
  BattleActionData__AddAfterActionData(mainAction, v43, 0, 0);
}


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
  const MethodInfo *v18; // x7
  BattleData_o *v19; // x25
  int32_t v20; // w25
  int32_t v21; // w23
  struct BattleData_o *v22; // x8
  struct System_Int32_array *e_entryid; // x8
  char *v24; // x8
  _DWORD *v25; // x8
  int32_t v26; // w23
  int32_t v27; // t1
  BattleServantData_o *v28; // x24
  BattleActionData_o *v29; // x22
  int32_t uniqueId; // w24
  bool isEffectSummon; // w25
  int32_t targetIndex; // [xsp+Ch] [xbp-44h] BYREF

  if ( (byte_4C3A99B & 1) == 0 )
  {
    sub_1C32C20(&BattleActionData_TypeInfo);
    byte_4C3A99B = 1;
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
    return BattleLogicFunction__getMissObject(FieldSpace, playerId, funcIndex, baseVals, isCommandSideEffect, 0, 0, v18);
  if ( playerId == -1 )
  {
    v19 = this->fields.data;
    data = (BattleData_o *)DataVals__GetValue(baseVals, 0);
    if ( !v19 )
      goto LABEL_26;
    FieldSpace = (BattleLogicFunction_o *)BattleData__GetEnemySummonId(v19, (int32_t)data, 0);
  }
  else
  {
    data = (BattleData_o *)DataVals__GetValue(baseVals, 0);
    if ( !v16 )
      goto LABEL_26;
    FieldSpace = (BattleLogicFunction_o *)BattleServantData__getSummonNpcId(v16, (int32_t)data, 0);
  }
  v20 = (int)FieldSpace;
  if ( (_DWORD)FieldSpace == -1 )
    return BattleLogicFunction__getMissObject(FieldSpace, playerId, funcIndex, baseVals, isCommandSideEffect, 0, 0, v18);
  data = this->fields.data;
  if ( !data )
    goto LABEL_26;
  data = (BattleData_o *)BattleData__getNextUniqueID(data, 0);
  if ( !this->fields.data )
    goto LABEL_26;
  v21 = (int)data;
  data = (BattleData_o *)BattleData__getNextNextIndex(this->fields.data, 0);
  if ( !this->fields.data )
    goto LABEL_26;
  data = (BattleData_o *)BattleData__createSummonEnemyServantData(this->fields.data, v21, (int32_t)data, v20, 0, 0, 0);
  v22 = this->fields.data;
  if ( !v22 )
    goto LABEL_26;
  e_entryid = v22->fields.e_entryid;
  if ( !e_entryid )
    goto LABEL_26;
  if ( (unsigned int)targetIndex >= LODWORD(e_entryid->max_length) )
    sub_1C32E84(data);
  v24 = (char *)e_entryid + 4 * targetIndex;
  v27 = *((_DWORD *)v24 + 8);
  v25 = v24 + 32;
  v26 = v27;
  v28 = (BattleServantData_o *)data;
  if ( !data )
    goto LABEL_26;
  *v25 = data->fields.m_CancellationTokenSource;
  LOBYTE(data->fields.doNotSelectCommandSvtIdList) = 1;
  *(&data->fields.isCalcCritical + 5) = 1;
  BattleServantData__SetRemainActionCount((BattleServantData_o *)data, 1, 0);
  data = (BattleData_o *)this->fields.logic;
  if ( !data
    || (BattleLogic__addEnemyActPriorityList((BattleLogic_o *)data, v28, 0),
        v29 = (BattleActionData_o *)sub_1C32E6C(BattleActionData_TypeInfo),
        BattleActionData___ctor(v29, 0),
        uniqueId = v28->fields.uniqueId,
        isEffectSummon = DataVals__isEffectSummon(baseVals, 0),
        data = (BattleData_o *)DataVals__GetCallSvtEffectId(baseVals, 0),
        !v29)
    || (BattleActionData__setSummonServant(v29, uniqueId, v26, funcIndex, isEffectSummon, (int32_t)data, 0), !procArg) )
  {
LABEL_26:
    sub_1C32E7C(data);
  }
  procArg->fields.updateField = 1;
  return v29;
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
  int32_t Value; // w21
  int32_t Param; // w22
  int32_t FieldPriority; // w23
  bool v13; // w4

  if ( (byte_4C3A99E & 1) == 0 )
  {
    sub_1C32C20(&BattleActionData_TypeInfo);
    byte_4C3A99E = 1;
  }
  v8 = (BattleActionData_o *)sub_1C32E6C(BattleActionData_TypeInfo);
  BattleActionData___ctor(v8, 0);
  if ( !v8 || (v8->fields.actorId = actionId, !baseVals) )
    sub_1C32E7C(v9);
  Value = DataVals__GetValue(baseVals, 0);
  Param = DataVals__GetParam(baseVals, 4, 0, 0);
  FieldPriority = DataVals__GetFieldPriority(baseVals, 0);
  v13 = DataVals__GetParam(baseVals, 6, 0, 0) > 0;
  BattleActionData__setChangeBg(v8, Value, Param, FieldPriority, v13, 0);
  return v8;
}


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

  if ( (byte_4C3A99D & 1) == 0 )
  {
    sub_1C32C20(&BattleActionData_TypeInfo);
    sub_1C32C20(&BattleActionData_ShiftServant_TypeInfo);
    byte_4C3A99D = 1;
  }
  data = this->fields.data;
  if ( !data )
    goto LABEL_9;
  ServantData = BattleData__getServantData(data, targetId, 0);
  v13 = (BattleActionData_o *)sub_1C32E6C(BattleActionData_TypeInfo);
  BattleActionData___ctor(v13, 0);
  if ( !v13 )
    goto LABEL_9;
  v13->fields.actorId = actionId;
  v14 = (BattleActionData_ShiftServant_o *)sub_1C32E6C(BattleActionData_ShiftServant_TypeInfo);
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
    sub_1C32E7C(data);
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
  BattleData_o *data; // x0
  BattleServantData_o *v17; // x26
  BattleLogic_o *logic; // x24
  BattleServantData_o *v19; // x25
  BattleActionData_DamageData_o *v20; // x21

  if ( (byte_4C3A988 & 1) == 0 )
  {
    sub_1C32C20(&BattleActionData_TypeInfo);
    byte_4C3A988 = 1;
  }
  v15 = (BattleActionData_o *)sub_1C32E6C(BattleActionData_TypeInfo);
  BattleActionData___ctor(v15, 0);
  data = this->fields.data;
  if ( !data )
    goto LABEL_10;
  data = (BattleData_o *)BattleData__getServantData(data, playerId, 0);
  if ( !this->fields.data )
    goto LABEL_10;
  v17 = (BattleServantData_o *)data;
  data = (BattleData_o *)BattleData__getServantData(this->fields.data, targetId, 0);
  if ( !baseVals
    || (logic = this->fields.logic,
        v19 = (BattleServantData_o *)data,
        data = (BattleData_o *)DataVals__GetValue(baseVals, 0),
        !logic)
    || (data = (BattleData_o *)BattleLogic__getFunctionDamagelist(
                                 logic,
                                 v17,
                                 v19,
                                 (int32_t)data,
                                 funcIndex,
                                 action,
                                 isSafe,
                                 0)) == 0
    || (v20 = (BattleActionData_DamageData_o *)data,
        BattleActionData_DamageData__addAttackSideEffectAction((BattleActionData_DamageData_o *)data, 80, 0),
        !v15) )
  {
LABEL_10:
    sub_1C32E7C(data);
  }
  BattleActionData__SetFuncDamageData(v15, v20, baseVals, 0);
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
  BattleData_o *data; // x0
  BattleServantData_o *v17; // x27
  struct BattleData_o *v18; // x8
  const MethodInfo *v19; // x7
  int32_t Value; // w0
  int32_t nexttpturn; // w28
  _BOOL8 TDTurn; // x0
  const MethodInfo *v23; // x6

  if ( (byte_4C3A991 & 1) == 0 )
  {
    sub_1C32C20(&BattleActionData_TypeInfo);
    byte_4C3A991 = 1;
  }
  *absorptionCount = 0;
  v15 = (BattleActionData_o *)sub_1C32E6C(BattleActionData_TypeInfo);
  BattleActionData___ctor(v15, 0);
  data = this->fields.data;
  if ( !data )
    goto LABEL_22;
  data = (BattleData_o *)BattleData__getServantData(data, targetId, 0);
  if ( !data )
    goto LABEL_22;
  v17 = (BattleServantData_o *)data;
  if ( !BYTE3(data->fields.doNotSelectCommandSvtIdList) )
    return 0;
  if ( !BattleServantData__isLogicResultAlive((BattleServantData_o *)data, 0) && !BattleServantData__isGuts(v17, 0) )
  {
    data = (BattleData_o *)BattleServantData__isShiftableServant(v17, 0);
    if ( ((unsigned __int8)data & 1) == 0 )
    {
      v18 = this->fields.data;
      if ( !v18 )
        goto LABEL_22;
      data = (BattleData_o *)v18->fields.battleEvent;
      if ( !data )
        goto LABEL_22;
      if ( (((__int64 (__fastcall *)(BattleData_o *, BattleServantData_o *, _QWORD))data->klass[1]._2.unity_user_data)(
              data,
              v17,
              *(_QWORD *)&data->klass[1]._2.initializationExceptionGCHandle)
          & 1) == 0 )
        return 0;
    }
  }
  if ( !BattleServantData__hasTreasureDvc(v17, 0) )
    return BattleLogicFunction__getNoEffectObject(this, targetId, funcIndex, baseVals, isCommandSideEffect, 0, 0, v19);
  data = (BattleData_o *)BattleServantData__isTDSeraled(v17, 0);
  if ( ((unsigned __int8)data & 1) != 0 )
    return BattleLogicFunction__getNoEffectObject(this, targetId, funcIndex, baseVals, isCommandSideEffect, 0, 0, v19);
  if ( !baseVals )
    goto LABEL_22;
  Value = DataVals__GetValue(baseVals, 0);
  nexttpturn = v17->fields.nexttpturn;
  TDTurn = BattleServantData__updownNextTDTurn(v17, Value, 0);
  if ( !TDTurn )
    return BattleLogicFunction__getNoEffectObject(this, targetId, funcIndex, baseVals, isCommandSideEffect, 0, 0, v19);
  data = (BattleData_o *)BattleLogicFunction__getFunctionObject(
                           (BattleLogicFunction_o *)TDTurn,
                           funcEnt,
                           v17->fields.uniqueId,
                           funcIndex,
                           isCommandSideEffect,
                           0,
                           v23);
  if ( !data
    || (HIDWORD(data->fields.m_CancellationTokenSource) = 5, *absorptionCount = v17->fields.nexttpturn - nexttpturn,
                                                             !v15) )
  {
LABEL_22:
    sub_1C32E7C(data);
  }
  BattleActionData__setBuffData(v15, (BattleActionData_BuffData_o *)data, baseVals, 0);
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
  BattleData_o *data; // x0
  BattleServantData_o *v19; // x28
  BattleServantData_o *v20; // x25
  const MethodInfo *v21; // x4
  BattleBuffData_o *buffData; // x29
  BattleBuffData_CheckIndividualitiesData_o *v23; // x20
  struct BattleData_o *v24; // x8
  char v25; // w20
  int32_t ActualRecoveryHealPoint; // w0
  float UpDownGiveHeal; // s0
  __int64 v29; // x8
  const MethodInfo *v30; // [xsp+10h] [xbp-80h]
  FunctionEntity_o *v31; // [xsp+20h] [xbp-70h]
  int32_t digit; // [xsp+2Ch] [xbp-64h] BYREF

  LODWORD(v9) = overwriteHeal;
  if ( (byte_4C3A98B & 1) == 0 )
  {
    sub_1C32C20(&BattleActionData_TypeInfo);
    sub_1C32C20(&BattleBuffData_CheckIndividualitiesData_TypeInfo);
    byte_4C3A98B = 1;
  }
  digit = 0;
  v17 = (BattleActionData_o *)sub_1C32E6C(BattleActionData_TypeInfo);
  BattleActionData___ctor(v17, 0);
  data = this->fields.data;
  if ( !data )
    goto LABEL_26;
  data = (BattleData_o *)BattleData__getServantData(data, playerId, 0);
  if ( !this->fields.data )
    goto LABEL_26;
  v19 = (BattleServantData_o *)data;
  data = (BattleData_o *)BattleData__getServantData(this->fields.data, targetId, 0);
  if ( !baseVals )
    goto LABEL_26;
  v20 = (BattleServantData_o *)data;
  baseVals->fields.isShowForcedEffect = 0;
  if ( (_DWORD)v9 == -1 )
    LODWORD(v9) = DataVals__GetValue(baseVals, 0);
  data = (BattleData_o *)DataVals__isUnaffected(baseVals, 0);
  if ( ((unsigned __int8)data & 1) != 0 )
    goto LABEL_20;
  if ( !v20 )
    goto LABEL_26;
  if ( ((int (__fastcall *)(BattleServantData_o *, const MethodInfo *))v20->klass->vtable._13_get_resultHp.methodPtr)(
         v20,
         v20->klass->vtable._13_get_resultHp.method) <= 0 )
  {
    data = (BattleData_o *)BattleServantData__isShiftableServant(v20, 0);
    if ( ((unsigned __int8)data & 1) != 0 )
      goto LABEL_19;
    v24 = this->fields.data;
    if ( v24 )
    {
      data = (BattleData_o *)v24->fields.battleEvent;
      if ( data )
      {
        data = (BattleData_o *)((__int64 (__fastcall *)(BattleData_o *, BattleServantData_o *, _QWORD))data->klass[1]._2.unity_user_data)(
                                 data,
                                 v20,
                                 *(_QWORD *)&data->klass[1]._2.initializationExceptionGCHandle);
        if ( ((unsigned __int8)data & 1) == 0 )
        {
          data = (BattleData_o *)BattleServantData__isGuts(v20, 0);
          LODWORD(v9) = 0;
          v25 = (unsigned __int8)data ^ 1;
          goto LABEL_21;
        }
        goto LABEL_19;
      }
    }
    goto LABEL_26;
  }
  data = (BattleData_o *)BattleServantData__isShiftReady(v20, 0);
  if ( ((unsigned __int8)data & 1) != 0 )
  {
LABEL_19:
    LODWORD(v9) = 0;
LABEL_20:
    v25 = 0;
    goto LABEL_21;
  }
  v31 = funcEnt;
  buffData = v20->fields.buffData;
  v23 = (BattleBuffData_CheckIndividualitiesData_o *)sub_1C32E6C(BattleBuffData_CheckIndividualitiesData_TypeInfo);
  BattleBuffData_CheckIndividualitiesData___ctor_45709708(v23, v20, 0, 0, 0, 0, 0, 1, 0);
  if ( !buffData )
LABEL_26:
    sub_1C32E7C(data);
  if ( BattleBuffData__isTurnBuff(buffData, 42, v23, 1, 0) )
  {
    data = (BattleData_o *)DataVals__SetInvalidCauseByAnyBuff(baseVals, targetId, 0);
    funcEnt = v31;
    goto LABEL_19;
  }
  if ( v19 )
  {
    UpDownGiveHeal = BattleServantData__getUpDownGiveHeal(v19, v20, 0);
    LODWORD(v9) = BattleUtility__FloorToInt(UpDownGiveHeal * (float)(int)v9, 0);
  }
  funcEnt = v31;
  digit = 1;
  data = (BattleData_o *)BattleServantData__getUpDownHeal(v20, &digit, 0);
  v29 = digit;
  v25 = 0;
  baseVals->fields.isShowForcedEffect = 1;
  v9 = (int)data * (__int64)(int)v9 / v29;
LABEL_21:
  ActualRecoveryHealPoint = BattleLogicFunction__GetActualRecoveryHealPoint(
                              (BattleLogicFunction_o *)data,
                              baseVals,
                              v20,
                              v9,
                              v21);
  BattleLogicFunction__SetGainHpBuff(
    this,
    v17,
    ActualRecoveryHealPoint,
    funcIndex,
    v20,
    funcEnt,
    baseVals,
    isCommandSideEffect,
    v25 & 1,
    0,
    v30);
  return v17;
}


BattleActionData_o *BattleLogicFunction__functionGainHpFromTargets(
        BattleLogicFunction_o *this,
        BattleLogicFunction_ProcListInArgs_o *procArg,
        BattleActionData_o *mainAction,
        BattleLogicFunctionProcess_FunctionTargetCheck_o *funcTarget,
        const MethodInfo *method)
{
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
  __int64 v25; // x26
  __int64 v26; // x8
  __int64 v27; // x9
  int *v28; // x10
  __int64 v29; // x0
  __int64 v30; // x8
  __int64 v31; // x9
  int *v32; // x10
  __int64 v33; // x0
  __int64 v34; // x0
  __int64 v35; // x22
  BattleData_o *data; // x0
  int32_t v37; // w22
  BattleServantData_o *ServantData; // x0
  BattleServantData_o *v39; // x24
  BattleLogicFunction_o *Value; // x0
  const MethodInfo *v41; // x3
  int v42; // w25
  int32_t v43; // w8
  int32_t v44; // w27
  bool isRandomDamage; // w19
  int32_t actorId; // w29
  FunctionEntity_o *funcEnt; // x20
  int32_t funcIndex; // w23
  bool IsCommandSideEffect; // w0
  BattleActionData_o *v50; // x27
  int v51; // w19
  int32_t v52; // w20
  bool v53; // w0
  const MethodInfo *v54; // x7
  BattleActionData_o *NoEffectObject; // x1
  __int64 v56; // x8
  __int64 v57; // x9
  int *v58; // x10
  __int64 v59; // x0
  int32_t v60; // w20
  FunctionEntity_o *v61; // x22
  int32_t v62; // w21
  int32_t targetId_k__BackingField; // w23
  bool v64; // w0
  BattleActionData_o *v65; // x1
  const MethodInfo *overwriteLossHp; // [xsp+0h] [xbp-E0h]
  const MethodInfo *v68; // [xsp+18h] [xbp-C8h]
  DataVals_o *dataVals_k__BackingField; // [xsp+20h] [xbp-C0h]
  BattleLogicFunction_o *v71; // [xsp+38h] [xbp-A8h]
  unsigned int v72; // [xsp+40h] [xbp-A0h]
  int32_t v73; // [xsp+44h] [xbp-9Ch]
  BattleActionData_o *v74; // [xsp+48h] [xbp-98h]
  bool v75; // [xsp+54h] [xbp-8Ch]
  BattleLogicFunction_ProcListInArgs_o *v76; // [xsp+58h] [xbp-88h]
  BattleLogicFunction_o *v77; // [xsp+60h] [xbp-80h]
  System_Enum_o v78; // [xsp+68h] [xbp-78h] BYREF
  int32_t funcType; // [xsp+78h] [xbp-68h]

  v77 = this;
  if ( (byte_4C3A9A7 & 1) == 0 )
  {
    sub_1C32C20(&BattleActionData_TypeInfo);
    sub_1C32C20(&System_IDisposable_TypeInfo);
    sub_1C32C20(&System_Collections_Generic_IEnumerable_BattleLogicFunctionProcess_FunctionTargetCheck__TypeInfo);
    sub_1C32C20(&System_Collections_Generic_IEnumerator_BattleLogicFunctionProcess_FunctionTargetCheck__TypeInfo);
    sub_1C32C20(&System_Collections_IEnumerator_TypeInfo);
    sub_1C32C20(&Method_System_Collections_Generic_List_FuncList_TYPE__Add__);
    sub_1C32C20(&Method_System_Collections_Generic_List_FuncList_TYPE___ctor__);
    sub_1C32C20(&System_Collections_Generic_List_FuncList_TYPE__TypeInfo);
    sub_1C32C20(&FuncList_TYPE_TypeInfo);
    this = (BattleLogicFunction_o *)sub_1C32C20(&StringLiteral_16324/*"_SAFE"*/);
    byte_4C3A9A7 = 1;
  }
  if ( !funcTarget )
    goto LABEL_88;
  funcUnit_k__BackingField = funcTarget->fields._funcUnit_k__BackingField;
  if ( !funcUnit_k__BackingField )
    goto LABEL_88;
  dataVals_k__BackingField = funcUnit_k__BackingField->fields._dataVals_k__BackingField;
  v74 = (BattleActionData_o *)sub_1C32E6C(BattleActionData_TypeInfo);
  BattleActionData___ctor(v74, 0);
  v8 = (System_Collections_Generic_List_T__o *)sub_1C32E6C(System_Collections_Generic_List_FuncList_TYPE__TypeInfo);
  System_Collections_Generic_List_Int32Enum____ctor(
    v8,
    (const MethodInfo_377D770 *)Method_System_Collections_Generic_List_FuncList_TYPE___ctor__);
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
      *(const MethodInfo_377DFC4 **)(*(_QWORD *)(v10[4] + 192LL) + 112LL));
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
      *(const MethodInfo_377DFC4 **)(*(_QWORD *)(v10[4] + 192LL) + 112LL));
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
      *(const MethodInfo_377DFC4 **)(*(_QWORD *)(v10[4] + 192LL) + 112LL));
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
      *(const MethodInfo_377DFC4 **)(*(_QWORD *)(v10[4] + 192LL) + 112LL));
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
  v76 = procArg;
  v71 = this;
  do
  {
    if ( v16 >= logic )
      sub_1C32E84(this);
    v18 = (DataVals_o *)*((_QWORD *)&this->fields.logictarget + (int)v16);
    if ( !v18 )
      goto LABEL_88;
    v78.klass = (System_Enum_c *)FuncList_TYPE_TypeInfo;
    v78.monitor = (void *)-1LL;
    funcType = v18->fields.funcType;
    this = (BattleLogicFunction_o *)System_Enum__ToString(&v78, 0);
    if ( !this )
      goto LABEL_88;
    v75 = System_String__Contains((System_String_o *)this, (System_String_o *)StringLiteral_16324/*"_SAFE"*/, 0);
    this = (BattleLogicFunction_o *)BattleLogicFunction__GetDependFuncTargets(v77, procArg, mainAction, v18, v19);
    if ( !this )
      goto LABEL_88;
    klass = this->klass;
    v21 = this;
    v22 = *(unsigned __int16 *)&this->klass->_2.rank;
    v72 = v16;
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
      v24 = sub_1C83438(
              this,
              System_Collections_Generic_IEnumerable_BattleLogicFunctionProcess_FunctionTargetCheck__TypeInfo,
              0);
    }
    v25 = (*(__int64 (__fastcall **)(BattleLogicFunction_o *, _QWORD))v24)(v21, *(_QWORD *)(v24 + 8));
    if ( !v25 )
      sub_1C32E7C(0);
    v73 = v17;
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
            goto LABEL_39;
        }
        v29 = v26 + 16LL * *v28 + 312;
      }
      else
      {
LABEL_39:
        v29 = sub_1C83438(v25, System_Collections_IEnumerator_TypeInfo, 0);
      }
      if ( ((*(__int64 (__fastcall **)(__int64, _QWORD))v29)(v25, *(_QWORD *)(v29 + 8)) & 1) == 0 )
        break;
      v30 = *(_QWORD *)v25;
      v31 = *(unsigned __int16 *)(*(_QWORD *)v25 + 302LL);
      if ( *(_WORD *)(*(_QWORD *)v25 + 302LL) )
      {
        v32 = (int *)(*(_QWORD *)(v30 + 176) + 8LL);
        while ( *((System_Collections_Generic_IEnumerator_BattleLogicFunctionProcess_FunctionTargetCheck__c **)v32 - 1) != System_Collections_Generic_IEnumerator_BattleLogicFunctionProcess_FunctionTargetCheck__TypeInfo )
        {
          --v31;
          v32 += 4;
          if ( !v31 )
            goto LABEL_46;
        }
        v33 = v30 + 16LL * *v32 + 312;
      }
      else
      {
LABEL_46:
        v33 = sub_1C83438(
                v25,
                System_Collections_Generic_IEnumerator_BattleLogicFunctionProcess_FunctionTargetCheck__TypeInfo,
                0);
      }
      v34 = (*(__int64 (__fastcall **)(__int64, _QWORD))v33)(v25, *(_QWORD *)(v33 + 8));
      v35 = v34;
      if ( !v34 )
        sub_1C32E7C(0);
      if ( ((*(__int64 (__fastcall **)(__int64, BattleActionData_o *, _QWORD))(*(_QWORD *)v34 + 408LL))(
              v34,
              mainAction,
              *(_QWORD *)(*(_QWORD *)v34 + 416LL))
          & 1) != 0 )
      {
        data = v77->fields.data;
        if ( !data )
          sub_1C32E7C(0);
        v37 = *(_DWORD *)(v35 + 32);
        ServantData = BattleData__getServantData(data, v37, 0);
        v39 = ServantData;
        if ( !ServantData )
          sub_1C32E7C(0);
        Value = (BattleLogicFunction_o *)((__int64 (__fastcall *)(BattleServantData_o *, const MethodInfo *))ServantData->klass->vtable._13_get_resultHp.methodPtr)(
                                           ServantData,
                                           ServantData->klass->vtable._13_get_resultHp.method);
        v42 = (int)Value;
        if ( (int)Value >= 1 )
        {
          v43 = v18->fields.funcType;
          if ( v43 == 12 || v43 == 25 )
          {
            Value = (BattleLogicFunction_o *)DataVals__GetValue(v18, 0);
            v44 = (int)Value;
          }
          else
          {
            if ( (v43 & 0xFFFFFFFE) == 0x32 )
            {
              Value = (BattleLogicFunction_o *)BattleLogicFunction__getHpPerValue(Value, v18, v39, v41);
              v44 = (int)Value;
              isRandomDamage = 0;
              goto LABEL_60;
            }
            v44 = -1;
          }
          isRandomDamage = 1;
LABEL_60:
          if ( !mainAction )
            sub_1C32E7C(Value);
          if ( !v76 )
            sub_1C32E7C(0);
          actorId = mainAction->fields.actorId;
          funcEnt = v18->fields.funcEnt;
          funcIndex = v18->fields.funcIndex;
          IsCommandSideEffect = BattleLogicFunction_ProcListInArgs__get_IsCommandSideEffect(v76, 0);
          v50 = BattleLogicFunction__functionlossHp(
                  v77,
                  actorId,
                  v37,
                  funcEnt,
                  v18,
                  funcIndex,
                  v75,
                  IsCommandSideEffect,
                  v44,
                  isRandomDamage,
                  0,
                  v68);
          v51 = v42
              - ((__int64 (__fastcall *)(BattleServantData_o *, const MethodInfo *))v39->klass->vtable._13_get_resultHp.methodPtr)(
                  v39,
                  v39->klass->vtable._13_get_resultHp.method);
          if ( v51 >= 1 )
          {
            if ( !v74 )
              sub_1C32E7C(0);
            BattleActionData__addAction(v74, v50, 0);
            v73 += v51;
          }
          else
          {
            v52 = v18->fields.funcIndex;
            v53 = BattleLogicFunction_ProcListInArgs__get_IsCommandSideEffect(v76, 0);
            NoEffectObject = BattleLogicFunction__getNoEffectObject(v77, v37, v52, v18, v53, 0, 0, v54);
            if ( !v74 )
              sub_1C32E7C(0);
            BattleActionData__addAction(v74, NoEffectObject, 0);
          }
        }
      }
    }
    v17 = v73;
    v56 = *(_QWORD *)v25;
    v57 = *(unsigned __int16 *)(*(_QWORD *)v25 + 302LL);
    if ( *(_WORD *)(*(_QWORD *)v25 + 302LL) )
    {
      v58 = (int *)(*(_QWORD *)(v56 + 176) + 8LL);
      while ( *((System_IDisposable_c **)v58 - 1) != System_IDisposable_TypeInfo )
      {
        --v57;
        v58 += 4;
        if ( !v57 )
          goto LABEL_71;
      }
      v59 = v56 + 16LL * *v58 + 312;
    }
    else
    {
LABEL_71:
      v59 = sub_1C83438(v25, System_IDisposable_TypeInfo, 0);
    }
    (*(void (__fastcall **)(__int64, _QWORD))v59)(v25, *(_QWORD *)(v59 + 8));
    procArg = v76;
    this = v71;
    logic = (int)v71->fields.logic;
    v16 = v72 + 1;
  }
  while ( (int)(v72 + 1) < logic );
LABEL_84:
  if ( !mainAction
    || !procArg
    || (v60 = dataVals_k__BackingField->fields.funcIndex,
        v61 = dataVals_k__BackingField->fields.funcEnt,
        v62 = mainAction->fields.actorId,
        targetId_k__BackingField = funcTarget->fields._targetId_k__BackingField,
        v64 = BattleLogicFunction_ProcListInArgs__get_IsCommandSideEffect(procArg, 0),
        v65 = BattleLogicFunction__functionGainHp(
                v77,
                v62,
                targetId_k__BackingField,
                v61,
                dataVals_k__BackingField,
                v60,
                v64,
                v17,
                overwriteLossHp),
        (this = (BattleLogicFunction_o *)v74) == 0) )
  {
LABEL_88:
    sub_1C32E7C(this);
  }
  BattleActionData__addAction(v74, v65, 0);
  return v74;
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
  BattleData_o *data; // x0
  BattleServantData_o *v17; // x28
  BattleServantData_o *v18; // x25
  int32_t Value; // w27
  const MethodInfo *v20; // x4
  char v21; // w20
  int32_t v22; // w3
  BattleBuffData_o *buffData; // x29
  BattleBuffData_CheckIndividualitiesData_o *v24; // x20
  struct BattleData_o *v25; // x8
  int32_t ActualRecoveryHealPoint; // w0
  float UpDownGiveHeal; // s0
  int32_t UpDownHeal; // w0
  __int64 v30; // x27
  const MethodInfo *v31; // [xsp+10h] [xbp-80h]
  FunctionEntity_o *v32; // [xsp+20h] [xbp-70h]
  int32_t digit; // [xsp+2Ch] [xbp-64h] BYREF

  if ( (byte_4C3A98C & 1) == 0 )
  {
    sub_1C32C20(&BattleActionData_TypeInfo);
    sub_1C32C20(&BattleBuffData_CheckIndividualitiesData_TypeInfo);
    byte_4C3A98C = 1;
  }
  digit = 0;
  v15 = (BattleActionData_o *)sub_1C32E6C(BattleActionData_TypeInfo);
  BattleActionData___ctor(v15, 0);
  data = this->fields.data;
  if ( !data )
    goto LABEL_24;
  data = (BattleData_o *)BattleData__getServantData(data, playerId, 0);
  if ( !this->fields.data )
    goto LABEL_24;
  v17 = (BattleServantData_o *)data;
  data = (BattleData_o *)BattleData__getServantData(this->fields.data, targetId, 0);
  if ( !baseVals )
    goto LABEL_24;
  v18 = (BattleServantData_o *)data;
  baseVals->fields.isShowForcedEffect = 0;
  Value = DataVals__GetValue(baseVals, 0);
  data = (BattleData_o *)DataVals__isUnaffected(baseVals, 0);
  if ( !v18 )
    goto LABEL_24;
  if ( ((unsigned __int8)data & 1) != 0 )
  {
    data = (BattleData_o *)BattleServantData__getMaxHp(v18, 0);
    v21 = 0;
    v22 = (int)data * Value / 1000;
    goto LABEL_19;
  }
  if ( ((int (__fastcall *)(BattleServantData_o *, const MethodInfo *))v18->klass->vtable._13_get_resultHp.methodPtr)(
         v18,
         v18->klass->vtable._13_get_resultHp.method) <= 0 )
  {
    data = (BattleData_o *)BattleServantData__isShiftableServant(v18, 0);
    if ( ((unsigned __int8)data & 1) != 0 )
      goto LABEL_18;
    v25 = this->fields.data;
    if ( v25 )
    {
      data = (BattleData_o *)v25->fields.battleEvent;
      if ( data )
      {
        data = (BattleData_o *)((__int64 (__fastcall *)(BattleData_o *, BattleServantData_o *, _QWORD))data->klass[1]._2.unity_user_data)(
                                 data,
                                 v18,
                                 *(_QWORD *)&data->klass[1]._2.initializationExceptionGCHandle);
        if ( ((unsigned __int8)data & 1) == 0 )
        {
          data = (BattleData_o *)BattleServantData__isGuts(v18, 0);
          v22 = 0;
          v21 = (unsigned __int8)data ^ 1;
          goto LABEL_19;
        }
        goto LABEL_18;
      }
    }
    goto LABEL_24;
  }
  data = (BattleData_o *)BattleServantData__isShiftReady(v18, 0);
  if ( ((unsigned __int8)data & 1) != 0 )
  {
LABEL_18:
    v22 = 0;
    v21 = 0;
    goto LABEL_19;
  }
  v32 = funcEnt;
  buffData = v18->fields.buffData;
  v24 = (BattleBuffData_CheckIndividualitiesData_o *)sub_1C32E6C(BattleBuffData_CheckIndividualitiesData_TypeInfo);
  BattleBuffData_CheckIndividualitiesData___ctor_45709708(v24, v18, 0, 0, 0, 0, 0, 1, 0);
  if ( !buffData )
LABEL_24:
    sub_1C32E7C(data);
  if ( BattleBuffData__isTurnBuff(buffData, 42, v24, 1, 0) )
  {
    data = (BattleData_o *)DataVals__SetInvalidCauseByAnyBuff(baseVals, targetId, 0);
    funcEnt = v32;
    goto LABEL_18;
  }
  if ( v17 )
  {
    UpDownGiveHeal = BattleServantData__getUpDownGiveHeal(v17, v18, 0);
    Value = BattleUtility__FloorToInt(UpDownGiveHeal * (float)Value, 0);
  }
  funcEnt = v32;
  digit = 1;
  UpDownHeal = BattleServantData__getUpDownHeal(v18, &digit, 0);
  v30 = UpDownHeal * (__int64)Value / digit;
  data = (BattleData_o *)BattleServantData__getMaxHp(v18, 0);
  v21 = 0;
  v22 = (int)v30 * (int)data / 1000;
  baseVals->fields.isShowForcedEffect = 1;
LABEL_19:
  ActualRecoveryHealPoint = BattleLogicFunction__GetActualRecoveryHealPoint(
                              (BattleLogicFunction_o *)data,
                              baseVals,
                              v18,
                              v22,
                              v20);
  BattleLogicFunction__SetGainHpBuff(
    this,
    v15,
    ActualRecoveryHealPoint,
    funcIndex,
    v18,
    funcEnt,
    baseVals,
    isCommandSideEffect,
    v21 & 1,
    0,
    v31);
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
  bool v25; // w4
  const MethodInfo *v26; // x7

  if ( (byte_4C3A9A6 & 1) == 0 )
  {
    sub_1C32C20(&BattleActionData_TypeInfo);
    byte_4C3A9A6 = 1;
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
  v14 = (BattleActionData_o *)sub_1C32E6C(BattleActionData_TypeInfo);
  BattleActionData___ctor(v14, 0);
  if ( !baseVals )
LABEL_18:
    sub_1C32E7C(data);
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
          HIDWORD(data->fields.m_CancellationTokenSource) = 3;
          BattleActionData_BuffData__setSaveNp((BattleActionData_BuffData_o *)data, v18, 0);
          if ( v14 )
          {
            BattleActionData__setBuffData(v14, v21, baseVals, 0);
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
  return BattleLogicFunction__getNoEffectObject(this, v24, v23, baseVals, v25, 0, 0, v26);
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
  if ( (byte_4C3A9A4 & 1) == 0 )
  {
    sub_1C32C20(&BattleActionData_TypeInfo);
    sub_1C32C20(&NpGaugeAbsorbResult_TypeInfo);
    this = (BattleLogicFunction_o *)sub_1C32C20(&NpTurnToPointConvert_TypeInfo);
    byte_4C3A9A4 = 1;
  }
  if ( !funcTarget )
    goto LABEL_12;
  funcUnit_k__BackingField = funcTarget->fields._funcUnit_k__BackingField;
  if ( !funcUnit_k__BackingField )
    goto LABEL_12;
  dataVals_k__BackingField = funcUnit_k__BackingField->fields._dataVals_k__BackingField;
  v11 = (BattleActionData_o *)sub_1C32E6C(BattleActionData_TypeInfo);
  BattleActionData___ctor(v11, 0);
  v12 = (NpTurnToPointConvert_o *)sub_1C32E6C(NpTurnToPointConvert_TypeInfo);
  NpTurnToPointConvert___ctor(v12, 0);
  v13 = (NpGaugeAbsorbResult_o *)sub_1C32E6C(NpGaugeAbsorbResult_TypeInfo);
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
    sub_1C32E7C(this);
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
  BattleData_o *data; // x0
  BattleServantData_o *v17; // x27
  const MethodInfo *v18; // x7
  int32_t Value; // w0
  int32_t v21; // w28
  _BOOL8 isGainNp; // x0
  const MethodInfo *v23; // x6

  if ( (byte_4C3A990 & 1) == 0 )
  {
    sub_1C32C20(&BattleActionData_TypeInfo);
    byte_4C3A990 = 1;
  }
  v15 = (BattleActionData_o *)sub_1C32E6C(BattleActionData_TypeInfo);
  BattleActionData___ctor(v15, 0);
  data = this->fields.data;
  if ( !data )
    goto LABEL_21;
  data = (BattleData_o *)BattleData__getServantData(data, targetId, 0);
  if ( !data )
    goto LABEL_21;
  v17 = (BattleServantData_o *)data;
  if ( BYTE3(data->fields.doNotSelectCommandSvtIdList) )
  {
    if ( !BattleServantData__hasTreasureDvc((BattleServantData_o *)data, 0) )
      return BattleLogicFunction__getNoEffectObject(this, targetId, funcIndex, baseVals, isCommandSideEffect, 0, 0, v18);
    data = (BattleData_o *)BattleServantData__isTDSeraled(v17, 0);
    if ( ((unsigned __int8)data & 1) != 0 )
      return BattleLogicFunction__getNoEffectObject(this, targetId, funcIndex, baseVals, isCommandSideEffect, 0, 0, v18);
    if ( !baseVals )
      goto LABEL_21;
    Value = DataVals__GetValue(baseVals, 0);
    if ( absorptionCount < 0 )
    {
      v21 = Value;
      isGainNp = BattleServantData__isGainNp(v17, 1, 0, 0);
      absorptionCount = v21;
      if ( !isGainNp )
      {
LABEL_18:
        data = (BattleData_o *)BattleLogicFunction__getFunctionObject(
                                 (BattleLogicFunction_o *)isGainNp,
                                 funcEnt,
                                 v17->fields.uniqueId,
                                 funcIndex,
                                 isCommandSideEffect,
                                 0,
                                 v23);
        if ( data )
        {
          HIDWORD(data->fields.m_CancellationTokenSource) = 5;
          if ( v15 )
          {
            BattleActionData__setBuffData(v15, (BattleActionData_BuffData_o *)data, baseVals, 0);
            return v15;
          }
        }
LABEL_21:
        sub_1C32E7C(data);
      }
    }
    else if ( !absorptionCount || !BattleServantData__isGainNp(v17, 1, baseVals, 0) )
    {
      return BattleLogicFunction__getNoEffectObject(this, targetId, funcIndex, baseVals, isCommandSideEffect, 0, 0, v18);
    }
    isGainNp = BattleServantData__updownNextTDTurn(v17, -absorptionCount, 0);
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
  BattleActionData_o *v16; // x23
  BattleData_o *data; // x0
  BattleServantData_o *v18; // x28
  BattleServantData_o *v19; // x29
  unsigned int v20; // w0
  int32_t v21; // w19
  bool IsOpponentPTUniqueID; // w0
  System_Int32_array *v23; // x19
  int32_t v24; // w0
  const MethodInfo *v25; // x6
  struct BattleData_o *v26; // x8
  int32_t uniqueId; // w2

  if ( (byte_4C3A98F & 1) == 0 )
  {
    sub_1C32C20(&BattleActionData_TypeInfo);
    byte_4C3A98F = 1;
  }
  v16 = (BattleActionData_o *)sub_1C32E6C(BattleActionData_TypeInfo);
  BattleActionData___ctor(v16, 0);
  data = this->fields.data;
  if ( !data )
    goto LABEL_16;
  data = (BattleData_o *)BattleData__getServantData(data, targetId, 0);
  if ( !this->fields.data )
    goto LABEL_16;
  v18 = (BattleServantData_o *)data;
  data = (BattleData_o *)BattleData__getServantData(this->fields.data, playerId, 0);
  if ( !v18 )
    goto LABEL_16;
  v19 = (BattleServantData_o *)data;
  v20 = ((__int64 (__fastcall *)(BattleServantData_o *, const MethodInfo *))v18->klass->vtable._9_get_hp.methodPtr)(
          v18,
          v18->klass->vtable._9_get_hp.method);
  ((void (__fastcall *)(BattleServantData_o *, _QWORD, const MethodInfo *))v18->klass->vtable._12_set_reducedhp.methodPtr)(
    v18,
    v20,
    v18->klass->vtable._12_set_reducedhp.method);
  data = (BattleData_o *)this->fields.logic;
  if ( !data )
    goto LABEL_16;
  data = (BattleData_o *)BattleLogic__getWave((BattleLogic_o *)data, 0);
  if ( !this->fields.data )
    goto LABEL_16;
  v21 = (int)data;
  IsOpponentPTUniqueID = BattleData__IsOpponentPTUniqueID(this->fields.data, targetId, playerId, 0);
  BattleServantData__setActionHistory(v18, playerId, 4, v21, IsOpponentPTUniqueID, 0);
  if ( !funcUnit )
    goto LABEL_16;
  v23 = BattleLogicFunctionProcess_FunctionUnitCheck__get_FuncIndividuality(funcUnit, 0);
  v24 = ((__int64 (__fastcall *)(BattleServantData_o *, const MethodInfo *))v18->klass->vtable._13_get_resultHp.methodPtr)(
          v18,
          v18->klass->vtable._13_get_resultHp.method);
  BattleServantData__ResultDamage(v18, v24, v19, 0, v23, 0, 0);
  v26 = this->fields.data;
  if ( !v26 )
    goto LABEL_16;
  uniqueId = v18->fields.uniqueId;
  v18->fields.deadTurn = v26->fields.typeTurn;
  data = (BattleData_o *)BattleLogicFunction__getFunctionObject(
                           (BattleLogicFunction_o *)data,
                           funcEnt,
                           uniqueId,
                           funcIndex,
                           isCommandSideEffect,
                           0,
                           v25);
  if ( !data )
    goto LABEL_16;
  HIDWORD(data->fields.m_CancellationTokenSource) = 1;
  if ( playerId == targetId || isNoAccumulation )
    BYTE1(data->fields.battle_info) = 1;
  if ( !v16 )
LABEL_16:
    sub_1C32E7C(data);
  BattleActionData__setBuffData(v16, (BattleActionData_BuffData_o *)data, baseVals, 0);
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

  if ( (byte_4C3A9A5 & 1) == 0 )
  {
    sub_1C32C20(&BattleActionData_TypeInfo);
    sub_1C32C20(&BattleDataDefine_TypeInfo);
    byte_4C3A9A5 = 1;
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
        v14 = (BattleActionData_o *)sub_1C32E6C(BattleActionData_TypeInfo);
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
            HIDWORD(data->fields.m_CancellationTokenSource) = 3;
            BattleActionData_BuffData__setSaveNp((BattleActionData_BuffData_o *)data, v19, 0);
            if ( v14 )
            {
              BattleActionData__setBuffData(v14, v29, baseVals, 0);
              return v14;
            }
          }
        }
      }
LABEL_20:
      sub_1C32E7C(data);
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

  if ( (byte_4C3A9AB & 1) == 0 )
  {
    sub_1C32C20(&BattleActionData_TypeInfo);
    sub_1C32C20(&Method_DataManager_GetMasterData_SkillLvMaster___);
    sub_1C32C20(&Method_SingletonMonoBehaviour_DataManager__getInstance__);
    sub_1C32C20(&StringLiteral_6434/*"FOCUS_UP_EX"*/);
    sub_1C32C20(&StringLiteral_6432/*"FOCUS_UNDER_EX"*/);
    sub_1C32C20(&StringLiteral_6430/*"FOCUS_CENTER_EX"*/);
    sub_1C32C20(&StringLiteral_6431/*"FOCUS_UNDER"*/);
    sub_1C32C20(&StringLiteral_6429/*"FOCUS_CENTER"*/);
    sub_1C32C20(&StringLiteral_6433/*"FOCUS_UP"*/);
    byte_4C3A9AB = 1;
  }
  v8 = *((_QWORD *)Method_SingletonMonoBehaviour_DataManager__getInstance__ + 4);
  if ( (*(_BYTE *)(v8 + 309) & 1) == 0 )
    v8 = sub_1C83334(v4);
  v9 = *(_QWORD *)(*(_QWORD *)(v8 + 192) + 16LL);
  if ( (*(_BYTE *)(v9 + 309) & 1) == 0 )
    v9 = sub_1C83334(v4);
  MasterData_object = **(DataManager_o ***)(v9 + 184);
  if ( !MasterData_object )
    goto LABEL_23;
  MasterData_object = (DataManager_o *)DataManager__GetMasterData_object_(
                                         MasterData_object,
                                         (const MethodInfo_30DD3F0 *)Method_DataManager_GetMasterData_SkillLvMaster___);
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
        sub_1C32E84(MasterData_object);
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
            v25 = &StringLiteral_6434/*"FOCUS_UP_EX"*/;
          else
            v25 = &StringLiteral_6433/*"FOCUS_UP"*/;
        }
        else if ( BattleServantData__isMultiTargetCore(v23, 0) )
        {
          if ( SkillLvEntity__IsAress(v13, 0) )
            v25 = &StringLiteral_6430/*"FOCUS_CENTER_EX"*/;
          else
            v25 = &StringLiteral_6429/*"FOCUS_CENTER"*/;
        }
        else
        {
          v26 = 0;
          if ( !BattleServantData__isMultiTargetUnder(v23, 0) )
          {
LABEL_47:
            v27 = sub_1C32E6C(BattleActionData_TypeInfo);
            BattleActionData___ctor((BattleActionData_o *)v27, 0);
            if ( targetData && v27 )
            {
              *(_DWORD *)(v27 + 32) = targetData->fields.uniqueId;
              *(_DWORD *)(v27 + 36) = actionData->fields.targetId;
              BattleActionData__setStateField((BattleActionData_o *)v27, 0);
              *(_QWORD *)(v27 + 72) = v26;
              sub_1C32BC4((CGThumbnailListItem_o *)(v27 + 72), v26, v28, v29);
              BattleActionData__AddAfterActionData(actionData, (BattleActionData_o *)v27, 0, 0);
              return;
            }
LABEL_23:
            sub_1C32E7C(MasterData_object);
          }
          if ( SkillLvEntity__IsAress(v13, 0) )
            v25 = &StringLiteral_6432/*"FOCUS_UNDER_EX"*/;
          else
            v25 = &StringLiteral_6431/*"FOCUS_UNDER"*/;
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
  const MethodInfo *v9; // x4
  struct BattleLogicFunctionProcess_FunctionUnitCheck_o *funcUnit_k__BackingField; // x8
  DataVals_o *dataVals_k__BackingField; // x19
  int32_t targetId_k__BackingField; // w23
  RemovedBuffInfoGroup_o *v13; // x24
  BattleServantData_o *ServantData; // x26
  const MethodInfo *v15; // x4
  System_Collections_Generic_IEnumerable_BattleBuffData_BuffData__o *v16; // x25
  System_Func_object__bool__o *v17; // x27
  System_Collections_Generic_IEnumerable_T__o *v18; // x25
  System_Collections_Generic_HashSet_T__o *v19; // x27
  int32_t v20; // w2
  const MethodInfo *v21; // x3
  System_Collections_Generic_IEnumerable_BattleBuffData_BuffData__o *v22; // x24
  System_Func_object__bool__o *v23; // x25
  System_Collections_Generic_IEnumerable_TSource__o *v24; // x0
  RemovedBuffInfoGroup_o *v25; // x25
  System_Collections_Generic_List_int__o *v26; // x28
  int klass; // w8
  BattleLogicFunction_o *v28; // x21
  DataMasterBase_TMaster__TEntity__PKType__o *v29; // x29
  __int64 v30; // x22
  __int64 v31; // x27
  BattleBuffData_BuffData_o *v32; // x20
  const MethodInfo *v33; // x2
  const MethodInfo *v34; // x3
  int32_t DispTurn; // w0
  bool isProgressSelfTurn; // w8
  int32_t addOrder; // w1
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
  const MethodInfo *v50; // x7
  BattleActionData_o *NoEffectObject; // x1
  struct BattleData_o *data; // x8
  BattleFieldEnvironmentData_o *FieldEnvData_k__BackingField; // x19
  BattleLogicFunction___c_c *v54; // x0
  System_Func_object__bool__o *_9__119_2; // x20
  Il2CppObject *v56; // x21
  struct BattleLogicFunction___c_StaticFields *static_fields; // x0
  int32_t v58; // w2
  const MethodInfo *v59; // x3
  System_Collections_Generic_IEnumerable_TSource__o *v60; // x0
  BattleActionEffect_ChangeBgmBuff_o *v61; // x19
  BattleLogicFunctionProcess_FunctionTargetCheck_o *v62; // [xsp+0h] [xbp-90h]
  BattleLogicFunction_ProcListInArgs_o *v63; // [xsp+8h] [xbp-88h]
  Il2CppObject *entity; // [xsp+28h] [xbp-68h] BYREF

  if ( (byte_4C3A9B1 & 1) == 0 )
  {
    sub_1C32C20(&BattleActionData_BuffData_TypeInfo);
    sub_1C32C20(&BattleActionEffect_ChangeBgmBuff_TypeInfo);
    sub_1C32C20(&Method_DataManager_GetMasterData_BuffMaster___);
    sub_1C32C20(&Method_DataMasterBase_BuffMaster__BuffEntity__int__TryGetEntity__);
    sub_1C32C20(&Method_System_Linq_Enumerable_ToArray_BattleBuffData_BuffData___);
    sub_1C32C20(&Method_System_Linq_Enumerable_Where_BattleBuffData_BuffData___);
    sub_1C32C20(&System_Func_BattleBuffData_BuffData__bool__TypeInfo);
    sub_1C32C20(&Method_System_Collections_Generic_HashSet_BattleBuffData_BuffData___ctor___77990000);
    sub_1C32C20(&System_Collections_Generic_HashSet_BattleBuffData_BuffData__TypeInfo);
    sub_1C32C20(&Method_System_Collections_Generic_List_int__Add__);
    sub_1C32C20(&Method_System_Collections_Generic_List_int__ToArray__);
    sub_1C32C20(&Method_System_Collections_Generic_List_int___ctor__);
    sub_1C32C20(&System_Collections_Generic_List_int__TypeInfo);
    sub_1C32C20(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_1C32C20(&Method_BattleLogicFunction___c__functionMoveState_b__119_2__);
    sub_1C32C20(&Method_BattleLogicFunction___c__DisplayClass119_0__functionMoveState_b__0__);
    sub_1C32C20(&Method_BattleLogicFunction___c__DisplayClass119_0__functionMoveState_b__1__);
    sub_1C32C20(&BattleLogicFunction___c__DisplayClass119_0_TypeInfo);
    sub_1C32C20(&BattleLogicFunction___c_TypeInfo);
    byte_4C3A9B1 = 1;
  }
  entity = 0;
  v7 = sub_1C32E6C(BattleLogicFunction___c__DisplayClass119_0_TypeInfo);
  BattleLogicFunction___c__DisplayClass119_0___ctor((BattleLogicFunction___c__DisplayClass119_0_o *)v7, 0);
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
                         v9);
  if ( !this->fields.data )
    goto LABEL_61;
  v13 = StealBuffInfoGroup;
  ServantData = BattleData__getServantData(this->fields.data, targetId_k__BackingField, 0);
  BattleLogicFunction__ResetFamilyLinkageIdToStolenFamilyBuffs(
    (BattleLogicFunction_o *)ServantData,
    procArg,
    ServantData,
    v13,
    v15);
  if ( !v7 )
    goto LABEL_61;
  v62 = funcTarget;
  v63 = procArg;
  *(_DWORD *)(v7 + 16) = 0x1000000;
  if ( !v13 )
    goto LABEL_61;
  v16 = RemovedBuffInfoGroup__RemovedLinkageBuffEnumerable(v13, 0);
  v17 = (System_Func_object__bool__o *)sub_1C32E6C(System_Func_BattleBuffData_BuffData__bool__TypeInfo);
  System_Func_object__bool____ctor(
    v17,
    (Il2CppObject *)v7,
    Method_BattleLogicFunction___c__DisplayClass119_0__functionMoveState_b__0__,
    0);
  v18 = (System_Collections_Generic_IEnumerable_T__o *)System_Linq_Enumerable__Where_object_(
                                                         (System_Collections_Generic_IEnumerable_TSource__o *)v16,
                                                         (System_Func_TSource__bool__o *)v17,
                                                         (const MethodInfo_3123BA8 *)Method_System_Linq_Enumerable_Where_BattleBuffData_BuffData___);
  v19 = (System_Collections_Generic_HashSet_T__o *)sub_1C32E6C(System_Collections_Generic_HashSet_BattleBuffData_BuffData__TypeInfo);
  System_Collections_Generic_HashSet_object____ctor_56949016(
    v19,
    v18,
    (const MethodInfo_364F918 *)Method_System_Collections_Generic_HashSet_BattleBuffData_BuffData___ctor___77990000);
  *(_QWORD *)(v7 + 24) = v19;
  sub_1C32BC4((CGThumbnailListItem_o *)(v7 + 24), (int32_t)v19, v20, v21);
  v22 = RemovedBuffInfoGroup__RemovedAllBuffEnumerable(v13, 0);
  v23 = (System_Func_object__bool__o *)sub_1C32E6C(System_Func_BattleBuffData_BuffData__bool__TypeInfo);
  System_Func_object__bool____ctor(
    v23,
    (Il2CppObject *)v7,
    Method_BattleLogicFunction___c__DisplayClass119_0__functionMoveState_b__1__,
    0);
  v24 = System_Linq_Enumerable__Where_object_(
          (System_Collections_Generic_IEnumerable_TSource__o *)v22,
          (System_Func_TSource__bool__o *)v23,
          (const MethodInfo_3123BA8 *)Method_System_Linq_Enumerable_Where_BattleBuffData_BuffData___);
  StealBuffInfoGroup = (RemovedBuffInfoGroup_o *)System_Linq_Enumerable__ToArray_object_(
                                                   v24,
                                                   (const MethodInfo_311CA8C *)Method_System_Linq_Enumerable_ToArray_BattleBuffData_BuffData___);
  if ( !StealBuffInfoGroup )
    goto LABEL_61;
  v25 = StealBuffInfoGroup;
  if ( !StealBuffInfoGroup[1].klass )
  {
    if ( dataVals_k__BackingField )
    {
      StealBuffInfoGroup = (RemovedBuffInfoGroup_o *)v63;
      if ( v63 )
      {
        funcIndex = dataVals_k__BackingField->fields.funcIndex;
        IsCommandSideEffect = BattleLogicFunction_ProcListInArgs__get_IsCommandSideEffect(v63, 0);
        NoEffectObject = BattleLogicFunction__getNoEffectObject(
                           this,
                           targetId_k__BackingField,
                           funcIndex,
                           dataVals_k__BackingField,
                           IsCommandSideEffect,
                           0,
                           0,
                           v50);
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
  v26 = (System_Collections_Generic_List_int__o *)sub_1C32E6C(System_Collections_Generic_List_int__TypeInfo);
  System_Collections_Generic_List_int____ctor(
    v26,
    (const MethodInfo_377AF44 *)Method_System_Collections_Generic_List_int___ctor__);
  StealBuffInfoGroup = (RemovedBuffInfoGroup_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39E2904 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !StealBuffInfoGroup )
    goto LABEL_61;
  StealBuffInfoGroup = (RemovedBuffInfoGroup_o *)DataManager__GetMasterData_object_(
                                                   (DataManager_o *)StealBuffInfoGroup,
                                                   (const MethodInfo_30DD3F0 *)Method_DataManager_GetMasterData_BuffMaster___);
  klass = (int)v25[1].klass;
  v28 = this;
  if ( klass < 1 )
  {
    v31 = 0;
LABEL_47:
    v47 = 1;
    goto LABEL_48;
  }
  v29 = (DataMasterBase_TMaster__TEntity__PKType__o *)StealBuffInfoGroup;
  v30 = 0;
  v31 = 0;
  do
  {
    if ( (unsigned int)v30 >= klass )
      sub_1C32E84(StealBuffInfoGroup);
    v32 = (BattleBuffData_BuffData_o *)*((_QWORD *)&v25[1].monitor + v30);
    if ( !v32 || !v29 )
      goto LABEL_61;
    StealBuffInfoGroup = (RemovedBuffInfoGroup_o *)DataMasterBase_object__object__int___TryGetEntity(
                                                     v29,
                                                     &entity,
                                                     v32->fields.buffId,
                                                     (const MethodInfo_3396884 *)Method_DataMasterBase_BuffMaster__BuffEntity__int__TryGetEntity__);
    if ( ((unsigned __int8)StealBuffInfoGroup & 1) != 0 )
    {
      StealBuffInfoGroup = (RemovedBuffInfoGroup_o *)BattleLogicFunction__IsAddStateFieldFlag(v28, v32, v33);
      if ( !ServantData )
        goto LABEL_61;
      BattleServantData__addBuff(ServantData, v32, (unsigned __int8)StealBuffInfoGroup & 1, 0, 1, 0);
      if ( v32->fields.changeBgmData )
        BattleBuffData_ChangeBgmData__UpdateUniqueVal(
          v32->fields.changeBgmData,
          v32->fields.addOrder,
          ServantData->fields.uniqueId,
          0);
      StealBuffInfoGroup = (RemovedBuffInfoGroup_o *)entity;
      if ( !entity )
        goto LABEL_61;
      if ( !BuffEntity__IsDisableMoveStateTurnChange((BuffEntity_o *)entity, 0) )
      {
        if ( v32->fields.turn <= 0 )
        {
          isProgressSelfTurn = v32->fields.isProgressSelfTurn;
        }
        else
        {
          DispTurn = BattleBuffData_BuffData__get_DispTurn(v32, 0);
          isProgressSelfTurn = v32->fields.isProgressSelfTurn;
          v32->fields.turn = 2 * DispTurn - isProgressSelfTurn;
        }
        v32->fields.isProgressEndEnemyTurn = isProgressSelfTurn ^ ServantData->fields.isEnemy ^ 1;
      }
      BattleLogicFunction__AfterAddedBuffProcess(v28, ServantData, (BuffEntity_o *)entity, v34);
      if ( v31 )
      {
        if ( !v26 )
          goto LABEL_61;
        addOrder = v32->fields.addOrder;
        items = v26->fields._items;
        v39 = Method_System_Collections_Generic_List_int__Add__;
        ++v26->fields._version;
        if ( !items )
          goto LABEL_61;
        size = v26->fields._size;
        if ( (unsigned int)size >= LODWORD(items->max_length) )
        {
          System_Collections_Generic_List_int___AddWithResize(
            v26,
            addOrder,
            *(const MethodInfo_377B798 **)(*(_QWORD *)(v39[4] + 192LL) + 112LL));
        }
        else
        {
          v26->fields._size = size + 1;
          items->m_Items[size] = addOrder;
        }
      }
      else
      {
        v41 = (BattleActionData_BuffData_o *)sub_1C32E6C(BattleActionData_BuffData_TypeInfo);
        BattleActionData_BuffData___ctor(v41, 0);
        if ( !v41 )
          goto LABEL_61;
        v41->fields.targetId = targetId_k__BackingField;
        if ( !dataVals_k__BackingField )
          goto LABEL_61;
        StealBuffInfoGroup = (RemovedBuffInfoGroup_o *)v63;
        v41->fields.functionIndex = dataVals_k__BackingField->fields.funcIndex;
        if ( !v63 )
          goto LABEL_61;
        funcEnt = dataVals_k__BackingField->fields.funcEnt;
        v43 = BattleLogicFunction_ProcListInArgs__get_IsCommandSideEffect(v63, 0);
        v31 = ((__int64 (__fastcall *)(BattleLogicFunctionProcess_FunctionTargetCheck_o *, BattleActionData_BuffData_o *, BattleBuffData_BuffData_o *, struct FunctionEntity_o *, bool, const MethodInfo *))v62->klass->vtable._12_MakeAddActionBuffData.methodPtr)(
                v62,
                v41,
                v32,
                funcEnt,
                v43,
                v62->klass->vtable._12_MakeAddActionBuffData.method);
        StealBuffInfoGroup = (RemovedBuffInfoGroup_o *)mainAction;
        if ( !mainAction )
          goto LABEL_61;
        BattleActionData__setBuffData(mainAction, (BattleActionData_BuffData_o *)v31, dataVals_k__BackingField, 0);
        v28 = this;
        StealBuffInfoGroup = (RemovedBuffInfoGroup_o *)this->fields.data;
        if ( !StealBuffInfoGroup )
          goto LABEL_61;
        BattleData__AddFreshBuffList((BattleData_o *)StealBuffInfoGroup, (BattleActionData_BuffData_o *)v31, 0);
      }
    }
    klass = (int)v25[1].klass;
    ++v30;
  }
  while ( (int)v30 < klass );
  if ( !v31 )
    goto LABEL_47;
  if ( !v26 )
    goto LABEL_61;
  v44 = System_Collections_Generic_List_int___ToArray(
          v26,
          (const MethodInfo_377D250 *)Method_System_Collections_Generic_List_int__ToArray__);
  *(_QWORD *)(v31 + 152) = v44;
  sub_1C32BC4((CGThumbnailListItem_o *)(v31 + 152), (int32_t)v44, v45, v46);
  v47 = 0;
LABEL_48:
  data = v28->fields.data;
  if ( !data )
    goto LABEL_61;
  FieldEnvData_k__BackingField = data->fields._FieldEnvData_k__BackingField;
  v54 = BattleLogicFunction___c_TypeInfo;
  if ( !BattleLogicFunction___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BattleLogicFunction___c_TypeInfo);
    v54 = BattleLogicFunction___c_TypeInfo;
  }
  _9__119_2 = (System_Func_object__bool__o *)v54->static_fields->__9__119_2;
  if ( !_9__119_2 )
  {
    if ( !v54->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v54);
      v54 = BattleLogicFunction___c_TypeInfo;
    }
    v56 = (Il2CppObject *)v54->static_fields->__9;
    _9__119_2 = (System_Func_object__bool__o *)sub_1C32E6C(System_Func_BattleBuffData_BuffData__bool__TypeInfo);
    System_Func_object__bool____ctor(_9__119_2, v56, Method_BattleLogicFunction___c__functionMoveState_b__119_2__, 0);
    static_fields = BattleLogicFunction___c_TypeInfo->static_fields;
    static_fields->__9__119_2 = (struct System_Func_BattleBuffData_BuffData__bool__o *)_9__119_2;
    sub_1C32BC4((CGThumbnailListItem_o *)&static_fields->__9__119_2, (int32_t)_9__119_2, v58, v59);
  }
  v60 = System_Linq_Enumerable__Where_object_(
          (System_Collections_Generic_IEnumerable_TSource__o *)v25,
          (System_Func_TSource__bool__o *)_9__119_2,
          (const MethodInfo_3123BA8 *)Method_System_Linq_Enumerable_Where_BattleBuffData_BuffData___);
  StealBuffInfoGroup = (RemovedBuffInfoGroup_o *)System_Linq_Enumerable__ToArray_object_(
                                                   v60,
                                                   (const MethodInfo_311CA8C *)Method_System_Linq_Enumerable_ToArray_BattleBuffData_BuffData___);
  if ( !FieldEnvData_k__BackingField )
    goto LABEL_61;
  if ( BattleFieldEnvironmentData__AddBgmFromChangeBgmBuffArray(
         FieldEnvData_k__BackingField,
         (BattleBuffData_BuffData_array *)StealBuffInfoGroup,
         0)
    && v47 != 1 )
  {
    v61 = (BattleActionEffect_ChangeBgmBuff_o *)sub_1C32E6C(BattleActionEffect_ChangeBgmBuff_TypeInfo);
    BattleActionEffect_ChangeBgmBuff___ctor(v61, 0);
    if ( !v47 )
    {
      BattleActionData_BuffData__SetActionEffectProc(
        (BattleActionData_BuffData_o *)v31,
        (BattleActionEffect_Base_o *)v61,
        0);
      return;
    }
LABEL_61:
    sub_1C32E7C(StealBuffInfoGroup);
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
  BattleData_o *data; // x0
  BattleData_o *v17; // x8
  BattleServantData_o *v18; // x22
  BattleServantData_o *ServantData; // x20
  System_Collections_Generic_List_int__o *v20; // x27
  struct System_Int32_array *items; // x8
  _QWORD *v22; // x9
  __int64 size; // x10
  int v24; // w11
  __int64 v25; // x29
  char v26; // w28
  char v27; // w10
  System_Int32_array *TargetRarityList; // x26
  bool v29; // w8
  System_Int32_array *buffIndv; // x19
  __int64 v31; // x20
  int32_t v32; // w1
  struct System_Int32_array *v33; // x8
  _QWORD *v34; // x9
  __int64 v35; // x10
  System_Int32_array_array *Int2DimensionalArray; // x0
  struct System_Int32_array *v37; // x8
  _QWORD *v38; // x9
  __int64 v39; // x10
  struct System_Int32_array *v40; // x8
  _QWORD *v41; // x9
  __int64 v42; // x10
  struct System_Int32_array *v43; // x8
  _QWORD *v44; // x9
  __int64 v45; // x10
  struct System_Int32_array *v46; // x8
  _QWORD *v47; // x9
  __int64 v48; // x10
  struct System_Int32_array *v49; // x8
  _QWORD *v50; // x9
  __int64 v51; // x10
  struct System_Int32_array *v52; // x8
  _QWORD *v53; // x9
  __int64 v54; // x10
  int32_t BattlePointPhase; // w20
  struct System_Int32_array *v56; // x8
  _QWORD *v57; // x9
  __int64 v58; // x10
  struct System_Int32_array *v59; // x8
  _QWORD *v60; // x9
  __int64 v61; // x10
  bool v62; // w0
  struct System_Int32_array *v63; // x8
  _QWORD *v64; // x9
  __int64 v65; // x10
  struct System_Int32_array *v66; // x8
  _QWORD *v67; // x9
  __int64 v68; // x10
  System_Array_o *v69; // x20
  System_RuntimeFieldHandle_o v70; // x1
  bool v71; // w20
  bool IsOverChargeState; // w0
  int32_t v73; // w2
  const MethodInfo *v74; // x3
  int32_t NPFixedDamageValue; // w21
  BattleLogic_DamageProcessArgs_o *damageProcessArgs; // x25
  BattleLogic_o *logic; // x24
  System_Int32_array *v78; // x27
  bool IsIncludeIgnoreIndividuality; // w29
  BattleActionData_DamageData_o *v80; // x20
  char v81; // w21
  bool v83; // [xsp+30h] [xbp-A0h]
  bool isRarityAtk; // [xsp+34h] [xbp-9Ch]
  BattleServantData_o *target; // [xsp+38h] [xbp-98h]
  BattleActionData_o *v86; // [xsp+40h] [xbp-90h]
  int32_t v87; // [xsp+48h] [xbp-88h]
  int32_t v88; // [xsp+4Ch] [xbp-84h]
  BattleActionData_o *actiona; // [xsp+50h] [xbp-80h]
  unsigned int v90; // [xsp+68h] [xbp-68h]

  if ( (byte_4C3A989 & 1) == 0 )
  {
    sub_1C32C20(&BattleActionData_TypeInfo);
    sub_1C32C20(&BattleLogic_DamageProcessArgs_TypeInfo);
    sub_1C32C20(&int_____TypeInfo);
    sub_1C32C20(&int___TypeInfo);
    sub_1C32C20(&Method_System_Collections_Generic_List_int__Add__);
    sub_1C32C20(&Method_System_Collections_Generic_List_int__ToArray__);
    sub_1C32C20(&Method_System_Collections_Generic_List_int___ctor__);
    sub_1C32C20(&System_Collections_Generic_List_int__TypeInfo);
    sub_1C32C20(&DataVals_OverChargeState___TypeInfo);
    sub_1C32C20(&Field__PrivateImplementationDetails__44BE0EBF7C907BA44AD83314C6AD0AA399AD5B73911C129D2CD6A85D4A056C90);
    byte_4C3A989 = 1;
  }
  v15 = (BattleActionData_o *)sub_1C32E6C(BattleActionData_TypeInfo);
  BattleActionData___ctor(v15, 0);
  data = this->fields.data;
  if ( !data )
    goto LABEL_93;
  data = (BattleData_o *)BattleData__getServantData(data, playerId, 0);
  v17 = this->fields.data;
  if ( !v17 )
    goto LABEL_93;
  v18 = (BattleServantData_o *)data;
  ServantData = BattleData__getServantData(v17, targetId, 0);
  v20 = (System_Collections_Generic_List_int__o *)sub_1C32E6C(System_Collections_Generic_List_int__TypeInfo);
  System_Collections_Generic_List_int____ctor(
    v20,
    (const MethodInfo_377AF44 *)Method_System_Collections_Generic_List_int___ctor__);
  if ( !baseVals
    || (data = (BattleData_o *)DataVals__GetParam(baseVals, 3, 0, 0), !v20)
    || (items = v20->fields._items,
        v22 = Method_System_Collections_Generic_List_int__Add__,
        ++v20->fields._version,
        !items) )
  {
LABEL_93:
    sub_1C32E7C(data);
  }
  size = v20->fields._size;
  actiona = action;
  v87 = funcIndex;
  if ( (unsigned int)size >= LODWORD(items->max_length) )
  {
    System_Collections_Generic_List_int___AddWithResize(
      v20,
      (int32_t)data,
      *(const MethodInfo_377B798 **)(*(_QWORD *)(v22[4] + 192LL) + 112LL));
  }
  else
  {
    v20->fields._size = size + 1;
    items->m_Items[size] = (int)data;
  }
  v24 = type - 3;
  v25 = 0;
  v88 = type;
  v26 = 0;
  target = ServantData;
  v86 = v15;
  v90 = v24;
  v27 = 0;
  TargetRarityList = 0;
  v29 = 0;
  buffIndv = 0;
  v31 = 0;
  switch ( v24 )
  {
    case 0:
    case 1:
    case 4:
    case 6:
    case 7:
      v32 = 7;
      goto LABEL_14;
    case 2:
    case 3:
      v32 = 6;
LABEL_14:
      data = (BattleData_o *)DataVals__GetParam(baseVals, v32, 0, 0);
      v33 = v20->fields._items;
      v34 = Method_System_Collections_Generic_List_int__Add__;
      ++v20->fields._version;
      if ( !v33 )
        goto LABEL_93;
      v35 = v20->fields._size;
      if ( (unsigned int)v35 >= LODWORD(v33->max_length) )
      {
        System_Collections_Generic_List_int___AddWithResize(
          v20,
          (int32_t)data,
          *(const MethodInfo_377B798 **)(*(_QWORD *)(v34[4] + 192LL) + 112LL));
      }
      else
      {
        v20->fields._size = v35 + 1;
        v33->m_Items[v35] = (int)data;
      }
      break;
    case 5:
      goto LABEL_85;
    case 8:
      v20 = (System_Collections_Generic_List_int__o *)sub_1C32E6C(System_Collections_Generic_List_int__TypeInfo);
      System_Collections_Generic_List_int____ctor(
        v20,
        (const MethodInfo_377AF44 *)Method_System_Collections_Generic_List_int___ctor__);
      data = (BattleData_o *)DataVals__GetParam(baseVals, 3, 0, 0);
      if ( !v20 )
        goto LABEL_93;
      v37 = v20->fields._items;
      v38 = Method_System_Collections_Generic_List_int__Add__;
      ++v20->fields._version;
      if ( !v37 )
        goto LABEL_93;
      v39 = v20->fields._size;
      if ( (unsigned int)v39 >= LODWORD(v37->max_length) )
      {
        System_Collections_Generic_List_int___AddWithResize(
          v20,
          (int32_t)data,
          *(const MethodInfo_377B798 **)(*(_QWORD *)(v38[4] + 192LL) + 112LL));
      }
      else
      {
        v20->fields._size = v39 + 1;
        v37->m_Items[v39] = (int)data;
      }
      data = (BattleData_o *)DataVals__GetParam(baseVals, 7, 0, 0);
      v46 = v20->fields._items;
      v47 = Method_System_Collections_Generic_List_int__Add__;
      ++v20->fields._version;
      if ( !v46 )
        goto LABEL_93;
      v48 = v20->fields._size;
      if ( (unsigned int)v48 >= LODWORD(v46->max_length) )
      {
        System_Collections_Generic_List_int___AddWithResize(
          v20,
          (int32_t)data,
          *(const MethodInfo_377B798 **)(*(_QWORD *)(v47[4] + 192LL) + 112LL));
      }
      else
      {
        v20->fields._size = v48 + 1;
        v46->m_Items[v48] = (int)data;
      }
      data = (BattleData_o *)DataVals__GetParam(baseVals, 60, 0, 0);
      v52 = v20->fields._items;
      v53 = Method_System_Collections_Generic_List_int__Add__;
      ++v20->fields._version;
      if ( !v52 )
        goto LABEL_93;
      v54 = v20->fields._size;
      if ( (unsigned int)v54 >= LODWORD(v52->max_length) )
      {
        System_Collections_Generic_List_int___AddWithResize(
          v20,
          (int32_t)data,
          *(const MethodInfo_377B798 **)(*(_QWORD *)(v53[4] + 192LL) + 112LL));
      }
      else
      {
        v20->fields._size = v54 + 1;
        v52->m_Items[v54] = (int)data;
      }
      data = (BattleData_o *)DataVals__GetParam(baseVals, 61, 0, 0);
      v59 = v20->fields._items;
      v60 = Method_System_Collections_Generic_List_int__Add__;
      ++v20->fields._version;
      if ( !v59 )
        goto LABEL_93;
      v61 = v20->fields._size;
      if ( (unsigned int)v61 >= LODWORD(v59->max_length) )
      {
        System_Collections_Generic_List_int___AddWithResize(
          v20,
          (int32_t)data,
          *(const MethodInfo_377B798 **)(*(_QWORD *)(v60[4] + 192LL) + 112LL));
      }
      else
      {
        v20->fields._size = v61 + 1;
        v59->m_Items[v61] = (int)data;
      }
      data = (BattleData_o *)DataVals__GetParam(baseVals, 4, 0, 0);
      v63 = v20->fields._items;
      v64 = Method_System_Collections_Generic_List_int__Add__;
      ++v20->fields._version;
      if ( !v63 )
        goto LABEL_93;
      v65 = v20->fields._size;
      if ( (unsigned int)v65 >= LODWORD(v63->max_length) )
      {
        System_Collections_Generic_List_int___AddWithResize(
          v20,
          (int32_t)data,
          *(const MethodInfo_377B798 **)(*(_QWORD *)(v64[4] + 192LL) + 112LL));
      }
      else
      {
        v20->fields._size = v65 + 1;
        v63->m_Items[v65] = (int)data;
      }
      data = (BattleData_o *)DataVals__GetParam(baseVals, 6, 0, 0);
      v66 = v20->fields._items;
      v67 = Method_System_Collections_Generic_List_int__Add__;
      ++v20->fields._version;
      if ( !v66 )
        goto LABEL_93;
      v68 = v20->fields._size;
      if ( (unsigned int)v68 >= LODWORD(v66->max_length) )
      {
        System_Collections_Generic_List_int___AddWithResize(
          v20,
          (int32_t)data,
          *(const MethodInfo_377B798 **)(*(_QWORD *)(v67[4] + 192LL) + 112LL));
      }
      else
      {
        v20->fields._size = v68 + 1;
        v66->m_Items[v68] = (int)data;
      }
      buffIndv = DataVals__GetTargetList(baseVals, 0);
      v69 = (System_Array_o *)sub_1C32CC8(DataVals_OverChargeState___TypeInfo, 3);
      v70.fields.value = Field__PrivateImplementationDetails__44BE0EBF7C907BA44AD83314C6AD0AA399AD5B73911C129D2CD6A85D4A056C90;
      System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray_64219320(v69, v70, 0);
      DataVals__UpdateOverChargeEachFunc(baseVals, (DataVals_OverChargeState_array *)v69, 0);
      v71 = DataVals__IsOverChargeState(baseVals, 2, 0) || DataVals__IsOverChargeState(baseVals, 8, 0);
      v26 = 1;
      IsOverChargeState = DataVals__IsOverChargeState(baseVals, 1, 0);
      v25 = 0;
      v27 = 0;
      TargetRarityList = 0;
      v29 = v71 && !IsOverChargeState;
      v31 = (__int64)buffIndv;
      goto LABEL_85;
    case 9:
      data = (BattleData_o *)DataVals__GetParam(baseVals, 7, 0, 0);
      v40 = v20->fields._items;
      v41 = Method_System_Collections_Generic_List_int__Add__;
      ++v20->fields._version;
      if ( !v40 )
        goto LABEL_93;
      v42 = v20->fields._size;
      if ( (unsigned int)v42 >= LODWORD(v40->max_length) )
      {
        System_Collections_Generic_List_int___AddWithResize(
          v20,
          (int32_t)data,
          *(const MethodInfo_377B798 **)(*(_QWORD *)(v41[4] + 192LL) + 112LL));
      }
      else
      {
        v20->fields._size = v42 + 1;
        v40->m_Items[v42] = (int)data;
      }
      data = (BattleData_o *)DataVals__GetParam(baseVals, 4, 0, 0);
      v43 = v20->fields._items;
      v44 = Method_System_Collections_Generic_List_int__Add__;
      ++v20->fields._version;
      if ( !v43 )
        goto LABEL_93;
      v45 = v20->fields._size;
      if ( (unsigned int)v45 >= LODWORD(v43->max_length) )
      {
        System_Collections_Generic_List_int___AddWithResize(
          v20,
          (int32_t)data,
          *(const MethodInfo_377B798 **)(*(_QWORD *)(v44[4] + 192LL) + 112LL));
      }
      else
      {
        v20->fields._size = v45 + 1;
        v43->m_Items[v45] = (int)data;
      }
      data = (BattleData_o *)DataVals__GetParam(baseVals, 6, 0, 0);
      v49 = v20->fields._items;
      v50 = Method_System_Collections_Generic_List_int__Add__;
      ++v20->fields._version;
      if ( !v49 )
        goto LABEL_93;
      v51 = v20->fields._size;
      if ( (unsigned int)v51 >= LODWORD(v49->max_length) )
      {
        System_Collections_Generic_List_int___AddWithResize(
          v20,
          (int32_t)data,
          *(const MethodInfo_377B798 **)(*(_QWORD *)(v50[4] + 192LL) + 112LL));
      }
      else
      {
        v20->fields._size = v51 + 1;
        v49->m_Items[v51] = (int)data;
      }
      data = (BattleData_o *)DataVals__GetParam(baseVals, 6, 0, 0);
      if ( !v18 )
        goto LABEL_93;
      BattlePointPhase = BattleServantData__GetBattlePointPhase(v18, (int32_t)data, 0);
      data = (BattleData_o *)DataVals__GetParamAddTypeIndex(baseVals, 181, BattlePointPhase, -1, 0);
      v56 = v20->fields._items;
      v57 = Method_System_Collections_Generic_List_int__Add__;
      ++v20->fields._version;
      if ( !v56 )
        goto LABEL_93;
      v58 = v20->fields._size;
      if ( (unsigned int)v58 >= LODWORD(v56->max_length) )
      {
        System_Collections_Generic_List_int___AddWithResize(
          v20,
          (int32_t)data,
          *(const MethodInfo_377B798 **)(*(_QWORD *)(v57[4] + 192LL) + 112LL));
      }
      else
      {
        v20->fields._size = v58 + 1;
        v56->m_Items[v58] = (int)data;
      }
      if ( DataVals__IsOverChargeState(baseVals, 1, 0) )
        goto LABEL_65;
      v62 = DataVals__IsOverChargeState(baseVals, 2, 0);
      v25 = 0;
      v26 = 0;
      if ( BattlePointPhase )
      {
LABEL_66:
        v27 = 0;
        TargetRarityList = 0;
        v29 = 0;
        buffIndv = 0;
        v31 = 0;
        goto LABEL_85;
      }
      v27 = 0;
      TargetRarityList = 0;
      v29 = 0;
      buffIndv = 0;
      v31 = 0;
      if ( v62 )
        goto LABEL_85;
      DataVals__SetOverCharge(baseVals, 0, 0);
LABEL_65:
      v26 = 0;
      v25 = 0;
      goto LABEL_84;
    default:
      goto LABEL_66;
  }
  v25 = 0;
  v26 = 0;
  v27 = 0;
  TargetRarityList = 0;
  v29 = 0;
  buffIndv = 0;
  v31 = 0;
  switch ( v90 )
  {
    case 0u:
    case 1u:
      v31 = sub_1C32CC8(int___TypeInfo, 1);
      data = (BattleData_o *)DataVals__GetParam(baseVals, 6, 0, 0);
      if ( !v31 )
        goto LABEL_93;
      if ( !*(_DWORD *)(v31 + 24) )
        goto LABEL_94;
      v26 = 0;
      v25 = 0;
      v27 = 0;
      TargetRarityList = 0;
      v29 = 0;
      buffIndv = 0;
      *(_DWORD *)(v31 + 32) = (_DWORD)data;
      goto LABEL_85;
    case 2u:
    case 3u:
    case 5u:
      goto LABEL_85;
    case 4u:
      buffIndv = (System_Int32_array *)sub_1C32CC8(int___TypeInfo, 1);
      data = (BattleData_o *)DataVals__GetParam(baseVals, 6, 0, 0);
      if ( !buffIndv )
        goto LABEL_93;
      if ( !LODWORD(buffIndv->max_length) )
        goto LABEL_94;
      v26 = 0;
      v25 = 0;
      v27 = 0;
      TargetRarityList = 0;
      v29 = 0;
      v31 = 0;
      buffIndv->m_Items[0] = (int)data;
      goto LABEL_85;
    case 6u:
      TargetRarityList = DataVals__GetTargetRarityList(baseVals, 0);
      v26 = 0;
      v25 = 0;
      v29 = 0;
      buffIndv = 0;
      v31 = 0;
      v27 = 1;
      goto LABEL_85;
    case 7u:
      Int2DimensionalArray = DataVals__GetInt2DimensionalArray(baseVals, 56, 0);
      if ( Int2DimensionalArray )
      {
        v25 = (__int64)Int2DimensionalArray;
      }
      else
      {
        v25 = sub_1C32CC8(int_____TypeInfo, 1);
        data = (BattleData_o *)DataVals__GetAndCheckIndividuality(baseVals, 0);
        if ( !v25 )
          goto LABEL_93;
        if ( !*(_DWORD *)(v25 + 24) )
LABEL_94:
          sub_1C32E84(data);
        *(_QWORD *)(v25 + 32) = data;
        sub_1C32BC4((CGThumbnailListItem_o *)(v25 + 32), (int32_t)data, v73, v74);
      }
      v26 = 0;
LABEL_84:
      v27 = 0;
      TargetRarityList = 0;
      v29 = 0;
      buffIndv = 0;
      v31 = 0;
LABEL_85:
      v83 = v29;
      isRarityAtk = v27;
      NPFixedDamageValue = DataVals__GetNPFixedDamageValue(baseVals, 0);
      damageProcessArgs = (BattleLogic_DamageProcessArgs_o *)sub_1C32E6C(BattleLogic_DamageProcessArgs_TypeInfo);
      BattleLogic_DamageProcessArgs___ctor(damageProcessArgs, 0, NPFixedDamageValue, (System_Int32_array_array *)v25, 0);
      logic = this->fields.logic;
      v78 = System_Collections_Generic_List_int___ToArray(
              v20,
              (const MethodInfo_377D250 *)Method_System_Collections_Generic_List_int__ToArray__);
      IsIncludeIgnoreIndividuality = DataVals__IsIncludeIgnoreIndividuality(baseVals, 0);
      data = (BattleData_o *)DataVals__isParam(baseVals, 91, 0);
      if ( !logic )
        goto LABEL_93;
      data = (BattleData_o *)BattleLogic__getFunctionNpDamagelist(
                               logic,
                               v18,
                               target,
                               v78,
                               v87,
                               v88,
                               actiona,
                               (System_Int32_array *)v31,
                               buffIndv,
                               TargetRarityList,
                               IsIncludeIgnoreIndividuality,
                               (unsigned __int8)data & 1,
                               damageProcessArgs,
                               0);
      v80 = (BattleActionData_DamageData_o *)data;
      if ( v90 < 8 && ((0x93u >> v90) & 1) != 0 )
      {
        v81 = 1;
        if ( !data )
          goto LABEL_93;
      }
      else
      {
        v81 = v26 & v83;
        if ( !data )
          goto LABEL_93;
      }
      BattleActionData_DamageData__addAttackSideEffectAction((BattleActionData_DamageData_o *)data, 80, 0);
      if ( !v86 )
        goto LABEL_93;
      BattleActionData__setDamageData(v86, v80, baseVals, v81, isRarityAtk, 0);
      return v86;
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
  void *data; // x0
  struct BattleData_o *v9; // x8
  System_Collections_Generic_List_object__o *player_datalist; // x21
  System_Action_object__o *v11; // x22
  Il2CppObject *v12; // x23
  struct BattleLogicFunction___c_StaticFields *static_fields; // x0
  int32_t v14; // w2
  const MethodInfo *v15; // x3
  struct BattleData_o *v16; // x8
  System_Collections_Generic_List_object__o *v17; // x21
  System_Comparison_T__o *v18; // x22
  Il2CppObject *v19; // x23
  struct BattleLogicFunction___c_StaticFields *v20; // x0
  int32_t v21; // w2
  const MethodInfo *v22; // x3
  struct BattleData_o *v23; // x8
  int v24; // w8
  unsigned int *v25; // x21
  int32_t v26; // w23
  BattleServantData_o *v27; // x22
  struct BattleData_o *v28; // x8
  unsigned __int64 v29; // x24
  struct System_Int32_array *p_entryid; // x9
  unsigned __int64 max_length_low; // x10
  unsigned __int64 v32; // x9
  __int64 v33; // x22
  struct System_Int32_array *v34; // x9
  BattleLogicTask_o *v35; // x21

  if ( (byte_4C3A99C & 1) == 0 )
  {
    sub_1C32C20(&System_Action_BattleServantData__TypeInfo);
    sub_1C32C20(&BattleActionData_TypeInfo);
    sub_1C32C20(&BattleLogicTask_TypeInfo);
    sub_1C32C20(&System_Comparison_BattleServantData__TypeInfo);
    sub_1C32C20(&Method_System_Collections_Generic_List_BattleServantData__ForEach__);
    sub_1C32C20(&Method_System_Collections_Generic_List_BattleServantData__Sort__);
    sub_1C32C20(&Method_System_Collections_Generic_List_BattleServantData__ToArray__);
    sub_1C32C20(&Method_BattleLogicFunction___c__functionPtShuffle_b__98_0__);
    sub_1C32C20(&Method_BattleLogicFunction___c__functionPtShuffle_b__98_1__);
    sub_1C32C20(&BattleLogicFunction___c_TypeInfo);
    byte_4C3A99C = 1;
  }
  v7 = (BattleActionData_o *)sub_1C32E6C(BattleActionData_TypeInfo);
  BattleActionData___ctor(v7, 0);
  data = this->fields.data;
  if ( !data )
    goto LABEL_53;
  BattleData__SubBuffFromPT_45600156((BattleData_o *)data, 0, 0);
  data = this->fields.data;
  if ( !data )
    goto LABEL_53;
  BattleData__SubBuffExitSvt((BattleData_o *)data, 0, 0);
  v9 = this->fields.data;
  if ( !v9 )
    goto LABEL_53;
  player_datalist = (System_Collections_Generic_List_object__o *)v9->fields.player_datalist;
  data = BattleLogicFunction___c_TypeInfo;
  if ( !BattleLogicFunction___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BattleLogicFunction___c_TypeInfo);
    data = BattleLogicFunction___c_TypeInfo;
  }
  v11 = *(System_Action_object__o **)(*((_QWORD *)data + 23) + 80LL);
  if ( !v11 )
  {
    if ( !*((_DWORD *)data + 56) )
    {
      j_il2cpp_runtime_class_init_0(data);
      data = BattleLogicFunction___c_TypeInfo;
    }
    v12 = (Il2CppObject *)**((_QWORD **)data + 23);
    v11 = (System_Action_object__o *)sub_1C32E6C(System_Action_BattleServantData__TypeInfo);
    System_Action_object____ctor(v11, v12, Method_BattleLogicFunction___c__functionPtShuffle_b__98_0__, 0);
    static_fields = BattleLogicFunction___c_TypeInfo->static_fields;
    static_fields->__9__98_0 = (struct System_Action_BattleServantData__o *)v11;
    sub_1C32BC4((CGThumbnailListItem_o *)&static_fields->__9__98_0, (int32_t)v11, v14, v15);
  }
  if ( !player_datalist )
    goto LABEL_53;
  System_Collections_Generic_List_object___ForEach(
    player_datalist,
    (System_Action_T__o *)v11,
    (const MethodInfo_37991FC *)Method_System_Collections_Generic_List_BattleServantData__ForEach__);
  v16 = this->fields.data;
  if ( !v16 )
    goto LABEL_53;
  data = BattleLogicFunction___c_TypeInfo;
  v17 = (System_Collections_Generic_List_object__o *)v16->fields.player_datalist;
  if ( !BattleLogicFunction___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BattleLogicFunction___c_TypeInfo);
    data = BattleLogicFunction___c_TypeInfo;
  }
  v18 = *(System_Comparison_T__o **)(*((_QWORD *)data + 23) + 88LL);
  if ( !v18 )
  {
    if ( !*((_DWORD *)data + 56) )
    {
      j_il2cpp_runtime_class_init_0(data);
      data = BattleLogicFunction___c_TypeInfo;
    }
    v19 = (Il2CppObject *)**((_QWORD **)data + 23);
    v18 = (System_Comparison_T__o *)sub_1C32E6C(System_Comparison_BattleServantData__TypeInfo);
    System_Comparison_object____ctor(v18, v19, Method_BattleLogicFunction___c__functionPtShuffle_b__98_1__, 0);
    v20 = BattleLogicFunction___c_TypeInfo->static_fields;
    v20->__9__98_1 = (struct System_Comparison_BattleServantData__o *)v18;
    sub_1C32BC4((CGThumbnailListItem_o *)&v20->__9__98_1, (int32_t)v18, v21, v22);
  }
  if ( !v17 )
    goto LABEL_53;
  System_Collections_Generic_List_object___Sort_58303104(
    v17,
    v18,
    (const MethodInfo_379A280 *)Method_System_Collections_Generic_List_BattleServantData__Sort__);
  v23 = this->fields.data;
  if ( !v23 )
    goto LABEL_53;
  data = v23->fields.player_datalist;
  if ( !data )
    goto LABEL_53;
  data = System_Collections_Generic_List_object___ToArray(
           (System_Collections_Generic_List_object__o *)data,
           (const MethodInfo_379A314 *)Method_System_Collections_Generic_List_BattleServantData__ToArray__);
  if ( !data )
    goto LABEL_53;
  v24 = *((_DWORD *)data + 6);
  v25 = (unsigned int *)data;
  if ( v24 >= 1 )
  {
    v26 = 0;
    while ( 1 )
    {
      if ( v26 >= (unsigned int)v24 )
LABEL_54:
        sub_1C32E84(data);
      v27 = *(BattleServantData_o **)&v25[2 * v26 + 8];
      if ( !v27 )
        break;
      if ( v27->fields.isEntry )
      {
        data = (void *)BattleServantData__isAlive(v27, 0, 0);
        if ( ((unsigned __int8)data & 1) != 0 )
          v27->fields.isEntry = 0;
      }
      v27->fields.deckIndex = v26;
      v24 = v25[6];
      if ( ++v26 >= v24 )
        goto LABEL_32;
    }
LABEL_53:
    sub_1C32E7C(data);
  }
LABEL_32:
  v28 = this->fields.data;
  if ( !v28 )
    goto LABEL_53;
  v29 = 0;
  while ( 1 )
  {
    p_entryid = v28->fields.p_entryid;
    if ( !p_entryid )
      goto LABEL_53;
    max_length_low = LODWORD(p_entryid->max_length);
    if ( (__int64)v29 >= (int)max_length_low )
      break;
    if ( v29 >= max_length_low )
      goto LABEL_54;
    p_entryid->m_Items[v29] = -1;
    v32 = v25[6];
    if ( (__int64)v29 < (int)v32 )
    {
      if ( v29 >= v32 )
        goto LABEL_54;
      v33 = *(_QWORD *)&v25[2 * v29 + 8];
      if ( !v33 )
        goto LABEL_53;
      data = (void *)BattleServantData__isAlive(*(BattleServantData_o **)&v25[2 * v29 + 8], 0, 0);
      v28 = this->fields.data;
      if ( ((unsigned __int8)data & 1) != 0 )
      {
        if ( !v28 )
          goto LABEL_53;
        v34 = v28->fields.p_entryid;
        if ( !v34 )
          goto LABEL_53;
        if ( v29 >= LODWORD(v34->max_length) )
          goto LABEL_54;
        v34->m_Items[v29] = *(_DWORD *)(v33 + 24);
        *(_BYTE *)(v33 + 504) = 1;
        *(_BYTE *)(v33 + 565) = 1;
      }
    }
    ++v29;
    if ( !v28 )
      goto LABEL_53;
  }
  BattleData__createCommandCard(v28, 0);
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
  v35 = (BattleLogicTask_o *)sub_1C32E6C(BattleLogicTask_TypeInfo);
  BattleLogicTask___ctor(v35, 0);
  if ( !v35 )
    goto LABEL_53;
  BattleLogicTask__setCheckEntryFunction(v35, 0);
  data = this->fields.logic;
  if ( !data )
    goto LABEL_53;
  BattleLogic__AddBattleLogicTask((BattleLogic_o *)data, v35, 0);
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
  __int64 data; // x0
  BattleServantData_o *v13; // x25
  BattleServantData_o *ServantData; // x24
  __int64 v15; // x26
  __int64 v16; // x8
  double v17; // d0
  int32_t v18; // w27
  int v19; // w29
  __int64 v21; // x0
  int32_t v22; // w2
  const MethodInfo *v23; // x3
  __int64 v24; // x0
  int32_t v25; // w2
  const MethodInfo *v26; // x3
  int32_t v27; // w2
  const MethodInfo *v28; // x3
  __int64 v29; // x0
  int32_t v30; // w2
  const MethodInfo *v31; // x3
  __int64 v32; // x0
  int32_t v33; // w2
  const MethodInfo *v34; // x3
  __int64 v35; // x0
  int32_t v36; // w2
  const MethodInfo *v37; // x3
  struct BattleData_o *v38; // x8
  int32_t uniqueId; // w21
  int32_t v40; // w22
  bool IsOpponentPTUniqueID; // w0

  if ( (byte_4C3A99A & 1) == 0 )
  {
    sub_1C32C20(&BattleActionData_TypeInfo);
    sub_1C32C20(&BattleActionData_DamageData_TypeInfo);
    sub_1C32C20(&int___TypeInfo);
    sub_1C32C20(&BattleBuffData_ShowBuffData___TypeInfo);
    byte_4C3A99A = 1;
  }
  v11 = (BattleActionData_o *)sub_1C32E6C(BattleActionData_TypeInfo);
  BattleActionData___ctor(v11, 0);
  data = (__int64)this->fields.data;
  if ( !data )
    goto LABEL_28;
  data = (__int64)BattleData__getServantData((BattleData_o *)data, playerId, 0);
  if ( !this->fields.data )
    goto LABEL_28;
  v13 = (BattleServantData_o *)data;
  ServantData = BattleData__getServantData(this->fields.data, targetId, 0);
  v15 = sub_1C32E6C(BattleActionData_DamageData_TypeInfo);
  BattleActionData_DamageData___ctor((BattleActionData_DamageData_o *)v15, 0);
  if ( !v13 )
    goto LABEL_28;
  data = BattleServantData__getAccumulationDamage(v13, 0);
  if ( !baseVals )
    goto LABEL_28;
  v16 = DataVals__GetValue(baseVals, 0) * (__int64)(int)data;
  data = (__int64)this->fields.data;
  v17 = (double)v16 / 1000.0;
  v18 = v17 == INFINITY ? 0x80000000 : (int)v17;
  if ( !data )
    goto LABEL_28;
  data = BattleData__IsDeadOkTurn((BattleData_o *)data, targetId, 0);
  if ( (data & 1) == 0 )
  {
    if ( !ServantData )
      goto LABEL_28;
    v19 = ((__int64 (__fastcall *)(BattleServantData_o *, const MethodInfo *))ServantData->klass->vtable._9_get_hp.methodPtr)(
            ServantData,
            ServantData->klass->vtable._9_get_hp.method);
    data = ((__int64 (__fastcall *)(BattleServantData_o *, const MethodInfo *))ServantData->klass->vtable._11_get_reducedhp.methodPtr)(
             ServantData,
             ServantData->klass->vtable._11_get_reducedhp.method);
    if ( v19 - (int)data < v18 && v19 - (int)data > 0 )
      v18 = v19 - data - 1;
  }
  if ( !v15 )
    goto LABEL_28;
  *(_DWORD *)(v15 + 28) = targetId;
  *(_DWORD *)(v15 + 16) = funcIndex;
  *(_WORD *)(v15 + 32) = 0;
  *(_BYTE *)(v15 + 34) = 0;
  *(_DWORD *)(v15 + 36) = 0;
  *(_BYTE *)(v15 + 40) = 0;
  v21 = sub_1C32CC8(BattleBuffData_ShowBuffData___TypeInfo, 0);
  *(_QWORD *)(v15 + 64) = v21;
  sub_1C32BC4((CGThumbnailListItem_o *)(v15 + 64), v21, v22, v23);
  v24 = sub_1C32CC8(BattleBuffData_ShowBuffData___TypeInfo, 0);
  *(_QWORD *)(v15 + 72) = v24;
  sub_1C32BC4((CGThumbnailListItem_o *)(v15 + 72), v24, v25, v26);
  data = sub_1C32CC8(int___TypeInfo, 1);
  if ( !data )
    goto LABEL_28;
  if ( !*(_DWORD *)(data + 24) )
    sub_1C32E84(data);
  *(_DWORD *)(data + 32) = v18;
  *(_QWORD *)(v15 + 96) = data;
  sub_1C32BC4((CGThumbnailListItem_o *)(v15 + 96), data, v27, v28);
  BattleServantData__CacheDealtDamage(v13, (BattleActionData_DamageData_o *)v15, 0);
  v29 = sub_1C32CC8(int___TypeInfo, 0);
  *(_QWORD *)(v15 + 104) = v29;
  sub_1C32BC4((CGThumbnailListItem_o *)(v15 + 104), v29, v30, v31);
  v32 = sub_1C32CC8(int___TypeInfo, 0);
  *(_QWORD *)(v15 + 112) = v32;
  sub_1C32BC4((CGThumbnailListItem_o *)(v15 + 112), v32, v33, v34);
  v35 = sub_1C32CC8(int___TypeInfo, 0);
  *(_QWORD *)(v15 + 120) = v35;
  sub_1C32BC4((CGThumbnailListItem_o *)(v15 + 120), v35, v36, v37);
  if ( !ServantData )
    goto LABEL_28;
  BattleServantData__provisionalDamage(ServantData, v18, 0);
  BattleServantData__ResultDamage(ServantData, v18, v13, 0, 0, 0, 0);
  data = BattleServantData__isLogicResultAlive(ServantData, 0);
  if ( (data & 1) == 0 )
  {
    v38 = this->fields.data;
    if ( !v38 )
      goto LABEL_28;
    ServantData->fields.deadTurn = v38->fields.typeTurn;
  }
  BattleActionData_DamageData__addAttackSideEffectAction((BattleActionData_DamageData_o *)v15, 80, 0);
  if ( !v11
    || (BattleActionData__SetFuncDamageData(v11, (BattleActionData_DamageData_o *)v15, baseVals, 0),
        (data = (__int64)this->fields.data) == 0) )
  {
LABEL_28:
    sub_1C32E7C(data);
  }
  uniqueId = v13->fields.uniqueId;
  v40 = *(_DWORD *)(data + 196);
  IsOpponentPTUniqueID = BattleData__IsOpponentPTUniqueID((BattleData_o *)data, targetId, playerId, 0);
  BattleServantData__setActionHistory(ServantData, uniqueId, 6, v40, IsOpponentPTUniqueID, 0);
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
  System_Func_object__bool__o *_9__90_0; // x22
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

  if ( (byte_4C3A994 & 1) == 0 )
  {
    sub_1C32C20(&BattleActionData_TypeInfo);
    sub_1C32C20(&Method_System_Linq_Enumerable_Count_BattleServantData____78100184);
    sub_1C32C20(&System_Func_BattleServantData__bool__TypeInfo);
    sub_1C32C20(&Method_BattleLogicFunction___c__functionReplaceEnemyMember_b__90_0__);
    sub_1C32C20(&BattleLogicFunction___c_TypeInfo);
    byte_4C3A994 = 1;
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
  _9__90_0 = (System_Func_object__bool__o *)v12->static_fields->__9__90_0;
  if ( !_9__90_0 )
  {
    if ( !v12->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v12);
      v12 = BattleLogicFunction___c_TypeInfo;
    }
    v14 = (Il2CppObject *)v12->static_fields->__9;
    _9__90_0 = (System_Func_object__bool__o *)sub_1C32E6C(System_Func_BattleServantData__bool__TypeInfo);
    System_Func_object__bool____ctor(
      _9__90_0,
      v14,
      Method_BattleLogicFunction___c__functionReplaceEnemyMember_b__90_0__,
      0);
    static_fields = BattleLogicFunction___c_TypeInfo->static_fields;
    static_fields->__9__90_0 = (struct System_Func_BattleServantData__bool__o *)_9__90_0;
    sub_1C32BC4((CGThumbnailListItem_o *)&static_fields->__9__90_0, (int32_t)_9__90_0, v16, v17);
  }
  data = (BattleData_o *)System_Linq_Enumerable__Count_object__51376204(
                           enemy_datalist,
                           (System_Func_TSource__bool__o *)_9__90_0,
                           (const MethodInfo_30FF04C *)Method_System_Linq_Enumerable_Count_BattleServantData____78100184);
  if ( (int)data < 4 )
    return 0;
  if ( !v10 )
    goto LABEL_61;
  if ( !v10->fields.m_CancellationTokenSource )
    return 0;
  v18 = (BattleActionData_o *)sub_1C32E6C(BattleActionData_TypeInfo);
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
      goto LABEL_64;
    data = (BattleData_o *)BattleData__getEnemyServantData(this->fields.data, v27->m_Items[v24], 0);
    if ( !data )
      goto LABEL_61;
    EnemyServantData = (BattleServantData_o *)data;
    data = (BattleData_o *)BattleServantData__isDead((BattleServantData_o *)data, 0);
    if ( ((unsigned __int8)data & 1) != 0 )
    {
      if ( !LODWORD(v10->fields.m_CancellationTokenSource) )
        goto LABEL_64;
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
                  goto LABEL_64;
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
                return v18;
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
LABEL_64:
        sub_1C32E84(data);
      }
    }
LABEL_61:
    sub_1C32E7C(data);
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
  BattleData_o *data; // x0
  BattleServantData_o *v13; // x22
  BattleServantData_o *v14; // x23
  int32_t v15; // w24
  struct BattleData_o *v16; // x8
  struct System_Int32_array *p_entryid; // x9
  il2cpp_array_size_t max_length; // x11
  int32_t v19; // w25
  int32_t uniqueId; // w10
  __int64 v21; // x8
  __int64 v22; // x11
  int32_t *m_Items; // x9
  struct System_Int32_array *v24; // x8
  unsigned __int64 max_length_low; // x10
  unsigned __int64 v26; // x9
  int32_t *v27; // x12

  if ( (byte_4C3A993 & 1) == 0 )
  {
    sub_1C32C20(&BattleActionData_TypeInfo);
    byte_4C3A993 = 1;
  }
  v11 = (BattleActionData_o *)sub_1C32E6C(BattleActionData_TypeInfo);
  BattleActionData___ctor(v11, 0);
  data = this->fields.data;
  if ( !data )
    goto LABEL_27;
  data = (BattleData_o *)BattleData__getServantData(data, targetId, 0);
  if ( !this->fields.data )
    goto LABEL_27;
  v13 = (BattleServantData_o *)data;
  data = (BattleData_o *)BattleData__getServantData(this->fields.data, subTargetId, 0);
  if ( !v13 )
    goto LABEL_27;
  v14 = (BattleServantData_o *)data;
  data = (BattleData_o *)BattleServantData__getDeckIndex(v13, 0);
  if ( !v14 )
    goto LABEL_27;
  v15 = (int)data;
  data = (BattleData_o *)BattleServantData__getDeckIndex(v14, 0);
  v16 = this->fields.data;
  if ( !v16 )
    goto LABEL_27;
  p_entryid = v16->fields.p_entryid;
  if ( !p_entryid )
    goto LABEL_27;
  max_length = p_entryid->max_length;
  v19 = (int)data;
  if ( v15 >= (int)max_length )
    goto LABEL_35;
  if ( v15 >= (unsigned int)max_length )
LABEL_32:
    sub_1C32E84(data);
  if ( p_entryid->m_Items[v15] == v13->fields.uniqueId )
  {
    v13->fields.deckIndex = (int)data;
    v14->fields.deckIndex = v15;
  }
  else
  {
LABEL_35:
    if ( (int)max_length >= 1 )
    {
      uniqueId = v13->fields.uniqueId;
      v21 = 0;
      v22 = (unsigned int)p_entryid->max_length;
      m_Items = p_entryid->m_Items;
      do
      {
        if ( m_Items[v21] == uniqueId )
          v13->fields.deckIndex = v21;
        ++v21;
      }
      while ( v22 != v21 );
    }
    data = (BattleData_o *)BattleServantData__getDeckIndex(v13, 0);
    v16 = this->fields.data;
    v13->fields.deckIndex = v19;
    v14->fields.deckIndex = (int)data;
    if ( !v16 )
      goto LABEL_27;
    v15 = (int)data;
  }
  v24 = v16->fields.p_entryid;
  if ( !v24 )
    goto LABEL_27;
  max_length_low = LODWORD(v24->max_length);
  v26 = 0;
  v27 = v24->m_Items;
  while ( (__int64)v26 < (int)max_length_low )
  {
    if ( v26 >= max_length_low )
      goto LABEL_32;
    if ( v27[v26] == v13->fields.uniqueId )
      v27[v26] = v14->fields.uniqueId;
    ++v26;
  }
  if ( !v11
    || (BattleActionData__setReplaceMember(v11, v15, v14->fields.uniqueId, v13->fields.uniqueId, funcIndex, 0),
        v11->fields.redrawCommandCard = 1,
        (data = this->fields.data) == 0)
    || (BattleData__SubBuffFromPT_45600156(data, v14, 0), (data = this->fields.data) == 0) )
  {
LABEL_27:
    sub_1C32E7C(data);
  }
  BattleData__SubBuffExitSvt(data, v13, 0);
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
  BattleData_o *data; // x0

  if ( (byte_4C3A992 & 1) == 0 )
  {
    sub_1C32C20(&BattleActionData_TypeInfo);
    byte_4C3A992 = 1;
  }
  v7 = (BattleActionData_o *)sub_1C32E6C(BattleActionData_TypeInfo);
  BattleActionData___ctor(v7, 0);
  data = this->fields.data;
  if ( !data
    || (BattleData__SubBuffFromPT_45600156(data, 0, 0), (data = this->fields.data) == 0)
    || (BattleData__shuffleCommand(data, 0), (data = (BattleData_o *)this->fields.logic) == 0)
    || (BattleLogic__drawCommand((BattleLogic_o *)data, 0), (data = (BattleData_o *)this->fields.logic) == 0)
    || (BattleLogic__setDrawCard((BattleLogic_o *)data, 0), !v7) )
  {
    sub_1C32E7C(data);
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
  BattleData_o *data; // x0
  BattleServantData_o *v15; // x22
  const MethodInfo *v16; // x7
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

  if ( (byte_4C3A9A0 & 1) == 0 )
  {
    sub_1C32C20(&BattleActionData_TypeInfo);
    sub_1C32C20(&BattleActionData_BuffData_TypeInfo);
    byte_4C3A9A0 = 1;
  }
  v13 = (BattleActionData_o *)sub_1C32E6C(BattleActionData_TypeInfo);
  BattleActionData___ctor(v13, 0);
  data = this->fields.data;
  if ( !data )
    goto LABEL_22;
  data = (BattleData_o *)BattleData__getServantData(data, targetId, 0);
  if ( !data )
    goto LABEL_22;
  v15 = (BattleServantData_o *)data;
  data = (BattleData_o *)((__int64 (__fastcall *)(BattleData_o *, _QWORD))data->klass[1]._1.this_arg.data)(
                           data,
                           *(_QWORD *)&data->klass[1]._1.this_arg.bits);
  if ( (int)data >= 1 )
    return BattleLogicFunction__getNoEffectObject(this, targetId, funcIdx, dataVals, isSideEffect, 0, 0, v16);
  if ( !dataVals )
    goto LABEL_22;
  maxhp = v15->fields.maxhp;
  if ( DataVals__GetValue2(dataVals, 0) < 1 )
    Value = DataVals__GetValue(dataVals, 0);
  else
    Value = DataVals__GetValue2(dataVals, 0) * maxhp / 1000;
  if ( Value <= 1 )
    v20 = 1;
  else
    v20 = Value;
  BattleServantData__setHp(v15, v20, 1, 0, 0);
  v15->fields.status = 0;
  data = (BattleData_o *)BattleServantData__isDeadEscape(v15, 0);
  if ( ((unsigned __int8)data & 1) != 0 )
  {
    v21 = this->fields.data;
    if ( !v21 )
      goto LABEL_22;
    if ( v21->fields.endbattleFlg )
      v15->fields.isSystemDead = 1;
  }
  v22 = sub_1C32E6C(BattleActionData_BuffData_TypeInfo);
  BattleActionData_BuffData___ctor((BattleActionData_BuffData_o *)v22, 0);
  if ( !v22 )
    goto LABEL_22;
  uniqueId = v15->fields.uniqueId;
  *(_DWORD *)(v22 + 16) = 0;
  *(_QWORD *)(v22 + 40) = uniqueId;
  if ( !funcEnt )
    goto LABEL_22;
  popupText = funcEnt->fields.popupText;
  *(_QWORD *)(v22 + 56) = popupText;
  sub_1C32BC4((CGThumbnailListItem_o *)(v22 + 56), (int32_t)popupText, v23, v24);
  *(_QWORD *)(v22 + 64) = *(_QWORD *)&funcEnt->fields.popupIconId;
  effectList = funcEnt->fields.effectList;
  *(_QWORD *)(v22 + 72) = effectList;
  sub_1C32BC4((CGThumbnailListItem_o *)(v22 + 72), (int32_t)effectList, v28, v29);
  *(_DWORD *)(v22 + 28) = 2;
  if ( !v13 )
LABEL_22:
    sub_1C32E7C(data);
  BattleActionData__setBuffData(v13, (BattleActionData_BuffData_o *)v22, 0, 0);
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
  if ( (byte_4C3A9A9 & 1) == 0 )
  {
    sub_1C32C20(&BattleActionData_TypeInfo);
    sub_1C32C20(&BattleActorControl_TypeInfo);
    this = (BattleLogicFunction_o *)sub_1C32C20(&BattleActionData_SkillShiftServant_TypeInfo);
    byte_4C3A9A9 = 1;
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
  v11 = sub_1C32E6C(BattleActionData_TypeInfo);
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
  sub_1C32BC4((CGThumbnailListItem_o *)(v11 + 72), v15, v12, v13);
  *(_BYTE *)(v11 + 252) = isOverwriteShift;
  *(_BYTE *)(v11 + 253) = DataVals__GetParam(baseVals, 233, 0, 0) == 1;
  BattleActionData__setStateMotion((BattleActionData_o *)v11, 0);
  data = v8->fields.data;
  v17 = (BattleActionData_SkillShiftServant_o *)sub_1C32E6C(BattleActionData_SkillShiftServant_TypeInfo);
  BattleActionData_SkillShiftServant___ctor(v17, data, Param, 0);
  if ( !v17 )
LABEL_13:
    sub_1C32E7C(this);
  BattleActionData_ShiftServant__setBeforeSvtData((BattleActionData_ShiftServant_o *)v17, targetData, 0);
  if ( actionData->fields.isOverwriteShift )
    BattleActionData_ShiftServant__SetBeforeWeapon((BattleActionData_ShiftServant_o *)v17, targetData, 0);
  BattleActionData__setShiftServant((BattleActionData_o *)v11, (BattleActionData_ShiftServant_o *)v17, 0);
  BattleActionData__setShiftServant(actionData, (BattleActionData_ShiftServant_o *)v17, 0);
  BattleActionData__AddAfterActionData(actionData, (BattleActionData_o *)v11, 1, 0);
}


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
  int32_t Value2; // w22
  RemovedBuffInfo_o *v22; // x0
  int32_t v23; // w2
  const MethodInfo *v24; // x3
  const MethodInfo *v25; // x7
  struct System_Collections_Generic_List_BattleBuffData_BuffData__o *RemovedAllBuffList_k__BackingField; // x25
  BattleActionData_o *v27; // x22
  const MethodInfo *v29; // [xsp+8h] [xbp-78h]
  BattleLogicFunction_ProcListInArgs_o *v30; // [xsp+18h] [xbp-68h]

  if ( (byte_4C3A986 & 1) == 0 )
  {
    sub_1C32C20(&BattleActionData_TypeInfo);
    sub_1C32C20(&BattleServantSnapShotOnBuffUpdate_TypeInfo);
    sub_1C32C20(&Method_System_Collections_Generic_List_BattleBuffData_BuffData__get_Count__);
    byte_4C3A986 = 1;
  }
  data = this->fields.data;
  if ( !data )
    goto LABEL_12;
  ServantData = BattleData__getServantData(data, targetId, 0);
  v18 = (BattleServantSnapShotOnBuffUpdate_o *)sub_1C32E6C(BattleServantSnapShotOnBuffUpdate_TypeInfo);
  BattleServantSnapShotOnBuffUpdate___ctor(v18, ServantData, 0);
  if ( !funcEnt )
    goto LABEL_12;
  if ( !baseVals )
    goto LABEL_12;
  vals = funcEnt->fields.vals;
  Value = DataVals__GetValue(baseVals, 0);
  Value2 = DataVals__GetValue2(baseVals, 0);
  data = (BattleData_o *)DataVals__isParam(baseVals, 90, 0);
  if ( !ServantData
    || (v22 = BattleServantData__subBuffFromIndividualites(
                ServantData,
                vals,
                Value,
                Value2,
                1,
                (unsigned __int8)data & 1,
                0),
        *subBuffInfo = v22,
        sub_1C32BC4((CGThumbnailListItem_o *)subBuffInfo, (int32_t)v22, v23, v24),
        !*subBuffInfo)
    || (RemovedAllBuffList_k__BackingField = (*subBuffInfo)->fields._RemovedAllBuffList_k__BackingField) == 0 )
  {
LABEL_12:
    sub_1C32E7C(data);
  }
  if ( RemovedAllBuffList_k__BackingField->fields._size < 1 )
    return BattleLogicFunction__getNoEffectObject(this, targetId, index, baseVals, isCommandSideEffect, 0, 0, v25);
  v27 = (BattleActionData_o *)sub_1C32E6C(BattleActionData_TypeInfo);
  BattleActionData___ctor(v27, 0);
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


BattleActionData_o *BattleLogicFunction__functionTransformServant(
        BattleLogicFunction_o *this,
        int32_t targetId,
        FunctionEntity_o *funcEnt,
        DataVals_o *baeVals,
        int32_t funcIndex,
        BattleLogicFunction_ProcListInArgs_o *procArgs,
        const MethodInfo *method)
{
  BattleLogicFunction___c__DisplayClass92_0_o *v11; // x19
  BattleData_o *data; // x0
  BattleActionData_o *v13; // x20
  BattleServantData_o *v14; // x22
  int32_t Param; // w26
  int32_t v16; // w28
  __int64 v17; // x27
  BattleServantData_array *FieldAliveLogicServantArray; // x0
  BattleLogicFunction___c_c *v19; // x8
  BattleServantData_array *v20; // x25
  System_Func_object__object__o *_9__92_0; // x20
  Il2CppObject *v22; // x29
  struct BattleLogicFunction___c_StaticFields *static_fields; // x0
  int32_t v24; // w2
  const MethodInfo *v25; // x3
  BattleLogicFunctionUtilities_FunctionProgressCache_o *v26; // x29
  BattleLogicFunctionUtilities_FunctionProgressCache_SvtCache_o *ElemByUniqueId; // x19
  BattleLogicSkill_SkillExecArgs_o *v28; // x20
  struct BattleServantSnapShot_o *Before_k__BackingField; // x8
  struct BattleServantSnapShot_o *After_k__BackingField; // x1
  int32_t v31; // w2
  const MethodInfo *v32; // x3
  struct BattleServantSnapShot_o *v33; // x8
  __int64 naturalAligment; // x11
  BattleServantSnapShotShiftServant_o *v35; // x1
  struct BattleLogicFunctionUtilities_FunctionProgressCache_SvtCache_array *SvtCacheArray_k__BackingField; // x19
  int max_length; // w8
  BattleActionData_o *v38; // x27
  unsigned int v39; // w23
  BattleLogicFunctionUtilities_FunctionProgressCache_SvtCache_o *v40; // x22
  struct BattleServantData_o *SvtData_k__BackingField; // x8
  int32_t uniqueId; // w20
  BattleActionData_BuffData_o *v43; // x26
  BattleServantSnapShot_o *v44; // x27
  BattleServantSnapShot_o *v45; // x28
  BattleActionEffect_AddSubChangeMaxHpBuff_o *v46; // x29
  struct BattleServantData_o *v47; // x8
  System_Collections_Generic_IEnumerable_TSource__o *buffdatalist; // x20
  System_Func_object__bool__o *v49; // x21
  struct BattleServantSnapShot_o *v50; // x8
  int32_t nexttpturn; // w1
  struct BattleData_o *v52; // x8
  BattleLogicFunctionUtilities_FunctionProgressCache_SvtCache_o *v54; // [xsp+8h] [xbp-98h]
  BattleServantData_o *v55; // [xsp+10h] [xbp-90h]
  BattleLogicFunction_o *v56; // [xsp+18h] [xbp-88h]
  BattleLogicFunction___c__DisplayClass92_0_o *v57; // [xsp+28h] [xbp-78h]
  BattleActionData_o *v58; // [xsp+30h] [xbp-70h]

  if ( (byte_4C3A996 & 1) == 0 )
  {
    sub_1C32C20(&BattleActionEffect_AddSubChangeMaxHpBuff_TypeInfo);
    sub_1C32C20(&BattleActionData_TypeInfo);
    sub_1C32C20(&BattleServantSnapShotShiftServant_TypeInfo);
    sub_1C32C20(&BattleActionData_BuffData_TypeInfo);
    sub_1C32C20(&Method_System_Linq_Enumerable_FirstOrDefault_BattleActionData_BuffData___);
    sub_1C32C20(&System_Func_BattleServantData__BattleServantSnapShot__TypeInfo);
    sub_1C32C20(&System_Func_BattleActionData_BuffData__bool__TypeInfo);
    sub_1C32C20(&BattleLogicFunctionUtilities_FunctionProgressCache_TypeInfo);
    sub_1C32C20(&BattleActionData_ShiftServant_TypeInfo);
    sub_1C32C20(&BattleLogicSkill_SkillExecArgs_TypeInfo);
    sub_1C32C20(&Method_BattleLogicFunction___c__functionTransformServant_b__92_0__);
    sub_1C32C20(&Method_BattleLogicFunction___c__DisplayClass92_0__functionTransformServant_b__1__);
    sub_1C32C20(&BattleLogicFunction___c__DisplayClass92_0_TypeInfo);
    sub_1C32C20(&BattleLogicFunction___c_TypeInfo);
    byte_4C3A996 = 1;
  }
  v11 = (BattleLogicFunction___c__DisplayClass92_0_o *)sub_1C32E6C(BattleLogicFunction___c__DisplayClass92_0_TypeInfo);
  BattleLogicFunction___c__DisplayClass92_0___ctor(v11, 0);
  if ( !v11 )
    goto LABEL_49;
  v11->fields.targetId = targetId;
  v13 = (BattleActionData_o *)sub_1C32E6C(BattleActionData_TypeInfo);
  BattleActionData___ctor(v13, 0);
  data = this->fields.data;
  if ( !data )
    goto LABEL_49;
  data = (BattleData_o *)BattleData__getServantData(data, v11->fields.targetId, 0);
  if ( !baeVals )
    goto LABEL_49;
  v14 = (BattleServantData_o *)data;
  Param = DataVals__GetParam(baeVals, 6, 0, 0);
  v16 = DataVals__GetParam(baeVals, 77, 0, 0);
  data = (BattleData_o *)DataVals__IsCancelTransform(baeVals, 0);
  if ( ((unsigned __int8)data & 1) != 0 )
  {
    if ( !v14 )
      goto LABEL_49;
    if ( BattleServantData__get_isTransformed(v14, 0) )
      Param = -1;
  }
  v57 = v11;
  v17 = sub_1C32E6C(BattleActionData_ShiftServant_TypeInfo);
  BattleActionData_ShiftServant___ctor((BattleActionData_ShiftServant_o *)v17, funcIndex, 0);
  if ( !v17 )
    goto LABEL_49;
  BattleActionData_ShiftServant__setBeforeSvtData((BattleActionData_ShiftServant_o *)v17, v14, 0);
  if ( !v13 )
    goto LABEL_49;
  BattleActionData__setShiftServant(v13, (BattleActionData_ShiftServant_o *)v17, 0);
  if ( !v14 )
    goto LABEL_49;
  v14->fields.shiftNpcId = -1;
  v14->fields.beforeUserSvtId = -1;
  data = this->fields.data;
  if ( !data )
    goto LABEL_49;
  FieldAliveLogicServantArray = BattleData__GetFieldAliveLogicServantArray(data, 3, 0, 0);
  v19 = BattleLogicFunction___c_TypeInfo;
  v20 = FieldAliveLogicServantArray;
  if ( !BattleLogicFunction___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BattleLogicFunction___c_TypeInfo);
    v19 = BattleLogicFunction___c_TypeInfo;
  }
  v58 = v13;
  _9__92_0 = (System_Func_object__object__o *)v19->static_fields->__9__92_0;
  if ( !_9__92_0 )
  {
    if ( !v19->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v19);
      v19 = BattleLogicFunction___c_TypeInfo;
    }
    v22 = (Il2CppObject *)v19->static_fields->__9;
    _9__92_0 = (System_Func_object__object__o *)sub_1C32E6C(System_Func_BattleServantData__BattleServantSnapShot__TypeInfo);
    System_Func_object__object____ctor(
      _9__92_0,
      v22,
      Method_BattleLogicFunction___c__functionTransformServant_b__92_0__,
      0);
    static_fields = BattleLogicFunction___c_TypeInfo->static_fields;
    static_fields->__9__92_0 = (struct System_Func_BattleServantData__BattleServantSnapShot__o *)_9__92_0;
    sub_1C32BC4((CGThumbnailListItem_o *)&static_fields->__9__92_0, (int32_t)_9__92_0, v24, v25);
  }
  v26 = (BattleLogicFunctionUtilities_FunctionProgressCache_o *)sub_1C32E6C(BattleLogicFunctionUtilities_FunctionProgressCache_TypeInfo);
  BattleLogicFunctionUtilities_FunctionProgressCache___ctor(
    v26,
    v20,
    (System_Func_BattleServantData__BattleServantSnapShot__o *)_9__92_0,
    0);
  if ( !v26 )
    goto LABEL_49;
  BattleLogicFunctionUtilities_FunctionProgressCache__MakeBeforeSvtCache(v26, 0);
  ElemByUniqueId = BattleLogicFunctionUtilities_FunctionProgressCache__GetElemByUniqueId(v26, v11->fields.targetId, 0);
  v28 = (BattleLogicSkill_SkillExecArgs_o *)sub_1C32E6C(BattleLogicSkill_SkillExecArgs_TypeInfo);
  BattleLogicSkill_SkillExecArgs___ctor(v28, 0);
  BattleServantData__setTransformServant(v14, this->fields.data, Param, v16, 0, v28, 0);
  if ( !ElemByUniqueId )
    goto LABEL_49;
  Before_k__BackingField = ElemByUniqueId->fields._Before_k__BackingField;
  if ( !Before_k__BackingField )
    goto LABEL_49;
  BattleServantData__CheckUpdateUpDownOnlyResultHp(v14, Before_k__BackingField->fields._MaxHp_k__BackingField, 1, 0);
  BattleLogicFunctionUtilities_FunctionProgressCache__MakeAfterSvtCache(v26, 0);
  After_k__BackingField = ElemByUniqueId->fields._After_k__BackingField;
  *(_QWORD *)(v17 + 64) = After_k__BackingField;
  sub_1C32BC4((CGThumbnailListItem_o *)(v17 + 64), (int32_t)After_k__BackingField, v31, v32);
  v33 = ElemByUniqueId->fields._Before_k__BackingField;
  v54 = ElemByUniqueId;
  if ( !v33 )
    goto LABEL_25;
  naturalAligment = BattleServantSnapShotShiftServant_TypeInfo->_2.naturalAligment;
  if ( v33->klass->_2.naturalAligment >= (unsigned int)naturalAligment )
    v35 = (BattleServantSnapShotShiftServant_c *)v33->klass->_2.typeHierarchy[naturalAligment - 1] == BattleServantSnapShotShiftServant_TypeInfo
        ? (BattleServantSnapShotShiftServant_o *)ElemByUniqueId->fields._Before_k__BackingField
        : 0LL;
  else
LABEL_25:
    v35 = 0;
  v56 = this;
  BattleServantData__ApplyCacheForTransformServant(v14, v35, 0);
  SvtCacheArray_k__BackingField = v26->fields._SvtCacheArray_k__BackingField;
  if ( !SvtCacheArray_k__BackingField )
LABEL_49:
    sub_1C32E7C(data);
  max_length = SvtCacheArray_k__BackingField->max_length;
  v38 = v58;
  v55 = v14;
  if ( max_length >= 1 )
  {
    v39 = 0;
    do
    {
      if ( v39 >= max_length )
        sub_1C32E84(data);
      v40 = SvtCacheArray_k__BackingField->m_Items[v39];
      if ( !v40 )
        goto LABEL_49;
      SvtData_k__BackingField = v40->fields._SvtData_k__BackingField;
      if ( !SvtData_k__BackingField )
        goto LABEL_49;
      uniqueId = SvtData_k__BackingField->fields.uniqueId;
      v43 = (BattleActionData_BuffData_o *)sub_1C32E6C(BattleActionData_BuffData_TypeInfo);
      BattleActionData_BuffData___ctor(v43, 0);
      if ( !v43 )
        goto LABEL_49;
      v43->fields.targetId = uniqueId;
      v43->fields.isHideEffect = 1;
      v43->fields.functionIndex = funcIndex;
      v44 = v40->fields._Before_k__BackingField;
      v45 = v40->fields._After_k__BackingField;
      v46 = (BattleActionEffect_AddSubChangeMaxHpBuff_o *)sub_1C32E6C(BattleActionEffect_AddSubChangeMaxHpBuff_TypeInfo);
      BattleActionEffect_AddSubChangeMaxHpBuff___ctor(v46, uniqueId, v44, v45, 0);
      BattleActionData_BuffData__SetActionEffectProc(v43, (BattleActionEffect_Base_o *)v46, 0);
      v47 = v40->fields._SvtData_k__BackingField;
      if ( !v47 )
        goto LABEL_49;
      BattleActionData_BuffData__setSaveNp(v43, v47->fields.np, 0);
      v38 = v58;
      BattleActionData__setBuffData(v58, v43, 0, 0);
      max_length = SvtCacheArray_k__BackingField->max_length;
    }
    while ( (int)++v39 < max_length );
  }
  BattleActionData__addReflectLogicResultServantId(v38, v57->fields.targetId, 0);
  buffdatalist = (System_Collections_Generic_IEnumerable_TSource__o *)v38->fields.buffdatalist;
  v49 = (System_Func_object__bool__o *)sub_1C32E6C(System_Func_BattleActionData_BuffData__bool__TypeInfo);
  System_Func_object__bool____ctor(
    v49,
    (Il2CppObject *)v57,
    Method_BattleLogicFunction___c__DisplayClass92_0__functionTransformServant_b__1__,
    0);
  data = (BattleData_o *)System_Linq_Enumerable__FirstOrDefault_object__51408536(
                           buffdatalist,
                           (System_Func_TSource__bool__o *)v49,
                           (const MethodInfo_3106E98 *)Method_System_Linq_Enumerable_FirstOrDefault_BattleActionData_BuffData___);
  if ( !procArgs )
    goto LABEL_49;
  if ( !procArgs->fields._IsTreasureDvc_k__BackingField )
  {
    if ( !data )
      goto LABEL_46;
    nexttpturn = v55->fields.nexttpturn;
LABEL_45:
    BattleActionData_BuffData__SetSaveTpTurn((BattleActionData_BuffData_o *)data, nexttpturn, 0);
    goto LABEL_46;
  }
  v50 = v54->fields._Before_k__BackingField;
  if ( !v50 )
    goto LABEL_49;
  nexttpturn = v55->fields.maxtpturn - v50->fields._MaxTpTurn_k__BackingField + v55->fields.nexttpturn;
  v55->fields.nexttpturn = nexttpturn;
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
  return v38;
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
  BattleData_o *data; // x0
  BattleServantData_o *v16; // x25
  BattleServantData_o *v17; // x23
  System_Int32_array *FixDamageRates; // x19
  __int64 v19; // x24
  int32_t Param; // w0
  int Random; // w26
  bool v22; // w21
  int32_t v23; // w20
  int IsIgnoreShiftSafeDamage; // w19
  BattleActionData_o *v25; // x28
  struct BattleSkillInfoData_o *skillInfo; // x8
  DataMasterBase_TMaster__TEntity__PKType__o *v27; // x27
  BattleActionData_o *v28; // x27
  int v29; // w19
  int v30; // w8
  struct BattleSkillInfoData_o *v31; // x8
  int32_t type; // w1
  System_Nullable_Int32Enum__o v33; // x0
  bool v34; // zf
  unsigned __int64 v35; // x8
  bool v36; // w9
  bool v37; // w19
  int v38; // w19
  int32_t v39; // w2
  const MethodInfo *v40; // x3
  long double inited; // q0
  int v42; // w20
  int32_t v43; // w8
  _QWORD *v44; // x19
  __int64 v45; // x8
  __int64 v46; // x0
  __int64 v47; // x0
  __int64 *v48; // x8
  __int64 v49; // x1
  int32_t v50; // w2
  const MethodInfo *v51; // x3
  long double v52; // q0
  _QWORD *v53; // x19
  __int64 v54; // x8
  __int64 v55; // x0
  __int64 v56; // x0
  __int64 *v57; // x8
  __int64 v58; // x1
  int32_t v59; // w28
  System_Int32_array *v60; // x0
  int32_t v61; // w2
  const MethodInfo *v62; // x3
  int32_t v63; // w2
  const MethodInfo *v64; // x3
  long double v65; // q0
  _QWORD *v66; // x19
  __int64 v67; // x8
  __int64 v68; // x0
  __int64 v69; // x0
  __int64 *v70; // x8
  __int64 v71; // x1
  int32_t v72; // w2
  const MethodInfo *v73; // x3
  long double v74; // q0
  _QWORD *v75; // x19
  __int64 v76; // x8
  __int64 v77; // x0
  __int64 v78; // x0
  __int64 *v79; // x8
  __int64 v80; // x1
  int32_t v81; // w2
  const MethodInfo *v82; // x3
  long double v83; // q0
  _QWORD *v84; // x19
  __int64 v85; // x8
  __int64 v86; // x0
  __int64 v87; // x0
  __int64 *v88; // x8
  __int64 v89; // x1
  BattleLogicFunction_o *v90; // x19
  struct BattleData_o *v91; // x8
  int32_t wavecount; // w19
  bool IsOpponentPTUniqueID; // w0
  int32_t bId; // [xsp+1Ch] [xbp-A4h]
  BattleLogicFunction_o *v96; // [xsp+20h] [xbp-A0h]
  struct BattleSkillInfoData_o *v98; // [xsp+30h] [xbp-90h] BYREF
  Il2CppObject *entity; // [xsp+38h] [xbp-88h] BYREF
  bool minimumDamageFlg; // [xsp+40h] [xbp-80h] BYREF
  float damage; // [xsp+44h] [xbp-7Ch] BYREF
  System_Collections_Generic_List_int__o *v102; // [xsp+48h] [xbp-78h] BYREF
  int32_t executeEffectId; // [xsp+54h] [xbp-6Ch] BYREF
  int32_t hitStat[2]; // [xsp+58h] [xbp-68h] BYREF

  if ( (byte_4C3A99F & 1) == 0 )
  {
    sub_1C32C20(&Method_System_Array_Empty_int___);
    sub_1C32C20(&Method_System_Array_Empty_BattleBuffData_ShowBuffData___);
    sub_1C32C20(&BattleActionData_TypeInfo);
    sub_1C32C20(&BattleActionData_DamageValueFuncDamageData_TypeInfo);
    sub_1C32C20(&Method_DataManager_GetMaster_SkillMaster___);
    sub_1C32C20(&DataManager_TypeInfo);
    sub_1C32C20(&Method_DataMasterBase_SkillMaster__SkillEntity__int__TryGetEntity__);
    sub_1C32C20(&Method_System_Collections_Generic_List_int__ToArray__);
    sub_1C32C20(&Method_System_Nullable_BattleSkillInfoData_TYPE__GetValueOrDefault__);
    sub_1C32C20(&Method_System_Nullable_BattleSkillInfoData_TYPE___ctor__);
    sub_1C32C20(&Method_System_Nullable_BattleSkillInfoData_TYPE__get_HasValue__);
    byte_4C3A99F = 1;
  }
  *(_QWORD *)hitStat = 0;
  executeEffectId = 0;
  v102 = 0;
  damage = 0.0;
  minimumDamageFlg = 0;
  entity = 0;
  v14 = (BattleActionData_o *)sub_1C32E6C(BattleActionData_TypeInfo);
  BattleActionData___ctor(v14, 0);
  data = this->fields.data;
  if ( !data )
    goto LABEL_111;
  data = (BattleData_o *)BattleData__getServantData(data, playerId, 0);
  if ( !this->fields.data )
    goto LABEL_111;
  v16 = (BattleServantData_o *)data;
  v96 = this;
  bId = playerId;
  data = (BattleData_o *)BattleData__getServantData(this->fields.data, targetId, 0);
  if ( !baseVals )
    goto LABEL_111;
  v17 = (BattleServantData_o *)data;
  FixDamageRates = DataVals__GetFixDamageRates(baseVals, 0);
  v19 = sub_1C32E6C(BattleActionData_DamageValueFuncDamageData_TypeInfo);
  BattleActionData_DamageValueFuncDamageData___ctor(
    (BattleActionData_DamageValueFuncDamageData_o *)v19,
    FixDamageRates,
    0);
  LODWORD(FixDamageRates) = DataVals__GetValue(baseVals, 0);
  Param = DataVals__GetParam(baseVals, 4, 0, 0);
  Random = BattleRandom__getRandom((int32_t)FixDamageRates, Param + 1, 0);
  hitStat[1] = 0;
  data = (BattleData_o *)DataVals__IsActNoDamageBuff(baseVals, 0);
  if ( ((unsigned __int8)data & 1) != 0 )
  {
    if ( !v17 )
      goto LABEL_111;
    v22 = safe;
    v23 = funcIndex;
    BattleServantData__CheckNoDamageBuff(
      v17,
      v96->fields.data,
      v16,
      0,
      (BattleActionData_DamageData_o *)v19,
      mainAction,
      0);
    damage = (float)Random;
    minimumDamageFlg = 1;
    BattleServantData__CheckInvincibleAvoidanceBuff(
      v17,
      v96->fields.data,
      v16,
      0,
      (BattleActionData_DamageData_o *)v19,
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
    v22 = safe;
    v23 = funcIndex;
  }
  IsIgnoreShiftSafeDamage = DataVals__IsIgnoreShiftSafeDamage(baseVals, 0);
  v25 = mainAction ? v14 : 0LL;
  if ( mainAction && mainAction->fields.skillInfo )
  {
    if ( !DataManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
    data = (BattleData_o *)DataManager__GetMaster_object_((const MethodInfo_30DD39C *)Method_DataManager_GetMaster_SkillMaster___);
    skillInfo = mainAction->fields.skillInfo;
    if ( !skillInfo )
      goto LABEL_111;
    v27 = (DataMasterBase_TMaster__TEntity__PKType__o *)data;
    data = (BattleData_o *)((BattleData_o *(__fastcall *)(struct BattleSkillInfoData_o *__return_ptr, struct BattleSkillInfoData_o *, const MethodInfo *))skillInfo->klass->vtable._5_get_skillId.methodPtr)(
                             skillInfo,
                             mainAction->fields.skillInfo,
                             skillInfo->klass->vtable._5_get_skillId.method);
    if ( !v27 )
      goto LABEL_111;
    if ( DataMasterBase_object__object__int___TryGetEntity(
           v27,
           &entity,
           (int32_t)data,
           (const MethodInfo_3396884 *)Method_DataMasterBase_SkillMaster__SkillEntity__int__TryGetEntity__) )
    {
      data = (BattleData_o *)entity;
      if ( !entity )
        goto LABEL_111;
      IsIgnoreShiftSafeDamage |= SkillEntity__IsCheckUpdateShiftServant((SkillEntity_o *)entity, 0);
    }
  }
  else
  {
    v25 = v14;
  }
  data = v96->fields.data;
  if ( !data )
    goto LABEL_111;
  data = (BattleData_o *)BattleData__IsDeadOkTurn(data, targetId, 0);
  v28 = ((unsigned __int8)data & 1) != 0 ? 0LL : v25;
  if ( (((unsigned __int8)data | (unsigned __int8)IsIgnoreShiftSafeDamage) & 1) != 0 )
  {
    if ( v22 )
    {
      if ( !v17 )
        goto LABEL_111;
      if ( (int)(((__int64 (__fastcall *)(BattleServantData_o *, const MethodInfo *))v17->klass->vtable._13_get_resultHp.methodPtr)(
                   v17,
                   v17->klass->vtable._13_get_resultHp.method)
               - Random) <= 0 )
        Random = ((__int64 (__fastcall *)(BattleServantData_o *, const MethodInfo *))v17->klass->vtable._13_get_resultHp.methodPtr)(
                   v17,
                   v17->klass->vtable._13_get_resultHp.method)
               - 1;
    }
    v28 = v25;
  }
  else
  {
    if ( !v17 )
      goto LABEL_111;
    v29 = ((__int64 (__fastcall *)(BattleServantData_o *, const MethodInfo *))v17->klass->vtable._9_get_hp.methodPtr)(
            v17,
            v17->klass->vtable._9_get_hp.method);
    v30 = v29
        - ((__int64 (__fastcall *)(BattleServantData_o *, const MethodInfo *))v17->klass->vtable._11_get_reducedhp.methodPtr)(
            v17,
            v17->klass->vtable._11_get_reducedhp.method);
    if ( v30 >= 1 && v30 < Random )
      Random = v30 - 1;
  }
  if ( mainAction )
  {
    v31 = mainAction->fields.skillInfo;
    if ( v31 )
    {
      type = v31->fields.type;
      v33 = (System_Nullable_Int32Enum__o)&v98;
      v98 = 0;
      System_Nullable_Int32Enum____ctor(
        v33,
        type,
        (const MethodInfo_38BE2F8 *)Method_System_Nullable_BattleSkillInfoData_TYPE___ctor__);
      v31 = v98;
    }
    v34 = (unsigned __int8)v31 == 0;
    v35 = (unsigned __int64)v31 >> 32;
    v36 = !v34;
    v37 = v35 == 1 && v36;
  }
  else
  {
    v37 = 0;
  }
  data = (BattleData_o *)DataVals__IsActNoDamageBuff(baseVals, 0);
  if ( ((unsigned __int8)data & 1) == 0 )
    goto LABEL_51;
  if ( !v17 )
    goto LABEL_111;
  data = (BattleData_o *)BattleServantData__TryGetReactiveDamageGainHpValue(
                           v17,
                           hitStat,
                           &executeEffectId,
                           Random,
                           0,
                           v16,
                           0,
                           v37,
                           0);
  if ( ((unsigned __int8)data & 1) != 0 )
  {
    Random = hitStat[0];
    hitStat[1] = 6;
    if ( !v19 )
      goto LABEL_111;
    v38 = 1;
    *(_DWORD *)(v19 + 168) = executeEffectId;
  }
  else
  {
LABEL_51:
    if ( !v19 )
      goto LABEL_111;
    v38 = 0;
  }
  *(_DWORD *)(v19 + 16) = v23;
  *(_DWORD *)(v19 + 28) = targetId;
  data = (BattleData_o *)baseVals->fields.funcEnt;
  if ( !data )
    goto LABEL_111;
  data = (BattleData_o *)FunctionEntity__getEffectList((FunctionEntity_o *)data, 0);
  if ( !data )
    goto LABEL_111;
  v42 = v38;
  if ( data->fields.m_CancellationTokenSource )
  {
    *(_QWORD *)(v19 + 136) = data;
    sub_1C32BC4((CGThumbnailListItem_o *)(v19 + 136), (int32_t)data, v39, v40);
  }
  *(_WORD *)(v19 + 32) = 0;
  *(_BYTE *)(v19 + 34) = 0;
  v43 = hitStat[1];
  *(_BYTE *)(v19 + 40) = 0;
  *(_DWORD *)(v19 + 36) = v43;
  v44 = Method_System_Array_Empty_BattleBuffData_ShowBuffData___;
  v45 = *((_QWORD *)Method_System_Array_Empty_BattleBuffData_ShowBuffData___ + 7);
  if ( !v45 )
  {
    sub_1C83390(Method_System_Array_Empty_BattleBuffData_ShowBuffData___);
    v45 = v44[7];
  }
  v46 = *(_QWORD *)(v45 + 16);
  if ( (*(_BYTE *)(v46 + 309) & 1) == 0 )
    v46 = sub_1C83334(inited);
  if ( !*(_DWORD *)(v46 + 224) )
    inited = j_il2cpp_runtime_class_init_0(v46);
  v47 = *(_QWORD *)(v44[7] + 16LL);
  if ( (*(_BYTE *)(v47 + 309) & 1) == 0 )
    v47 = sub_1C83334(inited);
  v48 = *(__int64 **)(v47 + 184);
  v49 = *v48;
  *(_QWORD *)(v19 + 64) = *v48;
  sub_1C32BC4((CGThumbnailListItem_o *)(v19 + 64), v49, v39, v40);
  v53 = Method_System_Array_Empty_BattleBuffData_ShowBuffData___;
  v54 = *((_QWORD *)Method_System_Array_Empty_BattleBuffData_ShowBuffData___ + 7);
  if ( !v54 )
  {
    sub_1C83390(Method_System_Array_Empty_BattleBuffData_ShowBuffData___);
    v54 = v53[7];
  }
  v55 = *(_QWORD *)(v54 + 16);
  if ( (*(_BYTE *)(v55 + 309) & 1) == 0 )
    v55 = sub_1C83334(v52);
  if ( !*(_DWORD *)(v55 + 224) )
    v52 = j_il2cpp_runtime_class_init_0(v55);
  v56 = *(_QWORD *)(v53[7] + 16LL);
  if ( (*(_BYTE *)(v56 + 309) & 1) == 0 )
    v56 = sub_1C83334(v52);
  v57 = *(__int64 **)(v56 + 184);
  v58 = *v57;
  *(_QWORD *)(v19 + 72) = *v57;
  sub_1C32BC4((CGThumbnailListItem_o *)(v19 + 72), v58, v50, v51);
  data = (BattleData_o *)(*(__int64 (__fastcall **)(__int64, System_Collections_Generic_List_int__o **, _QWORD, _QWORD, _QWORD))(*(_QWORD *)v19 + 376LL))(
                           v19,
                           &v102,
                           (unsigned int)Random,
                           0,
                           *(_QWORD *)(*(_QWORD *)v19 + 384LL));
  if ( !v102 )
    goto LABEL_111;
  v59 = (int)data;
  v60 = System_Collections_Generic_List_int___ToArray(
          v102,
          (const MethodInfo_377D250 *)Method_System_Collections_Generic_List_int__ToArray__);
  *(_QWORD *)(v19 + 96) = v60;
  sub_1C32BC4((CGThumbnailListItem_o *)(v19 + 96), (int32_t)v60, v61, v62);
  if ( v16 )
    BattleServantData__CacheDealtDamage(v16, (BattleActionData_DamageData_o *)v19, 0);
  v66 = Method_System_Array_Empty_int___;
  v67 = *((_QWORD *)Method_System_Array_Empty_int___ + 7);
  if ( !v67 )
  {
    sub_1C83390(Method_System_Array_Empty_int___);
    v67 = v66[7];
  }
  v68 = *(_QWORD *)(v67 + 16);
  if ( (*(_BYTE *)(v68 + 309) & 1) == 0 )
    v68 = sub_1C83334(v65);
  if ( !*(_DWORD *)(v68 + 224) )
    v65 = j_il2cpp_runtime_class_init_0(v68);
  v69 = *(_QWORD *)(v66[7] + 16LL);
  if ( (*(_BYTE *)(v69 + 309) & 1) == 0 )
    v69 = sub_1C83334(v65);
  v70 = *(__int64 **)(v69 + 184);
  v71 = *v70;
  *(_QWORD *)(v19 + 104) = *v70;
  sub_1C32BC4((CGThumbnailListItem_o *)(v19 + 104), v71, v63, v64);
  v75 = Method_System_Array_Empty_int___;
  v76 = *((_QWORD *)Method_System_Array_Empty_int___ + 7);
  if ( !v76 )
  {
    sub_1C83390(Method_System_Array_Empty_int___);
    v76 = v75[7];
  }
  v77 = *(_QWORD *)(v76 + 16);
  if ( (*(_BYTE *)(v77 + 309) & 1) == 0 )
    v77 = sub_1C83334(v74);
  if ( !*(_DWORD *)(v77 + 224) )
    v74 = j_il2cpp_runtime_class_init_0(v77);
  v78 = *(_QWORD *)(v75[7] + 16LL);
  if ( (*(_BYTE *)(v78 + 309) & 1) == 0 )
    v78 = sub_1C83334(v74);
  v79 = *(__int64 **)(v78 + 184);
  v80 = *v79;
  *(_QWORD *)(v19 + 112) = *v79;
  sub_1C32BC4((CGThumbnailListItem_o *)(v19 + 112), v80, v72, v73);
  v84 = Method_System_Array_Empty_int___;
  v85 = *((_QWORD *)Method_System_Array_Empty_int___ + 7);
  if ( !v85 )
  {
    sub_1C83390(Method_System_Array_Empty_int___);
    v85 = v84[7];
  }
  v86 = *(_QWORD *)(v85 + 16);
  if ( (*(_BYTE *)(v86 + 309) & 1) == 0 )
    v86 = sub_1C83334(v83);
  if ( !*(_DWORD *)(v86 + 224) )
    v83 = j_il2cpp_runtime_class_init_0(v86);
  v87 = *(_QWORD *)(v84[7] + 16LL);
  if ( (*(_BYTE *)(v87 + 309) & 1) == 0 )
    v87 = sub_1C83334(v83);
  v88 = *(__int64 **)(v87 + 184);
  v89 = *v88;
  *(_QWORD *)(v19 + 120) = *v88;
  sub_1C32BC4((CGThumbnailListItem_o *)(v19 + 120), v89, v81, v82);
  if ( !v17 )
    goto LABEL_111;
  if ( v42 )
  {
    BattleServantData__resultHeal(v17, v59, 0);
    v90 = v96;
  }
  else
  {
    BattleServantData__provisionalDamage(v17, Random, 0);
    BattleServantData__ResultDamage(v17, Random, v16, 0, 0, 0, 0);
    data = (BattleData_o *)BattleServantData__isLogicResultAlive(v17, 0);
    v90 = v96;
    if ( ((unsigned __int8)data & 1) == 0 )
    {
      v91 = v96->fields.data;
      if ( !v91 )
        goto LABEL_111;
      v17->fields.deadTurn = v91->fields.typeTurn;
    }
  }
  data = (BattleData_o *)DataVals__IsActAttackFunction(baseVals, 0);
  if ( ((unsigned __int8)data & 1) != 0 )
    BattleActionData_DamageData__addAttackSideEffectAction((BattleActionData_DamageData_o *)v19, 80, 0);
  if ( !v28
    || (BattleActionData__SetFuncDamageData(v28, (BattleActionData_DamageData_o *)v19, baseVals, 0),
        (data = v90->fields.data) == 0) )
  {
LABEL_111:
    sub_1C32E7C(data);
  }
  wavecount = data->fields.wavecount;
  IsOpponentPTUniqueID = BattleData__IsOpponentPTUniqueID(data, targetId, bId, 0);
  BattleServantData__setActionHistory(v17, bId, 7, wavecount, IsOpponentPTUniqueID, 0);
  return v28;
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
  __int64 data; // x0
  int Random; // w27
  BattleServantData_o *v23; // x24
  int v24; // w23
  int32_t Param; // w0
  _BOOL8 IsDeadOkTurn; // x0
  const MethodInfo *v27; // x6
  BattleActionData_BuffData_o *v28; // x29
  BattleServantData_o *v29; // x28
  __int64 v30; // x25
  int32_t v31; // w2
  const MethodInfo *v32; // x3
  long double inited; // q0
  struct BattleBuffData_o *buffData; // x8
  _QWORD *v35; // x23
  __int64 v36; // x8
  __int64 v37; // x0
  __int64 v38; // x0
  __int64 *v39; // x8
  __int64 v40; // x23
  int32_t v41; // w2
  const MethodInfo *v42; // x3
  int32_t v43; // w2
  const MethodInfo *v44; // x3
  long double v45; // q0
  _QWORD *v46; // x23
  __int64 v47; // x8
  __int64 v48; // x0
  __int64 v49; // x0
  __int64 *v50; // x8
  __int64 v51; // x23
  int32_t v52; // w2
  const MethodInfo *v53; // x3
  int32_t v54; // w2
  const MethodInfo *v55; // x3
  struct BattleBuffData_o *v56; // x8
  CGThumbnailListItem_o *p_invalidLossHpData; // x0
  int32_t v58; // w1
  bool v59; // w25
  UnityEngine_Object_o *logic; // x23
  int32_t Wave; // w23
  bool IsOpponentPTUniqueID; // w0
  BattleActionEffect_LossHPFunc_o *v63; // x23
  BattleActionData_BuffData_o *v64; // x0
  struct BattleBuffData_o *v65; // x8
  int32_t v66; // w0
  int32_t v68; // [xsp+18h] [xbp-78h]
  int32_t v69; // [xsp+1Ch] [xbp-74h]
  bool v70; // [xsp+20h] [xbp-70h]
  bool v71; // [xsp+24h] [xbp-6Ch]
  bool minimumDamageFlg; // [xsp+28h] [xbp-68h] BYREF
  float damage; // [xsp+2Ch] [xbp-64h] BYREF

  if ( (byte_4C3A98E & 1) == 0 )
  {
    sub_1C32C20(&Method_System_Array_Empty_int___);
    sub_1C32C20(&Method_System_Array_Empty_BattleBuffData_ShowBuffData___);
    sub_1C32C20(&BattleActionData_TypeInfo);
    sub_1C32C20(&BattleActionData_DamageData_TypeInfo);
    sub_1C32C20(&BattleActionEffect_LossHPFunc_TypeInfo);
    sub_1C32C20(&UnityEngine_Object_TypeInfo);
    byte_4C3A98E = 1;
  }
  damage = 0.0;
  minimumDamageFlg = 0;
  v20 = (BattleActionData_o *)sub_1C32E6C(BattleActionData_TypeInfo);
  BattleActionData___ctor(v20, 0);
  data = (__int64)this->fields.data;
  if ( !data )
    goto LABEL_67;
  v71 = safe;
  data = (__int64)BattleData__getServantData((BattleData_o *)data, targetId, 0);
  if ( !data )
    goto LABEL_67;
  Random = overwriteLossHp;
  v23 = (BattleServantData_o *)data;
  data = (*(__int64 (__fastcall **)(__int64, _QWORD))(*(_QWORD *)data + 520LL))(
           data,
           *(_QWORD *)(*(_QWORD *)data + 528LL));
  v24 = data;
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
  if ( v24 < 1 )
    return 0;
  data = (__int64)this->fields.data;
  if ( !data )
    goto LABEL_67;
  IsDeadOkTurn = BattleData__IsDeadOkTurn((BattleData_o *)data, targetId, 0);
  v69 = funcIndex;
  v70 = IsDeadOkTurn;
  data = (__int64)BattleLogicFunction__getFunctionObject(
                    (BattleLogicFunction_o *)IsDeadOkTurn,
                    funcEnt,
                    v23->fields.uniqueId,
                    funcIndex,
                    isCommandSideEffect,
                    0,
                    v27);
  if ( !this->fields.data )
    goto LABEL_67;
  v28 = (BattleActionData_BuffData_o *)data;
  data = (__int64)BattleData__getServantData(this->fields.data, playerId, 0);
  if ( !baseVals )
    goto LABEL_67;
  v29 = (BattleServantData_o *)data;
  v68 = v24;
  if ( DataVals__IsActNoDamageBuff(baseVals, 0) )
  {
    v30 = sub_1C32E6C(BattleActionData_DamageData_TypeInfo);
    BattleActionData_DamageData___ctor((BattleActionData_DamageData_o *)v30, 0);
    BattleServantData__CheckNoDamageBuff(
      v23,
      this->fields.data,
      v29,
      0,
      (BattleActionData_DamageData_o *)v30,
      mainAction,
      0);
    damage = (float)Random;
    minimumDamageFlg = 1;
    if ( !v30 )
      goto LABEL_67;
    *(_DWORD *)(v30 + 36) = 0;
    BattleServantData__CheckInvincibleAvoidanceBuff(
      v23,
      this->fields.data,
      v29,
      0,
      (BattleActionData_DamageData_o *)v30,
      &damage,
      &minimumDamageFlg,
      (int32_t *)(v30 + 36),
      mainAction,
      0);
    *(float *)&inited = damage;
    buffData = v23->fields.buffData;
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
        sub_1C83390(Method_System_Array_Empty_BattleBuffData_ShowBuffData___);
        v36 = v35[7];
      }
      v37 = *(_QWORD *)(v36 + 16);
      if ( (*(_BYTE *)(v37 + 309) & 1) == 0 )
        v37 = sub_1C83334(inited);
      if ( !*(_DWORD *)(v37 + 224) )
        inited = j_il2cpp_runtime_class_init_0(v37);
      v38 = *(_QWORD *)(v35[7] + 16LL);
      if ( (*(_BYTE *)(v38 + 309) & 1) == 0 )
        v38 = sub_1C83334(inited);
      v39 = *(__int64 **)(v38 + 184);
      v40 = *v39;
      *(_QWORD *)(v30 + 72) = *v39;
      sub_1C32BC4((CGThumbnailListItem_o *)(v30 + 72), v40, v31, v32);
      *(_QWORD *)(v30 + 64) = v40;
      sub_1C32BC4((CGThumbnailListItem_o *)(v30 + 64), v40, v41, v42);
      v46 = Method_System_Array_Empty_int___;
      v47 = *((_QWORD *)Method_System_Array_Empty_int___ + 7);
      if ( !v47 )
      {
        sub_1C83390(Method_System_Array_Empty_int___);
        v47 = v46[7];
      }
      v48 = *(_QWORD *)(v47 + 16);
      if ( (*(_BYTE *)(v48 + 309) & 1) == 0 )
        v48 = sub_1C83334(v45);
      if ( !*(_DWORD *)(v48 + 224) )
        v45 = j_il2cpp_runtime_class_init_0(v48);
      v49 = *(_QWORD *)(v46[7] + 16LL);
      if ( (*(_BYTE *)(v49 + 309) & 1) == 0 )
        v49 = sub_1C83334(v45);
      v50 = *(__int64 **)(v49 + 184);
      v51 = *v50;
      *(_QWORD *)(v30 + 120) = *v50;
      sub_1C32BC4((CGThumbnailListItem_o *)(v30 + 120), v51, v43, v44);
      *(_QWORD *)(v30 + 112) = v51;
      sub_1C32BC4((CGThumbnailListItem_o *)(v30 + 112), v51, v52, v53);
      *(_QWORD *)(v30 + 104) = v51;
      sub_1C32BC4((CGThumbnailListItem_o *)(v30 + 104), v51, v54, v55);
      v56 = v23->fields.buffData;
      if ( !v56 )
        goto LABEL_67;
      *(_BYTE *)(v30 + 53) = v56->fields.isNoDamage;
      if ( !v28 )
        goto LABEL_67;
      v28->fields.invalidLossHpData = (struct BattleActionData_DamageData_o *)v30;
      p_invalidLossHpData = (CGThumbnailListItem_o *)&v28->fields.invalidLossHpData;
      v58 = v30;
    }
    else
    {
      if ( !v28 )
        goto LABEL_67;
      v28->fields.invalidLossHpData = 0;
      p_invalidLossHpData = (CGThumbnailListItem_o *)&v28->fields.invalidLossHpData;
      v58 = 0;
    }
    sub_1C32BC4(p_invalidLossHpData, v58, v31, v32);
  }
  v59 = !v70 || v71;
  BattleServantData__ResultDamage(v23, Random, v29, 0, 0, v59, 0);
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
        BattleServantData__setActionHistory(v23, playerId, 3, Wave, IsOpponentPTUniqueID, 0),
        !v28)
    || (v28->fields.procType = 2,
        v63 = (BattleActionEffect_LossHPFunc_o *)sub_1C32E6C(BattleActionEffect_LossHPFunc_TypeInfo),
        BattleActionEffect_LossHPFunc___ctor(v63, targetId, Random, v59, 0),
        BattleActionData_BuffData__SetActionEffectProc(v28, (BattleActionEffect_Base_o *)v63, 0),
        !v20) )
  {
LABEL_67:
    sub_1C32E7C(data);
  }
  BattleActionData__setBuffData(v20, v28, baseVals, 0);
  data = DataVals__isLossHpChangeDamage(baseVals, 0);
  if ( (data & 1) != 0 )
  {
    if ( !DataVals__IsActNoDamageBuff(baseVals, 0) )
    {
      data = (__int64)v23->fields.buffData;
      if ( !data )
        goto LABEL_67;
      goto LABEL_61;
    }
    data = DataVals__IsActNoDamageBuff(baseVals, 0);
    if ( (data & 1) != 0 )
    {
      data = (__int64)v23->fields.buffData;
      if ( !data )
        goto LABEL_67;
      if ( !*(_BYTE *)(data + 160) )
      {
LABEL_61:
        v64 = BattleBuffData__UseFieldProgressingDoNotAct((BattleBuffData_o *)data, v23, v69, 0);
        BattleActionData__setBuffData(v20, v64, baseVals, 0);
      }
    }
  }
  v65 = v23->fields.buffData;
  if ( !v65 )
    goto LABEL_67;
  v65->fields.isNoDamage = 0;
  data = (__int64)this->fields.data;
  if ( !data )
    goto LABEL_67;
  if ( v23->fields.isEnemy != BattleData__isEnemyID((BattleData_o *)data, playerId, 0) )
  {
    v66 = ((__int64 (__fastcall *)(BattleServantData_o *, const MethodInfo *))v23->klass->vtable._13_get_resultHp.methodPtr)(
            v23,
            v23->klass->vtable._13_get_resultHp.method);
    BattleServantData__procAccumulationDamage(v23, v68, v66, 0);
  }
  return v20;
}


FunctionMaster_o *BattleLogicFunction__getFuncMaster(BattleLogicFunction_o *this, const MethodInfo *method)
{
  FunctionMaster_o *result; // x0
  CGThumbnailListItem_o *p_master; // x19
  FunctionMaster_o *master; // t1
  Il2CppObject *Instance; // x0
  Il2CppObject *MasterData_object; // x0
  int32_t v8; // w2
  const MethodInfo *v9; // x3

  if ( (byte_4C3A96D & 1) == 0 )
  {
    sub_1C32C20(&Method_DataManager_GetMasterData_FunctionMaster___);
    sub_1C32C20(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_4C3A96D = 1;
  }
  master = this->fields.master;
  p_master = (CGThumbnailListItem_o *)&this->fields.master;
  result = master;
  if ( !master )
  {
    Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39E2904 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !Instance )
      sub_1C32E7C(0);
    MasterData_object = DataManager__GetMasterData_object_(
                          (DataManager_o *)Instance,
                          (const MethodInfo_30DD3F0 *)Method_DataManager_GetMasterData_FunctionMaster___);
    p_master->klass = (CGThumbnailListItem_c *)MasterData_object;
    sub_1C32BC4(p_master, (int32_t)MasterData_object, v8, v9);
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
  Il2CppObject *MasterData_object; // x0
  int32_t v9; // w2
  const MethodInfo *v10; // x3

  if ( (byte_4C3A96C & 1) == 0 )
  {
    sub_1C32C20(&Method_DataManager_GetMasterData_FunctionMaster___);
    sub_1C32C20(&Method_DataMasterBase_FunctionMaster__FunctionEntity__int__GetEntity__);
    sub_1C32C20(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_4C3A96C = 1;
  }
  master = this->fields.master;
  p_master = (CGThumbnailListItem_o *)&this->fields.master;
  Instance = (Il2CppObject *)master;
  if ( !master )
  {
    Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39E2904 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !Instance
      || (MasterData_object = DataManager__GetMasterData_object_(
                                (DataManager_o *)Instance,
                                (const MethodInfo_30DD3F0 *)Method_DataManager_GetMasterData_FunctionMaster___),
          p_master->klass = (CGThumbnailListItem_c *)MasterData_object,
          sub_1C32BC4(p_master, (int32_t)MasterData_object, v9, v10),
          (Instance = (Il2CppObject *)p_master->klass) == 0) )
    {
      sub_1C32E7C(Instance);
    }
  }
  return (FunctionEntity_o *)DataMasterBase_object__object__int___GetEntity(
                               (DataMasterBase_TMaster__TEntity__PKType__o *)Instance,
                               id,
                               (const MethodInfo_3396838 *)Method_DataMasterBase_FunctionMaster__FunctionEntity__int__GetEntity__);
}


// local variable allocation has failed, the output may be wrong!
BattleActionData_BuffData_o *BattleLogicFunction__getFunctionObject(
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
  const MethodInfo *v15; // x3

  if ( (byte_4C3A998 & 1) == 0 )
  {
    this = (BattleLogicFunction_o *)sub_1C32C20(&BattleActionData_BuffData_TypeInfo);
    byte_4C3A998 = 1;
  }
  if ( !defBuffData
    && (defBuffData = (BattleActionData_BuffData_o *)sub_1C32E6C(BattleActionData_BuffData_TypeInfo),
        BattleActionData_BuffData___ctor(defBuffData, 0),
        !defBuffData)
    || (defBuffData->fields.targetId = uniqueId, defBuffData->fields.functionIndex = funcIndex, !funcEnt) )
  {
    sub_1C32E7C(this);
  }
  popupText = funcEnt->fields.popupText;
  defBuffData->fields.popLabel = popupText;
  sub_1C32BC4(
    (CGThumbnailListItem_o *)&defBuffData->fields.popLabel,
    (int32_t)popupText,
    uniqueId,
    *(const MethodInfo **)&funcIndex);
  *(_QWORD *)&defBuffData->fields.popIcon = *(_QWORD *)&funcEnt->fields.popupIconId;
  EffectList = FunctionEntity__getEffectList(funcEnt, 0);
  defBuffData->fields.effectList = EffectList;
  sub_1C32BC4((CGThumbnailListItem_o *)&defBuffData->fields.effectList, (int32_t)EffectList, v14, v15);
  defBuffData->fields.isCommandAfter = isCommandSideEffect;
  defBuffData->fields.procType = 0;
  return defBuffData;
}


BattleLogicFunctionProcess_BaseFunctionTypeProcess_o *BattleLogicFunction__getFunctionTypeProcess(
        BattleLogicFunction_o *this,
        int32_t functType,
        const MethodInfo *method)
{
  System_Collections_Generic_Dictionary_TKey__TValue__o *dicFuncProcess; // x0
  int32_t v6; // w1
  BattleLogicFunctionProcess_BaseFunctionTypeProcess_o *v7; // x20

  if ( (byte_4C3A973 & 1) == 0 )
  {
    sub_1C32C20(&Method_System_Collections_Generic_Dictionary_FuncList_TYPE__BattleLogicFunctionProcess_BaseFunctionTypeProcess__ContainsKey__);
    sub_1C32C20(&Method_System_Collections_Generic_Dictionary_FuncList_TYPE__BattleLogicFunctionProcess_BaseFunctionTypeProcess__get_Item__);
    byte_4C3A973 = 1;
  }
  dicFuncProcess = (System_Collections_Generic_Dictionary_TKey__TValue__o *)this->fields.dicFuncProcess;
  if ( !dicFuncProcess
    || (dicFuncProcess = (System_Collections_Generic_Dictionary_TKey__TValue__o *)System_Collections_Generic_Dictionary_Int32Enum__object___ContainsKey(
                                                                                    dicFuncProcess,
                                                                                    functType,
                                                                                    (const MethodInfo_3422FAC *)Method_System_Collections_Generic_Dictionary_FuncList_TYPE__BattleLogicFunctionProcess_BaseFunctionTypeProcess__ContainsKey__),
        !this->fields.dicFuncProcess)
    || (((unsigned __int8)dicFuncProcess & 1) == 0 ? (v6 = 0) : (v6 = functType),
        (dicFuncProcess = (System_Collections_Generic_Dictionary_TKey__TValue__o *)System_Collections_Generic_Dictionary_Int32Enum__object___get_Item(
                                                                                     (System_Collections_Generic_Dictionary_TKey__TValue__o *)this->fields.dicFuncProcess,
                                                                                     v6,
                                                                                     (const MethodInfo_3422D18 *)Method_System_Collections_Generic_Dictionary_FuncList_TYPE__BattleLogicFunctionProcess_BaseFunctionTypeProcess__get_Item__)) == 0) )
  {
    sub_1C32E7C(dicFuncProcess);
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
        const MethodInfo *method)
{
  BattleActionData_o *v8; // x20
  BattleActionData_BuffData_o *GrayActionBuffData; // x0
  const MethodInfo *v10; // x6

  if ( (byte_4C3A984 & 1) == 0 )
  {
    sub_1C32C20(&BattleActionData_TypeInfo);
    byte_4C3A984 = 1;
  }
  v8 = (BattleActionData_o *)sub_1C32E6C(BattleActionData_TypeInfo);
  BattleActionData___ctor(v8, 0);
  if ( !funcEnt
    || (GrayActionBuffData = BattleLogicFunction__MakeGrayActionBuffData(
                               (BattleLogicFunction_o *)GrayActionBuffData,
                               targetId,
                               funcIndex,
                               funcEnt->fields.popupIconId,
                               funcEnt->fields.popupText,
                               funcEnt->fields.popupTextColor,
                               v10),
        !v8) )
  {
    sub_1C32E7C(GrayActionBuffData);
  }
  BattleActionData__setBuffData(v8, GrayActionBuffData, 0, 0);
  return v8;
}


int32_t BattleLogicFunction__getHpPerValue(
        BattleLogicFunction_o *this,
        DataVals_o *baseVals,
        BattleServantData_o *targetSvtData,
        const MethodInfo *method)
{
  int32_t MaxHp; // w0

  if ( !baseVals || (this = (BattleLogicFunction_o *)DataVals__isParam(baseVals, 119, 0), !targetSvtData) )
    sub_1C32E7C(this);
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
        const MethodInfo *method)
{
  BattleActionData_BuffData_o *v10; // x20
  BattleActionData_o *v18; // x23
  int32_t v19; // w2
  const MethodInfo *v20; // x3
  __int64 v21; // x0
  __int64 v22; // x0
  int32_t v23; // w2
  const MethodInfo *v24; // x3

  v10 = defBuffData;
  if ( (byte_4C3A980 & 1) == 0 )
  {
    sub_1C32C20(&BattleActionData_TypeInfo);
    sub_1C32C20(&BattleActionData_BuffData_TypeInfo);
    sub_1C32C20(&int___TypeInfo);
    sub_1C32C20(&StringLiteral_1/*""*/);
    byte_4C3A980 = 1;
  }
  v18 = (BattleActionData_o *)sub_1C32E6C(BattleActionData_TypeInfo);
  BattleActionData___ctor(v18, 0);
  if ( !defBuffData )
  {
    v10 = (BattleActionData_BuffData_o *)sub_1C32E6C(BattleActionData_BuffData_TypeInfo);
    BattleActionData_BuffData___ctor(v10, 0);
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
  sub_1C32BC4((CGThumbnailListItem_o *)&v10->fields.popLabel, (int32_t)dispName, v19, v20);
  v22 = sub_1C32CC8(int___TypeInfo, 0);
  v10->fields.effectList = (struct System_Int32_array *)v22;
  sub_1C32BC4((CGThumbnailListItem_o *)&v10->fields.effectList, v22, v23, v24);
  if ( !v18
    || (BattleActionData__setBuffData(v18, v10, 0, 0),
        v10->fields.IsNoEffect = isNoEffect,
        v10->fields.isCommandAfter = isCommandSideEffect,
        !dataVals) )
  {
LABEL_10:
    sub_1C32E7C(v21);
  }
  v10->fields.popDelay = DataVals__GetParam(dataVals, 65, 0, 0);
  v18->fields.funcResult = 0;
  return v18;
}


BattleActionData_o *BattleLogicFunction__getMissObject(
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
  if ( (byte_4C3A981 & 1) != 0 )
  {
    if ( uniqueText )
      goto LABEL_3;
  }
  else
  {
    sub_1C32C20(&LocalizationManager_TypeInfo);
    this = (BattleLogicFunction_o *)sub_1C32C20(&StringLiteral_2804/*"BATTLE_MISS_FUNCTION"*/);
    byte_4C3A981 = 1;
    if ( v9 )
    {
LABEL_3:
      if ( dataVals )
        goto LABEL_4;
LABEL_9:
      sub_1C32E7C(this);
    }
  }
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  this = (BattleLogicFunction_o *)LocalizationManager__Get((System_String_o *)StringLiteral_2804/*"BATTLE_MISS_FUNCTION"*/, 0);
  v9 = (System_String_o *)this;
  if ( !dataVals )
    goto LABEL_9;
LABEL_4:
  isHideMiss = DataVals__isHideMiss(dataVals, 0);
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


BattleActionData_o *BattleLogicFunction__getNoEffectObject(
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
  if ( (byte_4C3A982 & 1) != 0 )
  {
    if ( uniqueText )
      goto LABEL_3;
  }
  else
  {
    sub_1C32C20(&LocalizationManager_TypeInfo);
    this = (BattleLogicFunction_o *)sub_1C32C20(&StringLiteral_2815/*"BATTLE_NO_EFFECT_FUNCTION"*/);
    byte_4C3A982 = 1;
    if ( v9 )
    {
LABEL_3:
      if ( dataVals )
        goto LABEL_4;
LABEL_9:
      sub_1C32E7C(this);
    }
  }
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  this = (BattleLogicFunction_o *)LocalizationManager__Get((System_String_o *)StringLiteral_2815/*"BATTLE_NO_EFFECT_FUNCTION"*/, 0);
  v9 = (System_String_o *)this;
  if ( !dataVals )
    goto LABEL_9;
LABEL_4:
  IsHideNoEffect = DataVals__IsHideNoEffect(dataVals, targetId, 0);
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


System_Int32_array *BattleLogicFunction__getTargetids(
        BattleLogicFunction_o *this,
        BattleActionData_o *mainAction,
        int32_t targetType,
        DataVals_o *dataVals,
        const MethodInfo *method)
{
  Target_BattleTargetArgs_o *args; // x23
  __int64 v10; // x0
  BattleData_o *data; // x22
  int32_t actorId; // w24
  int32_t targetId; // w25
  int32_t PTTargetId; // w0
  System_Collections_Generic_IEnumerable_TSource__o *TargetIds_40355556; // x20
  System_Func_int__bool__o *v16; // x21
  System_Collections_Generic_IEnumerable_TSource__o *v17; // x0

  if ( (byte_4C3A979 & 1) == 0 )
  {
    sub_1C32C20(&Method_BattleLogicFunction__getTargetids_b__59_0__);
    sub_1C32C20(&Target_BattleTargetArgs_TypeInfo);
    sub_1C32C20(&Method_System_Linq_Enumerable_ToArray_int___);
    sub_1C32C20(&Method_System_Linq_Enumerable_Where_int___);
    sub_1C32C20(&System_Func_int__bool__TypeInfo);
    byte_4C3A979 = 1;
  }
  args = (Target_BattleTargetArgs_o *)sub_1C32E6C(Target_BattleTargetArgs_TypeInfo);
  Target_BattleTargetArgs___ctor(args, dataVals, 0);
  if ( !mainAction )
    sub_1C32E7C(v10);
  data = this->fields.data;
  actorId = mainAction->fields.actorId;
  targetId = mainAction->fields.targetId;
  PTTargetId = BattleActionData__getPTTargetId(mainAction, 0);
  TargetIds_40355556 = (System_Collections_Generic_IEnumerable_TSource__o *)Target__getTargetIds_40355556(
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
  v16 = (System_Func_int__bool__o *)sub_1C32E6C(System_Func_int__bool__TypeInfo);
  System_Func_int__bool____ctor(v16, (Il2CppObject *)this, Method_BattleLogicFunction__getTargetids_b__59_0__, 0);
  v17 = System_Linq_Enumerable__Where_int_(
          TargetIds_40355556,
          (System_Func_TSource__bool__o *)v16,
          (const MethodInfo_3123600 *)Method_System_Linq_Enumerable_Where_int___);
  return System_Linq_Enumerable__ToArray_int_(
           v17,
           (const MethodInfo_311C8F4 *)Method_System_Linq_Enumerable_ToArray_int___);
}


BattleFieldEnvironmentData_o *BattleLogicFunction__get_FieldEnvData(
        BattleLogicFunction_o *this,
        const MethodInfo *method)
{
  struct BattleData_o *data; // x8

  data = this->fields.data;
  if ( !data )
    sub_1C32E7C(this);
  return data->fields._FieldEnvData_k__BackingField;
}


System_Int32_array *BattleLogicFunction__get_IgnoreResistFuncIndividuality(
        BattleLogicFunction_o *this,
        const MethodInfo *method)
{
  CGThumbnailListItem_o *p_ignoreResistFuncIndividuality; // x19
  System_Int32_array *ValueArray; // x20
  struct System_Int32_array *ignoreResistFuncIndividuality; // t1
  Il2CppObject *Master_object; // x20
  long double inited; // q0
  _QWORD *v8; // x21
  __int64 v9; // x8
  __int64 v10; // x0
  __int64 v11; // x0
  int32_t v12; // w2
  const MethodInfo *v13; // x3

  if ( (byte_4C3A971 & 1) == 0 )
  {
    sub_1C32C20(&Method_System_Array_Empty_int___);
    sub_1C32C20(&Method_DataManager_GetMaster_ConstantStrMaster___);
    sub_1C32C20(&DataManager_TypeInfo);
    sub_1C32C20(&StringLiteral_7431/*"IGNORE_RESIST_FUNC_INDIVIDUALITY"*/);
    byte_4C3A971 = 1;
  }
  ignoreResistFuncIndividuality = this->fields.ignoreResistFuncIndividuality;
  p_ignoreResistFuncIndividuality = (CGThumbnailListItem_o *)&this->fields.ignoreResistFuncIndividuality;
  ValueArray = ignoreResistFuncIndividuality;
  if ( !ignoreResistFuncIndividuality )
  {
    if ( !DataManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
    Master_object = DataManager__GetMaster_object_((const MethodInfo_30DD39C *)Method_DataManager_GetMaster_ConstantStrMaster___);
    v8 = Method_System_Array_Empty_int___;
    v9 = *((_QWORD *)Method_System_Array_Empty_int___ + 7);
    if ( !v9 )
    {
      sub_1C83390(Method_System_Array_Empty_int___);
      v9 = v8[7];
    }
    v10 = *(_QWORD *)(v9 + 16);
    if ( (*(_BYTE *)(v10 + 309) & 1) == 0 )
      v10 = sub_1C83334(inited);
    if ( !*(_DWORD *)(v10 + 224) )
      inited = j_il2cpp_runtime_class_init_0(v10);
    v11 = *(_QWORD *)(v8[7] + 16LL);
    if ( (*(_BYTE *)(v11 + 309) & 1) == 0 )
      v11 = sub_1C83334(inited);
    if ( !Master_object )
      sub_1C32E7C(v11);
    ValueArray = ConstantStrMaster__GetValueArray(
                   (ConstantStrMaster_o *)Master_object,
                   (System_String_o *)StringLiteral_7431/*"IGNORE_RESIST_FUNC_INDIVIDUALITY"*/,
                   **(System_Int32_array ***)(v11 + 184),
                   0);
    p_ignoreResistFuncIndividuality->klass = (CGThumbnailListItem_c *)ValueArray;
    sub_1C32BC4(p_ignoreResistFuncIndividuality, (int32_t)ValueArray, v12, v13);
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
    sub_1C32E7C(this);
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
    sub_1C32E7C(this);
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
    sub_1C32E7C(this);
  return !DataVals__IsEvenIfWinDie(baseVals, 0) && BattleLogicFunction__IsSafeWin(this, targetId, v6);
}


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
        sub_1C32E84(this);
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
    sub_1C32E7C(this);
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
  BattleData_o *data; // x0
  BattleServantData_o *ServantData; // x29
  int32_t v22; // w2
  const MethodInfo *v23; // x3
  BattleData_o *v24; // x8
  UnityEngine_Object_o *v25; // x24
  BattleLogicFunction_ProcListInArgs_o *v26; // x24
  WeightRate_int__o *v27; // x22
  int max_length; // w8
  unsigned int v29; // w26
  Il2CppClass **v30; // x8
  DataVals_o *v31; // x23
  int32_t ActSetWeight; // w25
  int32_t Random; // w0
  int32_t actSetId; // w0
  System_Object_array *funcUnitArray_k__BackingField; // x21
  BattleLogicFunction___c_c *v36; // x0
  System_Func_object__bool__o *_9__45_0; // x22
  Il2CppObject *v38; // x23
  struct BattleLogicFunction___c_StaticFields *static_fields; // x0
  int32_t v40; // w2
  const MethodInfo *v41; // x3
  System_Collections_Generic_IEnumerable_TSource__o *v42; // x21
  BattleLogicFunction___c_c *v43; // x0
  System_Func_object__bool__o *_9__45_1; // x22
  Il2CppObject *v45; // x23
  struct BattleLogicFunction___c_StaticFields *v46; // x0
  int32_t v47; // w2
  const MethodInfo *v48; // x3
  _BOOL4 matched; // w0
  _BOOL4 v50; // w21
  BattleLogicFunction_Fields *v51; // x22
  bool IsIgnoreValueUp; // w0
  BattleData_o *v53; // x21
  SkillValueUpApplierPlayerMaster_o *v54; // x23
  struct BattleLogicFunctionProcess_FunctionUnitCheck_array *v55; // x25
  int v56; // w8
  unsigned int v57; // w23
  Il2CppClass **v58; // x8
  BattleLogicFunctionProcess_FunctionUnitCheck_o *v59; // x21
  DataVals_o *dataVals_k__BackingField; // x28
  const MethodInfo *v61; // x3
  const MethodInfo *v62; // x4
  BattleLogicFunction___c_c *v63; // x0
  System_Collections_Generic_IEnumerable_TSource__o *funcTargetArray_k__BackingField; // x21
  System_Func_object__bool__o *_9__45_2; // x26
  Il2CppObject *v66; // x27
  struct BattleLogicFunction___c_StaticFields *v67; // x0
  int32_t v68; // w2
  const MethodInfo *v69; // x3
  System_Collections_Generic_IEnumerable_TSource__o *v70; // x0
  BattleLogicFunction___c_c *v71; // x8
  System_Collections_Generic_IEnumerable_TSource__o *v72; // x21
  System_Func_object__int__o *_9__45_3; // x26
  Il2CppObject *v74; // x27
  struct BattleLogicFunction___c_StaticFields *v75; // x0
  int32_t v76; // w2
  const MethodInfo *v77; // x3
  System_Collections_Generic_IEnumerable_TSource__o *v78; // x0
  System_Int32_array *v79; // x21
  bool v80; // w26
  BattleLogicFunction_PreAttackSideEffectMakeArgument_o *v81; // x27
  BattleLogicFunction_SideEffectMakeArgument_o *v82; // x0
  const MethodInfo *v83; // x5
  struct BattleLogicFunctionProcess_FunctionTargetCheck_array *v84; // x25
  int v85; // w8
  unsigned int v86; // w23
  BattleLogicFunctionProcess_FunctionTargetCheck_o *v87; // x21
  BattleLogicFunction_FuncSideEffectFunctionArgument_o *FuncSideEffectArg; // x0
  int32_t targetId_k__BackingField; // w26
  BattleServantData_o *v90; // x27
  const MethodInfo *v91; // x7
  BattleActionData_o *NoEffectObject; // x0
  int32_t *v93; // x20
  struct System_Int32_array *vals; // x8
  int32_t commandType; // w8
  BattleActionData_o *v96; // x0
  bool v97; // w0
  const MethodInfo *v98; // x5
  const MethodInfo *v99; // x3
  int32_t uniqueId; // w22
  bool isSafeDamage; // w0
  int32_t v102; // w2
  const MethodInfo *v103; // x7
  const MethodInfo *v104; // x7
  int32_t actorId; // w1
  int32_t v106; // w2
  int32_t v107; // w5
  bool isDamage; // w0
  int v109; // w9
  int v110; // w8
  int32_t v111; // w1
  struct System_Int32_array *items; // x8
  _QWORD *v113; // x9
  __int64 size; // x10
  BattleActionData_o *v115; // x0
  const MethodInfo *v116; // x4
  BattleData_o *v117; // x20
  BattleLogicFunction_o *v118; // x0
  const MethodInfo *v119; // x6
  BattleData_o *v120; // x21
  const MethodInfo *v121; // x7
  DataVals_o *v122; // x20
  bool isUnaffected; // w22
  int32_t v124; // w21
  const MethodInfo *v125; // x7
  BattleLogicFunction_o *v126; // x0
  int32_t v127; // w22
  const MethodInfo *v128; // x6
  BattleActionData_BuffData_o *v129; // x21
  int32_t Value; // w0
  BattleLogicFunction_o *v131; // x0
  int32_t v132; // w22
  const MethodInfo *v133; // x6
  int32_t v134; // w21
  System_Int32_array *v135; // x22
  int32_t v136; // w0
  _BOOL8 v137; // x0
  const MethodInfo *v138; // x6
  const MethodInfo *v139; // x7
  int32_t v140; // w2
  BattleActionData_BuffData_o *v141; // x0
  int32_t v142; // w21
  System_Int32_array *TargetList; // x22
  int32_t v144; // w0
  const MethodInfo *v145; // x6
  int32_t v146; // w2
  bool v147; // w8
  FunctionEntity_o *v148; // x1
  BattleActionData_BuffData_o *FunctionObject; // x1
  BattleActionData_o *v150; // x0
  BattleActionData_o *v151; // x0
  const MethodInfo *v152; // x3
  int32_t v153; // w21
  bool v154; // w6
  BattleActionData_o *v155; // x0
  bool v156; // w8
  BattleLogicFunction_o *v157; // x0
  int32_t v158; // w1
  int32_t v159; // w1
  BattleLogicFunction_o *v160; // x0
  FunctionEntity_o *v161; // x3
  int32_t v162; // w5
  bool v163; // w6
  BattleLogicFunctionProcess_FunctionUnitCheck_o *v164; // x8
  int32_t v165; // w2
  DataVals_o *v166; // x4
  bool v167; // w7
  const MethodInfo *v168; // x7
  const MethodInfo *v169; // x7
  const MethodInfo *v170; // x6
  int32_t v171; // w1
  FunctionEntity_o *v172; // x2
  DataVals_o *v173; // x3
  int32_t v174; // w4
  const MethodInfo *v175; // x5
  BattleLogicFunction_o *v176; // x20
  BattleActionData_o *v177; // x0
  FunctionEntity_o *v178; // x1
  FunctionEntity_o *v179; // x3
  MethodInfo *v180; // x4
  const MethodInfo *v181; // x6
  int32_t applyTarget; // w8
  FunctionEntity_o *v183; // x2
  const MethodInfo *v184; // x6
  const MethodInfo *v185; // x5
  BattleActionData_o *v186; // x0
  FunctionEntity_o *v187; // x2
  const MethodInfo *v188; // x7
  int32_t v189; // w1
  FunctionEntity_o *v190; // x2
  DataVals_o *v191; // x3
  int32_t v192; // w4
  const MethodInfo *v193; // x5
  BattleActionData_o *v194; // x0
  FunctionEntity_o *v195; // x3
  int32_t v196; // w5
  const MethodInfo *v197; // x6
  _BOOL8 v198; // x0
  FunctionEntity_o *v199; // x2
  int32_t v200; // w4
  const MethodInfo *v201; // x5
  const MethodInfo *v202; // x3
  int32_t v203; // w21
  int32_t v204; // w22
  char v205; // w5
  const MethodInfo *v206; // x7
  BattleLogicFunction_o *v207; // x0
  int32_t v208; // w1
  int32_t v209; // w2
  int32_t v210; // w2
  const MethodInfo *v211; // x3
  struct BattleData_o *v212; // x8
  struct BattleCommandData_array *draw_commandlist; // x1
  int v214; // w22
  bool v215; // w21
  BattleServantSnapShotOnBuffUpdate_o *v216; // x20
  System_Int32_array *v217; // x0
  int32_t v218; // w22
  Generator_BGMFromChangeBGMFunc_o *v219; // x21
  float BgmFadeTime; // s0
  const MethodInfo *v221; // x4
  const MethodInfo *v222; // x6
  System_Int32_array *v223; // x21
  int32_t SameIndiualityBuffSum; // w0
  int32_t totalCriticalStars; // w21
  int32_t Value2; // w0
  int32_t v227; // w20
  int CorrectedValueFuncGainNp; // w21
  BattleLogicFunction_o *v229; // x0
  int32_t v230; // w20
  const MethodInfo *v231; // x6
  BattleActionData_BuffData_o *v232; // x21
  bool v233; // w4
  int32_t v234; // w2
  DataVals_o *v235; // x3
  BattleActionData_BuffData_o *v236; // x6
  const MethodInfo *v237; // x7
  int32_t v238; // w1
  int32_t v239; // w2
  int32_t v240; // w5
  const MethodInfo *v241; // x4
  const MethodInfo *v242; // x4
  _BOOL8 v243; // x0
  const MethodInfo *v244; // x3
  bool v245; // w21
  int32_t v246; // w22
  const MethodInfo *v247; // x3
  BattleLogicFunction_o *v248; // x0
  bool v249; // w2
  DataVals_o *v250; // x1
  _BOOL8 updated; // x0
  const MethodInfo *v252; // x6
  BattleActionData_MasterBuffData_o *v253; // x20
  Generator_BGFromQuickChangeBGFunc_o *v254; // x21
  const MethodInfo *v255; // x3
  const MethodInfo *v256; // x4
  BattleBuffData_o *buffData; // x21
  BattleActionData_UpShiftGaugeData_o *v258; // x21
  const MethodInfo *v259; // x5
  DataVals_o *v260; // x3
  const MethodInfo *v261; // x5
  BattleActionData_o *SubMember; // x0
  const MethodInfo *v263; // x3
  const MethodInfo *v264; // x3
  const MethodInfo *v265; // x4
  const MethodInfo *v266; // x3
  _BOOL8 v267; // x0
  const MethodInfo *v268; // x3
  const MethodInfo *v269; // x2
  const MethodInfo *v270; // x2
  const MethodInfo *v271; // x5
  const MethodInfo *v272; // x4
  const MethodInfo *v273; // x4
  int32_t v274; // w0
  const MethodInfo *v275; // x2
  bool v276; // cc
  const MethodInfo *v277; // x3
  const MethodInfo *v278; // x3
  __int64 np; // x21
  int32_t v280; // w2
  const MethodInfo *v281; // x6
  float v282; // s2
  int32_t v283; // w5
  __int64 v284; // x21
  float v285; // s0
  int v286; // w8
  BattleLogicFunction_o *v287; // x0
  int32_t v288; // w20
  const MethodInfo *v289; // x6
  const MethodInfo *v290; // x4
  const MethodInfo *v291; // x4
  UnityEngine_Object_o *perf; // x21
  _BOOL8 v293; // x0
  const MethodInfo *v294; // x3
  _BOOL8 v295; // x0
  const MethodInfo *v296; // x3
  _BOOL8 v297; // x0
  const MethodInfo *v298; // x5
  int32_t v299; // w0
  const MethodInfo *v300; // x2
  int32_t v301; // w0
  const MethodInfo *v302; // x2
  int32_t v303; // w0
  const MethodInfo *v304; // x2
  const MethodInfo *v305; // x3
  const MethodInfo *v306; // x2
  const MethodInfo *v307; // x2
  const MethodInfo *v308; // x6
  struct BattleSkillInfoData_o *skillInfo; // x8
  BattleSkillInfoData_o *v310; // x9
  char v311; // w20
  BattleData_o *v312; // x21
  bool IsNoTargetSkipSkill; // w1
  System_Collections_Generic_List_Enumerator_int__o *v314; // x0
  _BOOL8 v315; // x0
  const MethodInfo *v316; // x3
  bool v317; // w5
  __int64 v318; // x8
  bool v319; // w21
  BattleLogicFunction_AfterAttackSideEffectMakeArgument_o *v320; // x22
  BattleLogicFunction_SideEffectMakeArgument_o *Argument__Init; // x0
  const MethodInfo *v322; // x5
  BattleData_o *v323; // x21
  BattleCommandData_o *v324; // x22
  UnityEngine_Object_o *v325; // x23
  struct System_Threading_CancellationTokenSource_o *m_CancellationTokenSource; // x8
  unsigned __int64 v327; // x23
  UnityEngine_Object_o *v328; // x21
  int v329; // w8
  BattleData_o *v330; // x21
  unsigned int v331; // w22
  __int64 v332; // x8
  BattleLogicFunction_FuncSideEffectFunctionArgument_o *v333; // x0
  UnityEngine_Object_o *v334; // x21
  UnityEngine_Object_o *v335; // x21
  BattleServantData_o *v336; // x0
  const MethodInfo *overwriteLossHp; // [xsp+0h] [xbp-1A0h]
  int32_t overwriteLossHpa; // [xsp+0h] [xbp-1A0h]
  const MethodInfo *isRandomDamage; // [xsp+8h] [xbp-198h]
  const MethodInfo *v341; // [xsp+18h] [xbp-188h]
  bool isParam; // [xsp+34h] [xbp-16Ch]
  BattleData_o *v343; // [xsp+38h] [xbp-168h]
  BattleSkillInfoData_o *v344; // [xsp+40h] [xbp-160h]
  int32_t subTargetId; // [xsp+48h] [xbp-158h]
  char v346; // [xsp+4Ch] [xbp-154h]
  char v347; // [xsp+50h] [xbp-150h]
  int32_t playerIdb; // [xsp+58h] [xbp-148h]
  int32_t playerId[2]; // [xsp+58h] [xbp-148h]
  bool playerIda; // [xsp+58h] [xbp-148h]
  BattleData_o *playerIdc; // [xsp+58h] [xbp-148h]
  System_Collections_Generic_List_int__o *v352; // [xsp+60h] [xbp-140h]
  SkillValueUpApplierPlayerMaster_o *v353; // [xsp+68h] [xbp-138h]
  struct BattleLogicFunctionProcess_FunctionUnitCheck_array *v354; // [xsp+78h] [xbp-128h]
  char v355; // [xsp+8Ch] [xbp-114h]
  unsigned int v356; // [xsp+94h] [xbp-10Ch]
  BattleLogicFunctionProcess_FunctionUnitCheck_o *funcUnit; // [xsp+98h] [xbp-108h]
  DataMasterBase_TMaster__TEntity__PKType__o *MasterData_object; // [xsp+A0h] [xbp-100h]
  BattleLogicFunction_Fields *p_fields; // [xsp+B0h] [xbp-F0h]
  UseInFsmFuncParam_o *param; // [xsp+B8h] [xbp-E8h]
  int32_t index; // [xsp+C4h] [xbp-DCh]
  int32_t *p_funcType; // [xsp+C8h] [xbp-D8h]
  FunctionEntity_o *funcEnt; // [xsp+D8h] [xbp-C8h]
  System_Collections_Generic_List_Enumerator_int__o v366; // [xsp+E8h] [xbp-B8h] BYREF
  System_Collections_Generic_List_Enumerator_int__o v367; // [xsp+100h] [xbp-A0h] BYREF
  System_Collections_Generic_HashSet_BattleBuffData_BuffData__o *buffsToRemove; // [xsp+118h] [xbp-88h] BYREF
  int32_t absorptionCount; // [xsp+124h] [xbp-7Ch] BYREF
  RemovedBuffInfo_o *subBuffInfo; // [xsp+128h] [xbp-78h] BYREF
  Il2CppObject *entity; // [xsp+130h] [xbp-70h] BYREF
  int32_t funcIndex; // [xsp+13Ch] [xbp-64h] BYREF

  if ( (byte_4C3A974 & 1) == 0 )
  {
    sub_1C32C20(&BattleLogicFunction_AfterAttackSideEffectMakeArgument_TypeInfo);
    sub_1C32C20(&Generator_BGFromQuickChangeBGFunc_TypeInfo);
    sub_1C32C20(&Generator_BGMFromChangeBGMFunc_TypeInfo);
    sub_1C32C20(&Method_BasicHelper_Any_BattleLogicFunctionProcess_FunctionUnitCheck___);
    sub_1C32C20(&BattleCommandData_TypeInfo);
    sub_1C32C20(&BattleServantSnapShotOnBuffUpdate_TypeInfo);
    sub_1C32C20(&Method_DataManager_GetMasterData_BuffMaster___);
    sub_1C32C20(&Method_DataManager_GetMasterData_SkillMaster___);
    sub_1C32C20(&Method_DataMasterBase_BuffMaster__BuffEntity__int__GetEntity__);
    sub_1C32C20(&Method_DataMasterBase_SkillMaster__SkillEntity__int__TryGetEntity__);
    sub_1C32C20(&BattleActionData_DownShiftGaugeData_TypeInfo);
    sub_1C32C20(&Method_System_Linq_Enumerable_All_BattleLogicFunctionProcess_FunctionUnitCheck___);
    sub_1C32C20(&Method_System_Linq_Enumerable_Select_BattleLogicFunctionProcess_FunctionTargetCheck__int___);
    sub_1C32C20(&Method_System_Linq_Enumerable_ToArray_int___);
    sub_1C32C20(&Method_System_Linq_Enumerable_Where_BattleLogicFunctionProcess_FunctionTargetCheck___);
    sub_1C32C20(&Method_System_Collections_Generic_List_Enumerator_int__Dispose__);
    sub_1C32C20(&Method_System_Collections_Generic_List_Enumerator_int__MoveNext__);
    sub_1C32C20(&Method_System_Collections_Generic_List_Enumerator_int__get_Current__);
    sub_1C32C20(&System_Func_BattleLogicFunctionProcess_FunctionUnitCheck__bool__TypeInfo);
    sub_1C32C20(&System_Func_BattleLogicFunctionProcess_FunctionTargetCheck__int__TypeInfo);
    sub_1C32C20(&System_Func_BattleLogicFunctionProcess_FunctionTargetCheck__bool__TypeInfo);
    sub_1C32C20(&Method_System_Collections_Generic_HashSet_BattleBuffData_BuffData__get_Count__);
    sub_1C32C20(&Method_System_Collections_Generic_List_int__Add__);
    sub_1C32C20(&Method_System_Collections_Generic_List_int__GetEnumerator__);
    sub_1C32C20(&Method_System_Collections_Generic_List_int___ctor__);
    sub_1C32C20(&System_Collections_Generic_List_int__TypeInfo);
    sub_1C32C20(&BattleActionData_MasterBuffData_TypeInfo);
    sub_1C32C20(&System_Math_TypeInfo);
    sub_1C32C20(&Method_System_Nullable_bool__GetValueOrDefault__);
    sub_1C32C20(&Method_System_Nullable_bool___ctor__);
    sub_1C32C20(&UnityEngine_Object_TypeInfo);
    sub_1C32C20(&BattleLogicFunction_PreAttackSideEffectMakeArgument_TypeInfo);
    sub_1C32C20(&BattleLogicFunction_ProcListInArgs_TypeInfo);
    sub_1C32C20(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_1C32C20(&SkillValueUpApplierPlayerMaster_TypeInfo);
    sub_1C32C20(&Method_BattleLogicFunction___c__procList_b__45_0__);
    sub_1C32C20(&Method_BattleLogicFunction___c__procList_b__45_1__);
    sub_1C32C20(&Method_BattleLogicFunction___c__procList_b__45_2__);
    sub_1C32C20(&Method_BattleLogicFunction___c__procList_b__45_3__);
    sub_1C32C20(&BattleLogicFunction___c_TypeInfo);
    sub_1C32C20(&BattleActionData_UpShiftGaugeData_TypeInfo);
    sub_1C32C20(&Method_WeightRate_int___ctor__);
    sub_1C32C20(&Method_WeightRate_int__getCount__);
    sub_1C32C20(&Method_WeightRate_int__getData__);
    sub_1C32C20(&Method_WeightRate_int__getTotalWeight__);
    sub_1C32C20(&Method_WeightRate_int__setWeight__);
    sub_1C32C20(&WeightRate_int__TypeInfo);
    byte_4C3A974 = 1;
  }
  funcIndex = 0;
  subBuffInfo = 0;
  entity = 0;
  absorptionCount = 0;
  buffsToRemove = 0;
  memset(&v367, 0, sizeof(v367));
  data = this->fields.data;
  p_fields = &this->fields;
  if ( !action )
    goto LABEL_506;
  if ( !data )
    goto LABEL_506;
  ServantData = BattleData__getServantData(data, action->fields.actorId, 0);
  BattleActionData__getPTTargetId(action, 0);
  data = (BattleData_o *)BattleActionData__getPTSubTargetId(action, 0);
  subTargetId = (int)data;
  v24 = p_fields->data;
  if ( !p_fields->data )
    goto LABEL_506;
  v24->fields.beforeAction = action;
  sub_1C32BC4((CGThumbnailListItem_o *)&v24->fields.beforeAction, (int32_t)action, v22, v23);
  v352 = (System_Collections_Generic_List_int__o *)sub_1C32E6C(System_Collections_Generic_List_int__TypeInfo);
  System_Collections_Generic_List_int____ctor(
    v352,
    (const MethodInfo_377AF44 *)Method_System_Collections_Generic_List_int___ctor__);
  data = (BattleData_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39E2904 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !data )
    goto LABEL_506;
  MasterData_object = (DataMasterBase_TMaster__TEntity__PKType__o *)DataManager__GetMasterData_object_(
                                                                      (DataManager_o *)data,
                                                                      (const MethodInfo_30DD3F0 *)Method_DataManager_GetMasterData_BuffMaster___);
  if ( isReduceReset )
  {
    v25 = (UnityEngine_Object_o *)this->fields.logic;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    if ( UnityEngine_Object__op_Inequality(v25, 0, 0) )
    {
      data = (BattleData_o *)this->fields.logic;
      if ( !data )
        goto LABEL_506;
      BattleLogic__resetReducedHpAll((BattleLogic_o *)data, 0);
    }
  }
  v26 = (BattleLogicFunction_ProcListInArgs_o *)sub_1C32E6C(BattleLogicFunction_ProcListInArgs_TypeInfo);
  BattleLogicFunction_ProcListInArgs___ctor(v26, argument, action, 0);
  if ( !v26 )
    goto LABEL_506;
  BattleLogicFunction_ProcListInArgs__set_IsCommandSideEffect(v26, isCommandSideEffect, 0);
  BattleLogicFunction_ProcListInArgs__set_IsShift(v26, isShift, 0);
  BattleLogicFunction_ProcListInArgs__set_IsPassive(v26, passive, 0);
  v26->fields._IsTreasureDvc_k__BackingField = isTreasureDvc;
  if ( BattleLogicFunction_ProcListInArgs__get_SkillId(v26, 0) <= 0 )
    BattleLogicFunction_ProcListInArgs__set_SkillId(v26, skillId, 0);
  funcIndex = 0;
  BattleLogicFunction_ProcListInArgs__initFunctionUnitCheck(
    v26,
    this,
    functionlist,
    baseValslist,
    &funcIndex,
    action,
    0);
  v26->fields.actSetId = 0;
  v27 = (WeightRate_int__o *)sub_1C32E6C(WeightRate_int__TypeInfo);
  WeightRate_int____ctor(v27, (const MethodInfo_3B8A1D4 *)Method_WeightRate_int___ctor__);
  if ( !baseValslist )
    goto LABEL_506;
  max_length = baseValslist->max_length;
  if ( max_length >= 1 )
  {
    v29 = 0;
    while ( v29 < max_length )
    {
      v30 = &baseValslist->obj.klass + (int)v29;
      v31 = (DataVals_o *)v30[4];
      if ( !v31 )
        goto LABEL_506;
      DataVals__loadActSet((DataVals_o *)v30[4], 0);
      data = (BattleData_o *)DataVals__checkActSet(v31, 0);
      if ( ((unsigned __int8)data & 1) != 0 )
      {
        data = (BattleData_o *)DataVals__getActSetWeight(v31, 0);
        if ( (int)data >= 1 )
        {
          ActSetWeight = DataVals__getActSetWeight(v31, 0);
          data = (BattleData_o *)DataVals__getActSet(v31, 0);
          if ( !v27 )
            goto LABEL_506;
          WeightRate_int___setWeight(
            v27,
            ActSetWeight,
            (int32_t)data,
            (const MethodInfo_3B896F0 *)Method_WeightRate_int__setWeight__);
        }
      }
      max_length = baseValslist->max_length;
      if ( (int)++v29 >= max_length )
        goto LABEL_26;
    }
LABEL_507:
    sub_1C32E84(data);
  }
LABEL_26:
  if ( !v27 )
    goto LABEL_506;
  if ( WeightRate_int___getCount(v27, (const MethodInfo_3B89AAC *)Method_WeightRate_int__getCount__) <= 0 )
  {
    actSetId = v26->fields.actSetId;
  }
  else
  {
    Random = BattleRandom__getRandom(0, v27->fields.totalweight, 0);
    actSetId = WeightRate_int___getData(v27, Random, (const MethodInfo_3B89B64 *)Method_WeightRate_int__getData__);
    v26->fields.actSetId = actSetId;
  }
  action->fields.ActSetId = actSetId;
  BattleActionData__initFuncTargetPlayerType(action, funcIndex, 0);
  funcUnitArray_k__BackingField = (System_Object_array *)v26->fields._funcUnitArray_k__BackingField;
  v36 = BattleLogicFunction___c_TypeInfo;
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
    v38 = (Il2CppObject *)v36->static_fields->__9;
    _9__45_0 = (System_Func_object__bool__o *)sub_1C32E6C(System_Func_BattleLogicFunctionProcess_FunctionUnitCheck__bool__TypeInfo);
    System_Func_object__bool____ctor(_9__45_0, v38, Method_BattleLogicFunction___c__procList_b__45_0__, 0);
    static_fields = BattleLogicFunction___c_TypeInfo->static_fields;
    static_fields->__9__45_0 = (struct System_Func_BattleLogicFunctionProcess_FunctionUnitCheck__bool__o *)_9__45_0;
    sub_1C32BC4((CGThumbnailListItem_o *)&static_fields->__9__45_0, (int32_t)_9__45_0, v40, v41);
  }
  if ( !BasicHelper__Any_object__51144764(
          funcUnitArray_k__BackingField,
          (System_Func_T__bool__o *)_9__45_0,
          (const MethodInfo_30C683C *)Method_BasicHelper_Any_BattleLogicFunctionProcess_FunctionUnitCheck___) )
    action->fields.isSuccessTargetSelection = 1;
  v42 = (System_Collections_Generic_IEnumerable_TSource__o *)v26->fields._funcUnitArray_k__BackingField;
  v43 = BattleLogicFunction___c_TypeInfo;
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
    v45 = (Il2CppObject *)v43->static_fields->__9;
    _9__45_1 = (System_Func_object__bool__o *)sub_1C32E6C(System_Func_BattleLogicFunctionProcess_FunctionUnitCheck__bool__TypeInfo);
    System_Func_object__bool____ctor(_9__45_1, v45, Method_BattleLogicFunction___c__procList_b__45_1__, 0);
    v46 = BattleLogicFunction___c_TypeInfo->static_fields;
    v46->__9__45_1 = (struct System_Func_BattleLogicFunctionProcess_FunctionUnitCheck__bool__o *)_9__45_1;
    sub_1C32BC4((CGThumbnailListItem_o *)&v46->__9__45_1, (int32_t)_9__45_1, v47, v48);
  }
  action->fields.isSkillCopyFunctionOnly = System_Linq_Enumerable__All_object_(
                                             v42,
                                             (System_Func_TSource__bool__o *)_9__45_1,
                                             (const MethodInfo_30E78A0 *)Method_System_Linq_Enumerable_All_BattleLogicFunctionProcess_FunctionUnitCheck___);
  v355 = 1;
  matched = BattleLogicFunction_ProcListInArgs__MatchSkillType(v26, 1, 0);
  if ( matched )
  {
    v50 = matched;
    data = (BattleData_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39E2904 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    v51 = &this->fields;
    if ( !data )
      goto LABEL_506;
    data = (BattleData_o *)DataManager__GetMasterData_object_(
                             (DataManager_o *)data,
                             (const MethodInfo_30DD3F0 *)Method_DataManager_GetMasterData_SkillMaster___);
    if ( !data )
      goto LABEL_506;
    if ( DataMasterBase_object__object__int___TryGetEntity(
           (DataMasterBase_TMaster__TEntity__PKType__o *)data,
           &entity,
           skillId,
           (const MethodInfo_3396884 *)Method_DataMasterBase_SkillMaster__SkillEntity__int__TryGetEntity__) )
    {
      data = (BattleData_o *)entity;
      if ( !entity )
        goto LABEL_506;
      IsIgnoreValueUp = SkillEntity__IsIgnoreValueUp((SkillEntity_o *)entity, 0);
    }
    else
    {
      IsIgnoreValueUp = 0;
    }
    v353 = 0;
    v355 = 1;
    if ( !IsIgnoreValueUp && v50 )
    {
      v53 = p_fields->data;
      v54 = (SkillValueUpApplierPlayerMaster_o *)sub_1C32E6C(SkillValueUpApplierPlayerMaster_TypeInfo);
      SkillValueUpApplierPlayerMaster___ctor(v54, v53, 0);
      if ( v54 )
      {
        v353 = v54;
        ((void (__fastcall *)(SkillValueUpApplierPlayerMaster_o *, const MethodInfo *))v54->klass->vtable._4_Init.methodPtr)(
          v54,
          v54->klass->vtable._4_Init.method);
        v355 = 0;
      }
      else
      {
        v353 = 0;
        v355 = 1;
      }
    }
  }
  else
  {
    v51 = &this->fields;
    v353 = 0;
  }
  BattleActionData__UpdateTargetRangeOfTreasureDevice(
    action,
    v51->data,
    action,
    v26->fields._funcUnitArray_k__BackingField,
    0);
  v55 = v26->fields._funcUnitArray_k__BackingField;
  if ( !v55 )
    goto LABEL_506;
  v56 = v55->max_length;
  if ( v56 >= 1 )
  {
    v57 = 0;
    v343 = 0;
    v344 = 0;
    v346 = 0;
    v347 = 0;
    v354 = v26->fields._funcUnitArray_k__BackingField;
    while ( 1 )
    {
      if ( v57 >= v56 )
        goto LABEL_507;
      v58 = &v55->obj.klass + (int)v57;
      v59 = (BattleLogicFunctionProcess_FunctionUnitCheck_o *)v58[4];
      if ( !v59 )
        goto LABEL_506;
      data = (BattleData_o *)BattleLogicFunctionProcess_FunctionUnitCheck__get_FuncIndex(
                               (BattleLogicFunctionProcess_FunctionUnitCheck_o *)v58[4],
                               0);
      dataVals_k__BackingField = v59->fields._dataVals_k__BackingField;
      index = (int)data;
      if ( !dataVals_k__BackingField )
        goto LABEL_506;
      funcEnt = dataVals_k__BackingField->fields.funcEnt;
      funcUnit = v59;
      data = (BattleData_o *)BattleLogicFunctionProcess_FunctionUnitCheck__checkCondtion(v59, action, 0);
      if ( ((unsigned __int8)data & 1) != 0 )
      {
        if ( (v355 & 1) == 0 )
          ((void (__fastcall *)(SkillValueUpApplierPlayerMaster_o *, BattleLogicFunctionProcess_FunctionUnitCheck_o *, const MethodInfo *))v353->klass->vtable._5_ApplyTo.methodPtr)(
            v353,
            v59,
            v353->klass->vtable._5_ApplyTo.method);
        data = (BattleData_o *)UseInFsmFuncParam__Make(dataVals_k__BackingField, 0);
        param = (UseInFsmFuncParam_o *)data;
        if ( isCreateSideEffect )
        {
          if ( !funcEnt )
            goto LABEL_506;
          data = (BattleData_o *)BattleLogicFunction__IsAttackSideEffectInvokeFunc(
                                   (BattleLogicFunction_o *)data,
                                   funcEnt->fields.funcType,
                                   dataVals_k__BackingField,
                                   v61);
          if ( ((unsigned __int8)data & 1) != 0 )
          {
            v63 = BattleLogicFunction___c_TypeInfo;
            funcTargetArray_k__BackingField = (System_Collections_Generic_IEnumerable_TSource__o *)v59->fields._funcTargetArray_k__BackingField;
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
              v66 = (Il2CppObject *)v63->static_fields->__9;
              _9__45_2 = (System_Func_object__bool__o *)sub_1C32E6C(System_Func_BattleLogicFunctionProcess_FunctionTargetCheck__bool__TypeInfo);
              System_Func_object__bool____ctor(_9__45_2, v66, Method_BattleLogicFunction___c__procList_b__45_2__, 0);
              v67 = BattleLogicFunction___c_TypeInfo->static_fields;
              v67->__9__45_2 = (struct System_Func_BattleLogicFunctionProcess_FunctionTargetCheck__bool__o *)_9__45_2;
              sub_1C32BC4((CGThumbnailListItem_o *)&v67->__9__45_2, (int32_t)_9__45_2, v68, v69);
            }
            v70 = System_Linq_Enumerable__Where_object_(
                    funcTargetArray_k__BackingField,
                    (System_Func_TSource__bool__o *)_9__45_2,
                    (const MethodInfo_3123BA8 *)Method_System_Linq_Enumerable_Where_BattleLogicFunctionProcess_FunctionTargetCheck___);
            v71 = BattleLogicFunction___c_TypeInfo;
            v72 = v70;
            if ( !BattleLogicFunction___c_TypeInfo->_2.cctor_finished )
            {
              j_il2cpp_runtime_class_init_0(BattleLogicFunction___c_TypeInfo);
              v71 = BattleLogicFunction___c_TypeInfo;
            }
            _9__45_3 = (System_Func_object__int__o *)v71->static_fields->__9__45_3;
            if ( !_9__45_3 )
            {
              if ( !v71->_2.cctor_finished )
              {
                j_il2cpp_runtime_class_init_0(v71);
                v71 = BattleLogicFunction___c_TypeInfo;
              }
              v74 = (Il2CppObject *)v71->static_fields->__9;
              _9__45_3 = (System_Func_object__int__o *)sub_1C32E6C(System_Func_BattleLogicFunctionProcess_FunctionTargetCheck__int__TypeInfo);
              System_Func_object__int____ctor(_9__45_3, v74, Method_BattleLogicFunction___c__procList_b__45_3__, 0);
              v75 = BattleLogicFunction___c_TypeInfo->static_fields;
              v75->__9__45_3 = (struct System_Func_BattleLogicFunctionProcess_FunctionTargetCheck__int__o *)_9__45_3;
              sub_1C32BC4((CGThumbnailListItem_o *)&v75->__9__45_3, (int32_t)_9__45_3, v76, v77);
            }
            v78 = (System_Collections_Generic_IEnumerable_TSource__o *)System_Linq_Enumerable__Select_object__int_(
                                                                         v72,
                                                                         (System_Func_TSource__TResult__o *)_9__45_3,
                                                                         (const MethodInfo_31131E0 *)Method_System_Linq_Enumerable_Select_BattleLogicFunctionProcess_FunctionTargetCheck__int___);
            v79 = System_Linq_Enumerable__ToArray_int_(
                    v78,
                    (const MethodInfo_311C8F4 *)Method_System_Linq_Enumerable_ToArray_int___);
            v80 = FuncList__Check(26, funcEnt->fields.funcType, 0);
            v81 = (BattleLogicFunction_PreAttackSideEffectMakeArgument_o *)sub_1C32E6C(BattleLogicFunction_PreAttackSideEffectMakeArgument_TypeInfo);
            BattleLogicFunction_PreAttackSideEffectMakeArgument___ctor(v81, 0);
            if ( !v81 )
              goto LABEL_506;
            v82 = (BattleLogicFunction_SideEffectMakeArgument_o *)((__int64 (__fastcall *)(BattleLogicFunction_PreAttackSideEffectMakeArgument_o *, System_Int32_array *, const MethodInfo *))v81->klass->vtable._6_Init.methodPtr)(
                                                                    v81,
                                                                    v79,
                                                                    v81->klass->vtable._6_Init.method);
            BattleLogicFunction__setAttackSideEffect(this, action, ServantData, v80 || isTreasureDvc, v82, v83);
            v51 = &this->fields;
          }
        }
        v84 = funcUnit->fields._funcTargetArray_k__BackingField;
        if ( !v84 )
          goto LABEL_506;
        v85 = v84->max_length;
        v356 = v57;
        p_funcType = &funcEnt->fields.funcType;
        if ( v85 >= 1 )
        {
          v86 = 0;
          while ( 1 )
          {
            if ( v86 >= v85 )
              goto LABEL_507;
            v87 = v84->m_Items[v86];
            if ( !v87 )
              goto LABEL_506;
            BattleLogicFunction__SetTargetFuncList(
              this,
              v87->fields._targetId_k__BackingField,
              action,
              dataVals_k__BackingField,
              v62);
            FuncSideEffectArg = BattleLogicFunction_ProcListInArgs__get_FuncSideEffectArg(v26, 0);
            if ( FuncSideEffectArg )
              BattleLogicFunction_FuncSideEffectFunctionArgument__AddTarget(FuncSideEffectArg, v87, 0);
            if ( !v87->fields._result_k__BackingField )
            {
              NoEffectObject = BattleLogicFunctionProcess_FunctionTargetCheck__getInvalidObject(v87, 0);
              goto LABEL_96;
            }
            data = v51->data;
            if ( !v51->data )
              goto LABEL_506;
            targetId_k__BackingField = v87->fields._targetId_k__BackingField;
            data = (BattleData_o *)BattleData__getServantData(data, targetId_k__BackingField, 0);
            if ( !data )
              goto LABEL_506;
            v90 = (BattleServantData_o *)data;
            data = (BattleData_o *)BattleServantData__CheckNotTargetSkill((BattleServantData_o *)data, skillId, 0);
            if ( ((unsigned __int8)data & 1) != 0 )
            {
              NoEffectObject = BattleLogicFunction__getNoEffectObject(
                                 this,
                                 v90->fields.uniqueId,
                                 index,
                                 dataVals_k__BackingField,
                                 isCommandSideEffect,
                                 0,
                                 0,
                                 v91);
LABEL_96:
              BattleActionData__addAction(action, NoEffectObject, 0);
              goto LABEL_152;
            }
            action->fields.funcResult = 1;
            v26->fields.tdCommandTypeChange = -1;
            if ( !funcEnt )
              goto LABEL_506;
            v93 = &funcEnt->fields.funcType;
            data = (BattleData_o *)FuncList__Check(1, *p_funcType, 0);
            if ( ((unsigned __int8)data & 1) != 0
              || (data = (BattleData_o *)FuncList__Check(16, *p_funcType, 0), ((unsigned __int8)data & 1) != 0) )
            {
              vals = funcEnt->fields.vals;
              if ( !vals )
                goto LABEL_506;
              if ( !LODWORD(vals->max_length) )
                goto LABEL_507;
              data = (BattleData_o *)MasterData_object;
              if ( !MasterData_object )
                goto LABEL_506;
              data = (BattleData_o *)DataMasterBase_object__object__int___GetEntity(
                                       MasterData_object,
                                       vals->m_Items[0],
                                       (const MethodInfo_3396838 *)Method_DataMasterBase_BuffMaster__BuffEntity__int__GetEntity__);
              if ( !data )
                goto LABEL_506;
              commandType = 1;
              switch ( HIDWORD(data->fields.m_CachedPtr) )
              {
                case 0x8F:
                  commandType = action->fields.commandType;
                  goto LABEL_110;
                case 0x91:
                  goto LABEL_110;
                case 0x92:
                  commandType = 2;
                  goto LABEL_110;
                case 0x93:
                  commandType = 3;
LABEL_110:
                  v26->fields.tdCommandTypeChange = commandType;
                  break;
                default:
                  break;
              }
              v93 = &funcEnt->fields.funcType;
              v97 = FuncList__Check(16, *p_funcType, 0);
              BattleLogicFunction__functionAddState(this, action, v87, v26, v97, v98);
              goto LABEL_132;
            }
            if ( FuncList__Check(2, *p_funcType, 0) )
            {
              v96 = BattleLogicFunction__functionSubState(
                      this,
                      targetId_k__BackingField,
                      funcEnt,
                      dataVals_k__BackingField,
                      index,
                      isCommandSideEffect,
                      &subBuffInfo,
                      v26,
                      overwriteLossHp);
              goto LABEL_131;
            }
            if ( FuncList__Check(3, *p_funcType, 0) )
            {
              uniqueId = v90->fields.uniqueId;
              playerIdb = action->fields.actorId;
              isSafeDamage = BattleLogicFunction__isSafeDamage(
                               this,
                               dataVals_k__BackingField,
                               targetId_k__BackingField,
                               v99);
              v102 = uniqueId;
              v51 = &this->fields;
              v96 = BattleLogicFunction__functionDamage(
                      this,
                      playerIdb,
                      v102,
                      dataVals_k__BackingField,
                      index,
                      action,
                      isSafeDamage,
                      v103);
              goto LABEL_131;
            }
            if ( FuncList__Check(4, *p_funcType, 0) )
            {
              actorId = action->fields.actorId;
              v106 = v90->fields.uniqueId;
              v107 = 1;
              goto LABEL_130;
            }
            if ( FuncList__Check(14, *p_funcType, 0) )
            {
              actorId = action->fields.actorId;
              v106 = v90->fields.uniqueId;
              v107 = 2;
              goto LABEL_130;
            }
            if ( FuncList__Check(15, *p_funcType, 0) )
            {
              actorId = action->fields.actorId;
              v106 = v90->fields.uniqueId;
              v107 = 3;
              goto LABEL_130;
            }
            if ( FuncList__Check(18, *p_funcType, 0) )
            {
              actorId = action->fields.actorId;
              v106 = v90->fields.uniqueId;
              v107 = 4;
              goto LABEL_130;
            }
            if ( FuncList__Check(27, *p_funcType, 0) )
            {
              actorId = action->fields.actorId;
              v106 = v90->fields.uniqueId;
              v107 = 7;
              goto LABEL_130;
            }
            if ( FuncList__Check(21, *p_funcType, 0) )
            {
              actorId = action->fields.actorId;
              v106 = v90->fields.uniqueId;
              v107 = 5;
              goto LABEL_130;
            }
            if ( FuncList__Check(22, *p_funcType, 0) )
            {
              actorId = action->fields.actorId;
              v106 = v90->fields.uniqueId;
              v107 = 6;
              goto LABEL_130;
            }
            if ( FuncList__Check(28, *p_funcType, 0) )
            {
              actorId = action->fields.actorId;
              v106 = v90->fields.uniqueId;
              v107 = 8;
LABEL_130:
              v96 = BattleLogicFunction__functionNPDamage(
                      this,
                      actorId,
                      v106,
                      dataVals_k__BackingField,
                      index,
                      v107,
                      action,
                      v104);
LABEL_131:
              BattleActionData__addAction(action, v96, 0);
              goto LABEL_132;
            }
            if ( FuncList__Check(5, *p_funcType, 0) )
            {
              v117 = v51->data;
              data = (BattleData_o *)((__int64 (__fastcall *)(BattleLogicFunctionProcess_FunctionTargetCheck_o *, const MethodInfo *))v87->klass->vtable._16_GetCommonBaseValue.methodPtr)(
                                       v87,
                                       v87->klass->vtable._16_GetCommonBaseValue.method);
              if ( !v117 )
                goto LABEL_506;
              BattleData__addCriticalPoint(v117, (int32_t)data, 0);
LABEL_160:
              data = (BattleData_o *)BattleLogicFunction__getFunctionObject(
                                       v118,
                                       funcEnt,
                                       v90->fields.uniqueId,
                                       index,
                                       isCommandSideEffect,
                                       0,
                                       v119);
              if ( !data )
                goto LABEL_506;
              HIDWORD(data->fields.m_CancellationTokenSource) = 4;
              BattleActionData__setBuffData(action, (BattleActionData_BuffData_o *)data, dataVals_k__BackingField, 0);
              data = v51->data;
              if ( !v51->data )
                goto LABEL_506;
              BattleData__AddPerformedVals(data, dataVals_k__BackingField, 0);
              goto LABEL_163;
            }
            if ( FuncList__Check(31, *p_funcType, 0) )
            {
              v120 = v51->data;
              data = (BattleData_o *)DataVals__GetValue(dataVals_k__BackingField, 0);
              if ( !v120 )
                goto LABEL_506;
              BattleData__lossCriticalPoint(v120, (int32_t)data, 0);
              goto LABEL_160;
            }
            if ( FuncList__Check(6, *p_funcType, 0) )
            {
              v96 = BattleLogicFunction__functionGainHp(
                      this,
                      action->fields.actorId,
                      targetId_k__BackingField,
                      funcEnt,
                      dataVals_k__BackingField,
                      index,
                      isCommandSideEffect,
                      -1,
                      overwriteLossHp);
              goto LABEL_131;
            }
            if ( FuncList__Check(17, *p_funcType, 0) )
            {
              v96 = BattleLogicFunction__functionGainHpPer(
                      this,
                      action->fields.actorId,
                      targetId_k__BackingField,
                      funcEnt,
                      dataVals_k__BackingField,
                      index,
                      isCommandSideEffect,
                      v121);
              goto LABEL_131;
            }
            if ( FuncList__Check(7, *p_funcType, 0) )
              break;
            if ( FuncList__Check(8, *p_funcType, 0) )
            {
              if ( !BattleServantData__checkPlayer(v90, 0) )
                goto LABEL_163;
              v122 = dataVals_k__BackingField;
              Value = DataVals__GetValue(dataVals_k__BackingField, 0);
              v131 = (BattleLogicFunction_o *)BattleServantData__addNp(v90, -Value, 0, 0);
              *(_QWORD *)playerId = v90;
              v132 = (int)v131;
              data = (BattleData_o *)BattleLogicFunction__getFunctionObject(
                                       v131,
                                       funcEnt,
                                       v90->fields.uniqueId,
                                       index,
                                       isCommandSideEffect,
                                       0,
                                       v133);
              if ( !data )
                goto LABEL_506;
              v129 = (BattleActionData_BuffData_o *)data;
              HIDWORD(data->fields.m_CancellationTokenSource) = 3;
              BattleActionData_BuffData__setSaveNp((BattleActionData_BuffData_o *)data, v132, 0);
LABEL_180:
              dataVals_k__BackingField = v122;
              BattleActionData__setBuffData(action, v129, v122, 0);
              v51 = &this->fields;
              v93 = &funcEnt->fields.funcType;
              v90 = *(BattleServantData_o **)playerId;
              goto LABEL_132;
            }
            if ( !FuncList__Check(9, *p_funcType, 0) )
            {
              if ( FuncList__Check(10, *p_funcType, 0) )
              {
                v142 = DataVals__GetValue2(dataVals_k__BackingField, 0) - 1;
                TargetList = DataVals__GetTargetList(dataVals_k__BackingField, 0);
                v144 = DataVals__GetValue(dataVals_k__BackingField, 0);
                data = (BattleData_o *)BattleServantData__skillChageExtend(v90, v144, 999, v142, TargetList, 0);
                v146 = v90->fields.uniqueId;
                if ( ((unsigned __int8)data & 1) != 0 )
                  goto LABEL_186;
                v156 = isCommandSideEffect;
                v157 = this;
                v158 = v90->fields.uniqueId;
LABEL_292:
                v233 = v156;
                v234 = index;
                v235 = dataVals_k__BackingField;
                v236 = 0;
LABEL_293:
                v155 = BattleLogicFunction__getNoEffectObject(v157, v158, v234, v235, v233, 0, v236, v125);
LABEL_294:
                BattleActionData__addAction(action, v155, 0);
                goto LABEL_295;
              }
              if ( FuncList__Check(12, *p_funcType, 0) )
              {
                v153 = action->fields.actorId;
                v154 = BattleLogicFunction__isSafeDamage(this, dataVals_k__BackingField, targetId_k__BackingField, v152);
                v155 = BattleLogicFunction__functionlossHp(
                         this,
                         v153,
                         targetId_k__BackingField,
                         funcEnt,
                         dataVals_k__BackingField,
                         index,
                         v154,
                         isCommandSideEffect,
                         -1,
                         1,
                         action,
                         v341);
                goto LABEL_294;
              }
              if ( FuncList__Check(25, *p_funcType, 0) )
              {
                v155 = BattleLogicFunction__functionlossHp(
                         this,
                         action->fields.actorId,
                         targetId_k__BackingField,
                         funcEnt,
                         dataVals_k__BackingField,
                         index,
                         1,
                         isCommandSideEffect,
                         -1,
                         1,
                         action,
                         v341);
                goto LABEL_294;
              }
              if ( FuncList__Check(13, *p_funcType, 0) )
              {
                v159 = action->fields.actorId;
                v161 = funcEnt;
                v160 = this;
                v162 = index;
                v163 = isCommandSideEffect;
                v164 = funcUnit;
                v165 = targetId_k__BackingField;
                v166 = dataVals_k__BackingField;
                v167 = 0;
LABEL_198:
                v155 = BattleLogicFunction__functionInstantDeath(
                         v160,
                         v159,
                         v165,
                         v161,
                         v166,
                         v162,
                         v163,
                         v167,
                         v164,
                         isRandomDamage);
                goto LABEL_294;
              }
              if ( FuncList__Check(19, *p_funcType, 0) )
              {
                v155 = BattleLogicFunction__functionHastenNpTurn(
                         this,
                         targetId_k__BackingField,
                         funcEnt,
                         dataVals_k__BackingField,
                         index,
                         isCommandSideEffect,
                         -1,
                         v168);
                goto LABEL_294;
              }
              if ( FuncList__Check(20, *p_funcType, 0) )
              {
                v155 = BattleLogicFunction__functionDelayNpTurn(
                         this,
                         targetId_k__BackingField,
                         funcEnt,
                         dataVals_k__BackingField,
                         index,
                         isCommandSideEffect,
                         &absorptionCount,
                         v169);
                goto LABEL_294;
              }
              if ( FuncList__Check(56, *p_funcType, 0) )
              {
                v155 = BattleLogicFunction__functionAbsorbNpTurn(
                         this,
                         targetId_k__BackingField,
                         funcEnt,
                         action,
                         v87,
                         isCommandSideEffect,
                         v170);
                goto LABEL_294;
              }
              if ( FuncList__Check(23, *p_funcType, 0) )
              {
                v176 = this;
                v177 = BattleLogicFunction__functionResetCommandCard(this, v171, v172, v173, v174, v175);
                goto LABEL_207;
              }
              if ( FuncList__Check(24, *p_funcType, 0) )
              {
                applyTarget = funcEnt->fields.applyTarget;
                if ( applyTarget == 2 )
                {
                  v155 = BattleLogicFunction__functionReplaceEnemyMember(
                           this,
                           v178,
                           dataVals_k__BackingField,
                           index,
                           v180);
                  goto LABEL_294;
                }
                if ( applyTarget != 1 )
                  goto LABEL_295;
                v176 = this;
                v177 = BattleLogicFunction__functionReplaceMember(
                         this,
                         targetId_k__BackingField,
                         subTargetId,
                         v179,
                         (DataVals_o *)v180,
                         index,
                         v181);
LABEL_207:
                BattleActionData__addAction(action, v177, 0);
                data = v176->fields.data;
                if ( !data )
                  goto LABEL_506;
                BattleData__AddPerformedVals(data, dataVals_k__BackingField, 0);
                goto LABEL_295;
              }
              if ( FuncList__Check(109, *p_funcType, 0) )
              {
                v155 = BattleLogicFunction__functionTransformServant(
                         this,
                         targetId_k__BackingField,
                         v183,
                         dataVals_k__BackingField,
                         index,
                         v26,
                         v184);
                goto LABEL_294;
              }
              if ( FuncList__Check(26, *p_funcType, 0) )
              {
                v186 = BattleLogicFunction__functionReflection(
                         this,
                         action->fields.actorId,
                         v90->fields.uniqueId,
                         dataVals_k__BackingField,
                         index,
                         v185);
                BattleActionData__addAction(action, v186, 0);
                v347 = 1;
                goto LABEL_295;
              }
              if ( FuncList__Check(29, *p_funcType, 0) )
              {
                v155 = BattleLogicFunction__functionCallServant(
                         this,
                         action->fields.actorId,
                         v187,
                         dataVals_k__BackingField,
                         index,
                         isCommandSideEffect,
                         v26,
                         v188);
                goto LABEL_294;
              }
              if ( FuncList__Check(30, *p_funcType, 0) )
              {
                v194 = BattleLogicFunction__functionPtShuffle(this, v189, v190, v191, v192, v193);
                BattleActionData__addAction(action, v194, 0);
                data = this->fields.data;
                if ( !data )
                  goto LABEL_506;
                BattleData__AddPerformedVals(data, dataVals_k__BackingField, 0);
                goto LABEL_223;
              }
              if ( FuncList__Check(32, *p_funcType, 0) )
              {
                v155 = BattleLogicFunction__functionChangeServant(
                         this,
                         action->fields.actorId,
                         targetId_k__BackingField,
                         v195,
                         dataVals_k__BackingField,
                         v196,
                         v197);
                goto LABEL_294;
              }
              v198 = FuncList__Check(33, *p_funcType, 0);
              if ( v198 )
              {
                v155 = BattleLogicFunction__functionChangeBg(
                         (BattleLogicFunction_o *)v198,
                         action->fields.actorId,
                         v199,
                         dataVals_k__BackingField,
                         v200,
                         v201);
                goto LABEL_294;
              }
              if ( FuncList__Check(34, *p_funcType, 0) )
              {
                v203 = action->fields.actorId;
                v204 = v90->fields.uniqueId;
                v205 = BattleLogicFunction__isSafeDamage(this, dataVals_k__BackingField, targetId_k__BackingField, v202);
                v207 = this;
                goto LABEL_230;
              }
              if ( FuncList__Check(122, *p_funcType, 0) )
              {
                v208 = action->fields.actorId;
                v209 = v90->fields.uniqueId;
                v207 = this;
                v205 = 1;
                goto LABEL_233;
              }
              if ( FuncList__Check(35, *p_funcType, 0) )
              {
                v90->fields.isWithdraw = 1;
                goto LABEL_295;
              }
              data = (BattleData_o *)FuncList__Check(36, *p_funcType, 0);
              if ( ((unsigned __int8)data & 1) != 0 )
              {
                v212 = p_fields->data;
                if ( !p_fields->data )
                  goto LABEL_506;
                draw_commandlist = v212->fields.draw_commandlist;
                v212->fields.fixedCommands = draw_commandlist;
                sub_1C32BC4((CGThumbnailListItem_o *)&v212->fields.fixedCommands, (int32_t)draw_commandlist, v210, v211);
                goto LABEL_239;
              }
              if ( FuncList__Check(37, *p_funcType, 0)
                || FuncList__Check(38, *p_funcType, 0)
                || FuncList__Check(39, *p_funcType, 0)
                || FuncList__Check(40, *p_funcType, 0) )
              {
                v214 = DataVals__GetValue(dataVals_k__BackingField, 0);
                if ( FuncList__Check(37, *p_funcType, 0) || FuncList__Check(39, *p_funcType, 0) )
                  v214 = -v214;
                if ( FuncList__Check(37, *p_funcType, 0) || FuncList__Check(38, *p_funcType, 0) )
                {
                  v214 *= 2;
                  playerIda = 1;
                }
                else
                {
                  playerIda = 0;
                }
                isParam = DataVals__isParam(dataVals_k__BackingField, 91, 0);
                v215 = DataVals__isParam(dataVals_k__BackingField, 150, 0);
                v216 = 0;
                if ( v215 )
                {
                  v216 = (BattleServantSnapShotOnBuffUpdate_o *)sub_1C32E6C(BattleServantSnapShotOnBuffUpdate_TypeInfo);
                  BattleServantSnapShotOnBuffUpdate___ctor(v216, v90, 0);
                }
                v217 = DataVals__GetTargetList(dataVals_k__BackingField, 0);
                data = (BattleData_o *)BattleServantData__ChangeBuffValue(
                                         v90,
                                         v214,
                                         v217,
                                         playerIda,
                                         1,
                                         v215,
                                         &buffsToRemove,
                                         isParam,
                                         0);
                if ( ((unsigned __int8)data & 1) != 0 )
                {
                  if ( v215 )
                  {
                    if ( !buffsToRemove )
                      goto LABEL_506;
                    if ( buffsToRemove->fields._count >= 1 )
                    {
                      data = (BattleData_o *)v90->fields.buffData;
                      if ( !data )
                        goto LABEL_506;
                      data = (BattleData_o *)BattleBuffData__SubBuffSpecified(
                                               (BattleBuffData_o *)data,
                                               buffsToRemove,
                                               1,
                                               0);
                      if ( !data )
                        goto LABEL_506;
                      BattleLogicFunction__ApplySubBuffChanges(
                        this,
                        action,
                        (System_Collections_Generic_List_BattleBuffData_BuffData__o *)data->fields.m_CachedPtr,
                        targetId_k__BackingField,
                        v216,
                        dataVals_k__BackingField,
                        index,
                        isCommandSideEffect,
                        v26,
                        isRandomDamage);
                      goto LABEL_295;
                    }
                  }
LABEL_239:
                  v146 = v90->fields.uniqueId;
LABEL_186:
                  v147 = isCommandSideEffect;
                  v148 = funcEnt;
LABEL_187:
                  FunctionObject = BattleLogicFunction__getFunctionObject(
                                     (BattleLogicFunction_o *)data,
                                     v148,
                                     v146,
                                     index,
                                     v147,
                                     0,
                                     v145);
                  v150 = action;
LABEL_188:
                  BattleActionData__setBuffData(v150, FunctionObject, dataVals_k__BackingField, 0);
                  goto LABEL_295;
                }
LABEL_290:
                v158 = v90->fields.uniqueId;
LABEL_291:
                v156 = isCommandSideEffect;
                v157 = this;
                goto LABEL_292;
              }
              if ( FuncList__Check(41, *p_funcType, 0) )
              {
                playerIdc = this->fields.data;
                v218 = DataVals__GetValue(dataVals_k__BackingField, 0);
                v219 = (Generator_BGMFromChangeBGMFunc_o *)sub_1C32E6C(Generator_BGMFromChangeBGMFunc_TypeInfo);
                Generator_BGMFromChangeBGMFunc___ctor(v219, playerIdc, v218, dataVals_k__BackingField, 0, 0);
                BgmFadeTime = DataVals__GetBgmFadeTime(dataVals_k__BackingField, 0);
                BattleLogicFunction__FunctionChangeBgm(this, v26, (Generator_BGM_o *)v219, 0, BgmFadeTime, v221);
                goto LABEL_295;
              }
              data = (BattleData_o *)FuncList__Check(42, *p_funcType, 0);
              if ( ((unsigned __int8)data & 1) != 0 )
                goto LABEL_239;
              if ( FuncList__Check(43, *p_funcType, 0) )
              {
                v155 = BattleLogicFunction__functionResurrection(
                         this,
                         v90->fields.uniqueId,
                         index,
                         funcEnt,
                         dataVals_k__BackingField,
                         isCommandSideEffect,
                         v222);
                goto LABEL_294;
              }
              if ( FuncList__Check(44, *p_funcType, 0)
                || FuncList__Check(133, *p_funcType, 0)
                || FuncList__Check(146, *p_funcType, 0)
                || FuncList__Check(154, *p_funcType, 0) )
              {
                v223 = funcEnt->fields.vals;
                if ( FuncList__Check(44, funcEnt->fields.funcType, 0) )
                {
                  SameIndiualityBuffSum = BattleServantData__getSameIndiualityBuffSum(v90, v223, 1, 0, 0, 0);
                  goto LABEL_281;
                }
                if ( FuncList__Check(133, *p_funcType, 0) )
                {
                  SameIndiualityBuffSum = GainNpIndividualSum__GetSameIndiualitySum(
                                            p_fields->data,
                                            action->fields.actorId,
                                            v90->fields.uniqueId,
                                            dataVals_k__BackingField,
                                            funcEnt,
                                            0);
                  goto LABEL_281;
                }
                if ( FuncList__Check(146, *p_funcType, 0) )
                {
                  SameIndiualityBuffSum = GainNpIndividualSum__GetIndividualityIncludeTargetSum(
                                            p_fields->data,
                                            action->fields.actorId,
                                            v90->fields.uniqueId,
                                            dataVals_k__BackingField,
                                            funcEnt,
                                            0);
                  goto LABEL_281;
                }
                data = (BattleData_o *)FuncList__Check(154, *p_funcType, 0);
                if ( ((unsigned __int8)data & 1) != 0 )
                {
                  if ( !p_fields->data )
                    goto LABEL_506;
                  totalCriticalStars = p_fields->data->fields.totalCriticalStars;
                  Value2 = DataVals__GetValue2(dataVals_k__BackingField, 0);
                  if ( Value2 >= 1 )
                  {
                    v227 = Value2;
                    if ( !System_Math_TypeInfo->_2.cctor_finished )
                      j_il2cpp_runtime_class_init_0(System_Math_TypeInfo);
                    SameIndiualityBuffSum = System_Math__Min_65042304(totalCriticalStars, v227, 0);
LABEL_281:
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
                                               v90,
                                               CorrectedValueFuncGainNp,
                                               0);
                if ( CorrectedValueFuncGainNp < 1 || !BattleServantData__isGainNp(v90, 1, dataVals_k__BackingField, 0) )
                  goto LABEL_290;
                v229 = (BattleLogicFunction_o *)BattleServantData__addNp(v90, CorrectedValueFuncGainNp, 0, 0);
                v230 = (int)v229;
                data = (BattleData_o *)BattleLogicFunction__getFunctionObject(
                                         v229,
                                         funcEnt,
                                         v90->fields.uniqueId,
                                         index,
                                         isCommandSideEffect,
                                         0,
                                         v231);
                if ( !data )
                  goto LABEL_506;
                v232 = (BattleActionData_BuffData_o *)data;
                HIDWORD(data->fields.m_CancellationTokenSource) = 3;
                BattleActionData_BuffData__setSaveNp((BattleActionData_BuffData_o *)data, v230, 0);
                if ( isCommandSideEffect )
                  v232->fields.isCommandAfter = 1;
LABEL_289:
                v150 = action;
                FunctionObject = v232;
                goto LABEL_188;
              }
              if ( FuncList__Check(45, *p_funcType, 0) )
              {
                v90->fields.isSystemAlive = DataVals__GetValue(dataVals_k__BackingField, 0) == 1;
                goto LABEL_295;
              }
              if ( FuncList__Check(46, *p_funcType, 0) )
              {
                v159 = action->fields.actorId;
                v161 = funcEnt;
                v160 = this;
                v162 = index;
                v163 = isCommandSideEffect;
                v164 = funcUnit;
                v167 = 1;
                v165 = targetId_k__BackingField;
                v166 = dataVals_k__BackingField;
                goto LABEL_198;
              }
              if ( FuncList__Check(47, *p_funcType, 0) )
              {
                v238 = action->fields.actorId;
                v239 = v90->fields.uniqueId;
                v240 = 9;
LABEL_303:
                v155 = BattleLogicFunction__functionNPDamage(
                         this,
                         v238,
                         v239,
                         dataVals_k__BackingField,
                         index,
                         v240,
                         action,
                         v237);
                goto LABEL_294;
              }
              if ( FuncList__Check(48, *p_funcType, 0) )
              {
                v155 = BattleLogicFunction__functionGainNpFromTargets(this, v26, action, v87, v241);
                goto LABEL_294;
              }
              if ( FuncList__Check(49, *p_funcType, 0) )
              {
                v155 = BattleLogicFunction__functionGainHpFromTargets(this, v26, action, v87, v242);
                goto LABEL_294;
              }
              v243 = FuncList__Check(50, *p_funcType, 0);
              if ( v243 || (v243 = FuncList__Check(51, *p_funcType, 0)) )
              {
                v245 = *p_funcType == 51;
                if ( *p_funcType == 50 )
                {
                  v243 = BattleLogicFunction__isSafeDamage(
                           this,
                           dataVals_k__BackingField,
                           targetId_k__BackingField,
                           v244);
                  v245 = v243;
                }
                v246 = action->fields.actorId;
                overwriteLossHpa = BattleLogicFunction__getHpPerValue(
                                     (BattleLogicFunction_o *)v243,
                                     dataVals_k__BackingField,
                                     v90,
                                     v244);
                v155 = BattleLogicFunction__functionlossHp(
                         this,
                         v246,
                         targetId_k__BackingField,
                         funcEnt,
                         dataVals_k__BackingField,
                         index,
                         v245,
                         isCommandSideEffect,
                         overwriteLossHpa,
                         0,
                         action,
                         v341);
                goto LABEL_294;
              }
              if ( FuncList__Check(52, *p_funcType, 0) )
              {
                v248 = this;
                v249 = 1;
                v250 = dataVals_k__BackingField;
LABEL_317:
                updated = BattleLogicFunction__UpdateUserEquipSkillChargeTurn(v248, v250, v249, v247);
                if ( !updated )
                {
                  v253 = (BattleActionData_MasterBuffData_o *)sub_1C32E6C(BattleActionData_MasterBuffData_TypeInfo);
                  BattleActionData_MasterBuffData___ctor(v253, funcEnt, 0);
                  if ( !v253 )
                    goto LABEL_506;
                  v253->fields.popColor = 1;
                  v158 = v87->fields._targetId_k__BackingField;
                  v157 = this;
                  v234 = index;
                  v233 = isCommandSideEffect;
                  v235 = dataVals_k__BackingField;
                  v236 = (BattleActionData_BuffData_o *)v253;
                  goto LABEL_293;
                }
                BattleLogicFunction__CreateMasterBuffEffect(
                  (BattleLogicFunction_o *)updated,
                  action,
                  funcEnt,
                  index,
                  isCommandSideEffect,
                  dataVals_k__BackingField,
                  v252);
                goto LABEL_295;
              }
              if ( FuncList__Check(62, *p_funcType, 0) )
              {
                v248 = this;
                v250 = dataVals_k__BackingField;
                v249 = 0;
                goto LABEL_317;
              }
              if ( FuncList__Check(53, *p_funcType, 0) )
              {
                v254 = (Generator_BGFromQuickChangeBGFunc_o *)sub_1C32E6C(Generator_BGFromQuickChangeBGFunc_TypeInfo);
                Generator_BGFromQuickChangeBGFunc___ctor(v254, dataVals_k__BackingField, 0);
                BattleLogicFunction__FunctionQuickChangeBG(this, v26, (Generator_Background_o *)v254, v255);
                goto LABEL_295;
              }
              if ( FuncList__Check(54, *p_funcType, 0) )
              {
                data = (BattleData_o *)v90->fields.svtdata;
                if ( !data )
                  goto LABEL_506;
                if ( !ServantEntity__isInvalidSkillShift((ServantEntity_o *)data, 0) )
                {
                  BattleLogicFunction__functionShiftServant(this, action, v90, dataVals_k__BackingField, v256);
                  goto LABEL_295;
                }
                v158 = v87->fields._targetId_k__BackingField;
                goto LABEL_291;
              }
              if ( FuncList__Check(55, *p_funcType, 0) )
              {
                v238 = action->fields.actorId;
                v239 = v90->fields.uniqueId;
                v240 = 10;
                goto LABEL_303;
              }
              if ( FuncList__Check(57, *p_funcType, 0) )
              {
                v90->fields.deadtype = DataVals__GetValue(dataVals_k__BackingField, 0);
                goto LABEL_295;
              }
              if ( FuncList__Check(58, *p_funcType, 0) )
              {
                buffData = v90->fields.buffData;
                data = (BattleData_o *)DataVals__GetParam(dataVals_k__BackingField, 14, 0, 0);
                if ( !buffData )
                  goto LABEL_506;
                BattleBuffData__UpdateForceAllBuffNoAct(buffData, (int32_t)data, funcEnt->fields.vals, 0);
                v147 = isCommandSideEffect;
                v146 = v90->fields.uniqueId;
                v148 = funcEnt;
                goto LABEL_187;
              }
              if ( FuncList__Check(59, *p_funcType, 0) )
              {
                v258 = (BattleActionData_UpShiftGaugeData_o *)sub_1C32E6C(BattleActionData_UpShiftGaugeData_TypeInfo);
                BattleActionData_UpShiftGaugeData___ctor(v258, 0);
LABEL_339:
                BattleLogicFunction__functionBreakGaugeChange(
                  this,
                  action,
                  funcUnit,
                  v90,
                  (BattleActionData_BaseShiftGaugeData_o *)v258,
                  v259);
                goto LABEL_295;
              }
              if ( FuncList__Check(60, *p_funcType, 0) )
              {
                v258 = (BattleActionData_UpShiftGaugeData_o *)sub_1C32E6C(BattleActionData_DownShiftGaugeData_TypeInfo);
                BattleActionData_DownShiftGaugeData___ctor((BattleActionData_DownShiftGaugeData_o *)v258, 0);
                goto LABEL_339;
              }
              if ( FuncList__Check(61, *p_funcType, 0) )
              {
                SubMember = BattleLogicFunction__FunctionMoveToLastSubMember(this, v90, funcEnt, v260, index, v261);
                BattleActionData__addAction(action, SubMember, 0);
                BattleActionData__UpdateForceBuffEffectAllTrue(action, 0);
LABEL_223:
                v346 = 1;
                goto LABEL_295;
              }
              if ( FuncList__Check(119, *p_funcType, 0) )
              {
                BattleLogicFunction__functionMovePosition(this, action, v90, v263);
                goto LABEL_295;
              }
              if ( FuncList__Check(120, *p_funcType, 0) )
              {
                BattleLogicFunction__FunctionRevival(this, action, v87, v264);
                goto LABEL_295;
              }
              if ( FuncList__Check(121, *p_funcType, 0) )
              {
                v238 = action->fields.actorId;
                v239 = v90->fields.uniqueId;
                v240 = 11;
                goto LABEL_303;
              }
              if ( FuncList__Check(143, *p_funcType, 0) )
              {
                v238 = action->fields.actorId;
                v239 = v90->fields.uniqueId;
                v240 = 12;
                goto LABEL_303;
              }
              if ( FuncList__Check(124, *p_funcType, 0) )
              {
                BattleLogicFunction__functionMoveState(this, v26, action, v87, v265);
                goto LABEL_295;
              }
              if ( FuncList__Check(125, *p_funcType, 0) )
              {
                BattleLogicFunction__ChangeBGMCostume(this, dataVals_k__BackingField, action, v266);
                goto LABEL_295;
              }
              v267 = FuncList__Check(126, *p_funcType, 0);
              if ( v267 )
              {
                BattleLogicFunction__LossCommandSpell(
                  (BattleLogicFunction_o *)v267,
                  dataVals_k__BackingField,
                  action,
                  v268);
                goto LABEL_295;
              }
              if ( !FuncList__Check(127, *p_funcType, 0) )
              {
                if ( FuncList__Check(128, *p_funcType, 0) )
                {
                  BattleLogicFunction__FunctionUpdateEntryPositions(this, dataVals_k__BackingField, v269);
                  goto LABEL_295;
                }
                if ( FuncList__Check(63, *p_funcType, 0) )
                {
                  BattleLogicFunction__FunctionUpdateEntryMaxCountEachTurn(this, dataVals_k__BackingField, v270);
                  goto LABEL_295;
                }
                if ( FuncList__Check(130, *p_funcType, 0) )
                {
                  BattleLogicFunction__FunctionToFieldAddChangeFieldBuff(this, v26, action, v87, isTreasureDvc, v271);
                  goto LABEL_295;
                }
                if ( FuncList__Check(131, *p_funcType, 0) )
                {
                  BattleLogicFunction__FunctionSubFieldBuff(this, v26, action, v87, v272);
                  goto LABEL_295;
                }
                if ( FuncList__Check(134, *p_funcType, 0) )
                {
                  data = (BattleData_o *)DataVals__GetValue(dataVals_k__BackingField, 0);
                  if ( !p_fields->data )
                    goto LABEL_506;
                  BattleData__AddQuestRouteId(p_fields->data, (int32_t)data, 0);
                  goto LABEL_295;
                }
                if ( FuncList__Check(135, *p_funcType, 0) )
                {
                  BattleLogicFunction__FunctionLastSkillCopy(this, action, dataVals_k__BackingField, v26, v273);
                  goto LABEL_295;
                }
                if ( FuncList__Check(136, *p_funcType, 0) )
                {
                  v274 = DataVals__GetValue(dataVals_k__BackingField, 0);
                  BattleLogicFunction__FunctionChangeEnemyMasterFace(this, v274, v275);
                  goto LABEL_295;
                }
                if ( FuncList__Check(137, *p_funcType, 0) )
                {
                  v203 = action->fields.actorId;
                  v204 = v90->fields.uniqueId;
                  v276 = ((int (__fastcall *)(BattleServantData_o *, const MethodInfo *))v90->klass->vtable._9_get_hp.methodPtr)(
                           v90,
                           v90->klass->vtable._9_get_hp.method) <= 1;
                  v207 = this;
                  v205 = !v276;
LABEL_230:
                  v208 = v203;
                  v209 = v204;
LABEL_233:
                  v155 = BattleLogicFunction__functionValueDamage(
                           v207,
                           v208,
                           v209,
                           dataVals_k__BackingField,
                           index,
                           v205,
                           action,
                           v206);
                  goto LABEL_294;
                }
                if ( FuncList__Check(138, *p_funcType, 0) )
                {
                  BattleLogicFunction__FunctionAddBattleValue(this, action->fields.actorId, funcEnt, v277);
                  goto LABEL_295;
                }
                if ( FuncList__Check(139, *p_funcType, 0) )
                {
                  BattleLogicFunction__FunctionSetBattleValue(this, action->fields.actorId, funcEnt, v278);
                  goto LABEL_295;
                }
                if ( FuncList__Check(140, *p_funcType, 0) )
                {
                  np = v90->fields.np;
                  v282 = (float)(DataVals__GetValue(dataVals_k__BackingField, 0) * np);
                  if ( (float)(v282 / 1000.0) == INFINITY )
                    v283 = 0x80000000;
                  else
                    v283 = (int)(float)(v282 / 1000.0);
                  v155 = BattleLogicFunction__functionGainNp(
                           this,
                           v26,
                           v280,
                           targetId_k__BackingField,
                           dataVals_k__BackingField,
                           v283,
                           v281);
                  goto LABEL_294;
                }
                if ( FuncList__Check(141, *p_funcType, 0) )
                {
                  v284 = v90->fields.np;
                  v285 = (float)(DataVals__GetValue(dataVals_k__BackingField, 0) * v284) / 1000.0;
                  v286 = (int)v285;
                  if ( v285 == INFINITY )
                    v286 = 0x80000000;
                  v287 = (BattleLogicFunction_o *)BattleServantData__addNp(v90, -v286, 0, 0);
                  v288 = (int)v287;
                  data = (BattleData_o *)BattleLogicFunction__getFunctionObject(
                                           v287,
                                           funcEnt,
                                           v90->fields.uniqueId,
                                           index,
                                           isCommandSideEffect,
                                           0,
                                           v289);
                  if ( !data )
                    goto LABEL_506;
                  v232 = (BattleActionData_BuffData_o *)data;
                  HIDWORD(data->fields.m_CancellationTokenSource) = 3;
                  BattleActionData_BuffData__setSaveNp((BattleActionData_BuffData_o *)data, v288, 0);
                  goto LABEL_289;
                }
                if ( FuncList__Check(142, *p_funcType, 0) )
                {
                  v155 = BattleLogicFunction__FunctionAddBattlePoint(
                           this,
                           v26,
                           targetId_k__BackingField,
                           dataVals_k__BackingField,
                           v290);
                  if ( v155 )
                    goto LABEL_294;
                }
                else
                {
                  if ( FuncList__Check(144, *p_funcType, 0) )
                  {
                    v155 = BattleLogicFunction__FunctionSetNpExecutedState(
                             this,
                             v26,
                             targetId_k__BackingField,
                             dataVals_k__BackingField,
                             v291);
                    goto LABEL_294;
                  }
                  data = (BattleData_o *)FuncList__Check(145, *p_funcType, 0);
                  if ( ((unsigned __int8)data & 1) != 0 )
                  {
                    if ( !p_fields->data )
                      goto LABEL_506;
                    perf = (UnityEngine_Object_o *)p_fields->data->fields.perf;
                    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
                      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
                    data = (BattleData_o *)UnityEngine_Object__op_Inequality(perf, 0, 0);
                    if ( ((unsigned __int8)data & 1) != 0 )
                    {
                      if ( !p_fields->data )
                        goto LABEL_506;
                      data = (BattleData_o *)p_fields->data->fields.perf;
                      if ( !data )
                        goto LABEL_506;
                      BattlePerformance__HideOverGaugeMessage((BattlePerformance_o *)data, 0);
                    }
                  }
                  else
                  {
                    v293 = FuncList__Check(147, *p_funcType, 0);
                    if ( v293 )
                    {
                      BattleLogicFunction__SetEnemyCountChangeActionData(
                        (BattleLogicFunction_o *)v293,
                        dataVals_k__BackingField,
                        action,
                        v294);
                    }
                    else
                    {
                      v295 = FuncList__Check(148, *p_funcType, 0);
                      if ( v295 )
                      {
                        BattleLogicFunction__SetDisplayBattleMessage((BattleLogicFunction_o *)v295, action, v87, v296);
                      }
                      else
                      {
                        v297 = FuncList__Check(149, *p_funcType, 0);
                        if ( v297 )
                        {
                          BattleLogicFunction__SetBattleSkillDropGeneratorBuff(
                            (BattleLogicFunction_o *)v297,
                            action,
                            v26,
                            targetId_k__BackingField,
                            dataVals_k__BackingField,
                            v298);
                        }
                        else if ( FuncList__Check(150, *p_funcType, 0) )
                        {
                          v299 = DataVals__GetValue(dataVals_k__BackingField, 0);
                          BattleLogicFunction__FunctionChangeMasterFace(this, v299, v300);
                        }
                        else if ( FuncList__Check(151, *p_funcType, 0) )
                        {
                          v301 = DataVals__GetValue(dataVals_k__BackingField, 0);
                          BattleLogicFunction__FunctionEnableMasterSkill(this, v301, v302);
                        }
                        else if ( FuncList__Check(152, *p_funcType, 0) )
                        {
                          v303 = DataVals__GetValue(dataVals_k__BackingField, 0);
                          BattleLogicFunction__FunctionEnableMasterCommandSpell(this, v303, v304);
                        }
                        else if ( FuncList__Check(153, *p_funcType, 0) )
                        {
                          BattleLogicFunction__FunctionBattleModelChange(this, action, v87, v305);
                        }
                        else if ( FuncList__Check(155, *p_funcType, 0) )
                        {
                          BattleLogicFunction__FunctionAddBattleMissionValue(this, funcEnt, v306);
                        }
                        else if ( FuncList__Check(156, *p_funcType, 0) )
                        {
                          BattleLogicFunction__FunctionSetBattleMissionValue(this, funcEnt, v307);
                        }
                        else if ( FuncList__Check(157, *p_funcType, 0) )
                        {
                          data = (BattleData_o *)DataVals__GetValue(dataVals_k__BackingField, 0);
                          if ( !p_fields->data )
                            goto LABEL_506;
                          BattleData__ChangeEnemyPosType(p_fields->data, (int32_t)data, 0);
                        }
                        else
                        {
                          if ( FuncList__Check(158, *p_funcType, 0) )
                          {
                            data = (BattleData_o *)FunctionEntity__IsTargetEnemyOnly(funcEnt, 0);
                            skillInfo = action->fields.skillInfo;
                            v310 = v344;
                            v311 = (char)data;
                            if ( skillInfo )
                              v310 = action->fields.skillInfo;
                            v344 = v310;
                            if ( skillInfo )
                            {
                              if ( !v310 )
                                goto LABEL_506;
                              data = (BattleData_o *)BattleSkillInfoData__GetSelfSkillLvEntity(v310, 0);
                              v312 = data;
                              if ( !data )
                                data = v343;
                              if ( v312 )
                              {
                                if ( !data )
                                  goto LABEL_506;
                                IsNoTargetSkipSkill = SkillLvEntity__IsNoTargetSkipSkill((SkillLvEntity_o *)data, 0);
                                v314 = &v366;
                                LOWORD(v366.fields._list) = 0;
                                System_Nullable_bool____ctor(
                                  (System_Nullable_bool__o)v314,
                                  IsNoTargetSkipSkill,
                                  (const MethodInfo_38BA7DC *)Method_System_Nullable_bool___ctor__);
                                LOBYTE(skillInfo) = BYTE1(v366.fields._list);
                                v343 = v312;
                              }
                              else
                              {
                                LOBYTE(skillInfo) = 0;
                              }
                            }
                            if ( !p_fields->data )
                              goto LABEL_506;
                            v317 = (unsigned __int8)skillInfo != 0;
                            v318 = 304;
                            if ( (v311 & 1) != 0 )
                              v318 = 312;
                            v155 = BattleLogicFunction__FunctionSwapFieldPosition(
                                     this,
                                     dataVals_k__BackingField,
                                     index,
                                     *(System_Int32_array **)((char *)&p_fields->data->klass + v318),
                                     v311 & 1,
                                     v317,
                                     v308);
                            goto LABEL_294;
                          }
                          v315 = FuncList__Check(159, *p_funcType, 0);
                          if ( v315 )
                            BattleLogicFunction__FunctionSetDisplayDirectBattleMessageInFsm(
                              (BattleLogicFunction_o *)v315,
                              action,
                              v87,
                              v316);
                        }
                      }
                    }
                  }
                }
              }
LABEL_295:
              v51 = &this->fields;
LABEL_163:
              v93 = &funcEnt->fields.funcType;
              goto LABEL_132;
            }
            v134 = DataVals__GetValue2(dataVals_k__BackingField, 0) - 1;
            v135 = DataVals__GetTargetList(dataVals_k__BackingField, 0);
            v136 = DataVals__GetValue(dataVals_k__BackingField, 0);
            v137 = BattleServantData__skillChageShorten(v90, v136, 0, v134, v135, 0);
            v140 = v90->fields.uniqueId;
            if ( v137 )
            {
              v141 = BattleLogicFunction__getFunctionObject(
                       (BattleLogicFunction_o *)v137,
                       funcEnt,
                       v140,
                       index,
                       isCommandSideEffect,
                       0,
                       v138);
              BattleActionData__setBuffData(action, v141, dataVals_k__BackingField, 0);
            }
            else
            {
              v151 = BattleLogicFunction__getNoEffectObject(
                       this,
                       v140,
                       index,
                       dataVals_k__BackingField,
                       isCommandSideEffect,
                       0,
                       0,
                       v139);
              BattleActionData__addAction(action, v151, 0);
            }
            v51 = &this->fields;
            v93 = &funcEnt->fields.funcType;
LABEL_132:
            isDamage = FuncList__isDamage(*v93, 0);
            if ( isDamage )
              v109 = 0;
            else
              v109 = -89;
            if ( isDamage )
              v110 = 0;
            else
              v110 = 167;
            if ( v109 != -89 )
            {
              if ( v110 )
                return action;
              if ( !v90->fields.isTDLimitCount )
              {
                data = (BattleData_o *)v90->fields.buffData;
                if ( !data )
                  goto LABEL_506;
                if ( !LOBYTE(data->fields.p_cmlist) )
                {
                  v90->fields.isTDLimitCount = 1;
                  if ( !v352 )
                    goto LABEL_506;
                  v111 = v90->fields.uniqueId;
                  items = v352->fields._items;
                  v113 = Method_System_Collections_Generic_List_int__Add__;
                  ++v352->fields._version;
                  if ( !items )
                    goto LABEL_506;
                  size = v352->fields._size;
                  if ( (unsigned int)size >= LODWORD(items->max_length) )
                  {
                    System_Collections_Generic_List_int___AddWithResize(
                      v352,
                      v111,
                      *(const MethodInfo_377B798 **)(*(_QWORD *)(v113[4] + 192LL) + 112LL));
                    data = (BattleData_o *)v90->fields.buffData;
                    if ( !data )
                      goto LABEL_506;
                  }
                  else
                  {
                    v352->fields._size = size + 1;
                    items->m_Items[size] = v111;
                  }
                  v115 = BattleBuffData__UseProgressingDoNotAct((BattleBuffData_o *)data, v90, 0, 0);
                  BattleActionData__addSideEffectActionData(action, v115, 1, 0);
                  data = (BattleData_o *)v90->fields.buffData;
                  if ( !data )
                    goto LABEL_506;
                }
                LOBYTE(data->fields.p_cmlist) = 0;
              }
            }
            BattleLogicFunction_ProcListInArgs__setFuncResult(
              v26,
              targetId_k__BackingField,
              action->fields.funcResult,
              dataVals_k__BackingField->fields.funcIndex,
              0);
            BattleLogicFunction__SetReceiveFunctionId(
              this,
              action->fields.funcResult,
              targetId_k__BackingField,
              funcEnt,
              v116);
            data = (BattleData_o *)param;
            if ( param )
              UseInFsmFuncParam__AddTargetId(param, action->fields.funcResult, targetId_k__BackingField, 0);
LABEL_152:
            v85 = v84->max_length;
            if ( (int)++v86 >= v85 )
              goto LABEL_441;
          }
          if ( !BattleServantData__checkPlayer(v90, 0) )
            goto LABEL_163;
          v122 = dataVals_k__BackingField;
          isUnaffected = DataVals__isUnaffected(dataVals_k__BackingField, 0);
          v124 = ((__int64 (__fastcall *)(BattleLogicFunctionProcess_FunctionTargetCheck_o *, const MethodInfo *))v87->klass->vtable._16_GetCommonBaseValue.methodPtr)(
                   v87,
                   v87->klass->vtable._16_GetCommonBaseValue.method);
          if ( !isUnaffected )
            v124 = BattleServantData__getCorrectedValueFuncGainNp(v90, v124, 0);
          if ( !BattleServantData__isGainNp(v90, 1, dataVals_k__BackingField, 0) )
            goto LABEL_290;
          v126 = (BattleLogicFunction_o *)BattleServantData__addNp(v90, v124, 0, 0);
          *(_QWORD *)playerId = v90;
          v127 = (int)v126;
          data = (BattleData_o *)BattleLogicFunction__getFunctionObject(
                                   v126,
                                   funcEnt,
                                   v90->fields.uniqueId,
                                   index,
                                   isCommandSideEffect,
                                   0,
                                   v128);
          if ( !data )
            goto LABEL_506;
          v129 = (BattleActionData_BuffData_o *)data;
          HIDWORD(data->fields.m_CancellationTokenSource) = 3;
          BattleActionData_BuffData__setSaveNp((BattleActionData_BuffData_o *)data, v127, 0);
          if ( isCommandSideEffect )
            v129->fields.isCommandAfter = 1;
          goto LABEL_180;
        }
LABEL_441:
        BattleActionData__AddUseInFsmFuncParam(action, param, 0);
        if ( !isCreateSideEffect )
          goto LABEL_459;
        v55 = v354;
        v57 = v356;
        if ( !funcEnt )
          goto LABEL_506;
        v319 = FuncList__Check(26, *p_funcType, 0);
        v320 = (BattleLogicFunction_AfterAttackSideEffectMakeArgument_o *)sub_1C32E6C(BattleLogicFunction_AfterAttackSideEffectMakeArgument_TypeInfo);
        BattleLogicFunction_AfterAttackSideEffectMakeArgument___ctor(v320, 0);
        if ( !v320 )
          goto LABEL_506;
        Argument__Init = BattleLogicFunction_AfterAttackSideEffectMakeArgument__Init(v320, action, 0);
        BattleLogicFunction__setAttackSideEffect(this, action, ServantData, v319 || isTreasureDvc, Argument__Init, v322);
        data = (BattleData_o *)BattleActionData__getDamageTargetIdList(action, 0);
        if ( !data )
          goto LABEL_506;
        v51 = &this->fields;
        v323 = data;
        if ( data->fields.m_CancellationTokenSource )
          break;
      }
LABEL_462:
      v56 = v55->max_length;
      if ( (int)++v57 >= v56 )
        goto LABEL_465;
    }
    if ( ServantData == 0 || !isTreasureDvc )
    {
      v324 = 0;
    }
    else
    {
      v324 = (BattleCommandData_o *)sub_1C32E6C(BattleCommandData_TypeInfo);
      BattleCommandData___ctor(v324, 0);
      data = (BattleData_o *)BattleServantData__getTreasureDvcCardId(ServantData, 0);
      if ( !v324 )
        goto LABEL_506;
      v324->fields._type = (int)data;
      v324->fields.treasureDvc = BattleServantData__getTreasureDvcId(ServantData, 1, 0, 0);
    }
    v325 = (UnityEngine_Object_o *)this->fields.logic;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    data = (BattleData_o *)UnityEngine_Object__op_Inequality(v325, 0, 0);
    if ( ((unsigned __int8)data & 1) != 0
      && (m_CancellationTokenSource = v323->fields.m_CancellationTokenSource, (int)m_CancellationTokenSource >= 1) )
    {
      v327 = 0;
      do
      {
        if ( v327 >= (unsigned int)m_CancellationTokenSource )
          goto LABEL_507;
        data = (BattleData_o *)this->fields.logic;
        if ( !data )
          goto LABEL_506;
        data = (BattleData_o *)BattleLogic__SetDamageSideEffect(
                                 (BattleLogic_o *)data,
                                 action,
                                 action->fields.actorId,
                                 *((_DWORD *)&v323->fields.rootfsm + v327),
                                 v324,
                                 0);
        LODWORD(m_CancellationTokenSource) = v323->fields.m_CancellationTokenSource;
        ++v327;
      }
      while ( (__int64)v327 < (int)m_CancellationTokenSource );
      v51 = &this->fields;
LABEL_459:
      v55 = v354;
    }
    else
    {
      v51 = &this->fields;
    }
    v57 = v356;
    goto LABEL_462;
  }
  v346 = 0;
  v347 = 0;
LABEL_465:
  data = (BattleData_o *)BattleLogicFunction_ProcListInArgs__get_CheckDuplicateFunc(v26, 0);
  if ( !data )
    goto LABEL_506;
  ((void (__fastcall *)(BattleData_o *, const MethodInfo *))data->klass->vtable._5_isAiTarget.methodPtr)(
    data,
    data->klass->vtable._5_isAiTarget.method);
  if ( (v347 & 1) != 0 )
  {
    data = v51->data;
    if ( !v51->data )
      goto LABEL_506;
    data = (BattleData_o *)BattleData__getServantData(data, action->fields.actorId, 0);
    if ( !data )
      goto LABEL_506;
    BattleServantData__resetAccumulationDamage((BattleServantData_o *)data, 0);
  }
  if ( BattleActionData__checkSummonServantList(action, 0) )
  {
    v328 = (UnityEngine_Object_o *)this->fields.logic;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    if ( UnityEngine_Object__op_Inequality(v328, 0, 0) )
    {
      data = (BattleData_o *)BattleActionData__getSummonServant(action, -1, 0);
      if ( !data )
        goto LABEL_506;
      v329 = (int)data->fields.m_CancellationTokenSource;
      v330 = data;
      if ( v329 >= 1 )
      {
        v331 = 0;
        while ( v331 < v329 )
        {
          v332 = *((_QWORD *)&v330->fields.rootfsm + (int)v331);
          if ( !v332 )
            goto LABEL_506;
          data = (BattleData_o *)this->fields.logic;
          if ( !data )
            goto LABEL_506;
          BattleLogic__actEnemyPassiveSkill((BattleLogic_o *)data, *(_DWORD *)(v332 + 28), 0);
          v329 = (int)v330->fields.m_CancellationTokenSource;
          if ( (int)++v331 >= v329 )
            goto LABEL_481;
        }
        goto LABEL_507;
      }
    }
  }
LABEL_481:
  v333 = BattleLogicFunction_ProcListInArgs__get_FuncSideEffectArg(v26, 0);
  if ( v333 )
    ((void (__fastcall *)(BattleLogicFunction_FuncSideEffectFunctionArgument_o *, BattleLogicFunction_o *, BattleActionData_o *, BattleServantData_o *, const MethodInfo *))v333->klass->vtable._7_SetSideEffect.methodPtr)(
      v333,
      this,
      action,
      ServantData,
      v333->klass->vtable._7_SetSideEffect.method);
  if ( isBuffUpdate )
  {
    v334 = (UnityEngine_Object_o *)this->fields.logic;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    if ( UnityEngine_Object__op_Inequality(v334, 0, 0) )
    {
      data = (BattleData_o *)this->fields.logic;
      if ( !data )
        goto LABEL_506;
      BattleLogic__checkUsedBuff((BattleLogic_o *)data, 0);
      if ( !p_fields->data )
        goto LABEL_506;
      data = (BattleData_o *)p_fields->data->fields._FieldEnvData_k__BackingField;
      if ( !data )
        goto LABEL_506;
      BattleFieldEnvironmentData__CheckUsedBuff((BattleFieldEnvironmentData_o *)data, 0);
    }
  }
  if ( (v346 & 1) != 0 || v26->fields.updateField )
  {
    v335 = (UnityEngine_Object_o *)this->fields.logic;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    if ( UnityEngine_Object__op_Inequality(v335, 0, 0) )
    {
      data = (BattleData_o *)this->fields.logic;
      if ( !data )
        goto LABEL_506;
      BattleLogic__updateFieldBuff((BattleLogic_o *)data, 0);
    }
  }
  data = (BattleData_o *)v352;
  if ( !v352 )
LABEL_506:
    sub_1C32E7C(data);
  System_Collections_Generic_List_int___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v366,
    v352,
    (const MethodInfo_377C26C *)Method_System_Collections_Generic_List_int__GetEnumerator__);
  v367 = v366;
  while ( System_Collections_Generic_List_Enumerator_int___MoveNext(
            &v367,
            (const MethodInfo_351F190 *)Method_System_Collections_Generic_List_Enumerator_int__MoveNext__) )
  {
    if ( !p_fields->data )
      sub_1C32E7C(0);
    v336 = BattleData__getServantData(p_fields->data, v367.fields._current, 0);
    if ( v336 )
      v336->fields.isTDLimitCount = 0;
  }
  System_Collections_Generic_List_Enumerator_int___Dispose(
    &v367,
    (const MethodInfo_351F18C *)Method_System_Collections_Generic_List_Enumerator_int__Dispose__);
  return action;
}


void BattleLogicFunction__setAttackSideEffect(
        BattleLogicFunction_o *this,
        BattleActionData_o *mainAction,
        BattleServantData_o *actionSvtData,
        bool isTreasureDvc,
        BattleLogicFunction_SideEffectMakeArgument_o *attackArg,
        const MethodInfo *method)
{
  BattleLogicFunction_o *v10; // x22
  BattleCommandData_o *v11; // x23
  BattleLogicFunction_AttackSideEffectFunctionArgument_o *v12; // x24
  System_Collections_Generic_IEnumerable_TSource__o *SideEffectList_k__BackingField; // x25
  BattleLogicFunction___c_c *v14; // x0
  System_Func_object__int__o *_9__56_0; // x26
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

  v10 = this;
  if ( (byte_4C3A977 & 1) == 0 )
  {
    sub_1C32C20(&BattleLogicFunction_AttackSideEffectFunctionArgument_TypeInfo);
    sub_1C32C20(&BattleCommandData_TypeInfo);
    sub_1C32C20(&Method_System_Linq_Enumerable_Select_BattleActionData_SideEffectData__int___);
    sub_1C32C20(&Method_System_Linq_Enumerable_ToArray_int___);
    sub_1C32C20(&System_Func_BattleActionData_SideEffectData__int__TypeInfo);
    sub_1C32C20(&int___TypeInfo);
    sub_1C32C20(&Method_BattleLogicFunction___c__setAttackSideEffect_b__56_0__);
    this = (BattleLogicFunction_o *)sub_1C32C20(&BattleLogicFunction___c_TypeInfo);
    byte_4C3A977 = 1;
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
      v11 = (BattleCommandData_o *)sub_1C32E6C(BattleCommandData_TypeInfo);
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
    v12 = (BattleLogicFunction_AttackSideEffectFunctionArgument_o *)sub_1C32E6C(BattleLogicFunction_AttackSideEffectFunctionArgument_TypeInfo);
    BattleLogicFunction_AttackSideEffectFunctionArgument___ctor(v12, 0);
    SideEffectList_k__BackingField = (System_Collections_Generic_IEnumerable_TSource__o *)attackArg->fields._SideEffectList_k__BackingField;
    v14 = BattleLogicFunction___c_TypeInfo;
    if ( !BattleLogicFunction___c_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(BattleLogicFunction___c_TypeInfo);
      v14 = BattleLogicFunction___c_TypeInfo;
    }
    _9__56_0 = (System_Func_object__int__o *)v14->static_fields->__9__56_0;
    if ( !_9__56_0 )
    {
      if ( !v14->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(v14);
        v14 = BattleLogicFunction___c_TypeInfo;
      }
      v16 = (Il2CppObject *)v14->static_fields->__9;
      _9__56_0 = (System_Func_object__int__o *)sub_1C32E6C(System_Func_BattleActionData_SideEffectData__int__TypeInfo);
      System_Func_object__int____ctor(_9__56_0, v16, Method_BattleLogicFunction___c__setAttackSideEffect_b__56_0__, 0);
      static_fields = BattleLogicFunction___c_TypeInfo->static_fields;
      static_fields->__9__56_0 = (struct System_Func_BattleActionData_SideEffectData__int__o *)_9__56_0;
      sub_1C32BC4((CGThumbnailListItem_o *)&static_fields->__9__56_0, (int32_t)_9__56_0, v18, v19);
    }
    v20 = (System_Collections_Generic_IEnumerable_TSource__o *)System_Linq_Enumerable__Select_object__int_(
                                                                 SideEffectList_k__BackingField,
                                                                 (System_Func_TSource__TResult__o *)_9__56_0,
                                                                 (const MethodInfo_31131E0 *)Method_System_Linq_Enumerable_Select_BattleActionData_SideEffectData__int___);
    this = (BattleLogicFunction_o *)System_Linq_Enumerable__ToArray_int_(
                                      v20,
                                      (const MethodInfo_311C8F4 *)Method_System_Linq_Enumerable_ToArray_int___);
    if ( mainAction )
    {
      BattleActionData__SetFirstAtkMainTargetId(mainAction, (System_Int32_array *)this, 0);
      v21 = ((__int64 (__fastcall *)(BattleLogicFunction_SideEffectMakeArgument_o *, void *))attackArg->klass[1]._1.image)(
              attackArg,
              attackArg->klass[1]._1.gc_desc);
      this = (BattleLogicFunction_o *)sub_1C32CC8(int___TypeInfo, 1);
      if ( this )
      {
        if ( !LODWORD(this->fields.logic) )
          sub_1C32E84(this);
        LODWORD(this->fields.logictarget) = mainAction->fields._FirstAtkMainTargetId_k__BackingField;
        if ( v21 )
        {
          v22 = (BattleLogicFunction_SideEffectMakeArgument_o *)(*(__int64 (__fastcall **)(__int64, BattleLogicFunction_o *, _QWORD))(*(_QWORD *)v21 + 408LL))(
                                                                  v21,
                                                                  this,
                                                                  *(_QWORD *)(*(_QWORD *)v21 + 416LL));
          BattleLogicFunction__SetTargetAttackSideEffect(v10, v12, mainAction, actionSvtData, v11, v22, v23);
          Argument__SortMainTargetToFirst = BattleLogicFunction_SideEffectMakeArgument__SortMainTargetToFirst(
                                              attackArg,
                                              mainAction->fields._FirstAtkMainTargetId_k__BackingField,
                                              0);
          BattleLogicFunction__SetTargetAttackSideEffect(
            v10,
            v12,
            mainAction,
            actionSvtData,
            v11,
            Argument__SortMainTargetToFirst,
            v25);
          return;
        }
      }
    }
LABEL_22:
    sub_1C32E7C(this);
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
    sub_1C32E7C(this);
  DamageAttackSideEffectList = BattleActionData__getDamageAttackSideEffectList(mainAction, 0);
  this->fields._SideEffectList_k__BackingField = DamageAttackSideEffectList;
  sub_1C32BC4((CGThumbnailListItem_o *)&this->fields, (int32_t)DamageAttackSideEffectList, v5, v6);
  return (BattleLogicFunction_SideEffectMakeArgument_o *)this;
}


BattleLogicFunction_SideEffectMakeArgument_o *BattleLogicFunction_AfterAttackSideEffectMakeArgument__MakeOnlyMainArgument(
        BattleLogicFunction_AfterAttackSideEffectMakeArgument_o *this,
        const MethodInfo *method)
{
  BattleLogicFunction_SideEffectMakeArgument_o *v2; // x19
  const MethodInfo *v3; // x1

  if ( (byte_4C3AA65 & 1) == 0 )
  {
    sub_1C32C20(&BattleLogicFunction_AfterMainAttackSideEffectMakeArgument_TypeInfo);
    byte_4C3AA65 = 1;
  }
  v2 = (BattleLogicFunction_SideEffectMakeArgument_o *)sub_1C32E6C(BattleLogicFunction_AfterMainAttackSideEffectMakeArgument_TypeInfo);
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

  BattleLogicFunction_CommonCheckDuplicateFunction___ctor((BattleLogicFunction_CommonCheckDuplicateFunction_o *)this, 0);
  this->fields.argument = argument;
  sub_1C32BC4((CGThumbnailListItem_o *)&this->fields.argument, (int32_t)argument, v5, v6);
}


void BattleLogicFunction_AttackSideEffectFunctionArgument___ctor(
        BattleLogicFunction_AttackSideEffectFunctionArgument_o *this,
        const MethodInfo *method)
{
  BattleLogicFunction_AttackSideEffectCheckDuplicateFunction_o *v3; // x20
  int32_t v4; // w2
  const MethodInfo *v5; // x3

  if ( (byte_4C3AA46 & 1) == 0 )
  {
    sub_1C32C20(&BattleLogicFunction_AttackSideEffectCheckDuplicateFunction_TypeInfo);
    byte_4C3AA46 = 1;
  }
  BattleLogicFunction_CommonSideEffectFunctionArgument___ctor(
    (BattleLogicFunction_CommonSideEffectFunctionArgument_o *)this,
    method);
  v3 = (BattleLogicFunction_AttackSideEffectCheckDuplicateFunction_o *)sub_1C32E6C(BattleLogicFunction_AttackSideEffectCheckDuplicateFunction_TypeInfo);
  BattleLogicFunction_AttackSideEffectCheckDuplicateFunction___ctor(
    v3,
    (BattleLogicFunction_CommonSideEffectFunctionArgument_o *)this,
    0);
  this->fields.checkDuplicate = (struct BattleLogicFunction_CheckDuplicateFunction_o *)v3;
  sub_1C32BC4((CGThumbnailListItem_o *)&this->fields.checkDuplicate, (int32_t)v3, v4, v5);
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

  if ( (byte_4C3AA53 & 1) == 0 )
  {
    sub_1C32C20(&Method_System_Collections_Generic_List_BattleLogicFunction_ExecutedFunctionData___ctor__);
    sub_1C32C20(&System_Collections_Generic_List_BattleLogicFunction_ExecutedFunctionData__TypeInfo);
    byte_4C3AA53 = 1;
  }
  v3 = (System_Collections_Generic_List_object__o *)sub_1C32E6C(System_Collections_Generic_List_BattleLogicFunction_ExecutedFunctionData__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v3,
    (const MethodInfo_3797F88 *)Method_System_Collections_Generic_List_BattleLogicFunction_ExecutedFunctionData___ctor__);
  this->fields.executedFuncList = (struct System_Collections_Generic_List_BattleLogicFunction_ExecutedFunctionData__o *)v3;
  sub_1C32BC4((CGThumbnailListItem_o *)&this->fields, (int32_t)v3, v4, v5);
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

  if ( (byte_4C3AA4F & 1) == 0 )
  {
    sub_1C32C20(&Method_System_Collections_Generic_List_BattleLogicFunction_ExecutedFunctionData__get_Count__);
    sub_1C32C20(&Method_System_Collections_Generic_List_BattleLogicFunction_ExecutedFunctionData__get_Item__);
    byte_4C3AA4F = 1;
  }
  executedFuncList = (System_Collections_Generic_List_object__o *)this->fields.executedFuncList;
  if ( !executedFuncList )
LABEL_8:
    sub_1C32E7C(executedFuncList);
  v4 = 0;
  while ( v4 < executedFuncList->fields._size )
  {
    executedFuncList = (System_Collections_Generic_List_object__o *)System_Collections_Generic_List_object___get_Item(
                                                                      executedFuncList,
                                                                      v4,
                                                                      (const MethodInfo_37984EC *)Method_System_Collections_Generic_List_BattleLogicFunction_ExecutedFunctionData__get_Item__);
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
    sub_1C32E7C(this);
  return DataVals__isCheckDuplicate(vals, 0);
}


bool BattleLogicFunction_CommonCheckDuplicateFunction__isExecutedFunction(
        BattleLogicFunction_CommonCheckDuplicateFunction_o *this,
        DataVals_o *vals,
        const MethodInfo *method)
{
  __int64 v5; // x21
  __int64 v6; // x0
  int32_t v7; // w2
  const MethodInfo *v8; // x3
  System_Collections_Generic_List_object__o *executedFuncList; // x19
  System_Predicate_object__o *v10; // x20

  if ( (byte_4C3AA51 & 1) == 0 )
  {
    sub_1C32C20(&Method_System_Collections_Generic_List_BattleLogicFunction_ExecutedFunctionData__FindIndex__);
    sub_1C32C20(&System_Predicate_BattleLogicFunction_ExecutedFunctionData__TypeInfo);
    sub_1C32C20(&Method_BattleLogicFunction_CommonCheckDuplicateFunction___c__DisplayClass7_0__isExecutedFunction_b__0__);
    sub_1C32C20(&BattleLogicFunction_CommonCheckDuplicateFunction___c__DisplayClass7_0_TypeInfo);
    byte_4C3AA51 = 1;
  }
  v5 = sub_1C32E6C(BattleLogicFunction_CommonCheckDuplicateFunction___c__DisplayClass7_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v5, 0);
  if ( !v5
    || (*(_QWORD *)(v5 + 16) = vals,
        sub_1C32BC4((CGThumbnailListItem_o *)(v5 + 16), (int32_t)vals, v7, v8),
        executedFuncList = (System_Collections_Generic_List_object__o *)this->fields.executedFuncList,
        v10 = (System_Predicate_object__o *)sub_1C32E6C(System_Predicate_BattleLogicFunction_ExecutedFunctionData__TypeInfo),
        System_Predicate_object____ctor(
          v10,
          (Il2CppObject *)v5,
          Method_BattleLogicFunction_CommonCheckDuplicateFunction___c__DisplayClass7_0__isExecutedFunction_b__0__,
          0),
        !executedFuncList) )
  {
    sub_1C32E7C(v6);
  }
  return System_Collections_Generic_List_object___FindIndex(
           executedFuncList,
           (System_Predicate_T__o *)v10,
           (const MethodInfo_3799014 *)Method_System_Collections_Generic_List_BattleLogicFunction_ExecutedFunctionData__FindIndex__) >= 0;
}


bool BattleLogicFunction_CommonCheckDuplicateFunction__isExecutedTarget(
        BattleLogicFunction_CommonCheckDuplicateFunction_o *this,
        DataVals_o *vals,
        int32_t targetId,
        const MethodInfo *method)
{
  __int64 v7; // x22
  __int64 v8; // x0
  int32_t v9; // w2
  const MethodInfo *v10; // x3
  System_Collections_Generic_List_object__o *executedFuncList; // x19
  System_Predicate_object__o *v12; // x20

  if ( (byte_4C3AA52 & 1) == 0 )
  {
    sub_1C32C20(&Method_System_Collections_Generic_List_BattleLogicFunction_ExecutedFunctionData__FindIndex__);
    sub_1C32C20(&System_Predicate_BattleLogicFunction_ExecutedFunctionData__TypeInfo);
    sub_1C32C20(&Method_BattleLogicFunction_CommonCheckDuplicateFunction___c__DisplayClass8_0__isExecutedTarget_b__0__);
    sub_1C32C20(&BattleLogicFunction_CommonCheckDuplicateFunction___c__DisplayClass8_0_TypeInfo);
    byte_4C3AA52 = 1;
  }
  v7 = sub_1C32E6C(BattleLogicFunction_CommonCheckDuplicateFunction___c__DisplayClass8_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v7, 0);
  if ( !v7
    || (*(_QWORD *)(v7 + 16) = vals,
        sub_1C32BC4((CGThumbnailListItem_o *)(v7 + 16), (int32_t)vals, v9, v10),
        *(_DWORD *)(v7 + 24) = targetId,
        executedFuncList = (System_Collections_Generic_List_object__o *)this->fields.executedFuncList,
        v12 = (System_Predicate_object__o *)sub_1C32E6C(System_Predicate_BattleLogicFunction_ExecutedFunctionData__TypeInfo),
        System_Predicate_object____ctor(
          v12,
          (Il2CppObject *)v7,
          Method_BattleLogicFunction_CommonCheckDuplicateFunction___c__DisplayClass8_0__isExecutedTarget_b__0__,
          0),
        !executedFuncList) )
  {
    sub_1C32E7C(v8);
  }
  return System_Collections_Generic_List_object___FindIndex(
           executedFuncList,
           (System_Predicate_T__o *)v12,
           (const MethodInfo_3799014 *)Method_System_Collections_Generic_List_BattleLogicFunction_ExecutedFunctionData__FindIndex__) >= 0;
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
    sub_1C32E7C(this);
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
  int32_t v9; // w2
  const MethodInfo *v10; // x3
  unsigned __int64 v11; // x26
  __int64 v12; // x22
  int32_t v13; // w2
  const MethodInfo *v14; // x3
  __int64 v15; // x23
  __int64 v16; // x0
  System_Collections_Generic_List_object__o *executedFuncList; // x24
  System_Predicate_object__o *v18; // x25
  DataVals_o *v19; // x24
  System_Collections_Generic_List_object__o *v20; // x23
  int32_t v21; // w25
  BattleLogicFunction_ExecutedFunctionData_o *v22; // x22
  const MethodInfo *v23; // x3
  int32_t v24; // w2
  const MethodInfo *v25; // x3
  struct System_Object_array *items; // x8
  _QWORD *v27; // x9
  __int64 size; // x10
  Il2CppClass **v29; // x0

  if ( (byte_4C3AA50 & 1) == 0 )
  {
    sub_1C32C20(&BattleLogicFunction_ExecutedFunctionData_TypeInfo);
    sub_1C32C20(&Method_System_Collections_Generic_List_BattleLogicFunction_ExecutedFunctionData__Add__);
    sub_1C32C20(&Method_System_Collections_Generic_List_BattleLogicFunction_ExecutedFunctionData__FindIndex__);
    sub_1C32C20(&System_Predicate_BattleLogicFunction_ExecutedFunctionData__TypeInfo);
    sub_1C32C20(&BattleLogicFunction_CommonCheckDuplicateFunction___c__DisplayClass5_0_TypeInfo);
    sub_1C32C20(&Method_BattleLogicFunction_CommonCheckDuplicateFunction___c__DisplayClass5_1__saveExecutedFunction_b__0__);
    sub_1C32C20(&BattleLogicFunction_CommonCheckDuplicateFunction___c__DisplayClass5_1_TypeInfo);
    byte_4C3AA50 = 1;
  }
  v7 = sub_1C32E6C(BattleLogicFunction_CommonCheckDuplicateFunction___c__DisplayClass5_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v7, 0);
  if ( !v7 )
    goto LABEL_19;
  *(_QWORD *)(v7 + 16) = vals;
  sub_1C32BC4((CGThumbnailListItem_o *)(v7 + 16), (int32_t)vals, v9, v10);
  if ( !targetIds )
    goto LABEL_19;
  if ( SLODWORD(targetIds->max_length) >= 1 )
  {
    v11 = 0;
    while ( 1 )
    {
      v12 = sub_1C32E6C(BattleLogicFunction_CommonCheckDuplicateFunction___c__DisplayClass5_1_TypeInfo);
      System_Object___ctor((Il2CppObject *)v12, 0);
      if ( !v12 )
        break;
      *(_QWORD *)(v12 + 24) = v7;
      v15 = v12 + 24;
      sub_1C32BC4((CGThumbnailListItem_o *)(v12 + 24), v7, v13, v14);
      if ( v11 >= LODWORD(targetIds->max_length) )
        sub_1C32E84(v16);
      *(_DWORD *)(v12 + 16) = targetIds->m_Items[v11];
      executedFuncList = (System_Collections_Generic_List_object__o *)this->fields.executedFuncList;
      v18 = (System_Predicate_object__o *)sub_1C32E6C(System_Predicate_BattleLogicFunction_ExecutedFunctionData__TypeInfo);
      System_Predicate_object____ctor(
        v18,
        (Il2CppObject *)v12,
        Method_BattleLogicFunction_CommonCheckDuplicateFunction___c__DisplayClass5_1__saveExecutedFunction_b__0__,
        0);
      if ( !executedFuncList )
        break;
      Index = System_Collections_Generic_List_object___FindIndex(
                executedFuncList,
                (System_Predicate_T__o *)v18,
                (const MethodInfo_3799014 *)Method_System_Collections_Generic_List_BattleLogicFunction_ExecutedFunctionData__FindIndex__);
      if ( (Index & 0x80000000) != 0 )
      {
        if ( !*(_QWORD *)v15 )
          break;
        v19 = *(DataVals_o **)(*(_QWORD *)v15 + 16LL);
        v20 = (System_Collections_Generic_List_object__o *)this->fields.executedFuncList;
        v21 = *(_DWORD *)(v12 + 16);
        v22 = (BattleLogicFunction_ExecutedFunctionData_o *)sub_1C32E6C(BattleLogicFunction_ExecutedFunctionData_TypeInfo);
        BattleLogicFunction_ExecutedFunctionData___ctor(v22, v19, v21, v23);
        if ( !v20 )
          break;
        items = v20->fields._items;
        v27 = Method_System_Collections_Generic_List_BattleLogicFunction_ExecutedFunctionData__Add__;
        ++v20->fields._version;
        if ( !items )
          break;
        size = v20->fields._size;
        if ( (unsigned int)size >= LODWORD(items->max_length) )
        {
          System_Collections_Generic_List_object___AddWithResize(
            v20,
            (Il2CppObject *)v22,
            *(const MethodInfo_37987BC **)(*(_QWORD *)(v27[4] + 192LL) + 112LL));
        }
        else
        {
          v29 = &items->obj.klass + size;
          v20->fields._size = size + 1;
          v29[4] = (Il2CppClass *)v22;
          sub_1C32BC4((CGThumbnailListItem_o *)(v29 + 4), (int32_t)v22, v24, v25);
        }
      }
      if ( (__int64)++v11 >= SLODWORD(targetIds->max_length) )
        return;
    }
LABEL_19:
    sub_1C32E7C(Index);
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
    sub_1C32E7C(this);
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
    sub_1C32E7C(this);
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
    sub_1C32E7C(this);
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

  BattleLogicFunction_CommonCheckDuplicateFunction___ctor((BattleLogicFunction_CommonCheckDuplicateFunction_o *)this, 0);
  this->fields.argument = argument;
  sub_1C32BC4((CGThumbnailListItem_o *)&this->fields.argument, (int32_t)argument, v5, v6);
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
    sub_1C32E7C(0);
  v4 = BattleLogicFunction_CommonSideEffectFunctionArgument__getCheckBuffFuncList(argument, 0);
  this->fields.executedFuncList = v4;
  sub_1C32BC4((CGThumbnailListItem_o *)&this->fields, (int32_t)v4, v5, v6);
}


bool BattleLogicFunction_CommonSideEffectCheckDuplicateFunction__isNotExecLocal(
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
             0);
  if ( !targetIds )
LABEL_7:
    sub_1C32E7C(this);
  if ( !LODWORD(targetIds->max_length) )
    sub_1C32E84(this);
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

  if ( (byte_4C3AA45 & 1) == 0 )
  {
    sub_1C32C20(&Method_System_Collections_Generic_Dictionary_int__List_BattleLogicFunction_ExecutedFunctionData____ctor__);
    sub_1C32C20(&System_Collections_Generic_Dictionary_int__List_BattleLogicFunction_ExecutedFunctionData___TypeInfo);
    byte_4C3AA45 = 1;
  }
  *(&this->fields._SkillTiming_k__BackingField + 1) = -1;
  v3 = (System_Collections_Generic_Dictionary_int__object__o *)sub_1C32E6C(System_Collections_Generic_Dictionary_int__List_BattleLogicFunction_ExecutedFunctionData___TypeInfo);
  System_Collections_Generic_Dictionary_int__object____ctor(
    v3,
    (const MethodInfo_33EF348 *)Method_System_Collections_Generic_Dictionary_int__List_BattleLogicFunction_ExecutedFunctionData____ctor__);
  *(_QWORD *)&this->fields.buffUniqueId = v3;
  sub_1C32BC4((CGThumbnailListItem_o *)&this->fields.buffUniqueId, (int32_t)v3, v4, v5);
  BattleLogicFunction_FunctionArgument___ctor((BattleLogicFunction_FunctionArgument_o *)this, v6);
}


System_Collections_Generic_List_BattleLogicFunction_ExecutedFunctionData__o *BattleLogicFunction_CommonSideEffectFunctionArgument__getCheckBuffFuncList(
        BattleLogicFunction_CommonSideEffectFunctionArgument_o *this,
        const MethodInfo *method)
{
  System_Collections_Generic_Dictionary_int__object__o *v3; // x0
  System_Collections_Generic_Dictionary_int__object__o *v4; // x20
  int32_t v5; // w21
  System_Collections_Generic_List_object__o *v6; // x22

  if ( (byte_4C3AA44 & 1) == 0 )
  {
    sub_1C32C20(&Method_System_Collections_Generic_Dictionary_int__List_BattleLogicFunction_ExecutedFunctionData___ContainsKey__);
    sub_1C32C20(&Method_System_Collections_Generic_Dictionary_int__List_BattleLogicFunction_ExecutedFunctionData___get_Item__);
    sub_1C32C20(&Method_System_Collections_Generic_Dictionary_int__List_BattleLogicFunction_ExecutedFunctionData___set_Item__);
    sub_1C32C20(&Method_System_Collections_Generic_List_BattleLogicFunction_ExecutedFunctionData___ctor__);
    sub_1C32C20(&System_Collections_Generic_List_BattleLogicFunction_ExecutedFunctionData__TypeInfo);
    byte_4C3AA44 = 1;
  }
  v3 = *(System_Collections_Generic_Dictionary_int__object__o **)&this->fields.buffUniqueId;
  if ( !v3 )
    goto LABEL_9;
  if ( !System_Collections_Generic_Dictionary_int__object___ContainsKey(
          v3,
          *(&this->fields._SkillTiming_k__BackingField + 1),
          (const MethodInfo_33EFF10 *)Method_System_Collections_Generic_Dictionary_int__List_BattleLogicFunction_ExecutedFunctionData___ContainsKey__) )
  {
    v4 = *(System_Collections_Generic_Dictionary_int__object__o **)&this->fields.buffUniqueId;
    v5 = *(&this->fields._SkillTiming_k__BackingField + 1);
    v6 = (System_Collections_Generic_List_object__o *)sub_1C32E6C(System_Collections_Generic_List_BattleLogicFunction_ExecutedFunctionData__TypeInfo);
    System_Collections_Generic_List_object____ctor(
      v6,
      (const MethodInfo_3797F88 *)Method_System_Collections_Generic_List_BattleLogicFunction_ExecutedFunctionData___ctor__);
    if ( !v4 )
      goto LABEL_9;
    System_Collections_Generic_Dictionary_int__object___set_Item(
      v4,
      v5,
      (Il2CppObject *)v6,
      (const MethodInfo_33EFD08 *)Method_System_Collections_Generic_Dictionary_int__List_BattleLogicFunction_ExecutedFunctionData___set_Item__);
  }
  v3 = *(System_Collections_Generic_Dictionary_int__object__o **)&this->fields.buffUniqueId;
  if ( !v3 )
LABEL_9:
    sub_1C32E7C(v3);
  return (System_Collections_Generic_List_BattleLogicFunction_ExecutedFunctionData__o *)System_Collections_Generic_Dictionary_int__object___get_Item(
                                                                                          v3,
                                                                                          *(&this->fields._SkillTiming_k__BackingField
                                                                                          + 1),
                                                                                          (const MethodInfo_33EFC7C *)Method_System_Collections_Generic_Dictionary_int__List_BattleLogicFunction_ExecutedFunctionData___get_Item__);
}


void BattleLogicFunction_ExecutedFunctionData___ctor(
        BattleLogicFunction_ExecutedFunctionData_o *this,
        DataVals_o *vals,
        int32_t targetId,
        const MethodInfo *method)
{
  __int64 v7; // x0
  int32_t funcIndex; // w8

  *(_QWORD *)&this->fields.index = -1;
  System_Object___ctor((Il2CppObject *)this, 0);
  if ( !vals )
    sub_1C32E7C(v7);
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
    sub_1C32E7C(this);
  return this->fields.index == vals->fields.funcIndex
      && (targetId == -1 || this->fields.targetId == targetId)
      && (!isCheckEnable || this->fields.isEnable);
}


void BattleLogicFunction_FuncSideEffectFunctionArgument___ctor(
        BattleLogicFunction_FuncSideEffectFunctionArgument_o *this,
        const MethodInfo *method)
{
  System_Collections_Generic_HashSet_int__o *v3; // x20
  int32_t v4; // w2
  const MethodInfo *v5; // x3
  const MethodInfo *v6; // x1
  BattleLogicFunction_CommonSideEffectCheckDuplicateFunction_o *v7; // x20
  int32_t v8; // w2
  const MethodInfo *v9; // x3

  if ( (byte_4C3AA47 & 1) == 0 )
  {
    sub_1C32C20(&BattleLogicFunction_CommonSideEffectCheckDuplicateFunction_TypeInfo);
    sub_1C32C20(&Method_System_Collections_Generic_HashSet_int___ctor__);
    sub_1C32C20(&System_Collections_Generic_HashSet_int__TypeInfo);
    byte_4C3AA47 = 1;
  }
  v3 = (System_Collections_Generic_HashSet_int__o *)sub_1C32E6C(System_Collections_Generic_HashSet_int__TypeInfo);
  System_Collections_Generic_HashSet_int____ctor(
    v3,
    (const MethodInfo_3649220 *)Method_System_Collections_Generic_HashSet_int___ctor__);
  this->fields.executedBuffFuncDic = (struct System_Collections_Generic_Dictionary_int__List_BattleLogicFunction_ExecutedFunctionData___o *)v3;
  sub_1C32BC4((CGThumbnailListItem_o *)&this->fields.executedBuffFuncDic, (int32_t)v3, v4, v5);
  BattleLogicFunction_CommonSideEffectFunctionArgument___ctor(
    (BattleLogicFunction_CommonSideEffectFunctionArgument_o *)this,
    v6);
  v7 = (BattleLogicFunction_CommonSideEffectCheckDuplicateFunction_o *)sub_1C32E6C(BattleLogicFunction_CommonSideEffectCheckDuplicateFunction_TypeInfo);
  BattleLogicFunction_CommonSideEffectCheckDuplicateFunction___ctor(
    v7,
    (BattleLogicFunction_CommonSideEffectFunctionArgument_o *)this,
    0);
  this->fields.checkDuplicate = (struct BattleLogicFunction_CheckDuplicateFunction_o *)v7;
  sub_1C32BC4((CGThumbnailListItem_o *)&this->fields.checkDuplicate, (int32_t)v7, v8, v9);
}


void BattleLogicFunction_FuncSideEffectFunctionArgument__AddTarget(
        BattleLogicFunction_FuncSideEffectFunctionArgument_o *this,
        BattleLogicFunctionProcess_FunctionTargetCheck_o *funcTarget,
        const MethodInfo *method)
{
  BattleLogicFunction_FuncSideEffectFunctionArgument_o *v4; // x20
  int32_t v5; // w0

  v4 = this;
  if ( (byte_4C3AA49 & 1) == 0 )
  {
    this = (BattleLogicFunction_FuncSideEffectFunctionArgument_o *)sub_1C32C20(&Method_System_Collections_Generic_HashSet_int__Add__);
    byte_4C3AA49 = 1;
  }
  if ( !funcTarget )
    goto LABEL_11;
  this = (BattleLogicFunction_FuncSideEffectFunctionArgument_o *)funcTarget->fields._funcUnit_k__BackingField;
  if ( !this )
    goto LABEL_11;
  v5 = BattleLogicFunctionProcess_FunctionUnitCheck__get_FuncType(
         (BattleLogicFunctionProcess_FunctionUnitCheck_o *)this,
         0);
  if ( !FuncList__IsNotContainsDefaultTarget(v5, 0)
    && (funcTarget->fields._result_k__BackingField || funcTarget->fields.invalidType) )
  {
    this = (BattleLogicFunction_FuncSideEffectFunctionArgument_o *)v4->fields.executedBuffFuncDic;
    if ( this )
    {
      System_Collections_Generic_HashSet_int___Add(
        (System_Collections_Generic_HashSet_int__o *)this,
        funcTarget->fields._targetId_k__BackingField,
        (const MethodInfo_364A424 *)Method_System_Collections_Generic_HashSet_int__Add__);
      return;
    }
LABEL_11:
    sub_1C32E7C(this);
  }
}


void BattleLogicFunction_FuncSideEffectFunctionArgument__AddTarget_46711396(
        BattleLogicFunction_FuncSideEffectFunctionArgument_o *this,
        BattleLogicFunction_FuncSideEffectFunctionArgument_o *arg,
        const MethodInfo *method)
{
  System_Collections_Generic_HashSet_int__o *executedBuffFuncDic; // x0

  if ( (byte_4C3AA4A & 1) == 0 )
  {
    sub_1C32C20(&Method_System_Collections_Generic_HashSet_int__UnionWith__);
    byte_4C3AA4A = 1;
  }
  if ( arg )
  {
    executedBuffFuncDic = (System_Collections_Generic_HashSet_int__o *)this->fields.executedBuffFuncDic;
    if ( !executedBuffFuncDic )
      sub_1C32E7C(0);
    System_Collections_Generic_HashSet_int___UnionWith(
      executedBuffFuncDic,
      (System_Collections_Generic_IEnumerable_T__o *)arg->fields.executedBuffFuncDic,
      (const MethodInfo_364A434 *)Method_System_Collections_Generic_HashSet_int__UnionWith__);
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

  if ( (byte_4C3AA48 & 1) == 0 )
  {
    sub_1C32C20(&Method_System_Array_Empty_BuffList_ACTION___);
    byte_4C3AA48 = 1;
  }
  v4 = Method_System_Array_Empty_BuffList_ACTION___;
  v5 = *((_QWORD *)Method_System_Array_Empty_BuffList_ACTION___ + 7);
  if ( !v5 )
  {
    sub_1C83390(Method_System_Array_Empty_BuffList_ACTION___);
    v5 = v4[7];
  }
  v6 = *(_QWORD *)(v5 + 16);
  if ( (*(_BYTE *)(v6 + 309) & 1) == 0 )
    v6 = sub_1C83334(inited);
  if ( !*(_DWORD *)(v6 + 224) )
    inited = j_il2cpp_runtime_class_init_0(v6);
  v7 = *(_QWORD *)(v4[7] + 16LL);
  if ( (*(_BYTE *)(v7 + 309) & 1) == 0 )
    v7 = sub_1C83334(inited);
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

  if ( (byte_4C3AA4B & 1) == 0 )
  {
    sub_1C32C20(&Method_System_Linq_Enumerable_ToArray_int___);
    byte_4C3AA4B = 1;
  }
  v9 = System_Linq_Enumerable__ToArray_int_(
         (System_Collections_Generic_IEnumerable_TSource__o *)this->fields.executedBuffFuncDic,
         (const MethodInfo_311C8F4 *)Method_System_Linq_Enumerable_ToArray_int___);
  if ( !logicFunc )
    sub_1C32E7C(v9);
  BattleLogicFunction__SetFuncSideEffect(logicFunc, this, mainActionData, actorSvtData, v9, 0);
}


void BattleLogicFunction_FunctionArgument___ctor(
        BattleLogicFunction_FunctionArgument_o *this,
        const MethodInfo *method)
{
  Il2CppObject *v3; // x20
  int32_t v4; // w2
  const MethodInfo *v5; // x3

  if ( (byte_4C3AA43 & 1) == 0 )
  {
    sub_1C32C20(&BattleLogicFunction_CheckDuplicateFunction_TypeInfo);
    byte_4C3AA43 = 1;
  }
  v3 = (Il2CppObject *)sub_1C32E6C(BattleLogicFunction_CheckDuplicateFunction_TypeInfo);
  System_Object___ctor(v3, 0);
  this->fields.checkDuplicate = (struct BattleLogicFunction_CheckDuplicateFunction_o *)v3;
  sub_1C32BC4((CGThumbnailListItem_o *)&this->fields.checkDuplicate, (int32_t)v3, v4, v5);
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
    sub_1C32E7C(0);
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
  sub_1C32BC4(
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


bool BattleLogicFunction_FunctionArgument__get_IsTimingPassiveOnTransform(
        BattleLogicFunction_FunctionArgument_o *this,
        const MethodInfo *method)
{
  return this->fields._SkillTiming_k__BackingField == 1;
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
  sub_1C32BC4(
    (CGThumbnailListItem_o *)&this->fields._FuncSideEffectArg_k__BackingField,
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

  if ( (byte_4C3AA64 & 1) == 0 )
  {
    sub_1C32C20(&BattleLogicFunction_PreMainAttackSideEffectMakeArgument_TypeInfo);
    byte_4C3AA64 = 1;
  }
  v2 = (BattleLogicFunction_SideEffectMakeArgument_o *)sub_1C32E6C(BattleLogicFunction_PreMainAttackSideEffectMakeArgument_TypeInfo);
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
  struct BattleLogicFunction_FunctionArgument_o *externalArg; // x0

  if ( (byte_4C3AA55 & 1) == 0 )
  {
    sub_1C32C20(&Method_System_Collections_Generic_Dictionary_KeyValuePair_int__int___bool___ctor__);
    sub_1C32C20(&System_Collections_Generic_Dictionary_KeyValuePair_int__int___bool__TypeInfo);
    sub_1C32C20(&BattleLogicFunction_FunctionArgument_TypeInfo);
    byte_4C3AA55 = 1;
  }
  v7 = (System_Collections_Generic_Dictionary_KeyValuePair_int__int___bool__o *)sub_1C32E6C(System_Collections_Generic_Dictionary_KeyValuePair_int__int___bool__TypeInfo);
  System_Collections_Generic_Dictionary_KeyValuePair_int__int___bool____ctor(
    v7,
    (const MethodInfo_33A775C *)Method_System_Collections_Generic_Dictionary_KeyValuePair_int__int___bool___ctor__);
  this->fields.funcResults = v7;
  sub_1C32BC4((CGThumbnailListItem_o *)&this->fields, (int32_t)v7, v8, v9);
  this->fields.tdCommandTypeChange = -1;
  System_Object___ctor((Il2CppObject *)this, 0);
  if ( !argument )
  {
    argument = (BattleLogicFunction_FunctionArgument_o *)sub_1C32E6C(BattleLogicFunction_FunctionArgument_TypeInfo);
    BattleLogicFunction_FunctionArgument___ctor(argument, 0);
  }
  this->fields.externalArg = argument;
  sub_1C32BC4((CGThumbnailListItem_o *)&this->fields.externalArg, (int32_t)argument, v10, v11);
  externalArg = this->fields.externalArg;
  if ( !externalArg
    || (externalArg = (struct BattleLogicFunction_FunctionArgument_o *)((__int64 (__fastcall *)(struct BattleLogicFunction_FunctionArgument_o *, const MethodInfo *))externalArg->klass->vtable._4_Init.methodPtr)(
                                                                         externalArg,
                                                                         externalArg->klass->vtable._4_Init.method),
        !actionData) )
  {
    sub_1C32E7C(externalArg);
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
  int v11; // w23
  int v12; // w8
  System_Collections_Generic_KeyValuePair_int__int__o p_key; // x0
  System_Collections_Generic_KeyValuePair_int__int__o v14; // x1
  char v15; // w21
  _BOOL4 v16; // w24
  struct System_Collections_Generic_Dictionary_KeyValuePair_int__int___bool__o *funcResults; // x20
  System_Func_KeyValuePair_KeyValuePair_int__int___bool___bool__o *v18; // x0
  System_Func_TSource__bool__o *v19; // x22
  System_Collections_Generic_IEnumerable_TSource__o *v20; // x20
  System_Collections_Generic_IEnumerable_TSource__c *klass; // x8
  __int64 v22; // x9
  int32_t *p_offset; // x10
  __int64 v24; // x0
  System_Collections_Generic_IEnumerable_TSource__o *v25; // x19
  System_Func_KeyValuePair_KeyValuePair_int__int___bool___bool__o *v26; // x20
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
  char v38; // w1
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

  if ( (byte_4C3AA57 & 1) == 0 )
  {
    sub_1C32C20(&Method_System_Collections_Generic_Dictionary_KeyValuePair_int__int___bool__TryGetValue__);
    sub_1C32C20(&Method_System_Linq_Enumerable_Any_KeyValuePair_KeyValuePair_int__int___bool____);
    sub_1C32C20(&Method_System_Linq_Enumerable_Count_KeyValuePair_KeyValuePair_int__int___bool____);
    sub_1C32C20(&Method_System_Linq_Enumerable_Where_KeyValuePair_KeyValuePair_int__int___bool____);
    sub_1C32C20(&System_Func_KeyValuePair_KeyValuePair_int__int___bool___bool__TypeInfo);
    sub_1C32C20(&System_IDisposable_TypeInfo);
    sub_1C32C20(&System_Collections_Generic_IEnumerable_KeyValuePair_KeyValuePair_int__int___bool___TypeInfo);
    sub_1C32C20(&System_Collections_Generic_IEnumerator_KeyValuePair_KeyValuePair_int__int___bool___TypeInfo);
    sub_1C32C20(&System_Collections_IEnumerator_TypeInfo);
    sub_1C32C20(&Method_System_Collections_Generic_KeyValuePair_int__int___ctor__);
    sub_1C32C20(&Method_System_Collections_Generic_KeyValuePair_KeyValuePair_int__int___bool__get_Key__);
    sub_1C32C20(&Method_System_Collections_Generic_KeyValuePair_int__int__get_Value__);
    sub_1C32C20(&Method_System_Collections_Generic_KeyValuePair_KeyValuePair_int__int___bool__get_Value__);
    sub_1C32C20(&System_Math_TypeInfo);
    sub_1C32C20(&Method_BattleLogicFunction_ProcListInArgs___c__DisplayClass40_0__DidTriggeredFuncHaveSpecifyResults_b__0__);
    sub_1C32C20(&Method_BattleLogicFunction_ProcListInArgs___c__DisplayClass40_0__DidTriggeredFuncHaveSpecifyResults_b__1__);
    sub_1C32C20(&Method_BattleLogicFunction_ProcListInArgs___c__DisplayClass40_0__DidTriggeredFuncHaveSpecifyResults_b__2__);
    sub_1C32C20(&BattleLogicFunction_ProcListInArgs___c__DisplayClass40_0_TypeInfo);
    byte_4C3AA57 = 1;
  }
  isSameTargetOnly = 0;
  isAllCond = 0;
  key = 0;
  value = 0;
  v9 = sub_1C32E6C(BattleLogicFunction_ProcListInArgs___c__DisplayClass40_0_TypeInfo);
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
  v11 = (int)TriggeredFuncIndex;
  *(_DWORD *)(v9 + 16) = (_DWORD)TriggeredFuncIndex;
  if ( !(_DWORD)TriggeredFuncIndex )
  {
    v15 = 1;
    return v15 & 1;
  }
  *(_BYTE *)(v9 + 20) = (int)TriggeredFuncIndex > 0;
  if ( !System_Math_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(System_Math_TypeInfo);
  if ( v11 >= 0 )
    v12 = v11;
  else
    v12 = -v11;
  *(_DWORD *)(v9 + 16) = v12 - 1;
  if ( isSameTargetOnly )
  {
    p_key = (System_Collections_Generic_KeyValuePair_int__int__o)&key;
    System_Collections_Generic_KeyValuePair_int__int____ctor(
      p_key,
      v12 - 1,
      targetId,
      (const MethodInfo_36CEAC4 *)Method_System_Collections_Generic_KeyValuePair_int__int___ctor__);
    TriggeredFuncIndex = this->fields.funcResults;
    if ( TriggeredFuncIndex )
    {
      v14 = key;
      if ( System_Collections_Generic_Dictionary_KeyValuePair_int__int___bool___TryGetValue(
             TriggeredFuncIndex,
             v14,
             &value,
             (const MethodInfo_33A98B8 *)Method_System_Collections_Generic_Dictionary_KeyValuePair_int__int___bool__TryGetValue__) )
      {
        v15 = value == *(_BYTE *)(v9 + 20);
        return v15 & 1;
      }
LABEL_24:
      v15 = 0;
      return v15 & 1;
    }
    goto LABEL_53;
  }
  v16 = isAllCond;
  funcResults = this->fields.funcResults;
  v18 = (System_Func_KeyValuePair_KeyValuePair_int__int___bool___bool__o *)sub_1C32E6C(System_Func_KeyValuePair_KeyValuePair_int__int___bool___bool__TypeInfo);
  v19 = (System_Func_TSource__bool__o *)v18;
  if ( !v16 )
  {
    System_Func_KeyValuePair_KeyValuePair_int__int___bool___bool____ctor(
      v18,
      (Il2CppObject *)v9,
      Method_BattleLogicFunction_ProcListInArgs___c__DisplayClass40_0__DidTriggeredFuncHaveSpecifyResults_b__0__,
      0);
    v25 = System_Linq_Enumerable__Where_KeyValuePair_KeyValuePair_int__int___bool__(
            (System_Collections_Generic_IEnumerable_TSource__o *)funcResults,
            v19,
            (const MethodInfo_3121F60 *)Method_System_Linq_Enumerable_Where_KeyValuePair_KeyValuePair_int__int___bool____);
    v26 = (System_Func_KeyValuePair_KeyValuePair_int__int___bool___bool__o *)sub_1C32E6C(System_Func_KeyValuePair_KeyValuePair_int__int___bool___bool__TypeInfo);
    System_Func_KeyValuePair_KeyValuePair_int__int___bool___bool____ctor(
      v26,
      (Il2CppObject *)v9,
      Method_BattleLogicFunction_ProcListInArgs___c__DisplayClass40_0__DidTriggeredFuncHaveSpecifyResults_b__1__,
      0);
    v15 = System_Linq_Enumerable__Any_KeyValuePair_KeyValuePair_int__int___bool__(
            v25,
            (System_Func_TSource__bool__o *)v26,
            (const MethodInfo_30E9498 *)Method_System_Linq_Enumerable_Any_KeyValuePair_KeyValuePair_int__int___bool____);
    return v15 & 1;
  }
  System_Func_KeyValuePair_KeyValuePair_int__int___bool___bool____ctor(
    v18,
    (Il2CppObject *)v9,
    Method_BattleLogicFunction_ProcListInArgs___c__DisplayClass40_0__DidTriggeredFuncHaveSpecifyResults_b__2__,
    0);
  v20 = System_Linq_Enumerable__Where_KeyValuePair_KeyValuePair_int__int___bool__(
          (System_Collections_Generic_IEnumerable_TSource__o *)funcResults,
          v19,
          (const MethodInfo_3121F60 *)Method_System_Linq_Enumerable_Where_KeyValuePair_KeyValuePair_int__int___bool____);
  TriggeredFuncIndex = (System_Collections_Generic_Dictionary_KeyValuePair_int__int___bool__o *)System_Linq_Enumerable__Count_KeyValuePair_KeyValuePair_int__int___bool__(
                                                                                                  v20,
                                                                                                  (const MethodInfo_30FC47C *)Method_System_Linq_Enumerable_Count_KeyValuePair_KeyValuePair_int__int___bool____);
  if ( !(_DWORD)TriggeredFuncIndex )
    goto LABEL_24;
  if ( !v20 )
LABEL_53:
    sub_1C32E7C(TriggeredFuncIndex);
  klass = v20->klass;
  v22 = *(unsigned __int16 *)&v20->klass->_2.rank;
  if ( *(_WORD *)&v20->klass->_2.rank )
  {
    p_offset = &klass->_1.interfaceOffsets->offset;
    while ( *((System_Collections_Generic_IEnumerable_KeyValuePair_KeyValuePair_int__int___bool___c **)p_offset - 1) != System_Collections_Generic_IEnumerable_KeyValuePair_KeyValuePair_int__int___bool___TypeInfo )
    {
      --v22;
      p_offset += 4;
      if ( !v22 )
        goto LABEL_23;
    }
    v24 = (__int64)&klass->vtable[*p_offset];
  }
  else
  {
LABEL_23:
    v24 = sub_1C83438(
            v20,
            System_Collections_Generic_IEnumerable_KeyValuePair_KeyValuePair_int__int___bool___TypeInfo,
            0);
  }
  v27 = (*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerable_TSource__o *, _QWORD))v24)(
          v20,
          *(_QWORD *)(v24 + 8));
  if ( !v27 )
    sub_1C32E7C(0);
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
      v31 = sub_1C83438(v27, System_Collections_IEnumerator_TypeInfo, 0);
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
      v36 = sub_1C83438(
              v27,
              System_Collections_Generic_IEnumerator_KeyValuePair_KeyValuePair_int__int___bool___TypeInfo,
              0);
    }
    v37 = (*(__int64 (__fastcall **)(__int64, _QWORD))v36)(v27, *(_QWORD *)(v36 + 8));
    if ( !data )
      sub_1C32E7C(v37);
    v39 = v38;
    ServantData = BattleData__getServantData(data, SHIDWORD(v37), 0);
    if ( ServantData )
    {
      if ( !ServantData->fields.isDeadAnime && *(_BYTE *)(v9 + 20) != (v39 != 0) )
        break;
    }
  }
  v15 = v32 ^ 1;
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
    v44 = sub_1C83438(v27, System_IDisposable_TypeInfo, 0);
  }
  (*(void (__fastcall **)(__int64, _QWORD))v44)(v27, *(_QWORD *)(v44 + 8));
  return v15 & 1;
}


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
  if ( (byte_4C3AA58 & 1) == 0 )
  {
    sub_1C32C20(&bool___TypeInfo);
    sub_1C32C20(&Method_System_Linq_Enumerable_Any_KeyValuePair_KeyValuePair_int__int___bool____);
    sub_1C32C20(&Method_System_Linq_Enumerable_Where_KeyValuePair_KeyValuePair_int__int___bool____);
    sub_1C32C20(&System_Func_KeyValuePair_KeyValuePair_int__int___bool___bool__TypeInfo);
    sub_1C32C20(&int___TypeInfo);
    sub_1C32C20(&System_Math_TypeInfo);
    sub_1C32C20(&Method_BattleLogicFunction_ProcListInArgs___c__DisplayClass41_0__DidTriggeredFuncListHaveSpecifyResults_b__0__);
    sub_1C32C20(&Method_BattleLogicFunction_ProcListInArgs___c__DisplayClass41_0__DidTriggeredFuncListHaveSpecifyResults_b__1__);
    this = (BattleLogicFunction_ProcListInArgs_o *)sub_1C32C20(&BattleLogicFunction_ProcListInArgs___c__DisplayClass41_0_TypeInfo);
    byte_4C3AA58 = 1;
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
      v8 = sub_1C32CC8(bool___TypeInfo, LODWORD(TriggeredFuncIndexArray->max_length));
      this = (BattleLogicFunction_ProcListInArgs_o *)sub_1C32CC8(
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
          v15 = sub_1C32E6C(BattleLogicFunction_ProcListInArgs___c__DisplayClass41_0_TypeInfo);
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
          v17 = (System_Func_KeyValuePair_KeyValuePair_int__int___bool___bool__o *)sub_1C32E6C(System_Func_KeyValuePair_KeyValuePair_int__int___bool___bool__TypeInfo);
          System_Func_KeyValuePair_KeyValuePair_int__int___bool___bool____ctor(
            v17,
            (Il2CppObject *)v15,
            Method_BattleLogicFunction_ProcListInArgs___c__DisplayClass41_0__DidTriggeredFuncListHaveSpecifyResults_b__0__,
            0);
          v18 = System_Linq_Enumerable__Where_KeyValuePair_KeyValuePair_int__int___bool__(
                  funcResults,
                  (System_Func_TSource__bool__o *)v17,
                  (const MethodInfo_3121F60 *)Method_System_Linq_Enumerable_Where_KeyValuePair_KeyValuePair_int__int___bool____);
          v19 = (System_Func_KeyValuePair_KeyValuePair_int__int___bool___bool__o *)sub_1C32E6C(System_Func_KeyValuePair_KeyValuePair_int__int___bool___bool__TypeInfo);
          System_Func_KeyValuePair_KeyValuePair_int__int___bool___bool____ctor(
            v19,
            (Il2CppObject *)v15,
            Method_BattleLogicFunction_ProcListInArgs___c__DisplayClass41_0__DidTriggeredFuncListHaveSpecifyResults_b__1__,
            0);
          v20 = System_Linq_Enumerable__Any_KeyValuePair_KeyValuePair_int__int___bool__(
                  v18,
                  (System_Func_TSource__bool__o *)v19,
                  (const MethodInfo_30E9498 *)Method_System_Linq_Enumerable_Any_KeyValuePair_KeyValuePair_int__int___bool____);
          v7 = v20 || !isAndCheck;
          if ( !v20 && isAndCheck || (v20 & ~isAndCheck & 1) != 0 )
            return v7 & 1;
          if ( (__int64)++v14 >= SLODWORD(v10->fields.externalArg) )
            goto LABEL_31;
        }
LABEL_33:
        sub_1C32E84(this);
      }
    }
LABEL_34:
    sub_1C32E7C(this);
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

  familyLinkageIdCacher = BattleLogicFunction_ProcListInArgs__get_familyLinkageIdCacher(
                            this,
                            *(const MethodInfo **)&linkageIndividuality);
  if ( !familyLinkageIdCacher )
    sub_1C32E7C(0);
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

  familyLinkageIdCacher = BattleLogicFunction_ProcListInArgs__get_familyLinkageIdCacher(
                            this,
                            (const MethodInfo *)targetSvtData);
  if ( !familyLinkageIdCacher )
    sub_1C32E7C(0);
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
    sub_1C32E7C(this);
  return externalArg->fields.grantSkillType == type;
}


BattleLogicFunction_CheckDuplicateFunction_o *BattleLogicFunction_ProcListInArgs__get_CheckDuplicateFunc(
        BattleLogicFunction_ProcListInArgs_o *this,
        const MethodInfo *method)
{
  struct BattleLogicFunction_FunctionArgument_o *externalArg; // x8

  externalArg = this->fields.externalArg;
  if ( !externalArg )
    sub_1C32E7C(this);
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
    sub_1C32E7C(this);
  return externalArg->fields._FuncSideEffectArg_k__BackingField;
}


int32_t BattleLogicFunction_ProcListInArgs__get_GrantSkillType(
        BattleLogicFunction_ProcListInArgs_o *this,
        const MethodInfo *method)
{
  struct BattleLogicFunction_FunctionArgument_o *externalArg; // x8

  externalArg = this->fields.externalArg;
  if ( !externalArg )
    sub_1C32E7C(this);
  return externalArg->fields.grantSkillType;
}


bool BattleLogicFunction_ProcListInArgs__get_IsCommandSideEffect(
        BattleLogicFunction_ProcListInArgs_o *this,
        const MethodInfo *method)
{
  struct BattleLogicFunction_FunctionArgument_o *externalArg; // x8

  externalArg = this->fields.externalArg;
  if ( !externalArg )
    sub_1C32E7C(this);
  return externalArg->fields.isCommandSideEffect;
}


bool BattleLogicFunction_ProcListInArgs__get_IsPassive(
        BattleLogicFunction_ProcListInArgs_o *this,
        const MethodInfo *method)
{
  struct BattleLogicFunction_FunctionArgument_o *externalArg; // x8

  externalArg = this->fields.externalArg;
  if ( !externalArg )
    sub_1C32E7C(this);
  return externalArg->fields.isPassive;
}


bool BattleLogicFunction_ProcListInArgs__get_IsShift(
        BattleLogicFunction_ProcListInArgs_o *this,
        const MethodInfo *method)
{
  struct BattleLogicFunction_FunctionArgument_o *externalArg; // x8

  externalArg = this->fields.externalArg;
  if ( !externalArg )
    sub_1C32E7C(this);
  return externalArg->fields.isShift;
}


bool BattleLogicFunction_ProcListInArgs__get_IsShowBattlePointEffect(
        BattleLogicFunction_ProcListInArgs_o *this,
        const MethodInfo *method)
{
  struct BattleLogicFunction_FunctionArgument_o *externalArg; // x8

  externalArg = this->fields.externalArg;
  if ( !externalArg )
    sub_1C32E7C(this);
  return externalArg->fields.isShowBattlePointEffect;
}


bool BattleLogicFunction_ProcListInArgs__get_IsTreasureDvc(
        BattleLogicFunction_ProcListInArgs_o *this,
        const MethodInfo *method)
{
  return this->fields._IsTreasureDvc_k__BackingField;
}


int32_t BattleLogicFunction_ProcListInArgs__get_SkillId(
        BattleLogicFunction_ProcListInArgs_o *this,
        const MethodInfo *method)
{
  struct BattleLogicFunction_FunctionArgument_o *externalArg; // x8

  externalArg = this->fields.externalArg;
  if ( !externalArg )
    sub_1C32E7C(this);
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

  if ( (byte_4C3AA54 & 1) == 0 )
  {
    sub_1C32C20(&GeneratedFamilyLinkageIdCacher_TypeInfo);
    byte_4C3AA54 = 1;
  }
  familyLinkageIdCacher = this->fields._familyLinkageIdCacher;
  p_familyLinkageIdCacher = (CGThumbnailListItem_o *)&this->fields._familyLinkageIdCacher;
  result = familyLinkageIdCacher;
  if ( !familyLinkageIdCacher )
  {
    v6 = (GeneratedFamilyLinkageIdCacher_o *)sub_1C32E6C(GeneratedFamilyLinkageIdCacher_TypeInfo);
    GeneratedFamilyLinkageIdCacher___ctor(v6, 0);
    p_familyLinkageIdCacher->klass = (CGThumbnailListItem_c *)v6;
    sub_1C32BC4(p_familyLinkageIdCacher, (int32_t)v6, v7, v8);
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
  if ( (byte_4C3AA5A & 1) == 0 )
  {
    sub_1C32C20(&BattleLogicFunctionProcess_FunctionUnitCheck___TypeInfo);
    this = (BattleLogicFunction_ProcListInArgs_o *)sub_1C32C20(&BattleLogicFunctionProcess_FunctionUnitCheck_TypeInfo);
    byte_4C3AA5A = 1;
  }
  if ( !dataValsList )
    goto LABEL_36;
  max_length = dataValsList->max_length;
  v13 = sub_1C32CC8(BattleLogicFunctionProcess_FunctionUnitCheck___TypeInfo, (unsigned int)max_length);
  v11->fields._funcUnitArray_k__BackingField = (struct BattleLogicFunctionProcess_FunctionUnitCheck_array *)v13;
  p_funcUnitArray_k__BackingField = &v11->fields._funcUnitArray_k__BackingField;
  sub_1C32BC4((CGThumbnailListItem_o *)&v11->fields._funcUnitArray_k__BackingField, v13, v15, v16);
  funcUnitArray_k__BackingField = v11->fields._funcUnitArray_k__BackingField;
  if ( max_length >= 1 )
  {
    v18 = 0;
    while ( 1 )
    {
      v19 = (BattleLogicFunctionProcess_FunctionUnitCheck_o *)sub_1C32E6C(BattleLogicFunctionProcess_FunctionUnitCheck_TypeInfo);
      BattleLogicFunctionProcess_FunctionUnitCheck___ctor(v19, logic, v11, v20);
      if ( !funcUnitArray_k__BackingField )
        break;
      if ( v19 )
      {
        this = (BattleLogicFunction_ProcListInArgs_o *)sub_1C32D5C(
                                                         v19,
                                                         funcUnitArray_k__BackingField->obj.klass->_1.element_class);
        if ( !this )
        {
          v32 = sub_1C32EA0(0);
          sub_1C32D48(v32, 0);
        }
      }
      if ( v18 >= LODWORD(funcUnitArray_k__BackingField->max_length) )
        goto LABEL_37;
      v23 = &funcUnitArray_k__BackingField->obj.klass + (int)v18;
      v23[4] = (Il2CppClass *)v19;
      sub_1C32BC4((CGThumbnailListItem_o *)(v23 + 4), (int32_t)v19, v21, v22);
      v25 = *p_funcUnitArray_k__BackingField;
      if ( !*p_funcUnitArray_k__BackingField )
        break;
      if ( v18 >= LODWORD(v25->max_length) )
        goto LABEL_37;
      if ( !functionIds )
        break;
      if ( v18 >= LODWORD(functionIds->max_length) || v18 >= LODWORD(dataValsList->max_length) )
LABEL_37:
        sub_1C32E84(this);
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
    sub_1C32E7C(this);
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
  System_Collections_Generic_Dictionary_KeyValuePair_int__int___bool__o *funcResults; // x0
  System_Collections_Generic_KeyValuePair_int__int__o v9; // x1
  System_Collections_Generic_KeyValuePair_int__int__o v10; // x1
  System_Collections_Generic_KeyValuePair_int__int__o key; // [xsp+8h] [xbp-38h] BYREF

  if ( (byte_4C3AA56 & 1) == 0 )
  {
    sub_1C32C20(&Method_System_Collections_Generic_Dictionary_KeyValuePair_int__int___bool__ContainsKey__);
    sub_1C32C20(&Method_System_Collections_Generic_Dictionary_KeyValuePair_int__int___bool__get_Item__);
    sub_1C32C20(&Method_System_Collections_Generic_KeyValuePair_int__int___ctor__);
    byte_4C3AA56 = 1;
  }
  p_key = (System_Collections_Generic_KeyValuePair_int__int__o)&key;
  key = 0;
  System_Collections_Generic_KeyValuePair_int__int____ctor(
    p_key,
    index - 1,
    targetId,
    (const MethodInfo_36CEAC4 *)Method_System_Collections_Generic_KeyValuePair_int__int___ctor__);
  funcResults = this->fields.funcResults;
  if ( !funcResults )
    goto LABEL_9;
  v9 = key;
  if ( !System_Collections_Generic_Dictionary_KeyValuePair_int__int___bool___ContainsKey(
          funcResults,
          v9,
          (const MethodInfo_33A8344 *)Method_System_Collections_Generic_Dictionary_KeyValuePair_int__int___bool__ContainsKey__) )
    return 0;
  funcResults = this->fields.funcResults;
  if ( !funcResults )
LABEL_9:
    sub_1C32E7C(funcResults);
  v10 = key;
  return System_Collections_Generic_Dictionary_KeyValuePair_int__int___bool___get_Item(
           funcResults,
           v10,
           (const MethodInfo_33A8090 *)Method_System_Collections_Generic_Dictionary_KeyValuePair_int__int___bool__get_Item__);
}


void BattleLogicFunction_ProcListInArgs__setFuncResult(
        BattleLogicFunction_ProcListInArgs_o *this,
        int32_t targetId,
        bool result,
        int32_t index,
        const MethodInfo *method)
{
  System_Collections_Generic_KeyValuePair_int__int__o p_key; // x0
  System_Collections_Generic_Dictionary_KeyValuePair_int__int___bool__o *funcResults; // x0
  System_Collections_Generic_KeyValuePair_int__int__o v11; // x1
  System_Collections_Generic_KeyValuePair_int__int__o key; // [xsp+8h] [xbp-38h] BYREF

  if ( (byte_4C3AA59 & 1) == 0 )
  {
    sub_1C32C20(&Method_System_Collections_Generic_Dictionary_KeyValuePair_int__int___bool__set_Item__);
    sub_1C32C20(&Method_System_Collections_Generic_KeyValuePair_int__int___ctor__);
    byte_4C3AA59 = 1;
  }
  p_key = (System_Collections_Generic_KeyValuePair_int__int__o)&key;
  key = 0;
  System_Collections_Generic_KeyValuePair_int__int____ctor(
    p_key,
    index,
    targetId,
    (const MethodInfo_36CEAC4 *)Method_System_Collections_Generic_KeyValuePair_int__int___ctor__);
  funcResults = this->fields.funcResults;
  if ( !funcResults )
    sub_1C32E7C(0);
  v11 = key;
  System_Collections_Generic_Dictionary_KeyValuePair_int__int___bool___set_Item(
    funcResults,
    v11,
    result,
    (const MethodInfo_33A8124 *)Method_System_Collections_Generic_Dictionary_KeyValuePair_int__int___bool__set_Item__);
}


void BattleLogicFunction_ProcListInArgs__set_IsCommandSideEffect(
        BattleLogicFunction_ProcListInArgs_o *this,
        bool value,
        const MethodInfo *method)
{
  struct BattleLogicFunction_FunctionArgument_o *externalArg; // x8

  externalArg = this->fields.externalArg;
  if ( !externalArg )
    sub_1C32E7C(this);
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
    sub_1C32E7C(this);
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
    sub_1C32E7C(this);
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
    sub_1C32E7C(this);
  externalArg->fields.skillId = value;
}


void BattleLogicFunction_ProcListInArgs__set_funcUnitArray(
        BattleLogicFunction_ProcListInArgs_o *this,
        BattleLogicFunctionProcess_FunctionUnitCheck_array *value,
        const MethodInfo *method)
{
  const MethodInfo *v3; // x3

  this->fields._funcUnitArray_k__BackingField = value;
  sub_1C32BC4(
    (CGThumbnailListItem_o *)&this->fields._funcUnitArray_k__BackingField,
    (int32_t)value,
    (int32_t)method,
    v3);
}


void BattleLogicFunction_ProcListInArgs___c__DisplayClass40_0___ctor(
        BattleLogicFunction_ProcListInArgs___c__DisplayClass40_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


bool BattleLogicFunction_ProcListInArgs___c__DisplayClass40_0___DidTriggeredFuncHaveSpecifyResults_b__0(
        BattleLogicFunction_ProcListInArgs___c__DisplayClass40_0_o *this,
        System_Collections_Generic_KeyValuePair_KeyValuePair_int__int___bool__o x,
        const MethodInfo *method)
{
  int32_t key; // w19

  key = x.fields.key.fields.key;
  if ( (byte_4C3AA5C & 1) == 0 )
  {
    sub_1C32C20(&Method_System_Collections_Generic_KeyValuePair_KeyValuePair_int__int___bool__get_Key__);
    sub_1C32C20(&Method_System_Collections_Generic_KeyValuePair_int__int__get_Key__);
    byte_4C3AA5C = 1;
  }
  return this->fields.funcIndex == key;
}


bool BattleLogicFunction_ProcListInArgs___c__DisplayClass40_0___DidTriggeredFuncHaveSpecifyResults_b__1(
        BattleLogicFunction_ProcListInArgs___c__DisplayClass40_0_o *this,
        System_Collections_Generic_KeyValuePair_KeyValuePair_int__int___bool__o x,
        const MethodInfo *method)
{
  bool value; // w19

  value = x.fields.value;
  if ( (byte_4C3AA5D & 1) == 0 )
  {
    sub_1C32C20(&Method_System_Collections_Generic_KeyValuePair_KeyValuePair_int__int___bool__get_Value__);
    byte_4C3AA5D = 1;
  }
  return this->fields.isTrue == value;
}


bool BattleLogicFunction_ProcListInArgs___c__DisplayClass40_0___DidTriggeredFuncHaveSpecifyResults_b__2(
        BattleLogicFunction_ProcListInArgs___c__DisplayClass40_0_o *this,
        System_Collections_Generic_KeyValuePair_KeyValuePair_int__int___bool__o x,
        const MethodInfo *method)
{
  int32_t key; // w19

  key = x.fields.key.fields.key;
  if ( (byte_4C3AA5B & 1) == 0 )
  {
    sub_1C32C20(&Method_System_Collections_Generic_KeyValuePair_KeyValuePair_int__int___bool__get_Key__);
    sub_1C32C20(&Method_System_Collections_Generic_KeyValuePair_int__int__get_Key__);
    byte_4C3AA5B = 1;
  }
  return this->fields.funcIndex == key;
}


void BattleLogicFunction_ProcListInArgs___c__DisplayClass41_0___ctor(
        BattleLogicFunction_ProcListInArgs___c__DisplayClass41_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


bool BattleLogicFunction_ProcListInArgs___c__DisplayClass41_0___DidTriggeredFuncListHaveSpecifyResults_b__0(
        BattleLogicFunction_ProcListInArgs___c__DisplayClass41_0_o *this,
        System_Collections_Generic_KeyValuePair_KeyValuePair_int__int___bool__o x,
        const MethodInfo *method)
{
  int32_t key; // w19

  key = x.fields.key.fields.key;
  if ( (byte_4C3AA5E & 1) == 0 )
  {
    sub_1C32C20(&Method_System_Collections_Generic_KeyValuePair_KeyValuePair_int__int___bool__get_Key__);
    sub_1C32C20(&Method_System_Collections_Generic_KeyValuePair_int__int__get_Key__);
    byte_4C3AA5E = 1;
  }
  return this->fields.funcIndex == key;
}


bool BattleLogicFunction_ProcListInArgs___c__DisplayClass41_0___DidTriggeredFuncListHaveSpecifyResults_b__1(
        BattleLogicFunction_ProcListInArgs___c__DisplayClass41_0_o *this,
        System_Collections_Generic_KeyValuePair_KeyValuePair_int__int___bool__o x,
        const MethodInfo *method)
{
  bool value; // w19

  value = x.fields.value;
  if ( (byte_4C3AA5F & 1) == 0 )
  {
    sub_1C32C20(&Method_System_Collections_Generic_KeyValuePair_KeyValuePair_int__int___bool__get_Value__);
    byte_4C3AA5F = 1;
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

  if ( (byte_4C3AA62 & 1) == 0 )
  {
    sub_1C32C20(&Method_System_Array_Empty_BattleActionData_SideEffectData___);
    byte_4C3AA62 = 1;
  }
  v6 = Method_System_Array_Empty_BattleActionData_SideEffectData___;
  v7 = *((_QWORD *)Method_System_Array_Empty_BattleActionData_SideEffectData___ + 7);
  if ( !v7 )
  {
    sub_1C83390(Method_System_Array_Empty_BattleActionData_SideEffectData___);
    v7 = v6[7];
  }
  v8 = *(_QWORD *)(v7 + 16);
  if ( (*(_BYTE *)(v8 + 309) & 1) == 0 )
    v8 = sub_1C83334(inited);
  if ( !*(_DWORD *)(v8 + 224) )
    inited = j_il2cpp_runtime_class_init_0(v8);
  v9 = *(_QWORD *)(v6[7] + 16LL);
  if ( (*(_BYTE *)(v9 + 309) & 1) == 0 )
    v9 = sub_1C83334(inited);
  v10 = *(struct BattleActionData_SideEffectData_array ***)(v9 + 184);
  v11 = *v10;
  this->fields._SideEffectList_k__BackingField = *v10;
  sub_1C32BC4((CGThumbnailListItem_o *)&this->fields, (int32_t)v11, v2, v3);
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
  int32_t v8; // w2
  const MethodInfo *v9; // x3
  System_Func_T__TResult__o *v10; // x22
  System_Collections_Generic_IEnumerable_TSource__o *v11; // x0
  System_Object_array *v12; // x0
  int32_t v13; // w2
  const MethodInfo *v14; // x3

  if ( (byte_4C3AA60 & 1) == 0 )
  {
    sub_1C32C20(&BuffList_ACTION___TypeInfo);
    sub_1C32C20(&Method_System_Linq_Enumerable_Select_int__BattleActionData_SideEffectData___);
    sub_1C32C20(&Method_System_Linq_Enumerable_ToArray_BattleActionData_SideEffectData___);
    sub_1C32C20(&System_Func_int__BattleActionData_SideEffectData__TypeInfo);
    sub_1C32C20(&Method_BattleLogicFunction_SideEffectMakeArgument___c__DisplayClass9_0__Init_b__0__);
    sub_1C32C20(&BattleLogicFunction_SideEffectMakeArgument___c__DisplayClass9_0_TypeInfo);
    byte_4C3AA60 = 1;
  }
  v5 = sub_1C32E6C(BattleLogicFunction_SideEffectMakeArgument___c__DisplayClass9_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v5, 0);
  v6 = sub_1C32CC8(BuffList_ACTION___TypeInfo, 1);
  v7 = ((__int64 (__fastcall *)(BattleLogicFunction_SideEffectMakeArgument_o *, const MethodInfo *))this->klass->vtable._4_unknown.methodPtr)(
         this,
         this->klass->vtable._4_unknown.method);
  if ( !v6 )
    goto LABEL_7;
  if ( !*(_DWORD *)(v6 + 24) )
    sub_1C32E84(v7);
  *(_DWORD *)(v6 + 32) = v7;
  if ( !v5 )
LABEL_7:
    sub_1C32E7C(v7);
  *(_QWORD *)(v5 + 16) = v6;
  sub_1C32BC4((CGThumbnailListItem_o *)(v5 + 16), v6, v8, v9);
  v10 = (System_Func_T__TResult__o *)sub_1C32E6C(System_Func_int__BattleActionData_SideEffectData__TypeInfo);
  System_Func_int__object____ctor(
    v10,
    (Il2CppObject *)v5,
    Method_BattleLogicFunction_SideEffectMakeArgument___c__DisplayClass9_0__Init_b__0__,
    0);
  v11 = (System_Collections_Generic_IEnumerable_TSource__o *)System_Linq_Enumerable__Select_int__object_(
                                                               (System_Collections_Generic_IEnumerable_TSource__o *)targetIds,
                                                               (System_Func_TSource__TResult__o *)v10,
                                                               (const MethodInfo_3110E00 *)Method_System_Linq_Enumerable_Select_int__BattleActionData_SideEffectData___);
  v12 = System_Linq_Enumerable__ToArray_object_(
          v11,
          (const MethodInfo_311CA8C *)Method_System_Linq_Enumerable_ToArray_BattleActionData_SideEffectData___);
  this->fields._SideEffectList_k__BackingField = (struct BattleActionData_SideEffectData_array *)v12;
  sub_1C32BC4((CGThumbnailListItem_o *)&this->fields, (int32_t)v12, v13, v14);
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
  System_Collections_Generic_IEnumerable_TSource__o *SideEffectList_k__BackingField; // x22
  System_Func_object__bool__o *v8; // x23
  System_Collections_Generic_IEnumerable_TSource__o *v9; // x0
  System_Collections_Generic_IEnumerable_TSource__o *v10; // x22
  System_Collections_Generic_IEnumerable_TSource__o *v11; // x23
  System_Func_object__bool__o *v12; // x24
  System_Collections_Generic_IEnumerable_TSource__o *v13; // x0
  System_Collections_Generic_IEnumerable_TSource__o *v14; // x0
  System_Object_array *v15; // x0
  int32_t v16; // w2
  const MethodInfo *v17; // x3

  if ( (byte_4C3AA61 & 1) == 0 )
  {
    sub_1C32C20(&Method_System_Linq_Enumerable_Concat_BattleActionData_SideEffectData___);
    sub_1C32C20(&Method_System_Linq_Enumerable_ToArray_BattleActionData_SideEffectData___);
    sub_1C32C20(&Method_System_Linq_Enumerable_Where_BattleActionData_SideEffectData___);
    sub_1C32C20(&System_Func_BattleActionData_SideEffectData__bool__TypeInfo);
    sub_1C32C20(&Method_BattleLogicFunction_SideEffectMakeArgument___c__DisplayClass11_0__SortMainTargetToFirst_b__0__);
    sub_1C32C20(&Method_BattleLogicFunction_SideEffectMakeArgument___c__DisplayClass11_0__SortMainTargetToFirst_b__1__);
    sub_1C32C20(&BattleLogicFunction_SideEffectMakeArgument___c__DisplayClass11_0_TypeInfo);
    byte_4C3AA61 = 1;
  }
  v5 = sub_1C32E6C(BattleLogicFunction_SideEffectMakeArgument___c__DisplayClass11_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v5, 0);
  if ( !v5 )
    sub_1C32E7C(v6);
  *(_DWORD *)(v5 + 16) = mainTargetId;
  SideEffectList_k__BackingField = (System_Collections_Generic_IEnumerable_TSource__o *)this->fields._SideEffectList_k__BackingField;
  v8 = (System_Func_object__bool__o *)sub_1C32E6C(System_Func_BattleActionData_SideEffectData__bool__TypeInfo);
  System_Func_object__bool____ctor(
    v8,
    (Il2CppObject *)v5,
    Method_BattleLogicFunction_SideEffectMakeArgument___c__DisplayClass11_0__SortMainTargetToFirst_b__0__,
    0);
  v9 = System_Linq_Enumerable__Where_object_(
         SideEffectList_k__BackingField,
         (System_Func_TSource__bool__o *)v8,
         (const MethodInfo_3123BA8 *)Method_System_Linq_Enumerable_Where_BattleActionData_SideEffectData___);
  v10 = (System_Collections_Generic_IEnumerable_TSource__o *)this->fields._SideEffectList_k__BackingField;
  v11 = v9;
  v12 = (System_Func_object__bool__o *)sub_1C32E6C(System_Func_BattleActionData_SideEffectData__bool__TypeInfo);
  System_Func_object__bool____ctor(
    v12,
    (Il2CppObject *)v5,
    Method_BattleLogicFunction_SideEffectMakeArgument___c__DisplayClass11_0__SortMainTargetToFirst_b__1__,
    0);
  v13 = System_Linq_Enumerable__Where_object_(
          v10,
          (System_Func_TSource__bool__o *)v12,
          (const MethodInfo_3123BA8 *)Method_System_Linq_Enumerable_Where_BattleActionData_SideEffectData___);
  v14 = System_Linq_Enumerable__Concat_object_(
          v11,
          v13,
          (const MethodInfo_30F9DF8 *)Method_System_Linq_Enumerable_Concat_BattleActionData_SideEffectData___);
  v15 = System_Linq_Enumerable__ToArray_object_(
          v14,
          (const MethodInfo_311CA8C *)Method_System_Linq_Enumerable_ToArray_BattleActionData_SideEffectData___);
  this->fields._SideEffectList_k__BackingField = (struct BattleActionData_SideEffectData_array *)v15;
  sub_1C32BC4((CGThumbnailListItem_o *)&this->fields, (int32_t)v15, v16, v17);
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
  sub_1C32BC4((CGThumbnailListItem_o *)&this->fields, (int32_t)value, (int32_t)method, v3);
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
    sub_1C32E7C(this);
  return x->fields.targetId == this->fields.mainTargetId;
}


bool BattleLogicFunction_SideEffectMakeArgument___c__DisplayClass11_0___SortMainTargetToFirst_b__1(
        BattleLogicFunction_SideEffectMakeArgument___c__DisplayClass11_0_o *this,
        BattleActionData_SideEffectData_o *x,
        const MethodInfo *method)
{
  if ( !x )
    sub_1C32E7C(this);
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

  if ( (byte_4C3AA63 & 1) == 0 )
  {
    sub_1C32C20(&BattleActionData_SideEffectData_TypeInfo);
    byte_4C3AA63 = 1;
  }
  buffActs = this->fields.buffActs;
  v6 = (BattleActionData_SideEffectData_o *)sub_1C32E6C(BattleActionData_SideEffectData_TypeInfo);
  BattleActionData_SideEffectData___ctor(v6, id, buffActs, 0);
  return v6;
}


BuffList_ACTION_array *BattleLogicFunction_SkillSideEffectFunctionArgument__GetActArray(
        BattleLogicFunction_SkillSideEffectFunctionArgument_o *this,
        bool isMainOnly,
        const MethodInfo *method)
{
  BuffList_ACTION_array *result; // x0
  int max_length; // w8
  int32_t v6; // w8

  if ( (byte_4C3AA4C & 1) == 0 )
  {
    sub_1C32C20(&BuffList_ACTION___TypeInfo);
    byte_4C3AA4C = 1;
  }
  result = (BuffList_ACTION_array *)sub_1C32CC8(BuffList_ACTION___TypeInfo, 1);
  if ( !result )
    sub_1C32E7C(0);
  max_length = result->max_length;
  if ( !isMainOnly )
  {
    if ( max_length )
    {
      v6 = 122;
      goto LABEL_9;
    }
LABEL_11:
    sub_1C32E84(result);
  }
  if ( !max_length )
    goto LABEL_11;
  v6 = 123;
LABEL_9:
  result->m_Items[0] = v6;
  return result;
}


BuffList_ACTION_array *BattleLogicFunction_TreasureDeviceSideEffectFunctionArgument__GetActArray(
        BattleLogicFunction_TreasureDeviceSideEffectFunctionArgument_o *this,
        bool isMainOnly,
        const MethodInfo *method)
{
  BuffList_ACTION_array *result; // x0
  int max_length; // w8
  int32_t v6; // w8

  if ( (byte_4C3AA4D & 1) == 0 )
  {
    sub_1C32C20(&BuffList_ACTION___TypeInfo);
    byte_4C3AA4D = 1;
  }
  result = (BuffList_ACTION_array *)sub_1C32CC8(BuffList_ACTION___TypeInfo, 1);
  if ( !result )
    sub_1C32E7C(0);
  max_length = result->max_length;
  if ( !isMainOnly )
  {
    if ( max_length )
    {
      v6 = 124;
      goto LABEL_9;
    }
LABEL_11:
    sub_1C32E84(result);
  }
  if ( !max_length )
    goto LABEL_11;
  v6 = 125;
LABEL_9:
  result->m_Items[0] = v6;
  return result;
}


// local variable allocation has failed, the output may be wrong!
void BattleLogicFunction_WarBoardFunctionArgument___ctor(
        BattleLogicFunction_WarBoardFunctionArgument_o *this,
        int32_t targetId,
        const MethodInfo *method)
{
  __int64 v5; // x0
  int32_t v6; // w2
  const MethodInfo *v7; // x3

  if ( (byte_4C3AA4E & 1) == 0 )
  {
    sub_1C32C20(&int___TypeInfo);
    byte_4C3AA4E = 1;
  }
  BattleLogicFunction_FunctionArgument___ctor(
    (BattleLogicFunction_FunctionArgument_o *)this,
    *(const MethodInfo **)&targetId);
  v5 = sub_1C32CC8(int___TypeInfo, 1);
  if ( !v5 )
    sub_1C32E7C(0);
  if ( !*(_DWORD *)(v5 + 24) )
    sub_1C32E84(v5);
  *(_DWORD *)(v5 + 32) = targetId;
  this->fields.fixTargetIds = (struct System_Int32_array *)v5;
  sub_1C32BC4((CGThumbnailListItem_o *)&this->fields.fixTargetIds, v5, v6, v7);
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

  if ( (byte_4C3AA66 & 1) == 0 )
  {
    sub_1C32C20(&BattleLogicFunction___c_TypeInfo);
    byte_4C3AA66 = 1;
  }
  v1 = (Il2CppObject *)sub_1C32E6C(BattleLogicFunction___c_TypeInfo);
  System_Object___ctor(v1, 0);
  BattleLogicFunction___c_TypeInfo->static_fields->__9 = (struct BattleLogicFunction___c_o *)v1;
  sub_1C32BC4((CGThumbnailListItem_o *)BattleLogicFunction___c_TypeInfo->static_fields, (int32_t)v1, v2, v3);
}


void BattleLogicFunction___c___ctor(BattleLogicFunction___c_o *this, const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


bool BattleLogicFunction___c___ApplySubBuffChanges_b__76_1(
        BattleLogicFunction___c_o *this,
        BattleBuffData_BuffData_o *buff,
        const MethodInfo *method)
{
  if ( !buff )
    sub_1C32E7C(this);
  return BattleBuffData_BuffData__get_ExistChangeBgm(buff, 0);
}


int32_t BattleLogicFunction___c___FunctionRevivalInDetail_b__117_0(
        BattleLogicFunction___c_o *this,
        BattleServantData_o *x,
        const MethodInfo *method)
{
  if ( !x || (this = (BattleLogicFunction___c_o *)x->fields.deckSvt) == 0 )
    sub_1C32E7C(this);
  return BattleDeckServantData__GetRevivalTargetId((BattleDeckServantData_o *)this, 0);
}


int32_t BattleLogicFunction___c___FunctionRevivalInDetail_b__117_1(
        BattleLogicFunction___c_o *this,
        System_Linq_IGrouping_int__BattleServantData__o *x,
        const MethodInfo *method)
{
  System_Linq_IGrouping_int__BattleServantData__c *klass; // x8
  __int64 v5; // x9
  int32_t *p_offset; // x10
  __int64 v7; // x0

  if ( (byte_4C3AA68 & 1) == 0 )
  {
    this = (BattleLogicFunction___c_o *)sub_1C32C20(&System_Linq_IGrouping_int__BattleServantData__TypeInfo);
    byte_4C3AA68 = 1;
  }
  if ( !x )
    sub_1C32E7C(this);
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
    v7 = sub_1C83438(x, System_Linq_IGrouping_int__BattleServantData__TypeInfo, 0);
  }
  return (*(__int64 (__fastcall **)(System_Linq_IGrouping_int__BattleServantData__o *, _QWORD))v7)(
           x,
           *(_QWORD *)(v7 + 8));
}


BattleServantData_array *BattleLogicFunction___c___FunctionRevivalInDetail_b__117_2(
        BattleLogicFunction___c_o *this,
        System_Linq_IGrouping_int__BattleServantData__o *x,
        const MethodInfo *method)
{
  if ( (byte_4C3AA69 & 1) == 0 )
  {
    sub_1C32C20(&Method_System_Linq_Enumerable_ToArray_BattleServantData___);
    byte_4C3AA69 = 1;
  }
  return (BattleServantData_array *)System_Linq_Enumerable__ToArray_object_(
                                      (System_Collections_Generic_IEnumerable_TSource__o *)x,
                                      (const MethodInfo_311CA8C *)Method_System_Linq_Enumerable_ToArray_BattleServantData___);
}


bool BattleLogicFunction___c___FunctionRevivalInDetail_b__117_7(
        BattleLogicFunction___c_o *this,
        BattleServantData_o *x,
        const MethodInfo *method)
{
  if ( !x )
    sub_1C32E7C(this);
  return !x->fields.isEnemy;
}


void BattleLogicFunction___c___FunctionRevivalInDetail_b__117_8(
        BattleLogicFunction___c_o *this,
        BattleServantData_o *x,
        const MethodInfo *method)
{
  if ( !x )
    sub_1C32E7C(this);
  BattleServantData__ProcessSkillRevive(x, 0);
}


bool BattleLogicFunction___c___FunctionSubFieldBuff_b__132_1(
        BattleLogicFunction___c_o *this,
        BattleBuffData_BuffData_o *x,
        const MethodInfo *method)
{
  if ( !x )
    sub_1C32E7C(this);
  return x->fields.fieldChangeData != 0;
}


// local variable allocation has failed, the output may be wrong!
System_Guid_o BattleLogicFunction___c___FunctionSwapFieldPosition_b__154_0(
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


bool BattleLogicFunction___c___GetReplaceIndexArray_b__155_0(
        BattleLogicFunction___c_o *this,
        int32_t x,
        const MethodInfo *method)
{
  return x >= 0;
}


// local variable allocation has failed, the output may be wrong!
System_Guid_o BattleLogicFunction___c___GetReplaceIndexArray_b__155_2(
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
    sub_1C32E7C(this);
  BattleActionData__SetPopupOnce(x, 0);
}


bool BattleLogicFunction___c___functionMoveState_b__119_2(
        BattleLogicFunction___c_o *this,
        BattleBuffData_BuffData_o *x,
        const MethodInfo *method)
{
  if ( !x )
    sub_1C32E7C(this);
  return BattleBuffData_BuffData__get_ExistChangeBgm(x, 0);
}


void BattleLogicFunction___c___functionPtShuffle_b__98_0(
        BattleLogicFunction___c_o *this,
        BattleServantData_o *s,
        const MethodInfo *method)
{
  __int64 Next; // x0

  Next = BattleRandom__getNext(1000, 0);
  if ( !s )
    sub_1C32E7C(Next);
  s->fields._shuffuleSeed = Next;
}


int32_t BattleLogicFunction___c___functionPtShuffle_b__98_1(
        BattleLogicFunction___c_o *this,
        BattleServantData_o *a,
        BattleServantData_o *b,
        const MethodInfo *method)
{
  if ( !a || (this = (BattleLogicFunction___c_o *)BattleServantData__get_ShuffleSeed(a, 0), !b) )
    sub_1C32E7C(this);
  return (_DWORD)this - BattleServantData__get_ShuffleSeed(b, 0);
}


bool BattleLogicFunction___c___functionReplaceEnemyMember_b__90_0(
        BattleLogicFunction___c_o *this,
        BattleServantData_o *x,
        const MethodInfo *method)
{
  if ( !x )
    sub_1C32E7C(this);
  return BattleServantData__isAlive(x, 0, 0);
}


BattleServantSnapShot_o *BattleLogicFunction___c___functionTransformServant_b__92_0(
        BattleLogicFunction___c_o *this,
        BattleServantData_o *x,
        const MethodInfo *method)
{
  BattleServantSnapShotShiftServant_o *v4; // x20

  if ( (byte_4C3AA67 & 1) == 0 )
  {
    sub_1C32C20(&BattleServantSnapShotShiftServant_TypeInfo);
    byte_4C3AA67 = 1;
  }
  v4 = (BattleServantSnapShotShiftServant_o *)sub_1C32E6C(BattleServantSnapShotShiftServant_TypeInfo);
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
    sub_1C32E7C(this);
  return dataVals_k__BackingField->fields.funcType != 0;
}


bool BattleLogicFunction___c___procList_b__45_1(
        BattleLogicFunction___c_o *this,
        BattleLogicFunctionProcess_FunctionUnitCheck_o *x,
        const MethodInfo *method)
{
  struct DataVals_o *dataVals_k__BackingField; // x8

  if ( !x || (dataVals_k__BackingField = x->fields._dataVals_k__BackingField) == 0 )
    sub_1C32E7C(this);
  return dataVals_k__BackingField->fields.funcType == 135;
}


bool BattleLogicFunction___c___procList_b__45_2(
        BattleLogicFunction___c_o *this,
        BattleLogicFunctionProcess_FunctionTargetCheck_o *target,
        const MethodInfo *method)
{
  if ( !target )
    sub_1C32E7C(this);
  return target->fields._result_k__BackingField;
}


int32_t BattleLogicFunction___c___procList_b__45_3(
        BattleLogicFunction___c_o *this,
        BattleLogicFunctionProcess_FunctionTargetCheck_o *target,
        const MethodInfo *method)
{
  if ( !target )
    sub_1C32E7C(this);
  return target->fields._targetId_k__BackingField;
}


int32_t BattleLogicFunction___c___setAttackSideEffect_b__56_0(
        BattleLogicFunction___c_o *this,
        BattleActionData_SideEffectData_o *x,
        const MethodInfo *method)
{
  if ( !x )
    sub_1C32E7C(this);
  return x->fields.targetId;
}


void BattleLogicFunction___c__DisplayClass110_0___ctor(
        BattleLogicFunction___c__DisplayClass110_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


void BattleLogicFunction___c__DisplayClass110_0___UpdateUserEquipSkillChargeTurn_b__0(
        BattleLogicFunction___c__DisplayClass110_0_o *this,
        BattleSkillInfoData_o *x,
        const MethodInfo *method)
{
  if ( !x )
    sub_1C32E7C(this);
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


void BattleLogicFunction___c__DisplayClass110_0___UpdateUserEquipSkillChargeTurn_b__1(
        BattleLogicFunction___c__DisplayClass110_0_o *this,
        BattleSkillInfoData_o *x,
        const MethodInfo *method)
{
  if ( !x )
    sub_1C32E7C(this);
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


void BattleLogicFunction___c__DisplayClass119_0___ctor(
        BattleLogicFunction___c__DisplayClass119_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


bool BattleLogicFunction___c__DisplayClass119_0___functionMoveState_b__0(
        BattleLogicFunction___c__DisplayClass119_0_o *this,
        BattleBuffData_BuffData_o *x,
        const MethodInfo *method)
{
  if ( !x )
    sub_1C32E7C(this);
  return BattleBuffData_BuffData__checkState(x, this->fields.stateUnstealable, 0);
}


bool BattleLogicFunction___c__DisplayClass119_0___functionMoveState_b__1(
        BattleLogicFunction___c__DisplayClass119_0_o *this,
        BattleBuffData_BuffData_o *x,
        const MethodInfo *method)
{
  System_Collections_Generic_HashSet_T__o *unstealableBuffs; // x0

  if ( (byte_4C3AA6A & 1) == 0 )
  {
    sub_1C32C20(&Method_System_Collections_Generic_HashSet_BattleBuffData_BuffData__Contains__);
    byte_4C3AA6A = 1;
  }
  unstealableBuffs = (System_Collections_Generic_HashSet_T__o *)this->fields.unstealableBuffs;
  if ( !unstealableBuffs )
    sub_1C32E7C(0);
  return !System_Collections_Generic_HashSet_object___Contains(
            unstealableBuffs,
            (Il2CppObject *)x,
            (const MethodInfo_364FF1C *)Method_System_Collections_Generic_HashSet_BattleBuffData_BuffData__Contains__);
}


void BattleLogicFunction___c__DisplayClass154_0___ctor(
        BattleLogicFunction___c__DisplayClass154_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


bool BattleLogicFunction___c__DisplayClass154_0___FunctionSwapFieldPosition_b__1(
        BattleLogicFunction___c__DisplayClass154_0_o *this,
        RestockServantLogicByMoveToSubMember_o *x,
        const MethodInfo *method)
{
  if ( !x )
    sub_1C32E7C(this);
  return this->fields.isEnemy == x->fields._IsEnemy_k__BackingField;
}


void BattleLogicFunction___c__DisplayClass155_0___ctor(
        BattleLogicFunction___c__DisplayClass155_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


bool BattleLogicFunction___c__DisplayClass155_0___GetReplaceIndexArray_b__1(
        BattleLogicFunction___c__DisplayClass155_0_o *this,
        int32_t x,
        const MethodInfo *method)
{
  if ( (byte_4C3AA6B & 1) == 0 )
  {
    sub_1C32C20(&Method_System_Linq_Enumerable_Contains_int___);
    byte_4C3AA6B = 1;
  }
  return !System_Linq_Enumerable__Contains_int_(
            (System_Collections_Generic_IEnumerable_TSource__o *)this->fields.specifiedReplaceTargetArray,
            x,
            (const MethodInfo_30FA3A0 *)Method_System_Linq_Enumerable_Contains_int___);
}


void BattleLogicFunction___c__DisplayClass74_0___ctor(
        BattleLogicFunction___c__DisplayClass74_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


int32_t BattleLogicFunction___c__DisplayClass74_0___BehaveLinkageBuffAsFamily_b__0(
        BattleLogicFunction___c__DisplayClass74_0_o *this,
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
    sub_1C32E7C(this);
  }
  return BattleLogicFunction_ProcListInArgs__GetFamilyBuffLinkageId(
           procArg_k__BackingField,
           linkageIndividuality,
           this->fields.targetSvtData,
           v3);
}


void BattleLogicFunction___c__DisplayClass76_0___ctor(
        BattleLogicFunction___c__DisplayClass76_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


BattleBuffData_BuffData_o *BattleLogicFunction___c__DisplayClass76_0___ApplySubBuffChanges_b__0(
        BattleLogicFunction___c__DisplayClass76_0_o *this,
        BattleBuffData_BuffData_o *buff,
        const MethodInfo *method)
{
  BattleServantData_o *targetSvtData; // x0

  targetSvtData = this->fields.targetSvtData;
  if ( !targetSvtData || (targetSvtData = (BattleServantData_o *)BattleServantData__get_BuffData(targetSvtData, 0)) == 0 )
    sub_1C32E7C(targetSvtData);
  return BattleBuffData__CreateDummyBuff((BattleBuffData_o *)targetSvtData, buff, 0);
}


void BattleLogicFunction___c__DisplayClass92_0___ctor(
        BattleLogicFunction___c__DisplayClass92_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


bool BattleLogicFunction___c__DisplayClass92_0___functionTransformServant_b__1(
        BattleLogicFunction___c__DisplayClass92_0_o *this,
        BattleActionData_BuffData_o *x,
        const MethodInfo *method)
{
  if ( !x )
    sub_1C32E7C(this);
  return x->fields.targetId == this->fields.targetId;
}