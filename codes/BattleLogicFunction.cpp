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
  int32_t v17; // w3
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
  int32_t v30; // w3

  if ( (byte_4A729CD & 1) == 0 )
  {
    sub_1B90010(&BattleLogicFunctionProcess_AddStateProcess_TypeInfo, method);
    sub_1B90010(&BattleLogicFunctionProcess_AddStateShortProcess_TypeInfo, v3);
    sub_1B90010(&BattleLogicFunctionProcess_CommonAddStateProcess_TypeInfo, v4);
    sub_1B90010(&BattleLogicFunctionProcess_CommonFieldFunctionProcess_TypeInfo, v5);
    sub_1B90010(&BattleLogicFunctionProcess_CommonFunctionTypeProcess_TypeInfo, v6);
    sub_1B90010(
      &Method_System_Collections_Generic_Dictionary_FuncList_TYPE__BattleLogicFunctionProcess_BaseFunctionTypeProcess__Add__,
      v7);
    sub_1B90010(
      &Method_System_Collections_Generic_Dictionary_FuncList_TYPE__BattleLogicFunctionProcess_BaseFunctionTypeProcess___ctor__,
      v8);
    sub_1B90010(
      &System_Collections_Generic_Dictionary_FuncList_TYPE__BattleLogicFunctionProcess_BaseFunctionTypeProcess__TypeInfo,
      v9);
    sub_1B90010(&int___TypeInfo, v10);
    sub_1B90010(&BattleLogicFunctionProcess_MoveToLastSubMemberProcess_TypeInfo, v11);
    sub_1B90010(&BattleLogicFunctionProcess_ToFieldCommonFunctionProcess_TypeInfo, v12);
    sub_1B90010(&BattleLogicFunctionProcess_TransformServantProcess_TypeInfo, v13);
    byte_4A729CD = 1;
  }
  v14 = (struct System_Int32_array *)sub_1B900B8(int___TypeInfo, 2LL);
  if ( !v14 )
    goto LABEL_8;
  max_length = v14->max_length;
  if ( !max_length || (v14->m_Items[1] = 701601, max_length == 1) )
    sub_1B90274(v14, v14);
  v14->m_Items[2] = 701602;
  this->fields.tamamocatTreasureDeviceIds = v14;
  sub_1B8FFB4((ServantStatusBattleListViewItem_o *)&this->fields.tamamocatTreasureDeviceIds, (int32_t)v14, v16, v17);
  v19 = (System_Collections_Generic_Dictionary_TKey__TValue__o *)sub_1B9025C(System_Collections_Generic_Dictionary_FuncList_TYPE__BattleLogicFunctionProcess_BaseFunctionTypeProcess__TypeInfo);
  System_Collections_Generic_Dictionary_Int32Enum__object____ctor(
    v19,
    (const MethodInfo_31AB4E0 *)Method_System_Collections_Generic_Dictionary_FuncList_TYPE__BattleLogicFunctionProcess_BaseFunctionTypeProcess___ctor__);
  v20 = (BattleLogicFunctionProcess_CommonFunctionTypeProcess_o *)sub_1B9025C(BattleLogicFunctionProcess_CommonFunctionTypeProcess_TypeInfo);
  BattleLogicFunctionProcess_CommonFunctionTypeProcess___ctor(v20, 0LL);
  if ( !v19 )
LABEL_8:
    sub_1B9026C(v14, v15);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v19,
    0,
    (Il2CppObject *)v20,
    (const MethodInfo_31ABEB4 *)Method_System_Collections_Generic_Dictionary_FuncList_TYPE__BattleLogicFunctionProcess_BaseFunctionTypeProcess__Add__);
  v21 = (BattleLogicFunctionProcess_AddStateProcess_o *)sub_1B9025C(BattleLogicFunctionProcess_AddStateProcess_TypeInfo);
  BattleLogicFunctionProcess_AddStateProcess___ctor(v21, 0LL);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v19,
    1,
    (Il2CppObject *)v21,
    (const MethodInfo_31ABEB4 *)Method_System_Collections_Generic_Dictionary_FuncList_TYPE__BattleLogicFunctionProcess_BaseFunctionTypeProcess__Add__);
  v22 = (BattleLogicFunctionProcess_AddStateShortProcess_o *)sub_1B9025C(BattleLogicFunctionProcess_AddStateShortProcess_TypeInfo);
  BattleLogicFunctionProcess_AddStateShortProcess___ctor(v22, 0LL);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v19,
    16,
    (Il2CppObject *)v22,
    (const MethodInfo_31ABEB4 *)Method_System_Collections_Generic_Dictionary_FuncList_TYPE__BattleLogicFunctionProcess_BaseFunctionTypeProcess__Add__);
  v23 = (BattleLogicFunctionProcess_MoveToLastSubMemberProcess_o *)sub_1B9025C(BattleLogicFunctionProcess_MoveToLastSubMemberProcess_TypeInfo);
  BattleLogicFunctionProcess_MoveToLastSubMemberProcess___ctor(v23, 0LL);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v19,
    61,
    (Il2CppObject *)v23,
    (const MethodInfo_31ABEB4 *)Method_System_Collections_Generic_Dictionary_FuncList_TYPE__BattleLogicFunctionProcess_BaseFunctionTypeProcess__Add__);
  v24 = (BattleLogicFunctionProcess_TransformServantProcess_o *)sub_1B9025C(BattleLogicFunctionProcess_TransformServantProcess_TypeInfo);
  BattleLogicFunctionProcess_TransformServantProcess___ctor(v24, 0LL);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v19,
    109,
    (Il2CppObject *)v24,
    (const MethodInfo_31ABEB4 *)Method_System_Collections_Generic_Dictionary_FuncList_TYPE__BattleLogicFunctionProcess_BaseFunctionTypeProcess__Add__);
  v25 = (BattleLogicFunctionProcess_CommonFieldFunctionProcess_o *)sub_1B9025C(BattleLogicFunctionProcess_CommonFieldFunctionProcess_TypeInfo);
  BattleLogicFunctionProcess_CommonFieldFunctionProcess___ctor(v25, 0LL);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v19,
    29,
    (Il2CppObject *)v25,
    (const MethodInfo_31ABEB4 *)Method_System_Collections_Generic_Dictionary_FuncList_TYPE__BattleLogicFunctionProcess_BaseFunctionTypeProcess__Add__);
  v26 = (BattleLogicFunctionProcess_CommonFieldFunctionProcess_o *)sub_1B9025C(BattleLogicFunctionProcess_CommonFieldFunctionProcess_TypeInfo);
  BattleLogicFunctionProcess_CommonFieldFunctionProcess___ctor(v26, 0LL);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v19,
    128,
    (Il2CppObject *)v26,
    (const MethodInfo_31ABEB4 *)Method_System_Collections_Generic_Dictionary_FuncList_TYPE__BattleLogicFunctionProcess_BaseFunctionTypeProcess__Add__);
  v27 = (BattleLogicFunctionProcess_CommonAddStateProcess_o *)sub_1B9025C(BattleLogicFunctionProcess_CommonAddStateProcess_TypeInfo);
  BattleLogicFunctionProcess_CommonAddStateProcess___ctor(v27, 0LL);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v19,
    130,
    (Il2CppObject *)v27,
    (const MethodInfo_31ABEB4 *)Method_System_Collections_Generic_Dictionary_FuncList_TYPE__BattleLogicFunctionProcess_BaseFunctionTypeProcess__Add__);
  v28 = (BattleLogicFunctionProcess_ToFieldCommonFunctionProcess_o *)sub_1B9025C(BattleLogicFunctionProcess_ToFieldCommonFunctionProcess_TypeInfo);
  BattleLogicFunctionProcess_ToFieldCommonFunctionProcess___ctor(v28, 0LL);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v19,
    131,
    (Il2CppObject *)v28,
    (const MethodInfo_31ABEB4 *)Method_System_Collections_Generic_Dictionary_FuncList_TYPE__BattleLogicFunctionProcess_BaseFunctionTypeProcess__Add__);
  this->fields.dicFuncProcess = (struct System_Collections_Generic_Dictionary_FuncList_TYPE__BattleLogicFunctionProcess_BaseFunctionTypeProcess__o *)v19;
  sub_1B8FFB4((ServantStatusBattleListViewItem_o *)&this->fields.dicFuncProcess, (int32_t)v19, v29, v30);
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
  if ( (byte_4A729B0 & 1) == 0 )
  {
    sub_1B90010(&BattleActionData_TypeInfo, mainAction);
    sub_1B90010(&System_IDisposable_TypeInfo, v9);
    sub_1B90010(&System_Collections_Generic_IEnumerable_BattleLogicFunctionProcess_FunctionTargetCheck__TypeInfo, v10);
    sub_1B90010(&System_Collections_Generic_IEnumerator_BattleLogicFunctionProcess_FunctionTargetCheck__TypeInfo, v11);
    sub_1B90010(&System_Collections_IEnumerator_TypeInfo, v12);
    sub_1B90010(&Method_System_Collections_Generic_List_FuncList_TYPE__Add__, v13);
    sub_1B90010(&Method_System_Collections_Generic_List_FuncList_TYPE___ctor__, v14);
    this = (BattleLogicFunction_o *)sub_1B90010(&System_Collections_Generic_List_FuncList_TYPE__TypeInfo, v15);
    byte_4A729B0 = 1;
  }
  if ( !funcTarget )
    goto LABEL_65;
  funcUnit_k__BackingField = funcTarget->fields._funcUnit_k__BackingField;
  if ( !funcUnit_k__BackingField )
    goto LABEL_65;
  procArg_k__BackingField = funcUnit_k__BackingField->fields._procArg_k__BackingField;
  dataVals_k__BackingField = funcUnit_k__BackingField->fields._dataVals_k__BackingField;
  v19 = (BattleActionData_o *)sub_1B9025C(BattleActionData_TypeInfo);
  BattleActionData___ctor(v19, 0LL);
  v20 = (System_Collections_Generic_List_T__o *)sub_1B9025C(System_Collections_Generic_List_FuncList_TYPE__TypeInfo);
  System_Collections_Generic_List_Int32Enum____ctor(
    v20,
    (const MethodInfo_34F5974 *)Method_System_Collections_Generic_List_FuncList_TYPE___ctor__);
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
      *(const MethodInfo_34F61C8 **)(*(_QWORD *)(v22[4] + 192LL) + 112LL));
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
        sub_1B90274(this, mainAction);
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
        v32 = sub_1BE1FF0(
                this,
                System_Collections_Generic_IEnumerable_BattleLogicFunctionProcess_FunctionTargetCheck__TypeInfo,
                0LL);
      }
      v34 = (*(__int64 (__fastcall **)(BattleLogicFunction_o *, _QWORD))v32)(v29, *(_QWORD *)(v32 + 8));
      if ( !v34 )
        sub_1B9026C(0LL, v33);
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
          v38 = sub_1BE1FF0(v34, System_Collections_IEnumerator_TypeInfo, 0LL);
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
          v42 = sub_1BE1FF0(
                  v34,
                  System_Collections_Generic_IEnumerator_BattleLogicFunctionProcess_FunctionTargetCheck__TypeInfo,
                  0LL);
        }
        v43 = (*(__int64 (__fastcall **)(__int64, _QWORD))v42)(v34, *(_QWORD *)(v42 + 8));
        v45 = v43;
        if ( !v43 )
          sub_1B9026C(0LL, v44);
        v46 = (*(__int64 (__fastcall **)(__int64, BattleActionData_o *, _QWORD))(*(_QWORD *)v43 + 392LL))(
                v43,
                mainAction,
                *(_QWORD *)(*(_QWORD *)v43 + 400LL));
        if ( (v46 & 1) != 0 )
        {
          if ( !mainAction )
            sub_1B9026C(v46, v47);
          v50 = *(_DWORD *)(v45 + 32);
          v51 = BattleLogicFunction__functionLossNp(v8, procArg_k__BackingField, v48, v50, v26, &diffNp, v49);
          v52 = diffNp;
          if ( diffNp < 1 )
          {
            if ( v51 )
            {
              if ( !v26 )
                sub_1B9026C(v51, v51);
              if ( !procArg_k__BackingField )
                sub_1B9026C(v51, v51);
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
                sub_1B9026C(NoEffectObject, NoEffectObject);
              BattleActionData__addAction(v19, NoEffectObject, 0LL);
            }
          }
          else
          {
            if ( !v19 )
              sub_1B9026C(v51, v51);
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
        v60 = sub_1BE1FF0(v34, System_IDisposable_TypeInfo, 0LL);
      }
      (*(void (__fastcall **)(__int64, _QWORD))v60)(v34, *(_QWORD *)(v60 + 8));
      this = v62;
      LODWORD(logic) = v62->fields.logic;
      v25 = v63 + 1;
      if ( (__int64)(v63 + 1) >= (int)logic )
        return v19;
    }
LABEL_65:
    sub_1B9026C(this, mainAction);
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
  if ( (byte_4A729AF & 1) == 0 )
  {
    sub_1B90010(&BattleActionData_TypeInfo, mainAction);
    sub_1B90010(&System_IDisposable_TypeInfo, v8);
    sub_1B90010(&System_Collections_Generic_IEnumerable_BattleLogicFunctionProcess_FunctionTargetCheck__TypeInfo, v9);
    sub_1B90010(&System_Collections_Generic_IEnumerator_BattleLogicFunctionProcess_FunctionTargetCheck__TypeInfo, v10);
    sub_1B90010(&System_Collections_IEnumerator_TypeInfo, v11);
    sub_1B90010(&Method_System_Collections_Generic_List_FuncList_TYPE__Add__, v12);
    sub_1B90010(&Method_System_Collections_Generic_List_FuncList_TYPE___ctor__, v13);
    this = (BattleLogicFunction_o *)sub_1B90010(&System_Collections_Generic_List_FuncList_TYPE__TypeInfo, v14);
    byte_4A729AF = 1;
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
  v18 = (BattleActionData_o *)sub_1B9025C(BattleActionData_TypeInfo);
  BattleActionData___ctor(v18, 0LL);
  v19 = (System_Collections_Generic_List_T__o *)sub_1B9025C(System_Collections_Generic_List_FuncList_TYPE__TypeInfo);
  System_Collections_Generic_List_Int32Enum____ctor(
    v19,
    (const MethodInfo_34F5974 *)Method_System_Collections_Generic_List_FuncList_TYPE___ctor__);
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
      *(const MethodInfo_34F61C8 **)(*(_QWORD *)(v21[4] + 192LL) + 112LL));
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
        sub_1B90274(this, mainAction);
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
        v31 = sub_1BE1FF0(
                this,
                System_Collections_Generic_IEnumerable_BattleLogicFunctionProcess_FunctionTargetCheck__TypeInfo,
                0LL);
      }
      v33 = (*(__int64 (__fastcall **)(BattleLogicFunction_o *, _QWORD))v31)(v28, *(_QWORD *)(v31 + 8));
      if ( !v33 )
        sub_1B9026C(0LL, v32);
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
          v37 = sub_1BE1FF0(v33, System_Collections_IEnumerator_TypeInfo, 0LL);
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
          v41 = sub_1BE1FF0(
                  v33,
                  System_Collections_Generic_IEnumerator_BattleLogicFunctionProcess_FunctionTargetCheck__TypeInfo,
                  0LL);
        }
        v42 = (*(__int64 (__fastcall **)(__int64, _QWORD))v41)(v33, *(_QWORD *)(v41 + 8));
        v44 = v42;
        if ( !v42 )
          sub_1B9026C(0LL, v43);
        v45 = (*(__int64 (__fastcall **)(__int64, BattleActionData_o *, _QWORD))(*(_QWORD *)v42 + 392LL))(
                v42,
                mainAction,
                *(_QWORD *)(*(_QWORD *)v42 + 400LL));
        if ( (v45 & 1) != 0 )
        {
          if ( !v25 )
            sub_1B9026C(v45, v46);
          if ( !procArg_k__BackingField )
            sub_1B9026C(v45, v46);
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
            sub_1B9026C(v52, v52);
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
        v56 = sub_1BE1FF0(v33, System_IDisposable_TypeInfo, 0LL);
      }
      (*(void (__fastcall **)(__int64, _QWORD))v56)(v33, *(_QWORD *)(v56 + 8));
      this = v58;
      LODWORD(logic) = v58->fields.logic;
      v24 = v59 + 1;
      if ( (__int64)(v59 + 1) >= (int)logic )
        return v18;
    }
LABEL_59:
    sub_1B9026C(this, mainAction);
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
  if ( (byte_4A7298B & 1) == 0 )
  {
    this = (BattleLogicFunction_o *)sub_1B90010(&UnityEngine_Object_TypeInfo, targetSvtData);
    byte_4A7298B = 1;
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
      sub_1B9026C(this, targetSvtData);
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
  __int64 v34; // x1
  BattleData_o *data; // x0
  int32_t v36; // w2
  int32_t v37; // w3
  BattleServantData_o **v38; // x23
  const MethodInfo *v39; // x6
  int32_t m_CancellationTokenSource; // w28
  int32_t AuraSum_k__BackingField; // w29
  BattleServantData_o *v42; // x24
  System_Func_object__object__o *v43; // x26
  System_Collections_Generic_IEnumerable_TSource__o *v44; // x0
  System_Collections_Generic_List_TSource__o *v45; // x0
  int32_t v46; // w2
  int32_t v47; // w3
  _BOOL8 v48; // x0
  __int64 v49; // x1
  Il2CppObject *current; // x25
  BattleData_o *v51; // x0
  _BOOL8 v52; // x0
  __int64 v53; // x1
  BattleLogicFunction___c_c *v54; // x0
  System_Func_object__bool__o *_9__70_1; // x25
  Il2CppObject *v56; // x26
  struct BattleLogicFunction___c_StaticFields *static_fields; // x0
  int32_t v58; // w2
  int32_t v59; // w3
  struct BattleData_o *v60; // x8
  BattleFieldEnvironmentData_o *FieldEnvData_k__BackingField; // x22
  BattleActionEffect_ChangeBgmBuff_o *v62; // x22
  int32_t MaxHp_k__BackingField; // w22
  BattleActionEffect_SubChangeMaxHpBuff_o *v64; // x21
  unsigned int uniqueId; // w22
  BattleData_o *v66; // x20
  BattleActionEffect_Base_o *v67; // x0
  System_Collections_Generic_List_Enumerator_object__o v68; // [xsp+8h] [xbp-98h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v69; // [xsp+20h] [xbp-80h] BYREF

  if ( (byte_4A72997 & 1) == 0 )
  {
    sub_1B90010(&Method_BasicHelper_Any_BattleBuffData_BuffData___, actionData);
    sub_1B90010(&BattleActionEffect_ChangeBgmBuff_TypeInfo, v18);
    sub_1B90010(&Method_System_Linq_Enumerable_Select_BattleBuffData_BuffData__BattleBuffData_BuffData___, v19);
    sub_1B90010(&Method_System_Linq_Enumerable_ToList_BattleBuffData_BuffData___, v20);
    sub_1B90010(&Method_System_Collections_Generic_List_Enumerator_BattleBuffData_BuffData__Dispose__, v21);
    sub_1B90010(&Method_System_Collections_Generic_List_Enumerator_BattleBuffData_BuffData__MoveNext__, v22);
    sub_1B90010(&Method_System_Collections_Generic_List_Enumerator_BattleBuffData_BuffData__get_Current__, v23);
    sub_1B90010(&System_Func_BattleBuffData_BuffData__BattleBuffData_BuffData__TypeInfo, v24);
    sub_1B90010(&System_Func_BattleBuffData_BuffData__bool__TypeInfo, v25);
    sub_1B90010(&Method_System_Collections_Generic_List_BattleBuffData_BuffData__GetEnumerator__, v26);
    sub_1B90010(&Method_System_Collections_Generic_List_BattleBuffData_BuffData__ToArray__, v27);
    sub_1B90010(&BattleActionEffect_SubChangeMaxHpBuff_TypeInfo, v28);
    sub_1B90010(&Method_BattleLogicFunction___c__ApplySubBuffChanges_b__70_1__, v29);
    sub_1B90010(&Method_BattleLogicFunction___c__DisplayClass70_0__ApplySubBuffChanges_b__0__, v30);
    sub_1B90010(&BattleLogicFunction___c__DisplayClass70_0_TypeInfo, v31);
    sub_1B90010(&BattleLogicFunction___c_TypeInfo, v32);
    byte_4A72997 = 1;
  }
  memset(&v69, 0, sizeof(v69));
  v33 = sub_1B9025C(BattleLogicFunction___c__DisplayClass70_0_TypeInfo);
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
        v38 = (BattleServantData_o **)(v33 + 16);
        sub_1B8FFB4((ServantStatusBattleListViewItem_o *)(v33 + 16), (int32_t)data, v36, v37);
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
                if ( *v38 )
                {
                  m_CancellationTokenSource = (int32_t)data->fields.m_CancellationTokenSource;
                  AuraSum_k__BackingField = svtSnapShotOnBuffUpdate->fields._AuraSum_k__BackingField;
                  data = (BattleData_o *)BattleLogicFunction__getFunctionObject(
                                           (BattleLogicFunction_o *)data,
                                           baseVals->fields.funcEnt,
                                           (*v38)->fields.uniqueId,
                                           index,
                                           isCommandSideEffect,
                                           0LL,
                                           v39);
                  if ( data )
                  {
                    BYTE4(data->fields.boostSkillInfo) = AuraSum_k__BackingField > m_CancellationTokenSource;
                    v42 = (BattleServantData_o *)data;
                    v43 = (System_Func_object__object__o *)sub_1B9025C(System_Func_BattleBuffData_BuffData__BattleBuffData_BuffData__TypeInfo);
                    System_Func_object__object____ctor(
                      v43,
                      (Il2CppObject *)v33,
                      Method_BattleLogicFunction___c__DisplayClass70_0__ApplySubBuffChanges_b__0__,
                      0LL);
                    v44 = (System_Collections_Generic_IEnumerable_TSource__o *)System_Linq_Enumerable__Select_object__object_(
                                                                                 (System_Collections_Generic_IEnumerable_TSource__o *)subBuffList,
                                                                                 (System_Func_TSource__TResult__o *)v43,
                                                                                 (const MethodInfo_2EBED8C *)Method_System_Linq_Enumerable_Select_BattleBuffData_BuffData__BattleBuffData_BuffData___);
                    v45 = System_Linq_Enumerable__ToList_object_(
                            v44,
                            (const MethodInfo_2ECA8AC *)Method_System_Linq_Enumerable_ToList_BattleBuffData_BuffData___);
                    *(_QWORD *)&v42->fields._iconLimitCount_k__BackingField.fields.fakeValue = v45;
                    sub_1B8FFB4(
                      (ServantStatusBattleListViewItem_o *)&v42->fields._iconLimitCount_k__BackingField.fields.fakeValue,
                      (int32_t)v45,
                      v46,
                      v47);
                    if ( actionData )
                    {
                      BattleActionData__setBuffData(actionData, (BattleActionData_BuffData_o *)v42, baseVals, 0LL);
                      if ( subBuffList )
                      {
                        System_Collections_Generic_List_object___GetEnumerator(
                          (System_Collections_Generic_List_Enumerator_T__o *)&v68,
                          (System_Collections_Generic_List_object__o *)subBuffList,
                          (const MethodInfo_35114B8 *)Method_System_Collections_Generic_List_BattleBuffData_BuffData__GetEnumerator__);
                        v69 = v68;
                        while ( 1 )
                        {
                          v48 = System_Collections_Generic_List_Enumerator_object___MoveNext(
                                  &v69,
                                  (const MethodInfo_328A150 *)Method_System_Collections_Generic_List_Enumerator_BattleBuffData_BuffData__MoveNext__);
                          if ( !v48 )
                            break;
                          current = v69.fields._current;
                          if ( !v69.fields._current )
                            sub_1B9026C(v48, v49);
                          v51 = this->fields.data;
                          if ( !v51 )
                            sub_1B9026C(0LL, v49);
                          BattleData__RemoveDoNotSelectCommandCardBuff(
                            v51,
                            (int32_t)v69.fields._current[1].klass,
                            *v38,
                            0LL);
                          v52 = BattleBuffData__CheckInvalidSacrificeIndiv((BattleBuffData_BuffData_o *)current, 0LL);
                          if ( v52 )
                          {
                            if ( !args )
                              sub_1B9026C(v52, v53);
                            args->fields.updateField = 1;
                          }
                        }
                        System_Collections_Generic_List_Enumerator_object___Dispose(
                          &v69,
                          (const MethodInfo_328A14C *)Method_System_Collections_Generic_List_Enumerator_BattleBuffData_BuffData__Dispose__);
                        v54 = BattleLogicFunction___c_TypeInfo;
                        if ( !BattleLogicFunction___c_TypeInfo->_2.cctor_finished )
                        {
                          j_il2cpp_runtime_class_init_0(BattleLogicFunction___c_TypeInfo);
                          v54 = BattleLogicFunction___c_TypeInfo;
                        }
                        _9__70_1 = (System_Func_object__bool__o *)v54->static_fields->__9__70_1;
                        if ( !_9__70_1 )
                        {
                          if ( !v54->_2.cctor_finished )
                          {
                            j_il2cpp_runtime_class_init_0(v54);
                            v54 = BattleLogicFunction___c_TypeInfo;
                          }
                          v56 = (Il2CppObject *)v54->static_fields->__9;
                          _9__70_1 = (System_Func_object__bool__o *)sub_1B9025C(System_Func_BattleBuffData_BuffData__bool__TypeInfo);
                          System_Func_object__bool____ctor(
                            _9__70_1,
                            v56,
                            Method_BattleLogicFunction___c__ApplySubBuffChanges_b__70_1__,
                            0LL);
                          static_fields = BattleLogicFunction___c_TypeInfo->static_fields;
                          static_fields->__9__70_1 = (struct System_Func_BattleBuffData_BuffData__bool__o *)_9__70_1;
                          sub_1B8FFB4(
                            (ServantStatusBattleListViewItem_o *)&static_fields->__9__70_1,
                            (int32_t)_9__70_1,
                            v58,
                            v59);
                        }
                        data = (BattleData_o *)BasicHelper__Any_object_(
                                                 (System_Collections_Generic_List_T__o *)subBuffList,
                                                 (System_Func_T__bool__o *)_9__70_1,
                                                 (const MethodInfo_2E795E4 *)Method_BasicHelper_Any_BattleBuffData_BuffData___);
                        if ( ((unsigned __int8)data & 1) != 0 )
                        {
                          v60 = this->fields.data;
                          if ( !v60 )
                            goto LABEL_41;
                          FieldEnvData_k__BackingField = v60->fields._FieldEnvData_k__BackingField;
                          data = (BattleData_o *)System_Collections_Generic_List_object___ToArray(
                                                   (System_Collections_Generic_List_object__o *)subBuffList,
                                                   (const MethodInfo_3512518 *)Method_System_Collections_Generic_List_BattleBuffData_BuffData__ToArray__);
                          if ( !FieldEnvData_k__BackingField )
                            goto LABEL_41;
                          BattleFieldEnvironmentData__RemoveBgmRelateBuff(
                            FieldEnvData_k__BackingField,
                            (BattleBuffData_BuffData_array *)data,
                            0LL);
                          v62 = (BattleActionEffect_ChangeBgmBuff_o *)sub_1B9025C(BattleActionEffect_ChangeBgmBuff_TypeInfo);
                          BattleActionEffect_ChangeBgmBuff___ctor(v62, 0LL);
                          BattleActionData_BuffData__SetActionEffectProc(
                            (BattleActionData_BuffData_o *)v42,
                            (BattleActionEffect_Base_o *)v62,
                            0LL);
                        }
                        data = (BattleData_o *)*v38;
                        if ( *v38 )
                        {
                          MaxHp_k__BackingField = svtSnapShotOnBuffUpdate->fields._MaxHp_k__BackingField;
                          data = (BattleData_o *)BattleServantData__getMaxHp((BattleServantData_o *)data, 0LL);
                          if ( MaxHp_k__BackingField == (_DWORD)data )
                            return;
                          if ( *v38 )
                          {
                            BattleActionData__addReflectLogicResultServantId(actionData, (*v38)->fields.uniqueId, 0LL);
                            v64 = (BattleActionEffect_SubChangeMaxHpBuff_o *)sub_1B9025C(BattleActionEffect_SubChangeMaxHpBuff_TypeInfo);
                            BattleActionEffect_SubChangeMaxHpBuff___ctor(v64, 0LL);
                            data = (BattleData_o *)System_Collections_Generic_List_object___ToArray(
                                                     (System_Collections_Generic_List_object__o *)subBuffList,
                                                     (const MethodInfo_3512518 *)Method_System_Collections_Generic_List_BattleBuffData_BuffData__ToArray__);
                            if ( *v38 )
                            {
                              uniqueId = (*v38)->fields.uniqueId;
                              v66 = data;
                              data = (BattleData_o *)BattleServantData__getNowHp(*v38, 0LL);
                              if ( v64 )
                              {
                                v67 = (BattleActionEffect_Base_o *)((__int64 (__fastcall *)(BattleActionEffect_SubChangeMaxHpBuff_o *, BattleData_o *, _QWORD, _QWORD, Il2CppMethodPointer))v64->klass->vtable._7_InitBuff.method)(
                                                                     v64,
                                                                     v66,
                                                                     uniqueId,
                                                                     (unsigned int)((_DWORD)data
                                                                                  - svtSnapShotOnBuffUpdate->fields._Hp_k__BackingField),
                                                                     v64->klass->vtable._8_PartialPreActionProc.methodPtr);
                                BattleActionData_BuffData__SetActionEffectProc(
                                  (BattleActionData_BuffData_o *)v42,
                                  v67,
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
    sub_1B9026C(data, v34);
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
  int32_t v15; // w3
  __int64 v16; // x8
  BattleServantData_o *ServantData; // x0
  int32_t v18; // w2
  int32_t v19; // w3
  System_Func_int__int__o *v20; // x20
  System_Collections_Generic_IEnumerable_TSource__o *v21; // x0
  struct System_Int32_array *v22; // x0
  int32_t v23; // w2
  int32_t v24; // w3
  System_Collections_Generic_IEnumerable_TSource__o *v25; // x0
  struct System_Int32_array *v26; // x0
  int32_t v27; // w2
  int32_t v28; // w3

  if ( (byte_4A72995 & 1) == 0 )
  {
    sub_1B90010(&Method_System_Linq_Enumerable_Select_int__int___, buffData);
    sub_1B90010(&Method_System_Linq_Enumerable_ToArray_int___, v7);
    sub_1B90010(&System_Func_int__int__TypeInfo, v8);
    sub_1B90010(&Method_BattleLogicFunction___c__DisplayClass68_0__BehaveLinkageBuffAsFamily_b__0__, v9);
    sub_1B90010(&BattleLogicFunction___c__DisplayClass68_0_TypeInfo, v10);
    byte_4A72995 = 1;
  }
  v11 = sub_1B9025C(BattleLogicFunction___c__DisplayClass68_0_TypeInfo);
  BattleLogicFunction___c__DisplayClass68_0___ctor((BattleLogicFunction___c__DisplayClass68_0_o *)v11, 0LL);
  if ( !v11 )
    goto LABEL_13;
  *(_QWORD *)(v11 + 16) = funcTarget;
  sub_1B8FFB4((ServantStatusBattleListViewItem_o *)(v11 + 16), (int32_t)funcTarget, v14, v15);
  v16 = *(_QWORD *)(v11 + 16);
  if ( !v16 )
    goto LABEL_13;
  data = this->fields.data;
  if ( !data )
    goto LABEL_13;
  ServantData = BattleData__getServantData(data, *(_DWORD *)(v16 + 32), 0LL);
  *(_QWORD *)(v11 + 24) = ServantData;
  sub_1B8FFB4((ServantStatusBattleListViewItem_o *)(v11 + 24), (int32_t)ServantData, v18, v19);
  if ( !*(_QWORD *)(v11 + 24) )
    return;
  v20 = (System_Func_int__int__o *)sub_1B9025C(System_Func_int__int__TypeInfo);
  System_Func_int__int____ctor(
    v20,
    (Il2CppObject *)v11,
    Method_BattleLogicFunction___c__DisplayClass68_0__BehaveLinkageBuffAsFamily_b__0__,
    0LL);
  if ( !buffData )
LABEL_13:
    sub_1B9026C(data, v13);
  if ( !BasicHelper__IsNullOrEmpty((System_Collections_ICollection_o *)buffData->fields.addIndividualty, 0LL) )
  {
    v21 = (System_Collections_Generic_IEnumerable_TSource__o *)System_Linq_Enumerable__Select_int__int_(
                                                                 (System_Collections_Generic_IEnumerable_TSource__o *)buffData->fields.addIndividualty,
                                                                 (System_Func_TSource__TResult__o *)v20,
                                                                 (const MethodInfo_2EBC060 *)Method_System_Linq_Enumerable_Select_int__int___);
    v22 = System_Linq_Enumerable__ToArray_int_(
            v21,
            (const MethodInfo_2EC6DFC *)Method_System_Linq_Enumerable_ToArray_int___);
    buffData->fields.familyLinkageIds = v22;
    sub_1B8FFB4((ServantStatusBattleListViewItem_o *)&buffData->fields.familyLinkageIds, (int32_t)v22, v23, v24);
    BattleBuffData_BuffData__onState(buffData, 0x400000, 0LL);
  }
  if ( !BasicHelper__IsNullOrEmpty((System_Collections_ICollection_o *)buffData->fields.linkageTargetIndividualty, 0LL) )
  {
    v25 = (System_Collections_Generic_IEnumerable_TSource__o *)System_Linq_Enumerable__Select_int__int_(
                                                                 (System_Collections_Generic_IEnumerable_TSource__o *)buffData->fields.linkageTargetIndividualty,
                                                                 (System_Func_TSource__TResult__o *)v20,
                                                                 (const MethodInfo_2EBC060 *)Method_System_Linq_Enumerable_Select_int__int___);
    v26 = System_Linq_Enumerable__ToArray_int_(
            v25,
            (const MethodInfo_2EC6DFC *)Method_System_Linq_Enumerable_ToArray_int___);
    buffData->fields.linkageTargetIndividualty = v26;
    sub_1B8FFB4(
      (ServantStatusBattleListViewItem_o *)&buffData->fields.linkageTargetIndividualty,
      (int32_t)v26,
      v27,
      v28);
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
    sub_1B9026C(this, funcEnt);
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
    sub_1B9026C(this, baseVals);
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
    sub_1B90274(this, baseVals);
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
  if ( (byte_4A729C1 & 1) == 0 )
  {
    sub_1B90010(&Generator_BGMFromChangeBGMFunc_TypeInfo, bgmEnt);
    this = (BattleLogicFunction_o *)sub_1B90010(&UnityEngine_Object_TypeInfo, v7);
    byte_4A729C1 = 1;
  }
  data = v6->fields.data;
  if ( !data )
    goto LABEL_16;
  FieldEnvData_k__BackingField = data->fields._FieldEnvData_k__BackingField;
  if ( bgmEnt )
  {
    id = bgmEnt->fields.id;
    v11 = (Generator_BGMFromChangeBGMFunc_o *)sub_1B9025C(Generator_BGMFromChangeBGMFunc_TypeInfo);
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
    sub_1B9026C(this, bgmEnt);
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
  DataMasterBase_TMaster__TEntity__PKType__o *v23; // x20
  BattleData_o *data; // x8
  System_Collections_Generic_List_object__o *v25; // x21
  System_Int32_array *v26; // x19
  int32_t v27; // w22
  int32_t v28; // w23
  int64_t m_CancellationTokenSource_low; // x24
  bool IsOpen; // w23
  __int64 v31; // x8
  Il2CppObject *entity; // [xsp+8h] [xbp-68h] BYREF

  if ( (byte_4A729C0 & 1) == 0 )
  {
    sub_1B90010(&Method_System_Array_IndexOf_int___, *(_QWORD *)&uniqueID);
    sub_1B90010(&CondType_TypeInfo, v7);
    sub_1B90010(&Method_DataManager_GetMasterData_BgmMaster___, v8);
    sub_1B90010(&Method_DataManager_GetMasterData_SkillLvMaster___, v9);
    sub_1B90010(&Method_DataMasterBase_BgmMaster__BgmEntity__int__TryGetEntity__, v10);
    sub_1B90010(&Method_System_Collections_Generic_List_SkillLvEntity_SvtChangeBgm__get_Count__, v11);
    sub_1B90010(&Method_System_Collections_Generic_List_SkillLvEntity_SvtChangeBgm__get_Item__, v12);
    sub_1B90010(&Method_SingletonMonoBehaviour_DataManager__getInstance__, v13);
    sub_1B90010(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v14);
    byte_4A729C0 = 1;
  }
  result = 0LL;
  entity = 0LL;
  if ( uniqueID != -1 && actionData )
  {
    v16 = *((_QWORD *)Method_SingletonMonoBehaviour_DataManager__getInstance__ + 4);
    if ( (*(_BYTE *)(v16 + 309) & 1) == 0 )
      v16 = sub_1BE1EEC(v16);
    v17 = *(_QWORD *)(*(_QWORD *)(v16 + 192) + 16LL);
    if ( (*(_BYTE *)(v17 + 309) & 1) == 0 )
      v17 = sub_1BE1EEC(v17);
    MasterData_object = **(DataManager_o ***)(v17 + 184);
    if ( !MasterData_object )
      goto LABEL_35;
    MasterData_object = (DataManager_o *)DataManager__GetMasterData_object_(
                                           MasterData_object,
                                           (const MethodInfo_2E8E21C *)Method_DataManager_GetMasterData_SkillLvMaster___);
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
    MasterData_object = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_374C890 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !MasterData_object )
      goto LABEL_35;
    MasterData_object = (DataManager_o *)DataManager__GetMasterData_object_(
                                           MasterData_object,
                                           (const MethodInfo_2E8E21C *)Method_DataManager_GetMasterData_BgmMaster___);
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
                                           1,
                                           0,
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
                                               (const MethodInfo_35106F0 *)Method_System_Collections_Generic_List_SkillLvEntity_SvtChangeBgm__get_Item__);
        if ( !MasterData_object )
          break;
        if ( System_Array__IndexOf_int_(
               v26,
               MasterData_object->fields.m_CachedPtr,
               (const MethodInfo_2F88D58 *)Method_System_Array_IndexOf_int___) != -1 )
        {
          MasterData_object = (DataManager_o *)System_Collections_Generic_List_object___get_Item(
                                                 v25,
                                                 v27,
                                                 (const MethodInfo_35106F0 *)Method_System_Collections_Generic_List_SkillLvEntity_SvtChangeBgm__get_Item__);
          if ( !MasterData_object )
            break;
          v28 = *((_DWORD *)&MasterData_object->fields.UnityEngine_Behaviour_Fields + 1);
          MasterData_object = (DataManager_o *)System_Collections_Generic_List_object___get_Item(
                                                 v25,
                                                 v27,
                                                 (const MethodInfo_35106F0 *)Method_System_Collections_Generic_List_SkillLvEntity_SvtChangeBgm__get_Item__);
          if ( !MasterData_object )
            break;
          m_CancellationTokenSource_low = SLODWORD(MasterData_object->fields.m_CancellationTokenSource);
          if ( !CondType_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(CondType_TypeInfo);
          IsOpen = CondType__IsOpen(46, v28, m_CancellationTokenSource_low, 0, 0LL, 0LL);
          MasterData_object = (DataManager_o *)System_Collections_Generic_List_object___get_Item(
                                                 v25,
                                                 v27,
                                                 (const MethodInfo_35106F0 *)Method_System_Collections_Generic_List_SkillLvEntity_SvtChangeBgm__get_Item__);
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
                 (const MethodInfo_312C5FC *)Method_DataMasterBase_BgmMaster__BgmEntity__int__TryGetEntity__) )
          {
            return (BgmEntity_o *)entity;
          }
        }
        if ( ++v27 >= v25->fields._size )
          return (BgmEntity_o *)entity;
      }
LABEL_35:
      sub_1B9026C(MasterData_object, *(_QWORD *)&uniqueID);
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

  if ( (byte_4A729C8 & 1) == 0 )
  {
    sub_1B90010(&BattleActionData_MasterBuffData_TypeInfo, action);
    byte_4A729C8 = 1;
  }
  v12 = (BattleActionData_MasterBuffData_o *)sub_1B9025C(BattleActionData_MasterBuffData_TypeInfo);
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
    sub_1B9026C(FunctionObject, v16);
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

  if ( (byte_4A729CB & 1) == 0 )
  {
    sub_1B90010(&BattleActionData_TypeInfo, procArg);
    byte_4A729CB = 1;
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
          v11 = (BattleActionData_o *)sub_1B9025C(BattleActionData_TypeInfo);
          BattleActionData___ctor(v11, 0LL);
          if ( v11 )
          {
            BattleActionData__setBuffData(v11, v24, baseVals, 0LL);
            return v11;
          }
        }
      }
LABEL_22:
      sub_1B9026C(data, procArg);
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
  if ( (byte_4A729CA & 1) == 0 )
  {
    sub_1B90010(&Method_System_Collections_Generic_Dictionary_int__int__Add__, funcEnt);
    sub_1B90010(&Method_System_Collections_Generic_Dictionary_int__int__ContainsKey__, v5);
    sub_1B90010(&Method_System_Collections_Generic_Dictionary_int__int__get_Item__, v6);
    this = (BattleLogicFunction_o *)sub_1B90010(&Method_System_Collections_Generic_Dictionary_int__int__set_Item__, v7);
    byte_4A729CA = 1;
  }
  if ( BattleLogicFunction__CanCheckFuncBattleValue(this, funcEnt, method) )
  {
    data = v4->fields.data;
    if ( !data
      || (data = (BattleData_o *)BattleData__GetBattleValueDict(data, 0LL), !funcEnt)
      || (vals = funcEnt->fields.vals) == 0LL )
    {
LABEL_16:
      sub_1B9026C(data, v8);
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
        sub_1B90274(data, v8);
      if ( v11 )
      {
        v15 = vals->m_Items[v14 + 1];
        v16 = vals->m_Items[v12 + 1];
        if ( System_Collections_Generic_Dictionary_int__int___ContainsKey(
               v11,
               v15,
               (const MethodInfo_3173CE8 *)Method_System_Collections_Generic_Dictionary_int__int__ContainsKey__) )
        {
          Item = System_Collections_Generic_Dictionary_int__int___get_Item(
                   v11,
                   v15,
                   (const MethodInfo_3173A60 *)Method_System_Collections_Generic_Dictionary_int__int__get_Item__);
          System_Collections_Generic_Dictionary_int__int___set_Item(
            v11,
            v15,
            Item + v16,
            (const MethodInfo_3173AE8 *)Method_System_Collections_Generic_Dictionary_int__int__set_Item__);
        }
        else
        {
          System_Collections_Generic_Dictionary_int__int___Add(
            v11,
            v15,
            v16,
            (const MethodInfo_3173AFC *)Method_System_Collections_Generic_Dictionary_int__int__Add__);
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
  if ( (byte_4A729C3 & 1) == 0 )
  {
    this = (BattleLogicFunction_o *)sub_1B90010(&UnityEngine_Object_TypeInfo, args);
    byte_4A729C3 = 1;
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
    sub_1B9026C(this, args);
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
    sub_1B9026C(this, *(_QWORD *)&faceId);
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
  int32_t v22; // w3
  int v23; // w8
  BattleLogicFunction_o *v24; // x24
  unsigned int v25; // w27
  __int64 v26; // x25
  struct BattleLogic_o *v27; // x8
  BattleActionData_o *v28; // x25
  BattleLogicFunction_FuncSideEffectFunctionArgument_o *FuncSideEffectArg; // x0
  BattleActionData_o *baseActionData; // [xsp+18h] [xbp-58h] BYREF

  v8 = this;
  if ( (byte_4A729C7 & 1) == 0 )
  {
    sub_1B90010(&BattleSkillInfoData_TypeInfo, actionData);
    sub_1B90010(&int___TypeInfo, v9);
    this = (BattleLogicFunction_o *)sub_1B90010(
                                      &BattleLogicFunction_OnlyCheckFuncSideEffectFunctionArgument_TypeInfo,
                                      v10);
    byte_4A729C7 = 1;
  }
  baseActionData = 0LL;
  data = v8->fields.data;
  if ( !data )
    goto LABEL_32;
  if ( !data->fields._lastUsedPlayerSkillInfo_k__BackingField )
    return;
  v12 = (BattleSkillInfoData_o *)sub_1B9025C(BattleSkillInfoData_TypeInfo);
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
    v18 = (BattleLogicFunction_OnlyCheckFuncSideEffectFunctionArgument_o *)sub_1B9025C(BattleLogicFunction_OnlyCheckFuncSideEffectFunctionArgument_TypeInfo);
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
  this = (BattleLogicFunction_o *)sub_1B900B8(int___TypeInfo, 1LL);
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
    sub_1B9026C(this, actionData);
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
      *(_QWORD *)(v26 + 176) = v18;
      *(_BYTE *)(v26 + 169) = v17;
      sub_1B8FFB4((ServantStatusBattleListViewItem_o *)(v26 + 176), (int32_t)v18, v21, v22);
      v27 = v8->fields.logic;
      if ( !v27 )
        goto LABEL_32;
      this = (BattleLogicFunction_o *)v27->fields.logicSkill;
      if ( !this )
        goto LABEL_32;
      v28 = BattleLogicSkill__createSkillData_43648332(
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
    sub_1B90274(this, actionData);
  }
LABEL_29:
  FuncSideEffectArg = BattleLogicFunction_ProcListInArgs__get_FuncSideEffectArg(args, 0LL);
  if ( FuncSideEffectArg )
    BattleLogicFunction_FuncSideEffectFunctionArgument__AddTarget_43547776(
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
  if ( (byte_4A729A5 & 1) == 0 )
  {
    sub_1B90010(&Method_BasicHelper_IndexValue_int____76174832, targetServantData);
    sub_1B90010(&BattleActionData_TypeInfo, v10);
    sub_1B90010(&MoveToSubMemberWaveTurnEvent_TypeInfo, v11);
    this = (BattleLogicFunction_o *)sub_1B90010(&RestockServantLogicByMoveToSubMember_TypeInfo, v12);
    byte_4A729A5 = 1;
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
  BattleData__SubBuffFromPT_42586908((BattleData_o *)this, targetServantData, 0LL);
  this = (BattleLogicFunction_o *)v9->fields.data;
  if ( !this )
    goto LABEL_13;
  BattleData__SubBuffExitSvt((BattleData_o *)this, targetServantData, 0LL);
  this = (BattleLogicFunction_o *)v9->fields.data;
  if ( !this )
    goto LABEL_13;
  targetServantData->fields.deckIndex = BattleData__GetSubServantUsableDeckIndex((BattleData_o *)this, isEnemy, 0LL);
  data = v9->fields.data;
  v16 = (MoveToSubMemberWaveTurnEvent_o *)sub_1B9025C(MoveToSubMemberWaveTurnEvent_TypeInfo);
  MoveToSubMemberWaveTurnEvent___ctor(v16, data, 0LL);
  BattleServantData__RegisterWaveTurnEvent(targetServantData, (ServantWaveTurnEvent_o *)v16, 0LL);
  if ( !funcEnt )
    goto LABEL_13;
  v17 = isEnemy;
  v18 = BasicHelper__IndexValue_int_(
          funcEnt->fields.vals,
          0,
          0,
          (const MethodInfo_2E7CF84 *)Method_BasicHelper_IndexValue_int____76174832);
  uniqueId = targetServantData->fields.uniqueId;
  v20 = v18;
  v21 = (RestockServantLogicByMoveToSubMember_o *)sub_1B9025C(RestockServantLogicByMoveToSubMember_TypeInfo);
  RestockServantLogicByMoveToSubMember___ctor(v21, ServantIndex, v17, v20, uniqueId, 0LL);
  this = (BattleLogicFunction_o *)v9->fields.data;
  if ( !this
    || (BattleData__AppendRestockServantLogic((BattleData_o *)this, (RestockServantLogic_o *)v21, 0LL),
        v22 = (BattleActionData_o *)sub_1B9025C(BattleActionData_TypeInfo),
        BattleActionData___ctor(v22, 0LL),
        !v22) )
  {
LABEL_13:
    sub_1B9026C(this, targetServantData);
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
  if ( (byte_4A729C4 & 1) == 0 )
  {
    this = (BattleLogicFunction_o *)sub_1B90010(&UnityEngine_Object_TypeInfo, args);
    byte_4A729C4 = 1;
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
      if ( !byte_4A6A9C1 )
      {
        sub_1B90010(&UnityEngine_Vector3_TypeInfo, v8);
        byte_4A6A9C1 = 1;
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
    sub_1B9026C(this, args);
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
  if ( (byte_4A729C9 & 1) == 0 )
  {
    this = (BattleLogicFunction_o *)sub_1B90010(
                                      &Method_System_Collections_Generic_Dictionary_int__int__set_Item__,
                                      funcEnt);
    byte_4A729C9 = 1;
  }
  if ( BattleLogicFunction__CanCheckFuncBattleValue(this, funcEnt, method) )
  {
    data = v4->fields.data;
    if ( !data
      || (data = (BattleData_o *)BattleData__GetBattleValueDict(data, 0LL), !funcEnt)
      || (vals = funcEnt->fields.vals) == 0LL )
    {
LABEL_13:
      sub_1B9026C(data, v5);
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
        sub_1B90274(data, v5);
      if ( v8 )
      {
        System_Collections_Generic_Dictionary_int__int___set_Item(
          v8,
          vals->m_Items[v11 + 1],
          vals->m_Items[v9 + 1],
          (const MethodInfo_3173AE8 *)Method_System_Collections_Generic_Dictionary_int__int__set_Item__);
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

  if ( (byte_4A729CC & 1) == 0 )
  {
    sub_1B90010(&BattleActionData_TypeInfo, procArg);
    byte_4A729CC = 1;
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
          v11 = (BattleActionData_o *)sub_1B9025C(BattleActionData_TypeInfo);
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
    sub_1B9026C(data, procArg);
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
  int32_t v34; // w3
  BattleLogicFunction___c_c *v35; // x0
  System_Func_object__bool__o *_9__121_1; // x21
  Il2CppObject *v37; // x24
  struct BattleLogicFunction___c_StaticFields *static_fields; // x0
  int32_t v39; // w2
  int32_t v40; // w3
  BattleActionEffect_UpdateAllInfo_o *v41; // x21

  v8 = (Il2CppObject *)this;
  if ( (byte_4A729C6 & 1) == 0 )
  {
    sub_1B90010(&Method_BasicHelper_Any_BattleBuffData_BuffData___, args);
    sub_1B90010(&Method_BattleLogicFunction__FunctionSubFieldBuff_b__121_0__, v9);
    sub_1B90010(&Method_System_Linq_Enumerable_Select_BattleBuffData_BuffData__BattleBuffData_BuffData___, v10);
    sub_1B90010(&Method_System_Linq_Enumerable_ToList_BattleBuffData_BuffData___, v11);
    sub_1B90010(&System_Func_BattleBuffData_BuffData__BattleBuffData_BuffData__TypeInfo, v12);
    sub_1B90010(&System_Func_BattleBuffData_BuffData__bool__TypeInfo, v13);
    sub_1B90010(&Method_System_Collections_Generic_List_BattleBuffData_BuffData__get_Count__, v14);
    sub_1B90010(&Method_BattleLogicFunction___c__FunctionSubFieldBuff_b__121_1__, v15);
    sub_1B90010(&BattleLogicFunction___c_TypeInfo, v16);
    this = (BattleLogicFunction_o *)sub_1B90010(&BattleActionEffect_UpdateAllInfo_TypeInfo, v17);
    byte_4A729C6 = 1;
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
    v31 = (System_Func_object__object__o *)sub_1B9025C(System_Func_BattleBuffData_BuffData__BattleBuffData_BuffData__TypeInfo);
    System_Func_object__object____ctor(v31, v8, Method_BattleLogicFunction__FunctionSubFieldBuff_b__121_0__, 0LL);
    v32 = (System_Collections_Generic_IEnumerable_TSource__o *)System_Linq_Enumerable__Select_object__object_(
                                                                 (System_Collections_Generic_IEnumerable_TSource__o *)data,
                                                                 (System_Func_TSource__TResult__o *)v31,
                                                                 (const MethodInfo_2EBED8C *)Method_System_Linq_Enumerable_Select_BattleBuffData_BuffData__BattleBuffData_BuffData___);
    this = (BattleLogicFunction_o *)System_Linq_Enumerable__ToList_object_(
                                      v32,
                                      (const MethodInfo_2ECA8AC *)Method_System_Linq_Enumerable_ToList_BattleBuffData_BuffData___);
    if ( FunctionObject )
    {
      FunctionObject->fields.removeBuffList = (struct System_Collections_Generic_List_BattleBuffData_BuffData__o *)this;
      sub_1B8FFB4((ServantStatusBattleListViewItem_o *)&FunctionObject->fields.removeBuffList, (int32_t)this, v33, v34);
      v35 = BattleLogicFunction___c_TypeInfo;
      if ( !BattleLogicFunction___c_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(BattleLogicFunction___c_TypeInfo);
        v35 = BattleLogicFunction___c_TypeInfo;
      }
      _9__121_1 = (System_Func_object__bool__o *)v35->static_fields->__9__121_1;
      if ( !_9__121_1 )
      {
        if ( !v35->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(v35);
          v35 = BattleLogicFunction___c_TypeInfo;
        }
        v37 = (Il2CppObject *)v35->static_fields->__9;
        _9__121_1 = (System_Func_object__bool__o *)sub_1B9025C(System_Func_BattleBuffData_BuffData__bool__TypeInfo);
        System_Func_object__bool____ctor(
          _9__121_1,
          v37,
          Method_BattleLogicFunction___c__FunctionSubFieldBuff_b__121_1__,
          0LL);
        static_fields = BattleLogicFunction___c_TypeInfo->static_fields;
        static_fields->__9__121_1 = (struct System_Func_BattleBuffData_BuffData__bool__o *)_9__121_1;
        sub_1B8FFB4((ServantStatusBattleListViewItem_o *)&static_fields->__9__121_1, (int32_t)_9__121_1, v39, v40);
      }
      this = (BattleLogicFunction_o *)BasicHelper__Any_object_(
                                        (System_Collections_Generic_List_T__o *)data,
                                        (System_Func_T__bool__o *)_9__121_1,
                                        (const MethodInfo_2E795E4 *)Method_BasicHelper_Any_BattleBuffData_BuffData___);
      if ( ((unsigned __int8)this & 1) != 0 )
      {
        v41 = (BattleActionEffect_UpdateAllInfo_o *)sub_1B9025C(BattleActionEffect_UpdateAllInfo_TypeInfo);
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
    sub_1B9026C(this, args);
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
  if ( (byte_4A729C5 & 1) == 0 )
  {
    sub_1B90010(&Generator_BGFromFieldChangeBGBuff_TypeInfo, args);
    this = (BattleLogicFunction_o *)sub_1B90010(&Generator_BGMFromFieldChangeBGBuff_TypeInfo, v11);
    byte_4A729C5 = 1;
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
    sub_1B9026C(this, args);
  }
  if ( !tamamocatTreasureDeviceIds )
    goto LABEL_17;
  if ( tamamocatTreasureDeviceIds->fields.bgId >= 1 )
  {
    v18 = (Generator_BGFromFieldChangeBGBuff_o *)sub_1B9025C(Generator_BGFromFieldChangeBGBuff_TypeInfo);
    Generator_BGFromFieldChangeBGBuff___ctor(v18, tamamocatTreasureDeviceIds, 0LL);
    BattleLogicFunction__FunctionQuickChangeBG(v10, args, (Generator_Background_o *)v18, v19);
  }
  if ( tamamocatTreasureDeviceIds->fields.bgmId >= 1 )
  {
    v20 = v10->fields.data;
    v21 = (Generator_BGMFromFieldChangeBGBuff_o *)sub_1B9025C(Generator_BGMFromFieldChangeBGBuff_TypeInfo);
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
    sub_1B9026C(this, baseVals);
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
    sub_1B9026C(this, baseVals);
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

  if ( (byte_4A7299A & 1) == 0 )
  {
    this = (BattleLogicFunction_o *)sub_1B90010(&System_Math_TypeInfo, dataVals);
    byte_4A7299A = 1;
  }
  if ( !dataVals )
    goto LABEL_10;
  this = (BattleLogicFunction_o *)DataVals__isParam(dataVals, 115, 0LL);
  if ( ((unsigned __int8)this & 1) == 0 )
    return healPoint;
  if ( !targetSvtData )
LABEL_10:
    sub_1B9026C(this, dataVals);
  MaxHp = BattleServantData__getMaxHp(targetSvtData, 0LL);
  v9 = ((__int64 (__fastcall *)(BattleServantData_o *, Il2CppMethodPointer))targetSvtData->klass->vtable._13_get_resultHp.method)(
         targetSvtData,
         targetSvtData->klass->vtable._14_set_resultHp.methodPtr);
  if ( !System_Math_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(System_Math_TypeInfo);
  return System_Math__Min_62606068(healPoint, MaxHp - v9, 0LL);
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
    sub_1B9026C(this, dataVals);
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

  if ( (byte_4A72980 & 1) == 0 )
  {
    sub_1B90010(&Method_DataManager_GetMaster_BuffMaster___, funcEnt);
    sub_1B90010(&DataManager_TypeInfo, v4);
    sub_1B90010(&Method_DataMasterBase_BuffMaster__BuffEntity__int__GetEntity__, v5);
    byte_4A72980 = 1;
  }
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_object = DataManager__GetMaster_object_((const MethodInfo_2E8E1C8 *)Method_DataManager_GetMaster_BuffMaster___);
  if ( !funcEnt )
    goto LABEL_10;
  vals = funcEnt->fields.vals;
  if ( !vals )
    goto LABEL_10;
  if ( !vals->max_length )
    sub_1B90274(Master_object, v7);
  if ( !Master_object )
LABEL_10:
    sub_1B9026C(Master_object, v7);
  return (BuffEntity_o *)DataMasterBase_object__object__int___GetEntity(
                           (DataMasterBase_TMaster__TEntity__PKType__o *)Master_object,
                           vals->m_Items[1],
                           (const MethodInfo_312C5A8 *)Method_DataMasterBase_BuffMaster__BuffEntity__int__GetEntity__);
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

  if ( (byte_4A729BC & 1) == 0 )
  {
    sub_1B90010(&Method_DataManager_GetMasterData_ServantMaster___, baseVals);
    sub_1B90010(&Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__, v6);
    sub_1B90010(&Method_System_Linq_Enumerable_Repeat_int___, v7);
    sub_1B90010(&Method_System_Linq_Enumerable_ToArray_int___, v8);
    sub_1B90010(&Method_System_Collections_Generic_List_int__AddRange__, v9);
    sub_1B90010(&Method_System_Collections_Generic_List_int__Add__, v10);
    sub_1B90010(&Method_System_Collections_Generic_List_int__Contains__, v11);
    sub_1B90010(&Method_System_Collections_Generic_List_int__ToArray__, v12);
    sub_1B90010(&Method_System_Collections_Generic_List_int___ctor__, v13);
    sub_1B90010(&Method_System_Collections_Generic_List_int__get_Count__, v14);
    sub_1B90010(&Method_System_Collections_Generic_List_int__get_Item__, v15);
    sub_1B90010(&System_Collections_Generic_List_int__TypeInfo, v16);
    sub_1B90010(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v17);
    sub_1B90010(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v18);
    byte_4A729BC = 1;
  }
  v19 = (System_Collections_Generic_List_int__o *)sub_1B9025C(System_Collections_Generic_List_int__TypeInfo);
  System_Collections_Generic_List_int____ctor(
    v19,
    (const MethodInfo_34F3148 *)Method_System_Collections_Generic_List_int___ctor__);
  if ( !baseVals )
    goto LABEL_55;
  CardIndex = DataVals__GetCardIndex(baseVals, 0LL);
  CardIndividuality = DataVals__GetCardIndividuality(baseVals, 0LL);
  if ( (CardIndividuality & 0x80000000) == 0 )
  {
    IdArrayFromIndividuality = CardMaster__getIdArrayFromIndividuality(CardIndividuality, 0LL);
    CardIndividuality = (unsigned __int64)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_374C890 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !CardIndividuality )
      goto LABEL_55;
    CardIndividuality = (unsigned __int64)DataManager__GetMasterData_object_(
                                            (DataManager_o *)CardIndividuality,
                                            (const MethodInfo_2E8E21C *)Method_DataManager_GetMasterData_ServantMaster___);
    if ( !targetServant )
      goto LABEL_55;
    v24 = (DataMasterBase_TMaster__TEntity__PKType__o *)CardIndividuality;
    v26 = *(_QWORD *)&targetServant->fields.svtId.fields.currentCryptoKey;
    v25 = *(_QWORD *)&targetServant->fields.svtId.fields.fakeValue;
    if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    *(_QWORD *)&v45.fields.currentCryptoKey = v26;
    *(_QWORD *)&v45.fields.fakeValue = v25;
    CardIndividuality = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_46506376(v45, 0LL);
    if ( !v24 )
      goto LABEL_55;
    CardIndividuality = (unsigned __int64)DataMasterBase_object__object__int___GetEntity(
                                            v24,
                                            CardIndividuality,
                                            (const MethodInfo_312C5A8 *)Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
    if ( !CardIndividuality )
      goto LABEL_55;
    v27 = *(_QWORD *)(CardIndividuality + 144);
    v28 = (System_Collections_Generic_List_int__o *)sub_1B9025C(System_Collections_Generic_List_int__TypeInfo);
    System_Collections_Generic_List_int____ctor(
      v28,
      (const MethodInfo_34F3148 *)Method_System_Collections_Generic_List_int___ctor__);
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
                                                                   (const MethodInfo_2EB9268 *)Method_System_Linq_Enumerable_Repeat_int___);
      CardIndividuality = (unsigned __int64)System_Linq_Enumerable__ToArray_int_(
                                              v29,
                                              (const MethodInfo_2EC6DFC *)Method_System_Linq_Enumerable_ToArray_int___);
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
                                (const MethodInfo_34F3D14 *)Method_System_Collections_Generic_List_int__Contains__);
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
                *(const MethodInfo_34F399C **)(*(_QWORD *)(v36[4] + 192LL) + 112LL));
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
      sub_1B90274(CardIndividuality, v21);
    }
LABEL_32:
    if ( !v28 )
LABEL_55:
      sub_1B9026C(CardIndividuality, v21);
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
            (const MethodInfo_34F3BA8 *)Method_System_Collections_Generic_List_int__AddRange__);
          return System_Collections_Generic_List_int___ToArray(
                   v19,
                   (const MethodInfo_34F5454 *)Method_System_Collections_Generic_List_int__ToArray__);
        }
        goto LABEL_55;
      }
      Next = BattleRandom__getNext(CardIndividuality, 0LL);
      CardIndividuality = System_Collections_Generic_List_int___get_Item(
                            v28,
                            Next,
                            (const MethodInfo_34F36AC *)Method_System_Collections_Generic_List_int__get_Item__);
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
               (const MethodInfo_34F5454 *)Method_System_Collections_Generic_List_int__ToArray__);
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
      *(const MethodInfo_34F399C **)(*(_QWORD *)(v40[4] + 192LL) + 112LL));
  }
  else
  {
    v19->fields._size = v41 + 1;
    v39->m_Items[v41 + 1] = v43;
  }
  return System_Collections_Generic_List_int___ToArray(
           v19,
           (const MethodInfo_34F5454 *)Method_System_Collections_Generic_List_int__ToArray__);
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
  System_Collections_Generic_IEnumerable_BattleLogicFunctionProcess_FunctionTargetCheck__o **p_funcTargetArray_k__BackingField; // x8
  _QWORD *v14; // x19
  __int64 v15; // x8
  __int64 v16; // x0
  __int64 v17; // x0

  if ( (byte_4A7298D & 1) == 0 )
  {
    sub_1B90010(&Method_System_Array_Empty_BattleLogicFunctionProcess_FunctionTargetCheck___, args);
    sub_1B90010(&BattleLogicFunctionProcess_DependFunctionUnitCheck_TypeInfo, v9);
    byte_4A7298D = 1;
  }
  v10 = (BattleLogicFunctionProcess_DependFunctionUnitCheck_o *)sub_1B9025C(BattleLogicFunctionProcess_DependFunctionUnitCheck_TypeInfo);
  BattleLogicFunctionProcess_DependFunctionUnitCheck___ctor(v10, this, args, dataVal, 0LL);
  if ( !v10 )
    sub_1B9026C(v11, v12);
  if ( BattleLogicFunctionProcess_FunctionUnitCheck__checkCondtion(
         (BattleLogicFunctionProcess_FunctionUnitCheck_o *)v10,
         mainAction,
         0LL) )
  {
    p_funcTargetArray_k__BackingField = (System_Collections_Generic_IEnumerable_BattleLogicFunctionProcess_FunctionTargetCheck__o **)&v10->fields._funcTargetArray_k__BackingField;
  }
  else
  {
    v14 = Method_System_Array_Empty_BattleLogicFunctionProcess_FunctionTargetCheck___;
    v15 = *((_QWORD *)Method_System_Array_Empty_BattleLogicFunctionProcess_FunctionTargetCheck___ + 7);
    if ( !v15 )
    {
      sub_1BE1F48(Method_System_Array_Empty_BattleLogicFunctionProcess_FunctionTargetCheck___);
      v15 = v14[7];
    }
    v16 = *(_QWORD *)(v15 + 16);
    if ( (*(_BYTE *)(v16 + 309) & 1) == 0 )
      v16 = sub_1BE1EEC(v16);
    if ( !*(_DWORD *)(v16 + 224) )
      j_il2cpp_runtime_class_init_0(v16);
    v17 = *(_QWORD *)(v14[7] + 16LL);
    if ( (*(_BYTE *)(v17 + 309) & 1) == 0 )
      v17 = sub_1BE1EEC(v17);
    p_funcTargetArray_k__BackingField = *(System_Collections_Generic_IEnumerable_BattleLogicFunctionProcess_FunctionTargetCheck__o ***)(v17 + 184);
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
    sub_1B9026C(this, 0LL);
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

  if ( (byte_4A729BE & 1) == 0 )
  {
    sub_1B90010(&System_IDisposable_TypeInfo, procArg);
    sub_1B90010(&System_Collections_Generic_IEnumerable_BattleLogicFunctionProcess_FunctionTargetCheck__TypeInfo, v9);
    sub_1B90010(&System_Collections_Generic_IEnumerator_BattleLogicFunctionProcess_FunctionTargetCheck__TypeInfo, v10);
    sub_1B90010(&System_Collections_IEnumerator_TypeInfo, v11);
    sub_1B90010(&Method_System_Collections_Generic_List_FuncList_TYPE__Add__, v12);
    sub_1B90010(&Method_System_Collections_Generic_List_FuncList_TYPE___ctor__, v13);
    sub_1B90010(&System_Collections_Generic_List_FuncList_TYPE__TypeInfo, v14);
    sub_1B90010(&RemovedBuffInfoGroup_TypeInfo, v15);
    byte_4A729BE = 1;
  }
  subBuffInfo = 0LL;
  v16 = (System_Collections_Generic_List_T__o *)sub_1B9025C(System_Collections_Generic_List_FuncList_TYPE__TypeInfo);
  System_Collections_Generic_List_Int32Enum____ctor(
    v16,
    (const MethodInfo_34F5974 *)Method_System_Collections_Generic_List_FuncList_TYPE___ctor__);
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
      *(const MethodInfo_34F61C8 **)(*(_QWORD *)(v20[4] + 192LL) + 112LL));
  }
  else
  {
    v16->fields._size = size + 1;
    *((_DWORD *)items->m_Items + size) = 2;
  }
  v22 = (RemovedBuffInfoGroup_o *)sub_1B9025C(RemovedBuffInfoGroup_TypeInfo);
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
        sub_1B90274(DependDataValsArray, v18);
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
        v31 = sub_1BE1FF0(
                DependDataValsArray,
                System_Collections_Generic_IEnumerable_BattleLogicFunctionProcess_FunctionTargetCheck__TypeInfo,
                0LL);
      }
      v33 = (*(__int64 (__fastcall **)(_QWORD *, _QWORD))v31)(v28, *(_QWORD *)(v31 + 8));
      if ( !v33 )
        sub_1B9026C(0LL, v32);
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
          v37 = sub_1BE1FF0(v33, System_Collections_IEnumerator_TypeInfo, 0LL);
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
          v41 = sub_1BE1FF0(
                  v33,
                  System_Collections_Generic_IEnumerator_BattleLogicFunctionProcess_FunctionTargetCheck__TypeInfo,
                  0LL);
        }
        v42 = (*(__int64 (__fastcall **)(__int64, _QWORD))v41)(v33, *(_QWORD *)(v41 + 8));
        v44 = v42;
        if ( !v42 )
          sub_1B9026C(0LL, v43);
        v45 = (*(__int64 (__fastcall **)(__int64, BattleActionData_o *, _QWORD))(*(_QWORD *)v42 + 392LL))(
                v42,
                mainAction,
                *(_QWORD *)(*(_QWORD *)v42 + 400LL));
        if ( (v45 & 1) != 0 )
        {
          if ( !v26 )
            sub_1B9026C(v45, v46);
          if ( !procArg )
            sub_1B9026C(v45, v46);
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
            sub_1B9026C(v51, v51);
          BattleActionData__addAction(mainAction, v51, 0LL);
          if ( !v22 )
            sub_1B9026C(v52, v53);
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
        v57 = sub_1BE1FF0(v33, System_IDisposable_TypeInfo, 0LL);
      }
      (*(void (__fastcall **)(__int64, _QWORD))v57)(v33, *(_QWORD *)(v57 + 8));
      DependDataValsArray = v60;
      LODWORD(v24) = *((_DWORD *)v60 + 6);
      v25 = v61 + 1;
      if ( (__int64)(v61 + 1) >= (int)v24 )
        return v22;
    }
LABEL_56:
    sub_1B9026C(DependDataValsArray, v18);
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
  if ( (byte_4A7298C & 1) == 0 )
  {
    this = (BattleLogicFunction_o *)sub_1B90010(&UnityEngine_Object_TypeInfo, buffData);
    byte_4A7298C = 1;
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
      sub_1B9026C(this, buffData);
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
    sub_1B9026C(this, funcType);
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
    sub_1B9026C(data, *(_QWORD *)&targetId);
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

  if ( (byte_4A7298F & 1) == 0 )
  {
    sub_1B90010(&Method_DataManager_GetMaster_ConstantStrMaster___, *(_QWORD *)&targetId);
    sub_1B90010(&DataManager_TypeInfo, v9);
    sub_1B90010(&StringLiteral_5788/*"EXTEND_TURN_BUFF_TYPE"*/, v10);
    byte_4A7298F = 1;
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
  data = (BattleData_o *)DataManager__GetMaster_object_((const MethodInfo_2E8E1C8 *)Method_DataManager_GetMaster_ConstantStrMaster___);
  if ( !buffEnt || !data )
    goto LABEL_27;
  data = (BattleData_o *)ConstantStrMaster__ExistValueArray(
                           (ConstantStrMaster_o *)data,
                           (System_String_o *)StringLiteral_5788/*"EXTEND_TURN_BUFF_TYPE"*/,
                           buffEnt->fields.type,
                           0LL);
  if ( ((unsigned __int8)data & 1) == 0 )
    goto LABEL_25;
  v14 = this->fields.data;
  if ( !v14 )
LABEL_27:
    sub_1B9026C(data, *(_QWORD *)&targetId);
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
  System_Collections_Generic_IEnumerable_T__o *v17; // x1
  System_Int32_array *ValueArray; // x0

  if ( (byte_4A72982 & 1) == 0 )
  {
    sub_1B90010(&Method_DataManager_GetMasterData_ConstantStrMaster___, *(_QWORD *)&buffType);
    sub_1B90010(&Method_System_Collections_Generic_List_int__AddRange__, v8);
    sub_1B90010(&Method_System_Collections_Generic_List_int__Contains__, v9);
    sub_1B90010(&Method_System_Collections_Generic_List_int___ctor__, v10);
    sub_1B90010(&System_Collections_Generic_List_int__TypeInfo, v11);
    sub_1B90010(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v12);
    byte_4A72982 = 1;
  }
  Instance = (DataManager_o *)*typeList;
  if ( !*typeList )
  {
    v14 = (System_Collections_Generic_List_int__o *)sub_1B9025C(System_Collections_Generic_List_int__TypeInfo);
    System_Collections_Generic_List_int____ctor(
      v14,
      (const MethodInfo_34F3148 *)Method_System_Collections_Generic_List_int___ctor__);
    *typeList = v14;
    sub_1B8FFB4((ServantStatusBattleListViewItem_o *)typeList, (int32_t)v14, v15, v16);
    Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_374C890 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( Instance )
    {
      Instance = (DataManager_o *)DataManager__GetMasterData_object_(
                                    Instance,
                                    (const MethodInfo_2E8E21C *)Method_DataManager_GetMasterData_ConstantStrMaster___);
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
            (const MethodInfo_34F3BA8 *)Method_System_Collections_Generic_List_int__AddRange__);
        }
        Instance = (DataManager_o *)*typeList;
        if ( *typeList )
          return System_Collections_Generic_List_int___Contains(
                   (System_Collections_Generic_List_int__o *)Instance,
                   buffType,
                   (const MethodInfo_34F3D14 *)Method_System_Collections_Generic_List_int__Contains__);
      }
    }
LABEL_11:
    sub_1B9026C(Instance, v17);
  }
  return System_Collections_Generic_List_int___Contains(
           (System_Collections_Generic_List_int__o *)Instance,
           buffType,
           (const MethodInfo_34F3D14 *)Method_System_Collections_Generic_List_int__Contains__);
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
  int32_t v12; // w3
  struct BattleSkillInfoData_o *skillInfo; // x1
  int32_t v14; // w2
  int32_t v15; // w3
  __int64 v16; // x22

  if ( (byte_4A729C2 & 1) == 0 )
  {
    sub_1B90010(&BattleActionData_TypeInfo, baseVals);
    sub_1B90010(&StringLiteral_8312/*"LOSS_COMMAND_SPELL"*/, v6);
    byte_4A729C2 = 1;
  }
  v7 = sub_1B9025C(BattleActionData_TypeInfo);
  BattleActionData___ctor((BattleActionData_o *)v7, 0LL);
  if ( !actionData )
    goto LABEL_8;
  if ( !v7 )
    goto LABEL_8;
  *(_QWORD *)(v7 + 32) = *(_QWORD *)&actionData->fields.actorId;
  BattleActionData__setStateField((BattleActionData_o *)v7, 0LL);
  v10 = StringLiteral_8312/*"LOSS_COMMAND_SPELL"*/;
  *(_QWORD *)(v7 + 64) = StringLiteral_8312/*"LOSS_COMMAND_SPELL"*/;
  sub_1B8FFB4((ServantStatusBattleListViewItem_o *)(v7 + 64), v10, v11, v12);
  skillInfo = actionData->fields.skillInfo;
  *(_QWORD *)(v7 + 144) = skillInfo;
  sub_1B8FFB4((ServantStatusBattleListViewItem_o *)(v7 + 144), (int32_t)skillInfo, v14, v15);
  if ( !baseVals || (v16 = *(_QWORD *)(v7 + 144), Value = DataVals__GetValue(baseVals, 0LL), !v16) )
LABEL_8:
    sub_1B9026C(Value, v9);
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
  int32_t v14; // w3
  BattleActionData_BuffData_o *result; // x0

  if ( !buffData
    || !actBuffData
    || (actBuffData->fields.buffId = buffData->fields.buffId,
        actBuffData->fields.auraEffectId = buffData->fields.auraEffectId,
        actBuffData->fields.classIconAuraEffectId = buffData->fields.classIconAuraEffectId,
        !funcEnt) )
  {
    sub_1B9026C(this, actBuffData);
  }
  popupText = funcEnt->fields.popupText;
  v11 = isCommandSideEffect;
  actBuffData->fields.popLabel = popupText;
  sub_1B8FFB4(
    (ServantStatusBattleListViewItem_o *)&actBuffData->fields.popLabel,
    (int32_t)popupText,
    (int32_t)buffData,
    (int32_t)funcEnt);
  *(_QWORD *)&actBuffData->fields.popIcon = *(_QWORD *)&funcEnt->fields.popupIconId;
  EffectList = FunctionEntity__getEffectList(funcEnt, 0LL);
  actBuffData->fields.effectList = EffectList;
  sub_1B8FFB4((ServantStatusBattleListViewItem_o *)&actBuffData->fields.effectList, (int32_t)EffectList, v13, v14);
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
  int32_t v16; // w3
  int32_t v17; // w2
  int32_t v18; // w3

  if ( (byte_4A72993 & 1) == 0 )
  {
    sub_1B90010(&BattleActionData_BuffData_TypeInfo, *(_QWORD *)&targetId);
    byte_4A72993 = 1;
  }
  v12 = sub_1B9025C(BattleActionData_BuffData_TypeInfo);
  BattleActionData_BuffData___ctor((BattleActionData_BuffData_o *)v12, 0LL);
  if ( !v12 )
    sub_1B9026C(v13, v14);
  *(_DWORD *)(v12 + 40) = targetId;
  *(_DWORD *)(v12 + 16) = funcIndex;
  *(_DWORD *)(v12 + 64) = iconId;
  *(_QWORD *)(v12 + 56) = popupText;
  sub_1B8FFB4((ServantStatusBattleListViewItem_o *)(v12 + 56), (int32_t)popupText, v15, v16);
  *(_DWORD *)(v12 + 68) = popupTextColor;
  *(_QWORD *)(v12 + 72) = 0LL;
  sub_1B8FFB4((ServantStatusBattleListViewItem_o *)(v12 + 72), 0, v17, v18);
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

  if ( (byte_4A729BF & 1) == 0 )
  {
    sub_1B90010(&Method_System_Collections_Generic_Dictionary_int__int__ContainsKey__, procArg);
    sub_1B90010(&Method_System_Collections_Generic_Dictionary_int__int___ctor__, v8);
    sub_1B90010(&Method_System_Collections_Generic_Dictionary_int__int__get_Item__, v9);
    sub_1B90010(&Method_System_Collections_Generic_Dictionary_int__RemovedBuffInfo__get_Values__, v10);
    sub_1B90010(&Method_System_Collections_Generic_Dictionary_int__int__set_Item__, v11);
    sub_1B90010(&System_Collections_Generic_Dictionary_int__int__TypeInfo, v12);
    sub_1B90010(
      &Method_System_Collections_Generic_Dictionary_ValueCollection_Enumerator_int__RemovedBuffInfo__Dispose__,
      v13);
    sub_1B90010(&Method_System_Collections_Generic_List_Enumerator_BattleBuffData_BuffData__Dispose__, v14);
    sub_1B90010(
      &Method_System_Collections_Generic_Dictionary_ValueCollection_Enumerator_int__RemovedBuffInfo__MoveNext__,
      v15);
    sub_1B90010(&Method_System_Collections_Generic_List_Enumerator_BattleBuffData_BuffData__MoveNext__, v16);
    sub_1B90010(
      &Method_System_Collections_Generic_Dictionary_ValueCollection_Enumerator_int__RemovedBuffInfo__get_Current__,
      v17);
    sub_1B90010(&Method_System_Collections_Generic_List_Enumerator_BattleBuffData_BuffData__get_Current__, v18);
    sub_1B90010(&int_____TypeInfo, v19);
    sub_1B90010(&Method_System_Collections_Generic_List_BattleBuffData_BuffData__GetEnumerator__, v20);
    this = (BattleLogicFunction_o *)sub_1B90010(
                                      &Method_System_Collections_Generic_Dictionary_ValueCollection_int__RemovedBuffInfo__GetEnumerator__,
                                      v21);
    byte_4A729BF = 1;
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
                                            (const MethodInfo_317C3DC *)Method_System_Collections_Generic_Dictionary_int__RemovedBuffInfo__get_Values__)) == 0LL )
    {
      sub_1B9026C(this, procArg);
    }
    System_Collections_Generic_Dictionary_ValueCollection_int__object___GetEnumerator(
      (System_Collections_Generic_Dictionary_ValueCollection_Enumerator_TKey__TValue__o *)&v51,
      (System_Collections_Generic_Dictionary_ValueCollection_TKey__TValue__o *)this,
      (const MethodInfo_3817D04 *)Method_System_Collections_Generic_Dictionary_ValueCollection_int__RemovedBuffInfo__GetEnumerator__);
    v53 = v51;
    while ( System_Collections_Generic_Dictionary_ValueCollection_Enumerator_int__object___MoveNext(
              (System_Collections_Generic_Dictionary_ValueCollection_Enumerator_TKey__TValue__o *)&v53,
              (const MethodInfo_32C9ED8 *)Method_System_Collections_Generic_Dictionary_ValueCollection_Enumerator_int__RemovedBuffInfo__MoveNext__) )
    {
      current = v53.fields._current;
      v24 = (System_Collections_Generic_Dictionary_int__int__o *)sub_1B9025C(System_Collections_Generic_Dictionary_int__int__TypeInfo);
      System_Collections_Generic_Dictionary_int__int____ctor(
        v24,
        (const MethodInfo_3173138 *)Method_System_Collections_Generic_Dictionary_int__int___ctor__);
      if ( !current )
        sub_1B9026C(v25, v26);
      klass = (System_Collections_Generic_List_object__o *)current[1].klass;
      if ( !klass )
        sub_1B9026C(0LL, v26);
      System_Collections_Generic_List_object___GetEnumerator(
        (System_Collections_Generic_List_Enumerator_T__o *)&v51,
        klass,
        (const MethodInfo_35114B8 *)Method_System_Collections_Generic_List_BattleBuffData_BuffData__GetEnumerator__);
      v52 = v51;
      while ( 1 )
      {
        v28 = System_Collections_Generic_List_Enumerator_object___MoveNext(
                &v52,
                (const MethodInfo_328A150 *)Method_System_Collections_Generic_List_Enumerator_BattleBuffData_BuffData__MoveNext__);
        if ( !v28 )
          break;
        v30 = v52.fields._current;
        if ( !v52.fields._current )
          sub_1B9026C(v28, v29);
        if ( BattleBuffData_BuffData__IsFamilyBuff((BattleBuffData_BuffData_o *)v52.fields._current, 0LL) )
        {
          v31 = sub_1B900B8(int_____TypeInfo, 2LL);
          FamilyLinkageIdArray = BattleBuffData_BuffData__get_FamilyLinkageIdArray(
                                   (BattleBuffData_BuffData_o *)v30,
                                   0LL);
          if ( !v31 )
            sub_1B9026C(FamilyLinkageIdArray, FamilyLinkageIdArray);
          if ( !*(_DWORD *)(v31 + 24) )
            sub_1B90274(FamilyLinkageIdArray, FamilyLinkageIdArray);
          *(_QWORD *)(v31 + 32) = FamilyLinkageIdArray;
          sub_1B8FFB4((ServantStatusBattleListViewItem_o *)(v31 + 32), (int32_t)FamilyLinkageIdArray, v33, v34);
          FamilyLinkageTargetIdArray = BattleBuffData_BuffData__get_FamilyLinkageTargetIdArray(
                                         (BattleBuffData_BuffData_o *)v30,
                                         0LL);
          if ( *(_DWORD *)(v31 + 24) <= 1u )
            sub_1B90274(FamilyLinkageTargetIdArray, FamilyLinkageTargetIdArray);
          *(_QWORD *)(v31 + 40) = FamilyLinkageTargetIdArray;
          sub_1B8FFB4((ServantStatusBattleListViewItem_o *)(v31 + 40), (int32_t)FamilyLinkageTargetIdArray, v36, v37);
          v40 = *(_QWORD *)(v31 + 24);
          if ( (int)v40 >= 1 )
          {
            v41 = 0LL;
            do
            {
              if ( v41 >= (unsigned int)v40 )
                sub_1B90274(IsNullOrEmpty, v39);
              v42 = *(System_Collections_ICollection_o **)(v31 + 8 * v41 + 32);
              IsNullOrEmpty = BasicHelper__IsNullOrEmpty(v42, 0LL);
              if ( (IsNullOrEmpty & 1) == 0 )
              {
                if ( !v42 )
                  sub_1B9026C(IsNullOrEmpty, v39);
                monitor = (unsigned __int64)v42[1].monitor;
                if ( (int)monitor >= 1 )
                {
                  v44 = (unsigned int)v42[1].monitor;
                  v45 = 0LL;
                  v46 = v42 + 2;
                  do
                  {
                    if ( v45 >= (unsigned int)monitor )
                      sub_1B90274(IsNullOrEmpty, v39);
                    if ( !v24 )
                      sub_1B9026C(IsNullOrEmpty, v39);
                    v47 = System_Collections_Generic_Dictionary_int__int___ContainsKey(
                            v24,
                            *((_DWORD *)&v46->klass + v45),
                            (const MethodInfo_3173CE8 *)Method_System_Collections_Generic_Dictionary_int__int__ContainsKey__);
                    if ( !v47 )
                    {
                      if ( v45 >= LODWORD(v42[1].monitor) )
                        sub_1B90274(v47, v48);
                      if ( !v22 )
                        sub_1B9026C(v47, v48);
                      v49 = *((_DWORD *)&v46->klass + v45);
                      v50 = FamilyBuffLinkageIdGenerator__Next(v22, 0LL);
                      System_Collections_Generic_Dictionary_int__int___set_Item(
                        v24,
                        v49,
                        v50,
                        (const MethodInfo_3173AE8 *)Method_System_Collections_Generic_Dictionary_int__int__set_Item__);
                    }
                    if ( v45 >= LODWORD(v42[1].monitor) )
                      sub_1B90274(v47, v48);
                    IsNullOrEmpty = System_Collections_Generic_Dictionary_int__int___get_Item(
                                      v24,
                                      *((_DWORD *)&v46->klass + v45),
                                      (const MethodInfo_3173A60 *)Method_System_Collections_Generic_Dictionary_int__int__get_Item__);
                    monitor = LODWORD(v42[1].monitor);
                    if ( v45 >= monitor )
                      sub_1B90274(IsNullOrEmpty, v39);
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
        (const MethodInfo_328A14C *)Method_System_Collections_Generic_List_Enumerator_BattleBuffData_BuffData__Dispose__);
    }
    System_Collections_Generic_Dictionary_ValueCollection_Enumerator_int__object___Dispose(
      (System_Collections_Generic_Dictionary_ValueCollection_Enumerator_TKey__TValue__o *)&v53,
      (const MethodInfo_32C9ED4 *)Method_System_Collections_Generic_Dictionary_ValueCollection_Enumerator_int__RemovedBuffInfo__Dispose__);
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
  BattleActionData_o *SideEffectActionData_42416936; // x0
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
  int32_t v48; // w3
  _DWORD *v49; // [xsp+8h] [xbp-88h]
  unsigned __int64 v51; // [xsp+18h] [xbp-78h]
  System_Int32_array *questIndividualityArray; // [xsp+28h] [xbp-68h]
  System_Int32_array *questIndividualityArraya; // [xsp+28h] [xbp-68h]

  if ( (byte_4A72986 & 1) == 0 )
  {
    sub_1B90010(&System_Action_BattleActionData__TypeInfo, sideEffectArg);
    sub_1B90010(&Method_BasicHelper_ForEach_BattleActionData___, v9);
    sub_1B90010(&bool___TypeInfo, v10);
    sub_1B90010(&Method_DataManager_GetMaster_SkillLvMaster___, v11);
    sub_1B90010(&DataManager_TypeInfo, v12);
    sub_1B90010(&Method_BattleLogicFunction___c__SetFuncSideEffect_b__49_0__, v13);
    sub_1B90010(&BattleLogicFunction___c_TypeInfo, v14);
    byte_4A72986 = 1;
  }
  if ( actionData && actorSvtData )
  {
    if ( !DataManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
    Master_object = DataManager__GetMaster_object_((const MethodInfo_2E8E1C8 *)Method_DataManager_GetMaster_SkillLvMaster___);
    FuncSideEffectTargetServants = (void *)sub_1B900B8(bool___TypeInfo, 2LL);
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
        SideEffectActionData_42416936 = BattleActionData__MakeSideEffectActionData_42416936(
                                          actionData,
                                          4,
                                          v24->fields.uniqueId,
                                          0LL);
        BattleLogicFunction__SetSideEffectBuff(
          this,
          (SkillLvMaster_o *)Master_object,
          SideEffectActionData_42416936,
          v28,
          (BattleLogicFunction_CommonSideEffectFunctionArgument_o *)sideEffectArg,
          1,
          v30);
        LODWORD(v25) = *((_DWORD *)v26 + 6);
        if ( (__int64)++v27 >= (int)v25 )
          goto LABEL_23;
      }
LABEL_48:
      sub_1B90274(FuncSideEffectTargetServants, v17);
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
      sub_1B9026C(FuncSideEffectTargetServants, v17);
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
        FuncSideEffectTargetServants = BattleActionData__MakeSideEffectActionData_42416936(
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
        _9__49_0 = (System_Action_object__o *)sub_1B9025C(System_Action_BattleActionData__TypeInfo);
        System_Action_object____ctor(_9__49_0, v45, Method_BattleLogicFunction___c__SetFuncSideEffect_b__49_0__, 0LL);
        static_fields = BattleLogicFunction___c_TypeInfo->static_fields;
        static_fields->__9__49_0 = (struct System_Action_BattleActionData__o *)_9__49_0;
        sub_1B8FFB4((ServantStatusBattleListViewItem_o *)&static_fields->__9__49_0, (int32_t)_9__49_0, v47, v48);
      }
      BasicHelper__ForEach_object_(
        SideEffectList,
        (System_Action_T__o *)_9__49_0,
        (const MethodInfo_2E7B5D4 *)Method_BasicHelper_ForEach_BattleActionData___);
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
  if ( (byte_4A7299D & 1) == 0 )
  {
    this = (BattleLogicFunction_o *)sub_1B90010(&BattleActionData_BuffData___TypeInfo, actiondata);
    byte_4A7299D = 1;
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
      sub_1B9026C(this, actiondata);
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
  sub_1B8FFB4((ServantStatusBattleListViewItem_o *)&v19->fields.tamamocatTreasureDeviceIds, (int32_t)this, v22, v23);
  if ( !baseVals )
    goto LABEL_26;
  LODWORD(v19->fields.buffProgressTurnSelfList) = DataVals__GetParam(baseVals, 64, 0, 0LL);
  this = (BattleLogicFunction_o *)sub_1B900B8(BattleActionData_BuffData___TypeInfo, 1LL);
  if ( !this )
    goto LABEL_26;
  v27 = this;
  if ( v24 )
  {
    this = (BattleLogicFunction_o *)sub_1B9014C(v24, this->klass->_1.element_class);
    if ( !this )
    {
      v32 = sub_1B90290(0LL);
      sub_1B90138(v32, 0LL);
    }
  }
  if ( !LODWORD(v27->fields.logic) )
    goto LABEL_27;
  v27->fields.logictarget = (struct BattleLogicTarget_o *)v24;
  sub_1B8FFB4((ServantStatusBattleListViewItem_o *)&v27->fields.logictarget, (int32_t)v24, v25, v26);
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
    sub_1B90274(this, actiondata);
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
      sub_1B9026C(data, funcResult);
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
      sub_1B9026C(SkillFromBuff, v13);
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

  if ( (byte_4A72989 & 1) == 0 )
  {
    sub_1B90010(&BattleActionData_TypeInfo, arg);
    sub_1B90010(&Method_DataManager_GetMasterData_SkillLvMaster___, v11);
    sub_1B90010(&Method_System_Collections_Generic_KeyValuePair_int__int___ctor__, v12);
    sub_1B90010(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v13);
    byte_4A72989 = 1;
  }
  pairAttackAndTarget = 0LL;
  Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_374C890 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance
    || (Instance = (DataManager_o *)DataManager__GetMasterData_object_(
                                      Instance,
                                      (const MethodInfo_2E8E21C *)Method_DataManager_GetMasterData_SkillLvMaster___),
        v32 = (SkillLvMaster_o *)Instance,
        !attackArg)
    || (SideEffectList_k__BackingField = attackArg->fields._SideEffectList_k__BackingField) == 0LL )
  {
LABEL_25:
    sub_1B9026C(Instance, v15);
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
          (const MethodInfo_3446750 *)Method_System_Collections_Generic_KeyValuePair_int__int___ctor__);
        if ( !mainAction )
          goto LABEL_25;
        v36 = pairAttackAndTarget;
        Instance = (DataManager_o *)BattleActionData__isReflectedAttackSideEffect(mainAction, v36, 0LL);
        if ( ((unsigned __int8)Instance & 1) == 0 )
        {
          Instance = (DataManager_o *)BattleServantData__getAttackSideEffectBuffList_42997848(
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
                v26 = (BattleActionData_o *)sub_1B9025C(BattleActionData_TypeInfo);
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
              sub_1B90274(Instance, v15);
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
  if ( (byte_4A72985 & 1) == 0 )
  {
    sub_1B90010(&Method_DataManager_GetMasterData_FunctionMaster___, *(_QWORD *)&targetId);
    sub_1B90010(&Method_DataMasterBase_FunctionMaster__FunctionEntity__int__GetEntity__, v9);
    sub_1B90010(&int___TypeInfo, v10);
    sub_1B90010(&Method_System_Collections_Generic_List_int__AddRange__, v11);
    sub_1B90010(&Method_System_Collections_Generic_List_int__Add__, v12);
    this = (BattleLogicFunction_o *)sub_1B90010(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v13);
    byte_4A72985 = 1;
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
      *(const MethodInfo_34F399C **)(*(_QWORD *)(v15[4] + 192LL) + 112LL));
  }
  else
  {
    LODWORD(this->fields.logic) = logic_low + 1;
    *((_DWORD *)&data->fields.rootfsm + logic_low) = targetId;
  }
  if ( !baseVals )
    goto LABEL_23;
  funcType = baseVals->fields.funcType;
  this = (BattleLogicFunction_o *)sub_1B900B8(int___TypeInfo, 1LL);
  if ( !this )
    goto LABEL_23;
  if ( !LODWORD(this->fields.logic) )
    goto LABEL_24;
  LODWORD(this->fields.logictarget) = targetId;
  BattleActionData__AddHpDecreaseFuncTargets(action, funcType, (System_Int32_array *)this, 0LL);
  this = (BattleLogicFunction_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_374C890 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !this
    || (MasterData_object = DataManager__GetMasterData_object_(
                              (DataManager_o *)this,
                              (const MethodInfo_2E8E21C *)Method_DataManager_GetMasterData_FunctionMaster___),
        (this = (BattleLogicFunction_o *)DataVals__GetDependFuncIdArray(baseVals, 0LL)) == 0LL) )
  {
LABEL_23:
    sub_1B9026C(this, *(_QWORD *)&targetId);
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
                                        (const MethodInfo_312C5A8 *)Method_DataMasterBase_FunctionMaster__FunctionEntity__int__GetEntity__);
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
          (const MethodInfo_34F3BA8 *)Method_System_Collections_Generic_List_int__AddRange__);
        BattleActionData__AddHpDecreaseFuncTargets(action, (int32_t)v23->fields.logic, (System_Int32_array *)v24, 0LL);
      }
      LODWORD(logic) = v20->fields.logic;
      if ( (__int64)++v21 >= (int)logic )
        return;
    }
LABEL_24:
    sub_1B90274(this, *(_QWORD *)&targetId);
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
  if ( (byte_4A72981 & 1) == 0 )
  {
    sub_1B90010(&StringLiteral_15510/*"WAR_BOARD_PROGRESS_OPPONENT_BUFF_TYPES"*/, *(_QWORD *)&buffType);
    this = (BattleLogicFunction_o *)sub_1B90010(&StringLiteral_15511/*"WAR_BOARD_PROGRESS_SELF_BUFF_TYPES"*/, v8);
    byte_4A72981 = 1;
  }
  IsUpdateBuffProgressTurn = BattleLogicFunction__IsUpdateBuffProgressTurn(
                               this,
                               buffType,
                               (System_String_o *)StringLiteral_15511/*"WAR_BOARD_PROGRESS_SELF_BUFF_TYPES"*/,
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
            (System_String_o *)StringLiteral_15510/*"WAR_BOARD_PROGRESS_OPPONENT_BUFF_TYPES"*/,
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
  int32_t v17; // w3
  System_Action_object__o *v18; // x0
  System_Action_T__o *v19; // x21
  __int64 *v20; // x8

  if ( (byte_4A729B6 & 1) == 0 )
  {
    sub_1B90010(&System_Action_BattleSkillInfoData__TypeInfo, dataVals);
    sub_1B90010(&Method_BasicHelper_ForEach_BattleSkillInfoData___, v7);
    sub_1B90010(&Method_BattleLogicFunction___c__DisplayClass101_0__UpdateUserEquipSkillChargeTurn_b__0__, v8);
    sub_1B90010(&Method_BattleLogicFunction___c__DisplayClass101_0__UpdateUserEquipSkillChargeTurn_b__1__, v9);
    sub_1B90010(&BattleLogicFunction___c__DisplayClass101_0_TypeInfo, v10);
    byte_4A729B6 = 1;
  }
  v11 = sub_1B9025C(BattleLogicFunction___c__DisplayClass101_0_TypeInfo);
  BattleLogicFunction___c__DisplayClass101_0___ctor((BattleLogicFunction___c__DisplayClass101_0_o *)v11, 0LL);
  data = this->fields.data;
  if ( !data
    || (data = (BattleData_o *)BattleData__getMasterSkillInfos(data, 0LL), !dataVals)
    || (v14 = (System_Collections_Generic_IEnumerable_T__o *)data,
        data = (BattleData_o *)DataVals__GetValue(dataVals, 0LL),
        !v11) )
  {
    sub_1B9026C(data, v12);
  }
  *(_DWORD *)(v11 + 16) = (_DWORD)data;
  *(_DWORD *)(v11 + 20) = DataVals__GetValue2(dataVals, 0LL) - 1;
  TargetList = DataVals__GetTargetList(dataVals, 0LL);
  *(_QWORD *)(v11 + 24) = TargetList;
  sub_1B8FFB4((ServantStatusBattleListViewItem_o *)(v11 + 24), (int32_t)TargetList, v16, v17);
  *(_BYTE *)(v11 + 32) = 0;
  v18 = (System_Action_object__o *)sub_1B9025C(System_Action_BattleSkillInfoData__TypeInfo);
  v19 = (System_Action_T__o *)v18;
  if ( isProgress )
    v20 = &Method_BattleLogicFunction___c__DisplayClass101_0__UpdateUserEquipSkillChargeTurn_b__0__;
  else
    v20 = &Method_BattleLogicFunction___c__DisplayClass101_0__UpdateUserEquipSkillChargeTurn_b__1__;
  System_Action_object____ctor(v18, (Il2CppObject *)v11, *v20, 0LL);
  BasicHelper__ForEach_object_(v14, v19, (const MethodInfo_2E7B5D4 *)Method_BasicHelper_ForEach_BattleSkillInfoData___);
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
    sub_1B9026C(this, buff);
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
    sub_1B9026C(0LL, x);
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

  if ( (byte_4A72987 & 1) == 0 )
  {
    sub_1B90010(&StringLiteral_17968/*"checkFuncAction("*/, args);
    sub_1B90010(&StringLiteral_176/*" < "*/, v18);
    sub_1B90010(&StringLiteral_17967/*"checkFuncAction firstResult:false"*/, v19);
    byte_4A72987 = 1;
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
  data = (BattleData_o *)BattleUtility__Abs_43081068(value, 0LL);
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
      sub_1B9026C(data, args);
    }
    v29 = (float)(int)data;
    goto LABEL_33;
  }
LABEL_46:
  v36 = System_Int32__ToString((int32_t)&v42, 0LL);
  v37 = System_Int32__ToString((int32_t)&v41, 0LL);
  System_String__Concat_61800356(
    (System_String_o *)StringLiteral_17968/*"checkFuncAction("*/,
    v36,
    (System_String_o *)StringLiteral_176/*" < "*/,
    v37,
    0LL);
  return v42 < v41;
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
    sub_1B9026C(data, *(_QWORD *)&targetId);
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
  __int64 v14; // x1
  BattleData_o *data; // x0
  BattleServantData_o *v16; // x25
  int32_t Value; // w0
  const MethodInfo *v19; // [xsp+8h] [xbp-58h]

  if ( (byte_4A729BB & 1) == 0 )
  {
    sub_1B90010(&BattleActionData_TypeInfo, *(_QWORD *)&targetId);
    byte_4A729BB = 1;
  }
  v13 = (BattleActionData_o *)sub_1B9025C(BattleActionData_TypeInfo);
  BattleActionData___ctor(v13, 0LL);
  data = this->fields.data;
  if ( !data || (data = (BattleData_o *)BattleData__getServantData(data, targetId, 0LL), !baseVals) )
    sub_1B9026C(data, v14);
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
  if ( (byte_4A729B1 & 1) == 0 )
  {
    sub_1B90010(&BattleActionData_TypeInfo, *(_QWORD *)&targetId);
    sub_1B90010(&NpGaugeAbsorbResult_TypeInfo, v13);
    this = (BattleLogicFunction_o *)sub_1B90010(&NpPointToTurnConvert_TypeInfo, v14);
    byte_4A729B1 = 1;
  }
  if ( !funcTarget )
    goto LABEL_12;
  funcUnit_k__BackingField = funcTarget->fields._funcUnit_k__BackingField;
  if ( !funcUnit_k__BackingField )
    goto LABEL_12;
  dataVals_k__BackingField = funcUnit_k__BackingField->fields._dataVals_k__BackingField;
  v17 = (BattleActionData_o *)sub_1B9025C(BattleActionData_TypeInfo);
  BattleActionData___ctor(v17, 0LL);
  v18 = (NpPointToTurnConvert_o *)sub_1B9025C(NpPointToTurnConvert_TypeInfo);
  NpPointToTurnConvert___ctor(v18, 0LL);
  v19 = (NpGaugeAbsorbResult_o *)sub_1B9025C(NpGaugeAbsorbResult_TypeInfo);
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
    sub_1B9026C(this, *(_QWORD *)&targetId);
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
  BattleActionData_o *v8; // x29
  BattleLogicFunction_o *v9; // x21
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
  __int64 v26; // x1
  __int64 v27; // x1
  __int64 v28; // x1
  __int64 v29; // x1
  __int64 v30; // x1
  __int64 v31; // x1
  __int64 v32; // x1
  __int64 v33; // x1
  struct BattleLogicFunctionProcess_FunctionUnitCheck_o *funcUnit_k__BackingField; // x19
  DataVals_o *dataVals_k__BackingField; // x23
  int32_t actorId; // w27
  BuffEntity_o *v37; // x25
  BattleActionData_o *v38; // x19
  BattleServantData_o *v39; // x28
  BattleServantData_o *ServantData; // x26
  BattleActionData_MasterBuffData_o *v41; // x22
  __int64 v42; // x27
  const MethodInfo *v43; // x3
  char v44; // w19
  int32_t AdjustmentBuffTurn; // w0
  const MethodInfo *v46; // x4
  char v47; // w22
  bool v48; // w24
  int32_t type; // w19
  const MethodInfo *v50; // x3
  bool isEnemy; // w8
  bool *p_isEnemy; // x22
  char v53; // w9
  struct BattleData_o *data; // x8
  int32_t ProgressTurnCond; // w0
  int32_t v56; // w19
  int32_t v57; // w19
  int32_t v58; // w19
  int32_t v59; // w19
  int32_t tdCommandTypeChange; // w8
  __int64 v61; // x0
  int32_t v62; // w2
  int32_t v63; // w3
  __int64 v64; // x22
  __int64 v65; // x19
  int32_t v66; // w19
  struct BattleData_o *v67; // x8
  struct BattleEntity_o *battle_ent; // x8
  int64_t userId; // x24
  int32_t eventId; // w22
  EventPointBuffMaster_o *v71; // x19
  int32_t EventPointGroupId; // w29
  UserEventPointEntity_o *EntityDefinitely; // x0
  int64_t value; // x22
  int logic; // w8
  int v76; // w10
  __int64 v77; // x9
  __int64 v78; // x11
  int v79; // w29
  BattleData_o *v80; // x19
  BattleBuffData_CheckIndividualitiesData_o *v81; // x22
  BattleBuffData_ParamAdd_o *v82; // x24
  __int64 v83; // x0
  int32_t v84; // w2
  int32_t v85; // w3
  __int64 v86; // x22
  __int64 v87; // x19
  int32_t Param; // w22
  __int64 v89; // x19
  bool v90; // w8
  int v91; // w8
  System_Int32_array *TargetIndiv; // x0
  int32_t v93; // w2
  int32_t v94; // w3
  int32_t v95; // w2
  int32_t v96; // w3
  int32_t v97; // w19
  BattleBuffData_IntervalData_o *IntervalData; // x0
  int32_t v99; // w2
  int32_t v100; // w3
  System_Int32_array *ParamArray; // x0
  int32_t v102; // w2
  int32_t v103; // w3
  int32_t v104; // w19
  int32_t RelationId; // w19
  BattleBuffData_RelationOverwriteData_o *v106; // x22
  int32_t v107; // w2
  int32_t v108; // w3
  BattleDataDefine_c *v109; // x0
  int32_t v110; // w19
  bool v111; // w0
  float UpDownGiveHeal; // s8
  int32_t v113; // w0
  int v114; // s0
  int32_t v115; // w0
  int v116; // s0
  System_Int32_array *v117; // x0
  int32_t v118; // w2
  int32_t v119; // w3
  System_Int32_array *v120; // x0
  int32_t v121; // w2
  int32_t v122; // w3
  System_Int32_array *v123; // x0
  int32_t v124; // w2
  int32_t v125; // w3
  int32_t v126; // w19
  System_Int32_array *UpBuffRateBuffTypeList; // x0
  int32_t v128; // w2
  int32_t v129; // w3
  struct BattleLogicFunction_FunctionArgument_o *externalArg; // x8
  struct BattleData_o *v131; // x8
  System_Int32_array *AddIndividualty; // x0
  int32_t v133; // w2
  int32_t v134; // w3
  System_Int32_array *LinkageTargetIndividualty; // x0
  int32_t v136; // w2
  int32_t v137; // w3
  const MethodInfo *v138; // x3
  struct BattleData_o *v139; // x8
  System_Int32_array *ValsList; // x0
  int32_t v141; // w2
  int32_t v142; // w3
  int32_t v143; // w0
  int v144; // w8
  int v145; // w9
  UnityEngine_Object_o *v146; // x19
  bool v147; // w22
  int32_t v148; // w19
  CommandCodeInfo_o *UserCommandCode; // x0
  int32_t MaxHp; // w24
  int32_t v151; // w19
  __int64 v152; // x4
  int32_t v153; // w19
  bool IsCommandSideEffect; // w0
  const MethodInfo *v155; // x7
  BattleActionEffect_AddChangeMaxHpBuff_o *v156; // x19
  BattleLogicFunction_o *v157; // x22
  int32_t v158; // w2
  int32_t v159; // w3
  BattleActionEffect_Base_o *v160; // x0
  int32_t id; // w19
  System_Collections_Generic_List_int__o *v162; // x0
  System_String_o *i; // x0
  System_String_o *v164; // x0
  System_String_o *v165; // x0
  System_String_o *v166; // x0
  System_Int32_array *QuestIndividualities; // x0
  UnityEngine_Object_o *v168; // x22
  System_Int32_array *v169; // x19
  BattlePerformance_o *perf; // x2
  struct BattleLogic_o *v171; // x8
  UnityEngine_Object_o *v172; // x19
  int v173; // w8
  BattleLogicFunction_o *v174; // x19
  unsigned int v175; // w22
  System_Int32_array *ShortenMaxCountArray; // x0
  int32_t v177; // w2
  int32_t v178; // w3
  BattleActionData_BuffData_o *v179; // x22
  System_Int32_array *TargetFunctionIndividuality; // x0
  int32_t v181; // w2
  int32_t v182; // w3
  System_Int32_array *TargetBuffIndividuality; // x0
  int32_t v184; // w2
  int32_t v185; // w3
  int32_t v186; // w19
  struct BattleData_o *v187; // x8
  BattleBuffData_o *buffData; // x19
  BattleBuffData_CheckIndividualitiesData_o *v189; // x22
  FunctionEntity_o *v190; // x2
  DataVals_o *v191; // x3
  int32_t v192; // w4
  const MethodInfo *v193; // x5
  bool v194; // w0
  BattleActionData_BuffData_o *v195; // x22
  const MethodInfo *v196; // x3
  __int64 v198; // x0
  bool *v199; // [xsp+0h] [xbp-D0h]
  int32_t treasureDvcId; // [xsp+Ch] [xbp-C4h]
  BattleActionData_o *userCommandCodeId; // [xsp+10h] [xbp-C0h]
  int userCommandCodeIda; // [xsp+10h] [xbp-C0h]
  int32_t funcIndex; // [xsp+1Ch] [xbp-B4h]
  BattleActionData_o *v204; // [xsp+20h] [xbp-B0h]
  BattleActionData_o *v205; // [xsp+30h] [xbp-A0h]
  int32_t v206; // [xsp+38h] [xbp-98h]
  unsigned int uniqueId; // [xsp+3Ch] [xbp-94h]
  FunctionEntity_o *funcEnt; // [xsp+40h] [xbp-90h]
  BattleActionData_BuffData_o *v210; // [xsp+50h] [xbp-80h]
  Il2CppObject *entity; // [xsp+58h] [xbp-78h] BYREF
  int v212; // [xsp+68h] [xbp-68h] BYREF
  bool isSelfTurn; // [xsp+6Ch] [xbp-64h] BYREF

  v8 = mainAction;
  v9 = this;
  if ( (byte_4A7298E & 1) == 0 )
  {
    sub_1B90010(&BattleActionEffect_AddChangeMaxHpBuff_TypeInfo, mainAction);
    sub_1B90010(&BattleActionData_TypeInfo, v10);
    sub_1B90010(&BattleDataDefine_TypeInfo, v11);
    sub_1B90010(&BattleBuffData_BuffData___TypeInfo, v12);
    sub_1B90010(&BattleBuffData_BuffData_TypeInfo, v13);
    sub_1B90010(&BuffList_TypeInfo, v14);
    sub_1B90010(&BattleBuffData_CheckIndividualitiesData_TypeInfo, v15);
    sub_1B90010(&Method_DataManager_GetMasterData_EventPointBuffMaster___, v16);
    sub_1B90010(&Method_DataManager_GetMasterData_UserEventPointMaster___, v17);
    sub_1B90010(&Method_DataManager_GetMaster_BuffTypeDetailMaster___, v18);
    sub_1B90010(&DataManager_TypeInfo, v19);
    sub_1B90010(&Method_DataMasterBase_BuffTypeDetailMaster__BuffTypeDetailEntity__int__TryGetEntity__, v20);
    sub_1B90010(&BattleBuffData_FieldAliveCondData_TypeInfo, v21);
    sub_1B90010(&int___TypeInfo, v22);
    sub_1B90010(&Method_System_Collections_Generic_List_int___ctor__, v23);
    sub_1B90010(&System_Collections_Generic_List_int__TypeInfo, v24);
    sub_1B90010(&BattleActionData_MasterBuffData_TypeInfo, v25);
    sub_1B90010(&System_Math_TypeInfo, v26);
    sub_1B90010(&UnityEngine_Object_TypeInfo, v27);
    sub_1B90010(&BattleBuffData_ParamAdd_TypeInfo, v28);
    sub_1B90010(&BattleBuffData_RelationOverwriteData_TypeInfo, v29);
    sub_1B90010(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v30);
    sub_1B90010(&StringLiteral_19702/*"functionAddState=>"*/, v31);
    sub_1B90010(&StringLiteral_13292/*"TAMAMOCAT_STUN_BUFF_ID"*/, v32);
    this = (BattleLogicFunction_o *)sub_1B90010(&StringLiteral_13293/*"TAMAMOCAT_TREASURE_DEVICE_ID_"*/, v33);
    byte_4A7298E = 1;
  }
  isSelfTurn = 0;
  entity = 0LL;
  v212 = 0;
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
  v37 = (BuffEntity_o *)((__int64 (__fastcall *)(BattleLogicFunctionProcess_FunctionTargetCheck_o *, void *, BattleLogicFunctionProcess_FunctionTargetCheck_o *, BattleLogicFunction_ProcListInArgs_o *, bool, const MethodInfo *))funcTarget->klass->vtable._14_GetFixBuffEntity.method)(
                          funcTarget,
                          funcTarget->klass[1]._1.image,
                          funcTarget,
                          args,
                          shortbuff,
                          method);
  funcIndex = BattleLogicFunctionProcess_FunctionUnitCheck__get_FuncIndex(funcUnit_k__BackingField, 0LL);
  userCommandCodeId = (BattleActionData_o *)v8->fields.userCommandCodeId;
  treasureDvcId = v8->fields.treasureDvcId;
  v38 = (BattleActionData_o *)sub_1B9025C(BattleActionData_TypeInfo);
  BattleActionData___ctor(v38, 0LL);
  this = (BattleLogicFunction_o *)v9->fields.data;
  if ( !this )
    goto LABEL_290;
  v204 = v38;
  this = (BattleLogicFunction_o *)BattleData__getServantData((BattleData_o *)this, actorId, 0LL);
  if ( !v9->fields.data )
    goto LABEL_290;
  v39 = (BattleServantData_o *)this;
  ServantData = BattleData__getServantData(v9->fields.data, uniqueId, 0LL);
  this = (BattleLogicFunction_o *)((__int64 (__fastcall *)(BattleLogicFunctionProcess_FunctionTargetCheck_o *, Il2CppMethodPointer))funcTarget->klass->vtable._7_MakeActionBuffData.method)(
                                    funcTarget,
                                    funcTarget->klass->vtable._8_AddBuff.methodPtr);
  if ( !v37 )
    goto LABEL_290;
  v41 = (BattleActionData_MasterBuffData_o *)this;
  this = (BattleLogicFunction_o *)BuffEntity__checkBuffType(v37, 142, 0LL);
  if ( ((unsigned __int8)this & 1) != 0 )
  {
    v41 = (BattleActionData_MasterBuffData_o *)sub_1B9025C(BattleActionData_MasterBuffData_TypeInfo);
    BattleActionData_MasterBuffData___ctor(v41, funcEnt, 0LL);
  }
  if ( !ServantData )
    goto LABEL_290;
  v206 = actorId;
  if ( !v41 )
    goto LABEL_290;
  v41->fields.targetId = ServantData->fields.uniqueId;
  v41->fields.functionIndex = funcIndex;
  v42 = sub_1B9025C(BattleBuffData_BuffData_TypeInfo);
  BattleBuffData_BuffData___ctor((BattleBuffData_BuffData_o *)v42, 0LL);
  if ( !v42 )
    goto LABEL_290;
  *(_DWORD *)(v42 + 16) = v37->fields.id;
  if ( !args )
    goto LABEL_290;
  *(_DWORD *)(v42 + 164) = BattleLogicFunction_ProcListInArgs__get_SkillId(args, 0LL);
  *(_DWORD *)(v42 + 188) = BattleLogicFunction_ProcListInArgs__get_GrantSkillType(args, 0LL);
  *(_DWORD *)(v42 + 176) = DataVals__GetMotionChange(dataVals_k__BackingField, 0LL);
  *(_DWORD *)(v42 + 20) = 2 * DataVals__GetParam(dataVals_k__BackingField, 1, 0, 0LL);
  BattleBuffData_BuffData__RegisterGeneralParams((BattleBuffData_BuffData_o *)v42, dataVals_k__BackingField, 0LL);
  v44 = v8->fields.isReversalShortBuffTurn ^ shortbuff;
  if ( (v44 & 1) != 0 )
    --*(_DWORD *)(v42 + 20);
  AdjustmentBuffTurn = BattleLogicFunction__GetAdjustmentBuffTurn(v9, dataVals_k__BackingField, v39, v43);
  v210 = (BattleActionData_BuffData_o *)v41;
  if ( AdjustmentBuffTurn )
  {
    v44 ^= 1u;
    *(_DWORD *)(v42 + 20) += AdjustmentBuffTurn;
  }
  this = (BattleLogicFunction_o *)BattleLogicFunction__IsSvtBuffTurnExtend(v9, uniqueId, v37, v44 & 1, v46);
  v47 = (char)this;
  if ( ((unsigned __int8)this & 1) != 0 )
  {
    v44 ^= 1u;
    ++*(_DWORD *)(v42 + 20);
  }
  *(_DWORD *)(v42 + 68) = v206;
  if ( !funcEnt )
    goto LABEL_290;
  v48 = (v44 ^ Target__isEnemy(funcEnt->fields.targetType, 0LL)) & 1;
  isSelfTurn = v48;
  type = v37->fields.type;
  if ( !BuffList_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(BuffList_TypeInfo);
  this = (BattleLogicFunction_o *)BuffList__IsForceProgressSelfTurnType(type, 0LL);
  if ( ((unsigned __int8)this & 1) != 0 )
  {
    v48 = 1;
    isSelfTurn = 1;
  }
  if ( (v47 & 1) != 0 )
  {
    isEnemy = ServantData->fields.isEnemy;
    p_isEnemy = &ServantData->fields.isEnemy;
    v53 = isEnemy ^ v48 ^ 1;
  }
  else
  {
    BattleLogicFunction__UpdateBuffProgressTurn(v9, v37->fields.type, &isSelfTurn, v50);
    p_isEnemy = &ServantData->fields.isEnemy;
    *(_BYTE *)(v42 + 180) = ServantData->fields.isEnemy ^ isSelfTurn ^ 1;
    this = (BattleLogicFunction_o *)BuffEntity__GetProgressSelfTurn(v37, 0LL);
    if ( ((unsigned int)this & 0x80000000) != 0 )
    {
      v53 = *(_BYTE *)(v42 + 180);
      isEnemy = *p_isEnemy;
      goto LABEL_32;
    }
    isEnemy = *p_isEnemy;
    v53 = *p_isEnemy ^ ((_DWORD)this == 0);
  }
  *(_BYTE *)(v42 + 180) = v53;
LABEL_32:
  *(_BYTE *)(v42 + 192) = v53 ^ isEnemy ^ 1;
  data = v9->fields.data;
  if ( !data )
    goto LABEL_290;
  this = (BattleLogicFunction_o *)data->fields.battleEvent;
  if ( !this )
    goto LABEL_290;
  *(_DWORD *)(v42 + 184) = ((__int64 (__fastcall *)(BattleLogicFunction_o *, BuffEntity_o *, Il2CppMethodPointer))this->klass[1].vtable._1_Finalize.method)(
                             this,
                             v37,
                             this->klass[1].vtable._2_GetHashCode.methodPtr);
  ProgressTurnCond = BuffEntity__GetProgressTurnCond(v37, 0LL);
  if ( (ProgressTurnCond & 0x80000000) == 0 )
    *(_DWORD *)(v42 + 184) = ProgressTurnCond;
  *(_DWORD *)(v42 + 24) = DataVals__GetParam(dataVals_k__BackingField, 2, 0, 0LL);
  *(_DWORD *)(v42 + 28) = DataVals__GetParam(dataVals_k__BackingField, 3, 0, 0LL);
  v210->fields.popDelay = DataVals__GetParam(dataVals_k__BackingField, 64, 0, 0LL);
  v56 = v37->fields.type;
  if ( !BuffList_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(BuffList_TypeInfo);
  if ( BuffList__CheckType(143, v56, 0LL) )
    goto LABEL_48;
  v57 = v37->fields.type;
  if ( !BuffList_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(BuffList_TypeInfo);
  if ( BuffList__CheckType(145, v57, 0LL) )
    goto LABEL_48;
  v58 = v37->fields.type;
  if ( !BuffList_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(BuffList_TypeInfo);
  if ( BuffList__CheckType(146, v58, 0LL) )
    goto LABEL_48;
  v59 = v37->fields.type;
  if ( !BuffList_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(BuffList_TypeInfo);
  if ( BuffList__CheckType(147, v59, 0LL) )
  {
LABEL_48:
    tdCommandTypeChange = args->fields.tdCommandTypeChange;
    if ( (tdCommandTypeChange & 0x80000000) == 0 )
      *(_DWORD *)(v42 + 28) = tdCommandTypeChange;
  }
  v199 = p_isEnemy;
  *(_DWORD *)(v42 + 52) = DataVals__GetParam(dataVals_k__BackingField, 8, 0, 0LL);
  *(_DWORD *)(v42 + 56) = DataVals__GetParam(dataVals_k__BackingField, 9, 0, 0LL);
  v61 = sub_1B900B8(int___TypeInfo, 2LL);
  *(_QWORD *)(v42 + 40) = v61;
  sub_1B8FFB4((ServantStatusBattleListViewItem_o *)(v42 + 40), v61, v62, v63);
  v64 = *(_QWORD *)(v42 + 40);
  this = (BattleLogicFunction_o *)DataVals__GetParam(dataVals_k__BackingField, 3, 0, 0LL);
  if ( !v64 )
    goto LABEL_290;
  if ( !*(_DWORD *)(v64 + 24) )
    goto LABEL_291;
  *(_DWORD *)(v64 + 32) = (_DWORD)this;
  v65 = *(_QWORD *)(v42 + 40);
  this = (BattleLogicFunction_o *)DataVals__GetParam(dataVals_k__BackingField, 4, 0, 0LL);
  if ( !v65 )
    goto LABEL_290;
  if ( *(_DWORD *)(v65 + 24) <= 1u )
    goto LABEL_291;
  v205 = v8;
  *(_DWORD *)(v65 + 36) = (_DWORD)this;
  v66 = v37->fields.type;
  if ( !BuffList_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(BuffList_TypeInfo);
  this = (BattleLogicFunction_o *)BuffList__CheckType(135, v66, 0LL);
  if ( ((unsigned __int8)this & 1) != 0 )
  {
    v67 = v9->fields.data;
    if ( !v67 )
      goto LABEL_290;
    battle_ent = v67->fields.battle_ent;
    if ( !battle_ent )
      goto LABEL_290;
    userId = battle_ent->fields.userId;
    eventId = battle_ent->fields.eventId;
    this = (BattleLogicFunction_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_374C890 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !this )
      goto LABEL_290;
    this = (BattleLogicFunction_o *)DataManager__GetMasterData_object_(
                                      (DataManager_o *)this,
                                      (const MethodInfo_2E8E21C *)Method_DataManager_GetMasterData_EventPointBuffMaster___);
    if ( !this )
      goto LABEL_290;
    v71 = (EventPointBuffMaster_o *)this;
    EventPointGroupId = EventPointBuffMaster__GetEventPointGroupId(
                          (EventPointBuffMaster_o *)this,
                          eventId,
                          funcEnt->fields.id,
                          0,
                          0LL);
    this = (BattleLogicFunction_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_374C890 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !this )
      goto LABEL_290;
    this = (BattleLogicFunction_o *)DataManager__GetMasterData_object_(
                                      (DataManager_o *)this,
                                      (const MethodInfo_2E8E21C *)Method_DataManager_GetMasterData_UserEventPointMaster___);
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
                                        v71,
                                        EntityDefinitely->fields.eventId,
                                        EventPointGroupId,
                                        0LL);
      if ( !this )
        goto LABEL_290;
      logic = (int)this->fields.logic;
      if ( logic >= 1 )
      {
        v76 = 0;
        v77 = 0LL;
        do
        {
          if ( logic == v76 )
            goto LABEL_291;
          v78 = *((_QWORD *)&this->fields.logictarget + v76);
          if ( !v78 )
            goto LABEL_290;
          if ( value < *(int *)(v78 + 28) )
            break;
          ++v76;
          v77 = v78;
        }
        while ( logic != v76 );
        if ( v77 )
          *(_DWORD *)(v42 + 28) += *(_DWORD *)(v77 + 64);
      }
    }
  }
  if ( DataVals__IsExistSnapShotParamAddIndv(dataVals_k__BackingField, 0LL) )
  {
    v79 = *(_DWORD *)(v42 + 28);
    v80 = v9->fields.data;
    v81 = (BattleBuffData_CheckIndividualitiesData_o *)sub_1B9025C(BattleBuffData_CheckIndividualitiesData_TypeInfo);
    BattleBuffData_CheckIndividualitiesData___ctor(v81, v39, ServantData, 0LL, 0LL, 0LL, 0LL, 0LL);
    v82 = (BattleBuffData_ParamAdd_o *)sub_1B9025C(BattleBuffData_ParamAdd_TypeInfo);
    BattleBuffData_ParamAdd___ctor_42685676(v82, dataVals_k__BackingField, 0LL);
    *(_DWORD *)(v42 + 28) = BattleBuffData__GetTotalParamAddValue((BattleBuffData_BuffData_o *)v42, v80, v81, v82, 0LL)
                          + v79;
  }
  if ( DataVals__isParam(dataVals_k__BackingField, 26, 0LL) && DataVals__isParam(dataVals_k__BackingField, 27, 0LL) )
  {
    v83 = sub_1B900B8(int___TypeInfo, 2LL);
    *(_QWORD *)(v42 + 104) = v83;
    sub_1B8FFB4((ServantStatusBattleListViewItem_o *)(v42 + 104), v83, v84, v85);
    v86 = *(_QWORD *)(v42 + 104);
    this = (BattleLogicFunction_o *)DataVals__GetParam(dataVals_k__BackingField, 26, 0, 0LL);
    if ( !v86 )
      goto LABEL_290;
    if ( !*(_DWORD *)(v86 + 24) )
      goto LABEL_291;
    *(_DWORD *)(v86 + 32) = (_DWORD)this;
    v87 = *(_QWORD *)(v42 + 104);
    this = (BattleLogicFunction_o *)DataVals__GetParam(dataVals_k__BackingField, 27, 0, 0LL);
    if ( !v87 )
      goto LABEL_290;
    if ( *(_DWORD *)(v87 + 24) <= 1u )
      goto LABEL_291;
    *(_DWORD *)(v87 + 36) = (_DWORD)this;
  }
  *(_DWORD *)(v42 + 64) = DataVals__GetParam(dataVals_k__BackingField, 15, 0, 0LL);
  *(_DWORD *)(v42 + 344) = DataVals__GetClassIconAuraEffectId(dataVals_k__BackingField, 0LL);
  if ( DataVals__GetParam(dataVals_k__BackingField, 11, 0, 0LL) >= 1 )
    *(_DWORD *)(v42 + 60) = v206;
  if ( DataVals__GetParam(dataVals_k__BackingField, 46, 0, 0LL) >= 1 )
    BattleBuffData_BuffData__onState((BattleBuffData_BuffData_o *)v42, 0x8000, 0LL);
  if ( DataVals__GetParam(dataVals_k__BackingField, 50, 0, 0LL) >= 1 )
    BattleBuffData_BuffData__onState((BattleBuffData_BuffData_o *)v42, 0x10000, 0LL);
  if ( DataVals__GetParam(dataVals_k__BackingField, 88, 0, 0LL) >= 1 )
    BattleBuffData_BuffData__onState((BattleBuffData_BuffData_o *)v42, 0x80000, 0LL);
  if ( DataVals__GetParam(dataVals_k__BackingField, 90, 0, 0LL) >= 1 )
    BattleBuffData_BuffData__onState((BattleBuffData_BuffData_o *)v42, 0x100000, 0LL);
  if ( DataVals__GetParam(dataVals_k__BackingField, 65, 0, 0LL) >= 1 )
    BattleBuffData_BuffData__onState((BattleBuffData_BuffData_o *)v42, 0x40000, 0LL);
  if ( DataVals__GetParam(dataVals_k__BackingField, 143, 0, 0LL) >= 1 )
    BattleBuffData_BuffData__onState((BattleBuffData_BuffData_o *)v42, 0x2000000, 0LL);
  if ( DataVals__isParam(dataVals_k__BackingField, 42, 0LL) )
  {
    Param = DataVals__GetParam(dataVals_k__BackingField, 42, 0, 0LL);
    v89 = sub_1B9025C(BattleBuffData_FieldAliveCondData_TypeInfo);
    BattleBuffData_FieldAliveCondData___ctor((BattleBuffData_FieldAliveCondData_o *)v89, 0LL);
    if ( !v89 )
      goto LABEL_290;
    v90 = *v199;
    *(_BYTE *)(v89 + 17) = Param > 0;
    *(_BYTE *)(v89 + 16) = v90;
    if ( !System_Math_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(System_Math_TypeInfo);
    if ( Param >= 0 )
      v91 = Param;
    else
      v91 = -Param;
    *(_DWORD *)(v89 + 20) = v91;
    TargetIndiv = BuffEntity__GetTargetIndiv(v37, 0LL);
    *(_QWORD *)(v89 + 24) = TargetIndiv;
    sub_1B8FFB4((ServantStatusBattleListViewItem_o *)(v89 + 24), (int32_t)TargetIndiv, v93, v94);
    *(_BYTE *)(v89 + 32) = BuffEntity__IsIncludeIgnoreIndividuality(v37, 0LL);
    *(_QWORD *)(v42 + 152) = v89;
    sub_1B8FFB4((ServantStatusBattleListViewItem_o *)(v42 + 152), v89, v95, v96);
    args->fields.updateField = 1;
  }
  v97 = v37->fields.type;
  if ( !BuffList_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(BuffList_TypeInfo);
  if ( BuffList__IsIntervalPossibleBuff(v97, 0LL) )
  {
    IntervalData = DataVals__GetIntervalData(dataVals_k__BackingField, 0LL);
    *(_QWORD *)(v42 + 360) = IntervalData;
    sub_1B8FFB4((ServantStatusBattleListViewItem_o *)(v42 + 360), (int32_t)IntervalData, v99, v100);
  }
  if ( BattleBuffData__CheckInvalidSacrificeIndiv((BattleBuffData_BuffData_o *)v42, 0LL) )
    args->fields.updateField = 1;
  ParamArray = DataVals__GetParamArray(dataVals_k__BackingField, 114, 0LL);
  *(_QWORD *)(v42 + 328) = ParamArray;
  sub_1B8FFB4((ServantStatusBattleListViewItem_o *)(v42 + 328), (int32_t)ParamArray, v102, v103);
  *(_DWORD *)(v42 + 208) = BuffEntity__GetCardEffectId(v37, 0LL);
  v104 = v37->fields.type;
  if ( !BuffList_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(BuffList_TypeInfo);
  if ( BuffList__CheckType(144, v104, 0LL) )
  {
    RelationId = BuffEntity__getRelationId(v37, 0LL);
    v106 = (BattleBuffData_RelationOverwriteData_o *)sub_1B9025C(BattleBuffData_RelationOverwriteData_TypeInfo);
    BattleBuffData_RelationOverwriteData___ctor(v106, 0LL);
    if ( RelationId >= 1 )
    {
      this = (BattleLogicFunction_o *)BuffEntity__getRelationId(v37, 0LL);
      if ( !v106 )
        goto LABEL_290;
      v106->fields.id = (int)this;
      v109 = BattleDataDefine_TypeInfo;
      if ( !BattleDataDefine_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(BattleDataDefine_TypeInfo);
        v109 = BattleDataDefine_TypeInfo;
      }
      v106->fields.atkPriority = BuffEntity__getAtkRelationPriority(
                                   v37,
                                   v109->static_fields->OVERWRITE_ATK_RATE_PRIORITY,
                                   0LL);
      v106->fields.defPriority = BuffEntity__getDefRelationPriority(
                                   v37,
                                   BattleDataDefine_TypeInfo->static_fields->OVERWRITE_DEF_RATE_PRIORITY,
                                   0LL);
    }
    *(_QWORD *)(v42 + 168) = v106;
    sub_1B8FFB4((ServantStatusBattleListViewItem_o *)(v42 + 168), (int32_t)v106, v107, v108);
  }
  v110 = v37->fields.type;
  if ( !BuffList_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(BuffList_TypeInfo);
  if ( BuffList__CheckType(154, v110, 0LL) )
  {
    this = (BattleLogicFunction_o *)BattleServantData__get_BuffData(ServantData, 0LL);
    if ( !this )
      goto LABEL_290;
    this = (BattleLogicFunction_o *)this->fields.wkStr;
    if ( !this )
      goto LABEL_290;
    BattleBuffData_SkillRankChangeData__UpdateAddRightAfter((BattleBuffData_SkillRankChangeData_o *)this, 1, 0LL);
    BattleActionData_BuffData__OnUpdateBuffType(v210, 1, 0LL);
  }
  v111 = BuffEntity__checkBuffType(v37, 7, 0LL);
  if ( v39 && v111 )
  {
    UpDownGiveHeal = BattleServantData__getUpDownGiveHeal(v39, ServantData, 0LL);
    v113 = BattleUtility__FloorToInt(UpDownGiveHeal * (float)*(int *)(v42 + 28), 0LL);
    v114 = *(_DWORD *)(v42 + 52);
    *(_DWORD *)(v42 + 28) = v113;
    v115 = BattleUtility__FloorToInt(UpDownGiveHeal * (float)v114, 0LL);
    v116 = *(_DWORD *)(v42 + 56);
    *(_DWORD *)(v42 + 52) = v115;
    *(_DWORD *)(v42 + 56) = BattleUtility__FloorToInt(UpDownGiveHeal * (float)v116, 0LL);
    BattleServantData__getIndividualities(v39, 0LL, 1, 0, 0LL);
  }
  *(_BYTE *)(v42 + 32) = 0;
  *(_BYTE *)(v42 + 33) = BattleLogicFunction_ProcListInArgs__get_IsPassive(args, 0LL);
  if ( DataVals__isParam(dataVals_k__BackingField, 23, 0LL) )
    *(_BYTE *)(v42 + 33) = 1;
  if ( DataVals__isParam(dataVals_k__BackingField, 24, 0LL) )
    *(_BYTE *)(v42 + 33) = 0;
  if ( dataVals_k__BackingField->fields.flgBoost )
    BattleBuffData_BuffData__onState((BattleBuffData_BuffData_o *)v42, 2, 0LL);
  if ( DataVals__isRatioHpRange(dataVals_k__BackingField, 0LL) )
  {
    *(_DWORD *)(v42 + 72) = DataVals__GetParam(dataVals_k__BackingField, 20, 0, 0LL);
    *(_DWORD *)(v42 + 76) = DataVals__GetParam(dataVals_k__BackingField, 21, 0, 0LL);
    *(_DWORD *)(v42 + 80) = DataVals__GetParam(dataVals_k__BackingField, 30, 0, 0LL);
    *(_DWORD *)(v42 + 84) = DataVals__GetParam(dataVals_k__BackingField, 31, 0, 0LL);
  }
  else if ( DataVals__isParam(dataVals_k__BackingField, 20, 0LL) )
  {
    *(_DWORD *)(v42 + 72) = DataVals__GetParam(dataVals_k__BackingField, 20, 0, 0LL);
  }
  else if ( DataVals__isParam(dataVals_k__BackingField, 21, 0LL) )
  {
    *(_DWORD *)(v42 + 76) = DataVals__GetParam(dataVals_k__BackingField, 21, 0, 0LL);
  }
  if ( DataVals__isParamAddIndividuality(dataVals_k__BackingField, 0LL) )
  {
    v117 = DataVals__GetParamArray(dataVals_k__BackingField, 69, 0LL);
    *(_QWORD *)(v42 + 224) = v117;
    sub_1B8FFB4((ServantStatusBattleListViewItem_o *)(v42 + 224), (int32_t)v117, v118, v119);
    v120 = DataVals__GetParamArray(dataVals_k__BackingField, 70, 0LL);
    *(_QWORD *)(v42 + 232) = v120;
    sub_1B8FFB4((ServantStatusBattleListViewItem_o *)(v42 + 232), (int32_t)v120, v121, v122);
    v123 = DataVals__GetParamArray(dataVals_k__BackingField, 71, 0LL);
    *(_QWORD *)(v42 + 240) = v123;
    sub_1B8FFB4((ServantStatusBattleListViewItem_o *)(v42 + 240), (int32_t)v123, v124, v125);
    *(_DWORD *)(v42 + 248) = DataVals__GetParam(dataVals_k__BackingField, 72, 0, 0LL);
    *(_DWORD *)(v42 + 252) = DataVals__GetParam(dataVals_k__BackingField, 59, 0, 0LL);
    *(_DWORD *)(v42 + 268) = DataVals__GetParam(dataVals_k__BackingField, 60, 0, 0LL);
  }
  if ( DataVals__IsParamAddBattlePoint(dataVals_k__BackingField, 0LL) )
  {
    *(_DWORD *)(v42 + 384) = DataVals__GetParam(dataVals_k__BackingField, 181, 0, 0LL);
    *(_DWORD *)(v42 + 388) = DataVals__GetParam(dataVals_k__BackingField, 182, 0, 0LL);
  }
  v126 = v37->fields.type;
  if ( !BuffList_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(BuffList_TypeInfo);
  if ( BuffList__CheckType(162, v126, 0LL) )
  {
    UpBuffRateBuffTypeList = BuffEntity__GetUpBuffRateBuffTypeList(v37, 0LL);
    *(_QWORD *)(v42 + 256) = UpBuffRateBuffTypeList;
    sub_1B8FFB4((ServantStatusBattleListViewItem_o *)(v42 + 256), (int32_t)UpBuffRateBuffTypeList, v128, v129);
    *(_DWORD *)(v42 + 264) = BuffEntity__GetMaxBuffRate(v37, 0LL);
  }
  if ( DataVals__isParam(dataVals_k__BackingField, 22, 0LL) )
    BattleBuffData_BuffData__onState((BattleBuffData_BuffData_o *)v42, 64, 0LL);
  if ( DataVals__isParam(dataVals_k__BackingField, 25, 0LL) )
    BattleBuffData_BuffData__onState((BattleBuffData_BuffData_o *)v42, 128, 0LL);
  this = (BattleLogicFunction_o *)DataVals__isShowState(dataVals_k__BackingField, 0LL);
  if ( ((unsigned __int8)this & 1) != 0 )
  {
    LODWORD(mainAction) = DataVals__GetParam(dataVals_k__BackingField, 14, 0, 0LL);
LABEL_154:
    BattleBuffData_BuffData__setShowState((BattleBuffData_BuffData_o *)v42, (int32_t)mainAction, 0LL);
    goto LABEL_171;
  }
  if ( *(_BYTE *)(v42 + 33) )
  {
    externalArg = args->fields.externalArg;
    if ( !externalArg )
      goto LABEL_290;
    if ( externalArg->fields.isWarBoard )
    {
      if ( !v39 )
        goto LABEL_290;
      if ( v39->fields.isEnemy && externalArg->fields.grantSkillType == 12 )
      {
        LODWORD(mainAction) = BuffEntity__GetShowStateWarBoardEnemyEquip(v37, 0, 0LL);
        if ( (_DWORD)mainAction )
          goto LABEL_154;
        if ( !DataManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
        this = (BattleLogicFunction_o *)DataManager__GetMaster_object_((const MethodInfo_2E8E1C8 *)Method_DataManager_GetMaster_BuffTypeDetailMaster___);
        if ( !this )
          goto LABEL_290;
        this = (BattleLogicFunction_o *)DataMasterBase_object__object__int___TryGetEntity(
                                          (DataMasterBase_TMaster__TEntity__PKType__o *)this,
                                          &entity,
                                          v37->fields.type,
                                          (const MethodInfo_312C5FC *)Method_DataMasterBase_BuffTypeDetailMaster__BuffTypeDetailEntity__int__TryGetEntity__);
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
    v131 = v9->fields.data;
    if ( !v131 )
      goto LABEL_290;
    this = (BattleLogicFunction_o *)v131->fields.battleEvent;
    if ( !this )
      goto LABEL_290;
    ((void (__fastcall *)(BattleLogicFunction_o *, __int64, Il2CppMethodPointer))this->klass[1].vtable._2_GetHashCode.method)(
      this,
      v42,
      this->klass[1].vtable._3_ToString.methodPtr);
  }
LABEL_171:
  if ( DataVals__IsOpponentOnly(dataVals_k__BackingField, 0LL) )
    BattleBuffData_BuffData__onState((BattleBuffData_BuffData_o *)v42, 2048, 0LL);
  if ( DataVals__isShowCommand(dataVals_k__BackingField, 0LL) )
    BattleBuffData_BuffData__onState((BattleBuffData_BuffData_o *)v42, 512, 0LL);
  if ( DataVals__IsAddIndividualty(dataVals_k__BackingField, 0LL) )
  {
    AddIndividualty = DataVals__GetAddIndividualty(dataVals_k__BackingField, 0LL);
    *(_QWORD *)(v42 + 120) = AddIndividualty;
    sub_1B8FFB4((ServantStatusBattleListViewItem_o *)(v42 + 120), (int32_t)AddIndividualty, v133, v134);
  }
  if ( DataVals__IsAddLinkageTargetIndividualty(dataVals_k__BackingField, 0LL) )
  {
    LinkageTargetIndividualty = DataVals__GetLinkageTargetIndividualty(dataVals_k__BackingField, 0LL);
    *(_QWORD *)(v42 + 128) = LinkageTargetIndividualty;
    sub_1B8FFB4((ServantStatusBattleListViewItem_o *)(v42 + 128), (int32_t)LinkageTargetIndividualty, v136, v137);
  }
  this = (BattleLogicFunction_o *)funcTarget->fields._funcUnit_k__BackingField;
  if ( !this )
    goto LABEL_290;
  if ( BattleLogicFunctionProcess_FunctionUnitCheck__HasLinkedFuncUnit(
         (BattleLogicFunctionProcess_FunctionUnitCheck_o *)this,
         0LL)
    && DataVals__IsBehaveAsFamilyBuff(dataVals_k__BackingField, 0LL) )
  {
    BattleLogicFunction__BehaveLinkageBuffAsFamily(v9, (BattleBuffData_BuffData_o *)v42, funcTarget, v138);
  }
  if ( DataVals__isParam(dataVals_k__BackingField, 98, 0LL) )
    BattleBuffData_BuffData__onState((BattleBuffData_BuffData_o *)v42, 0x800000, 0LL);
  if ( DataVals__isParam(dataVals_k__BackingField, 99, 0LL) )
    BattleBuffData_BuffData__onState((BattleBuffData_BuffData_o *)v42, 0x1000000, 0LL);
  if ( BuffEntity__getAppearanceId(v37, 0LL) >= 1 )
  {
    this = (BattleLogicFunction_o *)BattleServantData__isShiftableServant(ServantData, 0LL);
    if ( ((unsigned __int8)this & 1) != 0 )
      goto LABEL_194;
    v139 = v9->fields.data;
    if ( !v139 )
      goto LABEL_290;
    this = (BattleLogicFunction_o *)v139->fields.battleEvent;
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
      BattleBuffData_BuffData__onState((BattleBuffData_BuffData_o *)v42, 256, 0LL);
    }
  }
  *(_BYTE *)(v42 + 370) = DataVals__IsEqualsTo1(dataVals_k__BackingField, 158, 0LL);
  *(_DWORD *)(v42 + 276) = DataVals__GetParam(dataVals_k__BackingField, 92, 0, 0LL);
  *(_DWORD *)(v42 + 280) = DataVals__GetParam(dataVals_k__BackingField, 93, 0, 0LL);
  *(_DWORD *)(v42 + 284) = DataVals__GetParam(dataVals_k__BackingField, 94, 0, 0LL);
  *(_BYTE *)(v42 + 288) = DataVals__GetParam(dataVals_k__BackingField, 95, 0, 0LL) == 1;
  *(_BYTE *)(v42 + 289) = DataVals__GetParam(dataVals_k__BackingField, 96, 0, 0LL) == 1;
  ValsList = DataVals__GetValsList(dataVals_k__BackingField, 100, 0LL);
  *(_QWORD *)(v42 + 304) = ValsList;
  sub_1B8FFB4((ServantStatusBattleListViewItem_o *)(v42 + 304), (int32_t)ValsList, v141, v142);
  v143 = DataVals__GetParam(dataVals_k__BackingField, 5, 0, 0LL);
  v144 = *(_DWORD *)(v42 + 60);
  if ( v143 )
    v145 = v143;
  else
    v145 = 1000;
  *(_DWORD *)(v42 + 48) = v145;
  if ( v144 < 1 )
    goto LABEL_204;
  v146 = (UnityEngine_Object_o *)v9->fields.logic;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(v146, 0LL, 0LL) )
  {
    this = (BattleLogicFunction_o *)v9->fields.logic;
    if ( !this )
      goto LABEL_290;
    v147 = BattleLogic__checkInField((BattleLogic_o *)this, *(_DWORD *)(v42 + 60), 0LL);
  }
  else
  {
LABEL_204:
    v147 = 1;
  }
  v148 = v37->fields.type;
  if ( !BuffList_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(BuffList_TypeInfo);
  if ( BuffList__CheckAccumulation(v148, 0LL) )
    BattleServantData__resetAccumulationDamage(ServantData, 0LL);
  mainAction = userCommandCodeId;
  *(_QWORD *)(v42 + 88) = userCommandCodeId;
  if ( (__int64)userCommandCodeId >= 1 )
  {
    this = (BattleLogicFunction_o *)v9->fields.data;
    if ( !this )
      goto LABEL_290;
    UserCommandCode = BattleData__getUserCommandCode((BattleData_o *)this, (int64_t)userCommandCodeId, 0LL);
    if ( UserCommandCode )
      *(_DWORD *)(v42 + 160) = UserCommandCode->fields.commandCodeId;
  }
  *(_QWORD *)(v42 + 348) = *(_QWORD *)&v205->fields.commandAssistId;
  ((void (__fastcall *)(BattleLogicFunctionProcess_FunctionTargetCheck_o *, __int64, Il2CppMethodPointer))funcTarget->klass->vtable._6_ApplyPrevSaveBuffData.method)(
    funcTarget,
    v42,
    funcTarget->klass->vtable._7_MakeActionBuffData.methodPtr);
  MaxHp = BattleServantData__getMaxHp(ServantData, 0LL);
  userCommandCodeIda = ((__int64 (__fastcall *)(BattleServantData_o *, Il2CppMethodPointer))ServantData->klass->vtable._9_get_hp.method)(
                         ServantData,
                         ServantData->klass->vtable._10_set_hp.methodPtr);
  if ( !v147 )
    goto LABEL_219;
  v151 = v37->fields.type;
  if ( !BuffList_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(BuffList_TypeInfo);
  if ( BuffList__CheckUpdateHp(v151, 0LL) )
  {
    v210->fields.procType = 2;
    if ( BattleServantData__isLogicResultAlive(ServantData, 0LL) )
    {
      v152 = 1LL;
    }
    else
    {
      if ( BattleServantData__isGuts(ServantData, 0LL) )
      {
        v153 = ServantData->fields.uniqueId;
        IsCommandSideEffect = BattleLogicFunction_ProcListInArgs__get_IsCommandSideEffect(args, 0LL);
        mainAction = BattleLogicFunction__getNoEffectObject(
                       v9,
                       v153,
                       funcIndex,
                       dataVals_k__BackingField,
                       IsCommandSideEffect,
                       0LL,
                       0LL,
                       v155);
        this = (BattleLogicFunction_o *)v204;
        if ( !v204 )
          goto LABEL_290;
        BattleActionData__addAction(v204, mainAction, 0LL);
      }
      v152 = 0LL;
    }
    ((void (__fastcall *)(BattleLogicFunctionProcess_FunctionTargetCheck_o *, BattleActionData_BuffData_o *, __int64, __int64, __int64, Il2CppMethodPointer))funcTarget->klass->vtable._8_AddBuff.method)(
      funcTarget,
      v210,
      v42,
      1LL,
      v152,
      funcTarget->klass->vtable._9_AfterAddBuffProc.methodPtr);
    this = (BattleLogicFunction_o *)v204;
    if ( !v204 )
      goto LABEL_290;
    BattleActionData__addReflectLogicResultServantId(v204, uniqueId, 0LL);
    v156 = (BattleActionEffect_AddChangeMaxHpBuff_o *)sub_1B9025C(BattleActionEffect_AddChangeMaxHpBuff_TypeInfo);
    BattleActionEffect_AddChangeMaxHpBuff___ctor(v156, 0LL);
    this = (BattleLogicFunction_o *)sub_1B900B8(BattleBuffData_BuffData___TypeInfo, 1LL);
    if ( !this )
      goto LABEL_290;
    v157 = this;
    this = (BattleLogicFunction_o *)sub_1B9014C(v42, this->klass->_1.element_class);
    if ( !this )
    {
      v198 = sub_1B90290(0LL);
      sub_1B90138(v198, 0LL);
    }
    if ( !LODWORD(v157->fields.logic) )
      goto LABEL_291;
    v157->fields.logictarget = (struct BattleLogicTarget_o *)v42;
    sub_1B8FFB4((ServantStatusBattleListViewItem_o *)&v157->fields.logictarget, v42, v158, v159);
    this = (BattleLogicFunction_o *)BattleServantData__getNowHp(ServantData, 0LL);
    if ( !v156 )
      goto LABEL_290;
    v160 = (BattleActionEffect_Base_o *)((__int64 (__fastcall *)(BattleActionEffect_AddChangeMaxHpBuff_o *, BattleLogicFunction_o *, _QWORD, _QWORD, Il2CppMethodPointer))v156->klass->vtable._7_InitBuff.method)(
                                          v156,
                                          v157,
                                          uniqueId,
                                          (unsigned int)((_DWORD)this - userCommandCodeIda),
                                          v156->klass->vtable._8_PartialPreActionProc.methodPtr);
    BattleActionData_BuffData__SetActionEffectProc(v210, v160, 0LL);
  }
  else
  {
LABEL_219:
    ((void (__fastcall *)(BattleLogicFunctionProcess_FunctionTargetCheck_o *, BattleActionData_BuffData_o *, __int64, bool, _QWORD, Il2CppMethodPointer))funcTarget->klass->vtable._8_AddBuff.method)(
      funcTarget,
      v210,
      v42,
      v147,
      0LL,
      funcTarget->klass->vtable._9_AfterAddBuffProc.methodPtr);
  }
  id = v37->fields.id;
  if ( id == ConstantMaster__getValue((System_String_o *)StringLiteral_13292/*"TAMAMOCAT_STUN_BUFF_ID"*/, 0LL) )
  {
    v162 = (System_Collections_Generic_List_int__o *)sub_1B9025C(System_Collections_Generic_List_int__TypeInfo);
    System_Collections_Generic_List_int____ctor(
      v162,
      (const MethodInfo_34F3148 *)Method_System_Collections_Generic_List_int___ctor__);
    v212 = 1;
    for ( i = System_Int32__ToString((int32_t)&v212, 0LL); ; i = System_Int32__ToString((int32_t)&v212, 0LL) )
    {
      v164 = System_String__Concat_61787092((System_String_o *)StringLiteral_13293/*"TAMAMOCAT_TREASURE_DEVICE_ID_"*/, i, 0LL);
      if ( ConstantMaster__getValue(v164, 0LL) == -1 )
        break;
      v165 = System_Int32__ToString((int32_t)&v212, 0LL);
      v166 = System_String__Concat_61787092((System_String_o *)StringLiteral_13293/*"TAMAMOCAT_TREASURE_DEVICE_ID_"*/, v165, 0LL);
      this = (BattleLogicFunction_o *)ConstantMaster__getValue(v166, 0LL);
      if ( (_DWORD)this == treasureDvcId )
      {
        if ( !v39 )
          goto LABEL_290;
        BattleServantData__SetIsSleepWaitMode(v39, 1, 0LL);
      }
      ++v212;
    }
  }
  this = (BattleLogicFunction_o *)v9->fields.data;
  if ( !this )
    goto LABEL_290;
  QuestIndividualities = BattleData__getQuestIndividualities((BattleData_o *)this, 0LL);
  v168 = (UnityEngine_Object_o *)v9->fields.logic;
  v169 = QuestIndividualities;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  this = (BattleLogicFunction_o *)UnityEngine_Object__op_Inequality(v168, 0LL, 0LL);
  perf = 0LL;
  if ( ((unsigned __int8)this & 1) != 0 )
  {
    v171 = v9->fields.logic;
    if ( !v171 )
      goto LABEL_290;
    perf = v171->fields.perf;
  }
  BattleServantData__updateConditionsBuff(ServantData, v169, perf, 0LL);
  if ( BuffEntity__checkBuffType(v37, 133, 0LL) || *(_QWORD *)(v42 + 312) )
  {
    v172 = (UnityEngine_Object_o *)v9->fields.logic;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    if ( UnityEngine_Object__op_Inequality(v172, 0LL, 0LL) )
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
    v173 = (int)this->fields.logic;
    v174 = this;
    if ( v173 >= 1 )
    {
      v175 = 0;
      while ( v175 < v173 )
      {
        this = (BattleLogicFunction_o *)*((_QWORD *)&v174->fields.logictarget + (int)v175);
        if ( !this )
          goto LABEL_290;
        BattleServantData__updateBuff((BattleServantData_o *)this, 1, 1, 0LL);
        v173 = (int)v174->fields.logic;
        if ( (int)++v175 >= v173 )
          goto LABEL_258;
      }
LABEL_291:
      sub_1B90274(this, mainAction);
    }
  }
LABEL_258:
  if ( BuffEntity__checkBuffType(v37, 206, 0LL) )
  {
    ShortenMaxCountArray = DataVals__GetShortenMaxCountArray(dataVals_k__BackingField, 0LL);
    *(_QWORD *)(v42 + 392) = ShortenMaxCountArray;
    sub_1B8FFB4((ServantStatusBattleListViewItem_o *)(v42 + 392), (int32_t)ShortenMaxCountArray, v177, v178);
  }
  v179 = v210;
  if ( BuffEntity__checkBuffType(v37, 208, 0LL) )
  {
    TargetFunctionIndividuality = DataVals__GetTargetFunctionIndividuality(dataVals_k__BackingField, 0LL);
    *(_QWORD *)(v42 + 400) = TargetFunctionIndividuality;
    sub_1B8FFB4((ServantStatusBattleListViewItem_o *)(v42 + 400), (int32_t)TargetFunctionIndividuality, v181, v182);
    TargetBuffIndividuality = DataVals__GetTargetBuffIndividuality(dataVals_k__BackingField, 0LL);
    *(_QWORD *)(v42 + 408) = TargetBuffIndividuality;
    sub_1B8FFB4((ServantStatusBattleListViewItem_o *)(v42 + 408), (int32_t)TargetBuffIndividuality, v184, v185);
  }
  this = (BattleLogicFunction_o *)BattleServantData__getMaxHp(ServantData, 0LL);
  if ( (int)this < MaxHp )
  {
    this = (BattleLogicFunction_o *)BuffEntity__checkBuffType(v37, 41, 0LL);
    if ( ((unsigned __int8)this & 1) != 0 )
    {
      v186 = ServantData->fields.maxhp;
      if ( !System_Math_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(System_Math_TypeInfo);
      this = (BattleLogicFunction_o *)System_Math__Max_62605740(0, userCommandCodeIda - v186, 0LL);
      *(_DWORD *)(v42 + 136) = (_DWORD)this;
    }
  }
  v187 = v9->fields.data;
  if ( !v187 )
    goto LABEL_290;
  this = (BattleLogicFunction_o *)v187->fields.battleEvent;
  if ( !this )
    goto LABEL_290;
  *(_BYTE *)(v42 + 212) = (*(__int64 (__fastcall **)(BattleLogicFunction_o *, __int64, BuffEntity_o *, DataVals_o *, _QWORD))&this->klass[1]._2.field_count)(
                            this,
                            v42,
                            v37,
                            dataVals_k__BackingField,
                            *(_QWORD *)&this->klass[1]._2.interfaces_count) & 1;
  if ( BuffEntity__checkBuffType(v37, 140, 0LL) )
  {
    buffData = ServantData->fields.buffData;
    v189 = (BattleBuffData_CheckIndividualitiesData_o *)sub_1B9025C(BattleBuffData_CheckIndividualitiesData_TypeInfo);
    BattleBuffData_CheckIndividualitiesData___ctor(v189, ServantData, 0LL, 0LL, 0LL, 0LL, 0LL, 0LL);
    if ( !buffData )
      goto LABEL_290;
    this = (BattleLogicFunction_o *)BattleBuffData__getBuffList_42492428(buffData, 83, v189, 1, 0, 0LL, 0LL, 0LL);
    if ( !this )
      goto LABEL_290;
    v179 = v210;
    if ( this->fields.logic )
      BattleLogicFunction__functionResetCommandCard(v9, (int32_t)mainAction, v190, v191, v192, v193);
  }
  if ( DataVals__IsOnParty(dataVals_k__BackingField, 0LL) )
    *(_DWORD *)(v42 + 272) = v206;
  v194 = BattleLogicFunction_ProcListInArgs__get_IsCommandSideEffect(args, 0LL);
  v195 = (BattleActionData_BuffData_o *)((__int64 (__fastcall *)(BattleLogicFunctionProcess_FunctionTargetCheck_o *, BattleActionData_BuffData_o *, __int64, FunctionEntity_o *, bool, Il2CppMethodPointer))funcTarget->klass->vtable._11_MakeAddActionBuffData.method)(
                                          funcTarget,
                                          v179,
                                          v42,
                                          funcEnt,
                                          v194,
                                          funcTarget->klass->vtable._12_GetConvertBuffEntity.methodPtr);
  if ( DataVals__IsProgressTurnOnBoard(dataVals_k__BackingField, 0LL) )
    *(_BYTE *)(v42 + 368) = 1;
  if ( DataVals__GetParam(dataVals_k__BackingField, 148, 0, 0LL) > 0
    || BuffEntity__IsDelayRemoveExpiredOnPlayerTurn(v37, 0LL) )
  {
    *(_BYTE *)(v42 + 369) = 1;
  }
  BattleLogicFunction__AfterAddedBuffProcess(v9, ServantData, v37, v196);
  if ( BuffEntity__getDamageRelease(v37, 0LL) >= 1
    && !BattleServantData__isLogicResultAlive(ServantData, 0LL)
    && (this = (BattleLogicFunction_o *)BattleServantData__isGuts(ServantData, 0LL), ((unsigned __int8)this & 1) != 0)
    || (this = (BattleLogicFunction_o *)BuffEntity__getDamageRelease(v37, 0LL), (_DWORD)this == -1) )
  {
    ServantData->fields.isGutsSleepRelease = 0;
  }
  if ( !v204
    || (BattleActionData__setBuffData(v204, v195, dataVals_k__BackingField, 0LL),
        (this = (BattleLogicFunction_o *)v9->fields.data) == 0LL) )
  {
LABEL_290:
    sub_1B9026C(this, mainAction);
  }
  BattleData__AddFreshBuffList((BattleData_o *)this, v195, 0LL);
  BattleActionData__addAction(v205, v204, 0LL);
  ((void (__fastcall *)(BattleLogicFunctionProcess_FunctionTargetCheck_o *, BattleActionData_o *, BattleActionData_BuffData_o *, __int64, Il2CppMethodPointer))funcTarget->klass->vtable._9_AfterAddBuffProc.method)(
    funcTarget,
    v205,
    v195,
    v42,
    funcTarget->klass->vtable._10_MakeWrapTarget.methodPtr);
  return (BattleBuffData_BuffData_o *)v42;
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
  int32_t v24; // w3
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
  if ( (byte_4A729B8 & 1) == 0 )
  {
    sub_1B90010(&BattleActionData_TypeInfo, mainAction);
    sub_1B90010(&EnemySimpleHpData_TypeInfo, v10);
    sub_1B90010(&System_Math_TypeInfo, v11);
    sub_1B90010(&BattleActionData_ShiftServant_TypeInfo, v12);
    this = (BattleLogicFunction_o *)sub_1B90010(&SimpleHpData_TypeInfo, v13);
    byte_4A729B8 = 1;
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
  v20 = sub_1B9025C(BattleActionData_TypeInfo);
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
  sub_1B8FFB4((ServantStatusBattleListViewItem_o *)(v20 + 64), v22, v23, v24);
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
  v30 = (BattleActionData_ShiftServant_o *)sub_1B9025C(BattleActionData_ShiftServant_TypeInfo);
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
  v31 = (SimpleHpData_o *)sub_1B9025C(SimpleHpData_TypeInfo);
  SimpleHpData___ctor(v31, targetSvtData, 0LL);
  if ( DataVals__IsEqualsTo1(dataVals_k__BackingField, 184, 0LL) )
  {
    MaxHp = BattleServantData__getMaxHp(targetSvtData, 0LL);
    BattleServantData__setHp(targetSvtData, MaxHp, 1, 0LL);
    v33 = (SimpleHpData_o *)sub_1B9025C(SimpleHpData_TypeInfo);
    SimpleHpData___ctor(v33, targetSvtData, 0LL);
    CurrentShiftPos = BattleServantData__GetCurrentShiftPos(targetSvtData, 0LL);
    BattleActionData_BaseShiftGaugeData__AddHpUpDataBeforeShift(shiftGauge, CurrentShiftPos, v31, v33, 0LL);
    v31 = v33;
  }
  v35 = (EnemySimpleHpData_o *)sub_1B9025C(EnemySimpleHpData_TypeInfo);
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
    Param = DataVals__GetParam(dataVals_k__BackingField, 58, 0, 0LL);
    ((void (__fastcall *)(BattleActionData_BaseShiftGaugeData_o *, BattleServantData_o *, bool, Il2CppMethodPointer))shiftGauge->klass->vtable._10_unknown.method)(
      shiftGauge,
      targetSvtData,
      Param > 0,
      shiftGauge->klass->vtable._11_unknown.methodPtr);
    v42 = (SimpleHpData_o *)sub_1B9025C(SimpleHpData_TypeInfo);
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
    sub_1B9026C(this, mainAction);
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
  int32_t v26; // w2
  int32_t v27; // w3
  __int64 v28; // x22
  int32_t v29; // w1
  int32_t v30; // w2
  int32_t v31; // w3
  int32_t v32; // w2
  int32_t v33; // w3
  int32_t v34; // w1
  int32_t v35; // w2
  int32_t v36; // w3
  int32_t v37; // w2
  int32_t v38; // w3
  int32_t v39; // w1
  int32_t v40; // w2
  int32_t v41; // w3
  int32_t v42; // w2
  int32_t v43; // w3
  int32_t v44; // w1
  struct BattleData_o *v45; // x8
  struct System_Int32_array *e_entryid; // x8
  char *v47; // x8
  _DWORD *v48; // x8
  int32_t v49; // w22
  int32_t v50; // t1
  BattleServantData_o *v51; // x23
  BattleActionData_o *v52; // x21
  int32_t uniqueId; // w23
  bool isEffectSummon; // w24
  int32_t Value; // [xsp+Ch] [xbp-54h] BYREF
  int32_t index[2]; // [xsp+10h] [xbp-50h] BYREF
  int32_t v58; // [xsp+18h] [xbp-48h] BYREF
  int32_t targetIndex; // [xsp+1Ch] [xbp-44h] BYREF

  if ( (byte_4A729A9 & 1) == 0 )
  {
    sub_1B90010(&BattleActionData_TypeInfo, *(_QWORD *)&playerId);
    sub_1B90010(&string___TypeInfo, v12);
    sub_1B90010(&StringLiteral_17111/*"baseVals.GetValue:"*/, v13);
    sub_1B90010(&StringLiteral_16100/*"] Index["*/, v14);
    sub_1B90010(&StringLiteral_362/*" 召喚！NPC["*/, v15);
    sub_1B90010(&StringLiteral_16103/*"] UniqueID["*/, v16);
    sub_1B90010(&StringLiteral_19703/*"functionCallServant>"*/, v17);
    sub_1B90010(&StringLiteral_16094/*"]"*/, v18);
    byte_4A729A9 = 1;
  }
  v58 = 0;
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
  System_String__Concat_61787092((System_String_o *)StringLiteral_17111/*"baseVals.GetValue:"*/, v24, 0LL);
  v58 = -1;
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
  v58 = (int)FieldSpace;
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
  data = sub_1B900B8(string___TypeInfo, 7LL);
  if ( !data )
    goto LABEL_33;
  v28 = data;
  if ( !*(_DWORD *)(data + 24) )
    goto LABEL_34;
  v29 = StringLiteral_362/*" 召喚！NPC["*/;
  *(_QWORD *)(data + 32) = StringLiteral_362/*" 召喚！NPC["*/;
  sub_1B8FFB4((ServantStatusBattleListViewItem_o *)(data + 32), v29, v26, v27);
  data = (__int64)System_Int32__ToString((int32_t)&v58, 0LL);
  if ( *(_DWORD *)(v28 + 24) <= 1u )
    goto LABEL_34;
  *(_QWORD *)(v28 + 40) = data;
  sub_1B8FFB4((ServantStatusBattleListViewItem_o *)(v28 + 40), data, v30, v31);
  if ( *(_DWORD *)(v28 + 24) <= 2u )
    goto LABEL_34;
  v34 = StringLiteral_16103/*"] UniqueID["*/;
  *(_QWORD *)(v28 + 48) = StringLiteral_16103/*"] UniqueID["*/;
  sub_1B8FFB4((ServantStatusBattleListViewItem_o *)(v28 + 48), v34, v32, v33);
  data = (__int64)System_Int32__ToString((int32_t)&index[1], 0LL);
  if ( *(_DWORD *)(v28 + 24) <= 3u )
    goto LABEL_34;
  *(_QWORD *)(v28 + 56) = data;
  sub_1B8FFB4((ServantStatusBattleListViewItem_o *)(v28 + 56), data, v35, v36);
  if ( *(_DWORD *)(v28 + 24) <= 4u
    || (v39 = StringLiteral_16100/*"] Index["*/,
        *(_QWORD *)(v28 + 64) = StringLiteral_16100/*"] Index["*/,
        sub_1B8FFB4((ServantStatusBattleListViewItem_o *)(v28 + 64), v39, v37, v38),
        data = (__int64)System_Int32__ToString((int32_t)index, 0LL),
        *(_DWORD *)(v28 + 24) <= 5u)
    || (*(_QWORD *)(v28 + 72) = data,
        sub_1B8FFB4((ServantStatusBattleListViewItem_o *)(v28 + 72), data, v40, v41),
        *(_DWORD *)(v28 + 24) <= 6u) )
  {
LABEL_34:
    sub_1B90274(data, *(_QWORD *)&playerId);
  }
  v44 = StringLiteral_16094/*"]"*/;
  *(_QWORD *)(v28 + 80) = StringLiteral_16094/*"]"*/;
  sub_1B8FFB4((ServantStatusBattleListViewItem_o *)(v28 + 80), v44, v42, v43);
  System_String__Concat_61800620((System_String_array *)v28, 0LL);
  data = (__int64)this->fields.data;
  if ( !data
    || (data = (__int64)BattleData__createSummonEnemyServantData(
                          (BattleData_o *)data,
                          index[1],
                          index[0],
                          v58,
                          0LL,
                          0LL,
                          0LL),
        (v45 = this->fields.data) == 0LL)
    || (e_entryid = v45->fields.e_entryid) == 0LL )
  {
LABEL_33:
    sub_1B9026C(data, *(_QWORD *)&playerId);
  }
  if ( targetIndex >= e_entryid->max_length )
    goto LABEL_34;
  v47 = (char *)e_entryid + 4 * targetIndex;
  v50 = *((_DWORD *)v47 + 8);
  v48 = v47 + 32;
  v49 = v50;
  v51 = (BattleServantData_o *)data;
  if ( !data )
    goto LABEL_33;
  *v48 = *(_DWORD *)(data + 24);
  *(_BYTE *)(data + 468) = 1;
  *(_BYTE *)(data + 533) = 1;
  BattleServantData__SetRemainActionCount((BattleServantData_o *)data, 1, 0LL);
  data = (__int64)this->fields.logic;
  if ( !data )
    goto LABEL_33;
  BattleLogic__addEnemyActPriorityList((BattleLogic_o *)data, v51, 0LL);
  v52 = (BattleActionData_o *)sub_1B9025C(BattleActionData_TypeInfo);
  BattleActionData___ctor(v52, 0LL);
  uniqueId = v51->fields.uniqueId;
  isEffectSummon = DataVals__isEffectSummon(baseVals, 0LL);
  data = DataVals__GetCallSvtEffectId(baseVals, 0LL);
  if ( !v52 )
    goto LABEL_33;
  BattleActionData__setSummonServant(v52, uniqueId, v49, funcIndex, isEffectSummon, data, 0LL);
  return v52;
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
  int32_t FieldPriority; // w0

  if ( (byte_4A729AC & 1) == 0 )
  {
    sub_1B90010(&BattleActionData_TypeInfo, *(_QWORD *)&actionId);
    byte_4A729AC = 1;
  }
  v8 = (BattleActionData_o *)sub_1B9025C(BattleActionData_TypeInfo);
  BattleActionData___ctor(v8, 0LL);
  if ( !v8 || (v8->fields.actorId = actionId, !baseVals) )
    sub_1B9026C(v9, v10);
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
  BattleActionData_o *v14; // x21
  BattleActionData_ShiftServant_o *v15; // x23

  if ( (byte_4A729AB & 1) == 0 )
  {
    sub_1B90010(&BattleActionData_TypeInfo, *(_QWORD *)&actionId);
    sub_1B90010(&BattleActionData_ShiftServant_TypeInfo, v11);
    byte_4A729AB = 1;
  }
  data = this->fields.data;
  if ( !data )
    goto LABEL_9;
  ServantData = BattleData__getServantData(data, targetId, 0LL);
  v14 = (BattleActionData_o *)sub_1B9025C(BattleActionData_TypeInfo);
  BattleActionData___ctor(v14, 0LL);
  if ( !v14 )
    goto LABEL_9;
  v14->fields.actorId = actionId;
  v15 = (BattleActionData_ShiftServant_o *)sub_1B9025C(BattleActionData_ShiftServant_TypeInfo);
  BattleActionData_ShiftServant___ctor(v15, 0, 0LL);
  if ( !v15
    || (BattleActionData_ShiftServant__setBeforeSvtData(v15, ServantData, 0LL), !ServantData)
    || (BattleServantData__setChangeServant(ServantData, this->fields.data, baseVals, 0LL),
        BattleActionData_ShiftServant__setCheckSvtData(v15, ServantData, 0LL),
        BattleActionData__setShiftServant(v14, v15, 0LL),
        (data = (BattleData_o *)this->fields.logic) == 0LL) )
  {
LABEL_9:
    sub_1B9026C(data, *(_QWORD *)&actionId);
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

  if ( (byte_4A72998 & 1) == 0 )
  {
    sub_1B90010(&BattleActionData_TypeInfo, *(_QWORD *)&playerId);
    byte_4A72998 = 1;
  }
  v15 = (BattleActionData_o *)sub_1B9025C(BattleActionData_TypeInfo);
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
    sub_1B9026C(data, v16);
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

  if ( (byte_4A729A1 & 1) == 0 )
  {
    sub_1B90010(&BattleActionData_TypeInfo, *(_QWORD *)&targetId);
    byte_4A729A1 = 1;
  }
  *absorptionCount = 0;
  v15 = (BattleActionData_o *)sub_1B9025C(BattleActionData_TypeInfo);
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
    sub_1B9026C(data, v16);
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
  __int64 v20; // x1
  BattleData_o *data; // x0
  BattleServantData_o *v22; // x28
  BattleServantData_o *v23; // x25
  const MethodInfo *v24; // x4
  char v25; // w20
  struct BattleData_o *v26; // x8
  BattleBuffData_o *buffData; // x29
  BattleBuffData_CheckIndividualitiesData_o *v28; // x20
  System_String_o *v29; // x0
  float UpDownGiveHeal; // s0
  const MethodInfo *v32; // [xsp+8h] [xbp-78h]
  FunctionEntity_o *v33; // [xsp+10h] [xbp-70h]
  int32_t digit; // [xsp+18h] [xbp-68h] BYREF
  int32_t healPoint; // [xsp+1Ch] [xbp-64h] BYREF

  LODWORD(v9) = overwriteHeal;
  if ( (byte_4A7299B & 1) == 0 )
  {
    sub_1B90010(&BattleActionData_TypeInfo, *(_QWORD *)&playerId);
    sub_1B90010(&BattleBuffData_CheckIndividualitiesData_TypeInfo, v17);
    sub_1B90010(&StringLiteral_19704/*"functionGainHp:"*/, v18);
    byte_4A7299B = 1;
  }
  digit = 0;
  v19 = (BattleActionData_o *)sub_1B9025C(BattleActionData_TypeInfo);
  BattleActionData___ctor(v19, 0LL);
  data = this->fields.data;
  if ( !data )
    goto LABEL_27;
  data = (BattleData_o *)BattleData__getServantData(data, playerId, 0LL);
  if ( !this->fields.data )
    goto LABEL_27;
  v22 = (BattleServantData_o *)data;
  data = (BattleData_o *)BattleData__getServantData(this->fields.data, targetId, 0LL);
  if ( !baseVals )
    goto LABEL_27;
  v23 = (BattleServantData_o *)data;
  baseVals->fields.isShowForcedEffect = 0;
  if ( (_DWORD)v9 == -1 )
    LODWORD(v9) = DataVals__GetValue(baseVals, 0LL);
  healPoint = v9;
  data = (BattleData_o *)DataVals__isUnaffected(baseVals, 0LL);
  if ( ((unsigned __int8)data & 1) != 0 )
    goto LABEL_22;
  if ( !v23 )
    goto LABEL_27;
  if ( ((__int64 (__fastcall *)(BattleServantData_o *, Il2CppMethodPointer))v23->klass->vtable._13_get_resultHp.method)(
         v23,
         v23->klass->vtable._14_set_resultHp.methodPtr) <= 0 )
  {
    healPoint = 0;
    data = (BattleData_o *)BattleServantData__isShiftableServant(v23, 0LL);
    if ( ((unsigned __int8)data & 1) != 0 )
    {
LABEL_21:
      LODWORD(v9) = 0;
LABEL_22:
      v25 = 0;
      goto LABEL_23;
    }
    v26 = this->fields.data;
    if ( v26 )
    {
      data = (BattleData_o *)v26->fields.battleEvent;
      if ( data )
      {
        data = (BattleData_o *)(*(__int64 (__fastcall **)(BattleData_o *, BattleServantData_o *, _QWORD))&data->klass[1]._2.initializationExceptionGCHandle)(
                                 data,
                                 v23,
                                 *(_QWORD *)&data->klass[1]._2.cctor_finished);
        if ( ((unsigned __int8)data & 1) == 0 )
        {
          data = (BattleData_o *)BattleServantData__isGuts(v23, 0LL);
          LODWORD(v9) = 0;
          v25 = (unsigned __int8)data ^ 1;
          goto LABEL_23;
        }
        goto LABEL_21;
      }
    }
LABEL_27:
    sub_1B9026C(data, v20);
  }
  data = (BattleData_o *)BattleServantData__isShiftReady(v23, 0LL);
  if ( ((unsigned __int8)data & 1) != 0 )
  {
    LODWORD(v9) = 0;
    v25 = 0;
    healPoint = 0;
    goto LABEL_23;
  }
  v33 = funcEnt;
  buffData = v23->fields.buffData;
  v28 = (BattleBuffData_CheckIndividualitiesData_o *)sub_1B9025C(BattleBuffData_CheckIndividualitiesData_TypeInfo);
  BattleBuffData_CheckIndividualitiesData___ctor(v28, v23, 0LL, 0LL, 0LL, 0LL, 0LL, 0LL);
  if ( !buffData )
    goto LABEL_27;
  if ( BattleBuffData__isTurnBuff(buffData, 42, v28, 1, 0LL) )
  {
    healPoint = 0;
    data = (BattleData_o *)DataVals__SetInvalidCauseByAnyBuff(baseVals, targetId, 0LL);
    funcEnt = v33;
    goto LABEL_21;
  }
  if ( v22 )
  {
    UpDownGiveHeal = BattleServantData__getUpDownGiveHeal(v22, v23, 0LL);
    LODWORD(v9) = BattleUtility__FloorToInt(UpDownGiveHeal * (float)(int)v9, 0LL);
    healPoint = v9;
  }
  funcEnt = v33;
  digit = 1;
  data = (BattleData_o *)BattleServantData__getUpDownHeal(v23, &digit, 0LL);
  v25 = 0;
  v9 = (int)data * (__int64)(int)v9 / digit;
  healPoint = v9;
  baseVals->fields.isShowForcedEffect = 1;
LABEL_23:
  healPoint = BattleLogicFunction__GetActualRecoveryHealPoint((BattleLogicFunction_o *)data, baseVals, v23, v9, v24);
  v29 = System_Int32__ToString((int32_t)&healPoint, 0LL);
  System_String__Concat_61787092((System_String_o *)StringLiteral_19704/*"functionGainHp:"*/, v29, 0LL);
  BattleLogicFunction__SetGainHpBuff(
    this,
    v19,
    healPoint,
    funcIndex,
    v23,
    funcEnt,
    baseVals,
    isCommandSideEffect,
    v25 & 1,
    v32);
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
  if ( (byte_4A729B5 & 1) == 0 )
  {
    sub_1B90010(&BattleActionData_TypeInfo, procArg);
    sub_1B90010(&System_IDisposable_TypeInfo, v7);
    sub_1B90010(&System_Collections_Generic_IEnumerable_BattleLogicFunctionProcess_FunctionTargetCheck__TypeInfo, v8);
    sub_1B90010(&System_Collections_Generic_IEnumerator_BattleLogicFunctionProcess_FunctionTargetCheck__TypeInfo, v9);
    sub_1B90010(&System_Collections_IEnumerator_TypeInfo, v10);
    sub_1B90010(&Method_System_Collections_Generic_List_FuncList_TYPE__Add__, v11);
    sub_1B90010(&Method_System_Collections_Generic_List_FuncList_TYPE___ctor__, v12);
    sub_1B90010(&System_Collections_Generic_List_FuncList_TYPE__TypeInfo, v13);
    sub_1B90010(&FuncList_TYPE_TypeInfo, v14);
    this = (BattleLogicFunction_o *)sub_1B90010(&StringLiteral_16345/*"_SAFE"*/, v15);
    byte_4A729B5 = 1;
  }
  if ( !funcTarget )
    goto LABEL_88;
  funcUnit_k__BackingField = funcTarget->fields._funcUnit_k__BackingField;
  if ( !funcUnit_k__BackingField )
    goto LABEL_88;
  dataVals_k__BackingField = funcUnit_k__BackingField->fields._dataVals_k__BackingField;
  v88 = (BattleActionData_o *)sub_1B9025C(BattleActionData_TypeInfo);
  BattleActionData___ctor(v88, 0LL);
  v17 = (System_Collections_Generic_List_T__o *)sub_1B9025C(System_Collections_Generic_List_FuncList_TYPE__TypeInfo);
  System_Collections_Generic_List_Int32Enum____ctor(
    v17,
    (const MethodInfo_34F5974 *)Method_System_Collections_Generic_List_FuncList_TYPE___ctor__);
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
      *(const MethodInfo_34F61C8 **)(*(_QWORD *)(v19[4] + 192LL) + 112LL));
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
      *(const MethodInfo_34F61C8 **)(*(_QWORD *)(v19[4] + 192LL) + 112LL));
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
      *(const MethodInfo_34F61C8 **)(*(_QWORD *)(v19[4] + 192LL) + 112LL));
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
      *(const MethodInfo_34F61C8 **)(*(_QWORD *)(v19[4] + 192LL) + 112LL));
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
      sub_1B90274(this, procArg);
    v27 = (DataVals_o *)*((_QWORD *)&this->fields.logictarget + (int)v25);
    if ( !v27 )
      goto LABEL_88;
    v92.klass = (System_Enum_c *)FuncList_TYPE_TypeInfo;
    v92.monitor = (void *)-1LL;
    funcType = v27->fields.funcType;
    this = (BattleLogicFunction_o *)System_Enum__ToString(&v92, 0LL);
    if ( !this )
      goto LABEL_88;
    v89 = System_String__Contains((System_String_o *)this, (System_String_o *)StringLiteral_16345/*"_SAFE"*/, 0LL);
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
      v33 = sub_1BE1FF0(
              this,
              System_Collections_Generic_IEnumerable_BattleLogicFunctionProcess_FunctionTargetCheck__TypeInfo,
              0LL);
    }
    v35 = (*(__int64 (__fastcall **)(BattleLogicFunction_o *, _QWORD))v33)(v30, *(_QWORD *)(v33 + 8));
    if ( !v35 )
      sub_1B9026C(0LL, v34);
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
        v39 = sub_1BE1FF0(v35, System_Collections_IEnumerator_TypeInfo, 0LL);
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
        v43 = sub_1BE1FF0(
                v35,
                System_Collections_Generic_IEnumerator_BattleLogicFunctionProcess_FunctionTargetCheck__TypeInfo,
                0LL);
      }
      v44 = (*(__int64 (__fastcall **)(__int64, _QWORD))v43)(v35, *(_QWORD *)(v43 + 8));
      v46 = v44;
      if ( !v44 )
        sub_1B9026C(0LL, v45);
      if ( ((*(__int64 (__fastcall **)(__int64, BattleActionData_o *, _QWORD))(*(_QWORD *)v44 + 392LL))(
              v44,
              mainAction,
              *(_QWORD *)(*(_QWORD *)v44 + 400LL)) & 1) != 0 )
      {
        data = v91->fields.data;
        if ( !data )
          sub_1B9026C(0LL, v47);
        v49 = *(_DWORD *)(v46 + 32);
        ServantData = BattleData__getServantData(data, v49, 0LL);
        v52 = ServantData;
        if ( !ServantData )
          sub_1B9026C(0LL, v51);
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
            sub_1B9026C(Value, v54);
          if ( !v90 )
            sub_1B9026C(0LL, v54);
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
              sub_1B9026C(0LL, v65);
            BattleActionData__addAction(v88, v64, 0LL);
            v87 += v66;
          }
          else
          {
            v67 = v27->fields.funcIndex;
            v68 = BattleLogicFunction_ProcListInArgs__get_IsCommandSideEffect(v90, 0LL);
            NoEffectObject = BattleLogicFunction__getNoEffectObject(v91, v49, v67, v27, v68, 0LL, 0LL, v69);
            if ( !v88 )
              sub_1B9026C(0LL, NoEffectObject);
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
      v74 = sub_1BE1FF0(v35, System_IDisposable_TypeInfo, 0LL);
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
    sub_1B9026C(this, procArg);
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
  const MethodInfo *v33; // [xsp+8h] [xbp-78h]
  FunctionEntity_o *v34; // [xsp+10h] [xbp-70h]
  int32_t digit; // [xsp+1Ch] [xbp-64h] BYREF

  if ( (byte_4A7299C & 1) == 0 )
  {
    sub_1B90010(&BattleActionData_TypeInfo, *(_QWORD *)&playerId);
    sub_1B90010(&BattleBuffData_CheckIndividualitiesData_TypeInfo, v15);
    byte_4A7299C = 1;
  }
  digit = 0;
  v16 = (BattleActionData_o *)sub_1B9025C(BattleActionData_TypeInfo);
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
  v26 = (BattleBuffData_CheckIndividualitiesData_o *)sub_1B9025C(BattleBuffData_CheckIndividualitiesData_TypeInfo);
  BattleBuffData_CheckIndividualitiesData___ctor(v26, v20, 0LL, 0LL, 0LL, 0LL, 0LL, 0LL);
  if ( !buffData )
LABEL_24:
    sub_1B9026C(data, v17);
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

  if ( (byte_4A729B4 & 1) == 0 )
  {
    sub_1B90010(&BattleActionData_TypeInfo, procArg);
    byte_4A729B4 = 1;
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
  v14 = (BattleActionData_o *)sub_1B9025C(BattleActionData_TypeInfo);
  BattleActionData___ctor(v14, 0LL);
  if ( !baseVals )
LABEL_18:
    sub_1B9026C(data, procArg);
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
  if ( (byte_4A729B2 & 1) == 0 )
  {
    sub_1B90010(&BattleActionData_TypeInfo, procArg);
    sub_1B90010(&NpGaugeAbsorbResult_TypeInfo, v9);
    this = (BattleLogicFunction_o *)sub_1B90010(&NpTurnToPointConvert_TypeInfo, v10);
    byte_4A729B2 = 1;
  }
  if ( !funcTarget )
    goto LABEL_12;
  funcUnit_k__BackingField = funcTarget->fields._funcUnit_k__BackingField;
  if ( !funcUnit_k__BackingField )
    goto LABEL_12;
  dataVals_k__BackingField = funcUnit_k__BackingField->fields._dataVals_k__BackingField;
  v13 = (BattleActionData_o *)sub_1B9025C(BattleActionData_TypeInfo);
  BattleActionData___ctor(v13, 0LL);
  v14 = (NpTurnToPointConvert_o *)sub_1B9025C(NpTurnToPointConvert_TypeInfo);
  NpTurnToPointConvert___ctor(v14, 0LL);
  v15 = (NpGaugeAbsorbResult_o *)sub_1B9025C(NpGaugeAbsorbResult_TypeInfo);
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
    sub_1B9026C(this, procArg);
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

  if ( (byte_4A729A0 & 1) == 0 )
  {
    sub_1B90010(&BattleActionData_TypeInfo, *(_QWORD *)&targetId);
    byte_4A729A0 = 1;
  }
  v15 = (BattleActionData_o *)sub_1B9025C(BattleActionData_TypeInfo);
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
        sub_1B9026C(data, v16);
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
  __int64 v16; // x1
  System_String_o *v17; // x0
  BattleActionData_o *v18; // x25
  BattleData_o *v19; // x1
  BattleData_o *data; // x0
  BattleServantData_o *v21; // x27
  BattleServantData_o *v22; // x28
  unsigned int v23; // w0
  int32_t v24; // w20
  bool IsOpponentPTUniqueID; // w0
  System_Int32_array *v26; // x20
  int32_t v27; // w0
  const MethodInfo *v28; // x6
  struct BattleData_o *v29; // x8
  int32_t v30; // w2
  int32_t uniqueId; // [xsp+Ch] [xbp-64h] BYREF

  uniqueId = targetId;
  if ( (byte_4A7299F & 1) == 0 )
  {
    sub_1B90010(&BattleActionData_TypeInfo, *(_QWORD *)&playerId);
    sub_1B90010(&StringLiteral_19705/*"functionInstantDeath>>:"*/, v16);
    byte_4A7299F = 1;
  }
  v17 = System_Int32__ToString((int32_t)&uniqueId, 0LL);
  System_String__Concat_61787092((System_String_o *)StringLiteral_19705/*"functionInstantDeath>>:"*/, v17, 0LL);
  v18 = (BattleActionData_o *)sub_1B9025C(BattleActionData_TypeInfo);
  BattleActionData___ctor(v18, 0LL);
  data = this->fields.data;
  if ( !data )
    goto LABEL_16;
  data = (BattleData_o *)BattleData__getServantData(data, uniqueId, 0LL);
  if ( !this->fields.data )
    goto LABEL_16;
  v21 = (BattleServantData_o *)data;
  data = (BattleData_o *)BattleData__getServantData(this->fields.data, playerId, 0LL);
  if ( !v21 )
    goto LABEL_16;
  v22 = (BattleServantData_o *)data;
  v23 = ((__int64 (__fastcall *)(BattleServantData_o *, Il2CppMethodPointer))v21->klass->vtable._9_get_hp.method)(
          v21,
          v21->klass->vtable._10_set_hp.methodPtr);
  ((void (__fastcall *)(BattleServantData_o *, _QWORD, Il2CppMethodPointer))v21->klass->vtable._12_set_reducedhp.method)(
    v21,
    v23,
    v21->klass->vtable._13_get_resultHp.methodPtr);
  data = (BattleData_o *)this->fields.logic;
  if ( !data )
    goto LABEL_16;
  data = (BattleData_o *)BattleLogic__getWave((BattleLogic_o *)data, 0LL);
  if ( !this->fields.data )
    goto LABEL_16;
  v24 = (int)data;
  IsOpponentPTUniqueID = BattleData__IsOpponentPTUniqueID(this->fields.data, uniqueId, playerId, 0LL);
  BattleServantData__setActionHistory(v21, playerId, 4, v24, IsOpponentPTUniqueID, 0LL);
  if ( !funcUnit )
    goto LABEL_16;
  v26 = BattleLogicFunctionProcess_FunctionUnitCheck__get_FuncIndividuality(funcUnit, 0LL);
  v27 = ((__int64 (__fastcall *)(BattleServantData_o *, Il2CppMethodPointer))v21->klass->vtable._13_get_resultHp.method)(
          v21,
          v21->klass->vtable._14_set_resultHp.methodPtr);
  BattleServantData__ResultDamage(v21, v27, v22, 0LL, v26, 0, 0LL);
  v29 = this->fields.data;
  if ( !v29 )
    goto LABEL_16;
  v30 = v21->fields.uniqueId;
  v21->fields.deadTurn = v29->fields.typeTurn;
  data = (BattleData_o *)BattleLogicFunction__getFunctionObject(
                           (BattleLogicFunction_o *)data,
                           funcEnt,
                           v30,
                           funcIndex,
                           isCommandSideEffect,
                           0LL,
                           v28);
  if ( !data )
    goto LABEL_16;
  HIDWORD(data->fields.m_CancellationTokenSource) = 1;
  v19 = data;
  if ( uniqueId == playerId || isNoAccumulation )
    BYTE1(data->fields.battle_info) = 1;
  if ( !v18 )
LABEL_16:
    sub_1B9026C(data, v19);
  BattleActionData__setBuffData(v18, (BattleActionData_BuffData_o *)data, baseVals, 0LL);
  return v18;
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

  if ( (byte_4A729B3 & 1) == 0 )
  {
    sub_1B90010(&BattleActionData_TypeInfo, procArg);
    sub_1B90010(&BattleDataDefine_TypeInfo, v12);
    byte_4A729B3 = 1;
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
        v15 = (BattleActionData_o *)sub_1B9025C(BattleActionData_TypeInfo);
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
      sub_1B9026C(data, procArg);
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
  DataManager_c *klass; // x8
  const char *namespaze; // x9
  int i; // w10
  int v28; // w11
  int v29; // w10
  BattleServantData_o *v30; // x23
  struct BattleData_o *data; // x8
  __int64 *v32; // x8
  __int64 v33; // x21
  __int64 v34; // x22
  int32_t v35; // w2
  int32_t v36; // w3

  if ( (byte_4A729B9 & 1) == 0 )
  {
    sub_1B90010(&BattleActionData_TypeInfo, actionData);
    sub_1B90010(&Method_DataManager_GetMasterData_SkillLvMaster___, v7);
    sub_1B90010(&Method_SingletonMonoBehaviour_DataManager__getInstance__, v8);
    sub_1B90010(&StringLiteral_6406/*"FOCUS_UP_EX"*/, v9);
    sub_1B90010(&StringLiteral_6404/*"FOCUS_UNDER_EX"*/, v10);
    sub_1B90010(&StringLiteral_6402/*"FOCUS_CENTER_EX"*/, v11);
    sub_1B90010(&StringLiteral_6403/*"FOCUS_UNDER"*/, v12);
    sub_1B90010(&StringLiteral_6401/*"FOCUS_CENTER"*/, v13);
    sub_1B90010(&StringLiteral_6405/*"FOCUS_UP"*/, v14);
    byte_4A729B9 = 1;
  }
  v15 = *((_QWORD *)Method_SingletonMonoBehaviour_DataManager__getInstance__ + 4);
  if ( (*(_BYTE *)(v15 + 309) & 1) == 0 )
    v15 = sub_1BE1EEC(v15);
  v16 = *(_QWORD *)(*(_QWORD *)(v15 + 192) + 16LL);
  if ( (*(_BYTE *)(v16 + 309) & 1) == 0 )
    v16 = sub_1BE1EEC(v16);
  MasterData_object = **(DataManager_o ***)(v16 + 184);
  if ( !MasterData_object )
    goto LABEL_23;
  MasterData_object = (DataManager_o *)DataManager__GetMasterData_object_(
                                         MasterData_object,
                                         (const MethodInfo_2E8E21C *)Method_DataManager_GetMasterData_SkillLvMaster___);
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
    v28 = MovePositionUp > 0 ? -MovePositionUp : v23;
    v29 = v28 + i;
    if ( v29 >= 0 && v29 < (int)namespaze )
    {
      if ( v29 >= (unsigned int)namespaze )
LABEL_50:
        sub_1B90274(MasterData_object, actionData);
      MasterData_object = (DataManager_o *)BattleData__getServantData(
                                             (BattleData_o *)MasterData_object,
                                             *((_DWORD *)&klass->_1.byval_arg.data + (unsigned int)v29),
                                             0LL);
      if ( !MasterData_object )
        goto LABEL_23;
      v30 = (BattleServantData_o *)MasterData_object;
      MasterData_object = (DataManager_o *)BattleServantData__isAlive((BattleServantData_o *)MasterData_object, 0, 0LL);
      if ( ((unsigned __int8)MasterData_object & 1) != 0 )
      {
        data = this->fields.data;
        if ( !data )
          goto LABEL_23;
        data->fields.globaltargetId = v30->fields.uniqueId;
        if ( BattleServantData__isMultiTargetUp(v30, 0LL) )
        {
          if ( SkillLvEntity__IsAress(v20, 0LL) )
            v32 = &StringLiteral_6406/*"FOCUS_UP_EX"*/;
          else
            v32 = &StringLiteral_6405/*"FOCUS_UP"*/;
        }
        else if ( BattleServantData__isMultiTargetCore(v30, 0LL) )
        {
          if ( SkillLvEntity__IsAress(v20, 0LL) )
            v32 = &StringLiteral_6402/*"FOCUS_CENTER_EX"*/;
          else
            v32 = &StringLiteral_6401/*"FOCUS_CENTER"*/;
        }
        else
        {
          v33 = 0LL;
          if ( !BattleServantData__isMultiTargetUnder(v30, 0LL) )
          {
LABEL_47:
            v34 = sub_1B9025C(BattleActionData_TypeInfo);
            BattleActionData___ctor((BattleActionData_o *)v34, 0LL);
            if ( targetData && v34 )
            {
              *(_DWORD *)(v34 + 32) = targetData->fields.uniqueId;
              *(_DWORD *)(v34 + 36) = actionData->fields.targetId;
              BattleActionData__setStateField((BattleActionData_o *)v34, 0LL);
              *(_QWORD *)(v34 + 64) = v33;
              sub_1B8FFB4((ServantStatusBattleListViewItem_o *)(v34 + 64), v33, v35, v36);
              BattleActionData__AddAfterActionData(actionData, (BattleActionData_o *)v34, 0, 0LL);
              return;
            }
LABEL_23:
            sub_1B9026C(MasterData_object, actionData);
          }
          if ( SkillLvEntity__IsAress(v20, 0LL) )
            v32 = &StringLiteral_6404/*"FOCUS_UNDER_EX"*/;
          else
            v32 = &StringLiteral_6403/*"FOCUS_UNDER"*/;
        }
        v33 = *v32;
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
  int32_t v40; // w3
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
  int32_t v66; // w3
  int v67; // w22
  int32_t funcIndex; // w20
  bool IsCommandSideEffect; // w0
  const MethodInfo *v70; // x7
  struct BattleData_o *data; // x8
  BattleFieldEnvironmentData_o *FieldEnvData_k__BackingField; // x19
  BattleLogicFunction___c_c *v73; // x0
  System_Func_object__bool__o *_9__108_2; // x20
  Il2CppObject *v75; // x21
  struct BattleLogicFunction___c_StaticFields *static_fields; // x0
  int32_t v77; // w2
  int32_t v78; // w3
  System_Collections_Generic_IEnumerable_TSource__o *v79; // x0
  BattleActionEffect_ChangeBgmBuff_o *v80; // x19
  BattleLogicFunctionProcess_FunctionTargetCheck_o *v81; // [xsp+0h] [xbp-90h]
  BattleLogicFunction_ProcListInArgs_o *v82; // [xsp+8h] [xbp-88h]
  Il2CppObject *entity; // [xsp+28h] [xbp-68h] BYREF

  if ( (byte_4A729BD & 1) == 0 )
  {
    sub_1B90010(&BattleActionData_BuffData_TypeInfo, procArg);
    sub_1B90010(&BattleActionEffect_ChangeBgmBuff_TypeInfo, v7);
    sub_1B90010(&Method_DataManager_GetMasterData_BuffMaster___, v8);
    sub_1B90010(&Method_DataMasterBase_BuffMaster__BuffEntity__int__TryGetEntity__, v9);
    sub_1B90010(&Method_System_Linq_Enumerable_ToArray_BattleBuffData_BuffData___, v10);
    sub_1B90010(&Method_System_Linq_Enumerable_Where_BattleBuffData_BuffData___, v11);
    sub_1B90010(&System_Func_BattleBuffData_BuffData__bool__TypeInfo, v12);
    sub_1B90010(&Method_System_Collections_Generic_HashSet_BattleBuffData_BuffData___ctor___76101512, v13);
    sub_1B90010(&System_Collections_Generic_HashSet_BattleBuffData_BuffData__TypeInfo, v14);
    sub_1B90010(&Method_System_Collections_Generic_List_int__Add__, v15);
    sub_1B90010(&Method_System_Collections_Generic_List_int__ToArray__, v16);
    sub_1B90010(&Method_System_Collections_Generic_List_int___ctor__, v17);
    sub_1B90010(&System_Collections_Generic_List_int__TypeInfo, v18);
    sub_1B90010(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v19);
    sub_1B90010(&Method_BattleLogicFunction___c__functionMoveState_b__108_2__, v20);
    sub_1B90010(&Method_BattleLogicFunction___c__DisplayClass108_0__functionMoveState_b__0__, v21);
    sub_1B90010(&Method_BattleLogicFunction___c__DisplayClass108_0__functionMoveState_b__1__, v22);
    sub_1B90010(&BattleLogicFunction___c__DisplayClass108_0_TypeInfo, v23);
    sub_1B90010(&BattleLogicFunction___c_TypeInfo, v24);
    byte_4A729BD = 1;
  }
  entity = 0LL;
  v25 = sub_1B9025C(BattleLogicFunction___c__DisplayClass108_0_TypeInfo);
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
  v36 = (System_Func_object__bool__o *)sub_1B9025C(System_Func_BattleBuffData_BuffData__bool__TypeInfo);
  System_Func_object__bool____ctor(
    v36,
    (Il2CppObject *)v25,
    Method_BattleLogicFunction___c__DisplayClass108_0__functionMoveState_b__0__,
    0LL);
  v37 = (System_Collections_Generic_IEnumerable_T__o *)System_Linq_Enumerable__Where_object_(
                                                         (System_Collections_Generic_IEnumerable_TSource__o *)v35,
                                                         (System_Func_TSource__bool__o *)v36,
                                                         (const MethodInfo_2ECC92C *)Method_System_Linq_Enumerable_Where_BattleBuffData_BuffData___);
  v38 = (System_Collections_Generic_HashSet_T__o *)sub_1B9025C(System_Collections_Generic_HashSet_BattleBuffData_BuffData__TypeInfo);
  System_Collections_Generic_HashSet_object____ctor_54311128(
    v38,
    v37,
    (const MethodInfo_33CB8D8 *)Method_System_Collections_Generic_HashSet_BattleBuffData_BuffData___ctor___76101512);
  *(_QWORD *)(v25 + 24) = v38;
  sub_1B8FFB4((ServantStatusBattleListViewItem_o *)(v25 + 24), (int32_t)v38, v39, v40);
  v41 = RemovedBuffInfoGroup__RemovedAllBuffEnumerable(v32, 0LL);
  v42 = (System_Func_object__bool__o *)sub_1B9025C(System_Func_BattleBuffData_BuffData__bool__TypeInfo);
  System_Func_object__bool____ctor(
    v42,
    (Il2CppObject *)v25,
    Method_BattleLogicFunction___c__DisplayClass108_0__functionMoveState_b__1__,
    0LL);
  v43 = System_Linq_Enumerable__Where_object_(
          (System_Collections_Generic_IEnumerable_TSource__o *)v41,
          (System_Func_TSource__bool__o *)v42,
          (const MethodInfo_2ECC92C *)Method_System_Linq_Enumerable_Where_BattleBuffData_BuffData___);
  StealBuffInfoGroup = (RemovedBuffInfoGroup_o *)System_Linq_Enumerable__ToArray_object_(
                                                   v43,
                                                   (const MethodInfo_2EC6F94 *)Method_System_Linq_Enumerable_ToArray_BattleBuffData_BuffData___);
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
  v45 = (System_Collections_Generic_List_int__o *)sub_1B9025C(System_Collections_Generic_List_int__TypeInfo);
  System_Collections_Generic_List_int____ctor(
    v45,
    (const MethodInfo_34F3148 *)Method_System_Collections_Generic_List_int___ctor__);
  StealBuffInfoGroup = (RemovedBuffInfoGroup_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_374C890 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !StealBuffInfoGroup )
    goto LABEL_64;
  StealBuffInfoGroup = (RemovedBuffInfoGroup_o *)DataManager__GetMasterData_object_(
                                                   (DataManager_o *)StealBuffInfoGroup,
                                                   (const MethodInfo_2E8E21C *)Method_DataManager_GetMasterData_BuffMaster___);
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
      sub_1B90274(StealBuffInfoGroup, NoEffectObject);
    v52 = (BattleBuffData_BuffData_o *)*((_QWORD *)&v44[1].monitor + v49);
    if ( !v52 || !v48 )
      goto LABEL_64;
    StealBuffInfoGroup = (RemovedBuffInfoGroup_o *)DataMasterBase_object__object__int___TryGetEntity(
                                                     v48,
                                                     &entity,
                                                     v52->fields.buffId,
                                                     (const MethodInfo_312C5FC *)Method_DataMasterBase_BuffMaster__BuffEntity__int__TryGetEntity__);
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
            *(const MethodInfo_34F399C **)(*(_QWORD *)(v59[4] + 192LL) + 112LL));
        }
        else
        {
          v45->fields._size = size + 1;
          items->m_Items[size + 1] = (int)NoEffectObject;
        }
      }
      else
      {
        v61 = (BattleActionData_BuffData_o *)sub_1B9025C(BattleActionData_BuffData_TypeInfo);
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
        v50 = ((__int64 (__fastcall *)(BattleLogicFunctionProcess_FunctionTargetCheck_o *, BattleActionData_BuffData_o *, BattleBuffData_BuffData_o *, struct FunctionEntity_o *, bool, Il2CppMethodPointer))v81->klass->vtable._11_MakeAddActionBuffData.method)(
                v81,
                v61,
                v52,
                funcEnt,
                v63,
                v81->klass->vtable._12_GetConvertBuffEntity.methodPtr);
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
          (const MethodInfo_34F5454 *)Method_System_Collections_Generic_List_int__ToArray__);
  *(_QWORD *)(v50 + 152) = v64;
  sub_1B8FFB4((ServantStatusBattleListViewItem_o *)(v50 + 152), (int32_t)v64, v65, v66);
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
  _9__108_2 = (System_Func_object__bool__o *)v73->static_fields->__9__108_2;
  if ( !_9__108_2 )
  {
    if ( !v73->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v73);
      v73 = BattleLogicFunction___c_TypeInfo;
    }
    v75 = (Il2CppObject *)v73->static_fields->__9;
    _9__108_2 = (System_Func_object__bool__o *)sub_1B9025C(System_Func_BattleBuffData_BuffData__bool__TypeInfo);
    System_Func_object__bool____ctor(_9__108_2, v75, Method_BattleLogicFunction___c__functionMoveState_b__108_2__, 0LL);
    static_fields = BattleLogicFunction___c_TypeInfo->static_fields;
    static_fields->__9__108_2 = (struct System_Func_BattleBuffData_BuffData__bool__o *)_9__108_2;
    sub_1B8FFB4((ServantStatusBattleListViewItem_o *)&static_fields->__9__108_2, (int32_t)_9__108_2, v77, v78);
  }
  v79 = System_Linq_Enumerable__Where_object_(
          (System_Collections_Generic_IEnumerable_TSource__o *)v44,
          (System_Func_TSource__bool__o *)_9__108_2,
          (const MethodInfo_2ECC92C *)Method_System_Linq_Enumerable_Where_BattleBuffData_BuffData___);
  StealBuffInfoGroup = (RemovedBuffInfoGroup_o *)System_Linq_Enumerable__ToArray_object_(
                                                   v79,
                                                   (const MethodInfo_2EC6F94 *)Method_System_Linq_Enumerable_ToArray_BattleBuffData_BuffData___);
  if ( !FieldEnvData_k__BackingField )
    goto LABEL_64;
  if ( BattleFieldEnvironmentData__AddBgmFromChangeBgmBuffArray(
         FieldEnvData_k__BackingField,
         (BattleBuffData_BuffData_array *)StealBuffInfoGroup,
         0LL)
    && v67 != 1 )
  {
    v80 = (BattleActionEffect_ChangeBgmBuff_o *)sub_1B9025C(BattleActionEffect_ChangeBgmBuff_TypeInfo);
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
    sub_1B9026C(StealBuffInfoGroup, NoEffectObject);
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
  __int64 v23; // x1
  BattleData_o *data; // x0
  BattleServantData_o *v25; // x22
  BattleServantData_o *ServantData; // x20
  System_Collections_Generic_List_int__o *v27; // x27
  struct System_Int32_array *items; // x8
  _QWORD *v29; // x9
  __int64 size; // x10
  System_Int32_array *TargetRarityList; // x29
  char v32; // w28
  char v33; // w10
  bool v34; // w8
  System_Int32_array *buffIndv; // x22
  System_Int32_array *v36; // x20
  int32_t v37; // w1
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
  struct System_Int32_array *v56; // x8
  _QWORD *v57; // x9
  __int64 v58; // x10
  int32_t BattlePointPhase; // w20
  struct System_Int32_array *v60; // x8
  _QWORD *v61; // x9
  __int64 v62; // x10
  struct System_Int32_array *v63; // x8
  _QWORD *v64; // x9
  __int64 v65; // x10
  bool v66; // w0
  struct System_Int32_array *v67; // x8
  _QWORD *v68; // x9
  __int64 v69; // x10
  struct System_Int32_array *v70; // x8
  _QWORD *v71; // x9
  __int64 v72; // x10
  System_Array_o *v73; // x20
  bool v74; // w20
  bool IsOverChargeState; // w0
  int32_t NPFixedDamageValue; // w25
  BattleLogic_DamageProcessArgs_o *damageProcessArgs; // x26
  BattleLogic_o *logic; // x24
  System_Int32_array *v79; // x27
  bool IsIncludeIgnoreIndividuality; // w25
  BattleActionData_DamageData_o *v81; // x20
  char v82; // w21
  bool v84; // [xsp+30h] [xbp-A0h]
  bool isRarityAtk; // [xsp+34h] [xbp-9Ch]
  BattleServantData_o *target; // [xsp+38h] [xbp-98h]
  BattleActionData_o *v87; // [xsp+40h] [xbp-90h]
  int32_t funcIndexa; // [xsp+4Ch] [xbp-84h]
  BattleActionData_o *actiona; // [xsp+50h] [xbp-80h]
  BattleServantData_o *v90; // [xsp+58h] [xbp-78h]
  unsigned int v91; // [xsp+60h] [xbp-70h]
  System_RuntimeFieldHandle_o v93; // 0:w1.4

  if ( (byte_4A72999 & 1) == 0 )
  {
    sub_1B90010(&BattleActionData_TypeInfo, *(_QWORD *)&playerId);
    sub_1B90010(&BattleLogic_DamageProcessArgs_TypeInfo, v14);
    sub_1B90010(&int___TypeInfo, v15);
    sub_1B90010(&Method_System_Collections_Generic_List_int__Add__, v16);
    sub_1B90010(&Method_System_Collections_Generic_List_int__ToArray__, v17);
    sub_1B90010(&Method_System_Collections_Generic_List_int___ctor__, v18);
    sub_1B90010(&System_Collections_Generic_List_int__TypeInfo, v19);
    sub_1B90010(&DataVals_OverChargeState___TypeInfo, v20);
    sub_1B90010(
      &Field__PrivateImplementationDetails__44BE0EBF7C907BA44AD83314C6AD0AA399AD5B73911C129D2CD6A85D4A056C90,
      v21);
    byte_4A72999 = 1;
  }
  v22 = (BattleActionData_o *)sub_1B9025C(BattleActionData_TypeInfo);
  BattleActionData___ctor(v22, 0LL);
  data = this->fields.data;
  if ( !data )
    goto LABEL_87;
  data = (BattleData_o *)BattleData__getServantData(data, playerId, 0LL);
  if ( !this->fields.data )
    goto LABEL_87;
  v25 = (BattleServantData_o *)data;
  ServantData = BattleData__getServantData(this->fields.data, targetId, 0LL);
  v27 = (System_Collections_Generic_List_int__o *)sub_1B9025C(System_Collections_Generic_List_int__TypeInfo);
  System_Collections_Generic_List_int____ctor(
    v27,
    (const MethodInfo_34F3148 *)Method_System_Collections_Generic_List_int___ctor__);
  if ( !baseVals
    || (data = (BattleData_o *)DataVals__GetParam(baseVals, 3, 0, 0LL), !v27)
    || (items = v27->fields._items,
        v29 = Method_System_Collections_Generic_List_int__Add__,
        ++v27->fields._version,
        !items) )
  {
LABEL_87:
    sub_1B9026C(data, v23);
  }
  size = v27->fields._size;
  actiona = action;
  funcIndexa = funcIndex;
  if ( (unsigned int)size >= items->max_length )
  {
    System_Collections_Generic_List_int___AddWithResize(
      v27,
      (int32_t)data,
      *(const MethodInfo_34F399C **)(*(_QWORD *)(v29[4] + 192LL) + 112LL));
  }
  else
  {
    v27->fields._size = size + 1;
    items->m_Items[size + 1] = (int)data;
  }
  TargetRarityList = 0LL;
  v32 = 0;
  target = ServantData;
  v87 = v22;
  v90 = v25;
  v91 = type - 3;
  v33 = 0;
  v34 = 0;
  buffIndv = 0LL;
  v36 = 0LL;
  switch ( type )
  {
    case 3:
    case 4:
    case 7:
    case 9:
    case 10:
      v37 = 7;
      goto LABEL_14;
    case 5:
    case 6:
      v37 = 6;
LABEL_14:
      data = (BattleData_o *)DataVals__GetParam(baseVals, v37, 0, 0LL);
      v38 = v27->fields._items;
      v39 = Method_System_Collections_Generic_List_int__Add__;
      ++v27->fields._version;
      if ( !v38 )
        goto LABEL_87;
      v40 = v27->fields._size;
      if ( (unsigned int)v40 >= v38->max_length )
      {
        System_Collections_Generic_List_int___AddWithResize(
          v27,
          (int32_t)data,
          *(const MethodInfo_34F399C **)(*(_QWORD *)(v39[4] + 192LL) + 112LL));
      }
      else
      {
        v27->fields._size = v40 + 1;
        v38->m_Items[v40 + 1] = (int)data;
      }
      TargetRarityList = 0LL;
      v32 = 0;
      v33 = 0;
      v34 = 0;
      buffIndv = 0LL;
      v36 = 0LL;
      switch ( type )
      {
        case 3:
        case 4:
          v36 = (System_Int32_array *)sub_1B900B8(int___TypeInfo, 1LL);
          data = (BattleData_o *)DataVals__GetParam(baseVals, 6, 0, 0LL);
          if ( !v36 )
            goto LABEL_87;
          if ( !v36->max_length )
            goto LABEL_88;
          v32 = 0;
          v33 = 0;
          TargetRarityList = 0LL;
          v34 = 0;
          buffIndv = 0LL;
          v36->m_Items[1] = (int)data;
          break;
        case 5:
        case 6:
        case 8:
          goto LABEL_79;
        case 7:
          buffIndv = (System_Int32_array *)sub_1B900B8(int___TypeInfo, 1LL);
          data = (BattleData_o *)DataVals__GetParam(baseVals, 6, 0, 0LL);
          if ( !buffIndv )
            goto LABEL_87;
          if ( !buffIndv->max_length )
LABEL_88:
            sub_1B90274(data, v23);
          v32 = 0;
          v33 = 0;
          TargetRarityList = 0LL;
          v34 = 0;
          v36 = 0LL;
          buffIndv->m_Items[1] = (int)data;
          break;
        case 9:
          TargetRarityList = DataVals__GetTargetRarityList(baseVals, 0LL);
          v32 = 0;
          v34 = 0;
          buffIndv = 0LL;
          v36 = 0LL;
          v33 = 1;
          goto LABEL_79;
        case 10:
          v36 = DataVals__GetAndCheckIndividuality(baseVals, 0LL);
          v32 = 0;
          v33 = 0;
          TargetRarityList = 0LL;
          v34 = 0;
          buffIndv = 0LL;
          goto LABEL_79;
        default:
          goto LABEL_65;
      }
      goto LABEL_79;
    case 8:
      goto LABEL_79;
    case 11:
      v27 = (System_Collections_Generic_List_int__o *)sub_1B9025C(System_Collections_Generic_List_int__TypeInfo);
      System_Collections_Generic_List_int____ctor(
        v27,
        (const MethodInfo_34F3148 *)Method_System_Collections_Generic_List_int___ctor__);
      data = (BattleData_o *)DataVals__GetParam(baseVals, 3, 0, 0LL);
      if ( !v27 )
        goto LABEL_87;
      v41 = v27->fields._items;
      v42 = Method_System_Collections_Generic_List_int__Add__;
      ++v27->fields._version;
      if ( !v41 )
        goto LABEL_87;
      v43 = v27->fields._size;
      if ( (unsigned int)v43 >= v41->max_length )
      {
        System_Collections_Generic_List_int___AddWithResize(
          v27,
          (int32_t)data,
          *(const MethodInfo_34F399C **)(*(_QWORD *)(v42[4] + 192LL) + 112LL));
      }
      else
      {
        v27->fields._size = v43 + 1;
        v41->m_Items[v43 + 1] = (int)data;
      }
      data = (BattleData_o *)DataVals__GetParam(baseVals, 7, 0, 0LL);
      v50 = v27->fields._items;
      v51 = Method_System_Collections_Generic_List_int__Add__;
      ++v27->fields._version;
      if ( !v50 )
        goto LABEL_87;
      v52 = v27->fields._size;
      if ( (unsigned int)v52 >= v50->max_length )
      {
        System_Collections_Generic_List_int___AddWithResize(
          v27,
          (int32_t)data,
          *(const MethodInfo_34F399C **)(*(_QWORD *)(v51[4] + 192LL) + 112LL));
      }
      else
      {
        v27->fields._size = v52 + 1;
        v50->m_Items[v52 + 1] = (int)data;
      }
      data = (BattleData_o *)DataVals__GetParam(baseVals, 59, 0, 0LL);
      v56 = v27->fields._items;
      v57 = Method_System_Collections_Generic_List_int__Add__;
      ++v27->fields._version;
      if ( !v56 )
        goto LABEL_87;
      v58 = v27->fields._size;
      if ( (unsigned int)v58 >= v56->max_length )
      {
        System_Collections_Generic_List_int___AddWithResize(
          v27,
          (int32_t)data,
          *(const MethodInfo_34F399C **)(*(_QWORD *)(v57[4] + 192LL) + 112LL));
      }
      else
      {
        v27->fields._size = v58 + 1;
        v56->m_Items[v58 + 1] = (int)data;
      }
      data = (BattleData_o *)DataVals__GetParam(baseVals, 60, 0, 0LL);
      v63 = v27->fields._items;
      v64 = Method_System_Collections_Generic_List_int__Add__;
      ++v27->fields._version;
      if ( !v63 )
        goto LABEL_87;
      v65 = v27->fields._size;
      if ( (unsigned int)v65 >= v63->max_length )
      {
        System_Collections_Generic_List_int___AddWithResize(
          v27,
          (int32_t)data,
          *(const MethodInfo_34F399C **)(*(_QWORD *)(v64[4] + 192LL) + 112LL));
      }
      else
      {
        v27->fields._size = v65 + 1;
        v63->m_Items[v65 + 1] = (int)data;
      }
      data = (BattleData_o *)DataVals__GetParam(baseVals, 4, 0, 0LL);
      v67 = v27->fields._items;
      v68 = Method_System_Collections_Generic_List_int__Add__;
      ++v27->fields._version;
      if ( !v67 )
        goto LABEL_87;
      v69 = v27->fields._size;
      if ( (unsigned int)v69 >= v67->max_length )
      {
        System_Collections_Generic_List_int___AddWithResize(
          v27,
          (int32_t)data,
          *(const MethodInfo_34F399C **)(*(_QWORD *)(v68[4] + 192LL) + 112LL));
      }
      else
      {
        v27->fields._size = v69 + 1;
        v67->m_Items[v69 + 1] = (int)data;
      }
      data = (BattleData_o *)DataVals__GetParam(baseVals, 6, 0, 0LL);
      v70 = v27->fields._items;
      v71 = Method_System_Collections_Generic_List_int__Add__;
      ++v27->fields._version;
      if ( !v70 )
        goto LABEL_87;
      v72 = v27->fields._size;
      if ( (unsigned int)v72 >= v70->max_length )
      {
        System_Collections_Generic_List_int___AddWithResize(
          v27,
          (int32_t)data,
          *(const MethodInfo_34F399C **)(*(_QWORD *)(v71[4] + 192LL) + 112LL));
      }
      else
      {
        v27->fields._size = v72 + 1;
        v70->m_Items[v72 + 1] = (int)data;
      }
      buffIndv = DataVals__GetTargetList(baseVals, 0LL);
      v73 = (System_Array_o *)sub_1B900B8(DataVals_OverChargeState___TypeInfo, 3LL);
      v93.fields.value = Field__PrivateImplementationDetails__44BE0EBF7C907BA44AD83314C6AD0AA399AD5B73911C129D2CD6A85D4A056C90;
      System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray_61695172(v73, v93, 0LL);
      DataVals__UpdateOverChargeEachFunc(baseVals, (DataVals_OverChargeState_array *)v73, 0LL);
      v74 = DataVals__IsOverChargeState(baseVals, 2, 0LL) || DataVals__IsOverChargeState(baseVals, 8, 0LL);
      v32 = 1;
      IsOverChargeState = DataVals__IsOverChargeState(baseVals, 1, 0LL);
      v33 = 0;
      TargetRarityList = 0LL;
      v34 = v74 && !IsOverChargeState;
      v36 = buffIndv;
      goto LABEL_79;
    case 12:
      data = (BattleData_o *)DataVals__GetParam(baseVals, 7, 0, 0LL);
      v44 = v27->fields._items;
      v45 = Method_System_Collections_Generic_List_int__Add__;
      ++v27->fields._version;
      if ( !v44 )
        goto LABEL_87;
      v46 = v27->fields._size;
      if ( (unsigned int)v46 >= v44->max_length )
      {
        System_Collections_Generic_List_int___AddWithResize(
          v27,
          (int32_t)data,
          *(const MethodInfo_34F399C **)(*(_QWORD *)(v45[4] + 192LL) + 112LL));
      }
      else
      {
        v27->fields._size = v46 + 1;
        v44->m_Items[v46 + 1] = (int)data;
      }
      data = (BattleData_o *)DataVals__GetParam(baseVals, 4, 0, 0LL);
      v47 = v27->fields._items;
      v48 = Method_System_Collections_Generic_List_int__Add__;
      ++v27->fields._version;
      if ( !v47 )
        goto LABEL_87;
      v49 = v27->fields._size;
      if ( (unsigned int)v49 >= v47->max_length )
      {
        System_Collections_Generic_List_int___AddWithResize(
          v27,
          (int32_t)data,
          *(const MethodInfo_34F399C **)(*(_QWORD *)(v48[4] + 192LL) + 112LL));
      }
      else
      {
        v27->fields._size = v49 + 1;
        v47->m_Items[v49 + 1] = (int)data;
      }
      data = (BattleData_o *)DataVals__GetParam(baseVals, 6, 0, 0LL);
      v53 = v27->fields._items;
      v54 = Method_System_Collections_Generic_List_int__Add__;
      ++v27->fields._version;
      if ( !v53 )
        goto LABEL_87;
      v55 = v27->fields._size;
      if ( (unsigned int)v55 >= v53->max_length )
      {
        System_Collections_Generic_List_int___AddWithResize(
          v27,
          (int32_t)data,
          *(const MethodInfo_34F399C **)(*(_QWORD *)(v54[4] + 192LL) + 112LL));
      }
      else
      {
        v27->fields._size = v55 + 1;
        v53->m_Items[v55 + 1] = (int)data;
      }
      data = (BattleData_o *)DataVals__GetParam(baseVals, 6, 0, 0LL);
      if ( !v90 )
        goto LABEL_87;
      BattlePointPhase = BattleServantData__GetBattlePointPhase(v90, (int32_t)data, 0LL);
      data = (BattleData_o *)DataVals__GetParamAddTypeIndex(baseVals, 180, BattlePointPhase, -1, 0LL);
      v60 = v27->fields._items;
      v61 = Method_System_Collections_Generic_List_int__Add__;
      ++v27->fields._version;
      if ( !v60 )
        goto LABEL_87;
      v62 = v27->fields._size;
      if ( (unsigned int)v62 >= v60->max_length )
      {
        System_Collections_Generic_List_int___AddWithResize(
          v27,
          (int32_t)data,
          *(const MethodInfo_34F399C **)(*(_QWORD *)(v61[4] + 192LL) + 112LL));
      }
      else
      {
        v27->fields._size = v62 + 1;
        v60->m_Items[v62 + 1] = (int)data;
      }
      if ( DataVals__IsOverChargeState(baseVals, 1, 0LL) )
        goto LABEL_64;
      v66 = DataVals__IsOverChargeState(baseVals, 2, 0LL);
      TargetRarityList = 0LL;
      v32 = 0;
      if ( BattlePointPhase )
      {
LABEL_65:
        v33 = 0;
        v34 = 0;
        buffIndv = 0LL;
        v36 = 0LL;
      }
      else
      {
        v33 = 0;
        v34 = 0;
        buffIndv = 0LL;
        v36 = 0LL;
        if ( !v66 )
        {
          DataVals__SetOverCharge(baseVals, 0, 0LL);
LABEL_64:
          v32 = 0;
          v33 = 0;
          TargetRarityList = 0LL;
          v34 = 0;
          buffIndv = 0LL;
          v36 = 0LL;
        }
      }
LABEL_79:
      v84 = v34;
      isRarityAtk = v33;
      NPFixedDamageValue = DataVals__GetNPFixedDamageValue(baseVals, 0LL);
      damageProcessArgs = (BattleLogic_DamageProcessArgs_o *)sub_1B9025C(BattleLogic_DamageProcessArgs_TypeInfo);
      BattleLogic_DamageProcessArgs___ctor(damageProcessArgs, 0, NPFixedDamageValue, 0LL);
      logic = this->fields.logic;
      v79 = System_Collections_Generic_List_int___ToArray(
              v27,
              (const MethodInfo_34F5454 *)Method_System_Collections_Generic_List_int__ToArray__);
      IsIncludeIgnoreIndividuality = DataVals__IsIncludeIgnoreIndividuality(baseVals, 0LL);
      data = (BattleData_o *)DataVals__isParam(baseVals, 90, 0LL);
      if ( !logic )
        goto LABEL_87;
      data = (BattleData_o *)BattleLogic__getFunctionNpDamagelist(
                               logic,
                               v90,
                               target,
                               v79,
                               funcIndexa,
                               type,
                               actiona,
                               v36,
                               buffIndv,
                               TargetRarityList,
                               IsIncludeIgnoreIndividuality,
                               (unsigned __int8)data & 1,
                               damageProcessArgs,
                               0LL);
      v81 = (BattleActionData_DamageData_o *)data;
      if ( v91 < 8 && ((0x93u >> v91) & 1) != 0 )
      {
        v82 = 1;
        if ( !data )
          goto LABEL_87;
      }
      else
      {
        v82 = v32 & v84;
        if ( !data )
          goto LABEL_87;
      }
      BattleActionData_DamageData__addAttackSideEffectAction((BattleActionData_DamageData_o *)data, 80, 0LL);
      if ( !v87 )
        goto LABEL_87;
      BattleActionData__setDamageData(v87, v81, baseVals, v82, isRarityAtk, 0LL);
      return v87;
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
  __int64 v17; // x1
  void *data; // x0
  struct BattleData_o *v19; // x8
  System_Collections_Generic_List_object__o *player_datalist; // x21
  System_Action_object__o *v21; // x22
  Il2CppObject *v22; // x23
  struct BattleLogicFunction___c_StaticFields *static_fields; // x0
  int32_t v24; // w2
  int32_t v25; // w3
  struct BattleData_o *v26; // x8
  System_Collections_Generic_List_object__o *v27; // x21
  System_Comparison_T__o *v28; // x22
  Il2CppObject *v29; // x23
  struct BattleLogicFunction___c_StaticFields *v30; // x0
  int32_t v31; // w2
  int32_t v32; // w3
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

  if ( (byte_4A729AA & 1) == 0 )
  {
    sub_1B90010(&System_Action_BattleServantData__TypeInfo, *(_QWORD *)&actionId);
    sub_1B90010(&BattleActionData_TypeInfo, v7);
    sub_1B90010(&BattleLogicTask_TypeInfo, v8);
    sub_1B90010(&System_Comparison_BattleServantData__TypeInfo, v9);
    sub_1B90010(&Method_System_Collections_Generic_List_BattleServantData__ForEach__, v10);
    sub_1B90010(&Method_System_Collections_Generic_List_BattleServantData__Sort__, v11);
    sub_1B90010(&Method_System_Collections_Generic_List_BattleServantData__ToArray__, v12);
    sub_1B90010(&Method_BattleLogicFunction___c__functionPtShuffle_b__89_0__, v13);
    sub_1B90010(&Method_BattleLogicFunction___c__functionPtShuffle_b__89_1__, v14);
    sub_1B90010(&BattleLogicFunction___c_TypeInfo, v15);
    byte_4A729AA = 1;
  }
  v16 = (BattleActionData_o *)sub_1B9025C(BattleActionData_TypeInfo);
  BattleActionData___ctor(v16, 0LL);
  data = this->fields.data;
  if ( !data )
    goto LABEL_53;
  BattleData__SubBuffFromPT_42586908((BattleData_o *)data, 0LL, 0LL);
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
    v21 = (System_Action_object__o *)sub_1B9025C(System_Action_BattleServantData__TypeInfo);
    System_Action_object____ctor(v21, v22, Method_BattleLogicFunction___c__functionPtShuffle_b__89_0__, 0LL);
    static_fields = BattleLogicFunction___c_TypeInfo->static_fields;
    static_fields->__9__89_0 = (struct System_Action_BattleServantData__o *)v21;
    sub_1B8FFB4((ServantStatusBattleListViewItem_o *)&static_fields->__9__89_0, (int32_t)v21, v24, v25);
  }
  if ( !player_datalist )
    goto LABEL_53;
  System_Collections_Generic_List_object___ForEach(
    player_datalist,
    (System_Action_T__o *)v21,
    (const MethodInfo_3511400 *)Method_System_Collections_Generic_List_BattleServantData__ForEach__);
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
    v28 = (System_Comparison_T__o *)sub_1B9025C(System_Comparison_BattleServantData__TypeInfo);
    System_Comparison_object____ctor(v28, v29, Method_BattleLogicFunction___c__functionPtShuffle_b__89_1__, 0LL);
    v30 = BattleLogicFunction___c_TypeInfo->static_fields;
    v30->__9__89_1 = (struct System_Comparison_BattleServantData__o *)v28;
    sub_1B8FFB4((ServantStatusBattleListViewItem_o *)&v30->__9__89_1, (int32_t)v28, v31, v32);
  }
  if ( !v27 )
    goto LABEL_53;
  System_Collections_Generic_List_object___Sort_55649412(
    v27,
    v28,
    (const MethodInfo_3512484 *)Method_System_Collections_Generic_List_BattleServantData__Sort__);
  v33 = this->fields.data;
  if ( !v33 )
    goto LABEL_53;
  data = v33->fields.player_datalist;
  if ( !data )
    goto LABEL_53;
  data = System_Collections_Generic_List_object___ToArray(
           (System_Collections_Generic_List_object__o *)data,
           (const MethodInfo_3512518 *)Method_System_Collections_Generic_List_BattleServantData__ToArray__);
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
        sub_1B90274(data, v17);
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
    sub_1B9026C(data, v17);
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
        *(_BYTE *)(v43 + 468) = 1;
        *(_BYTE *)(v43 + 533) = 1;
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
  v45 = (BattleLogicTask_o *)sub_1B9025C(BattleLogicTask_TypeInfo);
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
  int32_t v27; // w3
  __int64 v28; // x0
  int32_t v29; // w2
  int32_t v30; // w3
  int32_t v31; // w2
  int32_t v32; // w3
  __int64 v33; // x0
  int32_t v34; // w2
  int32_t v35; // w3
  __int64 v36; // x0
  int32_t v37; // w2
  int32_t v38; // w3
  __int64 v39; // x0
  int32_t v40; // w2
  int32_t v41; // w3
  struct BattleData_o *v42; // x8
  int32_t uniqueId; // w21
  int32_t v44; // w22
  bool IsOpponentPTUniqueID; // w0

  if ( (byte_4A729A8 & 1) == 0 )
  {
    sub_1B90010(&BattleActionData_TypeInfo, *(_QWORD *)&playerId);
    sub_1B90010(&BattleActionData_DamageData_TypeInfo, v11);
    sub_1B90010(&int___TypeInfo, v12);
    sub_1B90010(&BattleBuffData_ShowBuffData___TypeInfo, v13);
    byte_4A729A8 = 1;
  }
  v14 = (BattleActionData_o *)sub_1B9025C(BattleActionData_TypeInfo);
  BattleActionData___ctor(v14, 0LL);
  data = (__int64)this->fields.data;
  if ( !data )
    goto LABEL_28;
  data = (__int64)BattleData__getServantData((BattleData_o *)data, playerId, 0LL);
  if ( !this->fields.data )
    goto LABEL_28;
  v17 = (BattleServantData_o *)data;
  ServantData = BattleData__getServantData(this->fields.data, targetId, 0LL);
  v19 = sub_1B9025C(BattleActionData_DamageData_TypeInfo);
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
  v25 = sub_1B900B8(BattleBuffData_ShowBuffData___TypeInfo, 0LL);
  *(_QWORD *)(v19 + 64) = v25;
  sub_1B8FFB4((ServantStatusBattleListViewItem_o *)(v19 + 64), v25, v26, v27);
  v28 = sub_1B900B8(BattleBuffData_ShowBuffData___TypeInfo, 0LL);
  *(_QWORD *)(v19 + 72) = v28;
  sub_1B8FFB4((ServantStatusBattleListViewItem_o *)(v19 + 72), v28, v29, v30);
  data = sub_1B900B8(int___TypeInfo, 1LL);
  if ( !data )
    goto LABEL_28;
  if ( !*(_DWORD *)(data + 24) )
    sub_1B90274(data, data);
  *(_DWORD *)(data + 32) = v22;
  *(_QWORD *)(v19 + 96) = data;
  sub_1B8FFB4((ServantStatusBattleListViewItem_o *)(v19 + 96), data, v31, v32);
  v33 = sub_1B900B8(int___TypeInfo, 0LL);
  *(_QWORD *)(v19 + 104) = v33;
  sub_1B8FFB4((ServantStatusBattleListViewItem_o *)(v19 + 104), v33, v34, v35);
  v36 = sub_1B900B8(int___TypeInfo, 0LL);
  *(_QWORD *)(v19 + 112) = v36;
  sub_1B8FFB4((ServantStatusBattleListViewItem_o *)(v19 + 112), v36, v37, v38);
  v39 = sub_1B900B8(int___TypeInfo, 0LL);
  *(_QWORD *)(v19 + 120) = v39;
  sub_1B8FFB4((ServantStatusBattleListViewItem_o *)(v19 + 120), v39, v40, v41);
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
    sub_1B9026C(data, v15);
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
  System_Func_object__bool__o *_9__83_0; // x22
  Il2CppObject *v18; // x25
  struct BattleLogicFunction___c_StaticFields *static_fields; // x0
  int32_t v20; // w2
  int32_t v21; // w3
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

  if ( (byte_4A729A4 & 1) == 0 )
  {
    sub_1B90010(&BattleActionData_TypeInfo, funcEnt);
    sub_1B90010(&Method_System_Linq_Enumerable_Count_BattleServantData____76211712, v8);
    sub_1B90010(&System_Func_BattleServantData__bool__TypeInfo, v9);
    sub_1B90010(&Method_BattleLogicFunction___c__functionReplaceEnemyMember_b__83_0__, v10);
    sub_1B90010(&BattleLogicFunction___c_TypeInfo, v11);
    byte_4A729A4 = 1;
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
  _9__83_0 = (System_Func_object__bool__o *)v16->static_fields->__9__83_0;
  if ( !_9__83_0 )
  {
    if ( !v16->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v16);
      v16 = BattleLogicFunction___c_TypeInfo;
    }
    v18 = (Il2CppObject *)v16->static_fields->__9;
    _9__83_0 = (System_Func_object__bool__o *)sub_1B9025C(System_Func_BattleServantData__bool__TypeInfo);
    System_Func_object__bool____ctor(
      _9__83_0,
      v18,
      Method_BattleLogicFunction___c__functionReplaceEnemyMember_b__83_0__,
      0LL);
    static_fields = BattleLogicFunction___c_TypeInfo->static_fields;
    static_fields->__9__83_0 = (struct System_Func_BattleServantData__bool__o *)_9__83_0;
    sub_1B8FFB4((ServantStatusBattleListViewItem_o *)&static_fields->__9__83_0, (int32_t)_9__83_0, v20, v21);
  }
  data = (BattleData_o *)System_Linq_Enumerable__Count_object__48941228(
                           enemy_datalist,
                           (System_Func_TSource__bool__o *)_9__83_0,
                           (const MethodInfo_2EAC8AC *)Method_System_Linq_Enumerable_Count_BattleServantData____76211712);
  if ( (int)data < 4 )
    return 0LL;
  if ( !v14 )
    goto LABEL_61;
  if ( !v14->fields.m_CancellationTokenSource )
    return 0LL;
  v22 = (BattleActionData_o *)sub_1B9025C(BattleActionData_TypeInfo);
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
        sub_1B90274(data, funcEnt);
      }
    }
LABEL_61:
    sub_1B9026C(data, funcEnt);
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

  if ( (byte_4A729A3 & 1) == 0 )
  {
    sub_1B90010(&BattleActionData_TypeInfo, *(_QWORD *)&targetId);
    byte_4A729A3 = 1;
  }
  v11 = (BattleActionData_o *)sub_1B9025C(BattleActionData_TypeInfo);
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
    sub_1B90274(data, v12);
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
    || (BattleData__SubBuffFromPT_42586908(data, v15, 0LL), (data = this->fields.data) == 0LL) )
  {
LABEL_27:
    sub_1B9026C(data, v12);
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

  if ( (byte_4A729A2 & 1) == 0 )
  {
    sub_1B90010(&BattleActionData_TypeInfo, *(_QWORD *)&targetId);
    byte_4A729A2 = 1;
  }
  v7 = (BattleActionData_o *)sub_1B9025C(BattleActionData_TypeInfo);
  BattleActionData___ctor(v7, 0LL);
  data = this->fields.data;
  if ( !data
    || (BattleData__SubBuffFromPT_42586908(data, 0LL, 0LL), (data = this->fields.data) == 0LL)
    || (BattleData__shuffleCommand(data, 0LL), (data = (BattleData_o *)this->fields.logic) == 0LL)
    || (BattleLogic__drawCommand((BattleLogic_o *)data, 0LL), (data = (BattleData_o *)this->fields.logic) == 0LL)
    || (BattleLogic__setDrawCard((BattleLogic_o *)data, 0LL), !v7) )
  {
    sub_1B9026C(data, v8);
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
  int32_t v26; // w3
  unsigned int uniqueId; // w8
  struct System_String_o *popupText; // x1
  struct System_Int32_array *effectList; // x1
  int32_t v30; // w2
  int32_t v31; // w3

  if ( (byte_4A729AE & 1) == 0 )
  {
    sub_1B90010(&BattleActionData_TypeInfo, *(_QWORD *)&targetId);
    sub_1B90010(&BattleActionData_BuffData_TypeInfo, v13);
    byte_4A729AE = 1;
  }
  v14 = (BattleActionData_o *)sub_1B9025C(BattleActionData_TypeInfo);
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
  v24 = sub_1B9025C(BattleActionData_BuffData_TypeInfo);
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
  sub_1B8FFB4((ServantStatusBattleListViewItem_o *)(v24 + 56), (int32_t)popupText, v25, v26);
  *(_QWORD *)(v24 + 64) = *(_QWORD *)&funcEnt->fields.popupIconId;
  effectList = funcEnt->fields.effectList;
  *(_QWORD *)(v24 + 72) = effectList;
  sub_1B8FFB4((ServantStatusBattleListViewItem_o *)(v24 + 72), (int32_t)effectList, v30, v31);
  *(_DWORD *)(v24 + 28) = 2;
  if ( !v14 )
LABEL_22:
    sub_1B9026C(data, v15);
  BattleActionData__setBuffData(v14, (BattleActionData_BuffData_o *)v24, 0LL, 0LL);
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
  int32_t targetId; // w1
  const MethodInfo *v28; // x6
  BattleActionData_o *RevivalHealData; // x0
  BattleActorControl_o *v30; // x26
  BattleServantData_o *battleSvtData; // x0
  BattleActionData_o *v32; // x27
  int32_t v33; // w1
  const MethodInfo *v34; // x6
  BattleActionData_o *v35; // x0

  if ( (byte_4A729BA & 1) == 0 )
  {
    sub_1B90010(&BattleActionData_TypeInfo, actionData);
    sub_1B90010(&Method_DataManager_GetMasterData_SkillLvMaster___, v13);
    sub_1B90010(&UnityEngine_Object_TypeInfo, v14);
    sub_1B90010(&Method_SingletonMonoBehaviour_DataManager__getInstance__, v15);
    byte_4A729BA = 1;
  }
  v16 = *((_QWORD *)Method_SingletonMonoBehaviour_DataManager__getInstance__ + 4);
  if ( (*(_BYTE *)(v16 + 309) & 1) == 0 )
    v16 = sub_1BE1EEC(v16);
  v17 = *(_QWORD *)(*(_QWORD *)(v16 + 192) + 16LL);
  if ( (*(_BYTE *)(v17 + 309) & 1) == 0 )
    v17 = sub_1BE1EEC(v17);
  MasterData_object = **(DataManager_o ***)(v17 + 184);
  if ( !MasterData_object )
    goto LABEL_49;
  MasterData_object = (DataManager_o *)DataManager__GetMasterData_object_(
                                         MasterData_object,
                                         (const MethodInfo_2E8E21C *)Method_DataManager_GetMasterData_SkillLvMaster___);
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
          v25 = (BattleActionData_o *)sub_1B9025C(BattleActionData_TypeInfo);
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
                              v28);
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
      sub_1B9026C(MasterData_object, actionData);
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
  v30 = BattleData__GetPartsActor((BattleData_o *)MasterData_object, 2, 0LL);
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  MasterData_object = (DataManager_o *)UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)v30, 0LL, 0LL);
  if ( ((unsigned __int8)MasterData_object & 1) != 0 )
  {
    if ( v30 )
    {
      battleSvtData = v30->fields.battleSvtData;
      if ( !battleSvtData || BattleServantData__isAlive(battleSvtData, 0, 0LL) )
        goto LABEL_42;
      v32 = (BattleActionData_o *)sub_1B9025C(BattleActionData_TypeInfo);
      BattleActionData___ctor(v32, 0LL);
      if ( v32 )
      {
        v32->fields.actorId = actionData->fields.actorId;
        v32->fields.targetId = v30->fields.uniqueID;
        BattleActionData__setStateActors(v32, 0LL);
        v33 = v32->fields.targetId;
        v32->fields.isRevival = 1;
        v32->fields.motionId = 2202;
        v35 = BattleLogicFunction__createRevivalHealData(
                this,
                v33,
                funcEnt,
                baseVals,
                funcIndex,
                isCommandSideEffect,
                v34);
        BattleActionData__addAction(v32, v35, 0LL);
        if ( v25 )
          BattleActionData__AddAfterActionData(v25, v32, 0, 0LL);
        else
          v25 = v32;
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
  __int64 v13; // x1
  int32_t v14; // w1
  int32_t v15; // w2
  int32_t v16; // w3
  BattleData_o *data; // x24
  BattleActionData_SkillShiftServant_o *v18; // x23

  if ( (byte_4A729B7 & 1) == 0 )
  {
    sub_1B90010(&BattleActionData_TypeInfo, actionData);
    sub_1B90010(&BattleActionData_SkillShiftServant_TypeInfo, v9);
    sub_1B90010(&StringLiteral_8734/*"MOTION_SHIFT"*/, v10);
    byte_4A729B7 = 1;
  }
  v11 = sub_1B9025C(BattleActionData_TypeInfo);
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
  v14 = StringLiteral_8734/*"MOTION_SHIFT"*/;
  *(_QWORD *)(v11 + 64) = StringLiteral_8734/*"MOTION_SHIFT"*/;
  sub_1B8FFB4((ServantStatusBattleListViewItem_o *)(v11 + 64), v14, v15, v16);
  data = this->fields.data;
  v18 = (BattleActionData_SkillShiftServant_o *)sub_1B9025C(BattleActionData_SkillShiftServant_TypeInfo);
  BattleActionData_SkillShiftServant___ctor(v18, data, npcId, 0LL);
  if ( !v18 )
LABEL_8:
    sub_1B9026C(v12, v13);
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
  int32_t v26; // w3
  const MethodInfo *v27; // x7
  struct System_Collections_Generic_List_BattleBuffData_BuffData__o *RemovedAllBuffList_k__BackingField; // x25
  BattleActionData_o *v29; // x22
  const MethodInfo *v31; // [xsp+8h] [xbp-78h]
  BattleLogicFunction_ProcListInArgs_o *v32; // [xsp+18h] [xbp-68h]

  if ( (byte_4A72996 & 1) == 0 )
  {
    sub_1B90010(&BattleActionData_TypeInfo, *(_QWORD *)&targetId);
    sub_1B90010(&BattleServantSnapShotOnBuffUpdate_TypeInfo, v16);
    sub_1B90010(&Method_System_Collections_Generic_List_BattleBuffData_BuffData__get_Count__, v17);
    byte_4A72996 = 1;
  }
  data = this->fields.data;
  if ( !data )
    goto LABEL_12;
  ServantData = BattleData__getServantData(data, targetId, 0LL);
  v20 = (BattleServantSnapShotOnBuffUpdate_o *)sub_1B9025C(BattleServantSnapShotOnBuffUpdate_TypeInfo);
  BattleServantSnapShotOnBuffUpdate___ctor(v20, ServantData, 0LL);
  if ( !funcEnt )
    goto LABEL_12;
  if ( !baseVals )
    goto LABEL_12;
  vals = funcEnt->fields.vals;
  Value = DataVals__GetValue(baseVals, 0LL);
  Value2 = DataVals__GetValue2(baseVals, 0LL);
  data = (BattleData_o *)DataVals__isParam(baseVals, 89, 0LL);
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
        sub_1B8FFB4((ServantStatusBattleListViewItem_o *)subBuffInfo, (int32_t)v24, v25, v26),
        !*subBuffInfo)
    || (RemovedAllBuffList_k__BackingField = (*subBuffInfo)->fields._RemovedAllBuffList_k__BackingField) == 0LL )
  {
LABEL_12:
    sub_1B9026C(data, *(_QWORD *)&targetId);
  }
  if ( RemovedAllBuffList_k__BackingField->fields._size < 1 )
    return BattleLogicFunction__getNoEffectObject(this, targetId, index, baseVals, isCommandSideEffect, 0LL, 0LL, v27);
  v29 = (BattleActionData_o *)sub_1B9025C(BattleActionData_TypeInfo);
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
  BattleLogicFunction___c__DisplayClass85_0_o *v24; // x19
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
  System_Func_object__object__o *_9__85_0; // x20
  Il2CppObject *v36; // x29
  struct BattleLogicFunction___c_StaticFields *static_fields; // x0
  int32_t v38; // w2
  int32_t v39; // w3
  BattleLogicFunctionUtilities_FunctionProgressCache_o *v40; // x29
  BattleLogicFunctionUtilities_FunctionProgressCache_SvtCache_o *ElemByUniqueId; // x19
  BattleLogicSkill_SkillExecArgs_o *v42; // x20
  struct BattleServantSnapShot_o *Before_k__BackingField; // x8
  struct BattleServantSnapShot_o *After_k__BackingField; // x1
  int32_t v45; // w2
  int32_t v46; // w3
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
  BattleLogicFunction___c__DisplayClass85_0_o *v70; // [xsp+28h] [xbp-78h]
  BattleActionData_o *v71; // [xsp+30h] [xbp-70h]

  if ( (byte_4A729A6 & 1) == 0 )
  {
    sub_1B90010(&BattleActionEffect_AddSubChangeMaxHpBuff_TypeInfo, *(_QWORD *)&targetId);
    sub_1B90010(&BattleActionData_TypeInfo, v11);
    sub_1B90010(&BattleServantSnapShotShiftServant_TypeInfo, v12);
    sub_1B90010(&BattleActionData_BuffData_TypeInfo, v13);
    sub_1B90010(&Method_System_Linq_Enumerable_FirstOrDefault_BattleActionData_BuffData___, v14);
    sub_1B90010(&System_Func_BattleServantData__BattleServantSnapShot__TypeInfo, v15);
    sub_1B90010(&System_Func_BattleActionData_BuffData__bool__TypeInfo, v16);
    sub_1B90010(&BattleLogicFunctionUtilities_FunctionProgressCache_TypeInfo, v17);
    sub_1B90010(&BattleActionData_ShiftServant_TypeInfo, v18);
    sub_1B90010(&BattleLogicSkill_SkillExecArgs_TypeInfo, v19);
    sub_1B90010(&Method_BattleLogicFunction___c__functionTransformServant_b__85_0__, v20);
    sub_1B90010(&Method_BattleLogicFunction___c__DisplayClass85_0__functionTransformServant_b__1__, v21);
    sub_1B90010(&BattleLogicFunction___c__DisplayClass85_0_TypeInfo, v22);
    sub_1B90010(&BattleLogicFunction___c_TypeInfo, v23);
    byte_4A729A6 = 1;
  }
  v24 = (BattleLogicFunction___c__DisplayClass85_0_o *)sub_1B9025C(BattleLogicFunction___c__DisplayClass85_0_TypeInfo);
  BattleLogicFunction___c__DisplayClass85_0___ctor(v24, 0LL);
  if ( !v24 )
    goto LABEL_49;
  v24->fields.targetId = targetId;
  v27 = (BattleActionData_o *)sub_1B9025C(BattleActionData_TypeInfo);
  BattleActionData___ctor(v27, 0LL);
  data = this->fields.data;
  if ( !data )
    goto LABEL_49;
  data = (BattleData_o *)BattleData__getServantData(data, v24->fields.targetId, 0LL);
  if ( !baeVals )
    goto LABEL_49;
  v28 = (BattleServantData_o *)data;
  Param = DataVals__GetParam(baeVals, 6, 0, 0LL);
  v30 = DataVals__GetParam(baeVals, 76, 0, 0LL);
  data = (BattleData_o *)DataVals__IsCancelTransform(baeVals, 0LL);
  if ( ((unsigned __int8)data & 1) != 0 )
  {
    if ( !v28 )
      goto LABEL_49;
    if ( BattleServantData__get_isTransformed(v28, 0LL) )
      Param = -1;
  }
  v70 = v24;
  v31 = sub_1B9025C(BattleActionData_ShiftServant_TypeInfo);
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
  _9__85_0 = (System_Func_object__object__o *)v33->static_fields->__9__85_0;
  if ( !_9__85_0 )
  {
    if ( !v33->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v33);
      v33 = BattleLogicFunction___c_TypeInfo;
    }
    v36 = (Il2CppObject *)v33->static_fields->__9;
    _9__85_0 = (System_Func_object__object__o *)sub_1B9025C(System_Func_BattleServantData__BattleServantSnapShot__TypeInfo);
    System_Func_object__object____ctor(
      _9__85_0,
      v36,
      Method_BattleLogicFunction___c__functionTransformServant_b__85_0__,
      0LL);
    static_fields = BattleLogicFunction___c_TypeInfo->static_fields;
    static_fields->__9__85_0 = (struct System_Func_BattleServantData__BattleServantSnapShot__o *)_9__85_0;
    sub_1B8FFB4((ServantStatusBattleListViewItem_o *)&static_fields->__9__85_0, (int32_t)_9__85_0, v38, v39);
  }
  v40 = (BattleLogicFunctionUtilities_FunctionProgressCache_o *)sub_1B9025C(BattleLogicFunctionUtilities_FunctionProgressCache_TypeInfo);
  BattleLogicFunctionUtilities_FunctionProgressCache___ctor(
    v40,
    v34,
    (System_Func_BattleServantData__BattleServantSnapShot__o *)_9__85_0,
    0LL);
  if ( !v40 )
    goto LABEL_49;
  BattleLogicFunctionUtilities_FunctionProgressCache__MakeBeforeSvtCache(v40, 0LL);
  ElemByUniqueId = BattleLogicFunctionUtilities_FunctionProgressCache__GetElemByUniqueId(v40, v24->fields.targetId, 0LL);
  v42 = (BattleLogicSkill_SkillExecArgs_o *)sub_1B9025C(BattleLogicSkill_SkillExecArgs_TypeInfo);
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
  sub_1B8FFB4((ServantStatusBattleListViewItem_o *)(v31 + 72), (int32_t)After_k__BackingField, v45, v46);
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
    sub_1B9026C(data, v26);
  max_length = SvtCacheArray_k__BackingField->max_length;
  v52 = v71;
  v68 = v28;
  if ( max_length >= 1 )
  {
    v53 = 0;
    do
    {
      if ( v53 >= max_length )
        sub_1B90274(data, v26);
      v54 = SvtCacheArray_k__BackingField->m_Items[v53];
      if ( !v54 )
        goto LABEL_49;
      SvtData_k__BackingField = v54->fields._SvtData_k__BackingField;
      if ( !SvtData_k__BackingField )
        goto LABEL_49;
      uniqueId = SvtData_k__BackingField->fields.uniqueId;
      v57 = (BattleActionData_BuffData_o *)sub_1B9025C(BattleActionData_BuffData_TypeInfo);
      BattleActionData_BuffData___ctor(v57, 0LL);
      if ( !v57 )
        goto LABEL_49;
      v57->fields.targetId = uniqueId;
      v57->fields.isHideEffect = 1;
      v57->fields.functionIndex = funcIndex;
      v58 = v54->fields._Before_k__BackingField;
      v59 = v54->fields._After_k__BackingField;
      v60 = (BattleActionEffect_AddSubChangeMaxHpBuff_o *)sub_1B9025C(BattleActionEffect_AddSubChangeMaxHpBuff_TypeInfo);
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
  v63 = (System_Func_object__bool__o *)sub_1B9025C(System_Func_BattleActionData_BuffData__bool__TypeInfo);
  System_Func_object__bool____ctor(
    v63,
    (Il2CppObject *)v70,
    Method_BattleLogicFunction___c__DisplayClass85_0__functionTransformServant_b__1__,
    0LL);
  data = (BattleData_o *)System_Linq_Enumerable__FirstOrDefault_object__48967524(
                           buffdatalist,
                           (System_Func_TSource__bool__o *)v63,
                           (const MethodInfo_2EB2F64 *)Method_System_Linq_Enumerable_FirstOrDefault_BattleActionData_BuffData___);
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
  int32_t v39; // w3
  int32_t v40; // w8
  __int64 v41; // x0
  int32_t v42; // w2
  int32_t v43; // w3
  __int64 v44; // x0
  int32_t v45; // w2
  int32_t v46; // w3
  System_Int32_array *v47; // x0
  int32_t v48; // w2
  int32_t v49; // w3
  __int64 v50; // x0
  int32_t v51; // w2
  int32_t v52; // w3
  __int64 v53; // x0
  int32_t v54; // w2
  int32_t v55; // w3
  __int64 v56; // x0
  int32_t v57; // w2
  int32_t v58; // w3
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

  if ( (byte_4A729AD & 1) == 0 )
  {
    sub_1B90010(&BattleActionData_TypeInfo, *(_QWORD *)&playerId);
    sub_1B90010(&BattleActionData_DamageValueFuncDamageData_TypeInfo, v15);
    sub_1B90010(&Method_DataManager_GetMaster_SkillMaster___, v16);
    sub_1B90010(&DataManager_TypeInfo, v17);
    sub_1B90010(&Method_DataMasterBase_SkillMaster__SkillEntity__int__TryGetEntity__, v18);
    sub_1B90010(&int___TypeInfo, v19);
    sub_1B90010(&Method_System_Collections_Generic_List_int__ToArray__, v20);
    sub_1B90010(&BattleBuffData_ShowBuffData___TypeInfo, v21);
    byte_4A729AD = 1;
  }
  v69 = 0LL;
  damage = 0.0;
  minimumDamageFlg = 0;
  entity = 0LL;
  v22 = (BattleActionData_o *)sub_1B9025C(BattleActionData_TypeInfo);
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
  v28 = sub_1B9025C(BattleActionData_DamageValueFuncDamageData_TypeInfo);
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
    data = (__int64)DataManager__GetMaster_object_((const MethodInfo_2E8E1C8 *)Method_DataManager_GetMaster_SkillMaster___);
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
           (const MethodInfo_312C5FC *)Method_DataMasterBase_SkillMaster__SkillEntity__int__TryGetEntity__) )
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
    sub_1B8FFB4((ServantStatusBattleListViewItem_o *)(v28 + 136), data, v38, v39);
  }
  *(_WORD *)(v28 + 32) = 0;
  *(_BYTE *)(v28 + 34) = 0;
  v40 = hitStat;
  *(_BYTE *)(v28 + 40) = 0;
  *(_DWORD *)(v28 + 36) = v40;
  v41 = sub_1B900B8(BattleBuffData_ShowBuffData___TypeInfo, 0LL);
  *(_QWORD *)(v28 + 64) = v41;
  sub_1B8FFB4((ServantStatusBattleListViewItem_o *)(v28 + 64), v41, v42, v43);
  v44 = sub_1B900B8(BattleBuffData_ShowBuffData___TypeInfo, 0LL);
  *(_QWORD *)(v28 + 72) = v44;
  sub_1B8FFB4((ServantStatusBattleListViewItem_o *)(v28 + 72), v44, v45, v46);
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
          (const MethodInfo_34F5454 *)Method_System_Collections_Generic_List_int__ToArray__);
  *(_QWORD *)(v28 + 96) = v47;
  sub_1B8FFB4((ServantStatusBattleListViewItem_o *)(v28 + 96), (int32_t)v47, v48, v49);
  v50 = sub_1B900B8(int___TypeInfo, 0LL);
  *(_QWORD *)(v28 + 104) = v50;
  sub_1B8FFB4((ServantStatusBattleListViewItem_o *)(v28 + 104), v50, v51, v52);
  v53 = sub_1B900B8(int___TypeInfo, 0LL);
  *(_QWORD *)(v28 + 112) = v53;
  sub_1B8FFB4((ServantStatusBattleListViewItem_o *)(v28 + 112), v53, v54, v55);
  v56 = sub_1B900B8(int___TypeInfo, 0LL);
  *(_QWORD *)(v28 + 120) = v56;
  sub_1B8FFB4((ServantStatusBattleListViewItem_o *)(v28 + 120), v56, v57, v58);
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
    sub_1B9026C(data, v23);
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
  int32_t v38; // w3
  struct BattleBuffData_o *buffData; // x8
  _QWORD *v40; // x23
  __int64 v41; // x8
  __int64 v42; // x0
  __int64 v43; // x0
  __int64 *v44; // x8
  __int64 v45; // x23
  int32_t v46; // w2
  int32_t v47; // w3
  int32_t v48; // w2
  int32_t v49; // w3
  _QWORD *v50; // x23
  __int64 v51; // x8
  __int64 v52; // x0
  __int64 v53; // x0
  __int64 *v54; // x8
  __int64 v55; // x23
  int32_t v56; // w2
  int32_t v57; // w3
  int32_t v58; // w2
  int32_t v59; // w3
  struct BattleBuffData_o *v60; // x8
  ServantStatusBattleListViewItem_o *p_invalidLossHpData; // x0
  int32_t v62; // w1
  bool v63; // w25
  UnityEngine_Object_o *logic; // x23
  int32_t Wave; // w23
  bool IsOpponentPTUniqueID; // w0
  BattleActionEffect_LossHPFunc_o *v67; // x23
  BattleActionData_BuffData_o *v68; // x0
  struct BattleBuffData_o *v69; // x8
  int32_t v70; // w0
  int32_t v72; // [xsp+18h] [xbp-78h]
  int32_t v73; // [xsp+1Ch] [xbp-74h]
  bool v74; // [xsp+20h] [xbp-70h]
  bool v75; // [xsp+24h] [xbp-6Ch]
  bool minimumDamageFlg; // [xsp+28h] [xbp-68h] BYREF
  float damage; // [xsp+2Ch] [xbp-64h] BYREF

  if ( (byte_4A7299E & 1) == 0 )
  {
    sub_1B90010(&Method_System_Array_Empty_int___, *(_QWORD *)&playerId);
    sub_1B90010(&Method_System_Array_Empty_BattleBuffData_ShowBuffData___, v20);
    sub_1B90010(&BattleActionData_TypeInfo, v21);
    sub_1B90010(&BattleActionData_DamageData_TypeInfo, v22);
    sub_1B90010(&BattleActionEffect_LossHPFunc_TypeInfo, v23);
    sub_1B90010(&UnityEngine_Object_TypeInfo, v24);
    byte_4A7299E = 1;
  }
  damage = 0.0;
  minimumDamageFlg = 0;
  v25 = (BattleActionData_o *)sub_1B9025C(BattleActionData_TypeInfo);
  BattleActionData___ctor(v25, 0LL);
  data = (__int64)this->fields.data;
  if ( !data )
    goto LABEL_67;
  v75 = safe;
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
  v73 = funcIndex;
  v74 = IsDeadOkTurn;
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
  v72 = v30;
  if ( DataVals__IsActNoDamageBuff(baseVals, 0LL) )
  {
    v36 = sub_1B9025C(BattleActionData_DamageData_TypeInfo);
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
    buffData = v29->fields.buffData;
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
        sub_1BE1F48(Method_System_Array_Empty_BattleBuffData_ShowBuffData___);
        v41 = v40[7];
      }
      v42 = *(_QWORD *)(v41 + 16);
      if ( (*(_BYTE *)(v42 + 309) & 1) == 0 )
        v42 = sub_1BE1EEC(v42);
      if ( !*(_DWORD *)(v42 + 224) )
        j_il2cpp_runtime_class_init_0(v42);
      v43 = *(_QWORD *)(v40[7] + 16LL);
      if ( (*(_BYTE *)(v43 + 309) & 1) == 0 )
        v43 = sub_1BE1EEC(v43);
      v44 = *(__int64 **)(v43 + 184);
      v45 = *v44;
      *(_QWORD *)(v36 + 72) = *v44;
      sub_1B8FFB4((ServantStatusBattleListViewItem_o *)(v36 + 72), v45, v37, v38);
      *(_QWORD *)(v36 + 64) = v45;
      sub_1B8FFB4((ServantStatusBattleListViewItem_o *)(v36 + 64), v45, v46, v47);
      v50 = Method_System_Array_Empty_int___;
      v51 = *((_QWORD *)Method_System_Array_Empty_int___ + 7);
      if ( !v51 )
      {
        sub_1BE1F48(Method_System_Array_Empty_int___);
        v51 = v50[7];
      }
      v52 = *(_QWORD *)(v51 + 16);
      if ( (*(_BYTE *)(v52 + 309) & 1) == 0 )
        v52 = sub_1BE1EEC(v52);
      if ( !*(_DWORD *)(v52 + 224) )
        j_il2cpp_runtime_class_init_0(v52);
      v53 = *(_QWORD *)(v50[7] + 16LL);
      if ( (*(_BYTE *)(v53 + 309) & 1) == 0 )
        v53 = sub_1BE1EEC(v53);
      v54 = *(__int64 **)(v53 + 184);
      v55 = *v54;
      *(_QWORD *)(v36 + 120) = *v54;
      sub_1B8FFB4((ServantStatusBattleListViewItem_o *)(v36 + 120), v55, v48, v49);
      *(_QWORD *)(v36 + 112) = v55;
      sub_1B8FFB4((ServantStatusBattleListViewItem_o *)(v36 + 112), v55, v56, v57);
      *(_QWORD *)(v36 + 104) = v55;
      sub_1B8FFB4((ServantStatusBattleListViewItem_o *)(v36 + 104), v55, v58, v59);
      v60 = v29->fields.buffData;
      if ( !v60 )
        goto LABEL_67;
      *(_BYTE *)(v36 + 53) = v60->fields.isNoDamage;
      if ( !v34 )
        goto LABEL_67;
      v34->fields.invalidLossHpData = (struct BattleActionData_DamageData_o *)v36;
      p_invalidLossHpData = (ServantStatusBattleListViewItem_o *)&v34->fields.invalidLossHpData;
      v62 = v36;
    }
    else
    {
      if ( !v34 )
        goto LABEL_67;
      v34->fields.invalidLossHpData = 0LL;
      p_invalidLossHpData = (ServantStatusBattleListViewItem_o *)&v34->fields.invalidLossHpData;
      v62 = 0;
    }
    sub_1B8FFB4(p_invalidLossHpData, v62, v37, v38);
  }
  v63 = !v74 || v75;
  BattleServantData__ResultDamage(v29, Random, v35, 0LL, 0LL, v63, 0LL);
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
        v67 = (BattleActionEffect_LossHPFunc_o *)sub_1B9025C(BattleActionEffect_LossHPFunc_TypeInfo),
        BattleActionEffect_LossHPFunc___ctor(v67, targetId, Random, v63, 0LL),
        BattleActionData_BuffData__SetActionEffectProc(v34, (BattleActionEffect_Base_o *)v67, 0LL),
        !v25) )
  {
LABEL_67:
    sub_1B9026C(data, v26);
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
        v68 = BattleBuffData__UseFieldProgressingDoNotAct((BattleBuffData_o *)data, v29, v73, 0LL);
        BattleActionData__setBuffData(v25, v68, baseVals, 0LL);
      }
    }
  }
  v69 = v29->fields.buffData;
  if ( !v69 )
    goto LABEL_67;
  v69->fields.isNoDamage = 0;
  data = (__int64)this->fields.data;
  if ( !data )
    goto LABEL_67;
  if ( v29->fields.isEnemy != BattleData__isEnemyID((BattleData_o *)data, playerId, 0LL) )
  {
    v70 = ((__int64 (__fastcall *)(BattleServantData_o *, Il2CppMethodPointer))v29->klass->vtable._13_get_resultHp.method)(
            v29,
            v29->klass->vtable._14_set_resultHp.methodPtr);
    BattleServantData__procAccumulationDamage(v29, v72, v70, 0LL);
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
  __int64 v8; // x1
  Il2CppObject *MasterData_object; // x0
  int32_t v10; // w2
  int32_t v11; // w3

  if ( (byte_4A7297F & 1) == 0 )
  {
    sub_1B90010(&Method_DataManager_GetMasterData_FunctionMaster___, method);
    sub_1B90010(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v3);
    byte_4A7297F = 1;
  }
  master = this->fields.master;
  p_master = (ServantStatusBattleListViewItem_o *)&this->fields.master;
  result = master;
  if ( !master )
  {
    Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_374C890 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !Instance )
      sub_1B9026C(0LL, v8);
    MasterData_object = DataManager__GetMasterData_object_(
                          (DataManager_o *)Instance,
                          (const MethodInfo_2E8E21C *)Method_DataManager_GetMasterData_FunctionMaster___);
    p_master->klass = (ServantStatusBattleListViewItem_c *)MasterData_object;
    sub_1B8FFB4(p_master, (int32_t)MasterData_object, v10, v11);
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
  __int64 v10; // x1
  Il2CppObject *MasterData_object; // x0
  int32_t v12; // w2
  int32_t v13; // w3

  if ( (byte_4A7297E & 1) == 0 )
  {
    sub_1B90010(&Method_DataManager_GetMasterData_FunctionMaster___, *(_QWORD *)&id);
    sub_1B90010(&Method_DataMasterBase_FunctionMaster__FunctionEntity__int__GetEntity__, v5);
    sub_1B90010(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v6);
    byte_4A7297E = 1;
  }
  master = this->fields.master;
  p_master = (ServantStatusBattleListViewItem_o *)&this->fields.master;
  Instance = (Il2CppObject *)master;
  if ( !master )
  {
    Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_374C890 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !Instance
      || (MasterData_object = DataManager__GetMasterData_object_(
                                (DataManager_o *)Instance,
                                (const MethodInfo_2E8E21C *)Method_DataManager_GetMasterData_FunctionMaster___),
          p_master->klass = (ServantStatusBattleListViewItem_c *)MasterData_object,
          sub_1B8FFB4(p_master, (int32_t)MasterData_object, v12, v13),
          (Instance = (Il2CppObject *)p_master->klass) == 0LL) )
    {
      sub_1B9026C(Instance, v10);
    }
  }
  return (FunctionEntity_o *)DataMasterBase_object__object__int___GetEntity(
                               (DataMasterBase_TMaster__TEntity__PKType__o *)Instance,
                               id,
                               (const MethodInfo_312C5A8 *)Method_DataMasterBase_FunctionMaster__FunctionEntity__int__GetEntity__);
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

  if ( (byte_4A729A7 & 1) == 0 )
  {
    this = (BattleLogicFunction_o *)sub_1B90010(&BattleActionData_BuffData_TypeInfo, funcEnt);
    byte_4A729A7 = 1;
  }
  if ( !defBuffData
    && (defBuffData = (BattleActionData_BuffData_o *)sub_1B9025C(BattleActionData_BuffData_TypeInfo),
        BattleActionData_BuffData___ctor(defBuffData, 0LL),
        !defBuffData)
    || (defBuffData->fields.targetId = uniqueId, defBuffData->fields.functionIndex = funcIndex, !funcEnt) )
  {
    sub_1B9026C(this, funcEnt);
  }
  popupText = funcEnt->fields.popupText;
  defBuffData->fields.popLabel = popupText;
  sub_1B8FFB4(
    (ServantStatusBattleListViewItem_o *)&defBuffData->fields.popLabel,
    (int32_t)popupText,
    uniqueId,
    funcIndex);
  *(_QWORD *)&defBuffData->fields.popIcon = *(_QWORD *)&funcEnt->fields.popupIconId;
  EffectList = FunctionEntity__getEffectList(funcEnt, 0LL);
  defBuffData->fields.effectList = EffectList;
  sub_1B8FFB4((ServantStatusBattleListViewItem_o *)&defBuffData->fields.effectList, (int32_t)EffectList, v14, v15);
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

  if ( (byte_4A72983 & 1) == 0 )
  {
    sub_1B90010(
      &Method_System_Collections_Generic_Dictionary_FuncList_TYPE__BattleLogicFunctionProcess_BaseFunctionTypeProcess__ContainsKey__,
      *(_QWORD *)&functType);
    sub_1B90010(
      &Method_System_Collections_Generic_Dictionary_FuncList_TYPE__BattleLogicFunctionProcess_BaseFunctionTypeProcess__get_Item__,
      v5);
    byte_4A72983 = 1;
  }
  dicFuncProcess = (System_Collections_Generic_Dictionary_TKey__TValue__o *)this->fields.dicFuncProcess;
  if ( !dicFuncProcess
    || (dicFuncProcess = (System_Collections_Generic_Dictionary_TKey__TValue__o *)System_Collections_Generic_Dictionary_Int32Enum__object___ContainsKey(
                                                                                    dicFuncProcess,
                                                                                    functType,
                                                                                    (const MethodInfo_31AC0A8 *)Method_System_Collections_Generic_Dictionary_FuncList_TYPE__BattleLogicFunctionProcess_BaseFunctionTypeProcess__ContainsKey__),
        !this->fields.dicFuncProcess)
    || (((unsigned __int8)dicFuncProcess & 1) == 0 ? (v7 = 0) : (v7 = functType),
        (dicFuncProcess = (System_Collections_Generic_Dictionary_TKey__TValue__o *)System_Collections_Generic_Dictionary_Int32Enum__object___get_Item(
                                                                                     (System_Collections_Generic_Dictionary_TKey__TValue__o *)this->fields.dicFuncProcess,
                                                                                     v7,
                                                                                     (const MethodInfo_31ABE14 *)Method_System_Collections_Generic_Dictionary_FuncList_TYPE__BattleLogicFunctionProcess_BaseFunctionTypeProcess__get_Item__)) == 0LL) )
  {
    sub_1B9026C(dicFuncProcess, *(_QWORD *)&functType);
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

  if ( (byte_4A72994 & 1) == 0 )
  {
    sub_1B90010(&BattleActionData_TypeInfo, *(_QWORD *)&targetId);
    byte_4A72994 = 1;
  }
  v8 = (BattleActionData_o *)sub_1B9025C(BattleActionData_TypeInfo);
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
    sub_1B9026C(GrayActionBuffData, v10);
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
    sub_1B9026C(this, baseVals);
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
  int32_t v23; // w3
  __int64 v24; // x0
  __int64 v25; // x1
  __int64 v26; // x0
  int32_t v27; // w2
  int32_t v28; // w3

  v10 = defBuffData;
  if ( (byte_4A72990 & 1) == 0 )
  {
    sub_1B90010(&BattleActionData_TypeInfo, *(_QWORD *)&targetId);
    sub_1B90010(&BattleActionData_BuffData_TypeInfo, v18);
    sub_1B90010(&int___TypeInfo, v19);
    sub_1B90010(&StringLiteral_1/*""*/, v20);
    byte_4A72990 = 1;
  }
  v21 = (BattleActionData_o *)sub_1B9025C(BattleActionData_TypeInfo);
  BattleActionData___ctor(v21, 0LL);
  if ( !defBuffData )
  {
    v10 = (BattleActionData_BuffData_o *)sub_1B9025C(BattleActionData_BuffData_TypeInfo);
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
  sub_1B8FFB4((ServantStatusBattleListViewItem_o *)&v10->fields.popLabel, (int32_t)dispName, v22, v23);
  v26 = sub_1B900B8(int___TypeInfo, 0LL);
  v10->fields.effectList = (struct System_Int32_array *)v26;
  sub_1B8FFB4((ServantStatusBattleListViewItem_o *)&v10->fields.effectList, v26, v27, v28);
  if ( !v21
    || (BattleActionData__setBuffData(v21, v10, 0LL, 0LL),
        v10->fields.IsNoEffect = isNoEffect,
        v10->fields.isCommandAfter = isCommandSideEffect,
        !dataVals) )
  {
LABEL_10:
    sub_1B9026C(v24, v25);
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
  if ( (byte_4A72991 & 1) != 0 )
  {
    if ( uniqueText )
      goto LABEL_3;
  }
  else
  {
    sub_1B90010(&LocalizationManager_TypeInfo, *(_QWORD *)&targetId);
    this = (BattleLogicFunction_o *)sub_1B90010(&StringLiteral_2922/*"BATTLE_MISS_FUNCTION"*/, v16);
    byte_4A72991 = 1;
    if ( v9 )
    {
LABEL_3:
      if ( dataVals )
        goto LABEL_4;
LABEL_9:
      sub_1B9026C(this, *(_QWORD *)&targetId);
    }
  }
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  this = (BattleLogicFunction_o *)LocalizationManager__Get((System_String_o *)StringLiteral_2922/*"BATTLE_MISS_FUNCTION"*/, 0LL);
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
  if ( (byte_4A72992 & 1) != 0 )
  {
    if ( uniqueText )
      goto LABEL_3;
  }
  else
  {
    sub_1B90010(&LocalizationManager_TypeInfo, *(_QWORD *)&targetId);
    this = (BattleLogicFunction_o *)sub_1B90010(&StringLiteral_2933/*"BATTLE_NO_EFFECT_FUNCTION"*/, v16);
    byte_4A72992 = 1;
    if ( v9 )
    {
LABEL_3:
      if ( dataVals )
        goto LABEL_4;
LABEL_9:
      sub_1B9026C(this, *(_QWORD *)&targetId);
    }
  }
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  this = (BattleLogicFunction_o *)LocalizationManager__Get((System_String_o *)StringLiteral_2933/*"BATTLE_NO_EFFECT_FUNCTION"*/, 0LL);
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
  System_Collections_Generic_IEnumerable_TSource__o *TargetIds_37765440; // x20
  System_Func_int__bool__o *v21; // x21
  System_Collections_Generic_IEnumerable_TSource__o *v22; // x0

  if ( (byte_4A7298A & 1) == 0 )
  {
    sub_1B90010(&Method_BattleLogicFunction__getTargetids_b__55_0__, mainAction);
    sub_1B90010(&Target_BattleTargetArgs_TypeInfo, v9);
    sub_1B90010(&Method_System_Linq_Enumerable_ToArray_int___, v10);
    sub_1B90010(&Method_System_Linq_Enumerable_Where_int___, v11);
    sub_1B90010(&System_Func_int__bool__TypeInfo, v12);
    byte_4A7298A = 1;
  }
  args = (Target_BattleTargetArgs_o *)sub_1B9025C(Target_BattleTargetArgs_TypeInfo);
  Target_BattleTargetArgs___ctor(args, dataVals, 0LL);
  if ( !mainAction )
    sub_1B9026C(v14, v15);
  data = this->fields.data;
  actorId = mainAction->fields.actorId;
  targetId = mainAction->fields.targetId;
  PTTargetId = BattleActionData__getPTTargetId(mainAction, 0LL);
  TargetIds_37765440 = (System_Collections_Generic_IEnumerable_TSource__o *)Target__getTargetIds_37765440(
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
  v21 = (System_Func_int__bool__o *)sub_1B9025C(System_Func_int__bool__TypeInfo);
  System_Func_int__bool____ctor(v21, (Il2CppObject *)this, Method_BattleLogicFunction__getTargetids_b__55_0__, 0LL);
  v22 = System_Linq_Enumerable__Where_int_(
          TargetIds_37765440,
          (System_Func_TSource__bool__o *)v21,
          (const MethodInfo_2ECC658 *)Method_System_Linq_Enumerable_Where_int___);
  return System_Linq_Enumerable__ToArray_int_(
           v22,
           (const MethodInfo_2EC6DFC *)Method_System_Linq_Enumerable_ToArray_int___);
}


BattleFieldEnvironmentData_o *__fastcall BattleLogicFunction__get_FieldEnvData(
        BattleLogicFunction_o *this,
        const MethodInfo *method)
{
  struct BattleData_o *data; // x8

  data = this->fields.data;
  if ( !data )
    sub_1B9026C(this, method);
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
    sub_1B9026C(this, passive);
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
    sub_1B9026C(this, args);
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
    sub_1B9026C(this, 0LL);
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
        sub_1B90274(this, *(_QWORD *)&uniqueId);
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
    sub_1B9026C(this, *(_QWORD *)&uniqueId);
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
  UnityEngine_Object_o *logic; // x24
  BattleLogicFunction_ProcListInArgs_o *v79; // x24
  int32_t *p_actSetId; // x24
  WeightRate_int__o *v81; // x23
  signed int max_length; // w8
  unsigned int v83; // w28
  Il2CppClass **v84; // x8
  DataVals_o *v85; // x25
  int32_t ActSetWeight; // w26
  int32_t Random; // w0
  System_String_o *v88; // x0
  BattleLogicFunction___c_c *v89; // x0
  System_Object_array *funcUnitArray_k__BackingField; // x21
  System_Func_object__bool__o *_9__41_0; // x22
  Il2CppObject *v92; // x23
  struct BattleLogicFunction___c_StaticFields *static_fields; // x0
  int32_t v94; // w2
  int32_t v95; // w3
  BattleLogicFunction___c_c *v96; // x0
  System_Collections_Generic_IEnumerable_TSource__o *v97; // x21
  System_Func_object__bool__o *_9__41_1; // x22
  Il2CppObject *v99; // x23
  struct BattleLogicFunction___c_StaticFields *v100; // x0
  int32_t v101; // w2
  int32_t v102; // w3
  int v103; // w21
  bool v104; // w22
  BattleServantData_o *v105; // x25
  SkillValueUpApplierPlayerMaster_o *v106; // x23
  BattleData_o *v107; // x21
  struct BattleLogicFunctionProcess_FunctionUnitCheck_array *v108; // x8
  int v109; // w8
  struct BattleLogicFunctionProcess_FunctionUnitCheck_array *v110; // x23
  BattleLogicFunction_FuncSideEffectFunctionArgument_o *v111; // x26
  int v112; // w27
  BattleLogicFunctionProcess_FunctionUnitCheck_o *v113; // x21
  DataVals_o *dataVals_k__BackingField; // x29
  const MethodInfo *v115; // x3
  const MethodInfo *v116; // x4
  BattleLogicFunction___c_c *v117; // x0
  System_Collections_Generic_IEnumerable_TSource__o *funcTargetArray_k__BackingField; // x21
  System_Func_object__bool__o *_9__41_2; // x27
  Il2CppObject *v120; // x28
  struct BattleLogicFunction___c_StaticFields *v121; // x0
  int32_t v122; // w2
  int32_t v123; // w3
  System_Collections_Generic_IEnumerable_TSource__o *v124; // x21
  BattleLogicFunction___c_c *v125; // x8
  System_Func_object__int__o *_9__41_3; // x27
  Il2CppObject *v127; // x28
  struct BattleLogicFunction___c_StaticFields *v128; // x0
  int32_t v129; // w2
  int32_t v130; // w3
  System_Collections_Generic_IEnumerable_TSource__o *v131; // x0
  System_Int32_array *v132; // x21
  bool v133; // w27
  BattleLogicFunction_PreAttackSideEffectMakeArgument_o *v134; // x28
  BattleLogicFunction_SideEffectMakeArgument_o *v135; // x0
  const MethodInfo *v136; // x5
  struct BattleLogicFunctionProcess_FunctionTargetCheck_array *v137; // x23
  int v138; // w8
  int i; // w25
  BattleLogicFunctionProcess_FunctionTargetCheck_o *v140; // x28
  int32_t targetId_k__BackingField; // w21
  BattleLogicFunction_o *v142; // x27
  const MethodInfo *v143; // x7
  BattleActionData_o *NoEffectObject; // x0
  int32_t *v145; // x24
  struct System_Int32_array *vals; // x8
  int commandType; // w8
  BattleActionData_o *v148; // x0
  bool v149; // w0
  const MethodInfo *v150; // x5
  const MethodInfo *v151; // x3
  int32_t actorId; // w28
  int32_t v153; // w22
  bool isSafeDamage; // w0
  int32_t v155; // w2
  const MethodInfo *v156; // x7
  const MethodInfo *v157; // x7
  int32_t v158; // w1
  int32_t v159; // w2
  int32_t v160; // w5
  bool isDamage; // w0
  int v162; // w9
  int v163; // w8
  struct System_Int32_array *items; // x8
  _QWORD *v165; // x9
  __int64 size; // x10
  BattleActionData_o *v167; // x0
  const MethodInfo *v168; // x4
  BattleData_o *v169; // x28
  int32_t Value; // w24
  BattleLogicFunction_o *v171; // x0
  const MethodInfo *v172; // x6
  BattleData_o *v173; // x28
  const MethodInfo *v174; // x7
  bool isUnaffected; // w22
  int CorrectedValueFuncGainNp; // w28
  const MethodInfo *v177; // x7
  BattleLogicFunction_o *v178; // x0
  int32_t v179; // w22
  const MethodInfo *v180; // x6
  BattleActionData_BuffData_o *v181; // x28
  int32_t v182; // w0
  BattleLogicFunction_o *v183; // x0
  int32_t v184; // w24
  const MethodInfo *v185; // x6
  int32_t v186; // w1
  int32_t v187; // w22
  System_Int32_array *TargetList; // x28
  int32_t v189; // w0
  const MethodInfo *v190; // x6
  int32_t v191; // w22
  System_Int32_array *v192; // x28
  int32_t v193; // w0
  int32_t v194; // w2
  FunctionEntity_o *v195; // x1
  BattleActionData_BuffData_o *FunctionObject; // x0
  BattleLogicFunction_o *v197; // x0
  int32_t v198; // w1
  const MethodInfo *v199; // x3
  int32_t v200; // w22
  bool v201; // w0
  bool v202; // w8
  bool v203; // w6
  bool v204; // w7
  BattleLogicFunction_o *v205; // x0
  int32_t v206; // w1
  BattleActionData_o *v207; // x0
  const MethodInfo *v208; // x7
  const MethodInfo *v209; // x7
  const MethodInfo *v210; // x6
  int32_t v211; // w1
  FunctionEntity_o *v212; // x2
  DataVals_o *v213; // x3
  int32_t v214; // w4
  const MethodInfo *v215; // x5
  BattleActionData_o *v216; // x0
  FunctionEntity_o *v217; // x1
  FunctionEntity_o *v218; // x3
  DataVals_o *v219; // x4
  const MethodInfo *v220; // x6
  int32_t applyTarget; // w8
  FunctionEntity_o *v222; // x2
  const MethodInfo *v223; // x6
  BattleActionData_o *v224; // x0
  const MethodInfo *v225; // x5
  BattleActionData_o *v226; // x0
  FunctionEntity_o *v227; // x2
  const MethodInfo *v228; // x6
  int32_t v229; // w1
  FunctionEntity_o *v230; // x2
  DataVals_o *v231; // x3
  int32_t v232; // w4
  const MethodInfo *v233; // x5
  BattleActionData_o *v234; // x0
  FunctionEntity_o *v235; // x3
  int32_t v236; // w5
  const MethodInfo *v237; // x6
  _BOOL8 v238; // x0
  FunctionEntity_o *v239; // x2
  int32_t v240; // w4
  const MethodInfo *v241; // x5
  const MethodInfo *v242; // x3
  int32_t v243; // w22
  int32_t v244; // w28
  char v245; // w5
  const MethodInfo *v246; // x7
  BattleLogicFunction_o *v247; // x0
  int32_t v248; // w1
  int32_t v249; // w2
  int32_t v250; // w2
  int32_t v251; // w3
  struct BattleData_o *v252; // x8
  struct BattleCommandData_array *draw_commandlist; // x1
  int v254; // w22
  bool v255; // w28
  BattleServantSnapShotOnBuffUpdate_o *v256; // x24
  System_Int32_array *v257; // x0
  BattleData_o *v258; // x24
  int32_t v259; // w28
  Generator_BGMFromChangeBGMFunc_o *v260; // x22
  const MethodInfo *v261; // x4
  const MethodInfo *v262; // x6
  System_Int32_array *v263; // x28
  int32_t SameIndiualityBuffSum; // w0
  int32_t v265; // w28
  bool v266; // w4
  int32_t v267; // w2
  DataVals_o *v268; // x3
  BattleActionData_BuffData_o *v269; // x6
  const MethodInfo *v270; // x7
  int32_t v271; // w1
  int32_t v272; // w2
  int32_t v273; // w5
  const MethodInfo *v274; // x4
  const MethodInfo *v275; // x4
  _BOOL8 v276; // x0
  const MethodInfo *v277; // x3
  bool v278; // w28
  int32_t HpPerValue; // w0
  const MethodInfo *v280; // x3
  bool v281; // w2
  BattleLogicFunction_o *v282; // x0
  DataVals_o *v283; // x1
  _BOOL8 updated; // x0
  const MethodInfo *v285; // x6
  BattleActionData_MasterBuffData_o *v286; // x24
  Generator_BGFromQuickChangeBGFunc_o *v287; // x22
  const MethodInfo *v288; // x3
  int32_t Param; // w0
  const MethodInfo *v290; // x4
  BattleBuffData_o *klass; // x28
  BattleActionData_UpShiftGaugeData_o *v292; // x22
  const MethodInfo *v293; // x5
  DataVals_o *v294; // x3
  const MethodInfo *v295; // x5
  BattleActionData_o *SubMember; // x0
  const MethodInfo *v297; // x3
  const MethodInfo *v298; // x6
  const MethodInfo *v299; // x4
  const MethodInfo *v300; // x3
  _BOOL8 v301; // x0
  const MethodInfo *v302; // x3
  const MethodInfo *v303; // x2
  const MethodInfo *v304; // x2
  const MethodInfo *v305; // x5
  const MethodInfo *v306; // x4
  const MethodInfo *v307; // x4
  int32_t v308; // w0
  const MethodInfo *v309; // x2
  const MethodInfo *v310; // x2
  const MethodInfo *v311; // x2
  __int64 klass_high; // x22
  int32_t v313; // w2
  const MethodInfo *v314; // x6
  float v315; // s0
  int32_t v316; // w5
  __int64 v317; // x22
  float v318; // s0
  int v319; // w8
  BattleLogicFunction_o *v320; // x0
  int32_t v321; // w22
  const MethodInfo *v322; // x6
  const MethodInfo *v323; // x4
  const MethodInfo *v324; // x4
  struct BattleData_o *v325; // x8
  UnityEngine_Object_o *perf; // x28
  struct BattleData_o *v327; // x8
  int v328; // w27
  bool v329; // w21
  BattleLogicFunction_AfterAttackSideEffectMakeArgument_o *v330; // x22
  BattleLogicFunction_SideEffectMakeArgument_o *Argument__Init; // x0
  const MethodInfo *v332; // x5
  BattleLogicFunction_o *v333; // x21
  BattleCommandData_o *v334; // x22
  UnityEngine_Object_o *v335; // x23
  struct BattleLogic_o *v336; // x8
  unsigned __int64 v337; // x23
  UnityEngine_Object_o *v338; // x21
  int v339; // w8
  BattleLogicFunction_o *v340; // x21
  unsigned int v341; // w22
  __int64 v342; // x8
  BattleLogicFunction_FuncSideEffectFunctionArgument_o *FuncSideEffectArg; // x0
  UnityEngine_Object_o *v344; // x21
  struct BattleData_o *v345; // x8
  UnityEngine_Object_o *v346; // x21
  __int64 v347; // x1
  BattleData_o *v348; // x0
  BattleServantData_o *v349; // x0
  const MethodInfo *overwriteLossHp; // [xsp+0h] [xbp-190h]
  int32_t overwriteLossHpa; // [xsp+0h] [xbp-190h]
  const MethodInfo *isRandomDamage; // [xsp+8h] [xbp-188h]
  char isRandomDamagea; // [xsp+8h] [xbp-188h]
  BattleActionData_o *mainAction; // [xsp+10h] [xbp-180h]
  const MethodInfo *v356; // [xsp+18h] [xbp-178h]
  bool isParam; // [xsp+34h] [xbp-15Ch]
  bool v358; // [xsp+38h] [xbp-158h]
  int32_t subTargetId; // [xsp+3Ch] [xbp-154h]
  int32_t *p_actorId; // [xsp+40h] [xbp-150h]
  char v361; // [xsp+4Ch] [xbp-144h]
  char v362; // [xsp+50h] [xbp-140h]
  bool v363; // [xsp+54h] [xbp-13Ch]
  SkillValueUpApplierPlayerMaster_o *v364; // [xsp+58h] [xbp-138h]
  System_Collections_Generic_List_int__o *v365; // [xsp+60h] [xbp-130h]
  char v366; // [xsp+6Ch] [xbp-124h]
  BattleServantData_o *ServantData; // [xsp+70h] [xbp-120h]
  struct BattleLogicFunctionProcess_FunctionUnitCheck_array *v368; // [xsp+78h] [xbp-118h]
  BattleLogicFunctionProcess_FunctionUnitCheck_o *funcUnit; // [xsp+88h] [xbp-108h]
  int v371; // [xsp+94h] [xbp-FCh]
  Il2CppObject *MasterData_object; // [xsp+98h] [xbp-F8h]
  int32_t index; // [xsp+A4h] [xbp-ECh]
  int32_t *p_funcType; // [xsp+A8h] [xbp-E8h]
  FunctionEntity_o *funcEntity; // [xsp+B8h] [xbp-D8h]
  BattleLogicFunction_ProcListInArgs_o *args; // [xsp+C0h] [xbp-D0h]
  System_Collections_Generic_List_Enumerator_int__o v377; // [xsp+C8h] [xbp-C8h] BYREF
  System_Collections_Generic_List_Enumerator_int__o v378; // [xsp+E0h] [xbp-B0h] BYREF
  System_Collections_Generic_HashSet_BattleBuffData_BuffData__o *buffsToRemove; // [xsp+100h] [xbp-90h] BYREF
  int32_t absorptionCount; // [xsp+10Ch] [xbp-84h] BYREF
  RemovedBuffInfo_o *subBuffInfo; // [xsp+110h] [xbp-80h] BYREF
  Il2CppObject *entity; // [xsp+118h] [xbp-78h] BYREF
  int32_t funcIndex; // [xsp+124h] [xbp-6Ch] BYREF
  int32_t PTTargetId; // [xsp+128h] [xbp-68h] BYREF
  int32_t targetId; // [xsp+12Ch] [xbp-64h] BYREF

  v19 = action;
  v20 = this;
  if ( (byte_4A72984 & 1) == 0 )
  {
    sub_1B90010(&BattleLogicFunction_AfterAttackSideEffectMakeArgument_TypeInfo, action);
    sub_1B90010(&Generator_BGFromQuickChangeBGFunc_TypeInfo, v21);
    sub_1B90010(&Generator_BGMFromChangeBGMFunc_TypeInfo, v22);
    sub_1B90010(&Method_BasicHelper_Any_BattleLogicFunctionProcess_FunctionUnitCheck___, v23);
    sub_1B90010(&BattleCommandData_TypeInfo, v24);
    sub_1B90010(&BattleServantSnapShotOnBuffUpdate_TypeInfo, v25);
    sub_1B90010(&Method_DataManager_GetMasterData_BuffMaster___, v26);
    sub_1B90010(&Method_DataManager_GetMasterData_SkillMaster___, v27);
    sub_1B90010(&Method_DataMasterBase_BuffMaster__BuffEntity__int__GetEntity__, v28);
    sub_1B90010(&Method_DataMasterBase_SkillMaster__SkillEntity__int__TryGetEntity__, v29);
    sub_1B90010(&BattleActionData_DownShiftGaugeData_TypeInfo, v30);
    sub_1B90010(&Method_System_Linq_Enumerable_All_BattleLogicFunctionProcess_FunctionUnitCheck___, v31);
    sub_1B90010(&Method_System_Linq_Enumerable_Select_BattleLogicFunctionProcess_FunctionTargetCheck__int___, v32);
    sub_1B90010(&Method_System_Linq_Enumerable_ToArray_int___, v33);
    sub_1B90010(&Method_System_Linq_Enumerable_Where_BattleLogicFunctionProcess_FunctionTargetCheck___, v34);
    sub_1B90010(&Method_System_Collections_Generic_List_Enumerator_int__Dispose__, v35);
    sub_1B90010(&Method_System_Collections_Generic_List_Enumerator_int__MoveNext__, v36);
    sub_1B90010(&Method_System_Collections_Generic_List_Enumerator_int__get_Current__, v37);
    sub_1B90010(&System_Func_BattleLogicFunctionProcess_FunctionUnitCheck__bool__TypeInfo, v38);
    sub_1B90010(&System_Func_BattleLogicFunctionProcess_FunctionTargetCheck__int__TypeInfo, v39);
    sub_1B90010(&System_Func_BattleLogicFunctionProcess_FunctionTargetCheck__bool__TypeInfo, v40);
    sub_1B90010(&Method_System_Collections_Generic_HashSet_BattleBuffData_BuffData__get_Count__, v41);
    sub_1B90010(&Method_System_Collections_Generic_List_int__Add__, v42);
    sub_1B90010(&Method_System_Collections_Generic_List_int__GetEnumerator__, v43);
    sub_1B90010(&Method_System_Collections_Generic_List_int___ctor__, v44);
    sub_1B90010(&System_Collections_Generic_List_int__TypeInfo, v45);
    sub_1B90010(&BattleActionData_MasterBuffData_TypeInfo, v46);
    sub_1B90010(&UnityEngine_Object_TypeInfo, v47);
    sub_1B90010(&BattleLogicFunction_PreAttackSideEffectMakeArgument_TypeInfo, v48);
    sub_1B90010(&BattleLogicFunction_ProcListInArgs_TypeInfo, v49);
    sub_1B90010(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v50);
    sub_1B90010(&SkillValueUpApplierPlayerMaster_TypeInfo, v51);
    sub_1B90010(&Method_BattleLogicFunction___c__procList_b__41_0__, v52);
    sub_1B90010(&Method_BattleLogicFunction___c__procList_b__41_1__, v53);
    sub_1B90010(&Method_BattleLogicFunction___c__procList_b__41_2__, v54);
    sub_1B90010(&Method_BattleLogicFunction___c__procList_b__41_3__, v55);
    sub_1B90010(&BattleLogicFunction___c_TypeInfo, v56);
    sub_1B90010(&BattleActionData_UpShiftGaugeData_TypeInfo, v57);
    sub_1B90010(&Method_WeightRate_int___ctor__, v58);
    sub_1B90010(&Method_WeightRate_int__getCount__, v59);
    sub_1B90010(&Method_WeightRate_int__getData__, v60);
    sub_1B90010(&Method_WeightRate_int__getTotalWeight__, v61);
    sub_1B90010(&Method_WeightRate_int__setWeight__, v62);
    sub_1B90010(&WeightRate_int__TypeInfo, v63);
    sub_1B90010(&StringLiteral_1856/*"====< end BattleLogicFunction::procList >====="*/, v64);
    sub_1B90010(&StringLiteral_256/*" enemytargetId: "*/, v65);
    sub_1B90010(&StringLiteral_1857/*"====< start BattleLogicFunction::procList >====="*/, v66);
    sub_1B90010(&StringLiteral_322/*" pttargetId: "*/, v67);
    sub_1B90010(&StringLiteral_1859/*"========="*/, v68);
    sub_1B90010(&StringLiteral_1870/*">actSetId: "*/, v69);
    this = (BattleLogicFunction_o *)sub_1B90010(&StringLiteral_224/*" actorId: "*/, v70);
    byte_4A72984 = 1;
  }
  PTTargetId = 0;
  funcIndex = 0;
  subBuffInfo = 0LL;
  entity = 0LL;
  absorptionCount = 0;
  buffsToRemove = 0LL;
  memset(&v378, 0, sizeof(v378));
  if ( !v19 )
    goto LABEL_453;
  p_actorId = &v19->fields.actorId;
  v71 = System_Int32__ToString((int)v19 + 32, 0LL);
  System_String__Concat_61787092((System_String_o *)StringLiteral_224/*" actorId: "*/, v71, 0LL);
  this = (BattleLogicFunction_o *)v20->fields.data;
  if ( !this )
    goto LABEL_453;
  ServantData = BattleData__getServantData((BattleData_o *)this, v19->fields.actorId, 0LL);
  targetId = v19->fields.targetId;
  v72 = System_Int32__ToString((int32_t)&targetId, 0LL);
  System_String__Concat_61787092((System_String_o *)StringLiteral_256/*" enemytargetId: "*/, v72, 0LL);
  PTTargetId = BattleActionData__getPTTargetId(v19, 0LL);
  PTSubTargetId = BattleActionData__getPTSubTargetId(v19, 0LL);
  v74 = System_Int32__ToString((int32_t)&PTTargetId, 0LL);
  this = (BattleLogicFunction_o *)System_String__Concat_61787092((System_String_o *)StringLiteral_322/*" pttargetId: "*/, v74, 0LL);
  data = v20->fields.data;
  if ( !data )
    goto LABEL_453;
  data->fields.beforeAction = v19;
  sub_1B8FFB4((ServantStatusBattleListViewItem_o *)&data->fields.beforeAction, (int32_t)v19, v75, v76);
  v365 = (System_Collections_Generic_List_int__o *)sub_1B9025C(System_Collections_Generic_List_int__TypeInfo);
  System_Collections_Generic_List_int____ctor(
    v365,
    (const MethodInfo_34F3148 *)Method_System_Collections_Generic_List_int___ctor__);
  this = (BattleLogicFunction_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_374C890 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !this )
    goto LABEL_453;
  MasterData_object = DataManager__GetMasterData_object_(
                        (DataManager_o *)this,
                        (const MethodInfo_2E8E21C *)Method_DataManager_GetMasterData_BuffMaster___);
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
  v79 = (BattleLogicFunction_ProcListInArgs_o *)sub_1B9025C(BattleLogicFunction_ProcListInArgs_TypeInfo);
  BattleLogicFunction_ProcListInArgs___ctor(v79, argument, 0LL);
  if ( !v79 )
    goto LABEL_453;
  BattleLogicFunction_ProcListInArgs__set_IsCommandSideEffect(v79, isCommandSideEffect, 0LL);
  BattleLogicFunction_ProcListInArgs__set_IsShift(v79, isShift, 0LL);
  BattleLogicFunction_ProcListInArgs__set_IsPassive(v79, passive, 0LL);
  v79->fields._IsTreasureDvc_k__BackingField = isTreasureDvc;
  if ( BattleLogicFunction_ProcListInArgs__get_SkillId(v79, 0LL) <= 0 )
    BattleLogicFunction_ProcListInArgs__set_SkillId(v79, skillId, 0LL);
  subTargetId = PTSubTargetId;
  funcIndex = 0;
  BattleLogicFunction_ProcListInArgs__initFunctionUnitCheck(v79, v20, functionlist, baseValslist, &funcIndex, 0LL);
  args = v79;
  v79->fields.actSetId = 0;
  p_actSetId = &v79->fields.actSetId;
  v81 = (WeightRate_int__o *)sub_1B9025C(WeightRate_int__TypeInfo);
  WeightRate_int____ctor(v81, (const MethodInfo_38EEB1C *)Method_WeightRate_int___ctor__);
  if ( !baseValslist )
    goto LABEL_453;
  max_length = baseValslist->max_length;
  if ( max_length >= 1 )
  {
    v83 = 0;
    while ( v83 < max_length )
    {
      v84 = &baseValslist->obj.klass + (int)v83;
      v85 = (DataVals_o *)v84[4];
      if ( !v85 )
        goto LABEL_453;
      DataVals__loadActSet((DataVals_o *)v84[4], 0LL);
      this = (BattleLogicFunction_o *)DataVals__checkActSet(v85, 0LL);
      if ( ((unsigned __int8)this & 1) != 0 )
      {
        this = (BattleLogicFunction_o *)DataVals__getActSetWeight(v85, 0LL);
        if ( (int)this >= 1 )
        {
          ActSetWeight = DataVals__getActSetWeight(v85, 0LL);
          this = (BattleLogicFunction_o *)DataVals__getActSet(v85, 0LL);
          if ( !v81 )
            goto LABEL_453;
          WeightRate_int___setWeight(
            v81,
            ActSetWeight,
            (int32_t)this,
            (const MethodInfo_38EE038 *)Method_WeightRate_int__setWeight__);
        }
      }
      max_length = baseValslist->max_length;
      if ( (int)++v83 >= max_length )
        goto LABEL_26;
    }
LABEL_454:
    sub_1B90274(this, action);
  }
LABEL_26:
  if ( !v81 )
    goto LABEL_453;
  if ( WeightRate_int___getCount(v81, (const MethodInfo_38EE3F4 *)Method_WeightRate_int__getCount__) >= 1 )
  {
    Random = BattleRandom__getRandom(0, v81->fields.totalweight, 0LL);
    *p_actSetId = WeightRate_int___getData(v81, Random, (const MethodInfo_38EE4AC *)Method_WeightRate_int__getData__);
    v88 = System_Int32__ToString((int32_t)p_actSetId, 0LL);
    System_String__Concat_61787092((System_String_o *)StringLiteral_1870/*">actSetId: "*/, v88, 0LL);
  }
  v19->fields.ActSetId = args->fields.actSetId;
  BattleActionData__initFuncTargetPlayerType(v19, funcIndex, 0LL);
  v89 = BattleLogicFunction___c_TypeInfo;
  funcUnitArray_k__BackingField = (System_Object_array *)args->fields._funcUnitArray_k__BackingField;
  if ( !BattleLogicFunction___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BattleLogicFunction___c_TypeInfo);
    v89 = BattleLogicFunction___c_TypeInfo;
  }
  _9__41_0 = (System_Func_object__bool__o *)v89->static_fields->__9__41_0;
  if ( !_9__41_0 )
  {
    if ( !v89->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v89);
      v89 = BattleLogicFunction___c_TypeInfo;
    }
    v92 = (Il2CppObject *)v89->static_fields->__9;
    _9__41_0 = (System_Func_object__bool__o *)sub_1B9025C(System_Func_BattleLogicFunctionProcess_FunctionUnitCheck__bool__TypeInfo);
    System_Func_object__bool____ctor(_9__41_0, v92, Method_BattleLogicFunction___c__procList_b__41_0__, 0LL);
    static_fields = BattleLogicFunction___c_TypeInfo->static_fields;
    static_fields->__9__41_0 = (struct System_Func_BattleLogicFunctionProcess_FunctionUnitCheck__bool__o *)_9__41_0;
    sub_1B8FFB4((ServantStatusBattleListViewItem_o *)&static_fields->__9__41_0, (int32_t)_9__41_0, v94, v95);
  }
  if ( !BasicHelper__Any_object__48731792(
          funcUnitArray_k__BackingField,
          (System_Func_T__bool__o *)_9__41_0,
          (const MethodInfo_2E79690 *)Method_BasicHelper_Any_BattleLogicFunctionProcess_FunctionUnitCheck___) )
    v19->fields.isSuccessTargetSelection = 1;
  v96 = BattleLogicFunction___c_TypeInfo;
  v97 = (System_Collections_Generic_IEnumerable_TSource__o *)args->fields._funcUnitArray_k__BackingField;
  if ( !BattleLogicFunction___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BattleLogicFunction___c_TypeInfo);
    v96 = BattleLogicFunction___c_TypeInfo;
  }
  _9__41_1 = (System_Func_object__bool__o *)v96->static_fields->__9__41_1;
  if ( !_9__41_1 )
  {
    if ( !v96->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v96);
      v96 = BattleLogicFunction___c_TypeInfo;
    }
    v99 = (Il2CppObject *)v96->static_fields->__9;
    _9__41_1 = (System_Func_object__bool__o *)sub_1B9025C(System_Func_BattleLogicFunctionProcess_FunctionUnitCheck__bool__TypeInfo);
    System_Func_object__bool____ctor(_9__41_1, v99, Method_BattleLogicFunction___c__procList_b__41_1__, 0LL);
    v100 = BattleLogicFunction___c_TypeInfo->static_fields;
    v100->__9__41_1 = (struct System_Func_BattleLogicFunctionProcess_FunctionUnitCheck__bool__o *)_9__41_1;
    sub_1B8FFB4((ServantStatusBattleListViewItem_o *)&v100->__9__41_1, (int32_t)_9__41_1, v101, v102);
  }
  v19->fields.isSkillCopyFunctionOnly = System_Linq_Enumerable__All_object_(
                                          v97,
                                          (System_Func_TSource__bool__o *)_9__41_1,
                                          (const MethodInfo_2E9A7C0 *)Method_System_Linq_Enumerable_All_BattleLogicFunctionProcess_FunctionUnitCheck___);
  v366 = 1;
  this = (BattleLogicFunction_o *)BattleLogicFunction_ProcListInArgs__MatchSkillType(args, 1, 0LL);
  if ( ((unsigned __int8)this & 1) != 0 )
  {
    v103 = (int)this;
    this = (BattleLogicFunction_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_374C890 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    v104 = isCommandSideEffect;
    v105 = ServantData;
    if ( !this )
      goto LABEL_453;
    this = (BattleLogicFunction_o *)DataManager__GetMasterData_object_(
                                      (DataManager_o *)this,
                                      (const MethodInfo_2E8E21C *)Method_DataManager_GetMasterData_SkillMaster___);
    if ( !this )
      goto LABEL_453;
    if ( DataMasterBase_object__object__int___TryGetEntity(
           (DataMasterBase_TMaster__TEntity__PKType__o *)this,
           &entity,
           skillId,
           (const MethodInfo_312C5FC *)Method_DataMasterBase_SkillMaster__SkillEntity__int__TryGetEntity__) )
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
    v106 = 0LL;
    v366 = 1;
    if ( ((unsigned __int8)this & 1) == 0 && ((v103 ^ 1) & 1) == 0 )
    {
      v107 = v20->fields.data;
      v106 = (SkillValueUpApplierPlayerMaster_o *)sub_1B9025C(SkillValueUpApplierPlayerMaster_TypeInfo);
      SkillValueUpApplierPlayerMaster___ctor(v106, v107, 0LL);
      if ( v106 )
      {
        this = (BattleLogicFunction_o *)((__int64 (__fastcall *)(SkillValueUpApplierPlayerMaster_o *, Il2CppMethodPointer))v106->klass->vtable._4_Init.method)(
                                          v106,
                                          v106->klass->vtable._5_ApplyTo.methodPtr);
        v366 = 0;
      }
      else
      {
        v366 = 1;
      }
    }
  }
  else
  {
    v104 = isCommandSideEffect;
    v105 = ServantData;
    v106 = 0LL;
  }
  v108 = args->fields._funcUnitArray_k__BackingField;
  if ( !v108 )
    goto LABEL_453;
  v368 = args->fields._funcUnitArray_k__BackingField;
  v109 = v108->max_length;
  if ( v109 >= 1 )
  {
    v364 = v106;
    v110 = args->fields._funcUnitArray_k__BackingField;
    v111 = 0LL;
    v112 = 0;
    v361 = 0;
    v362 = 0;
    v363 = v105 == 0LL || !isTreasureDvc;
    while ( 1 )
    {
      if ( v112 >= (unsigned int)v109 )
        goto LABEL_454;
      v113 = v110->m_Items[v112];
      v371 = v112;
      if ( !v113 )
        goto LABEL_453;
      this = (BattleLogicFunction_o *)BattleLogicFunctionProcess_FunctionUnitCheck__get_FuncIndex(v113, 0LL);
      dataVals_k__BackingField = v113->fields._dataVals_k__BackingField;
      index = (int)this;
      if ( !dataVals_k__BackingField )
        goto LABEL_453;
      funcEntity = dataVals_k__BackingField->fields.funcEnt;
      funcUnit = v113;
      this = (BattleLogicFunction_o *)BattleLogicFunctionProcess_FunctionUnitCheck__checkCondtion(v113, v19, 0LL);
      if ( ((unsigned __int8)this & 1) == 0 )
        goto LABEL_395;
      if ( (v366 & 1) == 0 )
        this = (BattleLogicFunction_o *)((__int64 (__fastcall *)(SkillValueUpApplierPlayerMaster_o *, BattleLogicFunctionProcess_FunctionUnitCheck_o *, Il2CppMethodPointer))v364->klass->vtable._5_ApplyTo.method)(
                                          v364,
                                          v113,
                                          v364->klass->vtable._6_CreateFuncParamValueUpInfo.methodPtr);
      if ( isCreateSideEffect )
      {
        if ( !funcEntity )
          goto LABEL_453;
        this = (BattleLogicFunction_o *)BattleLogicFunction__IsAttackSideEffectInvokeFunc(
                                          this,
                                          funcEntity->fields.funcType,
                                          dataVals_k__BackingField,
                                          v115);
        if ( ((unsigned __int8)this & 1) != 0 )
        {
          v117 = BattleLogicFunction___c_TypeInfo;
          funcTargetArray_k__BackingField = (System_Collections_Generic_IEnumerable_TSource__o *)v113->fields._funcTargetArray_k__BackingField;
          if ( !BattleLogicFunction___c_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(BattleLogicFunction___c_TypeInfo);
            v117 = BattleLogicFunction___c_TypeInfo;
          }
          _9__41_2 = (System_Func_object__bool__o *)v117->static_fields->__9__41_2;
          if ( !_9__41_2 )
          {
            if ( !v117->_2.cctor_finished )
            {
              j_il2cpp_runtime_class_init_0(v117);
              v117 = BattleLogicFunction___c_TypeInfo;
            }
            v120 = (Il2CppObject *)v117->static_fields->__9;
            _9__41_2 = (System_Func_object__bool__o *)sub_1B9025C(System_Func_BattleLogicFunctionProcess_FunctionTargetCheck__bool__TypeInfo);
            System_Func_object__bool____ctor(_9__41_2, v120, Method_BattleLogicFunction___c__procList_b__41_2__, 0LL);
            v121 = BattleLogicFunction___c_TypeInfo->static_fields;
            v121->__9__41_2 = (struct System_Func_BattleLogicFunctionProcess_FunctionTargetCheck__bool__o *)_9__41_2;
            sub_1B8FFB4((ServantStatusBattleListViewItem_o *)&v121->__9__41_2, (int32_t)_9__41_2, v122, v123);
          }
          v124 = System_Linq_Enumerable__Where_object_(
                   funcTargetArray_k__BackingField,
                   (System_Func_TSource__bool__o *)_9__41_2,
                   (const MethodInfo_2ECC92C *)Method_System_Linq_Enumerable_Where_BattleLogicFunctionProcess_FunctionTargetCheck___);
          v125 = BattleLogicFunction___c_TypeInfo;
          if ( !BattleLogicFunction___c_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(BattleLogicFunction___c_TypeInfo);
            v125 = BattleLogicFunction___c_TypeInfo;
          }
          _9__41_3 = (System_Func_object__int__o *)v125->static_fields->__9__41_3;
          if ( !_9__41_3 )
          {
            if ( !v125->_2.cctor_finished )
            {
              j_il2cpp_runtime_class_init_0(v125);
              v125 = BattleLogicFunction___c_TypeInfo;
            }
            v127 = (Il2CppObject *)v125->static_fields->__9;
            _9__41_3 = (System_Func_object__int__o *)sub_1B9025C(System_Func_BattleLogicFunctionProcess_FunctionTargetCheck__int__TypeInfo);
            System_Func_object__int____ctor(_9__41_3, v127, Method_BattleLogicFunction___c__procList_b__41_3__, 0LL);
            v128 = BattleLogicFunction___c_TypeInfo->static_fields;
            v128->__9__41_3 = (struct System_Func_BattleLogicFunctionProcess_FunctionTargetCheck__int__o *)_9__41_3;
            sub_1B8FFB4((ServantStatusBattleListViewItem_o *)&v128->__9__41_3, (int32_t)_9__41_3, v129, v130);
          }
          v131 = (System_Collections_Generic_IEnumerable_TSource__o *)System_Linq_Enumerable__Select_object__int_(
                                                                        v124,
                                                                        (System_Func_TSource__TResult__o *)_9__41_3,
                                                                        (const MethodInfo_2EBE4B0 *)Method_System_Linq_Enumerable_Select_BattleLogicFunctionProcess_FunctionTargetCheck__int___);
          v132 = System_Linq_Enumerable__ToArray_int_(
                   v131,
                   (const MethodInfo_2EC6DFC *)Method_System_Linq_Enumerable_ToArray_int___);
          v133 = FuncList__Check(26, funcEntity->fields.funcType, 0LL);
          v134 = (BattleLogicFunction_PreAttackSideEffectMakeArgument_o *)sub_1B9025C(BattleLogicFunction_PreAttackSideEffectMakeArgument_TypeInfo);
          BattleLogicFunction_PreAttackSideEffectMakeArgument___ctor(v134, 0LL);
          if ( !v134 )
            goto LABEL_453;
          v135 = (BattleLogicFunction_SideEffectMakeArgument_o *)((__int64 (__fastcall *)(BattleLogicFunction_PreAttackSideEffectMakeArgument_o *, System_Int32_array *, Il2CppMethodPointer))v134->klass->vtable._6_Init.method)(
                                                                   v134,
                                                                   v132,
                                                                   v134->klass->vtable._7_MakeOnlyMainArgument.methodPtr);
          BattleLogicFunction__setAttackSideEffect(v20, v19, v105, v133 || isTreasureDvc, v135, v136);
          v104 = isCommandSideEffect;
        }
      }
      v137 = funcUnit->fields._funcTargetArray_k__BackingField;
      if ( !v137 )
        goto LABEL_453;
      v138 = v137->max_length;
      p_funcType = &funcEntity->fields.funcType;
      if ( v138 >= 1 )
      {
        for ( i = 0; i < v138; ++i )
        {
          if ( i >= (unsigned int)v138 )
            goto LABEL_454;
          v140 = v137->m_Items[i];
          if ( !v140 )
            goto LABEL_453;
          BattleLogicFunction__SetTargetFuncList(
            v20,
            v140->fields._targetId_k__BackingField,
            v19,
            dataVals_k__BackingField,
            v116);
          this = (BattleLogicFunction_o *)BattleLogicFunction_ProcListInArgs__get_FuncSideEffectArg(args, 0LL);
          if ( this )
            v111 = (BattleLogicFunction_FuncSideEffectFunctionArgument_o *)this;
          if ( this )
          {
            if ( !v111 )
              goto LABEL_453;
            BattleLogicFunction_FuncSideEffectFunctionArgument__AddTarget(v111, v140, 0LL);
          }
          if ( !v140->fields._result_k__BackingField )
          {
            NoEffectObject = BattleLogicFunctionProcess_FunctionTargetCheck__getInvalidObject(v140, 0LL);
            goto LABEL_98;
          }
          this = (BattleLogicFunction_o *)v20->fields.data;
          if ( !this )
            goto LABEL_453;
          targetId_k__BackingField = v140->fields._targetId_k__BackingField;
          this = (BattleLogicFunction_o *)BattleData__getServantData(
                                            (BattleData_o *)this,
                                            targetId_k__BackingField,
                                            0LL);
          if ( !this )
            goto LABEL_453;
          v142 = this;
          this = (BattleLogicFunction_o *)BattleServantData__CheckNotTargetSkill(
                                            (BattleServantData_o *)this,
                                            skillId,
                                            0LL);
          if ( ((unsigned __int8)this & 1) != 0 )
          {
            NoEffectObject = BattleLogicFunction__getNoEffectObject(
                               v20,
                               (int32_t)v142->fields.logic,
                               index,
                               dataVals_k__BackingField,
                               v104,
                               0LL,
                               0LL,
                               v143);
LABEL_98:
            BattleActionData__addAction(v19, NoEffectObject, 0LL);
            goto LABEL_153;
          }
          v19->fields.funcResult = 1;
          args->fields.tdCommandTypeChange = -1;
          if ( !funcEntity )
            goto LABEL_453;
          v145 = &funcEntity->fields.funcType;
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
                                              (const MethodInfo_312C5A8 *)Method_DataMasterBase_BuffMaster__BuffEntity__int__GetEntity__);
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
            v145 = &funcEntity->fields.funcType;
            v149 = FuncList__Check(16, *p_funcType, 0LL);
            BattleLogicFunction__functionAddState(v20, v19, v140, args, v149, v150);
            goto LABEL_134;
          }
          if ( FuncList__Check(2, *p_funcType, 0LL) )
          {
            v148 = BattleLogicFunction__functionSubState(
                     v20,
                     targetId_k__BackingField,
                     funcEntity,
                     dataVals_k__BackingField,
                     index,
                     v104,
                     &subBuffInfo,
                     args,
                     overwriteLossHp);
            goto LABEL_133;
          }
          if ( FuncList__Check(3, *p_funcType, 0LL) )
          {
            actorId = v19->fields.actorId;
            v153 = (int32_t)v142->fields.logic;
            isSafeDamage = BattleLogicFunction__isSafeDamage(
                             v20,
                             dataVals_k__BackingField,
                             targetId_k__BackingField,
                             v151);
            v155 = v153;
            v104 = isCommandSideEffect;
            v148 = BattleLogicFunction__functionDamage(
                     v20,
                     actorId,
                     v155,
                     dataVals_k__BackingField,
                     index,
                     v19,
                     isSafeDamage,
                     v156);
            goto LABEL_133;
          }
          if ( FuncList__Check(4, *p_funcType, 0LL) )
          {
            v158 = v19->fields.actorId;
            v159 = (int32_t)v142->fields.logic;
            v160 = 1;
            goto LABEL_132;
          }
          if ( FuncList__Check(14, *p_funcType, 0LL) )
          {
            v158 = v19->fields.actorId;
            v159 = (int32_t)v142->fields.logic;
            v160 = 2;
            goto LABEL_132;
          }
          if ( FuncList__Check(15, *p_funcType, 0LL) )
          {
            v158 = v19->fields.actorId;
            v159 = (int32_t)v142->fields.logic;
            v160 = 3;
            goto LABEL_132;
          }
          if ( FuncList__Check(18, *p_funcType, 0LL) )
          {
            v158 = v19->fields.actorId;
            v159 = (int32_t)v142->fields.logic;
            v160 = 4;
            goto LABEL_132;
          }
          if ( FuncList__Check(27, *p_funcType, 0LL) )
          {
            v158 = v19->fields.actorId;
            v159 = (int32_t)v142->fields.logic;
            v160 = 7;
            goto LABEL_132;
          }
          if ( FuncList__Check(21, *p_funcType, 0LL) )
          {
            v158 = v19->fields.actorId;
            v159 = (int32_t)v142->fields.logic;
            v160 = 5;
            goto LABEL_132;
          }
          if ( FuncList__Check(22, *p_funcType, 0LL) )
          {
            v158 = v19->fields.actorId;
            v159 = (int32_t)v142->fields.logic;
            v160 = 6;
            goto LABEL_132;
          }
          if ( FuncList__Check(28, *p_funcType, 0LL) )
          {
            v158 = v19->fields.actorId;
            v159 = (int32_t)v142->fields.logic;
            v160 = 8;
LABEL_132:
            v148 = BattleLogicFunction__functionNPDamage(
                     v20,
                     v158,
                     v159,
                     dataVals_k__BackingField,
                     index,
                     v160,
                     v19,
                     v157);
LABEL_133:
            BattleActionData__addAction(v19, v148, 0LL);
            goto LABEL_134;
          }
          if ( FuncList__Check(5, *p_funcType, 0LL) )
          {
            v169 = v20->fields.data;
            Value = DataVals__GetValue(dataVals_k__BackingField, 0LL);
            this = (BattleLogicFunction_o *)DataVals__isMultipleGainStar(dataVals_k__BackingField, 0LL);
            if ( !v169 )
              goto LABEL_453;
            BattleData__addCriticalPoint(v169, Value, (unsigned __int8)this & 1, 0LL);
LABEL_161:
            this = (BattleLogicFunction_o *)BattleLogicFunction__getFunctionObject(
                                              v171,
                                              funcEntity,
                                              (int32_t)v142->fields.logic,
                                              index,
                                              v104,
                                              0LL,
                                              v172);
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
            v173 = v20->fields.data;
            this = (BattleLogicFunction_o *)DataVals__GetValue(dataVals_k__BackingField, 0LL);
            if ( !v173 )
              goto LABEL_453;
            BattleData__lossCriticalPoint(v173, (int32_t)this, 0LL);
            goto LABEL_161;
          }
          if ( FuncList__Check(6, *p_funcType, 0LL) )
          {
            v148 = BattleLogicFunction__functionGainHp(
                     v20,
                     v19->fields.actorId,
                     targetId_k__BackingField,
                     funcEntity,
                     dataVals_k__BackingField,
                     index,
                     v104,
                     -1,
                     overwriteLossHp);
            goto LABEL_133;
          }
          if ( FuncList__Check(17, *p_funcType, 0LL) )
          {
            v148 = BattleLogicFunction__functionGainHpPer(
                     v20,
                     v19->fields.actorId,
                     targetId_k__BackingField,
                     funcEntity,
                     dataVals_k__BackingField,
                     index,
                     v104,
                     v174);
            goto LABEL_133;
          }
          if ( FuncList__Check(7, *p_funcType, 0LL) )
          {
            if ( BattleServantData__checkPlayer((BattleServantData_o *)v142, 0LL) )
            {
              isUnaffected = DataVals__isUnaffected(dataVals_k__BackingField, 0LL);
              CorrectedValueFuncGainNp = DataVals__GetValue(dataVals_k__BackingField, 0LL);
              if ( !isUnaffected )
                CorrectedValueFuncGainNp = BattleServantData__getCorrectedValueFuncGainNp(
                                             (BattleServantData_o *)v142,
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
                v187 = DataVals__GetValue2(dataVals_k__BackingField, 0LL) - 1;
                TargetList = DataVals__GetTargetList(dataVals_k__BackingField, 0LL);
                v189 = DataVals__GetValue(dataVals_k__BackingField, 0LL);
                this = (BattleLogicFunction_o *)BattleServantData__skillChageShorten(
                                                  (BattleServantData_o *)v142,
                                                  v189,
                                                  0,
                                                  v187,
                                                  TargetList,
                                                  0LL);
                goto LABEL_188;
              }
              if ( FuncList__Check(10, *p_funcType, 0LL) )
              {
                v191 = DataVals__GetValue2(dataVals_k__BackingField, 0LL) - 1;
                v192 = DataVals__GetTargetList(dataVals_k__BackingField, 0LL);
                v193 = DataVals__GetValue(dataVals_k__BackingField, 0LL);
                this = (BattleLogicFunction_o *)BattleServantData__skillChageExtend(
                                                  (BattleServantData_o *)v142,
                                                  v193,
                                                  999,
                                                  v191,
                                                  v192,
                                                  0LL);
LABEL_188:
                v194 = (int32_t)v142->fields.logic;
                if ( ((unsigned __int8)this & 1) == 0 )
                {
                  v104 = isCommandSideEffect;
                  v197 = v20;
                  v198 = (int32_t)v142->fields.logic;
                  goto LABEL_282;
                }
                goto LABEL_189;
              }
              if ( FuncList__Check(12, *p_funcType, 0LL) )
              {
                v200 = v19->fields.actorId;
                v201 = BattleLogicFunction__isSafeDamage(v20, dataVals_k__BackingField, targetId_k__BackingField, v199);
                isRandomDamagea = 1;
                v202 = isCommandSideEffect;
                mainAction = v19;
                v203 = v201;
                v204 = isCommandSideEffect;
                overwriteLossHpa = -1;
                goto LABEL_194;
              }
              if ( FuncList__Check(25, *p_funcType, 0LL) )
              {
                v104 = isCommandSideEffect;
                v206 = v19->fields.actorId;
                isRandomDamagea = 1;
                mainAction = v19;
                v204 = isCommandSideEffect;
                v203 = 1;
                overwriteLossHpa = -1;
                v205 = v20;
                goto LABEL_197;
              }
              if ( FuncList__Check(13, *p_funcType, 0LL) )
              {
                v104 = isCommandSideEffect;
                v207 = BattleLogicFunction__functionInstantDeath(
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
                v104 = isCommandSideEffect;
                v207 = BattleLogicFunction__functionHastenNpTurn(
                         v20,
                         targetId_k__BackingField,
                         funcEntity,
                         dataVals_k__BackingField,
                         index,
                         isCommandSideEffect,
                         -1,
                         v208);
                goto LABEL_284;
              }
              if ( FuncList__Check(20, *p_funcType, 0LL) )
              {
                v104 = isCommandSideEffect;
                v207 = BattleLogicFunction__functionDelayNpTurn(
                         v20,
                         targetId_k__BackingField,
                         funcEntity,
                         dataVals_k__BackingField,
                         index,
                         isCommandSideEffect,
                         &absorptionCount,
                         v209);
                goto LABEL_284;
              }
              if ( FuncList__Check(56, *p_funcType, 0LL) )
              {
                v104 = isCommandSideEffect;
                v207 = BattleLogicFunction__functionAbsorbNpTurn(
                         v20,
                         targetId_k__BackingField,
                         funcEntity,
                         v19,
                         v140,
                         isCommandSideEffect,
                         v210);
                goto LABEL_284;
              }
              if ( FuncList__Check(23, *p_funcType, 0LL) )
              {
                v216 = BattleLogicFunction__functionResetCommandCard(v20, v211, v212, v213, v214, v215);
                goto LABEL_208;
              }
              if ( FuncList__Check(24, *p_funcType, 0LL) )
              {
                applyTarget = funcEntity->fields.applyTarget;
                if ( applyTarget != 2 )
                {
                  if ( applyTarget == 1 )
                  {
                    v216 = BattleLogicFunction__functionReplaceMember(
                             v20,
                             targetId_k__BackingField,
                             subTargetId,
                             v218,
                             v219,
                             index,
                             v220);
LABEL_208:
                    BattleActionData__addAction(v19, v216, 0LL);
                    this = (BattleLogicFunction_o *)v20->fields.data;
                    if ( !this )
                      goto LABEL_453;
                    BattleData__AddPerformedVals((BattleData_o *)this, dataVals_k__BackingField, 0LL);
                  }
LABEL_183:
                  v104 = isCommandSideEffect;
                  goto LABEL_164;
                }
                v224 = BattleLogicFunction__functionReplaceEnemyMember(
                         v20,
                         v217,
                         dataVals_k__BackingField,
                         index,
                         (const MethodInfo *)v219);
LABEL_219:
                BattleActionData__addAction(v19, v224, 0LL);
                goto LABEL_183;
              }
              if ( FuncList__Check(109, *p_funcType, 0LL) )
              {
                v224 = BattleLogicFunction__functionTransformServant(
                         v20,
                         targetId_k__BackingField,
                         v222,
                         dataVals_k__BackingField,
                         index,
                         args,
                         v223);
                goto LABEL_219;
              }
              if ( FuncList__Check(26, *p_funcType, 0LL) )
              {
                v226 = BattleLogicFunction__functionReflection(
                         v20,
                         v19->fields.actorId,
                         (int32_t)v142->fields.logic,
                         dataVals_k__BackingField,
                         index,
                         v225);
                BattleActionData__addAction(v19, v226, 0LL);
                v362 = 1;
                goto LABEL_183;
              }
              if ( FuncList__Check(29, *p_funcType, 0LL) )
              {
                v104 = isCommandSideEffect;
                v207 = BattleLogicFunction__functionCallServant(
                         v20,
                         v19->fields.actorId,
                         v227,
                         dataVals_k__BackingField,
                         index,
                         isCommandSideEffect,
                         v228);
                goto LABEL_284;
              }
              if ( FuncList__Check(30, *p_funcType, 0LL) )
              {
                v234 = BattleLogicFunction__functionPtShuffle(v20, v229, v230, v231, v232, v233);
                BattleActionData__addAction(v19, v234, 0LL);
                this = (BattleLogicFunction_o *)v20->fields.data;
                if ( !this )
                  goto LABEL_453;
                BattleData__AddPerformedVals((BattleData_o *)this, dataVals_k__BackingField, 0LL);
                goto LABEL_225;
              }
              if ( FuncList__Check(32, *p_funcType, 0LL) )
              {
                v224 = BattleLogicFunction__functionChangeServant(
                         v20,
                         v19->fields.actorId,
                         targetId_k__BackingField,
                         v235,
                         dataVals_k__BackingField,
                         v236,
                         v237);
                goto LABEL_219;
              }
              v238 = FuncList__Check(33, *p_funcType, 0LL);
              if ( v238 )
              {
                v224 = BattleLogicFunction__functionChangeBg(
                         (BattleLogicFunction_o *)v238,
                         v19->fields.actorId,
                         v239,
                         dataVals_k__BackingField,
                         v240,
                         v241);
                goto LABEL_219;
              }
              if ( FuncList__Check(34, *p_funcType, 0LL) )
              {
                v243 = v19->fields.actorId;
                v244 = (int32_t)v142->fields.logic;
                v245 = BattleLogicFunction__isSafeDamage(v20, dataVals_k__BackingField, targetId_k__BackingField, v242);
                goto LABEL_232;
              }
              if ( FuncList__Check(122, *p_funcType, 0LL) )
              {
                v248 = v19->fields.actorId;
                v249 = (int32_t)v142->fields.logic;
                v245 = 1;
                v247 = v20;
                goto LABEL_235;
              }
              if ( FuncList__Check(35, *p_funcType, 0LL) )
              {
                BYTE1(v142[9].fields.master) = 1;
                goto LABEL_183;
              }
              this = (BattleLogicFunction_o *)FuncList__Check(36, *p_funcType, 0LL);
              if ( ((unsigned __int8)this & 1) != 0 )
              {
                v252 = v20->fields.data;
                if ( !v252 )
                  goto LABEL_453;
                draw_commandlist = v252->fields.draw_commandlist;
                v252->fields.fixedCommands = draw_commandlist;
                sub_1B8FFB4(
                  (ServantStatusBattleListViewItem_o *)&v252->fields.fixedCommands,
                  (int32_t)draw_commandlist,
                  v250,
                  v251);
                goto LABEL_241;
              }
              if ( FuncList__Check(37, *p_funcType, 0LL)
                || FuncList__Check(38, *p_funcType, 0LL)
                || FuncList__Check(39, *p_funcType, 0LL)
                || FuncList__Check(40, *p_funcType, 0LL) )
              {
                v254 = DataVals__GetValue(dataVals_k__BackingField, 0LL);
                if ( FuncList__Check(37, *p_funcType, 0LL) || FuncList__Check(39, *p_funcType, 0LL) )
                  v254 = -v254;
                if ( FuncList__Check(37, *p_funcType, 0LL) || FuncList__Check(38, *p_funcType, 0LL) )
                {
                  v254 *= 2;
                  v358 = 1;
                }
                else
                {
                  v358 = 0;
                }
                isParam = DataVals__isParam(dataVals_k__BackingField, 90, 0LL);
                v255 = DataVals__isParam(dataVals_k__BackingField, 149, 0LL);
                v256 = 0LL;
                if ( v255 )
                {
                  v256 = (BattleServantSnapShotOnBuffUpdate_o *)sub_1B9025C(BattleServantSnapShotOnBuffUpdate_TypeInfo);
                  BattleServantSnapShotOnBuffUpdate___ctor(v256, (BattleServantData_o *)v142, 0LL);
                }
                v257 = DataVals__GetTargetList(dataVals_k__BackingField, 0LL);
                this = (BattleLogicFunction_o *)BattleServantData__ChangeBuffValue(
                                                  (BattleServantData_o *)v142,
                                                  v254,
                                                  v257,
                                                  v358,
                                                  1,
                                                  v255,
                                                  &buffsToRemove,
                                                  isParam,
                                                  0LL);
                if ( ((unsigned __int8)this & 1) == 0 )
                  goto LABEL_280;
                if ( v255 )
                {
                  action = (BattleActionData_o *)buffsToRemove;
                  if ( !buffsToRemove )
                    goto LABEL_453;
                  if ( buffsToRemove->fields._count >= 1 )
                  {
                    this = (BattleLogicFunction_o *)v142[9].klass;
                    if ( !this )
                      goto LABEL_453;
                    this = (BattleLogicFunction_o *)BattleBuffData__SubBuffSpecified(
                                                      (BattleBuffData_o *)this,
                                                      buffsToRemove,
                                                      1,
                                                      0LL);
                    if ( !this )
                      goto LABEL_453;
                    v104 = isCommandSideEffect;
                    BattleLogicFunction__ApplySubBuffChanges(
                      v20,
                      v19,
                      (System_Collections_Generic_List_BattleBuffData_BuffData__o *)this->fields.data,
                      targetId_k__BackingField,
                      v256,
                      dataVals_k__BackingField,
                      index,
                      isCommandSideEffect,
                      args,
                      isRandomDamage);
                    goto LABEL_164;
                  }
                }
LABEL_241:
                v194 = (int32_t)v142->fields.logic;
LABEL_189:
                v104 = isCommandSideEffect;
                v195 = funcEntity;
LABEL_190:
                FunctionObject = BattleLogicFunction__getFunctionObject(this, v195, v194, index, v104, 0LL, v190);
                BattleActionData__setBuffData(v19, FunctionObject, dataVals_k__BackingField, 0LL);
                goto LABEL_164;
              }
              if ( FuncList__Check(41, *p_funcType, 0LL) )
              {
                v258 = v20->fields.data;
                v259 = DataVals__GetValue(dataVals_k__BackingField, 0LL);
                v260 = (Generator_BGMFromChangeBGMFunc_o *)sub_1B9025C(Generator_BGMFromChangeBGMFunc_TypeInfo);
                Generator_BGMFromChangeBGMFunc___ctor(v260, v258, v259, dataVals_k__BackingField, 0, 0LL);
                BattleLogicFunction__FunctionChangeBgm(v20, args, (Generator_BGM_o *)v260, 0LL, v261);
                goto LABEL_183;
              }
              this = (BattleLogicFunction_o *)FuncList__Check(42, *p_funcType, 0LL);
              if ( ((unsigned __int8)this & 1) != 0 )
                goto LABEL_241;
              if ( FuncList__Check(43, *p_funcType, 0LL) )
              {
                v104 = isCommandSideEffect;
                v207 = BattleLogicFunction__functionResurrection(
                         v20,
                         (int32_t)v142->fields.logic,
                         index,
                         funcEntity,
                         dataVals_k__BackingField,
                         isCommandSideEffect,
                         v262);
                goto LABEL_284;
              }
              if ( FuncList__Check(44, *p_funcType, 0LL) || FuncList__Check(133, *p_funcType, 0LL) )
              {
                v263 = funcEntity->fields.vals;
                if ( FuncList__Check(44, funcEntity->fields.funcType, 0LL) )
                {
                  SameIndiualityBuffSum = BattleServantData__getSameIndiualityBuffSum(
                                            (BattleServantData_o *)v142,
                                            v263,
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
                                            (int32_t)v142->fields.logic,
                                            dataVals_k__BackingField,
                                            funcEntity,
                                            0LL);
LABEL_273:
                  v265 = SameIndiualityBuffSum;
                }
                else
                {
                  v265 = 0;
                }
                CorrectedValueFuncGainNp = DataVals__GetValue(dataVals_k__BackingField, 0LL) * v265;
                if ( !DataVals__isUnaffected(dataVals_k__BackingField, 0LL) )
                  CorrectedValueFuncGainNp = BattleServantData__getCorrectedValueFuncGainNp(
                                               (BattleServantData_o *)v142,
                                               CorrectedValueFuncGainNp,
                                               0LL);
                if ( CorrectedValueFuncGainNp < 1 )
                {
LABEL_280:
                  v198 = (int32_t)v142->fields.logic;
                  goto LABEL_281;
                }
LABEL_173:
                if ( !BattleServantData__isGainNp((BattleServantData_o *)v142, 1, dataVals_k__BackingField, 0LL) )
                  goto LABEL_280;
                v178 = (BattleLogicFunction_o *)BattleServantData__addNp(
                                                  (BattleServantData_o *)v142,
                                                  CorrectedValueFuncGainNp,
                                                  0,
                                                  0LL);
                v179 = (int)v178;
                this = (BattleLogicFunction_o *)BattleLogicFunction__getFunctionObject(
                                                  v178,
                                                  funcEntity,
                                                  (int32_t)v142->fields.logic,
                                                  index,
                                                  isCommandSideEffect,
                                                  0LL,
                                                  v180);
                if ( !this )
                  goto LABEL_453;
                v181 = (BattleActionData_BuffData_o *)this;
                HIDWORD(this->fields.logic) = 3;
                BattleActionData_BuffData__setSaveNp((BattleActionData_BuffData_o *)this, v179, 0LL);
                if ( isCommandSideEffect )
                  v181->fields.isCommandAfter = 1;
LABEL_182:
                BattleActionData__setBuffData(v19, v181, dataVals_k__BackingField, 0LL);
                goto LABEL_183;
              }
              if ( FuncList__Check(45, *p_funcType, 0LL) )
              {
                BYTE3(v142[9].fields.master) = DataVals__GetValue(dataVals_k__BackingField, 0LL) == 1;
                goto LABEL_183;
              }
              if ( FuncList__Check(46, *p_funcType, 0LL) )
              {
                v104 = isCommandSideEffect;
                v207 = BattleLogicFunction__functionInstantDeath(
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
                v271 = v19->fields.actorId;
                v272 = (int32_t)v142->fields.logic;
                v273 = 9;
                goto LABEL_289;
              }
              if ( FuncList__Check(48, *p_funcType, 0LL) )
              {
                v224 = BattleLogicFunction__functionGainNpFromTargets(v20, args, v19, v140, v274);
                goto LABEL_219;
              }
              if ( FuncList__Check(49, *p_funcType, 0LL) )
              {
                v224 = BattleLogicFunction__functionGainHpFromTargets(v20, args, v19, v140, v275);
                goto LABEL_219;
              }
              v276 = FuncList__Check(50, *p_funcType, 0LL);
              if ( v276 || (v276 = FuncList__Check(51, *p_funcType, 0LL)) )
              {
                v278 = *p_funcType == 51;
                if ( *p_funcType == 50 )
                {
                  v276 = BattleLogicFunction__isSafeDamage(
                           v20,
                           dataVals_k__BackingField,
                           targetId_k__BackingField,
                           v277);
                  v278 = v276;
                }
                v200 = v19->fields.actorId;
                HpPerValue = BattleLogicFunction__getHpPerValue(
                               (BattleLogicFunction_o *)v276,
                               dataVals_k__BackingField,
                               (BattleServantData_o *)v142,
                               v277);
                v202 = isCommandSideEffect;
                v203 = v278;
                mainAction = v19;
                isRandomDamagea = 0;
                v204 = isCommandSideEffect;
                overwriteLossHpa = HpPerValue;
LABEL_194:
                v205 = v20;
                v206 = v200;
                v104 = v202;
LABEL_197:
                v207 = BattleLogicFunction__functionlossHp(
                         v205,
                         v206,
                         targetId_k__BackingField,
                         funcEntity,
                         dataVals_k__BackingField,
                         index,
                         v203,
                         v204,
                         overwriteLossHpa,
                         isRandomDamagea,
                         mainAction,
                         v356);
                goto LABEL_284;
              }
              if ( FuncList__Check(52, *p_funcType, 0LL) )
              {
                v281 = 1;
                v282 = v20;
                v283 = dataVals_k__BackingField;
LABEL_303:
                updated = BattleLogicFunction__UpdateUserEquipSkillChargeTurn(v282, v283, v281, v280);
                if ( updated )
                {
                  v104 = isCommandSideEffect;
                  BattleLogicFunction__CreateMasterBuffEffect(
                    (BattleLogicFunction_o *)updated,
                    v19,
                    funcEntity,
                    index,
                    isCommandSideEffect,
                    dataVals_k__BackingField,
                    v285);
                  goto LABEL_164;
                }
                v286 = (BattleActionData_MasterBuffData_o *)sub_1B9025C(BattleActionData_MasterBuffData_TypeInfo);
                BattleActionData_MasterBuffData___ctor(v286, funcEntity, 0LL);
                if ( !v286 )
                  goto LABEL_453;
                v286->fields.popColor = 1;
                v104 = isCommandSideEffect;
                v198 = v140->fields._targetId_k__BackingField;
                v267 = index;
                v197 = v20;
                v266 = isCommandSideEffect;
                v268 = dataVals_k__BackingField;
                v269 = (BattleActionData_BuffData_o *)v286;
                goto LABEL_283;
              }
              if ( FuncList__Check(62, *p_funcType, 0LL) )
              {
                v282 = v20;
                v283 = dataVals_k__BackingField;
                v281 = 0;
                goto LABEL_303;
              }
              if ( FuncList__Check(53, *p_funcType, 0LL) )
              {
                v287 = (Generator_BGFromQuickChangeBGFunc_o *)sub_1B9025C(Generator_BGFromQuickChangeBGFunc_TypeInfo);
                Generator_BGFromQuickChangeBGFunc___ctor(v287, dataVals_k__BackingField, 0LL);
                BattleLogicFunction__FunctionQuickChangeBG(v20, args, (Generator_Background_o *)v287, v288);
                goto LABEL_183;
              }
              if ( FuncList__Check(54, *p_funcType, 0LL) )
              {
                this = (BattleLogicFunction_o *)v142[2].fields.wkStr;
                if ( !this )
                  goto LABEL_453;
                if ( ServantEntity__isInvalidSkillShift((ServantEntity_o *)this, 0LL) )
                {
                  v198 = v140->fields._targetId_k__BackingField;
LABEL_281:
                  v104 = isCommandSideEffect;
                  v197 = v20;
LABEL_282:
                  v266 = v104;
                  v267 = index;
                  v268 = dataVals_k__BackingField;
                  v269 = 0LL;
LABEL_283:
                  v207 = BattleLogicFunction__getNoEffectObject(v197, v198, v267, v268, v266, 0LL, v269, v177);
LABEL_284:
                  BattleActionData__addAction(v19, v207, 0LL);
                  goto LABEL_164;
                }
                Param = DataVals__GetParam(dataVals_k__BackingField, 53, 0, 0LL);
                BattleLogicFunction__functionShiftServant(v20, v19, (BattleServantData_o *)v142, Param, v290);
                goto LABEL_183;
              }
              if ( FuncList__Check(55, *p_funcType, 0LL) )
              {
                v271 = v19->fields.actorId;
                v272 = (int32_t)v142->fields.logic;
                v273 = 10;
                goto LABEL_289;
              }
              if ( FuncList__Check(57, *p_funcType, 0LL) )
              {
                LODWORD(v142[7].fields.logic) = DataVals__GetValue(dataVals_k__BackingField, 0LL);
                goto LABEL_183;
              }
              if ( FuncList__Check(58, *p_funcType, 0LL) )
              {
                klass = (BattleBuffData_o *)v142[9].klass;
                this = (BattleLogicFunction_o *)DataVals__GetParam(dataVals_k__BackingField, 14, 0, 0LL);
                if ( !klass )
                  goto LABEL_453;
                BattleBuffData__UpdateForceAllBuffNoAct(klass, (int32_t)this, funcEntity->fields.vals, 0LL);
                v104 = isCommandSideEffect;
                v194 = (int32_t)v142->fields.logic;
                v195 = funcEntity;
                goto LABEL_190;
              }
              if ( FuncList__Check(59, *p_funcType, 0LL) )
              {
                v292 = (BattleActionData_UpShiftGaugeData_o *)sub_1B9025C(BattleActionData_UpShiftGaugeData_TypeInfo);
                BattleActionData_UpShiftGaugeData___ctor(v292, 0LL);
              }
              else
              {
                if ( !FuncList__Check(60, *p_funcType, 0LL) )
                {
                  if ( FuncList__Check(61, *p_funcType, 0LL) )
                  {
                    SubMember = BattleLogicFunction__FunctionMoveToLastSubMember(
                                  v20,
                                  (BattleServantData_o *)v142,
                                  funcEntity,
                                  v294,
                                  index,
                                  v295);
                    BattleActionData__addAction(v19, SubMember, 0LL);
                    BattleActionData__UpdateForceBuffEffectAllTrue(v19, 0LL);
LABEL_225:
                    v361 = 1;
                    goto LABEL_183;
                  }
                  if ( FuncList__Check(119, *p_funcType, 0LL) )
                  {
                    BattleLogicFunction__functionMovePosition(v20, v19, (BattleServantData_o *)v142, v297);
                    goto LABEL_183;
                  }
                  if ( FuncList__Check(120, *p_funcType, 0LL) )
                  {
                    v104 = isCommandSideEffect;
                    BattleLogicFunction__functionRevival(
                      v20,
                      v19,
                      funcEntity,
                      dataVals_k__BackingField,
                      index,
                      isCommandSideEffect,
                      v298);
                    goto LABEL_164;
                  }
                  if ( FuncList__Check(121, *p_funcType, 0LL) )
                  {
                    v271 = v19->fields.actorId;
                    v272 = (int32_t)v142->fields.logic;
                    v273 = 11;
                  }
                  else
                  {
                    if ( !FuncList__Check(143, *p_funcType, 0LL) )
                    {
                      if ( FuncList__Check(124, *p_funcType, 0LL) )
                      {
                        BattleLogicFunction__functionMoveState(v20, args, v19, v140, v299);
                        goto LABEL_183;
                      }
                      if ( FuncList__Check(125, *p_funcType, 0LL) )
                      {
                        BattleLogicFunction__ChangeBGMCostume(v20, dataVals_k__BackingField, v19, v300);
                        goto LABEL_183;
                      }
                      v301 = FuncList__Check(126, *p_funcType, 0LL);
                      if ( v301 )
                      {
                        BattleLogicFunction__LossCommandSpell(
                          (BattleLogicFunction_o *)v301,
                          dataVals_k__BackingField,
                          v19,
                          v302);
                        goto LABEL_183;
                      }
                      if ( FuncList__Check(127, *p_funcType, 0LL) )
                        goto LABEL_183;
                      if ( FuncList__Check(128, *p_funcType, 0LL) )
                      {
                        BattleLogicFunction__FunctionUpdateEntryPositions(v20, dataVals_k__BackingField, v303);
                        goto LABEL_183;
                      }
                      if ( FuncList__Check(63, *p_funcType, 0LL) )
                      {
                        BattleLogicFunction__FunctionUpdateEntryMaxCountEachTurn(v20, dataVals_k__BackingField, v304);
                        goto LABEL_183;
                      }
                      if ( FuncList__Check(130, *p_funcType, 0LL) )
                      {
                        BattleLogicFunction__FunctionToFieldAddChangeFieldBuff(
                          v20,
                          args,
                          v19,
                          v140,
                          isTreasureDvc,
                          v305);
                        goto LABEL_183;
                      }
                      if ( FuncList__Check(131, *p_funcType, 0LL) )
                      {
                        BattleLogicFunction__FunctionSubFieldBuff(v20, args, v19, v140, v306);
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
                        BattleLogicFunction__FunctionLastSkillCopy(v20, v19, dataVals_k__BackingField, args, v307);
                        goto LABEL_183;
                      }
                      if ( FuncList__Check(136, *p_funcType, 0LL) )
                      {
                        v308 = DataVals__GetValue(dataVals_k__BackingField, 0LL);
                        BattleLogicFunction__FunctionChangeEnemyMasterFace(v20, v308, v309);
                        goto LABEL_183;
                      }
                      if ( FuncList__Check(137, *p_funcType, 0LL) )
                      {
                        v243 = v19->fields.actorId;
                        v244 = (int32_t)v142->fields.logic;
                        v245 = ((__int64 (__fastcall *)(BattleLogicFunction_o *, void *))v142->klass[1]._1.parent)(
                                 v142,
                                 v142->klass[1]._1.generic_class) > 1;
LABEL_232:
                        v247 = v20;
                        v248 = v243;
                        v249 = v244;
LABEL_235:
                        v224 = BattleLogicFunction__functionValueDamage(
                                 v247,
                                 v248,
                                 v249,
                                 dataVals_k__BackingField,
                                 index,
                                 v245,
                                 v19,
                                 v246);
                        goto LABEL_219;
                      }
                      if ( FuncList__Check(138, *p_funcType, 0LL) )
                      {
                        BattleLogicFunction__FunctionAddBattleValue(v20, funcEntity, v310);
                        goto LABEL_183;
                      }
                      if ( FuncList__Check(139, *p_funcType, 0LL) )
                      {
                        BattleLogicFunction__FunctionSetBattleValue(v20, funcEntity, v311);
                        goto LABEL_183;
                      }
                      if ( FuncList__Check(140, *p_funcType, 0LL) )
                      {
                        klass_high = SHIDWORD(v142[4].klass);
                        v315 = (float)(DataVals__GetValue(dataVals_k__BackingField, 0LL) * klass_high) / 1000.0;
                        if ( v315 == INFINITY )
                          v316 = 0x80000000;
                        else
                          v316 = (int)v315;
                        v224 = BattleLogicFunction__functionGainNp(
                                 v20,
                                 args,
                                 v313,
                                 targetId_k__BackingField,
                                 dataVals_k__BackingField,
                                 v316,
                                 v314);
                        goto LABEL_219;
                      }
                      if ( !FuncList__Check(141, *p_funcType, 0LL) )
                      {
                        if ( FuncList__Check(142, *p_funcType, 0LL) )
                        {
                          v224 = BattleLogicFunction__FunctionAddBattlePoint(
                                   v20,
                                   args,
                                   targetId_k__BackingField,
                                   dataVals_k__BackingField,
                                   v323);
                          if ( !v224 )
                            goto LABEL_183;
                        }
                        else
                        {
                          if ( !FuncList__Check(144, *p_funcType, 0LL) )
                          {
                            this = (BattleLogicFunction_o *)FuncList__Check(145, *p_funcType, 0LL);
                            if ( ((unsigned __int8)this & 1) != 0 )
                            {
                              v325 = v20->fields.data;
                              if ( !v325 )
                                goto LABEL_453;
                              perf = (UnityEngine_Object_o *)v325->fields.perf;
                              if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
                                j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
                              this = (BattleLogicFunction_o *)UnityEngine_Object__op_Inequality(perf, 0LL, 0LL);
                              if ( ((unsigned __int8)this & 1) != 0 )
                              {
                                v327 = v20->fields.data;
                                if ( !v327 )
                                  goto LABEL_453;
                                this = (BattleLogicFunction_o *)v327->fields.perf;
                                if ( !this )
                                  goto LABEL_453;
                                BattlePerformance__HideOverGaugeMessage((BattlePerformance_o *)this, 0LL);
                              }
                            }
                            goto LABEL_183;
                          }
                          v224 = BattleLogicFunction__FunctionSetNpExecutedState(
                                   v20,
                                   args,
                                   targetId_k__BackingField,
                                   dataVals_k__BackingField,
                                   v324);
                        }
                        goto LABEL_219;
                      }
                      v317 = SHIDWORD(v142[4].klass);
                      v318 = (float)(DataVals__GetValue(dataVals_k__BackingField, 0LL) * v317) / 1000.0;
                      v319 = (int)v318;
                      if ( v318 == INFINITY )
                        v319 = 0x80000000;
                      v320 = (BattleLogicFunction_o *)BattleServantData__addNp(
                                                        (BattleServantData_o *)v142,
                                                        -v319,
                                                        0,
                                                        0LL);
                      v321 = (int)v320;
                      this = (BattleLogicFunction_o *)BattleLogicFunction__getFunctionObject(
                                                        v320,
                                                        funcEntity,
                                                        (int32_t)v142->fields.logic,
                                                        index,
                                                        isCommandSideEffect,
                                                        0LL,
                                                        v322);
                      if ( !this )
                        goto LABEL_453;
                      v181 = (BattleActionData_BuffData_o *)this;
                      HIDWORD(this->fields.logic) = 3;
                      v186 = v321;
LABEL_181:
                      BattleActionData_BuffData__setSaveNp((BattleActionData_BuffData_o *)this, v186, 0LL);
                      goto LABEL_182;
                    }
                    v271 = v19->fields.actorId;
                    v272 = (int32_t)v142->fields.logic;
                    v273 = 12;
                  }
LABEL_289:
                  v224 = BattleLogicFunction__functionNPDamage(
                           v20,
                           v271,
                           v272,
                           dataVals_k__BackingField,
                           index,
                           v273,
                           v19,
                           v270);
                  goto LABEL_219;
                }
                v292 = (BattleActionData_UpShiftGaugeData_o *)sub_1B9025C(BattleActionData_DownShiftGaugeData_TypeInfo);
                BattleActionData_DownShiftGaugeData___ctor((BattleActionData_DownShiftGaugeData_o *)v292, 0LL);
              }
              BattleLogicFunction__functionBreakGaugeChange(
                v20,
                v19,
                funcUnit,
                (BattleServantData_o *)v142,
                (BattleActionData_BaseShiftGaugeData_o *)v292,
                v293);
              goto LABEL_183;
            }
            if ( BattleServantData__checkPlayer((BattleServantData_o *)v142, 0LL) )
            {
              v182 = DataVals__GetValue(dataVals_k__BackingField, 0LL);
              v183 = (BattleLogicFunction_o *)BattleServantData__addNp((BattleServantData_o *)v142, -v182, 0, 0LL);
              v184 = (int)v183;
              this = (BattleLogicFunction_o *)BattleLogicFunction__getFunctionObject(
                                                v183,
                                                funcEntity,
                                                (int32_t)v142->fields.logic,
                                                index,
                                                v104,
                                                0LL,
                                                v185);
              if ( !this )
                goto LABEL_453;
              v181 = (BattleActionData_BuffData_o *)this;
              v186 = v184;
              HIDWORD(this->fields.logic) = 3;
              goto LABEL_181;
            }
          }
LABEL_164:
          v145 = &funcEntity->fields.funcType;
LABEL_134:
          isDamage = FuncList__isDamage(*v145, 0LL);
          if ( isDamage )
            v162 = 0;
          else
            v162 = -110;
          if ( isDamage )
            v163 = 0;
          else
            v163 = 146;
          if ( v162 != -110 )
          {
            if ( v163 )
              return v19;
            if ( !LOBYTE(v142[9].fields.buffProgressTurnOpponentList) )
            {
              this = (BattleLogicFunction_o *)v142[9].klass;
              if ( !this )
                goto LABEL_453;
              if ( !LOBYTE(this[1].fields.buffProgressTurnOpponentList) )
              {
                LOBYTE(v142[9].fields.buffProgressTurnOpponentList) = 1;
                if ( !v365 )
                  goto LABEL_453;
                action = (BattleActionData_o *)LODWORD(v142->fields.logic);
                items = v365->fields._items;
                v165 = Method_System_Collections_Generic_List_int__Add__;
                ++v365->fields._version;
                if ( !items )
                  goto LABEL_453;
                size = v365->fields._size;
                if ( (unsigned int)size >= items->max_length )
                {
                  System_Collections_Generic_List_int___AddWithResize(
                    v365,
                    (int32_t)action,
                    *(const MethodInfo_34F399C **)(*(_QWORD *)(v165[4] + 192LL) + 112LL));
                  this = (BattleLogicFunction_o *)v142[9].klass;
                  if ( !this )
                    goto LABEL_453;
                }
                else
                {
                  v365->fields._size = size + 1;
                  items->m_Items[size + 1] = (int)action;
                }
                v167 = BattleBuffData__UseProgressingDoNotAct(
                         (BattleBuffData_o *)this,
                         (BattleServantData_o *)v142,
                         0,
                         0LL);
                BattleActionData__addSideEffectActionData(v19, v167, 1, 0LL);
                this = (BattleLogicFunction_o *)v142[9].klass;
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
            v168);
LABEL_153:
          v138 = v137->max_length;
        }
      }
      v105 = ServantData;
      if ( !isCreateSideEffect )
        break;
      v110 = v368;
      v328 = v371;
      if ( !funcEntity )
        goto LABEL_453;
      v329 = FuncList__Check(26, *p_funcType, 0LL);
      v330 = (BattleLogicFunction_AfterAttackSideEffectMakeArgument_o *)sub_1B9025C(BattleLogicFunction_AfterAttackSideEffectMakeArgument_TypeInfo);
      BattleLogicFunction_AfterAttackSideEffectMakeArgument___ctor(v330, 0LL);
      if ( !v330 )
        goto LABEL_453;
      Argument__Init = BattleLogicFunction_AfterAttackSideEffectMakeArgument__Init(v330, v19, 0LL);
      BattleLogicFunction__setAttackSideEffect(v20, v19, ServantData, v329 || isTreasureDvc, Argument__Init, v332);
      this = (BattleLogicFunction_o *)BattleActionData__getDamageTargetIdList(v19, 0LL);
      if ( !this )
        goto LABEL_453;
      v104 = isCommandSideEffect;
      v333 = this;
      if ( this->fields.logic )
      {
        if ( v363 )
        {
          v334 = 0LL;
        }
        else
        {
          v334 = (BattleCommandData_o *)sub_1B9025C(BattleCommandData_TypeInfo);
          BattleCommandData___ctor(v334, 0LL);
          this = (BattleLogicFunction_o *)BattleServantData__getTreasureDvcCardId(ServantData, 0LL);
          if ( !v334 )
            goto LABEL_453;
          v334->fields._type = (int)this;
          v334->fields.treasureDvc = BattleServantData__getTreasureDvcId(ServantData, 1, 0LL, 0LL);
        }
        v335 = (UnityEngine_Object_o *)v20->fields.logic;
        if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
        this = (BattleLogicFunction_o *)UnityEngine_Object__op_Inequality(v335, 0LL, 0LL);
        if ( ((unsigned __int8)this & 1) != 0 && (v336 = v333->fields.logic, (int)v336 >= 1) )
        {
          v337 = 0LL;
          do
          {
            if ( v337 >= (unsigned int)v336 )
              goto LABEL_454;
            this = (BattleLogicFunction_o *)v20->fields.logic;
            if ( !this )
              goto LABEL_453;
            this = (BattleLogicFunction_o *)BattleLogic__setDamageSideEffect(
                                              (BattleLogic_o *)this,
                                              v19,
                                              v19->fields.actorId,
                                              *((_DWORD *)&v333->fields.logictarget + v337),
                                              v334,
                                              0LL);
            LODWORD(v336) = v333->fields.logic;
            ++v337;
          }
          while ( (__int64)v337 < (int)v336 );
          v104 = isCommandSideEffect;
          v105 = ServantData;
        }
        else
        {
          v104 = isCommandSideEffect;
        }
        v110 = v368;
      }
LABEL_396:
      v109 = v110->max_length;
      v112 = v328 + 1;
      if ( v112 >= v109 )
        goto LABEL_412;
    }
    v110 = v368;
LABEL_395:
    v328 = v371;
    goto LABEL_396;
  }
  v361 = 0;
  v362 = 0;
LABEL_412:
  this = (BattleLogicFunction_o *)BattleLogicFunction_ProcListInArgs__get_CheckDuplicateFunc(args, 0LL);
  if ( !this )
    goto LABEL_453;
  ((void (__fastcall *)(BattleLogicFunction_o *, void *))this->klass[1]._1.namespaze)(
    this,
    this->klass[1]._1.byval_arg.data);
  if ( (v362 & 1) != 0 )
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
    v338 = (UnityEngine_Object_o *)v20->fields.logic;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    if ( UnityEngine_Object__op_Inequality(v338, 0LL, 0LL) )
    {
      this = (BattleLogicFunction_o *)BattleActionData__getSummonServant(v19, -1, 0LL);
      if ( !this )
        goto LABEL_453;
      v339 = (int)this->fields.logic;
      v340 = this;
      if ( v339 >= 1 )
      {
        v341 = 0;
        while ( v341 < v339 )
        {
          v342 = *((_QWORD *)&v340->fields.logictarget + (int)v341);
          if ( !v342 )
            goto LABEL_453;
          this = (BattleLogicFunction_o *)v20->fields.logic;
          if ( !this )
            goto LABEL_453;
          BattleLogic__actEnemyPassiveSkill((BattleLogic_o *)this, *(_DWORD *)(v342 + 28), 0LL);
          v339 = (int)v340->fields.logic;
          if ( (int)++v341 >= v339 )
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
      v105,
      FuncSideEffectArg->klass[1]._1.image);
  if ( isBuffUpdate )
  {
    v344 = (UnityEngine_Object_o *)v20->fields.logic;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    if ( UnityEngine_Object__op_Inequality(v344, 0LL, 0LL) )
    {
      this = (BattleLogicFunction_o *)v20->fields.logic;
      if ( !this )
        goto LABEL_453;
      BattleLogic__checkUsedBuff((BattleLogic_o *)this, 0LL);
      v345 = v20->fields.data;
      if ( !v345 )
        goto LABEL_453;
      this = (BattleLogicFunction_o *)v345->fields._FieldEnvData_k__BackingField;
      if ( !this )
        goto LABEL_453;
      BattleFieldEnvironmentData__CheckUsedBuff((BattleFieldEnvironmentData_o *)this, 0LL);
    }
  }
  if ( (v361 & 1) != 0 || args->fields.updateField )
  {
    v346 = (UnityEngine_Object_o *)v20->fields.logic;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    if ( UnityEngine_Object__op_Inequality(v346, 0LL, 0LL) )
    {
      this = (BattleLogicFunction_o *)v20->fields.logic;
      if ( !this )
        goto LABEL_453;
      BattleLogic__updateFieldBuff((BattleLogic_o *)this, 0LL);
    }
  }
  this = (BattleLogicFunction_o *)v365;
  if ( !v365 )
LABEL_453:
    sub_1B9026C(this, action);
  System_Collections_Generic_List_int___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v377,
    v365,
    (const MethodInfo_34F4470 *)Method_System_Collections_Generic_List_int__GetEnumerator__);
  v378 = v377;
  while ( System_Collections_Generic_List_Enumerator_int___MoveNext(
            &v378,
            (const MethodInfo_3286084 *)Method_System_Collections_Generic_List_Enumerator_int__MoveNext__) )
  {
    v348 = v20->fields.data;
    if ( !v348 )
      sub_1B9026C(0LL, v347);
    v349 = BattleData__getServantData(v348, v378.fields._current, 0LL);
    if ( v349 )
      v349->fields.isTDLimitCount = 0;
  }
  System_Collections_Generic_List_Enumerator_int___Dispose(
    &v378,
    (const MethodInfo_3286080 *)Method_System_Collections_Generic_List_Enumerator_int__Dispose__);
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
  int32_t v26; // w3
  System_Collections_Generic_IEnumerable_TSource__o *v27; // x0
  __int64 v28; // x25
  BattleLogicFunction_SideEffectMakeArgument_o *v29; // x0
  const MethodInfo *v30; // x6
  const MethodInfo *v31; // x6

  v9 = mainAction;
  v10 = this;
  if ( (byte_4A72988 & 1) == 0 )
  {
    sub_1B90010(&BattleLogicFunction_AttackSideEffectFunctionArgument_TypeInfo, mainAction);
    sub_1B90010(&BattleCommandData_TypeInfo, v11);
    sub_1B90010(&Method_System_Linq_Enumerable_Select_BattleActionData_SideEffectData__int___, v12);
    sub_1B90010(&Method_System_Linq_Enumerable_ToArray_int___, v13);
    sub_1B90010(&System_Func_BattleActionData_SideEffectData__int__TypeInfo, v14);
    sub_1B90010(&int___TypeInfo, v15);
    sub_1B90010(&Method_BattleLogicFunction___c__setAttackSideEffect_b__52_0__, v16);
    this = (BattleLogicFunction_o *)sub_1B90010(&BattleLogicFunction___c_TypeInfo, v17);
    byte_4A72988 = 1;
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
      v18 = (BattleCommandData_o *)sub_1B9025C(BattleCommandData_TypeInfo);
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
    v19 = (BattleLogicFunction_AttackSideEffectFunctionArgument_o *)sub_1B9025C(BattleLogicFunction_AttackSideEffectFunctionArgument_TypeInfo);
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
      _9__52_0 = (System_Func_object__int__o *)sub_1B9025C(System_Func_BattleActionData_SideEffectData__int__TypeInfo);
      System_Func_object__int____ctor(_9__52_0, v23, Method_BattleLogicFunction___c__setAttackSideEffect_b__52_0__, 0LL);
      static_fields = BattleLogicFunction___c_TypeInfo->static_fields;
      static_fields->__9__52_0 = (struct System_Func_BattleActionData_SideEffectData__int__o *)_9__52_0;
      sub_1B8FFB4((ServantStatusBattleListViewItem_o *)&static_fields->__9__52_0, (int32_t)_9__52_0, v25, v26);
    }
    v27 = (System_Collections_Generic_IEnumerable_TSource__o *)System_Linq_Enumerable__Select_object__int_(
                                                                 SideEffectList_k__BackingField,
                                                                 (System_Func_TSource__TResult__o *)_9__52_0,
                                                                 (const MethodInfo_2EBE4B0 *)Method_System_Linq_Enumerable_Select_BattleActionData_SideEffectData__int___);
    this = (BattleLogicFunction_o *)System_Linq_Enumerable__ToArray_int_(
                                      v27,
                                      (const MethodInfo_2EC6DFC *)Method_System_Linq_Enumerable_ToArray_int___);
    if ( v9 )
    {
      BattleActionData__SetFirstAtkMainTargetId(v9, (System_Int32_array *)this, 0LL);
      v28 = ((__int64 (__fastcall *)(BattleLogicFunction_SideEffectMakeArgument_o *, const char *))attackArg->klass[1]._1.gc_desc)(
              attackArg,
              attackArg->klass[1]._1.name);
      this = (BattleLogicFunction_o *)sub_1B900B8(int___TypeInfo, 1LL);
      if ( this )
      {
        mainAction = (BattleActionData_o *)this;
        if ( !LODWORD(this->fields.logic) )
          sub_1B90274(this, this);
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
    sub_1B9026C(this, mainAction);
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
    sub_1B9026C(this, 0LL);
  DamageAttackSideEffectList = BattleActionData__getDamageAttackSideEffectList(mainAction, 0LL);
  this->fields._SideEffectList_k__BackingField = DamageAttackSideEffectList;
  sub_1B8FFB4((ServantStatusBattleListViewItem_o *)&this->fields, (int32_t)DamageAttackSideEffectList, v5, v6);
  return (BattleLogicFunction_SideEffectMakeArgument_o *)this;
}


BattleLogicFunction_SideEffectMakeArgument_o *__fastcall BattleLogicFunction_AfterAttackSideEffectMakeArgument__MakeOnlyMainArgument(
        BattleLogicFunction_AfterAttackSideEffectMakeArgument_o *this,
        const MethodInfo *method)
{
  BattleLogicFunction_SideEffectMakeArgument_o *v2; // x19
  const MethodInfo *v3; // x1

  if ( (byte_4A72A42 & 1) == 0 )
  {
    sub_1B90010(&BattleLogicFunction_AfterMainAttackSideEffectMakeArgument_TypeInfo, method);
    byte_4A72A42 = 1;
  }
  v2 = (BattleLogicFunction_SideEffectMakeArgument_o *)sub_1B9025C(BattleLogicFunction_AfterMainAttackSideEffectMakeArgument_TypeInfo);
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
  sub_1B8FFB4((ServantStatusBattleListViewItem_o *)&this->fields.argument, (int32_t)argument, v5, v6);
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

  if ( (byte_4A72A27 & 1) == 0 )
  {
    sub_1B90010(&BattleLogicFunction_AttackSideEffectCheckDuplicateFunction_TypeInfo, method);
    byte_4A72A27 = 1;
  }
  BattleLogicFunction_CommonSideEffectFunctionArgument___ctor(
    (BattleLogicFunction_CommonSideEffectFunctionArgument_o *)this,
    method);
  v3 = sub_1B9025C(BattleLogicFunction_AttackSideEffectCheckDuplicateFunction_TypeInfo);
  BattleLogicFunction_CommonCheckDuplicateFunction___ctor((BattleLogicFunction_CommonCheckDuplicateFunction_o *)v3, v4);
  *(_QWORD *)(v3 + 24) = this;
  sub_1B8FFB4((ServantStatusBattleListViewItem_o *)(v3 + 24), (int32_t)this, v5, v6);
  this->fields.checkDuplicate = (struct BattleLogicFunction_CheckDuplicateFunction_o *)v3;
  sub_1B8FFB4((ServantStatusBattleListViewItem_o *)&this->fields.checkDuplicate, v3, v7, v8);
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
  int32_t v6; // w3

  if ( (byte_4A72A34 & 1) == 0 )
  {
    sub_1B90010(&Method_System_Collections_Generic_List_BattleLogicFunction_ExecutedFunctionData___ctor__, method);
    sub_1B90010(&System_Collections_Generic_List_BattleLogicFunction_ExecutedFunctionData__TypeInfo, v3);
    byte_4A72A34 = 1;
  }
  v4 = (System_Collections_Generic_List_object__o *)sub_1B9025C(System_Collections_Generic_List_BattleLogicFunction_ExecutedFunctionData__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v4,
    (const MethodInfo_351018C *)Method_System_Collections_Generic_List_BattleLogicFunction_ExecutedFunctionData___ctor__);
  this->fields.executedFuncList = (struct System_Collections_Generic_List_BattleLogicFunction_ExecutedFunctionData__o *)v4;
  sub_1B8FFB4((ServantStatusBattleListViewItem_o *)&this->fields, (int32_t)v4, v5, v6);
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

  if ( (byte_4A72A30 & 1) == 0 )
  {
    sub_1B90010(&Method_System_Collections_Generic_List_BattleLogicFunction_ExecutedFunctionData__get_Count__, method);
    sub_1B90010(&Method_System_Collections_Generic_List_BattleLogicFunction_ExecutedFunctionData__get_Item__, v3);
    byte_4A72A30 = 1;
  }
  executedFuncList = (System_Collections_Generic_List_object__o *)this->fields.executedFuncList;
  if ( !executedFuncList )
LABEL_8:
    sub_1B9026C(executedFuncList, method);
  v5 = 0;
  while ( v5 < executedFuncList->fields._size )
  {
    executedFuncList = (System_Collections_Generic_List_object__o *)System_Collections_Generic_List_object___get_Item(
                                                                      executedFuncList,
                                                                      v5,
                                                                      (const MethodInfo_35106F0 *)Method_System_Collections_Generic_List_BattleLogicFunction_ExecutedFunctionData__get_Item__);
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
    sub_1B9026C(this, 0LL);
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
  int32_t v12; // w3
  System_Collections_Generic_List_object__o *executedFuncList; // x19
  System_Predicate_object__o *v14; // x20

  if ( (byte_4A72A32 & 1) == 0 )
  {
    sub_1B90010(&Method_System_Collections_Generic_List_BattleLogicFunction_ExecutedFunctionData__FindIndex__, vals);
    sub_1B90010(&System_Predicate_BattleLogicFunction_ExecutedFunctionData__TypeInfo, v5);
    sub_1B90010(
      &Method_BattleLogicFunction_CommonCheckDuplicateFunction___c__DisplayClass7_0__isExecutedFunction_b__0__,
      v6);
    sub_1B90010(&BattleLogicFunction_CommonCheckDuplicateFunction___c__DisplayClass7_0_TypeInfo, v7);
    byte_4A72A32 = 1;
  }
  v8 = sub_1B9025C(BattleLogicFunction_CommonCheckDuplicateFunction___c__DisplayClass7_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v8, 0LL);
  if ( !v8
    || (*(_QWORD *)(v8 + 16) = vals,
        sub_1B8FFB4((ServantStatusBattleListViewItem_o *)(v8 + 16), (int32_t)vals, v11, v12),
        executedFuncList = (System_Collections_Generic_List_object__o *)this->fields.executedFuncList,
        v14 = (System_Predicate_object__o *)sub_1B9025C(System_Predicate_BattleLogicFunction_ExecutedFunctionData__TypeInfo),
        System_Predicate_object____ctor(
          v14,
          (Il2CppObject *)v8,
          Method_BattleLogicFunction_CommonCheckDuplicateFunction___c__DisplayClass7_0__isExecutedFunction_b__0__,
          0LL),
        !executedFuncList) )
  {
    sub_1B9026C(v9, v10);
  }
  return System_Collections_Generic_List_object___FindIndex(
           executedFuncList,
           (System_Predicate_T__o *)v14,
           (const MethodInfo_3511218 *)Method_System_Collections_Generic_List_BattleLogicFunction_ExecutedFunctionData__FindIndex__) >= 0;
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
  int32_t v14; // w3
  System_Collections_Generic_List_object__o *executedFuncList; // x19
  System_Predicate_object__o *v16; // x20

  if ( (byte_4A72A33 & 1) == 0 )
  {
    sub_1B90010(&Method_System_Collections_Generic_List_BattleLogicFunction_ExecutedFunctionData__FindIndex__, vals);
    sub_1B90010(&System_Predicate_BattleLogicFunction_ExecutedFunctionData__TypeInfo, v7);
    sub_1B90010(
      &Method_BattleLogicFunction_CommonCheckDuplicateFunction___c__DisplayClass8_0__isExecutedTarget_b__0__,
      v8);
    sub_1B90010(&BattleLogicFunction_CommonCheckDuplicateFunction___c__DisplayClass8_0_TypeInfo, v9);
    byte_4A72A33 = 1;
  }
  v10 = sub_1B9025C(BattleLogicFunction_CommonCheckDuplicateFunction___c__DisplayClass8_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v10, 0LL);
  if ( !v10
    || (*(_QWORD *)(v10 + 16) = vals,
        sub_1B8FFB4((ServantStatusBattleListViewItem_o *)(v10 + 16), (int32_t)vals, v13, v14),
        *(_DWORD *)(v10 + 24) = targetId,
        executedFuncList = (System_Collections_Generic_List_object__o *)this->fields.executedFuncList,
        v16 = (System_Predicate_object__o *)sub_1B9025C(System_Predicate_BattleLogicFunction_ExecutedFunctionData__TypeInfo),
        System_Predicate_object____ctor(
          v16,
          (Il2CppObject *)v10,
          Method_BattleLogicFunction_CommonCheckDuplicateFunction___c__DisplayClass8_0__isExecutedTarget_b__0__,
          0LL),
        !executedFuncList) )
  {
    sub_1B9026C(v11, v12);
  }
  return System_Collections_Generic_List_object___FindIndex(
           executedFuncList,
           (System_Predicate_T__o *)v16,
           (const MethodInfo_3511218 *)Method_System_Collections_Generic_List_BattleLogicFunction_ExecutedFunctionData__FindIndex__) >= 0;
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
    sub_1B9026C(this, 0LL);
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
  __int64 v15; // x1
  int32_t v16; // w2
  int32_t v17; // w3
  unsigned __int64 v18; // x26
  __int64 v19; // x22
  int32_t v20; // w2
  int32_t v21; // w3
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
  int32_t v33; // w3
  struct System_Object_array *items; // x8
  _QWORD *v35; // x9
  __int64 size; // x10
  Il2CppClass **v37; // x0

  if ( (byte_4A72A31 & 1) == 0 )
  {
    sub_1B90010(&BattleLogicFunction_ExecutedFunctionData_TypeInfo, vals);
    sub_1B90010(&Method_System_Collections_Generic_List_BattleLogicFunction_ExecutedFunctionData__Add__, v7);
    sub_1B90010(&Method_System_Collections_Generic_List_BattleLogicFunction_ExecutedFunctionData__FindIndex__, v8);
    sub_1B90010(&System_Predicate_BattleLogicFunction_ExecutedFunctionData__TypeInfo, v9);
    sub_1B90010(&BattleLogicFunction_CommonCheckDuplicateFunction___c__DisplayClass5_0_TypeInfo, v10);
    sub_1B90010(
      &Method_BattleLogicFunction_CommonCheckDuplicateFunction___c__DisplayClass5_1__saveExecutedFunction_b__0__,
      v11);
    sub_1B90010(&BattleLogicFunction_CommonCheckDuplicateFunction___c__DisplayClass5_1_TypeInfo, v12);
    byte_4A72A31 = 1;
  }
  v13 = sub_1B9025C(BattleLogicFunction_CommonCheckDuplicateFunction___c__DisplayClass5_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v13, 0LL);
  if ( !v13 )
    goto LABEL_19;
  *(_QWORD *)(v13 + 16) = vals;
  sub_1B8FFB4((ServantStatusBattleListViewItem_o *)(v13 + 16), (int32_t)vals, v16, v17);
  if ( !targetIds )
    goto LABEL_19;
  if ( (int)targetIds->max_length >= 1 )
  {
    v18 = 0LL;
    while ( 1 )
    {
      v19 = sub_1B9025C(BattleLogicFunction_CommonCheckDuplicateFunction___c__DisplayClass5_1_TypeInfo);
      System_Object___ctor((Il2CppObject *)v19, 0LL);
      if ( !v19 )
        break;
      *(_QWORD *)(v19 + 24) = v13;
      v22 = v19 + 24;
      sub_1B8FFB4((ServantStatusBattleListViewItem_o *)(v19 + 24), v13, v20, v21);
      if ( v18 >= targetIds->max_length )
        sub_1B90274(v23, v24);
      *(_DWORD *)(v19 + 16) = targetIds->m_Items[v18 + 1];
      executedFuncList = (System_Collections_Generic_List_object__o *)this->fields.executedFuncList;
      v26 = (System_Predicate_object__o *)sub_1B9025C(System_Predicate_BattleLogicFunction_ExecutedFunctionData__TypeInfo);
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
                (const MethodInfo_3511218 *)Method_System_Collections_Generic_List_BattleLogicFunction_ExecutedFunctionData__FindIndex__);
      if ( (Index & 0x80000000) != 0 )
      {
        if ( !*(_QWORD *)v22 )
          break;
        v27 = *(DataVals_o **)(*(_QWORD *)v22 + 16LL);
        v28 = (System_Collections_Generic_List_object__o *)this->fields.executedFuncList;
        v29 = *(_DWORD *)(v19 + 16);
        v30 = (BattleLogicFunction_ExecutedFunctionData_o *)sub_1B9025C(BattleLogicFunction_ExecutedFunctionData_TypeInfo);
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
            *(const MethodInfo_35109C0 **)(*(_QWORD *)(v35[4] + 192LL) + 112LL));
        }
        else
        {
          v37 = &items->obj.klass + size;
          v28->fields._size = size + 1;
          v37[4] = (Il2CppClass *)v30;
          sub_1B8FFB4((ServantStatusBattleListViewItem_o *)(v37 + 4), (int32_t)v30, v32, v33);
        }
      }
      if ( (__int64)++v18 >= (int)targetIds->max_length )
        return;
    }
LABEL_19:
    sub_1B9026C(Index, v15);
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
    sub_1B9026C(this, n);
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
    sub_1B9026C(this, n);
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
    sub_1B9026C(this, n);
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
  sub_1B8FFB4((ServantStatusBattleListViewItem_o *)&this->fields.argument, (int32_t)argument, v5, v6);
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
    sub_1B9026C(0LL, method);
  v4 = BattleLogicFunction_CommonSideEffectFunctionArgument__getCheckBuffFuncList(argument, method);
  this->fields.executedFuncList = v4;
  sub_1B8FFB4((ServantStatusBattleListViewItem_o *)&this->fields, (int32_t)v4, v5, v6);
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
    sub_1B9026C(this, vals);
  if ( !targetIds->max_length )
    sub_1B90274(this, vals);
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
  int32_t v6; // w3
  const MethodInfo *v7; // x1

  if ( (byte_4A72A26 & 1) == 0 )
  {
    sub_1B90010(
      &Method_System_Collections_Generic_Dictionary_int__List_BattleLogicFunction_ExecutedFunctionData____ctor__,
      method);
    sub_1B90010(
      &System_Collections_Generic_Dictionary_int__List_BattleLogicFunction_ExecutedFunctionData___TypeInfo,
      v3);
    byte_4A72A26 = 1;
  }
  *(&this->fields._SkillTiming_k__BackingField + 1) = -1;
  v4 = (System_Collections_Generic_Dictionary_int__object__o *)sub_1B9025C(System_Collections_Generic_Dictionary_int__List_BattleLogicFunction_ExecutedFunctionData___TypeInfo);
  System_Collections_Generic_Dictionary_int__object____ctor(
    v4,
    (const MethodInfo_317BBF8 *)Method_System_Collections_Generic_Dictionary_int__List_BattleLogicFunction_ExecutedFunctionData____ctor__);
  *(_QWORD *)&this->fields.buffUniqueId = v4;
  sub_1B8FFB4((ServantStatusBattleListViewItem_o *)&this->fields.buffUniqueId, (int32_t)v4, v5, v6);
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

  if ( (byte_4A72A25 & 1) == 0 )
  {
    sub_1B90010(
      &Method_System_Collections_Generic_Dictionary_int__List_BattleLogicFunction_ExecutedFunctionData___ContainsKey__,
      method);
    sub_1B90010(
      &Method_System_Collections_Generic_Dictionary_int__List_BattleLogicFunction_ExecutedFunctionData___get_Item__,
      v3);
    sub_1B90010(
      &Method_System_Collections_Generic_Dictionary_int__List_BattleLogicFunction_ExecutedFunctionData___set_Item__,
      v4);
    sub_1B90010(&Method_System_Collections_Generic_List_BattleLogicFunction_ExecutedFunctionData___ctor__, v5);
    sub_1B90010(&System_Collections_Generic_List_BattleLogicFunction_ExecutedFunctionData__TypeInfo, v6);
    byte_4A72A25 = 1;
  }
  v7 = *(System_Collections_Generic_Dictionary_int__object__o **)&this->fields.buffUniqueId;
  if ( !v7 )
    goto LABEL_9;
  if ( !System_Collections_Generic_Dictionary_int__object___ContainsKey(
          v7,
          *(&this->fields._SkillTiming_k__BackingField + 1),
          (const MethodInfo_317C7C0 *)Method_System_Collections_Generic_Dictionary_int__List_BattleLogicFunction_ExecutedFunctionData___ContainsKey__) )
  {
    v8 = *(System_Collections_Generic_Dictionary_int__object__o **)&this->fields.buffUniqueId;
    v9 = *(&this->fields._SkillTiming_k__BackingField + 1);
    v10 = (System_Collections_Generic_List_object__o *)sub_1B9025C(System_Collections_Generic_List_BattleLogicFunction_ExecutedFunctionData__TypeInfo);
    System_Collections_Generic_List_object____ctor(
      v10,
      (const MethodInfo_351018C *)Method_System_Collections_Generic_List_BattleLogicFunction_ExecutedFunctionData___ctor__);
    if ( !v8 )
      goto LABEL_9;
    System_Collections_Generic_Dictionary_int__object___set_Item(
      v8,
      v9,
      (Il2CppObject *)v10,
      (const MethodInfo_317C5B8 *)Method_System_Collections_Generic_Dictionary_int__List_BattleLogicFunction_ExecutedFunctionData___set_Item__);
  }
  v7 = *(System_Collections_Generic_Dictionary_int__object__o **)&this->fields.buffUniqueId;
  if ( !v7 )
LABEL_9:
    sub_1B9026C(v7, method);
  return (System_Collections_Generic_List_BattleLogicFunction_ExecutedFunctionData__o *)System_Collections_Generic_Dictionary_int__object___get_Item(
                                                                                          v7,
                                                                                          *(&this->fields._SkillTiming_k__BackingField
                                                                                          + 1),
                                                                                          (const MethodInfo_317C52C *)Method_System_Collections_Generic_Dictionary_int__List_BattleLogicFunction_ExecutedFunctionData___get_Item__);
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
    sub_1B9026C(v7, v8);
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
    sub_1B9026C(this, 0LL);
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
  int32_t v7; // w3
  const MethodInfo *v8; // x1
  __int64 v9; // x20
  const MethodInfo *v10; // x1
  int32_t v11; // w2
  int32_t v12; // w3
  int32_t v13; // w2
  int32_t v14; // w3

  if ( (byte_4A72A28 & 1) == 0 )
  {
    sub_1B90010(&BattleLogicFunction_CommonSideEffectCheckDuplicateFunction_TypeInfo, method);
    sub_1B90010(&Method_System_Collections_Generic_HashSet_int___ctor__, v3);
    sub_1B90010(&System_Collections_Generic_HashSet_int__TypeInfo, v4);
    byte_4A72A28 = 1;
  }
  v5 = (System_Collections_Generic_HashSet_int__o *)sub_1B9025C(System_Collections_Generic_HashSet_int__TypeInfo);
  System_Collections_Generic_HashSet_int____ctor(
    v5,
    (const MethodInfo_33C53C4 *)Method_System_Collections_Generic_HashSet_int___ctor__);
  this->fields.executedBuffFuncDic = (struct System_Collections_Generic_Dictionary_int__List_BattleLogicFunction_ExecutedFunctionData___o *)v5;
  sub_1B8FFB4((ServantStatusBattleListViewItem_o *)&this->fields.executedBuffFuncDic, (int32_t)v5, v6, v7);
  BattleLogicFunction_CommonSideEffectFunctionArgument___ctor(
    (BattleLogicFunction_CommonSideEffectFunctionArgument_o *)this,
    v8);
  v9 = sub_1B9025C(BattleLogicFunction_CommonSideEffectCheckDuplicateFunction_TypeInfo);
  BattleLogicFunction_CommonCheckDuplicateFunction___ctor((BattleLogicFunction_CommonCheckDuplicateFunction_o *)v9, v10);
  *(_QWORD *)(v9 + 24) = this;
  sub_1B8FFB4((ServantStatusBattleListViewItem_o *)(v9 + 24), (int32_t)this, v11, v12);
  this->fields.checkDuplicate = (struct BattleLogicFunction_CheckDuplicateFunction_o *)v9;
  sub_1B8FFB4((ServantStatusBattleListViewItem_o *)&this->fields.checkDuplicate, v9, v13, v14);
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
  if ( (byte_4A72A2A & 1) == 0 )
  {
    this = (BattleLogicFunction_FuncSideEffectFunctionArgument_o *)sub_1B90010(
                                                                     &Method_System_Collections_Generic_HashSet_int__Add__,
                                                                     funcTarget);
    byte_4A72A2A = 1;
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
        (const MethodInfo_33C65C8 *)Method_System_Collections_Generic_HashSet_int__Add__);
      return;
    }
LABEL_12:
    sub_1B9026C(this, funcTarget);
  }
}


void __fastcall BattleLogicFunction_FuncSideEffectFunctionArgument__AddTarget_43547776(
        BattleLogicFunction_FuncSideEffectFunctionArgument_o *this,
        BattleLogicFunction_FuncSideEffectFunctionArgument_o *arg,
        const MethodInfo *method)
{
  System_Collections_Generic_HashSet_int__o *executedBuffFuncDic; // x0

  if ( (byte_4A72A2B & 1) == 0 )
  {
    sub_1B90010(&Method_System_Collections_Generic_HashSet_int__UnionWith__, arg);
    byte_4A72A2B = 1;
  }
  if ( arg )
  {
    executedBuffFuncDic = (System_Collections_Generic_HashSet_int__o *)this->fields.executedBuffFuncDic;
    if ( !executedBuffFuncDic )
      sub_1B9026C(0LL, arg);
    System_Collections_Generic_HashSet_int___UnionWith(
      executedBuffFuncDic,
      (System_Collections_Generic_IEnumerable_T__o *)arg->fields.executedBuffFuncDic,
      (const MethodInfo_33C65D8 *)Method_System_Collections_Generic_HashSet_int__UnionWith__);
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

  if ( (byte_4A72A29 & 1) == 0 )
  {
    sub_1B90010(&Method_System_Array_Empty_BuffList_ACTION___, isMainOnly);
    byte_4A72A29 = 1;
  }
  v3 = Method_System_Array_Empty_BuffList_ACTION___;
  v4 = *((_QWORD *)Method_System_Array_Empty_BuffList_ACTION___ + 7);
  if ( !v4 )
  {
    sub_1BE1F48(Method_System_Array_Empty_BuffList_ACTION___);
    v4 = v3[7];
  }
  v5 = *(_QWORD *)(v4 + 16);
  if ( (*(_BYTE *)(v5 + 309) & 1) == 0 )
    v5 = sub_1BE1EEC(v5);
  if ( !*(_DWORD *)(v5 + 224) )
    j_il2cpp_runtime_class_init_0(v5);
  v6 = *(_QWORD *)(v3[7] + 16LL);
  if ( (*(_BYTE *)(v6 + 309) & 1) == 0 )
    v6 = sub_1BE1EEC(v6);
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

  if ( (byte_4A72A2C & 1) == 0 )
  {
    sub_1B90010(&Method_System_Linq_Enumerable_ToArray_int___, logicFunc);
    byte_4A72A2C = 1;
  }
  v9 = System_Linq_Enumerable__ToArray_int_(
         (System_Collections_Generic_IEnumerable_TSource__o *)this->fields.executedBuffFuncDic,
         (const MethodInfo_2EC6DFC *)Method_System_Linq_Enumerable_ToArray_int___);
  if ( !logicFunc )
    sub_1B9026C(v9, v10);
  BattleLogicFunction__SetFuncSideEffect(logicFunc, this, mainActionData, actorSvtData, v9, 0LL);
}


void __fastcall BattleLogicFunction_FunctionArgument___ctor(
        BattleLogicFunction_FunctionArgument_o *this,
        const MethodInfo *method)
{
  Il2CppObject *v3; // x20
  int32_t v4; // w2
  int32_t v5; // w3

  if ( (byte_4A72A24 & 1) == 0 )
  {
    sub_1B90010(&BattleLogicFunction_CheckDuplicateFunction_TypeInfo, method);
    byte_4A72A24 = 1;
  }
  v3 = (Il2CppObject *)sub_1B9025C(BattleLogicFunction_CheckDuplicateFunction_TypeInfo);
  System_Object___ctor(v3, 0LL);
  this->fields.checkDuplicate = (struct BattleLogicFunction_CheckDuplicateFunction_o *)v3;
  sub_1B8FFB4((ServantStatusBattleListViewItem_o *)&this->fields.checkDuplicate, (int32_t)v3, v4, v5);
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
    sub_1B9026C(0LL, method);
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
  sub_1B8FFB4(
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
  sub_1B8FFB4(
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

  if ( (byte_4A72A41 & 1) == 0 )
  {
    sub_1B90010(&BattleLogicFunction_PreMainAttackSideEffectMakeArgument_TypeInfo, method);
    byte_4A72A41 = 1;
  }
  v2 = (BattleLogicFunction_SideEffectMakeArgument_o *)sub_1B9025C(BattleLogicFunction_PreMainAttackSideEffectMakeArgument_TypeInfo);
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
  BattleLogicFunction_FunctionArgument_o *v3; // x20
  __int64 v5; // x1
  __int64 v6; // x1
  System_Collections_Generic_Dictionary_KeyValuePair_int__int___bool__o *v7; // x21
  int32_t v8; // w2
  int32_t v9; // w3
  int32_t v10; // w2
  int32_t v11; // w3
  const MethodInfo *v12; // x1
  struct BattleLogicFunction_FunctionArgument_o **p_externalArg; // x19
  __int64 v14; // x1

  v3 = argument;
  if ( (byte_4A72A36 & 1) == 0 )
  {
    sub_1B90010(&Method_System_Collections_Generic_Dictionary_KeyValuePair_int__int___bool___ctor__, argument);
    sub_1B90010(&System_Collections_Generic_Dictionary_KeyValuePair_int__int___bool__TypeInfo, v5);
    sub_1B90010(&BattleLogicFunction_FunctionArgument_TypeInfo, v6);
    byte_4A72A36 = 1;
  }
  v7 = (System_Collections_Generic_Dictionary_KeyValuePair_int__int___bool__o *)sub_1B9025C(System_Collections_Generic_Dictionary_KeyValuePair_int__int___bool__TypeInfo);
  System_Collections_Generic_Dictionary_KeyValuePair_int__int___bool____ctor(
    v7,
    (const MethodInfo_31369B8 *)Method_System_Collections_Generic_Dictionary_KeyValuePair_int__int___bool___ctor__);
  this->fields.funcResults = v7;
  sub_1B8FFB4((ServantStatusBattleListViewItem_o *)&this->fields, (int32_t)v7, v8, v9);
  this->fields.tdCommandTypeChange = -1;
  System_Object___ctor((Il2CppObject *)this, 0LL);
  if ( !v3 )
  {
    v3 = (BattleLogicFunction_FunctionArgument_o *)sub_1B9025C(BattleLogicFunction_FunctionArgument_TypeInfo);
    BattleLogicFunction_FunctionArgument___ctor(v3, v12);
  }
  this->fields.externalArg = v3;
  p_externalArg = &this->fields.externalArg;
  sub_1B8FFB4((ServantStatusBattleListViewItem_o *)p_externalArg, (int32_t)v3, v10, v11);
  if ( !*p_externalArg )
    sub_1B9026C(0LL, v14);
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

  if ( (byte_4A72A38 & 1) == 0 )
  {
    sub_1B90010(
      &Method_System_Collections_Generic_Dictionary_KeyValuePair_int__int___bool__TryGetValue__,
      *(_QWORD *)&targetId);
    sub_1B90010(&Method_System_Linq_Enumerable_Any_KeyValuePair_KeyValuePair_int__int___bool____, v9);
    sub_1B90010(&Method_System_Linq_Enumerable_Count_KeyValuePair_KeyValuePair_int__int___bool____, v10);
    sub_1B90010(&Method_System_Linq_Enumerable_Where_KeyValuePair_KeyValuePair_int__int___bool____, v11);
    sub_1B90010(&System_Func_KeyValuePair_KeyValuePair_int__int___bool___bool__TypeInfo, v12);
    sub_1B90010(&System_IDisposable_TypeInfo, v13);
    sub_1B90010(&System_Collections_Generic_IEnumerable_KeyValuePair_KeyValuePair_int__int___bool___TypeInfo, v14);
    sub_1B90010(&System_Collections_Generic_IEnumerator_KeyValuePair_KeyValuePair_int__int___bool___TypeInfo, v15);
    sub_1B90010(&System_Collections_IEnumerator_TypeInfo, v16);
    sub_1B90010(&Method_System_Collections_Generic_KeyValuePair_int__int___ctor__, v17);
    sub_1B90010(&Method_System_Collections_Generic_KeyValuePair_KeyValuePair_int__int___bool__get_Key__, v18);
    sub_1B90010(&Method_System_Collections_Generic_KeyValuePair_int__int__get_Value__, v19);
    sub_1B90010(&Method_System_Collections_Generic_KeyValuePair_KeyValuePair_int__int___bool__get_Value__, v20);
    sub_1B90010(&System_Math_TypeInfo, v21);
    sub_1B90010(
      &Method_BattleLogicFunction_ProcListInArgs___c__DisplayClass37_0__DidTriggeredFuncHaveSpecifyResults_b__0__,
      v22);
    sub_1B90010(
      &Method_BattleLogicFunction_ProcListInArgs___c__DisplayClass37_0__DidTriggeredFuncHaveSpecifyResults_b__1__,
      v23);
    sub_1B90010(
      &Method_BattleLogicFunction_ProcListInArgs___c__DisplayClass37_0__DidTriggeredFuncHaveSpecifyResults_b__2__,
      v24);
    sub_1B90010(&BattleLogicFunction_ProcListInArgs___c__DisplayClass37_0_TypeInfo, v25);
    byte_4A72A38 = 1;
  }
  isSameTargetOnly = 0;
  isAllCond = 0;
  key = 0LL;
  value = 0;
  v26 = sub_1B9025C(BattleLogicFunction_ProcListInArgs___c__DisplayClass37_0_TypeInfo);
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
      (const MethodInfo_3446750 *)Method_System_Collections_Generic_KeyValuePair_int__int___ctor__);
    TriggeredFuncIndex = this->fields.funcResults;
    if ( TriggeredFuncIndex )
    {
      v68 = key;
      if ( System_Collections_Generic_Dictionary_KeyValuePair_int__int___bool___TryGetValue(
             TriggeredFuncIndex,
             v68,
             &value,
             (const MethodInfo_3138B14 *)Method_System_Collections_Generic_Dictionary_KeyValuePair_int__int___bool__TryGetValue__) )
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
  v34 = (System_Func_KeyValuePair_KeyValuePair_int__int___bool___bool__o *)sub_1B9025C(System_Func_KeyValuePair_KeyValuePair_int__int___bool___bool__TypeInfo);
  v35 = (System_Func_TSource__bool__o *)v34;
  if ( !v32 )
  {
    System_Func_KeyValuePair_KeyValuePair_int__int___bool___bool____ctor(
      v34,
      (Il2CppObject *)v26,
      Method_BattleLogicFunction_ProcListInArgs___c__DisplayClass37_0__DidTriggeredFuncHaveSpecifyResults_b__0__,
      0LL);
    v41 = System_Linq_Enumerable__Where_KeyValuePair_KeyValuePair_int__int___bool__(
            (System_Collections_Generic_IEnumerable_TSource__o *)funcResults,
            v35,
            (const MethodInfo_2ECAFB8 *)Method_System_Linq_Enumerable_Where_KeyValuePair_KeyValuePair_int__int___bool____);
    v42 = (System_Func_KeyValuePair_KeyValuePair_int__int___bool___bool__o *)sub_1B9025C(System_Func_KeyValuePair_KeyValuePair_int__int___bool___bool__TypeInfo);
    System_Func_KeyValuePair_KeyValuePair_int__int___bool___bool____ctor(
      v42,
      (Il2CppObject *)v26,
      Method_BattleLogicFunction_ProcListInArgs___c__DisplayClass37_0__DidTriggeredFuncHaveSpecifyResults_b__1__,
      0LL);
    v31 = System_Linq_Enumerable__Any_KeyValuePair_KeyValuePair_int__int___bool__(
            v41,
            (System_Func_TSource__bool__o *)v42,
            (const MethodInfo_2E9C120 *)Method_System_Linq_Enumerable_Any_KeyValuePair_KeyValuePair_int__int___bool____);
    return v31 & 1;
  }
  System_Func_KeyValuePair_KeyValuePair_int__int___bool___bool____ctor(
    v34,
    (Il2CppObject *)v26,
    Method_BattleLogicFunction_ProcListInArgs___c__DisplayClass37_0__DidTriggeredFuncHaveSpecifyResults_b__2__,
    0LL);
  v36 = System_Linq_Enumerable__Where_KeyValuePair_KeyValuePair_int__int___bool__(
          (System_Collections_Generic_IEnumerable_TSource__o *)funcResults,
          v35,
          (const MethodInfo_2ECAFB8 *)Method_System_Linq_Enumerable_Where_KeyValuePair_KeyValuePair_int__int___bool____);
  TriggeredFuncIndex = (System_Collections_Generic_Dictionary_KeyValuePair_int__int___bool__o *)System_Linq_Enumerable__Count_KeyValuePair_KeyValuePair_int__int___bool__(
                                                                                                  v36,
                                                                                                  (const MethodInfo_2EAA404 *)Method_System_Linq_Enumerable_Count_KeyValuePair_KeyValuePair_int__int___bool____);
  if ( !(_DWORD)TriggeredFuncIndex )
    goto LABEL_24;
  if ( !v36 )
LABEL_53:
    sub_1B9026C(TriggeredFuncIndex, v28);
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
    p_method = sub_1BE1FF0(
                 v36,
                 System_Collections_Generic_IEnumerable_KeyValuePair_KeyValuePair_int__int___bool___TypeInfo,
                 0LL);
  }
  v44 = (*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerable_TSource__o *, _QWORD))p_method)(
          v36,
          *(_QWORD *)(p_method + 8));
  if ( !v44 )
    sub_1B9026C(0LL, v43);
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
      v48 = sub_1BE1FF0(v44, System_Collections_IEnumerator_TypeInfo, 0LL);
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
      v53 = sub_1BE1FF0(
              v44,
              System_Collections_Generic_IEnumerator_KeyValuePair_KeyValuePair_int__int___bool___TypeInfo,
              0LL);
    }
    v54 = (*(__int64 (__fastcall **)(__int64, _QWORD))v53)(v44, *(_QWORD *)(v53 + 8));
    if ( !data )
      sub_1B9026C(v54, v55);
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
    v61 = sub_1BE1FF0(v44, System_IDisposable_TypeInfo, 0LL);
  }
  (*(void (__fastcall **)(__int64, _QWORD))v61)(v44, *(_QWORD *)(v61 + 8));
  return v31 & 1;
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
    sub_1B9026C(0LL, v7);
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
    sub_1B9026C(0LL, v5);
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
    sub_1B9026C(this, type);
  return externalArg->fields.grantSkillType == type;
}


BattleLogicFunction_CheckDuplicateFunction_o *__fastcall BattleLogicFunction_ProcListInArgs__get_CheckDuplicateFunc(
        BattleLogicFunction_ProcListInArgs_o *this,
        const MethodInfo *method)
{
  struct BattleLogicFunction_FunctionArgument_o *externalArg; // x8

  externalArg = this->fields.externalArg;
  if ( !externalArg )
    sub_1B9026C(this, method);
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
    sub_1B9026C(this, method);
  return externalArg->fields._FuncSideEffectArg_k__BackingField;
}


int32_t __fastcall BattleLogicFunction_ProcListInArgs__get_GrantSkillType(
        BattleLogicFunction_ProcListInArgs_o *this,
        const MethodInfo *method)
{
  struct BattleLogicFunction_FunctionArgument_o *externalArg; // x8

  externalArg = this->fields.externalArg;
  if ( !externalArg )
    sub_1B9026C(this, method);
  return externalArg->fields.grantSkillType;
}


bool __fastcall BattleLogicFunction_ProcListInArgs__get_IsCommandSideEffect(
        BattleLogicFunction_ProcListInArgs_o *this,
        const MethodInfo *method)
{
  struct BattleLogicFunction_FunctionArgument_o *externalArg; // x8

  externalArg = this->fields.externalArg;
  if ( !externalArg )
    sub_1B9026C(this, method);
  return externalArg->fields.isCommandSideEffect;
}


bool __fastcall BattleLogicFunction_ProcListInArgs__get_IsPassive(
        BattleLogicFunction_ProcListInArgs_o *this,
        const MethodInfo *method)
{
  struct BattleLogicFunction_FunctionArgument_o *externalArg; // x8

  externalArg = this->fields.externalArg;
  if ( !externalArg )
    sub_1B9026C(this, method);
  return externalArg->fields.isPassive;
}


bool __fastcall BattleLogicFunction_ProcListInArgs__get_IsShift(
        BattleLogicFunction_ProcListInArgs_o *this,
        const MethodInfo *method)
{
  struct BattleLogicFunction_FunctionArgument_o *externalArg; // x8

  externalArg = this->fields.externalArg;
  if ( !externalArg )
    sub_1B9026C(this, method);
  return externalArg->fields.isShift;
}


bool __fastcall BattleLogicFunction_ProcListInArgs__get_IsShowBattlePointEffect(
        BattleLogicFunction_ProcListInArgs_o *this,
        const MethodInfo *method)
{
  struct BattleLogicFunction_FunctionArgument_o *externalArg; // x8

  externalArg = this->fields.externalArg;
  if ( !externalArg )
    sub_1B9026C(this, method);
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
    sub_1B9026C(this, method);
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

  if ( (byte_4A72A35 & 1) == 0 )
  {
    sub_1B90010(&GeneratedFamilyLinkageIdCacher_TypeInfo, method);
    byte_4A72A35 = 1;
  }
  familyLinkageIdCacher = this->fields._familyLinkageIdCacher;
  p_familyLinkageIdCacher = (ServantStatusBattleListViewItem_o *)&this->fields._familyLinkageIdCacher;
  result = familyLinkageIdCacher;
  if ( !familyLinkageIdCacher )
  {
    v6 = (GeneratedFamilyLinkageIdCacher_o *)sub_1B9025C(GeneratedFamilyLinkageIdCacher_TypeInfo);
    GeneratedFamilyLinkageIdCacher___ctor(v6, 0LL);
    p_familyLinkageIdCacher->klass = (ServantStatusBattleListViewItem_c *)v6;
    sub_1B8FFB4(p_familyLinkageIdCacher, (int32_t)v6, v7, v8);
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
  struct BattleLogicFunctionProcess_FunctionUnitCheck_array *funcUnitArray_k__BackingField; // x27
  il2cpp_array_size_t v18; // w28
  BattleLogicFunctionProcess_FunctionUnitCheck_o *v19; // x26
  const MethodInfo *v20; // x3
  int32_t v21; // w2
  int32_t v22; // w3
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
  if ( (byte_4A72A3A & 1) == 0 )
  {
    sub_1B90010(&BattleLogicFunctionProcess_FunctionUnitCheck___TypeInfo, logic);
    this = (BattleLogicFunction_ProcListInArgs_o *)sub_1B90010(
                                                     &BattleLogicFunctionProcess_FunctionUnitCheck_TypeInfo,
                                                     v11);
    byte_4A72A3A = 1;
  }
  if ( !dataValsList )
    goto LABEL_38;
  max_length = dataValsList->max_length;
  v13 = sub_1B900B8(BattleLogicFunctionProcess_FunctionUnitCheck___TypeInfo, (unsigned int)max_length);
  v10->fields._funcUnitArray_k__BackingField = (struct BattleLogicFunctionProcess_FunctionUnitCheck_array *)v13;
  p_funcUnitArray_k__BackingField = &v10->fields._funcUnitArray_k__BackingField;
  sub_1B8FFB4((ServantStatusBattleListViewItem_o *)&v10->fields._funcUnitArray_k__BackingField, v13, v15, v16);
  funcUnitArray_k__BackingField = v10->fields._funcUnitArray_k__BackingField;
  if ( max_length >= 1 )
  {
    v18 = 0;
    while ( 1 )
    {
      v19 = (BattleLogicFunctionProcess_FunctionUnitCheck_o *)sub_1B9025C(BattleLogicFunctionProcess_FunctionUnitCheck_TypeInfo);
      BattleLogicFunctionProcess_FunctionUnitCheck___ctor(v19, logic, v10, v20);
      if ( !funcUnitArray_k__BackingField )
        break;
      if ( v19 )
      {
        this = (BattleLogicFunction_ProcListInArgs_o *)sub_1B9014C(
                                                         v19,
                                                         funcUnitArray_k__BackingField->obj.klass->_1.element_class);
        if ( !this )
        {
          v33 = sub_1B90290(0LL);
          sub_1B90138(v33, 0LL);
        }
      }
      if ( v18 >= funcUnitArray_k__BackingField->max_length )
        goto LABEL_39;
      v23 = &funcUnitArray_k__BackingField->obj.klass + (int)v18;
      v23[4] = (Il2CppClass *)v19;
      sub_1B8FFB4((ServantStatusBattleListViewItem_o *)(v23 + 4), (int32_t)v19, v21, v22);
      v25 = *p_funcUnitArray_k__BackingField;
      if ( !*p_funcUnitArray_k__BackingField )
        break;
      if ( v18 >= v25->max_length )
        goto LABEL_39;
      if ( !functionIds )
        break;
      if ( v18 >= functionIds->max_length || v18 >= dataValsList->max_length )
LABEL_39:
        sub_1B90274(this, logic);
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
    sub_1B9026C(this, logic);
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

  if ( (byte_4A72A37 & 1) == 0 )
  {
    sub_1B90010(
      &Method_System_Collections_Generic_Dictionary_KeyValuePair_int__int___bool__ContainsKey__,
      *(_QWORD *)&targetId);
    sub_1B90010(&Method_System_Collections_Generic_Dictionary_KeyValuePair_int__int___bool__get_Item__, v7);
    sub_1B90010(&Method_System_Collections_Generic_KeyValuePair_int__int___ctor__, v8);
    byte_4A72A37 = 1;
  }
  p_key = (System_Collections_Generic_KeyValuePair_int__int__o)&key;
  key = 0LL;
  System_Collections_Generic_KeyValuePair_int__int____ctor(
    p_key,
    index - 1,
    targetId,
    (const MethodInfo_3446750 *)Method_System_Collections_Generic_KeyValuePair_int__int___ctor__);
  funcResults = this->fields.funcResults;
  if ( !funcResults )
    goto LABEL_9;
  v15 = key;
  if ( !System_Collections_Generic_Dictionary_KeyValuePair_int__int___bool___ContainsKey(
          funcResults,
          v15,
          (const MethodInfo_31375A0 *)Method_System_Collections_Generic_Dictionary_KeyValuePair_int__int___bool__ContainsKey__) )
    return 0;
  funcResults = this->fields.funcResults;
  if ( !funcResults )
LABEL_9:
    sub_1B9026C(funcResults, v9);
  v16 = key;
  return System_Collections_Generic_Dictionary_KeyValuePair_int__int___bool___get_Item(
           funcResults,
           v16,
           (const MethodInfo_31372EC *)Method_System_Collections_Generic_Dictionary_KeyValuePair_int__int___bool__get_Item__);
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

  if ( (byte_4A72A39 & 1) == 0 )
  {
    sub_1B90010(
      &Method_System_Collections_Generic_Dictionary_KeyValuePair_int__int___bool__set_Item__,
      *(_QWORD *)&targetId);
    sub_1B90010(&Method_System_Collections_Generic_KeyValuePair_int__int___ctor__, v9);
    byte_4A72A39 = 1;
  }
  p_key = (System_Collections_Generic_KeyValuePair_int__int__o)&key;
  key = 0LL;
  System_Collections_Generic_KeyValuePair_int__int____ctor(
    p_key,
    index,
    targetId,
    (const MethodInfo_3446750 *)Method_System_Collections_Generic_KeyValuePair_int__int___ctor__);
  funcResults = this->fields.funcResults;
  if ( !funcResults )
    sub_1B9026C(0LL, v10);
  v14 = key;
  System_Collections_Generic_Dictionary_KeyValuePair_int__int___bool___set_Item(
    funcResults,
    v14,
    result,
    (const MethodInfo_3137380 *)Method_System_Collections_Generic_Dictionary_KeyValuePair_int__int___bool__set_Item__);
}


void __fastcall BattleLogicFunction_ProcListInArgs__set_IsCommandSideEffect(
        BattleLogicFunction_ProcListInArgs_o *this,
        bool value,
        const MethodInfo *method)
{
  struct BattleLogicFunction_FunctionArgument_o *externalArg; // x8

  externalArg = this->fields.externalArg;
  if ( !externalArg )
    sub_1B9026C(this, value);
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
    sub_1B9026C(this, value);
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
    sub_1B9026C(this, value);
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
    sub_1B9026C(this, value);
  externalArg->fields.skillId = value;
}


void __fastcall BattleLogicFunction_ProcListInArgs__set_funcUnitArray(
        BattleLogicFunction_ProcListInArgs_o *this,
        BattleLogicFunctionProcess_FunctionUnitCheck_array *value,
        const MethodInfo *method)
{
  int32_t v3; // w3

  this->fields._funcUnitArray_k__BackingField = value;
  sub_1B8FFB4(
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
  if ( (byte_4A72A3C & 1) == 0 )
  {
    sub_1B90010(
      &Method_System_Collections_Generic_KeyValuePair_KeyValuePair_int__int___bool__get_Key__,
      *(_QWORD *)&x.fields.key);
    sub_1B90010(&Method_System_Collections_Generic_KeyValuePair_int__int__get_Key__, v5);
    byte_4A72A3C = 1;
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
  if ( (byte_4A72A3D & 1) == 0 )
  {
    sub_1B90010(
      &Method_System_Collections_Generic_KeyValuePair_KeyValuePair_int__int___bool__get_Value__,
      *(_QWORD *)&x.fields.key);
    byte_4A72A3D = 1;
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
  if ( (byte_4A72A3B & 1) == 0 )
  {
    sub_1B90010(
      &Method_System_Collections_Generic_KeyValuePair_KeyValuePair_int__int___bool__get_Key__,
      *(_QWORD *)&x.fields.key);
    sub_1B90010(&Method_System_Collections_Generic_KeyValuePair_int__int__get_Key__, v5);
    byte_4A72A3B = 1;
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

  if ( (byte_4A72A3F & 1) == 0 )
  {
    sub_1B90010(&Method_System_Array_Empty_BattleActionData_SideEffectData___, method);
    byte_4A72A3F = 1;
  }
  v5 = Method_System_Array_Empty_BattleActionData_SideEffectData___;
  v6 = *((_QWORD *)Method_System_Array_Empty_BattleActionData_SideEffectData___ + 7);
  if ( !v6 )
  {
    sub_1BE1F48(Method_System_Array_Empty_BattleActionData_SideEffectData___);
    v6 = v5[7];
  }
  v7 = *(_QWORD *)(v6 + 16);
  if ( (*(_BYTE *)(v7 + 309) & 1) == 0 )
    v7 = sub_1BE1EEC(v7);
  if ( !*(_DWORD *)(v7 + 224) )
    j_il2cpp_runtime_class_init_0(v7);
  v8 = *(_QWORD *)(v5[7] + 16LL);
  if ( (*(_BYTE *)(v8 + 309) & 1) == 0 )
    v8 = sub_1BE1EEC(v8);
  v9 = *(struct BattleActionData_SideEffectData_array ***)(v8 + 184);
  v10 = *v9;
  this->fields._SideEffectList_k__BackingField = *v9;
  sub_1B8FFB4((ServantStatusBattleListViewItem_o *)&this->fields, (int32_t)v10, v2, v3);
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
  System_Func_T__TResult__o *v16; // x22
  System_Collections_Generic_IEnumerable_TSource__o *v17; // x0
  System_Object_array *v18; // x0
  int32_t v19; // w2
  int32_t v20; // w3

  if ( (byte_4A72A3E & 1) == 0 )
  {
    sub_1B90010(&BuffList_ACTION___TypeInfo, targetIds);
    sub_1B90010(&Method_System_Linq_Enumerable_Select_int__BattleActionData_SideEffectData___, v5);
    sub_1B90010(&Method_System_Linq_Enumerable_ToArray_BattleActionData_SideEffectData___, v6);
    sub_1B90010(&System_Func_int__BattleActionData_SideEffectData__TypeInfo, v7);
    sub_1B90010(&Method_BattleLogicFunction_SideEffectMakeArgument___c__DisplayClass9_0__Init_b__0__, v8);
    sub_1B90010(&BattleLogicFunction_SideEffectMakeArgument___c__DisplayClass9_0_TypeInfo, v9);
    byte_4A72A3E = 1;
  }
  v10 = sub_1B9025C(BattleLogicFunction_SideEffectMakeArgument___c__DisplayClass9_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v10, 0LL);
  v11 = sub_1B900B8(BuffList_ACTION___TypeInfo, 1LL);
  v12 = ((__int64 (__fastcall *)(BattleLogicFunction_SideEffectMakeArgument_o *, Il2CppMethodPointer))this->klass->vtable._4_unknown.method)(
          this,
          this->klass->vtable._5_unknown.methodPtr);
  if ( !v11 )
    goto LABEL_7;
  if ( !*(_DWORD *)(v11 + 24) )
    sub_1B90274(v12, v13);
  *(_DWORD *)(v11 + 32) = v12;
  if ( !v10 )
LABEL_7:
    sub_1B9026C(v12, v13);
  *(_QWORD *)(v10 + 16) = v11;
  sub_1B8FFB4((ServantStatusBattleListViewItem_o *)(v10 + 16), v11, v14, v15);
  v16 = (System_Func_T__TResult__o *)sub_1B9025C(System_Func_int__BattleActionData_SideEffectData__TypeInfo);
  System_Func_int__object____ctor(
    v16,
    (Il2CppObject *)v10,
    Method_BattleLogicFunction_SideEffectMakeArgument___c__DisplayClass9_0__Init_b__0__,
    0LL);
  v17 = (System_Collections_Generic_IEnumerable_TSource__o *)System_Linq_Enumerable__Select_int__object_(
                                                               (System_Collections_Generic_IEnumerable_TSource__o *)targetIds,
                                                               (System_Func_TSource__TResult__o *)v16,
                                                               (const MethodInfo_2EBC6B8 *)Method_System_Linq_Enumerable_Select_int__BattleActionData_SideEffectData___);
  v18 = System_Linq_Enumerable__ToArray_object_(
          v17,
          (const MethodInfo_2EC6F94 *)Method_System_Linq_Enumerable_ToArray_BattleActionData_SideEffectData___);
  this->fields._SideEffectList_k__BackingField = (struct BattleActionData_SideEffectData_array *)v18;
  sub_1B8FFB4((ServantStatusBattleListViewItem_o *)&this->fields, (int32_t)v18, v19, v20);
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
  sub_1B8FFB4((ServantStatusBattleListViewItem_o *)&this->fields, (int32_t)value, (int32_t)method, v3);
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

  if ( (byte_4A72A40 & 1) == 0 )
  {
    sub_1B90010(&BattleActionData_SideEffectData_TypeInfo, *(_QWORD *)&id);
    byte_4A72A40 = 1;
  }
  buffActs = this->fields.buffActs;
  v6 = (BattleActionData_SideEffectData_o *)sub_1B9025C(BattleActionData_SideEffectData_TypeInfo);
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

  if ( (byte_4A72A2D & 1) == 0 )
  {
    sub_1B90010(&BuffList_ACTION___TypeInfo, isMainOnly);
    byte_4A72A2D = 1;
  }
  result = (BuffList_ACTION_array *)sub_1B900B8(BuffList_ACTION___TypeInfo, 1LL);
  if ( !result )
    sub_1B9026C(0LL, v5);
  max_length = result->max_length;
  if ( !isMainOnly )
  {
    if ( max_length )
    {
      v7 = 122;
      goto LABEL_9;
    }
LABEL_11:
    sub_1B90274(result, v5);
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

  if ( (byte_4A72A2E & 1) == 0 )
  {
    sub_1B90010(&BuffList_ACTION___TypeInfo, isMainOnly);
    byte_4A72A2E = 1;
  }
  result = (BuffList_ACTION_array *)sub_1B900B8(BuffList_ACTION___TypeInfo, 1LL);
  if ( !result )
    sub_1B9026C(0LL, v5);
  max_length = result->max_length;
  if ( !isMainOnly )
  {
    if ( max_length )
    {
      v7 = 124;
      goto LABEL_9;
    }
LABEL_11:
    sub_1B90274(result, v5);
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

  if ( (byte_4A72A2F & 1) == 0 )
  {
    sub_1B90010(&int___TypeInfo, *(_QWORD *)&targetId);
    byte_4A72A2F = 1;
  }
  BattleLogicFunction_FunctionArgument___ctor(
    (BattleLogicFunction_FunctionArgument_o *)this,
    *(const MethodInfo **)&targetId);
  v5 = (struct System_Int32_array *)sub_1B900B8(int___TypeInfo, 1LL);
  if ( !v5 )
    sub_1B9026C(0LL, v6);
  if ( !v5->max_length )
    sub_1B90274(v5, v5);
  v5->m_Items[1] = targetId;
  this->fields.fixTargetIds = v5;
  sub_1B8FFB4((ServantStatusBattleListViewItem_o *)&this->fields.fixTargetIds, (int32_t)v5, v7, v8);
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
  int32_t v4; // w3

  if ( (byte_4A72A43 & 1) == 0 )
  {
    sub_1B90010(&BattleLogicFunction___c_TypeInfo, v1);
    byte_4A72A43 = 1;
  }
  v2 = (Il2CppObject *)sub_1B9025C(BattleLogicFunction___c_TypeInfo);
  System_Object___ctor(v2, 0LL);
  BattleLogicFunction___c_TypeInfo->static_fields->__9 = (struct BattleLogicFunction___c_o *)v2;
  sub_1B8FFB4((ServantStatusBattleListViewItem_o *)BattleLogicFunction___c_TypeInfo->static_fields, (int32_t)v2, v3, v4);
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
    sub_1B9026C(this, 0LL);
  return BattleBuffData_BuffData__get_ExistChangeBgm(buff, 0LL);
}


bool __fastcall BattleLogicFunction___c___FunctionSubFieldBuff_b__121_1(
        BattleLogicFunction___c_o *this,
        BattleBuffData_BuffData_o *x,
        const MethodInfo *method)
{
  if ( !x )
    sub_1B9026C(this, 0LL);
  return x->fields.fieldChangeData != 0LL;
}


void __fastcall BattleLogicFunction___c___SetFuncSideEffect_b__49_0(
        BattleLogicFunction___c_o *this,
        BattleActionData_o *x,
        const MethodInfo *method)
{
  if ( !x )
    sub_1B9026C(this, 0LL);
  BattleActionData__SetPopupOnce(x, 0LL);
}


bool __fastcall BattleLogicFunction___c___functionMoveState_b__108_2(
        BattleLogicFunction___c_o *this,
        BattleBuffData_BuffData_o *x,
        const MethodInfo *method)
{
  if ( !x )
    sub_1B9026C(this, 0LL);
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
    sub_1B9026C(Next, v5);
  s->fields._shuffuleSeed = Next;
}


int32_t __fastcall BattleLogicFunction___c___functionPtShuffle_b__89_1(
        BattleLogicFunction___c_o *this,
        BattleServantData_o *a,
        BattleServantData_o *b,
        const MethodInfo *method)
{
  if ( !a || (this = (BattleLogicFunction___c_o *)BattleServantData__get_ShuffleSeed(a, 0LL), !b) )
    sub_1B9026C(this, a);
  return (_DWORD)this - BattleServantData__get_ShuffleSeed(b, 0LL);
}


bool __fastcall BattleLogicFunction___c___functionReplaceEnemyMember_b__83_0(
        BattleLogicFunction___c_o *this,
        BattleServantData_o *x,
        const MethodInfo *method)
{
  if ( !x )
    sub_1B9026C(this, 0LL);
  return BattleServantData__isAlive(x, 0, 0LL);
}


BattleServantSnapShot_o *__fastcall BattleLogicFunction___c___functionTransformServant_b__85_0(
        BattleLogicFunction___c_o *this,
        BattleServantData_o *x,
        const MethodInfo *method)
{
  BattleServantSnapShotShiftServant_o *v4; // x20

  if ( (byte_4A72A44 & 1) == 0 )
  {
    sub_1B90010(&BattleServantSnapShotShiftServant_TypeInfo, x);
    byte_4A72A44 = 1;
  }
  v4 = (BattleServantSnapShotShiftServant_o *)sub_1B9025C(BattleServantSnapShotShiftServant_TypeInfo);
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
    sub_1B9026C(this, x);
  return dataVals_k__BackingField->fields.funcType != 0;
}


bool __fastcall BattleLogicFunction___c___procList_b__41_1(
        BattleLogicFunction___c_o *this,
        BattleLogicFunctionProcess_FunctionUnitCheck_o *x,
        const MethodInfo *method)
{
  struct DataVals_o *dataVals_k__BackingField; // x8

  if ( !x || (dataVals_k__BackingField = x->fields._dataVals_k__BackingField) == 0LL )
    sub_1B9026C(this, x);
  return dataVals_k__BackingField->fields.funcType == 135;
}


bool __fastcall BattleLogicFunction___c___procList_b__41_2(
        BattleLogicFunction___c_o *this,
        BattleLogicFunctionProcess_FunctionTargetCheck_o *target,
        const MethodInfo *method)
{
  if ( !target )
    sub_1B9026C(this, 0LL);
  return target->fields._result_k__BackingField;
}


int32_t __fastcall BattleLogicFunction___c___procList_b__41_3(
        BattleLogicFunction___c_o *this,
        BattleLogicFunctionProcess_FunctionTargetCheck_o *target,
        const MethodInfo *method)
{
  if ( !target )
    sub_1B9026C(this, 0LL);
  return target->fields._targetId_k__BackingField;
}


int32_t __fastcall BattleLogicFunction___c___setAttackSideEffect_b__52_0(
        BattleLogicFunction___c_o *this,
        BattleActionData_SideEffectData_o *x,
        const MethodInfo *method)
{
  if ( !x )
    sub_1B9026C(this, 0LL);
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
    sub_1B9026C(this, 0LL);
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
    sub_1B9026C(this, 0LL);
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
    sub_1B9026C(this, 0LL);
  return BattleBuffData_BuffData__checkState(x, this->fields.stateUnstealable, 0LL);
}


bool __fastcall BattleLogicFunction___c__DisplayClass108_0___functionMoveState_b__1(
        BattleLogicFunction___c__DisplayClass108_0_o *this,
        BattleBuffData_BuffData_o *x,
        const MethodInfo *method)
{
  System_Collections_Generic_HashSet_T__o *unstealableBuffs; // x0

  if ( (byte_4A72A45 & 1) == 0 )
  {
    sub_1B90010(&Method_System_Collections_Generic_HashSet_BattleBuffData_BuffData__Contains__, x);
    byte_4A72A45 = 1;
  }
  unstealableBuffs = (System_Collections_Generic_HashSet_T__o *)this->fields.unstealableBuffs;
  if ( !unstealableBuffs )
    sub_1B9026C(0LL, x);
  return !System_Collections_Generic_HashSet_object___Contains(
            unstealableBuffs,
            (Il2CppObject *)x,
            (const MethodInfo_33CBEDC *)Method_System_Collections_Generic_HashSet_BattleBuffData_BuffData__Contains__);
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
    sub_1B9026C(this, linkageIndividuality);
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
    sub_1B9026C(targetSvtData, buff);
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
    sub_1B9026C(this, 0LL);
  return x->fields.targetId == this->fields.targetId;
}