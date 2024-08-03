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
  int32_t v15; // w2
  int32_t v16; // w3
  il2cpp_array_size_t max_length; // w9
  __int64 v18; // x1
  __int64 v19; // x2
  System_Collections_Generic_Dictionary_TKey__TValue__o *v20; // x20
  __int64 v21; // x1
  __int64 v22; // x2
  BattleLogicFunctionProcess_CommonFunctionTypeProcess_o *v23; // x21
  __int64 v24; // x1
  __int64 v25; // x2
  BattleLogicFunctionProcess_AddStateProcess_o *v26; // x21
  __int64 v27; // x1
  __int64 v28; // x2
  BattleLogicFunctionProcess_AddStateShortProcess_o *v29; // x21
  __int64 v30; // x1
  __int64 v31; // x2
  BattleLogicFunctionProcess_MoveToLastSubMemberProcess_o *v32; // x21
  __int64 v33; // x1
  __int64 v34; // x2
  BattleLogicFunctionProcess_TransformServantProcess_o *v35; // x21
  __int64 v36; // x1
  __int64 v37; // x2
  BattleLogicFunctionProcess_CommonFieldFunctionProcess_o *v38; // x21
  __int64 v39; // x1
  __int64 v40; // x2
  BattleLogicFunctionProcess_CommonFieldFunctionProcess_o *v41; // x21
  __int64 v42; // x1
  __int64 v43; // x2
  BattleLogicFunctionProcess_CommonAddStateProcess_o *v44; // x21
  __int64 v45; // x1
  __int64 v46; // x2
  BattleLogicFunctionProcess_ToFieldCommonFunctionProcess_o *v47; // x21
  int32_t v48; // w2
  int32_t v49; // w3

  if ( (byte_49FEE2B & 1) == 0 )
  {
    sub_1B640C8(&BattleLogicFunctionProcess_AddStateProcess_TypeInfo, method);
    sub_1B640C8(&BattleLogicFunctionProcess_AddStateShortProcess_TypeInfo, v3);
    sub_1B640C8(&BattleLogicFunctionProcess_CommonAddStateProcess_TypeInfo, v4);
    sub_1B640C8(&BattleLogicFunctionProcess_CommonFieldFunctionProcess_TypeInfo, v5);
    sub_1B640C8(&BattleLogicFunctionProcess_CommonFunctionTypeProcess_TypeInfo, v6);
    sub_1B640C8(
      &Method_System_Collections_Generic_Dictionary_FuncList_TYPE__BattleLogicFunctionProcess_BaseFunctionTypeProcess__Add__,
      v7);
    sub_1B640C8(
      &Method_System_Collections_Generic_Dictionary_FuncList_TYPE__BattleLogicFunctionProcess_BaseFunctionTypeProcess___ctor__,
      v8);
    sub_1B640C8(
      &System_Collections_Generic_Dictionary_FuncList_TYPE__BattleLogicFunctionProcess_BaseFunctionTypeProcess__TypeInfo,
      v9);
    sub_1B640C8(&int___TypeInfo, v10);
    sub_1B640C8(&BattleLogicFunctionProcess_MoveToLastSubMemberProcess_TypeInfo, v11);
    sub_1B640C8(&BattleLogicFunctionProcess_ToFieldCommonFunctionProcess_TypeInfo, v12);
    sub_1B640C8(&BattleLogicFunctionProcess_TransformServantProcess_TypeInfo, v13);
    byte_49FEE2B = 1;
  }
  v14 = (struct System_Int32_array *)sub_1B64170(int___TypeInfo, 2LL);
  if ( !v14 )
    goto LABEL_8;
  max_length = v14->max_length;
  if ( !max_length || (v14->m_Items[1] = 701601, max_length == 1) )
    sub_1B6432C(v14, v14);
  v14->m_Items[2] = 701602;
  this->fields.tamamocatTreasureDeviceIds = v14;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)&this->fields.tamamocatTreasureDeviceIds, (int32_t)v14, v15, v16);
  v20 = (System_Collections_Generic_Dictionary_TKey__TValue__o *)sub_1B64314(
                                                                   System_Collections_Generic_Dictionary_FuncList_TYPE__BattleLogicFunctionProcess_BaseFunctionTypeProcess__TypeInfo,
                                                                   v18,
                                                                   v19);
  System_Collections_Generic_Dictionary_Int32Enum__object____ctor(
    v20,
    (const MethodInfo_3151E6C *)Method_System_Collections_Generic_Dictionary_FuncList_TYPE__BattleLogicFunctionProcess_BaseFunctionTypeProcess___ctor__);
  v23 = (BattleLogicFunctionProcess_CommonFunctionTypeProcess_o *)sub_1B64314(
                                                                    BattleLogicFunctionProcess_CommonFunctionTypeProcess_TypeInfo,
                                                                    v21,
                                                                    v22);
  BattleLogicFunctionProcess_CommonFunctionTypeProcess___ctor(v23, 0LL);
  if ( !v20 )
LABEL_8:
    sub_1B64324(v14);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v20,
    0,
    (Il2CppObject *)v23,
    (const MethodInfo_3152840 *)Method_System_Collections_Generic_Dictionary_FuncList_TYPE__BattleLogicFunctionProcess_BaseFunctionTypeProcess__Add__);
  v26 = (BattleLogicFunctionProcess_AddStateProcess_o *)sub_1B64314(
                                                          BattleLogicFunctionProcess_AddStateProcess_TypeInfo,
                                                          v24,
                                                          v25);
  BattleLogicFunctionProcess_AddStateProcess___ctor(v26, 0LL);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v20,
    1,
    (Il2CppObject *)v26,
    (const MethodInfo_3152840 *)Method_System_Collections_Generic_Dictionary_FuncList_TYPE__BattleLogicFunctionProcess_BaseFunctionTypeProcess__Add__);
  v29 = (BattleLogicFunctionProcess_AddStateShortProcess_o *)sub_1B64314(
                                                               BattleLogicFunctionProcess_AddStateShortProcess_TypeInfo,
                                                               v27,
                                                               v28);
  BattleLogicFunctionProcess_AddStateShortProcess___ctor(v29, 0LL);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v20,
    16,
    (Il2CppObject *)v29,
    (const MethodInfo_3152840 *)Method_System_Collections_Generic_Dictionary_FuncList_TYPE__BattleLogicFunctionProcess_BaseFunctionTypeProcess__Add__);
  v32 = (BattleLogicFunctionProcess_MoveToLastSubMemberProcess_o *)sub_1B64314(
                                                                     BattleLogicFunctionProcess_MoveToLastSubMemberProcess_TypeInfo,
                                                                     v30,
                                                                     v31);
  BattleLogicFunctionProcess_MoveToLastSubMemberProcess___ctor(v32, 0LL);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v20,
    61,
    (Il2CppObject *)v32,
    (const MethodInfo_3152840 *)Method_System_Collections_Generic_Dictionary_FuncList_TYPE__BattleLogicFunctionProcess_BaseFunctionTypeProcess__Add__);
  v35 = (BattleLogicFunctionProcess_TransformServantProcess_o *)sub_1B64314(
                                                                  BattleLogicFunctionProcess_TransformServantProcess_TypeInfo,
                                                                  v33,
                                                                  v34);
  BattleLogicFunctionProcess_TransformServantProcess___ctor(v35, 0LL);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v20,
    109,
    (Il2CppObject *)v35,
    (const MethodInfo_3152840 *)Method_System_Collections_Generic_Dictionary_FuncList_TYPE__BattleLogicFunctionProcess_BaseFunctionTypeProcess__Add__);
  v38 = (BattleLogicFunctionProcess_CommonFieldFunctionProcess_o *)sub_1B64314(
                                                                     BattleLogicFunctionProcess_CommonFieldFunctionProcess_TypeInfo,
                                                                     v36,
                                                                     v37);
  BattleLogicFunctionProcess_CommonFieldFunctionProcess___ctor(v38, 0LL);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v20,
    29,
    (Il2CppObject *)v38,
    (const MethodInfo_3152840 *)Method_System_Collections_Generic_Dictionary_FuncList_TYPE__BattleLogicFunctionProcess_BaseFunctionTypeProcess__Add__);
  v41 = (BattleLogicFunctionProcess_CommonFieldFunctionProcess_o *)sub_1B64314(
                                                                     BattleLogicFunctionProcess_CommonFieldFunctionProcess_TypeInfo,
                                                                     v39,
                                                                     v40);
  BattleLogicFunctionProcess_CommonFieldFunctionProcess___ctor(v41, 0LL);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v20,
    128,
    (Il2CppObject *)v41,
    (const MethodInfo_3152840 *)Method_System_Collections_Generic_Dictionary_FuncList_TYPE__BattleLogicFunctionProcess_BaseFunctionTypeProcess__Add__);
  v44 = (BattleLogicFunctionProcess_CommonAddStateProcess_o *)sub_1B64314(
                                                                BattleLogicFunctionProcess_CommonAddStateProcess_TypeInfo,
                                                                v42,
                                                                v43);
  BattleLogicFunctionProcess_CommonAddStateProcess___ctor(v44, 0LL);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v20,
    130,
    (Il2CppObject *)v44,
    (const MethodInfo_3152840 *)Method_System_Collections_Generic_Dictionary_FuncList_TYPE__BattleLogicFunctionProcess_BaseFunctionTypeProcess__Add__);
  v47 = (BattleLogicFunctionProcess_ToFieldCommonFunctionProcess_o *)sub_1B64314(
                                                                       BattleLogicFunctionProcess_ToFieldCommonFunctionProcess_TypeInfo,
                                                                       v45,
                                                                       v46);
  BattleLogicFunctionProcess_ToFieldCommonFunctionProcess___ctor(v47, 0LL);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v20,
    131,
    (Il2CppObject *)v47,
    (const MethodInfo_3152840 *)Method_System_Collections_Generic_Dictionary_FuncList_TYPE__BattleLogicFunctionProcess_BaseFunctionTypeProcess__Add__);
  this->fields.dicFuncProcess = (struct System_Collections_Generic_Dictionary_FuncList_TYPE__BattleLogicFunctionProcess_BaseFunctionTypeProcess__o *)v20;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)&this->fields.dicFuncProcess, (int32_t)v20, v48, v49);
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
  __int64 v20; // x1
  __int64 v21; // x2
  System_Collections_Generic_List_T__o *v22; // x25
  struct System_Object_array *items; // x8
  _QWORD *v24; // x9
  __int64 size; // x10
  __int64 v26; // x1
  struct BattleLogic_o *logic; // x8
  unsigned __int64 v28; // x9
  DataVals_o *v29; // x26
  const MethodInfo *v30; // x4
  BattleLogicFunction_c *klass; // x8
  BattleLogicFunction_o *v32; // x25
  __int64 v33; // x9
  int32_t *p_offset; // x10
  __int64 v35; // x0
  __int64 v36; // x25
  __int64 v37; // x8
  __int64 v38; // x9
  int *v39; // x10
  __int64 v40; // x0
  __int64 v41; // x8
  __int64 v42; // x9
  int *v43; // x10
  __int64 v44; // x0
  __int64 v45; // x0
  __int64 v46; // x27
  __int64 v47; // x0
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
  if ( (byte_49FEE0F & 1) == 0 )
  {
    sub_1B640C8(&BattleActionData_TypeInfo, mainAction);
    sub_1B640C8(&System_IDisposable_TypeInfo, v9);
    sub_1B640C8(&System_Collections_Generic_IEnumerable_BattleLogicFunctionProcess_FunctionTargetCheck__TypeInfo, v10);
    sub_1B640C8(&System_Collections_Generic_IEnumerator_BattleLogicFunctionProcess_FunctionTargetCheck__TypeInfo, v11);
    sub_1B640C8(&System_Collections_IEnumerator_TypeInfo, v12);
    sub_1B640C8(&Method_System_Collections_Generic_List_FuncList_TYPE__Add__, v13);
    sub_1B640C8(&Method_System_Collections_Generic_List_FuncList_TYPE___ctor__, v14);
    this = (BattleLogicFunction_o *)sub_1B640C8(&System_Collections_Generic_List_FuncList_TYPE__TypeInfo, v15);
    byte_49FEE0F = 1;
  }
  if ( !funcTarget )
    goto LABEL_65;
  funcUnit_k__BackingField = funcTarget->fields._funcUnit_k__BackingField;
  if ( !funcUnit_k__BackingField )
    goto LABEL_65;
  procArg_k__BackingField = funcUnit_k__BackingField->fields._procArg_k__BackingField;
  dataVals_k__BackingField = funcUnit_k__BackingField->fields._dataVals_k__BackingField;
  v19 = (BattleActionData_o *)sub_1B64314(BattleActionData_TypeInfo, mainAction, funcTarget);
  BattleActionData___ctor(v19, 0LL);
  v22 = (System_Collections_Generic_List_T__o *)sub_1B64314(
                                                  System_Collections_Generic_List_FuncList_TYPE__TypeInfo,
                                                  v20,
                                                  v21);
  System_Collections_Generic_List_Int32Enum____ctor(
    v22,
    (const MethodInfo_3491F54 *)Method_System_Collections_Generic_List_FuncList_TYPE___ctor__);
  if ( !v22 )
    goto LABEL_65;
  items = v22->fields._items;
  v24 = Method_System_Collections_Generic_List_FuncList_TYPE__Add__;
  ++v22->fields._version;
  if ( !items )
    goto LABEL_65;
  size = v22->fields._size;
  if ( (unsigned int)size >= items->max_length )
  {
    System_Collections_Generic_List_Int32Enum___AddWithResize(
      v22,
      8,
      *(const MethodInfo_34927A8 **)(*(_QWORD *)(v24[4] + 192LL) + 112LL));
  }
  else
  {
    v22->fields._size = size + 1;
    *((_DWORD *)items->m_Items + size) = 8;
  }
  if ( !dataVals_k__BackingField )
    goto LABEL_65;
  this = (BattleLogicFunction_o *)DataVals__GetDependDataValsArray(
                                    dataVals_k__BackingField,
                                    (System_Collections_Generic_List_FuncList_TYPE__o *)v22,
                                    0,
                                    0LL);
  if ( !this )
    goto LABEL_65;
  logic = this->fields.logic;
  if ( (int)logic >= 1 )
  {
    v28 = 0LL;
    v62 = this;
    while ( 1 )
    {
      if ( v28 >= (unsigned int)logic )
        sub_1B6432C(this, v26);
      v29 = (DataVals_o *)*((_QWORD *)&this->fields.logictarget + v28);
      diffNp = 0;
      if ( !result )
        break;
      this = (BattleLogicFunction_o *)result->fields._Convert_k__BackingField;
      v63 = v28;
      if ( !this )
        break;
      ((void (__fastcall *)(BattleLogicFunction_o *, DataVals_o *, void *))this->klass[1]._1.namespaze)(
        this,
        v29,
        this->klass[1]._1.byval_arg.data);
      this = (BattleLogicFunction_o *)BattleLogicFunction__GetDependFuncTargets(
                                        v8,
                                        procArg_k__BackingField,
                                        mainAction,
                                        v29,
                                        v30);
      if ( !this )
        break;
      klass = this->klass;
      v32 = this;
      v33 = *(unsigned __int16 *)(&this->klass->_2.bitflags2 + 3);
      if ( *(_WORD *)(&this->klass->_2.bitflags2 + 3) )
      {
        p_offset = &klass->_1.interfaceOffsets->offset;
        while ( *((System_Collections_Generic_IEnumerable_BattleLogicFunctionProcess_FunctionTargetCheck__c **)p_offset
                - 1) != System_Collections_Generic_IEnumerable_BattleLogicFunctionProcess_FunctionTargetCheck__TypeInfo )
        {
          --v33;
          p_offset += 4;
          if ( !v33 )
            goto LABEL_22;
        }
        v35 = (__int64)(&klass->vtable._0_Equals.method + 2 * *p_offset);
      }
      else
      {
LABEL_22:
        v35 = sub_1BB60A8(
                this,
                System_Collections_Generic_IEnumerable_BattleLogicFunctionProcess_FunctionTargetCheck__TypeInfo,
                0LL);
      }
      v36 = (*(__int64 (__fastcall **)(BattleLogicFunction_o *, _QWORD))v35)(v32, *(_QWORD *)(v35 + 8));
      if ( !v36 )
        sub_1B64324(0LL);
      while ( 1 )
      {
        v37 = *(_QWORD *)v36;
        v38 = *(unsigned __int16 *)(*(_QWORD *)v36 + 302LL);
        if ( *(_WORD *)(*(_QWORD *)v36 + 302LL) )
        {
          v39 = (int *)(*(_QWORD *)(v37 + 176) + 8LL);
          while ( *((System_Collections_IEnumerator_c **)v39 - 1) != System_Collections_IEnumerator_TypeInfo )
          {
            --v38;
            v39 += 4;
            if ( !v38 )
              goto LABEL_29;
          }
          v40 = v37 + 16LL * *v39 + 312;
        }
        else
        {
LABEL_29:
          v40 = sub_1BB60A8(v36, System_Collections_IEnumerator_TypeInfo, 0LL);
        }
        if ( ((*(__int64 (__fastcall **)(__int64, _QWORD))v40)(v36, *(_QWORD *)(v40 + 8)) & 1) == 0 )
          break;
        v41 = *(_QWORD *)v36;
        v42 = *(unsigned __int16 *)(*(_QWORD *)v36 + 302LL);
        if ( *(_WORD *)(*(_QWORD *)v36 + 302LL) )
        {
          v43 = (int *)(*(_QWORD *)(v41 + 176) + 8LL);
          while ( *((System_Collections_Generic_IEnumerator_BattleLogicFunctionProcess_FunctionTargetCheck__c **)v43 - 1) != System_Collections_Generic_IEnumerator_BattleLogicFunctionProcess_FunctionTargetCheck__TypeInfo )
          {
            --v42;
            v43 += 4;
            if ( !v42 )
              goto LABEL_36;
          }
          v44 = v41 + 16LL * *v43 + 312;
        }
        else
        {
LABEL_36:
          v44 = sub_1BB60A8(
                  v36,
                  System_Collections_Generic_IEnumerator_BattleLogicFunctionProcess_FunctionTargetCheck__TypeInfo,
                  0LL);
        }
        v45 = (*(__int64 (__fastcall **)(__int64, _QWORD))v44)(v36, *(_QWORD *)(v44 + 8));
        v46 = v45;
        if ( !v45 )
          sub_1B64324(0LL);
        v47 = (*(__int64 (__fastcall **)(__int64, BattleActionData_o *, _QWORD))(*(_QWORD *)v45 + 392LL))(
                v45,
                mainAction,
                *(_QWORD *)(*(_QWORD *)v45 + 400LL));
        if ( (v47 & 1) != 0 )
        {
          if ( !mainAction )
            sub_1B64324(v47);
          v50 = *(_DWORD *)(v46 + 32);
          v51 = BattleLogicFunction__functionLossNp(v8, procArg_k__BackingField, v48, v50, v29, &diffNp, v49);
          v52 = diffNp;
          if ( diffNp < 1 )
          {
            if ( v51 )
            {
              if ( !v29 )
                sub_1B64324(v51);
              if ( !procArg_k__BackingField )
                sub_1B64324(v51);
              funcIndex = v29->fields.funcIndex;
              IsCommandSideEffect = BattleLogicFunction_ProcListInArgs__get_IsCommandSideEffect(
                                      procArg_k__BackingField,
                                      0LL);
              NoEffectObject = BattleLogicFunction__getNoEffectObject(
                                 v8,
                                 v50,
                                 funcIndex,
                                 v29,
                                 IsCommandSideEffect,
                                 0LL,
                                 0LL,
                                 v55);
              if ( !v19 )
                sub_1B64324(NoEffectObject);
              BattleActionData__addAction(v19, NoEffectObject, 0LL);
            }
          }
          else
          {
            if ( !v19 )
              sub_1B64324(v51);
            BattleActionData__addAction(v19, v51, 0LL);
            NpGaugeAbsorbResult__AddPoint(result, v52, 0LL);
          }
        }
      }
      v57 = *(_QWORD *)v36;
      v58 = *(unsigned __int16 *)(*(_QWORD *)v36 + 302LL);
      if ( *(_WORD *)(*(_QWORD *)v36 + 302LL) )
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
        v60 = sub_1BB60A8(v36, System_IDisposable_TypeInfo, 0LL);
      }
      (*(void (__fastcall **)(__int64, _QWORD))v60)(v36, *(_QWORD *)(v60 + 8));
      this = v62;
      LODWORD(logic) = v62->fields.logic;
      v28 = v63 + 1;
      if ( (__int64)(v63 + 1) >= (int)logic )
        return v19;
    }
LABEL_65:
    sub_1B64324(this);
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
  __int64 v19; // x1
  __int64 v20; // x2
  System_Collections_Generic_List_T__o *v21; // x25
  struct System_Object_array *items; // x8
  _QWORD *v23; // x9
  __int64 size; // x10
  __int64 v25; // x1
  struct BattleLogic_o *logic; // x8
  unsigned __int64 v27; // x9
  DataVals_o *v28; // x26
  const MethodInfo *v29; // x4
  BattleLogicFunction_c *klass; // x8
  BattleLogicFunction_o *v31; // x25
  __int64 v32; // x9
  int32_t *p_offset; // x10
  __int64 v34; // x0
  __int64 v35; // x25
  __int64 v36; // x8
  __int64 v37; // x9
  int *v38; // x10
  __int64 v39; // x0
  __int64 v40; // x8
  __int64 v41; // x9
  int *v42; // x10
  __int64 v43; // x0
  __int64 v44; // x0
  __int64 v45; // x27
  __int64 v46; // x0
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
  if ( (byte_49FEE0E & 1) == 0 )
  {
    sub_1B640C8(&BattleActionData_TypeInfo, mainAction);
    sub_1B640C8(&System_IDisposable_TypeInfo, v8);
    sub_1B640C8(&System_Collections_Generic_IEnumerable_BattleLogicFunctionProcess_FunctionTargetCheck__TypeInfo, v9);
    sub_1B640C8(&System_Collections_Generic_IEnumerator_BattleLogicFunctionProcess_FunctionTargetCheck__TypeInfo, v10);
    sub_1B640C8(&System_Collections_IEnumerator_TypeInfo, v11);
    sub_1B640C8(&Method_System_Collections_Generic_List_FuncList_TYPE__Add__, v12);
    sub_1B640C8(&Method_System_Collections_Generic_List_FuncList_TYPE___ctor__, v13);
    this = (BattleLogicFunction_o *)sub_1B640C8(&System_Collections_Generic_List_FuncList_TYPE__TypeInfo, v14);
    byte_49FEE0E = 1;
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
  v18 = (BattleActionData_o *)sub_1B64314(BattleActionData_TypeInfo, mainAction, funcTarget);
  BattleActionData___ctor(v18, 0LL);
  v21 = (System_Collections_Generic_List_T__o *)sub_1B64314(
                                                  System_Collections_Generic_List_FuncList_TYPE__TypeInfo,
                                                  v19,
                                                  v20);
  System_Collections_Generic_List_Int32Enum____ctor(
    v21,
    (const MethodInfo_3491F54 *)Method_System_Collections_Generic_List_FuncList_TYPE___ctor__);
  if ( !v21 )
    goto LABEL_59;
  items = v21->fields._items;
  v23 = Method_System_Collections_Generic_List_FuncList_TYPE__Add__;
  ++v21->fields._version;
  if ( !items )
    goto LABEL_59;
  size = v21->fields._size;
  if ( (unsigned int)size >= items->max_length )
  {
    System_Collections_Generic_List_Int32Enum___AddWithResize(
      v21,
      20,
      *(const MethodInfo_34927A8 **)(*(_QWORD *)(v23[4] + 192LL) + 112LL));
  }
  else
  {
    v21->fields._size = size + 1;
    *((_DWORD *)items->m_Items + size) = 20;
  }
  this = (BattleLogicFunction_o *)DataVals__GetDependDataValsArray(
                                    dataVals_k__BackingField,
                                    (System_Collections_Generic_List_FuncList_TYPE__o *)v21,
                                    0,
                                    0LL);
  if ( !this )
    goto LABEL_59;
  logic = this->fields.logic;
  if ( (int)logic >= 1 )
  {
    v27 = 0LL;
    v58 = this;
    while ( 1 )
    {
      if ( v27 >= (unsigned int)logic )
        sub_1B6432C(this, v25);
      v28 = (DataVals_o *)*((_QWORD *)&this->fields.logictarget + v27);
      absorptionCount = 0;
      if ( !result )
        break;
      this = (BattleLogicFunction_o *)result->fields._Convert_k__BackingField;
      v59 = v27;
      if ( !this )
        break;
      ((void (__fastcall *)(BattleLogicFunction_o *, DataVals_o *, void *))this->klass[1]._1.namespaze)(
        this,
        v28,
        this->klass[1]._1.byval_arg.data);
      this = (BattleLogicFunction_o *)BattleLogicFunction__GetDependFuncTargets(
                                        v7,
                                        procArg_k__BackingField,
                                        mainAction,
                                        v28,
                                        v29);
      if ( !this )
        break;
      klass = this->klass;
      v31 = this;
      v32 = *(unsigned __int16 *)(&this->klass->_2.bitflags2 + 3);
      if ( *(_WORD *)(&this->klass->_2.bitflags2 + 3) )
      {
        p_offset = &klass->_1.interfaceOffsets->offset;
        while ( *((System_Collections_Generic_IEnumerable_BattleLogicFunctionProcess_FunctionTargetCheck__c **)p_offset
                - 1) != System_Collections_Generic_IEnumerable_BattleLogicFunctionProcess_FunctionTargetCheck__TypeInfo )
        {
          --v32;
          p_offset += 4;
          if ( !v32 )
            goto LABEL_22;
        }
        v34 = (__int64)(&klass->vtable._0_Equals.method + 2 * *p_offset);
      }
      else
      {
LABEL_22:
        v34 = sub_1BB60A8(
                this,
                System_Collections_Generic_IEnumerable_BattleLogicFunctionProcess_FunctionTargetCheck__TypeInfo,
                0LL);
      }
      v35 = (*(__int64 (__fastcall **)(BattleLogicFunction_o *, _QWORD))v34)(v31, *(_QWORD *)(v34 + 8));
      if ( !v35 )
        sub_1B64324(0LL);
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
              goto LABEL_29;
          }
          v39 = v36 + 16LL * *v38 + 312;
        }
        else
        {
LABEL_29:
          v39 = sub_1BB60A8(v35, System_Collections_IEnumerator_TypeInfo, 0LL);
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
              goto LABEL_36;
          }
          v43 = v40 + 16LL * *v42 + 312;
        }
        else
        {
LABEL_36:
          v43 = sub_1BB60A8(
                  v35,
                  System_Collections_Generic_IEnumerator_BattleLogicFunctionProcess_FunctionTargetCheck__TypeInfo,
                  0LL);
        }
        v44 = (*(__int64 (__fastcall **)(__int64, _QWORD))v43)(v35, *(_QWORD *)(v43 + 8));
        v45 = v44;
        if ( !v44 )
          sub_1B64324(0LL);
        v46 = (*(__int64 (__fastcall **)(__int64, BattleActionData_o *, _QWORD))(*(_QWORD *)v44 + 392LL))(
                v44,
                mainAction,
                *(_QWORD *)(*(_QWORD *)v44 + 400LL));
        if ( (v46 & 1) != 0 )
        {
          if ( !v28 )
            sub_1B64324(v46);
          if ( !procArg_k__BackingField )
            sub_1B64324(v46);
          v47 = *(_DWORD *)(v45 + 32);
          funcEnt = v28->fields.funcEnt;
          funcIndex = v28->fields.funcIndex;
          IsCommandSideEffect = BattleLogicFunction_ProcListInArgs__get_IsCommandSideEffect(
                                  procArg_k__BackingField,
                                  0LL);
          v52 = BattleLogicFunction__functionDelayNpTurn(
                  v7,
                  v47,
                  funcEnt,
                  v28,
                  funcIndex,
                  IsCommandSideEffect,
                  &absorptionCount,
                  v51);
          if ( !v18 )
            sub_1B64324(v52);
          BattleActionData__addAction(v18, v52, 0LL);
          if ( absorptionCount >= 1 )
            NpGaugeAbsorbResult__AddTurn(result, absorptionCount, 0LL);
        }
      }
      v53 = *(_QWORD *)v35;
      v54 = *(unsigned __int16 *)(*(_QWORD *)v35 + 302LL);
      if ( *(_WORD *)(*(_QWORD *)v35 + 302LL) )
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
        v56 = sub_1BB60A8(v35, System_IDisposable_TypeInfo, 0LL);
      }
      (*(void (__fastcall **)(__int64, _QWORD))v56)(v35, *(_QWORD *)(v56 + 8));
      this = v58;
      LODWORD(logic) = v58->fields.logic;
      v27 = v59 + 1;
      if ( (__int64)(v59 + 1) >= (int)logic )
        return v18;
    }
LABEL_59:
    sub_1B64324(this);
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
  if ( (byte_49FEDEA & 1) == 0 )
  {
    this = (BattleLogicFunction_o *)sub_1B640C8(&UnityEngine_Object_TypeInfo, targetSvtData);
    byte_49FEDEA = 1;
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
      sub_1B64324(this);
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
  __int64 v33; // x27
  BattleData_o *data; // x0
  int32_t v35; // w2
  int32_t v36; // w3
  BattleServantData_o **v37; // x23
  const MethodInfo *v38; // x6
  int32_t m_CancellationTokenSource; // w28
  int32_t AuraSum_k__BackingField; // w29
  __int64 v41; // x1
  __int64 v42; // x2
  BattleServantData_o *v43; // x24
  System_Func_object__object__o *v44; // x26
  System_Collections_Generic_IEnumerable_TSource__o *v45; // x0
  System_Collections_Generic_List_TSource__o *v46; // x0
  int32_t v47; // w2
  int32_t v48; // w3
  _BOOL8 v49; // x0
  Il2CppObject *current; // x25
  BattleData_o *v51; // x0
  _BOOL8 v52; // x0
  __int64 v53; // x1
  __int64 v54; // x2
  BattleLogicFunction___c_c *v55; // x0
  System_Func_object__bool__o *_9__70_1; // x25
  Il2CppObject *v57; // x26
  struct BattleLogicFunction___c_StaticFields *static_fields; // x0
  int32_t v59; // w2
  int32_t v60; // w3
  struct BattleData_o *v61; // x8
  BattleFieldEnvironmentData_o *FieldEnvData_k__BackingField; // x22
  __int64 v63; // x1
  __int64 v64; // x2
  BattleActionEffect_ChangeBgmBuff_o *v65; // x22
  int32_t MaxHp_k__BackingField; // w22
  __int64 v67; // x1
  __int64 v68; // x2
  BattleActionEffect_SubChangeMaxHpBuff_o *v69; // x21
  unsigned int uniqueId; // w22
  BattleData_o *v71; // x20
  BattleActionEffect_Base_o *v72; // x0
  System_Collections_Generic_List_Enumerator_object__o v73; // [xsp+8h] [xbp-98h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v74; // [xsp+20h] [xbp-80h] BYREF

  if ( (byte_49FEDF6 & 1) == 0 )
  {
    sub_1B640C8(&Method_BasicHelper_Any_BattleBuffData_BuffData___, actionData);
    sub_1B640C8(&BattleActionEffect_ChangeBgmBuff_TypeInfo, v18);
    sub_1B640C8(&Method_System_Linq_Enumerable_Select_BattleBuffData_BuffData__BattleBuffData_BuffData___, v19);
    sub_1B640C8(&Method_System_Linq_Enumerable_ToList_BattleBuffData_BuffData___, v20);
    sub_1B640C8(&Method_System_Collections_Generic_List_Enumerator_BattleBuffData_BuffData__Dispose__, v21);
    sub_1B640C8(&Method_System_Collections_Generic_List_Enumerator_BattleBuffData_BuffData__MoveNext__, v22);
    sub_1B640C8(&Method_System_Collections_Generic_List_Enumerator_BattleBuffData_BuffData__get_Current__, v23);
    sub_1B640C8(&System_Func_BattleBuffData_BuffData__BattleBuffData_BuffData__TypeInfo, v24);
    sub_1B640C8(&System_Func_BattleBuffData_BuffData__bool__TypeInfo, v25);
    sub_1B640C8(&Method_System_Collections_Generic_List_BattleBuffData_BuffData__GetEnumerator__, v26);
    sub_1B640C8(&Method_System_Collections_Generic_List_BattleBuffData_BuffData__ToArray__, v27);
    sub_1B640C8(&BattleActionEffect_SubChangeMaxHpBuff_TypeInfo, v28);
    sub_1B640C8(&Method_BattleLogicFunction___c__ApplySubBuffChanges_b__70_1__, v29);
    sub_1B640C8(&Method_BattleLogicFunction___c__DisplayClass70_0__ApplySubBuffChanges_b__0__, v30);
    sub_1B640C8(&BattleLogicFunction___c__DisplayClass70_0_TypeInfo, v31);
    sub_1B640C8(&BattleLogicFunction___c_TypeInfo, v32);
    byte_49FEDF6 = 1;
  }
  memset(&v74, 0, sizeof(v74));
  v33 = sub_1B64314(BattleLogicFunction___c__DisplayClass70_0_TypeInfo, actionData, subBuffList);
  BattleLogicFunction___c__DisplayClass70_0___ctor((BattleLogicFunction___c__DisplayClass70_0_o *)v33, 0LL);
  if ( !BasicHelper__IsNullOrEmpty((System_Collections_ICollection_o *)subBuffList, 0LL) )
  {
    data = this->fields.data;
    if ( data )
    {
      data = (BattleData_o *)BattleData__getServantData(data, targetId, 0LL);
      if ( v33 )
      {
        *(_QWORD *)(v33 + 16) = data;
        v37 = (BattleServantData_o **)(v33 + 16);
        sub_1B6406C((ServantStatusBattleListViewItem_o *)(v33 + 16), (int32_t)data, v35, v36);
        data = *(BattleData_o **)(v33 + 16);
        if ( data )
        {
          data = (BattleData_o *)BattleServantData__getAuraIdList((BattleServantData_o *)data, 0LL);
          if ( data )
          {
            if ( svtSnapShotOnBuffUpdate )
            {
              if ( baseVals )
              {
                if ( *v37 )
                {
                  m_CancellationTokenSource = (int32_t)data->fields.m_CancellationTokenSource;
                  AuraSum_k__BackingField = svtSnapShotOnBuffUpdate->fields._AuraSum_k__BackingField;
                  data = (BattleData_o *)BattleLogicFunction__getFunctionObject(
                                           (BattleLogicFunction_o *)data,
                                           baseVals->fields.funcEnt,
                                           (*v37)->fields.uniqueId,
                                           index,
                                           isCommandSideEffect,
                                           0LL,
                                           v38);
                  if ( data )
                  {
                    BYTE4(data->fields.boostSkillInfo) = AuraSum_k__BackingField > m_CancellationTokenSource;
                    v43 = (BattleServantData_o *)data;
                    v44 = (System_Func_object__object__o *)sub_1B64314(
                                                             System_Func_BattleBuffData_BuffData__BattleBuffData_BuffData__TypeInfo,
                                                             v41,
                                                             v42);
                    System_Func_object__object____ctor(
                      v44,
                      (Il2CppObject *)v33,
                      Method_BattleLogicFunction___c__DisplayClass70_0__ApplySubBuffChanges_b__0__,
                      0LL);
                    v45 = (System_Collections_Generic_IEnumerable_TSource__o *)System_Linq_Enumerable__Select_object__object_(
                                                                                 (System_Collections_Generic_IEnumerable_TSource__o *)subBuffList,
                                                                                 (System_Func_TSource__TResult__o *)v44,
                                                                                 (const MethodInfo_2E693AC *)Method_System_Linq_Enumerable_Select_BattleBuffData_BuffData__BattleBuffData_BuffData___);
                    v46 = System_Linq_Enumerable__ToList_object_(
                            v45,
                            (const MethodInfo_2E7501C *)Method_System_Linq_Enumerable_ToList_BattleBuffData_BuffData___);
                    *(_QWORD *)&v43->fields._iconLimitCount_k__BackingField.fields.fakeValue = v46;
                    sub_1B6406C(
                      (ServantStatusBattleListViewItem_o *)&v43->fields._iconLimitCount_k__BackingField.fields.fakeValue,
                      (int32_t)v46,
                      v47,
                      v48);
                    if ( actionData )
                    {
                      BattleActionData__setBuffData(actionData, (BattleActionData_BuffData_o *)v43, baseVals, 0LL);
                      if ( subBuffList )
                      {
                        System_Collections_Generic_List_object___GetEnumerator(
                          (System_Collections_Generic_List_Enumerator_T__o *)&v73,
                          (System_Collections_Generic_List_object__o *)subBuffList,
                          (const MethodInfo_34AE26C *)Method_System_Collections_Generic_List_BattleBuffData_BuffData__GetEnumerator__);
                        v74 = v73;
                        while ( 1 )
                        {
                          v49 = System_Collections_Generic_List_Enumerator_object___MoveNext(
                                  &v74,
                                  (const MethodInfo_322A0B0 *)Method_System_Collections_Generic_List_Enumerator_BattleBuffData_BuffData__MoveNext__);
                          if ( !v49 )
                            break;
                          current = v74.fields._current;
                          if ( !v74.fields._current )
                            sub_1B64324(v49);
                          v51 = this->fields.data;
                          if ( !v51 )
                            sub_1B64324(0LL);
                          BattleData__RemoveDoNotSelectCommandCardBuff(
                            v51,
                            (int32_t)v74.fields._current[1].klass,
                            *v37,
                            0LL);
                          v52 = BattleBuffData__CheckInvalidSacrificeIndiv((BattleBuffData_BuffData_o *)current, 0LL);
                          if ( v52 )
                          {
                            if ( !args )
                              sub_1B64324(v52);
                            args->fields.updateField = 1;
                          }
                        }
                        System_Collections_Generic_List_Enumerator_object___Dispose(
                          &v74,
                          (const MethodInfo_322A0AC *)Method_System_Collections_Generic_List_Enumerator_BattleBuffData_BuffData__Dispose__);
                        v55 = BattleLogicFunction___c_TypeInfo;
                        if ( !BattleLogicFunction___c_TypeInfo->_2.cctor_finished )
                        {
                          j_il2cpp_runtime_class_init_0(BattleLogicFunction___c_TypeInfo);
                          v55 = BattleLogicFunction___c_TypeInfo;
                        }
                        _9__70_1 = (System_Func_object__bool__o *)v55->static_fields->__9__70_1;
                        if ( !_9__70_1 )
                        {
                          if ( !v55->_2.cctor_finished )
                          {
                            j_il2cpp_runtime_class_init_0(v55);
                            v55 = BattleLogicFunction___c_TypeInfo;
                          }
                          v57 = (Il2CppObject *)v55->static_fields->__9;
                          _9__70_1 = (System_Func_object__bool__o *)sub_1B64314(
                                                                      System_Func_BattleBuffData_BuffData__bool__TypeInfo,
                                                                      v53,
                                                                      v54);
                          System_Func_object__bool____ctor(
                            _9__70_1,
                            v57,
                            Method_BattleLogicFunction___c__ApplySubBuffChanges_b__70_1__,
                            0LL);
                          static_fields = BattleLogicFunction___c_TypeInfo->static_fields;
                          static_fields->__9__70_1 = (struct System_Func_BattleBuffData_BuffData__bool__o *)_9__70_1;
                          sub_1B6406C(
                            (ServantStatusBattleListViewItem_o *)&static_fields->__9__70_1,
                            (int32_t)_9__70_1,
                            v59,
                            v60);
                        }
                        data = (BattleData_o *)BasicHelper__Any_object_(
                                                 (System_Collections_Generic_List_T__o *)subBuffList,
                                                 (System_Func_T__bool__o *)_9__70_1,
                                                 (const MethodInfo_2E24870 *)Method_BasicHelper_Any_BattleBuffData_BuffData___);
                        if ( ((unsigned __int8)data & 1) != 0 )
                        {
                          v61 = this->fields.data;
                          if ( !v61 )
                            goto LABEL_41;
                          FieldEnvData_k__BackingField = v61->fields._FieldEnvData_k__BackingField;
                          data = (BattleData_o *)System_Collections_Generic_List_object___ToArray(
                                                   (System_Collections_Generic_List_object__o *)subBuffList,
                                                   (const MethodInfo_34AF2CC *)Method_System_Collections_Generic_List_BattleBuffData_BuffData__ToArray__);
                          if ( !FieldEnvData_k__BackingField )
                            goto LABEL_41;
                          BattleFieldEnvironmentData__RemoveBgmRelateBuff(
                            FieldEnvData_k__BackingField,
                            (BattleBuffData_BuffData_array *)data,
                            0LL);
                          v65 = (BattleActionEffect_ChangeBgmBuff_o *)sub_1B64314(
                                                                        BattleActionEffect_ChangeBgmBuff_TypeInfo,
                                                                        v63,
                                                                        v64);
                          BattleActionEffect_ChangeBgmBuff___ctor(v65, 0LL);
                          BattleActionData_BuffData__SetActionEffectProc(
                            (BattleActionData_BuffData_o *)v43,
                            (BattleActionEffect_Base_o *)v65,
                            0LL);
                        }
                        data = (BattleData_o *)*v37;
                        if ( *v37 )
                        {
                          MaxHp_k__BackingField = svtSnapShotOnBuffUpdate->fields._MaxHp_k__BackingField;
                          data = (BattleData_o *)BattleServantData__getMaxHp((BattleServantData_o *)data, 0LL);
                          if ( MaxHp_k__BackingField == (_DWORD)data )
                            return;
                          if ( *v37 )
                          {
                            BattleActionData__addReflectLogicResultServantId(actionData, (*v37)->fields.uniqueId, 0LL);
                            v69 = (BattleActionEffect_SubChangeMaxHpBuff_o *)sub_1B64314(
                                                                               BattleActionEffect_SubChangeMaxHpBuff_TypeInfo,
                                                                               v67,
                                                                               v68);
                            BattleActionEffect_SubChangeMaxHpBuff___ctor(v69, 0LL);
                            data = (BattleData_o *)System_Collections_Generic_List_object___ToArray(
                                                     (System_Collections_Generic_List_object__o *)subBuffList,
                                                     (const MethodInfo_34AF2CC *)Method_System_Collections_Generic_List_BattleBuffData_BuffData__ToArray__);
                            if ( *v37 )
                            {
                              uniqueId = (*v37)->fields.uniqueId;
                              v71 = data;
                              data = (BattleData_o *)BattleServantData__getNowHp(*v37, 0LL);
                              if ( v69 )
                              {
                                v72 = (BattleActionEffect_Base_o *)((__int64 (__fastcall *)(BattleActionEffect_SubChangeMaxHpBuff_o *, BattleData_o *, _QWORD, _QWORD, Il2CppMethodPointer))v69->klass->vtable._7_InitBuff.method)(
                                                                     v69,
                                                                     v71,
                                                                     uniqueId,
                                                                     (unsigned int)((_DWORD)data
                                                                                  - svtSnapShotOnBuffUpdate->fields._Hp_k__BackingField),
                                                                     v69->klass->vtable._8_PartialPreActionProc.methodPtr);
                                BattleActionData_BuffData__SetActionEffectProc(
                                  (BattleActionData_BuffData_o *)v43,
                                  v72,
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
    sub_1B64324(data);
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
  int32_t v13; // w2
  int32_t v14; // w3
  __int64 v15; // x8
  BattleServantData_o *ServantData; // x0
  int32_t v17; // w2
  int32_t v18; // w3
  __int64 v19; // x1
  __int64 v20; // x2
  System_Func_int__int__o *v21; // x20
  System_Collections_Generic_IEnumerable_TSource__o *v22; // x0
  struct System_Int32_array *v23; // x0
  int32_t v24; // w2
  int32_t v25; // w3
  System_Collections_Generic_IEnumerable_TSource__o *v26; // x0
  struct System_Int32_array *v27; // x0
  int32_t v28; // w2
  int32_t v29; // w3

  if ( (byte_49FEDF4 & 1) == 0 )
  {
    sub_1B640C8(&Method_System_Linq_Enumerable_Select_int__int___, buffData);
    sub_1B640C8(&Method_System_Linq_Enumerable_ToArray_int___, v7);
    sub_1B640C8(&System_Func_int__int__TypeInfo, v8);
    sub_1B640C8(&Method_BattleLogicFunction___c__DisplayClass68_0__BehaveLinkageBuffAsFamily_b__0__, v9);
    sub_1B640C8(&BattleLogicFunction___c__DisplayClass68_0_TypeInfo, v10);
    byte_49FEDF4 = 1;
  }
  v11 = sub_1B64314(BattleLogicFunction___c__DisplayClass68_0_TypeInfo, buffData, funcTarget);
  BattleLogicFunction___c__DisplayClass68_0___ctor((BattleLogicFunction___c__DisplayClass68_0_o *)v11, 0LL);
  if ( !v11 )
    goto LABEL_13;
  *(_QWORD *)(v11 + 16) = funcTarget;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)(v11 + 16), (int32_t)funcTarget, v13, v14);
  v15 = *(_QWORD *)(v11 + 16);
  if ( !v15 )
    goto LABEL_13;
  data = this->fields.data;
  if ( !data )
    goto LABEL_13;
  ServantData = BattleData__getServantData(data, *(_DWORD *)(v15 + 32), 0LL);
  *(_QWORD *)(v11 + 24) = ServantData;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)(v11 + 24), (int32_t)ServantData, v17, v18);
  if ( !*(_QWORD *)(v11 + 24) )
    return;
  v21 = (System_Func_int__int__o *)sub_1B64314(System_Func_int__int__TypeInfo, v19, v20);
  System_Func_int__int____ctor(
    v21,
    (Il2CppObject *)v11,
    Method_BattleLogicFunction___c__DisplayClass68_0__BehaveLinkageBuffAsFamily_b__0__,
    0LL);
  if ( !buffData )
LABEL_13:
    sub_1B64324(data);
  if ( !BasicHelper__IsNullOrEmpty((System_Collections_ICollection_o *)buffData->fields.addIndividualty, 0LL) )
  {
    v22 = (System_Collections_Generic_IEnumerable_TSource__o *)System_Linq_Enumerable__Select_int__int_(
                                                                 (System_Collections_Generic_IEnumerable_TSource__o *)buffData->fields.addIndividualty,
                                                                 (System_Func_TSource__TResult__o *)v21,
                                                                 (const MethodInfo_2E66974 *)Method_System_Linq_Enumerable_Select_int__int___);
    v23 = System_Linq_Enumerable__ToArray_int_(
            v22,
            (const MethodInfo_2E7122C *)Method_System_Linq_Enumerable_ToArray_int___);
    buffData->fields.familyLinkageIds = v23;
    sub_1B6406C((ServantStatusBattleListViewItem_o *)&buffData->fields.familyLinkageIds, (int32_t)v23, v24, v25);
    BattleBuffData_BuffData__onState(buffData, 0x400000, 0LL);
  }
  if ( !BasicHelper__IsNullOrEmpty((System_Collections_ICollection_o *)buffData->fields.linkageTargetIndividualty, 0LL) )
  {
    v26 = (System_Collections_Generic_IEnumerable_TSource__o *)System_Linq_Enumerable__Select_int__int_(
                                                                 (System_Collections_Generic_IEnumerable_TSource__o *)buffData->fields.linkageTargetIndividualty,
                                                                 (System_Func_TSource__TResult__o *)v21,
                                                                 (const MethodInfo_2E66974 *)Method_System_Linq_Enumerable_Select_int__int___);
    v27 = System_Linq_Enumerable__ToArray_int_(
            v26,
            (const MethodInfo_2E7122C *)Method_System_Linq_Enumerable_ToArray_int___);
    buffData->fields.linkageTargetIndividualty = v27;
    sub_1B6406C(
      (ServantStatusBattleListViewItem_o *)&buffData->fields.linkageTargetIndividualty,
      (int32_t)v27,
      v28,
      v29);
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
    sub_1B64324(this);
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
    sub_1B64324(this);
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
    sub_1B6432C(this, baseVals);
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
  if ( (byte_49FEE20 & 1) == 0 )
  {
    sub_1B640C8(&Generator_BGMFromChangeBGMFunc_TypeInfo, bgmEnt);
    this = (BattleLogicFunction_o *)sub_1B640C8(&UnityEngine_Object_TypeInfo, v7);
    byte_49FEE20 = 1;
  }
  data = v6->fields.data;
  if ( !data )
    goto LABEL_16;
  FieldEnvData_k__BackingField = data->fields._FieldEnvData_k__BackingField;
  if ( bgmEnt )
  {
    id = bgmEnt->fields.id;
    v11 = (Generator_BGMFromChangeBGMFunc_o *)sub_1B64314(Generator_BGMFromChangeBGMFunc_TypeInfo, bgmEnt, baseVals);
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
    sub_1B64324(this);
  }
}


// local variable allocation has failed, the output may be wrong!
BgmEntity_o *__fastcall BattleLogicFunction__ChangeBgmSvt(
        BattleLogicFunction_o *this,
        int32_t uniqueID,
        BattleActionData_o *actionData,
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
  BgmEntity_o *result; // x0
  __int64 v16; // x0
  __int64 v17; // x0
  DataManager_o *MasterData_object; // x0
  struct BattleSkillInfoData_o *skillInfo; // x8
  SkillLvMaster_o *v20; // x22
  struct BattleSkillInfoData_o *v21; // x8
  SkillLvEntity_o *v22; // x22
  DataMasterBase_TMaster__TEntity__PKType__o *v23; // x21
  BattleData_o *data; // x8
  System_Collections_Generic_List_object__o *v25; // x20
  System_Int32_array *v26; // x19
  int32_t v27; // w22
  int32_t v28; // w23
  int64_t m_CancellationTokenSource_low; // x24
  bool IsOpen; // w23
  __int64 v31; // x8
  Il2CppObject *entity; // [xsp+8h] [xbp-68h] BYREF

  if ( (byte_49FEE1F & 1) == 0 )
  {
    sub_1B640C8(&Method_System_Array_IndexOf_int___, *(_QWORD *)&uniqueID);
    sub_1B640C8(&CondType_TypeInfo, v7);
    sub_1B640C8(&Method_DataManager_GetMasterData_BgmMaster___, v8);
    sub_1B640C8(&Method_DataManager_GetMasterData_SkillLvMaster___, v9);
    sub_1B640C8(&Method_DataMasterBase_BgmMaster__BgmEntity__int__TryGetEntity__, v10);
    sub_1B640C8(&Method_System_Collections_Generic_List_SkillLvEntity_SvtChangeBgm__get_Count__, v11);
    sub_1B640C8(&Method_System_Collections_Generic_List_SkillLvEntity_SvtChangeBgm__get_Item__, v12);
    sub_1B640C8(&Method_SingletonMonoBehaviour_DataManager__getInstance__, v13);
    sub_1B640C8(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v14);
    byte_49FEE1F = 1;
  }
  result = 0LL;
  entity = 0LL;
  if ( uniqueID != -1 && actionData )
  {
    v16 = *((_QWORD *)Method_SingletonMonoBehaviour_DataManager__getInstance__ + 4);
    if ( (*(_BYTE *)(v16 + 309) & 1) == 0 )
      v16 = sub_1BB5FA4(v16);
    v17 = *(_QWORD *)(*(_QWORD *)(v16 + 192) + 16LL);
    if ( (*(_BYTE *)(v17 + 309) & 1) == 0 )
      v17 = sub_1BB5FA4(v17);
    MasterData_object = **(DataManager_o ***)(v17 + 184);
    if ( !MasterData_object )
      goto LABEL_35;
    MasterData_object = (DataManager_o *)DataManager__GetMasterData_object_(
                                           MasterData_object,
                                           (const MethodInfo_2E393EC *)Method_DataManager_GetMasterData_SkillLvMaster___);
    skillInfo = actionData->fields.skillInfo;
    if ( !skillInfo )
      goto LABEL_35;
    v20 = (SkillLvMaster_o *)MasterData_object;
    MasterData_object = (DataManager_o *)((__int64 (__fastcall *)(struct BattleSkillInfoData_o *, Il2CppMethodPointer))skillInfo->klass->vtable._5_get_skillId.method)(
                                           actionData->fields.skillInfo,
                                           skillInfo->klass->vtable._6_get_IndividualityArray.methodPtr);
    v21 = actionData->fields.skillInfo;
    if ( !v21 )
      goto LABEL_35;
    if ( !v20 )
      goto LABEL_35;
    v22 = SkillLvMaster__GetEntity(v20, (int32_t)MasterData_object, v21->fields.skilllv, 0LL);
    MasterData_object = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EC03C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !MasterData_object )
      goto LABEL_35;
    MasterData_object = (DataManager_o *)DataManager__GetMasterData_object_(
                                           MasterData_object,
                                           (const MethodInfo_2E393EC *)Method_DataManager_GetMasterData_BgmMaster___);
    if ( !v22 )
      goto LABEL_35;
    v23 = (DataMasterBase_TMaster__TEntity__PKType__o *)MasterData_object;
    MasterData_object = (DataManager_o *)SkillLvEntity__GetSvtChangeBgm(v22, 0LL);
    data = this->fields.data;
    if ( !data )
      goto LABEL_35;
    v25 = (System_Collections_Generic_List_object__o *)MasterData_object;
    MasterData_object = (DataManager_o *)BattleData__getPlayerServantData(data, uniqueID, 0LL);
    if ( !MasterData_object )
      goto LABEL_35;
    MasterData_object = (DataManager_o *)BattleServantData__getIndividualities(
                                           (BattleServantData_o *)MasterData_object,
                                           0LL,
                                           0LL);
    if ( !v25 )
      goto LABEL_35;
    if ( v25->fields._size >= 1 )
    {
      v26 = (System_Int32_array *)MasterData_object;
      v27 = 0;
      while ( 1 )
      {
        MasterData_object = (DataManager_o *)System_Collections_Generic_List_object___get_Item(
                                               v25,
                                               v27,
                                               (const MethodInfo_34AD404 *)Method_System_Collections_Generic_List_SkillLvEntity_SvtChangeBgm__get_Item__);
        if ( !MasterData_object )
          break;
        if ( System_Array__IndexOf_int_(
               v26,
               MasterData_object->fields.m_CachedPtr,
               (const MethodInfo_2F31E68 *)Method_System_Array_IndexOf_int___) != -1 )
        {
          MasterData_object = (DataManager_o *)System_Collections_Generic_List_object___get_Item(
                                                 v25,
                                                 v27,
                                                 (const MethodInfo_34AD404 *)Method_System_Collections_Generic_List_SkillLvEntity_SvtChangeBgm__get_Item__);
          if ( !MasterData_object )
            break;
          v28 = *((_DWORD *)&MasterData_object->fields.UnityEngine_Behaviour_Fields + 1);
          MasterData_object = (DataManager_o *)System_Collections_Generic_List_object___get_Item(
                                                 v25,
                                                 v27,
                                                 (const MethodInfo_34AD404 *)Method_System_Collections_Generic_List_SkillLvEntity_SvtChangeBgm__get_Item__);
          if ( !MasterData_object )
            break;
          m_CancellationTokenSource_low = SLODWORD(MasterData_object->fields.m_CancellationTokenSource);
          if ( !CondType_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(CondType_TypeInfo);
          IsOpen = CondType__IsOpen(46, v28, m_CancellationTokenSource_low, 0, 0LL);
          MasterData_object = (DataManager_o *)System_Collections_Generic_List_object___get_Item(
                                                 v25,
                                                 v27,
                                                 (const MethodInfo_34AD404 *)Method_System_Collections_Generic_List_SkillLvEntity_SvtChangeBgm__get_Item__);
          if ( !MasterData_object || !v23 )
            break;
          if ( IsOpen )
            v31 = 32LL;
          else
            v31 = 28LL;
          if ( DataMasterBase_object__object__int___TryGetEntity(
                 v23,
                 &entity,
                 *(_DWORD *)((char *)&MasterData_object->klass + v31),
                 (const MethodInfo_30D3EF8 *)Method_DataMasterBase_BgmMaster__BgmEntity__int__TryGetEntity__) )
          {
            return (BgmEntity_o *)entity;
          }
        }
        if ( ++v27 >= v25->fields._size )
          return (BgmEntity_o *)entity;
      }
LABEL_35:
      sub_1B64324(MasterData_object);
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

  if ( (byte_49FEE27 & 1) == 0 )
  {
    sub_1B640C8(&BattleActionData_MasterBuffData_TypeInfo, action);
    byte_49FEE27 = 1;
  }
  v12 = (BattleActionData_MasterBuffData_o *)sub_1B64314(BattleActionData_MasterBuffData_TypeInfo, action, funcEnt);
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
    sub_1B64324(FunctionObject);
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
  BattleActionData_o *v11; // x24
  int32_t Param; // w22
  int32_t v13; // w23
  bool v14; // w3
  bool v15; // w23
  int v16; // w25
  BattlePointData_o *BattlePointData; // x0
  FunctionEntity_o *funcEnt; // x22
  int32_t uniqueId; // w21
  int32_t funcIndex; // w23
  _BOOL8 IsCommandSideEffect; // x0
  const MethodInfo *v22; // x6
  BattleActionData_BuffData_o *v23; // x20
  __int64 v24; // x1
  __int64 v25; // x2

  if ( (byte_49FEE2A & 1) == 0 )
  {
    sub_1B640C8(&BattleActionData_TypeInfo, procArg);
    byte_49FEE2A = 1;
  }
  data = this->fields.data;
  if ( !data )
    goto LABEL_20;
  data = (BattleData_o *)BattleData__getServantData(data, targetId, 0LL);
  if ( !data )
    goto LABEL_20;
  v10 = (BattleServantData_o *)data;
  data = (BattleData_o *)BattleServantData__checkPlayer((BattleServantData_o *)data, 0LL);
  v11 = 0LL;
  if ( ((unsigned __int8)data & 1) != 0 )
  {
    if ( !baseVals )
      goto LABEL_20;
    Param = DataVals__GetParam(baseVals, 171, 0, 0LL);
    v13 = DataVals__GetParam(baseVals, 172, 0, 0LL);
    v14 = DataVals__GetParam(baseVals, 174, 0, 0LL) != 0;
    v15 = BattleServantData__AddBattlePoint(v10, Param, v13, v14, 0LL);
    data = (BattleData_o *)BattleServantData__GetBattlePointData(v10, Param, 0LL);
    if ( data )
    {
      v16 = BYTE4(data->fields.m_CancellationTokenSource) ^ 1;
      if ( !procArg )
        goto LABEL_20;
    }
    else
    {
      v16 = 0;
      if ( !procArg )
        goto LABEL_20;
    }
    v11 = 0LL;
    if ( BattleLogicFunction_ProcListInArgs__get_IsShowBattlePointEffect(procArg, 0LL) )
    {
      if ( !(v16 | v15) )
        return 0LL;
      BattlePointData = BattleServantData__GetBattlePointData(v10, Param, 0LL);
      if ( BattlePointData )
        BattlePointData__NotifyShowedEffect(BattlePointData, 0LL);
      funcEnt = baseVals->fields.funcEnt;
      uniqueId = v10->fields.uniqueId;
      funcIndex = baseVals->fields.funcIndex;
      IsCommandSideEffect = BattleLogicFunction_ProcListInArgs__get_IsCommandSideEffect(procArg, 0LL);
      data = (BattleData_o *)BattleLogicFunction__getFunctionObject(
                               (BattleLogicFunction_o *)IsCommandSideEffect,
                               funcEnt,
                               uniqueId,
                               funcIndex,
                               IsCommandSideEffect,
                               0LL,
                               v22);
      if ( data )
      {
        v23 = (BattleActionData_BuffData_o *)data;
        BYTE4(data->fields.enemyMasterInfo) = 1;
        data->fields.initturn = DataVals__GetParam(baseVals, 173, 0, 0LL);
        v11 = (BattleActionData_o *)sub_1B64314(BattleActionData_TypeInfo, v24, v25);
        BattleActionData___ctor(v11, 0LL);
        if ( v11 )
        {
          BattleActionData__setBuffData(v11, v23, baseVals, 0LL);
          return v11;
        }
      }
LABEL_20:
      sub_1B64324(data);
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
  BattleData_o *data; // x0
  __int64 v9; // x1
  struct System_Int32_array *vals; // x8
  System_Collections_Generic_Dictionary_int__int__o *v11; // x20
  int v12; // w23
  il2cpp_array_size_t max_length; // w10
  unsigned int v14; // w9
  int32_t v15; // w21
  int32_t v16; // w22
  int32_t Item; // w0

  v4 = this;
  if ( (byte_49FEE29 & 1) == 0 )
  {
    sub_1B640C8(&Method_System_Collections_Generic_Dictionary_int__int__Add__, funcEnt);
    sub_1B640C8(&Method_System_Collections_Generic_Dictionary_int__int__ContainsKey__, v5);
    sub_1B640C8(&Method_System_Collections_Generic_Dictionary_int__int__get_Item__, v6);
    this = (BattleLogicFunction_o *)sub_1B640C8(&Method_System_Collections_Generic_Dictionary_int__int__set_Item__, v7);
    byte_49FEE29 = 1;
  }
  if ( BattleLogicFunction__CanCheckFuncBattleValue(this, funcEnt, method) )
  {
    data = v4->fields.data;
    if ( !data
      || (data = (BattleData_o *)BattleData__GetBattleValueDict(data, 0LL), !funcEnt)
      || (vals = funcEnt->fields.vals) == 0LL )
    {
LABEL_16:
      sub_1B64324(data);
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
        sub_1B6432C(data, v9);
      if ( v11 )
      {
        v15 = vals->m_Items[v14 + 1];
        v16 = vals->m_Items[v12 + 1];
        if ( System_Collections_Generic_Dictionary_int__int___ContainsKey(
               v11,
               v15,
               (const MethodInfo_311B0A0 *)Method_System_Collections_Generic_Dictionary_int__int__ContainsKey__) )
        {
          Item = System_Collections_Generic_Dictionary_int__int___get_Item(
                   v11,
                   v15,
                   (const MethodInfo_311AE18 *)Method_System_Collections_Generic_Dictionary_int__int__get_Item__);
          System_Collections_Generic_Dictionary_int__int___set_Item(
            v11,
            v15,
            Item + v16,
            (const MethodInfo_311AEA0 *)Method_System_Collections_Generic_Dictionary_int__int__set_Item__);
        }
        else
        {
          System_Collections_Generic_Dictionary_int__int___Add(
            v11,
            v15,
            v16,
            (const MethodInfo_311AEB4 *)Method_System_Collections_Generic_Dictionary_int__int__Add__);
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
  if ( (byte_49FEE22 & 1) == 0 )
  {
    this = (BattleLogicFunction_o *)sub_1B640C8(&UnityEngine_Object_TypeInfo, args);
    byte_49FEE22 = 1;
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
    sub_1B64324(this);
  }
}


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
    sub_1B64324(this);
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
  __int64 v17; // x1
  __int64 v18; // x2
  bool v19; // w26
  BattleLogicFunction_OnlyCheckFuncSideEffectFunctionArgument_o *v20; // x23
  struct BattleLogic_o *logic; // x8
  BattleLogicSkill_o *logicSkill; // x25
  __int64 v23; // x1
  int32_t v24; // w2
  int32_t v25; // w3
  int v26; // w8
  BattleLogicFunction_o *v27; // x24
  unsigned int v28; // w27
  __int64 v29; // x25
  struct BattleLogic_o *v30; // x8
  BattleActionData_o *v31; // x25
  BattleLogicFunction_FuncSideEffectFunctionArgument_o *FuncSideEffectArg; // x0
  BattleActionData_o *baseActionData; // [xsp+18h] [xbp-58h] BYREF

  v8 = this;
  if ( (byte_49FEE26 & 1) == 0 )
  {
    sub_1B640C8(&BattleSkillInfoData_TypeInfo, actionData);
    sub_1B640C8(&int___TypeInfo, v9);
    this = (BattleLogicFunction_o *)sub_1B640C8(
                                      &BattleLogicFunction_OnlyCheckFuncSideEffectFunctionArgument_TypeInfo,
                                      v10);
    byte_49FEE26 = 1;
  }
  baseActionData = 0LL;
  data = v8->fields.data;
  if ( !data )
    goto LABEL_32;
  if ( !data->fields._lastUsedPlayerSkillInfo_k__BackingField )
    return;
  v12 = (BattleSkillInfoData_o *)sub_1B64314(BattleSkillInfoData_TypeInfo, actionData, baseVals);
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
  v19 = this != 0LL;
  if ( this )
  {
    v20 = (BattleLogicFunction_OnlyCheckFuncSideEffectFunctionArgument_o *)sub_1B64314(
                                                                             BattleLogicFunction_OnlyCheckFuncSideEffectFunctionArgument_TypeInfo,
                                                                             v17,
                                                                             v18);
    BattleLogicFunction_OnlyCheckFuncSideEffectFunctionArgument___ctor(v20, 0LL);
  }
  else
  {
    v20 = 0LL;
  }
  logic = v8->fields.logic;
  if ( !logic )
    goto LABEL_32;
  logicSkill = logic->fields.logicSkill;
  this = (BattleLogicFunction_o *)sub_1B64170(int___TypeInfo, 1LL);
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
    sub_1B64324(this);
  }
  v26 = (int)this->fields.logic;
  v27 = this;
  if ( v26 >= 1 )
  {
    v28 = 0;
    while ( v28 < v26 )
    {
      v29 = *((_QWORD *)&v27->fields.logictarget + (int)v28);
      if ( !v29 )
        goto LABEL_32;
      *(_QWORD *)(v29 + 176) = v20;
      *(_BYTE *)(v29 + 169) = v19;
      sub_1B6406C((ServantStatusBattleListViewItem_o *)(v29 + 176), (int32_t)v20, v24, v25);
      v30 = v8->fields.logic;
      if ( !v30 )
        goto LABEL_32;
      this = (BattleLogicFunction_o *)v30->fields.logicSkill;
      if ( !this )
        goto LABEL_32;
      v31 = BattleLogicSkill__createSkillData_43231848(
              (BattleLogicSkill_o *)this,
              (BattleLogicTask_o *)v29,
              1,
              baseVals,
              &baseActionData,
              0LL);
      BattleActionData__addAction(actionData, v31, 0LL);
      if ( v31 )
        actionData->fields.isSuccessSkillCopyFunction = 1;
      v26 = (int)v27->fields.logic;
      if ( (int)++v28 >= v26 )
        goto LABEL_29;
    }
LABEL_33:
    sub_1B6432C(this, v23);
  }
LABEL_29:
  FuncSideEffectArg = BattleLogicFunction_ProcListInArgs__get_FuncSideEffectArg(args, 0LL);
  if ( FuncSideEffectArg )
    BattleLogicFunction_FuncSideEffectFunctionArgument__AddTarget_43131460(
      FuncSideEffectArg,
      (BattleLogicFunction_FuncSideEffectFunctionArgument_o *)v20,
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
  __int64 v16; // x1
  __int64 v17; // x2
  MoveToSubMemberWaveTurnEvent_o *v18; // x25
  bool v19; // w24
  int32_t v20; // w0
  int32_t uniqueId; // w25
  int32_t v22; // w26
  __int64 v23; // x1
  __int64 v24; // x2
  RestockServantLogicByMoveToSubMember_o *v25; // x23
  __int64 v26; // x1
  __int64 v27; // x2
  BattleActionData_o *v28; // x21

  v9 = this;
  if ( (byte_49FEE04 & 1) == 0 )
  {
    sub_1B640C8(&Method_BasicHelper_IndexValue_int____75711232, targetServantData);
    sub_1B640C8(&BattleActionData_TypeInfo, v10);
    sub_1B640C8(&MoveToSubMemberWaveTurnEvent_TypeInfo, v11);
    this = (BattleLogicFunction_o *)sub_1B640C8(&RestockServantLogicByMoveToSubMember_TypeInfo, v12);
    byte_49FEE04 = 1;
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
  BattleData__SubBuffFromPT_42191224((BattleData_o *)this, targetServantData, 0LL);
  this = (BattleLogicFunction_o *)v9->fields.data;
  if ( !this )
    goto LABEL_13;
  BattleData__SubBuffExitSvt((BattleData_o *)this, targetServantData, 0LL);
  this = (BattleLogicFunction_o *)v9->fields.data;
  if ( !this )
    goto LABEL_13;
  targetServantData->fields.deckIndex = BattleData__GetSubServantUsableDeckIndex((BattleData_o *)this, isEnemy, 0LL);
  data = v9->fields.data;
  v18 = (MoveToSubMemberWaveTurnEvent_o *)sub_1B64314(MoveToSubMemberWaveTurnEvent_TypeInfo, v16, v17);
  MoveToSubMemberWaveTurnEvent___ctor(v18, data, 0LL);
  BattleServantData__RegisterWaveTurnEvent(targetServantData, (ServantWaveTurnEvent_o *)v18, 0LL);
  if ( !funcEnt )
    goto LABEL_13;
  v19 = isEnemy;
  v20 = BasicHelper__IndexValue_int_(
          funcEnt->fields.vals,
          0,
          0,
          (const MethodInfo_2E28154 *)Method_BasicHelper_IndexValue_int____75711232);
  uniqueId = targetServantData->fields.uniqueId;
  v22 = v20;
  v25 = (RestockServantLogicByMoveToSubMember_o *)sub_1B64314(RestockServantLogicByMoveToSubMember_TypeInfo, v23, v24);
  RestockServantLogicByMoveToSubMember___ctor(v25, ServantIndex, v19, v22, uniqueId, 0LL);
  this = (BattleLogicFunction_o *)v9->fields.data;
  if ( !this
    || (BattleData__AppendRestockServantLogic((BattleData_o *)this, (RestockServantLogic_o *)v25, 0LL),
        v28 = (BattleActionData_o *)sub_1B64314(BattleActionData_TypeInfo, v26, v27),
        BattleActionData___ctor(v28, 0LL),
        !v28) )
  {
LABEL_13:
    sub_1B64324(this);
  }
  BattleActionData__AddNewMoveToSubMember(v28, ServantIndex, targetServantData->fields.uniqueId, funcIndex, 1, 0LL);
  return v28;
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
  if ( (byte_49FEE23 & 1) == 0 )
  {
    this = (BattleLogicFunction_o *)sub_1B640C8(&UnityEngine_Object_TypeInfo, args);
    byte_49FEE23 = 1;
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
      if ( !byte_49F7111 )
      {
        sub_1B640C8(&UnityEngine_Vector3_TypeInfo, v8);
        byte_49F7111 = 1;
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
    sub_1B64324(this);
  }
}


void __fastcall BattleLogicFunction__FunctionSetBattleValue(
        BattleLogicFunction_o *this,
        FunctionEntity_o *funcEnt,
        const MethodInfo *method)
{
  BattleLogicFunction_o *v4; // x20
  BattleData_o *data; // x0
  __int64 v6; // x1
  struct System_Int32_array *vals; // x8
  System_Collections_Generic_Dictionary_int__int__o *v8; // x20
  int v9; // w21
  il2cpp_array_size_t max_length; // w10
  unsigned int v11; // w9

  v4 = this;
  if ( (byte_49FEE28 & 1) == 0 )
  {
    this = (BattleLogicFunction_o *)sub_1B640C8(
                                      &Method_System_Collections_Generic_Dictionary_int__int__set_Item__,
                                      funcEnt);
    byte_49FEE28 = 1;
  }
  if ( BattleLogicFunction__CanCheckFuncBattleValue(this, funcEnt, method) )
  {
    data = v4->fields.data;
    if ( !data
      || (data = (BattleData_o *)BattleData__GetBattleValueDict(data, 0LL), !funcEnt)
      || (vals = funcEnt->fields.vals) == 0LL )
    {
LABEL_13:
      sub_1B64324(data);
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
        sub_1B6432C(data, v6);
      if ( v8 )
      {
        System_Collections_Generic_Dictionary_int__int___set_Item(
          v8,
          vals->m_Items[v11 + 1],
          vals->m_Items[v9 + 1],
          (const MethodInfo_311AEA0 *)Method_System_Collections_Generic_Dictionary_int__int__set_Item__);
        vals = funcEnt->fields.vals;
        v9 += 2;
        if ( vals )
          continue;
      }
      goto LABEL_13;
    }
  }
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
  __int64 v31; // x1
  __int64 v32; // x2
  System_Func_object__object__o *v33; // x24
  System_Collections_Generic_IEnumerable_TSource__o *v34; // x0
  int32_t v35; // w2
  int32_t v36; // w3
  __int64 v37; // x1
  __int64 v38; // x2
  BattleLogicFunction___c_c *v39; // x0
  System_Func_object__bool__o *_9__121_1; // x21
  Il2CppObject *v41; // x24
  struct BattleLogicFunction___c_StaticFields *static_fields; // x0
  int32_t v43; // w2
  int32_t v44; // w3
  __int64 v45; // x1
  __int64 v46; // x2
  BattleActionEffect_UpdateAllInfo_o *v47; // x21

  v8 = (Il2CppObject *)this;
  if ( (byte_49FEE25 & 1) == 0 )
  {
    sub_1B640C8(&Method_BasicHelper_Any_BattleBuffData_BuffData___, args);
    sub_1B640C8(&Method_BattleLogicFunction__FunctionSubFieldBuff_b__121_0__, v9);
    sub_1B640C8(&Method_System_Linq_Enumerable_Select_BattleBuffData_BuffData__BattleBuffData_BuffData___, v10);
    sub_1B640C8(&Method_System_Linq_Enumerable_ToList_BattleBuffData_BuffData___, v11);
    sub_1B640C8(&System_Func_BattleBuffData_BuffData__BattleBuffData_BuffData__TypeInfo, v12);
    sub_1B640C8(&System_Func_BattleBuffData_BuffData__bool__TypeInfo, v13);
    sub_1B640C8(&Method_System_Collections_Generic_List_BattleBuffData_BuffData__get_Count__, v14);
    sub_1B640C8(&Method_BattleLogicFunction___c__FunctionSubFieldBuff_b__121_1__, v15);
    sub_1B640C8(&BattleLogicFunction___c_TypeInfo, v16);
    this = (BattleLogicFunction_o *)sub_1B640C8(&BattleActionEffect_UpdateAllInfo_TypeInfo, v17);
    byte_49FEE25 = 1;
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
  this = (BattleLogicFunction_o *)((__int64 (__fastcall *)(BattleLogicFunctionProcess_FunctionTargetCheck_o *, Il2CppMethodPointer))funcTarget->klass->vtable._7_MakeActionBuffData.method)(
                                    funcTarget,
                                    funcTarget->klass->vtable._8_AddBuff.methodPtr);
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
    v33 = (System_Func_object__object__o *)sub_1B64314(
                                             System_Func_BattleBuffData_BuffData__BattleBuffData_BuffData__TypeInfo,
                                             v31,
                                             v32);
    System_Func_object__object____ctor(v33, v8, Method_BattleLogicFunction__FunctionSubFieldBuff_b__121_0__, 0LL);
    v34 = (System_Collections_Generic_IEnumerable_TSource__o *)System_Linq_Enumerable__Select_object__object_(
                                                                 (System_Collections_Generic_IEnumerable_TSource__o *)data,
                                                                 (System_Func_TSource__TResult__o *)v33,
                                                                 (const MethodInfo_2E693AC *)Method_System_Linq_Enumerable_Select_BattleBuffData_BuffData__BattleBuffData_BuffData___);
    this = (BattleLogicFunction_o *)System_Linq_Enumerable__ToList_object_(
                                      v34,
                                      (const MethodInfo_2E7501C *)Method_System_Linq_Enumerable_ToList_BattleBuffData_BuffData___);
    if ( FunctionObject )
    {
      FunctionObject->fields.removeBuffList = (struct System_Collections_Generic_List_BattleBuffData_BuffData__o *)this;
      sub_1B6406C((ServantStatusBattleListViewItem_o *)&FunctionObject->fields.removeBuffList, (int32_t)this, v35, v36);
      v39 = BattleLogicFunction___c_TypeInfo;
      if ( !BattleLogicFunction___c_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(BattleLogicFunction___c_TypeInfo);
        v39 = BattleLogicFunction___c_TypeInfo;
      }
      _9__121_1 = (System_Func_object__bool__o *)v39->static_fields->__9__121_1;
      if ( !_9__121_1 )
      {
        if ( !v39->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(v39);
          v39 = BattleLogicFunction___c_TypeInfo;
        }
        v41 = (Il2CppObject *)v39->static_fields->__9;
        _9__121_1 = (System_Func_object__bool__o *)sub_1B64314(
                                                     System_Func_BattleBuffData_BuffData__bool__TypeInfo,
                                                     v37,
                                                     v38);
        System_Func_object__bool____ctor(
          _9__121_1,
          v41,
          Method_BattleLogicFunction___c__FunctionSubFieldBuff_b__121_1__,
          0LL);
        static_fields = BattleLogicFunction___c_TypeInfo->static_fields;
        static_fields->__9__121_1 = (struct System_Func_BattleBuffData_BuffData__bool__o *)_9__121_1;
        sub_1B6406C((ServantStatusBattleListViewItem_o *)&static_fields->__9__121_1, (int32_t)_9__121_1, v43, v44);
      }
      this = (BattleLogicFunction_o *)BasicHelper__Any_object_(
                                        (System_Collections_Generic_List_T__o *)data,
                                        (System_Func_T__bool__o *)_9__121_1,
                                        (const MethodInfo_2E24870 *)Method_BasicHelper_Any_BattleBuffData_BuffData___);
      if ( ((unsigned __int8)this & 1) != 0 )
      {
        v47 = (BattleActionEffect_UpdateAllInfo_o *)sub_1B64314(BattleActionEffect_UpdateAllInfo_TypeInfo, v45, v46);
        BattleActionEffect_UpdateAllInfo___ctor(v47, 0LL);
        BattleActionData_BuffData__SetActionEffectProc(FunctionObject, (BattleActionEffect_Base_o *)v47, 0LL);
      }
      if ( mainAction )
      {
        BattleActionData__setBuffData(mainAction, FunctionObject, dataVals_k__BackingField, 0LL);
        return;
      }
    }
LABEL_26:
    sub_1B64324(this);
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
  __int64 v16; // x1
  __int64 v17; // x2
  BattleBuffData_FieldChangeData_o *tamamocatTreasureDeviceIds; // x24
  struct BattleData_o *data; // x8
  Generator_BGFromFieldChangeBGBuff_o *v20; // x22
  const MethodInfo *v21; // x3
  BattleData_o *v22; // x22
  Generator_BGMFromFieldChangeBGBuff_o *v23; // x23
  const MethodInfo *v24; // x4

  v10 = this;
  if ( (byte_49FEE24 & 1) == 0 )
  {
    sub_1B640C8(&Generator_BGFromFieldChangeBGBuff_TypeInfo, args);
    this = (BattleLogicFunction_o *)sub_1B640C8(&Generator_BGMFromFieldChangeBGBuff_TypeInfo, v11);
    byte_49FEE24 = 1;
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
  isParam = DataVals__isParam(logictarget, 101, 0LL);
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
    sub_1B64324(this);
  }
  if ( !tamamocatTreasureDeviceIds )
    goto LABEL_17;
  if ( tamamocatTreasureDeviceIds->fields.bgId >= 1 )
  {
    v20 = (Generator_BGFromFieldChangeBGBuff_o *)sub_1B64314(Generator_BGFromFieldChangeBGBuff_TypeInfo, v16, v17);
    Generator_BGFromFieldChangeBGBuff___ctor(v20, tamamocatTreasureDeviceIds, 0LL);
    BattleLogicFunction__FunctionQuickChangeBG(v10, args, (Generator_Background_o *)v20, v21);
  }
  if ( tamamocatTreasureDeviceIds->fields.bgmId >= 1 )
  {
    v22 = v10->fields.data;
    v23 = (Generator_BGMFromFieldChangeBGBuff_o *)sub_1B64314(Generator_BGMFromFieldChangeBGBuff_TypeInfo, v16, v17);
    Generator_BGMFromFieldChangeBGBuff___ctor(v23, v22, tamamocatTreasureDeviceIds, 0LL);
    BattleLogicFunction__FunctionChangeBgm(v10, args, (Generator_BGM_o *)v23, v13, v24);
  }
}


void __fastcall BattleLogicFunction__FunctionUpdateEntryMaxCountEachTurn(
        BattleLogicFunction_o *this,
        DataVals_o *baseVals,
        const MethodInfo *method)
{
  struct BattleData_o *data; // x19

  if ( !baseVals || (data = this->fields.data, this = (BattleLogicFunction_o *)DataVals__GetValue(baseVals, 0LL), !data) )
    sub_1B64324(this);
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
    sub_1B64324(this);
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

  if ( (byte_49FEDF9 & 1) == 0 )
  {
    this = (BattleLogicFunction_o *)sub_1B640C8(&System_Math_TypeInfo, dataVals);
    byte_49FEDF9 = 1;
  }
  if ( !dataVals )
    goto LABEL_10;
  this = (BattleLogicFunction_o *)DataVals__isParam(dataVals, 115, 0LL);
  if ( ((unsigned __int8)this & 1) == 0 )
    return healPoint;
  if ( !targetSvtData )
LABEL_10:
    sub_1B64324(this);
  MaxHp = BattleServantData__getMaxHp(targetSvtData, 0LL);
  v9 = ((__int64 (__fastcall *)(BattleServantData_o *, Il2CppMethodPointer))targetSvtData->klass->vtable._13_get_resultHp.method)(
         targetSvtData,
         targetSvtData->klass->vtable._14_set_resultHp.methodPtr);
  if ( !System_Math_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(System_Math_TypeInfo);
  return System_Math__Min_62194364(healPoint, MaxHp - v9, 0LL);
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
    sub_1B64324(this);
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
  __int64 v4; // x1
  __int64 v5; // x1
  Il2CppObject *Master_object; // x0
  __int64 v7; // x1
  struct System_Int32_array *vals; // x8

  if ( (byte_49FEDDF & 1) == 0 )
  {
    sub_1B640C8(&Method_DataManager_GetMaster_BuffMaster___, funcEnt);
    sub_1B640C8(&DataManager_TypeInfo, v4);
    sub_1B640C8(&Method_DataMasterBase_BuffMaster__BuffEntity__int__GetEntity__, v5);
    byte_49FEDDF = 1;
  }
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_object = DataManager__GetMaster_object_((const MethodInfo_2E39398 *)Method_DataManager_GetMaster_BuffMaster___);
  if ( !funcEnt )
    goto LABEL_10;
  vals = funcEnt->fields.vals;
  if ( !vals )
    goto LABEL_10;
  if ( !vals->max_length )
    sub_1B6432C(Master_object, v7);
  if ( !Master_object )
LABEL_10:
    sub_1B64324(Master_object);
  return (BuffEntity_o *)DataMasterBase_object__object__int___GetEntity(
                           (DataMasterBase_TMaster__TEntity__PKType__o *)Master_object,
                           vals->m_Items[1],
                           (const MethodInfo_30D3EA4 *)Method_DataMasterBase_BuffMaster__BuffEntity__int__GetEntity__);
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
  int32_t CardIndex; // w20
  System_Int32_array *IdArrayFromIndividuality; // x21
  DataMasterBase_TMaster__TEntity__PKType__o *v23; // x22
  __int64 v24; // x24
  __int64 v25; // x25
  __int64 v26; // x1
  __int64 v27; // x2
  unsigned __int64 v28; // x24
  System_Collections_Generic_List_int__o *v29; // x22
  __int64 v30; // x1
  System_Collections_Generic_IEnumerable_TSource__o *v31; // x0
  __int64 v32; // x8
  unsigned __int64 v33; // x25
  __int64 v34; // x8
  int32_t v35; // w29
  unsigned __int64 v36; // x23
  struct System_Int32_array *items; // x8
  _QWORD *v38; // x9
  __int64 size; // x10
  int32_t Next; // w0
  struct System_Int32_array *v41; // x8
  _QWORD *v42; // x9
  __int64 v43; // x10
  unsigned int max_length; // w11
  int32_t v45; // w1
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v47; // 0:x0.16

  if ( (byte_49FEE1B & 1) == 0 )
  {
    sub_1B640C8(&Method_DataManager_GetMasterData_ServantMaster___, baseVals);
    sub_1B640C8(&Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__, v6);
    sub_1B640C8(&Method_System_Linq_Enumerable_Repeat_int___, v7);
    sub_1B640C8(&Method_System_Linq_Enumerable_ToArray_int___, v8);
    sub_1B640C8(&Method_System_Collections_Generic_List_int__AddRange__, v9);
    sub_1B640C8(&Method_System_Collections_Generic_List_int__Add__, v10);
    sub_1B640C8(&Method_System_Collections_Generic_List_int__Contains__, v11);
    sub_1B640C8(&Method_System_Collections_Generic_List_int__ToArray__, v12);
    sub_1B640C8(&Method_System_Collections_Generic_List_int___ctor__, v13);
    sub_1B640C8(&Method_System_Collections_Generic_List_int__get_Count__, v14);
    sub_1B640C8(&Method_System_Collections_Generic_List_int__get_Item__, v15);
    sub_1B640C8(&System_Collections_Generic_List_int__TypeInfo, v16);
    sub_1B640C8(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v17);
    sub_1B640C8(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v18);
    byte_49FEE1B = 1;
  }
  v19 = (System_Collections_Generic_List_int__o *)sub_1B64314(
                                                    System_Collections_Generic_List_int__TypeInfo,
                                                    baseVals,
                                                    targetServant);
  System_Collections_Generic_List_int____ctor(
    v19,
    (const MethodInfo_348F688 *)Method_System_Collections_Generic_List_int___ctor__);
  if ( !baseVals )
    goto LABEL_55;
  CardIndex = DataVals__GetCardIndex(baseVals, 0LL);
  CardIndividuality = DataVals__GetCardIndividuality(baseVals, 0LL);
  if ( (CardIndividuality & 0x80000000) == 0 )
  {
    IdArrayFromIndividuality = CardMaster__getIdArrayFromIndividuality(CardIndividuality, 0LL);
    CardIndividuality = (unsigned __int64)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EC03C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !CardIndividuality )
      goto LABEL_55;
    CardIndividuality = (unsigned __int64)DataManager__GetMasterData_object_(
                                            (DataManager_o *)CardIndividuality,
                                            (const MethodInfo_2E393EC *)Method_DataManager_GetMasterData_ServantMaster___);
    if ( !targetServant )
      goto LABEL_55;
    v23 = (DataMasterBase_TMaster__TEntity__PKType__o *)CardIndividuality;
    v25 = *(_QWORD *)&targetServant->fields.svtId.fields.currentCryptoKey;
    v24 = *(_QWORD *)&targetServant->fields.svtId.fields.fakeValue;
    if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    *(_QWORD *)&v47.fields.currentCryptoKey = v25;
    *(_QWORD *)&v47.fields.fakeValue = v24;
    CardIndividuality = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_46171608(v47, 0LL);
    if ( !v23 )
      goto LABEL_55;
    CardIndividuality = (unsigned __int64)DataMasterBase_object__object__int___GetEntity(
                                            v23,
                                            CardIndividuality,
                                            (const MethodInfo_30D3EA4 *)Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
    if ( !CardIndividuality )
      goto LABEL_55;
    v28 = *(_QWORD *)(CardIndividuality + 144);
    v29 = (System_Collections_Generic_List_int__o *)sub_1B64314(System_Collections_Generic_List_int__TypeInfo, v26, v27);
    System_Collections_Generic_List_int____ctor(
      v29,
      (const MethodInfo_348F688 *)Method_System_Collections_Generic_List_int___ctor__);
    CardIndividuality = (unsigned __int64)BattleServantData__get_BuffData(targetServant, 0LL);
    if ( !CardIndividuality )
      goto LABEL_55;
    CardIndividuality = (unsigned __int64)BattleBuffData__GetCommandCardTypeChangeBuff(
                                            (BattleBuffData_o *)CardIndividuality,
                                            0LL);
    if ( CardIndividuality )
    {
      if ( !v28 )
        goto LABEL_55;
      v31 = (System_Collections_Generic_IEnumerable_TSource__o *)System_Linq_Enumerable__Repeat_int_(
                                                                   *(_DWORD *)(CardIndividuality + 28),
                                                                   *(_DWORD *)(v28 + 24),
                                                                   (const MethodInfo_2E63B7C *)Method_System_Linq_Enumerable_Repeat_int___);
      CardIndividuality = (unsigned __int64)System_Linq_Enumerable__ToArray_int_(
                                              v31,
                                              (const MethodInfo_2E7122C *)Method_System_Linq_Enumerable_ToArray_int___);
      v28 = CardIndividuality;
    }
    if ( !IdArrayFromIndividuality )
      goto LABEL_55;
    v32 = *(_QWORD *)&IdArrayFromIndividuality->max_length;
    if ( (int)v32 >= 1 )
    {
      v33 = 0LL;
      while ( 1 )
      {
        if ( v33 >= (unsigned int)v32 )
          goto LABEL_54;
        if ( !v28 )
          goto LABEL_55;
        v34 = *(_QWORD *)(v28 + 24);
        if ( (int)v34 >= 1 )
          break;
LABEL_31:
        LODWORD(v32) = IdArrayFromIndividuality->max_length;
        if ( (__int64)++v33 >= (int)v32 )
          goto LABEL_32;
      }
      v35 = IdArrayFromIndividuality->m_Items[v33 + 1];
      v36 = 0LL;
      while ( v36 < (unsigned int)v34 )
      {
        if ( v35 == *(_DWORD *)(v28 + 32 + 4 * v36) )
        {
          if ( !v29 )
            goto LABEL_55;
          CardIndividuality = System_Collections_Generic_List_int___Contains(
                                v29,
                                v36,
                                (const MethodInfo_3490254 *)Method_System_Collections_Generic_List_int__Contains__);
          if ( (CardIndividuality & 1) == 0 )
          {
            items = v29->fields._items;
            v38 = Method_System_Collections_Generic_List_int__Add__;
            ++v29->fields._version;
            if ( !items )
              goto LABEL_55;
            size = v29->fields._size;
            if ( (unsigned int)size >= items->max_length )
            {
              System_Collections_Generic_List_int___AddWithResize(
                v29,
                v36,
                *(const MethodInfo_348FEDC **)(*(_QWORD *)(v38[4] + 192LL) + 112LL));
            }
            else
            {
              v29->fields._size = size + 1;
              items->m_Items[size + 1] = v36;
            }
          }
        }
        LODWORD(v34) = *(_DWORD *)(v28 + 24);
        if ( (__int64)++v36 >= (int)v34 )
          goto LABEL_31;
      }
LABEL_54:
      sub_1B6432C(CardIndividuality, v30);
    }
LABEL_32:
    if ( !v29 )
LABEL_55:
      sub_1B64324(CardIndividuality);
    CardIndividuality = (unsigned int)v29->fields._size;
    if ( (int)CardIndividuality >= 1 )
    {
      if ( CardIndex )
      {
        if ( v19 )
        {
          System_Collections_Generic_List_int___AddRange(
            v19,
            (System_Collections_Generic_IEnumerable_T__o *)v29,
            (const MethodInfo_34900E8 *)Method_System_Collections_Generic_List_int__AddRange__);
          return System_Collections_Generic_List_int___ToArray(
                   v19,
                   (const MethodInfo_3491A34 *)Method_System_Collections_Generic_List_int__ToArray__);
        }
        goto LABEL_55;
      }
      Next = BattleRandom__getNext(CardIndividuality, 0LL);
      CardIndividuality = System_Collections_Generic_List_int___get_Item(
                            v29,
                            Next,
                            (const MethodInfo_348FBEC *)Method_System_Collections_Generic_List_int__get_Item__);
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
    v41 = v19->fields._items;
    v42 = Method_System_Collections_Generic_List_int__Add__;
    ++v19->fields._version;
    if ( !v41 )
      goto LABEL_55;
    v43 = v19->fields._size;
    max_length = v41->max_length;
    v45 = CardIndividuality;
    goto LABEL_50;
  }
  if ( CardIndex > 5 )
  {
LABEL_40:
    if ( v19 )
      return System_Collections_Generic_List_int___ToArray(
               v19,
               (const MethodInfo_3491A34 *)Method_System_Collections_Generic_List_int__ToArray__);
    goto LABEL_55;
  }
  if ( !v19 )
    goto LABEL_55;
  v41 = v19->fields._items;
  v42 = Method_System_Collections_Generic_List_int__Add__;
  ++v19->fields._version;
  if ( !v41 )
    goto LABEL_55;
  v43 = v19->fields._size;
  max_length = v41->max_length;
  v45 = CardIndex - 1;
LABEL_50:
  if ( (unsigned int)v43 >= max_length )
  {
    System_Collections_Generic_List_int___AddWithResize(
      v19,
      v45,
      *(const MethodInfo_348FEDC **)(*(_QWORD *)(v42[4] + 192LL) + 112LL));
  }
  else
  {
    v19->fields._size = v43 + 1;
    v41->m_Items[v43 + 1] = v45;
  }
  return System_Collections_Generic_List_int___ToArray(
           v19,
           (const MethodInfo_3491A34 *)Method_System_Collections_Generic_List_int__ToArray__);
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
  System_Collections_Generic_IEnumerable_BattleLogicFunctionProcess_FunctionTargetCheck__o **p_funcTargetArray_k__BackingField; // x8
  _QWORD *v13; // x19
  __int64 v14; // x8
  __int64 v15; // x0
  __int64 v16; // x0

  if ( (byte_49FEDEC & 1) == 0 )
  {
    sub_1B640C8(&Method_System_Array_Empty_BattleLogicFunctionProcess_FunctionTargetCheck___, args);
    sub_1B640C8(&BattleLogicFunctionProcess_DependFunctionUnitCheck_TypeInfo, v9);
    byte_49FEDEC = 1;
  }
  v10 = (BattleLogicFunctionProcess_DependFunctionUnitCheck_o *)sub_1B64314(
                                                                  BattleLogicFunctionProcess_DependFunctionUnitCheck_TypeInfo,
                                                                  args,
                                                                  mainAction);
  BattleLogicFunctionProcess_DependFunctionUnitCheck___ctor(v10, this, args, dataVal, 0LL);
  if ( !v10 )
    sub_1B64324(v11);
  if ( BattleLogicFunctionProcess_FunctionUnitCheck__checkCondtion(
         (BattleLogicFunctionProcess_FunctionUnitCheck_o *)v10,
         mainAction,
         0LL) )
  {
    p_funcTargetArray_k__BackingField = (System_Collections_Generic_IEnumerable_BattleLogicFunctionProcess_FunctionTargetCheck__o **)&v10->fields._funcTargetArray_k__BackingField;
  }
  else
  {
    v13 = Method_System_Array_Empty_BattleLogicFunctionProcess_FunctionTargetCheck___;
    v14 = *((_QWORD *)Method_System_Array_Empty_BattleLogicFunctionProcess_FunctionTargetCheck___ + 7);
    if ( !v14 )
    {
      sub_1BB6000(Method_System_Array_Empty_BattleLogicFunctionProcess_FunctionTargetCheck___);
      v14 = v13[7];
    }
    v15 = *(_QWORD *)(v14 + 16);
    if ( (*(_BYTE *)(v15 + 309) & 1) == 0 )
      v15 = sub_1BB5FA4(v15);
    if ( !*(_DWORD *)(v15 + 224) )
      j_il2cpp_runtime_class_init_0(v15);
    v16 = *(_QWORD *)(v13[7] + 16LL);
    if ( (*(_BYTE *)(v16 + 309) & 1) == 0 )
      v16 = sub_1BB5FA4(v16);
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
    sub_1B64324(this);
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
  __int64 v19; // x2
  struct System_Object_array *items; // x8
  _QWORD *v21; // x9
  __int64 size; // x10
  RemovedBuffInfoGroup_o *v23; // x22
  __int64 v24; // x1
  const MethodInfo *v25; // x4
  __int64 v26; // x8
  unsigned __int64 v27; // x9
  DataVals_o *v28; // x25
  __int64 v29; // x8
  _QWORD *v30; // x24
  __int64 v31; // x9
  int *v32; // x10
  __int64 v33; // x0
  __int64 v34; // x24
  __int64 v35; // x8
  __int64 v36; // x9
  int *v37; // x10
  __int64 v38; // x0
  __int64 v39; // x8
  __int64 v40; // x9
  int *v41; // x10
  __int64 v42; // x0
  __int64 v43; // x0
  __int64 v44; // x26
  __int64 v45; // x0
  int32_t v46; // w26
  FunctionEntity_o *funcEnt; // x27
  int32_t funcIndex; // w28
  bool IsCommandSideEffect; // w0
  BattleActionData_o *v50; // x0
  __int64 v51; // x0
  __int64 v52; // x8
  __int64 v53; // x9
  int *v54; // x10
  __int64 v55; // x0
  const MethodInfo *v57; // [xsp+0h] [xbp-80h]
  _QWORD *v58; // [xsp+8h] [xbp-78h]
  unsigned __int64 v59; // [xsp+10h] [xbp-70h]
  RemovedBuffInfo_o *subBuffInfo; // [xsp+18h] [xbp-68h] BYREF

  if ( (byte_49FEE1D & 1) == 0 )
  {
    sub_1B640C8(&System_IDisposable_TypeInfo, procArg);
    sub_1B640C8(&System_Collections_Generic_IEnumerable_BattleLogicFunctionProcess_FunctionTargetCheck__TypeInfo, v9);
    sub_1B640C8(&System_Collections_Generic_IEnumerator_BattleLogicFunctionProcess_FunctionTargetCheck__TypeInfo, v10);
    sub_1B640C8(&System_Collections_IEnumerator_TypeInfo, v11);
    sub_1B640C8(&Method_System_Collections_Generic_List_FuncList_TYPE__Add__, v12);
    sub_1B640C8(&Method_System_Collections_Generic_List_FuncList_TYPE___ctor__, v13);
    sub_1B640C8(&System_Collections_Generic_List_FuncList_TYPE__TypeInfo, v14);
    sub_1B640C8(&RemovedBuffInfoGroup_TypeInfo, v15);
    byte_49FEE1D = 1;
  }
  subBuffInfo = 0LL;
  v16 = (System_Collections_Generic_List_T__o *)sub_1B64314(
                                                  System_Collections_Generic_List_FuncList_TYPE__TypeInfo,
                                                  procArg,
                                                  mainAction);
  System_Collections_Generic_List_Int32Enum____ctor(
    v16,
    (const MethodInfo_3491F54 *)Method_System_Collections_Generic_List_FuncList_TYPE___ctor__);
  if ( !v16 )
    goto LABEL_56;
  items = v16->fields._items;
  v21 = Method_System_Collections_Generic_List_FuncList_TYPE__Add__;
  ++v16->fields._version;
  if ( !items )
    goto LABEL_56;
  size = v16->fields._size;
  if ( (unsigned int)size >= items->max_length )
  {
    System_Collections_Generic_List_Int32Enum___AddWithResize(
      v16,
      2,
      *(const MethodInfo_34927A8 **)(*(_QWORD *)(v21[4] + 192LL) + 112LL));
  }
  else
  {
    v16->fields._size = size + 1;
    *((_DWORD *)items->m_Items + size) = 2;
  }
  v23 = (RemovedBuffInfoGroup_o *)sub_1B64314(RemovedBuffInfoGroup_TypeInfo, v18, v19);
  RemovedBuffInfoGroup___ctor(v23, 0LL);
  if ( !baseVals )
    goto LABEL_56;
  DependDataValsArray = DataVals__GetDependDataValsArray(
                          baseVals,
                          (System_Collections_Generic_List_FuncList_TYPE__o *)v16,
                          1,
                          0LL);
  if ( !DependDataValsArray )
    goto LABEL_56;
  v26 = DependDataValsArray[3];
  if ( (int)v26 >= 1 )
  {
    v27 = 0LL;
    v58 = DependDataValsArray;
    while ( 1 )
    {
      if ( v27 >= (unsigned int)v26 )
        sub_1B6432C(DependDataValsArray, v24);
      v28 = (DataVals_o *)DependDataValsArray[v27 + 4];
      v59 = v27;
      DependDataValsArray = BattleLogicFunction__GetDependFuncTargets(this, procArg, mainAction, v28, v25);
      if ( !DependDataValsArray )
        break;
      v29 = *DependDataValsArray;
      v30 = DependDataValsArray;
      v31 = *(unsigned __int16 *)(*DependDataValsArray + 302LL);
      if ( *(_WORD *)(*DependDataValsArray + 302LL) )
      {
        v32 = (int *)(*(_QWORD *)(v29 + 176) + 8LL);
        while ( *((System_Collections_Generic_IEnumerable_BattleLogicFunctionProcess_FunctionTargetCheck__c **)v32 - 1) != System_Collections_Generic_IEnumerable_BattleLogicFunctionProcess_FunctionTargetCheck__TypeInfo )
        {
          --v31;
          v32 += 4;
          if ( !v31 )
            goto LABEL_18;
        }
        v33 = v29 + 16LL * *v32 + 312;
      }
      else
      {
LABEL_18:
        v33 = sub_1BB60A8(
                DependDataValsArray,
                System_Collections_Generic_IEnumerable_BattleLogicFunctionProcess_FunctionTargetCheck__TypeInfo,
                0LL);
      }
      v34 = (*(__int64 (__fastcall **)(_QWORD *, _QWORD))v33)(v30, *(_QWORD *)(v33 + 8));
      if ( !v34 )
        sub_1B64324(0LL);
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
              goto LABEL_25;
          }
          v38 = v35 + 16LL * *v37 + 312;
        }
        else
        {
LABEL_25:
          v38 = sub_1BB60A8(v34, System_Collections_IEnumerator_TypeInfo, 0LL);
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
              goto LABEL_32;
          }
          v42 = v39 + 16LL * *v41 + 312;
        }
        else
        {
LABEL_32:
          v42 = sub_1BB60A8(
                  v34,
                  System_Collections_Generic_IEnumerator_BattleLogicFunctionProcess_FunctionTargetCheck__TypeInfo,
                  0LL);
        }
        v43 = (*(__int64 (__fastcall **)(__int64, _QWORD))v42)(v34, *(_QWORD *)(v42 + 8));
        v44 = v43;
        if ( !v43 )
          sub_1B64324(0LL);
        v45 = (*(__int64 (__fastcall **)(__int64, BattleActionData_o *, _QWORD))(*(_QWORD *)v43 + 392LL))(
                v43,
                mainAction,
                *(_QWORD *)(*(_QWORD *)v43 + 400LL));
        if ( (v45 & 1) != 0 )
        {
          if ( !v28 )
            sub_1B64324(v45);
          if ( !procArg )
            sub_1B64324(v45);
          v46 = *(_DWORD *)(v44 + 32);
          funcEnt = v28->fields.funcEnt;
          funcIndex = v28->fields.funcIndex;
          IsCommandSideEffect = BattleLogicFunction_ProcListInArgs__get_IsCommandSideEffect(procArg, 0LL);
          v50 = BattleLogicFunction__functionSubState(
                  this,
                  v46,
                  funcEnt,
                  v28,
                  funcIndex,
                  IsCommandSideEffect,
                  &subBuffInfo,
                  procArg,
                  v57);
          if ( !mainAction )
            sub_1B64324(v50);
          BattleActionData__addAction(mainAction, v50, 0LL);
          if ( !v23 )
            sub_1B64324(v51);
          RemovedBuffInfoGroup__Register(v23, v46, subBuffInfo, 0LL);
        }
      }
      v52 = *(_QWORD *)v34;
      v53 = *(unsigned __int16 *)(*(_QWORD *)v34 + 302LL);
      if ( *(_WORD *)(*(_QWORD *)v34 + 302LL) )
      {
        v54 = (int *)(*(_QWORD *)(v52 + 176) + 8LL);
        while ( *((System_IDisposable_c **)v54 - 1) != System_IDisposable_TypeInfo )
        {
          --v53;
          v54 += 4;
          if ( !v53 )
            goto LABEL_45;
        }
        v55 = v52 + 16LL * *v54 + 312;
      }
      else
      {
LABEL_45:
        v55 = sub_1BB60A8(v34, System_IDisposable_TypeInfo, 0LL);
      }
      (*(void (__fastcall **)(__int64, _QWORD))v55)(v34, *(_QWORD *)(v55 + 8));
      DependDataValsArray = v58;
      LODWORD(v26) = *((_DWORD *)v58 + 6);
      v27 = v59 + 1;
      if ( (__int64)(v59 + 1) >= (int)v26 )
        return v23;
    }
LABEL_56:
    sub_1B64324(DependDataValsArray);
  }
  return v23;
}


bool __fastcall BattleLogicFunction__IsAddStateFieldFlag(
        BattleLogicFunction_o *this,
        BattleBuffData_BuffData_o *buffData,
        const MethodInfo *method)
{
  BattleLogicFunction_o *v4; // x20
  UnityEngine_Object_o *logic; // x21

  v4 = this;
  if ( (byte_49FEDEB & 1) == 0 )
  {
    this = (BattleLogicFunction_o *)sub_1B640C8(&UnityEngine_Object_TypeInfo, buffData);
    byte_49FEDEB = 1;
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
      sub_1B64324(this);
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
    sub_1B64324(this);
  return DataVals__IsActAttackFunction(baseVal, 0LL);
}


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
    sub_1B64324(data);
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
  __int64 v9; // x1
  __int64 v10; // x1
  BattleData_o *data; // x0
  BattleServantData_o *ServantData; // x0
  BattleServantData_o *v13; // x21
  struct BattleData_o *v14; // x8
  int32_t currentTurn; // w8
  bool v16; // w10

  if ( (byte_49FEDEE & 1) == 0 )
  {
    sub_1B640C8(&Method_DataManager_GetMaster_ConstantStrMaster___, *(_QWORD *)&targetId);
    sub_1B640C8(&DataManager_TypeInfo, v9);
    sub_1B640C8(&StringLiteral_5761/*"EXTEND_TURN_BUFF_TYPE"*/, v10);
    byte_49FEDEE = 1;
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
  data = (BattleData_o *)DataManager__GetMaster_object_((const MethodInfo_2E39398 *)Method_DataManager_GetMaster_ConstantStrMaster___);
  if ( !buffEnt || !data )
    goto LABEL_27;
  data = (BattleData_o *)ConstantStrMaster__ExistValueArray(
                           (ConstantStrMaster_o *)data,
                           (System_String_o *)StringLiteral_5761/*"EXTEND_TURN_BUFF_TYPE"*/,
                           buffEnt->fields.type,
                           0LL);
  if ( ((unsigned __int8)data & 1) == 0 )
    goto LABEL_25;
  v14 = this->fields.data;
  if ( !v14 )
LABEL_27:
    sub_1B64324(data);
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
  int32_t v16; // w3
  System_Int32_array *ValueArray; // x0
  System_Collections_Generic_IEnumerable_T__o *v18; // x1

  if ( (byte_49FEDE1 & 1) == 0 )
  {
    sub_1B640C8(&Method_DataManager_GetMasterData_ConstantStrMaster___, *(_QWORD *)&buffType);
    sub_1B640C8(&Method_System_Collections_Generic_List_int__AddRange__, v8);
    sub_1B640C8(&Method_System_Collections_Generic_List_int__Contains__, v9);
    sub_1B640C8(&Method_System_Collections_Generic_List_int___ctor__, v10);
    sub_1B640C8(&System_Collections_Generic_List_int__TypeInfo, v11);
    sub_1B640C8(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v12);
    byte_49FEDE1 = 1;
  }
  Instance = (DataManager_o *)*typeList;
  if ( !*typeList )
  {
    v14 = (System_Collections_Generic_List_int__o *)sub_1B64314(
                                                      System_Collections_Generic_List_int__TypeInfo,
                                                      *(_QWORD *)&buffType,
                                                      keyName);
    System_Collections_Generic_List_int____ctor(
      v14,
      (const MethodInfo_348F688 *)Method_System_Collections_Generic_List_int___ctor__);
    *typeList = v14;
    sub_1B6406C((ServantStatusBattleListViewItem_o *)typeList, (int32_t)v14, v15, v16);
    Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EC03C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( Instance )
    {
      Instance = (DataManager_o *)DataManager__GetMasterData_object_(
                                    Instance,
                                    (const MethodInfo_2E393EC *)Method_DataManager_GetMasterData_ConstantStrMaster___);
      if ( Instance )
      {
        ValueArray = ConstantStrMaster__GetValueArray((ConstantStrMaster_o *)Instance, keyName, 0LL, 0LL);
        if ( ValueArray )
        {
          v18 = (System_Collections_Generic_IEnumerable_T__o *)ValueArray;
          Instance = (DataManager_o *)*typeList;
          if ( !*typeList )
            goto LABEL_11;
          System_Collections_Generic_List_int___AddRange(
            (System_Collections_Generic_List_int__o *)Instance,
            v18,
            (const MethodInfo_34900E8 *)Method_System_Collections_Generic_List_int__AddRange__);
        }
        Instance = (DataManager_o *)*typeList;
        if ( *typeList )
          return System_Collections_Generic_List_int___Contains(
                   (System_Collections_Generic_List_int__o *)Instance,
                   buffType,
                   (const MethodInfo_3490254 *)Method_System_Collections_Generic_List_int__Contains__);
      }
    }
LABEL_11:
    sub_1B64324(Instance);
  }
  return System_Collections_Generic_List_int___Contains(
           (System_Collections_Generic_List_int__o *)Instance,
           buffType,
           (const MethodInfo_3490254 *)Method_System_Collections_Generic_List_int__Contains__);
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
  int32_t v9; // w1
  int32_t v10; // w2
  int32_t v11; // w3
  struct BattleSkillInfoData_o *skillInfo; // x1
  int32_t v13; // w2
  int32_t v14; // w3
  __int64 v15; // x22

  if ( (byte_49FEE21 & 1) == 0 )
  {
    sub_1B640C8(&BattleActionData_TypeInfo, baseVals);
    sub_1B640C8(&StringLiteral_8270/*"LOSS_COMMAND_SPELL"*/, v6);
    byte_49FEE21 = 1;
  }
  v7 = sub_1B64314(BattleActionData_TypeInfo, baseVals, actionData);
  BattleActionData___ctor((BattleActionData_o *)v7, 0LL);
  if ( !actionData )
    goto LABEL_8;
  if ( !v7 )
    goto LABEL_8;
  *(_QWORD *)(v7 + 32) = *(_QWORD *)&actionData->fields.actorId;
  BattleActionData__setStateField((BattleActionData_o *)v7, 0LL);
  v9 = StringLiteral_8270/*"LOSS_COMMAND_SPELL"*/;
  *(_QWORD *)(v7 + 64) = StringLiteral_8270/*"LOSS_COMMAND_SPELL"*/;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)(v7 + 64), v9, v10, v11);
  skillInfo = actionData->fields.skillInfo;
  *(_QWORD *)(v7 + 144) = skillInfo;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)(v7 + 144), (int32_t)skillInfo, v13, v14);
  if ( !baseVals || (v15 = *(_QWORD *)(v7 + 144), Value = DataVals__GetValue(baseVals, 0LL), !v15) )
LABEL_8:
    sub_1B64324(Value);
  *(_DWORD *)(v15 + 100) = Value;
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
  int32_t v14; // w3
  BattleActionData_BuffData_o *result; // x0

  if ( !buffData
    || !actBuffData
    || (actBuffData->fields.buffId = buffData->fields.buffId,
        actBuffData->fields.auraEffectId = buffData->fields.auraEffectId,
        actBuffData->fields.classIconAuraEffectId = buffData->fields.classIconAuraEffectId,
        !funcEnt) )
  {
    sub_1B64324(this);
  }
  popupText = funcEnt->fields.popupText;
  v11 = isCommandSideEffect;
  actBuffData->fields.popLabel = popupText;
  sub_1B6406C(
    (ServantStatusBattleListViewItem_o *)&actBuffData->fields.popLabel,
    (int32_t)popupText,
    (int32_t)buffData,
    (int32_t)funcEnt);
  *(_QWORD *)&actBuffData->fields.popIcon = *(_QWORD *)&funcEnt->fields.popupIconId;
  EffectList = FunctionEntity__getEffectList(funcEnt, 0LL);
  actBuffData->fields.effectList = EffectList;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)&actBuffData->fields.effectList, (int32_t)EffectList, v13, v14);
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
  int32_t v14; // w2
  int32_t v15; // w3
  int32_t v16; // w2
  int32_t v17; // w3

  if ( (byte_49FEDF2 & 1) == 0 )
  {
    sub_1B640C8(&BattleActionData_BuffData_TypeInfo, *(_QWORD *)&targetId);
    byte_49FEDF2 = 1;
  }
  v12 = sub_1B64314(BattleActionData_BuffData_TypeInfo, *(_QWORD *)&targetId, *(_QWORD *)&funcIndex);
  BattleActionData_BuffData___ctor((BattleActionData_BuffData_o *)v12, 0LL);
  if ( !v12 )
    sub_1B64324(v13);
  *(_DWORD *)(v12 + 40) = targetId;
  *(_DWORD *)(v12 + 16) = funcIndex;
  *(_DWORD *)(v12 + 64) = iconId;
  *(_QWORD *)(v12 + 56) = popupText;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)(v12 + 56), (int32_t)popupText, v14, v15);
  *(_DWORD *)(v12 + 68) = popupTextColor;
  *(_QWORD *)(v12 + 72) = 0LL;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)(v12 + 72), 0, v16, v17);
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
  __int64 v23; // x1
  __int64 v24; // x2
  Il2CppObject *current; // x21
  System_Collections_Generic_Dictionary_int__int__o *v26; // x20
  __int64 v27; // x0
  System_Collections_Generic_List_object__o *klass; // x0
  _BOOL8 v29; // x0
  Il2CppObject *v30; // x22
  __int64 v31; // x21
  System_Int32_array *FamilyLinkageIdArray; // x0
  int32_t v33; // w2
  int32_t v34; // w3
  System_Int32_array *FamilyLinkageTargetIdArray; // x0
  int32_t v36; // w2
  int32_t v37; // w3
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

  if ( (byte_49FEE1E & 1) == 0 )
  {
    sub_1B640C8(&Method_System_Collections_Generic_Dictionary_int__int__ContainsKey__, procArg);
    sub_1B640C8(&Method_System_Collections_Generic_Dictionary_int__int___ctor__, v8);
    sub_1B640C8(&Method_System_Collections_Generic_Dictionary_int__int__get_Item__, v9);
    sub_1B640C8(&Method_System_Collections_Generic_Dictionary_int__RemovedBuffInfo__get_Values__, v10);
    sub_1B640C8(&Method_System_Collections_Generic_Dictionary_int__int__set_Item__, v11);
    sub_1B640C8(&System_Collections_Generic_Dictionary_int__int__TypeInfo, v12);
    sub_1B640C8(
      &Method_System_Collections_Generic_Dictionary_ValueCollection_Enumerator_int__RemovedBuffInfo__Dispose__,
      v13);
    sub_1B640C8(&Method_System_Collections_Generic_List_Enumerator_BattleBuffData_BuffData__Dispose__, v14);
    sub_1B640C8(
      &Method_System_Collections_Generic_Dictionary_ValueCollection_Enumerator_int__RemovedBuffInfo__MoveNext__,
      v15);
    sub_1B640C8(&Method_System_Collections_Generic_List_Enumerator_BattleBuffData_BuffData__MoveNext__, v16);
    sub_1B640C8(
      &Method_System_Collections_Generic_Dictionary_ValueCollection_Enumerator_int__RemovedBuffInfo__get_Current__,
      v17);
    sub_1B640C8(&Method_System_Collections_Generic_List_Enumerator_BattleBuffData_BuffData__get_Current__, v18);
    sub_1B640C8(&int_____TypeInfo, v19);
    sub_1B640C8(&Method_System_Collections_Generic_List_BattleBuffData_BuffData__GetEnumerator__, v20);
    this = (BattleLogicFunction_o *)sub_1B640C8(
                                      &Method_System_Collections_Generic_Dictionary_ValueCollection_int__RemovedBuffInfo__GetEnumerator__,
                                      v21);
    byte_49FEE1E = 1;
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
                                            (const MethodInfo_3123794 *)Method_System_Collections_Generic_Dictionary_int__RemovedBuffInfo__get_Values__)) == 0LL )
    {
      sub_1B64324(this);
    }
    System_Collections_Generic_Dictionary_ValueCollection_int__object___GetEnumerator(
      (System_Collections_Generic_Dictionary_ValueCollection_Enumerator_TKey__TValue__o *)&v51,
      (System_Collections_Generic_Dictionary_ValueCollection_TKey__TValue__o *)this,
      (const MethodInfo_37B55F8 *)Method_System_Collections_Generic_Dictionary_ValueCollection_int__RemovedBuffInfo__GetEnumerator__);
    v53 = v51;
    while ( System_Collections_Generic_Dictionary_ValueCollection_Enumerator_int__object___MoveNext(
              (System_Collections_Generic_Dictionary_ValueCollection_Enumerator_TKey__TValue__o *)&v53,
              (const MethodInfo_326A8E8 *)Method_System_Collections_Generic_Dictionary_ValueCollection_Enumerator_int__RemovedBuffInfo__MoveNext__) )
    {
      current = v53.fields._current;
      v26 = (System_Collections_Generic_Dictionary_int__int__o *)sub_1B64314(
                                                                   System_Collections_Generic_Dictionary_int__int__TypeInfo,
                                                                   v23,
                                                                   v24);
      System_Collections_Generic_Dictionary_int__int____ctor(
        v26,
        (const MethodInfo_311A4F0 *)Method_System_Collections_Generic_Dictionary_int__int___ctor__);
      if ( !current )
        sub_1B64324(v27);
      klass = (System_Collections_Generic_List_object__o *)current[1].klass;
      if ( !klass )
        sub_1B64324(0LL);
      System_Collections_Generic_List_object___GetEnumerator(
        (System_Collections_Generic_List_Enumerator_T__o *)&v51,
        klass,
        (const MethodInfo_34AE26C *)Method_System_Collections_Generic_List_BattleBuffData_BuffData__GetEnumerator__);
      v52 = v51;
      while ( 1 )
      {
        v29 = System_Collections_Generic_List_Enumerator_object___MoveNext(
                &v52,
                (const MethodInfo_322A0B0 *)Method_System_Collections_Generic_List_Enumerator_BattleBuffData_BuffData__MoveNext__);
        if ( !v29 )
          break;
        v30 = v52.fields._current;
        if ( !v52.fields._current )
          sub_1B64324(v29);
        if ( BattleBuffData_BuffData__IsFamilyBuff((BattleBuffData_BuffData_o *)v52.fields._current, 0LL) )
        {
          v31 = sub_1B64170(int_____TypeInfo, 2LL);
          FamilyLinkageIdArray = BattleBuffData_BuffData__get_FamilyLinkageIdArray(
                                   (BattleBuffData_BuffData_o *)v30,
                                   0LL);
          if ( !v31 )
            sub_1B64324(FamilyLinkageIdArray);
          if ( !*(_DWORD *)(v31 + 24) )
            sub_1B6432C(FamilyLinkageIdArray, FamilyLinkageIdArray);
          *(_QWORD *)(v31 + 32) = FamilyLinkageIdArray;
          sub_1B6406C((ServantStatusBattleListViewItem_o *)(v31 + 32), (int32_t)FamilyLinkageIdArray, v33, v34);
          FamilyLinkageTargetIdArray = BattleBuffData_BuffData__get_FamilyLinkageTargetIdArray(
                                         (BattleBuffData_BuffData_o *)v30,
                                         0LL);
          if ( *(_DWORD *)(v31 + 24) <= 1u )
            sub_1B6432C(FamilyLinkageTargetIdArray, FamilyLinkageTargetIdArray);
          *(_QWORD *)(v31 + 40) = FamilyLinkageTargetIdArray;
          sub_1B6406C((ServantStatusBattleListViewItem_o *)(v31 + 40), (int32_t)FamilyLinkageTargetIdArray, v36, v37);
          v40 = *(_QWORD *)(v31 + 24);
          if ( (int)v40 >= 1 )
          {
            v41 = 0LL;
            do
            {
              if ( v41 >= (unsigned int)v40 )
                sub_1B6432C(IsNullOrEmpty, v39);
              v42 = *(System_Collections_ICollection_o **)(v31 + 8 * v41 + 32);
              IsNullOrEmpty = BasicHelper__IsNullOrEmpty(v42, 0LL);
              if ( (IsNullOrEmpty & 1) == 0 )
              {
                if ( !v42 )
                  sub_1B64324(IsNullOrEmpty);
                monitor = (unsigned __int64)v42[1].monitor;
                if ( (int)monitor >= 1 )
                {
                  v44 = (unsigned int)v42[1].monitor;
                  v45 = 0LL;
                  v46 = v42 + 2;
                  do
                  {
                    if ( v45 >= (unsigned int)monitor )
                      sub_1B6432C(IsNullOrEmpty, v39);
                    if ( !v26 )
                      sub_1B64324(IsNullOrEmpty);
                    v47 = System_Collections_Generic_Dictionary_int__int___ContainsKey(
                            v26,
                            *((_DWORD *)&v46->klass + v45),
                            (const MethodInfo_311B0A0 *)Method_System_Collections_Generic_Dictionary_int__int__ContainsKey__);
                    if ( !v47 )
                    {
                      if ( v45 >= LODWORD(v42[1].monitor) )
                        sub_1B6432C(v47, v48);
                      if ( !v22 )
                        sub_1B64324(v47);
                      v49 = *((_DWORD *)&v46->klass + v45);
                      v50 = FamilyBuffLinkageIdGenerator__Next(v22, 0LL);
                      System_Collections_Generic_Dictionary_int__int___set_Item(
                        v26,
                        v49,
                        v50,
                        (const MethodInfo_311AEA0 *)Method_System_Collections_Generic_Dictionary_int__int__set_Item__);
                    }
                    if ( v45 >= LODWORD(v42[1].monitor) )
                      sub_1B6432C(v47, v48);
                    IsNullOrEmpty = System_Collections_Generic_Dictionary_int__int___get_Item(
                                      v26,
                                      *((_DWORD *)&v46->klass + v45),
                                      (const MethodInfo_311AE18 *)Method_System_Collections_Generic_Dictionary_int__int__get_Item__);
                    monitor = LODWORD(v42[1].monitor);
                    if ( v45 >= monitor )
                      sub_1B6432C(IsNullOrEmpty, v39);
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
        (const MethodInfo_322A0AC *)Method_System_Collections_Generic_List_Enumerator_BattleBuffData_BuffData__Dispose__);
    }
    System_Collections_Generic_Dictionary_ValueCollection_Enumerator_int__object___Dispose(
      (System_Collections_Generic_Dictionary_ValueCollection_Enumerator_TKey__TValue__o *)&v53,
      (const MethodInfo_326A8E4 *)Method_System_Collections_Generic_Dictionary_ValueCollection_Enumerator_int__RemovedBuffInfo__Dispose__);
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
  Il2CppObject *Master_object; // x22
  BattleData_o *FuncSideEffectTargetServants; // x0
  __int64 v21; // x1
  struct System_Threading_CancellationTokenSource_o *m_CancellationTokenSource; // x8
  unsigned __int64 v23; // x9
  bool v24; // w27
  struct System_Threading_CancellationTokenSource_o *v25; // x8
  BattleData_o *v26; // x27
  unsigned __int64 v27; // x25
  BattleServantData_o *v28; // x28
  struct System_Threading_CancellationTokenSource_o *v29; // x8
  BattleData_o *v30; // x29
  unsigned __int64 v31; // x24
  BattleBuffData_BuffData_o *v32; // x23
  BattleActionData_o *SideEffectActionData_41929540; // x0
  const MethodInfo *v34; // x6
  System_Int32_array *v35; // x23
  _BOOL8 v36; // x0
  Il2CppObject *current; // x24
  BattleBuffData_BuffData_array *FieldIndividualityChangedFunctionBuff; // x0
  __int64 v39; // x1
  BattleBuffData_BuffData_array *v40; // x25
  __int64 v41; // x8
  unsigned __int64 v42; // x28
  BattleBuffData_BuffData_o *v43; // x26
  BattleActionData_o *v44; // x0
  const MethodInfo *v45; // x6
  __int64 v46; // x1
  __int64 v47; // x2
  System_Collections_Generic_IEnumerable_T__o *SideEffectList; // x19
  BattleLogicFunction___c_c *v49; // x8
  System_Action_object__o *_9__49_0; // x20
  Il2CppObject *v51; // x21
  struct BattleLogicFunction___c_StaticFields *static_fields; // x0
  int32_t v53; // w2
  int32_t v54; // w3
  BattleData_o *v55; // [xsp+0h] [xbp-C0h]
  unsigned __int64 v57; // [xsp+10h] [xbp-B0h]
  BuffList_ACTION_array *v59; // [xsp+20h] [xbp-A0h]
  System_Collections_Generic_List_Enumerator_object__o v60; // [xsp+28h] [xbp-98h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v61; // [xsp+40h] [xbp-80h] BYREF

  if ( (byte_49FEDE5 & 1) == 0 )
  {
    sub_1B640C8(&System_Action_BattleActionData__TypeInfo, sideEffectArg);
    sub_1B640C8(&Method_BasicHelper_ForEach_BattleActionData___, v9);
    sub_1B640C8(&bool___TypeInfo, v10);
    sub_1B640C8(&Method_DataManager_GetMaster_SkillLvMaster___, v11);
    sub_1B640C8(&DataManager_TypeInfo, v12);
    sub_1B640C8(&Method_System_Collections_Generic_List_Enumerator_BattleServantData__Dispose__, v13);
    sub_1B640C8(&Method_System_Collections_Generic_List_Enumerator_BattleServantData__MoveNext__, v14);
    sub_1B640C8(&Method_System_Collections_Generic_List_Enumerator_BattleServantData__get_Current__, v15);
    sub_1B640C8(&Method_System_Collections_Generic_List_BattleServantData__GetEnumerator__, v16);
    sub_1B640C8(&Method_BattleLogicFunction___c__SetFuncSideEffect_b__49_0__, v17);
    sub_1B640C8(&BattleLogicFunction___c_TypeInfo, v18);
    byte_49FEDE5 = 1;
  }
  memset(&v61, 0, sizeof(v61));
  if ( actionData && actorSvtData )
  {
    if ( !DataManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
    Master_object = DataManager__GetMaster_object_((const MethodInfo_2E39398 *)Method_DataManager_GetMaster_SkillLvMaster___);
    FuncSideEffectTargetServants = (BattleData_o *)sub_1B64170(bool___TypeInfo, 2LL);
    if ( !FuncSideEffectTargetServants )
      goto LABEL_47;
    m_CancellationTokenSource = FuncSideEffectTargetServants->fields.m_CancellationTokenSource;
    if ( !(_DWORD)m_CancellationTokenSource )
      goto LABEL_48;
    LOBYTE(FuncSideEffectTargetServants->fields.rootfsm) = 1;
    if ( (int)m_CancellationTokenSource >= 1 )
    {
      v23 = 0LL;
      v55 = FuncSideEffectTargetServants;
      while ( 1 )
      {
        if ( v23 >= (unsigned int)m_CancellationTokenSource )
          goto LABEL_48;
        if ( !sideEffectArg )
          goto LABEL_47;
        v57 = v23;
        v24 = *((_BYTE *)&FuncSideEffectTargetServants->fields.rootfsm + v23) != 0;
        v59 = (BuffList_ACTION_array *)((__int64 (__fastcall *)(BattleLogicFunction_FuncSideEffectFunctionArgument_o *, bool, Il2CppMethodPointer))sideEffectArg->klass->vtable._6_GetActArray.method)(
                                         sideEffectArg,
                                         v24,
                                         sideEffectArg->klass->vtable._7_SetSideEffect.methodPtr);
        FuncSideEffectTargetServants = (BattleData_o *)BattleActionData__GetFuncSideEffectTargetServants(
                                                         actionData,
                                                         this->fields.data,
                                                         v24,
                                                         targetIds,
                                                         0LL);
        if ( !FuncSideEffectTargetServants )
          goto LABEL_47;
        v25 = FuncSideEffectTargetServants->fields.m_CancellationTokenSource;
        v26 = FuncSideEffectTargetServants;
        if ( (int)v25 >= 1 )
          break;
LABEL_24:
        FuncSideEffectTargetServants = v55;
        LODWORD(m_CancellationTokenSource) = v55->fields.m_CancellationTokenSource;
        v23 = v57 + 1;
        if ( (__int64)(v57 + 1) >= (int)m_CancellationTokenSource )
          goto LABEL_25;
      }
      v27 = 0LL;
      while ( 1 )
      {
        if ( v27 >= (unsigned int)v25 )
          goto LABEL_48;
        v28 = (BattleServantData_o *)*((_QWORD *)&v26->fields.rootfsm + v27);
        FuncSideEffectTargetServants = (BattleData_o *)BattleServantData__GetAddSideEffectBuffList(
                                                         actorSvtData,
                                                         v59,
                                                         v28,
                                                         0LL);
        if ( !FuncSideEffectTargetServants )
          goto LABEL_47;
        v29 = FuncSideEffectTargetServants->fields.m_CancellationTokenSource;
        v30 = FuncSideEffectTargetServants;
        if ( (int)v29 >= 1 )
          break;
LABEL_23:
        LODWORD(v25) = v26->fields.m_CancellationTokenSource;
        if ( (__int64)++v27 >= (int)v25 )
          goto LABEL_24;
      }
      v31 = 0LL;
      while ( v31 < (unsigned int)v29 )
      {
        if ( !v28 )
          goto LABEL_47;
        v32 = (BattleBuffData_BuffData_o *)*((_QWORD *)&v30->fields.rootfsm + v31);
        SideEffectActionData_41929540 = BattleActionData__MakeSideEffectActionData_41929540(
                                          actionData,
                                          4,
                                          v28->fields.uniqueId,
                                          0LL);
        BattleLogicFunction__SetSideEffectBuff(
          this,
          (SkillLvMaster_o *)Master_object,
          SideEffectActionData_41929540,
          v32,
          (BattleLogicFunction_CommonSideEffectFunctionArgument_o *)sideEffectArg,
          1,
          v34);
        LODWORD(v29) = v30->fields.m_CancellationTokenSource;
        if ( (__int64)++v31 >= (int)v29 )
          goto LABEL_23;
      }
LABEL_48:
      sub_1B6432C(FuncSideEffectTargetServants, v21);
    }
LABEL_25:
    FuncSideEffectTargetServants = this->fields.data;
    if ( !FuncSideEffectTargetServants
      || (FuncSideEffectTargetServants = (BattleData_o *)BattleData__getQuestIndividualities(
                                                           FuncSideEffectTargetServants,
                                                           0LL),
          !this->fields.data)
      || (v35 = (System_Int32_array *)FuncSideEffectTargetServants,
          (FuncSideEffectTargetServants = (BattleData_o *)BattleData__getServantList(this->fields.data, 0LL)) == 0LL) )
    {
LABEL_47:
      sub_1B64324(FuncSideEffectTargetServants);
    }
    System_Collections_Generic_List_object___GetEnumerator(
      (System_Collections_Generic_List_Enumerator_T__o *)&v60,
      (System_Collections_Generic_List_object__o *)FuncSideEffectTargetServants,
      (const MethodInfo_34AE26C *)Method_System_Collections_Generic_List_BattleServantData__GetEnumerator__);
    v61 = v60;
    while ( 1 )
    {
      v36 = System_Collections_Generic_List_Enumerator_object___MoveNext(
              &v61,
              (const MethodInfo_322A0B0 *)Method_System_Collections_Generic_List_Enumerator_BattleServantData__MoveNext__);
      if ( !v36 )
        break;
      current = v61.fields._current;
      if ( !v61.fields._current )
        sub_1B64324(v36);
      FieldIndividualityChangedFunctionBuff = BattleServantData__GetFieldIndividualityChangedFunctionBuff(
                                                (BattleServantData_o *)v61.fields._current,
                                                v35,
                                                0LL);
      v40 = FieldIndividualityChangedFunctionBuff;
      if ( !FieldIndividualityChangedFunctionBuff )
        sub_1B64324(0LL);
      v41 = *(_QWORD *)&FieldIndividualityChangedFunctionBuff->max_length;
      if ( (int)v41 >= 1 )
      {
        v42 = 0LL;
        do
        {
          if ( v42 >= (unsigned int)v41 )
            sub_1B6432C(FieldIndividualityChangedFunctionBuff, v39);
          v43 = v40->m_Items[v42];
          v44 = BattleActionData__MakeSideEffectActionData_41929540(actionData, 4, (int32_t)current[1].monitor, 0LL);
          if ( !v44 )
            sub_1B64324(0LL);
          v44->fields.actorId = (int32_t)current[1].monitor;
          BattleLogicFunction__SetSideEffectBuff(
            this,
            (SkillLvMaster_o *)Master_object,
            v44,
            v43,
            (BattleLogicFunction_CommonSideEffectFunctionArgument_o *)sideEffectArg,
            1,
            v45);
          LODWORD(v41) = v40->max_length;
          ++v42;
        }
        while ( (__int64)v42 < (int)v41 );
      }
    }
    System_Collections_Generic_List_Enumerator_object___Dispose(
      &v61,
      (const MethodInfo_322A0AC *)Method_System_Collections_Generic_List_Enumerator_BattleServantData__Dispose__);
    if ( BattleActionData__ExistSideEffect(actionData, 4, 0LL) )
    {
      BattleActionData__SetFuncSideEffectTrigger(actionData, 0LL);
      SideEffectList = (System_Collections_Generic_IEnumerable_T__o *)BattleActionData__getSideEffectList(
                                                                        actionData,
                                                                        4,
                                                                        0LL);
      v49 = BattleLogicFunction___c_TypeInfo;
      if ( !BattleLogicFunction___c_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(BattleLogicFunction___c_TypeInfo);
        v49 = BattleLogicFunction___c_TypeInfo;
      }
      _9__49_0 = (System_Action_object__o *)v49->static_fields->__9__49_0;
      if ( !_9__49_0 )
      {
        if ( !v49->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(v49);
          v49 = BattleLogicFunction___c_TypeInfo;
        }
        v51 = (Il2CppObject *)v49->static_fields->__9;
        _9__49_0 = (System_Action_object__o *)sub_1B64314(System_Action_BattleActionData__TypeInfo, v46, v47);
        System_Action_object____ctor(_9__49_0, v51, Method_BattleLogicFunction___c__SetFuncSideEffect_b__49_0__, 0LL);
        static_fields = BattleLogicFunction___c_TypeInfo->static_fields;
        static_fields->__9__49_0 = (struct System_Action_BattleActionData__o *)_9__49_0;
        sub_1B6406C((ServantStatusBattleListViewItem_o *)&static_fields->__9__49_0, (int32_t)_9__49_0, v53, v54);
      }
      BasicHelper__ForEach_object_(
        SideEffectList,
        (System_Action_T__o *)_9__49_0,
        (const MethodInfo_2E26860 *)Method_BasicHelper_ForEach_BattleActionData___);
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
  __int64 v25; // x1
  int32_t v26; // w2
  int32_t v27; // w3
  BattleLogicFunction_o *v28; // x21
  int logic; // w8
  __int64 v30; // x23
  BattleActionData_BuffData_o *v31; // x22
  BattleActionData_o *NoEffectObject; // x23
  __int64 v33; // x0

  v17 = this;
  if ( (byte_49FEDFC & 1) == 0 )
  {
    this = (BattleLogicFunction_o *)sub_1B640C8(&BattleActionData_BuffData___TypeInfo, actiondata);
    byte_49FEDFC = 1;
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
        v28 = this;
        if ( !this )
          return;
        goto LABEL_15;
      }
LABEL_26:
      sub_1B64324(this);
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
  sub_1B6406C((ServantStatusBattleListViewItem_o *)&v19->fields.tamamocatTreasureDeviceIds, (int32_t)this, v22, v23);
  if ( !baseVals )
    goto LABEL_26;
  LODWORD(v19->fields.buffProgressTurnSelfList) = DataVals__GetParam(baseVals, 64, 0, 0LL);
  this = (BattleLogicFunction_o *)sub_1B64170(BattleActionData_BuffData___TypeInfo, 1LL);
  if ( !this )
    goto LABEL_26;
  v28 = this;
  if ( v24 )
  {
    this = (BattleLogicFunction_o *)sub_1B64204(v24, this->klass->_1.element_class);
    if ( !this )
    {
      v33 = sub_1B64348(0LL);
      sub_1B641F0(v33, 0LL);
    }
  }
  if ( !LODWORD(v28->fields.logic) )
    goto LABEL_27;
  v28->fields.logictarget = (struct BattleLogicTarget_o *)v24;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)&v28->fields.logictarget, (int32_t)v24, v26, v27);
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
    sub_1B6432C(this, v25);
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
  int32_t addOrder; // w8
  System_Int32_array *funcId; // x23
  DataVals_array *DataValsList; // x0
  const MethodInfo *v16; // [xsp+28h] [xbp-38h]

  SkillFromBuff = BattleServantData__getSkillFromBuff(skillLvMst, buff, 0LL);
  if ( SkillFromBuff )
  {
    if ( !buff || !arg )
      sub_1B64324(SkillFromBuff);
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
      v16);
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
  __int64 v22; // x2
  struct System_Threading_CancellationTokenSource_o *m_CancellationTokenSource; // x8
  DataManager_o *v24; // x27
  unsigned __int64 v25; // x23
  BattleBuffData_BuffData_o *v26; // x29
  BattleActionData_o *v27; // x28
  int v28; // w0
  const MethodInfo *v29; // x6
  int32_t v30; // w0
  struct BattleActionData_SideEffectData_array *v31; // [xsp+8h] [xbp-88h]
  SkillLvMaster_o *v33; // [xsp+18h] [xbp-78h]
  System_Collections_Generic_KeyValuePair_int__int__o pairAttackAndTarget; // [xsp+28h] [xbp-68h] BYREF
  System_Collections_Generic_KeyValuePair_int__int__o p_pairAttackAndTarget; // 0:x0.8
  System_Collections_Generic_KeyValuePair_int__int__o v37; // 0:x1.8
  System_Collections_Generic_KeyValuePair_int__int__o v38; // 0:x1.8

  if ( (byte_49FEDE8 & 1) == 0 )
  {
    sub_1B640C8(&BattleActionData_TypeInfo, arg);
    sub_1B640C8(&Method_DataManager_GetMasterData_SkillLvMaster___, v11);
    sub_1B640C8(&Method_System_Collections_Generic_KeyValuePair_int__int___ctor__, v12);
    sub_1B640C8(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v13);
    byte_49FEDE8 = 1;
  }
  pairAttackAndTarget = 0LL;
  Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EC03C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance
    || (Instance = (DataManager_o *)DataManager__GetMasterData_object_(
                                      Instance,
                                      (const MethodInfo_2E393EC *)Method_DataManager_GetMasterData_SkillLvMaster___),
        v33 = (SkillLvMaster_o *)Instance,
        !attackArg)
    || (SideEffectList_k__BackingField = attackArg->fields._SideEffectList_k__BackingField) == 0LL )
  {
LABEL_25:
    sub_1B64324(Instance);
  }
  max_length = SideEffectList_k__BackingField->max_length;
  if ( max_length >= 1 )
  {
    v18 = 0;
    v31 = attackArg->fields._SideEffectList_k__BackingField;
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
          (const MethodInfo_33E3684 *)Method_System_Collections_Generic_KeyValuePair_int__int___ctor__);
        if ( !mainAction )
          goto LABEL_25;
        v37 = pairAttackAndTarget;
        Instance = (DataManager_o *)BattleActionData__isReflectedAttackSideEffect(mainAction, v37, 0LL);
        if ( ((unsigned __int8)Instance & 1) == 0 )
        {
          Instance = (DataManager_o *)BattleServantData__getAttackSideEffectBuffList_42514128(
                                        actionSvtData,
                                        v19->fields.sideEffectActs,
                                        command,
                                        v20,
                                        0LL);
          if ( !Instance )
            goto LABEL_25;
          m_CancellationTokenSource = Instance->fields.m_CancellationTokenSource;
          v24 = Instance;
          if ( m_CancellationTokenSource )
          {
            if ( (int)m_CancellationTokenSource >= 1 )
            {
              v25 = 0LL;
              while ( v25 < (unsigned int)m_CancellationTokenSource )
              {
                v26 = (BattleBuffData_BuffData_o *)*((_QWORD *)&v24->fields._DispLog + v25);
                v27 = (BattleActionData_o *)sub_1B64314(BattleActionData_TypeInfo, v15, v22);
                BattleActionData___ctor(v27, 0LL);
                if ( !v27 )
                  goto LABEL_25;
                v27->fields.actorId = actionSvtData->fields.uniqueId;
                v27->fields.targetId = v20->fields.uniqueId;
                v28 = ((__int64 (__fastcall *)(BattleLogicFunction_SideEffectMakeArgument_o *, Il2CppMethodPointer))attackArg->klass->vtable._5_unknown.method)(
                        attackArg,
                        attackArg->klass->vtable._6_Init.methodPtr);
                BattleLogicFunction__SetSideEffectBuff(
                  this,
                  v33,
                  v27,
                  v26,
                  (BattleLogicFunction_CommonSideEffectFunctionArgument_o *)arg,
                  v28 == 1,
                  v29);
                v30 = ((__int64 (__fastcall *)(BattleLogicFunction_SideEffectMakeArgument_o *, Il2CppMethodPointer))attackArg->klass->vtable._5_unknown.method)(
                        attackArg,
                        attackArg->klass->vtable._6_Init.methodPtr);
                BattleActionData__addSideEffectActionData(mainAction, v27, v30, 0LL);
                LODWORD(m_CancellationTokenSource) = v24->fields.m_CancellationTokenSource;
                if ( (__int64)++v25 >= (int)m_CancellationTokenSource )
                  goto LABEL_22;
              }
LABEL_26:
              sub_1B6432C(Instance, v15);
            }
LABEL_22:
            v38 = pairAttackAndTarget;
            BattleActionData__addReflectAttackSideEffect(mainAction, v38, 0LL);
            SideEffectList_k__BackingField = v31;
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
  __int64 v18; // x1
  Il2CppObject *MasterData_object; // x22
  struct BattleLogic_o *logic; // x8
  BattleLogicFunction_o *v21; // x23
  unsigned __int64 v22; // x26
  const MethodInfo *v23; // x4
  BattleLogicFunction_o *v24; // x24
  BattleLogicFunction_o *v25; // x25

  v8 = this;
  if ( (byte_49FEDE4 & 1) == 0 )
  {
    sub_1B640C8(&Method_DataManager_GetMasterData_FunctionMaster___, *(_QWORD *)&targetId);
    sub_1B640C8(&Method_DataMasterBase_FunctionMaster__FunctionEntity__int__GetEntity__, v9);
    sub_1B640C8(&int___TypeInfo, v10);
    sub_1B640C8(&Method_System_Collections_Generic_List_int__AddRange__, v11);
    sub_1B640C8(&Method_System_Collections_Generic_List_int__Add__, v12);
    this = (BattleLogicFunction_o *)sub_1B640C8(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v13);
    byte_49FEDE4 = 1;
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
      *(const MethodInfo_348FEDC **)(*(_QWORD *)(v15[4] + 192LL) + 112LL));
  }
  else
  {
    LODWORD(this->fields.logic) = logic_low + 1;
    *((_DWORD *)&data->fields.rootfsm + logic_low) = targetId;
  }
  if ( !baseVals )
    goto LABEL_23;
  funcType = baseVals->fields.funcType;
  this = (BattleLogicFunction_o *)sub_1B64170(int___TypeInfo, 1LL);
  if ( !this )
    goto LABEL_23;
  if ( !LODWORD(this->fields.logic) )
    goto LABEL_24;
  LODWORD(this->fields.logictarget) = targetId;
  BattleActionData__AddHpDecreaseFuncTargets(action, funcType, (System_Int32_array *)this, 0LL);
  this = (BattleLogicFunction_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EC03C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !this
    || (MasterData_object = DataManager__GetMasterData_object_(
                              (DataManager_o *)this,
                              (const MethodInfo_2E393EC *)Method_DataManager_GetMasterData_FunctionMaster___),
        (this = (BattleLogicFunction_o *)DataVals__GetDependFuncIdArray(baseVals, 0LL)) == 0LL) )
  {
LABEL_23:
    sub_1B64324(this);
  }
  logic = this->fields.logic;
  v21 = this;
  if ( (int)logic >= 1 )
  {
    v22 = 0LL;
    while ( v22 < (unsigned int)logic )
    {
      if ( !MasterData_object )
        goto LABEL_23;
      this = (BattleLogicFunction_o *)DataMasterBase_object__object__int___GetEntity(
                                        (DataMasterBase_TMaster__TEntity__PKType__o *)MasterData_object,
                                        *((_DWORD *)&v21->fields.logictarget + v22),
                                        (const MethodInfo_30D3EA4 *)Method_DataMasterBase_FunctionMaster__FunctionEntity__int__GetEntity__);
      if ( this )
      {
        v24 = this;
        this = (BattleLogicFunction_o *)BattleLogicFunction__getTargetids(
                                          v8,
                                          action,
                                          HIDWORD(this->fields.logic),
                                          baseVals,
                                          v23);
        if ( !action->fields.funcTargetList )
          goto LABEL_23;
        v25 = this;
        System_Collections_Generic_List_int___AddRange(
          action->fields.funcTargetList,
          (System_Collections_Generic_IEnumerable_T__o *)this,
          (const MethodInfo_34900E8 *)Method_System_Collections_Generic_List_int__AddRange__);
        BattleActionData__AddHpDecreaseFuncTargets(action, (int32_t)v24->fields.logic, (System_Int32_array *)v25, 0LL);
      }
      LODWORD(logic) = v21->fields.logic;
      if ( (__int64)++v22 >= (int)logic )
        return;
    }
LABEL_24:
    sub_1B6432C(this, v18);
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
  if ( (byte_49FEDE0 & 1) == 0 )
  {
    sub_1B640C8(&StringLiteral_15417/*"WAR_BOARD_PROGRESS_OPPONENT_BUFF_TYPES"*/, *(_QWORD *)&buffType);
    this = (BattleLogicFunction_o *)sub_1B640C8(&StringLiteral_15418/*"WAR_BOARD_PROGRESS_SELF_BUFF_TYPES"*/, v8);
    byte_49FEDE0 = 1;
  }
  IsUpdateBuffProgressTurn = BattleLogicFunction__IsUpdateBuffProgressTurn(
                               this,
                               buffType,
                               (System_String_o *)StringLiteral_15418/*"WAR_BOARD_PROGRESS_SELF_BUFF_TYPES"*/,
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
            (System_String_o *)StringLiteral_15417/*"WAR_BOARD_PROGRESS_OPPONENT_BUFF_TYPES"*/,
            &v7->fields.buffProgressTurnOpponentList,
            v10) )
      return;
    v11 = 0;
  }
  *isSelfTurn = v11;
}


// local variable allocation has failed, the output may be wrong!
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
  BattleData_o *data; // x0
  System_Collections_Generic_IEnumerable_T__o *v13; // x22
  System_Int32_array *TargetList; // x0
  int32_t v15; // w2
  int32_t v16; // w3
  __int64 v17; // x1
  __int64 v18; // x2
  System_Action_object__o *v19; // x0
  System_Action_T__o *v20; // x21
  __int64 *v21; // x8

  if ( (byte_49FEE15 & 1) == 0 )
  {
    sub_1B640C8(&System_Action_BattleSkillInfoData__TypeInfo, dataVals);
    sub_1B640C8(&Method_BasicHelper_ForEach_BattleSkillInfoData___, v7);
    sub_1B640C8(&Method_BattleLogicFunction___c__DisplayClass101_0__UpdateUserEquipSkillChargeTurn_b__0__, v8);
    sub_1B640C8(&Method_BattleLogicFunction___c__DisplayClass101_0__UpdateUserEquipSkillChargeTurn_b__1__, v9);
    sub_1B640C8(&BattleLogicFunction___c__DisplayClass101_0_TypeInfo, v10);
    byte_49FEE15 = 1;
  }
  v11 = sub_1B64314(BattleLogicFunction___c__DisplayClass101_0_TypeInfo, dataVals, isProgress);
  BattleLogicFunction___c__DisplayClass101_0___ctor((BattleLogicFunction___c__DisplayClass101_0_o *)v11, 0LL);
  data = this->fields.data;
  if ( !data
    || (data = (BattleData_o *)BattleData__getMasterSkillInfos(data, 0LL), !dataVals)
    || (v13 = (System_Collections_Generic_IEnumerable_T__o *)data,
        data = (BattleData_o *)DataVals__GetValue(dataVals, 0LL),
        !v11) )
  {
    sub_1B64324(data);
  }
  *(_DWORD *)(v11 + 16) = (_DWORD)data;
  *(_DWORD *)(v11 + 20) = DataVals__GetValue2(dataVals, 0LL) - 1;
  TargetList = DataVals__GetTargetList(dataVals, 0LL);
  *(_QWORD *)(v11 + 24) = TargetList;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)(v11 + 24), (int32_t)TargetList, v15, v16);
  *(_BYTE *)(v11 + 32) = 0;
  v19 = (System_Action_object__o *)sub_1B64314(System_Action_BattleSkillInfoData__TypeInfo, v17, v18);
  v20 = (System_Action_T__o *)v19;
  if ( isProgress )
    v21 = &Method_BattleLogicFunction___c__DisplayClass101_0__UpdateUserEquipSkillChargeTurn_b__0__;
  else
    v21 = &Method_BattleLogicFunction___c__DisplayClass101_0__UpdateUserEquipSkillChargeTurn_b__1__;
  System_Action_object____ctor(v19, (Il2CppObject *)v11, *v21, 0LL);
  BasicHelper__ForEach_object_(v13, v20, (const MethodInfo_2E26860 *)Method_BasicHelper_ForEach_BattleSkillInfoData___);
  return *(_BYTE *)(v11 + 32);
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
    sub_1B64324(this);
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
    sub_1B64324(0LL);
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
  __int64 v18; // x1
  __int64 v19; // x1
  BattleData_o *data; // x0
  BattleServantData_o *v21; // x21
  BattleServantData_o *v22; // x19
  int v23; // w22
  float BuffTOLERANCEMagnification; // s0
  float v25; // s0
  float v26; // s1
  int32_t InstantDeathRate; // w0
  bool result; // w0
  float v29; // s0
  int32_t v30; // w0
  int32_t v31; // w8
  BattleLogicFunction_o *Next; // x0
  const MethodInfo *v33; // x4
  struct System_Int32_array **p_vals; // x8
  System_Int32_array *v35; // x22
  System_String_o *v36; // x19
  System_String_o *v37; // x0
  int v38; // w23
  float BuffTOLERANCESUBSTATEMagnification; // s0
  int value; // [xsp+Ch] [xbp-74h]
  int32_t v41; // [xsp+18h] [xbp-68h] BYREF
  int32_t v42; // [xsp+1Ch] [xbp-64h] BYREF

  if ( (byte_49FEDE6 & 1) == 0 )
  {
    sub_1B640C8(&StringLiteral_17872/*"checkFuncAction("*/, args);
    sub_1B640C8(&StringLiteral_176/*" < "*/, v18);
    sub_1B640C8(&StringLiteral_17871/*"checkFuncAction firstResult:false"*/, v19);
    byte_49FEDE6 = 1;
  }
  data = this->fields.data;
  if ( !data )
    goto LABEL_51;
  data = (BattleData_o *)BattleData__getServantData(data, actorId, 0LL);
  if ( !this->fields.data )
    goto LABEL_51;
  v21 = (BattleServantData_o *)data;
  data = (BattleData_o *)BattleData__getServantData(this->fields.data, targetId, 0LL);
  v41 = 1000;
  v42 = 1000;
  if ( !baseVals )
    goto LABEL_51;
  v22 = (BattleServantData_o *)data;
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
  data = (BattleData_o *)BattleUtility__Abs_42669028(value, 0LL);
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
        if ( !v22 )
          goto LABEL_51;
        if ( !BattleServantData__checkAvoidInstantDeath(v22, v21, 0LL) )
        {
          Next = (BattleLogicFunction_o *)BattleRandom__getNext(1000, 0LL);
          v42 = (int)Next;
          InstantDeathRate = BattleLogicFunction__GetInstantDeathRate(
                               Next,
                               (float)value,
                               v22,
                               v21,
                               isTreasureDevice,
                               v33);
          goto LABEL_37;
        }
        v41 = 0;
        v42 = 1000;
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
        v35 = *p_vals;
        if ( v21 || !DataVals__isParam(baseVals, 74, 0LL) )
        {
          data = (BattleData_o *)BattleRandom__getNext(1000, 0LL);
          if ( !v22 )
            goto LABEL_51;
          v38 = (int)data;
          BuffTOLERANCESUBSTATEMagnification = BattleServantData__getBuffTOLERANCESUBSTATEMagnification(
                                                 v22,
                                                 v35,
                                                 v21,
                                                 0LL);
          v42 = BattleUtility__FloorToInt((float)(BuffTOLERANCESUBSTATEMagnification * 1000.0) + (float)v38, 0LL);
          if ( v21 )
          {
            v25 = BattleServantData__getBuffGRANTSUBSTATEMagnification(v21, v35, v22, 0LL) * 1000.0;
            v26 = (float)value;
            goto LABEL_15;
          }
          goto LABEL_35;
        }
        v29 = (float)BattleRandom__getNext(1000, 0LL);
        goto LABEL_33;
      }
      if ( FuncList__Check(20, funcEnt->fields.funcType, 0LL) )
      {
        data = (BattleData_o *)BattleRandom__getNext(1000, 0LL);
        if ( !v22 )
          goto LABEL_51;
        v29 = (float)(BattleServantData__getBuffResistDelayNPTurn(v22, v21, 0LL) * 1000.0) + (float)(int)data;
LABEL_33:
        v30 = BattleUtility__FloorToInt(v29, 0LL);
LABEL_34:
        v42 = v30;
LABEL_35:
        v31 = value;
LABEL_45:
        v41 = v31;
        goto LABEL_46;
      }
      if ( !FuncList__Check(46, funcEnt->fields.funcType, 0LL) )
      {
        v30 = BattleRandom__getNext(1000, 0LL);
        goto LABEL_34;
      }
    }
    v42 = 0;
    v31 = 1000;
    goto LABEL_45;
  }
  if ( buffEnt )
  {
    data = (BattleData_o *)BattleRandom__getNext(1000, 0LL);
    v23 = (int)data;
    if ( v21 )
    {
      if ( v22 )
      {
        BuffTOLERANCEMagnification = BattleServantData__getBuffTOLERANCEMagnification(
                                       v22,
                                       buffEnt->fields.vals,
                                       v21,
                                       &this->fields.wkStr,
                                       0LL);
        v42 = BattleUtility__FloorToInt((float)(BuffTOLERANCEMagnification * 1000.0) + (float)v23, 0LL);
        v25 = BattleServantData__getBuffGRANTSTATEMagnification(
                v21,
                buffEnt->fields.vals,
                v22,
                &this->fields.wkStr,
                0,
                0LL)
            * 1000.0;
        v26 = (float)value;
LABEL_15:
        InstantDeathRate = BattleUtility__FloorToInt(v25 + v26, 0LL);
LABEL_37:
        v41 = InstantDeathRate;
        goto LABEL_46;
      }
LABEL_51:
      sub_1B64324(data);
    }
    v29 = (float)(int)data;
    goto LABEL_33;
  }
LABEL_46:
  v36 = System_Int32__ToString((int32_t)&v42, 0LL);
  v37 = System_Int32__ToString((int32_t)&v41, 0LL);
  System_String__Concat_61388660(
    (System_String_o *)StringLiteral_17872/*"checkFuncAction("*/,
    v36,
    (System_String_o *)StringLiteral_176/*" < "*/,
    v37,
    0LL);
  return v42 < v41;
}


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
    sub_1B64324(data);
  return HIBYTE(data->fields.commandCodeInfos) != 0;
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
  BattleActionData_o *v13; // x24
  BattleData_o *data; // x0
  BattleServantData_o *v15; // x25
  int32_t Value; // w0
  const MethodInfo *v18; // [xsp+8h] [xbp-58h]

  if ( (byte_49FEE1A & 1) == 0 )
  {
    sub_1B640C8(&BattleActionData_TypeInfo, *(_QWORD *)&targetId);
    byte_49FEE1A = 1;
  }
  v13 = (BattleActionData_o *)sub_1B64314(BattleActionData_TypeInfo, *(_QWORD *)&targetId, funcEnt);
  BattleActionData___ctor(v13, 0LL);
  data = this->fields.data;
  if ( !data || (data = (BattleData_o *)BattleData__getServantData(data, targetId, 0LL), !baseVals) )
    sub_1B64324(data);
  v15 = (BattleServantData_o *)data;
  baseVals->fields.isShowForcedEffect = 1;
  Value = DataVals__GetValue(baseVals, 0LL);
  BattleLogicFunction__SetGainHpBuff(this, v13, Value, funcIndex, v15, funcEnt, baseVals, isCommandSideEffect, 0, v18);
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
  __int64 v13; // x1
  __int64 v14; // x1
  struct BattleLogicFunctionProcess_FunctionUnitCheck_o *funcUnit_k__BackingField; // x8
  DataVals_o *dataVals_k__BackingField; // x26
  BattleActionData_o *v17; // x24
  __int64 v18; // x1
  __int64 v19; // x2
  NpPointToTurnConvert_o *v20; // x28
  __int64 v21; // x1
  __int64 v22; // x2
  NpGaugeAbsorbResult_o *v23; // x27
  const MethodInfo *v24; // x4
  const MethodInfo *v25; // x4
  BattleActionData_o *v26; // x0
  const MethodInfo *v27; // x7
  float Turn_k__BackingField; // s0
  int32_t v29; // w6
  BattleActionData_o *v30; // x0

  v12 = this;
  if ( (byte_49FEE10 & 1) == 0 )
  {
    sub_1B640C8(&BattleActionData_TypeInfo, *(_QWORD *)&targetId);
    sub_1B640C8(&NpGaugeAbsorbResult_TypeInfo, v13);
    this = (BattleLogicFunction_o *)sub_1B640C8(&NpPointToTurnConvert_TypeInfo, v14);
    byte_49FEE10 = 1;
  }
  if ( !funcTarget )
    goto LABEL_12;
  funcUnit_k__BackingField = funcTarget->fields._funcUnit_k__BackingField;
  if ( !funcUnit_k__BackingField )
    goto LABEL_12;
  dataVals_k__BackingField = funcUnit_k__BackingField->fields._dataVals_k__BackingField;
  v17 = (BattleActionData_o *)sub_1B64314(BattleActionData_TypeInfo, *(_QWORD *)&targetId, funcEnt);
  BattleActionData___ctor(v17, 0LL);
  v20 = (NpPointToTurnConvert_o *)sub_1B64314(NpPointToTurnConvert_TypeInfo, v18, v19);
  NpPointToTurnConvert___ctor(v20, 0LL);
  v23 = (NpGaugeAbsorbResult_o *)sub_1B64314(NpGaugeAbsorbResult_TypeInfo, v21, v22);
  NpGaugeAbsorbResult___ctor(v23, (BaseNpGaugeConvert_o *)v20, 0LL);
  this = (BattleLogicFunction_o *)BattleLogicFunction__AbsorbNpTurn(v12, mainAction, funcTarget, v23, v24);
  if ( !v17
    || (BattleActionData__addAction(v17, (BattleActionData_o *)this, 0LL),
        v26 = BattleLogicFunction__AbsorbNpPoint(v12, mainAction, funcTarget, v23, v25),
        BattleActionData__addAction(v17, v26, 0LL),
        !dataVals_k__BackingField)
    || !v23 )
  {
LABEL_12:
    sub_1B64324(this);
  }
  Turn_k__BackingField = v23->fields._Turn_k__BackingField;
  if ( Turn_k__BackingField == INFINITY )
    v29 = 0x80000000;
  else
    v29 = (int)Turn_k__BackingField;
  v30 = BattleLogicFunction__functionHastenNpTurn(
          v12,
          targetId,
          funcEnt,
          dataVals_k__BackingField,
          dataVals_k__BackingField->fields.funcIndex,
          isCommandSideEffect,
          v29,
          v27);
  BattleActionData__addAction(v17, v30, 0LL);
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
  BattleLogicFunction_o *v10; // x21
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
  __int64 v34; // x1
  struct BattleLogicFunctionProcess_FunctionUnitCheck_o *funcUnit_k__BackingField; // x19
  DataVals_o *dataVals_k__BackingField; // x23
  int32_t actorId; // w27
  BuffEntity_o *v38; // x25
  __int64 v39; // x1
  __int64 v40; // x2
  BattleActionData_o *v41; // x19
  BattleServantData_o *v42; // x28
  BattleServantData_o *ServantData; // x26
  __int64 v44; // x1
  __int64 v45; // x2
  __int64 v46; // x27
  const MethodInfo *v47; // x3
  char v48; // w19
  int32_t AdjustmentBuffTurn; // w0
  const MethodInfo *v50; // x4
  char v51; // w22
  bool v52; // w24
  int32_t type; // w19
  const MethodInfo *v54; // x3
  bool isEnemy; // w8
  bool *p_isEnemy; // x19
  char v57; // w9
  BattleLogicFunction_ProcListInArgs_o *v58; // x24
  struct BattleData_o *data; // x8
  int32_t ProgressTurnCond; // w0
  int32_t v61; // w19
  int32_t v62; // w19
  int32_t v63; // w19
  int32_t v64; // w19
  int32_t tdCommandTypeChange; // w8
  __int64 v66; // x0
  int32_t v67; // w2
  int32_t v68; // w3
  __int64 v69; // x22
  __int64 v70; // x1
  __int64 v71; // x19
  int32_t v72; // w19
  struct BattleData_o *v73; // x8
  struct BattleEntity_o *battle_ent; // x8
  int64_t userId; // x24
  int32_t eventId; // w22
  EventPointBuffMaster_o *v77; // x19
  int32_t EventPointGroupId; // w29
  UserEventPointEntity_o *EntityDefinitely; // x0
  int64_t value; // x22
  int logic; // w8
  int v82; // w10
  __int64 v83; // x9
  __int64 v84; // x11
  __int64 v85; // x1
  __int64 v86; // x2
  int v87; // w29
  BattleData_o *v88; // x19
  BattleBuffData_CheckIndividualitiesData_o *v89; // x22
  __int64 v90; // x1
  __int64 v91; // x2
  BattleBuffData_ParamAdd_o *v92; // x24
  BattleBuffData_ParamAdd_o *v93; // x3
  __int64 v94; // x0
  int32_t v95; // w2
  int32_t v96; // w3
  __int64 v97; // x22
  __int64 v98; // x19
  int32_t Param; // w22
  __int64 v100; // x1
  __int64 v101; // x2
  __int64 v102; // x19
  bool v103; // w8
  int v104; // w8
  System_Int32_array *TargetIndiv; // x0
  int32_t v106; // w2
  int32_t v107; // w3
  int32_t v108; // w2
  int32_t v109; // w3
  int32_t v110; // w19
  BattleBuffData_IntervalData_o *IntervalData; // x0
  int32_t v112; // w2
  int32_t v113; // w3
  System_Int32_array *ParamArray; // x0
  int32_t v115; // w2
  int32_t v116; // w3
  int32_t v117; // w19
  int32_t RelationId; // w19
  __int64 v119; // x1
  __int64 v120; // x2
  BattleBuffData_RelationOverwriteData_o *v121; // x22
  int32_t v122; // w2
  int32_t v123; // w3
  BattleDataDefine_c *v124; // x0
  int32_t v125; // w19
  bool v126; // w0
  float UpDownGiveHeal; // s8
  int32_t v128; // w0
  int v129; // s0
  int32_t v130; // w0
  int v131; // s0
  System_Int32_array *v132; // x0
  int32_t v133; // w2
  int32_t v134; // w3
  System_Int32_array *v135; // x0
  int32_t v136; // w2
  int32_t v137; // w3
  System_Int32_array *v138; // x0
  int32_t v139; // w2
  int32_t v140; // w3
  int32_t v141; // w19
  System_Int32_array *UpBuffRateBuffTypeList; // x0
  int32_t v143; // w2
  int32_t v144; // w3
  int32_t ShowStateWarBoardEnemyEquip; // w1
  struct BattleLogicFunction_FunctionArgument_o *externalArg; // x8
  struct BattleData_o *v147; // x8
  System_Int32_array *AddIndividualty; // x0
  int32_t v149; // w2
  int32_t v150; // w3
  System_Int32_array *LinkageTargetIndividualty; // x0
  int32_t v152; // w2
  int32_t v153; // w3
  const MethodInfo *v154; // x3
  struct BattleData_o *v155; // x8
  System_Int32_array *ValsList; // x0
  int32_t v157; // w2
  int32_t v158; // w3
  int32_t v159; // w0
  int v160; // w8
  int v161; // w9
  UnityEngine_Object_o *v162; // x19
  bool v163; // w24
  int32_t v164; // w19
  CommandCodeInfo_o *UserCommandCode; // x0
  int32_t MaxHp; // w22
  int32_t v167; // w19
  __int64 v168; // x4
  int32_t v169; // w19
  bool IsCommandSideEffect; // w0
  const MethodInfo *v171; // x7
  BattleActionData_o *NoEffectObject; // x1
  __int64 v173; // x1
  __int64 v174; // x2
  BattleActionEffect_AddChangeMaxHpBuff_o *v175; // x19
  BattleLogicFunction_o *v176; // x24
  int32_t v177; // w2
  int32_t v178; // w3
  BattleActionEffect_Base_o *v179; // x0
  int32_t id; // w19
  __int64 v181; // x1
  __int64 v182; // x2
  System_Collections_Generic_List_int__o *v183; // x0
  System_String_o *i; // x0
  System_String_o *v185; // x0
  System_String_o *v186; // x0
  System_String_o *v187; // x0
  System_Int32_array *QuestIndividualities; // x0
  UnityEngine_Object_o *v189; // x24
  System_Int32_array *v190; // x19
  BattlePerformance_o *perf; // x2
  struct BattleLogic_o *v192; // x8
  UnityEngine_Object_o *v193; // x19
  int v194; // w8
  BattleLogicFunction_o *v195; // x19
  unsigned int v196; // w24
  System_Int32_array *ShortenMaxCountArray; // x0
  int32_t v198; // w2
  int32_t v199; // w3
  int32_t v200; // w19
  struct BattleData_o *v201; // x8
  __int64 v202; // x1
  __int64 v203; // x2
  BattleBuffData_o *buffData; // x19
  BattleBuffData_CheckIndividualitiesData_o *v205; // x22
  int32_t v206; // w1
  FunctionEntity_o *v207; // x2
  DataVals_o *v208; // x3
  int32_t v209; // w4
  const MethodInfo *v210; // x5
  bool v211; // w0
  BattleActionData_BuffData_o *v212; // x22
  const MethodInfo *v213; // x3
  __int64 v215; // x0
  bool *v216; // [xsp+0h] [xbp-D0h]
  int32_t treasureDvcId; // [xsp+Ch] [xbp-C4h]
  __int64 userCommandCodeId; // [xsp+10h] [xbp-C0h]
  int userCommandCodeIda; // [xsp+10h] [xbp-C0h]
  int32_t funcIndex; // [xsp+1Ch] [xbp-B4h]
  BattleActionData_o *v221; // [xsp+20h] [xbp-B0h]
  BattleActionData_o *v222; // [xsp+28h] [xbp-A8h]
  int32_t v223; // [xsp+34h] [xbp-9Ch]
  FunctionEntity_o *funcEnt; // [xsp+38h] [xbp-98h]
  unsigned int uniqueId; // [xsp+44h] [xbp-8Ch]
  BattleLogicFunction_ProcListInArgs_o *v226; // [xsp+48h] [xbp-88h]
  BattleActionData_MasterBuffData_o *v227; // [xsp+50h] [xbp-80h]
  Il2CppObject *entity; // [xsp+58h] [xbp-78h] BYREF
  int v229; // [xsp+68h] [xbp-68h] BYREF
  bool isSelfTurn; // [xsp+6Ch] [xbp-64h] BYREF

  v10 = this;
  if ( (byte_49FEDED & 1) == 0 )
  {
    sub_1B640C8(&BattleActionEffect_AddChangeMaxHpBuff_TypeInfo, mainAction);
    sub_1B640C8(&BattleActionData_TypeInfo, v11);
    sub_1B640C8(&BattleDataDefine_TypeInfo, v12);
    sub_1B640C8(&BattleBuffData_BuffData___TypeInfo, v13);
    sub_1B640C8(&BattleBuffData_BuffData_TypeInfo, v14);
    sub_1B640C8(&BuffList_TypeInfo, v15);
    sub_1B640C8(&BattleBuffData_CheckIndividualitiesData_TypeInfo, v16);
    sub_1B640C8(&Method_DataManager_GetMasterData_EventPointBuffMaster___, v17);
    sub_1B640C8(&Method_DataManager_GetMasterData_UserEventPointMaster___, v18);
    sub_1B640C8(&Method_DataManager_GetMaster_BuffTypeDetailMaster___, v19);
    sub_1B640C8(&DataManager_TypeInfo, v20);
    sub_1B640C8(&Method_DataMasterBase_BuffTypeDetailMaster__BuffTypeDetailEntity__int__TryGetEntity__, v21);
    sub_1B640C8(&BattleBuffData_FieldAliveCondData_TypeInfo, v22);
    sub_1B640C8(&int___TypeInfo, v23);
    sub_1B640C8(&Method_System_Collections_Generic_List_int___ctor__, v24);
    sub_1B640C8(&System_Collections_Generic_List_int__TypeInfo, v25);
    sub_1B640C8(&BattleActionData_MasterBuffData_TypeInfo, v26);
    sub_1B640C8(&System_Math_TypeInfo, v27);
    sub_1B640C8(&UnityEngine_Object_TypeInfo, v28);
    sub_1B640C8(&BattleBuffData_ParamAdd_TypeInfo, v29);
    sub_1B640C8(&BattleBuffData_RelationOverwriteData_TypeInfo, v30);
    sub_1B640C8(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v31);
    sub_1B640C8(&StringLiteral_19596/*"functionAddState=>"*/, v32);
    sub_1B640C8(&StringLiteral_13203/*"TAMAMOCAT_STUN_BUFF_ID"*/, v33);
    this = (BattleLogicFunction_o *)sub_1B640C8(&StringLiteral_13204/*"TAMAMOCAT_TREASURE_DEVICE_ID_"*/, v34);
    byte_49FEDED = 1;
  }
  isSelfTurn = 0;
  entity = 0LL;
  v229 = 0;
  if ( !funcTarget )
    goto LABEL_288;
  if ( !mainAction )
    goto LABEL_288;
  funcUnit_k__BackingField = funcTarget->fields._funcUnit_k__BackingField;
  if ( !funcUnit_k__BackingField )
    goto LABEL_288;
  v226 = args;
  dataVals_k__BackingField = funcUnit_k__BackingField->fields._dataVals_k__BackingField;
  if ( !dataVals_k__BackingField )
    goto LABEL_288;
  actorId = mainAction->fields.actorId;
  uniqueId = funcTarget->fields._targetId_k__BackingField;
  funcEnt = dataVals_k__BackingField->fields.funcEnt;
  v38 = (BuffEntity_o *)((__int64 (__fastcall *)(BattleLogicFunctionProcess_FunctionTargetCheck_o *, void *, BattleLogicFunctionProcess_FunctionTargetCheck_o *, BattleLogicFunction_ProcListInArgs_o *, bool, const MethodInfo *))funcTarget->klass->vtable._14_GetFixBuffEntity.method)(
                          funcTarget,
                          funcTarget->klass[1]._1.image,
                          funcTarget,
                          args,
                          shortbuff,
                          method);
  funcIndex = BattleLogicFunctionProcess_FunctionUnitCheck__get_FuncIndex(funcUnit_k__BackingField, 0LL);
  userCommandCodeId = mainAction->fields.userCommandCodeId;
  treasureDvcId = mainAction->fields.treasureDvcId;
  v41 = (BattleActionData_o *)sub_1B64314(BattleActionData_TypeInfo, v39, v40);
  BattleActionData___ctor(v41, 0LL);
  this = (BattleLogicFunction_o *)v10->fields.data;
  if ( !this )
    goto LABEL_288;
  v221 = v41;
  this = (BattleLogicFunction_o *)BattleData__getServantData((BattleData_o *)this, actorId, 0LL);
  if ( !v10->fields.data )
    goto LABEL_288;
  v42 = (BattleServantData_o *)this;
  ServantData = BattleData__getServantData(v10->fields.data, uniqueId, 0LL);
  this = (BattleLogicFunction_o *)((__int64 (__fastcall *)(BattleLogicFunctionProcess_FunctionTargetCheck_o *, Il2CppMethodPointer))funcTarget->klass->vtable._7_MakeActionBuffData.method)(
                                    funcTarget,
                                    funcTarget->klass->vtable._8_AddBuff.methodPtr);
  v227 = (BattleActionData_MasterBuffData_o *)this;
  if ( !v38 )
    goto LABEL_288;
  this = (BattleLogicFunction_o *)BuffEntity__checkBuffType(v38, 142, 0LL);
  if ( ((unsigned __int8)this & 1) != 0 )
  {
    v227 = (BattleActionData_MasterBuffData_o *)sub_1B64314(BattleActionData_MasterBuffData_TypeInfo, v44, v45);
    BattleActionData_MasterBuffData___ctor(v227, funcEnt, 0LL);
  }
  if ( !ServantData )
    goto LABEL_288;
  v223 = actorId;
  if ( !v227 )
    goto LABEL_288;
  v227->fields.targetId = ServantData->fields.uniqueId;
  v227->fields.functionIndex = funcIndex;
  v46 = sub_1B64314(BattleBuffData_BuffData_TypeInfo, v44, v45);
  BattleBuffData_BuffData___ctor((BattleBuffData_BuffData_o *)v46, 0LL);
  if ( !v46 )
    goto LABEL_288;
  *(_DWORD *)(v46 + 16) = v38->fields.id;
  if ( !v226 )
    goto LABEL_288;
  *(_DWORD *)(v46 + 164) = BattleLogicFunction_ProcListInArgs__get_SkillId(v226, 0LL);
  *(_DWORD *)(v46 + 188) = BattleLogicFunction_ProcListInArgs__get_GrantSkillType(v226, 0LL);
  *(_DWORD *)(v46 + 176) = DataVals__GetMotionChange(dataVals_k__BackingField, 0LL);
  *(_DWORD *)(v46 + 20) = 2 * DataVals__GetParam(dataVals_k__BackingField, 1, 0, 0LL);
  BattleBuffData_BuffData__RegisterGeneralParams((BattleBuffData_BuffData_o *)v46, dataVals_k__BackingField, 0LL);
  v48 = mainAction->fields.isReversalShortBuffTurn ^ shortbuff;
  if ( (v48 & 1) != 0 )
    --*(_DWORD *)(v46 + 20);
  AdjustmentBuffTurn = BattleLogicFunction__GetAdjustmentBuffTurn(v10, dataVals_k__BackingField, v42, v47);
  if ( AdjustmentBuffTurn )
  {
    v48 ^= 1u;
    *(_DWORD *)(v46 + 20) += AdjustmentBuffTurn;
  }
  this = (BattleLogicFunction_o *)BattleLogicFunction__IsSvtBuffTurnExtend(v10, uniqueId, v38, v48 & 1, v50);
  v51 = (char)this;
  if ( ((unsigned __int8)this & 1) != 0 )
  {
    v48 ^= 1u;
    ++*(_DWORD *)(v46 + 20);
  }
  *(_DWORD *)(v46 + 68) = v223;
  if ( !funcEnt )
    goto LABEL_288;
  v52 = (v48 ^ Target__isEnemy(funcEnt->fields.targetType, 0LL)) & 1;
  isSelfTurn = v52;
  type = v38->fields.type;
  if ( !BuffList_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(BuffList_TypeInfo);
  this = (BattleLogicFunction_o *)BuffList__IsForceProgressSelfTurnType(type, 0LL);
  if ( ((unsigned __int8)this & 1) != 0 )
  {
    v52 = 1;
    isSelfTurn = 1;
  }
  if ( (v51 & 1) != 0 )
  {
    isEnemy = ServantData->fields.isEnemy;
    p_isEnemy = &ServantData->fields.isEnemy;
    v57 = isEnemy ^ v52 ^ 1;
  }
  else
  {
    BattleLogicFunction__UpdateBuffProgressTurn(v10, v38->fields.type, &isSelfTurn, v54);
    p_isEnemy = &ServantData->fields.isEnemy;
    *(_BYTE *)(v46 + 180) = ServantData->fields.isEnemy ^ isSelfTurn ^ 1;
    this = (BattleLogicFunction_o *)BuffEntity__GetProgressSelfTurn(v38, 0LL);
    if ( ((unsigned int)this & 0x80000000) != 0 )
    {
      v57 = *(_BYTE *)(v46 + 180);
      isEnemy = *p_isEnemy;
      goto LABEL_32;
    }
    isEnemy = *p_isEnemy;
    v57 = *p_isEnemy ^ ((_DWORD)this == 0);
  }
  *(_BYTE *)(v46 + 180) = v57;
LABEL_32:
  *(_BYTE *)(v46 + 192) = v57 ^ isEnemy ^ 1;
  v58 = v226;
  data = v10->fields.data;
  if ( !data )
    goto LABEL_288;
  this = (BattleLogicFunction_o *)data->fields.battleEvent;
  if ( !this )
    goto LABEL_288;
  v216 = p_isEnemy;
  *(_DWORD *)(v46 + 184) = ((__int64 (__fastcall *)(BattleLogicFunction_o *, BuffEntity_o *, Il2CppMethodPointer))this->klass[1].vtable._1_Finalize.method)(
                             this,
                             v38,
                             this->klass[1].vtable._2_GetHashCode.methodPtr);
  ProgressTurnCond = BuffEntity__GetProgressTurnCond(v38, 0LL);
  if ( (ProgressTurnCond & 0x80000000) == 0 )
    *(_DWORD *)(v46 + 184) = ProgressTurnCond;
  *(_DWORD *)(v46 + 24) = DataVals__GetParam(dataVals_k__BackingField, 2, 0, 0LL);
  *(_DWORD *)(v46 + 28) = DataVals__GetParam(dataVals_k__BackingField, 3, 0, 0LL);
  v227->fields.popDelay = DataVals__GetParam(dataVals_k__BackingField, 64, 0, 0LL);
  v61 = v38->fields.type;
  if ( !BuffList_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(BuffList_TypeInfo);
  if ( BuffList__CheckType(143, v61, 0LL) )
    goto LABEL_48;
  v62 = v38->fields.type;
  if ( !BuffList_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(BuffList_TypeInfo);
  if ( BuffList__CheckType(145, v62, 0LL) )
    goto LABEL_48;
  v63 = v38->fields.type;
  if ( !BuffList_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(BuffList_TypeInfo);
  if ( BuffList__CheckType(146, v63, 0LL) )
    goto LABEL_48;
  v64 = v38->fields.type;
  if ( !BuffList_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(BuffList_TypeInfo);
  if ( BuffList__CheckType(147, v64, 0LL) )
  {
LABEL_48:
    tdCommandTypeChange = v226->fields.tdCommandTypeChange;
    if ( (tdCommandTypeChange & 0x80000000) == 0 )
      *(_DWORD *)(v46 + 28) = tdCommandTypeChange;
  }
  *(_DWORD *)(v46 + 52) = DataVals__GetParam(dataVals_k__BackingField, 8, 0, 0LL);
  *(_DWORD *)(v46 + 56) = DataVals__GetParam(dataVals_k__BackingField, 9, 0, 0LL);
  v66 = sub_1B64170(int___TypeInfo, 2LL);
  *(_QWORD *)(v46 + 40) = v66;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)(v46 + 40), v66, v67, v68);
  v69 = *(_QWORD *)(v46 + 40);
  this = (BattleLogicFunction_o *)DataVals__GetParam(dataVals_k__BackingField, 3, 0, 0LL);
  if ( !v69 )
    goto LABEL_288;
  if ( !*(_DWORD *)(v69 + 24) )
    goto LABEL_289;
  *(_DWORD *)(v69 + 32) = (_DWORD)this;
  v71 = *(_QWORD *)(v46 + 40);
  this = (BattleLogicFunction_o *)DataVals__GetParam(dataVals_k__BackingField, 4, 0, 0LL);
  if ( !v71 )
    goto LABEL_288;
  if ( *(_DWORD *)(v71 + 24) <= 1u )
    goto LABEL_289;
  v222 = mainAction;
  *(_DWORD *)(v71 + 36) = (_DWORD)this;
  v72 = v38->fields.type;
  if ( !BuffList_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(BuffList_TypeInfo);
  this = (BattleLogicFunction_o *)BuffList__CheckType(135, v72, 0LL);
  if ( ((unsigned __int8)this & 1) != 0 )
  {
    v73 = v10->fields.data;
    if ( !v73 )
      goto LABEL_288;
    battle_ent = v73->fields.battle_ent;
    if ( !battle_ent )
      goto LABEL_288;
    userId = battle_ent->fields.userId;
    eventId = battle_ent->fields.eventId;
    this = (BattleLogicFunction_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EC03C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !this )
      goto LABEL_288;
    this = (BattleLogicFunction_o *)DataManager__GetMasterData_object_(
                                      (DataManager_o *)this,
                                      (const MethodInfo_2E393EC *)Method_DataManager_GetMasterData_EventPointBuffMaster___);
    if ( !this )
      goto LABEL_288;
    v77 = (EventPointBuffMaster_o *)this;
    EventPointGroupId = EventPointBuffMaster__GetEventPointGroupId(
                          (EventPointBuffMaster_o *)this,
                          eventId,
                          funcEnt->fields.id,
                          0,
                          0LL);
    this = (BattleLogicFunction_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EC03C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !this )
      goto LABEL_288;
    this = (BattleLogicFunction_o *)DataManager__GetMasterData_object_(
                                      (DataManager_o *)this,
                                      (const MethodInfo_2E393EC *)Method_DataManager_GetMasterData_UserEventPointMaster___);
    if ( !this )
      goto LABEL_288;
    EntityDefinitely = UserEventPointMaster__GetEntityDefinitely(
                         (UserEventPointMaster_o *)this,
                         userId,
                         eventId,
                         EventPointGroupId,
                         0LL);
    v58 = v226;
    if ( EntityDefinitely )
    {
      value = EntityDefinitely->fields.value;
      this = (BattleLogicFunction_o *)EventPointBuffMaster__GetAllEventBuff(
                                        v77,
                                        EntityDefinitely->fields.eventId,
                                        EventPointGroupId,
                                        0LL);
      if ( !this )
        goto LABEL_288;
      logic = (int)this->fields.logic;
      if ( logic >= 1 )
      {
        v82 = 0;
        v83 = 0LL;
        do
        {
          if ( logic == v82 )
            goto LABEL_289;
          v84 = *((_QWORD *)&this->fields.logictarget + v82);
          if ( !v84 )
            goto LABEL_288;
          if ( value < *(int *)(v84 + 28) )
            break;
          ++v82;
          v83 = v84;
        }
        while ( logic != v82 );
        if ( v83 )
          *(_DWORD *)(v46 + 28) += *(_DWORD *)(v83 + 64);
      }
    }
  }
  if ( DataVals__IsExistSnapShotParamAddIndv(dataVals_k__BackingField, 0LL) )
  {
    v87 = *(_DWORD *)(v46 + 28);
    v88 = v10->fields.data;
    v89 = (BattleBuffData_CheckIndividualitiesData_o *)sub_1B64314(
                                                         BattleBuffData_CheckIndividualitiesData_TypeInfo,
                                                         v85,
                                                         v86);
    BattleBuffData_CheckIndividualitiesData___ctor(v89, v42, ServantData, 0LL, 0LL, 0LL, 0LL);
    v92 = (BattleBuffData_ParamAdd_o *)sub_1B64314(BattleBuffData_ParamAdd_TypeInfo, v90, v91);
    BattleBuffData_ParamAdd___ctor_42281244(v92, dataVals_k__BackingField, 0LL);
    v93 = v92;
    v58 = v226;
    *(_DWORD *)(v46 + 28) = BattleBuffData__GetTotalParamAddValue((BattleBuffData_BuffData_o *)v46, v88, v89, v93, 0LL)
                          + v87;
  }
  if ( DataVals__isParam(dataVals_k__BackingField, 26, 0LL) && DataVals__isParam(dataVals_k__BackingField, 27, 0LL) )
  {
    v94 = sub_1B64170(int___TypeInfo, 2LL);
    *(_QWORD *)(v46 + 104) = v94;
    sub_1B6406C((ServantStatusBattleListViewItem_o *)(v46 + 104), v94, v95, v96);
    v97 = *(_QWORD *)(v46 + 104);
    this = (BattleLogicFunction_o *)DataVals__GetParam(dataVals_k__BackingField, 26, 0, 0LL);
    if ( !v97 )
      goto LABEL_288;
    if ( !*(_DWORD *)(v97 + 24) )
      goto LABEL_289;
    *(_DWORD *)(v97 + 32) = (_DWORD)this;
    v98 = *(_QWORD *)(v46 + 104);
    this = (BattleLogicFunction_o *)DataVals__GetParam(dataVals_k__BackingField, 27, 0, 0LL);
    if ( !v98 )
      goto LABEL_288;
    if ( *(_DWORD *)(v98 + 24) <= 1u )
      goto LABEL_289;
    *(_DWORD *)(v98 + 36) = (_DWORD)this;
  }
  *(_DWORD *)(v46 + 64) = DataVals__GetParam(dataVals_k__BackingField, 15, 0, 0LL);
  *(_DWORD *)(v46 + 344) = DataVals__GetClassIconAuraEffectId(dataVals_k__BackingField, 0LL);
  if ( DataVals__GetParam(dataVals_k__BackingField, 11, 0, 0LL) >= 1 )
    *(_DWORD *)(v46 + 60) = v223;
  if ( DataVals__GetParam(dataVals_k__BackingField, 46, 0, 0LL) >= 1 )
    BattleBuffData_BuffData__onState((BattleBuffData_BuffData_o *)v46, 0x8000, 0LL);
  if ( DataVals__GetParam(dataVals_k__BackingField, 50, 0, 0LL) >= 1 )
    BattleBuffData_BuffData__onState((BattleBuffData_BuffData_o *)v46, 0x10000, 0LL);
  if ( DataVals__GetParam(dataVals_k__BackingField, 88, 0, 0LL) >= 1 )
    BattleBuffData_BuffData__onState((BattleBuffData_BuffData_o *)v46, 0x80000, 0LL);
  if ( DataVals__GetParam(dataVals_k__BackingField, 90, 0, 0LL) >= 1 )
    BattleBuffData_BuffData__onState((BattleBuffData_BuffData_o *)v46, 0x100000, 0LL);
  if ( DataVals__GetParam(dataVals_k__BackingField, 65, 0, 0LL) >= 1 )
    BattleBuffData_BuffData__onState((BattleBuffData_BuffData_o *)v46, 0x40000, 0LL);
  if ( DataVals__GetParam(dataVals_k__BackingField, 143, 0, 0LL) >= 1 )
    BattleBuffData_BuffData__onState((BattleBuffData_BuffData_o *)v46, 0x2000000, 0LL);
  if ( DataVals__isParam(dataVals_k__BackingField, 42, 0LL) )
  {
    Param = DataVals__GetParam(dataVals_k__BackingField, 42, 0, 0LL);
    v102 = sub_1B64314(BattleBuffData_FieldAliveCondData_TypeInfo, v100, v101);
    BattleBuffData_FieldAliveCondData___ctor((BattleBuffData_FieldAliveCondData_o *)v102, 0LL);
    if ( !v102 )
      goto LABEL_288;
    v103 = *v216;
    *(_BYTE *)(v102 + 17) = Param > 0;
    *(_BYTE *)(v102 + 16) = v103;
    if ( !System_Math_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(System_Math_TypeInfo);
    if ( Param >= 0 )
      v104 = Param;
    else
      v104 = -Param;
    *(_DWORD *)(v102 + 20) = v104;
    TargetIndiv = BuffEntity__GetTargetIndiv(v38, 0LL);
    *(_QWORD *)(v102 + 24) = TargetIndiv;
    sub_1B6406C((ServantStatusBattleListViewItem_o *)(v102 + 24), (int32_t)TargetIndiv, v106, v107);
    *(_BYTE *)(v102 + 32) = BuffEntity__IsIncludeIgnoreIndividuality(v38, 0LL);
    *(_QWORD *)(v46 + 152) = v102;
    sub_1B6406C((ServantStatusBattleListViewItem_o *)(v46 + 152), v102, v108, v109);
    v58->fields.updateField = 1;
  }
  v110 = v38->fields.type;
  if ( !BuffList_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(BuffList_TypeInfo);
  if ( BuffList__IsIntervalPossibleBuff(v110, 0LL) )
  {
    IntervalData = DataVals__GetIntervalData(dataVals_k__BackingField, 0LL);
    *(_QWORD *)(v46 + 360) = IntervalData;
    sub_1B6406C((ServantStatusBattleListViewItem_o *)(v46 + 360), (int32_t)IntervalData, v112, v113);
  }
  if ( BattleBuffData__CheckInvalidSacrificeIndiv((BattleBuffData_BuffData_o *)v46, 0LL) )
    v58->fields.updateField = 1;
  ParamArray = DataVals__GetParamArray(dataVals_k__BackingField, 114, 0LL);
  *(_QWORD *)(v46 + 328) = ParamArray;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)(v46 + 328), (int32_t)ParamArray, v115, v116);
  *(_DWORD *)(v46 + 208) = BuffEntity__GetCardEffectId(v38, 0LL);
  v117 = v38->fields.type;
  if ( !BuffList_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(BuffList_TypeInfo);
  if ( BuffList__CheckType(144, v117, 0LL) )
  {
    RelationId = BuffEntity__getRelationId(v38, 0LL);
    v121 = (BattleBuffData_RelationOverwriteData_o *)sub_1B64314(
                                                       BattleBuffData_RelationOverwriteData_TypeInfo,
                                                       v119,
                                                       v120);
    BattleBuffData_RelationOverwriteData___ctor(v121, 0LL);
    if ( RelationId >= 1 )
    {
      this = (BattleLogicFunction_o *)BuffEntity__getRelationId(v38, 0LL);
      if ( !v121 )
        goto LABEL_288;
      v121->fields.id = (int)this;
      v124 = BattleDataDefine_TypeInfo;
      if ( !BattleDataDefine_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(BattleDataDefine_TypeInfo);
        v124 = BattleDataDefine_TypeInfo;
      }
      v121->fields.atkPriority = BuffEntity__getAtkRelationPriority(
                                   v38,
                                   v124->static_fields->OVERWRITE_ATK_RATE_PRIORITY,
                                   0LL);
      v121->fields.defPriority = BuffEntity__getDefRelationPriority(
                                   v38,
                                   BattleDataDefine_TypeInfo->static_fields->OVERWRITE_DEF_RATE_PRIORITY,
                                   0LL);
    }
    *(_QWORD *)(v46 + 168) = v121;
    sub_1B6406C((ServantStatusBattleListViewItem_o *)(v46 + 168), (int32_t)v121, v122, v123);
  }
  v125 = v38->fields.type;
  if ( !BuffList_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(BuffList_TypeInfo);
  if ( BuffList__CheckType(154, v125, 0LL) )
  {
    this = (BattleLogicFunction_o *)BattleServantData__get_BuffData(ServantData, 0LL);
    if ( !this )
      goto LABEL_288;
    this = (BattleLogicFunction_o *)this->fields.wkStr;
    if ( !this )
      goto LABEL_288;
    BattleBuffData_SkillRankChangeData__UpdateAddRightAfter((BattleBuffData_SkillRankChangeData_o *)this, 1, 0LL);
    BattleActionData_BuffData__OnUpdateBuffType((BattleActionData_BuffData_o *)v227, 1, 0LL);
  }
  v126 = BuffEntity__checkBuffType(v38, 7, 0LL);
  if ( v42 && v126 )
  {
    UpDownGiveHeal = BattleServantData__getUpDownGiveHeal(v42, ServantData, 0LL);
    v128 = BattleUtility__FloorToInt(UpDownGiveHeal * (float)*(int *)(v46 + 28), 0LL);
    v129 = *(_DWORD *)(v46 + 52);
    *(_DWORD *)(v46 + 28) = v128;
    v130 = BattleUtility__FloorToInt(UpDownGiveHeal * (float)v129, 0LL);
    v131 = *(_DWORD *)(v46 + 56);
    *(_DWORD *)(v46 + 52) = v130;
    *(_DWORD *)(v46 + 56) = BattleUtility__FloorToInt(UpDownGiveHeal * (float)v131, 0LL);
    BattleServantData__getIndividualities(v42, 0LL, 0LL);
  }
  *(_BYTE *)(v46 + 32) = 0;
  *(_BYTE *)(v46 + 33) = BattleLogicFunction_ProcListInArgs__get_IsPassive(v58, 0LL);
  if ( DataVals__isParam(dataVals_k__BackingField, 23, 0LL) )
    *(_BYTE *)(v46 + 33) = 1;
  if ( DataVals__isParam(dataVals_k__BackingField, 24, 0LL) )
    *(_BYTE *)(v46 + 33) = 0;
  if ( dataVals_k__BackingField->fields.flgBoost )
    BattleBuffData_BuffData__onState((BattleBuffData_BuffData_o *)v46, 2, 0LL);
  if ( DataVals__isRatioHpRange(dataVals_k__BackingField, 0LL) )
  {
    *(_DWORD *)(v46 + 72) = DataVals__GetParam(dataVals_k__BackingField, 20, 0, 0LL);
    *(_DWORD *)(v46 + 76) = DataVals__GetParam(dataVals_k__BackingField, 21, 0, 0LL);
    *(_DWORD *)(v46 + 80) = DataVals__GetParam(dataVals_k__BackingField, 30, 0, 0LL);
    *(_DWORD *)(v46 + 84) = DataVals__GetParam(dataVals_k__BackingField, 31, 0, 0LL);
  }
  else if ( DataVals__isParam(dataVals_k__BackingField, 20, 0LL) )
  {
    *(_DWORD *)(v46 + 72) = DataVals__GetParam(dataVals_k__BackingField, 20, 0, 0LL);
  }
  else if ( DataVals__isParam(dataVals_k__BackingField, 21, 0LL) )
  {
    *(_DWORD *)(v46 + 76) = DataVals__GetParam(dataVals_k__BackingField, 21, 0, 0LL);
  }
  if ( DataVals__isParamAddIndividuality(dataVals_k__BackingField, 0LL) )
  {
    v132 = DataVals__GetParamArray(dataVals_k__BackingField, 69, 0LL);
    *(_QWORD *)(v46 + 224) = v132;
    sub_1B6406C((ServantStatusBattleListViewItem_o *)(v46 + 224), (int32_t)v132, v133, v134);
    v135 = DataVals__GetParamArray(dataVals_k__BackingField, 70, 0LL);
    *(_QWORD *)(v46 + 232) = v135;
    sub_1B6406C((ServantStatusBattleListViewItem_o *)(v46 + 232), (int32_t)v135, v136, v137);
    v138 = DataVals__GetParamArray(dataVals_k__BackingField, 71, 0LL);
    *(_QWORD *)(v46 + 240) = v138;
    sub_1B6406C((ServantStatusBattleListViewItem_o *)(v46 + 240), (int32_t)v138, v139, v140);
    *(_DWORD *)(v46 + 248) = DataVals__GetParam(dataVals_k__BackingField, 72, 0, 0LL);
    *(_DWORD *)(v46 + 252) = DataVals__GetParam(dataVals_k__BackingField, 59, 0, 0LL);
    *(_DWORD *)(v46 + 268) = DataVals__GetParam(dataVals_k__BackingField, 60, 0, 0LL);
  }
  if ( DataVals__IsParamAddBattlePoint(dataVals_k__BackingField, 0LL) )
  {
    *(_DWORD *)(v46 + 384) = DataVals__GetParam(dataVals_k__BackingField, 180, 0, 0LL);
    *(_DWORD *)(v46 + 388) = DataVals__GetParam(dataVals_k__BackingField, 181, 0, 0LL);
  }
  v141 = v38->fields.type;
  if ( !BuffList_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(BuffList_TypeInfo);
  if ( BuffList__CheckType(162, v141, 0LL) )
  {
    UpBuffRateBuffTypeList = BuffEntity__GetUpBuffRateBuffTypeList(v38, 0LL);
    *(_QWORD *)(v46 + 256) = UpBuffRateBuffTypeList;
    sub_1B6406C((ServantStatusBattleListViewItem_o *)(v46 + 256), (int32_t)UpBuffRateBuffTypeList, v143, v144);
    *(_DWORD *)(v46 + 264) = BuffEntity__GetMaxBuffRate(v38, 0LL);
  }
  if ( DataVals__isParam(dataVals_k__BackingField, 22, 0LL) )
    BattleBuffData_BuffData__onState((BattleBuffData_BuffData_o *)v46, 64, 0LL);
  if ( DataVals__isParam(dataVals_k__BackingField, 25, 0LL) )
    BattleBuffData_BuffData__onState((BattleBuffData_BuffData_o *)v46, 128, 0LL);
  this = (BattleLogicFunction_o *)DataVals__isShowState(dataVals_k__BackingField, 0LL);
  if ( ((unsigned __int8)this & 1) != 0 )
  {
    ShowStateWarBoardEnemyEquip = DataVals__GetParam(dataVals_k__BackingField, 14, 0, 0LL);
LABEL_154:
    BattleBuffData_BuffData__setShowState((BattleBuffData_BuffData_o *)v46, ShowStateWarBoardEnemyEquip, 0LL);
    goto LABEL_171;
  }
  if ( *(_BYTE *)(v46 + 33) )
  {
    externalArg = v58->fields.externalArg;
    if ( !externalArg )
      goto LABEL_288;
    if ( externalArg->fields.isWarBoard )
    {
      if ( !v42 )
        goto LABEL_288;
      if ( v42->fields.isEnemy && externalArg->fields.grantSkillType == 12 )
      {
        ShowStateWarBoardEnemyEquip = BuffEntity__GetShowStateWarBoardEnemyEquip(v38, 0, 0LL);
        if ( ShowStateWarBoardEnemyEquip )
          goto LABEL_154;
        if ( !DataManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
        this = (BattleLogicFunction_o *)DataManager__GetMaster_object_((const MethodInfo_2E39398 *)Method_DataManager_GetMaster_BuffTypeDetailMaster___);
        if ( !this )
          goto LABEL_288;
        this = (BattleLogicFunction_o *)DataMasterBase_object__object__int___TryGetEntity(
                                          (DataMasterBase_TMaster__TEntity__PKType__o *)this,
                                          &entity,
                                          v38->fields.type,
                                          (const MethodInfo_30D3EF8 *)Method_DataMasterBase_BuffTypeDetailMaster__BuffTypeDetailEntity__int__TryGetEntity__);
        if ( ((unsigned __int8)this & 1) != 0 )
        {
          this = (BattleLogicFunction_o *)entity;
          if ( !entity )
            goto LABEL_288;
          this = (BattleLogicFunction_o *)BuffTypeDetailEntity__GetShowStateWarBoardEnemyEquip(
                                            (BuffTypeDetailEntity_o *)entity,
                                            0,
                                            0LL);
          ShowStateWarBoardEnemyEquip = (int)this;
          if ( (_DWORD)this )
            goto LABEL_154;
        }
      }
    }
    v147 = v10->fields.data;
    if ( !v147 )
      goto LABEL_288;
    this = (BattleLogicFunction_o *)v147->fields.battleEvent;
    if ( !this )
      goto LABEL_288;
    ((void (__fastcall *)(BattleLogicFunction_o *, __int64, Il2CppMethodPointer))this->klass[1].vtable._2_GetHashCode.method)(
      this,
      v46,
      this->klass[1].vtable._3_ToString.methodPtr);
  }
LABEL_171:
  if ( DataVals__IsOpponentOnly(dataVals_k__BackingField, 0LL) )
    BattleBuffData_BuffData__onState((BattleBuffData_BuffData_o *)v46, 2048, 0LL);
  if ( DataVals__isShowCommand(dataVals_k__BackingField, 0LL) )
    BattleBuffData_BuffData__onState((BattleBuffData_BuffData_o *)v46, 512, 0LL);
  if ( DataVals__IsAddIndividualty(dataVals_k__BackingField, 0LL) )
  {
    AddIndividualty = DataVals__GetAddIndividualty(dataVals_k__BackingField, 0LL);
    *(_QWORD *)(v46 + 120) = AddIndividualty;
    sub_1B6406C((ServantStatusBattleListViewItem_o *)(v46 + 120), (int32_t)AddIndividualty, v149, v150);
  }
  if ( DataVals__IsAddLinkageTargetIndividualty(dataVals_k__BackingField, 0LL) )
  {
    LinkageTargetIndividualty = DataVals__GetLinkageTargetIndividualty(dataVals_k__BackingField, 0LL);
    *(_QWORD *)(v46 + 128) = LinkageTargetIndividualty;
    sub_1B6406C((ServantStatusBattleListViewItem_o *)(v46 + 128), (int32_t)LinkageTargetIndividualty, v152, v153);
  }
  this = (BattleLogicFunction_o *)funcTarget->fields._funcUnit_k__BackingField;
  if ( !this )
    goto LABEL_288;
  if ( BattleLogicFunctionProcess_FunctionUnitCheck__HasLinkedFuncUnit(
         (BattleLogicFunctionProcess_FunctionUnitCheck_o *)this,
         0LL)
    && DataVals__IsBehaveAsFamilyBuff(dataVals_k__BackingField, 0LL) )
  {
    BattleLogicFunction__BehaveLinkageBuffAsFamily(v10, (BattleBuffData_BuffData_o *)v46, funcTarget, v154);
  }
  if ( DataVals__isParam(dataVals_k__BackingField, 98, 0LL) )
    BattleBuffData_BuffData__onState((BattleBuffData_BuffData_o *)v46, 0x800000, 0LL);
  if ( DataVals__isParam(dataVals_k__BackingField, 99, 0LL) )
    BattleBuffData_BuffData__onState((BattleBuffData_BuffData_o *)v46, 0x1000000, 0LL);
  if ( BuffEntity__getAppearanceId(v38, 0LL) >= 1 )
  {
    this = (BattleLogicFunction_o *)BattleServantData__isShiftableServant(ServantData, 0LL);
    if ( ((unsigned __int8)this & 1) != 0 )
      goto LABEL_194;
    v155 = v10->fields.data;
    if ( !v155 )
      goto LABEL_288;
    this = (BattleLogicFunction_o *)v155->fields.battleEvent;
    if ( !this )
      goto LABEL_288;
    if ( ((*(__int64 (__fastcall **)(BattleLogicFunction_o *, BattleServantData_o *, _QWORD))&this->klass[1]._2.element_size)(
            this,
            ServantData,
            *(_QWORD *)&this->klass[1]._2.static_fields_size) & 1) != 0
      || BattleServantData__isLogicResultAlive(ServantData, 0LL)
      || BattleServantData__isGuts(ServantData, 0LL) )
    {
LABEL_194:
      BattleBuffData_BuffData__onState((BattleBuffData_BuffData_o *)v46, 256, 0LL);
    }
  }
  *(_BYTE *)(v46 + 370) = DataVals__IsEqualsTo1(dataVals_k__BackingField, 158, 0LL);
  *(_DWORD *)(v46 + 276) = DataVals__GetParam(dataVals_k__BackingField, 92, 0, 0LL);
  *(_DWORD *)(v46 + 280) = DataVals__GetParam(dataVals_k__BackingField, 93, 0, 0LL);
  *(_DWORD *)(v46 + 284) = DataVals__GetParam(dataVals_k__BackingField, 94, 0, 0LL);
  *(_BYTE *)(v46 + 288) = DataVals__GetParam(dataVals_k__BackingField, 95, 0, 0LL) == 1;
  *(_BYTE *)(v46 + 289) = DataVals__GetParam(dataVals_k__BackingField, 96, 0, 0LL) == 1;
  ValsList = DataVals__GetValsList(dataVals_k__BackingField, 100, 0LL);
  *(_QWORD *)(v46 + 304) = ValsList;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)(v46 + 304), (int32_t)ValsList, v157, v158);
  v159 = DataVals__GetParam(dataVals_k__BackingField, 5, 0, 0LL);
  v160 = *(_DWORD *)(v46 + 60);
  if ( v159 )
    v161 = v159;
  else
    v161 = 1000;
  *(_DWORD *)(v46 + 48) = v161;
  if ( v160 < 1 )
    goto LABEL_204;
  v162 = (UnityEngine_Object_o *)v10->fields.logic;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(v162, 0LL, 0LL) )
  {
    this = (BattleLogicFunction_o *)v10->fields.logic;
    if ( !this )
      goto LABEL_288;
    v163 = BattleLogic__checkInField((BattleLogic_o *)this, *(_DWORD *)(v46 + 60), 0LL);
  }
  else
  {
LABEL_204:
    v163 = 1;
  }
  v164 = v38->fields.type;
  if ( !BuffList_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(BuffList_TypeInfo);
  if ( BuffList__CheckAccumulation(v164, 0LL) )
    BattleServantData__resetAccumulationDamage(ServantData, 0LL);
  *(_QWORD *)(v46 + 88) = userCommandCodeId;
  if ( userCommandCodeId >= 1 )
  {
    this = (BattleLogicFunction_o *)v10->fields.data;
    if ( !this )
      goto LABEL_288;
    UserCommandCode = BattleData__getUserCommandCode((BattleData_o *)this, userCommandCodeId, 0LL);
    if ( UserCommandCode )
      *(_DWORD *)(v46 + 160) = UserCommandCode->fields.commandCodeId;
  }
  *(_QWORD *)(v46 + 348) = *(_QWORD *)&v222->fields.commandAssistId;
  ((void (__fastcall *)(BattleLogicFunctionProcess_FunctionTargetCheck_o *, __int64, Il2CppMethodPointer))funcTarget->klass->vtable._6_ApplyPrevSaveBuffData.method)(
    funcTarget,
    v46,
    funcTarget->klass->vtable._7_MakeActionBuffData.methodPtr);
  MaxHp = BattleServantData__getMaxHp(ServantData, 0LL);
  userCommandCodeIda = ((__int64 (__fastcall *)(BattleServantData_o *, Il2CppMethodPointer))ServantData->klass->vtable._9_get_hp.method)(
                         ServantData,
                         ServantData->klass->vtable._10_set_hp.methodPtr);
  if ( !v163 )
    goto LABEL_219;
  v167 = v38->fields.type;
  if ( !BuffList_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(BuffList_TypeInfo);
  if ( BuffList__CheckUpdateHp(v167, 0LL) )
  {
    v227->fields.procType = 2;
    if ( BattleServantData__isLogicResultAlive(ServantData, 0LL) )
    {
      v168 = 1LL;
    }
    else
    {
      if ( BattleServantData__isGuts(ServantData, 0LL) )
      {
        v169 = ServantData->fields.uniqueId;
        IsCommandSideEffect = BattleLogicFunction_ProcListInArgs__get_IsCommandSideEffect(v226, 0LL);
        NoEffectObject = BattleLogicFunction__getNoEffectObject(
                           v10,
                           v169,
                           funcIndex,
                           dataVals_k__BackingField,
                           IsCommandSideEffect,
                           0LL,
                           0LL,
                           v171);
        this = (BattleLogicFunction_o *)v221;
        if ( !v221 )
          goto LABEL_288;
        BattleActionData__addAction(v221, NoEffectObject, 0LL);
      }
      v168 = 0LL;
    }
    ((void (__fastcall *)(BattleLogicFunctionProcess_FunctionTargetCheck_o *, BattleActionData_MasterBuffData_o *, __int64, __int64, __int64, Il2CppMethodPointer))funcTarget->klass->vtable._8_AddBuff.method)(
      funcTarget,
      v227,
      v46,
      1LL,
      v168,
      funcTarget->klass->vtable._9_AfterAddBuffProc.methodPtr);
    this = (BattleLogicFunction_o *)v221;
    if ( !v221 )
      goto LABEL_288;
    BattleActionData__addReflectLogicResultServantId(v221, uniqueId, 0LL);
    v175 = (BattleActionEffect_AddChangeMaxHpBuff_o *)sub_1B64314(
                                                        BattleActionEffect_AddChangeMaxHpBuff_TypeInfo,
                                                        v173,
                                                        v174);
    BattleActionEffect_AddChangeMaxHpBuff___ctor(v175, 0LL);
    this = (BattleLogicFunction_o *)sub_1B64170(BattleBuffData_BuffData___TypeInfo, 1LL);
    if ( !this )
      goto LABEL_288;
    v176 = this;
    this = (BattleLogicFunction_o *)sub_1B64204(v46, this->klass->_1.element_class);
    if ( !this )
    {
      v215 = sub_1B64348(0LL);
      sub_1B641F0(v215, 0LL);
    }
    if ( !LODWORD(v176->fields.logic) )
      goto LABEL_289;
    v176->fields.logictarget = (struct BattleLogicTarget_o *)v46;
    sub_1B6406C((ServantStatusBattleListViewItem_o *)&v176->fields.logictarget, v46, v177, v178);
    this = (BattleLogicFunction_o *)BattleServantData__getNowHp(ServantData, 0LL);
    if ( !v175 )
      goto LABEL_288;
    v179 = (BattleActionEffect_Base_o *)((__int64 (__fastcall *)(BattleActionEffect_AddChangeMaxHpBuff_o *, BattleLogicFunction_o *, _QWORD, _QWORD, Il2CppMethodPointer))v175->klass->vtable._7_InitBuff.method)(
                                          v175,
                                          v176,
                                          uniqueId,
                                          (unsigned int)((_DWORD)this - userCommandCodeIda),
                                          v175->klass->vtable._8_PartialPreActionProc.methodPtr);
    BattleActionData_BuffData__SetActionEffectProc((BattleActionData_BuffData_o *)v227, v179, 0LL);
  }
  else
  {
LABEL_219:
    ((void (__fastcall *)(BattleLogicFunctionProcess_FunctionTargetCheck_o *, BattleActionData_MasterBuffData_o *, __int64, bool, _QWORD, Il2CppMethodPointer))funcTarget->klass->vtable._8_AddBuff.method)(
      funcTarget,
      v227,
      v46,
      v163,
      0LL,
      funcTarget->klass->vtable._9_AfterAddBuffProc.methodPtr);
  }
  id = v38->fields.id;
  if ( id == ConstantMaster__getValue((System_String_o *)StringLiteral_13203/*"TAMAMOCAT_STUN_BUFF_ID"*/, 0LL) )
  {
    v183 = (System_Collections_Generic_List_int__o *)sub_1B64314(
                                                       System_Collections_Generic_List_int__TypeInfo,
                                                       v181,
                                                       v182);
    System_Collections_Generic_List_int____ctor(
      v183,
      (const MethodInfo_348F688 *)Method_System_Collections_Generic_List_int___ctor__);
    v229 = 1;
    for ( i = System_Int32__ToString((int32_t)&v229, 0LL); ; i = System_Int32__ToString((int32_t)&v229, 0LL) )
    {
      v185 = System_String__Concat_61375396((System_String_o *)StringLiteral_13204/*"TAMAMOCAT_TREASURE_DEVICE_ID_"*/, i, 0LL);
      if ( ConstantMaster__getValue(v185, 0LL) == -1 )
        break;
      v186 = System_Int32__ToString((int32_t)&v229, 0LL);
      v187 = System_String__Concat_61375396((System_String_o *)StringLiteral_13204/*"TAMAMOCAT_TREASURE_DEVICE_ID_"*/, v186, 0LL);
      this = (BattleLogicFunction_o *)ConstantMaster__getValue(v187, 0LL);
      if ( (_DWORD)this == treasureDvcId )
      {
        if ( !v42 )
          goto LABEL_288;
        BattleServantData__SetIsSleepWaitMode(v42, 1, 0LL);
      }
      ++v229;
    }
  }
  this = (BattleLogicFunction_o *)v10->fields.data;
  if ( !this )
    goto LABEL_288;
  QuestIndividualities = BattleData__getQuestIndividualities((BattleData_o *)this, 0LL);
  v189 = (UnityEngine_Object_o *)v10->fields.logic;
  v190 = QuestIndividualities;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  this = (BattleLogicFunction_o *)UnityEngine_Object__op_Inequality(v189, 0LL, 0LL);
  perf = 0LL;
  if ( ((unsigned __int8)this & 1) != 0 )
  {
    v192 = v10->fields.logic;
    if ( !v192 )
      goto LABEL_288;
    perf = v192->fields.perf;
  }
  BattleServantData__updateConditionsBuff(ServantData, v190, perf, 0LL);
  if ( BuffEntity__checkBuffType(v38, 133, 0LL) || *(_QWORD *)(v46 + 312) )
  {
    v193 = (UnityEngine_Object_o *)v10->fields.logic;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    if ( UnityEngine_Object__op_Inequality(v193, 0LL, 0LL) )
    {
      this = (BattleLogicFunction_o *)v10->fields.logic;
      if ( !this )
        goto LABEL_288;
      BattleLogic__updateConditionsBuffAll((BattleLogic_o *)this, 0LL);
    }
    this = (BattleLogicFunction_o *)v10->fields.data;
    if ( !this )
      goto LABEL_288;
    this = (BattleLogicFunction_o *)BattleData__getFieldServantList((BattleData_o *)this, 0, 0LL);
    if ( !this )
      goto LABEL_288;
    v194 = (int)this->fields.logic;
    v195 = this;
    if ( v194 >= 1 )
    {
      v196 = 0;
      while ( v196 < v194 )
      {
        this = (BattleLogicFunction_o *)*((_QWORD *)&v195->fields.logictarget + (int)v196);
        if ( !this )
          goto LABEL_288;
        BattleServantData__updateBuff((BattleServantData_o *)this, 1, 1, 0LL);
        v194 = (int)v195->fields.logic;
        if ( (int)++v196 >= v194 )
          goto LABEL_258;
      }
LABEL_289:
      sub_1B6432C(this, v70);
    }
  }
LABEL_258:
  if ( BuffEntity__checkBuffType(v38, 206, 0LL) )
  {
    ShortenMaxCountArray = DataVals__GetShortenMaxCountArray(dataVals_k__BackingField, 0LL);
    *(_QWORD *)(v46 + 392) = ShortenMaxCountArray;
    sub_1B6406C((ServantStatusBattleListViewItem_o *)(v46 + 392), (int32_t)ShortenMaxCountArray, v198, v199);
  }
  this = (BattleLogicFunction_o *)BattleServantData__getMaxHp(ServantData, 0LL);
  if ( (int)this < MaxHp )
  {
    this = (BattleLogicFunction_o *)BuffEntity__checkBuffType(v38, 41, 0LL);
    if ( ((unsigned __int8)this & 1) != 0 )
    {
      v200 = ServantData->fields.maxhp;
      if ( !System_Math_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(System_Math_TypeInfo);
      this = (BattleLogicFunction_o *)System_Math__Max_62194036(0, userCommandCodeIda - v200, 0LL);
      *(_DWORD *)(v46 + 136) = (_DWORD)this;
    }
  }
  v201 = v10->fields.data;
  if ( !v201 )
    goto LABEL_288;
  this = (BattleLogicFunction_o *)v201->fields.battleEvent;
  if ( !this )
    goto LABEL_288;
  *(_BYTE *)(v46 + 212) = (*(__int64 (__fastcall **)(BattleLogicFunction_o *, __int64, BuffEntity_o *, DataVals_o *, _QWORD))&this->klass[1]._2.field_count)(
                            this,
                            v46,
                            v38,
                            dataVals_k__BackingField,
                            *(_QWORD *)&this->klass[1]._2.interfaces_count) & 1;
  if ( BuffEntity__checkBuffType(v38, 140, 0LL) )
  {
    buffData = ServantData->fields.buffData;
    v205 = (BattleBuffData_CheckIndividualitiesData_o *)sub_1B64314(
                                                          BattleBuffData_CheckIndividualitiesData_TypeInfo,
                                                          v202,
                                                          v203);
    BattleBuffData_CheckIndividualitiesData___ctor(v205, ServantData, 0LL, 0LL, 0LL, 0LL, 0LL);
    if ( !buffData )
      goto LABEL_288;
    this = (BattleLogicFunction_o *)BattleBuffData__getBuffList_42092284(buffData, 83, v205, 1, 0, 0LL, 0LL);
    if ( !this )
      goto LABEL_288;
    if ( this->fields.logic )
      BattleLogicFunction__functionResetCommandCard(v10, v206, v207, v208, v209, v210);
  }
  if ( DataVals__IsOnParty(dataVals_k__BackingField, 0LL) )
    *(_DWORD *)(v46 + 272) = v223;
  v211 = BattleLogicFunction_ProcListInArgs__get_IsCommandSideEffect(v226, 0LL);
  v212 = (BattleActionData_BuffData_o *)((__int64 (__fastcall *)(BattleLogicFunctionProcess_FunctionTargetCheck_o *, BattleActionData_MasterBuffData_o *, __int64, FunctionEntity_o *, bool, Il2CppMethodPointer))funcTarget->klass->vtable._11_MakeAddActionBuffData.method)(
                                          funcTarget,
                                          v227,
                                          v46,
                                          funcEnt,
                                          v211,
                                          funcTarget->klass->vtable._12_GetConvertBuffEntity.methodPtr);
  if ( DataVals__IsProgressTurnOnBoard(dataVals_k__BackingField, 0LL) )
    *(_BYTE *)(v46 + 368) = 1;
  if ( DataVals__GetParam(dataVals_k__BackingField, 148, 0, 0LL) > 0
    || BuffEntity__IsDelayRemoveExpiredOnPlayerTurn(v38, 0LL) )
  {
    *(_BYTE *)(v46 + 369) = 1;
  }
  BattleLogicFunction__AfterAddedBuffProcess(v10, ServantData, v38, v213);
  if ( BuffEntity__getDamageRelease(v38, 0LL) >= 1
    && !BattleServantData__isLogicResultAlive(ServantData, 0LL)
    && (this = (BattleLogicFunction_o *)BattleServantData__isGuts(ServantData, 0LL), ((unsigned __int8)this & 1) != 0)
    || (this = (BattleLogicFunction_o *)BuffEntity__getDamageRelease(v38, 0LL), (_DWORD)this == -1) )
  {
    ServantData->fields.isGutsSleepRelease = 0;
  }
  if ( !v221
    || (BattleActionData__setBuffData(v221, v212, dataVals_k__BackingField, 0LL),
        (this = (BattleLogicFunction_o *)v10->fields.data) == 0LL) )
  {
LABEL_288:
    sub_1B64324(this);
  }
  BattleData__AddFreshBuffList((BattleData_o *)this, v212, 0LL);
  BattleActionData__addAction(v222, v221, 0LL);
  ((void (__fastcall *)(BattleLogicFunctionProcess_FunctionTargetCheck_o *, BattleActionData_o *, BattleActionData_BuffData_o *, __int64, Il2CppMethodPointer))funcTarget->klass->vtable._9_AfterAddBuffProc.method)(
    funcTarget,
    v222,
    v212,
    v46,
    funcTarget->klass->vtable._10_MakeWrapTarget.methodPtr);
  return (BattleBuffData_BuffData_o *)v46;
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
  __int64 v16; // x1
  __int64 v17; // x2
  int32_t uniqueId; // w20
  int32_t funcIndex; // w21
  bool IsCommandSideEffect; // w0
  const MethodInfo *v21; // x7
  __int64 v22; // x19
  int32_t v23; // w8
  __int64 v24; // x0
  int32_t v25; // w2
  int32_t v26; // w3
  int32_t v27; // w26
  int32_t v28; // w27
  FunctionEntity_o *funcEnt; // x28
  _BOOL8 v30; // x0
  const MethodInfo *v31; // x6
  __int64 v32; // x1
  __int64 v33; // x2
  BattleActionData_ShiftServant_o *v34; // x19
  __int64 v35; // x1
  __int64 v36; // x2
  SimpleHpData_o *v37; // x25
  __int64 v38; // x1
  __int64 v39; // x2
  EnemySimpleHpData_o *v40; // x27
  unsigned int Value; // w0
  int v42; // w0
  int v43; // w24
  int v44; // w28
  int32_t v45; // w29
  int32_t Param; // w0
  __int64 v47; // x1
  __int64 v48; // x2
  SimpleHpData_o *v49; // x26
  unsigned int CurrentShiftPos; // w19
  unsigned int MaxShiftIconPos; // w0
  BattleActionData_ShiftServant_o *v52; // [xsp+8h] [xbp-88h]
  int v53; // [xsp+14h] [xbp-7Ch]
  BattleActionData_o *v54; // [xsp+18h] [xbp-78h]
  BattleLogicFunction_o *v55; // [xsp+28h] [xbp-68h]

  v55 = this;
  if ( (byte_49FEE17 & 1) == 0 )
  {
    sub_1B640C8(&BattleActionData_TypeInfo, mainAction);
    sub_1B640C8(&EnemySimpleHpData_TypeInfo, v10);
    sub_1B640C8(&System_Math_TypeInfo, v11);
    sub_1B640C8(&BattleActionData_ShiftServant_TypeInfo, v12);
    this = (BattleLogicFunction_o *)sub_1B640C8(&SimpleHpData_TypeInfo, v13);
    byte_49FEE17 = 1;
  }
  if ( !funcUnit || !targetSvtData )
    goto LABEL_32;
  procArg_k__BackingField = funcUnit->fields._procArg_k__BackingField;
  dataVals_k__BackingField = funcUnit->fields._dataVals_k__BackingField;
  this = (BattleLogicFunction_o *)BattleServantData__isShiftServant(targetSvtData, 0LL);
  if ( ((unsigned __int8)this & 1) == 0 )
    goto LABEL_35;
  if ( !shiftGauge )
    goto LABEL_32;
  this = (BattleLogicFunction_o *)((__int64 (__fastcall *)(BattleActionData_BaseShiftGaugeData_o *, BattleServantData_o *, Il2CppMethodPointer))shiftGauge->klass->vtable._8_unknown.method)(
                                    shiftGauge,
                                    targetSvtData,
                                    shiftGauge->klass->vtable._9_unknown.methodPtr);
  if ( ((unsigned __int8)this & 1) != 0 )
  {
LABEL_35:
    if ( dataVals_k__BackingField )
    {
      if ( procArg_k__BackingField )
      {
        uniqueId = targetSvtData->fields.uniqueId;
        funcIndex = dataVals_k__BackingField->fields.funcIndex;
        IsCommandSideEffect = BattleLogicFunction_ProcListInArgs__get_IsCommandSideEffect(procArg_k__BackingField, 0LL);
        this = (BattleLogicFunction_o *)BattleLogicFunction__getNoEffectObject(
                                          v55,
                                          uniqueId,
                                          funcIndex,
                                          dataVals_k__BackingField,
                                          IsCommandSideEffect,
                                          0LL,
                                          0LL,
                                          v21);
        if ( mainAction )
        {
          BattleActionData__addAction(mainAction, (BattleActionData_o *)this, 0LL);
          return;
        }
      }
    }
    goto LABEL_32;
  }
  v22 = sub_1B64314(BattleActionData_TypeInfo, v16, v17);
  BattleActionData___ctor((BattleActionData_o *)v22, 0LL);
  if ( !v22 )
    goto LABEL_32;
  v23 = targetSvtData->fields.uniqueId;
  *(_DWORD *)(v22 + 32) = v23;
  *(_DWORD *)(v22 + 36) = v23;
  v24 = ((__int64 (__fastcall *)(BattleActionData_BaseShiftGaugeData_o *, Il2CppMethodPointer))shiftGauge->klass->vtable._7_unknown.method)(
          shiftGauge,
          shiftGauge->klass->vtable._8_unknown.methodPtr);
  *(_QWORD *)(v22 + 64) = v24;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)(v22 + 64), v24, v25, v26);
  if ( !dataVals_k__BackingField )
    goto LABEL_32;
  if ( !procArg_k__BackingField )
    goto LABEL_32;
  v27 = dataVals_k__BackingField->fields.funcIndex;
  v28 = targetSvtData->fields.uniqueId;
  funcEnt = dataVals_k__BackingField->fields.funcEnt;
  v30 = BattleLogicFunction_ProcListInArgs__get_IsCommandSideEffect(procArg_k__BackingField, 0LL);
  this = (BattleLogicFunction_o *)BattleLogicFunction__getFunctionObject(
                                    (BattleLogicFunction_o *)v30,
                                    funcEnt,
                                    v28,
                                    v27,
                                    v30,
                                    0LL,
                                    v31);
  if ( !this )
    goto LABEL_32;
  BYTE5(this[1].fields.master) = 0;
  v54 = (BattleActionData_o *)v22;
  BattleActionData__setBuffData((BattleActionData_o *)v22, (BattleActionData_BuffData_o *)this, 0LL, 0LL);
  v34 = (BattleActionData_ShiftServant_o *)sub_1B64314(BattleActionData_ShiftServant_TypeInfo, v32, v33);
  BattleActionData_ShiftServant___ctor(v34, 0, 0LL);
  if ( !v34 )
    goto LABEL_32;
  v52 = v34;
  BattleActionData_ShiftServant__setBeforeSvtData(v34, targetSvtData, 0LL);
  v37 = (SimpleHpData_o *)sub_1B64314(SimpleHpData_TypeInfo, v35, v36);
  SimpleHpData___ctor(v37, targetSvtData, 0LL);
  v40 = (EnemySimpleHpData_o *)sub_1B64314(EnemySimpleHpData_TypeInfo, v38, v39);
  EnemySimpleHpData___ctor(v40, targetSvtData, 0LL);
  ((void (__fastcall *)(BattleActionData_BaseShiftGaugeData_o *, BattleServantData_o *, Il2CppMethodPointer))shiftGauge->klass->vtable._12_Init.method)(
    shiftGauge,
    targetSvtData,
    shiftGauge->klass->vtable._13_InitShiftHpPos.methodPtr);
  Value = DataVals__GetValue(dataVals_k__BackingField, 0LL);
  v42 = ((__int64 (__fastcall *)(BattleActionData_BaseShiftGaugeData_o *, BattleServantData_o *, _QWORD, Il2CppMethodPointer))shiftGauge->klass->vtable._9_unknown.method)(
          shiftGauge,
          targetSvtData,
          Value,
          shiftGauge->klass->vtable._10_unknown.methodPtr);
  v53 = v42;
  if ( v42 >= 0 )
    v43 = v42;
  else
    v43 = -v42;
  v44 = 1;
  if ( v42 < 1 )
    v45 = -1;
  else
    v45 = 1;
  while ( 1 )
  {
    if ( !System_Math_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(System_Math_TypeInfo);
    if ( v44 > v43 )
      break;
    BattleServantData__SetShiftServantChange(targetSvtData, v55->fields.data, v40, v45, 0LL);
    Param = DataVals__GetParam(dataVals_k__BackingField, 58, 0, 0LL);
    ((void (__fastcall *)(BattleActionData_BaseShiftGaugeData_o *, BattleServantData_o *, bool, Il2CppMethodPointer))shiftGauge->klass->vtable._10_unknown.method)(
      shiftGauge,
      targetSvtData,
      Param > 0,
      shiftGauge->klass->vtable._11_unknown.methodPtr);
    v49 = (SimpleHpData_o *)sub_1B64314(SimpleHpData_TypeInfo, v47, v48);
    SimpleHpData___ctor(v49, targetSvtData, 0LL);
    CurrentShiftPos = BattleServantData__GetCurrentShiftPos(targetSvtData, 0LL);
    MaxShiftIconPos = BattleServantData__GetMaxShiftIconPos(targetSvtData, 0LL);
    ((void (__fastcall *)(BattleActionData_BaseShiftGaugeData_o *, _QWORD, _QWORD, SimpleHpData_o *, SimpleHpData_o *, Il2CppMethodPointer))shiftGauge->klass->vtable._11_unknown.method)(
      shiftGauge,
      CurrentShiftPos,
      MaxShiftIconPos,
      v37,
      v49,
      shiftGauge->klass->vtable._12_Init.methodPtr);
    ++v44;
    v37 = v49;
  }
  if ( v53 )
  {
    this = (BattleLogicFunction_o *)v55->fields.logic;
    if ( !this )
      goto LABEL_32;
    BattleLogic__actEnemyPtPassiveSkill((BattleLogic_o *)this, targetSvtData->fields.uniqueId, 1, 0, 0LL);
  }
  BattleActionData_ShiftServant__setCheckSvtData(v52, targetSvtData, 0LL);
  BattleActionData__setShiftServant(v54, v52, 0LL);
  BattleActionData__SetShiftGauge(v54, shiftGauge, 0LL);
  if ( !mainAction )
LABEL_32:
    sub_1B64324(this);
  BattleActionData__AddAfterActionData(mainAction, v54, 0, 0LL);
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
  __int64 v12; // x1
  __int64 v13; // x1
  __int64 v14; // x1
  __int64 v15; // x1
  __int64 v16; // x1
  __int64 v17; // x1
  __int64 v18; // x1
  __int64 data; // x0
  BattleData_o *v20; // x25
  BattleServantData_o *v21; // x24
  BattleLogicFunction_o *FieldSpace; // x0
  const MethodInfo *v23; // x7
  System_String_o *v24; // x0
  BattleData_o *v25; // x24
  __int64 v26; // x1
  int32_t v27; // w2
  int32_t v28; // w3
  __int64 v29; // x22
  int32_t v30; // w1
  int32_t v31; // w2
  int32_t v32; // w3
  int32_t v33; // w2
  int32_t v34; // w3
  int32_t v35; // w1
  int32_t v36; // w2
  int32_t v37; // w3
  int32_t v38; // w2
  int32_t v39; // w3
  int32_t v40; // w1
  int32_t v41; // w2
  int32_t v42; // w3
  int32_t v43; // w2
  int32_t v44; // w3
  int32_t v45; // w1
  struct BattleData_o *v46; // x8
  struct System_Int32_array *e_entryid; // x8
  char *v48; // x8
  _DWORD *v49; // x8
  int32_t v50; // w22
  int32_t v51; // t1
  BattleServantData_o *v52; // x23
  __int64 v53; // x1
  __int64 v54; // x2
  BattleActionData_o *v55; // x21
  int32_t uniqueId; // w23
  bool isEffectSummon; // w24
  int32_t Value; // [xsp+Ch] [xbp-54h] BYREF
  int32_t index[2]; // [xsp+10h] [xbp-50h] BYREF
  int32_t v61; // [xsp+18h] [xbp-48h] BYREF
  int32_t targetIndex; // [xsp+1Ch] [xbp-44h] BYREF

  if ( (byte_49FEE08 & 1) == 0 )
  {
    sub_1B640C8(&BattleActionData_TypeInfo, *(_QWORD *)&playerId);
    sub_1B640C8(&string___TypeInfo, v12);
    sub_1B640C8(&StringLiteral_17018/*"baseVals.GetValue:"*/, v13);
    sub_1B640C8(&StringLiteral_16006/*"] Index["*/, v14);
    sub_1B640C8(&StringLiteral_363/*" 召喚！NPC["*/, v15);
    sub_1B640C8(&StringLiteral_16009/*"] UniqueID["*/, v16);
    sub_1B640C8(&StringLiteral_19597/*"functionCallServant>"*/, v17);
    sub_1B640C8(&StringLiteral_16000/*"]"*/, v18);
    byte_49FEE08 = 1;
  }
  v61 = 0;
  *(_QWORD *)index = 0LL;
  Value = 0;
  data = (__int64)this->fields.data;
  if ( !data )
    goto LABEL_33;
  data = (__int64)BattleData__getServantData((BattleData_o *)data, playerId, 0LL);
  targetIndex = -1;
  if ( !baseVals )
    goto LABEL_33;
  v20 = this->fields.data;
  v21 = (BattleServantData_o *)data;
  data = DataVals__isCheckEnemyFieldSpace(baseVals, 0LL);
  if ( !v20 )
    goto LABEL_33;
  FieldSpace = (BattleLogicFunction_o *)BattleData__getFieldSpace(v20, playerId, &targetIndex, data & 1, 0LL);
  if ( !(_DWORD)FieldSpace )
    return BattleLogicFunction__getMissObject(
             FieldSpace,
             playerId,
             funcIndex,
             baseVals,
             isCommandSideEffect,
             0LL,
             0LL,
             v23);
  Value = DataVals__GetValue(baseVals, 0LL);
  v24 = System_Int32__ToString((int32_t)&Value, 0LL);
  System_String__Concat_61375396((System_String_o *)StringLiteral_17018/*"baseVals.GetValue:"*/, v24, 0LL);
  v61 = -1;
  if ( playerId == -1 )
  {
    v25 = this->fields.data;
    data = DataVals__GetValue(baseVals, 0LL);
    if ( !v25 )
      goto LABEL_33;
    FieldSpace = (BattleLogicFunction_o *)BattleData__GetEnemySummonId(v25, data, 0LL);
  }
  else
  {
    data = DataVals__GetValue(baseVals, 0LL);
    if ( !v21 )
      goto LABEL_33;
    FieldSpace = (BattleLogicFunction_o *)BattleServantData__getSummonNpcId(v21, data, 0LL);
  }
  v61 = (int)FieldSpace;
  if ( (_DWORD)FieldSpace == -1 )
    return BattleLogicFunction__getMissObject(
             FieldSpace,
             playerId,
             funcIndex,
             baseVals,
             isCommandSideEffect,
             0LL,
             0LL,
             v23);
  data = (__int64)this->fields.data;
  if ( !data )
    goto LABEL_33;
  index[1] = BattleData__getNextUniqueID((BattleData_o *)data, 0LL);
  data = (__int64)this->fields.data;
  if ( !data )
    goto LABEL_33;
  index[0] = BattleData__getNextNextIndex((BattleData_o *)data, 0LL);
  data = sub_1B64170(string___TypeInfo, 7LL);
  if ( !data )
    goto LABEL_33;
  v29 = data;
  if ( !*(_DWORD *)(data + 24) )
    goto LABEL_34;
  v30 = StringLiteral_363/*" 召喚！NPC["*/;
  *(_QWORD *)(data + 32) = StringLiteral_363/*" 召喚！NPC["*/;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)(data + 32), v30, v27, v28);
  data = (__int64)System_Int32__ToString((int32_t)&v61, 0LL);
  if ( *(_DWORD *)(v29 + 24) <= 1u )
    goto LABEL_34;
  *(_QWORD *)(v29 + 40) = data;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)(v29 + 40), data, v31, v32);
  if ( *(_DWORD *)(v29 + 24) <= 2u )
    goto LABEL_34;
  v35 = StringLiteral_16009/*"] UniqueID["*/;
  *(_QWORD *)(v29 + 48) = StringLiteral_16009/*"] UniqueID["*/;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)(v29 + 48), v35, v33, v34);
  data = (__int64)System_Int32__ToString((int32_t)&index[1], 0LL);
  if ( *(_DWORD *)(v29 + 24) <= 3u )
    goto LABEL_34;
  *(_QWORD *)(v29 + 56) = data;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)(v29 + 56), data, v36, v37);
  if ( *(_DWORD *)(v29 + 24) <= 4u
    || (v40 = StringLiteral_16006/*"] Index["*/,
        *(_QWORD *)(v29 + 64) = StringLiteral_16006/*"] Index["*/,
        sub_1B6406C((ServantStatusBattleListViewItem_o *)(v29 + 64), v40, v38, v39),
        data = (__int64)System_Int32__ToString((int32_t)index, 0LL),
        *(_DWORD *)(v29 + 24) <= 5u)
    || (*(_QWORD *)(v29 + 72) = data,
        sub_1B6406C((ServantStatusBattleListViewItem_o *)(v29 + 72), data, v41, v42),
        *(_DWORD *)(v29 + 24) <= 6u) )
  {
LABEL_34:
    sub_1B6432C(data, v26);
  }
  v45 = StringLiteral_16000/*"]"*/;
  *(_QWORD *)(v29 + 80) = StringLiteral_16000/*"]"*/;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)(v29 + 80), v45, v43, v44);
  System_String__Concat_61388924((System_String_array *)v29, 0LL);
  data = (__int64)this->fields.data;
  if ( !data
    || (data = (__int64)BattleData__createSummonEnemyServantData(
                          (BattleData_o *)data,
                          index[1],
                          index[0],
                          v61,
                          0LL,
                          0LL,
                          0LL),
        (v46 = this->fields.data) == 0LL)
    || (e_entryid = v46->fields.e_entryid) == 0LL )
  {
LABEL_33:
    sub_1B64324(data);
  }
  if ( targetIndex >= e_entryid->max_length )
    goto LABEL_34;
  v48 = (char *)e_entryid + 4 * targetIndex;
  v51 = *((_DWORD *)v48 + 8);
  v49 = v48 + 32;
  v50 = v51;
  v52 = (BattleServantData_o *)data;
  if ( !data )
    goto LABEL_33;
  *v49 = *(_DWORD *)(data + 24);
  *(_BYTE *)(data + 468) = 1;
  *(_BYTE *)(data + 533) = 1;
  BattleServantData__SetRemainActionCount((BattleServantData_o *)data, 1, 0LL);
  data = (__int64)this->fields.logic;
  if ( !data )
    goto LABEL_33;
  BattleLogic__addEnemyActPriorityList((BattleLogic_o *)data, v52, 0LL);
  v55 = (BattleActionData_o *)sub_1B64314(BattleActionData_TypeInfo, v53, v54);
  BattleActionData___ctor(v55, 0LL);
  uniqueId = v52->fields.uniqueId;
  isEffectSummon = DataVals__isEffectSummon(baseVals, 0LL);
  data = DataVals__GetCallSvtEffectId(baseVals, 0LL);
  if ( !v55 )
    goto LABEL_33;
  BattleActionData__setSummonServant(v55, uniqueId, v50, funcIndex, isEffectSummon, data, 0LL);
  return v55;
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
  int32_t Value; // w21
  int32_t Param; // w22
  int32_t FieldPriority; // w0

  if ( (byte_49FEE0B & 1) == 0 )
  {
    sub_1B640C8(&BattleActionData_TypeInfo, *(_QWORD *)&actionId);
    byte_49FEE0B = 1;
  }
  v8 = (BattleActionData_o *)sub_1B64314(BattleActionData_TypeInfo, *(_QWORD *)&actionId, funcEnt);
  BattleActionData___ctor(v8, 0LL);
  if ( !v8 || (v8->fields.actorId = actionId, !baseVals) )
    sub_1B64324(v9);
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
  __int64 v11; // x1
  BattleData_o *data; // x0
  BattleServantData_o *ServantData; // x22
  __int64 v14; // x1
  __int64 v15; // x2
  BattleActionData_o *v16; // x21
  __int64 v17; // x1
  __int64 v18; // x2
  BattleActionData_ShiftServant_o *v19; // x23

  if ( (byte_49FEE0A & 1) == 0 )
  {
    sub_1B640C8(&BattleActionData_TypeInfo, *(_QWORD *)&actionId);
    sub_1B640C8(&BattleActionData_ShiftServant_TypeInfo, v11);
    byte_49FEE0A = 1;
  }
  data = this->fields.data;
  if ( !data )
    goto LABEL_9;
  ServantData = BattleData__getServantData(data, targetId, 0LL);
  v16 = (BattleActionData_o *)sub_1B64314(BattleActionData_TypeInfo, v14, v15);
  BattleActionData___ctor(v16, 0LL);
  if ( !v16 )
    goto LABEL_9;
  v16->fields.actorId = actionId;
  v19 = (BattleActionData_ShiftServant_o *)sub_1B64314(BattleActionData_ShiftServant_TypeInfo, v17, v18);
  BattleActionData_ShiftServant___ctor(v19, 0, 0LL);
  if ( !v19
    || (BattleActionData_ShiftServant__setBeforeSvtData(v19, ServantData, 0LL), !ServantData)
    || (BattleServantData__setChangeServant(ServantData, this->fields.data, baseVals, 0LL),
        BattleActionData_ShiftServant__setCheckSvtData(v19, ServantData, 0LL),
        BattleActionData__setShiftServant(v16, v19, 0LL),
        (data = (BattleData_o *)this->fields.logic) == 0LL) )
  {
LABEL_9:
    sub_1B64324(data);
  }
  BattleLogic__actEnemyPtPassiveSkill((BattleLogic_o *)data, ServantData->fields.uniqueId, 0, 0, 0LL);
  return v16;
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
  BattleData_o *data; // x0
  BattleServantData_o *v17; // x26
  BattleLogic_o *logic; // x24
  BattleServantData_o *v19; // x25
  BattleActionData_DamageData_o *v20; // x21

  if ( (byte_49FEDF7 & 1) == 0 )
  {
    sub_1B640C8(&BattleActionData_TypeInfo, *(_QWORD *)&playerId);
    byte_49FEDF7 = 1;
  }
  v15 = (BattleActionData_o *)sub_1B64314(BattleActionData_TypeInfo, *(_QWORD *)&playerId, *(_QWORD *)&targetId);
  BattleActionData___ctor(v15, 0LL);
  data = this->fields.data;
  if ( !data )
    goto LABEL_10;
  data = (BattleData_o *)BattleData__getServantData(data, playerId, 0LL);
  if ( !this->fields.data )
    goto LABEL_10;
  v17 = (BattleServantData_o *)data;
  data = (BattleData_o *)BattleData__getServantData(this->fields.data, targetId, 0LL);
  if ( !baseVals
    || (logic = this->fields.logic,
        v19 = (BattleServantData_o *)data,
        data = (BattleData_o *)DataVals__GetValue(baseVals, 0LL),
        !logic)
    || (data = (BattleData_o *)BattleLogic__getFunctionDamagelist(
                                 logic,
                                 v17,
                                 v19,
                                 (int32_t)data,
                                 funcIndex,
                                 action,
                                 isSafe,
                                 0LL)) == 0LL
    || (v20 = (BattleActionData_DamageData_o *)data,
        BattleActionData_DamageData__addAttackSideEffectAction((BattleActionData_DamageData_o *)data, 80, 0LL),
        !v15) )
  {
LABEL_10:
    sub_1B64324(data);
  }
  BattleActionData__SetFuncDamageData(v15, v20, baseVals, 0LL);
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
  BattleData_o *data; // x0
  BattleServantData_o *v17; // x27
  struct BattleData_o *v18; // x8
  const MethodInfo *v19; // x7
  int32_t Value; // w0
  int32_t nexttpturn; // w28
  _BOOL8 TDTurn; // x0
  const MethodInfo *v23; // x6

  if ( (byte_49FEE00 & 1) == 0 )
  {
    sub_1B640C8(&BattleActionData_TypeInfo, *(_QWORD *)&targetId);
    byte_49FEE00 = 1;
  }
  *absorptionCount = 0;
  v15 = (BattleActionData_o *)sub_1B64314(BattleActionData_TypeInfo, *(_QWORD *)&targetId, funcEnt);
  BattleActionData___ctor(v15, 0LL);
  data = this->fields.data;
  if ( !data )
    goto LABEL_22;
  data = (BattleData_o *)BattleData__getServantData(data, targetId, 0LL);
  if ( !data )
    goto LABEL_22;
  v17 = (BattleServantData_o *)data;
  if ( !HIBYTE(data->fields.commandCodeInfos) )
    return 0LL;
  if ( !BattleServantData__isLogicResultAlive((BattleServantData_o *)data, 0LL) && !BattleServantData__isGuts(v17, 0LL) )
  {
    data = (BattleData_o *)BattleServantData__isShiftableServant(v17, 0LL);
    if ( ((unsigned __int8)data & 1) == 0 )
    {
      v18 = this->fields.data;
      if ( !v18 )
        goto LABEL_22;
      data = (BattleData_o *)v18->fields.battleEvent;
      if ( !data )
        goto LABEL_22;
      if ( ((*(__int64 (__fastcall **)(BattleData_o *, BattleServantData_o *, _QWORD))&data->klass[1]._2.initializationExceptionGCHandle)(
              data,
              v17,
              *(_QWORD *)&data->klass[1]._2.cctor_finished) & 1) == 0 )
        return 0LL;
    }
  }
  if ( !BattleServantData__hasTreasureDvc(v17, 0LL) )
    return BattleLogicFunction__getNoEffectObject(
             this,
             targetId,
             funcIndex,
             baseVals,
             isCommandSideEffect,
             0LL,
             0LL,
             v19);
  data = (BattleData_o *)BattleServantData__isTDSeraled(v17, 0LL);
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
    goto LABEL_22;
  Value = DataVals__GetValue(baseVals, 0LL);
  nexttpturn = v17->fields.nexttpturn;
  TDTurn = BattleServantData__updownNextTDTurn(v17, Value, 0LL);
  if ( !TDTurn )
    return BattleLogicFunction__getNoEffectObject(
             this,
             targetId,
             funcIndex,
             baseVals,
             isCommandSideEffect,
             0LL,
             0LL,
             v19);
  data = (BattleData_o *)BattleLogicFunction__getFunctionObject(
                           (BattleLogicFunction_o *)TDTurn,
                           funcEnt,
                           v17->fields.uniqueId,
                           funcIndex,
                           isCommandSideEffect,
                           0LL,
                           v23);
  if ( !data
    || (HIDWORD(data->fields.m_CancellationTokenSource) = 5, *absorptionCount = v17->fields.nexttpturn - nexttpturn,
                                                             !v15) )
  {
LABEL_22:
    sub_1B64324(data);
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
  __int64 v18; // x1
  BattleActionData_o *v19; // x24
  BattleData_o *data; // x0
  BattleServantData_o *v21; // x27
  BattleServantData_o *v22; // x25
  const MethodInfo *v23; // x4
  __int64 v24; // x1
  __int64 v25; // x2
  BattleBuffData_o *buffData; // x28
  BattleBuffData_CheckIndividualitiesData_o *v27; // x29
  char v28; // w27
  struct BattleData_o *v29; // x8
  System_String_o *v30; // x0
  float UpDownGiveHeal; // s0
  const MethodInfo *v33; // [xsp+8h] [xbp-78h]
  int32_t digit; // [xsp+18h] [xbp-68h] BYREF
  int32_t healPoint; // [xsp+1Ch] [xbp-64h] BYREF

  LODWORD(v9) = overwriteHeal;
  if ( (byte_49FEDFA & 1) == 0 )
  {
    sub_1B640C8(&BattleActionData_TypeInfo, *(_QWORD *)&playerId);
    sub_1B640C8(&BattleBuffData_CheckIndividualitiesData_TypeInfo, v17);
    sub_1B640C8(&StringLiteral_19598/*"functionGainHp:"*/, v18);
    byte_49FEDFA = 1;
  }
  digit = 0;
  v19 = (BattleActionData_o *)sub_1B64314(BattleActionData_TypeInfo, *(_QWORD *)&playerId, *(_QWORD *)&targetId);
  BattleActionData___ctor(v19, 0LL);
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
  healPoint = v9;
  data = (BattleData_o *)DataVals__isUnaffected(baseVals, 0LL);
  if ( ((unsigned __int8)data & 1) != 0 )
  {
LABEL_20:
    v28 = 0;
    goto LABEL_21;
  }
  if ( !v22 )
    goto LABEL_26;
  if ( ((__int64 (__fastcall *)(BattleServantData_o *, Il2CppMethodPointer))v22->klass->vtable._13_get_resultHp.method)(
         v22,
         v22->klass->vtable._14_set_resultHp.methodPtr) <= 0 )
  {
    healPoint = 0;
    data = (BattleData_o *)BattleServantData__isShiftableServant(v22, 0LL);
    if ( ((unsigned __int8)data & 1) == 0 )
    {
      v29 = this->fields.data;
      if ( !v29 )
        goto LABEL_26;
      data = (BattleData_o *)v29->fields.battleEvent;
      if ( !data )
        goto LABEL_26;
      data = (BattleData_o *)(*(__int64 (__fastcall **)(BattleData_o *, BattleServantData_o *, _QWORD))&data->klass[1]._2.initializationExceptionGCHandle)(
                               data,
                               v22,
                               *(_QWORD *)&data->klass[1]._2.cctor_finished);
      if ( ((unsigned __int8)data & 1) == 0 )
      {
        data = (BattleData_o *)BattleServantData__isGuts(v22, 0LL);
        LODWORD(v9) = 0;
        v28 = (unsigned __int8)data ^ 1;
        goto LABEL_21;
      }
    }
    LODWORD(v9) = 0;
    goto LABEL_20;
  }
  data = (BattleData_o *)BattleServantData__isShiftReady(v22, 0LL);
  if ( ((unsigned __int8)data & 1) != 0 )
  {
LABEL_14:
    LODWORD(v9) = 0;
    v28 = 0;
    healPoint = 0;
    goto LABEL_21;
  }
  buffData = v22->fields.buffData;
  v27 = (BattleBuffData_CheckIndividualitiesData_o *)sub_1B64314(
                                                       BattleBuffData_CheckIndividualitiesData_TypeInfo,
                                                       v24,
                                                       v25);
  BattleBuffData_CheckIndividualitiesData___ctor(v27, v22, 0LL, 0LL, 0LL, 0LL, 0LL);
  if ( !buffData )
LABEL_26:
    sub_1B64324(data);
  data = (BattleData_o *)BattleBuffData__isTurnBuff(buffData, 42, v27, 1, 0LL);
  if ( ((unsigned __int8)data & 1) != 0 )
    goto LABEL_14;
  if ( v21 )
  {
    UpDownGiveHeal = BattleServantData__getUpDownGiveHeal(v21, v22, 0LL);
    LODWORD(v9) = BattleUtility__FloorToInt(UpDownGiveHeal * (float)(int)v9, 0LL);
    healPoint = v9;
  }
  digit = 1;
  data = (BattleData_o *)BattleServantData__getUpDownHeal(v22, &digit, 0LL);
  v28 = 0;
  v9 = (int)data * (__int64)(int)v9 / digit;
  healPoint = v9;
  baseVals->fields.isShowForcedEffect = 1;
LABEL_21:
  healPoint = BattleLogicFunction__GetActualRecoveryHealPoint((BattleLogicFunction_o *)data, baseVals, v22, v9, v23);
  v30 = System_Int32__ToString((int32_t)&healPoint, 0LL);
  System_String__Concat_61375396((System_String_o *)StringLiteral_19598/*"functionGainHp:"*/, v30, 0LL);
  BattleLogicFunction__SetGainHpBuff(
    this,
    v19,
    healPoint,
    funcIndex,
    v22,
    funcEnt,
    baseVals,
    isCommandSideEffect,
    v28 & 1,
    v33);
  return v19;
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
  __int64 v17; // x1
  __int64 v18; // x2
  System_Collections_Generic_List_T__o *v19; // x25
  struct System_Object_array *items; // x8
  _QWORD *v21; // x9
  __int64 size; // x10
  __int64 v23; // x10
  __int64 v24; // x10
  __int64 v25; // x10
  __int64 v26; // x1
  int logic; // w8
  unsigned int v28; // w19
  int32_t v29; // w25
  DataVals_o *v30; // x28
  const MethodInfo *v31; // x4
  BattleLogicFunction_c *klass; // x8
  BattleLogicFunction_o *v33; // x22
  __int64 v34; // x9
  int32_t *p_offset; // x10
  __int64 v36; // x0
  __int64 v37; // x26
  __int64 v38; // x8
  __int64 v39; // x9
  int *v40; // x10
  __int64 v41; // x0
  __int64 v42; // x8
  __int64 v43; // x9
  int *v44; // x10
  __int64 v45; // x0
  __int64 v46; // x0
  __int64 v47; // x22
  BattleData_o *data; // x0
  int32_t v49; // w22
  BattleServantData_o *ServantData; // x0
  BattleServantData_o *v51; // x24
  BattleLogicFunction_o *Value; // x0
  const MethodInfo *v53; // x3
  int v54; // w25
  int32_t v55; // w8
  int32_t v56; // w27
  bool isRandomDamage; // w19
  int32_t actorId; // w29
  FunctionEntity_o *funcEnt; // x20
  int32_t funcIndex; // w23
  bool IsCommandSideEffect; // w0
  BattleActionData_o *v62; // x27
  int v63; // w19
  int32_t v64; // w20
  bool v65; // w0
  const MethodInfo *v66; // x7
  BattleActionData_o *NoEffectObject; // x1
  __int64 v68; // x8
  __int64 v69; // x9
  int *v70; // x10
  __int64 v71; // x0
  int32_t v72; // w20
  FunctionEntity_o *v73; // x22
  int32_t v74; // w21
  int32_t targetId_k__BackingField; // w23
  bool v76; // w0
  BattleActionData_o *v77; // x1
  const MethodInfo *overwriteLossHp; // [xsp+0h] [xbp-E0h]
  const MethodInfo *v80; // [xsp+18h] [xbp-C8h]
  DataVals_o *dataVals_k__BackingField; // [xsp+20h] [xbp-C0h]
  BattleLogicFunction_o *v83; // [xsp+38h] [xbp-A8h]
  unsigned int v84; // [xsp+40h] [xbp-A0h]
  int32_t v85; // [xsp+44h] [xbp-9Ch]
  BattleActionData_o *v86; // [xsp+48h] [xbp-98h]
  bool v87; // [xsp+54h] [xbp-8Ch]
  BattleLogicFunction_ProcListInArgs_o *v88; // [xsp+58h] [xbp-88h]
  BattleLogicFunction_o *v89; // [xsp+60h] [xbp-80h]
  System_Enum_o v90; // [xsp+68h] [xbp-78h] BYREF
  int32_t funcType; // [xsp+78h] [xbp-68h]

  v6 = procArg;
  v89 = this;
  if ( (byte_49FEE14 & 1) == 0 )
  {
    sub_1B640C8(&BattleActionData_TypeInfo, procArg);
    sub_1B640C8(&System_IDisposable_TypeInfo, v7);
    sub_1B640C8(&System_Collections_Generic_IEnumerable_BattleLogicFunctionProcess_FunctionTargetCheck__TypeInfo, v8);
    sub_1B640C8(&System_Collections_Generic_IEnumerator_BattleLogicFunctionProcess_FunctionTargetCheck__TypeInfo, v9);
    sub_1B640C8(&System_Collections_IEnumerator_TypeInfo, v10);
    sub_1B640C8(&Method_System_Collections_Generic_List_FuncList_TYPE__Add__, v11);
    sub_1B640C8(&Method_System_Collections_Generic_List_FuncList_TYPE___ctor__, v12);
    sub_1B640C8(&System_Collections_Generic_List_FuncList_TYPE__TypeInfo, v13);
    sub_1B640C8(&FuncList_TYPE_TypeInfo, v14);
    this = (BattleLogicFunction_o *)sub_1B640C8(&StringLiteral_16251/*"_SAFE"*/, v15);
    byte_49FEE14 = 1;
  }
  if ( !funcTarget )
    goto LABEL_88;
  funcUnit_k__BackingField = funcTarget->fields._funcUnit_k__BackingField;
  if ( !funcUnit_k__BackingField )
    goto LABEL_88;
  dataVals_k__BackingField = funcUnit_k__BackingField->fields._dataVals_k__BackingField;
  v86 = (BattleActionData_o *)sub_1B64314(BattleActionData_TypeInfo, procArg, mainAction);
  BattleActionData___ctor(v86, 0LL);
  v19 = (System_Collections_Generic_List_T__o *)sub_1B64314(
                                                  System_Collections_Generic_List_FuncList_TYPE__TypeInfo,
                                                  v17,
                                                  v18);
  System_Collections_Generic_List_Int32Enum____ctor(
    v19,
    (const MethodInfo_3491F54 *)Method_System_Collections_Generic_List_FuncList_TYPE___ctor__);
  if ( !v19 )
    goto LABEL_88;
  items = v19->fields._items;
  v21 = Method_System_Collections_Generic_List_FuncList_TYPE__Add__;
  ++v19->fields._version;
  if ( !items )
    goto LABEL_88;
  size = v19->fields._size;
  if ( (unsigned int)size >= items->max_length )
  {
    System_Collections_Generic_List_Int32Enum___AddWithResize(
      v19,
      12,
      *(const MethodInfo_34927A8 **)(*(_QWORD *)(v21[4] + 192LL) + 112LL));
    items = v19->fields._items;
    v21 = Method_System_Collections_Generic_List_FuncList_TYPE__Add__;
    ++v19->fields._version;
    if ( !items )
      goto LABEL_88;
  }
  else
  {
    v19->fields._size = size + 1;
    *((_DWORD *)items->m_Items + size) = 12;
    ++v19->fields._version;
  }
  v23 = v19->fields._size;
  if ( (unsigned int)v23 >= items->max_length )
  {
    System_Collections_Generic_List_Int32Enum___AddWithResize(
      v19,
      25,
      *(const MethodInfo_34927A8 **)(*(_QWORD *)(v21[4] + 192LL) + 112LL));
    items = v19->fields._items;
    v21 = Method_System_Collections_Generic_List_FuncList_TYPE__Add__;
    ++v19->fields._version;
    if ( !items )
      goto LABEL_88;
  }
  else
  {
    v19->fields._size = v23 + 1;
    *((_DWORD *)items->m_Items + v23) = 25;
    ++v19->fields._version;
  }
  v24 = v19->fields._size;
  if ( (unsigned int)v24 >= items->max_length )
  {
    System_Collections_Generic_List_Int32Enum___AddWithResize(
      v19,
      50,
      *(const MethodInfo_34927A8 **)(*(_QWORD *)(v21[4] + 192LL) + 112LL));
    items = v19->fields._items;
    v21 = Method_System_Collections_Generic_List_FuncList_TYPE__Add__;
    ++v19->fields._version;
    if ( !items )
      goto LABEL_88;
  }
  else
  {
    v19->fields._size = v24 + 1;
    *((_DWORD *)items->m_Items + v24) = 50;
    ++v19->fields._version;
  }
  v25 = v19->fields._size;
  if ( (unsigned int)v25 >= items->max_length )
  {
    System_Collections_Generic_List_Int32Enum___AddWithResize(
      v19,
      51,
      *(const MethodInfo_34927A8 **)(*(_QWORD *)(v21[4] + 192LL) + 112LL));
  }
  else
  {
    v19->fields._size = v25 + 1;
    *((_DWORD *)items->m_Items + v25) = 51;
  }
  this = (BattleLogicFunction_o *)dataVals_k__BackingField;
  if ( !dataVals_k__BackingField )
    goto LABEL_88;
  this = (BattleLogicFunction_o *)DataVals__GetDependDataValsArray(
                                    dataVals_k__BackingField,
                                    (System_Collections_Generic_List_FuncList_TYPE__o *)v19,
                                    1,
                                    0LL);
  if ( !this )
    goto LABEL_88;
  logic = (int)this->fields.logic;
  if ( logic < 1 )
  {
    v29 = 0;
    goto LABEL_84;
  }
  v28 = 0;
  v29 = 0;
  v88 = v6;
  v83 = this;
  do
  {
    if ( v28 >= logic )
      sub_1B6432C(this, v26);
    v30 = (DataVals_o *)*((_QWORD *)&this->fields.logictarget + (int)v28);
    if ( !v30 )
      goto LABEL_88;
    v90.klass = (System_Enum_c *)FuncList_TYPE_TypeInfo;
    v90.monitor = (void *)-1LL;
    funcType = v30->fields.funcType;
    this = (BattleLogicFunction_o *)System_Enum__ToString(&v90, 0LL);
    if ( !this )
      goto LABEL_88;
    v87 = System_String__Contains((System_String_o *)this, (System_String_o *)StringLiteral_16251/*"_SAFE"*/, 0LL);
    this = (BattleLogicFunction_o *)BattleLogicFunction__GetDependFuncTargets(v89, v6, mainAction, v30, v31);
    if ( !this )
      goto LABEL_88;
    klass = this->klass;
    v33 = this;
    v34 = *(unsigned __int16 *)(&this->klass->_2.bitflags2 + 3);
    v84 = v28;
    if ( *(_WORD *)(&this->klass->_2.bitflags2 + 3) )
    {
      p_offset = &klass->_1.interfaceOffsets->offset;
      while ( *((System_Collections_Generic_IEnumerable_BattleLogicFunctionProcess_FunctionTargetCheck__c **)p_offset - 1) != System_Collections_Generic_IEnumerable_BattleLogicFunctionProcess_FunctionTargetCheck__TypeInfo )
      {
        --v34;
        p_offset += 4;
        if ( !v34 )
          goto LABEL_31;
      }
      v36 = (__int64)(&klass->vtable._0_Equals.method + 2 * *p_offset);
    }
    else
    {
LABEL_31:
      v36 = sub_1BB60A8(
              this,
              System_Collections_Generic_IEnumerable_BattleLogicFunctionProcess_FunctionTargetCheck__TypeInfo,
              0LL);
    }
    v37 = (*(__int64 (__fastcall **)(BattleLogicFunction_o *, _QWORD))v36)(v33, *(_QWORD *)(v36 + 8));
    if ( !v37 )
      sub_1B64324(0LL);
    v85 = v29;
    while ( 1 )
    {
      v38 = *(_QWORD *)v37;
      v39 = *(unsigned __int16 *)(*(_QWORD *)v37 + 302LL);
      if ( *(_WORD *)(*(_QWORD *)v37 + 302LL) )
      {
        v40 = (int *)(*(_QWORD *)(v38 + 176) + 8LL);
        while ( *((System_Collections_IEnumerator_c **)v40 - 1) != System_Collections_IEnumerator_TypeInfo )
        {
          --v39;
          v40 += 4;
          if ( !v39 )
            goto LABEL_39;
        }
        v41 = v38 + 16LL * *v40 + 312;
      }
      else
      {
LABEL_39:
        v41 = sub_1BB60A8(v37, System_Collections_IEnumerator_TypeInfo, 0LL);
      }
      if ( ((*(__int64 (__fastcall **)(__int64, _QWORD))v41)(v37, *(_QWORD *)(v41 + 8)) & 1) == 0 )
        break;
      v42 = *(_QWORD *)v37;
      v43 = *(unsigned __int16 *)(*(_QWORD *)v37 + 302LL);
      if ( *(_WORD *)(*(_QWORD *)v37 + 302LL) )
      {
        v44 = (int *)(*(_QWORD *)(v42 + 176) + 8LL);
        while ( *((System_Collections_Generic_IEnumerator_BattleLogicFunctionProcess_FunctionTargetCheck__c **)v44 - 1) != System_Collections_Generic_IEnumerator_BattleLogicFunctionProcess_FunctionTargetCheck__TypeInfo )
        {
          --v43;
          v44 += 4;
          if ( !v43 )
            goto LABEL_46;
        }
        v45 = v42 + 16LL * *v44 + 312;
      }
      else
      {
LABEL_46:
        v45 = sub_1BB60A8(
                v37,
                System_Collections_Generic_IEnumerator_BattleLogicFunctionProcess_FunctionTargetCheck__TypeInfo,
                0LL);
      }
      v46 = (*(__int64 (__fastcall **)(__int64, _QWORD))v45)(v37, *(_QWORD *)(v45 + 8));
      v47 = v46;
      if ( !v46 )
        sub_1B64324(0LL);
      if ( ((*(__int64 (__fastcall **)(__int64, BattleActionData_o *, _QWORD))(*(_QWORD *)v46 + 392LL))(
              v46,
              mainAction,
              *(_QWORD *)(*(_QWORD *)v46 + 400LL)) & 1) != 0 )
      {
        data = v89->fields.data;
        if ( !data )
          sub_1B64324(0LL);
        v49 = *(_DWORD *)(v47 + 32);
        ServantData = BattleData__getServantData(data, v49, 0LL);
        v51 = ServantData;
        if ( !ServantData )
          sub_1B64324(0LL);
        Value = (BattleLogicFunction_o *)((__int64 (__fastcall *)(BattleServantData_o *, Il2CppMethodPointer))ServantData->klass->vtable._13_get_resultHp.method)(
                                           ServantData,
                                           ServantData->klass->vtable._14_set_resultHp.methodPtr);
        v54 = (int)Value;
        if ( (int)Value >= 1 )
        {
          v55 = v30->fields.funcType;
          if ( v55 == 12 || v55 == 25 )
          {
            Value = (BattleLogicFunction_o *)DataVals__GetValue(v30, 0LL);
            v56 = (int)Value;
          }
          else
          {
            if ( (v55 & 0xFFFFFFFE) == 50 )
            {
              Value = (BattleLogicFunction_o *)BattleLogicFunction__getHpPerValue(Value, v30, v51, v53);
              v56 = (int)Value;
              isRandomDamage = 0;
              goto LABEL_60;
            }
            v56 = -1;
          }
          isRandomDamage = 1;
LABEL_60:
          if ( !mainAction )
            sub_1B64324(Value);
          if ( !v88 )
            sub_1B64324(0LL);
          actorId = mainAction->fields.actorId;
          funcEnt = v30->fields.funcEnt;
          funcIndex = v30->fields.funcIndex;
          IsCommandSideEffect = BattleLogicFunction_ProcListInArgs__get_IsCommandSideEffect(v88, 0LL);
          v62 = BattleLogicFunction__functionlossHp(
                  v89,
                  actorId,
                  v49,
                  funcEnt,
                  v30,
                  funcIndex,
                  v87,
                  IsCommandSideEffect,
                  v56,
                  isRandomDamage,
                  0LL,
                  v80);
          v63 = v54
              - ((__int64 (__fastcall *)(BattleServantData_o *, Il2CppMethodPointer))v51->klass->vtable._13_get_resultHp.method)(
                  v51,
                  v51->klass->vtable._14_set_resultHp.methodPtr);
          if ( v63 >= 1 )
          {
            if ( !v86 )
              sub_1B64324(0LL);
            BattleActionData__addAction(v86, v62, 0LL);
            v85 += v63;
          }
          else
          {
            v64 = v30->fields.funcIndex;
            v65 = BattleLogicFunction_ProcListInArgs__get_IsCommandSideEffect(v88, 0LL);
            NoEffectObject = BattleLogicFunction__getNoEffectObject(v89, v49, v64, v30, v65, 0LL, 0LL, v66);
            if ( !v86 )
              sub_1B64324(0LL);
            BattleActionData__addAction(v86, NoEffectObject, 0LL);
          }
        }
      }
    }
    v29 = v85;
    v68 = *(_QWORD *)v37;
    v69 = *(unsigned __int16 *)(*(_QWORD *)v37 + 302LL);
    if ( *(_WORD *)(*(_QWORD *)v37 + 302LL) )
    {
      v70 = (int *)(*(_QWORD *)(v68 + 176) + 8LL);
      while ( *((System_IDisposable_c **)v70 - 1) != System_IDisposable_TypeInfo )
      {
        --v69;
        v70 += 4;
        if ( !v69 )
          goto LABEL_71;
      }
      v71 = v68 + 16LL * *v70 + 312;
    }
    else
    {
LABEL_71:
      v71 = sub_1BB60A8(v37, System_IDisposable_TypeInfo, 0LL);
    }
    (*(void (__fastcall **)(__int64, _QWORD))v71)(v37, *(_QWORD *)(v71 + 8));
    v6 = v88;
    this = v83;
    logic = (int)v83->fields.logic;
    v28 = v84 + 1;
  }
  while ( (int)(v84 + 1) < logic );
LABEL_84:
  if ( !mainAction
    || !v6
    || (v72 = dataVals_k__BackingField->fields.funcIndex,
        v73 = dataVals_k__BackingField->fields.funcEnt,
        v74 = mainAction->fields.actorId,
        targetId_k__BackingField = funcTarget->fields._targetId_k__BackingField,
        v76 = BattleLogicFunction_ProcListInArgs__get_IsCommandSideEffect(v6, 0LL),
        v77 = BattleLogicFunction__functionGainHp(
                v89,
                v74,
                targetId_k__BackingField,
                v73,
                dataVals_k__BackingField,
                v72,
                v76,
                v29,
                overwriteLossHp),
        (this = (BattleLogicFunction_o *)v86) == 0LL) )
  {
LABEL_88:
    sub_1B64324(this);
  }
  BattleActionData__addAction(v86, v77, 0LL);
  return v86;
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
  BattleData_o *data; // x0
  BattleServantData_o *v18; // x27
  BattleServantData_o *v19; // x25
  int32_t Value; // w26
  const MethodInfo *v21; // x4
  char v22; // w27
  int v23; // w3
  __int64 v24; // x1
  __int64 v25; // x2
  BattleBuffData_o *buffData; // x28
  BattleBuffData_CheckIndividualitiesData_o *v27; // x29
  float UpDownGiveHeal; // s0
  int32_t UpDownHeal; // w0
  __int64 v30; // x26
  struct BattleData_o *v31; // x8
  int32_t ActualRecoveryHealPoint; // w0
  const MethodInfo *v34; // [xsp+8h] [xbp-78h]
  int32_t digit; // [xsp+1Ch] [xbp-64h] BYREF

  if ( (byte_49FEDFB & 1) == 0 )
  {
    sub_1B640C8(&BattleActionData_TypeInfo, *(_QWORD *)&playerId);
    sub_1B640C8(&BattleBuffData_CheckIndividualitiesData_TypeInfo, v15);
    byte_49FEDFB = 1;
  }
  digit = 0;
  v16 = (BattleActionData_o *)sub_1B64314(BattleActionData_TypeInfo, *(_QWORD *)&playerId, *(_QWORD *)&targetId);
  BattleActionData___ctor(v16, 0LL);
  data = this->fields.data;
  if ( !data )
    goto LABEL_23;
  data = (BattleData_o *)BattleData__getServantData(data, playerId, 0LL);
  if ( !this->fields.data )
    goto LABEL_23;
  v18 = (BattleServantData_o *)data;
  data = (BattleData_o *)BattleData__getServantData(this->fields.data, targetId, 0LL);
  if ( !baseVals )
    goto LABEL_23;
  v19 = (BattleServantData_o *)data;
  baseVals->fields.isShowForcedEffect = 0;
  Value = DataVals__GetValue(baseVals, 0LL);
  data = (BattleData_o *)DataVals__isUnaffected(baseVals, 0LL);
  if ( !v19 )
    goto LABEL_23;
  if ( ((unsigned __int8)data & 1) != 0 )
  {
    data = (BattleData_o *)BattleServantData__getMaxHp(v19, 0LL);
    v22 = 0;
    v23 = (int)data * Value / 1000;
    goto LABEL_21;
  }
  if ( ((__int64 (__fastcall *)(BattleServantData_o *, Il2CppMethodPointer))v19->klass->vtable._13_get_resultHp.method)(
         v19,
         v19->klass->vtable._14_set_resultHp.methodPtr) <= 0 )
  {
    data = (BattleData_o *)BattleServantData__isShiftableServant(v19, 0LL);
    if ( ((unsigned __int8)data & 1) != 0 )
      goto LABEL_20;
    v31 = this->fields.data;
    if ( v31 )
    {
      data = (BattleData_o *)v31->fields.battleEvent;
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
          goto LABEL_21;
        }
        goto LABEL_20;
      }
    }
    goto LABEL_23;
  }
  data = (BattleData_o *)BattleServantData__isShiftReady(v19, 0LL);
  if ( ((unsigned __int8)data & 1) != 0 )
  {
LABEL_20:
    v23 = 0;
    v22 = 0;
    goto LABEL_21;
  }
  buffData = v19->fields.buffData;
  v27 = (BattleBuffData_CheckIndividualitiesData_o *)sub_1B64314(
                                                       BattleBuffData_CheckIndividualitiesData_TypeInfo,
                                                       v24,
                                                       v25);
  BattleBuffData_CheckIndividualitiesData___ctor(v27, v19, 0LL, 0LL, 0LL, 0LL, 0LL);
  if ( !buffData )
LABEL_23:
    sub_1B64324(data);
  data = (BattleData_o *)BattleBuffData__isTurnBuff(buffData, 42, v27, 1, 0LL);
  if ( ((unsigned __int8)data & 1) != 0 )
    goto LABEL_20;
  if ( v18 )
  {
    UpDownGiveHeal = BattleServantData__getUpDownGiveHeal(v18, v19, 0LL);
    Value = BattleUtility__FloorToInt(UpDownGiveHeal * (float)Value, 0LL);
  }
  digit = 1;
  UpDownHeal = BattleServantData__getUpDownHeal(v19, &digit, 0LL);
  v30 = UpDownHeal * (__int64)Value / digit;
  data = (BattleData_o *)BattleServantData__getMaxHp(v19, 0LL);
  v22 = 0;
  v23 = (int)v30 * (int)data / 1000;
  baseVals->fields.isShowForcedEffect = 1;
LABEL_21:
  ActualRecoveryHealPoint = BattleLogicFunction__GetActualRecoveryHealPoint(
                              (BattleLogicFunction_o *)data,
                              baseVals,
                              v19,
                              v23,
                              v21);
  BattleLogicFunction__SetGainHpBuff(
    this,
    v16,
    ActualRecoveryHealPoint,
    funcIndex,
    v19,
    funcEnt,
    baseVals,
    isCommandSideEffect,
    v22 & 1,
    v34);
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
  __int64 v14; // x1
  __int64 v15; // x2
  BattleActionData_o *v16; // x21
  int32_t funcIndex; // w23
  int32_t uniqueId; // w24
  FunctionEntity_o *funcEnt; // x25
  int32_t v20; // w22
  _BOOL8 IsCommandSideEffect; // x0
  const MethodInfo *v22; // x6
  BattleActionData_BuffData_o *v23; // x20
  int32_t v25; // w21
  int32_t v26; // w23
  bool v27; // w4
  const MethodInfo *v28; // x7

  if ( (byte_49FEE13 & 1) == 0 )
  {
    sub_1B640C8(&BattleActionData_TypeInfo, procArg);
    byte_49FEE13 = 1;
  }
  data = this->fields.data;
  if ( !data )
    goto LABEL_18;
  data = (BattleData_o *)BattleData__getServantData(data, targetId, 0LL);
  if ( !data )
    goto LABEL_18;
  v13 = (BattleServantData_o *)data;
  v16 = 0LL;
  if ( !BattleServantData__checkPlayer((BattleServantData_o *)data, 0LL) )
    return v16;
  v16 = (BattleActionData_o *)sub_1B64314(BattleActionData_TypeInfo, v14, v15);
  BattleActionData___ctor(v16, 0LL);
  if ( !baseVals )
LABEL_18:
    sub_1B64324(data);
  data = (BattleData_o *)DataVals__isUnaffected(baseVals, 0LL);
  if ( ((unsigned __int8)data & 1) == 0 )
  {
    data = (BattleData_o *)BattleServantData__getCorrectedValueFuncGainNp(v13, value, 0LL);
    value = (int)data;
  }
  if ( value >= 1 )
  {
    data = (BattleData_o *)BattleServantData__isGainNp(v13, 1, 0LL);
    if ( ((unsigned __int8)data & 1) != 0 )
    {
      data = (BattleData_o *)BattleServantData__addNp(v13, value, 0, 0LL);
      if ( procArg )
      {
        funcIndex = baseVals->fields.funcIndex;
        uniqueId = v13->fields.uniqueId;
        funcEnt = baseVals->fields.funcEnt;
        v20 = (int)data;
        IsCommandSideEffect = BattleLogicFunction_ProcListInArgs__get_IsCommandSideEffect(procArg, 0LL);
        data = (BattleData_o *)BattleLogicFunction__getFunctionObject(
                                 (BattleLogicFunction_o *)IsCommandSideEffect,
                                 funcEnt,
                                 uniqueId,
                                 funcIndex,
                                 IsCommandSideEffect,
                                 0LL,
                                 v22);
        if ( data )
        {
          v23 = (BattleActionData_BuffData_o *)data;
          HIDWORD(data->fields.m_CancellationTokenSource) = 3;
          BattleActionData_BuffData__setSaveNp((BattleActionData_BuffData_o *)data, v20, 0LL);
          if ( v16 )
          {
            BattleActionData__setBuffData(v16, v23, baseVals, 0LL);
            return v16;
          }
        }
      }
      goto LABEL_18;
    }
  }
  if ( !procArg )
    goto LABEL_18;
  v25 = baseVals->fields.funcIndex;
  v26 = v13->fields.uniqueId;
  v27 = BattleLogicFunction_ProcListInArgs__get_IsCommandSideEffect(procArg, 0LL);
  return BattleLogicFunction__getNoEffectObject(this, v26, v25, baseVals, v27, 0LL, 0LL, v28);
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
  __int64 v14; // x1
  __int64 v15; // x2
  NpTurnToPointConvert_o *v16; // x26
  __int64 v17; // x1
  __int64 v18; // x2
  NpGaugeAbsorbResult_o *v19; // x25
  const MethodInfo *v20; // x4
  const MethodInfo *v21; // x4
  BattleActionData_o *v22; // x0
  int32_t v23; // w2
  const MethodInfo *v24; // x6
  float Point_k__BackingField; // s0
  int32_t v26; // w5
  BattleActionData_o *v27; // x0

  v8 = this;
  if ( (byte_49FEE11 & 1) == 0 )
  {
    sub_1B640C8(&BattleActionData_TypeInfo, procArg);
    sub_1B640C8(&NpGaugeAbsorbResult_TypeInfo, v9);
    this = (BattleLogicFunction_o *)sub_1B640C8(&NpTurnToPointConvert_TypeInfo, v10);
    byte_49FEE11 = 1;
  }
  if ( !funcTarget )
    goto LABEL_12;
  funcUnit_k__BackingField = funcTarget->fields._funcUnit_k__BackingField;
  if ( !funcUnit_k__BackingField )
    goto LABEL_12;
  dataVals_k__BackingField = funcUnit_k__BackingField->fields._dataVals_k__BackingField;
  v13 = (BattleActionData_o *)sub_1B64314(BattleActionData_TypeInfo, procArg, mainAction);
  BattleActionData___ctor(v13, 0LL);
  v16 = (NpTurnToPointConvert_o *)sub_1B64314(NpTurnToPointConvert_TypeInfo, v14, v15);
  NpTurnToPointConvert___ctor(v16, 0LL);
  v19 = (NpGaugeAbsorbResult_o *)sub_1B64314(NpGaugeAbsorbResult_TypeInfo, v17, v18);
  NpGaugeAbsorbResult___ctor(v19, (BaseNpGaugeConvert_o *)v16, 0LL);
  this = (BattleLogicFunction_o *)BattleLogicFunction__AbsorbNpPoint(v8, mainAction, funcTarget, v19, v20);
  if ( !v13
    || (BattleActionData__addAction(v13, (BattleActionData_o *)this, 0LL),
        v22 = BattleLogicFunction__AbsorbNpTurn(v8, mainAction, funcTarget, v19, v21),
        BattleActionData__addAction(v13, v22, 0LL),
        !mainAction)
    || !v19 )
  {
LABEL_12:
    sub_1B64324(this);
  }
  Point_k__BackingField = v19->fields._Point_k__BackingField;
  if ( Point_k__BackingField == INFINITY )
    v26 = 0x80000000;
  else
    v26 = (int)Point_k__BackingField;
  v27 = BattleLogicFunction__functionGainNp(
          v8,
          procArg,
          v23,
          funcTarget->fields._targetId_k__BackingField,
          dataVals_k__BackingField,
          v26,
          v24);
  BattleActionData__addAction(v13, v27, 0LL);
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
  BattleData_o *data; // x0
  BattleServantData_o *v17; // x27
  const MethodInfo *v18; // x7
  int32_t Value; // w0
  int32_t v21; // w28
  _BOOL8 isGainNp; // x0
  const MethodInfo *v23; // x6

  if ( (byte_49FEDFF & 1) == 0 )
  {
    sub_1B640C8(&BattleActionData_TypeInfo, *(_QWORD *)&targetId);
    byte_49FEDFF = 1;
  }
  v15 = (BattleActionData_o *)sub_1B64314(BattleActionData_TypeInfo, *(_QWORD *)&targetId, funcEnt);
  BattleActionData___ctor(v15, 0LL);
  data = this->fields.data;
  if ( !data )
    goto LABEL_21;
  data = (BattleData_o *)BattleData__getServantData(data, targetId, 0LL);
  if ( !data )
    goto LABEL_21;
  v17 = (BattleServantData_o *)data;
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
               v18);
    data = (BattleData_o *)BattleServantData__isTDSeraled(v17, 0LL);
    if ( ((unsigned __int8)data & 1) != 0 )
      return BattleLogicFunction__getNoEffectObject(
               this,
               targetId,
               funcIndex,
               baseVals,
               isCommandSideEffect,
               0LL,
               0LL,
               v18);
    if ( !baseVals )
      goto LABEL_21;
    Value = DataVals__GetValue(baseVals, 0LL);
    if ( (absorptionCount & 0x80000000) != 0 )
    {
      v21 = Value;
      isGainNp = BattleServantData__isGainNp(v17, 1, 0LL);
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
                                 0LL,
                                 v23);
        if ( data )
        {
          HIDWORD(data->fields.m_CancellationTokenSource) = 5;
          if ( v15 )
          {
            BattleActionData__setBuffData(v15, (BattleActionData_BuffData_o *)data, baseVals, 0LL);
            return v15;
          }
        }
LABEL_21:
        sub_1B64324(data);
      }
    }
    else if ( !absorptionCount || !BattleServantData__isGainNp(v17, 1, 0LL) )
    {
      return BattleLogicFunction__getNoEffectObject(
               this,
               targetId,
               funcIndex,
               baseVals,
               isCommandSideEffect,
               0LL,
               0LL,
               v18);
    }
    isGainNp = BattleServantData__updownNextTDTurn(v17, -absorptionCount, 0LL);
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
  __int64 v16; // x1
  System_String_o *v17; // x0
  __int64 v18; // x1
  __int64 v19; // x2
  BattleActionData_o *v20; // x25
  BattleData_o *data; // x0
  BattleServantData_o *v22; // x27
  BattleServantData_o *v23; // x28
  unsigned int v24; // w0
  int32_t v25; // w20
  bool IsOpponentPTUniqueID; // w0
  System_Int32_array *v27; // x20
  int32_t v28; // w0
  const MethodInfo *v29; // x6
  struct BattleData_o *v30; // x8
  int32_t v31; // w2
  int32_t uniqueId; // [xsp+Ch] [xbp-64h] BYREF

  uniqueId = targetId;
  if ( (byte_49FEDFE & 1) == 0 )
  {
    sub_1B640C8(&BattleActionData_TypeInfo, *(_QWORD *)&playerId);
    sub_1B640C8(&StringLiteral_19599/*"functionInstantDeath>>:"*/, v16);
    byte_49FEDFE = 1;
  }
  v17 = System_Int32__ToString((int32_t)&uniqueId, 0LL);
  System_String__Concat_61375396((System_String_o *)StringLiteral_19599/*"functionInstantDeath>>:"*/, v17, 0LL);
  v20 = (BattleActionData_o *)sub_1B64314(BattleActionData_TypeInfo, v18, v19);
  BattleActionData___ctor(v20, 0LL);
  data = this->fields.data;
  if ( !data )
    goto LABEL_16;
  data = (BattleData_o *)BattleData__getServantData(data, uniqueId, 0LL);
  if ( !this->fields.data )
    goto LABEL_16;
  v22 = (BattleServantData_o *)data;
  data = (BattleData_o *)BattleData__getServantData(this->fields.data, playerId, 0LL);
  if ( !v22 )
    goto LABEL_16;
  v23 = (BattleServantData_o *)data;
  v24 = ((__int64 (__fastcall *)(BattleServantData_o *, Il2CppMethodPointer))v22->klass->vtable._9_get_hp.method)(
          v22,
          v22->klass->vtable._10_set_hp.methodPtr);
  ((void (__fastcall *)(BattleServantData_o *, _QWORD, Il2CppMethodPointer))v22->klass->vtable._12_set_reducedhp.method)(
    v22,
    v24,
    v22->klass->vtable._13_get_resultHp.methodPtr);
  data = (BattleData_o *)this->fields.logic;
  if ( !data )
    goto LABEL_16;
  data = (BattleData_o *)BattleLogic__getWave((BattleLogic_o *)data, 0LL);
  if ( !this->fields.data )
    goto LABEL_16;
  v25 = (int)data;
  IsOpponentPTUniqueID = BattleData__IsOpponentPTUniqueID(this->fields.data, uniqueId, playerId, 0LL);
  BattleServantData__setActionHistory(v22, playerId, 4, v25, IsOpponentPTUniqueID, 0LL);
  if ( !funcUnit )
    goto LABEL_16;
  v27 = BattleLogicFunctionProcess_FunctionUnitCheck__get_FuncIndividuality(funcUnit, 0LL);
  v28 = ((__int64 (__fastcall *)(BattleServantData_o *, Il2CppMethodPointer))v22->klass->vtable._13_get_resultHp.method)(
          v22,
          v22->klass->vtable._14_set_resultHp.methodPtr);
  BattleServantData__ResultDamage(v22, v28, v23, 0LL, v27, 0, 0LL);
  v30 = this->fields.data;
  if ( !v30 )
    goto LABEL_16;
  v31 = v22->fields.uniqueId;
  v22->fields.deadTurn = v30->fields.typeTurn;
  data = (BattleData_o *)BattleLogicFunction__getFunctionObject(
                           (BattleLogicFunction_o *)data,
                           funcEnt,
                           v31,
                           funcIndex,
                           isCommandSideEffect,
                           0LL,
                           v29);
  if ( !data )
    goto LABEL_16;
  HIDWORD(data->fields.m_CancellationTokenSource) = 1;
  if ( uniqueId == playerId || isNoAccumulation )
    BYTE1(data->fields.battle_info) = 1;
  if ( !v20 )
LABEL_16:
    sub_1B64324(data);
  BattleActionData__setBuffData(v20, (BattleActionData_BuffData_o *)data, baseVals, 0LL);
  return v20;
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
  __int64 v19; // x1
  __int64 v20; // x2
  int32_t v21; // w24
  int32_t v22; // w23
  BattleDataDefine_c *v23; // x0
  float PERCENTAGE_DENOMINATOR; // s0
  int v25; // w8
  int v26; // w24
  int32_t funcIndex; // w21
  int32_t uniqueId; // w22
  FunctionEntity_o *funcEnt; // x25
  _BOOL8 IsCommandSideEffect; // x0
  const MethodInfo *v31; // x6
  BattleActionData_BuffData_o *v32; // x20

  if ( (byte_49FEE12 & 1) == 0 )
  {
    sub_1B640C8(&BattleActionData_TypeInfo, procArg);
    sub_1B640C8(&BattleDataDefine_TypeInfo, v12);
    byte_49FEE12 = 1;
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
        v21 = np - v18;
        *diffNp = v21;
        v22 = v18;
        v23 = BattleDataDefine_TypeInfo;
        if ( !BattleDataDefine_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(BattleDataDefine_TypeInfo);
          v23 = BattleDataDefine_TypeInfo;
        }
        PERCENTAGE_DENOMINATOR = v23->static_fields->PERCENTAGE_DENOMINATOR;
        v25 = (int)PERCENTAGE_DENOMINATOR;
        if ( PERCENTAGE_DENOMINATOR == INFINITY )
          v25 = 0x80000000;
        v26 = v21 % v25;
        if ( v26 >= 1 )
        {
          BattleServantData__addNp(v14, v26, 0, 0LL);
          *diffNp -= v26;
        }
        v15 = (BattleActionData_o *)sub_1B64314(BattleActionData_TypeInfo, v19, v20);
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
                                   v31);
          if ( data )
          {
            v32 = (BattleActionData_BuffData_o *)data;
            HIDWORD(data->fields.m_CancellationTokenSource) = 3;
            BattleActionData_BuffData__setSaveNp((BattleActionData_BuffData_o *)data, v22, 0LL);
            if ( v15 )
            {
              BattleActionData__setBuffData(v15, v32, baseVals, 0LL);
              return v15;
            }
          }
        }
      }
LABEL_20:
      sub_1B64324(data);
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
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x1
  __int64 v12; // x1
  __int64 v13; // x1
  __int64 v14; // x1
  __int64 v15; // x0
  __int64 v16; // x0
  DataManager_o *MasterData_object; // x0
  SkillLvMaster_o *v18; // x22
  struct BattleSkillInfoData_o *skillInfo; // x8
  SkillLvEntity_o *v20; // x22
  int32_t MovePositionUp; // w23
  int32_t MovePositionDown; // w0
  int v23; // w24
  int v24; // w25
  __int64 v25; // x1
  DataManager_c *klass; // x8
  const char *namespaze; // x9
  int i; // w10
  int v29; // w11
  int v30; // w10
  BattleServantData_o *v31; // x23
  struct BattleData_o *data; // x8
  __int64 v33; // x1
  __int64 v34; // x2
  __int64 *v35; // x8
  __int64 v36; // x21
  __int64 v37; // x22
  int32_t v38; // w2
  int32_t v39; // w3

  if ( (byte_49FEE18 & 1) == 0 )
  {
    sub_1B640C8(&BattleActionData_TypeInfo, actionData);
    sub_1B640C8(&Method_DataManager_GetMasterData_SkillLvMaster___, v7);
    sub_1B640C8(&Method_SingletonMonoBehaviour_DataManager__getInstance__, v8);
    sub_1B640C8(&StringLiteral_6376/*"FOCUS_UP_EX"*/, v9);
    sub_1B640C8(&StringLiteral_6374/*"FOCUS_UNDER_EX"*/, v10);
    sub_1B640C8(&StringLiteral_6372/*"FOCUS_CENTER_EX"*/, v11);
    sub_1B640C8(&StringLiteral_6373/*"FOCUS_UNDER"*/, v12);
    sub_1B640C8(&StringLiteral_6371/*"FOCUS_CENTER"*/, v13);
    sub_1B640C8(&StringLiteral_6375/*"FOCUS_UP"*/, v14);
    byte_49FEE18 = 1;
  }
  v15 = *((_QWORD *)Method_SingletonMonoBehaviour_DataManager__getInstance__ + 4);
  if ( (*(_BYTE *)(v15 + 309) & 1) == 0 )
    v15 = sub_1BB5FA4(v15);
  v16 = *(_QWORD *)(*(_QWORD *)(v15 + 192) + 16LL);
  if ( (*(_BYTE *)(v16 + 309) & 1) == 0 )
    v16 = sub_1BB5FA4(v16);
  MasterData_object = **(DataManager_o ***)(v16 + 184);
  if ( !MasterData_object )
    goto LABEL_23;
  MasterData_object = (DataManager_o *)DataManager__GetMasterData_object_(
                                         MasterData_object,
                                         (const MethodInfo_2E393EC *)Method_DataManager_GetMasterData_SkillLvMaster___);
  if ( !actionData )
    goto LABEL_23;
  v18 = (SkillLvMaster_o *)MasterData_object;
  MasterData_object = (DataManager_o *)actionData->fields.skillInfo;
  if ( !MasterData_object )
    goto LABEL_23;
  MasterData_object = (DataManager_o *)((__int64 (__fastcall *)(DataManager_o *, void *))MasterData_object->klass[1]._1.namespaze)(
                                         MasterData_object,
                                         MasterData_object->klass[1]._1.byval_arg.data);
  skillInfo = actionData->fields.skillInfo;
  if ( !skillInfo )
    goto LABEL_23;
  if ( !v18 )
    goto LABEL_23;
  MasterData_object = (DataManager_o *)SkillLvMaster__GetEntity(
                                         v18,
                                         (int32_t)MasterData_object,
                                         skillInfo->fields.skilllv,
                                         0LL);
  if ( !MasterData_object )
    goto LABEL_23;
  v20 = (SkillLvEntity_o *)MasterData_object;
  MovePositionUp = SkillLvEntity__getMovePositionUp((SkillLvEntity_o *)MasterData_object, 0LL);
  MovePositionDown = SkillLvEntity__getMovePositionDown(v20, 0LL);
  if ( (MovePositionUp & MovePositionDown) != -1 )
  {
    v23 = MovePositionDown;
    MasterData_object = (DataManager_o *)this->fields.data;
    if ( !MasterData_object )
      goto LABEL_23;
    MasterData_object = (DataManager_o *)BattleData__getTargetEnemyId((BattleData_o *)MasterData_object, 0, 0LL);
    if ( !this->fields.data )
      goto LABEL_23;
    v24 = (int)MasterData_object;
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
      if ( v24 == *((_DWORD *)&klass->_1.byval_arg.data + i) )
        break;
    }
    v29 = MovePositionUp > 0 ? -MovePositionUp : v23;
    v30 = v29 + i;
    if ( v30 >= 0 && v30 < (int)namespaze )
    {
      if ( v30 >= (unsigned int)namespaze )
LABEL_50:
        sub_1B6432C(MasterData_object, v25);
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
          if ( SkillLvEntity__IsAress(v20, 0LL) )
            v35 = &StringLiteral_6376/*"FOCUS_UP_EX"*/;
          else
            v35 = &StringLiteral_6375/*"FOCUS_UP"*/;
        }
        else if ( BattleServantData__isMultiTargetCore(v31, 0LL) )
        {
          if ( SkillLvEntity__IsAress(v20, 0LL) )
            v35 = &StringLiteral_6372/*"FOCUS_CENTER_EX"*/;
          else
            v35 = &StringLiteral_6371/*"FOCUS_CENTER"*/;
        }
        else
        {
          v36 = 0LL;
          if ( !BattleServantData__isMultiTargetUnder(v31, 0LL) )
          {
LABEL_47:
            v37 = sub_1B64314(BattleActionData_TypeInfo, v33, v34);
            BattleActionData___ctor((BattleActionData_o *)v37, 0LL);
            if ( targetData && v37 )
            {
              *(_DWORD *)(v37 + 32) = targetData->fields.uniqueId;
              *(_DWORD *)(v37 + 36) = actionData->fields.targetId;
              BattleActionData__setStateField((BattleActionData_o *)v37, 0LL);
              *(_QWORD *)(v37 + 64) = v36;
              sub_1B6406C((ServantStatusBattleListViewItem_o *)(v37 + 64), v36, v38, v39);
              BattleActionData__AddAfterActionData(actionData, (BattleActionData_o *)v37, 0, 0LL);
              return;
            }
LABEL_23:
            sub_1B64324(MasterData_object);
          }
          if ( SkillLvEntity__IsAress(v20, 0LL) )
            v35 = &StringLiteral_6374/*"FOCUS_UNDER_EX"*/;
          else
            v35 = &StringLiteral_6373/*"FOCUS_UNDER"*/;
        }
        v36 = *v35;
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
  const MethodInfo *v27; // x4
  struct BattleLogicFunctionProcess_FunctionUnitCheck_o *funcUnit_k__BackingField; // x8
  DataVals_o *dataVals_k__BackingField; // x19
  int32_t targetId_k__BackingField; // w23
  RemovedBuffInfoGroup_o *v31; // x24
  BattleServantData_o *ServantData; // x26
  const MethodInfo *v33; // x4
  System_Collections_Generic_IEnumerable_BattleBuffData_BuffData__o *v34; // x25
  __int64 v35; // x1
  __int64 v36; // x2
  System_Func_object__bool__o *v37; // x27
  System_Collections_Generic_IEnumerable_T__o *v38; // x25
  __int64 v39; // x1
  __int64 v40; // x2
  System_Collections_Generic_HashSet_T__o *v41; // x27
  int32_t v42; // w2
  int32_t v43; // w3
  System_Collections_Generic_IEnumerable_BattleBuffData_BuffData__o *v44; // x24
  __int64 v45; // x1
  __int64 v46; // x2
  System_Func_object__bool__o *v47; // x25
  System_Collections_Generic_IEnumerable_TSource__o *v48; // x0
  __int64 v49; // x1
  __int64 v50; // x2
  RemovedBuffInfoGroup_o *v51; // x25
  System_Collections_Generic_List_int__o *v52; // x28
  __int64 addOrder; // x1
  const MethodInfo *v54; // x2
  int klass; // w8
  BattleLogicFunction_o *v56; // x21
  DataMasterBase_TMaster__TEntity__PKType__o *v57; // x29
  __int64 v58; // x22
  __int64 v59; // x27
  BattleBuffData_ChangeBgmData_o *v60; // x24
  BattleBuffData_BuffData_o *v61; // x20
  struct BattleBuffData_ChangeBgmData_o *changeBgmData; // x8
  const MethodInfo *v63; // x3
  int32_t DispTurn; // w0
  bool isProgressSelfTurn; // w8
  __int64 v66; // x1
  struct System_Int32_array *items; // x8
  _QWORD *v68; // x9
  __int64 size; // x10
  BattleActionData_BuffData_o *v70; // x27
  struct FunctionEntity_o *funcEnt; // x21
  bool v72; // w0
  System_Int32_array *v73; // x0
  int32_t v74; // w2
  int32_t v75; // w3
  int v76; // w22
  int32_t funcIndex; // w20
  bool IsCommandSideEffect; // w0
  const MethodInfo *v79; // x7
  BattleActionData_o *NoEffectObject; // x1
  struct BattleData_o *data; // x8
  BattleFieldEnvironmentData_o *FieldEnvData_k__BackingField; // x19
  BattleLogicFunction___c_c *v83; // x0
  System_Func_object__bool__o *_9__108_2; // x20
  Il2CppObject *v85; // x21
  struct BattleLogicFunction___c_StaticFields *static_fields; // x0
  int32_t v87; // w2
  int32_t v88; // w3
  System_Collections_Generic_IEnumerable_TSource__o *v89; // x0
  __int64 v90; // x1
  __int64 v91; // x2
  BattleActionEffect_ChangeBgmBuff_o *v92; // x19
  BattleLogicFunctionProcess_FunctionTargetCheck_o *v93; // [xsp+0h] [xbp-90h]
  BattleLogicFunction_ProcListInArgs_o *v94; // [xsp+8h] [xbp-88h]
  Il2CppObject *entity; // [xsp+28h] [xbp-68h] BYREF

  if ( (byte_49FEE1C & 1) == 0 )
  {
    sub_1B640C8(&BattleActionData_BuffData_TypeInfo, procArg);
    sub_1B640C8(&BattleActionEffect_ChangeBgmBuff_TypeInfo, v7);
    sub_1B640C8(&Method_DataManager_GetMasterData_BuffMaster___, v8);
    sub_1B640C8(&Method_DataMasterBase_BuffMaster__BuffEntity__int__TryGetEntity__, v9);
    sub_1B640C8(&Method_System_Linq_Enumerable_ToArray_BattleBuffData_BuffData___, v10);
    sub_1B640C8(&Method_System_Linq_Enumerable_Where_BattleBuffData_BuffData___, v11);
    sub_1B640C8(&System_Func_BattleBuffData_BuffData__bool__TypeInfo, v12);
    sub_1B640C8(&Method_System_Collections_Generic_HashSet_BattleBuffData_BuffData___ctor___75638120, v13);
    sub_1B640C8(&System_Collections_Generic_HashSet_BattleBuffData_BuffData__TypeInfo, v14);
    sub_1B640C8(&Method_System_Collections_Generic_List_int__Add__, v15);
    sub_1B640C8(&Method_System_Collections_Generic_List_int__ToArray__, v16);
    sub_1B640C8(&Method_System_Collections_Generic_List_int___ctor__, v17);
    sub_1B640C8(&System_Collections_Generic_List_int__TypeInfo, v18);
    sub_1B640C8(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v19);
    sub_1B640C8(&Method_BattleLogicFunction___c__functionMoveState_b__108_2__, v20);
    sub_1B640C8(&Method_BattleLogicFunction___c__DisplayClass108_0__functionMoveState_b__0__, v21);
    sub_1B640C8(&Method_BattleLogicFunction___c__DisplayClass108_0__functionMoveState_b__1__, v22);
    sub_1B640C8(&BattleLogicFunction___c__DisplayClass108_0_TypeInfo, v23);
    sub_1B640C8(&BattleLogicFunction___c_TypeInfo, v24);
    byte_49FEE1C = 1;
  }
  entity = 0LL;
  v25 = sub_1B64314(BattleLogicFunction___c__DisplayClass108_0_TypeInfo, procArg, mainAction);
  BattleLogicFunction___c__DisplayClass108_0___ctor((BattleLogicFunction___c__DisplayClass108_0_o *)v25, 0LL);
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
                         v27);
  if ( !this->fields.data )
    goto LABEL_64;
  v31 = StealBuffInfoGroup;
  ServantData = BattleData__getServantData(this->fields.data, targetId_k__BackingField, 0LL);
  BattleLogicFunction__ResetFamilyLinkageIdToStolenFamilyBuffs(
    (BattleLogicFunction_o *)ServantData,
    procArg,
    ServantData,
    v31,
    v33);
  if ( !v25 )
    goto LABEL_64;
  v93 = funcTarget;
  v94 = procArg;
  *(_DWORD *)(v25 + 16) = 0x1000000;
  if ( !v31 )
    goto LABEL_64;
  v34 = RemovedBuffInfoGroup__RemovedLinkageBuffEnumerable(v31, 0LL);
  v37 = (System_Func_object__bool__o *)sub_1B64314(System_Func_BattleBuffData_BuffData__bool__TypeInfo, v35, v36);
  System_Func_object__bool____ctor(
    v37,
    (Il2CppObject *)v25,
    Method_BattleLogicFunction___c__DisplayClass108_0__functionMoveState_b__0__,
    0LL);
  v38 = (System_Collections_Generic_IEnumerable_T__o *)System_Linq_Enumerable__Where_object_(
                                                         (System_Collections_Generic_IEnumerable_TSource__o *)v34,
                                                         (System_Func_TSource__bool__o *)v37,
                                                         (const MethodInfo_2E7709C *)Method_System_Linq_Enumerable_Where_BattleBuffData_BuffData___);
  v41 = (System_Collections_Generic_HashSet_T__o *)sub_1B64314(
                                                     System_Collections_Generic_HashSet_BattleBuffData_BuffData__TypeInfo,
                                                     v39,
                                                     v40);
  System_Collections_Generic_HashSet_object____ctor_53911232(
    v41,
    v38,
    (const MethodInfo_3369EC0 *)Method_System_Collections_Generic_HashSet_BattleBuffData_BuffData___ctor___75638120);
  *(_QWORD *)(v25 + 24) = v41;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)(v25 + 24), (int32_t)v41, v42, v43);
  v44 = RemovedBuffInfoGroup__RemovedAllBuffEnumerable(v31, 0LL);
  v47 = (System_Func_object__bool__o *)sub_1B64314(System_Func_BattleBuffData_BuffData__bool__TypeInfo, v45, v46);
  System_Func_object__bool____ctor(
    v47,
    (Il2CppObject *)v25,
    Method_BattleLogicFunction___c__DisplayClass108_0__functionMoveState_b__1__,
    0LL);
  v48 = System_Linq_Enumerable__Where_object_(
          (System_Collections_Generic_IEnumerable_TSource__o *)v44,
          (System_Func_TSource__bool__o *)v47,
          (const MethodInfo_2E7709C *)Method_System_Linq_Enumerable_Where_BattleBuffData_BuffData___);
  StealBuffInfoGroup = (RemovedBuffInfoGroup_o *)System_Linq_Enumerable__ToArray_object_(
                                                   v48,
                                                   (const MethodInfo_2E713C4 *)Method_System_Linq_Enumerable_ToArray_BattleBuffData_BuffData___);
  if ( !StealBuffInfoGroup )
    goto LABEL_64;
  v51 = StealBuffInfoGroup;
  if ( !StealBuffInfoGroup[1].klass )
  {
    if ( dataVals_k__BackingField )
    {
      StealBuffInfoGroup = (RemovedBuffInfoGroup_o *)v94;
      if ( v94 )
      {
        funcIndex = dataVals_k__BackingField->fields.funcIndex;
        IsCommandSideEffect = BattleLogicFunction_ProcListInArgs__get_IsCommandSideEffect(v94, 0LL);
        NoEffectObject = BattleLogicFunction__getNoEffectObject(
                           this,
                           targetId_k__BackingField,
                           funcIndex,
                           dataVals_k__BackingField,
                           IsCommandSideEffect,
                           0LL,
                           0LL,
                           v79);
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
  v52 = (System_Collections_Generic_List_int__o *)sub_1B64314(System_Collections_Generic_List_int__TypeInfo, v49, v50);
  System_Collections_Generic_List_int____ctor(
    v52,
    (const MethodInfo_348F688 *)Method_System_Collections_Generic_List_int___ctor__);
  StealBuffInfoGroup = (RemovedBuffInfoGroup_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EC03C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !StealBuffInfoGroup )
    goto LABEL_64;
  StealBuffInfoGroup = (RemovedBuffInfoGroup_o *)DataManager__GetMasterData_object_(
                                                   (DataManager_o *)StealBuffInfoGroup,
                                                   (const MethodInfo_2E393EC *)Method_DataManager_GetMasterData_BuffMaster___);
  klass = (int)v51[1].klass;
  v56 = this;
  if ( klass < 1 )
  {
    v59 = 0LL;
LABEL_50:
    v76 = 1;
    goto LABEL_51;
  }
  v57 = (DataMasterBase_TMaster__TEntity__PKType__o *)StealBuffInfoGroup;
  v58 = 0LL;
  v59 = 0LL;
  v60 = 0LL;
  do
  {
    if ( (unsigned int)v58 >= klass )
      sub_1B6432C(StealBuffInfoGroup, addOrder);
    v61 = (BattleBuffData_BuffData_o *)*((_QWORD *)&v51[1].monitor + v58);
    if ( !v61 || !v57 )
      goto LABEL_64;
    StealBuffInfoGroup = (RemovedBuffInfoGroup_o *)DataMasterBase_object__object__int___TryGetEntity(
                                                     v57,
                                                     &entity,
                                                     v61->fields.buffId,
                                                     (const MethodInfo_30D3EF8 *)Method_DataMasterBase_BuffMaster__BuffEntity__int__TryGetEntity__);
    if ( ((unsigned __int8)StealBuffInfoGroup & 1) != 0 )
    {
      StealBuffInfoGroup = (RemovedBuffInfoGroup_o *)BattleLogicFunction__IsAddStateFieldFlag(v56, v61, v54);
      if ( !ServantData )
        goto LABEL_64;
      BattleServantData__addBuff(ServantData, v61, (unsigned __int8)StealBuffInfoGroup & 1, 0, 1, 0LL);
      changeBgmData = v61->fields.changeBgmData;
      if ( changeBgmData )
        v60 = v61->fields.changeBgmData;
      if ( changeBgmData )
      {
        if ( !v60 )
          goto LABEL_64;
        BattleBuffData_ChangeBgmData__UpdateUniqueVal(v60, v61->fields.addOrder, ServantData->fields.uniqueId, 0LL);
      }
      StealBuffInfoGroup = (RemovedBuffInfoGroup_o *)entity;
      if ( !entity )
        goto LABEL_64;
      if ( !BuffEntity__IsDisableMoveStateTurnChange((BuffEntity_o *)entity, 0LL) )
      {
        if ( v61->fields.turn <= 0 )
        {
          isProgressSelfTurn = v61->fields.isProgressSelfTurn;
        }
        else
        {
          DispTurn = BattleBuffData_BuffData__get_DispTurn(v61, 0LL);
          isProgressSelfTurn = v61->fields.isProgressSelfTurn;
          v61->fields.turn = 2 * DispTurn - isProgressSelfTurn;
        }
        v61->fields.isProgressEndEnemyTurn = isProgressSelfTurn ^ ServantData->fields.isEnemy ^ 1;
      }
      BattleLogicFunction__AfterAddedBuffProcess(v56, ServantData, (BuffEntity_o *)entity, v63);
      if ( v59 )
      {
        if ( !v52 )
          goto LABEL_64;
        addOrder = (unsigned int)v61->fields.addOrder;
        items = v52->fields._items;
        v68 = Method_System_Collections_Generic_List_int__Add__;
        ++v52->fields._version;
        if ( !items )
          goto LABEL_64;
        size = v52->fields._size;
        if ( (unsigned int)size >= items->max_length )
        {
          System_Collections_Generic_List_int___AddWithResize(
            v52,
            addOrder,
            *(const MethodInfo_348FEDC **)(*(_QWORD *)(v68[4] + 192LL) + 112LL));
        }
        else
        {
          v52->fields._size = size + 1;
          items->m_Items[size + 1] = addOrder;
        }
      }
      else
      {
        v70 = (BattleActionData_BuffData_o *)sub_1B64314(BattleActionData_BuffData_TypeInfo, v66, v54);
        BattleActionData_BuffData___ctor(v70, 0LL);
        if ( !v70 )
          goto LABEL_64;
        v70->fields.targetId = targetId_k__BackingField;
        if ( !dataVals_k__BackingField )
          goto LABEL_64;
        StealBuffInfoGroup = (RemovedBuffInfoGroup_o *)v94;
        v70->fields.functionIndex = dataVals_k__BackingField->fields.funcIndex;
        if ( !v94 )
          goto LABEL_64;
        funcEnt = dataVals_k__BackingField->fields.funcEnt;
        v72 = BattleLogicFunction_ProcListInArgs__get_IsCommandSideEffect(v94, 0LL);
        v59 = ((__int64 (__fastcall *)(BattleLogicFunctionProcess_FunctionTargetCheck_o *, BattleActionData_BuffData_o *, BattleBuffData_BuffData_o *, struct FunctionEntity_o *, bool, Il2CppMethodPointer))v93->klass->vtable._11_MakeAddActionBuffData.method)(
                v93,
                v70,
                v61,
                funcEnt,
                v72,
                v93->klass->vtable._12_GetConvertBuffEntity.methodPtr);
        StealBuffInfoGroup = (RemovedBuffInfoGroup_o *)mainAction;
        if ( !mainAction )
          goto LABEL_64;
        BattleActionData__setBuffData(mainAction, (BattleActionData_BuffData_o *)v59, dataVals_k__BackingField, 0LL);
        v56 = this;
        StealBuffInfoGroup = (RemovedBuffInfoGroup_o *)this->fields.data;
        if ( !StealBuffInfoGroup )
          goto LABEL_64;
        BattleData__AddFreshBuffList((BattleData_o *)StealBuffInfoGroup, (BattleActionData_BuffData_o *)v59, 0LL);
      }
    }
    klass = (int)v51[1].klass;
    ++v58;
  }
  while ( (int)v58 < klass );
  if ( !v59 )
    goto LABEL_50;
  if ( !v52 )
    goto LABEL_64;
  v73 = System_Collections_Generic_List_int___ToArray(
          v52,
          (const MethodInfo_3491A34 *)Method_System_Collections_Generic_List_int__ToArray__);
  *(_QWORD *)(v59 + 152) = v73;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)(v59 + 152), (int32_t)v73, v74, v75);
  v76 = 0;
LABEL_51:
  data = v56->fields.data;
  if ( !data )
    goto LABEL_64;
  FieldEnvData_k__BackingField = data->fields._FieldEnvData_k__BackingField;
  v83 = BattleLogicFunction___c_TypeInfo;
  if ( !BattleLogicFunction___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BattleLogicFunction___c_TypeInfo);
    v83 = BattleLogicFunction___c_TypeInfo;
  }
  _9__108_2 = (System_Func_object__bool__o *)v83->static_fields->__9__108_2;
  if ( !_9__108_2 )
  {
    if ( !v83->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v83);
      v83 = BattleLogicFunction___c_TypeInfo;
    }
    v85 = (Il2CppObject *)v83->static_fields->__9;
    _9__108_2 = (System_Func_object__bool__o *)sub_1B64314(
                                                 System_Func_BattleBuffData_BuffData__bool__TypeInfo,
                                                 addOrder,
                                                 v54);
    System_Func_object__bool____ctor(_9__108_2, v85, Method_BattleLogicFunction___c__functionMoveState_b__108_2__, 0LL);
    static_fields = BattleLogicFunction___c_TypeInfo->static_fields;
    static_fields->__9__108_2 = (struct System_Func_BattleBuffData_BuffData__bool__o *)_9__108_2;
    sub_1B6406C((ServantStatusBattleListViewItem_o *)&static_fields->__9__108_2, (int32_t)_9__108_2, v87, v88);
  }
  v89 = System_Linq_Enumerable__Where_object_(
          (System_Collections_Generic_IEnumerable_TSource__o *)v51,
          (System_Func_TSource__bool__o *)_9__108_2,
          (const MethodInfo_2E7709C *)Method_System_Linq_Enumerable_Where_BattleBuffData_BuffData___);
  StealBuffInfoGroup = (RemovedBuffInfoGroup_o *)System_Linq_Enumerable__ToArray_object_(
                                                   v89,
                                                   (const MethodInfo_2E713C4 *)Method_System_Linq_Enumerable_ToArray_BattleBuffData_BuffData___);
  if ( !FieldEnvData_k__BackingField )
    goto LABEL_64;
  if ( BattleFieldEnvironmentData__AddBgmFromChangeBgmBuffArray(
         FieldEnvData_k__BackingField,
         (BattleBuffData_BuffData_array *)StealBuffInfoGroup,
         0LL)
    && v76 != 1 )
  {
    v92 = (BattleActionEffect_ChangeBgmBuff_o *)sub_1B64314(BattleActionEffect_ChangeBgmBuff_TypeInfo, v90, v91);
    BattleActionEffect_ChangeBgmBuff___ctor(v92, 0LL);
    if ( !v76 )
    {
      BattleActionData_BuffData__SetActionEffectProc(
        (BattleActionData_BuffData_o *)v59,
        (BattleActionEffect_Base_o *)v92,
        0LL);
      return;
    }
LABEL_64:
    sub_1B64324(StealBuffInfoGroup);
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
  __int64 v14; // x1
  __int64 v15; // x1
  __int64 v16; // x1
  __int64 v17; // x1
  __int64 v18; // x1
  __int64 v19; // x1
  __int64 v20; // x1
  __int64 v21; // x1
  BattleActionData_o *v22; // x21
  BattleData_o *data; // x0
  BattleServantData_o *v24; // x22
  BattleServantData_o *ServantData; // x20
  __int64 v26; // x1
  __int64 v27; // x2
  System_Collections_Generic_List_int__o *v28; // x27
  __int64 v29; // x2
  struct System_Int32_array *items; // x8
  _QWORD *v31; // x9
  __int64 size; // x10
  __int64 v33; // x1
  System_Int32_array *TargetRarityList; // x29
  char v35; // w28
  char v36; // w10
  bool v37; // w8
  System_Int32_array *buffIndv; // x22
  System_Int32_array *v39; // x20
  int32_t v40; // w1
  struct System_Int32_array *v41; // x8
  _QWORD *v42; // x9
  __int64 v43; // x10
  __int64 v44; // x1
  struct System_Int32_array *v45; // x8
  _QWORD *v46; // x9
  __int64 v47; // x10
  struct System_Int32_array *v48; // x8
  _QWORD *v49; // x9
  __int64 v50; // x10
  struct System_Int32_array *v51; // x8
  _QWORD *v52; // x9
  __int64 v53; // x10
  struct System_Int32_array *v54; // x8
  _QWORD *v55; // x9
  __int64 v56; // x10
  struct System_Int32_array *v57; // x8
  _QWORD *v58; // x9
  __int64 v59; // x10
  struct System_Int32_array *v60; // x8
  _QWORD *v61; // x9
  __int64 v62; // x10
  int BattlePointPhase; // w20
  struct System_Int32_array *v64; // x8
  _QWORD *v65; // x9
  __int64 v66; // x10
  struct System_Int32_array *v67; // x8
  _QWORD *v68; // x9
  __int64 v69; // x10
  bool v70; // w0
  struct System_Int32_array *v71; // x8
  _QWORD *v72; // x9
  __int64 v73; // x10
  struct System_Int32_array *v74; // x8
  _QWORD *v75; // x9
  __int64 v76; // x10
  System_Array_o *v77; // x20
  bool v78; // w20
  bool IsOverChargeState; // w0
  int32_t NPFixedDamageValue; // w25
  __int64 v81; // x1
  __int64 v82; // x2
  BattleLogic_DamageProcessArgs_o *damageProcessArgs; // x26
  BattleLogic_o *logic; // x24
  System_Int32_array *v85; // x27
  bool IsIncludeIgnoreIndividuality; // w25
  BattleActionData_DamageData_o *v87; // x20
  char v88; // w21
  bool v90; // [xsp+30h] [xbp-A0h]
  bool isRarityAtk; // [xsp+34h] [xbp-9Ch]
  BattleServantData_o *target; // [xsp+38h] [xbp-98h]
  BattleActionData_o *v93; // [xsp+40h] [xbp-90h]
  int32_t funcIndexa; // [xsp+4Ch] [xbp-84h]
  BattleActionData_o *actiona; // [xsp+50h] [xbp-80h]
  BattleServantData_o *v96; // [xsp+58h] [xbp-78h]
  unsigned int v97; // [xsp+60h] [xbp-70h]
  System_RuntimeFieldHandle_o v99; // 0:w1.4

  if ( (byte_49FEDF8 & 1) == 0 )
  {
    sub_1B640C8(&BattleActionData_TypeInfo, *(_QWORD *)&playerId);
    sub_1B640C8(&BattleLogic_DamageProcessArgs_TypeInfo, v14);
    sub_1B640C8(&int___TypeInfo, v15);
    sub_1B640C8(&Method_System_Collections_Generic_List_int__Add__, v16);
    sub_1B640C8(&Method_System_Collections_Generic_List_int__ToArray__, v17);
    sub_1B640C8(&Method_System_Collections_Generic_List_int___ctor__, v18);
    sub_1B640C8(&System_Collections_Generic_List_int__TypeInfo, v19);
    sub_1B640C8(&DataVals_OverChargeState___TypeInfo, v20);
    sub_1B640C8(
      &Field__PrivateImplementationDetails__44BE0EBF7C907BA44AD83314C6AD0AA399AD5B73911C129D2CD6A85D4A056C90,
      v21);
    byte_49FEDF8 = 1;
  }
  v22 = (BattleActionData_o *)sub_1B64314(BattleActionData_TypeInfo, *(_QWORD *)&playerId, *(_QWORD *)&targetId);
  BattleActionData___ctor(v22, 0LL);
  data = this->fields.data;
  if ( !data )
    goto LABEL_87;
  data = (BattleData_o *)BattleData__getServantData(data, playerId, 0LL);
  if ( !this->fields.data )
    goto LABEL_87;
  v24 = (BattleServantData_o *)data;
  ServantData = BattleData__getServantData(this->fields.data, targetId, 0LL);
  v28 = (System_Collections_Generic_List_int__o *)sub_1B64314(System_Collections_Generic_List_int__TypeInfo, v26, v27);
  System_Collections_Generic_List_int____ctor(
    v28,
    (const MethodInfo_348F688 *)Method_System_Collections_Generic_List_int___ctor__);
  if ( !baseVals
    || (data = (BattleData_o *)DataVals__GetParam(baseVals, 3, 0, 0LL), !v28)
    || (items = v28->fields._items,
        v31 = Method_System_Collections_Generic_List_int__Add__,
        ++v28->fields._version,
        !items) )
  {
LABEL_87:
    sub_1B64324(data);
  }
  size = v28->fields._size;
  v33 = (unsigned int)data;
  actiona = action;
  funcIndexa = funcIndex;
  if ( (unsigned int)size >= items->max_length )
  {
    System_Collections_Generic_List_int___AddWithResize(
      v28,
      (int32_t)data,
      *(const MethodInfo_348FEDC **)(*(_QWORD *)(v31[4] + 192LL) + 112LL));
  }
  else
  {
    v28->fields._size = size + 1;
    items->m_Items[size + 1] = (int)data;
  }
  TargetRarityList = 0LL;
  v35 = 0;
  target = ServantData;
  v93 = v22;
  v96 = v24;
  v97 = type - 3;
  v36 = 0;
  v37 = 0;
  buffIndv = 0LL;
  v39 = 0LL;
  switch ( type )
  {
    case 3:
    case 4:
    case 7:
    case 9:
    case 10:
      v40 = 7;
      goto LABEL_14;
    case 5:
    case 6:
      v40 = 6;
LABEL_14:
      data = (BattleData_o *)DataVals__GetParam(baseVals, v40, 0, 0LL);
      v41 = v28->fields._items;
      v42 = Method_System_Collections_Generic_List_int__Add__;
      ++v28->fields._version;
      if ( !v41 )
        goto LABEL_87;
      v43 = v28->fields._size;
      if ( (unsigned int)v43 >= v41->max_length )
      {
        System_Collections_Generic_List_int___AddWithResize(
          v28,
          (int32_t)data,
          *(const MethodInfo_348FEDC **)(*(_QWORD *)(v42[4] + 192LL) + 112LL));
      }
      else
      {
        v28->fields._size = v43 + 1;
        v41->m_Items[v43 + 1] = (int)data;
      }
      TargetRarityList = 0LL;
      v35 = 0;
      v36 = 0;
      v37 = 0;
      buffIndv = 0LL;
      v39 = 0LL;
      switch ( type )
      {
        case 3:
        case 4:
          v39 = (System_Int32_array *)sub_1B64170(int___TypeInfo, 1LL);
          data = (BattleData_o *)DataVals__GetParam(baseVals, 6, 0, 0LL);
          if ( !v39 )
            goto LABEL_87;
          if ( !v39->max_length )
            goto LABEL_88;
          v35 = 0;
          v36 = 0;
          TargetRarityList = 0LL;
          v37 = 0;
          buffIndv = 0LL;
          v39->m_Items[1] = (int)data;
          break;
        case 5:
        case 6:
        case 8:
          goto LABEL_79;
        case 7:
          buffIndv = (System_Int32_array *)sub_1B64170(int___TypeInfo, 1LL);
          data = (BattleData_o *)DataVals__GetParam(baseVals, 6, 0, 0LL);
          if ( !buffIndv )
            goto LABEL_87;
          if ( !buffIndv->max_length )
LABEL_88:
            sub_1B6432C(data, v44);
          v35 = 0;
          v36 = 0;
          TargetRarityList = 0LL;
          v37 = 0;
          v39 = 0LL;
          buffIndv->m_Items[1] = (int)data;
          break;
        case 9:
          TargetRarityList = DataVals__GetTargetRarityList(baseVals, 0LL);
          v35 = 0;
          v37 = 0;
          buffIndv = 0LL;
          v39 = 0LL;
          v36 = 1;
          goto LABEL_79;
        case 10:
          v39 = DataVals__GetAndCheckIndividuality(baseVals, 0LL);
          v35 = 0;
          v36 = 0;
          TargetRarityList = 0LL;
          v37 = 0;
          buffIndv = 0LL;
          goto LABEL_79;
        default:
          goto LABEL_65;
      }
      goto LABEL_79;
    case 8:
      goto LABEL_79;
    case 11:
      v28 = (System_Collections_Generic_List_int__o *)sub_1B64314(
                                                        System_Collections_Generic_List_int__TypeInfo,
                                                        v33,
                                                        v29);
      System_Collections_Generic_List_int____ctor(
        v28,
        (const MethodInfo_348F688 *)Method_System_Collections_Generic_List_int___ctor__);
      data = (BattleData_o *)DataVals__GetParam(baseVals, 3, 0, 0LL);
      if ( !v28 )
        goto LABEL_87;
      v45 = v28->fields._items;
      v46 = Method_System_Collections_Generic_List_int__Add__;
      ++v28->fields._version;
      if ( !v45 )
        goto LABEL_87;
      v47 = v28->fields._size;
      if ( (unsigned int)v47 >= v45->max_length )
      {
        System_Collections_Generic_List_int___AddWithResize(
          v28,
          (int32_t)data,
          *(const MethodInfo_348FEDC **)(*(_QWORD *)(v46[4] + 192LL) + 112LL));
      }
      else
      {
        v28->fields._size = v47 + 1;
        v45->m_Items[v47 + 1] = (int)data;
      }
      data = (BattleData_o *)DataVals__GetParam(baseVals, 7, 0, 0LL);
      v54 = v28->fields._items;
      v55 = Method_System_Collections_Generic_List_int__Add__;
      ++v28->fields._version;
      if ( !v54 )
        goto LABEL_87;
      v56 = v28->fields._size;
      if ( (unsigned int)v56 >= v54->max_length )
      {
        System_Collections_Generic_List_int___AddWithResize(
          v28,
          (int32_t)data,
          *(const MethodInfo_348FEDC **)(*(_QWORD *)(v55[4] + 192LL) + 112LL));
      }
      else
      {
        v28->fields._size = v56 + 1;
        v54->m_Items[v56 + 1] = (int)data;
      }
      data = (BattleData_o *)DataVals__GetParam(baseVals, 59, 0, 0LL);
      v60 = v28->fields._items;
      v61 = Method_System_Collections_Generic_List_int__Add__;
      ++v28->fields._version;
      if ( !v60 )
        goto LABEL_87;
      v62 = v28->fields._size;
      if ( (unsigned int)v62 >= v60->max_length )
      {
        System_Collections_Generic_List_int___AddWithResize(
          v28,
          (int32_t)data,
          *(const MethodInfo_348FEDC **)(*(_QWORD *)(v61[4] + 192LL) + 112LL));
      }
      else
      {
        v28->fields._size = v62 + 1;
        v60->m_Items[v62 + 1] = (int)data;
      }
      data = (BattleData_o *)DataVals__GetParam(baseVals, 60, 0, 0LL);
      v67 = v28->fields._items;
      v68 = Method_System_Collections_Generic_List_int__Add__;
      ++v28->fields._version;
      if ( !v67 )
        goto LABEL_87;
      v69 = v28->fields._size;
      if ( (unsigned int)v69 >= v67->max_length )
      {
        System_Collections_Generic_List_int___AddWithResize(
          v28,
          (int32_t)data,
          *(const MethodInfo_348FEDC **)(*(_QWORD *)(v68[4] + 192LL) + 112LL));
      }
      else
      {
        v28->fields._size = v69 + 1;
        v67->m_Items[v69 + 1] = (int)data;
      }
      data = (BattleData_o *)DataVals__GetParam(baseVals, 4, 0, 0LL);
      v71 = v28->fields._items;
      v72 = Method_System_Collections_Generic_List_int__Add__;
      ++v28->fields._version;
      if ( !v71 )
        goto LABEL_87;
      v73 = v28->fields._size;
      if ( (unsigned int)v73 >= v71->max_length )
      {
        System_Collections_Generic_List_int___AddWithResize(
          v28,
          (int32_t)data,
          *(const MethodInfo_348FEDC **)(*(_QWORD *)(v72[4] + 192LL) + 112LL));
      }
      else
      {
        v28->fields._size = v73 + 1;
        v71->m_Items[v73 + 1] = (int)data;
      }
      data = (BattleData_o *)DataVals__GetParam(baseVals, 6, 0, 0LL);
      v74 = v28->fields._items;
      v75 = Method_System_Collections_Generic_List_int__Add__;
      ++v28->fields._version;
      if ( !v74 )
        goto LABEL_87;
      v76 = v28->fields._size;
      if ( (unsigned int)v76 >= v74->max_length )
      {
        System_Collections_Generic_List_int___AddWithResize(
          v28,
          (int32_t)data,
          *(const MethodInfo_348FEDC **)(*(_QWORD *)(v75[4] + 192LL) + 112LL));
      }
      else
      {
        v28->fields._size = v76 + 1;
        v74->m_Items[v76 + 1] = (int)data;
      }
      buffIndv = DataVals__GetTargetList(baseVals, 0LL);
      v77 = (System_Array_o *)sub_1B64170(DataVals_OverChargeState___TypeInfo, 3LL);
      v99.fields.value = Field__PrivateImplementationDetails__44BE0EBF7C907BA44AD83314C6AD0AA399AD5B73911C129D2CD6A85D4A056C90;
      System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray_61282732(v77, v99, 0LL);
      DataVals__UpdateOverChargeEachFunc(baseVals, (DataVals_OverChargeState_array *)v77, 0LL);
      v78 = DataVals__IsOverChargeState(baseVals, 2, 0LL) || DataVals__IsOverChargeState(baseVals, 8, 0LL);
      v35 = 1;
      IsOverChargeState = DataVals__IsOverChargeState(baseVals, 1, 0LL);
      v36 = 0;
      TargetRarityList = 0LL;
      v37 = v78 && !IsOverChargeState;
      v39 = buffIndv;
      goto LABEL_79;
    case 12:
      data = (BattleData_o *)DataVals__GetParam(baseVals, 7, 0, 0LL);
      v48 = v28->fields._items;
      v49 = Method_System_Collections_Generic_List_int__Add__;
      ++v28->fields._version;
      if ( !v48 )
        goto LABEL_87;
      v50 = v28->fields._size;
      if ( (unsigned int)v50 >= v48->max_length )
      {
        System_Collections_Generic_List_int___AddWithResize(
          v28,
          (int32_t)data,
          *(const MethodInfo_348FEDC **)(*(_QWORD *)(v49[4] + 192LL) + 112LL));
      }
      else
      {
        v28->fields._size = v50 + 1;
        v48->m_Items[v50 + 1] = (int)data;
      }
      data = (BattleData_o *)DataVals__GetParam(baseVals, 4, 0, 0LL);
      v51 = v28->fields._items;
      v52 = Method_System_Collections_Generic_List_int__Add__;
      ++v28->fields._version;
      if ( !v51 )
        goto LABEL_87;
      v53 = v28->fields._size;
      if ( (unsigned int)v53 >= v51->max_length )
      {
        System_Collections_Generic_List_int___AddWithResize(
          v28,
          (int32_t)data,
          *(const MethodInfo_348FEDC **)(*(_QWORD *)(v52[4] + 192LL) + 112LL));
      }
      else
      {
        v28->fields._size = v53 + 1;
        v51->m_Items[v53 + 1] = (int)data;
      }
      data = (BattleData_o *)DataVals__GetParam(baseVals, 6, 0, 0LL);
      v57 = v28->fields._items;
      v58 = Method_System_Collections_Generic_List_int__Add__;
      ++v28->fields._version;
      if ( !v57 )
        goto LABEL_87;
      v59 = v28->fields._size;
      if ( (unsigned int)v59 >= v57->max_length )
      {
        System_Collections_Generic_List_int___AddWithResize(
          v28,
          (int32_t)data,
          *(const MethodInfo_348FEDC **)(*(_QWORD *)(v58[4] + 192LL) + 112LL));
      }
      else
      {
        v28->fields._size = v59 + 1;
        v57->m_Items[v59 + 1] = (int)data;
      }
      data = (BattleData_o *)DataVals__GetParam(baseVals, 6, 0, 0LL);
      if ( !v96 )
        goto LABEL_87;
      BattlePointPhase = BattleServantData__GetBattlePointPhase(v96, (int32_t)data, 0LL);
      data = (BattleData_o *)DataVals__GetParamAddTypeIndex(baseVals, 179, BattlePointPhase, -1, 0LL);
      v64 = v28->fields._items;
      v65 = Method_System_Collections_Generic_List_int__Add__;
      ++v28->fields._version;
      if ( !v64 )
        goto LABEL_87;
      v66 = v28->fields._size;
      if ( (unsigned int)v66 >= v64->max_length )
      {
        System_Collections_Generic_List_int___AddWithResize(
          v28,
          (int32_t)data,
          *(const MethodInfo_348FEDC **)(*(_QWORD *)(v65[4] + 192LL) + 112LL));
      }
      else
      {
        v28->fields._size = v66 + 1;
        v64->m_Items[v66 + 1] = (int)data;
      }
      if ( DataVals__IsOverChargeState(baseVals, 1, 0LL) )
        goto LABEL_64;
      v70 = DataVals__IsOverChargeState(baseVals, 2, 0LL);
      TargetRarityList = 0LL;
      v35 = 0;
      if ( BattlePointPhase > 1 )
      {
LABEL_65:
        v36 = 0;
        v37 = 0;
        buffIndv = 0LL;
        v39 = 0LL;
      }
      else
      {
        v36 = 0;
        v37 = 0;
        buffIndv = 0LL;
        v39 = 0LL;
        if ( !v70 )
        {
          DataVals__SetOverCharge(baseVals, 0, 0LL);
LABEL_64:
          v35 = 0;
          v36 = 0;
          TargetRarityList = 0LL;
          v37 = 0;
          buffIndv = 0LL;
          v39 = 0LL;
        }
      }
LABEL_79:
      v90 = v37;
      isRarityAtk = v36;
      NPFixedDamageValue = DataVals__GetNPFixedDamageValue(baseVals, 0LL);
      damageProcessArgs = (BattleLogic_DamageProcessArgs_o *)sub_1B64314(
                                                               BattleLogic_DamageProcessArgs_TypeInfo,
                                                               v81,
                                                               v82);
      BattleLogic_DamageProcessArgs___ctor(damageProcessArgs, 0, NPFixedDamageValue, 0LL);
      logic = this->fields.logic;
      v85 = System_Collections_Generic_List_int___ToArray(
              v28,
              (const MethodInfo_3491A34 *)Method_System_Collections_Generic_List_int__ToArray__);
      IsIncludeIgnoreIndividuality = DataVals__IsIncludeIgnoreIndividuality(baseVals, 0LL);
      data = (BattleData_o *)DataVals__isParam(baseVals, 90, 0LL);
      if ( !logic )
        goto LABEL_87;
      data = (BattleData_o *)BattleLogic__getFunctionNpDamagelist(
                               logic,
                               v96,
                               target,
                               v85,
                               funcIndexa,
                               type,
                               actiona,
                               v39,
                               buffIndv,
                               TargetRarityList,
                               IsIncludeIgnoreIndividuality,
                               (unsigned __int8)data & 1,
                               damageProcessArgs,
                               0LL);
      v87 = (BattleActionData_DamageData_o *)data;
      if ( v97 < 8 && ((0x93u >> v97) & 1) != 0 )
      {
        v88 = 1;
        if ( !data )
          goto LABEL_87;
      }
      else
      {
        v88 = v35 & v90;
        if ( !data )
          goto LABEL_87;
      }
      BattleActionData_DamageData__addAttackSideEffectAction((BattleActionData_DamageData_o *)data, 80, 0LL);
      if ( !v93 )
        goto LABEL_87;
      BattleActionData__setDamageData(v93, v87, baseVals, v88, isRarityAtk, 0LL);
      return v93;
    default:
      goto LABEL_65;
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
  void *data; // x0
  __int64 v18; // x1
  __int64 v19; // x2
  struct BattleData_o *v20; // x8
  System_Collections_Generic_List_object__o *player_datalist; // x21
  System_Action_object__o *v22; // x22
  Il2CppObject *v23; // x23
  struct BattleLogicFunction___c_StaticFields *static_fields; // x0
  int32_t v25; // w2
  int32_t v26; // w3
  __int64 v27; // x1
  __int64 v28; // x2
  struct BattleData_o *v29; // x8
  System_Collections_Generic_List_object__o *v30; // x21
  System_Comparison_T__o *v31; // x22
  Il2CppObject *v32; // x23
  struct BattleLogicFunction___c_StaticFields *v33; // x0
  int32_t v34; // w2
  int32_t v35; // w3
  struct BattleData_o *v36; // x8
  __int64 v37; // x1
  int v38; // w8
  unsigned int *v39; // x21
  int32_t v40; // w23
  BattleServantData_o *v41; // x22
  struct BattleData_o *v42; // x8
  unsigned __int64 v43; // x24
  struct System_Int32_array *p_entryid; // x9
  unsigned __int64 max_length; // x10
  unsigned __int64 v46; // x9
  __int64 v47; // x22
  struct System_Int32_array *v48; // x9
  __int64 v49; // x1
  __int64 v50; // x2
  BattleLogicTask_o *v51; // x21

  if ( (byte_49FEE09 & 1) == 0 )
  {
    sub_1B640C8(&System_Action_BattleServantData__TypeInfo, *(_QWORD *)&actionId);
    sub_1B640C8(&BattleActionData_TypeInfo, v7);
    sub_1B640C8(&BattleLogicTask_TypeInfo, v8);
    sub_1B640C8(&System_Comparison_BattleServantData__TypeInfo, v9);
    sub_1B640C8(&Method_System_Collections_Generic_List_BattleServantData__ForEach__, v10);
    sub_1B640C8(&Method_System_Collections_Generic_List_BattleServantData__Sort__, v11);
    sub_1B640C8(&Method_System_Collections_Generic_List_BattleServantData__ToArray__, v12);
    sub_1B640C8(&Method_BattleLogicFunction___c__functionPtShuffle_b__89_0__, v13);
    sub_1B640C8(&Method_BattleLogicFunction___c__functionPtShuffle_b__89_1__, v14);
    sub_1B640C8(&BattleLogicFunction___c_TypeInfo, v15);
    byte_49FEE09 = 1;
  }
  v16 = (BattleActionData_o *)sub_1B64314(BattleActionData_TypeInfo, *(_QWORD *)&actionId, funcEnt);
  BattleActionData___ctor(v16, 0LL);
  data = this->fields.data;
  if ( !data )
    goto LABEL_53;
  BattleData__SubBuffFromPT_42191224((BattleData_o *)data, 0LL, 0LL);
  data = this->fields.data;
  if ( !data )
    goto LABEL_53;
  BattleData__SubBuffExitSvt((BattleData_o *)data, 0LL, 0LL);
  v20 = this->fields.data;
  if ( !v20 )
    goto LABEL_53;
  player_datalist = (System_Collections_Generic_List_object__o *)v20->fields.player_datalist;
  data = BattleLogicFunction___c_TypeInfo;
  if ( !BattleLogicFunction___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BattleLogicFunction___c_TypeInfo);
    data = BattleLogicFunction___c_TypeInfo;
  }
  v22 = *(System_Action_object__o **)(*((_QWORD *)data + 23) + 80LL);
  if ( !v22 )
  {
    if ( !*((_DWORD *)data + 56) )
    {
      j_il2cpp_runtime_class_init_0(data);
      data = BattleLogicFunction___c_TypeInfo;
    }
    v23 = (Il2CppObject *)**((_QWORD **)data + 23);
    v22 = (System_Action_object__o *)sub_1B64314(System_Action_BattleServantData__TypeInfo, v18, v19);
    System_Action_object____ctor(v22, v23, Method_BattleLogicFunction___c__functionPtShuffle_b__89_0__, 0LL);
    static_fields = BattleLogicFunction___c_TypeInfo->static_fields;
    static_fields->__9__89_0 = (struct System_Action_BattleServantData__o *)v22;
    sub_1B6406C((ServantStatusBattleListViewItem_o *)&static_fields->__9__89_0, (int32_t)v22, v25, v26);
  }
  if ( !player_datalist )
    goto LABEL_53;
  System_Collections_Generic_List_object___ForEach(
    player_datalist,
    (System_Action_T__o *)v22,
    (const MethodInfo_34AE1B4 *)Method_System_Collections_Generic_List_BattleServantData__ForEach__);
  v29 = this->fields.data;
  if ( !v29 )
    goto LABEL_53;
  data = BattleLogicFunction___c_TypeInfo;
  v30 = (System_Collections_Generic_List_object__o *)v29->fields.player_datalist;
  if ( !BattleLogicFunction___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BattleLogicFunction___c_TypeInfo);
    data = BattleLogicFunction___c_TypeInfo;
  }
  v31 = *(System_Comparison_T__o **)(*((_QWORD *)data + 23) + 88LL);
  if ( !v31 )
  {
    if ( !*((_DWORD *)data + 56) )
    {
      j_il2cpp_runtime_class_init_0(data);
      data = BattleLogicFunction___c_TypeInfo;
    }
    v32 = (Il2CppObject *)**((_QWORD **)data + 23);
    v31 = (System_Comparison_T__o *)sub_1B64314(System_Comparison_BattleServantData__TypeInfo, v27, v28);
    System_Comparison_object____ctor(v31, v32, Method_BattleLogicFunction___c__functionPtShuffle_b__89_1__, 0LL);
    v33 = BattleLogicFunction___c_TypeInfo->static_fields;
    v33->__9__89_1 = (struct System_Comparison_BattleServantData__o *)v31;
    sub_1B6406C((ServantStatusBattleListViewItem_o *)&v33->__9__89_1, (int32_t)v31, v34, v35);
  }
  if ( !v30 )
    goto LABEL_53;
  System_Collections_Generic_List_object___Sort_55243320(
    v30,
    v31,
    (const MethodInfo_34AF238 *)Method_System_Collections_Generic_List_BattleServantData__Sort__);
  v36 = this->fields.data;
  if ( !v36 )
    goto LABEL_53;
  data = v36->fields.player_datalist;
  if ( !data )
    goto LABEL_53;
  data = System_Collections_Generic_List_object___ToArray(
           (System_Collections_Generic_List_object__o *)data,
           (const MethodInfo_34AF2CC *)Method_System_Collections_Generic_List_BattleServantData__ToArray__);
  if ( !data )
    goto LABEL_53;
  v38 = *((_DWORD *)data + 6);
  v39 = (unsigned int *)data;
  if ( v38 >= 1 )
  {
    v40 = 0;
    while ( 1 )
    {
      if ( v40 >= (unsigned int)v38 )
LABEL_54:
        sub_1B6432C(data, v37);
      v41 = *(BattleServantData_o **)&v39[2 * v40 + 8];
      if ( !v41 )
        break;
      if ( v41->fields.isEntry )
      {
        data = (void *)BattleServantData__isAlive(v41, 0, 0LL);
        if ( ((unsigned __int8)data & 1) != 0 )
          v41->fields.isEntry = 0;
      }
      v41->fields.deckIndex = v40;
      v38 = v39[6];
      if ( ++v40 >= v38 )
        goto LABEL_32;
    }
LABEL_53:
    sub_1B64324(data);
  }
LABEL_32:
  v42 = this->fields.data;
  if ( !v42 )
    goto LABEL_53;
  v43 = 0LL;
  while ( 1 )
  {
    p_entryid = v42->fields.p_entryid;
    if ( !p_entryid )
      goto LABEL_53;
    max_length = p_entryid->max_length;
    if ( (__int64)v43 >= (int)max_length )
      break;
    if ( v43 >= max_length )
      goto LABEL_54;
    p_entryid->m_Items[v43 + 1] = -1;
    v46 = v39[6];
    if ( (__int64)v43 < (int)v46 )
    {
      if ( v43 >= v46 )
        goto LABEL_54;
      v47 = *(_QWORD *)&v39[2 * v43 + 8];
      if ( !v47 )
        goto LABEL_53;
      data = (void *)BattleServantData__isAlive(*(BattleServantData_o **)&v39[2 * v43 + 8], 0, 0LL);
      v42 = this->fields.data;
      if ( ((unsigned __int8)data & 1) != 0 )
      {
        if ( !v42 )
          goto LABEL_53;
        v48 = v42->fields.p_entryid;
        if ( !v48 )
          goto LABEL_53;
        if ( v43 >= v48->max_length )
          goto LABEL_54;
        v48->m_Items[v43 + 1] = *(_DWORD *)(v47 + 24);
        *(_BYTE *)(v47 + 468) = 1;
        *(_BYTE *)(v47 + 533) = 1;
      }
    }
    ++v43;
    if ( !v42 )
      goto LABEL_53;
  }
  BattleData__createCommandCard(v42, 0LL);
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
  v51 = (BattleLogicTask_o *)sub_1B64314(BattleLogicTask_TypeInfo, v49, v50);
  BattleLogicTask___ctor(v51, 0LL);
  if ( !v51 )
    goto LABEL_53;
  BattleLogicTask__setCheckEntryFunction(v51, 0LL);
  data = this->fields.logic;
  if ( !data )
    goto LABEL_53;
  BattleLogic__AddBattleLogicTask((BattleLogic_o *)data, v51, 0LL);
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
  __int64 data; // x0
  BattleServantData_o *v16; // x25
  BattleServantData_o *ServantData; // x24
  __int64 v18; // x1
  __int64 v19; // x2
  __int64 v20; // x26
  __int64 v21; // x8
  double v22; // d0
  int32_t v23; // w28
  int v24; // w29
  __int64 v26; // x0
  int32_t v27; // w2
  int32_t v28; // w3
  __int64 v29; // x0
  int32_t v30; // w2
  int32_t v31; // w3
  int32_t v32; // w2
  int32_t v33; // w3
  __int64 v34; // x0
  int32_t v35; // w2
  int32_t v36; // w3
  __int64 v37; // x0
  int32_t v38; // w2
  int32_t v39; // w3
  __int64 v40; // x0
  int32_t v41; // w2
  int32_t v42; // w3
  struct BattleData_o *v43; // x8
  int32_t uniqueId; // w21
  int32_t v45; // w22
  bool IsOpponentPTUniqueID; // w0

  if ( (byte_49FEE07 & 1) == 0 )
  {
    sub_1B640C8(&BattleActionData_TypeInfo, *(_QWORD *)&playerId);
    sub_1B640C8(&BattleActionData_DamageData_TypeInfo, v11);
    sub_1B640C8(&int___TypeInfo, v12);
    sub_1B640C8(&BattleBuffData_ShowBuffData___TypeInfo, v13);
    byte_49FEE07 = 1;
  }
  v14 = (BattleActionData_o *)sub_1B64314(BattleActionData_TypeInfo, *(_QWORD *)&playerId, *(_QWORD *)&targetId);
  BattleActionData___ctor(v14, 0LL);
  data = (__int64)this->fields.data;
  if ( !data )
    goto LABEL_28;
  data = (__int64)BattleData__getServantData((BattleData_o *)data, playerId, 0LL);
  if ( !this->fields.data )
    goto LABEL_28;
  v16 = (BattleServantData_o *)data;
  ServantData = BattleData__getServantData(this->fields.data, targetId, 0LL);
  v20 = sub_1B64314(BattleActionData_DamageData_TypeInfo, v18, v19);
  BattleActionData_DamageData___ctor((BattleActionData_DamageData_o *)v20, 0LL);
  if ( !v16 )
    goto LABEL_28;
  data = BattleServantData__getAccumulationDamage(v16, 0LL);
  if ( !baseVals )
    goto LABEL_28;
  v21 = DataVals__GetValue(baseVals, 0LL) * (__int64)(int)data;
  data = (__int64)this->fields.data;
  v22 = (double)v21 / 1000.0;
  v23 = v22 == INFINITY ? 0x80000000 : (int)v22;
  if ( !data )
    goto LABEL_28;
  data = BattleData__IsDeadOkTurn((BattleData_o *)data, targetId, 0LL);
  if ( (data & 1) == 0 )
  {
    if ( !ServantData )
      goto LABEL_28;
    v24 = ((__int64 (__fastcall *)(BattleServantData_o *, Il2CppMethodPointer))ServantData->klass->vtable._9_get_hp.method)(
            ServantData,
            ServantData->klass->vtable._10_set_hp.methodPtr);
    data = ((__int64 (__fastcall *)(BattleServantData_o *, Il2CppMethodPointer))ServantData->klass->vtable._11_get_reducedhp.method)(
             ServantData,
             ServantData->klass->vtable._12_set_reducedhp.methodPtr);
    if ( v24 - (int)data < v23 && v24 - (int)data > 0 )
      v23 = v24 - data - 1;
  }
  if ( !v20 )
    goto LABEL_28;
  *(_DWORD *)(v20 + 28) = targetId;
  *(_DWORD *)(v20 + 16) = funcIndex;
  *(_WORD *)(v20 + 32) = 0;
  *(_BYTE *)(v20 + 34) = 0;
  *(_DWORD *)(v20 + 36) = 0;
  *(_BYTE *)(v20 + 40) = 0;
  v26 = sub_1B64170(BattleBuffData_ShowBuffData___TypeInfo, 0LL);
  *(_QWORD *)(v20 + 64) = v26;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)(v20 + 64), v26, v27, v28);
  v29 = sub_1B64170(BattleBuffData_ShowBuffData___TypeInfo, 0LL);
  *(_QWORD *)(v20 + 72) = v29;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)(v20 + 72), v29, v30, v31);
  data = sub_1B64170(int___TypeInfo, 1LL);
  if ( !data )
    goto LABEL_28;
  if ( !*(_DWORD *)(data + 24) )
    sub_1B6432C(data, data);
  *(_DWORD *)(data + 32) = v23;
  *(_QWORD *)(v20 + 96) = data;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)(v20 + 96), data, v32, v33);
  v34 = sub_1B64170(int___TypeInfo, 0LL);
  *(_QWORD *)(v20 + 104) = v34;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)(v20 + 104), v34, v35, v36);
  v37 = sub_1B64170(int___TypeInfo, 0LL);
  *(_QWORD *)(v20 + 112) = v37;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)(v20 + 112), v37, v38, v39);
  v40 = sub_1B64170(int___TypeInfo, 0LL);
  *(_QWORD *)(v20 + 120) = v40;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)(v20 + 120), v40, v41, v42);
  if ( !ServantData )
    goto LABEL_28;
  BattleServantData__provisionalDamage(ServantData, v23, 0LL);
  BattleServantData__ResultDamage(ServantData, v23, v16, 0LL, 0LL, 0, 0LL);
  data = BattleServantData__isLogicResultAlive(ServantData, 0LL);
  if ( (data & 1) == 0 )
  {
    v43 = this->fields.data;
    if ( !v43 )
      goto LABEL_28;
    ServantData->fields.deadTurn = v43->fields.typeTurn;
  }
  BattleActionData_DamageData__addAttackSideEffectAction((BattleActionData_DamageData_o *)v20, 80, 0LL);
  if ( !v14
    || (BattleActionData__SetFuncDamageData(v14, (BattleActionData_DamageData_o *)v20, baseVals, 0LL),
        (data = (__int64)this->fields.data) == 0) )
  {
LABEL_28:
    sub_1B64324(data);
  }
  uniqueId = v16->fields.uniqueId;
  v45 = *(_DWORD *)(data + 196);
  IsOpponentPTUniqueID = BattleData__IsOpponentPTUniqueID((BattleData_o *)data, targetId, playerId, 0LL);
  BattleServantData__setActionHistory(ServantData, uniqueId, 1, v45, IsOpponentPTUniqueID, 0LL);
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
  __int64 v13; // x1
  __int64 v14; // x2
  struct BattleData_o *v15; // x8
  BattleData_o *v16; // x23
  System_Collections_Generic_IEnumerable_TSource__o *enemy_datalist; // x21
  BattleLogicFunction___c_c *v18; // x0
  System_Func_object__bool__o *_9__83_0; // x22
  Il2CppObject *v20; // x25
  struct BattleLogicFunction___c_StaticFields *static_fields; // x0
  int32_t v22; // w2
  int32_t v23; // w3
  __int64 v24; // x1
  __int64 v25; // x2
  BattleActionData_o *v26; // x21
  int32_t Param; // w25
  int32_t v28; // w22
  BattleServantData_o *EnemyServantData; // x25
  BattleServantData_o *EnemyServantDataFromNpcId; // x22
  __int64 v31; // x1
  struct BattleData_o *v32; // x8
  int v33; // w9
  struct System_Int32_array *e_entryid; // x10
  int max_length; // w10
  struct System_Int32_array *v36; // x10
  BattleActionData_o *result; // x0
  int DeckIndex; // w23
  struct BattleData_o *v39; // x8
  struct System_Int32_array *v40; // x9
  __int64 v41; // x11
  int32_t v42; // w24
  int32_t uniqueId; // w10
  __int64 v44; // x8
  __int64 v45; // x11
  int32_t *v46; // x9
  struct System_Int32_array *v47; // x8
  unsigned __int64 v48; // x10
  unsigned __int64 v49; // x9
  int32_t *v50; // x12

  if ( (byte_49FEE03 & 1) == 0 )
  {
    sub_1B640C8(&BattleActionData_TypeInfo, funcEnt);
    sub_1B640C8(&Method_System_Linq_Enumerable_Count_BattleServantData____75747944, v8);
    sub_1B640C8(&System_Func_BattleServantData__bool__TypeInfo, v9);
    sub_1B640C8(&Method_BattleLogicFunction___c__functionReplaceEnemyMember_b__83_0__, v10);
    sub_1B640C8(&BattleLogicFunction___c_TypeInfo, v11);
    byte_49FEE03 = 1;
  }
  data = this->fields.data;
  if ( !data )
    goto LABEL_61;
  data = (BattleData_o *)BattleData__getAliveFieldEnemyServantIDList(data, 0, 0LL);
  v15 = this->fields.data;
  if ( !v15 )
    goto LABEL_61;
  v16 = data;
  enemy_datalist = (System_Collections_Generic_IEnumerable_TSource__o *)v15->fields.enemy_datalist;
  v18 = BattleLogicFunction___c_TypeInfo;
  if ( !BattleLogicFunction___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BattleLogicFunction___c_TypeInfo);
    v18 = BattleLogicFunction___c_TypeInfo;
  }
  _9__83_0 = (System_Func_object__bool__o *)v18->static_fields->__9__83_0;
  if ( !_9__83_0 )
  {
    if ( !v18->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v18);
      v18 = BattleLogicFunction___c_TypeInfo;
    }
    v20 = (Il2CppObject *)v18->static_fields->__9;
    _9__83_0 = (System_Func_object__bool__o *)sub_1B64314(System_Func_BattleServantData__bool__TypeInfo, v13, v14);
    System_Func_object__bool____ctor(
      _9__83_0,
      v20,
      Method_BattleLogicFunction___c__functionReplaceEnemyMember_b__83_0__,
      0LL);
    static_fields = BattleLogicFunction___c_TypeInfo->static_fields;
    static_fields->__9__83_0 = (struct System_Func_BattleServantData__bool__o *)_9__83_0;
    sub_1B6406C((ServantStatusBattleListViewItem_o *)&static_fields->__9__83_0, (int32_t)_9__83_0, v22, v23);
  }
  data = (BattleData_o *)System_Linq_Enumerable__Count_object__48591404(
                           enemy_datalist,
                           (System_Func_TSource__bool__o *)_9__83_0,
                           (const MethodInfo_2E5722C *)Method_System_Linq_Enumerable_Count_BattleServantData____75747944);
  if ( (int)data < 4 )
    return 0LL;
  if ( !v16 )
    goto LABEL_61;
  if ( !v16->fields.m_CancellationTokenSource )
    return 0LL;
  v26 = (BattleActionData_o *)sub_1B64314(BattleActionData_TypeInfo, v24, v25);
  BattleActionData___ctor(v26, 0LL);
  if ( !baseVals )
    goto LABEL_61;
  Param = DataVals__GetParam(baseVals, 47, 0, 0LL);
  data = (BattleData_o *)DataVals__GetParam(baseVals, 48, 0, 0LL);
  if ( !this->fields.data )
    goto LABEL_61;
  v28 = (int)data;
  data = (BattleData_o *)BattleData__getEnemyServantDataFromNpcId(this->fields.data, Param, 0LL);
  if ( !this->fields.data )
    goto LABEL_61;
  EnemyServantData = (BattleServantData_o *)data;
  EnemyServantDataFromNpcId = BattleData__getEnemyServantDataFromNpcId(this->fields.data, v28, 0LL);
  if ( !EnemyServantData )
  {
    data = (BattleData_o *)DataVals__GetParam(baseVals, 49, 0, 0LL);
    v32 = this->fields.data;
    v33 = (_DWORD)data - 1;
    if ( (int)data - 1 < 0 )
    {
      if ( !v32 )
        goto LABEL_61;
      v33 = 0;
    }
    else
    {
      if ( !v32 )
        goto LABEL_61;
      e_entryid = v32->fields.e_entryid;
      if ( !e_entryid )
        goto LABEL_61;
      max_length = e_entryid->max_length;
      if ( v33 >= max_length )
        v33 = max_length - 1;
    }
    v36 = v32->fields.e_entryid;
    if ( !v36 )
      goto LABEL_61;
    if ( v33 >= v36->max_length )
      goto LABEL_64;
    data = (BattleData_o *)BattleData__getEnemyServantData(this->fields.data, v36->m_Items[v33 + 1], 0LL);
    if ( !data )
      goto LABEL_61;
    EnemyServantData = (BattleServantData_o *)data;
    data = (BattleData_o *)BattleServantData__isDead((BattleServantData_o *)data, 0LL);
    if ( ((unsigned __int8)data & 1) != 0 )
    {
      if ( !LODWORD(v16->fields.m_CancellationTokenSource) )
        goto LABEL_64;
      data = this->fields.data;
      if ( !data )
        goto LABEL_61;
      EnemyServantData = BattleData__getEnemyServantData(data, (int32_t)v16->fields.rootfsm, 0LL);
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
    v39 = this->fields.data;
    if ( v39 )
    {
      v40 = v39->fields.e_entryid;
      if ( v40 )
      {
        v41 = *(_QWORD *)&v40->max_length;
        v42 = (int)data;
        if ( DeckIndex >= (int)v41 )
          goto LABEL_47;
        if ( DeckIndex < (unsigned int)v41 )
        {
          if ( v40->m_Items[DeckIndex + 1] == EnemyServantData->fields.uniqueId )
          {
            EnemyServantData->fields.deckIndex = (int)data;
            EnemyServantDataFromNpcId->fields.deckIndex = DeckIndex;
LABEL_54:
            v47 = v39->fields.e_entryid;
            if ( v47 )
            {
              v48 = v47->max_length;
              v49 = 0LL;
              v50 = &v47->m_Items[1];
              while ( (__int64)v49 < (int)v48 )
              {
                if ( v49 >= v48 )
                  goto LABEL_64;
                if ( v50[v49] == EnemyServantData->fields.uniqueId )
                  v50[v49] = EnemyServantDataFromNpcId->fields.uniqueId;
                ++v49;
              }
              if ( v26 )
              {
                BattleActionData__setReplaceMember(
                  v26,
                  DeckIndex,
                  EnemyServantDataFromNpcId->fields.uniqueId,
                  EnemyServantData->fields.uniqueId,
                  funcIndex,
                  0LL);
                return v26;
              }
            }
            goto LABEL_61;
          }
LABEL_47:
          if ( (int)v41 >= 1 )
          {
            uniqueId = EnemyServantData->fields.uniqueId;
            v44 = 0LL;
            v45 = (unsigned int)*(_QWORD *)&v40->max_length;
            v46 = &v40->m_Items[1];
            do
            {
              if ( v46[v44] == uniqueId )
                EnemyServantData->fields.deckIndex = v44;
              ++v44;
            }
            while ( v45 != v44 );
          }
          data = (BattleData_o *)BattleServantData__getDeckIndex(EnemyServantData, 0LL);
          v39 = this->fields.data;
          EnemyServantData->fields.deckIndex = v42;
          EnemyServantDataFromNpcId->fields.deckIndex = (int)data;
          if ( !v39 )
            goto LABEL_61;
          DeckIndex = (int)data;
          goto LABEL_54;
        }
LABEL_64:
        sub_1B6432C(data, v31);
      }
    }
LABEL_61:
    sub_1B64324(data);
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
  BattleData_o *data; // x0
  BattleServantData_o *v13; // x22
  BattleServantData_o *v14; // x23
  int32_t v15; // w24
  __int64 v16; // x1
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

  if ( (byte_49FEE02 & 1) == 0 )
  {
    sub_1B640C8(&BattleActionData_TypeInfo, *(_QWORD *)&targetId);
    byte_49FEE02 = 1;
  }
  v11 = (BattleActionData_o *)sub_1B64314(BattleActionData_TypeInfo, *(_QWORD *)&targetId, *(_QWORD *)&subTargetId);
  BattleActionData___ctor(v11, 0LL);
  data = this->fields.data;
  if ( !data )
    goto LABEL_27;
  data = (BattleData_o *)BattleData__getServantData(data, targetId, 0LL);
  if ( !this->fields.data )
    goto LABEL_27;
  v13 = (BattleServantData_o *)data;
  data = (BattleData_o *)BattleData__getServantData(this->fields.data, subTargetId, 0LL);
  if ( !v13 )
    goto LABEL_27;
  v14 = (BattleServantData_o *)data;
  data = (BattleData_o *)BattleServantData__getDeckIndex(v13, 0LL);
  if ( !v14 )
    goto LABEL_27;
  v15 = (int)data;
  data = (BattleData_o *)BattleServantData__getDeckIndex(v14, 0LL);
  v17 = this->fields.data;
  if ( !v17 )
    goto LABEL_27;
  p_entryid = v17->fields.p_entryid;
  if ( !p_entryid )
    goto LABEL_27;
  v19 = *(_QWORD *)&p_entryid->max_length;
  v20 = (int)data;
  if ( v15 >= (int)v19 )
    goto LABEL_35;
  if ( v15 >= (unsigned int)v19 )
LABEL_32:
    sub_1B6432C(data, v16);
  if ( p_entryid->m_Items[v15 + 1] == v13->fields.uniqueId )
  {
    v13->fields.deckIndex = (int)data;
    v14->fields.deckIndex = v15;
  }
  else
  {
LABEL_35:
    if ( (int)v19 >= 1 )
    {
      uniqueId = v13->fields.uniqueId;
      v22 = 0LL;
      v23 = (unsigned int)*(_QWORD *)&p_entryid->max_length;
      v24 = &p_entryid->m_Items[1];
      do
      {
        if ( v24[v22] == uniqueId )
          v13->fields.deckIndex = v22;
        ++v22;
      }
      while ( v23 != v22 );
    }
    data = (BattleData_o *)BattleServantData__getDeckIndex(v13, 0LL);
    v17 = this->fields.data;
    v13->fields.deckIndex = v20;
    v14->fields.deckIndex = (int)data;
    if ( !v17 )
      goto LABEL_27;
    v15 = (int)data;
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
    if ( v28[v27] == v13->fields.uniqueId )
      v28[v27] = v14->fields.uniqueId;
    ++v27;
  }
  if ( !v11
    || (BattleActionData__setReplaceMember(v11, v15, v14->fields.uniqueId, v13->fields.uniqueId, funcIndex, 0LL),
        v11->fields.redrawCommandCard = 1,
        (data = this->fields.data) == 0LL)
    || (BattleData__SubBuffFromPT_42191224(data, v14, 0LL), (data = this->fields.data) == 0LL) )
  {
LABEL_27:
    sub_1B64324(data);
  }
  BattleData__SubBuffExitSvt(data, v13, 0LL);
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
  BattleData_o *data; // x0

  if ( (byte_49FEE01 & 1) == 0 )
  {
    sub_1B640C8(&BattleActionData_TypeInfo, *(_QWORD *)&targetId);
    byte_49FEE01 = 1;
  }
  v7 = (BattleActionData_o *)sub_1B64314(BattleActionData_TypeInfo, *(_QWORD *)&targetId, funcEnt);
  BattleActionData___ctor(v7, 0LL);
  data = this->fields.data;
  if ( !data
    || (BattleData__SubBuffFromPT_42191224(data, 0LL, 0LL), (data = this->fields.data) == 0LL)
    || (BattleData__shuffleCommand(data, 0LL), (data = (BattleData_o *)this->fields.logic) == 0LL)
    || (BattleLogic__drawCommand((BattleLogic_o *)data, 0LL), (data = (BattleData_o *)this->fields.logic) == 0LL)
    || (BattleLogic__setDrawCard((BattleLogic_o *)data, 0LL), !v7) )
  {
    sub_1B64324(data);
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
  BattleData_o *data; // x0
  BattleServantData_o *v16; // x22
  const MethodInfo *v17; // x7
  int32_t maxhp; // w24
  int32_t Value; // w0
  int32_t v21; // w1
  __int64 v22; // x1
  __int64 v23; // x2
  struct BattleData_o *v24; // x8
  __int64 v25; // x21
  int32_t v26; // w2
  int32_t v27; // w3
  unsigned int uniqueId; // w8
  struct System_String_o *popupText; // x1
  struct System_Int32_array *effectList; // x1
  int32_t v31; // w2
  int32_t v32; // w3

  if ( (byte_49FEE0D & 1) == 0 )
  {
    sub_1B640C8(&BattleActionData_TypeInfo, *(_QWORD *)&targetId);
    sub_1B640C8(&BattleActionData_BuffData_TypeInfo, v13);
    byte_49FEE0D = 1;
  }
  v14 = (BattleActionData_o *)sub_1B64314(BattleActionData_TypeInfo, *(_QWORD *)&targetId, *(_QWORD *)&funcIdx);
  BattleActionData___ctor(v14, 0LL);
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
    v24 = this->fields.data;
    if ( !v24 )
      goto LABEL_22;
    if ( v24->fields.endbattleFlg )
      v16->fields.isSystemDead = 1;
  }
  v25 = sub_1B64314(BattleActionData_BuffData_TypeInfo, v22, v23);
  BattleActionData_BuffData___ctor((BattleActionData_BuffData_o *)v25, 0LL);
  if ( !v25 )
    goto LABEL_22;
  uniqueId = v16->fields.uniqueId;
  *(_DWORD *)(v25 + 16) = 0;
  *(_QWORD *)(v25 + 40) = uniqueId;
  if ( !funcEnt )
    goto LABEL_22;
  popupText = funcEnt->fields.popupText;
  *(_QWORD *)(v25 + 56) = popupText;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)(v25 + 56), (int32_t)popupText, v26, v27);
  *(_QWORD *)(v25 + 64) = *(_QWORD *)&funcEnt->fields.popupIconId;
  effectList = funcEnt->fields.effectList;
  *(_QWORD *)(v25 + 72) = effectList;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)(v25 + 72), (int32_t)effectList, v31, v32);
  *(_DWORD *)(v25 + 28) = 2;
  if ( !v14 )
LABEL_22:
    sub_1B64324(data);
  BattleActionData__setBuffData(v14, (BattleActionData_BuffData_o *)v25, 0LL, 0LL);
  return v14;
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
  __int64 v13; // x1
  __int64 v14; // x1
  __int64 v15; // x1
  __int64 v16; // x0
  __int64 v17; // x0
  DataManager_o *MasterData_object; // x0
  SkillLvMaster_o *v19; // x25
  struct BattleSkillInfoData_o *skillInfo; // x8
  SkillLvEntity_o *v21; // x26
  bool IsRevivalUp; // w0
  SkillLvEntity_o *v23; // x29
  BattleActorControl_o *PartsActor; // x27
  BattleActionData_o *v25; // x25
  SkillLvEntity_o *v26; // x28
  __int64 v27; // x1
  __int64 v28; // x2
  int32_t targetId; // w1
  const MethodInfo *v30; // x6
  BattleActionData_o *RevivalHealData; // x0
  BattleActorControl_o *v32; // x26
  BattleServantData_o *battleSvtData; // x0
  __int64 v34; // x1
  __int64 v35; // x2
  BattleActionData_o *v36; // x27
  int32_t v37; // w1
  const MethodInfo *v38; // x6
  BattleActionData_o *v39; // x0

  if ( (byte_49FEE19 & 1) == 0 )
  {
    sub_1B640C8(&BattleActionData_TypeInfo, actionData);
    sub_1B640C8(&Method_DataManager_GetMasterData_SkillLvMaster___, v13);
    sub_1B640C8(&UnityEngine_Object_TypeInfo, v14);
    sub_1B640C8(&Method_SingletonMonoBehaviour_DataManager__getInstance__, v15);
    byte_49FEE19 = 1;
  }
  v16 = *((_QWORD *)Method_SingletonMonoBehaviour_DataManager__getInstance__ + 4);
  if ( (*(_BYTE *)(v16 + 309) & 1) == 0 )
    v16 = sub_1BB5FA4(v16);
  v17 = *(_QWORD *)(*(_QWORD *)(v16 + 192) + 16LL);
  if ( (*(_BYTE *)(v17 + 309) & 1) == 0 )
    v17 = sub_1BB5FA4(v17);
  MasterData_object = **(DataManager_o ***)(v17 + 184);
  if ( !MasterData_object )
    goto LABEL_49;
  MasterData_object = (DataManager_o *)DataManager__GetMasterData_object_(
                                         MasterData_object,
                                         (const MethodInfo_2E393EC *)Method_DataManager_GetMasterData_SkillLvMaster___);
  if ( !actionData )
    goto LABEL_49;
  v19 = (SkillLvMaster_o *)MasterData_object;
  MasterData_object = (DataManager_o *)actionData->fields.skillInfo;
  if ( !MasterData_object )
    goto LABEL_49;
  MasterData_object = (DataManager_o *)((__int64 (__fastcall *)(DataManager_o *, void *))MasterData_object->klass[1]._1.namespaze)(
                                         MasterData_object,
                                         MasterData_object->klass[1]._1.byval_arg.data);
  skillInfo = actionData->fields.skillInfo;
  if ( !skillInfo )
    goto LABEL_49;
  if ( !v19 )
    goto LABEL_49;
  MasterData_object = (DataManager_o *)SkillLvMaster__GetEntity(
                                         v19,
                                         (int32_t)MasterData_object,
                                         skillInfo->fields.skilllv,
                                         0LL);
  if ( !MasterData_object )
    goto LABEL_49;
  v21 = (SkillLvEntity_o *)MasterData_object;
  IsRevivalUp = SkillLvEntity__IsRevivalUp((SkillLvEntity_o *)MasterData_object, 0LL);
  if ( IsRevivalUp )
    v23 = v21;
  else
    v23 = 0LL;
  if ( IsRevivalUp )
  {
    MasterData_object = (DataManager_o *)this->fields.data;
    if ( !MasterData_object )
      goto LABEL_49;
    PartsActor = BattleData__GetPartsActor((BattleData_o *)MasterData_object, 0, 0LL);
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    MasterData_object = (DataManager_o *)UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)PartsActor, 0LL, 0LL);
    v25 = 0LL;
    if ( ((unsigned __int8)MasterData_object & 1) != 0 )
      v26 = v23;
    else
      v26 = 0LL;
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
          v25 = 0LL;
        }
        else
        {
          v25 = (BattleActionData_o *)sub_1B64314(BattleActionData_TypeInfo, v27, v28);
          BattleActionData___ctor(v25, 0LL);
          if ( !v25 )
            goto LABEL_49;
          v25->fields.actorId = actionData->fields.actorId;
          v25->fields.targetId = PartsActor->fields.uniqueID;
          BattleActionData__setStateActors(v25, 0LL);
          targetId = v25->fields.targetId;
          v25->fields.isRevival = 1;
          v25->fields.motionId = 2201;
          RevivalHealData = BattleLogicFunction__createRevivalHealData(
                              this,
                              targetId,
                              funcEnt,
                              baseVals,
                              funcIndex,
                              isCommandSideEffect,
                              v30);
          BattleActionData__addAction(v25, RevivalHealData, 0LL);
        }
        v21 = v26;
      }
      else
      {
        v25 = 0LL;
        v21 = v23;
      }
    }
    if ( !v21 )
LABEL_49:
      sub_1B64324(MasterData_object);
  }
  else
  {
    v25 = 0LL;
  }
  if ( !SkillLvEntity__IsRevivalUnder(v21, 0LL) )
    goto LABEL_42;
  MasterData_object = (DataManager_o *)this->fields.data;
  if ( !MasterData_object )
    goto LABEL_49;
  v32 = BattleData__GetPartsActor((BattleData_o *)MasterData_object, 2, 0LL);
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  MasterData_object = (DataManager_o *)UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)v32, 0LL, 0LL);
  if ( ((unsigned __int8)MasterData_object & 1) != 0 )
  {
    if ( v32 )
    {
      battleSvtData = v32->fields.battleSvtData;
      if ( !battleSvtData || BattleServantData__isAlive(battleSvtData, 0, 0LL) )
        goto LABEL_42;
      v36 = (BattleActionData_o *)sub_1B64314(BattleActionData_TypeInfo, v34, v35);
      BattleActionData___ctor(v36, 0LL);
      if ( v36 )
      {
        v36->fields.actorId = actionData->fields.actorId;
        v36->fields.targetId = v32->fields.uniqueID;
        BattleActionData__setStateActors(v36, 0LL);
        v37 = v36->fields.targetId;
        v36->fields.isRevival = 1;
        v36->fields.motionId = 2202;
        v39 = BattleLogicFunction__createRevivalHealData(
                this,
                v37,
                funcEnt,
                baseVals,
                funcIndex,
                isCommandSideEffect,
                v38);
        BattleActionData__addAction(v36, v39, 0LL);
        if ( v25 )
          BattleActionData__AddAfterActionData(v25, v36, 0, 0LL);
        else
          v25 = v36;
        goto LABEL_43;
      }
    }
    goto LABEL_49;
  }
LABEL_42:
  if ( v25 )
LABEL_43:
    BattleActionData__AddAfterActionData(actionData, v25, 0, 0LL);
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
  int32_t v13; // w1
  int32_t v14; // w2
  int32_t v15; // w3
  BattleData_o *data; // x24
  __int64 v17; // x1
  __int64 v18; // x2
  BattleActionData_SkillShiftServant_o *v19; // x23

  if ( (byte_49FEE16 & 1) == 0 )
  {
    sub_1B640C8(&BattleActionData_TypeInfo, actionData);
    sub_1B640C8(&BattleActionData_SkillShiftServant_TypeInfo, v9);
    sub_1B640C8(&StringLiteral_8688/*"MOTION_SHIFT"*/, v10);
    byte_49FEE16 = 1;
  }
  v11 = sub_1B64314(BattleActionData_TypeInfo, actionData, targetData);
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
  v13 = StringLiteral_8688/*"MOTION_SHIFT"*/;
  *(_QWORD *)(v11 + 64) = StringLiteral_8688/*"MOTION_SHIFT"*/;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)(v11 + 64), v13, v14, v15);
  data = this->fields.data;
  v19 = (BattleActionData_SkillShiftServant_o *)sub_1B64314(BattleActionData_SkillShiftServant_TypeInfo, v17, v18);
  BattleActionData_SkillShiftServant___ctor(v19, data, npcId, 0LL);
  if ( !v19 )
LABEL_8:
    sub_1B64324(v12);
  BattleActionData_ShiftServant__setBeforeSvtData((BattleActionData_ShiftServant_o *)v19, targetData, 0LL);
  BattleActionData__setShiftServant((BattleActionData_o *)v11, (BattleActionData_ShiftServant_o *)v19, 0LL);
  BattleActionData__setShiftServant(actionData, (BattleActionData_ShiftServant_o *)v19, 0LL);
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
  __int64 v20; // x1
  __int64 v21; // x2
  BattleServantSnapShotOnBuffUpdate_o *v22; // x26
  System_Int32_array *vals; // x27
  int32_t Value; // w29
  int32_t Value2; // w22
  RemovedBuffInfo_o *v26; // x0
  int32_t v27; // w2
  int32_t v28; // w3
  __int64 v29; // x1
  __int64 v30; // x2
  const MethodInfo *v31; // x7
  struct System_Collections_Generic_List_BattleBuffData_BuffData__o *RemovedAllBuffList_k__BackingField; // x25
  BattleActionData_o *v33; // x22
  const MethodInfo *v35; // [xsp+8h] [xbp-78h]
  BattleLogicFunction_ProcListInArgs_o *v36; // [xsp+18h] [xbp-68h]

  if ( (byte_49FEDF5 & 1) == 0 )
  {
    sub_1B640C8(&BattleActionData_TypeInfo, *(_QWORD *)&targetId);
    sub_1B640C8(&BattleServantSnapShotOnBuffUpdate_TypeInfo, v16);
    sub_1B640C8(&Method_System_Collections_Generic_List_BattleBuffData_BuffData__get_Count__, v17);
    byte_49FEDF5 = 1;
  }
  data = this->fields.data;
  if ( !data )
    goto LABEL_12;
  ServantData = BattleData__getServantData(data, targetId, 0LL);
  v22 = (BattleServantSnapShotOnBuffUpdate_o *)sub_1B64314(BattleServantSnapShotOnBuffUpdate_TypeInfo, v20, v21);
  BattleServantSnapShotOnBuffUpdate___ctor(v22, ServantData, 0LL);
  if ( !funcEnt )
    goto LABEL_12;
  if ( !baseVals )
    goto LABEL_12;
  vals = funcEnt->fields.vals;
  Value = DataVals__GetValue(baseVals, 0LL);
  Value2 = DataVals__GetValue2(baseVals, 0LL);
  data = (BattleData_o *)DataVals__isParam(baseVals, 89, 0LL);
  if ( !ServantData
    || (v26 = BattleServantData__subBuffFromIndividualites(
                ServantData,
                vals,
                Value,
                Value2,
                1,
                (unsigned __int8)data & 1,
                0LL),
        *subBuffInfo = v26,
        sub_1B6406C((ServantStatusBattleListViewItem_o *)subBuffInfo, (int32_t)v26, v27, v28),
        !*subBuffInfo)
    || (RemovedAllBuffList_k__BackingField = (*subBuffInfo)->fields._RemovedAllBuffList_k__BackingField) == 0LL )
  {
LABEL_12:
    sub_1B64324(data);
  }
  if ( RemovedAllBuffList_k__BackingField->fields._size < 1 )
    return BattleLogicFunction__getNoEffectObject(this, targetId, index, baseVals, isCommandSideEffect, 0LL, 0LL, v31);
  v33 = (BattleActionData_o *)sub_1B64314(BattleActionData_TypeInfo, v29, v30);
  BattleActionData___ctor(v33, 0LL);
  BattleLogicFunction__ApplySubBuffChanges(
    this,
    v33,
    RemovedAllBuffList_k__BackingField,
    targetId,
    v22,
    baseVals,
    index,
    isCommandSideEffect,
    v36,
    v35);
  return v33;
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
  BattleLogicFunction___c__DisplayClass85_0_o *v24; // x19
  BattleData_o *data; // x0
  __int64 v26; // x1
  __int64 v27; // x2
  BattleActionData_o *v28; // x20
  BattleServantData_o *v29; // x22
  int32_t Param; // w26
  int32_t v31; // w28
  __int64 v32; // x1
  __int64 v33; // x2
  __int64 v34; // x27
  BattleServantData_array *FieldAliveLogicServantArray; // x0
  __int64 v36; // x1
  __int64 v37; // x2
  BattleLogicFunction___c_c *v38; // x8
  BattleServantData_array *v39; // x25
  System_Func_object__object__o *_9__85_0; // x20
  Il2CppObject *v41; // x29
  struct BattleLogicFunction___c_StaticFields *static_fields; // x0
  int32_t v43; // w2
  int32_t v44; // w3
  BattleLogicFunctionUtilities_FunctionProgressCache_o *v45; // x29
  BattleLogicFunctionUtilities_FunctionProgressCache_SvtCache_o *ElemByUniqueId; // x19
  __int64 v47; // x1
  __int64 v48; // x2
  BattleLogicSkill_SkillExecArgs_o *v49; // x20
  struct BattleServantSnapShot_o *Before_k__BackingField; // x8
  struct BattleServantSnapShot_o *After_k__BackingField; // x1
  int32_t v52; // w2
  int32_t v53; // w3
  struct BattleServantSnapShot_o *v54; // x8
  __int64 methodPtr_low; // x11
  BattleServantSnapShotShiftServant_o *v56; // x1
  __int64 v57; // x1
  __int64 v58; // x2
  struct BattleLogicFunctionUtilities_FunctionProgressCache_SvtCache_array *SvtCacheArray_k__BackingField; // x19
  int max_length; // w8
  BattleActionData_o *v61; // x27
  unsigned int v62; // w23
  BattleLogicFunctionUtilities_FunctionProgressCache_SvtCache_o *v63; // x22
  struct BattleServantData_o *SvtData_k__BackingField; // x8
  int32_t uniqueId; // w20
  BattleActionData_BuffData_o *v66; // x26
  __int64 v67; // x1
  __int64 v68; // x2
  BattleServantSnapShot_o *v69; // x27
  BattleServantSnapShot_o *v70; // x28
  BattleActionEffect_AddSubChangeMaxHpBuff_o *v71; // x29
  struct BattleServantData_o *v72; // x8
  System_Collections_Generic_IEnumerable_TSource__o *buffdatalist; // x20
  __int64 v74; // x1
  __int64 v75; // x2
  System_Func_object__bool__o *v76; // x21
  struct BattleServantSnapShot_o *v77; // x8
  int32_t nexttpturn; // w1
  struct BattleData_o *v79; // x8
  BattleLogicFunctionUtilities_FunctionProgressCache_SvtCache_o *v81; // [xsp+8h] [xbp-98h]
  BattleServantData_o *v82; // [xsp+10h] [xbp-90h]
  BattleLogicFunction_o *v83; // [xsp+18h] [xbp-88h]
  BattleLogicFunction___c__DisplayClass85_0_o *v84; // [xsp+28h] [xbp-78h]
  BattleActionData_o *v85; // [xsp+30h] [xbp-70h]

  if ( (byte_49FEE05 & 1) == 0 )
  {
    sub_1B640C8(&BattleActionEffect_AddSubChangeMaxHpBuff_TypeInfo, *(_QWORD *)&targetId);
    sub_1B640C8(&BattleActionData_TypeInfo, v11);
    sub_1B640C8(&BattleServantSnapShotShiftServant_TypeInfo, v12);
    sub_1B640C8(&BattleActionData_BuffData_TypeInfo, v13);
    sub_1B640C8(&Method_System_Linq_Enumerable_FirstOrDefault_BattleActionData_BuffData___, v14);
    sub_1B640C8(&System_Func_BattleServantData__BattleServantSnapShot__TypeInfo, v15);
    sub_1B640C8(&System_Func_BattleActionData_BuffData__bool__TypeInfo, v16);
    sub_1B640C8(&BattleLogicFunctionUtilities_FunctionProgressCache_TypeInfo, v17);
    sub_1B640C8(&BattleActionData_ShiftServant_TypeInfo, v18);
    sub_1B640C8(&BattleLogicSkill_SkillExecArgs_TypeInfo, v19);
    sub_1B640C8(&Method_BattleLogicFunction___c__functionTransformServant_b__85_0__, v20);
    sub_1B640C8(&Method_BattleLogicFunction___c__DisplayClass85_0__functionTransformServant_b__1__, v21);
    sub_1B640C8(&BattleLogicFunction___c__DisplayClass85_0_TypeInfo, v22);
    sub_1B640C8(&BattleLogicFunction___c_TypeInfo, v23);
    byte_49FEE05 = 1;
  }
  v24 = (BattleLogicFunction___c__DisplayClass85_0_o *)sub_1B64314(
                                                         BattleLogicFunction___c__DisplayClass85_0_TypeInfo,
                                                         *(_QWORD *)&targetId,
                                                         funcEnt);
  BattleLogicFunction___c__DisplayClass85_0___ctor(v24, 0LL);
  if ( !v24 )
    goto LABEL_49;
  v24->fields.targetId = targetId;
  v28 = (BattleActionData_o *)sub_1B64314(BattleActionData_TypeInfo, v26, v27);
  BattleActionData___ctor(v28, 0LL);
  data = this->fields.data;
  if ( !data )
    goto LABEL_49;
  data = (BattleData_o *)BattleData__getServantData(data, v24->fields.targetId, 0LL);
  if ( !baeVals )
    goto LABEL_49;
  v29 = (BattleServantData_o *)data;
  Param = DataVals__GetParam(baeVals, 6, 0, 0LL);
  v31 = DataVals__GetParam(baeVals, 76, 0, 0LL);
  data = (BattleData_o *)DataVals__IsCancelTransform(baeVals, 0LL);
  if ( ((unsigned __int8)data & 1) != 0 )
  {
    if ( !v29 )
      goto LABEL_49;
    if ( BattleServantData__get_isTransformed(v29, 0LL) )
      Param = -1;
  }
  v84 = v24;
  v34 = sub_1B64314(BattleActionData_ShiftServant_TypeInfo, v32, v33);
  BattleActionData_ShiftServant___ctor((BattleActionData_ShiftServant_o *)v34, funcIndex, 0LL);
  if ( !v34 )
    goto LABEL_49;
  BattleActionData_ShiftServant__setBeforeSvtData((BattleActionData_ShiftServant_o *)v34, v29, 0LL);
  if ( !v28 )
    goto LABEL_49;
  BattleActionData__setShiftServant(v28, (BattleActionData_ShiftServant_o *)v34, 0LL);
  if ( !v29 )
    goto LABEL_49;
  v29->fields.shiftNpcId = -1;
  v29->fields.beforeUserSvtId = -1LL;
  data = this->fields.data;
  if ( !data )
    goto LABEL_49;
  FieldAliveLogicServantArray = BattleData__GetFieldAliveLogicServantArray(data, 3, 0, 0LL);
  v38 = BattleLogicFunction___c_TypeInfo;
  v39 = FieldAliveLogicServantArray;
  if ( !BattleLogicFunction___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BattleLogicFunction___c_TypeInfo);
    v38 = BattleLogicFunction___c_TypeInfo;
  }
  v85 = v28;
  _9__85_0 = (System_Func_object__object__o *)v38->static_fields->__9__85_0;
  if ( !_9__85_0 )
  {
    if ( !v38->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v38);
      v38 = BattleLogicFunction___c_TypeInfo;
    }
    v41 = (Il2CppObject *)v38->static_fields->__9;
    _9__85_0 = (System_Func_object__object__o *)sub_1B64314(
                                                  System_Func_BattleServantData__BattleServantSnapShot__TypeInfo,
                                                  v36,
                                                  v37);
    System_Func_object__object____ctor(
      _9__85_0,
      v41,
      Method_BattleLogicFunction___c__functionTransformServant_b__85_0__,
      0LL);
    static_fields = BattleLogicFunction___c_TypeInfo->static_fields;
    static_fields->__9__85_0 = (struct System_Func_BattleServantData__BattleServantSnapShot__o *)_9__85_0;
    sub_1B6406C((ServantStatusBattleListViewItem_o *)&static_fields->__9__85_0, (int32_t)_9__85_0, v43, v44);
  }
  v45 = (BattleLogicFunctionUtilities_FunctionProgressCache_o *)sub_1B64314(
                                                                  BattleLogicFunctionUtilities_FunctionProgressCache_TypeInfo,
                                                                  v36,
                                                                  v37);
  BattleLogicFunctionUtilities_FunctionProgressCache___ctor(
    v45,
    v39,
    (System_Func_BattleServantData__BattleServantSnapShot__o *)_9__85_0,
    0LL);
  if ( !v45 )
    goto LABEL_49;
  BattleLogicFunctionUtilities_FunctionProgressCache__MakeBeforeSvtCache(v45, 0LL);
  ElemByUniqueId = BattleLogicFunctionUtilities_FunctionProgressCache__GetElemByUniqueId(v45, v24->fields.targetId, 0LL);
  v49 = (BattleLogicSkill_SkillExecArgs_o *)sub_1B64314(BattleLogicSkill_SkillExecArgs_TypeInfo, v47, v48);
  BattleLogicSkill_SkillExecArgs___ctor(v49, 0LL);
  BattleServantData__setTransformServant(v29, this->fields.data, Param, v31, 0, v49, 0LL);
  if ( !ElemByUniqueId )
    goto LABEL_49;
  Before_k__BackingField = ElemByUniqueId->fields._Before_k__BackingField;
  if ( !Before_k__BackingField )
    goto LABEL_49;
  BattleServantData__CheckUpdateUpDownOnlyResultHp(v29, Before_k__BackingField->fields._MaxHp_k__BackingField, 1, 0LL);
  BattleLogicFunctionUtilities_FunctionProgressCache__MakeAfterSvtCache(v45, 0LL);
  After_k__BackingField = ElemByUniqueId->fields._After_k__BackingField;
  *(_QWORD *)(v34 + 72) = After_k__BackingField;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)(v34 + 72), (int32_t)After_k__BackingField, v52, v53);
  v54 = ElemByUniqueId->fields._Before_k__BackingField;
  v81 = ElemByUniqueId;
  if ( !v54 )
    goto LABEL_25;
  methodPtr_low = LOBYTE(BattleServantSnapShotShiftServant_TypeInfo->vtable._0_Equals.methodPtr);
  if ( LOBYTE(v54->klass->vtable._0_Equals.methodPtr) >= (unsigned int)methodPtr_low )
    v56 = (BattleServantSnapShotShiftServant_c *)v54->klass->_2.typeHierarchy[methodPtr_low - 1] == BattleServantSnapShotShiftServant_TypeInfo
        ? (BattleServantSnapShotShiftServant_o *)ElemByUniqueId->fields._Before_k__BackingField
        : 0LL;
  else
LABEL_25:
    v56 = 0LL;
  v83 = this;
  BattleServantData__ApplyCacheForTransformServant(v29, v56, 0LL);
  SvtCacheArray_k__BackingField = v45->fields._SvtCacheArray_k__BackingField;
  if ( !SvtCacheArray_k__BackingField )
LABEL_49:
    sub_1B64324(data);
  max_length = SvtCacheArray_k__BackingField->max_length;
  v61 = v85;
  v82 = v29;
  if ( max_length >= 1 )
  {
    v62 = 0;
    do
    {
      if ( v62 >= max_length )
        sub_1B6432C(data, v57);
      v63 = SvtCacheArray_k__BackingField->m_Items[v62];
      if ( !v63 )
        goto LABEL_49;
      SvtData_k__BackingField = v63->fields._SvtData_k__BackingField;
      if ( !SvtData_k__BackingField )
        goto LABEL_49;
      uniqueId = SvtData_k__BackingField->fields.uniqueId;
      v66 = (BattleActionData_BuffData_o *)sub_1B64314(BattleActionData_BuffData_TypeInfo, v57, v58);
      BattleActionData_BuffData___ctor(v66, 0LL);
      if ( !v66 )
        goto LABEL_49;
      v66->fields.targetId = uniqueId;
      v66->fields.isHideEffect = 1;
      v66->fields.functionIndex = funcIndex;
      v69 = v63->fields._Before_k__BackingField;
      v70 = v63->fields._After_k__BackingField;
      v71 = (BattleActionEffect_AddSubChangeMaxHpBuff_o *)sub_1B64314(
                                                            BattleActionEffect_AddSubChangeMaxHpBuff_TypeInfo,
                                                            v67,
                                                            v68);
      BattleActionEffect_AddSubChangeMaxHpBuff___ctor(v71, uniqueId, v69, v70, 0LL);
      BattleActionData_BuffData__SetActionEffectProc(v66, (BattleActionEffect_Base_o *)v71, 0LL);
      v72 = v63->fields._SvtData_k__BackingField;
      if ( !v72 )
        goto LABEL_49;
      BattleActionData_BuffData__setSaveNp(v66, v72->fields.np, 0LL);
      v61 = v85;
      BattleActionData__setBuffData(v85, v66, 0LL, 0LL);
      max_length = SvtCacheArray_k__BackingField->max_length;
    }
    while ( (int)++v62 < max_length );
  }
  BattleActionData__addReflectLogicResultServantId(v61, v84->fields.targetId, 0LL);
  buffdatalist = (System_Collections_Generic_IEnumerable_TSource__o *)v61->fields.buffdatalist;
  v76 = (System_Func_object__bool__o *)sub_1B64314(System_Func_BattleActionData_BuffData__bool__TypeInfo, v74, v75);
  System_Func_object__bool____ctor(
    v76,
    (Il2CppObject *)v84,
    Method_BattleLogicFunction___c__DisplayClass85_0__functionTransformServant_b__1__,
    0LL);
  data = (BattleData_o *)System_Linq_Enumerable__FirstOrDefault_object__48617700(
                           buffdatalist,
                           (System_Func_TSource__bool__o *)v76,
                           (const MethodInfo_2E5D8E4 *)Method_System_Linq_Enumerable_FirstOrDefault_BattleActionData_BuffData___);
  if ( !procArgs )
    goto LABEL_49;
  if ( procArgs->fields._IsTreasureDvc_k__BackingField )
  {
    v77 = v81->fields._Before_k__BackingField;
    if ( !v77 )
      goto LABEL_49;
    v82->fields.nexttpturn += v82->fields.maxtpturn - v77->fields._MaxTpTurn_k__BackingField;
    if ( data )
    {
      nexttpturn = 0;
LABEL_45:
      BattleActionData_BuffData__SetSaveTpTurn((BattleActionData_BuffData_o *)data, nexttpturn, 0LL);
    }
  }
  else if ( data )
  {
    nexttpturn = v82->fields.nexttpturn;
    goto LABEL_45;
  }
  v79 = v83->fields.data;
  if ( !v79 )
    goto LABEL_49;
  data = (BattleData_o *)v79->fields._FieldEnvData_k__BackingField;
  if ( !data )
    goto LABEL_49;
  BattleFieldEnvironmentData__RemoveBgmNotExistsChangeBgmBuff((BattleFieldEnvironmentData_o *)data, 0LL);
  return v61;
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
  __int64 data; // x0
  BattleServantData_o *v24; // x29
  BattleServantData_o *v25; // x23
  System_Int32_array *FixDamageRates; // x26
  __int64 v27; // x1
  __int64 v28; // x2
  __int64 v29; // x24
  int32_t Param; // w0
  int Random; // w27
  BattleServantData_o *v32; // x19
  int IsIgnoreShiftSafeDamage; // w26
  BattleActionData_o *v34; // x29
  struct BattleSkillInfoData_o *skillInfo; // x8
  DataMasterBase_TMaster__TEntity__PKType__o *v36; // x28
  BattleActionData_o *v37; // x28
  int v38; // w26
  int32_t v39; // w2
  int32_t v40; // w3
  int32_t v41; // w8
  __int64 v42; // x0
  int32_t v43; // w2
  int32_t v44; // w3
  __int64 v45; // x0
  int32_t v46; // w2
  int32_t v47; // w3
  System_Int32_array *v48; // x0
  int32_t v49; // w2
  int32_t v50; // w3
  __int64 v51; // x0
  int32_t v52; // w2
  int32_t v53; // w3
  __int64 v54; // x0
  int32_t v55; // w2
  int32_t v56; // w3
  __int64 v57; // x0
  int32_t v58; // w2
  int32_t v59; // w3
  struct BattleData_o *v60; // x8
  int32_t v61; // w21
  bool IsOpponentPTUniqueID; // w0
  bool v64; // [xsp+14h] [xbp-8Ch]
  int32_t v65; // [xsp+18h] [xbp-88h]
  int32_t v66; // [xsp+1Ch] [xbp-84h]
  Il2CppObject *entity; // [xsp+20h] [xbp-80h] BYREF
  bool minimumDamageFlg; // [xsp+28h] [xbp-78h] BYREF
  float damage; // [xsp+2Ch] [xbp-74h] BYREF
  System_Collections_Generic_List_int__o *v70; // [xsp+30h] [xbp-70h] BYREF
  int32_t hitStat; // [xsp+3Ch] [xbp-64h] BYREF

  if ( (byte_49FEE0C & 1) == 0 )
  {
    sub_1B640C8(&BattleActionData_TypeInfo, *(_QWORD *)&playerId);
    sub_1B640C8(&BattleActionData_DamageValueFuncDamageData_TypeInfo, v15);
    sub_1B640C8(&Method_DataManager_GetMaster_SkillMaster___, v16);
    sub_1B640C8(&DataManager_TypeInfo, v17);
    sub_1B640C8(&Method_DataMasterBase_SkillMaster__SkillEntity__int__TryGetEntity__, v18);
    sub_1B640C8(&int___TypeInfo, v19);
    sub_1B640C8(&Method_System_Collections_Generic_List_int__ToArray__, v20);
    sub_1B640C8(&BattleBuffData_ShowBuffData___TypeInfo, v21);
    byte_49FEE0C = 1;
  }
  v70 = 0LL;
  damage = 0.0;
  minimumDamageFlg = 0;
  entity = 0LL;
  v22 = (BattleActionData_o *)sub_1B64314(BattleActionData_TypeInfo, *(_QWORD *)&playerId, *(_QWORD *)&targetId);
  BattleActionData___ctor(v22, 0LL);
  data = (__int64)this->fields.data;
  if ( !data )
    goto LABEL_53;
  data = (__int64)BattleData__getServantData((BattleData_o *)data, playerId, 0LL);
  if ( !this->fields.data )
    goto LABEL_53;
  v24 = (BattleServantData_o *)data;
  v64 = safe;
  v65 = playerId;
  v66 = funcIndex;
  data = (__int64)BattleData__getServantData(this->fields.data, targetId, 0LL);
  if ( !baseVals )
    goto LABEL_53;
  v25 = (BattleServantData_o *)data;
  FixDamageRates = DataVals__GetFixDamageRates(baseVals, 0LL);
  v29 = sub_1B64314(BattleActionData_DamageValueFuncDamageData_TypeInfo, v27, v28);
  BattleActionData_DamageValueFuncDamageData___ctor(
    (BattleActionData_DamageValueFuncDamageData_o *)v29,
    FixDamageRates,
    0LL);
  LODWORD(FixDamageRates) = DataVals__GetValue(baseVals, 0LL);
  Param = DataVals__GetParam(baseVals, 4, 0, 0LL);
  Random = BattleRandom__getRandom((int32_t)FixDamageRates, Param + 1, 0LL);
  hitStat = 0;
  data = DataVals__IsActNoDamageBuff(baseVals, 0LL);
  if ( (data & 1) != 0 )
  {
    if ( !v25 )
      goto LABEL_53;
    BattleServantData__CheckNoDamageBuff(
      v25,
      this->fields.data,
      v24,
      0LL,
      (BattleActionData_DamageData_o *)v29,
      mainAction,
      0LL);
    damage = (float)Random;
    minimumDamageFlg = 1;
    v32 = v24;
    BattleServantData__CheckInvincibleAvoidanceBuff(
      v25,
      this->fields.data,
      v24,
      0LL,
      (BattleActionData_DamageData_o *)v29,
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
    v32 = v24;
  }
  IsIgnoreShiftSafeDamage = DataVals__IsIgnoreShiftSafeDamage(baseVals, 0LL);
  v34 = mainAction ? v22 : 0LL;
  if ( mainAction && mainAction->fields.skillInfo )
  {
    if ( !DataManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
    data = (__int64)DataManager__GetMaster_object_((const MethodInfo_2E39398 *)Method_DataManager_GetMaster_SkillMaster___);
    skillInfo = mainAction->fields.skillInfo;
    if ( !skillInfo )
      goto LABEL_53;
    v36 = (DataMasterBase_TMaster__TEntity__PKType__o *)data;
    data = ((__int64 (__fastcall *)(struct BattleSkillInfoData_o *, Il2CppMethodPointer))skillInfo->klass->vtable._5_get_skillId.method)(
             mainAction->fields.skillInfo,
             skillInfo->klass->vtable._6_get_IndividualityArray.methodPtr);
    if ( !v36 )
      goto LABEL_53;
    if ( DataMasterBase_object__object__int___TryGetEntity(
           v36,
           &entity,
           data,
           (const MethodInfo_30D3EF8 *)Method_DataMasterBase_SkillMaster__SkillEntity__int__TryGetEntity__) )
    {
      data = (__int64)entity;
      if ( !entity )
        goto LABEL_53;
      IsIgnoreShiftSafeDamage |= SkillEntity__IsCheckUpdateShiftServant((SkillEntity_o *)entity, 0LL);
    }
  }
  else
  {
    v34 = v22;
  }
  data = (__int64)this->fields.data;
  if ( !data )
    goto LABEL_53;
  data = BattleData__IsDeadOkTurn((BattleData_o *)data, targetId, 0LL);
  v37 = (data & 1) != 0 ? 0LL : v34;
  if ( (((unsigned __int8)data | (unsigned __int8)IsIgnoreShiftSafeDamage) & 1) != 0 )
  {
    if ( v64 )
    {
      if ( !v25 )
        goto LABEL_53;
      data = ((__int64 (__fastcall *)(BattleServantData_o *, Il2CppMethodPointer))v25->klass->vtable._13_get_resultHp.method)(
               v25,
               v25->klass->vtable._14_set_resultHp.methodPtr);
      if ( (int)data - Random <= 0 )
      {
        data = ((__int64 (__fastcall *)(BattleServantData_o *, Il2CppMethodPointer))v25->klass->vtable._13_get_resultHp.method)(
                 v25,
                 v25->klass->vtable._14_set_resultHp.methodPtr);
        Random = data - 1;
      }
    }
    v37 = v34;
  }
  else
  {
    if ( !v25 )
      goto LABEL_53;
    v38 = ((__int64 (__fastcall *)(BattleServantData_o *, Il2CppMethodPointer))v25->klass->vtable._9_get_hp.method)(
            v25,
            v25->klass->vtable._10_set_hp.methodPtr);
    data = ((__int64 (__fastcall *)(BattleServantData_o *, Il2CppMethodPointer))v25->klass->vtable._11_get_reducedhp.method)(
             v25,
             v25->klass->vtable._12_set_reducedhp.methodPtr);
    if ( v38 - (int)data >= 1 && v38 - (int)data < Random )
      Random = v38 - data - 1;
  }
  if ( !v29 )
    goto LABEL_53;
  *(_DWORD *)(v29 + 28) = targetId;
  *(_DWORD *)(v29 + 16) = v66;
  data = (__int64)baseVals->fields.funcEnt;
  if ( !data )
    goto LABEL_53;
  data = (__int64)FunctionEntity__getEffectList((FunctionEntity_o *)data, 0LL);
  if ( !data )
    goto LABEL_53;
  if ( *(_QWORD *)(data + 24) )
  {
    *(_QWORD *)(v29 + 136) = data;
    sub_1B6406C((ServantStatusBattleListViewItem_o *)(v29 + 136), data, v39, v40);
  }
  *(_WORD *)(v29 + 32) = 0;
  *(_BYTE *)(v29 + 34) = 0;
  v41 = hitStat;
  *(_BYTE *)(v29 + 40) = 0;
  *(_DWORD *)(v29 + 36) = v41;
  v42 = sub_1B64170(BattleBuffData_ShowBuffData___TypeInfo, 0LL);
  *(_QWORD *)(v29 + 64) = v42;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)(v29 + 64), v42, v43, v44);
  v45 = sub_1B64170(BattleBuffData_ShowBuffData___TypeInfo, 0LL);
  *(_QWORD *)(v29 + 72) = v45;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)(v29 + 72), v45, v46, v47);
  (*(void (__fastcall **)(__int64, System_Collections_Generic_List_int__o **, _QWORD, _QWORD, _QWORD))(*(_QWORD *)v29 + 376LL))(
    v29,
    &v70,
    (unsigned int)Random,
    0LL,
    *(_QWORD *)(*(_QWORD *)v29 + 384LL));
  data = (__int64)v70;
  if ( !v70 )
    goto LABEL_53;
  v48 = System_Collections_Generic_List_int___ToArray(
          v70,
          (const MethodInfo_3491A34 *)Method_System_Collections_Generic_List_int__ToArray__);
  *(_QWORD *)(v29 + 96) = v48;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)(v29 + 96), (int32_t)v48, v49, v50);
  v51 = sub_1B64170(int___TypeInfo, 0LL);
  *(_QWORD *)(v29 + 104) = v51;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)(v29 + 104), v51, v52, v53);
  v54 = sub_1B64170(int___TypeInfo, 0LL);
  *(_QWORD *)(v29 + 112) = v54;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)(v29 + 112), v54, v55, v56);
  v57 = sub_1B64170(int___TypeInfo, 0LL);
  *(_QWORD *)(v29 + 120) = v57;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)(v29 + 120), v57, v58, v59);
  if ( !v25 )
    goto LABEL_53;
  BattleServantData__provisionalDamage(v25, Random, 0LL);
  BattleServantData__ResultDamage(v25, Random, v32, 0LL, 0LL, 0, 0LL);
  data = BattleServantData__isLogicResultAlive(v25, 0LL);
  if ( (data & 1) == 0 )
  {
    v60 = this->fields.data;
    if ( !v60 )
      goto LABEL_53;
    v25->fields.deadTurn = v60->fields.typeTurn;
  }
  data = DataVals__IsActAttackFunction(baseVals, 0LL);
  if ( (data & 1) != 0 )
    BattleActionData_DamageData__addAttackSideEffectAction((BattleActionData_DamageData_o *)v29, 80, 0LL);
  if ( !v37
    || (BattleActionData__SetFuncDamageData(v37, (BattleActionData_DamageData_o *)v29, baseVals, 0LL),
        (data = (__int64)this->fields.data) == 0) )
  {
LABEL_53:
    sub_1B64324(data);
  }
  v61 = *(_DWORD *)(data + 196);
  IsOpponentPTUniqueID = BattleData__IsOpponentPTUniqueID((BattleData_o *)data, targetId, v65, 0LL);
  BattleServantData__setActionHistory(v25, v65, 7, v61, IsOpponentPTUniqueID, 0LL);
  return v37;
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
  __int64 data; // x0
  int Random; // w27
  BattleServantData_o *v28; // x24
  int v29; // w23
  int32_t Param; // w0
  _BOOL8 IsDeadOkTurn; // x0
  const MethodInfo *v32; // x6
  BattleActionData_BuffData_o *v33; // x29
  BattleServantData_o *v34; // x28
  __int64 v35; // x1
  __int64 v36; // x2
  __int64 v37; // x25
  int32_t v38; // w2
  int32_t v39; // w3
  struct BattleBuffData_o *buffData; // x8
  _QWORD *v41; // x23
  __int64 v42; // x8
  __int64 v43; // x0
  __int64 v44; // x0
  __int64 *v45; // x8
  __int64 v46; // x23
  int32_t v47; // w2
  int32_t v48; // w3
  int32_t v49; // w2
  int32_t v50; // w3
  _QWORD *v51; // x23
  __int64 v52; // x8
  __int64 v53; // x0
  __int64 v54; // x0
  __int64 *v55; // x8
  __int64 v56; // x23
  int32_t v57; // w2
  int32_t v58; // w3
  int32_t v59; // w2
  int32_t v60; // w3
  struct BattleBuffData_o *v61; // x8
  ServantStatusBattleListViewItem_o *p_invalidLossHpData; // x0
  int32_t v63; // w1
  bool v64; // w25
  UnityEngine_Object_o *logic; // x23
  int32_t Wave; // w23
  bool IsOpponentPTUniqueID; // w0
  __int64 v68; // x1
  __int64 v69; // x2
  BattleActionEffect_LossHPFunc_o *v70; // x23
  BattleActionData_BuffData_o *v71; // x0
  struct BattleBuffData_o *v72; // x8
  int32_t v73; // w0
  int32_t v75; // [xsp+18h] [xbp-78h]
  int32_t v76; // [xsp+1Ch] [xbp-74h]
  bool v77; // [xsp+20h] [xbp-70h]
  bool v78; // [xsp+24h] [xbp-6Ch]
  bool minimumDamageFlg; // [xsp+28h] [xbp-68h] BYREF
  float damage; // [xsp+2Ch] [xbp-64h] BYREF

  if ( (byte_49FEDFD & 1) == 0 )
  {
    sub_1B640C8(&Method_System_Array_Empty_int___, *(_QWORD *)&playerId);
    sub_1B640C8(&Method_System_Array_Empty_BattleBuffData_ShowBuffData___, v20);
    sub_1B640C8(&BattleActionData_TypeInfo, v21);
    sub_1B640C8(&BattleActionData_DamageData_TypeInfo, v22);
    sub_1B640C8(&BattleActionEffect_LossHPFunc_TypeInfo, v23);
    sub_1B640C8(&UnityEngine_Object_TypeInfo, v24);
    byte_49FEDFD = 1;
  }
  damage = 0.0;
  minimumDamageFlg = 0;
  v25 = (BattleActionData_o *)sub_1B64314(BattleActionData_TypeInfo, *(_QWORD *)&playerId, *(_QWORD *)&targetId);
  BattleActionData___ctor(v25, 0LL);
  data = (__int64)this->fields.data;
  if ( !data )
    goto LABEL_67;
  v78 = safe;
  data = (__int64)BattleData__getServantData((BattleData_o *)data, targetId, 0LL);
  if ( !data )
    goto LABEL_67;
  Random = overwriteLossHp;
  v28 = (BattleServantData_o *)data;
  data = (*(__int64 (__fastcall **)(__int64, _QWORD))(*(_QWORD *)data + 520LL))(
           data,
           *(_QWORD *)(*(_QWORD *)data + 528LL));
  v29 = data;
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
  if ( v29 < 1 )
    return 0LL;
  data = (__int64)this->fields.data;
  if ( !data )
    goto LABEL_67;
  IsDeadOkTurn = BattleData__IsDeadOkTurn((BattleData_o *)data, targetId, 0LL);
  v76 = funcIndex;
  v77 = IsDeadOkTurn;
  data = (__int64)BattleLogicFunction__getFunctionObject(
                    (BattleLogicFunction_o *)IsDeadOkTurn,
                    funcEnt,
                    v28->fields.uniqueId,
                    funcIndex,
                    isCommandSideEffect,
                    0LL,
                    v32);
  if ( !this->fields.data )
    goto LABEL_67;
  v33 = (BattleActionData_BuffData_o *)data;
  data = (__int64)BattleData__getServantData(this->fields.data, playerId, 0LL);
  if ( !baseVals )
    goto LABEL_67;
  v34 = (BattleServantData_o *)data;
  v75 = v29;
  if ( DataVals__IsActNoDamageBuff(baseVals, 0LL) )
  {
    v37 = sub_1B64314(BattleActionData_DamageData_TypeInfo, v35, v36);
    BattleActionData_DamageData___ctor((BattleActionData_DamageData_o *)v37, 0LL);
    BattleServantData__CheckNoDamageBuff(
      v28,
      this->fields.data,
      v34,
      0LL,
      (BattleActionData_DamageData_o *)v37,
      mainAction,
      0LL);
    damage = (float)Random;
    minimumDamageFlg = 1;
    if ( !v37 )
      goto LABEL_67;
    *(_DWORD *)(v37 + 36) = 0;
    BattleServantData__CheckInvincibleAvoidanceBuff(
      v28,
      this->fields.data,
      v34,
      0LL,
      (BattleActionData_DamageData_o *)v37,
      &damage,
      &minimumDamageFlg,
      (int32_t *)(v37 + 36),
      mainAction,
      0LL);
    buffData = v28->fields.buffData;
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
        sub_1BB6000(Method_System_Array_Empty_BattleBuffData_ShowBuffData___);
        v42 = v41[7];
      }
      v43 = *(_QWORD *)(v42 + 16);
      if ( (*(_BYTE *)(v43 + 309) & 1) == 0 )
        v43 = sub_1BB5FA4(v43);
      if ( !*(_DWORD *)(v43 + 224) )
        j_il2cpp_runtime_class_init_0(v43);
      v44 = *(_QWORD *)(v41[7] + 16LL);
      if ( (*(_BYTE *)(v44 + 309) & 1) == 0 )
        v44 = sub_1BB5FA4(v44);
      v45 = *(__int64 **)(v44 + 184);
      v46 = *v45;
      *(_QWORD *)(v37 + 72) = *v45;
      sub_1B6406C((ServantStatusBattleListViewItem_o *)(v37 + 72), v46, v38, v39);
      *(_QWORD *)(v37 + 64) = v46;
      sub_1B6406C((ServantStatusBattleListViewItem_o *)(v37 + 64), v46, v47, v48);
      v51 = Method_System_Array_Empty_int___;
      v52 = *((_QWORD *)Method_System_Array_Empty_int___ + 7);
      if ( !v52 )
      {
        sub_1BB6000(Method_System_Array_Empty_int___);
        v52 = v51[7];
      }
      v53 = *(_QWORD *)(v52 + 16);
      if ( (*(_BYTE *)(v53 + 309) & 1) == 0 )
        v53 = sub_1BB5FA4(v53);
      if ( !*(_DWORD *)(v53 + 224) )
        j_il2cpp_runtime_class_init_0(v53);
      v54 = *(_QWORD *)(v51[7] + 16LL);
      if ( (*(_BYTE *)(v54 + 309) & 1) == 0 )
        v54 = sub_1BB5FA4(v54);
      v55 = *(__int64 **)(v54 + 184);
      v56 = *v55;
      *(_QWORD *)(v37 + 120) = *v55;
      sub_1B6406C((ServantStatusBattleListViewItem_o *)(v37 + 120), v56, v49, v50);
      *(_QWORD *)(v37 + 112) = v56;
      sub_1B6406C((ServantStatusBattleListViewItem_o *)(v37 + 112), v56, v57, v58);
      *(_QWORD *)(v37 + 104) = v56;
      sub_1B6406C((ServantStatusBattleListViewItem_o *)(v37 + 104), v56, v59, v60);
      v61 = v28->fields.buffData;
      if ( !v61 )
        goto LABEL_67;
      *(_BYTE *)(v37 + 53) = v61->fields.isNoDamage;
      if ( !v33 )
        goto LABEL_67;
      v33->fields.invalidLossHpData = (struct BattleActionData_DamageData_o *)v37;
      p_invalidLossHpData = (ServantStatusBattleListViewItem_o *)&v33->fields.invalidLossHpData;
      v63 = v37;
    }
    else
    {
      if ( !v33 )
        goto LABEL_67;
      v33->fields.invalidLossHpData = 0LL;
      p_invalidLossHpData = (ServantStatusBattleListViewItem_o *)&v33->fields.invalidLossHpData;
      v63 = 0;
    }
    sub_1B6406C(p_invalidLossHpData, v63, v38, v39);
  }
  v64 = !v77 || v78;
  BattleServantData__ResultDamage(v28, Random, v34, 0LL, 0LL, v64, 0LL);
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
        BattleServantData__setActionHistory(v28, playerId, 3, Wave, IsOpponentPTUniqueID, 0LL),
        !v33)
    || (v33->fields.procType = 2,
        v70 = (BattleActionEffect_LossHPFunc_o *)sub_1B64314(BattleActionEffect_LossHPFunc_TypeInfo, v68, v69),
        BattleActionEffect_LossHPFunc___ctor(v70, targetId, Random, v64, 0LL),
        BattleActionData_BuffData__SetActionEffectProc(v33, (BattleActionEffect_Base_o *)v70, 0LL),
        !v25) )
  {
LABEL_67:
    sub_1B64324(data);
  }
  BattleActionData__setBuffData(v25, v33, baseVals, 0LL);
  data = DataVals__isLossHpChangeDamage(baseVals, 0LL);
  if ( (data & 1) != 0 )
  {
    if ( !DataVals__IsActNoDamageBuff(baseVals, 0LL) )
    {
      data = (__int64)v28->fields.buffData;
      if ( !data )
        goto LABEL_67;
      goto LABEL_61;
    }
    data = DataVals__IsActNoDamageBuff(baseVals, 0LL);
    if ( (data & 1) != 0 )
    {
      data = (__int64)v28->fields.buffData;
      if ( !data )
        goto LABEL_67;
      if ( !*(_BYTE *)(data + 152) )
      {
LABEL_61:
        v71 = BattleBuffData__UseFieldProgressingDoNotAct((BattleBuffData_o *)data, v28, v76, 0LL);
        BattleActionData__setBuffData(v25, v71, baseVals, 0LL);
      }
    }
  }
  v72 = v28->fields.buffData;
  if ( !v72 )
    goto LABEL_67;
  v72->fields.isNoDamage = 0;
  data = (__int64)this->fields.data;
  if ( !data )
    goto LABEL_67;
  if ( v28->fields.isEnemy != BattleData__isEnemyID((BattleData_o *)data, playerId, 0LL) )
  {
    v73 = ((__int64 (__fastcall *)(BattleServantData_o *, Il2CppMethodPointer))v28->klass->vtable._13_get_resultHp.method)(
            v28,
            v28->klass->vtable._14_set_resultHp.methodPtr);
    BattleServantData__procAccumulationDamage(v28, v75, v73, 0LL);
  }
  return v25;
}


FunctionMaster_o *__fastcall BattleLogicFunction__getFuncMaster(BattleLogicFunction_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  FunctionMaster_o *result; // x0
  ServantStatusBattleListViewItem_o *p_master; // x19
  FunctionMaster_o *master; // t1
  Il2CppObject *Instance; // x0
  Il2CppObject *MasterData_object; // x0
  int32_t v9; // w2
  int32_t v10; // w3

  if ( (byte_49FEDDE & 1) == 0 )
  {
    sub_1B640C8(&Method_DataManager_GetMasterData_FunctionMaster___, method);
    sub_1B640C8(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v3);
    byte_49FEDDE = 1;
  }
  master = this->fields.master;
  p_master = (ServantStatusBattleListViewItem_o *)&this->fields.master;
  result = master;
  if ( !master )
  {
    Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EC03C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !Instance )
      sub_1B64324(0LL);
    MasterData_object = DataManager__GetMasterData_object_(
                          (DataManager_o *)Instance,
                          (const MethodInfo_2E393EC *)Method_DataManager_GetMasterData_FunctionMaster___);
    p_master->klass = (ServantStatusBattleListViewItem_c *)MasterData_object;
    sub_1B6406C(p_master, (int32_t)MasterData_object, v9, v10);
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
  ServantStatusBattleListViewItem_o *p_master; // x20
  struct FunctionMaster_o *master; // t1
  Il2CppObject *MasterData_object; // x0
  int32_t v11; // w2
  int32_t v12; // w3

  if ( (byte_49FEDDD & 1) == 0 )
  {
    sub_1B640C8(&Method_DataManager_GetMasterData_FunctionMaster___, *(_QWORD *)&id);
    sub_1B640C8(&Method_DataMasterBase_FunctionMaster__FunctionEntity__int__GetEntity__, v5);
    sub_1B640C8(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v6);
    byte_49FEDDD = 1;
  }
  master = this->fields.master;
  p_master = (ServantStatusBattleListViewItem_o *)&this->fields.master;
  Instance = (Il2CppObject *)master;
  if ( !master )
  {
    Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EC03C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !Instance
      || (MasterData_object = DataManager__GetMasterData_object_(
                                (DataManager_o *)Instance,
                                (const MethodInfo_2E393EC *)Method_DataManager_GetMasterData_FunctionMaster___),
          p_master->klass = (ServantStatusBattleListViewItem_c *)MasterData_object,
          sub_1B6406C(p_master, (int32_t)MasterData_object, v11, v12),
          (Instance = (Il2CppObject *)p_master->klass) == 0LL) )
    {
      sub_1B64324(Instance);
    }
  }
  return (FunctionEntity_o *)DataMasterBase_object__object__int___GetEntity(
                               (DataMasterBase_TMaster__TEntity__PKType__o *)Instance,
                               id,
                               (const MethodInfo_30D3EA4 *)Method_DataMasterBase_FunctionMaster__FunctionEntity__int__GetEntity__);
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
  int32_t v15; // w3

  if ( (byte_49FEE06 & 1) == 0 )
  {
    this = (BattleLogicFunction_o *)sub_1B640C8(&BattleActionData_BuffData_TypeInfo, funcEnt);
    byte_49FEE06 = 1;
  }
  if ( !defBuffData
    && (defBuffData = (BattleActionData_BuffData_o *)sub_1B64314(
                                                       BattleActionData_BuffData_TypeInfo,
                                                       funcEnt,
                                                       *(_QWORD *)&uniqueId),
        BattleActionData_BuffData___ctor(defBuffData, 0LL),
        !defBuffData)
    || (defBuffData->fields.targetId = uniqueId, defBuffData->fields.functionIndex = funcIndex, !funcEnt) )
  {
    sub_1B64324(this);
  }
  popupText = funcEnt->fields.popupText;
  defBuffData->fields.popLabel = popupText;
  sub_1B6406C(
    (ServantStatusBattleListViewItem_o *)&defBuffData->fields.popLabel,
    (int32_t)popupText,
    uniqueId,
    funcIndex);
  *(_QWORD *)&defBuffData->fields.popIcon = *(_QWORD *)&funcEnt->fields.popupIconId;
  EffectList = FunctionEntity__getEffectList(funcEnt, 0LL);
  defBuffData->fields.effectList = EffectList;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)&defBuffData->fields.effectList, (int32_t)EffectList, v14, v15);
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

  if ( (byte_49FEDE2 & 1) == 0 )
  {
    sub_1B640C8(
      &Method_System_Collections_Generic_Dictionary_FuncList_TYPE__BattleLogicFunctionProcess_BaseFunctionTypeProcess__ContainsKey__,
      *(_QWORD *)&functType);
    sub_1B640C8(
      &Method_System_Collections_Generic_Dictionary_FuncList_TYPE__BattleLogicFunctionProcess_BaseFunctionTypeProcess__get_Item__,
      v5);
    byte_49FEDE2 = 1;
  }
  dicFuncProcess = (System_Collections_Generic_Dictionary_TKey__TValue__o *)this->fields.dicFuncProcess;
  if ( !dicFuncProcess
    || (dicFuncProcess = (System_Collections_Generic_Dictionary_TKey__TValue__o *)System_Collections_Generic_Dictionary_Int32Enum__object___ContainsKey(
                                                                                    dicFuncProcess,
                                                                                    functType,
                                                                                    (const MethodInfo_3152A34 *)Method_System_Collections_Generic_Dictionary_FuncList_TYPE__BattleLogicFunctionProcess_BaseFunctionTypeProcess__ContainsKey__),
        !this->fields.dicFuncProcess)
    || (((unsigned __int8)dicFuncProcess & 1) == 0 ? (v7 = 0) : (v7 = functType),
        (dicFuncProcess = (System_Collections_Generic_Dictionary_TKey__TValue__o *)System_Collections_Generic_Dictionary_Int32Enum__object___get_Item(
                                                                                     (System_Collections_Generic_Dictionary_TKey__TValue__o *)this->fields.dicFuncProcess,
                                                                                     v7,
                                                                                     (const MethodInfo_31527A0 *)Method_System_Collections_Generic_Dictionary_FuncList_TYPE__BattleLogicFunctionProcess_BaseFunctionTypeProcess__get_Item__)) == 0LL) )
  {
    sub_1B64324(dicFuncProcess);
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
  const MethodInfo *v10; // x6

  if ( (byte_49FEDF3 & 1) == 0 )
  {
    sub_1B640C8(&BattleActionData_TypeInfo, *(_QWORD *)&targetId);
    byte_49FEDF3 = 1;
  }
  v8 = (BattleActionData_o *)sub_1B64314(BattleActionData_TypeInfo, *(_QWORD *)&targetId, *(_QWORD *)&funcIndex);
  BattleActionData___ctor(v8, 0LL);
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
    sub_1B64324(GrayActionBuffData);
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
    sub_1B64324(this);
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
  __int64 v22; // x1
  __int64 v23; // x2
  int32_t v24; // w3
  __int64 v25; // x0
  __int64 v26; // x0
  int32_t v27; // w2
  int32_t v28; // w3

  v10 = defBuffData;
  if ( (byte_49FEDEF & 1) == 0 )
  {
    sub_1B640C8(&BattleActionData_TypeInfo, *(_QWORD *)&targetId);
    sub_1B640C8(&BattleActionData_BuffData_TypeInfo, v18);
    sub_1B640C8(&int___TypeInfo, v19);
    sub_1B640C8(&StringLiteral_1/*""*/, v20);
    byte_49FEDEF = 1;
  }
  v21 = (BattleActionData_o *)sub_1B64314(BattleActionData_TypeInfo, *(_QWORD *)&targetId, *(_QWORD *)&funcIndex);
  BattleActionData___ctor(v21, 0LL);
  if ( !defBuffData )
  {
    v10 = (BattleActionData_BuffData_o *)sub_1B64314(BattleActionData_BuffData_TypeInfo, v22, v23);
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
  sub_1B6406C((ServantStatusBattleListViewItem_o *)&v10->fields.popLabel, (int32_t)dispName, v23, v24);
  v26 = sub_1B64170(int___TypeInfo, 0LL);
  v10->fields.effectList = (struct System_Int32_array *)v26;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)&v10->fields.effectList, v26, v27, v28);
  if ( !v21
    || (BattleActionData__setBuffData(v21, v10, 0LL, 0LL),
        v10->fields.IsNoEffect = isNoEffect,
        v10->fields.isCommandAfter = isCommandSideEffect,
        !dataVals) )
  {
LABEL_10:
    sub_1B64324(v25);
  }
  v10->fields.popDelay = DataVals__GetParam(dataVals, 64, 0, 0LL);
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
  if ( (byte_49FEDF0 & 1) != 0 )
  {
    if ( uniqueText )
      goto LABEL_3;
  }
  else
  {
    sub_1B640C8(&LocalizationManager_TypeInfo, *(_QWORD *)&targetId);
    this = (BattleLogicFunction_o *)sub_1B640C8(&StringLiteral_2901/*"BATTLE_MISS_FUNCTION"*/, v16);
    byte_49FEDF0 = 1;
    if ( v9 )
    {
LABEL_3:
      if ( dataVals )
        goto LABEL_4;
LABEL_9:
      sub_1B64324(this);
    }
  }
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  this = (BattleLogicFunction_o *)LocalizationManager__Get((System_String_o *)StringLiteral_2901/*"BATTLE_MISS_FUNCTION"*/, 0LL);
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
  _BOOL8 isHideNoEffect; // x0
  __int64 v16; // x1
  const MethodInfo *v17; // [xsp+8h] [xbp-48h]

  v9 = uniqueText;
  if ( (byte_49FEDF1 & 1) != 0 )
  {
    if ( uniqueText )
      goto LABEL_3;
  }
  else
  {
    sub_1B640C8(&LocalizationManager_TypeInfo, *(_QWORD *)&targetId);
    this = (BattleLogicFunction_o *)sub_1B640C8(&StringLiteral_2912/*"BATTLE_NO_EFFECT_FUNCTION"*/, v16);
    byte_49FEDF1 = 1;
    if ( v9 )
    {
LABEL_3:
      if ( dataVals )
        goto LABEL_4;
LABEL_9:
      sub_1B64324(this);
    }
  }
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  this = (BattleLogicFunction_o *)LocalizationManager__Get((System_String_o *)StringLiteral_2912/*"BATTLE_NO_EFFECT_FUNCTION"*/, 0LL);
  v9 = (System_String_o *)this;
  if ( !dataVals )
    goto LABEL_9;
LABEL_4:
  isHideNoEffect = DataVals__isHideNoEffect(dataVals, 0LL);
  return BattleLogicFunction__getInvalidObject(
           (BattleLogicFunction_o *)isHideNoEffect,
           targetId,
           funcIndex,
           isHideNoEffect,
           v9,
           dataVals,
           isCommandSideEffect,
           1,
           defBuffData,
           v17);
}


// local variable allocation has failed, the output may be wrong!
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
  BattleData_o *data; // x22
  int32_t actorId; // w24
  int32_t targetId; // w25
  int32_t PTTargetId; // w0
  System_Collections_Generic_IEnumerable_TSource__o *TargetIds_37401508; // x20
  __int64 v20; // x1
  __int64 v21; // x2
  System_Func_int__bool__o *v22; // x21
  System_Collections_Generic_IEnumerable_TSource__o *v23; // x0

  if ( (byte_49FEDE9 & 1) == 0 )
  {
    sub_1B640C8(&Method_BattleLogicFunction__getTargetids_b__55_0__, mainAction);
    sub_1B640C8(&Target_BattleTargetArgs_TypeInfo, v9);
    sub_1B640C8(&Method_System_Linq_Enumerable_ToArray_int___, v10);
    sub_1B640C8(&Method_System_Linq_Enumerable_Where_int___, v11);
    sub_1B640C8(&System_Func_int__bool__TypeInfo, v12);
    byte_49FEDE9 = 1;
  }
  args = (Target_BattleTargetArgs_o *)sub_1B64314(Target_BattleTargetArgs_TypeInfo, mainAction, *(_QWORD *)&targetType);
  Target_BattleTargetArgs___ctor(args, dataVals, 0LL);
  if ( !mainAction )
    sub_1B64324(v14);
  data = this->fields.data;
  actorId = mainAction->fields.actorId;
  targetId = mainAction->fields.targetId;
  PTTargetId = BattleActionData__getPTTargetId(mainAction, 0LL);
  TargetIds_37401508 = (System_Collections_Generic_IEnumerable_TSource__o *)Target__getTargetIds_37401508(
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
  v22 = (System_Func_int__bool__o *)sub_1B64314(System_Func_int__bool__TypeInfo, v20, v21);
  System_Func_int__bool____ctor(v22, (Il2CppObject *)this, Method_BattleLogicFunction__getTargetids_b__55_0__, 0LL);
  v23 = System_Linq_Enumerable__Where_int_(
          TargetIds_37401508,
          (System_Func_TSource__bool__o *)v22,
          (const MethodInfo_2E76DC8 *)Method_System_Linq_Enumerable_Where_int___);
  return System_Linq_Enumerable__ToArray_int_(
           v23,
           (const MethodInfo_2E7122C *)Method_System_Linq_Enumerable_ToArray_int___);
}


BattleFieldEnvironmentData_o *__fastcall BattleLogicFunction__get_FieldEnvData(
        BattleLogicFunction_o *this,
        const MethodInfo *method)
{
  struct BattleData_o *data; // x8

  data = this->fields.data;
  if ( !data )
    sub_1B64324(this);
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
    sub_1B64324(this);
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
    sub_1B64324(this);
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
    sub_1B64324(this);
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
        sub_1B6432C(this, *(_QWORD *)&uniqueId);
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
    sub_1B64324(this);
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
  __int64 v64; // x1
  __int64 v65; // x1
  __int64 v66; // x1
  __int64 v67; // x1
  __int64 v68; // x1
  __int64 v69; // x1
  __int64 v70; // x1
  System_String_o *v71; // x0
  System_String_o *v72; // x0
  int32_t PTSubTargetId; // w29
  System_String_o *v74; // x0
  int32_t v75; // w2
  int32_t v76; // w3
  struct BattleData_o *data; // x8
  __int64 v78; // x1
  __int64 v79; // x2
  __int64 v80; // x1
  __int64 v81; // x2
  UnityEngine_Object_o *logic; // x24
  BattleLogicFunction_ProcListInArgs_o *v83; // x24
  int32_t *p_actSetId; // x24
  __int64 v85; // x1
  __int64 v86; // x2
  WeightRate_int__o *v87; // x23
  __int64 v88; // x1
  signed int max_length; // w8
  unsigned int v90; // w28
  Il2CppClass **v91; // x8
  DataVals_o *v92; // x25
  int32_t ActSetWeight; // w26
  int32_t Random; // w0
  System_String_o *v95; // x0
  __int64 v96; // x1
  __int64 v97; // x2
  BattleLogicFunction___c_c *v98; // x0
  System_Object_array *funcUnitArray_k__BackingField; // x21
  System_Func_object__bool__o *_9__41_0; // x22
  Il2CppObject *v101; // x23
  struct BattleLogicFunction___c_StaticFields *static_fields; // x0
  int32_t v103; // w2
  int32_t v104; // w3
  __int64 v105; // x1
  __int64 v106; // x2
  BattleLogicFunction___c_c *v107; // x0
  System_Collections_Generic_IEnumerable_TSource__o *v108; // x21
  System_Func_object__bool__o *_9__41_1; // x22
  Il2CppObject *v110; // x23
  struct BattleLogicFunction___c_StaticFields *v111; // x0
  int32_t v112; // w2
  int32_t v113; // w3
  int v114; // w21
  bool v115; // w22
  BattleServantData_o *v116; // x25
  __int64 v117; // x2
  SkillValueUpApplierPlayerMaster_o *v118; // x23
  BattleData_o *v119; // x21
  struct BattleLogicFunctionProcess_FunctionUnitCheck_array *v120; // x8
  int v121; // w8
  struct BattleLogicFunctionProcess_FunctionUnitCheck_array *v122; // x23
  BattleLogicFunction_FuncSideEffectFunctionArgument_o *v123; // x26
  int v124; // w27
  BattleLogicFunctionProcess_FunctionUnitCheck_o *v125; // x21
  DataVals_o *dataVals_k__BackingField; // x29
  const MethodInfo *v127; // x3
  const MethodInfo *v128; // x4
  __int64 v129; // x2
  BattleLogicFunction___c_c *v130; // x0
  System_Collections_Generic_IEnumerable_TSource__o *funcTargetArray_k__BackingField; // x21
  System_Func_object__bool__o *_9__41_2; // x27
  Il2CppObject *v133; // x28
  struct BattleLogicFunction___c_StaticFields *v134; // x0
  int32_t v135; // w2
  int32_t v136; // w3
  __int64 v137; // x1
  __int64 v138; // x2
  System_Collections_Generic_IEnumerable_TSource__o *v139; // x21
  BattleLogicFunction___c_c *v140; // x8
  System_Func_object__int__o *_9__41_3; // x27
  Il2CppObject *v142; // x28
  struct BattleLogicFunction___c_StaticFields *v143; // x0
  int32_t v144; // w2
  int32_t v145; // w3
  System_Collections_Generic_IEnumerable_TSource__o *v146; // x0
  System_Int32_array *v147; // x21
  bool v148; // w27
  __int64 v149; // x1
  __int64 v150; // x2
  BattleLogicFunction_PreAttackSideEffectMakeArgument_o *v151; // x28
  BattleLogicFunction_SideEffectMakeArgument_o *v152; // x0
  const MethodInfo *v153; // x5
  struct BattleLogicFunctionProcess_FunctionTargetCheck_array *v154; // x25
  int v155; // w8
  int i; // w23
  BattleLogicFunctionProcess_FunctionTargetCheck_o *v157; // x28
  int32_t targetId_k__BackingField; // w21
  BattleLogicFunction_o *v159; // x27
  const MethodInfo *v160; // x7
  BattleActionData_o *NoEffectObject; // x0
  int32_t *v162; // x24
  struct System_Int32_array *vals; // x8
  int32_t commandType; // w8
  BattleActionData_o *v165; // x0
  bool v166; // w0
  const MethodInfo *v167; // x5
  const MethodInfo *v168; // x3
  int32_t actorId; // w28
  int32_t v170; // w22
  bool isSafeDamage; // w0
  int32_t v172; // w2
  const MethodInfo *v173; // x7
  const MethodInfo *v174; // x7
  int32_t v175; // w1
  int32_t v176; // w2
  int32_t v177; // w5
  bool isDamage; // w0
  int v179; // w9
  int v180; // w8
  int32_t v181; // w1
  struct System_Int32_array *items; // x8
  _QWORD *v183; // x9
  __int64 size; // x10
  BattleActionData_o *v185; // x0
  BattleData_o *v186; // x28
  int32_t Value; // w24
  BattleLogicFunction_o *v188; // x0
  const MethodInfo *v189; // x6
  BattleData_o *v190; // x28
  const MethodInfo *v191; // x7
  bool isUnaffected; // w22
  int CorrectedValueFuncGainNp; // w28
  bool isGainNp; // w0
  const MethodInfo *v195; // x7
  BattleLogicFunction_o *v196; // x0
  int32_t v197; // w22
  const MethodInfo *v198; // x6
  BattleActionData_BuffData_o *v199; // x28
  int32_t v200; // w0
  BattleLogicFunction_o *v201; // x0
  int32_t v202; // w24
  const MethodInfo *v203; // x6
  int32_t v204; // w1
  int32_t v205; // w22
  System_Int32_array *TargetList; // x28
  int32_t v207; // w0
  const MethodInfo *v208; // x6
  int32_t v209; // w22
  System_Int32_array *v210; // x28
  int32_t v211; // w0
  int32_t v212; // w2
  FunctionEntity_o *v213; // x1
  BattleActionData_BuffData_o *FunctionObject; // x0
  BattleLogicFunction_o *v215; // x0
  int32_t v216; // w1
  const MethodInfo *v217; // x3
  int32_t v218; // w22
  bool v219; // w0
  bool v220; // w8
  bool v221; // w6
  bool v222; // w7
  BattleLogicFunction_o *v223; // x0
  int32_t v224; // w1
  BattleActionData_o *v225; // x0
  const MethodInfo *v226; // x7
  const MethodInfo *v227; // x7
  const MethodInfo *v228; // x6
  int32_t v229; // w1
  FunctionEntity_o *v230; // x2
  DataVals_o *v231; // x3
  int32_t v232; // w4
  const MethodInfo *v233; // x5
  BattleActionData_o *v234; // x0
  FunctionEntity_o *v235; // x1
  FunctionEntity_o *v236; // x3
  DataVals_o *v237; // x4
  const MethodInfo *v238; // x6
  int32_t applyTarget; // w8
  FunctionEntity_o *v240; // x2
  const MethodInfo *v241; // x6
  BattleActionData_o *v242; // x0
  const MethodInfo *v243; // x5
  BattleActionData_o *v244; // x0
  FunctionEntity_o *v245; // x2
  const MethodInfo *v246; // x6
  int32_t v247; // w1
  FunctionEntity_o *v248; // x2
  DataVals_o *v249; // x3
  int32_t v250; // w4
  const MethodInfo *v251; // x5
  BattleActionData_o *v252; // x0
  FunctionEntity_o *v253; // x3
  int32_t v254; // w5
  const MethodInfo *v255; // x6
  _BOOL8 v256; // x0
  FunctionEntity_o *v257; // x2
  int32_t v258; // w4
  const MethodInfo *v259; // x5
  const MethodInfo *v260; // x3
  int32_t v261; // w22
  int32_t v262; // w28
  char v263; // w5
  const MethodInfo *v264; // x7
  BattleLogicFunction_o *v265; // x0
  int32_t v266; // w1
  int32_t v267; // w2
  int32_t v268; // w2
  int32_t v269; // w3
  struct BattleData_o *v270; // x8
  struct BattleCommandData_array *draw_commandlist; // x1
  int v272; // w22
  __int64 v273; // x1
  __int64 v274; // x2
  bool v275; // w28
  BattleServantSnapShotOnBuffUpdate_o *v276; // x24
  System_Int32_array *v277; // x0
  BattleData_o *v278; // x24
  int32_t v279; // w28
  __int64 v280; // x1
  __int64 v281; // x2
  Generator_BGMFromChangeBGMFunc_o *v282; // x22
  const MethodInfo *v283; // x4
  const MethodInfo *v284; // x6
  System_Int32_array *v285; // x28
  int32_t SameIndiualityBuffSum; // w0
  int32_t v287; // w28
  bool v288; // w4
  int32_t v289; // w2
  DataVals_o *v290; // x3
  BattleActionData_BuffData_o *v291; // x6
  const MethodInfo *v292; // x7
  int32_t v293; // w1
  int32_t v294; // w2
  int32_t v295; // w5
  const MethodInfo *v296; // x4
  const MethodInfo *v297; // x4
  _BOOL8 v298; // x0
  const MethodInfo *v299; // x3
  bool v300; // w28
  int32_t HpPerValue; // w0
  const MethodInfo *v302; // x3
  bool v303; // w2
  BattleLogicFunction_o *v304; // x0
  DataVals_o *v305; // x1
  _BOOL8 updated; // x0
  __int64 v307; // x1
  __int64 v308; // x2
  const MethodInfo *v309; // x6
  BattleActionData_MasterBuffData_o *v310; // x24
  __int64 v311; // x1
  __int64 v312; // x2
  Generator_BGFromQuickChangeBGFunc_o *v313; // x22
  const MethodInfo *v314; // x3
  int32_t Param; // w0
  const MethodInfo *v316; // x4
  BattleBuffData_o *wkStr; // x28
  __int64 v318; // x1
  __int64 v319; // x2
  BattleActionData_UpShiftGaugeData_o *v320; // x22
  const MethodInfo *v321; // x5
  __int64 v322; // x1
  __int64 v323; // x2
  DataVals_o *v324; // x3
  const MethodInfo *v325; // x5
  BattleActionData_o *SubMember; // x0
  const MethodInfo *v327; // x3
  const MethodInfo *v328; // x6
  const MethodInfo *v329; // x4
  const MethodInfo *v330; // x3
  _BOOL8 v331; // x0
  const MethodInfo *v332; // x3
  const MethodInfo *v333; // x2
  const MethodInfo *v334; // x2
  const MethodInfo *v335; // x5
  const MethodInfo *v336; // x4
  const MethodInfo *v337; // x4
  int32_t v338; // w0
  const MethodInfo *v339; // x2
  const MethodInfo *v340; // x2
  const MethodInfo *v341; // x2
  __int64 klass_high; // x22
  int32_t v343; // w2
  const MethodInfo *v344; // x6
  float v345; // s0
  int32_t v346; // w5
  __int64 v347; // x22
  float v348; // s0
  int v349; // w8
  BattleLogicFunction_o *v350; // x0
  int32_t v351; // w22
  const MethodInfo *v352; // x6
  const MethodInfo *v353; // x4
  int v354; // w27
  bool v355; // w21
  __int64 v356; // x1
  __int64 v357; // x2
  BattleLogicFunction_AfterAttackSideEffectMakeArgument_o *v358; // x22
  BattleLogicFunction_SideEffectMakeArgument_o *Argument__Init; // x0
  const MethodInfo *v360; // x5
  __int64 v361; // x2
  BattleLogicFunction_o *v362; // x21
  BattleCommandData_o *v363; // x22
  UnityEngine_Object_o *v364; // x23
  struct BattleLogic_o *v365; // x8
  unsigned __int64 v366; // x23
  UnityEngine_Object_o *v367; // x21
  int v368; // w8
  BattleLogicFunction_o *v369; // x21
  unsigned int v370; // w22
  __int64 v371; // x8
  BattleLogicFunction_FuncSideEffectFunctionArgument_o *FuncSideEffectArg; // x0
  UnityEngine_Object_o *v373; // x21
  struct BattleData_o *v374; // x8
  UnityEngine_Object_o *v375; // x21
  BattleData_o *v376; // x0
  BattleServantData_o *v377; // x0
  const MethodInfo *overwriteLossHp; // [xsp+0h] [xbp-190h]
  int32_t overwriteLossHpa; // [xsp+0h] [xbp-190h]
  const MethodInfo *isRandomDamage; // [xsp+8h] [xbp-188h]
  char isRandomDamagea; // [xsp+8h] [xbp-188h]
  BattleActionData_o *mainAction; // [xsp+10h] [xbp-180h]
  const MethodInfo *v384; // [xsp+18h] [xbp-178h]
  bool isParam; // [xsp+34h] [xbp-15Ch]
  bool v386; // [xsp+38h] [xbp-158h]
  int32_t subTargetId; // [xsp+3Ch] [xbp-154h]
  int32_t *p_actorId; // [xsp+40h] [xbp-150h]
  char v389; // [xsp+4Ch] [xbp-144h]
  char v390; // [xsp+50h] [xbp-140h]
  bool v391; // [xsp+54h] [xbp-13Ch]
  SkillValueUpApplierPlayerMaster_o *v392; // [xsp+58h] [xbp-138h]
  System_Collections_Generic_List_int__o *v393; // [xsp+60h] [xbp-130h]
  char v394; // [xsp+6Ch] [xbp-124h]
  BattleServantData_o *ServantData; // [xsp+70h] [xbp-120h]
  struct BattleLogicFunctionProcess_FunctionUnitCheck_array *v396; // [xsp+78h] [xbp-118h]
  BattleLogicFunctionProcess_FunctionUnitCheck_o *funcUnit; // [xsp+88h] [xbp-108h]
  int v399; // [xsp+94h] [xbp-FCh]
  Il2CppObject *MasterData_object; // [xsp+98h] [xbp-F8h]
  int32_t index; // [xsp+A4h] [xbp-ECh]
  int32_t *p_funcType; // [xsp+A8h] [xbp-E8h]
  FunctionEntity_o *funcEnt; // [xsp+B8h] [xbp-D8h]
  BattleLogicFunction_ProcListInArgs_o *args; // [xsp+C0h] [xbp-D0h]
  System_Collections_Generic_List_Enumerator_int__o v405; // [xsp+C8h] [xbp-C8h] BYREF
  System_Collections_Generic_List_Enumerator_int__o v406; // [xsp+E0h] [xbp-B0h] BYREF
  System_Collections_Generic_HashSet_BattleBuffData_BuffData__o *buffsToRemove; // [xsp+100h] [xbp-90h] BYREF
  int32_t absorptionCount; // [xsp+10Ch] [xbp-84h] BYREF
  RemovedBuffInfo_o *subBuffInfo; // [xsp+110h] [xbp-80h] BYREF
  Il2CppObject *entity; // [xsp+118h] [xbp-78h] BYREF
  int32_t funcIndex; // [xsp+124h] [xbp-6Ch] BYREF
  int32_t PTTargetId; // [xsp+128h] [xbp-68h] BYREF
  int32_t targetId; // [xsp+12Ch] [xbp-64h] BYREF

  v20 = this;
  if ( (byte_49FEDE3 & 1) == 0 )
  {
    sub_1B640C8(&BattleLogicFunction_AfterAttackSideEffectMakeArgument_TypeInfo, action);
    sub_1B640C8(&Generator_BGFromQuickChangeBGFunc_TypeInfo, v21);
    sub_1B640C8(&Generator_BGMFromChangeBGMFunc_TypeInfo, v22);
    sub_1B640C8(&Method_BasicHelper_Any_BattleLogicFunctionProcess_FunctionUnitCheck___, v23);
    sub_1B640C8(&BattleCommandData_TypeInfo, v24);
    sub_1B640C8(&BattleServantSnapShotOnBuffUpdate_TypeInfo, v25);
    sub_1B640C8(&Method_DataManager_GetMasterData_BuffMaster___, v26);
    sub_1B640C8(&Method_DataManager_GetMasterData_SkillMaster___, v27);
    sub_1B640C8(&Method_DataMasterBase_BuffMaster__BuffEntity__int__GetEntity__, v28);
    sub_1B640C8(&Method_DataMasterBase_SkillMaster__SkillEntity__int__TryGetEntity__, v29);
    sub_1B640C8(&BattleActionData_DownShiftGaugeData_TypeInfo, v30);
    sub_1B640C8(&Method_System_Linq_Enumerable_All_BattleLogicFunctionProcess_FunctionUnitCheck___, v31);
    sub_1B640C8(&Method_System_Linq_Enumerable_Select_BattleLogicFunctionProcess_FunctionTargetCheck__int___, v32);
    sub_1B640C8(&Method_System_Linq_Enumerable_ToArray_int___, v33);
    sub_1B640C8(&Method_System_Linq_Enumerable_Where_BattleLogicFunctionProcess_FunctionTargetCheck___, v34);
    sub_1B640C8(&Method_System_Collections_Generic_List_Enumerator_int__Dispose__, v35);
    sub_1B640C8(&Method_System_Collections_Generic_List_Enumerator_int__MoveNext__, v36);
    sub_1B640C8(&Method_System_Collections_Generic_List_Enumerator_int__get_Current__, v37);
    sub_1B640C8(&System_Func_BattleLogicFunctionProcess_FunctionUnitCheck__bool__TypeInfo, v38);
    sub_1B640C8(&System_Func_BattleLogicFunctionProcess_FunctionTargetCheck__int__TypeInfo, v39);
    sub_1B640C8(&System_Func_BattleLogicFunctionProcess_FunctionTargetCheck__bool__TypeInfo, v40);
    sub_1B640C8(&Method_System_Collections_Generic_HashSet_BattleBuffData_BuffData__get_Count__, v41);
    sub_1B640C8(&Method_System_Collections_Generic_List_int__Add__, v42);
    sub_1B640C8(&Method_System_Collections_Generic_List_int__GetEnumerator__, v43);
    sub_1B640C8(&Method_System_Collections_Generic_List_int___ctor__, v44);
    sub_1B640C8(&System_Collections_Generic_List_int__TypeInfo, v45);
    sub_1B640C8(&BattleActionData_MasterBuffData_TypeInfo, v46);
    sub_1B640C8(&UnityEngine_Object_TypeInfo, v47);
    sub_1B640C8(&BattleLogicFunction_PreAttackSideEffectMakeArgument_TypeInfo, v48);
    sub_1B640C8(&BattleLogicFunction_ProcListInArgs_TypeInfo, v49);
    sub_1B640C8(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v50);
    sub_1B640C8(&SkillValueUpApplierPlayerMaster_TypeInfo, v51);
    sub_1B640C8(&Method_BattleLogicFunction___c__procList_b__41_0__, v52);
    sub_1B640C8(&Method_BattleLogicFunction___c__procList_b__41_1__, v53);
    sub_1B640C8(&Method_BattleLogicFunction___c__procList_b__41_2__, v54);
    sub_1B640C8(&Method_BattleLogicFunction___c__procList_b__41_3__, v55);
    sub_1B640C8(&BattleLogicFunction___c_TypeInfo, v56);
    sub_1B640C8(&BattleActionData_UpShiftGaugeData_TypeInfo, v57);
    sub_1B640C8(&Method_WeightRate_int___ctor__, v58);
    sub_1B640C8(&Method_WeightRate_int__getCount__, v59);
    sub_1B640C8(&Method_WeightRate_int__getData__, v60);
    sub_1B640C8(&Method_WeightRate_int__getTotalWeight__, v61);
    sub_1B640C8(&Method_WeightRate_int__setWeight__, v62);
    sub_1B640C8(&WeightRate_int__TypeInfo, v63);
    sub_1B640C8(&StringLiteral_1857/*"====< end BattleLogicFunction::procList >====="*/, v64);
    sub_1B640C8(&StringLiteral_256/*" enemytargetId: "*/, v65);
    sub_1B640C8(&StringLiteral_1858/*"====< start BattleLogicFunction::procList >====="*/, v66);
    sub_1B640C8(&StringLiteral_322/*" pttargetId: "*/, v67);
    sub_1B640C8(&StringLiteral_1860/*"========="*/, v68);
    sub_1B640C8(&StringLiteral_1871/*">actSetId: "*/, v69);
    this = (BattleLogicFunction_o *)sub_1B640C8(&StringLiteral_224/*" actorId: "*/, v70);
    byte_49FEDE3 = 1;
  }
  PTTargetId = 0;
  funcIndex = 0;
  subBuffInfo = 0LL;
  entity = 0LL;
  absorptionCount = 0;
  buffsToRemove = 0LL;
  memset(&v406, 0, sizeof(v406));
  if ( !action )
    goto LABEL_444;
  p_actorId = &action->fields.actorId;
  v71 = System_Int32__ToString((int)action + 32, 0LL);
  System_String__Concat_61375396((System_String_o *)StringLiteral_224/*" actorId: "*/, v71, 0LL);
  this = (BattleLogicFunction_o *)v20->fields.data;
  if ( !this )
    goto LABEL_444;
  ServantData = BattleData__getServantData((BattleData_o *)this, action->fields.actorId, 0LL);
  targetId = action->fields.targetId;
  v72 = System_Int32__ToString((int32_t)&targetId, 0LL);
  System_String__Concat_61375396((System_String_o *)StringLiteral_256/*" enemytargetId: "*/, v72, 0LL);
  PTTargetId = BattleActionData__getPTTargetId(action, 0LL);
  PTSubTargetId = BattleActionData__getPTSubTargetId(action, 0LL);
  v74 = System_Int32__ToString((int32_t)&PTTargetId, 0LL);
  this = (BattleLogicFunction_o *)System_String__Concat_61375396((System_String_o *)StringLiteral_322/*" pttargetId: "*/, v74, 0LL);
  data = v20->fields.data;
  if ( !data )
    goto LABEL_444;
  data->fields.beforeAction = action;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)&data->fields.beforeAction, (int32_t)action, v75, v76);
  v393 = (System_Collections_Generic_List_int__o *)sub_1B64314(System_Collections_Generic_List_int__TypeInfo, v78, v79);
  System_Collections_Generic_List_int____ctor(
    v393,
    (const MethodInfo_348F688 *)Method_System_Collections_Generic_List_int___ctor__);
  this = (BattleLogicFunction_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EC03C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !this )
    goto LABEL_444;
  MasterData_object = DataManager__GetMasterData_object_(
                        (DataManager_o *)this,
                        (const MethodInfo_2E393EC *)Method_DataManager_GetMasterData_BuffMaster___);
  if ( isReduceReset )
  {
    logic = (UnityEngine_Object_o *)v20->fields.logic;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    if ( UnityEngine_Object__op_Inequality(logic, 0LL, 0LL) )
    {
      this = (BattleLogicFunction_o *)v20->fields.logic;
      if ( !this )
        goto LABEL_444;
      BattleLogic__resetReducedHpAll((BattleLogic_o *)this, 0LL);
    }
  }
  v83 = (BattleLogicFunction_ProcListInArgs_o *)sub_1B64314(BattleLogicFunction_ProcListInArgs_TypeInfo, v80, v81);
  BattleLogicFunction_ProcListInArgs___ctor(v83, argument, 0LL);
  if ( !v83 )
    goto LABEL_444;
  BattleLogicFunction_ProcListInArgs__set_IsCommandSideEffect(v83, isCommandSideEffect, 0LL);
  BattleLogicFunction_ProcListInArgs__set_IsShift(v83, isShift, 0LL);
  BattleLogicFunction_ProcListInArgs__set_IsPassive(v83, passive, 0LL);
  v83->fields._IsTreasureDvc_k__BackingField = isTreasureDvc;
  if ( BattleLogicFunction_ProcListInArgs__get_SkillId(v83, 0LL) <= 0 )
    BattleLogicFunction_ProcListInArgs__set_SkillId(v83, skillId, 0LL);
  subTargetId = PTSubTargetId;
  funcIndex = 0;
  BattleLogicFunction_ProcListInArgs__initFunctionUnitCheck(v83, v20, functionlist, baseValslist, &funcIndex, 0LL);
  args = v83;
  v83->fields.actSetId = 0;
  p_actSetId = &v83->fields.actSetId;
  v87 = (WeightRate_int__o *)sub_1B64314(WeightRate_int__TypeInfo, v85, v86);
  WeightRate_int____ctor(v87, (const MethodInfo_388C894 *)Method_WeightRate_int___ctor__);
  if ( !baseValslist )
    goto LABEL_444;
  max_length = baseValslist->max_length;
  if ( max_length >= 1 )
  {
    v90 = 0;
    while ( v90 < max_length )
    {
      v91 = &baseValslist->obj.klass + (int)v90;
      v92 = (DataVals_o *)v91[4];
      if ( !v92 )
        goto LABEL_444;
      DataVals__loadActSet((DataVals_o *)v91[4], 0LL);
      this = (BattleLogicFunction_o *)DataVals__checkActSet(v92, 0LL);
      if ( ((unsigned __int8)this & 1) != 0 )
      {
        this = (BattleLogicFunction_o *)DataVals__getActSetWeight(v92, 0LL);
        if ( (int)this >= 1 )
        {
          ActSetWeight = DataVals__getActSetWeight(v92, 0LL);
          this = (BattleLogicFunction_o *)DataVals__getActSet(v92, 0LL);
          if ( !v87 )
            goto LABEL_444;
          WeightRate_int___setWeight(
            v87,
            ActSetWeight,
            (int32_t)this,
            (const MethodInfo_388BE70 *)Method_WeightRate_int__setWeight__);
        }
      }
      max_length = baseValslist->max_length;
      if ( (int)++v90 >= max_length )
        goto LABEL_26;
    }
LABEL_445:
    sub_1B6432C(this, v88);
  }
LABEL_26:
  if ( !v87 )
    goto LABEL_444;
  if ( WeightRate_int___getCount(v87, (const MethodInfo_388C16C *)Method_WeightRate_int__getCount__) >= 1 )
  {
    Random = BattleRandom__getRandom(0, v87->fields.totalweight, 0LL);
    *p_actSetId = WeightRate_int___getData(v87, Random, (const MethodInfo_388C224 *)Method_WeightRate_int__getData__);
    v95 = System_Int32__ToString((int32_t)p_actSetId, 0LL);
    System_String__Concat_61375396((System_String_o *)StringLiteral_1871/*">actSetId: "*/, v95, 0LL);
  }
  action->fields.ActSetId = args->fields.actSetId;
  BattleActionData__initFuncTargetPlayerType(action, funcIndex, 0LL);
  v98 = BattleLogicFunction___c_TypeInfo;
  funcUnitArray_k__BackingField = (System_Object_array *)args->fields._funcUnitArray_k__BackingField;
  if ( !BattleLogicFunction___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BattleLogicFunction___c_TypeInfo);
    v98 = BattleLogicFunction___c_TypeInfo;
  }
  _9__41_0 = (System_Func_object__bool__o *)v98->static_fields->__9__41_0;
  if ( !_9__41_0 )
  {
    if ( !v98->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v98);
      v98 = BattleLogicFunction___c_TypeInfo;
    }
    v101 = (Il2CppObject *)v98->static_fields->__9;
    _9__41_0 = (System_Func_object__bool__o *)sub_1B64314(
                                                System_Func_BattleLogicFunctionProcess_FunctionUnitCheck__bool__TypeInfo,
                                                v96,
                                                v97);
    System_Func_object__bool____ctor(_9__41_0, v101, Method_BattleLogicFunction___c__procList_b__41_0__, 0LL);
    static_fields = BattleLogicFunction___c_TypeInfo->static_fields;
    static_fields->__9__41_0 = (struct System_Func_BattleLogicFunctionProcess_FunctionUnitCheck__bool__o *)_9__41_0;
    sub_1B6406C((ServantStatusBattleListViewItem_o *)&static_fields->__9__41_0, (int32_t)_9__41_0, v103, v104);
  }
  if ( !BasicHelper__Any_object__48384284(
          funcUnitArray_k__BackingField,
          (System_Func_T__bool__o *)_9__41_0,
          (const MethodInfo_2E2491C *)Method_BasicHelper_Any_BattleLogicFunctionProcess_FunctionUnitCheck___) )
    action->fields.isSuccessTargetSelection = 1;
  v107 = BattleLogicFunction___c_TypeInfo;
  v108 = (System_Collections_Generic_IEnumerable_TSource__o *)args->fields._funcUnitArray_k__BackingField;
  if ( !BattleLogicFunction___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BattleLogicFunction___c_TypeInfo);
    v107 = BattleLogicFunction___c_TypeInfo;
  }
  _9__41_1 = (System_Func_object__bool__o *)v107->static_fields->__9__41_1;
  if ( !_9__41_1 )
  {
    if ( !v107->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v107);
      v107 = BattleLogicFunction___c_TypeInfo;
    }
    v110 = (Il2CppObject *)v107->static_fields->__9;
    _9__41_1 = (System_Func_object__bool__o *)sub_1B64314(
                                                System_Func_BattleLogicFunctionProcess_FunctionUnitCheck__bool__TypeInfo,
                                                v105,
                                                v106);
    System_Func_object__bool____ctor(_9__41_1, v110, Method_BattleLogicFunction___c__procList_b__41_1__, 0LL);
    v111 = BattleLogicFunction___c_TypeInfo->static_fields;
    v111->__9__41_1 = (struct System_Func_BattleLogicFunctionProcess_FunctionUnitCheck__bool__o *)_9__41_1;
    sub_1B6406C((ServantStatusBattleListViewItem_o *)&v111->__9__41_1, (int32_t)_9__41_1, v112, v113);
  }
  action->fields.isSkillCopyFunctionOnly = System_Linq_Enumerable__All_object_(
                                             v108,
                                             (System_Func_TSource__bool__o *)_9__41_1,
                                             (const MethodInfo_2E45664 *)Method_System_Linq_Enumerable_All_BattleLogicFunctionProcess_FunctionUnitCheck___);
  v394 = 1;
  this = (BattleLogicFunction_o *)BattleLogicFunction_ProcListInArgs__MatchSkillType(args, 1, 0LL);
  if ( ((unsigned __int8)this & 1) != 0 )
  {
    v114 = (int)this;
    this = (BattleLogicFunction_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EC03C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    v115 = isCommandSideEffect;
    v116 = ServantData;
    if ( !this )
      goto LABEL_444;
    this = (BattleLogicFunction_o *)DataManager__GetMasterData_object_(
                                      (DataManager_o *)this,
                                      (const MethodInfo_2E393EC *)Method_DataManager_GetMasterData_SkillMaster___);
    if ( !this )
      goto LABEL_444;
    if ( DataMasterBase_object__object__int___TryGetEntity(
           (DataMasterBase_TMaster__TEntity__PKType__o *)this,
           &entity,
           skillId,
           (const MethodInfo_30D3EF8 *)Method_DataMasterBase_SkillMaster__SkillEntity__int__TryGetEntity__) )
    {
      this = (BattleLogicFunction_o *)entity;
      if ( !entity )
        goto LABEL_444;
      this = (BattleLogicFunction_o *)SkillEntity__IsIgnoreValueUp((SkillEntity_o *)entity, 0LL);
    }
    else
    {
      this = 0LL;
    }
    v118 = 0LL;
    v394 = 1;
    if ( ((unsigned __int8)this & 1) == 0 && ((v114 ^ 1) & 1) == 0 )
    {
      v119 = v20->fields.data;
      v118 = (SkillValueUpApplierPlayerMaster_o *)sub_1B64314(SkillValueUpApplierPlayerMaster_TypeInfo, v88, v117);
      SkillValueUpApplierPlayerMaster___ctor(v118, v119, 0LL);
      if ( v118 )
      {
        this = (BattleLogicFunction_o *)((__int64 (__fastcall *)(SkillValueUpApplierPlayerMaster_o *, Il2CppMethodPointer))v118->klass->vtable._4_Init.method)(
                                          v118,
                                          v118->klass->vtable._5_ApplyTo.methodPtr);
        v394 = 0;
      }
      else
      {
        v394 = 1;
      }
    }
  }
  else
  {
    v115 = isCommandSideEffect;
    v116 = ServantData;
    v118 = 0LL;
  }
  v120 = args->fields._funcUnitArray_k__BackingField;
  if ( !v120 )
    goto LABEL_444;
  v396 = args->fields._funcUnitArray_k__BackingField;
  v121 = v120->max_length;
  if ( v121 >= 1 )
  {
    v392 = v118;
    v122 = args->fields._funcUnitArray_k__BackingField;
    v123 = 0LL;
    v124 = 0;
    v389 = 0;
    v390 = 0;
    v391 = v116 == 0LL || !isTreasureDvc;
    while ( 1 )
    {
      if ( v124 >= (unsigned int)v121 )
        goto LABEL_445;
      v125 = v122->m_Items[v124];
      v399 = v124;
      if ( !v125 )
        goto LABEL_444;
      this = (BattleLogicFunction_o *)BattleLogicFunctionProcess_FunctionUnitCheck__get_FuncIndex(v125, 0LL);
      dataVals_k__BackingField = v125->fields._dataVals_k__BackingField;
      index = (int)this;
      if ( !dataVals_k__BackingField )
        goto LABEL_444;
      funcEnt = dataVals_k__BackingField->fields.funcEnt;
      funcUnit = v125;
      this = (BattleLogicFunction_o *)BattleLogicFunctionProcess_FunctionUnitCheck__checkCondtion(v125, action, 0LL);
      if ( ((unsigned __int8)this & 1) == 0 )
        goto LABEL_386;
      if ( (v394 & 1) == 0 )
        this = (BattleLogicFunction_o *)((__int64 (__fastcall *)(SkillValueUpApplierPlayerMaster_o *, BattleLogicFunctionProcess_FunctionUnitCheck_o *, Il2CppMethodPointer))v392->klass->vtable._5_ApplyTo.method)(
                                          v392,
                                          v125,
                                          v392->klass->vtable._6_CreateFuncParamValueUpInfo.methodPtr);
      if ( isCreateSideEffect )
      {
        if ( !funcEnt )
          goto LABEL_444;
        this = (BattleLogicFunction_o *)BattleLogicFunction__IsAttackSideEffectInvokeFunc(
                                          this,
                                          funcEnt->fields.funcType,
                                          dataVals_k__BackingField,
                                          v127);
        if ( ((unsigned __int8)this & 1) != 0 )
        {
          v130 = BattleLogicFunction___c_TypeInfo;
          funcTargetArray_k__BackingField = (System_Collections_Generic_IEnumerable_TSource__o *)v125->fields._funcTargetArray_k__BackingField;
          if ( !BattleLogicFunction___c_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(BattleLogicFunction___c_TypeInfo);
            v130 = BattleLogicFunction___c_TypeInfo;
          }
          _9__41_2 = (System_Func_object__bool__o *)v130->static_fields->__9__41_2;
          if ( !_9__41_2 )
          {
            if ( !v130->_2.cctor_finished )
            {
              j_il2cpp_runtime_class_init_0(v130);
              v130 = BattleLogicFunction___c_TypeInfo;
            }
            v133 = (Il2CppObject *)v130->static_fields->__9;
            _9__41_2 = (System_Func_object__bool__o *)sub_1B64314(
                                                        System_Func_BattleLogicFunctionProcess_FunctionTargetCheck__bool__TypeInfo,
                                                        v88,
                                                        v129);
            System_Func_object__bool____ctor(_9__41_2, v133, Method_BattleLogicFunction___c__procList_b__41_2__, 0LL);
            v134 = BattleLogicFunction___c_TypeInfo->static_fields;
            v134->__9__41_2 = (struct System_Func_BattleLogicFunctionProcess_FunctionTargetCheck__bool__o *)_9__41_2;
            sub_1B6406C((ServantStatusBattleListViewItem_o *)&v134->__9__41_2, (int32_t)_9__41_2, v135, v136);
          }
          v139 = System_Linq_Enumerable__Where_object_(
                   funcTargetArray_k__BackingField,
                   (System_Func_TSource__bool__o *)_9__41_2,
                   (const MethodInfo_2E7709C *)Method_System_Linq_Enumerable_Where_BattleLogicFunctionProcess_FunctionTargetCheck___);
          v140 = BattleLogicFunction___c_TypeInfo;
          if ( !BattleLogicFunction___c_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(BattleLogicFunction___c_TypeInfo);
            v140 = BattleLogicFunction___c_TypeInfo;
          }
          _9__41_3 = (System_Func_object__int__o *)v140->static_fields->__9__41_3;
          if ( !_9__41_3 )
          {
            if ( !v140->_2.cctor_finished )
            {
              j_il2cpp_runtime_class_init_0(v140);
              v140 = BattleLogicFunction___c_TypeInfo;
            }
            v142 = (Il2CppObject *)v140->static_fields->__9;
            _9__41_3 = (System_Func_object__int__o *)sub_1B64314(
                                                       System_Func_BattleLogicFunctionProcess_FunctionTargetCheck__int__TypeInfo,
                                                       v137,
                                                       v138);
            System_Func_object__int____ctor(_9__41_3, v142, Method_BattleLogicFunction___c__procList_b__41_3__, 0LL);
            v143 = BattleLogicFunction___c_TypeInfo->static_fields;
            v143->__9__41_3 = (struct System_Func_BattleLogicFunctionProcess_FunctionTargetCheck__int__o *)_9__41_3;
            sub_1B6406C((ServantStatusBattleListViewItem_o *)&v143->__9__41_3, (int32_t)_9__41_3, v144, v145);
          }
          v146 = (System_Collections_Generic_IEnumerable_TSource__o *)System_Linq_Enumerable__Select_object__int_(
                                                                        v139,
                                                                        (System_Func_TSource__TResult__o *)_9__41_3,
                                                                        (const MethodInfo_2E68AD0 *)Method_System_Linq_Enumerable_Select_BattleLogicFunctionProcess_FunctionTargetCheck__int___);
          v147 = System_Linq_Enumerable__ToArray_int_(
                   v146,
                   (const MethodInfo_2E7122C *)Method_System_Linq_Enumerable_ToArray_int___);
          v148 = FuncList__Check(26, funcEnt->fields.funcType, 0LL);
          v151 = (BattleLogicFunction_PreAttackSideEffectMakeArgument_o *)sub_1B64314(
                                                                            BattleLogicFunction_PreAttackSideEffectMakeArgument_TypeInfo,
                                                                            v149,
                                                                            v150);
          BattleLogicFunction_PreAttackSideEffectMakeArgument___ctor(v151, 0LL);
          if ( !v151 )
            goto LABEL_444;
          v152 = (BattleLogicFunction_SideEffectMakeArgument_o *)((__int64 (__fastcall *)(BattleLogicFunction_PreAttackSideEffectMakeArgument_o *, System_Int32_array *, Il2CppMethodPointer))v151->klass->vtable._6_Init.method)(
                                                                   v151,
                                                                   v147,
                                                                   v151->klass->vtable._7_MakeOnlyMainArgument.methodPtr);
          BattleLogicFunction__setAttackSideEffect(v20, action, v116, v148 || isTreasureDvc, v152, v153);
          v115 = isCommandSideEffect;
        }
      }
      v154 = funcUnit->fields._funcTargetArray_k__BackingField;
      if ( !v154 )
        goto LABEL_444;
      v155 = v154->max_length;
      p_funcType = &funcEnt->fields.funcType;
      if ( v155 >= 1 )
      {
        for ( i = 0; i < v155; ++i )
        {
          if ( i >= (unsigned int)v155 )
            goto LABEL_445;
          v157 = v154->m_Items[i];
          if ( !v157 )
            goto LABEL_444;
          BattleLogicFunction__SetTargetFuncList(
            v20,
            v157->fields._targetId_k__BackingField,
            action,
            dataVals_k__BackingField,
            v128);
          this = (BattleLogicFunction_o *)BattleLogicFunction_ProcListInArgs__get_FuncSideEffectArg(args, 0LL);
          if ( this )
            v123 = (BattleLogicFunction_FuncSideEffectFunctionArgument_o *)this;
          if ( this )
          {
            if ( !v123 )
              goto LABEL_444;
            BattleLogicFunction_FuncSideEffectFunctionArgument__AddTarget(v123, v157, 0LL);
          }
          if ( !v157->fields._result_k__BackingField )
          {
            NoEffectObject = BattleLogicFunctionProcess_FunctionTargetCheck__getInvalidObject(v157, 0LL);
            goto LABEL_98;
          }
          this = (BattleLogicFunction_o *)v20->fields.data;
          if ( !this )
            goto LABEL_444;
          targetId_k__BackingField = v157->fields._targetId_k__BackingField;
          this = (BattleLogicFunction_o *)BattleData__getServantData(
                                            (BattleData_o *)this,
                                            targetId_k__BackingField,
                                            0LL);
          if ( !this )
            goto LABEL_444;
          v159 = this;
          this = (BattleLogicFunction_o *)BattleServantData__CheckNotTargetSkill(
                                            (BattleServantData_o *)this,
                                            skillId,
                                            0LL);
          if ( ((unsigned __int8)this & 1) != 0 )
          {
            NoEffectObject = BattleLogicFunction__getNoEffectObject(
                               v20,
                               (int32_t)v159->fields.logic,
                               index,
                               dataVals_k__BackingField,
                               v115,
                               0LL,
                               0LL,
                               v160);
LABEL_98:
            BattleActionData__addAction(action, NoEffectObject, 0LL);
            goto LABEL_153;
          }
          action->fields.funcResult = 1;
          args->fields.tdCommandTypeChange = -1;
          if ( !funcEnt )
            goto LABEL_444;
          v162 = &funcEnt->fields.funcType;
          this = (BattleLogicFunction_o *)FuncList__Check(1, *p_funcType, 0LL);
          if ( ((unsigned __int8)this & 1) != 0
            || (this = (BattleLogicFunction_o *)FuncList__Check(16, *p_funcType, 0LL), ((unsigned __int8)this & 1) != 0) )
          {
            vals = funcEnt->fields.vals;
            if ( !vals )
              goto LABEL_444;
            if ( !vals->max_length )
              goto LABEL_445;
            this = (BattleLogicFunction_o *)MasterData_object;
            if ( !MasterData_object )
              goto LABEL_444;
            this = (BattleLogicFunction_o *)DataMasterBase_object__object__int___GetEntity(
                                              (DataMasterBase_TMaster__TEntity__PKType__o *)MasterData_object,
                                              vals->m_Items[1],
                                              (const MethodInfo_30D3EA4 *)Method_DataMasterBase_BuffMaster__BuffEntity__int__GetEntity__);
            if ( !this )
              goto LABEL_444;
            commandType = 1;
            switch ( HIDWORD(this->fields.data) )
            {
              case 0x8F:
                commandType = action->fields.commandType;
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
            v162 = &funcEnt->fields.funcType;
            v166 = FuncList__Check(16, *p_funcType, 0LL);
            BattleLogicFunction__functionAddState(v20, action, v157, args, v166, v167);
            goto LABEL_134;
          }
          if ( FuncList__Check(2, *p_funcType, 0LL) )
          {
            v165 = BattleLogicFunction__functionSubState(
                     v20,
                     targetId_k__BackingField,
                     funcEnt,
                     dataVals_k__BackingField,
                     index,
                     v115,
                     &subBuffInfo,
                     args,
                     overwriteLossHp);
            goto LABEL_133;
          }
          if ( FuncList__Check(3, *p_funcType, 0LL) )
          {
            actorId = action->fields.actorId;
            v170 = (int32_t)v159->fields.logic;
            isSafeDamage = BattleLogicFunction__isSafeDamage(
                             v20,
                             dataVals_k__BackingField,
                             targetId_k__BackingField,
                             v168);
            v172 = v170;
            v115 = isCommandSideEffect;
            v165 = BattleLogicFunction__functionDamage(
                     v20,
                     actorId,
                     v172,
                     dataVals_k__BackingField,
                     index,
                     action,
                     isSafeDamage,
                     v173);
            goto LABEL_133;
          }
          if ( FuncList__Check(4, *p_funcType, 0LL) )
          {
            v175 = action->fields.actorId;
            v176 = (int32_t)v159->fields.logic;
            v177 = 1;
            goto LABEL_132;
          }
          if ( FuncList__Check(14, *p_funcType, 0LL) )
          {
            v175 = action->fields.actorId;
            v176 = (int32_t)v159->fields.logic;
            v177 = 2;
            goto LABEL_132;
          }
          if ( FuncList__Check(15, *p_funcType, 0LL) )
          {
            v175 = action->fields.actorId;
            v176 = (int32_t)v159->fields.logic;
            v177 = 3;
            goto LABEL_132;
          }
          if ( FuncList__Check(18, *p_funcType, 0LL) )
          {
            v175 = action->fields.actorId;
            v176 = (int32_t)v159->fields.logic;
            v177 = 4;
            goto LABEL_132;
          }
          if ( FuncList__Check(27, *p_funcType, 0LL) )
          {
            v175 = action->fields.actorId;
            v176 = (int32_t)v159->fields.logic;
            v177 = 7;
            goto LABEL_132;
          }
          if ( FuncList__Check(21, *p_funcType, 0LL) )
          {
            v175 = action->fields.actorId;
            v176 = (int32_t)v159->fields.logic;
            v177 = 5;
            goto LABEL_132;
          }
          if ( FuncList__Check(22, *p_funcType, 0LL) )
          {
            v175 = action->fields.actorId;
            v176 = (int32_t)v159->fields.logic;
            v177 = 6;
            goto LABEL_132;
          }
          if ( FuncList__Check(28, *p_funcType, 0LL) )
          {
            v175 = action->fields.actorId;
            v176 = (int32_t)v159->fields.logic;
            v177 = 8;
LABEL_132:
            v165 = BattleLogicFunction__functionNPDamage(
                     v20,
                     v175,
                     v176,
                     dataVals_k__BackingField,
                     index,
                     v177,
                     action,
                     v174);
LABEL_133:
            BattleActionData__addAction(action, v165, 0LL);
            goto LABEL_134;
          }
          if ( FuncList__Check(5, *p_funcType, 0LL) )
          {
            v186 = v20->fields.data;
            Value = DataVals__GetValue(dataVals_k__BackingField, 0LL);
            this = (BattleLogicFunction_o *)DataVals__isMultipleGainStar(dataVals_k__BackingField, 0LL);
            if ( !v186 )
              goto LABEL_444;
            BattleData__addCriticalPoint(v186, Value, (unsigned __int8)this & 1, 0LL);
LABEL_161:
            this = (BattleLogicFunction_o *)BattleLogicFunction__getFunctionObject(
                                              v188,
                                              funcEnt,
                                              (int32_t)v159->fields.logic,
                                              index,
                                              v115,
                                              0LL,
                                              v189);
            if ( !this )
              goto LABEL_444;
            HIDWORD(this->fields.logic) = 4;
            BattleActionData__setBuffData(action, (BattleActionData_BuffData_o *)this, dataVals_k__BackingField, 0LL);
            this = (BattleLogicFunction_o *)v20->fields.data;
            if ( !this )
              goto LABEL_444;
            BattleData__AddPerformedVals((BattleData_o *)this, dataVals_k__BackingField, 0LL);
            goto LABEL_164;
          }
          if ( FuncList__Check(31, *p_funcType, 0LL) )
          {
            v190 = v20->fields.data;
            this = (BattleLogicFunction_o *)DataVals__GetValue(dataVals_k__BackingField, 0LL);
            if ( !v190 )
              goto LABEL_444;
            BattleData__lossCriticalPoint(v190, (int32_t)this, 0LL);
            goto LABEL_161;
          }
          if ( FuncList__Check(6, *p_funcType, 0LL) )
          {
            v165 = BattleLogicFunction__functionGainHp(
                     v20,
                     action->fields.actorId,
                     targetId_k__BackingField,
                     funcEnt,
                     dataVals_k__BackingField,
                     index,
                     v115,
                     -1,
                     overwriteLossHp);
            goto LABEL_133;
          }
          if ( FuncList__Check(17, *p_funcType, 0LL) )
          {
            v165 = BattleLogicFunction__functionGainHpPer(
                     v20,
                     action->fields.actorId,
                     targetId_k__BackingField,
                     funcEnt,
                     dataVals_k__BackingField,
                     index,
                     v115,
                     v191);
            goto LABEL_133;
          }
          if ( FuncList__Check(7, *p_funcType, 0LL) )
          {
            if ( BattleServantData__checkPlayer((BattleServantData_o *)v159, 0LL) )
            {
              isUnaffected = DataVals__isUnaffected(dataVals_k__BackingField, 0LL);
              CorrectedValueFuncGainNp = DataVals__GetValue(dataVals_k__BackingField, 0LL);
              if ( !isUnaffected )
                CorrectedValueFuncGainNp = BattleServantData__getCorrectedValueFuncGainNp(
                                             (BattleServantData_o *)v159,
                                             CorrectedValueFuncGainNp,
                                             0LL);
              isGainNp = BattleServantData__isGainNp((BattleServantData_o *)v159, 1, 0LL);
              goto LABEL_174;
            }
          }
          else
          {
            if ( !FuncList__Check(8, *p_funcType, 0LL) )
            {
              if ( FuncList__Check(9, *p_funcType, 0LL) )
              {
                v205 = DataVals__GetValue2(dataVals_k__BackingField, 0LL) - 1;
                TargetList = DataVals__GetTargetList(dataVals_k__BackingField, 0LL);
                v207 = DataVals__GetValue(dataVals_k__BackingField, 0LL);
                this = (BattleLogicFunction_o *)BattleServantData__skillChageShorten(
                                                  (BattleServantData_o *)v159,
                                                  v207,
                                                  0,
                                                  v205,
                                                  TargetList,
                                                  0LL);
                goto LABEL_189;
              }
              if ( FuncList__Check(10, *p_funcType, 0LL) )
              {
                v209 = DataVals__GetValue2(dataVals_k__BackingField, 0LL) - 1;
                v210 = DataVals__GetTargetList(dataVals_k__BackingField, 0LL);
                v211 = DataVals__GetValue(dataVals_k__BackingField, 0LL);
                this = (BattleLogicFunction_o *)BattleServantData__skillChageExtend(
                                                  (BattleServantData_o *)v159,
                                                  v211,
                                                  999,
                                                  v209,
                                                  v210,
                                                  0LL);
LABEL_189:
                v212 = (int32_t)v159->fields.logic;
                if ( ((unsigned __int8)this & 1) == 0 )
                {
                  v115 = isCommandSideEffect;
                  v215 = v20;
                  v216 = (int32_t)v159->fields.logic;
                  goto LABEL_283;
                }
                goto LABEL_190;
              }
              if ( FuncList__Check(12, *p_funcType, 0LL) )
              {
                v218 = action->fields.actorId;
                v219 = BattleLogicFunction__isSafeDamage(v20, dataVals_k__BackingField, targetId_k__BackingField, v217);
                isRandomDamagea = 1;
                v220 = isCommandSideEffect;
                mainAction = action;
                v221 = v219;
                v222 = isCommandSideEffect;
                overwriteLossHpa = -1;
                goto LABEL_195;
              }
              if ( FuncList__Check(25, *p_funcType, 0LL) )
              {
                v115 = isCommandSideEffect;
                v224 = action->fields.actorId;
                isRandomDamagea = 1;
                mainAction = action;
                v222 = isCommandSideEffect;
                v221 = 1;
                overwriteLossHpa = -1;
                v223 = v20;
                goto LABEL_198;
              }
              if ( FuncList__Check(13, *p_funcType, 0LL) )
              {
                v115 = isCommandSideEffect;
                v225 = BattleLogicFunction__functionInstantDeath(
                         v20,
                         action->fields.actorId,
                         targetId_k__BackingField,
                         funcEnt,
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
                v115 = isCommandSideEffect;
                v225 = BattleLogicFunction__functionHastenNpTurn(
                         v20,
                         targetId_k__BackingField,
                         funcEnt,
                         dataVals_k__BackingField,
                         index,
                         isCommandSideEffect,
                         -1,
                         v226);
                goto LABEL_285;
              }
              if ( FuncList__Check(20, *p_funcType, 0LL) )
              {
                v115 = isCommandSideEffect;
                v225 = BattleLogicFunction__functionDelayNpTurn(
                         v20,
                         targetId_k__BackingField,
                         funcEnt,
                         dataVals_k__BackingField,
                         index,
                         isCommandSideEffect,
                         &absorptionCount,
                         v227);
                goto LABEL_285;
              }
              if ( FuncList__Check(56, *p_funcType, 0LL) )
              {
                v115 = isCommandSideEffect;
                v225 = BattleLogicFunction__functionAbsorbNpTurn(
                         v20,
                         targetId_k__BackingField,
                         funcEnt,
                         action,
                         v157,
                         isCommandSideEffect,
                         v228);
                goto LABEL_285;
              }
              if ( FuncList__Check(23, *p_funcType, 0LL) )
              {
                v234 = BattleLogicFunction__functionResetCommandCard(v20, v229, v230, v231, v232, v233);
                goto LABEL_209;
              }
              if ( FuncList__Check(24, *p_funcType, 0LL) )
              {
                applyTarget = funcEnt->fields.applyTarget;
                if ( applyTarget != 2 )
                {
                  if ( applyTarget == 1 )
                  {
                    v234 = BattleLogicFunction__functionReplaceMember(
                             v20,
                             targetId_k__BackingField,
                             subTargetId,
                             v236,
                             v237,
                             index,
                             v238);
LABEL_209:
                    BattleActionData__addAction(action, v234, 0LL);
                    this = (BattleLogicFunction_o *)v20->fields.data;
                    if ( !this )
                      goto LABEL_444;
                    BattleData__AddPerformedVals((BattleData_o *)this, dataVals_k__BackingField, 0LL);
                  }
LABEL_184:
                  v115 = isCommandSideEffect;
                  goto LABEL_164;
                }
                v242 = BattleLogicFunction__functionReplaceEnemyMember(
                         v20,
                         v235,
                         dataVals_k__BackingField,
                         index,
                         (const MethodInfo *)v237);
LABEL_220:
                BattleActionData__addAction(action, v242, 0LL);
                goto LABEL_184;
              }
              if ( FuncList__Check(109, *p_funcType, 0LL) )
              {
                v242 = BattleLogicFunction__functionTransformServant(
                         v20,
                         targetId_k__BackingField,
                         v240,
                         dataVals_k__BackingField,
                         index,
                         args,
                         v241);
                goto LABEL_220;
              }
              if ( FuncList__Check(26, *p_funcType, 0LL) )
              {
                v244 = BattleLogicFunction__functionReflection(
                         v20,
                         action->fields.actorId,
                         (int32_t)v159->fields.logic,
                         dataVals_k__BackingField,
                         index,
                         v243);
                BattleActionData__addAction(action, v244, 0LL);
                v390 = 1;
                goto LABEL_184;
              }
              if ( FuncList__Check(29, *p_funcType, 0LL) )
              {
                v115 = isCommandSideEffect;
                v225 = BattleLogicFunction__functionCallServant(
                         v20,
                         action->fields.actorId,
                         v245,
                         dataVals_k__BackingField,
                         index,
                         isCommandSideEffect,
                         v246);
                goto LABEL_285;
              }
              if ( FuncList__Check(30, *p_funcType, 0LL) )
              {
                v252 = BattleLogicFunction__functionPtShuffle(v20, v247, v248, v249, v250, v251);
                BattleActionData__addAction(action, v252, 0LL);
                this = (BattleLogicFunction_o *)v20->fields.data;
                if ( !this )
                  goto LABEL_444;
                BattleData__AddPerformedVals((BattleData_o *)this, dataVals_k__BackingField, 0LL);
                goto LABEL_226;
              }
              if ( FuncList__Check(32, *p_funcType, 0LL) )
              {
                v242 = BattleLogicFunction__functionChangeServant(
                         v20,
                         action->fields.actorId,
                         targetId_k__BackingField,
                         v253,
                         dataVals_k__BackingField,
                         v254,
                         v255);
                goto LABEL_220;
              }
              v256 = FuncList__Check(33, *p_funcType, 0LL);
              if ( v256 )
              {
                v242 = BattleLogicFunction__functionChangeBg(
                         (BattleLogicFunction_o *)v256,
                         action->fields.actorId,
                         v257,
                         dataVals_k__BackingField,
                         v258,
                         v259);
                goto LABEL_220;
              }
              if ( FuncList__Check(34, *p_funcType, 0LL) )
              {
                v261 = action->fields.actorId;
                v262 = (int32_t)v159->fields.logic;
                v263 = BattleLogicFunction__isSafeDamage(v20, dataVals_k__BackingField, targetId_k__BackingField, v260);
                goto LABEL_233;
              }
              if ( FuncList__Check(122, *p_funcType, 0LL) )
              {
                v266 = action->fields.actorId;
                v267 = (int32_t)v159->fields.logic;
                v263 = 1;
                v265 = v20;
                goto LABEL_236;
              }
              if ( FuncList__Check(35, *p_funcType, 0LL) )
              {
                BYTE1(v159[9].fields.logictarget) = 1;
                goto LABEL_184;
              }
              this = (BattleLogicFunction_o *)FuncList__Check(36, *p_funcType, 0LL);
              if ( ((unsigned __int8)this & 1) != 0 )
              {
                v270 = v20->fields.data;
                if ( !v270 )
                  goto LABEL_444;
                draw_commandlist = v270->fields.draw_commandlist;
                v270->fields.fixedCommands = draw_commandlist;
                sub_1B6406C(
                  (ServantStatusBattleListViewItem_o *)&v270->fields.fixedCommands,
                  (int32_t)draw_commandlist,
                  v268,
                  v269);
                goto LABEL_242;
              }
              if ( FuncList__Check(37, *p_funcType, 0LL)
                || FuncList__Check(38, *p_funcType, 0LL)
                || FuncList__Check(39, *p_funcType, 0LL)
                || FuncList__Check(40, *p_funcType, 0LL) )
              {
                v272 = DataVals__GetValue(dataVals_k__BackingField, 0LL);
                if ( FuncList__Check(37, *p_funcType, 0LL) || FuncList__Check(39, *p_funcType, 0LL) )
                  v272 = -v272;
                if ( FuncList__Check(37, *p_funcType, 0LL) || FuncList__Check(38, *p_funcType, 0LL) )
                {
                  v272 *= 2;
                  v386 = 1;
                }
                else
                {
                  v386 = 0;
                }
                isParam = DataVals__isParam(dataVals_k__BackingField, 90, 0LL);
                v275 = DataVals__isParam(dataVals_k__BackingField, 149, 0LL);
                v276 = 0LL;
                if ( v275 )
                {
                  v276 = (BattleServantSnapShotOnBuffUpdate_o *)sub_1B64314(
                                                                  BattleServantSnapShotOnBuffUpdate_TypeInfo,
                                                                  v273,
                                                                  v274);
                  BattleServantSnapShotOnBuffUpdate___ctor(v276, (BattleServantData_o *)v159, 0LL);
                }
                v277 = DataVals__GetTargetList(dataVals_k__BackingField, 0LL);
                this = (BattleLogicFunction_o *)BattleServantData__ChangeBuffValue(
                                                  (BattleServantData_o *)v159,
                                                  v272,
                                                  v277,
                                                  v386,
                                                  1,
                                                  v275,
                                                  &buffsToRemove,
                                                  isParam,
                                                  0LL);
                if ( ((unsigned __int8)this & 1) == 0 )
                  goto LABEL_281;
                if ( v275 )
                {
                  if ( !buffsToRemove )
                    goto LABEL_444;
                  if ( buffsToRemove->fields._count >= 1 )
                  {
                    this = (BattleLogicFunction_o *)v159[8].fields.wkStr;
                    if ( !this )
                      goto LABEL_444;
                    this = (BattleLogicFunction_o *)BattleBuffData__SubBuffSpecified(
                                                      (BattleBuffData_o *)this,
                                                      buffsToRemove,
                                                      1,
                                                      0LL);
                    if ( !this )
                      goto LABEL_444;
                    v115 = isCommandSideEffect;
                    BattleLogicFunction__ApplySubBuffChanges(
                      v20,
                      action,
                      (System_Collections_Generic_List_BattleBuffData_BuffData__o *)this->fields.data,
                      targetId_k__BackingField,
                      v276,
                      dataVals_k__BackingField,
                      index,
                      isCommandSideEffect,
                      args,
                      isRandomDamage);
                    goto LABEL_164;
                  }
                }
LABEL_242:
                v212 = (int32_t)v159->fields.logic;
LABEL_190:
                v115 = isCommandSideEffect;
                v213 = funcEnt;
LABEL_191:
                FunctionObject = BattleLogicFunction__getFunctionObject(this, v213, v212, index, v115, 0LL, v208);
                BattleActionData__setBuffData(action, FunctionObject, dataVals_k__BackingField, 0LL);
                goto LABEL_164;
              }
              if ( FuncList__Check(41, *p_funcType, 0LL) )
              {
                v278 = v20->fields.data;
                v279 = DataVals__GetValue(dataVals_k__BackingField, 0LL);
                v282 = (Generator_BGMFromChangeBGMFunc_o *)sub_1B64314(
                                                             Generator_BGMFromChangeBGMFunc_TypeInfo,
                                                             v280,
                                                             v281);
                Generator_BGMFromChangeBGMFunc___ctor(v282, v278, v279, dataVals_k__BackingField, 0, 0LL);
                BattleLogicFunction__FunctionChangeBgm(v20, args, (Generator_BGM_o *)v282, 0LL, v283);
                goto LABEL_184;
              }
              this = (BattleLogicFunction_o *)FuncList__Check(42, *p_funcType, 0LL);
              if ( ((unsigned __int8)this & 1) != 0 )
                goto LABEL_242;
              if ( FuncList__Check(43, *p_funcType, 0LL) )
              {
                v115 = isCommandSideEffect;
                v225 = BattleLogicFunction__functionResurrection(
                         v20,
                         (int32_t)v159->fields.logic,
                         index,
                         funcEnt,
                         dataVals_k__BackingField,
                         isCommandSideEffect,
                         v284);
                goto LABEL_285;
              }
              if ( FuncList__Check(44, *p_funcType, 0LL) || FuncList__Check(133, *p_funcType, 0LL) )
              {
                v285 = funcEnt->fields.vals;
                if ( FuncList__Check(44, funcEnt->fields.funcType, 0LL) )
                {
                  SameIndiualityBuffSum = BattleServantData__getSameIndiualityBuffSum(
                                            (BattleServantData_o *)v159,
                                            v285,
                                            1,
                                            0,
                                            0,
                                            0LL);
                  goto LABEL_274;
                }
                if ( FuncList__Check(133, *p_funcType, 0LL) )
                {
                  SameIndiualityBuffSum = GainNpIndividualSum__GetSameIndiualitySum(
                                            v20->fields.data,
                                            *p_actorId,
                                            (int32_t)v159->fields.logic,
                                            dataVals_k__BackingField,
                                            funcEnt,
                                            0LL);
LABEL_274:
                  v287 = SameIndiualityBuffSum;
                }
                else
                {
                  v287 = 0;
                }
                CorrectedValueFuncGainNp = DataVals__GetValue(dataVals_k__BackingField, 0LL) * v287;
                if ( !DataVals__isUnaffected(dataVals_k__BackingField, 0LL) )
                  CorrectedValueFuncGainNp = BattleServantData__getCorrectedValueFuncGainNp(
                                               (BattleServantData_o *)v159,
                                               CorrectedValueFuncGainNp,
                                               0LL);
                isGainNp = BattleServantData__isGainNp((BattleServantData_o *)v159, 1, 0LL);
                if ( CorrectedValueFuncGainNp < 1 )
                {
LABEL_281:
                  v216 = (int32_t)v159->fields.logic;
                  goto LABEL_282;
                }
LABEL_174:
                if ( !isGainNp )
                  goto LABEL_281;
                v196 = (BattleLogicFunction_o *)BattleServantData__addNp(
                                                  (BattleServantData_o *)v159,
                                                  CorrectedValueFuncGainNp,
                                                  0,
                                                  0LL);
                v197 = (int)v196;
                this = (BattleLogicFunction_o *)BattleLogicFunction__getFunctionObject(
                                                  v196,
                                                  funcEnt,
                                                  (int32_t)v159->fields.logic,
                                                  index,
                                                  isCommandSideEffect,
                                                  0LL,
                                                  v198);
                if ( !this )
                  goto LABEL_444;
                v199 = (BattleActionData_BuffData_o *)this;
                HIDWORD(this->fields.logic) = 3;
                BattleActionData_BuffData__setSaveNp((BattleActionData_BuffData_o *)this, v197, 0LL);
                if ( isCommandSideEffect )
                  v199->fields.isCommandAfter = 1;
LABEL_183:
                BattleActionData__setBuffData(action, v199, dataVals_k__BackingField, 0LL);
                goto LABEL_184;
              }
              if ( FuncList__Check(45, *p_funcType, 0LL) )
              {
                BYTE3(v159[9].fields.logictarget) = DataVals__GetValue(dataVals_k__BackingField, 0LL) == 1;
                goto LABEL_184;
              }
              if ( FuncList__Check(46, *p_funcType, 0LL) )
              {
                v115 = isCommandSideEffect;
                v225 = BattleLogicFunction__functionInstantDeath(
                         v20,
                         action->fields.actorId,
                         targetId_k__BackingField,
                         funcEnt,
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
                v293 = action->fields.actorId;
                v294 = (int32_t)v159->fields.logic;
                v295 = 9;
                goto LABEL_290;
              }
              if ( FuncList__Check(48, *p_funcType, 0LL) )
              {
                v242 = BattleLogicFunction__functionGainNpFromTargets(v20, args, action, v157, v296);
                goto LABEL_220;
              }
              if ( FuncList__Check(49, *p_funcType, 0LL) )
              {
                v242 = BattleLogicFunction__functionGainHpFromTargets(v20, args, action, v157, v297);
                goto LABEL_220;
              }
              v298 = FuncList__Check(50, *p_funcType, 0LL);
              if ( v298 || (v298 = FuncList__Check(51, *p_funcType, 0LL)) )
              {
                v300 = *p_funcType == 51;
                if ( *p_funcType == 50 )
                {
                  v298 = BattleLogicFunction__isSafeDamage(
                           v20,
                           dataVals_k__BackingField,
                           targetId_k__BackingField,
                           v299);
                  v300 = v298;
                }
                v218 = action->fields.actorId;
                HpPerValue = BattleLogicFunction__getHpPerValue(
                               (BattleLogicFunction_o *)v298,
                               dataVals_k__BackingField,
                               (BattleServantData_o *)v159,
                               v299);
                v220 = isCommandSideEffect;
                v221 = v300;
                mainAction = action;
                isRandomDamagea = 0;
                v222 = isCommandSideEffect;
                overwriteLossHpa = HpPerValue;
LABEL_195:
                v223 = v20;
                v224 = v218;
                v115 = v220;
LABEL_198:
                v225 = BattleLogicFunction__functionlossHp(
                         v223,
                         v224,
                         targetId_k__BackingField,
                         funcEnt,
                         dataVals_k__BackingField,
                         index,
                         v221,
                         v222,
                         overwriteLossHpa,
                         isRandomDamagea,
                         mainAction,
                         v384);
                goto LABEL_285;
              }
              if ( FuncList__Check(52, *p_funcType, 0LL) )
              {
                v303 = 1;
                v304 = v20;
                v305 = dataVals_k__BackingField;
LABEL_304:
                updated = BattleLogicFunction__UpdateUserEquipSkillChargeTurn(v304, v305, v303, v302);
                if ( updated )
                {
                  v115 = isCommandSideEffect;
                  BattleLogicFunction__CreateMasterBuffEffect(
                    (BattleLogicFunction_o *)updated,
                    action,
                    funcEnt,
                    index,
                    isCommandSideEffect,
                    dataVals_k__BackingField,
                    v309);
                  goto LABEL_164;
                }
                v310 = (BattleActionData_MasterBuffData_o *)sub_1B64314(
                                                              BattleActionData_MasterBuffData_TypeInfo,
                                                              v307,
                                                              v308);
                BattleActionData_MasterBuffData___ctor(v310, funcEnt, 0LL);
                if ( !v310 )
                  goto LABEL_444;
                v310->fields.popColor = 1;
                v115 = isCommandSideEffect;
                v216 = v157->fields._targetId_k__BackingField;
                v289 = index;
                v215 = v20;
                v288 = isCommandSideEffect;
                v290 = dataVals_k__BackingField;
                v291 = (BattleActionData_BuffData_o *)v310;
                goto LABEL_284;
              }
              if ( FuncList__Check(62, *p_funcType, 0LL) )
              {
                v304 = v20;
                v305 = dataVals_k__BackingField;
                v303 = 0;
                goto LABEL_304;
              }
              if ( FuncList__Check(53, *p_funcType, 0LL) )
              {
                v313 = (Generator_BGFromQuickChangeBGFunc_o *)sub_1B64314(
                                                                Generator_BGFromQuickChangeBGFunc_TypeInfo,
                                                                v311,
                                                                v312);
                Generator_BGFromQuickChangeBGFunc___ctor(v313, dataVals_k__BackingField, 0LL);
                BattleLogicFunction__FunctionQuickChangeBG(v20, args, (Generator_Background_o *)v313, v314);
                goto LABEL_184;
              }
              if ( FuncList__Check(54, *p_funcType, 0LL) )
              {
                this = (BattleLogicFunction_o *)v159[2].fields.wkStr;
                if ( !this )
                  goto LABEL_444;
                if ( ServantEntity__isInvalidSkillShift((ServantEntity_o *)this, 0LL) )
                {
                  v216 = v157->fields._targetId_k__BackingField;
LABEL_282:
                  v115 = isCommandSideEffect;
                  v215 = v20;
LABEL_283:
                  v288 = v115;
                  v289 = index;
                  v290 = dataVals_k__BackingField;
                  v291 = 0LL;
LABEL_284:
                  v225 = BattleLogicFunction__getNoEffectObject(v215, v216, v289, v290, v288, 0LL, v291, v195);
LABEL_285:
                  BattleActionData__addAction(action, v225, 0LL);
                  goto LABEL_164;
                }
                Param = DataVals__GetParam(dataVals_k__BackingField, 53, 0, 0LL);
                BattleLogicFunction__functionShiftServant(v20, action, (BattleServantData_o *)v159, Param, v316);
                goto LABEL_184;
              }
              if ( FuncList__Check(55, *p_funcType, 0LL) )
              {
                v293 = action->fields.actorId;
                v294 = (int32_t)v159->fields.logic;
                v295 = 10;
                goto LABEL_290;
              }
              if ( FuncList__Check(57, *p_funcType, 0LL) )
              {
                LODWORD(v159[7].fields.data) = DataVals__GetValue(dataVals_k__BackingField, 0LL);
                goto LABEL_184;
              }
              if ( FuncList__Check(58, *p_funcType, 0LL) )
              {
                wkStr = (BattleBuffData_o *)v159[8].fields.wkStr;
                this = (BattleLogicFunction_o *)DataVals__GetParam(dataVals_k__BackingField, 14, 0, 0LL);
                if ( !wkStr )
                  goto LABEL_444;
                BattleBuffData__UpdateForceAllBuffNoAct(wkStr, (int32_t)this, funcEnt->fields.vals, 0LL);
                v115 = isCommandSideEffect;
                v212 = (int32_t)v159->fields.logic;
                v213 = funcEnt;
                goto LABEL_191;
              }
              if ( FuncList__Check(59, *p_funcType, 0LL) )
              {
                v320 = (BattleActionData_UpShiftGaugeData_o *)sub_1B64314(
                                                                BattleActionData_UpShiftGaugeData_TypeInfo,
                                                                v318,
                                                                v319);
                BattleActionData_UpShiftGaugeData___ctor(v320, 0LL);
              }
              else
              {
                if ( !FuncList__Check(60, *p_funcType, 0LL) )
                {
                  if ( FuncList__Check(61, *p_funcType, 0LL) )
                  {
                    SubMember = BattleLogicFunction__FunctionMoveToLastSubMember(
                                  v20,
                                  (BattleServantData_o *)v159,
                                  funcEnt,
                                  v324,
                                  index,
                                  v325);
                    BattleActionData__addAction(action, SubMember, 0LL);
                    BattleActionData__UpdateForceBuffEffectAllTrue(action, 0LL);
LABEL_226:
                    v389 = 1;
                    goto LABEL_184;
                  }
                  if ( FuncList__Check(119, *p_funcType, 0LL) )
                  {
                    BattleLogicFunction__functionMovePosition(v20, action, (BattleServantData_o *)v159, v327);
                    goto LABEL_184;
                  }
                  if ( FuncList__Check(120, *p_funcType, 0LL) )
                  {
                    v115 = isCommandSideEffect;
                    BattleLogicFunction__functionRevival(
                      v20,
                      action,
                      funcEnt,
                      dataVals_k__BackingField,
                      index,
                      isCommandSideEffect,
                      v328);
                    goto LABEL_164;
                  }
                  if ( FuncList__Check(121, *p_funcType, 0LL) )
                  {
                    v293 = action->fields.actorId;
                    v294 = (int32_t)v159->fields.logic;
                    v295 = 11;
                  }
                  else
                  {
                    if ( !FuncList__Check(143, *p_funcType, 0LL) )
                    {
                      if ( FuncList__Check(124, *p_funcType, 0LL) )
                      {
                        BattleLogicFunction__functionMoveState(v20, args, action, v157, v329);
                        goto LABEL_184;
                      }
                      if ( FuncList__Check(125, *p_funcType, 0LL) )
                      {
                        BattleLogicFunction__ChangeBGMCostume(v20, dataVals_k__BackingField, action, v330);
                        goto LABEL_184;
                      }
                      v331 = FuncList__Check(126, *p_funcType, 0LL);
                      if ( v331 )
                      {
                        BattleLogicFunction__LossCommandSpell(
                          (BattleLogicFunction_o *)v331,
                          dataVals_k__BackingField,
                          action,
                          v332);
                        goto LABEL_184;
                      }
                      if ( FuncList__Check(127, *p_funcType, 0LL) )
                        goto LABEL_184;
                      if ( FuncList__Check(128, *p_funcType, 0LL) )
                      {
                        BattleLogicFunction__FunctionUpdateEntryPositions(v20, dataVals_k__BackingField, v333);
                        goto LABEL_184;
                      }
                      if ( FuncList__Check(63, *p_funcType, 0LL) )
                      {
                        BattleLogicFunction__FunctionUpdateEntryMaxCountEachTurn(v20, dataVals_k__BackingField, v334);
                        goto LABEL_184;
                      }
                      if ( FuncList__Check(130, *p_funcType, 0LL) )
                      {
                        BattleLogicFunction__FunctionToFieldAddChangeFieldBuff(
                          v20,
                          args,
                          action,
                          v157,
                          isTreasureDvc,
                          v335);
                        goto LABEL_184;
                      }
                      if ( FuncList__Check(131, *p_funcType, 0LL) )
                      {
                        BattleLogicFunction__FunctionSubFieldBuff(v20, args, action, v157, v336);
                        goto LABEL_184;
                      }
                      if ( FuncList__Check(134, *p_funcType, 0LL) )
                      {
                        this = (BattleLogicFunction_o *)DataVals__GetValue(dataVals_k__BackingField, 0LL);
                        if ( !v20->fields.data )
                          goto LABEL_444;
                        BattleData__AddQuestRouteId(v20->fields.data, (int32_t)this, 0LL);
                        goto LABEL_184;
                      }
                      if ( FuncList__Check(135, *p_funcType, 0LL) )
                      {
                        BattleLogicFunction__FunctionLastSkillCopy(v20, action, dataVals_k__BackingField, args, v337);
                        goto LABEL_184;
                      }
                      if ( FuncList__Check(136, *p_funcType, 0LL) )
                      {
                        v338 = DataVals__GetValue(dataVals_k__BackingField, 0LL);
                        BattleLogicFunction__FunctionChangeEnemyMasterFace(v20, v338, v339);
                        goto LABEL_184;
                      }
                      if ( FuncList__Check(137, *p_funcType, 0LL) )
                      {
                        v261 = action->fields.actorId;
                        v262 = (int32_t)v159->fields.logic;
                        v263 = ((__int64 (__fastcall *)(BattleLogicFunction_o *, void *))v159->klass[1]._1.parent)(
                                 v159,
                                 v159->klass[1]._1.generic_class) > 1;
LABEL_233:
                        v265 = v20;
                        v266 = v261;
                        v267 = v262;
LABEL_236:
                        v242 = BattleLogicFunction__functionValueDamage(
                                 v265,
                                 v266,
                                 v267,
                                 dataVals_k__BackingField,
                                 index,
                                 v263,
                                 action,
                                 v264);
                        goto LABEL_220;
                      }
                      if ( FuncList__Check(138, *p_funcType, 0LL) )
                      {
                        BattleLogicFunction__FunctionAddBattleValue(v20, funcEnt, v340);
                        goto LABEL_184;
                      }
                      if ( FuncList__Check(139, *p_funcType, 0LL) )
                      {
                        BattleLogicFunction__FunctionSetBattleValue(v20, funcEnt, v341);
                        goto LABEL_184;
                      }
                      if ( FuncList__Check(140, *p_funcType, 0LL) )
                      {
                        klass_high = SHIDWORD(v159[4].klass);
                        v345 = (float)(DataVals__GetValue(dataVals_k__BackingField, 0LL) * klass_high) / 1000.0;
                        if ( v345 == INFINITY )
                          v346 = 0x80000000;
                        else
                          v346 = (int)v345;
                        v242 = BattleLogicFunction__functionGainNp(
                                 v20,
                                 args,
                                 v343,
                                 targetId_k__BackingField,
                                 dataVals_k__BackingField,
                                 v346,
                                 v344);
                        goto LABEL_220;
                      }
                      if ( !FuncList__Check(141, *p_funcType, 0LL) )
                      {
                        if ( !FuncList__Check(142, *p_funcType, 0LL) )
                          goto LABEL_184;
                        v242 = BattleLogicFunction__FunctionAddBattlePoint(
                                 v20,
                                 args,
                                 targetId_k__BackingField,
                                 dataVals_k__BackingField,
                                 v353);
                        if ( !v242 )
                          goto LABEL_184;
                        goto LABEL_220;
                      }
                      v347 = SHIDWORD(v159[4].klass);
                      v348 = (float)(DataVals__GetValue(dataVals_k__BackingField, 0LL) * v347) / 1000.0;
                      v349 = (int)v348;
                      if ( v348 == INFINITY )
                        v349 = 0x80000000;
                      v350 = (BattleLogicFunction_o *)BattleServantData__addNp(
                                                        (BattleServantData_o *)v159,
                                                        -v349,
                                                        0,
                                                        0LL);
                      v351 = (int)v350;
                      this = (BattleLogicFunction_o *)BattleLogicFunction__getFunctionObject(
                                                        v350,
                                                        funcEnt,
                                                        (int32_t)v159->fields.logic,
                                                        index,
                                                        isCommandSideEffect,
                                                        0LL,
                                                        v352);
                      if ( !this )
                        goto LABEL_444;
                      v199 = (BattleActionData_BuffData_o *)this;
                      HIDWORD(this->fields.logic) = 3;
                      v204 = v351;
LABEL_182:
                      BattleActionData_BuffData__setSaveNp((BattleActionData_BuffData_o *)this, v204, 0LL);
                      goto LABEL_183;
                    }
                    v293 = action->fields.actorId;
                    v294 = (int32_t)v159->fields.logic;
                    v295 = 12;
                  }
LABEL_290:
                  v242 = BattleLogicFunction__functionNPDamage(
                           v20,
                           v293,
                           v294,
                           dataVals_k__BackingField,
                           index,
                           v295,
                           action,
                           v292);
                  goto LABEL_220;
                }
                v320 = (BattleActionData_UpShiftGaugeData_o *)sub_1B64314(
                                                                BattleActionData_DownShiftGaugeData_TypeInfo,
                                                                v322,
                                                                v323);
                BattleActionData_DownShiftGaugeData___ctor((BattleActionData_DownShiftGaugeData_o *)v320, 0LL);
              }
              BattleLogicFunction__functionBreakGaugeChange(
                v20,
                action,
                funcUnit,
                (BattleServantData_o *)v159,
                (BattleActionData_BaseShiftGaugeData_o *)v320,
                v321);
              goto LABEL_184;
            }
            if ( BattleServantData__checkPlayer((BattleServantData_o *)v159, 0LL) )
            {
              v200 = DataVals__GetValue(dataVals_k__BackingField, 0LL);
              v201 = (BattleLogicFunction_o *)BattleServantData__addNp((BattleServantData_o *)v159, -v200, 0, 0LL);
              v202 = (int)v201;
              this = (BattleLogicFunction_o *)BattleLogicFunction__getFunctionObject(
                                                v201,
                                                funcEnt,
                                                (int32_t)v159->fields.logic,
                                                index,
                                                v115,
                                                0LL,
                                                v203);
              if ( !this )
                goto LABEL_444;
              v199 = (BattleActionData_BuffData_o *)this;
              v204 = v202;
              HIDWORD(this->fields.logic) = 3;
              goto LABEL_182;
            }
          }
LABEL_164:
          v162 = &funcEnt->fields.funcType;
LABEL_134:
          isDamage = FuncList__isDamage(*v162, 0LL);
          if ( isDamage )
            v179 = 0;
          else
            v179 = -112;
          if ( isDamage )
            v180 = 0;
          else
            v180 = 144;
          if ( v179 != -112 )
          {
            if ( v180 )
              return action;
            if ( !LOBYTE(v159[9].fields.buffProgressTurnSelfList) )
            {
              this = (BattleLogicFunction_o *)v159[8].fields.wkStr;
              if ( !this )
                goto LABEL_444;
              if ( !LOBYTE(this[1].fields.buffProgressTurnOpponentList) )
              {
                LOBYTE(v159[9].fields.buffProgressTurnSelfList) = 1;
                if ( !v393 )
                  goto LABEL_444;
                v181 = (int32_t)v159->fields.logic;
                items = v393->fields._items;
                v183 = Method_System_Collections_Generic_List_int__Add__;
                ++v393->fields._version;
                if ( !items )
                  goto LABEL_444;
                size = v393->fields._size;
                if ( (unsigned int)size >= items->max_length )
                {
                  System_Collections_Generic_List_int___AddWithResize(
                    v393,
                    v181,
                    *(const MethodInfo_348FEDC **)(*(_QWORD *)(v183[4] + 192LL) + 112LL));
                  this = (BattleLogicFunction_o *)v159[8].fields.wkStr;
                  if ( !this )
                    goto LABEL_444;
                }
                else
                {
                  v393->fields._size = size + 1;
                  items->m_Items[size + 1] = v181;
                }
                v185 = BattleBuffData__UseProgressingDoNotAct(
                         (BattleBuffData_o *)this,
                         (BattleServantData_o *)v159,
                         0,
                         0LL);
                BattleActionData__addSideEffectActionData(action, v185, 1, 0LL);
                this = (BattleLogicFunction_o *)v159[8].fields.wkStr;
                if ( !this )
                  goto LABEL_444;
              }
              LOBYTE(this[1].fields.buffProgressTurnOpponentList) = 0;
            }
          }
          BattleLogicFunction_ProcListInArgs__setFuncResult(
            args,
            targetId_k__BackingField,
            action->fields.funcResult,
            dataVals_k__BackingField->fields.funcIndex,
            0LL);
LABEL_153:
          v155 = v154->max_length;
        }
      }
      if ( !isCreateSideEffect )
        break;
      v116 = ServantData;
      v122 = v396;
      v354 = v399;
      if ( !funcEnt )
        goto LABEL_444;
      v355 = FuncList__Check(26, *p_funcType, 0LL);
      v358 = (BattleLogicFunction_AfterAttackSideEffectMakeArgument_o *)sub_1B64314(
                                                                          BattleLogicFunction_AfterAttackSideEffectMakeArgument_TypeInfo,
                                                                          v356,
                                                                          v357);
      BattleLogicFunction_AfterAttackSideEffectMakeArgument___ctor(v358, 0LL);
      if ( !v358 )
        goto LABEL_444;
      Argument__Init = BattleLogicFunction_AfterAttackSideEffectMakeArgument__Init(v358, action, 0LL);
      BattleLogicFunction__setAttackSideEffect(v20, action, ServantData, v355 || isTreasureDvc, Argument__Init, v360);
      this = (BattleLogicFunction_o *)BattleActionData__getDamageTargetIdList(action, 0LL);
      if ( !this )
        goto LABEL_444;
      v115 = isCommandSideEffect;
      v362 = this;
      if ( this->fields.logic )
      {
        if ( v391 )
        {
          v363 = 0LL;
        }
        else
        {
          v363 = (BattleCommandData_o *)sub_1B64314(BattleCommandData_TypeInfo, v88, v361);
          BattleCommandData___ctor(v363, 0LL);
          this = (BattleLogicFunction_o *)BattleServantData__getTreasureDvcCardId(ServantData, 0LL);
          if ( !v363 )
            goto LABEL_444;
          v363->fields._type = (int)this;
          v363->fields.treasureDvc = BattleServantData__getTreasureDvcId(ServantData, 1, 0LL);
        }
        v364 = (UnityEngine_Object_o *)v20->fields.logic;
        if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
        this = (BattleLogicFunction_o *)UnityEngine_Object__op_Inequality(v364, 0LL, 0LL);
        if ( ((unsigned __int8)this & 1) != 0 && (v365 = v362->fields.logic, (int)v365 >= 1) )
        {
          v366 = 0LL;
          do
          {
            if ( v366 >= (unsigned int)v365 )
              goto LABEL_445;
            this = (BattleLogicFunction_o *)v20->fields.logic;
            if ( !this )
              goto LABEL_444;
            this = (BattleLogicFunction_o *)BattleLogic__setDamageSideEffect(
                                              (BattleLogic_o *)this,
                                              action,
                                              action->fields.actorId,
                                              *((_DWORD *)&v362->fields.logictarget + v366),
                                              v363,
                                              0LL);
            LODWORD(v365) = v362->fields.logic;
            ++v366;
          }
          while ( (__int64)v366 < (int)v365 );
          v115 = isCommandSideEffect;
          v116 = ServantData;
        }
        else
        {
          v115 = isCommandSideEffect;
        }
        v122 = v396;
      }
LABEL_387:
      v121 = v122->max_length;
      v124 = v354 + 1;
      if ( v124 >= v121 )
        goto LABEL_403;
    }
    v116 = ServantData;
    v122 = v396;
LABEL_386:
    v354 = v399;
    goto LABEL_387;
  }
  v389 = 0;
  v390 = 0;
LABEL_403:
  this = (BattleLogicFunction_o *)BattleLogicFunction_ProcListInArgs__get_CheckDuplicateFunc(args, 0LL);
  if ( !this )
    goto LABEL_444;
  ((void (__fastcall *)(BattleLogicFunction_o *, void *))this->klass[1]._1.namespaze)(
    this,
    this->klass[1]._1.byval_arg.data);
  if ( (v390 & 1) != 0 )
  {
    this = (BattleLogicFunction_o *)v20->fields.data;
    if ( !this )
      goto LABEL_444;
    this = (BattleLogicFunction_o *)BattleData__getServantData((BattleData_o *)this, *p_actorId, 0LL);
    if ( !this )
      goto LABEL_444;
    BattleServantData__resetAccumulationDamage((BattleServantData_o *)this, 0LL);
  }
  if ( BattleActionData__checkSummonServantList(action, 0LL) )
  {
    v367 = (UnityEngine_Object_o *)v20->fields.logic;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    if ( UnityEngine_Object__op_Inequality(v367, 0LL, 0LL) )
    {
      this = (BattleLogicFunction_o *)BattleActionData__getSummonServant(action, -1, 0LL);
      if ( !this )
        goto LABEL_444;
      v368 = (int)this->fields.logic;
      v369 = this;
      if ( v368 >= 1 )
      {
        v370 = 0;
        while ( v370 < v368 )
        {
          v371 = *((_QWORD *)&v369->fields.logictarget + (int)v370);
          if ( !v371 )
            goto LABEL_444;
          this = (BattleLogicFunction_o *)v20->fields.logic;
          if ( !this )
            goto LABEL_444;
          BattleLogic__actEnemyPassiveSkill((BattleLogic_o *)this, *(_DWORD *)(v371 + 28), 0LL);
          v368 = (int)v369->fields.logic;
          if ( (int)++v370 >= v368 )
            goto LABEL_419;
        }
        goto LABEL_445;
      }
    }
  }
LABEL_419:
  FuncSideEffectArg = BattleLogicFunction_ProcListInArgs__get_FuncSideEffectArg(args, 0LL);
  if ( FuncSideEffectArg )
    ((void (__fastcall *)(BattleLogicFunction_FuncSideEffectFunctionArgument_o *, BattleLogicFunction_o *, BattleActionData_o *, BattleServantData_o *, void *))FuncSideEffectArg->klass->vtable._7_SetSideEffect.method)(
      FuncSideEffectArg,
      v20,
      action,
      v116,
      FuncSideEffectArg->klass[1]._1.image);
  if ( isBuffUpdate )
  {
    v373 = (UnityEngine_Object_o *)v20->fields.logic;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    if ( UnityEngine_Object__op_Inequality(v373, 0LL, 0LL) )
    {
      this = (BattleLogicFunction_o *)v20->fields.logic;
      if ( !this )
        goto LABEL_444;
      BattleLogic__checkUsedBuff((BattleLogic_o *)this, 0LL);
      v374 = v20->fields.data;
      if ( !v374 )
        goto LABEL_444;
      this = (BattleLogicFunction_o *)v374->fields._FieldEnvData_k__BackingField;
      if ( !this )
        goto LABEL_444;
      BattleFieldEnvironmentData__CheckUsedBuff((BattleFieldEnvironmentData_o *)this, 0LL);
    }
  }
  if ( (v389 & 1) != 0 || args->fields.updateField )
  {
    v375 = (UnityEngine_Object_o *)v20->fields.logic;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    if ( UnityEngine_Object__op_Inequality(v375, 0LL, 0LL) )
    {
      this = (BattleLogicFunction_o *)v20->fields.logic;
      if ( !this )
        goto LABEL_444;
      BattleLogic__updateFieldBuff((BattleLogic_o *)this, 0LL);
    }
  }
  this = (BattleLogicFunction_o *)v393;
  if ( !v393 )
LABEL_444:
    sub_1B64324(this);
  System_Collections_Generic_List_int___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v405,
    v393,
    (const MethodInfo_3490A50 *)Method_System_Collections_Generic_List_int__GetEnumerator__);
  v406 = v405;
  while ( System_Collections_Generic_List_Enumerator_int___MoveNext(
            &v406,
            (const MethodInfo_3225FE4 *)Method_System_Collections_Generic_List_Enumerator_int__MoveNext__) )
  {
    v376 = v20->fields.data;
    if ( !v376 )
      sub_1B64324(0LL);
    v377 = BattleData__getServantData(v376, v406.fields._current, 0LL);
    if ( v377 )
      v377->fields.isTDLimitCount = 0;
  }
  System_Collections_Generic_List_Enumerator_int___Dispose(
    &v406,
    (const MethodInfo_3225FE0 *)Method_System_Collections_Generic_List_Enumerator_int__Dispose__);
  return action;
}


void __fastcall BattleLogicFunction__setAttackSideEffect(
        BattleLogicFunction_o *this,
        BattleActionData_o *mainAction,
        BattleServantData_o *actionSvtData,
        bool isTreasureDvc,
        BattleLogicFunction_SideEffectMakeArgument_o *attackArg,
        const MethodInfo *method)
{
  BattleLogicFunction_o *v10; // x22
  __int64 v11; // x1
  __int64 v12; // x1
  __int64 v13; // x1
  __int64 v14; // x1
  __int64 v15; // x1
  __int64 v16; // x1
  __int64 v17; // x1
  __int64 v18; // x1
  __int64 v19; // x2
  BattleCommandData_o *v20; // x23
  BattleLogicFunction_AttackSideEffectFunctionArgument_o *v21; // x24
  __int64 v22; // x1
  __int64 v23; // x2
  System_Collections_Generic_IEnumerable_TSource__o *SideEffectList_k__BackingField; // x25
  BattleLogicFunction___c_c *v25; // x0
  System_Func_object__int__o *_9__52_0; // x26
  Il2CppObject *v27; // x27
  struct BattleLogicFunction___c_StaticFields *static_fields; // x0
  int32_t v29; // w2
  int32_t v30; // w3
  System_Collections_Generic_IEnumerable_TSource__o *v31; // x0
  __int64 v32; // x25
  BattleLogicFunction_SideEffectMakeArgument_o *v33; // x0
  const MethodInfo *v34; // x6
  const MethodInfo *v35; // x6

  v10 = this;
  if ( (byte_49FEDE7 & 1) == 0 )
  {
    sub_1B640C8(&BattleLogicFunction_AttackSideEffectFunctionArgument_TypeInfo, mainAction);
    sub_1B640C8(&BattleCommandData_TypeInfo, v11);
    sub_1B640C8(&Method_System_Linq_Enumerable_Select_BattleActionData_SideEffectData__int___, v12);
    sub_1B640C8(&Method_System_Linq_Enumerable_ToArray_int___, v13);
    sub_1B640C8(&System_Func_BattleActionData_SideEffectData__int__TypeInfo, v14);
    sub_1B640C8(&int___TypeInfo, v15);
    sub_1B640C8(&Method_BattleLogicFunction___c__setAttackSideEffect_b__52_0__, v16);
    this = (BattleLogicFunction_o *)sub_1B640C8(&BattleLogicFunction___c_TypeInfo, v17);
    byte_49FEDE7 = 1;
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
      v20 = (BattleCommandData_o *)sub_1B64314(BattleCommandData_TypeInfo, v18, v19);
      BattleCommandData___ctor(v20, 0LL);
      this = (BattleLogicFunction_o *)BattleServantData__getTreasureDvcCardId(actionSvtData, 0LL);
      if ( !v20 )
        goto LABEL_22;
      v20->fields._type = (int)this;
      v20->fields.treasureDvc = BattleServantData__getTreasureDvcId(actionSvtData, 1, 0LL);
    }
    else
    {
      v20 = 0LL;
    }
    v21 = (BattleLogicFunction_AttackSideEffectFunctionArgument_o *)sub_1B64314(
                                                                      BattleLogicFunction_AttackSideEffectFunctionArgument_TypeInfo,
                                                                      v18,
                                                                      v19);
    BattleLogicFunction_AttackSideEffectFunctionArgument___ctor(v21, 0LL);
    SideEffectList_k__BackingField = (System_Collections_Generic_IEnumerable_TSource__o *)attackArg->fields._SideEffectList_k__BackingField;
    v25 = BattleLogicFunction___c_TypeInfo;
    if ( !BattleLogicFunction___c_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(BattleLogicFunction___c_TypeInfo);
      v25 = BattleLogicFunction___c_TypeInfo;
    }
    _9__52_0 = (System_Func_object__int__o *)v25->static_fields->__9__52_0;
    if ( !_9__52_0 )
    {
      if ( !v25->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(v25);
        v25 = BattleLogicFunction___c_TypeInfo;
      }
      v27 = (Il2CppObject *)v25->static_fields->__9;
      _9__52_0 = (System_Func_object__int__o *)sub_1B64314(
                                                 System_Func_BattleActionData_SideEffectData__int__TypeInfo,
                                                 v22,
                                                 v23);
      System_Func_object__int____ctor(_9__52_0, v27, Method_BattleLogicFunction___c__setAttackSideEffect_b__52_0__, 0LL);
      static_fields = BattleLogicFunction___c_TypeInfo->static_fields;
      static_fields->__9__52_0 = (struct System_Func_BattleActionData_SideEffectData__int__o *)_9__52_0;
      sub_1B6406C((ServantStatusBattleListViewItem_o *)&static_fields->__9__52_0, (int32_t)_9__52_0, v29, v30);
    }
    v31 = (System_Collections_Generic_IEnumerable_TSource__o *)System_Linq_Enumerable__Select_object__int_(
                                                                 SideEffectList_k__BackingField,
                                                                 (System_Func_TSource__TResult__o *)_9__52_0,
                                                                 (const MethodInfo_2E68AD0 *)Method_System_Linq_Enumerable_Select_BattleActionData_SideEffectData__int___);
    this = (BattleLogicFunction_o *)System_Linq_Enumerable__ToArray_int_(
                                      v31,
                                      (const MethodInfo_2E7122C *)Method_System_Linq_Enumerable_ToArray_int___);
    if ( mainAction )
    {
      BattleActionData__SetFirstAtkMainTargetId(mainAction, (System_Int32_array *)this, 0LL);
      v32 = ((__int64 (__fastcall *)(BattleLogicFunction_SideEffectMakeArgument_o *, const char *))attackArg->klass[1]._1.gc_desc)(
              attackArg,
              attackArg->klass[1]._1.name);
      this = (BattleLogicFunction_o *)sub_1B64170(int___TypeInfo, 1LL);
      if ( this )
      {
        if ( !LODWORD(this->fields.logic) )
          sub_1B6432C(this, this);
        LODWORD(this->fields.logictarget) = mainAction->fields._FirstAtkMainTargetId_k__BackingField;
        if ( v32 )
        {
          v33 = (BattleLogicFunction_SideEffectMakeArgument_o *)(*(__int64 (__fastcall **)(__int64, BattleLogicFunction_o *, _QWORD))(*(_QWORD *)v32 + 408LL))(
                                                                  v32,
                                                                  this,
                                                                  *(_QWORD *)(*(_QWORD *)v32 + 416LL));
          BattleLogicFunction__SetTargetAttackSideEffect(v10, v21, mainAction, actionSvtData, v20, v33, v34);
          BattleLogicFunction__SetTargetAttackSideEffect(v10, v21, mainAction, actionSvtData, v20, attackArg, v35);
          return;
        }
      }
    }
LABEL_22:
    sub_1B64324(this);
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
    sub_1B64324(this);
  DamageAttackSideEffectList = BattleActionData__getDamageAttackSideEffectList(mainAction, 0LL);
  this->fields._SideEffectList_k__BackingField = DamageAttackSideEffectList;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)&this->fields, (int32_t)DamageAttackSideEffectList, v5, v6);
  return (BattleLogicFunction_SideEffectMakeArgument_o *)this;
}


BattleLogicFunction_SideEffectMakeArgument_o *__fastcall BattleLogicFunction_AfterAttackSideEffectMakeArgument__MakeOnlyMainArgument(
        BattleLogicFunction_AfterAttackSideEffectMakeArgument_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  BattleLogicFunction_SideEffectMakeArgument_o *v3; // x19
  const MethodInfo *v4; // x1

  if ( (byte_49FEF6C & 1) == 0 )
  {
    sub_1B640C8(&BattleLogicFunction_AfterMainAttackSideEffectMakeArgument_TypeInfo, method);
    byte_49FEF6C = 1;
  }
  v3 = (BattleLogicFunction_SideEffectMakeArgument_o *)sub_1B64314(
                                                         BattleLogicFunction_AfterMainAttackSideEffectMakeArgument_TypeInfo,
                                                         method,
                                                         v2);
  BattleLogicFunction_SideEffectMakeArgument___ctor(v3, v4);
  return v3;
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
  sub_1B6406C((ServantStatusBattleListViewItem_o *)&this->fields.argument, (int32_t)argument, v5, v6);
}


void __fastcall BattleLogicFunction_AttackSideEffectFunctionArgument___ctor(
        BattleLogicFunction_AttackSideEffectFunctionArgument_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x2
  __int64 v5; // x20
  const MethodInfo *v6; // x1
  int32_t v7; // w2
  int32_t v8; // w3
  int32_t v9; // w2
  int32_t v10; // w3

  if ( (byte_49FEF51 & 1) == 0 )
  {
    sub_1B640C8(&BattleLogicFunction_AttackSideEffectCheckDuplicateFunction_TypeInfo, method);
    byte_49FEF51 = 1;
  }
  BattleLogicFunction_CommonSideEffectFunctionArgument___ctor(
    (BattleLogicFunction_CommonSideEffectFunctionArgument_o *)this,
    method);
  v5 = sub_1B64314(BattleLogicFunction_AttackSideEffectCheckDuplicateFunction_TypeInfo, v3, v4);
  BattleLogicFunction_CommonCheckDuplicateFunction___ctor((BattleLogicFunction_CommonCheckDuplicateFunction_o *)v5, v6);
  *(_QWORD *)(v5 + 24) = this;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)(v5 + 24), (int32_t)this, v7, v8);
  this->fields.checkDuplicate = (struct BattleLogicFunction_CheckDuplicateFunction_o *)v5;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)&this->fields.checkDuplicate, v5, v9, v10);
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
  __int64 v2; // x2
  __int64 v4; // x1
  System_Collections_Generic_List_object__o *v5; // x20
  int32_t v6; // w2
  int32_t v7; // w3

  if ( (byte_49FEF5E & 1) == 0 )
  {
    sub_1B640C8(&Method_System_Collections_Generic_List_BattleLogicFunction_ExecutedFunctionData___ctor__, method);
    sub_1B640C8(&System_Collections_Generic_List_BattleLogicFunction_ExecutedFunctionData__TypeInfo, v4);
    byte_49FEF5E = 1;
  }
  v5 = (System_Collections_Generic_List_object__o *)sub_1B64314(
                                                      System_Collections_Generic_List_BattleLogicFunction_ExecutedFunctionData__TypeInfo,
                                                      method,
                                                      v2);
  System_Collections_Generic_List_object____ctor(
    v5,
    (const MethodInfo_34ACEA0 *)Method_System_Collections_Generic_List_BattleLogicFunction_ExecutedFunctionData___ctor__);
  this->fields.executedFuncList = (struct System_Collections_Generic_List_BattleLogicFunction_ExecutedFunctionData__o *)v5;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)&this->fields, (int32_t)v5, v6, v7);
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

  if ( (byte_49FEF5A & 1) == 0 )
  {
    sub_1B640C8(&Method_System_Collections_Generic_List_BattleLogicFunction_ExecutedFunctionData__get_Count__, method);
    sub_1B640C8(&Method_System_Collections_Generic_List_BattleLogicFunction_ExecutedFunctionData__get_Item__, v3);
    byte_49FEF5A = 1;
  }
  executedFuncList = (System_Collections_Generic_List_object__o *)this->fields.executedFuncList;
  if ( !executedFuncList )
LABEL_8:
    sub_1B64324(executedFuncList);
  v5 = 0;
  while ( v5 < executedFuncList->fields._size )
  {
    executedFuncList = (System_Collections_Generic_List_object__o *)System_Collections_Generic_List_object___get_Item(
                                                                      executedFuncList,
                                                                      v5,
                                                                      (const MethodInfo_34AD404 *)Method_System_Collections_Generic_List_BattleLogicFunction_ExecutedFunctionData__get_Item__);
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
    sub_1B64324(this);
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
  int32_t v10; // w2
  int32_t v11; // w3
  System_Collections_Generic_List_object__o *executedFuncList; // x19
  __int64 v13; // x1
  __int64 v14; // x2
  System_Predicate_object__o *v15; // x20

  if ( (byte_49FEF5C & 1) == 0 )
  {
    sub_1B640C8(&Method_System_Collections_Generic_List_BattleLogicFunction_ExecutedFunctionData__FindIndex__, vals);
    sub_1B640C8(&System_Predicate_BattleLogicFunction_ExecutedFunctionData__TypeInfo, v5);
    sub_1B640C8(
      &Method_BattleLogicFunction_CommonCheckDuplicateFunction___c__DisplayClass7_0__isExecutedFunction_b__0__,
      v6);
    sub_1B640C8(&BattleLogicFunction_CommonCheckDuplicateFunction___c__DisplayClass7_0_TypeInfo, v7);
    byte_49FEF5C = 1;
  }
  v8 = sub_1B64314(BattleLogicFunction_CommonCheckDuplicateFunction___c__DisplayClass7_0_TypeInfo, vals, method);
  System_Object___ctor((Il2CppObject *)v8, 0LL);
  if ( !v8
    || (*(_QWORD *)(v8 + 16) = vals,
        sub_1B6406C((ServantStatusBattleListViewItem_o *)(v8 + 16), (int32_t)vals, v10, v11),
        executedFuncList = (System_Collections_Generic_List_object__o *)this->fields.executedFuncList,
        v15 = (System_Predicate_object__o *)sub_1B64314(
                                              System_Predicate_BattleLogicFunction_ExecutedFunctionData__TypeInfo,
                                              v13,
                                              v14),
        System_Predicate_object____ctor(
          v15,
          (Il2CppObject *)v8,
          Method_BattleLogicFunction_CommonCheckDuplicateFunction___c__DisplayClass7_0__isExecutedFunction_b__0__,
          0LL),
        !executedFuncList) )
  {
    sub_1B64324(v9);
  }
  return System_Collections_Generic_List_object___FindIndex(
           executedFuncList,
           (System_Predicate_T__o *)v15,
           (const MethodInfo_34ADF2C *)Method_System_Collections_Generic_List_BattleLogicFunction_ExecutedFunctionData__FindIndex__) >= 0;
}


// local variable allocation has failed, the output may be wrong!
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
  int32_t v12; // w2
  int32_t v13; // w3
  System_Collections_Generic_List_object__o *executedFuncList; // x19
  __int64 v15; // x1
  __int64 v16; // x2
  System_Predicate_object__o *v17; // x20

  if ( (byte_49FEF5D & 1) == 0 )
  {
    sub_1B640C8(&Method_System_Collections_Generic_List_BattleLogicFunction_ExecutedFunctionData__FindIndex__, vals);
    sub_1B640C8(&System_Predicate_BattleLogicFunction_ExecutedFunctionData__TypeInfo, v7);
    sub_1B640C8(
      &Method_BattleLogicFunction_CommonCheckDuplicateFunction___c__DisplayClass8_0__isExecutedTarget_b__0__,
      v8);
    sub_1B640C8(&BattleLogicFunction_CommonCheckDuplicateFunction___c__DisplayClass8_0_TypeInfo, v9);
    byte_49FEF5D = 1;
  }
  v10 = sub_1B64314(
          BattleLogicFunction_CommonCheckDuplicateFunction___c__DisplayClass8_0_TypeInfo,
          vals,
          *(_QWORD *)&targetId);
  System_Object___ctor((Il2CppObject *)v10, 0LL);
  if ( !v10
    || (*(_QWORD *)(v10 + 16) = vals,
        sub_1B6406C((ServantStatusBattleListViewItem_o *)(v10 + 16), (int32_t)vals, v12, v13),
        *(_DWORD *)(v10 + 24) = targetId,
        executedFuncList = (System_Collections_Generic_List_object__o *)this->fields.executedFuncList,
        v17 = (System_Predicate_object__o *)sub_1B64314(
                                              System_Predicate_BattleLogicFunction_ExecutedFunctionData__TypeInfo,
                                              v15,
                                              v16),
        System_Predicate_object____ctor(
          v17,
          (Il2CppObject *)v10,
          Method_BattleLogicFunction_CommonCheckDuplicateFunction___c__DisplayClass8_0__isExecutedTarget_b__0__,
          0LL),
        !executedFuncList) )
  {
    sub_1B64324(v11);
  }
  return System_Collections_Generic_List_object___FindIndex(
           executedFuncList,
           (System_Predicate_T__o *)v17,
           (const MethodInfo_34ADF2C *)Method_System_Collections_Generic_List_BattleLogicFunction_ExecutedFunctionData__FindIndex__) >= 0;
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
    sub_1B64324(this);
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
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x1
  __int64 v12; // x1
  __int64 v13; // x21
  __int64 Index; // x0
  int32_t v15; // w2
  int32_t v16; // w3
  __int64 v17; // x1
  __int64 v18; // x2
  unsigned __int64 v19; // x26
  __int64 v20; // x22
  int32_t v21; // w2
  int32_t v22; // w3
  __int64 v23; // x23
  __int64 v24; // x0
  __int64 v25; // x1
  __int64 v26; // x2
  System_Collections_Generic_List_object__o *executedFuncList; // x24
  System_Predicate_object__o *v28; // x25
  DataVals_o *v29; // x24
  System_Collections_Generic_List_object__o *v30; // x23
  int32_t v31; // w25
  BattleLogicFunction_ExecutedFunctionData_o *v32; // x22
  const MethodInfo *v33; // x3
  int32_t v34; // w2
  int32_t v35; // w3
  struct System_Object_array *items; // x8
  _QWORD *v37; // x9
  __int64 size; // x10
  Il2CppClass **v39; // x0

  if ( (byte_49FEF5B & 1) == 0 )
  {
    sub_1B640C8(&BattleLogicFunction_ExecutedFunctionData_TypeInfo, vals);
    sub_1B640C8(&Method_System_Collections_Generic_List_BattleLogicFunction_ExecutedFunctionData__Add__, v7);
    sub_1B640C8(&Method_System_Collections_Generic_List_BattleLogicFunction_ExecutedFunctionData__FindIndex__, v8);
    sub_1B640C8(&System_Predicate_BattleLogicFunction_ExecutedFunctionData__TypeInfo, v9);
    sub_1B640C8(&BattleLogicFunction_CommonCheckDuplicateFunction___c__DisplayClass5_0_TypeInfo, v10);
    sub_1B640C8(
      &Method_BattleLogicFunction_CommonCheckDuplicateFunction___c__DisplayClass5_1__saveExecutedFunction_b__0__,
      v11);
    sub_1B640C8(&BattleLogicFunction_CommonCheckDuplicateFunction___c__DisplayClass5_1_TypeInfo, v12);
    byte_49FEF5B = 1;
  }
  v13 = sub_1B64314(BattleLogicFunction_CommonCheckDuplicateFunction___c__DisplayClass5_0_TypeInfo, vals, targetIds);
  System_Object___ctor((Il2CppObject *)v13, 0LL);
  if ( !v13 )
    goto LABEL_19;
  *(_QWORD *)(v13 + 16) = vals;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)(v13 + 16), (int32_t)vals, v15, v16);
  if ( !targetIds )
    goto LABEL_19;
  if ( (int)targetIds->max_length >= 1 )
  {
    v19 = 0LL;
    while ( 1 )
    {
      v20 = sub_1B64314(BattleLogicFunction_CommonCheckDuplicateFunction___c__DisplayClass5_1_TypeInfo, v17, v18);
      System_Object___ctor((Il2CppObject *)v20, 0LL);
      if ( !v20 )
        break;
      *(_QWORD *)(v20 + 24) = v13;
      v23 = v20 + 24;
      sub_1B6406C((ServantStatusBattleListViewItem_o *)(v20 + 24), v13, v21, v22);
      if ( v19 >= targetIds->max_length )
        sub_1B6432C(v24, v25);
      *(_DWORD *)(v20 + 16) = targetIds->m_Items[v19 + 1];
      executedFuncList = (System_Collections_Generic_List_object__o *)this->fields.executedFuncList;
      v28 = (System_Predicate_object__o *)sub_1B64314(
                                            System_Predicate_BattleLogicFunction_ExecutedFunctionData__TypeInfo,
                                            v25,
                                            v26);
      System_Predicate_object____ctor(
        v28,
        (Il2CppObject *)v20,
        Method_BattleLogicFunction_CommonCheckDuplicateFunction___c__DisplayClass5_1__saveExecutedFunction_b__0__,
        0LL);
      if ( !executedFuncList )
        break;
      Index = System_Collections_Generic_List_object___FindIndex(
                executedFuncList,
                (System_Predicate_T__o *)v28,
                (const MethodInfo_34ADF2C *)Method_System_Collections_Generic_List_BattleLogicFunction_ExecutedFunctionData__FindIndex__);
      if ( (Index & 0x80000000) != 0 )
      {
        if ( !*(_QWORD *)v23 )
          break;
        v29 = *(DataVals_o **)(*(_QWORD *)v23 + 16LL);
        v30 = (System_Collections_Generic_List_object__o *)this->fields.executedFuncList;
        v31 = *(_DWORD *)(v20 + 16);
        v32 = (BattleLogicFunction_ExecutedFunctionData_o *)sub_1B64314(
                                                              BattleLogicFunction_ExecutedFunctionData_TypeInfo,
                                                              v17,
                                                              v18);
        BattleLogicFunction_ExecutedFunctionData___ctor(v32, v29, v31, v33);
        if ( !v30 )
          break;
        items = v30->fields._items;
        v37 = Method_System_Collections_Generic_List_BattleLogicFunction_ExecutedFunctionData__Add__;
        ++v30->fields._version;
        if ( !items )
          break;
        size = v30->fields._size;
        if ( (unsigned int)size >= items->max_length )
        {
          System_Collections_Generic_List_object___AddWithResize(
            v30,
            (Il2CppObject *)v32,
            *(const MethodInfo_34AD6D4 **)(*(_QWORD *)(v37[4] + 192LL) + 112LL));
        }
        else
        {
          v39 = &items->obj.klass + size;
          v30->fields._size = size + 1;
          v39[4] = (Il2CppClass *)v32;
          sub_1B6406C((ServantStatusBattleListViewItem_o *)(v39 + 4), (int32_t)v32, v34, v35);
        }
      }
      if ( (__int64)++v19 >= (int)targetIds->max_length )
        return;
    }
LABEL_19:
    sub_1B64324(Index);
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
    sub_1B64324(this);
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
    sub_1B64324(this);
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
    sub_1B64324(this);
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
  sub_1B6406C((ServantStatusBattleListViewItem_o *)&this->fields.argument, (int32_t)argument, v5, v6);
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
    sub_1B64324(0LL);
  v4 = BattleLogicFunction_CommonSideEffectFunctionArgument__getCheckBuffFuncList(argument, method);
  this->fields.executedFuncList = v4;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)&this->fields, (int32_t)v4, v5, v6);
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
    sub_1B64324(this);
  if ( !targetIds->max_length )
    sub_1B6432C(this, vals);
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
  __int64 v2; // x2
  __int64 v4; // x1
  System_Collections_Generic_Dictionary_int__object__o *v5; // x20
  int32_t v6; // w2
  int32_t v7; // w3
  const MethodInfo *v8; // x1

  if ( (byte_49FEF50 & 1) == 0 )
  {
    sub_1B640C8(
      &Method_System_Collections_Generic_Dictionary_int__List_BattleLogicFunction_ExecutedFunctionData____ctor__,
      method);
    sub_1B640C8(
      &System_Collections_Generic_Dictionary_int__List_BattleLogicFunction_ExecutedFunctionData___TypeInfo,
      v4);
    byte_49FEF50 = 1;
  }
  *(&this->fields._SkillTiming_k__BackingField + 1) = -1;
  v5 = (System_Collections_Generic_Dictionary_int__object__o *)sub_1B64314(
                                                                 System_Collections_Generic_Dictionary_int__List_BattleLogicFunction_ExecutedFunctionData___TypeInfo,
                                                                 method,
                                                                 v2);
  System_Collections_Generic_Dictionary_int__object____ctor(
    v5,
    (const MethodInfo_3122FB0 *)Method_System_Collections_Generic_Dictionary_int__List_BattleLogicFunction_ExecutedFunctionData____ctor__);
  *(_QWORD *)&this->fields.buffUniqueId = v5;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)&this->fields.buffUniqueId, (int32_t)v5, v6, v7);
  BattleLogicFunction_FunctionArgument___ctor((BattleLogicFunction_FunctionArgument_o *)this, v8);
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
  __int64 v8; // x1
  __int64 v9; // x2
  System_Collections_Generic_Dictionary_int__object__o *v10; // x20
  int32_t v11; // w21
  System_Collections_Generic_List_object__o *v12; // x22

  if ( (byte_49FEF4F & 1) == 0 )
  {
    sub_1B640C8(
      &Method_System_Collections_Generic_Dictionary_int__List_BattleLogicFunction_ExecutedFunctionData___ContainsKey__,
      method);
    sub_1B640C8(
      &Method_System_Collections_Generic_Dictionary_int__List_BattleLogicFunction_ExecutedFunctionData___get_Item__,
      v3);
    sub_1B640C8(
      &Method_System_Collections_Generic_Dictionary_int__List_BattleLogicFunction_ExecutedFunctionData___set_Item__,
      v4);
    sub_1B640C8(&Method_System_Collections_Generic_List_BattleLogicFunction_ExecutedFunctionData___ctor__, v5);
    sub_1B640C8(&System_Collections_Generic_List_BattleLogicFunction_ExecutedFunctionData__TypeInfo, v6);
    byte_49FEF4F = 1;
  }
  v7 = *(System_Collections_Generic_Dictionary_int__object__o **)&this->fields.buffUniqueId;
  if ( !v7 )
    goto LABEL_9;
  if ( !System_Collections_Generic_Dictionary_int__object___ContainsKey(
          v7,
          *(&this->fields._SkillTiming_k__BackingField + 1),
          (const MethodInfo_3123B78 *)Method_System_Collections_Generic_Dictionary_int__List_BattleLogicFunction_ExecutedFunctionData___ContainsKey__) )
  {
    v10 = *(System_Collections_Generic_Dictionary_int__object__o **)&this->fields.buffUniqueId;
    v11 = *(&this->fields._SkillTiming_k__BackingField + 1);
    v12 = (System_Collections_Generic_List_object__o *)sub_1B64314(
                                                         System_Collections_Generic_List_BattleLogicFunction_ExecutedFunctionData__TypeInfo,
                                                         v8,
                                                         v9);
    System_Collections_Generic_List_object____ctor(
      v12,
      (const MethodInfo_34ACEA0 *)Method_System_Collections_Generic_List_BattleLogicFunction_ExecutedFunctionData___ctor__);
    if ( !v10 )
      goto LABEL_9;
    System_Collections_Generic_Dictionary_int__object___set_Item(
      v10,
      v11,
      (Il2CppObject *)v12,
      (const MethodInfo_3123970 *)Method_System_Collections_Generic_Dictionary_int__List_BattleLogicFunction_ExecutedFunctionData___set_Item__);
  }
  v7 = *(System_Collections_Generic_Dictionary_int__object__o **)&this->fields.buffUniqueId;
  if ( !v7 )
LABEL_9:
    sub_1B64324(v7);
  return (System_Collections_Generic_List_BattleLogicFunction_ExecutedFunctionData__o *)System_Collections_Generic_Dictionary_int__object___get_Item(
                                                                                          v7,
                                                                                          *(&this->fields._SkillTiming_k__BackingField
                                                                                          + 1),
                                                                                          (const MethodInfo_31238E4 *)Method_System_Collections_Generic_Dictionary_int__List_BattleLogicFunction_ExecutedFunctionData___get_Item__);
}


void __fastcall BattleLogicFunction_ExecutedFunctionData___ctor(
        BattleLogicFunction_ExecutedFunctionData_o *this,
        DataVals_o *vals,
        int32_t targetId,
        const MethodInfo *method)
{
  __int64 v7; // x0
  int32_t funcIndex; // w8

  *(_QWORD *)&this->fields.index = -1LL;
  System_Object___ctor((Il2CppObject *)this, 0LL);
  if ( !vals )
    sub_1B64324(v7);
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
    sub_1B64324(this);
  return this->fields.index == vals->fields.funcIndex
      && (targetId == -1 || this->fields.targetId == targetId)
      && (!isCheckEnable || this->fields.isEnable);
}


void __fastcall BattleLogicFunction_FuncSideEffectFunctionArgument___ctor(
        BattleLogicFunction_FuncSideEffectFunctionArgument_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v4; // x1
  __int64 v5; // x1
  System_Collections_Generic_HashSet_int__o *v6; // x20
  int32_t v7; // w2
  int32_t v8; // w3
  const MethodInfo *v9; // x1
  __int64 v10; // x1
  __int64 v11; // x2
  __int64 v12; // x20
  const MethodInfo *v13; // x1
  int32_t v14; // w2
  int32_t v15; // w3
  int32_t v16; // w2
  int32_t v17; // w3

  if ( (byte_49FEF52 & 1) == 0 )
  {
    sub_1B640C8(&BattleLogicFunction_CommonSideEffectCheckDuplicateFunction_TypeInfo, method);
    sub_1B640C8(&Method_System_Collections_Generic_HashSet_int___ctor__, v4);
    sub_1B640C8(&System_Collections_Generic_HashSet_int__TypeInfo, v5);
    byte_49FEF52 = 1;
  }
  v6 = (System_Collections_Generic_HashSet_int__o *)sub_1B64314(
                                                      System_Collections_Generic_HashSet_int__TypeInfo,
                                                      method,
                                                      v2);
  System_Collections_Generic_HashSet_int____ctor(
    v6,
    (const MethodInfo_33639AC *)Method_System_Collections_Generic_HashSet_int___ctor__);
  this->fields.executedBuffFuncDic = (struct System_Collections_Generic_Dictionary_int__List_BattleLogicFunction_ExecutedFunctionData___o *)v6;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)&this->fields.executedBuffFuncDic, (int32_t)v6, v7, v8);
  BattleLogicFunction_CommonSideEffectFunctionArgument___ctor(
    (BattleLogicFunction_CommonSideEffectFunctionArgument_o *)this,
    v9);
  v12 = sub_1B64314(BattleLogicFunction_CommonSideEffectCheckDuplicateFunction_TypeInfo, v10, v11);
  BattleLogicFunction_CommonCheckDuplicateFunction___ctor(
    (BattleLogicFunction_CommonCheckDuplicateFunction_o *)v12,
    v13);
  *(_QWORD *)(v12 + 24) = this;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)(v12 + 24), (int32_t)this, v14, v15);
  this->fields.checkDuplicate = (struct BattleLogicFunction_CheckDuplicateFunction_o *)v12;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)&this->fields.checkDuplicate, v12, v16, v17);
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
  if ( (byte_49FEF54 & 1) == 0 )
  {
    this = (BattleLogicFunction_FuncSideEffectFunctionArgument_o *)sub_1B640C8(
                                                                     &Method_System_Collections_Generic_HashSet_int__Add__,
                                                                     funcTarget);
    byte_49FEF54 = 1;
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
        (const MethodInfo_3364BB0 *)Method_System_Collections_Generic_HashSet_int__Add__);
      return;
    }
LABEL_12:
    sub_1B64324(this);
  }
}


void __fastcall BattleLogicFunction_FuncSideEffectFunctionArgument__AddTarget_43131460(
        BattleLogicFunction_FuncSideEffectFunctionArgument_o *this,
        BattleLogicFunction_FuncSideEffectFunctionArgument_o *arg,
        const MethodInfo *method)
{
  System_Collections_Generic_HashSet_int__o *executedBuffFuncDic; // x0

  if ( (byte_49FEF55 & 1) == 0 )
  {
    sub_1B640C8(&Method_System_Collections_Generic_HashSet_int__UnionWith__, arg);
    byte_49FEF55 = 1;
  }
  if ( arg )
  {
    executedBuffFuncDic = (System_Collections_Generic_HashSet_int__o *)this->fields.executedBuffFuncDic;
    if ( !executedBuffFuncDic )
      sub_1B64324(0LL);
    System_Collections_Generic_HashSet_int___UnionWith(
      executedBuffFuncDic,
      (System_Collections_Generic_IEnumerable_T__o *)arg->fields.executedBuffFuncDic,
      (const MethodInfo_3364BC0 *)Method_System_Collections_Generic_HashSet_int__UnionWith__);
  }
}


// local variable allocation has failed, the output may be wrong!
BuffList_ACTION_array *__fastcall BattleLogicFunction_FuncSideEffectFunctionArgument__GetActArray(
        BattleLogicFunction_FuncSideEffectFunctionArgument_o *this,
        bool isMainOnly,
        const MethodInfo *method)
{
  _QWORD *v3; // x19
  __int64 v4; // x8
  __int64 v5; // x0
  __int64 v6; // x0

  if ( (byte_49FEF53 & 1) == 0 )
  {
    sub_1B640C8(&Method_System_Array_Empty_BuffList_ACTION___, isMainOnly);
    byte_49FEF53 = 1;
  }
  v3 = Method_System_Array_Empty_BuffList_ACTION___;
  v4 = *((_QWORD *)Method_System_Array_Empty_BuffList_ACTION___ + 7);
  if ( !v4 )
  {
    sub_1BB6000(Method_System_Array_Empty_BuffList_ACTION___);
    v4 = v3[7];
  }
  v5 = *(_QWORD *)(v4 + 16);
  if ( (*(_BYTE *)(v5 + 309) & 1) == 0 )
    v5 = sub_1BB5FA4(v5);
  if ( !*(_DWORD *)(v5 + 224) )
    j_il2cpp_runtime_class_init_0(v5);
  v6 = *(_QWORD *)(v3[7] + 16LL);
  if ( (*(_BYTE *)(v6 + 309) & 1) == 0 )
    v6 = sub_1BB5FA4(v6);
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

  if ( (byte_49FEF56 & 1) == 0 )
  {
    sub_1B640C8(&Method_System_Linq_Enumerable_ToArray_int___, logicFunc);
    byte_49FEF56 = 1;
  }
  v9 = System_Linq_Enumerable__ToArray_int_(
         (System_Collections_Generic_IEnumerable_TSource__o *)this->fields.executedBuffFuncDic,
         (const MethodInfo_2E7122C *)Method_System_Linq_Enumerable_ToArray_int___);
  if ( !logicFunc )
    sub_1B64324(v9);
  BattleLogicFunction__SetFuncSideEffect(logicFunc, this, mainActionData, actorSvtData, v9, 0LL);
}


void __fastcall BattleLogicFunction_FunctionArgument___ctor(
        BattleLogicFunction_FunctionArgument_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  Il2CppObject *v4; // x20
  int32_t v5; // w2
  int32_t v6; // w3

  if ( (byte_49FEF4E & 1) == 0 )
  {
    sub_1B640C8(&BattleLogicFunction_CheckDuplicateFunction_TypeInfo, method);
    byte_49FEF4E = 1;
  }
  v4 = (Il2CppObject *)sub_1B64314(BattleLogicFunction_CheckDuplicateFunction_TypeInfo, method, v2);
  System_Object___ctor(v4, 0LL);
  this->fields.checkDuplicate = (struct BattleLogicFunction_CheckDuplicateFunction_o *)v4;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)&this->fields.checkDuplicate, (int32_t)v4, v5, v6);
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
    sub_1B64324(0LL);
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
  sub_1B6406C(
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
  sub_1B6406C(
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
  __int64 v2; // x2
  BattleLogicFunction_SideEffectMakeArgument_o *v3; // x19
  const MethodInfo *v4; // x1

  if ( (byte_49FEF6B & 1) == 0 )
  {
    sub_1B640C8(&BattleLogicFunction_PreMainAttackSideEffectMakeArgument_TypeInfo, method);
    byte_49FEF6B = 1;
  }
  v3 = (BattleLogicFunction_SideEffectMakeArgument_o *)sub_1B64314(
                                                         BattleLogicFunction_PreMainAttackSideEffectMakeArgument_TypeInfo,
                                                         method,
                                                         v2);
  BattleLogicFunction_SideEffectMakeArgument___ctor(v3, v4);
  return v3;
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
  BattleLogicFunction_FunctionArgument_o *v3; // x20
  __int64 v5; // x1
  __int64 v6; // x1
  System_Collections_Generic_Dictionary_KeyValuePair_int__int___bool__o *v7; // x21
  int32_t v8; // w2
  int32_t v9; // w3
  __int64 v10; // x1
  __int64 v11; // x2
  int32_t v12; // w3
  const MethodInfo *v13; // x1
  struct BattleLogicFunction_FunctionArgument_o **p_externalArg; // x19

  v3 = argument;
  if ( (byte_49FEF60 & 1) == 0 )
  {
    sub_1B640C8(&Method_System_Collections_Generic_Dictionary_KeyValuePair_int__int___bool___ctor__, argument);
    sub_1B640C8(&System_Collections_Generic_Dictionary_KeyValuePair_int__int___bool__TypeInfo, v5);
    sub_1B640C8(&BattleLogicFunction_FunctionArgument_TypeInfo, v6);
    byte_49FEF60 = 1;
  }
  v7 = (System_Collections_Generic_Dictionary_KeyValuePair_int__int___bool__o *)sub_1B64314(
                                                                                  System_Collections_Generic_Dictionary_KeyValuePair_int__int___bool__TypeInfo,
                                                                                  argument,
                                                                                  method);
  System_Collections_Generic_Dictionary_KeyValuePair_int__int___bool____ctor(
    v7,
    (const MethodInfo_30DE2B4 *)Method_System_Collections_Generic_Dictionary_KeyValuePair_int__int___bool___ctor__);
  this->fields.funcResults = v7;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)&this->fields, (int32_t)v7, v8, v9);
  this->fields.tdCommandTypeChange = -1;
  System_Object___ctor((Il2CppObject *)this, 0LL);
  if ( !v3 )
  {
    v3 = (BattleLogicFunction_FunctionArgument_o *)sub_1B64314(BattleLogicFunction_FunctionArgument_TypeInfo, v10, v11);
    BattleLogicFunction_FunctionArgument___ctor(v3, v13);
  }
  this->fields.externalArg = v3;
  p_externalArg = &this->fields.externalArg;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)p_externalArg, (int32_t)v3, v11, v12);
  if ( !*p_externalArg )
    sub_1B64324(0LL);
  ((void (__fastcall *)(struct BattleLogicFunction_FunctionArgument_o *, Il2CppMethodPointer))(*p_externalArg)->klass->vtable._4_Init.method)(
    *p_externalArg,
    (*p_externalArg)->klass->vtable._5_GetFixTargetIds.methodPtr);
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
  __int64 v28; // x2
  int v29; // w23
  int v30; // w8
  __int64 v31; // x1
  char v32; // w21
  _BOOL4 v33; // w24
  struct System_Collections_Generic_Dictionary_KeyValuePair_int__int___bool__o *funcResults; // x20
  System_Func_KeyValuePair_KeyValuePair_int__int___bool___bool__o *v35; // x0
  System_Func_TSource__bool__o *v36; // x22
  System_Collections_Generic_IEnumerable_TSource__o *v37; // x20
  System_Collections_Generic_IEnumerable_TSource__c *klass; // x8
  __int64 v39; // x9
  int32_t *p_offset; // x10
  __int64 p_method; // x0
  System_Collections_Generic_IEnumerable_TSource__o *v42; // x19
  __int64 v43; // x1
  __int64 v44; // x2
  System_Func_KeyValuePair_KeyValuePair_int__int___bool___bool__o *v45; // x20
  __int64 v46; // x20
  __int64 v47; // x8
  __int64 v48; // x9
  int *v49; // x10
  __int64 v50; // x0
  char v51; // w22
  __int64 v52; // x8
  __int64 v53; // x9
  int *v54; // x10
  __int64 v55; // x0
  __int64 v56; // x0
  char v57; // w1
  char v58; // w23
  BattleServantData_o *ServantData; // x0
  __int64 v60; // x8
  __int64 v61; // x9
  int *v62; // x10
  __int64 v63; // x0
  bool value; // [xsp+Ch] [xbp-54h] BYREF
  System_Collections_Generic_KeyValuePair_int__int__o key; // [xsp+10h] [xbp-50h] BYREF
  bool isAllCond; // [xsp+18h] [xbp-48h] BYREF
  bool isSameTargetOnly; // [xsp+1Ch] [xbp-44h] BYREF
  System_Collections_Generic_KeyValuePair_int__int__o p_key; // 0:x0.8
  System_Collections_Generic_KeyValuePair_int__int__o v70; // 0:x1.8

  if ( (byte_49FEF62 & 1) == 0 )
  {
    sub_1B640C8(
      &Method_System_Collections_Generic_Dictionary_KeyValuePair_int__int___bool__TryGetValue__,
      *(_QWORD *)&targetId);
    sub_1B640C8(&Method_System_Linq_Enumerable_Any_KeyValuePair_KeyValuePair_int__int___bool____, v9);
    sub_1B640C8(&Method_System_Linq_Enumerable_Count_KeyValuePair_KeyValuePair_int__int___bool____, v10);
    sub_1B640C8(&Method_System_Linq_Enumerable_Where_KeyValuePair_KeyValuePair_int__int___bool____, v11);
    sub_1B640C8(&System_Func_KeyValuePair_KeyValuePair_int__int___bool___bool__TypeInfo, v12);
    sub_1B640C8(&System_IDisposable_TypeInfo, v13);
    sub_1B640C8(&System_Collections_Generic_IEnumerable_KeyValuePair_KeyValuePair_int__int___bool___TypeInfo, v14);
    sub_1B640C8(&System_Collections_Generic_IEnumerator_KeyValuePair_KeyValuePair_int__int___bool___TypeInfo, v15);
    sub_1B640C8(&System_Collections_IEnumerator_TypeInfo, v16);
    sub_1B640C8(&Method_System_Collections_Generic_KeyValuePair_int__int___ctor__, v17);
    sub_1B640C8(&Method_System_Collections_Generic_KeyValuePair_KeyValuePair_int__int___bool__get_Key__, v18);
    sub_1B640C8(&Method_System_Collections_Generic_KeyValuePair_int__int__get_Value__, v19);
    sub_1B640C8(&Method_System_Collections_Generic_KeyValuePair_KeyValuePair_int__int___bool__get_Value__, v20);
    sub_1B640C8(&System_Math_TypeInfo, v21);
    sub_1B640C8(
      &Method_BattleLogicFunction_ProcListInArgs___c__DisplayClass37_0__DidTriggeredFuncHaveSpecifyResults_b__0__,
      v22);
    sub_1B640C8(
      &Method_BattleLogicFunction_ProcListInArgs___c__DisplayClass37_0__DidTriggeredFuncHaveSpecifyResults_b__1__,
      v23);
    sub_1B640C8(
      &Method_BattleLogicFunction_ProcListInArgs___c__DisplayClass37_0__DidTriggeredFuncHaveSpecifyResults_b__2__,
      v24);
    sub_1B640C8(&BattleLogicFunction_ProcListInArgs___c__DisplayClass37_0_TypeInfo, v25);
    byte_49FEF62 = 1;
  }
  isSameTargetOnly = 0;
  isAllCond = 0;
  key = 0LL;
  value = 0;
  v26 = sub_1B64314(BattleLogicFunction_ProcListInArgs___c__DisplayClass37_0_TypeInfo, *(_QWORD *)&targetId, baseVals);
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
    v32 = 1;
    return v32 & 1;
  }
  *(_BYTE *)(v26 + 20) = (int)TriggeredFuncIndex > 0;
  if ( !System_Math_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(System_Math_TypeInfo);
  if ( v29 >= 0 )
    v30 = v29;
  else
    v30 = -v29;
  v31 = (unsigned int)(v30 - 1);
  *(_DWORD *)(v26 + 16) = v31;
  if ( isSameTargetOnly )
  {
    p_key = (System_Collections_Generic_KeyValuePair_int__int__o)&key;
    System_Collections_Generic_KeyValuePair_int__int____ctor(
      p_key,
      v31,
      targetId,
      (const MethodInfo_33E3684 *)Method_System_Collections_Generic_KeyValuePair_int__int___ctor__);
    TriggeredFuncIndex = this->fields.funcResults;
    if ( TriggeredFuncIndex )
    {
      v70 = key;
      if ( System_Collections_Generic_Dictionary_KeyValuePair_int__int___bool___TryGetValue(
             TriggeredFuncIndex,
             v70,
             &value,
             (const MethodInfo_30E0410 *)Method_System_Collections_Generic_Dictionary_KeyValuePair_int__int___bool__TryGetValue__) )
      {
        v32 = value == *(_BYTE *)(v26 + 20);
        return v32 & 1;
      }
LABEL_24:
      v32 = 0;
      return v32 & 1;
    }
    goto LABEL_53;
  }
  v33 = isAllCond;
  funcResults = this->fields.funcResults;
  v35 = (System_Func_KeyValuePair_KeyValuePair_int__int___bool___bool__o *)sub_1B64314(
                                                                             System_Func_KeyValuePair_KeyValuePair_int__int___bool___bool__TypeInfo,
                                                                             v31,
                                                                             v28);
  v36 = (System_Func_TSource__bool__o *)v35;
  if ( !v33 )
  {
    System_Func_KeyValuePair_KeyValuePair_int__int___bool___bool____ctor(
      v35,
      (Il2CppObject *)v26,
      Method_BattleLogicFunction_ProcListInArgs___c__DisplayClass37_0__DidTriggeredFuncHaveSpecifyResults_b__0__,
      0LL);
    v42 = System_Linq_Enumerable__Where_KeyValuePair_KeyValuePair_int__int___bool__(
            (System_Collections_Generic_IEnumerable_TSource__o *)funcResults,
            v36,
            (const MethodInfo_2E75728 *)Method_System_Linq_Enumerable_Where_KeyValuePair_KeyValuePair_int__int___bool____);
    v45 = (System_Func_KeyValuePair_KeyValuePair_int__int___bool___bool__o *)sub_1B64314(
                                                                               System_Func_KeyValuePair_KeyValuePair_int__int___bool___bool__TypeInfo,
                                                                               v43,
                                                                               v44);
    System_Func_KeyValuePair_KeyValuePair_int__int___bool___bool____ctor(
      v45,
      (Il2CppObject *)v26,
      Method_BattleLogicFunction_ProcListInArgs___c__DisplayClass37_0__DidTriggeredFuncHaveSpecifyResults_b__1__,
      0LL);
    v32 = System_Linq_Enumerable__Any_KeyValuePair_KeyValuePair_int__int___bool__(
            v42,
            (System_Func_TSource__bool__o *)v45,
            (const MethodInfo_2E46FC4 *)Method_System_Linq_Enumerable_Any_KeyValuePair_KeyValuePair_int__int___bool____);
    return v32 & 1;
  }
  System_Func_KeyValuePair_KeyValuePair_int__int___bool___bool____ctor(
    v35,
    (Il2CppObject *)v26,
    Method_BattleLogicFunction_ProcListInArgs___c__DisplayClass37_0__DidTriggeredFuncHaveSpecifyResults_b__2__,
    0LL);
  v37 = System_Linq_Enumerable__Where_KeyValuePair_KeyValuePair_int__int___bool__(
          (System_Collections_Generic_IEnumerable_TSource__o *)funcResults,
          v36,
          (const MethodInfo_2E75728 *)Method_System_Linq_Enumerable_Where_KeyValuePair_KeyValuePair_int__int___bool____);
  TriggeredFuncIndex = (System_Collections_Generic_Dictionary_KeyValuePair_int__int___bool__o *)System_Linq_Enumerable__Count_KeyValuePair_KeyValuePair_int__int___bool__(
                                                                                                  v37,
                                                                                                  (const MethodInfo_2E54D84 *)Method_System_Linq_Enumerable_Count_KeyValuePair_KeyValuePair_int__int___bool____);
  if ( !(_DWORD)TriggeredFuncIndex )
    goto LABEL_24;
  if ( !v37 )
LABEL_53:
    sub_1B64324(TriggeredFuncIndex);
  klass = v37->klass;
  v39 = *(unsigned __int16 *)(&v37->klass->_2.bitflags2 + 3);
  if ( *(_WORD *)(&v37->klass->_2.bitflags2 + 3) )
  {
    p_offset = &klass->_1.interfaceOffsets->offset;
    while ( *((System_Collections_Generic_IEnumerable_KeyValuePair_KeyValuePair_int__int___bool___c **)p_offset - 1) != System_Collections_Generic_IEnumerable_KeyValuePair_KeyValuePair_int__int___bool___TypeInfo )
    {
      --v39;
      p_offset += 4;
      if ( !v39 )
        goto LABEL_23;
    }
    p_method = (__int64)&klass->vtable[*p_offset].method;
  }
  else
  {
LABEL_23:
    p_method = sub_1BB60A8(
                 v37,
                 System_Collections_Generic_IEnumerable_KeyValuePair_KeyValuePair_int__int___bool___TypeInfo,
                 0LL);
  }
  v46 = (*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerable_TSource__o *, _QWORD))p_method)(
          v37,
          *(_QWORD *)(p_method + 8));
  if ( !v46 )
    sub_1B64324(0LL);
  while ( 1 )
  {
    v47 = *(_QWORD *)v46;
    v48 = *(unsigned __int16 *)(*(_QWORD *)v46 + 302LL);
    if ( *(_WORD *)(*(_QWORD *)v46 + 302LL) )
    {
      v49 = (int *)(*(_QWORD *)(v47 + 176) + 8LL);
      while ( *((System_Collections_IEnumerator_c **)v49 - 1) != System_Collections_IEnumerator_TypeInfo )
      {
        --v48;
        v49 += 4;
        if ( !v48 )
          goto LABEL_32;
      }
      v50 = v47 + 16LL * *v49 + 312;
    }
    else
    {
LABEL_32:
      v50 = sub_1BB60A8(v46, System_Collections_IEnumerator_TypeInfo, 0LL);
    }
    v51 = (*(__int64 (__fastcall **)(__int64, _QWORD))v50)(v46, *(_QWORD *)(v50 + 8));
    if ( (v51 & 1) == 0 )
      break;
    v52 = *(_QWORD *)v46;
    v53 = *(unsigned __int16 *)(*(_QWORD *)v46 + 302LL);
    if ( *(_WORD *)(*(_QWORD *)v46 + 302LL) )
    {
      v54 = (int *)(*(_QWORD *)(v52 + 176) + 8LL);
      while ( *((System_Collections_Generic_IEnumerator_KeyValuePair_KeyValuePair_int__int___bool___c **)v54 - 1) != System_Collections_Generic_IEnumerator_KeyValuePair_KeyValuePair_int__int___bool___TypeInfo )
      {
        --v53;
        v54 += 4;
        if ( !v53 )
          goto LABEL_39;
      }
      v55 = v52 + 16LL * *v54 + 312;
    }
    else
    {
LABEL_39:
      v55 = sub_1BB60A8(
              v46,
              System_Collections_Generic_IEnumerator_KeyValuePair_KeyValuePair_int__int___bool___TypeInfo,
              0LL);
    }
    v56 = (*(__int64 (__fastcall **)(__int64, _QWORD))v55)(v46, *(_QWORD *)(v55 + 8));
    if ( !data )
      sub_1B64324(v56);
    v58 = v57;
    ServantData = BattleData__getServantData(data, SHIDWORD(v56), 0LL);
    if ( ServantData )
    {
      if ( !ServantData->fields.isDeadAnime && *(_BYTE *)(v26 + 20) != (v58 != 0) )
        break;
    }
  }
  v32 = v51 ^ 1;
  v60 = *(_QWORD *)v46;
  v61 = *(unsigned __int16 *)(*(_QWORD *)v46 + 302LL);
  if ( *(_WORD *)(*(_QWORD *)v46 + 302LL) )
  {
    v62 = (int *)(*(_QWORD *)(v60 + 176) + 8LL);
    while ( *((System_IDisposable_c **)v62 - 1) != System_IDisposable_TypeInfo )
    {
      --v61;
      v62 += 4;
      if ( !v61 )
        goto LABEL_49;
    }
    v63 = v60 + 16LL * *v62 + 312;
  }
  else
  {
LABEL_49:
    v63 = sub_1BB60A8(v46, System_IDisposable_TypeInfo, 0LL);
  }
  (*(void (__fastcall **)(__int64, _QWORD))v63)(v46, *(_QWORD *)(v63 + 8));
  return v32 & 1;
}


// local variable allocation has failed, the output may be wrong!
int32_t __fastcall BattleLogicFunction_ProcListInArgs__GetFamilyBuffLinkageId(
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
    sub_1B64324(0LL);
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

  familyLinkageIdCacher = BattleLogicFunction_ProcListInArgs__get_familyLinkageIdCacher(
                            this,
                            (const MethodInfo *)targetSvtData);
  if ( !familyLinkageIdCacher )
    sub_1B64324(0LL);
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
    sub_1B64324(this);
  return externalArg->fields.grantSkillType == type;
}


BattleLogicFunction_CheckDuplicateFunction_o *__fastcall BattleLogicFunction_ProcListInArgs__get_CheckDuplicateFunc(
        BattleLogicFunction_ProcListInArgs_o *this,
        const MethodInfo *method)
{
  struct BattleLogicFunction_FunctionArgument_o *externalArg; // x8

  externalArg = this->fields.externalArg;
  if ( !externalArg )
    sub_1B64324(this);
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
    sub_1B64324(this);
  return externalArg->fields._FuncSideEffectArg_k__BackingField;
}


int32_t __fastcall BattleLogicFunction_ProcListInArgs__get_GrantSkillType(
        BattleLogicFunction_ProcListInArgs_o *this,
        const MethodInfo *method)
{
  struct BattleLogicFunction_FunctionArgument_o *externalArg; // x8

  externalArg = this->fields.externalArg;
  if ( !externalArg )
    sub_1B64324(this);
  return externalArg->fields.grantSkillType;
}


bool __fastcall BattleLogicFunction_ProcListInArgs__get_IsCommandSideEffect(
        BattleLogicFunction_ProcListInArgs_o *this,
        const MethodInfo *method)
{
  struct BattleLogicFunction_FunctionArgument_o *externalArg; // x8

  externalArg = this->fields.externalArg;
  if ( !externalArg )
    sub_1B64324(this);
  return externalArg->fields.isCommandSideEffect;
}


bool __fastcall BattleLogicFunction_ProcListInArgs__get_IsPassive(
        BattleLogicFunction_ProcListInArgs_o *this,
        const MethodInfo *method)
{
  struct BattleLogicFunction_FunctionArgument_o *externalArg; // x8

  externalArg = this->fields.externalArg;
  if ( !externalArg )
    sub_1B64324(this);
  return externalArg->fields.isPassive;
}


bool __fastcall BattleLogicFunction_ProcListInArgs__get_IsShift(
        BattleLogicFunction_ProcListInArgs_o *this,
        const MethodInfo *method)
{
  struct BattleLogicFunction_FunctionArgument_o *externalArg; // x8

  externalArg = this->fields.externalArg;
  if ( !externalArg )
    sub_1B64324(this);
  return externalArg->fields.isShift;
}


bool __fastcall BattleLogicFunction_ProcListInArgs__get_IsShowBattlePointEffect(
        BattleLogicFunction_ProcListInArgs_o *this,
        const MethodInfo *method)
{
  struct BattleLogicFunction_FunctionArgument_o *externalArg; // x8

  externalArg = this->fields.externalArg;
  if ( !externalArg )
    sub_1B64324(this);
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
    sub_1B64324(this);
  return externalArg->fields.skillId;
}


GeneratedFamilyLinkageIdCacher_o *__fastcall BattleLogicFunction_ProcListInArgs__get_familyLinkageIdCacher(
        BattleLogicFunction_ProcListInArgs_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  GeneratedFamilyLinkageIdCacher_o *result; // x0
  ServantStatusBattleListViewItem_o *p_familyLinkageIdCacher; // x19
  GeneratedFamilyLinkageIdCacher_o *familyLinkageIdCacher; // t1
  GeneratedFamilyLinkageIdCacher_o *v7; // x20
  int32_t v8; // w2
  int32_t v9; // w3

  if ( (byte_49FEF5F & 1) == 0 )
  {
    sub_1B640C8(&GeneratedFamilyLinkageIdCacher_TypeInfo, method);
    byte_49FEF5F = 1;
  }
  familyLinkageIdCacher = this->fields._familyLinkageIdCacher;
  p_familyLinkageIdCacher = (ServantStatusBattleListViewItem_o *)&this->fields._familyLinkageIdCacher;
  result = familyLinkageIdCacher;
  if ( !familyLinkageIdCacher )
  {
    v7 = (GeneratedFamilyLinkageIdCacher_o *)sub_1B64314(GeneratedFamilyLinkageIdCacher_TypeInfo, method, v2);
    GeneratedFamilyLinkageIdCacher___ctor(v7, 0LL);
    p_familyLinkageIdCacher->klass = (ServantStatusBattleListViewItem_c *)v7;
    sub_1B6406C(p_familyLinkageIdCacher, (int32_t)v7, v8, v9);
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
  int32_t v16; // w3
  __int64 v17; // x1
  __int64 v18; // x2
  struct BattleLogicFunctionProcess_FunctionUnitCheck_array *funcUnitArray_k__BackingField; // x27
  il2cpp_array_size_t v20; // w28
  BattleLogicFunctionProcess_FunctionUnitCheck_o *v21; // x26
  const MethodInfo *v22; // x3
  int32_t v23; // w2
  int32_t v24; // w3
  Il2CppClass **v25; // x0
  const MethodInfo *v26; // x4
  BattleLogicFunctionProcess_FunctionUnitCheck_array *v27; // x8
  int v28; // w8
  int v29; // w22
  BattleLogicFunctionProcess_FunctionUnitCheck_o *v30; // x21
  int v31; // w23
  BattleLogicFunctionProcess_FunctionUnitCheck_o *v32; // x20
  const MethodInfo *v33; // x2
  _BOOL4 v34; // w8
  __int64 v35; // x0

  v10 = this;
  if ( (byte_49FEF64 & 1) == 0 )
  {
    sub_1B640C8(&BattleLogicFunctionProcess_FunctionUnitCheck___TypeInfo, logic);
    this = (BattleLogicFunction_ProcListInArgs_o *)sub_1B640C8(
                                                     &BattleLogicFunctionProcess_FunctionUnitCheck_TypeInfo,
                                                     v11);
    byte_49FEF64 = 1;
  }
  if ( !dataValsList )
    goto LABEL_38;
  max_length = dataValsList->max_length;
  v13 = sub_1B64170(BattleLogicFunctionProcess_FunctionUnitCheck___TypeInfo, (unsigned int)max_length);
  v10->fields._funcUnitArray_k__BackingField = (struct BattleLogicFunctionProcess_FunctionUnitCheck_array *)v13;
  p_funcUnitArray_k__BackingField = &v10->fields._funcUnitArray_k__BackingField;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)&v10->fields._funcUnitArray_k__BackingField, v13, v15, v16);
  funcUnitArray_k__BackingField = v10->fields._funcUnitArray_k__BackingField;
  if ( max_length >= 1 )
  {
    v20 = 0;
    while ( 1 )
    {
      v21 = (BattleLogicFunctionProcess_FunctionUnitCheck_o *)sub_1B64314(
                                                                BattleLogicFunctionProcess_FunctionUnitCheck_TypeInfo,
                                                                v17,
                                                                v18);
      BattleLogicFunctionProcess_FunctionUnitCheck___ctor(v21, logic, v10, v22);
      if ( !funcUnitArray_k__BackingField )
        break;
      if ( v21 )
      {
        this = (BattleLogicFunction_ProcListInArgs_o *)sub_1B64204(
                                                         v21,
                                                         funcUnitArray_k__BackingField->obj.klass->_1.element_class);
        if ( !this )
        {
          v35 = sub_1B64348(0LL);
          sub_1B641F0(v35, 0LL);
        }
      }
      if ( v20 >= funcUnitArray_k__BackingField->max_length )
        goto LABEL_39;
      v25 = &funcUnitArray_k__BackingField->obj.klass + (int)v20;
      v25[4] = (Il2CppClass *)v21;
      sub_1B6406C((ServantStatusBattleListViewItem_o *)(v25 + 4), (int32_t)v21, v23, v24);
      v27 = *p_funcUnitArray_k__BackingField;
      if ( !*p_funcUnitArray_k__BackingField )
        break;
      if ( v20 >= v27->max_length )
        goto LABEL_39;
      if ( !functionIds )
        break;
      if ( v20 >= functionIds->max_length || v20 >= dataValsList->max_length )
LABEL_39:
        sub_1B6432C(this, v17);
      this = (BattleLogicFunction_ProcListInArgs_o *)v27->m_Items[v20];
      if ( !this )
        break;
      BattleLogicFunctionProcess_FunctionUnitCheck__setDataVals(
        (BattleLogicFunctionProcess_FunctionUnitCheck_o *)this,
        funcIndex,
        functionIds->m_Items[v20 + 1],
        dataValsList->m_Items[v20],
        v26);
      ++v20;
      ++*funcIndex;
      funcUnitArray_k__BackingField = *p_funcUnitArray_k__BackingField;
      if ( max_length == v20 )
        goto LABEL_17;
    }
LABEL_38:
    sub_1B64324(this);
  }
LABEL_17:
  if ( !funcUnitArray_k__BackingField )
    goto LABEL_38;
  v28 = funcUnitArray_k__BackingField->max_length;
  if ( v28 >= 1 )
  {
    v29 = 0;
    v30 = 0LL;
    v31 = -1;
    do
    {
      if ( v29 >= (unsigned int)v28 )
        goto LABEL_39;
      v32 = funcUnitArray_k__BackingField->m_Items[v29];
      if ( !v32 )
        goto LABEL_38;
      this = (BattleLogicFunction_ProcListInArgs_o *)v32->fields._dataVals_k__BackingField;
      if ( !this )
        goto LABEL_38;
      if ( DataVals__IsAddIndividualty((DataVals_o *)this, 0LL) )
        goto LABEL_26;
      this = (BattleLogicFunction_ProcListInArgs_o *)v32->fields._dataVals_k__BackingField;
      if ( !this )
        goto LABEL_38;
      if ( DataVals__IsAddLinkageTargetIndividualty((DataVals_o *)this, 0LL) )
LABEL_26:
        BattleLogicFunctionProcess_FunctionUnitCheck__setLinkFunction(v32, *p_funcUnitArray_k__BackingField, v33);
      this = (BattleLogicFunction_ProcListInArgs_o *)v32->fields._dataVals_k__BackingField;
      if ( !this )
        goto LABEL_38;
      this = (BattleLogicFunction_ProcListInArgs_o *)DataVals__GetFunctionTriggerStarNum((DataVals_o *)this, 0LL);
      if ( ((unsigned int)this & 0x80000000) == 0 )
      {
        v34 = v30 == 0LL || (int)this < v31;
        if ( v34 )
          v31 = (int)this;
        if ( v34 )
          v30 = v32;
      }
      v28 = funcUnitArray_k__BackingField->max_length;
      ++v29;
    }
    while ( v29 < v28 );
    if ( v30 )
      v30->fields.isLowestStarFunction = 1;
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
  System_Collections_Generic_Dictionary_KeyValuePair_int__int___bool__o *funcResults; // x0
  System_Collections_Generic_KeyValuePair_int__int__o key; // [xsp+8h] [xbp-38h] BYREF
  System_Collections_Generic_KeyValuePair_int__int__o p_key; // 0:x0.8
  System_Collections_Generic_KeyValuePair_int__int__o v14; // 0:x1.8
  System_Collections_Generic_KeyValuePair_int__int__o v15; // 0:x1.8

  if ( (byte_49FEF61 & 1) == 0 )
  {
    sub_1B640C8(
      &Method_System_Collections_Generic_Dictionary_KeyValuePair_int__int___bool__ContainsKey__,
      *(_QWORD *)&targetId);
    sub_1B640C8(&Method_System_Collections_Generic_Dictionary_KeyValuePair_int__int___bool__get_Item__, v7);
    sub_1B640C8(&Method_System_Collections_Generic_KeyValuePair_int__int___ctor__, v8);
    byte_49FEF61 = 1;
  }
  p_key = (System_Collections_Generic_KeyValuePair_int__int__o)&key;
  key = 0LL;
  System_Collections_Generic_KeyValuePair_int__int____ctor(
    p_key,
    index - 1,
    targetId,
    (const MethodInfo_33E3684 *)Method_System_Collections_Generic_KeyValuePair_int__int___ctor__);
  funcResults = this->fields.funcResults;
  if ( !funcResults )
    goto LABEL_9;
  v14 = key;
  if ( !System_Collections_Generic_Dictionary_KeyValuePair_int__int___bool___ContainsKey(
          funcResults,
          v14,
          (const MethodInfo_30DEE9C *)Method_System_Collections_Generic_Dictionary_KeyValuePair_int__int___bool__ContainsKey__) )
    return 0;
  funcResults = this->fields.funcResults;
  if ( !funcResults )
LABEL_9:
    sub_1B64324(funcResults);
  v15 = key;
  return System_Collections_Generic_Dictionary_KeyValuePair_int__int___bool___get_Item(
           funcResults,
           v15,
           (const MethodInfo_30DEBE8 *)Method_System_Collections_Generic_Dictionary_KeyValuePair_int__int___bool__get_Item__);
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
  System_Collections_Generic_Dictionary_KeyValuePair_int__int___bool__o *funcResults; // x0
  System_Collections_Generic_KeyValuePair_int__int__o key; // [xsp+8h] [xbp-38h] BYREF
  System_Collections_Generic_KeyValuePair_int__int__o p_key; // 0:x0.8
  System_Collections_Generic_KeyValuePair_int__int__o v13; // 0:x1.8

  if ( (byte_49FEF63 & 1) == 0 )
  {
    sub_1B640C8(
      &Method_System_Collections_Generic_Dictionary_KeyValuePair_int__int___bool__set_Item__,
      *(_QWORD *)&targetId);
    sub_1B640C8(&Method_System_Collections_Generic_KeyValuePair_int__int___ctor__, v9);
    byte_49FEF63 = 1;
  }
  p_key = (System_Collections_Generic_KeyValuePair_int__int__o)&key;
  key = 0LL;
  System_Collections_Generic_KeyValuePair_int__int____ctor(
    p_key,
    index,
    targetId,
    (const MethodInfo_33E3684 *)Method_System_Collections_Generic_KeyValuePair_int__int___ctor__);
  funcResults = this->fields.funcResults;
  if ( !funcResults )
    sub_1B64324(0LL);
  v13 = key;
  System_Collections_Generic_Dictionary_KeyValuePair_int__int___bool___set_Item(
    funcResults,
    v13,
    result,
    (const MethodInfo_30DEC7C *)Method_System_Collections_Generic_Dictionary_KeyValuePair_int__int___bool__set_Item__);
}


void __fastcall BattleLogicFunction_ProcListInArgs__set_IsCommandSideEffect(
        BattleLogicFunction_ProcListInArgs_o *this,
        bool value,
        const MethodInfo *method)
{
  struct BattleLogicFunction_FunctionArgument_o *externalArg; // x8

  externalArg = this->fields.externalArg;
  if ( !externalArg )
    sub_1B64324(this);
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
    sub_1B64324(this);
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
    sub_1B64324(this);
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
    sub_1B64324(this);
  externalArg->fields.skillId = value;
}


void __fastcall BattleLogicFunction_ProcListInArgs__set_funcUnitArray(
        BattleLogicFunction_ProcListInArgs_o *this,
        BattleLogicFunctionProcess_FunctionUnitCheck_array *value,
        const MethodInfo *method)
{
  int32_t v3; // w3

  this->fields._funcUnitArray_k__BackingField = value;
  sub_1B6406C(
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
  __int64 v5; // x1

  key = x.fields.key.fields.key;
  if ( (byte_49FEF66 & 1) == 0 )
  {
    sub_1B640C8(
      &Method_System_Collections_Generic_KeyValuePair_KeyValuePair_int__int___bool__get_Key__,
      *(_QWORD *)&x.fields.key);
    sub_1B640C8(&Method_System_Collections_Generic_KeyValuePair_int__int__get_Key__, v5);
    byte_49FEF66 = 1;
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
  if ( (byte_49FEF67 & 1) == 0 )
  {
    sub_1B640C8(
      &Method_System_Collections_Generic_KeyValuePair_KeyValuePair_int__int___bool__get_Value__,
      *(_QWORD *)&x.fields.key);
    byte_49FEF67 = 1;
  }
  return this->fields.isTrue == value;
}


bool __fastcall BattleLogicFunction_ProcListInArgs___c__DisplayClass37_0___DidTriggeredFuncHaveSpecifyResults_b__2(
        BattleLogicFunction_ProcListInArgs___c__DisplayClass37_0_o *this,
        System_Collections_Generic_KeyValuePair_KeyValuePair_int__int___bool__o x,
        const MethodInfo *method)
{
  int32_t key; // w19
  __int64 v5; // x1

  key = x.fields.key.fields.key;
  if ( (byte_49FEF65 & 1) == 0 )
  {
    sub_1B640C8(
      &Method_System_Collections_Generic_KeyValuePair_KeyValuePair_int__int___bool__get_Key__,
      *(_QWORD *)&x.fields.key);
    sub_1B640C8(&Method_System_Collections_Generic_KeyValuePair_int__int__get_Key__, v5);
    byte_49FEF65 = 1;
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

  if ( (byte_49FEF69 & 1) == 0 )
  {
    sub_1B640C8(&Method_System_Array_Empty_BattleActionData_SideEffectData___, method);
    byte_49FEF69 = 1;
  }
  v5 = Method_System_Array_Empty_BattleActionData_SideEffectData___;
  v6 = *((_QWORD *)Method_System_Array_Empty_BattleActionData_SideEffectData___ + 7);
  if ( !v6 )
  {
    sub_1BB6000(Method_System_Array_Empty_BattleActionData_SideEffectData___);
    v6 = v5[7];
  }
  v7 = *(_QWORD *)(v6 + 16);
  if ( (*(_BYTE *)(v7 + 309) & 1) == 0 )
    v7 = sub_1BB5FA4(v7);
  if ( !*(_DWORD *)(v7 + 224) )
    j_il2cpp_runtime_class_init_0(v7);
  v8 = *(_QWORD *)(v5[7] + 16LL);
  if ( (*(_BYTE *)(v8 + 309) & 1) == 0 )
    v8 = sub_1BB5FA4(v8);
  v9 = *(struct BattleActionData_SideEffectData_array ***)(v8 + 184);
  v10 = *v9;
  this->fields._SideEffectList_k__BackingField = *v9;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)&this->fields, (int32_t)v10, v2, v3);
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
  int32_t v15; // w3
  __int64 v16; // x1
  __int64 v17; // x2
  System_Func_T__TResult__o *v18; // x22
  System_Collections_Generic_IEnumerable_TSource__o *v19; // x0
  System_Object_array *v20; // x0
  int32_t v21; // w2
  int32_t v22; // w3

  if ( (byte_49FEF68 & 1) == 0 )
  {
    sub_1B640C8(&BuffList_ACTION___TypeInfo, targetIds);
    sub_1B640C8(&Method_System_Linq_Enumerable_Select_int__BattleActionData_SideEffectData___, v5);
    sub_1B640C8(&Method_System_Linq_Enumerable_ToArray_BattleActionData_SideEffectData___, v6);
    sub_1B640C8(&System_Func_int__BattleActionData_SideEffectData__TypeInfo, v7);
    sub_1B640C8(&Method_BattleLogicFunction_SideEffectMakeArgument___c__DisplayClass9_0__Init_b__0__, v8);
    sub_1B640C8(&BattleLogicFunction_SideEffectMakeArgument___c__DisplayClass9_0_TypeInfo, v9);
    byte_49FEF68 = 1;
  }
  v10 = sub_1B64314(BattleLogicFunction_SideEffectMakeArgument___c__DisplayClass9_0_TypeInfo, targetIds, method);
  System_Object___ctor((Il2CppObject *)v10, 0LL);
  v11 = sub_1B64170(BuffList_ACTION___TypeInfo, 1LL);
  v12 = ((__int64 (__fastcall *)(BattleLogicFunction_SideEffectMakeArgument_o *, Il2CppMethodPointer))this->klass->vtable._4_unknown.method)(
          this,
          this->klass->vtable._5_unknown.methodPtr);
  if ( !v11 )
    goto LABEL_7;
  if ( !*(_DWORD *)(v11 + 24) )
    sub_1B6432C(v12, v13);
  *(_DWORD *)(v11 + 32) = v12;
  if ( !v10 )
LABEL_7:
    sub_1B64324(v12);
  *(_QWORD *)(v10 + 16) = v11;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)(v10 + 16), v11, v14, v15);
  v18 = (System_Func_T__TResult__o *)sub_1B64314(System_Func_int__BattleActionData_SideEffectData__TypeInfo, v16, v17);
  System_Func_int__object____ctor(
    v18,
    (Il2CppObject *)v10,
    Method_BattleLogicFunction_SideEffectMakeArgument___c__DisplayClass9_0__Init_b__0__,
    0LL);
  v19 = (System_Collections_Generic_IEnumerable_TSource__o *)System_Linq_Enumerable__Select_int__object_(
                                                               (System_Collections_Generic_IEnumerable_TSource__o *)targetIds,
                                                               (System_Func_TSource__TResult__o *)v18,
                                                               (const MethodInfo_2E66FCC *)Method_System_Linq_Enumerable_Select_int__BattleActionData_SideEffectData___);
  v20 = System_Linq_Enumerable__ToArray_object_(
          v19,
          (const MethodInfo_2E713C4 *)Method_System_Linq_Enumerable_ToArray_BattleActionData_SideEffectData___);
  this->fields._SideEffectList_k__BackingField = (struct BattleActionData_SideEffectData_array *)v20;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)&this->fields, (int32_t)v20, v21, v22);
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
  sub_1B6406C((ServantStatusBattleListViewItem_o *)&this->fields, (int32_t)value, (int32_t)method, v3);
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

  if ( (byte_49FEF6A & 1) == 0 )
  {
    sub_1B640C8(&BattleActionData_SideEffectData_TypeInfo, *(_QWORD *)&id);
    byte_49FEF6A = 1;
  }
  buffActs = this->fields.buffActs;
  v6 = (BattleActionData_SideEffectData_o *)sub_1B64314(
                                              BattleActionData_SideEffectData_TypeInfo,
                                              *(_QWORD *)&id,
                                              method);
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

  if ( (byte_49FEF57 & 1) == 0 )
  {
    sub_1B640C8(&BuffList_ACTION___TypeInfo, isMainOnly);
    byte_49FEF57 = 1;
  }
  result = (BuffList_ACTION_array *)sub_1B64170(BuffList_ACTION___TypeInfo, 1LL);
  if ( !result )
    sub_1B64324(0LL);
  max_length = result->max_length;
  if ( !isMainOnly )
  {
    if ( max_length )
    {
      v7 = 122;
      goto LABEL_9;
    }
LABEL_11:
    sub_1B6432C(result, v5);
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

  if ( (byte_49FEF58 & 1) == 0 )
  {
    sub_1B640C8(&BuffList_ACTION___TypeInfo, isMainOnly);
    byte_49FEF58 = 1;
  }
  result = (BuffList_ACTION_array *)sub_1B64170(BuffList_ACTION___TypeInfo, 1LL);
  if ( !result )
    sub_1B64324(0LL);
  max_length = result->max_length;
  if ( !isMainOnly )
  {
    if ( max_length )
    {
      v7 = 124;
      goto LABEL_9;
    }
LABEL_11:
    sub_1B6432C(result, v5);
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
  int32_t v6; // w2
  int32_t v7; // w3

  if ( (byte_49FEF59 & 1) == 0 )
  {
    sub_1B640C8(&int___TypeInfo, *(_QWORD *)&targetId);
    byte_49FEF59 = 1;
  }
  BattleLogicFunction_FunctionArgument___ctor(
    (BattleLogicFunction_FunctionArgument_o *)this,
    *(const MethodInfo **)&targetId);
  v5 = (struct System_Int32_array *)sub_1B64170(int___TypeInfo, 1LL);
  if ( !v5 )
    sub_1B64324(0LL);
  if ( !v5->max_length )
    sub_1B6432C(v5, v5);
  v5->m_Items[1] = targetId;
  this->fields.fixTargetIds = v5;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)&this->fields.fixTargetIds, (int32_t)v5, v6, v7);
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
  __int64 v2; // x2
  Il2CppObject *v3; // x19
  int32_t v4; // w2
  int32_t v5; // w3

  if ( (byte_49FEF6D & 1) == 0 )
  {
    sub_1B640C8(&BattleLogicFunction___c_TypeInfo, v1);
    byte_49FEF6D = 1;
  }
  v3 = (Il2CppObject *)sub_1B64314(BattleLogicFunction___c_TypeInfo, v1, v2);
  System_Object___ctor(v3, 0LL);
  BattleLogicFunction___c_TypeInfo->static_fields->__9 = (struct BattleLogicFunction___c_o *)v3;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)BattleLogicFunction___c_TypeInfo->static_fields, (int32_t)v3, v4, v5);
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
    sub_1B64324(this);
  return BattleBuffData_BuffData__get_ExistChangeBgm(buff, 0LL);
}


bool __fastcall BattleLogicFunction___c___FunctionSubFieldBuff_b__121_1(
        BattleLogicFunction___c_o *this,
        BattleBuffData_BuffData_o *x,
        const MethodInfo *method)
{
  if ( !x )
    sub_1B64324(this);
  return x->fields.fieldChangeData != 0LL;
}


void __fastcall BattleLogicFunction___c___SetFuncSideEffect_b__49_0(
        BattleLogicFunction___c_o *this,
        BattleActionData_o *x,
        const MethodInfo *method)
{
  if ( !x )
    sub_1B64324(this);
  BattleActionData__SetPopupOnce(x, 0LL);
}


bool __fastcall BattleLogicFunction___c___functionMoveState_b__108_2(
        BattleLogicFunction___c_o *this,
        BattleBuffData_BuffData_o *x,
        const MethodInfo *method)
{
  if ( !x )
    sub_1B64324(this);
  return BattleBuffData_BuffData__get_ExistChangeBgm(x, 0LL);
}


void __fastcall BattleLogicFunction___c___functionPtShuffle_b__89_0(
        BattleLogicFunction___c_o *this,
        BattleServantData_o *s,
        const MethodInfo *method)
{
  __int64 Next; // x0

  Next = BattleRandom__getNext(1000, 0LL);
  if ( !s )
    sub_1B64324(Next);
  s->fields._shuffuleSeed = Next;
}


int32_t __fastcall BattleLogicFunction___c___functionPtShuffle_b__89_1(
        BattleLogicFunction___c_o *this,
        BattleServantData_o *a,
        BattleServantData_o *b,
        const MethodInfo *method)
{
  if ( !a || (this = (BattleLogicFunction___c_o *)BattleServantData__get_ShuffleSeed(a, 0LL), !b) )
    sub_1B64324(this);
  return (_DWORD)this - BattleServantData__get_ShuffleSeed(b, 0LL);
}


bool __fastcall BattleLogicFunction___c___functionReplaceEnemyMember_b__83_0(
        BattleLogicFunction___c_o *this,
        BattleServantData_o *x,
        const MethodInfo *method)
{
  if ( !x )
    sub_1B64324(this);
  return BattleServantData__isAlive(x, 0, 0LL);
}


BattleServantSnapShot_o *__fastcall BattleLogicFunction___c___functionTransformServant_b__85_0(
        BattleLogicFunction___c_o *this,
        BattleServantData_o *x,
        const MethodInfo *method)
{
  BattleServantSnapShotShiftServant_o *v4; // x20

  if ( (byte_49FEF6E & 1) == 0 )
  {
    sub_1B640C8(&BattleServantSnapShotShiftServant_TypeInfo, x);
    byte_49FEF6E = 1;
  }
  v4 = (BattleServantSnapShotShiftServant_o *)sub_1B64314(BattleServantSnapShotShiftServant_TypeInfo, x, method);
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
    sub_1B64324(this);
  return dataVals_k__BackingField->fields.funcType != 0;
}


bool __fastcall BattleLogicFunction___c___procList_b__41_1(
        BattleLogicFunction___c_o *this,
        BattleLogicFunctionProcess_FunctionUnitCheck_o *x,
        const MethodInfo *method)
{
  struct DataVals_o *dataVals_k__BackingField; // x8

  if ( !x || (dataVals_k__BackingField = x->fields._dataVals_k__BackingField) == 0LL )
    sub_1B64324(this);
  return dataVals_k__BackingField->fields.funcType == 135;
}


bool __fastcall BattleLogicFunction___c___procList_b__41_2(
        BattleLogicFunction___c_o *this,
        BattleLogicFunctionProcess_FunctionTargetCheck_o *target,
        const MethodInfo *method)
{
  if ( !target )
    sub_1B64324(this);
  return target->fields._result_k__BackingField;
}


int32_t __fastcall BattleLogicFunction___c___procList_b__41_3(
        BattleLogicFunction___c_o *this,
        BattleLogicFunctionProcess_FunctionTargetCheck_o *target,
        const MethodInfo *method)
{
  if ( !target )
    sub_1B64324(this);
  return target->fields._targetId_k__BackingField;
}


int32_t __fastcall BattleLogicFunction___c___setAttackSideEffect_b__52_0(
        BattleLogicFunction___c_o *this,
        BattleActionData_SideEffectData_o *x,
        const MethodInfo *method)
{
  if ( !x )
    sub_1B64324(this);
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
    sub_1B64324(this);
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
    sub_1B64324(this);
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
    sub_1B64324(this);
  return BattleBuffData_BuffData__checkState(x, this->fields.stateUnstealable, 0LL);
}


bool __fastcall BattleLogicFunction___c__DisplayClass108_0___functionMoveState_b__1(
        BattleLogicFunction___c__DisplayClass108_0_o *this,
        BattleBuffData_BuffData_o *x,
        const MethodInfo *method)
{
  System_Collections_Generic_HashSet_T__o *unstealableBuffs; // x0

  if ( (byte_49FEF6F & 1) == 0 )
  {
    sub_1B640C8(&Method_System_Collections_Generic_HashSet_BattleBuffData_BuffData__Contains__, x);
    byte_49FEF6F = 1;
  }
  unstealableBuffs = (System_Collections_Generic_HashSet_T__o *)this->fields.unstealableBuffs;
  if ( !unstealableBuffs )
    sub_1B64324(0LL);
  return !System_Collections_Generic_HashSet_object___Contains(
            unstealableBuffs,
            (Il2CppObject *)x,
            (const MethodInfo_336A4C4 *)Method_System_Collections_Generic_HashSet_BattleBuffData_BuffData__Contains__);
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
    sub_1B64324(this);
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
    sub_1B64324(targetSvtData);
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
    sub_1B64324(this);
  return x->fields.targetId == this->fields.targetId;
}