void __fastcall BattleLogicFunction___ctor(BattleLogicFunction_o *this, const MethodInfo *method)
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
  struct System_Int32_array *v14; // x0
  __int64 v15; // x1
  int32_t v16; // w2
  const MethodInfo *v17; // x3
  il2cpp_array_size_t max_length; // w9
  System_Collections_Generic_Dictionary_TKey__TValue__o *v19; // x20
  BattleLogicFunctionProcess_CommonFunctionTypeProcess_o *v20; // x21
  BattleLogicFunctionProcess_AddStateProcess_o *v21; // x21
  BattleLogicFunctionProcess_AddStateShortProcess_o *v22; // x21
  BattleLogicFunctionProcess_MoveToLastSubMemberProcess_o *v23; // x21
  BattleLogicFunctionProcess_TransformServantProcess_o *v24; // x21
  BattleLogicFunctionProcess_CommonFieldFunctionProcess_o *v25; // x21
  BattleLogicFunctionProcess_CommonFieldFunctionProcess_o *v26; // x21
  BattleLogicFunctionProcess_CommonAddStateProcess_o *v27; // x21
  BattleLogicFunctionProcess_ToFieldCommonFunctionProcess_o *v28; // x21
  int32_t v29; // w2
  const MethodInfo *v30; // x3

  if ( (byte_49BDBCF & 1) == 0 )
  {
    sub_1B4CF90(&BattleLogicFunctionProcess_AddStateProcess_TypeInfo, method);
    sub_1B4CF90(&BattleLogicFunctionProcess_AddStateShortProcess_TypeInfo, v3);
    sub_1B4CF90(&BattleLogicFunctionProcess_CommonAddStateProcess_TypeInfo, v4);
    sub_1B4CF90(&BattleLogicFunctionProcess_CommonFieldFunctionProcess_TypeInfo, v5);
    sub_1B4CF90(&BattleLogicFunctionProcess_CommonFunctionTypeProcess_TypeInfo, v6);
    sub_1B4CF90(
      &Method_System_Collections_Generic_Dictionary_FuncList_TYPE__BattleLogicFunctionProcess_BaseFunctionTypeProcess__Add__,
      v7);
    sub_1B4CF90(
      &Method_System_Collections_Generic_Dictionary_FuncList_TYPE__BattleLogicFunctionProcess_BaseFunctionTypeProcess___ctor__,
      v8);
    sub_1B4CF90(
      &System_Collections_Generic_Dictionary_FuncList_TYPE__BattleLogicFunctionProcess_BaseFunctionTypeProcess__TypeInfo,
      v9);
    sub_1B4CF90(&int___TypeInfo, v10);
    sub_1B4CF90(&BattleLogicFunctionProcess_MoveToLastSubMemberProcess_TypeInfo, v11);
    sub_1B4CF90(&BattleLogicFunctionProcess_ToFieldCommonFunctionProcess_TypeInfo, v12);
    sub_1B4CF90(&BattleLogicFunctionProcess_TransformServantProcess_TypeInfo, v13);
    byte_49BDBCF = 1;
  }
  v14 = (struct System_Int32_array *)sub_1B4D038(int___TypeInfo, 2LL);
  if ( !v14 )
    goto LABEL_8;
  max_length = v14->max_length;
  if ( !max_length || (v14->m_Items[1] = 701601, max_length == 1) )
    sub_1B4D1F4(v14, v14);
  v14->m_Items[2] = 701602;
  this->fields.tamamocatTreasureDeviceIds = v14;
  sub_1B4CF34((CGThumbnailListItem_o *)&this->fields.tamamocatTreasureDeviceIds, (int32_t)v14, v16, v17);
  v19 = (System_Collections_Generic_Dictionary_TKey__TValue__o *)sub_1B4D1DC(System_Collections_Generic_Dictionary_FuncList_TYPE__BattleLogicFunctionProcess_BaseFunctionTypeProcess__TypeInfo);
  System_Collections_Generic_Dictionary_Int32Enum__object____ctor(
    v19,
    (const MethodInfo_3226E8C *)Method_System_Collections_Generic_Dictionary_FuncList_TYPE__BattleLogicFunctionProcess_BaseFunctionTypeProcess___ctor__);
  v20 = (BattleLogicFunctionProcess_CommonFunctionTypeProcess_o *)sub_1B4D1DC(BattleLogicFunctionProcess_CommonFunctionTypeProcess_TypeInfo);
  BattleLogicFunctionProcess_CommonFunctionTypeProcess___ctor(v20, 0LL);
  if ( !v19 )
LABEL_8:
    sub_1B4D1EC(v14, v15);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v19,
    0,
    (Il2CppObject *)v20,
    (const MethodInfo_3227860 *)Method_System_Collections_Generic_Dictionary_FuncList_TYPE__BattleLogicFunctionProcess_BaseFunctionTypeProcess__Add__);
  v21 = (BattleLogicFunctionProcess_AddStateProcess_o *)sub_1B4D1DC(BattleLogicFunctionProcess_AddStateProcess_TypeInfo);
  BattleLogicFunctionProcess_AddStateProcess___ctor(v21, 0LL);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v19,
    1,
    (Il2CppObject *)v21,
    (const MethodInfo_3227860 *)Method_System_Collections_Generic_Dictionary_FuncList_TYPE__BattleLogicFunctionProcess_BaseFunctionTypeProcess__Add__);
  v22 = (BattleLogicFunctionProcess_AddStateShortProcess_o *)sub_1B4D1DC(BattleLogicFunctionProcess_AddStateShortProcess_TypeInfo);
  BattleLogicFunctionProcess_AddStateShortProcess___ctor(v22, 0LL);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v19,
    16,
    (Il2CppObject *)v22,
    (const MethodInfo_3227860 *)Method_System_Collections_Generic_Dictionary_FuncList_TYPE__BattleLogicFunctionProcess_BaseFunctionTypeProcess__Add__);
  v23 = (BattleLogicFunctionProcess_MoveToLastSubMemberProcess_o *)sub_1B4D1DC(BattleLogicFunctionProcess_MoveToLastSubMemberProcess_TypeInfo);
  BattleLogicFunctionProcess_MoveToLastSubMemberProcess___ctor(v23, 0LL);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v19,
    61,
    (Il2CppObject *)v23,
    (const MethodInfo_3227860 *)Method_System_Collections_Generic_Dictionary_FuncList_TYPE__BattleLogicFunctionProcess_BaseFunctionTypeProcess__Add__);
  v24 = (BattleLogicFunctionProcess_TransformServantProcess_o *)sub_1B4D1DC(BattleLogicFunctionProcess_TransformServantProcess_TypeInfo);
  BattleLogicFunctionProcess_TransformServantProcess___ctor(v24, 0LL);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v19,
    109,
    (Il2CppObject *)v24,
    (const MethodInfo_3227860 *)Method_System_Collections_Generic_Dictionary_FuncList_TYPE__BattleLogicFunctionProcess_BaseFunctionTypeProcess__Add__);
  v25 = (BattleLogicFunctionProcess_CommonFieldFunctionProcess_o *)sub_1B4D1DC(BattleLogicFunctionProcess_CommonFieldFunctionProcess_TypeInfo);
  BattleLogicFunctionProcess_CommonFieldFunctionProcess___ctor(v25, 0LL);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v19,
    29,
    (Il2CppObject *)v25,
    (const MethodInfo_3227860 *)Method_System_Collections_Generic_Dictionary_FuncList_TYPE__BattleLogicFunctionProcess_BaseFunctionTypeProcess__Add__);
  v26 = (BattleLogicFunctionProcess_CommonFieldFunctionProcess_o *)sub_1B4D1DC(BattleLogicFunctionProcess_CommonFieldFunctionProcess_TypeInfo);
  BattleLogicFunctionProcess_CommonFieldFunctionProcess___ctor(v26, 0LL);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v19,
    128,
    (Il2CppObject *)v26,
    (const MethodInfo_3227860 *)Method_System_Collections_Generic_Dictionary_FuncList_TYPE__BattleLogicFunctionProcess_BaseFunctionTypeProcess__Add__);
  v27 = (BattleLogicFunctionProcess_CommonAddStateProcess_o *)sub_1B4D1DC(BattleLogicFunctionProcess_CommonAddStateProcess_TypeInfo);
  BattleLogicFunctionProcess_CommonAddStateProcess___ctor(v27, 0LL);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v19,
    130,
    (Il2CppObject *)v27,
    (const MethodInfo_3227860 *)Method_System_Collections_Generic_Dictionary_FuncList_TYPE__BattleLogicFunctionProcess_BaseFunctionTypeProcess__Add__);
  v28 = (BattleLogicFunctionProcess_ToFieldCommonFunctionProcess_o *)sub_1B4D1DC(BattleLogicFunctionProcess_ToFieldCommonFunctionProcess_TypeInfo);
  BattleLogicFunctionProcess_ToFieldCommonFunctionProcess___ctor(v28, 0LL);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v19,
    131,
    (Il2CppObject *)v28,
    (const MethodInfo_3227860 *)Method_System_Collections_Generic_Dictionary_FuncList_TYPE__BattleLogicFunctionProcess_BaseFunctionTypeProcess__Add__);
  this->fields.dicFuncProcess = (struct System_Collections_Generic_Dictionary_FuncList_TYPE__BattleLogicFunctionProcess_BaseFunctionTypeProcess__o *)v19;
  sub_1B4CF34((CGThumbnailListItem_o *)&this->fields.dicFuncProcess, (int32_t)v19, v29, v30);
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
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x1
  __int64 v12; // x1
  __int64 v13; // x1
  __int64 v14; // x1
  __int64 v15; // x1
  struct BattleLogicFunctionProcess_FunctionUnitCheck_o *funcUnit_k__BackingField; // x8
  BattleLogicFunction_ProcListInArgs_o *procArg_k__BackingField; // x22
  DataVals_o *dataVals_k__BackingField; // x24
  BattleActionData_o *v19; // x23
  System_Collections_Generic_List_T__o *v20; // x25
  struct System_Object_array *items; // x8
  _QWORD *v22; // x9
  __int64 size; // x10
  struct BattleLogic_o *logic; // x8
  unsigned __int64 v25; // x9
  DataVals_o *v26; // x26
  const MethodInfo *v27; // x4
  BattleLogicFunction_c *klass; // x8
  BattleLogicFunction_o *v29; // x25
  __int64 v30; // x9
  int32_t *p_offset; // x10
  __int64 v32; // x0
  __int64 v33; // x1
  __int64 v34; // x25
  __int64 v35; // x8
  __int64 v36; // x9
  int *v37; // x10
  __int64 v38; // x0
  __int64 v39; // x8
  __int64 v40; // x9
  int *v41; // x10
  __int64 v42; // x0
  __int64 v43; // x0
  __int64 v44; // x1
  __int64 v45; // x27
  __int64 v46; // x0
  __int64 v47; // x1
  int32_t v48; // w2
  const MethodInfo *v49; // x6
  int32_t v50; // w27
  BattleActionData_o *v51; // x0
  int32_t v52; // w28
  int32_t funcIndex; // w28
  bool IsCommandSideEffect; // w0
  const MethodInfo *v55; // x7
  BattleActionData_o *NoEffectObject; // x0
  __int64 v57; // x8
  __int64 v58; // x9
  int *v59; // x10
  __int64 v60; // x0
  BattleLogicFunction_o *v62; // [xsp+8h] [xbp-78h]
  unsigned __int64 v63; // [xsp+10h] [xbp-70h]
  int32_t diffNp; // [xsp+1Ch] [xbp-64h] BYREF

  v8 = this;
  if ( (byte_49BDBAE & 1) == 0 )
  {
    sub_1B4CF90(&BattleActionData_TypeInfo, mainAction);
    sub_1B4CF90(&System_IDisposable_TypeInfo, v9);
    sub_1B4CF90(&System_Collections_Generic_IEnumerable_BattleLogicFunctionProcess_FunctionTargetCheck__TypeInfo, v10);
    sub_1B4CF90(&System_Collections_Generic_IEnumerator_BattleLogicFunctionProcess_FunctionTargetCheck__TypeInfo, v11);
    sub_1B4CF90(&System_Collections_IEnumerator_TypeInfo, v12);
    sub_1B4CF90(&Method_System_Collections_Generic_List_FuncList_TYPE__Add__, v13);
    sub_1B4CF90(&Method_System_Collections_Generic_List_FuncList_TYPE___ctor__, v14);
    this = (BattleLogicFunction_o *)sub_1B4CF90(&System_Collections_Generic_List_FuncList_TYPE__TypeInfo, v15);
    byte_49BDBAE = 1;
  }
  if ( !funcTarget )
    goto LABEL_65;
  funcUnit_k__BackingField = funcTarget->fields._funcUnit_k__BackingField;
  if ( !funcUnit_k__BackingField )
    goto LABEL_65;
  procArg_k__BackingField = funcUnit_k__BackingField->fields._procArg_k__BackingField;
  dataVals_k__BackingField = funcUnit_k__BackingField->fields._dataVals_k__BackingField;
  v19 = (BattleActionData_o *)sub_1B4D1DC(BattleActionData_TypeInfo);
  BattleActionData___ctor(v19, 0LL);
  v20 = (System_Collections_Generic_List_T__o *)sub_1B4D1DC(System_Collections_Generic_List_FuncList_TYPE__TypeInfo);
  System_Collections_Generic_List_Int32Enum____ctor(
    v20,
    (const MethodInfo_3565190 *)Method_System_Collections_Generic_List_FuncList_TYPE___ctor__);
  if ( !v20 )
    goto LABEL_65;
  items = v20->fields._items;
  v22 = Method_System_Collections_Generic_List_FuncList_TYPE__Add__;
  ++v20->fields._version;
  if ( !items )
    goto LABEL_65;
  size = v20->fields._size;
  if ( (unsigned int)size >= items->max_length )
  {
    System_Collections_Generic_List_Int32Enum___AddWithResize(
      v20,
      8,
      *(const MethodInfo_35659E4 **)(*(_QWORD *)(v22[4] + 192LL) + 112LL));
  }
  else
  {
    v20->fields._size = size + 1;
    *((_DWORD *)items->m_Items + size) = 8;
  }
  if ( !dataVals_k__BackingField )
    goto LABEL_65;
  this = (BattleLogicFunction_o *)DataVals__GetDependDataValsArray(
                                    dataVals_k__BackingField,
                                    (System_Collections_Generic_List_FuncList_TYPE__o *)v20,
                                    0,
                                    0LL);
  if ( !this )
    goto LABEL_65;
  logic = this->fields.logic;
  if ( (int)logic >= 1 )
  {
    v25 = 0LL;
    v62 = this;
    while ( 1 )
    {
      if ( v25 >= (unsigned int)logic )
        sub_1B4D1F4(this, mainAction);
      v26 = (DataVals_o *)*((_QWORD *)&this->fields.logictarget + v25);
      diffNp = 0;
      if ( !result )
        break;
      this = (BattleLogicFunction_o *)result->fields._Convert_k__BackingField;
      v63 = v25;
      if ( !this )
        break;
      ((void (__fastcall *)(BattleLogicFunction_o *, DataVals_o *, void *))this->klass[1]._1.namespaze)(
        this,
        v26,
        this->klass[1]._1.byval_arg.data);
      this = (BattleLogicFunction_o *)BattleLogicFunction__GetDependFuncTargets(
                                        v8,
                                        procArg_k__BackingField,
                                        mainAction,
                                        v26,
                                        v27);
      if ( !this )
        break;
      klass = this->klass;
      v29 = this;
      v30 = *(unsigned __int16 *)(&this->klass->_2.bitflags2 + 3);
      if ( *(_WORD *)(&this->klass->_2.bitflags2 + 3) )
      {
        p_offset = &klass->_1.interfaceOffsets->offset;
        while ( *((System_Collections_Generic_IEnumerable_BattleLogicFunctionProcess_FunctionTargetCheck__c **)p_offset
                - 1) != System_Collections_Generic_IEnumerable_BattleLogicFunctionProcess_FunctionTargetCheck__TypeInfo )
        {
          --v30;
          p_offset += 4;
          if ( !v30 )
            goto LABEL_22;
        }
        v32 = (__int64)(&klass->vtable._0_Equals.method + 2 * *p_offset);
      }
      else
      {
LABEL_22:
        v32 = sub_1B9D724(
                this,
                System_Collections_Generic_IEnumerable_BattleLogicFunctionProcess_FunctionTargetCheck__TypeInfo,
                0LL);
      }
      v34 = (*(__int64 (__fastcall **)(BattleLogicFunction_o *, _QWORD))v32)(v29, *(_QWORD *)(v32 + 8));
      if ( !v34 )
        sub_1B4D1EC(0LL, v33);
      while ( 1 )
      {
        v35 = *(_QWORD *)v34;
        v36 = *(unsigned __int16 *)(*(_QWORD *)v34 + 302LL);
        if ( *(_WORD *)(*(_QWORD *)v34 + 302LL) )
        {
          v37 = (int *)(*(_QWORD *)(v35 + 176) + 8LL);
          while ( *((System_Collections_IEnumerator_c **)v37 - 1) != System_Collections_IEnumerator_TypeInfo )
          {
            --v36;
            v37 += 4;
            if ( !v36 )
              goto LABEL_29;
          }
          v38 = v35 + 16LL * *v37 + 312;
        }
        else
        {
LABEL_29:
          v38 = sub_1B9D724(v34, System_Collections_IEnumerator_TypeInfo, 0LL);
        }
        if ( ((*(__int64 (__fastcall **)(__int64, _QWORD))v38)(v34, *(_QWORD *)(v38 + 8)) & 1) == 0 )
          break;
        v39 = *(_QWORD *)v34;
        v40 = *(unsigned __int16 *)(*(_QWORD *)v34 + 302LL);
        if ( *(_WORD *)(*(_QWORD *)v34 + 302LL) )
        {
          v41 = (int *)(*(_QWORD *)(v39 + 176) + 8LL);
          while ( *((System_Collections_Generic_IEnumerator_BattleLogicFunctionProcess_FunctionTargetCheck__c **)v41 - 1) != System_Collections_Generic_IEnumerator_BattleLogicFunctionProcess_FunctionTargetCheck__TypeInfo )
          {
            --v40;
            v41 += 4;
            if ( !v40 )
              goto LABEL_36;
          }
          v42 = v39 + 16LL * *v41 + 312;
        }
        else
        {
LABEL_36:
          v42 = sub_1B9D724(
                  v34,
                  System_Collections_Generic_IEnumerator_BattleLogicFunctionProcess_FunctionTargetCheck__TypeInfo,
                  0LL);
        }
        v43 = (*(__int64 (__fastcall **)(__int64, _QWORD))v42)(v34, *(_QWORD *)(v42 + 8));
        v45 = v43;
        if ( !v43 )
          sub_1B4D1EC(0LL, v44);
        v46 = (*(__int64 (__fastcall **)(__int64, BattleActionData_o *, _QWORD))(*(_QWORD *)v43 + 408LL))(
                v43,
                mainAction,
                *(_QWORD *)(*(_QWORD *)v43 + 416LL));
        if ( (v46 & 1) != 0 )
        {
          if ( !mainAction )
            sub_1B4D1EC(v46, v47);
          v50 = *(_DWORD *)(v45 + 32);
          v51 = BattleLogicFunction__functionLossNp(v8, procArg_k__BackingField, v48, v50, v26, &diffNp, v49);
          v52 = diffNp;
          if ( diffNp < 1 )
          {
            if ( v51 )
            {
              if ( !v26 )
                sub_1B4D1EC(v51, v51);
              if ( !procArg_k__BackingField )
                sub_1B4D1EC(v51, v51);
              funcIndex = v26->fields.funcIndex;
              IsCommandSideEffect = BattleLogicFunction_ProcListInArgs__get_IsCommandSideEffect(
                                      procArg_k__BackingField,
                                      0LL);
              NoEffectObject = BattleLogicFunction__getNoEffectObject(
                                 v8,
                                 v50,
                                 funcIndex,
                                 v26,
                                 IsCommandSideEffect,
                                 0LL,
                                 0LL,
                                 v55);
              if ( !v19 )
                sub_1B4D1EC(NoEffectObject, NoEffectObject);
              BattleActionData__addAction(v19, NoEffectObject, 0LL);
            }
          }
          else
          {
            if ( !v19 )
              sub_1B4D1EC(v51, v51);
            BattleActionData__addAction(v19, v51, 0LL);
            NpGaugeAbsorbResult__AddPoint(result, v52, 0LL);
          }
        }
      }
      v57 = *(_QWORD *)v34;
      v58 = *(unsigned __int16 *)(*(_QWORD *)v34 + 302LL);
      if ( *(_WORD *)(*(_QWORD *)v34 + 302LL) )
      {
        v59 = (int *)(*(_QWORD *)(v57 + 176) + 8LL);
        while ( *((System_IDisposable_c **)v59 - 1) != System_IDisposable_TypeInfo )
        {
          --v58;
          v59 += 4;
          if ( !v58 )
            goto LABEL_53;
        }
        v60 = v57 + 16LL * *v59 + 312;
      }
      else
      {
LABEL_53:
        v60 = sub_1B9D724(v34, System_IDisposable_TypeInfo, 0LL);
      }
      (*(void (__fastcall **)(__int64, _QWORD))v60)(v34, *(_QWORD *)(v60 + 8));
      this = v62;
      LODWORD(logic) = v62->fields.logic;
      v25 = v63 + 1;
      if ( (__int64)(v63 + 1) >= (int)logic )
        return v19;
    }
LABEL_65:
    sub_1B4D1EC(this, mainAction);
  }
  return v19;
}


BattleActionData_o *__fastcall BattleLogicFunction__AbsorbNpTurn(
        BattleLogicFunction_o *this,
        BattleActionData_o *mainAction,
        BattleLogicFunctionProcess_FunctionTargetCheck_o *funcTarget,
        NpGaugeAbsorbResult_o *result,
        const MethodInfo *method)
{
  BattleLogicFunction_o *v7; // x21
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x1
  __int64 v12; // x1
  __int64 v13; // x1
  __int64 v14; // x1
  struct BattleLogicFunctionProcess_FunctionUnitCheck_o *funcUnit_k__BackingField; // x8
  DataVals_o *dataVals_k__BackingField; // x24
  BattleLogicFunction_ProcListInArgs_o *procArg_k__BackingField; // x22
  BattleActionData_o *v18; // x23
  System_Collections_Generic_List_T__o *v19; // x25
  struct System_Object_array *items; // x8
  _QWORD *v21; // x9
  __int64 size; // x10
  struct BattleLogic_o *logic; // x8
  unsigned __int64 v24; // x9
  DataVals_o *v25; // x26
  const MethodInfo *v26; // x4
  BattleLogicFunction_c *klass; // x8
  BattleLogicFunction_o *v28; // x25
  __int64 v29; // x9
  int32_t *p_offset; // x10
  __int64 v31; // x0
  __int64 v32; // x1
  __int64 v33; // x25
  __int64 v34; // x8
  __int64 v35; // x9
  int *v36; // x10
  __int64 v37; // x0
  __int64 v38; // x8
  __int64 v39; // x9
  int *v40; // x10
  __int64 v41; // x0
  __int64 v42; // x0
  __int64 v43; // x1
  __int64 v44; // x27
  __int64 v45; // x0
  __int64 v46; // x1
  int32_t v47; // w27
  FunctionEntity_o *funcEnt; // x28
  int32_t funcIndex; // w29
  bool IsCommandSideEffect; // w0
  const MethodInfo *v51; // x7
  BattleActionData_o *v52; // x0
  __int64 v53; // x8
  __int64 v54; // x9
  int *v55; // x10
  __int64 v56; // x0
  BattleLogicFunction_o *v58; // [xsp+0h] [xbp-80h]
  unsigned __int64 v59; // [xsp+8h] [xbp-78h]
  int32_t absorptionCount; // [xsp+1Ch] [xbp-64h] BYREF

  v7 = this;
  if ( (byte_49BDBAD & 1) == 0 )
  {
    sub_1B4CF90(&BattleActionData_TypeInfo, mainAction);
    sub_1B4CF90(&System_IDisposable_TypeInfo, v8);
    sub_1B4CF90(&System_Collections_Generic_IEnumerable_BattleLogicFunctionProcess_FunctionTargetCheck__TypeInfo, v9);
    sub_1B4CF90(&System_Collections_Generic_IEnumerator_BattleLogicFunctionProcess_FunctionTargetCheck__TypeInfo, v10);
    sub_1B4CF90(&System_Collections_IEnumerator_TypeInfo, v11);
    sub_1B4CF90(&Method_System_Collections_Generic_List_FuncList_TYPE__Add__, v12);
    sub_1B4CF90(&Method_System_Collections_Generic_List_FuncList_TYPE___ctor__, v13);
    this = (BattleLogicFunction_o *)sub_1B4CF90(&System_Collections_Generic_List_FuncList_TYPE__TypeInfo, v14);
    byte_49BDBAD = 1;
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
  v18 = (BattleActionData_o *)sub_1B4D1DC(BattleActionData_TypeInfo);
  BattleActionData___ctor(v18, 0LL);
  v19 = (System_Collections_Generic_List_T__o *)sub_1B4D1DC(System_Collections_Generic_List_FuncList_TYPE__TypeInfo);
  System_Collections_Generic_List_Int32Enum____ctor(
    v19,
    (const MethodInfo_3565190 *)Method_System_Collections_Generic_List_FuncList_TYPE___ctor__);
  if ( !v19 )
    goto LABEL_59;
  items = v19->fields._items;
  v21 = Method_System_Collections_Generic_List_FuncList_TYPE__Add__;
  ++v19->fields._version;
  if ( !items )
    goto LABEL_59;
  size = v19->fields._size;
  if ( (unsigned int)size >= items->max_length )
  {
    System_Collections_Generic_List_Int32Enum___AddWithResize(
      v19,
      20,
      *(const MethodInfo_35659E4 **)(*(_QWORD *)(v21[4] + 192LL) + 112LL));
  }
  else
  {
    v19->fields._size = size + 1;
    *((_DWORD *)items->m_Items + size) = 20;
  }
  this = (BattleLogicFunction_o *)DataVals__GetDependDataValsArray(
                                    dataVals_k__BackingField,
                                    (System_Collections_Generic_List_FuncList_TYPE__o *)v19,
                                    0,
                                    0LL);
  if ( !this )
    goto LABEL_59;
  logic = this->fields.logic;
  if ( (int)logic >= 1 )
  {
    v24 = 0LL;
    v58 = this;
    while ( 1 )
    {
      if ( v24 >= (unsigned int)logic )
        sub_1B4D1F4(this, mainAction);
      v25 = (DataVals_o *)*((_QWORD *)&this->fields.logictarget + v24);
      absorptionCount = 0;
      if ( !result )
        break;
      this = (BattleLogicFunction_o *)result->fields._Convert_k__BackingField;
      v59 = v24;
      if ( !this )
        break;
      ((void (__fastcall *)(BattleLogicFunction_o *, DataVals_o *, void *))this->klass[1]._1.namespaze)(
        this,
        v25,
        this->klass[1]._1.byval_arg.data);
      this = (BattleLogicFunction_o *)BattleLogicFunction__GetDependFuncTargets(
                                        v7,
                                        procArg_k__BackingField,
                                        mainAction,
                                        v25,
                                        v26);
      if ( !this )
        break;
      klass = this->klass;
      v28 = this;
      v29 = *(unsigned __int16 *)(&this->klass->_2.bitflags2 + 3);
      if ( *(_WORD *)(&this->klass->_2.bitflags2 + 3) )
      {
        p_offset = &klass->_1.interfaceOffsets->offset;
        while ( *((System_Collections_Generic_IEnumerable_BattleLogicFunctionProcess_FunctionTargetCheck__c **)p_offset
                - 1) != System_Collections_Generic_IEnumerable_BattleLogicFunctionProcess_FunctionTargetCheck__TypeInfo )
        {
          --v29;
          p_offset += 4;
          if ( !v29 )
            goto LABEL_22;
        }
        v31 = (__int64)(&klass->vtable._0_Equals.method + 2 * *p_offset);
      }
      else
      {
LABEL_22:
        v31 = sub_1B9D724(
                this,
                System_Collections_Generic_IEnumerable_BattleLogicFunctionProcess_FunctionTargetCheck__TypeInfo,
                0LL);
      }
      v33 = (*(__int64 (__fastcall **)(BattleLogicFunction_o *, _QWORD))v31)(v28, *(_QWORD *)(v31 + 8));
      if ( !v33 )
        sub_1B4D1EC(0LL, v32);
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
              goto LABEL_29;
          }
          v37 = v34 + 16LL * *v36 + 312;
        }
        else
        {
LABEL_29:
          v37 = sub_1B9D724(v33, System_Collections_IEnumerator_TypeInfo, 0LL);
        }
        if ( ((*(__int64 (__fastcall **)(__int64, _QWORD))v37)(v33, *(_QWORD *)(v37 + 8)) & 1) == 0 )
          break;
        v38 = *(_QWORD *)v33;
        v39 = *(unsigned __int16 *)(*(_QWORD *)v33 + 302LL);
        if ( *(_WORD *)(*(_QWORD *)v33 + 302LL) )
        {
          v40 = (int *)(*(_QWORD *)(v38 + 176) + 8LL);
          while ( *((System_Collections_Generic_IEnumerator_BattleLogicFunctionProcess_FunctionTargetCheck__c **)v40 - 1) != System_Collections_Generic_IEnumerator_BattleLogicFunctionProcess_FunctionTargetCheck__TypeInfo )
          {
            --v39;
            v40 += 4;
            if ( !v39 )
              goto LABEL_36;
          }
          v41 = v38 + 16LL * *v40 + 312;
        }
        else
        {
LABEL_36:
          v41 = sub_1B9D724(
                  v33,
                  System_Collections_Generic_IEnumerator_BattleLogicFunctionProcess_FunctionTargetCheck__TypeInfo,
                  0LL);
        }
        v42 = (*(__int64 (__fastcall **)(__int64, _QWORD))v41)(v33, *(_QWORD *)(v41 + 8));
        v44 = v42;
        if ( !v42 )
          sub_1B4D1EC(0LL, v43);
        v45 = (*(__int64 (__fastcall **)(__int64, BattleActionData_o *, _QWORD))(*(_QWORD *)v42 + 408LL))(
                v42,
                mainAction,
                *(_QWORD *)(*(_QWORD *)v42 + 416LL));
        if ( (v45 & 1) != 0 )
        {
          if ( !v25 )
            sub_1B4D1EC(v45, v46);
          if ( !procArg_k__BackingField )
            sub_1B4D1EC(v45, v46);
          v47 = *(_DWORD *)(v44 + 32);
          funcEnt = v25->fields.funcEnt;
          funcIndex = v25->fields.funcIndex;
          IsCommandSideEffect = BattleLogicFunction_ProcListInArgs__get_IsCommandSideEffect(
                                  procArg_k__BackingField,
                                  0LL);
          v52 = BattleLogicFunction__functionDelayNpTurn(
                  v7,
                  v47,
                  funcEnt,
                  v25,
                  funcIndex,
                  IsCommandSideEffect,
                  &absorptionCount,
                  v51);
          if ( !v18 )
            sub_1B4D1EC(v52, v52);
          BattleActionData__addAction(v18, v52, 0LL);
          if ( absorptionCount >= 1 )
            NpGaugeAbsorbResult__AddTurn(result, absorptionCount, 0LL);
        }
      }
      v53 = *(_QWORD *)v33;
      v54 = *(unsigned __int16 *)(*(_QWORD *)v33 + 302LL);
      if ( *(_WORD *)(*(_QWORD *)v33 + 302LL) )
      {
        v55 = (int *)(*(_QWORD *)(v53 + 176) + 8LL);
        while ( *((System_IDisposable_c **)v55 - 1) != System_IDisposable_TypeInfo )
        {
          --v54;
          v55 += 4;
          if ( !v54 )
            goto LABEL_49;
        }
        v56 = v53 + 16LL * *v55 + 312;
      }
      else
      {
LABEL_49:
        v56 = sub_1B9D724(v33, System_IDisposable_TypeInfo, 0LL);
      }
      (*(void (__fastcall **)(__int64, _QWORD))v56)(v33, *(_QWORD *)(v56 + 8));
      this = v58;
      LODWORD(logic) = v58->fields.logic;
      v24 = v59 + 1;
      if ( (__int64)(v59 + 1) >= (int)logic )
        return v18;
    }
LABEL_59:
    sub_1B4D1EC(this, mainAction);
  }
  return v18;
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
  if ( (byte_49BDB88 & 1) == 0 )
  {
    this = (BattleLogicFunction_o *)sub_1B4CF90(&UnityEngine_Object_TypeInfo, targetSvtData);
    byte_49BDB88 = 1;
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
      sub_1B4D1EC(this, targetSvtData);
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
  __int64 v34; // x27
  __int64 v35; // x1
  BattleData_o *data; // x0
  int32_t v37; // w2
  const MethodInfo *v38; // x3
  BattleServantData_o **v39; // x23
  const MethodInfo *v40; // x6
  int32_t m_CancellationTokenSource; // w28
  int32_t AuraSum_k__BackingField; // w29
  BattleServantData_o *v43; // x24
  System_Func_object__object__o *v44; // x26
  System_Collections_Generic_IEnumerable_TSource__o *v45; // x0
  System_Collections_Generic_List_TSource__o *v46; // x0
  int32_t v47; // w2
  const MethodInfo *v48; // x3
  System_Func_object__bool__o *v49; // x26
  _BOOL8 v50; // x0
  __int64 v51; // x1
  Il2CppObject *current; // x25
  BattleData_o *v53; // x0
  _BOOL8 v54; // x0
  __int64 v55; // x1
  BattleLogicFunction___c_c *v56; // x0
  System_Func_object__bool__o *_9__71_1; // x25
  Il2CppObject *v58; // x26
  struct BattleLogicFunction___c_StaticFields *static_fields; // x0
  int32_t v60; // w2
  const MethodInfo *v61; // x3
  struct BattleData_o *v62; // x8
  BattleFieldEnvironmentData_o *FieldEnvData_k__BackingField; // x22
  BattleActionEffect_ChangeBgmBuff_o *v64; // x22
  int32_t MaxHp_k__BackingField; // w22
  BattleActionEffect_SubChangeMaxHpBuff_o *v66; // x21
  unsigned int uniqueId; // w22
  BattleData_o *v68; // x20
  BattleActionEffect_Base_o *v69; // x0
  System_Collections_Generic_List_Enumerator_object__o v70; // [xsp+8h] [xbp-98h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v71; // [xsp+20h] [xbp-80h] BYREF

  if ( (byte_49BDB95 & 1) == 0 )
  {
    sub_1B4CF90(&Method_BasicHelper_Any_BattleBuffData_BuffData___, actionData);
    sub_1B4CF90(&Method_BattleBuffData_IsOverwriteClass__, v18);
    sub_1B4CF90(&BattleActionEffect_ChangeBgmBuff_TypeInfo, v19);
    sub_1B4CF90(&Method_System_Linq_Enumerable_Select_BattleBuffData_BuffData__BattleBuffData_BuffData___, v20);
    sub_1B4CF90(&Method_System_Linq_Enumerable_ToList_BattleBuffData_BuffData___, v21);
    sub_1B4CF90(&Method_System_Collections_Generic_List_Enumerator_BattleBuffData_BuffData__Dispose__, v22);
    sub_1B4CF90(&Method_System_Collections_Generic_List_Enumerator_BattleBuffData_BuffData__MoveNext__, v23);
    sub_1B4CF90(&Method_System_Collections_Generic_List_Enumerator_BattleBuffData_BuffData__get_Current__, v24);
    sub_1B4CF90(&System_Func_BattleBuffData_BuffData__BattleBuffData_BuffData__TypeInfo, v25);
    sub_1B4CF90(&System_Func_BattleBuffData_BuffData__bool__TypeInfo, v26);
    sub_1B4CF90(&Method_System_Collections_Generic_List_BattleBuffData_BuffData__GetEnumerator__, v27);
    sub_1B4CF90(&Method_System_Collections_Generic_List_BattleBuffData_BuffData__ToArray__, v28);
    sub_1B4CF90(&BattleActionEffect_SubChangeMaxHpBuff_TypeInfo, v29);
    sub_1B4CF90(&Method_BattleLogicFunction___c__ApplySubBuffChanges_b__71_1__, v30);
    sub_1B4CF90(&Method_BattleLogicFunction___c__DisplayClass71_0__ApplySubBuffChanges_b__0__, v31);
    sub_1B4CF90(&BattleLogicFunction___c__DisplayClass71_0_TypeInfo, v32);
    sub_1B4CF90(&BattleLogicFunction___c_TypeInfo, v33);
    byte_49BDB95 = 1;
  }
  memset(&v71, 0, sizeof(v71));
  v34 = sub_1B4D1DC(BattleLogicFunction___c__DisplayClass71_0_TypeInfo);
  BattleLogicFunction___c__DisplayClass71_0___ctor((BattleLogicFunction___c__DisplayClass71_0_o *)v34, 0LL);
  if ( !BasicHelper__IsNullOrEmpty((System_Collections_ICollection_o *)subBuffList, 0LL) )
  {
    data = this->fields.data;
    if ( data )
    {
      data = (BattleData_o *)BattleData__getServantData(data, targetId, 0LL);
      if ( v34 )
      {
        *(_QWORD *)(v34 + 16) = data;
        v39 = (BattleServantData_o **)(v34 + 16);
        sub_1B4CF34((CGThumbnailListItem_o *)(v34 + 16), (int32_t)data, v37, v38);
        data = *(BattleData_o **)(v34 + 16);
        if ( data )
        {
          data = (BattleData_o *)BattleServantData__getAuraIdList((BattleServantData_o *)data, 0LL);
          if ( data )
          {
            if ( svtSnapShotOnBuffUpdate )
            {
              if ( baseVals )
              {
                if ( *v39 )
                {
                  m_CancellationTokenSource = (int32_t)data->fields.m_CancellationTokenSource;
                  AuraSum_k__BackingField = svtSnapShotOnBuffUpdate->fields._AuraSum_k__BackingField;
                  data = (BattleData_o *)BattleLogicFunction__getFunctionObject(
                                           (BattleLogicFunction_o *)data,
                                           baseVals->fields.funcEnt,
                                           (*v39)->fields.uniqueId,
                                           index,
                                           isCommandSideEffect,
                                           0LL,
                                           v40);
                  if ( data )
                  {
                    BYTE4(data->fields.boostSkillInfo) = AuraSum_k__BackingField > m_CancellationTokenSource;
                    v43 = (BattleServantData_o *)data;
                    v44 = (System_Func_object__object__o *)sub_1B4D1DC(System_Func_BattleBuffData_BuffData__BattleBuffData_BuffData__TypeInfo);
                    System_Func_object__object____ctor(
                      v44,
                      (Il2CppObject *)v34,
                      Method_BattleLogicFunction___c__DisplayClass71_0__ApplySubBuffChanges_b__0__,
                      0LL);
                    v45 = (System_Collections_Generic_IEnumerable_TSource__o *)System_Linq_Enumerable__Select_object__object_(
                                                                                 (System_Collections_Generic_IEnumerable_TSource__o *)subBuffList,
                                                                                 (System_Func_TSource__TResult__o *)v44,
                                                                                 (const MethodInfo_2F341B8 *)Method_System_Linq_Enumerable_Select_BattleBuffData_BuffData__BattleBuffData_BuffData___);
                    v46 = System_Linq_Enumerable__ToList_object_(
                            v45,
                            (const MethodInfo_2F401C8 *)Method_System_Linq_Enumerable_ToList_BattleBuffData_BuffData___);
                    *(_QWORD *)&v43->fields._iconLimitCount_k__BackingField.fields.fakeValue = v46;
                    sub_1B4CF34(
                      (CGThumbnailListItem_o *)&v43->fields._iconLimitCount_k__BackingField.fields.fakeValue,
                      (int32_t)v46,
                      v47,
                      v48);
                    v49 = (System_Func_object__bool__o *)sub_1B4D1DC(System_Func_BattleBuffData_BuffData__bool__TypeInfo);
                    System_Func_object__bool____ctor(v49, 0LL, Method_BattleBuffData_IsOverwriteClass__, 0LL);
                    data = (BattleData_o *)BasicHelper__Any_object_(
                                             (System_Collections_Generic_List_T__o *)subBuffList,
                                             (System_Func_T__bool__o *)v49,
                                             (const MethodInfo_2EEC494 *)Method_BasicHelper_Any_BattleBuffData_BuffData___);
                    if ( ((unsigned __int8)data & 1) != 0 )
                      *(&v43->fields.uniqueId + 1) = 7;
                    if ( actionData )
                    {
                      BattleActionData__setBuffData(actionData, (BattleActionData_BuffData_o *)v43, baseVals, 0LL);
                      if ( subBuffList )
                      {
                        System_Collections_Generic_List_object___GetEnumerator(
                          (System_Collections_Generic_List_Enumerator_T__o *)&v70,
                          (System_Collections_Generic_List_object__o *)subBuffList,
                          (const MethodInfo_3580CD4 *)Method_System_Collections_Generic_List_BattleBuffData_BuffData__GetEnumerator__);
                        v71 = v70;
                        while ( 1 )
                        {
                          v50 = System_Collections_Generic_List_Enumerator_object___MoveNext(
                                  &v71,
                                  (const MethodInfo_3308B3C *)Method_System_Collections_Generic_List_Enumerator_BattleBuffData_BuffData__MoveNext__);
                          if ( !v50 )
                            break;
                          current = v71.fields._current;
                          if ( !v71.fields._current )
                            sub_1B4D1EC(v50, v51);
                          v53 = this->fields.data;
                          if ( !v53 )
                            sub_1B4D1EC(0LL, v51);
                          BattleData__RemoveDoNotSelectCommandCardBuff(
                            v53,
                            (int32_t)v71.fields._current[1].klass,
                            *v39,
                            0LL);
                          v54 = BattleBuffData__CheckInvalidSacrificeIndiv((BattleBuffData_BuffData_o *)current, 0LL);
                          if ( v54 )
                          {
                            if ( !args )
                              sub_1B4D1EC(v54, v55);
                            args->fields.updateField = 1;
                          }
                        }
                        System_Collections_Generic_List_Enumerator_object___Dispose(
                          &v71,
                          (const MethodInfo_3308B38 *)Method_System_Collections_Generic_List_Enumerator_BattleBuffData_BuffData__Dispose__);
                        v56 = BattleLogicFunction___c_TypeInfo;
                        if ( !BattleLogicFunction___c_TypeInfo->_2.cctor_finished )
                        {
                          j_il2cpp_runtime_class_init_0(BattleLogicFunction___c_TypeInfo);
                          v56 = BattleLogicFunction___c_TypeInfo;
                        }
                        _9__71_1 = (System_Func_object__bool__o *)v56->static_fields->__9__71_1;
                        if ( !_9__71_1 )
                        {
                          if ( !v56->_2.cctor_finished )
                          {
                            j_il2cpp_runtime_class_init_0(v56);
                            v56 = BattleLogicFunction___c_TypeInfo;
                          }
                          v58 = (Il2CppObject *)v56->static_fields->__9;
                          _9__71_1 = (System_Func_object__bool__o *)sub_1B4D1DC(System_Func_BattleBuffData_BuffData__bool__TypeInfo);
                          System_Func_object__bool____ctor(
                            _9__71_1,
                            v58,
                            Method_BattleLogicFunction___c__ApplySubBuffChanges_b__71_1__,
                            0LL);
                          static_fields = BattleLogicFunction___c_TypeInfo->static_fields;
                          static_fields->__9__71_1 = (struct System_Func_BattleBuffData_BuffData__bool__o *)_9__71_1;
                          sub_1B4CF34((CGThumbnailListItem_o *)&static_fields->__9__71_1, (int32_t)_9__71_1, v60, v61);
                        }
                        data = (BattleData_o *)BasicHelper__Any_object_(
                                                 (System_Collections_Generic_List_T__o *)subBuffList,
                                                 (System_Func_T__bool__o *)_9__71_1,
                                                 (const MethodInfo_2EEC494 *)Method_BasicHelper_Any_BattleBuffData_BuffData___);
                        if ( ((unsigned __int8)data & 1) != 0 )
                        {
                          v62 = this->fields.data;
                          if ( !v62 )
                            goto LABEL_43;
                          FieldEnvData_k__BackingField = v62->fields._FieldEnvData_k__BackingField;
                          data = (BattleData_o *)System_Collections_Generic_List_object___ToArray(
                                                   (System_Collections_Generic_List_object__o *)subBuffList,
                                                   (const MethodInfo_3581D34 *)Method_System_Collections_Generic_List_BattleBuffData_BuffData__ToArray__);
                          if ( !FieldEnvData_k__BackingField )
                            goto LABEL_43;
                          BattleFieldEnvironmentData__RemoveBgmRelateBuff(
                            FieldEnvData_k__BackingField,
                            (BattleBuffData_BuffData_array *)data,
                            0LL);
                          v64 = (BattleActionEffect_ChangeBgmBuff_o *)sub_1B4D1DC(BattleActionEffect_ChangeBgmBuff_TypeInfo);
                          BattleActionEffect_ChangeBgmBuff___ctor(v64, 0LL);
                          BattleActionData_BuffData__SetActionEffectProc(
                            (BattleActionData_BuffData_o *)v43,
                            (BattleActionEffect_Base_o *)v64,
                            0LL);
                        }
                        data = (BattleData_o *)*v39;
                        if ( *v39 )
                        {
                          MaxHp_k__BackingField = svtSnapShotOnBuffUpdate->fields._MaxHp_k__BackingField;
                          data = (BattleData_o *)BattleServantData__getMaxHp((BattleServantData_o *)data, 0LL);
                          if ( MaxHp_k__BackingField == (_DWORD)data )
                            return;
                          if ( *v39 )
                          {
                            BattleActionData__addReflectLogicResultServantId(actionData, (*v39)->fields.uniqueId, 0LL);
                            v66 = (BattleActionEffect_SubChangeMaxHpBuff_o *)sub_1B4D1DC(BattleActionEffect_SubChangeMaxHpBuff_TypeInfo);
                            BattleActionEffect_SubChangeMaxHpBuff___ctor(v66, 0LL);
                            data = (BattleData_o *)System_Collections_Generic_List_object___ToArray(
                                                     (System_Collections_Generic_List_object__o *)subBuffList,
                                                     (const MethodInfo_3581D34 *)Method_System_Collections_Generic_List_BattleBuffData_BuffData__ToArray__);
                            if ( *v39 )
                            {
                              uniqueId = (*v39)->fields.uniqueId;
                              v68 = data;
                              data = (BattleData_o *)BattleServantData__getNowHp(*v39, 0LL);
                              if ( v66 )
                              {
                                v69 = (BattleActionEffect_Base_o *)((__int64 (__fastcall *)(BattleActionEffect_SubChangeMaxHpBuff_o *, BattleData_o *, _QWORD, _QWORD, Il2CppMethodPointer))v66->klass->vtable._7_InitBuff.method)(
                                                                     v66,
                                                                     v68,
                                                                     uniqueId,
                                                                     (unsigned int)((_DWORD)data
                                                                                  - svtSnapShotOnBuffUpdate->fields._Hp_k__BackingField),
                                                                     v66->klass->vtable._8_PartialPreActionProc.methodPtr);
                                BattleActionData_BuffData__SetActionEffectProc(
                                  (BattleActionData_BuffData_o *)v43,
                                  v69,
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
LABEL_43:
    sub_1B4D1EC(data, v35);
  }
}


void __fastcall BattleLogicFunction__BehaveLinkageBuffAsFamily(
        BattleLogicFunction_o *this,
        BattleBuffData_BuffData_o *buffData,
        BattleLogicFunctionProcess_FunctionTargetCheck_o *funcTarget,
        const MethodInfo *method)
{
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x21
  BattleData_o *data; // x0
  __int64 v13; // x1
  int32_t v14; // w2
  const MethodInfo *v15; // x3
  __int64 v16; // x8
  BattleServantData_o *ServantData; // x0
  int32_t v18; // w2
  const MethodInfo *v19; // x3
  System_Func_int__int__o *v20; // x20
  System_Collections_Generic_IEnumerable_TSource__o *v21; // x0
  struct System_Int32_array *v22; // x0
  int32_t v23; // w2
  const MethodInfo *v24; // x3
  System_Collections_Generic_IEnumerable_TSource__o *v25; // x0
  struct System_Int32_array *v26; // x0
  int32_t v27; // w2
  const MethodInfo *v28; // x3

  if ( (byte_49BDB93 & 1) == 0 )
  {
    sub_1B4CF90(&Method_System_Linq_Enumerable_Select_int__int___, buffData);
    sub_1B4CF90(&Method_System_Linq_Enumerable_ToArray_int___, v7);
    sub_1B4CF90(&System_Func_int__int__TypeInfo, v8);
    sub_1B4CF90(&Method_BattleLogicFunction___c__DisplayClass69_0__BehaveLinkageBuffAsFamily_b__0__, v9);
    sub_1B4CF90(&BattleLogicFunction___c__DisplayClass69_0_TypeInfo, v10);
    byte_49BDB93 = 1;
  }
  v11 = sub_1B4D1DC(BattleLogicFunction___c__DisplayClass69_0_TypeInfo);
  BattleLogicFunction___c__DisplayClass69_0___ctor((BattleLogicFunction___c__DisplayClass69_0_o *)v11, 0LL);
  if ( !v11 )
    goto LABEL_13;
  *(_QWORD *)(v11 + 16) = funcTarget;
  sub_1B4CF34((CGThumbnailListItem_o *)(v11 + 16), (int32_t)funcTarget, v14, v15);
  v16 = *(_QWORD *)(v11 + 16);
  if ( !v16 )
    goto LABEL_13;
  data = this->fields.data;
  if ( !data )
    goto LABEL_13;
  ServantData = BattleData__getServantData(data, *(_DWORD *)(v16 + 32), 0LL);
  *(_QWORD *)(v11 + 24) = ServantData;
  sub_1B4CF34((CGThumbnailListItem_o *)(v11 + 24), (int32_t)ServantData, v18, v19);
  if ( !*(_QWORD *)(v11 + 24) )
    return;
  v20 = (System_Func_int__int__o *)sub_1B4D1DC(System_Func_int__int__TypeInfo);
  System_Func_int__int____ctor(
    v20,
    (Il2CppObject *)v11,
    Method_BattleLogicFunction___c__DisplayClass69_0__BehaveLinkageBuffAsFamily_b__0__,
    0LL);
  if ( !buffData )
LABEL_13:
    sub_1B4D1EC(data, v13);
  if ( !BasicHelper__IsNullOrEmpty((System_Collections_ICollection_o *)buffData->fields.addIndividualty, 0LL) )
  {
    v21 = (System_Collections_Generic_IEnumerable_TSource__o *)System_Linq_Enumerable__Select_int__int_(
                                                                 (System_Collections_Generic_IEnumerable_TSource__o *)buffData->fields.addIndividualty,
                                                                 (System_Func_TSource__TResult__o *)v20,
                                                                 (const MethodInfo_2F3148C *)Method_System_Linq_Enumerable_Select_int__int___);
    v22 = System_Linq_Enumerable__ToArray_int_(
            v21,
            (const MethodInfo_2F3C24C *)Method_System_Linq_Enumerable_ToArray_int___);
    buffData->fields.familyLinkageIds = v22;
    sub_1B4CF34((CGThumbnailListItem_o *)&buffData->fields.familyLinkageIds, (int32_t)v22, v23, v24);
    BattleBuffData_BuffData__onState(buffData, 0x400000, 0LL);
  }
  if ( !BasicHelper__IsNullOrEmpty((System_Collections_ICollection_o *)buffData->fields.linkageTargetIndividualty, 0LL) )
  {
    v25 = (System_Collections_Generic_IEnumerable_TSource__o *)System_Linq_Enumerable__Select_int__int_(
                                                                 (System_Collections_Generic_IEnumerable_TSource__o *)buffData->fields.linkageTargetIndividualty,
                                                                 (System_Func_TSource__TResult__o *)v20,
                                                                 (const MethodInfo_2F3148C *)Method_System_Linq_Enumerable_Select_int__int___);
    v26 = System_Linq_Enumerable__ToArray_int_(
            v25,
            (const MethodInfo_2F3C24C *)Method_System_Linq_Enumerable_ToArray_int___);
    buffData->fields.linkageTargetIndividualty = v26;
    sub_1B4CF34((CGThumbnailListItem_o *)&buffData->fields.linkageTargetIndividualty, (int32_t)v26, v27, v28);
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
    sub_1B4D1EC(this, funcEnt);
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
    sub_1B4D1EC(this, baseVals);
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
    sub_1B4D1F4(this, baseVals);
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
  __int64 v7; // x1
  BattleData_o *data; // x23
  struct BattleFieldEnvironmentData_o *FieldEnvData_k__BackingField; // x21
  int32_t id; // w24
  Generator_BGMFromChangeBGMFunc_o *v11; // x22
  UnityEngine_Object_o *logic; // x20

  v6 = this;
  if ( (byte_49BDBC1 & 1) == 0 )
  {
    sub_1B4CF90(&Generator_BGMFromChangeBGMFunc_TypeInfo, bgmEnt);
    this = (BattleLogicFunction_o *)sub_1B4CF90(&UnityEngine_Object_TypeInfo, v7);
    byte_49BDBC1 = 1;
  }
  data = v6->fields.data;
  if ( !data )
    goto LABEL_16;
  FieldEnvData_k__BackingField = data->fields._FieldEnvData_k__BackingField;
  if ( bgmEnt )
  {
    id = bgmEnt->fields.id;
    v11 = (Generator_BGMFromChangeBGMFunc_o *)sub_1B4D1DC(Generator_BGMFromChangeBGMFunc_TypeInfo);
    Generator_BGMFromChangeBGMFunc___ctor(v11, data, id, baseVals, 1, 0LL);
    if ( !FieldEnvData_k__BackingField )
      goto LABEL_16;
    ((void (__fastcall *)(struct BattleFieldEnvironmentData_o *, Generator_BGMFromChangeBGMFunc_o *, __int64, _QWORD, Il2CppMethodPointer))FieldEnvData_k__BackingField->klass->vtable._6_AddBGM.method)(
      FieldEnvData_k__BackingField,
      v11,
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
    sub_1B4D1EC(this, bgmEnt);
  }
}


// local variable allocation has failed, the output may be wrong!
BgmEntity_o *__fastcall BattleLogicFunction__ChangeBgmSvt(
        BattleLogicFunction_o *this,
        int32_t uniqueID,
        BattleActionData_o *actionData,
        const MethodInfo *method)
{
  long double v4; // q0
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x1
  __int64 v12; // x1
  __int64 v13; // x1
  __int64 v14; // x1
  __int64 v15; // x1
  BgmEntity_o *result; // x0
  __int64 v17; // x0
  __int64 v18; // x0
  DataManager_o *MasterData_object; // x0
  struct BattleSkillInfoData_o *skillInfo; // x8
  SkillLvMaster_o *v21; // x22
  struct BattleSkillInfoData_o *v22; // x8
  SkillLvEntity_o *v23; // x22
  DataMasterBase_TMaster__TEntity__PKType__o *v24; // x20
  BattleData_o *data; // x8
  System_Collections_Generic_List_object__o *v26; // x21
  System_Int32_array *v27; // x19
  int32_t v28; // w22
  int32_t v29; // w23
  int64_t m_CancellationTokenSource_low; // x24
  bool IsOpen; // w23
  __int64 v32; // x8
  Il2CppObject *entity; // [xsp+8h] [xbp-68h] BYREF

  if ( (byte_49BDBC0 & 1) == 0 )
  {
    sub_1B4CF90(&Method_System_Array_IndexOf_int___, *(_QWORD *)&uniqueID);
    sub_1B4CF90(&CondType_TypeInfo, v8);
    sub_1B4CF90(&Method_DataManager_GetMasterData_BgmMaster___, v9);
    sub_1B4CF90(&Method_DataManager_GetMasterData_SkillLvMaster___, v10);
    sub_1B4CF90(&Method_DataMasterBase_BgmMaster__BgmEntity__int__TryGetEntity__, v11);
    sub_1B4CF90(&Method_System_Collections_Generic_List_SkillLvEntity_SvtChangeBgm__get_Count__, v12);
    sub_1B4CF90(&Method_System_Collections_Generic_List_SkillLvEntity_SvtChangeBgm__get_Item__, v13);
    sub_1B4CF90(&Method_SingletonMonoBehaviour_DataManager__getInstance__, v14);
    sub_1B4CF90(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v15);
    byte_49BDBC0 = 1;
  }
  result = 0LL;
  entity = 0LL;
  if ( uniqueID != -1 && actionData )
  {
    v17 = *((_QWORD *)Method_SingletonMonoBehaviour_DataManager__getInstance__ + 4);
    if ( (*(_BYTE *)(v17 + 309) & 1) == 0 )
      v17 = sub_1B9D620(v4);
    v18 = *(_QWORD *)(*(_QWORD *)(v17 + 192) + 16LL);
    if ( (*(_BYTE *)(v18 + 309) & 1) == 0 )
      v18 = sub_1B9D620(v4);
    MasterData_object = **(DataManager_o ***)(v18 + 184);
    if ( !MasterData_object )
      goto LABEL_35;
    MasterData_object = (DataManager_o *)DataManager__GetMasterData_object_(
                                           MasterData_object,
                                           (const MethodInfo_2F01B24 *)Method_DataManager_GetMasterData_SkillLvMaster___);
    skillInfo = actionData->fields.skillInfo;
    if ( !skillInfo )
      goto LABEL_35;
    v21 = (SkillLvMaster_o *)MasterData_object;
    MasterData_object = (DataManager_o *)((__int64 (__fastcall *)(struct BattleSkillInfoData_o *, Il2CppMethodPointer))skillInfo->klass->vtable._5_get_skillId.method)(
                                           actionData->fields.skillInfo,
                                           skillInfo->klass->vtable._6_get_IndividualityArray.methodPtr);
    v22 = actionData->fields.skillInfo;
    if ( !v22 )
      goto LABEL_35;
    if ( !v21 )
      goto LABEL_35;
    v23 = SkillLvMaster__GetEntity(v21, (int32_t)MasterData_object, v22->fields.skilllv, 0LL);
    MasterData_object = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37B4410 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !MasterData_object )
      goto LABEL_35;
    MasterData_object = (DataManager_o *)DataManager__GetMasterData_object_(
                                           MasterData_object,
                                           (const MethodInfo_2F01B24 *)Method_DataManager_GetMasterData_BgmMaster___);
    if ( !v23 )
      goto LABEL_35;
    v24 = (DataMasterBase_TMaster__TEntity__PKType__o *)MasterData_object;
    MasterData_object = (DataManager_o *)SkillLvEntity__GetSvtChangeBgm(v23, 0LL);
    data = this->fields.data;
    if ( !data )
      goto LABEL_35;
    v26 = (System_Collections_Generic_List_object__o *)MasterData_object;
    MasterData_object = (DataManager_o *)BattleData__getPlayerServantData(data, uniqueID, 0LL);
    if ( !MasterData_object )
      goto LABEL_35;
    MasterData_object = (DataManager_o *)BattleServantData__getIndividualities(
                                           (BattleServantData_o *)MasterData_object,
                                           0LL,
                                           1,
                                           0,
                                           0LL);
    if ( !v26 )
      goto LABEL_35;
    if ( v26->fields._size >= 1 )
    {
      v27 = (System_Int32_array *)MasterData_object;
      v28 = 0;
      while ( 1 )
      {
        MasterData_object = (DataManager_o *)System_Collections_Generic_List_object___get_Item(
                                               v26,
                                               v28,
                                               (const MethodInfo_357FF0C *)Method_System_Collections_Generic_List_SkillLvEntity_SvtChangeBgm__get_Item__);
        if ( !MasterData_object )
          break;
        if ( System_Array__IndexOf_int_(
               v27,
               MasterData_object->fields.m_CachedPtr,
               (const MethodInfo_2FFB2B4 *)Method_System_Array_IndexOf_int___) != -1 )
        {
          MasterData_object = (DataManager_o *)System_Collections_Generic_List_object___get_Item(
                                                 v26,
                                                 v28,
                                                 (const MethodInfo_357FF0C *)Method_System_Collections_Generic_List_SkillLvEntity_SvtChangeBgm__get_Item__);
          if ( !MasterData_object )
            break;
          v29 = *((_DWORD *)&MasterData_object->fields.UnityEngine_Behaviour_Fields + 1);
          MasterData_object = (DataManager_o *)System_Collections_Generic_List_object___get_Item(
                                                 v26,
                                                 v28,
                                                 (const MethodInfo_357FF0C *)Method_System_Collections_Generic_List_SkillLvEntity_SvtChangeBgm__get_Item__);
          if ( !MasterData_object )
            break;
          m_CancellationTokenSource_low = SLODWORD(MasterData_object->fields.m_CancellationTokenSource);
          if ( !CondType_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(CondType_TypeInfo);
          IsOpen = CondType__IsOpen(46, v29, m_CancellationTokenSource_low, 0, 0LL, 0LL);
          MasterData_object = (DataManager_o *)System_Collections_Generic_List_object___get_Item(
                                                 v26,
                                                 v28,
                                                 (const MethodInfo_357FF0C *)Method_System_Collections_Generic_List_SkillLvEntity_SvtChangeBgm__get_Item__);
          if ( !MasterData_object || !v24 )
            break;
          if ( IsOpen )
            v32 = 32LL;
          else
            v32 = 28LL;
          if ( DataMasterBase_object__object__int___TryGetEntity(
                 v24,
                 &entity,
                 *(_DWORD *)((char *)&MasterData_object->klass + v32),
                 (const MethodInfo_319D9E8 *)Method_DataMasterBase_BgmMaster__BgmEntity__int__TryGetEntity__) )
          {
            return (BgmEntity_o *)entity;
          }
        }
        if ( ++v28 >= v26->fields._size )
          return (BgmEntity_o *)entity;
      }
LABEL_35:
      sub_1B4D1EC(MasterData_object, *(_QWORD *)&uniqueID);
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

  if ( (byte_49BDBC8 & 1) == 0 )
  {
    sub_1B4CF90(&BattleActionData_MasterBuffData_TypeInfo, action);
    byte_49BDBC8 = 1;
  }
  v12 = (BattleActionData_MasterBuffData_o *)sub_1B4D1DC(BattleActionData_MasterBuffData_TypeInfo);
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
    sub_1B4D1EC(FunctionObject, v16);
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

  if ( (byte_49BDBCB & 1) == 0 )
  {
    sub_1B4CF90(&BattleActionData_TypeInfo, procArg);
    byte_49BDBCB = 1;
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
    Param = DataVals__GetParam(baseVals, 173, 0, 0LL);
    v13 = DataVals__GetParam(baseVals, 174, 0, 0LL);
    v14 = DataVals__GetParam(baseVals, 176, 0, 0LL) != 0;
    v15 = BattleServantData__AddBattlePoint(v10, Param, v13, v14, 0LL);
    BattlePointData = BattleServantData__GetBattlePointData(v10, Param, 0LL);
    if ( BattlePointData )
      v17 = !BattlePointData->fields._IsShowedEffectAfterLastChanged_k__BackingField;
    else
      v17 = 0;
    data = (BattleData_o *)DataVals__GetParam(baseVals, 175, 0, 0LL);
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
          v11 = (BattleActionData_o *)sub_1B4D1DC(BattleActionData_TypeInfo);
          BattleActionData___ctor(v11, 0LL);
          if ( v11 )
          {
            BattleActionData__setBuffData(v11, v24, baseVals, 0LL);
            return v11;
          }
        }
      }
LABEL_22:
      sub_1B4D1EC(data, procArg);
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
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  BattleData_o *data; // x0
  struct System_Int32_array *vals; // x8
  System_Collections_Generic_Dictionary_int__int__o *v11; // x20
  int v12; // w23
  il2cpp_array_size_t max_length; // w10
  unsigned int v14; // w9
  int32_t v15; // w21
  int32_t v16; // w22
  int32_t Item; // w0

  v4 = this;
  if ( (byte_49BDBCA & 1) == 0 )
  {
    sub_1B4CF90(&Method_System_Collections_Generic_Dictionary_int__int__Add__, funcEnt);
    sub_1B4CF90(&Method_System_Collections_Generic_Dictionary_int__int__ContainsKey__, v5);
    sub_1B4CF90(&Method_System_Collections_Generic_Dictionary_int__int__get_Item__, v6);
    this = (BattleLogicFunction_o *)sub_1B4CF90(&Method_System_Collections_Generic_Dictionary_int__int__set_Item__, v7);
    byte_49BDBCA = 1;
  }
  if ( BattleLogicFunction__CanCheckFuncBattleValue(this, funcEnt, method) )
  {
    data = v4->fields.data;
    if ( !data
      || (data = (BattleData_o *)BattleData__GetBattleValueDict(data, 0LL), !funcEnt)
      || (vals = funcEnt->fields.vals) == 0LL )
    {
LABEL_16:
      sub_1B4D1EC(data, v8);
    }
    v11 = (System_Collections_Generic_Dictionary_int__int__o *)data;
    v12 = 1;
    while ( 1 )
    {
      max_length = vals->max_length;
      v14 = v12 - 1;
      if ( v12 - 1 >= (int)max_length )
        break;
      if ( v14 >= max_length || v12 >= max_length )
        sub_1B4D1F4(data, v8);
      if ( v11 )
      {
        v15 = vals->m_Items[v14 + 1];
        v16 = vals->m_Items[v12 + 1];
        if ( System_Collections_Generic_Dictionary_int__int___ContainsKey(
               v11,
               v15,
               (const MethodInfo_31EE344 *)Method_System_Collections_Generic_Dictionary_int__int__ContainsKey__) )
        {
          Item = System_Collections_Generic_Dictionary_int__int___get_Item(
                   v11,
                   v15,
                   (const MethodInfo_31EE0BC *)Method_System_Collections_Generic_Dictionary_int__int__get_Item__);
          System_Collections_Generic_Dictionary_int__int___set_Item(
            v11,
            v15,
            Item + v16,
            (const MethodInfo_31EE144 *)Method_System_Collections_Generic_Dictionary_int__int__set_Item__);
        }
        else
        {
          System_Collections_Generic_Dictionary_int__int___Add(
            v11,
            v15,
            v16,
            (const MethodInfo_31EE158 *)Method_System_Collections_Generic_Dictionary_int__int__Add__);
        }
        vals = funcEnt->fields.vals;
        v12 += 2;
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
  if ( (byte_49BDBC3 & 1) == 0 )
  {
    this = (BattleLogicFunction_o *)sub_1B4CF90(&UnityEngine_Object_TypeInfo, args);
    byte_49BDBC3 = 1;
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
    sub_1B4D1EC(this, args);
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
    sub_1B4D1EC(this, *(_QWORD *)&faceId);
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
  __int64 v9; // x1
  __int64 v10; // x1
  struct BattleData_o *data; // x8
  BattleSkillInfoData_o *v12; // x24
  struct BattleData_o *v13; // x8
  unsigned int v14; // w0
  struct BattleData_o *v15; // x8
  struct BattleSkillInfoData_o *lastUsedPlayerSkillInfo_k__BackingField; // x8
  bool v17; // w26
  BattleLogicFunction_OnlyCheckFuncSideEffectFunctionArgument_o *v18; // x23
  struct BattleLogic_o *logic; // x8
  BattleLogicSkill_o *logicSkill; // x25
  int32_t v21; // w2
  const MethodInfo *v22; // x3
  int v23; // w8
  BattleLogicFunction_o *v24; // x24
  unsigned int v25; // w27
  __int64 v26; // x25
  struct BattleLogic_o *v27; // x8
  BattleActionData_o *v28; // x25
  BattleLogicFunction_FuncSideEffectFunctionArgument_o *FuncSideEffectArg; // x0
  BattleActionData_o *baseActionData; // [xsp+18h] [xbp-58h] BYREF

  v8 = this;
  if ( (byte_49BDBC7 & 1) == 0 )
  {
    sub_1B4CF90(&BattleSkillInfoData_TypeInfo, actionData);
    sub_1B4CF90(&int___TypeInfo, v9);
    this = (BattleLogicFunction_o *)sub_1B4CF90(
                                      &BattleLogicFunction_OnlyCheckFuncSideEffectFunctionArgument_TypeInfo,
                                      v10);
    byte_49BDBC7 = 1;
  }
  baseActionData = 0LL;
  data = v8->fields.data;
  if ( !data )
    goto LABEL_32;
  if ( !data->fields._lastUsedPlayerSkillInfo_k__BackingField )
    return;
  v12 = (BattleSkillInfoData_o *)sub_1B4D1DC(BattleSkillInfoData_TypeInfo);
  BattleSkillInfoData___ctor(v12, 0LL);
  if ( !actionData )
    goto LABEL_32;
  if ( !v12 )
    goto LABEL_32;
  v12->fields.svtUniqueId = actionData->fields.actorId;
  v13 = v8->fields.data;
  if ( !v13 )
    goto LABEL_32;
  this = (BattleLogicFunction_o *)v13->fields._lastUsedPlayerSkillInfo_k__BackingField;
  if ( !this )
    goto LABEL_32;
  v14 = ((__int64 (__fastcall *)(BattleLogicFunction_o *, void *))this->klass[1]._1.namespaze)(
          this,
          this->klass[1]._1.byval_arg.data);
  this = (BattleLogicFunction_o *)((__int64 (__fastcall *)(BattleSkillInfoData_o *, _QWORD, Il2CppMethodPointer))v12->klass->vtable._4_set_skillId.method)(
                                    v12,
                                    v14,
                                    v12->klass->vtable._5_get_skillId.methodPtr);
  v15 = v8->fields.data;
  if ( !v15 )
    goto LABEL_32;
  lastUsedPlayerSkillInfo_k__BackingField = v15->fields._lastUsedPlayerSkillInfo_k__BackingField;
  if ( !lastUsedPlayerSkillInfo_k__BackingField )
    goto LABEL_32;
  v12->fields.skilllv = lastUsedPlayerSkillInfo_k__BackingField->fields.skilllv;
  BattleSkillInfoData__UpdateSelectAddIndex(
    v12,
    lastUsedPlayerSkillInfo_k__BackingField->fields._SelectAddIndex_k__BackingField,
    0LL);
  if ( !args )
    goto LABEL_32;
  this = (BattleLogicFunction_o *)BattleLogicFunction_ProcListInArgs__get_FuncSideEffectArg(args, 0LL);
  v17 = this != 0LL;
  if ( this )
  {
    v18 = (BattleLogicFunction_OnlyCheckFuncSideEffectFunctionArgument_o *)sub_1B4D1DC(BattleLogicFunction_OnlyCheckFuncSideEffectFunctionArgument_TypeInfo);
    BattleLogicFunction_OnlyCheckFuncSideEffectFunctionArgument___ctor(v18, 0LL);
  }
  else
  {
    v18 = 0LL;
  }
  logic = v8->fields.logic;
  if ( !logic )
    goto LABEL_32;
  logicSkill = logic->fields.logicSkill;
  this = (BattleLogicFunction_o *)sub_1B4D038(int___TypeInfo, 1LL);
  if ( !this )
    goto LABEL_32;
  if ( !LODWORD(this->fields.logic) )
    goto LABEL_33;
  LODWORD(this->fields.logictarget) = actionData->fields.actorId;
  if ( !logicSkill
    || (this = (BattleLogicFunction_o *)BattleLogicSkill__taskSkill(
                                          logicSkill,
                                          v12,
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
    sub_1B4D1EC(this, actionData);
  }
  v23 = (int)this->fields.logic;
  v24 = this;
  if ( v23 >= 1 )
  {
    v25 = 0;
    while ( v25 < v23 )
    {
      v26 = *((_QWORD *)&v24->fields.logictarget + (int)v25);
      if ( !v26 )
        goto LABEL_32;
      *(_QWORD *)(v26 + 200) = v18;
      *(_BYTE *)(v26 + 193) = v17;
      sub_1B4CF34((CGThumbnailListItem_o *)(v26 + 200), (int32_t)v18, v21, v22);
      v27 = v8->fields.logic;
      if ( !v27 )
        goto LABEL_32;
      this = (BattleLogicFunction_o *)v27->fields.logicSkill;
      if ( !this )
        goto LABEL_32;
      v28 = BattleLogicSkill__createSkillData_44336572(
              (BattleLogicSkill_o *)this,
              (BattleLogicTask_o *)v26,
              1,
              baseVals,
              &baseActionData,
              0LL);
      BattleActionData__addAction(actionData, v28, 0LL);
      if ( v28 )
        actionData->fields.isSuccessSkillCopyFunction = 1;
      v23 = (int)v24->fields.logic;
      if ( (int)++v25 >= v23 )
        goto LABEL_29;
    }
LABEL_33:
    sub_1B4D1F4(this, actionData);
  }
LABEL_29:
  FuncSideEffectArg = BattleLogicFunction_ProcListInArgs__get_FuncSideEffectArg(args, 0LL);
  if ( FuncSideEffectArg )
    BattleLogicFunction_FuncSideEffectFunctionArgument__AddTarget_44230060(
      FuncSideEffectArg,
      (BattleLogicFunction_FuncSideEffectFunctionArgument_o *)v18,
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
  __int64 v10; // x1
  __int64 v11; // x1
  __int64 v12; // x1
  _BOOL4 isEnemy; // w26
  int32_t ServantIndex; // w22
  BattleData_o *data; // x24
  MoveToSubMemberWaveTurnEvent_o *v16; // x25
  bool v17; // w24
  int32_t v18; // w0
  int32_t uniqueId; // w25
  int32_t v20; // w26
  RestockServantLogicByMoveToSubMember_o *v21; // x23
  BattleActionData_o *v22; // x21

  v9 = this;
  if ( (byte_49BDBA3 & 1) == 0 )
  {
    sub_1B4CF90(&Method_BasicHelper_IndexValue_int____75497056, targetServantData);
    sub_1B4CF90(&BattleActionData_TypeInfo, v10);
    sub_1B4CF90(&MoveToSubMemberWaveTurnEvent_TypeInfo, v11);
    this = (BattleLogicFunction_o *)sub_1B4CF90(&RestockServantLogicByMoveToSubMember_TypeInfo, v12);
    byte_49BDBA3 = 1;
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
  BattleData__SubBuffFromPT_43219928((BattleData_o *)this, targetServantData, 0LL);
  this = (BattleLogicFunction_o *)v9->fields.data;
  if ( !this )
    goto LABEL_13;
  BattleData__SubBuffExitSvt((BattleData_o *)this, targetServantData, 0LL);
  this = (BattleLogicFunction_o *)v9->fields.data;
  if ( !this )
    goto LABEL_13;
  targetServantData->fields.deckIndex = BattleData__GetSubServantUsableDeckIndex((BattleData_o *)this, isEnemy, 0LL);
  data = v9->fields.data;
  v16 = (MoveToSubMemberWaveTurnEvent_o *)sub_1B4D1DC(MoveToSubMemberWaveTurnEvent_TypeInfo);
  MoveToSubMemberWaveTurnEvent___ctor(v16, data, 0LL);
  BattleServantData__RegisterWaveTurnEvent(targetServantData, (ServantWaveTurnEvent_o *)v16, 0LL);
  if ( !funcEnt )
    goto LABEL_13;
  v17 = isEnemy;
  v18 = BasicHelper__IndexValue_int_(
          funcEnt->fields.vals,
          0,
          0,
          (const MethodInfo_2EF0318 *)Method_BasicHelper_IndexValue_int____75497056);
  uniqueId = targetServantData->fields.uniqueId;
  v20 = v18;
  v21 = (RestockServantLogicByMoveToSubMember_o *)sub_1B4D1DC(RestockServantLogicByMoveToSubMember_TypeInfo);
  RestockServantLogicByMoveToSubMember___ctor(v21, ServantIndex, v17, v20, uniqueId, 0LL);
  this = (BattleLogicFunction_o *)v9->fields.data;
  if ( !this
    || (BattleData__AppendRestockServantLogic((BattleData_o *)this, (RestockServantLogic_o *)v21, 0LL),
        v22 = (BattleActionData_o *)sub_1B4D1DC(BattleActionData_TypeInfo),
        BattleActionData___ctor(v22, 0LL),
        !v22) )
  {
LABEL_13:
    sub_1B4D1EC(this, targetServantData);
  }
  BattleActionData__AddNewMoveToSubMember(v22, ServantIndex, targetServantData->fields.uniqueId, funcIndex, 1, 0LL);
  return v22;
}


void __fastcall BattleLogicFunction__FunctionQuickChangeBG(
        BattleLogicFunction_o *this,
        BattleLogicFunction_ProcListInArgs_o *args,
        Generator_Background_o *bgGenerator,
        const MethodInfo *method)
{
  BattleLogicFunction_o *v6; // x19
  struct BattleData_o *data; // x8
  __int64 v8; // x1
  struct BattleData_o *v9; // x8
  BattlePerformance_o *perf; // x21
  struct UnityEngine_Vector3_StaticFields *static_fields; // x8
  UnityEngine_Object_o *logic; // x21
  struct BattleLogicFunction_FunctionArgument_o *externalArg; // x8
  UnityEngine_Vector3_o zeroVector; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v15; // 0:s3.4,4:s4.4,8:s5.4

  v6 = this;
  if ( (byte_49BDBC4 & 1) == 0 )
  {
    this = (BattleLogicFunction_o *)sub_1B4CF90(&UnityEngine_Object_TypeInfo, args);
    byte_49BDBC4 = 1;
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
  v9 = v6->fields.data;
  if ( v9 )
  {
    perf = v9->fields.perf;
    if ( perf )
    {
      if ( !byte_49B5361 )
      {
        sub_1B4CF90(&UnityEngine_Vector3_TypeInfo, v8);
        byte_49B5361 = 1;
      }
      static_fields = UnityEngine_Vector3_TypeInfo->static_fields;
      zeroVector = static_fields->zeroVector;
      v15.fields.x = static_fields->zeroVector.fields.x;
      v15.fields.y = zeroVector.fields.y;
      v15.fields.z = zeroVector.fields.z;
      BattlePerformance__ChangeBg(perf, static_fields->zeroVector, v15, 0, 0, 0LL, 0LL);
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
    sub_1B4D1EC(this, args);
  }
}


void __fastcall BattleLogicFunction__FunctionRevival(
        BattleLogicFunction_o *this,
        BattleActionData_o *actionData,
        BattleLogicFunctionProcess_FunctionTargetCheck_o *funcTarget,
        const MethodInfo *method)
{
  __int64 v7; // x1
  SkillLvEntity_o *Master_object; // x0
  __int64 v9; // x1
  SkillLvMaster_o *v10; // x22
  struct BattleSkillInfoData_o *skillInfo; // x8
  SkillLvEntity_o *v12; // x22
  const MethodInfo *v13; // x3

  if ( (byte_49BDBB8 & 1) == 0 )
  {
    sub_1B4CF90(&Method_DataManager_GetMaster_SkillLvMaster___, actionData);
    sub_1B4CF90(&DataManager_TypeInfo, v7);
    byte_49BDBB8 = 1;
  }
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_object = (SkillLvEntity_o *)DataManager__GetMaster_object_((const MethodInfo_2F01AD0 *)Method_DataManager_GetMaster_SkillLvMaster___);
  if ( !actionData
    || (v10 = (SkillLvMaster_o *)Master_object, (Master_object = (SkillLvEntity_o *)actionData->fields.skillInfo) == 0LL)
    || (Master_object = (SkillLvEntity_o *)((__int64 (__fastcall *)(SkillLvEntity_o *, void *))Master_object->klass->vtable._5_CreatePrimaryKey.method)(
                                             Master_object,
                                             Master_object->klass[1]._1.image),
        (skillInfo = actionData->fields.skillInfo) == 0LL)
    || !v10
    || (Master_object = SkillLvMaster__GetEntity(v10, (int32_t)Master_object, skillInfo->fields.skilllv, 0LL)) == 0LL )
  {
    sub_1B4D1EC(Master_object, v9);
  }
  v12 = Master_object;
  if ( SkillLvEntity__IsRevivalUp(Master_object, 0LL) || SkillLvEntity__IsRevivalUnder(v12, 0LL) )
    BattleLogicFunction__FunctionRevivalForMultiTarget(this, actionData, funcTarget, v13);
  else
    BattleLogicFunction__FunctionRevivalInDetail(this, actionData, funcTarget, v13);
}


void __fastcall BattleLogicFunction__FunctionRevivalForMultiTarget(
        BattleLogicFunction_o *this,
        BattleActionData_o *actionData,
        BattleLogicFunctionProcess_FunctionTargetCheck_o *funcTarget,
        const MethodInfo *method)
{
  BattleLogicFunction_o *v6; // x20
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  DataVals_o *logictarget; // x21
  FunctionEntity_o *funcEnt; // x22
  struct BattleLogicFunctionProcess_FunctionUnitCheck_o *funcUnit_k__BackingField; // x8
  int32_t v13; // w23
  bool IsCommandSideEffect; // w24
  long double v15; // q0
  __int64 v16; // x8
  __int64 v17; // x0
  SkillLvMaster_o *v18; // x25
  struct BattleSkillInfoData_o *skillInfo; // x8
  SkillLvEntity_o *v20; // x27
  bool IsRevivalUp; // w0
  SkillLvEntity_o *v22; // x29
  BattleActorControl_o *PartsActor; // x26
  BattleActionData_o *v24; // x25
  SkillLvEntity_o *v25; // x28
  int32_t targetId; // w1
  const MethodInfo *v27; // x6
  BattleActionData_o *RevivalHealData; // x0
  BattleActorControl_o *v29; // x26
  BattleServantData_o *battleSvtData; // x0
  BattleActionData_o *v31; // x27
  int32_t v32; // w1
  const MethodInfo *v33; // x6
  BattleActionData_o *v34; // x0

  v6 = this;
  if ( (byte_49BDBB9 & 1) == 0 )
  {
    sub_1B4CF90(&BattleActionData_TypeInfo, actionData);
    sub_1B4CF90(&Method_DataManager_GetMasterData_SkillLvMaster___, v7);
    sub_1B4CF90(&UnityEngine_Object_TypeInfo, v8);
    this = (BattleLogicFunction_o *)sub_1B4CF90(&Method_SingletonMonoBehaviour_DataManager__getInstance__, v9);
    byte_49BDBB9 = 1;
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
                                    0LL);
  funcUnit_k__BackingField = funcTarget->fields._funcUnit_k__BackingField;
  if ( !funcUnit_k__BackingField )
    goto LABEL_56;
  v13 = (int)this;
  this = (BattleLogicFunction_o *)funcUnit_k__BackingField->fields._procArg_k__BackingField;
  if ( !this )
    goto LABEL_56;
  IsCommandSideEffect = BattleLogicFunction_ProcListInArgs__get_IsCommandSideEffect(
                          (BattleLogicFunction_ProcListInArgs_o *)this,
                          0LL);
  v16 = *((_QWORD *)Method_SingletonMonoBehaviour_DataManager__getInstance__ + 4);
  if ( (*(_BYTE *)(v16 + 309) & 1) == 0 )
    v16 = sub_1B9D620(v15);
  v17 = *(_QWORD *)(*(_QWORD *)(v16 + 192) + 16LL);
  if ( (*(_BYTE *)(v17 + 309) & 1) == 0 )
    v17 = sub_1B9D620(v15);
  this = **(BattleLogicFunction_o ***)(v17 + 184);
  if ( !this )
    goto LABEL_56;
  this = (BattleLogicFunction_o *)DataManager__GetMasterData_object_(
                                    (DataManager_o *)this,
                                    (const MethodInfo_2F01B24 *)Method_DataManager_GetMasterData_SkillLvMaster___);
  if ( !actionData )
    goto LABEL_56;
  v18 = (SkillLvMaster_o *)this;
  this = (BattleLogicFunction_o *)actionData->fields.skillInfo;
  if ( !this )
    goto LABEL_56;
  this = (BattleLogicFunction_o *)((__int64 (__fastcall *)(BattleLogicFunction_o *, void *))this->klass[1]._1.namespaze)(
                                    this,
                                    this->klass[1]._1.byval_arg.data);
  skillInfo = actionData->fields.skillInfo;
  if ( !skillInfo )
    goto LABEL_56;
  if ( !v18 )
    goto LABEL_56;
  this = (BattleLogicFunction_o *)SkillLvMaster__GetEntity(v18, (int32_t)this, skillInfo->fields.skilllv, 0LL);
  if ( !this )
    goto LABEL_56;
  v20 = (SkillLvEntity_o *)this;
  IsRevivalUp = SkillLvEntity__IsRevivalUp((SkillLvEntity_o *)this, 0LL);
  v22 = IsRevivalUp ? v20 : 0LL;
  if ( IsRevivalUp )
  {
    this = (BattleLogicFunction_o *)v6->fields.data;
    if ( !this )
      goto LABEL_56;
    PartsActor = BattleData__GetPartsActor((BattleData_o *)this, 0, 0LL);
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    this = (BattleLogicFunction_o *)UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)PartsActor, 0LL, 0LL);
    v24 = 0LL;
    if ( ((unsigned __int8)this & 1) != 0 )
      v25 = v22;
    else
      v25 = 0LL;
    if ( ((unsigned __int8)this & 1) != 0 )
    {
      if ( !PartsActor )
        goto LABEL_56;
      this = (BattleLogicFunction_o *)PartsActor->fields.battleSvtData;
      if ( this )
      {
        this = (BattleLogicFunction_o *)BattleServantData__isAlive((BattleServantData_o *)this, 0, 0LL);
        if ( ((unsigned __int8)this & 1) != 0 )
        {
          v24 = 0LL;
        }
        else
        {
          v24 = (BattleActionData_o *)sub_1B4D1DC(BattleActionData_TypeInfo);
          BattleActionData___ctor(v24, 0LL);
          if ( !v24 )
            goto LABEL_56;
          v24->fields.actorId = actionData->fields.actorId;
          v24->fields.targetId = PartsActor->fields.uniqueID;
          BattleActionData__setStateActors(v24, 0LL);
          targetId = v24->fields.targetId;
          v24->fields.motionId = 2201;
          RevivalHealData = BattleLogicFunction__createRevivalHealData(
                              v6,
                              targetId,
                              funcEnt,
                              logictarget,
                              v13,
                              IsCommandSideEffect,
                              v27);
          BattleActionData__addAction(v24, RevivalHealData, 0LL);
          this = (BattleLogicFunction_o *)PartsActor->fields.battleSvtData;
          if ( !this )
            goto LABEL_56;
          BattleServantData__ProcessSkillRevive((BattleServantData_o *)this, 0LL);
        }
        v20 = v25;
      }
      else
      {
        v24 = 0LL;
        v20 = v22;
      }
    }
    if ( !v20 )
      goto LABEL_56;
  }
  else
  {
    v24 = 0LL;
  }
  if ( !SkillLvEntity__IsRevivalUnder(v20, 0LL) )
    goto LABEL_48;
  this = (BattleLogicFunction_o *)v6->fields.data;
  if ( !this )
LABEL_56:
    sub_1B4D1EC(this, actionData);
  v29 = BattleData__GetPartsActor((BattleData_o *)this, 2, 0LL);
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  this = (BattleLogicFunction_o *)UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)v29, 0LL, 0LL);
  if ( ((unsigned __int8)this & 1) != 0 )
  {
    if ( v29 )
    {
      battleSvtData = v29->fields.battleSvtData;
      if ( !battleSvtData || BattleServantData__isAlive(battleSvtData, 0, 0LL) )
        goto LABEL_48;
      v31 = (BattleActionData_o *)sub_1B4D1DC(BattleActionData_TypeInfo);
      BattleActionData___ctor(v31, 0LL);
      if ( v31 )
      {
        v31->fields.actorId = actionData->fields.actorId;
        v31->fields.targetId = v29->fields.uniqueID;
        BattleActionData__setStateActors(v31, 0LL);
        v32 = v31->fields.targetId;
        v31->fields.motionId = 2202;
        v34 = BattleLogicFunction__createRevivalHealData(v6, v32, funcEnt, logictarget, v13, IsCommandSideEffect, v33);
        BattleActionData__addAction(v31, v34, 0LL);
        this = (BattleLogicFunction_o *)v29->fields.battleSvtData;
        if ( this )
        {
          BattleServantData__ProcessSkillRevive((BattleServantData_o *)this, 0LL);
          if ( v24 )
            BattleActionData__AddAfterActionData(v24, v31, 0, 0LL);
          else
            v24 = v31;
          goto LABEL_49;
        }
      }
    }
    goto LABEL_56;
  }
LABEL_48:
  if ( v24 )
LABEL_49:
    BattleActionData__AddAfterActionData(actionData, v24, 0, 0LL);
}


void __fastcall BattleLogicFunction__FunctionRevivalInDetail(
        BattleLogicFunction_o *this,
        BattleActionData_o *actionData,
        BattleLogicFunctionProcess_FunctionTargetCheck_o *funcTarget,
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
  __int64 v19; // x1
  __int64 v20; // x1
  __int64 v21; // x1
  int32_t v22; // w2
  const MethodInfo *v23; // x3
  __int64 procArg_k__BackingField; // x0
  __int64 v25; // x1
  int32_t v26; // w2
  const MethodInfo *v27; // x3
  struct BattleLogicFunctionProcess_FunctionUnitCheck_o *funcUnit_k__BackingField; // x8
  int32_t v29; // w2
  const MethodInfo *v30; // x3
  struct BattleLogicFunctionProcess_FunctionUnitCheck_o *v31; // x8
  System_Collections_Generic_List_object__o *v32; // x20
  int32_t v33; // w2
  const MethodInfo *v34; // x3
  SkillLvMaster_o *v35; // x20
  _DWORD *properties; // x8
  System_Collections_ICollection_o *RevivalTargetArray; // x20
  _BOOL8 IsNullOrEmpty; // x0
  const MethodInfo *v39; // x2
  System_Collections_Generic_IEnumerable_TSource__o *DeadAnimBeDoneSvtArray; // x21
  BattleLogicFunction___c_c *v41; // x8
  System_Func_object__int__o *_9__110_0; // x22
  Il2CppObject *v43; // x23
  struct BattleLogicFunction___c_StaticFields *static_fields; // x0
  int32_t v45; // w2
  const MethodInfo *v46; // x3
  System_Collections_Generic_IEnumerable_IGrouping_TKey__TSource___o *v47; // x0
  BattleLogicFunction___c_c *v48; // x8
  System_Collections_Generic_IEnumerable_TSource__o *v49; // x21
  System_Func_object__int__o *_9__110_1; // x22
  Il2CppObject *v51; // x23
  struct BattleLogicFunction___c_StaticFields *v52; // x0
  int32_t v53; // w2
  const MethodInfo *v54; // x3
  System_Func_object__object__o *_9__110_2; // x23
  Il2CppObject *v56; // x24
  struct BattleLogicFunction___c_StaticFields *v57; // x0
  int32_t v58; // w2
  const MethodInfo *v59; // x3
  int32_t v60; // w2
  const MethodInfo *v61; // x3
  const MethodInfo *v62; // x2
  long double inited; // q0
  void *monitor; // x8
  unsigned __int64 v65; // x28
  int32_t v66; // w23
  _QWORD *v67; // x24
  __int64 v68; // x8
  __int64 v69; // x0
  __int64 v70; // x0
  BattleLogicFunction___c__DisplayClass110_0_o *v71; // x4
  const MethodInfo *v72; // x5
  __int64 v73; // x8
  __int64 v74; // x24
  unsigned __int64 v75; // x21
  __int64 v76; // x20
  BattleServantData_o *v77; // x25
  const MethodInfo *v78; // x6
  int32_t v79; // w27
  BattleActionData_o *v80; // x26
  int32_t v81; // w2
  const MethodInfo *v82; // x3
  int32_t v83; // w2
  const MethodInfo *v84; // x3
  __int64 v85; // x8
  _QWORD *v86; // x9
  __int64 v87; // x10
  __int64 v88; // x8
  System_Collections_ICollection_o *v89; // [xsp+8h] [xbp-B8h]
  System_Collections_Generic_Dictionary_K__V__o *dic; // [xsp+10h] [xbp-B0h]
  int32_t expelledUniqueId[2]; // [xsp+18h] [xbp-A8h] BYREF
  CGThumbnailListItem_o v92; // [xsp+20h] [xbp-A0h] BYREF

  if ( (byte_49BDBBB & 1) == 0 )
  {
    sub_1B4CF90(&Method_System_Array_Empty_BattleServantData___, actionData);
    sub_1B4CF90(&Method_BasicHelper_GetValue_int__BattleServantData_____, v7);
    sub_1B4CF90(&Method_DataManager_GetMaster_SkillLvMaster___, v8);
    sub_1B4CF90(&DataManager_TypeInfo, v9);
    sub_1B4CF90(&Method_System_Linq_Enumerable_GroupBy_BattleServantData__int___, v10);
    sub_1B4CF90(
      &Method_System_Linq_Enumerable_ToDictionary_IGrouping_int__BattleServantData___int__BattleServantData_____,
      v11);
    sub_1B4CF90(&System_Func_IGrouping_int__BattleServantData___int__TypeInfo, v12);
    sub_1B4CF90(&System_Func_BattleServantData__int__TypeInfo, v13);
    sub_1B4CF90(&System_Func_IGrouping_int__BattleServantData___BattleServantData____TypeInfo, v14);
    sub_1B4CF90(&Method_System_Collections_Generic_List_BattleServantData__Add__, v15);
    sub_1B4CF90(&Method_System_Collections_Generic_List_BattleServantData___ctor__, v16);
    sub_1B4CF90(&System_Collections_Generic_List_BattleServantData__TypeInfo, v17);
    sub_1B4CF90(&Method_BattleLogicFunction___c__FunctionRevivalInDetail_b__110_0__, v18);
    sub_1B4CF90(&Method_BattleLogicFunction___c__FunctionRevivalInDetail_b__110_1__, v19);
    sub_1B4CF90(&Method_BattleLogicFunction___c__FunctionRevivalInDetail_b__110_2__, v20);
    sub_1B4CF90(&BattleLogicFunction___c_TypeInfo, v21);
    byte_49BDBBB = 1;
  }
  *(_QWORD *)expelledUniqueId = 0LL;
  v92.klass = (CGThumbnailListItem_c *)actionData;
  memset(&v92.monitor, 0, 56);
  sub_1B4CF34(&v92, (int32_t)actionData, (int32_t)funcTarget, method);
  v92.monitor = this;
  sub_1B4CF34((CGThumbnailListItem_o *)&v92.monitor, (int32_t)this, v22, v23);
  if ( !funcTarget )
    goto LABEL_67;
  funcUnit_k__BackingField = funcTarget->fields._funcUnit_k__BackingField;
  if ( !funcUnit_k__BackingField )
    goto LABEL_67;
  v92.fields.sortValue0 = (int64_t)funcUnit_k__BackingField->fields._dataVals_k__BackingField;
  sub_1B4CF34((CGThumbnailListItem_o *)&v92.fields.sortValue0, v92.fields.sortValue0, v26, v27);
  if ( !v92.fields.sortValue0 )
    goto LABEL_67;
  *(_QWORD *)&v92.fields.sortIndex = *(_QWORD *)(v92.fields.sortValue0 + 40);
  sub_1B4CF34((CGThumbnailListItem_o *)&v92.fields.sortIndex, v92.fields.sortIndex, v29, v30);
  procArg_k__BackingField = (__int64)funcTarget->fields._funcUnit_k__BackingField;
  if ( !procArg_k__BackingField )
    goto LABEL_67;
  procArg_k__BackingField = BattleLogicFunctionProcess_FunctionUnitCheck__get_FuncIndex(
                              (BattleLogicFunctionProcess_FunctionUnitCheck_o *)procArg_k__BackingField,
                              0LL);
  v92.fields.index = procArg_k__BackingField;
  v31 = funcTarget->fields._funcUnit_k__BackingField;
  if ( !v31 )
    goto LABEL_67;
  procArg_k__BackingField = (__int64)v31->fields._procArg_k__BackingField;
  if ( !procArg_k__BackingField )
    goto LABEL_67;
  LOBYTE(v92.fields.sortValue0B) = BattleLogicFunction_ProcListInArgs__get_IsCommandSideEffect(
                                     (BattleLogicFunction_ProcListInArgs_o *)procArg_k__BackingField,
                                     0LL);
  v32 = (System_Collections_Generic_List_object__o *)sub_1B4D1DC(System_Collections_Generic_List_BattleServantData__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v32,
    (const MethodInfo_357F9A8 *)Method_System_Collections_Generic_List_BattleServantData___ctor__);
  v92.fields.sortValue1 = (int64_t)v32;
  sub_1B4CF34((CGThumbnailListItem_o *)&v92.fields.sortValue1, (int32_t)v32, v33, v34);
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  procArg_k__BackingField = (__int64)DataManager__GetMaster_object_((const MethodInfo_2F01AD0 *)Method_DataManager_GetMaster_SkillLvMaster___);
  if ( !v92.klass )
    goto LABEL_67;
  v35 = (SkillLvMaster_o *)procArg_k__BackingField;
  procArg_k__BackingField = (__int64)v92.klass->_1.properties;
  if ( !procArg_k__BackingField )
    goto LABEL_67;
  procArg_k__BackingField = (*(__int64 (__fastcall **)(__int64, _QWORD))(*(_QWORD *)procArg_k__BackingField + 392LL))(
                              procArg_k__BackingField,
                              *(_QWORD *)(*(_QWORD *)procArg_k__BackingField + 400LL));
  if ( !v92.klass )
    goto LABEL_67;
  properties = v92.klass->_1.properties;
  if ( !properties )
    goto LABEL_67;
  if ( !v35 )
    goto LABEL_67;
  procArg_k__BackingField = (__int64)SkillLvMaster__GetEntity(v35, procArg_k__BackingField, properties[9], 0LL);
  if ( !procArg_k__BackingField )
    goto LABEL_67;
  RevivalTargetArray = (System_Collections_ICollection_o *)SkillLvEntity__GetRevivalTargetArray(
                                                             (SkillLvEntity_o *)procArg_k__BackingField,
                                                             0LL);
  IsNullOrEmpty = BasicHelper__IsNullOrEmpty(RevivalTargetArray, 0LL);
  if ( IsNullOrEmpty )
    goto LABEL_66;
  procArg_k__BackingField = v92.fields.sortValue0;
  if ( !v92.fields.sortValue0 )
    goto LABEL_67;
  v92.fields.selectNum = DataVals__GetValue((DataVals_o *)v92.fields.sortValue0, 0LL);
  procArg_k__BackingField = (__int64)this->fields.data;
  if ( !procArg_k__BackingField )
    goto LABEL_67;
  DeadAnimBeDoneSvtArray = (System_Collections_Generic_IEnumerable_TSource__o *)BattleData__GetDeadAnimBeDoneSvtArray(
                                                                                  (BattleData_o *)procArg_k__BackingField,
                                                                                  0LL);
  v41 = BattleLogicFunction___c_TypeInfo;
  if ( !BattleLogicFunction___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BattleLogicFunction___c_TypeInfo);
    v41 = BattleLogicFunction___c_TypeInfo;
  }
  _9__110_0 = (System_Func_object__int__o *)v41->static_fields->__9__110_0;
  if ( !_9__110_0 )
  {
    if ( !v41->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v41);
      v41 = BattleLogicFunction___c_TypeInfo;
    }
    v43 = (Il2CppObject *)v41->static_fields->__9;
    _9__110_0 = (System_Func_object__int__o *)sub_1B4D1DC(System_Func_BattleServantData__int__TypeInfo);
    System_Func_object__int____ctor(
      _9__110_0,
      v43,
      Method_BattleLogicFunction___c__FunctionRevivalInDetail_b__110_0__,
      0LL);
    static_fields = BattleLogicFunction___c_TypeInfo->static_fields;
    static_fields->__9__110_0 = (struct System_Func_BattleServantData__int__o *)_9__110_0;
    sub_1B4CF34((CGThumbnailListItem_o *)&static_fields->__9__110_0, (int32_t)_9__110_0, v45, v46);
  }
  v47 = System_Linq_Enumerable__GroupBy_object__int_(
          DeadAnimBeDoneSvtArray,
          (System_Func_TSource__TKey__o *)_9__110_0,
          (const MethodInfo_2F2885C *)Method_System_Linq_Enumerable_GroupBy_BattleServantData__int___);
  v48 = BattleLogicFunction___c_TypeInfo;
  v49 = (System_Collections_Generic_IEnumerable_TSource__o *)v47;
  if ( !BattleLogicFunction___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BattleLogicFunction___c_TypeInfo);
    v48 = BattleLogicFunction___c_TypeInfo;
  }
  _9__110_1 = (System_Func_object__int__o *)v48->static_fields->__9__110_1;
  if ( !_9__110_1 )
  {
    if ( !v48->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v48);
      v48 = BattleLogicFunction___c_TypeInfo;
    }
    v51 = (Il2CppObject *)v48->static_fields->__9;
    _9__110_1 = (System_Func_object__int__o *)sub_1B4D1DC(System_Func_IGrouping_int__BattleServantData___int__TypeInfo);
    System_Func_object__int____ctor(
      _9__110_1,
      v51,
      Method_BattleLogicFunction___c__FunctionRevivalInDetail_b__110_1__,
      0LL);
    v52 = BattleLogicFunction___c_TypeInfo->static_fields;
    v52->__9__110_1 = (struct System_Func_IGrouping_int__BattleServantData___int__o *)_9__110_1;
    sub_1B4CF34((CGThumbnailListItem_o *)&v52->__9__110_1, (int32_t)_9__110_1, v53, v54);
    v48 = BattleLogicFunction___c_TypeInfo;
  }
  if ( !v48->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(v48);
    v48 = BattleLogicFunction___c_TypeInfo;
  }
  _9__110_2 = (System_Func_object__object__o *)v48->static_fields->__9__110_2;
  if ( !_9__110_2 )
  {
    if ( !v48->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v48);
      v48 = BattleLogicFunction___c_TypeInfo;
    }
    v56 = (Il2CppObject *)v48->static_fields->__9;
    _9__110_2 = (System_Func_object__object__o *)sub_1B4D1DC(System_Func_IGrouping_int__BattleServantData___BattleServantData____TypeInfo);
    System_Func_object__object____ctor(
      _9__110_2,
      v56,
      Method_BattleLogicFunction___c__FunctionRevivalInDetail_b__110_2__,
      0LL);
    v57 = BattleLogicFunction___c_TypeInfo->static_fields;
    v57->__9__110_2 = (struct System_Func_IGrouping_int__BattleServantData___BattleServantData____o *)_9__110_2;
    sub_1B4CF34((CGThumbnailListItem_o *)&v57->__9__110_2, (int32_t)_9__110_2, v58, v59);
  }
  procArg_k__BackingField = (__int64)System_Linq_Enumerable__ToDictionary_object__int__object_(
                                       v49,
                                       (System_Func_TSource__TKey__o *)_9__110_1,
                                       (System_Func_TSource__TElement__o *)_9__110_2,
                                       (const MethodInfo_2F3CB44 *)Method_System_Linq_Enumerable_ToDictionary_IGrouping_int__BattleServantData___int__BattleServantData_____);
  dic = (System_Collections_Generic_Dictionary_K__V__o *)procArg_k__BackingField;
  if ( !v92.klass
    || (v92.fields.sortStr1 = (struct System_String_o *)BattleActionData__SeekLastActionData(
                                                          (BattleActionData_o *)v92.klass,
                                                          0LL),
        sub_1B4CF34((CGThumbnailListItem_o *)&v92.fields.sortStr1, (int32_t)v92.fields.sortStr1, v60, v61),
        !RevivalTargetArray) )
  {
LABEL_67:
    sub_1B4D1EC(procArg_k__BackingField, v25);
  }
  monitor = RevivalTargetArray[1].monitor;
  if ( (int)monitor >= 1 )
  {
    v65 = 0LL;
    v89 = RevivalTargetArray;
    while ( 1 )
    {
      if ( v65 >= (unsigned int)monitor )
        goto LABEL_68;
      v66 = *((_DWORD *)&RevivalTargetArray[2].klass + v65);
      v67 = Method_System_Array_Empty_BattleServantData___;
      v68 = *((_QWORD *)Method_System_Array_Empty_BattleServantData___ + 7);
      if ( !v68 )
      {
        sub_1B9D67C(Method_System_Array_Empty_BattleServantData___);
        v68 = v67[7];
      }
      v69 = *(_QWORD *)(v68 + 16);
      if ( (*(_BYTE *)(v69 + 309) & 1) == 0 )
        v69 = sub_1B9D620(inited);
      if ( !*(_DWORD *)(v69 + 224) )
        inited = j_il2cpp_runtime_class_init_0(v69);
      v70 = *(_QWORD *)(v67[7] + 16LL);
      if ( (*(_BYTE *)(v70 + 309) & 1) == 0 )
        v70 = sub_1B9D620(inited);
      procArg_k__BackingField = (__int64)BasicHelper__GetValue_int__object_(
                                           dic,
                                           v66,
                                           **(Il2CppObject ***)(v70 + 184),
                                           (const MethodInfo_2EEFBA8 *)Method_BasicHelper_GetValue_int__BattleServantData_____);
      if ( !procArg_k__BackingField )
        goto LABEL_67;
      v73 = *(_QWORD *)(procArg_k__BackingField + 24);
      v74 = procArg_k__BackingField;
      if ( (int)v73 >= 1 )
        break;
LABEL_64:
      RevivalTargetArray = v89;
      ++v65;
      LODWORD(monitor) = v89[1].monitor;
      if ( (__int64)v65 >= (int)monitor )
        goto LABEL_65;
    }
    v75 = 0LL;
    v76 = procArg_k__BackingField + 32;
    while ( v75 < (unsigned int)v73 )
    {
      v77 = *(BattleServantData_o **)(v76 + 8 * v75);
      procArg_k__BackingField = BattleLogicFunction___FunctionRevivalInDetail_g__TryGetEntryIndex_110_5(
                                  this,
                                  v77,
                                  &expelledUniqueId[1],
                                  expelledUniqueId,
                                  v71,
                                  v72);
      if ( (procArg_k__BackingField & 1) != 0 )
      {
        v79 = expelledUniqueId[1];
        procArg_k__BackingField = (__int64)BattleLogicFunction___FunctionRevivalInDetail_g__GenerateRevivalActionData_110_3(
                                             this,
                                             v77,
                                             v66,
                                             expelledUniqueId[1],
                                             expelledUniqueId[0],
                                             (BattleLogicFunction___c__DisplayClass110_0_o *)&v92,
                                             v78);
        if ( !this->fields.data )
          goto LABEL_67;
        v80 = (BattleActionData_o *)procArg_k__BackingField;
        BattleData__SetEntry(this->fields.data, v77, v79, 1, 0LL);
        procArg_k__BackingField = (__int64)v92.fields.sortStr1;
        if ( !v92.fields.sortStr1 )
          goto LABEL_67;
        BattleActionData__AddAfterActionData((BattleActionData_o *)v92.fields.sortStr1, v80, 0, 0LL);
        v92.fields.sortStr1 = (struct System_String_o *)v80;
        sub_1B4CF34((CGThumbnailListItem_o *)&v92.fields.sortStr1, (int32_t)v80, v81, v82);
        procArg_k__BackingField = v92.fields.sortValue1;
        if ( !v92.fields.sortValue1 )
          goto LABEL_67;
        v85 = *(_QWORD *)(v92.fields.sortValue1 + 16);
        v86 = Method_System_Collections_Generic_List_BattleServantData__Add__;
        ++*(_DWORD *)(v92.fields.sortValue1 + 28);
        if ( !v85 )
          goto LABEL_67;
        v87 = *(int *)(procArg_k__BackingField + 24);
        if ( (unsigned int)v87 >= *(_DWORD *)(v85 + 24) )
        {
          System_Collections_Generic_List_object___AddWithResize(
            (System_Collections_Generic_List_object__o *)procArg_k__BackingField,
            (Il2CppObject *)v77,
            *(const MethodInfo_35801DC **)(*(_QWORD *)(v86[4] + 192LL) + 112LL));
        }
        else
        {
          v88 = v85 + 8 * v87;
          *(_DWORD *)(procArg_k__BackingField + 24) = v87 + 1;
          *(_QWORD *)(v88 + 32) = v77;
          sub_1B4CF34((CGThumbnailListItem_o *)(v88 + 32), (int32_t)v77, v83, v84);
        }
      }
      LODWORD(v73) = *(_DWORD *)(v74 + 24);
      if ( (__int64)++v75 >= (int)v73 )
        goto LABEL_64;
    }
LABEL_68:
    sub_1B4D1F4(procArg_k__BackingField, v25);
  }
LABEL_65:
  BattleLogicFunction___FunctionRevivalInDetail_g__AfterProcessForRevivedServants_110_6(
    this,
    (BattleLogicFunction___c__DisplayClass110_0_o *)&v92,
    v62);
LABEL_66:
  BattleLogicFunction___FunctionRevivalInDetail_g__SetMissIfNoActions_110_4(
    (BattleLogicFunction_o *)IsNullOrEmpty,
    (BattleLogicFunction___c__DisplayClass110_0_o *)&v92,
    v39);
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
  if ( (byte_49BDBC9 & 1) == 0 )
  {
    this = (BattleLogicFunction_o *)sub_1B4CF90(
                                      &Method_System_Collections_Generic_Dictionary_int__int__set_Item__,
                                      funcEnt);
    byte_49BDBC9 = 1;
  }
  if ( BattleLogicFunction__CanCheckFuncBattleValue(this, funcEnt, method) )
  {
    data = v4->fields.data;
    if ( !data
      || (data = (BattleData_o *)BattleData__GetBattleValueDict(data, 0LL), !funcEnt)
      || (vals = funcEnt->fields.vals) == 0LL )
    {
LABEL_13:
      sub_1B4D1EC(data, v5);
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
        sub_1B4D1F4(data, v5);
      if ( v8 )
      {
        System_Collections_Generic_Dictionary_int__int___set_Item(
          v8,
          vals->m_Items[v11 + 1],
          vals->m_Items[v9 + 1],
          (const MethodInfo_31EE144 *)Method_System_Collections_Generic_Dictionary_int__int__set_Item__);
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

  if ( (byte_49BDBCC & 1) == 0 )
  {
    sub_1B4CF90(&BattleActionData_TypeInfo, procArg);
    byte_49BDBCC = 1;
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
          v11 = (BattleActionData_o *)sub_1B4D1DC(BattleActionData_TypeInfo);
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
    sub_1B4D1EC(data, procArg);
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
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x1
  __int64 v12; // x1
  __int64 v13; // x1
  __int64 v14; // x1
  __int64 v15; // x1
  __int64 v16; // x1
  __int64 v17; // x1
  struct BattleLogicFunctionProcess_FunctionUnitCheck_o *funcUnit_k__BackingField; // x20
  DataVals_o *dataVals_k__BackingField; // x20
  int32_t targetId_k__BackingField; // w25
  FunctionEntity_o *funcEnt; // x27
  int32_t v22; // w24
  Il2CppClass *klass; // x8
  BattleActionData_BuffData_o *v24; // x26
  struct BattleData_o *data; // x22
  int m_CancellationTokenSource; // w28
  _BOOL8 IsCommandSideEffect; // x0
  const MethodInfo *v28; // x6
  const MethodInfo *v29; // x7
  BattleActionData_BuffData_o *FunctionObject; // x23
  System_Func_object__object__o *v31; // x24
  System_Collections_Generic_IEnumerable_TSource__o *v32; // x0
  int32_t v33; // w2
  const MethodInfo *v34; // x3
  BattleLogicFunction___c_c *v35; // x0
  System_Func_object__bool__o *_9__125_1; // x21
  Il2CppObject *v37; // x24
  struct BattleLogicFunction___c_StaticFields *static_fields; // x0
  int32_t v39; // w2
  const MethodInfo *v40; // x3
  BattleActionEffect_UpdateAllInfo_o *v41; // x21

  v8 = (Il2CppObject *)this;
  if ( (byte_49BDBC6 & 1) == 0 )
  {
    sub_1B4CF90(&Method_BasicHelper_Any_BattleBuffData_BuffData___, args);
    sub_1B4CF90(&Method_BattleLogicFunction__FunctionSubFieldBuff_b__125_0__, v9);
    sub_1B4CF90(&Method_System_Linq_Enumerable_Select_BattleBuffData_BuffData__BattleBuffData_BuffData___, v10);
    sub_1B4CF90(&Method_System_Linq_Enumerable_ToList_BattleBuffData_BuffData___, v11);
    sub_1B4CF90(&System_Func_BattleBuffData_BuffData__BattleBuffData_BuffData__TypeInfo, v12);
    sub_1B4CF90(&System_Func_BattleBuffData_BuffData__bool__TypeInfo, v13);
    sub_1B4CF90(&Method_System_Collections_Generic_List_BattleBuffData_BuffData__get_Count__, v14);
    sub_1B4CF90(&Method_BattleLogicFunction___c__FunctionSubFieldBuff_b__125_1__, v15);
    sub_1B4CF90(&BattleLogicFunction___c_TypeInfo, v16);
    this = (BattleLogicFunction_o *)sub_1B4CF90(&BattleActionEffect_UpdateAllInfo_TypeInfo, v17);
    byte_49BDBC6 = 1;
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
  v22 = (int)this;
  this = (BattleLogicFunction_o *)((__int64 (__fastcall *)(BattleLogicFunctionProcess_FunctionTargetCheck_o *, Il2CppMethodPointer))funcTarget->klass->vtable._8_MakeActionBuffData.method)(
                                    funcTarget,
                                    funcTarget->klass->vtable._9_AddBuff.methodPtr);
  klass = v8[1].klass;
  if ( !klass )
    goto LABEL_26;
  if ( !funcEnt )
    goto LABEL_26;
  v24 = (BattleActionData_BuffData_o *)this;
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
                       v22,
                       IsCommandSideEffect,
                       v24,
                       v28);
    v31 = (System_Func_object__object__o *)sub_1B4D1DC(System_Func_BattleBuffData_BuffData__BattleBuffData_BuffData__TypeInfo);
    System_Func_object__object____ctor(v31, v8, Method_BattleLogicFunction__FunctionSubFieldBuff_b__125_0__, 0LL);
    v32 = (System_Collections_Generic_IEnumerable_TSource__o *)System_Linq_Enumerable__Select_object__object_(
                                                                 (System_Collections_Generic_IEnumerable_TSource__o *)data,
                                                                 (System_Func_TSource__TResult__o *)v31,
                                                                 (const MethodInfo_2F341B8 *)Method_System_Linq_Enumerable_Select_BattleBuffData_BuffData__BattleBuffData_BuffData___);
    this = (BattleLogicFunction_o *)System_Linq_Enumerable__ToList_object_(
                                      v32,
                                      (const MethodInfo_2F401C8 *)Method_System_Linq_Enumerable_ToList_BattleBuffData_BuffData___);
    if ( FunctionObject )
    {
      FunctionObject->fields.removeBuffList = (struct System_Collections_Generic_List_BattleBuffData_BuffData__o *)this;
      sub_1B4CF34((CGThumbnailListItem_o *)&FunctionObject->fields.removeBuffList, (int32_t)this, v33, v34);
      v35 = BattleLogicFunction___c_TypeInfo;
      if ( !BattleLogicFunction___c_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(BattleLogicFunction___c_TypeInfo);
        v35 = BattleLogicFunction___c_TypeInfo;
      }
      _9__125_1 = (System_Func_object__bool__o *)v35->static_fields->__9__125_1;
      if ( !_9__125_1 )
      {
        if ( !v35->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(v35);
          v35 = BattleLogicFunction___c_TypeInfo;
        }
        v37 = (Il2CppObject *)v35->static_fields->__9;
        _9__125_1 = (System_Func_object__bool__o *)sub_1B4D1DC(System_Func_BattleBuffData_BuffData__bool__TypeInfo);
        System_Func_object__bool____ctor(
          _9__125_1,
          v37,
          Method_BattleLogicFunction___c__FunctionSubFieldBuff_b__125_1__,
          0LL);
        static_fields = BattleLogicFunction___c_TypeInfo->static_fields;
        static_fields->__9__125_1 = (struct System_Func_BattleBuffData_BuffData__bool__o *)_9__125_1;
        sub_1B4CF34((CGThumbnailListItem_o *)&static_fields->__9__125_1, (int32_t)_9__125_1, v39, v40);
      }
      this = (BattleLogicFunction_o *)BasicHelper__Any_object_(
                                        (System_Collections_Generic_List_T__o *)data,
                                        (System_Func_T__bool__o *)_9__125_1,
                                        (const MethodInfo_2EEC494 *)Method_BasicHelper_Any_BattleBuffData_BuffData___);
      if ( ((unsigned __int8)this & 1) != 0 )
      {
        v41 = (BattleActionEffect_UpdateAllInfo_o *)sub_1B4D1DC(BattleActionEffect_UpdateAllInfo_TypeInfo);
        BattleActionEffect_UpdateAllInfo___ctor(v41, 0LL);
        BattleActionData_BuffData__SetActionEffectProc(FunctionObject, (BattleActionEffect_Base_o *)v41, 0LL);
      }
      if ( mainAction )
      {
        BattleActionData__setBuffData(mainAction, FunctionObject, dataVals_k__BackingField, 0LL);
        return;
      }
    }
LABEL_26:
    sub_1B4D1EC(this, args);
  }
  this = (BattleLogicFunction_o *)BattleLogicFunction__getNoEffectObject(
                                    (BattleLogicFunction_o *)v8,
                                    targetId_k__BackingField,
                                    v22,
                                    dataVals_k__BackingField,
                                    IsCommandSideEffect,
                                    0LL,
                                    v24,
                                    v29);
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
  __int64 v11; // x1
  DataVals_o *logictarget; // x25
  AddBgmArgument_o *v13; // x21
  bool isParam; // w0
  const MethodInfo *v15; // x5
  BattleBuffData_FieldChangeData_o *tamamocatTreasureDeviceIds; // x24
  struct BattleData_o *data; // x8
  Generator_BGFromFieldChangeBGBuff_o *v18; // x22
  const MethodInfo *v19; // x3
  BattleData_o *v20; // x22
  Generator_BGMFromFieldChangeBGBuff_o *v21; // x23
  const MethodInfo *v22; // x4

  v10 = this;
  if ( (byte_49BDBC5 & 1) == 0 )
  {
    sub_1B4CF90(&Generator_BGFromFieldChangeBGBuff_TypeInfo, args);
    this = (BattleLogicFunction_o *)sub_1B4CF90(&Generator_BGMFromFieldChangeBGBuff_TypeInfo, v11);
    byte_49BDBC5 = 1;
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
  v13 = (AddBgmArgument_o *)this;
  isParam = DataVals__isParam(logictarget, 102, 0LL);
  this = (BattleLogicFunction_o *)BattleLogicFunction__functionAddState(v10, mainAction, funcTarget, args, isParam, v15);
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
        v13,
        0LL);
      return;
    }
LABEL_17:
    sub_1B4D1EC(this, args);
  }
  if ( !tamamocatTreasureDeviceIds )
    goto LABEL_17;
  if ( tamamocatTreasureDeviceIds->fields.bgId >= 1 )
  {
    v18 = (Generator_BGFromFieldChangeBGBuff_o *)sub_1B4D1DC(Generator_BGFromFieldChangeBGBuff_TypeInfo);
    Generator_BGFromFieldChangeBGBuff___ctor(v18, tamamocatTreasureDeviceIds, 0LL);
    BattleLogicFunction__FunctionQuickChangeBG(v10, args, (Generator_Background_o *)v18, v19);
  }
  if ( tamamocatTreasureDeviceIds->fields.bgmId >= 1 )
  {
    v20 = v10->fields.data;
    v21 = (Generator_BGMFromFieldChangeBGBuff_o *)sub_1B4D1DC(Generator_BGMFromFieldChangeBGBuff_TypeInfo);
    Generator_BGMFromFieldChangeBGBuff___ctor(v21, v20, tamamocatTreasureDeviceIds, 0LL);
    BattleLogicFunction__FunctionChangeBgm(v10, args, (Generator_BGM_o *)v21, v13, v22);
  }
}


void __fastcall BattleLogicFunction__FunctionUpdateEntryMaxCountEachTurn(
        BattleLogicFunction_o *this,
        DataVals_o *baseVals,
        const MethodInfo *method)
{
  struct BattleData_o *data; // x19

  if ( !baseVals || (data = this->fields.data, this = (BattleLogicFunction_o *)DataVals__GetValue(baseVals, 0LL), !data) )
    sub_1B4D1EC(this, baseVals);
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
    || (v4 = this, this = (BattleLogicFunction_o *)DataVals__GetParamArray(baseVals, 82, 0LL), !v4->fields.data)
    || (BattleData__UpdateTargetPosEnemyAppearValid(v4->fields.data, (System_Int32_array *)this, 1, 0LL),
        this = (BattleLogicFunction_o *)DataVals__GetParamArray(baseVals, 83, 0LL),
        (data = v4->fields.data) == 0LL) )
  {
    sub_1B4D1EC(this, baseVals);
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

  if ( (byte_49BDB98 & 1) == 0 )
  {
    this = (BattleLogicFunction_o *)sub_1B4CF90(&System_Math_TypeInfo, dataVals);
    byte_49BDB98 = 1;
  }
  if ( !dataVals )
    goto LABEL_10;
  this = (BattleLogicFunction_o *)DataVals__isParam(dataVals, 116, 0LL);
  if ( ((unsigned __int8)this & 1) == 0 )
    return healPoint;
  if ( !targetSvtData )
LABEL_10:
    sub_1B4D1EC(this, dataVals);
  MaxHp = BattleServantData__getMaxHp(targetSvtData, 0LL);
  v9 = ((__int64 (__fastcall *)(BattleServantData_o *, Il2CppMethodPointer))targetSvtData->klass->vtable._13_get_resultHp.method)(
         targetSvtData,
         targetSvtData->klass->vtable._14_set_resultHp.methodPtr);
  if ( !System_Math_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(System_Math_TypeInfo);
  return System_Math__Min_62622116(healPoint, MaxHp - v9, 0LL);
}


int32_t __fastcall BattleLogicFunction__GetAdjustmentBuffTurn(
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
  _BOOL4 v13; // w23
  int32_t v14; // w20
  bool isEnemyTurn; // [xsp+Ch] [xbp-34h] BYREF

  isEnemyTurn = 0;
  if ( !dataVals )
    goto LABEL_22;
  v5 = this;
  this = (BattleLogicFunction_o *)DataVals__IsAdjustmentBuffTurn(dataVals, 0LL);
  if ( ((unsigned __int8)this & 1) == 0 )
    return 0;
  v8 = !actionServant || !actionServant->fields.isEnemy;
  data = v5->fields.data;
  if ( !data )
LABEL_22:
    sub_1B4D1EC(this, dataVals);
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
  if ( !DataVals__IsExtendBuffHalfTurnInOpponentTurn(dataVals, 0LL) )
  {
    if ( DataVals__IsShortenBuffHalfTurnInOpponentTurn(dataVals, 0LL) )
      return v14 << 31 >> 31;
    if ( DataVals__IsExtendBuffHalfTurnInPartyTurn(dataVals, 0LL) )
      return v14 ^ 1;
    if ( DataVals__IsShortenBuffHalfTurnInPartyTurn(dataVals, 0LL) )
    {
      --v14;
      return v14;
    }
    return 0;
  }
  return v14;
}


BuffEntity_o *__fastcall BattleLogicFunction__GetBuffEntity(
        BattleLogicFunction_o *this,
        FunctionEntity_o *funcEnt,
        const MethodInfo *method)
{
  __int64 v4; // x1
  __int64 v5; // x1
  Il2CppObject *Master_object; // x0
  __int64 v7; // x1
  struct System_Int32_array *vals; // x8

  if ( (byte_49BDB7E & 1) == 0 )
  {
    sub_1B4CF90(&Method_DataManager_GetMaster_BuffMaster___, funcEnt);
    sub_1B4CF90(&DataManager_TypeInfo, v4);
    sub_1B4CF90(&Method_DataMasterBase_BuffMaster__BuffEntity__int__GetEntity__, v5);
    byte_49BDB7E = 1;
  }
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_object = DataManager__GetMaster_object_((const MethodInfo_2F01AD0 *)Method_DataManager_GetMaster_BuffMaster___);
  if ( !funcEnt )
    goto LABEL_10;
  vals = funcEnt->fields.vals;
  if ( !vals )
    goto LABEL_10;
  if ( !vals->max_length )
    sub_1B4D1F4(Master_object, v7);
  if ( !Master_object )
LABEL_10:
    sub_1B4D1EC(Master_object, v7);
  return (BuffEntity_o *)DataMasterBase_object__object__int___GetEntity(
                           (DataMasterBase_TMaster__TEntity__PKType__o *)Master_object,
                           vals->m_Items[1],
                           (const MethodInfo_319D99C *)Method_DataMasterBase_BuffMaster__BuffEntity__int__GetEntity__);
}


System_Int32_array *__fastcall BattleLogicFunction__GetBuffTargetCardIndexArray(
        BattleLogicFunction_o *this,
        DataVals_o *baseVals,
        BattleServantData_o *targetServant,
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
  __int64 v16; // x1
  __int64 v17; // x1
  __int64 v18; // x1
  System_Collections_Generic_List_int__o *v19; // x19
  unsigned __int64 CardIndividuality; // x0
  __int64 v21; // x1
  int32_t CardIndex; // w20
  System_Int32_array *IdArrayFromIndividuality; // x21
  DataMasterBase_TMaster__TEntity__PKType__o *v24; // x22
  __int64 v25; // x24
  __int64 v26; // x25
  unsigned __int64 v27; // x24
  System_Collections_Generic_List_int__o *v28; // x22
  System_Collections_Generic_IEnumerable_TSource__o *v29; // x0
  __int64 v30; // x8
  unsigned __int64 v31; // x25
  __int64 v32; // x8
  int32_t v33; // w29
  unsigned __int64 v34; // x23
  struct System_Int32_array *items; // x8
  _QWORD *v36; // x9
  __int64 size; // x10
  int32_t Next; // w0
  struct System_Int32_array *v39; // x8
  _QWORD *v40; // x9
  __int64 v41; // x10
  unsigned int max_length; // w11
  int32_t v43; // w1
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v45; // 0:x0.16

  if ( (byte_49BDBBC & 1) == 0 )
  {
    sub_1B4CF90(&Method_DataManager_GetMasterData_ServantMaster___, baseVals);
    sub_1B4CF90(&Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__, v6);
    sub_1B4CF90(&Method_System_Linq_Enumerable_Repeat_int___, v7);
    sub_1B4CF90(&Method_System_Linq_Enumerable_ToArray_int___, v8);
    sub_1B4CF90(&Method_System_Collections_Generic_List_int__AddRange__, v9);
    sub_1B4CF90(&Method_System_Collections_Generic_List_int__Add__, v10);
    sub_1B4CF90(&Method_System_Collections_Generic_List_int__Contains__, v11);
    sub_1B4CF90(&Method_System_Collections_Generic_List_int__ToArray__, v12);
    sub_1B4CF90(&Method_System_Collections_Generic_List_int___ctor__, v13);
    sub_1B4CF90(&Method_System_Collections_Generic_List_int__get_Count__, v14);
    sub_1B4CF90(&Method_System_Collections_Generic_List_int__get_Item__, v15);
    sub_1B4CF90(&System_Collections_Generic_List_int__TypeInfo, v16);
    sub_1B4CF90(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v17);
    sub_1B4CF90(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v18);
    byte_49BDBBC = 1;
  }
  v19 = (System_Collections_Generic_List_int__o *)sub_1B4D1DC(System_Collections_Generic_List_int__TypeInfo);
  System_Collections_Generic_List_int____ctor(
    v19,
    (const MethodInfo_3562964 *)Method_System_Collections_Generic_List_int___ctor__);
  if ( !baseVals )
    goto LABEL_55;
  CardIndex = DataVals__GetCardIndex(baseVals, 0LL);
  CardIndividuality = DataVals__GetCardIndividuality(baseVals, 0LL);
  if ( (CardIndividuality & 0x80000000) == 0 )
  {
    IdArrayFromIndividuality = CardMaster__getIdArrayFromIndividuality(CardIndividuality, 0LL);
    CardIndividuality = (unsigned __int64)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37B4410 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !CardIndividuality )
      goto LABEL_55;
    CardIndividuality = (unsigned __int64)DataManager__GetMasterData_object_(
                                            (DataManager_o *)CardIndividuality,
                                            (const MethodInfo_2F01B24 *)Method_DataManager_GetMasterData_ServantMaster___);
    if ( !targetServant )
      goto LABEL_55;
    v24 = (DataMasterBase_TMaster__TEntity__PKType__o *)CardIndividuality;
    v26 = *(_QWORD *)&targetServant->fields.svtId.fields.currentCryptoKey;
    v25 = *(_QWORD *)&targetServant->fields.svtId.fields.fakeValue;
    if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    *(_QWORD *)&v45.fields.currentCryptoKey = v26;
    *(_QWORD *)&v45.fields.fakeValue = v25;
    CardIndividuality = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_47008572(v45, 0LL);
    if ( !v24 )
      goto LABEL_55;
    CardIndividuality = (unsigned __int64)DataMasterBase_object__object__int___GetEntity(
                                            v24,
                                            CardIndividuality,
                                            (const MethodInfo_319D99C *)Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
    if ( !CardIndividuality )
      goto LABEL_55;
    v27 = *(_QWORD *)(CardIndividuality + 144);
    v28 = (System_Collections_Generic_List_int__o *)sub_1B4D1DC(System_Collections_Generic_List_int__TypeInfo);
    System_Collections_Generic_List_int____ctor(
      v28,
      (const MethodInfo_3562964 *)Method_System_Collections_Generic_List_int___ctor__);
    CardIndividuality = (unsigned __int64)BattleServantData__get_BuffData(targetServant, 0LL);
    if ( !CardIndividuality )
      goto LABEL_55;
    CardIndividuality = (unsigned __int64)BattleBuffData__GetCommandCardTypeChangeBuff(
                                            (BattleBuffData_o *)CardIndividuality,
                                            0LL);
    if ( CardIndividuality )
    {
      if ( !v27 )
        goto LABEL_55;
      v29 = (System_Collections_Generic_IEnumerable_TSource__o *)System_Linq_Enumerable__Repeat_int_(
                                                                   *(_DWORD *)(CardIndividuality + 28),
                                                                   *(_DWORD *)(v27 + 24),
                                                                   (const MethodInfo_2F2E694 *)Method_System_Linq_Enumerable_Repeat_int___);
      CardIndividuality = (unsigned __int64)System_Linq_Enumerable__ToArray_int_(
                                              v29,
                                              (const MethodInfo_2F3C24C *)Method_System_Linq_Enumerable_ToArray_int___);
      v27 = CardIndividuality;
    }
    if ( !IdArrayFromIndividuality )
      goto LABEL_55;
    v30 = *(_QWORD *)&IdArrayFromIndividuality->max_length;
    if ( (int)v30 >= 1 )
    {
      v31 = 0LL;
      while ( 1 )
      {
        if ( v31 >= (unsigned int)v30 )
          goto LABEL_54;
        if ( !v27 )
          goto LABEL_55;
        v32 = *(_QWORD *)(v27 + 24);
        if ( (int)v32 >= 1 )
          break;
LABEL_31:
        LODWORD(v30) = IdArrayFromIndividuality->max_length;
        if ( (__int64)++v31 >= (int)v30 )
          goto LABEL_32;
      }
      v33 = IdArrayFromIndividuality->m_Items[v31 + 1];
      v34 = 0LL;
      while ( v34 < (unsigned int)v32 )
      {
        if ( v33 == *(_DWORD *)(v27 + 32 + 4 * v34) )
        {
          if ( !v28 )
            goto LABEL_55;
          CardIndividuality = System_Collections_Generic_List_int___Contains(
                                v28,
                                v34,
                                (const MethodInfo_3563530 *)Method_System_Collections_Generic_List_int__Contains__);
          if ( (CardIndividuality & 1) == 0 )
          {
            items = v28->fields._items;
            v36 = Method_System_Collections_Generic_List_int__Add__;
            ++v28->fields._version;
            if ( !items )
              goto LABEL_55;
            size = v28->fields._size;
            if ( (unsigned int)size >= items->max_length )
            {
              System_Collections_Generic_List_int___AddWithResize(
                v28,
                v34,
                *(const MethodInfo_35631B8 **)(*(_QWORD *)(v36[4] + 192LL) + 112LL));
            }
            else
            {
              v28->fields._size = size + 1;
              items->m_Items[size + 1] = v34;
            }
          }
        }
        LODWORD(v32) = *(_DWORD *)(v27 + 24);
        if ( (__int64)++v34 >= (int)v32 )
          goto LABEL_31;
      }
LABEL_54:
      sub_1B4D1F4(CardIndividuality, v21);
    }
LABEL_32:
    if ( !v28 )
LABEL_55:
      sub_1B4D1EC(CardIndividuality, v21);
    CardIndividuality = (unsigned int)v28->fields._size;
    if ( (int)CardIndividuality >= 1 )
    {
      if ( CardIndex )
      {
        if ( v19 )
        {
          System_Collections_Generic_List_int___AddRange(
            v19,
            (System_Collections_Generic_IEnumerable_T__o *)v28,
            (const MethodInfo_35633C4 *)Method_System_Collections_Generic_List_int__AddRange__);
          return System_Collections_Generic_List_int___ToArray(
                   v19,
                   (const MethodInfo_3564C70 *)Method_System_Collections_Generic_List_int__ToArray__);
        }
        goto LABEL_55;
      }
      Next = BattleRandom__getNext(CardIndividuality, 0LL);
      CardIndividuality = System_Collections_Generic_List_int___get_Item(
                            v28,
                            Next,
                            (const MethodInfo_3562EC8 *)Method_System_Collections_Generic_List_int__get_Item__);
      if ( !v19 )
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
    if ( !v19 )
      goto LABEL_55;
LABEL_45:
    v39 = v19->fields._items;
    v40 = Method_System_Collections_Generic_List_int__Add__;
    ++v19->fields._version;
    if ( !v39 )
      goto LABEL_55;
    v41 = v19->fields._size;
    max_length = v39->max_length;
    v43 = CardIndividuality;
    goto LABEL_50;
  }
  if ( CardIndex > 5 )
  {
LABEL_40:
    if ( v19 )
      return System_Collections_Generic_List_int___ToArray(
               v19,
               (const MethodInfo_3564C70 *)Method_System_Collections_Generic_List_int__ToArray__);
    goto LABEL_55;
  }
  if ( !v19 )
    goto LABEL_55;
  v39 = v19->fields._items;
  v40 = Method_System_Collections_Generic_List_int__Add__;
  ++v19->fields._version;
  if ( !v39 )
    goto LABEL_55;
  v41 = v19->fields._size;
  max_length = v39->max_length;
  v43 = CardIndex - 1;
LABEL_50:
  if ( (unsigned int)v41 >= max_length )
  {
    System_Collections_Generic_List_int___AddWithResize(
      v19,
      v43,
      *(const MethodInfo_35631B8 **)(*(_QWORD *)(v40[4] + 192LL) + 112LL));
  }
  else
  {
    v19->fields._size = v41 + 1;
    v39->m_Items[v41 + 1] = v43;
  }
  return System_Collections_Generic_List_int___ToArray(
           v19,
           (const MethodInfo_3564C70 *)Method_System_Collections_Generic_List_int__ToArray__);
}


System_Collections_Generic_IEnumerable_BattleLogicFunctionProcess_FunctionTargetCheck__o *__fastcall BattleLogicFunction__GetDependFuncTargets(
        BattleLogicFunction_o *this,
        BattleLogicFunction_ProcListInArgs_o *args,
        BattleActionData_o *mainAction,
        DataVals_o *dataVal,
        const MethodInfo *method)
{
  __int64 v9; // x1
  BattleLogicFunctionProcess_DependFunctionUnitCheck_o *v10; // x23
  __int64 v11; // x0
  __int64 v12; // x1
  long double inited; // q0
  System_Collections_Generic_IEnumerable_BattleLogicFunctionProcess_FunctionTargetCheck__o **p_funcTargetArray_k__BackingField; // x8
  _QWORD *v15; // x19
  __int64 v16; // x8
  __int64 v17; // x0
  __int64 v18; // x0

  if ( (byte_49BDB8A & 1) == 0 )
  {
    sub_1B4CF90(&Method_System_Array_Empty_BattleLogicFunctionProcess_FunctionTargetCheck___, args);
    sub_1B4CF90(&BattleLogicFunctionProcess_DependFunctionUnitCheck_TypeInfo, v9);
    byte_49BDB8A = 1;
  }
  v10 = (BattleLogicFunctionProcess_DependFunctionUnitCheck_o *)sub_1B4D1DC(BattleLogicFunctionProcess_DependFunctionUnitCheck_TypeInfo);
  BattleLogicFunctionProcess_DependFunctionUnitCheck___ctor(v10, this, args, dataVal, 0LL);
  if ( !v10 )
    sub_1B4D1EC(v11, v12);
  if ( BattleLogicFunctionProcess_FunctionUnitCheck__checkCondtion(
         (BattleLogicFunctionProcess_FunctionUnitCheck_o *)v10,
         mainAction,
         0LL) )
  {
    p_funcTargetArray_k__BackingField = (System_Collections_Generic_IEnumerable_BattleLogicFunctionProcess_FunctionTargetCheck__o **)&v10->fields._funcTargetArray_k__BackingField;
  }
  else
  {
    v15 = Method_System_Array_Empty_BattleLogicFunctionProcess_FunctionTargetCheck___;
    v16 = *((_QWORD *)Method_System_Array_Empty_BattleLogicFunctionProcess_FunctionTargetCheck___ + 7);
    if ( !v16 )
    {
      sub_1B9D67C(Method_System_Array_Empty_BattleLogicFunctionProcess_FunctionTargetCheck___);
      v16 = v15[7];
    }
    v17 = *(_QWORD *)(v16 + 16);
    if ( (*(_BYTE *)(v17 + 309) & 1) == 0 )
      v17 = sub_1B9D620(inited);
    if ( !*(_DWORD *)(v17 + 224) )
      inited = j_il2cpp_runtime_class_init_0(v17);
    v18 = *(_QWORD *)(v15[7] + 16LL);
    if ( (*(_BYTE *)(v18 + 309) & 1) == 0 )
      v18 = sub_1B9D620(inited);
    p_funcTargetArray_k__BackingField = *(System_Collections_Generic_IEnumerable_BattleLogicFunctionProcess_FunctionTargetCheck__o ***)(v18 + 184);
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
    sub_1B4D1EC(this, 0LL);
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
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x1
  __int64 v12; // x1
  __int64 v13; // x1
  __int64 v14; // x1
  __int64 v15; // x1
  System_Collections_Generic_List_T__o *v16; // x24
  _QWORD *DependDataValsArray; // x0
  __int64 v18; // x1
  struct System_Object_array *items; // x8
  _QWORD *v20; // x9
  __int64 size; // x10
  RemovedBuffInfoGroup_o *v22; // x22
  const MethodInfo *v23; // x4
  __int64 v24; // x8
  unsigned __int64 v25; // x9
  DataVals_o *v26; // x25
  __int64 v27; // x8
  _QWORD *v28; // x24
  __int64 v29; // x9
  int *v30; // x10
  __int64 v31; // x0
  __int64 v32; // x1
  __int64 v33; // x24
  __int64 v34; // x8
  __int64 v35; // x9
  int *v36; // x10
  __int64 v37; // x0
  __int64 v38; // x8
  __int64 v39; // x9
  int *v40; // x10
  __int64 v41; // x0
  __int64 v42; // x0
  __int64 v43; // x1
  __int64 v44; // x26
  __int64 v45; // x0
  __int64 v46; // x1
  int32_t v47; // w26
  FunctionEntity_o *funcEnt; // x27
  int32_t funcIndex; // w28
  bool IsCommandSideEffect; // w0
  BattleActionData_o *v51; // x0
  __int64 v52; // x0
  __int64 v53; // x1
  __int64 v54; // x8
  __int64 v55; // x9
  int *v56; // x10
  __int64 v57; // x0
  const MethodInfo *v59; // [xsp+0h] [xbp-80h]
  _QWORD *v60; // [xsp+8h] [xbp-78h]
  unsigned __int64 v61; // [xsp+10h] [xbp-70h]
  RemovedBuffInfo_o *subBuffInfo; // [xsp+18h] [xbp-68h] BYREF

  if ( (byte_49BDBBE & 1) == 0 )
  {
    sub_1B4CF90(&System_IDisposable_TypeInfo, procArg);
    sub_1B4CF90(&System_Collections_Generic_IEnumerable_BattleLogicFunctionProcess_FunctionTargetCheck__TypeInfo, v9);
    sub_1B4CF90(&System_Collections_Generic_IEnumerator_BattleLogicFunctionProcess_FunctionTargetCheck__TypeInfo, v10);
    sub_1B4CF90(&System_Collections_IEnumerator_TypeInfo, v11);
    sub_1B4CF90(&Method_System_Collections_Generic_List_FuncList_TYPE__Add__, v12);
    sub_1B4CF90(&Method_System_Collections_Generic_List_FuncList_TYPE___ctor__, v13);
    sub_1B4CF90(&System_Collections_Generic_List_FuncList_TYPE__TypeInfo, v14);
    sub_1B4CF90(&RemovedBuffInfoGroup_TypeInfo, v15);
    byte_49BDBBE = 1;
  }
  subBuffInfo = 0LL;
  v16 = (System_Collections_Generic_List_T__o *)sub_1B4D1DC(System_Collections_Generic_List_FuncList_TYPE__TypeInfo);
  System_Collections_Generic_List_Int32Enum____ctor(
    v16,
    (const MethodInfo_3565190 *)Method_System_Collections_Generic_List_FuncList_TYPE___ctor__);
  if ( !v16 )
    goto LABEL_56;
  items = v16->fields._items;
  v20 = Method_System_Collections_Generic_List_FuncList_TYPE__Add__;
  ++v16->fields._version;
  if ( !items )
    goto LABEL_56;
  size = v16->fields._size;
  if ( (unsigned int)size >= items->max_length )
  {
    System_Collections_Generic_List_Int32Enum___AddWithResize(
      v16,
      2,
      *(const MethodInfo_35659E4 **)(*(_QWORD *)(v20[4] + 192LL) + 112LL));
  }
  else
  {
    v16->fields._size = size + 1;
    *((_DWORD *)items->m_Items + size) = 2;
  }
  v22 = (RemovedBuffInfoGroup_o *)sub_1B4D1DC(RemovedBuffInfoGroup_TypeInfo);
  RemovedBuffInfoGroup___ctor(v22, 0LL);
  if ( !baseVals )
    goto LABEL_56;
  DependDataValsArray = DataVals__GetDependDataValsArray(
                          baseVals,
                          (System_Collections_Generic_List_FuncList_TYPE__o *)v16,
                          1,
                          0LL);
  if ( !DependDataValsArray )
    goto LABEL_56;
  v24 = DependDataValsArray[3];
  if ( (int)v24 >= 1 )
  {
    v25 = 0LL;
    v60 = DependDataValsArray;
    while ( 1 )
    {
      if ( v25 >= (unsigned int)v24 )
        sub_1B4D1F4(DependDataValsArray, v18);
      v26 = (DataVals_o *)DependDataValsArray[v25 + 4];
      v61 = v25;
      DependDataValsArray = BattleLogicFunction__GetDependFuncTargets(this, procArg, mainAction, v26, v23);
      if ( !DependDataValsArray )
        break;
      v27 = *DependDataValsArray;
      v28 = DependDataValsArray;
      v29 = *(unsigned __int16 *)(*DependDataValsArray + 302LL);
      if ( *(_WORD *)(*DependDataValsArray + 302LL) )
      {
        v30 = (int *)(*(_QWORD *)(v27 + 176) + 8LL);
        while ( *((System_Collections_Generic_IEnumerable_BattleLogicFunctionProcess_FunctionTargetCheck__c **)v30 - 1) != System_Collections_Generic_IEnumerable_BattleLogicFunctionProcess_FunctionTargetCheck__TypeInfo )
        {
          --v29;
          v30 += 4;
          if ( !v29 )
            goto LABEL_18;
        }
        v31 = v27 + 16LL * *v30 + 312;
      }
      else
      {
LABEL_18:
        v31 = sub_1B9D724(
                DependDataValsArray,
                System_Collections_Generic_IEnumerable_BattleLogicFunctionProcess_FunctionTargetCheck__TypeInfo,
                0LL);
      }
      v33 = (*(__int64 (__fastcall **)(_QWORD *, _QWORD))v31)(v28, *(_QWORD *)(v31 + 8));
      if ( !v33 )
        sub_1B4D1EC(0LL, v32);
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
              goto LABEL_25;
          }
          v37 = v34 + 16LL * *v36 + 312;
        }
        else
        {
LABEL_25:
          v37 = sub_1B9D724(v33, System_Collections_IEnumerator_TypeInfo, 0LL);
        }
        if ( ((*(__int64 (__fastcall **)(__int64, _QWORD))v37)(v33, *(_QWORD *)(v37 + 8)) & 1) == 0 )
          break;
        v38 = *(_QWORD *)v33;
        v39 = *(unsigned __int16 *)(*(_QWORD *)v33 + 302LL);
        if ( *(_WORD *)(*(_QWORD *)v33 + 302LL) )
        {
          v40 = (int *)(*(_QWORD *)(v38 + 176) + 8LL);
          while ( *((System_Collections_Generic_IEnumerator_BattleLogicFunctionProcess_FunctionTargetCheck__c **)v40 - 1) != System_Collections_Generic_IEnumerator_BattleLogicFunctionProcess_FunctionTargetCheck__TypeInfo )
          {
            --v39;
            v40 += 4;
            if ( !v39 )
              goto LABEL_32;
          }
          v41 = v38 + 16LL * *v40 + 312;
        }
        else
        {
LABEL_32:
          v41 = sub_1B9D724(
                  v33,
                  System_Collections_Generic_IEnumerator_BattleLogicFunctionProcess_FunctionTargetCheck__TypeInfo,
                  0LL);
        }
        v42 = (*(__int64 (__fastcall **)(__int64, _QWORD))v41)(v33, *(_QWORD *)(v41 + 8));
        v44 = v42;
        if ( !v42 )
          sub_1B4D1EC(0LL, v43);
        v45 = (*(__int64 (__fastcall **)(__int64, BattleActionData_o *, _QWORD))(*(_QWORD *)v42 + 408LL))(
                v42,
                mainAction,
                *(_QWORD *)(*(_QWORD *)v42 + 416LL));
        if ( (v45 & 1) != 0 )
        {
          if ( !v26 )
            sub_1B4D1EC(v45, v46);
          if ( !procArg )
            sub_1B4D1EC(v45, v46);
          v47 = *(_DWORD *)(v44 + 32);
          funcEnt = v26->fields.funcEnt;
          funcIndex = v26->fields.funcIndex;
          IsCommandSideEffect = BattleLogicFunction_ProcListInArgs__get_IsCommandSideEffect(procArg, 0LL);
          v51 = BattleLogicFunction__functionSubState(
                  this,
                  v47,
                  funcEnt,
                  v26,
                  funcIndex,
                  IsCommandSideEffect,
                  &subBuffInfo,
                  procArg,
                  v59);
          if ( !mainAction )
            sub_1B4D1EC(v51, v51);
          BattleActionData__addAction(mainAction, v51, 0LL);
          if ( !v22 )
            sub_1B4D1EC(v52, v53);
          RemovedBuffInfoGroup__Register(v22, v47, subBuffInfo, 0LL);
        }
      }
      v54 = *(_QWORD *)v33;
      v55 = *(unsigned __int16 *)(*(_QWORD *)v33 + 302LL);
      if ( *(_WORD *)(*(_QWORD *)v33 + 302LL) )
      {
        v56 = (int *)(*(_QWORD *)(v54 + 176) + 8LL);
        while ( *((System_IDisposable_c **)v56 - 1) != System_IDisposable_TypeInfo )
        {
          --v55;
          v56 += 4;
          if ( !v55 )
            goto LABEL_45;
        }
        v57 = v54 + 16LL * *v56 + 312;
      }
      else
      {
LABEL_45:
        v57 = sub_1B9D724(v33, System_IDisposable_TypeInfo, 0LL);
      }
      (*(void (__fastcall **)(__int64, _QWORD))v57)(v33, *(_QWORD *)(v57 + 8));
      DependDataValsArray = v60;
      LODWORD(v24) = *((_DWORD *)v60 + 6);
      v25 = v61 + 1;
      if ( (__int64)(v61 + 1) >= (int)v24 )
        return v22;
    }
LABEL_56:
    sub_1B4D1EC(DependDataValsArray, v18);
  }
  return v22;
}


bool __fastcall BattleLogicFunction__IsAddStateFieldFlag(
        BattleLogicFunction_o *this,
        BattleBuffData_BuffData_o *buffData,
        const MethodInfo *method)
{
  BattleLogicFunction_o *v4; // x20
  UnityEngine_Object_o *logic; // x21

  v4 = this;
  if ( (byte_49BDB89 & 1) == 0 )
  {
    this = (BattleLogicFunction_o *)sub_1B4CF90(&UnityEngine_Object_TypeInfo, buffData);
    byte_49BDB89 = 1;
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
      sub_1B4D1EC(this, buffData);
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
    sub_1B4D1EC(this, funcType);
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
    sub_1B4D1EC(data, *(_QWORD *)&targetId);
  if ( ServantData->fields.isEnemy )
    LOBYTE(ServantData) = ~BattleData__IsAliveLogic(data, 0, 0LL);
  else
    LOBYTE(ServantData) = !BattleData__checkBattleContinuationEnemys(data, 0LL);
  return (unsigned __int8)ServantData & 1;
}


bool __fastcall BattleLogicFunction__IsSituationForceTurnProgressExecutable(
        BattleLogicFunction_o *this,
        BattleServantData_o *actionServant,
        DataVals_o *dataVals,
        bool *isEnemyTurn,
        const MethodInfo *method)
{
  BattleServantData_o *v7; // x21
  UnityEngine_Object_o *logic; // x22
  __int64 v10; // x1
  BattleLogic_o *v12; // x0
  const MethodInfo *v13; // x2
  char v14; // w0
  BattleLogicFunction___c__DisplayClass63_0_o v16; // [xsp+8h] [xbp-38h] BYREF

  v7 = actionServant;
  if ( (byte_49BDB8D & 1) == 0 )
  {
    sub_1B4CF90(&UnityEngine_Object_TypeInfo, actionServant);
    byte_49BDB8D = 1;
  }
  v16.fields.dataVals = dataVals;
  sub_1B4CF34((CGThumbnailListItem_o *)&v16, (int32_t)dataVals, (int32_t)dataVals, (const MethodInfo *)isEnemyTurn);
  *isEnemyTurn = 0;
  logic = (UnityEngine_Object_o *)this->fields.logic;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Equality(logic, 0LL, 0LL) )
    return 0;
  if ( v7 )
    LOBYTE(v7) = v7->fields.isEnemy;
  v12 = this->fields.logic;
  if ( !v12 )
    goto LABEL_17;
  if ( BattleLogic__IsPlayerTurnAfterBuffTurnProgress(v12, 0LL) )
  {
    v14 = (unsigned __int8)v7 ^ 1;
    return BattleLogicFunction___IsSituationForceTurnProgressExecutable_g__IsForceTurnProgress_63_0(v14, &v16, v13);
  }
  v12 = this->fields.logic;
  if ( !v12 )
LABEL_17:
    sub_1B4D1EC(v12, v10);
  if ( BattleLogic__IsEnemyTurnAfterBuffTurnProgress(v12, 0LL) )
  {
    v14 = (char)v7;
    *isEnemyTurn = 1;
    return BattleLogicFunction___IsSituationForceTurnProgressExecutable_g__IsForceTurnProgress_63_0(v14, &v16, v13);
  }
  return 0;
}


// local variable allocation has failed, the output may be wrong!
bool __fastcall BattleLogicFunction__IsSvtBuffTurnExtend(
        BattleLogicFunction_o *this,
        int32_t targetId,
        BuffEntity_o *buffEnt,
        bool shortbuff,
        const MethodInfo *method)
{
  __int64 v9; // x1
  __int64 v10; // x1
  BattleData_o *data; // x0
  BattleServantData_o *ServantData; // x0
  BattleServantData_o *v13; // x21
  struct BattleData_o *v14; // x8
  int32_t currentTurn; // w8
  bool v16; // w10

  if ( (byte_49BDB8C & 1) == 0 )
  {
    sub_1B4CF90(&Method_DataManager_GetMaster_ConstantStrMaster___, *(_QWORD *)&targetId);
    sub_1B4CF90(&DataManager_TypeInfo, v9);
    sub_1B4CF90(&StringLiteral_5719/*"EXTEND_TURN_BUFF_TYPE"*/, v10);
    byte_49BDB8C = 1;
  }
  data = this->fields.data;
  if ( !data )
    goto LABEL_27;
  ServantData = BattleData__getServantData(data, targetId, 0LL);
  if ( !ServantData )
    return (char)ServantData;
  v13 = ServantData;
  data = (BattleData_o *)ServantData->fields.svtdata;
  if ( !data )
    goto LABEL_27;
  if ( !ServantEntity__IsSvtBuffTurnExtend((ServantEntity_o *)data, 0LL) )
    goto LABEL_25;
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  data = (BattleData_o *)DataManager__GetMaster_object_((const MethodInfo_2F01AD0 *)Method_DataManager_GetMaster_ConstantStrMaster___);
  if ( !buffEnt || !data )
    goto LABEL_27;
  data = (BattleData_o *)ConstantStrMaster__ExistValueArray(
                           (ConstantStrMaster_o *)data,
                           (System_String_o *)StringLiteral_5719/*"EXTEND_TURN_BUFF_TYPE"*/,
                           buffEnt->fields.type,
                           0LL);
  if ( ((unsigned __int8)data & 1) == 0 )
    goto LABEL_25;
  v14 = this->fields.data;
  if ( !v14 )
LABEL_27:
    sub_1B4D1EC(data, *(_QWORD *)&targetId);
  currentTurn = v14->fields.currentTurn;
  if ( !currentTurn )
  {
    LOBYTE(ServantData) = 1;
    if ( (shortbuff & (unsigned __int8)~v13->fields.isEnemy & 1) != 0 || v13->fields.isEnemy && !shortbuff )
      return (char)ServantData;
LABEL_25:
    LOBYTE(ServantData) = 0;
    return (char)ServantData;
  }
  v16 = currentTurn == 1 && v13->fields.isEnemy;
  if ( (!v16 || !shortbuff) && (currentTurn != 1 || v13->fields.isEnemy || shortbuff) )
    goto LABEL_25;
  LOBYTE(ServantData) = 1;
  return (char)ServantData;
}


// local variable allocation has failed, the output may be wrong!
bool __fastcall BattleLogicFunction__IsUpdateBuffProgressTurn(
        BattleLogicFunction_o *this,
        int32_t buffType,
        System_String_o *keyName,
        System_Collections_Generic_List_int__o **typeList,
        const MethodInfo *method)
{
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x1
  __int64 v12; // x1
  DataManager_o *Instance; // x0
  System_Collections_Generic_List_int__o *v14; // x22
  int32_t v15; // w2
  const MethodInfo *v16; // x3
  System_Collections_Generic_IEnumerable_T__o *v17; // x1
  System_Int32_array *ValueArray; // x0

  if ( (byte_49BDB80 & 1) == 0 )
  {
    sub_1B4CF90(&Method_DataManager_GetMasterData_ConstantStrMaster___, *(_QWORD *)&buffType);
    sub_1B4CF90(&Method_System_Collections_Generic_List_int__AddRange__, v8);
    sub_1B4CF90(&Method_System_Collections_Generic_List_int__Contains__, v9);
    sub_1B4CF90(&Method_System_Collections_Generic_List_int___ctor__, v10);
    sub_1B4CF90(&System_Collections_Generic_List_int__TypeInfo, v11);
    sub_1B4CF90(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v12);
    byte_49BDB80 = 1;
  }
  Instance = (DataManager_o *)*typeList;
  if ( !*typeList )
  {
    v14 = (System_Collections_Generic_List_int__o *)sub_1B4D1DC(System_Collections_Generic_List_int__TypeInfo);
    System_Collections_Generic_List_int____ctor(
      v14,
      (const MethodInfo_3562964 *)Method_System_Collections_Generic_List_int___ctor__);
    *typeList = v14;
    sub_1B4CF34((CGThumbnailListItem_o *)typeList, (int32_t)v14, v15, v16);
    Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37B4410 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( Instance )
    {
      Instance = (DataManager_o *)DataManager__GetMasterData_object_(
                                    Instance,
                                    (const MethodInfo_2F01B24 *)Method_DataManager_GetMasterData_ConstantStrMaster___);
      if ( Instance )
      {
        ValueArray = ConstantStrMaster__GetValueArray((ConstantStrMaster_o *)Instance, keyName, 0LL, 0LL);
        if ( ValueArray )
        {
          v17 = (System_Collections_Generic_IEnumerable_T__o *)ValueArray;
          Instance = (DataManager_o *)*typeList;
          if ( !*typeList )
            goto LABEL_11;
          System_Collections_Generic_List_int___AddRange(
            (System_Collections_Generic_List_int__o *)Instance,
            v17,
            (const MethodInfo_35633C4 *)Method_System_Collections_Generic_List_int__AddRange__);
        }
        Instance = (DataManager_o *)*typeList;
        if ( *typeList )
          return System_Collections_Generic_List_int___Contains(
                   (System_Collections_Generic_List_int__o *)Instance,
                   buffType,
                   (const MethodInfo_3563530 *)Method_System_Collections_Generic_List_int__Contains__);
      }
    }
LABEL_11:
    sub_1B4D1EC(Instance, v17);
  }
  return System_Collections_Generic_List_int___Contains(
           (System_Collections_Generic_List_int__o *)Instance,
           buffType,
           (const MethodInfo_3563530 *)Method_System_Collections_Generic_List_int__Contains__);
}


void __fastcall BattleLogicFunction__LossCommandSpell(
        BattleLogicFunction_o *this,
        DataVals_o *baseVals,
        BattleActionData_o *actionData,
        const MethodInfo *method)
{
  __int64 v6; // x1
  __int64 v7; // x21
  __int64 Value; // x0
  __int64 v9; // x1
  int32_t v10; // w1
  int32_t v11; // w2
  const MethodInfo *v12; // x3
  struct BattleSkillInfoData_o *skillInfo; // x1
  int32_t v14; // w2
  const MethodInfo *v15; // x3
  __int64 v16; // x22

  if ( (byte_49BDBC2 & 1) == 0 )
  {
    sub_1B4CF90(&BattleActionData_TypeInfo, baseVals);
    sub_1B4CF90(&StringLiteral_8140/*"LOSS_COMMAND_SPELL"*/, v6);
    byte_49BDBC2 = 1;
  }
  v7 = sub_1B4D1DC(BattleActionData_TypeInfo);
  BattleActionData___ctor((BattleActionData_o *)v7, 0LL);
  if ( !actionData )
    goto LABEL_8;
  if ( !v7 )
    goto LABEL_8;
  *(_QWORD *)(v7 + 32) = *(_QWORD *)&actionData->fields.actorId;
  BattleActionData__setStateField((BattleActionData_o *)v7, 0LL);
  v10 = StringLiteral_8140/*"LOSS_COMMAND_SPELL"*/;
  *(_QWORD *)(v7 + 64) = StringLiteral_8140/*"LOSS_COMMAND_SPELL"*/;
  sub_1B4CF34((CGThumbnailListItem_o *)(v7 + 64), v10, v11, v12);
  skillInfo = actionData->fields.skillInfo;
  *(_QWORD *)(v7 + 144) = skillInfo;
  sub_1B4CF34((CGThumbnailListItem_o *)(v7 + 144), (int32_t)skillInfo, v14, v15);
  if ( !baseVals || (v16 = *(_QWORD *)(v7 + 144), Value = DataVals__GetValue(baseVals, 0LL), !v16) )
LABEL_8:
    sub_1B4D1EC(Value, v9);
  *(_DWORD *)(v16 + 100) = Value;
  *(_BYTE *)(v7 + 241) = DataVals__isForcedEffectSpeedOne(baseVals, 0LL);
  BattleActionData__AddAfterActionData(actionData, (BattleActionData_o *)v7, 0, 0LL);
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
  const MethodInfo *v14; // x3
  BattleActionData_BuffData_o *result; // x0

  if ( !buffData
    || !actBuffData
    || (actBuffData->fields.buffId = buffData->fields.buffId,
        actBuffData->fields.auraEffectId = buffData->fields.auraEffectId,
        actBuffData->fields.classIconAuraEffectId = buffData->fields.classIconAuraEffectId,
        !funcEnt) )
  {
    sub_1B4D1EC(this, actBuffData);
  }
  popupText = funcEnt->fields.popupText;
  v11 = isCommandSideEffect;
  actBuffData->fields.popLabel = popupText;
  sub_1B4CF34(
    (CGThumbnailListItem_o *)&actBuffData->fields.popLabel,
    (int32_t)popupText,
    (int32_t)buffData,
    (const MethodInfo *)funcEnt);
  *(_QWORD *)&actBuffData->fields.popIcon = *(_QWORD *)&funcEnt->fields.popupIconId;
  EffectList = FunctionEntity__getEffectList(funcEnt, 0LL);
  actBuffData->fields.effectList = EffectList;
  sub_1B4CF34((CGThumbnailListItem_o *)&actBuffData->fields.effectList, (int32_t)EffectList, v13, v14);
  actBuffData->fields.isCommandAfter = v11;
  result = actBuffData;
  actBuffData->fields.addOrder = buffData->fields.addOrder;
  return result;
}


// local variable allocation has failed, the output may be wrong!
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
  const MethodInfo *v16; // x3
  int32_t v17; // w2
  const MethodInfo *v18; // x3

  if ( (byte_49BDB91 & 1) == 0 )
  {
    sub_1B4CF90(&BattleActionData_BuffData_TypeInfo, *(_QWORD *)&targetId);
    byte_49BDB91 = 1;
  }
  v12 = sub_1B4D1DC(BattleActionData_BuffData_TypeInfo);
  BattleActionData_BuffData___ctor((BattleActionData_BuffData_o *)v12, 0LL);
  if ( !v12 )
    sub_1B4D1EC(v13, v14);
  *(_DWORD *)(v12 + 40) = targetId;
  *(_DWORD *)(v12 + 16) = funcIndex;
  *(_DWORD *)(v12 + 64) = iconId;
  *(_QWORD *)(v12 + 56) = popupText;
  sub_1B4CF34((CGThumbnailListItem_o *)(v12 + 56), (int32_t)popupText, v15, v16);
  *(_DWORD *)(v12 + 68) = popupTextColor;
  *(_QWORD *)(v12 + 72) = 0LL;
  sub_1B4CF34((CGThumbnailListItem_o *)(v12 + 72), 0, v17, v18);
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
  FamilyBuffLinkageIdGenerator_o *v22; // x19
  Il2CppObject *current; // x21
  System_Collections_Generic_Dictionary_int__int__o *v24; // x20
  __int64 v25; // x0
  __int64 v26; // x1
  System_Collections_Generic_List_object__o *klass; // x0
  _BOOL8 v28; // x0
  __int64 v29; // x1
  Il2CppObject *v30; // x22
  __int64 v31; // x21
  System_Int32_array *FamilyLinkageIdArray; // x0
  int32_t v33; // w2
  const MethodInfo *v34; // x3
  System_Int32_array *FamilyLinkageTargetIdArray; // x0
  int32_t v36; // w2
  const MethodInfo *v37; // x3
  __int64 IsNullOrEmpty; // x0
  __int64 v39; // x1
  __int64 v40; // x8
  unsigned __int64 v41; // x26
  System_Collections_ICollection_o *v42; // x22
  unsigned __int64 monitor; // x8
  __int64 v44; // x24
  unsigned __int64 v45; // x25
  System_Collections_ICollection_o *v46; // x29
  _BOOL8 v47; // x0
  __int64 v48; // x1
  int32_t v49; // w23
  int32_t v50; // w0
  System_Collections_Generic_List_Enumerator_object__o v51; // [xsp+8h] [xbp-B8h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v52; // [xsp+20h] [xbp-A0h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v53; // [xsp+40h] [xbp-80h] BYREF

  if ( (byte_49BDBBF & 1) == 0 )
  {
    sub_1B4CF90(&Method_System_Collections_Generic_Dictionary_int__int__ContainsKey__, procArg);
    sub_1B4CF90(&Method_System_Collections_Generic_Dictionary_int__int___ctor__, v8);
    sub_1B4CF90(&Method_System_Collections_Generic_Dictionary_int__int__get_Item__, v9);
    sub_1B4CF90(&Method_System_Collections_Generic_Dictionary_int__RemovedBuffInfo__get_Values__, v10);
    sub_1B4CF90(&Method_System_Collections_Generic_Dictionary_int__int__set_Item__, v11);
    sub_1B4CF90(&System_Collections_Generic_Dictionary_int__int__TypeInfo, v12);
    sub_1B4CF90(
      &Method_System_Collections_Generic_Dictionary_ValueCollection_Enumerator_int__RemovedBuffInfo__Dispose__,
      v13);
    sub_1B4CF90(&Method_System_Collections_Generic_List_Enumerator_BattleBuffData_BuffData__Dispose__, v14);
    sub_1B4CF90(
      &Method_System_Collections_Generic_Dictionary_ValueCollection_Enumerator_int__RemovedBuffInfo__MoveNext__,
      v15);
    sub_1B4CF90(&Method_System_Collections_Generic_List_Enumerator_BattleBuffData_BuffData__MoveNext__, v16);
    sub_1B4CF90(
      &Method_System_Collections_Generic_Dictionary_ValueCollection_Enumerator_int__RemovedBuffInfo__get_Current__,
      v17);
    sub_1B4CF90(&Method_System_Collections_Generic_List_Enumerator_BattleBuffData_BuffData__get_Current__, v18);
    sub_1B4CF90(&int_____TypeInfo, v19);
    sub_1B4CF90(&Method_System_Collections_Generic_List_BattleBuffData_BuffData__GetEnumerator__, v20);
    this = (BattleLogicFunction_o *)sub_1B4CF90(
                                      &Method_System_Collections_Generic_Dictionary_ValueCollection_int__RemovedBuffInfo__GetEnumerator__,
                                      v21);
    byte_49BDBBF = 1;
  }
  memset(&v53, 0, sizeof(v53));
  memset(&v52, 0, sizeof(v52));
  if ( targetServant )
  {
    if ( !procArg
      || (this = (BattleLogicFunction_o *)BattleLogicFunction_ProcListInArgs__GetFamilyBuffLinkageIdGenerator(
                                            procArg,
                                            targetServant,
                                            0LL),
          !stealBuffInfoGroup)
      || (v22 = (FamilyBuffLinkageIdGenerator_o *)this,
          (this = (BattleLogicFunction_o *)stealBuffInfoGroup->fields._servantUniqueIdToRemovedBuffInfoMap_k__BackingField) == 0LL)
      || (this = (BattleLogicFunction_o *)System_Collections_Generic_Dictionary_int__object___get_Values(
                                            (System_Collections_Generic_Dictionary_int__object__o *)this,
                                            (const MethodInfo_31F6C90 *)Method_System_Collections_Generic_Dictionary_int__RemovedBuffInfo__get_Values__)) == 0LL )
    {
      sub_1B4D1EC(this, procArg);
    }
    System_Collections_Generic_Dictionary_ValueCollection_int__object___GetEnumerator(
      (System_Collections_Generic_Dictionary_ValueCollection_Enumerator_TKey__TValue__o *)&v51,
      (System_Collections_Generic_Dictionary_ValueCollection_TKey__TValue__o *)this,
      (const MethodInfo_3878284 *)Method_System_Collections_Generic_Dictionary_ValueCollection_int__RemovedBuffInfo__GetEnumerator__);
    v53 = v51;
    while ( System_Collections_Generic_Dictionary_ValueCollection_Enumerator_int__object___MoveNext(
              (System_Collections_Generic_Dictionary_ValueCollection_Enumerator_TKey__TValue__o *)&v53,
              (const MethodInfo_33458A4 *)Method_System_Collections_Generic_Dictionary_ValueCollection_Enumerator_int__RemovedBuffInfo__MoveNext__) )
    {
      current = v53.fields._current;
      v24 = (System_Collections_Generic_Dictionary_int__int__o *)sub_1B4D1DC(System_Collections_Generic_Dictionary_int__int__TypeInfo);
      System_Collections_Generic_Dictionary_int__int____ctor(
        v24,
        (const MethodInfo_31ED794 *)Method_System_Collections_Generic_Dictionary_int__int___ctor__);
      if ( !current )
        sub_1B4D1EC(v25, v26);
      klass = (System_Collections_Generic_List_object__o *)current[1].klass;
      if ( !klass )
        sub_1B4D1EC(0LL, v26);
      System_Collections_Generic_List_object___GetEnumerator(
        (System_Collections_Generic_List_Enumerator_T__o *)&v51,
        klass,
        (const MethodInfo_3580CD4 *)Method_System_Collections_Generic_List_BattleBuffData_BuffData__GetEnumerator__);
      v52 = v51;
      while ( 1 )
      {
        v28 = System_Collections_Generic_List_Enumerator_object___MoveNext(
                &v52,
                (const MethodInfo_3308B3C *)Method_System_Collections_Generic_List_Enumerator_BattleBuffData_BuffData__MoveNext__);
        if ( !v28 )
          break;
        v30 = v52.fields._current;
        if ( !v52.fields._current )
          sub_1B4D1EC(v28, v29);
        if ( BattleBuffData_BuffData__IsFamilyBuff((BattleBuffData_BuffData_o *)v52.fields._current, 0LL) )
        {
          v31 = sub_1B4D038(int_____TypeInfo, 2LL);
          FamilyLinkageIdArray = BattleBuffData_BuffData__get_FamilyLinkageIdArray(
                                   (BattleBuffData_BuffData_o *)v30,
                                   0LL);
          if ( !v31 )
            sub_1B4D1EC(FamilyLinkageIdArray, FamilyLinkageIdArray);
          if ( !*(_DWORD *)(v31 + 24) )
            sub_1B4D1F4(FamilyLinkageIdArray, FamilyLinkageIdArray);
          *(_QWORD *)(v31 + 32) = FamilyLinkageIdArray;
          sub_1B4CF34((CGThumbnailListItem_o *)(v31 + 32), (int32_t)FamilyLinkageIdArray, v33, v34);
          FamilyLinkageTargetIdArray = BattleBuffData_BuffData__get_FamilyLinkageTargetIdArray(
                                         (BattleBuffData_BuffData_o *)v30,
                                         0LL);
          if ( *(_DWORD *)(v31 + 24) <= 1u )
            sub_1B4D1F4(FamilyLinkageTargetIdArray, FamilyLinkageTargetIdArray);
          *(_QWORD *)(v31 + 40) = FamilyLinkageTargetIdArray;
          sub_1B4CF34((CGThumbnailListItem_o *)(v31 + 40), (int32_t)FamilyLinkageTargetIdArray, v36, v37);
          v40 = *(_QWORD *)(v31 + 24);
          if ( (int)v40 >= 1 )
          {
            v41 = 0LL;
            do
            {
              if ( v41 >= (unsigned int)v40 )
                sub_1B4D1F4(IsNullOrEmpty, v39);
              v42 = *(System_Collections_ICollection_o **)(v31 + 8 * v41 + 32);
              IsNullOrEmpty = BasicHelper__IsNullOrEmpty(v42, 0LL);
              if ( (IsNullOrEmpty & 1) == 0 )
              {
                if ( !v42 )
                  sub_1B4D1EC(IsNullOrEmpty, v39);
                monitor = (unsigned __int64)v42[1].monitor;
                if ( (int)monitor >= 1 )
                {
                  v44 = (unsigned int)v42[1].monitor;
                  v45 = 0LL;
                  v46 = v42 + 2;
                  do
                  {
                    if ( v45 >= (unsigned int)monitor )
                      sub_1B4D1F4(IsNullOrEmpty, v39);
                    if ( !v24 )
                      sub_1B4D1EC(IsNullOrEmpty, v39);
                    v47 = System_Collections_Generic_Dictionary_int__int___ContainsKey(
                            v24,
                            *((_DWORD *)&v46->klass + v45),
                            (const MethodInfo_31EE344 *)Method_System_Collections_Generic_Dictionary_int__int__ContainsKey__);
                    if ( !v47 )
                    {
                      if ( v45 >= LODWORD(v42[1].monitor) )
                        sub_1B4D1F4(v47, v48);
                      if ( !v22 )
                        sub_1B4D1EC(v47, v48);
                      v49 = *((_DWORD *)&v46->klass + v45);
                      v50 = FamilyBuffLinkageIdGenerator__Next(v22, 0LL);
                      System_Collections_Generic_Dictionary_int__int___set_Item(
                        v24,
                        v49,
                        v50,
                        (const MethodInfo_31EE144 *)Method_System_Collections_Generic_Dictionary_int__int__set_Item__);
                    }
                    if ( v45 >= LODWORD(v42[1].monitor) )
                      sub_1B4D1F4(v47, v48);
                    IsNullOrEmpty = System_Collections_Generic_Dictionary_int__int___get_Item(
                                      v24,
                                      *((_DWORD *)&v46->klass + v45),
                                      (const MethodInfo_31EE0BC *)Method_System_Collections_Generic_Dictionary_int__int__get_Item__);
                    monitor = LODWORD(v42[1].monitor);
                    if ( v45 >= monitor )
                      sub_1B4D1F4(IsNullOrEmpty, v39);
                    *((_DWORD *)&v46->klass + v45++) = IsNullOrEmpty;
                  }
                  while ( v44 != v45 );
                }
              }
              LODWORD(v40) = *(_DWORD *)(v31 + 24);
              ++v41;
            }
            while ( (__int64)v41 < (int)v40 );
          }
        }
      }
      System_Collections_Generic_List_Enumerator_object___Dispose(
        &v52,
        (const MethodInfo_3308B38 *)Method_System_Collections_Generic_List_Enumerator_BattleBuffData_BuffData__Dispose__);
    }
    System_Collections_Generic_Dictionary_ValueCollection_Enumerator_int__object___Dispose(
      (System_Collections_Generic_Dictionary_ValueCollection_Enumerator_TKey__TValue__o *)&v53,
      (const MethodInfo_33458A0 *)Method_System_Collections_Generic_Dictionary_ValueCollection_Enumerator_int__RemovedBuffInfo__Dispose__);
  }
}


void __fastcall BattleLogicFunction__SetBattleSkillDropGeneratorBuff(
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

  if ( (byte_49BDBCE & 1) == 0 )
  {
    this = (BattleLogicFunction_o *)sub_1B4CF90(&BattleSkillDropInfo_TypeInfo, actionData);
    byte_49BDBCE = 1;
  }
  if ( !baseVals )
    goto LABEL_8;
  if ( !procArg )
    goto LABEL_8;
  funcIndex = baseVals->fields.funcIndex;
  funcEnt = baseVals->fields.funcEnt;
  IsCommandSideEffect = BattleLogicFunction_ProcListInArgs__get_IsCommandSideEffect(procArg, 0LL);
  this = (BattleLogicFunction_o *)BattleLogicFunction__getFunctionObject(
                                    (BattleLogicFunction_o *)IsCommandSideEffect,
                                    funcEnt,
                                    dropperUniqueId,
                                    funcIndex,
                                    IsCommandSideEffect,
                                    0LL,
                                    v13);
  if ( !this
    || (HIDWORD(this->fields.logic) = 0,
        v14 = this,
        v15 = (BattleSkillDropInfo_o *)sub_1B4D1DC(BattleSkillDropInfo_TypeInfo),
        BattleSkillDropInfo___ctor(v15, dropperUniqueId, baseVals, 0LL),
        v14[2].fields.logictarget = (struct BattleLogicTarget_o *)v15,
        sub_1B4CF34((CGThumbnailListItem_o *)&v14[2].fields.logictarget, (int32_t)v15, v16, v17),
        !actionData) )
  {
LABEL_8:
    sub_1B4D1EC(this, actionData);
  }
  BattleActionData__setBuffData(actionData, (BattleActionData_BuffData_o *)v14, baseVals, 0LL);
}


void __fastcall BattleLogicFunction__SetDisplayBattleMessage(
        BattleLogicFunction_o *this,
        BattleActionData_o *mainActionData,
        BattleLogicFunctionProcess_FunctionTargetCheck_o *funcTarget,
        const MethodInfo *method)
{
  struct BattleLogicFunctionProcess_FunctionUnitCheck_o *funcUnit_k__BackingField; // x8
  DataVals_o *dataVals_k__BackingField; // x20
  BattleActionData_BuffData_o *v7; // x21

  if ( !funcTarget
    || (funcUnit_k__BackingField = funcTarget->fields._funcUnit_k__BackingField) == 0LL
    || (dataVals_k__BackingField = funcUnit_k__BackingField->fields._dataVals_k__BackingField,
        (this = (BattleLogicFunction_o *)BattleLogicFunctionProcess_FunctionTargetCheck__GetFunctionDisplayData(
                                           funcTarget,
                                           0LL)) == 0LL)
    || (v7 = (BattleActionData_BuffData_o *)this,
        BattleActionData_BuffData__SetMultiMessage((BattleActionData_BuffData_o *)this, dataVals_k__BackingField, 0LL),
        !mainActionData) )
  {
    sub_1B4D1EC(this, mainActionData);
  }
  BattleActionData__setBuffData(mainActionData, v7, dataVals_k__BackingField, 0LL);
}


void __fastcall BattleLogicFunction__SetEnemyCountChangeActionData(
        BattleLogicFunction_o *this,
        DataVals_o *baseVals,
        BattleActionData_o *mainActionData,
        const MethodInfo *method)
{
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x21
  __int64 Value; // x0
  __int64 v10; // x1
  int32_t v11; // w2
  const MethodInfo *v12; // x3
  int32_t v13; // w1
  __int64 v14; // x22
  int32_t v15; // w2
  const MethodInfo *v16; // x3
  BattleSkillInfoData_o *skillInfo; // x0
  System_String_o *v18; // x1
  int32_t v19; // w2
  const MethodInfo *v20; // x3

  if ( (byte_49BDBCD & 1) == 0 )
  {
    sub_1B4CF90(&BattleActionData_TypeInfo, baseVals);
    sub_1B4CF90(&BattleActionData_EnemyCountChangeData_TypeInfo, v6);
    sub_1B4CF90(&StringLiteral_5390/*"ENEMY_COUNT_CHANGE"*/, v7);
    byte_49BDBCD = 1;
  }
  v8 = sub_1B4D1DC(BattleActionData_TypeInfo);
  BattleActionData___ctor((BattleActionData_o *)v8, 0LL);
  if ( !mainActionData
    || !v8
    || (*(_QWORD *)(v8 + 32) = *(_QWORD *)&mainActionData->fields.actorId,
        v13 = StringLiteral_5390/*"ENEMY_COUNT_CHANGE"*/,
        *(_QWORD *)(v8 + 64) = StringLiteral_5390/*"ENEMY_COUNT_CHANGE"*/,
        sub_1B4CF34((CGThumbnailListItem_o *)(v8 + 64), v13, v11, v12),
        v14 = sub_1B4D1DC(BattleActionData_EnemyCountChangeData_TypeInfo),
        BattleActionData_EnemyCountChangeData___ctor((BattleActionData_EnemyCountChangeData_o *)v14, 0LL),
        !baseVals)
    || (Value = DataVals__GetValue(baseVals, 0LL), !v14) )
  {
    sub_1B4D1EC(Value, v10);
  }
  *(_DWORD *)(v14 + 16) = Value;
  *(float *)(v14 + 20) = DataVals__GetEnemyCountChangeTime(baseVals, 3000, 0LL);
  skillInfo = mainActionData->fields.skillInfo;
  if ( skillInfo )
    v18 = BattleSkillInfoData__GetEnemyCountChangeMessage(skillInfo, 0LL);
  else
    v18 = 0LL;
  *(_QWORD *)(v14 + 24) = v18;
  sub_1B4CF34((CGThumbnailListItem_o *)(v14 + 24), (int32_t)v18, v15, v16);
  *(_DWORD *)(v14 + 32) = DataVals__GetEnemyCountChangeEffectId(baseVals, 0LL);
  *(float *)(v14 + 36) = DataVals__GetEnemyCountWaitTimeAfterMessage(baseVals, 0LL);
  *(_QWORD *)(v8 + 472) = v14;
  sub_1B4CF34((CGThumbnailListItem_o *)(v8 + 472), v14, v19, v20);
  BattleActionData__setStateField((BattleActionData_o *)v8, 0LL);
  BattleActionData__AddAfterActionData(mainActionData, (BattleActionData_o *)v8, 0, 0LL);
}


void __fastcall BattleLogicFunction__SetFuncSideEffect(
        BattleLogicFunction_o *this,
        BattleLogicFunction_FuncSideEffectFunctionArgument_o *sideEffectArg,
        BattleActionData_o *actionData,
        BattleServantData_o *actorSvtData,
        System_Int32_array *targetIds,
        const MethodInfo *method)
{
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x1
  __int64 v12; // x1
  __int64 v13; // x1
  __int64 v14; // x1
  Il2CppObject *Master_object; // x22
  void *FuncSideEffectTargetServants; // x0
  __int64 v17; // x1
  __int64 v18; // x8
  unsigned __int64 v19; // x9
  bool v20; // w27
  __int64 v21; // x8
  _QWORD *v22; // x27
  unsigned __int64 v23; // x25
  BattleServantData_o *v24; // x28
  __int64 v25; // x8
  _QWORD *v26; // x29
  unsigned __int64 v27; // x24
  BattleBuffData_BuffData_o *v28; // x23
  BattleActionData_o *SideEffectActionData_43040420; // x0
  const MethodInfo *v30; // x6
  BattleData_o *data; // x8
  int v32; // w8
  _DWORD *v33; // x24
  unsigned int v34; // w28
  char *v35; // x8
  __int64 v36; // x25
  __int64 v37; // x8
  _QWORD *v38; // x26
  unsigned __int64 v39; // x29
  BattleBuffData_BuffData_o *v40; // x27
  const MethodInfo *v41; // x6
  System_Collections_Generic_IEnumerable_T__o *SideEffectList; // x19
  BattleLogicFunction___c_c *v43; // x8
  System_Action_object__o *_9__49_0; // x20
  Il2CppObject *v45; // x21
  struct BattleLogicFunction___c_StaticFields *static_fields; // x0
  int32_t v47; // w2
  const MethodInfo *v48; // x3
  _DWORD *v49; // [xsp+8h] [xbp-88h]
  unsigned __int64 v51; // [xsp+18h] [xbp-78h]
  System_Int32_array *questIndividualityArray; // [xsp+28h] [xbp-68h]
  System_Int32_array *questIndividualityArraya; // [xsp+28h] [xbp-68h]

  if ( (byte_49BDB84 & 1) == 0 )
  {
    sub_1B4CF90(&System_Action_BattleActionData__TypeInfo, sideEffectArg);
    sub_1B4CF90(&Method_BasicHelper_ForEach_BattleActionData___, v9);
    sub_1B4CF90(&bool___TypeInfo, v10);
    sub_1B4CF90(&Method_DataManager_GetMaster_SkillLvMaster___, v11);
    sub_1B4CF90(&DataManager_TypeInfo, v12);
    sub_1B4CF90(&Method_BattleLogicFunction___c__SetFuncSideEffect_b__49_0__, v13);
    sub_1B4CF90(&BattleLogicFunction___c_TypeInfo, v14);
    byte_49BDB84 = 1;
  }
  if ( actionData && actorSvtData )
  {
    if ( !DataManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
    Master_object = DataManager__GetMaster_object_((const MethodInfo_2F01AD0 *)Method_DataManager_GetMaster_SkillLvMaster___);
    FuncSideEffectTargetServants = (void *)sub_1B4D038(bool___TypeInfo, 2LL);
    if ( !FuncSideEffectTargetServants )
      goto LABEL_49;
    v18 = *((_QWORD *)FuncSideEffectTargetServants + 3);
    if ( !(_DWORD)v18 )
      goto LABEL_48;
    *((_BYTE *)FuncSideEffectTargetServants + 32) = 1;
    if ( (int)v18 >= 1 )
    {
      v19 = 0LL;
      v49 = FuncSideEffectTargetServants;
      while ( 1 )
      {
        if ( v19 >= (unsigned int)v18 )
          goto LABEL_48;
        if ( !sideEffectArg )
          goto LABEL_49;
        v51 = v19;
        v20 = *((_BYTE *)FuncSideEffectTargetServants + v19 + 32) != 0;
        questIndividualityArray = (System_Int32_array *)((__int64 (__fastcall *)(BattleLogicFunction_FuncSideEffectFunctionArgument_o *, bool, Il2CppMethodPointer))sideEffectArg->klass->vtable._6_GetActArray.method)(
                                                          sideEffectArg,
                                                          v20,
                                                          sideEffectArg->klass->vtable._7_SetSideEffect.methodPtr);
        FuncSideEffectTargetServants = BattleActionData__GetFuncSideEffectTargetServants(
                                         actionData,
                                         this->fields.data,
                                         v20,
                                         targetIds,
                                         0LL);
        if ( !FuncSideEffectTargetServants )
          goto LABEL_49;
        v21 = *((_QWORD *)FuncSideEffectTargetServants + 3);
        v22 = FuncSideEffectTargetServants;
        if ( (int)v21 >= 1 )
          break;
LABEL_24:
        FuncSideEffectTargetServants = v49;
        LODWORD(v18) = v49[6];
        v19 = v51 + 1;
        if ( (__int64)(v51 + 1) >= (int)v18 )
          goto LABEL_25;
      }
      v23 = 0LL;
      while ( 1 )
      {
        if ( v23 >= (unsigned int)v21 )
          goto LABEL_48;
        v24 = (BattleServantData_o *)v22[v23 + 4];
        FuncSideEffectTargetServants = BattleServantData__GetAddSideEffectBuffList(
                                         actorSvtData,
                                         (BuffList_ACTION_array *)questIndividualityArray,
                                         v24,
                                         0LL,
                                         0LL);
        if ( !FuncSideEffectTargetServants )
          goto LABEL_49;
        v25 = *((_QWORD *)FuncSideEffectTargetServants + 3);
        v26 = FuncSideEffectTargetServants;
        if ( (int)v25 >= 1 )
          break;
LABEL_23:
        LODWORD(v21) = *((_DWORD *)v22 + 6);
        if ( (__int64)++v23 >= (int)v21 )
          goto LABEL_24;
      }
      v27 = 0LL;
      while ( v27 < (unsigned int)v25 )
      {
        if ( !v24 )
          goto LABEL_49;
        v28 = (BattleBuffData_BuffData_o *)v26[v27 + 4];
        SideEffectActionData_43040420 = BattleActionData__MakeSideEffectActionData_43040420(
                                          actionData,
                                          4,
                                          v24->fields.uniqueId,
                                          0LL);
        BattleLogicFunction__SetSideEffectBuff(
          this,
          (SkillLvMaster_o *)Master_object,
          SideEffectActionData_43040420,
          v28,
          (BattleLogicFunction_CommonSideEffectFunctionArgument_o *)sideEffectArg,
          1,
          v30);
        LODWORD(v25) = *((_DWORD *)v26 + 6);
        if ( (__int64)++v27 >= (int)v25 )
          goto LABEL_23;
      }
LABEL_48:
      sub_1B4D1F4(FuncSideEffectTargetServants, v17);
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
      sub_1B4D1EC(FuncSideEffectTargetServants, v17);
    }
    v32 = *((_DWORD *)FuncSideEffectTargetServants + 6);
    v33 = FuncSideEffectTargetServants;
    if ( v32 >= 1 )
    {
      v34 = 0;
      while ( 1 )
      {
        if ( v34 >= v32 )
          goto LABEL_48;
        v35 = (char *)&v33[2 * v34];
        v36 = *((_QWORD *)v35 + 4);
        if ( !v36 )
          goto LABEL_49;
        FuncSideEffectTargetServants = BattleServantData__GetFieldIndividualityChangedFunctionBuff(
                                         *((BattleServantData_o **)v35 + 4),
                                         questIndividualityArraya,
                                         0LL);
        if ( !FuncSideEffectTargetServants )
          goto LABEL_49;
        v37 = *((_QWORD *)FuncSideEffectTargetServants + 3);
        v38 = FuncSideEffectTargetServants;
        if ( (int)v37 >= 1 )
          break;
LABEL_38:
        v32 = v33[6];
        if ( (int)++v34 >= v32 )
          goto LABEL_39;
      }
      v39 = 0LL;
      while ( v39 < (unsigned int)v37 )
      {
        v40 = (BattleBuffData_BuffData_o *)v38[v39 + 4];
        FuncSideEffectTargetServants = BattleActionData__MakeSideEffectActionData_43040420(
                                         actionData,
                                         4,
                                         *(_DWORD *)(v36 + 24),
                                         0LL);
        if ( !FuncSideEffectTargetServants )
          goto LABEL_49;
        *((_DWORD *)FuncSideEffectTargetServants + 8) = *(_DWORD *)(v36 + 24);
        BattleLogicFunction__SetSideEffectBuff(
          this,
          (SkillLvMaster_o *)Master_object,
          (BattleActionData_o *)FuncSideEffectTargetServants,
          v40,
          (BattleLogicFunction_CommonSideEffectFunctionArgument_o *)sideEffectArg,
          1,
          v41);
        LODWORD(v37) = *((_DWORD *)v38 + 6);
        if ( (__int64)++v39 >= (int)v37 )
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
      v43 = BattleLogicFunction___c_TypeInfo;
      if ( !BattleLogicFunction___c_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(BattleLogicFunction___c_TypeInfo);
        v43 = BattleLogicFunction___c_TypeInfo;
      }
      _9__49_0 = (System_Action_object__o *)v43->static_fields->__9__49_0;
      if ( !_9__49_0 )
      {
        if ( !v43->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(v43);
          v43 = BattleLogicFunction___c_TypeInfo;
        }
        v45 = (Il2CppObject *)v43->static_fields->__9;
        _9__49_0 = (System_Action_object__o *)sub_1B4D1DC(System_Action_BattleActionData__TypeInfo);
        System_Action_object____ctor(_9__49_0, v45, Method_BattleLogicFunction___c__SetFuncSideEffect_b__49_0__, 0LL);
        static_fields = BattleLogicFunction___c_TypeInfo->static_fields;
        static_fields->__9__49_0 = (struct System_Action_BattleActionData__o *)_9__49_0;
        sub_1B4CF34((CGThumbnailListItem_o *)&static_fields->__9__49_0, (int32_t)_9__49_0, v47, v48);
      }
      BasicHelper__ForEach_object_(
        SideEffectList,
        (System_Action_T__o *)_9__49_0,
        (const MethodInfo_2EEE790 *)Method_BasicHelper_ForEach_BattleActionData___);
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
  if ( (byte_49BDB9B & 1) == 0 )
  {
    this = (BattleLogicFunction_o *)sub_1B4CF90(&BattleActionData_BuffData___TypeInfo, actiondata);
    byte_49BDB9B = 1;
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
                                    0LL);
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
                         0LL,
                         0LL,
                         v19);
      BattleActionData__addAction(actiondata, NoEffectObject, 0LL);
      if ( NoEffectObject )
      {
        this = (BattleLogicFunction_o *)BattleActionData__getBuffList(NoEffectObject, funcIndex, 0LL);
        v28 = this;
        if ( !this )
          return;
        goto LABEL_15;
      }
LABEL_26:
      sub_1B4D1EC(this, actiondata);
    }
  }
  v21 = BattleServantData__resultHeal(targetSvtData, healPoint, 0LL);
  this = (BattleLogicFunction_o *)BattleLogicFunction__getFunctionObject(
                                    (BattleLogicFunction_o *)v21,
                                    funcEnt,
                                    targetSvtData->fields.uniqueId,
                                    funcIndex,
                                    isCommandSideEffect,
                                    0LL,
                                    v22);
  if ( !v20 )
    goto LABEL_26;
  v25 = this;
  v20->fields.tamamocatTreasureDeviceIds = (struct System_Int32_array *)this;
  sub_1B4CF34((CGThumbnailListItem_o *)&v20->fields.tamamocatTreasureDeviceIds, (int32_t)this, v23, v24);
  if ( !baseVals )
    goto LABEL_26;
  LODWORD(v20->fields.buffProgressTurnSelfList) = DataVals__GetParam(baseVals, 65, 0, 0LL);
  this = (BattleLogicFunction_o *)sub_1B4D038(BattleActionData_BuffData___TypeInfo, 1LL);
  if ( !this )
    goto LABEL_26;
  v28 = this;
  if ( v25 )
  {
    this = (BattleLogicFunction_o *)sub_1B4D0CC(v25, this->klass->_1.element_class);
    if ( !this )
    {
      v33 = sub_1B4D210(0LL);
      sub_1B4D0B8(v33, 0LL);
    }
  }
  if ( !LODWORD(v28->fields.logic) )
    goto LABEL_27;
  v28->fields.logictarget = (struct BattleLogicTarget_o *)v25;
  sub_1B4CF34((CGThumbnailListItem_o *)&v28->fields.logictarget, (int32_t)v25, v26, v27);
LABEL_15:
  logic = (int)v28->fields.logic;
  if ( logic >= 1 )
  {
    v30 = 0LL;
    while ( (unsigned int)v30 < logic )
    {
      v31 = (BattleActionData_BuffData_o *)*((_QWORD *)&v28->fields.logictarget + v30);
      if ( !v31 )
        goto LABEL_26;
      v31->fields.isHideEffect = isHideEffect;
      this = (BattleLogicFunction_o *)BattleServantData__isLogicResultAlive(targetSvtData, 0LL);
      if ( ((unsigned __int8)this & 1) != 0 )
        BattleActionData_BuffData__SetCheckHideWhenDeadInfo(v31, baseVals, 0LL);
      logic = (int)v28->fields.logic;
      if ( (int)++v30 >= logic )
        return;
    }
LABEL_27:
    sub_1B4D1F4(this, actiondata);
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
      sub_1B4D1EC(data, funcResult);
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
      sub_1B4D1EC(SkillFromBuff, v13);
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
  __int64 v11; // x1
  __int64 v12; // x1
  __int64 v13; // x1
  DataManager_o *Instance; // x0
  __int64 v15; // x1
  struct BattleActionData_SideEffectData_array *SideEffectList_k__BackingField; // x25
  int max_length; // w8
  int v18; // w20
  BattleActionData_SideEffectData_o *v19; // x23
  BattleServantData_o *v20; // x26
  int32_t v21; // w1
  struct System_Threading_CancellationTokenSource_o *m_CancellationTokenSource; // x8
  DataManager_o *v23; // x27
  unsigned __int64 v24; // x23
  BattleBuffData_BuffData_o *v25; // x29
  BattleActionData_o *v26; // x28
  int v27; // w0
  const MethodInfo *v28; // x6
  int32_t v29; // w0
  struct BattleActionData_SideEffectData_array *v30; // [xsp+8h] [xbp-88h]
  SkillLvMaster_o *v32; // [xsp+18h] [xbp-78h]
  System_Collections_Generic_KeyValuePair_int__int__o pairAttackAndTarget; // [xsp+28h] [xbp-68h] BYREF
  System_Collections_Generic_KeyValuePair_int__int__o p_pairAttackAndTarget; // 0:x0.8
  System_Collections_Generic_KeyValuePair_int__int__o v36; // 0:x1.8
  System_Collections_Generic_KeyValuePair_int__int__o v37; // 0:x1.8

  if ( (byte_49BDB86 & 1) == 0 )
  {
    sub_1B4CF90(&BattleActionData_TypeInfo, arg);
    sub_1B4CF90(&Method_DataManager_GetMasterData_SkillLvMaster___, v11);
    sub_1B4CF90(&Method_System_Collections_Generic_KeyValuePair_int__int___ctor__, v12);
    sub_1B4CF90(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v13);
    byte_49BDB86 = 1;
  }
  pairAttackAndTarget = 0LL;
  Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37B4410 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance
    || (Instance = (DataManager_o *)DataManager__GetMasterData_object_(
                                      Instance,
                                      (const MethodInfo_2F01B24 *)Method_DataManager_GetMasterData_SkillLvMaster___),
        v32 = (SkillLvMaster_o *)Instance,
        !attackArg)
    || (SideEffectList_k__BackingField = attackArg->fields._SideEffectList_k__BackingField) == 0LL )
  {
LABEL_25:
    sub_1B4D1EC(Instance, v15);
  }
  max_length = SideEffectList_k__BackingField->max_length;
  if ( max_length >= 1 )
  {
    v18 = 0;
    v30 = attackArg->fields._SideEffectList_k__BackingField;
    do
    {
      if ( v18 >= (unsigned int)max_length )
        goto LABEL_26;
      v19 = SideEffectList_k__BackingField->m_Items[v18];
      if ( !v19 )
        goto LABEL_25;
      Instance = (DataManager_o *)this->fields.data;
      if ( !Instance )
        goto LABEL_25;
      Instance = (DataManager_o *)BattleData__getServantData((BattleData_o *)Instance, v19->fields.targetId, 0LL);
      if ( Instance )
      {
        if ( !actionSvtData )
          goto LABEL_25;
        v20 = (BattleServantData_o *)Instance;
        v21 = BattleLogicFunction_SideEffectMakeArgument__MakeCheckKey(attackArg, actionSvtData->fields.uniqueId, 0LL);
        p_pairAttackAndTarget = (System_Collections_Generic_KeyValuePair_int__int__o)&pairAttackAndTarget;
        System_Collections_Generic_KeyValuePair_int__int____ctor(
          p_pairAttackAndTarget,
          v21,
          v20->fields.uniqueId,
          (const MethodInfo_34C0274 *)Method_System_Collections_Generic_KeyValuePair_int__int___ctor__);
        if ( !mainAction )
          goto LABEL_25;
        v36 = pairAttackAndTarget;
        Instance = (DataManager_o *)BattleActionData__isReflectedAttackSideEffect(mainAction, v36, 0LL);
        if ( ((unsigned __int8)Instance & 1) == 0 )
        {
          Instance = (DataManager_o *)BattleServantData__getAttackSideEffectBuffList_43656588(
                                        actionSvtData,
                                        v19->fields.sideEffectActs,
                                        command,
                                        v20,
                                        0LL);
          if ( !Instance )
            goto LABEL_25;
          m_CancellationTokenSource = Instance->fields.m_CancellationTokenSource;
          v23 = Instance;
          if ( m_CancellationTokenSource )
          {
            if ( (int)m_CancellationTokenSource >= 1 )
            {
              v24 = 0LL;
              while ( v24 < (unsigned int)m_CancellationTokenSource )
              {
                v25 = (BattleBuffData_BuffData_o *)*((_QWORD *)&v23->fields._DispLog + v24);
                v26 = (BattleActionData_o *)sub_1B4D1DC(BattleActionData_TypeInfo);
                BattleActionData___ctor(v26, 0LL);
                if ( !v26 )
                  goto LABEL_25;
                v26->fields.actorId = actionSvtData->fields.uniqueId;
                v26->fields.targetId = v20->fields.uniqueId;
                v27 = ((__int64 (__fastcall *)(BattleLogicFunction_SideEffectMakeArgument_o *, Il2CppMethodPointer))attackArg->klass->vtable._5_unknown.method)(
                        attackArg,
                        attackArg->klass->vtable._6_Init.methodPtr);
                BattleLogicFunction__SetSideEffectBuff(
                  this,
                  v32,
                  v26,
                  v25,
                  (BattleLogicFunction_CommonSideEffectFunctionArgument_o *)arg,
                  v27 == 1,
                  v28);
                v29 = ((__int64 (__fastcall *)(BattleLogicFunction_SideEffectMakeArgument_o *, Il2CppMethodPointer))attackArg->klass->vtable._5_unknown.method)(
                        attackArg,
                        attackArg->klass->vtable._6_Init.methodPtr);
                BattleActionData__addSideEffectActionData(mainAction, v26, v29, 0LL);
                LODWORD(m_CancellationTokenSource) = v23->fields.m_CancellationTokenSource;
                if ( (__int64)++v24 >= (int)m_CancellationTokenSource )
                  goto LABEL_22;
              }
LABEL_26:
              sub_1B4D1F4(Instance, v15);
            }
LABEL_22:
            v37 = pairAttackAndTarget;
            BattleActionData__addReflectAttackSideEffect(mainAction, v37, 0LL);
            SideEffectList_k__BackingField = v30;
          }
        }
      }
      max_length = SideEffectList_k__BackingField->max_length;
      ++v18;
    }
    while ( v18 < max_length );
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
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x1
  __int64 v12; // x1
  __int64 v13; // x1
  struct BattleData_o *data; // x8
  _QWORD *v15; // x9
  __int64 logic_low; // x10
  int32_t funcType; // w23
  Il2CppObject *MasterData_object; // x22
  struct BattleLogic_o *logic; // x8
  BattleLogicFunction_o *v20; // x23
  unsigned __int64 v21; // x26
  const MethodInfo *v22; // x4
  BattleLogicFunction_o *v23; // x24
  BattleLogicFunction_o *v24; // x25

  v8 = this;
  if ( (byte_49BDB83 & 1) == 0 )
  {
    sub_1B4CF90(&Method_DataManager_GetMasterData_FunctionMaster___, *(_QWORD *)&targetId);
    sub_1B4CF90(&Method_DataMasterBase_FunctionMaster__FunctionEntity__int__GetEntity__, v9);
    sub_1B4CF90(&int___TypeInfo, v10);
    sub_1B4CF90(&Method_System_Collections_Generic_List_int__AddRange__, v11);
    sub_1B4CF90(&Method_System_Collections_Generic_List_int__Add__, v12);
    this = (BattleLogicFunction_o *)sub_1B4CF90(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v13);
    byte_49BDB83 = 1;
  }
  if ( !action )
    goto LABEL_23;
  this = (BattleLogicFunction_o *)action->fields.funcTargetList;
  if ( !this )
    goto LABEL_23;
  data = this->fields.data;
  v15 = Method_System_Collections_Generic_List_int__Add__;
  ++HIDWORD(this->fields.logic);
  if ( !data )
    goto LABEL_23;
  logic_low = SLODWORD(this->fields.logic);
  if ( (unsigned int)logic_low >= LODWORD(data->fields.m_CancellationTokenSource) )
  {
    System_Collections_Generic_List_int___AddWithResize(
      (System_Collections_Generic_List_int__o *)this,
      targetId,
      *(const MethodInfo_35631B8 **)(*(_QWORD *)(v15[4] + 192LL) + 112LL));
  }
  else
  {
    LODWORD(this->fields.logic) = logic_low + 1;
    *((_DWORD *)&data->fields.rootfsm + logic_low) = targetId;
  }
  if ( !baseVals )
    goto LABEL_23;
  funcType = baseVals->fields.funcType;
  this = (BattleLogicFunction_o *)sub_1B4D038(int___TypeInfo, 1LL);
  if ( !this )
    goto LABEL_23;
  if ( !LODWORD(this->fields.logic) )
    goto LABEL_24;
  LODWORD(this->fields.logictarget) = targetId;
  BattleActionData__AddHpDecreaseFuncTargets(action, funcType, (System_Int32_array *)this, 0LL);
  this = (BattleLogicFunction_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37B4410 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !this
    || (MasterData_object = DataManager__GetMasterData_object_(
                              (DataManager_o *)this,
                              (const MethodInfo_2F01B24 *)Method_DataManager_GetMasterData_FunctionMaster___),
        (this = (BattleLogicFunction_o *)DataVals__GetDependFuncIdArray(baseVals, 0LL)) == 0LL) )
  {
LABEL_23:
    sub_1B4D1EC(this, *(_QWORD *)&targetId);
  }
  logic = this->fields.logic;
  v20 = this;
  if ( (int)logic >= 1 )
  {
    v21 = 0LL;
    while ( v21 < (unsigned int)logic )
    {
      if ( !MasterData_object )
        goto LABEL_23;
      this = (BattleLogicFunction_o *)DataMasterBase_object__object__int___GetEntity(
                                        (DataMasterBase_TMaster__TEntity__PKType__o *)MasterData_object,
                                        *((_DWORD *)&v20->fields.logictarget + v21),
                                        (const MethodInfo_319D99C *)Method_DataMasterBase_FunctionMaster__FunctionEntity__int__GetEntity__);
      if ( this )
      {
        v23 = this;
        this = (BattleLogicFunction_o *)BattleLogicFunction__getTargetids(
                                          v8,
                                          action,
                                          HIDWORD(this->fields.logic),
                                          baseVals,
                                          v22);
        if ( !action->fields.funcTargetList )
          goto LABEL_23;
        v24 = this;
        System_Collections_Generic_List_int___AddRange(
          action->fields.funcTargetList,
          (System_Collections_Generic_IEnumerable_T__o *)this,
          (const MethodInfo_35633C4 *)Method_System_Collections_Generic_List_int__AddRange__);
        BattleActionData__AddHpDecreaseFuncTargets(action, (int32_t)v23->fields.logic, (System_Int32_array *)v24, 0LL);
      }
      LODWORD(logic) = v20->fields.logic;
      if ( (__int64)++v21 >= (int)logic )
        return;
    }
LABEL_24:
    sub_1B4D1F4(this, *(_QWORD *)&targetId);
  }
}


// local variable allocation has failed, the output may be wrong!
void __fastcall BattleLogicFunction__UpdateBuffProgressTurn(
        BattleLogicFunction_o *this,
        int32_t buffType,
        bool *isSelfTurn,
        const MethodInfo *method)
{
  const MethodInfo *v4; // x4
  BattleLogicFunction_o *v7; // x21
  __int64 v8; // x1
  _BOOL8 IsUpdateBuffProgressTurn; // x0
  const MethodInfo *v10; // x4
  bool v11; // w8

  v7 = this;
  if ( (byte_49BDB7F & 1) == 0 )
  {
    sub_1B4CF90(&StringLiteral_15184/*"WAR_BOARD_PROGRESS_OPPONENT_BUFF_TYPES"*/, *(_QWORD *)&buffType);
    this = (BattleLogicFunction_o *)sub_1B4CF90(&StringLiteral_15185/*"WAR_BOARD_PROGRESS_SELF_BUFF_TYPES"*/, v8);
    byte_49BDB7F = 1;
  }
  IsUpdateBuffProgressTurn = BattleLogicFunction__IsUpdateBuffProgressTurn(
                               this,
                               buffType,
                               (System_String_o *)StringLiteral_15185/*"WAR_BOARD_PROGRESS_SELF_BUFF_TYPES"*/,
                               &v7->fields.buffProgressTurnSelfList,
                               v4);
  if ( IsUpdateBuffProgressTurn )
  {
    v11 = 1;
  }
  else
  {
    if ( !BattleLogicFunction__IsUpdateBuffProgressTurn(
            (BattleLogicFunction_o *)IsUpdateBuffProgressTurn,
            buffType,
            (System_String_o *)StringLiteral_15184/*"WAR_BOARD_PROGRESS_OPPONENT_BUFF_TYPES"*/,
            &v7->fields.buffProgressTurnOpponentList,
            v10) )
      return;
    v11 = 0;
  }
  *isSelfTurn = v11;
}


bool __fastcall BattleLogicFunction__UpdateUserEquipSkillChargeTurn(
        BattleLogicFunction_o *this,
        DataVals_o *dataVals,
        bool isProgress,
        const MethodInfo *method)
{
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x20
  __int64 v12; // x1
  BattleData_o *data; // x0
  System_Collections_Generic_IEnumerable_T__o *v14; // x22
  System_Int32_array *TargetList; // x0
  int32_t v16; // w2
  const MethodInfo *v17; // x3
  System_Action_object__o *v18; // x0
  System_Action_T__o *v19; // x21
  __int64 *v20; // x8

  if ( (byte_49BDBB4 & 1) == 0 )
  {
    sub_1B4CF90(&System_Action_BattleSkillInfoData__TypeInfo, dataVals);
    sub_1B4CF90(&Method_BasicHelper_ForEach_BattleSkillInfoData___, v7);
    sub_1B4CF90(&Method_BattleLogicFunction___c__DisplayClass103_0__UpdateUserEquipSkillChargeTurn_b__0__, v8);
    sub_1B4CF90(&Method_BattleLogicFunction___c__DisplayClass103_0__UpdateUserEquipSkillChargeTurn_b__1__, v9);
    sub_1B4CF90(&BattleLogicFunction___c__DisplayClass103_0_TypeInfo, v10);
    byte_49BDBB4 = 1;
  }
  v11 = sub_1B4D1DC(BattleLogicFunction___c__DisplayClass103_0_TypeInfo);
  BattleLogicFunction___c__DisplayClass103_0___ctor((BattleLogicFunction___c__DisplayClass103_0_o *)v11, 0LL);
  data = this->fields.data;
  if ( !data
    || (data = (BattleData_o *)BattleData__getMasterSkillInfos(data, 0LL), !dataVals)
    || (v14 = (System_Collections_Generic_IEnumerable_T__o *)data,
        data = (BattleData_o *)DataVals__GetValue(dataVals, 0LL),
        !v11) )
  {
    sub_1B4D1EC(data, v12);
  }
  *(_DWORD *)(v11 + 16) = (_DWORD)data;
  *(_DWORD *)(v11 + 20) = DataVals__GetValue2(dataVals, 0LL) - 1;
  TargetList = DataVals__GetTargetList(dataVals, 0LL);
  *(_QWORD *)(v11 + 24) = TargetList;
  sub_1B4CF34((CGThumbnailListItem_o *)(v11 + 24), (int32_t)TargetList, v16, v17);
  *(_BYTE *)(v11 + 32) = 0;
  v18 = (System_Action_object__o *)sub_1B4D1DC(System_Action_BattleSkillInfoData__TypeInfo);
  v19 = (System_Action_T__o *)v18;
  if ( isProgress )
    v20 = &Method_BattleLogicFunction___c__DisplayClass103_0__UpdateUserEquipSkillChargeTurn_b__0__;
  else
    v20 = &Method_BattleLogicFunction___c__DisplayClass103_0__UpdateUserEquipSkillChargeTurn_b__1__;
  System_Action_object____ctor(v18, (Il2CppObject *)v11, *v20, 0LL);
  BasicHelper__ForEach_object_(v14, v19, (const MethodInfo_2EEE790 *)Method_BasicHelper_ForEach_BattleSkillInfoData___);
  return *(_BYTE *)(v11 + 32);
}


void __fastcall BattleLogicFunction___FunctionRevivalInDetail_g__AfterProcessForRevivedServants_110_6(
        BattleLogicFunction_o *this,
        BattleLogicFunction___c__DisplayClass110_0_o *a2,
        const MethodInfo *method)
{
  BattleLogicFunction_o *v4; // x20
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x1
  System_Collections_Generic_List_T__o *revivedSvtList; // x21
  BattleLogicFunction___c_c *v13; // x0
  System_Func_object__bool__o *_9__110_7; // x22
  Il2CppObject *v15; // x23
  struct BattleLogicFunction___c_StaticFields *static_fields; // x0
  int32_t v17; // w2
  const MethodInfo *v18; // x3
  struct BattleActionData_o *lastActionData; // x8
  System_Collections_Generic_List_object__o *v20; // x19
  System_Action_object__o *v21; // x20
  Il2CppObject *v22; // x21
  struct BattleLogicFunction___c_StaticFields *v23; // x0
  int32_t v24; // w2
  const MethodInfo *v25; // x3

  v4 = this;
  if ( (byte_49BDBD2 & 1) == 0 )
  {
    sub_1B4CF90(&System_Action_BattleServantData__TypeInfo, a2);
    sub_1B4CF90(&Method_BasicHelper_Any_BattleServantData___, v5);
    sub_1B4CF90(&System_Func_BattleServantData__bool__TypeInfo, v6);
    sub_1B4CF90(&Method_System_Collections_Generic_List_BattleServantData__ForEach__, v7);
    sub_1B4CF90(&Method_System_Collections_Generic_List_BattleServantData__get_Count__, v8);
    sub_1B4CF90(&Method_BattleLogicFunction___c__FunctionRevivalInDetail_b__110_7__, v9);
    sub_1B4CF90(&Method_BattleLogicFunction___c__FunctionRevivalInDetail_b__110_8__, v10);
    this = (BattleLogicFunction_o *)sub_1B4CF90(&BattleLogicFunction___c_TypeInfo, v11);
    byte_49BDBD2 = 1;
  }
  revivedSvtList = (System_Collections_Generic_List_T__o *)a2->fields.revivedSvtList;
  if ( !revivedSvtList )
    goto LABEL_25;
  if ( revivedSvtList->fields._size >= 1 )
  {
    v13 = BattleLogicFunction___c_TypeInfo;
    if ( !BattleLogicFunction___c_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(BattleLogicFunction___c_TypeInfo);
      v13 = BattleLogicFunction___c_TypeInfo;
    }
    _9__110_7 = (System_Func_object__bool__o *)v13->static_fields->__9__110_7;
    if ( !_9__110_7 )
    {
      if ( !v13->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(v13);
        v13 = BattleLogicFunction___c_TypeInfo;
      }
      v15 = (Il2CppObject *)v13->static_fields->__9;
      _9__110_7 = (System_Func_object__bool__o *)sub_1B4D1DC(System_Func_BattleServantData__bool__TypeInfo);
      System_Func_object__bool____ctor(
        _9__110_7,
        v15,
        Method_BattleLogicFunction___c__FunctionRevivalInDetail_b__110_7__,
        0LL);
      static_fields = BattleLogicFunction___c_TypeInfo->static_fields;
      static_fields->__9__110_7 = (struct System_Func_BattleServantData__bool__o *)_9__110_7;
      sub_1B4CF34((CGThumbnailListItem_o *)&static_fields->__9__110_7, (int32_t)_9__110_7, v17, v18);
    }
    this = (BattleLogicFunction_o *)BasicHelper__Any_object_(
                                      revivedSvtList,
                                      (System_Func_T__bool__o *)_9__110_7,
                                      (const MethodInfo_2EEC494 *)Method_BasicHelper_Any_BattleServantData___);
    if ( ((unsigned __int8)this & 1) != 0 )
    {
      lastActionData = a2->fields.lastActionData;
      if ( !lastActionData )
        goto LABEL_25;
      lastActionData->fields.redrawCommandCard = 1;
      this = (BattleLogicFunction_o *)v4->fields.data;
      if ( !this )
        goto LABEL_25;
      BattleData__createCommandCard((BattleData_o *)this, 0LL);
      this = (BattleLogicFunction_o *)v4->fields.data;
      if ( !this )
        goto LABEL_25;
      BattleData__shuffleCommand((BattleData_o *)this, 0LL);
    }
    this = (BattleLogicFunction_o *)BattleLogicFunction___c_TypeInfo;
    v20 = (System_Collections_Generic_List_object__o *)a2->fields.revivedSvtList;
    if ( !BattleLogicFunction___c_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(BattleLogicFunction___c_TypeInfo);
      this = (BattleLogicFunction_o *)BattleLogicFunction___c_TypeInfo;
    }
    v21 = (System_Action_object__o *)*((_QWORD *)this[2].monitor + 16);
    if ( !v21 )
    {
      if ( !LODWORD(this[2].fields.tamamocatTreasureDeviceIds) )
      {
        j_il2cpp_runtime_class_init_0(this);
        this = (BattleLogicFunction_o *)BattleLogicFunction___c_TypeInfo;
      }
      v22 = *(Il2CppObject **)this[2].monitor;
      v21 = (System_Action_object__o *)sub_1B4D1DC(System_Action_BattleServantData__TypeInfo);
      System_Action_object____ctor(v21, v22, Method_BattleLogicFunction___c__FunctionRevivalInDetail_b__110_8__, 0LL);
      v23 = BattleLogicFunction___c_TypeInfo->static_fields;
      v23->__9__110_8 = (struct System_Action_BattleServantData__o *)v21;
      sub_1B4CF34((CGThumbnailListItem_o *)&v23->__9__110_8, (int32_t)v21, v24, v25);
    }
    if ( v20 )
    {
      System_Collections_Generic_List_object___ForEach(
        v20,
        (System_Action_T__o *)v21,
        (const MethodInfo_3580C1C *)Method_System_Collections_Generic_List_BattleServantData__ForEach__);
      return;
    }
LABEL_25:
    sub_1B4D1EC(this, a2);
  }
}


BattleActionData_o *__fastcall BattleLogicFunction___FunctionRevivalInDetail_g__GenerateRevivalActionData_110_3(
        BattleLogicFunction_o *this,
        BattleServantData_o *target,
        int32_t requiredRevivalTargetId,
        int32_t entryIndex,
        int32_t expelledUniqueId,
        BattleLogicFunction___c__DisplayClass110_0_o *a6,
        const MethodInfo *method)
{
  __int64 v13; // x1
  __int64 v14; // x1
  __int64 v15; // x22
  BattleData_o *data; // x0
  __int64 v17; // x1
  int32_t v18; // w2
  const MethodInfo *v19; // x3
  struct BattleActionData_o *actionData; // x8
  int32_t v21; // w1
  BattleLogicFunction_HealFuncApplyArgs_o *healFuncApplyArgs; // x26
  bool v23; // w0
  const MethodInfo *v25; // [xsp+10h] [xbp-60h]

  if ( (byte_49BDBD0 & 1) == 0 )
  {
    sub_1B4CF90(&BattleActionData_TypeInfo, target);
    sub_1B4CF90(&BattleLogicFunction_HealFuncApplyArgs_TypeInfo, v13);
    sub_1B4CF90(&StringLiteral_8562/*"MOTION_MAKE_REVIVE"*/, v14);
    byte_49BDBD0 = 1;
  }
  v15 = sub_1B4D1DC(BattleActionData_TypeInfo);
  BattleActionData___ctor((BattleActionData_o *)v15, 0LL);
  actionData = a6->fields.actionData;
  if ( !a6->fields.actionData )
    goto LABEL_13;
  if ( !v15 )
    goto LABEL_13;
  *(_DWORD *)(v15 + 32) = actionData->fields.actorId;
  if ( !target )
    goto LABEL_13;
  *(_DWORD *)(v15 + 36) = target->fields.uniqueId;
  *(_DWORD *)(v15 + 16) = actionData->fields.state;
  v21 = StringLiteral_8562/*"MOTION_MAKE_REVIVE"*/;
  *(_QWORD *)(v15 + 64) = StringLiteral_8562/*"MOTION_MAKE_REVIVE"*/;
  sub_1B4CF34((CGThumbnailListItem_o *)(v15 + 64), v21, v18, v19);
  if ( !a6->fields.actionData
    || (*(_BYTE *)(v15 + 241) = a6->fields.actionData->fields.isForcedSpeedOne,
        healFuncApplyArgs = (BattleLogicFunction_HealFuncApplyArgs_o *)sub_1B4D1DC(BattleLogicFunction_HealFuncApplyArgs_TypeInfo),
        BattleLogicFunction_HealFuncApplyArgs___ctor(healFuncApplyArgs, 0LL),
        !healFuncApplyArgs)
    || (healFuncApplyArgs->fields._RevivalTargetId_k__BackingField = requiredRevivalTargetId,
        healFuncApplyArgs->fields._EntryIndex_k__BackingField = entryIndex,
        healFuncApplyArgs->fields._ExpelledUniqueId_k__BackingField = expelledUniqueId,
        (data = this->fields.data) == 0LL) )
  {
LABEL_13:
    sub_1B4D1EC(data, v17);
  }
  v23 = BattleData__GetEntryIndex(data, target, 0LL) == entryIndex && BattleServantData__IsDeadKeepStanding(target, 0LL);
  healFuncApplyArgs->fields._DeadKeepStanding_k__BackingField = v23;
  BattleLogicFunction__SetGainHpBuff(
    this,
    (BattleActionData_o *)v15,
    a6->fields.healPoint,
    a6->fields.funcIndex,
    target,
    a6->fields.funcEnt,
    a6->fields.baseVals,
    a6->fields.isCommandSideEffect,
    0,
    healFuncApplyArgs,
    v25);
  return (BattleActionData_o *)v15;
}


void __fastcall BattleLogicFunction___FunctionRevivalInDetail_g__SetMissIfNoActions_110_4(
        BattleLogicFunction_o *this,
        BattleLogicFunction___c__DisplayClass110_0_o *a2,
        const MethodInfo *method)
{
  const MethodInfo *v3; // x7
  struct System_Collections_Generic_List_BattleServantData__o *revivedSvtList; // x8

  if ( (byte_49BDBD1 & 1) == 0 )
  {
    this = (BattleLogicFunction_o *)sub_1B4CF90(
                                      &Method_System_Collections_Generic_List_BattleServantData__get_Count__,
                                      a2);
    byte_49BDBD1 = 1;
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
                                          0LL,
                                          0LL,
                                          v3),
        !a2->fields.actionData) )
  {
LABEL_8:
    sub_1B4D1EC(this, a2);
  }
  BattleActionData__addAction(a2->fields.actionData, (BattleActionData_o *)this, 0LL);
}


bool __fastcall BattleLogicFunction___FunctionRevivalInDetail_g__TryGetEntryIndex_110_5(
        BattleLogicFunction_o *this,
        BattleServantData_o *target,
        int32_t *entryIndex,
        int32_t *expelledUniqueId,
        BattleLogicFunction___c__DisplayClass110_0_o *a5,
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
  data = (BattleData_o *)BattleData__GetEntryIndex(data, target, 0LL);
  *entryIndex = (int)data;
  if ( !v10 )
    goto LABEL_13;
  if ( ((unsigned int)data & 0x80000000) == 0 )
  {
    result = 1;
    *expelledUniqueId = v10->fields.uniqueId;
    return result;
  }
  DeckIndex = BattleServantData__getDeckIndex(v10, 0LL);
  *entryIndex = DeckIndex;
  target = (BattleServantData_o *)DeckIndex;
  data = this->fields.data;
  if ( !data
    || (UniqueIdByEntryIndex = BattleData__GetUniqueIdByEntryIndex(data, (int32_t)target, v10->fields.isEnemy, 0LL),
        *expelledUniqueId = UniqueIdByEntryIndex,
        target = (BattleServantData_o *)UniqueIdByEntryIndex,
        (data = this->fields.data) == 0LL) )
  {
LABEL_13:
    sub_1B4D1EC(data, target);
  }
  ServantData = BattleData__getServantData(data, (int32_t)target, 0LL);
  if ( ServantData )
  {
    v15 = ServantData;
    if ( BattleServantData__isLogicResultAlive(ServantData, 0LL)
      || !v15->fields.isDeadAnime
      || BattleServantData__IsDeadKeepStanding(v15, 0LL) )
    {
      *entryIndex = -1;
    }
  }
  return *entryIndex >= 0;
}


BattleBuffData_BuffData_o *__fastcall BattleLogicFunction___FunctionSubFieldBuff_b__125_0(
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
    sub_1B4D1EC(this, buff);
  }
  return BattleBuffData__CreateDummyBuff((BattleBuffData_o *)this, buff, 0LL);
}


bool __fastcall BattleLogicFunction___IsSituationForceTurnProgressExecutable_g__IsForceTurnProgress_63_0(
        bool isPartyTurn,
        BattleLogicFunction___c__DisplayClass63_0_o *a2,
        const MethodInfo *method)
{
  if ( !a2->fields.dataVals )
    sub_1B4D1EC(isPartyTurn, a2);
  if ( isPartyTurn )
    return DataVals__IsForceTurnProgressIfTimingIsOverInPartyTurn(a2->fields.dataVals, 0LL);
  else
    return DataVals__IsForceTurnProgressIfTimingIsOverInOpponentTurn(a2->fields.dataVals, 0LL);
}


bool __fastcall BattleLogicFunction___getTargetids_b__55_0(
        BattleLogicFunction_o *this,
        int32_t x,
        const MethodInfo *method)
{
  BattleData_o *data; // x0

  data = this->fields.data;
  if ( !data )
    sub_1B4D1EC(0LL, x);
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
  int32_t v21; // w22
  int v22; // w20
  int v23; // w22
  float BuffTOLERANCEMagnification; // s0
  int32_t v25; // w0
  System_Int32_array *vals; // x1
  int32_t v27; // w23
  float BuffGRANTSTATEMagnification; // s0
  float v29; // s1
  float v30; // s0
  int32_t InstantDeathRate; // w0
  bool result; // w0
  float v33; // s0
  int32_t v34; // w0
  BattleLogicFunction_o *Next; // x0
  const MethodInfo *v36; // x4
  struct System_Int32_array **p_vals; // x8
  System_Int32_array *v38; // x22
  int v39; // w23
  float BuffTOLERANCESUBSTATEMagnification; // s0
  float BuffGRANTSUBSTATEMagnification; // s0
  bool v42; // [xsp+Ch] [xbp-64h]

  data = this->fields.data;
  if ( !data
    || (data = (BattleData_o *)BattleData__getServantData(data, actorId, 0LL), !this->fields.data)
    || (v19 = (BattleServantData_o *)data,
        data = (BattleData_o *)BattleData__getServantData(this->fields.data, targetId, 0LL),
        !baseVals)
    || (v20 = (BattleServantData_o *)data,
        v42 = isTreasureDevice,
        data = (BattleData_o *)DataVals__GetParam(baseVals, 0, 0, 0LL),
        !args) )
  {
LABEL_50:
    sub_1B4D1EC(data, args);
  }
  v21 = (int)data;
  if ( !BattleLogicFunction_ProcListInArgs__DidTriggeredFuncHaveSpecifyResults(
          args,
          targetId,
          baseVals,
          this->fields.data,
          0LL) )
    goto LABEL_18;
  data = (BattleData_o *)BattleLogicFunction_ProcListInArgs__DidTriggeredFuncListHaveSpecifyResults(
                           args,
                           targetId,
                           baseVals,
                           this->fields.data,
                           0LL);
  if ( ((unsigned __int8)data & 1) == 0 )
    goto LABEL_18;
  if ( (v21 & 0x80000000) != 0 )
  {
    if ( BattleLogicFunction_ProcListInArgs__isPrevFuncSuccess(args, targetId, baseVals->fields.funcIndex, 0LL) )
    {
      data = (BattleData_o *)BattleUtility__Abs_43745200(v21, 0LL);
      v22 = (int)data;
      if ( !funcEnt )
        goto LABEL_50;
      goto LABEL_12;
    }
LABEL_18:
    result = 0;
    *isDisplayLastFuncInvalid = 1;
    return result;
  }
  v22 = v21;
  if ( !funcEnt )
    goto LABEL_50;
LABEL_12:
  if ( !FuncList__Check(1, funcEnt->fields.funcType, 0LL) )
  {
    data = (BattleData_o *)FuncList__Check(13, funcEnt->fields.funcType, 0LL);
    if ( ((unsigned __int8)data & 1) != 0 )
    {
      if ( actorId != targetId || (data = (BattleData_o *)DataVals__GetParam(baseVals, 58, 0, 0LL), (int)data <= 0) )
      {
        if ( !v20 )
          goto LABEL_50;
        if ( !BattleServantData__checkAvoidInstantDeath(v20, v19, 0LL) )
        {
          Next = (BattleLogicFunction_o *)BattleRandom__getNext(1000, 0LL);
          v27 = (int)Next;
          InstantDeathRate = BattleLogicFunction__GetInstantDeathRate(Next, (float)v22, v20, v19, v42, v36);
          goto LABEL_37;
        }
        v22 = 0;
        goto LABEL_29;
      }
    }
    else
    {
      if ( FuncList__Check(2, funcEnt->fields.funcType, 0LL) )
      {
        if ( DataVals__isParam(baseVals, 90, 0LL) )
          return 1;
        p_vals = &funcEnt->fields.vals;
        if ( buffEnt )
          p_vals = &buffEnt->fields.vals;
        v38 = *p_vals;
        if ( v19 || !DataVals__isParam(baseVals, 75, 0LL) )
        {
          data = (BattleData_o *)BattleRandom__getNext(1000, 0LL);
          if ( !v20 )
            goto LABEL_50;
          v39 = (int)data;
          BuffTOLERANCESUBSTATEMagnification = BattleServantData__getBuffTOLERANCESUBSTATEMagnification(
                                                 v20,
                                                 v38,
                                                 v19,
                                                 0LL);
          v27 = BattleUtility__FloorToInt((float)(BuffTOLERANCESUBSTATEMagnification * 1000.0) + (float)v39, 0LL);
          if ( !v19 )
            return v27 < v22;
          BuffGRANTSUBSTATEMagnification = BattleServantData__getBuffGRANTSUBSTATEMagnification(v19, v38, v20, 0LL);
          v29 = (float)v22;
          v30 = BuffGRANTSUBSTATEMagnification * 1000.0;
          goto LABEL_17;
        }
        v33 = (float)BattleRandom__getNext(1000, 0LL);
        goto LABEL_34;
      }
      if ( FuncList__Check(20, funcEnt->fields.funcType, 0LL) )
      {
        data = (BattleData_o *)BattleRandom__getNext(1000, 0LL);
        if ( !v20 )
          goto LABEL_50;
        v33 = (float)(BattleServantData__getBuffResistDelayNPTurn(v20, v19, 0LL) * 1000.0) + (float)(int)data;
LABEL_34:
        v34 = BattleUtility__FloorToInt(v33, 0LL);
LABEL_35:
        v27 = v34;
        return v27 < v22;
      }
      if ( !FuncList__Check(46, funcEnt->fields.funcType, 0LL) )
      {
        v34 = BattleRandom__getNext(1000, 0LL);
        goto LABEL_35;
      }
    }
    v27 = 0;
    v22 = 1000;
    return v27 < v22;
  }
  if ( buffEnt )
  {
    data = (BattleData_o *)BattleRandom__getNext(1000, 0LL);
    v23 = (int)data;
    if ( v19 )
    {
      if ( !v20 )
        goto LABEL_50;
      BuffTOLERANCEMagnification = BattleServantData__getBuffTOLERANCEMagnification(
                                     v20,
                                     buffEnt->fields.vals,
                                     v19,
                                     &this->fields.wkStr,
                                     0LL);
      v25 = BattleUtility__FloorToInt((float)(BuffTOLERANCEMagnification * 1000.0) + (float)v23, 0LL);
      vals = buffEnt->fields.vals;
      v27 = v25;
      BuffGRANTSTATEMagnification = BattleServantData__getBuffGRANTSTATEMagnification(
                                      v19,
                                      vals,
                                      v20,
                                      &this->fields.wkStr,
                                      0,
                                      0LL);
      v29 = (float)v22;
      v30 = BuffGRANTSTATEMagnification * 1000.0;
LABEL_17:
      InstantDeathRate = BattleUtility__FloorToInt(v30 + v29, 0LL);
LABEL_37:
      v22 = InstantDeathRate;
      return v27 < v22;
    }
    v33 = (float)(int)data;
    goto LABEL_34;
  }
  v22 = 1000;
LABEL_29:
  v27 = 1000;
  return v27 < v22;
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
    sub_1B4D1EC(data, *(_QWORD *)&targetId);
  return HIBYTE(data->fields.fixedCommands) != 0;
}


// local variable allocation has failed, the output may be wrong!
BattleActionData_o *__fastcall BattleLogicFunction__createRevivalHealData(
        BattleLogicFunction_o *this,
        int32_t targetId,
        FunctionEntity_o *funcEnt,
        DataVals_o *baseVals,
        int32_t funcIndex,
        bool isCommandSideEffect,
        const MethodInfo *method)
{
  __int64 v13; // x1
  BattleActionData_o *v14; // x24
  __int64 v15; // x1
  BattleData_o *data; // x0
  BattleServantData_o *v17; // x25
  int32_t Value; // w26
  BattleLogicFunction_HealFuncApplyArgs_o *healFuncApplyArgs; // x27
  const MethodInfo *v21; // [xsp+10h] [xbp-70h]

  if ( (byte_49BDBBA & 1) == 0 )
  {
    sub_1B4CF90(&BattleActionData_TypeInfo, *(_QWORD *)&targetId);
    sub_1B4CF90(&BattleLogicFunction_HealFuncApplyArgs_TypeInfo, v13);
    byte_49BDBBA = 1;
  }
  v14 = (BattleActionData_o *)sub_1B4D1DC(BattleActionData_TypeInfo);
  BattleActionData___ctor(v14, 0LL);
  data = this->fields.data;
  if ( !data
    || (data = (BattleData_o *)BattleData__getServantData(data, targetId, 0LL), !baseVals)
    || (v17 = (BattleServantData_o *)data,
        baseVals->fields.isShowForcedEffect = 1,
        Value = DataVals__GetValue(baseVals, 0LL),
        healFuncApplyArgs = (BattleLogicFunction_HealFuncApplyArgs_o *)sub_1B4D1DC(BattleLogicFunction_HealFuncApplyArgs_TypeInfo),
        BattleLogicFunction_HealFuncApplyArgs___ctor(healFuncApplyArgs, 0LL),
        !healFuncApplyArgs) )
  {
    sub_1B4D1EC(data, v15);
  }
  healFuncApplyArgs->fields._IsMultiTargetRevival_k__BackingField = 1;
  BattleLogicFunction__SetGainHpBuff(
    this,
    v14,
    Value,
    funcIndex,
    v17,
    funcEnt,
    baseVals,
    isCommandSideEffect,
    0,
    healFuncApplyArgs,
    v21);
  return v14;
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
  __int64 v13; // x1
  __int64 v14; // x1
  struct BattleLogicFunctionProcess_FunctionUnitCheck_o *funcUnit_k__BackingField; // x8
  DataVals_o *dataVals_k__BackingField; // x26
  BattleActionData_o *v17; // x24
  NpPointToTurnConvert_o *v18; // x28
  NpGaugeAbsorbResult_o *v19; // x27
  const MethodInfo *v20; // x4
  const MethodInfo *v21; // x4
  BattleActionData_o *v22; // x0
  const MethodInfo *v23; // x7
  float Turn_k__BackingField; // s0
  int32_t v25; // w6
  BattleActionData_o *v26; // x0

  v12 = this;
  if ( (byte_49BDBAF & 1) == 0 )
  {
    sub_1B4CF90(&BattleActionData_TypeInfo, *(_QWORD *)&targetId);
    sub_1B4CF90(&NpGaugeAbsorbResult_TypeInfo, v13);
    this = (BattleLogicFunction_o *)sub_1B4CF90(&NpPointToTurnConvert_TypeInfo, v14);
    byte_49BDBAF = 1;
  }
  if ( !funcTarget )
    goto LABEL_12;
  funcUnit_k__BackingField = funcTarget->fields._funcUnit_k__BackingField;
  if ( !funcUnit_k__BackingField )
    goto LABEL_12;
  dataVals_k__BackingField = funcUnit_k__BackingField->fields._dataVals_k__BackingField;
  v17 = (BattleActionData_o *)sub_1B4D1DC(BattleActionData_TypeInfo);
  BattleActionData___ctor(v17, 0LL);
  v18 = (NpPointToTurnConvert_o *)sub_1B4D1DC(NpPointToTurnConvert_TypeInfo);
  NpPointToTurnConvert___ctor(v18, 0LL);
  v19 = (NpGaugeAbsorbResult_o *)sub_1B4D1DC(NpGaugeAbsorbResult_TypeInfo);
  NpGaugeAbsorbResult___ctor(v19, (BaseNpGaugeConvert_o *)v18, 0LL);
  this = (BattleLogicFunction_o *)BattleLogicFunction__AbsorbNpTurn(v12, mainAction, funcTarget, v19, v20);
  if ( !v17
    || (BattleActionData__addAction(v17, (BattleActionData_o *)this, 0LL),
        v22 = BattleLogicFunction__AbsorbNpPoint(v12, mainAction, funcTarget, v19, v21),
        BattleActionData__addAction(v17, v22, 0LL),
        !dataVals_k__BackingField)
    || !v19 )
  {
LABEL_12:
    sub_1B4D1EC(this, *(_QWORD *)&targetId);
  }
  Turn_k__BackingField = v19->fields._Turn_k__BackingField;
  if ( Turn_k__BackingField == INFINITY )
    v25 = 0x80000000;
  else
    v25 = (int)Turn_k__BackingField;
  v26 = BattleLogicFunction__functionHastenNpTurn(
          v12,
          targetId,
          funcEnt,
          dataVals_k__BackingField,
          dataVals_k__BackingField->fields.funcIndex,
          isCommandSideEffect,
          v25,
          v23);
  BattleActionData__addAction(v17, v26, 0LL);
  return v17;
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
  BattleActionData_o *v9; // x29
  BattleLogicFunction_o *v10; // x19
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
  struct BattleLogicFunctionProcess_FunctionUnitCheck_o *funcUnit_k__BackingField; // x20
  DataVals_o *dataVals_k__BackingField; // x22
  int32_t actorId; // w28
  BuffEntity_o *v37; // x27
  BattleServantData_o *v38; // x24
  BattleServantData_o *ServantData; // x25
  BattleActionData_MasterBuffData_o *v40; // x20
  __int64 v41; // x28
  const MethodInfo *v42; // x3
  char v43; // w23
  int32_t AdjustmentBuffTurn; // w0
  const MethodInfo *v45; // x4
  char v46; // w20
  bool v47; // w26
  int32_t type; // w23
  const MethodInfo *v49; // x3
  bool isEnemy; // w8
  char v51; // w9
  bool *v52; // x20
  struct BattleData_o *data; // x8
  int32_t ProgressTurnCond; // w0
  int32_t v55; // w20
  int32_t v56; // w20
  int32_t v57; // w20
  int32_t v58; // w20
  int32_t tdCommandTypeChange; // w8
  __int64 v60; // x0
  int32_t v61; // w2
  const MethodInfo *v62; // x3
  __int64 v63; // x23
  __int64 v64; // x20
  int32_t v65; // w20
  struct BattleData_o *v66; // x8
  struct BattleEntity_o *battle_ent; // x8
  int64_t userId; // x23
  int32_t eventId; // w20
  EventPointBuffMaster_o *v70; // x26
  int32_t EventPointGroupId; // w29
  UserEventPointEntity_o *EntityDefinitely; // x0
  int64_t value; // x20
  int logic; // w8
  int v75; // w10
  __int64 v76; // x9
  __int64 v77; // x11
  int v78; // w29
  BattleData_o *v79; // x20
  BattleBuffData_CheckIndividualitiesData_o *v80; // x23
  BattleBuffData_ParamAdd_o *v81; // x26
  __int64 v82; // x0
  int32_t v83; // w2
  const MethodInfo *v84; // x3
  __int64 v85; // x23
  __int64 v86; // x20
  int32_t Param; // w23
  __int64 v88; // x20
  bool v89; // w8
  int v90; // w8
  System_Int32_array *TargetIndiv; // x0
  int32_t v92; // w2
  const MethodInfo *v93; // x3
  int32_t v94; // w2
  const MethodInfo *v95; // x3
  int32_t v96; // w20
  BattleBuffData_IntervalData_o *IntervalData; // x0
  int32_t v98; // w2
  const MethodInfo *v99; // x3
  System_Int32_array *ParamArray; // x0
  int32_t v101; // w2
  const MethodInfo *v102; // x3
  int32_t v103; // w20
  int32_t RelationId; // w23
  BattleBuffData_RelationOverwriteData_o *v105; // x20
  int32_t v106; // w2
  const MethodInfo *v107; // x3
  BattleDataDefine_c *v108; // x0
  int32_t v109; // w20
  bool v110; // w0
  float UpDownGiveHeal; // s8
  int32_t v112; // w0
  int v113; // s0
  int32_t v114; // w0
  int v115; // s0
  System_Int32_array *v116; // x0
  int32_t v117; // w2
  const MethodInfo *v118; // x3
  System_Int32_array *v119; // x0
  int32_t v120; // w2
  const MethodInfo *v121; // x3
  System_Int32_array *v122; // x0
  int32_t v123; // w2
  const MethodInfo *v124; // x3
  BattleBuffData_SaveArrayData_array *v125; // x0
  int32_t v126; // w2
  const MethodInfo *v127; // x3
  BattleBuffData_SaveArrayData_array *v128; // x0
  int32_t v129; // w2
  const MethodInfo *v130; // x3
  BattleBuffData_SaveArrayData_array *v131; // x0
  int32_t v132; // w2
  const MethodInfo *v133; // x3
  int32_t v134; // w20
  System_Int32_array *UpBuffRateBuffTypeList; // x0
  int32_t v136; // w2
  const MethodInfo *v137; // x3
  struct BattleLogicFunction_FunctionArgument_o *externalArg; // x8
  struct BattleData_o *v139; // x8
  System_Int32_array *AddIndividualty; // x0
  int32_t v141; // w2
  const MethodInfo *v142; // x3
  System_Int32_array *LinkageTargetIndividualty; // x0
  int32_t v144; // w2
  const MethodInfo *v145; // x3
  const MethodInfo *v146; // x3
  struct BattleData_o *v147; // x8
  System_Int32_array *ValsList; // x0
  int32_t v149; // w2
  const MethodInfo *v150; // x3
  int32_t v151; // w0
  int v152; // w8
  int v153; // w9
  UnityEngine_Object_o *v154; // x20
  bool v155; // w20
  int32_t v156; // w23
  int32_t v157; // w23
  CommandCodeInfo_o *UserCommandCode; // x0
  int32_t MaxHp; // w26
  int32_t v160; // w23
  bool v161; // w0
  BattleActionData_BuffData_o *v162; // x20
  __int64 v163; // x4
  int32_t v164; // w20
  bool IsCommandSideEffect; // w0
  const MethodInfo *v166; // x7
  BattleActionEffect_AddChangeMaxHpBuff_o *v167; // x20
  BattleLogicFunction_o *v168; // x23
  int32_t v169; // w2
  const MethodInfo *v170; // x3
  BattleActionEffect_Base_o *v171; // x0
  int32_t id; // w20
  System_Collections_Generic_List_int__o *v173; // x0
  System_String_o *i; // x0
  System_String_o *v175; // x0
  System_String_o *v176; // x0
  System_String_o *v177; // x0
  System_Int32_array *QuestIndividualities; // x0
  UnityEngine_Object_o *v179; // x23
  System_Int32_array *v180; // x20
  BattlePerformance_o *perf; // x2
  struct BattleLogic_o *v182; // x8
  UnityEngine_Object_o *v183; // x20
  int v184; // w8
  BattleLogicFunction_o *v185; // x20
  unsigned int v186; // w23
  System_Int32_array *ShortenMaxCountArray; // x0
  int32_t v188; // w2
  const MethodInfo *v189; // x3
  BattleActionData_BuffData_o *v190; // x20
  System_Int32_array *TargetFunctionIndividuality; // x0
  int32_t v192; // w2
  const MethodInfo *v193; // x3
  System_Int32_array *TargetBuffIndividuality; // x0
  int32_t v195; // w2
  const MethodInfo *v196; // x3
  int32_t v197; // w20
  struct BattleData_o *v198; // x8
  BattleBuffData_o *buffData; // x20
  BattleBuffData_CheckIndividualitiesData_o *v200; // x23
  FunctionEntity_o *v201; // x2
  DataVals_o *v202; // x3
  int32_t v203; // w4
  const MethodInfo *v204; // x5
  bool v205; // w0
  BattleActionData_BuffData_o *v206; // x20
  const MethodInfo *v207; // x3
  UnityEngine_Object_o *v208; // x20
  const MethodInfo *v209; // x4
  __int64 v211; // x0
  bool *p_isEnemy; // [xsp+0h] [xbp-D0h]
  BattleActionData_o *userCommandCodeId; // [xsp+8h] [xbp-C8h]
  int userCommandCodeIda; // [xsp+8h] [xbp-C8h]
  int32_t funcIndex; // [xsp+14h] [xbp-BCh]
  BattleActionData_o *v216; // [xsp+18h] [xbp-B8h]
  int32_t treasureDvcId; // [xsp+24h] [xbp-ACh]
  BattleActionData_o *v218; // [xsp+28h] [xbp-A8h]
  int32_t v219; // [xsp+30h] [xbp-A0h]
  unsigned int uniqueId; // [xsp+34h] [xbp-9Ch]
  FunctionEntity_o *funcEnt; // [xsp+38h] [xbp-98h]
  BattleLogicFunction_ProcListInArgs_o *v222; // [xsp+40h] [xbp-90h]
  BattleActionData_BuffData_o *v223; // [xsp+48h] [xbp-88h]
  int v224; // [xsp+54h] [xbp-7Ch] BYREF
  Il2CppObject *entity; // [xsp+58h] [xbp-78h] BYREF
  bool isEnemyTurn; // [xsp+68h] [xbp-68h] BYREF
  bool isSelfTurn; // [xsp+6Ch] [xbp-64h] BYREF

  v9 = mainAction;
  v10 = this;
  if ( (byte_49BDB8B & 1) == 0 )
  {
    sub_1B4CF90(&BattleActionEffect_AddChangeMaxHpBuff_TypeInfo, mainAction);
    sub_1B4CF90(&BattleActionData_TypeInfo, v11);
    sub_1B4CF90(&BattleDataDefine_TypeInfo, v12);
    sub_1B4CF90(&BattleBuffData_BuffData___TypeInfo, v13);
    sub_1B4CF90(&BattleBuffData_BuffData_TypeInfo, v14);
    sub_1B4CF90(&BuffList_TypeInfo, v15);
    sub_1B4CF90(&BattleBuffData_CheckIndividualitiesData_TypeInfo, v16);
    sub_1B4CF90(&Method_DataManager_GetMasterData_EventPointBuffMaster___, v17);
    sub_1B4CF90(&Method_DataManager_GetMasterData_UserEventPointMaster___, v18);
    sub_1B4CF90(&Method_DataManager_GetMaster_BuffTypeDetailMaster___, v19);
    sub_1B4CF90(&DataManager_TypeInfo, v20);
    sub_1B4CF90(&Method_DataMasterBase_BuffTypeDetailMaster__BuffTypeDetailEntity__int__TryGetEntity__, v21);
    sub_1B4CF90(&BattleBuffData_FieldAliveCondData_TypeInfo, v22);
    sub_1B4CF90(&int___TypeInfo, v23);
    sub_1B4CF90(&Method_System_Collections_Generic_List_int___ctor__, v24);
    sub_1B4CF90(&System_Collections_Generic_List_int__TypeInfo, v25);
    sub_1B4CF90(&BattleActionData_MasterBuffData_TypeInfo, v26);
    sub_1B4CF90(&System_Math_TypeInfo, v27);
    sub_1B4CF90(&UnityEngine_Object_TypeInfo, v28);
    sub_1B4CF90(&BattleBuffData_ParamAdd_TypeInfo, v29);
    sub_1B4CF90(&BattleBuffData_RelationOverwriteData_TypeInfo, v30);
    sub_1B4CF90(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v31);
    sub_1B4CF90(&StringLiteral_13060/*"TAMAMOCAT_STUN_BUFF_ID"*/, v32);
    this = (BattleLogicFunction_o *)sub_1B4CF90(&StringLiteral_13061/*"TAMAMOCAT_TREASURE_DEVICE_ID_"*/, v33);
    byte_49BDB8B = 1;
  }
  isSelfTurn = 0;
  isEnemyTurn = 0;
  entity = 0LL;
  v224 = 0;
  if ( !funcTarget )
    goto LABEL_300;
  if ( !v9 )
    goto LABEL_300;
  funcUnit_k__BackingField = funcTarget->fields._funcUnit_k__BackingField;
  if ( !funcUnit_k__BackingField )
    goto LABEL_300;
  dataVals_k__BackingField = funcUnit_k__BackingField->fields._dataVals_k__BackingField;
  if ( !dataVals_k__BackingField )
    goto LABEL_300;
  actorId = v9->fields.actorId;
  uniqueId = funcTarget->fields._targetId_k__BackingField;
  funcEnt = dataVals_k__BackingField->fields.funcEnt;
  v37 = (BuffEntity_o *)((__int64 (__fastcall *)(BattleLogicFunctionProcess_FunctionTargetCheck_o *, void *, BattleLogicFunctionProcess_FunctionTargetCheck_o *, BattleLogicFunction_ProcListInArgs_o *, bool, const MethodInfo *))funcTarget->klass->vtable._15_GetFixBuffEntity.method)(
                          funcTarget,
                          funcTarget->klass[1]._1.image,
                          funcTarget,
                          args,
                          shortbuff,
                          method);
  funcIndex = BattleLogicFunctionProcess_FunctionUnitCheck__get_FuncIndex(funcUnit_k__BackingField, 0LL);
  userCommandCodeId = (BattleActionData_o *)v9->fields.userCommandCodeId;
  treasureDvcId = v9->fields.treasureDvcId;
  v216 = (BattleActionData_o *)sub_1B4D1DC(BattleActionData_TypeInfo);
  BattleActionData___ctor(v216, 0LL);
  this = (BattleLogicFunction_o *)v10->fields.data;
  if ( !this )
    goto LABEL_300;
  this = (BattleLogicFunction_o *)BattleData__getServantData((BattleData_o *)this, actorId, 0LL);
  if ( !v10->fields.data )
    goto LABEL_300;
  v38 = (BattleServantData_o *)this;
  ServantData = BattleData__getServantData(v10->fields.data, uniqueId, 0LL);
  this = (BattleLogicFunction_o *)((__int64 (__fastcall *)(BattleLogicFunctionProcess_FunctionTargetCheck_o *, Il2CppMethodPointer))funcTarget->klass->vtable._8_MakeActionBuffData.method)(
                                    funcTarget,
                                    funcTarget->klass->vtable._9_AddBuff.methodPtr);
  if ( !v37 )
    goto LABEL_300;
  v40 = (BattleActionData_MasterBuffData_o *)this;
  this = (BattleLogicFunction_o *)BuffEntity__checkBuffType(v37, 142, 0LL);
  if ( ((unsigned __int8)this & 1) != 0 )
  {
    v40 = (BattleActionData_MasterBuffData_o *)sub_1B4D1DC(BattleActionData_MasterBuffData_TypeInfo);
    BattleActionData_MasterBuffData___ctor(v40, funcEnt, 0LL);
  }
  if ( !ServantData )
    goto LABEL_300;
  v219 = actorId;
  if ( !v40 )
    goto LABEL_300;
  v40->fields.targetId = ServantData->fields.uniqueId;
  v40->fields.functionIndex = funcIndex;
  v41 = sub_1B4D1DC(BattleBuffData_BuffData_TypeInfo);
  BattleBuffData_BuffData___ctor((BattleBuffData_BuffData_o *)v41, 0LL);
  if ( !v41 )
    goto LABEL_300;
  *(_DWORD *)(v41 + 16) = v37->fields.id;
  if ( !args )
    goto LABEL_300;
  *(_DWORD *)(v41 + 164) = BattleLogicFunction_ProcListInArgs__get_SkillId(args, 0LL);
  *(_DWORD *)(v41 + 188) = BattleLogicFunction_ProcListInArgs__get_GrantSkillType(args, 0LL);
  *(_DWORD *)(v41 + 176) = DataVals__GetMotionChange(dataVals_k__BackingField, 0LL);
  *(_DWORD *)(v41 + 20) = 2 * DataVals__GetParam(dataVals_k__BackingField, 1, 0, 0LL);
  BattleBuffData_BuffData__RegisterGeneralParams((BattleBuffData_BuffData_o *)v41, dataVals_k__BackingField, 0LL);
  v43 = v9->fields.isReversalShortBuffTurn ^ shortbuff;
  if ( (v43 & 1) != 0 )
    --*(_DWORD *)(v41 + 20);
  AdjustmentBuffTurn = BattleLogicFunction__GetAdjustmentBuffTurn(v10, dataVals_k__BackingField, v38, v42);
  v223 = (BattleActionData_BuffData_o *)v40;
  if ( AdjustmentBuffTurn )
  {
    v43 ^= 1u;
    *(_DWORD *)(v41 + 20) += AdjustmentBuffTurn;
  }
  this = (BattleLogicFunction_o *)BattleLogicFunction__IsSvtBuffTurnExtend(v10, uniqueId, v37, v43 & 1, v45);
  v46 = (char)this;
  if ( ((unsigned __int8)this & 1) != 0 )
  {
    v43 ^= 1u;
    ++*(_DWORD *)(v41 + 20);
  }
  v222 = args;
  *(_DWORD *)(v41 + 68) = v219;
  if ( !funcEnt )
    goto LABEL_300;
  v47 = (v43 ^ Target__isEnemy(funcEnt->fields.targetType, 0LL)) & 1;
  isSelfTurn = v47;
  type = v37->fields.type;
  if ( !BuffList_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(BuffList_TypeInfo);
  this = (BattleLogicFunction_o *)BuffList__IsForceProgressSelfTurnType(type, 0LL);
  if ( ((unsigned __int8)this & 1) != 0 )
  {
    v47 = 1;
    isSelfTurn = 1;
  }
  if ( (v46 & 1) != 0 )
  {
    isEnemy = ServantData->fields.isEnemy;
    p_isEnemy = &ServantData->fields.isEnemy;
    v51 = isEnemy ^ v47 ^ 1;
  }
  else
  {
    BattleLogicFunction__UpdateBuffProgressTurn(v10, v37->fields.type, &isSelfTurn, v49);
    v52 = &ServantData->fields.isEnemy;
    *(_BYTE *)(v41 + 180) = ServantData->fields.isEnemy ^ isSelfTurn ^ 1;
    this = (BattleLogicFunction_o *)BuffEntity__GetProgressSelfTurn(v37, 0LL);
    p_isEnemy = &ServantData->fields.isEnemy;
    if ( ((unsigned int)this & 0x80000000) != 0 )
    {
      v51 = *(_BYTE *)(v41 + 180);
      isEnemy = *v52;
      goto LABEL_32;
    }
    isEnemy = *v52;
    v51 = *v52 ^ ((_DWORD)this == 0);
  }
  *(_BYTE *)(v41 + 180) = v51;
LABEL_32:
  *(_BYTE *)(v41 + 192) = v51 ^ isEnemy ^ 1;
  data = v10->fields.data;
  if ( !data )
    goto LABEL_300;
  this = (BattleLogicFunction_o *)data->fields.battleEvent;
  if ( !this )
    goto LABEL_300;
  *(_DWORD *)(v41 + 184) = ((__int64 (__fastcall *)(BattleLogicFunction_o *, BuffEntity_o *, Il2CppMethodPointer))this->klass[1].vtable._1_Finalize.method)(
                             this,
                             v37,
                             this->klass[1].vtable._2_GetHashCode.methodPtr);
  ProgressTurnCond = BuffEntity__GetProgressTurnCond(v37, 0LL);
  if ( (ProgressTurnCond & 0x80000000) == 0 )
    *(_DWORD *)(v41 + 184) = ProgressTurnCond;
  *(_DWORD *)(v41 + 24) = DataVals__GetParam(dataVals_k__BackingField, 2, 0, 0LL);
  *(_DWORD *)(v41 + 28) = DataVals__GetParam(dataVals_k__BackingField, 3, 0, 0LL);
  v223->fields.popDelay = DataVals__GetParam(dataVals_k__BackingField, 65, 0, 0LL);
  v55 = v37->fields.type;
  if ( !BuffList_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(BuffList_TypeInfo);
  if ( BuffList__CheckType(143, v55, 0LL) )
    goto LABEL_48;
  v56 = v37->fields.type;
  if ( !BuffList_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(BuffList_TypeInfo);
  if ( BuffList__CheckType(145, v56, 0LL) )
    goto LABEL_48;
  v57 = v37->fields.type;
  if ( !BuffList_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(BuffList_TypeInfo);
  if ( BuffList__CheckType(146, v57, 0LL) )
    goto LABEL_48;
  v58 = v37->fields.type;
  if ( !BuffList_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(BuffList_TypeInfo);
  if ( BuffList__CheckType(147, v58, 0LL) )
  {
LABEL_48:
    tdCommandTypeChange = v222->fields.tdCommandTypeChange;
    if ( (tdCommandTypeChange & 0x80000000) == 0 )
      *(_DWORD *)(v41 + 28) = tdCommandTypeChange;
  }
  *(_DWORD *)(v41 + 52) = DataVals__GetParam(dataVals_k__BackingField, 8, 0, 0LL);
  *(_DWORD *)(v41 + 56) = DataVals__GetParam(dataVals_k__BackingField, 9, 0, 0LL);
  v60 = sub_1B4D038(int___TypeInfo, 2LL);
  *(_QWORD *)(v41 + 40) = v60;
  sub_1B4CF34((CGThumbnailListItem_o *)(v41 + 40), v60, v61, v62);
  v63 = *(_QWORD *)(v41 + 40);
  this = (BattleLogicFunction_o *)DataVals__GetParam(dataVals_k__BackingField, 3, 0, 0LL);
  if ( !v63 )
    goto LABEL_300;
  if ( !*(_DWORD *)(v63 + 24) )
    goto LABEL_301;
  *(_DWORD *)(v63 + 32) = (_DWORD)this;
  v64 = *(_QWORD *)(v41 + 40);
  this = (BattleLogicFunction_o *)DataVals__GetParam(dataVals_k__BackingField, 4, 0, 0LL);
  if ( !v64 )
    goto LABEL_300;
  if ( *(_DWORD *)(v64 + 24) <= 1u )
    goto LABEL_301;
  v218 = v9;
  *(_DWORD *)(v64 + 36) = (_DWORD)this;
  v65 = v37->fields.type;
  if ( !BuffList_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(BuffList_TypeInfo);
  this = (BattleLogicFunction_o *)BuffList__CheckType(135, v65, 0LL);
  if ( ((unsigned __int8)this & 1) != 0 )
  {
    v66 = v10->fields.data;
    if ( !v66 )
      goto LABEL_300;
    battle_ent = v66->fields.battle_ent;
    if ( !battle_ent )
      goto LABEL_300;
    userId = battle_ent->fields.userId;
    eventId = battle_ent->fields.eventId;
    this = (BattleLogicFunction_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37B4410 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !this )
      goto LABEL_300;
    this = (BattleLogicFunction_o *)DataManager__GetMasterData_object_(
                                      (DataManager_o *)this,
                                      (const MethodInfo_2F01B24 *)Method_DataManager_GetMasterData_EventPointBuffMaster___);
    if ( !this )
      goto LABEL_300;
    v70 = (EventPointBuffMaster_o *)this;
    EventPointGroupId = EventPointBuffMaster__GetEventPointGroupId(
                          (EventPointBuffMaster_o *)this,
                          eventId,
                          funcEnt->fields.id,
                          0,
                          0LL);
    this = (BattleLogicFunction_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37B4410 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !this )
      goto LABEL_300;
    this = (BattleLogicFunction_o *)DataManager__GetMasterData_object_(
                                      (DataManager_o *)this,
                                      (const MethodInfo_2F01B24 *)Method_DataManager_GetMasterData_UserEventPointMaster___);
    if ( !this )
      goto LABEL_300;
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
                                        v70,
                                        EntityDefinitely->fields.eventId,
                                        EventPointGroupId,
                                        0LL);
      if ( !this )
        goto LABEL_300;
      logic = (int)this->fields.logic;
      if ( logic >= 1 )
      {
        v75 = 0;
        v76 = 0LL;
        do
        {
          if ( logic == v75 )
            goto LABEL_301;
          v77 = *((_QWORD *)&this->fields.logictarget + v75);
          if ( !v77 )
            goto LABEL_300;
          if ( value < *(int *)(v77 + 28) )
            break;
          ++v75;
          v76 = v77;
        }
        while ( logic != v75 );
        if ( v76 )
          *(_DWORD *)(v41 + 28) += *(_DWORD *)(v76 + 64);
      }
    }
  }
  *(_DWORD *)(v41 + 416) = DataVals__GetParamAddIndividualityTargetType(dataVals_k__BackingField, 0LL);
  if ( DataVals__IsExistSnapShotParamAddIndv(dataVals_k__BackingField, 0LL) )
  {
    v78 = *(_DWORD *)(v41 + 28);
    v79 = v10->fields.data;
    v80 = (BattleBuffData_CheckIndividualitiesData_o *)sub_1B4D1DC(BattleBuffData_CheckIndividualitiesData_TypeInfo);
    BattleBuffData_CheckIndividualitiesData___ctor_43313456(v80, v38, ServantData, 0LL, 0LL, 0LL, 0LL, 0LL);
    v81 = (BattleBuffData_ParamAdd_o *)sub_1B4D1DC(BattleBuffData_ParamAdd_TypeInfo);
    BattleBuffData_ParamAdd___ctor_43323424(v81, dataVals_k__BackingField, 0LL);
    *(_DWORD *)(v41 + 28) = BattleBuffData__GetTotalParamAddValue((BattleBuffData_BuffData_o *)v41, v79, v80, v81, 0LL)
                          + v78;
  }
  if ( DataVals__isParam(dataVals_k__BackingField, 26, 0LL) && DataVals__isParam(dataVals_k__BackingField, 27, 0LL) )
  {
    v82 = sub_1B4D038(int___TypeInfo, 2LL);
    *(_QWORD *)(v41 + 104) = v82;
    sub_1B4CF34((CGThumbnailListItem_o *)(v41 + 104), v82, v83, v84);
    v85 = *(_QWORD *)(v41 + 104);
    this = (BattleLogicFunction_o *)DataVals__GetParam(dataVals_k__BackingField, 26, 0, 0LL);
    if ( !v85 )
      goto LABEL_300;
    if ( !*(_DWORD *)(v85 + 24) )
      goto LABEL_301;
    *(_DWORD *)(v85 + 32) = (_DWORD)this;
    v86 = *(_QWORD *)(v41 + 104);
    this = (BattleLogicFunction_o *)DataVals__GetParam(dataVals_k__BackingField, 27, 0, 0LL);
    if ( !v86 )
      goto LABEL_300;
    if ( *(_DWORD *)(v86 + 24) <= 1u )
      goto LABEL_301;
    *(_DWORD *)(v86 + 36) = (_DWORD)this;
  }
  *(_DWORD *)(v41 + 64) = DataVals__GetParam(dataVals_k__BackingField, 15, 0, 0LL);
  *(_DWORD *)(v41 + 344) = DataVals__GetClassIconAuraEffectId(dataVals_k__BackingField, 0LL);
  if ( DataVals__GetParam(dataVals_k__BackingField, 11, 0, 0LL) >= 1 )
    *(_DWORD *)(v41 + 60) = v219;
  if ( DataVals__GetParam(dataVals_k__BackingField, 46, 0, 0LL) >= 1 )
    BattleBuffData_BuffData__onState((BattleBuffData_BuffData_o *)v41, 0x8000, 0LL);
  if ( DataVals__GetParam(dataVals_k__BackingField, 50, 0, 0LL) >= 1 )
    BattleBuffData_BuffData__onState((BattleBuffData_BuffData_o *)v41, 0x10000, 0LL);
  if ( DataVals__GetParam(dataVals_k__BackingField, 89, 0, 0LL) >= 1 )
    BattleBuffData_BuffData__onState((BattleBuffData_BuffData_o *)v41, 0x80000, 0LL);
  if ( DataVals__GetParam(dataVals_k__BackingField, 91, 0, 0LL) >= 1 )
    BattleBuffData_BuffData__onState((BattleBuffData_BuffData_o *)v41, 0x100000, 0LL);
  if ( DataVals__GetParam(dataVals_k__BackingField, 66, 0, 0LL) >= 1 )
    BattleBuffData_BuffData__onState((BattleBuffData_BuffData_o *)v41, 0x40000, 0LL);
  if ( DataVals__GetParam(dataVals_k__BackingField, 144, 0, 0LL) >= 1 )
    BattleBuffData_BuffData__onState((BattleBuffData_BuffData_o *)v41, 0x2000000, 0LL);
  if ( DataVals__isParam(dataVals_k__BackingField, 42, 0LL) )
  {
    Param = DataVals__GetParam(dataVals_k__BackingField, 42, 0, 0LL);
    v88 = sub_1B4D1DC(BattleBuffData_FieldAliveCondData_TypeInfo);
    BattleBuffData_FieldAliveCondData___ctor((BattleBuffData_FieldAliveCondData_o *)v88, 0LL);
    if ( !v88 )
      goto LABEL_300;
    v89 = *p_isEnemy;
    *(_BYTE *)(v88 + 17) = Param > 0;
    *(_BYTE *)(v88 + 16) = v89;
    if ( !System_Math_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(System_Math_TypeInfo);
    if ( Param >= 0 )
      v90 = Param;
    else
      v90 = -Param;
    *(_DWORD *)(v88 + 20) = v90;
    TargetIndiv = BuffEntity__GetTargetIndiv(v37, 0LL);
    *(_QWORD *)(v88 + 24) = TargetIndiv;
    sub_1B4CF34((CGThumbnailListItem_o *)(v88 + 24), (int32_t)TargetIndiv, v92, v93);
    *(_BYTE *)(v88 + 32) = BuffEntity__IsIncludeIgnoreIndividuality(v37, 0LL);
    *(_QWORD *)(v41 + 152) = v88;
    sub_1B4CF34((CGThumbnailListItem_o *)(v41 + 152), v88, v94, v95);
    v222->fields.updateField = 1;
  }
  v96 = v37->fields.type;
  if ( !BuffList_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(BuffList_TypeInfo);
  if ( BuffList__IsIntervalPossibleBuff(v96, 0LL) )
  {
    IntervalData = DataVals__GetIntervalData(dataVals_k__BackingField, 0LL);
    *(_QWORD *)(v41 + 360) = IntervalData;
    sub_1B4CF34((CGThumbnailListItem_o *)(v41 + 360), (int32_t)IntervalData, v98, v99);
  }
  if ( BattleBuffData__CheckInvalidSacrificeIndiv((BattleBuffData_BuffData_o *)v41, 0LL) )
    v222->fields.updateField = 1;
  ParamArray = DataVals__GetParamArray(dataVals_k__BackingField, 115, 0LL);
  *(_QWORD *)(v41 + 328) = ParamArray;
  sub_1B4CF34((CGThumbnailListItem_o *)(v41 + 328), (int32_t)ParamArray, v101, v102);
  *(_DWORD *)(v41 + 208) = BuffEntity__GetCardEffectId(v37, 0LL);
  v103 = v37->fields.type;
  if ( !BuffList_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(BuffList_TypeInfo);
  if ( BuffList__CheckType(144, v103, 0LL) )
  {
    RelationId = BuffEntity__getRelationId(v37, 0LL);
    v105 = (BattleBuffData_RelationOverwriteData_o *)sub_1B4D1DC(BattleBuffData_RelationOverwriteData_TypeInfo);
    BattleBuffData_RelationOverwriteData___ctor(v105, 0LL);
    if ( RelationId >= 1 )
    {
      this = (BattleLogicFunction_o *)BuffEntity__getRelationId(v37, 0LL);
      if ( !v105 )
        goto LABEL_300;
      v105->fields.id = (int)this;
      v108 = BattleDataDefine_TypeInfo;
      if ( !BattleDataDefine_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(BattleDataDefine_TypeInfo);
        v108 = BattleDataDefine_TypeInfo;
      }
      v105->fields.atkPriority = BuffEntity__getAtkRelationPriority(
                                   v37,
                                   v108->static_fields->OVERWRITE_ATK_RATE_PRIORITY,
                                   0LL);
      v105->fields.defPriority = BuffEntity__getDefRelationPriority(
                                   v37,
                                   BattleDataDefine_TypeInfo->static_fields->OVERWRITE_DEF_RATE_PRIORITY,
                                   0LL);
    }
    *(_QWORD *)(v41 + 168) = v105;
    sub_1B4CF34((CGThumbnailListItem_o *)(v41 + 168), (int32_t)v105, v106, v107);
  }
  v109 = v37->fields.type;
  if ( !BuffList_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(BuffList_TypeInfo);
  if ( BuffList__CheckType(154, v109, 0LL) )
  {
    this = (BattleLogicFunction_o *)BattleServantData__get_BuffData(ServantData, 0LL);
    if ( !this )
      goto LABEL_300;
    this = (BattleLogicFunction_o *)this->fields.wkStr;
    if ( !this )
      goto LABEL_300;
    BattleBuffData_SkillRankChangeData__UpdateAddRightAfter((BattleBuffData_SkillRankChangeData_o *)this, 1, 0LL);
    BattleActionData_BuffData__OnUpdateBuffType(v223, 1, 0LL);
  }
  v110 = BuffEntity__checkBuffType(v37, 7, 0LL);
  if ( v38 && v110 )
  {
    UpDownGiveHeal = BattleServantData__getUpDownGiveHeal(v38, ServantData, 0LL);
    v112 = BattleUtility__FloorToInt(UpDownGiveHeal * (float)*(int *)(v41 + 28), 0LL);
    v113 = *(_DWORD *)(v41 + 52);
    *(_DWORD *)(v41 + 28) = v112;
    v114 = BattleUtility__FloorToInt(UpDownGiveHeal * (float)v113, 0LL);
    v115 = *(_DWORD *)(v41 + 56);
    *(_DWORD *)(v41 + 52) = v114;
    *(_DWORD *)(v41 + 56) = BattleUtility__FloorToInt(UpDownGiveHeal * (float)v115, 0LL);
    BattleServantData__getIndividualities(v38, 0LL, 1, 0, 0LL);
  }
  *(_BYTE *)(v41 + 32) = 0;
  *(_BYTE *)(v41 + 33) = BattleLogicFunction_ProcListInArgs__get_IsPassive(v222, 0LL);
  if ( DataVals__isParam(dataVals_k__BackingField, 23, 0LL) )
    *(_BYTE *)(v41 + 33) = 1;
  if ( DataVals__isParam(dataVals_k__BackingField, 24, 0LL) )
  {
    *(_BYTE *)(v41 + 33) = 0;
  }
  else if ( *(_BYTE *)(v41 + 33) )
  {
    *(_DWORD *)(v41 + 448) = DataVals__GetParam(dataVals_k__BackingField, 213, 0, 0LL);
  }
  if ( dataVals_k__BackingField->fields.flgBoost )
    BattleBuffData_BuffData__onState((BattleBuffData_BuffData_o *)v41, 2, 0LL);
  if ( DataVals__isRatioHpRange(dataVals_k__BackingField, 0LL) )
  {
    *(_DWORD *)(v41 + 72) = DataVals__GetParam(dataVals_k__BackingField, 20, 0, 0LL);
    *(_DWORD *)(v41 + 76) = DataVals__GetParam(dataVals_k__BackingField, 21, 0, 0LL);
    *(_DWORD *)(v41 + 80) = DataVals__GetParam(dataVals_k__BackingField, 30, 0, 0LL);
    *(_DWORD *)(v41 + 84) = DataVals__GetParam(dataVals_k__BackingField, 31, 0, 0LL);
  }
  else if ( DataVals__isParam(dataVals_k__BackingField, 20, 0LL) )
  {
    *(_DWORD *)(v41 + 72) = DataVals__GetParam(dataVals_k__BackingField, 20, 0, 0LL);
  }
  else if ( DataVals__isParam(dataVals_k__BackingField, 21, 0LL) )
  {
    *(_DWORD *)(v41 + 76) = DataVals__GetParam(dataVals_k__BackingField, 21, 0, 0LL);
  }
  if ( DataVals__isParamAddIndividuality(dataVals_k__BackingField, 0LL) )
  {
    v116 = DataVals__GetParamArray(dataVals_k__BackingField, 70, 0LL);
    *(_QWORD *)(v41 + 224) = v116;
    sub_1B4CF34((CGThumbnailListItem_o *)(v41 + 224), (int32_t)v116, v117, v118);
    v119 = DataVals__GetParamArray(dataVals_k__BackingField, 71, 0LL);
    *(_QWORD *)(v41 + 232) = v119;
    sub_1B4CF34((CGThumbnailListItem_o *)(v41 + 232), (int32_t)v119, v120, v121);
    v122 = DataVals__GetParamArray(dataVals_k__BackingField, 72, 0LL);
    *(_QWORD *)(v41 + 240) = v122;
    sub_1B4CF34((CGThumbnailListItem_o *)(v41 + 240), (int32_t)v122, v123, v124);
    v125 = DataVals__GetParamAddIndividualityAndCheckArrayData(dataVals_k__BackingField, 195, 0LL);
    *(_QWORD *)(v41 + 424) = v125;
    sub_1B4CF34((CGThumbnailListItem_o *)(v41 + 424), (int32_t)v125, v126, v127);
    v128 = DataVals__GetParamAddIndividualityAndCheckArrayData(dataVals_k__BackingField, 196, 0LL);
    *(_QWORD *)(v41 + 432) = v128;
    sub_1B4CF34((CGThumbnailListItem_o *)(v41 + 432), (int32_t)v128, v129, v130);
    v131 = DataVals__GetParamAddIndividualityAndCheckArrayData(dataVals_k__BackingField, 197, 0LL);
    *(_QWORD *)(v41 + 440) = v131;
    sub_1B4CF34((CGThumbnailListItem_o *)(v41 + 440), (int32_t)v131, v132, v133);
    *(_DWORD *)(v41 + 248) = DataVals__GetParam(dataVals_k__BackingField, 73, 0, 0LL);
    *(_DWORD *)(v41 + 252) = DataVals__GetParam(dataVals_k__BackingField, 60, 0, 0LL);
    *(_DWORD *)(v41 + 268) = DataVals__GetParam(dataVals_k__BackingField, 61, 0, 0LL);
  }
  if ( DataVals__IsParamAddBattlePoint(dataVals_k__BackingField, 0LL) )
  {
    *(_DWORD *)(v41 + 384) = DataVals__GetParam(dataVals_k__BackingField, 182, 0, 0LL);
    *(_DWORD *)(v41 + 388) = DataVals__GetParam(dataVals_k__BackingField, 183, 0, 0LL);
  }
  v134 = v37->fields.type;
  if ( !BuffList_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(BuffList_TypeInfo);
  if ( BuffList__CheckType(162, v134, 0LL) )
  {
    UpBuffRateBuffTypeList = BuffEntity__GetUpBuffRateBuffTypeList(v37, 0LL);
    *(_QWORD *)(v41 + 256) = UpBuffRateBuffTypeList;
    sub_1B4CF34((CGThumbnailListItem_o *)(v41 + 256), (int32_t)UpBuffRateBuffTypeList, v136, v137);
    *(_DWORD *)(v41 + 264) = BuffEntity__GetMaxBuffRate(v37, 0LL);
  }
  if ( DataVals__isParam(dataVals_k__BackingField, 22, 0LL) )
    BattleBuffData_BuffData__onState((BattleBuffData_BuffData_o *)v41, 64, 0LL);
  if ( DataVals__isParam(dataVals_k__BackingField, 25, 0LL) )
    BattleBuffData_BuffData__onState((BattleBuffData_BuffData_o *)v41, 128, 0LL);
  this = (BattleLogicFunction_o *)DataVals__isShowState(dataVals_k__BackingField, 0LL);
  if ( ((unsigned __int8)this & 1) != 0 )
  {
    LODWORD(mainAction) = DataVals__GetParam(dataVals_k__BackingField, 14, 0, 0LL);
LABEL_156:
    BattleBuffData_BuffData__setShowState((BattleBuffData_BuffData_o *)v41, (int32_t)mainAction, 0LL);
    goto LABEL_173;
  }
  if ( *(_BYTE *)(v41 + 33) )
  {
    externalArg = v222->fields.externalArg;
    if ( !externalArg )
      goto LABEL_300;
    if ( externalArg->fields.isWarBoard )
    {
      if ( !v38 )
        goto LABEL_300;
      if ( v38->fields.isEnemy && externalArg->fields.grantSkillType == 12 )
      {
        LODWORD(mainAction) = BuffEntity__GetShowStateWarBoardEnemyEquip(v37, 0, 0LL);
        if ( (_DWORD)mainAction )
          goto LABEL_156;
        if ( !DataManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
        this = (BattleLogicFunction_o *)DataManager__GetMaster_object_((const MethodInfo_2F01AD0 *)Method_DataManager_GetMaster_BuffTypeDetailMaster___);
        if ( !this )
          goto LABEL_300;
        this = (BattleLogicFunction_o *)DataMasterBase_object__object__int___TryGetEntity(
                                          (DataMasterBase_TMaster__TEntity__PKType__o *)this,
                                          &entity,
                                          v37->fields.type,
                                          (const MethodInfo_319D9E8 *)Method_DataMasterBase_BuffTypeDetailMaster__BuffTypeDetailEntity__int__TryGetEntity__);
        if ( ((unsigned __int8)this & 1) != 0 )
        {
          this = (BattleLogicFunction_o *)entity;
          if ( !entity )
            goto LABEL_300;
          this = (BattleLogicFunction_o *)BuffTypeDetailEntity__GetShowStateWarBoardEnemyEquip(
                                            (BuffTypeDetailEntity_o *)entity,
                                            0,
                                            0LL);
          mainAction = (BattleActionData_o *)(unsigned int)this;
          if ( (_DWORD)this )
            goto LABEL_156;
        }
      }
    }
    v139 = v10->fields.data;
    if ( !v139 )
      goto LABEL_300;
    this = (BattleLogicFunction_o *)v139->fields.battleEvent;
    if ( !this )
      goto LABEL_300;
    ((void (__fastcall *)(BattleLogicFunction_o *, __int64, Il2CppMethodPointer))this->klass[1].vtable._2_GetHashCode.method)(
      this,
      v41,
      this->klass[1].vtable._3_ToString.methodPtr);
  }
LABEL_173:
  if ( DataVals__IsOpponentOnly(dataVals_k__BackingField, 0LL) )
    BattleBuffData_BuffData__onState((BattleBuffData_BuffData_o *)v41, 2048, 0LL);
  if ( DataVals__isShowCommand(dataVals_k__BackingField, 0LL) )
    BattleBuffData_BuffData__onState((BattleBuffData_BuffData_o *)v41, 512, 0LL);
  if ( DataVals__IsAddIndividualty(dataVals_k__BackingField, 0LL) )
  {
    AddIndividualty = DataVals__GetAddIndividualty(dataVals_k__BackingField, 0LL);
    *(_QWORD *)(v41 + 120) = AddIndividualty;
    sub_1B4CF34((CGThumbnailListItem_o *)(v41 + 120), (int32_t)AddIndividualty, v141, v142);
  }
  if ( DataVals__IsAddLinkageTargetIndividualty(dataVals_k__BackingField, 0LL) )
  {
    LinkageTargetIndividualty = DataVals__GetLinkageTargetIndividualty(dataVals_k__BackingField, 0LL);
    *(_QWORD *)(v41 + 128) = LinkageTargetIndividualty;
    sub_1B4CF34((CGThumbnailListItem_o *)(v41 + 128), (int32_t)LinkageTargetIndividualty, v144, v145);
  }
  this = (BattleLogicFunction_o *)funcTarget->fields._funcUnit_k__BackingField;
  if ( !this )
    goto LABEL_300;
  if ( BattleLogicFunctionProcess_FunctionUnitCheck__HasLinkedFuncUnit(
         (BattleLogicFunctionProcess_FunctionUnitCheck_o *)this,
         0LL)
    && DataVals__IsBehaveAsFamilyBuff(dataVals_k__BackingField, 0LL) )
  {
    BattleLogicFunction__BehaveLinkageBuffAsFamily(v10, (BattleBuffData_BuffData_o *)v41, funcTarget, v146);
  }
  if ( DataVals__isParam(dataVals_k__BackingField, 99, 0LL) )
    BattleBuffData_BuffData__onState((BattleBuffData_BuffData_o *)v41, 0x800000, 0LL);
  if ( DataVals__isParam(dataVals_k__BackingField, 100, 0LL) )
    BattleBuffData_BuffData__onState((BattleBuffData_BuffData_o *)v41, 0x1000000, 0LL);
  if ( BuffEntity__getAppearanceId(v37, 0LL) >= 1 )
  {
    this = (BattleLogicFunction_o *)BattleServantData__isShiftableServant(ServantData, 0LL);
    if ( ((unsigned __int8)this & 1) != 0 )
      goto LABEL_196;
    v147 = v10->fields.data;
    if ( !v147 )
      goto LABEL_300;
    this = (BattleLogicFunction_o *)v147->fields.battleEvent;
    if ( !this )
      goto LABEL_300;
    if ( ((*(__int64 (__fastcall **)(BattleLogicFunction_o *, BattleServantData_o *, _QWORD))&this->klass[1]._2.element_size)(
            this,
            ServantData,
            *(_QWORD *)&this->klass[1]._2.static_fields_size) & 1) != 0
      || BattleServantData__isLogicResultAlive(ServantData, 0LL)
      || BattleServantData__isGuts(ServantData, 0LL) )
    {
LABEL_196:
      BattleBuffData_BuffData__onState((BattleBuffData_BuffData_o *)v41, 256, 0LL);
    }
  }
  *(_BYTE *)(v41 + 370) = DataVals__IsEqualsTo1(dataVals_k__BackingField, 159, 0LL);
  *(_DWORD *)(v41 + 276) = DataVals__GetParam(dataVals_k__BackingField, 93, 0, 0LL);
  *(_DWORD *)(v41 + 280) = DataVals__GetParam(dataVals_k__BackingField, 94, 0, 0LL);
  *(_DWORD *)(v41 + 284) = DataVals__GetParam(dataVals_k__BackingField, 95, 0, 0LL);
  *(_BYTE *)(v41 + 288) = DataVals__GetParam(dataVals_k__BackingField, 96, 0, 0LL) == 1;
  *(_BYTE *)(v41 + 289) = DataVals__GetParam(dataVals_k__BackingField, 97, 0, 0LL) == 1;
  ValsList = DataVals__GetValsList(dataVals_k__BackingField, 101, 0LL);
  *(_QWORD *)(v41 + 304) = ValsList;
  sub_1B4CF34((CGThumbnailListItem_o *)(v41 + 304), (int32_t)ValsList, v149, v150);
  v151 = DataVals__GetParam(dataVals_k__BackingField, 5, 0, 0LL);
  v152 = *(_DWORD *)(v41 + 60);
  if ( v151 )
    v153 = v151;
  else
    v153 = 1000;
  *(_DWORD *)(v41 + 48) = v153;
  if ( v152 < 1 )
    goto LABEL_206;
  v154 = (UnityEngine_Object_o *)v10->fields.logic;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(v154, 0LL, 0LL) )
  {
    this = (BattleLogicFunction_o *)v10->fields.logic;
    if ( !this )
      goto LABEL_300;
    v155 = BattleLogic__checkInField((BattleLogic_o *)this, *(_DWORD *)(v41 + 60), 0LL);
  }
  else
  {
LABEL_206:
    v155 = 1;
  }
  v156 = v37->fields.type;
  if ( !BuffList_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(BuffList_TypeInfo);
  if ( BuffList__CheckAccumulation(v156, 0LL) )
    BattleServantData__resetAccumulationDamage(ServantData, 0LL);
  mainAction = userCommandCodeId;
  v157 = treasureDvcId;
  *(_QWORD *)(v41 + 88) = userCommandCodeId;
  if ( (__int64)userCommandCodeId >= 1 )
  {
    this = (BattleLogicFunction_o *)v10->fields.data;
    if ( !this )
      goto LABEL_300;
    UserCommandCode = BattleData__getUserCommandCode((BattleData_o *)this, (int64_t)userCommandCodeId, 0LL);
    if ( UserCommandCode )
      *(_DWORD *)(v41 + 160) = UserCommandCode->fields.commandCodeId;
  }
  *(_QWORD *)(v41 + 348) = *(_QWORD *)&v218->fields.commandAssistId;
  ((void (__fastcall *)(BattleLogicFunctionProcess_FunctionTargetCheck_o *, __int64, Il2CppMethodPointer))funcTarget->klass->vtable._7_ApplyPrevSaveBuffData.method)(
    funcTarget,
    v41,
    funcTarget->klass->vtable._8_MakeActionBuffData.methodPtr);
  if ( BuffEntity__checkBuffType(v37, 41, 0LL) )
    MaxHp = BattleServantData__getMaxHp(ServantData, 0LL);
  else
    MaxHp = -1;
  userCommandCodeIda = ((__int64 (__fastcall *)(BattleServantData_o *, Il2CppMethodPointer))ServantData->klass->vtable._9_get_hp.method)(
                         ServantData,
                         ServantData->klass->vtable._10_set_hp.methodPtr);
  if ( !v155 )
    goto LABEL_224;
  v160 = v37->fields.type;
  if ( !BuffList_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(BuffList_TypeInfo);
  v161 = BuffList__CheckUpdateHp(v160, 0LL);
  v157 = treasureDvcId;
  if ( v161 )
  {
    v162 = v223;
    v223->fields.procType = 2;
    if ( BattleServantData__isLogicResultAlive(ServantData, 0LL) )
    {
      v163 = 1LL;
    }
    else
    {
      if ( BattleServantData__isGuts(ServantData, 0LL) )
      {
        v164 = ServantData->fields.uniqueId;
        IsCommandSideEffect = BattleLogicFunction_ProcListInArgs__get_IsCommandSideEffect(v222, 0LL);
        mainAction = BattleLogicFunction__getNoEffectObject(
                       v10,
                       v164,
                       funcIndex,
                       dataVals_k__BackingField,
                       IsCommandSideEffect,
                       0LL,
                       0LL,
                       v166);
        this = (BattleLogicFunction_o *)v216;
        if ( !v216 )
          goto LABEL_300;
        BattleActionData__addAction(v216, mainAction, 0LL);
        v162 = v223;
      }
      v163 = 0LL;
    }
    ((void (__fastcall *)(BattleLogicFunctionProcess_FunctionTargetCheck_o *, BattleActionData_BuffData_o *, __int64, __int64, __int64, Il2CppMethodPointer))funcTarget->klass->vtable._9_AddBuff.method)(
      funcTarget,
      v162,
      v41,
      1LL,
      v163,
      funcTarget->klass->vtable._10_AfterAddBuffProc.methodPtr);
    this = (BattleLogicFunction_o *)v216;
    if ( !v216 )
      goto LABEL_300;
    BattleActionData__addReflectLogicResultServantId(v216, uniqueId, 0LL);
    v167 = (BattleActionEffect_AddChangeMaxHpBuff_o *)sub_1B4D1DC(BattleActionEffect_AddChangeMaxHpBuff_TypeInfo);
    BattleActionEffect_AddChangeMaxHpBuff___ctor(v167, 0LL);
    this = (BattleLogicFunction_o *)sub_1B4D038(BattleBuffData_BuffData___TypeInfo, 1LL);
    if ( !this )
      goto LABEL_300;
    v168 = this;
    this = (BattleLogicFunction_o *)sub_1B4D0CC(v41, this->klass->_1.element_class);
    if ( !this )
    {
      v211 = sub_1B4D210(0LL);
      sub_1B4D0B8(v211, 0LL);
    }
    if ( !LODWORD(v168->fields.logic) )
      goto LABEL_301;
    v168->fields.logictarget = (struct BattleLogicTarget_o *)v41;
    sub_1B4CF34((CGThumbnailListItem_o *)&v168->fields.logictarget, v41, v169, v170);
    this = (BattleLogicFunction_o *)BattleServantData__getNowHp(ServantData, 0LL);
    if ( !v167 )
      goto LABEL_300;
    v171 = (BattleActionEffect_Base_o *)((__int64 (__fastcall *)(BattleActionEffect_AddChangeMaxHpBuff_o *, BattleLogicFunction_o *, _QWORD, _QWORD, Il2CppMethodPointer))v167->klass->vtable._7_InitBuff.method)(
                                          v167,
                                          v168,
                                          uniqueId,
                                          (unsigned int)((_DWORD)this - userCommandCodeIda),
                                          v167->klass->vtable._8_PartialPreActionProc.methodPtr);
    BattleActionData_BuffData__SetActionEffectProc(v223, v171, 0LL);
    v157 = treasureDvcId;
  }
  else
  {
LABEL_224:
    ((void (__fastcall *)(BattleLogicFunctionProcess_FunctionTargetCheck_o *, BattleActionData_BuffData_o *, __int64, bool, _QWORD, Il2CppMethodPointer))funcTarget->klass->vtable._9_AddBuff.method)(
      funcTarget,
      v223,
      v41,
      v155,
      0LL,
      funcTarget->klass->vtable._10_AfterAddBuffProc.methodPtr);
  }
  id = v37->fields.id;
  if ( id == ConstantMaster__getValue((System_String_o *)StringLiteral_13060/*"TAMAMOCAT_STUN_BUFF_ID"*/, 0LL) )
  {
    v173 = (System_Collections_Generic_List_int__o *)sub_1B4D1DC(System_Collections_Generic_List_int__TypeInfo);
    System_Collections_Generic_List_int____ctor(
      v173,
      (const MethodInfo_3562964 *)Method_System_Collections_Generic_List_int___ctor__);
    v224 = 1;
    for ( i = System_Int32__ToString((int32_t)&v224, 0LL); ; i = System_Int32__ToString((int32_t)&v224, 0LL) )
    {
      v175 = System_String__Concat_61093468((System_String_o *)StringLiteral_13061/*"TAMAMOCAT_TREASURE_DEVICE_ID_"*/, i, 0LL);
      if ( ConstantMaster__getValue(v175, 0LL) == -1 )
        break;
      v176 = System_Int32__ToString((int32_t)&v224, 0LL);
      v177 = System_String__Concat_61093468((System_String_o *)StringLiteral_13061/*"TAMAMOCAT_TREASURE_DEVICE_ID_"*/, v176, 0LL);
      this = (BattleLogicFunction_o *)ConstantMaster__getValue(v177, 0LL);
      if ( (_DWORD)this == v157 )
      {
        if ( !v38 )
          goto LABEL_300;
        BattleServantData__SetIsSleepWaitMode(v38, 1, 0LL);
      }
      ++v224;
    }
  }
  this = (BattleLogicFunction_o *)v10->fields.data;
  if ( !this )
    goto LABEL_300;
  QuestIndividualities = BattleData__getQuestIndividualities((BattleData_o *)this, 0LL);
  v179 = (UnityEngine_Object_o *)v10->fields.logic;
  v180 = QuestIndividualities;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  this = (BattleLogicFunction_o *)UnityEngine_Object__op_Inequality(v179, 0LL, 0LL);
  perf = 0LL;
  if ( ((unsigned __int8)this & 1) != 0 )
  {
    v182 = v10->fields.logic;
    if ( !v182 )
      goto LABEL_300;
    perf = v182->fields.perf;
  }
  BattleServantData__updateConditionsBuff(ServantData, v180, perf, 0LL);
  if ( BuffEntity__checkBuffType(v37, 133, 0LL) || *(_QWORD *)(v41 + 312) )
  {
    v183 = (UnityEngine_Object_o *)v10->fields.logic;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    if ( UnityEngine_Object__op_Inequality(v183, 0LL, 0LL) )
    {
      this = (BattleLogicFunction_o *)v10->fields.logic;
      if ( !this )
        goto LABEL_300;
      BattleLogic__updateConditionsBuffAll((BattleLogic_o *)this, 0LL);
    }
    this = (BattleLogicFunction_o *)v10->fields.data;
    if ( !this )
      goto LABEL_300;
    this = (BattleLogicFunction_o *)BattleData__getFieldServantList((BattleData_o *)this, 0, 0LL);
    if ( !this )
      goto LABEL_300;
    v184 = (int)this->fields.logic;
    v185 = this;
    if ( v184 >= 1 )
    {
      v186 = 0;
      while ( v186 < v184 )
      {
        this = (BattleLogicFunction_o *)*((_QWORD *)&v185->fields.logictarget + (int)v186);
        if ( !this )
          goto LABEL_300;
        BattleServantData__updateBuff((BattleServantData_o *)this, 1, 1, 0LL);
        v184 = (int)v185->fields.logic;
        if ( (int)++v186 >= v184 )
          goto LABEL_263;
      }
LABEL_301:
      sub_1B4D1F4(this, mainAction);
    }
  }
LABEL_263:
  if ( BuffEntity__checkBuffType(v37, 206, 0LL) )
  {
    ShortenMaxCountArray = DataVals__GetShortenMaxCountArray(dataVals_k__BackingField, 0LL);
    *(_QWORD *)(v41 + 392) = ShortenMaxCountArray;
    sub_1B4CF34((CGThumbnailListItem_o *)(v41 + 392), (int32_t)ShortenMaxCountArray, v188, v189);
  }
  this = (BattleLogicFunction_o *)BuffEntity__checkBuffType(v37, 208, 0LL);
  v190 = v223;
  if ( ((unsigned __int8)this & 1) != 0 )
  {
    TargetFunctionIndividuality = DataVals__GetTargetFunctionIndividuality(dataVals_k__BackingField, 0LL);
    *(_QWORD *)(v41 + 400) = TargetFunctionIndividuality;
    sub_1B4CF34((CGThumbnailListItem_o *)(v41 + 400), (int32_t)TargetFunctionIndividuality, v192, v193);
    TargetBuffIndividuality = DataVals__GetTargetBuffIndividuality(dataVals_k__BackingField, 0LL);
    *(_QWORD *)(v41 + 408) = TargetBuffIndividuality;
    sub_1B4CF34((CGThumbnailListItem_o *)(v41 + 408), (int32_t)TargetBuffIndividuality, v195, v196);
  }
  if ( (MaxHp & 0x80000000) == 0 )
  {
    this = (BattleLogicFunction_o *)BattleServantData__getMaxHp(ServantData, 0LL);
    if ( (int)this < MaxHp )
    {
      v197 = ServantData->fields.maxhp;
      if ( !System_Math_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(System_Math_TypeInfo);
      this = (BattleLogicFunction_o *)System_Math__Max_62621788(0, userCommandCodeIda - v197, 0LL);
      v190 = v223;
      *(_DWORD *)(v41 + 136) = (_DWORD)this;
    }
  }
  v198 = v10->fields.data;
  if ( !v198 )
    goto LABEL_300;
  this = (BattleLogicFunction_o *)v198->fields.battleEvent;
  if ( !this )
    goto LABEL_300;
  *(_BYTE *)(v41 + 212) = (*(__int64 (__fastcall **)(BattleLogicFunction_o *, __int64, BuffEntity_o *, DataVals_o *, _QWORD))&this->klass[1]._2.field_count)(
                            this,
                            v41,
                            v37,
                            dataVals_k__BackingField,
                            *(_QWORD *)&this->klass[1]._2.interfaces_count) & 1;
  if ( BuffEntity__checkBuffType(v37, 140, 0LL) )
  {
    buffData = ServantData->fields.buffData;
    v200 = (BattleBuffData_CheckIndividualitiesData_o *)sub_1B4D1DC(BattleBuffData_CheckIndividualitiesData_TypeInfo);
    BattleBuffData_CheckIndividualitiesData___ctor_43313456(v200, ServantData, 0LL, 0LL, 0LL, 0LL, 0LL, 0LL);
    if ( !buffData )
      goto LABEL_300;
    this = (BattleLogicFunction_o *)BattleBuffData__getBuffList_43119424(buffData, 83, v200, 1, 0, 0LL, 0LL, 0LL);
    if ( !this )
      goto LABEL_300;
    v190 = v223;
    if ( this->fields.logic )
      BattleLogicFunction__functionResetCommandCard(v10, (int32_t)mainAction, v201, v202, v203, v204);
  }
  if ( DataVals__IsOnParty(dataVals_k__BackingField, 0LL) )
    *(_DWORD *)(v41 + 272) = v219;
  v205 = BattleLogicFunction_ProcListInArgs__get_IsCommandSideEffect(v222, 0LL);
  v206 = (BattleActionData_BuffData_o *)((__int64 (__fastcall *)(BattleLogicFunctionProcess_FunctionTargetCheck_o *, BattleActionData_BuffData_o *, __int64, FunctionEntity_o *, bool, Il2CppMethodPointer))funcTarget->klass->vtable._12_MakeAddActionBuffData.method)(
                                          funcTarget,
                                          v190,
                                          v41,
                                          funcEnt,
                                          v205,
                                          funcTarget->klass->vtable._13_GetConvertBuffEntity.methodPtr);
  if ( DataVals__IsProgressTurnOnBoard(dataVals_k__BackingField, 0LL) )
    *(_BYTE *)(v41 + 368) = 1;
  if ( DataVals__GetParam(dataVals_k__BackingField, 149, 0, 0LL) > 0
    || BuffEntity__IsDelayRemoveExpiredOnPlayerTurn(v37, 0LL) )
  {
    *(_BYTE *)(v41 + 369) = 1;
  }
  BattleLogicFunction__AfterAddedBuffProcess(v10, ServantData, v37, v207);
  if ( BuffEntity__getDamageRelease(v37, 0LL) >= 1
    && !BattleServantData__isLogicResultAlive(ServantData, 0LL)
    && (this = (BattleLogicFunction_o *)BattleServantData__isGuts(ServantData, 0LL), ((unsigned __int8)this & 1) != 0)
    || (this = (BattleLogicFunction_o *)BuffEntity__getDamageRelease(v37, 0LL), (_DWORD)this == -1) )
  {
    ServantData->fields.isGutsSleepRelease = 0;
  }
  if ( !v216
    || (BattleActionData__setBuffData(v216, v206, dataVals_k__BackingField, 0LL),
        (this = (BattleLogicFunction_o *)v10->fields.data) == 0LL) )
  {
LABEL_300:
    sub_1B4D1EC(this, mainAction);
  }
  BattleData__AddFreshBuffList((BattleData_o *)this, v206, 0LL);
  BattleActionData__addAction(v218, v216, 0LL);
  ((void (__fastcall *)(BattleLogicFunctionProcess_FunctionTargetCheck_o *, BattleActionData_o *, BattleActionData_BuffData_o *, __int64, Il2CppMethodPointer))funcTarget->klass->vtable._10_AfterAddBuffProc.method)(
    funcTarget,
    v218,
    v206,
    v41,
    funcTarget->klass->vtable._11_MakeWrapTarget.methodPtr);
  v208 = (UnityEngine_Object_o *)v10->fields.logic;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(v208, 0LL, 0LL)
    && BattleLogicFunction__IsSituationForceTurnProgressExecutable(
         v10,
         v38,
         dataVals_k__BackingField,
         &isEnemyTurn,
         v209) )
  {
    BattleBuffData__TurnProgressingSpecifiedBuff(
      v10->fields.logic,
      (BattleBuffData_BuffData_o *)v41,
      isEnemyTurn,
      ServantData->fields.uniqueId,
      0LL);
  }
  return (BattleBuffData_BuffData_o *)v41;
}


void __fastcall BattleLogicFunction__functionBreakGaugeChange(
        BattleLogicFunction_o *this,
        BattleActionData_o *mainAction,
        BattleLogicFunctionProcess_FunctionUnitCheck_o *funcUnit,
        BattleServantData_o *targetSvtData,
        BattleActionData_BaseShiftGaugeData_o *shiftGauge,
        const MethodInfo *method)
{
  __int64 v10; // x1
  __int64 v11; // x1
  __int64 v12; // x1
  __int64 v13; // x1
  struct DataVals_o *dataVals_k__BackingField; // x23
  BattleLogicFunction_ProcListInArgs_o *procArg_k__BackingField; // x25
  int32_t uniqueId; // w20
  int32_t funcIndex; // w21
  bool IsCommandSideEffect; // w0
  const MethodInfo *v19; // x7
  __int64 v20; // x19
  int32_t v21; // w8
  __int64 v22; // x0
  int32_t v23; // w2
  const MethodInfo *v24; // x3
  int32_t v25; // w26
  int32_t v26; // w27
  FunctionEntity_o *funcEnt; // x28
  _BOOL8 v28; // x0
  const MethodInfo *v29; // x6
  BattleActionData_ShiftServant_o *v30; // x24
  SimpleHpData_o *v31; // x27
  int32_t MaxHp; // w0
  SimpleHpData_o *v33; // x25
  int32_t CurrentShiftPos; // w0
  EnemySimpleHpData_o *v35; // x25
  unsigned int Value; // w0
  int v37; // w0
  int v38; // w24
  int v39; // w28
  int32_t v40; // w29
  int32_t Param; // w0
  SimpleHpData_o *v42; // x26
  unsigned int v43; // w19
  unsigned int MaxShiftIconPos; // w0
  int v45; // [xsp+Ch] [xbp-84h]
  BattleActionData_ShiftServant_o *v46; // [xsp+10h] [xbp-80h]
  BattleActionData_o *v47; // [xsp+18h] [xbp-78h]
  BattleLogicFunction_o *v48; // [xsp+28h] [xbp-68h]

  v48 = this;
  if ( (byte_49BDBB6 & 1) == 0 )
  {
    sub_1B4CF90(&BattleActionData_TypeInfo, mainAction);
    sub_1B4CF90(&EnemySimpleHpData_TypeInfo, v10);
    sub_1B4CF90(&System_Math_TypeInfo, v11);
    sub_1B4CF90(&BattleActionData_ShiftServant_TypeInfo, v12);
    this = (BattleLogicFunction_o *)sub_1B4CF90(&SimpleHpData_TypeInfo, v13);
    byte_49BDBB6 = 1;
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
                                          v48,
                                          uniqueId,
                                          funcIndex,
                                          dataVals_k__BackingField,
                                          IsCommandSideEffect,
                                          0LL,
                                          0LL,
                                          v19);
        if ( mainAction )
        {
          BattleActionData__addAction(mainAction, (BattleActionData_o *)this, 0LL);
          return;
        }
      }
    }
    goto LABEL_34;
  }
  v20 = sub_1B4D1DC(BattleActionData_TypeInfo);
  BattleActionData___ctor((BattleActionData_o *)v20, 0LL);
  if ( !v20 )
    goto LABEL_34;
  v21 = targetSvtData->fields.uniqueId;
  *(_DWORD *)(v20 + 32) = v21;
  *(_DWORD *)(v20 + 36) = v21;
  v22 = ((__int64 (__fastcall *)(BattleActionData_BaseShiftGaugeData_o *, Il2CppMethodPointer))shiftGauge->klass->vtable._7_unknown.method)(
          shiftGauge,
          shiftGauge->klass->vtable._8_unknown.methodPtr);
  *(_QWORD *)(v20 + 64) = v22;
  sub_1B4CF34((CGThumbnailListItem_o *)(v20 + 64), v22, v23, v24);
  if ( !dataVals_k__BackingField )
    goto LABEL_34;
  if ( !procArg_k__BackingField )
    goto LABEL_34;
  v25 = dataVals_k__BackingField->fields.funcIndex;
  v26 = targetSvtData->fields.uniqueId;
  funcEnt = dataVals_k__BackingField->fields.funcEnt;
  v28 = BattleLogicFunction_ProcListInArgs__get_IsCommandSideEffect(procArg_k__BackingField, 0LL);
  this = (BattleLogicFunction_o *)BattleLogicFunction__getFunctionObject(
                                    (BattleLogicFunction_o *)v28,
                                    funcEnt,
                                    v26,
                                    v25,
                                    v28,
                                    0LL,
                                    v29);
  if ( !this )
    goto LABEL_34;
  BYTE5(this[1].fields.master) = 0;
  BattleActionData__setBuffData((BattleActionData_o *)v20, (BattleActionData_BuffData_o *)this, 0LL, 0LL);
  v30 = (BattleActionData_ShiftServant_o *)sub_1B4D1DC(BattleActionData_ShiftServant_TypeInfo);
  BattleActionData_ShiftServant___ctor(v30, 0, 0LL);
  if ( !v30 )
    goto LABEL_34;
  v47 = (BattleActionData_o *)v20;
  v46 = v30;
  BattleActionData_ShiftServant__setBeforeSvtData(v30, targetSvtData, 0LL);
  ((void (__fastcall *)(BattleActionData_BaseShiftGaugeData_o *, BattleServantData_o *, Il2CppMethodPointer))shiftGauge->klass->vtable._12_Init.method)(
    shiftGauge,
    targetSvtData,
    shiftGauge->klass->vtable._13_InitShiftHpPos.methodPtr);
  v31 = (SimpleHpData_o *)sub_1B4D1DC(SimpleHpData_TypeInfo);
  SimpleHpData___ctor(v31, targetSvtData, 0LL);
  if ( DataVals__IsEqualsTo1(dataVals_k__BackingField, 185, 0LL) )
  {
    MaxHp = BattleServantData__getMaxHp(targetSvtData, 0LL);
    BattleServantData__setHp(targetSvtData, MaxHp, 1, 0LL);
    v33 = (SimpleHpData_o *)sub_1B4D1DC(SimpleHpData_TypeInfo);
    SimpleHpData___ctor(v33, targetSvtData, 0LL);
    CurrentShiftPos = BattleServantData__GetCurrentShiftPos(targetSvtData, 0LL);
    BattleActionData_BaseShiftGaugeData__AddHpUpDataBeforeShift(shiftGauge, CurrentShiftPos, v31, v33, 0LL);
    v31 = v33;
  }
  v35 = (EnemySimpleHpData_o *)sub_1B4D1DC(EnemySimpleHpData_TypeInfo);
  EnemySimpleHpData___ctor(v35, targetSvtData, 0LL);
  Value = DataVals__GetValue(dataVals_k__BackingField, 0LL);
  v37 = ((__int64 (__fastcall *)(BattleActionData_BaseShiftGaugeData_o *, BattleServantData_o *, _QWORD, Il2CppMethodPointer))shiftGauge->klass->vtable._9_unknown.method)(
          shiftGauge,
          targetSvtData,
          Value,
          shiftGauge->klass->vtable._10_unknown.methodPtr);
  v45 = v37;
  if ( v37 >= 0 )
    v38 = v37;
  else
    v38 = -v37;
  v39 = 1;
  if ( v37 < 1 )
    v40 = -1;
  else
    v40 = 1;
  while ( 1 )
  {
    if ( !System_Math_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(System_Math_TypeInfo);
    if ( v39 > v38 )
      break;
    BattleServantData__SetShiftServantChange(targetSvtData, v48->fields.data, v35, v40, 0LL);
    Param = DataVals__GetParam(dataVals_k__BackingField, 59, 0, 0LL);
    ((void (__fastcall *)(BattleActionData_BaseShiftGaugeData_o *, BattleServantData_o *, bool, Il2CppMethodPointer))shiftGauge->klass->vtable._10_unknown.method)(
      shiftGauge,
      targetSvtData,
      Param > 0,
      shiftGauge->klass->vtable._11_unknown.methodPtr);
    v42 = (SimpleHpData_o *)sub_1B4D1DC(SimpleHpData_TypeInfo);
    SimpleHpData___ctor(v42, targetSvtData, 0LL);
    v43 = BattleServantData__GetCurrentShiftPos(targetSvtData, 0LL);
    MaxShiftIconPos = BattleServantData__GetMaxShiftIconPos(targetSvtData, 0LL);
    ((void (__fastcall *)(BattleActionData_BaseShiftGaugeData_o *, _QWORD, _QWORD, SimpleHpData_o *, SimpleHpData_o *, Il2CppMethodPointer))shiftGauge->klass->vtable._11_unknown.method)(
      shiftGauge,
      v43,
      MaxShiftIconPos,
      v31,
      v42,
      shiftGauge->klass->vtable._12_Init.methodPtr);
    ++v39;
    v31 = v42;
  }
  if ( v45 )
  {
    this = (BattleLogicFunction_o *)v48->fields.logic;
    if ( !this )
      goto LABEL_34;
    BattleLogic__actEnemyPtPassiveSkill((BattleLogic_o *)this, targetSvtData->fields.uniqueId, 1, 0, 0LL);
  }
  BattleActionData_ShiftServant__setCheckSvtData(v46, targetSvtData, 0LL);
  BattleActionData__setShiftServant(v47, v46, 0LL);
  BattleActionData__SetShiftGauge(v47, shiftGauge, 0LL);
  if ( !mainAction )
LABEL_34:
    sub_1B4D1EC(this, mainAction);
  BattleActionData__AddAfterActionData(mainAction, v47, 0, 0LL);
}


// local variable allocation has failed, the output may be wrong!
BattleActionData_o *__fastcall BattleLogicFunction__functionCallServant(
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

  if ( (byte_49BDBA7 & 1) == 0 )
  {
    sub_1B4CF90(&BattleActionData_TypeInfo, *(_QWORD *)&playerId);
    byte_49BDBA7 = 1;
  }
  data = this->fields.data;
  if ( !data )
    goto LABEL_26;
  data = (BattleData_o *)BattleData__getServantData(data, playerId, 0LL);
  targetIndex = -1;
  if ( !baseVals )
    goto LABEL_26;
  v15 = this->fields.data;
  v16 = (BattleServantData_o *)data;
  data = (BattleData_o *)DataVals__isCheckEnemyFieldSpace(baseVals, 0LL);
  if ( !v15 )
    goto LABEL_26;
  FieldSpace = (BattleLogicFunction_o *)BattleData__getFieldSpace(
                                          v15,
                                          playerId,
                                          &targetIndex,
                                          (unsigned __int8)data & 1,
                                          0LL);
  if ( !(_DWORD)FieldSpace )
    return BattleLogicFunction__getMissObject(
             FieldSpace,
             playerId,
             funcIndex,
             baseVals,
             isCommandSideEffect,
             0LL,
             0LL,
             v18);
  if ( playerId == -1 )
  {
    v19 = this->fields.data;
    data = (BattleData_o *)DataVals__GetValue(baseVals, 0LL);
    if ( !v19 )
      goto LABEL_26;
    FieldSpace = (BattleLogicFunction_o *)BattleData__GetEnemySummonId(v19, (int32_t)data, 0LL);
  }
  else
  {
    data = (BattleData_o *)DataVals__GetValue(baseVals, 0LL);
    if ( !v16 )
      goto LABEL_26;
    FieldSpace = (BattleLogicFunction_o *)BattleServantData__getSummonNpcId(v16, (int32_t)data, 0LL);
  }
  v20 = (int)FieldSpace;
  if ( (_DWORD)FieldSpace == -1 )
    return BattleLogicFunction__getMissObject(
             FieldSpace,
             playerId,
             funcIndex,
             baseVals,
             isCommandSideEffect,
             0LL,
             0LL,
             v18);
  data = this->fields.data;
  if ( !data )
    goto LABEL_26;
  data = (BattleData_o *)BattleData__getNextUniqueID(data, 0LL);
  if ( !this->fields.data )
    goto LABEL_26;
  v21 = (int)data;
  data = (BattleData_o *)BattleData__getNextNextIndex(this->fields.data, 0LL);
  if ( !this->fields.data )
    goto LABEL_26;
  data = (BattleData_o *)BattleData__createSummonEnemyServantData(
                           this->fields.data,
                           v21,
                           (int32_t)data,
                           v20,
                           0LL,
                           0LL,
                           0LL);
  v22 = this->fields.data;
  if ( !v22 )
    goto LABEL_26;
  e_entryid = v22->fields.e_entryid;
  if ( !e_entryid )
    goto LABEL_26;
  if ( targetIndex >= e_entryid->max_length )
    sub_1B4D1F4(data, *(_QWORD *)&playerId);
  v24 = (char *)e_entryid + 4 * targetIndex;
  v27 = *((_DWORD *)v24 + 8);
  v25 = v24 + 32;
  v26 = v27;
  v28 = (BattleServantData_o *)data;
  if ( !data )
    goto LABEL_26;
  *v25 = data->fields.m_CancellationTokenSource;
  BYTE4(data->fields.fixedCommands) = 1;
  BYTE1(data->fields.totalCriticalStars) = 1;
  BattleServantData__SetRemainActionCount((BattleServantData_o *)data, 1, 0LL);
  data = (BattleData_o *)this->fields.logic;
  if ( !data
    || (BattleLogic__addEnemyActPriorityList((BattleLogic_o *)data, v28, 0LL),
        v29 = (BattleActionData_o *)sub_1B4D1DC(BattleActionData_TypeInfo),
        BattleActionData___ctor(v29, 0LL),
        uniqueId = v28->fields.uniqueId,
        isEffectSummon = DataVals__isEffectSummon(baseVals, 0LL),
        data = (BattleData_o *)DataVals__GetCallSvtEffectId(baseVals, 0LL),
        !v29)
    || (BattleActionData__setSummonServant(v29, uniqueId, v26, funcIndex, isEffectSummon, (int32_t)data, 0LL), !procArg) )
  {
LABEL_26:
    sub_1B4D1EC(data, *(_QWORD *)&playerId);
  }
  procArg->fields.updateField = 1;
  return v29;
}


// local variable allocation has failed, the output may be wrong!
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
  int32_t FieldPriority; // w23
  bool v14; // w4

  if ( (byte_49BDBAA & 1) == 0 )
  {
    sub_1B4CF90(&BattleActionData_TypeInfo, *(_QWORD *)&actionId);
    byte_49BDBAA = 1;
  }
  v8 = (BattleActionData_o *)sub_1B4D1DC(BattleActionData_TypeInfo);
  BattleActionData___ctor(v8, 0LL);
  if ( !v8 || (v8->fields.actorId = actionId, !baseVals) )
    sub_1B4D1EC(v9, v10);
  Value = DataVals__GetValue(baseVals, 0LL);
  Param = DataVals__GetParam(baseVals, 4, 0, 0LL);
  FieldPriority = DataVals__GetFieldPriority(baseVals, 0LL);
  v14 = DataVals__GetParam(baseVals, 6, 0, 0LL) > 0;
  BattleActionData__setChangeBg(v8, Value, Param, FieldPriority, v14, 0LL);
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
  __int64 v11; // x1
  BattleData_o *data; // x0
  BattleServantData_o *ServantData; // x22
  BattleActionData_o *v14; // x21
  BattleActionData_ShiftServant_o *v15; // x23

  if ( (byte_49BDBA9 & 1) == 0 )
  {
    sub_1B4CF90(&BattleActionData_TypeInfo, *(_QWORD *)&actionId);
    sub_1B4CF90(&BattleActionData_ShiftServant_TypeInfo, v11);
    byte_49BDBA9 = 1;
  }
  data = this->fields.data;
  if ( !data )
    goto LABEL_9;
  ServantData = BattleData__getServantData(data, targetId, 0LL);
  v14 = (BattleActionData_o *)sub_1B4D1DC(BattleActionData_TypeInfo);
  BattleActionData___ctor(v14, 0LL);
  if ( !v14 )
    goto LABEL_9;
  v14->fields.actorId = actionId;
  v15 = (BattleActionData_ShiftServant_o *)sub_1B4D1DC(BattleActionData_ShiftServant_TypeInfo);
  BattleActionData_ShiftServant___ctor(v15, 0, 0LL);
  if ( !v15
    || (BattleActionData_ShiftServant__setBeforeSvtData(v15, ServantData, 0LL), !ServantData)
    || (BattleServantData__setChangeServant(ServantData, this->fields.data, baseVals, 0LL),
        BattleActionData_ShiftServant__setCheckSvtData(v15, ServantData, 0LL),
        BattleActionData__setShiftServant(v14, v15, 0LL),
        (data = (BattleData_o *)this->fields.logic) == 0LL) )
  {
LABEL_9:
    sub_1B4D1EC(data, *(_QWORD *)&actionId);
  }
  BattleLogic__actEnemyPtPassiveSkill((BattleLogic_o *)data, ServantData->fields.uniqueId, 0, 0, 0LL);
  return v14;
}


// local variable allocation has failed, the output may be wrong!
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

  if ( (byte_49BDB96 & 1) == 0 )
  {
    sub_1B4CF90(&BattleActionData_TypeInfo, *(_QWORD *)&playerId);
    byte_49BDB96 = 1;
  }
  v15 = (BattleActionData_o *)sub_1B4D1DC(BattleActionData_TypeInfo);
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
    sub_1B4D1EC(data, v16);
  }
  BattleActionData__SetFuncDamageData(v15, v21, baseVals, 0LL);
  return v15;
}


// local variable allocation has failed, the output may be wrong!
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

  if ( (byte_49BDB9F & 1) == 0 )
  {
    sub_1B4CF90(&BattleActionData_TypeInfo, *(_QWORD *)&targetId);
    byte_49BDB9F = 1;
  }
  *absorptionCount = 0;
  v15 = (BattleActionData_o *)sub_1B4D1DC(BattleActionData_TypeInfo);
  BattleActionData___ctor(v15, 0LL);
  data = this->fields.data;
  if ( !data )
    goto LABEL_22;
  data = (BattleData_o *)BattleData__getServantData(data, targetId, 0LL);
  if ( !data )
    goto LABEL_22;
  v18 = (BattleServantData_o *)data;
  if ( !HIBYTE(data->fields.fixedCommands) )
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
    sub_1B4D1EC(data, v16);
  }
  BattleActionData__setBuffData(v15, (BattleActionData_BuffData_o *)data, baseVals, 0LL);
  return v15;
}


// local variable allocation has failed, the output may be wrong!
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
  __int64 v17; // x1
  BattleActionData_o *v18; // x24
  __int64 v19; // x1
  BattleData_o *data; // x0
  BattleServantData_o *v21; // x28
  BattleServantData_o *v22; // x25
  const MethodInfo *v23; // x4
  BattleBuffData_o *buffData; // x29
  BattleBuffData_CheckIndividualitiesData_o *v25; // x20
  struct BattleData_o *v26; // x8
  char v27; // w20
  int32_t ActualRecoveryHealPoint; // w0
  float UpDownGiveHeal; // s0
  __int64 v31; // x8
  const MethodInfo *v32; // [xsp+10h] [xbp-80h]
  FunctionEntity_o *v33; // [xsp+20h] [xbp-70h]
  int32_t digit; // [xsp+2Ch] [xbp-64h] BYREF

  LODWORD(v9) = overwriteHeal;
  if ( (byte_49BDB99 & 1) == 0 )
  {
    sub_1B4CF90(&BattleActionData_TypeInfo, *(_QWORD *)&playerId);
    sub_1B4CF90(&BattleBuffData_CheckIndividualitiesData_TypeInfo, v17);
    byte_49BDB99 = 1;
  }
  digit = 0;
  v18 = (BattleActionData_o *)sub_1B4D1DC(BattleActionData_TypeInfo);
  BattleActionData___ctor(v18, 0LL);
  data = this->fields.data;
  if ( !data )
    goto LABEL_26;
  data = (BattleData_o *)BattleData__getServantData(data, playerId, 0LL);
  if ( !this->fields.data )
    goto LABEL_26;
  v21 = (BattleServantData_o *)data;
  data = (BattleData_o *)BattleData__getServantData(this->fields.data, targetId, 0LL);
  if ( !baseVals )
    goto LABEL_26;
  v22 = (BattleServantData_o *)data;
  baseVals->fields.isShowForcedEffect = 0;
  if ( (_DWORD)v9 == -1 )
    LODWORD(v9) = DataVals__GetValue(baseVals, 0LL);
  data = (BattleData_o *)DataVals__isUnaffected(baseVals, 0LL);
  if ( ((unsigned __int8)data & 1) != 0 )
    goto LABEL_20;
  if ( !v22 )
    goto LABEL_26;
  if ( ((__int64 (__fastcall *)(BattleServantData_o *, Il2CppMethodPointer))v22->klass->vtable._13_get_resultHp.method)(
         v22,
         v22->klass->vtable._14_set_resultHp.methodPtr) <= 0 )
  {
    data = (BattleData_o *)BattleServantData__isShiftableServant(v22, 0LL);
    if ( ((unsigned __int8)data & 1) != 0 )
      goto LABEL_19;
    v26 = this->fields.data;
    if ( v26 )
    {
      data = (BattleData_o *)v26->fields.battleEvent;
      if ( data )
      {
        data = (BattleData_o *)(*(__int64 (__fastcall **)(BattleData_o *, BattleServantData_o *, _QWORD))&data->klass[1]._2.initializationExceptionGCHandle)(
                                 data,
                                 v22,
                                 *(_QWORD *)&data->klass[1]._2.cctor_finished);
        if ( ((unsigned __int8)data & 1) == 0 )
        {
          data = (BattleData_o *)BattleServantData__isGuts(v22, 0LL);
          LODWORD(v9) = 0;
          v27 = (unsigned __int8)data ^ 1;
          goto LABEL_21;
        }
        goto LABEL_19;
      }
    }
    goto LABEL_26;
  }
  data = (BattleData_o *)BattleServantData__isShiftReady(v22, 0LL);
  if ( ((unsigned __int8)data & 1) != 0 )
  {
LABEL_19:
    LODWORD(v9) = 0;
LABEL_20:
    v27 = 0;
    goto LABEL_21;
  }
  v33 = funcEnt;
  buffData = v22->fields.buffData;
  v25 = (BattleBuffData_CheckIndividualitiesData_o *)sub_1B4D1DC(BattleBuffData_CheckIndividualitiesData_TypeInfo);
  BattleBuffData_CheckIndividualitiesData___ctor_43313456(v25, v22, 0LL, 0LL, 0LL, 0LL, 0LL, 0LL);
  if ( !buffData )
LABEL_26:
    sub_1B4D1EC(data, v19);
  if ( BattleBuffData__isTurnBuff(buffData, 42, v25, 1, 0LL) )
  {
    data = (BattleData_o *)DataVals__SetInvalidCauseByAnyBuff(baseVals, targetId, 0LL);
    funcEnt = v33;
    goto LABEL_19;
  }
  if ( v21 )
  {
    UpDownGiveHeal = BattleServantData__getUpDownGiveHeal(v21, v22, 0LL);
    LODWORD(v9) = BattleUtility__FloorToInt(UpDownGiveHeal * (float)(int)v9, 0LL);
  }
  funcEnt = v33;
  digit = 1;
  data = (BattleData_o *)BattleServantData__getUpDownHeal(v22, &digit, 0LL);
  v31 = digit;
  v27 = 0;
  baseVals->fields.isShowForcedEffect = 1;
  v9 = (int)data * (__int64)(int)v9 / v31;
LABEL_21:
  ActualRecoveryHealPoint = BattleLogicFunction__GetActualRecoveryHealPoint(
                              (BattleLogicFunction_o *)data,
                              baseVals,
                              v22,
                              v9,
                              v23);
  BattleLogicFunction__SetGainHpBuff(
    this,
    v18,
    ActualRecoveryHealPoint,
    funcIndex,
    v22,
    funcEnt,
    baseVals,
    isCommandSideEffect,
    v27 & 1,
    0LL,
    v32);
  return v18;
}


BattleActionData_o *__fastcall BattleLogicFunction__functionGainHpFromTargets(
        BattleLogicFunction_o *this,
        BattleLogicFunction_ProcListInArgs_o *procArg,
        BattleActionData_o *mainAction,
        BattleLogicFunctionProcess_FunctionTargetCheck_o *funcTarget,
        const MethodInfo *method)
{
  BattleLogicFunction_ProcListInArgs_o *v6; // x24
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x1
  __int64 v12; // x1
  __int64 v13; // x1
  __int64 v14; // x1
  __int64 v15; // x1
  struct BattleLogicFunctionProcess_FunctionUnitCheck_o *funcUnit_k__BackingField; // x8
  System_Collections_Generic_List_T__o *v17; // x25
  struct System_Object_array *items; // x8
  _QWORD *v19; // x9
  __int64 size; // x10
  __int64 v21; // x10
  __int64 v22; // x10
  __int64 v23; // x10
  int logic; // w8
  unsigned int v25; // w19
  int32_t v26; // w25
  DataVals_o *v27; // x28
  const MethodInfo *v28; // x4
  BattleLogicFunction_c *klass; // x8
  BattleLogicFunction_o *v30; // x22
  __int64 v31; // x9
  int32_t *p_offset; // x10
  __int64 v33; // x0
  __int64 v34; // x1
  __int64 v35; // x26
  __int64 v36; // x8
  __int64 v37; // x9
  int *v38; // x10
  __int64 v39; // x0
  __int64 v40; // x8
  __int64 v41; // x9
  int *v42; // x10
  __int64 v43; // x0
  __int64 v44; // x0
  __int64 v45; // x1
  __int64 v46; // x22
  __int64 v47; // x1
  BattleData_o *data; // x0
  int32_t v49; // w22
  BattleServantData_o *ServantData; // x0
  __int64 v51; // x1
  BattleServantData_o *v52; // x24
  BattleLogicFunction_o *Value; // x0
  __int64 v54; // x1
  const MethodInfo *v55; // x3
  int v56; // w25
  int32_t v57; // w8
  int32_t v58; // w27
  bool isRandomDamage; // w19
  int32_t actorId; // w29
  FunctionEntity_o *funcEnt; // x20
  int32_t funcIndex; // w23
  bool IsCommandSideEffect; // w0
  BattleActionData_o *v64; // x27
  __int64 v65; // x1
  int v66; // w19
  int32_t v67; // w20
  bool v68; // w0
  const MethodInfo *v69; // x7
  BattleActionData_o *NoEffectObject; // x1
  __int64 v71; // x8
  __int64 v72; // x9
  int *v73; // x10
  __int64 v74; // x0
  int32_t v75; // w20
  FunctionEntity_o *v76; // x22
  int32_t v77; // w21
  int32_t targetId_k__BackingField; // w23
  bool v79; // w0
  const MethodInfo *overwriteLossHp; // [xsp+0h] [xbp-E0h]
  const MethodInfo *v82; // [xsp+18h] [xbp-C8h]
  DataVals_o *dataVals_k__BackingField; // [xsp+20h] [xbp-C0h]
  BattleLogicFunction_o *v85; // [xsp+38h] [xbp-A8h]
  unsigned int v86; // [xsp+40h] [xbp-A0h]
  int32_t v87; // [xsp+44h] [xbp-9Ch]
  BattleActionData_o *v88; // [xsp+48h] [xbp-98h]
  bool v89; // [xsp+54h] [xbp-8Ch]
  BattleLogicFunction_ProcListInArgs_o *v90; // [xsp+58h] [xbp-88h]
  BattleLogicFunction_o *v91; // [xsp+60h] [xbp-80h]
  System_Enum_o v92; // [xsp+68h] [xbp-78h] BYREF
  int32_t funcType; // [xsp+78h] [xbp-68h]

  v6 = procArg;
  v91 = this;
  if ( (byte_49BDBB3 & 1) == 0 )
  {
    sub_1B4CF90(&BattleActionData_TypeInfo, procArg);
    sub_1B4CF90(&System_IDisposable_TypeInfo, v7);
    sub_1B4CF90(&System_Collections_Generic_IEnumerable_BattleLogicFunctionProcess_FunctionTargetCheck__TypeInfo, v8);
    sub_1B4CF90(&System_Collections_Generic_IEnumerator_BattleLogicFunctionProcess_FunctionTargetCheck__TypeInfo, v9);
    sub_1B4CF90(&System_Collections_IEnumerator_TypeInfo, v10);
    sub_1B4CF90(&Method_System_Collections_Generic_List_FuncList_TYPE__Add__, v11);
    sub_1B4CF90(&Method_System_Collections_Generic_List_FuncList_TYPE___ctor__, v12);
    sub_1B4CF90(&System_Collections_Generic_List_FuncList_TYPE__TypeInfo, v13);
    sub_1B4CF90(&FuncList_TYPE_TypeInfo, v14);
    this = (BattleLogicFunction_o *)sub_1B4CF90(&StringLiteral_16013/*"_SAFE"*/, v15);
    byte_49BDBB3 = 1;
  }
  if ( !funcTarget )
    goto LABEL_88;
  funcUnit_k__BackingField = funcTarget->fields._funcUnit_k__BackingField;
  if ( !funcUnit_k__BackingField )
    goto LABEL_88;
  dataVals_k__BackingField = funcUnit_k__BackingField->fields._dataVals_k__BackingField;
  v88 = (BattleActionData_o *)sub_1B4D1DC(BattleActionData_TypeInfo);
  BattleActionData___ctor(v88, 0LL);
  v17 = (System_Collections_Generic_List_T__o *)sub_1B4D1DC(System_Collections_Generic_List_FuncList_TYPE__TypeInfo);
  System_Collections_Generic_List_Int32Enum____ctor(
    v17,
    (const MethodInfo_3565190 *)Method_System_Collections_Generic_List_FuncList_TYPE___ctor__);
  if ( !v17 )
    goto LABEL_88;
  items = v17->fields._items;
  v19 = Method_System_Collections_Generic_List_FuncList_TYPE__Add__;
  ++v17->fields._version;
  if ( !items )
    goto LABEL_88;
  size = v17->fields._size;
  if ( (unsigned int)size >= items->max_length )
  {
    System_Collections_Generic_List_Int32Enum___AddWithResize(
      v17,
      12,
      *(const MethodInfo_35659E4 **)(*(_QWORD *)(v19[4] + 192LL) + 112LL));
    items = v17->fields._items;
    v19 = Method_System_Collections_Generic_List_FuncList_TYPE__Add__;
    ++v17->fields._version;
    if ( !items )
      goto LABEL_88;
  }
  else
  {
    v17->fields._size = size + 1;
    *((_DWORD *)items->m_Items + size) = 12;
    ++v17->fields._version;
  }
  v21 = v17->fields._size;
  if ( (unsigned int)v21 >= items->max_length )
  {
    System_Collections_Generic_List_Int32Enum___AddWithResize(
      v17,
      25,
      *(const MethodInfo_35659E4 **)(*(_QWORD *)(v19[4] + 192LL) + 112LL));
    items = v17->fields._items;
    v19 = Method_System_Collections_Generic_List_FuncList_TYPE__Add__;
    ++v17->fields._version;
    if ( !items )
      goto LABEL_88;
  }
  else
  {
    v17->fields._size = v21 + 1;
    *((_DWORD *)items->m_Items + v21) = 25;
    ++v17->fields._version;
  }
  v22 = v17->fields._size;
  if ( (unsigned int)v22 >= items->max_length )
  {
    System_Collections_Generic_List_Int32Enum___AddWithResize(
      v17,
      50,
      *(const MethodInfo_35659E4 **)(*(_QWORD *)(v19[4] + 192LL) + 112LL));
    items = v17->fields._items;
    v19 = Method_System_Collections_Generic_List_FuncList_TYPE__Add__;
    ++v17->fields._version;
    if ( !items )
      goto LABEL_88;
  }
  else
  {
    v17->fields._size = v22 + 1;
    *((_DWORD *)items->m_Items + v22) = 50;
    ++v17->fields._version;
  }
  v23 = v17->fields._size;
  if ( (unsigned int)v23 >= items->max_length )
  {
    System_Collections_Generic_List_Int32Enum___AddWithResize(
      v17,
      51,
      *(const MethodInfo_35659E4 **)(*(_QWORD *)(v19[4] + 192LL) + 112LL));
  }
  else
  {
    v17->fields._size = v23 + 1;
    *((_DWORD *)items->m_Items + v23) = 51;
  }
  this = (BattleLogicFunction_o *)dataVals_k__BackingField;
  if ( !dataVals_k__BackingField )
    goto LABEL_88;
  this = (BattleLogicFunction_o *)DataVals__GetDependDataValsArray(
                                    dataVals_k__BackingField,
                                    (System_Collections_Generic_List_FuncList_TYPE__o *)v17,
                                    1,
                                    0LL);
  if ( !this )
    goto LABEL_88;
  logic = (int)this->fields.logic;
  if ( logic < 1 )
  {
    v26 = 0;
    goto LABEL_84;
  }
  v25 = 0;
  v26 = 0;
  v90 = v6;
  v85 = this;
  do
  {
    if ( v25 >= logic )
      sub_1B4D1F4(this, procArg);
    v27 = (DataVals_o *)*((_QWORD *)&this->fields.logictarget + (int)v25);
    if ( !v27 )
      goto LABEL_88;
    v92.klass = (System_Enum_c *)FuncList_TYPE_TypeInfo;
    v92.monitor = (void *)-1LL;
    funcType = v27->fields.funcType;
    this = (BattleLogicFunction_o *)System_Enum__ToString(&v92, 0LL);
    if ( !this )
      goto LABEL_88;
    v89 = System_String__Contains((System_String_o *)this, (System_String_o *)StringLiteral_16013/*"_SAFE"*/, 0LL);
    this = (BattleLogicFunction_o *)BattleLogicFunction__GetDependFuncTargets(v91, v6, mainAction, v27, v28);
    if ( !this )
      goto LABEL_88;
    klass = this->klass;
    v30 = this;
    v31 = *(unsigned __int16 *)(&this->klass->_2.bitflags2 + 3);
    v86 = v25;
    if ( *(_WORD *)(&this->klass->_2.bitflags2 + 3) )
    {
      p_offset = &klass->_1.interfaceOffsets->offset;
      while ( *((System_Collections_Generic_IEnumerable_BattleLogicFunctionProcess_FunctionTargetCheck__c **)p_offset - 1) != System_Collections_Generic_IEnumerable_BattleLogicFunctionProcess_FunctionTargetCheck__TypeInfo )
      {
        --v31;
        p_offset += 4;
        if ( !v31 )
          goto LABEL_31;
      }
      v33 = (__int64)(&klass->vtable._0_Equals.method + 2 * *p_offset);
    }
    else
    {
LABEL_31:
      v33 = sub_1B9D724(
              this,
              System_Collections_Generic_IEnumerable_BattleLogicFunctionProcess_FunctionTargetCheck__TypeInfo,
              0LL);
    }
    v35 = (*(__int64 (__fastcall **)(BattleLogicFunction_o *, _QWORD))v33)(v30, *(_QWORD *)(v33 + 8));
    if ( !v35 )
      sub_1B4D1EC(0LL, v34);
    v87 = v26;
    while ( 1 )
    {
      v36 = *(_QWORD *)v35;
      v37 = *(unsigned __int16 *)(*(_QWORD *)v35 + 302LL);
      if ( *(_WORD *)(*(_QWORD *)v35 + 302LL) )
      {
        v38 = (int *)(*(_QWORD *)(v36 + 176) + 8LL);
        while ( *((System_Collections_IEnumerator_c **)v38 - 1) != System_Collections_IEnumerator_TypeInfo )
        {
          --v37;
          v38 += 4;
          if ( !v37 )
            goto LABEL_39;
        }
        v39 = v36 + 16LL * *v38 + 312;
      }
      else
      {
LABEL_39:
        v39 = sub_1B9D724(v35, System_Collections_IEnumerator_TypeInfo, 0LL);
      }
      if ( ((*(__int64 (__fastcall **)(__int64, _QWORD))v39)(v35, *(_QWORD *)(v39 + 8)) & 1) == 0 )
        break;
      v40 = *(_QWORD *)v35;
      v41 = *(unsigned __int16 *)(*(_QWORD *)v35 + 302LL);
      if ( *(_WORD *)(*(_QWORD *)v35 + 302LL) )
      {
        v42 = (int *)(*(_QWORD *)(v40 + 176) + 8LL);
        while ( *((System_Collections_Generic_IEnumerator_BattleLogicFunctionProcess_FunctionTargetCheck__c **)v42 - 1) != System_Collections_Generic_IEnumerator_BattleLogicFunctionProcess_FunctionTargetCheck__TypeInfo )
        {
          --v41;
          v42 += 4;
          if ( !v41 )
            goto LABEL_46;
        }
        v43 = v40 + 16LL * *v42 + 312;
      }
      else
      {
LABEL_46:
        v43 = sub_1B9D724(
                v35,
                System_Collections_Generic_IEnumerator_BattleLogicFunctionProcess_FunctionTargetCheck__TypeInfo,
                0LL);
      }
      v44 = (*(__int64 (__fastcall **)(__int64, _QWORD))v43)(v35, *(_QWORD *)(v43 + 8));
      v46 = v44;
      if ( !v44 )
        sub_1B4D1EC(0LL, v45);
      if ( ((*(__int64 (__fastcall **)(__int64, BattleActionData_o *, _QWORD))(*(_QWORD *)v44 + 408LL))(
              v44,
              mainAction,
              *(_QWORD *)(*(_QWORD *)v44 + 416LL)) & 1) != 0 )
      {
        data = v91->fields.data;
        if ( !data )
          sub_1B4D1EC(0LL, v47);
        v49 = *(_DWORD *)(v46 + 32);
        ServantData = BattleData__getServantData(data, v49, 0LL);
        v52 = ServantData;
        if ( !ServantData )
          sub_1B4D1EC(0LL, v51);
        Value = (BattleLogicFunction_o *)((__int64 (__fastcall *)(BattleServantData_o *, Il2CppMethodPointer))ServantData->klass->vtable._13_get_resultHp.method)(
                                           ServantData,
                                           ServantData->klass->vtable._14_set_resultHp.methodPtr);
        v56 = (int)Value;
        if ( (int)Value >= 1 )
        {
          v57 = v27->fields.funcType;
          if ( v57 == 12 || v57 == 25 )
          {
            Value = (BattleLogicFunction_o *)DataVals__GetValue(v27, 0LL);
            v58 = (int)Value;
          }
          else
          {
            if ( (v57 & 0xFFFFFFFE) == 50 )
            {
              Value = (BattleLogicFunction_o *)BattleLogicFunction__getHpPerValue(Value, v27, v52, v55);
              v58 = (int)Value;
              isRandomDamage = 0;
              goto LABEL_60;
            }
            v58 = -1;
          }
          isRandomDamage = 1;
LABEL_60:
          if ( !mainAction )
            sub_1B4D1EC(Value, v54);
          if ( !v90 )
            sub_1B4D1EC(0LL, v54);
          actorId = mainAction->fields.actorId;
          funcEnt = v27->fields.funcEnt;
          funcIndex = v27->fields.funcIndex;
          IsCommandSideEffect = BattleLogicFunction_ProcListInArgs__get_IsCommandSideEffect(v90, 0LL);
          v64 = BattleLogicFunction__functionlossHp(
                  v91,
                  actorId,
                  v49,
                  funcEnt,
                  v27,
                  funcIndex,
                  v89,
                  IsCommandSideEffect,
                  v58,
                  isRandomDamage,
                  0LL,
                  v82);
          v66 = v56
              - ((__int64 (__fastcall *)(BattleServantData_o *, Il2CppMethodPointer))v52->klass->vtable._13_get_resultHp.method)(
                  v52,
                  v52->klass->vtable._14_set_resultHp.methodPtr);
          if ( v66 >= 1 )
          {
            if ( !v88 )
              sub_1B4D1EC(0LL, v65);
            BattleActionData__addAction(v88, v64, 0LL);
            v87 += v66;
          }
          else
          {
            v67 = v27->fields.funcIndex;
            v68 = BattleLogicFunction_ProcListInArgs__get_IsCommandSideEffect(v90, 0LL);
            NoEffectObject = BattleLogicFunction__getNoEffectObject(v91, v49, v67, v27, v68, 0LL, 0LL, v69);
            if ( !v88 )
              sub_1B4D1EC(0LL, NoEffectObject);
            BattleActionData__addAction(v88, NoEffectObject, 0LL);
          }
        }
      }
    }
    v26 = v87;
    v71 = *(_QWORD *)v35;
    v72 = *(unsigned __int16 *)(*(_QWORD *)v35 + 302LL);
    if ( *(_WORD *)(*(_QWORD *)v35 + 302LL) )
    {
      v73 = (int *)(*(_QWORD *)(v71 + 176) + 8LL);
      while ( *((System_IDisposable_c **)v73 - 1) != System_IDisposable_TypeInfo )
      {
        --v72;
        v73 += 4;
        if ( !v72 )
          goto LABEL_71;
      }
      v74 = v71 + 16LL * *v73 + 312;
    }
    else
    {
LABEL_71:
      v74 = sub_1B9D724(v35, System_IDisposable_TypeInfo, 0LL);
    }
    (*(void (__fastcall **)(__int64, _QWORD))v74)(v35, *(_QWORD *)(v74 + 8));
    v6 = v90;
    this = v85;
    logic = (int)v85->fields.logic;
    v25 = v86 + 1;
  }
  while ( (int)(v86 + 1) < logic );
LABEL_84:
  if ( !mainAction
    || !v6
    || (v75 = dataVals_k__BackingField->fields.funcIndex,
        v76 = dataVals_k__BackingField->fields.funcEnt,
        v77 = mainAction->fields.actorId,
        targetId_k__BackingField = funcTarget->fields._targetId_k__BackingField,
        v79 = BattleLogicFunction_ProcListInArgs__get_IsCommandSideEffect(v6, 0LL),
        procArg = (BattleLogicFunction_ProcListInArgs_o *)BattleLogicFunction__functionGainHp(
                                                            v91,
                                                            v77,
                                                            targetId_k__BackingField,
                                                            v76,
                                                            dataVals_k__BackingField,
                                                            v75,
                                                            v79,
                                                            v26,
                                                            overwriteLossHp),
        (this = (BattleLogicFunction_o *)v88) == 0LL) )
  {
LABEL_88:
    sub_1B4D1EC(this, procArg);
  }
  BattleActionData__addAction(v88, (BattleActionData_o *)procArg, 0LL);
  return v88;
}


// local variable allocation has failed, the output may be wrong!
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
  __int64 v15; // x1
  BattleActionData_o *v16; // x24
  __int64 v17; // x1
  BattleData_o *data; // x0
  BattleServantData_o *v19; // x28
  BattleServantData_o *v20; // x25
  int32_t Value; // w27
  const MethodInfo *v22; // x4
  char v23; // w20
  int v24; // w3
  BattleBuffData_o *buffData; // x29
  BattleBuffData_CheckIndividualitiesData_o *v26; // x20
  struct BattleData_o *v27; // x8
  int32_t ActualRecoveryHealPoint; // w0
  float UpDownGiveHeal; // s0
  int32_t UpDownHeal; // w0
  __int64 v32; // x27
  const MethodInfo *v33; // [xsp+10h] [xbp-80h]
  FunctionEntity_o *v34; // [xsp+20h] [xbp-70h]
  int32_t digit; // [xsp+2Ch] [xbp-64h] BYREF

  if ( (byte_49BDB9A & 1) == 0 )
  {
    sub_1B4CF90(&BattleActionData_TypeInfo, *(_QWORD *)&playerId);
    sub_1B4CF90(&BattleBuffData_CheckIndividualitiesData_TypeInfo, v15);
    byte_49BDB9A = 1;
  }
  digit = 0;
  v16 = (BattleActionData_o *)sub_1B4D1DC(BattleActionData_TypeInfo);
  BattleActionData___ctor(v16, 0LL);
  data = this->fields.data;
  if ( !data )
    goto LABEL_24;
  data = (BattleData_o *)BattleData__getServantData(data, playerId, 0LL);
  if ( !this->fields.data )
    goto LABEL_24;
  v19 = (BattleServantData_o *)data;
  data = (BattleData_o *)BattleData__getServantData(this->fields.data, targetId, 0LL);
  if ( !baseVals )
    goto LABEL_24;
  v20 = (BattleServantData_o *)data;
  baseVals->fields.isShowForcedEffect = 0;
  Value = DataVals__GetValue(baseVals, 0LL);
  data = (BattleData_o *)DataVals__isUnaffected(baseVals, 0LL);
  if ( !v20 )
    goto LABEL_24;
  if ( ((unsigned __int8)data & 1) != 0 )
  {
    data = (BattleData_o *)BattleServantData__getMaxHp(v20, 0LL);
    v23 = 0;
    v24 = (int)data * Value / 1000;
    goto LABEL_19;
  }
  if ( ((__int64 (__fastcall *)(BattleServantData_o *, Il2CppMethodPointer))v20->klass->vtable._13_get_resultHp.method)(
         v20,
         v20->klass->vtable._14_set_resultHp.methodPtr) <= 0 )
  {
    data = (BattleData_o *)BattleServantData__isShiftableServant(v20, 0LL);
    if ( ((unsigned __int8)data & 1) != 0 )
      goto LABEL_18;
    v27 = this->fields.data;
    if ( v27 )
    {
      data = (BattleData_o *)v27->fields.battleEvent;
      if ( data )
      {
        data = (BattleData_o *)(*(__int64 (__fastcall **)(BattleData_o *, BattleServantData_o *, _QWORD))&data->klass[1]._2.initializationExceptionGCHandle)(
                                 data,
                                 v20,
                                 *(_QWORD *)&data->klass[1]._2.cctor_finished);
        if ( ((unsigned __int8)data & 1) == 0 )
        {
          data = (BattleData_o *)BattleServantData__isGuts(v20, 0LL);
          v24 = 0;
          v23 = (unsigned __int8)data ^ 1;
          goto LABEL_19;
        }
        goto LABEL_18;
      }
    }
    goto LABEL_24;
  }
  data = (BattleData_o *)BattleServantData__isShiftReady(v20, 0LL);
  if ( ((unsigned __int8)data & 1) != 0 )
  {
LABEL_18:
    v24 = 0;
    v23 = 0;
    goto LABEL_19;
  }
  v34 = funcEnt;
  buffData = v20->fields.buffData;
  v26 = (BattleBuffData_CheckIndividualitiesData_o *)sub_1B4D1DC(BattleBuffData_CheckIndividualitiesData_TypeInfo);
  BattleBuffData_CheckIndividualitiesData___ctor_43313456(v26, v20, 0LL, 0LL, 0LL, 0LL, 0LL, 0LL);
  if ( !buffData )
LABEL_24:
    sub_1B4D1EC(data, v17);
  if ( BattleBuffData__isTurnBuff(buffData, 42, v26, 1, 0LL) )
  {
    data = (BattleData_o *)DataVals__SetInvalidCauseByAnyBuff(baseVals, targetId, 0LL);
    funcEnt = v34;
    goto LABEL_18;
  }
  if ( v19 )
  {
    UpDownGiveHeal = BattleServantData__getUpDownGiveHeal(v19, v20, 0LL);
    Value = BattleUtility__FloorToInt(UpDownGiveHeal * (float)Value, 0LL);
  }
  funcEnt = v34;
  digit = 1;
  UpDownHeal = BattleServantData__getUpDownHeal(v20, &digit, 0LL);
  v32 = UpDownHeal * (__int64)Value / digit;
  data = (BattleData_o *)BattleServantData__getMaxHp(v20, 0LL);
  v23 = 0;
  v24 = (int)v32 * (int)data / 1000;
  baseVals->fields.isShowForcedEffect = 1;
LABEL_19:
  ActualRecoveryHealPoint = BattleLogicFunction__GetActualRecoveryHealPoint(
                              (BattleLogicFunction_o *)data,
                              baseVals,
                              v20,
                              v24,
                              v22);
  BattleLogicFunction__SetGainHpBuff(
    this,
    v16,
    ActualRecoveryHealPoint,
    funcIndex,
    v20,
    funcEnt,
    baseVals,
    isCommandSideEffect,
    v23 & 1,
    0LL,
    v33);
  return v16;
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

  if ( (byte_49BDBB2 & 1) == 0 )
  {
    sub_1B4CF90(&BattleActionData_TypeInfo, procArg);
    byte_49BDBB2 = 1;
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
  v14 = (BattleActionData_o *)sub_1B4D1DC(BattleActionData_TypeInfo);
  BattleActionData___ctor(v14, 0LL);
  if ( !baseVals )
LABEL_18:
    sub_1B4D1EC(data, procArg);
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
  __int64 v9; // x1
  __int64 v10; // x1
  struct BattleLogicFunctionProcess_FunctionUnitCheck_o *funcUnit_k__BackingField; // x8
  DataVals_o *dataVals_k__BackingField; // x24
  BattleActionData_o *v13; // x23
  NpTurnToPointConvert_o *v14; // x26
  NpGaugeAbsorbResult_o *v15; // x25
  const MethodInfo *v16; // x4
  const MethodInfo *v17; // x4
  BattleActionData_o *v18; // x0
  int32_t v19; // w2
  const MethodInfo *v20; // x6
  float Point_k__BackingField; // s0
  int32_t v22; // w5
  BattleActionData_o *v23; // x0

  v8 = this;
  if ( (byte_49BDBB0 & 1) == 0 )
  {
    sub_1B4CF90(&BattleActionData_TypeInfo, procArg);
    sub_1B4CF90(&NpGaugeAbsorbResult_TypeInfo, v9);
    this = (BattleLogicFunction_o *)sub_1B4CF90(&NpTurnToPointConvert_TypeInfo, v10);
    byte_49BDBB0 = 1;
  }
  if ( !funcTarget )
    goto LABEL_12;
  funcUnit_k__BackingField = funcTarget->fields._funcUnit_k__BackingField;
  if ( !funcUnit_k__BackingField )
    goto LABEL_12;
  dataVals_k__BackingField = funcUnit_k__BackingField->fields._dataVals_k__BackingField;
  v13 = (BattleActionData_o *)sub_1B4D1DC(BattleActionData_TypeInfo);
  BattleActionData___ctor(v13, 0LL);
  v14 = (NpTurnToPointConvert_o *)sub_1B4D1DC(NpTurnToPointConvert_TypeInfo);
  NpTurnToPointConvert___ctor(v14, 0LL);
  v15 = (NpGaugeAbsorbResult_o *)sub_1B4D1DC(NpGaugeAbsorbResult_TypeInfo);
  NpGaugeAbsorbResult___ctor(v15, (BaseNpGaugeConvert_o *)v14, 0LL);
  this = (BattleLogicFunction_o *)BattleLogicFunction__AbsorbNpPoint(v8, mainAction, funcTarget, v15, v16);
  if ( !v13
    || (BattleActionData__addAction(v13, (BattleActionData_o *)this, 0LL),
        v18 = BattleLogicFunction__AbsorbNpTurn(v8, mainAction, funcTarget, v15, v17),
        BattleActionData__addAction(v13, v18, 0LL),
        !mainAction)
    || !v15 )
  {
LABEL_12:
    sub_1B4D1EC(this, procArg);
  }
  Point_k__BackingField = v15->fields._Point_k__BackingField;
  if ( Point_k__BackingField == INFINITY )
    v22 = 0x80000000;
  else
    v22 = (int)Point_k__BackingField;
  v23 = BattleLogicFunction__functionGainNp(
          v8,
          procArg,
          v19,
          funcTarget->fields._targetId_k__BackingField,
          dataVals_k__BackingField,
          v22,
          v20);
  BattleActionData__addAction(v13, v23, 0LL);
  return v13;
}


// local variable allocation has failed, the output may be wrong!
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

  if ( (byte_49BDB9E & 1) == 0 )
  {
    sub_1B4CF90(&BattleActionData_TypeInfo, *(_QWORD *)&targetId);
    byte_49BDB9E = 1;
  }
  v15 = (BattleActionData_o *)sub_1B4D1DC(BattleActionData_TypeInfo);
  BattleActionData___ctor(v15, 0LL);
  data = this->fields.data;
  if ( !data )
    goto LABEL_21;
  data = (BattleData_o *)BattleData__getServantData(data, targetId, 0LL);
  if ( !data )
    goto LABEL_21;
  v18 = (BattleServantData_o *)data;
  if ( HIBYTE(data->fields.fixedCommands) )
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
        sub_1B4D1EC(data, v16);
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


// local variable allocation has failed, the output may be wrong!
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
  BattleActionData_o *v16; // x23
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

  if ( (byte_49BDB9D & 1) == 0 )
  {
    sub_1B4CF90(&BattleActionData_TypeInfo, *(_QWORD *)&playerId);
    byte_49BDB9D = 1;
  }
  v16 = (BattleActionData_o *)sub_1B4D1DC(BattleActionData_TypeInfo);
  BattleActionData___ctor(v16, 0LL);
  data = this->fields.data;
  if ( !data )
    goto LABEL_16;
  data = (BattleData_o *)BattleData__getServantData(data, targetId, 0LL);
  if ( !this->fields.data )
    goto LABEL_16;
  v19 = (BattleServantData_o *)data;
  data = (BattleData_o *)BattleData__getServantData(this->fields.data, playerId, 0LL);
  if ( !v19 )
    goto LABEL_16;
  v20 = (BattleServantData_o *)data;
  v21 = ((__int64 (__fastcall *)(BattleServantData_o *, Il2CppMethodPointer))v19->klass->vtable._9_get_hp.method)(
          v19,
          v19->klass->vtable._10_set_hp.methodPtr);
  ((void (__fastcall *)(BattleServantData_o *, _QWORD, Il2CppMethodPointer))v19->klass->vtable._12_set_reducedhp.method)(
    v19,
    v21,
    v19->klass->vtable._13_get_resultHp.methodPtr);
  data = (BattleData_o *)this->fields.logic;
  if ( !data )
    goto LABEL_16;
  data = (BattleData_o *)BattleLogic__getWave((BattleLogic_o *)data, 0LL);
  if ( !this->fields.data )
    goto LABEL_16;
  v22 = (int)data;
  IsOpponentPTUniqueID = BattleData__IsOpponentPTUniqueID(this->fields.data, targetId, playerId, 0LL);
  BattleServantData__setActionHistory(v19, playerId, 4, v22, IsOpponentPTUniqueID, 0LL);
  if ( !funcUnit )
    goto LABEL_16;
  v24 = BattleLogicFunctionProcess_FunctionUnitCheck__get_FuncIndividuality(funcUnit, 0LL);
  v25 = ((__int64 (__fastcall *)(BattleServantData_o *, Il2CppMethodPointer))v19->klass->vtable._13_get_resultHp.method)(
          v19,
          v19->klass->vtable._14_set_resultHp.methodPtr);
  BattleServantData__ResultDamage(v19, v25, v20, 0LL, v24, 0, 0LL);
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
                           0LL,
                           v26);
  if ( !data )
    goto LABEL_16;
  v17 = data;
  HIDWORD(data->fields.m_CancellationTokenSource) = 1;
  if ( playerId == targetId || isNoAccumulation )
    BYTE1(data->fields.battle_info) = 1;
  if ( !v16 )
LABEL_16:
    sub_1B4D1EC(data, v17);
  BattleActionData__setBuffData(v16, (BattleActionData_BuffData_o *)data, baseVals, 0LL);
  return v16;
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
  __int64 v12; // x1
  BattleData_o *data; // x0
  BattleServantData_o *v14; // x22
  BattleActionData_o *v15; // x24
  int32_t np; // w24
  int32_t Value; // w0
  int32_t v18; // w0
  int32_t v19; // w24
  int32_t v20; // w23
  BattleDataDefine_c *v21; // x0
  float PERCENTAGE_DENOMINATOR; // s0
  int v23; // w8
  int v24; // w24
  int32_t funcIndex; // w21
  int32_t uniqueId; // w22
  FunctionEntity_o *funcEnt; // x25
  _BOOL8 IsCommandSideEffect; // x0
  const MethodInfo *v29; // x6
  BattleActionData_BuffData_o *v30; // x20

  if ( (byte_49BDBB1 & 1) == 0 )
  {
    sub_1B4CF90(&BattleActionData_TypeInfo, procArg);
    sub_1B4CF90(&BattleDataDefine_TypeInfo, v12);
    byte_49BDBB1 = 1;
  }
  *diffNp = 0;
  data = this->fields.data;
  if ( !data )
    goto LABEL_20;
  data = (BattleData_o *)BattleData__getServantData(data, targetId, 0LL);
  if ( !data )
    goto LABEL_20;
  v14 = (BattleServantData_o *)data;
  v15 = 0LL;
  if ( BattleServantData__checkPlayer((BattleServantData_o *)data, 0LL) )
  {
    data = (BattleData_o *)BattleServantData__isLogicResultAlive(v14, 0LL);
    if ( ((unsigned __int8)data & 1) != 0
      || (data = (BattleData_o *)BattleServantData__isGuts(v14, 0LL), v15 = 0LL, ((unsigned __int8)data & 1) != 0) )
    {
      if ( baseVals )
      {
        np = v14->fields.np;
        Value = DataVals__GetValue(baseVals, 0LL);
        v18 = BattleServantData__addNp(v14, -Value, 0, 0LL);
        v19 = np - v18;
        *diffNp = v19;
        v20 = v18;
        v21 = BattleDataDefine_TypeInfo;
        if ( !BattleDataDefine_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(BattleDataDefine_TypeInfo);
          v21 = BattleDataDefine_TypeInfo;
        }
        PERCENTAGE_DENOMINATOR = v21->static_fields->PERCENTAGE_DENOMINATOR;
        v23 = (int)PERCENTAGE_DENOMINATOR;
        if ( PERCENTAGE_DENOMINATOR == INFINITY )
          v23 = 0x80000000;
        v24 = v19 % v23;
        if ( v24 >= 1 )
        {
          BattleServantData__addNp(v14, v24, 0, 0LL);
          *diffNp -= v24;
        }
        v15 = (BattleActionData_o *)sub_1B4D1DC(BattleActionData_TypeInfo);
        BattleActionData___ctor(v15, 0LL);
        if ( procArg )
        {
          funcIndex = baseVals->fields.funcIndex;
          uniqueId = v14->fields.uniqueId;
          funcEnt = baseVals->fields.funcEnt;
          IsCommandSideEffect = BattleLogicFunction_ProcListInArgs__get_IsCommandSideEffect(procArg, 0LL);
          data = (BattleData_o *)BattleLogicFunction__getFunctionObject(
                                   (BattleLogicFunction_o *)IsCommandSideEffect,
                                   funcEnt,
                                   uniqueId,
                                   funcIndex,
                                   IsCommandSideEffect,
                                   0LL,
                                   v29);
          if ( data )
          {
            v30 = (BattleActionData_BuffData_o *)data;
            HIDWORD(data->fields.m_CancellationTokenSource) = 3;
            BattleActionData_BuffData__setSaveNp((BattleActionData_BuffData_o *)data, v20, 0LL);
            if ( v15 )
            {
              BattleActionData__setBuffData(v15, v30, baseVals, 0LL);
              return v15;
            }
          }
        }
      }
LABEL_20:
      sub_1B4D1EC(data, procArg);
    }
  }
  return v15;
}


void __fastcall BattleLogicFunction__functionMovePosition(
        BattleLogicFunction_o *this,
        BattleActionData_o *actionData,
        BattleServantData_o *targetData,
        const MethodInfo *method)
{
  long double v4; // q0
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x1
  __int64 v12; // x1
  __int64 v13; // x1
  __int64 v14; // x1
  __int64 v15; // x1
  __int64 v16; // x0
  __int64 v17; // x0
  DataManager_o *MasterData_object; // x0
  SkillLvMaster_o *v19; // x22
  struct BattleSkillInfoData_o *skillInfo; // x8
  SkillLvEntity_o *v21; // x22
  int32_t MovePositionUp; // w23
  int32_t MovePositionDown; // w0
  int v24; // w24
  int v25; // w25
  DataManager_c *klass; // x8
  const char *namespaze; // x9
  int i; // w10
  int v29; // w11
  int v30; // w10
  BattleServantData_o *v31; // x23
  struct BattleData_o *data; // x8
  __int64 *v33; // x8
  __int64 v34; // x21
  __int64 v35; // x22
  int32_t v36; // w2
  const MethodInfo *v37; // x3

  if ( (byte_49BDBB7 & 1) == 0 )
  {
    sub_1B4CF90(&BattleActionData_TypeInfo, actionData);
    sub_1B4CF90(&Method_DataManager_GetMasterData_SkillLvMaster___, v8);
    sub_1B4CF90(&Method_SingletonMonoBehaviour_DataManager__getInstance__, v9);
    sub_1B4CF90(&StringLiteral_6326/*"FOCUS_UP_EX"*/, v10);
    sub_1B4CF90(&StringLiteral_6324/*"FOCUS_UNDER_EX"*/, v11);
    sub_1B4CF90(&StringLiteral_6322/*"FOCUS_CENTER_EX"*/, v12);
    sub_1B4CF90(&StringLiteral_6323/*"FOCUS_UNDER"*/, v13);
    sub_1B4CF90(&StringLiteral_6321/*"FOCUS_CENTER"*/, v14);
    sub_1B4CF90(&StringLiteral_6325/*"FOCUS_UP"*/, v15);
    byte_49BDBB7 = 1;
  }
  v16 = *((_QWORD *)Method_SingletonMonoBehaviour_DataManager__getInstance__ + 4);
  if ( (*(_BYTE *)(v16 + 309) & 1) == 0 )
    v16 = sub_1B9D620(v4);
  v17 = *(_QWORD *)(*(_QWORD *)(v16 + 192) + 16LL);
  if ( (*(_BYTE *)(v17 + 309) & 1) == 0 )
    v17 = sub_1B9D620(v4);
  MasterData_object = **(DataManager_o ***)(v17 + 184);
  if ( !MasterData_object )
    goto LABEL_23;
  MasterData_object = (DataManager_o *)DataManager__GetMasterData_object_(
                                         MasterData_object,
                                         (const MethodInfo_2F01B24 *)Method_DataManager_GetMasterData_SkillLvMaster___);
  if ( !actionData )
    goto LABEL_23;
  v19 = (SkillLvMaster_o *)MasterData_object;
  MasterData_object = (DataManager_o *)actionData->fields.skillInfo;
  if ( !MasterData_object )
    goto LABEL_23;
  MasterData_object = (DataManager_o *)((__int64 (__fastcall *)(DataManager_o *, void *))MasterData_object->klass[1]._1.namespaze)(
                                         MasterData_object,
                                         MasterData_object->klass[1]._1.byval_arg.data);
  skillInfo = actionData->fields.skillInfo;
  if ( !skillInfo )
    goto LABEL_23;
  if ( !v19 )
    goto LABEL_23;
  MasterData_object = (DataManager_o *)SkillLvMaster__GetEntity(
                                         v19,
                                         (int32_t)MasterData_object,
                                         skillInfo->fields.skilllv,
                                         0LL);
  if ( !MasterData_object )
    goto LABEL_23;
  v21 = (SkillLvEntity_o *)MasterData_object;
  MovePositionUp = SkillLvEntity__getMovePositionUp((SkillLvEntity_o *)MasterData_object, 0LL);
  MovePositionDown = SkillLvEntity__getMovePositionDown(v21, 0LL);
  if ( (MovePositionUp & MovePositionDown) != -1 )
  {
    v24 = MovePositionDown;
    MasterData_object = (DataManager_o *)this->fields.data;
    if ( !MasterData_object )
      goto LABEL_23;
    MasterData_object = (DataManager_o *)BattleData__getTargetEnemyId((BattleData_o *)MasterData_object, 0, 0LL);
    if ( !this->fields.data )
      goto LABEL_23;
    v25 = (int)MasterData_object;
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
      if ( v25 == *((_DWORD *)&klass->_1.byval_arg.data + i) )
        break;
    }
    v29 = MovePositionUp > 0 ? -MovePositionUp : v24;
    v30 = v29 + i;
    if ( v30 >= 0 && v30 < (int)namespaze )
    {
      if ( v30 >= (unsigned int)namespaze )
LABEL_50:
        sub_1B4D1F4(MasterData_object, actionData);
      MasterData_object = (DataManager_o *)BattleData__getServantData(
                                             (BattleData_o *)MasterData_object,
                                             *((_DWORD *)&klass->_1.byval_arg.data + (unsigned int)v30),
                                             0LL);
      if ( !MasterData_object )
        goto LABEL_23;
      v31 = (BattleServantData_o *)MasterData_object;
      MasterData_object = (DataManager_o *)BattleServantData__isAlive((BattleServantData_o *)MasterData_object, 0, 0LL);
      if ( ((unsigned __int8)MasterData_object & 1) != 0 )
      {
        data = this->fields.data;
        if ( !data )
          goto LABEL_23;
        data->fields.globaltargetId = v31->fields.uniqueId;
        if ( BattleServantData__isMultiTargetUp(v31, 0LL) )
        {
          if ( SkillLvEntity__IsAress(v21, 0LL) )
            v33 = &StringLiteral_6326/*"FOCUS_UP_EX"*/;
          else
            v33 = &StringLiteral_6325/*"FOCUS_UP"*/;
        }
        else if ( BattleServantData__isMultiTargetCore(v31, 0LL) )
        {
          if ( SkillLvEntity__IsAress(v21, 0LL) )
            v33 = &StringLiteral_6322/*"FOCUS_CENTER_EX"*/;
          else
            v33 = &StringLiteral_6321/*"FOCUS_CENTER"*/;
        }
        else
        {
          v34 = 0LL;
          if ( !BattleServantData__isMultiTargetUnder(v31, 0LL) )
          {
LABEL_47:
            v35 = sub_1B4D1DC(BattleActionData_TypeInfo);
            BattleActionData___ctor((BattleActionData_o *)v35, 0LL);
            if ( targetData && v35 )
            {
              *(_DWORD *)(v35 + 32) = targetData->fields.uniqueId;
              *(_DWORD *)(v35 + 36) = actionData->fields.targetId;
              BattleActionData__setStateField((BattleActionData_o *)v35, 0LL);
              *(_QWORD *)(v35 + 64) = v34;
              sub_1B4CF34((CGThumbnailListItem_o *)(v35 + 64), v34, v36, v37);
              BattleActionData__AddAfterActionData(actionData, (BattleActionData_o *)v35, 0, 0LL);
              return;
            }
LABEL_23:
            sub_1B4D1EC(MasterData_object, actionData);
          }
          if ( SkillLvEntity__IsAress(v21, 0LL) )
            v33 = &StringLiteral_6324/*"FOCUS_UNDER_EX"*/;
          else
            v33 = &StringLiteral_6323/*"FOCUS_UNDER"*/;
        }
        v34 = *v33;
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
  __int64 v25; // x20
  RemovedBuffInfoGroup_o *StealBuffInfoGroup; // x0
  BattleActionData_o *NoEffectObject; // x1
  const MethodInfo *v28; // x4
  struct BattleLogicFunctionProcess_FunctionUnitCheck_o *funcUnit_k__BackingField; // x8
  DataVals_o *dataVals_k__BackingField; // x19
  int32_t targetId_k__BackingField; // w23
  RemovedBuffInfoGroup_o *v32; // x24
  BattleServantData_o *ServantData; // x26
  const MethodInfo *v34; // x4
  System_Collections_Generic_IEnumerable_BattleBuffData_BuffData__o *v35; // x25
  System_Func_object__bool__o *v36; // x27
  System_Collections_Generic_IEnumerable_T__o *v37; // x25
  System_Collections_Generic_HashSet_T__o *v38; // x27
  int32_t v39; // w2
  const MethodInfo *v40; // x3
  System_Collections_Generic_IEnumerable_BattleBuffData_BuffData__o *v41; // x24
  System_Func_object__bool__o *v42; // x25
  System_Collections_Generic_IEnumerable_TSource__o *v43; // x0
  RemovedBuffInfoGroup_o *v44; // x25
  System_Collections_Generic_List_int__o *v45; // x28
  int klass; // w8
  BattleLogicFunction_o *v47; // x21
  DataMasterBase_TMaster__TEntity__PKType__o *v48; // x29
  __int64 v49; // x22
  __int64 v50; // x27
  BattleBuffData_ChangeBgmData_o *v51; // x24
  BattleBuffData_BuffData_o *v52; // x20
  const MethodInfo *v53; // x2
  struct BattleBuffData_ChangeBgmData_o *changeBgmData; // x8
  const MethodInfo *v55; // x3
  int32_t DispTurn; // w0
  bool isProgressSelfTurn; // w8
  struct System_Int32_array *items; // x8
  _QWORD *v59; // x9
  __int64 size; // x10
  BattleActionData_BuffData_o *v61; // x27
  struct FunctionEntity_o *funcEnt; // x21
  bool v63; // w0
  System_Int32_array *v64; // x0
  int32_t v65; // w2
  const MethodInfo *v66; // x3
  int v67; // w22
  int32_t funcIndex; // w20
  bool IsCommandSideEffect; // w0
  const MethodInfo *v70; // x7
  struct BattleData_o *data; // x8
  BattleFieldEnvironmentData_o *FieldEnvData_k__BackingField; // x19
  BattleLogicFunction___c_c *v73; // x0
  System_Func_object__bool__o *_9__112_2; // x20
  Il2CppObject *v75; // x21
  CGThumbnailListItem_o *static_fields; // x0
  int32_t v77; // w2
  const MethodInfo *v78; // x3
  System_Collections_Generic_IEnumerable_TSource__o *v79; // x0
  BattleActionEffect_ChangeBgmBuff_o *v80; // x19
  BattleLogicFunctionProcess_FunctionTargetCheck_o *v81; // [xsp+0h] [xbp-90h]
  BattleLogicFunction_ProcListInArgs_o *v82; // [xsp+8h] [xbp-88h]
  Il2CppObject *entity; // [xsp+28h] [xbp-68h] BYREF

  if ( (byte_49BDBBD & 1) == 0 )
  {
    sub_1B4CF90(&BattleActionData_BuffData_TypeInfo, procArg);
    sub_1B4CF90(&BattleActionEffect_ChangeBgmBuff_TypeInfo, v7);
    sub_1B4CF90(&Method_DataManager_GetMasterData_BuffMaster___, v8);
    sub_1B4CF90(&Method_DataMasterBase_BuffMaster__BuffEntity__int__TryGetEntity__, v9);
    sub_1B4CF90(&Method_System_Linq_Enumerable_ToArray_BattleBuffData_BuffData___, v10);
    sub_1B4CF90(&Method_System_Linq_Enumerable_Where_BattleBuffData_BuffData___, v11);
    sub_1B4CF90(&System_Func_BattleBuffData_BuffData__bool__TypeInfo, v12);
    sub_1B4CF90(&Method_System_Collections_Generic_HashSet_BattleBuffData_BuffData___ctor___75424136, v13);
    sub_1B4CF90(&System_Collections_Generic_HashSet_BattleBuffData_BuffData__TypeInfo, v14);
    sub_1B4CF90(&Method_System_Collections_Generic_List_int__Add__, v15);
    sub_1B4CF90(&Method_System_Collections_Generic_List_int__ToArray__, v16);
    sub_1B4CF90(&Method_System_Collections_Generic_List_int___ctor__, v17);
    sub_1B4CF90(&System_Collections_Generic_List_int__TypeInfo, v18);
    sub_1B4CF90(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v19);
    sub_1B4CF90(&Method_BattleLogicFunction___c__functionMoveState_b__112_2__, v20);
    sub_1B4CF90(&Method_BattleLogicFunction___c__DisplayClass112_0__functionMoveState_b__0__, v21);
    sub_1B4CF90(&Method_BattleLogicFunction___c__DisplayClass112_0__functionMoveState_b__1__, v22);
    sub_1B4CF90(&BattleLogicFunction___c__DisplayClass112_0_TypeInfo, v23);
    sub_1B4CF90(&BattleLogicFunction___c_TypeInfo, v24);
    byte_49BDBBD = 1;
  }
  entity = 0LL;
  v25 = sub_1B4D1DC(BattleLogicFunction___c__DisplayClass112_0_TypeInfo);
  BattleLogicFunction___c__DisplayClass112_0___ctor((BattleLogicFunction___c__DisplayClass112_0_o *)v25, 0LL);
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
                         v28);
  if ( !this->fields.data )
    goto LABEL_64;
  v32 = StealBuffInfoGroup;
  ServantData = BattleData__getServantData(this->fields.data, targetId_k__BackingField, 0LL);
  BattleLogicFunction__ResetFamilyLinkageIdToStolenFamilyBuffs(
    (BattleLogicFunction_o *)ServantData,
    procArg,
    ServantData,
    v32,
    v34);
  if ( !v25 )
    goto LABEL_64;
  v81 = funcTarget;
  v82 = procArg;
  *(_DWORD *)(v25 + 16) = 0x1000000;
  if ( !v32 )
    goto LABEL_64;
  v35 = RemovedBuffInfoGroup__RemovedLinkageBuffEnumerable(v32, 0LL);
  v36 = (System_Func_object__bool__o *)sub_1B4D1DC(System_Func_BattleBuffData_BuffData__bool__TypeInfo);
  System_Func_object__bool____ctor(
    v36,
    (Il2CppObject *)v25,
    Method_BattleLogicFunction___c__DisplayClass112_0__functionMoveState_b__0__,
    0LL);
  v37 = (System_Collections_Generic_IEnumerable_T__o *)System_Linq_Enumerable__Where_object_(
                                                         (System_Collections_Generic_IEnumerable_TSource__o *)v35,
                                                         (System_Func_TSource__bool__o *)v36,
                                                         (const MethodInfo_2F42638 *)Method_System_Linq_Enumerable_Where_BattleBuffData_BuffData___);
  v38 = (System_Collections_Generic_HashSet_T__o *)sub_1B4D1DC(System_Collections_Generic_HashSet_BattleBuffData_BuffData__TypeInfo);
  System_Collections_Generic_HashSet_object____ctor_54806768(
    v38,
    v37,
    (const MethodInfo_34448F0 *)Method_System_Collections_Generic_HashSet_BattleBuffData_BuffData___ctor___75424136);
  *(_QWORD *)(v25 + 24) = v38;
  sub_1B4CF34((CGThumbnailListItem_o *)(v25 + 24), (int32_t)v38, v39, v40);
  v41 = RemovedBuffInfoGroup__RemovedAllBuffEnumerable(v32, 0LL);
  v42 = (System_Func_object__bool__o *)sub_1B4D1DC(System_Func_BattleBuffData_BuffData__bool__TypeInfo);
  System_Func_object__bool____ctor(
    v42,
    (Il2CppObject *)v25,
    Method_BattleLogicFunction___c__DisplayClass112_0__functionMoveState_b__1__,
    0LL);
  v43 = System_Linq_Enumerable__Where_object_(
          (System_Collections_Generic_IEnumerable_TSource__o *)v41,
          (System_Func_TSource__bool__o *)v42,
          (const MethodInfo_2F42638 *)Method_System_Linq_Enumerable_Where_BattleBuffData_BuffData___);
  StealBuffInfoGroup = (RemovedBuffInfoGroup_o *)System_Linq_Enumerable__ToArray_object_(
                                                   v43,
                                                   (const MethodInfo_2F3C3E4 *)Method_System_Linq_Enumerable_ToArray_BattleBuffData_BuffData___);
  if ( !StealBuffInfoGroup )
    goto LABEL_64;
  v44 = StealBuffInfoGroup;
  if ( !StealBuffInfoGroup[1].klass )
  {
    if ( dataVals_k__BackingField )
    {
      StealBuffInfoGroup = (RemovedBuffInfoGroup_o *)v82;
      if ( v82 )
      {
        funcIndex = dataVals_k__BackingField->fields.funcIndex;
        IsCommandSideEffect = BattleLogicFunction_ProcListInArgs__get_IsCommandSideEffect(v82, 0LL);
        NoEffectObject = BattleLogicFunction__getNoEffectObject(
                           this,
                           targetId_k__BackingField,
                           funcIndex,
                           dataVals_k__BackingField,
                           IsCommandSideEffect,
                           0LL,
                           0LL,
                           v70);
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
  v45 = (System_Collections_Generic_List_int__o *)sub_1B4D1DC(System_Collections_Generic_List_int__TypeInfo);
  System_Collections_Generic_List_int____ctor(
    v45,
    (const MethodInfo_3562964 *)Method_System_Collections_Generic_List_int___ctor__);
  StealBuffInfoGroup = (RemovedBuffInfoGroup_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37B4410 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !StealBuffInfoGroup )
    goto LABEL_64;
  StealBuffInfoGroup = (RemovedBuffInfoGroup_o *)DataManager__GetMasterData_object_(
                                                   (DataManager_o *)StealBuffInfoGroup,
                                                   (const MethodInfo_2F01B24 *)Method_DataManager_GetMasterData_BuffMaster___);
  klass = (int)v44[1].klass;
  v47 = this;
  if ( klass < 1 )
  {
    v50 = 0LL;
LABEL_50:
    v67 = 1;
    goto LABEL_51;
  }
  v48 = (DataMasterBase_TMaster__TEntity__PKType__o *)StealBuffInfoGroup;
  v49 = 0LL;
  v50 = 0LL;
  v51 = 0LL;
  do
  {
    if ( (unsigned int)v49 >= klass )
      sub_1B4D1F4(StealBuffInfoGroup, NoEffectObject);
    v52 = (BattleBuffData_BuffData_o *)*((_QWORD *)&v44[1].monitor + v49);
    if ( !v52 || !v48 )
      goto LABEL_64;
    StealBuffInfoGroup = (RemovedBuffInfoGroup_o *)DataMasterBase_object__object__int___TryGetEntity(
                                                     v48,
                                                     &entity,
                                                     v52->fields.buffId,
                                                     (const MethodInfo_319D9E8 *)Method_DataMasterBase_BuffMaster__BuffEntity__int__TryGetEntity__);
    if ( ((unsigned __int8)StealBuffInfoGroup & 1) != 0 )
    {
      StealBuffInfoGroup = (RemovedBuffInfoGroup_o *)BattleLogicFunction__IsAddStateFieldFlag(v47, v52, v53);
      if ( !ServantData )
        goto LABEL_64;
      BattleServantData__addBuff(ServantData, v52, (unsigned __int8)StealBuffInfoGroup & 1, 0, 1, 0LL);
      changeBgmData = v52->fields.changeBgmData;
      if ( changeBgmData )
        v51 = v52->fields.changeBgmData;
      if ( changeBgmData )
      {
        if ( !v51 )
          goto LABEL_64;
        BattleBuffData_ChangeBgmData__UpdateUniqueVal(v51, v52->fields.addOrder, ServantData->fields.uniqueId, 0LL);
      }
      StealBuffInfoGroup = (RemovedBuffInfoGroup_o *)entity;
      if ( !entity )
        goto LABEL_64;
      if ( !BuffEntity__IsDisableMoveStateTurnChange((BuffEntity_o *)entity, 0LL) )
      {
        if ( v52->fields.turn <= 0 )
        {
          isProgressSelfTurn = v52->fields.isProgressSelfTurn;
        }
        else
        {
          DispTurn = BattleBuffData_BuffData__get_DispTurn(v52, 0LL);
          isProgressSelfTurn = v52->fields.isProgressSelfTurn;
          v52->fields.turn = 2 * DispTurn - isProgressSelfTurn;
        }
        v52->fields.isProgressEndEnemyTurn = isProgressSelfTurn ^ ServantData->fields.isEnemy ^ 1;
      }
      BattleLogicFunction__AfterAddedBuffProcess(v47, ServantData, (BuffEntity_o *)entity, v55);
      if ( v50 )
      {
        if ( !v45 )
          goto LABEL_64;
        NoEffectObject = (BattleActionData_o *)(unsigned int)v52->fields.addOrder;
        items = v45->fields._items;
        v59 = Method_System_Collections_Generic_List_int__Add__;
        ++v45->fields._version;
        if ( !items )
          goto LABEL_64;
        size = v45->fields._size;
        if ( (unsigned int)size >= items->max_length )
        {
          System_Collections_Generic_List_int___AddWithResize(
            v45,
            (int32_t)NoEffectObject,
            *(const MethodInfo_35631B8 **)(*(_QWORD *)(v59[4] + 192LL) + 112LL));
        }
        else
        {
          v45->fields._size = size + 1;
          items->m_Items[size + 1] = (int)NoEffectObject;
        }
      }
      else
      {
        v61 = (BattleActionData_BuffData_o *)sub_1B4D1DC(BattleActionData_BuffData_TypeInfo);
        BattleActionData_BuffData___ctor(v61, 0LL);
        if ( !v61 )
          goto LABEL_64;
        v61->fields.targetId = targetId_k__BackingField;
        if ( !dataVals_k__BackingField )
          goto LABEL_64;
        StealBuffInfoGroup = (RemovedBuffInfoGroup_o *)v82;
        v61->fields.functionIndex = dataVals_k__BackingField->fields.funcIndex;
        if ( !v82 )
          goto LABEL_64;
        funcEnt = dataVals_k__BackingField->fields.funcEnt;
        v63 = BattleLogicFunction_ProcListInArgs__get_IsCommandSideEffect(v82, 0LL);
        v50 = ((__int64 (__fastcall *)(BattleLogicFunctionProcess_FunctionTargetCheck_o *, BattleActionData_BuffData_o *, BattleBuffData_BuffData_o *, struct FunctionEntity_o *, bool, Il2CppMethodPointer))v81->klass->vtable._12_MakeAddActionBuffData.method)(
                v81,
                v61,
                v52,
                funcEnt,
                v63,
                v81->klass->vtable._13_GetConvertBuffEntity.methodPtr);
        StealBuffInfoGroup = (RemovedBuffInfoGroup_o *)mainAction;
        if ( !mainAction )
          goto LABEL_64;
        BattleActionData__setBuffData(mainAction, (BattleActionData_BuffData_o *)v50, dataVals_k__BackingField, 0LL);
        v47 = this;
        StealBuffInfoGroup = (RemovedBuffInfoGroup_o *)this->fields.data;
        if ( !StealBuffInfoGroup )
          goto LABEL_64;
        BattleData__AddFreshBuffList((BattleData_o *)StealBuffInfoGroup, (BattleActionData_BuffData_o *)v50, 0LL);
      }
    }
    klass = (int)v44[1].klass;
    ++v49;
  }
  while ( (int)v49 < klass );
  if ( !v50 )
    goto LABEL_50;
  if ( !v45 )
    goto LABEL_64;
  v64 = System_Collections_Generic_List_int___ToArray(
          v45,
          (const MethodInfo_3564C70 *)Method_System_Collections_Generic_List_int__ToArray__);
  *(_QWORD *)(v50 + 152) = v64;
  sub_1B4CF34((CGThumbnailListItem_o *)(v50 + 152), (int32_t)v64, v65, v66);
  v67 = 0;
LABEL_51:
  data = v47->fields.data;
  if ( !data )
    goto LABEL_64;
  FieldEnvData_k__BackingField = data->fields._FieldEnvData_k__BackingField;
  v73 = BattleLogicFunction___c_TypeInfo;
  if ( !BattleLogicFunction___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BattleLogicFunction___c_TypeInfo);
    v73 = BattleLogicFunction___c_TypeInfo;
  }
  _9__112_2 = (System_Func_object__bool__o *)v73->static_fields->__9__112_2;
  if ( !_9__112_2 )
  {
    if ( !v73->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v73);
      v73 = BattleLogicFunction___c_TypeInfo;
    }
    v75 = (Il2CppObject *)v73->static_fields->__9;
    _9__112_2 = (System_Func_object__bool__o *)sub_1B4D1DC(System_Func_BattleBuffData_BuffData__bool__TypeInfo);
    System_Func_object__bool____ctor(_9__112_2, v75, Method_BattleLogicFunction___c__functionMoveState_b__112_2__, 0LL);
    static_fields = (CGThumbnailListItem_o *)BattleLogicFunction___c_TypeInfo->static_fields;
    static_fields[1].klass = (CGThumbnailListItem_c *)_9__112_2;
    sub_1B4CF34(static_fields + 1, (int32_t)_9__112_2, v77, v78);
  }
  v79 = System_Linq_Enumerable__Where_object_(
          (System_Collections_Generic_IEnumerable_TSource__o *)v44,
          (System_Func_TSource__bool__o *)_9__112_2,
          (const MethodInfo_2F42638 *)Method_System_Linq_Enumerable_Where_BattleBuffData_BuffData___);
  StealBuffInfoGroup = (RemovedBuffInfoGroup_o *)System_Linq_Enumerable__ToArray_object_(
                                                   v79,
                                                   (const MethodInfo_2F3C3E4 *)Method_System_Linq_Enumerable_ToArray_BattleBuffData_BuffData___);
  if ( !FieldEnvData_k__BackingField )
    goto LABEL_64;
  if ( BattleFieldEnvironmentData__AddBgmFromChangeBgmBuffArray(
         FieldEnvData_k__BackingField,
         (BattleBuffData_BuffData_array *)StealBuffInfoGroup,
         0LL)
    && v67 != 1 )
  {
    v80 = (BattleActionEffect_ChangeBgmBuff_o *)sub_1B4D1DC(BattleActionEffect_ChangeBgmBuff_TypeInfo);
    BattleActionEffect_ChangeBgmBuff___ctor(v80, 0LL);
    if ( !v67 )
    {
      BattleActionData_BuffData__SetActionEffectProc(
        (BattleActionData_BuffData_o *)v50,
        (BattleActionEffect_Base_o *)v80,
        0LL);
      return;
    }
LABEL_64:
    sub_1B4D1EC(StealBuffInfoGroup, NoEffectObject);
  }
}


// local variable allocation has failed, the output may be wrong!
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
  __int64 v15; // x1
  __int64 v16; // x1
  __int64 v17; // x1
  __int64 v18; // x1
  __int64 v19; // x1
  __int64 v20; // x1
  __int64 v21; // x1
  __int64 v22; // x1
  __int64 v23; // x1
  BattleActionData_o *v24; // x19
  __int64 v25; // x1
  BattleData_o *data; // x0
  BattleData_o *v27; // x8
  BattleServantData_o *v28; // x22
  BattleServantData_o *ServantData; // x20
  System_Collections_Generic_List_int__o *v30; // x27
  struct System_Int32_array *items; // x8
  _QWORD *v32; // x9
  __int64 size; // x10
  int v34; // w11
  __int64 v35; // x29
  char v36; // w28
  char v37; // w10
  System_Int32_array *TargetRarityList; // x26
  bool v39; // w8
  System_Int32_array *buffIndv; // x19
  System_Int32_array *v41; // x20
  int32_t v42; // w1
  struct System_Int32_array *v43; // x8
  _QWORD *v44; // x9
  __int64 v45; // x10
  System_Int32_array_array *Int2DimensionalArray; // x0
  struct System_Int32_array *v47; // x8
  _QWORD *v48; // x9
  __int64 v49; // x10
  struct System_Int32_array *v50; // x8
  _QWORD *v51; // x9
  __int64 v52; // x10
  struct System_Int32_array *v53; // x8
  _QWORD *v54; // x9
  __int64 v55; // x10
  struct System_Int32_array *v56; // x8
  _QWORD *v57; // x9
  __int64 v58; // x10
  struct System_Int32_array *v59; // x8
  _QWORD *v60; // x9
  __int64 v61; // x10
  struct System_Int32_array *v62; // x8
  _QWORD *v63; // x9
  __int64 v64; // x10
  int32_t BattlePointPhase; // w20
  struct System_Int32_array *v66; // x8
  _QWORD *v67; // x9
  __int64 v68; // x10
  struct System_Int32_array *v69; // x8
  _QWORD *v70; // x9
  __int64 v71; // x10
  bool v72; // w0
  struct System_Int32_array *v73; // x8
  _QWORD *v74; // x9
  __int64 v75; // x10
  struct System_Int32_array *v76; // x8
  _QWORD *v77; // x9
  __int64 v78; // x10
  System_Array_o *v79; // x20
  bool v80; // w20
  bool IsOverChargeState; // w0
  int32_t v82; // w2
  const MethodInfo *v83; // x3
  int32_t NPFixedDamageValue; // w21
  BattleLogic_DamageProcessArgs_o *damageProcessArgs; // x25
  BattleLogic_o *logic; // x24
  System_Int32_array *v87; // x27
  bool IsIncludeIgnoreIndividuality; // w29
  BattleActionData_DamageData_o *v89; // x20
  char v90; // w21
  bool v92; // [xsp+30h] [xbp-A0h]
  bool isRarityAtk; // [xsp+34h] [xbp-9Ch]
  BattleServantData_o *target; // [xsp+38h] [xbp-98h]
  BattleActionData_o *v95; // [xsp+40h] [xbp-90h]
  int32_t v96; // [xsp+48h] [xbp-88h]
  int32_t v97; // [xsp+4Ch] [xbp-84h]
  BattleActionData_o *actiona; // [xsp+50h] [xbp-80h]
  unsigned int v99; // [xsp+68h] [xbp-68h]
  System_RuntimeFieldHandle_o v100; // 0:w1.4

  if ( (byte_49BDB97 & 1) == 0 )
  {
    sub_1B4CF90(&BattleActionData_TypeInfo, *(_QWORD *)&playerId);
    sub_1B4CF90(&BattleLogic_DamageProcessArgs_TypeInfo, v15);
    sub_1B4CF90(&int_____TypeInfo, v16);
    sub_1B4CF90(&int___TypeInfo, v17);
    sub_1B4CF90(&Method_System_Collections_Generic_List_int__Add__, v18);
    sub_1B4CF90(&Method_System_Collections_Generic_List_int__ToArray__, v19);
    sub_1B4CF90(&Method_System_Collections_Generic_List_int___ctor__, v20);
    sub_1B4CF90(&System_Collections_Generic_List_int__TypeInfo, v21);
    sub_1B4CF90(&DataVals_OverChargeState___TypeInfo, v22);
    sub_1B4CF90(
      &Field__PrivateImplementationDetails__44BE0EBF7C907BA44AD83314C6AD0AA399AD5B73911C129D2CD6A85D4A056C90,
      v23);
    byte_49BDB97 = 1;
  }
  v24 = (BattleActionData_o *)sub_1B4D1DC(BattleActionData_TypeInfo);
  BattleActionData___ctor(v24, 0LL);
  data = this->fields.data;
  if ( !data )
    goto LABEL_93;
  data = (BattleData_o *)BattleData__getServantData(data, playerId, 0LL);
  v27 = this->fields.data;
  if ( !v27 )
    goto LABEL_93;
  v28 = (BattleServantData_o *)data;
  ServantData = BattleData__getServantData(v27, targetId, 0LL);
  v30 = (System_Collections_Generic_List_int__o *)sub_1B4D1DC(System_Collections_Generic_List_int__TypeInfo);
  System_Collections_Generic_List_int____ctor(
    v30,
    (const MethodInfo_3562964 *)Method_System_Collections_Generic_List_int___ctor__);
  if ( !baseVals
    || (data = (BattleData_o *)DataVals__GetParam(baseVals, 3, 0, 0LL), !v30)
    || (items = v30->fields._items,
        v32 = Method_System_Collections_Generic_List_int__Add__,
        ++v30->fields._version,
        !items) )
  {
LABEL_93:
    sub_1B4D1EC(data, v25);
  }
  size = v30->fields._size;
  actiona = action;
  v96 = funcIndex;
  if ( (unsigned int)size >= items->max_length )
  {
    System_Collections_Generic_List_int___AddWithResize(
      v30,
      (int32_t)data,
      *(const MethodInfo_35631B8 **)(*(_QWORD *)(v32[4] + 192LL) + 112LL));
  }
  else
  {
    v30->fields._size = size + 1;
    items->m_Items[size + 1] = (int)data;
  }
  v34 = type - 3;
  v35 = 0LL;
  v97 = type;
  v36 = 0;
  target = ServantData;
  v95 = v24;
  v99 = v34;
  v37 = 0;
  TargetRarityList = 0LL;
  v39 = 0;
  buffIndv = 0LL;
  v41 = 0LL;
  switch ( v34 )
  {
    case 0:
    case 1:
    case 4:
    case 6:
    case 7:
      v42 = 7;
      goto LABEL_14;
    case 2:
    case 3:
      v42 = 6;
LABEL_14:
      data = (BattleData_o *)DataVals__GetParam(baseVals, v42, 0, 0LL);
      v43 = v30->fields._items;
      v44 = Method_System_Collections_Generic_List_int__Add__;
      ++v30->fields._version;
      if ( !v43 )
        goto LABEL_93;
      v45 = v30->fields._size;
      if ( (unsigned int)v45 >= v43->max_length )
      {
        System_Collections_Generic_List_int___AddWithResize(
          v30,
          (int32_t)data,
          *(const MethodInfo_35631B8 **)(*(_QWORD *)(v44[4] + 192LL) + 112LL));
      }
      else
      {
        v30->fields._size = v45 + 1;
        v43->m_Items[v45 + 1] = (int)data;
      }
      break;
    case 5:
      goto LABEL_85;
    case 8:
      v30 = (System_Collections_Generic_List_int__o *)sub_1B4D1DC(System_Collections_Generic_List_int__TypeInfo);
      System_Collections_Generic_List_int____ctor(
        v30,
        (const MethodInfo_3562964 *)Method_System_Collections_Generic_List_int___ctor__);
      data = (BattleData_o *)DataVals__GetParam(baseVals, 3, 0, 0LL);
      if ( !v30 )
        goto LABEL_93;
      v47 = v30->fields._items;
      v48 = Method_System_Collections_Generic_List_int__Add__;
      ++v30->fields._version;
      if ( !v47 )
        goto LABEL_93;
      v49 = v30->fields._size;
      if ( (unsigned int)v49 >= v47->max_length )
      {
        System_Collections_Generic_List_int___AddWithResize(
          v30,
          (int32_t)data,
          *(const MethodInfo_35631B8 **)(*(_QWORD *)(v48[4] + 192LL) + 112LL));
      }
      else
      {
        v30->fields._size = v49 + 1;
        v47->m_Items[v49 + 1] = (int)data;
      }
      data = (BattleData_o *)DataVals__GetParam(baseVals, 7, 0, 0LL);
      v56 = v30->fields._items;
      v57 = Method_System_Collections_Generic_List_int__Add__;
      ++v30->fields._version;
      if ( !v56 )
        goto LABEL_93;
      v58 = v30->fields._size;
      if ( (unsigned int)v58 >= v56->max_length )
      {
        System_Collections_Generic_List_int___AddWithResize(
          v30,
          (int32_t)data,
          *(const MethodInfo_35631B8 **)(*(_QWORD *)(v57[4] + 192LL) + 112LL));
      }
      else
      {
        v30->fields._size = v58 + 1;
        v56->m_Items[v58 + 1] = (int)data;
      }
      data = (BattleData_o *)DataVals__GetParam(baseVals, 60, 0, 0LL);
      v62 = v30->fields._items;
      v63 = Method_System_Collections_Generic_List_int__Add__;
      ++v30->fields._version;
      if ( !v62 )
        goto LABEL_93;
      v64 = v30->fields._size;
      if ( (unsigned int)v64 >= v62->max_length )
      {
        System_Collections_Generic_List_int___AddWithResize(
          v30,
          (int32_t)data,
          *(const MethodInfo_35631B8 **)(*(_QWORD *)(v63[4] + 192LL) + 112LL));
      }
      else
      {
        v30->fields._size = v64 + 1;
        v62->m_Items[v64 + 1] = (int)data;
      }
      data = (BattleData_o *)DataVals__GetParam(baseVals, 61, 0, 0LL);
      v69 = v30->fields._items;
      v70 = Method_System_Collections_Generic_List_int__Add__;
      ++v30->fields._version;
      if ( !v69 )
        goto LABEL_93;
      v71 = v30->fields._size;
      if ( (unsigned int)v71 >= v69->max_length )
      {
        System_Collections_Generic_List_int___AddWithResize(
          v30,
          (int32_t)data,
          *(const MethodInfo_35631B8 **)(*(_QWORD *)(v70[4] + 192LL) + 112LL));
      }
      else
      {
        v30->fields._size = v71 + 1;
        v69->m_Items[v71 + 1] = (int)data;
      }
      data = (BattleData_o *)DataVals__GetParam(baseVals, 4, 0, 0LL);
      v73 = v30->fields._items;
      v74 = Method_System_Collections_Generic_List_int__Add__;
      ++v30->fields._version;
      if ( !v73 )
        goto LABEL_93;
      v75 = v30->fields._size;
      if ( (unsigned int)v75 >= v73->max_length )
      {
        System_Collections_Generic_List_int___AddWithResize(
          v30,
          (int32_t)data,
          *(const MethodInfo_35631B8 **)(*(_QWORD *)(v74[4] + 192LL) + 112LL));
      }
      else
      {
        v30->fields._size = v75 + 1;
        v73->m_Items[v75 + 1] = (int)data;
      }
      data = (BattleData_o *)DataVals__GetParam(baseVals, 6, 0, 0LL);
      v76 = v30->fields._items;
      v77 = Method_System_Collections_Generic_List_int__Add__;
      ++v30->fields._version;
      if ( !v76 )
        goto LABEL_93;
      v78 = v30->fields._size;
      if ( (unsigned int)v78 >= v76->max_length )
      {
        System_Collections_Generic_List_int___AddWithResize(
          v30,
          (int32_t)data,
          *(const MethodInfo_35631B8 **)(*(_QWORD *)(v77[4] + 192LL) + 112LL));
      }
      else
      {
        v30->fields._size = v78 + 1;
        v76->m_Items[v78 + 1] = (int)data;
      }
      buffIndv = DataVals__GetTargetList(baseVals, 0LL);
      v79 = (System_Array_o *)sub_1B4D038(DataVals_OverChargeState___TypeInfo, 3LL);
      v100.fields.value = Field__PrivateImplementationDetails__44BE0EBF7C907BA44AD83314C6AD0AA399AD5B73911C129D2CD6A85D4A056C90;
      System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray_61793784(v79, v100, 0LL);
      DataVals__UpdateOverChargeEachFunc(baseVals, (DataVals_OverChargeState_array *)v79, 0LL);
      v80 = DataVals__IsOverChargeState(baseVals, 2, 0LL) || DataVals__IsOverChargeState(baseVals, 8, 0LL);
      v36 = 1;
      IsOverChargeState = DataVals__IsOverChargeState(baseVals, 1, 0LL);
      v35 = 0LL;
      v37 = 0;
      TargetRarityList = 0LL;
      v39 = v80 && !IsOverChargeState;
      v41 = buffIndv;
      goto LABEL_85;
    case 9:
      data = (BattleData_o *)DataVals__GetParam(baseVals, 7, 0, 0LL);
      v50 = v30->fields._items;
      v51 = Method_System_Collections_Generic_List_int__Add__;
      ++v30->fields._version;
      if ( !v50 )
        goto LABEL_93;
      v52 = v30->fields._size;
      if ( (unsigned int)v52 >= v50->max_length )
      {
        System_Collections_Generic_List_int___AddWithResize(
          v30,
          (int32_t)data,
          *(const MethodInfo_35631B8 **)(*(_QWORD *)(v51[4] + 192LL) + 112LL));
      }
      else
      {
        v30->fields._size = v52 + 1;
        v50->m_Items[v52 + 1] = (int)data;
      }
      data = (BattleData_o *)DataVals__GetParam(baseVals, 4, 0, 0LL);
      v53 = v30->fields._items;
      v54 = Method_System_Collections_Generic_List_int__Add__;
      ++v30->fields._version;
      if ( !v53 )
        goto LABEL_93;
      v55 = v30->fields._size;
      if ( (unsigned int)v55 >= v53->max_length )
      {
        System_Collections_Generic_List_int___AddWithResize(
          v30,
          (int32_t)data,
          *(const MethodInfo_35631B8 **)(*(_QWORD *)(v54[4] + 192LL) + 112LL));
      }
      else
      {
        v30->fields._size = v55 + 1;
        v53->m_Items[v55 + 1] = (int)data;
      }
      data = (BattleData_o *)DataVals__GetParam(baseVals, 6, 0, 0LL);
      v59 = v30->fields._items;
      v60 = Method_System_Collections_Generic_List_int__Add__;
      ++v30->fields._version;
      if ( !v59 )
        goto LABEL_93;
      v61 = v30->fields._size;
      if ( (unsigned int)v61 >= v59->max_length )
      {
        System_Collections_Generic_List_int___AddWithResize(
          v30,
          (int32_t)data,
          *(const MethodInfo_35631B8 **)(*(_QWORD *)(v60[4] + 192LL) + 112LL));
      }
      else
      {
        v30->fields._size = v61 + 1;
        v59->m_Items[v61 + 1] = (int)data;
      }
      data = (BattleData_o *)DataVals__GetParam(baseVals, 6, 0, 0LL);
      if ( !v28 )
        goto LABEL_93;
      BattlePointPhase = BattleServantData__GetBattlePointPhase(v28, (int32_t)data, 0LL);
      data = (BattleData_o *)DataVals__GetParamAddTypeIndex(baseVals, 181, BattlePointPhase, -1, 0LL);
      v66 = v30->fields._items;
      v67 = Method_System_Collections_Generic_List_int__Add__;
      ++v30->fields._version;
      if ( !v66 )
        goto LABEL_93;
      v68 = v30->fields._size;
      if ( (unsigned int)v68 >= v66->max_length )
      {
        System_Collections_Generic_List_int___AddWithResize(
          v30,
          (int32_t)data,
          *(const MethodInfo_35631B8 **)(*(_QWORD *)(v67[4] + 192LL) + 112LL));
      }
      else
      {
        v30->fields._size = v68 + 1;
        v66->m_Items[v68 + 1] = (int)data;
      }
      if ( DataVals__IsOverChargeState(baseVals, 1, 0LL) )
        goto LABEL_65;
      v72 = DataVals__IsOverChargeState(baseVals, 2, 0LL);
      v35 = 0LL;
      v36 = 0;
      if ( BattlePointPhase )
      {
LABEL_66:
        v37 = 0;
        TargetRarityList = 0LL;
        v39 = 0;
        buffIndv = 0LL;
        v41 = 0LL;
        goto LABEL_85;
      }
      v37 = 0;
      TargetRarityList = 0LL;
      v39 = 0;
      buffIndv = 0LL;
      v41 = 0LL;
      if ( v72 )
        goto LABEL_85;
      DataVals__SetOverCharge(baseVals, 0, 0LL);
LABEL_65:
      v36 = 0;
      v35 = 0LL;
      goto LABEL_84;
    default:
      goto LABEL_66;
  }
  v35 = 0LL;
  v36 = 0;
  v37 = 0;
  TargetRarityList = 0LL;
  v39 = 0;
  buffIndv = 0LL;
  v41 = 0LL;
  switch ( v99 )
  {
    case 0u:
    case 1u:
      v41 = (System_Int32_array *)sub_1B4D038(int___TypeInfo, 1LL);
      data = (BattleData_o *)DataVals__GetParam(baseVals, 6, 0, 0LL);
      if ( !v41 )
        goto LABEL_93;
      if ( !v41->max_length )
        goto LABEL_94;
      v36 = 0;
      v35 = 0LL;
      v37 = 0;
      TargetRarityList = 0LL;
      v39 = 0;
      buffIndv = 0LL;
      v41->m_Items[1] = (int)data;
      goto LABEL_85;
    case 2u:
    case 3u:
    case 5u:
      goto LABEL_85;
    case 4u:
      buffIndv = (System_Int32_array *)sub_1B4D038(int___TypeInfo, 1LL);
      data = (BattleData_o *)DataVals__GetParam(baseVals, 6, 0, 0LL);
      if ( !buffIndv )
        goto LABEL_93;
      if ( !buffIndv->max_length )
        goto LABEL_94;
      v36 = 0;
      v35 = 0LL;
      v37 = 0;
      TargetRarityList = 0LL;
      v39 = 0;
      v41 = 0LL;
      buffIndv->m_Items[1] = (int)data;
      goto LABEL_85;
    case 6u:
      TargetRarityList = DataVals__GetTargetRarityList(baseVals, 0LL);
      v36 = 0;
      v35 = 0LL;
      v39 = 0;
      buffIndv = 0LL;
      v41 = 0LL;
      v37 = 1;
      goto LABEL_85;
    case 7u:
      Int2DimensionalArray = DataVals__GetInt2DimensionalArray(baseVals, 56, 0LL);
      if ( Int2DimensionalArray )
      {
        v35 = (__int64)Int2DimensionalArray;
      }
      else
      {
        v35 = sub_1B4D038(int_____TypeInfo, 1LL);
        data = (BattleData_o *)DataVals__GetAndCheckIndividuality(baseVals, 0LL);
        if ( !v35 )
          goto LABEL_93;
        if ( !*(_DWORD *)(v35 + 24) )
LABEL_94:
          sub_1B4D1F4(data, v25);
        *(_QWORD *)(v35 + 32) = data;
        sub_1B4CF34((CGThumbnailListItem_o *)(v35 + 32), (int32_t)data, v82, v83);
      }
      v36 = 0;
LABEL_84:
      v37 = 0;
      TargetRarityList = 0LL;
      v39 = 0;
      buffIndv = 0LL;
      v41 = 0LL;
LABEL_85:
      v92 = v39;
      isRarityAtk = v37;
      NPFixedDamageValue = DataVals__GetNPFixedDamageValue(baseVals, 0LL);
      damageProcessArgs = (BattleLogic_DamageProcessArgs_o *)sub_1B4D1DC(BattleLogic_DamageProcessArgs_TypeInfo);
      BattleLogic_DamageProcessArgs___ctor(
        damageProcessArgs,
        0,
        NPFixedDamageValue,
        (System_Int32_array_array *)v35,
        0LL);
      logic = this->fields.logic;
      v87 = System_Collections_Generic_List_int___ToArray(
              v30,
              (const MethodInfo_3564C70 *)Method_System_Collections_Generic_List_int__ToArray__);
      IsIncludeIgnoreIndividuality = DataVals__IsIncludeIgnoreIndividuality(baseVals, 0LL);
      data = (BattleData_o *)DataVals__isParam(baseVals, 91, 0LL);
      if ( !logic )
        goto LABEL_93;
      data = (BattleData_o *)BattleLogic__getFunctionNpDamagelist(
                               logic,
                               v28,
                               target,
                               v87,
                               v96,
                               v97,
                               actiona,
                               v41,
                               buffIndv,
                               TargetRarityList,
                               IsIncludeIgnoreIndividuality,
                               (unsigned __int8)data & 1,
                               damageProcessArgs,
                               0LL);
      v89 = (BattleActionData_DamageData_o *)data;
      if ( v99 < 8 && ((0x93u >> v99) & 1) != 0 )
      {
        v90 = 1;
        if ( !data )
          goto LABEL_93;
      }
      else
      {
        v90 = v36 & v92;
        if ( !data )
          goto LABEL_93;
      }
      BattleActionData_DamageData__addAttackSideEffectAction((BattleActionData_DamageData_o *)data, 80, 0LL);
      if ( !v95 )
        goto LABEL_93;
      BattleActionData__setDamageData(v95, v89, baseVals, v90, isRarityAtk, 0LL);
      return v95;
    default:
      goto LABEL_66;
  }
}


// local variable allocation has failed, the output may be wrong!
BattleActionData_o *__fastcall BattleLogicFunction__functionPtShuffle(
        BattleLogicFunction_o *this,
        int32_t actionId,
        FunctionEntity_o *funcEnt,
        DataVals_o *baeVals,
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
  __int64 v15; // x1
  BattleActionData_o *v16; // x20
  __int64 v17; // x1
  void *data; // x0
  struct BattleData_o *v19; // x8
  System_Collections_Generic_List_object__o *player_datalist; // x21
  System_Action_object__o *v21; // x22
  Il2CppObject *v22; // x23
  struct BattleLogicFunction___c_StaticFields *static_fields; // x0
  int32_t v24; // w2
  const MethodInfo *v25; // x3
  struct BattleData_o *v26; // x8
  System_Collections_Generic_List_object__o *v27; // x21
  System_Comparison_T__o *v28; // x22
  Il2CppObject *v29; // x23
  struct BattleLogicFunction___c_StaticFields *v30; // x0
  int32_t v31; // w2
  const MethodInfo *v32; // x3
  struct BattleData_o *v33; // x8
  int v34; // w8
  unsigned int *v35; // x21
  int32_t v36; // w23
  BattleServantData_o *v37; // x22
  struct BattleData_o *v38; // x8
  unsigned __int64 v39; // x24
  struct System_Int32_array *p_entryid; // x9
  unsigned __int64 max_length; // x10
  unsigned __int64 v42; // x9
  __int64 v43; // x22
  struct System_Int32_array *v44; // x9
  BattleLogicTask_o *v45; // x21

  if ( (byte_49BDBA8 & 1) == 0 )
  {
    sub_1B4CF90(&System_Action_BattleServantData__TypeInfo, *(_QWORD *)&actionId);
    sub_1B4CF90(&BattleActionData_TypeInfo, v7);
    sub_1B4CF90(&BattleLogicTask_TypeInfo, v8);
    sub_1B4CF90(&System_Comparison_BattleServantData__TypeInfo, v9);
    sub_1B4CF90(&Method_System_Collections_Generic_List_BattleServantData__ForEach__, v10);
    sub_1B4CF90(&Method_System_Collections_Generic_List_BattleServantData__Sort__, v11);
    sub_1B4CF90(&Method_System_Collections_Generic_List_BattleServantData__ToArray__, v12);
    sub_1B4CF90(&Method_BattleLogicFunction___c__functionPtShuffle_b__91_0__, v13);
    sub_1B4CF90(&Method_BattleLogicFunction___c__functionPtShuffle_b__91_1__, v14);
    sub_1B4CF90(&BattleLogicFunction___c_TypeInfo, v15);
    byte_49BDBA8 = 1;
  }
  v16 = (BattleActionData_o *)sub_1B4D1DC(BattleActionData_TypeInfo);
  BattleActionData___ctor(v16, 0LL);
  data = this->fields.data;
  if ( !data )
    goto LABEL_53;
  BattleData__SubBuffFromPT_43219928((BattleData_o *)data, 0LL, 0LL);
  data = this->fields.data;
  if ( !data )
    goto LABEL_53;
  BattleData__SubBuffExitSvt((BattleData_o *)data, 0LL, 0LL);
  v19 = this->fields.data;
  if ( !v19 )
    goto LABEL_53;
  player_datalist = (System_Collections_Generic_List_object__o *)v19->fields.player_datalist;
  data = BattleLogicFunction___c_TypeInfo;
  if ( !BattleLogicFunction___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BattleLogicFunction___c_TypeInfo);
    data = BattleLogicFunction___c_TypeInfo;
  }
  v21 = *(System_Action_object__o **)(*((_QWORD *)data + 23) + 80LL);
  if ( !v21 )
  {
    if ( !*((_DWORD *)data + 56) )
    {
      j_il2cpp_runtime_class_init_0(data);
      data = BattleLogicFunction___c_TypeInfo;
    }
    v22 = (Il2CppObject *)**((_QWORD **)data + 23);
    v21 = (System_Action_object__o *)sub_1B4D1DC(System_Action_BattleServantData__TypeInfo);
    System_Action_object____ctor(v21, v22, Method_BattleLogicFunction___c__functionPtShuffle_b__91_0__, 0LL);
    static_fields = BattleLogicFunction___c_TypeInfo->static_fields;
    static_fields->__9__91_0 = (struct System_Action_BattleServantData__o *)v21;
    sub_1B4CF34((CGThumbnailListItem_o *)&static_fields->__9__91_0, (int32_t)v21, v24, v25);
  }
  if ( !player_datalist )
    goto LABEL_53;
  System_Collections_Generic_List_object___ForEach(
    player_datalist,
    (System_Action_T__o *)v21,
    (const MethodInfo_3580C1C *)Method_System_Collections_Generic_List_BattleServantData__ForEach__);
  v26 = this->fields.data;
  if ( !v26 )
    goto LABEL_53;
  data = BattleLogicFunction___c_TypeInfo;
  v27 = (System_Collections_Generic_List_object__o *)v26->fields.player_datalist;
  if ( !BattleLogicFunction___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BattleLogicFunction___c_TypeInfo);
    data = BattleLogicFunction___c_TypeInfo;
  }
  v28 = *(System_Comparison_T__o **)(*((_QWORD *)data + 23) + 88LL);
  if ( !v28 )
  {
    if ( !*((_DWORD *)data + 56) )
    {
      j_il2cpp_runtime_class_init_0(data);
      data = BattleLogicFunction___c_TypeInfo;
    }
    v29 = (Il2CppObject *)**((_QWORD **)data + 23);
    v28 = (System_Comparison_T__o *)sub_1B4D1DC(System_Comparison_BattleServantData__TypeInfo);
    System_Comparison_object____ctor(v28, v29, Method_BattleLogicFunction___c__functionPtShuffle_b__91_1__, 0LL);
    v30 = BattleLogicFunction___c_TypeInfo->static_fields;
    v30->__9__91_1 = (struct System_Comparison_BattleServantData__o *)v28;
    sub_1B4CF34((CGThumbnailListItem_o *)&v30->__9__91_1, (int32_t)v28, v31, v32);
  }
  if ( !v27 )
    goto LABEL_53;
  System_Collections_Generic_List_object___Sort_56106144(
    v27,
    v28,
    (const MethodInfo_3581CA0 *)Method_System_Collections_Generic_List_BattleServantData__Sort__);
  v33 = this->fields.data;
  if ( !v33 )
    goto LABEL_53;
  data = v33->fields.player_datalist;
  if ( !data )
    goto LABEL_53;
  data = System_Collections_Generic_List_object___ToArray(
           (System_Collections_Generic_List_object__o *)data,
           (const MethodInfo_3581D34 *)Method_System_Collections_Generic_List_BattleServantData__ToArray__);
  if ( !data )
    goto LABEL_53;
  v34 = *((_DWORD *)data + 6);
  v35 = (unsigned int *)data;
  if ( v34 >= 1 )
  {
    v36 = 0;
    while ( 1 )
    {
      if ( v36 >= (unsigned int)v34 )
LABEL_54:
        sub_1B4D1F4(data, v17);
      v37 = *(BattleServantData_o **)&v35[2 * v36 + 8];
      if ( !v37 )
        break;
      if ( v37->fields.isEntry )
      {
        data = (void *)BattleServantData__isAlive(v37, 0, 0LL);
        if ( ((unsigned __int8)data & 1) != 0 )
          v37->fields.isEntry = 0;
      }
      v37->fields.deckIndex = v36;
      v34 = v35[6];
      if ( ++v36 >= v34 )
        goto LABEL_32;
    }
LABEL_53:
    sub_1B4D1EC(data, v17);
  }
LABEL_32:
  v38 = this->fields.data;
  if ( !v38 )
    goto LABEL_53;
  v39 = 0LL;
  while ( 1 )
  {
    p_entryid = v38->fields.p_entryid;
    if ( !p_entryid )
      goto LABEL_53;
    max_length = p_entryid->max_length;
    if ( (__int64)v39 >= (int)max_length )
      break;
    if ( v39 >= max_length )
      goto LABEL_54;
    p_entryid->m_Items[v39 + 1] = -1;
    v42 = v35[6];
    if ( (__int64)v39 < (int)v42 )
    {
      if ( v39 >= v42 )
        goto LABEL_54;
      v43 = *(_QWORD *)&v35[2 * v39 + 8];
      if ( !v43 )
        goto LABEL_53;
      data = (void *)BattleServantData__isAlive(*(BattleServantData_o **)&v35[2 * v39 + 8], 0, 0LL);
      v38 = this->fields.data;
      if ( ((unsigned __int8)data & 1) != 0 )
      {
        if ( !v38 )
          goto LABEL_53;
        v44 = v38->fields.p_entryid;
        if ( !v44 )
          goto LABEL_53;
        if ( v39 >= v44->max_length )
          goto LABEL_54;
        v44->m_Items[v39 + 1] = *(_DWORD *)(v43 + 24);
        *(_BYTE *)(v43 + 476) = 1;
        *(_BYTE *)(v43 + 541) = 1;
      }
    }
    ++v39;
    if ( !v38 )
      goto LABEL_53;
  }
  BattleData__createCommandCard(v38, 0LL);
  data = this->fields.data;
  if ( !data )
    goto LABEL_53;
  BattleData__shuffleCommand((BattleData_o *)data, 0LL);
  data = this->fields.logic;
  if ( !data )
    goto LABEL_53;
  BattleLogic__drawCommand((BattleLogic_o *)data, 0LL);
  if ( !v16 )
    goto LABEL_53;
  v16->fields.redrawCommandCard = 1;
  v45 = (BattleLogicTask_o *)sub_1B4D1DC(BattleLogicTask_TypeInfo);
  BattleLogicTask___ctor(v45, 0LL);
  if ( !v45 )
    goto LABEL_53;
  BattleLogicTask__setCheckEntryFunction(v45, 0LL);
  data = this->fields.logic;
  if ( !data )
    goto LABEL_53;
  BattleLogic__AddBattleLogicTask((BattleLogic_o *)data, v45, 0LL);
  return v16;
}


// local variable allocation has failed, the output may be wrong!
BattleActionData_o *__fastcall BattleLogicFunction__functionReflection(
        BattleLogicFunction_o *this,
        int32_t playerId,
        int32_t targetId,
        DataVals_o *baseVals,
        int32_t funcIndex,
        const MethodInfo *method)
{
  __int64 v11; // x1
  __int64 v12; // x1
  __int64 v13; // x1
  BattleActionData_o *v14; // x23
  __int64 v15; // x1
  __int64 data; // x0
  BattleServantData_o *v17; // x25
  BattleServantData_o *ServantData; // x24
  __int64 v19; // x26
  __int64 v20; // x8
  double v21; // d0
  int32_t v22; // w28
  int v23; // w29
  __int64 v25; // x0
  int32_t v26; // w2
  const MethodInfo *v27; // x3
  __int64 v28; // x0
  int32_t v29; // w2
  const MethodInfo *v30; // x3
  int32_t v31; // w2
  const MethodInfo *v32; // x3
  __int64 v33; // x0
  int32_t v34; // w2
  const MethodInfo *v35; // x3
  __int64 v36; // x0
  int32_t v37; // w2
  const MethodInfo *v38; // x3
  __int64 v39; // x0
  int32_t v40; // w2
  const MethodInfo *v41; // x3
  struct BattleData_o *v42; // x8
  int32_t uniqueId; // w21
  int32_t v44; // w22
  bool IsOpponentPTUniqueID; // w0

  if ( (byte_49BDBA6 & 1) == 0 )
  {
    sub_1B4CF90(&BattleActionData_TypeInfo, *(_QWORD *)&playerId);
    sub_1B4CF90(&BattleActionData_DamageData_TypeInfo, v11);
    sub_1B4CF90(&int___TypeInfo, v12);
    sub_1B4CF90(&BattleBuffData_ShowBuffData___TypeInfo, v13);
    byte_49BDBA6 = 1;
  }
  v14 = (BattleActionData_o *)sub_1B4D1DC(BattleActionData_TypeInfo);
  BattleActionData___ctor(v14, 0LL);
  data = (__int64)this->fields.data;
  if ( !data )
    goto LABEL_28;
  data = (__int64)BattleData__getServantData((BattleData_o *)data, playerId, 0LL);
  if ( !this->fields.data )
    goto LABEL_28;
  v17 = (BattleServantData_o *)data;
  ServantData = BattleData__getServantData(this->fields.data, targetId, 0LL);
  v19 = sub_1B4D1DC(BattleActionData_DamageData_TypeInfo);
  BattleActionData_DamageData___ctor((BattleActionData_DamageData_o *)v19, 0LL);
  if ( !v17 )
    goto LABEL_28;
  data = BattleServantData__getAccumulationDamage(v17, 0LL);
  if ( !baseVals )
    goto LABEL_28;
  v20 = DataVals__GetValue(baseVals, 0LL) * (__int64)(int)data;
  data = (__int64)this->fields.data;
  v21 = (double)v20 / 1000.0;
  v22 = v21 == INFINITY ? 0x80000000 : (int)v21;
  if ( !data )
    goto LABEL_28;
  data = BattleData__IsDeadOkTurn((BattleData_o *)data, targetId, 0LL);
  if ( (data & 1) == 0 )
  {
    if ( !ServantData )
      goto LABEL_28;
    v23 = ((__int64 (__fastcall *)(BattleServantData_o *, Il2CppMethodPointer))ServantData->klass->vtable._9_get_hp.method)(
            ServantData,
            ServantData->klass->vtable._10_set_hp.methodPtr);
    data = ((__int64 (__fastcall *)(BattleServantData_o *, Il2CppMethodPointer))ServantData->klass->vtable._11_get_reducedhp.method)(
             ServantData,
             ServantData->klass->vtable._12_set_reducedhp.methodPtr);
    if ( v23 - (int)data < v22 && v23 - (int)data > 0 )
      v22 = v23 - data - 1;
  }
  if ( !v19 )
    goto LABEL_28;
  *(_DWORD *)(v19 + 28) = targetId;
  *(_DWORD *)(v19 + 16) = funcIndex;
  *(_WORD *)(v19 + 32) = 0;
  *(_BYTE *)(v19 + 34) = 0;
  *(_DWORD *)(v19 + 36) = 0;
  *(_BYTE *)(v19 + 40) = 0;
  v25 = sub_1B4D038(BattleBuffData_ShowBuffData___TypeInfo, 0LL);
  *(_QWORD *)(v19 + 64) = v25;
  sub_1B4CF34((CGThumbnailListItem_o *)(v19 + 64), v25, v26, v27);
  v28 = sub_1B4D038(BattleBuffData_ShowBuffData___TypeInfo, 0LL);
  *(_QWORD *)(v19 + 72) = v28;
  sub_1B4CF34((CGThumbnailListItem_o *)(v19 + 72), v28, v29, v30);
  data = sub_1B4D038(int___TypeInfo, 1LL);
  if ( !data )
    goto LABEL_28;
  if ( !*(_DWORD *)(data + 24) )
    sub_1B4D1F4(data, data);
  *(_DWORD *)(data + 32) = v22;
  *(_QWORD *)(v19 + 96) = data;
  sub_1B4CF34((CGThumbnailListItem_o *)(v19 + 96), data, v31, v32);
  v33 = sub_1B4D038(int___TypeInfo, 0LL);
  *(_QWORD *)(v19 + 104) = v33;
  sub_1B4CF34((CGThumbnailListItem_o *)(v19 + 104), v33, v34, v35);
  v36 = sub_1B4D038(int___TypeInfo, 0LL);
  *(_QWORD *)(v19 + 112) = v36;
  sub_1B4CF34((CGThumbnailListItem_o *)(v19 + 112), v36, v37, v38);
  v39 = sub_1B4D038(int___TypeInfo, 0LL);
  *(_QWORD *)(v19 + 120) = v39;
  sub_1B4CF34((CGThumbnailListItem_o *)(v19 + 120), v39, v40, v41);
  if ( !ServantData )
    goto LABEL_28;
  BattleServantData__provisionalDamage(ServantData, v22, 0LL);
  BattleServantData__ResultDamage(ServantData, v22, v17, 0LL, 0LL, 0, 0LL);
  data = BattleServantData__isLogicResultAlive(ServantData, 0LL);
  if ( (data & 1) == 0 )
  {
    v42 = this->fields.data;
    if ( !v42 )
      goto LABEL_28;
    ServantData->fields.deadTurn = v42->fields.typeTurn;
  }
  BattleActionData_DamageData__addAttackSideEffectAction((BattleActionData_DamageData_o *)v19, 80, 0LL);
  if ( !v14
    || (BattleActionData__SetFuncDamageData(v14, (BattleActionData_DamageData_o *)v19, baseVals, 0LL),
        (data = (__int64)this->fields.data) == 0) )
  {
LABEL_28:
    sub_1B4D1EC(data, v15);
  }
  uniqueId = v17->fields.uniqueId;
  v44 = *(_DWORD *)(data + 196);
  IsOpponentPTUniqueID = BattleData__IsOpponentPTUniqueID((BattleData_o *)data, targetId, playerId, 0LL);
  BattleServantData__setActionHistory(ServantData, uniqueId, 1, v44, IsOpponentPTUniqueID, 0LL);
  return v14;
}


BattleActionData_o *__fastcall BattleLogicFunction__functionReplaceEnemyMember(
        BattleLogicFunction_o *this,
        FunctionEntity_o *funcEnt,
        DataVals_o *baseVals,
        int32_t funcIndex,
        const MethodInfo *method)
{
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x1
  BattleData_o *data; // x0
  struct BattleData_o *v13; // x8
  BattleData_o *v14; // x23
  System_Collections_Generic_IEnumerable_TSource__o *enemy_datalist; // x21
  BattleLogicFunction___c_c *v16; // x0
  System_Func_object__bool__o *_9__85_0; // x22
  Il2CppObject *v18; // x25
  struct BattleLogicFunction___c_StaticFields *static_fields; // x0
  int32_t v20; // w2
  const MethodInfo *v21; // x3
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
  __int64 v36; // x11
  int32_t v37; // w24
  int32_t uniqueId; // w10
  __int64 v39; // x8
  __int64 v40; // x11
  int32_t *v41; // x9
  struct System_Int32_array *v42; // x8
  unsigned __int64 v43; // x10
  unsigned __int64 v44; // x9
  int32_t *v45; // x12

  if ( (byte_49BDBA2 & 1) == 0 )
  {
    sub_1B4CF90(&BattleActionData_TypeInfo, funcEnt);
    sub_1B4CF90(&Method_System_Linq_Enumerable_Count_BattleServantData____75531144, v8);
    sub_1B4CF90(&System_Func_BattleServantData__bool__TypeInfo, v9);
    sub_1B4CF90(&Method_BattleLogicFunction___c__functionReplaceEnemyMember_b__85_0__, v10);
    sub_1B4CF90(&BattleLogicFunction___c_TypeInfo, v11);
    byte_49BDBA2 = 1;
  }
  data = this->fields.data;
  if ( !data )
    goto LABEL_61;
  data = (BattleData_o *)BattleData__getAliveFieldEnemyServantIDList(data, 0, 0LL);
  v13 = this->fields.data;
  if ( !v13 )
    goto LABEL_61;
  v14 = data;
  enemy_datalist = (System_Collections_Generic_IEnumerable_TSource__o *)v13->fields.enemy_datalist;
  v16 = BattleLogicFunction___c_TypeInfo;
  if ( !BattleLogicFunction___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BattleLogicFunction___c_TypeInfo);
    v16 = BattleLogicFunction___c_TypeInfo;
  }
  _9__85_0 = (System_Func_object__bool__o *)v16->static_fields->__9__85_0;
  if ( !_9__85_0 )
  {
    if ( !v16->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v16);
      v16 = BattleLogicFunction___c_TypeInfo;
    }
    v18 = (Il2CppObject *)v16->static_fields->__9;
    _9__85_0 = (System_Func_object__bool__o *)sub_1B4D1DC(System_Func_BattleServantData__bool__TypeInfo);
    System_Func_object__bool____ctor(
      _9__85_0,
      v18,
      Method_BattleLogicFunction___c__functionReplaceEnemyMember_b__85_0__,
      0LL);
    static_fields = BattleLogicFunction___c_TypeInfo->static_fields;
    static_fields->__9__85_0 = (struct System_Func_BattleServantData__bool__o *)_9__85_0;
    sub_1B4CF34((CGThumbnailListItem_o *)&static_fields->__9__85_0, (int32_t)_9__85_0, v20, v21);
  }
  data = (BattleData_o *)System_Linq_Enumerable__Count_object__49416428(
                           enemy_datalist,
                           (System_Func_TSource__bool__o *)_9__85_0,
                           (const MethodInfo_2F208EC *)Method_System_Linq_Enumerable_Count_BattleServantData____75531144);
  if ( (int)data < 4 )
    return 0LL;
  if ( !v14 )
    goto LABEL_61;
  if ( !v14->fields.m_CancellationTokenSource )
    return 0LL;
  v22 = (BattleActionData_o *)sub_1B4D1DC(BattleActionData_TypeInfo);
  BattleActionData___ctor(v22, 0LL);
  if ( !baseVals )
    goto LABEL_61;
  Param = DataVals__GetParam(baseVals, 47, 0, 0LL);
  data = (BattleData_o *)DataVals__GetParam(baseVals, 48, 0, 0LL);
  if ( !this->fields.data )
    goto LABEL_61;
  v24 = (int)data;
  data = (BattleData_o *)BattleData__getEnemyServantDataFromNpcId(this->fields.data, Param, 0LL);
  if ( !this->fields.data )
    goto LABEL_61;
  EnemyServantData = (BattleServantData_o *)data;
  EnemyServantDataFromNpcId = BattleData__getEnemyServantDataFromNpcId(this->fields.data, v24, 0LL);
  if ( !EnemyServantData )
  {
    data = (BattleData_o *)DataVals__GetParam(baseVals, 49, 0, 0LL);
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
    if ( v28 >= v31->max_length )
      goto LABEL_64;
    data = (BattleData_o *)BattleData__getEnemyServantData(this->fields.data, v31->m_Items[v28 + 1], 0LL);
    if ( !data )
      goto LABEL_61;
    EnemyServantData = (BattleServantData_o *)data;
    data = (BattleData_o *)BattleServantData__isDead((BattleServantData_o *)data, 0LL);
    if ( ((unsigned __int8)data & 1) != 0 )
    {
      if ( !LODWORD(v14->fields.m_CancellationTokenSource) )
        goto LABEL_64;
      data = this->fields.data;
      if ( !data )
        goto LABEL_61;
      EnemyServantData = BattleData__getEnemyServantData(data, (int32_t)v14->fields.rootfsm, 0LL);
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
    v34 = this->fields.data;
    if ( v34 )
    {
      v35 = v34->fields.e_entryid;
      if ( v35 )
      {
        v36 = *(_QWORD *)&v35->max_length;
        v37 = (int)data;
        if ( DeckIndex >= (int)v36 )
          goto LABEL_47;
        if ( DeckIndex < (unsigned int)v36 )
        {
          if ( v35->m_Items[DeckIndex + 1] == EnemyServantData->fields.uniqueId )
          {
            EnemyServantData->fields.deckIndex = (int)data;
            EnemyServantDataFromNpcId->fields.deckIndex = DeckIndex;
LABEL_54:
            v42 = v34->fields.e_entryid;
            if ( v42 )
            {
              v43 = v42->max_length;
              v44 = 0LL;
              v45 = &v42->m_Items[1];
              while ( (__int64)v44 < (int)v43 )
              {
                if ( v44 >= v43 )
                  goto LABEL_64;
                if ( v45[v44] == EnemyServantData->fields.uniqueId )
                  v45[v44] = EnemyServantDataFromNpcId->fields.uniqueId;
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
                  0LL);
                return v22;
              }
            }
            goto LABEL_61;
          }
LABEL_47:
          if ( (int)v36 >= 1 )
          {
            uniqueId = EnemyServantData->fields.uniqueId;
            v39 = 0LL;
            v40 = (unsigned int)*(_QWORD *)&v35->max_length;
            v41 = &v35->m_Items[1];
            do
            {
              if ( v41[v39] == uniqueId )
                EnemyServantData->fields.deckIndex = v39;
              ++v39;
            }
            while ( v40 != v39 );
          }
          data = (BattleData_o *)BattleServantData__getDeckIndex(EnemyServantData, 0LL);
          v34 = this->fields.data;
          EnemyServantData->fields.deckIndex = v37;
          EnemyServantDataFromNpcId->fields.deckIndex = (int)data;
          if ( !v34 )
            goto LABEL_61;
          DeckIndex = (int)data;
          goto LABEL_54;
        }
LABEL_64:
        sub_1B4D1F4(data, funcEnt);
      }
    }
LABEL_61:
    sub_1B4D1EC(data, funcEnt);
  }
  return result;
}


// local variable allocation has failed, the output may be wrong!
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

  if ( (byte_49BDBA1 & 1) == 0 )
  {
    sub_1B4CF90(&BattleActionData_TypeInfo, *(_QWORD *)&targetId);
    byte_49BDBA1 = 1;
  }
  v11 = (BattleActionData_o *)sub_1B4D1DC(BattleActionData_TypeInfo);
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
    sub_1B4D1F4(data, v12);
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
    || (BattleData__SubBuffFromPT_43219928(data, v15, 0LL), (data = this->fields.data) == 0LL) )
  {
LABEL_27:
    sub_1B4D1EC(data, v12);
  }
  BattleData__SubBuffExitSvt(data, v14, 0LL);
  return v11;
}


// local variable allocation has failed, the output may be wrong!
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

  if ( (byte_49BDBA0 & 1) == 0 )
  {
    sub_1B4CF90(&BattleActionData_TypeInfo, *(_QWORD *)&targetId);
    byte_49BDBA0 = 1;
  }
  v7 = (BattleActionData_o *)sub_1B4D1DC(BattleActionData_TypeInfo);
  BattleActionData___ctor(v7, 0LL);
  data = this->fields.data;
  if ( !data
    || (BattleData__SubBuffFromPT_43219928(data, 0LL, 0LL), (data = this->fields.data) == 0LL)
    || (BattleData__shuffleCommand(data, 0LL), (data = (BattleData_o *)this->fields.logic) == 0LL)
    || (BattleLogic__drawCommand((BattleLogic_o *)data, 0LL), (data = (BattleData_o *)this->fields.logic) == 0LL)
    || (BattleLogic__setDrawCard((BattleLogic_o *)data, 0LL), !v7) )
  {
    sub_1B4D1EC(data, v8);
  }
  v7->fields.redrawCommandCard = 1;
  return v7;
}


// local variable allocation has failed, the output may be wrong!
BattleActionData_o *__fastcall BattleLogicFunction__functionResurrection(
        BattleLogicFunction_o *this,
        int32_t targetId,
        int32_t funcIdx,
        FunctionEntity_o *funcEnt,
        DataVals_o *dataVals,
        bool isSideEffect,
        const MethodInfo *method)
{
  __int64 v13; // x1
  BattleActionData_o *v14; // x20
  __int64 v15; // x1
  BattleData_o *data; // x0
  BattleServantData_o *v17; // x22
  const MethodInfo *v18; // x7
  int32_t maxhp; // w24
  int32_t Value; // w0
  int32_t v22; // w1
  struct BattleData_o *v23; // x8
  __int64 v24; // x21
  int32_t v25; // w2
  const MethodInfo *v26; // x3
  unsigned int uniqueId; // w8
  struct System_String_o *popupText; // x1
  struct System_Int32_array *effectList; // x1
  int32_t v30; // w2
  const MethodInfo *v31; // x3

  if ( (byte_49BDBAC & 1) == 0 )
  {
    sub_1B4CF90(&BattleActionData_TypeInfo, *(_QWORD *)&targetId);
    sub_1B4CF90(&BattleActionData_BuffData_TypeInfo, v13);
    byte_49BDBAC = 1;
  }
  v14 = (BattleActionData_o *)sub_1B4D1DC(BattleActionData_TypeInfo);
  BattleActionData___ctor(v14, 0LL);
  data = this->fields.data;
  if ( !data )
    goto LABEL_22;
  data = (BattleData_o *)BattleData__getServantData(data, targetId, 0LL);
  if ( !data )
    goto LABEL_22;
  v17 = (BattleServantData_o *)data;
  data = (BattleData_o *)(*(__int64 (__fastcall **)(BattleData_o *, Il2CppClass *))&data->klass[1]._1.this_arg.bits)(
                           data,
                           data->klass[1]._1.element_class);
  if ( (int)data >= 1 )
    return BattleLogicFunction__getNoEffectObject(this, targetId, funcIdx, dataVals, isSideEffect, 0LL, 0LL, v18);
  if ( !dataVals )
    goto LABEL_22;
  maxhp = v17->fields.maxhp;
  if ( DataVals__GetValue2(dataVals, 0LL) < 1 )
    Value = DataVals__GetValue(dataVals, 0LL);
  else
    Value = DataVals__GetValue2(dataVals, 0LL) * maxhp / 1000;
  if ( Value <= 1 )
    v22 = 1;
  else
    v22 = Value;
  BattleServantData__setHp(v17, v22, 1, 0LL);
  v17->fields.status = 0;
  data = (BattleData_o *)BattleServantData__isDeadEscape(v17, 0LL);
  if ( ((unsigned __int8)data & 1) != 0 )
  {
    v23 = this->fields.data;
    if ( !v23 )
      goto LABEL_22;
    if ( v23->fields.endbattleFlg )
      v17->fields.isSystemDead = 1;
  }
  v24 = sub_1B4D1DC(BattleActionData_BuffData_TypeInfo);
  BattleActionData_BuffData___ctor((BattleActionData_BuffData_o *)v24, 0LL);
  if ( !v24 )
    goto LABEL_22;
  uniqueId = v17->fields.uniqueId;
  *(_DWORD *)(v24 + 16) = 0;
  *(_QWORD *)(v24 + 40) = uniqueId;
  if ( !funcEnt )
    goto LABEL_22;
  popupText = funcEnt->fields.popupText;
  *(_QWORD *)(v24 + 56) = popupText;
  sub_1B4CF34((CGThumbnailListItem_o *)(v24 + 56), (int32_t)popupText, v25, v26);
  *(_QWORD *)(v24 + 64) = *(_QWORD *)&funcEnt->fields.popupIconId;
  effectList = funcEnt->fields.effectList;
  *(_QWORD *)(v24 + 72) = effectList;
  sub_1B4CF34((CGThumbnailListItem_o *)(v24 + 72), (int32_t)effectList, v30, v31);
  *(_DWORD *)(v24 + 28) = 2;
  if ( !v14 )
LABEL_22:
    sub_1B4D1EC(data, v15);
  BattleActionData__setBuffData(v14, (BattleActionData_BuffData_o *)v24, 0LL, 0LL);
  return v14;
}


void __fastcall BattleLogicFunction__functionShiftServant(
        BattleLogicFunction_o *this,
        BattleActionData_o *actionData,
        BattleServantData_o *targetData,
        int32_t npcId,
        const MethodInfo *method)
{
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x22
  __int64 v12; // x0
  __int64 v13; // x1
  int32_t v14; // w1
  int32_t v15; // w2
  const MethodInfo *v16; // x3
  BattleData_o *data; // x24
  BattleActionData_SkillShiftServant_o *v18; // x23

  if ( (byte_49BDBB5 & 1) == 0 )
  {
    sub_1B4CF90(&BattleActionData_TypeInfo, actionData);
    sub_1B4CF90(&BattleActionData_SkillShiftServant_TypeInfo, v9);
    sub_1B4CF90(&StringLiteral_8569/*"MOTION_SHIFT"*/, v10);
    byte_49BDBB5 = 1;
  }
  v11 = sub_1B4D1DC(BattleActionData_TypeInfo);
  BattleActionData___ctor((BattleActionData_o *)v11, 0LL);
  if ( !targetData )
    goto LABEL_8;
  if ( !v11 )
    goto LABEL_8;
  *(_DWORD *)(v11 + 32) = targetData->fields.uniqueId;
  if ( !actionData )
    goto LABEL_8;
  *(_DWORD *)(v11 + 36) = actionData->fields.targetId;
  BattleActionData__setStateMotion((BattleActionData_o *)v11, 0LL);
  *(_BYTE *)(v11 + 243) = 1;
  v14 = StringLiteral_8569/*"MOTION_SHIFT"*/;
  *(_QWORD *)(v11 + 64) = StringLiteral_8569/*"MOTION_SHIFT"*/;
  sub_1B4CF34((CGThumbnailListItem_o *)(v11 + 64), v14, v15, v16);
  data = this->fields.data;
  v18 = (BattleActionData_SkillShiftServant_o *)sub_1B4D1DC(BattleActionData_SkillShiftServant_TypeInfo);
  BattleActionData_SkillShiftServant___ctor(v18, data, npcId, 0LL);
  if ( !v18 )
LABEL_8:
    sub_1B4D1EC(v12, v13);
  BattleActionData_ShiftServant__setBeforeSvtData((BattleActionData_ShiftServant_o *)v18, targetData, 0LL);
  BattleActionData__setShiftServant((BattleActionData_o *)v11, (BattleActionData_ShiftServant_o *)v18, 0LL);
  BattleActionData__setShiftServant(actionData, (BattleActionData_ShiftServant_o *)v18, 0LL);
  BattleActionData__AddAfterActionData(actionData, (BattleActionData_o *)v11, 1, 0LL);
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
  __int64 v16; // x1
  __int64 v17; // x1
  BattleData_o *data; // x0
  BattleServantData_o *ServantData; // x28
  BattleServantSnapShotOnBuffUpdate_o *v20; // x26
  System_Int32_array *vals; // x27
  int32_t Value; // w29
  int32_t Value2; // w22
  RemovedBuffInfo_o *v24; // x0
  int32_t v25; // w2
  const MethodInfo *v26; // x3
  const MethodInfo *v27; // x7
  struct System_Collections_Generic_List_BattleBuffData_BuffData__o *RemovedAllBuffList_k__BackingField; // x25
  BattleActionData_o *v29; // x22
  const MethodInfo *v31; // [xsp+8h] [xbp-78h]
  BattleLogicFunction_ProcListInArgs_o *v32; // [xsp+18h] [xbp-68h]

  if ( (byte_49BDB94 & 1) == 0 )
  {
    sub_1B4CF90(&BattleActionData_TypeInfo, *(_QWORD *)&targetId);
    sub_1B4CF90(&BattleServantSnapShotOnBuffUpdate_TypeInfo, v16);
    sub_1B4CF90(&Method_System_Collections_Generic_List_BattleBuffData_BuffData__get_Count__, v17);
    byte_49BDB94 = 1;
  }
  data = this->fields.data;
  if ( !data )
    goto LABEL_12;
  ServantData = BattleData__getServantData(data, targetId, 0LL);
  v20 = (BattleServantSnapShotOnBuffUpdate_o *)sub_1B4D1DC(BattleServantSnapShotOnBuffUpdate_TypeInfo);
  BattleServantSnapShotOnBuffUpdate___ctor(v20, ServantData, 0LL);
  if ( !funcEnt )
    goto LABEL_12;
  if ( !baseVals )
    goto LABEL_12;
  vals = funcEnt->fields.vals;
  Value = DataVals__GetValue(baseVals, 0LL);
  Value2 = DataVals__GetValue2(baseVals, 0LL);
  data = (BattleData_o *)DataVals__isParam(baseVals, 90, 0LL);
  if ( !ServantData
    || (v24 = BattleServantData__subBuffFromIndividualites(
                ServantData,
                vals,
                Value,
                Value2,
                1,
                (unsigned __int8)data & 1,
                0LL),
        *subBuffInfo = v24,
        sub_1B4CF34((CGThumbnailListItem_o *)subBuffInfo, (int32_t)v24, v25, v26),
        !*subBuffInfo)
    || (RemovedAllBuffList_k__BackingField = (*subBuffInfo)->fields._RemovedAllBuffList_k__BackingField) == 0LL )
  {
LABEL_12:
    sub_1B4D1EC(data, *(_QWORD *)&targetId);
  }
  if ( RemovedAllBuffList_k__BackingField->fields._size < 1 )
    return BattleLogicFunction__getNoEffectObject(this, targetId, index, baseVals, isCommandSideEffect, 0LL, 0LL, v27);
  v29 = (BattleActionData_o *)sub_1B4D1DC(BattleActionData_TypeInfo);
  BattleActionData___ctor(v29, 0LL);
  BattleLogicFunction__ApplySubBuffChanges(
    this,
    v29,
    RemovedAllBuffList_k__BackingField,
    targetId,
    v20,
    baseVals,
    index,
    isCommandSideEffect,
    v32,
    v31);
  return v29;
}


// local variable allocation has failed, the output may be wrong!
BattleActionData_o *__fastcall BattleLogicFunction__functionTransformServant(
        BattleLogicFunction_o *this,
        int32_t targetId,
        FunctionEntity_o *funcEnt,
        DataVals_o *baeVals,
        int32_t funcIndex,
        BattleLogicFunction_ProcListInArgs_o *procArgs,
        const MethodInfo *method)
{
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
  BattleLogicFunction___c__DisplayClass87_0_o *v24; // x19
  BattleData_o *data; // x0
  __int64 v26; // x1
  BattleActionData_o *v27; // x20
  BattleServantData_o *v28; // x22
  int32_t Param; // w26
  int32_t v30; // w28
  __int64 v31; // x27
  BattleServantData_array *FieldAliveLogicServantArray; // x0
  BattleLogicFunction___c_c *v33; // x8
  BattleServantData_array *v34; // x25
  System_Func_object__object__o *_9__87_0; // x20
  Il2CppObject *v36; // x29
  struct BattleLogicFunction___c_StaticFields *static_fields; // x0
  int32_t v38; // w2
  const MethodInfo *v39; // x3
  BattleLogicFunctionUtilities_FunctionProgressCache_o *v40; // x29
  BattleLogicFunctionUtilities_FunctionProgressCache_SvtCache_o *ElemByUniqueId; // x19
  BattleLogicSkill_SkillExecArgs_o *v42; // x20
  struct BattleServantSnapShot_o *Before_k__BackingField; // x8
  struct BattleServantSnapShot_o *After_k__BackingField; // x1
  int32_t v45; // w2
  const MethodInfo *v46; // x3
  struct BattleServantSnapShot_o *v47; // x8
  __int64 methodPtr_low; // x11
  BattleServantSnapShotShiftServant_o *v49; // x1
  struct BattleLogicFunctionUtilities_FunctionProgressCache_SvtCache_array *SvtCacheArray_k__BackingField; // x19
  int max_length; // w8
  BattleActionData_o *v52; // x27
  unsigned int v53; // w23
  BattleLogicFunctionUtilities_FunctionProgressCache_SvtCache_o *v54; // x22
  struct BattleServantData_o *SvtData_k__BackingField; // x8
  int32_t uniqueId; // w20
  BattleActionData_BuffData_o *v57; // x26
  BattleServantSnapShot_o *v58; // x27
  BattleServantSnapShot_o *v59; // x28
  BattleActionEffect_AddSubChangeMaxHpBuff_o *v60; // x29
  struct BattleServantData_o *v61; // x8
  System_Collections_Generic_IEnumerable_TSource__o *buffdatalist; // x20
  System_Func_object__bool__o *v63; // x21
  struct BattleServantSnapShot_o *v64; // x8
  struct BattleData_o *v65; // x8
  BattleLogicFunctionUtilities_FunctionProgressCache_SvtCache_o *v67; // [xsp+8h] [xbp-98h]
  BattleServantData_o *v68; // [xsp+10h] [xbp-90h]
  BattleLogicFunction_o *v69; // [xsp+18h] [xbp-88h]
  BattleLogicFunction___c__DisplayClass87_0_o *v70; // [xsp+28h] [xbp-78h]
  BattleActionData_o *v71; // [xsp+30h] [xbp-70h]

  if ( (byte_49BDBA4 & 1) == 0 )
  {
    sub_1B4CF90(&BattleActionEffect_AddSubChangeMaxHpBuff_TypeInfo, *(_QWORD *)&targetId);
    sub_1B4CF90(&BattleActionData_TypeInfo, v11);
    sub_1B4CF90(&BattleServantSnapShotShiftServant_TypeInfo, v12);
    sub_1B4CF90(&BattleActionData_BuffData_TypeInfo, v13);
    sub_1B4CF90(&Method_System_Linq_Enumerable_FirstOrDefault_BattleActionData_BuffData___, v14);
    sub_1B4CF90(&System_Func_BattleServantData__BattleServantSnapShot__TypeInfo, v15);
    sub_1B4CF90(&System_Func_BattleActionData_BuffData__bool__TypeInfo, v16);
    sub_1B4CF90(&BattleLogicFunctionUtilities_FunctionProgressCache_TypeInfo, v17);
    sub_1B4CF90(&BattleActionData_ShiftServant_TypeInfo, v18);
    sub_1B4CF90(&BattleLogicSkill_SkillExecArgs_TypeInfo, v19);
    sub_1B4CF90(&Method_BattleLogicFunction___c__functionTransformServant_b__87_0__, v20);
    sub_1B4CF90(&Method_BattleLogicFunction___c__DisplayClass87_0__functionTransformServant_b__1__, v21);
    sub_1B4CF90(&BattleLogicFunction___c__DisplayClass87_0_TypeInfo, v22);
    sub_1B4CF90(&BattleLogicFunction___c_TypeInfo, v23);
    byte_49BDBA4 = 1;
  }
  v24 = (BattleLogicFunction___c__DisplayClass87_0_o *)sub_1B4D1DC(BattleLogicFunction___c__DisplayClass87_0_TypeInfo);
  BattleLogicFunction___c__DisplayClass87_0___ctor(v24, 0LL);
  if ( !v24 )
    goto LABEL_49;
  v24->fields.targetId = targetId;
  v27 = (BattleActionData_o *)sub_1B4D1DC(BattleActionData_TypeInfo);
  BattleActionData___ctor(v27, 0LL);
  data = this->fields.data;
  if ( !data )
    goto LABEL_49;
  data = (BattleData_o *)BattleData__getServantData(data, v24->fields.targetId, 0LL);
  if ( !baeVals )
    goto LABEL_49;
  v28 = (BattleServantData_o *)data;
  Param = DataVals__GetParam(baeVals, 6, 0, 0LL);
  v30 = DataVals__GetParam(baeVals, 77, 0, 0LL);
  data = (BattleData_o *)DataVals__IsCancelTransform(baeVals, 0LL);
  if ( ((unsigned __int8)data & 1) != 0 )
  {
    if ( !v28 )
      goto LABEL_49;
    if ( BattleServantData__get_isTransformed(v28, 0LL) )
      Param = -1;
  }
  v70 = v24;
  v31 = sub_1B4D1DC(BattleActionData_ShiftServant_TypeInfo);
  BattleActionData_ShiftServant___ctor((BattleActionData_ShiftServant_o *)v31, funcIndex, 0LL);
  if ( !v31 )
    goto LABEL_49;
  BattleActionData_ShiftServant__setBeforeSvtData((BattleActionData_ShiftServant_o *)v31, v28, 0LL);
  if ( !v27 )
    goto LABEL_49;
  BattleActionData__setShiftServant(v27, (BattleActionData_ShiftServant_o *)v31, 0LL);
  if ( !v28 )
    goto LABEL_49;
  v28->fields.shiftNpcId = -1;
  v28->fields.beforeUserSvtId = -1LL;
  data = this->fields.data;
  if ( !data )
    goto LABEL_49;
  FieldAliveLogicServantArray = BattleData__GetFieldAliveLogicServantArray(data, 3, 0, 0LL);
  v33 = BattleLogicFunction___c_TypeInfo;
  v34 = FieldAliveLogicServantArray;
  if ( !BattleLogicFunction___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BattleLogicFunction___c_TypeInfo);
    v33 = BattleLogicFunction___c_TypeInfo;
  }
  v71 = v27;
  _9__87_0 = (System_Func_object__object__o *)v33->static_fields->__9__87_0;
  if ( !_9__87_0 )
  {
    if ( !v33->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v33);
      v33 = BattleLogicFunction___c_TypeInfo;
    }
    v36 = (Il2CppObject *)v33->static_fields->__9;
    _9__87_0 = (System_Func_object__object__o *)sub_1B4D1DC(System_Func_BattleServantData__BattleServantSnapShot__TypeInfo);
    System_Func_object__object____ctor(
      _9__87_0,
      v36,
      Method_BattleLogicFunction___c__functionTransformServant_b__87_0__,
      0LL);
    static_fields = BattleLogicFunction___c_TypeInfo->static_fields;
    static_fields->__9__87_0 = (struct System_Func_BattleServantData__BattleServantSnapShot__o *)_9__87_0;
    sub_1B4CF34((CGThumbnailListItem_o *)&static_fields->__9__87_0, (int32_t)_9__87_0, v38, v39);
  }
  v40 = (BattleLogicFunctionUtilities_FunctionProgressCache_o *)sub_1B4D1DC(BattleLogicFunctionUtilities_FunctionProgressCache_TypeInfo);
  BattleLogicFunctionUtilities_FunctionProgressCache___ctor(
    v40,
    v34,
    (System_Func_BattleServantData__BattleServantSnapShot__o *)_9__87_0,
    0LL);
  if ( !v40 )
    goto LABEL_49;
  BattleLogicFunctionUtilities_FunctionProgressCache__MakeBeforeSvtCache(v40, 0LL);
  ElemByUniqueId = BattleLogicFunctionUtilities_FunctionProgressCache__GetElemByUniqueId(v40, v24->fields.targetId, 0LL);
  v42 = (BattleLogicSkill_SkillExecArgs_o *)sub_1B4D1DC(BattleLogicSkill_SkillExecArgs_TypeInfo);
  BattleLogicSkill_SkillExecArgs___ctor(v42, 0LL);
  BattleServantData__setTransformServant(v28, this->fields.data, Param, v30, 0, v42, 0LL);
  if ( !ElemByUniqueId )
    goto LABEL_49;
  Before_k__BackingField = ElemByUniqueId->fields._Before_k__BackingField;
  if ( !Before_k__BackingField )
    goto LABEL_49;
  BattleServantData__CheckUpdateUpDownOnlyResultHp(v28, Before_k__BackingField->fields._MaxHp_k__BackingField, 1, 0LL);
  BattleLogicFunctionUtilities_FunctionProgressCache__MakeAfterSvtCache(v40, 0LL);
  After_k__BackingField = ElemByUniqueId->fields._After_k__BackingField;
  *(_QWORD *)(v31 + 72) = After_k__BackingField;
  sub_1B4CF34((CGThumbnailListItem_o *)(v31 + 72), (int32_t)After_k__BackingField, v45, v46);
  v47 = ElemByUniqueId->fields._Before_k__BackingField;
  v67 = ElemByUniqueId;
  if ( !v47 )
    goto LABEL_25;
  methodPtr_low = LOBYTE(BattleServantSnapShotShiftServant_TypeInfo->vtable._0_Equals.methodPtr);
  if ( LOBYTE(v47->klass->vtable._0_Equals.methodPtr) >= (unsigned int)methodPtr_low )
    v49 = (BattleServantSnapShotShiftServant_c *)v47->klass->_2.typeHierarchy[methodPtr_low - 1] == BattleServantSnapShotShiftServant_TypeInfo
        ? (BattleServantSnapShotShiftServant_o *)ElemByUniqueId->fields._Before_k__BackingField
        : 0LL;
  else
LABEL_25:
    v49 = 0LL;
  v69 = this;
  BattleServantData__ApplyCacheForTransformServant(v28, v49, 0LL);
  SvtCacheArray_k__BackingField = v40->fields._SvtCacheArray_k__BackingField;
  if ( !SvtCacheArray_k__BackingField )
LABEL_49:
    sub_1B4D1EC(data, v26);
  max_length = SvtCacheArray_k__BackingField->max_length;
  v52 = v71;
  v68 = v28;
  if ( max_length >= 1 )
  {
    v53 = 0;
    do
    {
      if ( v53 >= max_length )
        sub_1B4D1F4(data, v26);
      v54 = SvtCacheArray_k__BackingField->m_Items[v53];
      if ( !v54 )
        goto LABEL_49;
      SvtData_k__BackingField = v54->fields._SvtData_k__BackingField;
      if ( !SvtData_k__BackingField )
        goto LABEL_49;
      uniqueId = SvtData_k__BackingField->fields.uniqueId;
      v57 = (BattleActionData_BuffData_o *)sub_1B4D1DC(BattleActionData_BuffData_TypeInfo);
      BattleActionData_BuffData___ctor(v57, 0LL);
      if ( !v57 )
        goto LABEL_49;
      v57->fields.targetId = uniqueId;
      v57->fields.isHideEffect = 1;
      v57->fields.functionIndex = funcIndex;
      v58 = v54->fields._Before_k__BackingField;
      v59 = v54->fields._After_k__BackingField;
      v60 = (BattleActionEffect_AddSubChangeMaxHpBuff_o *)sub_1B4D1DC(BattleActionEffect_AddSubChangeMaxHpBuff_TypeInfo);
      BattleActionEffect_AddSubChangeMaxHpBuff___ctor(v60, uniqueId, v58, v59, 0LL);
      BattleActionData_BuffData__SetActionEffectProc(v57, (BattleActionEffect_Base_o *)v60, 0LL);
      v61 = v54->fields._SvtData_k__BackingField;
      if ( !v61 )
        goto LABEL_49;
      BattleActionData_BuffData__setSaveNp(v57, v61->fields.np, 0LL);
      v52 = v71;
      BattleActionData__setBuffData(v71, v57, 0LL, 0LL);
      max_length = SvtCacheArray_k__BackingField->max_length;
    }
    while ( (int)++v53 < max_length );
  }
  BattleActionData__addReflectLogicResultServantId(v52, v70->fields.targetId, 0LL);
  buffdatalist = (System_Collections_Generic_IEnumerable_TSource__o *)v52->fields.buffdatalist;
  v63 = (System_Func_object__bool__o *)sub_1B4D1DC(System_Func_BattleActionData_BuffData__bool__TypeInfo);
  System_Func_object__bool____ctor(
    v63,
    (Il2CppObject *)v70,
    Method_BattleLogicFunction___c__DisplayClass87_0__functionTransformServant_b__1__,
    0LL);
  data = (BattleData_o *)System_Linq_Enumerable__FirstOrDefault_object__49446844(
                           buffdatalist,
                           (System_Func_TSource__bool__o *)v63,
                           (const MethodInfo_2F27FBC *)Method_System_Linq_Enumerable_FirstOrDefault_BattleActionData_BuffData___);
  if ( !procArgs )
    goto LABEL_49;
  if ( !procArgs->fields._IsTreasureDvc_k__BackingField )
  {
    if ( !data )
      goto LABEL_46;
    LODWORD(v26) = v68->fields.nexttpturn;
LABEL_45:
    BattleActionData_BuffData__SetSaveTpTurn((BattleActionData_BuffData_o *)data, v26, 0LL);
    goto LABEL_46;
  }
  v64 = v67->fields._Before_k__BackingField;
  if ( !v64 )
    goto LABEL_49;
  v26 = (unsigned int)(v68->fields.maxtpturn - v64->fields._MaxTpTurn_k__BackingField + v68->fields.nexttpturn);
  v68->fields.nexttpturn = v26;
  if ( data )
    goto LABEL_45;
LABEL_46:
  v65 = v69->fields.data;
  if ( !v65 )
    goto LABEL_49;
  data = (BattleData_o *)v65->fields._FieldEnvData_k__BackingField;
  if ( !data )
    goto LABEL_49;
  BattleFieldEnvironmentData__RemoveBgmNotExistsChangeBgmBuff((BattleFieldEnvironmentData_o *)data, 0LL);
  return v52;
}


// local variable allocation has failed, the output may be wrong!
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
  __int64 v15; // x1
  __int64 v16; // x1
  __int64 v17; // x1
  __int64 v18; // x1
  __int64 v19; // x1
  __int64 v20; // x1
  __int64 v21; // x1
  BattleActionData_o *v22; // x28
  __int64 v23; // x1
  __int64 data; // x0
  BattleServantData_o *v25; // x29
  BattleServantData_o *v26; // x23
  System_Int32_array *FixDamageRates; // x26
  __int64 v28; // x24
  int32_t Param; // w0
  int Random; // w27
  BattleServantData_o *v31; // x19
  int IsIgnoreShiftSafeDamage; // w26
  BattleActionData_o *v33; // x29
  struct BattleSkillInfoData_o *skillInfo; // x8
  DataMasterBase_TMaster__TEntity__PKType__o *v35; // x28
  BattleActionData_o *v36; // x28
  int v37; // w26
  int32_t v38; // w2
  const MethodInfo *v39; // x3
  int32_t v40; // w8
  __int64 v41; // x0
  int32_t v42; // w2
  const MethodInfo *v43; // x3
  __int64 v44; // x0
  int32_t v45; // w2
  const MethodInfo *v46; // x3
  System_Int32_array *v47; // x0
  int32_t v48; // w2
  const MethodInfo *v49; // x3
  __int64 v50; // x0
  int32_t v51; // w2
  const MethodInfo *v52; // x3
  __int64 v53; // x0
  int32_t v54; // w2
  const MethodInfo *v55; // x3
  __int64 v56; // x0
  int32_t v57; // w2
  const MethodInfo *v58; // x3
  struct BattleData_o *v59; // x8
  int32_t v60; // w21
  bool IsOpponentPTUniqueID; // w0
  bool v63; // [xsp+14h] [xbp-8Ch]
  int32_t v64; // [xsp+18h] [xbp-88h]
  int32_t v65; // [xsp+1Ch] [xbp-84h]
  Il2CppObject *entity; // [xsp+20h] [xbp-80h] BYREF
  bool minimumDamageFlg; // [xsp+28h] [xbp-78h] BYREF
  float damage; // [xsp+2Ch] [xbp-74h] BYREF
  System_Collections_Generic_List_int__o *v69; // [xsp+30h] [xbp-70h] BYREF
  int32_t hitStat; // [xsp+3Ch] [xbp-64h] BYREF

  if ( (byte_49BDBAB & 1) == 0 )
  {
    sub_1B4CF90(&BattleActionData_TypeInfo, *(_QWORD *)&playerId);
    sub_1B4CF90(&BattleActionData_DamageValueFuncDamageData_TypeInfo, v15);
    sub_1B4CF90(&Method_DataManager_GetMaster_SkillMaster___, v16);
    sub_1B4CF90(&DataManager_TypeInfo, v17);
    sub_1B4CF90(&Method_DataMasterBase_SkillMaster__SkillEntity__int__TryGetEntity__, v18);
    sub_1B4CF90(&int___TypeInfo, v19);
    sub_1B4CF90(&Method_System_Collections_Generic_List_int__ToArray__, v20);
    sub_1B4CF90(&BattleBuffData_ShowBuffData___TypeInfo, v21);
    byte_49BDBAB = 1;
  }
  v69 = 0LL;
  damage = 0.0;
  minimumDamageFlg = 0;
  entity = 0LL;
  v22 = (BattleActionData_o *)sub_1B4D1DC(BattleActionData_TypeInfo);
  BattleActionData___ctor(v22, 0LL);
  data = (__int64)this->fields.data;
  if ( !data )
    goto LABEL_53;
  data = (__int64)BattleData__getServantData((BattleData_o *)data, playerId, 0LL);
  if ( !this->fields.data )
    goto LABEL_53;
  v25 = (BattleServantData_o *)data;
  v63 = safe;
  v64 = playerId;
  v65 = funcIndex;
  data = (__int64)BattleData__getServantData(this->fields.data, targetId, 0LL);
  if ( !baseVals )
    goto LABEL_53;
  v26 = (BattleServantData_o *)data;
  FixDamageRates = DataVals__GetFixDamageRates(baseVals, 0LL);
  v28 = sub_1B4D1DC(BattleActionData_DamageValueFuncDamageData_TypeInfo);
  BattleActionData_DamageValueFuncDamageData___ctor(
    (BattleActionData_DamageValueFuncDamageData_o *)v28,
    FixDamageRates,
    0LL);
  LODWORD(FixDamageRates) = DataVals__GetValue(baseVals, 0LL);
  Param = DataVals__GetParam(baseVals, 4, 0, 0LL);
  Random = BattleRandom__getRandom((int32_t)FixDamageRates, Param + 1, 0LL);
  hitStat = 0;
  data = DataVals__IsActNoDamageBuff(baseVals, 0LL);
  if ( (data & 1) != 0 )
  {
    if ( !v26 )
      goto LABEL_53;
    BattleServantData__CheckNoDamageBuff(
      v26,
      this->fields.data,
      v25,
      0LL,
      (BattleActionData_DamageData_o *)v28,
      mainAction,
      0LL);
    damage = (float)Random;
    minimumDamageFlg = 1;
    v31 = v25;
    BattleServantData__CheckInvincibleAvoidanceBuff(
      v26,
      this->fields.data,
      v25,
      0LL,
      (BattleActionData_DamageData_o *)v28,
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
    v31 = v25;
  }
  IsIgnoreShiftSafeDamage = DataVals__IsIgnoreShiftSafeDamage(baseVals, 0LL);
  v33 = mainAction ? v22 : 0LL;
  if ( mainAction && mainAction->fields.skillInfo )
  {
    if ( !DataManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
    data = (__int64)DataManager__GetMaster_object_((const MethodInfo_2F01AD0 *)Method_DataManager_GetMaster_SkillMaster___);
    skillInfo = mainAction->fields.skillInfo;
    if ( !skillInfo )
      goto LABEL_53;
    v35 = (DataMasterBase_TMaster__TEntity__PKType__o *)data;
    data = ((__int64 (__fastcall *)(struct BattleSkillInfoData_o *, Il2CppMethodPointer))skillInfo->klass->vtable._5_get_skillId.method)(
             mainAction->fields.skillInfo,
             skillInfo->klass->vtable._6_get_IndividualityArray.methodPtr);
    if ( !v35 )
      goto LABEL_53;
    if ( DataMasterBase_object__object__int___TryGetEntity(
           v35,
           &entity,
           data,
           (const MethodInfo_319D9E8 *)Method_DataMasterBase_SkillMaster__SkillEntity__int__TryGetEntity__) )
    {
      data = (__int64)entity;
      if ( !entity )
        goto LABEL_53;
      IsIgnoreShiftSafeDamage |= SkillEntity__IsCheckUpdateShiftServant((SkillEntity_o *)entity, 0LL);
    }
  }
  else
  {
    v33 = v22;
  }
  data = (__int64)this->fields.data;
  if ( !data )
    goto LABEL_53;
  data = BattleData__IsDeadOkTurn((BattleData_o *)data, targetId, 0LL);
  v36 = (data & 1) != 0 ? 0LL : v33;
  if ( (((unsigned __int8)data | (unsigned __int8)IsIgnoreShiftSafeDamage) & 1) != 0 )
  {
    if ( v63 )
    {
      if ( !v26 )
        goto LABEL_53;
      data = ((__int64 (__fastcall *)(BattleServantData_o *, Il2CppMethodPointer))v26->klass->vtable._13_get_resultHp.method)(
               v26,
               v26->klass->vtable._14_set_resultHp.methodPtr);
      if ( (int)data - Random <= 0 )
      {
        data = ((__int64 (__fastcall *)(BattleServantData_o *, Il2CppMethodPointer))v26->klass->vtable._13_get_resultHp.method)(
                 v26,
                 v26->klass->vtable._14_set_resultHp.methodPtr);
        Random = data - 1;
      }
    }
    v36 = v33;
  }
  else
  {
    if ( !v26 )
      goto LABEL_53;
    v37 = ((__int64 (__fastcall *)(BattleServantData_o *, Il2CppMethodPointer))v26->klass->vtable._9_get_hp.method)(
            v26,
            v26->klass->vtable._10_set_hp.methodPtr);
    data = ((__int64 (__fastcall *)(BattleServantData_o *, Il2CppMethodPointer))v26->klass->vtable._11_get_reducedhp.method)(
             v26,
             v26->klass->vtable._12_set_reducedhp.methodPtr);
    if ( v37 - (int)data >= 1 && v37 - (int)data < Random )
      Random = v37 - data - 1;
  }
  if ( !v28 )
    goto LABEL_53;
  *(_DWORD *)(v28 + 28) = targetId;
  *(_DWORD *)(v28 + 16) = v65;
  data = (__int64)baseVals->fields.funcEnt;
  if ( !data )
    goto LABEL_53;
  data = (__int64)FunctionEntity__getEffectList((FunctionEntity_o *)data, 0LL);
  if ( !data )
    goto LABEL_53;
  if ( *(_QWORD *)(data + 24) )
  {
    *(_QWORD *)(v28 + 136) = data;
    sub_1B4CF34((CGThumbnailListItem_o *)(v28 + 136), data, v38, v39);
  }
  *(_WORD *)(v28 + 32) = 0;
  *(_BYTE *)(v28 + 34) = 0;
  v40 = hitStat;
  *(_BYTE *)(v28 + 40) = 0;
  *(_DWORD *)(v28 + 36) = v40;
  v41 = sub_1B4D038(BattleBuffData_ShowBuffData___TypeInfo, 0LL);
  *(_QWORD *)(v28 + 64) = v41;
  sub_1B4CF34((CGThumbnailListItem_o *)(v28 + 64), v41, v42, v43);
  v44 = sub_1B4D038(BattleBuffData_ShowBuffData___TypeInfo, 0LL);
  *(_QWORD *)(v28 + 72) = v44;
  sub_1B4CF34((CGThumbnailListItem_o *)(v28 + 72), v44, v45, v46);
  (*(void (__fastcall **)(__int64, System_Collections_Generic_List_int__o **, _QWORD, _QWORD, _QWORD))(*(_QWORD *)v28 + 376LL))(
    v28,
    &v69,
    (unsigned int)Random,
    0LL,
    *(_QWORD *)(*(_QWORD *)v28 + 384LL));
  data = (__int64)v69;
  if ( !v69 )
    goto LABEL_53;
  v47 = System_Collections_Generic_List_int___ToArray(
          v69,
          (const MethodInfo_3564C70 *)Method_System_Collections_Generic_List_int__ToArray__);
  *(_QWORD *)(v28 + 96) = v47;
  sub_1B4CF34((CGThumbnailListItem_o *)(v28 + 96), (int32_t)v47, v48, v49);
  v50 = sub_1B4D038(int___TypeInfo, 0LL);
  *(_QWORD *)(v28 + 104) = v50;
  sub_1B4CF34((CGThumbnailListItem_o *)(v28 + 104), v50, v51, v52);
  v53 = sub_1B4D038(int___TypeInfo, 0LL);
  *(_QWORD *)(v28 + 112) = v53;
  sub_1B4CF34((CGThumbnailListItem_o *)(v28 + 112), v53, v54, v55);
  v56 = sub_1B4D038(int___TypeInfo, 0LL);
  *(_QWORD *)(v28 + 120) = v56;
  sub_1B4CF34((CGThumbnailListItem_o *)(v28 + 120), v56, v57, v58);
  if ( !v26 )
    goto LABEL_53;
  BattleServantData__provisionalDamage(v26, Random, 0LL);
  BattleServantData__ResultDamage(v26, Random, v31, 0LL, 0LL, 0, 0LL);
  data = BattleServantData__isLogicResultAlive(v26, 0LL);
  if ( (data & 1) == 0 )
  {
    v59 = this->fields.data;
    if ( !v59 )
      goto LABEL_53;
    v26->fields.deadTurn = v59->fields.typeTurn;
  }
  data = DataVals__IsActAttackFunction(baseVals, 0LL);
  if ( (data & 1) != 0 )
    BattleActionData_DamageData__addAttackSideEffectAction((BattleActionData_DamageData_o *)v28, 80, 0LL);
  if ( !v36
    || (BattleActionData__SetFuncDamageData(v36, (BattleActionData_DamageData_o *)v28, baseVals, 0LL),
        (data = (__int64)this->fields.data) == 0) )
  {
LABEL_53:
    sub_1B4D1EC(data, v23);
  }
  v60 = *(_DWORD *)(data + 196);
  IsOpponentPTUniqueID = BattleData__IsOpponentPTUniqueID((BattleData_o *)data, targetId, v64, 0LL);
  BattleServantData__setActionHistory(v26, v64, 7, v60, IsOpponentPTUniqueID, 0LL);
  return v36;
}


// local variable allocation has failed, the output may be wrong!
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
  __int64 v20; // x1
  __int64 v21; // x1
  __int64 v22; // x1
  __int64 v23; // x1
  __int64 v24; // x1
  BattleActionData_o *v25; // x21
  __int64 v26; // x1
  __int64 data; // x0
  int Random; // w27
  BattleServantData_o *v29; // x24
  int v30; // w23
  int32_t Param; // w0
  _BOOL8 IsDeadOkTurn; // x0
  const MethodInfo *v33; // x6
  BattleActionData_BuffData_o *v34; // x29
  BattleServantData_o *v35; // x28
  __int64 v36; // x25
  int32_t v37; // w2
  const MethodInfo *v38; // x3
  long double inited; // q0
  struct BattleBuffData_o *buffData; // x8
  _QWORD *v41; // x23
  __int64 v42; // x8
  __int64 v43; // x0
  __int64 v44; // x0
  __int64 *v45; // x8
  __int64 v46; // x23
  int32_t v47; // w2
  const MethodInfo *v48; // x3
  int32_t v49; // w2
  const MethodInfo *v50; // x3
  long double v51; // q0
  _QWORD *v52; // x23
  __int64 v53; // x8
  __int64 v54; // x0
  __int64 v55; // x0
  __int64 *v56; // x8
  __int64 v57; // x23
  int32_t v58; // w2
  const MethodInfo *v59; // x3
  int32_t v60; // w2
  const MethodInfo *v61; // x3
  struct BattleBuffData_o *v62; // x8
  CGThumbnailListItem_o *p_invalidLossHpData; // x0
  int32_t v64; // w1
  bool v65; // w25
  UnityEngine_Object_o *logic; // x23
  int32_t Wave; // w23
  bool IsOpponentPTUniqueID; // w0
  BattleActionEffect_LossHPFunc_o *v69; // x23
  BattleActionData_BuffData_o *v70; // x0
  struct BattleBuffData_o *v71; // x8
  int32_t v72; // w0
  int32_t v74; // [xsp+18h] [xbp-78h]
  int32_t v75; // [xsp+1Ch] [xbp-74h]
  bool v76; // [xsp+20h] [xbp-70h]
  bool v77; // [xsp+24h] [xbp-6Ch]
  bool minimumDamageFlg; // [xsp+28h] [xbp-68h] BYREF
  float damage; // [xsp+2Ch] [xbp-64h] BYREF

  if ( (byte_49BDB9C & 1) == 0 )
  {
    sub_1B4CF90(&Method_System_Array_Empty_int___, *(_QWORD *)&playerId);
    sub_1B4CF90(&Method_System_Array_Empty_BattleBuffData_ShowBuffData___, v20);
    sub_1B4CF90(&BattleActionData_TypeInfo, v21);
    sub_1B4CF90(&BattleActionData_DamageData_TypeInfo, v22);
    sub_1B4CF90(&BattleActionEffect_LossHPFunc_TypeInfo, v23);
    sub_1B4CF90(&UnityEngine_Object_TypeInfo, v24);
    byte_49BDB9C = 1;
  }
  damage = 0.0;
  minimumDamageFlg = 0;
  v25 = (BattleActionData_o *)sub_1B4D1DC(BattleActionData_TypeInfo);
  BattleActionData___ctor(v25, 0LL);
  data = (__int64)this->fields.data;
  if ( !data )
    goto LABEL_67;
  v77 = safe;
  data = (__int64)BattleData__getServantData((BattleData_o *)data, targetId, 0LL);
  if ( !data )
    goto LABEL_67;
  Random = overwriteLossHp;
  v29 = (BattleServantData_o *)data;
  data = (*(__int64 (__fastcall **)(__int64, _QWORD))(*(_QWORD *)data + 520LL))(
           data,
           *(_QWORD *)(*(_QWORD *)data + 528LL));
  v30 = data;
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
  if ( v30 < 1 )
    return 0LL;
  data = (__int64)this->fields.data;
  if ( !data )
    goto LABEL_67;
  IsDeadOkTurn = BattleData__IsDeadOkTurn((BattleData_o *)data, targetId, 0LL);
  v75 = funcIndex;
  v76 = IsDeadOkTurn;
  data = (__int64)BattleLogicFunction__getFunctionObject(
                    (BattleLogicFunction_o *)IsDeadOkTurn,
                    funcEnt,
                    v29->fields.uniqueId,
                    funcIndex,
                    isCommandSideEffect,
                    0LL,
                    v33);
  if ( !this->fields.data )
    goto LABEL_67;
  v34 = (BattleActionData_BuffData_o *)data;
  data = (__int64)BattleData__getServantData(this->fields.data, playerId, 0LL);
  if ( !baseVals )
    goto LABEL_67;
  v35 = (BattleServantData_o *)data;
  v74 = v30;
  if ( DataVals__IsActNoDamageBuff(baseVals, 0LL) )
  {
    v36 = sub_1B4D1DC(BattleActionData_DamageData_TypeInfo);
    BattleActionData_DamageData___ctor((BattleActionData_DamageData_o *)v36, 0LL);
    BattleServantData__CheckNoDamageBuff(
      v29,
      this->fields.data,
      v35,
      0LL,
      (BattleActionData_DamageData_o *)v36,
      mainAction,
      0LL);
    damage = (float)Random;
    minimumDamageFlg = 1;
    if ( !v36 )
      goto LABEL_67;
    *(_DWORD *)(v36 + 36) = 0;
    BattleServantData__CheckInvincibleAvoidanceBuff(
      v29,
      this->fields.data,
      v35,
      0LL,
      (BattleActionData_DamageData_o *)v36,
      &damage,
      &minimumDamageFlg,
      (int32_t *)(v36 + 36),
      mainAction,
      0LL);
    *(float *)&inited = damage;
    buffData = v29->fields.buffData;
    if ( damage <= 0.0 )
      Random = 0;
    if ( !buffData )
      goto LABEL_67;
    if ( buffData->fields.isNoDamage )
    {
      v41 = Method_System_Array_Empty_BattleBuffData_ShowBuffData___;
      v42 = *((_QWORD *)Method_System_Array_Empty_BattleBuffData_ShowBuffData___ + 7);
      if ( !v42 )
      {
        sub_1B9D67C(Method_System_Array_Empty_BattleBuffData_ShowBuffData___);
        v42 = v41[7];
      }
      v43 = *(_QWORD *)(v42 + 16);
      if ( (*(_BYTE *)(v43 + 309) & 1) == 0 )
        v43 = sub_1B9D620(inited);
      if ( !*(_DWORD *)(v43 + 224) )
        inited = j_il2cpp_runtime_class_init_0(v43);
      v44 = *(_QWORD *)(v41[7] + 16LL);
      if ( (*(_BYTE *)(v44 + 309) & 1) == 0 )
        v44 = sub_1B9D620(inited);
      v45 = *(__int64 **)(v44 + 184);
      v46 = *v45;
      *(_QWORD *)(v36 + 72) = *v45;
      sub_1B4CF34((CGThumbnailListItem_o *)(v36 + 72), v46, v37, v38);
      *(_QWORD *)(v36 + 64) = v46;
      sub_1B4CF34((CGThumbnailListItem_o *)(v36 + 64), v46, v47, v48);
      v52 = Method_System_Array_Empty_int___;
      v53 = *((_QWORD *)Method_System_Array_Empty_int___ + 7);
      if ( !v53 )
      {
        sub_1B9D67C(Method_System_Array_Empty_int___);
        v53 = v52[7];
      }
      v54 = *(_QWORD *)(v53 + 16);
      if ( (*(_BYTE *)(v54 + 309) & 1) == 0 )
        v54 = sub_1B9D620(v51);
      if ( !*(_DWORD *)(v54 + 224) )
        v51 = j_il2cpp_runtime_class_init_0(v54);
      v55 = *(_QWORD *)(v52[7] + 16LL);
      if ( (*(_BYTE *)(v55 + 309) & 1) == 0 )
        v55 = sub_1B9D620(v51);
      v56 = *(__int64 **)(v55 + 184);
      v57 = *v56;
      *(_QWORD *)(v36 + 120) = *v56;
      sub_1B4CF34((CGThumbnailListItem_o *)(v36 + 120), v57, v49, v50);
      *(_QWORD *)(v36 + 112) = v57;
      sub_1B4CF34((CGThumbnailListItem_o *)(v36 + 112), v57, v58, v59);
      *(_QWORD *)(v36 + 104) = v57;
      sub_1B4CF34((CGThumbnailListItem_o *)(v36 + 104), v57, v60, v61);
      v62 = v29->fields.buffData;
      if ( !v62 )
        goto LABEL_67;
      *(_BYTE *)(v36 + 53) = v62->fields.isNoDamage;
      if ( !v34 )
        goto LABEL_67;
      v34->fields.invalidLossHpData = (struct BattleActionData_DamageData_o *)v36;
      p_invalidLossHpData = (CGThumbnailListItem_o *)&v34->fields.invalidLossHpData;
      v64 = v36;
    }
    else
    {
      if ( !v34 )
        goto LABEL_67;
      v34->fields.invalidLossHpData = 0LL;
      p_invalidLossHpData = (CGThumbnailListItem_o *)&v34->fields.invalidLossHpData;
      v64 = 0;
    }
    sub_1B4CF34(p_invalidLossHpData, v64, v37, v38);
  }
  v65 = !v76 || v77;
  BattleServantData__ResultDamage(v29, Random, v35, 0LL, 0LL, v65, 0LL);
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
        BattleServantData__setActionHistory(v29, playerId, 3, Wave, IsOpponentPTUniqueID, 0LL),
        !v34)
    || (v34->fields.procType = 2,
        v69 = (BattleActionEffect_LossHPFunc_o *)sub_1B4D1DC(BattleActionEffect_LossHPFunc_TypeInfo),
        BattleActionEffect_LossHPFunc___ctor(v69, targetId, Random, v65, 0LL),
        BattleActionData_BuffData__SetActionEffectProc(v34, (BattleActionEffect_Base_o *)v69, 0LL),
        !v25) )
  {
LABEL_67:
    sub_1B4D1EC(data, v26);
  }
  BattleActionData__setBuffData(v25, v34, baseVals, 0LL);
  data = DataVals__isLossHpChangeDamage(baseVals, 0LL);
  if ( (data & 1) != 0 )
  {
    if ( !DataVals__IsActNoDamageBuff(baseVals, 0LL) )
    {
      data = (__int64)v29->fields.buffData;
      if ( !data )
        goto LABEL_67;
      goto LABEL_61;
    }
    data = DataVals__IsActNoDamageBuff(baseVals, 0LL);
    if ( (data & 1) != 0 )
    {
      data = (__int64)v29->fields.buffData;
      if ( !data )
        goto LABEL_67;
      if ( !*(_BYTE *)(data + 152) )
      {
LABEL_61:
        v70 = BattleBuffData__UseFieldProgressingDoNotAct((BattleBuffData_o *)data, v29, v75, 0LL);
        BattleActionData__setBuffData(v25, v70, baseVals, 0LL);
      }
    }
  }
  v71 = v29->fields.buffData;
  if ( !v71 )
    goto LABEL_67;
  v71->fields.isNoDamage = 0;
  data = (__int64)this->fields.data;
  if ( !data )
    goto LABEL_67;
  if ( v29->fields.isEnemy != BattleData__isEnemyID((BattleData_o *)data, playerId, 0LL) )
  {
    v72 = ((__int64 (__fastcall *)(BattleServantData_o *, Il2CppMethodPointer))v29->klass->vtable._13_get_resultHp.method)(
            v29,
            v29->klass->vtable._14_set_resultHp.methodPtr);
    BattleServantData__procAccumulationDamage(v29, v74, v72, 0LL);
  }
  return v25;
}


FunctionMaster_o *__fastcall BattleLogicFunction__getFuncMaster(BattleLogicFunction_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  FunctionMaster_o *result; // x0
  CGThumbnailListItem_o *p_master; // x19
  FunctionMaster_o *master; // t1
  Il2CppObject *Instance; // x0
  __int64 v8; // x1
  Il2CppObject *MasterData_object; // x0
  int32_t v10; // w2
  const MethodInfo *v11; // x3

  if ( (byte_49BDB7D & 1) == 0 )
  {
    sub_1B4CF90(&Method_DataManager_GetMasterData_FunctionMaster___, method);
    sub_1B4CF90(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v3);
    byte_49BDB7D = 1;
  }
  master = this->fields.master;
  p_master = (CGThumbnailListItem_o *)&this->fields.master;
  result = master;
  if ( !master )
  {
    Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37B4410 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !Instance )
      sub_1B4D1EC(0LL, v8);
    MasterData_object = DataManager__GetMasterData_object_(
                          (DataManager_o *)Instance,
                          (const MethodInfo_2F01B24 *)Method_DataManager_GetMasterData_FunctionMaster___);
    p_master->klass = (CGThumbnailListItem_c *)MasterData_object;
    sub_1B4CF34(p_master, (int32_t)MasterData_object, v10, v11);
    return (FunctionMaster_o *)p_master->klass;
  }
  return result;
}


// local variable allocation has failed, the output may be wrong!
FunctionEntity_o *__fastcall BattleLogicFunction__getFunctionEntity(
        BattleLogicFunction_o *this,
        int32_t id,
        const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x1
  Il2CppObject *Instance; // x0
  CGThumbnailListItem_o *p_master; // x20
  struct FunctionMaster_o *master; // t1
  __int64 v10; // x1
  Il2CppObject *MasterData_object; // x0
  int32_t v12; // w2
  const MethodInfo *v13; // x3

  if ( (byte_49BDB7C & 1) == 0 )
  {
    sub_1B4CF90(&Method_DataManager_GetMasterData_FunctionMaster___, *(_QWORD *)&id);
    sub_1B4CF90(&Method_DataMasterBase_FunctionMaster__FunctionEntity__int__GetEntity__, v5);
    sub_1B4CF90(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v6);
    byte_49BDB7C = 1;
  }
  master = this->fields.master;
  p_master = (CGThumbnailListItem_o *)&this->fields.master;
  Instance = (Il2CppObject *)master;
  if ( !master )
  {
    Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37B4410 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !Instance
      || (MasterData_object = DataManager__GetMasterData_object_(
                                (DataManager_o *)Instance,
                                (const MethodInfo_2F01B24 *)Method_DataManager_GetMasterData_FunctionMaster___),
          p_master->klass = (CGThumbnailListItem_c *)MasterData_object,
          sub_1B4CF34(p_master, (int32_t)MasterData_object, v12, v13),
          (Instance = (Il2CppObject *)p_master->klass) == 0LL) )
    {
      sub_1B4D1EC(Instance, v10);
    }
  }
  return (FunctionEntity_o *)DataMasterBase_object__object__int___GetEntity(
                               (DataMasterBase_TMaster__TEntity__PKType__o *)Instance,
                               id,
                               (const MethodInfo_319D99C *)Method_DataMasterBase_FunctionMaster__FunctionEntity__int__GetEntity__);
}


// local variable allocation has failed, the output may be wrong!
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
  const MethodInfo *v15; // x3

  if ( (byte_49BDBA5 & 1) == 0 )
  {
    this = (BattleLogicFunction_o *)sub_1B4CF90(&BattleActionData_BuffData_TypeInfo, funcEnt);
    byte_49BDBA5 = 1;
  }
  if ( !defBuffData
    && (defBuffData = (BattleActionData_BuffData_o *)sub_1B4D1DC(BattleActionData_BuffData_TypeInfo),
        BattleActionData_BuffData___ctor(defBuffData, 0LL),
        !defBuffData)
    || (defBuffData->fields.targetId = uniqueId, defBuffData->fields.functionIndex = funcIndex, !funcEnt) )
  {
    sub_1B4D1EC(this, funcEnt);
  }
  popupText = funcEnt->fields.popupText;
  defBuffData->fields.popLabel = popupText;
  sub_1B4CF34(
    (CGThumbnailListItem_o *)&defBuffData->fields.popLabel,
    (int32_t)popupText,
    uniqueId,
    *(const MethodInfo **)&funcIndex);
  *(_QWORD *)&defBuffData->fields.popIcon = *(_QWORD *)&funcEnt->fields.popupIconId;
  EffectList = FunctionEntity__getEffectList(funcEnt, 0LL);
  defBuffData->fields.effectList = EffectList;
  sub_1B4CF34((CGThumbnailListItem_o *)&defBuffData->fields.effectList, (int32_t)EffectList, v14, v15);
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
  __int64 v5; // x1
  System_Collections_Generic_Dictionary_TKey__TValue__o *dicFuncProcess; // x0
  int32_t v7; // w1
  BattleLogicFunctionProcess_BaseFunctionTypeProcess_o *v8; // x20

  if ( (byte_49BDB81 & 1) == 0 )
  {
    sub_1B4CF90(
      &Method_System_Collections_Generic_Dictionary_FuncList_TYPE__BattleLogicFunctionProcess_BaseFunctionTypeProcess__ContainsKey__,
      *(_QWORD *)&functType);
    sub_1B4CF90(
      &Method_System_Collections_Generic_Dictionary_FuncList_TYPE__BattleLogicFunctionProcess_BaseFunctionTypeProcess__get_Item__,
      v5);
    byte_49BDB81 = 1;
  }
  dicFuncProcess = (System_Collections_Generic_Dictionary_TKey__TValue__o *)this->fields.dicFuncProcess;
  if ( !dicFuncProcess
    || (dicFuncProcess = (System_Collections_Generic_Dictionary_TKey__TValue__o *)System_Collections_Generic_Dictionary_Int32Enum__object___ContainsKey(
                                                                                    dicFuncProcess,
                                                                                    functType,
                                                                                    (const MethodInfo_3227A54 *)Method_System_Collections_Generic_Dictionary_FuncList_TYPE__BattleLogicFunctionProcess_BaseFunctionTypeProcess__ContainsKey__),
        !this->fields.dicFuncProcess)
    || (((unsigned __int8)dicFuncProcess & 1) == 0 ? (v7 = 0) : (v7 = functType),
        (dicFuncProcess = (System_Collections_Generic_Dictionary_TKey__TValue__o *)System_Collections_Generic_Dictionary_Int32Enum__object___get_Item(
                                                                                     (System_Collections_Generic_Dictionary_TKey__TValue__o *)this->fields.dicFuncProcess,
                                                                                     v7,
                                                                                     (const MethodInfo_32277C0 *)Method_System_Collections_Generic_Dictionary_FuncList_TYPE__BattleLogicFunctionProcess_BaseFunctionTypeProcess__get_Item__)) == 0LL) )
  {
    sub_1B4D1EC(dicFuncProcess, *(_QWORD *)&functType);
  }
  v8 = (BattleLogicFunctionProcess_BaseFunctionTypeProcess_o *)dicFuncProcess;
  if ( BattleLogicFunctionProcess_BaseFunctionTypeProcess__IsNeedInit(
         (BattleLogicFunctionProcess_BaseFunctionTypeProcess_o *)dicFuncProcess,
         this,
         0LL) )
  {
    ((void (__fastcall *)(BattleLogicFunctionProcess_BaseFunctionTypeProcess_o *, BattleLogicFunction_o *, Il2CppMethodPointer))v8->klass->vtable._4_init.method)(
      v8,
      this,
      v8->klass->vtable._5_IsPreCheckTargetsAvailable.methodPtr);
  }
  return v8;
}


// local variable allocation has failed, the output may be wrong!
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

  if ( (byte_49BDB92 & 1) == 0 )
  {
    sub_1B4CF90(&BattleActionData_TypeInfo, *(_QWORD *)&targetId);
    byte_49BDB92 = 1;
  }
  v8 = (BattleActionData_o *)sub_1B4D1DC(BattleActionData_TypeInfo);
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
    sub_1B4D1EC(GrayActionBuffData, v10);
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

  if ( !baseVals || (this = (BattleLogicFunction_o *)DataVals__isParam(baseVals, 119, 0LL), !targetSvtData) )
    sub_1B4D1EC(this, baseVals);
  if ( ((unsigned __int8)this & 1) != 0 )
    MaxHp = ((__int64 (__fastcall *)(BattleServantData_o *, Il2CppMethodPointer))targetSvtData->klass->vtable._13_get_resultHp.method)(
              targetSvtData,
              targetSvtData->klass->vtable._14_set_resultHp.methodPtr);
  else
    MaxHp = BattleServantData__getMaxHp(targetSvtData, 0LL);
  return DataVals__GetValue(baseVals, 0LL) * MaxHp / 1000;
}


// local variable allocation has failed, the output may be wrong!
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
  __int64 v18; // x1
  __int64 v19; // x1
  __int64 v20; // x1
  BattleActionData_o *v21; // x23
  int32_t v22; // w2
  const MethodInfo *v23; // x3
  __int64 v24; // x0
  __int64 v25; // x1
  __int64 v26; // x0
  int32_t v27; // w2
  const MethodInfo *v28; // x3

  v10 = defBuffData;
  if ( (byte_49BDB8E & 1) == 0 )
  {
    sub_1B4CF90(&BattleActionData_TypeInfo, *(_QWORD *)&targetId);
    sub_1B4CF90(&BattleActionData_BuffData_TypeInfo, v18);
    sub_1B4CF90(&int___TypeInfo, v19);
    sub_1B4CF90(&StringLiteral_1/*""*/, v20);
    byte_49BDB8E = 1;
  }
  v21 = (BattleActionData_o *)sub_1B4D1DC(BattleActionData_TypeInfo);
  BattleActionData___ctor(v21, 0LL);
  if ( !defBuffData )
  {
    v10 = (BattleActionData_BuffData_o *)sub_1B4D1DC(BattleActionData_BuffData_TypeInfo);
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
  sub_1B4CF34((CGThumbnailListItem_o *)&v10->fields.popLabel, (int32_t)dispName, v22, v23);
  v26 = sub_1B4D038(int___TypeInfo, 0LL);
  v10->fields.effectList = (struct System_Int32_array *)v26;
  sub_1B4CF34((CGThumbnailListItem_o *)&v10->fields.effectList, v26, v27, v28);
  if ( !v21
    || (BattleActionData__setBuffData(v21, v10, 0LL, 0LL),
        v10->fields.IsNoEffect = isNoEffect,
        v10->fields.isCommandAfter = isCommandSideEffect,
        !dataVals) )
  {
LABEL_10:
    sub_1B4D1EC(v24, v25);
  }
  v10->fields.popDelay = DataVals__GetParam(dataVals, 65, 0, 0LL);
  v21->fields.funcResult = 0;
  return v21;
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
  __int64 v16; // x1
  const MethodInfo *v17; // [xsp+8h] [xbp-48h]

  v9 = uniqueText;
  if ( (byte_49BDB8F & 1) != 0 )
  {
    if ( uniqueText )
      goto LABEL_3;
  }
  else
  {
    sub_1B4CF90(&LocalizationManager_TypeInfo, *(_QWORD *)&targetId);
    this = (BattleLogicFunction_o *)sub_1B4CF90(&StringLiteral_2808/*"BATTLE_MISS_FUNCTION"*/, v16);
    byte_49BDB8F = 1;
    if ( v9 )
    {
LABEL_3:
      if ( dataVals )
        goto LABEL_4;
LABEL_9:
      sub_1B4D1EC(this, *(_QWORD *)&targetId);
    }
  }
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  this = (BattleLogicFunction_o *)LocalizationManager__Get((System_String_o *)StringLiteral_2808/*"BATTLE_MISS_FUNCTION"*/, 0LL);
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
           v17);
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
  __int64 v16; // x1
  const MethodInfo *v17; // [xsp+8h] [xbp-48h]

  v9 = uniqueText;
  if ( (byte_49BDB90 & 1) != 0 )
  {
    if ( uniqueText )
      goto LABEL_3;
  }
  else
  {
    sub_1B4CF90(&LocalizationManager_TypeInfo, *(_QWORD *)&targetId);
    this = (BattleLogicFunction_o *)sub_1B4CF90(&StringLiteral_2819/*"BATTLE_NO_EFFECT_FUNCTION"*/, v16);
    byte_49BDB90 = 1;
    if ( v9 )
    {
LABEL_3:
      if ( dataVals )
        goto LABEL_4;
LABEL_9:
      sub_1B4D1EC(this, *(_QWORD *)&targetId);
    }
  }
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  this = (BattleLogicFunction_o *)LocalizationManager__Get((System_String_o *)StringLiteral_2819/*"BATTLE_NO_EFFECT_FUNCTION"*/, 0LL);
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
           v17);
}


System_Int32_array *__fastcall BattleLogicFunction__getTargetids(
        BattleLogicFunction_o *this,
        BattleActionData_o *mainAction,
        int32_t targetType,
        DataVals_o *dataVals,
        const MethodInfo *method)
{
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x1
  __int64 v12; // x1
  Target_BattleTargetArgs_o *args; // x23
  __int64 v14; // x0
  __int64 v15; // x1
  BattleData_o *data; // x22
  int32_t actorId; // w24
  int32_t targetId; // w25
  int32_t PTTargetId; // w0
  System_Collections_Generic_IEnumerable_TSource__o *TargetIds_38250872; // x20
  System_Func_int__bool__o *v21; // x21
  System_Collections_Generic_IEnumerable_TSource__o *v22; // x0

  if ( (byte_49BDB87 & 1) == 0 )
  {
    sub_1B4CF90(&Method_BattleLogicFunction__getTargetids_b__55_0__, mainAction);
    sub_1B4CF90(&Target_BattleTargetArgs_TypeInfo, v9);
    sub_1B4CF90(&Method_System_Linq_Enumerable_ToArray_int___, v10);
    sub_1B4CF90(&Method_System_Linq_Enumerable_Where_int___, v11);
    sub_1B4CF90(&System_Func_int__bool__TypeInfo, v12);
    byte_49BDB87 = 1;
  }
  args = (Target_BattleTargetArgs_o *)sub_1B4D1DC(Target_BattleTargetArgs_TypeInfo);
  Target_BattleTargetArgs___ctor(args, dataVals, 0LL);
  if ( !mainAction )
    sub_1B4D1EC(v14, v15);
  data = this->fields.data;
  actorId = mainAction->fields.actorId;
  targetId = mainAction->fields.targetId;
  PTTargetId = BattleActionData__getPTTargetId(mainAction, 0LL);
  TargetIds_38250872 = (System_Collections_Generic_IEnumerable_TSource__o *)Target__getTargetIds_38250872(
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
  v21 = (System_Func_int__bool__o *)sub_1B4D1DC(System_Func_int__bool__TypeInfo);
  System_Func_int__bool____ctor(v21, (Il2CppObject *)this, Method_BattleLogicFunction__getTargetids_b__55_0__, 0LL);
  v22 = System_Linq_Enumerable__Where_int_(
          TargetIds_38250872,
          (System_Func_TSource__bool__o *)v21,
          (const MethodInfo_2F42364 *)Method_System_Linq_Enumerable_Where_int___);
  return System_Linq_Enumerable__ToArray_int_(
           v22,
           (const MethodInfo_2F3C24C *)Method_System_Linq_Enumerable_ToArray_int___);
}


BattleFieldEnvironmentData_o *__fastcall BattleLogicFunction__get_FieldEnvData(
        BattleLogicFunction_o *this,
        const MethodInfo *method)
{
  struct BattleData_o *data; // x8

  data = this->fields.data;
  if ( !data )
    sub_1B4D1EC(this, method);
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
    sub_1B4D1EC(this, passive);
  v5 = passive;
  if ( DataVals__isParam(baseVals, 50, 0LL) || DataVals__isParam(baseVals, 88, 0LL) )
    return 1;
  isParam = DataVals__isParam(baseVals, 113, 0LL);
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
  BattleLogicFunction_o *v8; // x23
  int v9; // w22

  if ( !baseVals || (v8 = this, this = (BattleLogicFunction_o *)DataVals__GetParam(baseVals, 0, 0, 0LL), !args) )
    sub_1B4D1EC(this, args);
  v9 = (int)this;
  if ( !BattleLogicFunction_ProcListInArgs__DidTriggeredFuncHaveSpecifyResults(
          args,
          targetId,
          baseVals,
          v8->fields.data,
          0LL)
    || !BattleLogicFunction_ProcListInArgs__DidTriggeredFuncListHaveSpecifyResults(
          args,
          targetId,
          baseVals,
          v8->fields.data,
          0LL) )
  {
    return 1;
  }
  if ( (v9 & 0x80000000) != 0 )
    return !BattleLogicFunction_ProcListInArgs__isPrevFuncSuccess(args, targetId, baseVals->fields.funcIndex, 0LL);
  return 0;
}


bool __fastcall BattleLogicFunction__isSafeDamage(
        BattleLogicFunction_o *this,
        DataVals_o *baseVals,
        int32_t targetId,
        const MethodInfo *method)
{
  const MethodInfo *v6; // x2

  if ( !baseVals )
    sub_1B4D1EC(this, 0LL);
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
        sub_1B4D1F4(this, *(_QWORD *)&uniqueId);
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
    sub_1B4D1EC(this, *(_QWORD *)&uniqueId);
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
  __int64 v56; // x1
  __int64 v57; // x1
  __int64 v58; // x1
  __int64 v59; // x1
  __int64 v60; // x1
  __int64 v61; // x1
  __int64 v62; // x1
  __int64 v63; // x1
  BattleServantData_o *ServantData; // x29
  int32_t v65; // w2
  const MethodInfo *v66; // x3
  struct BattleData_o *data; // x8
  UnityEngine_Object_o *logic; // x24
  BattleLogicFunction_ProcListInArgs_o *v69; // x24
  WeightRate_int__o *v70; // x22
  signed int max_length; // w8
  unsigned int v72; // w26
  Il2CppClass **v73; // x8
  DataVals_o *v74; // x23
  int32_t ActSetWeight; // w25
  int32_t Random; // w0
  int32_t actSetId; // w0
  BattleLogicFunction_ProcListInArgs_o *v78; // x21
  System_Object_array *funcUnitArray_k__BackingField; // x21
  BattleLogicFunction___c_c *v80; // x0
  System_Func_object__bool__o *_9__41_0; // x22
  Il2CppObject *v82; // x23
  struct BattleLogicFunction___c_StaticFields *static_fields; // x0
  int32_t v84; // w2
  const MethodInfo *v85; // x3
  BattleLogicFunction___c_c *v86; // x0
  System_Collections_Generic_IEnumerable_TSource__o *v87; // x21
  System_Func_object__bool__o *_9__41_1; // x22
  Il2CppObject *v89; // x23
  struct BattleLogicFunction___c_StaticFields *v90; // x0
  int32_t v91; // w2
  const MethodInfo *v92; // x3
  _BOOL4 matched; // w0
  _BOOL4 v94; // w21
  bool v95; // w22
  bool IsIgnoreValueUp; // w0
  BattleData_o *v97; // x21
  SkillValueUpApplierPlayerMaster_o *v98; // x23
  struct BattleLogicFunctionProcess_FunctionUnitCheck_array *v99; // x25
  int v100; // w8
  bool v101; // w9
  BattleLogicFunction_FuncSideEffectFunctionArgument_o *v102; // x29
  unsigned int v103; // w23
  Il2CppClass **v104; // x8
  BattleLogicFunctionProcess_FunctionUnitCheck_o *v105; // x21
  DataVals_o *dataVals_k__BackingField; // x28
  const MethodInfo *v107; // x3
  const MethodInfo *v108; // x4
  BattleLogicFunction___c_c *v109; // x0
  System_Collections_Generic_IEnumerable_TSource__o *funcTargetArray_k__BackingField; // x21
  System_Func_object__bool__o *_9__41_2; // x26
  Il2CppObject *v112; // x27
  struct BattleLogicFunction___c_StaticFields *v113; // x0
  int32_t v114; // w2
  const MethodInfo *v115; // x3
  System_Collections_Generic_IEnumerable_TSource__o *v116; // x0
  BattleLogicFunction___c_c *v117; // x8
  System_Collections_Generic_IEnumerable_TSource__o *v118; // x21
  System_Func_object__int__o *_9__41_3; // x26
  Il2CppObject *v120; // x27
  struct BattleLogicFunction___c_StaticFields *v121; // x0
  int32_t v122; // w2
  const MethodInfo *v123; // x3
  System_Collections_Generic_IEnumerable_TSource__o *v124; // x0
  System_Int32_array *v125; // x21
  bool v126; // w26
  BattleLogicFunction_PreAttackSideEffectMakeArgument_o *v127; // x27
  BattleLogicFunction_SideEffectMakeArgument_o *v128; // x0
  const MethodInfo *v129; // x5
  struct BattleLogicFunctionProcess_FunctionTargetCheck_array *v130; // x23
  int v131; // w8
  int i; // w25
  BattleLogicFunctionProcess_FunctionTargetCheck_o *v133; // x27
  int32_t targetId_k__BackingField; // w21
  BattleLogicFunction_o *v135; // x26
  const MethodInfo *v136; // x7
  BattleActionData_o *NoEffectObject; // x0
  int32_t *v138; // x24
  struct System_Int32_array *vals; // x8
  int commandType; // w8
  BattleActionData_o *v141; // x0
  bool v142; // w0
  const MethodInfo *v143; // x5
  const MethodInfo *v144; // x3
  int32_t actorId; // w27
  int32_t v146; // w22
  bool isSafeDamage; // w0
  int32_t v148; // w2
  const MethodInfo *v149; // x7
  const MethodInfo *v150; // x7
  int32_t v151; // w1
  int32_t v152; // w2
  int32_t v153; // w5
  bool isDamage; // w0
  int v155; // w9
  int v156; // w8
  struct System_Int32_array *items; // x8
  _QWORD *v158; // x9
  __int64 size; // x10
  BattleActionData_o *v160; // x0
  const MethodInfo *v161; // x4
  BattleData_o *v162; // x27
  BattleLogicFunction_o *v163; // x0
  const MethodInfo *v164; // x6
  BattleData_o *v165; // x27
  const MethodInfo *v166; // x7
  bool isUnaffected; // w22
  int Value; // w27
  const MethodInfo *v169; // x7
  BattleLogicFunction_o *v170; // x0
  int32_t v171; // w22
  const MethodInfo *v172; // x6
  BattleActionData_BuffData_o *v173; // x27
  int32_t v174; // w0
  BattleLogicFunction_o *v175; // x0
  int32_t v176; // w24
  const MethodInfo *v177; // x6
  int32_t v178; // w1
  int32_t v179; // w22
  System_Int32_array *TargetList; // x27
  int32_t v181; // w0
  const MethodInfo *v182; // x6
  int32_t v183; // w22
  System_Int32_array *v184; // x27
  int32_t v185; // w0
  int32_t v186; // w2
  FunctionEntity_o *v187; // x1
  BattleActionData_BuffData_o *FunctionObject; // x0
  BattleLogicFunction_o *v189; // x0
  int32_t v190; // w1
  const MethodInfo *v191; // x3
  int32_t v192; // w22
  bool v193; // w0
  bool v194; // w8
  bool v195; // w6
  bool v196; // w7
  BattleLogicFunction_o *v197; // x0
  int32_t v198; // w1
  BattleActionData_o *v199; // x0
  const MethodInfo *v200; // x7
  const MethodInfo *v201; // x7
  const MethodInfo *v202; // x6
  int32_t v203; // w1
  FunctionEntity_o *v204; // x2
  DataVals_o *v205; // x3
  int32_t v206; // w4
  const MethodInfo *v207; // x5
  BattleActionData_o *v208; // x0
  FunctionEntity_o *v209; // x1
  FunctionEntity_o *v210; // x3
  DataVals_o *v211; // x4
  const MethodInfo *v212; // x6
  int32_t applyTarget; // w8
  FunctionEntity_o *v214; // x2
  const MethodInfo *v215; // x6
  BattleActionData_o *v216; // x0
  const MethodInfo *v217; // x5
  BattleActionData_o *v218; // x0
  FunctionEntity_o *v219; // x2
  const MethodInfo *v220; // x7
  int32_t v221; // w1
  FunctionEntity_o *v222; // x2
  DataVals_o *v223; // x3
  int32_t v224; // w4
  const MethodInfo *v225; // x5
  BattleActionData_o *v226; // x0
  FunctionEntity_o *v227; // x3
  int32_t v228; // w5
  const MethodInfo *v229; // x6
  _BOOL8 v230; // x0
  FunctionEntity_o *v231; // x2
  int32_t v232; // w4
  const MethodInfo *v233; // x5
  const MethodInfo *v234; // x3
  int32_t v235; // w22
  int32_t v236; // w27
  char v237; // w5
  const MethodInfo *v238; // x7
  BattleLogicFunction_o *v239; // x0
  int32_t v240; // w1
  int32_t v241; // w2
  int32_t v242; // w2
  const MethodInfo *v243; // x3
  struct BattleData_o *v244; // x8
  struct BattleCommandData_array *draw_commandlist; // x1
  int v246; // w22
  bool v247; // w27
  BattleServantSnapShotOnBuffUpdate_o *v248; // x24
  System_Int32_array *v249; // x0
  BattleData_o *v250; // x24
  int32_t v251; // w27
  Generator_BGMFromChangeBGMFunc_o *v252; // x22
  const MethodInfo *v253; // x4
  const MethodInfo *v254; // x6
  System_Int32_array *v255; // x27
  int32_t SameIndiualityBuffSum; // w0
  int32_t v257; // w27
  bool v258; // w4
  int32_t v259; // w2
  DataVals_o *v260; // x3
  BattleActionData_BuffData_o *v261; // x6
  const MethodInfo *v262; // x7
  int32_t v263; // w1
  int32_t v264; // w2
  int32_t v265; // w5
  const MethodInfo *v266; // x4
  const MethodInfo *v267; // x4
  _BOOL8 v268; // x0
  const MethodInfo *v269; // x3
  bool v270; // w27
  int32_t HpPerValue; // w0
  const MethodInfo *v272; // x3
  bool v273; // w2
  BattleLogicFunction_o *v274; // x0
  DataVals_o *v275; // x1
  _BOOL8 updated; // x0
  const MethodInfo *v277; // x6
  BattleActionData_MasterBuffData_o *v278; // x24
  Generator_BGFromQuickChangeBGFunc_o *v279; // x22
  const MethodInfo *v280; // x3
  int32_t Param; // w0
  const MethodInfo *v282; // x4
  BattleBuffData_o *wkStr; // x27
  BattleActionData_UpShiftGaugeData_o *v284; // x22
  const MethodInfo *v285; // x5
  DataVals_o *v286; // x3
  const MethodInfo *v287; // x5
  BattleActionData_o *SubMember; // x0
  const MethodInfo *v289; // x3
  const MethodInfo *v290; // x3
  const MethodInfo *v291; // x4
  const MethodInfo *v292; // x3
  _BOOL8 v293; // x0
  const MethodInfo *v294; // x3
  const MethodInfo *v295; // x2
  const MethodInfo *v296; // x2
  const MethodInfo *v297; // x5
  const MethodInfo *v298; // x4
  const MethodInfo *v299; // x4
  int32_t v300; // w0
  const MethodInfo *v301; // x2
  const MethodInfo *v302; // x2
  const MethodInfo *v303; // x2
  __int64 monitor_high; // x22
  int32_t v305; // w2
  const MethodInfo *v306; // x6
  float v307; // s0
  int32_t v308; // w5
  __int64 v309; // x22
  float v310; // s0
  int v311; // w8
  BattleLogicFunction_o *v312; // x0
  int32_t v313; // w22
  const MethodInfo *v314; // x6
  const MethodInfo *v315; // x4
  const MethodInfo *v316; // x4
  struct BattleData_o *v317; // x8
  UnityEngine_Object_o *perf; // x27
  struct BattleData_o *v319; // x8
  _BOOL8 v320; // x0
  const MethodInfo *v321; // x3
  _BOOL8 v322; // x0
  const MethodInfo *v323; // x3
  _BOOL8 v324; // x0
  const MethodInfo *v325; // x5
  bool v326; // w21
  BattleLogicFunction_AfterAttackSideEffectMakeArgument_o *v327; // x22
  BattleLogicFunction_SideEffectMakeArgument_o *Argument__Init; // x0
  const MethodInfo *v329; // x5
  BattleLogicFunction_o *v330; // x21
  BattleCommandData_o *v331; // x22
  UnityEngine_Object_o *v332; // x23
  struct BattleLogic_o *v333; // x8
  unsigned __int64 v334; // x23
  UnityEngine_Object_o *v335; // x21
  int v336; // w8
  BattleLogicFunction_o *v337; // x21
  unsigned int v338; // w22
  __int64 v339; // x8
  BattleLogicFunction_FuncSideEffectFunctionArgument_o *FuncSideEffectArg; // x0
  UnityEngine_Object_o *v341; // x21
  struct BattleData_o *v342; // x8
  UnityEngine_Object_o *v343; // x21
  __int64 v344; // x1
  BattleData_o *v345; // x0
  BattleServantData_o *v346; // x0
  const MethodInfo *overwriteLossHp; // [xsp+0h] [xbp-170h]
  int32_t overwriteLossHpa; // [xsp+0h] [xbp-170h]
  const MethodInfo *isRandomDamage; // [xsp+8h] [xbp-168h]
  char isRandomDamagea; // [xsp+8h] [xbp-168h]
  BattleActionData_o *mainAction; // [xsp+10h] [xbp-160h]
  const MethodInfo *v353; // [xsp+18h] [xbp-158h]
  bool isParam; // [xsp+30h] [xbp-140h]
  bool v355; // [xsp+34h] [xbp-13Ch]
  int32_t subTargetId; // [xsp+38h] [xbp-138h]
  char v357; // [xsp+3Ch] [xbp-134h]
  char v358; // [xsp+40h] [xbp-130h]
  bool v359; // [xsp+44h] [xbp-12Ch]
  System_Collections_Generic_List_int__o *v360; // [xsp+48h] [xbp-128h]
  SkillValueUpApplierPlayerMaster_o *v361; // [xsp+50h] [xbp-120h]
  struct BattleLogicFunctionProcess_FunctionUnitCheck_array *v362; // [xsp+60h] [xbp-110h]
  BattleServantData_o *actionSvtData; // [xsp+68h] [xbp-108h]
  char v364; // [xsp+70h] [xbp-100h]
  unsigned int v366; // [xsp+7Ch] [xbp-F4h]
  BattleLogicFunctionProcess_FunctionUnitCheck_o *funcUnit; // [xsp+80h] [xbp-F0h]
  Il2CppObject *MasterData_object; // [xsp+88h] [xbp-E8h]
  int32_t index; // [xsp+94h] [xbp-DCh]
  int32_t *p_funcType; // [xsp+98h] [xbp-D8h]
  FunctionEntity_o *funcEntity; // [xsp+A8h] [xbp-C8h]
  BattleLogicFunction_ProcListInArgs_o *args; // [xsp+B0h] [xbp-C0h]
  System_Collections_Generic_List_Enumerator_int__o v373; // [xsp+B8h] [xbp-B8h] BYREF
  System_Collections_Generic_List_Enumerator_int__o v374; // [xsp+D0h] [xbp-A0h] BYREF
  System_Collections_Generic_HashSet_BattleBuffData_BuffData__o *buffsToRemove; // [xsp+E8h] [xbp-88h] BYREF
  int32_t absorptionCount; // [xsp+F4h] [xbp-7Ch] BYREF
  RemovedBuffInfo_o *subBuffInfo; // [xsp+F8h] [xbp-78h] BYREF
  Il2CppObject *entity; // [xsp+100h] [xbp-70h] BYREF
  int32_t funcIndex; // [xsp+10Ch] [xbp-64h] BYREF

  v19 = action;
  v20 = this;
  if ( (byte_49BDB82 & 1) == 0 )
  {
    sub_1B4CF90(&BattleLogicFunction_AfterAttackSideEffectMakeArgument_TypeInfo, action);
    sub_1B4CF90(&Generator_BGFromQuickChangeBGFunc_TypeInfo, v21);
    sub_1B4CF90(&Generator_BGMFromChangeBGMFunc_TypeInfo, v22);
    sub_1B4CF90(&Method_BasicHelper_Any_BattleLogicFunctionProcess_FunctionUnitCheck___, v23);
    sub_1B4CF90(&BattleCommandData_TypeInfo, v24);
    sub_1B4CF90(&BattleServantSnapShotOnBuffUpdate_TypeInfo, v25);
    sub_1B4CF90(&Method_DataManager_GetMasterData_BuffMaster___, v26);
    sub_1B4CF90(&Method_DataManager_GetMasterData_SkillMaster___, v27);
    sub_1B4CF90(&Method_DataMasterBase_BuffMaster__BuffEntity__int__GetEntity__, v28);
    sub_1B4CF90(&Method_DataMasterBase_SkillMaster__SkillEntity__int__TryGetEntity__, v29);
    sub_1B4CF90(&BattleActionData_DownShiftGaugeData_TypeInfo, v30);
    sub_1B4CF90(&Method_System_Linq_Enumerable_All_BattleLogicFunctionProcess_FunctionUnitCheck___, v31);
    sub_1B4CF90(&Method_System_Linq_Enumerable_Select_BattleLogicFunctionProcess_FunctionTargetCheck__int___, v32);
    sub_1B4CF90(&Method_System_Linq_Enumerable_ToArray_int___, v33);
    sub_1B4CF90(&Method_System_Linq_Enumerable_Where_BattleLogicFunctionProcess_FunctionTargetCheck___, v34);
    sub_1B4CF90(&Method_System_Collections_Generic_List_Enumerator_int__Dispose__, v35);
    sub_1B4CF90(&Method_System_Collections_Generic_List_Enumerator_int__MoveNext__, v36);
    sub_1B4CF90(&Method_System_Collections_Generic_List_Enumerator_int__get_Current__, v37);
    sub_1B4CF90(&System_Func_BattleLogicFunctionProcess_FunctionUnitCheck__bool__TypeInfo, v38);
    sub_1B4CF90(&System_Func_BattleLogicFunctionProcess_FunctionTargetCheck__int__TypeInfo, v39);
    sub_1B4CF90(&System_Func_BattleLogicFunctionProcess_FunctionTargetCheck__bool__TypeInfo, v40);
    sub_1B4CF90(&Method_System_Collections_Generic_HashSet_BattleBuffData_BuffData__get_Count__, v41);
    sub_1B4CF90(&Method_System_Collections_Generic_List_int__Add__, v42);
    sub_1B4CF90(&Method_System_Collections_Generic_List_int__GetEnumerator__, v43);
    sub_1B4CF90(&Method_System_Collections_Generic_List_int___ctor__, v44);
    sub_1B4CF90(&System_Collections_Generic_List_int__TypeInfo, v45);
    sub_1B4CF90(&BattleActionData_MasterBuffData_TypeInfo, v46);
    sub_1B4CF90(&UnityEngine_Object_TypeInfo, v47);
    sub_1B4CF90(&BattleLogicFunction_PreAttackSideEffectMakeArgument_TypeInfo, v48);
    sub_1B4CF90(&BattleLogicFunction_ProcListInArgs_TypeInfo, v49);
    sub_1B4CF90(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v50);
    sub_1B4CF90(&SkillValueUpApplierPlayerMaster_TypeInfo, v51);
    sub_1B4CF90(&Method_BattleLogicFunction___c__procList_b__41_0__, v52);
    sub_1B4CF90(&Method_BattleLogicFunction___c__procList_b__41_1__, v53);
    sub_1B4CF90(&Method_BattleLogicFunction___c__procList_b__41_2__, v54);
    sub_1B4CF90(&Method_BattleLogicFunction___c__procList_b__41_3__, v55);
    sub_1B4CF90(&BattleLogicFunction___c_TypeInfo, v56);
    sub_1B4CF90(&BattleActionData_UpShiftGaugeData_TypeInfo, v57);
    sub_1B4CF90(&Method_WeightRate_int___ctor__, v58);
    sub_1B4CF90(&Method_WeightRate_int__getCount__, v59);
    sub_1B4CF90(&Method_WeightRate_int__getData__, v60);
    sub_1B4CF90(&Method_WeightRate_int__getTotalWeight__, v61);
    sub_1B4CF90(&Method_WeightRate_int__setWeight__, v62);
    this = (BattleLogicFunction_o *)sub_1B4CF90(&WeightRate_int__TypeInfo, v63);
    byte_49BDB82 = 1;
  }
  funcIndex = 0;
  subBuffInfo = 0LL;
  entity = 0LL;
  absorptionCount = 0;
  buffsToRemove = 0LL;
  memset(&v374, 0, sizeof(v374));
  if ( !v19 )
    goto LABEL_462;
  this = (BattleLogicFunction_o *)v20->fields.data;
  if ( !this )
    goto LABEL_462;
  ServantData = BattleData__getServantData((BattleData_o *)this, v19->fields.actorId, 0LL);
  BattleActionData__getPTTargetId(v19, 0LL);
  this = (BattleLogicFunction_o *)BattleActionData__getPTSubTargetId(v19, 0LL);
  data = v20->fields.data;
  subTargetId = (int)this;
  if ( !data )
    goto LABEL_462;
  data->fields.beforeAction = v19;
  sub_1B4CF34((CGThumbnailListItem_o *)&data->fields.beforeAction, (int32_t)v19, v65, v66);
  v360 = (System_Collections_Generic_List_int__o *)sub_1B4D1DC(System_Collections_Generic_List_int__TypeInfo);
  System_Collections_Generic_List_int____ctor(
    v360,
    (const MethodInfo_3562964 *)Method_System_Collections_Generic_List_int___ctor__);
  this = (BattleLogicFunction_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37B4410 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !this )
    goto LABEL_462;
  MasterData_object = DataManager__GetMasterData_object_(
                        (DataManager_o *)this,
                        (const MethodInfo_2F01B24 *)Method_DataManager_GetMasterData_BuffMaster___);
  if ( isReduceReset )
  {
    logic = (UnityEngine_Object_o *)v20->fields.logic;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    if ( UnityEngine_Object__op_Inequality(logic, 0LL, 0LL) )
    {
      this = (BattleLogicFunction_o *)v20->fields.logic;
      if ( !this )
        goto LABEL_462;
      BattleLogic__resetReducedHpAll((BattleLogic_o *)this, 0LL);
    }
  }
  v69 = (BattleLogicFunction_ProcListInArgs_o *)sub_1B4D1DC(BattleLogicFunction_ProcListInArgs_TypeInfo);
  BattleLogicFunction_ProcListInArgs___ctor(v69, argument, v19, 0LL);
  if ( !v69 )
    goto LABEL_462;
  BattleLogicFunction_ProcListInArgs__set_IsCommandSideEffect(v69, isCommandSideEffect, 0LL);
  BattleLogicFunction_ProcListInArgs__set_IsShift(v69, isShift, 0LL);
  BattleLogicFunction_ProcListInArgs__set_IsPassive(v69, passive, 0LL);
  v69->fields._IsTreasureDvc_k__BackingField = isTreasureDvc;
  if ( BattleLogicFunction_ProcListInArgs__get_SkillId(v69, 0LL) <= 0 )
    BattleLogicFunction_ProcListInArgs__set_SkillId(v69, skillId, 0LL);
  funcIndex = 0;
  BattleLogicFunction_ProcListInArgs__initFunctionUnitCheck(v69, v20, functionlist, baseValslist, &funcIndex, 0LL);
  v69->fields.actSetId = 0;
  args = v69;
  v70 = (WeightRate_int__o *)sub_1B4D1DC(WeightRate_int__TypeInfo);
  WeightRate_int____ctor(v70, (const MethodInfo_3951A24 *)Method_WeightRate_int___ctor__);
  if ( !baseValslist )
    goto LABEL_462;
  max_length = baseValslist->max_length;
  if ( max_length >= 1 )
  {
    v72 = 0;
    while ( v72 < max_length )
    {
      v73 = &baseValslist->obj.klass + (int)v72;
      v74 = (DataVals_o *)v73[4];
      if ( !v74 )
        goto LABEL_462;
      DataVals__loadActSet((DataVals_o *)v73[4], 0LL);
      this = (BattleLogicFunction_o *)DataVals__checkActSet(v74, 0LL);
      if ( ((unsigned __int8)this & 1) != 0 )
      {
        this = (BattleLogicFunction_o *)DataVals__getActSetWeight(v74, 0LL);
        if ( (int)this >= 1 )
        {
          ActSetWeight = DataVals__getActSetWeight(v74, 0LL);
          this = (BattleLogicFunction_o *)DataVals__getActSet(v74, 0LL);
          if ( !v70 )
            goto LABEL_462;
          WeightRate_int___setWeight(
            v70,
            ActSetWeight,
            (int32_t)this,
            (const MethodInfo_3950F40 *)Method_WeightRate_int__setWeight__);
        }
      }
      max_length = baseValslist->max_length;
      if ( (int)++v72 >= max_length )
        goto LABEL_26;
    }
LABEL_463:
    sub_1B4D1F4(this, action);
  }
LABEL_26:
  if ( !v70 )
    goto LABEL_462;
  if ( WeightRate_int___getCount(v70, (const MethodInfo_39512FC *)Method_WeightRate_int__getCount__) <= 0 )
  {
    v78 = v69;
    actSetId = v69->fields.actSetId;
  }
  else
  {
    Random = BattleRandom__getRandom(0, v70->fields.totalweight, 0LL);
    actSetId = WeightRate_int___getData(v70, Random, (const MethodInfo_39513B4 *)Method_WeightRate_int__getData__);
    v78 = v69;
    v69->fields.actSetId = actSetId;
  }
  v19->fields.ActSetId = actSetId;
  BattleActionData__initFuncTargetPlayerType(v19, funcIndex, 0LL);
  funcUnitArray_k__BackingField = (System_Object_array *)v78->fields._funcUnitArray_k__BackingField;
  v80 = BattleLogicFunction___c_TypeInfo;
  if ( !BattleLogicFunction___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BattleLogicFunction___c_TypeInfo);
    v80 = BattleLogicFunction___c_TypeInfo;
  }
  _9__41_0 = (System_Func_object__bool__o *)v80->static_fields->__9__41_0;
  if ( !_9__41_0 )
  {
    if ( !v80->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v80);
      v80 = BattleLogicFunction___c_TypeInfo;
    }
    v82 = (Il2CppObject *)v80->static_fields->__9;
    _9__41_0 = (System_Func_object__bool__o *)sub_1B4D1DC(System_Func_BattleLogicFunctionProcess_FunctionUnitCheck__bool__TypeInfo);
    System_Func_object__bool____ctor(_9__41_0, v82, Method_BattleLogicFunction___c__procList_b__41_0__, 0LL);
    static_fields = BattleLogicFunction___c_TypeInfo->static_fields;
    static_fields->__9__41_0 = (struct System_Func_BattleLogicFunctionProcess_FunctionUnitCheck__bool__o *)_9__41_0;
    sub_1B4CF34((CGThumbnailListItem_o *)&static_fields->__9__41_0, (int32_t)_9__41_0, v84, v85);
  }
  if ( !BasicHelper__Any_object__49202496(
          funcUnitArray_k__BackingField,
          (System_Func_T__bool__o *)_9__41_0,
          (const MethodInfo_2EEC540 *)Method_BasicHelper_Any_BattleLogicFunctionProcess_FunctionUnitCheck___) )
    v19->fields.isSuccessTargetSelection = 1;
  v86 = BattleLogicFunction___c_TypeInfo;
  v87 = (System_Collections_Generic_IEnumerable_TSource__o *)v69->fields._funcUnitArray_k__BackingField;
  if ( !BattleLogicFunction___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BattleLogicFunction___c_TypeInfo);
    v86 = BattleLogicFunction___c_TypeInfo;
  }
  _9__41_1 = (System_Func_object__bool__o *)v86->static_fields->__9__41_1;
  if ( !_9__41_1 )
  {
    if ( !v86->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v86);
      v86 = BattleLogicFunction___c_TypeInfo;
    }
    v89 = (Il2CppObject *)v86->static_fields->__9;
    _9__41_1 = (System_Func_object__bool__o *)sub_1B4D1DC(System_Func_BattleLogicFunctionProcess_FunctionUnitCheck__bool__TypeInfo);
    System_Func_object__bool____ctor(_9__41_1, v89, Method_BattleLogicFunction___c__procList_b__41_1__, 0LL);
    v90 = BattleLogicFunction___c_TypeInfo->static_fields;
    v90->__9__41_1 = (struct System_Func_BattleLogicFunctionProcess_FunctionUnitCheck__bool__o *)_9__41_1;
    sub_1B4CF34((CGThumbnailListItem_o *)&v90->__9__41_1, (int32_t)_9__41_1, v91, v92);
  }
  v19->fields.isSkillCopyFunctionOnly = System_Linq_Enumerable__All_object_(
                                          v87,
                                          (System_Func_TSource__bool__o *)_9__41_1,
                                          (const MethodInfo_2F0E080 *)Method_System_Linq_Enumerable_All_BattleLogicFunctionProcess_FunctionUnitCheck___);
  v364 = 1;
  matched = BattleLogicFunction_ProcListInArgs__MatchSkillType(v69, 1, 0LL);
  if ( matched )
  {
    v94 = matched;
    this = (BattleLogicFunction_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37B4410 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    v95 = isCommandSideEffect;
    if ( !this )
      goto LABEL_462;
    this = (BattleLogicFunction_o *)DataManager__GetMasterData_object_(
                                      (DataManager_o *)this,
                                      (const MethodInfo_2F01B24 *)Method_DataManager_GetMasterData_SkillMaster___);
    if ( !this )
      goto LABEL_462;
    if ( DataMasterBase_object__object__int___TryGetEntity(
           (DataMasterBase_TMaster__TEntity__PKType__o *)this,
           &entity,
           skillId,
           (const MethodInfo_319D9E8 *)Method_DataMasterBase_SkillMaster__SkillEntity__int__TryGetEntity__) )
    {
      this = (BattleLogicFunction_o *)entity;
      if ( !entity )
        goto LABEL_462;
      IsIgnoreValueUp = SkillEntity__IsIgnoreValueUp((SkillEntity_o *)entity, 0LL);
    }
    else
    {
      IsIgnoreValueUp = 0;
    }
    v361 = 0LL;
    v364 = 1;
    if ( !IsIgnoreValueUp && v94 )
    {
      v97 = v20->fields.data;
      v98 = (SkillValueUpApplierPlayerMaster_o *)sub_1B4D1DC(SkillValueUpApplierPlayerMaster_TypeInfo);
      SkillValueUpApplierPlayerMaster___ctor(v98, v97, 0LL);
      if ( v98 )
      {
        v361 = v98;
        ((void (__fastcall *)(SkillValueUpApplierPlayerMaster_o *, Il2CppMethodPointer))v98->klass->vtable._4_Init.method)(
          v98,
          v98->klass->vtable._5_ApplyTo.methodPtr);
        v364 = 0;
      }
      else
      {
        v361 = 0LL;
        v364 = 1;
      }
    }
  }
  else
  {
    v95 = isCommandSideEffect;
    v361 = 0LL;
  }
  BattleActionData__UpdateTargetRangeOfTreasureDevice(
    v19,
    v20->fields.data,
    v19,
    v69->fields._funcUnitArray_k__BackingField,
    0LL);
  v99 = v69->fields._funcUnitArray_k__BackingField;
  if ( !v99 )
    goto LABEL_462;
  v100 = v99->max_length;
  v101 = ServantData == 0LL;
  actionSvtData = ServantData;
  if ( v100 >= 1 )
  {
    v102 = 0LL;
    v103 = 0;
    v357 = 0;
    v358 = 0;
    v362 = v69->fields._funcUnitArray_k__BackingField;
    v359 = v101 || !isTreasureDvc;
    while ( 1 )
    {
      if ( v103 >= v100 )
        goto LABEL_463;
      v104 = &v99->obj.klass + (int)v103;
      v105 = (BattleLogicFunctionProcess_FunctionUnitCheck_o *)v104[4];
      if ( !v105 )
        goto LABEL_462;
      this = (BattleLogicFunction_o *)BattleLogicFunctionProcess_FunctionUnitCheck__get_FuncIndex(
                                        (BattleLogicFunctionProcess_FunctionUnitCheck_o *)v104[4],
                                        0LL);
      dataVals_k__BackingField = v105->fields._dataVals_k__BackingField;
      index = (int)this;
      if ( !dataVals_k__BackingField )
        goto LABEL_462;
      funcEntity = dataVals_k__BackingField->fields.funcEnt;
      funcUnit = v105;
      this = (BattleLogicFunction_o *)BattleLogicFunctionProcess_FunctionUnitCheck__checkCondtion(v105, v19, 0LL);
      if ( ((unsigned __int8)this & 1) != 0 )
      {
        if ( (v364 & 1) == 0 )
          this = (BattleLogicFunction_o *)((__int64 (__fastcall *)(SkillValueUpApplierPlayerMaster_o *, BattleLogicFunctionProcess_FunctionUnitCheck_o *, Il2CppMethodPointer))v361->klass->vtable._5_ApplyTo.method)(
                                            v361,
                                            v105,
                                            v361->klass->vtable._6_CreateFuncParamValueUpInfo.methodPtr);
        if ( isCreateSideEffect )
        {
          if ( !funcEntity )
            goto LABEL_462;
          this = (BattleLogicFunction_o *)BattleLogicFunction__IsAttackSideEffectInvokeFunc(
                                            this,
                                            funcEntity->fields.funcType,
                                            dataVals_k__BackingField,
                                            v107);
          if ( ((unsigned __int8)this & 1) != 0 )
          {
            v109 = BattleLogicFunction___c_TypeInfo;
            funcTargetArray_k__BackingField = (System_Collections_Generic_IEnumerable_TSource__o *)v105->fields._funcTargetArray_k__BackingField;
            if ( !BattleLogicFunction___c_TypeInfo->_2.cctor_finished )
            {
              j_il2cpp_runtime_class_init_0(BattleLogicFunction___c_TypeInfo);
              v109 = BattleLogicFunction___c_TypeInfo;
            }
            _9__41_2 = (System_Func_object__bool__o *)v109->static_fields->__9__41_2;
            if ( !_9__41_2 )
            {
              if ( !v109->_2.cctor_finished )
              {
                j_il2cpp_runtime_class_init_0(v109);
                v109 = BattleLogicFunction___c_TypeInfo;
              }
              v112 = (Il2CppObject *)v109->static_fields->__9;
              _9__41_2 = (System_Func_object__bool__o *)sub_1B4D1DC(System_Func_BattleLogicFunctionProcess_FunctionTargetCheck__bool__TypeInfo);
              System_Func_object__bool____ctor(_9__41_2, v112, Method_BattleLogicFunction___c__procList_b__41_2__, 0LL);
              v113 = BattleLogicFunction___c_TypeInfo->static_fields;
              v113->__9__41_2 = (struct System_Func_BattleLogicFunctionProcess_FunctionTargetCheck__bool__o *)_9__41_2;
              sub_1B4CF34((CGThumbnailListItem_o *)&v113->__9__41_2, (int32_t)_9__41_2, v114, v115);
            }
            v116 = System_Linq_Enumerable__Where_object_(
                     funcTargetArray_k__BackingField,
                     (System_Func_TSource__bool__o *)_9__41_2,
                     (const MethodInfo_2F42638 *)Method_System_Linq_Enumerable_Where_BattleLogicFunctionProcess_FunctionTargetCheck___);
            v117 = BattleLogicFunction___c_TypeInfo;
            v118 = v116;
            if ( !BattleLogicFunction___c_TypeInfo->_2.cctor_finished )
            {
              j_il2cpp_runtime_class_init_0(BattleLogicFunction___c_TypeInfo);
              v117 = BattleLogicFunction___c_TypeInfo;
            }
            _9__41_3 = (System_Func_object__int__o *)v117->static_fields->__9__41_3;
            if ( !_9__41_3 )
            {
              if ( !v117->_2.cctor_finished )
              {
                j_il2cpp_runtime_class_init_0(v117);
                v117 = BattleLogicFunction___c_TypeInfo;
              }
              v120 = (Il2CppObject *)v117->static_fields->__9;
              _9__41_3 = (System_Func_object__int__o *)sub_1B4D1DC(System_Func_BattleLogicFunctionProcess_FunctionTargetCheck__int__TypeInfo);
              System_Func_object__int____ctor(_9__41_3, v120, Method_BattleLogicFunction___c__procList_b__41_3__, 0LL);
              v121 = BattleLogicFunction___c_TypeInfo->static_fields;
              v121->__9__41_3 = (struct System_Func_BattleLogicFunctionProcess_FunctionTargetCheck__int__o *)_9__41_3;
              sub_1B4CF34((CGThumbnailListItem_o *)&v121->__9__41_3, (int32_t)_9__41_3, v122, v123);
            }
            v124 = (System_Collections_Generic_IEnumerable_TSource__o *)System_Linq_Enumerable__Select_object__int_(
                                                                          v118,
                                                                          (System_Func_TSource__TResult__o *)_9__41_3,
                                                                          (const MethodInfo_2F338DC *)Method_System_Linq_Enumerable_Select_BattleLogicFunctionProcess_FunctionTargetCheck__int___);
            v125 = System_Linq_Enumerable__ToArray_int_(
                     v124,
                     (const MethodInfo_2F3C24C *)Method_System_Linq_Enumerable_ToArray_int___);
            v126 = FuncList__Check(26, funcEntity->fields.funcType, 0LL);
            v127 = (BattleLogicFunction_PreAttackSideEffectMakeArgument_o *)sub_1B4D1DC(BattleLogicFunction_PreAttackSideEffectMakeArgument_TypeInfo);
            BattleLogicFunction_PreAttackSideEffectMakeArgument___ctor(v127, 0LL);
            if ( !v127 )
              goto LABEL_462;
            v128 = (BattleLogicFunction_SideEffectMakeArgument_o *)((__int64 (__fastcall *)(BattleLogicFunction_PreAttackSideEffectMakeArgument_o *, System_Int32_array *, Il2CppMethodPointer))v127->klass->vtable._6_Init.method)(
                                                                     v127,
                                                                     v125,
                                                                     v127->klass->vtable._7_MakeOnlyMainArgument.methodPtr);
            BattleLogicFunction__setAttackSideEffect(v20, v19, actionSvtData, v126 || isTreasureDvc, v128, v129);
            v95 = isCommandSideEffect;
          }
        }
        v366 = v103;
        v130 = funcUnit->fields._funcTargetArray_k__BackingField;
        if ( !v130 )
          goto LABEL_462;
        v131 = v130->max_length;
        p_funcType = &funcEntity->fields.funcType;
        if ( v131 >= 1 )
        {
          for ( i = 0; i < v131; ++i )
          {
            if ( i >= (unsigned int)v131 )
              goto LABEL_463;
            v133 = v130->m_Items[i];
            if ( !v133 )
              goto LABEL_462;
            BattleLogicFunction__SetTargetFuncList(
              v20,
              v133->fields._targetId_k__BackingField,
              v19,
              dataVals_k__BackingField,
              v108);
            this = (BattleLogicFunction_o *)BattleLogicFunction_ProcListInArgs__get_FuncSideEffectArg(args, 0LL);
            if ( this )
              v102 = (BattleLogicFunction_FuncSideEffectFunctionArgument_o *)this;
            if ( this )
            {
              if ( !v102 )
                goto LABEL_462;
              BattleLogicFunction_FuncSideEffectFunctionArgument__AddTarget(v102, v133, 0LL);
            }
            if ( !v133->fields._result_k__BackingField )
            {
              NoEffectObject = BattleLogicFunctionProcess_FunctionTargetCheck__getInvalidObject(v133, 0LL);
              goto LABEL_99;
            }
            this = (BattleLogicFunction_o *)v20->fields.data;
            if ( !this )
              goto LABEL_462;
            targetId_k__BackingField = v133->fields._targetId_k__BackingField;
            this = (BattleLogicFunction_o *)BattleData__getServantData(
                                              (BattleData_o *)this,
                                              targetId_k__BackingField,
                                              0LL);
            if ( !this )
              goto LABEL_462;
            v135 = this;
            this = (BattleLogicFunction_o *)BattleServantData__CheckNotTargetSkill(
                                              (BattleServantData_o *)this,
                                              skillId,
                                              0LL);
            if ( ((unsigned __int8)this & 1) != 0 )
            {
              NoEffectObject = BattleLogicFunction__getNoEffectObject(
                                 v20,
                                 (int32_t)v135->fields.logic,
                                 index,
                                 dataVals_k__BackingField,
                                 v95,
                                 0LL,
                                 0LL,
                                 v136);
LABEL_99:
              BattleActionData__addAction(v19, NoEffectObject, 0LL);
              goto LABEL_154;
            }
            v19->fields.funcResult = 1;
            args->fields.tdCommandTypeChange = -1;
            if ( !funcEntity )
              goto LABEL_462;
            v138 = &funcEntity->fields.funcType;
            this = (BattleLogicFunction_o *)FuncList__Check(1, *p_funcType, 0LL);
            if ( ((unsigned __int8)this & 1) != 0
              || (this = (BattleLogicFunction_o *)FuncList__Check(16, *p_funcType, 0LL), ((unsigned __int8)this & 1) != 0) )
            {
              vals = funcEntity->fields.vals;
              if ( !vals )
                goto LABEL_462;
              if ( !vals->max_length )
                goto LABEL_463;
              this = (BattleLogicFunction_o *)MasterData_object;
              if ( !MasterData_object )
                goto LABEL_462;
              this = (BattleLogicFunction_o *)DataMasterBase_object__object__int___GetEntity(
                                                (DataMasterBase_TMaster__TEntity__PKType__o *)MasterData_object,
                                                vals->m_Items[1],
                                                (const MethodInfo_319D99C *)Method_DataMasterBase_BuffMaster__BuffEntity__int__GetEntity__);
              if ( !this )
                goto LABEL_462;
              commandType = 1;
              switch ( HIDWORD(this->fields.data) )
              {
                case 0x8F:
                  commandType = v19->fields.commandType;
                  goto LABEL_113;
                case 0x91:
                  goto LABEL_113;
                case 0x92:
                  commandType = 2;
                  goto LABEL_113;
                case 0x93:
                  commandType = 3;
LABEL_113:
                  args->fields.tdCommandTypeChange = commandType;
                  break;
                default:
                  break;
              }
              v138 = &funcEntity->fields.funcType;
              v142 = FuncList__Check(16, *p_funcType, 0LL);
              BattleLogicFunction__functionAddState(v20, v19, v133, args, v142, v143);
              goto LABEL_135;
            }
            if ( FuncList__Check(2, *p_funcType, 0LL) )
            {
              v141 = BattleLogicFunction__functionSubState(
                       v20,
                       targetId_k__BackingField,
                       funcEntity,
                       dataVals_k__BackingField,
                       index,
                       v95,
                       &subBuffInfo,
                       args,
                       overwriteLossHp);
              goto LABEL_134;
            }
            if ( FuncList__Check(3, *p_funcType, 0LL) )
            {
              actorId = v19->fields.actorId;
              v146 = (int32_t)v135->fields.logic;
              isSafeDamage = BattleLogicFunction__isSafeDamage(
                               v20,
                               dataVals_k__BackingField,
                               targetId_k__BackingField,
                               v144);
              v148 = v146;
              v95 = isCommandSideEffect;
              v141 = BattleLogicFunction__functionDamage(
                       v20,
                       actorId,
                       v148,
                       dataVals_k__BackingField,
                       index,
                       v19,
                       isSafeDamage,
                       v149);
              goto LABEL_134;
            }
            if ( FuncList__Check(4, *p_funcType, 0LL) )
            {
              v151 = v19->fields.actorId;
              v152 = (int32_t)v135->fields.logic;
              v153 = 1;
              goto LABEL_133;
            }
            if ( FuncList__Check(14, *p_funcType, 0LL) )
            {
              v151 = v19->fields.actorId;
              v152 = (int32_t)v135->fields.logic;
              v153 = 2;
              goto LABEL_133;
            }
            if ( FuncList__Check(15, *p_funcType, 0LL) )
            {
              v151 = v19->fields.actorId;
              v152 = (int32_t)v135->fields.logic;
              v153 = 3;
              goto LABEL_133;
            }
            if ( FuncList__Check(18, *p_funcType, 0LL) )
            {
              v151 = v19->fields.actorId;
              v152 = (int32_t)v135->fields.logic;
              v153 = 4;
              goto LABEL_133;
            }
            if ( FuncList__Check(27, *p_funcType, 0LL) )
            {
              v151 = v19->fields.actorId;
              v152 = (int32_t)v135->fields.logic;
              v153 = 7;
              goto LABEL_133;
            }
            if ( FuncList__Check(21, *p_funcType, 0LL) )
            {
              v151 = v19->fields.actorId;
              v152 = (int32_t)v135->fields.logic;
              v153 = 5;
              goto LABEL_133;
            }
            if ( FuncList__Check(22, *p_funcType, 0LL) )
            {
              v151 = v19->fields.actorId;
              v152 = (int32_t)v135->fields.logic;
              v153 = 6;
              goto LABEL_133;
            }
            if ( FuncList__Check(28, *p_funcType, 0LL) )
            {
              v151 = v19->fields.actorId;
              v152 = (int32_t)v135->fields.logic;
              v153 = 8;
LABEL_133:
              v141 = BattleLogicFunction__functionNPDamage(
                       v20,
                       v151,
                       v152,
                       dataVals_k__BackingField,
                       index,
                       v153,
                       v19,
                       v150);
LABEL_134:
              BattleActionData__addAction(v19, v141, 0LL);
              goto LABEL_135;
            }
            if ( FuncList__Check(5, *p_funcType, 0LL) )
            {
              v162 = v20->fields.data;
              this = (BattleLogicFunction_o *)DataVals__GetValue(dataVals_k__BackingField, 0LL);
              if ( !v162 )
                goto LABEL_462;
              BattleData__addCriticalPoint(v162, (int32_t)this, 0LL);
LABEL_162:
              this = (BattleLogicFunction_o *)BattleLogicFunction__getFunctionObject(
                                                v163,
                                                funcEntity,
                                                (int32_t)v135->fields.logic,
                                                index,
                                                v95,
                                                0LL,
                                                v164);
              if ( !this )
                goto LABEL_462;
              HIDWORD(this->fields.logic) = 4;
              BattleActionData__setBuffData(v19, (BattleActionData_BuffData_o *)this, dataVals_k__BackingField, 0LL);
              this = (BattleLogicFunction_o *)v20->fields.data;
              if ( !this )
                goto LABEL_462;
              BattleData__AddPerformedVals((BattleData_o *)this, dataVals_k__BackingField, 0LL);
              goto LABEL_165;
            }
            if ( FuncList__Check(31, *p_funcType, 0LL) )
            {
              v165 = v20->fields.data;
              this = (BattleLogicFunction_o *)DataVals__GetValue(dataVals_k__BackingField, 0LL);
              if ( !v165 )
                goto LABEL_462;
              BattleData__lossCriticalPoint(v165, (int32_t)this, 0LL);
              goto LABEL_162;
            }
            if ( FuncList__Check(6, *p_funcType, 0LL) )
            {
              v141 = BattleLogicFunction__functionGainHp(
                       v20,
                       v19->fields.actorId,
                       targetId_k__BackingField,
                       funcEntity,
                       dataVals_k__BackingField,
                       index,
                       v95,
                       -1,
                       overwriteLossHp);
              goto LABEL_134;
            }
            if ( FuncList__Check(17, *p_funcType, 0LL) )
            {
              v141 = BattleLogicFunction__functionGainHpPer(
                       v20,
                       v19->fields.actorId,
                       targetId_k__BackingField,
                       funcEntity,
                       dataVals_k__BackingField,
                       index,
                       v95,
                       v166);
              goto LABEL_134;
            }
            if ( FuncList__Check(7, *p_funcType, 0LL) )
            {
              if ( BattleServantData__checkPlayer((BattleServantData_o *)v135, 0LL) )
              {
                isUnaffected = DataVals__isUnaffected(dataVals_k__BackingField, 0LL);
                Value = DataVals__GetValue(dataVals_k__BackingField, 0LL);
                if ( !isUnaffected )
                  Value = BattleServantData__getCorrectedValueFuncGainNp((BattleServantData_o *)v135, Value, 0LL);
                goto LABEL_174;
              }
            }
            else
            {
              if ( !FuncList__Check(8, *p_funcType, 0LL) )
              {
                if ( FuncList__Check(9, *p_funcType, 0LL) )
                {
                  v179 = DataVals__GetValue2(dataVals_k__BackingField, 0LL) - 1;
                  TargetList = DataVals__GetTargetList(dataVals_k__BackingField, 0LL);
                  v181 = DataVals__GetValue(dataVals_k__BackingField, 0LL);
                  this = (BattleLogicFunction_o *)BattleServantData__skillChageShorten(
                                                    (BattleServantData_o *)v135,
                                                    v181,
                                                    0,
                                                    v179,
                                                    TargetList,
                                                    0LL);
                  goto LABEL_189;
                }
                if ( FuncList__Check(10, *p_funcType, 0LL) )
                {
                  v183 = DataVals__GetValue2(dataVals_k__BackingField, 0LL) - 1;
                  v184 = DataVals__GetTargetList(dataVals_k__BackingField, 0LL);
                  v185 = DataVals__GetValue(dataVals_k__BackingField, 0LL);
                  this = (BattleLogicFunction_o *)BattleServantData__skillChageExtend(
                                                    (BattleServantData_o *)v135,
                                                    v185,
                                                    999,
                                                    v183,
                                                    v184,
                                                    0LL);
LABEL_189:
                  v186 = (int32_t)v135->fields.logic;
                  if ( ((unsigned __int8)this & 1) == 0 )
                  {
                    v95 = isCommandSideEffect;
                    v189 = v20;
                    v190 = (int32_t)v135->fields.logic;
                    goto LABEL_283;
                  }
                  goto LABEL_190;
                }
                if ( FuncList__Check(12, *p_funcType, 0LL) )
                {
                  v192 = v19->fields.actorId;
                  v193 = BattleLogicFunction__isSafeDamage(
                           v20,
                           dataVals_k__BackingField,
                           targetId_k__BackingField,
                           v191);
                  isRandomDamagea = 1;
                  v194 = isCommandSideEffect;
                  mainAction = v19;
                  v195 = v193;
                  v196 = isCommandSideEffect;
                  overwriteLossHpa = -1;
                  goto LABEL_195;
                }
                if ( FuncList__Check(25, *p_funcType, 0LL) )
                {
                  v95 = isCommandSideEffect;
                  v198 = v19->fields.actorId;
                  isRandomDamagea = 1;
                  mainAction = v19;
                  v196 = isCommandSideEffect;
                  v195 = 1;
                  overwriteLossHpa = -1;
                  v197 = v20;
                  goto LABEL_198;
                }
                if ( FuncList__Check(13, *p_funcType, 0LL) )
                {
                  v95 = isCommandSideEffect;
                  v199 = BattleLogicFunction__functionInstantDeath(
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
                  goto LABEL_285;
                }
                if ( FuncList__Check(19, *p_funcType, 0LL) )
                {
                  v95 = isCommandSideEffect;
                  v199 = BattleLogicFunction__functionHastenNpTurn(
                           v20,
                           targetId_k__BackingField,
                           funcEntity,
                           dataVals_k__BackingField,
                           index,
                           isCommandSideEffect,
                           -1,
                           v200);
                  goto LABEL_285;
                }
                if ( FuncList__Check(20, *p_funcType, 0LL) )
                {
                  v95 = isCommandSideEffect;
                  v199 = BattleLogicFunction__functionDelayNpTurn(
                           v20,
                           targetId_k__BackingField,
                           funcEntity,
                           dataVals_k__BackingField,
                           index,
                           isCommandSideEffect,
                           &absorptionCount,
                           v201);
                  goto LABEL_285;
                }
                if ( FuncList__Check(56, *p_funcType, 0LL) )
                {
                  v95 = isCommandSideEffect;
                  v199 = BattleLogicFunction__functionAbsorbNpTurn(
                           v20,
                           targetId_k__BackingField,
                           funcEntity,
                           v19,
                           v133,
                           isCommandSideEffect,
                           v202);
                  goto LABEL_285;
                }
                if ( FuncList__Check(23, *p_funcType, 0LL) )
                {
                  v208 = BattleLogicFunction__functionResetCommandCard(v20, v203, v204, v205, v206, v207);
                  goto LABEL_209;
                }
                if ( FuncList__Check(24, *p_funcType, 0LL) )
                {
                  applyTarget = funcEntity->fields.applyTarget;
                  if ( applyTarget != 2 )
                  {
                    if ( applyTarget == 1 )
                    {
                      v208 = BattleLogicFunction__functionReplaceMember(
                               v20,
                               targetId_k__BackingField,
                               subTargetId,
                               v210,
                               v211,
                               index,
                               v212);
LABEL_209:
                      BattleActionData__addAction(v19, v208, 0LL);
                      this = (BattleLogicFunction_o *)v20->fields.data;
                      if ( !this )
                        goto LABEL_462;
                      BattleData__AddPerformedVals((BattleData_o *)this, dataVals_k__BackingField, 0LL);
                    }
LABEL_184:
                    v95 = isCommandSideEffect;
                    goto LABEL_165;
                  }
                  v216 = BattleLogicFunction__functionReplaceEnemyMember(
                           v20,
                           v209,
                           dataVals_k__BackingField,
                           index,
                           (const MethodInfo *)v211);
LABEL_220:
                  BattleActionData__addAction(v19, v216, 0LL);
                  goto LABEL_184;
                }
                if ( FuncList__Check(109, *p_funcType, 0LL) )
                {
                  v216 = BattleLogicFunction__functionTransformServant(
                           v20,
                           targetId_k__BackingField,
                           v214,
                           dataVals_k__BackingField,
                           index,
                           args,
                           v215);
                  goto LABEL_220;
                }
                if ( FuncList__Check(26, *p_funcType, 0LL) )
                {
                  v218 = BattleLogicFunction__functionReflection(
                           v20,
                           v19->fields.actorId,
                           (int32_t)v135->fields.logic,
                           dataVals_k__BackingField,
                           index,
                           v217);
                  BattleActionData__addAction(v19, v218, 0LL);
                  v358 = 1;
                  goto LABEL_184;
                }
                if ( FuncList__Check(29, *p_funcType, 0LL) )
                {
                  v95 = isCommandSideEffect;
                  v199 = BattleLogicFunction__functionCallServant(
                           v20,
                           v19->fields.actorId,
                           v219,
                           dataVals_k__BackingField,
                           index,
                           isCommandSideEffect,
                           args,
                           v220);
                  goto LABEL_285;
                }
                if ( FuncList__Check(30, *p_funcType, 0LL) )
                {
                  v226 = BattleLogicFunction__functionPtShuffle(v20, v221, v222, v223, v224, v225);
                  BattleActionData__addAction(v19, v226, 0LL);
                  this = (BattleLogicFunction_o *)v20->fields.data;
                  if ( !this )
                    goto LABEL_462;
                  BattleData__AddPerformedVals((BattleData_o *)this, dataVals_k__BackingField, 0LL);
                  goto LABEL_226;
                }
                if ( FuncList__Check(32, *p_funcType, 0LL) )
                {
                  v216 = BattleLogicFunction__functionChangeServant(
                           v20,
                           v19->fields.actorId,
                           targetId_k__BackingField,
                           v227,
                           dataVals_k__BackingField,
                           v228,
                           v229);
                  goto LABEL_220;
                }
                v230 = FuncList__Check(33, *p_funcType, 0LL);
                if ( v230 )
                {
                  v216 = BattleLogicFunction__functionChangeBg(
                           (BattleLogicFunction_o *)v230,
                           v19->fields.actorId,
                           v231,
                           dataVals_k__BackingField,
                           v232,
                           v233);
                  goto LABEL_220;
                }
                if ( FuncList__Check(34, *p_funcType, 0LL) )
                {
                  v235 = v19->fields.actorId;
                  v236 = (int32_t)v135->fields.logic;
                  v237 = BattleLogicFunction__isSafeDamage(
                           v20,
                           dataVals_k__BackingField,
                           targetId_k__BackingField,
                           v234);
                  goto LABEL_233;
                }
                if ( FuncList__Check(122, *p_funcType, 0LL) )
                {
                  v240 = v19->fields.actorId;
                  v241 = (int32_t)v135->fields.logic;
                  v237 = 1;
                  v239 = v20;
                  goto LABEL_236;
                }
                if ( FuncList__Check(35, *p_funcType, 0LL) )
                {
                  BYTE1(v135[9].fields.logictarget) = 1;
                  goto LABEL_184;
                }
                this = (BattleLogicFunction_o *)FuncList__Check(36, *p_funcType, 0LL);
                if ( ((unsigned __int8)this & 1) != 0 )
                {
                  v244 = v20->fields.data;
                  if ( !v244 )
                    goto LABEL_462;
                  draw_commandlist = v244->fields.draw_commandlist;
                  v244->fields.fixedCommands = draw_commandlist;
                  sub_1B4CF34(
                    (CGThumbnailListItem_o *)&v244->fields.fixedCommands,
                    (int32_t)draw_commandlist,
                    v242,
                    v243);
                  goto LABEL_242;
                }
                if ( FuncList__Check(37, *p_funcType, 0LL)
                  || FuncList__Check(38, *p_funcType, 0LL)
                  || FuncList__Check(39, *p_funcType, 0LL)
                  || FuncList__Check(40, *p_funcType, 0LL) )
                {
                  v246 = DataVals__GetValue(dataVals_k__BackingField, 0LL);
                  if ( FuncList__Check(37, *p_funcType, 0LL) || FuncList__Check(39, *p_funcType, 0LL) )
                    v246 = -v246;
                  if ( FuncList__Check(37, *p_funcType, 0LL) || FuncList__Check(38, *p_funcType, 0LL) )
                  {
                    v246 *= 2;
                    v355 = 1;
                  }
                  else
                  {
                    v355 = 0;
                  }
                  isParam = DataVals__isParam(dataVals_k__BackingField, 91, 0LL);
                  v247 = DataVals__isParam(dataVals_k__BackingField, 150, 0LL);
                  v248 = 0LL;
                  if ( v247 )
                  {
                    v248 = (BattleServantSnapShotOnBuffUpdate_o *)sub_1B4D1DC(BattleServantSnapShotOnBuffUpdate_TypeInfo);
                    BattleServantSnapShotOnBuffUpdate___ctor(v248, (BattleServantData_o *)v135, 0LL);
                  }
                  v249 = DataVals__GetTargetList(dataVals_k__BackingField, 0LL);
                  this = (BattleLogicFunction_o *)BattleServantData__ChangeBuffValue(
                                                    (BattleServantData_o *)v135,
                                                    v246,
                                                    v249,
                                                    v355,
                                                    1,
                                                    v247,
                                                    &buffsToRemove,
                                                    isParam,
                                                    0LL);
                  if ( ((unsigned __int8)this & 1) == 0 )
                    goto LABEL_281;
                  if ( v247 )
                  {
                    action = (BattleActionData_o *)buffsToRemove;
                    if ( !buffsToRemove )
                      goto LABEL_462;
                    if ( buffsToRemove->fields._count >= 1 )
                    {
                      this = (BattleLogicFunction_o *)v135[8].fields.wkStr;
                      if ( !this )
                        goto LABEL_462;
                      this = (BattleLogicFunction_o *)BattleBuffData__SubBuffSpecified(
                                                        (BattleBuffData_o *)this,
                                                        buffsToRemove,
                                                        1,
                                                        0LL);
                      if ( !this )
                        goto LABEL_462;
                      v95 = isCommandSideEffect;
                      BattleLogicFunction__ApplySubBuffChanges(
                        v20,
                        v19,
                        (System_Collections_Generic_List_BattleBuffData_BuffData__o *)this->fields.data,
                        targetId_k__BackingField,
                        v248,
                        dataVals_k__BackingField,
                        index,
                        isCommandSideEffect,
                        args,
                        isRandomDamage);
                      goto LABEL_165;
                    }
                  }
LABEL_242:
                  v186 = (int32_t)v135->fields.logic;
LABEL_190:
                  v95 = isCommandSideEffect;
                  v187 = funcEntity;
LABEL_191:
                  FunctionObject = BattleLogicFunction__getFunctionObject(this, v187, v186, index, v95, 0LL, v182);
                  BattleActionData__setBuffData(v19, FunctionObject, dataVals_k__BackingField, 0LL);
                  goto LABEL_165;
                }
                if ( FuncList__Check(41, *p_funcType, 0LL) )
                {
                  v250 = v20->fields.data;
                  v251 = DataVals__GetValue(dataVals_k__BackingField, 0LL);
                  v252 = (Generator_BGMFromChangeBGMFunc_o *)sub_1B4D1DC(Generator_BGMFromChangeBGMFunc_TypeInfo);
                  Generator_BGMFromChangeBGMFunc___ctor(v252, v250, v251, dataVals_k__BackingField, 0, 0LL);
                  BattleLogicFunction__FunctionChangeBgm(v20, args, (Generator_BGM_o *)v252, 0LL, v253);
                  goto LABEL_184;
                }
                this = (BattleLogicFunction_o *)FuncList__Check(42, *p_funcType, 0LL);
                if ( ((unsigned __int8)this & 1) != 0 )
                  goto LABEL_242;
                if ( FuncList__Check(43, *p_funcType, 0LL) )
                {
                  v95 = isCommandSideEffect;
                  v199 = BattleLogicFunction__functionResurrection(
                           v20,
                           (int32_t)v135->fields.logic,
                           index,
                           funcEntity,
                           dataVals_k__BackingField,
                           isCommandSideEffect,
                           v254);
                  goto LABEL_285;
                }
                if ( FuncList__Check(44, *p_funcType, 0LL)
                  || FuncList__Check(133, *p_funcType, 0LL)
                  || FuncList__Check(146, *p_funcType, 0LL) )
                {
                  v255 = funcEntity->fields.vals;
                  if ( FuncList__Check(44, funcEntity->fields.funcType, 0LL) )
                  {
                    SameIndiualityBuffSum = BattleServantData__getSameIndiualityBuffSum(
                                              (BattleServantData_o *)v135,
                                              v255,
                                              1,
                                              0,
                                              0,
                                              0LL);
                    goto LABEL_277;
                  }
                  if ( FuncList__Check(133, *p_funcType, 0LL) )
                  {
                    SameIndiualityBuffSum = GainNpIndividualSum__GetSameIndiualitySum(
                                              v20->fields.data,
                                              v19->fields.actorId,
                                              (int32_t)v135->fields.logic,
                                              dataVals_k__BackingField,
                                              funcEntity,
                                              0LL);
                    goto LABEL_277;
                  }
                  if ( FuncList__Check(146, *p_funcType, 0LL) )
                  {
                    SameIndiualityBuffSum = GainNpIndividualSum__GetIndividualityIncludeTargetSum(
                                              v20->fields.data,
                                              v19->fields.actorId,
                                              (int32_t)v135->fields.logic,
                                              dataVals_k__BackingField,
                                              funcEntity,
                                              0LL);
LABEL_277:
                    v257 = SameIndiualityBuffSum;
                  }
                  else
                  {
                    v257 = 0;
                  }
                  Value = DataVals__GetValue(dataVals_k__BackingField, 0LL) * v257;
                  if ( !DataVals__isUnaffected(dataVals_k__BackingField, 0LL) )
                    Value = BattleServantData__getCorrectedValueFuncGainNp((BattleServantData_o *)v135, Value, 0LL);
                  if ( Value < 1 )
                  {
LABEL_281:
                    v190 = (int32_t)v135->fields.logic;
                    goto LABEL_282;
                  }
LABEL_174:
                  if ( !BattleServantData__isGainNp((BattleServantData_o *)v135, 1, dataVals_k__BackingField, 0LL) )
                    goto LABEL_281;
                  v170 = (BattleLogicFunction_o *)BattleServantData__addNp((BattleServantData_o *)v135, Value, 0, 0LL);
                  v171 = (int)v170;
                  this = (BattleLogicFunction_o *)BattleLogicFunction__getFunctionObject(
                                                    v170,
                                                    funcEntity,
                                                    (int32_t)v135->fields.logic,
                                                    index,
                                                    isCommandSideEffect,
                                                    0LL,
                                                    v172);
                  if ( !this )
                    goto LABEL_462;
                  v173 = (BattleActionData_BuffData_o *)this;
                  HIDWORD(this->fields.logic) = 3;
                  BattleActionData_BuffData__setSaveNp((BattleActionData_BuffData_o *)this, v171, 0LL);
                  if ( isCommandSideEffect )
                    v173->fields.isCommandAfter = 1;
LABEL_183:
                  BattleActionData__setBuffData(v19, v173, dataVals_k__BackingField, 0LL);
                  goto LABEL_184;
                }
                if ( FuncList__Check(45, *p_funcType, 0LL) )
                {
                  BYTE4(v135[9].fields.logictarget) = DataVals__GetValue(dataVals_k__BackingField, 0LL) == 1;
                  goto LABEL_184;
                }
                if ( FuncList__Check(46, *p_funcType, 0LL) )
                {
                  v95 = isCommandSideEffect;
                  v199 = BattleLogicFunction__functionInstantDeath(
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
                  goto LABEL_285;
                }
                if ( FuncList__Check(47, *p_funcType, 0LL) )
                {
                  v263 = v19->fields.actorId;
                  v264 = (int32_t)v135->fields.logic;
                  v265 = 9;
                  goto LABEL_293;
                }
                if ( FuncList__Check(48, *p_funcType, 0LL) )
                {
                  v216 = BattleLogicFunction__functionGainNpFromTargets(v20, args, v19, v133, v266);
                  goto LABEL_220;
                }
                if ( FuncList__Check(49, *p_funcType, 0LL) )
                {
                  v216 = BattleLogicFunction__functionGainHpFromTargets(v20, args, v19, v133, v267);
                  goto LABEL_220;
                }
                v268 = FuncList__Check(50, *p_funcType, 0LL);
                if ( v268 || (v268 = FuncList__Check(51, *p_funcType, 0LL)) )
                {
                  v270 = *p_funcType == 51;
                  if ( *p_funcType == 50 )
                  {
                    v268 = BattleLogicFunction__isSafeDamage(
                             v20,
                             dataVals_k__BackingField,
                             targetId_k__BackingField,
                             v269);
                    v270 = v268;
                  }
                  v192 = v19->fields.actorId;
                  HpPerValue = BattleLogicFunction__getHpPerValue(
                                 (BattleLogicFunction_o *)v268,
                                 dataVals_k__BackingField,
                                 (BattleServantData_o *)v135,
                                 v269);
                  v194 = isCommandSideEffect;
                  v195 = v270;
                  mainAction = v19;
                  isRandomDamagea = 0;
                  v196 = isCommandSideEffect;
                  overwriteLossHpa = HpPerValue;
LABEL_195:
                  v197 = v20;
                  v198 = v192;
                  v95 = v194;
LABEL_198:
                  v199 = BattleLogicFunction__functionlossHp(
                           v197,
                           v198,
                           targetId_k__BackingField,
                           funcEntity,
                           dataVals_k__BackingField,
                           index,
                           v195,
                           v196,
                           overwriteLossHpa,
                           isRandomDamagea,
                           mainAction,
                           v353);
                  goto LABEL_285;
                }
                if ( FuncList__Check(52, *p_funcType, 0LL) )
                {
                  v273 = 1;
                  v274 = v20;
                  v275 = dataVals_k__BackingField;
LABEL_307:
                  updated = BattleLogicFunction__UpdateUserEquipSkillChargeTurn(v274, v275, v273, v272);
                  if ( updated )
                  {
                    v95 = isCommandSideEffect;
                    BattleLogicFunction__CreateMasterBuffEffect(
                      (BattleLogicFunction_o *)updated,
                      v19,
                      funcEntity,
                      index,
                      isCommandSideEffect,
                      dataVals_k__BackingField,
                      v277);
                    goto LABEL_165;
                  }
                  v278 = (BattleActionData_MasterBuffData_o *)sub_1B4D1DC(BattleActionData_MasterBuffData_TypeInfo);
                  BattleActionData_MasterBuffData___ctor(v278, funcEntity, 0LL);
                  if ( !v278 )
                    goto LABEL_462;
                  v278->fields.popColor = 1;
                  v95 = isCommandSideEffect;
                  v190 = v133->fields._targetId_k__BackingField;
                  v259 = index;
                  v189 = v20;
                  v258 = isCommandSideEffect;
                  v260 = dataVals_k__BackingField;
                  v261 = (BattleActionData_BuffData_o *)v278;
                  goto LABEL_284;
                }
                if ( FuncList__Check(62, *p_funcType, 0LL) )
                {
                  v274 = v20;
                  v275 = dataVals_k__BackingField;
                  v273 = 0;
                  goto LABEL_307;
                }
                if ( FuncList__Check(53, *p_funcType, 0LL) )
                {
                  v279 = (Generator_BGFromQuickChangeBGFunc_o *)sub_1B4D1DC(Generator_BGFromQuickChangeBGFunc_TypeInfo);
                  Generator_BGFromQuickChangeBGFunc___ctor(v279, dataVals_k__BackingField, 0LL);
                  BattleLogicFunction__FunctionQuickChangeBG(v20, args, (Generator_Background_o *)v279, v280);
                  goto LABEL_184;
                }
                if ( FuncList__Check(54, *p_funcType, 0LL) )
                {
                  this = (BattleLogicFunction_o *)v135[3].klass;
                  if ( !this )
                    goto LABEL_462;
                  if ( ServantEntity__isInvalidSkillShift((ServantEntity_o *)this, 0LL) )
                  {
                    v190 = v133->fields._targetId_k__BackingField;
LABEL_282:
                    v95 = isCommandSideEffect;
                    v189 = v20;
LABEL_283:
                    v258 = v95;
                    v259 = index;
                    v260 = dataVals_k__BackingField;
                    v261 = 0LL;
LABEL_284:
                    v199 = BattleLogicFunction__getNoEffectObject(v189, v190, v259, v260, v258, 0LL, v261, v169);
LABEL_285:
                    BattleActionData__addAction(v19, v199, 0LL);
                    goto LABEL_165;
                  }
                  Param = DataVals__GetParam(dataVals_k__BackingField, 53, 0, 0LL);
                  BattleLogicFunction__functionShiftServant(v20, v19, (BattleServantData_o *)v135, Param, v282);
                  goto LABEL_184;
                }
                if ( FuncList__Check(55, *p_funcType, 0LL) )
                {
                  v263 = v19->fields.actorId;
                  v264 = (int32_t)v135->fields.logic;
                  v265 = 10;
                  goto LABEL_293;
                }
                if ( FuncList__Check(57, *p_funcType, 0LL) )
                {
                  LODWORD(v135[7].fields.logic) = DataVals__GetValue(dataVals_k__BackingField, 0LL);
                  goto LABEL_184;
                }
                if ( FuncList__Check(58, *p_funcType, 0LL) )
                {
                  wkStr = (BattleBuffData_o *)v135[8].fields.wkStr;
                  this = (BattleLogicFunction_o *)DataVals__GetParam(dataVals_k__BackingField, 14, 0, 0LL);
                  if ( !wkStr )
                    goto LABEL_462;
                  BattleBuffData__UpdateForceAllBuffNoAct(wkStr, (int32_t)this, funcEntity->fields.vals, 0LL);
                  v95 = isCommandSideEffect;
                  v186 = (int32_t)v135->fields.logic;
                  v187 = funcEntity;
                  goto LABEL_191;
                }
                if ( FuncList__Check(59, *p_funcType, 0LL) )
                {
                  v284 = (BattleActionData_UpShiftGaugeData_o *)sub_1B4D1DC(BattleActionData_UpShiftGaugeData_TypeInfo);
                  BattleActionData_UpShiftGaugeData___ctor(v284, 0LL);
                }
                else
                {
                  if ( !FuncList__Check(60, *p_funcType, 0LL) )
                  {
                    if ( FuncList__Check(61, *p_funcType, 0LL) )
                    {
                      SubMember = BattleLogicFunction__FunctionMoveToLastSubMember(
                                    v20,
                                    (BattleServantData_o *)v135,
                                    funcEntity,
                                    v286,
                                    index,
                                    v287);
                      BattleActionData__addAction(v19, SubMember, 0LL);
                      BattleActionData__UpdateForceBuffEffectAllTrue(v19, 0LL);
LABEL_226:
                      v357 = 1;
                      goto LABEL_184;
                    }
                    if ( FuncList__Check(119, *p_funcType, 0LL) )
                    {
                      BattleLogicFunction__functionMovePosition(v20, v19, (BattleServantData_o *)v135, v289);
                      goto LABEL_184;
                    }
                    if ( FuncList__Check(120, *p_funcType, 0LL) )
                    {
                      BattleLogicFunction__FunctionRevival(v20, v19, v133, v290);
                      goto LABEL_184;
                    }
                    if ( FuncList__Check(121, *p_funcType, 0LL) )
                    {
                      v263 = v19->fields.actorId;
                      v264 = (int32_t)v135->fields.logic;
                      v265 = 11;
                    }
                    else
                    {
                      if ( !FuncList__Check(143, *p_funcType, 0LL) )
                      {
                        if ( FuncList__Check(124, *p_funcType, 0LL) )
                        {
                          BattleLogicFunction__functionMoveState(v20, args, v19, v133, v291);
                          goto LABEL_184;
                        }
                        if ( FuncList__Check(125, *p_funcType, 0LL) )
                        {
                          BattleLogicFunction__ChangeBGMCostume(v20, dataVals_k__BackingField, v19, v292);
                          goto LABEL_184;
                        }
                        v293 = FuncList__Check(126, *p_funcType, 0LL);
                        if ( v293 )
                        {
                          BattleLogicFunction__LossCommandSpell(
                            (BattleLogicFunction_o *)v293,
                            dataVals_k__BackingField,
                            v19,
                            v294);
                          goto LABEL_184;
                        }
                        if ( FuncList__Check(127, *p_funcType, 0LL) )
                          goto LABEL_184;
                        if ( FuncList__Check(128, *p_funcType, 0LL) )
                        {
                          BattleLogicFunction__FunctionUpdateEntryPositions(v20, dataVals_k__BackingField, v295);
                          goto LABEL_184;
                        }
                        if ( FuncList__Check(63, *p_funcType, 0LL) )
                        {
                          BattleLogicFunction__FunctionUpdateEntryMaxCountEachTurn(v20, dataVals_k__BackingField, v296);
                          goto LABEL_184;
                        }
                        if ( FuncList__Check(130, *p_funcType, 0LL) )
                        {
                          BattleLogicFunction__FunctionToFieldAddChangeFieldBuff(
                            v20,
                            args,
                            v19,
                            v133,
                            isTreasureDvc,
                            v297);
                          goto LABEL_184;
                        }
                        if ( FuncList__Check(131, *p_funcType, 0LL) )
                        {
                          BattleLogicFunction__FunctionSubFieldBuff(v20, args, v19, v133, v298);
                          goto LABEL_184;
                        }
                        if ( FuncList__Check(134, *p_funcType, 0LL) )
                        {
                          this = (BattleLogicFunction_o *)DataVals__GetValue(dataVals_k__BackingField, 0LL);
                          if ( !v20->fields.data )
                            goto LABEL_462;
                          BattleData__AddQuestRouteId(v20->fields.data, (int32_t)this, 0LL);
                          goto LABEL_184;
                        }
                        if ( FuncList__Check(135, *p_funcType, 0LL) )
                        {
                          BattleLogicFunction__FunctionLastSkillCopy(v20, v19, dataVals_k__BackingField, args, v299);
                          goto LABEL_184;
                        }
                        if ( FuncList__Check(136, *p_funcType, 0LL) )
                        {
                          v300 = DataVals__GetValue(dataVals_k__BackingField, 0LL);
                          BattleLogicFunction__FunctionChangeEnemyMasterFace(v20, v300, v301);
                          goto LABEL_184;
                        }
                        if ( FuncList__Check(137, *p_funcType, 0LL) )
                        {
                          v235 = v19->fields.actorId;
                          v236 = (int32_t)v135->fields.logic;
                          v237 = ((__int64 (__fastcall *)(BattleLogicFunction_o *, void *))v135->klass[1]._1.parent)(
                                   v135,
                                   v135->klass[1]._1.generic_class) > 1;
LABEL_233:
                          v239 = v20;
                          v240 = v235;
                          v241 = v236;
LABEL_236:
                          v216 = BattleLogicFunction__functionValueDamage(
                                   v239,
                                   v240,
                                   v241,
                                   dataVals_k__BackingField,
                                   index,
                                   v237,
                                   v19,
                                   v238);
                          goto LABEL_220;
                        }
                        if ( FuncList__Check(138, *p_funcType, 0LL) )
                        {
                          BattleLogicFunction__FunctionAddBattleValue(v20, funcEntity, v302);
                          goto LABEL_184;
                        }
                        if ( FuncList__Check(139, *p_funcType, 0LL) )
                        {
                          BattleLogicFunction__FunctionSetBattleValue(v20, funcEntity, v303);
                          goto LABEL_184;
                        }
                        if ( FuncList__Check(140, *p_funcType, 0LL) )
                        {
                          monitor_high = SHIDWORD(v135[4].monitor);
                          v307 = (float)(DataVals__GetValue(dataVals_k__BackingField, 0LL) * monitor_high) / 1000.0;
                          if ( v307 == INFINITY )
                            v308 = 0x80000000;
                          else
                            v308 = (int)v307;
                          v216 = BattleLogicFunction__functionGainNp(
                                   v20,
                                   args,
                                   v305,
                                   targetId_k__BackingField,
                                   dataVals_k__BackingField,
                                   v308,
                                   v306);
                          goto LABEL_220;
                        }
                        if ( !FuncList__Check(141, *p_funcType, 0LL) )
                        {
                          if ( FuncList__Check(142, *p_funcType, 0LL) )
                          {
                            v216 = BattleLogicFunction__FunctionAddBattlePoint(
                                     v20,
                                     args,
                                     targetId_k__BackingField,
                                     dataVals_k__BackingField,
                                     v315);
                            if ( !v216 )
                              goto LABEL_184;
                          }
                          else
                          {
                            if ( !FuncList__Check(144, *p_funcType, 0LL) )
                            {
                              this = (BattleLogicFunction_o *)FuncList__Check(145, *p_funcType, 0LL);
                              if ( ((unsigned __int8)this & 1) != 0 )
                              {
                                v317 = v20->fields.data;
                                if ( !v317 )
                                  goto LABEL_462;
                                perf = (UnityEngine_Object_o *)v317->fields.perf;
                                if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
                                  j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
                                this = (BattleLogicFunction_o *)UnityEngine_Object__op_Inequality(perf, 0LL, 0LL);
                                if ( ((unsigned __int8)this & 1) != 0 )
                                {
                                  v319 = v20->fields.data;
                                  if ( !v319 )
                                    goto LABEL_462;
                                  this = (BattleLogicFunction_o *)v319->fields.perf;
                                  if ( !this )
                                    goto LABEL_462;
                                  BattlePerformance__HideOverGaugeMessage((BattlePerformance_o *)this, 0LL);
                                }
                              }
                              else
                              {
                                v320 = FuncList__Check(147, *p_funcType, 0LL);
                                if ( v320 )
                                {
                                  BattleLogicFunction__SetEnemyCountChangeActionData(
                                    (BattleLogicFunction_o *)v320,
                                    dataVals_k__BackingField,
                                    v19,
                                    v321);
                                }
                                else
                                {
                                  v322 = FuncList__Check(148, *p_funcType, 0LL);
                                  if ( v322 )
                                  {
                                    BattleLogicFunction__SetDisplayBattleMessage(
                                      (BattleLogicFunction_o *)v322,
                                      v19,
                                      v133,
                                      v323);
                                  }
                                  else
                                  {
                                    v324 = FuncList__Check(149, *p_funcType, 0LL);
                                    if ( v324 )
                                      BattleLogicFunction__SetBattleSkillDropGeneratorBuff(
                                        (BattleLogicFunction_o *)v324,
                                        v19,
                                        args,
                                        targetId_k__BackingField,
                                        dataVals_k__BackingField,
                                        v325);
                                  }
                                }
                              }
                              goto LABEL_184;
                            }
                            v216 = BattleLogicFunction__FunctionSetNpExecutedState(
                                     v20,
                                     args,
                                     targetId_k__BackingField,
                                     dataVals_k__BackingField,
                                     v316);
                          }
                          goto LABEL_220;
                        }
                        v309 = SHIDWORD(v135[4].monitor);
                        v310 = (float)(DataVals__GetValue(dataVals_k__BackingField, 0LL) * v309) / 1000.0;
                        v311 = (int)v310;
                        if ( v310 == INFINITY )
                          v311 = 0x80000000;
                        v312 = (BattleLogicFunction_o *)BattleServantData__addNp(
                                                          (BattleServantData_o *)v135,
                                                          -v311,
                                                          0,
                                                          0LL);
                        v313 = (int)v312;
                        this = (BattleLogicFunction_o *)BattleLogicFunction__getFunctionObject(
                                                          v312,
                                                          funcEntity,
                                                          (int32_t)v135->fields.logic,
                                                          index,
                                                          isCommandSideEffect,
                                                          0LL,
                                                          v314);
                        if ( !this )
                          goto LABEL_462;
                        v173 = (BattleActionData_BuffData_o *)this;
                        HIDWORD(this->fields.logic) = 3;
                        v178 = v313;
LABEL_182:
                        BattleActionData_BuffData__setSaveNp((BattleActionData_BuffData_o *)this, v178, 0LL);
                        goto LABEL_183;
                      }
                      v263 = v19->fields.actorId;
                      v264 = (int32_t)v135->fields.logic;
                      v265 = 12;
                    }
LABEL_293:
                    v216 = BattleLogicFunction__functionNPDamage(
                             v20,
                             v263,
                             v264,
                             dataVals_k__BackingField,
                             index,
                             v265,
                             v19,
                             v262);
                    goto LABEL_220;
                  }
                  v284 = (BattleActionData_UpShiftGaugeData_o *)sub_1B4D1DC(BattleActionData_DownShiftGaugeData_TypeInfo);
                  BattleActionData_DownShiftGaugeData___ctor((BattleActionData_DownShiftGaugeData_o *)v284, 0LL);
                }
                BattleLogicFunction__functionBreakGaugeChange(
                  v20,
                  v19,
                  funcUnit,
                  (BattleServantData_o *)v135,
                  (BattleActionData_BaseShiftGaugeData_o *)v284,
                  v285);
                goto LABEL_184;
              }
              if ( BattleServantData__checkPlayer((BattleServantData_o *)v135, 0LL) )
              {
                v174 = DataVals__GetValue(dataVals_k__BackingField, 0LL);
                v175 = (BattleLogicFunction_o *)BattleServantData__addNp((BattleServantData_o *)v135, -v174, 0, 0LL);
                v176 = (int)v175;
                this = (BattleLogicFunction_o *)BattleLogicFunction__getFunctionObject(
                                                  v175,
                                                  funcEntity,
                                                  (int32_t)v135->fields.logic,
                                                  index,
                                                  v95,
                                                  0LL,
                                                  v177);
                if ( !this )
                  goto LABEL_462;
                v173 = (BattleActionData_BuffData_o *)this;
                v178 = v176;
                HIDWORD(this->fields.logic) = 3;
                goto LABEL_182;
              }
            }
LABEL_165:
            v138 = &funcEntity->fields.funcType;
LABEL_135:
            isDamage = FuncList__isDamage(*v138, 0LL);
            if ( isDamage )
              v155 = 0;
            else
              v155 = -106;
            if ( isDamage )
              v156 = 0;
            else
              v156 = 150;
            if ( v155 != -106 )
            {
              if ( v156 )
                return v19;
              if ( !LOBYTE(v135[9].fields.buffProgressTurnOpponentList) )
              {
                this = (BattleLogicFunction_o *)v135[8].fields.wkStr;
                if ( !this )
                  goto LABEL_462;
                if ( !LOBYTE(this[1].fields.buffProgressTurnOpponentList) )
                {
                  LOBYTE(v135[9].fields.buffProgressTurnOpponentList) = 1;
                  if ( !v360 )
                    goto LABEL_462;
                  action = (BattleActionData_o *)LODWORD(v135->fields.logic);
                  items = v360->fields._items;
                  v158 = Method_System_Collections_Generic_List_int__Add__;
                  ++v360->fields._version;
                  if ( !items )
                    goto LABEL_462;
                  size = v360->fields._size;
                  if ( (unsigned int)size >= items->max_length )
                  {
                    System_Collections_Generic_List_int___AddWithResize(
                      v360,
                      (int32_t)action,
                      *(const MethodInfo_35631B8 **)(*(_QWORD *)(v158[4] + 192LL) + 112LL));
                    this = (BattleLogicFunction_o *)v135[8].fields.wkStr;
                    if ( !this )
                      goto LABEL_462;
                  }
                  else
                  {
                    v360->fields._size = size + 1;
                    items->m_Items[size + 1] = (int)action;
                  }
                  v160 = BattleBuffData__UseProgressingDoNotAct(
                           (BattleBuffData_o *)this,
                           (BattleServantData_o *)v135,
                           0,
                           0LL);
                  BattleActionData__addSideEffectActionData(v19, v160, 1, 0LL);
                  this = (BattleLogicFunction_o *)v135[8].fields.wkStr;
                  if ( !this )
                    goto LABEL_462;
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
              v161);
LABEL_154:
            v131 = v130->max_length;
          }
        }
        if ( !isCreateSideEffect )
          goto LABEL_415;
        v99 = v362;
        v103 = v366;
        if ( !funcEntity )
          goto LABEL_462;
        v326 = FuncList__Check(26, *p_funcType, 0LL);
        v327 = (BattleLogicFunction_AfterAttackSideEffectMakeArgument_o *)sub_1B4D1DC(BattleLogicFunction_AfterAttackSideEffectMakeArgument_TypeInfo);
        BattleLogicFunction_AfterAttackSideEffectMakeArgument___ctor(v327, 0LL);
        if ( !v327 )
          goto LABEL_462;
        Argument__Init = BattleLogicFunction_AfterAttackSideEffectMakeArgument__Init(v327, v19, 0LL);
        BattleLogicFunction__setAttackSideEffect(v20, v19, actionSvtData, v326 || isTreasureDvc, Argument__Init, v329);
        this = (BattleLogicFunction_o *)BattleActionData__getDamageTargetIdList(v19, 0LL);
        if ( !this )
          goto LABEL_462;
        v95 = isCommandSideEffect;
        v330 = this;
        if ( this->fields.logic )
          break;
      }
LABEL_418:
      v100 = v99->max_length;
      if ( (int)++v103 >= v100 )
        goto LABEL_421;
    }
    if ( v359 )
    {
      v331 = 0LL;
    }
    else
    {
      v331 = (BattleCommandData_o *)sub_1B4D1DC(BattleCommandData_TypeInfo);
      BattleCommandData___ctor(v331, 0LL);
      this = (BattleLogicFunction_o *)BattleServantData__getTreasureDvcCardId(actionSvtData, 0LL);
      if ( !v331 )
        goto LABEL_462;
      v331->fields._type = (int)this;
      v331->fields.treasureDvc = BattleServantData__getTreasureDvcId(actionSvtData, 1, 0LL, 0LL);
    }
    v332 = (UnityEngine_Object_o *)v20->fields.logic;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    this = (BattleLogicFunction_o *)UnityEngine_Object__op_Inequality(v332, 0LL, 0LL);
    if ( ((unsigned __int8)this & 1) != 0 && (v333 = v330->fields.logic, (int)v333 >= 1) )
    {
      v334 = 0LL;
      do
      {
        if ( v334 >= (unsigned int)v333 )
          goto LABEL_463;
        this = (BattleLogicFunction_o *)v20->fields.logic;
        if ( !this )
          goto LABEL_462;
        this = (BattleLogicFunction_o *)BattleLogic__SetDamageSideEffect(
                                          (BattleLogic_o *)this,
                                          v19,
                                          v19->fields.actorId,
                                          *((_DWORD *)&v330->fields.logictarget + v334),
                                          v331,
                                          0LL);
        LODWORD(v333) = v330->fields.logic;
        ++v334;
      }
      while ( (__int64)v334 < (int)v333 );
      v95 = isCommandSideEffect;
LABEL_415:
      v99 = v362;
    }
    else
    {
      v95 = isCommandSideEffect;
    }
    v103 = v366;
    goto LABEL_418;
  }
  v357 = 0;
  v358 = 0;
LABEL_421:
  this = (BattleLogicFunction_o *)BattleLogicFunction_ProcListInArgs__get_CheckDuplicateFunc(args, 0LL);
  if ( !this )
    goto LABEL_462;
  ((void (__fastcall *)(BattleLogicFunction_o *, void *))this->klass[1]._1.namespaze)(
    this,
    this->klass[1]._1.byval_arg.data);
  if ( (v358 & 1) != 0 )
  {
    this = (BattleLogicFunction_o *)v20->fields.data;
    if ( !this )
      goto LABEL_462;
    this = (BattleLogicFunction_o *)BattleData__getServantData((BattleData_o *)this, v19->fields.actorId, 0LL);
    if ( !this )
      goto LABEL_462;
    BattleServantData__resetAccumulationDamage((BattleServantData_o *)this, 0LL);
  }
  if ( BattleActionData__checkSummonServantList(v19, 0LL) )
  {
    v335 = (UnityEngine_Object_o *)v20->fields.logic;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    if ( UnityEngine_Object__op_Inequality(v335, 0LL, 0LL) )
    {
      this = (BattleLogicFunction_o *)BattleActionData__getSummonServant(v19, -1, 0LL);
      if ( !this )
        goto LABEL_462;
      v336 = (int)this->fields.logic;
      v337 = this;
      if ( v336 >= 1 )
      {
        v338 = 0;
        while ( v338 < v336 )
        {
          v339 = *((_QWORD *)&v337->fields.logictarget + (int)v338);
          if ( !v339 )
            goto LABEL_462;
          this = (BattleLogicFunction_o *)v20->fields.logic;
          if ( !this )
            goto LABEL_462;
          BattleLogic__actEnemyPassiveSkill((BattleLogic_o *)this, *(_DWORD *)(v339 + 28), 0LL);
          v336 = (int)v337->fields.logic;
          if ( (int)++v338 >= v336 )
            goto LABEL_437;
        }
        goto LABEL_463;
      }
    }
  }
LABEL_437:
  FuncSideEffectArg = BattleLogicFunction_ProcListInArgs__get_FuncSideEffectArg(args, 0LL);
  if ( FuncSideEffectArg )
    ((void (__fastcall *)(BattleLogicFunction_FuncSideEffectFunctionArgument_o *, BattleLogicFunction_o *, BattleActionData_o *, BattleServantData_o *, void *))FuncSideEffectArg->klass->vtable._7_SetSideEffect.method)(
      FuncSideEffectArg,
      v20,
      v19,
      actionSvtData,
      FuncSideEffectArg->klass[1]._1.image);
  if ( isBuffUpdate )
  {
    v341 = (UnityEngine_Object_o *)v20->fields.logic;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    if ( UnityEngine_Object__op_Inequality(v341, 0LL, 0LL) )
    {
      this = (BattleLogicFunction_o *)v20->fields.logic;
      if ( !this )
        goto LABEL_462;
      BattleLogic__checkUsedBuff((BattleLogic_o *)this, 0LL);
      v342 = v20->fields.data;
      if ( !v342 )
        goto LABEL_462;
      this = (BattleLogicFunction_o *)v342->fields._FieldEnvData_k__BackingField;
      if ( !this )
        goto LABEL_462;
      BattleFieldEnvironmentData__CheckUsedBuff((BattleFieldEnvironmentData_o *)this, 0LL);
    }
  }
  if ( (v357 & 1) != 0 || args->fields.updateField )
  {
    v343 = (UnityEngine_Object_o *)v20->fields.logic;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    if ( UnityEngine_Object__op_Inequality(v343, 0LL, 0LL) )
    {
      this = (BattleLogicFunction_o *)v20->fields.logic;
      if ( !this )
        goto LABEL_462;
      BattleLogic__updateFieldBuff((BattleLogic_o *)this, 0LL);
    }
  }
  this = (BattleLogicFunction_o *)v360;
  if ( !v360 )
LABEL_462:
    sub_1B4D1EC(this, action);
  System_Collections_Generic_List_int___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v373,
    v360,
    (const MethodInfo_3563C8C *)Method_System_Collections_Generic_List_int__GetEnumerator__);
  v374 = v373;
  while ( System_Collections_Generic_List_Enumerator_int___MoveNext(
            &v374,
            (const MethodInfo_3304A70 *)Method_System_Collections_Generic_List_Enumerator_int__MoveNext__) )
  {
    v345 = v20->fields.data;
    if ( !v345 )
      sub_1B4D1EC(0LL, v344);
    v346 = BattleData__getServantData(v345, v374.fields._current, 0LL);
    if ( v346 )
      v346->fields.isTDLimitCount = 0;
  }
  System_Collections_Generic_List_Enumerator_int___Dispose(
    &v374,
    (const MethodInfo_3304A6C *)Method_System_Collections_Generic_List_Enumerator_int__Dispose__);
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
  __int64 v11; // x1
  __int64 v12; // x1
  __int64 v13; // x1
  __int64 v14; // x1
  __int64 v15; // x1
  __int64 v16; // x1
  __int64 v17; // x1
  BattleCommandData_o *v18; // x23
  BattleLogicFunction_AttackSideEffectFunctionArgument_o *v19; // x24
  System_Collections_Generic_IEnumerable_TSource__o *SideEffectList_k__BackingField; // x25
  BattleLogicFunction___c_c *v21; // x0
  System_Func_object__int__o *_9__52_0; // x26
  Il2CppObject *v23; // x27
  struct BattleLogicFunction___c_StaticFields *static_fields; // x0
  int32_t v25; // w2
  const MethodInfo *v26; // x3
  System_Collections_Generic_IEnumerable_TSource__o *v27; // x0
  __int64 v28; // x25
  BattleLogicFunction_SideEffectMakeArgument_o *v29; // x0
  const MethodInfo *v30; // x6
  const MethodInfo *v31; // x6

  v9 = mainAction;
  v10 = this;
  if ( (byte_49BDB85 & 1) == 0 )
  {
    sub_1B4CF90(&BattleLogicFunction_AttackSideEffectFunctionArgument_TypeInfo, mainAction);
    sub_1B4CF90(&BattleCommandData_TypeInfo, v11);
    sub_1B4CF90(&Method_System_Linq_Enumerable_Select_BattleActionData_SideEffectData__int___, v12);
    sub_1B4CF90(&Method_System_Linq_Enumerable_ToArray_int___, v13);
    sub_1B4CF90(&System_Func_BattleActionData_SideEffectData__int__TypeInfo, v14);
    sub_1B4CF90(&int___TypeInfo, v15);
    sub_1B4CF90(&Method_BattleLogicFunction___c__setAttackSideEffect_b__52_0__, v16);
    this = (BattleLogicFunction_o *)sub_1B4CF90(&BattleLogicFunction___c_TypeInfo, v17);
    byte_49BDB85 = 1;
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
      v18 = (BattleCommandData_o *)sub_1B4D1DC(BattleCommandData_TypeInfo);
      BattleCommandData___ctor(v18, 0LL);
      this = (BattleLogicFunction_o *)BattleServantData__getTreasureDvcCardId(actionSvtData, 0LL);
      if ( !v18 )
        goto LABEL_22;
      v18->fields._type = (int)this;
      v18->fields.treasureDvc = BattleServantData__getTreasureDvcId(actionSvtData, 1, 0LL, 0LL);
    }
    else
    {
      v18 = 0LL;
    }
    v19 = (BattleLogicFunction_AttackSideEffectFunctionArgument_o *)sub_1B4D1DC(BattleLogicFunction_AttackSideEffectFunctionArgument_TypeInfo);
    BattleLogicFunction_AttackSideEffectFunctionArgument___ctor(v19, 0LL);
    SideEffectList_k__BackingField = (System_Collections_Generic_IEnumerable_TSource__o *)attackArg->fields._SideEffectList_k__BackingField;
    v21 = BattleLogicFunction___c_TypeInfo;
    if ( !BattleLogicFunction___c_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(BattleLogicFunction___c_TypeInfo);
      v21 = BattleLogicFunction___c_TypeInfo;
    }
    _9__52_0 = (System_Func_object__int__o *)v21->static_fields->__9__52_0;
    if ( !_9__52_0 )
    {
      if ( !v21->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(v21);
        v21 = BattleLogicFunction___c_TypeInfo;
      }
      v23 = (Il2CppObject *)v21->static_fields->__9;
      _9__52_0 = (System_Func_object__int__o *)sub_1B4D1DC(System_Func_BattleActionData_SideEffectData__int__TypeInfo);
      System_Func_object__int____ctor(_9__52_0, v23, Method_BattleLogicFunction___c__setAttackSideEffect_b__52_0__, 0LL);
      static_fields = BattleLogicFunction___c_TypeInfo->static_fields;
      static_fields->__9__52_0 = (struct System_Func_BattleActionData_SideEffectData__int__o *)_9__52_0;
      sub_1B4CF34((CGThumbnailListItem_o *)&static_fields->__9__52_0, (int32_t)_9__52_0, v25, v26);
    }
    v27 = (System_Collections_Generic_IEnumerable_TSource__o *)System_Linq_Enumerable__Select_object__int_(
                                                                 SideEffectList_k__BackingField,
                                                                 (System_Func_TSource__TResult__o *)_9__52_0,
                                                                 (const MethodInfo_2F338DC *)Method_System_Linq_Enumerable_Select_BattleActionData_SideEffectData__int___);
    this = (BattleLogicFunction_o *)System_Linq_Enumerable__ToArray_int_(
                                      v27,
                                      (const MethodInfo_2F3C24C *)Method_System_Linq_Enumerable_ToArray_int___);
    if ( v9 )
    {
      BattleActionData__SetFirstAtkMainTargetId(v9, (System_Int32_array *)this, 0LL);
      v28 = ((__int64 (__fastcall *)(BattleLogicFunction_SideEffectMakeArgument_o *, const char *))attackArg->klass[1]._1.gc_desc)(
              attackArg,
              attackArg->klass[1]._1.name);
      this = (BattleLogicFunction_o *)sub_1B4D038(int___TypeInfo, 1LL);
      if ( this )
      {
        mainAction = (BattleActionData_o *)this;
        if ( !LODWORD(this->fields.logic) )
          sub_1B4D1F4(this, this);
        LODWORD(this->fields.logictarget) = v9->fields._FirstAtkMainTargetId_k__BackingField;
        if ( v28 )
        {
          v29 = (BattleLogicFunction_SideEffectMakeArgument_o *)(*(__int64 (__fastcall **)(__int64, BattleLogicFunction_o *, _QWORD))(*(_QWORD *)v28 + 408LL))(
                                                                  v28,
                                                                  this,
                                                                  *(_QWORD *)(*(_QWORD *)v28 + 416LL));
          BattleLogicFunction__SetTargetAttackSideEffect(v10, v19, v9, actionSvtData, v18, v29, v30);
          BattleLogicFunction__SetTargetAttackSideEffect(v10, v19, v9, actionSvtData, v18, attackArg, v31);
          return;
        }
      }
    }
LABEL_22:
    sub_1B4D1EC(this, mainAction);
  }
}


BattleLogicFunction_SideEffectMakeArgument_o *__fastcall BattleLogicFunction_AfterAttackSideEffectMakeArgument__Init(
        BattleLogicFunction_AfterAttackSideEffectMakeArgument_o *this,
        BattleActionData_o *mainAction,
        const MethodInfo *method)
{
  struct BattleActionData_SideEffectData_array *DamageAttackSideEffectList; // x0
  int32_t v5; // w2
  const MethodInfo *v6; // x3

  if ( !mainAction )
    sub_1B4D1EC(this, 0LL);
  DamageAttackSideEffectList = BattleActionData__getDamageAttackSideEffectList(mainAction, 0LL);
  this->fields._SideEffectList_k__BackingField = DamageAttackSideEffectList;
  sub_1B4CF34((CGThumbnailListItem_o *)&this->fields, (int32_t)DamageAttackSideEffectList, v5, v6);
  return (BattleLogicFunction_SideEffectMakeArgument_o *)this;
}


BattleLogicFunction_SideEffectMakeArgument_o *__fastcall BattleLogicFunction_AfterAttackSideEffectMakeArgument__MakeOnlyMainArgument(
        BattleLogicFunction_AfterAttackSideEffectMakeArgument_o *this,
        const MethodInfo *method)
{
  BattleLogicFunction_SideEffectMakeArgument_o *v2; // x19
  const MethodInfo *v3; // x1

  if ( (byte_49BDC51 & 1) == 0 )
  {
    sub_1B4CF90(&BattleLogicFunction_AfterMainAttackSideEffectMakeArgument_TypeInfo, method);
    byte_49BDC51 = 1;
  }
  v2 = (BattleLogicFunction_SideEffectMakeArgument_o *)sub_1B4D1DC(BattleLogicFunction_AfterMainAttackSideEffectMakeArgument_TypeInfo);
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
  const MethodInfo *v6; // x3

  BattleLogicFunction_CommonCheckDuplicateFunction___ctor(
    (BattleLogicFunction_CommonCheckDuplicateFunction_o *)this,
    (const MethodInfo *)argument);
  this->fields.argument = argument;
  sub_1B4CF34((CGThumbnailListItem_o *)&this->fields.argument, (int32_t)argument, v5, v6);
}


void __fastcall BattleLogicFunction_AttackSideEffectFunctionArgument___ctor(
        BattleLogicFunction_AttackSideEffectFunctionArgument_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x20
  const MethodInfo *v4; // x1
  int32_t v5; // w2
  const MethodInfo *v6; // x3
  int32_t v7; // w2
  const MethodInfo *v8; // x3

  if ( (byte_49BDC35 & 1) == 0 )
  {
    sub_1B4CF90(&BattleLogicFunction_AttackSideEffectCheckDuplicateFunction_TypeInfo, method);
    byte_49BDC35 = 1;
  }
  BattleLogicFunction_CommonSideEffectFunctionArgument___ctor(
    (BattleLogicFunction_CommonSideEffectFunctionArgument_o *)this,
    method);
  v3 = sub_1B4D1DC(BattleLogicFunction_AttackSideEffectCheckDuplicateFunction_TypeInfo);
  BattleLogicFunction_CommonCheckDuplicateFunction___ctor((BattleLogicFunction_CommonCheckDuplicateFunction_o *)v3, v4);
  *(_QWORD *)(v3 + 24) = this;
  sub_1B4CF34((CGThumbnailListItem_o *)(v3 + 24), (int32_t)this, v5, v6);
  this->fields.checkDuplicate = (struct BattleLogicFunction_CheckDuplicateFunction_o *)v3;
  sub_1B4CF34((CGThumbnailListItem_o *)&this->fields.checkDuplicate, v3, v7, v8);
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
  __int64 v3; // x1
  System_Collections_Generic_List_object__o *v4; // x20
  int32_t v5; // w2
  const MethodInfo *v6; // x3

  if ( (byte_49BDC42 & 1) == 0 )
  {
    sub_1B4CF90(&Method_System_Collections_Generic_List_BattleLogicFunction_ExecutedFunctionData___ctor__, method);
    sub_1B4CF90(&System_Collections_Generic_List_BattleLogicFunction_ExecutedFunctionData__TypeInfo, v3);
    byte_49BDC42 = 1;
  }
  v4 = (System_Collections_Generic_List_object__o *)sub_1B4D1DC(System_Collections_Generic_List_BattleLogicFunction_ExecutedFunctionData__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v4,
    (const MethodInfo_357F9A8 *)Method_System_Collections_Generic_List_BattleLogicFunction_ExecutedFunctionData___ctor__);
  this->fields.executedFuncList = (struct System_Collections_Generic_List_BattleLogicFunction_ExecutedFunctionData__o *)v4;
  sub_1B4CF34((CGThumbnailListItem_o *)&this->fields, (int32_t)v4, v5, v6);
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
  __int64 v3; // x1
  System_Collections_Generic_List_object__o *executedFuncList; // x0
  int32_t v5; // w20

  if ( (byte_49BDC3E & 1) == 0 )
  {
    sub_1B4CF90(&Method_System_Collections_Generic_List_BattleLogicFunction_ExecutedFunctionData__get_Count__, method);
    sub_1B4CF90(&Method_System_Collections_Generic_List_BattleLogicFunction_ExecutedFunctionData__get_Item__, v3);
    byte_49BDC3E = 1;
  }
  executedFuncList = (System_Collections_Generic_List_object__o *)this->fields.executedFuncList;
  if ( !executedFuncList )
LABEL_8:
    sub_1B4D1EC(executedFuncList, method);
  v5 = 0;
  while ( v5 < executedFuncList->fields._size )
  {
    executedFuncList = (System_Collections_Generic_List_object__o *)System_Collections_Generic_List_object___get_Item(
                                                                      executedFuncList,
                                                                      v5,
                                                                      (const MethodInfo_357FF0C *)Method_System_Collections_Generic_List_BattleLogicFunction_ExecutedFunctionData__get_Item__);
    if ( executedFuncList )
    {
      LOBYTE(executedFuncList->fields._size) = 1;
      executedFuncList = (System_Collections_Generic_List_object__o *)this->fields.executedFuncList;
      ++v5;
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
    sub_1B4D1EC(this, 0LL);
  return DataVals__isCheckDuplicate(vals, 0LL);
}


bool __fastcall BattleLogicFunction_CommonCheckDuplicateFunction__isExecutedFunction(
        BattleLogicFunction_CommonCheckDuplicateFunction_o *this,
        DataVals_o *vals,
        const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x21
  __int64 v9; // x0
  __int64 v10; // x1
  int32_t v11; // w2
  const MethodInfo *v12; // x3
  System_Collections_Generic_List_object__o *executedFuncList; // x19
  System_Predicate_object__o *v14; // x20

  if ( (byte_49BDC40 & 1) == 0 )
  {
    sub_1B4CF90(&Method_System_Collections_Generic_List_BattleLogicFunction_ExecutedFunctionData__FindIndex__, vals);
    sub_1B4CF90(&System_Predicate_BattleLogicFunction_ExecutedFunctionData__TypeInfo, v5);
    sub_1B4CF90(
      &Method_BattleLogicFunction_CommonCheckDuplicateFunction___c__DisplayClass7_0__isExecutedFunction_b__0__,
      v6);
    sub_1B4CF90(&BattleLogicFunction_CommonCheckDuplicateFunction___c__DisplayClass7_0_TypeInfo, v7);
    byte_49BDC40 = 1;
  }
  v8 = sub_1B4D1DC(BattleLogicFunction_CommonCheckDuplicateFunction___c__DisplayClass7_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v8, 0LL);
  if ( !v8
    || (*(_QWORD *)(v8 + 16) = vals,
        sub_1B4CF34((CGThumbnailListItem_o *)(v8 + 16), (int32_t)vals, v11, v12),
        executedFuncList = (System_Collections_Generic_List_object__o *)this->fields.executedFuncList,
        v14 = (System_Predicate_object__o *)sub_1B4D1DC(System_Predicate_BattleLogicFunction_ExecutedFunctionData__TypeInfo),
        System_Predicate_object____ctor(
          v14,
          (Il2CppObject *)v8,
          Method_BattleLogicFunction_CommonCheckDuplicateFunction___c__DisplayClass7_0__isExecutedFunction_b__0__,
          0LL),
        !executedFuncList) )
  {
    sub_1B4D1EC(v9, v10);
  }
  return System_Collections_Generic_List_object___FindIndex(
           executedFuncList,
           (System_Predicate_T__o *)v14,
           (const MethodInfo_3580A34 *)Method_System_Collections_Generic_List_BattleLogicFunction_ExecutedFunctionData__FindIndex__) >= 0;
}


bool __fastcall BattleLogicFunction_CommonCheckDuplicateFunction__isExecutedTarget(
        BattleLogicFunction_CommonCheckDuplicateFunction_o *this,
        DataVals_o *vals,
        int32_t targetId,
        const MethodInfo *method)
{
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x22
  __int64 v11; // x0
  __int64 v12; // x1
  int32_t v13; // w2
  const MethodInfo *v14; // x3
  System_Collections_Generic_List_object__o *executedFuncList; // x19
  System_Predicate_object__o *v16; // x20

  if ( (byte_49BDC41 & 1) == 0 )
  {
    sub_1B4CF90(&Method_System_Collections_Generic_List_BattleLogicFunction_ExecutedFunctionData__FindIndex__, vals);
    sub_1B4CF90(&System_Predicate_BattleLogicFunction_ExecutedFunctionData__TypeInfo, v7);
    sub_1B4CF90(
      &Method_BattleLogicFunction_CommonCheckDuplicateFunction___c__DisplayClass8_0__isExecutedTarget_b__0__,
      v8);
    sub_1B4CF90(&BattleLogicFunction_CommonCheckDuplicateFunction___c__DisplayClass8_0_TypeInfo, v9);
    byte_49BDC41 = 1;
  }
  v10 = sub_1B4D1DC(BattleLogicFunction_CommonCheckDuplicateFunction___c__DisplayClass8_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v10, 0LL);
  if ( !v10
    || (*(_QWORD *)(v10 + 16) = vals,
        sub_1B4CF34((CGThumbnailListItem_o *)(v10 + 16), (int32_t)vals, v13, v14),
        *(_DWORD *)(v10 + 24) = targetId,
        executedFuncList = (System_Collections_Generic_List_object__o *)this->fields.executedFuncList,
        v16 = (System_Predicate_object__o *)sub_1B4D1DC(System_Predicate_BattleLogicFunction_ExecutedFunctionData__TypeInfo),
        System_Predicate_object____ctor(
          v16,
          (Il2CppObject *)v10,
          Method_BattleLogicFunction_CommonCheckDuplicateFunction___c__DisplayClass8_0__isExecutedTarget_b__0__,
          0LL),
        !executedFuncList) )
  {
    sub_1B4D1EC(v11, v12);
  }
  return System_Collections_Generic_List_object___FindIndex(
           executedFuncList,
           (System_Predicate_T__o *)v16,
           (const MethodInfo_3580A34 *)Method_System_Collections_Generic_List_BattleLogicFunction_ExecutedFunctionData__FindIndex__) >= 0;
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
    sub_1B4D1EC(this, 0LL);
  targetType = vals->fields.targetType;
  if ( targetType < 0x1B || targetType == 32 || targetType == 30 )
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
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x1
  __int64 v12; // x1
  __int64 v13; // x21
  __int64 Index; // x0
  __int64 v15; // x1
  int32_t v16; // w2
  const MethodInfo *v17; // x3
  unsigned __int64 v18; // x26
  __int64 v19; // x22
  int32_t v20; // w2
  const MethodInfo *v21; // x3
  __int64 v22; // x23
  __int64 v23; // x0
  __int64 v24; // x1
  System_Collections_Generic_List_object__o *executedFuncList; // x24
  System_Predicate_object__o *v26; // x25
  DataVals_o *v27; // x24
  System_Collections_Generic_List_object__o *v28; // x23
  int32_t v29; // w25
  BattleLogicFunction_ExecutedFunctionData_o *v30; // x22
  const MethodInfo *v31; // x3
  int32_t v32; // w2
  const MethodInfo *v33; // x3
  struct System_Object_array *items; // x8
  _QWORD *v35; // x9
  __int64 size; // x10
  Il2CppClass **v37; // x0

  if ( (byte_49BDC3F & 1) == 0 )
  {
    sub_1B4CF90(&BattleLogicFunction_ExecutedFunctionData_TypeInfo, vals);
    sub_1B4CF90(&Method_System_Collections_Generic_List_BattleLogicFunction_ExecutedFunctionData__Add__, v7);
    sub_1B4CF90(&Method_System_Collections_Generic_List_BattleLogicFunction_ExecutedFunctionData__FindIndex__, v8);
    sub_1B4CF90(&System_Predicate_BattleLogicFunction_ExecutedFunctionData__TypeInfo, v9);
    sub_1B4CF90(&BattleLogicFunction_CommonCheckDuplicateFunction___c__DisplayClass5_0_TypeInfo, v10);
    sub_1B4CF90(
      &Method_BattleLogicFunction_CommonCheckDuplicateFunction___c__DisplayClass5_1__saveExecutedFunction_b__0__,
      v11);
    sub_1B4CF90(&BattleLogicFunction_CommonCheckDuplicateFunction___c__DisplayClass5_1_TypeInfo, v12);
    byte_49BDC3F = 1;
  }
  v13 = sub_1B4D1DC(BattleLogicFunction_CommonCheckDuplicateFunction___c__DisplayClass5_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v13, 0LL);
  if ( !v13 )
    goto LABEL_19;
  *(_QWORD *)(v13 + 16) = vals;
  sub_1B4CF34((CGThumbnailListItem_o *)(v13 + 16), (int32_t)vals, v16, v17);
  if ( !targetIds )
    goto LABEL_19;
  if ( (int)targetIds->max_length >= 1 )
  {
    v18 = 0LL;
    while ( 1 )
    {
      v19 = sub_1B4D1DC(BattleLogicFunction_CommonCheckDuplicateFunction___c__DisplayClass5_1_TypeInfo);
      System_Object___ctor((Il2CppObject *)v19, 0LL);
      if ( !v19 )
        break;
      *(_QWORD *)(v19 + 24) = v13;
      v22 = v19 + 24;
      sub_1B4CF34((CGThumbnailListItem_o *)(v19 + 24), v13, v20, v21);
      if ( v18 >= targetIds->max_length )
        sub_1B4D1F4(v23, v24);
      *(_DWORD *)(v19 + 16) = targetIds->m_Items[v18 + 1];
      executedFuncList = (System_Collections_Generic_List_object__o *)this->fields.executedFuncList;
      v26 = (System_Predicate_object__o *)sub_1B4D1DC(System_Predicate_BattleLogicFunction_ExecutedFunctionData__TypeInfo);
      System_Predicate_object____ctor(
        v26,
        (Il2CppObject *)v19,
        Method_BattleLogicFunction_CommonCheckDuplicateFunction___c__DisplayClass5_1__saveExecutedFunction_b__0__,
        0LL);
      if ( !executedFuncList )
        break;
      Index = System_Collections_Generic_List_object___FindIndex(
                executedFuncList,
                (System_Predicate_T__o *)v26,
                (const MethodInfo_3580A34 *)Method_System_Collections_Generic_List_BattleLogicFunction_ExecutedFunctionData__FindIndex__);
      if ( (Index & 0x80000000) != 0 )
      {
        if ( !*(_QWORD *)v22 )
          break;
        v27 = *(DataVals_o **)(*(_QWORD *)v22 + 16LL);
        v28 = (System_Collections_Generic_List_object__o *)this->fields.executedFuncList;
        v29 = *(_DWORD *)(v19 + 16);
        v30 = (BattleLogicFunction_ExecutedFunctionData_o *)sub_1B4D1DC(BattleLogicFunction_ExecutedFunctionData_TypeInfo);
        BattleLogicFunction_ExecutedFunctionData___ctor(v30, v27, v29, v31);
        if ( !v28 )
          break;
        items = v28->fields._items;
        v35 = Method_System_Collections_Generic_List_BattleLogicFunction_ExecutedFunctionData__Add__;
        ++v28->fields._version;
        if ( !items )
          break;
        size = v28->fields._size;
        if ( (unsigned int)size >= items->max_length )
        {
          System_Collections_Generic_List_object___AddWithResize(
            v28,
            (Il2CppObject *)v30,
            *(const MethodInfo_35801DC **)(*(_QWORD *)(v35[4] + 192LL) + 112LL));
        }
        else
        {
          v37 = &items->obj.klass + size;
          v28->fields._size = size + 1;
          v37[4] = (Il2CppClass *)v30;
          sub_1B4CF34((CGThumbnailListItem_o *)(v37 + 4), (int32_t)v30, v32, v33);
        }
      }
      if ( (__int64)++v18 >= (int)targetIds->max_length )
        return;
    }
LABEL_19:
    sub_1B4D1EC(Index, v15);
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
    sub_1B4D1EC(this, n);
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
    sub_1B4D1EC(this, n);
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
    sub_1B4D1EC(this, n);
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
  const MethodInfo *v6; // x3

  BattleLogicFunction_CommonCheckDuplicateFunction___ctor(
    (BattleLogicFunction_CommonCheckDuplicateFunction_o *)this,
    (const MethodInfo *)argument);
  this->fields.argument = argument;
  sub_1B4CF34((CGThumbnailListItem_o *)&this->fields.argument, (int32_t)argument, v5, v6);
}


void __fastcall BattleLogicFunction_CommonSideEffectCheckDuplicateFunction__Init(
        BattleLogicFunction_CommonSideEffectCheckDuplicateFunction_o *this,
        const MethodInfo *method)
{
  BattleLogicFunction_CommonSideEffectFunctionArgument_o *argument; // x0
  struct System_Collections_Generic_List_BattleLogicFunction_ExecutedFunctionData__o *v4; // x0
  int32_t v5; // w2
  const MethodInfo *v6; // x3

  argument = this->fields.argument;
  if ( !argument )
    sub_1B4D1EC(0LL, method);
  v4 = BattleLogicFunction_CommonSideEffectFunctionArgument__getCheckBuffFuncList(argument, method);
  this->fields.executedFuncList = v4;
  sub_1B4CF34((CGThumbnailListItem_o *)&this->fields, (int32_t)v4, v5, v6);
}


bool __fastcall BattleLogicFunction_CommonSideEffectCheckDuplicateFunction__isNotExecLocal(
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
    return ((__int64 (__fastcall *)(BattleLogicFunction_CommonSideEffectCheckDuplicateFunction_o *))this->klass->vtable._10_isExecutedFunction.method)(this);
  if ( targetType > 0x20 )
    return 0;
  if ( ((1LL << targetType) & 0x14000000FLL) != 0 )
    return ((__int64 (__fastcall *)(BattleLogicFunction_CommonSideEffectCheckDuplicateFunction_o *))this->klass->vtable._10_isExecutedFunction.method)(this);
  if ( targetType != 4LL )
    return 0;
  if ( !targetIds )
LABEL_11:
    sub_1B4D1EC(this, vals);
  if ( !targetIds->max_length )
    sub_1B4D1F4(this, vals);
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
  __int64 v3; // x1
  System_Collections_Generic_Dictionary_int__object__o *v4; // x20
  int32_t v5; // w2
  const MethodInfo *v6; // x3
  const MethodInfo *v7; // x1

  if ( (byte_49BDC34 & 1) == 0 )
  {
    sub_1B4CF90(
      &Method_System_Collections_Generic_Dictionary_int__List_BattleLogicFunction_ExecutedFunctionData____ctor__,
      method);
    sub_1B4CF90(
      &System_Collections_Generic_Dictionary_int__List_BattleLogicFunction_ExecutedFunctionData___TypeInfo,
      v3);
    byte_49BDC34 = 1;
  }
  *(&this->fields._SkillTiming_k__BackingField + 1) = -1;
  v4 = (System_Collections_Generic_Dictionary_int__object__o *)sub_1B4D1DC(System_Collections_Generic_Dictionary_int__List_BattleLogicFunction_ExecutedFunctionData___TypeInfo);
  System_Collections_Generic_Dictionary_int__object____ctor(
    v4,
    (const MethodInfo_31F64AC *)Method_System_Collections_Generic_Dictionary_int__List_BattleLogicFunction_ExecutedFunctionData____ctor__);
  *(_QWORD *)&this->fields.buffUniqueId = v4;
  sub_1B4CF34((CGThumbnailListItem_o *)&this->fields.buffUniqueId, (int32_t)v4, v5, v6);
  BattleLogicFunction_FunctionArgument___ctor((BattleLogicFunction_FunctionArgument_o *)this, v7);
}


System_Collections_Generic_List_BattleLogicFunction_ExecutedFunctionData__o *__fastcall BattleLogicFunction_CommonSideEffectFunctionArgument__getCheckBuffFuncList(
        BattleLogicFunction_CommonSideEffectFunctionArgument_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  System_Collections_Generic_Dictionary_int__object__o *v7; // x0
  System_Collections_Generic_Dictionary_int__object__o *v8; // x20
  int32_t v9; // w21
  System_Collections_Generic_List_object__o *v10; // x22

  if ( (byte_49BDC33 & 1) == 0 )
  {
    sub_1B4CF90(
      &Method_System_Collections_Generic_Dictionary_int__List_BattleLogicFunction_ExecutedFunctionData___ContainsKey__,
      method);
    sub_1B4CF90(
      &Method_System_Collections_Generic_Dictionary_int__List_BattleLogicFunction_ExecutedFunctionData___get_Item__,
      v3);
    sub_1B4CF90(
      &Method_System_Collections_Generic_Dictionary_int__List_BattleLogicFunction_ExecutedFunctionData___set_Item__,
      v4);
    sub_1B4CF90(&Method_System_Collections_Generic_List_BattleLogicFunction_ExecutedFunctionData___ctor__, v5);
    sub_1B4CF90(&System_Collections_Generic_List_BattleLogicFunction_ExecutedFunctionData__TypeInfo, v6);
    byte_49BDC33 = 1;
  }
  v7 = *(System_Collections_Generic_Dictionary_int__object__o **)&this->fields.buffUniqueId;
  if ( !v7 )
    goto LABEL_9;
  if ( !System_Collections_Generic_Dictionary_int__object___ContainsKey(
          v7,
          *(&this->fields._SkillTiming_k__BackingField + 1),
          (const MethodInfo_31F7074 *)Method_System_Collections_Generic_Dictionary_int__List_BattleLogicFunction_ExecutedFunctionData___ContainsKey__) )
  {
    v8 = *(System_Collections_Generic_Dictionary_int__object__o **)&this->fields.buffUniqueId;
    v9 = *(&this->fields._SkillTiming_k__BackingField + 1);
    v10 = (System_Collections_Generic_List_object__o *)sub_1B4D1DC(System_Collections_Generic_List_BattleLogicFunction_ExecutedFunctionData__TypeInfo);
    System_Collections_Generic_List_object____ctor(
      v10,
      (const MethodInfo_357F9A8 *)Method_System_Collections_Generic_List_BattleLogicFunction_ExecutedFunctionData___ctor__);
    if ( !v8 )
      goto LABEL_9;
    System_Collections_Generic_Dictionary_int__object___set_Item(
      v8,
      v9,
      (Il2CppObject *)v10,
      (const MethodInfo_31F6E6C *)Method_System_Collections_Generic_Dictionary_int__List_BattleLogicFunction_ExecutedFunctionData___set_Item__);
  }
  v7 = *(System_Collections_Generic_Dictionary_int__object__o **)&this->fields.buffUniqueId;
  if ( !v7 )
LABEL_9:
    sub_1B4D1EC(v7, method);
  return (System_Collections_Generic_List_BattleLogicFunction_ExecutedFunctionData__o *)System_Collections_Generic_Dictionary_int__object___get_Item(
                                                                                          v7,
                                                                                          *(&this->fields._SkillTiming_k__BackingField
                                                                                          + 1),
                                                                                          (const MethodInfo_31F6DE0 *)Method_System_Collections_Generic_Dictionary_int__List_BattleLogicFunction_ExecutedFunctionData___get_Item__);
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
    sub_1B4D1EC(v7, v8);
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
    sub_1B4D1EC(this, 0LL);
  return this->fields.index == vals->fields.funcIndex
      && (targetId == -1 || this->fields.targetId == targetId)
      && (!isCheckEnable || this->fields.isEnable);
}


void __fastcall BattleLogicFunction_FuncSideEffectFunctionArgument___ctor(
        BattleLogicFunction_FuncSideEffectFunctionArgument_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  System_Collections_Generic_HashSet_int__o *v5; // x20
  int32_t v6; // w2
  const MethodInfo *v7; // x3
  const MethodInfo *v8; // x1
  __int64 v9; // x20
  const MethodInfo *v10; // x1
  int32_t v11; // w2
  const MethodInfo *v12; // x3
  int32_t v13; // w2
  const MethodInfo *v14; // x3

  if ( (byte_49BDC36 & 1) == 0 )
  {
    sub_1B4CF90(&BattleLogicFunction_CommonSideEffectCheckDuplicateFunction_TypeInfo, method);
    sub_1B4CF90(&Method_System_Collections_Generic_HashSet_int___ctor__, v3);
    sub_1B4CF90(&System_Collections_Generic_HashSet_int__TypeInfo, v4);
    byte_49BDC36 = 1;
  }
  v5 = (System_Collections_Generic_HashSet_int__o *)sub_1B4D1DC(System_Collections_Generic_HashSet_int__TypeInfo);
  System_Collections_Generic_HashSet_int____ctor(
    v5,
    (const MethodInfo_343E3DC *)Method_System_Collections_Generic_HashSet_int___ctor__);
  this->fields.executedBuffFuncDic = (struct System_Collections_Generic_Dictionary_int__List_BattleLogicFunction_ExecutedFunctionData___o *)v5;
  sub_1B4CF34((CGThumbnailListItem_o *)&this->fields.executedBuffFuncDic, (int32_t)v5, v6, v7);
  BattleLogicFunction_CommonSideEffectFunctionArgument___ctor(
    (BattleLogicFunction_CommonSideEffectFunctionArgument_o *)this,
    v8);
  v9 = sub_1B4D1DC(BattleLogicFunction_CommonSideEffectCheckDuplicateFunction_TypeInfo);
  BattleLogicFunction_CommonCheckDuplicateFunction___ctor((BattleLogicFunction_CommonCheckDuplicateFunction_o *)v9, v10);
  *(_QWORD *)(v9 + 24) = this;
  sub_1B4CF34((CGThumbnailListItem_o *)(v9 + 24), (int32_t)this, v11, v12);
  this->fields.checkDuplicate = (struct BattleLogicFunction_CheckDuplicateFunction_o *)v9;
  sub_1B4CF34((CGThumbnailListItem_o *)&this->fields.checkDuplicate, v9, v13, v14);
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
  if ( (byte_49BDC38 & 1) == 0 )
  {
    this = (BattleLogicFunction_FuncSideEffectFunctionArgument_o *)sub_1B4CF90(
                                                                     &Method_System_Collections_Generic_HashSet_int__Add__,
                                                                     funcTarget);
    byte_49BDC38 = 1;
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
        (const MethodInfo_343F5E0 *)Method_System_Collections_Generic_HashSet_int__Add__);
      return;
    }
LABEL_12:
    sub_1B4D1EC(this, funcTarget);
  }
}


void __fastcall BattleLogicFunction_FuncSideEffectFunctionArgument__AddTarget_44230060(
        BattleLogicFunction_FuncSideEffectFunctionArgument_o *this,
        BattleLogicFunction_FuncSideEffectFunctionArgument_o *arg,
        const MethodInfo *method)
{
  System_Collections_Generic_HashSet_int__o *executedBuffFuncDic; // x0

  if ( (byte_49BDC39 & 1) == 0 )
  {
    sub_1B4CF90(&Method_System_Collections_Generic_HashSet_int__UnionWith__, arg);
    byte_49BDC39 = 1;
  }
  if ( arg )
  {
    executedBuffFuncDic = (System_Collections_Generic_HashSet_int__o *)this->fields.executedBuffFuncDic;
    if ( !executedBuffFuncDic )
      sub_1B4D1EC(0LL, arg);
    System_Collections_Generic_HashSet_int___UnionWith(
      executedBuffFuncDic,
      (System_Collections_Generic_IEnumerable_T__o *)arg->fields.executedBuffFuncDic,
      (const MethodInfo_343F5F0 *)Method_System_Collections_Generic_HashSet_int__UnionWith__);
  }
}


// local variable allocation has failed, the output may be wrong!
BuffList_ACTION_array *__fastcall BattleLogicFunction_FuncSideEffectFunctionArgument__GetActArray(
        BattleLogicFunction_FuncSideEffectFunctionArgument_o *this,
        bool isMainOnly,
        const MethodInfo *method)
{
  long double inited; // q0
  _QWORD *v4; // x19
  __int64 v5; // x8
  __int64 v6; // x0
  __int64 v7; // x0

  if ( (byte_49BDC37 & 1) == 0 )
  {
    sub_1B4CF90(&Method_System_Array_Empty_BuffList_ACTION___, isMainOnly);
    byte_49BDC37 = 1;
  }
  v4 = Method_System_Array_Empty_BuffList_ACTION___;
  v5 = *((_QWORD *)Method_System_Array_Empty_BuffList_ACTION___ + 7);
  if ( !v5 )
  {
    sub_1B9D67C(Method_System_Array_Empty_BuffList_ACTION___);
    v5 = v4[7];
  }
  v6 = *(_QWORD *)(v5 + 16);
  if ( (*(_BYTE *)(v6 + 309) & 1) == 0 )
    v6 = sub_1B9D620(inited);
  if ( !*(_DWORD *)(v6 + 224) )
    inited = j_il2cpp_runtime_class_init_0(v6);
  v7 = *(_QWORD *)(v4[7] + 16LL);
  if ( (*(_BYTE *)(v7 + 309) & 1) == 0 )
    v7 = sub_1B9D620(inited);
  return **(BuffList_ACTION_array ***)(v7 + 184);
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

  if ( (byte_49BDC3A & 1) == 0 )
  {
    sub_1B4CF90(&Method_System_Linq_Enumerable_ToArray_int___, logicFunc);
    byte_49BDC3A = 1;
  }
  v9 = System_Linq_Enumerable__ToArray_int_(
         (System_Collections_Generic_IEnumerable_TSource__o *)this->fields.executedBuffFuncDic,
         (const MethodInfo_2F3C24C *)Method_System_Linq_Enumerable_ToArray_int___);
  if ( !logicFunc )
    sub_1B4D1EC(v9, v10);
  BattleLogicFunction__SetFuncSideEffect(logicFunc, this, mainActionData, actorSvtData, v9, 0LL);
}


void __fastcall BattleLogicFunction_FunctionArgument___ctor(
        BattleLogicFunction_FunctionArgument_o *this,
        const MethodInfo *method)
{
  Il2CppObject *v3; // x20
  int32_t v4; // w2
  const MethodInfo *v5; // x3

  if ( (byte_49BDC32 & 1) == 0 )
  {
    sub_1B4CF90(&BattleLogicFunction_CheckDuplicateFunction_TypeInfo, method);
    byte_49BDC32 = 1;
  }
  v3 = (Il2CppObject *)sub_1B4D1DC(BattleLogicFunction_CheckDuplicateFunction_TypeInfo);
  System_Object___ctor(v3, 0LL);
  this->fields.checkDuplicate = (struct BattleLogicFunction_CheckDuplicateFunction_o *)v3;
  sub_1B4CF34((CGThumbnailListItem_o *)&this->fields.checkDuplicate, (int32_t)v3, v4, v5);
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
    sub_1B4D1EC(0LL, method);
  ((void (__fastcall *)(struct BattleLogicFunction_CheckDuplicateFunction_o *, Il2CppMethodPointer))checkDuplicate->klass->vtable._4_Init.method)(
    checkDuplicate,
    checkDuplicate->klass->vtable._5_enableExecutedFunctions.methodPtr);
}


void __fastcall BattleLogicFunction_FunctionArgument__SetAfterFuncSideEffectArgument(
        BattleLogicFunction_FunctionArgument_o *this,
        BattleLogicFunction_FuncSideEffectFunctionArgument_o *arg,
        const MethodInfo *method)
{
  const MethodInfo *v3; // x3

  this->fields._FuncSideEffectArg_k__BackingField = arg;
  sub_1B4CF34(
    (CGThumbnailListItem_o *)&this->fields._FuncSideEffectArg_k__BackingField,
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
  const MethodInfo *v3; // x3

  this->fields._FuncSideEffectArg_k__BackingField = value;
  sub_1B4CF34(
    (CGThumbnailListItem_o *)&this->fields._FuncSideEffectArg_k__BackingField,
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


void __fastcall BattleLogicFunction_HealFuncApplyArgs___ctor(
        BattleLogicFunction_HealFuncApplyArgs_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


bool __fastcall BattleLogicFunction_HealFuncApplyArgs__get_DeadKeepStanding(
        BattleLogicFunction_HealFuncApplyArgs_o *this,
        const MethodInfo *method)
{
  return this->fields._DeadKeepStanding_k__BackingField;
}


int32_t __fastcall BattleLogicFunction_HealFuncApplyArgs__get_EntryIndex(
        BattleLogicFunction_HealFuncApplyArgs_o *this,
        const MethodInfo *method)
{
  return this->fields._EntryIndex_k__BackingField;
}


int32_t __fastcall BattleLogicFunction_HealFuncApplyArgs__get_ExpelledUniqueId(
        BattleLogicFunction_HealFuncApplyArgs_o *this,
        const MethodInfo *method)
{
  return this->fields._ExpelledUniqueId_k__BackingField;
}


bool __fastcall BattleLogicFunction_HealFuncApplyArgs__get_IsMultiTargetRevival(
        BattleLogicFunction_HealFuncApplyArgs_o *this,
        const MethodInfo *method)
{
  return this->fields._IsMultiTargetRevival_k__BackingField;
}


int32_t __fastcall BattleLogicFunction_HealFuncApplyArgs__get_RevivalTargetId(
        BattleLogicFunction_HealFuncApplyArgs_o *this,
        const MethodInfo *method)
{
  return this->fields._RevivalTargetId_k__BackingField;
}


void __fastcall BattleLogicFunction_HealFuncApplyArgs__set_DeadKeepStanding(
        BattleLogicFunction_HealFuncApplyArgs_o *this,
        bool value,
        const MethodInfo *method)
{
  this->fields._DeadKeepStanding_k__BackingField = value;
}


void __fastcall BattleLogicFunction_HealFuncApplyArgs__set_EntryIndex(
        BattleLogicFunction_HealFuncApplyArgs_o *this,
        int32_t value,
        const MethodInfo *method)
{
  this->fields._EntryIndex_k__BackingField = value;
}


void __fastcall BattleLogicFunction_HealFuncApplyArgs__set_ExpelledUniqueId(
        BattleLogicFunction_HealFuncApplyArgs_o *this,
        int32_t value,
        const MethodInfo *method)
{
  this->fields._ExpelledUniqueId_k__BackingField = value;
}


void __fastcall BattleLogicFunction_HealFuncApplyArgs__set_IsMultiTargetRevival(
        BattleLogicFunction_HealFuncApplyArgs_o *this,
        bool value,
        const MethodInfo *method)
{
  this->fields._IsMultiTargetRevival_k__BackingField = value;
}


void __fastcall BattleLogicFunction_HealFuncApplyArgs__set_RevivalTargetId(
        BattleLogicFunction_HealFuncApplyArgs_o *this,
        int32_t value,
        const MethodInfo *method)
{
  this->fields._RevivalTargetId_k__BackingField = value;
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

  if ( (byte_49BDC50 & 1) == 0 )
  {
    sub_1B4CF90(&BattleLogicFunction_PreMainAttackSideEffectMakeArgument_TypeInfo, method);
    byte_49BDC50 = 1;
  }
  v2 = (BattleLogicFunction_SideEffectMakeArgument_o *)sub_1B4D1DC(BattleLogicFunction_PreMainAttackSideEffectMakeArgument_TypeInfo);
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
        BattleActionData_o *actionData,
        const MethodInfo *method)
{
  BattleLogicFunction_FunctionArgument_o *v5; // x21
  __int64 v7; // x1
  __int64 v8; // x1
  System_Collections_Generic_Dictionary_KeyValuePair_int__int___bool__o *v9; // x22
  int32_t v10; // w2
  const MethodInfo *v11; // x3
  int32_t v12; // w2
  const MethodInfo *v13; // x3
  const MethodInfo *v14; // x1
  __int64 v15; // x1
  struct BattleLogicFunction_FunctionArgument_o *externalArg; // x0

  v5 = argument;
  if ( (byte_49BDC44 & 1) == 0 )
  {
    sub_1B4CF90(&Method_System_Collections_Generic_Dictionary_KeyValuePair_int__int___bool___ctor__, argument);
    sub_1B4CF90(&System_Collections_Generic_Dictionary_KeyValuePair_int__int___bool__TypeInfo, v7);
    sub_1B4CF90(&BattleLogicFunction_FunctionArgument_TypeInfo, v8);
    byte_49BDC44 = 1;
  }
  v9 = (System_Collections_Generic_Dictionary_KeyValuePair_int__int___bool__o *)sub_1B4D1DC(System_Collections_Generic_Dictionary_KeyValuePair_int__int___bool__TypeInfo);
  System_Collections_Generic_Dictionary_KeyValuePair_int__int___bool____ctor(
    v9,
    (const MethodInfo_31AE8C0 *)Method_System_Collections_Generic_Dictionary_KeyValuePair_int__int___bool___ctor__);
  this->fields.funcResults = v9;
  sub_1B4CF34((CGThumbnailListItem_o *)&this->fields, (int32_t)v9, v10, v11);
  this->fields.tdCommandTypeChange = -1;
  System_Object___ctor((Il2CppObject *)this, 0LL);
  if ( !v5 )
  {
    v5 = (BattleLogicFunction_FunctionArgument_o *)sub_1B4D1DC(BattleLogicFunction_FunctionArgument_TypeInfo);
    BattleLogicFunction_FunctionArgument___ctor(v5, v14);
  }
  this->fields.externalArg = v5;
  sub_1B4CF34((CGThumbnailListItem_o *)&this->fields.externalArg, (int32_t)v5, v12, v13);
  externalArg = this->fields.externalArg;
  if ( !externalArg
    || (externalArg = (struct BattleLogicFunction_FunctionArgument_o *)((__int64 (__fastcall *)(struct BattleLogicFunction_FunctionArgument_o *, Il2CppMethodPointer))externalArg->klass->vtable._4_Init.method)(
                                                                         externalArg,
                                                                         externalArg->klass->vtable._5_GetFixTargetIds.methodPtr),
        !actionData) )
  {
    sub_1B4D1EC(externalArg, v15);
  }
  this->fields._EnemyTargetId_k__BackingField = actionData->fields.targetId;
}


// local variable allocation has failed, the output may be wrong!
bool __fastcall BattleLogicFunction_ProcListInArgs__DidTriggeredFuncHaveSpecifyResults(
        BattleLogicFunction_ProcListInArgs_o *this,
        int32_t targetId,
        DataVals_o *baseVals,
        BattleData_o *data,
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
  __int64 v23; // x1
  __int64 v24; // x1
  __int64 v25; // x1
  __int64 v26; // x21
  System_Collections_Generic_Dictionary_KeyValuePair_int__int___bool__o *TriggeredFuncIndex; // x0
  __int64 v28; // x1
  int v29; // w23
  int v30; // w8
  char v31; // w21
  _BOOL4 v32; // w24
  struct System_Collections_Generic_Dictionary_KeyValuePair_int__int___bool__o *funcResults; // x20
  System_Func_KeyValuePair_KeyValuePair_int__int___bool___bool__o *v34; // x0
  System_Func_TSource__bool__o *v35; // x22
  System_Collections_Generic_IEnumerable_TSource__o *v36; // x20
  System_Collections_Generic_IEnumerable_TSource__c *klass; // x8
  __int64 v38; // x9
  int32_t *p_offset; // x10
  __int64 p_method; // x0
  System_Collections_Generic_IEnumerable_TSource__o *v41; // x19
  System_Func_KeyValuePair_KeyValuePair_int__int___bool___bool__o *v42; // x20
  __int64 v43; // x1
  __int64 v44; // x20
  __int64 v45; // x8
  __int64 v46; // x9
  int *v47; // x10
  __int64 v48; // x0
  char v49; // w22
  __int64 v50; // x8
  __int64 v51; // x9
  int *v52; // x10
  __int64 v53; // x0
  __int64 v54; // x0
  __int64 v55; // x1
  char v56; // w23
  BattleServantData_o *ServantData; // x0
  __int64 v58; // x8
  __int64 v59; // x9
  int *v60; // x10
  __int64 v61; // x0
  bool value; // [xsp+Ch] [xbp-54h] BYREF
  System_Collections_Generic_KeyValuePair_int__int__o key; // [xsp+10h] [xbp-50h] BYREF
  bool isAllCond; // [xsp+18h] [xbp-48h] BYREF
  bool isSameTargetOnly; // [xsp+1Ch] [xbp-44h] BYREF
  System_Collections_Generic_KeyValuePair_int__int__o p_key; // 0:x0.8
  System_Collections_Generic_KeyValuePair_int__int__o v68; // 0:x1.8

  if ( (byte_49BDC46 & 1) == 0 )
  {
    sub_1B4CF90(
      &Method_System_Collections_Generic_Dictionary_KeyValuePair_int__int___bool__TryGetValue__,
      *(_QWORD *)&targetId);
    sub_1B4CF90(&Method_System_Linq_Enumerable_Any_KeyValuePair_KeyValuePair_int__int___bool____, v9);
    sub_1B4CF90(&Method_System_Linq_Enumerable_Count_KeyValuePair_KeyValuePair_int__int___bool____, v10);
    sub_1B4CF90(&Method_System_Linq_Enumerable_Where_KeyValuePair_KeyValuePair_int__int___bool____, v11);
    sub_1B4CF90(&System_Func_KeyValuePair_KeyValuePair_int__int___bool___bool__TypeInfo, v12);
    sub_1B4CF90(&System_IDisposable_TypeInfo, v13);
    sub_1B4CF90(&System_Collections_Generic_IEnumerable_KeyValuePair_KeyValuePair_int__int___bool___TypeInfo, v14);
    sub_1B4CF90(&System_Collections_Generic_IEnumerator_KeyValuePair_KeyValuePair_int__int___bool___TypeInfo, v15);
    sub_1B4CF90(&System_Collections_IEnumerator_TypeInfo, v16);
    sub_1B4CF90(&Method_System_Collections_Generic_KeyValuePair_int__int___ctor__, v17);
    sub_1B4CF90(&Method_System_Collections_Generic_KeyValuePair_KeyValuePair_int__int___bool__get_Key__, v18);
    sub_1B4CF90(&Method_System_Collections_Generic_KeyValuePair_int__int__get_Value__, v19);
    sub_1B4CF90(&Method_System_Collections_Generic_KeyValuePair_KeyValuePair_int__int___bool__get_Value__, v20);
    sub_1B4CF90(&System_Math_TypeInfo, v21);
    sub_1B4CF90(
      &Method_BattleLogicFunction_ProcListInArgs___c__DisplayClass40_0__DidTriggeredFuncHaveSpecifyResults_b__0__,
      v22);
    sub_1B4CF90(
      &Method_BattleLogicFunction_ProcListInArgs___c__DisplayClass40_0__DidTriggeredFuncHaveSpecifyResults_b__1__,
      v23);
    sub_1B4CF90(
      &Method_BattleLogicFunction_ProcListInArgs___c__DisplayClass40_0__DidTriggeredFuncHaveSpecifyResults_b__2__,
      v24);
    sub_1B4CF90(&BattleLogicFunction_ProcListInArgs___c__DisplayClass40_0_TypeInfo, v25);
    byte_49BDC46 = 1;
  }
  isSameTargetOnly = 0;
  isAllCond = 0;
  key = 0LL;
  value = 0;
  v26 = sub_1B4D1DC(BattleLogicFunction_ProcListInArgs___c__DisplayClass40_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v26, 0LL);
  if ( !baseVals )
    goto LABEL_53;
  TriggeredFuncIndex = (System_Collections_Generic_Dictionary_KeyValuePair_int__int___bool__o *)DataVals__GetTriggeredFuncIndex(
                                                                                                  baseVals,
                                                                                                  &isSameTargetOnly,
                                                                                                  &isAllCond,
                                                                                                  0LL);
  if ( !v26 )
    goto LABEL_53;
  v29 = (int)TriggeredFuncIndex;
  *(_DWORD *)(v26 + 16) = (_DWORD)TriggeredFuncIndex;
  if ( !(_DWORD)TriggeredFuncIndex )
  {
    v31 = 1;
    return v31 & 1;
  }
  *(_BYTE *)(v26 + 20) = (int)TriggeredFuncIndex > 0;
  if ( !System_Math_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(System_Math_TypeInfo);
  if ( v29 >= 0 )
    v30 = v29;
  else
    v30 = -v29;
  *(_DWORD *)(v26 + 16) = v30 - 1;
  if ( isSameTargetOnly )
  {
    p_key = (System_Collections_Generic_KeyValuePair_int__int__o)&key;
    System_Collections_Generic_KeyValuePair_int__int____ctor(
      p_key,
      v30 - 1,
      targetId,
      (const MethodInfo_34C0274 *)Method_System_Collections_Generic_KeyValuePair_int__int___ctor__);
    TriggeredFuncIndex = this->fields.funcResults;
    if ( TriggeredFuncIndex )
    {
      v68 = key;
      if ( System_Collections_Generic_Dictionary_KeyValuePair_int__int___bool___TryGetValue(
             TriggeredFuncIndex,
             v68,
             &value,
             (const MethodInfo_31B0A1C *)Method_System_Collections_Generic_Dictionary_KeyValuePair_int__int___bool__TryGetValue__) )
      {
        v31 = value == *(_BYTE *)(v26 + 20);
        return v31 & 1;
      }
LABEL_24:
      v31 = 0;
      return v31 & 1;
    }
    goto LABEL_53;
  }
  v32 = isAllCond;
  funcResults = this->fields.funcResults;
  v34 = (System_Func_KeyValuePair_KeyValuePair_int__int___bool___bool__o *)sub_1B4D1DC(System_Func_KeyValuePair_KeyValuePair_int__int___bool___bool__TypeInfo);
  v35 = (System_Func_TSource__bool__o *)v34;
  if ( !v32 )
  {
    System_Func_KeyValuePair_KeyValuePair_int__int___bool___bool____ctor(
      v34,
      (Il2CppObject *)v26,
      Method_BattleLogicFunction_ProcListInArgs___c__DisplayClass40_0__DidTriggeredFuncHaveSpecifyResults_b__0__,
      0LL);
    v41 = System_Linq_Enumerable__Where_KeyValuePair_KeyValuePair_int__int___bool__(
            (System_Collections_Generic_IEnumerable_TSource__o *)funcResults,
            v35,
            (const MethodInfo_2F40CC4 *)Method_System_Linq_Enumerable_Where_KeyValuePair_KeyValuePair_int__int___bool____);
    v42 = (System_Func_KeyValuePair_KeyValuePair_int__int___bool___bool__o *)sub_1B4D1DC(System_Func_KeyValuePair_KeyValuePair_int__int___bool___bool__TypeInfo);
    System_Func_KeyValuePair_KeyValuePair_int__int___bool___bool____ctor(
      v42,
      (Il2CppObject *)v26,
      Method_BattleLogicFunction_ProcListInArgs___c__DisplayClass40_0__DidTriggeredFuncHaveSpecifyResults_b__1__,
      0LL);
    v31 = System_Linq_Enumerable__Any_KeyValuePair_KeyValuePair_int__int___bool__(
            v41,
            (System_Func_TSource__bool__o *)v42,
            (const MethodInfo_2F0F9E0 *)Method_System_Linq_Enumerable_Any_KeyValuePair_KeyValuePair_int__int___bool____);
    return v31 & 1;
  }
  System_Func_KeyValuePair_KeyValuePair_int__int___bool___bool____ctor(
    v34,
    (Il2CppObject *)v26,
    Method_BattleLogicFunction_ProcListInArgs___c__DisplayClass40_0__DidTriggeredFuncHaveSpecifyResults_b__2__,
    0LL);
  v36 = System_Linq_Enumerable__Where_KeyValuePair_KeyValuePair_int__int___bool__(
          (System_Collections_Generic_IEnumerable_TSource__o *)funcResults,
          v35,
          (const MethodInfo_2F40CC4 *)Method_System_Linq_Enumerable_Where_KeyValuePair_KeyValuePair_int__int___bool____);
  TriggeredFuncIndex = (System_Collections_Generic_Dictionary_KeyValuePair_int__int___bool__o *)System_Linq_Enumerable__Count_KeyValuePair_KeyValuePair_int__int___bool__(
                                                                                                  v36,
                                                                                                  (const MethodInfo_2F1E0E8 *)Method_System_Linq_Enumerable_Count_KeyValuePair_KeyValuePair_int__int___bool____);
  if ( !(_DWORD)TriggeredFuncIndex )
    goto LABEL_24;
  if ( !v36 )
LABEL_53:
    sub_1B4D1EC(TriggeredFuncIndex, v28);
  klass = v36->klass;
  v38 = *(unsigned __int16 *)(&v36->klass->_2.bitflags2 + 3);
  if ( *(_WORD *)(&v36->klass->_2.bitflags2 + 3) )
  {
    p_offset = &klass->_1.interfaceOffsets->offset;
    while ( *((System_Collections_Generic_IEnumerable_KeyValuePair_KeyValuePair_int__int___bool___c **)p_offset - 1) != System_Collections_Generic_IEnumerable_KeyValuePair_KeyValuePair_int__int___bool___TypeInfo )
    {
      --v38;
      p_offset += 4;
      if ( !v38 )
        goto LABEL_23;
    }
    p_method = (__int64)&klass->vtable[*p_offset].method;
  }
  else
  {
LABEL_23:
    p_method = sub_1B9D724(
                 v36,
                 System_Collections_Generic_IEnumerable_KeyValuePair_KeyValuePair_int__int___bool___TypeInfo,
                 0LL);
  }
  v44 = (*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerable_TSource__o *, _QWORD))p_method)(
          v36,
          *(_QWORD *)(p_method + 8));
  if ( !v44 )
    sub_1B4D1EC(0LL, v43);
  while ( 1 )
  {
    v45 = *(_QWORD *)v44;
    v46 = *(unsigned __int16 *)(*(_QWORD *)v44 + 302LL);
    if ( *(_WORD *)(*(_QWORD *)v44 + 302LL) )
    {
      v47 = (int *)(*(_QWORD *)(v45 + 176) + 8LL);
      while ( *((System_Collections_IEnumerator_c **)v47 - 1) != System_Collections_IEnumerator_TypeInfo )
      {
        --v46;
        v47 += 4;
        if ( !v46 )
          goto LABEL_32;
      }
      v48 = v45 + 16LL * *v47 + 312;
    }
    else
    {
LABEL_32:
      v48 = sub_1B9D724(v44, System_Collections_IEnumerator_TypeInfo, 0LL);
    }
    v49 = (*(__int64 (__fastcall **)(__int64, _QWORD))v48)(v44, *(_QWORD *)(v48 + 8));
    if ( (v49 & 1) == 0 )
      break;
    v50 = *(_QWORD *)v44;
    v51 = *(unsigned __int16 *)(*(_QWORD *)v44 + 302LL);
    if ( *(_WORD *)(*(_QWORD *)v44 + 302LL) )
    {
      v52 = (int *)(*(_QWORD *)(v50 + 176) + 8LL);
      while ( *((System_Collections_Generic_IEnumerator_KeyValuePair_KeyValuePair_int__int___bool___c **)v52 - 1) != System_Collections_Generic_IEnumerator_KeyValuePair_KeyValuePair_int__int___bool___TypeInfo )
      {
        --v51;
        v52 += 4;
        if ( !v51 )
          goto LABEL_39;
      }
      v53 = v50 + 16LL * *v52 + 312;
    }
    else
    {
LABEL_39:
      v53 = sub_1B9D724(
              v44,
              System_Collections_Generic_IEnumerator_KeyValuePair_KeyValuePair_int__int___bool___TypeInfo,
              0LL);
    }
    v54 = (*(__int64 (__fastcall **)(__int64, _QWORD))v53)(v44, *(_QWORD *)(v53 + 8));
    if ( !data )
      sub_1B4D1EC(v54, v55);
    v56 = v55;
    ServantData = BattleData__getServantData(data, SHIDWORD(v54), 0LL);
    if ( ServantData )
    {
      if ( !ServantData->fields.isDeadAnime && *(_BYTE *)(v26 + 20) != (v56 != 0) )
        break;
    }
  }
  v31 = v49 ^ 1;
  v58 = *(_QWORD *)v44;
  v59 = *(unsigned __int16 *)(*(_QWORD *)v44 + 302LL);
  if ( *(_WORD *)(*(_QWORD *)v44 + 302LL) )
  {
    v60 = (int *)(*(_QWORD *)(v58 + 176) + 8LL);
    while ( *((System_IDisposable_c **)v60 - 1) != System_IDisposable_TypeInfo )
    {
      --v59;
      v60 += 4;
      if ( !v59 )
        goto LABEL_49;
    }
    v61 = v58 + 16LL * *v60 + 312;
  }
  else
  {
LABEL_49:
    v61 = sub_1B9D724(v44, System_IDisposable_TypeInfo, 0LL);
  }
  (*(void (__fastcall **)(__int64, _QWORD))v61)(v44, *(_QWORD *)(v61 + 8));
  return v31 & 1;
}


// local variable allocation has failed, the output may be wrong!
bool __fastcall BattleLogicFunction_ProcListInArgs__DidTriggeredFuncListHaveSpecifyResults(
        BattleLogicFunction_ProcListInArgs_o *this,
        int32_t targetId,
        DataVals_o *baseVals,
        BattleData_o *battleData,
        const MethodInfo *method)
{
  BattleLogicFunction_ProcListInArgs_o *v7; // x20
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x1
  System_Int32_array *TriggeredFuncIndexArray; // x23
  __int64 v13; // x21
  __int64 v14; // x8
  BattleLogicFunction_ProcListInArgs_o *v15; // x22
  unsigned __int64 v16; // x24
  int v17; // w29
  int v18; // w8
  struct BattleLogicFunction_FunctionArgument_o *externalArg; // x8
  unsigned __int64 v20; // x23
  int v21; // w28
  bool value; // [xsp+Ch] [xbp-74h] BYREF
  System_Collections_Generic_KeyValuePair_int__int__o key; // [xsp+10h] [xbp-70h] BYREF
  bool isAndCheck; // [xsp+1Ch] [xbp-64h] BYREF
  System_Collections_Generic_KeyValuePair_int__int__o p_key; // 0:x0.8
  System_Collections_Generic_KeyValuePair_int__int__o v27; // 0:x1.8

  v7 = this;
  if ( (byte_49BDC47 & 1) == 0 )
  {
    sub_1B4CF90(&bool___TypeInfo, *(_QWORD *)&targetId);
    sub_1B4CF90(&Method_System_Collections_Generic_Dictionary_KeyValuePair_int__int___bool__TryGetValue__, v8);
    sub_1B4CF90(&int___TypeInfo, v9);
    sub_1B4CF90(&Method_System_Collections_Generic_KeyValuePair_int__int___ctor__, v10);
    this = (BattleLogicFunction_ProcListInArgs_o *)sub_1B4CF90(&System_Math_TypeInfo, v11);
    byte_49BDC47 = 1;
  }
  isAndCheck = 0;
  key = 0LL;
  value = 0;
  if ( !baseVals )
    goto LABEL_37;
  TriggeredFuncIndexArray = DataVals__GetTriggeredFuncIndexArray(baseVals, &isAndCheck, 0LL);
  this = (BattleLogicFunction_ProcListInArgs_o *)BasicHelper__IsNullOrEmpty(
                                                   (System_Collections_ICollection_o *)TriggeredFuncIndexArray,
                                                   0LL);
  if ( ((unsigned __int8)this & 1) == 0 )
  {
    if ( TriggeredFuncIndexArray )
    {
      v13 = sub_1B4D038(bool___TypeInfo, TriggeredFuncIndexArray->max_length);
      this = (BattleLogicFunction_ProcListInArgs_o *)sub_1B4D038(int___TypeInfo, TriggeredFuncIndexArray->max_length);
      v14 = *(_QWORD *)&TriggeredFuncIndexArray->max_length;
      v15 = this;
      if ( (int)v14 >= 1 )
      {
        v16 = 0LL;
        while ( v16 < (unsigned int)v14 )
        {
          if ( !v13 )
            goto LABEL_37;
          if ( v16 >= *(unsigned int *)(v13 + 24) )
            break;
          v17 = TriggeredFuncIndexArray->m_Items[v16 + 1];
          *(_BYTE *)(v13 + 32 + v16) = v17 > 0;
          this = (BattleLogicFunction_ProcListInArgs_o *)System_Math_TypeInfo;
          if ( !System_Math_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(System_Math_TypeInfo);
          if ( !v15 )
            goto LABEL_37;
          if ( v16 >= LODWORD(v15->fields.externalArg) )
            goto LABEL_36;
          if ( v17 >= 0 )
            v18 = v17;
          else
            v18 = -v17;
          *((_DWORD *)&v15->fields._IsTreasureDvc_k__BackingField + v16) = v18 - 1;
          LODWORD(v14) = TriggeredFuncIndexArray->max_length;
          if ( (__int64)++v16 >= (int)v14 )
            goto LABEL_22;
        }
        goto LABEL_36;
      }
      if ( this )
      {
LABEL_22:
        externalArg = v15->fields.externalArg;
        if ( (int)externalArg < 1 )
        {
LABEL_34:
          LOBYTE(this) = isAndCheck;
          return (char)this;
        }
        v20 = 0LL;
        while ( v20 < (unsigned int)externalArg )
        {
          if ( !v13 )
            goto LABEL_37;
          if ( v20 >= *(unsigned int *)(v13 + 24) )
            break;
          v21 = *(unsigned __int8 *)(v13 + 32 + v20);
          p_key = (System_Collections_Generic_KeyValuePair_int__int__o)&key;
          System_Collections_Generic_KeyValuePair_int__int____ctor(
            p_key,
            *((_DWORD *)&v15->fields._IsTreasureDvc_k__BackingField + v20),
            targetId,
            (const MethodInfo_34C0274 *)Method_System_Collections_Generic_KeyValuePair_int__int___ctor__);
          this = (BattleLogicFunction_ProcListInArgs_o *)v7->fields.funcResults;
          if ( !this )
            goto LABEL_37;
          v27 = key;
          this = (BattleLogicFunction_ProcListInArgs_o *)System_Collections_Generic_Dictionary_KeyValuePair_int__int___bool___TryGetValue(
                                                           (System_Collections_Generic_Dictionary_KeyValuePair_int__int___bool__o *)this,
                                                           v27,
                                                           &value,
                                                           (const MethodInfo_31B0A1C *)Method_System_Collections_Generic_Dictionary_KeyValuePair_int__int___bool__TryGetValue__);
          if ( ((unsigned __int8)this & 1) != 0 )
          {
            this = (BattleLogicFunction_ProcListInArgs_o *)!isAndCheck;
            if ( isAndCheck )
            {
              if ( value != v21 )
                return (char)this;
            }
            else if ( value == v21 )
            {
              return (char)this;
            }
          }
          LODWORD(externalArg) = v15->fields.externalArg;
          if ( (__int64)++v20 >= (int)externalArg )
            goto LABEL_34;
        }
LABEL_36:
        sub_1B4D1F4(this, *(_QWORD *)&targetId);
      }
    }
LABEL_37:
    sub_1B4D1EC(this, *(_QWORD *)&targetId);
  }
  LOBYTE(this) = 1;
  return (char)this;
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
    sub_1B4D1EC(0LL, v7);
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
    sub_1B4D1EC(0LL, v5);
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
    sub_1B4D1EC(this, type);
  return externalArg->fields.grantSkillType == type;
}


BattleLogicFunction_CheckDuplicateFunction_o *__fastcall BattleLogicFunction_ProcListInArgs__get_CheckDuplicateFunc(
        BattleLogicFunction_ProcListInArgs_o *this,
        const MethodInfo *method)
{
  struct BattleLogicFunction_FunctionArgument_o *externalArg; // x8

  externalArg = this->fields.externalArg;
  if ( !externalArg )
    sub_1B4D1EC(this, method);
  return externalArg->fields.checkDuplicate;
}


int32_t __fastcall BattleLogicFunction_ProcListInArgs__get_EnemyTargetId(
        BattleLogicFunction_ProcListInArgs_o *this,
        const MethodInfo *method)
{
  return this->fields._EnemyTargetId_k__BackingField;
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
    sub_1B4D1EC(this, method);
  return externalArg->fields._FuncSideEffectArg_k__BackingField;
}


int32_t __fastcall BattleLogicFunction_ProcListInArgs__get_GrantSkillType(
        BattleLogicFunction_ProcListInArgs_o *this,
        const MethodInfo *method)
{
  struct BattleLogicFunction_FunctionArgument_o *externalArg; // x8

  externalArg = this->fields.externalArg;
  if ( !externalArg )
    sub_1B4D1EC(this, method);
  return externalArg->fields.grantSkillType;
}


bool __fastcall BattleLogicFunction_ProcListInArgs__get_IsCommandSideEffect(
        BattleLogicFunction_ProcListInArgs_o *this,
        const MethodInfo *method)
{
  struct BattleLogicFunction_FunctionArgument_o *externalArg; // x8

  externalArg = this->fields.externalArg;
  if ( !externalArg )
    sub_1B4D1EC(this, method);
  return externalArg->fields.isCommandSideEffect;
}


bool __fastcall BattleLogicFunction_ProcListInArgs__get_IsPassive(
        BattleLogicFunction_ProcListInArgs_o *this,
        const MethodInfo *method)
{
  struct BattleLogicFunction_FunctionArgument_o *externalArg; // x8

  externalArg = this->fields.externalArg;
  if ( !externalArg )
    sub_1B4D1EC(this, method);
  return externalArg->fields.isPassive;
}


bool __fastcall BattleLogicFunction_ProcListInArgs__get_IsShift(
        BattleLogicFunction_ProcListInArgs_o *this,
        const MethodInfo *method)
{
  struct BattleLogicFunction_FunctionArgument_o *externalArg; // x8

  externalArg = this->fields.externalArg;
  if ( !externalArg )
    sub_1B4D1EC(this, method);
  return externalArg->fields.isShift;
}


bool __fastcall BattleLogicFunction_ProcListInArgs__get_IsShowBattlePointEffect(
        BattleLogicFunction_ProcListInArgs_o *this,
        const MethodInfo *method)
{
  struct BattleLogicFunction_FunctionArgument_o *externalArg; // x8

  externalArg = this->fields.externalArg;
  if ( !externalArg )
    sub_1B4D1EC(this, method);
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
    sub_1B4D1EC(this, method);
  return externalArg->fields.skillId;
}


GeneratedFamilyLinkageIdCacher_o *__fastcall BattleLogicFunction_ProcListInArgs__get_familyLinkageIdCacher(
        BattleLogicFunction_ProcListInArgs_o *this,
        const MethodInfo *method)
{
  GeneratedFamilyLinkageIdCacher_o *result; // x0
  CGThumbnailListItem_o *p_familyLinkageIdCacher; // x19
  GeneratedFamilyLinkageIdCacher_o *familyLinkageIdCacher; // t1
  GeneratedFamilyLinkageIdCacher_o *v6; // x20
  int32_t v7; // w2
  const MethodInfo *v8; // x3

  if ( (byte_49BDC43 & 1) == 0 )
  {
    sub_1B4CF90(&GeneratedFamilyLinkageIdCacher_TypeInfo, method);
    byte_49BDC43 = 1;
  }
  familyLinkageIdCacher = this->fields._familyLinkageIdCacher;
  p_familyLinkageIdCacher = (CGThumbnailListItem_o *)&this->fields._familyLinkageIdCacher;
  result = familyLinkageIdCacher;
  if ( !familyLinkageIdCacher )
  {
    v6 = (GeneratedFamilyLinkageIdCacher_o *)sub_1B4D1DC(GeneratedFamilyLinkageIdCacher_TypeInfo);
    GeneratedFamilyLinkageIdCacher___ctor(v6, 0LL);
    p_familyLinkageIdCacher->klass = (CGThumbnailListItem_c *)v6;
    sub_1B4CF34(p_familyLinkageIdCacher, (int32_t)v6, v7, v8);
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
  __int64 v11; // x1
  signed int max_length; // w25
  __int64 v13; // x0
  BattleLogicFunctionProcess_FunctionUnitCheck_array **p_funcUnitArray_k__BackingField; // x19
  int32_t v15; // w2
  const MethodInfo *v16; // x3
  struct BattleLogicFunctionProcess_FunctionUnitCheck_array *funcUnitArray_k__BackingField; // x27
  il2cpp_array_size_t v18; // w28
  BattleLogicFunctionProcess_FunctionUnitCheck_o *v19; // x26
  const MethodInfo *v20; // x3
  int32_t v21; // w2
  const MethodInfo *v22; // x3
  Il2CppClass **v23; // x0
  const MethodInfo *v24; // x4
  BattleLogicFunctionProcess_FunctionUnitCheck_array *v25; // x8
  int v26; // w8
  int v27; // w22
  BattleLogicFunctionProcess_FunctionUnitCheck_o *v28; // x21
  int v29; // w23
  BattleLogicFunctionProcess_FunctionUnitCheck_o *v30; // x20
  const MethodInfo *v31; // x2
  _BOOL4 v32; // w8
  __int64 v33; // x0

  v10 = this;
  if ( (byte_49BDC49 & 1) == 0 )
  {
    sub_1B4CF90(&BattleLogicFunctionProcess_FunctionUnitCheck___TypeInfo, logic);
    this = (BattleLogicFunction_ProcListInArgs_o *)sub_1B4CF90(
                                                     &BattleLogicFunctionProcess_FunctionUnitCheck_TypeInfo,
                                                     v11);
    byte_49BDC49 = 1;
  }
  if ( !dataValsList )
    goto LABEL_38;
  max_length = dataValsList->max_length;
  v13 = sub_1B4D038(BattleLogicFunctionProcess_FunctionUnitCheck___TypeInfo, (unsigned int)max_length);
  v10->fields._funcUnitArray_k__BackingField = (struct BattleLogicFunctionProcess_FunctionUnitCheck_array *)v13;
  p_funcUnitArray_k__BackingField = &v10->fields._funcUnitArray_k__BackingField;
  sub_1B4CF34((CGThumbnailListItem_o *)&v10->fields._funcUnitArray_k__BackingField, v13, v15, v16);
  funcUnitArray_k__BackingField = v10->fields._funcUnitArray_k__BackingField;
  if ( max_length >= 1 )
  {
    v18 = 0;
    while ( 1 )
    {
      v19 = (BattleLogicFunctionProcess_FunctionUnitCheck_o *)sub_1B4D1DC(BattleLogicFunctionProcess_FunctionUnitCheck_TypeInfo);
      BattleLogicFunctionProcess_FunctionUnitCheck___ctor(v19, logic, v10, v20);
      if ( !funcUnitArray_k__BackingField )
        break;
      if ( v19 )
      {
        this = (BattleLogicFunction_ProcListInArgs_o *)sub_1B4D0CC(
                                                         v19,
                                                         funcUnitArray_k__BackingField->obj.klass->_1.element_class);
        if ( !this )
        {
          v33 = sub_1B4D210(0LL);
          sub_1B4D0B8(v33, 0LL);
        }
      }
      if ( v18 >= funcUnitArray_k__BackingField->max_length )
        goto LABEL_39;
      v23 = &funcUnitArray_k__BackingField->obj.klass + (int)v18;
      v23[4] = (Il2CppClass *)v19;
      sub_1B4CF34((CGThumbnailListItem_o *)(v23 + 4), (int32_t)v19, v21, v22);
      v25 = *p_funcUnitArray_k__BackingField;
      if ( !*p_funcUnitArray_k__BackingField )
        break;
      if ( v18 >= v25->max_length )
        goto LABEL_39;
      if ( !functionIds )
        break;
      if ( v18 >= functionIds->max_length || v18 >= dataValsList->max_length )
LABEL_39:
        sub_1B4D1F4(this, logic);
      this = (BattleLogicFunction_ProcListInArgs_o *)v25->m_Items[v18];
      if ( !this )
        break;
      BattleLogicFunctionProcess_FunctionUnitCheck__setDataVals(
        (BattleLogicFunctionProcess_FunctionUnitCheck_o *)this,
        funcIndex,
        functionIds->m_Items[v18 + 1],
        dataValsList->m_Items[v18],
        v24);
      ++v18;
      ++*funcIndex;
      funcUnitArray_k__BackingField = *p_funcUnitArray_k__BackingField;
      if ( max_length == v18 )
        goto LABEL_17;
    }
LABEL_38:
    sub_1B4D1EC(this, logic);
  }
LABEL_17:
  if ( !funcUnitArray_k__BackingField )
    goto LABEL_38;
  v26 = funcUnitArray_k__BackingField->max_length;
  if ( v26 >= 1 )
  {
    v27 = 0;
    v28 = 0LL;
    v29 = -1;
    do
    {
      if ( v27 >= (unsigned int)v26 )
        goto LABEL_39;
      v30 = funcUnitArray_k__BackingField->m_Items[v27];
      if ( !v30 )
        goto LABEL_38;
      this = (BattleLogicFunction_ProcListInArgs_o *)v30->fields._dataVals_k__BackingField;
      if ( !this )
        goto LABEL_38;
      if ( DataVals__IsAddIndividualty((DataVals_o *)this, 0LL) )
        goto LABEL_26;
      this = (BattleLogicFunction_ProcListInArgs_o *)v30->fields._dataVals_k__BackingField;
      if ( !this )
        goto LABEL_38;
      if ( DataVals__IsAddLinkageTargetIndividualty((DataVals_o *)this, 0LL) )
LABEL_26:
        BattleLogicFunctionProcess_FunctionUnitCheck__setLinkFunction(v30, *p_funcUnitArray_k__BackingField, v31);
      this = (BattleLogicFunction_ProcListInArgs_o *)v30->fields._dataVals_k__BackingField;
      if ( !this )
        goto LABEL_38;
      this = (BattleLogicFunction_ProcListInArgs_o *)DataVals__GetFunctionTriggerStarNum((DataVals_o *)this, 0LL);
      if ( ((unsigned int)this & 0x80000000) == 0 )
      {
        v32 = v28 == 0LL || (int)this < v29;
        if ( v32 )
          v29 = (int)this;
        if ( v32 )
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


// local variable allocation has failed, the output may be wrong!
bool __fastcall BattleLogicFunction_ProcListInArgs__isPrevFuncSuccess(
        BattleLogicFunction_ProcListInArgs_o *this,
        int32_t targetId,
        int32_t index,
        const MethodInfo *method)
{
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  System_Collections_Generic_Dictionary_KeyValuePair_int__int___bool__o *funcResults; // x0
  System_Collections_Generic_KeyValuePair_int__int__o key; // [xsp+8h] [xbp-38h] BYREF
  System_Collections_Generic_KeyValuePair_int__int__o p_key; // 0:x0.8
  System_Collections_Generic_KeyValuePair_int__int__o v15; // 0:x1.8
  System_Collections_Generic_KeyValuePair_int__int__o v16; // 0:x1.8

  if ( (byte_49BDC45 & 1) == 0 )
  {
    sub_1B4CF90(
      &Method_System_Collections_Generic_Dictionary_KeyValuePair_int__int___bool__ContainsKey__,
      *(_QWORD *)&targetId);
    sub_1B4CF90(&Method_System_Collections_Generic_Dictionary_KeyValuePair_int__int___bool__get_Item__, v7);
    sub_1B4CF90(&Method_System_Collections_Generic_KeyValuePair_int__int___ctor__, v8);
    byte_49BDC45 = 1;
  }
  p_key = (System_Collections_Generic_KeyValuePair_int__int__o)&key;
  key = 0LL;
  System_Collections_Generic_KeyValuePair_int__int____ctor(
    p_key,
    index - 1,
    targetId,
    (const MethodInfo_34C0274 *)Method_System_Collections_Generic_KeyValuePair_int__int___ctor__);
  funcResults = this->fields.funcResults;
  if ( !funcResults )
    goto LABEL_9;
  v15 = key;
  if ( !System_Collections_Generic_Dictionary_KeyValuePair_int__int___bool___ContainsKey(
          funcResults,
          v15,
          (const MethodInfo_31AF4A8 *)Method_System_Collections_Generic_Dictionary_KeyValuePair_int__int___bool__ContainsKey__) )
    return 0;
  funcResults = this->fields.funcResults;
  if ( !funcResults )
LABEL_9:
    sub_1B4D1EC(funcResults, v9);
  v16 = key;
  return System_Collections_Generic_Dictionary_KeyValuePair_int__int___bool___get_Item(
           funcResults,
           v16,
           (const MethodInfo_31AF1F4 *)Method_System_Collections_Generic_Dictionary_KeyValuePair_int__int___bool__get_Item__);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall BattleLogicFunction_ProcListInArgs__setFuncResult(
        BattleLogicFunction_ProcListInArgs_o *this,
        int32_t targetId,
        bool result,
        int32_t index,
        const MethodInfo *method)
{
  __int64 v9; // x1
  __int64 v10; // x1
  System_Collections_Generic_Dictionary_KeyValuePair_int__int___bool__o *funcResults; // x0
  System_Collections_Generic_KeyValuePair_int__int__o key; // [xsp+8h] [xbp-38h] BYREF
  System_Collections_Generic_KeyValuePair_int__int__o p_key; // 0:x0.8
  System_Collections_Generic_KeyValuePair_int__int__o v14; // 0:x1.8

  if ( (byte_49BDC48 & 1) == 0 )
  {
    sub_1B4CF90(
      &Method_System_Collections_Generic_Dictionary_KeyValuePair_int__int___bool__set_Item__,
      *(_QWORD *)&targetId);
    sub_1B4CF90(&Method_System_Collections_Generic_KeyValuePair_int__int___ctor__, v9);
    byte_49BDC48 = 1;
  }
  p_key = (System_Collections_Generic_KeyValuePair_int__int__o)&key;
  key = 0LL;
  System_Collections_Generic_KeyValuePair_int__int____ctor(
    p_key,
    index,
    targetId,
    (const MethodInfo_34C0274 *)Method_System_Collections_Generic_KeyValuePair_int__int___ctor__);
  funcResults = this->fields.funcResults;
  if ( !funcResults )
    sub_1B4D1EC(0LL, v10);
  v14 = key;
  System_Collections_Generic_Dictionary_KeyValuePair_int__int___bool___set_Item(
    funcResults,
    v14,
    result,
    (const MethodInfo_31AF288 *)Method_System_Collections_Generic_Dictionary_KeyValuePair_int__int___bool__set_Item__);
}


void __fastcall BattleLogicFunction_ProcListInArgs__set_IsCommandSideEffect(
        BattleLogicFunction_ProcListInArgs_o *this,
        bool value,
        const MethodInfo *method)
{
  struct BattleLogicFunction_FunctionArgument_o *externalArg; // x8

  externalArg = this->fields.externalArg;
  if ( !externalArg )
    sub_1B4D1EC(this, value);
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
    sub_1B4D1EC(this, value);
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
    sub_1B4D1EC(this, value);
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
    sub_1B4D1EC(this, value);
  externalArg->fields.skillId = value;
}


void __fastcall BattleLogicFunction_ProcListInArgs__set_funcUnitArray(
        BattleLogicFunction_ProcListInArgs_o *this,
        BattleLogicFunctionProcess_FunctionUnitCheck_array *value,
        const MethodInfo *method)
{
  const MethodInfo *v3; // x3

  this->fields._funcUnitArray_k__BackingField = value;
  sub_1B4CF34(
    (CGThumbnailListItem_o *)&this->fields._funcUnitArray_k__BackingField,
    (int32_t)value,
    (int32_t)method,
    v3);
}


void __fastcall BattleLogicFunction_ProcListInArgs___c__DisplayClass40_0___ctor(
        BattleLogicFunction_ProcListInArgs___c__DisplayClass40_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


bool __fastcall BattleLogicFunction_ProcListInArgs___c__DisplayClass40_0___DidTriggeredFuncHaveSpecifyResults_b__0(
        BattleLogicFunction_ProcListInArgs___c__DisplayClass40_0_o *this,
        System_Collections_Generic_KeyValuePair_KeyValuePair_int__int___bool__o x,
        const MethodInfo *method)
{
  int32_t key; // w19
  __int64 v5; // x1

  key = x.fields.key.fields.key;
  if ( (byte_49BDC4B & 1) == 0 )
  {
    sub_1B4CF90(
      &Method_System_Collections_Generic_KeyValuePair_KeyValuePair_int__int___bool__get_Key__,
      *(_QWORD *)&x.fields.key);
    sub_1B4CF90(&Method_System_Collections_Generic_KeyValuePair_int__int__get_Key__, v5);
    byte_49BDC4B = 1;
  }
  return this->fields.funcIndex == key;
}


bool __fastcall BattleLogicFunction_ProcListInArgs___c__DisplayClass40_0___DidTriggeredFuncHaveSpecifyResults_b__1(
        BattleLogicFunction_ProcListInArgs___c__DisplayClass40_0_o *this,
        System_Collections_Generic_KeyValuePair_KeyValuePair_int__int___bool__o x,
        const MethodInfo *method)
{
  bool value; // w19

  value = x.fields.value;
  if ( (byte_49BDC4C & 1) == 0 )
  {
    sub_1B4CF90(
      &Method_System_Collections_Generic_KeyValuePair_KeyValuePair_int__int___bool__get_Value__,
      *(_QWORD *)&x.fields.key);
    byte_49BDC4C = 1;
  }
  return this->fields.isTrue == value;
}


bool __fastcall BattleLogicFunction_ProcListInArgs___c__DisplayClass40_0___DidTriggeredFuncHaveSpecifyResults_b__2(
        BattleLogicFunction_ProcListInArgs___c__DisplayClass40_0_o *this,
        System_Collections_Generic_KeyValuePair_KeyValuePair_int__int___bool__o x,
        const MethodInfo *method)
{
  int32_t key; // w19
  __int64 v5; // x1

  key = x.fields.key.fields.key;
  if ( (byte_49BDC4A & 1) == 0 )
  {
    sub_1B4CF90(
      &Method_System_Collections_Generic_KeyValuePair_KeyValuePair_int__int___bool__get_Key__,
      *(_QWORD *)&x.fields.key);
    sub_1B4CF90(&Method_System_Collections_Generic_KeyValuePair_int__int__get_Key__, v5);
    byte_49BDC4A = 1;
  }
  return this->fields.funcIndex == key;
}


void __fastcall BattleLogicFunction_SideEffectMakeArgument___ctor(
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

  if ( (byte_49BDC4E & 1) == 0 )
  {
    sub_1B4CF90(&Method_System_Array_Empty_BattleActionData_SideEffectData___, method);
    byte_49BDC4E = 1;
  }
  v6 = Method_System_Array_Empty_BattleActionData_SideEffectData___;
  v7 = *((_QWORD *)Method_System_Array_Empty_BattleActionData_SideEffectData___ + 7);
  if ( !v7 )
  {
    sub_1B9D67C(Method_System_Array_Empty_BattleActionData_SideEffectData___);
    v7 = v6[7];
  }
  v8 = *(_QWORD *)(v7 + 16);
  if ( (*(_BYTE *)(v8 + 309) & 1) == 0 )
    v8 = sub_1B9D620(inited);
  if ( !*(_DWORD *)(v8 + 224) )
    inited = j_il2cpp_runtime_class_init_0(v8);
  v9 = *(_QWORD *)(v6[7] + 16LL);
  if ( (*(_BYTE *)(v9 + 309) & 1) == 0 )
    v9 = sub_1B9D620(inited);
  v10 = *(struct BattleActionData_SideEffectData_array ***)(v9 + 184);
  v11 = *v10;
  this->fields._SideEffectList_k__BackingField = *v10;
  sub_1B4CF34((CGThumbnailListItem_o *)&this->fields, (int32_t)v11, v2, v3);
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


BattleLogicFunction_SideEffectMakeArgument_o *__fastcall BattleLogicFunction_SideEffectMakeArgument__Init(
        BattleLogicFunction_SideEffectMakeArgument_o *this,
        System_Int32_array *targetIds,
        const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x21
  __int64 v11; // x22
  __int64 v12; // x0
  __int64 v13; // x1
  int32_t v14; // w2
  const MethodInfo *v15; // x3
  System_Func_T__TResult__o *v16; // x22
  System_Collections_Generic_IEnumerable_TSource__o *v17; // x0
  System_Object_array *v18; // x0
  int32_t v19; // w2
  const MethodInfo *v20; // x3

  if ( (byte_49BDC4D & 1) == 0 )
  {
    sub_1B4CF90(&BuffList_ACTION___TypeInfo, targetIds);
    sub_1B4CF90(&Method_System_Linq_Enumerable_Select_int__BattleActionData_SideEffectData___, v5);
    sub_1B4CF90(&Method_System_Linq_Enumerable_ToArray_BattleActionData_SideEffectData___, v6);
    sub_1B4CF90(&System_Func_int__BattleActionData_SideEffectData__TypeInfo, v7);
    sub_1B4CF90(&Method_BattleLogicFunction_SideEffectMakeArgument___c__DisplayClass9_0__Init_b__0__, v8);
    sub_1B4CF90(&BattleLogicFunction_SideEffectMakeArgument___c__DisplayClass9_0_TypeInfo, v9);
    byte_49BDC4D = 1;
  }
  v10 = sub_1B4D1DC(BattleLogicFunction_SideEffectMakeArgument___c__DisplayClass9_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v10, 0LL);
  v11 = sub_1B4D038(BuffList_ACTION___TypeInfo, 1LL);
  v12 = ((__int64 (__fastcall *)(BattleLogicFunction_SideEffectMakeArgument_o *, Il2CppMethodPointer))this->klass->vtable._4_unknown.method)(
          this,
          this->klass->vtable._5_unknown.methodPtr);
  if ( !v11 )
    goto LABEL_7;
  if ( !*(_DWORD *)(v11 + 24) )
    sub_1B4D1F4(v12, v13);
  *(_DWORD *)(v11 + 32) = v12;
  if ( !v10 )
LABEL_7:
    sub_1B4D1EC(v12, v13);
  *(_QWORD *)(v10 + 16) = v11;
  sub_1B4CF34((CGThumbnailListItem_o *)(v10 + 16), v11, v14, v15);
  v16 = (System_Func_T__TResult__o *)sub_1B4D1DC(System_Func_int__BattleActionData_SideEffectData__TypeInfo);
  System_Func_int__object____ctor(
    v16,
    (Il2CppObject *)v10,
    Method_BattleLogicFunction_SideEffectMakeArgument___c__DisplayClass9_0__Init_b__0__,
    0LL);
  v17 = (System_Collections_Generic_IEnumerable_TSource__o *)System_Linq_Enumerable__Select_int__object_(
                                                               (System_Collections_Generic_IEnumerable_TSource__o *)targetIds,
                                                               (System_Func_TSource__TResult__o *)v16,
                                                               (const MethodInfo_2F31AE4 *)Method_System_Linq_Enumerable_Select_int__BattleActionData_SideEffectData___);
  v18 = System_Linq_Enumerable__ToArray_object_(
          v17,
          (const MethodInfo_2F3C3E4 *)Method_System_Linq_Enumerable_ToArray_BattleActionData_SideEffectData___);
  this->fields._SideEffectList_k__BackingField = (struct BattleActionData_SideEffectData_array *)v18;
  sub_1B4CF34((CGThumbnailListItem_o *)&this->fields, (int32_t)v18, v19, v20);
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
  const MethodInfo *v3; // x3

  this->fields._SideEffectList_k__BackingField = value;
  sub_1B4CF34((CGThumbnailListItem_o *)&this->fields, (int32_t)value, (int32_t)method, v3);
}


void __fastcall BattleLogicFunction_SideEffectMakeArgument___c__DisplayClass9_0___ctor(
        BattleLogicFunction_SideEffectMakeArgument___c__DisplayClass9_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


// local variable allocation has failed, the output may be wrong!
BattleActionData_SideEffectData_o *__fastcall BattleLogicFunction_SideEffectMakeArgument___c__DisplayClass9_0___Init_b__0(
        BattleLogicFunction_SideEffectMakeArgument___c__DisplayClass9_0_o *this,
        int32_t id,
        const MethodInfo *method)
{
  BuffList_ACTION_array *buffActs; // x20
  BattleActionData_SideEffectData_o *v6; // x21

  if ( (byte_49BDC4F & 1) == 0 )
  {
    sub_1B4CF90(&BattleActionData_SideEffectData_TypeInfo, *(_QWORD *)&id);
    byte_49BDC4F = 1;
  }
  buffActs = this->fields.buffActs;
  v6 = (BattleActionData_SideEffectData_o *)sub_1B4D1DC(BattleActionData_SideEffectData_TypeInfo);
  BattleActionData_SideEffectData___ctor(v6, id, buffActs, 0LL);
  return v6;
}


// local variable allocation has failed, the output may be wrong!
BuffList_ACTION_array *__fastcall BattleLogicFunction_SkillSideEffectFunctionArgument__GetActArray(
        BattleLogicFunction_SkillSideEffectFunctionArgument_o *this,
        bool isMainOnly,
        const MethodInfo *method)
{
  BuffList_ACTION_array *result; // x0
  __int64 v5; // x1
  il2cpp_array_size_t max_length; // w8
  int32_t v7; // w8

  if ( (byte_49BDC3B & 1) == 0 )
  {
    sub_1B4CF90(&BuffList_ACTION___TypeInfo, isMainOnly);
    byte_49BDC3B = 1;
  }
  result = (BuffList_ACTION_array *)sub_1B4D038(BuffList_ACTION___TypeInfo, 1LL);
  if ( !result )
    sub_1B4D1EC(0LL, v5);
  max_length = result->max_length;
  if ( !isMainOnly )
  {
    if ( max_length )
    {
      v7 = 122;
      goto LABEL_9;
    }
LABEL_11:
    sub_1B4D1F4(result, v5);
  }
  if ( !max_length )
    goto LABEL_11;
  v7 = 123;
LABEL_9:
  result->m_Items[1] = v7;
  return result;
}


// local variable allocation has failed, the output may be wrong!
BuffList_ACTION_array *__fastcall BattleLogicFunction_TreasureDeviceSideEffectFunctionArgument__GetActArray(
        BattleLogicFunction_TreasureDeviceSideEffectFunctionArgument_o *this,
        bool isMainOnly,
        const MethodInfo *method)
{
  BuffList_ACTION_array *result; // x0
  __int64 v5; // x1
  il2cpp_array_size_t max_length; // w8
  int32_t v7; // w8

  if ( (byte_49BDC3C & 1) == 0 )
  {
    sub_1B4CF90(&BuffList_ACTION___TypeInfo, isMainOnly);
    byte_49BDC3C = 1;
  }
  result = (BuffList_ACTION_array *)sub_1B4D038(BuffList_ACTION___TypeInfo, 1LL);
  if ( !result )
    sub_1B4D1EC(0LL, v5);
  max_length = result->max_length;
  if ( !isMainOnly )
  {
    if ( max_length )
    {
      v7 = 124;
      goto LABEL_9;
    }
LABEL_11:
    sub_1B4D1F4(result, v5);
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
  const MethodInfo *v8; // x3

  if ( (byte_49BDC3D & 1) == 0 )
  {
    sub_1B4CF90(&int___TypeInfo, *(_QWORD *)&targetId);
    byte_49BDC3D = 1;
  }
  BattleLogicFunction_FunctionArgument___ctor(
    (BattleLogicFunction_FunctionArgument_o *)this,
    *(const MethodInfo **)&targetId);
  v5 = (struct System_Int32_array *)sub_1B4D038(int___TypeInfo, 1LL);
  if ( !v5 )
    sub_1B4D1EC(0LL, v6);
  if ( !v5->max_length )
    sub_1B4D1F4(v5, v5);
  v5->m_Items[1] = targetId;
  this->fields.fixTargetIds = v5;
  sub_1B4CF34((CGThumbnailListItem_o *)&this->fields.fixTargetIds, (int32_t)v5, v7, v8);
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
  __int64 v1; // x1
  Il2CppObject *v2; // x19
  int32_t v3; // w2
  const MethodInfo *v4; // x3

  if ( (byte_49BDC52 & 1) == 0 )
  {
    sub_1B4CF90(&BattleLogicFunction___c_TypeInfo, v1);
    byte_49BDC52 = 1;
  }
  v2 = (Il2CppObject *)sub_1B4D1DC(BattleLogicFunction___c_TypeInfo);
  System_Object___ctor(v2, 0LL);
  BattleLogicFunction___c_TypeInfo->static_fields->__9 = (struct BattleLogicFunction___c_o *)v2;
  sub_1B4CF34((CGThumbnailListItem_o *)BattleLogicFunction___c_TypeInfo->static_fields, (int32_t)v2, v3, v4);
}


void __fastcall BattleLogicFunction___c___ctor(BattleLogicFunction___c_o *this, const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


bool __fastcall BattleLogicFunction___c___ApplySubBuffChanges_b__71_1(
        BattleLogicFunction___c_o *this,
        BattleBuffData_BuffData_o *buff,
        const MethodInfo *method)
{
  if ( !buff )
    sub_1B4D1EC(this, 0LL);
  return BattleBuffData_BuffData__get_ExistChangeBgm(buff, 0LL);
}


int32_t __fastcall BattleLogicFunction___c___FunctionRevivalInDetail_b__110_0(
        BattleLogicFunction___c_o *this,
        BattleServantData_o *x,
        const MethodInfo *method)
{
  if ( !x || (this = (BattleLogicFunction___c_o *)x->fields.deckSvt) == 0LL )
    sub_1B4D1EC(this, x);
  return BattleDeckServantData__GetRevivalTargetId((BattleDeckServantData_o *)this, 0LL);
}


int32_t __fastcall BattleLogicFunction___c___FunctionRevivalInDetail_b__110_1(
        BattleLogicFunction___c_o *this,
        System_Linq_IGrouping_int__BattleServantData__o *x,
        const MethodInfo *method)
{
  System_Linq_IGrouping_int__BattleServantData__c *klass; // x8
  __int64 v5; // x9
  int32_t *p_offset; // x10
  __int64 p_method; // x0

  if ( (byte_49BDC54 & 1) == 0 )
  {
    this = (BattleLogicFunction___c_o *)sub_1B4CF90(&System_Linq_IGrouping_int__BattleServantData__TypeInfo, x);
    byte_49BDC54 = 1;
  }
  if ( !x )
    sub_1B4D1EC(this, x);
  klass = x->klass;
  v5 = *(unsigned __int16 *)(&x->klass->_2.bitflags2 + 3);
  if ( *(_WORD *)(&x->klass->_2.bitflags2 + 3) )
  {
    p_offset = &klass->_1.interfaceOffsets->offset;
    while ( *((System_Linq_IGrouping_int__BattleServantData__c **)p_offset - 1) != System_Linq_IGrouping_int__BattleServantData__TypeInfo )
    {
      --v5;
      p_offset += 4;
      if ( !v5 )
        goto LABEL_8;
    }
    p_method = (__int64)&klass->vtable[*p_offset].method;
  }
  else
  {
LABEL_8:
    p_method = sub_1B9D724(x, System_Linq_IGrouping_int__BattleServantData__TypeInfo, 0LL);
  }
  return (*(__int64 (__fastcall **)(System_Linq_IGrouping_int__BattleServantData__o *, _QWORD))p_method)(
           x,
           *(_QWORD *)(p_method + 8));
}


BattleServantData_array *__fastcall BattleLogicFunction___c___FunctionRevivalInDetail_b__110_2(
        BattleLogicFunction___c_o *this,
        System_Linq_IGrouping_int__BattleServantData__o *x,
        const MethodInfo *method)
{
  if ( (byte_49BDC55 & 1) == 0 )
  {
    sub_1B4CF90(&Method_System_Linq_Enumerable_ToArray_BattleServantData___, x);
    byte_49BDC55 = 1;
  }
  return (BattleServantData_array *)System_Linq_Enumerable__ToArray_object_(
                                      (System_Collections_Generic_IEnumerable_TSource__o *)x,
                                      (const MethodInfo_2F3C3E4 *)Method_System_Linq_Enumerable_ToArray_BattleServantData___);
}


bool __fastcall BattleLogicFunction___c___FunctionRevivalInDetail_b__110_7(
        BattleLogicFunction___c_o *this,
        BattleServantData_o *x,
        const MethodInfo *method)
{
  if ( !x )
    sub_1B4D1EC(this, 0LL);
  return !x->fields.isEnemy;
}


void __fastcall BattleLogicFunction___c___FunctionRevivalInDetail_b__110_8(
        BattleLogicFunction___c_o *this,
        BattleServantData_o *x,
        const MethodInfo *method)
{
  if ( !x )
    sub_1B4D1EC(this, 0LL);
  BattleServantData__ProcessSkillRevive(x, 0LL);
}


bool __fastcall BattleLogicFunction___c___FunctionSubFieldBuff_b__125_1(
        BattleLogicFunction___c_o *this,
        BattleBuffData_BuffData_o *x,
        const MethodInfo *method)
{
  if ( !x )
    sub_1B4D1EC(this, 0LL);
  return x->fields.fieldChangeData != 0LL;
}


void __fastcall BattleLogicFunction___c___SetFuncSideEffect_b__49_0(
        BattleLogicFunction___c_o *this,
        BattleActionData_o *x,
        const MethodInfo *method)
{
  if ( !x )
    sub_1B4D1EC(this, 0LL);
  BattleActionData__SetPopupOnce(x, 0LL);
}


bool __fastcall BattleLogicFunction___c___functionMoveState_b__112_2(
        BattleLogicFunction___c_o *this,
        BattleBuffData_BuffData_o *x,
        const MethodInfo *method)
{
  if ( !x )
    sub_1B4D1EC(this, 0LL);
  return BattleBuffData_BuffData__get_ExistChangeBgm(x, 0LL);
}


void __fastcall BattleLogicFunction___c___functionPtShuffle_b__91_0(
        BattleLogicFunction___c_o *this,
        BattleServantData_o *s,
        const MethodInfo *method)
{
  __int64 Next; // x0
  __int64 v5; // x1

  Next = BattleRandom__getNext(1000, 0LL);
  if ( !s )
    sub_1B4D1EC(Next, v5);
  s->fields._shuffuleSeed = Next;
}


int32_t __fastcall BattleLogicFunction___c___functionPtShuffle_b__91_1(
        BattleLogicFunction___c_o *this,
        BattleServantData_o *a,
        BattleServantData_o *b,
        const MethodInfo *method)
{
  if ( !a || (this = (BattleLogicFunction___c_o *)BattleServantData__get_ShuffleSeed(a, 0LL), !b) )
    sub_1B4D1EC(this, a);
  return (_DWORD)this - BattleServantData__get_ShuffleSeed(b, 0LL);
}


bool __fastcall BattleLogicFunction___c___functionReplaceEnemyMember_b__85_0(
        BattleLogicFunction___c_o *this,
        BattleServantData_o *x,
        const MethodInfo *method)
{
  if ( !x )
    sub_1B4D1EC(this, 0LL);
  return BattleServantData__isAlive(x, 0, 0LL);
}


BattleServantSnapShot_o *__fastcall BattleLogicFunction___c___functionTransformServant_b__87_0(
        BattleLogicFunction___c_o *this,
        BattleServantData_o *x,
        const MethodInfo *method)
{
  BattleServantSnapShotShiftServant_o *v4; // x20

  if ( (byte_49BDC53 & 1) == 0 )
  {
    sub_1B4CF90(&BattleServantSnapShotShiftServant_TypeInfo, x);
    byte_49BDC53 = 1;
  }
  v4 = (BattleServantSnapShotShiftServant_o *)sub_1B4D1DC(BattleServantSnapShotShiftServant_TypeInfo);
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
    sub_1B4D1EC(this, x);
  return dataVals_k__BackingField->fields.funcType != 0;
}


bool __fastcall BattleLogicFunction___c___procList_b__41_1(
        BattleLogicFunction___c_o *this,
        BattleLogicFunctionProcess_FunctionUnitCheck_o *x,
        const MethodInfo *method)
{
  struct DataVals_o *dataVals_k__BackingField; // x8

  if ( !x || (dataVals_k__BackingField = x->fields._dataVals_k__BackingField) == 0LL )
    sub_1B4D1EC(this, x);
  return dataVals_k__BackingField->fields.funcType == 135;
}


bool __fastcall BattleLogicFunction___c___procList_b__41_2(
        BattleLogicFunction___c_o *this,
        BattleLogicFunctionProcess_FunctionTargetCheck_o *target,
        const MethodInfo *method)
{
  if ( !target )
    sub_1B4D1EC(this, 0LL);
  return target->fields._result_k__BackingField;
}


int32_t __fastcall BattleLogicFunction___c___procList_b__41_3(
        BattleLogicFunction___c_o *this,
        BattleLogicFunctionProcess_FunctionTargetCheck_o *target,
        const MethodInfo *method)
{
  if ( !target )
    sub_1B4D1EC(this, 0LL);
  return target->fields._targetId_k__BackingField;
}


int32_t __fastcall BattleLogicFunction___c___setAttackSideEffect_b__52_0(
        BattleLogicFunction___c_o *this,
        BattleActionData_SideEffectData_o *x,
        const MethodInfo *method)
{
  if ( !x )
    sub_1B4D1EC(this, 0LL);
  return x->fields.targetId;
}


void __fastcall BattleLogicFunction___c__DisplayClass103_0___ctor(
        BattleLogicFunction___c__DisplayClass103_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


void __fastcall BattleLogicFunction___c__DisplayClass103_0___UpdateUserEquipSkillChargeTurn_b__0(
        BattleLogicFunction___c__DisplayClass103_0_o *this,
        BattleSkillInfoData_o *x,
        const MethodInfo *method)
{
  if ( !x )
    sub_1B4D1EC(this, 0LL);
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


void __fastcall BattleLogicFunction___c__DisplayClass103_0___UpdateUserEquipSkillChargeTurn_b__1(
        BattleLogicFunction___c__DisplayClass103_0_o *this,
        BattleSkillInfoData_o *x,
        const MethodInfo *method)
{
  if ( !x )
    sub_1B4D1EC(this, 0LL);
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


void __fastcall BattleLogicFunction___c__DisplayClass112_0___ctor(
        BattleLogicFunction___c__DisplayClass112_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


bool __fastcall BattleLogicFunction___c__DisplayClass112_0___functionMoveState_b__0(
        BattleLogicFunction___c__DisplayClass112_0_o *this,
        BattleBuffData_BuffData_o *x,
        const MethodInfo *method)
{
  if ( !x )
    sub_1B4D1EC(this, 0LL);
  return BattleBuffData_BuffData__checkState(x, this->fields.stateUnstealable, 0LL);
}


bool __fastcall BattleLogicFunction___c__DisplayClass112_0___functionMoveState_b__1(
        BattleLogicFunction___c__DisplayClass112_0_o *this,
        BattleBuffData_BuffData_o *x,
        const MethodInfo *method)
{
  System_Collections_Generic_HashSet_T__o *unstealableBuffs; // x0

  if ( (byte_49BDC56 & 1) == 0 )
  {
    sub_1B4CF90(&Method_System_Collections_Generic_HashSet_BattleBuffData_BuffData__Contains__, x);
    byte_49BDC56 = 1;
  }
  unstealableBuffs = (System_Collections_Generic_HashSet_T__o *)this->fields.unstealableBuffs;
  if ( !unstealableBuffs )
    sub_1B4D1EC(0LL, x);
  return !System_Collections_Generic_HashSet_object___Contains(
            unstealableBuffs,
            (Il2CppObject *)x,
            (const MethodInfo_3444EF4 *)Method_System_Collections_Generic_HashSet_BattleBuffData_BuffData__Contains__);
}


void __fastcall BattleLogicFunction___c__DisplayClass69_0___ctor(
        BattleLogicFunction___c__DisplayClass69_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


int32_t __fastcall BattleLogicFunction___c__DisplayClass69_0___BehaveLinkageBuffAsFamily_b__0(
        BattleLogicFunction___c__DisplayClass69_0_o *this,
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
    sub_1B4D1EC(this, linkageIndividuality);
  }
  return BattleLogicFunction_ProcListInArgs__GetFamilyBuffLinkageId(
           procArg_k__BackingField,
           linkageIndividuality,
           this->fields.targetSvtData,
           v3);
}


void __fastcall BattleLogicFunction___c__DisplayClass71_0___ctor(
        BattleLogicFunction___c__DisplayClass71_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


BattleBuffData_BuffData_o *__fastcall BattleLogicFunction___c__DisplayClass71_0___ApplySubBuffChanges_b__0(
        BattleLogicFunction___c__DisplayClass71_0_o *this,
        BattleBuffData_BuffData_o *buff,
        const MethodInfo *method)
{
  BattleServantData_o *targetSvtData; // x0

  targetSvtData = this->fields.targetSvtData;
  if ( !targetSvtData
    || (targetSvtData = (BattleServantData_o *)BattleServantData__get_BuffData(targetSvtData, 0LL)) == 0LL )
  {
    sub_1B4D1EC(targetSvtData, buff);
  }
  return BattleBuffData__CreateDummyBuff((BattleBuffData_o *)targetSvtData, buff, 0LL);
}


void __fastcall BattleLogicFunction___c__DisplayClass87_0___ctor(
        BattleLogicFunction___c__DisplayClass87_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


bool __fastcall BattleLogicFunction___c__DisplayClass87_0___functionTransformServant_b__1(
        BattleLogicFunction___c__DisplayClass87_0_o *this,
        BattleActionData_BuffData_o *x,
        const MethodInfo *method)
{
  if ( !x )
    sub_1B4D1EC(this, 0LL);
  return x->fields.targetId == this->fields.targetId;
}