void BattleLogicFunction___ctor(BattleLogicFunction_o *this, const MethodInfo *method)
{
  __int64 v3; // x0
  __int64 v4; // x1
  int32_t v5; // w2
  int32_t v6; // w3
  System_String_o *v7; // x4
  int32_t v8; // w5
  int64_t v9; // x6
  System_String_o *v10; // x7
  int v11; // w9
  System_Collections_Generic_Dictionary_TKey__TValue__o *v12; // x20
  BattleLogicFunctionProcess_CommonFunctionTypeProcess_o *v13; // x21
  BattleLogicFunctionProcess_AddStateProcess_o *v14; // x21
  BattleLogicFunctionProcess_AddStateShortProcess_o *v15; // x21
  BattleLogicFunctionProcess_MoveToLastSubMemberProcess_o *v16; // x21
  BattleLogicFunctionProcess_TransformServantProcess_o *v17; // x21
  BattleLogicFunctionProcess_CommonFieldFunctionProcess_o *v18; // x21
  BattleLogicFunctionProcess_CommonFieldFunctionProcess_o *v19; // x21
  BattleLogicFunctionProcess_CommonAddStateProcess_o *v20; // x21
  BattleLogicFunctionProcess_ToFieldCommonFunctionProcess_o *v21; // x21
  BattleLogicFunctionProcess_ToFieldCommonFunctionProcess_o *v22; // x21
  BattleLogicFunctionProcess_FieldAddStateProcess_o *v23; // x21
  BattleLogicFunctionProcess_FieldAddStateShortProcess_o *v24; // x21
  int32_t v25; // w2
  int32_t v26; // w3
  System_String_o *v27; // x4
  int32_t v28; // w5
  int64_t v29; // x6
  System_String_o *v30; // x7

  if ( (byte_4CCA540 & 1) == 0 )
  {
    sub_1C713B0(&BattleLogicFunctionProcess_AddStateProcess_TypeInfo);
    sub_1C713B0(&BattleLogicFunctionProcess_AddStateShortProcess_TypeInfo);
    sub_1C713B0(&BattleLogicFunctionProcess_CommonAddStateProcess_TypeInfo);
    sub_1C713B0(&BattleLogicFunctionProcess_CommonFieldFunctionProcess_TypeInfo);
    sub_1C713B0(&BattleLogicFunctionProcess_CommonFunctionTypeProcess_TypeInfo);
    sub_1C713B0(&Method_System_Collections_Generic_Dictionary_FuncList_TYPE__BattleLogicFunctionProcess_BaseFunctionTypeProcess__Add__);
    sub_1C713B0(&Method_System_Collections_Generic_Dictionary_FuncList_TYPE__BattleLogicFunctionProcess_BaseFunctionTypeProcess___ctor__);
    sub_1C713B0(&System_Collections_Generic_Dictionary_FuncList_TYPE__BattleLogicFunctionProcess_BaseFunctionTypeProcess__TypeInfo);
    sub_1C713B0(&BattleLogicFunctionProcess_FieldAddStateProcess_TypeInfo);
    sub_1C713B0(&BattleLogicFunctionProcess_FieldAddStateShortProcess_TypeInfo);
    sub_1C713B0(&int___TypeInfo);
    sub_1C713B0(&BattleLogicFunctionProcess_MoveToLastSubMemberProcess_TypeInfo);
    sub_1C713B0(&BattleLogicFunctionProcess_ToFieldCommonFunctionProcess_TypeInfo);
    sub_1C713B0(&BattleLogicFunctionProcess_TransformServantProcess_TypeInfo);
    byte_4CCA540 = 1;
  }
  v3 = sub_1C71458(int___TypeInfo, 2);
  if ( !v3 )
    goto LABEL_8;
  v11 = *(_DWORD *)(v3 + 24);
  if ( !v11 || (*(_DWORD *)(v3 + 32) = 701601, v11 == 1) )
    sub_1C71610(v3);
  *(_DWORD *)(v3 + 36) = 701602;
  this->fields.tamamocatTreasureDeviceIds = (struct System_Int32_array *)v3;
  sub_1C71354((GrandQuestFolderBoardItem_o *)&this->fields.tamamocatTreasureDeviceIds, v3, v5, v6, v7, v8, v9, v10);
  v12 = (System_Collections_Generic_Dictionary_TKey__TValue__o *)sub_1C715FC(System_Collections_Generic_Dictionary_FuncList_TYPE__BattleLogicFunctionProcess_BaseFunctionTypeProcess__TypeInfo);
  System_Collections_Generic_Dictionary_Int32Enum__object____ctor(
    v12,
    (const MethodInfo_3494CFC *)Method_System_Collections_Generic_Dictionary_FuncList_TYPE__BattleLogicFunctionProcess_BaseFunctionTypeProcess___ctor__);
  v13 = (BattleLogicFunctionProcess_CommonFunctionTypeProcess_o *)sub_1C715FC(BattleLogicFunctionProcess_CommonFunctionTypeProcess_TypeInfo);
  BattleLogicFunctionProcess_CommonFunctionTypeProcess___ctor(v13, 0);
  if ( !v12 )
LABEL_8:
    sub_1C71608(v3, v4);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v12,
    0,
    (Il2CppObject *)v13,
    (const MethodInfo_34956D0 *)Method_System_Collections_Generic_Dictionary_FuncList_TYPE__BattleLogicFunctionProcess_BaseFunctionTypeProcess__Add__);
  v14 = (BattleLogicFunctionProcess_AddStateProcess_o *)sub_1C715FC(BattleLogicFunctionProcess_AddStateProcess_TypeInfo);
  BattleLogicFunctionProcess_AddStateProcess___ctor(v14, 0);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v12,
    1,
    (Il2CppObject *)v14,
    (const MethodInfo_34956D0 *)Method_System_Collections_Generic_Dictionary_FuncList_TYPE__BattleLogicFunctionProcess_BaseFunctionTypeProcess__Add__);
  v15 = (BattleLogicFunctionProcess_AddStateShortProcess_o *)sub_1C715FC(BattleLogicFunctionProcess_AddStateShortProcess_TypeInfo);
  BattleLogicFunctionProcess_AddStateShortProcess___ctor(v15, 0);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v12,
    16,
    (Il2CppObject *)v15,
    (const MethodInfo_34956D0 *)Method_System_Collections_Generic_Dictionary_FuncList_TYPE__BattleLogicFunctionProcess_BaseFunctionTypeProcess__Add__);
  v16 = (BattleLogicFunctionProcess_MoveToLastSubMemberProcess_o *)sub_1C715FC(BattleLogicFunctionProcess_MoveToLastSubMemberProcess_TypeInfo);
  BattleLogicFunctionProcess_MoveToLastSubMemberProcess___ctor(v16, 0);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v12,
    61,
    (Il2CppObject *)v16,
    (const MethodInfo_34956D0 *)Method_System_Collections_Generic_Dictionary_FuncList_TYPE__BattleLogicFunctionProcess_BaseFunctionTypeProcess__Add__);
  v17 = (BattleLogicFunctionProcess_TransformServantProcess_o *)sub_1C715FC(BattleLogicFunctionProcess_TransformServantProcess_TypeInfo);
  BattleLogicFunctionProcess_TransformServantProcess___ctor(v17, 0);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v12,
    109,
    (Il2CppObject *)v17,
    (const MethodInfo_34956D0 *)Method_System_Collections_Generic_Dictionary_FuncList_TYPE__BattleLogicFunctionProcess_BaseFunctionTypeProcess__Add__);
  v18 = (BattleLogicFunctionProcess_CommonFieldFunctionProcess_o *)sub_1C715FC(BattleLogicFunctionProcess_CommonFieldFunctionProcess_TypeInfo);
  BattleLogicFunctionProcess_CommonFieldFunctionProcess___ctor(v18, 0);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v12,
    29,
    (Il2CppObject *)v18,
    (const MethodInfo_34956D0 *)Method_System_Collections_Generic_Dictionary_FuncList_TYPE__BattleLogicFunctionProcess_BaseFunctionTypeProcess__Add__);
  v19 = (BattleLogicFunctionProcess_CommonFieldFunctionProcess_o *)sub_1C715FC(BattleLogicFunctionProcess_CommonFieldFunctionProcess_TypeInfo);
  BattleLogicFunctionProcess_CommonFieldFunctionProcess___ctor(v19, 0);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v12,
    128,
    (Il2CppObject *)v19,
    (const MethodInfo_34956D0 *)Method_System_Collections_Generic_Dictionary_FuncList_TYPE__BattleLogicFunctionProcess_BaseFunctionTypeProcess__Add__);
  v20 = (BattleLogicFunctionProcess_CommonAddStateProcess_o *)sub_1C715FC(BattleLogicFunctionProcess_CommonAddStateProcess_TypeInfo);
  BattleLogicFunctionProcess_CommonAddStateProcess___ctor(v20, 0);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v12,
    130,
    (Il2CppObject *)v20,
    (const MethodInfo_34956D0 *)Method_System_Collections_Generic_Dictionary_FuncList_TYPE__BattleLogicFunctionProcess_BaseFunctionTypeProcess__Add__);
  v21 = (BattleLogicFunctionProcess_ToFieldCommonFunctionProcess_o *)sub_1C715FC(BattleLogicFunctionProcess_ToFieldCommonFunctionProcess_TypeInfo);
  BattleLogicFunctionProcess_ToFieldCommonFunctionProcess___ctor(v21, 0);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v12,
    131,
    (Il2CppObject *)v21,
    (const MethodInfo_34956D0 *)Method_System_Collections_Generic_Dictionary_FuncList_TYPE__BattleLogicFunctionProcess_BaseFunctionTypeProcess__Add__);
  v22 = (BattleLogicFunctionProcess_ToFieldCommonFunctionProcess_o *)sub_1C715FC(BattleLogicFunctionProcess_ToFieldCommonFunctionProcess_TypeInfo);
  BattleLogicFunctionProcess_ToFieldCommonFunctionProcess___ctor(v22, 0);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v12,
    158,
    (Il2CppObject *)v22,
    (const MethodInfo_34956D0 *)Method_System_Collections_Generic_Dictionary_FuncList_TYPE__BattleLogicFunctionProcess_BaseFunctionTypeProcess__Add__);
  v23 = (BattleLogicFunctionProcess_FieldAddStateProcess_o *)sub_1C715FC(BattleLogicFunctionProcess_FieldAddStateProcess_TypeInfo);
  BattleLogicFunctionProcess_FieldAddStateProcess___ctor(v23, 0);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v12,
    160,
    (Il2CppObject *)v23,
    (const MethodInfo_34956D0 *)Method_System_Collections_Generic_Dictionary_FuncList_TYPE__BattleLogicFunctionProcess_BaseFunctionTypeProcess__Add__);
  v24 = (BattleLogicFunctionProcess_FieldAddStateShortProcess_o *)sub_1C715FC(BattleLogicFunctionProcess_FieldAddStateShortProcess_TypeInfo);
  BattleLogicFunctionProcess_FieldAddStateShortProcess___ctor(v24, 0);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v12,
    161,
    (Il2CppObject *)v24,
    (const MethodInfo_34956D0 *)Method_System_Collections_Generic_Dictionary_FuncList_TYPE__BattleLogicFunctionProcess_BaseFunctionTypeProcess__Add__);
  this->fields.dicFuncProcess = (struct System_Collections_Generic_Dictionary_FuncList_TYPE__BattleLogicFunctionProcess_BaseFunctionTypeProcess__o *)v12;
  sub_1C71354((GrandQuestFolderBoardItem_o *)&this->fields.dicFuncProcess, (int32_t)v12, v25, v26, v27, v28, v29, v30);
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
  if ( (byte_4CCA51D & 1) == 0 )
  {
    sub_1C713B0(&BattleActionData_TypeInfo);
    sub_1C713B0(&System_IDisposable_TypeInfo);
    sub_1C713B0(&System_Collections_Generic_IEnumerable_BattleLogicFunctionProcess_FunctionTargetCheck__TypeInfo);
    sub_1C713B0(&System_Collections_Generic_IEnumerator_BattleLogicFunctionProcess_FunctionTargetCheck__TypeInfo);
    sub_1C713B0(&System_Collections_IEnumerator_TypeInfo);
    sub_1C713B0(&Method_System_Collections_Generic_List_FuncList_TYPE__Add__);
    sub_1C713B0(&Method_System_Collections_Generic_List_FuncList_TYPE___ctor__);
    this = (BattleLogicFunction_o *)sub_1C713B0(&System_Collections_Generic_List_FuncList_TYPE__TypeInfo);
    byte_4CCA51D = 1;
  }
  if ( !funcTarget )
    goto LABEL_65;
  funcUnit_k__BackingField = funcTarget->fields._funcUnit_k__BackingField;
  if ( !funcUnit_k__BackingField )
    goto LABEL_65;
  procArg_k__BackingField = funcUnit_k__BackingField->fields._procArg_k__BackingField;
  dataVals_k__BackingField = funcUnit_k__BackingField->fields._dataVals_k__BackingField;
  v12 = (BattleActionData_o *)sub_1C715FC(BattleActionData_TypeInfo);
  BattleActionData___ctor(v12, 0);
  v13 = (System_Collections_Generic_List_T__o *)sub_1C715FC(System_Collections_Generic_List_FuncList_TYPE__TypeInfo);
  System_Collections_Generic_List_Int32Enum____ctor(
    v13,
    (const MethodInfo_37F56CC *)Method_System_Collections_Generic_List_FuncList_TYPE___ctor__);
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
      *(const MethodInfo_37F5F20 **)(*(_QWORD *)(v15[4] + 192LL) + 112LL));
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
        sub_1C71610(this);
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
        v25 = sub_1C47738(
                this,
                System_Collections_Generic_IEnumerable_BattleLogicFunctionProcess_FunctionTargetCheck__TypeInfo,
                0);
      }
      v27 = (*(__int64 (__fastcall **)(BattleLogicFunction_o *, _QWORD))v25)(v22, *(_QWORD *)(v25 + 8));
      if ( !v27 )
        sub_1C71608(0, v26);
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
          v31 = sub_1C47738(v27, System_Collections_IEnumerator_TypeInfo, 0);
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
          v35 = sub_1C47738(
                  v27,
                  System_Collections_Generic_IEnumerator_BattleLogicFunctionProcess_FunctionTargetCheck__TypeInfo,
                  0);
        }
        v36 = (*(__int64 (__fastcall **)(__int64, _QWORD))v35)(v27, *(_QWORD *)(v35 + 8));
        v38 = v36;
        if ( !v36 )
          sub_1C71608(0, v37);
        v39 = (*(__int64 (__fastcall **)(__int64, BattleActionData_o *, _QWORD))(*(_QWORD *)v36 + 408LL))(
                v36,
                mainAction,
                *(_QWORD *)(*(_QWORD *)v36 + 416LL));
        if ( (v39 & 1) != 0 )
        {
          if ( !mainAction )
            sub_1C71608(v39, v40);
          v43 = *(_DWORD *)(v38 + 32);
          v44 = BattleLogicFunction__functionLossNp(v8, procArg_k__BackingField, v41, v43, v19, &diffNp, v42);
          v45 = diffNp;
          if ( diffNp < 1 )
          {
            if ( v44 )
            {
              if ( !v19 )
                sub_1C71608(v44, v44);
              if ( !procArg_k__BackingField )
                sub_1C71608(v44, v44);
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
                sub_1C71608(NoEffectObject, NoEffectObject);
              BattleActionData__addAction(v12, NoEffectObject, 0);
            }
          }
          else
          {
            if ( !v12 )
              sub_1C71608(v44, v44);
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
        v52 = sub_1C47738(v27, System_IDisposable_TypeInfo, 0);
      }
      (*(void (__fastcall **)(__int64, _QWORD))v52)(v27, *(_QWORD *)(v52 + 8));
      this = v55;
      LODWORD(logic) = v55->fields.logic;
      v18 = v56 + 1;
      if ( (__int64)(v56 + 1) >= (int)logic )
        return v12;
    }
LABEL_65:
    sub_1C71608(this, mainAction);
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
  if ( (byte_4CCA51C & 1) == 0 )
  {
    sub_1C713B0(&BattleActionData_TypeInfo);
    sub_1C713B0(&System_IDisposable_TypeInfo);
    sub_1C713B0(&System_Collections_Generic_IEnumerable_BattleLogicFunctionProcess_FunctionTargetCheck__TypeInfo);
    sub_1C713B0(&System_Collections_Generic_IEnumerator_BattleLogicFunctionProcess_FunctionTargetCheck__TypeInfo);
    sub_1C713B0(&System_Collections_IEnumerator_TypeInfo);
    sub_1C713B0(&Method_System_Collections_Generic_List_FuncList_TYPE__Add__);
    sub_1C713B0(&Method_System_Collections_Generic_List_FuncList_TYPE___ctor__);
    this = (BattleLogicFunction_o *)sub_1C713B0(&System_Collections_Generic_List_FuncList_TYPE__TypeInfo);
    byte_4CCA51C = 1;
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
  v11 = (BattleActionData_o *)sub_1C715FC(BattleActionData_TypeInfo);
  BattleActionData___ctor(v11, 0);
  v12 = (System_Collections_Generic_List_T__o *)sub_1C715FC(System_Collections_Generic_List_FuncList_TYPE__TypeInfo);
  System_Collections_Generic_List_Int32Enum____ctor(
    v12,
    (const MethodInfo_37F56CC *)Method_System_Collections_Generic_List_FuncList_TYPE___ctor__);
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
      *(const MethodInfo_37F5F20 **)(*(_QWORD *)(v14[4] + 192LL) + 112LL));
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
        sub_1C71610(this);
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
        v24 = sub_1C47738(
                this,
                System_Collections_Generic_IEnumerable_BattleLogicFunctionProcess_FunctionTargetCheck__TypeInfo,
                0);
      }
      v26 = (*(__int64 (__fastcall **)(BattleLogicFunction_o *, _QWORD))v24)(v21, *(_QWORD *)(v24 + 8));
      if ( !v26 )
        sub_1C71608(0, v25);
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
          v30 = sub_1C47738(v26, System_Collections_IEnumerator_TypeInfo, 0);
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
          v34 = sub_1C47738(
                  v26,
                  System_Collections_Generic_IEnumerator_BattleLogicFunctionProcess_FunctionTargetCheck__TypeInfo,
                  0);
        }
        v35 = (*(__int64 (__fastcall **)(__int64, _QWORD))v34)(v26, *(_QWORD *)(v34 + 8));
        v37 = v35;
        if ( !v35 )
          sub_1C71608(0, v36);
        v38 = (*(__int64 (__fastcall **)(__int64, BattleActionData_o *, _QWORD))(*(_QWORD *)v35 + 408LL))(
                v35,
                mainAction,
                *(_QWORD *)(*(_QWORD *)v35 + 416LL));
        if ( (v38 & 1) != 0 )
        {
          if ( !v18 )
            sub_1C71608(v38, v39);
          if ( !procArg_k__BackingField )
            sub_1C71608(v38, v39);
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
            sub_1C71608(v45, v45);
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
        v49 = sub_1C47738(v26, System_IDisposable_TypeInfo, 0);
      }
      (*(void (__fastcall **)(__int64, _QWORD))v49)(v26, *(_QWORD *)(v49 + 8));
      this = v51;
      LODWORD(logic) = v51->fields.logic;
      v17 = v52 + 1;
      if ( (__int64)(v52 + 1) >= (int)logic )
        return v11;
    }
LABEL_59:
    sub_1C71608(this, mainAction);
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
  if ( (byte_4CCA4F3 & 1) == 0 )
  {
    this = (BattleLogicFunction_o *)sub_1C713B0(&UnityEngine_Object_TypeInfo);
    byte_4CCA4F3 = 1;
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
      sub_1C71608(this, targetSvtData);
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
  int32_t v22; // w3
  System_String_o *v23; // x4
  int32_t v24; // w5
  int64_t v25; // x6
  System_String_o *v26; // x7
  BattleServantData_o **v27; // x23
  const MethodInfo *v28; // x6
  int32_t m_CancellationTokenSource; // w28
  int32_t AuraSum_k__BackingField; // w29
  BattleServantData_o *v31; // x24
  System_Func_object__object__o *v32; // x28
  System_Collections_Generic_IEnumerable_TSource__o *v33; // x0
  System_Collections_Generic_List_TSource__o *v34; // x0
  int32_t v35; // w2
  int32_t v36; // w3
  System_String_o *v37; // x4
  int32_t v38; // w5
  int64_t v39; // x6
  System_String_o *v40; // x7
  System_Func_object__bool__o *v41; // x27
  _BOOL8 v42; // x0
  __int64 v43; // x1
  Il2CppObject *current; // x25
  BattleData_o *v45; // x0
  BattleLogicFunction___c_c *v46; // x0
  System_Func_object__bool__o *_9__79_1; // x25
  Il2CppObject *v48; // x26
  struct BattleLogicFunction___c_StaticFields *static_fields; // x0
  int32_t v50; // w2
  int32_t v51; // w3
  System_String_o *v52; // x4
  int32_t v53; // w5
  int64_t v54; // x6
  System_String_o *v55; // x7
  struct BattleData_o *v56; // x8
  BattleFieldEnvironmentData_o *FieldEnvData_k__BackingField; // x22
  BattleActionEffect_ChangeBgmBuff_o *v58; // x22
  int32_t MaxHp_k__BackingField; // w22
  int32_t Hp_k__BackingField; // w21
  int v61; // w22
  BattleActionEffect_SubChangeMaxHpBuff_o *v62; // x20
  BattleActionEffect_Base_o *v63; // x0
  System_Collections_Generic_List_Enumerator_object__o v64; // [xsp+8h] [xbp-98h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v65; // [xsp+20h] [xbp-80h] BYREF

  if ( (byte_4CCA502 & 1) == 0 )
  {
    sub_1C713B0(&Method_BasicHelper_Any_BattleBuffData_BuffData___);
    sub_1C713B0(&Method_BattleBuffData_IsOverwriteClass__);
    sub_1C713B0(&BattleActionEffect_ChangeBgmBuff_TypeInfo);
    sub_1C713B0(&Method_System_Linq_Enumerable_Select_BattleBuffData_BuffData__BattleBuffData_BuffData___);
    sub_1C713B0(&Method_System_Linq_Enumerable_ToList_BattleBuffData_BuffData___);
    sub_1C713B0(&Method_System_Collections_Generic_List_Enumerator_BattleBuffData_BuffData__Dispose__);
    sub_1C713B0(&Method_System_Collections_Generic_List_Enumerator_BattleBuffData_BuffData__MoveNext__);
    sub_1C713B0(&Method_System_Collections_Generic_List_Enumerator_BattleBuffData_BuffData__get_Current__);
    sub_1C713B0(&System_Func_BattleBuffData_BuffData__BattleBuffData_BuffData__TypeInfo);
    sub_1C713B0(&System_Func_BattleBuffData_BuffData__bool__TypeInfo);
    sub_1C713B0(&Method_System_Collections_Generic_List_BattleBuffData_BuffData__GetEnumerator__);
    sub_1C713B0(&Method_System_Collections_Generic_List_BattleBuffData_BuffData__ToArray__);
    sub_1C713B0(&BattleActionEffect_SubChangeMaxHpBuff_TypeInfo);
    sub_1C713B0(&Method_BattleLogicFunction___c__ApplySubBuffChanges_b__79_1__);
    sub_1C713B0(&Method_BattleLogicFunction___c__DisplayClass79_0__ApplySubBuffChanges_b__0__);
    sub_1C713B0(&BattleLogicFunction___c__DisplayClass79_0_TypeInfo);
    sub_1C713B0(&BattleLogicFunction___c_TypeInfo);
    byte_4CCA502 = 1;
  }
  memset(&v65, 0, sizeof(v65));
  v18 = sub_1C715FC(BattleLogicFunction___c__DisplayClass79_0_TypeInfo);
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
        v27 = (BattleServantData_o **)(v18 + 16);
        sub_1C71354((GrandQuestFolderBoardItem_o *)(v18 + 16), (int32_t)data, v21, v22, v23, v24, v25, v26);
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
                if ( *v27 )
                {
                  m_CancellationTokenSource = (int32_t)data->fields.m_CancellationTokenSource;
                  AuraSum_k__BackingField = svtSnapShotOnBuffUpdate->fields._AuraSum_k__BackingField;
                  data = (BattleData_o *)BattleLogicFunction__getFunctionObject(
                                           (BattleLogicFunction_o *)data,
                                           baseVals->fields.funcEnt,
                                           (*v27)->fields.uniqueId,
                                           index,
                                           isCommandSideEffect,
                                           0,
                                           v28);
                  if ( data )
                  {
                    BYTE4(data->fields.player_datalist) = AuraSum_k__BackingField > m_CancellationTokenSource;
                    v31 = (BattleServantData_o *)data;
                    v32 = (System_Func_object__object__o *)sub_1C715FC(System_Func_BattleBuffData_BuffData__BattleBuffData_BuffData__TypeInfo);
                    System_Func_object__object____ctor(
                      v32,
                      (Il2CppObject *)v18,
                      Method_BattleLogicFunction___c__DisplayClass79_0__ApplySubBuffChanges_b__0__,
                      0);
                    v33 = (System_Collections_Generic_IEnumerable_TSource__o *)System_Linq_Enumerable__Select_object__object_(
                                                                                 (System_Collections_Generic_IEnumerable_TSource__o *)subBuffList,
                                                                                 (System_Func_TSource__TResult__o *)v32,
                                                                                 (const MethodInfo_31818B4 *)Method_System_Linq_Enumerable_Select_BattleBuffData_BuffData__BattleBuffData_BuffData___);
                    v34 = System_Linq_Enumerable__ToList_object_(
                            v33,
                            (const MethodInfo_318FC88 *)Method_System_Linq_Enumerable_ToList_BattleBuffData_BuffData___);
                    *(_QWORD *)&v31->fields._frameType_k__BackingField = v34;
                    sub_1C71354(
                      (GrandQuestFolderBoardItem_o *)&v31->fields._frameType_k__BackingField,
                      (int32_t)v34,
                      v35,
                      v36,
                      v37,
                      v38,
                      v39,
                      v40);
                    v41 = (System_Func_object__bool__o *)sub_1C715FC(System_Func_BattleBuffData_BuffData__bool__TypeInfo);
                    System_Func_object__bool____ctor(v41, 0, Method_BattleBuffData_IsOverwriteClass__, 0);
                    data = (BattleData_o *)BasicHelper__Any_object_(
                                             (System_Collections_Generic_List_T__o *)subBuffList,
                                             (System_Func_T__bool__o *)v41,
                                             (const MethodInfo_31341D4 *)Method_BasicHelper_Any_BattleBuffData_BuffData___);
                    if ( ((unsigned __int8)data & 1) != 0 )
                      LODWORD(v31->fields.userSvtId.fields.currentCryptoKey) = 7;
                    if ( args )
                    {
                      data = (BattleData_o *)BattleLogicFunction_ProcListInArgs__get_ParentActBuffData(args, 0);
                      if ( actionData )
                      {
                        BattleActionData__setBuffData(
                          actionData,
                          (BattleActionData_BuffData_o *)v31,
                          baseVals,
                          (BattleActionData_BuffData_o *)data,
                          0);
                        if ( subBuffList )
                        {
                          System_Collections_Generic_List_object___GetEnumerator(
                            (System_Collections_Generic_List_Enumerator_T__o *)&v64,
                            (System_Collections_Generic_List_object__o *)subBuffList,
                            (const MethodInfo_3811210 *)Method_System_Collections_Generic_List_BattleBuffData_BuffData__GetEnumerator__);
                          v65 = v64;
                          while ( 1 )
                          {
                            v42 = System_Collections_Generic_List_Enumerator_object___MoveNext(
                                    &v65,
                                    (const MethodInfo_35962C8 *)Method_System_Collections_Generic_List_Enumerator_BattleBuffData_BuffData__MoveNext__);
                            if ( !v42 )
                              break;
                            current = v65.fields._current;
                            if ( !v65.fields._current )
                              sub_1C71608(v42, v43);
                            v45 = this->fields.data;
                            if ( !v45 )
                              sub_1C71608(0, v43);
                            BattleData__RemoveDoNotSelectCommandCardBuff(
                              v45,
                              (int32_t)v65.fields._current[1].klass,
                              *v27,
                              0);
                            if ( BattleBuffData__CheckInvalidSacrificeIndiv((BattleBuffData_BuffData_o *)current, 0) )
                              args->fields.updateField = 1;
                          }
                          System_Collections_Generic_List_Enumerator_object___Dispose(
                            &v65,
                            (const MethodInfo_35962C4 *)Method_System_Collections_Generic_List_Enumerator_BattleBuffData_BuffData__Dispose__);
                          v46 = BattleLogicFunction___c_TypeInfo;
                          if ( !BattleLogicFunction___c_TypeInfo->_2.cctor_finished )
                          {
                            j_il2cpp_runtime_class_init_0(BattleLogicFunction___c_TypeInfo);
                            v46 = BattleLogicFunction___c_TypeInfo;
                          }
                          _9__79_1 = (System_Func_object__bool__o *)v46->static_fields->__9__79_1;
                          if ( !_9__79_1 )
                          {
                            if ( !v46->_2.cctor_finished )
                            {
                              j_il2cpp_runtime_class_init_0(v46);
                              v46 = BattleLogicFunction___c_TypeInfo;
                            }
                            v48 = (Il2CppObject *)v46->static_fields->__9;
                            _9__79_1 = (System_Func_object__bool__o *)sub_1C715FC(System_Func_BattleBuffData_BuffData__bool__TypeInfo);
                            System_Func_object__bool____ctor(
                              _9__79_1,
                              v48,
                              Method_BattleLogicFunction___c__ApplySubBuffChanges_b__79_1__,
                              0);
                            static_fields = BattleLogicFunction___c_TypeInfo->static_fields;
                            static_fields->__9__79_1 = (struct System_Func_BattleBuffData_BuffData__bool__o *)_9__79_1;
                            sub_1C71354(
                              (GrandQuestFolderBoardItem_o *)&static_fields->__9__79_1,
                              (int32_t)_9__79_1,
                              v50,
                              v51,
                              v52,
                              v53,
                              v54,
                              v55);
                          }
                          data = (BattleData_o *)BasicHelper__Any_object_(
                                                   (System_Collections_Generic_List_T__o *)subBuffList,
                                                   (System_Func_T__bool__o *)_9__79_1,
                                                   (const MethodInfo_31341D4 *)Method_BasicHelper_Any_BattleBuffData_BuffData___);
                          if ( ((unsigned __int8)data & 1) != 0 )
                          {
                            v56 = this->fields.data;
                            if ( !v56 )
                              goto LABEL_45;
                            FieldEnvData_k__BackingField = v56->fields._FieldEnvData_k__BackingField;
                            data = (BattleData_o *)System_Collections_Generic_List_object___ToArray(
                                                     (System_Collections_Generic_List_object__o *)subBuffList,
                                                     (const MethodInfo_3812270 *)Method_System_Collections_Generic_List_BattleBuffData_BuffData__ToArray__);
                            if ( !FieldEnvData_k__BackingField )
                              goto LABEL_45;
                            BattleFieldEnvironmentData__RemoveBgmRelateBuff(
                              FieldEnvData_k__BackingField,
                              (BattleBuffData_BuffData_array *)data,
                              0);
                            v58 = (BattleActionEffect_ChangeBgmBuff_o *)sub_1C715FC(BattleActionEffect_ChangeBgmBuff_TypeInfo);
                            BattleActionEffect_ChangeBgmBuff___ctor(v58, 0);
                            BattleActionData_BuffData__SetActionEffectProc(
                              (BattleActionData_BuffData_o *)v31,
                              (BattleActionEffect_Base_o *)v58,
                              0);
                          }
                          data = (BattleData_o *)*v27;
                          if ( *v27 )
                          {
                            BattleServantData__FixHpWhenHpBaseBuffReleased((BattleServantData_o *)data, 0);
                            data = (BattleData_o *)*v27;
                            if ( *v27 )
                            {
                              MaxHp_k__BackingField = svtSnapShotOnBuffUpdate->fields._MaxHp_k__BackingField;
                              if ( MaxHp_k__BackingField == BattleServantData__getMaxHp((BattleServantData_o *)data, 0) )
                                return;
                              data = (BattleData_o *)*v27;
                              if ( *v27 )
                              {
                                data = (BattleData_o *)BattleServantData__getNowHp((BattleServantData_o *)data, 0);
                                if ( *v27 )
                                {
                                  Hp_k__BackingField = svtSnapShotOnBuffUpdate->fields._Hp_k__BackingField;
                                  v61 = (int)data;
                                  BattleServantData__ResetBaseHpBuffActivedTimeHealValue(*v27, 0);
                                  if ( *v27 )
                                  {
                                    BattleActionData__addReflectLogicResultServantId(
                                      actionData,
                                      (*v27)->fields.uniqueId,
                                      0);
                                    v62 = (BattleActionEffect_SubChangeMaxHpBuff_o *)sub_1C715FC(BattleActionEffect_SubChangeMaxHpBuff_TypeInfo);
                                    BattleActionEffect_SubChangeMaxHpBuff___ctor(v62, 0);
                                    data = (BattleData_o *)System_Collections_Generic_List_object___ToArray(
                                                             (System_Collections_Generic_List_object__o *)subBuffList,
                                                             (const MethodInfo_3812270 *)Method_System_Collections_Generic_List_BattleBuffData_BuffData__ToArray__);
                                    if ( *v27 )
                                    {
                                      if ( v62 )
                                      {
                                        v63 = (BattleActionEffect_Base_o *)((__int64 (__fastcall *)(BattleActionEffect_SubChangeMaxHpBuff_o *, BattleData_o *, _QWORD, _QWORD, const MethodInfo *))v62->klass->vtable._7_InitBuff.methodPtr)(
                                                                             v62,
                                                                             data,
                                                                             (unsigned int)(*v27)->fields.uniqueId,
                                                                             (unsigned int)(v61 - Hp_k__BackingField),
                                                                             v62->klass->vtable._7_InitBuff.method);
                                        BattleActionData_BuffData__SetActionEffectProc(
                                          (BattleActionData_BuffData_o *)v31,
                                          v63,
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
    sub_1C71608(data, v19);
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
  int32_t v11; // w3
  System_String_o *v12; // x4
  int32_t v13; // w5
  int64_t v14; // x6
  System_String_o *v15; // x7
  __int64 v16; // x8
  BattleServantData_o *ServantData; // x0
  int32_t v18; // w2
  int32_t v19; // w3
  System_String_o *v20; // x4
  int32_t v21; // w5
  int64_t v22; // x6
  System_String_o *v23; // x7
  System_Func_int__int__o *v24; // x20
  System_Collections_Generic_IEnumerable_TSource__o *v25; // x0
  struct System_Int32_array *v26; // x0
  int32_t v27; // w2
  int32_t v28; // w3
  System_String_o *v29; // x4
  int32_t v30; // w5
  int64_t v31; // x6
  System_String_o *v32; // x7
  System_Collections_Generic_IEnumerable_TSource__o *v33; // x0
  struct System_Int32_array *v34; // x0
  int32_t v35; // w2
  int32_t v36; // w3
  System_String_o *v37; // x4
  int32_t v38; // w5
  int64_t v39; // x6
  System_String_o *v40; // x7

  if ( (byte_4CCA500 & 1) == 0 )
  {
    sub_1C713B0(&Method_System_Linq_Enumerable_Select_int__int___);
    sub_1C713B0(&Method_System_Linq_Enumerable_ToArray_int___);
    sub_1C713B0(&System_Func_int__int__TypeInfo);
    sub_1C713B0(&Method_BattleLogicFunction___c__DisplayClass77_0__BehaveLinkageBuffAsFamily_b__0__);
    sub_1C713B0(&BattleLogicFunction___c__DisplayClass77_0_TypeInfo);
    byte_4CCA500 = 1;
  }
  v7 = sub_1C715FC(BattleLogicFunction___c__DisplayClass77_0_TypeInfo);
  BattleLogicFunction___c__DisplayClass77_0___ctor((BattleLogicFunction___c__DisplayClass77_0_o *)v7, 0);
  if ( !v7 )
    goto LABEL_13;
  *(_QWORD *)(v7 + 16) = funcTarget;
  sub_1C71354((GrandQuestFolderBoardItem_o *)(v7 + 16), (int32_t)funcTarget, v10, v11, v12, v13, v14, v15);
  v16 = *(_QWORD *)(v7 + 16);
  if ( !v16 )
    goto LABEL_13;
  data = this->fields.data;
  if ( !data )
    goto LABEL_13;
  ServantData = BattleData__getServantData(data, *(_DWORD *)(v16 + 32), 0);
  *(_QWORD *)(v7 + 24) = ServantData;
  sub_1C71354((GrandQuestFolderBoardItem_o *)(v7 + 24), (int32_t)ServantData, v18, v19, v20, v21, v22, v23);
  if ( !*(_QWORD *)(v7 + 24) )
    return;
  v24 = (System_Func_int__int__o *)sub_1C715FC(System_Func_int__int__TypeInfo);
  System_Func_int__int____ctor(
    v24,
    (Il2CppObject *)v7,
    Method_BattleLogicFunction___c__DisplayClass77_0__BehaveLinkageBuffAsFamily_b__0__,
    0);
  if ( !buffData )
LABEL_13:
    sub_1C71608(data, v9);
  if ( !BasicHelper__IsNullOrEmpty((System_Collections_ICollection_o *)buffData->fields.addIndividualty, 0) )
  {
    v25 = (System_Collections_Generic_IEnumerable_TSource__o *)System_Linq_Enumerable__Select_int__int_(
                                                                 (System_Collections_Generic_IEnumerable_TSource__o *)buffData->fields.addIndividualty,
                                                                 (System_Func_TSource__TResult__o *)v24,
                                                                 (const MethodInfo_317E5A0 *)Method_System_Linq_Enumerable_Select_int__int___);
    v26 = System_Linq_Enumerable__ToArray_int_(
            v25,
            (const MethodInfo_318AE54 *)Method_System_Linq_Enumerable_ToArray_int___);
    buffData->fields.familyLinkageIds = v26;
    sub_1C71354(
      (GrandQuestFolderBoardItem_o *)&buffData->fields.familyLinkageIds,
      (int32_t)v26,
      v27,
      v28,
      v29,
      v30,
      v31,
      v32);
    BattleBuffData_BuffData__onState(buffData, 0x400000, 0);
  }
  if ( !BasicHelper__IsNullOrEmpty((System_Collections_ICollection_o *)buffData->fields.linkageTargetIndividualty, 0) )
  {
    v33 = (System_Collections_Generic_IEnumerable_TSource__o *)System_Linq_Enumerable__Select_int__int_(
                                                                 (System_Collections_Generic_IEnumerable_TSource__o *)buffData->fields.linkageTargetIndividualty,
                                                                 (System_Func_TSource__TResult__o *)v24,
                                                                 (const MethodInfo_317E5A0 *)Method_System_Linq_Enumerable_Select_int__int___);
    v34 = System_Linq_Enumerable__ToArray_int_(
            v33,
            (const MethodInfo_318AE54 *)Method_System_Linq_Enumerable_ToArray_int___);
    buffData->fields.linkageTargetIndividualty = v34;
    sub_1C71354(
      (GrandQuestFolderBoardItem_o *)&buffData->fields.linkageTargetIndividualty,
      (int32_t)v34,
      v35,
      v36,
      v37,
      v38,
      v39,
      v40);
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
    sub_1C71608(this, baseVals);
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
    sub_1C71610(this);
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
  if ( (byte_4CCA530 & 1) == 0 )
  {
    sub_1C713B0(&Generator_BGMFromChangeBGMFunc_TypeInfo);
    this = (BattleLogicFunction_o *)sub_1C713B0(&UnityEngine_Object_TypeInfo);
    byte_4CCA530 = 1;
  }
  data = v6->fields.data;
  if ( !data )
    goto LABEL_16;
  FieldEnvData_k__BackingField = data->fields._FieldEnvData_k__BackingField;
  if ( bgmEnt )
  {
    id = bgmEnt->fields.id;
    v10 = (Generator_BGMFromChangeBGMFunc_o *)sub_1C715FC(Generator_BGMFromChangeBGMFunc_TypeInfo);
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
    sub_1C71608(this, bgmEnt);
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

  if ( (byte_4CCA52F & 1) == 0 )
  {
    sub_1C713B0(&Method_System_Array_IndexOf_int___);
    sub_1C713B0(&CondType_TypeInfo);
    sub_1C713B0(&Method_DataManager_GetMasterData_BgmMaster___);
    sub_1C713B0(&Method_DataManager_GetMasterData_SkillLvMaster___);
    sub_1C713B0(&Method_DataMasterBase_BgmMaster__BgmEntity__int__TryGetEntity__);
    sub_1C713B0(&Method_System_Collections_Generic_List_SkillLvEntity_SvtChangeBgm__get_Count__);
    sub_1C713B0(&Method_System_Collections_Generic_List_SkillLvEntity_SvtChangeBgm__get_Item__);
    sub_1C713B0(&Method_SingletonMonoBehaviour_DataManager__getInstance__);
    sub_1C713B0(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_4CCA52F = 1;
  }
  result = 0;
  entity = 0;
  if ( uniqueID != -1 && actionData )
  {
    v9 = *((_QWORD *)Method_SingletonMonoBehaviour_DataManager__getInstance__ + 4);
    if ( (*(_BYTE *)(v9 + 309) & 1) == 0 )
      v9 = sub_1C47444(v4);
    v10 = *(_QWORD *)(*(_QWORD *)(v9 + 192) + 16LL);
    if ( (*(_BYTE *)(v10 + 309) & 1) == 0 )
      v10 = sub_1C47444(v4);
    MasterData_object = **(_QWORD ***)(v10 + 184);
    if ( !MasterData_object )
      goto LABEL_35;
    MasterData_object = DataManager__GetMasterData_object_(
                          (DataManager_o *)MasterData_object,
                          (const MethodInfo_314B10C *)Method_DataManager_GetMasterData_SkillLvMaster___);
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
    MasterData_object = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3A5F158 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !MasterData_object )
      goto LABEL_35;
    MasterData_object = DataManager__GetMasterData_object_(
                          (DataManager_o *)MasterData_object,
                          (const MethodInfo_314B10C *)Method_DataManager_GetMasterData_BgmMaster___);
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
                              (const MethodInfo_3810448 *)Method_System_Collections_Generic_List_SkillLvEntity_SvtChangeBgm__get_Item__);
        if ( !MasterData_object )
          break;
        if ( System_Array__IndexOf_int_(
               v19,
               *((_DWORD *)MasterData_object + 4),
               (const MethodInfo_3252F20 *)Method_System_Array_IndexOf_int___) != -1 )
        {
          MasterData_object = System_Collections_Generic_List_object___get_Item(
                                v18,
                                v20,
                                (const MethodInfo_3810448 *)Method_System_Collections_Generic_List_SkillLvEntity_SvtChangeBgm__get_Item__);
          if ( !MasterData_object )
            break;
          v21 = *((_DWORD *)MasterData_object + 5);
          MasterData_object = System_Collections_Generic_List_object___get_Item(
                                v18,
                                v20,
                                (const MethodInfo_3810448 *)Method_System_Collections_Generic_List_SkillLvEntity_SvtChangeBgm__get_Item__);
          if ( !MasterData_object )
            break;
          v22 = *((int *)MasterData_object + 6);
          if ( !CondType_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(CondType_TypeInfo);
          IsOpen = CondType__IsOpen(46, v21, v22, 0, 0, 0);
          MasterData_object = System_Collections_Generic_List_object___get_Item(
                                v18,
                                v20,
                                (const MethodInfo_3810448 *)Method_System_Collections_Generic_List_SkillLvEntity_SvtChangeBgm__get_Item__);
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
                 (const MethodInfo_3408ECC *)Method_DataMasterBase_BgmMaster__BgmEntity__int__TryGetEntity__) )
          {
            return (BgmEntity_o *)entity;
          }
        }
        if ( ++v20 >= v18->fields._size )
          return (BgmEntity_o *)entity;
      }
LABEL_35:
      sub_1C71608(MasterData_object, *(_QWORD *)&uniqueID);
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

  if ( (byte_4CCA53E & 1) == 0 )
  {
    this = (BattleLogicFunction_o *)sub_1C713B0(&BattleBuffData_CheckIndividualitiesData_TypeInfo);
    byte_4CCA53E = 1;
  }
  if ( !baseVals )
LABEL_23:
    sub_1C71608(this, actionSvtData);
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
  v21 = (BattleBuffData_CheckIndividualitiesData_o *)sub_1C715FC(BattleBuffData_CheckIndividualitiesData_TypeInfo);
  BattleBuffData_CheckIndividualitiesData___ctor_45970628(v21, targetSvtData, actionSvtData, 0, 0, 0, 0, 1, 0);
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

  if ( (byte_4CCA537 & 1) == 0 )
  {
    sub_1C713B0(&BattleActionData_MasterBuffData_TypeInfo);
    byte_4CCA537 = 1;
  }
  v12 = (BattleActionData_MasterBuffData_o *)sub_1C715FC(BattleActionData_MasterBuffData_TypeInfo);
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
    sub_1C71608(FunctionObject, v16);
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
      sub_1C71608(IsExistBattleMissionValueInMasterData, v6);
    v8 = 1;
    while ( 1 )
    {
      max_length = vals->max_length;
      v10 = v8 - 1;
      if ( v8 - 1 >= (int)max_length )
        break;
      if ( v10 >= max_length || v8 >= max_length )
        sub_1C71610(IsExistBattleMissionValueInMasterData);
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

  if ( (byte_4CCA538 & 1) == 0 )
  {
    sub_1C713B0(&BattleActionData_TypeInfo);
    byte_4CCA538 = 1;
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
          v11 = (BattleActionData_o *)sub_1C715FC(BattleActionData_TypeInfo);
          BattleActionData___ctor(v11, 0);
          if ( v11 )
          {
            BattleActionData__setBuffData(v11, v24, baseVals, 0, 0);
            return v11;
          }
        }
      }
LABEL_22:
      sub_1C71608(data, procArg);
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
      sub_1C71608(IsExistBattleValueInMasterData, v8);
    }
    v11 = IsExistBattleValueInMasterData;
    v12 = 0;
    while ( 1 )
    {
      max_length = vals->max_length;
      if ( (int)v12 >= (int)max_length )
        break;
      if ( v12 >= max_length || (v14 = v12 + 1, v12 + 1 >= max_length) )
        sub_1C71610(IsExistBattleValueInMasterData);
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
  if ( (byte_4CCA512 & 1) == 0 )
  {
    this = (BattleLogicFunction_o *)sub_1C713B0(&BattleActionData_ChangeModelActionData_TypeInfo);
    byte_4CCA512 = 1;
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
    v12 = (BattleActionData_ChangeModelActionData_o *)sub_1C715FC(BattleActionData_ChangeModelActionData_TypeInfo);
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
      sub_1C71608(this, mainAction);
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
  if ( (byte_4CCA532 & 1) == 0 )
  {
    this = (BattleLogicFunction_o *)sub_1C713B0(&UnityEngine_Object_TypeInfo);
    byte_4CCA532 = 1;
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
    sub_1C71608(this, args);
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
    sub_1C71608(this, *(_QWORD *)&faceId);
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
    sub_1C71608(0, param);
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
    sub_1C71608(this, faceId);
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
    sub_1C71608(this, enable);
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
    sub_1C71608(this, enable);
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
  int32_t v20; // w3
  System_String_o *v21; // x4
  int32_t v22; // w5
  int64_t v23; // x6
  System_String_o *v24; // x7
  int v25; // w8
  BattleLogicFunction_o *v26; // x24
  unsigned int v27; // w27
  __int64 v28; // x25
  struct BattleLogic_o *v29; // x8
  BattleActionData_o *v30; // x25
  BattleLogicFunction_FuncSideEffectFunctionArgument_o *FuncSideEffectArg; // x0
  BattleActionData_o *baseActionData; // [xsp+18h] [xbp-58h] BYREF

  v8 = this;
  if ( (byte_4CCA536 & 1) == 0 )
  {
    sub_1C713B0(&BattleSkillInfoData_TypeInfo);
    sub_1C713B0(&int___TypeInfo);
    this = (BattleLogicFunction_o *)sub_1C713B0(&BattleLogicFunction_OnlyCheckFuncSideEffectFunctionArgument_TypeInfo);
    byte_4CCA536 = 1;
  }
  baseActionData = 0;
  data = v8->fields.data;
  if ( !data )
    goto LABEL_32;
  if ( !data->fields._lastUsedPlayerSkillInfo_k__BackingField )
    return;
  v10 = (BattleSkillInfoData_o *)sub_1C715FC(BattleSkillInfoData_TypeInfo);
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
    v16 = (BattleLogicFunction_OnlyCheckFuncSideEffectFunctionArgument_o *)sub_1C715FC(BattleLogicFunction_OnlyCheckFuncSideEffectFunctionArgument_TypeInfo);
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
  this = (BattleLogicFunction_o *)sub_1C71458(int___TypeInfo, 1);
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
    sub_1C71608(this, actionData);
  }
  v25 = (int)this->fields.logic;
  v26 = this;
  if ( v25 >= 1 )
  {
    v27 = 0;
    while ( v27 < v25 )
    {
      v28 = *((_QWORD *)&v26->fields.logictarget + (int)v27);
      if ( !v28 )
        goto LABEL_32;
      *(_QWORD *)(v28 + 200) = v16;
      *(_BYTE *)(v28 + 193) = v15;
      sub_1C71354((GrandQuestFolderBoardItem_o *)(v28 + 200), (int32_t)v16, v19, v20, v21, v22, v23, v24);
      v29 = v8->fields.logic;
      if ( !v29 )
        goto LABEL_32;
      this = (BattleLogicFunction_o *)v29->fields.logicSkill;
      if ( !this )
        goto LABEL_32;
      v30 = BattleLogicSkill__createSkillData_47407896(
              (BattleLogicSkill_o *)this,
              (BattleLogicTask_o *)v28,
              1,
              baseVals,
              &baseActionData,
              0);
      BattleActionData__addAction(actionData, v30, 0);
      if ( v30 )
        actionData->fields.isSuccessSkillCopyFunction = 1;
      v25 = (int)v26->fields.logic;
      if ( (int)++v27 >= v25 )
        goto LABEL_29;
    }
LABEL_33:
    sub_1C71610(this);
  }
LABEL_29:
  FuncSideEffectArg = BattleLogicFunction_ProcListInArgs__get_FuncSideEffectArg(args, 0);
  if ( FuncSideEffectArg )
    BattleLogicFunction_FuncSideEffectFunctionArgument__AddTarget_47183784(
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
  if ( (byte_4CCA510 & 1) == 0 )
  {
    sub_1C713B0(&Method_BasicHelper_IndexValue_int____78642256);
    sub_1C713B0(&BattleActionData_TypeInfo);
    sub_1C713B0(&MoveToSubMemberWaveTurnEvent_TypeInfo);
    this = (BattleLogicFunction_o *)sub_1C713B0(&RestockServantLogicByMoveToSubMember_TypeInfo);
    byte_4CCA510 = 1;
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
  BattleData__SubBuffFromPT_46036532((BattleData_o *)this, targetServantData, 0);
  this = (BattleLogicFunction_o *)v9->fields.data;
  if ( !this )
    goto LABEL_13;
  BattleData__SubBuffExitSvt((BattleData_o *)this, targetServantData, 0);
  this = (BattleLogicFunction_o *)v9->fields.data;
  if ( !this )
    goto LABEL_13;
  targetServantData->fields.deckIndex = BattleData__GetSubServantUsableDeckIndex((BattleData_o *)this, isEnemy, 0);
  data = v9->fields.data;
  v13 = (MoveToSubMemberWaveTurnEvent_o *)sub_1C715FC(MoveToSubMemberWaveTurnEvent_TypeInfo);
  MoveToSubMemberWaveTurnEvent___ctor(v13, data, 0);
  BattleServantData__RegisterWaveTurnEvent(targetServantData, (ServantWaveTurnEvent_o *)v13, 0);
  if ( !funcEnt )
    goto LABEL_13;
  v14 = isEnemy;
  v15 = BasicHelper__IndexValue_int_(
          funcEnt->fields.vals,
          0,
          0,
          (const MethodInfo_31392F0 *)Method_BasicHelper_IndexValue_int____78642256);
  uniqueId = targetServantData->fields.uniqueId;
  v17 = v15;
  v18 = (RestockServantLogicByMoveToSubMember_o *)sub_1C715FC(RestockServantLogicByMoveToSubMember_TypeInfo);
  RestockServantLogicByMoveToSubMember___ctor(v18, ServantIndex, v14, v17, uniqueId, 0);
  this = (BattleLogicFunction_o *)v9->fields.data;
  if ( !this
    || (BattleData__AppendRestockServantLogic((BattleData_o *)this, (RestockServantLogic_o *)v18, 0),
        v19 = (BattleActionData_o *)sub_1C715FC(BattleActionData_TypeInfo),
        BattleActionData___ctor(v19, 0),
        !v19) )
  {
LABEL_13:
    sub_1C71608(this, targetServantData);
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
  if ( (byte_4CCA533 & 1) == 0 )
  {
    this = (BattleLogicFunction_o *)sub_1C713B0(&UnityEngine_Object_TypeInfo);
    byte_4CCA533 = 1;
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
      if ( !byte_4CC0D09 )
      {
        sub_1C713B0(&UnityEngine_Vector3_TypeInfo);
        byte_4CC0D09 = 1;
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
    sub_1C71608(this, args);
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

  if ( (byte_4CCA527 & 1) == 0 )
  {
    sub_1C713B0(&Method_DataManager_GetMaster_SkillLvMaster___);
    sub_1C713B0(&DataManager_TypeInfo);
    byte_4CCA527 = 1;
  }
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_object = (SkillLvEntity_o *)DataManager__GetMaster_object_((const MethodInfo_314B0B8 *)Method_DataManager_GetMaster_SkillLvMaster___);
  if ( !actionData
    || (v9 = (SkillLvMaster_o *)Master_object, (Master_object = (SkillLvEntity_o *)actionData->fields.skillInfo) == 0)
    || (Master_object = (SkillLvEntity_o *)((__int64 (__fastcall *)(SkillLvEntity_o *, const MethodInfo *))Master_object->klass->vtable._5_CreatePrimaryKey.methodPtr)(
                                             Master_object,
                                             Master_object->klass->vtable._5_CreatePrimaryKey.method),
        (skillInfo = actionData->fields.skillInfo) == 0)
    || !v9
    || (Master_object = SkillLvMaster__GetEntity(v9, (int32_t)Master_object, skillInfo->fields.skilllv, 0)) == 0 )
  {
    sub_1C71608(Master_object, v8);
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
  if ( (byte_4CCA528 & 1) == 0 )
  {
    sub_1C713B0(&BattleActionData_TypeInfo);
    sub_1C713B0(&Method_DataManager_GetMasterData_SkillLvMaster___);
    sub_1C713B0(&UnityEngine_Object_TypeInfo);
    this = (BattleLogicFunction_o *)sub_1C713B0(&Method_SingletonMonoBehaviour_DataManager__getInstance__);
    byte_4CCA528 = 1;
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
    v13 = sub_1C47444(v12);
  v14 = *(_QWORD *)(*(_QWORD *)(v13 + 192) + 16LL);
  if ( (*(_BYTE *)(v14 + 309) & 1) == 0 )
    v14 = sub_1C47444(v12);
  this = **(BattleLogicFunction_o ***)(v14 + 184);
  if ( !this )
    goto LABEL_56;
  this = (BattleLogicFunction_o *)DataManager__GetMasterData_object_(
                                    (DataManager_o *)this,
                                    (const MethodInfo_314B10C *)Method_DataManager_GetMasterData_SkillLvMaster___);
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
          v21 = (BattleActionData_o *)sub_1C715FC(BattleActionData_TypeInfo);
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
    sub_1C71608(this, actionData);
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
      v28 = (BattleActionData_o *)sub_1C715FC(BattleActionData_TypeInfo);
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
  System_String_o *v4; // x4
  int32_t v5; // w5
  int64_t v6; // x6
  System_String_o *v7; // x7
  int32_t v11; // w2
  int32_t v12; // w3
  System_String_o *v13; // x4
  int32_t v14; // w5
  int64_t v15; // x6
  System_String_o *v16; // x7
  __int64 procArg_k__BackingField; // x0
  __int64 v18; // x1
  int32_t v19; // w2
  int32_t v20; // w3
  System_String_o *v21; // x4
  int32_t v22; // w5
  int64_t v23; // x6
  System_String_o *v24; // x7
  struct BattleLogicFunctionProcess_FunctionUnitCheck_o *funcUnit_k__BackingField; // x8
  int32_t v26; // w2
  int32_t v27; // w3
  System_String_o *v28; // x4
  int32_t v29; // w5
  int64_t v30; // x6
  System_String_o *v31; // x7
  struct BattleLogicFunctionProcess_FunctionUnitCheck_o *v32; // x8
  System_Collections_Generic_List_object__o *v33; // x20
  int32_t v34; // w2
  int32_t v35; // w3
  System_String_o *v36; // x4
  int32_t v37; // w5
  int64_t v38; // x6
  System_String_o *v39; // x7
  SkillLvMaster_o *v40; // x20
  _DWORD *methods; // x8
  System_Collections_ICollection_o *RevivalTargetArray; // x20
  _BOOL8 IsNullOrEmpty; // x0
  const MethodInfo *v44; // x2
  System_Collections_Generic_IEnumerable_TSource__o *DeadAnimBeDoneSvtArray; // x21
  BattleLogicFunction___c_c *v46; // x8
  System_Func_object__int__o *_9__120_0; // x22
  Il2CppObject *v48; // x23
  struct BattleLogicFunction___c_StaticFields *static_fields; // x0
  int32_t v50; // w2
  int32_t v51; // w3
  System_String_o *v52; // x4
  int32_t v53; // w5
  int64_t v54; // x6
  System_String_o *v55; // x7
  System_Collections_Generic_IEnumerable_IGrouping_TKey__TSource___o *v56; // x0
  BattleLogicFunction___c_c *v57; // x8
  System_Collections_Generic_IEnumerable_TSource__o *v58; // x21
  System_Func_object__int__o *_9__120_1; // x22
  Il2CppObject *v60; // x23
  struct BattleLogicFunction___c_StaticFields *v61; // x0
  int32_t v62; // w2
  int32_t v63; // w3
  System_String_o *v64; // x4
  int32_t v65; // w5
  int64_t v66; // x6
  System_String_o *v67; // x7
  System_Func_object__object__o *_9__120_2; // x23
  Il2CppObject *v69; // x24
  struct BattleLogicFunction___c_StaticFields *v70; // x0
  int32_t v71; // w2
  int32_t v72; // w3
  System_String_o *v73; // x4
  int32_t v74; // w5
  int64_t v75; // x6
  System_String_o *v76; // x7
  int32_t v77; // w2
  int32_t v78; // w3
  System_String_o *v79; // x4
  int32_t v80; // w5
  int64_t v81; // x6
  System_String_o *v82; // x7
  const MethodInfo *v83; // x2
  long double inited; // q0
  void *monitor; // x8
  unsigned __int64 v86; // x28
  int32_t v87; // w23
  _QWORD *v88; // x24
  __int64 v89; // x8
  __int64 v90; // x0
  __int64 v91; // x0
  BattleLogicFunction___c__DisplayClass120_0_o *v92; // x4
  const MethodInfo *v93; // x5
  __int64 v94; // x8
  __int64 v95; // x24
  unsigned __int64 v96; // x21
  __int64 v97; // x20
  BattleServantData_o *v98; // x25
  const MethodInfo *v99; // x6
  int32_t v100; // w27
  BattleActionData_o *v101; // x26
  int32_t v102; // w2
  int32_t v103; // w3
  System_String_o *v104; // x4
  int32_t v105; // w5
  int64_t v106; // x6
  System_String_o *v107; // x7
  int32_t v108; // w2
  int32_t v109; // w3
  System_String_o *v110; // x4
  int32_t v111; // w5
  int64_t v112; // x6
  System_String_o *v113; // x7
  __int64 v114; // x8
  _QWORD *v115; // x9
  __int64 v116; // x10
  __int64 v117; // x8
  System_Collections_ICollection_o *v118; // [xsp+8h] [xbp-B8h]
  System_Collections_Generic_Dictionary_K__V__o *dic; // [xsp+10h] [xbp-B0h]
  int32_t expelledUniqueId[2]; // [xsp+18h] [xbp-A8h] BYREF
  GrandQuestFolderBoardItem_o v121; // [xsp+20h] [xbp-A0h] BYREF

  if ( (byte_4CCA52A & 1) == 0 )
  {
    sub_1C713B0(&Method_System_Array_Empty_BattleServantData___);
    sub_1C713B0(&Method_BasicHelper_GetValue_int__BattleServantData_____);
    sub_1C713B0(&Method_DataManager_GetMaster_SkillLvMaster___);
    sub_1C713B0(&DataManager_TypeInfo);
    sub_1C713B0(&Method_System_Linq_Enumerable_GroupBy_BattleServantData__int___);
    sub_1C713B0(&Method_System_Linq_Enumerable_ToDictionary_IGrouping_int__BattleServantData___int__BattleServantData_____);
    sub_1C713B0(&System_Func_IGrouping_int__BattleServantData___int__TypeInfo);
    sub_1C713B0(&System_Func_BattleServantData__int__TypeInfo);
    sub_1C713B0(&System_Func_IGrouping_int__BattleServantData___BattleServantData____TypeInfo);
    sub_1C713B0(&Method_System_Collections_Generic_List_BattleServantData__Add__);
    sub_1C713B0(&Method_System_Collections_Generic_List_BattleServantData___ctor__);
    sub_1C713B0(&System_Collections_Generic_List_BattleServantData__TypeInfo);
    sub_1C713B0(&Method_BattleLogicFunction___c__FunctionRevivalInDetail_b__120_0__);
    sub_1C713B0(&Method_BattleLogicFunction___c__FunctionRevivalInDetail_b__120_1__);
    sub_1C713B0(&Method_BattleLogicFunction___c__FunctionRevivalInDetail_b__120_2__);
    sub_1C713B0(&BattleLogicFunction___c_TypeInfo);
    byte_4CCA52A = 1;
  }
  *(_QWORD *)expelledUniqueId = 0;
  v121.klass = (GrandQuestFolderBoardItem_c *)actionData;
  memset(&v121.monitor, 0, 56);
  sub_1C71354(&v121, (int32_t)actionData, (int32_t)funcTarget, (int32_t)method, v4, v5, v6, v7);
  v121.monitor = this;
  sub_1C71354((GrandQuestFolderBoardItem_o *)&v121.monitor, (int32_t)this, v11, v12, v13, v14, v15, v16);
  if ( !funcTarget )
    goto LABEL_67;
  funcUnit_k__BackingField = funcTarget->fields._funcUnit_k__BackingField;
  if ( !funcUnit_k__BackingField )
    goto LABEL_67;
  v121.fields.sortValue0 = (int64_t)funcUnit_k__BackingField->fields._dataVals_k__BackingField;
  sub_1C71354(
    (GrandQuestFolderBoardItem_o *)&v121.fields.sortValue0,
    v121.fields.sortValue0,
    v19,
    v20,
    v21,
    v22,
    v23,
    v24);
  if ( !v121.fields.sortValue0 )
    goto LABEL_67;
  *(_QWORD *)&v121.fields.sortIndex = *(_QWORD *)(v121.fields.sortValue0 + 40);
  sub_1C71354(
    (GrandQuestFolderBoardItem_o *)&v121.fields.sortIndex,
    v121.fields.sortIndex,
    v26,
    v27,
    v28,
    v29,
    v30,
    v31);
  procArg_k__BackingField = (__int64)funcTarget->fields._funcUnit_k__BackingField;
  if ( !procArg_k__BackingField )
    goto LABEL_67;
  procArg_k__BackingField = BattleLogicFunctionProcess_FunctionUnitCheck__get_FuncIndex(
                              (BattleLogicFunctionProcess_FunctionUnitCheck_o *)procArg_k__BackingField,
                              0);
  v121.fields.index = procArg_k__BackingField;
  v32 = funcTarget->fields._funcUnit_k__BackingField;
  if ( !v32 )
    goto LABEL_67;
  procArg_k__BackingField = (__int64)v32->fields._procArg_k__BackingField;
  if ( !procArg_k__BackingField )
    goto LABEL_67;
  LOBYTE(v121.fields.sortValue0B) = BattleLogicFunction_ProcListInArgs__get_IsCommandSideEffect(
                                      (BattleLogicFunction_ProcListInArgs_o *)procArg_k__BackingField,
                                      0);
  v33 = (System_Collections_Generic_List_object__o *)sub_1C715FC(System_Collections_Generic_List_BattleServantData__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v33,
    (const MethodInfo_380FEE4 *)Method_System_Collections_Generic_List_BattleServantData___ctor__);
  v121.fields.sortValue1 = (int64_t)v33;
  sub_1C71354((GrandQuestFolderBoardItem_o *)&v121.fields.sortValue1, (int32_t)v33, v34, v35, v36, v37, v38, v39);
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  procArg_k__BackingField = (__int64)DataManager__GetMaster_object_((const MethodInfo_314B0B8 *)Method_DataManager_GetMaster_SkillLvMaster___);
  if ( !v121.klass )
    goto LABEL_67;
  v40 = (SkillLvMaster_o *)procArg_k__BackingField;
  procArg_k__BackingField = (__int64)v121.klass->_1.methods;
  if ( !procArg_k__BackingField )
    goto LABEL_67;
  procArg_k__BackingField = (*(__int64 (__fastcall **)(__int64, _QWORD))(*(_QWORD *)procArg_k__BackingField + 392LL))(
                              procArg_k__BackingField,
                              *(_QWORD *)(*(_QWORD *)procArg_k__BackingField + 400LL));
  if ( !v121.klass )
    goto LABEL_67;
  methods = v121.klass->_1.methods;
  if ( !methods )
    goto LABEL_67;
  if ( !v40 )
    goto LABEL_67;
  procArg_k__BackingField = (__int64)SkillLvMaster__GetEntity(v40, procArg_k__BackingField, methods[9], 0);
  if ( !procArg_k__BackingField )
    goto LABEL_67;
  RevivalTargetArray = (System_Collections_ICollection_o *)SkillLvEntity__GetRevivalTargetArray(
                                                             (SkillLvEntity_o *)procArg_k__BackingField,
                                                             0);
  IsNullOrEmpty = BasicHelper__IsNullOrEmpty(RevivalTargetArray, 0);
  if ( IsNullOrEmpty )
    goto LABEL_66;
  procArg_k__BackingField = v121.fields.sortValue0;
  if ( !v121.fields.sortValue0 )
    goto LABEL_67;
  v121.fields.selectNum = DataVals__GetValue((DataVals_o *)v121.fields.sortValue0, 0);
  procArg_k__BackingField = (__int64)this->fields.data;
  if ( !procArg_k__BackingField )
    goto LABEL_67;
  DeadAnimBeDoneSvtArray = (System_Collections_Generic_IEnumerable_TSource__o *)BattleData__GetDeadAnimBeDoneSvtArray(
                                                                                  (BattleData_o *)procArg_k__BackingField,
                                                                                  0);
  v46 = BattleLogicFunction___c_TypeInfo;
  if ( !BattleLogicFunction___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BattleLogicFunction___c_TypeInfo);
    v46 = BattleLogicFunction___c_TypeInfo;
  }
  _9__120_0 = (System_Func_object__int__o *)v46->static_fields->__9__120_0;
  if ( !_9__120_0 )
  {
    if ( !v46->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v46);
      v46 = BattleLogicFunction___c_TypeInfo;
    }
    v48 = (Il2CppObject *)v46->static_fields->__9;
    _9__120_0 = (System_Func_object__int__o *)sub_1C715FC(System_Func_BattleServantData__int__TypeInfo);
    System_Func_object__int____ctor(
      _9__120_0,
      v48,
      Method_BattleLogicFunction___c__FunctionRevivalInDetail_b__120_0__,
      0);
    static_fields = BattleLogicFunction___c_TypeInfo->static_fields;
    static_fields->__9__120_0 = (struct System_Func_BattleServantData__int__o *)_9__120_0;
    sub_1C71354(
      (GrandQuestFolderBoardItem_o *)&static_fields->__9__120_0,
      (int32_t)_9__120_0,
      v50,
      v51,
      v52,
      v53,
      v54,
      v55);
  }
  v56 = System_Linq_Enumerable__GroupBy_object__int_(
          DeadAnimBeDoneSvtArray,
          (System_Func_TSource__TKey__o *)_9__120_0,
          (const MethodInfo_31755C0 *)Method_System_Linq_Enumerable_GroupBy_BattleServantData__int___);
  v57 = BattleLogicFunction___c_TypeInfo;
  v58 = (System_Collections_Generic_IEnumerable_TSource__o *)v56;
  if ( !BattleLogicFunction___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BattleLogicFunction___c_TypeInfo);
    v57 = BattleLogicFunction___c_TypeInfo;
  }
  _9__120_1 = (System_Func_object__int__o *)v57->static_fields->__9__120_1;
  if ( !_9__120_1 )
  {
    if ( !v57->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v57);
      v57 = BattleLogicFunction___c_TypeInfo;
    }
    v60 = (Il2CppObject *)v57->static_fields->__9;
    _9__120_1 = (System_Func_object__int__o *)sub_1C715FC(System_Func_IGrouping_int__BattleServantData___int__TypeInfo);
    System_Func_object__int____ctor(
      _9__120_1,
      v60,
      Method_BattleLogicFunction___c__FunctionRevivalInDetail_b__120_1__,
      0);
    v61 = BattleLogicFunction___c_TypeInfo->static_fields;
    v61->__9__120_1 = (struct System_Func_IGrouping_int__BattleServantData___int__o *)_9__120_1;
    sub_1C71354((GrandQuestFolderBoardItem_o *)&v61->__9__120_1, (int32_t)_9__120_1, v62, v63, v64, v65, v66, v67);
    v57 = BattleLogicFunction___c_TypeInfo;
  }
  if ( !v57->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(v57);
    v57 = BattleLogicFunction___c_TypeInfo;
  }
  _9__120_2 = (System_Func_object__object__o *)v57->static_fields->__9__120_2;
  if ( !_9__120_2 )
  {
    if ( !v57->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v57);
      v57 = BattleLogicFunction___c_TypeInfo;
    }
    v69 = (Il2CppObject *)v57->static_fields->__9;
    _9__120_2 = (System_Func_object__object__o *)sub_1C715FC(System_Func_IGrouping_int__BattleServantData___BattleServantData____TypeInfo);
    System_Func_object__object____ctor(
      _9__120_2,
      v69,
      Method_BattleLogicFunction___c__FunctionRevivalInDetail_b__120_2__,
      0);
    v70 = BattleLogicFunction___c_TypeInfo->static_fields;
    v70->__9__120_2 = (struct System_Func_IGrouping_int__BattleServantData___BattleServantData____o *)_9__120_2;
    sub_1C71354((GrandQuestFolderBoardItem_o *)&v70->__9__120_2, (int32_t)_9__120_2, v71, v72, v73, v74, v75, v76);
  }
  procArg_k__BackingField = (__int64)System_Linq_Enumerable__ToDictionary_object__int__object_(
                                       v58,
                                       (System_Func_TSource__TKey__o *)_9__120_1,
                                       (System_Func_TSource__TElement__o *)_9__120_2,
                                       (const MethodInfo_318B904 *)Method_System_Linq_Enumerable_ToDictionary_IGrouping_int__BattleServantData___int__BattleServantData_____);
  dic = (System_Collections_Generic_Dictionary_K__V__o *)procArg_k__BackingField;
  if ( !v121.klass
    || (v121.fields.sortStr1 = (struct System_String_o *)BattleActionData__SeekLastActionData(
                                                           (BattleActionData_o *)v121.klass,
                                                           0),
        sub_1C71354(
          (GrandQuestFolderBoardItem_o *)&v121.fields.sortStr1,
          (int32_t)v121.fields.sortStr1,
          v77,
          v78,
          v79,
          v80,
          v81,
          v82),
        !RevivalTargetArray) )
  {
LABEL_67:
    sub_1C71608(procArg_k__BackingField, v18);
  }
  monitor = RevivalTargetArray[1].monitor;
  if ( (int)monitor >= 1 )
  {
    v86 = 0;
    v118 = RevivalTargetArray;
    while ( 1 )
    {
      if ( v86 >= (unsigned int)monitor )
        goto LABEL_68;
      v87 = *((_DWORD *)&RevivalTargetArray[2].klass + v86);
      v88 = Method_System_Array_Empty_BattleServantData___;
      v89 = *((_QWORD *)Method_System_Array_Empty_BattleServantData___ + 7);
      if ( !v89 )
      {
        sub_1C474A0(Method_System_Array_Empty_BattleServantData___);
        v89 = v88[7];
      }
      v90 = *(_QWORD *)(v89 + 16);
      if ( (*(_BYTE *)(v90 + 309) & 1) == 0 )
        v90 = sub_1C47444(inited);
      if ( !*(_DWORD *)(v90 + 224) )
        inited = j_il2cpp_runtime_class_init_0(v90);
      v91 = *(_QWORD *)(v88[7] + 16LL);
      if ( (*(_BYTE *)(v91 + 309) & 1) == 0 )
        v91 = sub_1C47444(inited);
      procArg_k__BackingField = (__int64)BasicHelper__GetValue_int__object_(
                                           dic,
                                           v87,
                                           **(Il2CppObject ***)(v91 + 184),
                                           (const MethodInfo_3138B80 *)Method_BasicHelper_GetValue_int__BattleServantData_____);
      if ( !procArg_k__BackingField )
        goto LABEL_67;
      v94 = *(_QWORD *)(procArg_k__BackingField + 24);
      v95 = procArg_k__BackingField;
      if ( (int)v94 >= 1 )
        break;
LABEL_64:
      RevivalTargetArray = v118;
      ++v86;
      LODWORD(monitor) = v118[1].monitor;
      if ( (__int64)v86 >= (int)monitor )
        goto LABEL_65;
    }
    v96 = 0;
    v97 = procArg_k__BackingField + 32;
    while ( v96 < (unsigned int)v94 )
    {
      v98 = *(BattleServantData_o **)(v97 + 8 * v96);
      procArg_k__BackingField = BattleLogicFunction___FunctionRevivalInDetail_g__TryGetEntryIndex_120_5(
                                  this,
                                  v98,
                                  &expelledUniqueId[1],
                                  expelledUniqueId,
                                  v92,
                                  v93);
      if ( (procArg_k__BackingField & 1) != 0 )
      {
        v100 = expelledUniqueId[1];
        procArg_k__BackingField = (__int64)BattleLogicFunction___FunctionRevivalInDetail_g__GenerateRevivalActionData_120_3(
                                             this,
                                             v98,
                                             v87,
                                             expelledUniqueId[1],
                                             expelledUniqueId[0],
                                             (BattleLogicFunction___c__DisplayClass120_0_o *)&v121,
                                             v99);
        if ( !this->fields.data )
          goto LABEL_67;
        v101 = (BattleActionData_o *)procArg_k__BackingField;
        BattleData__SetEntry(this->fields.data, v98, v100, 1, 0);
        procArg_k__BackingField = (__int64)v121.fields.sortStr1;
        if ( !v121.fields.sortStr1 )
          goto LABEL_67;
        BattleActionData__AddAfterActionData((BattleActionData_o *)v121.fields.sortStr1, v101, 0, 0);
        v121.fields.sortStr1 = (struct System_String_o *)v101;
        sub_1C71354(
          (GrandQuestFolderBoardItem_o *)&v121.fields.sortStr1,
          (int32_t)v101,
          v102,
          v103,
          v104,
          v105,
          v106,
          v107);
        procArg_k__BackingField = v121.fields.sortValue1;
        if ( !v121.fields.sortValue1 )
          goto LABEL_67;
        v114 = *(_QWORD *)(v121.fields.sortValue1 + 16);
        v115 = Method_System_Collections_Generic_List_BattleServantData__Add__;
        ++*(_DWORD *)(v121.fields.sortValue1 + 28);
        if ( !v114 )
          goto LABEL_67;
        v116 = *(int *)(procArg_k__BackingField + 24);
        if ( (unsigned int)v116 >= *(_DWORD *)(v114 + 24) )
        {
          System_Collections_Generic_List_object___AddWithResize(
            (System_Collections_Generic_List_object__o *)procArg_k__BackingField,
            (Il2CppObject *)v98,
            *(const MethodInfo_3810718 **)(*(_QWORD *)(v115[4] + 192LL) + 112LL));
        }
        else
        {
          v117 = v114 + 8 * v116;
          *(_DWORD *)(procArg_k__BackingField + 24) = v116 + 1;
          *(_QWORD *)(v117 + 32) = v98;
          sub_1C71354((GrandQuestFolderBoardItem_o *)(v117 + 32), (int32_t)v98, v108, v109, v110, v111, v112, v113);
        }
      }
      LODWORD(v94) = *(_DWORD *)(v95 + 24);
      if ( (__int64)++v96 >= (int)v94 )
        goto LABEL_64;
    }
LABEL_68:
    sub_1C71610(procArg_k__BackingField);
  }
LABEL_65:
  BattleLogicFunction___FunctionRevivalInDetail_g__AfterProcessForRevivedServants_120_6(
    this,
    (BattleLogicFunction___c__DisplayClass120_0_o *)&v121,
    v83);
LABEL_66:
  BattleLogicFunction___FunctionRevivalInDetail_g__SetMissIfNoActions_120_4(
    (BattleLogicFunction_o *)IsNullOrEmpty,
    (BattleLogicFunction___c__DisplayClass120_0_o *)&v121,
    v44);
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
      sub_1C71608(IsExistBattleMissionValueInMasterData, v6);
    v8 = 1;
    while ( 1 )
    {
      max_length = vals->max_length;
      v10 = v8 - 1;
      if ( v8 - 1 >= (int)max_length )
        break;
      if ( v10 >= max_length || v8 >= max_length )
        sub_1C71610(IsExistBattleMissionValueInMasterData);
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
      sub_1C71608(IsExistBattleValueInMasterData, v8);
    }
    v11 = IsExistBattleValueInMasterData;
    v12 = 0;
    while ( 1 )
    {
      max_length = vals->max_length;
      if ( (int)v12 >= (int)max_length )
        break;
      if ( v12 >= max_length || (v14 = v12 + 1, v12 + 1 >= max_length) )
        sub_1C71610(IsExistBattleValueInMasterData);
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
    sub_1C71608(this, mainActionData);
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

  if ( (byte_4CCA539 & 1) == 0 )
  {
    sub_1C713B0(&BattleActionData_TypeInfo);
    byte_4CCA539 = 1;
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
          v11 = (BattleActionData_o *)sub_1C715FC(BattleActionData_TypeInfo);
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
    sub_1C71608(data, procArg);
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
  int32_t v24; // w3
  System_String_o *v25; // x4
  int32_t v26; // w5
  int64_t v27; // x6
  System_String_o *v28; // x7
  BattleLogicFunction___c_c *v29; // x0
  System_Func_object__bool__o *_9__135_1; // x21
  Il2CppObject *v31; // x24
  struct BattleLogicFunction___c_StaticFields *static_fields; // x0
  int32_t v33; // w2
  int32_t v34; // w3
  System_String_o *v35; // x4
  int32_t v36; // w5
  int64_t v37; // x6
  System_String_o *v38; // x7
  BattleActionEffect_UpdateAllInfo_o *v39; // x21
  const MethodInfo *v40; // [xsp+0h] [xbp-70h]

  v8 = (Il2CppObject *)this;
  if ( (byte_4CCA535 & 1) == 0 )
  {
    sub_1C713B0(&Method_BasicHelper_Any_BattleBuffData_BuffData___);
    sub_1C713B0(&Method_BattleLogicFunction__FunctionSubFieldBuff_b__135_0__);
    sub_1C713B0(&Method_System_Linq_Enumerable_Select_BattleBuffData_BuffData__BattleBuffData_BuffData___);
    sub_1C713B0(&Method_System_Linq_Enumerable_ToList_BattleBuffData_BuffData___);
    sub_1C713B0(&System_Func_BattleBuffData_BuffData__BattleBuffData_BuffData__TypeInfo);
    sub_1C713B0(&System_Func_BattleBuffData_BuffData__bool__TypeInfo);
    sub_1C713B0(&Method_System_Collections_Generic_List_BattleBuffData_BuffData__get_Count__);
    sub_1C713B0(&Method_BattleLogicFunction___c__FunctionSubFieldBuff_b__135_1__);
    sub_1C713B0(&BattleLogicFunction___c_TypeInfo);
    this = (BattleLogicFunction_o *)sub_1C713B0(&BattleActionEffect_UpdateAllInfo_TypeInfo);
    byte_4CCA535 = 1;
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
    v21 = (System_Func_object__object__o *)sub_1C715FC(System_Func_BattleBuffData_BuffData__BattleBuffData_BuffData__TypeInfo);
    System_Func_object__object____ctor(v21, v8, Method_BattleLogicFunction__FunctionSubFieldBuff_b__135_0__, 0);
    v22 = (System_Collections_Generic_IEnumerable_TSource__o *)System_Linq_Enumerable__Select_object__object_(
                                                                 (System_Collections_Generic_IEnumerable_TSource__o *)data,
                                                                 (System_Func_TSource__TResult__o *)v21,
                                                                 (const MethodInfo_31818B4 *)Method_System_Linq_Enumerable_Select_BattleBuffData_BuffData__BattleBuffData_BuffData___);
    this = (BattleLogicFunction_o *)System_Linq_Enumerable__ToList_object_(
                                      v22,
                                      (const MethodInfo_318FC88 *)Method_System_Linq_Enumerable_ToList_BattleBuffData_BuffData___);
    if ( FunctionObject )
    {
      FunctionObject->fields.removeBuffList = (struct System_Collections_Generic_List_BattleBuffData_BuffData__o *)this;
      sub_1C71354(
        (GrandQuestFolderBoardItem_o *)&FunctionObject->fields.removeBuffList,
        (int32_t)this,
        v23,
        v24,
        v25,
        v26,
        v27,
        v28);
      v29 = BattleLogicFunction___c_TypeInfo;
      if ( !BattleLogicFunction___c_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(BattleLogicFunction___c_TypeInfo);
        v29 = BattleLogicFunction___c_TypeInfo;
      }
      _9__135_1 = (System_Func_object__bool__o *)v29->static_fields->__9__135_1;
      if ( !_9__135_1 )
      {
        if ( !v29->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(v29);
          v29 = BattleLogicFunction___c_TypeInfo;
        }
        v31 = (Il2CppObject *)v29->static_fields->__9;
        _9__135_1 = (System_Func_object__bool__o *)sub_1C715FC(System_Func_BattleBuffData_BuffData__bool__TypeInfo);
        System_Func_object__bool____ctor(
          _9__135_1,
          v31,
          Method_BattleLogicFunction___c__FunctionSubFieldBuff_b__135_1__,
          0);
        static_fields = BattleLogicFunction___c_TypeInfo->static_fields;
        static_fields->__9__135_1 = (struct System_Func_BattleBuffData_BuffData__bool__o *)_9__135_1;
        sub_1C71354(
          (GrandQuestFolderBoardItem_o *)&static_fields->__9__135_1,
          (int32_t)_9__135_1,
          v33,
          v34,
          v35,
          v36,
          v37,
          v38);
      }
      this = (BattleLogicFunction_o *)BasicHelper__Any_object_(
                                        (System_Collections_Generic_List_T__o *)data,
                                        (System_Func_T__bool__o *)_9__135_1,
                                        (const MethodInfo_31341D4 *)Method_BasicHelper_Any_BattleBuffData_BuffData___);
      if ( ((unsigned __int8)this & 1) != 0 )
      {
        v39 = (BattleActionEffect_UpdateAllInfo_o *)sub_1C715FC(BattleActionEffect_UpdateAllInfo_TypeInfo);
        BattleActionEffect_UpdateAllInfo___ctor(v39, 0);
        BattleActionData_BuffData__SetActionEffectProc(FunctionObject, (BattleActionEffect_Base_o *)v39, 0);
      }
      if ( mainAction )
      {
        BattleActionData__setBuffData(mainAction, FunctionObject, dataVals_k__BackingField, 0, 0);
        return;
      }
    }
LABEL_26:
    sub_1C71608(this, args);
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
                                    v40);
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
  int32_t v38; // w3
  System_String_o *v39; // x4
  int32_t v40; // w5
  int64_t v41; // x6
  System_String_o *v42; // x7
  struct System_Object_array *items; // x8
  _QWORD *v44; // x9
  __int64 size; // x10
  __int64 v46; // x1
  Il2CppClass **v47; // x0
  BattleLogicFunction___c_c *v48; // x0
  System_Func_int__Guid__o *_9__157_0; // x27
  Il2CppObject *v50; // x28
  struct BattleLogicFunction___c_StaticFields *static_fields; // x0
  int32_t v52; // w2
  int32_t v53; // w3
  System_String_o *v54; // x4
  int32_t v55; // w5
  int64_t v56; // x6
  System_String_o *v57; // x7
  System_Collections_Generic_IEnumerable_TSource__o *v58; // x0
  __int64 v59; // x27
  int v60; // w29
  unsigned __int64 v61; // x28
  unsigned int v62; // w19
  char *v63; // x21
  _DWORD *v64; // x21
  int v65; // t1
  struct BattleData_o *data; // x8
  struct BattleData_o *v68; // x8
  struct System_Int32_array *e_entryid; // x9
  System_Collections_IEnumerable_o *RestockServantLogicList; // x0
  System_Collections_Generic_IEnumerable_TSource__o *v71; // x21
  System_Func_object__bool__o *v72; // x22
  System_Collections_Generic_IEnumerable_TSource__o *v73; // x0
  System_Object_array *v74; // x21
  int v75; // w8
  unsigned int v76; // w19
  RestockServantLogic_o *v77; // x22
  int32_t FieldMemberIndex_k__BackingField; // w23
  unsigned __int64 v79; // x21
  int32_t v80; // w2
  int32_t v81; // [xsp+Ch] [xbp-74h]
  int32_t v82; // [xsp+10h] [xbp-70h]
  bool v83; // [xsp+14h] [xbp-6Ch]

  if ( (byte_4CCA53C & 1) == 0 )
  {
    sub_1C713B0(&Method_BasicHelper_IsValidIndex_int___);
    sub_1C713B0(&BattleActionData_TypeInfo);
    sub_1C713B0(&Method_System_Linq_Enumerable_Contains_int___);
    sub_1C713B0(&Method_System_Linq_Enumerable_OfType_RestockServantLogicByMoveToSubMember___);
    sub_1C713B0(&Method_System_Linq_Enumerable_OrderBy_int__Guid___);
    sub_1C713B0(&Method_System_Linq_Enumerable_ToArray_int___);
    sub_1C713B0(&Method_System_Linq_Enumerable_ToArray_RestockServantLogicByMoveToSubMember___);
    sub_1C713B0(&Method_System_Linq_Enumerable_Where_RestockServantLogicByMoveToSubMember___);
    sub_1C713B0(&System_Func_int__Guid__TypeInfo);
    sub_1C713B0(&System_Func_RestockServantLogicByMoveToSubMember__bool__TypeInfo);
    sub_1C713B0(&Method_System_Collections_Generic_List_BattleServantData__Add__);
    sub_1C713B0(&Method_System_Collections_Generic_List_BattleServantData___ctor__);
    sub_1C713B0(&Method_System_Collections_Generic_List_BattleServantData__get_Count__);
    sub_1C713B0(&Method_System_Collections_Generic_List_BattleServantData__get_Item__);
    sub_1C713B0(&System_Collections_Generic_List_BattleServantData__TypeInfo);
    sub_1C713B0(&Method_BattleLogicFunction___c__FunctionSwapFieldPosition_b__157_0__);
    sub_1C713B0(&Method_BattleLogicFunction___c__DisplayClass157_0__FunctionSwapFieldPosition_b__1__);
    sub_1C713B0(&BattleLogicFunction___c__DisplayClass157_0_TypeInfo);
    sub_1C713B0(&BattleLogicFunction___c_TypeInfo);
    byte_4CCA53C = 1;
  }
  v12 = (BattleLogicFunction___c__DisplayClass157_0_o *)sub_1C715FC(BattleLogicFunction___c__DisplayClass157_0_TypeInfo);
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
  v81 = IsNullOrEmpty;
  v82 = functionIndex;
  v83 = noTargetSkipSkill;
  v31 = (System_Collections_Generic_List_object__o *)sub_1C715FC(System_Collections_Generic_List_BattleServantData__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v31,
    (const MethodInfo_380FEE4 *)Method_System_Collections_Generic_List_BattleServantData___ctor__);
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
      v44 = Method_System_Collections_Generic_List_BattleServantData__Add__;
      ++v31->fields._version;
      if ( !items )
        goto LABEL_107;
      size = v31->fields._size;
      v46 = IsNullOrEmpty;
      if ( (unsigned int)size >= LODWORD(items->max_length) )
      {
        System_Collections_Generic_List_object___AddWithResize(
          v31,
          (Il2CppObject *)IsNullOrEmpty,
          *(const MethodInfo_3810718 **)(*(_QWORD *)(v44[4] + 192LL) + 112LL));
      }
      else
      {
        v47 = &items->obj.klass + size;
        v31->fields._size = size + 1;
        v47[4] = (Il2CppClass *)v46;
        sub_1C71354((GrandQuestFolderBoardItem_o *)(v47 + 4), v46, v37, v38, v39, v40, v41, v42);
      }
      v33 = BackStepTargetArray->max_length;
      if ( (int)++v34 >= v33 )
        goto LABEL_47;
    }
LABEL_108:
    sub_1C71610(IsNullOrEmpty);
  }
LABEL_47:
  if ( v19 )
  {
    v48 = BattleLogicFunction___c_TypeInfo;
    if ( !BattleLogicFunction___c_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(BattleLogicFunction___c_TypeInfo);
      v48 = BattleLogicFunction___c_TypeInfo;
    }
    _9__157_0 = v48->static_fields->__9__157_0;
    if ( !_9__157_0 )
    {
      if ( !v48->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(v48);
        v48 = BattleLogicFunction___c_TypeInfo;
      }
      v50 = (Il2CppObject *)v48->static_fields->__9;
      _9__157_0 = (System_Func_int__Guid__o *)sub_1C715FC(System_Func_int__Guid__TypeInfo);
      System_Func_int__Guid____ctor(
        _9__157_0,
        v50,
        Method_BattleLogicFunction___c__FunctionSwapFieldPosition_b__157_0__,
        0);
      static_fields = BattleLogicFunction___c_TypeInfo->static_fields;
      static_fields->__9__157_0 = _9__157_0;
      sub_1C71354(
        (GrandQuestFolderBoardItem_o *)&static_fields->__9__157_0,
        (int32_t)_9__157_0,
        v52,
        v53,
        v54,
        v55,
        v56,
        v57);
    }
    v58 = (System_Collections_Generic_IEnumerable_TSource__o *)System_Linq_Enumerable__OrderBy_int__Guid_(
                                                                 (System_Collections_Generic_IEnumerable_TSource__o *)BackStepTargetArray,
                                                                 (System_Func_TSource__TKey__o *)_9__157_0,
                                                                 (const MethodInfo_317A720 *)Method_System_Linq_Enumerable_OrderBy_int__Guid___);
    IsNullOrEmpty = (__int64)System_Linq_Enumerable__ToArray_int_(
                               v58,
                               (const MethodInfo_318AE54 *)Method_System_Linq_Enumerable_ToArray_int___);
  }
  else
  {
    IsNullOrEmpty = (__int64)BattleLogicFunction__GetReplaceIndexArray(
                               (BattleLogicFunction_o *)IsNullOrEmpty,
                               BackStepTargetArray,
                               ReplacePositionTargetArray,
                               v32);
  }
  v59 = IsNullOrEmpty;
  if ( !IsNullOrEmpty || !v31 )
LABEL_107:
    sub_1C71608(IsNullOrEmpty, v14);
  if ( *(int *)(IsNullOrEmpty + 24) >= 1 )
  {
    v60 = 0;
    v61 = 0;
    while ( 1 )
    {
      if ( !System_Collections_Generic_List_object___get_Item(
              v31,
              v61,
              (const MethodInfo_3810448 *)Method_System_Collections_Generic_List_BattleServantData__get_Item__) )
        goto LABEL_63;
      IsNullOrEmpty = (__int64)System_Collections_Generic_List_object___get_Item(
                                 v31,
                                 v61,
                                 (const MethodInfo_3810448 *)Method_System_Collections_Generic_List_BattleServantData__get_Item__);
      if ( !IsNullOrEmpty )
        goto LABEL_107;
      if ( !BattleServantData__isAliveLogic((BattleServantData_o *)IsNullOrEmpty, 1, 0) )
LABEL_63:
        ++v60;
      IsNullOrEmpty = (__int64)System_Collections_Generic_List_object___get_Item(
                                 v31,
                                 v61,
                                 (const MethodInfo_3810448 *)Method_System_Collections_Generic_List_BattleServantData__get_Item__);
      if ( IsNullOrEmpty )
      {
        if ( v61 >= *(unsigned int *)(v59 + 24) )
          goto LABEL_108;
        if ( !entryIdArray )
          goto LABEL_107;
        v62 = *(_DWORD *)(v59 + 32 + 4 * v61);
        if ( v62 >= LODWORD(entryIdArray->max_length) )
          goto LABEL_108;
        v63 = (char *)entryIdArray + 4 * (int)v62;
        v65 = *((_DWORD *)v63 + 8);
        v64 = v63 + 32;
        if ( v65 == -1 )
        {
          IsNullOrEmpty = (__int64)System_Collections_Generic_List_object___get_Item(
                                     v31,
                                     v61,
                                     (const MethodInfo_3810448 *)Method_System_Collections_Generic_List_BattleServantData__get_Item__);
          if ( !IsNullOrEmpty )
            goto LABEL_107;
          *(_DWORD *)(IsNullOrEmpty + 20) = v62;
          IsNullOrEmpty = (__int64)System_Collections_Generic_List_object___get_Item(
                                     v31,
                                     v61,
                                     (const MethodInfo_3810448 *)Method_System_Collections_Generic_List_BattleServantData__get_Item__);
          if ( !IsNullOrEmpty )
            goto LABEL_107;
          if ( v62 >= LODWORD(entryIdArray->max_length) )
            goto LABEL_108;
          *v64 = *(_DWORD *)(IsNullOrEmpty + 24);
        }
      }
      if ( (__int64)++v61 >= *(int *)(v59 + 24) )
        goto LABEL_76;
    }
  }
  v60 = 0;
LABEL_76:
  if ( v60 == v31->fields._size && v83 )
    return 0;
  if ( v12->fields.isEnemy )
  {
    data = this->fields.data;
    if ( !data )
      goto LABEL_107;
    IsNullOrEmpty = BasicHelper__IsValidIndex_int_(
                      data->fields.e_entryid,
                      v81,
                      (const MethodInfo_3139720 *)Method_BasicHelper_IsValidIndex_int___);
    if ( (IsNullOrEmpty & 1) != 0 )
    {
      v68 = this->fields.data;
      if ( !v68 )
        goto LABEL_107;
      e_entryid = v68->fields.e_entryid;
      if ( !e_entryid )
        goto LABEL_107;
      if ( (unsigned int)v81 >= LODWORD(e_entryid->max_length) )
        goto LABEL_108;
      v68->fields.globaltargetId = e_entryid->m_Items[v81];
    }
  }
  IsNullOrEmpty = (__int64)this->fields.data;
  if ( !IsNullOrEmpty )
    goto LABEL_107;
  RestockServantLogicList = (System_Collections_IEnumerable_o *)BattleData__GetRestockServantLogicList(
                                                                  (BattleData_o *)IsNullOrEmpty,
                                                                  0);
  v71 = (System_Collections_Generic_IEnumerable_TSource__o *)System_Linq_Enumerable__OfType_object_(
                                                               RestockServantLogicList,
                                                               (const MethodInfo_317A3C4 *)Method_System_Linq_Enumerable_OfType_RestockServantLogicByMoveToSubMember___);
  v72 = (System_Func_object__bool__o *)sub_1C715FC(System_Func_RestockServantLogicByMoveToSubMember__bool__TypeInfo);
  System_Func_object__bool____ctor(
    v72,
    (Il2CppObject *)v12,
    Method_BattleLogicFunction___c__DisplayClass157_0__FunctionSwapFieldPosition_b__1__,
    0);
  v73 = System_Linq_Enumerable__Where_object_(
          v71,
          (System_Func_TSource__bool__o *)v72,
          (const MethodInfo_3192108 *)Method_System_Linq_Enumerable_Where_RestockServantLogicByMoveToSubMember___);
  v74 = System_Linq_Enumerable__ToArray_object_(
          v73,
          (const MethodInfo_318AFEC *)Method_System_Linq_Enumerable_ToArray_RestockServantLogicByMoveToSubMember___);
  IsNullOrEmpty = BasicHelper__IsNullOrEmpty((System_Collections_ICollection_o *)v74, 0);
  if ( (IsNullOrEmpty & 1) == 0 )
  {
    if ( v74 )
    {
      v75 = v74->max_length;
      if ( v75 >= 1 )
      {
        v76 = 0;
        while ( v76 < v75 )
        {
          v77 = (RestockServantLogic_o *)v74->m_Items[v76];
          if ( !v77 )
            goto LABEL_107;
          FieldMemberIndex_k__BackingField = v77->fields._FieldMemberIndex_k__BackingField;
          IsNullOrEmpty = System_Linq_Enumerable__Contains_int_(
                            (System_Collections_Generic_IEnumerable_TSource__o *)BackStepTargetArray,
                            FieldMemberIndex_k__BackingField,
                            (const MethodInfo_3168198 *)Method_System_Linq_Enumerable_Contains_int___);
          if ( (IsNullOrEmpty & 1) != 0 )
          {
            if ( (unsigned int)FieldMemberIndex_k__BackingField >= *(_DWORD *)(v59 + 24) )
              goto LABEL_108;
            RestockServantLogic__OverwriteFieldMemberIndex(
              v77,
              *(_DWORD *)(v59 + 4LL * FieldMemberIndex_k__BackingField + 32),
              0);
          }
          v75 = v74->max_length;
          if ( (int)++v76 >= v75 )
            goto LABEL_98;
        }
        goto LABEL_108;
      }
      goto LABEL_98;
    }
    goto LABEL_107;
  }
LABEL_98:
  v17 = (BattleActionData_o *)sub_1C715FC(BattleActionData_TypeInfo);
  BattleActionData___ctor(v17, 0);
  if ( SLODWORD(BackStepTargetArray->max_length) >= 1 )
  {
    v79 = 0;
    while ( 1 )
    {
      IsNullOrEmpty = (__int64)System_Collections_Generic_List_object___get_Item(
                                 v31,
                                 v79,
                                 (const MethodInfo_3810448 *)Method_System_Collections_Generic_List_BattleServantData__get_Item__);
      v80 = IsNullOrEmpty ? *(_DWORD *)(IsNullOrEmpty + 24) : -1;
      if ( v79 >= LODWORD(BackStepTargetArray->max_length) )
        goto LABEL_108;
      if ( !v17 )
        goto LABEL_107;
      BattleActionData__setReplaceMember(v17, BackStepTargetArray->m_Items[v79++], v80, v80, v82, 0);
      if ( (__int64)v79 >= SLODWORD(BackStepTargetArray->max_length) )
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
  if ( (byte_4CCA534 & 1) == 0 )
  {
    sub_1C713B0(&Generator_BGFromFieldChangeBGBuff_TypeInfo);
    this = (BattleLogicFunction_o *)sub_1C713B0(&Generator_BGMFromFieldChangeBGBuff_TypeInfo);
    byte_4CCA534 = 1;
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
    sub_1C71608(this, args);
  }
  if ( !logic )
    goto LABEL_17;
  if ( logic->fields.bgId >= 1 )
  {
    v17 = (Generator_BGFromFieldChangeBGBuff_o *)sub_1C715FC(Generator_BGFromFieldChangeBGBuff_TypeInfo);
    Generator_BGFromFieldChangeBGBuff___ctor(v17, logic, 0);
    BattleLogicFunction__FunctionQuickChangeBG(v10, args, (Generator_Background_o *)v17, v18);
  }
  if ( logic->fields.bgmId >= 1 )
  {
    v19 = v10->fields.data;
    v20 = (Generator_BGMFromFieldChangeBGBuff_o *)sub_1C715FC(Generator_BGMFromFieldChangeBGBuff_TypeInfo);
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
    sub_1C71608(this, baseVals);
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
    sub_1C71608(this, baseVals);
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

  if ( (byte_4CCA505 & 1) == 0 )
  {
    this = (BattleLogicFunction_o *)sub_1C713B0(&System_Math_TypeInfo);
    byte_4CCA505 = 1;
  }
  if ( !dataVals )
    goto LABEL_10;
  this = (BattleLogicFunction_o *)DataVals__isParam(dataVals, 116, 0);
  if ( ((unsigned __int8)this & 1) == 0 )
    return healPoint;
  if ( !targetSvtData )
LABEL_10:
    sub_1C71608(this, dataVals);
  MaxHp = BattleServantData__getMaxHp(targetSvtData, 0);
  v9 = ((__int64 (__fastcall *)(BattleServantData_o *, const MethodInfo *))targetSvtData->klass->vtable._13_get_resultHp.methodPtr)(
         targetSvtData,
         targetSvtData->klass->vtable._13_get_resultHp.method);
  if ( !System_Math_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(System_Math_TypeInfo);
  return System_Math__Min_65553872(healPoint, MaxHp - v9, 0);
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
    sub_1C71608(this, baseVals);
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
    sub_1C71608(this, dataVals);
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

  if ( (byte_4CCA4E7 & 1) == 0 )
  {
    sub_1C713B0(&Method_DataManager_GetMaster_BuffMaster___);
    sub_1C713B0(&DataManager_TypeInfo);
    sub_1C713B0(&Method_DataMasterBase_BuffMaster__BuffEntity__int__GetEntity__);
    byte_4CCA4E7 = 1;
  }
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_object = DataManager__GetMaster_object_((const MethodInfo_314B0B8 *)Method_DataManager_GetMaster_BuffMaster___);
  if ( !funcEnt )
    goto LABEL_10;
  vals = funcEnt->fields.vals;
  if ( !vals )
    goto LABEL_10;
  if ( !LODWORD(vals->max_length) )
    sub_1C71610(Master_object);
  if ( !Master_object )
LABEL_10:
    sub_1C71608(Master_object, v5);
  return (BuffEntity_o *)DataMasterBase_object__object__int___GetEntity(
                           (DataMasterBase_TMaster__TEntity__PKType__o *)Master_object,
                           vals->m_Items[0],
                           (const MethodInfo_3408E80 *)Method_DataMasterBase_BuffMaster__BuffEntity__int__GetEntity__);
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

  if ( (byte_4CCA52B & 1) == 0 )
  {
    sub_1C713B0(&Method_DataManager_GetMasterData_ServantMaster___);
    sub_1C713B0(&Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
    sub_1C713B0(&Method_System_Linq_Enumerable_Repeat_int___);
    sub_1C713B0(&Method_System_Linq_Enumerable_ToArray_int___);
    sub_1C713B0(&Method_System_Collections_Generic_List_int__AddRange__);
    sub_1C713B0(&Method_System_Collections_Generic_List_int__Add__);
    sub_1C713B0(&Method_System_Collections_Generic_List_int__Contains__);
    sub_1C713B0(&Method_System_Collections_Generic_List_int__ToArray__);
    sub_1C713B0(&Method_System_Collections_Generic_List_int___ctor__);
    sub_1C713B0(&Method_System_Collections_Generic_List_int__get_Count__);
    sub_1C713B0(&Method_System_Collections_Generic_List_int__get_Item__);
    sub_1C713B0(&System_Collections_Generic_List_int__TypeInfo);
    sub_1C713B0(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    sub_1C713B0(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_4CCA52B = 1;
  }
  v6 = (System_Collections_Generic_List_int__o *)sub_1C715FC(System_Collections_Generic_List_int__TypeInfo);
  System_Collections_Generic_List_int____ctor(
    v6,
    (const MethodInfo_37F2EA0 *)Method_System_Collections_Generic_List_int___ctor__);
  if ( !baseVals )
    goto LABEL_55;
  CardIndex = DataVals__GetCardIndex(baseVals, 0);
  CardIndividuality = DataVals__GetCardIndividuality(baseVals, 0);
  if ( (CardIndividuality & 0x80000000) == 0 )
  {
    IdArrayFromIndividuality = CardMaster__getIdArrayFromIndividuality(CardIndividuality, 0);
    CardIndividuality = (unsigned __int64)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3A5F158 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !CardIndividuality )
      goto LABEL_55;
    CardIndividuality = (unsigned __int64)DataManager__GetMasterData_object_(
                                            (DataManager_o *)CardIndividuality,
                                            (const MethodInfo_314B10C *)Method_DataManager_GetMasterData_ServantMaster___);
    if ( !targetServant )
      goto LABEL_55;
    v11 = (DataMasterBase_TMaster__TEntity__PKType__o *)CardIndividuality;
    v13 = *(_QWORD *)&targetServant->fields.svtId.fields.currentCryptoKey;
    v12 = *(_QWORD *)&targetServant->fields.svtId.fields.fakeValue;
    if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    *(_QWORD *)&v32.fields.currentCryptoKey = v13;
    *(_QWORD *)&v32.fields.fakeValue = v12;
    CardIndividuality = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_49297952(v32, 0);
    if ( !v11 )
      goto LABEL_55;
    CardIndividuality = (unsigned __int64)DataMasterBase_object__object__int___GetEntity(
                                            v11,
                                            CardIndividuality,
                                            (const MethodInfo_3408E80 *)Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
    if ( !CardIndividuality )
      goto LABEL_55;
    v14 = *(_QWORD *)(CardIndividuality + 144);
    v15 = (System_Collections_Generic_List_int__o *)sub_1C715FC(System_Collections_Generic_List_int__TypeInfo);
    System_Collections_Generic_List_int____ctor(
      v15,
      (const MethodInfo_37F2EA0 *)Method_System_Collections_Generic_List_int___ctor__);
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
                                                                   (const MethodInfo_317B4B4 *)Method_System_Linq_Enumerable_Repeat_int___);
      CardIndividuality = (unsigned __int64)System_Linq_Enumerable__ToArray_int_(
                                              v16,
                                              (const MethodInfo_318AE54 *)Method_System_Linq_Enumerable_ToArray_int___);
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
                                (const MethodInfo_37F3A6C *)Method_System_Collections_Generic_List_int__Contains__);
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
                *(const MethodInfo_37F36F4 **)(*(_QWORD *)(v23[4] + 192LL) + 112LL));
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
      sub_1C71610(CardIndividuality);
    }
LABEL_32:
    if ( !v15 )
LABEL_55:
      sub_1C71608(CardIndividuality, v8);
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
            (const MethodInfo_37F3900 *)Method_System_Collections_Generic_List_int__AddRange__);
          return System_Collections_Generic_List_int___ToArray(
                   v6,
                   (const MethodInfo_37F51AC *)Method_System_Collections_Generic_List_int__ToArray__);
        }
        goto LABEL_55;
      }
      Next = BattleRandom__getNext(CardIndividuality, 0);
      CardIndividuality = System_Collections_Generic_List_int___get_Item(
                            v15,
                            Next,
                            (const MethodInfo_37F3404 *)Method_System_Collections_Generic_List_int__get_Item__);
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
               (const MethodInfo_37F51AC *)Method_System_Collections_Generic_List_int__ToArray__);
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
      *(const MethodInfo_37F36F4 **)(*(_QWORD *)(v27[4] + 192LL) + 112LL));
  }
  else
  {
    v6->fields._size = v28 + 1;
    v26->m_Items[v28] = v30;
  }
  return System_Collections_Generic_List_int___ToArray(
           v6,
           (const MethodInfo_37F51AC *)Method_System_Collections_Generic_List_int__ToArray__);
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

  if ( (byte_4CCA4F5 & 1) == 0 )
  {
    sub_1C713B0(&Method_System_Array_Empty_BattleLogicFunctionProcess_FunctionTargetCheck___);
    sub_1C713B0(&BattleLogicFunctionProcess_DependFunctionUnitCheck_TypeInfo);
    byte_4CCA4F5 = 1;
  }
  v9 = (BattleLogicFunctionProcess_DependFunctionUnitCheck_o *)sub_1C715FC(BattleLogicFunctionProcess_DependFunctionUnitCheck_TypeInfo);
  BattleLogicFunctionProcess_DependFunctionUnitCheck___ctor(v9, this, args, dataVal, 0);
  if ( !v9 )
    sub_1C71608(v10, v11);
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
      sub_1C474A0(Method_System_Array_Empty_BattleLogicFunctionProcess_FunctionTargetCheck___);
      v15 = v14[7];
    }
    v16 = *(_QWORD *)(v15 + 16);
    if ( (*(_BYTE *)(v16 + 309) & 1) == 0 )
      v16 = sub_1C47444(inited);
    if ( !*(_DWORD *)(v16 + 224) )
      inited = j_il2cpp_runtime_class_init_0(v16);
    v17 = *(_QWORD *)(v14[7] + 16LL);
    if ( (*(_BYTE *)(v17 + 309) & 1) == 0 )
      v17 = sub_1C47444(inited);
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
      sub_1C71608(this, targetSvtData);
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
  GrandQuestFolderBoardItem_o *static_fields; // x0
  int32_t v12; // w2
  int32_t v13; // w3
  System_String_o *v14; // x4
  int32_t v15; // w5
  int64_t v16; // x6
  System_String_o *v17; // x7
  System_Collections_Generic_IEnumerable_TSource__o *v18; // x0
  System_Collections_Generic_IEnumerable_TSource__o *v19; // x0
  __int64 v20; // x1
  int32_t v21; // w2
  int32_t v22; // w3
  System_String_o *v23; // x4
  int32_t v24; // w5
  int64_t v25; // x6
  System_String_o *v26; // x7
  System_Func_int__bool__o *v27; // x23
  System_Collections_Generic_IEnumerable_TSource__o *v28; // x0
  BattleLogicFunction___c_c *v29; // x8
  System_Collections_Generic_IEnumerable_TSource__o *v30; // x21
  System_Func_int__Guid__o *_9__158_2; // x22
  Il2CppObject *v32; // x23
  struct BattleLogicFunction___c_StaticFields *v33; // x0
  int32_t v34; // w2
  int32_t v35; // w3
  System_String_o *v36; // x4
  int32_t v37; // w5
  int64_t v38; // x6
  System_String_o *v39; // x7
  System_Collections_Generic_IEnumerable_TSource__o *v40; // x0
  il2cpp_array_size_t max_length; // x8
  System_Collections_Generic_IEnumerable_TSource__o *v42; // x21
  unsigned __int64 v43; // x22
  struct System_Int32_array *v44; // x8
  _QWORD *v45; // x9
  __int64 v46; // x10
  struct System_Int32_array *items; // x8
  _QWORD *v48; // x9
  __int64 size; // x10

  if ( (byte_4CCA53D & 1) == 0 )
  {
    sub_1C713B0(&Method_System_Linq_Enumerable_Contains_int___);
    sub_1C713B0(&Method_System_Linq_Enumerable_First_int___);
    sub_1C713B0(&Method_System_Linq_Enumerable_OrderBy_int__Guid___);
    sub_1C713B0(&Method_System_Linq_Enumerable_ToArray_int___);
    sub_1C713B0(&Method_System_Linq_Enumerable_ToList_int___);
    sub_1C713B0(&Method_System_Linq_Enumerable_Where_int___);
    sub_1C713B0(&System_Func_int__Guid__TypeInfo);
    sub_1C713B0(&System_Func_int__bool__TypeInfo);
    sub_1C713B0(&Method_System_Collections_Generic_List_int__Add__);
    sub_1C713B0(&Method_System_Collections_Generic_List_int__RemoveAt__);
    sub_1C713B0(&Method_System_Collections_Generic_List_int__ToArray__);
    sub_1C713B0(&Method_System_Collections_Generic_List_int___ctor__);
    sub_1C713B0(&System_Collections_Generic_List_int__TypeInfo);
    sub_1C713B0(&Method_BattleLogicFunction___c__GetReplaceIndexArray_b__158_0__);
    sub_1C713B0(&Method_BattleLogicFunction___c__GetReplaceIndexArray_b__158_2__);
    sub_1C713B0(&Method_BattleLogicFunction___c__DisplayClass158_0__GetReplaceIndexArray_b__1__);
    sub_1C713B0(&BattleLogicFunction___c__DisplayClass158_0_TypeInfo);
    sub_1C713B0(&BattleLogicFunction___c_TypeInfo);
    byte_4CCA53D = 1;
  }
  v6 = sub_1C715FC(BattleLogicFunction___c__DisplayClass158_0_TypeInfo);
  BattleLogicFunction___c__DisplayClass158_0___ctor((BattleLogicFunction___c__DisplayClass158_0_o *)v6, 0);
  if ( !System_Linq_Enumerable__Contains_int_(
          (System_Collections_Generic_IEnumerable_TSource__o *)replaceTargetArray,
          -1,
          (const MethodInfo_3168198 *)Method_System_Linq_Enumerable_Contains_int___) )
    return replaceTargetArray;
  v7 = (System_Collections_Generic_List_int__o *)sub_1C715FC(System_Collections_Generic_List_int__TypeInfo);
  System_Collections_Generic_List_int____ctor(
    v7,
    (const MethodInfo_37F2EA0 *)Method_System_Collections_Generic_List_int___ctor__);
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
    _9__158_0 = (System_Func_int__bool__o *)sub_1C715FC(System_Func_int__bool__TypeInfo);
    System_Func_int__bool____ctor(_9__158_0, v10, Method_BattleLogicFunction___c__GetReplaceIndexArray_b__158_0__, 0);
    static_fields = (GrandQuestFolderBoardItem_o *)BattleLogicFunction___c_TypeInfo->static_fields;
    static_fields[1].klass = (GrandQuestFolderBoardItem_c *)_9__158_0;
    sub_1C71354(static_fields + 1, (int32_t)_9__158_0, v12, v13, v14, v15, v16, v17);
  }
  v18 = System_Linq_Enumerable__Where_int_(
          (System_Collections_Generic_IEnumerable_TSource__o *)replaceTargetArray,
          (System_Func_TSource__bool__o *)_9__158_0,
          (const MethodInfo_3191B60 *)Method_System_Linq_Enumerable_Where_int___);
  v19 = (System_Collections_Generic_IEnumerable_TSource__o *)System_Linq_Enumerable__ToArray_int_(
                                                               v18,
                                                               (const MethodInfo_318AE54 *)Method_System_Linq_Enumerable_ToArray_int___);
  if ( !v6 )
    goto LABEL_38;
  *(_QWORD *)(v6 + 16) = v19;
  sub_1C71354((GrandQuestFolderBoardItem_o *)(v6 + 16), (int32_t)v19, v21, v22, v23, v24, v25, v26);
  v27 = (System_Func_int__bool__o *)sub_1C715FC(System_Func_int__bool__TypeInfo);
  System_Func_int__bool____ctor(
    v27,
    (Il2CppObject *)v6,
    Method_BattleLogicFunction___c__DisplayClass158_0__GetReplaceIndexArray_b__1__,
    0);
  v28 = System_Linq_Enumerable__Where_int_(
          (System_Collections_Generic_IEnumerable_TSource__o *)backStepTargetArray,
          (System_Func_TSource__bool__o *)v27,
          (const MethodInfo_3191B60 *)Method_System_Linq_Enumerable_Where_int___);
  v29 = BattleLogicFunction___c_TypeInfo;
  v30 = v28;
  if ( !BattleLogicFunction___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BattleLogicFunction___c_TypeInfo);
    v29 = BattleLogicFunction___c_TypeInfo;
  }
  _9__158_2 = v29->static_fields->__9__158_2;
  if ( !_9__158_2 )
  {
    if ( !v29->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v29);
      v29 = BattleLogicFunction___c_TypeInfo;
    }
    v32 = (Il2CppObject *)v29->static_fields->__9;
    _9__158_2 = (System_Func_int__Guid__o *)sub_1C715FC(System_Func_int__Guid__TypeInfo);
    System_Func_int__Guid____ctor(_9__158_2, v32, Method_BattleLogicFunction___c__GetReplaceIndexArray_b__158_2__, 0);
    v33 = BattleLogicFunction___c_TypeInfo->static_fields;
    v33->__9__158_2 = _9__158_2;
    sub_1C71354((GrandQuestFolderBoardItem_o *)&v33->__9__158_2, (int32_t)_9__158_2, v34, v35, v36, v37, v38, v39);
  }
  v40 = (System_Collections_Generic_IEnumerable_TSource__o *)System_Linq_Enumerable__OrderBy_int__Guid_(
                                                               v30,
                                                               (System_Func_TSource__TKey__o *)_9__158_2,
                                                               (const MethodInfo_317A720 *)Method_System_Linq_Enumerable_OrderBy_int__Guid___);
  v19 = (System_Collections_Generic_IEnumerable_TSource__o *)System_Linq_Enumerable__ToList_int_(
                                                               v40,
                                                               (const MethodInfo_318FA1C *)Method_System_Linq_Enumerable_ToList_int___);
  if ( !replaceTargetArray )
    goto LABEL_38;
  max_length = replaceTargetArray->max_length;
  if ( (int)max_length >= 1 )
  {
    v42 = v19;
    v43 = 0;
    do
    {
      if ( v43 >= (unsigned int)max_length )
        sub_1C71610(v19);
      v20 = (unsigned int)replaceTargetArray->m_Items[v43];
      if ( (v20 & 0x80000000) != 0 )
      {
        v19 = (System_Collections_Generic_IEnumerable_TSource__o *)System_Linq_Enumerable__First_int_(
                                                                     v42,
                                                                     (const MethodInfo_3171670 *)Method_System_Linq_Enumerable_First_int___);
        if ( !v7 )
          goto LABEL_38;
        items = v7->fields._items;
        v48 = Method_System_Collections_Generic_List_int__Add__;
        ++v7->fields._version;
        if ( !items )
          goto LABEL_38;
        size = v7->fields._size;
        v20 = (unsigned int)v19;
        if ( (unsigned int)size >= LODWORD(items->max_length) )
        {
          System_Collections_Generic_List_int___AddWithResize(
            v7,
            (int32_t)v19,
            *(const MethodInfo_37F36F4 **)(*(_QWORD *)(v48[4] + 192LL) + 112LL));
        }
        else
        {
          v7->fields._size = size + 1;
          items->m_Items[size] = (int)v19;
        }
        if ( !v42 )
          goto LABEL_38;
        System_Collections_Generic_List_int___RemoveAt(
          (System_Collections_Generic_List_int__o *)v42,
          0,
          (const MethodInfo_37F4E74 *)Method_System_Collections_Generic_List_int__RemoveAt__);
      }
      else
      {
        if ( !v7 )
          goto LABEL_38;
        v44 = v7->fields._items;
        v45 = Method_System_Collections_Generic_List_int__Add__;
        ++v7->fields._version;
        if ( !v44 )
          goto LABEL_38;
        v46 = v7->fields._size;
        if ( (unsigned int)v46 >= LODWORD(v44->max_length) )
        {
          System_Collections_Generic_List_int___AddWithResize(
            v7,
            v20,
            *(const MethodInfo_37F36F4 **)(*(_QWORD *)(v45[4] + 192LL) + 112LL));
        }
        else
        {
          v7->fields._size = v46 + 1;
          v44->m_Items[v46] = v20;
        }
      }
      LODWORD(max_length) = replaceTargetArray->max_length;
    }
    while ( (__int64)++v43 < (int)max_length );
  }
  if ( !v7 )
LABEL_38:
    sub_1C71608(v19, v20);
  return System_Collections_Generic_List_int___ToArray(
           v7,
           (const MethodInfo_37F51AC *)Method_System_Collections_Generic_List_int__ToArray__);
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
  int32_t v9; // w3
  System_String_o *v10; // x4
  int32_t v11; // w5
  int64_t v12; // x6
  System_String_o *v13; // x7
  int32_t v14; // w1
  int32_t v15; // w2
  int32_t v16; // w3
  System_String_o *v17; // x4
  int32_t v18; // w5
  int64_t v19; // x6
  System_String_o *v20; // x7

  if ( (byte_4CCA514 & 1) == 0 )
  {
    sub_1C713B0(&BattleActionData_BuffData_TypeInfo);
    sub_1C713B0(&StringLiteral_1/*""*/);
    byte_4CCA514 = 1;
  }
  v5 = sub_1C715FC(BattleActionData_BuffData_TypeInfo);
  BattleActionData_BuffData___ctor((BattleActionData_BuffData_o *)v5, 0);
  if ( !v5 )
    sub_1C71608(v6, v7);
  *(_DWORD *)(v5 + 44) = uniqueId;
  *(_DWORD *)(v5 + 16) = 0;
  v14 = StringLiteral_1/*""*/;
  *(_QWORD *)(v5 + 56) = StringLiteral_1/*""*/;
  sub_1C71354((GrandQuestFolderBoardItem_o *)(v5 + 56), v14, v8, v9, v10, v11, v12, v13);
  *(_QWORD *)(v5 + 64) = 0x100000000LL;
  *(_QWORD *)(v5 + 72) = effectIds;
  sub_1C71354((GrandQuestFolderBoardItem_o *)(v5 + 72), (int32_t)effectIds, v15, v16, v17, v18, v19, v20);
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

  if ( (byte_4CCA52D & 1) == 0 )
  {
    sub_1C713B0(&System_IDisposable_TypeInfo);
    sub_1C713B0(&System_Collections_Generic_IEnumerable_BattleLogicFunctionProcess_FunctionTargetCheck__TypeInfo);
    sub_1C713B0(&System_Collections_Generic_IEnumerator_BattleLogicFunctionProcess_FunctionTargetCheck__TypeInfo);
    sub_1C713B0(&System_Collections_IEnumerator_TypeInfo);
    sub_1C713B0(&Method_System_Collections_Generic_List_FuncList_TYPE__Add__);
    sub_1C713B0(&Method_System_Collections_Generic_List_FuncList_TYPE___ctor__);
    sub_1C713B0(&System_Collections_Generic_List_FuncList_TYPE__TypeInfo);
    sub_1C713B0(&RemovedBuffInfoGroup_TypeInfo);
    byte_4CCA52D = 1;
  }
  subBuffInfo = 0;
  v9 = (System_Collections_Generic_List_T__o *)sub_1C715FC(System_Collections_Generic_List_FuncList_TYPE__TypeInfo);
  System_Collections_Generic_List_Int32Enum____ctor(
    v9,
    (const MethodInfo_37F56CC *)Method_System_Collections_Generic_List_FuncList_TYPE___ctor__);
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
      *(const MethodInfo_37F5F20 **)(*(_QWORD *)(v13[4] + 192LL) + 112LL));
  }
  else
  {
    v9->fields._size = size + 1;
    *((_DWORD *)items->m_Items + size) = 2;
  }
  v15 = (RemovedBuffInfoGroup_o *)sub_1C715FC(RemovedBuffInfoGroup_TypeInfo);
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
        sub_1C71610(DependDataValsArray);
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
        v24 = sub_1C47738(
                DependDataValsArray,
                System_Collections_Generic_IEnumerable_BattleLogicFunctionProcess_FunctionTargetCheck__TypeInfo,
                0);
      }
      v26 = (*(__int64 (__fastcall **)(_QWORD *, _QWORD))v24)(v21, *(_QWORD *)(v24 + 8));
      if ( !v26 )
        sub_1C71608(0, v25);
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
          v30 = sub_1C47738(v26, System_Collections_IEnumerator_TypeInfo, 0);
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
          v34 = sub_1C47738(
                  v26,
                  System_Collections_Generic_IEnumerator_BattleLogicFunctionProcess_FunctionTargetCheck__TypeInfo,
                  0);
        }
        v35 = (*(__int64 (__fastcall **)(__int64, _QWORD))v34)(v26, *(_QWORD *)(v34 + 8));
        v37 = v35;
        if ( !v35 )
          sub_1C71608(0, v36);
        v38 = (*(__int64 (__fastcall **)(__int64, BattleActionData_o *, _QWORD))(*(_QWORD *)v35 + 408LL))(
                v35,
                mainAction,
                *(_QWORD *)(*(_QWORD *)v35 + 416LL));
        if ( (v38 & 1) != 0 )
        {
          if ( !v19 )
            sub_1C71608(v38, v39);
          if ( !procArg )
            sub_1C71608(v38, v39);
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
            sub_1C71608(v44, v44);
          BattleActionData__addAction(mainAction, v44, 0);
          if ( !v15 )
            sub_1C71608(v45, v46);
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
        v50 = sub_1C47738(v26, System_IDisposable_TypeInfo, 0);
      }
      (*(void (__fastcall **)(__int64, _QWORD))v50)(v26, *(_QWORD *)(v50 + 8));
      DependDataValsArray = v53;
      LODWORD(v17) = *((_DWORD *)v53 + 6);
      v18 = v54 + 1;
      if ( (__int64)(v54 + 1) >= (int)v17 )
        return v15;
    }
LABEL_56:
    sub_1C71608(DependDataValsArray, v11);
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
  GrandQuestFolderBoardItem_o *p_substituteActBuffDict; // x22
  System_Collections_Generic_Dictionary_object__object__o *v13; // x23
  int32_t v14; // w2
  int32_t v15; // w3
  System_String_o *v16; // x4
  int32_t v17; // w5
  int64_t v18; // x6
  System_String_o *v19; // x7

  if ( (byte_4CCA4FF & 1) == 0 )
  {
    sub_1C713B0(&BattleActionData_TypeInfo);
    sub_1C713B0(&Method_System_Collections_Generic_Dictionary_BattleBuffData_BuffData__BattleActionData_BuffData___ctor__);
    sub_1C713B0(&Method_System_Collections_Generic_Dictionary_BattleBuffData_BuffData__BattleActionData_BuffData__set_Item__);
    sub_1C713B0(&System_Collections_Generic_Dictionary_BattleBuffData_BuffData__BattleActionData_BuffData__TypeInfo);
    byte_4CCA4FF = 1;
  }
  v6 = (BattleActionData_o *)sub_1C715FC(BattleActionData_TypeInfo);
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
    p_substituteActBuffDict = (GrandQuestFolderBoardItem_o *)&mainAction->fields.substituteActBuffDict;
    v13 = (System_Collections_Generic_Dictionary_object__object__o *)sub_1C715FC(System_Collections_Generic_Dictionary_BattleBuffData_BuffData__BattleActionData_BuffData__TypeInfo);
    System_Collections_Generic_Dictionary_object__object____ctor(
      v13,
      (const MethodInfo_34CAD30 *)Method_System_Collections_Generic_Dictionary_BattleBuffData_BuffData__BattleActionData_BuffData___ctor__);
    p_substituteActBuffDict->klass = (GrandQuestFolderBoardItem_c *)v13;
    sub_1C71354(p_substituteActBuffDict, (int32_t)v13, v14, v15, v16, v17, v18, v19);
    CustomActionBuffData = (System_Collections_Generic_Dictionary_object__object__o *)p_substituteActBuffDict->klass;
  }
  if ( !funcTarget
    || !CustomActionBuffData
    || (System_Collections_Generic_Dictionary_object__object___set_Item(
          CustomActionBuffData,
          (Il2CppObject *)funcTarget->fields.SubstituteBuff,
          v11,
          (const MethodInfo_34CB6CC *)Method_System_Collections_Generic_Dictionary_BattleBuffData_BuffData__BattleActionData_BuffData__set_Item__),
        CustomActionBuffData = (System_Collections_Generic_Dictionary_object__object__o *)BattleLogicFunctionProcess_FunctionTargetCheck__get_ParentActBuffData(
                                                                                            funcTarget,
                                                                                            0),
        !v6) )
  {
LABEL_10:
    sub_1C71608(CustomActionBuffData, v10);
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
  if ( (byte_4CCA4F4 & 1) == 0 )
  {
    this = (BattleLogicFunction_o *)sub_1C713B0(&UnityEngine_Object_TypeInfo);
    byte_4CCA4F4 = 1;
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
      sub_1C71608(this, buffData);
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
    sub_1C71608(this, funcType);
  return DataVals__IsActAttackFunction(baseVal, 0);
}


bool BattleLogicFunction__IsExistBattleMissionValueInMasterData(FunctionEntity_o *funcEnt, const MethodInfo *method)
{
  struct System_Int32_array *vals; // x8

  if ( !funcEnt || (vals = funcEnt->fields.vals) == 0 )
    sub_1C71608(funcEnt, method);
  return vals->max_length != 0 && (vals->max_length & 1) == 0;
}


bool BattleLogicFunction__IsExistBattleValueInMasterData(FunctionEntity_o *funcEnt, const MethodInfo *method)
{
  struct System_Int32_array *vals; // x8

  if ( !funcEnt || (vals = funcEnt->fields.vals) == 0 )
    sub_1C71608(funcEnt, method);
  return vals->max_length != 0 && (vals->max_length & 1) == 0;
}


bool BattleLogicFunction__IsIgnoreResistFunc(
        BattleLogicFunction_o *this,
        System_Int32_array *funcIndividuality,
        const MethodInfo *method)
{
  System_Int32_array *IgnoreResistFuncIndividuality; // x20

  if ( (byte_4CCA4EB & 1) == 0 )
  {
    sub_1C713B0(&Individuality_TypeInfo);
    byte_4CCA4EB = 1;
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
    sub_1C71608(data, *(_QWORD *)&targetId);
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
  int32_t v5; // w5
  int64_t v6; // x6
  System_String_o *v7; // x7
  UnityEngine_Object_o *logic; // x22
  __int64 v13; // x1
  BattleLogic_o *v15; // x0
  const MethodInfo *v16; // x2
  char v17; // w0
  BattleLogicFunction___c__DisplayClass69_0_o v19; // [xsp+8h] [xbp-38h] BYREF

  if ( (byte_4CCA4F8 & 1) == 0 )
  {
    sub_1C713B0(&UnityEngine_Object_TypeInfo);
    byte_4CCA4F8 = 1;
  }
  v19.fields.dataVals = dataVals;
  sub_1C71354(
    (GrandQuestFolderBoardItem_o *)&v19,
    (int32_t)dataVals,
    (int32_t)dataVals,
    (int32_t)isEnemyTurn,
    (System_String_o *)method,
    v5,
    v6,
    v7);
  *isEnemyTurn = 0;
  logic = (UnityEngine_Object_o *)this->fields.logic;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Equality(logic, 0, 0) )
    return 0;
  if ( actionServant )
    LOBYTE(actionServant) = actionServant->fields.isEnemy;
  v15 = this->fields.logic;
  if ( !v15 )
    goto LABEL_17;
  if ( BattleLogic__IsPlayerTurnAfterBuffTurnProgress(v15, 0) )
  {
    v17 = (unsigned __int8)actionServant ^ 1;
    return BattleLogicFunction___IsSituationForceTurnProgressExecutable_g__IsForceTurnProgress_69_0(v17, &v19, v16);
  }
  v15 = this->fields.logic;
  if ( !v15 )
LABEL_17:
    sub_1C71608(v15, v13);
  if ( BattleLogic__IsEnemyTurnAfterBuffTurnProgress(v15, 0) )
  {
    v17 = (char)actionServant;
    *isEnemyTurn = 1;
    return BattleLogicFunction___IsSituationForceTurnProgressExecutable_g__IsForceTurnProgress_69_0(v17, &v19, v16);
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

  if ( (byte_4CCA4F7 & 1) == 0 )
  {
    sub_1C713B0(&Method_DataManager_GetMaster_ConstantStrMaster___);
    sub_1C713B0(&DataManager_TypeInfo);
    sub_1C713B0(&StringLiteral_5814/*"EXTEND_TURN_BUFF_TYPE"*/);
    byte_4CCA4F7 = 1;
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
  data = (BattleData_o *)DataManager__GetMaster_object_((const MethodInfo_314B0B8 *)Method_DataManager_GetMaster_ConstantStrMaster___);
  if ( !buffEnt || !data )
    goto LABEL_27;
  data = (BattleData_o *)ConstantStrMaster__ExistValueArray(
                           (ConstantStrMaster_o *)data,
                           (System_String_o *)StringLiteral_5814/*"EXTEND_TURN_BUFF_TYPE"*/,
                           buffEnt->fields.type,
                           0);
  if ( ((unsigned __int8)data & 1) == 0 )
    goto LABEL_25;
  v12 = this->fields.data;
  if ( !v12 )
LABEL_27:
    sub_1C71608(data, *(_QWORD *)&targetId);
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
  int32_t v11; // w3
  System_String_o *v12; // x4
  int32_t v13; // w5
  int64_t v14; // x6
  System_String_o *v15; // x7
  System_Collections_Generic_IEnumerable_T__o *v16; // x1
  System_Int32_array *ValueArray; // x0

  if ( (byte_4CCA4E9 & 1) == 0 )
  {
    sub_1C713B0(&Method_DataManager_GetMasterData_ConstantStrMaster___);
    sub_1C713B0(&Method_System_Collections_Generic_List_int__AddRange__);
    sub_1C713B0(&Method_System_Collections_Generic_List_int__Contains__);
    sub_1C713B0(&Method_System_Collections_Generic_List_int___ctor__);
    sub_1C713B0(&System_Collections_Generic_List_int__TypeInfo);
    sub_1C713B0(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_4CCA4E9 = 1;
  }
  Instance = (DataManager_o *)*typeList;
  if ( !*typeList )
  {
    v9 = (System_Collections_Generic_List_int__o *)sub_1C715FC(System_Collections_Generic_List_int__TypeInfo);
    System_Collections_Generic_List_int____ctor(
      v9,
      (const MethodInfo_37F2EA0 *)Method_System_Collections_Generic_List_int___ctor__);
    *typeList = v9;
    sub_1C71354((GrandQuestFolderBoardItem_o *)typeList, (int32_t)v9, v10, v11, v12, v13, v14, v15);
    Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3A5F158 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( Instance )
    {
      Instance = (DataManager_o *)DataManager__GetMasterData_object_(
                                    Instance,
                                    (const MethodInfo_314B10C *)Method_DataManager_GetMasterData_ConstantStrMaster___);
      if ( Instance )
      {
        ValueArray = ConstantStrMaster__GetValueArray((ConstantStrMaster_o *)Instance, keyName, 0, 0);
        if ( ValueArray )
        {
          v16 = (System_Collections_Generic_IEnumerable_T__o *)ValueArray;
          Instance = (DataManager_o *)*typeList;
          if ( !*typeList )
            goto LABEL_11;
          System_Collections_Generic_List_int___AddRange(
            (System_Collections_Generic_List_int__o *)Instance,
            v16,
            (const MethodInfo_37F3900 *)Method_System_Collections_Generic_List_int__AddRange__);
        }
        Instance = (DataManager_o *)*typeList;
        if ( *typeList )
          return System_Collections_Generic_List_int___Contains(
                   (System_Collections_Generic_List_int__o *)Instance,
                   buffType,
                   (const MethodInfo_37F3A6C *)Method_System_Collections_Generic_List_int__Contains__);
      }
    }
LABEL_11:
    sub_1C71608(Instance, v16);
  }
  return System_Collections_Generic_List_int___Contains(
           (System_Collections_Generic_List_int__o *)Instance,
           buffType,
           (const MethodInfo_37F3A6C *)Method_System_Collections_Generic_List_int__Contains__);
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
  int32_t v11; // w3
  System_String_o *v12; // x4
  int32_t v13; // w5
  int64_t v14; // x6
  System_String_o *v15; // x7
  struct BattleSkillInfoData_o *skillInfo; // x1
  int32_t v17; // w2
  int32_t v18; // w3
  System_String_o *v19; // x4
  int32_t v20; // w5
  int64_t v21; // x6
  System_String_o *v22; // x7
  __int64 v23; // x22

  if ( (byte_4CCA531 & 1) == 0 )
  {
    sub_1C713B0(&BattleActionData_TypeInfo);
    sub_1C713B0(&StringLiteral_8337/*"LOSS_COMMAND_SPELL"*/);
    byte_4CCA531 = 1;
  }
  v6 = sub_1C715FC(BattleActionData_TypeInfo);
  BattleActionData___ctor((BattleActionData_o *)v6, 0);
  if ( !actionData )
    goto LABEL_8;
  if ( !v6 )
    goto LABEL_8;
  *(_QWORD *)(v6 + 32) = *(_QWORD *)&actionData->fields.actorId;
  BattleActionData__setStateField((BattleActionData_o *)v6, 0);
  v9 = StringLiteral_8337/*"LOSS_COMMAND_SPELL"*/;
  *(_QWORD *)(v6 + 72) = StringLiteral_8337/*"LOSS_COMMAND_SPELL"*/;
  sub_1C71354((GrandQuestFolderBoardItem_o *)(v6 + 72), v9, v10, v11, v12, v13, v14, v15);
  skillInfo = actionData->fields.skillInfo;
  *(_QWORD *)(v6 + 152) = skillInfo;
  sub_1C71354((GrandQuestFolderBoardItem_o *)(v6 + 152), (int32_t)skillInfo, v17, v18, v19, v20, v21, v22);
  if ( !baseVals || (v23 = *(_QWORD *)(v6 + 152), Value = DataVals__GetValue(baseVals, 0), !v23) )
LABEL_8:
    sub_1C71608(Value, v8);
  *(_DWORD *)(v23 + 100) = Value;
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
    sub_1C71608(this, actBuffData);
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
  int32_t v9; // w3
  System_String_o *v10; // x4
  int32_t v11; // w5
  int64_t v12; // x6
  System_String_o *v13; // x7
  int32_t v14; // w2
  int32_t v15; // w3
  System_String_o *v16; // x4
  int32_t v17; // w5
  int64_t v18; // x6
  System_String_o *v19; // x7
  long double inited; // q0
  struct System_Int32_array *invalidEffectList; // x1
  _QWORD *v22; // x20
  __int64 v23; // x8
  __int64 v24; // x0
  __int64 v25; // x0

  if ( (byte_4CCA4FE & 1) == 0 )
  {
    sub_1C713B0(&Method_System_Array_Empty_int___);
    sub_1C713B0(&BattleActionData_BuffData_TypeInfo);
    byte_4CCA4FE = 1;
  }
  v4 = sub_1C715FC(BattleActionData_BuffData_TypeInfo);
  BattleActionData_BuffData___ctor((BattleActionData_BuffData_o *)v4, 0);
  if ( !funcTarget
    || !v4
    || (*(_DWORD *)(v4 + 44) = funcTarget->fields._targetId_k__BackingField,
        (funcUnit_k__BackingField = funcTarget->fields._funcUnit_k__BackingField) == 0) )
  {
    sub_1C71608(funcUnit_k__BackingField, v6);
  }
  *(_DWORD *)(v4 + 16) = BattleLogicFunctionProcess_FunctionUnitCheck__get_FuncIndex(funcUnit_k__BackingField, 0);
  *(_DWORD *)(v4 + 64) = funcTarget->fields.invalidIconId;
  invalidText = funcTarget->fields.invalidText;
  *(_QWORD *)(v4 + 56) = invalidText;
  sub_1C71354((GrandQuestFolderBoardItem_o *)(v4 + 56), (int32_t)invalidText, v8, v9, v10, v11, v12, v13);
  invalidEffectList = funcTarget->fields.invalidEffectList;
  if ( !invalidEffectList )
  {
    v22 = Method_System_Array_Empty_int___;
    v23 = *((_QWORD *)Method_System_Array_Empty_int___ + 7);
    if ( !v23 )
    {
      sub_1C474A0(Method_System_Array_Empty_int___);
      v23 = v22[7];
    }
    v24 = *(_QWORD *)(v23 + 16);
    if ( (*(_BYTE *)(v24 + 309) & 1) == 0 )
      v24 = sub_1C47444(inited);
    if ( !*(_DWORD *)(v24 + 224) )
      inited = j_il2cpp_runtime_class_init_0(v24);
    v25 = *(_QWORD *)(v22[7] + 16LL);
    if ( (*(_BYTE *)(v25 + 309) & 1) == 0 )
      v25 = sub_1C47444(inited);
    invalidEffectList = **(struct System_Int32_array ***)(v25 + 184);
  }
  *(_QWORD *)(v4 + 72) = invalidEffectList;
  sub_1C71354((GrandQuestFolderBoardItem_o *)(v4 + 72), (int32_t)invalidEffectList, v14, v15, v16, v17, v18, v19);
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
  int32_t v16; // w3
  System_String_o *v17; // x4
  int32_t v18; // w5
  int64_t v19; // x6
  System_String_o *v20; // x7
  int32_t v21; // w2
  int32_t v22; // w3
  System_String_o *v23; // x4
  int32_t v24; // w5
  int64_t v25; // x6
  System_String_o *v26; // x7

  if ( (byte_4CCA4FC & 1) == 0 )
  {
    sub_1C713B0(&BattleActionData_BuffData_TypeInfo);
    byte_4CCA4FC = 1;
  }
  v12 = sub_1C715FC(BattleActionData_BuffData_TypeInfo);
  BattleActionData_BuffData___ctor((BattleActionData_BuffData_o *)v12, 0);
  if ( !v12 )
    sub_1C71608(v13, v14);
  *(_DWORD *)(v12 + 44) = targetId;
  *(_DWORD *)(v12 + 16) = funcIndex;
  *(_DWORD *)(v12 + 64) = iconId;
  *(_QWORD *)(v12 + 56) = popupText;
  sub_1C71354((GrandQuestFolderBoardItem_o *)(v12 + 56), (int32_t)popupText, v15, v16, v17, v18, v19, v20);
  *(_DWORD *)(v12 + 68) = popupTextColor;
  *(_QWORD *)(v12 + 72) = 0;
  sub_1C71354((GrandQuestFolderBoardItem_o *)(v12 + 72), 0, v21, v22, v23, v24, v25, v26);
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
  int32_t v20; // w3
  System_String_o *v21; // x4
  int32_t v22; // w5
  int64_t v23; // x6
  System_String_o *v24; // x7
  System_Int32_array *FamilyLinkageTargetIdArray; // x0
  int32_t v26; // w2
  int32_t v27; // w3
  System_String_o *v28; // x4
  int32_t v29; // w5
  int64_t v30; // x6
  System_String_o *v31; // x7
  __int64 IsNullOrEmpty; // x0
  __int64 v33; // x8
  unsigned __int64 v34; // x26
  System_Collections_ICollection_o *v35; // x22
  __int64 v36; // x1
  unsigned __int64 monitor; // x8
  __int64 v38; // x24
  unsigned __int64 v39; // x25
  System_Collections_ICollection_o *v40; // x29
  _BOOL8 v41; // x0
  __int64 v42; // x1
  int32_t v43; // w23
  int32_t v44; // w0
  System_Collections_Generic_List_Enumerator_object__o v45; // [xsp+8h] [xbp-B8h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v46; // [xsp+20h] [xbp-A0h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v47; // [xsp+40h] [xbp-80h] BYREF

  if ( (byte_4CCA52E & 1) == 0 )
  {
    sub_1C713B0(&Method_System_Collections_Generic_Dictionary_int__int__ContainsKey__);
    sub_1C713B0(&Method_System_Collections_Generic_Dictionary_int__int___ctor__);
    sub_1C713B0(&Method_System_Collections_Generic_Dictionary_int__int__get_Item__);
    sub_1C713B0(&Method_System_Collections_Generic_Dictionary_int__RemovedBuffInfo__get_Values__);
    sub_1C713B0(&Method_System_Collections_Generic_Dictionary_int__int__set_Item__);
    sub_1C713B0(&System_Collections_Generic_Dictionary_int__int__TypeInfo);
    sub_1C713B0(&Method_System_Collections_Generic_Dictionary_ValueCollection_Enumerator_int__RemovedBuffInfo__Dispose__);
    sub_1C713B0(&Method_System_Collections_Generic_List_Enumerator_BattleBuffData_BuffData__Dispose__);
    sub_1C713B0(&Method_System_Collections_Generic_Dictionary_ValueCollection_Enumerator_int__RemovedBuffInfo__MoveNext__);
    sub_1C713B0(&Method_System_Collections_Generic_List_Enumerator_BattleBuffData_BuffData__MoveNext__);
    sub_1C713B0(&Method_System_Collections_Generic_Dictionary_ValueCollection_Enumerator_int__RemovedBuffInfo__get_Current__);
    sub_1C713B0(&Method_System_Collections_Generic_List_Enumerator_BattleBuffData_BuffData__get_Current__);
    sub_1C713B0(&int_____TypeInfo);
    sub_1C713B0(&Method_System_Collections_Generic_List_BattleBuffData_BuffData__GetEnumerator__);
    this = (BattleLogicFunction_o *)sub_1C713B0(&Method_System_Collections_Generic_Dictionary_ValueCollection_int__RemovedBuffInfo__GetEnumerator__);
    byte_4CCA52E = 1;
  }
  memset(&v47, 0, sizeof(v47));
  memset(&v46, 0, sizeof(v46));
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
                                            (const MethodInfo_34620A4 *)Method_System_Collections_Generic_Dictionary_int__RemovedBuffInfo__get_Values__)) == 0 )
    {
      sub_1C71608(this, procArg);
    }
    System_Collections_Generic_Dictionary_ValueCollection_int__object___GetEnumerator(
      (System_Collections_Generic_Dictionary_ValueCollection_Enumerator_TKey__TValue__o *)&v45,
      (System_Collections_Generic_Dictionary_ValueCollection_TKey__TValue__o *)this,
      (const MethodInfo_3B4C9F8 *)Method_System_Collections_Generic_Dictionary_ValueCollection_int__RemovedBuffInfo__GetEnumerator__);
    v47 = v45;
    while ( System_Collections_Generic_Dictionary_ValueCollection_Enumerator_int__object___MoveNext(
              (System_Collections_Generic_Dictionary_ValueCollection_Enumerator_TKey__TValue__o *)&v47,
              (const MethodInfo_35BAD28 *)Method_System_Collections_Generic_Dictionary_ValueCollection_Enumerator_int__RemovedBuffInfo__MoveNext__) )
    {
      current = v47.fields._current;
      v10 = (System_Collections_Generic_Dictionary_int__int__o *)sub_1C715FC(System_Collections_Generic_Dictionary_int__int__TypeInfo);
      System_Collections_Generic_Dictionary_int__int____ctor(
        v10,
        (const MethodInfo_3458E18 *)Method_System_Collections_Generic_Dictionary_int__int___ctor__);
      if ( !current )
        sub_1C71608(v11, v12);
      klass = (System_Collections_Generic_List_object__o *)current[1].klass;
      if ( !klass )
        sub_1C71608(0, v12);
      System_Collections_Generic_List_object___GetEnumerator(
        (System_Collections_Generic_List_Enumerator_T__o *)&v45,
        klass,
        (const MethodInfo_3811210 *)Method_System_Collections_Generic_List_BattleBuffData_BuffData__GetEnumerator__);
      v46 = v45;
      while ( 1 )
      {
        v14 = System_Collections_Generic_List_Enumerator_object___MoveNext(
                &v46,
                (const MethodInfo_35962C8 *)Method_System_Collections_Generic_List_Enumerator_BattleBuffData_BuffData__MoveNext__);
        if ( !v14 )
          break;
        v16 = v46.fields._current;
        if ( !v46.fields._current )
          sub_1C71608(v14, v15);
        if ( BattleBuffData_BuffData__IsFamilyBuff((BattleBuffData_BuffData_o *)v46.fields._current, 0) )
        {
          v17 = sub_1C71458(int_____TypeInfo, 2);
          FamilyLinkageIdArray = BattleBuffData_BuffData__get_FamilyLinkageIdArray((BattleBuffData_BuffData_o *)v16, 0);
          if ( !v17 )
            sub_1C71608(FamilyLinkageIdArray, FamilyLinkageIdArray);
          if ( !*(_DWORD *)(v17 + 24) )
            sub_1C71610(FamilyLinkageIdArray);
          *(_QWORD *)(v17 + 32) = FamilyLinkageIdArray;
          sub_1C71354(
            (GrandQuestFolderBoardItem_o *)(v17 + 32),
            (int32_t)FamilyLinkageIdArray,
            v19,
            v20,
            v21,
            v22,
            v23,
            v24);
          FamilyLinkageTargetIdArray = BattleBuffData_BuffData__get_FamilyLinkageTargetIdArray(
                                         (BattleBuffData_BuffData_o *)v16,
                                         0);
          if ( *(_DWORD *)(v17 + 24) <= 1u )
            sub_1C71610(FamilyLinkageTargetIdArray);
          *(_QWORD *)(v17 + 40) = FamilyLinkageTargetIdArray;
          sub_1C71354(
            (GrandQuestFolderBoardItem_o *)(v17 + 40),
            (int32_t)FamilyLinkageTargetIdArray,
            v26,
            v27,
            v28,
            v29,
            v30,
            v31);
          v33 = *(_QWORD *)(v17 + 24);
          if ( (int)v33 >= 1 )
          {
            v34 = 0;
            do
            {
              if ( v34 >= (unsigned int)v33 )
                sub_1C71610(IsNullOrEmpty);
              v35 = *(System_Collections_ICollection_o **)(v17 + 8 * v34 + 32);
              IsNullOrEmpty = BasicHelper__IsNullOrEmpty(v35, 0);
              if ( (IsNullOrEmpty & 1) == 0 )
              {
                if ( !v35 )
                  sub_1C71608(IsNullOrEmpty, v36);
                monitor = (unsigned __int64)v35[1].monitor;
                if ( (int)monitor >= 1 )
                {
                  v38 = (unsigned int)v35[1].monitor;
                  v39 = 0;
                  v40 = v35 + 2;
                  do
                  {
                    if ( v39 >= (unsigned int)monitor )
                      sub_1C71610(IsNullOrEmpty);
                    if ( !v10 )
                      sub_1C71608(IsNullOrEmpty, v36);
                    v41 = System_Collections_Generic_Dictionary_int__int___ContainsKey(
                            v10,
                            *((_DWORD *)&v40->klass + v39),
                            (const MethodInfo_34599C8 *)Method_System_Collections_Generic_Dictionary_int__int__ContainsKey__);
                    if ( !v41 )
                    {
                      if ( v39 >= LODWORD(v35[1].monitor) )
                        sub_1C71610(v41);
                      if ( !v8 )
                        sub_1C71608(v41, v42);
                      v43 = *((_DWORD *)&v40->klass + v39);
                      v44 = FamilyBuffLinkageIdGenerator__Next(v8, 0);
                      System_Collections_Generic_Dictionary_int__int___set_Item(
                        v10,
                        v43,
                        v44,
                        (const MethodInfo_34597C8 *)Method_System_Collections_Generic_Dictionary_int__int__set_Item__);
                    }
                    if ( v39 >= LODWORD(v35[1].monitor) )
                      sub_1C71610(v41);
                    IsNullOrEmpty = System_Collections_Generic_Dictionary_int__int___get_Item(
                                      v10,
                                      *((_DWORD *)&v40->klass + v39),
                                      (const MethodInfo_3459740 *)Method_System_Collections_Generic_Dictionary_int__int__get_Item__);
                    monitor = LODWORD(v35[1].monitor);
                    if ( v39 >= monitor )
                      sub_1C71610(IsNullOrEmpty);
                    *((_DWORD *)&v40->klass + v39++) = IsNullOrEmpty;
                  }
                  while ( v38 != v39 );
                }
              }
              LODWORD(v33) = *(_DWORD *)(v17 + 24);
              ++v34;
            }
            while ( (__int64)v34 < (int)v33 );
          }
        }
      }
      System_Collections_Generic_List_Enumerator_object___Dispose(
        &v46,
        (const MethodInfo_35962C4 *)Method_System_Collections_Generic_List_Enumerator_BattleBuffData_BuffData__Dispose__);
    }
    System_Collections_Generic_Dictionary_ValueCollection_Enumerator_int__object___Dispose(
      (System_Collections_Generic_Dictionary_ValueCollection_Enumerator_TKey__TValue__o *)&v47,
      (const MethodInfo_35BAD24 *)Method_System_Collections_Generic_Dictionary_ValueCollection_Enumerator_int__RemovedBuffInfo__Dispose__);
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
  int32_t v17; // w3
  System_String_o *v18; // x4
  int32_t v19; // w5
  int64_t v20; // x6
  System_String_o *v21; // x7

  if ( (byte_4CCA53B & 1) == 0 )
  {
    this = (BattleLogicFunction_o *)sub_1C713B0(&BattleSkillDropInfo_TypeInfo);
    byte_4CCA53B = 1;
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
        v15 = (BattleSkillDropInfo_o *)sub_1C715FC(BattleSkillDropInfo_TypeInfo),
        BattleSkillDropInfo___ctor(v15, dropperUniqueId, baseVals, 0),
        v14[2].fields.logic = (struct BattleLogic_o *)v15,
        sub_1C71354((GrandQuestFolderBoardItem_o *)&v14[2].fields.logic, (int32_t)v15, v16, v17, v18, v19, v20, v21),
        !actionData) )
  {
LABEL_8:
    sub_1C71608(this, actionData);
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
    sub_1C71608(this, mainActionData);
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
  int32_t v10; // w3
  System_String_o *v11; // x4
  int32_t v12; // w5
  int64_t v13; // x6
  System_String_o *v14; // x7
  int32_t v15; // w1
  __int64 v16; // x22
  int32_t v17; // w2
  int32_t v18; // w3
  System_String_o *v19; // x4
  int32_t v20; // w5
  int64_t v21; // x6
  System_String_o *v22; // x7
  BattleSkillInfoData_o *skillInfo; // x0
  System_String_o *v24; // x1
  int32_t v25; // w2
  int32_t v26; // w3
  System_String_o *v27; // x4
  int32_t v28; // w5
  int64_t v29; // x6
  System_String_o *v30; // x7

  if ( (byte_4CCA53A & 1) == 0 )
  {
    sub_1C713B0(&BattleActionData_TypeInfo);
    sub_1C713B0(&BattleActionData_EnemyCountChangeData_TypeInfo);
    sub_1C713B0(&StringLiteral_5459/*"ENEMY_COUNT_CHANGE"*/);
    byte_4CCA53A = 1;
  }
  v6 = sub_1C715FC(BattleActionData_TypeInfo);
  BattleActionData___ctor((BattleActionData_o *)v6, 0);
  if ( !mainActionData
    || !v6
    || (*(_QWORD *)(v6 + 32) = *(_QWORD *)&mainActionData->fields.actorId,
        v15 = StringLiteral_5459/*"ENEMY_COUNT_CHANGE"*/,
        *(_QWORD *)(v6 + 72) = StringLiteral_5459/*"ENEMY_COUNT_CHANGE"*/,
        sub_1C71354((GrandQuestFolderBoardItem_o *)(v6 + 72), v15, v9, v10, v11, v12, v13, v14),
        v16 = sub_1C715FC(BattleActionData_EnemyCountChangeData_TypeInfo),
        BattleActionData_EnemyCountChangeData___ctor((BattleActionData_EnemyCountChangeData_o *)v16, 0),
        !baseVals)
    || (Value = DataVals__GetValue(baseVals, 0), !v16) )
  {
    sub_1C71608(Value, v8);
  }
  *(_DWORD *)(v16 + 16) = Value;
  *(float *)(v16 + 20) = DataVals__GetEnemyCountChangeTime(baseVals, 3000, 0);
  skillInfo = mainActionData->fields.skillInfo;
  if ( skillInfo )
    v24 = BattleSkillInfoData__GetEnemyCountChangeMessage(skillInfo, 0);
  else
    v24 = 0;
  *(_QWORD *)(v16 + 24) = v24;
  sub_1C71354((GrandQuestFolderBoardItem_o *)(v16 + 24), (int32_t)v24, v17, v18, v19, v20, v21, v22);
  *(_DWORD *)(v16 + 32) = DataVals__GetEnemyCountChangeEffectId(baseVals, 0);
  *(float *)(v16 + 36) = DataVals__GetEnemyCountWaitTimeAfterMessage(baseVals, 0);
  *(_QWORD *)(v6 + 536) = v16;
  sub_1C71354((GrandQuestFolderBoardItem_o *)(v6 + 536), v16, v25, v26, v27, v28, v29, v30);
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
  BattleActionData_o *SideEffectActionData_45927044; // x0
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
  int32_t v43; // w3
  System_String_o *v44; // x4
  int32_t v45; // w5
  int64_t v46; // x6
  System_String_o *v47; // x7
  _DWORD *v48; // [xsp+0h] [xbp-90h]
  unsigned __int64 v50; // [xsp+10h] [xbp-80h]
  BattleCommandData_o *command; // [xsp+18h] [xbp-78h]
  System_Int32_array *questIndividualityArray; // [xsp+28h] [xbp-68h]
  System_Int32_array *questIndividualityArraya; // [xsp+28h] [xbp-68h]

  if ( (byte_4CCA4EF & 1) == 0 )
  {
    sub_1C713B0(&System_Action_BattleActionData__TypeInfo);
    sub_1C713B0(&Method_BasicHelper_ForEach_BattleActionData___);
    sub_1C713B0(&BattleTreasureDeviceCommandData_TypeInfo);
    sub_1C713B0(&bool___TypeInfo);
    sub_1C713B0(&Method_DataManager_GetMaster_SkillLvMaster___);
    sub_1C713B0(&DataManager_TypeInfo);
    sub_1C713B0(&BattleLogicFunction_TreasureDeviceSideEffectFunctionArgument_TypeInfo);
    sub_1C713B0(&Method_BattleLogicFunction___c__SetFuncSideEffect_b__53_0__);
    sub_1C713B0(&BattleLogicFunction___c_TypeInfo);
    byte_4CCA4EF = 1;
  }
  if ( actionData && actorSvtData )
  {
    if ( sideEffectArg
      && (naturalAligment = BattleLogicFunction_TreasureDeviceSideEffectFunctionArgument_TypeInfo->_2.naturalAligment,
          sideEffectArg->klass->_2.naturalAligment >= (unsigned int)naturalAligment)
      && (BattleLogicFunction_TreasureDeviceSideEffectFunctionArgument_c *)sideEffectArg->klass->_2.typeHierarchy[naturalAligment - 1] == BattleLogicFunction_TreasureDeviceSideEffectFunctionArgument_TypeInfo )
    {
      command = (BattleCommandData_o *)sub_1C715FC(BattleTreasureDeviceCommandData_TypeInfo);
      BattleTreasureDeviceCommandData___ctor((BattleTreasureDeviceCommandData_o *)command, actorSvtData, 0);
    }
    else
    {
      command = 0;
    }
    if ( !DataManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
    Master_object = DataManager__GetMaster_object_((const MethodInfo_314B0B8 *)Method_DataManager_GetMaster_SkillLvMaster___);
    FuncSideEffectTargetServants = (void *)sub_1C71458(bool___TypeInfo, 2);
    if ( !FuncSideEffectTargetServants )
      goto LABEL_54;
    v13 = *((_QWORD *)FuncSideEffectTargetServants + 3);
    if ( !(_DWORD)v13 )
      goto LABEL_53;
    *((_BYTE *)FuncSideEffectTargetServants + 32) = 1;
    if ( (int)v13 >= 1 )
    {
      v14 = 0;
      v48 = FuncSideEffectTargetServants;
      while ( 1 )
      {
        if ( v14 >= (unsigned int)v13 )
          goto LABEL_53;
        if ( !sideEffectArg )
          goto LABEL_54;
        v50 = v14;
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
        FuncSideEffectTargetServants = v48;
        LODWORD(v13) = v48[6];
        v14 = v50 + 1;
        if ( (__int64)(v50 + 1) >= (int)v13 )
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
        SideEffectActionData_45927044 = BattleActionData__MakeSideEffectActionData_45927044(
                                          actionData,
                                          4,
                                          v19->fields.uniqueId,
                                          0);
        BattleLogicFunction__SetSideEffectBuff(
          this,
          (SkillLvMaster_o *)Master_object,
          SideEffectActionData_45927044,
          v23,
          (BattleLogicFunction_CommonSideEffectFunctionArgument_o *)sideEffectArg,
          1,
          v25);
        LODWORD(v20) = *((_DWORD *)v21 + 6);
        if ( (__int64)++v22 >= (int)v20 )
          goto LABEL_27;
      }
LABEL_53:
      sub_1C71610(FuncSideEffectTargetServants);
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
      sub_1C71608(FuncSideEffectTargetServants, v12);
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
        FuncSideEffectTargetServants = BattleActionData__MakeSideEffectActionData_45927044(
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
        _9__53_0 = (System_Action_object__o *)sub_1C715FC(System_Action_BattleActionData__TypeInfo);
        System_Action_object____ctor(_9__53_0, v40, Method_BattleLogicFunction___c__SetFuncSideEffect_b__53_0__, 0);
        static_fields = BattleLogicFunction___c_TypeInfo->static_fields;
        static_fields->__9__53_0 = (struct System_Action_BattleActionData__o *)_9__53_0;
        sub_1C71354(
          (GrandQuestFolderBoardItem_o *)&static_fields->__9__53_0,
          (int32_t)_9__53_0,
          v42,
          v43,
          v44,
          v45,
          v46,
          v47);
      }
      BasicHelper__ForEach_object_(
        SideEffectList,
        (System_Action_T__o *)_9__53_0,
        (const MethodInfo_3136DF4 *)Method_BasicHelper_ForEach_BattleActionData___);
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
  int32_t v23; // w3
  System_String_o *v24; // x4
  int32_t v25; // w5
  int64_t v26; // x6
  System_String_o *v27; // x7
  BattleLogicFunction_o *v28; // x22
  int32_t v29; // w2
  int32_t v30; // w3
  System_String_o *v31; // x4
  int32_t v32; // w5
  int64_t v33; // x6
  System_String_o *v34; // x7
  BattleLogicFunction_o *v35; // x21
  int logic; // w8
  __int64 v37; // x23
  BattleActionData_BuffData_o *v38; // x22
  BattleActionData_o *NoEffectObject; // x23
  __int64 v40; // x0
  MethodInfo *methoda; // [xsp+0h] [xbp-70h]

  v18 = this;
  if ( (byte_4CCA508 & 1) == 0 )
  {
    this = (BattleLogicFunction_o *)sub_1C713B0(&BattleActionData_BuffData___TypeInfo);
    byte_4CCA508 = 1;
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
        v35 = this;
        if ( !this )
          return;
        goto LABEL_15;
      }
LABEL_26:
      sub_1C71608(this, actiondata);
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
  v28 = this;
  v19->fields.tamamocatTreasureDeviceIds = (struct System_Int32_array *)this;
  sub_1C71354(
    (GrandQuestFolderBoardItem_o *)&v19->fields.tamamocatTreasureDeviceIds,
    (int32_t)this,
    v22,
    v23,
    v24,
    v25,
    v26,
    v27);
  if ( !baseVals )
    goto LABEL_26;
  LODWORD(v19->fields.buffProgressTurnSelfList) = DataVals__GetParam(baseVals, 65, 0, 0);
  this = (BattleLogicFunction_o *)sub_1C71458(BattleActionData_BuffData___TypeInfo, 1);
  if ( !this )
    goto LABEL_26;
  v35 = this;
  if ( v28 )
  {
    this = (BattleLogicFunction_o *)sub_1C714EC(v28, this->klass->_1.element_class);
    if ( !this )
    {
      v40 = sub_1C7162C(0);
      sub_1C714D8(v40, 0);
    }
  }
  if ( !LODWORD(v35->fields.logic) )
    goto LABEL_27;
  v35->fields.logictarget = (struct BattleLogicTarget_o *)v28;
  sub_1C71354((GrandQuestFolderBoardItem_o *)&v35->fields.logictarget, (int32_t)v28, v29, v30, v31, v32, v33, v34);
LABEL_15:
  logic = (int)v35->fields.logic;
  if ( logic >= 1 )
  {
    v37 = 0;
    while ( (unsigned int)v37 < logic )
    {
      v38 = (BattleActionData_BuffData_o *)*((_QWORD *)&v35->fields.logictarget + v37);
      if ( !v38 )
        goto LABEL_26;
      v38->fields.isHideEffect = isHideEffect;
      this = (BattleLogicFunction_o *)BattleServantData__isLogicResultAlive(targetSvtData, 0);
      if ( ((unsigned __int8)this & 1) != 0 )
        BattleActionData_BuffData__SetCheckHideWhenDeadInfo(v38, baseVals, 0);
      logic = (int)v35->fields.logic;
      if ( (int)++v37 >= logic )
        return;
    }
LABEL_27:
    sub_1C71610(this);
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
      sub_1C71608(data, funcResult);
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
      sub_1C71608(SkillFromBuff, v13);
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
  int32_t v16; // w3
  System_String_o *v17; // x4
  int32_t v18; // w5
  int64_t v19; // x6
  System_String_o *v20; // x7
  BattleData_c *klass; // x8
  BattleData_o *v22; // x20
  __int64 v23; // x9
  int *p_offset; // x10
  __int64 v25; // x0
  __int64 v26; // x1
  __int64 v27; // x8
  __int64 v28; // x9
  int *v29; // x10
  __int64 v30; // x0
  __int64 v31; // x8
  __int64 v32; // x9
  int *v33; // x10
  __int64 v34; // x0
  BattleBuffData_BuffData_array *BuffList; // x0
  __int64 v36; // x1
  struct System_Threading_CancellationTokenSource_o *v37; // x8
  BattleServantData_o *v38; // x25
  unsigned __int64 v39; // x23
  int32_t v40; // w26
  BattleLogicFunction___c_c *v41; // x8
  System_Func_object__bool__o *_9__162_2; // x19
  Il2CppObject *v43; // x20
  struct BattleLogicFunction___c_StaticFields *v44; // x0
  int32_t v45; // w2
  int32_t v46; // w3
  System_String_o *v47; // x4
  int32_t v48; // w5
  int64_t v49; // x6
  System_String_o *v50; // x7
  BattleBuffData_BuffData_array *v51; // x26
  int max_length; // w8
  int i; // w22
  Il2CppClass **v54; // x8
  Il2CppClass *v55; // x27
  SkillLvEntity_o *SkillEntityFromSubstituteBuff; // x0
  __int64 v57; // x1
  SkillLvEntity_o *v58; // x29
  struct System_Collections_Generic_Dictionary_BattleBuffData_BuffData__BattleActionData_BuffData__o *substituteActBuffDict; // x0
  __int64 v60; // x28
  __int64 v61; // x0
  __int64 v62; // x1
  int32_t v63; // w2
  int32_t v64; // w3
  System_String_o *v65; // x4
  int32_t v66; // w5
  int64_t v67; // x6
  System_String_o *v68; // x7
  struct System_Int32_array *pttargetIds; // x1
  int32_t v70; // w1
  int32_t v71; // w2
  int32_t v72; // w3
  System_String_o *v73; // x4
  int32_t v74; // w5
  int64_t v75; // x6
  System_String_o *v76; // x7
  __int64 argument; // x19
  __int64 v78; // x0
  __int64 v79; // x1
  int32_t v80; // w2
  int32_t v81; // w3
  System_String_o *v82; // x4
  int32_t v83; // w5
  int64_t v84; // x6
  System_String_o *v85; // x7
  int32_t v86; // w1
  System_Int32_array *funcId; // x20
  DataVals_array *DataValsList; // x3
  __int64 v89; // x8
  __int64 v90; // x9
  int *v91; // x10
  __int64 v92; // x21
  __int64 v93; // x0
  BattleLogicFunction___c_c *v94; // x8
  System_Action_object__o *_9__162_0; // x19
  Il2CppObject *v96; // x20
  struct BattleLogicFunction___c_StaticFields *v97; // x0
  int32_t v98; // w2
  int32_t v99; // w3
  System_String_o *v100; // x4
  int32_t v101; // w5
  int64_t v102; // x6
  System_String_o *v103; // x7
  const MethodInfo *v104; // [xsp+28h] [xbp-98h]
  System_Collections_Generic_IEnumerable_TSource__o *source; // [xsp+30h] [xbp-90h]
  __int64 v106; // [xsp+38h] [xbp-88h]
  BattleData_o *v107; // [xsp+40h] [xbp-80h]
  bool v108; // [xsp+4Ch] [xbp-74h]
  Il2CppObject *value; // [xsp+58h] [xbp-68h] BYREF

  if ( (byte_4CCA53F & 1) == 0 )
  {
    sub_1C713B0(&BuffList_ACTION___TypeInfo);
    sub_1C713B0(&System_Action_BattleServantData__TypeInfo);
    sub_1C713B0(&Method_BasicHelper_ForEach_BattleServantData___);
    sub_1C713B0(&BattleActionData_TypeInfo);
    sub_1C713B0(&Method_DataManager_GetMaster_SkillLvMaster___);
    sub_1C713B0(&DataManager_TypeInfo);
    sub_1C713B0(&Method_System_Collections_Generic_Dictionary_BattleBuffData_BuffData__BattleActionData_BuffData__TryGetValue__);
    sub_1C713B0(&Method_System_Linq_Enumerable_Where_BattleServantData___);
    sub_1C713B0(&System_Func_BattleBuffData_BuffData__bool__TypeInfo);
    sub_1C713B0(&System_Func_BattleServantData__bool__TypeInfo);
    sub_1C713B0(&BattleLogicFunction_FunctionArgument_TypeInfo);
    sub_1C713B0(&System_IDisposable_TypeInfo);
    sub_1C713B0(&System_Collections_Generic_IEnumerable_BattleServantData__TypeInfo);
    sub_1C713B0(&System_Collections_Generic_IEnumerator_BattleServantData__TypeInfo);
    sub_1C713B0(&System_Collections_IEnumerator_TypeInfo);
    sub_1C713B0(&Method_BattleLogicFunction___c__SetSubstituteAction_b__162_0__);
    sub_1C713B0(&Method_BattleLogicFunction___c__SetSubstituteAction_b__162_1__);
    sub_1C713B0(&Method_BattleLogicFunction___c__SetSubstituteAction_b__162_2__);
    sub_1C713B0(&BattleLogicFunction___c_TypeInfo);
    byte_4CCA53F = 1;
  }
  value = 0;
  data = this->fields.data;
  if ( !data )
    goto LABEL_83;
  source = (System_Collections_Generic_IEnumerable_TSource__o *)BattleData__getFieldServantList(data, 0, 0);
  data = (BattleData_o *)sub_1C71458(BuffList_ACTION___TypeInfo, 2);
  if ( !data )
    goto LABEL_83;
  m_CancellationTokenSource = (int)data->fields.m_CancellationTokenSource;
  v8 = data;
  if ( !m_CancellationTokenSource || (LODWORD(data->fields.rootfsm) = 164, m_CancellationTokenSource == 1) )
    sub_1C71610(data);
  HIDWORD(data->fields.rootfsm) = 165;
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_object = DataManager__GetMaster_object_((const MethodInfo_314B0B8 *)Method_DataManager_GetMaster_SkillLvMaster___);
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
    _9__162_1 = (System_Func_object__bool__o *)sub_1C715FC(System_Func_BattleServantData__bool__TypeInfo);
    System_Func_object__bool____ctor(_9__162_1, v13, Method_BattleLogicFunction___c__SetSubstituteAction_b__162_1__, 0);
    static_fields = BattleLogicFunction___c_TypeInfo->static_fields;
    static_fields->__9__162_1 = (struct System_Func_BattleServantData__bool__o *)_9__162_1;
    sub_1C71354(
      (GrandQuestFolderBoardItem_o *)&static_fields->__9__162_1,
      (int32_t)_9__162_1,
      v15,
      v16,
      v17,
      v18,
      v19,
      v20);
  }
  data = (BattleData_o *)System_Linq_Enumerable__Where_object_(
                           source,
                           (System_Func_TSource__bool__o *)_9__162_1,
                           (const MethodInfo_3192108 *)Method_System_Linq_Enumerable_Where_BattleServantData___);
  if ( !data )
LABEL_83:
    sub_1C71608(data, mainAction);
  klass = data->klass;
  v22 = data;
  v23 = *(unsigned __int16 *)&data->klass->_2.rank;
  if ( *(_WORD *)&data->klass->_2.rank )
  {
    p_offset = &klass->_1.interfaceOffsets->offset;
    while ( *((System_Collections_Generic_IEnumerable_BattleServantData__c **)p_offset - 1) != System_Collections_Generic_IEnumerable_BattleServantData__TypeInfo )
    {
      --v23;
      p_offset += 4;
      if ( !v23 )
        goto LABEL_20;
    }
    v25 = (__int64)&klass->vtable + 16 * *p_offset;
  }
  else
  {
LABEL_20:
    v25 = sub_1C47738(data, System_Collections_Generic_IEnumerable_BattleServantData__TypeInfo, 0);
  }
  v106 = (*(__int64 (__fastcall **)(BattleData_o *, _QWORD))v25)(v22, *(_QWORD *)(v25 + 8));
  if ( !v106 )
    sub_1C71608(0, v26);
  v108 = isTreasureDvc;
  v107 = v8;
  while ( 1 )
  {
    v27 = *(_QWORD *)v106;
    v28 = *(unsigned __int16 *)(*(_QWORD *)v106 + 302LL);
    if ( *(_WORD *)(*(_QWORD *)v106 + 302LL) )
    {
      v29 = (int *)(*(_QWORD *)(v27 + 176) + 8LL);
      while ( *((System_Collections_IEnumerator_c **)v29 - 1) != System_Collections_IEnumerator_TypeInfo )
      {
        --v28;
        v29 += 4;
        if ( !v28 )
          goto LABEL_28;
      }
      v30 = v27 + 16LL * *v29 + 312;
    }
    else
    {
LABEL_28:
      v30 = sub_1C47738(v106, System_Collections_IEnumerator_TypeInfo, 0);
    }
    if ( ((*(__int64 (__fastcall **)(__int64, _QWORD))v30)(v106, *(_QWORD *)(v30 + 8)) & 1) == 0 )
      break;
    v31 = *(_QWORD *)v106;
    v32 = *(unsigned __int16 *)(*(_QWORD *)v106 + 302LL);
    if ( *(_WORD *)(*(_QWORD *)v106 + 302LL) )
    {
      v33 = (int *)(*(_QWORD *)(v31 + 176) + 8LL);
      while ( *((System_Collections_Generic_IEnumerator_BattleServantData__c **)v33 - 1) != System_Collections_Generic_IEnumerator_BattleServantData__TypeInfo )
      {
        --v32;
        v33 += 4;
        if ( !v32 )
          goto LABEL_35;
      }
      v34 = v31 + 16LL * *v33 + 312;
    }
    else
    {
LABEL_35:
      v34 = sub_1C47738(v106, System_Collections_Generic_IEnumerator_BattleServantData__TypeInfo, 0);
    }
    BuffList = (BattleBuffData_BuffData_array *)(*(__int64 (__fastcall **)(__int64, _QWORD))v34)(
                                                  v106,
                                                  *(_QWORD *)(v34 + 8));
    v37 = v8->fields.m_CancellationTokenSource;
    if ( (int)v37 >= 1 )
    {
      v38 = (BattleServantData_o *)BuffList;
      v39 = 0;
      do
      {
        if ( v39 >= (unsigned int)v37 )
          sub_1C71610(BuffList);
        v40 = *((_DWORD *)&v8->fields.rootfsm + v39);
        v41 = BattleLogicFunction___c_TypeInfo;
        if ( !BattleLogicFunction___c_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(BattleLogicFunction___c_TypeInfo);
          v41 = BattleLogicFunction___c_TypeInfo;
        }
        _9__162_2 = (System_Func_object__bool__o *)v41->static_fields->__9__162_2;
        if ( !_9__162_2 )
        {
          if ( !v41->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(v41);
            v41 = BattleLogicFunction___c_TypeInfo;
          }
          v43 = (Il2CppObject *)v41->static_fields->__9;
          _9__162_2 = (System_Func_object__bool__o *)sub_1C715FC(System_Func_BattleBuffData_BuffData__bool__TypeInfo);
          System_Func_object__bool____ctor(
            _9__162_2,
            v43,
            Method_BattleLogicFunction___c__SetSubstituteAction_b__162_2__,
            0);
          v44 = BattleLogicFunction___c_TypeInfo->static_fields;
          v44->__9__162_2 = (struct System_Func_BattleBuffData_BuffData__bool__o *)_9__162_2;
          sub_1C71354((GrandQuestFolderBoardItem_o *)&v44->__9__162_2, (int32_t)_9__162_2, v45, v46, v47, v48, v49, v50);
        }
        if ( !v38 )
          sub_1C71608(BuffList, v36);
        BuffList = BattleServantData__getBuffList(
                     v38,
                     v40,
                     1,
                     (System_Func_BattleBuffData_BuffData__bool__o *)_9__162_2,
                     0);
        v51 = BuffList;
        if ( !BuffList )
          sub_1C71608(0, v36);
        max_length = BuffList->max_length;
        if ( max_length >= 1 )
        {
          for ( i = 0; i < max_length; ++i )
          {
            if ( i >= (unsigned int)max_length )
              sub_1C71610(BuffList);
            v54 = &v51->obj.klass + i;
            v55 = v54[4];
            if ( !v55 )
              sub_1C71608(BuffList, v36);
            SkillEntityFromSubstituteBuff = BattleBuffData_BuffData__GetSkillEntityFromSubstituteBuff(
                                              (BattleBuffData_BuffData_o *)v54[4],
                                              v11,
                                              0);
            if ( !mainAction )
              sub_1C71608(SkillEntityFromSubstituteBuff, v57);
            v58 = SkillEntityFromSubstituteBuff;
            substituteActBuffDict = mainAction->fields.substituteActBuffDict;
            if ( !substituteActBuffDict )
              sub_1C71608(0, v57);
            BuffList = (BattleBuffData_BuffData_array *)System_Collections_Generic_Dictionary_object__object___TryGetValue(
                                                          (System_Collections_Generic_Dictionary_object__object__o *)substituteActBuffDict,
                                                          (Il2CppObject *)v55,
                                                          &value,
                                                          (const MethodInfo_34CCEEC *)Method_System_Collections_Generic_Dictionary_BattleBuffData_BuffData__BattleActionData_BuffData__TryGetValue__);
            if ( ((v58 != 0) & (unsigned __int8)BuffList) != 0 )
            {
              v60 = sub_1C715FC(BattleActionData_TypeInfo);
              BattleActionData___ctor((BattleActionData_o *)v60, 0);
              if ( !v60 )
                sub_1C71608(v61, v62);
              *(_DWORD *)(v60 + 32) = v38->fields.uniqueId;
              *(_DWORD *)(v60 + 36) = mainAction->fields.actorId;
              pttargetIds = mainAction->fields.pttargetIds;
              *(_QWORD *)(v60 + 40) = pttargetIds;
              sub_1C71354((GrandQuestFolderBoardItem_o *)(v60 + 40), (int32_t)pttargetIds, v63, v64, v65, v66, v67, v68);
              v70 = (int)value;
              *(_QWORD *)(v60 + 336) = value;
              sub_1C71354((GrandQuestFolderBoardItem_o *)(v60 + 336), v70, v71, v72, v73, v74, v75, v76);
              argument = sub_1C715FC(BattleLogicFunction_FunctionArgument_TypeInfo);
              BattleLogicFunction_FunctionArgument___ctor((BattleLogicFunction_FunctionArgument_o *)argument, 0);
              if ( !argument )
                sub_1C71608(v78, v79);
              v86 = (int)value;
              *(_QWORD *)(argument + 64) = value;
              sub_1C71354((GrandQuestFolderBoardItem_o *)(argument + 64), v86, v80, v81, v82, v83, v84, v85);
              funcId = v58->fields.funcId;
              DataValsList = SkillLvEntity__getDataValsList(v58, 0);
              BattleLogicFunction__procList(
                this,
                (BattleActionData_o *)v60,
                funcId,
                DataValsList,
                0,
                0,
                0,
                0,
                v108,
                0,
                1,
                (BattleLogicFunction_FunctionArgument_o *)argument,
                0,
                v104);
              BattleActionData__EnableSubstituteBuffSkillFlag((BattleActionData_o *)v60, 0);
              BattleActionData__OverwirteFuncIndex((BattleActionData_o *)v60, (int32_t)v55->vtable[17].method, 0);
              BattleActionData__addAction(mainAction, (BattleActionData_o *)v60, 0);
            }
            WORD2(v55->vtable[17].method) = 0;
            max_length = v51->max_length;
          }
        }
        v8 = v107;
        ++v39;
        LODWORD(v37) = v107->fields.m_CancellationTokenSource;
      }
      while ( (__int64)v39 < (int)v37 );
    }
  }
  v89 = *(_QWORD *)v106;
  v90 = *(unsigned __int16 *)(*(_QWORD *)v106 + 302LL);
  if ( *(_WORD *)(*(_QWORD *)v106 + 302LL) )
  {
    v91 = (int *)(*(_QWORD *)(v89 + 176) + 8LL);
    while ( *((System_IDisposable_c **)v91 - 1) != System_IDisposable_TypeInfo )
    {
      --v90;
      v91 += 4;
      if ( !v90 )
        goto LABEL_65;
    }
    v92 = v106;
    v93 = v89 + 16LL * *v91 + 312;
  }
  else
  {
LABEL_65:
    v92 = v106;
    v93 = sub_1C47738(v106, System_IDisposable_TypeInfo, 0);
  }
  (*(void (__fastcall **)(__int64, _QWORD))v93)(v92, *(_QWORD *)(v93 + 8));
  v94 = BattleLogicFunction___c_TypeInfo;
  if ( !BattleLogicFunction___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BattleLogicFunction___c_TypeInfo);
    v94 = BattleLogicFunction___c_TypeInfo;
  }
  _9__162_0 = (System_Action_object__o *)v94->static_fields->__9__162_0;
  if ( !_9__162_0 )
  {
    if ( !v94->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v94);
      v94 = BattleLogicFunction___c_TypeInfo;
    }
    v96 = (Il2CppObject *)v94->static_fields->__9;
    _9__162_0 = (System_Action_object__o *)sub_1C715FC(System_Action_BattleServantData__TypeInfo);
    System_Action_object____ctor(_9__162_0, v96, Method_BattleLogicFunction___c__SetSubstituteAction_b__162_0__, 0);
    v97 = BattleLogicFunction___c_TypeInfo->static_fields;
    v97->__9__162_0 = (struct System_Action_BattleServantData__o *)_9__162_0;
    sub_1C71354((GrandQuestFolderBoardItem_o *)&v97->__9__162_0, (int32_t)_9__162_0, v98, v99, v100, v101, v102, v103);
  }
  BasicHelper__ForEach_object_(
    (System_Collections_Generic_IEnumerable_T__o *)source,
    (System_Action_T__o *)_9__162_0,
    (const MethodInfo_3136DF4 *)Method_BasicHelper_ForEach_BattleServantData___);
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

  if ( (byte_4CCA4F1 & 1) == 0 )
  {
    sub_1C713B0(&BattleActionData_TypeInfo);
    sub_1C713B0(&Method_DataManager_GetMasterData_SkillLvMaster___);
    sub_1C713B0(&Method_System_Collections_Generic_KeyValuePair_int__int___ctor__);
    sub_1C713B0(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_4CCA4F1 = 1;
  }
  pairAttackAndTarget = 0;
  Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3A5F158 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance
    || (Instance = (DataManager_o *)DataManager__GetMasterData_object_(
                                      Instance,
                                      (const MethodInfo_314B10C *)Method_DataManager_GetMasterData_SkillLvMaster___),
        v32 = (SkillLvMaster_o *)Instance,
        !attackArg)
    || (SideEffectList_k__BackingField = attackArg->fields._SideEffectList_k__BackingField) == 0 )
  {
LABEL_25:
    sub_1C71608(Instance, v12);
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
          (const MethodInfo_3746A90 *)Method_System_Collections_Generic_KeyValuePair_int__int___ctor__);
        if ( !mainAction )
          goto LABEL_25;
        v20 = pairAttackAndTarget;
        Instance = (DataManager_o *)BattleActionData__isReflectedAttackSideEffect(mainAction, v20, 0);
        if ( ((unsigned __int8)Instance & 1) == 0 )
        {
          Instance = (DataManager_o *)BattleServantData__getAttackSideEffectBuffList_46625872(
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
                v25 = (BattleActionData_o *)sub_1C715FC(BattleActionData_TypeInfo);
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
              sub_1C71610(Instance);
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
  if ( (byte_4CCA4EE & 1) == 0 )
  {
    sub_1C713B0(&Method_DataManager_GetMasterData_FunctionMaster___);
    sub_1C713B0(&Method_DataMasterBase_FunctionMaster__FunctionEntity__int__GetEntity__);
    sub_1C713B0(&int___TypeInfo);
    sub_1C713B0(&Method_System_Collections_Generic_List_int__AddRange__);
    sub_1C713B0(&Method_System_Collections_Generic_List_int__Add__);
    this = (BattleLogicFunction_o *)sub_1C713B0(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_4CCA4EE = 1;
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
      *(const MethodInfo_37F36F4 **)(*(_QWORD *)(v10[4] + 192LL) + 112LL));
  }
  else
  {
    LODWORD(this->fields.logic) = logic_low + 1;
    *((_DWORD *)&data->fields.rootfsm + logic_low) = targetId;
  }
  if ( !baseVals )
    goto LABEL_23;
  funcType = baseVals->fields.funcType;
  this = (BattleLogicFunction_o *)sub_1C71458(int___TypeInfo, 1);
  if ( !this )
    goto LABEL_23;
  if ( !LODWORD(this->fields.logic) )
    goto LABEL_24;
  LODWORD(this->fields.logictarget) = targetId;
  BattleActionData__AddHpDecreaseFuncTargets(action, funcType, (System_Int32_array *)this, 0);
  this = (BattleLogicFunction_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3A5F158 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !this
    || (MasterData_object = DataManager__GetMasterData_object_(
                              (DataManager_o *)this,
                              (const MethodInfo_314B10C *)Method_DataManager_GetMasterData_FunctionMaster___),
        (this = (BattleLogicFunction_o *)DataVals__GetDependFuncIdArray(baseVals, 0)) == 0) )
  {
LABEL_23:
    sub_1C71608(this, *(_QWORD *)&targetId);
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
                                        (const MethodInfo_3408E80 *)Method_DataMasterBase_FunctionMaster__FunctionEntity__int__GetEntity__);
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
          (const MethodInfo_37F3900 *)Method_System_Collections_Generic_List_int__AddRange__);
        BattleActionData__AddHpDecreaseFuncTargets(action, (int32_t)v18->fields.logic, (System_Int32_array *)v19, 0);
      }
      LODWORD(logic) = v15->fields.logic;
      if ( (__int64)++v16 >= (int)logic )
        return;
    }
LABEL_24:
    sub_1C71610(this);
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
  if ( (byte_4CCA4E8 & 1) == 0 )
  {
    sub_1C713B0(&StringLiteral_15476/*"WAR_BOARD_PROGRESS_OPPONENT_BUFF_TYPES"*/);
    this = (BattleLogicFunction_o *)sub_1C713B0(&StringLiteral_15477/*"WAR_BOARD_PROGRESS_SELF_BUFF_TYPES"*/);
    byte_4CCA4E8 = 1;
  }
  IsUpdateBuffProgressTurn = BattleLogicFunction__IsUpdateBuffProgressTurn(
                               this,
                               buffType,
                               (System_String_o *)StringLiteral_15477/*"WAR_BOARD_PROGRESS_SELF_BUFF_TYPES"*/,
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
            (System_String_o *)StringLiteral_15476/*"WAR_BOARD_PROGRESS_OPPONENT_BUFF_TYPES"*/,
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
  int32_t v13; // w3
  System_String_o *v14; // x4
  int32_t v15; // w5
  int64_t v16; // x6
  System_String_o *v17; // x7
  System_Action_object__o *v18; // x0
  System_Action_T__o *v19; // x21
  intptr_t *v20; // x8

  if ( (byte_4CCA523 & 1) == 0 )
  {
    sub_1C713B0(&System_Action_BattleSkillInfoData__TypeInfo);
    sub_1C713B0(&Method_BasicHelper_ForEach_BattleSkillInfoData___);
    sub_1C713B0(&Method_BattleLogicFunction___c__DisplayClass113_0__UpdateUserEquipSkillChargeTurn_b__0__);
    sub_1C713B0(&Method_BattleLogicFunction___c__DisplayClass113_0__UpdateUserEquipSkillChargeTurn_b__1__);
    sub_1C713B0(&BattleLogicFunction___c__DisplayClass113_0_TypeInfo);
    byte_4CCA523 = 1;
  }
  v7 = sub_1C715FC(BattleLogicFunction___c__DisplayClass113_0_TypeInfo);
  BattleLogicFunction___c__DisplayClass113_0___ctor((BattleLogicFunction___c__DisplayClass113_0_o *)v7, 0);
  data = this->fields.data;
  if ( !data
    || (data = (BattleData_o *)BattleData__getMasterSkillInfos(data, 0), !dataVals)
    || (v10 = (System_Collections_Generic_IEnumerable_T__o *)data,
        data = (BattleData_o *)DataVals__GetValue(dataVals, 0),
        !v7) )
  {
    sub_1C71608(data, v8);
  }
  *(_DWORD *)(v7 + 16) = (_DWORD)data;
  *(_DWORD *)(v7 + 20) = DataVals__GetValue2(dataVals, 0) - 1;
  TargetList = DataVals__GetTargetList(dataVals, 0);
  *(_QWORD *)(v7 + 24) = TargetList;
  sub_1C71354((GrandQuestFolderBoardItem_o *)(v7 + 24), (int32_t)TargetList, v12, v13, v14, v15, v16, v17);
  *(_BYTE *)(v7 + 32) = 0;
  v18 = (System_Action_object__o *)sub_1C715FC(System_Action_BattleSkillInfoData__TypeInfo);
  v19 = (System_Action_T__o *)v18;
  if ( isProgress )
    v20 = &Method_BattleLogicFunction___c__DisplayClass113_0__UpdateUserEquipSkillChargeTurn_b__0__;
  else
    v20 = &Method_BattleLogicFunction___c__DisplayClass113_0__UpdateUserEquipSkillChargeTurn_b__1__;
  System_Action_object____ctor(v18, (Il2CppObject *)v7, *v20, 0);
  BasicHelper__ForEach_object_(v10, v19, (const MethodInfo_3136DF4 *)Method_BasicHelper_ForEach_BattleSkillInfoData___);
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
  int32_t v11; // w3
  System_String_o *v12; // x4
  int32_t v13; // w5
  int64_t v14; // x6
  System_String_o *v15; // x7
  struct BattleActionData_o *lastActionData; // x8
  System_Collections_Generic_List_object__o *v17; // x19
  System_Action_object__o *monitor; // x20
  Il2CppObject *klass; // x21
  struct BattleLogicFunction___c_StaticFields *v20; // x0
  int32_t v21; // w2
  int32_t v22; // w3
  System_String_o *v23; // x4
  int32_t v24; // w5
  int64_t v25; // x6
  System_String_o *v26; // x7

  v4 = this;
  if ( (byte_4CCA543 & 1) == 0 )
  {
    sub_1C713B0(&System_Action_BattleServantData__TypeInfo);
    sub_1C713B0(&Method_BasicHelper_Any_BattleServantData___);
    sub_1C713B0(&System_Func_BattleServantData__bool__TypeInfo);
    sub_1C713B0(&Method_System_Collections_Generic_List_BattleServantData__ForEach__);
    sub_1C713B0(&Method_System_Collections_Generic_List_BattleServantData__get_Count__);
    sub_1C713B0(&Method_BattleLogicFunction___c__FunctionRevivalInDetail_b__120_7__);
    sub_1C713B0(&Method_BattleLogicFunction___c__FunctionRevivalInDetail_b__120_8__);
    this = (BattleLogicFunction_o *)sub_1C713B0(&BattleLogicFunction___c_TypeInfo);
    byte_4CCA543 = 1;
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
      _9__120_7 = (System_Func_object__bool__o *)sub_1C715FC(System_Func_BattleServantData__bool__TypeInfo);
      System_Func_object__bool____ctor(
        _9__120_7,
        v8,
        Method_BattleLogicFunction___c__FunctionRevivalInDetail_b__120_7__,
        0);
      static_fields = BattleLogicFunction___c_TypeInfo->static_fields;
      static_fields->__9__120_7 = (struct System_Func_BattleServantData__bool__o *)_9__120_7;
      sub_1C71354(
        (GrandQuestFolderBoardItem_o *)&static_fields->__9__120_7,
        (int32_t)_9__120_7,
        v10,
        v11,
        v12,
        v13,
        v14,
        v15);
    }
    this = (BattleLogicFunction_o *)BasicHelper__Any_object_(
                                      revivedSvtList,
                                      (System_Func_T__bool__o *)_9__120_7,
                                      (const MethodInfo_31341D4 *)Method_BasicHelper_Any_BattleServantData___);
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
    v17 = (System_Collections_Generic_List_object__o *)a2->fields.revivedSvtList;
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
      monitor = (System_Action_object__o *)sub_1C715FC(System_Action_BattleServantData__TypeInfo);
      System_Action_object____ctor(
        monitor,
        klass,
        Method_BattleLogicFunction___c__FunctionRevivalInDetail_b__120_8__,
        0);
      v20 = BattleLogicFunction___c_TypeInfo->static_fields;
      v20->__9__120_8 = (struct System_Action_BattleServantData__o *)monitor;
      sub_1C71354((GrandQuestFolderBoardItem_o *)&v20->__9__120_8, (int32_t)monitor, v21, v22, v23, v24, v25, v26);
    }
    if ( v17 )
    {
      System_Collections_Generic_List_object___ForEach(
        v17,
        (System_Action_T__o *)monitor,
        (const MethodInfo_3811158 *)Method_System_Collections_Generic_List_BattleServantData__ForEach__);
      return;
    }
LABEL_25:
    sub_1C71608(this, a2);
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
  int32_t v17; // w3
  System_String_o *v18; // x4
  int32_t v19; // w5
  int64_t v20; // x6
  System_String_o *v21; // x7
  struct BattleActionData_o *actionData; // x8
  int32_t v23; // w1
  BattleLogicFunction_HealFuncApplyArgs_o *healFuncApplyArgs; // x26
  bool v25; // w0
  const MethodInfo *v27; // [xsp+10h] [xbp-60h]

  if ( (byte_4CCA541 & 1) == 0 )
  {
    sub_1C713B0(&BattleActionData_TypeInfo);
    sub_1C713B0(&BattleLogicFunction_HealFuncApplyArgs_TypeInfo);
    sub_1C713B0(&StringLiteral_8763/*"MOTION_MAKE_REVIVE"*/);
    byte_4CCA541 = 1;
  }
  v13 = sub_1C715FC(BattleActionData_TypeInfo);
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
  v23 = StringLiteral_8763/*"MOTION_MAKE_REVIVE"*/;
  *(_QWORD *)(v13 + 72) = StringLiteral_8763/*"MOTION_MAKE_REVIVE"*/;
  sub_1C71354((GrandQuestFolderBoardItem_o *)(v13 + 72), v23, v16, v17, v18, v19, v20, v21);
  if ( !a6->fields.actionData
    || (*(_BYTE *)(v13 + 249) = a6->fields.actionData->fields.isForcedSpeedOne,
        healFuncApplyArgs = (BattleLogicFunction_HealFuncApplyArgs_o *)sub_1C715FC(BattleLogicFunction_HealFuncApplyArgs_TypeInfo),
        BattleLogicFunction_HealFuncApplyArgs___ctor(healFuncApplyArgs, 0),
        !healFuncApplyArgs)
    || (healFuncApplyArgs->fields._RevivalTargetId_k__BackingField = requiredRevivalTargetId,
        healFuncApplyArgs->fields._EntryIndex_k__BackingField = entryIndex,
        healFuncApplyArgs->fields._ExpelledUniqueId_k__BackingField = expelledUniqueId,
        (data = this->fields.data) == 0) )
  {
LABEL_13:
    sub_1C71608(data, v15);
  }
  v25 = BattleData__GetEntryIndex(data, target, 0) == entryIndex && BattleServantData__IsDeadKeepStanding(target, 0);
  healFuncApplyArgs->fields._DeadKeepStanding_k__BackingField = v25;
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
    v27);
  return (BattleActionData_o *)v13;
}


void BattleLogicFunction___FunctionRevivalInDetail_g__SetMissIfNoActions_120_4(
        BattleLogicFunction_o *this,
        BattleLogicFunction___c__DisplayClass120_0_o *a2,
        const MethodInfo *method)
{
  struct System_Collections_Generic_List_BattleServantData__o *revivedSvtList; // x8
  const MethodInfo *v5; // [xsp+0h] [xbp-30h]

  if ( (byte_4CCA542 & 1) == 0 )
  {
    this = (BattleLogicFunction_o *)sub_1C713B0(&Method_System_Collections_Generic_List_BattleServantData__get_Count__);
    byte_4CCA542 = 1;
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
    sub_1C71608(this, a2);
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
    sub_1C71608(data, target);
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
    sub_1C71608(this, buff);
  }
  return BattleBuffData__CreateDummyBuff((BattleBuffData_o *)this, buff, 0);
}


bool BattleLogicFunction___IsSituationForceTurnProgressExecutable_g__IsForceTurnProgress_69_0(
        bool isPartyTurn,
        BattleLogicFunction___c__DisplayClass69_0_o *a2,
        const MethodInfo *method)
{
  if ( !a2->fields.dataVals )
    sub_1C71608(isPartyTurn, a2);
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
    sub_1C71608(0, x);
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
  data = (BattleData_o *)BattleUtility__Abs_46729228(v21, 0);
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
    sub_1C71608(data, args);
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
    sub_1C71608(data, *(_QWORD *)&targetId);
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

  if ( (byte_4CCA529 & 1) == 0 )
  {
    sub_1C713B0(&BattleActionData_TypeInfo);
    sub_1C713B0(&BattleLogicFunction_HealFuncApplyArgs_TypeInfo);
    byte_4CCA529 = 1;
  }
  v13 = (BattleActionData_o *)sub_1C715FC(BattleActionData_TypeInfo);
  BattleActionData___ctor(v13, 0);
  data = this->fields.data;
  if ( !data
    || (data = (BattleData_o *)BattleData__getServantData(data, targetId, 0), !baseVals)
    || (v16 = (BattleServantData_o *)data,
        baseVals->fields.isShowForcedEffect = 1,
        Value = DataVals__GetValue(baseVals, 0),
        healFuncApplyArgs = (BattleLogicFunction_HealFuncApplyArgs_o *)sub_1C715FC(BattleLogicFunction_HealFuncApplyArgs_TypeInfo),
        BattleLogicFunction_HealFuncApplyArgs___ctor(healFuncApplyArgs, 0),
        !healFuncApplyArgs) )
  {
    sub_1C71608(data, v14);
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
  BattleLogicFunction_o *v12; // x21
  struct BattleLogicFunctionProcess_FunctionUnitCheck_o *funcUnit_k__BackingField; // x8
  DataVals_o *dataVals_k__BackingField; // x25
  BattleActionData_o *v15; // x23
  NpPointToTurnConvert_o *v16; // x28
  NpGaugeAbsorbResult_o *v17; // x27
  const MethodInfo *v18; // x4
  const MethodInfo *v19; // x4
  BattleActionData_o *v20; // x0
  float Turn_k__BackingField; // s0
  int32_t v22; // w6
  BattleActionData_o *v23; // x0
  const MethodInfo *v25; // [xsp+0h] [xbp-70h]

  v12 = this;
  if ( (byte_4CCA51E & 1) == 0 )
  {
    sub_1C713B0(&BattleActionData_TypeInfo);
    sub_1C713B0(&NpGaugeAbsorbResult_TypeInfo);
    this = (BattleLogicFunction_o *)sub_1C713B0(&NpPointToTurnConvert_TypeInfo);
    byte_4CCA51E = 1;
  }
  if ( !funcTarget )
    goto LABEL_12;
  funcUnit_k__BackingField = funcTarget->fields._funcUnit_k__BackingField;
  if ( !funcUnit_k__BackingField )
    goto LABEL_12;
  dataVals_k__BackingField = funcUnit_k__BackingField->fields._dataVals_k__BackingField;
  v15 = (BattleActionData_o *)sub_1C715FC(BattleActionData_TypeInfo);
  BattleActionData___ctor(v15, 0);
  v16 = (NpPointToTurnConvert_o *)sub_1C715FC(NpPointToTurnConvert_TypeInfo);
  NpPointToTurnConvert___ctor(v16, 0);
  v17 = (NpGaugeAbsorbResult_o *)sub_1C715FC(NpGaugeAbsorbResult_TypeInfo);
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
    sub_1C71608(this, *(_QWORD *)&targetId);
  }
  Turn_k__BackingField = v17->fields._Turn_k__BackingField;
  if ( Turn_k__BackingField == INFINITY )
    v22 = 0x80000000;
  else
    v22 = (int)Turn_k__BackingField;
  v23 = BattleLogicFunction__functionHastenNpTurn(
          v12,
          targetId,
          funcEnt,
          dataVals_k__BackingField,
          dataVals_k__BackingField->fields.funcIndex,
          isCommandSideEffect,
          v22,
          -1,
          v25);
  BattleActionData__addAction(v15, v23, 0);
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
  int32_t v41; // w3
  System_String_o *v42; // x4
  int32_t v43; // w5
  int64_t v44; // x6
  System_String_o *v45; // x7
  __int64 v46; // x22
  __int64 v47; // x20
  int32_t v48; // w20
  struct BattleData_o *v49; // x8
  struct BattleEntity_o *battle_ent; // x8
  int64_t userId; // x22
  int32_t eventId; // w20
  EventPointBuffMaster_o *v53; // x26
  int32_t EventPointGroupId; // w29
  UserEventPointEntity_o *EntityDefinitely; // x0
  int64_t value; // x20
  int logic; // w8
  int v58; // w10
  __int64 v59; // x9
  __int64 v60; // x11
  int v61; // w29
  BattleData_o *v62; // x20
  BattleBuffData_CheckIndividualitiesData_o *v63; // x22
  BattleBuffData_ParamAdd_o *v64; // x26
  __int64 v65; // x0
  int32_t v66; // w2
  int32_t v67; // w3
  System_String_o *v68; // x4
  int32_t v69; // w5
  int64_t v70; // x6
  System_String_o *v71; // x7
  __int64 v72; // x22
  __int64 v73; // x20
  const MethodInfo *v74; // x3
  int v75; // w20
  int32_t v76; // w22
  __int64 v77; // x20
  bool v78; // w8
  int v79; // w8
  System_Int32_array *TargetIndiv; // x0
  int32_t v81; // w2
  int32_t v82; // w3
  System_String_o *v83; // x4
  int32_t v84; // w5
  int64_t v85; // x6
  System_String_o *v86; // x7
  int32_t v87; // w2
  int32_t v88; // w3
  System_String_o *v89; // x4
  int32_t v90; // w5
  int64_t v91; // x6
  System_String_o *v92; // x7
  int32_t v93; // w20
  BattleBuffData_IntervalData_o *IntervalData; // x0
  int32_t v95; // w2
  int32_t v96; // w3
  System_String_o *v97; // x4
  int32_t v98; // w5
  int64_t v99; // x6
  System_String_o *v100; // x7
  System_Int32_array *ParamArray; // x0
  int32_t v102; // w2
  int32_t v103; // w3
  System_String_o *v104; // x4
  int32_t v105; // w5
  int64_t v106; // x6
  System_String_o *v107; // x7
  int32_t v108; // w20
  int32_t RelationId; // w22
  BattleBuffData_RelationOverwriteData_o *v110; // x20
  int32_t v111; // w2
  int32_t v112; // w3
  System_String_o *v113; // x4
  int32_t v114; // w5
  int64_t v115; // x6
  System_String_o *v116; // x7
  BattleDataDefine_c *v117; // x0
  int32_t v118; // w20
  bool v119; // w0
  float UpDownGiveHeal; // s8
  int32_t v121; // w0
  int v122; // s0
  int32_t v123; // w0
  int v124; // s0
  System_Int32_array *v125; // x0
  int32_t v126; // w2
  int32_t v127; // w3
  System_String_o *v128; // x4
  int32_t v129; // w5
  int64_t v130; // x6
  System_String_o *v131; // x7
  System_Int32_array *v132; // x0
  int32_t v133; // w2
  int32_t v134; // w3
  System_String_o *v135; // x4
  int32_t v136; // w5
  int64_t v137; // x6
  System_String_o *v138; // x7
  System_Int32_array *v139; // x0
  int32_t v140; // w2
  int32_t v141; // w3
  System_String_o *v142; // x4
  int32_t v143; // w5
  int64_t v144; // x6
  System_String_o *v145; // x7
  BattleBuffData_SaveArrayData_array *v146; // x0
  int32_t v147; // w2
  int32_t v148; // w3
  System_String_o *v149; // x4
  int32_t v150; // w5
  int64_t v151; // x6
  System_String_o *v152; // x7
  BattleBuffData_SaveArrayData_array *v153; // x0
  int32_t v154; // w2
  int32_t v155; // w3
  System_String_o *v156; // x4
  int32_t v157; // w5
  int64_t v158; // x6
  System_String_o *v159; // x7
  BattleBuffData_SaveArrayData_array *v160; // x0
  int32_t v161; // w2
  int32_t v162; // w3
  System_String_o *v163; // x4
  int32_t v164; // w5
  int64_t v165; // x6
  System_String_o *v166; // x7
  int32_t v167; // w20
  System_Int32_array *UpBuffRateBuffTypeList; // x0
  int32_t v169; // w2
  int32_t v170; // w3
  System_String_o *v171; // x4
  int32_t v172; // w5
  int64_t v173; // x6
  System_String_o *v174; // x7
  struct BattleLogicFunction_FunctionArgument_o *externalArg; // x8
  struct BattleData_o *v176; // x8
  System_Int32_array *AddIndividualty; // x0
  int32_t v178; // w2
  int32_t v179; // w3
  System_String_o *v180; // x4
  int32_t v181; // w5
  int64_t v182; // x6
  System_String_o *v183; // x7
  System_Int32_array *LinkageTargetIndividualty; // x0
  int32_t v185; // w2
  int32_t v186; // w3
  System_String_o *v187; // x4
  int32_t v188; // w5
  int64_t v189; // x6
  System_String_o *v190; // x7
  const MethodInfo *v191; // x3
  struct BattleData_o *v192; // x8
  System_Int32_array *ValsList; // x0
  int32_t v194; // w2
  int32_t v195; // w3
  System_String_o *v196; // x4
  int32_t v197; // w5
  int64_t v198; // x6
  System_String_o *v199; // x7
  int32_t v200; // w0
  int v201; // w8
  System_String_o *ParamStringFormat; // x0
  int32_t v203; // w2
  int32_t v204; // w3
  System_String_o *v205; // x4
  int32_t v206; // w5
  int64_t v207; // x6
  System_String_o *v208; // x7
  BattleBuffData_SubstituteData_o *v209; // x22
  __int64 v210; // x20
  int32_t v211; // w2
  int32_t v212; // w3
  System_String_o *v213; // x4
  int32_t v214; // w5
  int64_t v215; // x6
  System_String_o *v216; // x7
  __int64 v217; // x22
  __int64 v218; // x22
  __int64 v219; // x22
  __int64 v220; // x22
  __int64 v221; // x22
  __int64 v222; // x22
  __int64 v223; // x22
  int32_t v224; // w2
  int32_t v225; // w3
  System_String_o *v226; // x4
  int32_t v227; // w5
  int64_t v228; // x6
  System_String_o *v229; // x7
  __int64 v230; // x22
  __int64 v231; // x22
  int32_t v232; // w2
  int32_t v233; // w3
  System_String_o *v234; // x4
  int32_t v235; // w5
  int64_t v236; // x6
  System_String_o *v237; // x7
  __int64 v238; // x22
  int32_t v239; // w2
  int32_t v240; // w3
  System_String_o *v241; // x4
  int32_t v242; // w5
  int64_t v243; // x6
  System_String_o *v244; // x7
  __int64 v245; // x22
  __int64 v246; // x20
  int32_t v247; // w2
  int32_t v248; // w3
  System_String_o *v249; // x4
  int32_t v250; // w5
  int64_t v251; // x6
  System_String_o *v252; // x7
  int32_t v253; // w0
  int v254; // w8
  UnityEngine_Object_o *v255; // x20
  bool v256; // w22
  int32_t v257; // w20
  CommandCodeInfo_o *UserCommandCode; // x0
  int32_t v259; // w29
  BattleLogicFunction_o *v260; // x20
  int32_t v261; // w2
  int32_t v262; // w3
  System_String_o *v263; // x4
  int32_t v264; // w5
  int64_t v265; // x6
  System_String_o *v266; // x7
  BattleActionEffect_AddServantBuff_o *v267; // x26
  int32_t MaxHp; // w26
  int32_t v269; // w29
  bool v270; // w0
  __int64 v271; // x4
  char v272; // w20
  int32_t v273; // w22
  bool IsCommandSideEffect; // w0
  int32_t id; // w22
  System_Collections_Generic_List_int__o *v276; // x0
  System_String_o *i; // x0
  System_String_o *v278; // x0
  System_String_o *v279; // x0
  System_String_o *v280; // x0
  System_Int32_array *QuestIndividualities; // x0
  UnityEngine_Object_o *v282; // x29
  System_Int32_array *v283; // x22
  BattleLogicFunction_ProcListInArgs_o *v284; // x29
  BattlePerformance_o *perf; // x2
  struct BattleLogic_o *v286; // x8
  BattleActionEffect_AddChangeMaxHpBuff_o *v287; // x22
  BattleLogicFunction_o *v288; // x29
  int32_t v289; // w2
  int32_t v290; // w3
  System_String_o *v291; // x4
  int32_t v292; // w5
  int64_t v293; // x6
  System_String_o *v294; // x7
  BattleActionEffect_Base_o *v295; // x0
  UnityEngine_Object_o *v296; // x22
  int v297; // w8
  BattleLogicFunction_o *v298; // x22
  unsigned int v299; // w20
  System_Int32_array *ShortenMaxCountArray; // x0
  int32_t v301; // w2
  int32_t v302; // w3
  System_String_o *v303; // x4
  int32_t v304; // w5
  int64_t v305; // x6
  System_String_o *v306; // x7
  BattleActionData_o *v307; // x22
  System_Int32_array *TargetFunctionIndividuality; // x0
  int32_t v309; // w2
  int32_t v310; // w3
  System_String_o *v311; // x4
  int32_t v312; // w5
  int64_t v313; // x6
  System_String_o *v314; // x7
  System_Int32_array *TargetBuffIndividuality; // x0
  int32_t v316; // w2
  int32_t v317; // w3
  System_String_o *v318; // x4
  int32_t v319; // w5
  int64_t v320; // x6
  System_String_o *v321; // x7
  int32_t v322; // w20
  struct BattleData_o *v323; // x8
  BattleBuffData_o *buffData; // x20
  BattleBuffData_CheckIndividualitiesData_o *v325; // x22
  FunctionEntity_o *v326; // x2
  DataVals_o *v327; // x3
  int32_t v328; // w4
  const MethodInfo *v329; // x5
  bool v330; // w0
  BattleActionData_BuffData_o *v331; // x20
  const MethodInfo *v332; // x3
  UnityEngine_Object_o *v333; // x20
  const MethodInfo *v334; // x4
  __int64 v336; // x0
  MethodInfo *methoda; // [xsp+0h] [xbp-F0h]
  bool *v338; // [xsp+8h] [xbp-E8h]
  char v339; // [xsp+14h] [xbp-DCh]
  BattleActionData_o *userCommandCodeId; // [xsp+18h] [xbp-D8h]
  int userCommandCodeIda; // [xsp+18h] [xbp-D8h]
  int32_t funcIndex; // [xsp+20h] [xbp-D0h]
  int32_t treasureDvcId; // [xsp+24h] [xbp-CCh]
  BattleActionData_o *v344; // [xsp+28h] [xbp-C8h]
  int32_t v345; // [xsp+34h] [xbp-BCh]
  BattleActionData_o *v346; // [xsp+38h] [xbp-B8h]
  BattleLogicFunction_ProcListInArgs_o *v347; // [xsp+40h] [xbp-B0h]
  FunctionEntity_o *funcEnt; // [xsp+48h] [xbp-A8h]
  unsigned int uniqueId; // [xsp+54h] [xbp-9Ch]
  BattleActionData_MasterBuffData_o *v350; // [xsp+58h] [xbp-98h]
  int v351; // [xsp+64h] [xbp-8Ch] BYREF
  int32_t skillId[2]; // [xsp+68h] [xbp-88h] BYREF
  Il2CppObject *entity; // [xsp+70h] [xbp-80h] BYREF
  bool isEnemyTurn; // [xsp+78h] [xbp-78h] BYREF
  int32_t v355; // [xsp+7Ch] [xbp-74h] BYREF
  int32_t param; // [xsp+88h] [xbp-68h] BYREF
  bool isSelfTurn; // [xsp+8Ch] [xbp-64h] BYREF

  v9 = mainAction;
  v10 = this;
  if ( (byte_4CCA4F6 & 1) == 0 )
  {
    sub_1C713B0(&BattleActionEffect_AddChangeMaxHpBuff_TypeInfo);
    sub_1C713B0(&BattleActionEffect_AddServantBuff_TypeInfo);
    sub_1C713B0(&BattleActionData_TypeInfo);
    sub_1C713B0(&BattleDataDefine_TypeInfo);
    sub_1C713B0(&BattleBuffData_BuffData___TypeInfo);
    sub_1C713B0(&BattleBuffData_BuffData_TypeInfo);
    sub_1C713B0(&BuffList_TypeInfo);
    sub_1C713B0(&BattleBuffData_CheckIndividualitiesData_TypeInfo);
    sub_1C713B0(&Method_DataManager_GetMasterData_EventPointBuffMaster___);
    sub_1C713B0(&Method_DataManager_GetMasterData_UserEventPointMaster___);
    sub_1C713B0(&Method_DataManager_GetMaster_BuffTypeDetailMaster___);
    sub_1C713B0(&DataManager_TypeInfo);
    sub_1C713B0(&Method_DataMasterBase_BuffTypeDetailMaster__BuffTypeDetailEntity__int__TryGetEntity__);
    sub_1C713B0(&BattleBuffData_FieldAliveCondData_TypeInfo);
    sub_1C713B0(&int___TypeInfo);
    sub_1C713B0(&Method_System_Collections_Generic_List_int___ctor__);
    sub_1C713B0(&System_Collections_Generic_List_int__TypeInfo);
    sub_1C713B0(&BattleActionData_MasterBuffData_TypeInfo);
    sub_1C713B0(&System_Math_TypeInfo);
    sub_1C713B0(&UnityEngine_Object_TypeInfo);
    sub_1C713B0(&BattleBuffData_ParamAdd_TypeInfo);
    sub_1C713B0(&BattleBuffData_RelationOverwriteData_TypeInfo);
    sub_1C713B0(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_1C713B0(&BattleBuffData_SubstituteData_TypeInfo);
    sub_1C713B0(&StringLiteral_13361/*"TAMAMOCAT_STUN_BUFF_ID"*/);
    sub_1C713B0(&StringLiteral_13362/*"TAMAMOCAT_TREASURE_DEVICE_ID_"*/);
    this = (BattleLogicFunction_o *)sub_1C713B0(&StringLiteral_1/*""*/);
    byte_4CCA4F6 = 1;
  }
  isSelfTurn = 0;
  param = 0;
  v355 = 0;
  isEnemyTurn = 0;
  *(_QWORD *)skillId = 0;
  entity = 0;
  v351 = 0;
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
  v16 = (BattleActionData_o *)sub_1C715FC(BattleActionData_TypeInfo);
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
  v350 = (BattleActionData_MasterBuffData_o *)this;
  if ( !v14 )
    goto LABEL_343;
  this = (BattleLogicFunction_o *)BuffEntity__checkBuffType(v14, 142, 0);
  if ( ((unsigned __int8)this & 1) != 0 )
  {
    v350 = (BattleActionData_MasterBuffData_o *)sub_1C715FC(BattleActionData_MasterBuffData_TypeInfo);
    BattleActionData_MasterBuffData___ctor(v350, funcEnt, 0);
  }
  if ( !ServantData )
    goto LABEL_343;
  v345 = actorId;
  if ( !v350 )
    goto LABEL_343;
  v350->fields.targetId = ServantData->fields.uniqueId;
  v350->fields.functionIndex = funcIndex;
  v19 = sub_1C715FC(BattleBuffData_BuffData_TypeInfo);
  BattleBuffData_BuffData___ctor((BattleBuffData_BuffData_o *)v19, 0);
  if ( !v19 )
    goto LABEL_343;
  v344 = v16;
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
  v346 = v9;
  *(_DWORD *)(v19 + 68) = v345;
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
  v350->fields.popDelay = DataVals__GetParam(dataVals_k__BackingField, 65, 0, 0);
  v33 = v14->fields.type;
  if ( !BuffList_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(BuffList_TypeInfo);
  v338 = p_isEnemy;
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
  v39 = sub_1C71458(int___TypeInfo, 2);
  *(_QWORD *)(v19 + 40) = v39;
  sub_1C71354((GrandQuestFolderBoardItem_o *)(v19 + 40), v39, v40, v41, v42, v43, v44, v45);
  v46 = *(_QWORD *)(v19 + 40);
  this = (BattleLogicFunction_o *)DataVals__GetParam(dataVals_k__BackingField, 3, 0, 0);
  if ( !v46 )
    goto LABEL_343;
  if ( !*(_DWORD *)(v46 + 24) )
    goto LABEL_344;
  *(_DWORD *)(v46 + 32) = (_DWORD)this;
  v47 = *(_QWORD *)(v19 + 40);
  this = (BattleLogicFunction_o *)DataVals__GetParam(dataVals_k__BackingField, 4, 0, 0);
  if ( !v47 )
    goto LABEL_343;
  if ( *(_DWORD *)(v47 + 24) <= 1u )
    goto LABEL_344;
  v339 = v38;
  v347 = args;
  *(_DWORD *)(v47 + 36) = (_DWORD)this;
  v48 = v14->fields.type;
  if ( !BuffList_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(BuffList_TypeInfo);
  this = (BattleLogicFunction_o *)BuffList__CheckType(135, v48, 0);
  if ( ((unsigned __int8)this & 1) != 0 )
  {
    v49 = v10->fields.data;
    if ( !v49 )
      goto LABEL_343;
    battle_ent = v49->fields.battle_ent;
    if ( !battle_ent )
      goto LABEL_343;
    userId = battle_ent->fields.userId;
    eventId = battle_ent->fields.eventId;
    this = (BattleLogicFunction_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3A5F158 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !this )
      goto LABEL_343;
    this = (BattleLogicFunction_o *)DataManager__GetMasterData_object_(
                                      (DataManager_o *)this,
                                      (const MethodInfo_314B10C *)Method_DataManager_GetMasterData_EventPointBuffMaster___);
    if ( !this )
      goto LABEL_343;
    v53 = (EventPointBuffMaster_o *)this;
    EventPointGroupId = EventPointBuffMaster__GetEventPointGroupId(
                          (EventPointBuffMaster_o *)this,
                          eventId,
                          funcEnt->fields.id,
                          0,
                          0);
    this = (BattleLogicFunction_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3A5F158 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !this )
      goto LABEL_343;
    this = (BattleLogicFunction_o *)DataManager__GetMasterData_object_(
                                      (DataManager_o *)this,
                                      (const MethodInfo_314B10C *)Method_DataManager_GetMasterData_UserEventPointMaster___);
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
                                        v53,
                                        EntityDefinitely->fields.eventId,
                                        EventPointGroupId,
                                        0);
      if ( !this )
        goto LABEL_343;
      logic = (int)this->fields.logic;
      if ( logic >= 1 )
      {
        v58 = 0;
        v59 = 0;
        do
        {
          if ( logic == v58 )
            goto LABEL_344;
          v60 = *((_QWORD *)&this->fields.logictarget + v58);
          if ( !v60 )
            goto LABEL_343;
          if ( value < *(int *)(v60 + 28) )
            break;
          ++v58;
          v59 = v60;
        }
        while ( logic != v58 );
        if ( v59 )
          *(_DWORD *)(v19 + 28) += *(_DWORD *)(v59 + 64);
      }
    }
  }
  *(_DWORD *)(v19 + 416) = DataVals__GetParamAddIndividualityTargetType(dataVals_k__BackingField, 0);
  if ( DataVals__IsExistSnapShotParamAddIndv(dataVals_k__BackingField, 0) )
  {
    v61 = *(_DWORD *)(v19 + 28);
    v62 = v10->fields.data;
    v63 = (BattleBuffData_CheckIndividualitiesData_o *)sub_1C715FC(BattleBuffData_CheckIndividualitiesData_TypeInfo);
    BattleBuffData_CheckIndividualitiesData___ctor_45970628(v63, v17, ServantData, 0, 0, 0, 0, 1, 0);
    v64 = (BattleBuffData_ParamAdd_o *)sub_1C715FC(BattleBuffData_ParamAdd_TypeInfo);
    BattleBuffData_ParamAdd___ctor_46251632(v64, dataVals_k__BackingField, 0);
    *(_DWORD *)(v19 + 28) = BattleBuffData__GetTotalParamAddValue((BattleBuffData_BuffData_o *)v19, v62, v63, v64, 0)
                          + v61;
  }
  if ( DataVals__isParam(dataVals_k__BackingField, 26, 0) && DataVals__isParam(dataVals_k__BackingField, 27, 0) )
  {
    v65 = sub_1C71458(int___TypeInfo, 2);
    *(_QWORD *)(v19 + 104) = v65;
    sub_1C71354((GrandQuestFolderBoardItem_o *)(v19 + 104), v65, v66, v67, v68, v69, v70, v71);
    v72 = *(_QWORD *)(v19 + 104);
    this = (BattleLogicFunction_o *)DataVals__GetParam(dataVals_k__BackingField, 26, 0, 0);
    if ( !v72 )
      goto LABEL_343;
    if ( !*(_DWORD *)(v72 + 24) )
      goto LABEL_344;
    *(_DWORD *)(v72 + 32) = (_DWORD)this;
    v73 = *(_QWORD *)(v19 + 104);
    this = (BattleLogicFunction_o *)DataVals__GetParam(dataVals_k__BackingField, 27, 0, 0);
    if ( !v73 )
      goto LABEL_343;
    if ( *(_DWORD *)(v73 + 24) <= 1u )
      goto LABEL_344;
    *(_DWORD *)(v73 + 36) = (_DWORD)this;
  }
  *(_DWORD *)(v19 + 64) = DataVals__GetParam(dataVals_k__BackingField, 15, 0, 0);
  *(_DWORD *)(v19 + 344) = DataVals__GetClassIconAuraEffectId(dataVals_k__BackingField, 0);
  if ( DataVals__GetParam(dataVals_k__BackingField, 11, 0, 0) >= 1 )
    *(_DWORD *)(v19 + 60) = v345;
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
  if ( DataVals__TryGetParam(dataVals_k__BackingField, 216, &v355, 0) )
  {
    *(_DWORD *)(v19 + 452) = v355;
    if ( DataVals__GetParam(dataVals_k__BackingField, 217, 0, 0) >= 1 )
      *(_BYTE *)(v19 + 456) = 1;
  }
  v75 = *(_DWORD *)(v19 + 28);
  *(_DWORD *)(v19 + 28) = BattleLogicFunction__GetAddCondParamValue(v10, dataVals_k__BackingField, ServantData, v74)
                        + v75;
  if ( DataVals__isParam(dataVals_k__BackingField, 42, 0) )
  {
    v76 = DataVals__GetParam(dataVals_k__BackingField, 42, 0, 0);
    v77 = sub_1C715FC(BattleBuffData_FieldAliveCondData_TypeInfo);
    BattleBuffData_FieldAliveCondData___ctor((BattleBuffData_FieldAliveCondData_o *)v77, 0);
    if ( !v77 )
      goto LABEL_343;
    v78 = *v338;
    *(_BYTE *)(v77 + 17) = v76 > 0;
    *(_BYTE *)(v77 + 16) = v78;
    if ( !System_Math_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(System_Math_TypeInfo);
    if ( v76 >= 0 )
      v79 = v76;
    else
      v79 = -v76;
    *(_DWORD *)(v77 + 20) = v79;
    TargetIndiv = BuffEntity__GetTargetIndiv(v14, 0);
    *(_QWORD *)(v77 + 24) = TargetIndiv;
    sub_1C71354((GrandQuestFolderBoardItem_o *)(v77 + 24), (int32_t)TargetIndiv, v81, v82, v83, v84, v85, v86);
    *(_BYTE *)(v77 + 32) = BuffEntity__IsIncludeIgnoreIndividuality(v14, 0);
    *(_QWORD *)(v19 + 152) = v77;
    sub_1C71354((GrandQuestFolderBoardItem_o *)(v19 + 152), v77, v87, v88, v89, v90, v91, v92);
    v347->fields.updateField = 1;
  }
  v93 = v14->fields.type;
  if ( !BuffList_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(BuffList_TypeInfo);
  if ( BuffList__IsIntervalPossibleBuff(v93, 0) )
  {
    IntervalData = DataVals__GetIntervalData(dataVals_k__BackingField, 0);
    *(_QWORD *)(v19 + 360) = IntervalData;
    sub_1C71354((GrandQuestFolderBoardItem_o *)(v19 + 360), (int32_t)IntervalData, v95, v96, v97, v98, v99, v100);
  }
  if ( BattleBuffData__CheckInvalidSacrificeIndiv((BattleBuffData_BuffData_o *)v19, 0) )
    v347->fields.updateField = 1;
  ParamArray = DataVals__GetParamArray(dataVals_k__BackingField, 115, 0);
  *(_QWORD *)(v19 + 328) = ParamArray;
  sub_1C71354((GrandQuestFolderBoardItem_o *)(v19 + 328), (int32_t)ParamArray, v102, v103, v104, v105, v106, v107);
  *(_DWORD *)(v19 + 208) = BuffEntity__GetCardEffectId(v14, 0);
  v108 = v14->fields.type;
  if ( !BuffList_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(BuffList_TypeInfo);
  if ( BuffList__CheckType(144, v108, 0) )
  {
    RelationId = BuffEntity__getRelationId(v14, 0);
    v110 = (BattleBuffData_RelationOverwriteData_o *)sub_1C715FC(BattleBuffData_RelationOverwriteData_TypeInfo);
    BattleBuffData_RelationOverwriteData___ctor(v110, 0);
    if ( RelationId >= 1 )
    {
      this = (BattleLogicFunction_o *)BuffEntity__getRelationId(v14, 0);
      if ( !v110 )
        goto LABEL_343;
      v110->fields.id = (int)this;
      v117 = BattleDataDefine_TypeInfo;
      if ( !BattleDataDefine_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(BattleDataDefine_TypeInfo);
        v117 = BattleDataDefine_TypeInfo;
      }
      v110->fields.atkPriority = BuffEntity__getAtkRelationPriority(
                                   v14,
                                   v117->static_fields->OVERWRITE_ATK_RATE_PRIORITY,
                                   0);
      v110->fields.defPriority = BuffEntity__getDefRelationPriority(
                                   v14,
                                   BattleDataDefine_TypeInfo->static_fields->OVERWRITE_DEF_RATE_PRIORITY,
                                   0);
    }
    *(_QWORD *)(v19 + 168) = v110;
    sub_1C71354((GrandQuestFolderBoardItem_o *)(v19 + 168), (int32_t)v110, v111, v112, v113, v114, v115, v116);
  }
  v118 = v14->fields.type;
  if ( !BuffList_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(BuffList_TypeInfo);
  if ( BuffList__CheckType(154, v118, 0) )
  {
    this = (BattleLogicFunction_o *)BattleServantData__get_BuffData(ServantData, 0);
    if ( !this )
      goto LABEL_343;
    this = (BattleLogicFunction_o *)this->fields.wkStr;
    if ( !this )
      goto LABEL_343;
    BattleBuffData_SkillRankChangeData__UpdateAddRightAfter((BattleBuffData_SkillRankChangeData_o *)this, 1, 0);
    BattleActionData_BuffData__OnUpdateBuffType((BattleActionData_BuffData_o *)v350, 1, 0);
  }
  v119 = BuffEntity__checkBuffType(v14, 7, 0);
  if ( v17 && v119 )
  {
    UpDownGiveHeal = BattleServantData__getUpDownGiveHeal(v17, ServantData, 0);
    v121 = BattleUtility__FloorToInt(UpDownGiveHeal * (float)*(int *)(v19 + 28), 0);
    v122 = *(_DWORD *)(v19 + 52);
    *(_DWORD *)(v19 + 28) = v121;
    v123 = BattleUtility__FloorToInt(UpDownGiveHeal * (float)v122, 0);
    v124 = *(_DWORD *)(v19 + 56);
    *(_DWORD *)(v19 + 52) = v123;
    *(_DWORD *)(v19 + 56) = BattleUtility__FloorToInt(UpDownGiveHeal * (float)v124, 0);
    BattleServantData__getIndividualities(v17, 0, 1, 0, 1, 0);
  }
  *(_BYTE *)(v19 + 32) = 0;
  *(_BYTE *)(v19 + 33) = BattleLogicFunction_ProcListInArgs__get_IsPassive(v347, 0);
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
    v125 = DataVals__GetParamArray(dataVals_k__BackingField, 70, 0);
    *(_QWORD *)(v19 + 224) = v125;
    sub_1C71354((GrandQuestFolderBoardItem_o *)(v19 + 224), (int32_t)v125, v126, v127, v128, v129, v130, v131);
    v132 = DataVals__GetParamArray(dataVals_k__BackingField, 71, 0);
    *(_QWORD *)(v19 + 232) = v132;
    sub_1C71354((GrandQuestFolderBoardItem_o *)(v19 + 232), (int32_t)v132, v133, v134, v135, v136, v137, v138);
    v139 = DataVals__GetParamArray(dataVals_k__BackingField, 72, 0);
    *(_QWORD *)(v19 + 240) = v139;
    sub_1C71354((GrandQuestFolderBoardItem_o *)(v19 + 240), (int32_t)v139, v140, v141, v142, v143, v144, v145);
    v146 = DataVals__GetParamAddIndividualityAndCheckArrayData(dataVals_k__BackingField, 195, 0);
    *(_QWORD *)(v19 + 424) = v146;
    sub_1C71354((GrandQuestFolderBoardItem_o *)(v19 + 424), (int32_t)v146, v147, v148, v149, v150, v151, v152);
    v153 = DataVals__GetParamAddIndividualityAndCheckArrayData(dataVals_k__BackingField, 196, 0);
    *(_QWORD *)(v19 + 432) = v153;
    sub_1C71354((GrandQuestFolderBoardItem_o *)(v19 + 432), (int32_t)v153, v154, v155, v156, v157, v158, v159);
    v160 = DataVals__GetParamAddIndividualityAndCheckArrayData(dataVals_k__BackingField, 197, 0);
    *(_QWORD *)(v19 + 440) = v160;
    sub_1C71354((GrandQuestFolderBoardItem_o *)(v19 + 440), (int32_t)v160, v161, v162, v163, v164, v165, v166);
    *(_DWORD *)(v19 + 248) = DataVals__GetParam(dataVals_k__BackingField, 73, 0, 0);
    *(_DWORD *)(v19 + 252) = DataVals__GetParam(dataVals_k__BackingField, 60, 0, 0);
    *(_DWORD *)(v19 + 268) = DataVals__GetParam(dataVals_k__BackingField, 61, 0, 0);
  }
  if ( DataVals__IsParamAddBattlePoint(dataVals_k__BackingField, 0) )
  {
    *(_DWORD *)(v19 + 384) = DataVals__GetParam(dataVals_k__BackingField, 182, 0, 0);
    *(_DWORD *)(v19 + 388) = DataVals__GetParam(dataVals_k__BackingField, 183, 0, 0);
  }
  v167 = v14->fields.type;
  if ( !BuffList_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(BuffList_TypeInfo);
  if ( BuffList__CheckType(162, v167, 0) )
  {
    UpBuffRateBuffTypeList = BuffEntity__GetUpBuffRateBuffTypeList(v14, 0);
    *(_QWORD *)(v19 + 256) = UpBuffRateBuffTypeList;
    sub_1C71354(
      (GrandQuestFolderBoardItem_o *)(v19 + 256),
      (int32_t)UpBuffRateBuffTypeList,
      v169,
      v170,
      v171,
      v172,
      v173,
      v174);
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
    externalArg = v347->fields.externalArg;
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
        this = (BattleLogicFunction_o *)DataManager__GetMaster_object_((const MethodInfo_314B0B8 *)Method_DataManager_GetMaster_BuffTypeDetailMaster___);
        if ( !this )
          goto LABEL_343;
        this = (BattleLogicFunction_o *)DataMasterBase_object__object__int___TryGetEntity(
                                          (DataMasterBase_TMaster__TEntity__PKType__o *)this,
                                          &entity,
                                          v14->fields.type,
                                          (const MethodInfo_3408ECC *)Method_DataMasterBase_BuffTypeDetailMaster__BuffTypeDetailEntity__int__TryGetEntity__);
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
    v176 = v10->fields.data;
    if ( !v176 )
      goto LABEL_343;
    this = (BattleLogicFunction_o *)v176->fields.battleEvent;
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
    sub_1C71354(
      (GrandQuestFolderBoardItem_o *)(v19 + 120),
      (int32_t)AddIndividualty,
      v178,
      v179,
      v180,
      v181,
      v182,
      v183);
  }
  if ( DataVals__IsAddLinkageTargetIndividualty(dataVals_k__BackingField, 0) )
  {
    LinkageTargetIndividualty = DataVals__GetLinkageTargetIndividualty(dataVals_k__BackingField, 0);
    *(_QWORD *)(v19 + 128) = LinkageTargetIndividualty;
    sub_1C71354(
      (GrandQuestFolderBoardItem_o *)(v19 + 128),
      (int32_t)LinkageTargetIndividualty,
      v185,
      v186,
      v187,
      v188,
      v189,
      v190);
  }
  this = (BattleLogicFunction_o *)funcTarget->fields._funcUnit_k__BackingField;
  if ( !this )
    goto LABEL_343;
  if ( BattleLogicFunctionProcess_FunctionUnitCheck__HasLinkedFuncUnit(
         (BattleLogicFunctionProcess_FunctionUnitCheck_o *)this,
         0)
    && DataVals__IsBehaveAsFamilyBuff(dataVals_k__BackingField, 0) )
  {
    BattleLogicFunction__BehaveLinkageBuffAsFamily(v10, (BattleBuffData_BuffData_o *)v19, funcTarget, v191);
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
    v192 = v10->fields.data;
    if ( !v192 )
      goto LABEL_343;
    this = (BattleLogicFunction_o *)v192->fields.battleEvent;
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
  sub_1C71354((GrandQuestFolderBoardItem_o *)(v19 + 304), (int32_t)ValsList, v194, v195, v196, v197, v198, v199);
  v200 = DataVals__GetParam(dataVals_k__BackingField, 5, 0, 0);
  if ( v200 )
    v201 = v200;
  else
    v201 = 1000;
  *(_DWORD *)(v19 + 48) = v201;
  *(_BYTE *)(v19 + 465) = DataVals__GetParam(dataVals_k__BackingField, 228, 0, 0) == 1;
  *(_BYTE *)(v19 + 480) = DataVals__GetParam(dataVals_k__BackingField, 230, 0, 0) == 1;
  *(_BYTE *)(v19 + 481) = DataVals__GetParam(dataVals_k__BackingField, 231, 0, 0) == 1;
  ParamStringFormat = DataVals__GetParamStringFormat(
                        dataVals_k__BackingField,
                        229,
                        (System_String_o *)StringLiteral_1/*""*/,
                        0);
  *(_QWORD *)(v19 + 472) = ParamStringFormat;
  sub_1C71354(
    (GrandQuestFolderBoardItem_o *)(v19 + 472),
    (int32_t)ParamStringFormat,
    v203,
    v204,
    v205,
    v206,
    v207,
    v208);
  *(_DWORD *)(v19 + 484) = DataVals__GetParam(dataVals_k__BackingField, 237, 0, 0);
  *(_DWORD *)(v19 + 488) = DataVals__GetParam(dataVals_k__BackingField, 239, 0, 0);
  *(_BYTE *)(v19 + 492) = DataVals__isUnaffected(dataVals_k__BackingField, 0);
  DataVals__SetUpHatePriority(dataVals_k__BackingField, (BattleBuffData_BuffData_o *)v19, 0);
  BattleBuffData_BuffData__SetJudgeUseEveryTimeFlag((BattleBuffData_BuffData_o *)v19, dataVals_k__BackingField, 0);
  if ( BattleBuffData_BuffData__IsSubstituteBuff((BattleBuffData_BuffData_o *)v19, 0) )
  {
    v209 = (BattleBuffData_SubstituteData_o *)sub_1C715FC(BattleBuffData_SubstituteData_TypeInfo);
    BattleBuffData_SubstituteData___ctor(v209, 0);
    v210 = v19 + 504;
    *(_QWORD *)(v19 + 504) = v209;
    sub_1C71354((GrandQuestFolderBoardItem_o *)(v19 + 504), (int32_t)v209, v211, v212, v213, v214, v215, v216);
    v217 = *(_QWORD *)(v19 + 504);
    this = (BattleLogicFunction_o *)DataVals__GetSubstituteRate(dataVals_k__BackingField, 0);
    if ( !v217 )
      goto LABEL_343;
    *(float *)(v217 + 16) = (float)(int)this / 1000.0;
    v218 = *(_QWORD *)v210;
    this = (BattleLogicFunction_o *)DataVals__GetSubstituteResist(dataVals_k__BackingField, 0);
    if ( !v218 )
      goto LABEL_343;
    *(float *)(v218 + 20) = (float)(int)this / 1000.0;
    v219 = *(_QWORD *)v210;
    this = (BattleLogicFunction_o *)DataVals__UseSvtResistRate(dataVals_k__BackingField, 0);
    if ( !v219 )
      goto LABEL_343;
    *(_BYTE *)(v219 + 24) = (unsigned __int8)this & 1;
    v220 = *(_QWORD *)v210;
    this = (BattleLogicFunction_o *)DataVals__UseBuffResistRate(dataVals_k__BackingField, 0);
    if ( !v220 )
      goto LABEL_343;
    *(_BYTE *)(v220 + 25) = (unsigned __int8)this & 1;
    this = (BattleLogicFunction_o *)DataVals__TryGetSubstituteSkillId(dataVals_k__BackingField, &skillId[1], 0);
    if ( ((unsigned __int8)this & 1) != 0 )
    {
      if ( !*(_QWORD *)v210 )
        goto LABEL_343;
      v221 = *(_QWORD *)(*(_QWORD *)v210 + 32LL);
      if ( !v221 )
        goto LABEL_343;
      *(_DWORD *)(v221 + 16) = skillId[1];
      *(_DWORD *)(v221 + 20) = DataVals__GetSubstituteSkillLv(dataVals_k__BackingField, 0);
    }
    this = (BattleLogicFunction_o *)DataVals__TryGetResistSkillId(dataVals_k__BackingField, skillId, 0);
    if ( ((unsigned __int8)this & 1) != 0 )
    {
      if ( !*(_QWORD *)v210 )
        goto LABEL_343;
      v222 = *(_QWORD *)(*(_QWORD *)v210 + 40LL);
      if ( !v222 )
        goto LABEL_343;
      *(_DWORD *)(v222 + 16) = skillId[0];
      this = (BattleLogicFunction_o *)DataVals__GetResistSkillLv(dataVals_k__BackingField, 0);
      *(_DWORD *)(v222 + 20) = (_DWORD)this;
    }
    if ( !*(_QWORD *)v210 )
      goto LABEL_343;
    v223 = *(_QWORD *)(*(_QWORD *)v210 + 48LL);
    this = (BattleLogicFunction_o *)DataVals__GetSubstitutePopupText(dataVals_k__BackingField, 0);
    if ( !v223 )
      goto LABEL_343;
    *(_QWORD *)(v223 + 16) = this;
    sub_1C71354((GrandQuestFolderBoardItem_o *)(v223 + 16), (int32_t)this, v224, v225, v226, v227, v228, v229);
    if ( !*(_QWORD *)v210 )
      goto LABEL_343;
    v230 = *(_QWORD *)(*(_QWORD *)v210 + 48LL);
    this = (BattleLogicFunction_o *)DataVals__GetSubstitutePopupIconId(dataVals_k__BackingField, 0);
    if ( !v230 )
      goto LABEL_343;
    *(_DWORD *)(v230 + 24) = (_DWORD)this;
    if ( !*(_QWORD *)v210 )
      goto LABEL_343;
    v231 = *(_QWORD *)(*(_QWORD *)v210 + 48LL);
    this = (BattleLogicFunction_o *)DataVals__GetSubstituteEffectList(dataVals_k__BackingField, 0);
    if ( !v231 )
      goto LABEL_343;
    *(_QWORD *)(v231 + 32) = this;
    sub_1C71354((GrandQuestFolderBoardItem_o *)(v231 + 32), (int32_t)this, v232, v233, v234, v235, v236, v237);
    if ( !*(_QWORD *)v210 )
      goto LABEL_343;
    v238 = *(_QWORD *)(*(_QWORD *)v210 + 56LL);
    this = (BattleLogicFunction_o *)DataVals__GetResistPopupText(dataVals_k__BackingField, 0);
    if ( !v238 )
      goto LABEL_343;
    *(_QWORD *)(v238 + 16) = this;
    sub_1C71354((GrandQuestFolderBoardItem_o *)(v238 + 16), (int32_t)this, v239, v240, v241, v242, v243, v244);
    if ( !*(_QWORD *)v210 )
      goto LABEL_343;
    v245 = *(_QWORD *)(*(_QWORD *)v210 + 56LL);
    this = (BattleLogicFunction_o *)DataVals__GetResistPopupIconId(dataVals_k__BackingField, 0);
    if ( !v245 )
      goto LABEL_343;
    *(_DWORD *)(v245 + 24) = (_DWORD)this;
    if ( !*(_QWORD *)v210 )
      goto LABEL_343;
    v246 = *(_QWORD *)(*(_QWORD *)v210 + 56LL);
    this = (BattleLogicFunction_o *)DataVals__GetResistEffectList(dataVals_k__BackingField, 0);
    if ( !v246 )
      goto LABEL_343;
    *(_QWORD *)(v246 + 32) = this;
    sub_1C71354((GrandQuestFolderBoardItem_o *)(v246 + 32), (int32_t)this, v247, v248, v249, v250, v251, v252);
  }
  *(_DWORD *)(v19 + 516) = DataVals__GetParam(dataVals_k__BackingField, 261, 0, 0);
  v253 = DataVals__GetParam(dataVals_k__BackingField, 262, 0, 0);
  v254 = *(_DWORD *)(v19 + 60);
  *(_BYTE *)(v19 + 520) = v253 > 0;
  if ( v254 < 1 )
    goto LABEL_238;
  v255 = (UnityEngine_Object_o *)v10->fields.logic;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(v255, 0, 0) )
  {
    this = (BattleLogicFunction_o *)v10->fields.logic;
    if ( !this )
      goto LABEL_343;
    v256 = BattleLogic__checkInField((BattleLogic_o *)this, *(_DWORD *)(v19 + 60), 0);
  }
  else
  {
LABEL_238:
    v256 = 1;
  }
  v257 = v14->fields.type;
  if ( !BuffList_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(BuffList_TypeInfo);
  if ( BuffList__CheckAccumulation(v257, 0) )
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
  *(_QWORD *)(v19 + 348) = *(_QWORD *)&v346->fields.commandAssistId;
  ((void (__fastcall *)(BattleLogicFunctionProcess_FunctionTargetCheck_o *, __int64, const MethodInfo *))funcTarget->klass->vtable._7_ApplyPrevSaveBuffData.methodPtr)(
    funcTarget,
    v19,
    funcTarget->klass->vtable._7_ApplyPrevSaveBuffData.method);
  v259 = treasureDvcId;
  if ( ((unsigned __int8)v339 & v347->fields._IsTreasureDvc_k__BackingField) != 0 )
  {
    this = (BattleLogicFunction_o *)sub_1C71458(BattleBuffData_BuffData___TypeInfo, 1);
    if ( !this )
      goto LABEL_343;
    v260 = this;
    this = (BattleLogicFunction_o *)sub_1C714EC(v19, this->klass->_1.element_class);
    if ( !this )
      goto LABEL_345;
    if ( !LODWORD(v260->fields.logic) )
      goto LABEL_344;
    v260->fields.logictarget = (struct BattleLogicTarget_o *)v19;
    sub_1C71354((GrandQuestFolderBoardItem_o *)&v260->fields.logictarget, v19, v261, v262, v263, v264, v265, v266);
    v267 = (BattleActionEffect_AddServantBuff_o *)sub_1C715FC(BattleActionEffect_AddServantBuff_TypeInfo);
    BattleActionEffect_AddServantBuff___ctor(v267, uniqueId, (BattleBuffData_BuffData_array *)v260, 0);
    BattleActionData_BuffData__SetActionEffectProc(
      (BattleActionData_BuffData_o *)v350,
      (BattleActionEffect_Base_o *)v267,
      0);
    v346->fields.OverwriteTdMotionId = BattleServantData__getTreasureDvcMotionId(ServantData, 0);
  }
  if ( BuffEntity__checkBuffType(v14, 41, 0) )
    MaxHp = BattleServantData__getMaxHp(ServantData, 0);
  else
    MaxHp = -1;
  userCommandCodeIda = ((__int64 (__fastcall *)(BattleServantData_o *, const MethodInfo *))ServantData->klass->vtable._13_get_resultHp.methodPtr)(
                         ServantData,
                         ServantData->klass->vtable._13_get_resultHp.method);
  if ( !v256 )
    goto LABEL_261;
  v269 = v14->fields.type;
  if ( !BuffList_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(BuffList_TypeInfo);
  v270 = BuffList__CheckUpdateHp(v269, 0);
  v259 = treasureDvcId;
  if ( v270 )
  {
    v350->fields.procType = 2;
    if ( BattleServantData__isLogicResultAlive(ServantData, 0) )
    {
      v271 = 1;
    }
    else
    {
      if ( BattleServantData__isGuts(ServantData, 0) )
      {
        v273 = ServantData->fields.uniqueId;
        IsCommandSideEffect = BattleLogicFunction_ProcListInArgs__get_IsCommandSideEffect(v347, 0);
        mainAction = BattleLogicFunction__getNoEffectObject(
                       v10,
                       v273,
                       funcIndex,
                       dataVals_k__BackingField,
                       IsCommandSideEffect,
                       0,
                       0,
                       0,
                       methoda);
        this = (BattleLogicFunction_o *)v344;
        if ( !v344 )
          goto LABEL_343;
        BattleActionData__addAction(v344, mainAction, 0);
      }
      v271 = 0;
    }
    ((void (__fastcall *)(BattleLogicFunctionProcess_FunctionTargetCheck_o *, BattleActionData_MasterBuffData_o *, __int64, __int64, __int64, const MethodInfo *))funcTarget->klass->vtable._9_AddBuff.methodPtr)(
      funcTarget,
      v350,
      v19,
      1,
      v271,
      funcTarget->klass->vtable._9_AddBuff.method);
    v272 = 0;
  }
  else
  {
LABEL_261:
    ((void (__fastcall *)(BattleLogicFunctionProcess_FunctionTargetCheck_o *, BattleActionData_MasterBuffData_o *, __int64, bool, _QWORD, const MethodInfo *))funcTarget->klass->vtable._9_AddBuff.methodPtr)(
      funcTarget,
      v350,
      v19,
      v256,
      0,
      funcTarget->klass->vtable._9_AddBuff.method);
    v272 = 1;
  }
  id = v14->fields.id;
  if ( id == ConstantMaster__getValue((System_String_o *)StringLiteral_13361/*"TAMAMOCAT_STUN_BUFF_ID"*/, 0) )
  {
    v276 = (System_Collections_Generic_List_int__o *)sub_1C715FC(System_Collections_Generic_List_int__TypeInfo);
    System_Collections_Generic_List_int____ctor(
      v276,
      (const MethodInfo_37F2EA0 *)Method_System_Collections_Generic_List_int___ctor__);
    v351 = 1;
    for ( i = System_Int32__ToString((int32_t)&v351, 0); ; i = System_Int32__ToString((int32_t)&v351, 0) )
    {
      v278 = System_String__Concat_64031724((System_String_o *)StringLiteral_13362/*"TAMAMOCAT_TREASURE_DEVICE_ID_"*/, i, 0);
      if ( ConstantMaster__getValue(v278, 0) == -1 )
        break;
      v279 = System_Int32__ToString((int32_t)&v351, 0);
      v280 = System_String__Concat_64031724((System_String_o *)StringLiteral_13362/*"TAMAMOCAT_TREASURE_DEVICE_ID_"*/, v279, 0);
      this = (BattleLogicFunction_o *)ConstantMaster__getValue(v280, 0);
      if ( (_DWORD)this == v259 )
      {
        if ( !v17 )
          goto LABEL_343;
        BattleServantData__SetIsSleepWaitMode(v17, 1, 0);
      }
      ++v351;
    }
  }
  this = (BattleLogicFunction_o *)v10->fields.data;
  if ( !this )
    goto LABEL_343;
  QuestIndividualities = BattleData__getQuestIndividualities((BattleData_o *)this, 0);
  v282 = (UnityEngine_Object_o *)v10->fields.logic;
  v283 = QuestIndividualities;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  this = (BattleLogicFunction_o *)UnityEngine_Object__op_Inequality(v282, 0, 0);
  v284 = v347;
  perf = 0;
  if ( ((unsigned __int8)this & 1) != 0 )
  {
    v286 = v10->fields.logic;
    if ( !v286 )
      goto LABEL_343;
    perf = v286->fields.perf;
  }
  BattleServantData__updateConditionsBuff(ServantData, v283, perf, 0, 0, 0);
  if ( (v272 & 1) == 0 )
  {
    this = (BattleLogicFunction_o *)v344;
    if ( !v344 )
      goto LABEL_343;
    BattleActionData__addReflectLogicResultServantId(v344, uniqueId, 0);
    v287 = (BattleActionEffect_AddChangeMaxHpBuff_o *)sub_1C715FC(BattleActionEffect_AddChangeMaxHpBuff_TypeInfo);
    BattleActionEffect_AddChangeMaxHpBuff___ctor(v287, 0);
    this = (BattleLogicFunction_o *)sub_1C71458(BattleBuffData_BuffData___TypeInfo, 1);
    if ( !this )
      goto LABEL_343;
    v288 = this;
    this = (BattleLogicFunction_o *)sub_1C714EC(v19, this->klass->_1.element_class);
    if ( this )
    {
      if ( !LODWORD(v288->fields.logic) )
        goto LABEL_344;
      v288->fields.logictarget = (struct BattleLogicTarget_o *)v19;
      sub_1C71354((GrandQuestFolderBoardItem_o *)&v288->fields.logictarget, v19, v289, v290, v291, v292, v293, v294);
      this = (BattleLogicFunction_o *)((__int64 (__fastcall *)(BattleServantData_o *, const MethodInfo *))ServantData->klass->vtable._13_get_resultHp.methodPtr)(
                                        ServantData,
                                        ServantData->klass->vtable._13_get_resultHp.method);
      if ( !v287 )
        goto LABEL_343;
      v295 = (BattleActionEffect_Base_o *)((__int64 (__fastcall *)(BattleActionEffect_AddChangeMaxHpBuff_o *, BattleLogicFunction_o *, _QWORD, _QWORD, const MethodInfo *))v287->klass->vtable._7_InitBuff.methodPtr)(
                                            v287,
                                            v288,
                                            uniqueId,
                                            (unsigned int)((_DWORD)this - userCommandCodeIda),
                                            v287->klass->vtable._7_InitBuff.method);
      BattleActionData_BuffData__SetActionEffectProc((BattleActionData_BuffData_o *)v350, v295, 0);
      v284 = v347;
      goto LABEL_288;
    }
LABEL_345:
    v336 = sub_1C7162C(this);
    sub_1C714D8(v336, 0);
  }
LABEL_288:
  if ( BuffEntity__checkBuffType(v14, 133, 0) || *(_QWORD *)(v19 + 312) )
  {
    v296 = (UnityEngine_Object_o *)v10->fields.logic;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    if ( UnityEngine_Object__op_Inequality(v296, 0, 0) )
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
    v297 = (int)this->fields.logic;
    v298 = this;
    if ( v297 >= 1 )
    {
      v299 = 0;
      while ( v299 < v297 )
      {
        this = (BattleLogicFunction_o *)*((_QWORD *)&v298->fields.logictarget + (int)v299);
        if ( !this )
          goto LABEL_343;
        BattleServantData__updateBuff((BattleServantData_o *)this, 1, 1, 0);
        v297 = (int)v298->fields.logic;
        if ( (int)++v299 >= v297 )
          goto LABEL_302;
      }
LABEL_344:
      sub_1C71610(this);
    }
  }
LABEL_302:
  if ( BuffEntity__checkBuffType(v14, 206, 0) )
  {
    ShortenMaxCountArray = DataVals__GetShortenMaxCountArray(dataVals_k__BackingField, 0);
    *(_QWORD *)(v19 + 392) = ShortenMaxCountArray;
    sub_1C71354(
      (GrandQuestFolderBoardItem_o *)(v19 + 392),
      (int32_t)ShortenMaxCountArray,
      v301,
      v302,
      v303,
      v304,
      v305,
      v306);
  }
  this = (BattleLogicFunction_o *)BuffEntity__checkBuffType(v14, 208, 0);
  v307 = v344;
  if ( ((unsigned __int8)this & 1) != 0 )
  {
    TargetFunctionIndividuality = DataVals__GetTargetFunctionIndividuality(dataVals_k__BackingField, 0);
    *(_QWORD *)(v19 + 400) = TargetFunctionIndividuality;
    sub_1C71354(
      (GrandQuestFolderBoardItem_o *)(v19 + 400),
      (int32_t)TargetFunctionIndividuality,
      v309,
      v310,
      v311,
      v312,
      v313,
      v314);
    TargetBuffIndividuality = DataVals__GetTargetBuffIndividuality(dataVals_k__BackingField, 0);
    *(_QWORD *)(v19 + 408) = TargetBuffIndividuality;
    sub_1C71354(
      (GrandQuestFolderBoardItem_o *)(v19 + 408),
      (int32_t)TargetBuffIndividuality,
      v316,
      v317,
      v318,
      v319,
      v320,
      v321);
  }
  if ( (MaxHp & 0x80000000) == 0 )
  {
    this = (BattleLogicFunction_o *)BattleServantData__getMaxHp(ServantData, 0);
    if ( (int)this < MaxHp )
    {
      v322 = ServantData->fields.maxhp;
      if ( !System_Math_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(System_Math_TypeInfo);
      this = (BattleLogicFunction_o *)System_Math__Max_65553544(0, userCommandCodeIda - v322, 0);
      *(_DWORD *)(v19 + 136) = (_DWORD)this;
    }
  }
  v323 = v10->fields.data;
  if ( !v323 )
    goto LABEL_343;
  this = (BattleLogicFunction_o *)v323->fields.battleEvent;
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
    v325 = (BattleBuffData_CheckIndividualitiesData_o *)sub_1C715FC(BattleBuffData_CheckIndividualitiesData_TypeInfo);
    BattleBuffData_CheckIndividualitiesData___ctor_45970628(v325, ServantData, 0, 0, 0, 0, 0, 1, 0);
    if ( !buffData )
      goto LABEL_343;
    this = (BattleLogicFunction_o *)BattleBuffData__getBuffList_45812676(buffData, 83, v325, 1, 0, 0, 0, 0);
    if ( !this )
      goto LABEL_343;
    v307 = v344;
    if ( this->fields.logic )
      BattleLogicFunction__functionResetCommandCard(v10, (int32_t)mainAction, v326, v327, v328, v329);
  }
  if ( DataVals__IsOnParty(dataVals_k__BackingField, 0) )
    *(_DWORD *)(v19 + 272) = v345;
  v330 = BattleLogicFunction_ProcListInArgs__get_IsCommandSideEffect(v284, 0);
  v331 = (BattleActionData_BuffData_o *)((__int64 (__fastcall *)(BattleLogicFunctionProcess_FunctionTargetCheck_o *, BattleActionData_MasterBuffData_o *, __int64, FunctionEntity_o *, bool, const MethodInfo *))funcTarget->klass->vtable._12_MakeAddActionBuffData.methodPtr)(
                                          funcTarget,
                                          v350,
                                          v19,
                                          funcEnt,
                                          v330,
                                          funcTarget->klass->vtable._12_MakeAddActionBuffData.method);
  if ( DataVals__IsProgressTurnOnBoard(dataVals_k__BackingField, 0) )
    *(_BYTE *)(v19 + 368) = 1;
  if ( DataVals__GetParam(dataVals_k__BackingField, 149, 0, 0) > 0
    || BuffEntity__IsDelayRemoveExpiredOnPlayerTurn(v14, 0) )
  {
    *(_BYTE *)(v19 + 369) = 1;
  }
  BattleLogicFunction__AfterAddedBuffProcess(v10, ServantData, v14, v332);
  if ( BuffEntity__getDamageRelease(v14, 0) >= 1
    && !BattleServantData__isLogicResultAlive(ServantData, 0)
    && BattleServantData__isGuts(ServantData, 0)
    || BuffEntity__getDamageRelease(v14, 0) == -1 )
  {
    ServantData->fields.isGutsSleepRelease = 0;
  }
  this = (BattleLogicFunction_o *)BattleLogicFunction_ProcListInArgs__get_ParentActBuffData(v284, 0);
  if ( !v307 )
    goto LABEL_343;
  BattleActionData__setBuffData(v307, v331, dataVals_k__BackingField, (BattleActionData_BuffData_o *)this, 0);
  this = (BattleLogicFunction_o *)v10->fields.data;
  if ( !this )
    goto LABEL_343;
  BattleData__AddFreshBuffList((BattleData_o *)this, v331, 0);
  BattleActionData__addAction(v346, v307, 0);
  ((void (__fastcall *)(BattleLogicFunctionProcess_FunctionTargetCheck_o *, BattleActionData_o *, BattleActionData_BuffData_o *, __int64, const MethodInfo *))funcTarget->klass->vtable._10_AfterAddBuffProc.methodPtr)(
    funcTarget,
    v346,
    v331,
    v19,
    funcTarget->klass->vtable._10_AfterAddBuffProc.method);
  v333 = (UnityEngine_Object_o *)v10->fields.logic;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(v333, 0, 0)
    && BattleLogicFunction__IsSituationForceTurnProgressExecutable(
         v10,
         v17,
         dataVals_k__BackingField,
         &isEnemyTurn,
         v334) )
  {
    BattleBuffData__TurnProgressingSpecifiedBuff(
      v10->fields.logic,
      (BattleBuffData_BuffData_o *)v19,
      isEnemyTurn,
      ServantData->fields.uniqueId,
      0);
  }
  if ( DataVals__GetParam(dataVals_k__BackingField, 238, 0, 0) >= 1 )
    *(_BYTE *)(v19 + 537) = 1;
  this = (BattleLogicFunction_o *)v10->fields.logic;
  if ( !this )
LABEL_343:
    sub_1C71608(this, mainAction);
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
  int32_t v19; // w3
  System_String_o *v20; // x4
  int32_t v21; // w5
  int64_t v22; // x6
  System_String_o *v23; // x7
  int32_t v24; // w26
  int32_t v25; // w27
  FunctionEntity_o *funcEnt; // x28
  _BOOL8 v27; // x0
  const MethodInfo *v28; // x6
  BattleActionData_ShiftServant_o *v29; // x24
  SimpleHpData_o *v30; // x27
  int32_t MaxHp; // w0
  SimpleHpData_o *v32; // x25
  int32_t CurrentShiftPos; // w0
  EnemySimpleHpData_o *v34; // x25
  unsigned int Value; // w0
  int v36; // w0
  int v37; // w24
  int v38; // w28
  int32_t v39; // w29
  int32_t Param; // w0
  SimpleHpData_o *v41; // x26
  unsigned int v42; // w19
  unsigned int MaxShiftIconPos; // w0
  const MethodInfo *v44; // [xsp+0h] [xbp-90h]
  int v45; // [xsp+Ch] [xbp-84h]
  BattleActionData_ShiftServant_o *v46; // [xsp+10h] [xbp-80h]
  BattleActionData_o *v47; // [xsp+18h] [xbp-78h]
  BattleLogicFunction_o *v48; // [xsp+28h] [xbp-68h]

  v48 = this;
  if ( (byte_4CCA525 & 1) == 0 )
  {
    sub_1C713B0(&BattleActionData_TypeInfo);
    sub_1C713B0(&EnemySimpleHpData_TypeInfo);
    sub_1C713B0(&System_Math_TypeInfo);
    sub_1C713B0(&BattleActionData_ShiftServant_TypeInfo);
    this = (BattleLogicFunction_o *)sub_1C713B0(&SimpleHpData_TypeInfo);
    byte_4CCA525 = 1;
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
                                          v48,
                                          uniqueId,
                                          funcIndex,
                                          dataVals_k__BackingField,
                                          IsCommandSideEffect,
                                          0,
                                          0,
                                          0,
                                          v44);
        if ( mainAction )
        {
          BattleActionData__addAction(mainAction, (BattleActionData_o *)this, 0);
          return;
        }
      }
    }
    goto LABEL_34;
  }
  v15 = sub_1C715FC(BattleActionData_TypeInfo);
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
  sub_1C71354((GrandQuestFolderBoardItem_o *)(v15 + 72), v17, v18, v19, v20, v21, v22, v23);
  if ( !dataVals_k__BackingField )
    goto LABEL_34;
  if ( !procArg_k__BackingField )
    goto LABEL_34;
  v24 = dataVals_k__BackingField->fields.funcIndex;
  v25 = targetSvtData->fields.uniqueId;
  funcEnt = dataVals_k__BackingField->fields.funcEnt;
  v27 = BattleLogicFunction_ProcListInArgs__get_IsCommandSideEffect(procArg_k__BackingField, 0);
  this = (BattleLogicFunction_o *)BattleLogicFunction__getFunctionObject(
                                    (BattleLogicFunction_o *)v27,
                                    funcEnt,
                                    v25,
                                    v24,
                                    v27,
                                    0,
                                    v28);
  if ( !this )
    goto LABEL_34;
  BYTE5(this[1].fields.master) = 0;
  BattleActionData__setBuffData((BattleActionData_o *)v15, (BattleActionData_BuffData_o *)this, 0, 0, 0);
  v29 = (BattleActionData_ShiftServant_o *)sub_1C715FC(BattleActionData_ShiftServant_TypeInfo);
  BattleActionData_ShiftServant___ctor(v29, 0, 0);
  if ( !v29 )
    goto LABEL_34;
  v47 = (BattleActionData_o *)v15;
  v46 = v29;
  BattleActionData_ShiftServant__setBeforeSvtData(v29, targetSvtData, 0);
  ((void (__fastcall *)(BattleActionData_BaseShiftGaugeData_o *, BattleServantData_o *, const MethodInfo *))shiftGauge->klass->vtable._12_Init.methodPtr)(
    shiftGauge,
    targetSvtData,
    shiftGauge->klass->vtable._12_Init.method);
  v30 = (SimpleHpData_o *)sub_1C715FC(SimpleHpData_TypeInfo);
  SimpleHpData___ctor(v30, targetSvtData, 0);
  if ( DataVals__IsEqualsTo1(dataVals_k__BackingField, 185, 0) )
  {
    MaxHp = BattleServantData__getMaxHp(targetSvtData, 0);
    BattleServantData__setHp(targetSvtData, MaxHp, 1, 0, 0);
    v32 = (SimpleHpData_o *)sub_1C715FC(SimpleHpData_TypeInfo);
    SimpleHpData___ctor(v32, targetSvtData, 0);
    CurrentShiftPos = BattleServantData__GetCurrentShiftPos(targetSvtData, 0);
    BattleActionData_BaseShiftGaugeData__AddHpUpDataBeforeShift(shiftGauge, CurrentShiftPos, v30, v32, 0);
    v30 = v32;
  }
  v34 = (EnemySimpleHpData_o *)sub_1C715FC(EnemySimpleHpData_TypeInfo);
  EnemySimpleHpData___ctor(v34, targetSvtData, 0);
  Value = DataVals__GetValue(dataVals_k__BackingField, 0);
  v36 = ((__int64 (__fastcall *)(BattleActionData_BaseShiftGaugeData_o *, BattleServantData_o *, _QWORD, const MethodInfo *))shiftGauge->klass->vtable._9_unknown.methodPtr)(
          shiftGauge,
          targetSvtData,
          Value,
          shiftGauge->klass->vtable._9_unknown.method);
  v45 = v36;
  if ( v36 >= 0 )
    v37 = v36;
  else
    v37 = -v36;
  v38 = 1;
  if ( v36 < 1 )
    v39 = -1;
  else
    v39 = 1;
  while ( 1 )
  {
    if ( !System_Math_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(System_Math_TypeInfo);
    if ( v38 > v37 )
      break;
    BattleServantData__SetShiftServantChange(targetSvtData, v48->fields.data, v34, v39, 0);
    Param = DataVals__GetParam(dataVals_k__BackingField, 59, 0, 0);
    ((void (__fastcall *)(BattleActionData_BaseShiftGaugeData_o *, BattleServantData_o *, bool, const MethodInfo *))shiftGauge->klass->vtable._10_unknown.methodPtr)(
      shiftGauge,
      targetSvtData,
      Param > 0,
      shiftGauge->klass->vtable._10_unknown.method);
    v41 = (SimpleHpData_o *)sub_1C715FC(SimpleHpData_TypeInfo);
    SimpleHpData___ctor(v41, targetSvtData, 0);
    v42 = BattleServantData__GetCurrentShiftPos(targetSvtData, 0);
    MaxShiftIconPos = BattleServantData__GetMaxShiftIconPos(targetSvtData, 0);
    ((void (__fastcall *)(BattleActionData_BaseShiftGaugeData_o *, _QWORD, _QWORD, SimpleHpData_o *, SimpleHpData_o *, const MethodInfo *))shiftGauge->klass->vtable._11_unknown.methodPtr)(
      shiftGauge,
      v42,
      MaxShiftIconPos,
      v30,
      v41,
      shiftGauge->klass->vtable._11_unknown.method);
    ++v38;
    v30 = v41;
  }
  if ( v45 )
  {
    this = (BattleLogicFunction_o *)v48->fields.logic;
    if ( !this )
      goto LABEL_34;
    BattleLogic__actEnemyPtPassiveSkill((BattleLogic_o *)this, targetSvtData->fields.uniqueId, 1, 0, 0);
  }
  BattleActionData_ShiftServant__setCheckSvtData(v46, targetSvtData, 0);
  BattleActionData__setShiftServant(v47, v46, 0);
  BattleActionData__SetShiftGauge(v47, shiftGauge, 0);
  if ( !mainAction )
LABEL_34:
    sub_1C71608(this, mainAction);
  BattleActionData__AddAfterActionData(mainAction, v47, 0, 0);
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

  if ( (byte_4CCA516 & 1) == 0 )
  {
    sub_1C713B0(&BattleActionData_TypeInfo);
    byte_4CCA516 = 1;
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
    sub_1C71610(data);
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
        v28 = (BattleActionData_o *)sub_1C715FC(BattleActionData_TypeInfo),
        BattleActionData___ctor(v28, 0),
        uniqueId = v27->fields.uniqueId,
        isEffectSummon = DataVals__isEffectSummon(baseVals, 0),
        data = (BattleData_o *)DataVals__GetCallSvtEffectId(baseVals, 0),
        !v28)
    || (BattleActionData__setSummonServant(v28, uniqueId, v25, funcIndex, isEffectSummon, (int32_t)data, 0), !procArg) )
  {
LABEL_26:
    sub_1C71608(data, *(_QWORD *)&playerId);
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

  if ( (byte_4CCA519 & 1) == 0 )
  {
    sub_1C713B0(&BattleActionData_TypeInfo);
    byte_4CCA519 = 1;
  }
  v8 = (BattleActionData_o *)sub_1C715FC(BattleActionData_TypeInfo);
  BattleActionData___ctor(v8, 0);
  if ( !v8 || (v8->fields.actorId = actionId, !baseVals) )
    sub_1C71608(v9, v10);
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

  if ( (byte_4CCA518 & 1) == 0 )
  {
    sub_1C713B0(&BattleActionData_TypeInfo);
    sub_1C713B0(&BattleActionData_ShiftServant_TypeInfo);
    byte_4CCA518 = 1;
  }
  data = this->fields.data;
  if ( !data )
    goto LABEL_9;
  ServantData = BattleData__getServantData(data, targetId, 0);
  v13 = (BattleActionData_o *)sub_1C715FC(BattleActionData_TypeInfo);
  BattleActionData___ctor(v13, 0);
  if ( !v13 )
    goto LABEL_9;
  v13->fields.actorId = actionId;
  v14 = (BattleActionData_ShiftServant_o *)sub_1C715FC(BattleActionData_ShiftServant_TypeInfo);
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
    sub_1C71608(data, *(_QWORD *)&actionId);
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

  if ( (byte_4CCA503 & 1) == 0 )
  {
    sub_1C713B0(&BattleActionData_TypeInfo);
    byte_4CCA503 = 1;
  }
  v15 = (BattleActionData_o *)sub_1C715FC(BattleActionData_TypeInfo);
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
    sub_1C71608(data, v16);
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

  if ( (byte_4CCA50C & 1) == 0 )
  {
    sub_1C713B0(&BattleActionData_TypeInfo);
    byte_4CCA50C = 1;
  }
  *absorptionCount = 0;
  v15 = (BattleActionData_o *)sub_1C715FC(BattleActionData_TypeInfo);
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
    sub_1C71608(data, v16);
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
  if ( (byte_4CCA506 & 1) == 0 )
  {
    sub_1C713B0(&BattleActionData_TypeInfo);
    sub_1C713B0(&BattleBuffData_CheckIndividualitiesData_TypeInfo);
    byte_4CCA506 = 1;
  }
  digit = 0;
  v17 = (BattleActionData_o *)sub_1C715FC(BattleActionData_TypeInfo);
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
  v24 = (BattleBuffData_CheckIndividualitiesData_o *)sub_1C715FC(BattleBuffData_CheckIndividualitiesData_TypeInfo);
  BattleBuffData_CheckIndividualitiesData___ctor_45970628(v24, v21, 0, 0, 0, 0, 0, 1, 0);
  if ( !buffData )
LABEL_26:
    sub_1C71608(data, v18);
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
  if ( (byte_4CCA522 & 1) == 0 )
  {
    sub_1C713B0(&BattleActionData_TypeInfo);
    sub_1C713B0(&System_IDisposable_TypeInfo);
    sub_1C713B0(&System_Collections_Generic_IEnumerable_BattleLogicFunctionProcess_FunctionTargetCheck__TypeInfo);
    sub_1C713B0(&System_Collections_Generic_IEnumerator_BattleLogicFunctionProcess_FunctionTargetCheck__TypeInfo);
    sub_1C713B0(&System_Collections_IEnumerator_TypeInfo);
    sub_1C713B0(&Method_System_Collections_Generic_List_FuncList_TYPE__Add__);
    sub_1C713B0(&Method_System_Collections_Generic_List_FuncList_TYPE___ctor__);
    sub_1C713B0(&System_Collections_Generic_List_FuncList_TYPE__TypeInfo);
    sub_1C713B0(&FuncList_TYPE_TypeInfo);
    this = (BattleLogicFunction_o *)sub_1C713B0(&StringLiteral_16327/*"_SAFE"*/);
    byte_4CCA522 = 1;
  }
  if ( !funcTarget )
    goto LABEL_88;
  funcUnit_k__BackingField = funcTarget->fields._funcUnit_k__BackingField;
  if ( !funcUnit_k__BackingField )
    goto LABEL_88;
  dataVals_k__BackingField = funcUnit_k__BackingField->fields._dataVals_k__BackingField;
  v78 = (BattleActionData_o *)sub_1C715FC(BattleActionData_TypeInfo);
  BattleActionData___ctor(v78, 0);
  v8 = (System_Collections_Generic_List_T__o *)sub_1C715FC(System_Collections_Generic_List_FuncList_TYPE__TypeInfo);
  System_Collections_Generic_List_Int32Enum____ctor(
    v8,
    (const MethodInfo_37F56CC *)Method_System_Collections_Generic_List_FuncList_TYPE___ctor__);
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
      *(const MethodInfo_37F5F20 **)(*(_QWORD *)(v10[4] + 192LL) + 112LL));
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
      *(const MethodInfo_37F5F20 **)(*(_QWORD *)(v10[4] + 192LL) + 112LL));
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
      *(const MethodInfo_37F5F20 **)(*(_QWORD *)(v10[4] + 192LL) + 112LL));
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
      *(const MethodInfo_37F5F20 **)(*(_QWORD *)(v10[4] + 192LL) + 112LL));
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
      sub_1C71610(this);
    v18 = (DataVals_o *)*((_QWORD *)&this->fields.logictarget + (int)v16);
    if ( !v18 )
      goto LABEL_88;
    v82.klass = (System_Enum_c *)FuncList_TYPE_TypeInfo;
    v82.monitor = (void *)-1LL;
    funcType = v18->fields.funcType;
    this = (BattleLogicFunction_o *)System_Enum__ToString(&v82, 0);
    if ( !this )
      goto LABEL_88;
    v79 = System_String__Contains((System_String_o *)this, (System_String_o *)StringLiteral_16327/*"_SAFE"*/, 0);
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
      v24 = sub_1C47738(
              this,
              System_Collections_Generic_IEnumerable_BattleLogicFunctionProcess_FunctionTargetCheck__TypeInfo,
              0);
    }
    v26 = (*(__int64 (__fastcall **)(BattleLogicFunction_o *, _QWORD))v24)(v21, *(_QWORD *)(v24 + 8));
    if ( !v26 )
      sub_1C71608(0, v25);
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
        v30 = sub_1C47738(v26, System_Collections_IEnumerator_TypeInfo, 0);
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
        v34 = sub_1C47738(
                v26,
                System_Collections_Generic_IEnumerator_BattleLogicFunctionProcess_FunctionTargetCheck__TypeInfo,
                0);
      }
      v35 = (*(__int64 (__fastcall **)(__int64, _QWORD))v34)(v26, *(_QWORD *)(v34 + 8));
      v37 = v35;
      if ( !v35 )
        sub_1C71608(0, v36);
      if ( ((*(__int64 (__fastcall **)(__int64, BattleActionData_o *, _QWORD))(*(_QWORD *)v35 + 408LL))(
              v35,
              mainAction,
              *(_QWORD *)(*(_QWORD *)v35 + 416LL))
          & 1) != 0 )
      {
        data = v81->fields.data;
        if ( !data )
          sub_1C71608(0, v38);
        v40 = *(_DWORD *)(v37 + 32);
        ServantData = BattleData__getServantData(data, v40, 0);
        v43 = ServantData;
        if ( !ServantData )
          sub_1C71608(0, v42);
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
            sub_1C71608(Value, v45);
          if ( !v80 )
            sub_1C71608(0, v45);
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
              sub_1C71608(0, v56);
            BattleActionData__addAction(v78, v55, 0);
            v77 += v57;
          }
          else
          {
            v58 = v18->fields.funcIndex;
            v59 = BattleLogicFunction_ProcListInArgs__get_IsCommandSideEffect(v80, 0);
            NoEffectObject = BattleLogicFunction__getNoEffectObject(v81, v40, v58, v18, v59, 0, 0, 0, overwriteLossHp);
            if ( !v78 )
              sub_1C71608(0, NoEffectObject);
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
      v64 = sub_1C47738(v26, System_IDisposable_TypeInfo, 0);
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
    sub_1C71608(this, procArg);
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

  if ( (byte_4CCA507 & 1) == 0 )
  {
    sub_1C713B0(&BattleActionData_TypeInfo);
    sub_1C713B0(&BattleBuffData_CheckIndividualitiesData_TypeInfo);
    byte_4CCA507 = 1;
  }
  digit = 0;
  v15 = (BattleActionData_o *)sub_1C715FC(BattleActionData_TypeInfo);
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
  v25 = (BattleBuffData_CheckIndividualitiesData_o *)sub_1C715FC(BattleBuffData_CheckIndividualitiesData_TypeInfo);
  BattleBuffData_CheckIndividualitiesData___ctor_45970628(v25, v19, 0, 0, 0, 0, 0, 1, 0);
  if ( !buffData )
LABEL_24:
    sub_1C71608(data, v16);
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

  if ( (byte_4CCA521 & 1) == 0 )
  {
    sub_1C713B0(&BattleActionData_TypeInfo);
    byte_4CCA521 = 1;
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
  v14 = (BattleActionData_o *)sub_1C715FC(BattleActionData_TypeInfo);
  BattleActionData___ctor(v14, 0);
  if ( !baseVals )
LABEL_18:
    sub_1C71608(data, procArg);
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
  if ( (byte_4CCA51F & 1) == 0 )
  {
    sub_1C713B0(&BattleActionData_TypeInfo);
    sub_1C713B0(&NpGaugeAbsorbResult_TypeInfo);
    this = (BattleLogicFunction_o *)sub_1C713B0(&NpTurnToPointConvert_TypeInfo);
    byte_4CCA51F = 1;
  }
  if ( !funcTarget )
    goto LABEL_12;
  funcUnit_k__BackingField = funcTarget->fields._funcUnit_k__BackingField;
  if ( !funcUnit_k__BackingField )
    goto LABEL_12;
  dataVals_k__BackingField = funcUnit_k__BackingField->fields._dataVals_k__BackingField;
  v11 = (BattleActionData_o *)sub_1C715FC(BattleActionData_TypeInfo);
  BattleActionData___ctor(v11, 0);
  v12 = (NpTurnToPointConvert_o *)sub_1C715FC(NpTurnToPointConvert_TypeInfo);
  NpTurnToPointConvert___ctor(v12, 0);
  v13 = (NpGaugeAbsorbResult_o *)sub_1C715FC(NpGaugeAbsorbResult_TypeInfo);
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
    sub_1C71608(this, procArg);
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
        int32_t usedChargeTurn,
        const MethodInfo *method)
{
  BattleActionData_o *v17; // x21
  BattleData_o *v18; // x1
  BattleData_o *data; // x0
  BattleServantData_o *v20; // x27
  int32_t Value; // w0
  int32_t v23; // w29
  _BOOL8 isGainNp; // x0
  const MethodInfo *v25; // x6

  if ( (byte_4CCA50B & 1) == 0 )
  {
    sub_1C713B0(&BattleActionData_TypeInfo);
    byte_4CCA50B = 1;
  }
  v17 = (BattleActionData_o *)sub_1C715FC(BattleActionData_TypeInfo);
  BattleActionData___ctor(v17, 0);
  data = this->fields.data;
  if ( !data )
    goto LABEL_25;
  data = (BattleData_o *)BattleData__getServantData(data, targetId, 0);
  if ( !data )
    goto LABEL_25;
  v20 = (BattleServantData_o *)data;
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
               method);
    data = (BattleData_o *)BattleServantData__isTDSeraled(v20, 0);
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
               method);
    if ( !baseVals )
      goto LABEL_25;
    Value = DataVals__GetValue(baseVals, 0);
    if ( usedChargeTurn < 0 )
    {
      if ( absorptionCount < 0 )
      {
        v23 = Value;
        isGainNp = BattleServantData__isGainNp(v20, 1, 0, 0);
        usedChargeTurn = v23;
        if ( !isGainNp )
        {
LABEL_22:
          data = (BattleData_o *)BattleLogicFunction__getFunctionObject(
                                   (BattleLogicFunction_o *)isGainNp,
                                   funcEnt,
                                   v20->fields.uniqueId,
                                   funcIndex,
                                   isCommandSideEffect,
                                   0,
                                   v25);
          if ( data )
          {
            v18 = data;
            LODWORD(data->fields.rootfsm) = 5;
            if ( v17 )
            {
              BattleActionData__setBuffData(v17, (BattleActionData_BuffData_o *)data, baseVals, 0, 0);
              return v17;
            }
          }
LABEL_25:
          sub_1C71608(data, v18);
        }
LABEL_21:
        isGainNp = BattleServantData__updownNextTDTurn(v20, -usedChargeTurn, 0);
        goto LABEL_22;
      }
      if ( absorptionCount )
      {
        usedChargeTurn = absorptionCount;
        if ( BattleServantData__isGainNp(v20, 1, baseVals, 0) )
          goto LABEL_21;
      }
    }
    else if ( usedChargeTurn && BattleServantData__isGainNp(v20, 1, baseVals, 0) )
    {
      goto LABEL_21;
    }
    return BattleLogicFunction__getNoEffectObject(
             this,
             targetId,
             funcIndex,
             baseVals,
             isCommandSideEffect,
             0,
             0,
             0,
             method);
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

  if ( (byte_4CCA50A & 1) == 0 )
  {
    sub_1C713B0(&BattleActionData_TypeInfo);
    byte_4CCA50A = 1;
  }
  v16 = (BattleActionData_o *)sub_1C715FC(BattleActionData_TypeInfo);
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
    sub_1C71608(data, v17);
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

  if ( (byte_4CCA520 & 1) == 0 )
  {
    sub_1C713B0(&BattleActionData_TypeInfo);
    sub_1C713B0(&BattleDataDefine_TypeInfo);
    byte_4CCA520 = 1;
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
        v14 = (BattleActionData_o *)sub_1C715FC(BattleActionData_TypeInfo);
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
      sub_1C71608(data, procArg);
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
  int32_t v29; // w3
  System_String_o *v30; // x4
  int32_t v31; // w5
  int64_t v32; // x6
  System_String_o *v33; // x7

  if ( (byte_4CCA526 & 1) == 0 )
  {
    sub_1C713B0(&BattleActionData_TypeInfo);
    sub_1C713B0(&Method_DataManager_GetMasterData_SkillLvMaster___);
    sub_1C713B0(&Method_SingletonMonoBehaviour_DataManager__getInstance__);
    sub_1C713B0(&StringLiteral_6429/*"FOCUS_UP_EX"*/);
    sub_1C713B0(&StringLiteral_6427/*"FOCUS_UNDER_EX"*/);
    sub_1C713B0(&StringLiteral_6425/*"FOCUS_CENTER_EX"*/);
    sub_1C713B0(&StringLiteral_6426/*"FOCUS_UNDER"*/);
    sub_1C713B0(&StringLiteral_6424/*"FOCUS_CENTER"*/);
    sub_1C713B0(&StringLiteral_6428/*"FOCUS_UP"*/);
    byte_4CCA526 = 1;
  }
  v8 = *((_QWORD *)Method_SingletonMonoBehaviour_DataManager__getInstance__ + 4);
  if ( (*(_BYTE *)(v8 + 309) & 1) == 0 )
    v8 = sub_1C47444(v4);
  v9 = *(_QWORD *)(*(_QWORD *)(v8 + 192) + 16LL);
  if ( (*(_BYTE *)(v9 + 309) & 1) == 0 )
    v9 = sub_1C47444(v4);
  MasterData_object = **(DataManager_o ***)(v9 + 184);
  if ( !MasterData_object )
    goto LABEL_23;
  MasterData_object = (DataManager_o *)DataManager__GetMasterData_object_(
                                         MasterData_object,
                                         (const MethodInfo_314B10C *)Method_DataManager_GetMasterData_SkillLvMaster___);
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
        sub_1C71610(MasterData_object);
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
            v25 = &StringLiteral_6429/*"FOCUS_UP_EX"*/;
          else
            v25 = &StringLiteral_6428/*"FOCUS_UP"*/;
        }
        else if ( BattleServantData__isMultiTargetCore(v23, 0) )
        {
          if ( SkillLvEntity__IsAress(v13, 0) )
            v25 = &StringLiteral_6425/*"FOCUS_CENTER_EX"*/;
          else
            v25 = &StringLiteral_6424/*"FOCUS_CENTER"*/;
        }
        else
        {
          v26 = 0;
          if ( !BattleServantData__isMultiTargetUnder(v23, 0) )
          {
LABEL_47:
            v27 = sub_1C715FC(BattleActionData_TypeInfo);
            BattleActionData___ctor((BattleActionData_o *)v27, 0);
            if ( targetData && v27 )
            {
              *(_DWORD *)(v27 + 32) = targetData->fields.uniqueId;
              *(_DWORD *)(v27 + 36) = actionData->fields.targetId;
              BattleActionData__setStateField((BattleActionData_o *)v27, 0);
              *(_QWORD *)(v27 + 72) = v26;
              sub_1C71354((GrandQuestFolderBoardItem_o *)(v27 + 72), v26, v28, v29, v30, v31, v32, v33);
              BattleActionData__AddAfterActionData(actionData, (BattleActionData_o *)v27, 0, 0);
              return;
            }
LABEL_23:
            sub_1C71608(MasterData_object, actionData);
          }
          if ( SkillLvEntity__IsAress(v13, 0) )
            v25 = &StringLiteral_6427/*"FOCUS_UNDER_EX"*/;
          else
            v25 = &StringLiteral_6426/*"FOCUS_UNDER"*/;
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
  int32_t v22; // w3
  System_String_o *v23; // x4
  int32_t v24; // w5
  int64_t v25; // x6
  System_String_o *v26; // x7
  System_Collections_Generic_IEnumerable_BattleBuffData_BuffData__o *v27; // x24
  System_Func_object__bool__o *v28; // x25
  System_Collections_Generic_IEnumerable_TSource__o *v29; // x0
  RemovedBuffInfoGroup_o *v30; // x25
  System_Collections_Generic_List_int__o *v31; // x28
  int klass; // w8
  BattleLogicFunction_o *v33; // x21
  DataMasterBase_TMaster__TEntity__PKType__o *v34; // x29
  __int64 v35; // x22
  __int64 v36; // x27
  BattleBuffData_BuffData_o *v37; // x20
  const MethodInfo *v38; // x2
  const MethodInfo *v39; // x3
  int32_t DispTurn; // w0
  bool isProgressSelfTurn; // w8
  struct System_Int32_array *items; // x8
  _QWORD *v43; // x9
  __int64 size; // x10
  BattleActionData_BuffData_o *v45; // x27
  struct FunctionEntity_o *funcEnt; // x21
  bool v47; // w0
  System_Int32_array *v48; // x0
  int32_t v49; // w2
  int32_t v50; // w3
  System_String_o *v51; // x4
  int32_t v52; // w5
  int64_t v53; // x6
  System_String_o *v54; // x7
  int v55; // w22
  int32_t funcIndex; // w20
  bool IsCommandSideEffect; // w0
  struct BattleData_o *data; // x8
  BattleFieldEnvironmentData_o *FieldEnvData_k__BackingField; // x19
  BattleLogicFunction___c_c *v60; // x0
  System_Func_object__bool__o *_9__122_2; // x20
  Il2CppObject *v62; // x21
  struct BattleLogicFunction___c_StaticFields *static_fields; // x0
  int32_t v64; // w2
  int32_t v65; // w3
  System_String_o *v66; // x4
  int32_t v67; // w5
  int64_t v68; // x6
  System_String_o *v69; // x7
  System_Collections_Generic_IEnumerable_TSource__o *v70; // x0
  BattleActionEffect_ChangeBgmBuff_o *v71; // x19
  const MethodInfo *v72; // [xsp+0h] [xbp-A0h]
  BattleLogicFunctionProcess_FunctionTargetCheck_o *v73; // [xsp+10h] [xbp-90h]
  BattleLogicFunction_ProcListInArgs_o *v74; // [xsp+18h] [xbp-88h]
  Il2CppObject *entity; // [xsp+38h] [xbp-68h] BYREF

  if ( (byte_4CCA52C & 1) == 0 )
  {
    sub_1C713B0(&BattleActionData_BuffData_TypeInfo);
    sub_1C713B0(&BattleActionEffect_ChangeBgmBuff_TypeInfo);
    sub_1C713B0(&Method_DataManager_GetMasterData_BuffMaster___);
    sub_1C713B0(&Method_DataMasterBase_BuffMaster__BuffEntity__int__TryGetEntity__);
    sub_1C713B0(&Method_System_Linq_Enumerable_ToArray_BattleBuffData_BuffData___);
    sub_1C713B0(&Method_System_Linq_Enumerable_Where_BattleBuffData_BuffData___);
    sub_1C713B0(&System_Func_BattleBuffData_BuffData__bool__TypeInfo);
    sub_1C713B0(&Method_System_Collections_Generic_HashSet_BattleBuffData_BuffData___ctor___78567208);
    sub_1C713B0(&System_Collections_Generic_HashSet_BattleBuffData_BuffData__TypeInfo);
    sub_1C713B0(&Method_System_Collections_Generic_List_int__Add__);
    sub_1C713B0(&Method_System_Collections_Generic_List_int__ToArray__);
    sub_1C713B0(&Method_System_Collections_Generic_List_int___ctor__);
    sub_1C713B0(&System_Collections_Generic_List_int__TypeInfo);
    sub_1C713B0(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_1C713B0(&Method_BattleLogicFunction___c__functionMoveState_b__122_2__);
    sub_1C713B0(&Method_BattleLogicFunction___c__DisplayClass122_0__functionMoveState_b__0__);
    sub_1C713B0(&Method_BattleLogicFunction___c__DisplayClass122_0__functionMoveState_b__1__);
    sub_1C713B0(&BattleLogicFunction___c__DisplayClass122_0_TypeInfo);
    sub_1C713B0(&BattleLogicFunction___c_TypeInfo);
    byte_4CCA52C = 1;
  }
  entity = 0;
  v7 = sub_1C715FC(BattleLogicFunction___c__DisplayClass122_0_TypeInfo);
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
  v73 = funcTarget;
  v74 = procArg;
  *(_DWORD *)(v7 + 16) = 0x1000000;
  if ( !v14 )
    goto LABEL_61;
  v17 = RemovedBuffInfoGroup__RemovedLinkageBuffEnumerable(v14, 0);
  v18 = (System_Func_object__bool__o *)sub_1C715FC(System_Func_BattleBuffData_BuffData__bool__TypeInfo);
  System_Func_object__bool____ctor(
    v18,
    (Il2CppObject *)v7,
    Method_BattleLogicFunction___c__DisplayClass122_0__functionMoveState_b__0__,
    0);
  v19 = (System_Collections_Generic_IEnumerable_T__o *)System_Linq_Enumerable__Where_object_(
                                                         (System_Collections_Generic_IEnumerable_TSource__o *)v17,
                                                         (System_Func_TSource__bool__o *)v18,
                                                         (const MethodInfo_3192108 *)Method_System_Linq_Enumerable_Where_BattleBuffData_BuffData___);
  v20 = (System_Collections_Generic_HashSet_T__o *)sub_1C715FC(System_Collections_Generic_HashSet_BattleBuffData_BuffData__TypeInfo);
  System_Collections_Generic_HashSet_object____ctor_57438836(
    v20,
    v19,
    (const MethodInfo_36C7274 *)Method_System_Collections_Generic_HashSet_BattleBuffData_BuffData___ctor___78567208);
  *(_QWORD *)(v7 + 24) = v20;
  sub_1C71354((GrandQuestFolderBoardItem_o *)(v7 + 24), (int32_t)v20, v21, v22, v23, v24, v25, v26);
  v27 = RemovedBuffInfoGroup__RemovedAllBuffEnumerable(v14, 0);
  v28 = (System_Func_object__bool__o *)sub_1C715FC(System_Func_BattleBuffData_BuffData__bool__TypeInfo);
  System_Func_object__bool____ctor(
    v28,
    (Il2CppObject *)v7,
    Method_BattleLogicFunction___c__DisplayClass122_0__functionMoveState_b__1__,
    0);
  v29 = System_Linq_Enumerable__Where_object_(
          (System_Collections_Generic_IEnumerable_TSource__o *)v27,
          (System_Func_TSource__bool__o *)v28,
          (const MethodInfo_3192108 *)Method_System_Linq_Enumerable_Where_BattleBuffData_BuffData___);
  StealBuffInfoGroup = (RemovedBuffInfoGroup_o *)System_Linq_Enumerable__ToArray_object_(
                                                   v29,
                                                   (const MethodInfo_318AFEC *)Method_System_Linq_Enumerable_ToArray_BattleBuffData_BuffData___);
  if ( !StealBuffInfoGroup )
    goto LABEL_61;
  v30 = StealBuffInfoGroup;
  if ( !StealBuffInfoGroup[1].klass )
  {
    if ( dataVals_k__BackingField )
    {
      StealBuffInfoGroup = (RemovedBuffInfoGroup_o *)v74;
      if ( v74 )
      {
        funcIndex = dataVals_k__BackingField->fields.funcIndex;
        IsCommandSideEffect = BattleLogicFunction_ProcListInArgs__get_IsCommandSideEffect(v74, 0);
        NoEffectObject = BattleLogicFunction__getNoEffectObject(
                           this,
                           targetId_k__BackingField,
                           funcIndex,
                           dataVals_k__BackingField,
                           IsCommandSideEffect,
                           0,
                           0,
                           0,
                           v72);
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
  v31 = (System_Collections_Generic_List_int__o *)sub_1C715FC(System_Collections_Generic_List_int__TypeInfo);
  System_Collections_Generic_List_int____ctor(
    v31,
    (const MethodInfo_37F2EA0 *)Method_System_Collections_Generic_List_int___ctor__);
  StealBuffInfoGroup = (RemovedBuffInfoGroup_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3A5F158 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !StealBuffInfoGroup )
    goto LABEL_61;
  StealBuffInfoGroup = (RemovedBuffInfoGroup_o *)DataManager__GetMasterData_object_(
                                                   (DataManager_o *)StealBuffInfoGroup,
                                                   (const MethodInfo_314B10C *)Method_DataManager_GetMasterData_BuffMaster___);
  klass = (int)v30[1].klass;
  v33 = this;
  if ( klass < 1 )
  {
    v36 = 0;
LABEL_47:
    v55 = 1;
    goto LABEL_48;
  }
  v34 = (DataMasterBase_TMaster__TEntity__PKType__o *)StealBuffInfoGroup;
  v35 = 0;
  v36 = 0;
  do
  {
    if ( (unsigned int)v35 >= klass )
      sub_1C71610(StealBuffInfoGroup);
    v37 = (BattleBuffData_BuffData_o *)*((_QWORD *)&v30[1].monitor + v35);
    if ( !v37 || !v34 )
      goto LABEL_61;
    StealBuffInfoGroup = (RemovedBuffInfoGroup_o *)DataMasterBase_object__object__int___TryGetEntity(
                                                     v34,
                                                     &entity,
                                                     v37->fields.buffId,
                                                     (const MethodInfo_3408ECC *)Method_DataMasterBase_BuffMaster__BuffEntity__int__TryGetEntity__);
    if ( ((unsigned __int8)StealBuffInfoGroup & 1) != 0 )
    {
      StealBuffInfoGroup = (RemovedBuffInfoGroup_o *)BattleLogicFunction__IsAddStateFieldFlag(v33, v37, v38);
      if ( !ServantData )
        goto LABEL_61;
      BattleServantData__addBuff(ServantData, v37, (unsigned __int8)StealBuffInfoGroup & 1, 0, 1, 0);
      if ( v37->fields.changeBgmData )
        BattleBuffData_ChangeBgmData__UpdateUniqueVal(
          v37->fields.changeBgmData,
          v37->fields.addOrder,
          ServantData->fields.uniqueId,
          0);
      StealBuffInfoGroup = (RemovedBuffInfoGroup_o *)entity;
      if ( !entity )
        goto LABEL_61;
      if ( !BuffEntity__IsDisableMoveStateTurnChange((BuffEntity_o *)entity, 0) )
      {
        if ( v37->fields.turn <= 0 )
        {
          isProgressSelfTurn = v37->fields.isProgressSelfTurn;
        }
        else
        {
          DispTurn = BattleBuffData_BuffData__get_DispTurn(v37, 0);
          isProgressSelfTurn = v37->fields.isProgressSelfTurn;
          v37->fields.turn = 2 * DispTurn - isProgressSelfTurn;
        }
        v37->fields.isProgressEndEnemyTurn = isProgressSelfTurn ^ ServantData->fields.isEnemy ^ 1;
      }
      BattleLogicFunction__AfterAddedBuffProcess(v33, ServantData, (BuffEntity_o *)entity, v39);
      if ( v36 )
      {
        if ( !v31 )
          goto LABEL_61;
        NoEffectObject = (BattleActionData_o *)(unsigned int)v37->fields.addOrder;
        items = v31->fields._items;
        v43 = Method_System_Collections_Generic_List_int__Add__;
        ++v31->fields._version;
        if ( !items )
          goto LABEL_61;
        size = v31->fields._size;
        if ( (unsigned int)size >= LODWORD(items->max_length) )
        {
          System_Collections_Generic_List_int___AddWithResize(
            v31,
            (int32_t)NoEffectObject,
            *(const MethodInfo_37F36F4 **)(*(_QWORD *)(v43[4] + 192LL) + 112LL));
        }
        else
        {
          v31->fields._size = size + 1;
          items->m_Items[size] = (int)NoEffectObject;
        }
      }
      else
      {
        v45 = (BattleActionData_BuffData_o *)sub_1C715FC(BattleActionData_BuffData_TypeInfo);
        BattleActionData_BuffData___ctor(v45, 0);
        if ( !v45 )
          goto LABEL_61;
        v45->fields.targetId = targetId_k__BackingField;
        if ( !dataVals_k__BackingField )
          goto LABEL_61;
        StealBuffInfoGroup = (RemovedBuffInfoGroup_o *)v74;
        v45->fields.functionIndex = dataVals_k__BackingField->fields.funcIndex;
        if ( !v74 )
          goto LABEL_61;
        funcEnt = dataVals_k__BackingField->fields.funcEnt;
        v47 = BattleLogicFunction_ProcListInArgs__get_IsCommandSideEffect(v74, 0);
        v36 = ((__int64 (__fastcall *)(BattleLogicFunctionProcess_FunctionTargetCheck_o *, BattleActionData_BuffData_o *, BattleBuffData_BuffData_o *, struct FunctionEntity_o *, bool, const MethodInfo *))v73->klass->vtable._12_MakeAddActionBuffData.methodPtr)(
                v73,
                v45,
                v37,
                funcEnt,
                v47,
                v73->klass->vtable._12_MakeAddActionBuffData.method);
        StealBuffInfoGroup = (RemovedBuffInfoGroup_o *)mainAction;
        if ( !mainAction )
          goto LABEL_61;
        BattleActionData__setBuffData(mainAction, (BattleActionData_BuffData_o *)v36, dataVals_k__BackingField, 0, 0);
        v33 = this;
        StealBuffInfoGroup = (RemovedBuffInfoGroup_o *)this->fields.data;
        if ( !StealBuffInfoGroup )
          goto LABEL_61;
        BattleData__AddFreshBuffList((BattleData_o *)StealBuffInfoGroup, (BattleActionData_BuffData_o *)v36, 0);
      }
    }
    klass = (int)v30[1].klass;
    ++v35;
  }
  while ( (int)v35 < klass );
  if ( !v36 )
    goto LABEL_47;
  if ( !v31 )
    goto LABEL_61;
  v48 = System_Collections_Generic_List_int___ToArray(
          v31,
          (const MethodInfo_37F51AC *)Method_System_Collections_Generic_List_int__ToArray__);
  *(_QWORD *)(v36 + 160) = v48;
  sub_1C71354((GrandQuestFolderBoardItem_o *)(v36 + 160), (int32_t)v48, v49, v50, v51, v52, v53, v54);
  v55 = 0;
LABEL_48:
  data = v33->fields.data;
  if ( !data )
    goto LABEL_61;
  FieldEnvData_k__BackingField = data->fields._FieldEnvData_k__BackingField;
  v60 = BattleLogicFunction___c_TypeInfo;
  if ( !BattleLogicFunction___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BattleLogicFunction___c_TypeInfo);
    v60 = BattleLogicFunction___c_TypeInfo;
  }
  _9__122_2 = (System_Func_object__bool__o *)v60->static_fields->__9__122_2;
  if ( !_9__122_2 )
  {
    if ( !v60->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v60);
      v60 = BattleLogicFunction___c_TypeInfo;
    }
    v62 = (Il2CppObject *)v60->static_fields->__9;
    _9__122_2 = (System_Func_object__bool__o *)sub_1C715FC(System_Func_BattleBuffData_BuffData__bool__TypeInfo);
    System_Func_object__bool____ctor(_9__122_2, v62, Method_BattleLogicFunction___c__functionMoveState_b__122_2__, 0);
    static_fields = BattleLogicFunction___c_TypeInfo->static_fields;
    static_fields->__9__122_2 = (struct System_Func_BattleBuffData_BuffData__bool__o *)_9__122_2;
    sub_1C71354(
      (GrandQuestFolderBoardItem_o *)&static_fields->__9__122_2,
      (int32_t)_9__122_2,
      v64,
      v65,
      v66,
      v67,
      v68,
      v69);
  }
  v70 = System_Linq_Enumerable__Where_object_(
          (System_Collections_Generic_IEnumerable_TSource__o *)v30,
          (System_Func_TSource__bool__o *)_9__122_2,
          (const MethodInfo_3192108 *)Method_System_Linq_Enumerable_Where_BattleBuffData_BuffData___);
  StealBuffInfoGroup = (RemovedBuffInfoGroup_o *)System_Linq_Enumerable__ToArray_object_(
                                                   v70,
                                                   (const MethodInfo_318AFEC *)Method_System_Linq_Enumerable_ToArray_BattleBuffData_BuffData___);
  if ( !FieldEnvData_k__BackingField )
    goto LABEL_61;
  if ( BattleFieldEnvironmentData__AddBgmFromChangeBgmBuffArray(
         FieldEnvData_k__BackingField,
         (BattleBuffData_BuffData_array *)StealBuffInfoGroup,
         0)
    && v55 != 1 )
  {
    v71 = (BattleActionEffect_ChangeBgmBuff_o *)sub_1C715FC(BattleActionEffect_ChangeBgmBuff_TypeInfo);
    BattleActionEffect_ChangeBgmBuff___ctor(v71, 0);
    if ( !v55 )
    {
      BattleActionData_BuffData__SetActionEffectProc(
        (BattleActionData_BuffData_o *)v36,
        (BattleActionEffect_Base_o *)v71,
        0);
      return;
    }
LABEL_61:
    sub_1C71608(StealBuffInfoGroup, NoEffectObject);
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
  int32_t v75; // w3
  System_String_o *v76; // x4
  int32_t v77; // w5
  int64_t v78; // x6
  System_String_o *v79; // x7
  int32_t NPFixedDamageValue; // w21
  BattleLogic_DamageProcessArgs_o *damageProcessArgs; // x25
  BattleLogic_o *logic; // x24
  System_Int32_array *v83; // x27
  bool IsIncludeIgnoreIndividuality; // w29
  BattleActionData_DamageData_o *v85; // x20
  char v86; // w21
  bool v88; // [xsp+30h] [xbp-A0h]
  bool isRarityAtk; // [xsp+34h] [xbp-9Ch]
  BattleServantData_o *target; // [xsp+38h] [xbp-98h]
  BattleActionData_o *v91; // [xsp+40h] [xbp-90h]
  int32_t v92; // [xsp+48h] [xbp-88h]
  int32_t v93; // [xsp+4Ch] [xbp-84h]
  BattleActionData_o *actiona; // [xsp+50h] [xbp-80h]
  unsigned int v95; // [xsp+68h] [xbp-68h]

  if ( (byte_4CCA504 & 1) == 0 )
  {
    sub_1C713B0(&BattleActionData_TypeInfo);
    sub_1C713B0(&BattleLogic_DamageProcessArgs_TypeInfo);
    sub_1C713B0(&int_____TypeInfo);
    sub_1C713B0(&int___TypeInfo);
    sub_1C713B0(&Method_System_Collections_Generic_List_int__Add__);
    sub_1C713B0(&Method_System_Collections_Generic_List_int__ToArray__);
    sub_1C713B0(&Method_System_Collections_Generic_List_int___ctor__);
    sub_1C713B0(&System_Collections_Generic_List_int__TypeInfo);
    sub_1C713B0(&DataVals_OverChargeState___TypeInfo);
    sub_1C713B0(&Field__PrivateImplementationDetails__44BE0EBF7C907BA44AD83314C6AD0AA399AD5B73911C129D2CD6A85D4A056C90);
    byte_4CCA504 = 1;
  }
  v15 = (BattleActionData_o *)sub_1C715FC(BattleActionData_TypeInfo);
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
  v21 = (System_Collections_Generic_List_int__o *)sub_1C715FC(System_Collections_Generic_List_int__TypeInfo);
  System_Collections_Generic_List_int____ctor(
    v21,
    (const MethodInfo_37F2EA0 *)Method_System_Collections_Generic_List_int___ctor__);
  if ( !baseVals
    || (data = (BattleData_o *)DataVals__GetParam(baseVals, 3, 0, 0), !v21)
    || (items = v21->fields._items,
        v23 = Method_System_Collections_Generic_List_int__Add__,
        ++v21->fields._version,
        !items) )
  {
LABEL_93:
    sub_1C71608(data, v16);
  }
  size = v21->fields._size;
  actiona = action;
  v92 = funcIndex;
  if ( (unsigned int)size >= LODWORD(items->max_length) )
  {
    System_Collections_Generic_List_int___AddWithResize(
      v21,
      (int32_t)data,
      *(const MethodInfo_37F36F4 **)(*(_QWORD *)(v23[4] + 192LL) + 112LL));
  }
  else
  {
    v21->fields._size = size + 1;
    items->m_Items[size] = (int)data;
  }
  v25 = type - 3;
  v26 = 0;
  v93 = type;
  v27 = 0;
  target = ServantData;
  v91 = v15;
  v95 = v25;
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
          *(const MethodInfo_37F36F4 **)(*(_QWORD *)(v35[4] + 192LL) + 112LL));
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
      v21 = (System_Collections_Generic_List_int__o *)sub_1C715FC(System_Collections_Generic_List_int__TypeInfo);
      System_Collections_Generic_List_int____ctor(
        v21,
        (const MethodInfo_37F2EA0 *)Method_System_Collections_Generic_List_int___ctor__);
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
          *(const MethodInfo_37F36F4 **)(*(_QWORD *)(v39[4] + 192LL) + 112LL));
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
          *(const MethodInfo_37F36F4 **)(*(_QWORD *)(v48[4] + 192LL) + 112LL));
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
          *(const MethodInfo_37F36F4 **)(*(_QWORD *)(v54[4] + 192LL) + 112LL));
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
          *(const MethodInfo_37F36F4 **)(*(_QWORD *)(v61[4] + 192LL) + 112LL));
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
          *(const MethodInfo_37F36F4 **)(*(_QWORD *)(v65[4] + 192LL) + 112LL));
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
          *(const MethodInfo_37F36F4 **)(*(_QWORD *)(v68[4] + 192LL) + 112LL));
      }
      else
      {
        v21->fields._size = v69 + 1;
        v67->m_Items[v69] = (int)data;
      }
      buffIndv = DataVals__GetTargetList(baseVals, 0);
      v70 = (System_Array_o *)sub_1C71458(DataVals_OverChargeState___TypeInfo, 3);
      v71.fields.value = Field__PrivateImplementationDetails__44BE0EBF7C907BA44AD83314C6AD0AA399AD5B73911C129D2CD6A85D4A056C90;
      System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray_64730948(v70, v71, 0);
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
          *(const MethodInfo_37F36F4 **)(*(_QWORD *)(v42[4] + 192LL) + 112LL));
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
          *(const MethodInfo_37F36F4 **)(*(_QWORD *)(v45[4] + 192LL) + 112LL));
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
          *(const MethodInfo_37F36F4 **)(*(_QWORD *)(v51[4] + 192LL) + 112LL));
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
          *(const MethodInfo_37F36F4 **)(*(_QWORD *)(v58[4] + 192LL) + 112LL));
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
  switch ( v95 )
  {
    case 0u:
    case 1u:
      v32 = sub_1C71458(int___TypeInfo, 1);
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
      buffIndv = (System_Int32_array *)sub_1C71458(int___TypeInfo, 1);
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
        v26 = sub_1C71458(int_____TypeInfo, 1);
        data = (BattleData_o *)DataVals__GetAndCheckIndividuality(baseVals, 0);
        if ( !v26 )
          goto LABEL_93;
        if ( !*(_DWORD *)(v26 + 24) )
LABEL_94:
          sub_1C71610(data);
        *(_QWORD *)(v26 + 32) = data;
        sub_1C71354((GrandQuestFolderBoardItem_o *)(v26 + 32), (int32_t)data, v74, v75, v76, v77, v78, v79);
      }
      v27 = 0;
LABEL_84:
      v28 = 0;
      TargetRarityList = 0;
      v30 = 0;
      buffIndv = 0;
      v32 = 0;
LABEL_85:
      v88 = v30;
      isRarityAtk = v28;
      NPFixedDamageValue = DataVals__GetNPFixedDamageValue(baseVals, 0);
      damageProcessArgs = (BattleLogic_DamageProcessArgs_o *)sub_1C715FC(BattleLogic_DamageProcessArgs_TypeInfo);
      BattleLogic_DamageProcessArgs___ctor(damageProcessArgs, 0, NPFixedDamageValue, (System_Int32_array_array *)v26, 0);
      logic = this->fields.logic;
      v83 = System_Collections_Generic_List_int___ToArray(
              v21,
              (const MethodInfo_37F51AC *)Method_System_Collections_Generic_List_int__ToArray__);
      IsIncludeIgnoreIndividuality = DataVals__IsIncludeIgnoreIndividuality(baseVals, 0);
      data = (BattleData_o *)DataVals__isParam(baseVals, 91, 0);
      if ( !logic )
        goto LABEL_93;
      data = (BattleData_o *)BattleLogic__getFunctionNpDamagelist(
                               logic,
                               v19,
                               target,
                               v83,
                               v92,
                               v93,
                               actiona,
                               (System_Int32_array *)v32,
                               buffIndv,
                               TargetRarityList,
                               IsIncludeIgnoreIndividuality,
                               (unsigned __int8)data & 1,
                               damageProcessArgs,
                               0);
      v85 = (BattleActionData_DamageData_o *)data;
      if ( v95 < 8 && ((0x93u >> v95) & 1) != 0 )
      {
        v86 = 1;
        if ( !data )
          goto LABEL_93;
      }
      else
      {
        v86 = v27 & v88;
        if ( !data )
          goto LABEL_93;
      }
      BattleActionData_DamageData__addAttackSideEffectAction((BattleActionData_DamageData_o *)data, 80, 0);
      if ( !v91 )
        goto LABEL_93;
      BattleActionData__setDamageData(v91, v85, baseVals, v86, isRarityAtk, 0);
      return v91;
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
  int32_t v16; // w3
  System_String_o *v17; // x4
  int32_t v18; // w5
  int64_t v19; // x6
  System_String_o *v20; // x7
  struct BattleData_o *v21; // x8
  System_Collections_Generic_List_object__o *v22; // x21
  System_Comparison_T__o *v23; // x22
  Il2CppObject *v24; // x23
  struct BattleLogicFunction___c_StaticFields *v25; // x0
  int32_t v26; // w2
  int32_t v27; // w3
  System_String_o *v28; // x4
  int32_t v29; // w5
  int64_t v30; // x6
  System_String_o *v31; // x7
  struct BattleData_o *v32; // x8
  int v33; // w8
  unsigned int *v34; // x21
  int32_t v35; // w23
  BattleServantData_o *v36; // x22
  struct BattleData_o *v37; // x8
  unsigned __int64 v38; // x24
  struct System_Int32_array *p_entryid; // x9
  unsigned __int64 max_length_low; // x10
  unsigned __int64 v41; // x9
  __int64 v42; // x22
  struct System_Int32_array *v43; // x9
  BattleLogicTask_o *v44; // x21

  if ( (byte_4CCA517 & 1) == 0 )
  {
    sub_1C713B0(&System_Action_BattleServantData__TypeInfo);
    sub_1C713B0(&BattleActionData_TypeInfo);
    sub_1C713B0(&BattleLogicTask_TypeInfo);
    sub_1C713B0(&System_Comparison_BattleServantData__TypeInfo);
    sub_1C713B0(&Method_System_Collections_Generic_List_BattleServantData__ForEach__);
    sub_1C713B0(&Method_System_Collections_Generic_List_BattleServantData__Sort__);
    sub_1C713B0(&Method_System_Collections_Generic_List_BattleServantData__ToArray__);
    sub_1C713B0(&Method_BattleLogicFunction___c__functionPtShuffle_b__101_0__);
    sub_1C713B0(&Method_BattleLogicFunction___c__functionPtShuffle_b__101_1__);
    sub_1C713B0(&BattleLogicFunction___c_TypeInfo);
    byte_4CCA517 = 1;
  }
  v7 = (BattleActionData_o *)sub_1C715FC(BattleActionData_TypeInfo);
  BattleActionData___ctor(v7, 0);
  data = this->fields.data;
  if ( !data )
    goto LABEL_53;
  BattleData__SubBuffFromPT_46036532((BattleData_o *)data, 0, 0);
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
    v12 = (System_Action_object__o *)sub_1C715FC(System_Action_BattleServantData__TypeInfo);
    System_Action_object____ctor(v12, v13, Method_BattleLogicFunction___c__functionPtShuffle_b__101_0__, 0);
    static_fields = BattleLogicFunction___c_TypeInfo->static_fields;
    static_fields->__9__101_0 = (struct System_Action_BattleServantData__o *)v12;
    sub_1C71354((GrandQuestFolderBoardItem_o *)&static_fields->__9__101_0, (int32_t)v12, v15, v16, v17, v18, v19, v20);
  }
  if ( !player_datalist )
    goto LABEL_53;
  System_Collections_Generic_List_object___ForEach(
    player_datalist,
    (System_Action_T__o *)v12,
    (const MethodInfo_3811158 *)Method_System_Collections_Generic_List_BattleServantData__ForEach__);
  v21 = this->fields.data;
  if ( !v21 )
    goto LABEL_53;
  data = BattleLogicFunction___c_TypeInfo;
  v22 = (System_Collections_Generic_List_object__o *)v21->fields.player_datalist;
  if ( !BattleLogicFunction___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BattleLogicFunction___c_TypeInfo);
    data = BattleLogicFunction___c_TypeInfo;
  }
  v23 = *(System_Comparison_T__o **)(*((_QWORD *)data + 23) + 88LL);
  if ( !v23 )
  {
    if ( !*((_DWORD *)data + 56) )
    {
      j_il2cpp_runtime_class_init_0(data);
      data = BattleLogicFunction___c_TypeInfo;
    }
    v24 = (Il2CppObject *)**((_QWORD **)data + 23);
    v23 = (System_Comparison_T__o *)sub_1C715FC(System_Comparison_BattleServantData__TypeInfo);
    System_Comparison_object____ctor(v23, v24, Method_BattleLogicFunction___c__functionPtShuffle_b__101_1__, 0);
    v25 = BattleLogicFunction___c_TypeInfo->static_fields;
    v25->__9__101_1 = (struct System_Comparison_BattleServantData__o *)v23;
    sub_1C71354((GrandQuestFolderBoardItem_o *)&v25->__9__101_1, (int32_t)v23, v26, v27, v28, v29, v30, v31);
  }
  if ( !v22 )
    goto LABEL_53;
  System_Collections_Generic_List_object___Sort_58794460(
    v22,
    v23,
    (const MethodInfo_38121DC *)Method_System_Collections_Generic_List_BattleServantData__Sort__);
  v32 = this->fields.data;
  if ( !v32 )
    goto LABEL_53;
  data = v32->fields.player_datalist;
  if ( !data )
    goto LABEL_53;
  data = System_Collections_Generic_List_object___ToArray(
           (System_Collections_Generic_List_object__o *)data,
           (const MethodInfo_3812270 *)Method_System_Collections_Generic_List_BattleServantData__ToArray__);
  if ( !data )
    goto LABEL_53;
  v33 = *((_DWORD *)data + 6);
  v34 = (unsigned int *)data;
  if ( v33 >= 1 )
  {
    v35 = 0;
    while ( 1 )
    {
      if ( v35 >= (unsigned int)v33 )
LABEL_54:
        sub_1C71610(data);
      v36 = *(BattleServantData_o **)&v34[2 * v35 + 8];
      if ( !v36 )
        break;
      if ( v36->fields.isEntry )
      {
        data = (void *)BattleServantData__isAlive(v36, 0, 0);
        if ( ((unsigned __int8)data & 1) != 0 )
          v36->fields.isEntry = 0;
      }
      v36->fields.deckIndex = v35;
      v33 = v34[6];
      if ( ++v35 >= v33 )
        goto LABEL_32;
    }
LABEL_53:
    sub_1C71608(data, v8);
  }
LABEL_32:
  v37 = this->fields.data;
  if ( !v37 )
    goto LABEL_53;
  v38 = 0;
  while ( 1 )
  {
    p_entryid = v37->fields.p_entryid;
    if ( !p_entryid )
      goto LABEL_53;
    max_length_low = LODWORD(p_entryid->max_length);
    if ( (__int64)v38 >= (int)max_length_low )
      break;
    if ( v38 >= max_length_low )
      goto LABEL_54;
    p_entryid->m_Items[v38] = -1;
    v41 = v34[6];
    if ( (__int64)v38 < (int)v41 )
    {
      if ( v38 >= v41 )
        goto LABEL_54;
      v42 = *(_QWORD *)&v34[2 * v38 + 8];
      if ( !v42 )
        goto LABEL_53;
      data = (void *)BattleServantData__isAlive(*(BattleServantData_o **)&v34[2 * v38 + 8], 0, 0);
      v37 = this->fields.data;
      if ( ((unsigned __int8)data & 1) != 0 )
      {
        if ( !v37 )
          goto LABEL_53;
        v43 = v37->fields.p_entryid;
        if ( !v43 )
          goto LABEL_53;
        if ( v38 >= LODWORD(v43->max_length) )
          goto LABEL_54;
        v43->m_Items[v38] = *(_DWORD *)(v42 + 24);
        *(_BYTE *)(v42 + 504) = 1;
        *(_BYTE *)(v42 + 565) = 1;
      }
    }
    ++v38;
    if ( !v37 )
      goto LABEL_53;
  }
  BattleData__createCommandCard(v37, 0);
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
  v44 = (BattleLogicTask_o *)sub_1C715FC(BattleLogicTask_TypeInfo);
  BattleLogicTask___ctor(v44, 0);
  if ( !v44 )
    goto LABEL_53;
  BattleLogicTask__setCheckEntryFunction(v44, 0);
  data = this->fields.logic;
  if ( !data )
    goto LABEL_53;
  BattleLogic__AddBattleLogicTask((BattleLogic_o *)data, v44, 0);
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
  int32_t v24; // w3
  System_String_o *v25; // x4
  int32_t v26; // w5
  int64_t v27; // x6
  System_String_o *v28; // x7
  __int64 v29; // x0
  int32_t v30; // w2
  int32_t v31; // w3
  System_String_o *v32; // x4
  int32_t v33; // w5
  int64_t v34; // x6
  System_String_o *v35; // x7
  int32_t v36; // w2
  int32_t v37; // w3
  System_String_o *v38; // x4
  int32_t v39; // w5
  int64_t v40; // x6
  System_String_o *v41; // x7
  __int64 v42; // x0
  int32_t v43; // w2
  int32_t v44; // w3
  System_String_o *v45; // x4
  int32_t v46; // w5
  int64_t v47; // x6
  System_String_o *v48; // x7
  __int64 v49; // x0
  int32_t v50; // w2
  int32_t v51; // w3
  System_String_o *v52; // x4
  int32_t v53; // w5
  int64_t v54; // x6
  System_String_o *v55; // x7
  __int64 v56; // x0
  int32_t v57; // w2
  int32_t v58; // w3
  System_String_o *v59; // x4
  int32_t v60; // w5
  int64_t v61; // x6
  System_String_o *v62; // x7
  struct BattleData_o *v63; // x8
  int32_t uniqueId; // w21
  int32_t v65; // w22
  bool IsOpponentPTUniqueID; // w0

  if ( (byte_4CCA515 & 1) == 0 )
  {
    sub_1C713B0(&BattleActionData_TypeInfo);
    sub_1C713B0(&BattleActionData_DamageData_TypeInfo);
    sub_1C713B0(&int___TypeInfo);
    sub_1C713B0(&BattleBuffData_ShowBuffData___TypeInfo);
    byte_4CCA515 = 1;
  }
  v11 = (BattleActionData_o *)sub_1C715FC(BattleActionData_TypeInfo);
  BattleActionData___ctor(v11, 0);
  data = (__int64)this->fields.data;
  if ( !data )
    goto LABEL_28;
  data = (__int64)BattleData__getServantData((BattleData_o *)data, playerId, 0);
  if ( !this->fields.data )
    goto LABEL_28;
  v14 = (BattleServantData_o *)data;
  ServantData = BattleData__getServantData(this->fields.data, targetId, 0);
  v16 = sub_1C715FC(BattleActionData_DamageData_TypeInfo);
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
  v22 = sub_1C71458(BattleBuffData_ShowBuffData___TypeInfo, 0);
  *(_QWORD *)(v16 + 64) = v22;
  sub_1C71354((GrandQuestFolderBoardItem_o *)(v16 + 64), v22, v23, v24, v25, v26, v27, v28);
  v29 = sub_1C71458(BattleBuffData_ShowBuffData___TypeInfo, 0);
  *(_QWORD *)(v16 + 72) = v29;
  sub_1C71354((GrandQuestFolderBoardItem_o *)(v16 + 72), v29, v30, v31, v32, v33, v34, v35);
  data = sub_1C71458(int___TypeInfo, 1);
  if ( !data )
    goto LABEL_28;
  if ( !*(_DWORD *)(data + 24) )
    sub_1C71610(data);
  *(_DWORD *)(data + 32) = v19;
  *(_QWORD *)(v16 + 96) = data;
  sub_1C71354((GrandQuestFolderBoardItem_o *)(v16 + 96), data, v36, v37, v38, v39, v40, v41);
  BattleServantData__CacheDealtDamage(v14, (BattleActionData_DamageData_o *)v16, 0);
  v42 = sub_1C71458(int___TypeInfo, 0);
  *(_QWORD *)(v16 + 104) = v42;
  sub_1C71354((GrandQuestFolderBoardItem_o *)(v16 + 104), v42, v43, v44, v45, v46, v47, v48);
  v49 = sub_1C71458(int___TypeInfo, 0);
  *(_QWORD *)(v16 + 112) = v49;
  sub_1C71354((GrandQuestFolderBoardItem_o *)(v16 + 112), v49, v50, v51, v52, v53, v54, v55);
  v56 = sub_1C71458(int___TypeInfo, 0);
  *(_QWORD *)(v16 + 120) = v56;
  sub_1C71354((GrandQuestFolderBoardItem_o *)(v16 + 120), v56, v57, v58, v59, v60, v61, v62);
  if ( !ServantData )
    goto LABEL_28;
  BattleServantData__provisionalDamage(ServantData, v19, 0);
  BattleServantData__ResultDamage(ServantData, v19, v14, 0, 0, 0, 0);
  data = BattleServantData__isLogicResultAlive(ServantData, 0);
  if ( (data & 1) == 0 )
  {
    v63 = this->fields.data;
    if ( !v63 )
      goto LABEL_28;
    ServantData->fields.deadTurn = v63->fields.typeTurn;
  }
  BattleActionData_DamageData__addAttackSideEffectAction((BattleActionData_DamageData_o *)v16, 80, 0);
  if ( !v11
    || (BattleActionData__SetFuncDamageData(v11, (BattleActionData_DamageData_o *)v16, baseVals, 0),
        (data = (__int64)this->fields.data) == 0) )
  {
LABEL_28:
    sub_1C71608(data, v12);
  }
  uniqueId = v14->fields.uniqueId;
  v65 = *(_DWORD *)(data + 196);
  IsOpponentPTUniqueID = BattleData__IsOpponentPTUniqueID((BattleData_o *)data, targetId, playerId, 0);
  BattleServantData__setActionHistory(ServantData, uniqueId, 6, v65, IsOpponentPTUniqueID, 0);
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
  int32_t v17; // w3
  System_String_o *v18; // x4
  int32_t v19; // w5
  int64_t v20; // x6
  System_String_o *v21; // x7
  BattleActionData_o *v22; // x21
  int32_t Param; // w25
  int32_t v24; // w22
  BattleServantData_o *EnemyServantData; // x25
  BattleServantData_o *EnemyServantDataFromNpcId; // x22
  struct BattleData_o *v27; // x8
  int v28; // w9
  struct System_Int32_array *e_entryid; // x10
  int max_length; // w10
  struct System_Int32_array *v31; // x10
  BattleActionData_o *result; // x0
  int DeckIndex; // w23
  struct BattleData_o *v34; // x8
  struct System_Int32_array *v35; // x9
  il2cpp_array_size_t v36; // x11
  int32_t v37; // w24
  int32_t uniqueId; // w10
  __int64 v39; // x8
  __int64 v40; // x11
  int32_t *v41; // x9
  struct System_Int32_array *v42; // x8
  unsigned __int64 max_length_low; // x10
  unsigned __int64 v44; // x9
  int32_t *m_Items; // x12

  if ( (byte_4CCA50F & 1) == 0 )
  {
    sub_1C713B0(&BattleActionData_TypeInfo);
    sub_1C713B0(&Method_System_Linq_Enumerable_Count_BattleServantData____78678032);
    sub_1C713B0(&System_Func_BattleServantData__bool__TypeInfo);
    sub_1C713B0(&Method_BattleLogicFunction___c__functionReplaceEnemyMember_b__93_0__);
    sub_1C713B0(&BattleLogicFunction___c_TypeInfo);
    byte_4CCA50F = 1;
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
    _9__93_0 = (System_Func_object__bool__o *)sub_1C715FC(System_Func_BattleServantData__bool__TypeInfo);
    System_Func_object__bool____ctor(
      _9__93_0,
      v14,
      Method_BattleLogicFunction___c__functionReplaceEnemyMember_b__93_0__,
      0);
    static_fields = BattleLogicFunction___c_TypeInfo->static_fields;
    static_fields->__9__93_0 = (struct System_Func_BattleServantData__bool__o *)_9__93_0;
    sub_1C71354(
      (GrandQuestFolderBoardItem_o *)&static_fields->__9__93_0,
      (int32_t)_9__93_0,
      v16,
      v17,
      v18,
      v19,
      v20,
      v21);
  }
  data = (BattleData_o *)System_Linq_Enumerable__Count_object__51826244(
                           enemy_datalist,
                           (System_Func_TSource__bool__o *)_9__93_0,
                           (const MethodInfo_316CE44 *)Method_System_Linq_Enumerable_Count_BattleServantData____78678032);
  if ( (int)data < 4 )
    return 0;
  if ( !v10 )
    goto LABEL_61;
  if ( !v10->fields.m_CancellationTokenSource )
    return 0;
  v22 = (BattleActionData_o *)sub_1C715FC(BattleActionData_TypeInfo);
  BattleActionData___ctor(v22, 0);
  if ( !baseVals )
    goto LABEL_61;
  Param = DataVals__GetParam(baseVals, 47, 0, 0);
  data = (BattleData_o *)DataVals__GetParam(baseVals, 48, 0, 0);
  if ( !this->fields.data )
    goto LABEL_61;
  v24 = (int)data;
  data = (BattleData_o *)BattleData__getEnemyServantDataFromNpcId(this->fields.data, Param, 0);
  if ( !this->fields.data )
    goto LABEL_61;
  EnemyServantData = (BattleServantData_o *)data;
  EnemyServantDataFromNpcId = BattleData__getEnemyServantDataFromNpcId(this->fields.data, v24, 0);
  if ( !EnemyServantData )
  {
    data = (BattleData_o *)DataVals__GetParam(baseVals, 49, 0, 0);
    v27 = this->fields.data;
    v28 = (_DWORD)data - 1;
    if ( (int)data - 1 < 0 )
    {
      if ( !v27 )
        goto LABEL_61;
      v28 = 0;
    }
    else
    {
      if ( !v27 )
        goto LABEL_61;
      e_entryid = v27->fields.e_entryid;
      if ( !e_entryid )
        goto LABEL_61;
      max_length = e_entryid->max_length;
      if ( v28 >= max_length )
        v28 = max_length - 1;
    }
    v31 = v27->fields.e_entryid;
    if ( !v31 )
      goto LABEL_61;
    if ( (unsigned int)v28 >= LODWORD(v31->max_length) )
      goto LABEL_65;
    data = (BattleData_o *)BattleData__getEnemyServantData(this->fields.data, v31->m_Items[v28], 0);
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
    v34 = this->fields.data;
    if ( v34 )
    {
      v35 = v34->fields.e_entryid;
      if ( v35 )
      {
        v36 = v35->max_length;
        v37 = (int)data;
        if ( DeckIndex >= (int)v36 )
          goto LABEL_47;
        if ( DeckIndex < (unsigned int)v36 )
        {
          if ( v35->m_Items[DeckIndex] == EnemyServantData->fields.uniqueId )
          {
            EnemyServantData->fields.deckIndex = (int)data;
            EnemyServantDataFromNpcId->fields.deckIndex = DeckIndex;
LABEL_54:
            v42 = v34->fields.e_entryid;
            if ( v42 )
            {
              max_length_low = LODWORD(v42->max_length);
              v44 = 0;
              m_Items = v42->m_Items;
              while ( (__int64)v44 < (int)max_length_low )
              {
                if ( v44 >= max_length_low )
                  goto LABEL_65;
                if ( m_Items[v44] == EnemyServantData->fields.uniqueId )
                  m_Items[v44] = EnemyServantDataFromNpcId->fields.uniqueId;
                ++v44;
              }
              if ( v22 )
              {
                BattleActionData__setReplaceMember(
                  v22,
                  DeckIndex,
                  EnemyServantDataFromNpcId->fields.uniqueId,
                  EnemyServantData->fields.uniqueId,
                  funcIndex,
                  0);
                data = (BattleData_o *)this->fields.logic;
                if ( data )
                {
                  BattleLogic__UpdateCondBuffValueFlag((BattleLogic_o *)data, 0);
                  return v22;
                }
              }
            }
            goto LABEL_61;
          }
LABEL_47:
          if ( (int)v36 >= 1 )
          {
            uniqueId = EnemyServantData->fields.uniqueId;
            v39 = 0;
            v40 = (unsigned int)v35->max_length;
            v41 = v35->m_Items;
            do
            {
              if ( v41[v39] == uniqueId )
                EnemyServantData->fields.deckIndex = v39;
              ++v39;
            }
            while ( v40 != v39 );
          }
          data = (BattleData_o *)BattleServantData__getDeckIndex(EnemyServantData, 0);
          v34 = this->fields.data;
          EnemyServantData->fields.deckIndex = v37;
          EnemyServantDataFromNpcId->fields.deckIndex = (int)data;
          if ( !v34 )
            goto LABEL_61;
          DeckIndex = (int)data;
          goto LABEL_54;
        }
LABEL_65:
        sub_1C71610(data);
      }
    }
LABEL_61:
    sub_1C71608(data, funcEnt);
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

  if ( (byte_4CCA50E & 1) == 0 )
  {
    sub_1C713B0(&BattleActionData_TypeInfo);
    byte_4CCA50E = 1;
  }
  v11 = (BattleActionData_o *)sub_1C715FC(BattleActionData_TypeInfo);
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
    sub_1C71610(data);
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
    || (BattleData__SubBuffFromPT_46036532(data, v15, 0), (data = this->fields.data) == 0)
    || (BattleData__SubBuffExitSvt(data, v14, 0), (data = (BattleData_o *)this->fields.logic) == 0) )
  {
LABEL_27:
    sub_1C71608(data, v12);
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

  if ( (byte_4CCA50D & 1) == 0 )
  {
    sub_1C713B0(&BattleActionData_TypeInfo);
    byte_4CCA50D = 1;
  }
  v7 = (BattleActionData_o *)sub_1C715FC(BattleActionData_TypeInfo);
  BattleActionData___ctor(v7, 0);
  data = this->fields.data;
  if ( !data
    || (BattleData__SubBuffFromPT_46036532(data, 0, 0), (data = this->fields.data) == 0)
    || (BattleData__shuffleCommand(data, 0), (data = (BattleData_o *)this->fields.logic) == 0)
    || (BattleLogic__drawCommand((BattleLogic_o *)data, 0), (data = (BattleData_o *)this->fields.logic) == 0)
    || (BattleLogic__setDrawCard((BattleLogic_o *)data, 0), !v7) )
  {
    sub_1C71608(data, v8);
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
  int32_t v24; // w3
  System_String_o *v25; // x4
  int32_t v26; // w5
  int64_t v27; // x6
  System_String_o *v28; // x7
  unsigned int uniqueId; // w8
  struct System_String_o *popupText; // x1
  struct System_Int32_array *effectList; // x1
  int32_t v32; // w2
  int32_t v33; // w3
  System_String_o *v34; // x4
  int32_t v35; // w5
  int64_t v36; // x6
  System_String_o *v37; // x7
  const MethodInfo *v38; // [xsp+0h] [xbp-60h]

  if ( (byte_4CCA51B & 1) == 0 )
  {
    sub_1C713B0(&BattleActionData_TypeInfo);
    sub_1C713B0(&BattleActionData_BuffData_TypeInfo);
    byte_4CCA51B = 1;
  }
  v13 = (BattleActionData_o *)sub_1C715FC(BattleActionData_TypeInfo);
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
    return BattleLogicFunction__getNoEffectObject(this, targetId, funcIdx, dataVals, isSideEffect, 0, 0, 0, v38);
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
  v22 = sub_1C715FC(BattleActionData_BuffData_TypeInfo);
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
  sub_1C71354((GrandQuestFolderBoardItem_o *)(v22 + 56), (int32_t)popupText, v23, v24, v25, v26, v27, v28);
  *(_QWORD *)(v22 + 64) = *(_QWORD *)&funcEnt->fields.popupIconId;
  effectList = funcEnt->fields.effectList;
  *(_QWORD *)(v22 + 72) = effectList;
  sub_1C71354((GrandQuestFolderBoardItem_o *)(v22 + 72), (int32_t)effectList, v32, v33, v34, v35, v36, v37);
  *(_DWORD *)(v22 + 32) = 2;
  if ( !v13 )
LABEL_22:
    sub_1C71608(data, v14);
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
  int32_t v13; // w3
  System_String_o *v14; // x4
  int32_t v15; // w5
  int64_t v16; // x6
  System_String_o *v17; // x7
  int32_t targetId; // w8
  int32_t v19; // w1
  BattleData_o *data; // x22
  BattleActionData_SkillShiftServant_o *v21; // x21
  bool isOverwriteShift; // [xsp+4h] [xbp-4Ch] BYREF
  System_String_o *motionName; // [xsp+8h] [xbp-48h] BYREF

  v8 = this;
  if ( (byte_4CCA524 & 1) == 0 )
  {
    sub_1C713B0(&BattleActionData_TypeInfo);
    sub_1C713B0(&BattleActorControl_TypeInfo);
    this = (BattleLogicFunction_o *)sub_1C713B0(&BattleActionData_SkillShiftServant_TypeInfo);
    byte_4CCA524 = 1;
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
  v11 = sub_1C715FC(BattleActionData_TypeInfo);
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
  v19 = (int)motionName;
  *(_QWORD *)(v11 + 72) = motionName;
  sub_1C71354((GrandQuestFolderBoardItem_o *)(v11 + 72), v19, v12, v13, v14, v15, v16, v17);
  *(_BYTE *)(v11 + 252) = isOverwriteShift;
  *(_BYTE *)(v11 + 253) = DataVals__GetParam(baseVals, 233, 0, 0) == 1;
  BattleActionData__setStateMotion((BattleActionData_o *)v11, 0);
  data = v8->fields.data;
  v21 = (BattleActionData_SkillShiftServant_o *)sub_1C715FC(BattleActionData_SkillShiftServant_TypeInfo);
  BattleActionData_SkillShiftServant___ctor(v21, data, Param, 0);
  if ( !v21 )
LABEL_13:
    sub_1C71608(this, actionData);
  BattleActionData_ShiftServant__setBeforeSvtData((BattleActionData_ShiftServant_o *)v21, targetData, 0);
  if ( actionData->fields.isOverwriteShift )
    BattleActionData_ShiftServant__SetBeforeWeapon((BattleActionData_ShiftServant_o *)v21, targetData, 0);
  BattleActionData__setShiftServant((BattleActionData_o *)v11, (BattleActionData_ShiftServant_o *)v21, 0);
  BattleActionData__setShiftServant(actionData, (BattleActionData_ShiftServant_o *)v21, 0);
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
  int32_t v24; // w3
  System_String_o *v25; // x4
  int32_t v26; // w5
  int64_t v27; // x6
  System_String_o *v28; // x7
  struct System_Collections_Generic_List_BattleBuffData_BuffData__o *RemovedAllBuffList_k__BackingField; // x27
  BattleActionData_o *v30; // x25
  const MethodInfo *v32; // [xsp+8h] [xbp-78h]
  BattleLogicFunction_ProcListInArgs_o *v33; // [xsp+18h] [xbp-68h]

  if ( (byte_4CCA501 & 1) == 0 )
  {
    sub_1C713B0(&BattleActionData_TypeInfo);
    sub_1C713B0(&BattleServantSnapShotOnBuffUpdate_TypeInfo);
    sub_1C713B0(&Method_System_Collections_Generic_List_BattleBuffData_BuffData__get_Count__);
    byte_4CCA501 = 1;
  }
  data = this->fields.data;
  if ( !data )
    goto LABEL_13;
  ServantData = BattleData__getServantData(data, targetId, 0);
  v18 = (BattleServantSnapShotOnBuffUpdate_o *)sub_1C715FC(BattleServantSnapShotOnBuffUpdate_TypeInfo);
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
  sub_1C71354((GrandQuestFolderBoardItem_o *)subBuffInfo, (int32_t)v22, v23, v24, v25, v26, v27, v28);
  if ( !*subBuffInfo )
    goto LABEL_13;
  RemovedAllBuffList_k__BackingField = (*subBuffInfo)->fields._RemovedAllBuffList_k__BackingField;
  if ( !RemovedAllBuffList_k__BackingField )
    goto LABEL_13;
  if ( RemovedAllBuffList_k__BackingField->fields._size >= 1 )
  {
    v30 = (BattleActionData_o *)sub_1C715FC(BattleActionData_TypeInfo);
    BattleActionData___ctor(v30, 0);
    BattleLogicFunction__ApplySubBuffChanges(
      this,
      v30,
      RemovedAllBuffList_k__BackingField,
      targetId,
      v18,
      baseVals,
      index,
      isCommandSideEffect,
      v33,
      v32);
    data = (BattleData_o *)this->fields.logic;
    if ( data )
    {
      BattleLogic__UpdateCondBuffValueFlag((BattleLogic_o *)data, 0);
      return v30;
    }
LABEL_13:
    sub_1C71608(data, *(_QWORD *)&targetId);
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
  int32_t v26; // w3
  System_String_o *v27; // x4
  int32_t v28; // w5
  int64_t v29; // x6
  System_String_o *v30; // x7
  BattleLogicFunctionUtilities_FunctionProgressCache_o *v31; // x29
  BattleLogicFunctionUtilities_FunctionProgressCache_SvtCache_o *ElemByUniqueId; // x19
  BattleLogicSkill_SkillExecArgs_o *v33; // x20
  struct BattleServantSnapShot_o *Before_k__BackingField; // x8
  struct BattleServantSnapShot_o *After_k__BackingField; // x1
  int32_t v36; // w2
  int32_t v37; // w3
  System_String_o *v38; // x4
  int32_t v39; // w5
  int64_t v40; // x6
  System_String_o *v41; // x7
  struct BattleServantSnapShot_o *v42; // x8
  __int64 naturalAligment; // x11
  BattleServantSnapShotShiftServant_o *v44; // x1
  struct BattleLogicFunctionUtilities_FunctionProgressCache_SvtCache_array *SvtCacheArray_k__BackingField; // x19
  int max_length; // w8
  BattleActionData_o *v47; // x27
  unsigned int v48; // w23
  BattleLogicFunctionUtilities_FunctionProgressCache_SvtCache_o *v49; // x22
  struct BattleServantData_o *SvtData_k__BackingField; // x8
  int32_t uniqueId; // w20
  BattleActionData_BuffData_o *v52; // x26
  BattleServantSnapShot_o *v53; // x27
  BattleServantSnapShot_o *v54; // x28
  BattleActionEffect_AddSubChangeMaxHpBuff_o *v55; // x29
  struct BattleServantData_o *v56; // x8
  System_Collections_Generic_IEnumerable_TSource__o *buffdatalist; // x20
  System_Func_object__bool__o *v58; // x21
  struct BattleServantSnapShot_o *v59; // x8
  struct BattleData_o *v60; // x8
  BattleLogicFunctionUtilities_FunctionProgressCache_SvtCache_o *v62; // [xsp+8h] [xbp-98h]
  BattleServantData_o *v63; // [xsp+10h] [xbp-90h]
  BattleLogicFunction_o *v64; // [xsp+18h] [xbp-88h]
  BattleLogicFunction___c__DisplayClass95_0_o *v65; // [xsp+28h] [xbp-78h]
  BattleActionData_o *v66; // [xsp+30h] [xbp-70h]

  if ( (byte_4CCA511 & 1) == 0 )
  {
    sub_1C713B0(&BattleActionEffect_AddSubChangeMaxHpBuff_TypeInfo);
    sub_1C713B0(&BattleActionData_TypeInfo);
    sub_1C713B0(&BattleServantSnapShotShiftServant_TypeInfo);
    sub_1C713B0(&BattleActionData_BuffData_TypeInfo);
    sub_1C713B0(&Method_System_Linq_Enumerable_FirstOrDefault_BattleActionData_BuffData___);
    sub_1C713B0(&System_Func_BattleServantData__BattleServantSnapShot__TypeInfo);
    sub_1C713B0(&System_Func_BattleActionData_BuffData__bool__TypeInfo);
    sub_1C713B0(&BattleLogicFunctionUtilities_FunctionProgressCache_TypeInfo);
    sub_1C713B0(&BattleActionData_ShiftServant_TypeInfo);
    sub_1C713B0(&BattleLogicSkill_SkillExecArgs_TypeInfo);
    sub_1C713B0(&Method_BattleLogicFunction___c__functionTransformServant_b__95_0__);
    sub_1C713B0(&Method_BattleLogicFunction___c__DisplayClass95_0__functionTransformServant_b__1__);
    sub_1C713B0(&BattleLogicFunction___c__DisplayClass95_0_TypeInfo);
    sub_1C713B0(&BattleLogicFunction___c_TypeInfo);
    byte_4CCA511 = 1;
  }
  v11 = (BattleLogicFunction___c__DisplayClass95_0_o *)sub_1C715FC(BattleLogicFunction___c__DisplayClass95_0_TypeInfo);
  BattleLogicFunction___c__DisplayClass95_0___ctor(v11, 0);
  if ( !v11 )
    goto LABEL_49;
  v11->fields.targetId = targetId;
  v14 = (BattleActionData_o *)sub_1C715FC(BattleActionData_TypeInfo);
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
  v65 = v11;
  v18 = sub_1C715FC(BattleActionData_ShiftServant_TypeInfo);
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
  v66 = v14;
  _9__95_0 = (System_Func_object__object__o *)v20->static_fields->__9__95_0;
  if ( !_9__95_0 )
  {
    if ( !v20->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v20);
      v20 = BattleLogicFunction___c_TypeInfo;
    }
    v23 = (Il2CppObject *)v20->static_fields->__9;
    _9__95_0 = (System_Func_object__object__o *)sub_1C715FC(System_Func_BattleServantData__BattleServantSnapShot__TypeInfo);
    System_Func_object__object____ctor(
      _9__95_0,
      v23,
      Method_BattleLogicFunction___c__functionTransformServant_b__95_0__,
      0);
    static_fields = BattleLogicFunction___c_TypeInfo->static_fields;
    static_fields->__9__95_0 = (struct System_Func_BattleServantData__BattleServantSnapShot__o *)_9__95_0;
    sub_1C71354(
      (GrandQuestFolderBoardItem_o *)&static_fields->__9__95_0,
      (int32_t)_9__95_0,
      v25,
      v26,
      v27,
      v28,
      v29,
      v30);
  }
  v31 = (BattleLogicFunctionUtilities_FunctionProgressCache_o *)sub_1C715FC(BattleLogicFunctionUtilities_FunctionProgressCache_TypeInfo);
  BattleLogicFunctionUtilities_FunctionProgressCache___ctor(
    v31,
    v21,
    (System_Func_BattleServantData__BattleServantSnapShot__o *)_9__95_0,
    0);
  if ( !v31 )
    goto LABEL_49;
  BattleLogicFunctionUtilities_FunctionProgressCache__MakeBeforeSvtCache(v31, 0);
  ElemByUniqueId = BattleLogicFunctionUtilities_FunctionProgressCache__GetElemByUniqueId(v31, v11->fields.targetId, 0);
  v33 = (BattleLogicSkill_SkillExecArgs_o *)sub_1C715FC(BattleLogicSkill_SkillExecArgs_TypeInfo);
  BattleLogicSkill_SkillExecArgs___ctor(v33, 0);
  BattleServantData__setTransformServant(v15, this->fields.data, Param, v17, 0, v33, 0);
  if ( !ElemByUniqueId )
    goto LABEL_49;
  Before_k__BackingField = ElemByUniqueId->fields._Before_k__BackingField;
  if ( !Before_k__BackingField )
    goto LABEL_49;
  BattleServantData__CheckUpdateUpDownOnlyResultHp(v15, Before_k__BackingField->fields._MaxHp_k__BackingField, 1, 0);
  BattleLogicFunctionUtilities_FunctionProgressCache__MakeAfterSvtCache(v31, 0);
  After_k__BackingField = ElemByUniqueId->fields._After_k__BackingField;
  *(_QWORD *)(v18 + 64) = After_k__BackingField;
  sub_1C71354((GrandQuestFolderBoardItem_o *)(v18 + 64), (int32_t)After_k__BackingField, v36, v37, v38, v39, v40, v41);
  v42 = ElemByUniqueId->fields._Before_k__BackingField;
  v62 = ElemByUniqueId;
  if ( !v42 )
    goto LABEL_25;
  naturalAligment = BattleServantSnapShotShiftServant_TypeInfo->_2.naturalAligment;
  if ( v42->klass->_2.naturalAligment >= (unsigned int)naturalAligment )
    v44 = (BattleServantSnapShotShiftServant_c *)v42->klass->_2.typeHierarchy[naturalAligment - 1] == BattleServantSnapShotShiftServant_TypeInfo
        ? (BattleServantSnapShotShiftServant_o *)ElemByUniqueId->fields._Before_k__BackingField
        : 0LL;
  else
LABEL_25:
    v44 = 0;
  v64 = this;
  BattleServantData__ApplyCacheForTransformServant(v15, v44, 0);
  SvtCacheArray_k__BackingField = v31->fields._SvtCacheArray_k__BackingField;
  if ( !SvtCacheArray_k__BackingField )
LABEL_49:
    sub_1C71608(data, v13);
  max_length = SvtCacheArray_k__BackingField->max_length;
  v47 = v66;
  v63 = v15;
  if ( max_length >= 1 )
  {
    v48 = 0;
    do
    {
      if ( v48 >= max_length )
        sub_1C71610(data);
      v49 = SvtCacheArray_k__BackingField->m_Items[v48];
      if ( !v49 )
        goto LABEL_49;
      SvtData_k__BackingField = v49->fields._SvtData_k__BackingField;
      if ( !SvtData_k__BackingField )
        goto LABEL_49;
      uniqueId = SvtData_k__BackingField->fields.uniqueId;
      v52 = (BattleActionData_BuffData_o *)sub_1C715FC(BattleActionData_BuffData_TypeInfo);
      BattleActionData_BuffData___ctor(v52, 0);
      if ( !v52 )
        goto LABEL_49;
      v52->fields.targetId = uniqueId;
      v52->fields.isHideEffect = 1;
      v52->fields.functionIndex = funcIndex;
      v53 = v49->fields._Before_k__BackingField;
      v54 = v49->fields._After_k__BackingField;
      v55 = (BattleActionEffect_AddSubChangeMaxHpBuff_o *)sub_1C715FC(BattleActionEffect_AddSubChangeMaxHpBuff_TypeInfo);
      BattleActionEffect_AddSubChangeMaxHpBuff___ctor(v55, uniqueId, v53, v54, 0);
      BattleActionData_BuffData__SetActionEffectProc(v52, (BattleActionEffect_Base_o *)v55, 0);
      v56 = v49->fields._SvtData_k__BackingField;
      if ( !v56 )
        goto LABEL_49;
      BattleActionData_BuffData__setSaveNp(v52, v56->fields.np, 0);
      v47 = v66;
      BattleActionData__setBuffData(v66, v52, 0, 0, 0);
      max_length = SvtCacheArray_k__BackingField->max_length;
    }
    while ( (int)++v48 < max_length );
  }
  BattleActionData__addReflectLogicResultServantId(v47, v65->fields.targetId, 0);
  buffdatalist = (System_Collections_Generic_IEnumerable_TSource__o *)v47->fields.buffdatalist;
  v58 = (System_Func_object__bool__o *)sub_1C715FC(System_Func_BattleActionData_BuffData__bool__TypeInfo);
  System_Func_object__bool____ctor(
    v58,
    (Il2CppObject *)v65,
    Method_BattleLogicFunction___c__DisplayClass95_0__functionTransformServant_b__1__,
    0);
  data = (BattleData_o *)System_Linq_Enumerable__FirstOrDefault_object__51858576(
                           buffdatalist,
                           (System_Func_TSource__bool__o *)v58,
                           (const MethodInfo_3174C90 *)Method_System_Linq_Enumerable_FirstOrDefault_BattleActionData_BuffData___);
  if ( !procArgs )
    goto LABEL_49;
  if ( !procArgs->fields._IsTreasureDvc_k__BackingField )
  {
    if ( !data )
      goto LABEL_46;
    LODWORD(v13) = v63->fields.nexttpturn;
LABEL_45:
    BattleActionData_BuffData__SetSaveTpTurn((BattleActionData_BuffData_o *)data, v13, 0);
    goto LABEL_46;
  }
  v59 = v62->fields._Before_k__BackingField;
  if ( !v59 )
    goto LABEL_49;
  v13 = (unsigned int)(v63->fields.maxtpturn - v59->fields._MaxTpTurn_k__BackingField + v63->fields.nexttpturn);
  v63->fields.nexttpturn = v13;
  if ( data )
    goto LABEL_45;
LABEL_46:
  v60 = v64->fields.data;
  if ( !v60 )
    goto LABEL_49;
  data = (BattleData_o *)v60->fields._FieldEnvData_k__BackingField;
  if ( !data )
    goto LABEL_49;
  BattleFieldEnvironmentData__RemoveBgmNotExistsChangeBgmBuff((BattleFieldEnvironmentData_o *)data, 0);
  return v47;
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
  int32_t v41; // w3
  System_String_o *v42; // x4
  int32_t v43; // w5
  int64_t v44; // x6
  System_String_o *v45; // x7
  long double inited; // q0
  int v47; // w20
  int32_t v48; // w8
  _QWORD *v49; // x19
  __int64 v50; // x8
  __int64 v51; // x0
  __int64 v52; // x0
  __int64 *v53; // x8
  __int64 v54; // x1
  int32_t v55; // w2
  int32_t v56; // w3
  System_String_o *v57; // x4
  int32_t v58; // w5
  int64_t v59; // x6
  System_String_o *v60; // x7
  long double v61; // q0
  _QWORD *v62; // x19
  __int64 v63; // x8
  __int64 v64; // x0
  __int64 v65; // x0
  __int64 *v66; // x8
  __int64 v67; // x1
  int32_t v68; // w28
  System_Int32_array *v69; // x0
  int32_t v70; // w2
  int32_t v71; // w3
  System_String_o *v72; // x4
  int32_t v73; // w5
  int64_t v74; // x6
  System_String_o *v75; // x7
  int32_t v76; // w2
  int32_t v77; // w3
  System_String_o *v78; // x4
  int32_t v79; // w5
  int64_t v80; // x6
  System_String_o *v81; // x7
  long double v82; // q0
  _QWORD *v83; // x19
  __int64 v84; // x8
  __int64 v85; // x0
  __int64 v86; // x0
  __int64 *v87; // x8
  __int64 v88; // x1
  int32_t v89; // w2
  int32_t v90; // w3
  System_String_o *v91; // x4
  int32_t v92; // w5
  int64_t v93; // x6
  System_String_o *v94; // x7
  long double v95; // q0
  _QWORD *v96; // x19
  __int64 v97; // x8
  __int64 v98; // x0
  __int64 v99; // x0
  __int64 *v100; // x8
  __int64 v101; // x1
  int32_t v102; // w2
  int32_t v103; // w3
  System_String_o *v104; // x4
  int32_t v105; // w5
  int64_t v106; // x6
  System_String_o *v107; // x7
  long double v108; // q0
  _QWORD *v109; // x19
  __int64 v110; // x8
  __int64 v111; // x0
  __int64 v112; // x0
  __int64 *v113; // x8
  __int64 v114; // x1
  BattleLogicFunction_o *v115; // x19
  struct BattleData_o *v116; // x8
  int32_t wavecount; // w19
  bool IsOpponentPTUniqueID; // w0
  int32_t bId; // [xsp+1Ch] [xbp-A4h]
  BattleLogicFunction_o *v121; // [xsp+20h] [xbp-A0h]
  struct BattleSkillInfoData_o *v123; // [xsp+30h] [xbp-90h] BYREF
  Il2CppObject *entity; // [xsp+38h] [xbp-88h] BYREF
  bool minimumDamageFlg; // [xsp+40h] [xbp-80h] BYREF
  float damage; // [xsp+44h] [xbp-7Ch] BYREF
  System_Collections_Generic_List_int__o *v127; // [xsp+48h] [xbp-78h] BYREF
  int32_t executeEffectId; // [xsp+54h] [xbp-6Ch] BYREF
  int32_t hitStat[2]; // [xsp+58h] [xbp-68h] BYREF

  if ( (byte_4CCA51A & 1) == 0 )
  {
    sub_1C713B0(&Method_System_Array_Empty_int___);
    sub_1C713B0(&Method_System_Array_Empty_BattleBuffData_ShowBuffData___);
    sub_1C713B0(&BattleActionData_TypeInfo);
    sub_1C713B0(&BattleActionData_DamageValueFuncDamageData_TypeInfo);
    sub_1C713B0(&Method_DataManager_GetMaster_SkillMaster___);
    sub_1C713B0(&DataManager_TypeInfo);
    sub_1C713B0(&Method_DataMasterBase_SkillMaster__SkillEntity__int__TryGetEntity__);
    sub_1C713B0(&Method_System_Collections_Generic_List_int__ToArray__);
    sub_1C713B0(&Method_System_Nullable_BattleSkillInfoData_TYPE__GetValueOrDefault__);
    sub_1C713B0(&Method_System_Nullable_BattleSkillInfoData_TYPE___ctor__);
    sub_1C713B0(&Method_System_Nullable_BattleSkillInfoData_TYPE__get_HasValue__);
    byte_4CCA51A = 1;
  }
  *(_QWORD *)hitStat = 0;
  executeEffectId = 0;
  v127 = 0;
  damage = 0.0;
  minimumDamageFlg = 0;
  entity = 0;
  v14 = (BattleActionData_o *)sub_1C715FC(BattleActionData_TypeInfo);
  BattleActionData___ctor(v14, 0);
  data = this->fields.data;
  if ( !data )
    goto LABEL_111;
  data = (BattleData_o *)BattleData__getServantData(data, playerId, 0);
  if ( !this->fields.data )
    goto LABEL_111;
  v17 = (BattleServantData_o *)data;
  v121 = this;
  bId = playerId;
  data = (BattleData_o *)BattleData__getServantData(this->fields.data, targetId, 0);
  if ( !baseVals )
    goto LABEL_111;
  v18 = (BattleServantData_o *)data;
  FixDamageRates = DataVals__GetFixDamageRates(baseVals, 0);
  v20 = sub_1C715FC(BattleActionData_DamageValueFuncDamageData_TypeInfo);
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
      v121->fields.data,
      v17,
      0,
      (BattleActionData_DamageData_o *)v20,
      mainAction,
      0);
    damage = (float)Random;
    minimumDamageFlg = 1;
    BattleServantData__CheckInvincibleAvoidanceBuff(
      v18,
      v121->fields.data,
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
    data = (BattleData_o *)DataManager__GetMaster_object_((const MethodInfo_314B0B8 *)Method_DataManager_GetMaster_SkillMaster___);
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
           (const MethodInfo_3408ECC *)Method_DataMasterBase_SkillMaster__SkillEntity__int__TryGetEntity__) )
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
  data = v121->fields.data;
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
      v34 = (System_Nullable_Int32Enum__o)&v123;
      v123 = 0;
      System_Nullable_Int32Enum____ctor(
        v34,
        type,
        (const MethodInfo_39390F8 *)Method_System_Nullable_BattleSkillInfoData_TYPE___ctor__);
      v32 = v123;
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
  v47 = v39;
  if ( data->fields.m_CancellationTokenSource )
  {
    *(_QWORD *)(v20 + 136) = data;
    sub_1C71354((GrandQuestFolderBoardItem_o *)(v20 + 136), (int32_t)data, v40, v41, v42, v43, v44, v45);
  }
  *(_WORD *)(v20 + 36) = 0;
  *(_BYTE *)(v20 + 38) = 0;
  v48 = hitStat[1];
  *(_BYTE *)(v20 + 44) = 0;
  *(_DWORD *)(v20 + 40) = v48;
  v49 = Method_System_Array_Empty_BattleBuffData_ShowBuffData___;
  v50 = *((_QWORD *)Method_System_Array_Empty_BattleBuffData_ShowBuffData___ + 7);
  if ( !v50 )
  {
    sub_1C474A0(Method_System_Array_Empty_BattleBuffData_ShowBuffData___);
    v50 = v49[7];
  }
  v51 = *(_QWORD *)(v50 + 16);
  if ( (*(_BYTE *)(v51 + 309) & 1) == 0 )
    v51 = sub_1C47444(inited);
  if ( !*(_DWORD *)(v51 + 224) )
    inited = j_il2cpp_runtime_class_init_0(v51);
  v52 = *(_QWORD *)(v49[7] + 16LL);
  if ( (*(_BYTE *)(v52 + 309) & 1) == 0 )
    v52 = sub_1C47444(inited);
  v53 = *(__int64 **)(v52 + 184);
  v54 = *v53;
  *(_QWORD *)(v20 + 64) = *v53;
  sub_1C71354((GrandQuestFolderBoardItem_o *)(v20 + 64), v54, v40, v41, v42, v43, v44, v45);
  v62 = Method_System_Array_Empty_BattleBuffData_ShowBuffData___;
  v63 = *((_QWORD *)Method_System_Array_Empty_BattleBuffData_ShowBuffData___ + 7);
  if ( !v63 )
  {
    sub_1C474A0(Method_System_Array_Empty_BattleBuffData_ShowBuffData___);
    v63 = v62[7];
  }
  v64 = *(_QWORD *)(v63 + 16);
  if ( (*(_BYTE *)(v64 + 309) & 1) == 0 )
    v64 = sub_1C47444(v61);
  if ( !*(_DWORD *)(v64 + 224) )
    v61 = j_il2cpp_runtime_class_init_0(v64);
  v65 = *(_QWORD *)(v62[7] + 16LL);
  if ( (*(_BYTE *)(v65 + 309) & 1) == 0 )
    v65 = sub_1C47444(v61);
  v66 = *(__int64 **)(v65 + 184);
  v67 = *v66;
  *(_QWORD *)(v20 + 72) = *v66;
  sub_1C71354((GrandQuestFolderBoardItem_o *)(v20 + 72), v67, v55, v56, v57, v58, v59, v60);
  data = (BattleData_o *)(*(__int64 (__fastcall **)(__int64, System_Collections_Generic_List_int__o **, _QWORD, _QWORD, _QWORD))(*(_QWORD *)v20 + 376LL))(
                           v20,
                           &v127,
                           (unsigned int)Random,
                           0,
                           *(_QWORD *)(*(_QWORD *)v20 + 384LL));
  if ( !v127 )
    goto LABEL_111;
  v68 = (int)data;
  v69 = System_Collections_Generic_List_int___ToArray(
          v127,
          (const MethodInfo_37F51AC *)Method_System_Collections_Generic_List_int__ToArray__);
  *(_QWORD *)(v20 + 96) = v69;
  sub_1C71354((GrandQuestFolderBoardItem_o *)(v20 + 96), (int32_t)v69, v70, v71, v72, v73, v74, v75);
  if ( v17 )
    BattleServantData__CacheDealtDamage(v17, (BattleActionData_DamageData_o *)v20, 0);
  v83 = Method_System_Array_Empty_int___;
  v84 = *((_QWORD *)Method_System_Array_Empty_int___ + 7);
  if ( !v84 )
  {
    sub_1C474A0(Method_System_Array_Empty_int___);
    v84 = v83[7];
  }
  v85 = *(_QWORD *)(v84 + 16);
  if ( (*(_BYTE *)(v85 + 309) & 1) == 0 )
    v85 = sub_1C47444(v82);
  if ( !*(_DWORD *)(v85 + 224) )
    v82 = j_il2cpp_runtime_class_init_0(v85);
  v86 = *(_QWORD *)(v83[7] + 16LL);
  if ( (*(_BYTE *)(v86 + 309) & 1) == 0 )
    v86 = sub_1C47444(v82);
  v87 = *(__int64 **)(v86 + 184);
  v88 = *v87;
  *(_QWORD *)(v20 + 104) = *v87;
  sub_1C71354((GrandQuestFolderBoardItem_o *)(v20 + 104), v88, v76, v77, v78, v79, v80, v81);
  v96 = Method_System_Array_Empty_int___;
  v97 = *((_QWORD *)Method_System_Array_Empty_int___ + 7);
  if ( !v97 )
  {
    sub_1C474A0(Method_System_Array_Empty_int___);
    v97 = v96[7];
  }
  v98 = *(_QWORD *)(v97 + 16);
  if ( (*(_BYTE *)(v98 + 309) & 1) == 0 )
    v98 = sub_1C47444(v95);
  if ( !*(_DWORD *)(v98 + 224) )
    v95 = j_il2cpp_runtime_class_init_0(v98);
  v99 = *(_QWORD *)(v96[7] + 16LL);
  if ( (*(_BYTE *)(v99 + 309) & 1) == 0 )
    v99 = sub_1C47444(v95);
  v100 = *(__int64 **)(v99 + 184);
  v101 = *v100;
  *(_QWORD *)(v20 + 112) = *v100;
  sub_1C71354((GrandQuestFolderBoardItem_o *)(v20 + 112), v101, v89, v90, v91, v92, v93, v94);
  v109 = Method_System_Array_Empty_int___;
  v110 = *((_QWORD *)Method_System_Array_Empty_int___ + 7);
  if ( !v110 )
  {
    sub_1C474A0(Method_System_Array_Empty_int___);
    v110 = v109[7];
  }
  v111 = *(_QWORD *)(v110 + 16);
  if ( (*(_BYTE *)(v111 + 309) & 1) == 0 )
    v111 = sub_1C47444(v108);
  if ( !*(_DWORD *)(v111 + 224) )
    v108 = j_il2cpp_runtime_class_init_0(v111);
  v112 = *(_QWORD *)(v109[7] + 16LL);
  if ( (*(_BYTE *)(v112 + 309) & 1) == 0 )
    v112 = sub_1C47444(v108);
  v113 = *(__int64 **)(v112 + 184);
  v114 = *v113;
  *(_QWORD *)(v20 + 120) = *v113;
  sub_1C71354((GrandQuestFolderBoardItem_o *)(v20 + 120), v114, v102, v103, v104, v105, v106, v107);
  if ( !v18 )
    goto LABEL_111;
  if ( v47 )
  {
    BattleServantData__resultHeal(v18, v68, 0);
    v115 = v121;
  }
  else
  {
    BattleServantData__provisionalDamage(v18, Random, 0);
    BattleServantData__ResultDamage(v18, Random, v17, 0, 0, 0, 0);
    data = (BattleData_o *)BattleServantData__isLogicResultAlive(v18, 0);
    v115 = v121;
    if ( ((unsigned __int8)data & 1) == 0 )
    {
      v116 = v121->fields.data;
      if ( !v116 )
        goto LABEL_111;
      v18->fields.deadTurn = v116->fields.typeTurn;
    }
  }
  data = (BattleData_o *)DataVals__IsActAttackFunction(baseVals, 0);
  if ( ((unsigned __int8)data & 1) != 0 )
    BattleActionData_DamageData__addAttackSideEffectAction((BattleActionData_DamageData_o *)v20, 80, 0);
  if ( !v29
    || (BattleActionData__SetFuncDamageData(v29, (BattleActionData_DamageData_o *)v20, baseVals, 0),
        (data = v115->fields.data) == 0) )
  {
LABEL_111:
    sub_1C71608(data, v15);
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
  int32_t v33; // w3
  System_String_o *v34; // x4
  int32_t v35; // w5
  int64_t v36; // x6
  System_String_o *v37; // x7
  long double inited; // q0
  struct BattleBuffData_o *buffData; // x8
  _QWORD *v40; // x23
  __int64 v41; // x8
  __int64 v42; // x0
  __int64 v43; // x0
  __int64 *v44; // x8
  __int64 v45; // x23
  int32_t v46; // w2
  int32_t v47; // w3
  System_String_o *v48; // x4
  int32_t v49; // w5
  int64_t v50; // x6
  System_String_o *v51; // x7
  int32_t v52; // w2
  int32_t v53; // w3
  System_String_o *v54; // x4
  int32_t v55; // w5
  int64_t v56; // x6
  System_String_o *v57; // x7
  long double v58; // q0
  _QWORD *v59; // x23
  __int64 v60; // x8
  __int64 v61; // x0
  __int64 v62; // x0
  __int64 *v63; // x8
  __int64 v64; // x23
  int32_t v65; // w2
  int32_t v66; // w3
  System_String_o *v67; // x4
  int32_t v68; // w5
  int64_t v69; // x6
  System_String_o *v70; // x7
  int32_t v71; // w2
  int32_t v72; // w3
  System_String_o *v73; // x4
  int32_t v74; // w5
  int64_t v75; // x6
  System_String_o *v76; // x7
  struct BattleBuffData_o *v77; // x8
  GrandQuestFolderBoardItem_o *p_invalidLossHpData; // x0
  int32_t v79; // w1
  bool v80; // w25
  UnityEngine_Object_o *logic; // x23
  int32_t Wave; // w23
  bool IsOpponentPTUniqueID; // w0
  BattleActionEffect_LossHPFunc_o *v84; // x23
  BattleActionData_BuffData_o *v85; // x0
  struct BattleBuffData_o *v86; // x8
  int32_t v87; // w0
  int32_t v89; // [xsp+18h] [xbp-78h]
  int32_t v90; // [xsp+1Ch] [xbp-74h]
  bool v91; // [xsp+20h] [xbp-70h]
  bool v92; // [xsp+24h] [xbp-6Ch]
  bool minimumDamageFlg; // [xsp+28h] [xbp-68h] BYREF
  float damage; // [xsp+2Ch] [xbp-64h] BYREF

  if ( (byte_4CCA509 & 1) == 0 )
  {
    sub_1C713B0(&Method_System_Array_Empty_int___);
    sub_1C713B0(&Method_System_Array_Empty_BattleBuffData_ShowBuffData___);
    sub_1C713B0(&BattleActionData_TypeInfo);
    sub_1C713B0(&BattleActionData_DamageData_TypeInfo);
    sub_1C713B0(&BattleActionEffect_LossHPFunc_TypeInfo);
    sub_1C713B0(&UnityEngine_Object_TypeInfo);
    byte_4CCA509 = 1;
  }
  damage = 0.0;
  minimumDamageFlg = 0;
  v20 = (BattleActionData_o *)sub_1C715FC(BattleActionData_TypeInfo);
  BattleActionData___ctor(v20, 0);
  data = (__int64)this->fields.data;
  if ( !data )
    goto LABEL_67;
  v92 = safe;
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
  v90 = funcIndex;
  v91 = IsDeadOkTurn;
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
  v89 = v25;
  if ( DataVals__IsActNoDamageBuff(baseVals, 0) )
  {
    v31 = sub_1C715FC(BattleActionData_DamageData_TypeInfo);
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
      v40 = Method_System_Array_Empty_BattleBuffData_ShowBuffData___;
      v41 = *((_QWORD *)Method_System_Array_Empty_BattleBuffData_ShowBuffData___ + 7);
      if ( !v41 )
      {
        sub_1C474A0(Method_System_Array_Empty_BattleBuffData_ShowBuffData___);
        v41 = v40[7];
      }
      v42 = *(_QWORD *)(v41 + 16);
      if ( (*(_BYTE *)(v42 + 309) & 1) == 0 )
        v42 = sub_1C47444(inited);
      if ( !*(_DWORD *)(v42 + 224) )
        inited = j_il2cpp_runtime_class_init_0(v42);
      v43 = *(_QWORD *)(v40[7] + 16LL);
      if ( (*(_BYTE *)(v43 + 309) & 1) == 0 )
        v43 = sub_1C47444(inited);
      v44 = *(__int64 **)(v43 + 184);
      v45 = *v44;
      *(_QWORD *)(v31 + 72) = *v44;
      sub_1C71354((GrandQuestFolderBoardItem_o *)(v31 + 72), v45, v32, v33, v34, v35, v36, v37);
      *(_QWORD *)(v31 + 64) = v45;
      sub_1C71354((GrandQuestFolderBoardItem_o *)(v31 + 64), v45, v46, v47, v48, v49, v50, v51);
      v59 = Method_System_Array_Empty_int___;
      v60 = *((_QWORD *)Method_System_Array_Empty_int___ + 7);
      if ( !v60 )
      {
        sub_1C474A0(Method_System_Array_Empty_int___);
        v60 = v59[7];
      }
      v61 = *(_QWORD *)(v60 + 16);
      if ( (*(_BYTE *)(v61 + 309) & 1) == 0 )
        v61 = sub_1C47444(v58);
      if ( !*(_DWORD *)(v61 + 224) )
        v58 = j_il2cpp_runtime_class_init_0(v61);
      v62 = *(_QWORD *)(v59[7] + 16LL);
      if ( (*(_BYTE *)(v62 + 309) & 1) == 0 )
        v62 = sub_1C47444(v58);
      v63 = *(__int64 **)(v62 + 184);
      v64 = *v63;
      *(_QWORD *)(v31 + 120) = *v63;
      sub_1C71354((GrandQuestFolderBoardItem_o *)(v31 + 120), v64, v52, v53, v54, v55, v56, v57);
      *(_QWORD *)(v31 + 112) = v64;
      sub_1C71354((GrandQuestFolderBoardItem_o *)(v31 + 112), v64, v65, v66, v67, v68, v69, v70);
      *(_QWORD *)(v31 + 104) = v64;
      sub_1C71354((GrandQuestFolderBoardItem_o *)(v31 + 104), v64, v71, v72, v73, v74, v75, v76);
      v77 = v24->fields.buffData;
      if ( !v77 )
        goto LABEL_67;
      *(_BYTE *)(v31 + 57) = v77->fields.isNoDamage;
      if ( !v29 )
        goto LABEL_67;
      v29->fields.invalidLossHpData = (struct BattleActionData_DamageData_o *)v31;
      p_invalidLossHpData = (GrandQuestFolderBoardItem_o *)&v29->fields.invalidLossHpData;
      v79 = v31;
    }
    else
    {
      if ( !v29 )
        goto LABEL_67;
      v29->fields.invalidLossHpData = 0;
      p_invalidLossHpData = (GrandQuestFolderBoardItem_o *)&v29->fields.invalidLossHpData;
      v79 = 0;
    }
    sub_1C71354(p_invalidLossHpData, v79, v32, v33, v34, v35, v36, v37);
  }
  v80 = !v91 || v92;
  BattleServantData__ResultDamage(v24, Random, v30, 0, 0, v80, 0);
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
        v84 = (BattleActionEffect_LossHPFunc_o *)sub_1C715FC(BattleActionEffect_LossHPFunc_TypeInfo),
        BattleActionEffect_LossHPFunc___ctor(v84, targetId, Random, v80, 0),
        BattleActionData_BuffData__SetActionEffectProc(v29, (BattleActionEffect_Base_o *)v84, 0),
        !v20) )
  {
LABEL_67:
    sub_1C71608(data, v21);
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
        v85 = BattleBuffData__UseFieldProgressingDoNotAct((BattleBuffData_o *)data, v24, v90, 0);
        BattleActionData__setBuffData(v20, v85, baseVals, 0, 0);
      }
    }
  }
  v86 = v24->fields.buffData;
  if ( !v86 )
    goto LABEL_67;
  v86->fields.isNoDamage = 0;
  data = (__int64)this->fields.data;
  if ( !data )
    goto LABEL_67;
  if ( v24->fields.isEnemy != BattleData__isEnemyID((BattleData_o *)data, playerId, 0) )
  {
    v87 = ((__int64 (__fastcall *)(BattleServantData_o *, const MethodInfo *))v24->klass->vtable._13_get_resultHp.methodPtr)(
            v24,
            v24->klass->vtable._13_get_resultHp.method);
    BattleServantData__procAccumulationDamage(v24, v89, v87, 0);
  }
  return v20;
}


FunctionMaster_o *BattleLogicFunction__getFuncMaster(BattleLogicFunction_o *this, const MethodInfo *method)
{
  FunctionMaster_o *result; // x0
  GrandQuestFolderBoardItem_o *p_master; // x19
  FunctionMaster_o *master; // t1
  Il2CppObject *Instance; // x0
  __int64 v7; // x1
  Il2CppObject *MasterData_object; // x0
  int32_t v9; // w2
  int32_t v10; // w3
  System_String_o *v11; // x4
  int32_t v12; // w5
  int64_t v13; // x6
  System_String_o *v14; // x7

  if ( (byte_4CCA4E6 & 1) == 0 )
  {
    sub_1C713B0(&Method_DataManager_GetMasterData_FunctionMaster___);
    sub_1C713B0(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_4CCA4E6 = 1;
  }
  master = this->fields.master;
  p_master = (GrandQuestFolderBoardItem_o *)&this->fields.master;
  result = master;
  if ( !master )
  {
    Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3A5F158 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !Instance )
      sub_1C71608(0, v7);
    MasterData_object = DataManager__GetMasterData_object_(
                          (DataManager_o *)Instance,
                          (const MethodInfo_314B10C *)Method_DataManager_GetMasterData_FunctionMaster___);
    p_master->klass = (GrandQuestFolderBoardItem_c *)MasterData_object;
    sub_1C71354(p_master, (int32_t)MasterData_object, v9, v10, v11, v12, v13, v14);
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
  GrandQuestFolderBoardItem_o *p_master; // x20
  struct FunctionMaster_o *master; // t1
  __int64 v8; // x1
  Il2CppObject *MasterData_object; // x0
  int32_t v10; // w2
  int32_t v11; // w3
  System_String_o *v12; // x4
  int32_t v13; // w5
  int64_t v14; // x6
  System_String_o *v15; // x7

  if ( (byte_4CCA4E5 & 1) == 0 )
  {
    sub_1C713B0(&Method_DataManager_GetMasterData_FunctionMaster___);
    sub_1C713B0(&Method_DataMasterBase_FunctionMaster__FunctionEntity__int__GetEntity__);
    sub_1C713B0(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_4CCA4E5 = 1;
  }
  master = this->fields.master;
  p_master = (GrandQuestFolderBoardItem_o *)&this->fields.master;
  Instance = (Il2CppObject *)master;
  if ( !master )
  {
    Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3A5F158 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !Instance
      || (MasterData_object = DataManager__GetMasterData_object_(
                                (DataManager_o *)Instance,
                                (const MethodInfo_314B10C *)Method_DataManager_GetMasterData_FunctionMaster___),
          p_master->klass = (GrandQuestFolderBoardItem_c *)MasterData_object,
          sub_1C71354(p_master, (int32_t)MasterData_object, v10, v11, v12, v13, v14, v15),
          (Instance = (Il2CppObject *)p_master->klass) == 0) )
    {
      sub_1C71608(Instance, v8);
    }
  }
  return (FunctionEntity_o *)DataMasterBase_object__object__int___GetEntity(
                               (DataMasterBase_TMaster__TEntity__PKType__o *)Instance,
                               id,
                               (const MethodInfo_3408E80 *)Method_DataMasterBase_FunctionMaster__FunctionEntity__int__GetEntity__);
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

  if ( (byte_4CCA513 & 1) == 0 )
  {
    sub_1C713B0(&BattleActionData_BuffData_TypeInfo);
    byte_4CCA513 = 1;
  }
  if ( !defBuffData )
  {
    defBuffData = (BattleActionData_BuffData_o *)sub_1C715FC(BattleActionData_BuffData_TypeInfo);
    BattleActionData_BuffData___ctor(defBuffData, 0);
    if ( !defBuffData )
      sub_1C71608(v12, v13);
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

  if ( (byte_4CCA4EC & 1) == 0 )
  {
    sub_1C713B0(&Method_System_Collections_Generic_Dictionary_FuncList_TYPE__BattleLogicFunctionProcess_BaseFunctionTypeProcess__ContainsKey__);
    sub_1C713B0(&Method_System_Collections_Generic_Dictionary_FuncList_TYPE__BattleLogicFunctionProcess_BaseFunctionTypeProcess__get_Item__);
    byte_4CCA4EC = 1;
  }
  dicFuncProcess = (System_Collections_Generic_Dictionary_TKey__TValue__o *)this->fields.dicFuncProcess;
  if ( !dicFuncProcess
    || (dicFuncProcess = (System_Collections_Generic_Dictionary_TKey__TValue__o *)System_Collections_Generic_Dictionary_Int32Enum__object___ContainsKey(
                                                                                    dicFuncProcess,
                                                                                    functType,
                                                                                    (const MethodInfo_34958C4 *)Method_System_Collections_Generic_Dictionary_FuncList_TYPE__BattleLogicFunctionProcess_BaseFunctionTypeProcess__ContainsKey__),
        !this->fields.dicFuncProcess)
    || (((unsigned __int8)dicFuncProcess & 1) == 0 ? (v6 = 0) : (v6 = functType),
        (dicFuncProcess = (System_Collections_Generic_Dictionary_TKey__TValue__o *)System_Collections_Generic_Dictionary_Int32Enum__object___get_Item(
                                                                                     (System_Collections_Generic_Dictionary_TKey__TValue__o *)this->fields.dicFuncProcess,
                                                                                     v6,
                                                                                     (const MethodInfo_3495630 *)Method_System_Collections_Generic_Dictionary_FuncList_TYPE__BattleLogicFunctionProcess_BaseFunctionTypeProcess__get_Item__)) == 0) )
  {
    sub_1C71608(dicFuncProcess, *(_QWORD *)&functType);
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

  if ( (byte_4CCA4FD & 1) == 0 )
  {
    sub_1C713B0(&BattleActionData_TypeInfo);
    byte_4CCA4FD = 1;
  }
  v10 = (BattleActionData_o *)sub_1C715FC(BattleActionData_TypeInfo);
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
    sub_1C71608(GrayActionBuffData, v12);
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
    sub_1C71608(this, baseVals);
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
  int32_t v21; // w3
  System_String_o *v22; // x4
  int32_t v23; // w5
  int64_t v24; // x6
  System_String_o *v25; // x7
  BattleActionData_BuffData_o *v26; // x0
  __int64 v27; // x1
  __int64 v28; // x0
  int32_t v29; // w2
  int32_t v30; // w3
  System_String_o *v31; // x4
  int32_t v32; // w5
  int64_t v33; // x6
  System_String_o *v34; // x7
  BattleActionData_BuffData_o *v35; // x3
  __int64 v36; // x0
  int32_t v37; // w2
  int32_t v38; // w3
  System_String_o *v39; // x4
  int32_t v40; // w5
  int64_t v41; // x6
  System_String_o *v42; // x7

  v11 = defBuffData;
  if ( (byte_4CCA4F9 & 1) == 0 )
  {
    sub_1C713B0(&BattleActionData_TypeInfo);
    sub_1C713B0(&BattleActionData_BuffData_TypeInfo);
    sub_1C713B0(&int___TypeInfo);
    sub_1C713B0(&StringLiteral_1/*""*/);
    byte_4CCA4F9 = 1;
  }
  v19 = (BattleActionData_o *)sub_1C715FC(BattleActionData_TypeInfo);
  BattleActionData___ctor(v19, 0);
  if ( !defBuffData )
  {
    v11 = (BattleActionData_BuffData_o *)sub_1C715FC(BattleActionData_BuffData_TypeInfo);
    BattleActionData_BuffData___ctor(v11, 0);
    if ( !v11 )
LABEL_13:
      sub_1C71608(v26, v27);
  }
  v11->fields.functionIndex = funcIndex;
  v11->fields.isMiss = 1;
  v11->fields.targetId = targetId;
  v11->fields.buffId = 0;
  if ( isHide )
    dispName = (System_String_o *)StringLiteral_1/*""*/;
  v11->fields.popLabel = dispName;
  sub_1C71354((GrandQuestFolderBoardItem_o *)&v11->fields.popLabel, (int32_t)dispName, v20, v21, v22, v23, v24, v25);
  if ( funcTarget )
  {
    v11->fields.popIcon = funcTarget->fields.invalidIconId;
    v28 = sub_1C71458(int___TypeInfo, 0);
    v11->fields.effectList = (struct System_Int32_array *)v28;
    sub_1C71354((GrandQuestFolderBoardItem_o *)&v11->fields.effectList, v28, v29, v30, v31, v32, v33, v34);
    v26 = BattleLogicFunctionProcess_FunctionTargetCheck__get_ParentActBuffData(funcTarget, 0);
    v35 = v26;
    if ( !v19 )
      goto LABEL_13;
  }
  else
  {
    v11->fields.popIcon = 0;
    v36 = sub_1C71458(int___TypeInfo, 0);
    v11->fields.effectList = (struct System_Int32_array *)v36;
    sub_1C71354((GrandQuestFolderBoardItem_o *)&v11->fields.effectList, v36, v37, v38, v39, v40, v41, v42);
    v35 = 0;
    if ( !v19 )
      goto LABEL_13;
  }
  BattleActionData__setBuffData(v19, v11, 0, v35, 0);
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
  if ( (byte_4CCA4FA & 1) != 0 )
  {
    if ( uniqueText )
      goto LABEL_3;
  }
  else
  {
    sub_1C713B0(&LocalizationManager_TypeInfo);
    this = (BattleLogicFunction_o *)sub_1C713B0(&StringLiteral_2798/*"BATTLE_MISS_FUNCTION"*/);
    byte_4CCA4FA = 1;
    if ( v11 )
    {
LABEL_3:
      if ( dataVals )
        goto LABEL_4;
LABEL_9:
      sub_1C71608(this, *(_QWORD *)&targetId);
    }
  }
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  this = (BattleLogicFunction_o *)LocalizationManager__Get((System_String_o *)StringLiteral_2798/*"BATTLE_MISS_FUNCTION"*/, 0);
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
  if ( (byte_4CCA4FB & 1) != 0 )
  {
    if ( uniqueText )
      goto LABEL_3;
  }
  else
  {
    sub_1C713B0(&LocalizationManager_TypeInfo);
    this = (BattleLogicFunction_o *)sub_1C713B0(&StringLiteral_2809/*"BATTLE_NO_EFFECT_FUNCTION"*/);
    byte_4CCA4FB = 1;
    if ( v11 )
    {
LABEL_3:
      if ( dataVals )
        goto LABEL_4;
LABEL_9:
      sub_1C71608(this, *(_QWORD *)&targetId);
    }
  }
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  this = (BattleLogicFunction_o *)LocalizationManager__Get((System_String_o *)StringLiteral_2809/*"BATTLE_NO_EFFECT_FUNCTION"*/, 0);
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
  System_Collections_Generic_IEnumerable_TSource__o *TargetIds_40726876; // x20
  System_Func_int__bool__o *v17; // x21
  System_Collections_Generic_IEnumerable_TSource__o *v18; // x0

  if ( (byte_4CCA4F2 & 1) == 0 )
  {
    sub_1C713B0(&Method_BattleLogicFunction__getTargetids_b__60_0__);
    sub_1C713B0(&Target_BattleTargetArgs_TypeInfo);
    sub_1C713B0(&Method_System_Linq_Enumerable_ToArray_int___);
    sub_1C713B0(&Method_System_Linq_Enumerable_Where_int___);
    sub_1C713B0(&System_Func_int__bool__TypeInfo);
    byte_4CCA4F2 = 1;
  }
  args = (Target_BattleTargetArgs_o *)sub_1C715FC(Target_BattleTargetArgs_TypeInfo);
  Target_BattleTargetArgs___ctor(args, dataVals, 0);
  if ( !mainAction )
    sub_1C71608(v10, v11);
  data = this->fields.data;
  actorId = mainAction->fields.actorId;
  targetId = mainAction->fields.targetId;
  PTTargetId = BattleActionData__getPTTargetId(mainAction, 0);
  TargetIds_40726876 = (System_Collections_Generic_IEnumerable_TSource__o *)Target__getTargetIds_40726876(
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
  v17 = (System_Func_int__bool__o *)sub_1C715FC(System_Func_int__bool__TypeInfo);
  System_Func_int__bool____ctor(v17, (Il2CppObject *)this, Method_BattleLogicFunction__getTargetids_b__60_0__, 0);
  v18 = System_Linq_Enumerable__Where_int_(
          TargetIds_40726876,
          (System_Func_TSource__bool__o *)v17,
          (const MethodInfo_3191B60 *)Method_System_Linq_Enumerable_Where_int___);
  return System_Linq_Enumerable__ToArray_int_(
           v18,
           (const MethodInfo_318AE54 *)Method_System_Linq_Enumerable_ToArray_int___);
}


BattleFieldEnvironmentData_o *BattleLogicFunction__get_FieldEnvData(
        BattleLogicFunction_o *this,
        const MethodInfo *method)
{
  struct BattleData_o *data; // x8

  data = this->fields.data;
  if ( !data )
    sub_1C71608(this, method);
  return data->fields._FieldEnvData_k__BackingField;
}


System_Int32_array *BattleLogicFunction__get_IgnoreResistFuncIndividuality(
        BattleLogicFunction_o *this,
        const MethodInfo *method)
{
  GrandQuestFolderBoardItem_o *p_ignoreResistFuncIndividuality; // x19
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
  int32_t v14; // w3
  System_String_o *v15; // x4
  int32_t v16; // w5
  int64_t v17; // x6
  System_String_o *v18; // x7

  if ( (byte_4CCA4EA & 1) == 0 )
  {
    sub_1C713B0(&Method_System_Array_Empty_int___);
    sub_1C713B0(&Method_DataManager_GetMaster_ConstantStrMaster___);
    sub_1C713B0(&DataManager_TypeInfo);
    sub_1C713B0(&StringLiteral_7429/*"IGNORE_RESIST_FUNC_INDIVIDUALITY"*/);
    byte_4CCA4EA = 1;
  }
  ignoreResistFuncIndividuality = this->fields.ignoreResistFuncIndividuality;
  p_ignoreResistFuncIndividuality = (GrandQuestFolderBoardItem_o *)&this->fields.ignoreResistFuncIndividuality;
  ValueArray = ignoreResistFuncIndividuality;
  if ( !ignoreResistFuncIndividuality )
  {
    if ( !DataManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
    Master_object = DataManager__GetMaster_object_((const MethodInfo_314B0B8 *)Method_DataManager_GetMaster_ConstantStrMaster___);
    v9 = Method_System_Array_Empty_int___;
    v10 = *((_QWORD *)Method_System_Array_Empty_int___ + 7);
    if ( !v10 )
    {
      sub_1C474A0(Method_System_Array_Empty_int___);
      v10 = v9[7];
    }
    v11 = *(_QWORD *)(v10 + 16);
    if ( (*(_BYTE *)(v11 + 309) & 1) == 0 )
      v11 = sub_1C47444(inited);
    if ( !*(_DWORD *)(v11 + 224) )
      inited = j_il2cpp_runtime_class_init_0(v11);
    v12 = *(_QWORD *)(v9[7] + 16LL);
    if ( (*(_BYTE *)(v12 + 309) & 1) == 0 )
      v12 = sub_1C47444(inited);
    if ( !Master_object )
      sub_1C71608(v12, v6);
    ValueArray = ConstantStrMaster__GetValueArray(
                   (ConstantStrMaster_o *)Master_object,
                   (System_String_o *)StringLiteral_7429/*"IGNORE_RESIST_FUNC_INDIVIDUALITY"*/,
                   **(System_Int32_array ***)(v12 + 184),
                   0);
    p_ignoreResistFuncIndividuality->klass = (GrandQuestFolderBoardItem_c *)ValueArray;
    sub_1C71354(p_ignoreResistFuncIndividuality, (int32_t)ValueArray, v13, v14, v15, v16, v17, v18);
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
    sub_1C71608(this, passive);
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
    sub_1C71608(this, args);
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
    sub_1C71608(this, 0);
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
        sub_1C71610(this);
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
    sub_1C71608(this, *(_QWORD *)&uniqueId);
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
  int32_t v23; // w3
  System_String_o *v24; // x4
  int32_t v25; // w5
  int64_t v26; // x6
  System_String_o *v27; // x7
  BattleData_o *v28; // x8
  int32_t v29; // w29
  UnityEngine_Object_o *logic; // x24
  BattleLogicFunction_ProcListInArgs_o *v31; // x24
  WeightRate_int__o *v32; // x22
  int max_length; // w8
  unsigned int v34; // w27
  Il2CppClass **v35; // x8
  DataVals_o *v36; // x23
  int32_t ActSetWeight; // w25
  BattleServantData_o *v38; // x27
  int32_t Random; // w0
  int32_t actSetId; // w0
  BattleLogicFunction___c_c *v41; // x0
  System_Object_array *funcUnitArray_k__BackingField; // x21
  System_Func_object__bool__o *_9__45_0; // x22
  Il2CppObject *v44; // x23
  struct BattleLogicFunction___c_StaticFields *static_fields; // x0
  int32_t v46; // w2
  int32_t v47; // w3
  System_String_o *v48; // x4
  int32_t v49; // w5
  int64_t v50; // x6
  System_String_o *v51; // x7
  BattleLogicFunction___c_c *v52; // x0
  System_Collections_Generic_IEnumerable_TSource__o *v53; // x21
  System_Func_object__bool__o *_9__45_1; // x22
  Il2CppObject *v55; // x23
  struct BattleLogicFunction___c_StaticFields *v56; // x0
  int32_t v57; // w2
  int32_t v58; // w3
  System_String_o *v59; // x4
  int32_t v60; // w5
  int64_t v61; // x6
  System_String_o *v62; // x7
  _BOOL4 matched; // w0
  _BOOL4 v64; // w21
  bool IsIgnoreValueUp; // w0
  SkillValueUpApplierPlayerMaster_o *v66; // x22
  BattleData_o *v67; // x21
  struct BattleLogicFunctionProcess_FunctionUnitCheck_array *v68; // x28
  int v69; // w8
  int v70; // w29
  BattleLogicFunctionProcess_FunctionUnitCheck_o *v71; // x21
  DataVals_o *dataVals_k__BackingField; // x29
  const MethodInfo *v73; // x3
  const MethodInfo *v74; // x4
  UseInFsmFuncParam_o *v75; // x22
  BattleLogicFunction___c_c *v76; // x0
  UseInFsmFuncParam_o *v77; // x28
  System_Collections_Generic_IEnumerable_TSource__o *funcTargetArray_k__BackingField; // x21
  System_Func_object__bool__o *_9__45_2; // x22
  Il2CppObject *v80; // x26
  struct BattleLogicFunction___c_StaticFields *v81; // x0
  int32_t v82; // w2
  int32_t v83; // w3
  System_String_o *v84; // x4
  int32_t v85; // w5
  int64_t v86; // x6
  System_String_o *v87; // x7
  System_Collections_Generic_IEnumerable_TSource__o *v88; // x0
  BattleLogicFunction___c_c *v89; // x8
  System_Collections_Generic_IEnumerable_TSource__o *v90; // x21
  System_Func_object__int__o *_9__45_3; // x22
  Il2CppObject *v92; // x26
  struct BattleLogicFunction___c_StaticFields *v93; // x0
  int32_t v94; // w2
  int32_t v95; // w3
  System_String_o *v96; // x4
  int32_t v97; // w5
  int64_t v98; // x6
  System_String_o *v99; // x7
  System_Collections_Generic_IEnumerable_TSource__o *v100; // x0
  System_Int32_array *v101; // x21
  bool v102; // w22
  BattleLogicFunction_PreAttackSideEffectMakeArgument_o *v103; // x26
  BattleLogicFunction_SideEffectMakeArgument_o *v104; // x0
  const MethodInfo *v105; // x5
  struct BattleLogicFunctionProcess_FunctionTargetCheck_array *v106; // x23
  int v107; // w8
  unsigned int v108; // w27
  BattleLogicFunctionProcess_FunctionTargetCheck_o *v109; // x21
  BattleLogicFunction_FuncSideEffectFunctionArgument_o *FuncSideEffectArg; // x0
  int32_t targetId_k__BackingField; // w26
  BattleServantData_o *v112; // x28
  BattleActionData_o *NoEffectObject; // x0
  int32_t v114; // w22
  struct System_Int32_array *vals; // x8
  const MethodInfo *v116; // x5
  int commandType; // w8
  BattleActionData_o *v118; // x0
  bool isDamage; // w0
  int v120; // w9
  int v121; // w8
  struct System_Int32_array *items; // x8
  _QWORD *v123; // x9
  __int64 size; // x10
  const MethodInfo *v125; // x3
  int32_t actorId; // w21
  int32_t uniqueId; // w22
  bool isSafeDamage; // w0
  const MethodInfo *v129; // x7
  const MethodInfo *v130; // x7
  int32_t v131; // w1
  int32_t v132; // w2
  int32_t v133; // w5
  BattleActionData_o *v134; // x0
  const MethodInfo *v135; // x4
  BattleActionData_o *v136; // x0
  BattleData_o *v137; // x22
  BattleLogicFunction_o *v138; // x0
  const MethodInfo *v139; // x6
  BattleData_o **p_data; // x8
  BattleData_o *v141; // x21
  BattleLogicFunction_o *v142; // x0
  const MethodInfo *v143; // x6
  const MethodInfo *v144; // x7
  bool isUnaffected; // w22
  int CorrectedValueFuncGainNp; // w21
  BattleLogicFunction_o *v147; // x0
  int32_t v148; // w22
  const MethodInfo *v149; // x6
  BattleActionData_BuffData_o *v150; // x21
  BattleActionData_o *v151; // x0
  BattleActionData_BuffData_o *FunctionObject; // x1
  int32_t v153; // w1
  BattleServantData_o *v154; // x0
  BattleLogicFunction_o *v155; // x0
  int32_t v156; // w21
  const MethodInfo *v157; // x6
  BattleActionData_BuffData_o *v158; // x22
  int32_t v159; // w21
  System_Int32_array *TargetList; // x22
  int32_t Value; // w0
  const MethodInfo *v162; // x6
  int32_t v163; // w21
  System_Int32_array *v164; // x22
  int32_t v165; // w0
  int32_t v166; // w2
  bool v167; // w8
  FunctionEntity_o *v168; // x1
  bool v169; // w8
  int32_t v170; // w1
  const MethodInfo *v171; // x3
  int32_t v172; // w21
  bool v173; // w6
  int32_t v174; // w4
  FunctionEntity_o *v175; // x2
  bool v176; // w5
  int32_t v177; // w7
  BattleLogicFunction_o *v178; // x0
  int32_t v179; // w1
  DataVals_o *v180; // x3
  const MethodInfo *v181; // x7
  const MethodInfo *v182; // x6
  int32_t v183; // w1
  FunctionEntity_o *v184; // x2
  DataVals_o *v185; // x3
  int32_t v186; // w4
  const MethodInfo *v187; // x5
  BattleLogicFunction_o *v188; // x20
  BattleActionData_o *v189; // x0
  FunctionEntity_o *v190; // x1
  FunctionEntity_o *v191; // x3
  MethodInfo *v192; // x4
  const MethodInfo *v193; // x6
  int32_t applyTarget; // w8
  FunctionEntity_o *v195; // x2
  const MethodInfo *v196; // x6
  const MethodInfo *v197; // x5
  BattleActionData_o *v198; // x0
  FunctionEntity_o *v199; // x2
  const MethodInfo *v200; // x7
  int32_t v201; // w1
  FunctionEntity_o *v202; // x2
  DataVals_o *v203; // x3
  int32_t v204; // w4
  const MethodInfo *v205; // x5
  BattleActionData_o *v206; // x0
  FunctionEntity_o *v207; // x3
  int32_t v208; // w5
  const MethodInfo *v209; // x6
  _BOOL8 v210; // x0
  FunctionEntity_o *v211; // x2
  int32_t v212; // w4
  const MethodInfo *v213; // x5
  BattleActionData_o *v214; // x0
  const MethodInfo *v215; // x3
  int32_t v216; // w21
  int32_t v217; // w22
  char v218; // w5
  const MethodInfo *v219; // x7
  BattleLogicFunction_o *v220; // x0
  int32_t v221; // w1
  int32_t v222; // w2
  int32_t v223; // w2
  int32_t v224; // w3
  System_String_o *v225; // x4
  int32_t v226; // w5
  int64_t v227; // x6
  System_String_o *v228; // x7
  GrandQuestFolderBoardItem_o *v229; // x8
  GrandQuestFolderBoardItem_c *Name_k__BackingField; // x1
  int v231; // w21
  bool v232; // w20
  bool isParam; // w22
  System_Int32_array *v234; // x0
  int32_t v235; // w22
  Generator_BGMFromChangeBGMFunc_o *v236; // x21
  float BgmFadeTime; // s0
  const MethodInfo *v238; // x4
  const MethodInfo *v239; // x6
  System_Int32_array *v240; // x21
  int32_t SameIndiualityBuffSum; // w0
  int32_t totalCriticalStars; // w21
  int32_t Value2; // w0
  int32_t v244; // w22
  bool v245; // w4
  BattleLogicFunction_o *v246; // x0
  int32_t v247; // w2
  DataVals_o *v248; // x3
  BattleActionData_BuffData_o *v249; // x6
  const MethodInfo *v250; // x7
  int32_t v251; // w1
  int32_t v252; // w2
  int32_t v253; // w5
  const MethodInfo *v254; // x4
  const MethodInfo *v255; // x4
  _BOOL8 v256; // x0
  const MethodInfo *v257; // x3
  bool v258; // w21
  int32_t v259; // w22
  int32_t HpPerValue; // w0
  const MethodInfo *v261; // x3
  BattleLogicFunction_o *v262; // x0
  bool v263; // w2
  DataVals_o *v264; // x1
  _BOOL8 updated; // x0
  const MethodInfo *v266; // x6
  BattleActionData_MasterBuffData_o *v267; // x22
  Generator_BGFromQuickChangeBGFunc_o *v268; // x21
  const MethodInfo *v269; // x3
  const MethodInfo *v270; // x4
  BattleBuffData_o *buffData; // x21
  BattleActionData_UpShiftGaugeData_o *v272; // x21
  const MethodInfo *v273; // x5
  DataVals_o *v274; // x3
  const MethodInfo *v275; // x5
  BattleActionData_o *SubMember; // x0
  const MethodInfo *v277; // x3
  const MethodInfo *v278; // x3
  const MethodInfo *v279; // x4
  const MethodInfo *v280; // x3
  _BOOL8 v281; // x0
  const MethodInfo *v282; // x3
  const MethodInfo *v283; // x2
  const MethodInfo *v284; // x2
  const MethodInfo *v285; // x5
  const MethodInfo *v286; // x4
  const MethodInfo *v287; // x4
  int32_t v288; // w0
  const MethodInfo *v289; // x2
  const MethodInfo *v290; // x3
  const MethodInfo *v291; // x3
  __int64 np; // x21
  int32_t v293; // w2
  const MethodInfo *v294; // x6
  float v295; // s0
  int32_t v296; // w5
  __int64 v297; // x21
  float v298; // s0
  int v299; // w8
  const MethodInfo *v300; // x4
  const MethodInfo *v301; // x4
  UnityEngine_Object_o *perf; // x21
  _BOOL8 v303; // x0
  const MethodInfo *v304; // x3
  _BOOL8 v305; // x0
  const MethodInfo *v306; // x3
  _BOOL8 v307; // x0
  const MethodInfo *v308; // x5
  int32_t v309; // w0
  const MethodInfo *v310; // x2
  int32_t v311; // w0
  const MethodInfo *v312; // x2
  int32_t v313; // w0
  const MethodInfo *v314; // x2
  const MethodInfo *v315; // x3
  const MethodInfo *v316; // x2
  const MethodInfo *v317; // x2
  const MethodInfo *v318; // x6
  struct BattleSkillInfoData_o *skillInfo; // x8
  BattleSkillInfoData_o *v320; // x9
  char v321; // w21
  BattleData_o *v322; // x22
  bool IsNoTargetSkipSkill; // w1
  System_Collections_Generic_List_Enumerator_int__o *v324; // x0
  _BOOL8 v325; // x0
  const MethodInfo *v326; // x3
  bool v327; // w5
  __int64 v328; // x8
  int32_t UsedNpValue_k__BackingField; // w21
  int32_t v330; // w21
  int32_t v331; // w22
  int32_t UsedChargeTurn_k__BackingField; // w21
  int32_t v333; // w21
  int32_t v334; // w22
  int v335; // w29
  bool v336; // w21
  BattleLogicFunction_AfterAttackSideEffectMakeArgument_o *v337; // x22
  BattleLogicFunction_SideEffectMakeArgument_o *Argument__Init; // x0
  const MethodInfo *v339; // x5
  BattleData_o *v340; // x21
  BattleCommandData_o *v341; // x22
  UnityEngine_Object_o *v342; // x23
  struct System_Threading_CancellationTokenSource_o *m_CancellationTokenSource; // x8
  unsigned __int64 v344; // x23
  UnityEngine_Object_o *v345; // x21
  int v346; // w8
  BattleData_o *v347; // x21
  unsigned int v348; // w22
  __int64 v349; // x8
  const MethodInfo *v350; // x3
  struct BattleLogicFunction_FunctionArgument_o *externalArg; // x8
  UnityEngine_Object_o *v352; // x21
  UnityEngine_Object_o *v353; // x21
  __int64 v354; // x1
  BattleServantData_o *v355; // x0
  const MethodInfo *overwriteLossHp; // [xsp+0h] [xbp-1B0h]
  const MethodInfo *isRandomDamage; // [xsp+8h] [xbp-1A8h]
  const MethodInfo *v359; // [xsp+18h] [xbp-198h]
  BattleServantSnapShotOnBuffUpdate_o *svtSnapShotOnBuffUpdate; // [xsp+30h] [xbp-180h]
  bool data; // [xsp+38h] [xbp-178h]
  BattleData_o *dataa; // [xsp+38h] [xbp-178h]
  BattleData_o *v363; // [xsp+40h] [xbp-170h]
  BattleSkillInfoData_o *v364; // [xsp+48h] [xbp-168h]
  int32_t subTargetId; // [xsp+58h] [xbp-158h]
  char v366; // [xsp+5Ch] [xbp-154h]
  char v367; // [xsp+60h] [xbp-150h]
  SkillValueUpApplierPlayerMaster_o *v368; // [xsp+68h] [xbp-148h]
  BattleLogicFunction_o *v369; // [xsp+70h] [xbp-140h]
  System_Collections_Generic_List_int__o *v370; // [xsp+78h] [xbp-138h]
  BattleServantData_o *ServantData; // [xsp+88h] [xbp-128h]
  char v372; // [xsp+90h] [xbp-120h]
  struct BattleLogicFunctionProcess_FunctionUnitCheck_array *v373; // [xsp+98h] [xbp-118h]
  BattleLogicFunctionProcess_FunctionUnitCheck_o *funcUnit; // [xsp+A0h] [xbp-110h]
  int v375; // [xsp+ACh] [xbp-104h]
  DataMasterBase_TMaster__TEntity__PKType__o *MasterData_object; // [xsp+B0h] [xbp-100h]
  UseInFsmFuncParam_o *v377; // [xsp+B8h] [xbp-F8h]
  int32_t functionIndex; // [xsp+C8h] [xbp-E8h]
  int32_t *p_funcType; // [xsp+D0h] [xbp-E0h]
  BattleLogicFunction_Fields *p_fields; // [xsp+D8h] [xbp-D8h]
  FunctionEntity_o *funcEnt; // [xsp+E0h] [xbp-D0h]
  System_Collections_Generic_List_Enumerator_int__o v383; // [xsp+E8h] [xbp-C8h] BYREF
  System_Collections_Generic_List_Enumerator_int__o v384; // [xsp+100h] [xbp-B0h] BYREF
  int32_t param[2]; // [xsp+120h] [xbp-90h] BYREF
  System_Collections_Generic_HashSet_BattleBuffData_BuffData__o *buffsToRemove; // [xsp+128h] [xbp-88h] BYREF
  int32_t absorptionCount; // [xsp+134h] [xbp-7Ch] BYREF
  RemovedBuffInfo_o *subBuffInfo; // [xsp+138h] [xbp-78h] BYREF
  Il2CppObject *entity; // [xsp+140h] [xbp-70h] BYREF
  int32_t funcIndex; // [xsp+14Ch] [xbp-64h] BYREF

  mainAction = action;
  if ( (byte_4CCA4ED & 1) == 0 )
  {
    sub_1C713B0(&BattleLogicFunction_AfterAttackSideEffectMakeArgument_TypeInfo);
    sub_1C713B0(&Generator_BGFromQuickChangeBGFunc_TypeInfo);
    sub_1C713B0(&Generator_BGMFromChangeBGMFunc_TypeInfo);
    sub_1C713B0(&Method_BasicHelper_Any_BattleLogicFunctionProcess_FunctionUnitCheck___);
    sub_1C713B0(&BattleCommandData_TypeInfo);
    sub_1C713B0(&BattleServantSnapShotOnBuffUpdate_TypeInfo);
    sub_1C713B0(&Method_DataManager_GetMasterData_BuffMaster___);
    sub_1C713B0(&Method_DataManager_GetMasterData_SkillMaster___);
    sub_1C713B0(&Method_DataMasterBase_BuffMaster__BuffEntity__int__GetEntity__);
    sub_1C713B0(&Method_DataMasterBase_SkillMaster__SkillEntity__int__TryGetEntity__);
    sub_1C713B0(&BattleActionData_DownShiftGaugeData_TypeInfo);
    sub_1C713B0(&Method_System_Linq_Enumerable_All_BattleLogicFunctionProcess_FunctionUnitCheck___);
    sub_1C713B0(&Method_System_Linq_Enumerable_Select_BattleLogicFunctionProcess_FunctionTargetCheck__int___);
    sub_1C713B0(&Method_System_Linq_Enumerable_ToArray_int___);
    sub_1C713B0(&Method_System_Linq_Enumerable_Where_BattleLogicFunctionProcess_FunctionTargetCheck___);
    sub_1C713B0(&Method_System_Collections_Generic_List_Enumerator_int__Dispose__);
    sub_1C713B0(&Method_System_Collections_Generic_List_Enumerator_int__MoveNext__);
    sub_1C713B0(&Method_System_Collections_Generic_List_Enumerator_int__get_Current__);
    sub_1C713B0(&System_Func_BattleLogicFunctionProcess_FunctionUnitCheck__bool__TypeInfo);
    sub_1C713B0(&System_Func_BattleLogicFunctionProcess_FunctionTargetCheck__int__TypeInfo);
    sub_1C713B0(&System_Func_BattleLogicFunctionProcess_FunctionTargetCheck__bool__TypeInfo);
    sub_1C713B0(&Method_System_Collections_Generic_HashSet_BattleBuffData_BuffData__get_Count__);
    sub_1C713B0(&Method_System_Collections_Generic_List_int__Add__);
    sub_1C713B0(&Method_System_Collections_Generic_List_int__GetEnumerator__);
    sub_1C713B0(&Method_System_Collections_Generic_List_int___ctor__);
    sub_1C713B0(&System_Collections_Generic_List_int__TypeInfo);
    sub_1C713B0(&BattleActionData_MasterBuffData_TypeInfo);
    sub_1C713B0(&System_Math_TypeInfo);
    sub_1C713B0(&Method_System_Nullable_bool__GetValueOrDefault__);
    sub_1C713B0(&Method_System_Nullable_bool___ctor__);
    sub_1C713B0(&UnityEngine_Object_TypeInfo);
    sub_1C713B0(&BattleLogicFunction_PreAttackSideEffectMakeArgument_TypeInfo);
    sub_1C713B0(&BattleLogicFunction_ProcListInArgs_TypeInfo);
    sub_1C713B0(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_1C713B0(&SkillValueUpApplierPlayerMaster_TypeInfo);
    sub_1C713B0(&Method_BattleLogicFunction___c__procList_b__45_0__);
    sub_1C713B0(&Method_BattleLogicFunction___c__procList_b__45_1__);
    sub_1C713B0(&Method_BattleLogicFunction___c__procList_b__45_2__);
    sub_1C713B0(&Method_BattleLogicFunction___c__procList_b__45_3__);
    sub_1C713B0(&BattleLogicFunction___c_TypeInfo);
    sub_1C713B0(&BattleActionData_UpShiftGaugeData_TypeInfo);
    sub_1C713B0(&Method_WeightRate_int___ctor__);
    sub_1C713B0(&Method_WeightRate_int__getCount__);
    sub_1C713B0(&Method_WeightRate_int__getData__);
    sub_1C713B0(&Method_WeightRate_int__getTotalWeight__);
    sub_1C713B0(&Method_WeightRate_int__setWeight__);
    sub_1C713B0(&WeightRate_int__TypeInfo);
    byte_4CCA4ED = 1;
  }
  funcIndex = 0;
  subBuffInfo = 0;
  entity = 0;
  absorptionCount = 0;
  *(_QWORD *)param = 0;
  buffsToRemove = 0;
  memset(&v384, 0, sizeof(v384));
  PTSubTargetId = this->fields.data;
  p_fields = &this->fields;
  if ( !mainAction )
    goto LABEL_516;
  if ( !PTSubTargetId )
    goto LABEL_516;
  ServantData = BattleData__getServantData(PTSubTargetId, mainAction->fields.actorId, 0);
  BattleActionData__getPTTargetId(mainAction, 0);
  PTSubTargetId = (BattleData_o *)BattleActionData__getPTSubTargetId(mainAction, 0);
  v28 = p_fields->data;
  if ( !p_fields->data )
    goto LABEL_516;
  v29 = (int)PTSubTargetId;
  v28->fields.beforeAction = mainAction;
  sub_1C71354(
    (GrandQuestFolderBoardItem_o *)&v28->fields.beforeAction,
    (int32_t)mainAction,
    v22,
    v23,
    v24,
    v25,
    v26,
    v27);
  v370 = (System_Collections_Generic_List_int__o *)sub_1C715FC(System_Collections_Generic_List_int__TypeInfo);
  System_Collections_Generic_List_int____ctor(
    v370,
    (const MethodInfo_37F2EA0 *)Method_System_Collections_Generic_List_int___ctor__);
  PTSubTargetId = (BattleData_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3A5F158 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !PTSubTargetId )
    goto LABEL_516;
  MasterData_object = (DataMasterBase_TMaster__TEntity__PKType__o *)DataManager__GetMasterData_object_(
                                                                      (DataManager_o *)PTSubTargetId,
                                                                      (const MethodInfo_314B10C *)Method_DataManager_GetMasterData_BuffMaster___);
  if ( isReduceReset )
  {
    logic = (UnityEngine_Object_o *)this->fields.logic;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    if ( UnityEngine_Object__op_Inequality(logic, 0, 0) )
    {
      PTSubTargetId = (BattleData_o *)this->fields.logic;
      if ( !PTSubTargetId )
        goto LABEL_516;
      BattleLogic__resetReducedHpAll((BattleLogic_o *)PTSubTargetId, 0);
    }
  }
  subTargetId = v29;
  v31 = (BattleLogicFunction_ProcListInArgs_o *)sub_1C715FC(BattleLogicFunction_ProcListInArgs_TypeInfo);
  BattleLogicFunction_ProcListInArgs___ctor(v31, argument, mainAction, 0);
  if ( !v31 )
    goto LABEL_516;
  BattleLogicFunction_ProcListInArgs__set_IsCommandSideEffect(v31, isCommandSideEffect, 0);
  BattleLogicFunction_ProcListInArgs__set_IsShift(v31, isShift, 0);
  BattleLogicFunction_ProcListInArgs__set_IsPassive(v31, passive, 0);
  v31->fields._IsTreasureDvc_k__BackingField = isTreasureDvc;
  if ( BattleLogicFunction_ProcListInArgs__get_SkillId(v31, 0) <= 0 )
    BattleLogicFunction_ProcListInArgs__set_SkillId(v31, skillId, 0);
  funcIndex = 0;
  BattleLogicFunction_ProcListInArgs__initFunctionUnitCheck(
    v31,
    this,
    functionlist,
    baseValslist,
    &funcIndex,
    mainAction,
    0);
  v31->fields.actSetId = 0;
  v32 = (WeightRate_int__o *)sub_1C715FC(WeightRate_int__TypeInfo);
  WeightRate_int____ctor(v32, (const MethodInfo_3C08A5C *)Method_WeightRate_int___ctor__);
  if ( !baseValslist )
    goto LABEL_516;
  max_length = baseValslist->max_length;
  if ( max_length >= 1 )
  {
    v34 = 0;
    while ( v34 < max_length )
    {
      v35 = &baseValslist->obj.klass + (int)v34;
      v36 = (DataVals_o *)v35[4];
      if ( !v36 )
        goto LABEL_516;
      DataVals__loadActSet((DataVals_o *)v35[4], 0);
      PTSubTargetId = (BattleData_o *)DataVals__checkActSet(v36, 0);
      if ( ((unsigned __int8)PTSubTargetId & 1) != 0 )
      {
        PTSubTargetId = (BattleData_o *)DataVals__getActSetWeight(v36, 0);
        if ( (int)PTSubTargetId >= 1 )
        {
          ActSetWeight = DataVals__getActSetWeight(v36, 0);
          PTSubTargetId = (BattleData_o *)DataVals__getActSet(v36, 0);
          if ( !v32 )
            goto LABEL_516;
          WeightRate_int___setWeight(
            v32,
            ActSetWeight,
            (int32_t)PTSubTargetId,
            (const MethodInfo_3C07F78 *)Method_WeightRate_int__setWeight__);
        }
      }
      max_length = baseValslist->max_length;
      if ( (int)++v34 >= max_length )
        goto LABEL_26;
    }
LABEL_517:
    sub_1C71610(PTSubTargetId);
  }
LABEL_26:
  if ( !v32 )
    goto LABEL_516;
  v38 = ServantData;
  if ( WeightRate_int___getCount(v32, (const MethodInfo_3C08334 *)Method_WeightRate_int__getCount__) <= 0 )
  {
    actSetId = v31->fields.actSetId;
  }
  else
  {
    Random = BattleRandom__getRandom(0, v32->fields.totalweight, 0);
    actSetId = WeightRate_int___getData(v32, Random, (const MethodInfo_3C083EC *)Method_WeightRate_int__getData__);
    v31->fields.actSetId = actSetId;
  }
  mainAction->fields.ActSetId = actSetId;
  BattleActionData__initFuncTargetPlayerType(mainAction, funcIndex, 0);
  v41 = BattleLogicFunction___c_TypeInfo;
  funcUnitArray_k__BackingField = (System_Object_array *)v31->fields._funcUnitArray_k__BackingField;
  if ( !BattleLogicFunction___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BattleLogicFunction___c_TypeInfo);
    v41 = BattleLogicFunction___c_TypeInfo;
  }
  _9__45_0 = (System_Func_object__bool__o *)v41->static_fields->__9__45_0;
  if ( !_9__45_0 )
  {
    if ( !v41->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v41);
      v41 = BattleLogicFunction___c_TypeInfo;
    }
    v44 = (Il2CppObject *)v41->static_fields->__9;
    _9__45_0 = (System_Func_object__bool__o *)sub_1C715FC(System_Func_BattleLogicFunctionProcess_FunctionUnitCheck__bool__TypeInfo);
    System_Func_object__bool____ctor(_9__45_0, v44, Method_BattleLogicFunction___c__procList_b__45_0__, 0);
    static_fields = BattleLogicFunction___c_TypeInfo->static_fields;
    static_fields->__9__45_0 = (struct System_Func_BattleLogicFunctionProcess_FunctionUnitCheck__bool__o *)_9__45_0;
    sub_1C71354(
      (GrandQuestFolderBoardItem_o *)&static_fields->__9__45_0,
      (int32_t)_9__45_0,
      v46,
      v47,
      v48,
      v49,
      v50,
      v51);
  }
  if ( !BasicHelper__Any_object__51593856(
          funcUnitArray_k__BackingField,
          (System_Func_T__bool__o *)_9__45_0,
          (const MethodInfo_3134280 *)Method_BasicHelper_Any_BattleLogicFunctionProcess_FunctionUnitCheck___) )
    mainAction->fields.isSuccessTargetSelection = 1;
  v52 = BattleLogicFunction___c_TypeInfo;
  v53 = (System_Collections_Generic_IEnumerable_TSource__o *)v31->fields._funcUnitArray_k__BackingField;
  if ( !BattleLogicFunction___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BattleLogicFunction___c_TypeInfo);
    v52 = BattleLogicFunction___c_TypeInfo;
  }
  _9__45_1 = (System_Func_object__bool__o *)v52->static_fields->__9__45_1;
  if ( !_9__45_1 )
  {
    if ( !v52->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v52);
      v52 = BattleLogicFunction___c_TypeInfo;
    }
    v55 = (Il2CppObject *)v52->static_fields->__9;
    _9__45_1 = (System_Func_object__bool__o *)sub_1C715FC(System_Func_BattleLogicFunctionProcess_FunctionUnitCheck__bool__TypeInfo);
    System_Func_object__bool____ctor(_9__45_1, v55, Method_BattleLogicFunction___c__procList_b__45_1__, 0);
    v56 = BattleLogicFunction___c_TypeInfo->static_fields;
    v56->__9__45_1 = (struct System_Func_BattleLogicFunctionProcess_FunctionUnitCheck__bool__o *)_9__45_1;
    sub_1C71354((GrandQuestFolderBoardItem_o *)&v56->__9__45_1, (int32_t)_9__45_1, v57, v58, v59, v60, v61, v62);
  }
  mainAction->fields.isSkillCopyFunctionOnly = System_Linq_Enumerable__All_object_(
                                                 v53,
                                                 (System_Func_TSource__bool__o *)_9__45_1,
                                                 (const MethodInfo_31555BC *)Method_System_Linq_Enumerable_All_BattleLogicFunctionProcess_FunctionUnitCheck___);
  v372 = 1;
  matched = BattleLogicFunction_ProcListInArgs__MatchSkillType(v31, 1, 0);
  if ( matched )
  {
    v64 = matched;
    PTSubTargetId = (BattleData_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3A5F158 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !PTSubTargetId )
      goto LABEL_516;
    PTSubTargetId = (BattleData_o *)DataManager__GetMasterData_object_(
                                      (DataManager_o *)PTSubTargetId,
                                      (const MethodInfo_314B10C *)Method_DataManager_GetMasterData_SkillMaster___);
    if ( !PTSubTargetId )
      goto LABEL_516;
    if ( DataMasterBase_object__object__int___TryGetEntity(
           (DataMasterBase_TMaster__TEntity__PKType__o *)PTSubTargetId,
           &entity,
           skillId,
           (const MethodInfo_3408ECC *)Method_DataMasterBase_SkillMaster__SkillEntity__int__TryGetEntity__) )
    {
      PTSubTargetId = (BattleData_o *)entity;
      if ( !entity )
        goto LABEL_516;
      IsIgnoreValueUp = SkillEntity__IsIgnoreValueUp((SkillEntity_o *)entity, 0);
    }
    else
    {
      IsIgnoreValueUp = 0;
    }
    v66 = 0;
    v372 = 1;
    if ( !IsIgnoreValueUp && v64 )
    {
      v67 = p_fields->data;
      v66 = (SkillValueUpApplierPlayerMaster_o *)sub_1C715FC(SkillValueUpApplierPlayerMaster_TypeInfo);
      SkillValueUpApplierPlayerMaster___ctor(v66, v67, 0);
      if ( v66 )
      {
        ((void (__fastcall *)(SkillValueUpApplierPlayerMaster_o *, const MethodInfo *))v66->klass->vtable._4_Init.methodPtr)(
          v66,
          v66->klass->vtable._4_Init.method);
        v372 = 0;
      }
      else
      {
        v372 = 1;
      }
    }
  }
  else
  {
    v66 = 0;
  }
  BattleActionData__UpdateTargetRangeOfTreasureDevice(
    mainAction,
    p_fields->data,
    mainAction,
    v31->fields._funcUnitArray_k__BackingField,
    0);
  v68 = v31->fields._funcUnitArray_k__BackingField;
  if ( !v68 )
    goto LABEL_516;
  v69 = v68->max_length;
  if ( v69 >= 1 )
  {
    v70 = 0;
    v368 = v66;
    v369 = this;
    v363 = 0;
    v364 = 0;
    v366 = 0;
    v367 = 0;
    v373 = v31->fields._funcUnitArray_k__BackingField;
    while ( 1 )
    {
      if ( v70 >= (unsigned int)v69 )
        goto LABEL_517;
      v71 = v68->m_Items[v70];
      v375 = v70;
      if ( !v71 )
        goto LABEL_516;
      PTSubTargetId = (BattleData_o *)BattleLogicFunctionProcess_FunctionUnitCheck__get_FuncIndex(v71, 0);
      dataVals_k__BackingField = v71->fields._dataVals_k__BackingField;
      functionIndex = (int)PTSubTargetId;
      if ( !dataVals_k__BackingField )
        goto LABEL_516;
      funcEnt = dataVals_k__BackingField->fields.funcEnt;
      funcUnit = v71;
      PTSubTargetId = (BattleData_o *)BattleLogicFunctionProcess_FunctionUnitCheck__checkCondtion(v71, mainAction, 0);
      if ( ((unsigned __int8)PTSubTargetId & 1) == 0 )
        goto LABEL_457;
      if ( (v372 & 1) == 0 )
        ((void (__fastcall *)(SkillValueUpApplierPlayerMaster_o *, BattleLogicFunctionProcess_FunctionUnitCheck_o *, const MethodInfo *))v368->klass->vtable._5_ApplyTo.methodPtr)(
          v368,
          v71,
          v368->klass->vtable._5_ApplyTo.method);
      PTSubTargetId = (BattleData_o *)UseInFsmFuncParam__Make(dataVals_k__BackingField, 0);
      v75 = (UseInFsmFuncParam_o *)PTSubTargetId;
      if ( isCreateSideEffect )
      {
        if ( !funcEnt )
          goto LABEL_516;
        PTSubTargetId = (BattleData_o *)BattleLogicFunction__IsAttackSideEffectInvokeFunc(
                                          (BattleLogicFunction_o *)PTSubTargetId,
                                          funcEnt->fields.funcType,
                                          dataVals_k__BackingField,
                                          v73);
        if ( ((unsigned __int8)PTSubTargetId & 1) != 0 )
        {
          v76 = BattleLogicFunction___c_TypeInfo;
          v77 = v75;
          funcTargetArray_k__BackingField = (System_Collections_Generic_IEnumerable_TSource__o *)v71->fields._funcTargetArray_k__BackingField;
          if ( !BattleLogicFunction___c_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(BattleLogicFunction___c_TypeInfo);
            v76 = BattleLogicFunction___c_TypeInfo;
          }
          _9__45_2 = (System_Func_object__bool__o *)v76->static_fields->__9__45_2;
          if ( !_9__45_2 )
          {
            if ( !v76->_2.cctor_finished )
            {
              j_il2cpp_runtime_class_init_0(v76);
              v76 = BattleLogicFunction___c_TypeInfo;
            }
            v80 = (Il2CppObject *)v76->static_fields->__9;
            _9__45_2 = (System_Func_object__bool__o *)sub_1C715FC(System_Func_BattleLogicFunctionProcess_FunctionTargetCheck__bool__TypeInfo);
            System_Func_object__bool____ctor(_9__45_2, v80, Method_BattleLogicFunction___c__procList_b__45_2__, 0);
            v81 = BattleLogicFunction___c_TypeInfo->static_fields;
            v81->__9__45_2 = (struct System_Func_BattleLogicFunctionProcess_FunctionTargetCheck__bool__o *)_9__45_2;
            sub_1C71354((GrandQuestFolderBoardItem_o *)&v81->__9__45_2, (int32_t)_9__45_2, v82, v83, v84, v85, v86, v87);
          }
          v88 = System_Linq_Enumerable__Where_object_(
                  funcTargetArray_k__BackingField,
                  (System_Func_TSource__bool__o *)_9__45_2,
                  (const MethodInfo_3192108 *)Method_System_Linq_Enumerable_Where_BattleLogicFunctionProcess_FunctionTargetCheck___);
          v89 = BattleLogicFunction___c_TypeInfo;
          v90 = v88;
          if ( !BattleLogicFunction___c_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(BattleLogicFunction___c_TypeInfo);
            v89 = BattleLogicFunction___c_TypeInfo;
          }
          _9__45_3 = (System_Func_object__int__o *)v89->static_fields->__9__45_3;
          if ( !_9__45_3 )
          {
            if ( !v89->_2.cctor_finished )
            {
              j_il2cpp_runtime_class_init_0(v89);
              v89 = BattleLogicFunction___c_TypeInfo;
            }
            v92 = (Il2CppObject *)v89->static_fields->__9;
            _9__45_3 = (System_Func_object__int__o *)sub_1C715FC(System_Func_BattleLogicFunctionProcess_FunctionTargetCheck__int__TypeInfo);
            System_Func_object__int____ctor(_9__45_3, v92, Method_BattleLogicFunction___c__procList_b__45_3__, 0);
            v93 = BattleLogicFunction___c_TypeInfo->static_fields;
            v93->__9__45_3 = (struct System_Func_BattleLogicFunctionProcess_FunctionTargetCheck__int__o *)_9__45_3;
            sub_1C71354((GrandQuestFolderBoardItem_o *)&v93->__9__45_3, (int32_t)_9__45_3, v94, v95, v96, v97, v98, v99);
          }
          v100 = (System_Collections_Generic_IEnumerable_TSource__o *)System_Linq_Enumerable__Select_object__int_(
                                                                        v90,
                                                                        (System_Func_TSource__TResult__o *)_9__45_3,
                                                                        (const MethodInfo_3180FD8 *)Method_System_Linq_Enumerable_Select_BattleLogicFunctionProcess_FunctionTargetCheck__int___);
          v101 = System_Linq_Enumerable__ToArray_int_(
                   v100,
                   (const MethodInfo_318AE54 *)Method_System_Linq_Enumerable_ToArray_int___);
          v102 = FuncList__Check(26, funcEnt->fields.funcType, 0);
          v103 = (BattleLogicFunction_PreAttackSideEffectMakeArgument_o *)sub_1C715FC(BattleLogicFunction_PreAttackSideEffectMakeArgument_TypeInfo);
          BattleLogicFunction_PreAttackSideEffectMakeArgument___ctor(v103, 0);
          if ( !v103 )
            goto LABEL_516;
          v104 = (BattleLogicFunction_SideEffectMakeArgument_o *)((__int64 (__fastcall *)(BattleLogicFunction_PreAttackSideEffectMakeArgument_o *, System_Int32_array *, const MethodInfo *))v103->klass->vtable._6_Init.methodPtr)(
                                                                   v103,
                                                                   v101,
                                                                   v103->klass->vtable._6_Init.method);
          BattleLogicFunction__setAttackSideEffect(this, mainAction, v38, v102 || isTreasureDvc, v104, v105);
          v75 = v77;
        }
      }
      v106 = funcUnit->fields._funcTargetArray_k__BackingField;
      if ( !v106 )
        goto LABEL_516;
      v107 = v106->max_length;
      p_funcType = &funcEnt->fields.funcType;
      if ( v107 >= 1 )
      {
        v108 = 0;
        v377 = v75;
        while ( 1 )
        {
          if ( v108 >= v107 )
            goto LABEL_517;
          v109 = v106->m_Items[v108];
          if ( !v109 )
            goto LABEL_516;
          BattleLogicFunction__SetTargetFuncList(
            this,
            v109->fields._targetId_k__BackingField,
            mainAction,
            dataVals_k__BackingField,
            v74);
          FuncSideEffectArg = BattleLogicFunction_ProcListInArgs__get_FuncSideEffectArg(v31, 0);
          if ( FuncSideEffectArg )
            BattleLogicFunction_FuncSideEffectFunctionArgument__AddTarget(FuncSideEffectArg, v109, 0);
          if ( !v109->fields._result_k__BackingField )
          {
            NoEffectObject = BattleLogicFunctionProcess_FunctionTargetCheck__getInvalidObject(v109, mainAction, 0);
            goto LABEL_96;
          }
          PTSubTargetId = p_fields->data;
          if ( !p_fields->data )
            goto LABEL_516;
          targetId_k__BackingField = v109->fields._targetId_k__BackingField;
          PTSubTargetId = (BattleData_o *)BattleData__getServantData(PTSubTargetId, targetId_k__BackingField, 0);
          if ( !PTSubTargetId )
            goto LABEL_516;
          v112 = (BattleServantData_o *)PTSubTargetId;
          PTSubTargetId = (BattleData_o *)BattleServantData__CheckNotTargetSkill(
                                            (BattleServantData_o *)PTSubTargetId,
                                            skillId,
                                            0);
          if ( ((unsigned __int8)PTSubTargetId & 1) != 0 )
          {
            NoEffectObject = BattleLogicFunction__getNoEffectObject(
                               this,
                               v112->fields.uniqueId,
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
          v31->fields.tdCommandTypeChange = -1;
          if ( !funcEnt )
            goto LABEL_516;
          v114 = *p_funcType;
          if ( (unsigned int)(*p_funcType - 160) < 2 || v114 == 16 || v114 == 1 )
          {
            vals = funcEnt->fields.vals;
            if ( !vals )
              goto LABEL_516;
            if ( !LODWORD(vals->max_length) )
              goto LABEL_517;
            PTSubTargetId = (BattleData_o *)MasterData_object;
            if ( !MasterData_object )
              goto LABEL_516;
            PTSubTargetId = (BattleData_o *)DataMasterBase_object__object__int___GetEntity(
                                              MasterData_object,
                                              vals->m_Items[0],
                                              (const MethodInfo_3408E80 *)Method_DataMasterBase_BuffMaster__BuffEntity__int__GetEntity__);
            if ( !PTSubTargetId )
              goto LABEL_516;
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
                v31->fields.tdCommandTypeChange = commandType;
                break;
              default:
                break;
            }
            BattleLogicFunction__functionAddState(this, mainAction, v109, v31, v114 == 16 || v114 == 161, v116);
            goto LABEL_113;
          }
          if ( FuncList__Check(2, v114, 0) )
          {
            v118 = BattleLogicFunction__functionSubState(
                     this,
                     targetId_k__BackingField,
                     funcEnt,
                     dataVals_k__BackingField,
                     functionIndex,
                     isCommandSideEffect,
                     &subBuffInfo,
                     v31,
                     overwriteLossHp);
            goto LABEL_131;
          }
          if ( FuncList__Check(3, *p_funcType, 0) )
          {
            this = v369;
            actorId = mainAction->fields.actorId;
            uniqueId = v112->fields.uniqueId;
            isSafeDamage = BattleLogicFunction__isSafeDamage(
                             v369,
                             dataVals_k__BackingField,
                             targetId_k__BackingField,
                             v125);
            v118 = BattleLogicFunction__functionDamage(
                     v369,
                     actorId,
                     uniqueId,
                     dataVals_k__BackingField,
                     functionIndex,
                     mainAction,
                     isSafeDamage,
                     v129);
            goto LABEL_131;
          }
          v75 = v377;
          if ( FuncList__Check(4, *p_funcType, 0) )
          {
            v131 = mainAction->fields.actorId;
            v132 = v112->fields.uniqueId;
            v133 = 1;
LABEL_155:
            this = v369;
            v136 = BattleLogicFunction__functionNPDamage(
                     v369,
                     v131,
                     v132,
                     dataVals_k__BackingField,
                     functionIndex,
                     v133,
                     mainAction,
                     v130);
LABEL_156:
            BattleActionData__addAction(mainAction, v136, 0);
            goto LABEL_114;
          }
          if ( FuncList__Check(14, *p_funcType, 0) )
          {
            v131 = mainAction->fields.actorId;
            v132 = v112->fields.uniqueId;
            v133 = 2;
            goto LABEL_155;
          }
          if ( FuncList__Check(15, *p_funcType, 0) )
          {
            v131 = mainAction->fields.actorId;
            v132 = v112->fields.uniqueId;
            v133 = 3;
            goto LABEL_155;
          }
          if ( FuncList__Check(18, *p_funcType, 0) )
          {
            v131 = mainAction->fields.actorId;
            v132 = v112->fields.uniqueId;
            v133 = 4;
            goto LABEL_155;
          }
          if ( FuncList__Check(27, *p_funcType, 0) )
          {
            v131 = mainAction->fields.actorId;
            v132 = v112->fields.uniqueId;
            v133 = 7;
            goto LABEL_155;
          }
          if ( FuncList__Check(21, *p_funcType, 0) )
          {
            v131 = mainAction->fields.actorId;
            v132 = v112->fields.uniqueId;
            v133 = 5;
            goto LABEL_155;
          }
          if ( FuncList__Check(22, *p_funcType, 0) )
          {
            v131 = mainAction->fields.actorId;
            v132 = v112->fields.uniqueId;
            v133 = 6;
            goto LABEL_155;
          }
          if ( FuncList__Check(28, *p_funcType, 0) )
          {
            v131 = mainAction->fields.actorId;
            v132 = v112->fields.uniqueId;
            v133 = 8;
            goto LABEL_155;
          }
          if ( FuncList__Check(5, *p_funcType, 0) )
          {
            v137 = p_fields->data;
            PTSubTargetId = (BattleData_o *)((__int64 (__fastcall *)(BattleLogicFunctionProcess_FunctionTargetCheck_o *, const MethodInfo *))v109->klass->vtable._16_GetCommonBaseValue.methodPtr)(
                                              v109,
                                              v109->klass->vtable._16_GetCommonBaseValue.method);
            if ( !v137 )
              goto LABEL_516;
            BattleData__addCriticalPoint(v137, (int32_t)PTSubTargetId, 0);
            PTSubTargetId = (BattleData_o *)BattleLogicFunction__getFunctionObject(
                                              v138,
                                              funcEnt,
                                              v112->fields.uniqueId,
                                              functionIndex,
                                              isCommandSideEffect,
                                              0,
                                              v139);
            this = v369;
            if ( !PTSubTargetId )
              goto LABEL_516;
            LODWORD(PTSubTargetId->fields.rootfsm) = 4;
            BattleActionData__setBuffData(
              mainAction,
              (BattleActionData_BuffData_o *)PTSubTargetId,
              dataVals_k__BackingField,
              0,
              0);
            p_data = &p_fields->data;
            v75 = v377;
LABEL_165:
            PTSubTargetId = *p_data;
            if ( !*p_data )
              goto LABEL_516;
            BattleData__AddPerformedVals(PTSubTargetId, dataVals_k__BackingField, 0);
            goto LABEL_114;
          }
          if ( FuncList__Check(31, *p_funcType, 0) )
          {
            v141 = p_fields->data;
            PTSubTargetId = (BattleData_o *)DataVals__GetValue(dataVals_k__BackingField, 0);
            if ( !v141 )
              goto LABEL_516;
            BattleData__lossCriticalPoint(v141, (int32_t)PTSubTargetId, 0);
            PTSubTargetId = (BattleData_o *)BattleLogicFunction__getFunctionObject(
                                              v142,
                                              funcEnt,
                                              v112->fields.uniqueId,
                                              functionIndex,
                                              isCommandSideEffect,
                                              0,
                                              v143);
            this = v369;
            if ( !PTSubTargetId )
              goto LABEL_516;
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
            this = v369;
            v136 = BattleLogicFunction__functionGainHp(
                     v369,
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
            this = v369;
            v136 = BattleLogicFunction__functionGainHpPer(
                     v369,
                     mainAction->fields.actorId,
                     targetId_k__BackingField,
                     funcEnt,
                     dataVals_k__BackingField,
                     functionIndex,
                     isCommandSideEffect,
                     v144);
            goto LABEL_156;
          }
          if ( !FuncList__Check(7, *p_funcType, 0) )
            break;
          if ( BattleServantData__checkPlayer(v112, 0) )
          {
            isUnaffected = DataVals__isUnaffected(dataVals_k__BackingField, 0);
            CorrectedValueFuncGainNp = ((__int64 (__fastcall *)(BattleLogicFunctionProcess_FunctionTargetCheck_o *, const MethodInfo *))v109->klass->vtable._16_GetCommonBaseValue.methodPtr)(
                                         v109,
                                         v109->klass->vtable._16_GetCommonBaseValue.method);
            if ( !isUnaffected )
              CorrectedValueFuncGainNp = BattleServantData__getCorrectedValueFuncGainNp(
                                           v112,
                                           CorrectedValueFuncGainNp,
                                           0);
            goto LABEL_175;
          }
LABEL_195:
          this = v369;
LABEL_114:
          isDamage = FuncList__isDamage(*p_funcType, 0);
          if ( isDamage )
            v120 = 0;
          else
            v120 = -83;
          if ( isDamage )
            v121 = 0;
          else
            v121 = 173;
          if ( v120 != -83 )
          {
            if ( v121 )
              return mainAction;
            if ( !v112->fields.isTDLimitCount )
            {
              PTSubTargetId = (BattleData_o *)v112->fields.buffData;
              if ( !PTSubTargetId )
                goto LABEL_516;
              if ( !LOBYTE(PTSubTargetId->fields.p_cmlist) )
              {
                v112->fields.isTDLimitCount = 1;
                if ( !v370 )
                  goto LABEL_516;
                action = (BattleActionData_o *)(unsigned int)v112->fields.uniqueId;
                items = v370->fields._items;
                v123 = Method_System_Collections_Generic_List_int__Add__;
                ++v370->fields._version;
                if ( !items )
                  goto LABEL_516;
                size = v370->fields._size;
                if ( (unsigned int)size >= LODWORD(items->max_length) )
                {
                  System_Collections_Generic_List_int___AddWithResize(
                    v370,
                    (int32_t)action,
                    *(const MethodInfo_37F36F4 **)(*(_QWORD *)(v123[4] + 192LL) + 112LL));
                  PTSubTargetId = (BattleData_o *)v112->fields.buffData;
                  if ( !PTSubTargetId )
                    goto LABEL_516;
                }
                else
                {
                  v370->fields._size = size + 1;
                  items->m_Items[size] = (int)action;
                }
                v134 = BattleBuffData__UseProgressingDoNotAct((BattleBuffData_o *)PTSubTargetId, v112, 0, 0);
                BattleActionData__addSideEffectActionData(mainAction, v134, 1, 0);
                PTSubTargetId = (BattleData_o *)v112->fields.buffData;
                if ( !PTSubTargetId )
                  goto LABEL_516;
              }
              LOBYTE(PTSubTargetId->fields.p_cmlist) = 0;
            }
          }
          BattleLogicFunction_ProcListInArgs__setFuncResult(
            v31,
            targetId_k__BackingField,
            mainAction->fields.funcResult,
            dataVals_k__BackingField->fields.funcIndex,
            0);
          BattleLogicFunction__SetReceiveFunctionId(
            this,
            mainAction->fields.funcResult,
            targetId_k__BackingField,
            funcEnt,
            v135);
          if ( v75 )
            UseInFsmFuncParam__AddTargetId(v75, mainAction->fields.funcResult, targetId_k__BackingField, 0);
LABEL_139:
          v107 = v106->max_length;
          if ( (int)++v108 >= v107 )
            goto LABEL_450;
        }
        if ( FuncList__Check(8, *p_funcType, 0) )
        {
          if ( BattleServantData__checkPlayer(v112, 0) )
          {
            v153 = -DataVals__GetValue(dataVals_k__BackingField, 0);
            goto LABEL_183;
          }
LABEL_194:
          v75 = v377;
          goto LABEL_195;
        }
        if ( FuncList__Check(9, *p_funcType, 0) )
        {
          v159 = DataVals__GetValue2(dataVals_k__BackingField, 0) - 1;
          TargetList = DataVals__GetTargetList(dataVals_k__BackingField, 0);
          Value = DataVals__GetValue(dataVals_k__BackingField, 0);
          PTSubTargetId = (BattleData_o *)BattleServantData__skillChageShorten(v112, Value, 0, v159, TargetList, 0);
LABEL_190:
          v166 = v112->fields.uniqueId;
          if ( ((unsigned __int8)PTSubTargetId & 1) == 0 )
          {
            v169 = isCommandSideEffect;
            this = v369;
            v170 = v112->fields.uniqueId;
            goto LABEL_292;
          }
LABEL_191:
          v167 = isCommandSideEffect;
          v168 = funcEnt;
LABEL_192:
          FunctionObject = BattleLogicFunction__getFunctionObject(
                             (BattleLogicFunction_o *)PTSubTargetId,
                             v168,
                             v166,
                             functionIndex,
                             v167,
                             0,
                             v162);
          v151 = mainAction;
LABEL_193:
          BattleActionData__setBuffData(v151, FunctionObject, dataVals_k__BackingField, 0, 0);
          goto LABEL_194;
        }
        if ( FuncList__Check(10, *p_funcType, 0) )
        {
          v163 = DataVals__GetValue2(dataVals_k__BackingField, 0) - 1;
          v164 = DataVals__GetTargetList(dataVals_k__BackingField, 0);
          v165 = DataVals__GetValue(dataVals_k__BackingField, 0);
          PTSubTargetId = (BattleData_o *)BattleServantData__skillChageExtend(v112, v165, 999, v163, v164, 0);
          goto LABEL_190;
        }
        if ( FuncList__Check(12, *p_funcType, 0) )
        {
          this = v369;
          v172 = mainAction->fields.actorId;
          v173 = BattleLogicFunction__isSafeDamage(v369, dataVals_k__BackingField, targetId_k__BackingField, v171);
          v118 = BattleLogicFunction__functionlossHp(
                   v369,
                   v172,
                   targetId_k__BackingField,
                   funcEnt,
                   dataVals_k__BackingField,
                   functionIndex,
                   v173,
                   isCommandSideEffect,
                   -1,
                   1,
                   mainAction,
                   v359);
          goto LABEL_131;
        }
        if ( FuncList__Check(25, *p_funcType, 0) )
        {
          this = v369;
          v118 = BattleLogicFunction__functionlossHp(
                   v369,
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
                   v359);
          goto LABEL_131;
        }
        if ( FuncList__Check(13, *p_funcType, 0) )
        {
          this = v369;
          v118 = BattleLogicFunction__functionInstantDeath(
                   v369,
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
          v174 = functionIndex;
          this = v369;
          v175 = funcEnt;
          v176 = isCommandSideEffect;
          v177 = -1;
          v178 = v369;
          v179 = targetId_k__BackingField;
          v180 = dataVals_k__BackingField;
          goto LABEL_205;
        }
        if ( FuncList__Check(20, *p_funcType, 0) )
        {
          this = v369;
          v118 = BattleLogicFunction__functionDelayNpTurn(
                   v369,
                   targetId_k__BackingField,
                   funcEnt,
                   dataVals_k__BackingField,
                   functionIndex,
                   isCommandSideEffect,
                   &absorptionCount,
                   v181);
          goto LABEL_131;
        }
        if ( FuncList__Check(56, *p_funcType, 0) )
        {
          this = v369;
          v118 = BattleLogicFunction__functionAbsorbNpTurn(
                   v369,
                   targetId_k__BackingField,
                   funcEnt,
                   mainAction,
                   v109,
                   isCommandSideEffect,
                   v182);
          goto LABEL_131;
        }
        if ( FuncList__Check(23, *p_funcType, 0) )
        {
          v188 = v369;
          v189 = BattleLogicFunction__functionResetCommandCard(v369, v183, v184, v185, v186, v187);
LABEL_212:
          BattleActionData__addAction(mainAction, v189, 0);
          PTSubTargetId = v188->fields.data;
          if ( !PTSubTargetId )
            goto LABEL_516;
          BattleData__AddPerformedVals(PTSubTargetId, dataVals_k__BackingField, 0);
          goto LABEL_194;
        }
        if ( FuncList__Check(24, *p_funcType, 0) )
        {
          applyTarget = funcEnt->fields.applyTarget;
          if ( applyTarget == 2 )
          {
            this = v369;
            v118 = BattleLogicFunction__functionReplaceEnemyMember(
                     v369,
                     v190,
                     dataVals_k__BackingField,
                     functionIndex,
                     v192);
            goto LABEL_131;
          }
          if ( applyTarget != 1 )
            goto LABEL_194;
          v188 = v369;
          v189 = BattleLogicFunction__functionReplaceMember(
                   v369,
                   targetId_k__BackingField,
                   subTargetId,
                   v191,
                   (DataVals_o *)v192,
                   functionIndex,
                   v193);
          goto LABEL_212;
        }
        if ( FuncList__Check(109, *p_funcType, 0) )
        {
          this = v369;
          v118 = BattleLogicFunction__functionTransformServant(
                   v369,
                   targetId_k__BackingField,
                   v195,
                   dataVals_k__BackingField,
                   functionIndex,
                   v31,
                   v196);
          goto LABEL_131;
        }
        if ( FuncList__Check(26, *p_funcType, 0) )
        {
          this = v369;
          v198 = BattleLogicFunction__functionReflection(
                   v369,
                   mainAction->fields.actorId,
                   v112->fields.uniqueId,
                   dataVals_k__BackingField,
                   functionIndex,
                   v197);
          BattleActionData__addAction(mainAction, v198, 0);
          v367 = 1;
          goto LABEL_113;
        }
        if ( FuncList__Check(29, *p_funcType, 0) )
        {
          this = v369;
          v118 = BattleLogicFunction__functionCallServant(
                   v369,
                   mainAction->fields.actorId,
                   v199,
                   dataVals_k__BackingField,
                   functionIndex,
                   isCommandSideEffect,
                   v31,
                   v200);
          goto LABEL_131;
        }
        if ( FuncList__Check(30, *p_funcType, 0) )
        {
          v206 = BattleLogicFunction__functionPtShuffle(v369, v201, v202, v203, v204, v205);
          BattleActionData__addAction(mainAction, v206, 0);
          PTSubTargetId = v369->fields.data;
          if ( !PTSubTargetId )
            goto LABEL_516;
          BattleData__AddPerformedVals(PTSubTargetId, dataVals_k__BackingField, 0);
          v366 = 1;
          goto LABEL_194;
        }
        if ( FuncList__Check(32, *p_funcType, 0) )
        {
          this = v369;
          v118 = BattleLogicFunction__functionChangeServant(
                   v369,
                   mainAction->fields.actorId,
                   targetId_k__BackingField,
                   v207,
                   dataVals_k__BackingField,
                   v208,
                   v209);
          goto LABEL_131;
        }
        v210 = FuncList__Check(33, *p_funcType, 0);
        if ( v210 )
        {
          v214 = BattleLogicFunction__functionChangeBg(
                   (BattleLogicFunction_o *)v210,
                   mainAction->fields.actorId,
                   v211,
                   dataVals_k__BackingField,
                   v212,
                   v213);
LABEL_232:
          BattleActionData__addAction(mainAction, v214, 0);
          goto LABEL_194;
        }
        if ( FuncList__Check(34, *p_funcType, 0) )
        {
          this = v369;
          v216 = mainAction->fields.actorId;
          v217 = v112->fields.uniqueId;
          v218 = BattleLogicFunction__isSafeDamage(v369, dataVals_k__BackingField, targetId_k__BackingField, v215);
          goto LABEL_235;
        }
        if ( FuncList__Check(122, *p_funcType, 0) )
        {
          this = v369;
          v221 = mainAction->fields.actorId;
          v222 = v112->fields.uniqueId;
          v218 = 1;
          v220 = v369;
          goto LABEL_238;
        }
        if ( FuncList__Check(35, *p_funcType, 0) )
        {
          v112->fields.isWithdraw = 1;
          goto LABEL_194;
        }
        PTSubTargetId = (BattleData_o *)FuncList__Check(36, *p_funcType, 0);
        if ( ((unsigned __int8)PTSubTargetId & 1) != 0 )
        {
          v229 = (GrandQuestFolderBoardItem_o *)p_fields->data;
          if ( !p_fields->data )
            goto LABEL_516;
          Name_k__BackingField = (GrandQuestFolderBoardItem_c *)v229[2].fields._Name_k__BackingField;
          v229[3].klass = Name_k__BackingField;
          sub_1C71354(v229 + 3, (int32_t)Name_k__BackingField, v223, v224, v225, v226, v227, v228);
LABEL_244:
          v166 = v112->fields.uniqueId;
          goto LABEL_191;
        }
        if ( FuncList__Check(37, *p_funcType, 0)
          || FuncList__Check(38, *p_funcType, 0)
          || FuncList__Check(39, *p_funcType, 0)
          || FuncList__Check(40, *p_funcType, 0) )
        {
          v231 = DataVals__GetValue(dataVals_k__BackingField, 0);
          if ( FuncList__Check(37, *p_funcType, 0) || FuncList__Check(39, *p_funcType, 0) )
            v231 = -v231;
          if ( FuncList__Check(37, *p_funcType, 0) || FuncList__Check(38, *p_funcType, 0) )
          {
            v231 *= 2;
            v232 = 1;
          }
          else
          {
            v232 = 0;
          }
          data = DataVals__isParam(dataVals_k__BackingField, 91, 0);
          isParam = DataVals__isParam(dataVals_k__BackingField, 150, 0);
          svtSnapShotOnBuffUpdate = 0;
          if ( isParam )
          {
            svtSnapShotOnBuffUpdate = (BattleServantSnapShotOnBuffUpdate_o *)sub_1C715FC(BattleServantSnapShotOnBuffUpdate_TypeInfo);
            BattleServantSnapShotOnBuffUpdate___ctor(svtSnapShotOnBuffUpdate, v112, 0);
          }
          v234 = DataVals__GetTargetList(dataVals_k__BackingField, 0);
          PTSubTargetId = (BattleData_o *)BattleServantData__ChangeBuffValue(
                                            v112,
                                            v231,
                                            v234,
                                            v232,
                                            1,
                                            isParam,
                                            &buffsToRemove,
                                            data,
                                            0);
          if ( ((unsigned __int8)PTSubTargetId & 1) == 0 )
            goto LABEL_290;
          if ( isParam )
          {
            action = (BattleActionData_o *)buffsToRemove;
            if ( !buffsToRemove )
              goto LABEL_516;
            if ( buffsToRemove->fields._count >= 1 )
            {
              PTSubTargetId = (BattleData_o *)v112->fields.buffData;
              if ( !PTSubTargetId )
                goto LABEL_516;
              PTSubTargetId = (BattleData_o *)BattleBuffData__SubBuffSpecified(
                                                (BattleBuffData_o *)PTSubTargetId,
                                                buffsToRemove,
                                                1,
                                                0);
              if ( !PTSubTargetId )
                goto LABEL_516;
              this = v369;
              BattleLogicFunction__ApplySubBuffChanges(
                v369,
                mainAction,
                (System_Collections_Generic_List_BattleBuffData_BuffData__o *)PTSubTargetId->fields.m_CachedPtr,
                targetId_k__BackingField,
                svtSnapShotOnBuffUpdate,
                dataVals_k__BackingField,
                functionIndex,
                isCommandSideEffect,
                v31,
                isRandomDamage);
              goto LABEL_113;
            }
          }
          goto LABEL_244;
        }
        if ( FuncList__Check(41, *p_funcType, 0) )
        {
          this = v369;
          dataa = v369->fields.data;
          v235 = DataVals__GetValue(dataVals_k__BackingField, 0);
          v236 = (Generator_BGMFromChangeBGMFunc_o *)sub_1C715FC(Generator_BGMFromChangeBGMFunc_TypeInfo);
          Generator_BGMFromChangeBGMFunc___ctor(v236, dataa, v235, dataVals_k__BackingField, 0, 0);
          BgmFadeTime = DataVals__GetBgmFadeTime(dataVals_k__BackingField, 0);
          BattleLogicFunction__FunctionChangeBgm(v369, v31, (Generator_BGM_o *)v236, 0, BgmFadeTime, v238);
          goto LABEL_113;
        }
        PTSubTargetId = (BattleData_o *)FuncList__Check(42, *p_funcType, 0);
        if ( ((unsigned __int8)PTSubTargetId & 1) != 0 )
          goto LABEL_244;
        if ( FuncList__Check(43, *p_funcType, 0) )
        {
          this = v369;
          v118 = BattleLogicFunction__functionResurrection(
                   v369,
                   v112->fields.uniqueId,
                   functionIndex,
                   funcEnt,
                   dataVals_k__BackingField,
                   isCommandSideEffect,
                   v239);
          goto LABEL_131;
        }
        if ( !FuncList__Check(44, *p_funcType, 0)
          && !FuncList__Check(133, *p_funcType, 0)
          && !FuncList__Check(146, *p_funcType, 0)
          && !FuncList__Check(154, *p_funcType, 0) )
        {
          if ( FuncList__Check(45, *p_funcType, 0) )
          {
            v112->fields.isSystemAlive = DataVals__GetValue(dataVals_k__BackingField, 0) == 1;
            goto LABEL_194;
          }
          if ( FuncList__Check(46, *p_funcType, 0) )
          {
            this = v369;
            v118 = BattleLogicFunction__functionInstantDeath(
                     v369,
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
            v251 = mainAction->fields.actorId;
            v252 = v112->fields.uniqueId;
            v253 = 9;
            goto LABEL_301;
          }
          if ( FuncList__Check(48, *p_funcType, 0) )
          {
            this = v369;
            v118 = BattleLogicFunction__functionGainNpFromTargets(v369, v31, mainAction, v109, v254);
            goto LABEL_131;
          }
          if ( FuncList__Check(49, *p_funcType, 0) )
          {
            this = v369;
            v118 = BattleLogicFunction__functionGainHpFromTargets(v369, v31, mainAction, v109, v255);
            goto LABEL_131;
          }
          v256 = FuncList__Check(50, *p_funcType, 0);
          if ( v256 || (v256 = FuncList__Check(51, *p_funcType, 0)) )
          {
            v258 = *p_funcType == 51;
            if ( *p_funcType == 50 )
            {
              v256 = BattleLogicFunction__isSafeDamage(v369, dataVals_k__BackingField, targetId_k__BackingField, v257);
              v258 = v256;
            }
            v259 = mainAction->fields.actorId;
            HpPerValue = BattleLogicFunction__getHpPerValue(
                           (BattleLogicFunction_o *)v256,
                           dataVals_k__BackingField,
                           v112,
                           v257);
            this = v369;
            v118 = BattleLogicFunction__functionlossHp(
                     v369,
                     v259,
                     targetId_k__BackingField,
                     funcEnt,
                     dataVals_k__BackingField,
                     functionIndex,
                     v258,
                     isCommandSideEffect,
                     HpPerValue,
                     0,
                     mainAction,
                     v359);
            goto LABEL_131;
          }
          if ( FuncList__Check(52, *p_funcType, 0) )
          {
            v262 = v369;
            v263 = 1;
            v264 = dataVals_k__BackingField;
          }
          else
          {
            if ( !FuncList__Check(62, *p_funcType, 0) )
            {
              if ( FuncList__Check(53, *p_funcType, 0) )
              {
                v268 = (Generator_BGFromQuickChangeBGFunc_o *)sub_1C715FC(Generator_BGFromQuickChangeBGFunc_TypeInfo);
                Generator_BGFromQuickChangeBGFunc___ctor(v268, dataVals_k__BackingField, 0);
                this = v369;
                BattleLogicFunction__FunctionQuickChangeBG(v369, v31, (Generator_Background_o *)v268, v269);
                goto LABEL_113;
              }
              if ( FuncList__Check(54, *p_funcType, 0) )
              {
                PTSubTargetId = (BattleData_o *)v112->fields.svtdata;
                if ( !PTSubTargetId )
                  goto LABEL_516;
                if ( !ServantEntity__isInvalidSkillShift((ServantEntity_o *)PTSubTargetId, 0) )
                {
                  this = v369;
                  BattleLogicFunction__functionShiftServant(v369, mainAction, v112, dataVals_k__BackingField, v270);
                  goto LABEL_113;
                }
                v170 = v109->fields._targetId_k__BackingField;
LABEL_291:
                v169 = isCommandSideEffect;
                this = v369;
LABEL_292:
                v245 = v169;
                v246 = this;
                v247 = functionIndex;
                v248 = dataVals_k__BackingField;
                v249 = 0;
LABEL_293:
                v118 = BattleLogicFunction__getNoEffectObject(v246, v170, v247, v248, v245, 0, v249, 0, overwriteLossHp);
                goto LABEL_131;
              }
              if ( FuncList__Check(55, *p_funcType, 0) )
              {
                v251 = mainAction->fields.actorId;
                v252 = v112->fields.uniqueId;
                v253 = 10;
LABEL_301:
                this = v369;
                v118 = BattleLogicFunction__functionNPDamage(
                         v369,
                         v251,
                         v252,
                         dataVals_k__BackingField,
                         functionIndex,
                         v253,
                         mainAction,
                         v250);
                goto LABEL_131;
              }
              if ( FuncList__Check(57, *p_funcType, 0) )
              {
                v112->fields.deadtype = DataVals__GetValue(dataVals_k__BackingField, 0);
                goto LABEL_194;
              }
              if ( FuncList__Check(58, *p_funcType, 0) )
              {
                buffData = v112->fields.buffData;
                PTSubTargetId = (BattleData_o *)DataVals__GetParam(dataVals_k__BackingField, 14, 0, 0);
                if ( !buffData )
                  goto LABEL_516;
                BattleBuffData__UpdateForceAllBuffNoAct(buffData, (int32_t)PTSubTargetId, funcEnt->fields.vals, 0);
                v167 = isCommandSideEffect;
                v166 = v112->fields.uniqueId;
                v168 = funcEnt;
                goto LABEL_192;
              }
              if ( FuncList__Check(59, *p_funcType, 0) )
              {
                v272 = (BattleActionData_UpShiftGaugeData_o *)sub_1C715FC(BattleActionData_UpShiftGaugeData_TypeInfo);
                BattleActionData_UpShiftGaugeData___ctor(v272, 0);
LABEL_337:
                this = v369;
                BattleLogicFunction__functionBreakGaugeChange(
                  v369,
                  mainAction,
                  funcUnit,
                  v112,
                  (BattleActionData_BaseShiftGaugeData_o *)v272,
                  v273);
                goto LABEL_113;
              }
              if ( FuncList__Check(60, *p_funcType, 0) )
              {
                v272 = (BattleActionData_UpShiftGaugeData_o *)sub_1C715FC(BattleActionData_DownShiftGaugeData_TypeInfo);
                BattleActionData_DownShiftGaugeData___ctor((BattleActionData_DownShiftGaugeData_o *)v272, 0);
                goto LABEL_337;
              }
              if ( FuncList__Check(61, *p_funcType, 0) )
              {
                this = v369;
                SubMember = BattleLogicFunction__FunctionMoveToLastSubMember(
                              v369,
                              v112,
                              funcEnt,
                              v274,
                              functionIndex,
                              v275);
                BattleActionData__addAction(mainAction, SubMember, 0);
                BattleActionData__UpdateForceBuffEffectAllTrue(mainAction, 0);
                v366 = 1;
                goto LABEL_113;
              }
              if ( FuncList__Check(119, *p_funcType, 0) )
              {
                this = v369;
                BattleLogicFunction__functionMovePosition(v369, mainAction, v112, v277);
                goto LABEL_113;
              }
              if ( FuncList__Check(120, *p_funcType, 0) )
              {
                this = v369;
                BattleLogicFunction__FunctionRevival(v369, mainAction, v109, v278);
                goto LABEL_113;
              }
              if ( FuncList__Check(121, *p_funcType, 0) )
              {
                v251 = mainAction->fields.actorId;
                v252 = v112->fields.uniqueId;
                v253 = 11;
                goto LABEL_301;
              }
              if ( FuncList__Check(143, *p_funcType, 0) )
              {
                v251 = mainAction->fields.actorId;
                v252 = v112->fields.uniqueId;
                v253 = 12;
                goto LABEL_301;
              }
              if ( FuncList__Check(124, *p_funcType, 0) )
              {
                this = v369;
                BattleLogicFunction__functionMoveState(v369, v31, mainAction, v109, v279);
                goto LABEL_113;
              }
              if ( FuncList__Check(125, *p_funcType, 0) )
              {
                this = v369;
                BattleLogicFunction__ChangeBGMCostume(v369, dataVals_k__BackingField, mainAction, v280);
                goto LABEL_113;
              }
              v281 = FuncList__Check(126, *p_funcType, 0);
              if ( v281 )
              {
                BattleLogicFunction__LossCommandSpell(
                  (BattleLogicFunction_o *)v281,
                  dataVals_k__BackingField,
                  mainAction,
                  v282);
                goto LABEL_194;
              }
              if ( FuncList__Check(127, *p_funcType, 0) )
                goto LABEL_194;
              if ( FuncList__Check(128, *p_funcType, 0) )
              {
                this = v369;
                BattleLogicFunction__FunctionUpdateEntryPositions(v369, dataVals_k__BackingField, v283);
                goto LABEL_113;
              }
              if ( FuncList__Check(63, *p_funcType, 0) )
              {
                this = v369;
                BattleLogicFunction__FunctionUpdateEntryMaxCountEachTurn(v369, dataVals_k__BackingField, v284);
                goto LABEL_113;
              }
              if ( FuncList__Check(130, *p_funcType, 0) )
              {
                this = v369;
                BattleLogicFunction__FunctionToFieldAddChangeFieldBuff(v369, v31, mainAction, v109, isTreasureDvc, v285);
                goto LABEL_113;
              }
              if ( FuncList__Check(131, *p_funcType, 0) )
              {
                this = v369;
                BattleLogicFunction__FunctionSubFieldBuff(v369, v31, mainAction, v109, v286);
                goto LABEL_113;
              }
              if ( FuncList__Check(134, *p_funcType, 0) )
              {
                PTSubTargetId = (BattleData_o *)DataVals__GetValue(dataVals_k__BackingField, 0);
                if ( !p_fields->data )
                  goto LABEL_516;
                BattleData__AddQuestRouteId(p_fields->data, (int32_t)PTSubTargetId, 0);
                goto LABEL_194;
              }
              if ( FuncList__Check(135, *p_funcType, 0) )
              {
                this = v369;
                BattleLogicFunction__FunctionLastSkillCopy(v369, mainAction, dataVals_k__BackingField, v31, v287);
                goto LABEL_113;
              }
              if ( FuncList__Check(136, *p_funcType, 0) )
              {
                v288 = DataVals__GetValue(dataVals_k__BackingField, 0);
                this = v369;
                BattleLogicFunction__FunctionChangeEnemyMasterFace(v369, v288, v289);
                goto LABEL_113;
              }
              if ( FuncList__Check(137, *p_funcType, 0) )
              {
                v216 = mainAction->fields.actorId;
                v217 = v112->fields.uniqueId;
                this = v369;
                v218 = ((int (__fastcall *)(BattleServantData_o *, const MethodInfo *))v112->klass->vtable._9_get_hp.methodPtr)(
                         v112,
                         v112->klass->vtable._9_get_hp.method) > 1;
LABEL_235:
                v220 = this;
                v221 = v216;
                v222 = v217;
LABEL_238:
                v118 = BattleLogicFunction__functionValueDamage(
                         v220,
                         v221,
                         v222,
                         dataVals_k__BackingField,
                         functionIndex,
                         v218,
                         mainAction,
                         v219);
                goto LABEL_131;
              }
              if ( FuncList__Check(138, *p_funcType, 0) )
              {
                this = v369;
                BattleLogicFunction__FunctionAddBattleValue(v369, mainAction->fields.actorId, funcEnt, v290);
                goto LABEL_113;
              }
              if ( FuncList__Check(139, *p_funcType, 0) )
              {
                this = v369;
                BattleLogicFunction__FunctionSetBattleValue(v369, mainAction->fields.actorId, funcEnt, v291);
                goto LABEL_113;
              }
              if ( FuncList__Check(140, *p_funcType, 0) )
              {
                np = v112->fields.np;
                this = v369;
                v295 = (float)(DataVals__GetValue(dataVals_k__BackingField, 0) * np) / 1000.0;
                if ( v295 == INFINITY )
                  v296 = 0x80000000;
                else
                  v296 = (int)v295;
                v118 = BattleLogicFunction__functionGainNp(
                         v369,
                         v31,
                         v293,
                         targetId_k__BackingField,
                         dataVals_k__BackingField,
                         v296,
                         v294);
                goto LABEL_131;
              }
              if ( FuncList__Check(141, *p_funcType, 0) )
              {
                v297 = v112->fields.np;
                v298 = (float)(DataVals__GetValue(dataVals_k__BackingField, 0) * v297) / 1000.0;
                v299 = (int)v298;
                if ( v298 == INFINITY )
                  v299 = 0x80000000;
                v153 = -v299;
LABEL_183:
                v154 = v112;
              }
              else
              {
                if ( FuncList__Check(142, *p_funcType, 0) )
                {
                  v214 = BattleLogicFunction__FunctionAddBattlePoint(
                           v369,
                           v31,
                           targetId_k__BackingField,
                           dataVals_k__BackingField,
                           v300);
                  if ( !v214 )
                    goto LABEL_194;
                  goto LABEL_232;
                }
                if ( FuncList__Check(144, *p_funcType, 0) )
                {
                  this = v369;
                  v118 = BattleLogicFunction__FunctionSetNpExecutedState(
                           v369,
                           v31,
                           targetId_k__BackingField,
                           dataVals_k__BackingField,
                           v301);
                  goto LABEL_131;
                }
                PTSubTargetId = (BattleData_o *)FuncList__Check(145, *p_funcType, 0);
                if ( ((unsigned __int8)PTSubTargetId & 1) != 0 )
                {
                  if ( !p_fields->data )
                    goto LABEL_516;
                  perf = (UnityEngine_Object_o *)p_fields->data->fields.perf;
                  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
                    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
                  PTSubTargetId = (BattleData_o *)UnityEngine_Object__op_Inequality(perf, 0, 0);
                  if ( ((unsigned __int8)PTSubTargetId & 1) != 0 )
                  {
                    if ( !p_fields->data )
                      goto LABEL_516;
                    PTSubTargetId = (BattleData_o *)p_fields->data->fields.perf;
                    if ( !PTSubTargetId )
                      goto LABEL_516;
                    BattlePerformance__HideOverGaugeMessage((BattlePerformance_o *)PTSubTargetId, 0);
                  }
                  goto LABEL_194;
                }
                v303 = FuncList__Check(147, *p_funcType, 0);
                if ( v303 )
                {
                  BattleLogicFunction__SetEnemyCountChangeActionData(
                    (BattleLogicFunction_o *)v303,
                    dataVals_k__BackingField,
                    mainAction,
                    v304);
                  goto LABEL_194;
                }
                v305 = FuncList__Check(148, *p_funcType, 0);
                if ( v305 )
                {
                  BattleLogicFunction__SetDisplayBattleMessage((BattleLogicFunction_o *)v305, mainAction, v109, v306);
                  goto LABEL_194;
                }
                v307 = FuncList__Check(149, *p_funcType, 0);
                if ( v307 )
                {
                  BattleLogicFunction__SetBattleSkillDropGeneratorBuff(
                    (BattleLogicFunction_o *)v307,
                    mainAction,
                    v31,
                    targetId_k__BackingField,
                    dataVals_k__BackingField,
                    v308);
                  goto LABEL_194;
                }
                if ( FuncList__Check(150, *p_funcType, 0) )
                {
                  v309 = DataVals__GetValue(dataVals_k__BackingField, 0);
                  this = v369;
                  BattleLogicFunction__FunctionChangeMasterFace(v369, v309, v310);
                  goto LABEL_113;
                }
                if ( FuncList__Check(151, *p_funcType, 0) )
                {
                  v311 = DataVals__GetValue(dataVals_k__BackingField, 0);
                  this = v369;
                  BattleLogicFunction__FunctionEnableMasterSkill(v369, v311, v312);
                  goto LABEL_113;
                }
                if ( FuncList__Check(152, *p_funcType, 0) )
                {
                  v313 = DataVals__GetValue(dataVals_k__BackingField, 0);
                  this = v369;
                  BattleLogicFunction__FunctionEnableMasterCommandSpell(v369, v313, v314);
                  goto LABEL_113;
                }
                if ( FuncList__Check(153, *p_funcType, 0) )
                {
                  this = v369;
                  BattleLogicFunction__FunctionBattleModelChange(v369, mainAction, v109, v315);
                  goto LABEL_113;
                }
                if ( FuncList__Check(155, *p_funcType, 0) )
                {
                  this = v369;
                  BattleLogicFunction__FunctionAddBattleMissionValue(v369, funcEnt, v316);
                  goto LABEL_113;
                }
                if ( FuncList__Check(156, *p_funcType, 0) )
                {
                  this = v369;
                  BattleLogicFunction__FunctionSetBattleMissionValue(v369, funcEnt, v317);
                  goto LABEL_113;
                }
                if ( FuncList__Check(157, *p_funcType, 0) )
                {
                  PTSubTargetId = (BattleData_o *)DataVals__GetValue(dataVals_k__BackingField, 0);
                  if ( !p_fields->data )
                    goto LABEL_516;
                  BattleData__ChangeEnemyPosType(p_fields->data, (int32_t)PTSubTargetId, 0);
                  goto LABEL_194;
                }
                if ( FuncList__Check(158, *p_funcType, 0) )
                {
                  PTSubTargetId = (BattleData_o *)FunctionEntity__IsTargetEnemyOnly(funcEnt, 0);
                  skillInfo = mainAction->fields.skillInfo;
                  v320 = v364;
                  v321 = (char)PTSubTargetId;
                  if ( skillInfo )
                    v320 = mainAction->fields.skillInfo;
                  v364 = v320;
                  if ( skillInfo )
                  {
                    if ( !v320 )
                      goto LABEL_516;
                    PTSubTargetId = (BattleData_o *)BattleSkillInfoData__GetSelfSkillLvEntity(v320, 0);
                    v322 = PTSubTargetId;
                    if ( !PTSubTargetId )
                      PTSubTargetId = v363;
                    if ( v322 )
                    {
                      if ( !PTSubTargetId )
                        goto LABEL_516;
                      IsNoTargetSkipSkill = SkillLvEntity__IsNoTargetSkipSkill((SkillLvEntity_o *)PTSubTargetId, 0);
                      v324 = &v383;
                      LOWORD(v383.fields._list) = 0;
                      System_Nullable_bool____ctor(
                        (System_Nullable_bool__o)v324,
                        IsNoTargetSkipSkill,
                        (const MethodInfo_3935100 *)Method_System_Nullable_bool___ctor__);
                      LOBYTE(skillInfo) = BYTE1(v383.fields._list);
                      v363 = v322;
                    }
                    else
                    {
                      LOBYTE(skillInfo) = 0;
                    }
                  }
                  if ( !p_fields->data )
                    goto LABEL_516;
                  v327 = (unsigned __int8)skillInfo != 0;
                  v328 = 304;
                  if ( (v321 & 1) != 0 )
                    v328 = 312;
                  this = v369;
                  v118 = BattleLogicFunction__FunctionSwapFieldPosition(
                           v369,
                           dataVals_k__BackingField,
                           functionIndex,
                           *(System_Int32_array **)((char *)&p_fields->data->klass + v328),
                           v321 & 1,
                           v327,
                           v318);
LABEL_131:
                  BattleActionData__addAction(mainAction, v118, 0);
LABEL_113:
                  v75 = v377;
                  goto LABEL_114;
                }
                v325 = FuncList__Check(159, *p_funcType, 0);
                if ( v325 )
                {
                  BattleLogicFunction__FunctionSetDisplayDirectBattleMessageInFsm(
                    (BattleLogicFunction_o *)v325,
                    mainAction,
                    v109,
                    v326);
                  goto LABEL_194;
                }
                PTSubTargetId = (BattleData_o *)FuncList__Check(162, *p_funcType, 0);
                if ( ((unsigned __int8)PTSubTargetId & 1) == 0 )
                {
                  PTSubTargetId = (BattleData_o *)FuncList__Check(163, *p_funcType, 0);
                  if ( ((unsigned __int8)PTSubTargetId & 1) != 0 )
                  {
                    if ( !argument )
                      goto LABEL_516;
                    UsedChargeTurn_k__BackingField = argument->fields._UsedChargeTurn_k__BackingField;
                    v333 = DataVals__GetValue(dataVals_k__BackingField, 0) * UsedChargeTurn_k__BackingField / 1000;
                    if ( DataVals__TryGetParam(dataVals_k__BackingField, 260, param, 0) )
                    {
                      v334 = param[0];
                      if ( !System_Math_TypeInfo->_2.cctor_finished )
                        j_il2cpp_runtime_class_init_0(System_Math_TypeInfo);
                      v333 = System_Math__Min_65553872(v333, v334, 0);
                    }
                    v174 = functionIndex;
                    this = v369;
                    v175 = funcEnt;
                    v176 = isCommandSideEffect;
                    v178 = v369;
                    v179 = targetId_k__BackingField;
                    v180 = dataVals_k__BackingField;
                    v177 = v333;
LABEL_205:
                    v118 = BattleLogicFunction__functionHastenNpTurn(
                             v178,
                             v179,
                             v175,
                             v180,
                             v174,
                             v176,
                             -1,
                             v177,
                             overwriteLossHp);
                    goto LABEL_131;
                  }
                  goto LABEL_194;
                }
                if ( !argument )
                  goto LABEL_516;
                UsedNpValue_k__BackingField = argument->fields._UsedNpValue_k__BackingField;
                v330 = DataVals__GetValue(dataVals_k__BackingField, 0) * UsedNpValue_k__BackingField / 1000;
                if ( DataVals__TryGetParam(dataVals_k__BackingField, 259, &param[1], 0) )
                {
                  v331 = param[1];
                  if ( !System_Math_TypeInfo->_2.cctor_finished )
                    j_il2cpp_runtime_class_init_0(System_Math_TypeInfo);
                  v330 = System_Math__Min_65553872(v330, v331, 0);
                }
                v154 = v112;
                v153 = v330;
              }
              v155 = (BattleLogicFunction_o *)BattleServantData__addNp(v154, v153, 0, 0);
              v156 = (int)v155;
              PTSubTargetId = (BattleData_o *)BattleLogicFunction__getFunctionObject(
                                                v155,
                                                funcEnt,
                                                v112->fields.uniqueId,
                                                functionIndex,
                                                isCommandSideEffect,
                                                0,
                                                v157);
              if ( !PTSubTargetId )
                goto LABEL_516;
              v158 = (BattleActionData_BuffData_o *)PTSubTargetId;
              LODWORD(PTSubTargetId->fields.rootfsm) = 3;
              BattleActionData_BuffData__setSaveNp((BattleActionData_BuffData_o *)PTSubTargetId, v156, 0);
              v151 = mainAction;
              FunctionObject = v158;
              goto LABEL_193;
            }
            v262 = v369;
            v264 = dataVals_k__BackingField;
            v263 = 0;
          }
          updated = BattleLogicFunction__UpdateUserEquipSkillChargeTurn(v262, v264, v263, v261);
          if ( !updated )
          {
            v267 = (BattleActionData_MasterBuffData_o *)sub_1C715FC(BattleActionData_MasterBuffData_TypeInfo);
            BattleActionData_MasterBuffData___ctor(v267, funcEnt, 0);
            if ( !v267 )
              goto LABEL_516;
            v267->fields.popColor = 1;
            v247 = functionIndex;
            this = v369;
            v170 = v109->fields._targetId_k__BackingField;
            v248 = dataVals_k__BackingField;
            v245 = isCommandSideEffect;
            v246 = v369;
            v249 = (BattleActionData_BuffData_o *)v267;
            goto LABEL_293;
          }
          BattleLogicFunction__CreateMasterBuffEffect(
            (BattleLogicFunction_o *)updated,
            mainAction,
            funcEnt,
            functionIndex,
            isCommandSideEffect,
            dataVals_k__BackingField,
            v266);
          goto LABEL_194;
        }
        v240 = funcEnt->fields.vals;
        if ( FuncList__Check(44, funcEnt->fields.funcType, 0) )
        {
          SameIndiualityBuffSum = BattleServantData__getSameIndiualityBuffSum(v112, v240, 1, 0, 0, 0);
          goto LABEL_286;
        }
        if ( FuncList__Check(133, *p_funcType, 0) )
        {
          SameIndiualityBuffSum = GainNpIndividualSum__GetSameIndiualitySum(
                                    p_fields->data,
                                    mainAction->fields.actorId,
                                    v112->fields.uniqueId,
                                    dataVals_k__BackingField,
                                    funcEnt,
                                    0);
          goto LABEL_286;
        }
        if ( FuncList__Check(146, *p_funcType, 0) )
        {
          SameIndiualityBuffSum = GainNpIndividualSum__GetIndividualityIncludeTargetSum(
                                    p_fields->data,
                                    mainAction->fields.actorId,
                                    v112->fields.uniqueId,
                                    dataVals_k__BackingField,
                                    funcEnt,
                                    0);
          goto LABEL_286;
        }
        PTSubTargetId = (BattleData_o *)FuncList__Check(154, *p_funcType, 0);
        if ( ((unsigned __int8)PTSubTargetId & 1) != 0 )
        {
          if ( !p_fields->data )
            goto LABEL_516;
          totalCriticalStars = p_fields->data->fields.totalCriticalStars;
          Value2 = DataVals__GetValue2(dataVals_k__BackingField, 0);
          if ( Value2 >= 1 )
          {
            v244 = Value2;
            if ( !System_Math_TypeInfo->_2.cctor_finished )
              j_il2cpp_runtime_class_init_0(System_Math_TypeInfo);
            SameIndiualityBuffSum = System_Math__Min_65553872(totalCriticalStars, v244, 0);
LABEL_286:
            totalCriticalStars = SameIndiualityBuffSum;
          }
        }
        else
        {
          totalCriticalStars = 0;
        }
        CorrectedValueFuncGainNp = DataVals__GetValue(dataVals_k__BackingField, 0) * totalCriticalStars;
        if ( !DataVals__isUnaffected(dataVals_k__BackingField, 0) )
          CorrectedValueFuncGainNp = BattleServantData__getCorrectedValueFuncGainNp(v112, CorrectedValueFuncGainNp, 0);
        if ( CorrectedValueFuncGainNp < 1 )
        {
LABEL_290:
          v170 = v112->fields.uniqueId;
          goto LABEL_291;
        }
LABEL_175:
        if ( !BattleServantData__isGainNp(v112, 1, dataVals_k__BackingField, 0) )
          goto LABEL_290;
        v147 = (BattleLogicFunction_o *)BattleServantData__addNp(v112, CorrectedValueFuncGainNp, 0, 0);
        v148 = (int)v147;
        PTSubTargetId = (BattleData_o *)BattleLogicFunction__getFunctionObject(
                                          v147,
                                          funcEnt,
                                          v112->fields.uniqueId,
                                          functionIndex,
                                          isCommandSideEffect,
                                          0,
                                          v149);
        if ( !PTSubTargetId )
          goto LABEL_516;
        v150 = (BattleActionData_BuffData_o *)PTSubTargetId;
        LODWORD(PTSubTargetId->fields.rootfsm) = 3;
        BattleActionData_BuffData__setSaveNp((BattleActionData_BuffData_o *)PTSubTargetId, v148, 0);
        if ( isCommandSideEffect )
          v150->fields.isCommandAfter = 1;
        v151 = mainAction;
        FunctionObject = v150;
        goto LABEL_193;
      }
LABEL_450:
      BattleActionData__AddUseInFsmFuncParam(mainAction, v75, 0);
      v38 = ServantData;
      if ( isCreateSideEffect )
      {
        v68 = v373;
        v335 = v375;
        if ( !funcEnt )
          goto LABEL_516;
        v336 = FuncList__Check(26, *p_funcType, 0);
        v337 = (BattleLogicFunction_AfterAttackSideEffectMakeArgument_o *)sub_1C715FC(BattleLogicFunction_AfterAttackSideEffectMakeArgument_TypeInfo);
        BattleLogicFunction_AfterAttackSideEffectMakeArgument___ctor(v337, 0);
        if ( !v337 )
          goto LABEL_516;
        Argument__Init = BattleLogicFunction_AfterAttackSideEffectMakeArgument__Init(v337, mainAction, 0);
        BattleLogicFunction__setAttackSideEffect(
          this,
          mainAction,
          ServantData,
          v336 || isTreasureDvc,
          Argument__Init,
          v339);
        PTSubTargetId = (BattleData_o *)BattleActionData__getDamageTargetIdList(mainAction, 0);
        if ( !PTSubTargetId )
          goto LABEL_516;
        v340 = PTSubTargetId;
        if ( PTSubTargetId->fields.m_CancellationTokenSource )
        {
          if ( ServantData == 0 || !isTreasureDvc )
          {
            v341 = 0;
          }
          else
          {
            v341 = (BattleCommandData_o *)sub_1C715FC(BattleCommandData_TypeInfo);
            BattleCommandData___ctor(v341, 0);
            PTSubTargetId = (BattleData_o *)BattleServantData__getTreasureDvcCardId(ServantData, 0);
            if ( !v341 )
              goto LABEL_516;
            v341->fields._type = (int)PTSubTargetId;
            v341->fields.treasureDvc = BattleServantData__getTreasureDvcId(ServantData, 1, 0, 0);
          }
          v342 = (UnityEngine_Object_o *)this->fields.logic;
          if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
          PTSubTargetId = (BattleData_o *)UnityEngine_Object__op_Inequality(v342, 0, 0);
          if ( ((unsigned __int8)PTSubTargetId & 1) != 0 )
          {
            m_CancellationTokenSource = v340->fields.m_CancellationTokenSource;
            if ( (int)m_CancellationTokenSource >= 1 )
            {
              v344 = 0;
              while ( v344 < (unsigned int)m_CancellationTokenSource )
              {
                PTSubTargetId = (BattleData_o *)this->fields.logic;
                if ( !PTSubTargetId )
                  goto LABEL_516;
                PTSubTargetId = (BattleData_o *)BattleLogic__SetDamageSideEffect(
                                                  (BattleLogic_o *)PTSubTargetId,
                                                  mainAction,
                                                  mainAction->fields.actorId,
                                                  *((_DWORD *)&v340->fields.rootfsm + v344),
                                                  v341,
                                                  0);
                LODWORD(m_CancellationTokenSource) = v340->fields.m_CancellationTokenSource;
                if ( (__int64)++v344 >= (int)m_CancellationTokenSource )
                  goto LABEL_458;
              }
              goto LABEL_517;
            }
          }
        }
      }
      else
      {
LABEL_457:
        v68 = v373;
        v335 = v375;
      }
LABEL_458:
      v69 = v68->max_length;
      v70 = v335 + 1;
      if ( v70 >= v69 )
        goto LABEL_472;
    }
  }
  v366 = 0;
  v367 = 0;
LABEL_472:
  PTSubTargetId = (BattleData_o *)BattleLogicFunction_ProcListInArgs__get_CheckDuplicateFunc(v31, 0);
  if ( !PTSubTargetId )
    goto LABEL_516;
  ((void (__fastcall *)(BattleData_o *, const MethodInfo *))PTSubTargetId->klass->vtable._5_isAiTarget.methodPtr)(
    PTSubTargetId,
    PTSubTargetId->klass->vtable._5_isAiTarget.method);
  if ( (v367 & 1) != 0 )
  {
    PTSubTargetId = p_fields->data;
    if ( !p_fields->data )
      goto LABEL_516;
    PTSubTargetId = (BattleData_o *)BattleData__getServantData(PTSubTargetId, mainAction->fields.actorId, 0);
    if ( !PTSubTargetId )
      goto LABEL_516;
    BattleServantData__resetAccumulationDamage((BattleServantData_o *)PTSubTargetId, 0);
  }
  if ( BattleActionData__checkSummonServantList(mainAction, 0) )
  {
    v345 = (UnityEngine_Object_o *)this->fields.logic;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    if ( UnityEngine_Object__op_Inequality(v345, 0, 0) )
    {
      PTSubTargetId = (BattleData_o *)BattleActionData__getSummonServant(mainAction, -1, 0);
      if ( !PTSubTargetId )
        goto LABEL_516;
      v346 = (int)PTSubTargetId->fields.m_CancellationTokenSource;
      v347 = PTSubTargetId;
      if ( v346 >= 1 )
      {
        v348 = 0;
        while ( v348 < v346 )
        {
          v349 = *((_QWORD *)&v347->fields.rootfsm + (int)v348);
          if ( !v349 )
            goto LABEL_516;
          PTSubTargetId = (BattleData_o *)this->fields.logic;
          if ( !PTSubTargetId )
            goto LABEL_516;
          BattleLogic__actEnemyPassiveSkill((BattleLogic_o *)PTSubTargetId, *(_DWORD *)(v349 + 32), 0);
          v346 = (int)v347->fields.m_CancellationTokenSource;
          if ( (int)++v348 >= v346 )
            goto LABEL_488;
        }
        goto LABEL_517;
      }
    }
  }
LABEL_488:
  PTSubTargetId = (BattleData_o *)BattleLogicFunction_ProcListInArgs__get_FuncSideEffectArg(v31, 0);
  if ( PTSubTargetId )
    PTSubTargetId = (BattleData_o *)((__int64 (__fastcall *)(BattleData_o *, BattleLogicFunction_o *, BattleActionData_o *, BattleServantData_o *, const char *))PTSubTargetId->klass[1]._1.name)(
                                      PTSubTargetId,
                                      this,
                                      mainAction,
                                      v38,
                                      PTSubTargetId->klass[1]._1.namespaze);
  externalArg = v31->fields.externalArg;
  if ( !externalArg )
    goto LABEL_516;
  if ( externalArg->fields._IsSetSubstituteBuffAction_k__BackingField )
    BattleLogicFunction__SetSubstituteAction(this, mainAction, isTreasureDvc, v350);
  if ( isBuffUpdate )
  {
    v352 = (UnityEngine_Object_o *)this->fields.logic;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    if ( UnityEngine_Object__op_Inequality(v352, 0, 0) )
    {
      PTSubTargetId = (BattleData_o *)this->fields.logic;
      if ( !PTSubTargetId )
        goto LABEL_516;
      BattleLogic__checkUsedBuff((BattleLogic_o *)PTSubTargetId, 0);
      if ( !p_fields->data )
        goto LABEL_516;
      PTSubTargetId = (BattleData_o *)p_fields->data->fields._FieldEnvData_k__BackingField;
      if ( !PTSubTargetId )
        goto LABEL_516;
      BattleFieldEnvironmentData__CheckUsedBuff((BattleFieldEnvironmentData_o *)PTSubTargetId, 0);
    }
  }
  if ( (v366 & 1) != 0 || v31->fields.updateField )
  {
    v353 = (UnityEngine_Object_o *)this->fields.logic;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    if ( UnityEngine_Object__op_Inequality(v353, 0, 0) )
    {
      PTSubTargetId = (BattleData_o *)this->fields.logic;
      if ( !PTSubTargetId )
        goto LABEL_516;
      BattleLogic__updateFieldBuff((BattleLogic_o *)PTSubTargetId, 0);
    }
  }
  PTSubTargetId = (BattleData_o *)v370;
  if ( !v370 )
LABEL_516:
    sub_1C71608(PTSubTargetId, action);
  System_Collections_Generic_List_int___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v383,
    v370,
    (const MethodInfo_37F41C8 *)Method_System_Collections_Generic_List_int__GetEnumerator__);
  v384 = v383;
  while ( System_Collections_Generic_List_Enumerator_int___MoveNext(
            &v384,
            (const MethodInfo_35924B0 *)Method_System_Collections_Generic_List_Enumerator_int__MoveNext__) )
  {
    if ( !p_fields->data )
      sub_1C71608(0, v354);
    v355 = BattleData__getServantData(p_fields->data, v384.fields._current, 0);
    if ( v355 )
      v355->fields.isTDLimitCount = 0;
  }
  System_Collections_Generic_List_Enumerator_int___Dispose(
    &v384,
    (const MethodInfo_35924AC *)Method_System_Collections_Generic_List_Enumerator_int__Dispose__);
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
  int32_t v19; // w3
  System_String_o *v20; // x4
  int32_t v21; // w5
  int64_t v22; // x6
  System_String_o *v23; // x7
  System_Collections_Generic_IEnumerable_TSource__o *v24; // x0
  __int64 v25; // x25
  BattleLogicFunction_SideEffectMakeArgument_o *v26; // x0
  const MethodInfo *v27; // x6
  BattleLogicFunction_SideEffectMakeArgument_o *Argument__SortMainTargetToFirst; // x5
  const MethodInfo *v29; // x6

  v9 = mainAction;
  v10 = this;
  if ( (byte_4CCA4F0 & 1) == 0 )
  {
    sub_1C713B0(&BattleLogicFunction_AttackSideEffectFunctionArgument_TypeInfo);
    sub_1C713B0(&BattleCommandData_TypeInfo);
    sub_1C713B0(&Method_System_Linq_Enumerable_Select_BattleActionData_SideEffectData__int___);
    sub_1C713B0(&Method_System_Linq_Enumerable_ToArray_int___);
    sub_1C713B0(&System_Func_BattleActionData_SideEffectData__int__TypeInfo);
    sub_1C713B0(&int___TypeInfo);
    sub_1C713B0(&Method_BattleLogicFunction___c__setAttackSideEffect_b__57_0__);
    this = (BattleLogicFunction_o *)sub_1C713B0(&BattleLogicFunction___c_TypeInfo);
    byte_4CCA4F0 = 1;
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
      v11 = (BattleCommandData_o *)sub_1C715FC(BattleCommandData_TypeInfo);
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
    v12 = (BattleLogicFunction_AttackSideEffectFunctionArgument_o *)sub_1C715FC(BattleLogicFunction_AttackSideEffectFunctionArgument_TypeInfo);
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
      _9__57_0 = (System_Func_object__int__o *)sub_1C715FC(System_Func_BattleActionData_SideEffectData__int__TypeInfo);
      System_Func_object__int____ctor(_9__57_0, v16, Method_BattleLogicFunction___c__setAttackSideEffect_b__57_0__, 0);
      static_fields = BattleLogicFunction___c_TypeInfo->static_fields;
      static_fields->__9__57_0 = (struct System_Func_BattleActionData_SideEffectData__int__o *)_9__57_0;
      sub_1C71354(
        (GrandQuestFolderBoardItem_o *)&static_fields->__9__57_0,
        (int32_t)_9__57_0,
        v18,
        v19,
        v20,
        v21,
        v22,
        v23);
    }
    v24 = (System_Collections_Generic_IEnumerable_TSource__o *)System_Linq_Enumerable__Select_object__int_(
                                                                 SideEffectList_k__BackingField,
                                                                 (System_Func_TSource__TResult__o *)_9__57_0,
                                                                 (const MethodInfo_3180FD8 *)Method_System_Linq_Enumerable_Select_BattleActionData_SideEffectData__int___);
    this = (BattleLogicFunction_o *)System_Linq_Enumerable__ToArray_int_(
                                      v24,
                                      (const MethodInfo_318AE54 *)Method_System_Linq_Enumerable_ToArray_int___);
    if ( v9 )
    {
      BattleActionData__SetFirstAtkMainTargetId(v9, (System_Int32_array *)this, 0);
      v25 = ((__int64 (__fastcall *)(BattleLogicFunction_SideEffectMakeArgument_o *, void *))attackArg->klass[1]._1.image)(
              attackArg,
              attackArg->klass[1]._1.gc_desc);
      this = (BattleLogicFunction_o *)sub_1C71458(int___TypeInfo, 1);
      if ( this )
      {
        mainAction = (BattleActionData_o *)this;
        if ( !LODWORD(this->fields.logic) )
          sub_1C71610(this);
        LODWORD(this->fields.logictarget) = v9->fields._FirstAtkMainTargetId_k__BackingField;
        if ( v25 )
        {
          v26 = (BattleLogicFunction_SideEffectMakeArgument_o *)(*(__int64 (__fastcall **)(__int64, BattleLogicFunction_o *, _QWORD))(*(_QWORD *)v25 + 408LL))(
                                                                  v25,
                                                                  this,
                                                                  *(_QWORD *)(*(_QWORD *)v25 + 416LL));
          BattleLogicFunction__SetTargetAttackSideEffect(v10, v12, v9, actionSvtData, v11, v26, v27);
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
            v29);
          return;
        }
      }
    }
LABEL_22:
    sub_1C71608(this, mainAction);
  }
}


BattleLogicFunction_SideEffectMakeArgument_o *BattleLogicFunction_AfterAttackSideEffectMakeArgument__Init(
        BattleLogicFunction_AfterAttackSideEffectMakeArgument_o *this,
        BattleActionData_o *mainAction,
        const MethodInfo *method)
{
  struct BattleActionData_SideEffectData_array *DamageAttackSideEffectList; // x0
  int32_t v5; // w2
  int32_t v6; // w3
  System_String_o *v7; // x4
  int32_t v8; // w5
  int64_t v9; // x6
  System_String_o *v10; // x7

  if ( !mainAction )
    sub_1C71608(this, 0);
  DamageAttackSideEffectList = BattleActionData__getDamageAttackSideEffectList(mainAction, 0);
  this->fields._SideEffectList_k__BackingField = DamageAttackSideEffectList;
  sub_1C71354(
    (GrandQuestFolderBoardItem_o *)&this->fields,
    (int32_t)DamageAttackSideEffectList,
    v5,
    v6,
    v7,
    v8,
    v9,
    v10);
  return (BattleLogicFunction_SideEffectMakeArgument_o *)this;
}


BattleLogicFunction_SideEffectMakeArgument_o *BattleLogicFunction_AfterAttackSideEffectMakeArgument__MakeOnlyMainArgument(
        BattleLogicFunction_AfterAttackSideEffectMakeArgument_o *this,
        const MethodInfo *method)
{
  BattleLogicFunction_SideEffectMakeArgument_o *v2; // x19
  const MethodInfo *v3; // x1

  if ( (byte_4CCA575 & 1) == 0 )
  {
    sub_1C713B0(&BattleLogicFunction_AfterMainAttackSideEffectMakeArgument_TypeInfo);
    byte_4CCA575 = 1;
  }
  v2 = (BattleLogicFunction_SideEffectMakeArgument_o *)sub_1C715FC(BattleLogicFunction_AfterMainAttackSideEffectMakeArgument_TypeInfo);
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
  int32_t v6; // w3
  System_String_o *v7; // x4
  int32_t v8; // w5
  int64_t v9; // x6
  System_String_o *v10; // x7

  BattleLogicFunction_CommonCheckDuplicateFunction___ctor(
    (BattleLogicFunction_CommonCheckDuplicateFunction_o *)this,
    (const MethodInfo *)argument);
  this->fields.argument = argument;
  sub_1C71354((GrandQuestFolderBoardItem_o *)&this->fields.argument, (int32_t)argument, v5, v6, v7, v8, v9, v10);
}


void BattleLogicFunction_AttackSideEffectFunctionArgument___ctor(
        BattleLogicFunction_AttackSideEffectFunctionArgument_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x20
  const MethodInfo *v4; // x1
  int32_t v5; // w2
  int32_t v6; // w3
  System_String_o *v7; // x4
  int32_t v8; // w5
  int64_t v9; // x6
  System_String_o *v10; // x7
  int32_t v11; // w2
  int32_t v12; // w3
  System_String_o *v13; // x4
  int32_t v14; // w5
  int64_t v15; // x6
  System_String_o *v16; // x7

  if ( (byte_4CCA556 & 1) == 0 )
  {
    sub_1C713B0(&BattleLogicFunction_AttackSideEffectCheckDuplicateFunction_TypeInfo);
    byte_4CCA556 = 1;
  }
  BattleLogicFunction_CommonSideEffectFunctionArgument___ctor(
    (BattleLogicFunction_CommonSideEffectFunctionArgument_o *)this,
    method);
  v3 = sub_1C715FC(BattleLogicFunction_AttackSideEffectCheckDuplicateFunction_TypeInfo);
  BattleLogicFunction_CommonCheckDuplicateFunction___ctor((BattleLogicFunction_CommonCheckDuplicateFunction_o *)v3, v4);
  *(_QWORD *)(v3 + 24) = this;
  sub_1C71354((GrandQuestFolderBoardItem_o *)(v3 + 24), (int32_t)this, v5, v6, v7, v8, v9, v10);
  this->fields.checkDuplicate = (struct BattleLogicFunction_CheckDuplicateFunction_o *)v3;
  sub_1C71354((GrandQuestFolderBoardItem_o *)&this->fields.checkDuplicate, v3, v11, v12, v13, v14, v15, v16);
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
  int32_t v5; // w3
  System_String_o *v6; // x4
  int32_t v7; // w5
  int64_t v8; // x6
  System_String_o *v9; // x7

  if ( (byte_4CCA563 & 1) == 0 )
  {
    sub_1C713B0(&Method_System_Collections_Generic_List_BattleLogicFunction_ExecutedFunctionData___ctor__);
    sub_1C713B0(&System_Collections_Generic_List_BattleLogicFunction_ExecutedFunctionData__TypeInfo);
    byte_4CCA563 = 1;
  }
  v3 = (System_Collections_Generic_List_object__o *)sub_1C715FC(System_Collections_Generic_List_BattleLogicFunction_ExecutedFunctionData__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v3,
    (const MethodInfo_380FEE4 *)Method_System_Collections_Generic_List_BattleLogicFunction_ExecutedFunctionData___ctor__);
  this->fields.executedFuncList = (struct System_Collections_Generic_List_BattleLogicFunction_ExecutedFunctionData__o *)v3;
  sub_1C71354((GrandQuestFolderBoardItem_o *)&this->fields, (int32_t)v3, v4, v5, v6, v7, v8, v9);
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

  if ( (byte_4CCA55F & 1) == 0 )
  {
    sub_1C713B0(&Method_System_Collections_Generic_List_BattleLogicFunction_ExecutedFunctionData__get_Count__);
    sub_1C713B0(&Method_System_Collections_Generic_List_BattleLogicFunction_ExecutedFunctionData__get_Item__);
    byte_4CCA55F = 1;
  }
  executedFuncList = (System_Collections_Generic_List_object__o *)this->fields.executedFuncList;
  if ( !executedFuncList )
LABEL_8:
    sub_1C71608(executedFuncList, method);
  v4 = 0;
  while ( v4 < executedFuncList->fields._size )
  {
    executedFuncList = (System_Collections_Generic_List_object__o *)System_Collections_Generic_List_object___get_Item(
                                                                      executedFuncList,
                                                                      v4,
                                                                      (const MethodInfo_3810448 *)Method_System_Collections_Generic_List_BattleLogicFunction_ExecutedFunctionData__get_Item__);
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
    sub_1C71608(this, 0);
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
  int32_t v9; // w3
  System_String_o *v10; // x4
  int32_t v11; // w5
  int64_t v12; // x6
  System_String_o *v13; // x7
  System_Collections_Generic_List_object__o *executedFuncList; // x19
  System_Predicate_object__o *v15; // x20

  if ( (byte_4CCA561 & 1) == 0 )
  {
    sub_1C713B0(&Method_System_Collections_Generic_List_BattleLogicFunction_ExecutedFunctionData__FindIndex__);
    sub_1C713B0(&System_Predicate_BattleLogicFunction_ExecutedFunctionData__TypeInfo);
    sub_1C713B0(&Method_BattleLogicFunction_CommonCheckDuplicateFunction___c__DisplayClass7_0__isExecutedFunction_b__0__);
    sub_1C713B0(&BattleLogicFunction_CommonCheckDuplicateFunction___c__DisplayClass7_0_TypeInfo);
    byte_4CCA561 = 1;
  }
  v5 = sub_1C715FC(BattleLogicFunction_CommonCheckDuplicateFunction___c__DisplayClass7_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v5, 0);
  if ( !v5
    || (*(_QWORD *)(v5 + 16) = vals,
        sub_1C71354((GrandQuestFolderBoardItem_o *)(v5 + 16), (int32_t)vals, v8, v9, v10, v11, v12, v13),
        executedFuncList = (System_Collections_Generic_List_object__o *)this->fields.executedFuncList,
        v15 = (System_Predicate_object__o *)sub_1C715FC(System_Predicate_BattleLogicFunction_ExecutedFunctionData__TypeInfo),
        System_Predicate_object____ctor(
          v15,
          (Il2CppObject *)v5,
          Method_BattleLogicFunction_CommonCheckDuplicateFunction___c__DisplayClass7_0__isExecutedFunction_b__0__,
          0),
        !executedFuncList) )
  {
    sub_1C71608(v6, v7);
  }
  return System_Collections_Generic_List_object___FindIndex(
           executedFuncList,
           (System_Predicate_T__o *)v15,
           (const MethodInfo_3810F70 *)Method_System_Collections_Generic_List_BattleLogicFunction_ExecutedFunctionData__FindIndex__) >= 0;
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
  int32_t v11; // w3
  System_String_o *v12; // x4
  int32_t v13; // w5
  int64_t v14; // x6
  System_String_o *v15; // x7
  System_Collections_Generic_List_object__o *executedFuncList; // x19
  System_Predicate_object__o *v17; // x20

  if ( (byte_4CCA562 & 1) == 0 )
  {
    sub_1C713B0(&Method_System_Collections_Generic_List_BattleLogicFunction_ExecutedFunctionData__FindIndex__);
    sub_1C713B0(&System_Predicate_BattleLogicFunction_ExecutedFunctionData__TypeInfo);
    sub_1C713B0(&Method_BattleLogicFunction_CommonCheckDuplicateFunction___c__DisplayClass8_0__isExecutedTarget_b__0__);
    sub_1C713B0(&BattleLogicFunction_CommonCheckDuplicateFunction___c__DisplayClass8_0_TypeInfo);
    byte_4CCA562 = 1;
  }
  v7 = sub_1C715FC(BattleLogicFunction_CommonCheckDuplicateFunction___c__DisplayClass8_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v7, 0);
  if ( !v7
    || (*(_QWORD *)(v7 + 16) = vals,
        sub_1C71354((GrandQuestFolderBoardItem_o *)(v7 + 16), (int32_t)vals, v10, v11, v12, v13, v14, v15),
        *(_DWORD *)(v7 + 24) = targetId,
        executedFuncList = (System_Collections_Generic_List_object__o *)this->fields.executedFuncList,
        v17 = (System_Predicate_object__o *)sub_1C715FC(System_Predicate_BattleLogicFunction_ExecutedFunctionData__TypeInfo),
        System_Predicate_object____ctor(
          v17,
          (Il2CppObject *)v7,
          Method_BattleLogicFunction_CommonCheckDuplicateFunction___c__DisplayClass8_0__isExecutedTarget_b__0__,
          0),
        !executedFuncList) )
  {
    sub_1C71608(v8, v9);
  }
  return System_Collections_Generic_List_object___FindIndex(
           executedFuncList,
           (System_Predicate_T__o *)v17,
           (const MethodInfo_3810F70 *)Method_System_Collections_Generic_List_BattleLogicFunction_ExecutedFunctionData__FindIndex__) >= 0;
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
    sub_1C71608(this, 0);
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
  int32_t v11; // w3
  System_String_o *v12; // x4
  int32_t v13; // w5
  int64_t v14; // x6
  System_String_o *v15; // x7
  unsigned __int64 v16; // x26
  __int64 v17; // x22
  int32_t v18; // w2
  int32_t v19; // w3
  System_String_o *v20; // x4
  int32_t v21; // w5
  int64_t v22; // x6
  System_String_o *v23; // x7
  __int64 v24; // x23
  __int64 v25; // x0
  System_Collections_Generic_List_object__o *executedFuncList; // x24
  System_Predicate_object__o *v27; // x25
  DataVals_o *v28; // x24
  System_Collections_Generic_List_object__o *v29; // x23
  int32_t v30; // w25
  BattleLogicFunction_ExecutedFunctionData_o *v31; // x22
  const MethodInfo *v32; // x3
  int32_t v33; // w2
  int32_t v34; // w3
  System_String_o *v35; // x4
  int32_t v36; // w5
  int64_t v37; // x6
  System_String_o *v38; // x7
  struct System_Object_array *items; // x8
  _QWORD *v40; // x9
  __int64 size; // x10
  Il2CppClass **v42; // x0

  if ( (byte_4CCA560 & 1) == 0 )
  {
    sub_1C713B0(&BattleLogicFunction_ExecutedFunctionData_TypeInfo);
    sub_1C713B0(&Method_System_Collections_Generic_List_BattleLogicFunction_ExecutedFunctionData__Add__);
    sub_1C713B0(&Method_System_Collections_Generic_List_BattleLogicFunction_ExecutedFunctionData__FindIndex__);
    sub_1C713B0(&System_Predicate_BattleLogicFunction_ExecutedFunctionData__TypeInfo);
    sub_1C713B0(&BattleLogicFunction_CommonCheckDuplicateFunction___c__DisplayClass5_0_TypeInfo);
    sub_1C713B0(&Method_BattleLogicFunction_CommonCheckDuplicateFunction___c__DisplayClass5_1__saveExecutedFunction_b__0__);
    sub_1C713B0(&BattleLogicFunction_CommonCheckDuplicateFunction___c__DisplayClass5_1_TypeInfo);
    byte_4CCA560 = 1;
  }
  v7 = sub_1C715FC(BattleLogicFunction_CommonCheckDuplicateFunction___c__DisplayClass5_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v7, 0);
  if ( !v7 )
    goto LABEL_19;
  *(_QWORD *)(v7 + 16) = vals;
  sub_1C71354((GrandQuestFolderBoardItem_o *)(v7 + 16), (int32_t)vals, v10, v11, v12, v13, v14, v15);
  if ( !targetIds )
    goto LABEL_19;
  if ( SLODWORD(targetIds->max_length) >= 1 )
  {
    v16 = 0;
    while ( 1 )
    {
      v17 = sub_1C715FC(BattleLogicFunction_CommonCheckDuplicateFunction___c__DisplayClass5_1_TypeInfo);
      System_Object___ctor((Il2CppObject *)v17, 0);
      if ( !v17 )
        break;
      *(_QWORD *)(v17 + 24) = v7;
      v24 = v17 + 24;
      sub_1C71354((GrandQuestFolderBoardItem_o *)(v17 + 24), v7, v18, v19, v20, v21, v22, v23);
      if ( v16 >= LODWORD(targetIds->max_length) )
        sub_1C71610(v25);
      *(_DWORD *)(v17 + 16) = targetIds->m_Items[v16];
      executedFuncList = (System_Collections_Generic_List_object__o *)this->fields.executedFuncList;
      v27 = (System_Predicate_object__o *)sub_1C715FC(System_Predicate_BattleLogicFunction_ExecutedFunctionData__TypeInfo);
      System_Predicate_object____ctor(
        v27,
        (Il2CppObject *)v17,
        Method_BattleLogicFunction_CommonCheckDuplicateFunction___c__DisplayClass5_1__saveExecutedFunction_b__0__,
        0);
      if ( !executedFuncList )
        break;
      Index = System_Collections_Generic_List_object___FindIndex(
                executedFuncList,
                (System_Predicate_T__o *)v27,
                (const MethodInfo_3810F70 *)Method_System_Collections_Generic_List_BattleLogicFunction_ExecutedFunctionData__FindIndex__);
      if ( (Index & 0x80000000) != 0 )
      {
        if ( !*(_QWORD *)v24 )
          break;
        v28 = *(DataVals_o **)(*(_QWORD *)v24 + 16LL);
        v29 = (System_Collections_Generic_List_object__o *)this->fields.executedFuncList;
        v30 = *(_DWORD *)(v17 + 16);
        v31 = (BattleLogicFunction_ExecutedFunctionData_o *)sub_1C715FC(BattleLogicFunction_ExecutedFunctionData_TypeInfo);
        BattleLogicFunction_ExecutedFunctionData___ctor(v31, v28, v30, v32);
        if ( !v29 )
          break;
        items = v29->fields._items;
        v40 = Method_System_Collections_Generic_List_BattleLogicFunction_ExecutedFunctionData__Add__;
        ++v29->fields._version;
        if ( !items )
          break;
        size = v29->fields._size;
        if ( (unsigned int)size >= LODWORD(items->max_length) )
        {
          System_Collections_Generic_List_object___AddWithResize(
            v29,
            (Il2CppObject *)v31,
            *(const MethodInfo_3810718 **)(*(_QWORD *)(v40[4] + 192LL) + 112LL));
        }
        else
        {
          v42 = &items->obj.klass + size;
          v29->fields._size = size + 1;
          v42[4] = (Il2CppClass *)v31;
          sub_1C71354((GrandQuestFolderBoardItem_o *)(v42 + 4), (int32_t)v31, v33, v34, v35, v36, v37, v38);
        }
      }
      if ( (__int64)++v16 >= SLODWORD(targetIds->max_length) )
        return;
    }
LABEL_19:
    sub_1C71608(Index, v9);
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
    sub_1C71608(this, n);
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
    sub_1C71608(this, n);
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
    sub_1C71608(this, n);
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
  int32_t v6; // w3
  System_String_o *v7; // x4
  int32_t v8; // w5
  int64_t v9; // x6
  System_String_o *v10; // x7

  BattleLogicFunction_CommonCheckDuplicateFunction___ctor(
    (BattleLogicFunction_CommonCheckDuplicateFunction_o *)this,
    (const MethodInfo *)argument);
  this->fields.argument = argument;
  sub_1C71354((GrandQuestFolderBoardItem_o *)&this->fields.argument, (int32_t)argument, v5, v6, v7, v8, v9, v10);
}


void BattleLogicFunction_CommonSideEffectCheckDuplicateFunction__Init(
        BattleLogicFunction_CommonSideEffectCheckDuplicateFunction_o *this,
        const MethodInfo *method)
{
  BattleLogicFunction_CommonSideEffectFunctionArgument_o *argument; // x0
  struct System_Collections_Generic_List_BattleLogicFunction_ExecutedFunctionData__o *v4; // x0
  int32_t v5; // w2
  int32_t v6; // w3
  System_String_o *v7; // x4
  int32_t v8; // w5
  int64_t v9; // x6
  System_String_o *v10; // x7

  argument = this->fields.argument;
  if ( !argument )
    sub_1C71608(0, method);
  v4 = BattleLogicFunction_CommonSideEffectFunctionArgument__getCheckBuffFuncList(argument, method);
  this->fields.executedFuncList = v4;
  sub_1C71354((GrandQuestFolderBoardItem_o *)&this->fields, (int32_t)v4, v5, v6, v7, v8, v9, v10);
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
    sub_1C71608(this, vals);
  if ( !LODWORD(targetIds->max_length) )
    sub_1C71610(this);
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
  int32_t v5; // w3
  System_String_o *v6; // x4
  int32_t v7; // w5
  int64_t v8; // x6
  System_String_o *v9; // x7
  const MethodInfo *v10; // x1

  if ( (byte_4CCA555 & 1) == 0 )
  {
    sub_1C713B0(&Method_System_Collections_Generic_Dictionary_int__List_BattleLogicFunction_ExecutedFunctionData____ctor__);
    sub_1C713B0(&System_Collections_Generic_Dictionary_int__List_BattleLogicFunction_ExecutedFunctionData___TypeInfo);
    byte_4CCA555 = 1;
  }
  this->fields.buffUniqueId = -1;
  v3 = (System_Collections_Generic_Dictionary_int__object__o *)sub_1C715FC(System_Collections_Generic_Dictionary_int__List_BattleLogicFunction_ExecutedFunctionData___TypeInfo);
  System_Collections_Generic_Dictionary_int__object____ctor(
    v3,
    (const MethodInfo_34618C0 *)Method_System_Collections_Generic_Dictionary_int__List_BattleLogicFunction_ExecutedFunctionData____ctor__);
  this->fields.executedBuffFuncDic = (struct System_Collections_Generic_Dictionary_int__List_BattleLogicFunction_ExecutedFunctionData___o *)v3;
  sub_1C71354((GrandQuestFolderBoardItem_o *)&this->fields.executedBuffFuncDic, (int32_t)v3, v4, v5, v6, v7, v8, v9);
  BattleLogicFunction_FunctionArgument___ctor((BattleLogicFunction_FunctionArgument_o *)this, v10);
}


System_Collections_Generic_List_BattleLogicFunction_ExecutedFunctionData__o *BattleLogicFunction_CommonSideEffectFunctionArgument__getCheckBuffFuncList(
        BattleLogicFunction_CommonSideEffectFunctionArgument_o *this,
        const MethodInfo *method)
{
  struct System_Collections_Generic_Dictionary_int__List_BattleLogicFunction_ExecutedFunctionData___o *executedBuffFuncDic; // x0
  struct System_Collections_Generic_Dictionary_int__List_BattleLogicFunction_ExecutedFunctionData___o *v4; // x20
  int32_t buffUniqueId; // w21
  System_Collections_Generic_List_object__o *v6; // x22

  if ( (byte_4CCA554 & 1) == 0 )
  {
    sub_1C713B0(&Method_System_Collections_Generic_Dictionary_int__List_BattleLogicFunction_ExecutedFunctionData___ContainsKey__);
    sub_1C713B0(&Method_System_Collections_Generic_Dictionary_int__List_BattleLogicFunction_ExecutedFunctionData___get_Item__);
    sub_1C713B0(&Method_System_Collections_Generic_Dictionary_int__List_BattleLogicFunction_ExecutedFunctionData___set_Item__);
    sub_1C713B0(&Method_System_Collections_Generic_List_BattleLogicFunction_ExecutedFunctionData___ctor__);
    sub_1C713B0(&System_Collections_Generic_List_BattleLogicFunction_ExecutedFunctionData__TypeInfo);
    byte_4CCA554 = 1;
  }
  executedBuffFuncDic = this->fields.executedBuffFuncDic;
  if ( !executedBuffFuncDic )
    goto LABEL_9;
  if ( !System_Collections_Generic_Dictionary_int__object___ContainsKey(
          (System_Collections_Generic_Dictionary_int__object__o *)executedBuffFuncDic,
          this->fields.buffUniqueId,
          (const MethodInfo_3462488 *)Method_System_Collections_Generic_Dictionary_int__List_BattleLogicFunction_ExecutedFunctionData___ContainsKey__) )
  {
    v4 = this->fields.executedBuffFuncDic;
    buffUniqueId = this->fields.buffUniqueId;
    v6 = (System_Collections_Generic_List_object__o *)sub_1C715FC(System_Collections_Generic_List_BattleLogicFunction_ExecutedFunctionData__TypeInfo);
    System_Collections_Generic_List_object____ctor(
      v6,
      (const MethodInfo_380FEE4 *)Method_System_Collections_Generic_List_BattleLogicFunction_ExecutedFunctionData___ctor__);
    if ( !v4 )
      goto LABEL_9;
    System_Collections_Generic_Dictionary_int__object___set_Item(
      (System_Collections_Generic_Dictionary_int__object__o *)v4,
      buffUniqueId,
      (Il2CppObject *)v6,
      (const MethodInfo_3462280 *)Method_System_Collections_Generic_Dictionary_int__List_BattleLogicFunction_ExecutedFunctionData___set_Item__);
  }
  executedBuffFuncDic = this->fields.executedBuffFuncDic;
  if ( !executedBuffFuncDic )
LABEL_9:
    sub_1C71608(executedBuffFuncDic, method);
  return (System_Collections_Generic_List_BattleLogicFunction_ExecutedFunctionData__o *)System_Collections_Generic_Dictionary_int__object___get_Item(
                                                                                          (System_Collections_Generic_Dictionary_int__object__o *)executedBuffFuncDic,
                                                                                          this->fields.buffUniqueId,
                                                                                          (const MethodInfo_34621F4 *)Method_System_Collections_Generic_Dictionary_int__List_BattleLogicFunction_ExecutedFunctionData___get_Item__);
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
    sub_1C71608(v7, v8);
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
    sub_1C71608(this, 0);
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
  System_String_o *v4; // x4
  int32_t v5; // w5
  int64_t v6; // x6
  System_String_o *v7; // x7
  __int64 v11; // x1
  BattleBuffData_SubstituteData_o *substituteData; // x0
  struct System_String_o *ResistPopupText; // x0
  char v14; // w2
  int32_t v15; // w3
  System_String_o *v16; // x4
  int32_t v17; // w5
  int64_t v18; // x6
  System_String_o *v19; // x7
  struct System_Int32_array *ResistEffectList; // x0
  char v21; // w2
  int32_t v22; // w3
  System_String_o *v23; // x4
  int32_t v24; // w5
  int64_t v25; // x6
  System_String_o *v26; // x7
  int32_t v27; // w1
  struct System_Int32_array **p_ResistEffectList_k__BackingField; // x19
  struct System_String_o *PopupText; // x0
  char v30; // w2
  int32_t v31; // w3
  System_String_o *v32; // x4
  int32_t v33; // w5
  int64_t v34; // x6
  System_String_o *v35; // x7
  struct System_Int32_array *EffectList; // x0

  if ( buff )
  {
    this->fields._SubstituteBuff_k__BackingField = buff;
    sub_1C71354(
      (GrandQuestFolderBoardItem_o *)&this->fields._SubstituteBuff_k__BackingField,
      (int32_t)buff,
      isResist,
      (int32_t)method,
      v4,
      v5,
      v6,
      v7);
    if ( isResist )
    {
      this->fields._IsResisted_k__BackingField = 1;
      substituteData = buff->fields.substituteData;
      if ( substituteData )
      {
        ResistPopupText = BattleBuffData_SubstituteData__get_ResistPopupText(substituteData, 0);
        this->fields._ResistPopupText_k__BackingField = ResistPopupText;
        sub_1C71354(
          (GrandQuestFolderBoardItem_o *)&this->fields._ResistPopupText_k__BackingField,
          (int32_t)ResistPopupText,
          v14,
          v15,
          v16,
          v17,
          v18,
          v19);
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
            v27 = (int)ResistEffectList;
            this->fields._ResistEffectList_k__BackingField = ResistEffectList;
            p_ResistEffectList_k__BackingField = &this->fields._ResistEffectList_k__BackingField;
LABEL_12:
            sub_1C71354(
              (GrandQuestFolderBoardItem_o *)p_ResistEffectList_k__BackingField,
              v27,
              v21,
              v22,
              v23,
              v24,
              v25,
              v26);
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
        sub_1C71354(
          (GrandQuestFolderBoardItem_o *)&this->fields._SubstitutePopupText_k__BackingField,
          (int32_t)PopupText,
          v30,
          v31,
          v32,
          v33,
          v34,
          v35);
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
            v27 = (int)EffectList;
            this->fields._SubstituteEffectList_k__BackingField = EffectList;
            p_ResistEffectList_k__BackingField = &this->fields._SubstituteEffectList_k__BackingField;
            goto LABEL_12;
          }
        }
      }
    }
    sub_1C71608(substituteData, v11);
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
  int32_t v3; // w3
  System_String_o *v4; // x4
  int32_t v5; // w5
  int64_t v6; // x6
  System_String_o *v7; // x7

  this->fields._ResistEffectList_k__BackingField = value;
  sub_1C71354(
    (GrandQuestFolderBoardItem_o *)&this->fields._ResistEffectList_k__BackingField,
    (int32_t)value,
    (int32_t)method,
    v3,
    v4,
    v5,
    v6,
    v7);
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
  int32_t v3; // w3
  System_String_o *v4; // x4
  int32_t v5; // w5
  int64_t v6; // x6
  System_String_o *v7; // x7

  this->fields._ResistPopupText_k__BackingField = value;
  sub_1C71354(
    (GrandQuestFolderBoardItem_o *)&this->fields._ResistPopupText_k__BackingField,
    (int32_t)value,
    (int32_t)method,
    v3,
    v4,
    v5,
    v6,
    v7);
}


void BattleLogicFunction_FuncActionResult__set_SubstituteBuff(
        BattleLogicFunction_FuncActionResult_o *this,
        BattleBuffData_BuffData_o *value,
        const MethodInfo *method)
{
  int32_t v3; // w3
  System_String_o *v4; // x4
  int32_t v5; // w5
  int64_t v6; // x6
  System_String_o *v7; // x7

  this->fields._SubstituteBuff_k__BackingField = value;
  sub_1C71354(
    (GrandQuestFolderBoardItem_o *)&this->fields._SubstituteBuff_k__BackingField,
    (int32_t)value,
    (int32_t)method,
    v3,
    v4,
    v5,
    v6,
    v7);
}


void BattleLogicFunction_FuncActionResult__set_SubstituteEffectList(
        BattleLogicFunction_FuncActionResult_o *this,
        System_Int32_array *value,
        const MethodInfo *method)
{
  int32_t v3; // w3
  System_String_o *v4; // x4
  int32_t v5; // w5
  int64_t v6; // x6
  System_String_o *v7; // x7

  this->fields._SubstituteEffectList_k__BackingField = value;
  sub_1C71354(
    (GrandQuestFolderBoardItem_o *)&this->fields._SubstituteEffectList_k__BackingField,
    (int32_t)value,
    (int32_t)method,
    v3,
    v4,
    v5,
    v6,
    v7);
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
  int32_t v3; // w3
  System_String_o *v4; // x4
  int32_t v5; // w5
  int64_t v6; // x6
  System_String_o *v7; // x7

  this->fields._SubstitutePopupText_k__BackingField = value;
  sub_1C71354(
    (GrandQuestFolderBoardItem_o *)&this->fields._SubstitutePopupText_k__BackingField,
    (int32_t)value,
    (int32_t)method,
    v3,
    v4,
    v5,
    v6,
    v7);
}


void BattleLogicFunction_FuncSideEffectFunctionArgument___ctor(
        BattleLogicFunction_FuncSideEffectFunctionArgument_o *this,
        const MethodInfo *method)
{
  System_Collections_Generic_HashSet_int__o *v3; // x20
  int32_t v4; // w2
  int32_t v5; // w3
  System_String_o *v6; // x4
  int32_t v7; // w5
  int64_t v8; // x6
  System_String_o *v9; // x7
  const MethodInfo *v10; // x1
  __int64 v11; // x20
  const MethodInfo *v12; // x1
  int32_t v13; // w2
  int32_t v14; // w3
  System_String_o *v15; // x4
  int32_t v16; // w5
  int64_t v17; // x6
  System_String_o *v18; // x7
  int32_t v19; // w2
  int32_t v20; // w3
  System_String_o *v21; // x4
  int32_t v22; // w5
  int64_t v23; // x6
  System_String_o *v24; // x7

  if ( (byte_4CCA557 & 1) == 0 )
  {
    sub_1C713B0(&BattleLogicFunction_CommonSideEffectCheckDuplicateFunction_TypeInfo);
    sub_1C713B0(&Method_System_Collections_Generic_HashSet_int___ctor__);
    sub_1C713B0(&System_Collections_Generic_HashSet_int__TypeInfo);
    byte_4CCA557 = 1;
  }
  v3 = (System_Collections_Generic_HashSet_int__o *)sub_1C715FC(System_Collections_Generic_HashSet_int__TypeInfo);
  System_Collections_Generic_HashSet_int____ctor(
    v3,
    (const MethodInfo_36C0D60 *)Method_System_Collections_Generic_HashSet_int___ctor__);
  this->fields.hashTargetId = v3;
  sub_1C71354((GrandQuestFolderBoardItem_o *)&this->fields.hashTargetId, (int32_t)v3, v4, v5, v6, v7, v8, v9);
  BattleLogicFunction_CommonSideEffectFunctionArgument___ctor(
    (BattleLogicFunction_CommonSideEffectFunctionArgument_o *)this,
    v10);
  v11 = sub_1C715FC(BattleLogicFunction_CommonSideEffectCheckDuplicateFunction_TypeInfo);
  BattleLogicFunction_CommonCheckDuplicateFunction___ctor(
    (BattleLogicFunction_CommonCheckDuplicateFunction_o *)v11,
    v12);
  *(_QWORD *)(v11 + 24) = this;
  sub_1C71354((GrandQuestFolderBoardItem_o *)(v11 + 24), (int32_t)this, v13, v14, v15, v16, v17, v18);
  this->fields.checkDuplicate = (struct BattleLogicFunction_CheckDuplicateFunction_o *)v11;
  sub_1C71354((GrandQuestFolderBoardItem_o *)&this->fields.checkDuplicate, v11, v19, v20, v21, v22, v23, v24);
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
  if ( (byte_4CCA559 & 1) == 0 )
  {
    this = (BattleLogicFunction_FuncSideEffectFunctionArgument_o *)sub_1C713B0(&Method_System_Collections_Generic_HashSet_int__Add__);
    byte_4CCA559 = 1;
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
        (const MethodInfo_36C1F64 *)Method_System_Collections_Generic_HashSet_int__Add__);
      return;
    }
LABEL_12:
    sub_1C71608(this, funcTarget);
  }
}


void BattleLogicFunction_FuncSideEffectFunctionArgument__AddTarget_47183784(
        BattleLogicFunction_FuncSideEffectFunctionArgument_o *this,
        BattleLogicFunction_FuncSideEffectFunctionArgument_o *arg,
        const MethodInfo *method)
{
  System_Collections_Generic_HashSet_int__o *hashTargetId; // x0

  if ( (byte_4CCA55A & 1) == 0 )
  {
    sub_1C713B0(&Method_System_Collections_Generic_HashSet_int__UnionWith__);
    byte_4CCA55A = 1;
  }
  if ( arg )
  {
    hashTargetId = this->fields.hashTargetId;
    if ( !hashTargetId )
      sub_1C71608(0, arg);
    System_Collections_Generic_HashSet_int___UnionWith(
      hashTargetId,
      (System_Collections_Generic_IEnumerable_T__o *)arg->fields.hashTargetId,
      (const MethodInfo_36C1F74 *)Method_System_Collections_Generic_HashSet_int__UnionWith__);
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

  if ( (byte_4CCA558 & 1) == 0 )
  {
    sub_1C713B0(&Method_System_Array_Empty_BuffList_ACTION___);
    byte_4CCA558 = 1;
  }
  v4 = Method_System_Array_Empty_BuffList_ACTION___;
  v5 = *((_QWORD *)Method_System_Array_Empty_BuffList_ACTION___ + 7);
  if ( !v5 )
  {
    sub_1C474A0(Method_System_Array_Empty_BuffList_ACTION___);
    v5 = v4[7];
  }
  v6 = *(_QWORD *)(v5 + 16);
  if ( (*(_BYTE *)(v6 + 309) & 1) == 0 )
    v6 = sub_1C47444(inited);
  if ( !*(_DWORD *)(v6 + 224) )
    inited = j_il2cpp_runtime_class_init_0(v6);
  v7 = *(_QWORD *)(v4[7] + 16LL);
  if ( (*(_BYTE *)(v7 + 309) & 1) == 0 )
    v7 = sub_1C47444(inited);
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

  if ( (byte_4CCA55B & 1) == 0 )
  {
    sub_1C713B0(&Method_System_Linq_Enumerable_ToArray_int___);
    byte_4CCA55B = 1;
  }
  v9 = System_Linq_Enumerable__ToArray_int_(
         (System_Collections_Generic_IEnumerable_TSource__o *)this->fields.hashTargetId,
         (const MethodInfo_318AE54 *)Method_System_Linq_Enumerable_ToArray_int___);
  if ( !logicFunc )
    sub_1C71608(v9, v10);
  BattleLogicFunction__SetFuncSideEffect(logicFunc, this, mainActionData, actorSvtData, v9, 0);
}


void BattleLogicFunction_FunctionArgument___ctor(
        BattleLogicFunction_FunctionArgument_o *this,
        const MethodInfo *method)
{
  Il2CppObject *v3; // x20
  int32_t v4; // w2
  int32_t v5; // w3
  System_String_o *v6; // x4
  int32_t v7; // w5
  int64_t v8; // x6
  System_String_o *v9; // x7

  if ( (byte_4CCA553 & 1) == 0 )
  {
    sub_1C713B0(&BattleLogicFunction_CheckDuplicateFunction_TypeInfo);
    byte_4CCA553 = 1;
  }
  v3 = (Il2CppObject *)sub_1C715FC(BattleLogicFunction_CheckDuplicateFunction_TypeInfo);
  System_Object___ctor(v3, 0);
  this->fields.checkDuplicate = (struct BattleLogicFunction_CheckDuplicateFunction_o *)v3;
  sub_1C71354((GrandQuestFolderBoardItem_o *)&this->fields.checkDuplicate, (int32_t)v3, v4, v5, v6, v7, v8, v9);
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
    sub_1C71608(0, method);
  ((void (__fastcall *)(struct BattleLogicFunction_CheckDuplicateFunction_o *, const MethodInfo *))checkDuplicate->klass->vtable._4_Init.methodPtr)(
    checkDuplicate,
    checkDuplicate->klass->vtable._4_Init.method);
}


void BattleLogicFunction_FunctionArgument__SetAfterFuncSideEffectArgument(
        BattleLogicFunction_FunctionArgument_o *this,
        BattleLogicFunction_FuncSideEffectFunctionArgument_o *arg,
        const MethodInfo *method)
{
  int32_t v3; // w3
  System_String_o *v4; // x4
  int32_t v5; // w5
  int64_t v6; // x6
  System_String_o *v7; // x7

  this->fields._FuncSideEffectArg_k__BackingField = arg;
  sub_1C71354(
    (GrandQuestFolderBoardItem_o *)&this->fields._FuncSideEffectArg_k__BackingField,
    (int32_t)arg,
    (int32_t)method,
    v3,
    v4,
    v5,
    v6,
    v7);
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


int32_t BattleLogicFunction_FunctionArgument__get_UsedChargeTurn(
        BattleLogicFunction_FunctionArgument_o *this,
        const MethodInfo *method)
{
  return this->fields._UsedChargeTurn_k__BackingField;
}


int32_t BattleLogicFunction_FunctionArgument__get_UsedNpValue(
        BattleLogicFunction_FunctionArgument_o *this,
        const MethodInfo *method)
{
  return this->fields._UsedNpValue_k__BackingField;
}


void BattleLogicFunction_FunctionArgument__set_FuncSideEffectArg(
        BattleLogicFunction_FunctionArgument_o *this,
        BattleLogicFunction_FuncSideEffectFunctionArgument_o *value,
        const MethodInfo *method)
{
  int32_t v3; // w3
  System_String_o *v4; // x4
  int32_t v5; // w5
  int64_t v6; // x6
  System_String_o *v7; // x7

  this->fields._FuncSideEffectArg_k__BackingField = value;
  sub_1C71354(
    (GrandQuestFolderBoardItem_o *)&this->fields._FuncSideEffectArg_k__BackingField,
    (int32_t)value,
    (int32_t)method,
    v3,
    v4,
    v5,
    v6,
    v7);
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
  int32_t v3; // w3
  System_String_o *v4; // x4
  int32_t v5; // w5
  int64_t v6; // x6
  System_String_o *v7; // x7

  this->fields._ParentActBuffData_k__BackingField = value;
  sub_1C71354(
    (GrandQuestFolderBoardItem_o *)&this->fields._ParentActBuffData_k__BackingField,
    (int32_t)value,
    (int32_t)method,
    v3,
    v4,
    v5,
    v6,
    v7);
}


void BattleLogicFunction_FunctionArgument__set_SkillTiming(
        BattleLogicFunction_FunctionArgument_o *this,
        int32_t value,
        const MethodInfo *method)
{
  this->fields._SkillTiming_k__BackingField = value;
}


void BattleLogicFunction_FunctionArgument__set_UsedChargeTurn(
        BattleLogicFunction_FunctionArgument_o *this,
        int32_t value,
        const MethodInfo *method)
{
  this->fields._UsedChargeTurn_k__BackingField = value;
}


void BattleLogicFunction_FunctionArgument__set_UsedNpValue(
        BattleLogicFunction_FunctionArgument_o *this,
        int32_t value,
        const MethodInfo *method)
{
  this->fields._UsedNpValue_k__BackingField = value;
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

  if ( (byte_4CCA574 & 1) == 0 )
  {
    sub_1C713B0(&BattleLogicFunction_PreMainAttackSideEffectMakeArgument_TypeInfo);
    byte_4CCA574 = 1;
  }
  v2 = (BattleLogicFunction_SideEffectMakeArgument_o *)sub_1C715FC(BattleLogicFunction_PreMainAttackSideEffectMakeArgument_TypeInfo);
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
  int32_t v9; // w3
  System_String_o *v10; // x4
  int32_t v11; // w5
  int64_t v12; // x6
  System_String_o *v13; // x7
  int32_t v14; // w2
  int32_t v15; // w3
  System_String_o *v16; // x4
  int32_t v17; // w5
  int64_t v18; // x6
  System_String_o *v19; // x7
  const MethodInfo *v20; // x1
  __int64 v21; // x1
  struct BattleLogicFunction_FunctionArgument_o *externalArg; // x0

  if ( (byte_4CCA565 & 1) == 0 )
  {
    sub_1C713B0(&Method_System_Collections_Generic_Dictionary_KeyValuePair_int__int___bool___ctor__);
    sub_1C713B0(&System_Collections_Generic_Dictionary_KeyValuePair_int__int___bool__TypeInfo);
    sub_1C713B0(&BattleLogicFunction_FunctionArgument_TypeInfo);
    byte_4CCA565 = 1;
  }
  v7 = (System_Collections_Generic_Dictionary_KeyValuePair_int__int___bool__o *)sub_1C715FC(System_Collections_Generic_Dictionary_KeyValuePair_int__int___bool__TypeInfo);
  System_Collections_Generic_Dictionary_KeyValuePair_int__int___bool____ctor(
    v7,
    (const MethodInfo_3419DA4 *)Method_System_Collections_Generic_Dictionary_KeyValuePair_int__int___bool___ctor__);
  this->fields.funcResults = v7;
  sub_1C71354((GrandQuestFolderBoardItem_o *)&this->fields, (int32_t)v7, v8, v9, v10, v11, v12, v13);
  this->fields.tdCommandTypeChange = -1;
  System_Object___ctor((Il2CppObject *)this, 0);
  if ( !argument )
  {
    argument = (BattleLogicFunction_FunctionArgument_o *)sub_1C715FC(BattleLogicFunction_FunctionArgument_TypeInfo);
    BattleLogicFunction_FunctionArgument___ctor(argument, v20);
  }
  this->fields.externalArg = argument;
  sub_1C71354((GrandQuestFolderBoardItem_o *)&this->fields.externalArg, (int32_t)argument, v14, v15, v16, v17, v18, v19);
  externalArg = this->fields.externalArg;
  if ( !externalArg
    || (externalArg = (struct BattleLogicFunction_FunctionArgument_o *)((__int64 (__fastcall *)(struct BattleLogicFunction_FunctionArgument_o *, const MethodInfo *))externalArg->klass->vtable._4_Init.methodPtr)(
                                                                         externalArg,
                                                                         externalArg->klass->vtable._4_Init.method),
        !actionData) )
  {
    sub_1C71608(externalArg, v21);
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

  if ( (byte_4CCA567 & 1) == 0 )
  {
    sub_1C713B0(&Method_System_Collections_Generic_Dictionary_KeyValuePair_int__int___bool__TryGetValue__);
    sub_1C713B0(&Method_System_Linq_Enumerable_Any_KeyValuePair_KeyValuePair_int__int___bool____);
    sub_1C713B0(&Method_System_Linq_Enumerable_Count_KeyValuePair_KeyValuePair_int__int___bool____);
    sub_1C713B0(&Method_System_Linq_Enumerable_Where_KeyValuePair_KeyValuePair_int__int___bool____);
    sub_1C713B0(&System_Func_KeyValuePair_KeyValuePair_int__int___bool___bool__TypeInfo);
    sub_1C713B0(&System_IDisposable_TypeInfo);
    sub_1C713B0(&System_Collections_Generic_IEnumerable_KeyValuePair_KeyValuePair_int__int___bool___TypeInfo);
    sub_1C713B0(&System_Collections_Generic_IEnumerator_KeyValuePair_KeyValuePair_int__int___bool___TypeInfo);
    sub_1C713B0(&System_Collections_IEnumerator_TypeInfo);
    sub_1C713B0(&Method_System_Collections_Generic_KeyValuePair_int__int___ctor__);
    sub_1C713B0(&Method_System_Collections_Generic_KeyValuePair_KeyValuePair_int__int___bool__get_Key__);
    sub_1C713B0(&Method_System_Collections_Generic_KeyValuePair_int__int__get_Value__);
    sub_1C713B0(&Method_System_Collections_Generic_KeyValuePair_KeyValuePair_int__int___bool__get_Value__);
    sub_1C713B0(&System_Math_TypeInfo);
    sub_1C713B0(&Method_BattleLogicFunction_ProcListInArgs___c__DisplayClass42_0__DidTriggeredFuncHaveSpecifyResults_b__0__);
    sub_1C713B0(&Method_BattleLogicFunction_ProcListInArgs___c__DisplayClass42_0__DidTriggeredFuncHaveSpecifyResults_b__1__);
    sub_1C713B0(&Method_BattleLogicFunction_ProcListInArgs___c__DisplayClass42_0__DidTriggeredFuncHaveSpecifyResults_b__2__);
    sub_1C713B0(&BattleLogicFunction_ProcListInArgs___c__DisplayClass42_0_TypeInfo);
    byte_4CCA567 = 1;
  }
  isSameTargetOnly = 0;
  isAllCond = 0;
  key = 0;
  value = 0;
  v9 = sub_1C715FC(BattleLogicFunction_ProcListInArgs___c__DisplayClass42_0_TypeInfo);
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
      (const MethodInfo_3746A90 *)Method_System_Collections_Generic_KeyValuePair_int__int___ctor__);
    TriggeredFuncIndex = this->fields.funcResults;
    if ( TriggeredFuncIndex )
    {
      v15 = key;
      if ( System_Collections_Generic_Dictionary_KeyValuePair_int__int___bool___TryGetValue(
             TriggeredFuncIndex,
             v15,
             &value,
             (const MethodInfo_341BF00 *)Method_System_Collections_Generic_Dictionary_KeyValuePair_int__int___bool__TryGetValue__) )
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
  v19 = (System_Func_KeyValuePair_KeyValuePair_int__int___bool___bool__o *)sub_1C715FC(System_Func_KeyValuePair_KeyValuePair_int__int___bool___bool__TypeInfo);
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
            (const MethodInfo_31904C0 *)Method_System_Linq_Enumerable_Where_KeyValuePair_KeyValuePair_int__int___bool____);
    v27 = (System_Func_KeyValuePair_KeyValuePair_int__int___bool___bool__o *)sub_1C715FC(System_Func_KeyValuePair_KeyValuePair_int__int___bool___bool__TypeInfo);
    System_Func_KeyValuePair_KeyValuePair_int__int___bool___bool____ctor(
      v27,
      (Il2CppObject *)v9,
      Method_BattleLogicFunction_ProcListInArgs___c__DisplayClass42_0__DidTriggeredFuncHaveSpecifyResults_b__1__,
      0);
    v16 = System_Linq_Enumerable__Any_KeyValuePair_KeyValuePair_int__int___bool__(
            v26,
            (System_Func_TSource__bool__o *)v27,
            (const MethodInfo_31571B4 *)Method_System_Linq_Enumerable_Any_KeyValuePair_KeyValuePair_int__int___bool____);
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
          (const MethodInfo_31904C0 *)Method_System_Linq_Enumerable_Where_KeyValuePair_KeyValuePair_int__int___bool____);
  TriggeredFuncIndex = (System_Collections_Generic_Dictionary_KeyValuePair_int__int___bool__o *)System_Linq_Enumerable__Count_KeyValuePair_KeyValuePair_int__int___bool__(
                                                                                                  v21,
                                                                                                  (const MethodInfo_316A274 *)Method_System_Linq_Enumerable_Count_KeyValuePair_KeyValuePair_int__int___bool____);
  if ( !(_DWORD)TriggeredFuncIndex )
    goto LABEL_24;
  if ( !v21 )
LABEL_53:
    sub_1C71608(TriggeredFuncIndex, v11);
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
    v25 = sub_1C47738(
            v21,
            System_Collections_Generic_IEnumerable_KeyValuePair_KeyValuePair_int__int___bool___TypeInfo,
            0);
  }
  v29 = (*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerable_TSource__o *, _QWORD))v25)(
          v21,
          *(_QWORD *)(v25 + 8));
  if ( !v29 )
    sub_1C71608(0, v28);
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
      v33 = sub_1C47738(v29, System_Collections_IEnumerator_TypeInfo, 0);
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
      v38 = sub_1C47738(
              v29,
              System_Collections_Generic_IEnumerator_KeyValuePair_KeyValuePair_int__int___bool___TypeInfo,
              0);
    }
    v39 = (*(__int64 (__fastcall **)(__int64, _QWORD))v38)(v29, *(_QWORD *)(v38 + 8));
    if ( !data )
      sub_1C71608(v39, v40);
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
    v46 = sub_1C47738(v29, System_IDisposable_TypeInfo, 0);
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
  if ( (byte_4CCA568 & 1) == 0 )
  {
    sub_1C713B0(&bool___TypeInfo);
    sub_1C713B0(&Method_System_Linq_Enumerable_Any_KeyValuePair_KeyValuePair_int__int___bool____);
    sub_1C713B0(&Method_System_Linq_Enumerable_Where_KeyValuePair_KeyValuePair_int__int___bool____);
    sub_1C713B0(&System_Func_KeyValuePair_KeyValuePair_int__int___bool___bool__TypeInfo);
    sub_1C713B0(&int___TypeInfo);
    sub_1C713B0(&System_Math_TypeInfo);
    sub_1C713B0(&Method_BattleLogicFunction_ProcListInArgs___c__DisplayClass43_0__DidTriggeredFuncListHaveSpecifyResults_b__0__);
    sub_1C713B0(&Method_BattleLogicFunction_ProcListInArgs___c__DisplayClass43_0__DidTriggeredFuncListHaveSpecifyResults_b__1__);
    this = (BattleLogicFunction_ProcListInArgs_o *)sub_1C713B0(&BattleLogicFunction_ProcListInArgs___c__DisplayClass43_0_TypeInfo);
    byte_4CCA568 = 1;
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
      v8 = sub_1C71458(bool___TypeInfo, LODWORD(TriggeredFuncIndexArray->max_length));
      this = (BattleLogicFunction_ProcListInArgs_o *)sub_1C71458(
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
          v15 = sub_1C715FC(BattleLogicFunction_ProcListInArgs___c__DisplayClass43_0_TypeInfo);
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
          v17 = (System_Func_KeyValuePair_KeyValuePair_int__int___bool___bool__o *)sub_1C715FC(System_Func_KeyValuePair_KeyValuePair_int__int___bool___bool__TypeInfo);
          System_Func_KeyValuePair_KeyValuePair_int__int___bool___bool____ctor(
            v17,
            (Il2CppObject *)v15,
            Method_BattleLogicFunction_ProcListInArgs___c__DisplayClass43_0__DidTriggeredFuncListHaveSpecifyResults_b__0__,
            0);
          v18 = System_Linq_Enumerable__Where_KeyValuePair_KeyValuePair_int__int___bool__(
                  funcResults,
                  (System_Func_TSource__bool__o *)v17,
                  (const MethodInfo_31904C0 *)Method_System_Linq_Enumerable_Where_KeyValuePair_KeyValuePair_int__int___bool____);
          v19 = (System_Func_KeyValuePair_KeyValuePair_int__int___bool___bool__o *)sub_1C715FC(System_Func_KeyValuePair_KeyValuePair_int__int___bool___bool__TypeInfo);
          System_Func_KeyValuePair_KeyValuePair_int__int___bool___bool____ctor(
            v19,
            (Il2CppObject *)v15,
            Method_BattleLogicFunction_ProcListInArgs___c__DisplayClass43_0__DidTriggeredFuncListHaveSpecifyResults_b__1__,
            0);
          v20 = System_Linq_Enumerable__Any_KeyValuePair_KeyValuePair_int__int___bool__(
                  v18,
                  (System_Func_TSource__bool__o *)v19,
                  (const MethodInfo_31571B4 *)Method_System_Linq_Enumerable_Any_KeyValuePair_KeyValuePair_int__int___bool____);
          v7 = v20 || !isAndCheck;
          if ( !v20 && isAndCheck || (v20 & ~isAndCheck & 1) != 0 )
            return v7 & 1;
          if ( (__int64)++v14 >= SLODWORD(v10->fields.externalArg) )
            goto LABEL_31;
        }
LABEL_33:
        sub_1C71610(this);
      }
    }
LABEL_34:
    sub_1C71608(this, *(_QWORD *)&targetId);
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
    sub_1C71608(0, v7);
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
    sub_1C71608(0, v5);
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
    sub_1C71608(this, type);
  return externalArg->fields.grantSkillType == type;
}


BattleLogicFunction_CheckDuplicateFunction_o *BattleLogicFunction_ProcListInArgs__get_CheckDuplicateFunc(
        BattleLogicFunction_ProcListInArgs_o *this,
        const MethodInfo *method)
{
  struct BattleLogicFunction_FunctionArgument_o *externalArg; // x8

  externalArg = this->fields.externalArg;
  if ( !externalArg )
    sub_1C71608(this, method);
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
    sub_1C71608(this, method);
  return externalArg->fields._FuncSideEffectArg_k__BackingField;
}


int32_t BattleLogicFunction_ProcListInArgs__get_GrantSkillType(
        BattleLogicFunction_ProcListInArgs_o *this,
        const MethodInfo *method)
{
  struct BattleLogicFunction_FunctionArgument_o *externalArg; // x8

  externalArg = this->fields.externalArg;
  if ( !externalArg )
    sub_1C71608(this, method);
  return externalArg->fields.grantSkillType;
}


bool BattleLogicFunction_ProcListInArgs__get_IsCommandSideEffect(
        BattleLogicFunction_ProcListInArgs_o *this,
        const MethodInfo *method)
{
  struct BattleLogicFunction_FunctionArgument_o *externalArg; // x8

  externalArg = this->fields.externalArg;
  if ( !externalArg )
    sub_1C71608(this, method);
  return externalArg->fields.isCommandSideEffect;
}


bool BattleLogicFunction_ProcListInArgs__get_IsPassive(
        BattleLogicFunction_ProcListInArgs_o *this,
        const MethodInfo *method)
{
  struct BattleLogicFunction_FunctionArgument_o *externalArg; // x8

  externalArg = this->fields.externalArg;
  if ( !externalArg )
    sub_1C71608(this, method);
  return externalArg->fields.isPassive;
}


bool BattleLogicFunction_ProcListInArgs__get_IsShift(
        BattleLogicFunction_ProcListInArgs_o *this,
        const MethodInfo *method)
{
  struct BattleLogicFunction_FunctionArgument_o *externalArg; // x8

  externalArg = this->fields.externalArg;
  if ( !externalArg )
    sub_1C71608(this, method);
  return externalArg->fields.isShift;
}


bool BattleLogicFunction_ProcListInArgs__get_IsShowBattlePointEffect(
        BattleLogicFunction_ProcListInArgs_o *this,
        const MethodInfo *method)
{
  struct BattleLogicFunction_FunctionArgument_o *externalArg; // x8

  externalArg = this->fields.externalArg;
  if ( !externalArg )
    sub_1C71608(this, method);
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
    sub_1C71608(this, method);
  return externalArg->fields._ParentActBuffData_k__BackingField;
}


int32_t BattleLogicFunction_ProcListInArgs__get_SkillId(
        BattleLogicFunction_ProcListInArgs_o *this,
        const MethodInfo *method)
{
  struct BattleLogicFunction_FunctionArgument_o *externalArg; // x8

  externalArg = this->fields.externalArg;
  if ( !externalArg )
    sub_1C71608(this, method);
  return externalArg->fields.skillId;
}


GeneratedFamilyLinkageIdCacher_o *BattleLogicFunction_ProcListInArgs__get_familyLinkageIdCacher(
        BattleLogicFunction_ProcListInArgs_o *this,
        const MethodInfo *method)
{
  GeneratedFamilyLinkageIdCacher_o *result; // x0
  GrandQuestFolderBoardItem_o *p_familyLinkageIdCacher; // x19
  GeneratedFamilyLinkageIdCacher_o *familyLinkageIdCacher; // t1
  GeneratedFamilyLinkageIdCacher_o *v6; // x20
  int32_t v7; // w2
  int32_t v8; // w3
  System_String_o *v9; // x4
  int32_t v10; // w5
  int64_t v11; // x6
  System_String_o *v12; // x7

  if ( (byte_4CCA564 & 1) == 0 )
  {
    sub_1C713B0(&GeneratedFamilyLinkageIdCacher_TypeInfo);
    byte_4CCA564 = 1;
  }
  familyLinkageIdCacher = this->fields._familyLinkageIdCacher;
  p_familyLinkageIdCacher = (GrandQuestFolderBoardItem_o *)&this->fields._familyLinkageIdCacher;
  result = familyLinkageIdCacher;
  if ( !familyLinkageIdCacher )
  {
    v6 = (GeneratedFamilyLinkageIdCacher_o *)sub_1C715FC(GeneratedFamilyLinkageIdCacher_TypeInfo);
    GeneratedFamilyLinkageIdCacher___ctor(v6, 0);
    p_familyLinkageIdCacher->klass = (GrandQuestFolderBoardItem_c *)v6;
    sub_1C71354(p_familyLinkageIdCacher, (int32_t)v6, v7, v8, v9, v10, v11, v12);
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
  int32_t v16; // w3
  System_String_o *v17; // x4
  int32_t v18; // w5
  int64_t v19; // x6
  System_String_o *v20; // x7
  struct BattleLogicFunctionProcess_FunctionUnitCheck_array *funcUnitArray_k__BackingField; // x28
  unsigned int v22; // w29
  BattleLogicFunctionProcess_FunctionUnitCheck_o *v23; // x27
  const MethodInfo *v24; // x3
  int32_t v25; // w2
  int32_t v26; // w3
  System_String_o *v27; // x4
  int32_t v28; // w5
  int64_t v29; // x6
  System_String_o *v30; // x7
  Il2CppClass **v31; // x0
  const MethodInfo *v32; // x5
  BattleLogicFunctionProcess_FunctionUnitCheck_array *v33; // x8
  int v34; // w8
  int v35; // w22
  BattleLogicFunctionProcess_FunctionUnitCheck_o *v36; // x21
  int v37; // w23
  BattleLogicFunctionProcess_FunctionUnitCheck_o *v38; // x20
  const MethodInfo *v39; // x2
  __int64 v40; // x0

  v11 = this;
  if ( (byte_4CCA56A & 1) == 0 )
  {
    sub_1C713B0(&BattleLogicFunctionProcess_FunctionUnitCheck___TypeInfo);
    this = (BattleLogicFunction_ProcListInArgs_o *)sub_1C713B0(&BattleLogicFunctionProcess_FunctionUnitCheck_TypeInfo);
    byte_4CCA56A = 1;
  }
  if ( !dataValsList )
    goto LABEL_36;
  max_length = dataValsList->max_length;
  v13 = sub_1C71458(BattleLogicFunctionProcess_FunctionUnitCheck___TypeInfo, (unsigned int)max_length);
  v11->fields._funcUnitArray_k__BackingField = (struct BattleLogicFunctionProcess_FunctionUnitCheck_array *)v13;
  p_funcUnitArray_k__BackingField = &v11->fields._funcUnitArray_k__BackingField;
  sub_1C71354(
    (GrandQuestFolderBoardItem_o *)&v11->fields._funcUnitArray_k__BackingField,
    v13,
    v15,
    v16,
    v17,
    v18,
    v19,
    v20);
  funcUnitArray_k__BackingField = v11->fields._funcUnitArray_k__BackingField;
  if ( max_length >= 1 )
  {
    v22 = 0;
    while ( 1 )
    {
      v23 = (BattleLogicFunctionProcess_FunctionUnitCheck_o *)sub_1C715FC(BattleLogicFunctionProcess_FunctionUnitCheck_TypeInfo);
      BattleLogicFunctionProcess_FunctionUnitCheck___ctor(v23, logic, v11, v24);
      if ( !funcUnitArray_k__BackingField )
        break;
      if ( v23 )
      {
        this = (BattleLogicFunction_ProcListInArgs_o *)sub_1C714EC(
                                                         v23,
                                                         funcUnitArray_k__BackingField->obj.klass->_1.element_class);
        if ( !this )
        {
          v40 = sub_1C7162C(0);
          sub_1C714D8(v40, 0);
        }
      }
      if ( v22 >= LODWORD(funcUnitArray_k__BackingField->max_length) )
        goto LABEL_37;
      v31 = &funcUnitArray_k__BackingField->obj.klass + (int)v22;
      v31[4] = (Il2CppClass *)v23;
      sub_1C71354((GrandQuestFolderBoardItem_o *)(v31 + 4), (int32_t)v23, v25, v26, v27, v28, v29, v30);
      v33 = *p_funcUnitArray_k__BackingField;
      if ( !*p_funcUnitArray_k__BackingField )
        break;
      if ( v22 >= LODWORD(v33->max_length) )
        goto LABEL_37;
      if ( !functionIds )
        break;
      if ( v22 >= LODWORD(functionIds->max_length) || v22 >= LODWORD(dataValsList->max_length) )
LABEL_37:
        sub_1C71610(this);
      this = (BattleLogicFunction_ProcListInArgs_o *)v33->m_Items[v22];
      if ( !this )
        break;
      BattleLogicFunctionProcess_FunctionUnitCheck__setDataVals(
        (BattleLogicFunctionProcess_FunctionUnitCheck_o *)this,
        funcIndex,
        functionIds->m_Items[v22],
        dataValsList->m_Items[v22],
        actionData,
        v32);
      ++v22;
      ++*funcIndex;
      funcUnitArray_k__BackingField = *p_funcUnitArray_k__BackingField;
      if ( max_length == v22 )
        goto LABEL_17;
    }
LABEL_36:
    sub_1C71608(this, logic);
  }
LABEL_17:
  if ( !funcUnitArray_k__BackingField )
    goto LABEL_36;
  v34 = funcUnitArray_k__BackingField->max_length;
  if ( v34 >= 1 )
  {
    v35 = 0;
    v36 = 0;
    v37 = -1;
    do
    {
      if ( v35 >= (unsigned int)v34 )
        goto LABEL_37;
      v38 = funcUnitArray_k__BackingField->m_Items[v35];
      if ( !v38 )
        goto LABEL_36;
      this = (BattleLogicFunction_ProcListInArgs_o *)v38->fields._dataVals_k__BackingField;
      if ( !this )
        goto LABEL_36;
      if ( DataVals__IsAddIndividualty((DataVals_o *)this, 0) )
        goto LABEL_26;
      this = (BattleLogicFunction_ProcListInArgs_o *)v38->fields._dataVals_k__BackingField;
      if ( !this )
        goto LABEL_36;
      if ( DataVals__IsAddLinkageTargetIndividualty((DataVals_o *)this, 0) )
LABEL_26:
        BattleLogicFunctionProcess_FunctionUnitCheck__setLinkFunction(v38, *p_funcUnitArray_k__BackingField, v39);
      this = (BattleLogicFunction_ProcListInArgs_o *)v38->fields._dataVals_k__BackingField;
      if ( !this )
        goto LABEL_36;
      this = (BattleLogicFunction_ProcListInArgs_o *)DataVals__GetFunctionTriggerStarNum((DataVals_o *)this, 0);
      if ( ((unsigned int)this & 0x80000000) == 0 && (v36 == 0 || (int)this < v37) )
      {
        v37 = (int)this;
        v36 = v38;
      }
      v34 = funcUnitArray_k__BackingField->max_length;
      ++v35;
    }
    while ( v35 < v34 );
    if ( v36 )
      v36->fields.isLowestStarFunction = 1;
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

  if ( (byte_4CCA566 & 1) == 0 )
  {
    sub_1C713B0(&Method_System_Collections_Generic_Dictionary_KeyValuePair_int__int___bool__ContainsKey__);
    sub_1C713B0(&Method_System_Collections_Generic_Dictionary_KeyValuePair_int__int___bool__get_Item__);
    sub_1C713B0(&Method_System_Collections_Generic_KeyValuePair_int__int___ctor__);
    byte_4CCA566 = 1;
  }
  p_key = (System_Collections_Generic_KeyValuePair_int__int__o)&key;
  key = 0;
  System_Collections_Generic_KeyValuePair_int__int____ctor(
    p_key,
    index - 1,
    targetId,
    (const MethodInfo_3746A90 *)Method_System_Collections_Generic_KeyValuePair_int__int___ctor__);
  funcResults = this->fields.funcResults;
  if ( !funcResults )
    goto LABEL_9;
  v10 = key;
  if ( !System_Collections_Generic_Dictionary_KeyValuePair_int__int___bool___ContainsKey(
          funcResults,
          v10,
          (const MethodInfo_341A98C *)Method_System_Collections_Generic_Dictionary_KeyValuePair_int__int___bool__ContainsKey__) )
    return 0;
  funcResults = this->fields.funcResults;
  if ( !funcResults )
LABEL_9:
    sub_1C71608(funcResults, v8);
  v11 = key;
  return System_Collections_Generic_Dictionary_KeyValuePair_int__int___bool___get_Item(
           funcResults,
           v11,
           (const MethodInfo_341A6D8 *)Method_System_Collections_Generic_Dictionary_KeyValuePair_int__int___bool__get_Item__);
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

  if ( (byte_4CCA569 & 1) == 0 )
  {
    sub_1C713B0(&Method_System_Collections_Generic_Dictionary_KeyValuePair_int__int___bool__set_Item__);
    sub_1C713B0(&Method_System_Collections_Generic_KeyValuePair_int__int___ctor__);
    byte_4CCA569 = 1;
  }
  p_key = (System_Collections_Generic_KeyValuePair_int__int__o)&key;
  key = 0;
  System_Collections_Generic_KeyValuePair_int__int____ctor(
    p_key,
    index,
    targetId,
    (const MethodInfo_3746A90 *)Method_System_Collections_Generic_KeyValuePair_int__int___ctor__);
  funcResults = this->fields.funcResults;
  if ( !funcResults )
    sub_1C71608(0, v10);
  v12 = key;
  System_Collections_Generic_Dictionary_KeyValuePair_int__int___bool___set_Item(
    funcResults,
    v12,
    result,
    (const MethodInfo_341A76C *)Method_System_Collections_Generic_Dictionary_KeyValuePair_int__int___bool__set_Item__);
}


void BattleLogicFunction_ProcListInArgs__set_IsCommandSideEffect(
        BattleLogicFunction_ProcListInArgs_o *this,
        bool value,
        const MethodInfo *method)
{
  struct BattleLogicFunction_FunctionArgument_o *externalArg; // x8

  externalArg = this->fields.externalArg;
  if ( !externalArg )
    sub_1C71608(this, value);
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
    sub_1C71608(this, value);
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
    sub_1C71608(this, value);
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
    sub_1C71608(this, value);
  externalArg->fields.skillId = value;
}


void BattleLogicFunction_ProcListInArgs__set_funcUnitArray(
        BattleLogicFunction_ProcListInArgs_o *this,
        BattleLogicFunctionProcess_FunctionUnitCheck_array *value,
        const MethodInfo *method)
{
  int32_t v3; // w3
  System_String_o *v4; // x4
  int32_t v5; // w5
  int64_t v6; // x6
  System_String_o *v7; // x7

  this->fields._funcUnitArray_k__BackingField = value;
  sub_1C71354(
    (GrandQuestFolderBoardItem_o *)&this->fields._funcUnitArray_k__BackingField,
    (int32_t)value,
    (int32_t)method,
    v3,
    v4,
    v5,
    v6,
    v7);
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
  if ( (byte_4CCA56C & 1) == 0 )
  {
    sub_1C713B0(&Method_System_Collections_Generic_KeyValuePair_KeyValuePair_int__int___bool__get_Key__);
    sub_1C713B0(&Method_System_Collections_Generic_KeyValuePair_int__int__get_Key__);
    byte_4CCA56C = 1;
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
  if ( (byte_4CCA56D & 1) == 0 )
  {
    sub_1C713B0(&Method_System_Collections_Generic_KeyValuePair_KeyValuePair_int__int___bool__get_Value__);
    byte_4CCA56D = 1;
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
  if ( (byte_4CCA56B & 1) == 0 )
  {
    sub_1C713B0(&Method_System_Collections_Generic_KeyValuePair_KeyValuePair_int__int___bool__get_Key__);
    sub_1C713B0(&Method_System_Collections_Generic_KeyValuePair_int__int__get_Key__);
    byte_4CCA56B = 1;
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
  if ( (byte_4CCA56E & 1) == 0 )
  {
    sub_1C713B0(&Method_System_Collections_Generic_KeyValuePair_KeyValuePair_int__int___bool__get_Key__);
    sub_1C713B0(&Method_System_Collections_Generic_KeyValuePair_int__int__get_Key__);
    byte_4CCA56E = 1;
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
  if ( (byte_4CCA56F & 1) == 0 )
  {
    sub_1C713B0(&Method_System_Collections_Generic_KeyValuePair_KeyValuePair_int__int___bool__get_Value__);
    byte_4CCA56F = 1;
  }
  return this->fields.condition == value;
}


void BattleLogicFunction_SideEffectMakeArgument___ctor(
        BattleLogicFunction_SideEffectMakeArgument_o *this,
        const MethodInfo *method)
{
  int32_t v2; // w2
  int32_t v3; // w3
  System_String_o *v4; // x4
  int32_t v5; // w5
  int64_t v6; // x6
  System_String_o *v7; // x7
  long double inited; // q0
  _QWORD *v10; // x20
  __int64 v11; // x8
  __int64 v12; // x0
  __int64 v13; // x0
  struct BattleActionData_SideEffectData_array **v14; // x8
  struct BattleActionData_SideEffectData_array *v15; // x1

  if ( (byte_4CCA572 & 1) == 0 )
  {
    sub_1C713B0(&Method_System_Array_Empty_BattleActionData_SideEffectData___);
    byte_4CCA572 = 1;
  }
  v10 = Method_System_Array_Empty_BattleActionData_SideEffectData___;
  v11 = *((_QWORD *)Method_System_Array_Empty_BattleActionData_SideEffectData___ + 7);
  if ( !v11 )
  {
    sub_1C474A0(Method_System_Array_Empty_BattleActionData_SideEffectData___);
    v11 = v10[7];
  }
  v12 = *(_QWORD *)(v11 + 16);
  if ( (*(_BYTE *)(v12 + 309) & 1) == 0 )
    v12 = sub_1C47444(inited);
  if ( !*(_DWORD *)(v12 + 224) )
    inited = j_il2cpp_runtime_class_init_0(v12);
  v13 = *(_QWORD *)(v10[7] + 16LL);
  if ( (*(_BYTE *)(v13 + 309) & 1) == 0 )
    v13 = sub_1C47444(inited);
  v14 = *(struct BattleActionData_SideEffectData_array ***)(v13 + 184);
  v15 = *v14;
  this->fields._SideEffectList_k__BackingField = *v14;
  sub_1C71354((GrandQuestFolderBoardItem_o *)&this->fields, (int32_t)v15, v2, v3, v4, v5, v6, v7);
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
  int32_t v10; // w3
  System_String_o *v11; // x4
  int32_t v12; // w5
  int64_t v13; // x6
  System_String_o *v14; // x7
  System_Func_T__TResult__o *v15; // x22
  System_Collections_Generic_IEnumerable_TSource__o *v16; // x0
  System_Object_array *v17; // x0
  int32_t v18; // w2
  int32_t v19; // w3
  System_String_o *v20; // x4
  int32_t v21; // w5
  int64_t v22; // x6
  System_String_o *v23; // x7

  if ( (byte_4CCA570 & 1) == 0 )
  {
    sub_1C713B0(&BuffList_ACTION___TypeInfo);
    sub_1C713B0(&Method_System_Linq_Enumerable_Select_int__BattleActionData_SideEffectData___);
    sub_1C713B0(&Method_System_Linq_Enumerable_ToArray_BattleActionData_SideEffectData___);
    sub_1C713B0(&System_Func_int__BattleActionData_SideEffectData__TypeInfo);
    sub_1C713B0(&Method_BattleLogicFunction_SideEffectMakeArgument___c__DisplayClass9_0__Init_b__0__);
    sub_1C713B0(&BattleLogicFunction_SideEffectMakeArgument___c__DisplayClass9_0_TypeInfo);
    byte_4CCA570 = 1;
  }
  v5 = sub_1C715FC(BattleLogicFunction_SideEffectMakeArgument___c__DisplayClass9_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v5, 0);
  v6 = sub_1C71458(BuffList_ACTION___TypeInfo, 1);
  v7 = ((__int64 (__fastcall *)(BattleLogicFunction_SideEffectMakeArgument_o *, const MethodInfo *))this->klass->vtable._4_unknown.methodPtr)(
         this,
         this->klass->vtable._4_unknown.method);
  if ( !v6 )
    goto LABEL_7;
  if ( !*(_DWORD *)(v6 + 24) )
    sub_1C71610(v7);
  *(_DWORD *)(v6 + 32) = v7;
  if ( !v5 )
LABEL_7:
    sub_1C71608(v7, v8);
  *(_QWORD *)(v5 + 16) = v6;
  sub_1C71354((GrandQuestFolderBoardItem_o *)(v5 + 16), v6, v9, v10, v11, v12, v13, v14);
  v15 = (System_Func_T__TResult__o *)sub_1C715FC(System_Func_int__BattleActionData_SideEffectData__TypeInfo);
  System_Func_int__object____ctor(
    v15,
    (Il2CppObject *)v5,
    Method_BattleLogicFunction_SideEffectMakeArgument___c__DisplayClass9_0__Init_b__0__,
    0);
  v16 = (System_Collections_Generic_IEnumerable_TSource__o *)System_Linq_Enumerable__Select_int__object_(
                                                               (System_Collections_Generic_IEnumerable_TSource__o *)targetIds,
                                                               (System_Func_TSource__TResult__o *)v15,
                                                               (const MethodInfo_317EBF8 *)Method_System_Linq_Enumerable_Select_int__BattleActionData_SideEffectData___);
  v17 = System_Linq_Enumerable__ToArray_object_(
          v16,
          (const MethodInfo_318AFEC *)Method_System_Linq_Enumerable_ToArray_BattleActionData_SideEffectData___);
  this->fields._SideEffectList_k__BackingField = (struct BattleActionData_SideEffectData_array *)v17;
  sub_1C71354((GrandQuestFolderBoardItem_o *)&this->fields, (int32_t)v17, v18, v19, v20, v21, v22, v23);
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
  int32_t v18; // w3
  System_String_o *v19; // x4
  int32_t v20; // w5
  int64_t v21; // x6
  System_String_o *v22; // x7

  if ( (byte_4CCA571 & 1) == 0 )
  {
    sub_1C713B0(&Method_System_Linq_Enumerable_Concat_BattleActionData_SideEffectData___);
    sub_1C713B0(&Method_System_Linq_Enumerable_ToArray_BattleActionData_SideEffectData___);
    sub_1C713B0(&Method_System_Linq_Enumerable_Where_BattleActionData_SideEffectData___);
    sub_1C713B0(&System_Func_BattleActionData_SideEffectData__bool__TypeInfo);
    sub_1C713B0(&Method_BattleLogicFunction_SideEffectMakeArgument___c__DisplayClass11_0__SortMainTargetToFirst_b__0__);
    sub_1C713B0(&Method_BattleLogicFunction_SideEffectMakeArgument___c__DisplayClass11_0__SortMainTargetToFirst_b__1__);
    sub_1C713B0(&BattleLogicFunction_SideEffectMakeArgument___c__DisplayClass11_0_TypeInfo);
    byte_4CCA571 = 1;
  }
  v5 = sub_1C715FC(BattleLogicFunction_SideEffectMakeArgument___c__DisplayClass11_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v5, 0);
  if ( !v5 )
    sub_1C71608(v6, v7);
  *(_DWORD *)(v5 + 16) = mainTargetId;
  SideEffectList_k__BackingField = (System_Collections_Generic_IEnumerable_TSource__o *)this->fields._SideEffectList_k__BackingField;
  v9 = (System_Func_object__bool__o *)sub_1C715FC(System_Func_BattleActionData_SideEffectData__bool__TypeInfo);
  System_Func_object__bool____ctor(
    v9,
    (Il2CppObject *)v5,
    Method_BattleLogicFunction_SideEffectMakeArgument___c__DisplayClass11_0__SortMainTargetToFirst_b__0__,
    0);
  v10 = System_Linq_Enumerable__Where_object_(
          SideEffectList_k__BackingField,
          (System_Func_TSource__bool__o *)v9,
          (const MethodInfo_3192108 *)Method_System_Linq_Enumerable_Where_BattleActionData_SideEffectData___);
  v11 = (System_Collections_Generic_IEnumerable_TSource__o *)this->fields._SideEffectList_k__BackingField;
  v12 = v10;
  v13 = (System_Func_object__bool__o *)sub_1C715FC(System_Func_BattleActionData_SideEffectData__bool__TypeInfo);
  System_Func_object__bool____ctor(
    v13,
    (Il2CppObject *)v5,
    Method_BattleLogicFunction_SideEffectMakeArgument___c__DisplayClass11_0__SortMainTargetToFirst_b__1__,
    0);
  v14 = System_Linq_Enumerable__Where_object_(
          v11,
          (System_Func_TSource__bool__o *)v13,
          (const MethodInfo_3192108 *)Method_System_Linq_Enumerable_Where_BattleActionData_SideEffectData___);
  v15 = System_Linq_Enumerable__Concat_object_(
          v12,
          v14,
          (const MethodInfo_3167BF0 *)Method_System_Linq_Enumerable_Concat_BattleActionData_SideEffectData___);
  v16 = System_Linq_Enumerable__ToArray_object_(
          v15,
          (const MethodInfo_318AFEC *)Method_System_Linq_Enumerable_ToArray_BattleActionData_SideEffectData___);
  this->fields._SideEffectList_k__BackingField = (struct BattleActionData_SideEffectData_array *)v16;
  sub_1C71354((GrandQuestFolderBoardItem_o *)&this->fields, (int32_t)v16, v17, v18, v19, v20, v21, v22);
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
  int32_t v3; // w3
  System_String_o *v4; // x4
  int32_t v5; // w5
  int64_t v6; // x6
  System_String_o *v7; // x7

  this->fields._SideEffectList_k__BackingField = value;
  sub_1C71354((GrandQuestFolderBoardItem_o *)&this->fields, (int32_t)value, (int32_t)method, v3, v4, v5, v6, v7);
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
    sub_1C71608(this, 0);
  return x->fields.targetId == this->fields.mainTargetId;
}


bool BattleLogicFunction_SideEffectMakeArgument___c__DisplayClass11_0___SortMainTargetToFirst_b__1(
        BattleLogicFunction_SideEffectMakeArgument___c__DisplayClass11_0_o *this,
        BattleActionData_SideEffectData_o *x,
        const MethodInfo *method)
{
  if ( !x )
    sub_1C71608(this, 0);
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

  if ( (byte_4CCA573 & 1) == 0 )
  {
    sub_1C713B0(&BattleActionData_SideEffectData_TypeInfo);
    byte_4CCA573 = 1;
  }
  buffActs = this->fields.buffActs;
  v6 = (BattleActionData_SideEffectData_o *)sub_1C715FC(BattleActionData_SideEffectData_TypeInfo);
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

  if ( (byte_4CCA55C & 1) == 0 )
  {
    sub_1C713B0(&BuffList_ACTION___TypeInfo);
    byte_4CCA55C = 1;
  }
  result = (BuffList_ACTION_array *)sub_1C71458(BuffList_ACTION___TypeInfo, 1);
  if ( !result )
    sub_1C71608(0, v5);
  max_length = result->max_length;
  if ( !isMainOnly )
  {
    if ( max_length )
    {
      v7 = 122;
      goto LABEL_9;
    }
LABEL_11:
    sub_1C71610(result);
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

  if ( (byte_4CCA55D & 1) == 0 )
  {
    sub_1C713B0(&BuffList_ACTION___TypeInfo);
    byte_4CCA55D = 1;
  }
  result = (BuffList_ACTION_array *)sub_1C71458(BuffList_ACTION___TypeInfo, 1);
  if ( !result )
    sub_1C71608(0, v5);
  max_length = result->max_length;
  if ( !isMainOnly )
  {
    if ( max_length )
    {
      v7 = 124;
      goto LABEL_9;
    }
LABEL_11:
    sub_1C71610(result);
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
  int32_t v8; // w3
  System_String_o *v9; // x4
  int32_t v10; // w5
  int64_t v11; // x6
  System_String_o *v12; // x7

  if ( (byte_4CCA55E & 1) == 0 )
  {
    sub_1C713B0(&int___TypeInfo);
    byte_4CCA55E = 1;
  }
  BattleLogicFunction_FunctionArgument___ctor(
    (BattleLogicFunction_FunctionArgument_o *)this,
    *(const MethodInfo **)&targetId);
  v5 = sub_1C71458(int___TypeInfo, 1);
  if ( !v5 )
    sub_1C71608(0, v6);
  if ( !*(_DWORD *)(v5 + 24) )
    sub_1C71610(v5);
  *(_DWORD *)(v5 + 32) = targetId;
  this->fields.fixTargetIds = (struct System_Int32_array *)v5;
  sub_1C71354((GrandQuestFolderBoardItem_o *)&this->fields.fixTargetIds, v5, v7, v8, v9, v10, v11, v12);
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
  int32_t v3; // w3
  System_String_o *v4; // x4
  int32_t v5; // w5
  int64_t v6; // x6
  System_String_o *v7; // x7

  if ( (byte_4CCA576 & 1) == 0 )
  {
    sub_1C713B0(&BattleLogicFunction___c_TypeInfo);
    byte_4CCA576 = 1;
  }
  v1 = (Il2CppObject *)sub_1C715FC(BattleLogicFunction___c_TypeInfo);
  System_Object___ctor(v1, 0);
  BattleLogicFunction___c_TypeInfo->static_fields->__9 = (struct BattleLogicFunction___c_o *)v1;
  sub_1C71354(
    (GrandQuestFolderBoardItem_o *)BattleLogicFunction___c_TypeInfo->static_fields,
    (int32_t)v1,
    v2,
    v3,
    v4,
    v5,
    v6,
    v7);
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
    sub_1C71608(this, 0);
  return BattleBuffData_BuffData__get_ExistChangeBgm(buff, 0);
}


int32_t BattleLogicFunction___c___FunctionRevivalInDetail_b__120_0(
        BattleLogicFunction___c_o *this,
        BattleServantData_o *x,
        const MethodInfo *method)
{
  if ( !x || (this = (BattleLogicFunction___c_o *)x->fields.deckSvt) == 0 )
    sub_1C71608(this, x);
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

  if ( (byte_4CCA578 & 1) == 0 )
  {
    this = (BattleLogicFunction___c_o *)sub_1C713B0(&System_Linq_IGrouping_int__BattleServantData__TypeInfo);
    byte_4CCA578 = 1;
  }
  if ( !x )
    sub_1C71608(this, x);
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
    v7 = sub_1C47738(x, System_Linq_IGrouping_int__BattleServantData__TypeInfo, 0);
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
  if ( (byte_4CCA579 & 1) == 0 )
  {
    sub_1C713B0(&Method_System_Linq_Enumerable_ToArray_BattleServantData___);
    byte_4CCA579 = 1;
  }
  return (BattleServantData_array *)System_Linq_Enumerable__ToArray_object_(
                                      (System_Collections_Generic_IEnumerable_TSource__o *)x,
                                      (const MethodInfo_318AFEC *)Method_System_Linq_Enumerable_ToArray_BattleServantData___);
}


bool BattleLogicFunction___c___FunctionRevivalInDetail_b__120_7(
        BattleLogicFunction___c_o *this,
        BattleServantData_o *x,
        const MethodInfo *method)
{
  if ( !x )
    sub_1C71608(this, 0);
  return !x->fields.isEnemy;
}


void BattleLogicFunction___c___FunctionRevivalInDetail_b__120_8(
        BattleLogicFunction___c_o *this,
        BattleServantData_o *x,
        const MethodInfo *method)
{
  if ( !x )
    sub_1C71608(this, 0);
  BattleServantData__ProcessSkillRevive(x, 0);
}


bool BattleLogicFunction___c___FunctionSubFieldBuff_b__135_1(
        BattleLogicFunction___c_o *this,
        BattleBuffData_BuffData_o *x,
        const MethodInfo *method)
{
  if ( !x )
    sub_1C71608(this, 0);
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
    sub_1C71608(this, 0);
  BattleActionData__SetPopupOnce(x, 0);
}


void BattleLogicFunction___c___SetSubstituteAction_b__162_0(
        BattleLogicFunction___c_o *this,
        BattleServantData_o *svtData,
        const MethodInfo *method)
{
  if ( !svtData )
    sub_1C71608(this, 0);
  svtData->fields._IsSubstituteBuffActive_k__BackingField = 0;
}


bool BattleLogicFunction___c___SetSubstituteAction_b__162_1(
        BattleLogicFunction___c_o *this,
        BattleServantData_o *x,
        const MethodInfo *method)
{
  if ( !x )
    sub_1C71608(this, 0);
  return x->fields._IsSubstituteBuffActive_k__BackingField;
}


bool BattleLogicFunction___c___SetSubstituteAction_b__162_2(
        BattleLogicFunction___c_o *this,
        BattleBuffData_BuffData_o *buff,
        const MethodInfo *method)
{
  if ( !buff )
    sub_1C71608(this, 0);
  return buff->fields._IsSubstituteSuccess_k__BackingField || buff->fields._IsSubstituteResisted_k__BackingField;
}


bool BattleLogicFunction___c___functionMoveState_b__122_2(
        BattleLogicFunction___c_o *this,
        BattleBuffData_BuffData_o *x,
        const MethodInfo *method)
{
  if ( !x )
    sub_1C71608(this, 0);
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
    sub_1C71608(Next, v5);
  s->fields._shuffuleSeed = Next;
}


int32_t BattleLogicFunction___c___functionPtShuffle_b__101_1(
        BattleLogicFunction___c_o *this,
        BattleServantData_o *a,
        BattleServantData_o *b,
        const MethodInfo *method)
{
  if ( !a || (this = (BattleLogicFunction___c_o *)BattleServantData__get_ShuffleSeed(a, 0), !b) )
    sub_1C71608(this, a);
  return (_DWORD)this - BattleServantData__get_ShuffleSeed(b, 0);
}


bool BattleLogicFunction___c___functionReplaceEnemyMember_b__93_0(
        BattleLogicFunction___c_o *this,
        BattleServantData_o *x,
        const MethodInfo *method)
{
  if ( !x )
    sub_1C71608(this, 0);
  return BattleServantData__isAlive(x, 0, 0);
}


BattleServantSnapShot_o *BattleLogicFunction___c___functionTransformServant_b__95_0(
        BattleLogicFunction___c_o *this,
        BattleServantData_o *x,
        const MethodInfo *method)
{
  BattleServantSnapShotShiftServant_o *v4; // x20

  if ( (byte_4CCA577 & 1) == 0 )
  {
    sub_1C713B0(&BattleServantSnapShotShiftServant_TypeInfo);
    byte_4CCA577 = 1;
  }
  v4 = (BattleServantSnapShotShiftServant_o *)sub_1C715FC(BattleServantSnapShotShiftServant_TypeInfo);
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
    sub_1C71608(this, x);
  return dataVals_k__BackingField->fields.funcType != 0;
}


bool BattleLogicFunction___c___procList_b__45_1(
        BattleLogicFunction___c_o *this,
        BattleLogicFunctionProcess_FunctionUnitCheck_o *x,
        const MethodInfo *method)
{
  struct DataVals_o *dataVals_k__BackingField; // x8

  if ( !x || (dataVals_k__BackingField = x->fields._dataVals_k__BackingField) == 0 )
    sub_1C71608(this, x);
  return dataVals_k__BackingField->fields.funcType == 135;
}


bool BattleLogicFunction___c___procList_b__45_2(
        BattleLogicFunction___c_o *this,
        BattleLogicFunctionProcess_FunctionTargetCheck_o *target,
        const MethodInfo *method)
{
  if ( !target )
    sub_1C71608(this, 0);
  return target->fields._result_k__BackingField;
}


int32_t BattleLogicFunction___c___procList_b__45_3(
        BattleLogicFunction___c_o *this,
        BattleLogicFunctionProcess_FunctionTargetCheck_o *target,
        const MethodInfo *method)
{
  if ( !target )
    sub_1C71608(this, 0);
  return target->fields._targetId_k__BackingField;
}


int32_t BattleLogicFunction___c___setAttackSideEffect_b__57_0(
        BattleLogicFunction___c_o *this,
        BattleActionData_SideEffectData_o *x,
        const MethodInfo *method)
{
  if ( !x )
    sub_1C71608(this, 0);
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
    sub_1C71608(this, 0);
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
    sub_1C71608(this, 0);
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
    sub_1C71608(this, 0);
  return BattleBuffData_BuffData__checkState(x, this->fields.stateUnstealable, 0);
}


bool BattleLogicFunction___c__DisplayClass122_0___functionMoveState_b__1(
        BattleLogicFunction___c__DisplayClass122_0_o *this,
        BattleBuffData_BuffData_o *x,
        const MethodInfo *method)
{
  System_Collections_Generic_HashSet_T__o *unstealableBuffs; // x0

  if ( (byte_4CCA57A & 1) == 0 )
  {
    sub_1C713B0(&Method_System_Collections_Generic_HashSet_BattleBuffData_BuffData__Contains__);
    byte_4CCA57A = 1;
  }
  unstealableBuffs = (System_Collections_Generic_HashSet_T__o *)this->fields.unstealableBuffs;
  if ( !unstealableBuffs )
    sub_1C71608(0, x);
  return !System_Collections_Generic_HashSet_object___Contains(
            unstealableBuffs,
            (Il2CppObject *)x,
            (const MethodInfo_36C7878 *)Method_System_Collections_Generic_HashSet_BattleBuffData_BuffData__Contains__);
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
    sub_1C71608(this, 0);
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
  if ( (byte_4CCA57B & 1) == 0 )
  {
    sub_1C713B0(&Method_System_Linq_Enumerable_Contains_int___);
    byte_4CCA57B = 1;
  }
  return !System_Linq_Enumerable__Contains_int_(
            (System_Collections_Generic_IEnumerable_TSource__o *)this->fields.specifiedReplaceTargetArray,
            x,
            (const MethodInfo_3168198 *)Method_System_Linq_Enumerable_Contains_int___);
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
    sub_1C71608(this, linkageIndividuality);
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
    sub_1C71608(targetSvtData, buff);
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
    sub_1C71608(this, 0);
  return x->fields.targetId == this->fields.targetId;
}