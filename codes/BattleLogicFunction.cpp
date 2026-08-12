void BattleLogicFunction___ctor(BattleLogicFunction_o *this, const MethodInfo *method)
{
  __int64 v3; // x0
  __int64 v4; // x1
  System_String_o *v5; // x2
  System_String_o *v6; // x3
  int32_t v7; // w4
  int32_t v8; // w5
  bool v9; // w6
  bool v10; // w7
  int v11; // w9
  System_Collections_Generic_Dictionary_TKey__TValue__o *v12; // x20
  BattleLogicFunctionProcess_CommonFunctionTypeProcess_o *v13; // x21
  BattleLogicFunctionProcess_AddStateProcess_o *v14; // x21
  BattleLogicFunctionProcess_AddStateShortProcess_o *v15; // x21
  BattleLogicFunctionProcess_AddStateProcess_o *v16; // x21
  BattleLogicFunctionProcess_AddStateShortProcess_o *v17; // x21
  BattleLogicFunctionProcess_MoveToLastSubMemberProcess_o *v18; // x21
  BattleLogicFunctionProcess_TransformServantProcess_o *v19; // x21
  BattleLogicFunctionProcess_CommonFieldFunctionProcess_o *v20; // x21
  BattleLogicFunctionProcess_CommonFieldFunctionProcess_o *v21; // x21
  BattleLogicFunctionProcess_CommonAddStateProcess_o *v22; // x21
  BattleLogicFunctionProcess_ToFieldCommonFunctionProcess_o *v23; // x21
  BattleLogicFunctionProcess_ToFieldCommonFunctionProcess_o *v24; // x21
  BattleLogicFunctionProcess_FieldAddStateProcess_o *v25; // x21
  BattleLogicFunctionProcess_FieldAddStateShortProcess_o *v26; // x21
  System_String_o *v27; // x2
  System_String_o *v28; // x3
  int32_t v29; // w4
  int32_t v30; // w5
  bool v31; // w6
  bool v32; // w7

  if ( (byte_5973BF4 & 1) == 0 )
  {
    sub_2213A60(&BattleLogicFunctionProcess_AddStateProcess_TypeInfo);
    sub_2213A60(&BattleLogicFunctionProcess_AddStateShortProcess_TypeInfo);
    sub_2213A60(&BattleLogicFunctionProcess_CommonAddStateProcess_TypeInfo);
    sub_2213A60(&BattleLogicFunctionProcess_CommonFieldFunctionProcess_TypeInfo);
    sub_2213A60(&BattleLogicFunctionProcess_CommonFunctionTypeProcess_TypeInfo);
    sub_2213A60(&Method_System_Collections_Generic_Dictionary_FuncList_TYPE__BattleLogicFunctionProcess_BaseFunctionTypeProcess__Add__);
    sub_2213A60(&Method_System_Collections_Generic_Dictionary_FuncList_TYPE__BattleLogicFunctionProcess_BaseFunctionTypeProcess___ctor__);
    sub_2213A60(&System_Collections_Generic_Dictionary_FuncList_TYPE__BattleLogicFunctionProcess_BaseFunctionTypeProcess__TypeInfo);
    sub_2213A60(&BattleLogicFunctionProcess_FieldAddStateProcess_TypeInfo);
    sub_2213A60(&BattleLogicFunctionProcess_FieldAddStateShortProcess_TypeInfo);
    sub_2213A60(&int___TypeInfo);
    sub_2213A60(&BattleLogicFunctionProcess_MoveToLastSubMemberProcess_TypeInfo);
    sub_2213A60(&BattleLogicFunctionProcess_ToFieldCommonFunctionProcess_TypeInfo);
    sub_2213A60(&BattleLogicFunctionProcess_TransformServantProcess_TypeInfo);
    byte_5973BF4 = 1;
  }
  v3 = sub_2213B20(int___TypeInfo, 2);
  if ( !v3 )
    goto LABEL_9;
  v11 = *(_DWORD *)(v3 + 24);
  if ( !v11 || (*(_DWORD *)(v3 + 32) = 701601, v11 == 1) )
    sub_2213CE4(v3);
  *(_DWORD *)(v3 + 36) = 701602;
  this->fields.tamamocatTreasureDeviceIds = (struct System_Int32_array *)v3;
  sub_2213A04((MissionNaviTransitionBoardItem_o *)&this->fields.tamamocatTreasureDeviceIds, v3, v5, v6, v7, v8, v9, v10);
  v12 = (System_Collections_Generic_Dictionary_TKey__TValue__o *)sub_2213CCC(System_Collections_Generic_Dictionary_FuncList_TYPE__BattleLogicFunctionProcess_BaseFunctionTypeProcess__TypeInfo);
  System_Collections_Generic_Dictionary_Int32Enum__object____ctor(
    v12,
    (const MethodInfo_3FBB9EC *)Method_System_Collections_Generic_Dictionary_FuncList_TYPE__BattleLogicFunctionProcess_BaseFunctionTypeProcess___ctor__);
  v13 = (BattleLogicFunctionProcess_CommonFunctionTypeProcess_o *)sub_2213CCC(BattleLogicFunctionProcess_CommonFunctionTypeProcess_TypeInfo);
  BattleLogicFunctionProcess_CommonFunctionTypeProcess___ctor(v13, 0);
  if ( !v12 )
LABEL_9:
    sub_2213CDC(v3, v4);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v12,
    0,
    (Il2CppObject *)v13,
    (const MethodInfo_3FBC3A0 *)Method_System_Collections_Generic_Dictionary_FuncList_TYPE__BattleLogicFunctionProcess_BaseFunctionTypeProcess__Add__);
  v14 = (BattleLogicFunctionProcess_AddStateProcess_o *)sub_2213CCC(BattleLogicFunctionProcess_AddStateProcess_TypeInfo);
  BattleLogicFunctionProcess_AddStateProcess___ctor(v14, 0);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v12,
    1,
    (Il2CppObject *)v14,
    (const MethodInfo_3FBC3A0 *)Method_System_Collections_Generic_Dictionary_FuncList_TYPE__BattleLogicFunctionProcess_BaseFunctionTypeProcess__Add__);
  v15 = (BattleLogicFunctionProcess_AddStateShortProcess_o *)sub_2213CCC(BattleLogicFunctionProcess_AddStateShortProcess_TypeInfo);
  BattleLogicFunctionProcess_AddStateShortProcess___ctor(v15, 0);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v12,
    16,
    (Il2CppObject *)v15,
    (const MethodInfo_3FBC3A0 *)Method_System_Collections_Generic_Dictionary_FuncList_TYPE__BattleLogicFunctionProcess_BaseFunctionTypeProcess__Add__);
  v16 = (BattleLogicFunctionProcess_AddStateProcess_o *)sub_2213CCC(BattleLogicFunctionProcess_AddStateProcess_TypeInfo);
  BattleLogicFunctionProcess_AddStateProcess___ctor(v16, 0);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v12,
    169,
    (Il2CppObject *)v16,
    (const MethodInfo_3FBC3A0 *)Method_System_Collections_Generic_Dictionary_FuncList_TYPE__BattleLogicFunctionProcess_BaseFunctionTypeProcess__Add__);
  v17 = (BattleLogicFunctionProcess_AddStateShortProcess_o *)sub_2213CCC(BattleLogicFunctionProcess_AddStateShortProcess_TypeInfo);
  BattleLogicFunctionProcess_AddStateShortProcess___ctor(v17, 0);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v12,
    170,
    (Il2CppObject *)v17,
    (const MethodInfo_3FBC3A0 *)Method_System_Collections_Generic_Dictionary_FuncList_TYPE__BattleLogicFunctionProcess_BaseFunctionTypeProcess__Add__);
  v18 = (BattleLogicFunctionProcess_MoveToLastSubMemberProcess_o *)sub_2213CCC(BattleLogicFunctionProcess_MoveToLastSubMemberProcess_TypeInfo);
  BattleLogicFunctionProcess_MoveToLastSubMemberProcess___ctor(v18, 0);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v12,
    61,
    (Il2CppObject *)v18,
    (const MethodInfo_3FBC3A0 *)Method_System_Collections_Generic_Dictionary_FuncList_TYPE__BattleLogicFunctionProcess_BaseFunctionTypeProcess__Add__);
  v19 = (BattleLogicFunctionProcess_TransformServantProcess_o *)sub_2213CCC(BattleLogicFunctionProcess_TransformServantProcess_TypeInfo);
  BattleLogicFunctionProcess_TransformServantProcess___ctor(v19, 0);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v12,
    109,
    (Il2CppObject *)v19,
    (const MethodInfo_3FBC3A0 *)Method_System_Collections_Generic_Dictionary_FuncList_TYPE__BattleLogicFunctionProcess_BaseFunctionTypeProcess__Add__);
  v20 = (BattleLogicFunctionProcess_CommonFieldFunctionProcess_o *)sub_2213CCC(BattleLogicFunctionProcess_CommonFieldFunctionProcess_TypeInfo);
  BattleLogicFunctionProcess_CommonFieldFunctionProcess___ctor(v20, 0);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v12,
    29,
    (Il2CppObject *)v20,
    (const MethodInfo_3FBC3A0 *)Method_System_Collections_Generic_Dictionary_FuncList_TYPE__BattleLogicFunctionProcess_BaseFunctionTypeProcess__Add__);
  v21 = (BattleLogicFunctionProcess_CommonFieldFunctionProcess_o *)sub_2213CCC(BattleLogicFunctionProcess_CommonFieldFunctionProcess_TypeInfo);
  BattleLogicFunctionProcess_CommonFieldFunctionProcess___ctor(v21, 0);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v12,
    128,
    (Il2CppObject *)v21,
    (const MethodInfo_3FBC3A0 *)Method_System_Collections_Generic_Dictionary_FuncList_TYPE__BattleLogicFunctionProcess_BaseFunctionTypeProcess__Add__);
  v22 = (BattleLogicFunctionProcess_CommonAddStateProcess_o *)sub_2213CCC(BattleLogicFunctionProcess_CommonAddStateProcess_TypeInfo);
  BattleLogicFunctionProcess_CommonAddStateProcess___ctor(v22, 0);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v12,
    130,
    (Il2CppObject *)v22,
    (const MethodInfo_3FBC3A0 *)Method_System_Collections_Generic_Dictionary_FuncList_TYPE__BattleLogicFunctionProcess_BaseFunctionTypeProcess__Add__);
  v23 = (BattleLogicFunctionProcess_ToFieldCommonFunctionProcess_o *)sub_2213CCC(BattleLogicFunctionProcess_ToFieldCommonFunctionProcess_TypeInfo);
  BattleLogicFunctionProcess_ToFieldCommonFunctionProcess___ctor(v23, 0);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v12,
    131,
    (Il2CppObject *)v23,
    (const MethodInfo_3FBC3A0 *)Method_System_Collections_Generic_Dictionary_FuncList_TYPE__BattleLogicFunctionProcess_BaseFunctionTypeProcess__Add__);
  v24 = (BattleLogicFunctionProcess_ToFieldCommonFunctionProcess_o *)sub_2213CCC(BattleLogicFunctionProcess_ToFieldCommonFunctionProcess_TypeInfo);
  BattleLogicFunctionProcess_ToFieldCommonFunctionProcess___ctor(v24, 0);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v12,
    158,
    (Il2CppObject *)v24,
    (const MethodInfo_3FBC3A0 *)Method_System_Collections_Generic_Dictionary_FuncList_TYPE__BattleLogicFunctionProcess_BaseFunctionTypeProcess__Add__);
  v25 = (BattleLogicFunctionProcess_FieldAddStateProcess_o *)sub_2213CCC(BattleLogicFunctionProcess_FieldAddStateProcess_TypeInfo);
  BattleLogicFunctionProcess_FieldAddStateProcess___ctor(v25, 0);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v12,
    160,
    (Il2CppObject *)v25,
    (const MethodInfo_3FBC3A0 *)Method_System_Collections_Generic_Dictionary_FuncList_TYPE__BattleLogicFunctionProcess_BaseFunctionTypeProcess__Add__);
  v26 = (BattleLogicFunctionProcess_FieldAddStateShortProcess_o *)sub_2213CCC(BattleLogicFunctionProcess_FieldAddStateShortProcess_TypeInfo);
  BattleLogicFunctionProcess_FieldAddStateShortProcess___ctor(v26, 0);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v12,
    161,
    (Il2CppObject *)v26,
    (const MethodInfo_3FBC3A0 *)Method_System_Collections_Generic_Dictionary_FuncList_TYPE__BattleLogicFunctionProcess_BaseFunctionTypeProcess__Add__);
  this->fields.dicFuncProcess = (struct System_Collections_Generic_Dictionary_FuncList_TYPE__BattleLogicFunctionProcess_BaseFunctionTypeProcess__o *)v12;
  sub_2213A04(
    (MissionNaviTransitionBoardItem_o *)&this->fields.dicFuncProcess,
    (int32_t)v12,
    v27,
    v28,
    v29,
    v30,
    v31,
    v32);
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
  unsigned __int64 v18; // x28
  DataVals_o *v19; // x25
  const MethodInfo *v20; // x4
  BattleLogicFunction_c *klass; // x8
  BattleLogicFunction_o *v22; // x26
  __int64 v23; // x9
  int32_t *p_offset; // x10
  __int64 v25; // x0
  __int64 v26; // x0
  __int64 v27; // x1
  __int64 v28; // x26
  __int64 v29; // x8
  __int64 v30; // x9
  int *v31; // x10
  __int64 v32; // x0
  __int64 v33; // x0
  __int64 v34; // x8
  __int64 v35; // x9
  int *v36; // x10
  __int64 v37; // x0
  __int64 v38; // x0
  __int64 v39; // x1
  __int64 v40; // x26
  __int64 v41; // x0
  __int64 v42; // x1
  int32_t v43; // w2
  const MethodInfo *v44; // x6
  int32_t v45; // w26
  BattleActionData_o *v46; // x0
  int32_t v47; // w27
  int32_t funcIndex; // w27
  bool IsCommandSideEffect; // w0
  BattleActionData_o *NoEffectObject; // x0
  __int64 v51; // x8
  __int64 v52; // x9
  int *v53; // x10
  __int64 v54; // x0
  const MethodInfo *v56; // [xsp+8h] [xbp-98h]
  BattleLogicFunction_o *v57; // [xsp+18h] [xbp-88h]
  __int64 v58; // [xsp+30h] [xbp-70h]
  int32_t diffNp; // [xsp+3Ch] [xbp-64h] BYREF

  v8 = this;
  if ( (byte_5973BCC & 1) == 0 )
  {
    sub_2213A60(&BattleActionData_TypeInfo);
    sub_2213A60(&System_IDisposable_TypeInfo);
    sub_2213A60(&System_Collections_Generic_IEnumerable_BattleLogicFunctionProcess_FunctionTargetCheck__TypeInfo);
    sub_2213A60(&System_Collections_Generic_IEnumerator_BattleLogicFunctionProcess_FunctionTargetCheck__TypeInfo);
    sub_2213A60(&System_Collections_IEnumerator_TypeInfo);
    sub_2213A60(&Method_System_Collections_Generic_List_FuncList_TYPE__Add__);
    sub_2213A60(&Method_System_Collections_Generic_List_FuncList_TYPE___ctor__);
    this = (BattleLogicFunction_o *)sub_2213A60(&System_Collections_Generic_List_FuncList_TYPE__TypeInfo);
    byte_5973BCC = 1;
  }
  diffNp = 0;
  if ( !funcTarget )
    goto LABEL_70;
  funcUnit_k__BackingField = funcTarget->fields._funcUnit_k__BackingField;
  if ( !funcUnit_k__BackingField )
    goto LABEL_70;
  procArg_k__BackingField = funcUnit_k__BackingField->fields._procArg_k__BackingField;
  dataVals_k__BackingField = funcUnit_k__BackingField->fields._dataVals_k__BackingField;
  v12 = (BattleActionData_o *)sub_2213CCC(BattleActionData_TypeInfo);
  BattleActionData___ctor(v12, 0);
  v13 = (System_Collections_Generic_List_T__o *)sub_2213CCC(System_Collections_Generic_List_FuncList_TYPE__TypeInfo);
  System_Collections_Generic_List_Int32Enum____ctor(
    v13,
    (const MethodInfo_44691F8 *)Method_System_Collections_Generic_List_FuncList_TYPE___ctor__);
  if ( !v13 )
    goto LABEL_70;
  items = v13->fields._items;
  v15 = Method_System_Collections_Generic_List_FuncList_TYPE__Add__;
  ++v13->fields._version;
  if ( !items )
    goto LABEL_70;
  size = v13->fields._size;
  if ( (unsigned int)size >= LODWORD(items->max_length) )
  {
    System_Collections_Generic_List_Int32Enum___AddWithResize(
      v13,
      8,
      *(const MethodInfo_4469A88 **)(*(_QWORD *)(v15[4] + 192LL) + 112LL));
  }
  else
  {
    v13->fields._size = size + 1;
    *((_DWORD *)items->m_Items + size) = 8;
  }
  if ( !dataVals_k__BackingField )
    goto LABEL_70;
  this = (BattleLogicFunction_o *)DataVals__GetDependDataValsArray(
                                    dataVals_k__BackingField,
                                    (System_Collections_Generic_List_FuncList_TYPE__o *)v13,
                                    0,
                                    0);
  if ( !this )
    goto LABEL_70;
  logic = this->fields.logic;
  if ( (int)logic >= 1 )
  {
    v18 = 0;
    v57 = this;
    while ( 1 )
    {
      if ( v18 >= (unsigned int)logic )
        sub_2213CE4(this);
      diffNp = 0;
      v19 = (DataVals_o *)*((_QWORD *)&this->fields.logictarget + v18);
      if ( !result )
        break;
      this = (BattleLogicFunction_o *)result->fields._Convert_k__BackingField;
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
        v25 = sub_224BC3C(
                this,
                System_Collections_Generic_IEnumerable_BattleLogicFunctionProcess_FunctionTargetCheck__TypeInfo,
                0);
      }
      v26 = (*(__int64 (__fastcall **)(BattleLogicFunction_o *, _QWORD))v25)(v22, *(_QWORD *)(v25 + 8));
      v28 = v26;
      v58 = v26;
      if ( !v26 )
        sub_2213CDC(0, v27);
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
              goto LABEL_29;
          }
          v32 = v29 + 16LL * *v31 + 312;
        }
        else
        {
LABEL_29:
          v32 = sub_224BC3C(v28, System_Collections_IEnumerator_TypeInfo, 0);
        }
        v33 = (*(__int64 (__fastcall **)(__int64, _QWORD))v32)(v28, *(_QWORD *)(v32 + 8));
        if ( (v33 & 1) == 0 )
          break;
        if ( !v58 )
          sub_2213CDC(v33, mainAction);
        v34 = *(_QWORD *)v58;
        v35 = *(unsigned __int16 *)(*(_QWORD *)v58 + 302LL);
        if ( *(_WORD *)(*(_QWORD *)v58 + 302LL) )
        {
          v36 = (int *)(*(_QWORD *)(v34 + 176) + 8LL);
          while ( *((System_Collections_Generic_IEnumerator_BattleLogicFunctionProcess_FunctionTargetCheck__c **)v36 - 1) != System_Collections_Generic_IEnumerator_BattleLogicFunctionProcess_FunctionTargetCheck__TypeInfo )
          {
            --v35;
            v36 += 4;
            if ( !v35 )
              goto LABEL_37;
          }
          v37 = v34 + 16LL * *v36 + 312;
        }
        else
        {
LABEL_37:
          v37 = sub_224BC3C(
                  v58,
                  System_Collections_Generic_IEnumerator_BattleLogicFunctionProcess_FunctionTargetCheck__TypeInfo,
                  0);
        }
        v38 = (*(__int64 (__fastcall **)(__int64, _QWORD))v37)(v58, *(_QWORD *)(v37 + 8));
        v40 = v38;
        if ( !v38 )
          sub_2213CDC(0, v39);
        v41 = (*(__int64 (__fastcall **)(__int64, BattleActionData_o *, _QWORD))(*(_QWORD *)v38 + 408LL))(
                v38,
                mainAction,
                *(_QWORD *)(*(_QWORD *)v38 + 416LL));
        if ( (v41 & 1) != 0 )
        {
          if ( !mainAction )
            sub_2213CDC(v41, v42);
          v45 = *(_DWORD *)(v40 + 32);
          v46 = BattleLogicFunction__functionLossNp(v8, procArg_k__BackingField, v43, v45, v19, &diffNp, v44);
          v47 = diffNp;
          if ( diffNp < 1 )
          {
            if ( v46 )
            {
              if ( !v19 )
                sub_2213CDC(v46, v46);
              if ( !procArg_k__BackingField )
                sub_2213CDC(v46, v46);
              funcIndex = v19->fields.funcIndex;
              IsCommandSideEffect = BattleLogicFunction_ProcListInArgs__get_IsCommandSideEffect(
                                      procArg_k__BackingField,
                                      0);
              NoEffectObject = BattleLogicFunction__getNoEffectObject(
                                 v8,
                                 v45,
                                 funcIndex,
                                 v19,
                                 IsCommandSideEffect,
                                 0,
                                 0,
                                 0,
                                 0,
                                 v56);
              if ( !v12 )
                sub_2213CDC(NoEffectObject, NoEffectObject);
              BattleActionData__addAction(v12, NoEffectObject, 0);
            }
          }
          else
          {
            if ( !v12 )
              sub_2213CDC(v46, v46);
            BattleActionData__addAction(v12, v46, 0);
            NpGaugeAbsorbResult__AddPoint(result, v47, 0);
          }
        }
        v28 = v58;
      }
      if ( v58 )
      {
        v51 = *(_QWORD *)v58;
        v52 = *(unsigned __int16 *)(*(_QWORD *)v58 + 302LL);
        if ( *(_WORD *)(*(_QWORD *)v58 + 302LL) )
        {
          v53 = (int *)(*(_QWORD *)(v51 + 176) + 8LL);
          while ( *((System_IDisposable_c **)v53 - 1) != System_IDisposable_TypeInfo )
          {
            --v52;
            v53 += 4;
            if ( !v52 )
              goto LABEL_57;
          }
          v54 = v51 + 16LL * *v53 + 312;
        }
        else
        {
LABEL_57:
          v54 = sub_224BC3C(v58, System_IDisposable_TypeInfo, 0);
        }
        (*(void (__fastcall **)(__int64, _QWORD))v54)(v58, *(_QWORD *)(v54 + 8));
      }
      this = v57;
      LODWORD(logic) = v57->fields.logic;
      if ( (__int64)++v18 >= (int)logic )
        return v12;
    }
LABEL_70:
    sub_2213CDC(this, mainAction);
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
  BattleLogicFunction_o *v8; // x21
  struct BattleLogicFunctionProcess_FunctionUnitCheck_o *funcUnit_k__BackingField; // x8
  DataVals_o *dataVals_k__BackingField; // x24
  BattleLogicFunction_ProcListInArgs_o *procArg_k__BackingField; // x22
  BattleActionData_o *v12; // x23
  System_Collections_Generic_List_T__o *v13; // x25
  struct System_Object_array *items; // x8
  _QWORD *v15; // x9
  __int64 size; // x10
  struct BattleLogic_o *logic; // x8
  unsigned __int64 v18; // x9
  DataVals_o *v19; // x25
  const MethodInfo *v20; // x4
  BattleLogicFunction_c *klass; // x8
  BattleLogicFunction_o *v22; // x26
  __int64 v23; // x9
  int32_t *p_offset; // x10
  __int64 v25; // x0
  __int64 v26; // x1
  __int64 v27; // x26
  __int64 v28; // x8
  __int64 v29; // x9
  int *v30; // x10
  __int64 v31; // x0
  __int64 v32; // x0
  __int64 v33; // x8
  __int64 v34; // x9
  int *v35; // x10
  __int64 v36; // x0
  __int64 v37; // x0
  __int64 v38; // x1
  __int64 v39; // x26
  __int64 v40; // x0
  __int64 v41; // x1
  int32_t v42; // w27
  FunctionEntity_o *funcEnt; // x28
  int32_t funcIndex; // w26
  bool IsCommandSideEffect; // w0
  const MethodInfo *v46; // x7
  BattleActionData_o *v47; // x0
  __int64 v48; // x8
  __int64 v49; // x9
  int *v50; // x10
  __int64 v51; // x0
  BattleLogicFunction_o *v53; // [xsp+0h] [xbp-90h]
  unsigned __int64 v54; // [xsp+8h] [xbp-88h]
  __int64 v55; // [xsp+20h] [xbp-70h]
  int32_t absorptionCount; // [xsp+2Ch] [xbp-64h] BYREF

  v8 = this;
  if ( (byte_5973BCB & 1) == 0 )
  {
    sub_2213A60(&BattleActionData_TypeInfo);
    sub_2213A60(&System_IDisposable_TypeInfo);
    sub_2213A60(&System_Collections_Generic_IEnumerable_BattleLogicFunctionProcess_FunctionTargetCheck__TypeInfo);
    sub_2213A60(&System_Collections_Generic_IEnumerator_BattleLogicFunctionProcess_FunctionTargetCheck__TypeInfo);
    sub_2213A60(&System_Collections_IEnumerator_TypeInfo);
    sub_2213A60(&Method_System_Collections_Generic_List_FuncList_TYPE__Add__);
    sub_2213A60(&Method_System_Collections_Generic_List_FuncList_TYPE___ctor__);
    this = (BattleLogicFunction_o *)sub_2213A60(&System_Collections_Generic_List_FuncList_TYPE__TypeInfo);
    byte_5973BCB = 1;
  }
  absorptionCount = 0;
  if ( !funcTarget )
    goto LABEL_64;
  funcUnit_k__BackingField = funcTarget->fields._funcUnit_k__BackingField;
  if ( !funcUnit_k__BackingField )
    goto LABEL_64;
  dataVals_k__BackingField = funcUnit_k__BackingField->fields._dataVals_k__BackingField;
  if ( !dataVals_k__BackingField )
    goto LABEL_64;
  procArg_k__BackingField = funcUnit_k__BackingField->fields._procArg_k__BackingField;
  v12 = (BattleActionData_o *)sub_2213CCC(BattleActionData_TypeInfo);
  BattleActionData___ctor(v12, 0);
  v13 = (System_Collections_Generic_List_T__o *)sub_2213CCC(System_Collections_Generic_List_FuncList_TYPE__TypeInfo);
  System_Collections_Generic_List_Int32Enum____ctor(
    v13,
    (const MethodInfo_44691F8 *)Method_System_Collections_Generic_List_FuncList_TYPE___ctor__);
  if ( !v13 )
    goto LABEL_64;
  items = v13->fields._items;
  v15 = Method_System_Collections_Generic_List_FuncList_TYPE__Add__;
  ++v13->fields._version;
  if ( !items )
    goto LABEL_64;
  size = v13->fields._size;
  if ( (unsigned int)size >= LODWORD(items->max_length) )
  {
    System_Collections_Generic_List_Int32Enum___AddWithResize(
      v13,
      20,
      *(const MethodInfo_4469A88 **)(*(_QWORD *)(v15[4] + 192LL) + 112LL));
  }
  else
  {
    v13->fields._size = size + 1;
    *((_DWORD *)items->m_Items + size) = 20;
  }
  this = (BattleLogicFunction_o *)DataVals__GetDependDataValsArray(
                                    dataVals_k__BackingField,
                                    (System_Collections_Generic_List_FuncList_TYPE__o *)v13,
                                    0,
                                    0);
  if ( !this )
    goto LABEL_64;
  logic = this->fields.logic;
  if ( (int)logic >= 1 )
  {
    v18 = 0;
    v53 = this;
    while ( 1 )
    {
      if ( v18 >= (unsigned int)logic )
        sub_2213CE4(this);
      absorptionCount = 0;
      v19 = (DataVals_o *)*((_QWORD *)&this->fields.logictarget + v18);
      if ( !result )
        break;
      this = (BattleLogicFunction_o *)result->fields._Convert_k__BackingField;
      v54 = v18;
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
        v25 = sub_224BC3C(
                this,
                System_Collections_Generic_IEnumerable_BattleLogicFunctionProcess_FunctionTargetCheck__TypeInfo,
                0);
      }
      v27 = (*(__int64 (__fastcall **)(BattleLogicFunction_o *, _QWORD))v25)(v22, *(_QWORD *)(v25 + 8));
      v55 = v27;
      if ( !v27 )
        sub_2213CDC(0, v26);
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
          v31 = sub_224BC3C(v27, System_Collections_IEnumerator_TypeInfo, 0);
        }
        v32 = (*(__int64 (__fastcall **)(__int64, _QWORD))v31)(v27, *(_QWORD *)(v31 + 8));
        if ( (v32 & 1) == 0 )
          break;
        if ( !v55 )
          sub_2213CDC(v32, mainAction);
        v33 = *(_QWORD *)v55;
        v34 = *(unsigned __int16 *)(*(_QWORD *)v55 + 302LL);
        if ( *(_WORD *)(*(_QWORD *)v55 + 302LL) )
        {
          v35 = (int *)(*(_QWORD *)(v33 + 176) + 8LL);
          while ( *((System_Collections_Generic_IEnumerator_BattleLogicFunctionProcess_FunctionTargetCheck__c **)v35 - 1) != System_Collections_Generic_IEnumerator_BattleLogicFunctionProcess_FunctionTargetCheck__TypeInfo )
          {
            --v34;
            v35 += 4;
            if ( !v34 )
              goto LABEL_37;
          }
          v36 = v33 + 16LL * *v35 + 312;
        }
        else
        {
LABEL_37:
          v36 = sub_224BC3C(
                  v55,
                  System_Collections_Generic_IEnumerator_BattleLogicFunctionProcess_FunctionTargetCheck__TypeInfo,
                  0);
        }
        v37 = (*(__int64 (__fastcall **)(__int64, _QWORD))v36)(v55, *(_QWORD *)(v36 + 8));
        v39 = v37;
        if ( !v37 )
          sub_2213CDC(0, v38);
        v40 = (*(__int64 (__fastcall **)(__int64, BattleActionData_o *, _QWORD))(*(_QWORD *)v37 + 408LL))(
                v37,
                mainAction,
                *(_QWORD *)(*(_QWORD *)v37 + 416LL));
        if ( (v40 & 1) != 0 )
        {
          if ( !v19 )
            sub_2213CDC(v40, v41);
          if ( !procArg_k__BackingField )
            sub_2213CDC(v40, v41);
          v42 = *(_DWORD *)(v39 + 32);
          funcEnt = v19->fields.funcEnt;
          funcIndex = v19->fields.funcIndex;
          IsCommandSideEffect = BattleLogicFunction_ProcListInArgs__get_IsCommandSideEffect(procArg_k__BackingField, 0);
          v47 = BattleLogicFunction__functionDelayNpTurn(
                  v8,
                  v42,
                  funcEnt,
                  v19,
                  funcIndex,
                  IsCommandSideEffect,
                  &absorptionCount,
                  v46);
          if ( !v12 )
            sub_2213CDC(v47, v47);
          BattleActionData__addAction(v12, v47, 0);
          if ( absorptionCount >= 1 )
            NpGaugeAbsorbResult__AddTurn(result, absorptionCount, 0);
        }
        v27 = v55;
      }
      if ( v55 )
      {
        v48 = *(_QWORD *)v55;
        v49 = *(unsigned __int16 *)(*(_QWORD *)v55 + 302LL);
        if ( *(_WORD *)(*(_QWORD *)v55 + 302LL) )
        {
          v50 = (int *)(*(_QWORD *)(v48 + 176) + 8LL);
          while ( *((System_IDisposable_c **)v50 - 1) != System_IDisposable_TypeInfo )
          {
            --v49;
            v50 += 4;
            if ( !v49 )
              goto LABEL_53;
          }
          v51 = v48 + 16LL * *v50 + 312;
        }
        else
        {
LABEL_53:
          v51 = sub_224BC3C(v55, System_IDisposable_TypeInfo, 0);
        }
        (*(void (__fastcall **)(__int64, _QWORD))v51)(v55, *(_QWORD *)(v51 + 8));
      }
      this = v53;
      LODWORD(logic) = v53->fields.logic;
      v18 = v54 + 1;
      if ( (__int64)(v54 + 1) >= (int)logic )
        return v12;
    }
LABEL_64:
    sub_2213CDC(this, mainAction);
  }
  return v12;
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
  if ( (byte_5973BA2 & 1) == 0 )
  {
    this = (BattleLogicFunction_o *)sub_2213A60(&UnityEngine_Object_TypeInfo);
    byte_5973BA2 = 1;
  }
  if ( !buffEnt )
    goto LABEL_18;
  if ( buffEnt->fields.effectId >= 1 )
  {
    logic = (UnityEngine_Object_o *)v6->fields.logic;
    if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, targetSvtData);
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
    if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, targetSvtData);
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
      sub_2213CDC(this, targetSvtData);
    }
  }
}


void BattleLogicFunction__ApplyGroupedResultAggregate(
        BattleLogicFunction_o *this,
        BattleActionData_o *action,
        BattleLogicFunction_ProcListInArgs_o *procArgs,
        const MethodInfo *method)
{
  struct BattleLogicFunctionProcess_FunctionUnitCheck_array *funcUnitArray_k__BackingField; // x21
  DataVals_o *IsNullOrEmpty; // x0
  __int64 v8; // x1
  System_Collections_Generic_Dictionary_int__int__o *v9; // x20
  il2cpp_array_size_t max_length; // x8
  unsigned __int64 v11; // x24
  BattleLogicFunctionProcess_FunctionUnitCheck_o *v12; // x22
  int32_t v13; // w23
  struct System_Collections_Generic_List_BattleActionData_BuffData__o *buffdatalist; // x8
  int size; // w25
  System_Collections_Generic_Dictionary_ValueTuple_int__int___bool__o *v16; // x21
  System_Collections_Generic_Dictionary_ValueTuple_int__int___int__o *v17; // x22
  int32_t i; // w23
  Il2CppObject *Item; // x0
  Il2CppObject *v20; // x24
  int32_t v21; // w23
  Il2CppObject *v22; // x0
  Il2CppObject *v23; // x24
  int32_t v24; // [xsp+Ch] [xbp-84h] BYREF
  System_ValueTuple_int__int__o v25; // [xsp+10h] [xbp-80h] BYREF
  int32_t item2; // [xsp+1Ch] [xbp-74h] BYREF
  System_ValueTuple_int__int__o key; // [xsp+20h] [xbp-70h] BYREF
  int32_t value; // [xsp+2Ch] [xbp-64h] BYREF

  if ( (byte_5973BF2 & 1) == 0 )
  {
    sub_2213A60(&Method_System_Collections_Generic_Dictionary_ValueTuple_int__int___bool__ContainsKey__);
    sub_2213A60(&Method_System_Collections_Generic_Dictionary_ValueTuple_int__int___int__TryGetValue__);
    sub_2213A60(&Method_System_Collections_Generic_Dictionary_int__int__TryGetValue__);
    sub_2213A60(&Method_System_Collections_Generic_Dictionary_ValueTuple_int__int___bool___ctor__);
    sub_2213A60(&Method_System_Collections_Generic_Dictionary_int__int___ctor___91598544);
    sub_2213A60(&Method_System_Collections_Generic_Dictionary_ValueTuple_int__int___int___ctor__);
    sub_2213A60(&Method_System_Collections_Generic_Dictionary_int__int__get_Count__);
    sub_2213A60(&Method_System_Collections_Generic_Dictionary_int__int__set_Item__);
    sub_2213A60(&Method_System_Collections_Generic_Dictionary_ValueTuple_int__int___bool__set_Item__);
    sub_2213A60(&Method_System_Collections_Generic_Dictionary_ValueTuple_int__int___int__set_Item__);
    sub_2213A60(&System_Collections_Generic_Dictionary_ValueTuple_int__int___int__TypeInfo);
    sub_2213A60(&System_Collections_Generic_Dictionary_ValueTuple_int__int___bool__TypeInfo);
    sub_2213A60(&System_Collections_Generic_Dictionary_int__int__TypeInfo);
    sub_2213A60(&Method_System_Collections_Generic_List_BattleActionData_BuffData__get_Count__);
    sub_2213A60(&Method_System_Collections_Generic_List_BattleActionData_BuffData__get_Item__);
    sub_2213A60(&Method_System_ValueTuple_int__int___ctor__);
    byte_5973BF2 = 1;
  }
  value = 0;
  key = 0;
  item2 = 0;
  v25 = 0;
  v24 = 0;
  if ( action )
  {
    if ( procArgs )
    {
      funcUnitArray_k__BackingField = procArgs->fields._funcUnitArray_k__BackingField;
      if ( !BasicHelper__IsNullOrEmpty((System_Collections_ICollection_o *)action->fields.buffdatalist, 0) )
      {
        IsNullOrEmpty = (DataVals_o *)BasicHelper__IsNullOrEmpty(
                                        (System_Collections_ICollection_o *)funcUnitArray_k__BackingField,
                                        0);
        if ( ((unsigned __int8)IsNullOrEmpty & 1) == 0 )
        {
          if ( !funcUnitArray_k__BackingField )
            goto LABEL_46;
          v9 = (System_Collections_Generic_Dictionary_int__int__o *)sub_2213CCC(System_Collections_Generic_Dictionary_int__int__TypeInfo);
          System_Collections_Generic_Dictionary_int__int____ctor_66658964(
            v9,
            funcUnitArray_k__BackingField->max_length,
            (const MethodInfo_3F92294 *)Method_System_Collections_Generic_Dictionary_int__int___ctor___91598544);
          max_length = funcUnitArray_k__BackingField->max_length;
          if ( (int)max_length >= 1 )
          {
            v11 = 0;
            do
            {
              if ( v11 >= (unsigned int)max_length )
                sub_2213CE4(IsNullOrEmpty);
              v12 = funcUnitArray_k__BackingField->m_Items[v11];
              if ( v12 )
              {
                IsNullOrEmpty = v12->fields._dataVals_k__BackingField;
                if ( IsNullOrEmpty )
                {
                  IsNullOrEmpty = (DataVals_o *)DataVals__GetResultAggregateGroupId(IsNullOrEmpty, 0);
                  if ( (int)IsNullOrEmpty >= 1 )
                  {
                    v13 = (int)IsNullOrEmpty;
                    IsNullOrEmpty = (DataVals_o *)BattleLogicFunctionProcess_FunctionUnitCheck__get_FuncIndex(v12, 0);
                    if ( !v9 )
                      goto LABEL_46;
                    System_Collections_Generic_Dictionary_int__int___set_Item(
                      v9,
                      (int32_t)IsNullOrEmpty,
                      v13,
                      (const MethodInfo_3F92C0C *)Method_System_Collections_Generic_Dictionary_int__int__set_Item__);
                  }
                }
              }
              LODWORD(max_length) = funcUnitArray_k__BackingField->max_length;
              ++v11;
            }
            while ( (__int64)v11 < (int)max_length );
          }
          if ( !v9 )
LABEL_46:
            sub_2213CDC(IsNullOrEmpty, v8);
          IsNullOrEmpty = (DataVals_o *)System_Collections_Generic_Dictionary_int__int___get_Count(
                                          v9,
                                          (const MethodInfo_3F928BC *)Method_System_Collections_Generic_Dictionary_int__int__get_Count__);
          if ( (_DWORD)IsNullOrEmpty )
          {
            buffdatalist = action->fields.buffdatalist;
            if ( !buffdatalist )
              goto LABEL_46;
            size = buffdatalist->fields._size;
            v16 = (System_Collections_Generic_Dictionary_ValueTuple_int__int___bool__o *)sub_2213CCC(System_Collections_Generic_Dictionary_ValueTuple_int__int___bool__TypeInfo);
            System_Collections_Generic_Dictionary_ValueTuple_int__int___bool____ctor(
              v16,
              (const MethodInfo_3F499E4 *)Method_System_Collections_Generic_Dictionary_ValueTuple_int__int___bool___ctor__);
            v17 = (System_Collections_Generic_Dictionary_ValueTuple_int__int___int__o *)sub_2213CCC(System_Collections_Generic_Dictionary_ValueTuple_int__int___int__TypeInfo);
            System_Collections_Generic_Dictionary_ValueTuple_int__int___int____ctor(
              v17,
              (const MethodInfo_3F4CCE4 *)Method_System_Collections_Generic_Dictionary_ValueTuple_int__int___int___ctor__);
            if ( size >= 1 )
            {
              for ( i = 0; i != size; ++i )
              {
                IsNullOrEmpty = (DataVals_o *)action->fields.buffdatalist;
                if ( !IsNullOrEmpty )
                  goto LABEL_46;
                Item = System_Collections_Generic_List_object___get_Item(
                         (System_Collections_Generic_List_object__o *)IsNullOrEmpty,
                         i,
                         (const MethodInfo_4483994 *)Method_System_Collections_Generic_List_BattleActionData_BuffData__get_Item__);
                if ( Item )
                {
                  v20 = Item;
                  if ( !BYTE1(Item[8].klass)
                    && System_Collections_Generic_Dictionary_int__int___TryGetValue(
                         v9,
                         (int32_t)Item[1].klass,
                         &value,
                         (const MethodInfo_3F9458C *)Method_System_Collections_Generic_Dictionary_int__int__TryGetValue__) )
                  {
                    System_ValueTuple_int__int____ctor(
                      (System_ValueTuple_int__int__o)&key,
                      HIDWORD(v20[3].monitor),
                      value,
                      (const MethodInfo_3CEDC64 *)Method_System_ValueTuple_int__int___ctor__);
                    if ( BYTE4(v20[6].monitor) )
                    {
                      if ( !v17 )
                        goto LABEL_46;
                      System_Collections_Generic_Dictionary_ValueTuple_int__int___int___set_Item(
                        v17,
                        key,
                        i,
                        (const MethodInfo_3F4D684 *)Method_System_Collections_Generic_Dictionary_ValueTuple_int__int___int__set_Item__);
                    }
                    else
                    {
                      if ( !v16 )
                        goto LABEL_46;
                      System_Collections_Generic_Dictionary_ValueTuple_int__int___bool___set_Item(
                        v16,
                        key,
                        1,
                        (const MethodInfo_3F4A38C *)Method_System_Collections_Generic_Dictionary_ValueTuple_int__int___bool__set_Item__);
                    }
                  }
                }
              }
              v21 = 0;
              while ( 1 )
              {
                IsNullOrEmpty = (DataVals_o *)action->fields.buffdatalist;
                if ( !IsNullOrEmpty )
                  goto LABEL_46;
                v22 = System_Collections_Generic_List_object___get_Item(
                        (System_Collections_Generic_List_object__o *)IsNullOrEmpty,
                        v21,
                        (const MethodInfo_4483994 *)Method_System_Collections_Generic_List_BattleActionData_BuffData__get_Item__);
                if ( v22 )
                {
                  v23 = v22;
                  if ( BYTE4(v22[6].monitor) )
                  {
                    if ( !BYTE1(v22[8].klass)
                      && System_Collections_Generic_Dictionary_int__int___TryGetValue(
                           v9,
                           (int32_t)v22[1].klass,
                           &item2,
                           (const MethodInfo_3F9458C *)Method_System_Collections_Generic_Dictionary_int__int__TryGetValue__) )
                    {
                      System_ValueTuple_int__int____ctor(
                        (System_ValueTuple_int__int__o)&v25,
                        HIDWORD(v23[3].monitor),
                        item2,
                        (const MethodInfo_3CEDC64 *)Method_System_ValueTuple_int__int___ctor__);
                      if ( !v16 )
                        goto LABEL_46;
                      IsNullOrEmpty = (DataVals_o *)System_Collections_Generic_Dictionary_ValueTuple_int__int___bool___ContainsKey(
                                                      v16,
                                                      v25,
                                                      (const MethodInfo_3F4A5A4 *)Method_System_Collections_Generic_Dictionary_ValueTuple_int__int___bool__ContainsKey__);
                      if ( ((unsigned __int8)IsNullOrEmpty & 1) != 0 )
                        goto LABEL_43;
                      if ( !v17 )
                        goto LABEL_46;
                      if ( System_Collections_Generic_Dictionary_ValueTuple_int__int___int___TryGetValue(
                             v17,
                             v25,
                             &v24,
                             (const MethodInfo_3F4F0E4 *)Method_System_Collections_Generic_Dictionary_ValueTuple_int__int___int__TryGetValue__)
                        && v21 != v24 )
                      {
LABEL_43:
                        BYTE1(v23[8].klass) = 1;
                      }
                    }
                  }
                }
                if ( size == ++v21 )
                  return;
              }
            }
          }
        }
      }
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
  __int64 v18; // x28
  __int64 v19; // x1
  BattleData_o *data; // x0
  System_String_o *v21; // x2
  System_String_o *v22; // x3
  int32_t v23; // w4
  int32_t v24; // w5
  bool v25; // w6
  bool v26; // w7
  BattleServantData_o **v27; // x21
  const MethodInfo *v28; // x6
  bool v29; // w29
  BattleActionData_BuffData_o *FunctionObject; // x24
  System_Func_object__object__o *v31; // x26
  System_Collections_Generic_IEnumerable_TSource__o *v32; // x0
  System_Collections_Generic_List_TSource__o *v33; // x0
  System_String_o *v34; // x2
  System_String_o *v35; // x3
  int32_t v36; // w4
  int32_t v37; // w5
  bool v38; // w6
  bool v39; // w7
  System_Func_object__bool__o *v40; // x26
  _BOOL8 v41; // x0
  __int64 v42; // x1
  Il2CppObject *current; // x25
  BattleData_o *v44; // x0
  __int64 v45; // x1
  BattleLogicFunction___c_c *v46; // x0
  struct BattleLogicFunction___c_StaticFields *static_fields; // x8
  System_Func_object__bool__o *_9__81_1; // x25
  Il2CppObject *v49; // x26
  struct BattleLogicFunction___c_StaticFields *v50; // x0
  System_String_o *v51; // x2
  System_String_o *v52; // x3
  int32_t v53; // w4
  int32_t v54; // w5
  bool v55; // w6
  bool v56; // w7
  struct BattleData_o *v57; // x8
  BattleFieldEnvironmentData_o *FieldEnvData_k__BackingField; // x25
  BattleActionEffect_ChangeBgmBuff_o *v59; // x25
  __int64 v60; // x1
  BattleLogicFunction___c_c *v61; // x0
  struct BattleLogicFunction___c_StaticFields *v62; // x8
  System_Func_object__bool__o *_9__81_2; // x25
  Il2CppObject *v64; // x26
  struct BattleLogicFunction___c_StaticFields *v65; // x0
  System_String_o *v66; // x2
  System_String_o *v67; // x3
  int32_t v68; // w4
  int32_t v69; // w5
  bool v70; // w6
  bool v71; // w7
  struct BattleData_o *v72; // x8
  BattleFieldEnvironmentData_o *v73; // x0
  int32_t MaxHp_k__BackingField; // w25
  int v75; // w25
  int32_t Hp_k__BackingField; // w23
  BattleActionEffect_SubChangeMaxHpBuff_o *v77; // x22
  BattleActionEffect_Base_o *v78; // x0
  BattleLogicFunction___c_c *v79; // x0
  struct BattleLogicFunction___c_StaticFields *v80; // x8
  System_Func_object__bool__o *_9__81_3; // x22
  Il2CppObject *v82; // x23
  struct BattleLogicFunction___c_StaticFields *v83; // x0
  System_String_o *v84; // x2
  System_String_o *v85; // x3
  int32_t v86; // w4
  int32_t v87; // w5
  bool v88; // w6
  bool v89; // w7
  int32_t v90; // w22
  Il2CppObject *Item; // x0
  Il2CppObject *v92; // x23
  __int64 v93; // x1
  int32_t BuffType; // w24
  BattleServantData_o *v95; // x20
  UnityEngine_Object_o *logic; // x21
  struct BattleLogic_o *v97; // x8
  UnityEngine_Object_o *perf; // x19
  System_Collections_Generic_List_Enumerator_object__o v99; // [xsp+8h] [xbp-98h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v100; // [xsp+20h] [xbp-80h] BYREF

  if ( (byte_5973BB1 & 1) == 0 )
  {
    sub_2213A60(&Method_BasicHelper_Any_BattleBuffData_BuffData___);
    sub_2213A60(&Method_BattleBuffData_IsOverwriteClass__);
    sub_2213A60(&BuffList_TypeInfo);
    sub_2213A60(&BattleActionEffect_ChangeBgmBuff_TypeInfo);
    sub_2213A60(&Method_System_Linq_Enumerable_Select_BattleBuffData_BuffData__BattleBuffData_BuffData___);
    sub_2213A60(&Method_System_Linq_Enumerable_ToList_BattleBuffData_BuffData___);
    sub_2213A60(&Method_System_Collections_Generic_List_Enumerator_BattleBuffData_BuffData__Dispose__);
    sub_2213A60(&Method_System_Collections_Generic_List_Enumerator_BattleBuffData_BuffData__MoveNext__);
    sub_2213A60(&Method_System_Collections_Generic_List_Enumerator_BattleBuffData_BuffData__get_Current__);
    sub_2213A60(&System_Func_BattleBuffData_BuffData__BattleBuffData_BuffData__TypeInfo);
    sub_2213A60(&System_Func_BattleBuffData_BuffData__bool__TypeInfo);
    sub_2213A60(&Method_System_Collections_Generic_List_BattleBuffData_BuffData__GetEnumerator__);
    sub_2213A60(&Method_System_Collections_Generic_List_BattleBuffData_BuffData__ToArray__);
    sub_2213A60(&Method_System_Collections_Generic_List_BattleBuffData_BuffData__get_Count__);
    sub_2213A60(&Method_System_Collections_Generic_List_BattleBuffData_BuffData__get_Item__);
    sub_2213A60(&UnityEngine_Object_TypeInfo);
    sub_2213A60(&BattleActionEffect_SubChangeMaxHpBuff_TypeInfo);
    sub_2213A60(&Method_BattleLogicFunction___c__ApplySubBuffChanges_b__81_1__);
    sub_2213A60(&Method_BattleLogicFunction___c__ApplySubBuffChanges_b__81_2__);
    sub_2213A60(&Method_BattleLogicFunction___c__ApplySubBuffChanges_b__81_3__);
    sub_2213A60(&Method_BattleLogicFunction___c__DisplayClass81_0__ApplySubBuffChanges_b__0__);
    sub_2213A60(&BattleLogicFunction___c__DisplayClass81_0_TypeInfo);
    sub_2213A60(&BattleLogicFunction___c_TypeInfo);
    byte_5973BB1 = 1;
  }
  memset(&v100, 0, sizeof(v100));
  v18 = sub_2213CCC(BattleLogicFunction___c__DisplayClass81_0_TypeInfo);
  BattleLogicFunction___c__DisplayClass81_0___ctor((BattleLogicFunction___c__DisplayClass81_0_o *)v18, 0);
  if ( !BasicHelper__IsNullOrEmpty((System_Collections_ICollection_o *)subBuffList, 0) )
  {
    data = this->fields.data;
    if ( !data )
      goto LABEL_80;
    data = (BattleData_o *)BattleData__getServantData(data, targetId, 0);
    if ( !v18 )
      goto LABEL_80;
    *(_QWORD *)(v18 + 16) = data;
    v27 = (BattleServantData_o **)(v18 + 16);
    sub_2213A04((MissionNaviTransitionBoardItem_o *)(v18 + 16), (int32_t)data, v21, v22, v23, v24, v25, v26);
    data = *(BattleData_o **)(v18 + 16);
    if ( !data )
      goto LABEL_80;
    data = (BattleData_o *)BattleServantData__getAuraIdList((BattleServantData_o *)data, 0);
    if ( !data || !svtSnapShotOnBuffUpdate || !baseVals || !*v27 )
      goto LABEL_80;
    v29 = svtSnapShotOnBuffUpdate->fields._AuraSum_k__BackingField > SLODWORD(data->fields.m_CancellationTokenSource);
    FunctionObject = BattleLogicFunction__getFunctionObject(
                       (BattleLogicFunction_o *)data,
                       baseVals->fields.funcEnt,
                       (*v27)->fields.uniqueId,
                       index,
                       isCommandSideEffect,
                       0,
                       v28);
    FunctionObject->fields.isShowBuffAuraUpdate = v29;
    v31 = (System_Func_object__object__o *)sub_2213CCC(System_Func_BattleBuffData_BuffData__BattleBuffData_BuffData__TypeInfo);
    System_Func_object__object____ctor(
      v31,
      (Il2CppObject *)v18,
      Method_BattleLogicFunction___c__DisplayClass81_0__ApplySubBuffChanges_b__0__,
      0);
    v32 = (System_Collections_Generic_IEnumerable_TSource__o *)System_Linq_Enumerable__Select_object__object_(
                                                                 (System_Collections_Generic_IEnumerable_TSource__o *)subBuffList,
                                                                 (System_Func_TSource__TResult__o *)v31,
                                                                 (const MethodInfo_38911C8 *)Method_System_Linq_Enumerable_Select_BattleBuffData_BuffData__BattleBuffData_BuffData___);
    v33 = System_Linq_Enumerable__ToList_object_(
            v32,
            (const MethodInfo_38A0DF0 *)Method_System_Linq_Enumerable_ToList_BattleBuffData_BuffData___);
    FunctionObject->fields.removeBuffList = (struct System_Collections_Generic_List_BattleBuffData_BuffData__o *)v33;
    sub_2213A04(
      (MissionNaviTransitionBoardItem_o *)&FunctionObject->fields.removeBuffList,
      (int32_t)v33,
      v34,
      v35,
      v36,
      v37,
      v38,
      v39);
    v40 = (System_Func_object__bool__o *)sub_2213CCC(System_Func_BattleBuffData_BuffData__bool__TypeInfo);
    System_Func_object__bool____ctor(v40, 0, Method_BattleBuffData_IsOverwriteClass__, 0);
    data = (BattleData_o *)BasicHelper__Any_object_(
                             (System_Collections_Generic_List_T__o *)subBuffList,
                             (System_Func_T__bool__o *)v40,
                             (const MethodInfo_380FDE0 *)Method_BasicHelper_Any_BattleBuffData_BuffData___);
    if ( ((unsigned __int8)data & 1) != 0 )
      FunctionObject->fields.procType = 7;
    if ( !args )
      goto LABEL_80;
    data = (BattleData_o *)BattleLogicFunction_ProcListInArgs__get_ParentActBuffData(args, 0);
    if ( !actionData )
      goto LABEL_80;
    BattleActionData__setBuffData(actionData, FunctionObject, baseVals, (BattleActionData_BuffData_o *)data, 0);
    if ( !subBuffList )
      goto LABEL_80;
    System_Collections_Generic_List_object___GetEnumerator(
      (System_Collections_Generic_List_Enumerator_T__o *)&v99,
      (System_Collections_Generic_List_object__o *)subBuffList,
      (const MethodInfo_448473C *)Method_System_Collections_Generic_List_BattleBuffData_BuffData__GetEnumerator__);
    v100 = v99;
    v99.fields._list = 0;
    *(_QWORD *)&v99.fields._index = &v100;
    while ( 1 )
    {
      v41 = System_Collections_Generic_List_Enumerator_object___MoveNext(
              &v100,
              (const MethodInfo_40FBAD8 *)Method_System_Collections_Generic_List_Enumerator_BattleBuffData_BuffData__MoveNext__);
      if ( !v41 )
        break;
      current = v100.fields._current;
      if ( !v100.fields._current )
        sub_2213CDC(v41, v42);
      v44 = this->fields.data;
      if ( !v44 )
        sub_2213CDC(0, v42);
      BattleData__RemoveDoNotSelectCommandCardBuff(v44, (int32_t)v100.fields._current[1].klass, *v27, 0);
      if ( BattleBuffData__CheckInvalidSacrificeIndiv((BattleBuffData_BuffData_o *)current, 0) )
        args->fields.updateField = 1;
    }
    System_Collections_Generic_List_Enumerator_object___Dispose(
      &v100,
      (const MethodInfo_40FBAD4 *)Method_System_Collections_Generic_List_Enumerator_BattleBuffData_BuffData__Dispose__);
    v46 = BattleLogicFunction___c_TypeInfo;
    if ( !*(&BattleLogicFunction___c_TypeInfo->_2.cctor_finished + 1) )
    {
      j_il2cpp_runtime_class_init_0(BattleLogicFunction___c_TypeInfo, v45);
      v46 = BattleLogicFunction___c_TypeInfo;
    }
    static_fields = v46->static_fields;
    _9__81_1 = (System_Func_object__bool__o *)static_fields->__9__81_1;
    if ( !_9__81_1 )
    {
      if ( !*(&v46->_2.cctor_finished + 1) )
      {
        j_il2cpp_runtime_class_init_0(v46, v45);
        static_fields = BattleLogicFunction___c_TypeInfo->static_fields;
      }
      v49 = (Il2CppObject *)static_fields->__9;
      _9__81_1 = (System_Func_object__bool__o *)sub_2213CCC(System_Func_BattleBuffData_BuffData__bool__TypeInfo);
      System_Func_object__bool____ctor(_9__81_1, v49, Method_BattleLogicFunction___c__ApplySubBuffChanges_b__81_1__, 0);
      v50 = BattleLogicFunction___c_TypeInfo->static_fields;
      v50->__9__81_1 = (struct System_Func_BattleBuffData_BuffData__bool__o *)_9__81_1;
      sub_2213A04((MissionNaviTransitionBoardItem_o *)&v50->__9__81_1, (int32_t)_9__81_1, v51, v52, v53, v54, v55, v56);
    }
    data = (BattleData_o *)BasicHelper__Any_object_(
                             (System_Collections_Generic_List_T__o *)subBuffList,
                             (System_Func_T__bool__o *)_9__81_1,
                             (const MethodInfo_380FDE0 *)Method_BasicHelper_Any_BattleBuffData_BuffData___);
    if ( ((unsigned __int8)data & 1) != 0 )
    {
      v57 = this->fields.data;
      if ( !v57 )
        goto LABEL_80;
      FieldEnvData_k__BackingField = v57->fields._FieldEnvData_k__BackingField;
      data = (BattleData_o *)System_Collections_Generic_List_object___ToArray(
                               (System_Collections_Generic_List_object__o *)subBuffList,
                               (const MethodInfo_4485784 *)Method_System_Collections_Generic_List_BattleBuffData_BuffData__ToArray__);
      if ( !FieldEnvData_k__BackingField )
        goto LABEL_80;
      BattleFieldEnvironmentData__RemoveBgmRelateBuff(
        FieldEnvData_k__BackingField,
        (BattleBuffData_BuffData_array *)data,
        0);
      v59 = (BattleActionEffect_ChangeBgmBuff_o *)sub_2213CCC(BattleActionEffect_ChangeBgmBuff_TypeInfo);
      BattleActionEffect_ChangeBgmBuff___ctor(v59, 0);
      BattleActionData_BuffData__SetActionEffectProc(FunctionObject, (BattleActionEffect_Base_o *)v59, 0);
    }
    data = (BattleData_o *)*v27;
    if ( !*v27 )
      goto LABEL_80;
    BattleServantData__FixHpWhenHpBaseBuffReleased((BattleServantData_o *)data, 0, 0);
    v61 = BattleLogicFunction___c_TypeInfo;
    if ( !*(&BattleLogicFunction___c_TypeInfo->_2.cctor_finished + 1) )
    {
      j_il2cpp_runtime_class_init_0(BattleLogicFunction___c_TypeInfo, v60);
      v61 = BattleLogicFunction___c_TypeInfo;
    }
    v62 = v61->static_fields;
    _9__81_2 = (System_Func_object__bool__o *)v62->__9__81_2;
    if ( !_9__81_2 )
    {
      if ( !*(&v61->_2.cctor_finished + 1) )
      {
        j_il2cpp_runtime_class_init_0(v61, v60);
        v62 = BattleLogicFunction___c_TypeInfo->static_fields;
      }
      v64 = (Il2CppObject *)v62->__9;
      _9__81_2 = (System_Func_object__bool__o *)sub_2213CCC(System_Func_BattleBuffData_BuffData__bool__TypeInfo);
      System_Func_object__bool____ctor(_9__81_2, v64, Method_BattleLogicFunction___c__ApplySubBuffChanges_b__81_2__, 0);
      v65 = BattleLogicFunction___c_TypeInfo->static_fields;
      v65->__9__81_2 = (struct System_Func_BattleBuffData_BuffData__bool__o *)_9__81_2;
      sub_2213A04((MissionNaviTransitionBoardItem_o *)&v65->__9__81_2, (int32_t)_9__81_2, v66, v67, v68, v69, v70, v71);
    }
    data = (BattleData_o *)BasicHelper__Any_object_(
                             (System_Collections_Generic_List_T__o *)subBuffList,
                             (System_Func_T__bool__o *)_9__81_2,
                             (const MethodInfo_380FDE0 *)Method_BasicHelper_Any_BattleBuffData_BuffData___);
    if ( ((unsigned __int8)data & 1) != 0 )
    {
      v72 = this->fields.data;
      if ( !v72 )
        goto LABEL_80;
      v73 = v72->fields._FieldEnvData_k__BackingField;
      if ( v73 )
        BattleFieldEnvironmentData__UpdateAttachCardBuffTargetCardIndex(v73, *v27, 0);
    }
    data = (BattleData_o *)*v27;
    if ( !*v27 )
LABEL_80:
      sub_2213CDC(data, v19);
    MaxHp_k__BackingField = svtSnapShotOnBuffUpdate->fields._MaxHp_k__BackingField;
    if ( MaxHp_k__BackingField != BattleServantData__getMaxHp((BattleServantData_o *)data, 0) )
    {
      data = (BattleData_o *)*v27;
      if ( !*v27 )
        goto LABEL_80;
      data = (BattleData_o *)BattleServantData__getNowHp((BattleServantData_o *)data, 0);
      if ( !*v27 )
        goto LABEL_80;
      v75 = (int)data;
      Hp_k__BackingField = svtSnapShotOnBuffUpdate->fields._Hp_k__BackingField;
      BattleServantData__ResetBaseHpBuffActivedTimeHealValue(*v27, 0);
      if ( !*v27 )
        goto LABEL_80;
      BattleActionData__addReflectLogicResultServantId(actionData, (*v27)->fields.uniqueId, 0);
      v77 = (BattleActionEffect_SubChangeMaxHpBuff_o *)sub_2213CCC(BattleActionEffect_SubChangeMaxHpBuff_TypeInfo);
      BattleActionEffect_SubChangeMaxHpBuff___ctor(v77, 0);
      data = (BattleData_o *)System_Collections_Generic_List_object___ToArray(
                               (System_Collections_Generic_List_object__o *)subBuffList,
                               (const MethodInfo_4485784 *)Method_System_Collections_Generic_List_BattleBuffData_BuffData__ToArray__);
      if ( !*v27 || !v77 )
        goto LABEL_80;
      v78 = (BattleActionEffect_Base_o *)((__int64 (__fastcall *)(BattleActionEffect_SubChangeMaxHpBuff_o *, BattleData_o *, _QWORD, _QWORD, const MethodInfo *))v77->klass->vtable._7_InitBuff.methodPtr)(
                                           v77,
                                           data,
                                           (unsigned int)(*v27)->fields.uniqueId,
                                           (unsigned int)(v75 - Hp_k__BackingField),
                                           v77->klass->vtable._7_InitBuff.method);
      BattleActionData_BuffData__SetActionEffectProc(FunctionObject, v78, 0);
    }
    v79 = BattleLogicFunction___c_TypeInfo;
    if ( !*(&BattleLogicFunction___c_TypeInfo->_2.cctor_finished + 1) )
    {
      j_il2cpp_runtime_class_init_0(BattleLogicFunction___c_TypeInfo, v19);
      v79 = BattleLogicFunction___c_TypeInfo;
    }
    v80 = v79->static_fields;
    _9__81_3 = (System_Func_object__bool__o *)v80->__9__81_3;
    if ( !_9__81_3 )
    {
      if ( !*(&v79->_2.cctor_finished + 1) )
      {
        j_il2cpp_runtime_class_init_0(v79, v19);
        v80 = BattleLogicFunction___c_TypeInfo->static_fields;
      }
      v82 = (Il2CppObject *)v80->__9;
      _9__81_3 = (System_Func_object__bool__o *)sub_2213CCC(System_Func_BattleBuffData_BuffData__bool__TypeInfo);
      System_Func_object__bool____ctor(_9__81_3, v82, Method_BattleLogicFunction___c__ApplySubBuffChanges_b__81_3__, 0);
      v83 = BattleLogicFunction___c_TypeInfo->static_fields;
      v83->__9__81_3 = (struct System_Func_BattleBuffData_BuffData__bool__o *)_9__81_3;
      sub_2213A04((MissionNaviTransitionBoardItem_o *)&v83->__9__81_3, (int32_t)_9__81_3, v84, v85, v86, v87, v88, v89);
    }
    if ( BasicHelper__Any_object_(
           (System_Collections_Generic_List_T__o *)subBuffList,
           (System_Func_T__bool__o *)_9__81_3,
           (const MethodInfo_380FDE0 *)Method_BasicHelper_Any_BattleBuffData_BuffData___) )
    {
      if ( subBuffList->fields._size >= 1 )
      {
        v90 = 0;
        do
        {
          Item = System_Collections_Generic_List_object___get_Item(
                   (System_Collections_Generic_List_object__o *)subBuffList,
                   v90,
                   (const MethodInfo_4483994 *)Method_System_Collections_Generic_List_BattleBuffData_BuffData__get_Item__);
          if ( Item )
          {
            v92 = Item;
            BuffType = BattleBuffData_BuffData__get_BuffType((BattleBuffData_BuffData_o *)Item, 0);
            if ( !*(&BuffList_TypeInfo->_2.cctor_finished + 1) )
              j_il2cpp_runtime_class_init_0(BuffList_TypeInfo, v93);
            if ( BuffList__CheckUpdateBattlePointMax(BuffType, 0) )
            {
              data = (BattleData_o *)*v27;
              if ( !*v27 )
                goto LABEL_80;
              BattleServantData__MarkBattlePointMaxBuffDeltaDirty(
                (BattleServantData_o *)data,
                HIDWORD(v92[34].klass),
                0);
            }
          }
          ++v90;
        }
        while ( v90 < subBuffList->fields._size );
      }
      v95 = *v27;
      logic = (UnityEngine_Object_o *)this->fields.logic;
      if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v19);
      data = (BattleData_o *)UnityEngine_Object__op_Inequality(logic, 0, 0);
      if ( ((unsigned __int8)data & 1) != 0 )
      {
        v97 = this->fields.logic;
        if ( !v97 )
          goto LABEL_80;
        perf = (UnityEngine_Object_o *)v97->fields.perf;
        if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
          j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v19);
        data = (BattleData_o *)UnityEngine_Object__op_Inequality(perf, 0, 0);
      }
      else
      {
        data = 0;
      }
      if ( v95 )
      {
        BattleServantData__RefreshBattlePointByCurrentStatus(v95, (unsigned __int8)data & 1, 1, 0);
        return;
      }
      goto LABEL_80;
    }
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
  System_String_o *v10; // x2
  System_String_o *v11; // x3
  int32_t v12; // w4
  int32_t v13; // w5
  bool v14; // w6
  bool v15; // w7
  __int64 v16; // x8
  BattleServantData_o *ServantData; // x0
  System_String_o *v18; // x2
  System_String_o *v19; // x3
  int32_t v20; // w4
  int32_t v21; // w5
  bool v22; // w6
  bool v23; // w7
  System_Func_int__int__o *v24; // x20
  System_Collections_Generic_IEnumerable_TSource__o *v25; // x0
  struct System_Int32_array *v26; // x0
  System_String_o *v27; // x2
  System_String_o *v28; // x3
  int32_t v29; // w4
  int32_t v30; // w5
  bool v31; // w6
  bool v32; // w7
  System_Collections_Generic_IEnumerable_TSource__o *v33; // x0
  struct System_Int32_array *v34; // x0
  System_String_o *v35; // x2
  System_String_o *v36; // x3
  int32_t v37; // w4
  int32_t v38; // w5
  bool v39; // w6
  bool v40; // w7

  if ( (byte_5973BAF & 1) == 0 )
  {
    sub_2213A60(&Method_System_Linq_Enumerable_Select_int__int___);
    sub_2213A60(&Method_System_Linq_Enumerable_ToArray_int___);
    sub_2213A60(&System_Func_int__int__TypeInfo);
    sub_2213A60(&Method_BattleLogicFunction___c__DisplayClass79_0__BehaveLinkageBuffAsFamily_b__0__);
    sub_2213A60(&BattleLogicFunction___c__DisplayClass79_0_TypeInfo);
    byte_5973BAF = 1;
  }
  v7 = sub_2213CCC(BattleLogicFunction___c__DisplayClass79_0_TypeInfo);
  BattleLogicFunction___c__DisplayClass79_0___ctor((BattleLogicFunction___c__DisplayClass79_0_o *)v7, 0);
  if ( !v7 )
    goto LABEL_13;
  *(_QWORD *)(v7 + 16) = funcTarget;
  sub_2213A04((MissionNaviTransitionBoardItem_o *)(v7 + 16), (int32_t)funcTarget, v10, v11, v12, v13, v14, v15);
  v16 = *(_QWORD *)(v7 + 16);
  if ( !v16 )
    goto LABEL_13;
  data = this->fields.data;
  if ( !data )
    goto LABEL_13;
  ServantData = BattleData__getServantData(data, *(_DWORD *)(v16 + 32), 0);
  *(_QWORD *)(v7 + 24) = ServantData;
  sub_2213A04((MissionNaviTransitionBoardItem_o *)(v7 + 24), (int32_t)ServantData, v18, v19, v20, v21, v22, v23);
  if ( !*(_QWORD *)(v7 + 24) )
    return;
  v24 = (System_Func_int__int__o *)sub_2213CCC(System_Func_int__int__TypeInfo);
  System_Func_int__int____ctor(
    v24,
    (Il2CppObject *)v7,
    Method_BattleLogicFunction___c__DisplayClass79_0__BehaveLinkageBuffAsFamily_b__0__,
    0);
  if ( !buffData )
LABEL_13:
    sub_2213CDC(data, v9);
  if ( !BasicHelper__IsNullOrEmpty((System_Collections_ICollection_o *)buffData->fields.addIndividualty, 0) )
  {
    v25 = (System_Collections_Generic_IEnumerable_TSource__o *)System_Linq_Enumerable__Select_int__int_(
                                                                 (System_Collections_Generic_IEnumerable_TSource__o *)buffData->fields.addIndividualty,
                                                                 (System_Func_TSource__TResult__o *)v24,
                                                                 (const MethodInfo_388D7F0 *)Method_System_Linq_Enumerable_Select_int__int___);
    v26 = System_Linq_Enumerable__ToArray_int_(
            v25,
            (const MethodInfo_389B994 *)Method_System_Linq_Enumerable_ToArray_int___);
    buffData->fields.familyLinkageIds = v26;
    sub_2213A04(
      (MissionNaviTransitionBoardItem_o *)&buffData->fields.familyLinkageIds,
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
                                                                 (const MethodInfo_388D7F0 *)Method_System_Linq_Enumerable_Select_int__int___);
    v34 = System_Linq_Enumerable__ToArray_int_(
            v33,
            (const MethodInfo_389B994 *)Method_System_Linq_Enumerable_ToArray_int___);
    buffData->fields.linkageTargetIndividualty = v34;
    sub_2213A04(
      (MissionNaviTransitionBoardItem_o *)&buffData->fields.linkageTargetIndividualty,
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
  __int64 v11; // x9
  __int64 v12; // x9
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
      v11 = *((_QWORD *)this + 39);
      if ( v11 )
      {
        if ( (signed int)v10 >= *(_DWORD *)(v11 + 24) )
          v10 = 1;
        goto LABEL_14;
      }
    }
LABEL_21:
    sub_2213CDC(this, baseVals);
  }
  this = (BattleLogicFunction_o *)this->fields.data;
  if ( !this )
    goto LABEL_21;
  v10 = 1;
LABEL_14:
  v12 = *((_QWORD *)this + 39);
  if ( !v12 )
    goto LABEL_21;
  if ( v10 >= *(_DWORD *)(v12 + 24) )
LABEL_22:
    sub_2213CE4(this);
  v13 = *(_DWORD *)(v12 + 4LL * v10 + 32);
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
  struct BattleData_o *data; // x23
  struct BattleFieldEnvironmentData_o *FieldEnvData_k__BackingField; // x22
  int32_t id; // w24
  Generator_BGMFromChangeBGMFunc_o *v10; // x21
  __int64 v11; // x1
  UnityEngine_Object_o *logic; // x20

  v6 = this;
  if ( (byte_5973BE0 & 1) == 0 )
  {
    sub_2213A60(&Generator_BGMFromChangeBGMFunc_TypeInfo);
    this = (BattleLogicFunction_o *)sub_2213A60(&UnityEngine_Object_TypeInfo);
    byte_5973BE0 = 1;
  }
  data = v6->fields.data;
  if ( bgmEnt )
  {
    if ( !data )
      goto LABEL_17;
    FieldEnvData_k__BackingField = data->fields._FieldEnvData_k__BackingField;
    id = bgmEnt->fields.id;
    v10 = (Generator_BGMFromChangeBGMFunc_o *)sub_2213CCC(Generator_BGMFromChangeBGMFunc_TypeInfo);
    Generator_BGMFromChangeBGMFunc___ctor(v10, data, id, baseVals, 1, 0);
    if ( !FieldEnvData_k__BackingField )
      goto LABEL_17;
    ((void (__fastcall *)(struct BattleFieldEnvironmentData_o *, Generator_BGMFromChangeBGMFunc_o *, __int64, _QWORD, const MethodInfo *))FieldEnvData_k__BackingField->klass->vtable._6_AddBGM.methodPtr)(
      FieldEnvData_k__BackingField,
      v10,
      2,
      0,
      FieldEnvData_k__BackingField->klass->vtable._6_AddBGM.method);
  }
  else
  {
    if ( !data )
      goto LABEL_17;
    this = (BattleLogicFunction_o *)data->fields._FieldEnvData_k__BackingField;
    if ( !this )
      goto LABEL_17;
    ((void (__fastcall *)(BattleLogicFunction_o *, _QWORD, DataVals_o *, const MethodInfo *))this->klass[1]._1.this_arg.data)(
      this,
      *(_QWORD *)&this->klass[1]._1.this_arg.bits,
      baseVals,
      method);
  }
  logic = (UnityEngine_Object_o *)v6->fields.logic;
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v11);
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
LABEL_17:
    sub_2213CDC(this, bgmEnt);
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
  int32_t *v24; // x8
  Il2CppObject *entity; // [xsp+8h] [xbp-58h] BYREF

  if ( (byte_5973BDF & 1) == 0 )
  {
    sub_2213A60(&Method_System_Array_IndexOf_int___);
    sub_2213A60(&CondType_TypeInfo);
    sub_2213A60(&Method_DataManager_GetMasterData_BgmMaster___);
    sub_2213A60(&Method_DataManager_GetMasterData_SkillLvMaster___);
    sub_2213A60(&Method_DataMasterBase_BgmMaster__BgmEntity__int__TryGetEntity__);
    sub_2213A60(&Method_System_Collections_Generic_List_SkillLvEntity_SvtChangeBgm__get_Count__);
    sub_2213A60(&Method_System_Collections_Generic_List_SkillLvEntity_SvtChangeBgm__get_Item__);
    sub_2213A60(&Method_SingletonMonoBehaviour_DataManager__getInstance__);
    sub_2213A60(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_5973BDF = 1;
  }
  result = 0;
  entity = 0;
  if ( uniqueID != -1 && actionData )
  {
    v9 = *((_QWORD *)Method_SingletonMonoBehaviour_DataManager__getInstance__ + 4);
    if ( (*(_WORD *)(v9 + 309) & 1) == 0 )
      v9 = sub_224B908(v4);
    v10 = *(_QWORD *)(*(_QWORD *)(v9 + 192) + 16LL);
    if ( (*(_WORD *)(v10 + 309) & 1) == 0 )
      v10 = sub_224B908(v4);
    MasterData_object = **(_QWORD ***)(v10 + 184);
    if ( !MasterData_object )
      goto LABEL_36;
    MasterData_object = DataManager__GetMasterData_object_(
                          (DataManager_o *)MasterData_object,
                          (const MethodInfo_385636C *)Method_DataManager_GetMasterData_SkillLvMaster___);
    skillInfo = actionData->fields.skillInfo;
    if ( !skillInfo )
      goto LABEL_36;
    v13 = (SkillLvMaster_o *)MasterData_object;
    MasterData_object = ((_QWORD *(__fastcall *)(struct BattleSkillInfoData_o *__return_ptr, struct BattleSkillInfoData_o *, const MethodInfo *))skillInfo->klass->vtable._5_get_skillId.methodPtr)(
                          skillInfo,
                          actionData->fields.skillInfo,
                          skillInfo->klass->vtable._5_get_skillId.method);
    v14 = actionData->fields.skillInfo;
    if ( !v14 )
      goto LABEL_36;
    if ( !v13 )
      goto LABEL_36;
    v15 = SkillLvMaster__GetEntity(v13, (int32_t)MasterData_object, v14->fields.skilllv, 0);
    MasterData_object = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_47A29F8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !MasterData_object )
      goto LABEL_36;
    MasterData_object = DataManager__GetMasterData_object_(
                          (DataManager_o *)MasterData_object,
                          (const MethodInfo_385636C *)Method_DataManager_GetMasterData_BgmMaster___);
    if ( !v15 )
      goto LABEL_36;
    v16 = (DataMasterBase_TMaster__TEntity__PKType__o *)MasterData_object;
    MasterData_object = SkillLvEntity__GetSvtChangeBgm(v15, 0);
    data = this->fields.data;
    if ( !data )
      goto LABEL_36;
    v18 = (System_Collections_Generic_List_object__o *)MasterData_object;
    MasterData_object = BattleData__getPlayerServantData(data, uniqueID, 0);
    if ( !MasterData_object )
      goto LABEL_36;
    MasterData_object = BattleServantData__getIndividualities((BattleServantData_o *)MasterData_object, 0, 1, 0, 1, 0);
    if ( !v18 )
      goto LABEL_36;
    if ( v18->fields._size >= 1 )
    {
      v19 = (System_Int32_array *)MasterData_object;
      v20 = 0;
      while ( 1 )
      {
        MasterData_object = System_Collections_Generic_List_object___get_Item(
                              v18,
                              v20,
                              (const MethodInfo_4483994 *)Method_System_Collections_Generic_List_SkillLvEntity_SvtChangeBgm__get_Item__);
        if ( !MasterData_object )
          break;
        if ( System_Array__IndexOf_int_(
               v19,
               *((_DWORD *)MasterData_object + 4),
               (const MethodInfo_3A2E554 *)Method_System_Array_IndexOf_int___) != -1 )
        {
          MasterData_object = System_Collections_Generic_List_object___get_Item(
                                v18,
                                v20,
                                (const MethodInfo_4483994 *)Method_System_Collections_Generic_List_SkillLvEntity_SvtChangeBgm__get_Item__);
          if ( !MasterData_object )
            break;
          v21 = *((_DWORD *)MasterData_object + 5);
          MasterData_object = System_Collections_Generic_List_object___get_Item(
                                v18,
                                v20,
                                (const MethodInfo_4483994 *)Method_System_Collections_Generic_List_SkillLvEntity_SvtChangeBgm__get_Item__);
          if ( !MasterData_object )
            break;
          v22 = *((int *)MasterData_object + 6);
          if ( !*(&CondType_TypeInfo->_2.cctor_finished + 1) )
            j_il2cpp_runtime_class_init_0(CondType_TypeInfo, *(_QWORD *)&uniqueID);
          IsOpen = CondType__IsOpen(46, v21, v22, 0, 0, 0);
          MasterData_object = System_Collections_Generic_List_object___get_Item(
                                v18,
                                v20,
                                (const MethodInfo_4483994 *)Method_System_Collections_Generic_List_SkillLvEntity_SvtChangeBgm__get_Item__);
          if ( IsOpen )
          {
            if ( !MasterData_object )
              break;
            v24 = (int32_t *)(MasterData_object + 4);
          }
          else
          {
            if ( !MasterData_object )
              break;
            v24 = (int32_t *)MasterData_object + 7;
          }
          if ( !v16 )
            break;
          if ( DataMasterBase_object__object__int___TryGetEntity(
                 v16,
                 &entity,
                 *v24,
                 (const MethodInfo_3F10B80 *)Method_DataMasterBase_BgmMaster__BgmEntity__int__TryGetEntity__) )
          {
            return (BgmEntity_o *)entity;
          }
        }
        if ( ++v20 >= v18->fields._size )
          return (BgmEntity_o *)entity;
      }
LABEL_36:
      sub_2213CDC(MasterData_object, *(_QWORD *)&uniqueID);
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
  int32_t Param; // w26
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

  if ( (byte_5973BF0 & 1) == 0 )
  {
    this = (BattleLogicFunction_o *)sub_2213A60(&BattleBuffData_CheckIndividualitiesData_TypeInfo);
    byte_5973BF0 = 1;
  }
  isResisted[0] = 0;
  if ( !baseVals )
LABEL_23:
    sub_2213CDC(this, actionSvtData);
  Param = DataVals__GetParam(baseVals, 0, 0, 0);
  this = (BattleLogicFunction_o *)DataVals__GetParam(baseVals, 246, 0, 0);
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
  if ( uniqueId == targetSvtData->fields.uniqueId && DataVals__GetParam(baseVals, 60, 0, 0) >= 1 )
  {
    *seedRate = 0;
    *baseRate = 1000;
    return;
  }
  BuffData = BattleServantData__get_BuffData(targetSvtData, 0);
  v21 = (BattleBuffData_CheckIndividualitiesData_o *)sub_2213CCC(BattleBuffData_CheckIndividualitiesData_TypeInfo);
  BattleBuffData_CheckIndividualitiesData___ctor_52826232(v21, targetSvtData, actionSvtData, 0, 0, 0, 0, 1, 0);
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
  BattleActionData_BuffData_o *IsImmediateMasterPopupEnabled; // x0
  __int64 v14; // x1
  const MethodInfo *v15; // x6

  if ( (byte_5973BE7 & 1) == 0 )
  {
    sub_2213A60(&BattleActionData_MasterBuffData_TypeInfo);
    byte_5973BE7 = 1;
  }
  v12 = (BattleActionData_MasterBuffData_o *)sub_2213CCC(BattleActionData_MasterBuffData_TypeInfo);
  BattleActionData_MasterBuffData___ctor(v12, funcEnt, 0);
  if ( !baseVals
    || (IsImmediateMasterPopupEnabled = (BattleActionData_BuffData_o *)DataVals__IsImmediateMasterPopupEnabled(
                                                                         baseVals,
                                                                         0),
        !v12)
    || (v12->fields._ShowDuringNoblePhantasm_k__BackingField = (unsigned __int8)IsImmediateMasterPopupEnabled & 1,
        IsImmediateMasterPopupEnabled = BattleLogicFunction__getFunctionObject(
                                          (BattleLogicFunction_o *)IsImmediateMasterPopupEnabled,
                                          funcEnt,
                                          -1,
                                          index,
                                          isCommandSideEffect,
                                          (BattleActionData_BuffData_o *)v12,
                                          v15),
        !action) )
  {
    sub_2213CDC(IsImmediateMasterPopupEnabled, v14);
  }
  BattleActionData__setBuffData(action, IsImmediateMasterPopupEnabled, baseVals, 0, 0);
}


void BattleLogicFunction__DebugLog(BattleLogicFunction_o *this, System_String_o *str, const MethodInfo *method)
{
  ;
}


void BattleLogicFunction__FlushDeferredBattleValues(
        BattleLogicFunction_o *this,
        BattleActionData_o *mainAction,
        const MethodInfo *method)
{
  System_Action_int__int__bool__o *v5; // x21

  if ( (byte_5973BE9 & 1) == 0 )
  {
    sub_2213A60(&System_Action_int__int__bool__TypeInfo);
    sub_2213A60(&Method_BattleLogicFunction__FlushDeferredBattleValues_b__147_0__);
    byte_5973BE9 = 1;
  }
  if ( mainAction )
  {
    if ( BattleActionData__get_HasDeferredBattleValueApply(mainAction, 0) )
    {
      v5 = (System_Action_int__int__bool__o *)sub_2213CCC(System_Action_int__int__bool__TypeInfo);
      System_Action_int__int__bool____ctor(
        v5,
        (Il2CppObject *)this,
        Method_BattleLogicFunction__FlushDeferredBattleValues_b__147_0__,
        0);
      BattleActionData__FlushDeferredBattleValueApply(mainAction, v5, 0);
    }
  }
}


void BattleLogicFunction__FunctionAddBattleMissionValue(
        BattleLogicFunction_o *this,
        FunctionEntity_o *funcEnt,
        const MethodInfo *method)
{
  BattleData_o *IsExistBattleMissionValueInMasterData; // x0
  __int64 v6; // x1
  int32_t v7; // w21
  int32_t battleValueKey[2]; // [xsp+0h] [xbp-30h] BYREF
  __int64 value; // [xsp+8h] [xbp-28h] BYREF

  *(_QWORD *)battleValueKey = 0;
  value = 0;
  IsExistBattleMissionValueInMasterData = (BattleData_o *)BattleLogicFunction__IsExistBattleMissionValueInMasterData(
                                                            funcEnt,
                                                            (const MethodInfo *)funcEnt);
  if ( ((unsigned __int8)IsExistBattleMissionValueInMasterData & 1) != 0 )
  {
    if ( !funcEnt )
      goto LABEL_12;
    if ( FunctionEntity__TryGetValsKeyValuePair(funcEnt, 0, (int32_t *)&value + 1, (int32_t *)&value, 0) )
    {
      v7 = 1;
      while ( 1 )
      {
        if ( FunctionEntity__IsToQuoteBattleValue(funcEnt, &battleValueKey[1], 0) )
        {
          IsExistBattleMissionValueInMasterData = this->fields.data;
          if ( !IsExistBattleMissionValueInMasterData )
            break;
          if ( BattleData__TryGetBattleValue(
                 IsExistBattleMissionValueInMasterData,
                 battleValueKey[1],
                 battleValueKey,
                 0) )
          {
            LODWORD(value) = battleValueKey[0];
          }
        }
        IsExistBattleMissionValueInMasterData = this->fields.data;
        if ( !IsExistBattleMissionValueInMasterData )
          break;
        BattleData__AddBattleMissionValue(IsExistBattleMissionValueInMasterData, SHIDWORD(value), value, 0);
        if ( !FunctionEntity__TryGetValsKeyValuePair(funcEnt, v7++, (int32_t *)&value + 1, (int32_t *)&value, 0) )
          return;
      }
LABEL_12:
      sub_2213CDC(IsExistBattleMissionValueInMasterData, v6);
    }
  }
}


BattleActionData_o *BattleLogicFunction__FunctionAddBattlePoint(
        BattleLogicFunction_o *this,
        BattleLogicFunction_ProcListInArgs_o *procArg,
        int32_t targetId,
        DataVals_o *baseVals,
        bool isSub,
        const MethodInfo *method)
{
  BattleData_o *data; // x0
  BattleServantData_o *v12; // x21
  BattleActionData_o *v13; // x24
  int32_t Param; // w22
  int32_t v15; // w24
  bool v16; // w3
  bool v17; // w24
  BattlePointData_o *BattlePointData; // x0
  bool v19; // w25
  int v20; // w23
  int v21; // w24
  FunctionEntity_o *funcEnt; // x22
  int32_t uniqueId; // w21
  int32_t funcIndex; // w23
  _BOOL8 IsCommandSideEffect; // x0
  const MethodInfo *v26; // x6
  BattleActionData_BuffData_o *FunctionObject; // x20

  if ( (byte_5973BEA & 1) == 0 )
  {
    sub_2213A60(&BattleActionData_TypeInfo);
    byte_5973BEA = 1;
  }
  data = this->fields.data;
  if ( !data )
    goto LABEL_25;
  data = (BattleData_o *)BattleData__getServantData(data, targetId, 0);
  if ( !data )
    goto LABEL_25;
  v12 = (BattleServantData_o *)data;
  data = (BattleData_o *)BattleServantData__checkPlayer((BattleServantData_o *)data, 0);
  v13 = 0;
  if ( ((unsigned __int8)data & 1) != 0 )
  {
    if ( !baseVals )
      goto LABEL_25;
    Param = DataVals__GetParam(baseVals, 176, 0, 0);
    v15 = DataVals__GetParam(baseVals, 177, 0, 0);
    v16 = DataVals__GetParam(baseVals, 179, 0, 0) != 0;
    v17 = BattleServantData__AddBattlePoint(v12, Param, v15, v16, isSub, 0);
    BattlePointData = BattleServantData__GetBattlePointData(v12, Param, 0);
    v19 = !BattlePointData || BattlePointData->fields._IsShowedEffectAfterLastChanged_k__BackingField;
    data = (BattleData_o *)DataVals__GetParam(baseVals, 178, 0, 0);
    v20 = (int)data;
    if ( v17 || (_DWORD)data == 1 )
      goto LABEL_13;
    if ( !procArg )
      goto LABEL_25;
    v13 = 0;
    if ( !(v19 | !BattleLogicFunction_ProcListInArgs__get_IsShowBattlePointEffect(procArg, 0)) )
    {
LABEL_13:
      data = (BattleData_o *)BattleServantData__GetBattlePointData(v12, Param, 0);
      if ( data )
        BattlePointData__NotifyShowedEffect((BattlePointData_o *)data, 0);
      if ( v20 == 1 )
      {
        if ( !procArg )
          goto LABEL_25;
        v21 = 1;
      }
      else
      {
        if ( !procArg )
          goto LABEL_25;
        if ( BattleLogicFunction_ProcListInArgs__get_IsShowBattlePointEffect(procArg, 0) )
          v21 = v20;
        else
          v21 = 1;
      }
      funcEnt = baseVals->fields.funcEnt;
      uniqueId = v12->fields.uniqueId;
      funcIndex = baseVals->fields.funcIndex;
      IsCommandSideEffect = BattleLogicFunction_ProcListInArgs__get_IsCommandSideEffect(procArg, 0);
      FunctionObject = BattleLogicFunction__getFunctionObject(
                         (BattleLogicFunction_o *)IsCommandSideEffect,
                         funcEnt,
                         uniqueId,
                         funcIndex,
                         IsCommandSideEffect,
                         0,
                         v26);
      FunctionObject->fields.isShowBattlePointEffect = 1;
      FunctionObject->fields.battlePointUiUpdateType = v21;
      v13 = (BattleActionData_o *)sub_2213CCC(BattleActionData_TypeInfo);
      BattleActionData___ctor(v13, 0);
      if ( v13 )
      {
        BattleActionData__setBuffData(v13, FunctionObject, baseVals, 0, 0);
        return v13;
      }
LABEL_25:
      sub_2213CDC(data, procArg);
    }
  }
  return v13;
}


// local variable allocation has failed, the output may be wrong!
void BattleLogicFunction__FunctionAddBattleValue(
        BattleLogicFunction_o *this,
        int32_t actorId,
        FunctionEntity_o *funcEnt,
        BattleLogicFunction_ProcListInArgs_o *procArgs,
        const MethodInfo *method)
{
  BattleServantData_o *IsExistBattleValueInMasterData; // x0
  __int64 v10; // x1
  unsigned __int8 v11; // w23
  const MethodInfo *v12; // x5
  struct System_Int32_array *vals; // x8
  BattleServantData_o *v14; // x24
  unsigned int v15; // w9
  unsigned int max_length; // w10
  unsigned int v17; // w27
  int32_t v18; // w25
  int32_t DealtDamage; // w0
  System_Collections_Generic_List_int____o *DealtDamageSpritList_k__BackingField; // x2
  int32_t v21; // w26
  int32_t valueTargetType; // [xsp+Ch] [xbp-54h] BYREF

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
      || (v11 = (unsigned __int8)IsExistBattleValueInMasterData,
          IsExistBattleValueInMasterData = BattleData__getServantData(this->fields.data, actorId, 0),
          (vals = funcEnt->fields.vals) == 0) )
    {
LABEL_20:
      sub_2213CDC(IsExistBattleValueInMasterData, v10);
    }
    v14 = IsExistBattleValueInMasterData;
    v15 = 0;
    while ( 1 )
    {
      max_length = vals->max_length;
      if ( (int)v15 >= (int)max_length )
        return;
      if ( v15 >= max_length || (v17 = v15 + 1, v15 + 1 >= max_length) )
        sub_2213CE4(IsExistBattleValueInMasterData);
      v18 = vals->m_Items[v15];
      if ( (v11 & (valueTargetType == 1)) != 1 )
        break;
      IsExistBattleValueInMasterData = (BattleServantData_o *)BattleLogicFunction__TryRegisterDeferredBattleValue(
                                                                (BattleLogicFunction_o *)IsExistBattleValueInMasterData,
                                                                procArgs,
                                                                v18,
                                                                actorId,
                                                                1,
                                                                v12);
      if ( ((unsigned __int8)IsExistBattleValueInMasterData & 1) == 0 )
      {
        if ( v14 )
        {
          DealtDamage = BattleServantData__get_DealtDamage(v14, 0);
          DealtDamageSpritList_k__BackingField = v14->fields._DealtDamageSpritList_k__BackingField;
          v21 = DealtDamage;
        }
        else
        {
          v21 = 0;
          DealtDamageSpritList_k__BackingField = 0;
        }
        IsExistBattleValueInMasterData = (BattleServantData_o *)this->fields.data;
        if ( !IsExistBattleValueInMasterData )
          goto LABEL_20;
        BattleData__SetSplitBattleValueForExBattleUi(
          (BattleData_o *)IsExistBattleValueInMasterData,
          v18,
          DealtDamageSpritList_k__BackingField,
          0);
        goto LABEL_17;
      }
LABEL_19:
      vals = funcEnt->fields.vals;
      v15 = v17 + 1;
      if ( !vals )
        goto LABEL_20;
    }
    v21 = vals->m_Items[v17];
LABEL_17:
    IsExistBattleValueInMasterData = (BattleServantData_o *)this->fields.data;
    if ( !IsExistBattleValueInMasterData )
      goto LABEL_20;
    BattleData__AddBattleValue((BattleData_o *)IsExistBattleValueInMasterData, v18, v21, 0);
    goto LABEL_19;
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
  BattleServantData_o *v9; // x22
  DataVals_o *dataVals_k__BackingField; // x21
  BattleLogicFunction_ProcListInArgs_o *procArg_k__BackingField; // x23
  BattleActionData_ChangeModelActionData_o *v12; // x24
  FunctionEntity_o *funcEnt; // x22
  int32_t funcIndex; // w24
  _BOOL8 IsCommandSideEffect; // x0
  const MethodInfo *v16; // x6
  BattleActionData_BuffData_o *FunctionObject; // x1

  v6 = this;
  if ( (byte_5973BC1 & 1) == 0 )
  {
    this = (BattleLogicFunction_o *)sub_2213A60(&BattleActionData_ChangeModelActionData_TypeInfo);
    byte_5973BC1 = 1;
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
    v12 = (BattleActionData_ChangeModelActionData_o *)sub_2213CCC(BattleActionData_ChangeModelActionData_TypeInfo);
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
      sub_2213CDC(this, mainAction);
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
  __int64 v12; // x1
  UnityEngine_Object_o *logic; // x21
  struct BattleLogicFunction_FunctionArgument_o *externalArg; // x8

  v10 = this;
  if ( (byte_5973BE2 & 1) == 0 )
  {
    this = (BattleLogicFunction_o *)sub_2213A60(&UnityEngine_Object_TypeInfo);
    byte_5973BE2 = 1;
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
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v12);
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
    sub_2213CDC(this, args);
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
    goto LABEL_12;
  if ( !data->fields.enemyMasterInfo )
    return;
  v4 = this;
  this = (BattleLogicFunction_o *)data->fields.perf;
  if ( faceId < 1 )
  {
    if ( this )
    {
      BattlePerformance__HideEnemyMaster((BattlePerformance_o *)this, 0);
      v6 = v4->fields.data;
      if ( v6 )
      {
        v7 = -1;
        goto LABEL_10;
      }
    }
LABEL_12:
    sub_2213CDC(this, *(_QWORD *)&faceId);
  }
  if ( !this )
    goto LABEL_12;
  BattlePerformance__ChangeEnemyMasterFace((BattlePerformance_o *)this, faceId, 0);
  v6 = v4->fields.data;
  if ( !v6 )
    goto LABEL_12;
  v6->fields.enemyMasterChangedFaceId = faceId;
  v7 = 1;
LABEL_10:
  v6->fields.enemyMasterDispStatus = v7;
}


// local variable allocation has failed, the output may be wrong!
void BattleLogicFunction__FunctionChangeEnemyStatusUiType(
        BattleLogicFunction_o *this,
        int32_t param,
        const MethodInfo *method)
{
  BattleData_o *data; // x0

  data = this->fields.data;
  if ( !data )
    sub_2213CDC(0, *(_QWORD *)&param);
  BattleData__ChangeEnemyPosType(data, param, 0);
}


// local variable allocation has failed, the output may be wrong!
void BattleLogicFunction__FunctionChangeMasterFace(
        BattleLogicFunction_o *this,
        int32_t faceId,
        const MethodInfo *method)
{
  struct BattleData_o *data; // x8

  data = this->fields.data;
  if ( faceId >= 1 )
  {
    if ( data )
    {
      this = (BattleLogicFunction_o *)data->fields.perf;
      data->fields.masterChangedFaceId = faceId;
      data->fields.masterDispStatus = 1;
      if ( this )
      {
        BattlePerformance__ChangeMasterFace((BattlePerformance_o *)this, faceId, 0);
        return;
      }
    }
LABEL_8:
    sub_2213CDC(this, *(_QWORD *)&faceId);
  }
  if ( !data )
    goto LABEL_8;
  this = (BattleLogicFunction_o *)data->fields.perf;
  data->fields.masterDispStatus = -1;
  if ( !this )
    goto LABEL_8;
  BattlePerformance__HideMaster((BattlePerformance_o *)this, 0);
}


// local variable allocation has failed, the output may be wrong!
void BattleLogicFunction__FunctionEnableMasterCommandSpell(
        BattleLogicFunction_o *this,
        int32_t enable,
        const MethodInfo *method)
{
  struct BattleData_o *data; // x8
  int v4; // w9

  data = this->fields.data;
  if ( enable < 1 )
  {
    if ( !data )
      goto LABEL_8;
    v4 = -1;
  }
  else
  {
    if ( !data )
      goto LABEL_8;
    v4 = 1;
  }
  this = (BattleLogicFunction_o *)data->fields.perf;
  data->fields.masterCommandSpellDispStatus = v4;
  if ( !this )
LABEL_8:
    sub_2213CDC(this, *(_QWORD *)&enable);
  BattlePerformance__UpdateCommandSpell((BattlePerformance_o *)this, 0);
}


// local variable allocation has failed, the output may be wrong!
void BattleLogicFunction__FunctionEnableMasterSkill(
        BattleLogicFunction_o *this,
        int32_t enable,
        const MethodInfo *method)
{
  struct BattleData_o *data; // x8
  int v4; // w9

  data = this->fields.data;
  if ( enable < 1 )
  {
    if ( !data )
      goto LABEL_8;
    v4 = -1;
  }
  else
  {
    if ( !data )
      goto LABEL_8;
    v4 = 1;
  }
  this = (BattleLogicFunction_o *)data->fields.perf;
  data->fields.masterSkillDispStatus = v4;
  if ( !this )
LABEL_8:
    sub_2213CDC(this, *(_QWORD *)&enable);
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
  int32_t SelectAddIndex_k__BackingField; // w1
  bool v16; // w26
  BattleLogicFunction_OnlyCheckFuncSideEffectFunctionArgument_o *v17; // x23
  struct BattleLogic_o *logic; // x8
  BattleLogicSkill_o *logicSkill; // x25
  System_String_o *v20; // x2
  System_String_o *v21; // x3
  int32_t v22; // w4
  int32_t v23; // w5
  bool v24; // w6
  bool v25; // w7
  int v26; // w8
  BattleLogicFunction_o *v27; // x24
  unsigned int v28; // w27
  __int64 v29; // x25
  struct BattleLogic_o *v30; // x8
  BattleActionData_o *v31; // x25
  BattleLogicFunction_FuncSideEffectFunctionArgument_o *FuncSideEffectArg; // x0
  BattleActionData_o *baseActionData; // [xsp+18h] [xbp-58h] BYREF

  v8 = this;
  if ( (byte_5973BE6 & 1) == 0 )
  {
    sub_2213A60(&BattleSkillInfoData_TypeInfo);
    sub_2213A60(&int___TypeInfo);
    this = (BattleLogicFunction_o *)sub_2213A60(&BattleLogicFunction_OnlyCheckFuncSideEffectFunctionArgument_TypeInfo);
    byte_5973BE6 = 1;
  }
  data = v8->fields.data;
  baseActionData = 0;
  if ( !data )
    goto LABEL_32;
  if ( !data->fields._lastUsedPlayerSkillInfo_k__BackingField )
    return;
  v10 = (BattleSkillInfoData_o *)sub_2213CCC(BattleSkillInfoData_TypeInfo);
  BattleSkillInfoData___ctor(v10, 0);
  if ( !actionData )
    goto LABEL_32;
  if ( !v10 )
    goto LABEL_32;
  v11 = v8->fields.data;
  v10->fields.svtUniqueId = actionData->fields.actorId;
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
  SelectAddIndex_k__BackingField = lastUsedPlayerSkillInfo_k__BackingField->fields._SelectAddIndex_k__BackingField;
  v10->fields.skilllv = lastUsedPlayerSkillInfo_k__BackingField->fields.skilllv;
  BattleSkillInfoData__UpdateSelectAddIndex(v10, SelectAddIndex_k__BackingField, 0);
  if ( !args )
    goto LABEL_32;
  this = (BattleLogicFunction_o *)BattleLogicFunction_ProcListInArgs__get_FuncSideEffectArg(args, 0);
  v16 = this != 0;
  if ( this )
  {
    v17 = (BattleLogicFunction_OnlyCheckFuncSideEffectFunctionArgument_o *)sub_2213CCC(BattleLogicFunction_OnlyCheckFuncSideEffectFunctionArgument_TypeInfo);
    BattleLogicFunction_OnlyCheckFuncSideEffectFunctionArgument___ctor(v17, 0);
  }
  else
  {
    v17 = 0;
  }
  logic = v8->fields.logic;
  if ( !logic )
    goto LABEL_32;
  logicSkill = logic->fields.logicSkill;
  this = (BattleLogicFunction_o *)sub_2213B20(int___TypeInfo, 1);
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
    sub_2213CDC(this, actionData);
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
      *(_QWORD *)(v29 + 200) = v17;
      *(_BYTE *)(v29 + 193) = v16;
      sub_2213A04((MissionNaviTransitionBoardItem_o *)(v29 + 200), (int32_t)v17, v20, v21, v22, v23, v24, v25);
      v30 = v8->fields.logic;
      if ( !v30 )
        goto LABEL_32;
      this = (BattleLogicFunction_o *)v30->fields.logicSkill;
      if ( !this )
        goto LABEL_32;
      v31 = BattleLogicSkill__createSkillData_54261512(
              (BattleLogicSkill_o *)this,
              (BattleLogicTask_o *)v29,
              1,
              baseVals,
              &baseActionData,
              0);
      BattleActionData__addAction(actionData, v31, 0);
      if ( v31 )
        actionData->fields.isSuccessSkillCopyFunction = 1;
      v26 = (int)v27->fields.logic;
      if ( (int)++v28 >= v26 )
        goto LABEL_29;
    }
LABEL_33:
    sub_2213CE4(this);
  }
LABEL_29:
  FuncSideEffectArg = BattleLogicFunction_ProcListInArgs__get_FuncSideEffectArg(args, 0);
  if ( FuncSideEffectArg )
    BattleLogicFunction_FuncSideEffectFunctionArgument__AddTarget_54125384(
      FuncSideEffectArg,
      (BattleLogicFunction_FuncSideEffectFunctionArgument_o *)v17,
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
  int32_t SubServantUsableDeckIndex; // w0
  MoveToSubMemberWaveTurnEvent_c *v13; // x8
  BattleData_o *data; // x24
  MoveToSubMemberWaveTurnEvent_o *v15; // x25
  bool v16; // w24
  int32_t v17; // w0
  int32_t uniqueId; // w25
  int32_t v19; // w26
  RestockServantLogicByMoveToSubMember_o *v20; // x23
  BattleActionData_o *v21; // x21

  v9 = this;
  if ( (byte_5973BBF & 1) == 0 )
  {
    sub_2213A60(&Method_BasicHelper_IndexValue_int____91713824);
    sub_2213A60(&BattleActionData_TypeInfo);
    sub_2213A60(&MoveToSubMemberWaveTurnEvent_TypeInfo);
    this = (BattleLogicFunction_o *)sub_2213A60(&RestockServantLogicByMoveToSubMember_TypeInfo);
    byte_5973BBF = 1;
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
  BattleData__SubBuffFromPT_52954552((BattleData_o *)this, targetServantData, 0);
  this = (BattleLogicFunction_o *)v9->fields.data;
  if ( !this )
    goto LABEL_13;
  BattleData__SubBuffExitSvt((BattleData_o *)this, targetServantData, 0);
  this = (BattleLogicFunction_o *)v9->fields.data;
  if ( !this )
    goto LABEL_13;
  SubServantUsableDeckIndex = BattleData__GetSubServantUsableDeckIndex((BattleData_o *)this, isEnemy, 0);
  v13 = MoveToSubMemberWaveTurnEvent_TypeInfo;
  data = v9->fields.data;
  targetServantData->fields.deckIndex = SubServantUsableDeckIndex;
  v15 = (MoveToSubMemberWaveTurnEvent_o *)sub_2213CCC(v13);
  MoveToSubMemberWaveTurnEvent___ctor(v15, data, 0);
  BattleServantData__RegisterWaveTurnEvent(targetServantData, (ServantWaveTurnEvent_o *)v15, 0);
  if ( !funcEnt )
    goto LABEL_13;
  v16 = isEnemy;
  v17 = BasicHelper__IndexValue_int_(
          funcEnt->fields.vals,
          0,
          0,
          (const MethodInfo_3814BE4 *)Method_BasicHelper_IndexValue_int____91713824);
  uniqueId = targetServantData->fields.uniqueId;
  v19 = v17;
  v20 = (RestockServantLogicByMoveToSubMember_o *)sub_2213CCC(RestockServantLogicByMoveToSubMember_TypeInfo);
  RestockServantLogicByMoveToSubMember___ctor(v20, ServantIndex, v16, v19, uniqueId, 0);
  this = (BattleLogicFunction_o *)v9->fields.data;
  if ( !this
    || (BattleData__AppendRestockServantLogic((BattleData_o *)this, (RestockServantLogic_o *)v20, 0),
        v21 = (BattleActionData_o *)sub_2213CCC(BattleActionData_TypeInfo),
        BattleActionData___ctor(v21, 0),
        !v21) )
  {
LABEL_13:
    sub_2213CDC(this, targetServantData);
  }
  BattleActionData__AddNewMoveToSubMember(v21, ServantIndex, targetServantData->fields.uniqueId, funcIndex, 1, 0);
  return v21;
}


void BattleLogicFunction__FunctionQuickChangeBG(
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
  if ( (byte_5973BE3 & 1) == 0 )
  {
    this = (BattleLogicFunction_o *)sub_2213A60(&UnityEngine_Object_TypeInfo);
    byte_5973BE3 = 1;
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
  v9 = v6->fields.data;
  if ( v9 )
  {
    perf = v9->fields.perf;
    if ( perf )
    {
      if ( !byte_5969AE0 )
      {
        sub_2213A60(&UnityEngine_Vector3_TypeInfo);
        byte_5969AE0 = 1;
      }
      static_fields = UnityEngine_Vector3_TypeInfo->static_fields;
      zeroVector = static_fields->zeroVector;
      v15.fields.x = static_fields->zeroVector.fields.x;
      v15.fields.y = zeroVector.fields.y;
      v15.fields.z = zeroVector.fields.z;
      BattlePerformance__ChangeBg(perf, static_fields->zeroVector, v15, 0, 0, 0, 0);
    }
  }
  logic = (UnityEngine_Object_o *)v6->fields.logic;
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v8);
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
    sub_2213CDC(this, args);
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

  if ( (byte_5973BD8 & 1) == 0 )
  {
    sub_2213A60(&Method_DataManager_GetMaster_SkillLvMaster___);
    sub_2213A60(&DataManager_TypeInfo);
    byte_5973BD8 = 1;
  }
  if ( !*(&DataManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo, actionData);
  Master_object = (SkillLvEntity_o *)DataManager__GetMaster_object_((const MethodInfo_3856318 *)Method_DataManager_GetMaster_SkillLvMaster___);
  if ( !actionData
    || (v9 = (SkillLvMaster_o *)Master_object, (Master_object = (SkillLvEntity_o *)actionData->fields.skillInfo) == 0)
    || (Master_object = (SkillLvEntity_o *)((__int64 (__fastcall *)(SkillLvEntity_o *, const MethodInfo *))Master_object->klass->vtable._5_CreatePrimaryKey.methodPtr)(
                                             Master_object,
                                             Master_object->klass->vtable._5_CreatePrimaryKey.method),
        (skillInfo = actionData->fields.skillInfo) == 0)
    || !v9
    || (Master_object = SkillLvMaster__GetEntity(v9, (int32_t)Master_object, skillInfo->fields.skilllv, 0)) == 0 )
  {
    sub_2213CDC(Master_object, v8);
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
  SkillLvEntity_o *v17; // x26
  BattleActionData_o *v18; // x25
  __int64 v19; // x1
  BattleActorControl_o *PartsActor; // x27
  BattleServantData_o *battleSvtData; // x0
  int32_t uniqueID; // w9
  int32_t targetId; // w1
  const MethodInfo *v24; // x6
  BattleActionData_o *RevivalHealData; // x0
  __int64 v26; // x1
  BattleActorControl_o *v27; // x26
  BattleServantData_o *v28; // x0
  BattleActionData_o *v29; // x27
  int32_t v30; // w9
  int32_t v31; // w1
  const MethodInfo *v32; // x6
  BattleActionData_o *v33; // x0

  v6 = this;
  if ( (byte_5973BD9 & 1) == 0 )
  {
    sub_2213A60(&BattleActionData_TypeInfo);
    sub_2213A60(&Method_DataManager_GetMasterData_SkillLvMaster___);
    sub_2213A60(&UnityEngine_Object_TypeInfo);
    this = (BattleLogicFunction_o *)sub_2213A60(&Method_SingletonMonoBehaviour_DataManager__getInstance__);
    byte_5973BD9 = 1;
  }
  if ( !funcTarget )
    goto LABEL_46;
  this = (BattleLogicFunction_o *)funcTarget->fields._funcUnit_k__BackingField;
  if ( !this )
    goto LABEL_46;
  logictarget = (DataVals_o *)this->fields.logictarget;
  if ( !logictarget )
    goto LABEL_46;
  funcEnt = logictarget->fields.funcEnt;
  this = (BattleLogicFunction_o *)BattleLogicFunctionProcess_FunctionUnitCheck__get_FuncIndex(
                                    (BattleLogicFunctionProcess_FunctionUnitCheck_o *)this,
                                    0);
  funcUnit_k__BackingField = funcTarget->fields._funcUnit_k__BackingField;
  if ( !funcUnit_k__BackingField )
    goto LABEL_46;
  v10 = (int)this;
  this = (BattleLogicFunction_o *)funcUnit_k__BackingField->fields._procArg_k__BackingField;
  if ( !this )
    goto LABEL_46;
  IsCommandSideEffect = BattleLogicFunction_ProcListInArgs__get_IsCommandSideEffect(
                          (BattleLogicFunction_ProcListInArgs_o *)this,
                          0);
  v13 = *((_QWORD *)Method_SingletonMonoBehaviour_DataManager__getInstance__ + 4);
  if ( (*(_WORD *)(v13 + 309) & 1) == 0 )
    v13 = sub_224B908(v12);
  v14 = *(_QWORD *)(*(_QWORD *)(v13 + 192) + 16LL);
  if ( (*(_WORD *)(v14 + 309) & 1) == 0 )
    v14 = sub_224B908(v12);
  this = **(BattleLogicFunction_o ***)(v14 + 184);
  if ( !this )
    goto LABEL_46;
  this = (BattleLogicFunction_o *)DataManager__GetMasterData_object_(
                                    (DataManager_o *)this,
                                    (const MethodInfo_385636C *)Method_DataManager_GetMasterData_SkillLvMaster___);
  if ( !actionData )
    goto LABEL_46;
  v15 = (SkillLvMaster_o *)this;
  this = (BattleLogicFunction_o *)actionData->fields.skillInfo;
  if ( !this )
    goto LABEL_46;
  this = (BattleLogicFunction_o *)((__int64 (__fastcall *)(BattleLogicFunction_o *, const char *))this->klass[1]._1.name)(
                                    this,
                                    this->klass[1]._1.namespaze);
  skillInfo = actionData->fields.skillInfo;
  if ( !skillInfo )
    goto LABEL_46;
  if ( !v15 )
    goto LABEL_46;
  this = (BattleLogicFunction_o *)SkillLvMaster__GetEntity(v15, (int32_t)this, skillInfo->fields.skilllv, 0);
  if ( !this )
    goto LABEL_46;
  v17 = (SkillLvEntity_o *)this;
  v18 = 0;
  if ( SkillLvEntity__IsRevivalUp((SkillLvEntity_o *)this, 0) )
  {
    this = (BattleLogicFunction_o *)v6->fields.data;
    if ( !this )
      goto LABEL_46;
    PartsActor = BattleData__GetPartsActor((BattleData_o *)this, 0, 0);
    if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v19);
    this = (BattleLogicFunction_o *)UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)PartsActor, 0, 0);
    v18 = 0;
    if ( ((unsigned __int8)this & 1) != 0 )
    {
      if ( !PartsActor )
        goto LABEL_46;
      battleSvtData = PartsActor->fields.battleSvtData;
      if ( battleSvtData )
      {
        v18 = 0;
        if ( !BattleServantData__isAlive(battleSvtData, 0, 0) )
        {
          v18 = (BattleActionData_o *)sub_2213CCC(BattleActionData_TypeInfo);
          BattleActionData___ctor(v18, 0);
          if ( !v18 )
            goto LABEL_46;
          uniqueID = PartsActor->fields.uniqueID;
          v18->fields.actorId = actionData->fields.actorId;
          v18->fields.targetId = uniqueID;
          BattleActionData__setStateActors(v18, 0);
          targetId = v18->fields.targetId;
          v18->fields.motionId = 2201;
          RevivalHealData = BattleLogicFunction__createRevivalHealData(
                              v6,
                              targetId,
                              funcEnt,
                              logictarget,
                              v10,
                              IsCommandSideEffect,
                              v24);
          BattleActionData__addAction(v18, RevivalHealData, 0);
          this = (BattleLogicFunction_o *)PartsActor->fields.battleSvtData;
          if ( !this )
            goto LABEL_46;
          BattleServantData__ProcessSkillRevive((BattleServantData_o *)this, 0);
        }
      }
      else
      {
        v18 = 0;
      }
    }
  }
  if ( !SkillLvEntity__IsRevivalUnder(v17, 0) )
    goto LABEL_38;
  this = (BattleLogicFunction_o *)v6->fields.data;
  if ( !this )
LABEL_46:
    sub_2213CDC(this, actionData);
  v27 = BattleData__GetPartsActor((BattleData_o *)this, 2, 0);
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v26);
  this = (BattleLogicFunction_o *)UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)v27, 0, 0);
  if ( ((unsigned __int8)this & 1) != 0 )
  {
    if ( v27 )
    {
      v28 = v27->fields.battleSvtData;
      if ( !v28 || BattleServantData__isAlive(v28, 0, 0) )
        goto LABEL_38;
      v29 = (BattleActionData_o *)sub_2213CCC(BattleActionData_TypeInfo);
      BattleActionData___ctor(v29, 0);
      if ( v29 )
      {
        v30 = v27->fields.uniqueID;
        v29->fields.actorId = actionData->fields.actorId;
        v29->fields.targetId = v30;
        BattleActionData__setStateActors(v29, 0);
        v31 = v29->fields.targetId;
        v29->fields.motionId = 2202;
        v33 = BattleLogicFunction__createRevivalHealData(v6, v31, funcEnt, logictarget, v10, IsCommandSideEffect, v32);
        BattleActionData__addAction(v29, v33, 0);
        this = (BattleLogicFunction_o *)v27->fields.battleSvtData;
        if ( this )
        {
          BattleServantData__ProcessSkillRevive((BattleServantData_o *)this, 0);
          if ( v18 )
            BattleActionData__AddAfterActionData(v18, v29, 0, 0);
          else
            v18 = v29;
          goto LABEL_39;
        }
      }
    }
    goto LABEL_46;
  }
LABEL_38:
  if ( v18 )
LABEL_39:
    BattleActionData__AddAfterActionData(actionData, v18, 0, 0);
}


void BattleLogicFunction__FunctionRevivalInDetail(
        BattleLogicFunction_o *this,
        BattleActionData_o *actionData,
        BattleLogicFunctionProcess_FunctionTargetCheck_o *funcTarget,
        const MethodInfo *method)
{
  int32_t v4; // w4
  int32_t v5; // w5
  bool v6; // w6
  bool v7; // w7
  System_String_o *v11; // x2
  System_String_o *v12; // x3
  int32_t v13; // w4
  int32_t v14; // w5
  bool v15; // w6
  bool v16; // w7
  BattleLogicFunctionProcess_FunctionUnitCheck_o *procArg_k__BackingField; // x0
  __int64 v18; // x1
  System_String_o *v19; // x2
  System_String_o *v20; // x3
  int32_t v21; // w4
  int32_t v22; // w5
  bool v23; // w6
  bool v24; // w7
  struct BattleLogicFunctionProcess_FunctionUnitCheck_o *funcUnit_k__BackingField; // x8
  System_String_o *v26; // x2
  System_String_o *v27; // x3
  int32_t v28; // w4
  int32_t v29; // w5
  bool v30; // w6
  bool v31; // w7
  struct BattleLogicFunctionProcess_FunctionUnitCheck_o *v32; // x8
  System_Collections_Generic_List_object__o *v33; // x20
  System_String_o *v34; // x2
  System_String_o *v35; // x3
  int32_t v36; // w4
  int32_t v37; // w5
  bool v38; // w6
  bool v39; // w7
  __int64 v40; // x1
  SkillLvMaster_o *v41; // x20
  struct BattleSkillInfoData_o *skillInfo; // x8
  System_Collections_ICollection_o *RevivalTargetArray; // x20
  const MethodInfo *v44; // x2
  BattleData_o *data; // x8
  __int64 v46; // x1
  System_Collections_Generic_IEnumerable_TSource__o *DeadAnimBeDoneSvtArray; // x21
  BattleLogicFunction___c_c *v48; // x8
  struct BattleLogicFunction___c_StaticFields *static_fields; // x9
  System_Func_object__int__o *_9__126_0; // x22
  Il2CppObject *v51; // x23
  struct BattleLogicFunction___c_StaticFields *v52; // x0
  System_String_o *v53; // x2
  System_String_o *v54; // x3
  int32_t v55; // w4
  int32_t v56; // w5
  bool v57; // w6
  bool v58; // w7
  System_Collections_Generic_IEnumerable_IGrouping_TKey__TSource___o *v59; // x0
  __int64 v60; // x1
  BattleLogicFunction___c_c *v61; // x8
  System_Collections_Generic_IEnumerable_TSource__o *v62; // x21
  struct BattleLogicFunction___c_StaticFields *v63; // x9
  System_Func_object__int__o *_9__126_1; // x22
  Il2CppObject *v65; // x23
  struct BattleLogicFunction___c_StaticFields *v66; // x0
  System_String_o *v67; // x2
  System_String_o *v68; // x3
  int32_t v69; // w4
  int32_t v70; // w5
  bool v71; // w6
  bool v72; // w7
  struct BattleLogicFunction___c_StaticFields *v73; // x9
  System_Func_object__object__o *_9__126_2; // x23
  Il2CppObject *v75; // x24
  struct BattleLogicFunction___c_StaticFields *v76; // x0
  System_String_o *v77; // x2
  System_String_o *v78; // x3
  int32_t v79; // w4
  int32_t v80; // w5
  bool v81; // w6
  bool v82; // w7
  System_String_o *v83; // x2
  System_String_o *v84; // x3
  int32_t v85; // w4
  int32_t v86; // w5
  bool v87; // w6
  bool v88; // w7
  const MethodInfo *v89; // x2
  long double v90; // q0
  void *monitor; // x8
  unsigned __int64 v92; // x28
  int32_t v93; // w22
  _QWORD *v94; // x23
  __int64 v95; // x8
  __int64 v96; // x0
  __int64 v97; // x0
  BattleLogicFunction___c__DisplayClass126_0_o *v98; // x4
  const MethodInfo *v99; // x5
  struct BattleLogicFunction_ProcListInArgs_o *v100; // x8
  BattleLogicFunctionProcess_FunctionUnitCheck_o *v101; // x23
  unsigned __int64 v102; // x21
  struct DataVals_o **p_dataVals_k__BackingField; // x20
  BattleServantData_o *v104; // x24
  const MethodInfo *v105; // x6
  int32_t v106; // w26
  BattleActionData_o *v107; // x25
  System_String_o *v108; // x2
  System_String_o *v109; // x3
  int32_t v110; // w4
  int32_t v111; // w5
  bool v112; // w6
  bool v113; // w7
  System_String_o *v114; // x2
  System_String_o *v115; // x3
  int32_t v116; // w4
  int32_t v117; // w5
  bool v118; // w6
  bool v119; // w7
  struct BattleServantData_array *items; // x8
  _QWORD *v121; // x9
  __int64 procArg_k__BackingField_low; // x10
  Il2CppClass **v123; // x8
  System_Collections_ICollection_o *v124; // [xsp+8h] [xbp-B8h]
  System_Collections_Generic_Dictionary_K__V__o *dic; // [xsp+10h] [xbp-B0h]
  int32_t expelledUniqueId[2]; // [xsp+18h] [xbp-A8h] BYREF
  BattleLogicFunction___c__DisplayClass126_0_o v127; // [xsp+20h] [xbp-A0h] BYREF

  if ( (byte_5973BDB & 1) == 0 )
  {
    sub_2213A60(&Method_System_Array_Empty_BattleServantData___);
    sub_2213A60(&Method_BasicHelper_GetValue_int__BattleServantData_____);
    sub_2213A60(&Method_DataManager_GetMaster_SkillLvMaster___);
    sub_2213A60(&DataManager_TypeInfo);
    sub_2213A60(&Method_System_Linq_Enumerable_GroupBy_BattleServantData__int___);
    sub_2213A60(&Method_System_Linq_Enumerable_ToDictionary_IGrouping_int__BattleServantData___int__BattleServantData_____);
    sub_2213A60(&System_Func_IGrouping_int__BattleServantData___int__TypeInfo);
    sub_2213A60(&System_Func_BattleServantData__int__TypeInfo);
    sub_2213A60(&System_Func_IGrouping_int__BattleServantData___BattleServantData____TypeInfo);
    sub_2213A60(&Method_System_Collections_Generic_List_BattleServantData__Add__);
    sub_2213A60(&Method_System_Collections_Generic_List_BattleServantData___ctor__);
    sub_2213A60(&System_Collections_Generic_List_BattleServantData__TypeInfo);
    sub_2213A60(&Method_BattleLogicFunction___c__FunctionRevivalInDetail_b__126_0__);
    sub_2213A60(&Method_BattleLogicFunction___c__FunctionRevivalInDetail_b__126_1__);
    sub_2213A60(&Method_BattleLogicFunction___c__FunctionRevivalInDetail_b__126_2__);
    sub_2213A60(&BattleLogicFunction___c_TypeInfo);
    byte_5973BDB = 1;
  }
  memset(&v127.fields.__4__this, 0, 56);
  *(_QWORD *)expelledUniqueId = 0;
  v127.fields.actionData = actionData;
  sub_2213A04(
    (MissionNaviTransitionBoardItem_o *)&v127,
    (int32_t)actionData,
    (System_String_o *)funcTarget,
    (System_String_o *)method,
    v4,
    v5,
    v6,
    v7);
  v127.fields.__4__this = this;
  sub_2213A04((MissionNaviTransitionBoardItem_o *)&v127.fields.__4__this, (int32_t)this, v11, v12, v13, v14, v15, v16);
  if ( !funcTarget )
    goto LABEL_67;
  funcUnit_k__BackingField = funcTarget->fields._funcUnit_k__BackingField;
  if ( !funcUnit_k__BackingField )
    goto LABEL_67;
  v127.fields.baseVals = funcUnit_k__BackingField->fields._dataVals_k__BackingField;
  sub_2213A04(
    (MissionNaviTransitionBoardItem_o *)&v127.fields.baseVals,
    (int32_t)v127.fields.baseVals,
    v19,
    v20,
    v21,
    v22,
    v23,
    v24);
  if ( !v127.fields.baseVals )
    goto LABEL_67;
  v127.fields.funcEnt = v127.fields.baseVals->fields.funcEnt;
  sub_2213A04(
    (MissionNaviTransitionBoardItem_o *)&v127.fields.funcEnt,
    (int32_t)v127.fields.funcEnt,
    v26,
    v27,
    v28,
    v29,
    v30,
    v31);
  procArg_k__BackingField = funcTarget->fields._funcUnit_k__BackingField;
  if ( !procArg_k__BackingField )
    goto LABEL_67;
  procArg_k__BackingField = (BattleLogicFunctionProcess_FunctionUnitCheck_o *)BattleLogicFunctionProcess_FunctionUnitCheck__get_FuncIndex(
                                                                                procArg_k__BackingField,
                                                                                0);
  v32 = funcTarget->fields._funcUnit_k__BackingField;
  v127.fields.funcIndex = (int)procArg_k__BackingField;
  if ( !v32 )
    goto LABEL_67;
  procArg_k__BackingField = (BattleLogicFunctionProcess_FunctionUnitCheck_o *)v32->fields._procArg_k__BackingField;
  if ( !procArg_k__BackingField )
    goto LABEL_67;
  v127.fields.isCommandSideEffect = BattleLogicFunction_ProcListInArgs__get_IsCommandSideEffect(
                                      (BattleLogicFunction_ProcListInArgs_o *)procArg_k__BackingField,
                                      0);
  v33 = (System_Collections_Generic_List_object__o *)sub_2213CCC(System_Collections_Generic_List_BattleServantData__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v33,
    (const MethodInfo_44833FC *)Method_System_Collections_Generic_List_BattleServantData___ctor__);
  v127.fields.revivedSvtList = (struct System_Collections_Generic_List_BattleServantData__o *)v33;
  sub_2213A04(
    (MissionNaviTransitionBoardItem_o *)&v127.fields.revivedSvtList,
    (int32_t)v33,
    v34,
    v35,
    v36,
    v37,
    v38,
    v39);
  if ( !*(&DataManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo, v40);
  procArg_k__BackingField = (BattleLogicFunctionProcess_FunctionUnitCheck_o *)DataManager__GetMaster_object_((const MethodInfo_3856318 *)Method_DataManager_GetMaster_SkillLvMaster___);
  if ( !v127.fields.actionData )
    goto LABEL_67;
  v41 = (SkillLvMaster_o *)procArg_k__BackingField;
  procArg_k__BackingField = (BattleLogicFunctionProcess_FunctionUnitCheck_o *)v127.fields.actionData->fields.skillInfo;
  if ( !procArg_k__BackingField )
    goto LABEL_67;
  procArg_k__BackingField = (BattleLogicFunctionProcess_FunctionUnitCheck_o *)((__int64 (__fastcall *)(BattleLogicFunctionProcess_FunctionUnitCheck_o *, const char *))procArg_k__BackingField->klass[1]._1.name)(
                                                                                procArg_k__BackingField,
                                                                                procArg_k__BackingField->klass[1]._1.namespaze);
  if ( !v127.fields.actionData )
    goto LABEL_67;
  skillInfo = v127.fields.actionData->fields.skillInfo;
  if ( !skillInfo )
    goto LABEL_67;
  if ( !v41 )
    goto LABEL_67;
  procArg_k__BackingField = (BattleLogicFunctionProcess_FunctionUnitCheck_o *)SkillLvMaster__GetEntity(
                                                                                v41,
                                                                                (int32_t)procArg_k__BackingField,
                                                                                skillInfo->fields.skilllv,
                                                                                0);
  if ( !procArg_k__BackingField )
    goto LABEL_67;
  RevivalTargetArray = (System_Collections_ICollection_o *)SkillLvEntity__GetRevivalTargetArray(
                                                             (SkillLvEntity_o *)procArg_k__BackingField,
                                                             0);
  if ( BasicHelper__IsNullOrEmpty(RevivalTargetArray, 0) )
    goto LABEL_66;
  procArg_k__BackingField = (BattleLogicFunctionProcess_FunctionUnitCheck_o *)v127.fields.baseVals;
  if ( !v127.fields.baseVals )
    goto LABEL_67;
  procArg_k__BackingField = (BattleLogicFunctionProcess_FunctionUnitCheck_o *)DataVals__GetValue(
                                                                                v127.fields.baseVals,
                                                                                0);
  data = this->fields.data;
  v127.fields.healPoint = (int)procArg_k__BackingField;
  if ( !data )
    goto LABEL_67;
  DeadAnimBeDoneSvtArray = (System_Collections_Generic_IEnumerable_TSource__o *)BattleData__GetDeadAnimBeDoneSvtArray(
                                                                                  data,
                                                                                  0);
  v48 = BattleLogicFunction___c_TypeInfo;
  if ( !*(&BattleLogicFunction___c_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(BattleLogicFunction___c_TypeInfo, v46);
    v48 = BattleLogicFunction___c_TypeInfo;
  }
  static_fields = v48->static_fields;
  _9__126_0 = (System_Func_object__int__o *)static_fields->__9__126_0;
  if ( !_9__126_0 )
  {
    if ( !*(&v48->_2.cctor_finished + 1) )
    {
      j_il2cpp_runtime_class_init_0(v48, v46);
      static_fields = BattleLogicFunction___c_TypeInfo->static_fields;
    }
    v51 = (Il2CppObject *)static_fields->__9;
    _9__126_0 = (System_Func_object__int__o *)sub_2213CCC(System_Func_BattleServantData__int__TypeInfo);
    System_Func_object__int____ctor(
      _9__126_0,
      v51,
      Method_BattleLogicFunction___c__FunctionRevivalInDetail_b__126_0__,
      0);
    v52 = BattleLogicFunction___c_TypeInfo->static_fields;
    v52->__9__126_0 = (struct System_Func_BattleServantData__int__o *)_9__126_0;
    sub_2213A04((MissionNaviTransitionBoardItem_o *)&v52->__9__126_0, (int32_t)_9__126_0, v53, v54, v55, v56, v57, v58);
  }
  v59 = System_Linq_Enumerable__GroupBy_object__int_(
          DeadAnimBeDoneSvtArray,
          (System_Func_TSource__TKey__o *)_9__126_0,
          (const MethodInfo_38831D8 *)Method_System_Linq_Enumerable_GroupBy_BattleServantData__int___);
  v61 = BattleLogicFunction___c_TypeInfo;
  v62 = (System_Collections_Generic_IEnumerable_TSource__o *)v59;
  if ( !*(&BattleLogicFunction___c_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(BattleLogicFunction___c_TypeInfo, v60);
    v61 = BattleLogicFunction___c_TypeInfo;
  }
  v63 = v61->static_fields;
  _9__126_1 = (System_Func_object__int__o *)v63->__9__126_1;
  if ( !_9__126_1 )
  {
    if ( !*(&v61->_2.cctor_finished + 1) )
    {
      j_il2cpp_runtime_class_init_0(v61, v60);
      v63 = BattleLogicFunction___c_TypeInfo->static_fields;
    }
    v65 = (Il2CppObject *)v63->__9;
    _9__126_1 = (System_Func_object__int__o *)sub_2213CCC(System_Func_IGrouping_int__BattleServantData___int__TypeInfo);
    System_Func_object__int____ctor(
      _9__126_1,
      v65,
      Method_BattleLogicFunction___c__FunctionRevivalInDetail_b__126_1__,
      0);
    v66 = BattleLogicFunction___c_TypeInfo->static_fields;
    v66->__9__126_1 = (struct System_Func_IGrouping_int__BattleServantData___int__o *)_9__126_1;
    sub_2213A04((MissionNaviTransitionBoardItem_o *)&v66->__9__126_1, (int32_t)_9__126_1, v67, v68, v69, v70, v71, v72);
    v61 = BattleLogicFunction___c_TypeInfo;
  }
  if ( !*(&v61->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(v61, v60);
    v61 = BattleLogicFunction___c_TypeInfo;
  }
  v73 = v61->static_fields;
  _9__126_2 = (System_Func_object__object__o *)v73->__9__126_2;
  if ( !_9__126_2 )
  {
    if ( !*(&v61->_2.cctor_finished + 1) )
    {
      j_il2cpp_runtime_class_init_0(v61, v60);
      v73 = BattleLogicFunction___c_TypeInfo->static_fields;
    }
    v75 = (Il2CppObject *)v73->__9;
    _9__126_2 = (System_Func_object__object__o *)sub_2213CCC(System_Func_IGrouping_int__BattleServantData___BattleServantData____TypeInfo);
    System_Func_object__object____ctor(
      _9__126_2,
      v75,
      Method_BattleLogicFunction___c__FunctionRevivalInDetail_b__126_2__,
      0);
    v76 = BattleLogicFunction___c_TypeInfo->static_fields;
    v76->__9__126_2 = (struct System_Func_IGrouping_int__BattleServantData___BattleServantData____o *)_9__126_2;
    sub_2213A04((MissionNaviTransitionBoardItem_o *)&v76->__9__126_2, (int32_t)_9__126_2, v77, v78, v79, v80, v81, v82);
  }
  procArg_k__BackingField = (BattleLogicFunctionProcess_FunctionUnitCheck_o *)System_Linq_Enumerable__ToDictionary_object__int__object_(
                                                                                v62,
                                                                                (System_Func_TSource__TKey__o *)_9__126_1,
                                                                                (System_Func_TSource__TElement__o *)_9__126_2,
                                                                                (const MethodInfo_389C520 *)Method_System_Linq_Enumerable_ToDictionary_IGrouping_int__BattleServantData___int__BattleServantData_____);
  dic = (System_Collections_Generic_Dictionary_K__V__o *)procArg_k__BackingField;
  if ( !v127.fields.actionData
    || (v127.fields.lastActionData = BattleActionData__SeekLastActionData(v127.fields.actionData, 0),
        sub_2213A04(
          (MissionNaviTransitionBoardItem_o *)&v127.fields.lastActionData,
          (int32_t)v127.fields.lastActionData,
          v83,
          v84,
          v85,
          v86,
          v87,
          v88),
        !RevivalTargetArray) )
  {
LABEL_67:
    sub_2213CDC(procArg_k__BackingField, v18);
  }
  monitor = RevivalTargetArray[1].monitor;
  if ( (int)monitor >= 1 )
  {
    v92 = 0;
    v124 = RevivalTargetArray;
    while ( 1 )
    {
      if ( v92 >= (unsigned int)monitor )
        goto LABEL_68;
      v93 = *((_DWORD *)&RevivalTargetArray[2].klass + v92);
      v94 = Method_System_Array_Empty_BattleServantData___;
      v95 = *((_QWORD *)Method_System_Array_Empty_BattleServantData___ + 7);
      if ( !v95 )
      {
        sub_224B964(Method_System_Array_Empty_BattleServantData___);
        v95 = v94[7];
      }
      v96 = *(_QWORD *)(v95 + 16);
      if ( (*(_WORD *)(v96 + 309) & 1) == 0 )
        v96 = sub_224B908(v90);
      if ( !*(_DWORD *)(v96 + 228) )
        *(__n128 *)&v90 = j_il2cpp_runtime_class_init_0(v96, v18);
      v97 = *(_QWORD *)(v94[7] + 16LL);
      if ( (*(_WORD *)(v97 + 309) & 1) == 0 )
        v97 = sub_224B908(v90);
      procArg_k__BackingField = (BattleLogicFunctionProcess_FunctionUnitCheck_o *)BasicHelper__GetValue_int__object_(
                                                                                    dic,
                                                                                    v93,
                                                                                    **(Il2CppObject ***)(v97 + 184),
                                                                                    (const MethodInfo_381447C *)Method_BasicHelper_GetValue_int__BattleServantData_____);
      if ( !procArg_k__BackingField )
        goto LABEL_67;
      v100 = procArg_k__BackingField->fields._procArg_k__BackingField;
      v101 = procArg_k__BackingField;
      if ( (int)v100 >= 1 )
        break;
LABEL_64:
      RevivalTargetArray = v124;
      ++v92;
      LODWORD(monitor) = v124[1].monitor;
      if ( (__int64)v92 >= (int)monitor )
        goto LABEL_65;
    }
    v102 = 0;
    p_dataVals_k__BackingField = &procArg_k__BackingField->fields._dataVals_k__BackingField;
    while ( v102 < (unsigned int)v100 )
    {
      v104 = (BattleServantData_o *)p_dataVals_k__BackingField[v102];
      procArg_k__BackingField = (BattleLogicFunctionProcess_FunctionUnitCheck_o *)BattleLogicFunction___FunctionRevivalInDetail_g__TryGetEntryIndex_126_5(
                                                                                    this,
                                                                                    v104,
                                                                                    &expelledUniqueId[1],
                                                                                    expelledUniqueId,
                                                                                    v98,
                                                                                    v99);
      if ( ((unsigned __int8)procArg_k__BackingField & 1) != 0 )
      {
        v106 = expelledUniqueId[1];
        procArg_k__BackingField = (BattleLogicFunctionProcess_FunctionUnitCheck_o *)BattleLogicFunction___FunctionRevivalInDetail_g__GenerateRevivalActionData_126_3(
                                                                                      this,
                                                                                      v104,
                                                                                      v93,
                                                                                      expelledUniqueId[1],
                                                                                      expelledUniqueId[0],
                                                                                      &v127,
                                                                                      v105);
        if ( !this->fields.data )
          goto LABEL_67;
        v107 = (BattleActionData_o *)procArg_k__BackingField;
        BattleData__SetEntry(this->fields.data, v104, v106, 1, 0);
        procArg_k__BackingField = (BattleLogicFunctionProcess_FunctionUnitCheck_o *)v127.fields.lastActionData;
        if ( !v127.fields.lastActionData )
          goto LABEL_67;
        BattleActionData__AddAfterActionData(v127.fields.lastActionData, v107, 0, 0);
        v127.fields.lastActionData = v107;
        sub_2213A04(
          (MissionNaviTransitionBoardItem_o *)&v127.fields.lastActionData,
          (int32_t)v107,
          v108,
          v109,
          v110,
          v111,
          v112,
          v113);
        procArg_k__BackingField = (BattleLogicFunctionProcess_FunctionUnitCheck_o *)v127.fields.revivedSvtList;
        if ( !v127.fields.revivedSvtList )
          goto LABEL_67;
        items = v127.fields.revivedSvtList->fields._items;
        v121 = Method_System_Collections_Generic_List_BattleServantData__Add__;
        ++v127.fields.revivedSvtList->fields._version;
        if ( !items )
          goto LABEL_67;
        procArg_k__BackingField_low = SLODWORD(procArg_k__BackingField->fields._procArg_k__BackingField);
        if ( (unsigned int)procArg_k__BackingField_low >= LODWORD(items->max_length) )
        {
          System_Collections_Generic_List_object___AddWithResize(
            (System_Collections_Generic_List_object__o *)procArg_k__BackingField,
            (Il2CppObject *)v104,
            *(const MethodInfo_4483C64 **)(*(_QWORD *)(v121[4] + 192LL) + 112LL));
        }
        else
        {
          v123 = &items->obj.klass + procArg_k__BackingField_low;
          LODWORD(procArg_k__BackingField->fields._procArg_k__BackingField) = procArg_k__BackingField_low + 1;
          v123[4] = (Il2CppClass *)v104;
          sub_2213A04((MissionNaviTransitionBoardItem_o *)(v123 + 4), (int32_t)v104, v114, v115, v116, v117, v118, v119);
        }
      }
      LODWORD(v100) = v101->fields._procArg_k__BackingField;
      if ( (__int64)++v102 >= (int)v100 )
        goto LABEL_64;
    }
LABEL_68:
    sub_2213CE4(procArg_k__BackingField);
  }
LABEL_65:
  BattleLogicFunction___FunctionRevivalInDetail_g__AfterProcessForRevivedServants_126_6(this, &v127, v89);
LABEL_66:
  BattleLogicFunction___FunctionRevivalInDetail_g__SetMissIfNoActions_126_4(this, &v127, v44);
}


void BattleLogicFunction__FunctionSetBattleMissionValue(
        BattleLogicFunction_o *this,
        FunctionEntity_o *funcEnt,
        const MethodInfo *method)
{
  BattleData_o *IsExistBattleMissionValueInMasterData; // x0
  __int64 v6; // x1
  int32_t v7; // w21
  int32_t battleValueKey[2]; // [xsp+0h] [xbp-30h] BYREF
  __int64 value; // [xsp+8h] [xbp-28h] BYREF

  *(_QWORD *)battleValueKey = 0;
  value = 0;
  IsExistBattleMissionValueInMasterData = (BattleData_o *)BattleLogicFunction__IsExistBattleMissionValueInMasterData(
                                                            funcEnt,
                                                            (const MethodInfo *)funcEnt);
  if ( ((unsigned __int8)IsExistBattleMissionValueInMasterData & 1) != 0 )
  {
    if ( !funcEnt )
      goto LABEL_12;
    if ( FunctionEntity__TryGetValsKeyValuePair(funcEnt, 0, (int32_t *)&value + 1, (int32_t *)&value, 0) )
    {
      v7 = 1;
      while ( 1 )
      {
        if ( FunctionEntity__IsToQuoteBattleValue(funcEnt, &battleValueKey[1], 0) )
        {
          IsExistBattleMissionValueInMasterData = this->fields.data;
          if ( !IsExistBattleMissionValueInMasterData )
            break;
          if ( BattleData__TryGetBattleValue(
                 IsExistBattleMissionValueInMasterData,
                 battleValueKey[1],
                 battleValueKey,
                 0) )
          {
            LODWORD(value) = battleValueKey[0];
          }
        }
        IsExistBattleMissionValueInMasterData = this->fields.data;
        if ( !IsExistBattleMissionValueInMasterData )
          break;
        BattleData__SetBattleMissionValue(IsExistBattleMissionValueInMasterData, SHIDWORD(value), value, 0);
        if ( !FunctionEntity__TryGetValsKeyValuePair(funcEnt, v7++, (int32_t *)&value + 1, (int32_t *)&value, 0) )
          return;
      }
LABEL_12:
      sub_2213CDC(IsExistBattleMissionValueInMasterData, v6);
    }
  }
}


void BattleLogicFunction__FunctionSetBattleMissionValueAsMax(
        BattleLogicFunction_o *this,
        FunctionEntity_o *funcEnt,
        const MethodInfo *method)
{
  BattleData_o *IsExistBattleMissionValueInMasterData; // x0
  __int64 v6; // x1
  int32_t v7; // w21
  int32_t battleValueKey[2]; // [xsp+0h] [xbp-30h] BYREF
  __int64 value; // [xsp+8h] [xbp-28h] BYREF

  *(_QWORD *)battleValueKey = 0;
  value = 0;
  IsExistBattleMissionValueInMasterData = (BattleData_o *)BattleLogicFunction__IsExistBattleMissionValueInMasterData(
                                                            funcEnt,
                                                            (const MethodInfo *)funcEnt);
  if ( ((unsigned __int8)IsExistBattleMissionValueInMasterData & 1) != 0 )
  {
    if ( !funcEnt )
      goto LABEL_12;
    if ( FunctionEntity__TryGetValsKeyValuePair(funcEnt, 0, (int32_t *)&value + 1, (int32_t *)&value, 0) )
    {
      v7 = 1;
      while ( 1 )
      {
        if ( FunctionEntity__IsToQuoteBattleValue(funcEnt, &battleValueKey[1], 0) )
        {
          IsExistBattleMissionValueInMasterData = this->fields.data;
          if ( !IsExistBattleMissionValueInMasterData )
            break;
          if ( BattleData__TryGetBattleValue(
                 IsExistBattleMissionValueInMasterData,
                 battleValueKey[1],
                 battleValueKey,
                 0) )
          {
            LODWORD(value) = battleValueKey[0];
          }
        }
        IsExistBattleMissionValueInMasterData = this->fields.data;
        if ( !IsExistBattleMissionValueInMasterData )
          break;
        BattleData__SetBattleMissionValueAsMax(IsExistBattleMissionValueInMasterData, SHIDWORD(value), value, 0);
        if ( !FunctionEntity__TryGetValsKeyValuePair(funcEnt, v7++, (int32_t *)&value + 1, (int32_t *)&value, 0) )
          return;
      }
LABEL_12:
      sub_2213CDC(IsExistBattleMissionValueInMasterData, v6);
    }
  }
}


// local variable allocation has failed, the output may be wrong!
void BattleLogicFunction__FunctionSetBattleValue(
        BattleLogicFunction_o *this,
        int32_t actorId,
        FunctionEntity_o *funcEnt,
        BattleLogicFunction_ProcListInArgs_o *procArgs,
        const MethodInfo *method)
{
  BattleServantData_o *IsExistBattleValueInMasterData; // x0
  __int64 v10; // x1
  unsigned __int8 v11; // w23
  const MethodInfo *v12; // x5
  struct System_Int32_array *vals; // x8
  BattleServantData_o *v14; // x24
  unsigned int v15; // w9
  unsigned int max_length; // w10
  unsigned int v17; // w27
  int32_t v18; // w25
  int32_t DealtDamage; // w0
  System_Collections_Generic_List_int____o *DealtDamageSpritList_k__BackingField; // x2
  int32_t v21; // w26
  int32_t valueTargetType; // [xsp+Ch] [xbp-54h] BYREF

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
      || (v11 = (unsigned __int8)IsExistBattleValueInMasterData,
          IsExistBattleValueInMasterData = BattleData__getServantData(this->fields.data, actorId, 0),
          (vals = funcEnt->fields.vals) == 0) )
    {
LABEL_20:
      sub_2213CDC(IsExistBattleValueInMasterData, v10);
    }
    v14 = IsExistBattleValueInMasterData;
    v15 = 0;
    while ( 1 )
    {
      max_length = vals->max_length;
      if ( (int)v15 >= (int)max_length )
        return;
      if ( v15 >= max_length || (v17 = v15 + 1, v15 + 1 >= max_length) )
        sub_2213CE4(IsExistBattleValueInMasterData);
      v18 = vals->m_Items[v15];
      if ( (v11 & (valueTargetType == 1)) != 1 )
        break;
      IsExistBattleValueInMasterData = (BattleServantData_o *)BattleLogicFunction__TryRegisterDeferredBattleValue(
                                                                (BattleLogicFunction_o *)IsExistBattleValueInMasterData,
                                                                procArgs,
                                                                v18,
                                                                actorId,
                                                                0,
                                                                v12);
      if ( ((unsigned __int8)IsExistBattleValueInMasterData & 1) == 0 )
      {
        if ( v14 )
        {
          DealtDamage = BattleServantData__get_DealtDamage(v14, 0);
          DealtDamageSpritList_k__BackingField = v14->fields._DealtDamageSpritList_k__BackingField;
          v21 = DealtDamage;
        }
        else
        {
          v21 = 0;
          DealtDamageSpritList_k__BackingField = 0;
        }
        IsExistBattleValueInMasterData = (BattleServantData_o *)this->fields.data;
        if ( !IsExistBattleValueInMasterData )
          goto LABEL_20;
        BattleData__SetSplitBattleValueForExBattleUi(
          (BattleData_o *)IsExistBattleValueInMasterData,
          v18,
          DealtDamageSpritList_k__BackingField,
          0);
        goto LABEL_17;
      }
LABEL_19:
      vals = funcEnt->fields.vals;
      v15 = v17 + 1;
      if ( !vals )
        goto LABEL_20;
    }
    v21 = vals->m_Items[v17];
LABEL_17:
    IsExistBattleValueInMasterData = (BattleServantData_o *)this->fields.data;
    if ( !IsExistBattleValueInMasterData )
      goto LABEL_20;
    BattleData__SetBattleValue((BattleData_o *)IsExistBattleValueInMasterData, v18, v21, 0);
    goto LABEL_19;
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
    sub_2213CDC(this, mainActionData);
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
  BattleActionData_BuffData_o *FunctionObject; // x20

  if ( (byte_5973BEB & 1) == 0 )
  {
    sub_2213A60(&BattleActionData_TypeInfo);
    byte_5973BEB = 1;
  }
  data = this->fields.data;
  if ( !data )
    goto LABEL_11;
  data = (BattleData_o *)BattleData__getServantData(data, targetId, 0);
  if ( !data )
    goto LABEL_11;
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
        FunctionObject = BattleLogicFunction__getFunctionObject(
                           (BattleLogicFunction_o *)IsCommandSideEffect,
                           funcEnt,
                           targetId,
                           funcIndex,
                           IsCommandSideEffect,
                           0,
                           v15);
        FunctionObject->fields.procType = 5;
        v11 = (BattleActionData_o *)sub_2213CCC(BattleActionData_TypeInfo);
        BattleActionData___ctor(v11, 0);
        if ( v11 )
        {
          BattleActionData__setBuffData(v11, FunctionObject, baseVals, 0, 0);
          return v11;
        }
      }
    }
LABEL_11:
    sub_2213CDC(data, procArg);
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
  BattleLogicFunction_o *v8; // x20
  struct BattleLogicFunctionProcess_FunctionUnitCheck_o *funcUnit_k__BackingField; // x21
  DataVals_o *dataVals_k__BackingField; // x21
  int32_t v11; // w24
  int32_t targetId_k__BackingField; // w25
  FunctionEntity_o *funcEnt; // x27
  struct BattleData_o *data; // x8
  BattleActionData_BuffData_o *v15; // x26
  System_Collections_Generic_List_object__o *v16; // x23
  _BOOL8 v17; // x0
  const MethodInfo *v18; // x6
  struct BattleData_o *v19; // x8
  BattleLogicFunction_o *v20; // x22
  struct BattleFieldEnvironmentData_o *FieldEnvData_k__BackingField; // x24
  System_Object_array *v22; // x0
  struct BattleData_o *v23; // x8
  BattleFieldEnvironmentData_o *v24; // x24
  System_Func_object__object__o *v25; // x24
  System_Collections_Generic_IEnumerable_TSource__o *v26; // x0
  System_Collections_Generic_List_TSource__o *v27; // x0
  System_String_o *v28; // x2
  System_String_o *v29; // x3
  int32_t v30; // w4
  int32_t v31; // w5
  bool v32; // w6
  bool v33; // w7
  __int64 v34; // x1
  BattleLogicFunction___c_c *v35; // x0
  struct BattleLogicFunction___c_StaticFields *static_fields; // x8
  System_Func_object__bool__o *_9__140_1; // x24
  Il2CppObject *v38; // x25
  struct BattleLogicFunction___c_StaticFields *v39; // x0
  System_String_o *v40; // x2
  System_String_o *v41; // x3
  int32_t v42; // w4
  int32_t v43; // w5
  bool v44; // w6
  bool v45; // w7
  __int64 v46; // x1
  BattleActionEffect_UpdateAllInfo_o *v47; // x24
  BattleLogicFunction___c_c *v48; // x0
  struct BattleLogicFunction___c_StaticFields *v49; // x8
  System_Func_object__bool__o *_9__140_2; // x24
  Il2CppObject *v51; // x25
  struct BattleLogicFunction___c_StaticFields *v52; // x0
  System_String_o *v53; // x2
  System_String_o *v54; // x3
  int32_t v55; // w4
  int32_t v56; // w5
  bool v57; // w6
  bool v58; // w7
  struct BattleData_o *v59; // x8
  BattleLogicFunction___c_c *v60; // x0
  BattleFieldEnvironmentData_o *v61; // x24
  struct BattleLogicFunction___c_StaticFields *v62; // x8
  System_Func_object__bool__o *_9__140_3; // x25
  Il2CppObject *v64; // x26
  struct BattleLogicFunction___c_StaticFields *v65; // x0
  System_String_o *v66; // x2
  System_String_o *v67; // x3
  int32_t v68; // w4
  int32_t v69; // w5
  bool v70; // w6
  bool v71; // w7
  System_Collections_Generic_IEnumerable_TSource__o *v72; // x0
  struct BattleLogic_o *logic; // x8
  BattleLogicFunction_o *v74; // x23
  unsigned __int64 v75; // x24
  struct BattleData_o *v76; // x8
  bool IsCommandSideEffect; // w0
  const MethodInfo *v78; // [xsp+8h] [xbp-68h]

  v8 = this;
  if ( (byte_5973BE5 & 1) == 0 )
  {
    sub_2213A60(&Method_BasicHelper_Any_BattleBuffData_BuffData___);
    sub_2213A60(&Method_BattleLogicFunction__FunctionSubFieldBuff_b__140_0__);
    sub_2213A60(&Method_System_Linq_Enumerable_Select_BattleBuffData_BuffData__BattleBuffData_BuffData___);
    sub_2213A60(&Method_System_Linq_Enumerable_ToArray_BattleBuffData_BuffData___);
    sub_2213A60(&Method_System_Linq_Enumerable_ToList_BattleBuffData_BuffData___);
    sub_2213A60(&Method_System_Linq_Enumerable_Where_BattleBuffData_BuffData___);
    sub_2213A60(&System_Func_BattleBuffData_BuffData__BattleBuffData_BuffData__TypeInfo);
    sub_2213A60(&System_Func_BattleBuffData_BuffData__bool__TypeInfo);
    sub_2213A60(&Method_System_Collections_Generic_List_BattleBuffData_BuffData__ToArray__);
    sub_2213A60(&Method_System_Collections_Generic_List_BattleBuffData_BuffData__get_Count__);
    sub_2213A60(&Method_BattleLogicFunction___c__FunctionSubFieldBuff_b__140_1__);
    sub_2213A60(&Method_BattleLogicFunction___c__FunctionSubFieldBuff_b__140_2__);
    sub_2213A60(&Method_BattleLogicFunction___c__FunctionSubFieldBuff_b__140_3__);
    sub_2213A60(&BattleLogicFunction___c_TypeInfo);
    this = (BattleLogicFunction_o *)sub_2213A60(&BattleActionEffect_UpdateAllInfo_TypeInfo);
    byte_5973BE5 = 1;
  }
  if ( !funcTarget )
    goto LABEL_51;
  funcUnit_k__BackingField = funcTarget->fields._funcUnit_k__BackingField;
  if ( !funcUnit_k__BackingField )
    goto LABEL_51;
  this = (BattleLogicFunction_o *)BattleLogicFunctionProcess_FunctionUnitCheck__get_FuncIndex(
                                    funcTarget->fields._funcUnit_k__BackingField,
                                    0);
  dataVals_k__BackingField = funcUnit_k__BackingField->fields._dataVals_k__BackingField;
  if ( !dataVals_k__BackingField )
    goto LABEL_51;
  v11 = (int)this;
  targetId_k__BackingField = funcTarget->fields._targetId_k__BackingField;
  funcEnt = dataVals_k__BackingField->fields.funcEnt;
  this = (BattleLogicFunction_o *)((__int64 (__fastcall *)(BattleLogicFunctionProcess_FunctionTargetCheck_o *, const MethodInfo *))funcTarget->klass->vtable._8_MakeActionBuffData.methodPtr)(
                                    funcTarget,
                                    funcTarget->klass->vtable._8_MakeActionBuffData.method);
  data = v8->fields.data;
  if ( !data )
    goto LABEL_51;
  if ( !funcEnt )
    goto LABEL_51;
  v15 = (BattleActionData_BuffData_o *)this;
  this = (BattleLogicFunction_o *)data->fields._FieldEnvData_k__BackingField;
  if ( !this )
    goto LABEL_51;
  this = (BattleLogicFunction_o *)BattleFieldEnvironmentData__SubBuffFromIndividuality(
                                    (BattleFieldEnvironmentData_o *)this,
                                    funcEnt->fields.vals,
                                    dataVals_k__BackingField,
                                    0);
  if ( !this )
    goto LABEL_51;
  v16 = (System_Collections_Generic_List_object__o *)this->fields.data;
  if ( !v16 )
    goto LABEL_51;
  if ( v16->fields._size <= 0 )
  {
    if ( !args )
      goto LABEL_51;
    IsCommandSideEffect = BattleLogicFunction_ProcListInArgs__get_IsCommandSideEffect(args, 0);
    this = (BattleLogicFunction_o *)BattleLogicFunction__getNoEffectObject(
                                      v8,
                                      targetId_k__BackingField,
                                      v11,
                                      dataVals_k__BackingField,
                                      IsCommandSideEffect,
                                      0,
                                      v15,
                                      0,
                                      0,
                                      v78);
    if ( !mainAction )
      goto LABEL_51;
    BattleActionData__addAction(mainAction, (BattleActionData_o *)this, 0);
  }
  else
  {
    if ( !args )
      goto LABEL_51;
    v17 = BattleLogicFunction_ProcListInArgs__get_IsCommandSideEffect(args, 0);
    this = (BattleLogicFunction_o *)BattleLogicFunction__getFunctionObject(
                                      (BattleLogicFunction_o *)v17,
                                      funcEnt,
                                      targetId_k__BackingField,
                                      v11,
                                      v17,
                                      v15,
                                      v18);
    v19 = v8->fields.data;
    if ( !v19 )
      goto LABEL_51;
    v20 = this;
    FieldEnvData_k__BackingField = v19->fields._FieldEnvData_k__BackingField;
    v22 = System_Collections_Generic_List_object___ToArray(
            v16,
            (const MethodInfo_4485784 *)Method_System_Collections_Generic_List_BattleBuffData_BuffData__ToArray__);
    this = (BattleLogicFunction_o *)((__int64 (__fastcall *)(BattleLogicFunction_o *, struct BattleFieldEnvironmentData_o *, System_Object_array *, _QWORD, _QWORD))v20->klass[1]._1.byval_arg.data)(
                                      v20,
                                      FieldEnvData_k__BackingField,
                                      v22,
                                      0,
                                      *(_QWORD *)&v20->klass[1]._1.byval_arg.bits);
    v23 = v8->fields.data;
    if ( !v23 )
      goto LABEL_51;
    v24 = v23->fields._FieldEnvData_k__BackingField;
    this = (BattleLogicFunction_o *)System_Collections_Generic_List_object___ToArray(
                                      v16,
                                      (const MethodInfo_4485784 *)Method_System_Collections_Generic_List_BattleBuffData_BuffData__ToArray__);
    if ( !v24 )
      goto LABEL_51;
    BattleFieldEnvironmentData__AfterSubBuffFromIndividuality(
      v24,
      (BattleBuffData_BuffData_array *)this,
      (BattleActionData_BuffData_o *)v20,
      0);
    v25 = (System_Func_object__object__o *)sub_2213CCC(System_Func_BattleBuffData_BuffData__BattleBuffData_BuffData__TypeInfo);
    System_Func_object__object____ctor(
      v25,
      (Il2CppObject *)v8,
      Method_BattleLogicFunction__FunctionSubFieldBuff_b__140_0__,
      0);
    v26 = (System_Collections_Generic_IEnumerable_TSource__o *)System_Linq_Enumerable__Select_object__object_(
                                                                 (System_Collections_Generic_IEnumerable_TSource__o *)v16,
                                                                 (System_Func_TSource__TResult__o *)v25,
                                                                 (const MethodInfo_38911C8 *)Method_System_Linq_Enumerable_Select_BattleBuffData_BuffData__BattleBuffData_BuffData___);
    v27 = System_Linq_Enumerable__ToList_object_(
            v26,
            (const MethodInfo_38A0DF0 *)Method_System_Linq_Enumerable_ToList_BattleBuffData_BuffData___);
    v20[2].monitor = v27;
    sub_2213A04((MissionNaviTransitionBoardItem_o *)&v20[2].monitor, (int32_t)v27, v28, v29, v30, v31, v32, v33);
    v35 = BattleLogicFunction___c_TypeInfo;
    if ( !*(&BattleLogicFunction___c_TypeInfo->_2.cctor_finished + 1) )
    {
      j_il2cpp_runtime_class_init_0(BattleLogicFunction___c_TypeInfo, v34);
      v35 = BattleLogicFunction___c_TypeInfo;
    }
    static_fields = v35->static_fields;
    _9__140_1 = (System_Func_object__bool__o *)static_fields->__9__140_1;
    if ( !_9__140_1 )
    {
      if ( !*(&v35->_2.cctor_finished + 1) )
      {
        j_il2cpp_runtime_class_init_0(v35, v34);
        static_fields = BattleLogicFunction___c_TypeInfo->static_fields;
      }
      v38 = (Il2CppObject *)static_fields->__9;
      _9__140_1 = (System_Func_object__bool__o *)sub_2213CCC(System_Func_BattleBuffData_BuffData__bool__TypeInfo);
      System_Func_object__bool____ctor(
        _9__140_1,
        v38,
        Method_BattleLogicFunction___c__FunctionSubFieldBuff_b__140_1__,
        0);
      v39 = BattleLogicFunction___c_TypeInfo->static_fields;
      v39->__9__140_1 = (struct System_Func_BattleBuffData_BuffData__bool__o *)_9__140_1;
      sub_2213A04(
        (MissionNaviTransitionBoardItem_o *)&v39->__9__140_1,
        (int32_t)_9__140_1,
        v40,
        v41,
        v42,
        v43,
        v44,
        v45);
    }
    if ( BasicHelper__Any_object_(
           (System_Collections_Generic_List_T__o *)v16,
           (System_Func_T__bool__o *)_9__140_1,
           (const MethodInfo_380FDE0 *)Method_BasicHelper_Any_BattleBuffData_BuffData___) )
    {
      v47 = (BattleActionEffect_UpdateAllInfo_o *)sub_2213CCC(BattleActionEffect_UpdateAllInfo_TypeInfo);
      BattleActionEffect_UpdateAllInfo___ctor(v47, 0);
      BattleActionData_BuffData__SetActionEffectProc(
        (BattleActionData_BuffData_o *)v20,
        (BattleActionEffect_Base_o *)v47,
        0);
    }
    v48 = BattleLogicFunction___c_TypeInfo;
    if ( !*(&BattleLogicFunction___c_TypeInfo->_2.cctor_finished + 1) )
    {
      j_il2cpp_runtime_class_init_0(BattleLogicFunction___c_TypeInfo, v46);
      v48 = BattleLogicFunction___c_TypeInfo;
    }
    v49 = v48->static_fields;
    _9__140_2 = (System_Func_object__bool__o *)v49->__9__140_2;
    if ( !_9__140_2 )
    {
      if ( !*(&v48->_2.cctor_finished + 1) )
      {
        j_il2cpp_runtime_class_init_0(v48, v46);
        v49 = BattleLogicFunction___c_TypeInfo->static_fields;
      }
      v51 = (Il2CppObject *)v49->__9;
      _9__140_2 = (System_Func_object__bool__o *)sub_2213CCC(System_Func_BattleBuffData_BuffData__bool__TypeInfo);
      System_Func_object__bool____ctor(
        _9__140_2,
        v51,
        Method_BattleLogicFunction___c__FunctionSubFieldBuff_b__140_2__,
        0);
      v52 = BattleLogicFunction___c_TypeInfo->static_fields;
      v52->__9__140_2 = (struct System_Func_BattleBuffData_BuffData__bool__o *)_9__140_2;
      sub_2213A04(
        (MissionNaviTransitionBoardItem_o *)&v52->__9__140_2,
        (int32_t)_9__140_2,
        v53,
        v54,
        v55,
        v56,
        v57,
        v58);
    }
    this = (BattleLogicFunction_o *)BasicHelper__Any_object_(
                                      (System_Collections_Generic_List_T__o *)v16,
                                      (System_Func_T__bool__o *)_9__140_2,
                                      (const MethodInfo_380FDE0 *)Method_BasicHelper_Any_BattleBuffData_BuffData___);
    if ( ((unsigned __int8)this & 1) != 0 )
    {
      v59 = v8->fields.data;
      if ( !v59 )
        goto LABEL_51;
      v60 = BattleLogicFunction___c_TypeInfo;
      v61 = v59->fields._FieldEnvData_k__BackingField;
      if ( !*(&BattleLogicFunction___c_TypeInfo->_2.cctor_finished + 1) )
      {
        j_il2cpp_runtime_class_init_0(BattleLogicFunction___c_TypeInfo, args);
        v60 = BattleLogicFunction___c_TypeInfo;
      }
      v62 = v60->static_fields;
      _9__140_3 = (System_Func_object__bool__o *)v62->__9__140_3;
      if ( !_9__140_3 )
      {
        if ( !*(&v60->_2.cctor_finished + 1) )
        {
          j_il2cpp_runtime_class_init_0(v60, args);
          v62 = BattleLogicFunction___c_TypeInfo->static_fields;
        }
        v64 = (Il2CppObject *)v62->__9;
        _9__140_3 = (System_Func_object__bool__o *)sub_2213CCC(System_Func_BattleBuffData_BuffData__bool__TypeInfo);
        System_Func_object__bool____ctor(
          _9__140_3,
          v64,
          Method_BattleLogicFunction___c__FunctionSubFieldBuff_b__140_3__,
          0);
        v65 = BattleLogicFunction___c_TypeInfo->static_fields;
        v65->__9__140_3 = (struct System_Func_BattleBuffData_BuffData__bool__o *)_9__140_3;
        sub_2213A04(
          (MissionNaviTransitionBoardItem_o *)&v65->__9__140_3,
          (int32_t)_9__140_3,
          v66,
          v67,
          v68,
          v69,
          v70,
          v71);
      }
      v72 = System_Linq_Enumerable__Where_object_(
              (System_Collections_Generic_IEnumerable_TSource__o *)v16,
              (System_Func_TSource__bool__o *)_9__140_3,
              (const MethodInfo_38A3478 *)Method_System_Linq_Enumerable_Where_BattleBuffData_BuffData___);
      this = (BattleLogicFunction_o *)System_Linq_Enumerable__ToArray_object_(
                                        v72,
                                        (const MethodInfo_389BB2C *)Method_System_Linq_Enumerable_ToArray_BattleBuffData_BuffData___);
      if ( !v61 )
        goto LABEL_51;
      this = (BattleLogicFunction_o *)BattleFieldEnvironmentData__GetApplyTargetSvtArray(
                                        v61,
                                        (BattleBuffData_BuffData_array *)this,
                                        1,
                                        0);
      if ( !this )
        goto LABEL_51;
      logic = this->fields.logic;
      v74 = this;
      if ( (int)logic >= 1 )
      {
        v75 = 0;
        while ( 1 )
        {
          if ( v75 >= (unsigned int)logic )
            sub_2213CE4(this);
          v76 = v8->fields.data;
          if ( !v76 )
            break;
          this = (BattleLogicFunction_o *)v76->fields._FieldEnvData_k__BackingField;
          if ( !this )
            break;
          BattleFieldEnvironmentData__UpdateAttachCardBuffTargetCardIndex(
            (BattleFieldEnvironmentData_o *)this,
            *((BattleServantData_o **)&v74->fields.logictarget + v75),
            0);
          LODWORD(logic) = v74->fields.logic;
          if ( (__int64)++v75 >= (int)logic )
            goto LABEL_46;
        }
LABEL_51:
        sub_2213CDC(this, args);
      }
    }
LABEL_46:
    if ( !mainAction )
      goto LABEL_51;
    BattleActionData__setBuffData(mainAction, (BattleActionData_BuffData_o *)v20, dataVals_k__BackingField, 0, 0);
  }
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
  BattleLogicFunction___c__DisplayClass165_0_o *v12; // x24
  __int64 IsNullOrEmpty; // x0
  __int64 v14; // x1
  System_Int32_array *BackStepTargetArray; // x20
  System_Int32_array *ReplacePositionTargetArray; // x27
  BattleActionData_o *v17; // x26
  __int64 max_length_low; // x8
  int v19; // w28
  int max_length; // w11
  unsigned __int64 v21; // x8
  int32_t *m_Items; // x9
  int32_t *v23; // x10
  int v24; // w13
  int v25; // w14
  int v26; // w13
  unsigned int v27; // w13
  bool v28; // cc
  signed int v29; // w13
  signed int v30; // w14
  int v31; // w13
  System_Collections_Generic_List_object__o *v32; // x25
  const MethodInfo *v33; // x3
  int v34; // w8
  __int64 v35; // x22
  __int64 v36; // x8
  char *v37; // x8
  System_String_o *v38; // x2
  System_String_o *v39; // x3
  int32_t v40; // w4
  int32_t v41; // w5
  bool v42; // w6
  bool v43; // w7
  struct System_Object_array *items; // x8
  _QWORD *v45; // x9
  __int64 size; // x10
  __int64 v47; // x1
  Il2CppClass **v48; // x0
  BattleLogicFunction___c_c *v49; // x0
  struct BattleLogicFunction___c_StaticFields *static_fields; // x8
  System_Func_int__Guid__o *_9__165_0; // x27
  Il2CppObject *v52; // x28
  struct BattleLogicFunction___c_StaticFields *v53; // x0
  System_String_o *v54; // x2
  System_String_o *v55; // x3
  int32_t v56; // w4
  int32_t v57; // w5
  bool v58; // w6
  bool v59; // w7
  System_Collections_Generic_IEnumerable_TSource__o *v60; // x0
  __int64 v61; // x27
  int v62; // w29
  unsigned __int64 v63; // x28
  unsigned int v64; // w19
  char *v65; // x21
  _DWORD *v66; // x21
  int v67; // t1
  const MethodInfo_4483994 *v68; // x2
  struct BattleData_o *data; // x8
  __int64 v71; // x8
  System_Collections_IEnumerable_o *RestockServantLogicList; // x0
  System_Collections_Generic_IEnumerable_TSource__o *v73; // x21
  System_Func_object__bool__o *v74; // x22
  System_Collections_Generic_IEnumerable_TSource__o *v75; // x0
  System_Object_array *v76; // x21
  int v77; // w8
  unsigned int v78; // w24
  RestockServantLogic_o *v79; // x22
  int32_t FieldMemberIndex_k__BackingField; // w23
  unsigned __int64 v81; // x21
  int32_t v82; // w2
  int32_t v83; // [xsp+Ch] [xbp-74h]
  int32_t v84; // [xsp+10h] [xbp-70h]
  bool v85; // [xsp+14h] [xbp-6Ch]

  if ( (byte_5973BEE & 1) == 0 )
  {
    sub_2213A60(&Method_BasicHelper_IsValidIndex_int___);
    sub_2213A60(&BattleActionData_TypeInfo);
    sub_2213A60(&Method_System_Linq_Enumerable_Contains_int___);
    sub_2213A60(&Method_System_Linq_Enumerable_OfType_RestockServantLogicByMoveToSubMember___);
    sub_2213A60(&Method_System_Linq_Enumerable_OrderBy_int__Guid___);
    sub_2213A60(&Method_System_Linq_Enumerable_ToArray_int___);
    sub_2213A60(&Method_System_Linq_Enumerable_ToArray_RestockServantLogicByMoveToSubMember___);
    sub_2213A60(&Method_System_Linq_Enumerable_Where_RestockServantLogicByMoveToSubMember___);
    sub_2213A60(&System_Func_int__Guid__TypeInfo);
    sub_2213A60(&System_Func_RestockServantLogicByMoveToSubMember__bool__TypeInfo);
    sub_2213A60(&Method_System_Collections_Generic_List_BattleServantData__Add__);
    sub_2213A60(&Method_System_Collections_Generic_List_BattleServantData___ctor__);
    sub_2213A60(&Method_System_Collections_Generic_List_BattleServantData__get_Count__);
    sub_2213A60(&Method_System_Collections_Generic_List_BattleServantData__get_Item__);
    sub_2213A60(&System_Collections_Generic_List_BattleServantData__TypeInfo);
    sub_2213A60(&Method_BattleLogicFunction___c__FunctionSwapFieldPosition_b__165_0__);
    sub_2213A60(&Method_BattleLogicFunction___c__DisplayClass165_0__FunctionSwapFieldPosition_b__1__);
    sub_2213A60(&BattleLogicFunction___c__DisplayClass165_0_TypeInfo);
    sub_2213A60(&BattleLogicFunction___c_TypeInfo);
    byte_5973BEE = 1;
  }
  v12 = (BattleLogicFunction___c__DisplayClass165_0_o *)sub_2213CCC(BattleLogicFunction___c__DisplayClass165_0_TypeInfo);
  BattleLogicFunction___c__DisplayClass165_0___ctor(v12, 0);
  if ( !v12 )
    goto LABEL_106;
  v12->fields.isEnemy = isEnemy;
  if ( !baseVals )
    goto LABEL_106;
  BackStepTargetArray = DataVals__GetBackStepTargetArray(baseVals, 0);
  ReplacePositionTargetArray = DataVals__GetReplacePositionTargetArray(baseVals, 0);
  v17 = 0;
  if ( !BasicHelper__IsNullOrEmpty((System_Collections_ICollection_o *)BackStepTargetArray, 0) )
  {
    IsNullOrEmpty = BasicHelper__IsNullOrEmpty((System_Collections_ICollection_o *)ReplacePositionTargetArray, 0);
    v17 = 0;
    if ( (IsNullOrEmpty & 1) == 0 )
    {
      if ( !ReplacePositionTargetArray )
        goto LABEL_106;
      max_length_low = LODWORD(ReplacePositionTargetArray->max_length);
      v19 = max_length_low == 1 && ReplacePositionTargetArray->m_Items[0] == 0;
      if ( !BackStepTargetArray )
        goto LABEL_106;
      max_length = BackStepTargetArray->max_length;
      if ( ((max_length != (_DWORD)max_length_low) & ~v19) != 0 )
        return 0;
      if ( v12->fields.isEnemy )
      {
        IsNullOrEmpty = (__int64)this->fields.data;
        if ( !IsNullOrEmpty )
          goto LABEL_106;
        IsNullOrEmpty = BattleData__getServantIndex(
                          (BattleData_o *)IsNullOrEmpty,
                          1,
                          *(_DWORD *)(IsNullOrEmpty + 344),
                          0);
        max_length = BackStepTargetArray->max_length;
      }
      else
      {
        IsNullOrEmpty = 0xFFFFFFFFLL;
      }
      if ( max_length >= 1 )
      {
        v21 = 0;
        m_Items = BackStepTargetArray->m_Items;
        v23 = ReplacePositionTargetArray->m_Items;
        while ( 1 )
        {
          v24 = m_Items[v21] - 1;
          m_Items[v21] = v24;
          if ( v24 < 0 )
            break;
          if ( !entryIdArray )
            goto LABEL_106;
          v25 = entryIdArray->max_length;
          if ( v24 >= v25 )
          {
            v26 = v25 - 1;
LABEL_24:
            m_Items[v21] = v26;
          }
          if ( (v19 & 1) == 0 )
          {
            if ( v21 >= LODWORD(ReplacePositionTargetArray->max_length) )
              goto LABEL_107;
            v27 = v23[v21];
            v28 = v27 > 0x80000000;
            v29 = v27 - 1;
            v23[v21] = v29;
            if ( v28 )
            {
              v31 = -1;
            }
            else
            {
              if ( !entryIdArray )
                goto LABEL_106;
              v30 = entryIdArray->max_length;
              if ( v29 < v30 )
                goto LABEL_33;
              v31 = v30 - 1;
            }
            v23[v21] = v31;
          }
LABEL_33:
          if ( max_length == ++v21 )
            goto LABEL_34;
        }
        v26 = 0;
        goto LABEL_24;
      }
LABEL_34:
      v83 = IsNullOrEmpty;
      v84 = functionIndex;
      v85 = noTargetSkipSkill;
      v32 = (System_Collections_Generic_List_object__o *)sub_2213CCC(System_Collections_Generic_List_BattleServantData__TypeInfo);
      System_Collections_Generic_List_object____ctor(
        v32,
        (const MethodInfo_44833FC *)Method_System_Collections_Generic_List_BattleServantData___ctor__);
      v34 = BackStepTargetArray->max_length;
      if ( v34 >= 1 )
      {
        v35 = 0;
        while ( (unsigned int)v35 < v34 )
        {
          if ( !entryIdArray )
            goto LABEL_106;
          v36 = BackStepTargetArray->m_Items[v35];
          if ( (unsigned int)v36 >= LODWORD(entryIdArray->max_length) )
            break;
          v37 = (char *)entryIdArray + 4 * v36;
          IsNullOrEmpty = (__int64)this->fields.data;
          v14 = *((unsigned int *)v37 + 8);
          *((_DWORD *)v37 + 8) = -1;
          if ( !IsNullOrEmpty )
            goto LABEL_106;
          IsNullOrEmpty = (__int64)BattleData__getServantData((BattleData_o *)IsNullOrEmpty, v14, 0);
          if ( !v32 )
            goto LABEL_106;
          items = v32->fields._items;
          v45 = Method_System_Collections_Generic_List_BattleServantData__Add__;
          ++v32->fields._version;
          if ( !items )
            goto LABEL_106;
          size = v32->fields._size;
          v47 = IsNullOrEmpty;
          if ( (unsigned int)size >= LODWORD(items->max_length) )
          {
            System_Collections_Generic_List_object___AddWithResize(
              v32,
              (Il2CppObject *)IsNullOrEmpty,
              *(const MethodInfo_4483C64 **)(*(_QWORD *)(v45[4] + 192LL) + 112LL));
          }
          else
          {
            v48 = &items->obj.klass + size;
            v32->fields._size = size + 1;
            v48[4] = (Il2CppClass *)v47;
            sub_2213A04((MissionNaviTransitionBoardItem_o *)(v48 + 4), v47, v38, v39, v40, v41, v42, v43);
          }
          v34 = BackStepTargetArray->max_length;
          if ( (int)++v35 >= v34 )
            goto LABEL_46;
        }
LABEL_107:
        sub_2213CE4(IsNullOrEmpty);
      }
LABEL_46:
      if ( (v19 & 1) != 0 )
      {
        v49 = BattleLogicFunction___c_TypeInfo;
        if ( !*(&BattleLogicFunction___c_TypeInfo->_2.cctor_finished + 1) )
        {
          j_il2cpp_runtime_class_init_0(BattleLogicFunction___c_TypeInfo, v14);
          v49 = BattleLogicFunction___c_TypeInfo;
        }
        static_fields = v49->static_fields;
        _9__165_0 = static_fields->__9__165_0;
        if ( !_9__165_0 )
        {
          if ( !*(&v49->_2.cctor_finished + 1) )
          {
            j_il2cpp_runtime_class_init_0(v49, v14);
            static_fields = BattleLogicFunction___c_TypeInfo->static_fields;
          }
          v52 = (Il2CppObject *)static_fields->__9;
          _9__165_0 = (System_Func_int__Guid__o *)sub_2213CCC(System_Func_int__Guid__TypeInfo);
          System_Func_int__Guid____ctor(
            _9__165_0,
            v52,
            Method_BattleLogicFunction___c__FunctionSwapFieldPosition_b__165_0__,
            0);
          v53 = BattleLogicFunction___c_TypeInfo->static_fields;
          v53->__9__165_0 = _9__165_0;
          sub_2213A04(
            (MissionNaviTransitionBoardItem_o *)&v53->__9__165_0,
            (int32_t)_9__165_0,
            v54,
            v55,
            v56,
            v57,
            v58,
            v59);
        }
        v60 = (System_Collections_Generic_IEnumerable_TSource__o *)System_Linq_Enumerable__OrderBy_int__Guid_(
                                                                     (System_Collections_Generic_IEnumerable_TSource__o *)BackStepTargetArray,
                                                                     (System_Func_TSource__TKey__o *)_9__165_0,
                                                                     (const MethodInfo_3888890 *)Method_System_Linq_Enumerable_OrderBy_int__Guid___);
        IsNullOrEmpty = (__int64)System_Linq_Enumerable__ToArray_int_(
                                   v60,
                                   (const MethodInfo_389B994 *)Method_System_Linq_Enumerable_ToArray_int___);
      }
      else
      {
        IsNullOrEmpty = (__int64)BattleLogicFunction__GetReplaceIndexArray(
                                   (BattleLogicFunction_o *)IsNullOrEmpty,
                                   BackStepTargetArray,
                                   ReplacePositionTargetArray,
                                   v33);
      }
      v61 = IsNullOrEmpty;
      if ( !IsNullOrEmpty )
LABEL_106:
        sub_2213CDC(IsNullOrEmpty, v14);
      if ( *(int *)(IsNullOrEmpty + 24) >= 1 )
      {
        v62 = 0;
        v63 = 0;
        while ( v32 )
        {
          if ( !System_Collections_Generic_List_object___get_Item(
                  v32,
                  v63,
                  (const MethodInfo_4483994 *)Method_System_Collections_Generic_List_BattleServantData__get_Item__) )
            goto LABEL_62;
          IsNullOrEmpty = (__int64)System_Collections_Generic_List_object___get_Item(
                                     v32,
                                     v63,
                                     (const MethodInfo_4483994 *)Method_System_Collections_Generic_List_BattleServantData__get_Item__);
          if ( !IsNullOrEmpty )
            goto LABEL_106;
          if ( !BattleServantData__isAliveLogic((BattleServantData_o *)IsNullOrEmpty, 1, 0) )
LABEL_62:
            ++v62;
          IsNullOrEmpty = (__int64)System_Collections_Generic_List_object___get_Item(
                                     v32,
                                     v63,
                                     (const MethodInfo_4483994 *)Method_System_Collections_Generic_List_BattleServantData__get_Item__);
          if ( IsNullOrEmpty )
          {
            if ( v63 >= *(unsigned int *)(v61 + 24) )
              goto LABEL_107;
            if ( !entryIdArray )
              goto LABEL_106;
            v64 = *(_DWORD *)(v61 + 32 + 4 * v63);
            if ( v64 >= LODWORD(entryIdArray->max_length) )
              goto LABEL_107;
            v65 = (char *)entryIdArray + 4 * (int)v64;
            v67 = *((_DWORD *)v65 + 8);
            v66 = v65 + 32;
            if ( v67 == -1 )
            {
              IsNullOrEmpty = (__int64)System_Collections_Generic_List_object___get_Item(
                                         v32,
                                         v63,
                                         (const MethodInfo_4483994 *)Method_System_Collections_Generic_List_BattleServantData__get_Item__);
              if ( !IsNullOrEmpty )
                goto LABEL_106;
              v68 = (const MethodInfo_4483994 *)Method_System_Collections_Generic_List_BattleServantData__get_Item__;
              *(_DWORD *)(IsNullOrEmpty + 20) = v64;
              IsNullOrEmpty = (__int64)System_Collections_Generic_List_object___get_Item(v32, v63, v68);
              if ( !IsNullOrEmpty )
                goto LABEL_106;
              if ( v64 >= LODWORD(entryIdArray->max_length) )
                goto LABEL_107;
              *v66 = *(_DWORD *)(IsNullOrEmpty + 24);
            }
          }
          if ( (__int64)++v63 >= *(int *)(v61 + 24) )
            goto LABEL_75;
        }
        goto LABEL_106;
      }
      v62 = 0;
      if ( !v32 )
        goto LABEL_106;
LABEL_75:
      if ( v62 == v32->fields._size && v85 )
      {
        return 0;
      }
      else
      {
        if ( v12->fields.isEnemy )
        {
          data = this->fields.data;
          if ( !data )
            goto LABEL_106;
          if ( BasicHelper__IsValidIndex_int_(
                 data->fields.e_entryid,
                 v83,
                 (const MethodInfo_3814F6C *)Method_BasicHelper_IsValidIndex_int___) )
          {
            IsNullOrEmpty = (__int64)this->fields.data;
            if ( !IsNullOrEmpty )
              goto LABEL_106;
            v71 = *(_QWORD *)(IsNullOrEmpty + 320);
            if ( !v71 )
              goto LABEL_106;
            if ( (unsigned int)v83 >= *(_DWORD *)(v71 + 24) )
              goto LABEL_107;
            BattleData__SetTargetId((BattleData_o *)IsNullOrEmpty, *(_DWORD *)(v71 + 4LL * v83 + 32), 0);
          }
        }
        IsNullOrEmpty = (__int64)this->fields.data;
        if ( !IsNullOrEmpty )
          goto LABEL_106;
        RestockServantLogicList = (System_Collections_IEnumerable_o *)BattleData__GetRestockServantLogicList(
                                                                        (BattleData_o *)IsNullOrEmpty,
                                                                        0);
        v73 = (System_Collections_Generic_IEnumerable_TSource__o *)System_Linq_Enumerable__OfType_object_(
                                                                     RestockServantLogicList,
                                                                     (const MethodInfo_388851C *)Method_System_Linq_Enumerable_OfType_RestockServantLogicByMoveToSubMember___);
        v74 = (System_Func_object__bool__o *)sub_2213CCC(System_Func_RestockServantLogicByMoveToSubMember__bool__TypeInfo);
        System_Func_object__bool____ctor(
          v74,
          (Il2CppObject *)v12,
          Method_BattleLogicFunction___c__DisplayClass165_0__FunctionSwapFieldPosition_b__1__,
          0);
        v75 = System_Linq_Enumerable__Where_object_(
                v73,
                (System_Func_TSource__bool__o *)v74,
                (const MethodInfo_38A3478 *)Method_System_Linq_Enumerable_Where_RestockServantLogicByMoveToSubMember___);
        v76 = System_Linq_Enumerable__ToArray_object_(
                v75,
                (const MethodInfo_389BB2C *)Method_System_Linq_Enumerable_ToArray_RestockServantLogicByMoveToSubMember___);
        IsNullOrEmpty = BasicHelper__IsNullOrEmpty((System_Collections_ICollection_o *)v76, 0);
        if ( (IsNullOrEmpty & 1) == 0 )
        {
          if ( !v76 )
            goto LABEL_106;
          v77 = v76->max_length;
          if ( v77 >= 1 )
          {
            v78 = 0;
            while ( v78 < v77 )
            {
              v79 = (RestockServantLogic_o *)v76->m_Items[v78];
              if ( !v79 )
                goto LABEL_106;
              FieldMemberIndex_k__BackingField = v79->fields._FieldMemberIndex_k__BackingField;
              IsNullOrEmpty = System_Linq_Enumerable__Contains_int_(
                                (System_Collections_Generic_IEnumerable_TSource__o *)BackStepTargetArray,
                                FieldMemberIndex_k__BackingField,
                                (const MethodInfo_3876640 *)Method_System_Linq_Enumerable_Contains_int___);
              if ( (IsNullOrEmpty & 1) != 0 )
              {
                if ( (unsigned int)FieldMemberIndex_k__BackingField >= *(_DWORD *)(v61 + 24) )
                  goto LABEL_107;
                RestockServantLogic__OverwriteFieldMemberIndex(
                  v79,
                  *(_DWORD *)(v61 + 4LL * FieldMemberIndex_k__BackingField + 32),
                  0);
              }
              v77 = v76->max_length;
              if ( (int)++v78 >= v77 )
                goto LABEL_97;
            }
            goto LABEL_107;
          }
        }
LABEL_97:
        v17 = (BattleActionData_o *)sub_2213CCC(BattleActionData_TypeInfo);
        BattleActionData___ctor(v17, 0);
        if ( SLODWORD(BackStepTargetArray->max_length) >= 1 )
        {
          v81 = 0;
          while ( 1 )
          {
            IsNullOrEmpty = (__int64)System_Collections_Generic_List_object___get_Item(
                                       v32,
                                       v81,
                                       (const MethodInfo_4483994 *)Method_System_Collections_Generic_List_BattleServantData__get_Item__);
            v82 = IsNullOrEmpty ? *(_DWORD *)(IsNullOrEmpty + 24) : -1;
            if ( v81 >= LODWORD(BackStepTargetArray->max_length) )
              goto LABEL_107;
            if ( !v17 )
              goto LABEL_106;
            BattleActionData__setReplaceMember(v17, BackStepTargetArray->m_Items[v81++], v82, v82, v84, 0);
            if ( (__int64)v81 >= SLODWORD(BackStepTargetArray->max_length) )
              return v17;
          }
        }
      }
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
  BattleBuffData_FieldChangeData_o *v15; // x24
  struct BattleData_o *data; // x8
  Generator_BGFromFieldChangeBGBuff_o *v17; // x22
  const MethodInfo *v18; // x3
  BattleData_o *v19; // x22
  Generator_BGMFromFieldChangeBGBuff_o *v20; // x23
  const MethodInfo *v21; // x4

  v10 = this;
  if ( (byte_5973BE4 & 1) == 0 )
  {
    sub_2213A60(&Generator_BGFromFieldChangeBGBuff_TypeInfo);
    this = (BattleLogicFunction_o *)sub_2213A60(&Generator_BGMFromFieldChangeBGBuff_TypeInfo);
    byte_5973BE4 = 1;
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
  isParam = DataVals__isParam(logictarget, 105, 0);
  this = (BattleLogicFunction_o *)BattleLogicFunction__functionAddState(v10, mainAction, funcTarget, args, isParam, v14);
  if ( !this )
    goto LABEL_17;
  v15 = (BattleBuffData_FieldChangeData_o *)*((_QWORD *)this + 39);
  if ( isTreasureDvc )
  {
    data = v10->fields.data;
    if ( data && mainAction )
    {
      BattleActionData__SetAfterChangeField(
        mainAction,
        v15,
        logictarget,
        data->fields._FieldEnvData_k__BackingField,
        v12,
        0);
      return;
    }
LABEL_17:
    sub_2213CDC(this, args);
  }
  if ( !v15 )
    goto LABEL_17;
  if ( v15->fields.bgId >= 1 )
  {
    v17 = (Generator_BGFromFieldChangeBGBuff_o *)sub_2213CCC(Generator_BGFromFieldChangeBGBuff_TypeInfo);
    Generator_BGFromFieldChangeBGBuff___ctor(v17, v15, 0);
    BattleLogicFunction__FunctionQuickChangeBG(v10, args, (Generator_Background_o *)v17, v18);
  }
  if ( v15->fields.bgmId >= 1 )
  {
    v19 = v10->fields.data;
    v20 = (Generator_BGMFromFieldChangeBGBuff_o *)sub_2213CCC(Generator_BGMFromFieldChangeBGBuff_TypeInfo);
    Generator_BGMFromFieldChangeBGBuff___ctor(v20, v19, v15, 0);
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
    sub_2213CDC(this, baseVals);
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
    || (v4 = this, this = (BattleLogicFunction_o *)DataVals__GetParamArray(baseVals, 84, 0), !v4->fields.data)
    || (BattleData__UpdateTargetPosEnemyAppearValid(v4->fields.data, (System_Int32_array *)this, 1, 0),
        this = (BattleLogicFunction_o *)DataVals__GetParamArray(baseVals, 85, 0),
        (data = v4->fields.data) == 0) )
  {
    sub_2213CDC(this, baseVals);
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
  __int64 v9; // x1
  int v10; // w20

  if ( (byte_5973BB4 & 1) == 0 )
  {
    this = (BattleLogicFunction_o *)sub_2213A60(&System_Math_TypeInfo);
    byte_5973BB4 = 1;
  }
  if ( !dataVals )
    goto LABEL_10;
  this = (BattleLogicFunction_o *)DataVals__isParam(dataVals, 119, 0);
  if ( ((unsigned __int8)this & 1) == 0 )
    return healPoint;
  if ( !targetSvtData )
LABEL_10:
    sub_2213CDC(this, dataVals);
  MaxHp = BattleServantData__getMaxHp(targetSvtData, 0);
  v10 = ((__int64 (__fastcall *)(BattleServantData_o *, const MethodInfo *))targetSvtData->klass->vtable._13_get_resultHp.methodPtr)(
          targetSvtData,
          targetSvtData->klass->vtable._13_get_resultHp.method);
  if ( !*(&System_Math_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(System_Math_TypeInfo, v9);
  return System_Math__Min_77153596(healPoint, MaxHp - v10, 0);
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
  this = (BattleLogicFunction_o *)DataVals__TryGetParam(baseVals, 223, &param[1], 0);
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
  this = (BattleLogicFunction_o *)DataVals__TryGetParam(baseVals, 227, param, 0);
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
    sub_2213CDC(this, baseVals);
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
  struct BattleData_o *data; // x8
  int v9; // w9
  int v10; // w22
  int32_t v11; // w20
  _BOOL4 v12; // w23
  bool isEnemyTurn; // [xsp+Ch] [xbp-34h] BYREF

  isEnemyTurn = 0;
  if ( !dataVals )
    goto LABEL_20;
  v5 = this;
  this = (BattleLogicFunction_o *)DataVals__IsAdjustmentBuffTurn(dataVals, 0);
  if ( ((unsigned __int8)this & 1) == 0 )
    return 0;
  if ( !actionServant || !actionServant->fields.isEnemy )
  {
    data = v5->fields.data;
    if ( data )
    {
      v10 = 0;
      v9 = 1;
      goto LABEL_10;
    }
LABEL_20:
    sub_2213CDC(this, dataVals);
  }
  data = v5->fields.data;
  if ( !data )
    goto LABEL_20;
  v9 = 0;
  v10 = 1;
LABEL_10:
  v12 = data->fields.currentTurn == v9;
  if ( BattleLogicFunction__IsSituationForceTurnProgressExecutable(v5, actionServant, dataVals, &isEnemyTurn, v7) )
    v11 = isEnemyTurn != v10;
  else
    v11 = v12;
  if ( !DataVals__IsExtendBuffHalfTurnInOpponentTurn(dataVals, 0) )
  {
    if ( DataVals__IsShortenBuffHalfTurnInOpponentTurn(dataVals, 0) )
    {
      return v11 << 31 >> 31;
    }
    else if ( DataVals__IsExtendBuffHalfTurnInPartyTurn(dataVals, 0) )
    {
      return v11 ^ 1;
    }
    else
    {
      return (DataVals__IsShortenBuffHalfTurnInPartyTurn(dataVals, 0) & ~v11) << 31 >> 31;
    }
  }
  return v11;
}


int32_t BattleLogicFunction__GetAvailableSkillCount(
        BattleLogicFunction_o *this,
        DataVals_o *dataVals,
        const MethodInfo *method)
{
  __int64 v5; // x20
  BattleData_o *data; // x0
  __int64 v7; // x1
  System_String_o *v8; // x2
  System_String_o *v9; // x3
  int32_t v10; // w4
  int32_t v11; // w5
  bool v12; // w6
  bool v13; // w7
  System_Collections_Generic_IEnumerable_TSource__o *v14; // x21
  System_Int32_array_array *FuncTargetArray; // x0
  System_String_o *v16; // x2
  System_String_o *v17; // x3
  int32_t v18; // w4
  int32_t v19; // w5
  bool v20; // w6
  bool v21; // w7
  System_Func_object__bool__o *v22; // x22
  System_Collections_Generic_IEnumerable_TSource__o *v23; // x0
  int32_t v24; // w20
  int32_t Param; // w0
  __int64 v26; // x1
  int32_t v27; // w19

  if ( (byte_5973BD3 & 1) == 0 )
  {
    sub_2213A60(&Method_System_Linq_Enumerable_Count_BattleSkillInfoData___);
    sub_2213A60(&Method_System_Linq_Enumerable_Where_BattleSkillInfoData___);
    sub_2213A60(&System_Func_BattleSkillInfoData__bool__TypeInfo);
    sub_2213A60(&System_Math_TypeInfo);
    sub_2213A60(&Method_BattleLogicFunction___c__DisplayClass118_0__GetAvailableSkillCount_b__0__);
    sub_2213A60(&BattleLogicFunction___c__DisplayClass118_0_TypeInfo);
    byte_5973BD3 = 1;
  }
  v5 = sub_2213CCC(BattleLogicFunction___c__DisplayClass118_0_TypeInfo);
  BattleLogicFunction___c__DisplayClass118_0___ctor((BattleLogicFunction___c__DisplayClass118_0_o *)v5, 0);
  if ( !v5
    || (*(_QWORD *)(v5 + 16) = this,
        sub_2213A04((MissionNaviTransitionBoardItem_o *)(v5 + 16), (int32_t)this, v8, v9, v10, v11, v12, v13),
        (data = this->fields.data) == 0)
    || (data = (BattleData_o *)BattleData__GetAvailableMasterSkillList(data, 0), !dataVals) )
  {
    sub_2213CDC(data, v7);
  }
  v14 = (System_Collections_Generic_IEnumerable_TSource__o *)data;
  FuncTargetArray = DataVals__GetFuncTargetArray(dataVals, 0);
  *(_QWORD *)(v5 + 24) = FuncTargetArray;
  sub_2213A04((MissionNaviTransitionBoardItem_o *)(v5 + 24), (int32_t)FuncTargetArray, v16, v17, v18, v19, v20, v21);
  v22 = (System_Func_object__bool__o *)sub_2213CCC(System_Func_BattleSkillInfoData__bool__TypeInfo);
  System_Func_object__bool____ctor(
    v22,
    (Il2CppObject *)v5,
    Method_BattleLogicFunction___c__DisplayClass118_0__GetAvailableSkillCount_b__0__,
    0);
  v23 = System_Linq_Enumerable__Where_object_(
          v14,
          (System_Func_TSource__bool__o *)v22,
          (const MethodInfo_38A3478 *)Method_System_Linq_Enumerable_Where_BattleSkillInfoData___);
  v24 = System_Linq_Enumerable__Count_object_(
          v23,
          (const MethodInfo_3879804 *)Method_System_Linq_Enumerable_Count_BattleSkillInfoData___);
  Param = DataVals__GetParam(dataVals, 63, 0, 0);
  if ( Param < 1 )
    return v24;
  v27 = Param;
  if ( !*(&System_Math_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(System_Math_TypeInfo, v26);
  return System_Math__Min_77153596(v24, v27, 0);
}


BuffEntity_o *BattleLogicFunction__GetBuffEntity(
        BattleLogicFunction_o *this,
        FunctionEntity_o *funcEnt,
        const MethodInfo *method)
{
  Il2CppObject *Master_object; // x0
  __int64 v5; // x1
  struct System_Int32_array *vals; // x8

  if ( (byte_5973B95 & 1) == 0 )
  {
    sub_2213A60(&Method_DataManager_GetMaster_BuffMaster___);
    sub_2213A60(&DataManager_TypeInfo);
    sub_2213A60(&Method_DataMasterBase_BuffMaster__BuffEntity__int__GetEntity__);
    byte_5973B95 = 1;
  }
  if ( !*(&DataManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo, funcEnt);
  Master_object = DataManager__GetMaster_object_((const MethodInfo_3856318 *)Method_DataManager_GetMaster_BuffMaster___);
  if ( !funcEnt )
    goto LABEL_10;
  vals = funcEnt->fields.vals;
  if ( !vals )
    goto LABEL_10;
  if ( !LODWORD(vals->max_length) )
    sub_2213CE4(Master_object);
  if ( !Master_object )
LABEL_10:
    sub_2213CDC(Master_object, v5);
  return (BuffEntity_o *)DataMasterBase_object__object__int___GetEntity(
                           (DataMasterBase_TMaster__TEntity__PKType__o *)Master_object,
                           vals->m_Items[0],
                           (const MethodInfo_3F10B30 *)Method_DataMasterBase_BuffMaster__BuffEntity__int__GetEntity__);
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
  __int64 v12; // x1
  long double v13; // q0
  System_Collections_Generic_IEnumerable_BattleLogicFunctionProcess_FunctionTargetCheck__o **p_funcTargetArray_k__BackingField; // x8
  _QWORD *v15; // x19
  __int64 v16; // x8
  __int64 v17; // x0
  __int64 v18; // x0

  if ( (byte_5973BA4 & 1) == 0 )
  {
    sub_2213A60(&Method_System_Array_Empty_BattleLogicFunctionProcess_FunctionTargetCheck___);
    sub_2213A60(&BattleLogicFunctionProcess_DependFunctionUnitCheck_TypeInfo);
    byte_5973BA4 = 1;
  }
  v9 = (BattleLogicFunctionProcess_DependFunctionUnitCheck_o *)sub_2213CCC(BattleLogicFunctionProcess_DependFunctionUnitCheck_TypeInfo);
  BattleLogicFunctionProcess_DependFunctionUnitCheck___ctor(v9, this, args, dataVal, 0);
  if ( !v9 )
    sub_2213CDC(v10, v11);
  if ( BattleLogicFunctionProcess_FunctionUnitCheck__checkCondtion(
         (BattleLogicFunctionProcess_FunctionUnitCheck_o *)v9,
         mainAction,
         0) )
  {
    p_funcTargetArray_k__BackingField = (System_Collections_Generic_IEnumerable_BattleLogicFunctionProcess_FunctionTargetCheck__o **)&v9->fields._funcTargetArray_k__BackingField;
  }
  else
  {
    v15 = Method_System_Array_Empty_BattleLogicFunctionProcess_FunctionTargetCheck___;
    v16 = *((_QWORD *)Method_System_Array_Empty_BattleLogicFunctionProcess_FunctionTargetCheck___ + 7);
    if ( !v16 )
    {
      sub_224B964(Method_System_Array_Empty_BattleLogicFunctionProcess_FunctionTargetCheck___);
      v16 = v15[7];
    }
    v17 = *(_QWORD *)(v16 + 16);
    if ( (*(_WORD *)(v17 + 309) & 1) == 0 )
      v17 = sub_224B908(v13);
    if ( !*(_DWORD *)(v17 + 228) )
      *(__n128 *)&v13 = j_il2cpp_runtime_class_init_0(v17, v12);
    v18 = *(_QWORD *)(v15[7] + 16LL);
    if ( (*(_WORD *)(v18 + 309) & 1) == 0 )
      v18 = sub_224B908(v13);
    p_funcTargetArray_k__BackingField = *(System_Collections_Generic_IEnumerable_BattleLogicFunctionProcess_FunctionTargetCheck__o ***)(v18 + 184);
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
  float v11; // s8
  struct BattleBuffData_SubstituteData_o *substituteData; // x8
  char v19; // w26
  float v20; // s10
  float BuffResistInstantDeath; // s9
  float GrantInstantDeathMagnification; // s9
  int32_t v23; // w20
  bool v25; // w8

  v11 = funcVals;
  if ( !isIgnoreDeathRate )
  {
    if ( substituteBuff )
    {
      substituteData = substituteBuff->fields.substituteData;
      if ( !substituteData )
        goto LABEL_17;
      if ( !substituteData->fields.useSvtResistRate )
      {
        v11 = substituteData->fields.rate * funcVals;
        goto LABEL_9;
      }
    }
    if ( !targetSvtData )
      goto LABEL_17;
    v11 = BattleServantData__getDeathRate(targetSvtData, 0) * funcVals;
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
      sub_2213CDC(this, targetSvtData);
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
  v25 = v23 >= BattleUtility__FloorToInt(v11 + (float)(GrantInstantDeathMagnification * 1000.0), 0) && v23 > 999;
  *isResisted = v25;
  return BattleUtility__FloorToInt(v11 * (float)((float)(1.0 - v20) + GrantInstantDeathMagnification), 0);
}


BattleSkillInfoData_array *BattleLogicFunction__GetReActPassiveSkillArray(
        BattleLogicFunction_o *this,
        int32_t summonedUniqueId,
        System_Collections_Generic_List_BattleServantData__o *svtDataList,
        const MethodInfo *method)
{
  System_Collections_Generic_List_object__o *v6; // x19
  __int64 v7; // x0
  __int64 v8; // x1
  BattleServantData_o *current; // x21
  System_Collections_ICollection_o *ReActForSummonedServant; // x21
  _BOOL8 IsNullOrEmpty; // x0
  __int64 v12; // x1
  System_Collections_Generic_List_Enumerator_object__o v14; // [xsp+8h] [xbp-78h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v15; // [xsp+20h] [xbp-60h] BYREF

  if ( (byte_5973BF3 & 1) == 0 )
  {
    sub_2213A60(&Method_System_Collections_Generic_List_Enumerator_BattleServantData__Dispose__);
    sub_2213A60(&Method_System_Collections_Generic_List_Enumerator_BattleServantData__MoveNext__);
    sub_2213A60(&Method_System_Collections_Generic_List_Enumerator_BattleServantData__get_Current__);
    sub_2213A60(&Method_System_Collections_Generic_List_BattleSkillInfoData__AddRange__);
    sub_2213A60(&Method_System_Collections_Generic_List_BattleServantData__GetEnumerator__);
    sub_2213A60(&Method_System_Collections_Generic_List_BattleSkillInfoData__ToArray__);
    sub_2213A60(&Method_System_Collections_Generic_List_BattleSkillInfoData___ctor__);
    sub_2213A60(&System_Collections_Generic_List_BattleSkillInfoData__TypeInfo);
    byte_5973BF3 = 1;
  }
  memset(&v15, 0, sizeof(v15));
  v6 = (System_Collections_Generic_List_object__o *)sub_2213CCC(System_Collections_Generic_List_BattleSkillInfoData__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v6,
    (const MethodInfo_44833FC *)Method_System_Collections_Generic_List_BattleSkillInfoData___ctor__);
  if ( !svtDataList )
    goto LABEL_15;
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v14,
    (System_Collections_Generic_List_object__o *)svtDataList,
    (const MethodInfo_448473C *)Method_System_Collections_Generic_List_BattleServantData__GetEnumerator__);
  v15 = v14;
  v14.fields._list = 0;
  *(_QWORD *)&v14.fields._index = &v15;
  while ( System_Collections_Generic_List_Enumerator_object___MoveNext(
            &v15,
            (const MethodInfo_40FBAD8 *)Method_System_Collections_Generic_List_Enumerator_BattleServantData__MoveNext__) )
  {
    current = (BattleServantData_o *)v15.fields._current;
    if ( v15.fields._current )
    {
      if ( BattleServantData__isAlive((BattleServantData_o *)v15.fields._current, 0, 0)
        && current->fields.uniqueId != summonedUniqueId )
      {
        ReActForSummonedServant = (System_Collections_ICollection_o *)BattleServantData__GetReActForSummonedServant(
                                                                        current,
                                                                        0);
        IsNullOrEmpty = BasicHelper__IsNullOrEmpty(ReActForSummonedServant, 0);
        if ( !IsNullOrEmpty )
        {
          if ( !v6 )
            sub_2213CDC(IsNullOrEmpty, v12);
          System_Collections_Generic_List_object___AddRange(
            v6,
            (System_Collections_Generic_IEnumerable_T__o *)ReActForSummonedServant,
            (const MethodInfo_4483E74 *)Method_System_Collections_Generic_List_BattleSkillInfoData__AddRange__);
        }
      }
    }
  }
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &v15,
    (const MethodInfo_40FBAD4 *)Method_System_Collections_Generic_List_Enumerator_BattleServantData__Dispose__);
  if ( !v6 )
LABEL_15:
    sub_2213CDC(v7, v8);
  return (BattleSkillInfoData_array *)System_Collections_Generic_List_object___ToArray(
                                        v6,
                                        (const MethodInfo_4485784 *)Method_System_Collections_Generic_List_BattleSkillInfoData__ToArray__);
}


System_Int32_array *BattleLogicFunction__GetReplaceIndexArray(
        BattleLogicFunction_o *this,
        System_Int32_array *backStepTargetArray,
        System_Int32_array *replaceTargetArray,
        const MethodInfo *method)
{
  __int64 v6; // x22
  System_Collections_Generic_List_int__o *v7; // x20
  __int64 v8; // x1
  BattleLogicFunction___c_c *v9; // x0
  struct BattleLogicFunction___c_StaticFields *static_fields; // x8
  System_Func_int__bool__o *_9__166_0; // x23
  Il2CppObject *v12; // x24
  struct BattleLogicFunction___c_StaticFields *v13; // x0
  System_String_o *v14; // x2
  System_String_o *v15; // x3
  int32_t v16; // w4
  int32_t v17; // w5
  bool v18; // w6
  bool v19; // w7
  System_Collections_Generic_IEnumerable_TSource__o *v20; // x0
  System_Collections_Generic_IEnumerable_TSource__o *v21; // x0
  __int64 v22; // x1
  System_String_o *v23; // x2
  System_String_o *v24; // x3
  int32_t v25; // w4
  int32_t v26; // w5
  bool v27; // w6
  bool v28; // w7
  System_Func_int__bool__o *v29; // x23
  System_Collections_Generic_IEnumerable_TSource__o *v30; // x0
  __int64 v31; // x1
  BattleLogicFunction___c_c *v32; // x8
  System_Collections_Generic_IEnumerable_TSource__o *v33; // x21
  struct BattleLogicFunction___c_StaticFields *v34; // x9
  System_Func_int__Guid__o *_9__166_2; // x22
  Il2CppObject *v36; // x23
  struct BattleLogicFunction___c_StaticFields *v37; // x0
  System_String_o *v38; // x2
  System_String_o *v39; // x3
  int32_t v40; // w4
  int32_t v41; // w5
  bool v42; // w6
  bool v43; // w7
  System_Collections_Generic_IEnumerable_TSource__o *v44; // x0
  il2cpp_array_size_t max_length; // x8
  System_Collections_Generic_IEnumerable_TSource__o *v46; // x21
  unsigned __int64 v47; // x22
  struct System_Int32_array *v48; // x8
  _QWORD *v49; // x9
  __int64 v50; // x10
  struct System_Int32_array *items; // x8
  _QWORD *v52; // x9
  __int64 size; // x10

  if ( (byte_5973BEF & 1) == 0 )
  {
    sub_2213A60(&Method_System_Linq_Enumerable_Contains_int___);
    sub_2213A60(&Method_System_Linq_Enumerable_First_int___);
    sub_2213A60(&Method_System_Linq_Enumerable_OrderBy_int__Guid___);
    sub_2213A60(&Method_System_Linq_Enumerable_ToArray_int___);
    sub_2213A60(&Method_System_Linq_Enumerable_ToList_int___);
    sub_2213A60(&Method_System_Linq_Enumerable_Where_int___);
    sub_2213A60(&System_Func_int__Guid__TypeInfo);
    sub_2213A60(&System_Func_int__bool__TypeInfo);
    sub_2213A60(&Method_System_Collections_Generic_List_int__Add__);
    sub_2213A60(&Method_System_Collections_Generic_List_int__RemoveAt__);
    sub_2213A60(&Method_System_Collections_Generic_List_int__ToArray__);
    sub_2213A60(&Method_System_Collections_Generic_List_int___ctor__);
    sub_2213A60(&System_Collections_Generic_List_int__TypeInfo);
    sub_2213A60(&Method_BattleLogicFunction___c__GetReplaceIndexArray_b__166_0__);
    sub_2213A60(&Method_BattleLogicFunction___c__GetReplaceIndexArray_b__166_2__);
    sub_2213A60(&Method_BattleLogicFunction___c__DisplayClass166_0__GetReplaceIndexArray_b__1__);
    sub_2213A60(&BattleLogicFunction___c__DisplayClass166_0_TypeInfo);
    sub_2213A60(&BattleLogicFunction___c_TypeInfo);
    byte_5973BEF = 1;
  }
  v6 = sub_2213CCC(BattleLogicFunction___c__DisplayClass166_0_TypeInfo);
  BattleLogicFunction___c__DisplayClass166_0___ctor((BattleLogicFunction___c__DisplayClass166_0_o *)v6, 0);
  if ( !System_Linq_Enumerable__Contains_int_(
          (System_Collections_Generic_IEnumerable_TSource__o *)replaceTargetArray,
          -1,
          (const MethodInfo_3876640 *)Method_System_Linq_Enumerable_Contains_int___) )
    return replaceTargetArray;
  v7 = (System_Collections_Generic_List_int__o *)sub_2213CCC(System_Collections_Generic_List_int__TypeInfo);
  System_Collections_Generic_List_int____ctor(
    v7,
    (const MethodInfo_44669E0 *)Method_System_Collections_Generic_List_int___ctor__);
  v9 = BattleLogicFunction___c_TypeInfo;
  if ( !*(&BattleLogicFunction___c_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(BattleLogicFunction___c_TypeInfo, v8);
    v9 = BattleLogicFunction___c_TypeInfo;
  }
  static_fields = v9->static_fields;
  _9__166_0 = static_fields->__9__166_0;
  if ( !_9__166_0 )
  {
    if ( !*(&v9->_2.cctor_finished + 1) )
    {
      j_il2cpp_runtime_class_init_0(v9, v8);
      static_fields = BattleLogicFunction___c_TypeInfo->static_fields;
    }
    v12 = (Il2CppObject *)static_fields->__9;
    _9__166_0 = (System_Func_int__bool__o *)sub_2213CCC(System_Func_int__bool__TypeInfo);
    System_Func_int__bool____ctor(_9__166_0, v12, Method_BattleLogicFunction___c__GetReplaceIndexArray_b__166_0__, 0);
    v13 = BattleLogicFunction___c_TypeInfo->static_fields;
    v13->__9__166_0 = _9__166_0;
    sub_2213A04((MissionNaviTransitionBoardItem_o *)&v13->__9__166_0, (int32_t)_9__166_0, v14, v15, v16, v17, v18, v19);
  }
  v20 = System_Linq_Enumerable__Where_int_(
          (System_Collections_Generic_IEnumerable_TSource__o *)replaceTargetArray,
          (System_Func_TSource__bool__o *)_9__166_0,
          (const MethodInfo_38A2E70 *)Method_System_Linq_Enumerable_Where_int___);
  v21 = (System_Collections_Generic_IEnumerable_TSource__o *)System_Linq_Enumerable__ToArray_int_(
                                                               v20,
                                                               (const MethodInfo_389B994 *)Method_System_Linq_Enumerable_ToArray_int___);
  if ( !v6 )
    goto LABEL_38;
  *(_QWORD *)(v6 + 16) = v21;
  sub_2213A04((MissionNaviTransitionBoardItem_o *)(v6 + 16), (int32_t)v21, v23, v24, v25, v26, v27, v28);
  v29 = (System_Func_int__bool__o *)sub_2213CCC(System_Func_int__bool__TypeInfo);
  System_Func_int__bool____ctor(
    v29,
    (Il2CppObject *)v6,
    Method_BattleLogicFunction___c__DisplayClass166_0__GetReplaceIndexArray_b__1__,
    0);
  v30 = System_Linq_Enumerable__Where_int_(
          (System_Collections_Generic_IEnumerable_TSource__o *)backStepTargetArray,
          (System_Func_TSource__bool__o *)v29,
          (const MethodInfo_38A2E70 *)Method_System_Linq_Enumerable_Where_int___);
  v32 = BattleLogicFunction___c_TypeInfo;
  v33 = v30;
  if ( !*(&BattleLogicFunction___c_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(BattleLogicFunction___c_TypeInfo, v31);
    v32 = BattleLogicFunction___c_TypeInfo;
  }
  v34 = v32->static_fields;
  _9__166_2 = v34->__9__166_2;
  if ( !_9__166_2 )
  {
    if ( !*(&v32->_2.cctor_finished + 1) )
    {
      j_il2cpp_runtime_class_init_0(v32, v31);
      v34 = BattleLogicFunction___c_TypeInfo->static_fields;
    }
    v36 = (Il2CppObject *)v34->__9;
    _9__166_2 = (System_Func_int__Guid__o *)sub_2213CCC(System_Func_int__Guid__TypeInfo);
    System_Func_int__Guid____ctor(_9__166_2, v36, Method_BattleLogicFunction___c__GetReplaceIndexArray_b__166_2__, 0);
    v37 = BattleLogicFunction___c_TypeInfo->static_fields;
    v37->__9__166_2 = _9__166_2;
    sub_2213A04((MissionNaviTransitionBoardItem_o *)&v37->__9__166_2, (int32_t)_9__166_2, v38, v39, v40, v41, v42, v43);
  }
  v44 = (System_Collections_Generic_IEnumerable_TSource__o *)System_Linq_Enumerable__OrderBy_int__Guid_(
                                                               v33,
                                                               (System_Func_TSource__TKey__o *)_9__166_2,
                                                               (const MethodInfo_3888890 *)Method_System_Linq_Enumerable_OrderBy_int__Guid___);
  v21 = (System_Collections_Generic_IEnumerable_TSource__o *)System_Linq_Enumerable__ToList_int_(
                                                               v44,
                                                               (const MethodInfo_38A0B70 *)Method_System_Linq_Enumerable_ToList_int___);
  if ( !replaceTargetArray )
    goto LABEL_38;
  max_length = replaceTargetArray->max_length;
  if ( (int)max_length >= 1 )
  {
    v46 = v21;
    v47 = 0;
    do
    {
      if ( v47 >= (unsigned int)max_length )
        sub_2213CE4(v21);
      v22 = (unsigned int)replaceTargetArray->m_Items[v47];
      if ( (v22 & 0x80000000) != 0 )
      {
        v21 = (System_Collections_Generic_IEnumerable_TSource__o *)System_Linq_Enumerable__First_int_(
                                                                     v46,
                                                                     (const MethodInfo_387F7E0 *)Method_System_Linq_Enumerable_First_int___);
        if ( !v7 )
          goto LABEL_38;
        items = v7->fields._items;
        v52 = Method_System_Collections_Generic_List_int__Add__;
        ++v7->fields._version;
        if ( !items )
          goto LABEL_38;
        size = v7->fields._size;
        v22 = (unsigned int)v21;
        if ( (unsigned int)size >= LODWORD(items->max_length) )
        {
          System_Collections_Generic_List_int___AddWithResize(
            v7,
            (int32_t)v21,
            *(const MethodInfo_4467270 **)(*(_QWORD *)(v52[4] + 192LL) + 112LL));
        }
        else
        {
          v7->fields._size = size + 1;
          items->m_Items[size] = (int)v21;
        }
        if ( !v46 )
          goto LABEL_38;
        System_Collections_Generic_List_int___RemoveAt(
          (System_Collections_Generic_List_int__o *)v46,
          0,
          (const MethodInfo_44689B4 *)Method_System_Collections_Generic_List_int__RemoveAt__);
      }
      else
      {
        if ( !v7 )
          goto LABEL_38;
        v48 = v7->fields._items;
        v49 = Method_System_Collections_Generic_List_int__Add__;
        ++v7->fields._version;
        if ( !v48 )
          goto LABEL_38;
        v50 = v7->fields._size;
        if ( (unsigned int)v50 >= LODWORD(v48->max_length) )
        {
          System_Collections_Generic_List_int___AddWithResize(
            v7,
            v22,
            *(const MethodInfo_4467270 **)(*(_QWORD *)(v49[4] + 192LL) + 112LL));
        }
        else
        {
          v7->fields._size = v50 + 1;
          v48->m_Items[v50] = v22;
        }
      }
      LODWORD(max_length) = replaceTargetArray->max_length;
    }
    while ( (__int64)++v47 < (int)max_length );
  }
  if ( !v7 )
LABEL_38:
    sub_2213CDC(v21, v22);
  return System_Collections_Generic_List_int___ToArray(
           v7,
           (const MethodInfo_4468CF0 *)Method_System_Collections_Generic_List_int__ToArray__);
}


BattleActionData_BuffData_o *BattleLogicFunction__GetShowEffectDummyFunctionObject(
        int32_t uniqueId,
        System_Int32_array *effectIds,
        const MethodInfo *method)
{
  __int64 v5; // x20
  __int64 v6; // x0
  __int64 v7; // x1
  System_String_o *v8; // x2
  System_String_o *v9; // x3
  int32_t v10; // w4
  int32_t v11; // w5
  bool v12; // w6
  bool v13; // w7
  int32_t v14; // w1
  System_String_o *v15; // x2
  System_String_o *v16; // x3
  int32_t v17; // w4
  int32_t v18; // w5
  bool v19; // w6
  bool v20; // w7

  if ( (byte_5973BC3 & 1) == 0 )
  {
    sub_2213A60(&BattleActionData_BuffData_TypeInfo);
    sub_2213A60(&StringLiteral_1/*""*/);
    byte_5973BC3 = 1;
  }
  v5 = sub_2213CCC(BattleActionData_BuffData_TypeInfo);
  BattleActionData_BuffData___ctor((BattleActionData_BuffData_o *)v5, 0);
  if ( !v5 )
    sub_2213CDC(v6, v7);
  *(_DWORD *)(v5 + 60) = uniqueId;
  *(_DWORD *)(v5 + 16) = 0;
  v14 = (int)StringLiteral_1/*""*/;
  *(_QWORD *)(v5 + 72) = StringLiteral_1/*""*/;
  sub_2213A04((MissionNaviTransitionBoardItem_o *)(v5 + 72), v14, v8, v9, v10, v11, v12, v13);
  *(_QWORD *)(v5 + 96) = effectIds;
  *(_QWORD *)(v5 + 80) = 0x100000000LL;
  sub_2213A04((MissionNaviTransitionBoardItem_o *)(v5 + 96), (int32_t)effectIds, v15, v16, v17, v18, v19, v20);
  *(_BYTE *)(v5 + 110) = 0;
  *(_DWORD *)(v5 + 48) = 0;
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
  unsigned __int64 v18; // x28
  DataVals_o *v19; // x24
  __int64 v20; // x8
  _QWORD *v21; // x25
  __int64 v22; // x9
  int *v23; // x10
  __int64 v24; // x0
  __int64 v25; // x0
  __int64 v26; // x1
  __int64 v27; // x25
  __int64 v28; // x8
  __int64 v29; // x9
  int *v30; // x10
  __int64 v31; // x0
  __int64 v32; // x0
  __int64 v33; // x1
  __int64 v34; // x25
  __int64 v35; // x8
  __int64 v36; // x9
  int *v37; // x10
  __int64 v38; // x0
  __int64 v39; // x0
  __int64 v40; // x1
  __int64 v41; // x25
  int32_t v42; // w25
  FunctionEntity_o *funcEnt; // x27
  int32_t funcIndex; // w26
  bool IsCommandSideEffect; // w0
  BattleActionData_o *v46; // x0
  __int64 v47; // x0
  __int64 v48; // x1
  __int64 v49; // x25
  __int64 v50; // x8
  __int64 v51; // x9
  int *v52; // x10
  __int64 v53; // x0
  const MethodInfo *v55; // [xsp+0h] [xbp-90h]
  _QWORD *v56; // [xsp+8h] [xbp-88h]
  RemovedBuffInfo_o *subBuffInfo; // [xsp+20h] [xbp-70h] BYREF
  __int64 v58; // [xsp+28h] [xbp-68h]

  if ( (byte_5973BDD & 1) == 0 )
  {
    sub_2213A60(&System_IDisposable_TypeInfo);
    sub_2213A60(&System_Collections_Generic_IEnumerable_BattleLogicFunctionProcess_FunctionTargetCheck__TypeInfo);
    sub_2213A60(&System_Collections_Generic_IEnumerator_BattleLogicFunctionProcess_FunctionTargetCheck__TypeInfo);
    sub_2213A60(&System_Collections_IEnumerator_TypeInfo);
    sub_2213A60(&Method_System_Collections_Generic_List_FuncList_TYPE__Add__);
    sub_2213A60(&Method_System_Collections_Generic_List_FuncList_TYPE___ctor__);
    sub_2213A60(&System_Collections_Generic_List_FuncList_TYPE__TypeInfo);
    sub_2213A60(&RemovedBuffInfoGroup_TypeInfo);
    byte_5973BDD = 1;
  }
  subBuffInfo = 0;
  v58 = 0;
  v9 = (System_Collections_Generic_List_T__o *)sub_2213CCC(System_Collections_Generic_List_FuncList_TYPE__TypeInfo);
  System_Collections_Generic_List_Int32Enum____ctor(
    v9,
    (const MethodInfo_44691F8 *)Method_System_Collections_Generic_List_FuncList_TYPE___ctor__);
  if ( !v9 )
    goto LABEL_62;
  items = v9->fields._items;
  v13 = Method_System_Collections_Generic_List_FuncList_TYPE__Add__;
  ++v9->fields._version;
  if ( !items )
    goto LABEL_62;
  size = v9->fields._size;
  if ( (unsigned int)size >= LODWORD(items->max_length) )
  {
    System_Collections_Generic_List_Int32Enum___AddWithResize(
      v9,
      2,
      *(const MethodInfo_4469A88 **)(*(_QWORD *)(v13[4] + 192LL) + 112LL));
  }
  else
  {
    v9->fields._size = size + 1;
    *((_DWORD *)items->m_Items + size) = 2;
  }
  v15 = (RemovedBuffInfoGroup_o *)sub_2213CCC(RemovedBuffInfoGroup_TypeInfo);
  RemovedBuffInfoGroup___ctor(v15, 0);
  if ( !baseVals )
    goto LABEL_62;
  DependDataValsArray = DataVals__GetDependDataValsArray(
                          baseVals,
                          (System_Collections_Generic_List_FuncList_TYPE__o *)v9,
                          1,
                          0);
  if ( !DependDataValsArray )
    goto LABEL_62;
  v17 = DependDataValsArray[3];
  if ( (int)v17 >= 1 )
  {
    v18 = 0;
    v56 = DependDataValsArray;
    while ( 1 )
    {
      if ( v18 >= (unsigned int)v17 )
        sub_2213CE4(DependDataValsArray);
      v19 = (DataVals_o *)DependDataValsArray[v18 + 4];
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
        v24 = sub_224BC3C(
                DependDataValsArray,
                System_Collections_Generic_IEnumerable_BattleLogicFunctionProcess_FunctionTargetCheck__TypeInfo,
                0);
      }
      v25 = (*(__int64 (__fastcall **)(_QWORD *, _QWORD))v24)(v21, *(_QWORD *)(v24 + 8));
      v58 = v25;
      if ( !v25 )
LABEL_44:
        sub_2213CDC(v25, v26);
      v27 = v25;
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
              goto LABEL_26;
          }
          v31 = v28 + 16LL * *v30 + 312;
        }
        else
        {
LABEL_26:
          v31 = sub_224BC3C(v27, System_Collections_IEnumerator_TypeInfo, 0);
        }
        v32 = (*(__int64 (__fastcall **)(__int64, _QWORD))v31)(v27, *(_QWORD *)(v31 + 8));
        if ( (v32 & 1) == 0 )
          break;
        v34 = v58;
        if ( !v58 )
          sub_2213CDC(v32, v33);
        v35 = *(_QWORD *)v58;
        v36 = *(unsigned __int16 *)(*(_QWORD *)v58 + 302LL);
        if ( *(_WORD *)(*(_QWORD *)v58 + 302LL) )
        {
          v37 = (int *)(*(_QWORD *)(v35 + 176) + 8LL);
          while ( *((System_Collections_Generic_IEnumerator_BattleLogicFunctionProcess_FunctionTargetCheck__c **)v37 - 1) != System_Collections_Generic_IEnumerator_BattleLogicFunctionProcess_FunctionTargetCheck__TypeInfo )
          {
            --v36;
            v37 += 4;
            if ( !v36 )
              goto LABEL_34;
          }
          v38 = v35 + 16LL * *v37 + 312;
        }
        else
        {
LABEL_34:
          v38 = sub_224BC3C(
                  v58,
                  System_Collections_Generic_IEnumerator_BattleLogicFunctionProcess_FunctionTargetCheck__TypeInfo,
                  0);
        }
        v39 = (*(__int64 (__fastcall **)(__int64, _QWORD))v38)(v34, *(_QWORD *)(v38 + 8));
        v41 = v39;
        if ( !v39 )
          sub_2213CDC(0, v40);
        v25 = (*(__int64 (__fastcall **)(__int64, BattleActionData_o *, _QWORD))(*(_QWORD *)v39 + 408LL))(
                v39,
                mainAction,
                *(_QWORD *)(*(_QWORD *)v39 + 416LL));
        if ( (v25 & 1) != 0 )
        {
          if ( !v19 )
            sub_2213CDC(v25, v26);
          if ( !procArg )
            sub_2213CDC(v25, v26);
          v42 = *(_DWORD *)(v41 + 32);
          funcEnt = v19->fields.funcEnt;
          funcIndex = v19->fields.funcIndex;
          IsCommandSideEffect = BattleLogicFunction_ProcListInArgs__get_IsCommandSideEffect(procArg, 0);
          v46 = BattleLogicFunction__functionSubState(
                  this,
                  v42,
                  funcEnt,
                  v19,
                  funcIndex,
                  IsCommandSideEffect,
                  &subBuffInfo,
                  procArg,
                  v55);
          if ( !mainAction )
            sub_2213CDC(v46, v46);
          BattleActionData__addAction(mainAction, v46, 0);
          if ( !v15 )
            sub_2213CDC(v47, v48);
          RemovedBuffInfoGroup__Register(v15, v42, subBuffInfo, 0);
        }
        v27 = v58;
        if ( !v58 )
          goto LABEL_44;
      }
      v49 = v58;
      if ( v58 )
      {
        v50 = *(_QWORD *)v58;
        v51 = *(unsigned __int16 *)(*(_QWORD *)v58 + 302LL);
        if ( *(_WORD *)(*(_QWORD *)v58 + 302LL) )
        {
          v52 = (int *)(*(_QWORD *)(v50 + 176) + 8LL);
          while ( *((System_IDisposable_c **)v52 - 1) != System_IDisposable_TypeInfo )
          {
            --v51;
            v52 += 4;
            if ( !v51 )
              goto LABEL_50;
          }
          v53 = v50 + 16LL * *v52 + 312;
        }
        else
        {
LABEL_50:
          v53 = sub_224BC3C(v58, System_IDisposable_TypeInfo, 0);
        }
        (*(void (__fastcall **)(__int64, _QWORD))v53)(v49, *(_QWORD *)(v53 + 8));
      }
      DependDataValsArray = v56;
      LODWORD(v17) = *((_DWORD *)v56 + 6);
      if ( (__int64)++v18 >= (int)v17 )
        return v15;
    }
LABEL_62:
    sub_2213CDC(DependDataValsArray, v11);
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
  Il2CppObject *v11; // x22
  System_Collections_Generic_Dictionary_object__object__o *v12; // x23
  System_String_o *v13; // x2
  System_String_o *v14; // x3
  int32_t v15; // w4
  int32_t v16; // w5
  bool v17; // w6
  bool v18; // w7

  if ( (byte_5973BAE & 1) == 0 )
  {
    sub_2213A60(&BattleActionData_TypeInfo);
    sub_2213A60(&Method_System_Collections_Generic_Dictionary_BattleBuffData_BuffData__BattleActionData_BuffData___ctor__);
    sub_2213A60(&Method_System_Collections_Generic_Dictionary_BattleBuffData_BuffData__BattleActionData_BuffData__set_Item__);
    sub_2213A60(&System_Collections_Generic_Dictionary_BattleBuffData_BuffData__BattleActionData_BuffData__TypeInfo);
    byte_5973BAE = 1;
  }
  v6 = (BattleActionData_o *)sub_2213CCC(BattleActionData_TypeInfo);
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
    v12 = (System_Collections_Generic_Dictionary_object__object__o *)sub_2213CCC(System_Collections_Generic_Dictionary_BattleBuffData_BuffData__BattleActionData_BuffData__TypeInfo);
    System_Collections_Generic_Dictionary_object__object____ctor(
      v12,
      (const MethodInfo_3FFD280 *)Method_System_Collections_Generic_Dictionary_BattleBuffData_BuffData__BattleActionData_BuffData___ctor__);
    mainAction->fields.substituteActBuffDict = (struct System_Collections_Generic_Dictionary_BattleBuffData_BuffData__BattleActionData_BuffData__o *)v12;
    sub_2213A04(
      (MissionNaviTransitionBoardItem_o *)&mainAction->fields.substituteActBuffDict,
      (int32_t)v12,
      v13,
      v14,
      v15,
      v16,
      v17,
      v18);
    CustomActionBuffData = (System_Collections_Generic_Dictionary_object__object__o *)mainAction->fields.substituteActBuffDict;
  }
  if ( !funcTarget
    || !CustomActionBuffData
    || (System_Collections_Generic_Dictionary_object__object___set_Item(
          CustomActionBuffData,
          (Il2CppObject *)funcTarget->fields.SubstituteBuff,
          v11,
          (const MethodInfo_3FFDBFC *)Method_System_Collections_Generic_Dictionary_BattleBuffData_BuffData__BattleActionData_BuffData__set_Item__),
        CustomActionBuffData = (System_Collections_Generic_Dictionary_object__object__o *)BattleLogicFunctionProcess_FunctionTargetCheck__get_ParentActBuffData(
                                                                                            funcTarget,
                                                                                            0),
        !v6) )
  {
LABEL_10:
    sub_2213CDC(CustomActionBuffData, v10);
  }
  BattleActionData__setBuffData(
    v6,
    (BattleActionData_BuffData_o *)v11,
    0,
    (BattleActionData_BuffData_o *)CustomActionBuffData,
    0);
  return v6;
}


bool BattleLogicFunction__HasMultipleTreasureDamageFunc(
        BattleLogicFunction_o *this,
        BattleLogicFunctionProcess_FunctionUnitCheck_array *funcUnits,
        const MethodInfo *method)
{
  int v3; // w8
  __int64 max_length; // x9
  BattleLogicFunctionProcess_FunctionUnitCheck_o **i; // x10
  struct DataVals_o *dataVals_k__BackingField; // x11
  struct FunctionEntity_o *funcEnt; // x11

  if ( !funcUnits || (int)funcUnits->max_length < 2 )
    return 0;
  v3 = 0;
  max_length = (unsigned int)funcUnits->max_length;
  for ( i = funcUnits->m_Items; ; ++i )
  {
    if ( *i )
    {
      dataVals_k__BackingField = (*i)->fields._dataVals_k__BackingField;
      if ( dataVals_k__BackingField )
      {
        funcEnt = dataVals_k__BackingField->fields.funcEnt;
        if ( funcEnt )
        {
          if ( funcEnt->fields.funcType == 4 && ++v3 > 1 )
            break;
        }
      }
    }
    if ( !--max_length )
      return 0;
  }
  return 1;
}


bool BattleLogicFunction__IsAddStateFieldFlag(
        BattleLogicFunction_o *this,
        BattleBuffData_BuffData_o *buffData,
        const MethodInfo *method)
{
  BattleLogicFunction_o *v4; // x20
  UnityEngine_Object_o *logic; // x21

  v4 = this;
  if ( (byte_5973BA3 & 1) == 0 )
  {
    this = (BattleLogicFunction_o *)sub_2213A60(&UnityEngine_Object_TypeInfo);
    byte_5973BA3 = 1;
  }
  if ( !buffData )
    goto LABEL_11;
  if ( buffData->fields.onfiledUniqueId >= 1 )
  {
    logic = (UnityEngine_Object_o *)v4->fields.logic;
    if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, buffData);
    if ( UnityEngine_Object__op_Inequality(logic, 0, 0) )
    {
      this = (BattleLogicFunction_o *)v4->fields.logic;
      if ( this )
        return BattleLogic__checkInField((BattleLogic_o *)this, buffData->fields.onfiledUniqueId, 0);
LABEL_11:
      sub_2213CDC(this, buffData);
    }
  }
  return 1;
}


// local variable allocation has failed, the output may be wrong!
bool BattleLogicFunction__IsAttackSideEffectInvokeFunc(
        BattleLogicFunction_o *this,
        int32_t funcType,
        DataVals_o *baseVal,
        const MethodInfo *method)
{
  if ( funcType != 34 && funcType != 137 && funcType != 122 )
    return FuncList__isDamage(funcType, 0);
  if ( !baseVal )
    sub_2213CDC(this, *(_QWORD *)&funcType);
  return DataVals__IsActAttackFunction(baseVal, 0);
}


bool BattleLogicFunction__IsExistBattleMissionValueInMasterData(FunctionEntity_o *funcEnt, const MethodInfo *method)
{
  struct System_Int32_array *vals; // x8
  il2cpp_array_size_t max_length; // x8

  if ( !funcEnt || (vals = funcEnt->fields.vals) == 0 )
    sub_2213CDC(funcEnt, method);
  max_length = vals->max_length;
  return (max_length & 1) == 0 && max_length != 0;
}


bool BattleLogicFunction__IsExistBattleValueInMasterData(FunctionEntity_o *funcEnt, const MethodInfo *method)
{
  struct System_Int32_array *vals; // x8
  il2cpp_array_size_t max_length; // x8

  if ( !funcEnt || (vals = funcEnt->fields.vals) == 0 )
    sub_2213CDC(funcEnt, method);
  max_length = vals->max_length;
  return (max_length & 1) == 0 && max_length != 0;
}


bool BattleLogicFunction__IsFuncType169Or170(int32_t funcType, const MethodInfo *method)
{
  return (unsigned int)(funcType - 169) < 2;
}


bool BattleLogicFunction__IsIgnoreResistFunc(
        BattleLogicFunction_o *this,
        System_Int32_array *funcIndividuality,
        const MethodInfo *method)
{
  __int64 v5; // x1
  System_Int32_array *IgnoreResistFuncIndividuality; // x20

  if ( (byte_5973B9A & 1) == 0 )
  {
    sub_2213A60(&Individuality_TypeInfo);
    byte_5973B9A = 1;
  }
  IgnoreResistFuncIndividuality = BattleLogicFunction__get_IgnoreResistFuncIndividuality(
                                    this,
                                    (const MethodInfo *)funcIndividuality);
  if ( !*(&Individuality_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(Individuality_TypeInfo, v5);
  return Individuality__IsPartialMatchArray(IgnoreResistFuncIndividuality, funcIndividuality, 0);
}


// local variable allocation has failed, the output may be wrong!
bool BattleLogicFunction__IsSafeWin(BattleLogicFunction_o *this, int32_t targetId, const MethodInfo *method)
{
  BattleData_o *data; // x0
  BattleServantData_o *ServantData; // x0
  _BOOL4 isEnemy; // w8
  bool IsAliveLogic; // w0

  data = this->fields.data;
  if ( !data )
    goto LABEL_11;
  ServantData = BattleData__getServantData(data, targetId, 0);
  if ( ServantData )
  {
    isEnemy = ServantData->fields.isEnemy;
    data = this->fields.data;
    if ( isEnemy )
    {
      if ( data )
      {
        IsAliveLogic = BattleData__IsAliveLogic(data, 0, 0);
        return !IsAliveLogic;
      }
    }
    else if ( data )
    {
      IsAliveLogic = BattleData__checkBattleContinuationEnemys(data, 0);
      return !IsAliveLogic;
    }
LABEL_11:
    sub_2213CDC(data, *(_QWORD *)&targetId);
  }
  return 0;
}


bool BattleLogicFunction__IsSituationForceTurnProgressExecutable(
        BattleLogicFunction_o *this,
        BattleServantData_o *actionServant,
        DataVals_o *dataVals,
        bool *isEnemyTurn,
        const MethodInfo *method)
{
  int32_t v5; // w5
  bool v6; // w6
  bool v7; // w7
  __int64 v12; // x1
  UnityEngine_Object_o *logic; // x22
  __int64 v14; // x1
  BattleLogic_o *v16; // x0
  const MethodInfo *v17; // x2
  BattleLogicFunction___c__DisplayClass70_0_o v19; // [xsp+8h] [xbp-38h] BYREF

  if ( (byte_5973BA7 & 1) == 0 )
  {
    sub_2213A60(&UnityEngine_Object_TypeInfo);
    byte_5973BA7 = 1;
  }
  v19.fields.dataVals = dataVals;
  sub_2213A04(
    (MissionNaviTransitionBoardItem_o *)&v19,
    (int32_t)dataVals,
    (System_String_o *)dataVals,
    (System_String_o *)isEnemyTurn,
    (int32_t)method,
    v5,
    v6,
    v7);
  *isEnemyTurn = 0;
  logic = (UnityEngine_Object_o *)this->fields.logic;
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v12);
  if ( UnityEngine_Object__op_Equality(logic, 0, 0) )
    return 0;
  if ( actionServant )
    LOBYTE(actionServant) = actionServant->fields.isEnemy;
  v16 = this->fields.logic;
  if ( !v16 )
    goto LABEL_17;
  if ( BattleLogic__IsPlayerTurnAfterBuffTurnProgress(v16, 0) )
  {
    LOBYTE(actionServant) = (unsigned __int8)actionServant ^ 1;
    return BattleLogicFunction___IsSituationForceTurnProgressExecutable_g__IsForceTurnProgress_70_0(
             (bool)actionServant,
             &v19,
             v17);
  }
  v16 = this->fields.logic;
  if ( !v16 )
LABEL_17:
    sub_2213CDC(v16, v14);
  if ( BattleLogic__IsEnemyTurnAfterBuffTurnProgress(v16, 0) )
  {
    *isEnemyTurn = 1;
    return BattleLogicFunction___IsSituationForceTurnProgressExecutable_g__IsForceTurnProgress_70_0(
             (bool)actionServant,
             &v19,
             v17);
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
  _BOOL4 v5; // w19
  BattleData_o *data; // x0
  BattleServantData_o *ServantData; // x0
  BattleServantData_o *v11; // x22
  __int64 v12; // x1
  struct BattleData_o *v13; // x8
  int32_t currentTurn; // w8

  v5 = shortbuff;
  if ( (byte_5973BA6 & 1) == 0 )
  {
    sub_2213A60(&Method_DataManager_GetMaster_ConstantStrMaster___);
    sub_2213A60(&DataManager_TypeInfo);
    sub_2213A60(&StringLiteral_6053/*"EXTEND_TURN_BUFF_TYPE"*/);
    byte_5973BA6 = 1;
  }
  data = this->fields.data;
  if ( !data )
    goto LABEL_23;
  ServantData = BattleData__getServantData(data, targetId, 0);
  if ( !ServantData )
    return (char)ServantData;
  v11 = ServantData;
  data = (BattleData_o *)ServantData->fields.svtdata;
  if ( !data )
    goto LABEL_23;
  if ( !ServantEntity__IsSvtBuffTurnExtend((ServantEntity_o *)data, 0) )
  {
LABEL_16:
    LOBYTE(ServantData) = 0;
    return (char)ServantData;
  }
  if ( !*(&DataManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo, v12);
  data = (BattleData_o *)DataManager__GetMaster_object_((const MethodInfo_3856318 *)Method_DataManager_GetMaster_ConstantStrMaster___);
  if ( !buffEnt || !data )
LABEL_23:
    sub_2213CDC(data, *(_QWORD *)&targetId);
  data = (BattleData_o *)ConstantStrMaster__ExistValueArray(
                           (ConstantStrMaster_o *)data,
                           (System_String_o *)StringLiteral_6053/*"EXTEND_TURN_BUFF_TYPE"*/,
                           buffEnt->fields.type,
                           0);
  if ( ((unsigned __int8)data & 1) == 0 )
    goto LABEL_16;
  v13 = this->fields.data;
  if ( !v13 )
    goto LABEL_23;
  currentTurn = v13->fields.currentTurn;
  if ( currentTurn == 1 )
  {
    if ( (!v11->fields.isEnemy || !v5) && (v11->fields.isEnemy || v5) )
      goto LABEL_16;
  }
  else if ( currentTurn || ((!v11->fields.isEnemy ^ v5) & 1) != 0 )
  {
    goto LABEL_16;
  }
  LOBYTE(ServantData) = 1;
  return (char)ServantData;
}


bool BattleLogicFunction__IsTargetSkill(
        BattleLogicFunction_o *this,
        BattleSkillInfoData_o *skillInfo,
        System_Int32_array_array *targetSkillIndividualityArray,
        const MethodInfo *method)
{
  _BOOL8 IsNullOrEmpty; // x0
  __int64 v7; // x1
  __int64 v9; // x1
  System_Int32_array *v10; // x20

  if ( (byte_5973BD4 & 1) == 0 )
  {
    sub_2213A60(&Individuality_TypeInfo);
    byte_5973BD4 = 1;
  }
  IsNullOrEmpty = BasicHelper__IsNullOrEmpty((System_Collections_ICollection_o *)targetSkillIndividualityArray, 0);
  if ( IsNullOrEmpty )
    return 1;
  if ( !skillInfo )
    sub_2213CDC(IsNullOrEmpty, v7);
  v10 = (System_Int32_array *)((__int64 (__fastcall *)(BattleSkillInfoData_o *, const MethodInfo *))skillInfo->klass->vtable._8_get_IndividualityArray.methodPtr)(
                                skillInfo,
                                skillInfo->klass->vtable._8_get_IndividualityArray.method);
  if ( !*(&Individuality_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(Individuality_TypeInfo, v9);
  return Individuality__CheckSignedMultiIndividualityAllowEmptySelf(v10, targetSkillIndividualityArray, 0);
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
  System_String_o *v10; // x2
  System_String_o *v11; // x3
  int32_t v12; // w4
  int32_t v13; // w5
  bool v14; // w6
  bool v15; // w7
  System_Collections_Generic_IEnumerable_T__o *v16; // x1
  System_Int32_array *ValueArray; // x0

  if ( (byte_5973B98 & 1) == 0 )
  {
    sub_2213A60(&Method_DataManager_GetMasterData_ConstantStrMaster___);
    sub_2213A60(&Method_System_Collections_Generic_List_int__AddRange__);
    sub_2213A60(&Method_System_Collections_Generic_List_int__Contains__);
    sub_2213A60(&Method_System_Collections_Generic_List_int___ctor__);
    sub_2213A60(&System_Collections_Generic_List_int__TypeInfo);
    sub_2213A60(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_5973B98 = 1;
  }
  Instance = (DataManager_o *)*typeList;
  if ( !*typeList )
  {
    v9 = (System_Collections_Generic_List_int__o *)sub_2213CCC(System_Collections_Generic_List_int__TypeInfo);
    System_Collections_Generic_List_int____ctor(
      v9,
      (const MethodInfo_44669E0 *)Method_System_Collections_Generic_List_int___ctor__);
    *typeList = v9;
    sub_2213A04((MissionNaviTransitionBoardItem_o *)typeList, (int32_t)v9, v10, v11, v12, v13, v14, v15);
    Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_47A29F8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( Instance )
    {
      Instance = (DataManager_o *)DataManager__GetMasterData_object_(
                                    Instance,
                                    (const MethodInfo_385636C *)Method_DataManager_GetMasterData_ConstantStrMaster___);
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
            (const MethodInfo_446747C *)Method_System_Collections_Generic_List_int__AddRange__);
        }
        Instance = (DataManager_o *)*typeList;
        if ( *typeList )
          return System_Collections_Generic_List_int___Contains(
                   (System_Collections_Generic_List_int__o *)Instance,
                   buffType,
                   (const MethodInfo_44675F0 *)Method_System_Collections_Generic_List_int__Contains__);
      }
    }
LABEL_11:
    sub_2213CDC(Instance, v16);
  }
  return System_Collections_Generic_List_int___Contains(
           (System_Collections_Generic_List_int__o *)Instance,
           buffType,
           (const MethodInfo_44675F0 *)Method_System_Collections_Generic_List_int__Contains__);
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
  System_String_o *v10; // x2
  System_String_o *v11; // x3
  int32_t v12; // w4
  int32_t v13; // w5
  bool v14; // w6
  bool v15; // w7
  struct BattleSkillInfoData_o *skillInfo; // x1
  System_String_o *v17; // x2
  System_String_o *v18; // x3
  int32_t v19; // w4
  int32_t v20; // w5
  bool v21; // w6
  bool v22; // w7
  __int64 v23; // x22

  if ( (byte_5973BE1 & 1) == 0 )
  {
    sub_2213A60(&BattleActionData_TypeInfo);
    sub_2213A60(&StringLiteral_8685/*"LOSS_COMMAND_SPELL"*/);
    byte_5973BE1 = 1;
  }
  v6 = sub_2213CCC(BattleActionData_TypeInfo);
  BattleActionData___ctor((BattleActionData_o *)v6, 0);
  if ( !actionData )
    goto LABEL_8;
  if ( !v6 )
    goto LABEL_8;
  *(_QWORD *)(v6 + 32) = *(_QWORD *)&actionData->fields.actorId;
  BattleActionData__setStateField((BattleActionData_o *)v6, 0);
  v9 = StringLiteral_8685/*"LOSS_COMMAND_SPELL"*/;
  *(_QWORD *)(v6 + 72) = StringLiteral_8685/*"LOSS_COMMAND_SPELL"*/;
  sub_2213A04((MissionNaviTransitionBoardItem_o *)(v6 + 72), v9, v10, v11, v12, v13, v14, v15);
  skillInfo = actionData->fields.skillInfo;
  *(_QWORD *)(v6 + 160) = skillInfo;
  sub_2213A04((MissionNaviTransitionBoardItem_o *)(v6 + 160), (int32_t)skillInfo, v17, v18, v19, v20, v21, v22);
  if ( !baseVals || (v23 = *(_QWORD *)(v6 + 160), Value = DataVals__GetValue(baseVals, 0), !v23) )
LABEL_8:
    sub_2213CDC(Value, v8);
  *(_DWORD *)(v23 + 100) = Value;
  *(_BYTE *)(v6 + 257) = DataVals__isForcedEffectSpeedOne(baseVals, 0);
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
  int32_t auraEffectId; // w9
  int32_t classIconAuraEffectId; // w10
  bool v12; // w22
  int32_t addOrder; // w8
  int32_t ExecutePriority; // w8

  if ( !buffData || !actBuffData )
    sub_2213CDC(this, actBuffData);
  auraEffectId = buffData->fields.auraEffectId;
  classIconAuraEffectId = buffData->fields.classIconAuraEffectId;
  actBuffData->fields.buffId = buffData->fields.buffId;
  actBuffData->fields.auraEffectId = auraEffectId;
  v12 = isCommandSideEffect;
  actBuffData->fields.classIconAuraEffectId = classIconAuraEffectId;
  actBuffData->fields.isSetPlayerSideBg = BattleBuffData_BuffData__checkState(buffData, 0x8000000, 0);
  actBuffData->fields.isSetEnemySideBg = BattleBuffData_BuffData__checkState(buffData, 0x10000000, 0);
  BattleActionData_BuffData__SetFuncEntityData(actBuffData, funcEnt, 0);
  addOrder = buffData->fields.addOrder;
  actBuffData->fields.isCommandAfter = v12;
  actBuffData->fields.addOrder = addOrder;
  ExecutePriority = BattleBuffData_BuffData__GetExecutePriority(buffData, 0);
  actBuffData->fields.executePriority = ExecutePriority;
  return actBuffData;
}


BattleActionData_BuffData_o *BattleLogicFunction__MakeCustomActionBuffData(
        BattleLogicFunction_o *this,
        BattleLogicFunctionProcess_FunctionTargetCheck_o *funcTarget,
        const MethodInfo *method)
{
  __int64 v4; // x19
  BattleLogicFunctionProcess_FunctionUnitCheck_o *funcUnit_k__BackingField; // x0
  __int64 v6; // x1
  int32_t v7; // w0
  struct System_String_o *invalidText; // x1
  int32_t invalidIconId; // w9
  System_String_o *v10; // x2
  System_String_o *v11; // x3
  int32_t v12; // w4
  int32_t v13; // w5
  bool v14; // w6
  bool v15; // w7
  System_String_o *v16; // x2
  System_String_o *v17; // x3
  int32_t v18; // w4
  int32_t v19; // w5
  bool v20; // w6
  bool v21; // w7
  long double v22; // q0
  struct System_Int32_array *invalidEffectList; // x1
  _QWORD *v24; // x20
  __int64 v25; // x8
  __int64 v26; // x0
  __int64 v27; // x0

  if ( (byte_5973BAD & 1) == 0 )
  {
    sub_2213A60(&Method_System_Array_Empty_int___);
    sub_2213A60(&BattleActionData_BuffData_TypeInfo);
    byte_5973BAD = 1;
  }
  v4 = sub_2213CCC(BattleActionData_BuffData_TypeInfo);
  BattleActionData_BuffData___ctor((BattleActionData_BuffData_o *)v4, 0);
  if ( !funcTarget
    || !v4
    || (funcUnit_k__BackingField = funcTarget->fields._funcUnit_k__BackingField,
        *(_DWORD *)(v4 + 60) = funcTarget->fields._targetId_k__BackingField,
        !funcUnit_k__BackingField) )
  {
    sub_2213CDC(funcUnit_k__BackingField, v6);
  }
  v7 = BattleLogicFunctionProcess_FunctionUnitCheck__get_FuncIndex(funcUnit_k__BackingField, 0);
  invalidText = funcTarget->fields.invalidText;
  invalidIconId = funcTarget->fields.invalidIconId;
  *(_QWORD *)(v4 + 72) = invalidText;
  *(_DWORD *)(v4 + 16) = v7;
  *(_DWORD *)(v4 + 80) = invalidIconId;
  sub_2213A04((MissionNaviTransitionBoardItem_o *)(v4 + 72), (int32_t)invalidText, v10, v11, v12, v13, v14, v15);
  invalidEffectList = funcTarget->fields.invalidEffectList;
  if ( !invalidEffectList )
  {
    v24 = Method_System_Array_Empty_int___;
    v25 = *((_QWORD *)Method_System_Array_Empty_int___ + 7);
    if ( !v25 )
    {
      sub_224B964(Method_System_Array_Empty_int___);
      v25 = v24[7];
    }
    v26 = *(_QWORD *)(v25 + 16);
    if ( (*(_WORD *)(v26 + 309) & 1) == 0 )
      v26 = sub_224B908(v22);
    if ( !*(_DWORD *)(v26 + 228) )
      *(__n128 *)&v22 = j_il2cpp_runtime_class_init_0(v26, invalidEffectList);
    v27 = *(_QWORD *)(v24[7] + 16LL);
    if ( (*(_WORD *)(v27 + 309) & 1) == 0 )
      v27 = sub_224B908(v22);
    invalidEffectList = **(struct System_Int32_array ***)(v27 + 184);
  }
  *(_QWORD *)(v4 + 96) = invalidEffectList;
  sub_2213A04((MissionNaviTransitionBoardItem_o *)(v4 + 96), (int32_t)invalidEffectList, v16, v17, v18, v19, v20, v21);
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
  System_String_o *v15; // x2
  System_String_o *v16; // x3
  int32_t v17; // w4
  int32_t v18; // w5
  bool v19; // w6
  bool v20; // w7
  System_String_o *v21; // x2
  System_String_o *v22; // x3
  int32_t v23; // w4
  int32_t v24; // w5
  bool v25; // w6
  bool v26; // w7

  if ( (byte_5973BAB & 1) == 0 )
  {
    sub_2213A60(&BattleActionData_BuffData_TypeInfo);
    byte_5973BAB = 1;
  }
  v12 = sub_2213CCC(BattleActionData_BuffData_TypeInfo);
  BattleActionData_BuffData___ctor((BattleActionData_BuffData_o *)v12, 0);
  if ( !v12 )
    sub_2213CDC(v13, v14);
  *(_DWORD *)(v12 + 60) = targetId;
  *(_DWORD *)(v12 + 16) = funcIndex;
  *(_DWORD *)(v12 + 80) = iconId;
  *(_QWORD *)(v12 + 72) = popupText;
  sub_2213A04((MissionNaviTransitionBoardItem_o *)(v12 + 72), (int32_t)popupText, v15, v16, v17, v18, v19, v20);
  *(_DWORD *)(v12 + 84) = popupTextColor;
  *(_QWORD *)(v12 + 96) = 0;
  sub_2213A04((MissionNaviTransitionBoardItem_o *)(v12 + 96), 0, v21, v22, v23, v24, v25, v26);
  *(_BYTE *)(v12 + 130) = 1;
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
  System_String_o *v19; // x2
  System_String_o *v20; // x3
  int32_t v21; // w4
  int32_t v22; // w5
  bool v23; // w6
  bool v24; // w7
  System_Int32_array *FamilyLinkageTargetIdArray; // x0
  System_String_o *v26; // x2
  System_String_o *v27; // x3
  int32_t v28; // w4
  int32_t v29; // w5
  bool v30; // w6
  bool v31; // w7
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
  System_Collections_Generic_List_Enumerator_object__o v45; // [xsp+18h] [xbp-B8h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v46; // [xsp+30h] [xbp-A0h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v47; // [xsp+50h] [xbp-80h] BYREF

  if ( (byte_5973BDE & 1) == 0 )
  {
    sub_2213A60(&Method_System_Collections_Generic_Dictionary_int__int__ContainsKey__);
    sub_2213A60(&Method_System_Collections_Generic_Dictionary_int__int___ctor__);
    sub_2213A60(&Method_System_Collections_Generic_Dictionary_int__int__get_Item__);
    sub_2213A60(&Method_System_Collections_Generic_Dictionary_int__RemovedBuffInfo__get_Values__);
    sub_2213A60(&Method_System_Collections_Generic_Dictionary_int__int__set_Item__);
    sub_2213A60(&System_Collections_Generic_Dictionary_int__int__TypeInfo);
    sub_2213A60(&Method_System_Collections_Generic_Dictionary_ValueCollection_Enumerator_int__RemovedBuffInfo__Dispose__);
    sub_2213A60(&Method_System_Collections_Generic_List_Enumerator_BattleBuffData_BuffData__Dispose__);
    sub_2213A60(&Method_System_Collections_Generic_Dictionary_ValueCollection_Enumerator_int__RemovedBuffInfo__MoveNext__);
    sub_2213A60(&Method_System_Collections_Generic_List_Enumerator_BattleBuffData_BuffData__MoveNext__);
    sub_2213A60(&Method_System_Collections_Generic_Dictionary_ValueCollection_Enumerator_int__RemovedBuffInfo__get_Current__);
    sub_2213A60(&Method_System_Collections_Generic_List_Enumerator_BattleBuffData_BuffData__get_Current__);
    sub_2213A60(&int_____TypeInfo);
    sub_2213A60(&Method_System_Collections_Generic_List_BattleBuffData_BuffData__GetEnumerator__);
    this = (BattleLogicFunction_o *)sub_2213A60(&Method_System_Collections_Generic_Dictionary_ValueCollection_int__RemovedBuffInfo__GetEnumerator__);
    byte_5973BDE = 1;
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
                                            (const MethodInfo_3F9C2B4 *)Method_System_Collections_Generic_Dictionary_int__RemovedBuffInfo__get_Values__)) == 0 )
    {
      sub_2213CDC(this, procArg);
    }
    System_Collections_Generic_Dictionary_ValueCollection_int__object___GetEnumerator(
      (System_Collections_Generic_Dictionary_ValueCollection_Enumerator_TKey__TValue__o *)&v45,
      (System_Collections_Generic_Dictionary_ValueCollection_TKey__TValue__o *)this,
      (const MethodInfo_3CC3590 *)Method_System_Collections_Generic_Dictionary_ValueCollection_int__RemovedBuffInfo__GetEnumerator__);
    v47 = v45;
    while ( System_Collections_Generic_Dictionary_ValueCollection_Enumerator_int__object___MoveNext(
              (System_Collections_Generic_Dictionary_ValueCollection_Enumerator_TKey__TValue__o *)&v47,
              (const MethodInfo_41591F8 *)Method_System_Collections_Generic_Dictionary_ValueCollection_Enumerator_int__RemovedBuffInfo__MoveNext__) )
    {
      current = v47.fields._current;
      v10 = (System_Collections_Generic_Dictionary_int__int__o *)sub_2213CCC(System_Collections_Generic_Dictionary_int__int__TypeInfo);
      System_Collections_Generic_Dictionary_int__int____ctor(
        v10,
        (const MethodInfo_3F9227C *)Method_System_Collections_Generic_Dictionary_int__int___ctor__);
      if ( !current )
        sub_2213CDC(v11, v12);
      klass = (System_Collections_Generic_List_object__o *)current[1].klass;
      if ( !klass )
        sub_2213CDC(0, v12);
      System_Collections_Generic_List_object___GetEnumerator(
        (System_Collections_Generic_List_Enumerator_T__o *)&v45,
        klass,
        (const MethodInfo_448473C *)Method_System_Collections_Generic_List_BattleBuffData_BuffData__GetEnumerator__);
      v46 = v45;
      while ( 1 )
      {
        v14 = System_Collections_Generic_List_Enumerator_object___MoveNext(
                &v46,
                (const MethodInfo_40FBAD8 *)Method_System_Collections_Generic_List_Enumerator_BattleBuffData_BuffData__MoveNext__);
        if ( !v14 )
          break;
        v16 = v46.fields._current;
        if ( !v46.fields._current )
          sub_2213CDC(v14, v15);
        if ( BattleBuffData_BuffData__IsFamilyBuff((BattleBuffData_BuffData_o *)v46.fields._current, 0) )
        {
          v17 = sub_2213B20(int_____TypeInfo, 2);
          FamilyLinkageIdArray = BattleBuffData_BuffData__get_FamilyLinkageIdArray((BattleBuffData_BuffData_o *)v16, 0);
          if ( !v17 )
            sub_2213CDC(FamilyLinkageIdArray, FamilyLinkageIdArray);
          if ( !*(_DWORD *)(v17 + 24) )
            sub_2213CE4(FamilyLinkageIdArray);
          *(_QWORD *)(v17 + 32) = FamilyLinkageIdArray;
          sub_2213A04(
            (MissionNaviTransitionBoardItem_o *)(v17 + 32),
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
          if ( (*(_DWORD *)(v17 + 24) & 0xFFFFFFFE) == 0 )
            sub_2213CE4(FamilyLinkageTargetIdArray);
          *(_QWORD *)(v17 + 40) = FamilyLinkageTargetIdArray;
          sub_2213A04(
            (MissionNaviTransitionBoardItem_o *)(v17 + 40),
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
                sub_2213CE4(IsNullOrEmpty);
              v35 = *(System_Collections_ICollection_o **)(v17 + 8 * v34 + 32);
              IsNullOrEmpty = BasicHelper__IsNullOrEmpty(v35, 0);
              if ( (IsNullOrEmpty & 1) == 0 )
              {
                if ( !v35 )
                  sub_2213CDC(IsNullOrEmpty, v36);
                monitor = (unsigned __int64)v35[1].monitor;
                if ( (int)monitor >= 1 )
                {
                  v38 = (unsigned int)v35[1].monitor;
                  v39 = 0;
                  v40 = v35 + 2;
                  do
                  {
                    if ( v39 >= (unsigned int)monitor )
                      sub_2213CE4(IsNullOrEmpty);
                    if ( !v10 )
                      sub_2213CDC(IsNullOrEmpty, v36);
                    v41 = System_Collections_Generic_Dictionary_int__int___ContainsKey(
                            v10,
                            *((_DWORD *)&v40->klass + v39),
                            (const MethodInfo_3F92E0C *)Method_System_Collections_Generic_Dictionary_int__int__ContainsKey__);
                    if ( !v41 )
                    {
                      if ( v39 >= LODWORD(v35[1].monitor) )
                        sub_2213CE4(v41);
                      if ( !v8 )
                        sub_2213CDC(v41, v42);
                      v43 = *((_DWORD *)&v40->klass + v39);
                      v44 = FamilyBuffLinkageIdGenerator__Next(v8, 0);
                      System_Collections_Generic_Dictionary_int__int___set_Item(
                        v10,
                        v43,
                        v44,
                        (const MethodInfo_3F92C0C *)Method_System_Collections_Generic_Dictionary_int__int__set_Item__);
                    }
                    if ( v39 >= LODWORD(v35[1].monitor) )
                      sub_2213CE4(v41);
                    IsNullOrEmpty = System_Collections_Generic_Dictionary_int__int___get_Item(
                                      v10,
                                      *((_DWORD *)&v40->klass + v39),
                                      (const MethodInfo_3F92B84 *)Method_System_Collections_Generic_Dictionary_int__int__get_Item__);
                    monitor = LODWORD(v35[1].monitor);
                    if ( v39 >= monitor )
                      sub_2213CE4(IsNullOrEmpty);
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
        (const MethodInfo_40FBAD4 *)Method_System_Collections_Generic_List_Enumerator_BattleBuffData_BuffData__Dispose__);
    }
    System_Collections_Generic_Dictionary_ValueCollection_Enumerator_int__object___Dispose(
      (System_Collections_Generic_Dictionary_ValueCollection_Enumerator_TKey__TValue__o *)&v47,
      (const MethodInfo_41591F4 *)Method_System_Collections_Generic_Dictionary_ValueCollection_Enumerator_int__RemovedBuffInfo__Dispose__);
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
  BattleActionData_BuffData_o *FunctionObject; // x22
  BattleSkillDropInfo_c *v15; // x0
  BattleSkillDropInfo_o *v16; // x23
  System_String_o *v17; // x2
  System_String_o *v18; // x3
  int32_t v19; // w4
  int32_t v20; // w5
  bool v21; // w6
  bool v22; // w7

  if ( (byte_5973BED & 1) == 0 )
  {
    this = (BattleLogicFunction_o *)sub_2213A60(&BattleSkillDropInfo_TypeInfo);
    byte_5973BED = 1;
  }
  if ( !baseVals )
    goto LABEL_7;
  if ( !procArg )
    goto LABEL_7;
  funcIndex = baseVals->fields.funcIndex;
  funcEnt = baseVals->fields.funcEnt;
  IsCommandSideEffect = BattleLogicFunction_ProcListInArgs__get_IsCommandSideEffect(procArg, 0);
  FunctionObject = BattleLogicFunction__getFunctionObject(
                     (BattleLogicFunction_o *)IsCommandSideEffect,
                     funcEnt,
                     dropperUniqueId,
                     funcIndex,
                     IsCommandSideEffect,
                     0,
                     v13);
  v15 = BattleSkillDropInfo_TypeInfo;
  FunctionObject->fields.procType = 0;
  v16 = (BattleSkillDropInfo_o *)sub_2213CCC(v15);
  BattleSkillDropInfo___ctor(v16, dropperUniqueId, baseVals, 0);
  FunctionObject->fields.battleSkillDropInfo = v16;
  sub_2213A04(
    (MissionNaviTransitionBoardItem_o *)&FunctionObject->fields.battleSkillDropInfo,
    (int32_t)v16,
    v17,
    v18,
    v19,
    v20,
    v21,
    v22);
  if ( !actionData )
LABEL_7:
    sub_2213CDC(this, actionData);
  BattleActionData__setBuffData(actionData, FunctionObject, baseVals, 0, 0);
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
    sub_2213CDC(this, mainActionData);
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
  System_String_o *v9; // x2
  System_String_o *v10; // x3
  int32_t v11; // w4
  int32_t v12; // w5
  bool v13; // w6
  bool v14; // w7
  __int64 v15; // d0
  int32_t v16; // w1
  __int64 v17; // x22
  System_String_o *v18; // x2
  System_String_o *v19; // x3
  int32_t v20; // w4
  int32_t v21; // w5
  bool v22; // w6
  bool v23; // w7
  float v24; // s0
  BattleSkillInfoData_o *skillInfo; // x0
  System_String_o *v26; // x1
  float EnemyCountWaitTimeAfterEffect; // s0
  System_String_o *v28; // x2
  System_String_o *v29; // x3
  int32_t v30; // w4
  int32_t v31; // w5
  bool v32; // w6
  bool v33; // w7

  if ( (byte_5973BEC & 1) == 0 )
  {
    sub_2213A60(&BattleActionData_TypeInfo);
    sub_2213A60(&BattleActionData_EnemyCountChangeData_TypeInfo);
    sub_2213A60(&StringLiteral_5667/*"ENEMY_COUNT_CHANGE"*/);
    byte_5973BEC = 1;
  }
  v6 = sub_2213CCC(BattleActionData_TypeInfo);
  BattleActionData___ctor((BattleActionData_o *)v6, 0);
  if ( !mainActionData )
    goto LABEL_10;
  if ( !v6 )
    goto LABEL_10;
  v15 = *(_QWORD *)&mainActionData->fields.actorId;
  v16 = StringLiteral_5667/*"ENEMY_COUNT_CHANGE"*/;
  *(_QWORD *)(v6 + 72) = StringLiteral_5667/*"ENEMY_COUNT_CHANGE"*/;
  *(_QWORD *)(v6 + 32) = v15;
  sub_2213A04((MissionNaviTransitionBoardItem_o *)(v6 + 72), v16, v9, v10, v11, v12, v13, v14);
  v17 = sub_2213CCC(BattleActionData_EnemyCountChangeData_TypeInfo);
  BattleActionData_EnemyCountChangeData___ctor((BattleActionData_EnemyCountChangeData_o *)v17, 0);
  if ( !baseVals || (Value = DataVals__GetValue(baseVals, 0), !v17) )
LABEL_10:
    sub_2213CDC(Value, v8);
  *(_DWORD *)(v17 + 16) = Value;
  v24 = DataVals__GetEnemyCountChangeTime(baseVals, 3000, 0);
  skillInfo = mainActionData->fields.skillInfo;
  v26 = 0;
  *(float *)(v17 + 20) = v24;
  if ( skillInfo )
    v26 = BattleSkillInfoData__GetEnemyCountChangeMessage(skillInfo, 0);
  *(_QWORD *)(v17 + 24) = v26;
  sub_2213A04((MissionNaviTransitionBoardItem_o *)(v17 + 24), (int32_t)v26, v18, v19, v20, v21, v22, v23);
  *(_DWORD *)(v17 + 32) = DataVals__GetEnemyCountChangeEffectId(baseVals, 0);
  *(float *)(v17 + 36) = DataVals__GetEnemyCountWaitTimeAfterMessage(baseVals, 0);
  EnemyCountWaitTimeAfterEffect = DataVals__GetEnemyCountWaitTimeAfterEffect(baseVals, 0);
  *(_QWORD *)(v6 + 600) = v17;
  *(float *)(v17 + 40) = EnemyCountWaitTimeAfterEffect;
  sub_2213A04((MissionNaviTransitionBoardItem_o *)(v6 + 600), v17, v28, v29, v30, v31, v32, v33);
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
  unsigned int *FuncSideEffectTargetServants; // x0
  __int64 v12; // x1
  int v13; // w8
  unsigned __int64 v14; // x9
  unsigned __int8 v15; // w23
  __int64 v16; // x8
  unsigned int *v17; // x28
  unsigned __int64 v18; // x24
  BattleServantData_o *v19; // x29
  __int64 v20; // x8
  unsigned int *v21; // x23
  unsigned __int64 v22; // x25
  BattleBuffData_BuffData_o *v23; // x26
  BattleActionData_o *SideEffectActionData_52580588; // x0
  const MethodInfo *v25; // x6
  BattleData_o *data; // x8
  unsigned __int64 v27; // x8
  unsigned int *v28; // x24
  unsigned __int64 v29; // x28
  unsigned int *v30; // x8
  __int64 v31; // x25
  __int64 v32; // x8
  unsigned int *v33; // x26
  unsigned __int64 v34; // x29
  BattleBuffData_BuffData_o *v35; // x27
  const MethodInfo *v36; // x6
  __int64 v37; // x1
  System_Collections_Generic_IEnumerable_T__o *SideEffectList; // x19
  BattleLogicFunction___c_c *v39; // x8
  struct BattleLogicFunction___c_StaticFields *static_fields; // x9
  System_Action_object__o *_9__54_0; // x20
  Il2CppObject *v42; // x21
  struct BattleLogicFunction___c_StaticFields *v43; // x0
  System_String_o *v44; // x2
  System_String_o *v45; // x3
  int32_t v46; // w4
  int32_t v47; // w5
  bool v48; // w6
  bool v49; // w7
  int *v50; // [xsp+0h] [xbp-90h]
  unsigned __int64 v52; // [xsp+10h] [xbp-80h]
  BattleCommandData_o *command; // [xsp+18h] [xbp-78h]
  System_Int32_array *questIndividualityArray; // [xsp+28h] [xbp-68h]
  System_Int32_array *questIndividualityArraya; // [xsp+28h] [xbp-68h]

  if ( (byte_5973B9E & 1) == 0 )
  {
    sub_2213A60(&System_Action_BattleActionData__TypeInfo);
    sub_2213A60(&Method_BasicHelper_ForEach_BattleActionData___);
    sub_2213A60(&BattleTreasureDeviceCommandData_TypeInfo);
    sub_2213A60(&bool___TypeInfo);
    sub_2213A60(&Method_DataManager_GetMaster_SkillLvMaster___);
    sub_2213A60(&DataManager_TypeInfo);
    sub_2213A60(&BattleLogicFunction_TreasureDeviceSideEffectFunctionArgument_TypeInfo);
    sub_2213A60(&Method_BattleLogicFunction___c__SetFuncSideEffect_b__54_0__);
    sub_2213A60(&BattleLogicFunction___c_TypeInfo);
    byte_5973B9E = 1;
  }
  if ( actionData && actorSvtData )
  {
    if ( sideEffectArg
      && (naturalAligment = BattleLogicFunction_TreasureDeviceSideEffectFunctionArgument_TypeInfo->_2.naturalAligment,
          sideEffectArg->klass->_2.naturalAligment >= (unsigned int)naturalAligment)
      && (BattleLogicFunction_TreasureDeviceSideEffectFunctionArgument_c *)sideEffectArg->klass->_2.typeHierarchy[naturalAligment - 1] == BattleLogicFunction_TreasureDeviceSideEffectFunctionArgument_TypeInfo )
    {
      command = (BattleCommandData_o *)sub_2213CCC(BattleTreasureDeviceCommandData_TypeInfo);
      BattleTreasureDeviceCommandData___ctor((BattleTreasureDeviceCommandData_o *)command, actorSvtData, 0);
    }
    else
    {
      command = 0;
    }
    if ( !*(&DataManager_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(DataManager_TypeInfo, sideEffectArg);
    Master_object = DataManager__GetMaster_object_((const MethodInfo_3856318 *)Method_DataManager_GetMaster_SkillLvMaster___);
    FuncSideEffectTargetServants = (unsigned int *)sub_2213B20(bool___TypeInfo, 2);
    if ( !FuncSideEffectTargetServants )
      goto LABEL_53;
    v13 = FuncSideEffectTargetServants[6];
    if ( !v13 )
      goto LABEL_54;
    *((_BYTE *)FuncSideEffectTargetServants + 32) = 1;
    if ( v13 >= 1 )
    {
      v14 = 0;
      v50 = (int *)FuncSideEffectTargetServants;
      while ( 1 )
      {
        if ( v14 >= (unsigned int)v13 )
          goto LABEL_54;
        if ( !sideEffectArg )
          goto LABEL_53;
        v52 = v14;
        v15 = *((_BYTE *)FuncSideEffectTargetServants + v14 + 32);
        questIndividualityArray = (System_Int32_array *)((__int64 (__fastcall *)(BattleLogicFunction_FuncSideEffectFunctionArgument_o *, _QWORD, const MethodInfo *))sideEffectArg->klass->vtable._6_GetActArray.methodPtr)(
                                                          sideEffectArg,
                                                          v15,
                                                          sideEffectArg->klass->vtable._6_GetActArray.method);
        FuncSideEffectTargetServants = (unsigned int *)BattleActionData__GetFuncSideEffectTargetServants(
                                                         actionData,
                                                         this->fields.data,
                                                         v15,
                                                         targetIds,
                                                         0);
        if ( !FuncSideEffectTargetServants )
          goto LABEL_53;
        v16 = *((_QWORD *)FuncSideEffectTargetServants + 3);
        v17 = FuncSideEffectTargetServants;
        if ( (int)v16 >= 1 )
          break;
LABEL_28:
        FuncSideEffectTargetServants = (unsigned int *)v50;
        v13 = v50[6];
        v14 = v52 + 1;
        if ( (__int64)(v52 + 1) >= v13 )
          goto LABEL_29;
      }
      v18 = 0;
      while ( 1 )
      {
        if ( v18 >= (unsigned int)v16 )
          goto LABEL_54;
        v19 = *(BattleServantData_o **)&v17[2 * v18 + 8];
        FuncSideEffectTargetServants = (unsigned int *)BattleServantData__GetAddSideEffectBuffList(
                                                         actorSvtData,
                                                         (BuffList_ACTION_array *)questIndividualityArray,
                                                         v19,
                                                         command,
                                                         0,
                                                         0);
        if ( !FuncSideEffectTargetServants )
          goto LABEL_53;
        v20 = *((_QWORD *)FuncSideEffectTargetServants + 3);
        v21 = FuncSideEffectTargetServants;
        if ( (int)v20 >= 1 )
          break;
LABEL_27:
        LODWORD(v16) = v17[6];
        if ( (__int64)++v18 >= (int)v16 )
          goto LABEL_28;
      }
      v22 = 0;
      while ( v22 < (unsigned int)v20 )
      {
        if ( !v19 )
          goto LABEL_53;
        v23 = *(BattleBuffData_BuffData_o **)&v21[2 * v22 + 8];
        SideEffectActionData_52580588 = BattleActionData__MakeSideEffectActionData_52580588(
                                          actionData,
                                          4,
                                          v19->fields.uniqueId,
                                          0);
        BattleLogicFunction__SetSideEffectBuff(
          this,
          (SkillLvMaster_o *)Master_object,
          SideEffectActionData_52580588,
          v23,
          (BattleLogicFunction_CommonSideEffectFunctionArgument_o *)sideEffectArg,
          1,
          v25);
        LODWORD(v20) = v21[6];
        if ( (__int64)++v22 >= (int)v20 )
          goto LABEL_27;
      }
LABEL_54:
      sub_2213CE4(FuncSideEffectTargetServants);
    }
LABEL_29:
    FuncSideEffectTargetServants = (unsigned int *)this->fields.data;
    if ( !FuncSideEffectTargetServants
      || (FuncSideEffectTargetServants = (unsigned int *)BattleData__getQuestIndividualities(
                                                           (BattleData_o *)FuncSideEffectTargetServants,
                                                           0),
          data = this->fields.data,
          questIndividualityArraya = (System_Int32_array *)FuncSideEffectTargetServants,
          !data)
      || (FuncSideEffectTargetServants = (unsigned int *)BattleData__getFieldServantList(data, 0, 0)) == 0 )
    {
LABEL_53:
      sub_2213CDC(FuncSideEffectTargetServants, v12);
    }
    v27 = FuncSideEffectTargetServants[6];
    v28 = FuncSideEffectTargetServants;
    if ( (int)v27 >= 1 )
    {
      v29 = 0;
      while ( 1 )
      {
        if ( v29 >= v27 )
          goto LABEL_54;
        v30 = &v28[2 * v29];
        v31 = *((_QWORD *)v30 + 4);
        if ( !v31 )
          goto LABEL_53;
        FuncSideEffectTargetServants = (unsigned int *)BattleServantData__GetFieldIndividualityChangedFunctionBuff(
                                                         *((BattleServantData_o **)v30 + 4),
                                                         questIndividualityArraya,
                                                         0);
        if ( !FuncSideEffectTargetServants )
          goto LABEL_53;
        v32 = *((_QWORD *)FuncSideEffectTargetServants + 3);
        v33 = FuncSideEffectTargetServants;
        if ( (int)v32 >= 1 )
          break;
LABEL_42:
        v27 = v28[6];
        if ( (int)++v29 >= (int)v27 )
          goto LABEL_43;
      }
      v34 = 0;
      while ( v34 < (unsigned int)v32 )
      {
        v35 = *(BattleBuffData_BuffData_o **)&v33[2 * v34 + 8];
        FuncSideEffectTargetServants = (unsigned int *)BattleActionData__MakeSideEffectActionData_52580588(
                                                         actionData,
                                                         4,
                                                         *(_DWORD *)(v31 + 24),
                                                         0);
        if ( !FuncSideEffectTargetServants )
          goto LABEL_53;
        FuncSideEffectTargetServants[8] = *(_DWORD *)(v31 + 24);
        BattleLogicFunction__SetSideEffectBuff(
          this,
          (SkillLvMaster_o *)Master_object,
          (BattleActionData_o *)FuncSideEffectTargetServants,
          v35,
          (BattleLogicFunction_CommonSideEffectFunctionArgument_o *)sideEffectArg,
          1,
          v36);
        LODWORD(v32) = v33[6];
        if ( (__int64)++v34 >= (int)v32 )
          goto LABEL_42;
      }
      goto LABEL_54;
    }
LABEL_43:
    if ( BattleActionData__ExistSideEffect(actionData, 4, 0) )
    {
      BattleActionData__SetFuncSideEffectTrigger(actionData, 0);
      SideEffectList = (System_Collections_Generic_IEnumerable_T__o *)BattleActionData__getSideEffectList(
                                                                        actionData,
                                                                        4,
                                                                        0);
      v39 = BattleLogicFunction___c_TypeInfo;
      if ( !*(&BattleLogicFunction___c_TypeInfo->_2.cctor_finished + 1) )
      {
        j_il2cpp_runtime_class_init_0(BattleLogicFunction___c_TypeInfo, v37);
        v39 = BattleLogicFunction___c_TypeInfo;
      }
      static_fields = v39->static_fields;
      _9__54_0 = (System_Action_object__o *)static_fields->__9__54_0;
      if ( !_9__54_0 )
      {
        if ( !*(&v39->_2.cctor_finished + 1) )
        {
          j_il2cpp_runtime_class_init_0(v39, v37);
          static_fields = BattleLogicFunction___c_TypeInfo->static_fields;
        }
        v42 = (Il2CppObject *)static_fields->__9;
        _9__54_0 = (System_Action_object__o *)sub_2213CCC(System_Action_BattleActionData__TypeInfo);
        System_Action_object____ctor(_9__54_0, v42, Method_BattleLogicFunction___c__SetFuncSideEffect_b__54_0__, 0);
        v43 = BattleLogicFunction___c_TypeInfo->static_fields;
        v43->__9__54_0 = (struct System_Action_BattleActionData__o *)_9__54_0;
        sub_2213A04(
          (MissionNaviTransitionBoardItem_o *)&v43->__9__54_0,
          (int32_t)_9__54_0,
          v44,
          v45,
          v46,
          v47,
          v48,
          v49);
      }
      BasicHelper__ForEach_object_(
        SideEffectList,
        (System_Action_T__o *)_9__54_0,
        (const MethodInfo_381282C *)Method_BasicHelper_ForEach_BattleActionData___);
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
  BattleLogicFunction_o *v18; // x25
  BattleLogicFunction_o *v19; // x27
  _BOOL8 v20; // x0
  const MethodInfo *v21; // x6
  System_String_o *v22; // x2
  System_String_o *v23; // x3
  int32_t v24; // w4
  int32_t v25; // w5
  bool v26; // w6
  bool v27; // w7
  BattleLogicFunction_o *v28; // x22
  int32_t Param; // w0
  Il2CppClass *v30; // x8
  BattleLogicFunction_o *v31; // x21
  __int64 v32; // x1
  System_String_o *v33; // x2
  System_String_o *v34; // x3
  int32_t v35; // w4
  int32_t v36; // w5
  bool v37; // w6
  bool v38; // w7
  int logic; // w8
  __int64 v40; // x23
  BattleActionData_BuffData_o *v41; // x22
  BattleActionData_o *NoEffectObject; // x22
  __int64 v43; // x0
  const MethodInfo *v44; // [xsp+8h] [xbp-58h]

  v18 = this;
  if ( (byte_5973BB7 & 1) == 0 )
  {
    this = (BattleLogicFunction_o *)sub_2213A60(&BattleActionData_BuffData___TypeInfo);
    byte_5973BB7 = 1;
  }
  if ( !targetSvtData || !actiondata )
    goto LABEL_25;
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
      goto LABEL_25;
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
                         0,
                         v44);
      BattleActionData__addAction(actiondata, NoEffectObject, 0);
      if ( NoEffectObject )
      {
        this = (BattleLogicFunction_o *)BattleActionData__getBuffList(NoEffectObject, funcIndex, 0);
        v31 = this;
        if ( !this )
          return;
        goto LABEL_14;
      }
LABEL_25:
      sub_2213CDC(this, actiondata);
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
    goto LABEL_25;
  v28 = this;
  v19->fields.buffProgressTurnOpponentList = (struct System_Collections_Generic_List_int__o *)this;
  sub_2213A04(
    (MissionNaviTransitionBoardItem_o *)&v19->fields.buffProgressTurnOpponentList,
    (int32_t)this,
    v22,
    v23,
    v24,
    v25,
    v26,
    v27);
  if ( !baseVals )
    goto LABEL_25;
  Param = DataVals__GetParam(baseVals, 67, 0, 0);
  v30 = BattleActionData_BuffData___TypeInfo;
  LODWORD(v19->fields.ignoreResistFuncIndividuality) = Param;
  this = (BattleLogicFunction_o *)sub_2213B20(v30, 1);
  if ( !this )
    goto LABEL_25;
  v31 = this;
  this = (BattleLogicFunction_o *)sub_2213BB4(v28, this->klass->_1.element_class);
  if ( !this )
  {
    v43 = sub_2213D00(0, v32);
    sub_2213BA0(v43, 0);
  }
  if ( !LODWORD(v31->fields.logic) )
    goto LABEL_26;
  v31->fields.logictarget = (struct BattleLogicTarget_o *)v28;
  sub_2213A04((MissionNaviTransitionBoardItem_o *)&v31->fields.logictarget, (int32_t)v28, v33, v34, v35, v36, v37, v38);
LABEL_14:
  logic = (int)v31->fields.logic;
  if ( logic >= 1 )
  {
    v40 = 0;
    while ( (unsigned int)v40 < logic )
    {
      v41 = (BattleActionData_BuffData_o *)*((_QWORD *)&v31->fields.logictarget + v40);
      if ( !v41 )
        goto LABEL_25;
      v41->fields.isHideEffect = isHideEffect;
      this = (BattleLogicFunction_o *)BattleServantData__isLogicResultAlive(targetSvtData, 0);
      if ( ((unsigned __int8)this & 1) != 0 )
        BattleActionData_BuffData__SetCheckHideWhenDeadInfo(v41, baseVals, 0);
      logic = (int)v31->fields.logic;
      if ( (int)++v40 >= logic )
        return;
    }
LABEL_26:
    sub_2213CE4(this);
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


void BattleLogicFunction__SetReceiveFunctionId(
        BattleLogicFunction_o *this,
        BattleActionData_o *action,
        int32_t funcTargetId,
        FunctionEntity_o *funcEntity,
        const MethodInfo *method)
{
  BattleData_o *data; // x0
  int32_t v8; // w2

  data = this->fields.data;
  if ( !data )
    goto LABEL_12;
  data = (BattleData_o *)BattleData__getServantData(data, funcTargetId, 0);
  if ( data )
  {
    if ( action )
    {
      if ( action->fields.funcResult )
      {
        v8 = 0;
        if ( funcEntity )
        {
LABEL_6:
          BattleServantData__SetReceiveFunctionId((BattleServantData_o *)data, funcEntity->fields.id, v8, 0);
          return;
        }
      }
      else
      {
        if ( action->fields.isHideFailedText )
          v8 = 2;
        else
          v8 = 1;
        if ( funcEntity )
          goto LABEL_6;
      }
    }
LABEL_12:
    sub_2213CDC(data, action);
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
      sub_2213CDC(SkillFromBuff, v13);
    addOrder = buff->fields.addOrder;
    funcId = SkillFromBuff->fields.funcId;
    arg->fields.isShowBattlePointEffect = 1;
    arg->fields.buffUniqueId = addOrder;
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
  __int64 v10; // x1
  BattleLogicFunction___c_c *v11; // x8
  SkillLvMaster_o *v12; // x24
  struct BattleLogicFunction___c_StaticFields *static_fields; // x9
  System_Func_object__bool__o *_9__170_1; // x19
  Il2CppObject *v15; // x20
  struct BattleLogicFunction___c_StaticFields *v16; // x0
  System_String_o *v17; // x2
  System_String_o *v18; // x3
  int32_t v19; // w4
  int32_t v20; // w5
  bool v21; // w6
  bool v22; // w7
  BattleData_c *klass; // x8
  BattleData_o *v24; // x20
  __int64 v25; // x9
  int *p_offset; // x10
  __int64 v27; // x0
  __int64 v28; // x1
  __int64 v29; // x8
  __int64 v30; // x9
  int *v31; // x10
  __int64 v32; // x0
  __int64 v33; // x8
  __int64 v34; // x9
  int *v35; // x10
  __int64 v36; // x0
  BattleBuffData_BuffData_array *BuffList; // x0
  __int64 v38; // x1
  struct System_Threading_CancellationTokenSource_o *v39; // x8
  BattleServantData_o *v40; // x25
  unsigned __int64 v41; // x23
  BattleLogicFunction___c_c *v42; // x0
  int32_t v43; // w26
  struct BattleLogicFunction___c_StaticFields *v44; // x8
  System_Func_object__bool__o *_9__170_2; // x19
  Il2CppObject *v46; // x20
  struct BattleLogicFunction___c_StaticFields *v47; // x0
  System_String_o *v48; // x2
  System_String_o *v49; // x3
  int32_t v50; // w4
  int32_t v51; // w5
  bool v52; // w6
  bool v53; // w7
  BattleBuffData_BuffData_array *v54; // x26
  int max_length; // w8
  int i; // w22
  Il2CppClass **v57; // x8
  Il2CppClass *v58; // x27
  SkillLvEntity_o *SkillEntityFromSubstituteBuff; // x0
  __int64 v60; // x1
  SkillLvEntity_o *v61; // x29
  struct System_Collections_Generic_Dictionary_BattleBuffData_BuffData__BattleActionData_BuffData__o *substituteActBuffDict; // x0
  __int64 v63; // x28
  __int64 v64; // x0
  __int64 v65; // x1
  System_String_o *v66; // x2
  System_String_o *v67; // x3
  int32_t v68; // w4
  int32_t v69; // w5
  bool v70; // w6
  bool v71; // w7
  struct System_Int32_array *pttargetIds; // x1
  int32_t uniqueId; // w8
  int32_t v74; // w1
  System_String_o *v75; // x2
  System_String_o *v76; // x3
  int32_t v77; // w4
  int32_t v78; // w5
  bool v79; // w6
  bool v80; // w7
  __int64 argument; // x19
  __int64 v82; // x0
  __int64 v83; // x1
  System_String_o *v84; // x2
  System_String_o *v85; // x3
  int32_t v86; // w4
  int32_t v87; // w5
  bool v88; // w6
  bool v89; // w7
  int32_t v90; // w1
  System_Int32_array *funcId; // x20
  DataVals_array *DataValsList; // x0
  __int64 v93; // x8
  __int64 v94; // x9
  int *v95; // x10
  __int64 v96; // x21
  __int64 v97; // x0
  __int64 v98; // x1
  BattleLogicFunction___c_c *v99; // x0
  struct BattleLogicFunction___c_StaticFields *v100; // x8
  System_Action_object__o *_9__170_0; // x19
  Il2CppObject *v102; // x20
  struct BattleLogicFunction___c_StaticFields *v103; // x0
  System_String_o *v104; // x2
  System_String_o *v105; // x3
  int32_t v106; // w4
  int32_t v107; // w5
  bool v108; // w6
  bool v109; // w7
  const MethodInfo *v110; // [xsp+28h] [xbp-98h]
  System_Collections_Generic_IEnumerable_TSource__o *source; // [xsp+30h] [xbp-90h]
  __int64 v112; // [xsp+38h] [xbp-88h]
  BattleData_o *v113; // [xsp+40h] [xbp-80h]
  bool v114; // [xsp+4Ch] [xbp-74h]
  Il2CppObject *value; // [xsp+58h] [xbp-68h] BYREF

  if ( (byte_5973BF1 & 1) == 0 )
  {
    sub_2213A60(&BuffList_ACTION___TypeInfo);
    sub_2213A60(&System_Action_BattleServantData__TypeInfo);
    sub_2213A60(&Method_BasicHelper_ForEach_BattleServantData___);
    sub_2213A60(&BattleActionData_TypeInfo);
    sub_2213A60(&Method_DataManager_GetMaster_SkillLvMaster___);
    sub_2213A60(&DataManager_TypeInfo);
    sub_2213A60(&Method_System_Collections_Generic_Dictionary_BattleBuffData_BuffData__BattleActionData_BuffData__TryGetValue__);
    sub_2213A60(&Method_System_Linq_Enumerable_Where_BattleServantData___);
    sub_2213A60(&System_Func_BattleBuffData_BuffData__bool__TypeInfo);
    sub_2213A60(&System_Func_BattleServantData__bool__TypeInfo);
    sub_2213A60(&BattleLogicFunction_FunctionArgument_TypeInfo);
    sub_2213A60(&System_IDisposable_TypeInfo);
    sub_2213A60(&System_Collections_Generic_IEnumerable_BattleServantData__TypeInfo);
    sub_2213A60(&System_Collections_Generic_IEnumerator_BattleServantData__TypeInfo);
    sub_2213A60(&System_Collections_IEnumerator_TypeInfo);
    sub_2213A60(&Method_BattleLogicFunction___c__SetSubstituteAction_b__170_0__);
    sub_2213A60(&Method_BattleLogicFunction___c__SetSubstituteAction_b__170_1__);
    sub_2213A60(&Method_BattleLogicFunction___c__SetSubstituteAction_b__170_2__);
    sub_2213A60(&BattleLogicFunction___c_TypeInfo);
    byte_5973BF1 = 1;
  }
  value = 0;
  data = this->fields.data;
  if ( !data )
    goto LABEL_83;
  source = (System_Collections_Generic_IEnumerable_TSource__o *)BattleData__getFieldServantList(data, 0, 0);
  data = (BattleData_o *)sub_2213B20(BuffList_ACTION___TypeInfo, 2);
  if ( !data )
    goto LABEL_83;
  m_CancellationTokenSource = (int)data->fields.m_CancellationTokenSource;
  v8 = data;
  if ( !m_CancellationTokenSource || (LODWORD(data->fields.rootfsm) = 164, m_CancellationTokenSource == 1) )
    sub_2213CE4(data);
  HIDWORD(data->fields.rootfsm) = 165;
  if ( !*(&DataManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo, mainAction);
  Master_object = DataManager__GetMaster_object_((const MethodInfo_3856318 *)Method_DataManager_GetMaster_SkillLvMaster___);
  v11 = BattleLogicFunction___c_TypeInfo;
  v12 = (SkillLvMaster_o *)Master_object;
  if ( !*(&BattleLogicFunction___c_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(BattleLogicFunction___c_TypeInfo, v10);
    v11 = BattleLogicFunction___c_TypeInfo;
  }
  static_fields = v11->static_fields;
  _9__170_1 = (System_Func_object__bool__o *)static_fields->__9__170_1;
  if ( !_9__170_1 )
  {
    if ( !*(&v11->_2.cctor_finished + 1) )
    {
      j_il2cpp_runtime_class_init_0(v11, v10);
      static_fields = BattleLogicFunction___c_TypeInfo->static_fields;
    }
    v15 = (Il2CppObject *)static_fields->__9;
    _9__170_1 = (System_Func_object__bool__o *)sub_2213CCC(System_Func_BattleServantData__bool__TypeInfo);
    System_Func_object__bool____ctor(_9__170_1, v15, Method_BattleLogicFunction___c__SetSubstituteAction_b__170_1__, 0);
    v16 = BattleLogicFunction___c_TypeInfo->static_fields;
    v16->__9__170_1 = (struct System_Func_BattleServantData__bool__o *)_9__170_1;
    sub_2213A04((MissionNaviTransitionBoardItem_o *)&v16->__9__170_1, (int32_t)_9__170_1, v17, v18, v19, v20, v21, v22);
  }
  data = (BattleData_o *)System_Linq_Enumerable__Where_object_(
                           source,
                           (System_Func_TSource__bool__o *)_9__170_1,
                           (const MethodInfo_38A3478 *)Method_System_Linq_Enumerable_Where_BattleServantData___);
  if ( !data )
LABEL_83:
    sub_2213CDC(data, mainAction);
  klass = data->klass;
  v24 = data;
  v25 = *(unsigned __int16 *)&data->klass->_2.rank;
  if ( *(_WORD *)&data->klass->_2.rank )
  {
    p_offset = &klass->_1.interfaceOffsets->offset;
    while ( *((System_Collections_Generic_IEnumerable_BattleServantData__c **)p_offset - 1) != System_Collections_Generic_IEnumerable_BattleServantData__TypeInfo )
    {
      --v25;
      p_offset += 4;
      if ( !v25 )
        goto LABEL_20;
    }
    v27 = (__int64)&klass->vtable + 16 * *p_offset;
  }
  else
  {
LABEL_20:
    v27 = sub_224BC3C(data, System_Collections_Generic_IEnumerable_BattleServantData__TypeInfo, 0);
  }
  v112 = (*(__int64 (__fastcall **)(BattleData_o *, _QWORD))v27)(v24, *(_QWORD *)(v27 + 8));
  if ( !v112 )
    sub_2213CDC(0, v28);
  v113 = v8;
  v114 = isTreasureDvc;
  while ( 1 )
  {
    v29 = *(_QWORD *)v112;
    v30 = *(unsigned __int16 *)(*(_QWORD *)v112 + 302LL);
    if ( *(_WORD *)(*(_QWORD *)v112 + 302LL) )
    {
      v31 = (int *)(*(_QWORD *)(v29 + 176) + 8LL);
      while ( *((System_Collections_IEnumerator_c **)v31 - 1) != System_Collections_IEnumerator_TypeInfo )
      {
        --v30;
        v31 += 4;
        if ( !v30 )
          goto LABEL_28;
      }
      v32 = v29 + 16LL * *v31 + 312;
    }
    else
    {
LABEL_28:
      v32 = sub_224BC3C(v112, System_Collections_IEnumerator_TypeInfo, 0);
    }
    if ( ((*(__int64 (__fastcall **)(__int64, _QWORD))v32)(v112, *(_QWORD *)(v32 + 8)) & 1) == 0 )
      break;
    v33 = *(_QWORD *)v112;
    v34 = *(unsigned __int16 *)(*(_QWORD *)v112 + 302LL);
    if ( *(_WORD *)(*(_QWORD *)v112 + 302LL) )
    {
      v35 = (int *)(*(_QWORD *)(v33 + 176) + 8LL);
      while ( *((System_Collections_Generic_IEnumerator_BattleServantData__c **)v35 - 1) != System_Collections_Generic_IEnumerator_BattleServantData__TypeInfo )
      {
        --v34;
        v35 += 4;
        if ( !v34 )
          goto LABEL_35;
      }
      v36 = v33 + 16LL * *v35 + 312;
    }
    else
    {
LABEL_35:
      v36 = sub_224BC3C(v112, System_Collections_Generic_IEnumerator_BattleServantData__TypeInfo, 0);
    }
    BuffList = (BattleBuffData_BuffData_array *)(*(__int64 (__fastcall **)(__int64, _QWORD))v36)(
                                                  v112,
                                                  *(_QWORD *)(v36 + 8));
    v39 = v8->fields.m_CancellationTokenSource;
    if ( (int)v39 >= 1 )
    {
      v40 = (BattleServantData_o *)BuffList;
      v41 = 0;
      do
      {
        if ( v41 >= (unsigned int)v39 )
          sub_2213CE4(BuffList);
        v42 = BattleLogicFunction___c_TypeInfo;
        v43 = *((_DWORD *)&v8->fields.rootfsm + v41);
        if ( !*(&BattleLogicFunction___c_TypeInfo->_2.cctor_finished + 1) )
        {
          j_il2cpp_runtime_class_init_0(BattleLogicFunction___c_TypeInfo, v38);
          v42 = BattleLogicFunction___c_TypeInfo;
        }
        v44 = v42->static_fields;
        _9__170_2 = (System_Func_object__bool__o *)v44->__9__170_2;
        if ( !_9__170_2 )
        {
          if ( !*(&v42->_2.cctor_finished + 1) )
          {
            j_il2cpp_runtime_class_init_0(v42, v38);
            v44 = BattleLogicFunction___c_TypeInfo->static_fields;
          }
          v46 = (Il2CppObject *)v44->__9;
          _9__170_2 = (System_Func_object__bool__o *)sub_2213CCC(System_Func_BattleBuffData_BuffData__bool__TypeInfo);
          System_Func_object__bool____ctor(
            _9__170_2,
            v46,
            Method_BattleLogicFunction___c__SetSubstituteAction_b__170_2__,
            0);
          v47 = BattleLogicFunction___c_TypeInfo->static_fields;
          v47->__9__170_2 = (struct System_Func_BattleBuffData_BuffData__bool__o *)_9__170_2;
          sub_2213A04(
            (MissionNaviTransitionBoardItem_o *)&v47->__9__170_2,
            (int32_t)_9__170_2,
            v48,
            v49,
            v50,
            v51,
            v52,
            v53);
        }
        if ( !v40 )
          sub_2213CDC(v42, v38);
        BuffList = BattleServantData__getBuffList(
                     v40,
                     v43,
                     1,
                     (System_Func_BattleBuffData_BuffData__bool__o *)_9__170_2,
                     0);
        v54 = BuffList;
        if ( !BuffList )
          sub_2213CDC(0, v38);
        max_length = BuffList->max_length;
        if ( max_length >= 1 )
        {
          for ( i = 0; i < max_length; ++i )
          {
            if ( i >= (unsigned int)max_length )
              sub_2213CE4(BuffList);
            v57 = &v54->obj.klass + i;
            v58 = v57[4];
            if ( !v58 )
              sub_2213CDC(BuffList, v38);
            SkillEntityFromSubstituteBuff = BattleBuffData_BuffData__GetSkillEntityFromSubstituteBuff(
                                              (BattleBuffData_BuffData_o *)v57[4],
                                              v12,
                                              0);
            if ( !mainAction )
              sub_2213CDC(SkillEntityFromSubstituteBuff, v60);
            v61 = SkillEntityFromSubstituteBuff;
            substituteActBuffDict = mainAction->fields.substituteActBuffDict;
            if ( !substituteActBuffDict )
              sub_2213CDC(0, v60);
            BuffList = (BattleBuffData_BuffData_array *)System_Collections_Generic_Dictionary_object__object___TryGetValue(
                                                          (System_Collections_Generic_Dictionary_object__object__o *)substituteActBuffDict,
                                                          (Il2CppObject *)v58,
                                                          &value,
                                                          (const MethodInfo_3FFF778 *)Method_System_Collections_Generic_Dictionary_BattleBuffData_BuffData__BattleActionData_BuffData__TryGetValue__);
            if ( ((v61 != 0) & (unsigned __int8)BuffList) != 0 )
            {
              v63 = sub_2213CCC(BattleActionData_TypeInfo);
              BattleActionData___ctor((BattleActionData_o *)v63, 0);
              if ( !v63 )
                sub_2213CDC(v64, v65);
              pttargetIds = mainAction->fields.pttargetIds;
              uniqueId = v40->fields.uniqueId;
              *(_QWORD *)(v63 + 40) = pttargetIds;
              *(_DWORD *)(v63 + 32) = uniqueId;
              *(_DWORD *)(v63 + 36) = mainAction->fields.actorId;
              sub_2213A04(
                (MissionNaviTransitionBoardItem_o *)(v63 + 40),
                (int32_t)pttargetIds,
                v66,
                v67,
                v68,
                v69,
                v70,
                v71);
              v74 = (int)value;
              *(_QWORD *)(v63 + 352) = value;
              sub_2213A04((MissionNaviTransitionBoardItem_o *)(v63 + 352), v74, v75, v76, v77, v78, v79, v80);
              argument = sub_2213CCC(BattleLogicFunction_FunctionArgument_TypeInfo);
              BattleLogicFunction_FunctionArgument___ctor((BattleLogicFunction_FunctionArgument_o *)argument, 0);
              if ( !argument )
                sub_2213CDC(v82, v83);
              v90 = (int)value;
              *(_QWORD *)(argument + 64) = value;
              sub_2213A04((MissionNaviTransitionBoardItem_o *)(argument + 64), v90, v84, v85, v86, v87, v88, v89);
              funcId = v61->fields.funcId;
              DataValsList = SkillLvEntity__getDataValsList(v61, 0);
              BattleLogicFunction__procList(
                this,
                (BattleActionData_o *)v63,
                funcId,
                DataValsList,
                0,
                0,
                0,
                0,
                v114,
                0,
                1,
                (BattleLogicFunction_FunctionArgument_o *)argument,
                0,
                v110);
              BattleActionData__EnableSubstituteBuffSkillFlag((BattleActionData_o *)v63, 0);
              BattleActionData__OverwirteFuncIndex((BattleActionData_o *)v63, HIDWORD(v58->vtable[20].methodPtr), 0);
              BattleActionData__addAction(mainAction, (BattleActionData_o *)v63, 0);
            }
            LOWORD(v58->vtable[20].method) = 0;
            max_length = v54->max_length;
          }
        }
        v8 = v113;
        ++v41;
        LODWORD(v39) = v113->fields.m_CancellationTokenSource;
      }
      while ( (__int64)v41 < (int)v39 );
    }
  }
  v93 = *(_QWORD *)v112;
  v94 = *(unsigned __int16 *)(*(_QWORD *)v112 + 302LL);
  if ( *(_WORD *)(*(_QWORD *)v112 + 302LL) )
  {
    v95 = (int *)(*(_QWORD *)(v93 + 176) + 8LL);
    while ( *((System_IDisposable_c **)v95 - 1) != System_IDisposable_TypeInfo )
    {
      --v94;
      v95 += 4;
      if ( !v94 )
        goto LABEL_65;
    }
    v96 = v112;
    v97 = v93 + 16LL * *v95 + 312;
  }
  else
  {
LABEL_65:
    v96 = v112;
    v97 = sub_224BC3C(v112, System_IDisposable_TypeInfo, 0);
  }
  (*(void (__fastcall **)(__int64, _QWORD))v97)(v96, *(_QWORD *)(v97 + 8));
  v99 = BattleLogicFunction___c_TypeInfo;
  if ( !*(&BattleLogicFunction___c_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(BattleLogicFunction___c_TypeInfo, v98);
    v99 = BattleLogicFunction___c_TypeInfo;
  }
  v100 = v99->static_fields;
  _9__170_0 = (System_Action_object__o *)v100->__9__170_0;
  if ( !_9__170_0 )
  {
    if ( !*(&v99->_2.cctor_finished + 1) )
    {
      j_il2cpp_runtime_class_init_0(v99, v98);
      v100 = BattleLogicFunction___c_TypeInfo->static_fields;
    }
    v102 = (Il2CppObject *)v100->__9;
    _9__170_0 = (System_Action_object__o *)sub_2213CCC(System_Action_BattleServantData__TypeInfo);
    System_Action_object____ctor(_9__170_0, v102, Method_BattleLogicFunction___c__SetSubstituteAction_b__170_0__, 0);
    v103 = BattleLogicFunction___c_TypeInfo->static_fields;
    v103->__9__170_0 = (struct System_Action_BattleServantData__o *)_9__170_0;
    sub_2213A04(
      (MissionNaviTransitionBoardItem_o *)&v103->__9__170_0,
      (int32_t)_9__170_0,
      v104,
      v105,
      v106,
      v107,
      v108,
      v109);
  }
  BasicHelper__ForEach_object_(
    (System_Collections_Generic_IEnumerable_T__o *)source,
    (System_Action_T__o *)_9__170_0,
    (const MethodInfo_381282C *)Method_BasicHelper_ForEach_BattleServantData___);
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
  int32_t v18; // w0
  struct System_Threading_CancellationTokenSource_o *m_CancellationTokenSource; // x8
  DataManager_o *v20; // x27
  unsigned __int64 v21; // x23
  BattleBuffData_BuffData_o *v22; // x29
  BattleActionData_o *v23; // x28
  int32_t uniqueId; // w9
  int v25; // w0
  const MethodInfo *v26; // x6
  int32_t v27; // w0
  struct BattleActionData_SideEffectData_array *v28; // [xsp+8h] [xbp-88h]
  SkillLvMaster_o *v30; // [xsp+18h] [xbp-78h]
  System_Collections_Generic_KeyValuePair_int__int__o pairAttackAndTarget; // [xsp+28h] [xbp-68h] BYREF

  if ( (byte_5973BA0 & 1) == 0 )
  {
    sub_2213A60(&BattleActionData_TypeInfo);
    sub_2213A60(&Method_DataManager_GetMasterData_SkillLvMaster___);
    sub_2213A60(&Method_System_Collections_Generic_KeyValuePair_int__int___ctor__);
    sub_2213A60(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_5973BA0 = 1;
  }
  pairAttackAndTarget = 0;
  Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_47A29F8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance
    || (Instance = (DataManager_o *)DataManager__GetMasterData_object_(
                                      Instance,
                                      (const MethodInfo_385636C *)Method_DataManager_GetMasterData_SkillLvMaster___),
        v30 = (SkillLvMaster_o *)Instance,
        !attackArg)
    || (SideEffectList_k__BackingField = attackArg->fields._SideEffectList_k__BackingField) == 0 )
  {
LABEL_25:
    sub_2213CDC(Instance, v12);
  }
  max_length = SideEffectList_k__BackingField->max_length;
  if ( max_length >= 1 )
  {
    v15 = 0;
    v28 = attackArg->fields._SideEffectList_k__BackingField;
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
        System_Collections_Generic_KeyValuePair_int__int____ctor(
          (System_Collections_Generic_KeyValuePair_int__int__o)&pairAttackAndTarget,
          v18,
          v17->fields.uniqueId,
          (const MethodInfo_439E030 *)Method_System_Collections_Generic_KeyValuePair_int__int___ctor__);
        if ( !mainAction )
          goto LABEL_25;
        Instance = (DataManager_o *)BattleActionData__isReflectedAttackSideEffect(mainAction, pairAttackAndTarget, 0);
        if ( ((unsigned __int8)Instance & 1) == 0 )
        {
          Instance = (DataManager_o *)BattleServantData__getAttackSideEffectBuffList_53446068(
                                        actionSvtData,
                                        v16->fields.sideEffectActs,
                                        command,
                                        v17,
                                        0);
          if ( !Instance )
            goto LABEL_25;
          m_CancellationTokenSource = Instance->fields.m_CancellationTokenSource;
          v20 = Instance;
          if ( m_CancellationTokenSource )
          {
            if ( (int)m_CancellationTokenSource >= 1 )
            {
              v21 = 0;
              while ( v21 < (unsigned int)m_CancellationTokenSource )
              {
                v22 = (BattleBuffData_BuffData_o *)*((_QWORD *)&v20->fields._DispLog + v21);
                v23 = (BattleActionData_o *)sub_2213CCC(BattleActionData_TypeInfo);
                BattleActionData___ctor(v23, 0);
                if ( !v23 )
                  goto LABEL_25;
                uniqueId = v17->fields.uniqueId;
                v23->fields.actorId = actionSvtData->fields.uniqueId;
                v23->fields.targetId = uniqueId;
                v25 = ((__int64 (__fastcall *)(BattleLogicFunction_SideEffectMakeArgument_o *, const MethodInfo *))attackArg->klass->vtable._5_unknown.methodPtr)(
                        attackArg,
                        attackArg->klass->vtable._5_unknown.method);
                BattleLogicFunction__SetSideEffectBuff(
                  this,
                  v30,
                  v23,
                  v22,
                  (BattleLogicFunction_CommonSideEffectFunctionArgument_o *)arg,
                  v25 == 1,
                  v26);
                v27 = ((__int64 (__fastcall *)(BattleLogicFunction_SideEffectMakeArgument_o *, const MethodInfo *))attackArg->klass->vtable._5_unknown.methodPtr)(
                        attackArg,
                        attackArg->klass->vtable._5_unknown.method);
                BattleActionData__addSideEffectActionData(mainAction, v23, v27, 0);
                LODWORD(m_CancellationTokenSource) = v20->fields.m_CancellationTokenSource;
                if ( (__int64)++v21 >= (int)m_CancellationTokenSource )
                  goto LABEL_22;
              }
LABEL_26:
              sub_2213CE4(Instance);
            }
LABEL_22:
            BattleActionData__addReflectAttackSideEffect(mainAction, pairAttackAndTarget, 0);
            SideEffectList_k__BackingField = v28;
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
  if ( (byte_5973B9D & 1) == 0 )
  {
    sub_2213A60(&Method_DataManager_GetMasterData_FunctionMaster___);
    sub_2213A60(&Method_DataMasterBase_FunctionMaster__FunctionEntity__int__GetEntity__);
    sub_2213A60(&int___TypeInfo);
    sub_2213A60(&Method_System_Collections_Generic_List_int__AddRange__);
    sub_2213A60(&Method_System_Collections_Generic_List_int__Add__);
    this = (BattleLogicFunction_o *)sub_2213A60(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_5973B9D = 1;
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
      *(const MethodInfo_4467270 **)(*(_QWORD *)(v10[4] + 192LL) + 112LL));
  }
  else
  {
    LODWORD(this->fields.logic) = logic_low + 1;
    *((_DWORD *)&data->fields.rootfsm + logic_low) = targetId;
  }
  if ( !baseVals )
    goto LABEL_23;
  funcType = baseVals->fields.funcType;
  this = (BattleLogicFunction_o *)sub_2213B20(int___TypeInfo, 1);
  if ( !this )
    goto LABEL_23;
  if ( !LODWORD(this->fields.logic) )
    goto LABEL_24;
  LODWORD(this->fields.logictarget) = targetId;
  BattleActionData__AddHpDecreaseFuncTargets(action, funcType, (System_Int32_array *)this, 0);
  this = (BattleLogicFunction_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_47A29F8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !this
    || (MasterData_object = DataManager__GetMasterData_object_(
                              (DataManager_o *)this,
                              (const MethodInfo_385636C *)Method_DataManager_GetMasterData_FunctionMaster___),
        (this = (BattleLogicFunction_o *)DataVals__GetDependFuncIdArray(baseVals, 0)) == 0) )
  {
LABEL_23:
    sub_2213CDC(this, *(_QWORD *)&targetId);
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
                                        (const MethodInfo_3F10B30 *)Method_DataMasterBase_FunctionMaster__FunctionEntity__int__GetEntity__);
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
          (const MethodInfo_446747C *)Method_System_Collections_Generic_List_int__AddRange__);
        BattleActionData__AddHpDecreaseFuncTargets(action, (int32_t)v18->fields.logic, (System_Int32_array *)v19, 0);
      }
      LODWORD(logic) = v15->fields.logic;
      if ( (__int64)++v16 >= (int)logic )
        return;
    }
LABEL_24:
    sub_2213CE4(this);
  }
}


// local variable allocation has failed, the output may be wrong!
void BattleLogicFunction__SetTdCommandTypeChange(
        BuffEntity_o *buffEnt,
        int32_t commandType,
        BattleLogicFunction_ProcListInArgs_o *procArgs,
        const MethodInfo *method)
{
  int32_t type; // w8

  if ( !buffEnt )
    goto LABEL_17;
  type = buffEnt->fields.type;
  if ( type > 145 )
  {
    if ( type == 146 )
    {
      if ( procArgs )
      {
        commandType = 2;
        goto LABEL_15;
      }
    }
    else
    {
      if ( type != 147 )
        return;
      if ( procArgs )
      {
        commandType = 3;
        goto LABEL_15;
      }
    }
LABEL_17:
    sub_2213CDC(buffEnt, *(_QWORD *)&commandType);
  }
  if ( type == 143 )
  {
    if ( procArgs )
      goto LABEL_15;
    goto LABEL_17;
  }
  if ( type != 145 )
    return;
  if ( !procArgs )
    goto LABEL_17;
  commandType = 1;
LABEL_15:
  procArgs->fields.tdCommandTypeChange = commandType;
}


// local variable allocation has failed, the output may be wrong!
bool BattleLogicFunction__TryGetInvalidObjectFromParam(
        BattleLogicFunction_o *this,
        BattleActionData_o **invalidObject,
        int32_t targetId,
        int32_t funcIndex,
        DataVals_o *dataVals,
        bool isCommandSideEffect,
        bool isCheckedOverwrite,
        const MethodInfo *method)
{
  __int64 v15; // x1
  bool result; // w0
  System_String_o *v17; // x2
  System_String_o *v18; // x3
  int32_t v19; // w4
  char v20; // w5
  bool v21; // w6
  bool v22; // w7
  BattleActionData_o *NoEffectObject; // x0
  BattleActionData_o *v24; // x1
  const MethodInfo *v25; // [xsp+8h] [xbp-58h]
  int32_t invalidType; // [xsp+1Ch] [xbp-44h] BYREF

  *invalidObject = 0;
  invalidType = 0;
  sub_2213A04(
    (MissionNaviTransitionBoardItem_o *)invalidObject,
    0,
    *(System_String_o **)&targetId,
    *(System_String_o **)&funcIndex,
    (int32_t)dataVals,
    isCommandSideEffect,
    isCheckedOverwrite,
    (bool)method);
  result = 0;
  if ( !isCheckedOverwrite )
  {
    if ( !dataVals )
      sub_2213CDC(0, v15);
    if ( !DataVals__TryGetOverwriteFuncInvalidType(dataVals, &invalidType, 0) )
      return 0;
    if ( invalidType == 1 )
    {
      NoEffectObject = BattleLogicFunction__getNoEffectObject(
                         this,
                         targetId,
                         funcIndex,
                         dataVals,
                         isCommandSideEffect,
                         0,
                         0,
                         0,
                         1,
                         v25);
    }
    else
    {
      if ( invalidType != 2 )
      {
        v24 = *invalidObject;
        goto LABEL_11;
      }
      NoEffectObject = BattleLogicFunction__getMissObject(
                         this,
                         targetId,
                         funcIndex,
                         dataVals,
                         isCommandSideEffect,
                         0,
                         0,
                         0,
                         1,
                         v25);
    }
    v24 = NoEffectObject;
LABEL_11:
    *invalidObject = v24;
    sub_2213A04((MissionNaviTransitionBoardItem_o *)invalidObject, (int32_t)v24, v17, v18, v19, v20, v21, v22);
    return 1;
  }
  return result;
}


bool BattleLogicFunction__TryRegisterDeferredBattleValue(
        BattleLogicFunction_o *this,
        BattleLogicFunction_ProcListInArgs_o *procArgs,
        int32_t key,
        int32_t actorId,
        bool isAdd,
        const MethodInfo *method)
{
  struct BattleLogicFunction_FunctionArgument_o *externalArg; // x8
  __int64 naturalAligment; // x11
  BattleActionData_o *v12; // x0

  if ( (byte_5973BE8 & 1) == 0 )
  {
    sub_2213A60(&BattleLogicFunction_CommonSideEffectFunctionArgument_TypeInfo);
    byte_5973BE8 = 1;
  }
  if ( procArgs
    && BattleLogicFunction_ProcListInArgs__get_IsCommandSideEffect(procArgs, 0)
    && (externalArg = procArgs->fields.externalArg) != 0
    && (naturalAligment = BattleLogicFunction_CommonSideEffectFunctionArgument_TypeInfo->_2.naturalAligment,
        externalArg->klass->_2.naturalAligment >= (unsigned int)naturalAligment)
    && (BattleLogicFunction_CommonSideEffectFunctionArgument_c *)externalArg->klass->_2.typeHierarchy[naturalAligment - 1] == BattleLogicFunction_CommonSideEffectFunctionArgument_TypeInfo
    && externalArg[1].fields.isCommandSideEffect )
  {
    v12 = *(BattleActionData_o **)&externalArg[1].fields.isDeckDataLoad;
    if ( v12 )
    {
      BattleActionData__AddDeferredBattleValueApply(v12, key, actorId, isAdd, 0);
      LOBYTE(v12) = 1;
    }
  }
  else
  {
    LOBYTE(v12) = 0;
  }
  return (char)v12;
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
  if ( (byte_5973B97 & 1) == 0 )
  {
    sub_2213A60(&StringLiteral_16084/*"WAR_BOARD_PROGRESS_OPPONENT_BUFF_TYPES"*/);
    this = (BattleLogicFunction_o *)sub_2213A60(&StringLiteral_16085/*"WAR_BOARD_PROGRESS_SELF_BUFF_TYPES"*/);
    byte_5973B97 = 1;
  }
  IsUpdateBuffProgressTurn = BattleLogicFunction__IsUpdateBuffProgressTurn(
                               this,
                               buffType,
                               (System_String_o *)StringLiteral_16085/*"WAR_BOARD_PROGRESS_SELF_BUFF_TYPES"*/,
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
            (System_String_o *)StringLiteral_16084/*"WAR_BOARD_PROGRESS_OPPONENT_BUFF_TYPES"*/,
            &v7->fields.buffProgressTurnOpponentList,
            v9) )
      return;
    v10 = 0;
  }
  *isSelfTurn = v10;
}


void BattleLogicFunction__UpdateCondBuffValueFlagInCurrentContext(
        BattleLogicFunction_o *this,
        const MethodInfo *method)
{
  UnityEngine_Object_o *logic; // x20
  __int64 v4; // x1
  void *FieldServantList; // x0
  UnityEngine_Object_o *data; // x20
  int v7; // w8
  void *v8; // x20
  __int64 v9; // x21
  __int64 v10; // x8

  if ( (byte_5973B96 & 1) == 0 )
  {
    sub_2213A60(&UnityEngine_Object_TypeInfo);
    byte_5973B96 = 1;
  }
  logic = (UnityEngine_Object_o *)this->fields.logic;
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, method);
  if ( UnityEngine_Object__op_Inequality(logic, 0, 0) )
  {
    FieldServantList = this->fields.logic;
    if ( FieldServantList )
    {
      BattleLogic__UpdateCondBuffValueFlag((BattleLogic_o *)FieldServantList, 0);
      return;
    }
LABEL_22:
    sub_2213CDC(FieldServantList, v4);
  }
  data = (UnityEngine_Object_o *)this->fields.data;
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v4);
  if ( UnityEngine_Object__op_Inequality(data, 0, 0) )
  {
    FieldServantList = this->fields.data;
    if ( !FieldServantList )
      goto LABEL_22;
    if ( BattleData__IsWarBoard((BattleData_o *)FieldServantList, 0) )
    {
      FieldServantList = this->fields.data;
      if ( !FieldServantList )
        goto LABEL_22;
      FieldServantList = BattleData__getFieldServantList((BattleData_o *)FieldServantList, 0, 0);
      if ( !FieldServantList )
        goto LABEL_22;
      v7 = *((_DWORD *)FieldServantList + 6);
      v8 = FieldServantList;
      if ( v7 >= 1 )
      {
        v9 = 0;
        while ( 1 )
        {
          if ( (unsigned int)v9 >= v7 )
            sub_2213CE4(FieldServantList);
          v10 = *((_QWORD *)v8 + v9 + 4);
          if ( !v10 )
            break;
          FieldServantList = *(void **)(v10 + 848);
          if ( !FieldServantList )
            break;
          BattleBuffData__UpdateCondBuffValueFlag(
            (BattleBuffData_o *)FieldServantList,
            this->fields.data,
            *(_DWORD *)(v10 + 24),
            0);
          v7 = *((_DWORD *)v8 + 6);
          if ( (int)++v9 >= v7 )
            return;
        }
        goto LABEL_22;
      }
    }
  }
}


bool BattleLogicFunction__UpdateUserEquipSkillChargeTurn(
        BattleLogicFunction_o *this,
        DataVals_o *dataVals,
        bool isProgress,
        System_Int32_array_array *linkedTargetSkillIndividualityArray,
        const MethodInfo *method)
{
  __int64 v9; // x19
  BattleData_o *data; // x0
  __int64 v11; // x1
  System_String_o *v12; // x2
  System_String_o *v13; // x3
  int32_t v14; // w4
  int32_t v15; // w5
  bool v16; // w6
  bool v17; // w7
  System_Collections_Generic_IEnumerable_TSource__o *v19; // x23
  System_Int32_array *TargetList; // x0
  System_String_o *v21; // x2
  System_String_o *v22; // x3
  int32_t v23; // w4
  int32_t v24; // w5
  bool v25; // w6
  bool v26; // w7
  System_Int32_array_array *FuncTargetArray; // x0
  System_String_o *v28; // x2
  System_String_o *v29; // x3
  int32_t v30; // w4
  int32_t v31; // w5
  bool v32; // w6
  bool v33; // w7
  System_String_o *v34; // x2
  System_String_o *v35; // x3
  int32_t v36; // w4
  int32_t v37; // w5
  bool v38; // w6
  bool v39; // w7
  int32_t Param; // w0
  System_Action_object__o *v41; // x0
  System_Action_T__o *v42; // x21
  intptr_t *v43; // x8
  System_Collections_Generic_IEnumerable_T__o *v44; // x0
  System_Action_T__o *v45; // x1
  int32_t v46; // w21
  System_Func_object__bool__o *v47; // x22
  System_Collections_Generic_IEnumerable_TSource__o *v48; // x22
  System_Func_object__bool__o *v49; // x23
  System_Collections_Generic_IEnumerable_TSource__o *v50; // x0
  System_Collections_Generic_IEnumerable_TSource__o *v51; // x21
  System_Action_object__o *v52; // x0
  System_Action_T__o *v53; // x22
  intptr_t *v54; // x8

  if ( (byte_5973BD2 & 1) == 0 )
  {
    sub_2213A60(&System_Action_BattleSkillInfoData__TypeInfo);
    sub_2213A60(&Method_BasicHelper_ForEach_BattleSkillInfoData___);
    sub_2213A60(&Method_System_Linq_Enumerable_Take_BattleSkillInfoData___);
    sub_2213A60(&Method_System_Linq_Enumerable_Where_BattleSkillInfoData___);
    sub_2213A60(&System_Func_BattleSkillInfoData__bool__TypeInfo);
    sub_2213A60(&Method_BattleLogicFunction___c__DisplayClass115_0__UpdateUserEquipSkillChargeTurn_b__0__);
    sub_2213A60(&Method_BattleLogicFunction___c__DisplayClass115_0__UpdateUserEquipSkillChargeTurn_b__1__);
    sub_2213A60(&Method_BattleLogicFunction___c__DisplayClass115_0__UpdateUserEquipSkillChargeTurn_b__2__);
    sub_2213A60(&Method_BattleLogicFunction___c__DisplayClass115_0__UpdateUserEquipSkillChargeTurn_b__3__);
    sub_2213A60(&Method_BattleLogicFunction___c__DisplayClass115_0__UpdateUserEquipSkillChargeTurn_b__4__);
    sub_2213A60(&Method_BattleLogicFunction___c__DisplayClass115_0__UpdateUserEquipSkillChargeTurn_b__5__);
    sub_2213A60(&BattleLogicFunction___c__DisplayClass115_0_TypeInfo);
    byte_5973BD2 = 1;
  }
  v9 = sub_2213CCC(BattleLogicFunction___c__DisplayClass115_0_TypeInfo);
  BattleLogicFunction___c__DisplayClass115_0___ctor((BattleLogicFunction___c__DisplayClass115_0_o *)v9, 0);
  if ( !v9 )
    goto LABEL_22;
  *(_QWORD *)(v9 + 24) = this;
  sub_2213A04((MissionNaviTransitionBoardItem_o *)(v9 + 24), (int32_t)this, v12, v13, v14, v15, v16, v17);
  data = this->fields.data;
  if ( !data )
    goto LABEL_22;
  if ( BattleData__IsUnusableMasterSkill(data, 0) )
    return 0;
  data = this->fields.data;
  if ( !data || (data = (BattleData_o *)BattleData__getMasterSkillInfos(data, 0), !dataVals) )
LABEL_22:
    sub_2213CDC(data, v11);
  v19 = (System_Collections_Generic_IEnumerable_TSource__o *)data;
  *(_DWORD *)(v9 + 40) = DataVals__GetValue(dataVals, 0);
  *(_DWORD *)(v9 + 44) = DataVals__GetValue2(dataVals, 0) - 1;
  TargetList = DataVals__GetTargetList(dataVals, 0);
  *(_QWORD *)(v9 + 48) = TargetList;
  sub_2213A04((MissionNaviTransitionBoardItem_o *)(v9 + 48), (int32_t)TargetList, v21, v22, v23, v24, v25, v26);
  FuncTargetArray = DataVals__GetFuncTargetArray(dataVals, 0);
  *(_QWORD *)(v9 + 32) = FuncTargetArray;
  sub_2213A04((MissionNaviTransitionBoardItem_o *)(v9 + 32), (int32_t)FuncTargetArray, v28, v29, v30, v31, v32, v33);
  if ( BasicHelper__IsNullOrEmpty(*(System_Collections_ICollection_o **)(v9 + 32), 0) )
  {
    *(_QWORD *)(v9 + 32) = linkedTargetSkillIndividualityArray;
    sub_2213A04(
      (MissionNaviTransitionBoardItem_o *)(v9 + 32),
      (int32_t)linkedTargetSkillIndividualityArray,
      v34,
      v35,
      v36,
      v37,
      v38,
      v39);
  }
  *(_BYTE *)(v9 + 16) = DataVals__IsSkillFilterEnabled(dataVals, 0);
  Param = DataVals__GetParam(dataVals, 281, 0, 0);
  *(_BYTE *)(v9 + 56) = 0;
  if ( Param >= 1 && (*(_DWORD *)(v9 + 44) & 0x80000000) != 0 )
  {
    v46 = Param;
    v47 = (System_Func_object__bool__o *)sub_2213CCC(System_Func_BattleSkillInfoData__bool__TypeInfo);
    System_Func_object__bool____ctor(
      v47,
      (Il2CppObject *)v9,
      Method_BattleLogicFunction___c__DisplayClass115_0__UpdateUserEquipSkillChargeTurn_b__2__,
      0);
    v48 = System_Linq_Enumerable__Where_object_(
            v19,
            (System_Func_TSource__bool__o *)v47,
            (const MethodInfo_38A3478 *)Method_System_Linq_Enumerable_Where_BattleSkillInfoData___);
    v49 = (System_Func_object__bool__o *)sub_2213CCC(System_Func_BattleSkillInfoData__bool__TypeInfo);
    System_Func_object__bool____ctor(
      v49,
      (Il2CppObject *)v9,
      Method_BattleLogicFunction___c__DisplayClass115_0__UpdateUserEquipSkillChargeTurn_b__3__,
      0);
    v50 = System_Linq_Enumerable__Where_object_(
            v48,
            (System_Func_TSource__bool__o *)v49,
            (const MethodInfo_38A3478 *)Method_System_Linq_Enumerable_Where_BattleSkillInfoData___);
    v51 = System_Linq_Enumerable__Take_object_(
            v50,
            v46,
            (const MethodInfo_389A270 *)Method_System_Linq_Enumerable_Take_BattleSkillInfoData___);
    v52 = (System_Action_object__o *)sub_2213CCC(System_Action_BattleSkillInfoData__TypeInfo);
    v53 = (System_Action_T__o *)v52;
    if ( isProgress )
      v54 = &Method_BattleLogicFunction___c__DisplayClass115_0__UpdateUserEquipSkillChargeTurn_b__4__;
    else
      v54 = &Method_BattleLogicFunction___c__DisplayClass115_0__UpdateUserEquipSkillChargeTurn_b__5__;
    System_Action_object____ctor(v52, (Il2CppObject *)v9, *v54, 0);
    v44 = (System_Collections_Generic_IEnumerable_T__o *)v51;
    v45 = v53;
  }
  else
  {
    v41 = (System_Action_object__o *)sub_2213CCC(System_Action_BattleSkillInfoData__TypeInfo);
    v42 = (System_Action_T__o *)v41;
    if ( isProgress )
      v43 = &Method_BattleLogicFunction___c__DisplayClass115_0__UpdateUserEquipSkillChargeTurn_b__0__;
    else
      v43 = &Method_BattleLogicFunction___c__DisplayClass115_0__UpdateUserEquipSkillChargeTurn_b__1__;
    System_Action_object____ctor(v41, (Il2CppObject *)v9, *v43, 0);
    v44 = (System_Collections_Generic_IEnumerable_T__o *)v19;
    v45 = v42;
  }
  BasicHelper__ForEach_object_(v44, v45, (const MethodInfo_381282C *)Method_BasicHelper_ForEach_BattleSkillInfoData___);
  return *(_BYTE *)(v9 + 56) != 0;
}


// local variable allocation has failed, the output may be wrong!
void BattleLogicFunction___FlushDeferredBattleValues_b__147_0(
        BattleLogicFunction_o *this,
        int32_t key,
        int32_t actorId,
        bool isAdd,
        const MethodInfo *method)
{
  BattleData_o *data; // x0
  BattleServantData_o *ServantData; // x0
  BattleServantData_o *v10; // x22
  int32_t DealtDamage; // w0
  System_Collections_Generic_List_int____o *DealtDamageSpritList_k__BackingField; // x2

  data = this->fields.data;
  if ( !data )
    goto LABEL_11;
  ServantData = BattleData__getServantData(data, actorId, 0);
  v10 = ServantData;
  if ( ServantData )
  {
    DealtDamage = BattleServantData__get_DealtDamage(ServantData, 0);
    DealtDamageSpritList_k__BackingField = v10->fields._DealtDamageSpritList_k__BackingField;
    LODWORD(v10) = DealtDamage;
  }
  else
  {
    DealtDamageSpritList_k__BackingField = 0;
  }
  data = this->fields.data;
  if ( !data )
    goto LABEL_11;
  BattleData__SetSplitBattleValueForExBattleUi(data, key, DealtDamageSpritList_k__BackingField, 0);
  data = this->fields.data;
  if ( isAdd )
  {
    if ( data )
    {
      BattleData__AddBattleValue(data, key, (int32_t)v10, 0);
      return;
    }
LABEL_11:
    sub_2213CDC(data, *(_QWORD *)&key);
  }
  if ( !data )
    goto LABEL_11;
  BattleData__SetBattleValue(data, key, (int32_t)v10, 0);
}


void BattleLogicFunction___FunctionRevivalInDetail_g__AfterProcessForRevivedServants_126_6(
        BattleLogicFunction_o *this,
        BattleLogicFunction___c__DisplayClass126_0_o *a2,
        const MethodInfo *method)
{
  BattleLogicFunction_o *v4; // x20
  System_Collections_Generic_List_T__o *revivedSvtList; // x21
  BattleLogicFunction___c_c *v6; // x0
  struct BattleLogicFunction___c_StaticFields *static_fields; // x8
  System_Func_object__bool__o *_9__126_7; // x22
  Il2CppObject *v9; // x23
  struct BattleLogicFunction___c_StaticFields *v10; // x0
  System_String_o *v11; // x2
  System_String_o *v12; // x3
  int32_t v13; // w4
  int32_t v14; // w5
  bool v15; // w6
  bool v16; // w7
  struct BattleActionData_o *lastActionData; // x8
  System_Collections_Generic_List_object__o *v18; // x19
  struct BattleLogicFunction___c_StaticFields *v19; // x8
  System_Action_object__o *_9__126_8; // x20
  Il2CppObject *v21; // x21
  struct BattleLogicFunction___c_StaticFields *v22; // x0
  System_String_o *v23; // x2
  System_String_o *v24; // x3
  int32_t v25; // w4
  int32_t v26; // w5
  bool v27; // w6
  bool v28; // w7

  v4 = this;
  if ( (byte_5973BF7 & 1) == 0 )
  {
    sub_2213A60(&System_Action_BattleServantData__TypeInfo);
    sub_2213A60(&Method_BasicHelper_Any_BattleServantData___);
    sub_2213A60(&System_Func_BattleServantData__bool__TypeInfo);
    sub_2213A60(&Method_System_Collections_Generic_List_BattleServantData__ForEach__);
    sub_2213A60(&Method_System_Collections_Generic_List_BattleServantData__get_Count__);
    sub_2213A60(&Method_BattleLogicFunction___c__FunctionRevivalInDetail_b__126_7__);
    sub_2213A60(&Method_BattleLogicFunction___c__FunctionRevivalInDetail_b__126_8__);
    this = (BattleLogicFunction_o *)sub_2213A60(&BattleLogicFunction___c_TypeInfo);
    byte_5973BF7 = 1;
  }
  revivedSvtList = (System_Collections_Generic_List_T__o *)a2->fields.revivedSvtList;
  if ( !revivedSvtList )
    goto LABEL_25;
  if ( revivedSvtList->fields._size >= 1 )
  {
    v6 = BattleLogicFunction___c_TypeInfo;
    if ( !*(&BattleLogicFunction___c_TypeInfo->_2.cctor_finished + 1) )
    {
      j_il2cpp_runtime_class_init_0(BattleLogicFunction___c_TypeInfo, a2);
      v6 = BattleLogicFunction___c_TypeInfo;
    }
    static_fields = v6->static_fields;
    _9__126_7 = (System_Func_object__bool__o *)static_fields->__9__126_7;
    if ( !_9__126_7 )
    {
      if ( !*(&v6->_2.cctor_finished + 1) )
      {
        j_il2cpp_runtime_class_init_0(v6, a2);
        static_fields = BattleLogicFunction___c_TypeInfo->static_fields;
      }
      v9 = (Il2CppObject *)static_fields->__9;
      _9__126_7 = (System_Func_object__bool__o *)sub_2213CCC(System_Func_BattleServantData__bool__TypeInfo);
      System_Func_object__bool____ctor(
        _9__126_7,
        v9,
        Method_BattleLogicFunction___c__FunctionRevivalInDetail_b__126_7__,
        0);
      v10 = BattleLogicFunction___c_TypeInfo->static_fields;
      v10->__9__126_7 = (struct System_Func_BattleServantData__bool__o *)_9__126_7;
      sub_2213A04(
        (MissionNaviTransitionBoardItem_o *)&v10->__9__126_7,
        (int32_t)_9__126_7,
        v11,
        v12,
        v13,
        v14,
        v15,
        v16);
    }
    this = (BattleLogicFunction_o *)BasicHelper__Any_object_(
                                      revivedSvtList,
                                      (System_Func_T__bool__o *)_9__126_7,
                                      (const MethodInfo_380FDE0 *)Method_BasicHelper_Any_BattleServantData___);
    if ( ((unsigned __int8)this & 1) != 0 )
    {
      lastActionData = a2->fields.lastActionData;
      if ( !lastActionData )
        goto LABEL_25;
      this = (BattleLogicFunction_o *)v4->fields.data;
      lastActionData->fields.redrawCommandCard = 1;
      if ( !this )
        goto LABEL_25;
      BattleData__createCommandCard((BattleData_o *)this, 0);
      this = (BattleLogicFunction_o *)v4->fields.data;
      if ( !this )
        goto LABEL_25;
      BattleData__shuffleCommand((BattleData_o *)this, 0);
    }
    this = (BattleLogicFunction_o *)BattleLogicFunction___c_TypeInfo;
    v18 = (System_Collections_Generic_List_object__o *)a2->fields.revivedSvtList;
    if ( !*(&BattleLogicFunction___c_TypeInfo->_2.cctor_finished + 1) )
    {
      j_il2cpp_runtime_class_init_0(BattleLogicFunction___c_TypeInfo, a2);
      this = (BattleLogicFunction_o *)BattleLogicFunction___c_TypeInfo;
    }
    v19 = (struct BattleLogicFunction___c_StaticFields *)*((_QWORD *)this + 23);
    _9__126_8 = (System_Action_object__o *)v19->__9__126_8;
    if ( !_9__126_8 )
    {
      if ( !*((_DWORD *)this + 57) )
      {
        j_il2cpp_runtime_class_init_0(this, a2);
        v19 = BattleLogicFunction___c_TypeInfo->static_fields;
      }
      v21 = (Il2CppObject *)v19->__9;
      _9__126_8 = (System_Action_object__o *)sub_2213CCC(System_Action_BattleServantData__TypeInfo);
      System_Action_object____ctor(
        _9__126_8,
        v21,
        Method_BattleLogicFunction___c__FunctionRevivalInDetail_b__126_8__,
        0);
      v22 = BattleLogicFunction___c_TypeInfo->static_fields;
      v22->__9__126_8 = (struct System_Action_BattleServantData__o *)_9__126_8;
      sub_2213A04(
        (MissionNaviTransitionBoardItem_o *)&v22->__9__126_8,
        (int32_t)_9__126_8,
        v23,
        v24,
        v25,
        v26,
        v27,
        v28);
    }
    if ( v18 )
    {
      System_Collections_Generic_List_object___ForEach(
        v18,
        (System_Action_T__o *)_9__126_8,
        (const MethodInfo_4484684 *)Method_System_Collections_Generic_List_BattleServantData__ForEach__);
      return;
    }
LABEL_25:
    sub_2213CDC(this, a2);
  }
}


BattleActionData_o *BattleLogicFunction___FunctionRevivalInDetail_g__GenerateRevivalActionData_126_3(
        BattleLogicFunction_o *this,
        BattleServantData_o *target,
        int32_t requiredRevivalTargetId,
        int32_t entryIndex,
        int32_t expelledUniqueId,
        BattleLogicFunction___c__DisplayClass126_0_o *a6,
        const MethodInfo *method)
{
  __int64 v13; // x22
  BattleData_o *data; // x0
  __int64 v15; // x1
  System_String_o *v16; // x2
  System_String_o *v17; // x3
  int32_t v18; // w4
  int32_t v19; // w5
  bool v20; // w6
  bool v21; // w7
  struct BattleActionData_o *actionData; // x8
  int32_t state; // w8
  int32_t v24; // w1
  int32_t uniqueId; // w9
  BattleLogicFunction_HealFuncApplyArgs_c *v26; // x0
  BattleLogicFunction_HealFuncApplyArgs_o *healFuncApplyArgs; // x26
  bool v28; // w0
  int32_t healPoint; // w2
  int32_t funcIndex; // w3
  FunctionEntity_o *funcEnt; // x5
  DataVals_o *baseVals; // x6
  bool isCommandSideEffect; // w7
  const MethodInfo *v35; // [xsp+10h] [xbp-60h]

  if ( (byte_5973BF5 & 1) == 0 )
  {
    sub_2213A60(&BattleActionData_TypeInfo);
    sub_2213A60(&BattleLogicFunction_HealFuncApplyArgs_TypeInfo);
    sub_2213A60(&StringLiteral_9126/*"MOTION_MAKE_REVIVE"*/);
    byte_5973BF5 = 1;
  }
  v13 = sub_2213CCC(BattleActionData_TypeInfo);
  BattleActionData___ctor((BattleActionData_o *)v13, 0);
  actionData = a6->fields.actionData;
  if ( !a6->fields.actionData )
    goto LABEL_13;
  if ( !v13 )
    goto LABEL_13;
  *(_DWORD *)(v13 + 32) = actionData->fields.actorId;
  if ( !target )
    goto LABEL_13;
  state = actionData->fields.state;
  v24 = StringLiteral_9126/*"MOTION_MAKE_REVIVE"*/;
  uniqueId = target->fields.uniqueId;
  *(_QWORD *)(v13 + 72) = StringLiteral_9126/*"MOTION_MAKE_REVIVE"*/;
  *(_DWORD *)(v13 + 36) = uniqueId;
  *(_DWORD *)(v13 + 16) = state;
  sub_2213A04((MissionNaviTransitionBoardItem_o *)(v13 + 72), v24, v16, v17, v18, v19, v20, v21);
  if ( !a6->fields.actionData )
    goto LABEL_13;
  v26 = BattleLogicFunction_HealFuncApplyArgs_TypeInfo;
  *(_BYTE *)(v13 + 257) = a6->fields.actionData->fields.isForcedSpeedOne;
  healFuncApplyArgs = (BattleLogicFunction_HealFuncApplyArgs_o *)sub_2213CCC(v26);
  BattleLogicFunction_HealFuncApplyArgs___ctor(healFuncApplyArgs, 0);
  if ( !healFuncApplyArgs
    || (data = this->fields.data,
        healFuncApplyArgs->fields._RevivalTargetId_k__BackingField = requiredRevivalTargetId,
        healFuncApplyArgs->fields._EntryIndex_k__BackingField = entryIndex,
        healFuncApplyArgs->fields._ExpelledUniqueId_k__BackingField = expelledUniqueId,
        !data) )
  {
LABEL_13:
    sub_2213CDC(data, v15);
  }
  v28 = BattleData__GetEntryIndex(data, target, 0) == entryIndex && BattleServantData__IsDeadKeepStanding(target, 0);
  healPoint = a6->fields.healPoint;
  funcIndex = a6->fields.funcIndex;
  funcEnt = a6->fields.funcEnt;
  baseVals = a6->fields.baseVals;
  isCommandSideEffect = a6->fields.isCommandSideEffect;
  healFuncApplyArgs->fields._DeadKeepStanding_k__BackingField = v28;
  BattleLogicFunction__SetGainHpBuff(
    this,
    (BattleActionData_o *)v13,
    healPoint,
    funcIndex,
    target,
    funcEnt,
    baseVals,
    isCommandSideEffect,
    0,
    healFuncApplyArgs,
    v35);
  return (BattleActionData_o *)v13;
}


void BattleLogicFunction___FunctionRevivalInDetail_g__SetMissIfNoActions_126_4(
        BattleLogicFunction_o *this,
        BattleLogicFunction___c__DisplayClass126_0_o *a2,
        const MethodInfo *method)
{
  BattleLogicFunction_o *v4; // x20
  struct System_Collections_Generic_List_BattleServantData__o *revivedSvtList; // x8
  const MethodInfo *v6; // [xsp+8h] [xbp-28h]

  v4 = this;
  if ( (byte_5973BF6 & 1) == 0 )
  {
    this = (BattleLogicFunction_o *)sub_2213A60(&Method_System_Collections_Generic_List_BattleServantData__get_Count__);
    byte_5973BF6 = 1;
  }
  revivedSvtList = a2->fields.revivedSvtList;
  if ( !revivedSvtList )
    goto LABEL_8;
  if ( revivedSvtList->fields._size > 0 )
    return;
  if ( !a2->fields.actionData
    || (this = (BattleLogicFunction_o *)BattleLogicFunction__getMissObject(
                                          v4,
                                          a2->fields.actionData->fields.actorId,
                                          a2->fields.funcIndex,
                                          a2->fields.baseVals,
                                          a2->fields.isCommandSideEffect,
                                          0,
                                          0,
                                          0,
                                          0,
                                          v6),
        !a2->fields.actionData) )
  {
LABEL_8:
    sub_2213CDC(this, a2);
  }
  BattleActionData__addAction(a2->fields.actionData, (BattleActionData_o *)this, 0);
}


bool BattleLogicFunction___FunctionRevivalInDetail_g__TryGetEntryIndex_126_5(
        BattleLogicFunction_o *this,
        BattleServantData_o *target,
        int32_t *entryIndex,
        int32_t *expelledUniqueId,
        BattleLogicFunction___c__DisplayClass126_0_o *a5,
        const MethodInfo *method)
{
  BattleData_o *data; // x0
  BattleData_o *v12; // x8
  BattleData_o *v13; // x8
  BattleServantData_o *ServantData; // x0
  BattleServantData_o *v15; // x20

  data = this->fields.data;
  if ( !data )
    goto LABEL_14;
  data = (BattleData_o *)BattleData__GetEntryIndex(data, target, 0);
  *entryIndex = (int)data;
  if ( ((unsigned int)data & 0x80000000) == 0 )
  {
    if ( target )
    {
      *expelledUniqueId = target->fields.uniqueId;
      return 1;
    }
LABEL_14:
    sub_2213CDC(data, target);
  }
  if ( !target )
    goto LABEL_14;
  data = (BattleData_o *)BattleServantData__getDeckIndex(target, 0);
  v12 = this->fields.data;
  *entryIndex = (int)data;
  if ( !v12 )
    goto LABEL_14;
  data = (BattleData_o *)BattleData__GetUniqueIdByEntryIndex(v12, (int32_t)data, target->fields.isEnemy, 0);
  v13 = this->fields.data;
  *expelledUniqueId = (int)data;
  if ( !v13 )
    goto LABEL_14;
  ServantData = BattleData__getServantData(v13, (int32_t)data, 0);
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


BattleBuffData_BuffData_o *BattleLogicFunction___FunctionSubFieldBuff_b__140_0(
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
    sub_2213CDC(this, buff);
  }
  return BattleBuffData__CreateDummyBuff((BattleBuffData_o *)this, buff, 0);
}


bool BattleLogicFunction___IsSituationForceTurnProgressExecutable_g__IsForceTurnProgress_70_0(
        bool isPartyTurn,
        BattleLogicFunction___c__DisplayClass70_0_o *a2,
        const MethodInfo *method)
{
  DataVals_o *dataVals; // x0

  dataVals = a2->fields.dataVals;
  if ( isPartyTurn )
  {
    if ( dataVals )
      return DataVals__IsForceTurnProgressIfTimingIsOverInPartyTurn(dataVals, 0);
LABEL_6:
    sub_2213CDC(dataVals, a2);
  }
  if ( !dataVals )
    goto LABEL_6;
  return DataVals__IsForceTurnProgressIfTimingIsOverInOpponentTurn(dataVals, 0);
}


// local variable allocation has failed, the output may be wrong!
bool BattleLogicFunction___getTargetids_b__61_0(BattleLogicFunction_o *this, int32_t x, const MethodInfo *method)
{
  BattleData_o *data; // x0

  data = this->fields.data;
  if ( !data )
    sub_2213CDC(0, *(_QWORD *)&x);
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
  BattleServantData_o *v19; // x21
  BattleServantData_o *v20; // x25
  unsigned int v21; // w19
  int v22; // w19
  BattleLogicFunction_o *v23; // x0
  int v24; // w22
  float BuffTOLERANCEMagnification; // s0
  int32_t v26; // w0
  System_Int32_array *vals; // x1
  int32_t v28; // w22
  float v29; // s0
  bool IsWinQuest; // w8
  float BuffResistDelayNPTurn; // s0
  int32_t Next; // w0
  struct System_Int32_array **p_vals; // x8
  System_Int32_array *v34; // x23
  float v35; // s0
  const MethodInfo *v37; // [xsp+8h] [xbp-88h]
  int v38; // [xsp+1Ch] [xbp-74h]
  int32_t baseRate[2]; // [xsp+28h] [xbp-68h] BYREF

  data = this->fields.data;
  *(_QWORD *)baseRate = 0;
  if ( !data )
    goto LABEL_54;
  data = (BattleData_o *)BattleData__getServantData(data, actorId, 0);
  if ( !this->fields.data )
    goto LABEL_54;
  v19 = (BattleServantData_o *)data;
  data = (BattleData_o *)BattleData__getServantData(this->fields.data, targetId, 0);
  if ( !funcUnit
    || (v20 = (BattleServantData_o *)data,
        data = (BattleData_o *)BattleLogicFunctionProcess_FunctionUnitCheck__get_IsIgnoreResistFunc(funcUnit, 0),
        v38 = (int)data,
        baseRate[0] = 1000,
        baseRate[1] = 1000,
        !baseVals)
    || (data = (BattleData_o *)DataVals__GetParam(baseVals, 0, 0, 0), !args) )
  {
LABEL_54:
    sub_2213CDC(data, args);
  }
  v21 = (unsigned int)data;
  data = (BattleData_o *)BattleLogicFunction_ProcListInArgs__DidTriggeredFuncHaveSpecifyResults(
                           args,
                           targetId,
                           baseVals,
                           this->fields.data,
                           0);
  if ( ((unsigned __int8)data & 1) == 0 )
    goto LABEL_19;
  data = (BattleData_o *)BattleLogicFunction_ProcListInArgs__DidTriggeredFuncListHaveSpecifyResults(
                           args,
                           targetId,
                           baseVals,
                           this->fields.data,
                           0);
  if ( ((unsigned __int8)data & 1) == 0 )
    goto LABEL_19;
  if ( (v21 & 0x80000000) != 0 )
  {
    data = (BattleData_o *)BattleLogicFunction_ProcListInArgs__isPrevFuncSuccess(
                             args,
                             targetId,
                             baseVals->fields.funcIndex,
                             0);
    if ( ((unsigned __int8)data & 1) != 0 )
    {
      data = (BattleData_o *)BattleUtility__Abs_53558088(v21, 0);
      if ( !funcEnt )
        goto LABEL_54;
      goto LABEL_13;
    }
LABEL_19:
    if ( !result )
      goto LABEL_54;
    LOBYTE(v23) = 0;
    result->fields._IsDisplayLastFuncInvalid_k__BackingField = 1;
    return (char)v23;
  }
  data = (BattleData_o *)v21;
  if ( !funcEnt )
    goto LABEL_54;
LABEL_13:
  v22 = (int)data;
  if ( FuncList__Check(1, funcEnt->fields.funcType, 0) )
  {
    LODWORD(v23) = 1000;
    if ( !buffEnt )
    {
      v28 = 1000;
      goto LABEL_53;
    }
    data = (BattleData_o *)BattleRandom__getNext(1000, 0);
    v24 = (int)data;
    if ( v19 )
    {
      if ( !v20 )
        goto LABEL_54;
      BuffTOLERANCEMagnification = BattleServantData__getBuffTOLERANCEMagnification(
                                     v20,
                                     buffEnt->fields.vals,
                                     v19,
                                     &this->fields.wkStr,
                                     0);
      v26 = BattleUtility__FloorToInt((float)(BuffTOLERANCEMagnification * 1000.0) + (float)v24, 0);
      vals = buffEnt->fields.vals;
      v28 = v26;
      baseRate[1] = v26;
      v29 = (float)(BattleServantData__getBuffGRANTSTATEMagnification(v19, vals, v20, &this->fields.wkStr, 0, 0) * 1000.0)
          + (float)v22;
      goto LABEL_18;
    }
    Next = BattleUtility__FloorToInt((float)(int)data, 0);
LABEL_46:
    v28 = Next;
    LODWORD(v23) = v22;
    baseRate[0] = v22;
    baseRate[1] = v28;
    goto LABEL_53;
  }
  v23 = (BattleLogicFunction_o *)FuncList__Check(13, funcEnt->fields.funcType, 0);
  if ( ((unsigned __int8)v23 & 1) == 0 )
  {
    if ( !FuncList__Check(2, funcEnt->fields.funcType, 0) )
    {
      if ( !FuncList__Check(20, funcEnt->fields.funcType, 0) )
      {
        if ( FuncList__Check(46, funcEnt->fields.funcType, 0) )
        {
          LODWORD(v23) = 1000;
          v28 = 0;
          baseRate[0] = 1000;
          baseRate[1] = 0;
          goto LABEL_53;
        }
        Next = BattleRandom__getNext(1000, 0);
        goto LABEL_46;
      }
      data = (BattleData_o *)BattleRandom__getNext(1000, 0);
      v28 = (int)data;
      if ( (v38 & 1) == 0 )
      {
        if ( !v20 )
          goto LABEL_54;
        BuffResistDelayNPTurn = BattleServantData__getBuffResistDelayNPTurn(v20, v19, 0);
        v28 = BattleUtility__FloorToInt((float)(BuffResistDelayNPTurn * 1000.0) + (float)v28, 0);
      }
      baseRate[1] = v28;
LABEL_52:
      LODWORD(v23) = v22;
      baseRate[0] = v22;
      goto LABEL_53;
    }
    if ( DataVals__isParam(baseVals, 93, 0) )
    {
      LOBYTE(v23) = 1;
      return (char)v23;
    }
    p_vals = &funcEnt->fields.vals;
    if ( buffEnt )
      p_vals = &buffEnt->fields.vals;
    v34 = *p_vals;
    if ( v19 )
    {
      if ( (v38 & 1) != 0 )
      {
LABEL_42:
        v35 = (float)BattleRandom__getNext(1000, 0);
        goto LABEL_50;
      }
    }
    else if ( ((DataVals__isParam(baseVals, 77, 0) | v38) & 1) != 0 )
    {
      goto LABEL_42;
    }
    data = (BattleData_o *)BattleRandom__getNext(1000, 0);
    if ( !v20 )
      goto LABEL_54;
    v35 = (float)(BattleServantData__getBuffTOLERANCESUBSTATEMagnification(v20, v34, v19, 0) * 1000.0)
        + (float)(int)data;
LABEL_50:
    v28 = BattleUtility__FloorToInt(v35, 0);
    baseRate[1] = v28;
    if ( v19 )
    {
      v29 = (float)(BattleServantData__getBuffGRANTSUBSTATEMagnification(v19, v34, v20, 0) * 1000.0) + (float)v22;
LABEL_18:
      LODWORD(v23) = BattleUtility__FloorToInt(v29, 0);
      baseRate[0] = (int)v23;
LABEL_53:
      LOBYTE(v23) = v28 < (int)v23;
      return (char)v23;
    }
    goto LABEL_52;
  }
  if ( !v20 || v20->fields.isEnemy )
    goto LABEL_27;
  data = this->fields.data;
  if ( !data )
    goto LABEL_54;
  IsWinQuest = BattleData__IsWinQuest(data, 0, 0);
  v23 = 0;
  if ( !IsWinQuest )
  {
LABEL_27:
    BattleLogicFunction__CheckFuncInstantDeath(
      v23,
      v19,
      v20,
      baseVals,
      isTreasureDevice,
      v38 & 1,
      &baseRate[1],
      baseRate,
      result,
      v37);
    LODWORD(v23) = baseRate[0];
    v28 = baseRate[1];
    goto LABEL_53;
  }
  return (char)v23;
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
  else if ( funcType != 133 && (funcType & 0x7FFFFFFE) != 0x8C )
  {
    return 0;
  }
  if ( !data )
LABEL_13:
    sub_2213CDC(data, *(_QWORD *)&targetId);
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

  if ( (byte_5973BDA & 1) == 0 )
  {
    sub_2213A60(&BattleActionData_TypeInfo);
    sub_2213A60(&BattleLogicFunction_HealFuncApplyArgs_TypeInfo);
    byte_5973BDA = 1;
  }
  v13 = (BattleActionData_o *)sub_2213CCC(BattleActionData_TypeInfo);
  BattleActionData___ctor(v13, 0);
  data = this->fields.data;
  if ( !data
    || (data = (BattleData_o *)BattleData__getServantData(data, targetId, 0), !baseVals)
    || (v16 = (BattleServantData_o *)data,
        baseVals->fields.isShowForcedEffect = 1,
        Value = DataVals__GetValue(baseVals, 0),
        healFuncApplyArgs = (BattleLogicFunction_HealFuncApplyArgs_o *)sub_2213CCC(BattleLogicFunction_HealFuncApplyArgs_TypeInfo),
        BattleLogicFunction_HealFuncApplyArgs___ctor(healFuncApplyArgs, 0),
        !healFuncApplyArgs) )
  {
    sub_2213CDC(data, v14);
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
  if ( (byte_5973BCD & 1) == 0 )
  {
    sub_2213A60(&BattleActionData_TypeInfo);
    sub_2213A60(&NpGaugeAbsorbResult_TypeInfo);
    this = (BattleLogicFunction_o *)sub_2213A60(&NpPointToTurnConvert_TypeInfo);
    byte_5973BCD = 1;
  }
  if ( !funcTarget )
    goto LABEL_12;
  funcUnit_k__BackingField = funcTarget->fields._funcUnit_k__BackingField;
  if ( !funcUnit_k__BackingField )
    goto LABEL_12;
  dataVals_k__BackingField = funcUnit_k__BackingField->fields._dataVals_k__BackingField;
  v15 = (BattleActionData_o *)sub_2213CCC(BattleActionData_TypeInfo);
  BattleActionData___ctor(v15, 0);
  v16 = (NpPointToTurnConvert_o *)sub_2213CCC(NpPointToTurnConvert_TypeInfo);
  NpPointToTurnConvert___ctor(v16, 0);
  v17 = (NpGaugeAbsorbResult_o *)sub_2213CCC(NpGaugeAbsorbResult_TypeInfo);
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
    sub_2213CDC(this, *(_QWORD *)&targetId);
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
  BattleActionData_o *v9; // x28
  BattleLogicFunction_o *v10; // x19
  struct BattleLogicFunctionProcess_FunctionUnitCheck_o *funcUnit_k__BackingField; // x22
  DataVals_o *dataVals_k__BackingField; // x23
  BuffEntity_o *v13; // x27
  int32_t v14; // w22
  __int64 naturalAligment; // x10
  BattleServantData_o *v16; // x24
  BattleServantData_o *ServantData; // x25
  BattleActionData_ToFieldMasterBuffData_o *v18; // x29
  int32_t v19; // w9
  BattleBuffData_BuffData_c *v20; // x0
  __int64 v21; // x28
  const MethodInfo *v22; // x3
  char v23; // w22
  int32_t AdjustmentBuffTurn; // w0
  const MethodInfo *v25; // x4
  char v26; // w20
  __int64 v27; // x1
  bool v28; // w0
  char v29; // w9
  int32_t type; // w22
  int v31; // w26
  const MethodInfo *v32; // x3
  int isEnemy; // w8
  int v34; // w9
  BattleLogicFunction_ProcListInArgs_o *v35; // x26
  bool v36; // zf
  struct BattleData_o *data; // x8
  bool v38; // w9
  int32_t ProgressTurnCond; // w0
  int32_t v40; // w0
  __int64 v41; // x1
  int32_t v42; // w20
  __int64 v43; // x1
  int32_t v44; // w20
  __int64 v45; // x1
  int32_t v46; // w20
  __int64 v47; // x1
  int32_t v48; // w20
  int32_t tdCommandTypeChange; // w8
  char v50; // w29
  int32_t v51; // w0
  Il2CppClass *v52; // x8
  __int64 v53; // x0
  System_String_o *v54; // x2
  System_String_o *v55; // x3
  int32_t v56; // w4
  int32_t v57; // w5
  bool v58; // w6
  bool v59; // w7
  __int64 v60; // x22
  __int64 v61; // x20
  int32_t v62; // w20
  struct BattleData_o *v63; // x8
  struct BattleEntity_o *battle_ent; // x8
  int64_t userId; // x26
  int32_t eventId; // w20
  EventPointBuffMaster_o *v67; // x29
  int32_t EventPointGroupId; // w22
  UserEventPointEntity_o *EntityDefinitely; // x0
  int64_t value; // x20
  int logic; // w8
  int v72; // w9
  __int64 v73; // x11
  __int64 v74; // x12
  int v75; // w29
  BattleData_o *v76; // x20
  BattleBuffData_CheckIndividualitiesData_o *v77; // x22
  BattleBuffData_ParamAdd_o *v78; // x26
  BattleBuffData_ParamAdd_o *v79; // x3
  __int64 v80; // x0
  System_String_o *v81; // x2
  System_String_o *v82; // x3
  int32_t v83; // w4
  int32_t v84; // w5
  bool v85; // w6
  bool v86; // w7
  __int64 v87; // x22
  __int64 v88; // x20
  const MethodInfo *v89; // x3
  Il2CppClass *v90; // x0
  int32_t v91; // w20
  int v92; // w20
  __int64 v93; // x1
  int32_t v94; // w22
  __int64 v95; // x20
  System_Math_c *v96; // x0
  int v97; // w9
  int v98; // w8
  System_Int32_array *TargetIndiv; // x0
  System_String_o *v100; // x2
  System_String_o *v101; // x3
  int32_t v102; // w4
  int32_t v103; // w5
  bool v104; // w6
  bool v105; // w7
  bool IsIncludeIgnoreIndividuality; // w0
  System_String_o *v107; // x2
  System_String_o *v108; // x3
  int32_t v109; // w4
  int32_t v110; // w5
  bool v111; // w6
  bool v112; // w7
  int32_t v113; // w20
  BattleBuffData_IntervalData_o *IntervalData; // x0
  System_String_o *v115; // x2
  System_String_o *v116; // x3
  int32_t v117; // w4
  int32_t v118; // w5
  bool v119; // w6
  bool v120; // w7
  System_Int32_array *ParamArray; // x0
  System_String_o *v122; // x2
  System_String_o *v123; // x3
  int32_t v124; // w4
  int32_t v125; // w5
  bool v126; // w6
  bool v127; // w7
  int32_t CardEffectId; // w0
  __int64 v129; // x1
  int32_t v130; // w20
  __int64 v131; // x1
  int32_t RelationId; // w22
  BattleBuffData_RelationOverwriteData_o *v133; // x20
  System_String_o *v134; // x2
  System_String_o *v135; // x3
  int32_t v136; // w4
  int32_t v137; // w5
  bool v138; // w6
  bool v139; // w7
  BattleDataDefine_c *v140; // x0
  int32_t AtkRelationPriority; // w0
  BattleDataDefine_c *v142; // x8
  MissionNaviTransitionBoardItem_o *v143; // x0
  int32_t v144; // w20
  float UpDownGiveHeal; // s8
  int32_t v146; // w0
  int v147; // s0
  int32_t v148; // w0
  int v149; // s0
  System_Int32_array *v150; // x0
  System_String_o *v151; // x2
  System_String_o *v152; // x3
  int32_t v153; // w4
  int32_t v154; // w5
  bool v155; // w6
  bool v156; // w7
  System_Int32_array *v157; // x0
  System_String_o *v158; // x2
  System_String_o *v159; // x3
  int32_t v160; // w4
  int32_t v161; // w5
  bool v162; // w6
  bool v163; // w7
  System_Int32_array *v164; // x0
  System_String_o *v165; // x2
  System_String_o *v166; // x3
  int32_t v167; // w4
  int32_t v168; // w5
  bool v169; // w6
  bool v170; // w7
  BattleBuffData_SaveArrayData_array *v171; // x0
  System_String_o *v172; // x2
  System_String_o *v173; // x3
  int32_t v174; // w4
  int32_t v175; // w5
  bool v176; // w6
  bool v177; // w7
  BattleBuffData_SaveArrayData_array *v178; // x0
  System_String_o *v179; // x2
  System_String_o *v180; // x3
  int32_t v181; // w4
  int32_t v182; // w5
  bool v183; // w6
  bool v184; // w7
  BattleBuffData_SaveArrayData_array *v185; // x0
  System_String_o *v186; // x2
  System_String_o *v187; // x3
  int32_t v188; // w4
  int32_t v189; // w5
  bool v190; // w6
  bool v191; // w7
  __int64 v192; // x1
  int32_t v193; // w20
  System_Int32_array *UpBuffRateBuffTypeList; // x0
  System_String_o *v195; // x2
  System_String_o *v196; // x3
  int32_t v197; // w4
  int32_t v198; // w5
  bool v199; // w6
  bool v200; // w7
  struct BattleLogicFunction_FunctionArgument_o *externalArg; // x8
  unsigned int ShowStateWarBoardEnemyEquip; // w0
  struct BattleData_o *v203; // x8
  System_Int32_array *AddIndividualty; // x0
  System_String_o *v205; // x2
  System_String_o *v206; // x3
  int32_t v207; // w4
  int32_t v208; // w5
  bool v209; // w6
  bool v210; // w7
  System_Int32_array *LinkageTargetIndividualty; // x0
  System_String_o *v212; // x2
  System_String_o *v213; // x3
  int32_t v214; // w4
  int32_t v215; // w5
  bool v216; // w6
  bool v217; // w7
  const MethodInfo *v218; // x3
  struct BattleData_o *v219; // x8
  System_Int32_array *ValsList; // x0
  System_String_o *v221; // x2
  System_String_o *v222; // x3
  int32_t v223; // w4
  int32_t v224; // w5
  bool v225; // w6
  bool v226; // w7
  int32_t v227; // w0
  int v228; // w8
  int32_t v229; // w0
  System_String_o *v230; // x2
  System_String_o *ParamStringFormat; // x0
  System_String_o *v232; // x2
  System_String_o *v233; // x3
  int32_t v234; // w4
  int32_t v235; // w5
  bool v236; // w6
  bool v237; // w7
  BattleBuffData_SubstituteData_o *v238; // x20
  System_String_o *v239; // x2
  System_String_o *v240; // x3
  int32_t v241; // w4
  int32_t v242; // w5
  bool v243; // w6
  bool v244; // w7
  __int64 v245; // x22
  __int64 v246; // x20
  __int64 v247; // x22
  __int64 v248; // x20
  __int64 v249; // x8
  __int64 v250; // x20
  __int64 v251; // x8
  __int64 v252; // x20
  __int64 v253; // x8
  __int64 v254; // x20
  System_String_o *v255; // x2
  System_String_o *v256; // x3
  int32_t v257; // w4
  int32_t v258; // w5
  bool v259; // w6
  bool v260; // w7
  __int64 v261; // x8
  __int64 v262; // x20
  __int64 v263; // x8
  __int64 v264; // x20
  System_String_o *v265; // x2
  System_String_o *v266; // x3
  int32_t v267; // w4
  int32_t v268; // w5
  bool v269; // w6
  bool v270; // w7
  __int64 v271; // x8
  __int64 v272; // x20
  System_String_o *v273; // x2
  System_String_o *v274; // x3
  int32_t v275; // w4
  int32_t v276; // w5
  bool v277; // w6
  bool v278; // w7
  __int64 v279; // x8
  __int64 v280; // x20
  __int64 v281; // x8
  __int64 v282; // x20
  System_String_o *v283; // x2
  System_String_o *v284; // x3
  int32_t v285; // w4
  int32_t v286; // w5
  bool v287; // w6
  bool v288; // w7
  int32_t v289; // w0
  int v290; // w8
  UnityEngine_Object_o *v291; // x20
  bool v292; // w26
  int32_t v293; // w20
  CommandCodeInfo_o *UserCommandCode; // x0
  char v295; // w8
  BattleLogicFunction_o *v296; // x20
  __int64 v297; // x1
  System_String_o *v298; // x2
  System_String_o *v299; // x3
  int32_t v300; // w4
  int32_t v301; // w5
  bool v302; // w6
  bool v303; // w7
  BattleActionEffect_AddServantBuff_o *v304; // x22
  int32_t MaxHp; // w20
  __int64 v306; // x1
  int32_t v307; // w22
  BattleLogicFunction_ProcListInArgs_o *v308; // x26
  int v309; // w8
  int v310; // w29
  int32_t v311; // w22
  bool IsCommandSideEffect; // w0
  int32_t v313; // w1
  int32_t id; // w26
  System_Collections_Generic_List_int__o *v315; // x0
  System_String_o *i; // x0
  System_String_o *v317; // x0
  System_String_o *v318; // x0
  System_String_o *v319; // x0
  System_Int32_array *QuestIndividualities; // x0
  __int64 v321; // x1
  UnityEngine_Object_o *v322; // x26
  System_Int32_array *v323; // x22
  BattlePerformance_o *perf; // x2
  struct BattleLogic_o *v325; // x8
  __int64 v326; // x1
  int32_t BuffType; // w22
  __int64 v328; // x1
  UnityEngine_Object_o *v329; // x22
  struct BattleLogic_o *v330; // x8
  UnityEngine_Object_o *v331; // x22
  bool v332; // w0
  BattleActionEffect_AddChangeMaxHpBuff_o *v333; // x26
  BattleLogicFunction_o *v334; // x29
  System_String_o *v335; // x2
  System_String_o *v336; // x3
  int32_t v337; // w4
  int32_t v338; // w5
  bool v339; // w6
  bool v340; // w7
  BattleActionEffect_Base_o *v341; // x0
  __int64 v342; // x1
  UnityEngine_Object_o *v343; // x22
  int v344; // w8
  BattleLogicFunction_o *v345; // x26
  __int64 v346; // x22
  struct BattleLogicTarget_o **p_logictarget; // x29
  System_Int32_array *ShortenMaxCountArray; // x0
  System_String_o *v349; // x2
  System_String_o *v350; // x3
  int32_t v351; // w4
  int32_t v352; // w5
  bool v353; // w6
  bool v354; // w7
  System_Int32_array *TargetFunctionIndividuality; // x0
  System_String_o *v356; // x2
  System_String_o *v357; // x3
  int32_t v358; // w4
  int32_t v359; // w5
  bool v360; // w6
  bool v361; // w7
  System_Int32_array *TargetBuffIndividuality; // x0
  System_String_o *v363; // x2
  System_String_o *v364; // x3
  int32_t v365; // w4
  int32_t v366; // w5
  bool v367; // w6
  bool v368; // w7
  int32_t v369; // w20
  struct BattleData_o *v370; // x8
  bool v371; // w0
  BattleActionData_BuffData_o *v372; // x20
  __int64 v373; // x1
  UnityEngine_Object_o *v374; // x20
  const MethodInfo *v375; // x4
  const MethodInfo *v376; // x1
  __int64 v378; // x0
  const MethodInfo *v379; // [xsp+8h] [xbp-108h]
  int32_t funcIndex; // [xsp+24h] [xbp-ECh]
  char v381; // [xsp+28h] [xbp-E8h]
  int32_t treasureDvcId; // [xsp+2Ch] [xbp-E4h]
  BattleActionData_o *userCommandCodeId; // [xsp+30h] [xbp-E0h]
  int userCommandCodeIda; // [xsp+30h] [xbp-E0h]
  BattleActionData_o *v385; // [xsp+38h] [xbp-D8h]
  _BOOL4 v386; // [xsp+44h] [xbp-CCh]
  BattleActionData_o *v387; // [xsp+48h] [xbp-C8h]
  FunctionEntity_o *funcEnt; // [xsp+50h] [xbp-C0h]
  int32_t uniqueId; // [xsp+5Ch] [xbp-B4h]
  BattleActionData_BuffData_o *v390; // [xsp+60h] [xbp-B0h]
  unsigned int targetId; // [xsp+6Ch] [xbp-A4h]
  BattleLogicFunction_ProcListInArgs_o *v392; // [xsp+70h] [xbp-A0h]
  int v393; // [xsp+84h] [xbp-8Ch] BYREF
  int32_t skillId[2]; // [xsp+88h] [xbp-88h] BYREF
  Il2CppObject *entity; // [xsp+90h] [xbp-80h] BYREF
  bool isEnemyTurn; // [xsp+98h] [xbp-78h] BYREF
  int32_t v397; // [xsp+9Ch] [xbp-74h] BYREF
  int32_t param; // [xsp+A8h] [xbp-68h] BYREF
  bool isSelfTurn; // [xsp+ACh] [xbp-64h] BYREF

  v9 = mainAction;
  v10 = this;
  if ( (byte_5973BA5 & 1) == 0 )
  {
    sub_2213A60(&BattleActionEffect_AddChangeMaxHpBuff_TypeInfo);
    sub_2213A60(&BattleActionEffect_AddServantBuff_TypeInfo);
    sub_2213A60(&BattleActionData_TypeInfo);
    sub_2213A60(&BattleDataDefine_TypeInfo);
    sub_2213A60(&BattleBuffData_BuffData___TypeInfo);
    sub_2213A60(&BattleBuffData_BuffData_TypeInfo);
    sub_2213A60(&BuffList_TypeInfo);
    sub_2213A60(&BattleBuffData_CheckIndividualitiesData_TypeInfo);
    sub_2213A60(&Method_DataManager_GetMasterData_EventPointBuffMaster___);
    sub_2213A60(&Method_DataManager_GetMasterData_UserEventPointMaster___);
    sub_2213A60(&Method_DataManager_GetMaster_BuffTypeDetailMaster___);
    sub_2213A60(&DataManager_TypeInfo);
    sub_2213A60(&Method_DataMasterBase_BuffTypeDetailMaster__BuffTypeDetailEntity__int__TryGetEntity__);
    sub_2213A60(&BattleLogicFunctionProcess_FieldAddStateTargetCheck_TypeInfo);
    sub_2213A60(&BattleBuffData_FieldAliveCondData_TypeInfo);
    sub_2213A60(&int___TypeInfo);
    sub_2213A60(&Method_System_Collections_Generic_List_int___ctor__);
    sub_2213A60(&System_Collections_Generic_List_int__TypeInfo);
    sub_2213A60(&BattleActionData_MasterBuffData_TypeInfo);
    sub_2213A60(&System_Math_TypeInfo);
    sub_2213A60(&UnityEngine_Object_TypeInfo);
    sub_2213A60(&BattleBuffData_ParamAdd_TypeInfo);
    sub_2213A60(&BattleBuffData_RelationOverwriteData_TypeInfo);
    sub_2213A60(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_2213A60(&BattleBuffData_SubstituteData_TypeInfo);
    sub_2213A60(&BattleActionData_ToFieldMasterBuffData_TypeInfo);
    sub_2213A60(&StringLiteral_13907/*"TAMAMOCAT_STUN_BUFF_ID"*/);
    sub_2213A60(&StringLiteral_13908/*"TAMAMOCAT_TREASURE_DEVICE_ID_"*/);
    this = (BattleLogicFunction_o *)sub_2213A60(&StringLiteral_1/*""*/);
    byte_5973BA5 = 1;
  }
  isSelfTurn = 0;
  param = 0;
  v397 = 0;
  isEnemyTurn = 0;
  *(_QWORD *)skillId = 0;
  entity = 0;
  v393 = 0;
  if ( !funcTarget )
    goto LABEL_363;
  if ( !v9 )
    goto LABEL_363;
  funcUnit_k__BackingField = funcTarget->fields._funcUnit_k__BackingField;
  if ( !funcUnit_k__BackingField )
    goto LABEL_363;
  dataVals_k__BackingField = funcUnit_k__BackingField->fields._dataVals_k__BackingField;
  if ( !dataVals_k__BackingField )
    goto LABEL_363;
  uniqueId = v9->fields.actorId;
  targetId = funcTarget->fields._targetId_k__BackingField;
  funcEnt = dataVals_k__BackingField->fields.funcEnt;
  v13 = (BuffEntity_o *)((__int64 (__fastcall *)(BattleLogicFunctionProcess_FunctionTargetCheck_o *, const MethodInfo *, BattleLogicFunctionProcess_FunctionTargetCheck_o *, BattleLogicFunction_ProcListInArgs_o *, bool, const MethodInfo *))funcTarget->klass->vtable._15_GetFixBuffEntity.methodPtr)(
                          funcTarget,
                          funcTarget->klass->vtable._15_GetFixBuffEntity.method,
                          funcTarget,
                          args,
                          shortbuff,
                          method);
  v14 = BattleLogicFunctionProcess_FunctionUnitCheck__get_FuncIndex(funcUnit_k__BackingField, 0);
  naturalAligment = BattleLogicFunctionProcess_FieldAddStateTargetCheck_TypeInfo->_2.naturalAligment;
  v386 = funcTarget->klass->_2.naturalAligment >= (unsigned int)naturalAligment
      && funcTarget->klass->_2.typeHierarchy[naturalAligment - 1] == (Il2CppClass *)BattleLogicFunctionProcess_FieldAddStateTargetCheck_TypeInfo;
  userCommandCodeId = (BattleActionData_o *)v9->fields.userCommandCodeId;
  treasureDvcId = v9->fields.treasureDvcId;
  v385 = (BattleActionData_o *)sub_2213CCC(BattleActionData_TypeInfo);
  BattleActionData___ctor(v385, 0);
  this = (BattleLogicFunction_o *)v10->fields.data;
  if ( !this )
    goto LABEL_363;
  this = (BattleLogicFunction_o *)BattleData__getServantData((BattleData_o *)this, uniqueId, 0);
  if ( !v10->fields.data )
    goto LABEL_363;
  v16 = (BattleServantData_o *)this;
  ServantData = BattleData__getServantData(v10->fields.data, targetId, 0);
  this = (BattleLogicFunction_o *)((__int64 (__fastcall *)(BattleLogicFunctionProcess_FunctionTargetCheck_o *, const MethodInfo *))funcTarget->klass->vtable._8_MakeActionBuffData.methodPtr)(
                                    funcTarget,
                                    funcTarget->klass->vtable._8_MakeActionBuffData.method);
  if ( !v13 )
    goto LABEL_363;
  v18 = (BattleActionData_ToFieldMasterBuffData_o *)this;
  this = (BattleLogicFunction_o *)BuffEntity__checkBuffType(v13, 142, 0);
  if ( ((unsigned __int8)this & 1) != 0 )
  {
    if ( v386 )
    {
      v18 = (BattleActionData_ToFieldMasterBuffData_o *)sub_2213CCC(BattleActionData_ToFieldMasterBuffData_TypeInfo);
      BattleActionData_ToFieldMasterBuffData___ctor(v18, funcEnt, 0);
    }
    else
    {
      v18 = (BattleActionData_ToFieldMasterBuffData_o *)sub_2213CCC(BattleActionData_MasterBuffData_TypeInfo);
      BattleActionData_MasterBuffData___ctor((BattleActionData_MasterBuffData_o *)v18, funcEnt, 0);
    }
  }
  if ( !ServantData )
    goto LABEL_363;
  v387 = v9;
  if ( !v18 )
    goto LABEL_363;
  v19 = ServantData->fields.uniqueId;
  v18->fields.functionIndex = v14;
  v20 = BattleBuffData_BuffData_TypeInfo;
  v18->fields.targetId = v19;
  v21 = sub_2213CCC(v20);
  BattleBuffData_BuffData___ctor((BattleBuffData_BuffData_o *)v21, 0);
  if ( !v21 )
    goto LABEL_363;
  funcIndex = v14;
  *(_DWORD *)(v21 + 16) = v13->fields.id;
  if ( !args )
    goto LABEL_363;
  *(_DWORD *)(v21 + 164) = BattleLogicFunction_ProcListInArgs__get_SkillId(args, 0);
  *(_DWORD *)(v21 + 188) = BattleLogicFunction_ProcListInArgs__get_GrantSkillType(args, 0);
  *(_DWORD *)(v21 + 176) = DataVals__GetMotionChange(dataVals_k__BackingField, 0);
  *(_DWORD *)(v21 + 20) = 2 * DataVals__GetParam(dataVals_k__BackingField, 1, 0, 0);
  *(_DWORD *)(v21 + 548) = DataVals__GetParam(dataVals_k__BackingField, 176, 0, 0);
  BattleBuffData_BuffData__RegisterGeneralParams((BattleBuffData_BuffData_o *)v21, dataVals_k__BackingField, 0);
  v23 = v387->fields.isReversalShortBuffTurn ^ shortbuff;
  if ( (v23 & 1) != 0 )
    --*(_DWORD *)(v21 + 20);
  AdjustmentBuffTurn = BattleLogicFunction__GetAdjustmentBuffTurn(v10, dataVals_k__BackingField, v16, v22);
  v390 = (BattleActionData_BuffData_o *)v18;
  if ( AdjustmentBuffTurn )
  {
    v23 ^= 1u;
    *(_DWORD *)(v21 + 20) += AdjustmentBuffTurn;
  }
  this = (BattleLogicFunction_o *)BattleLogicFunction__IsSvtBuffTurnExtend(v10, targetId, v13, v23 & 1, v25);
  v26 = (char)this;
  if ( ((unsigned __int8)this & 1) != 0 )
  {
    v23 ^= 1u;
    ++*(_DWORD *)(v21 + 20);
  }
  *(_DWORD *)(v21 + 68) = uniqueId;
  if ( !funcEnt )
    goto LABEL_363;
  v392 = args;
  v28 = Target__isEnemy(funcEnt->fields.targetType, 0) || Target__Check(35, funcEnt->fields.targetType, 0);
  v29 = v23 ^ v28;
  type = v13->fields.type;
  v31 = v29 & 1;
  isSelfTurn = v29 & 1;
  if ( !*(&BuffList_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(BuffList_TypeInfo, v27);
  this = (BattleLogicFunction_o *)BuffList__IsForceProgressSelfTurnType(type, 0);
  if ( ((unsigned __int8)this & 1) != 0 )
  {
    v31 = 1;
    isSelfTurn = 1;
  }
  if ( (v26 & 1) == 0 )
  {
    BattleLogicFunction__UpdateBuffProgressTurn(v10, v13->fields.type, &isSelfTurn, v32);
    v31 = isSelfTurn;
  }
  isEnemy = ServantData->fields.isEnemy;
  v34 = isEnemy != (v31 == 0);
  *(_BYTE *)(v21 + 180) = v34;
  if ( (v26 & 1) != 0 )
  {
    v35 = v392;
  }
  else
  {
    this = (BattleLogicFunction_o *)BuffEntity__GetProgressSelfTurn(v13, 0);
    isEnemy = ServantData->fields.isEnemy;
    v35 = v392;
    if ( ((unsigned int)this & 0x80000000) != 0 )
    {
      v34 = *(unsigned __int8 *)(v21 + 180);
    }
    else
    {
      v34 = isEnemy != ((_DWORD)this == 0);
      *(_BYTE *)(v21 + 180) = v34;
    }
  }
  v36 = v34 == isEnemy;
  data = v10->fields.data;
  v38 = v36;
  *(_BYTE *)(v21 + 192) = v38;
  if ( !data )
    goto LABEL_363;
  this = (BattleLogicFunction_o *)data->fields.battleEvent;
  if ( !this )
    goto LABEL_363;
  *(_DWORD *)(v21 + 184) = ((__int64 (__fastcall *)(BattleLogicFunction_o *, BuffEntity_o *, Il2CppMethodPointer))this->klass[1].vtable._0_Equals.method)(
                             this,
                             v13,
                             this->klass[1].vtable._1_Finalize.methodPtr);
  ProgressTurnCond = BuffEntity__GetProgressTurnCond(v13, 0);
  if ( (ProgressTurnCond & 0x80000000) == 0 )
    *(_DWORD *)(v21 + 184) = ProgressTurnCond;
  *(_DWORD *)(v21 + 24) = DataVals__GetParam(dataVals_k__BackingField, 2, 0, 0);
  *(_DWORD *)(v21 + 28) = DataVals__GetParam(dataVals_k__BackingField, 3, 0, 0);
  v40 = DataVals__GetParam(dataVals_k__BackingField, 67, 0, 0);
  v42 = v13->fields.type;
  v18->fields.popDelay = v40;
  if ( !*(&BuffList_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(BuffList_TypeInfo, v41);
  if ( BuffList__CheckType(143, v42, 0) )
    goto LABEL_61;
  v44 = v13->fields.type;
  if ( !*(&BuffList_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(BuffList_TypeInfo, v43);
  if ( BuffList__CheckType(145, v44, 0) )
    goto LABEL_61;
  v46 = v13->fields.type;
  if ( !*(&BuffList_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(BuffList_TypeInfo, v45);
  if ( BuffList__CheckType(146, v46, 0) )
    goto LABEL_61;
  v48 = v13->fields.type;
  if ( !*(&BuffList_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(BuffList_TypeInfo, v47);
  if ( BuffList__CheckType(147, v48, 0) )
  {
LABEL_61:
    tdCommandTypeChange = v35->fields.tdCommandTypeChange;
    if ( (tdCommandTypeChange & 0x80000000) == 0 )
      *(_DWORD *)(v21 + 28) = tdCommandTypeChange;
    v50 = 1;
  }
  else
  {
    v50 = 0;
  }
  *(_DWORD *)(v21 + 52) = DataVals__GetParam(dataVals_k__BackingField, 8, 0, 0);
  v51 = DataVals__GetParam(dataVals_k__BackingField, 9, 0, 0);
  v52 = int___TypeInfo;
  *(_DWORD *)(v21 + 56) = v51;
  v53 = sub_2213B20(v52, 2);
  *(_QWORD *)(v21 + 40) = v53;
  sub_2213A04((MissionNaviTransitionBoardItem_o *)(v21 + 40), v53, v54, v55, v56, v57, v58, v59);
  v60 = *(_QWORD *)(v21 + 40);
  this = (BattleLogicFunction_o *)DataVals__GetParam(dataVals_k__BackingField, 3, 0, 0);
  if ( !v60 )
    goto LABEL_363;
  if ( !*(_DWORD *)(v60 + 24) )
    goto LABEL_364;
  v61 = *(_QWORD *)(v21 + 40);
  *(_DWORD *)(v60 + 32) = (_DWORD)this;
  this = (BattleLogicFunction_o *)DataVals__GetParam(dataVals_k__BackingField, 4, 0, 0);
  if ( !v61 )
    goto LABEL_363;
  if ( (*(_DWORD *)(v61 + 24) & 0xFFFFFFFE) == 0 )
    goto LABEL_364;
  v381 = v50;
  *(_DWORD *)(v61 + 36) = (_DWORD)this;
  v62 = v13->fields.type;
  if ( !*(&BuffList_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(BuffList_TypeInfo, mainAction);
  this = (BattleLogicFunction_o *)BuffList__CheckType(135, v62, 0);
  if ( ((unsigned __int8)this & 1) != 0 )
  {
    v63 = v10->fields.data;
    if ( !v63 )
      goto LABEL_363;
    battle_ent = v63->fields.battle_ent;
    if ( !battle_ent )
      goto LABEL_363;
    userId = battle_ent->fields.userId;
    eventId = battle_ent->fields.eventId;
    this = (BattleLogicFunction_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_47A29F8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !this )
      goto LABEL_363;
    this = (BattleLogicFunction_o *)DataManager__GetMasterData_object_(
                                      (DataManager_o *)this,
                                      (const MethodInfo_385636C *)Method_DataManager_GetMasterData_EventPointBuffMaster___);
    if ( !this )
      goto LABEL_363;
    v67 = (EventPointBuffMaster_o *)this;
    EventPointGroupId = EventPointBuffMaster__GetEventPointGroupId(
                          (EventPointBuffMaster_o *)this,
                          eventId,
                          funcEnt->fields.id,
                          0,
                          0);
    this = (BattleLogicFunction_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_47A29F8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !this )
      goto LABEL_363;
    this = (BattleLogicFunction_o *)DataManager__GetMasterData_object_(
                                      (DataManager_o *)this,
                                      (const MethodInfo_385636C *)Method_DataManager_GetMasterData_UserEventPointMaster___);
    if ( !this )
      goto LABEL_363;
    EntityDefinitely = UserEventPointMaster__GetEntityDefinitely(
                         (UserEventPointMaster_o *)this,
                         userId,
                         eventId,
                         EventPointGroupId,
                         0);
    v35 = v392;
    if ( EntityDefinitely )
    {
      value = EntityDefinitely->fields.value;
      this = (BattleLogicFunction_o *)EventPointBuffMaster__GetAllEventBuff(
                                        v67,
                                        EntityDefinitely->fields.eventId,
                                        EventPointGroupId,
                                        0);
      if ( !this )
        goto LABEL_363;
      logic = (int)this->fields.logic;
      if ( logic >= 1 )
      {
        v72 = 0;
        v73 = 0;
        do
        {
          if ( logic == v72 )
            goto LABEL_364;
          v74 = *((_QWORD *)&this->fields.logictarget + v72);
          if ( !v74 )
            goto LABEL_363;
          if ( value < *(int *)(v74 + 28) )
            break;
          ++v72;
          v73 = v74;
        }
        while ( (logic & ~(logic >> 31)) != v72 );
        if ( v73 )
          *(_DWORD *)(v21 + 28) += *(_DWORD *)(v73 + 64);
      }
    }
  }
  *(_DWORD *)(v21 + 416) = DataVals__GetParamAddIndividualityTargetType(dataVals_k__BackingField, 0);
  *(_BYTE *)(v21 + 538) = DataVals__GetParam(dataVals_k__BackingField, 275, 0, 0) == 1;
  if ( DataVals__IsExistSnapShotParamAddIndv(dataVals_k__BackingField, 0) )
  {
    v75 = *(_DWORD *)(v21 + 28);
    v76 = v10->fields.data;
    v77 = (BattleBuffData_CheckIndividualitiesData_o *)sub_2213CCC(BattleBuffData_CheckIndividualitiesData_TypeInfo);
    BattleBuffData_CheckIndividualitiesData___ctor_52826232(v77, v16, ServantData, 0, 0, 0, 0, 1, 0);
    v78 = (BattleBuffData_ParamAdd_o *)sub_2213CCC(BattleBuffData_ParamAdd_TypeInfo);
    BattleBuffData_ParamAdd___ctor_52870128(v78, dataVals_k__BackingField, 0);
    v79 = v78;
    v35 = v392;
    *(_DWORD *)(v21 + 28) = BattleBuffData__GetTotalParamAddValue((BattleBuffData_BuffData_o *)v21, v76, v77, v79, 0)
                          + v75;
  }
  if ( DataVals__isParam(dataVals_k__BackingField, 28, 0) && DataVals__isParam(dataVals_k__BackingField, 29, 0) )
  {
    v80 = sub_2213B20(int___TypeInfo, 2);
    *(_QWORD *)(v21 + 104) = v80;
    sub_2213A04((MissionNaviTransitionBoardItem_o *)(v21 + 104), v80, v81, v82, v83, v84, v85, v86);
    v87 = *(_QWORD *)(v21 + 104);
    this = (BattleLogicFunction_o *)DataVals__GetParam(dataVals_k__BackingField, 28, 0, 0);
    if ( !v87 )
      goto LABEL_363;
    if ( !*(_DWORD *)(v87 + 24) )
      goto LABEL_364;
    v88 = *(_QWORD *)(v21 + 104);
    *(_DWORD *)(v87 + 32) = (_DWORD)this;
    this = (BattleLogicFunction_o *)DataVals__GetParam(dataVals_k__BackingField, 29, 0, 0);
    if ( !v88 )
      goto LABEL_363;
    if ( (*(_DWORD *)(v88 + 24) & 0xFFFFFFFE) == 0 )
      goto LABEL_364;
    *(_DWORD *)(v88 + 36) = (_DWORD)this;
  }
  *(_DWORD *)(v21 + 64) = DataVals__GetParam(dataVals_k__BackingField, 15, 0, 0);
  *(_DWORD *)(v21 + 344) = DataVals__GetClassIconAuraEffectId(dataVals_k__BackingField, 0);
  if ( DataVals__GetParam(dataVals_k__BackingField, 11, 0, 0) >= 1 )
    *(_DWORD *)(v21 + 60) = uniqueId;
  if ( DataVals__GetParam(dataVals_k__BackingField, 48, 0, 0) >= 1 )
    BattleBuffData_BuffData__onState((BattleBuffData_BuffData_o *)v21, 0x8000, 0);
  if ( DataVals__GetParam(dataVals_k__BackingField, 52, 0, 0) >= 1 )
    BattleBuffData_BuffData__onState((BattleBuffData_BuffData_o *)v21, 0x10000, 0);
  if ( DataVals__GetParam(dataVals_k__BackingField, 91, 0, 0) >= 1 )
    BattleBuffData_BuffData__onState((BattleBuffData_BuffData_o *)v21, 0x80000, 0);
  if ( DataVals__GetParam(dataVals_k__BackingField, 94, 0, 0) >= 1 )
    BattleBuffData_BuffData__onState((BattleBuffData_BuffData_o *)v21, 0x100000, 0);
  if ( DataVals__GetParam(dataVals_k__BackingField, 68, 0, 0) >= 1 )
    BattleBuffData_BuffData__onState((BattleBuffData_BuffData_o *)v21, 0x40000, 0);
  if ( DataVals__GetParam(dataVals_k__BackingField, 147, 0, 0) >= 1 )
    BattleBuffData_BuffData__onState((BattleBuffData_BuffData_o *)v21, 0x2000000, 0);
  if ( DataVals__TryGetParam(dataVals_k__BackingField, 218, &param, 0) )
    *(_DWORD *)(v21 + 448) = param;
  if ( DataVals__TryGetParam(dataVals_k__BackingField, 219, &v397, 0) )
  {
    v90 = int___TypeInfo;
    v91 = *(_DWORD *)(v21 + 68);
    *(_DWORD *)(v21 + 452) = v397;
    this = (BattleLogicFunction_o *)sub_2213B20(v90, 1);
    if ( !this )
      goto LABEL_363;
    if ( !LODWORD(this->fields.logic) )
      goto LABEL_364;
    LODWORD(this->fields.logictarget) = *(_DWORD *)(v21 + 452);
    *(_DWORD *)(v21 + 544) = BattleLogicFunction_ProcListInArgs__GetSatisfyIndividualityGrantBuffUniqueId(
                               v35,
                               v91,
                               (System_Int32_array *)this,
                               0);
    if ( DataVals__GetParam(dataVals_k__BackingField, 220, 0, 0) >= 1 )
      *(_BYTE *)(v21 + 456) = 1;
    BattleServantData__RemoveUnnecessarySameIndividualityActorOnFieldBuff(ServantData, v16, 0);
  }
  v92 = *(_DWORD *)(v21 + 28);
  *(_DWORD *)(v21 + 28) = BattleLogicFunction__GetAddCondParamValue(v10, dataVals_k__BackingField, ServantData, v89)
                        + v92;
  if ( DataVals__isParam(dataVals_k__BackingField, 44, 0) )
  {
    v94 = DataVals__GetParam(dataVals_k__BackingField, 44, 0, 0);
    v95 = sub_2213CCC(BattleBuffData_FieldAliveCondData_TypeInfo);
    BattleBuffData_FieldAliveCondData___ctor((BattleBuffData_FieldAliveCondData_o *)v95, 0);
    if ( !v95 )
      goto LABEL_363;
    v96 = System_Math_TypeInfo;
    v97 = *(&System_Math_TypeInfo->_2.cctor_finished + 1);
    *(_BYTE *)(v95 + 16) = ServantData->fields.isEnemy;
    *(_BYTE *)(v95 + 17) = v94 > 0;
    if ( !v97 )
      j_il2cpp_runtime_class_init_0(v96, mainAction);
    if ( v94 >= 0 )
      v98 = v94;
    else
      v98 = -v94;
    *(_DWORD *)(v95 + 20) = v98;
    TargetIndiv = BuffEntity__GetTargetIndiv(v13, 0);
    *(_QWORD *)(v95 + 24) = TargetIndiv;
    sub_2213A04(
      (MissionNaviTransitionBoardItem_o *)(v95 + 24),
      (int32_t)TargetIndiv,
      v100,
      v101,
      v102,
      v103,
      v104,
      v105);
    IsIncludeIgnoreIndividuality = BuffEntity__IsIncludeIgnoreIndividuality(v13, 0);
    *(_QWORD *)(v21 + 152) = v95;
    *(_BYTE *)(v95 + 32) = IsIncludeIgnoreIndividuality;
    sub_2213A04((MissionNaviTransitionBoardItem_o *)(v21 + 152), v95, v107, v108, v109, v110, v111, v112);
    v35->fields.updateField = 1;
  }
  v113 = v13->fields.type;
  if ( !*(&BuffList_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(BuffList_TypeInfo, v93);
  if ( BuffList__IsIntervalPossibleBuff(v113, 0) )
  {
    IntervalData = DataVals__GetIntervalData(dataVals_k__BackingField, 0);
    *(_QWORD *)(v21 + 360) = IntervalData;
    sub_2213A04(
      (MissionNaviTransitionBoardItem_o *)(v21 + 360),
      (int32_t)IntervalData,
      v115,
      v116,
      v117,
      v118,
      v119,
      v120);
  }
  if ( BattleBuffData__CheckInvalidSacrificeIndiv((BattleBuffData_BuffData_o *)v21, 0) )
    v35->fields.updateField = 1;
  ParamArray = DataVals__GetParamArray(dataVals_k__BackingField, 118, 0);
  *(_QWORD *)(v21 + 328) = ParamArray;
  sub_2213A04((MissionNaviTransitionBoardItem_o *)(v21 + 328), (int32_t)ParamArray, v122, v123, v124, v125, v126, v127);
  CardEffectId = BuffEntity__GetCardEffectId(v13, 0);
  v130 = v13->fields.type;
  *(_DWORD *)(v21 + 208) = CardEffectId;
  if ( !*(&BuffList_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(BuffList_TypeInfo, v129);
  if ( BuffList__CheckType(144, v130, 0) )
  {
    RelationId = BuffEntity__getRelationId(v13, 0);
    v133 = (BattleBuffData_RelationOverwriteData_o *)sub_2213CCC(BattleBuffData_RelationOverwriteData_TypeInfo);
    BattleBuffData_RelationOverwriteData___ctor(v133, 0);
    if ( RelationId < 1 )
    {
      *(_QWORD *)(v21 + 168) = v133;
      v143 = (MissionNaviTransitionBoardItem_o *)(v21 + 168);
    }
    else
    {
      this = (BattleLogicFunction_o *)BuffEntity__getRelationId(v13, 0);
      if ( !v133 )
        goto LABEL_363;
      v133->fields.id = (int)this;
      v140 = BattleDataDefine_TypeInfo;
      if ( !*(&BattleDataDefine_TypeInfo->_2.cctor_finished + 1) )
      {
        j_il2cpp_runtime_class_init_0(BattleDataDefine_TypeInfo, mainAction);
        v140 = BattleDataDefine_TypeInfo;
      }
      AtkRelationPriority = BuffEntity__getAtkRelationPriority(v13, v140->static_fields->OVERWRITE_ATK_RATE_PRIORITY, 0);
      v142 = BattleDataDefine_TypeInfo;
      v133->fields.atkPriority = AtkRelationPriority;
      v133->fields.defPriority = BuffEntity__getDefRelationPriority(
                                   v13,
                                   v142->static_fields->OVERWRITE_DEF_RATE_PRIORITY,
                                   0);
      *(_QWORD *)(v21 + 168) = v133;
      v143 = (MissionNaviTransitionBoardItem_o *)(v21 + 168);
    }
    sub_2213A04(v143, (int32_t)v133, v134, v135, v136, v137, v138, v139);
  }
  v144 = v13->fields.type;
  if ( !*(&BuffList_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(BuffList_TypeInfo, v131);
  if ( BuffList__CheckType(154, v144, 0) )
    BattleActionData_BuffData__OnUpdateBuffType(v390, 1, 0);
  if ( BuffEntity__checkBuffType(v13, 7, 0) && v16 )
  {
    UpDownGiveHeal = BattleServantData__getUpDownGiveHeal(v16, ServantData, 0);
    v146 = BattleUtility__FloorToInt(UpDownGiveHeal * (float)*(int *)(v21 + 28), 0);
    v147 = *(_DWORD *)(v21 + 52);
    *(_DWORD *)(v21 + 28) = v146;
    v148 = BattleUtility__FloorToInt(UpDownGiveHeal * (float)v147, 0);
    v149 = *(_DWORD *)(v21 + 56);
    *(_DWORD *)(v21 + 52) = v148;
    *(_DWORD *)(v21 + 56) = BattleUtility__FloorToInt(UpDownGiveHeal * (float)v149, 0);
    BattleServantData__getIndividualities(v16, 0, 1, 0, 1, 0);
  }
  *(_BYTE *)(v21 + 32) = 0;
  *(_BYTE *)(v21 + 33) = BattleLogicFunction_ProcListInArgs__get_IsPassive(v35, 0);
  if ( DataVals__isParam(dataVals_k__BackingField, 25, 0) )
    *(_BYTE *)(v21 + 33) = 1;
  if ( DataVals__isParam(dataVals_k__BackingField, 26, 0) )
  {
    *(_BYTE *)(v21 + 33) = 0;
  }
  else if ( *(_BYTE *)(v21 + 33) )
  {
    *(_DWORD *)(v21 + 460) = DataVals__GetParam(dataVals_k__BackingField, 221, 0, 0);
  }
  if ( dataVals_k__BackingField->fields.flgBoost )
    BattleBuffData_BuffData__onState((BattleBuffData_BuffData_o *)v21, 2, 0);
  if ( DataVals__isRatioHpRange(dataVals_k__BackingField, 0) )
  {
    *(_DWORD *)(v21 + 72) = DataVals__GetParam(dataVals_k__BackingField, 20, 0, 0);
    *(_DWORD *)(v21 + 76) = DataVals__GetParam(dataVals_k__BackingField, 21, 0, 0);
    *(_DWORD *)(v21 + 80) = DataVals__GetParam(dataVals_k__BackingField, 32, 0, 0);
    *(_DWORD *)(v21 + 84) = DataVals__GetParam(dataVals_k__BackingField, 33, 0, 0);
  }
  else if ( DataVals__isParam(dataVals_k__BackingField, 20, 0) )
  {
    *(_DWORD *)(v21 + 72) = DataVals__GetParam(dataVals_k__BackingField, 20, 0, 0);
  }
  else if ( DataVals__isParam(dataVals_k__BackingField, 21, 0) )
  {
    *(_DWORD *)(v21 + 76) = DataVals__GetParam(dataVals_k__BackingField, 21, 0, 0);
  }
  if ( DataVals__isParamAddIndividuality(dataVals_k__BackingField, 0) )
  {
    v150 = DataVals__GetParamArray(dataVals_k__BackingField, 72, 0);
    *(_QWORD *)(v21 + 224) = v150;
    sub_2213A04((MissionNaviTransitionBoardItem_o *)(v21 + 224), (int32_t)v150, v151, v152, v153, v154, v155, v156);
    v157 = DataVals__GetParamArray(dataVals_k__BackingField, 73, 0);
    *(_QWORD *)(v21 + 232) = v157;
    sub_2213A04((MissionNaviTransitionBoardItem_o *)(v21 + 232), (int32_t)v157, v158, v159, v160, v161, v162, v163);
    v164 = DataVals__GetParamArray(dataVals_k__BackingField, 74, 0);
    *(_QWORD *)(v21 + 240) = v164;
    sub_2213A04((MissionNaviTransitionBoardItem_o *)(v21 + 240), (int32_t)v164, v165, v166, v167, v168, v169, v170);
    v171 = DataVals__GetParamAddIndividualityAndCheckArrayData(dataVals_k__BackingField, 198, 0);
    *(_QWORD *)(v21 + 424) = v171;
    sub_2213A04((MissionNaviTransitionBoardItem_o *)(v21 + 424), (int32_t)v171, v172, v173, v174, v175, v176, v177);
    v178 = DataVals__GetParamAddIndividualityAndCheckArrayData(dataVals_k__BackingField, 199, 0);
    *(_QWORD *)(v21 + 432) = v178;
    sub_2213A04((MissionNaviTransitionBoardItem_o *)(v21 + 432), (int32_t)v178, v179, v180, v181, v182, v183, v184);
    v185 = DataVals__GetParamAddIndividualityAndCheckArrayData(dataVals_k__BackingField, 200, 0);
    *(_QWORD *)(v21 + 440) = v185;
    sub_2213A04((MissionNaviTransitionBoardItem_o *)(v21 + 440), (int32_t)v185, v186, v187, v188, v189, v190, v191);
    *(_DWORD *)(v21 + 248) = DataVals__GetParam(dataVals_k__BackingField, 75, 0, 0);
    *(_DWORD *)(v21 + 252) = DataVals__GetParam(dataVals_k__BackingField, 62, 0, 0);
    *(_DWORD *)(v21 + 268) = DataVals__GetParam(dataVals_k__BackingField, 63, 0, 0);
  }
  if ( DataVals__IsParamAddBattlePoint(dataVals_k__BackingField, 0) )
  {
    *(_DWORD *)(v21 + 384) = DataVals__GetParam(dataVals_k__BackingField, 185, 0, 0);
    *(_DWORD *)(v21 + 388) = DataVals__GetParam(dataVals_k__BackingField, 186, 0, 0);
  }
  v193 = v13->fields.type;
  if ( !*(&BuffList_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(BuffList_TypeInfo, v192);
  if ( BuffList__CheckType(162, v193, 0) )
  {
    UpBuffRateBuffTypeList = BuffEntity__GetUpBuffRateBuffTypeList(v13, 0);
    *(_QWORD *)(v21 + 256) = UpBuffRateBuffTypeList;
    sub_2213A04(
      (MissionNaviTransitionBoardItem_o *)(v21 + 256),
      (int32_t)UpBuffRateBuffTypeList,
      v195,
      v196,
      v197,
      v198,
      v199,
      v200);
    *(_DWORD *)(v21 + 264) = BuffEntity__GetMaxBuffRate(v13, 0);
  }
  if ( DataVals__isParam(dataVals_k__BackingField, 22, 0) )
    BattleBuffData_BuffData__onState((BattleBuffData_BuffData_o *)v21, 64, 0);
  if ( DataVals__isParam(dataVals_k__BackingField, 27, 0) )
    BattleBuffData_BuffData__onState((BattleBuffData_BuffData_o *)v21, 128, 0);
  this = (BattleLogicFunction_o *)DataVals__isShowState(dataVals_k__BackingField, 0);
  if ( ((unsigned __int8)this & 1) != 0 )
  {
    LODWORD(mainAction) = DataVals__GetParam(dataVals_k__BackingField, 14, 0, 0);
LABEL_177:
    BattleBuffData_BuffData__setShowState((BattleBuffData_BuffData_o *)v21, (int32_t)mainAction, 0);
    goto LABEL_194;
  }
  if ( *(_BYTE *)(v21 + 33) )
  {
    externalArg = v35->fields.externalArg;
    if ( !externalArg )
      goto LABEL_363;
    if ( externalArg->fields.isWarBoard )
    {
      if ( !v16 )
        goto LABEL_363;
      if ( v16->fields.isEnemy && externalArg->fields.grantSkillType == 12 )
      {
        ShowStateWarBoardEnemyEquip = BuffEntity__GetShowStateWarBoardEnemyEquip(v13, 0, 0);
        LODWORD(mainAction) = ShowStateWarBoardEnemyEquip;
        if ( ShowStateWarBoardEnemyEquip )
          goto LABEL_177;
        if ( !*(&DataManager_TypeInfo->_2.cctor_finished + 1) )
          j_il2cpp_runtime_class_init_0(DataManager_TypeInfo, ShowStateWarBoardEnemyEquip);
        this = (BattleLogicFunction_o *)DataManager__GetMaster_object_((const MethodInfo_3856318 *)Method_DataManager_GetMaster_BuffTypeDetailMaster___);
        if ( !this )
          goto LABEL_363;
        this = (BattleLogicFunction_o *)DataMasterBase_object__object__int___TryGetEntity(
                                          (DataMasterBase_TMaster__TEntity__PKType__o *)this,
                                          &entity,
                                          v13->fields.type,
                                          (const MethodInfo_3F10B80 *)Method_DataMasterBase_BuffTypeDetailMaster__BuffTypeDetailEntity__int__TryGetEntity__);
        if ( ((unsigned __int8)this & 1) != 0 )
        {
          this = (BattleLogicFunction_o *)entity;
          if ( !entity )
            goto LABEL_363;
          this = (BattleLogicFunction_o *)BuffTypeDetailEntity__GetShowStateWarBoardEnemyEquip(
                                            (BuffTypeDetailEntity_o *)entity,
                                            0,
                                            0);
          mainAction = (BattleActionData_o *)(unsigned int)this;
          if ( (_DWORD)this )
            goto LABEL_177;
        }
      }
    }
    v203 = v10->fields.data;
    if ( !v203 )
      goto LABEL_363;
    this = (BattleLogicFunction_o *)v203->fields.battleEvent;
    if ( !this )
      goto LABEL_363;
    ((void (__fastcall *)(BattleLogicFunction_o *, __int64, Il2CppMethodPointer))this->klass[1].vtable._1_Finalize.method)(
      this,
      v21,
      this->klass[1].vtable._2_GetHashCode.methodPtr);
  }
LABEL_194:
  if ( DataVals__IsOpponentOnly(dataVals_k__BackingField, 0) )
    BattleBuffData_BuffData__onState((BattleBuffData_BuffData_o *)v21, 2048, 0);
  if ( DataVals__isShowCommand(dataVals_k__BackingField, 0) )
    BattleBuffData_BuffData__onState((BattleBuffData_BuffData_o *)v21, 512, 0);
  if ( DataVals__IsAddIndividualty(dataVals_k__BackingField, 0) )
  {
    AddIndividualty = DataVals__GetAddIndividualty(dataVals_k__BackingField, 0);
    *(_QWORD *)(v21 + 120) = AddIndividualty;
    sub_2213A04(
      (MissionNaviTransitionBoardItem_o *)(v21 + 120),
      (int32_t)AddIndividualty,
      v205,
      v206,
      v207,
      v208,
      v209,
      v210);
  }
  if ( DataVals__IsAddLinkageTargetIndividualty(dataVals_k__BackingField, 0) )
  {
    LinkageTargetIndividualty = DataVals__GetLinkageTargetIndividualty(dataVals_k__BackingField, 0);
    *(_QWORD *)(v21 + 128) = LinkageTargetIndividualty;
    sub_2213A04(
      (MissionNaviTransitionBoardItem_o *)(v21 + 128),
      (int32_t)LinkageTargetIndividualty,
      v212,
      v213,
      v214,
      v215,
      v216,
      v217);
  }
  this = (BattleLogicFunction_o *)funcTarget->fields._funcUnit_k__BackingField;
  if ( !this )
    goto LABEL_363;
  if ( BattleLogicFunctionProcess_FunctionUnitCheck__HasLinkedFuncUnit(
         (BattleLogicFunctionProcess_FunctionUnitCheck_o *)this,
         0)
    && DataVals__IsBehaveAsFamilyBuff(dataVals_k__BackingField, 0) )
  {
    BattleLogicFunction__BehaveLinkageBuffAsFamily(v10, (BattleBuffData_BuffData_o *)v21, funcTarget, v218);
  }
  if ( DataVals__isParam(dataVals_k__BackingField, 102, 0) )
    BattleBuffData_BuffData__onState((BattleBuffData_BuffData_o *)v21, 0x800000, 0);
  if ( DataVals__isParam(dataVals_k__BackingField, 103, 0) )
    BattleBuffData_BuffData__onState((BattleBuffData_BuffData_o *)v21, 0x1000000, 0);
  if ( BuffEntity__getAppearanceId(v13, 0) >= 1 )
  {
    this = (BattleLogicFunction_o *)BattleServantData__isShiftableServant(ServantData, 0);
    if ( ((unsigned __int8)this & 1) != 0 )
      goto LABEL_217;
    v219 = v10->fields.data;
    if ( !v219 )
      goto LABEL_363;
    this = (BattleLogicFunction_o *)v219->fields.battleEvent;
    if ( !this )
      goto LABEL_363;
    if ( (((__int64 (__fastcall *)(BattleLogicFunction_o *, BattleServantData_o *, _QWORD))this->klass[1]._2.genericContainerHandle)(
            this,
            ServantData,
            *(_QWORD *)&this->klass[1]._2.instance_size)
        & 1) != 0
      || BattleServantData__isLogicResultAlive(ServantData, 0)
      || BattleServantData__isGuts(ServantData, 0) )
    {
LABEL_217:
      BattleBuffData_BuffData__onState((BattleBuffData_BuffData_o *)v21, 256, 0);
    }
  }
  *(_BYTE *)(v21 + 370) = DataVals__IsEqualsTo1(dataVals_k__BackingField, 162, 0);
  *(_DWORD *)(v21 + 276) = DataVals__GetParam(dataVals_k__BackingField, 96, 0, 0);
  *(_DWORD *)(v21 + 280) = DataVals__GetParam(dataVals_k__BackingField, 97, 0, 0);
  *(_DWORD *)(v21 + 284) = DataVals__GetParam(dataVals_k__BackingField, 98, 0, 0);
  *(_BYTE *)(v21 + 288) = DataVals__GetParam(dataVals_k__BackingField, 99, 0, 0) == 1;
  *(_BYTE *)(v21 + 289) = DataVals__GetParam(dataVals_k__BackingField, 100, 0, 0) == 1;
  *(_BYTE *)(v21 + 464) = DataVals__GetParam(dataVals_k__BackingField, 222, 0, 0) == 1;
  ValsList = DataVals__GetValsList(dataVals_k__BackingField, 104, 0);
  *(_QWORD *)(v21 + 304) = ValsList;
  sub_2213A04((MissionNaviTransitionBoardItem_o *)(v21 + 304), (int32_t)ValsList, v221, v222, v223, v224, v225, v226);
  v227 = DataVals__GetParam(dataVals_k__BackingField, 5, 0, 0);
  if ( v227 )
    v228 = v227;
  else
    v228 = 1000;
  *(_DWORD *)(v21 + 48) = v228;
  *(_BYTE *)(v21 + 465) = DataVals__GetParam(dataVals_k__BackingField, 231, 0, 0) == 1;
  *(_BYTE *)(v21 + 480) = DataVals__GetParam(dataVals_k__BackingField, 233, 0, 0) == 1;
  *(_BYTE *)(v21 + 481) = DataVals__GetParam(dataVals_k__BackingField, 234, 0, 0) == 1;
  v229 = DataVals__GetParam(dataVals_k__BackingField, 235, 0, 0);
  v230 = (System_String_o *)StringLiteral_1/*""*/;
  *(_BYTE *)(v21 + 552) = v229 == 1;
  ParamStringFormat = DataVals__GetParamStringFormat(dataVals_k__BackingField, 232, v230, 0);
  *(_QWORD *)(v21 + 472) = ParamStringFormat;
  sub_2213A04(
    (MissionNaviTransitionBoardItem_o *)(v21 + 472),
    (int32_t)ParamStringFormat,
    v232,
    v233,
    v234,
    v235,
    v236,
    v237);
  *(_DWORD *)(v21 + 484) = DataVals__GetParam(dataVals_k__BackingField, 241, 0, 0);
  *(_DWORD *)(v21 + 488) = DataVals__GetParam(dataVals_k__BackingField, 243, 0, 0);
  *(_BYTE *)(v21 + 492) = DataVals__isUnaffected(dataVals_k__BackingField, 0);
  DataVals__SetUpHatePriority(dataVals_k__BackingField, (BattleBuffData_BuffData_o *)v21, 0);
  BattleBuffData_BuffData__SetJudgeUseEveryTimeFlag((BattleBuffData_BuffData_o *)v21, dataVals_k__BackingField, 0);
  if ( BattleBuffData_BuffData__IsSubstituteBuff((BattleBuffData_BuffData_o *)v21, 0) )
  {
    v238 = (BattleBuffData_SubstituteData_o *)sub_2213CCC(BattleBuffData_SubstituteData_TypeInfo);
    BattleBuffData_SubstituteData___ctor(v238, 0);
    *(_QWORD *)(v21 + 504) = v238;
    sub_2213A04((MissionNaviTransitionBoardItem_o *)(v21 + 504), (int32_t)v238, v239, v240, v241, v242, v243, v244);
    v245 = *(_QWORD *)(v21 + 504);
    this = (BattleLogicFunction_o *)DataVals__GetSubstituteRate(dataVals_k__BackingField, 0);
    if ( !v245 )
      goto LABEL_363;
    v246 = *(_QWORD *)(v21 + 504);
    *(float *)(v245 + 16) = (float)(int)this / 1000.0;
    this = (BattleLogicFunction_o *)DataVals__GetSubstituteResist(dataVals_k__BackingField, 0);
    if ( !v246 )
      goto LABEL_363;
    v247 = *(_QWORD *)(v21 + 504);
    *(float *)(v246 + 20) = (float)(int)this / 1000.0;
    this = (BattleLogicFunction_o *)DataVals__UseSvtResistRate(dataVals_k__BackingField, 0);
    if ( !v247 )
      goto LABEL_363;
    v248 = *(_QWORD *)(v21 + 504);
    *(_BYTE *)(v247 + 24) = (unsigned __int8)this & 1;
    this = (BattleLogicFunction_o *)DataVals__UseBuffResistRate(dataVals_k__BackingField, 0);
    if ( !v248 )
      goto LABEL_363;
    *(_BYTE *)(v248 + 25) = (unsigned __int8)this & 1;
    this = (BattleLogicFunction_o *)DataVals__TryGetSubstituteSkillId(dataVals_k__BackingField, &skillId[1], 0);
    if ( ((unsigned __int8)this & 1) != 0 )
    {
      v249 = *(_QWORD *)(v21 + 504);
      if ( !v249 )
        goto LABEL_363;
      v250 = *(_QWORD *)(v249 + 32);
      if ( !v250 )
        goto LABEL_363;
      *(_DWORD *)(v250 + 16) = skillId[1];
      *(_DWORD *)(v250 + 20) = DataVals__GetSubstituteSkillLv(dataVals_k__BackingField, 0);
    }
    this = (BattleLogicFunction_o *)DataVals__TryGetResistSkillId(dataVals_k__BackingField, skillId, 0);
    if ( ((unsigned __int8)this & 1) != 0 )
    {
      v251 = *(_QWORD *)(v21 + 504);
      if ( !v251 )
        goto LABEL_363;
      v252 = *(_QWORD *)(v251 + 40);
      if ( !v252 )
        goto LABEL_363;
      *(_DWORD *)(v252 + 16) = skillId[0];
      this = (BattleLogicFunction_o *)DataVals__GetResistSkillLv(dataVals_k__BackingField, 0);
      *(_DWORD *)(v252 + 20) = (_DWORD)this;
    }
    v253 = *(_QWORD *)(v21 + 504);
    if ( !v253 )
      goto LABEL_363;
    v254 = *(_QWORD *)(v253 + 48);
    this = (BattleLogicFunction_o *)DataVals__GetSubstitutePopupText(dataVals_k__BackingField, 0);
    if ( !v254 )
      goto LABEL_363;
    *(_QWORD *)(v254 + 16) = this;
    sub_2213A04((MissionNaviTransitionBoardItem_o *)(v254 + 16), (int32_t)this, v255, v256, v257, v258, v259, v260);
    v261 = *(_QWORD *)(v21 + 504);
    if ( !v261 )
      goto LABEL_363;
    v262 = *(_QWORD *)(v261 + 48);
    this = (BattleLogicFunction_o *)DataVals__GetSubstitutePopupIconId(dataVals_k__BackingField, 0);
    if ( !v262 )
      goto LABEL_363;
    v263 = *(_QWORD *)(v21 + 504);
    *(_DWORD *)(v262 + 24) = (_DWORD)this;
    if ( !v263 )
      goto LABEL_363;
    v264 = *(_QWORD *)(v263 + 48);
    this = (BattleLogicFunction_o *)DataVals__GetSubstituteEffectList(dataVals_k__BackingField, 0);
    if ( !v264 )
      goto LABEL_363;
    *(_QWORD *)(v264 + 32) = this;
    sub_2213A04((MissionNaviTransitionBoardItem_o *)(v264 + 32), (int32_t)this, v265, v266, v267, v268, v269, v270);
    v271 = *(_QWORD *)(v21 + 504);
    if ( !v271 )
      goto LABEL_363;
    v272 = *(_QWORD *)(v271 + 56);
    this = (BattleLogicFunction_o *)DataVals__GetResistPopupText(dataVals_k__BackingField, 0);
    if ( !v272 )
      goto LABEL_363;
    *(_QWORD *)(v272 + 16) = this;
    sub_2213A04((MissionNaviTransitionBoardItem_o *)(v272 + 16), (int32_t)this, v273, v274, v275, v276, v277, v278);
    v279 = *(_QWORD *)(v21 + 504);
    if ( !v279 )
      goto LABEL_363;
    v280 = *(_QWORD *)(v279 + 56);
    this = (BattleLogicFunction_o *)DataVals__GetResistPopupIconId(dataVals_k__BackingField, 0);
    if ( !v280 )
      goto LABEL_363;
    v281 = *(_QWORD *)(v21 + 504);
    *(_DWORD *)(v280 + 24) = (_DWORD)this;
    if ( !v281 )
      goto LABEL_363;
    v282 = *(_QWORD *)(v281 + 56);
    this = (BattleLogicFunction_o *)DataVals__GetResistEffectList(dataVals_k__BackingField, 0);
    if ( !v282 )
      goto LABEL_363;
    *(_QWORD *)(v282 + 32) = this;
    sub_2213A04((MissionNaviTransitionBoardItem_o *)(v282 + 32), (int32_t)this, v283, v284, v285, v286, v287, v288);
  }
  *(_DWORD *)(v21 + 516) = DataVals__GetParam(dataVals_k__BackingField, 265, 0, 0);
  *(_BYTE *)(v21 + 520) = DataVals__GetParam(dataVals_k__BackingField, 266, 0, 0) > 0;
  *(_BYTE *)(v21 + 521) = DataVals__GetParam(dataVals_k__BackingField, 268, 0, 0) == 1;
  *(_BYTE *)(v21 + 522) = DataVals__GetParam(dataVals_k__BackingField, 269, 0, 0) == 1;
  *(_BYTE *)(v21 + 523) = DataVals__GetParam(dataVals_k__BackingField, 270, 0, 0) == 1;
  *(_BYTE *)(v21 + 536) = DataVals__GetParam(dataVals_k__BackingField, 272, 0, 0) == 1;
  *(_BYTE *)(v21 + 537) = DataVals__GetParam(dataVals_k__BackingField, 273, 0, 0) == 1;
  v289 = DataVals__GetParam(dataVals_k__BackingField, 277, 0, 0);
  v290 = *(_DWORD *)(v21 + 60);
  *(_DWORD *)(v21 + 540) = v289;
  if ( v290 < 1 )
    goto LABEL_253;
  v291 = (UnityEngine_Object_o *)v10->fields.logic;
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, mainAction);
  if ( UnityEngine_Object__op_Inequality(v291, 0, 0) )
  {
    this = (BattleLogicFunction_o *)v10->fields.logic;
    if ( !this )
      goto LABEL_363;
    v292 = BattleLogic__checkInField((BattleLogic_o *)this, *(_DWORD *)(v21 + 60), 0);
  }
  else
  {
LABEL_253:
    v292 = 1;
  }
  v293 = v13->fields.type;
  if ( !*(&BuffList_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(BuffList_TypeInfo, mainAction);
  if ( BuffList__CheckAccumulation(v293, 0) )
    BattleServantData__resetAccumulationDamage(ServantData, 0);
  mainAction = userCommandCodeId;
  *(_QWORD *)(v21 + 88) = userCommandCodeId;
  if ( (__int64)userCommandCodeId >= 1 )
  {
    this = (BattleLogicFunction_o *)v10->fields.data;
    if ( !this )
      goto LABEL_363;
    UserCommandCode = BattleData__getUserCommandCode((BattleData_o *)this, (int64_t)userCommandCodeId, 0);
    if ( UserCommandCode )
      *(_DWORD *)(v21 + 160) = UserCommandCode->fields.commandCodeId;
  }
  *(_QWORD *)(v21 + 348) = *(_QWORD *)&v387->fields.commandAssistId;
  ((void (__fastcall *)(BattleLogicFunctionProcess_FunctionTargetCheck_o *, __int64, const MethodInfo *))funcTarget->klass->vtable._7_ApplyPrevSaveBuffData.methodPtr)(
    funcTarget,
    v21,
    funcTarget->klass->vtable._7_ApplyPrevSaveBuffData.method);
  v295 = v381 ^ 1;
  if ( !v392->fields._IsTreasureDvc_k__BackingField )
    v295 = 1;
  if ( (v295 & 1) == 0 )
  {
    this = (BattleLogicFunction_o *)sub_2213B20(BattleBuffData_BuffData___TypeInfo, 1);
    if ( !this )
      goto LABEL_363;
    v296 = this;
    this = (BattleLogicFunction_o *)sub_2213BB4(v21, this->klass->_1.element_class);
    if ( !this )
      goto LABEL_365;
    if ( !LODWORD(v296->fields.logic) )
      goto LABEL_364;
    v296->fields.logictarget = (struct BattleLogicTarget_o *)v21;
    sub_2213A04((MissionNaviTransitionBoardItem_o *)&v296->fields.logictarget, v21, v298, v299, v300, v301, v302, v303);
    v304 = (BattleActionEffect_AddServantBuff_o *)sub_2213CCC(BattleActionEffect_AddServantBuff_TypeInfo);
    BattleActionEffect_AddServantBuff___ctor(v304, targetId, (BattleBuffData_BuffData_array *)v296, 0);
    BattleActionData_BuffData__SetActionEffectProc(v390, (BattleActionEffect_Base_o *)v304, 0);
    v387->fields.OverwriteTdMotionId = BattleServantData__getTreasureDvcMotionId(ServantData, 0);
  }
  if ( BuffEntity__checkBuffType(v13, 41, 0) )
    MaxHp = BattleServantData__getMaxHp(ServantData, 0);
  else
    MaxHp = -1;
  userCommandCodeIda = ((__int64 (__fastcall *)(BattleServantData_o *, const MethodInfo *))ServantData->klass->vtable._13_get_resultHp.methodPtr)(
                         ServantData,
                         ServantData->klass->vtable._13_get_resultHp.method);
  if ( !v292 )
    goto LABEL_278;
  v307 = v13->fields.type;
  if ( !*(&BuffList_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(BuffList_TypeInfo, v306);
  if ( BuffList__CheckUpdateHp(v307, 0) )
  {
    v390->fields.procType = 2;
    if ( BattleServantData__isLogicResultAlive(ServantData, 0) )
    {
      v308 = v392;
      v309 = 1;
    }
    else
    {
      v308 = v392;
      if ( BattleServantData__isGuts(ServantData, 0) )
      {
        v311 = ServantData->fields.uniqueId;
        IsCommandSideEffect = BattleLogicFunction_ProcListInArgs__get_IsCommandSideEffect(v392, 0);
        mainAction = BattleLogicFunction__getNoEffectObject(
                       v10,
                       v311,
                       funcIndex,
                       dataVals_k__BackingField,
                       IsCommandSideEffect,
                       0,
                       0,
                       0,
                       0,
                       v379);
        this = (BattleLogicFunction_o *)v385;
        if ( !v385 )
          goto LABEL_363;
        BattleActionData__addAction(v385, mainAction, 0);
      }
      v309 = 0;
    }
    ((void (__fastcall *)(BattleLogicFunctionProcess_FunctionTargetCheck_o *, BattleActionData_BuffData_o *, __int64, __int64, _QWORD, const MethodInfo *))funcTarget->klass->vtable._9_AddBuff.methodPtr)(
      funcTarget,
      v390,
      v21,
      1,
      v309 | (unsigned int)v386,
      funcTarget->klass->vtable._9_AddBuff.method);
    v310 = 0;
  }
  else
  {
LABEL_278:
    ((void (__fastcall *)(BattleLogicFunctionProcess_FunctionTargetCheck_o *, BattleActionData_BuffData_o *, __int64, bool, _QWORD, const MethodInfo *))funcTarget->klass->vtable._9_AddBuff.methodPtr)(
      funcTarget,
      v390,
      v21,
      v292,
      0,
      funcTarget->klass->vtable._9_AddBuff.method);
    v308 = v392;
    v310 = 1;
  }
  if ( v386 )
    v313 = -1;
  else
    v313 = targetId;
  BattleLogicFunction_ProcListInArgs__SaveGrantBuff(v308, v313, (BattleBuffData_BuffData_o *)v21, 0);
  id = v13->fields.id;
  if ( id == ConstantMaster__getValue((System_String_o *)StringLiteral_13907/*"TAMAMOCAT_STUN_BUFF_ID"*/, 0) )
  {
    v315 = (System_Collections_Generic_List_int__o *)sub_2213CCC(System_Collections_Generic_List_int__TypeInfo);
    System_Collections_Generic_List_int____ctor(
      v315,
      (const MethodInfo_44669E0 *)Method_System_Collections_Generic_List_int___ctor__);
    v393 = 1;
    for ( i = System_Int32__ToString((int32_t)&v393, 0); ; i = System_Int32__ToString((int32_t)&v393, 0) )
    {
      v317 = System_String__Concat_75651716((System_String_o *)StringLiteral_13908/*"TAMAMOCAT_TREASURE_DEVICE_ID_"*/, i, 0);
      if ( ConstantMaster__getValue(v317, 0) == -1 )
        break;
      v318 = System_Int32__ToString((int32_t)&v393, 0);
      v319 = System_String__Concat_75651716((System_String_o *)StringLiteral_13908/*"TAMAMOCAT_TREASURE_DEVICE_ID_"*/, v318, 0);
      this = (BattleLogicFunction_o *)ConstantMaster__getValue(v319, 0);
      if ( (_DWORD)this == treasureDvcId )
      {
        if ( !v16 )
          goto LABEL_363;
        BattleServantData__SetIsSleepWaitMode(v16, 1, 0);
      }
      ++v393;
    }
  }
  this = (BattleLogicFunction_o *)v10->fields.data;
  if ( !this )
    goto LABEL_363;
  QuestIndividualities = BattleData__getQuestIndividualities((BattleData_o *)this, 0);
  v322 = (UnityEngine_Object_o *)v10->fields.logic;
  v323 = QuestIndividualities;
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v321);
  this = (BattleLogicFunction_o *)UnityEngine_Object__op_Inequality(v322, 0, 0);
  perf = 0;
  if ( ((unsigned __int8)this & 1) != 0 )
  {
    v325 = v10->fields.logic;
    if ( !v325 )
      goto LABEL_363;
    perf = v325->fields.perf;
  }
  BattleServantData__updateConditionsBuff(ServantData, v323, perf, 0, 0, 0, 0);
  BuffType = BattleBuffData_BuffData__get_BuffType((BattleBuffData_BuffData_o *)v21, 0);
  if ( !*(&BuffList_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(BuffList_TypeInfo, v326);
  if ( BuffList__CheckUpdateBattlePointMax(BuffType, 0) )
  {
    BattleServantData__MarkBattlePointMaxBuffDeltaDirty(ServantData, *(_DWORD *)(v21 + 548), 0);
    v329 = (UnityEngine_Object_o *)v10->fields.logic;
    if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v328);
    this = (BattleLogicFunction_o *)UnityEngine_Object__op_Inequality(v329, 0, 0);
    if ( ((unsigned __int8)this & 1) != 0 )
    {
      v330 = v10->fields.logic;
      if ( !v330 )
        goto LABEL_363;
      v331 = (UnityEngine_Object_o *)v330->fields.perf;
      if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, mainAction);
      v332 = UnityEngine_Object__op_Inequality(v331, 0, 0);
    }
    else
    {
      v332 = 0;
    }
    BattleServantData__RefreshBattlePointByCurrentStatus(ServantData, v332, 1, 0);
  }
  if ( ((v386 | v310) & 1) != 0 )
    goto LABEL_319;
  this = (BattleLogicFunction_o *)v385;
  if ( !v385 )
    goto LABEL_363;
  BattleActionData__addReflectLogicResultServantId(v385, targetId, 0);
  v333 = (BattleActionEffect_AddChangeMaxHpBuff_o *)sub_2213CCC(BattleActionEffect_AddChangeMaxHpBuff_TypeInfo);
  BattleActionEffect_AddChangeMaxHpBuff___ctor(v333, 0);
  this = (BattleLogicFunction_o *)sub_2213B20(BattleBuffData_BuffData___TypeInfo, 1);
  if ( !this )
    goto LABEL_363;
  v334 = this;
  this = (BattleLogicFunction_o *)sub_2213BB4(v21, this->klass->_1.element_class);
  if ( !this )
  {
LABEL_365:
    v378 = sub_2213D00(this, v297);
    sub_2213BA0(v378, 0);
  }
  if ( !LODWORD(v334->fields.logic) )
    goto LABEL_364;
  v334->fields.logictarget = (struct BattleLogicTarget_o *)v21;
  sub_2213A04((MissionNaviTransitionBoardItem_o *)&v334->fields.logictarget, v21, v335, v336, v337, v338, v339, v340);
  this = (BattleLogicFunction_o *)((__int64 (__fastcall *)(BattleServantData_o *, const MethodInfo *))ServantData->klass->vtable._13_get_resultHp.methodPtr)(
                                    ServantData,
                                    ServantData->klass->vtable._13_get_resultHp.method);
  if ( !v333 )
    goto LABEL_363;
  v341 = (BattleActionEffect_Base_o *)((__int64 (__fastcall *)(BattleActionEffect_AddChangeMaxHpBuff_o *, BattleLogicFunction_o *, _QWORD, _QWORD, const MethodInfo *))v333->klass->vtable._7_InitBuff.methodPtr)(
                                        v333,
                                        v334,
                                        targetId,
                                        (unsigned int)((_DWORD)this - userCommandCodeIda),
                                        v333->klass->vtable._7_InitBuff.method);
  BattleActionData_BuffData__SetActionEffectProc(v390, v341, 0);
LABEL_319:
  if ( !BuffEntity__checkBuffType(v13, 133, 0) && !*(_QWORD *)(v21 + 312) )
    goto LABEL_333;
  v343 = (UnityEngine_Object_o *)v10->fields.logic;
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v342);
  if ( UnityEngine_Object__op_Inequality(v343, 0, 0) )
  {
    this = (BattleLogicFunction_o *)v10->fields.logic;
    if ( !this )
      goto LABEL_363;
    BattleLogic__updateConditionsBuffAll((BattleLogic_o *)this, 0, 0, 0);
  }
  this = (BattleLogicFunction_o *)v10->fields.data;
  if ( !this || (this = (BattleLogicFunction_o *)BattleData__getFieldServantList((BattleData_o *)this, 0, 0)) == 0 )
LABEL_363:
    sub_2213CDC(this, mainAction);
  v344 = (int)this->fields.logic;
  v345 = this;
  if ( v344 >= 1 )
  {
    v346 = 0;
    p_logictarget = &this->fields.logictarget;
    while ( (unsigned int)v346 < v344 )
    {
      this = (BattleLogicFunction_o *)p_logictarget[v346];
      if ( !this )
        goto LABEL_363;
      BattleServantData__updateBuff((BattleServantData_o *)this, 1, 1, 0);
      v344 = (int)v345->fields.logic;
      if ( (int)++v346 >= v344 )
        goto LABEL_333;
    }
LABEL_364:
    sub_2213CE4(this);
  }
LABEL_333:
  if ( BuffEntity__checkBuffType(v13, 206, 0) )
  {
    ShortenMaxCountArray = DataVals__GetShortenMaxCountArray(dataVals_k__BackingField, 0);
    *(_QWORD *)(v21 + 392) = ShortenMaxCountArray;
    sub_2213A04(
      (MissionNaviTransitionBoardItem_o *)(v21 + 392),
      (int32_t)ShortenMaxCountArray,
      v349,
      v350,
      v351,
      v352,
      v353,
      v354);
  }
  this = (BattleLogicFunction_o *)BuffEntity__checkBuffType(v13, 208, 0);
  if ( ((unsigned __int8)this & 1) != 0 )
  {
    TargetFunctionIndividuality = DataVals__GetTargetFunctionIndividuality(dataVals_k__BackingField, 0);
    *(_QWORD *)(v21 + 400) = TargetFunctionIndividuality;
    sub_2213A04(
      (MissionNaviTransitionBoardItem_o *)(v21 + 400),
      (int32_t)TargetFunctionIndividuality,
      v356,
      v357,
      v358,
      v359,
      v360,
      v361);
    TargetBuffIndividuality = DataVals__GetTargetBuffIndividuality(dataVals_k__BackingField, 0);
    *(_QWORD *)(v21 + 408) = TargetBuffIndividuality;
    sub_2213A04(
      (MissionNaviTransitionBoardItem_o *)(v21 + 408),
      (int32_t)TargetBuffIndividuality,
      v363,
      v364,
      v365,
      v366,
      v367,
      v368);
  }
  if ( (MaxHp & 0x80000000) == 0 )
  {
    this = (BattleLogicFunction_o *)BattleServantData__getMaxHp(ServantData, 0);
    if ( (int)this < MaxHp )
    {
      v369 = ServantData->fields.maxhp;
      if ( !*(&System_Math_TypeInfo->_2.cctor_finished + 1) )
        j_il2cpp_runtime_class_init_0(System_Math_TypeInfo, mainAction);
      this = (BattleLogicFunction_o *)System_Math__Max_77153260(0, userCommandCodeIda - v369, 0);
      *(_DWORD *)(v21 + 136) = (_DWORD)this;
    }
  }
  v370 = v10->fields.data;
  if ( !v370 )
    goto LABEL_363;
  this = (BattleLogicFunction_o *)v370->fields.battleEvent;
  if ( !this )
    goto LABEL_363;
  *(_BYTE *)(v21 + 212) = (*(__int64 (__fastcall **)(BattleLogicFunction_o *, __int64, BuffEntity_o *, DataVals_o *, _QWORD))&this->klass[1]._2.thread_static_fields_offset)(
                            this,
                            v21,
                            v13,
                            dataVals_k__BackingField,
                            *(_QWORD *)&this->klass[1]._2.token)
                        & 1;
  if ( DataVals__IsOnParty(dataVals_k__BackingField, 0) )
    *(_DWORD *)(v21 + 272) = uniqueId;
  v371 = BattleLogicFunction_ProcListInArgs__get_IsCommandSideEffect(v392, 0);
  v372 = (BattleActionData_BuffData_o *)((__int64 (__fastcall *)(BattleLogicFunctionProcess_FunctionTargetCheck_o *, BattleActionData_BuffData_o *, __int64, FunctionEntity_o *, bool, const MethodInfo *))funcTarget->klass->vtable._12_MakeAddActionBuffData.methodPtr)(
                                          funcTarget,
                                          v390,
                                          v21,
                                          funcEnt,
                                          v371,
                                          funcTarget->klass->vtable._12_MakeAddActionBuffData.method);
  if ( DataVals__IsProgressTurnOnBoard(dataVals_k__BackingField, 0) )
    *(_BYTE *)(v21 + 368) = 1;
  if ( DataVals__GetParam(dataVals_k__BackingField, 152, 0, 0) > 0
    || BuffEntity__IsDelayRemoveExpiredOnPlayerTurn(v13, 0) )
  {
    *(_BYTE *)(v21 + 369) = 1;
  }
  this = (BattleLogicFunction_o *)BattleLogicFunction_ProcListInArgs__get_ParentActBuffData(v392, 0);
  if ( !v385 )
    goto LABEL_363;
  BattleActionData__setBuffData(v385, v372, dataVals_k__BackingField, (BattleActionData_BuffData_o *)this, 0);
  this = (BattleLogicFunction_o *)v10->fields.data;
  if ( !this )
    goto LABEL_363;
  BattleData__AddFreshBuffList((BattleData_o *)this, v372, 0);
  BattleActionData__addAction(v387, v385, 0);
  ((void (__fastcall *)(BattleLogicFunctionProcess_FunctionTargetCheck_o *, BattleActionData_o *, BattleActionData_BuffData_o *, __int64, const MethodInfo *))funcTarget->klass->vtable._10_AfterAddBuffProc.methodPtr)(
    funcTarget,
    v387,
    v372,
    v21,
    funcTarget->klass->vtable._10_AfterAddBuffProc.method);
  v374 = (UnityEngine_Object_o *)v10->fields.logic;
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v373);
  if ( UnityEngine_Object__op_Inequality(v374, 0, 0)
    && BattleLogicFunction__IsSituationForceTurnProgressExecutable(
         v10,
         v16,
         dataVals_k__BackingField,
         &isEnemyTurn,
         v375) )
  {
    BattleBuffData__TurnProgressingSpecifiedBuff(
      v10->fields.logic,
      (BattleBuffData_BuffData_o *)v21,
      isEnemyTurn,
      ServantData->fields.uniqueId,
      0);
  }
  if ( DataVals__GetParam(dataVals_k__BackingField, 242, 0, 0) >= 1 )
    *(_BYTE *)(v21 + 577) = 1;
  BattleLogicFunction__UpdateCondBuffValueFlagInCurrentContext(v10, v376);
  return (BattleBuffData_BuffData_o *)v21;
}


void BattleLogicFunction__functionBreakGaugeChange(
        BattleLogicFunction_o *this,
        BattleActionData_o *mainAction,
        BattleLogicFunctionProcess_FunctionUnitCheck_o *funcUnit,
        BattleServantData_o *targetSvtData,
        BattleActionData_BaseShiftGaugeData_o *shiftGauge,
        const MethodInfo *method)
{
  BattleLogicFunction_ProcListInArgs_o *procArg_k__BackingField; // x25
  struct DataVals_o *dataVals_k__BackingField; // x29
  int32_t uniqueId; // w20
  int32_t funcIndex; // w21
  bool IsCommandSideEffect; // w0
  __int64 v15; // x19
  int32_t v16; // w8
  __int64 v17; // x0
  System_String_o *v18; // x2
  System_String_o *v19; // x3
  int32_t v20; // w4
  int32_t v21; // w5
  bool v22; // w6
  bool v23; // w7
  int32_t v24; // w26
  int32_t v25; // w27
  FunctionEntity_o *funcEnt; // x28
  _BOOL8 v27; // x0
  const MethodInfo *v28; // x6
  BattleActionData_BuffData_o *FunctionObject; // x0
  BattleActionData_ShiftServant_o *v30; // x24
  SimpleHpData_o *v31; // x27
  int32_t MaxHp; // w0
  SimpleHpData_o *v33; // x25
  int32_t CurrentShiftPos; // w0
  EnemySimpleHpData_o *v35; // x25
  DataVals_o *v36; // x24
  unsigned int Value; // w0
  int v38; // w0
  int v39; // w28
  int v40; // w22
  int32_t v41; // w29
  _BOOL8 v42; // x2
  SimpleHpData_o *v43; // x26
  unsigned int v44; // w19
  unsigned int MaxShiftIconPos; // w0
  const MethodInfo *v46; // [xsp+8h] [xbp-98h]
  int v47; // [xsp+1Ch] [xbp-84h]
  BattleActionData_ShiftServant_o *v48; // [xsp+20h] [xbp-80h]
  BattleActionData_o *v49; // [xsp+28h] [xbp-78h]
  BattleActionData_o *v50; // [xsp+30h] [xbp-70h]
  BattleLogicFunction_o *v51; // [xsp+38h] [xbp-68h]

  v51 = this;
  if ( (byte_5973BD6 & 1) == 0 )
  {
    sub_2213A60(&BattleActionData_TypeInfo);
    sub_2213A60(&EnemySimpleHpData_TypeInfo);
    sub_2213A60(&System_Math_TypeInfo);
    sub_2213A60(&BattleActionData_ShiftServant_TypeInfo);
    this = (BattleLogicFunction_o *)sub_2213A60(&SimpleHpData_TypeInfo);
    byte_5973BD6 = 1;
  }
  if ( !funcUnit || !targetSvtData )
    goto LABEL_33;
  procArg_k__BackingField = funcUnit->fields._procArg_k__BackingField;
  dataVals_k__BackingField = funcUnit->fields._dataVals_k__BackingField;
  this = (BattleLogicFunction_o *)BattleServantData__isShiftServant(targetSvtData, 0);
  if ( ((unsigned __int8)this & 1) == 0 )
    goto LABEL_36;
  if ( !shiftGauge )
    goto LABEL_33;
  this = (BattleLogicFunction_o *)((__int64 (__fastcall *)(BattleActionData_BaseShiftGaugeData_o *, BattleServantData_o *, const MethodInfo *))shiftGauge->klass->vtable._8_unknown.methodPtr)(
                                    shiftGauge,
                                    targetSvtData,
                                    shiftGauge->klass->vtable._8_unknown.method);
  if ( ((unsigned __int8)this & 1) != 0 )
  {
LABEL_36:
    if ( dataVals_k__BackingField )
    {
      if ( procArg_k__BackingField )
      {
        uniqueId = targetSvtData->fields.uniqueId;
        funcIndex = dataVals_k__BackingField->fields.funcIndex;
        IsCommandSideEffect = BattleLogicFunction_ProcListInArgs__get_IsCommandSideEffect(procArg_k__BackingField, 0);
        this = (BattleLogicFunction_o *)BattleLogicFunction__getNoEffectObject(
                                          v51,
                                          uniqueId,
                                          funcIndex,
                                          dataVals_k__BackingField,
                                          IsCommandSideEffect,
                                          0,
                                          0,
                                          0,
                                          0,
                                          v46);
        if ( mainAction )
        {
          BattleActionData__addAction(mainAction, (BattleActionData_o *)this, 0);
          return;
        }
      }
    }
    goto LABEL_33;
  }
  v15 = sub_2213CCC(BattleActionData_TypeInfo);
  BattleActionData___ctor((BattleActionData_o *)v15, 0);
  if ( !v15 )
    goto LABEL_33;
  v16 = targetSvtData->fields.uniqueId;
  *(_DWORD *)(v15 + 32) = v16;
  *(_DWORD *)(v15 + 36) = v16;
  v17 = ((__int64 (__fastcall *)(BattleActionData_BaseShiftGaugeData_o *, const MethodInfo *))shiftGauge->klass->vtable._7_unknown.methodPtr)(
          shiftGauge,
          shiftGauge->klass->vtable._7_unknown.method);
  *(_QWORD *)(v15 + 72) = v17;
  sub_2213A04((MissionNaviTransitionBoardItem_o *)(v15 + 72), v17, v18, v19, v20, v21, v22, v23);
  if ( !dataVals_k__BackingField )
    goto LABEL_33;
  if ( !procArg_k__BackingField )
    goto LABEL_33;
  v24 = dataVals_k__BackingField->fields.funcIndex;
  v25 = targetSvtData->fields.uniqueId;
  funcEnt = dataVals_k__BackingField->fields.funcEnt;
  v27 = BattleLogicFunction_ProcListInArgs__get_IsCommandSideEffect(procArg_k__BackingField, 0);
  FunctionObject = BattleLogicFunction__getFunctionObject((BattleLogicFunction_o *)v27, funcEnt, v25, v24, v27, 0, v28);
  FunctionObject->fields.isUpdateShowBuffAfter = 0;
  BattleActionData__setBuffData((BattleActionData_o *)v15, FunctionObject, 0, 0, 0);
  v30 = (BattleActionData_ShiftServant_o *)sub_2213CCC(BattleActionData_ShiftServant_TypeInfo);
  BattleActionData_ShiftServant___ctor(v30, 0, 0);
  if ( !v30 )
    goto LABEL_33;
  BattleActionData_ShiftServant__setBeforeSvtData(v30, targetSvtData, 0);
  *(_BYTE *)(v15 + 400) = 1;
  ((void (__fastcall *)(BattleActionData_BaseShiftGaugeData_o *, BattleServantData_o *, const MethodInfo *))shiftGauge->klass->vtable._12_Init.methodPtr)(
    shiftGauge,
    targetSvtData,
    shiftGauge->klass->vtable._12_Init.method);
  v31 = (SimpleHpData_o *)sub_2213CCC(SimpleHpData_TypeInfo);
  SimpleHpData___ctor(v31, targetSvtData, 0);
  v49 = (BattleActionData_o *)v15;
  v50 = mainAction;
  v48 = v30;
  if ( DataVals__IsEqualsTo1(dataVals_k__BackingField, 188, 0) )
  {
    MaxHp = BattleServantData__getMaxHp(targetSvtData, 0);
    BattleServantData__setHp(targetSvtData, MaxHp, 1, 0, 0);
    v33 = (SimpleHpData_o *)sub_2213CCC(SimpleHpData_TypeInfo);
    SimpleHpData___ctor(v33, targetSvtData, 0);
    CurrentShiftPos = BattleServantData__GetCurrentShiftPos(targetSvtData, 0);
    BattleActionData_BaseShiftGaugeData__AddHpUpDataBeforeShift(shiftGauge, CurrentShiftPos, v31, v33, 0);
    v31 = v33;
  }
  v35 = (EnemySimpleHpData_o *)sub_2213CCC(EnemySimpleHpData_TypeInfo);
  EnemySimpleHpData___ctor(v35, targetSvtData, 0);
  v36 = dataVals_k__BackingField;
  Value = DataVals__GetValue(dataVals_k__BackingField, 0);
  v38 = ((__int64 (__fastcall *)(BattleActionData_BaseShiftGaugeData_o *, BattleServantData_o *, _QWORD, const MethodInfo *))shiftGauge->klass->vtable._9_unknown.methodPtr)(
          shiftGauge,
          targetSvtData,
          Value,
          shiftGauge->klass->vtable._9_unknown.method);
  v47 = v38;
  if ( v38 >= 0 )
    v39 = v38;
  else
    v39 = -v38;
  v40 = 1;
  if ( v38 < 1 )
    v41 = -1;
  else
    v41 = 1;
  while ( 1 )
  {
    if ( !*(&System_Math_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(System_Math_TypeInfo, mainAction);
    if ( v40 > v39 )
      break;
    BattleServantData__SetShiftServantChange(targetSvtData, v51->fields.data, v35, v41, 0);
    v42 = DataVals__GetParam(v36, 61, 0, 0) > 0;
    ((void (__fastcall *)(BattleActionData_BaseShiftGaugeData_o *, BattleServantData_o *, _BOOL8, const MethodInfo *))shiftGauge->klass->vtable._10_unknown.methodPtr)(
      shiftGauge,
      targetSvtData,
      v42,
      shiftGauge->klass->vtable._10_unknown.method);
    v43 = (SimpleHpData_o *)sub_2213CCC(SimpleHpData_TypeInfo);
    SimpleHpData___ctor(v43, targetSvtData, 0);
    v44 = BattleServantData__GetCurrentShiftPos(targetSvtData, 0);
    MaxShiftIconPos = BattleServantData__GetMaxShiftIconPos(targetSvtData, 0);
    ((void (__fastcall *)(BattleActionData_BaseShiftGaugeData_o *, _QWORD, _QWORD, SimpleHpData_o *, SimpleHpData_o *, const MethodInfo *))shiftGauge->klass->vtable._11_unknown.methodPtr)(
      shiftGauge,
      v44,
      MaxShiftIconPos,
      v31,
      v43,
      shiftGauge->klass->vtable._11_unknown.method);
    ++v40;
    v31 = v43;
  }
  if ( v47 )
  {
    this = (BattleLogicFunction_o *)v51->fields.logic;
    if ( !this )
      goto LABEL_33;
    BattleLogic__actEnemyPtPassiveSkill((BattleLogic_o *)this, targetSvtData->fields.uniqueId, 1, 0, 0);
  }
  BattleActionData_ShiftServant__setCheckSvtData(v48, targetSvtData, 0);
  BattleActionData__setShiftServant(v49, v48, 0);
  BattleActionData__SetShiftGauge(v49, shiftGauge, 0);
  if ( !v50 )
LABEL_33:
    sub_2213CDC(this, mainAction);
  BattleActionData__AddAfterActionData(v50, v49, 0, 0);
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
  BattleServantData_o *v15; // x25
  BattleData_o *v16; // x26
  int32_t v17; // w27
  bool isPlayerID; // w28
  bool v19; // w0
  int32_t EnemySummonId; // w0
  BattleData_o *v22; // x25
  int32_t v23; // w26
  int32_t v24; // w25
  struct BattleData_o *v25; // x8
  struct System_Int32_array *e_entryid; // x8
  BattleServantData_o *v27; // x24
  char *v28; // x8
  int32_t v29; // w23
  System_Collections_Generic_List_object__o *v30; // x26
  const MethodInfo *v31; // x3
  struct BattleData_o *v32; // x8
  const MethodInfo *v33; // x3
  struct BattleData_o *v34; // x8
  System_Collections_Generic_IEnumerable_T__o *ReActPassiveSkillArray; // x0
  _BOOL8 v36; // x0
  __int64 v37; // x1
  struct BattleLogic_o *logic; // x8
  BattleLogicSkill_o *logicSkill; // x0
  BattleActionData_o *v40; // x22
  struct BattleInfoData_o *battle_info; // x8
  int v42; // w9
  int32_t uniqueId; // w24
  bool isEffectSummon; // w25
  const MethodInfo *v45; // [xsp+8h] [xbp-A8h]
  System_Collections_Generic_List_Enumerator_object__o v46; // [xsp+18h] [xbp-98h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v47; // [xsp+30h] [xbp-80h] BYREF
  int32_t targetIndex; // [xsp+5Ch] [xbp-54h] BYREF

  if ( (byte_5973BC5 & 1) == 0 )
  {
    sub_2213A60(&BattleActionData_TypeInfo);
    sub_2213A60(&Method_System_Collections_Generic_List_Enumerator_BattleSkillInfoData__Dispose__);
    sub_2213A60(&Method_System_Collections_Generic_List_Enumerator_BattleSkillInfoData__MoveNext__);
    sub_2213A60(&Method_System_Collections_Generic_List_Enumerator_BattleSkillInfoData__get_Current__);
    sub_2213A60(&Method_System_Collections_Generic_List_BattleSkillInfoData__AddRange__);
    sub_2213A60(&Method_System_Collections_Generic_List_int__Clear__);
    sub_2213A60(&Method_System_Collections_Generic_List_BattleSkillInfoData__GetEnumerator__);
    sub_2213A60(&Method_System_Collections_Generic_List_BattleSkillInfoData___ctor__);
    sub_2213A60(&System_Collections_Generic_List_BattleSkillInfoData__TypeInfo);
    byte_5973BC5 = 1;
  }
  data = this->fields.data;
  targetIndex = 0;
  memset(&v47, 0, sizeof(v47));
  if ( !data )
    goto LABEL_44;
  data = (BattleData_o *)BattleData__getServantData(data, playerId, 0);
  targetIndex = -1;
  if ( !baseVals )
    goto LABEL_44;
  v15 = (BattleServantData_o *)data;
  data = (BattleData_o *)DataVals__GetCallServantPositionIndex(baseVals, 0);
  v16 = this->fields.data;
  if ( ((unsigned int)data & 0x80000000) != 0 )
  {
    data = (BattleData_o *)DataVals__isCheckEnemyFieldSpace(baseVals, 0);
    if ( !v16 )
      goto LABEL_44;
    if ( !BattleData__getFieldSpace(v16, playerId, &targetIndex, (unsigned __int8)data & 1, 0) )
      return BattleLogicFunction__getMissObject(
               this,
               playerId,
               funcIndex,
               baseVals,
               isCommandSideEffect,
               0,
               0,
               0,
               0,
               v45);
  }
  else
  {
    if ( !v16 )
      goto LABEL_44;
    v17 = (int)data;
    isPlayerID = BattleData__isPlayerID(this->fields.data, playerId, 0);
    v19 = DataVals__isCheckEnemyFieldSpace(baseVals, 0);
    if ( !BattleData__CheckCallServantPositionIndex(v16, v17, !isPlayerID, v19, 0) )
      return BattleLogicFunction__getMissObject(
               this,
               playerId,
               funcIndex,
               baseVals,
               isCommandSideEffect,
               0,
               0,
               0,
               0,
               v45);
    targetIndex = v17;
  }
  if ( playerId == -1 )
  {
    v22 = this->fields.data;
    data = (BattleData_o *)DataVals__GetValue(baseVals, 0);
    if ( !v22 )
      goto LABEL_44;
    EnemySummonId = BattleData__GetEnemySummonId(v22, (int32_t)data, 0);
  }
  else
  {
    data = (BattleData_o *)DataVals__GetValue(baseVals, 0);
    if ( !v15 )
      goto LABEL_44;
    EnemySummonId = BattleServantData__getSummonNpcId(v15, (int32_t)data, 0);
  }
  v23 = EnemySummonId;
  if ( EnemySummonId != -1 )
  {
    data = this->fields.data;
    if ( data )
    {
      data = (BattleData_o *)BattleData__getNextUniqueID(data, 0);
      if ( this->fields.data )
      {
        v24 = (int)data;
        data = (BattleData_o *)BattleData__getNextNextIndex(this->fields.data, 0);
        if ( this->fields.data )
        {
          data = (BattleData_o *)BattleData__createSummonEnemyServantData(
                                   this->fields.data,
                                   v24,
                                   (int32_t)data,
                                   v23,
                                   0,
                                   0,
                                   0);
          v25 = this->fields.data;
          if ( v25 )
          {
            e_entryid = v25->fields.e_entryid;
            if ( e_entryid )
            {
              if ( (unsigned int)targetIndex >= LODWORD(e_entryid->max_length) )
                sub_2213CE4(data);
              v27 = (BattleServantData_o *)data;
              if ( data )
              {
                v28 = (char *)e_entryid + 4 * targetIndex;
                v29 = *((_DWORD *)v28 + 8);
                *((_DWORD *)v28 + 8) = data->fields.m_CancellationTokenSource;
                BattleServantData__SetEntry((BattleServantData_o *)data, 0, 0, 0);
                v27->fields.flgEntryFunction = 1;
                v30 = (System_Collections_Generic_List_object__o *)sub_2213CCC(System_Collections_Generic_List_BattleSkillInfoData__TypeInfo);
                System_Collections_Generic_List_object____ctor(
                  v30,
                  (const MethodInfo_44833FC *)Method_System_Collections_Generic_List_BattleSkillInfoData___ctor__);
                v32 = this->fields.data;
                if ( v32 )
                {
                  data = (BattleData_o *)BattleLogicFunction__GetReActPassiveSkillArray(
                                           (BattleLogicFunction_o *)data,
                                           v24,
                                           v32->fields.player_datalist,
                                           v31);
                  if ( v30 )
                  {
                    System_Collections_Generic_List_object___AddRange(
                      v30,
                      (System_Collections_Generic_IEnumerable_T__o *)data,
                      (const MethodInfo_4483E74 *)Method_System_Collections_Generic_List_BattleSkillInfoData__AddRange__);
                    v34 = this->fields.data;
                    if ( v34 )
                    {
                      ReActPassiveSkillArray = (System_Collections_Generic_IEnumerable_T__o *)BattleLogicFunction__GetReActPassiveSkillArray(
                                                                                                (BattleLogicFunction_o *)data,
                                                                                                v24,
                                                                                                v34->fields.enemy_datalist,
                                                                                                v33);
                      System_Collections_Generic_List_object___AddRange(
                        v30,
                        ReActPassiveSkillArray,
                        (const MethodInfo_4483E74 *)Method_System_Collections_Generic_List_BattleSkillInfoData__AddRange__);
                      if ( !BasicHelper__IsNullOrEmpty((System_Collections_ICollection_o *)v30, 0) )
                      {
                        System_Collections_Generic_List_object___GetEnumerator(
                          (System_Collections_Generic_List_Enumerator_T__o *)&v46,
                          v30,
                          (const MethodInfo_448473C *)Method_System_Collections_Generic_List_BattleSkillInfoData__GetEnumerator__);
                        v47 = v46;
                        v46.fields._list = 0;
                        *(_QWORD *)&v46.fields._index = &v47;
                        while ( 1 )
                        {
                          v36 = System_Collections_Generic_List_Enumerator_object___MoveNext(
                                  &v47,
                                  (const MethodInfo_40FBAD8 *)Method_System_Collections_Generic_List_Enumerator_BattleSkillInfoData__MoveNext__);
                          if ( !v36 )
                            break;
                          logic = this->fields.logic;
                          if ( !logic )
                            sub_2213CDC(v36, v37);
                          logicSkill = logic->fields.logicSkill;
                          if ( !logicSkill )
                            sub_2213CDC(0, v37);
                          BattleLogicSkill__actPassiveSkill(
                            logicSkill,
                            (BattleSkillInfoData_o *)v47.fields._current,
                            0,
                            0,
                            0,
                            v24,
                            0);
                        }
                        System_Collections_Generic_List_Enumerator_object___Dispose(
                          &v47,
                          (const MethodInfo_40FBAD4 *)Method_System_Collections_Generic_List_Enumerator_BattleSkillInfoData__Dispose__);
                        data = (BattleData_o *)BattleServantData__get_BuffData(v27, 0);
                        if ( !data )
                          goto LABEL_44;
                        battle_info = data->fields.battle_info;
                        if ( !battle_info )
                          goto LABEL_44;
                        v42 = HIDWORD(battle_info->fields.appVer) + 1;
                        LODWORD(battle_info->fields.appVer) = 0;
                        HIDWORD(battle_info->fields.appVer) = v42;
                      }
                      BattleServantData__SetRemainActionCount(v27, 1, 0);
                      data = (BattleData_o *)this->fields.logic;
                      if ( data )
                      {
                        BattleLogic__addEnemyActPriorityList((BattleLogic_o *)data, v27, 0);
                        v40 = (BattleActionData_o *)sub_2213CCC(BattleActionData_TypeInfo);
                        BattleActionData___ctor(v40, 0);
                        uniqueId = v27->fields.uniqueId;
                        isEffectSummon = DataVals__isEffectSummon(baseVals, 0);
                        data = (BattleData_o *)DataVals__GetCallSvtEffectId(baseVals, 0);
                        if ( v40 )
                        {
                          BattleActionData__setSummonServant(
                            v40,
                            uniqueId,
                            v29,
                            funcIndex,
                            isEffectSummon,
                            (int32_t)data,
                            0);
                          if ( procArg )
                          {
                            procArg->fields.updateField = 1;
                            return v40;
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
LABEL_44:
    sub_2213CDC(data, *(_QWORD *)&playerId);
  }
  return BattleLogicFunction__getMissObject(this, playerId, funcIndex, baseVals, isCommandSideEffect, 0, 0, 0, 0, v45);
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

  if ( (byte_5973BC8 & 1) == 0 )
  {
    sub_2213A60(&BattleActionData_TypeInfo);
    byte_5973BC8 = 1;
  }
  v8 = (BattleActionData_o *)sub_2213CCC(BattleActionData_TypeInfo);
  BattleActionData___ctor(v8, 0);
  if ( !v8 || (v8->fields.actorId = actionId, !baseVals) )
    sub_2213CDC(v9, v10);
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

  if ( (byte_5973BC7 & 1) == 0 )
  {
    sub_2213A60(&BattleActionData_TypeInfo);
    sub_2213A60(&BattleActionData_ShiftServant_TypeInfo);
    byte_5973BC7 = 1;
  }
  data = this->fields.data;
  if ( !data )
    goto LABEL_9;
  ServantData = BattleData__getServantData(data, targetId, 0);
  v13 = (BattleActionData_o *)sub_2213CCC(BattleActionData_TypeInfo);
  BattleActionData___ctor(v13, 0);
  if ( !v13 )
    goto LABEL_9;
  v13->fields.actorId = actionId;
  v14 = (BattleActionData_ShiftServant_o *)sub_2213CCC(BattleActionData_ShiftServant_TypeInfo);
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
    sub_2213CDC(data, *(_QWORD *)&actionId);
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
  BattleServantData_o *v19; // x25
  BattleLogic_o *logic; // x24
  BattleActionData_DamageData_o *v21; // x21

  if ( (byte_5973BB2 & 1) == 0 )
  {
    sub_2213A60(&BattleActionData_TypeInfo);
    byte_5973BB2 = 1;
  }
  v15 = (BattleActionData_o *)sub_2213CCC(BattleActionData_TypeInfo);
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
    || (v19 = (BattleServantData_o *)data,
        logic = this->fields.logic,
        data = (BattleData_o *)DataVals__GetValue(baseVals, 0),
        !logic)
    || (data = (BattleData_o *)BattleLogic__getFunctionDamagelist(
                                 logic,
                                 v18,
                                 v19,
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
    sub_2213CDC(data, v16);
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
  BattleActionData_c *v15; // x0
  BattleActionData_o *v16; // x24
  __int64 v17; // x1
  BattleData_o *data; // x0
  BattleServantData_o *v19; // x27
  struct BattleData_o *v20; // x8
  int32_t Value; // w0
  int32_t nexttpturn; // w28
  _BOOL8 TDTurn; // x0
  const MethodInfo *v24; // x6
  int32_t v25; // w8
  const MethodInfo *v27; // [xsp+8h] [xbp-68h]

  if ( (byte_5973BBB & 1) == 0 )
  {
    sub_2213A60(&BattleActionData_TypeInfo);
    byte_5973BBB = 1;
  }
  v15 = BattleActionData_TypeInfo;
  *absorptionCount = 0;
  v16 = (BattleActionData_o *)sub_2213CCC(v15);
  BattleActionData___ctor(v16, 0);
  data = this->fields.data;
  if ( !data )
    goto LABEL_21;
  data = (BattleData_o *)BattleData__getServantData(data, targetId, 0);
  if ( !data )
    goto LABEL_21;
  v19 = (BattleServantData_o *)data;
  if ( !BYTE3(data->fields.doNotSelectCommandSvtIdList) )
    return 0;
  if ( !BattleServantData__isLogicResultAlive((BattleServantData_o *)data, 0) && !BattleServantData__isGuts(v19, 0) )
  {
    data = (BattleData_o *)BattleServantData__isShiftableServant(v19, 0);
    if ( ((unsigned __int8)data & 1) == 0 )
    {
      v20 = this->fields.data;
      if ( !v20 )
        goto LABEL_21;
      data = (BattleData_o *)v20->fields.battleEvent;
      if ( !data )
        goto LABEL_21;
      if ( (((__int64 (__fastcall *)(BattleData_o *, BattleServantData_o *, _QWORD))data->klass[1]._2.unity_user_data)(
              data,
              v19,
              *(_QWORD *)&data->klass[1]._2.initializationExceptionGCHandle)
          & 1) == 0 )
        return 0;
    }
  }
  if ( !BattleServantData__hasTreasureDvc(v19, 0) )
    return BattleLogicFunction__getNoEffectObject(
             this,
             targetId,
             funcIndex,
             baseVals,
             isCommandSideEffect,
             0,
             0,
             0,
             0,
             v27);
  data = (BattleData_o *)BattleServantData__isTDSeraled(v19, 0);
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
             0,
             v27);
  if ( !baseVals )
    goto LABEL_21;
  Value = DataVals__GetValue(baseVals, 0);
  nexttpturn = v19->fields.nexttpturn;
  TDTurn = BattleServantData__updownNextTDTurn(v19, Value, 0);
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
             0,
             v27);
  data = (BattleData_o *)BattleLogicFunction__getFunctionObject(
                           (BattleLogicFunction_o *)TDTurn,
                           funcEnt,
                           v19->fields.uniqueId,
                           funcIndex,
                           isCommandSideEffect,
                           0,
                           v24);
  v25 = v19->fields.nexttpturn;
  LODWORD(data->fields.data) = 5;
  *absorptionCount = v25 - nexttpturn;
  if ( !v16 )
LABEL_21:
    sub_2213CDC(data, v17);
  BattleActionData__setBuffData(v16, (BattleActionData_BuffData_o *)data, baseVals, 0, 0);
  return v16;
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
  __int64 v30; // x9
  const MethodInfo *v31; // [xsp+10h] [xbp-80h]
  FunctionEntity_o *v32; // [xsp+20h] [xbp-70h]
  int32_t digit; // [xsp+2Ch] [xbp-64h] BYREF

  LODWORD(v9) = overwriteHeal;
  if ( (byte_5973BB5 & 1) == 0 )
  {
    sub_2213A60(&BattleActionData_TypeInfo);
    sub_2213A60(&BattleBuffData_CheckIndividualitiesData_TypeInfo);
    byte_5973BB5 = 1;
  }
  digit = 0;
  v17 = (BattleActionData_o *)sub_2213CCC(BattleActionData_TypeInfo);
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
  v24 = (BattleBuffData_CheckIndividualitiesData_o *)sub_2213CCC(BattleBuffData_CheckIndividualitiesData_TypeInfo);
  BattleBuffData_CheckIndividualitiesData___ctor_52826232(v24, v21, 0, 0, 0, 0, 0, 1, 0);
  if ( !buffData )
LABEL_26:
    sub_2213CDC(data, v18);
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
  BattleLogicFunction_ProcListInArgs_o *v7; // x19
  struct BattleLogicFunctionProcess_FunctionUnitCheck_o *funcUnit_k__BackingField; // x8
  System_Collections_Generic_List_T__o *v9; // x25
  struct System_Object_array *items; // x8
  _QWORD *v11; // x9
  __int64 size; // x10
  __int64 v13; // x10
  __int64 v14; // x10
  __int64 v15; // x10
  int logic; // w8
  unsigned int v17; // w9
  DataVals_o *v18; // x27
  const MethodInfo *v19; // x4
  BattleLogicFunction_c *klass; // x8
  BattleLogicFunction_o *v21; // x22
  __int64 v22; // x9
  int32_t *p_offset; // x10
  __int64 v24; // x0
  __int64 Value; // x0
  __int64 v26; // x1
  __int64 v27; // x22
  __int64 v28; // x8
  __int64 v29; // x9
  int *v30; // x10
  __int64 v31; // x0
  __int64 v32; // x0
  __int64 v33; // x22
  __int64 v34; // x8
  __int64 v35; // x9
  int *v36; // x10
  __int64 v37; // x0
  __int64 v38; // x0
  __int64 v39; // x1
  __int64 v40; // x20
  BattleData_o *data; // x0
  int32_t v42; // w29
  BattleServantData_o *ServantData; // x0
  __int64 v44; // x1
  BattleServantData_o *v45; // x22
  const MethodInfo *v46; // x3
  int v47; // w24
  int32_t v48; // w8
  int32_t v49; // w25
  bool v50; // w28
  int32_t actorId; // w20
  FunctionEntity_o *funcEnt; // x23
  int32_t funcIndex; // w26
  bool IsCommandSideEffect; // w0
  BattleActionData_o *v55; // x20
  __int64 v56; // x1
  int v57; // w23
  int32_t v58; // w20
  bool v59; // w0
  BattleActionData_o *NoEffectObject; // x1
  __int64 *v61; // x22
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
  const MethodInfo *isRandomDamage; // [xsp+8h] [xbp-D8h]
  const MethodInfo *v74; // [xsp+18h] [xbp-C8h]
  BattleLogicFunctionProcess_FunctionTargetCheck_o *v75; // [xsp+20h] [xbp-C0h]
  DataVals_o *dataVals_k__BackingField; // [xsp+28h] [xbp-B8h]
  BattleLogicFunction_o *v77; // [xsp+30h] [xbp-B0h]
  unsigned int v78; // [xsp+3Ch] [xbp-A4h]
  int32_t overwriteHeal; // [xsp+40h] [xbp-A0h]
  int32_t v80; // [xsp+44h] [xbp-9Ch]
  BattleActionData_o *v81; // [xsp+48h] [xbp-98h]
  bool v82; // [xsp+54h] [xbp-8Ch]
  BattleLogicFunction_o *v83; // [xsp+58h] [xbp-88h]
  System_Enum_o v84; // [xsp+60h] [xbp-80h] BYREF
  int32_t funcType; // [xsp+70h] [xbp-70h]
  __int64 v86; // [xsp+78h] [xbp-68h] BYREF

  v7 = procArg;
  v83 = this;
  if ( (byte_5973BD1 & 1) == 0 )
  {
    sub_2213A60(&BattleActionData_TypeInfo);
    sub_2213A60(&System_IDisposable_TypeInfo);
    sub_2213A60(&System_Collections_Generic_IEnumerable_BattleLogicFunctionProcess_FunctionTargetCheck__TypeInfo);
    sub_2213A60(&System_Collections_Generic_IEnumerator_BattleLogicFunctionProcess_FunctionTargetCheck__TypeInfo);
    sub_2213A60(&System_Collections_IEnumerator_TypeInfo);
    sub_2213A60(&Method_System_Collections_Generic_List_FuncList_TYPE__Add__);
    sub_2213A60(&Method_System_Collections_Generic_List_FuncList_TYPE___ctor__);
    sub_2213A60(&System_Collections_Generic_List_FuncList_TYPE__TypeInfo);
    sub_2213A60(&FuncList_TYPE_TypeInfo);
    this = (BattleLogicFunction_o *)sub_2213A60(&StringLiteral_16977/*"_SAFE"*/);
    byte_5973BD1 = 1;
  }
  v86 = 0;
  if ( !funcTarget )
    goto LABEL_96;
  funcUnit_k__BackingField = funcTarget->fields._funcUnit_k__BackingField;
  v75 = funcTarget;
  if ( !funcUnit_k__BackingField )
    goto LABEL_96;
  dataVals_k__BackingField = funcUnit_k__BackingField->fields._dataVals_k__BackingField;
  v81 = (BattleActionData_o *)sub_2213CCC(BattleActionData_TypeInfo);
  BattleActionData___ctor(v81, 0);
  v9 = (System_Collections_Generic_List_T__o *)sub_2213CCC(System_Collections_Generic_List_FuncList_TYPE__TypeInfo);
  System_Collections_Generic_List_Int32Enum____ctor(
    v9,
    (const MethodInfo_44691F8 *)Method_System_Collections_Generic_List_FuncList_TYPE___ctor__);
  if ( !v9 )
    goto LABEL_96;
  items = v9->fields._items;
  v11 = Method_System_Collections_Generic_List_FuncList_TYPE__Add__;
  ++v9->fields._version;
  if ( !items )
    goto LABEL_96;
  size = v9->fields._size;
  if ( (unsigned int)size >= LODWORD(items->max_length) )
  {
    System_Collections_Generic_List_Int32Enum___AddWithResize(
      v9,
      12,
      *(const MethodInfo_4469A88 **)(*(_QWORD *)(v11[4] + 192LL) + 112LL));
    items = v9->fields._items;
    v11 = Method_System_Collections_Generic_List_FuncList_TYPE__Add__;
    ++v9->fields._version;
    if ( !items )
      goto LABEL_96;
  }
  else
  {
    v9->fields._size = size + 1;
    *((_DWORD *)items->m_Items + size) = 12;
    ++v9->fields._version;
  }
  v13 = v9->fields._size;
  if ( (unsigned int)v13 >= LODWORD(items->max_length) )
  {
    System_Collections_Generic_List_Int32Enum___AddWithResize(
      v9,
      25,
      *(const MethodInfo_4469A88 **)(*(_QWORD *)(v11[4] + 192LL) + 112LL));
    items = v9->fields._items;
    v11 = Method_System_Collections_Generic_List_FuncList_TYPE__Add__;
    ++v9->fields._version;
    if ( !items )
      goto LABEL_96;
  }
  else
  {
    v9->fields._size = v13 + 1;
    *((_DWORD *)items->m_Items + v13) = 25;
    ++v9->fields._version;
  }
  v14 = v9->fields._size;
  if ( (unsigned int)v14 >= LODWORD(items->max_length) )
  {
    System_Collections_Generic_List_Int32Enum___AddWithResize(
      v9,
      50,
      *(const MethodInfo_4469A88 **)(*(_QWORD *)(v11[4] + 192LL) + 112LL));
    items = v9->fields._items;
    v11 = Method_System_Collections_Generic_List_FuncList_TYPE__Add__;
    ++v9->fields._version;
    if ( !items )
      goto LABEL_96;
  }
  else
  {
    v9->fields._size = v14 + 1;
    *((_DWORD *)items->m_Items + v14) = 50;
    ++v9->fields._version;
  }
  v15 = v9->fields._size;
  if ( (unsigned int)v15 >= LODWORD(items->max_length) )
  {
    System_Collections_Generic_List_Int32Enum___AddWithResize(
      v9,
      51,
      *(const MethodInfo_4469A88 **)(*(_QWORD *)(v11[4] + 192LL) + 112LL));
  }
  else
  {
    v9->fields._size = v15 + 1;
    *((_DWORD *)items->m_Items + v15) = 51;
  }
  this = (BattleLogicFunction_o *)dataVals_k__BackingField;
  if ( !dataVals_k__BackingField )
    goto LABEL_96;
  this = (BattleLogicFunction_o *)DataVals__GetDependDataValsArray(
                                    dataVals_k__BackingField,
                                    (System_Collections_Generic_List_FuncList_TYPE__o *)v9,
                                    1,
                                    0);
  if ( !this )
    goto LABEL_96;
  logic = (int)this->fields.logic;
  if ( logic < 1 )
  {
    overwriteHeal = 0;
    goto LABEL_92;
  }
  v17 = 0;
  overwriteHeal = 0;
  v77 = this;
  do
  {
    if ( v17 >= logic )
      sub_2213CE4(this);
    v18 = (DataVals_o *)*((_QWORD *)&this->fields.logictarget + (int)v17);
    if ( !v18 )
      goto LABEL_96;
    v78 = v17;
    funcType = v18->fields.funcType;
    v84.klass = (System_Enum_c *)FuncList_TYPE_TypeInfo;
    v84.monitor = (void *)-1LL;
    this = (BattleLogicFunction_o *)System_Enum__ToString(&v84, 0);
    if ( !this )
      goto LABEL_96;
    v82 = System_String__Contains((System_String_o *)this, (System_String_o *)StringLiteral_16977/*"_SAFE"*/, 0);
    this = (BattleLogicFunction_o *)BattleLogicFunction__GetDependFuncTargets(v83, v7, mainAction, v18, v19);
    if ( !this )
      goto LABEL_96;
    klass = this->klass;
    v21 = this;
    v22 = *(unsigned __int16 *)&this->klass->_2.rank;
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
      v24 = sub_224BC3C(
              this,
              System_Collections_Generic_IEnumerable_BattleLogicFunctionProcess_FunctionTargetCheck__TypeInfo,
              0);
    }
    Value = (*(__int64 (__fastcall **)(BattleLogicFunction_o *, _QWORD))v24)(v21, *(_QWORD *)(v24 + 8));
    v86 = Value;
    v84.klass = 0;
    v84.monitor = &v86;
    if ( !Value )
LABEL_89:
      sub_2213CDC(Value, v26);
    v27 = Value;
    v80 = overwriteHeal;
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
            goto LABEL_39;
        }
        v31 = v28 + 16LL * *v30 + 312;
      }
      else
      {
LABEL_39:
        v31 = sub_224BC3C(v27, System_Collections_IEnumerator_TypeInfo, 0);
      }
      v32 = (*(__int64 (__fastcall **)(__int64, _QWORD))v31)(v27, *(_QWORD *)(v31 + 8));
      if ( (v32 & 1) == 0 )
        break;
      v33 = v86;
      if ( !v86 )
        sub_2213CDC(v32, procArg);
      v34 = *(_QWORD *)v86;
      v35 = *(unsigned __int16 *)(*(_QWORD *)v86 + 302LL);
      if ( *(_WORD *)(*(_QWORD *)v86 + 302LL) )
      {
        v36 = (int *)(*(_QWORD *)(v34 + 176) + 8LL);
        while ( *((System_Collections_Generic_IEnumerator_BattleLogicFunctionProcess_FunctionTargetCheck__c **)v36 - 1) != System_Collections_Generic_IEnumerator_BattleLogicFunctionProcess_FunctionTargetCheck__TypeInfo )
        {
          --v35;
          v36 += 4;
          if ( !v35 )
            goto LABEL_47;
        }
        v37 = v34 + 16LL * *v36 + 312;
      }
      else
      {
LABEL_47:
        v37 = sub_224BC3C(
                v86,
                System_Collections_Generic_IEnumerator_BattleLogicFunctionProcess_FunctionTargetCheck__TypeInfo,
                0);
      }
      v38 = (*(__int64 (__fastcall **)(__int64, _QWORD))v37)(v33, *(_QWORD *)(v37 + 8));
      v40 = v38;
      if ( !v38 )
        sub_2213CDC(0, v39);
      Value = (*(__int64 (__fastcall **)(__int64, BattleActionData_o *, _QWORD))(*(_QWORD *)v38 + 408LL))(
                v38,
                mainAction,
                *(_QWORD *)(*(_QWORD *)v38 + 416LL));
      if ( (Value & 1) == 0 )
        goto LABEL_66;
      data = v83->fields.data;
      if ( !data )
        sub_2213CDC(0, v26);
      v42 = *(_DWORD *)(v40 + 32);
      ServantData = BattleData__getServantData(data, v42, 0);
      v45 = ServantData;
      if ( !ServantData )
        sub_2213CDC(0, v44);
      Value = ((__int64 (__fastcall *)(BattleServantData_o *, const MethodInfo *))ServantData->klass->vtable._13_get_resultHp.methodPtr)(
                ServantData,
                ServantData->klass->vtable._13_get_resultHp.method);
      v47 = Value;
      if ( (int)Value < 1 )
        goto LABEL_66;
      v48 = v18->fields.funcType;
      if ( v48 == 12 || v48 == 25 )
      {
        Value = DataVals__GetValue(v18, 0);
        v49 = Value;
LABEL_60:
        v50 = 1;
        goto LABEL_61;
      }
      if ( (v48 & 0xFFFFFFFE) != 0x32 )
      {
        v49 = -1;
        goto LABEL_60;
      }
      Value = BattleLogicFunction__getHpPerValue((BattleLogicFunction_o *)Value, v18, v45, v46);
      v49 = Value;
      v50 = 0;
LABEL_61:
      if ( !mainAction )
        sub_2213CDC(Value, v26);
      if ( !v7 )
        sub_2213CDC(Value, v26);
      actorId = mainAction->fields.actorId;
      funcEnt = v18->fields.funcEnt;
      funcIndex = v18->fields.funcIndex;
      IsCommandSideEffect = BattleLogicFunction_ProcListInArgs__get_IsCommandSideEffect(v7, 0);
      v55 = BattleLogicFunction__functionlossHp(
              v83,
              actorId,
              v42,
              funcEnt,
              v18,
              funcIndex,
              v82,
              IsCommandSideEffect,
              v49,
              v50,
              0,
              v74);
      v57 = v47
          - ((__int64 (__fastcall *)(BattleServantData_o *, const MethodInfo *))v45->klass->vtable._13_get_resultHp.methodPtr)(
              v45,
              v45->klass->vtable._13_get_resultHp.method);
      if ( v57 >= 1 )
      {
        if ( !v81 )
          sub_2213CDC(0, v56);
        BattleActionData__addAction(v81, v55, 0);
        v27 = v86;
        v80 += v57;
        if ( !v86 )
          goto LABEL_89;
      }
      else
      {
        v58 = v18->fields.funcIndex;
        v59 = BattleLogicFunction_ProcListInArgs__get_IsCommandSideEffect(v7, 0);
        NoEffectObject = BattleLogicFunction__getNoEffectObject(v83, v42, v58, v18, v59, 0, 0, 0, 0, isRandomDamage);
        if ( !v81 )
          sub_2213CDC(0, NoEffectObject);
        BattleActionData__addAction(v81, NoEffectObject, 0);
LABEL_66:
        v27 = v86;
        if ( !v86 )
          goto LABEL_89;
      }
    }
    overwriteHeal = v80;
    v61 = *(__int64 **)v84.monitor;
    if ( *(_QWORD *)v84.monitor )
    {
      v62 = *v61;
      v63 = *(unsigned __int16 *)(*v61 + 302);
      if ( *(_WORD *)(*v61 + 302) )
      {
        v64 = (int *)(*(_QWORD *)(v62 + 176) + 8LL);
        while ( *((System_IDisposable_c **)v64 - 1) != System_IDisposable_TypeInfo )
        {
          --v63;
          v64 += 4;
          if ( !v63 )
            goto LABEL_76;
        }
        v65 = v62 + 16LL * *v64 + 312;
      }
      else
      {
LABEL_76:
        v65 = sub_224BC3C(*(_QWORD *)v84.monitor, System_IDisposable_TypeInfo, 0);
      }
      (*(void (__fastcall **)(__int64 *, _QWORD))v65)(v61, *(_QWORD *)(v65 + 8));
    }
    if ( v84.klass )
      sub_2213CD4(v84.klass);
    this = v77;
    v17 = v78 + 1;
    logic = (int)v77->fields.logic;
  }
  while ( (int)(v78 + 1) < logic );
LABEL_92:
  if ( !mainAction
    || !v7
    || (v66 = dataVals_k__BackingField->fields.funcIndex,
        v67 = dataVals_k__BackingField->fields.funcEnt,
        v68 = mainAction->fields.actorId,
        targetId_k__BackingField = v75->fields._targetId_k__BackingField,
        v70 = BattleLogicFunction_ProcListInArgs__get_IsCommandSideEffect(v7, 0),
        procArg = (BattleLogicFunction_ProcListInArgs_o *)BattleLogicFunction__functionGainHp(
                                                            v83,
                                                            v68,
                                                            targetId_k__BackingField,
                                                            v67,
                                                            dataVals_k__BackingField,
                                                            v66,
                                                            v70,
                                                            overwriteHeal,
                                                            overwriteLossHp),
        (this = (BattleLogicFunction_o *)v81) == 0) )
  {
LABEL_96:
    sub_2213CDC(this, procArg);
  }
  BattleActionData__addAction(v81, (BattleActionData_o *)procArg, 0);
  return v81;
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
  __int64 v23; // x8
  unsigned __int64 v24; // x9
  unsigned __int64 v25; // x8
  int32_t v26; // w3
  BattleBuffData_o *buffData; // x29
  BattleBuffData_CheckIndividualitiesData_o *v28; // x20
  struct BattleData_o *v29; // x8
  int32_t ActualRecoveryHealPoint; // w0
  float UpDownGiveHeal; // s0
  int32_t UpDownHeal; // w0
  __int64 v34; // x27
  unsigned __int64 v35; // x8
  const MethodInfo *v36; // [xsp+10h] [xbp-80h]
  FunctionEntity_o *v37; // [xsp+20h] [xbp-70h]
  int32_t digit; // [xsp+2Ch] [xbp-64h] BYREF

  if ( (byte_5973BB6 & 1) == 0 )
  {
    sub_2213A60(&BattleActionData_TypeInfo);
    sub_2213A60(&BattleBuffData_CheckIndividualitiesData_TypeInfo);
    byte_5973BB6 = 1;
  }
  digit = 0;
  v15 = (BattleActionData_o *)sub_2213CCC(BattleActionData_TypeInfo);
  BattleActionData___ctor(v15, 0);
  data = this->fields.data;
  if ( !data )
    goto LABEL_26;
  data = (BattleData_o *)BattleData__getServantData(data, playerId, 0);
  if ( !this->fields.data )
    goto LABEL_26;
  v18 = (BattleServantData_o *)data;
  data = (BattleData_o *)BattleData__getServantData(this->fields.data, targetId, 0);
  if ( !baseVals )
    goto LABEL_26;
  v19 = (BattleServantData_o *)data;
  baseVals->fields.isShowForcedEffect = 0;
  Value = DataVals__GetValue(baseVals, 0);
  data = (BattleData_o *)DataVals__isUnaffected(baseVals, 0);
  if ( ((unsigned __int8)data & 1) == 0 )
  {
    if ( v19 )
    {
      if ( ((int (__fastcall *)(BattleServantData_o *, const MethodInfo *))v19->klass->vtable._13_get_resultHp.methodPtr)(
             v19,
             v19->klass->vtable._13_get_resultHp.method) <= 0 )
      {
        data = (BattleData_o *)BattleServantData__isShiftableServant(v19, 0);
        if ( ((unsigned __int8)data & 1) != 0 )
          goto LABEL_20;
        v29 = this->fields.data;
        if ( v29 )
        {
          data = (BattleData_o *)v29->fields.battleEvent;
          if ( data )
          {
            data = (BattleData_o *)((__int64 (__fastcall *)(BattleData_o *, BattleServantData_o *, _QWORD))data->klass[1]._2.unity_user_data)(
                                     data,
                                     v19,
                                     *(_QWORD *)&data->klass[1]._2.initializationExceptionGCHandle);
            if ( ((unsigned __int8)data & 1) == 0 )
            {
              data = (BattleData_o *)BattleServantData__isGuts(v19, 0);
              v26 = 0;
              v22 = (unsigned __int8)data ^ 1;
              goto LABEL_21;
            }
            goto LABEL_20;
          }
        }
      }
      else
      {
        data = (BattleData_o *)BattleServantData__isShiftReady(v19, 0);
        if ( ((unsigned __int8)data & 1) != 0 )
          goto LABEL_20;
        v37 = funcEnt;
        buffData = v19->fields.buffData;
        v28 = (BattleBuffData_CheckIndividualitiesData_o *)sub_2213CCC(BattleBuffData_CheckIndividualitiesData_TypeInfo);
        BattleBuffData_CheckIndividualitiesData___ctor_52826232(v28, v19, 0, 0, 0, 0, 0, 1, 0);
        if ( buffData )
        {
          if ( !BattleBuffData__isTurnBuff(buffData, 42, v28, 1, 0) )
          {
            if ( v18 )
            {
              UpDownGiveHeal = BattleServantData__getUpDownGiveHeal(v18, v19, 0);
              Value = BattleUtility__FloorToInt(UpDownGiveHeal * (float)Value, 0);
            }
            funcEnt = v37;
            digit = 1;
            UpDownHeal = BattleServantData__getUpDownHeal(v19, &digit, 0);
            v34 = UpDownHeal * (__int64)Value / digit;
            data = (BattleData_o *)BattleServantData__getMaxHp(v19, 0);
            v22 = 0;
            baseVals->fields.isShowForcedEffect = 1;
            v35 = (unsigned __int128)((int)v34 * (__int64)(int)data * (__int128)0x20C49BA5E353F7CFLL) >> 64;
            v24 = v35 >> 63;
            v25 = v35 >> 7;
            goto LABEL_9;
          }
          data = (BattleData_o *)DataVals__SetInvalidCauseByAnyBuff(baseVals, targetId, 0);
          funcEnt = v37;
LABEL_20:
          v26 = 0;
          v22 = 0;
          goto LABEL_21;
        }
      }
    }
LABEL_26:
    sub_2213CDC(data, v16);
  }
  if ( !v19 )
    goto LABEL_26;
  data = (BattleData_o *)BattleServantData__getMaxHp(v19, 0);
  v22 = 0;
  v23 = 274877907LL * (int)data * Value;
  v24 = (unsigned __int64)v23 >> 63;
  v25 = v23 >> 38;
LABEL_9:
  v26 = v25 + v24;
LABEL_21:
  ActualRecoveryHealPoint = BattleLogicFunction__GetActualRecoveryHealPoint(
                              (BattleLogicFunction_o *)data,
                              baseVals,
                              v19,
                              v26,
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
    v36);
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
  BattleActionData_o *v14; // x22
  int32_t v15; // w21
  int32_t funcIndex; // w23
  int32_t uniqueId; // w24
  FunctionEntity_o *funcEnt; // x25
  _BOOL8 IsCommandSideEffect; // x0
  const MethodInfo *v20; // x6
  BattleActionData_BuffData_o *FunctionObject; // x20
  int32_t v23; // w22
  int32_t v24; // w23
  bool v25; // w0
  const MethodInfo *v26; // [xsp+8h] [xbp-48h]

  if ( (byte_5973BD0 & 1) == 0 )
  {
    sub_2213A60(&BattleActionData_TypeInfo);
    byte_5973BD0 = 1;
  }
  data = this->fields.data;
  if ( !data )
    goto LABEL_17;
  data = (BattleData_o *)BattleData__getServantData(data, targetId, 0);
  if ( !data )
    goto LABEL_17;
  v13 = (BattleServantData_o *)data;
  v14 = 0;
  if ( !BattleServantData__checkPlayer((BattleServantData_o *)data, 0) )
    return v14;
  v14 = (BattleActionData_o *)sub_2213CCC(BattleActionData_TypeInfo);
  BattleActionData___ctor(v14, 0);
  if ( !baseVals )
LABEL_17:
    sub_2213CDC(data, procArg);
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
        v15 = (int)data;
        funcIndex = baseVals->fields.funcIndex;
        uniqueId = v13->fields.uniqueId;
        funcEnt = baseVals->fields.funcEnt;
        IsCommandSideEffect = BattleLogicFunction_ProcListInArgs__get_IsCommandSideEffect(procArg, 0);
        FunctionObject = BattleLogicFunction__getFunctionObject(
                           (BattleLogicFunction_o *)IsCommandSideEffect,
                           funcEnt,
                           uniqueId,
                           funcIndex,
                           IsCommandSideEffect,
                           0,
                           v20);
        FunctionObject->fields.procType = 3;
        BattleActionData_BuffData__setSaveNp(FunctionObject, v15, 0);
        if ( v14 )
        {
          BattleActionData__setBuffData(v14, FunctionObject, baseVals, 0, 0);
          return v14;
        }
      }
      goto LABEL_17;
    }
  }
  if ( !procArg )
    goto LABEL_17;
  v23 = baseVals->fields.funcIndex;
  v24 = v13->fields.uniqueId;
  v25 = BattleLogicFunction_ProcListInArgs__get_IsCommandSideEffect(procArg, 0);
  return BattleLogicFunction__getNoEffectObject(this, v24, v23, baseVals, v25, 0, 0, 0, 0, v26);
}


BattleActionData_o *BattleLogicFunction__functionGainNpFromTargets(
        BattleLogicFunction_o *this,
        BattleLogicFunction_ProcListInArgs_o *procArg,
        BattleActionData_o *mainAction,
        BattleLogicFunctionProcess_FunctionTargetCheck_o *funcTarget,
        const MethodInfo *method)
{
  BattleLogicFunction_o *v8; // x21
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
  if ( (byte_5973BCE & 1) == 0 )
  {
    sub_2213A60(&BattleActionData_TypeInfo);
    sub_2213A60(&NpGaugeAbsorbResult_TypeInfo);
    this = (BattleLogicFunction_o *)sub_2213A60(&NpTurnToPointConvert_TypeInfo);
    byte_5973BCE = 1;
  }
  if ( !funcTarget )
    goto LABEL_12;
  funcUnit_k__BackingField = funcTarget->fields._funcUnit_k__BackingField;
  if ( !funcUnit_k__BackingField )
    goto LABEL_12;
  dataVals_k__BackingField = funcUnit_k__BackingField->fields._dataVals_k__BackingField;
  v11 = (BattleActionData_o *)sub_2213CCC(BattleActionData_TypeInfo);
  BattleActionData___ctor(v11, 0);
  v12 = (NpTurnToPointConvert_o *)sub_2213CCC(NpTurnToPointConvert_TypeInfo);
  NpTurnToPointConvert___ctor(v12, 0);
  v13 = (NpGaugeAbsorbResult_o *)sub_2213CCC(NpGaugeAbsorbResult_TypeInfo);
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
    sub_2213CDC(this, procArg);
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
  BattleActionData_o *v17; // x22
  __int64 v18; // x1
  BattleData_o *data; // x0
  BattleServantData_o *v20; // x27
  int32_t Value; // w0
  int32_t v23; // w29
  _BOOL8 isGainNp; // x0
  const MethodInfo *v25; // x6
  const MethodInfo *v26; // [xsp+8h] [xbp-68h]

  if ( (byte_5973BBA & 1) == 0 )
  {
    sub_2213A60(&BattleActionData_TypeInfo);
    byte_5973BBA = 1;
  }
  v17 = (BattleActionData_o *)sub_2213CCC(BattleActionData_TypeInfo);
  BattleActionData___ctor(v17, 0);
  data = this->fields.data;
  if ( !data )
    goto LABEL_24;
  data = (BattleData_o *)BattleData__getServantData(data, targetId, 0);
  if ( !data )
    goto LABEL_24;
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
               0,
               v26);
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
               0,
               v26);
    if ( !baseVals )
      goto LABEL_24;
    Value = DataVals__GetValue(baseVals, 0);
    if ( usedChargeTurn < 0 )
    {
      if ( absorptionCount < 0 )
      {
        v23 = Value;
        isGainNp = BattleServantData__isGainNp(v20, 1, 0, 0);
        usedChargeTurn = v23;
        if ( !isGainNp )
          goto LABEL_22;
        goto LABEL_21;
      }
      if ( absorptionCount )
      {
        usedChargeTurn = absorptionCount;
        if ( BattleServantData__isGainNp(v20, 1, baseVals, 0) )
        {
LABEL_21:
          isGainNp = BattleServantData__updownNextTDTurn(v20, -usedChargeTurn, 0);
LABEL_22:
          data = (BattleData_o *)BattleLogicFunction__getFunctionObject(
                                   (BattleLogicFunction_o *)isGainNp,
                                   funcEnt,
                                   v20->fields.uniqueId,
                                   funcIndex,
                                   isCommandSideEffect,
                                   0,
                                   v25);
          LODWORD(data->fields.data) = 5;
          if ( v17 )
          {
            BattleActionData__setBuffData(v17, (BattleActionData_BuffData_o *)data, baseVals, 0, 0);
            return v17;
          }
LABEL_24:
          sub_2213CDC(data, v18);
        }
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
             0,
             v26);
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
  BattleActionData_o *v17; // x21
  FunctionEntity_o *v18; // x1
  __int64 data; // x0
  BattleServantData_o *v20; // x28
  BattleServantData_o *v21; // x19
  BattleServantData_o *v22; // x25
  int32_t v23; // w20
  __int64 v24; // x1
  BattleServantData_o *v25; // x26
  BattleServantData_o *v26; // x29
  int32_t v27; // w24
  bool IsOpponentPTUniqueID; // w0
  System_Int32_array *v29; // x19
  BattleServantData_o *v30; // x8
  const MethodInfo *v31; // x6
  int32_t v32; // w3
  bool v33; // w9
  int v34; // w19
  struct BattleData_o *v35; // x8
  DataVals_o *v38; // [xsp+8h] [xbp-78h]
  FunctionEntity_o *funcEnta; // [xsp+10h] [xbp-70h]
  bool v40; // [xsp+18h] [xbp-68h]
  int32_t v41; // [xsp+1Ch] [xbp-64h]

  if ( (byte_5973BB9 & 1) == 0 )
  {
    sub_2213A60(&BattleActionData_TypeInfo);
    byte_5973BB9 = 1;
  }
  v17 = (BattleActionData_o *)sub_2213CCC(BattleActionData_TypeInfo);
  BattleActionData___ctor(v17, 0);
  data = (__int64)this->fields.data;
  if ( !data )
    goto LABEL_28;
  data = (__int64)BattleData__getServantData((BattleData_o *)data, targetId, 0);
  if ( !this->fields.data )
    goto LABEL_28;
  v20 = (BattleServantData_o *)data;
  data = (__int64)BattleData__getServantData(this->fields.data, playerId, 0);
  if ( !v20 )
    goto LABEL_28;
  v21 = (BattleServantData_o *)data;
  v40 = isCommandSideEffect;
  v41 = funcIndex;
  v38 = baseVals;
  funcEnta = funcEnt;
  if ( !v20->fields.isEnemy || !BattleServantData__isShiftableServant(v20, 0) )
    goto LABEL_11;
  data = (__int64)this->fields.logic;
  if ( !data )
    goto LABEL_28;
  if ( BattleLogic__IsAfterUpdateShiftServant((BattleLogic_o *)data, 0) )
  {
    v22 = 0;
    v23 = 1;
    v24 = ((unsigned int (__fastcall *)(BattleServantData_o *, const MethodInfo *))v20->klass->vtable._9_get_hp.methodPtr)(
            v20,
            v20->klass->vtable._9_get_hp.method)
        - 1;
    v25 = v20;
  }
  else
  {
LABEL_11:
    v24 = ((unsigned int (__fastcall *)(BattleServantData_o *, const MethodInfo *))v20->klass->vtable._9_get_hp.methodPtr)(
            v20,
            v20->klass->vtable._9_get_hp.method);
    v25 = 0;
    v23 = 0;
    v22 = v20;
  }
  ((void (__fastcall *)(BattleServantData_o *, __int64, const MethodInfo *))v20->klass->vtable._12_set_reducedhp.methodPtr)(
    v20,
    v24,
    v20->klass->vtable._12_set_reducedhp.method);
  data = (__int64)this->fields.logic;
  if ( !data )
    goto LABEL_28;
  v26 = v21;
  data = BattleLogic__getWave((BattleLogic_o *)data, 0);
  if ( !this->fields.data )
    goto LABEL_28;
  v27 = data;
  IsOpponentPTUniqueID = BattleData__IsOpponentPTUniqueID(this->fields.data, targetId, playerId, 0);
  BattleServantData__setActionHistory(v20, playerId, 4, v27, IsOpponentPTUniqueID, 0);
  if ( !funcUnit )
    goto LABEL_28;
  v29 = BattleLogicFunctionProcess_FunctionUnitCheck__get_FuncIndividuality(funcUnit, 0);
  data = ((__int64 (__fastcall *)(BattleServantData_o *, const MethodInfo *))v20->klass->vtable._13_get_resultHp.methodPtr)(
           v20,
           v20->klass->vtable._13_get_resultHp.method);
  v30 = v23 ? v25 : v22;
  if ( !v30 )
    goto LABEL_28;
  BattleServantData__ResultDamage(v30, data, v26, 0, v29, v23, 0);
  if ( (v23 & 1) != 0 )
  {
    v33 = v40;
    v32 = v41;
    v18 = funcEnta;
    v34 = 8;
  }
  else
  {
    v33 = v40;
    v32 = v41;
    v35 = this->fields.data;
    v18 = funcEnta;
    if ( !v35 )
      goto LABEL_28;
    v34 = 1;
    v20->fields.deadTurn = v35->fields.typeTurn;
  }
  data = (__int64)BattleLogicFunction__getFunctionObject(
                    (BattleLogicFunction_o *)data,
                    v18,
                    v20->fields.uniqueId,
                    v32,
                    v33,
                    0,
                    v31);
  v18 = (FunctionEntity_o *)data;
  *(_DWORD *)(data + 48) = v34;
  if ( playerId == targetId || isNoAccumulation )
    *(_BYTE *)(data + 109) = 1;
  if ( !v17 )
LABEL_28:
    sub_2213CDC(data, v18);
  BattleActionData__setBuffData(v17, (BattleActionData_BuffData_o *)data, v38, 0, 0);
  return v17;
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
  __int64 v17; // x1
  int32_t v18; // w23
  int32_t v19; // w24
  BattleDataDefine_c *v20; // x0
  float PERCENTAGE_DENOMINATOR; // s0
  signed int v22; // w8
  int32_t v23; // w24
  int32_t funcIndex; // w21
  int32_t uniqueId; // w22
  FunctionEntity_o *funcEnt; // x25
  _BOOL8 IsCommandSideEffect; // x0
  const MethodInfo *v28; // x6
  BattleActionData_BuffData_o *FunctionObject; // x20

  if ( (byte_5973BCF & 1) == 0 )
  {
    sub_2213A60(&BattleActionData_TypeInfo);
    sub_2213A60(&BattleDataDefine_TypeInfo);
    byte_5973BCF = 1;
  }
  data = this->fields.data;
  *diffNp = 0;
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
        v18 = BattleServantData__addNp(v13, -Value, 0, 0);
        v19 = np - v18;
        *diffNp = v19;
        v20 = BattleDataDefine_TypeInfo;
        if ( !*(&BattleDataDefine_TypeInfo->_2.cctor_finished + 1) )
        {
          j_il2cpp_runtime_class_init_0(BattleDataDefine_TypeInfo, v17);
          v20 = BattleDataDefine_TypeInfo;
        }
        PERCENTAGE_DENOMINATOR = v20->static_fields->PERCENTAGE_DENOMINATOR;
        v22 = PERCENTAGE_DENOMINATOR == INFINITY ? 0x80000000 : (int)PERCENTAGE_DENOMINATOR;
        v23 = v19 % v22;
        if ( v23 >= 1 )
        {
          BattleServantData__addNp(v13, v23, 0, 0);
          *diffNp -= v23;
        }
        v14 = (BattleActionData_o *)sub_2213CCC(BattleActionData_TypeInfo);
        BattleActionData___ctor(v14, 0);
        if ( procArg )
        {
          funcIndex = baseVals->fields.funcIndex;
          uniqueId = v13->fields.uniqueId;
          funcEnt = baseVals->fields.funcEnt;
          IsCommandSideEffect = BattleLogicFunction_ProcListInArgs__get_IsCommandSideEffect(procArg, 0);
          FunctionObject = BattleLogicFunction__getFunctionObject(
                             (BattleLogicFunction_o *)IsCommandSideEffect,
                             funcEnt,
                             uniqueId,
                             funcIndex,
                             IsCommandSideEffect,
                             0,
                             v28);
          FunctionObject->fields.procType = 3;
          BattleActionData_BuffData__setSaveNp(FunctionObject, v18, 0);
          if ( v14 )
          {
            BattleActionData__setBuffData(v14, FunctionObject, baseVals, 0, 0);
            return v14;
          }
        }
      }
LABEL_20:
      sub_2213CDC(data, procArg);
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
  int32_t MovePositionDown; // w24
  int v16; // w25
  intptr_t m_CachedPtr; // x8
  int v18; // w9
  int v19; // w10
  int v20; // w11
  unsigned int v21; // w10
  BattleServantData_o *v22; // x23
  __int64 *v23; // x8
  __int64 v24; // x21
  __int64 v25; // x22
  int32_t targetId; // w9
  System_String_o *v27; // x2
  System_String_o *v28; // x3
  int32_t v29; // w4
  int32_t v30; // w5
  bool v31; // w6
  bool v32; // w7

  if ( (byte_5973BD7 & 1) == 0 )
  {
    sub_2213A60(&BattleActionData_TypeInfo);
    sub_2213A60(&Method_DataManager_GetMasterData_SkillLvMaster___);
    sub_2213A60(&Method_SingletonMonoBehaviour_DataManager__getInstance__);
    sub_2213A60(&StringLiteral_6720/*"FOCUS_UP_EX"*/);
    sub_2213A60(&StringLiteral_6718/*"FOCUS_UNDER_EX"*/);
    sub_2213A60(&StringLiteral_6716/*"FOCUS_CENTER_EX"*/);
    sub_2213A60(&StringLiteral_6717/*"FOCUS_UNDER"*/);
    sub_2213A60(&StringLiteral_6715/*"FOCUS_CENTER"*/);
    sub_2213A60(&StringLiteral_6719/*"FOCUS_UP"*/);
    byte_5973BD7 = 1;
  }
  v8 = *((_QWORD *)Method_SingletonMonoBehaviour_DataManager__getInstance__ + 4);
  if ( (*(_WORD *)(v8 + 309) & 1) == 0 )
    v8 = sub_224B908(v4);
  v9 = *(_QWORD *)(*(_QWORD *)(v8 + 192) + 16LL);
  if ( (*(_WORD *)(v9 + 309) & 1) == 0 )
    v9 = sub_224B908(v4);
  MasterData_object = **(DataManager_o ***)(v9 + 184);
  if ( !MasterData_object )
    goto LABEL_49;
  MasterData_object = (DataManager_o *)DataManager__GetMasterData_object_(
                                         MasterData_object,
                                         (const MethodInfo_385636C *)Method_DataManager_GetMasterData_SkillLvMaster___);
  if ( !actionData )
    goto LABEL_49;
  v11 = (SkillLvMaster_o *)MasterData_object;
  MasterData_object = (DataManager_o *)actionData->fields.skillInfo;
  if ( !MasterData_object )
    goto LABEL_49;
  MasterData_object = (DataManager_o *)((__int64 (__fastcall *)(DataManager_o *, const char *))MasterData_object->klass[1]._1.name)(
                                         MasterData_object,
                                         MasterData_object->klass[1]._1.namespaze);
  skillInfo = actionData->fields.skillInfo;
  if ( !skillInfo )
    goto LABEL_49;
  if ( !v11 )
    goto LABEL_49;
  MasterData_object = (DataManager_o *)SkillLvMaster__GetEntity(
                                         v11,
                                         (int32_t)MasterData_object,
                                         skillInfo->fields.skilllv,
                                         0);
  if ( !MasterData_object )
    goto LABEL_49;
  v13 = (SkillLvEntity_o *)MasterData_object;
  MovePositionUp = SkillLvEntity__getMovePositionUp((SkillLvEntity_o *)MasterData_object, 0);
  MovePositionDown = SkillLvEntity__getMovePositionDown(v13, 0);
  if ( MovePositionUp != -1 || MovePositionDown != -1 )
  {
    MasterData_object = (DataManager_o *)this->fields.data;
    if ( !MasterData_object )
      goto LABEL_49;
    MasterData_object = (DataManager_o *)BattleData__getTargetEnemyId((BattleData_o *)MasterData_object, 0, 0);
    if ( !this->fields.data )
      goto LABEL_49;
    v16 = (int)MasterData_object;
    BattleData__getServantData(this->fields.data, (int32_t)MasterData_object, 0);
    MasterData_object = (DataManager_o *)this->fields.data;
    if ( !MasterData_object )
      goto LABEL_49;
    m_CachedPtr = MasterData_object[2].fields.m_CachedPtr;
    if ( !m_CachedPtr )
      goto LABEL_49;
    v18 = *(_DWORD *)(m_CachedPtr + 24);
    if ( v18 >= 1 )
    {
      v19 = 0;
      while ( 1 )
      {
        if ( v18 == v19 )
          sub_2213CE4(MasterData_object);
        if ( v16 == *(_DWORD *)(m_CachedPtr + 4LL * v19 + 32) )
          break;
        if ( (v18 & ~(v18 >> 31)) == ++v19 )
          return;
      }
      v20 = MovePositionUp > 0 ? -MovePositionUp : MovePositionDown;
      v21 = v20 + v19;
      if ( v21 < v18 )
      {
        MasterData_object = (DataManager_o *)BattleData__getServantData(
                                               (BattleData_o *)MasterData_object,
                                               *(_DWORD *)(m_CachedPtr + 4LL * v21 + 32),
                                               0);
        if ( !MasterData_object )
          goto LABEL_49;
        v22 = (BattleServantData_o *)MasterData_object;
        if ( BattleServantData__isAlive((BattleServantData_o *)MasterData_object, 0, 0) )
        {
          MasterData_object = (DataManager_o *)this->fields.data;
          if ( !MasterData_object )
            goto LABEL_49;
          BattleData__SetTargetId((BattleData_o *)MasterData_object, v22->fields.uniqueId, 0);
          if ( BattleServantData__isMultiTargetUp(v22, 0) )
          {
            if ( SkillLvEntity__IsAress(v13, 0) )
              v23 = &StringLiteral_6720/*"FOCUS_UP_EX"*/;
            else
              v23 = &StringLiteral_6719/*"FOCUS_UP"*/;
          }
          else if ( BattleServantData__isMultiTargetCore(v22, 0) )
          {
            if ( SkillLvEntity__IsAress(v13, 0) )
              v23 = &StringLiteral_6716/*"FOCUS_CENTER_EX"*/;
            else
              v23 = &StringLiteral_6715/*"FOCUS_CENTER"*/;
          }
          else
          {
            v24 = 0;
            if ( !BattleServantData__isMultiTargetUnder(v22, 0) )
            {
LABEL_46:
              v25 = sub_2213CCC(BattleActionData_TypeInfo);
              BattleActionData___ctor((BattleActionData_o *)v25, 0);
              if ( targetData && v25 )
              {
                targetId = actionData->fields.targetId;
                *(_DWORD *)(v25 + 32) = targetData->fields.uniqueId;
                *(_DWORD *)(v25 + 36) = targetId;
                BattleActionData__setStateField((BattleActionData_o *)v25, 0);
                *(_QWORD *)(v25 + 72) = v24;
                sub_2213A04((MissionNaviTransitionBoardItem_o *)(v25 + 72), v24, v27, v28, v29, v30, v31, v32);
                BattleActionData__AddAfterActionData(actionData, (BattleActionData_o *)v25, 0, 0);
                return;
              }
LABEL_49:
              sub_2213CDC(MasterData_object, actionData);
            }
            if ( SkillLvEntity__IsAress(v13, 0) )
              v23 = &StringLiteral_6718/*"FOCUS_UNDER_EX"*/;
            else
              v23 = &StringLiteral_6717/*"FOCUS_UNDER"*/;
          }
          v24 = *v23;
          goto LABEL_46;
        }
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
  __int64 v7; // x24
  RemovedBuffInfoGroup_o *StealBuffInfoGroup; // x0
  BattleActionData_o *NoEffectObject; // x1
  const MethodInfo *v10; // x4
  struct BattleLogicFunctionProcess_FunctionUnitCheck_o *funcUnit_k__BackingField; // x8
  DataVals_o *dataVals_k__BackingField; // x23
  int32_t targetId_k__BackingField; // w21
  RemovedBuffInfoGroup_o *v14; // x25
  BattleServantData_o *ServantData; // x26
  const MethodInfo *v16; // x4
  System_Collections_Generic_IEnumerable_BattleBuffData_BuffData__o *v17; // x27
  System_Func_object__bool__o *v18; // x28
  System_Collections_Generic_IEnumerable_T__o *v19; // x27
  System_Collections_Generic_HashSet_object__o *v20; // x28
  System_String_o *v21; // x2
  System_String_o *v22; // x3
  int32_t v23; // w4
  int32_t v24; // w5
  bool v25; // w6
  bool v26; // w7
  System_Collections_Generic_IEnumerable_BattleBuffData_BuffData__o *v27; // x25
  System_Func_object__bool__o *v28; // x27
  System_Collections_Generic_IEnumerable_TSource__o *v29; // x0
  RemovedBuffInfoGroup_o *v30; // x25
  System_Collections_Generic_List_int__o *v31; // x28
  int klass; // w8
  DataMasterBase_TMaster__TEntity__PKType__o *v33; // x29
  __int64 v34; // x21
  __int64 v35; // x27
  BattleBuffData_BuffData_o *v36; // x24
  const MethodInfo *v37; // x2
  BattleBuffData_ChangeBgmData_o *changeBgmData; // x0
  const MethodInfo *v39; // x3
  int32_t DispTurn; // w0
  _BOOL4 isProgressSelfTurn; // w8
  struct System_Int32_array *items; // x8
  _QWORD *v43; // x9
  __int64 size; // x10
  BattleActionData_BuffData_o *v45; // x27
  bool v46; // w0
  System_Int32_array *v47; // x0
  System_String_o *v48; // x2
  System_String_o *v49; // x3
  int32_t v50; // w4
  int32_t v51; // w5
  bool v52; // w6
  bool v53; // w7
  int v54; // w22
  int32_t funcIndex; // w22
  bool IsCommandSideEffect; // w0
  struct BattleData_o *data; // x8
  BattleFieldEnvironmentData_o *FieldEnvData_k__BackingField; // x19
  BattleLogicFunction___c_c *v59; // x0
  struct BattleLogicFunction___c_StaticFields *static_fields; // x8
  System_Func_object__bool__o *_9__127_2; // x20
  Il2CppObject *v62; // x21
  MissionNaviTransitionBoardItem_o *v63; // x0
  System_String_o *v64; // x2
  System_String_o *v65; // x3
  int32_t v66; // w4
  int32_t v67; // w5
  bool v68; // w6
  bool v69; // w7
  System_Collections_Generic_IEnumerable_TSource__o *v70; // x0
  BattleActionEffect_ChangeBgmBuff_o *v71; // x19
  const MethodInfo *v72; // [xsp+8h] [xbp-98h]
  int32_t v73; // [xsp+1Ch] [xbp-84h]
  struct FunctionEntity_o *funcEnt; // [xsp+20h] [xbp-80h]
  Il2CppObject *entity; // [xsp+38h] [xbp-68h] BYREF

  if ( (byte_5973BDC & 1) == 0 )
  {
    sub_2213A60(&BattleActionData_BuffData_TypeInfo);
    sub_2213A60(&BattleActionEffect_ChangeBgmBuff_TypeInfo);
    sub_2213A60(&Method_DataManager_GetMasterData_BuffMaster___);
    sub_2213A60(&Method_DataMasterBase_BuffMaster__BuffEntity__int__TryGetEntity__);
    sub_2213A60(&Method_System_Linq_Enumerable_ToArray_BattleBuffData_BuffData___);
    sub_2213A60(&Method_System_Linq_Enumerable_Where_BattleBuffData_BuffData___);
    sub_2213A60(&System_Func_BattleBuffData_BuffData__bool__TypeInfo);
    sub_2213A60(&Method_System_Collections_Generic_HashSet_BattleBuffData_BuffData___ctor___91631288);
    sub_2213A60(&System_Collections_Generic_HashSet_BattleBuffData_BuffData__TypeInfo);
    sub_2213A60(&Method_System_Collections_Generic_List_int__Add__);
    sub_2213A60(&Method_System_Collections_Generic_List_int__ToArray__);
    sub_2213A60(&Method_System_Collections_Generic_List_int___ctor__);
    sub_2213A60(&System_Collections_Generic_List_int__TypeInfo);
    sub_2213A60(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_2213A60(&Method_BattleLogicFunction___c__functionMoveState_b__127_2__);
    sub_2213A60(&Method_BattleLogicFunction___c__DisplayClass127_0__functionMoveState_b__0__);
    sub_2213A60(&Method_BattleLogicFunction___c__DisplayClass127_0__functionMoveState_b__1__);
    sub_2213A60(&BattleLogicFunction___c__DisplayClass127_0_TypeInfo);
    sub_2213A60(&BattleLogicFunction___c_TypeInfo);
    byte_5973BDC = 1;
  }
  entity = 0;
  v7 = sub_2213CCC(BattleLogicFunction___c__DisplayClass127_0_TypeInfo);
  BattleLogicFunction___c__DisplayClass127_0___ctor((BattleLogicFunction___c__DisplayClass127_0_o *)v7, 0);
  if ( !funcTarget )
    goto LABEL_59;
  funcUnit_k__BackingField = funcTarget->fields._funcUnit_k__BackingField;
  if ( !funcUnit_k__BackingField )
    goto LABEL_59;
  dataVals_k__BackingField = funcUnit_k__BackingField->fields._dataVals_k__BackingField;
  targetId_k__BackingField = funcTarget->fields._targetId_k__BackingField;
  StealBuffInfoGroup = BattleLogicFunction__GetStealBuffInfoGroup(
                         this,
                         procArg,
                         mainAction,
                         dataVals_k__BackingField,
                         v10);
  if ( !this->fields.data )
    goto LABEL_59;
  v14 = StealBuffInfoGroup;
  ServantData = BattleData__getServantData(this->fields.data, targetId_k__BackingField, 0);
  BattleLogicFunction__ResetFamilyLinkageIdToStolenFamilyBuffs(
    (BattleLogicFunction_o *)ServantData,
    procArg,
    ServantData,
    v14,
    v16);
  if ( !v7 )
    goto LABEL_59;
  v73 = targetId_k__BackingField;
  *(_DWORD *)(v7 + 16) = 0x1000000;
  if ( !v14 )
    goto LABEL_59;
  v17 = RemovedBuffInfoGroup__RemovedLinkageBuffEnumerable(v14, 0);
  v18 = (System_Func_object__bool__o *)sub_2213CCC(System_Func_BattleBuffData_BuffData__bool__TypeInfo);
  System_Func_object__bool____ctor(
    v18,
    (Il2CppObject *)v7,
    Method_BattleLogicFunction___c__DisplayClass127_0__functionMoveState_b__0__,
    0);
  v19 = (System_Collections_Generic_IEnumerable_T__o *)System_Linq_Enumerable__Where_object_(
                                                         (System_Collections_Generic_IEnumerable_TSource__o *)v17,
                                                         (System_Func_TSource__bool__o *)v18,
                                                         (const MethodInfo_38A3478 *)Method_System_Linq_Enumerable_Where_BattleBuffData_BuffData___);
  v20 = (System_Collections_Generic_HashSet_object__o *)sub_2213CCC(System_Collections_Generic_HashSet_BattleBuffData_BuffData__TypeInfo);
  System_Collections_Generic_HashSet_object____ctor_69968828(
    v20,
    v19,
    (const MethodInfo_42BA3BC *)Method_System_Collections_Generic_HashSet_BattleBuffData_BuffData___ctor___91631288);
  *(_QWORD *)(v7 + 24) = v20;
  sub_2213A04((MissionNaviTransitionBoardItem_o *)(v7 + 24), (int32_t)v20, v21, v22, v23, v24, v25, v26);
  v27 = RemovedBuffInfoGroup__RemovedAllBuffEnumerable(v14, 0);
  v28 = (System_Func_object__bool__o *)sub_2213CCC(System_Func_BattleBuffData_BuffData__bool__TypeInfo);
  System_Func_object__bool____ctor(
    v28,
    (Il2CppObject *)v7,
    Method_BattleLogicFunction___c__DisplayClass127_0__functionMoveState_b__1__,
    0);
  v29 = System_Linq_Enumerable__Where_object_(
          (System_Collections_Generic_IEnumerable_TSource__o *)v27,
          (System_Func_TSource__bool__o *)v28,
          (const MethodInfo_38A3478 *)Method_System_Linq_Enumerable_Where_BattleBuffData_BuffData___);
  StealBuffInfoGroup = (RemovedBuffInfoGroup_o *)System_Linq_Enumerable__ToArray_object_(
                                                   v29,
                                                   (const MethodInfo_389BB2C *)Method_System_Linq_Enumerable_ToArray_BattleBuffData_BuffData___);
  if ( !StealBuffInfoGroup )
    goto LABEL_59;
  v30 = StealBuffInfoGroup;
  if ( !StealBuffInfoGroup[1].klass )
  {
    if ( dataVals_k__BackingField )
    {
      StealBuffInfoGroup = (RemovedBuffInfoGroup_o *)procArg;
      if ( procArg )
      {
        funcIndex = dataVals_k__BackingField->fields.funcIndex;
        IsCommandSideEffect = BattleLogicFunction_ProcListInArgs__get_IsCommandSideEffect(procArg, 0);
        NoEffectObject = BattleLogicFunction__getNoEffectObject(
                           this,
                           targetId_k__BackingField,
                           funcIndex,
                           dataVals_k__BackingField,
                           IsCommandSideEffect,
                           0,
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
    goto LABEL_59;
  }
  v31 = (System_Collections_Generic_List_int__o *)sub_2213CCC(System_Collections_Generic_List_int__TypeInfo);
  System_Collections_Generic_List_int____ctor(
    v31,
    (const MethodInfo_44669E0 *)Method_System_Collections_Generic_List_int___ctor__);
  StealBuffInfoGroup = (RemovedBuffInfoGroup_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_47A29F8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !StealBuffInfoGroup )
    goto LABEL_59;
  StealBuffInfoGroup = (RemovedBuffInfoGroup_o *)DataManager__GetMasterData_object_(
                                                   (DataManager_o *)StealBuffInfoGroup,
                                                   (const MethodInfo_385636C *)Method_DataManager_GetMasterData_BuffMaster___);
  klass = (int)v30[1].klass;
  if ( klass < 1 )
  {
    v54 = 0;
    v35 = 0;
  }
  else
  {
    v33 = (DataMasterBase_TMaster__TEntity__PKType__o *)StealBuffInfoGroup;
    v34 = 0;
    v35 = 0;
    do
    {
      if ( (unsigned int)v34 >= klass )
        sub_2213CE4(StealBuffInfoGroup);
      v36 = (BattleBuffData_BuffData_o *)*((_QWORD *)&v30[1].monitor + v34);
      if ( !v36 || !v33 )
        goto LABEL_59;
      StealBuffInfoGroup = (RemovedBuffInfoGroup_o *)DataMasterBase_object__object__int___TryGetEntity(
                                                       v33,
                                                       &entity,
                                                       v36->fields.buffId,
                                                       (const MethodInfo_3F10B80 *)Method_DataMasterBase_BuffMaster__BuffEntity__int__TryGetEntity__);
      if ( ((unsigned __int8)StealBuffInfoGroup & 1) != 0 )
      {
        StealBuffInfoGroup = (RemovedBuffInfoGroup_o *)BattleLogicFunction__IsAddStateFieldFlag(this, v36, v37);
        if ( !ServantData )
          goto LABEL_59;
        BattleServantData__addBuff(ServantData, v36, (unsigned __int8)StealBuffInfoGroup & 1, 0, 1, 0);
        changeBgmData = v36->fields.changeBgmData;
        if ( changeBgmData )
          BattleBuffData_ChangeBgmData__UpdateUniqueVal(
            changeBgmData,
            v36->fields.addOrder,
            ServantData->fields.uniqueId,
            0);
        StealBuffInfoGroup = (RemovedBuffInfoGroup_o *)entity;
        if ( !entity )
          goto LABEL_59;
        if ( !BuffEntity__IsDisableMoveStateTurnChange((BuffEntity_o *)entity, 0) )
        {
          if ( v36->fields.turn <= 0 )
          {
            isProgressSelfTurn = v36->fields.isProgressSelfTurn;
          }
          else
          {
            DispTurn = BattleBuffData_BuffData__get_DispTurn(v36, 0);
            isProgressSelfTurn = v36->fields.isProgressSelfTurn;
            v36->fields.turn = 2 * DispTurn - v36->fields.isProgressSelfTurn;
          }
          v36->fields.isProgressEndEnemyTurn = isProgressSelfTurn == ServantData->fields.isEnemy;
        }
        BattleLogicFunction__AfterAddedBuffProcess(this, ServantData, (BuffEntity_o *)entity, v39);
        if ( v35 )
        {
          if ( !v31 )
            goto LABEL_59;
          items = v31->fields._items;
          NoEffectObject = (BattleActionData_o *)(unsigned int)v36->fields.addOrder;
          v43 = Method_System_Collections_Generic_List_int__Add__;
          ++v31->fields._version;
          if ( !items )
            goto LABEL_59;
          size = v31->fields._size;
          if ( (unsigned int)size >= LODWORD(items->max_length) )
          {
            System_Collections_Generic_List_int___AddWithResize(
              v31,
              (int32_t)NoEffectObject,
              *(const MethodInfo_4467270 **)(*(_QWORD *)(v43[4] + 192LL) + 112LL));
          }
          else
          {
            v31->fields._size = size + 1;
            items->m_Items[size] = (int)NoEffectObject;
          }
        }
        else
        {
          v45 = (BattleActionData_BuffData_o *)sub_2213CCC(BattleActionData_BuffData_TypeInfo);
          BattleActionData_BuffData___ctor(v45, 0);
          if ( !v45 )
            goto LABEL_59;
          v45->fields.targetId = v73;
          if ( !dataVals_k__BackingField )
            goto LABEL_59;
          StealBuffInfoGroup = (RemovedBuffInfoGroup_o *)procArg;
          v45->fields.functionIndex = dataVals_k__BackingField->fields.funcIndex;
          if ( !procArg )
            goto LABEL_59;
          funcEnt = dataVals_k__BackingField->fields.funcEnt;
          v46 = BattleLogicFunction_ProcListInArgs__get_IsCommandSideEffect(procArg, 0);
          v35 = ((__int64 (__fastcall *)(BattleLogicFunctionProcess_FunctionTargetCheck_o *, BattleActionData_BuffData_o *, BattleBuffData_BuffData_o *, struct FunctionEntity_o *, bool, const MethodInfo *))funcTarget->klass->vtable._12_MakeAddActionBuffData.methodPtr)(
                  funcTarget,
                  v45,
                  v36,
                  funcEnt,
                  v46,
                  funcTarget->klass->vtable._12_MakeAddActionBuffData.method);
          StealBuffInfoGroup = (RemovedBuffInfoGroup_o *)mainAction;
          if ( !mainAction )
            goto LABEL_59;
          BattleActionData__setBuffData(mainAction, (BattleActionData_BuffData_o *)v35, dataVals_k__BackingField, 0, 0);
          StealBuffInfoGroup = (RemovedBuffInfoGroup_o *)this->fields.data;
          if ( !StealBuffInfoGroup )
            goto LABEL_59;
          BattleData__AddFreshBuffList((BattleData_o *)StealBuffInfoGroup, (BattleActionData_BuffData_o *)v35, 0);
        }
      }
      klass = (int)v30[1].klass;
      ++v34;
    }
    while ( (int)v34 < klass );
    if ( v35 )
    {
      if ( !v31 )
        goto LABEL_59;
      v47 = System_Collections_Generic_List_int___ToArray(
              v31,
              (const MethodInfo_4468CF0 *)Method_System_Collections_Generic_List_int__ToArray__);
      *(_QWORD *)(v35 + 184) = v47;
      sub_2213A04((MissionNaviTransitionBoardItem_o *)(v35 + 184), (int32_t)v47, v48, v49, v50, v51, v52, v53);
      v54 = 1;
    }
    else
    {
      v54 = 0;
    }
  }
  data = this->fields.data;
  if ( !data )
    goto LABEL_59;
  FieldEnvData_k__BackingField = data->fields._FieldEnvData_k__BackingField;
  v59 = BattleLogicFunction___c_TypeInfo;
  if ( !*(&BattleLogicFunction___c_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(BattleLogicFunction___c_TypeInfo, NoEffectObject);
    v59 = BattleLogicFunction___c_TypeInfo;
  }
  static_fields = v59->static_fields;
  _9__127_2 = (System_Func_object__bool__o *)static_fields->__9__127_2;
  if ( !_9__127_2 )
  {
    if ( !*(&v59->_2.cctor_finished + 1) )
    {
      j_il2cpp_runtime_class_init_0(v59, NoEffectObject);
      static_fields = BattleLogicFunction___c_TypeInfo->static_fields;
    }
    v62 = (Il2CppObject *)static_fields->__9;
    _9__127_2 = (System_Func_object__bool__o *)sub_2213CCC(System_Func_BattleBuffData_BuffData__bool__TypeInfo);
    System_Func_object__bool____ctor(_9__127_2, v62, Method_BattleLogicFunction___c__functionMoveState_b__127_2__, 0);
    v63 = (MissionNaviTransitionBoardItem_o *)BattleLogicFunction___c_TypeInfo->static_fields;
    v63[1].klass = (MissionNaviTransitionBoardItem_c *)_9__127_2;
    sub_2213A04(v63 + 1, (int32_t)_9__127_2, v64, v65, v66, v67, v68, v69);
  }
  v70 = System_Linq_Enumerable__Where_object_(
          (System_Collections_Generic_IEnumerable_TSource__o *)v30,
          (System_Func_TSource__bool__o *)_9__127_2,
          (const MethodInfo_38A3478 *)Method_System_Linq_Enumerable_Where_BattleBuffData_BuffData___);
  StealBuffInfoGroup = (RemovedBuffInfoGroup_o *)System_Linq_Enumerable__ToArray_object_(
                                                   v70,
                                                   (const MethodInfo_389BB2C *)Method_System_Linq_Enumerable_ToArray_BattleBuffData_BuffData___);
  if ( !FieldEnvData_k__BackingField )
LABEL_59:
    sub_2213CDC(StealBuffInfoGroup, NoEffectObject);
  if ( (v54
      & BattleFieldEnvironmentData__AddBgmFromChangeBgmBuffArray(
          FieldEnvData_k__BackingField,
          (BattleBuffData_BuffData_array *)StealBuffInfoGroup,
          0)) == 1 )
  {
    v71 = (BattleActionEffect_ChangeBgmBuff_o *)sub_2213CCC(BattleActionEffect_ChangeBgmBuff_TypeInfo);
    BattleActionEffect_ChangeBgmBuff___ctor(v71, 0);
    BattleActionData_BuffData__SetActionEffectProc(
      (BattleActionData_BuffData_o *)v35,
      (BattleActionEffect_Base_o *)v71,
      0);
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
  BattleActionData_o *v15; // x28
  __int64 v16; // x1
  BattleData_o *data; // x0
  BattleServantData_o *v18; // x22
  System_Collections_Generic_List_int__o *v19; // x27
  struct System_Int32_array *items; // x8
  _QWORD *v21; // x9
  __int64 size; // x10
  __int64 v23; // x22
  int v24; // w29
  struct System_Int32_array *v25; // x8
  _QWORD *v26; // x10
  __int64 v27; // x9
  bool v28; // w23
  System_Int32_array *TargetRarityList; // x25
  System_Int32_array *buffIndv; // x21
  __int64 v31; // x28
  struct System_Int32_array *v32; // x8
  _QWORD *v33; // x9
  __int64 v34; // x10
  struct System_Int32_array *v35; // x8
  _QWORD *v36; // x9
  __int64 v37; // x10
  System_Int32_array_array *Int2DimensionalArray; // x0
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
  int32_t BattlePointPhase; // w21
  struct System_Int32_array *v52; // x8
  _QWORD *v53; // x9
  __int64 v54; // x10
  struct System_Int32_array *v55; // x8
  _QWORD *v56; // x9
  __int64 v57; // x10
  struct System_Int32_array *v58; // x8
  _QWORD *v59; // x9
  __int64 v60; // x10
  bool IsOverChargeState; // w0
  struct System_Int32_array *v62; // x8
  _QWORD *v63; // x9
  __int64 v64; // x10
  struct System_Int32_array *v65; // x8
  _QWORD *v66; // x9
  __int64 v67; // x10
  System_Array_o *v68; // x22
  _BOOL4 v69; // w24
  System_String_o *v70; // x2
  System_String_o *v71; // x3
  int32_t v72; // w4
  int32_t v73; // w5
  bool v74; // w6
  bool v75; // w7
  int32_t NPFixedDamageValue; // w24
  BattleLogic_DamageProcessArgs_o *damageProcessArgs; // x26
  int32_t Value; // w22
  int v79; // w24
  double v80; // d0
  __int64 v81; // x8
  double v82; // d0
  unsigned __int64 v83; // x8
  struct System_Int32_array *v84; // x8
  int v85; // w10
  _QWORD *v86; // x9
  BattleLogic_o *logic; // x22
  System_Int32_array *v88; // x24
  bool IsIncludeIgnoreIndividuality; // w27
  unsigned int v90; // w8
  BattleActionData_DamageData_o *v91; // x20
  BattleActionData_o *v93; // [xsp+30h] [xbp-90h]
  int32_t funcIndexa; // [xsp+3Ch] [xbp-84h]
  BattleActionData_o *actiona; // [xsp+40h] [xbp-80h]
  BattleLogicFunction_o *v96; // [xsp+48h] [xbp-78h]
  BattleServantData_o *v97; // [xsp+50h] [xbp-70h]
  BattleServantData_o *ServantData; // [xsp+58h] [xbp-68h]

  if ( (byte_5973BB3 & 1) == 0 )
  {
    sub_2213A60(&BattleActionData_TypeInfo);
    sub_2213A60(&BattleLogic_DamageProcessArgs_TypeInfo);
    sub_2213A60(&int_____TypeInfo);
    sub_2213A60(&int___TypeInfo);
    sub_2213A60(&Method_System_Collections_Generic_List_int__Add__);
    sub_2213A60(&Method_System_Collections_Generic_List_int__Clear__);
    sub_2213A60(&Method_System_Collections_Generic_List_int__ToArray__);
    sub_2213A60(&Method_System_Collections_Generic_List_int___ctor__);
    sub_2213A60(&System_Collections_Generic_List_int__TypeInfo);
    sub_2213A60(&System_Math_TypeInfo);
    sub_2213A60(&DataVals_OverChargeState___TypeInfo);
    sub_2213A60(&Field__PrivateImplementationDetails__44BE0EBF7C907BA44AD83314C6AD0AA399AD5B73911C129D2CD6A85D4A056C90);
    byte_5973BB3 = 1;
  }
  v15 = (BattleActionData_o *)sub_2213CCC(BattleActionData_TypeInfo);
  BattleActionData___ctor(v15, 0);
  data = this->fields.data;
  if ( !data )
    goto LABEL_124;
  data = (BattleData_o *)BattleData__getServantData(data, playerId, 0);
  if ( !this->fields.data )
    goto LABEL_124;
  v18 = (BattleServantData_o *)data;
  ServantData = BattleData__getServantData(this->fields.data, targetId, 0);
  v19 = (System_Collections_Generic_List_int__o *)sub_2213CCC(System_Collections_Generic_List_int__TypeInfo);
  System_Collections_Generic_List_int____ctor(
    v19,
    (const MethodInfo_44669E0 *)Method_System_Collections_Generic_List_int___ctor__);
  if ( !baseVals )
    goto LABEL_124;
  data = (BattleData_o *)DataVals__GetParam(baseVals, 3, 0, 0);
  if ( !v19 )
    goto LABEL_124;
  items = v19->fields._items;
  v21 = Method_System_Collections_Generic_List_int__Add__;
  ++v19->fields._version;
  if ( !items )
    goto LABEL_124;
  size = v19->fields._size;
  v96 = this;
  v97 = v18;
  if ( (unsigned int)size >= LODWORD(items->max_length) )
  {
    System_Collections_Generic_List_int___AddWithResize(
      v19,
      (int32_t)data,
      *(const MethodInfo_4467270 **)(*(_QWORD *)(v21[4] + 192LL) + 112LL));
  }
  else
  {
    v19->fields._size = size + 1;
    items->m_Items[size] = (int)data;
  }
  v23 = 0;
  v24 = 0;
  actiona = action;
  funcIndexa = funcIndex;
  v93 = v15;
  if ( type <= 8 )
  {
    if ( (unsigned int)(type - 3) >= 2 )
    {
      if ( (unsigned int)(type - 5) < 2 )
      {
        data = (BattleData_o *)DataVals__GetParam(baseVals, 6, 0, 0);
        v25 = v19->fields._items;
        v26 = Method_System_Collections_Generic_List_int__Add__;
        ++v19->fields._version;
        if ( !v25 )
          goto LABEL_124;
        v27 = v19->fields._size;
        if ( (unsigned int)v27 < LODWORD(v25->max_length) )
        {
          v24 = 0;
          v23 = 0;
          v28 = 0;
          TargetRarityList = 0;
          buffIndv = 0;
          v31 = 0;
          v19->fields._size = v27 + 1;
          v25->m_Items[v27] = (int)data;
          goto LABEL_98;
        }
        System_Collections_Generic_List_int___AddWithResize(
          v19,
          (int32_t)data,
          *(const MethodInfo_4467270 **)(*(_QWORD *)(v26[4] + 192LL) + 112LL));
        goto LABEL_78;
      }
      if ( type != 7 )
        goto LABEL_79;
    }
    goto LABEL_24;
  }
  if ( (unsigned int)(type - 9) < 2 )
  {
LABEL_24:
    data = (BattleData_o *)DataVals__GetParam(baseVals, 7, 0, 0);
    v35 = v19->fields._items;
    v36 = Method_System_Collections_Generic_List_int__Add__;
    ++v19->fields._version;
    if ( !v35 )
      goto LABEL_124;
    v37 = v19->fields._size;
    if ( (unsigned int)v37 >= LODWORD(v35->max_length) )
    {
      System_Collections_Generic_List_int___AddWithResize(
        v19,
        (int32_t)data,
        *(const MethodInfo_4467270 **)(*(_QWORD *)(v36[4] + 192LL) + 112LL));
    }
    else
    {
      v19->fields._size = v37 + 1;
      v35->m_Items[v37] = (int)data;
    }
    v23 = 0;
    v24 = 0;
    if ( type <= 6 )
    {
      if ( type == 3 || type == 4 )
      {
        v31 = sub_2213B20(int___TypeInfo, 1);
        data = (BattleData_o *)DataVals__GetParam(baseVals, 6, 0, 0);
        if ( !v31 )
          goto LABEL_124;
        if ( *(_DWORD *)(v31 + 24) )
        {
          v24 = 0;
          v23 = 0;
          v28 = 0;
          TargetRarityList = 0;
          buffIndv = 0;
          *(_DWORD *)(v31 + 32) = (_DWORD)data;
          goto LABEL_98;
        }
        goto LABEL_125;
      }
    }
    else
    {
      switch ( type )
      {
        case 7:
          buffIndv = (System_Int32_array *)sub_2213B20(int___TypeInfo, 1);
          data = (BattleData_o *)DataVals__GetParam(baseVals, 6, 0, 0);
          if ( !buffIndv )
            goto LABEL_124;
          if ( LODWORD(buffIndv->max_length) )
          {
            v24 = 0;
            v23 = 0;
            v28 = 0;
            TargetRarityList = 0;
            v31 = 0;
            buffIndv->m_Items[0] = (int)data;
            goto LABEL_98;
          }
          goto LABEL_125;
        case 9:
          TargetRarityList = DataVals__GetTargetRarityList(baseVals, 0);
          v24 = 0;
          v23 = 0;
          buffIndv = 0;
          v31 = 0;
          v28 = 1;
          goto LABEL_98;
        case 10:
          Int2DimensionalArray = DataVals__GetInt2DimensionalArray(baseVals, 58, 0);
          if ( Int2DimensionalArray )
          {
            v23 = (__int64)Int2DimensionalArray;
LABEL_96:
            v24 = 0;
            goto LABEL_97;
          }
          v23 = sub_2213B20(int_____TypeInfo, 1);
          data = (BattleData_o *)DataVals__GetAndCheckIndividuality(baseVals, 0);
          if ( !v23 )
            goto LABEL_124;
          if ( *(_DWORD *)(v23 + 24) )
          {
            *(_QWORD *)(v23 + 32) = data;
            sub_2213A04((MissionNaviTransitionBoardItem_o *)(v23 + 32), (int32_t)data, v70, v71, v72, v73, v74, v75);
            goto LABEL_96;
          }
LABEL_125:
          sub_2213CE4(data);
      }
    }
    goto LABEL_79;
  }
  if ( type != 11 )
  {
    if ( type == 12 )
    {
      data = (BattleData_o *)DataVals__GetParam(baseVals, 7, 0, 0);
      v32 = v19->fields._items;
      v33 = Method_System_Collections_Generic_List_int__Add__;
      ++v19->fields._version;
      if ( !v32 )
        goto LABEL_124;
      v34 = v19->fields._size;
      if ( (unsigned int)v34 >= LODWORD(v32->max_length) )
      {
        System_Collections_Generic_List_int___AddWithResize(
          v19,
          (int32_t)data,
          *(const MethodInfo_4467270 **)(*(_QWORD *)(v33[4] + 192LL) + 112LL));
      }
      else
      {
        v19->fields._size = v34 + 1;
        v32->m_Items[v34] = (int)data;
      }
      data = (BattleData_o *)DataVals__GetParam(baseVals, 4, 0, 0);
      v42 = v19->fields._items;
      v43 = Method_System_Collections_Generic_List_int__Add__;
      ++v19->fields._version;
      if ( !v42 )
        goto LABEL_124;
      v44 = v19->fields._size;
      if ( (unsigned int)v44 >= LODWORD(v42->max_length) )
      {
        System_Collections_Generic_List_int___AddWithResize(
          v19,
          (int32_t)data,
          *(const MethodInfo_4467270 **)(*(_QWORD *)(v43[4] + 192LL) + 112LL));
      }
      else
      {
        v19->fields._size = v44 + 1;
        v42->m_Items[v44] = (int)data;
      }
      data = (BattleData_o *)DataVals__GetParam(baseVals, 6, 0, 0);
      v45 = v19->fields._items;
      v46 = Method_System_Collections_Generic_List_int__Add__;
      ++v19->fields._version;
      if ( !v45 )
        goto LABEL_124;
      v47 = v19->fields._size;
      if ( (unsigned int)v47 >= LODWORD(v45->max_length) )
      {
        System_Collections_Generic_List_int___AddWithResize(
          v19,
          (int32_t)data,
          *(const MethodInfo_4467270 **)(*(_QWORD *)(v46[4] + 192LL) + 112LL));
      }
      else
      {
        v19->fields._size = v47 + 1;
        v45->m_Items[v47] = (int)data;
      }
      data = (BattleData_o *)DataVals__GetParam(baseVals, 6, 0, 0);
      if ( !v97 )
        goto LABEL_124;
      BattlePointPhase = BattleServantData__GetBattlePointPhase(v97, (int32_t)data, 0);
      data = (BattleData_o *)DataVals__GetParamAddTypeIndex(baseVals, 184, BattlePointPhase, -1, 0);
      v52 = v19->fields._items;
      v53 = Method_System_Collections_Generic_List_int__Add__;
      ++v19->fields._version;
      if ( !v52 )
        goto LABEL_124;
      v54 = v19->fields._size;
      if ( (unsigned int)v54 >= LODWORD(v52->max_length) )
      {
        System_Collections_Generic_List_int___AddWithResize(
          v19,
          (int32_t)data,
          *(const MethodInfo_4467270 **)(*(_QWORD *)(v53[4] + 192LL) + 112LL));
      }
      else
      {
        v19->fields._size = v54 + 1;
        v52->m_Items[v54] = (int)data;
      }
      if ( !DataVals__IsOverChargeState(baseVals, 1, 0) )
      {
        IsOverChargeState = DataVals__IsOverChargeState(baseVals, 2, 0);
        v23 = 0;
        v24 = 0;
        if ( BattlePointPhase || IsOverChargeState )
          goto LABEL_79;
        DataVals__SetOverCharge(baseVals, 0, 0);
      }
LABEL_78:
      v24 = 0;
      v23 = 0;
LABEL_97:
      v28 = 0;
      TargetRarityList = 0;
      buffIndv = 0;
      v31 = 0;
      goto LABEL_98;
    }
LABEL_79:
    v28 = 0;
    TargetRarityList = 0;
    buffIndv = 0;
    v31 = 0;
    goto LABEL_98;
  }
  v19 = (System_Collections_Generic_List_int__o *)sub_2213CCC(System_Collections_Generic_List_int__TypeInfo);
  System_Collections_Generic_List_int____ctor(
    v19,
    (const MethodInfo_44669E0 *)Method_System_Collections_Generic_List_int___ctor__);
  data = (BattleData_o *)DataVals__GetParam(baseVals, 3, 0, 0);
  if ( !v19 )
    goto LABEL_124;
  v39 = v19->fields._items;
  v40 = Method_System_Collections_Generic_List_int__Add__;
  ++v19->fields._version;
  if ( !v39 )
    goto LABEL_124;
  v41 = v19->fields._size;
  if ( (unsigned int)v41 >= LODWORD(v39->max_length) )
  {
    System_Collections_Generic_List_int___AddWithResize(
      v19,
      (int32_t)data,
      *(const MethodInfo_4467270 **)(*(_QWORD *)(v40[4] + 192LL) + 112LL));
  }
  else
  {
    v19->fields._size = v41 + 1;
    v39->m_Items[v41] = (int)data;
  }
  data = (BattleData_o *)DataVals__GetParam(baseVals, 7, 0, 0);
  v48 = v19->fields._items;
  v49 = Method_System_Collections_Generic_List_int__Add__;
  ++v19->fields._version;
  if ( !v48 )
    goto LABEL_124;
  v50 = v19->fields._size;
  if ( (unsigned int)v50 >= LODWORD(v48->max_length) )
  {
    System_Collections_Generic_List_int___AddWithResize(
      v19,
      (int32_t)data,
      *(const MethodInfo_4467270 **)(*(_QWORD *)(v49[4] + 192LL) + 112LL));
  }
  else
  {
    v19->fields._size = v50 + 1;
    v48->m_Items[v50] = (int)data;
  }
  data = (BattleData_o *)DataVals__GetParam(baseVals, 62, 0, 0);
  v55 = v19->fields._items;
  v56 = Method_System_Collections_Generic_List_int__Add__;
  ++v19->fields._version;
  if ( !v55 )
    goto LABEL_124;
  v57 = v19->fields._size;
  if ( (unsigned int)v57 >= LODWORD(v55->max_length) )
  {
    System_Collections_Generic_List_int___AddWithResize(
      v19,
      (int32_t)data,
      *(const MethodInfo_4467270 **)(*(_QWORD *)(v56[4] + 192LL) + 112LL));
  }
  else
  {
    v19->fields._size = v57 + 1;
    v55->m_Items[v57] = (int)data;
  }
  data = (BattleData_o *)DataVals__GetParam(baseVals, 63, 0, 0);
  v58 = v19->fields._items;
  v59 = Method_System_Collections_Generic_List_int__Add__;
  ++v19->fields._version;
  if ( !v58 )
    goto LABEL_124;
  v60 = v19->fields._size;
  if ( (unsigned int)v60 >= LODWORD(v58->max_length) )
  {
    System_Collections_Generic_List_int___AddWithResize(
      v19,
      (int32_t)data,
      *(const MethodInfo_4467270 **)(*(_QWORD *)(v59[4] + 192LL) + 112LL));
  }
  else
  {
    v19->fields._size = v60 + 1;
    v58->m_Items[v60] = (int)data;
  }
  data = (BattleData_o *)DataVals__GetParam(baseVals, 4, 0, 0);
  v62 = v19->fields._items;
  v63 = Method_System_Collections_Generic_List_int__Add__;
  ++v19->fields._version;
  if ( !v62 )
    goto LABEL_124;
  v64 = v19->fields._size;
  if ( (unsigned int)v64 >= LODWORD(v62->max_length) )
  {
    System_Collections_Generic_List_int___AddWithResize(
      v19,
      (int32_t)data,
      *(const MethodInfo_4467270 **)(*(_QWORD *)(v63[4] + 192LL) + 112LL));
  }
  else
  {
    v19->fields._size = v64 + 1;
    v62->m_Items[v64] = (int)data;
  }
  data = (BattleData_o *)DataVals__GetParam(baseVals, 6, 0, 0);
  v65 = v19->fields._items;
  v66 = Method_System_Collections_Generic_List_int__Add__;
  ++v19->fields._version;
  if ( !v65 )
    goto LABEL_124;
  v67 = v19->fields._size;
  if ( (unsigned int)v67 >= LODWORD(v65->max_length) )
  {
    System_Collections_Generic_List_int___AddWithResize(
      v19,
      (int32_t)data,
      *(const MethodInfo_4467270 **)(*(_QWORD *)(v66[4] + 192LL) + 112LL));
  }
  else
  {
    v19->fields._size = v67 + 1;
    v65->m_Items[v67] = (int)data;
  }
  buffIndv = DataVals__GetTargetList(baseVals, 0);
  v68 = (System_Array_o *)sub_2213B20(DataVals_OverChargeState___TypeInfo, 3);
  System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray_76340728(
    v68,
    (System_RuntimeFieldHandle_o)Field__PrivateImplementationDetails__44BE0EBF7C907BA44AD83314C6AD0AA399AD5B73911C129D2CD6A85D4A056C90,
    0);
  DataVals__UpdateOverChargeEachFunc(baseVals, (DataVals_OverChargeState_array *)v68, 0);
  v69 = DataVals__IsOverChargeState(baseVals, 2, 0) || DataVals__IsOverChargeState(baseVals, 8, 0);
  v23 = 0;
  v28 = 0;
  TargetRarityList = 0;
  v24 = !DataVals__IsOverChargeState(baseVals, 1, 0) && v69;
  v31 = (__int64)buffIndv;
LABEL_98:
  NPFixedDamageValue = DataVals__GetNPFixedDamageValue(baseVals, 0);
  damageProcessArgs = (BattleLogic_DamageProcessArgs_o *)sub_2213CCC(BattleLogic_DamageProcessArgs_TypeInfo);
  BattleLogic_DamageProcessArgs___ctor(damageProcessArgs, 0, NPFixedDamageValue, (System_Int32_array_array *)v23, 0);
  if ( (unsigned int)(type - 13) <= 1 )
  {
    Value = DataVals__GetValue(baseVals, 0);
    if ( type == 13 )
    {
      data = (BattleData_o *)ServantData;
      if ( !ServantData )
        goto LABEL_124;
      data = (BattleData_o *)BattleServantData__getMaxHp(ServantData, 0);
    }
    else
    {
      data = (BattleData_o *)ServantData;
      if ( !ServantData )
        goto LABEL_124;
      data = (BattleData_o *)((__int64 (__fastcall *)(BattleServantData_o *, const MethodInfo *))ServantData->klass->vtable._13_get_resultHp.methodPtr)(
                               ServantData,
                               ServantData->klass->vtable._13_get_resultHp.method);
    }
    v79 = (int)data;
    v16 = 0;
    if ( Value >= 1 && (int)data >= 1 )
    {
      data = (BattleData_o *)System_Math_TypeInfo;
      if ( !*(&System_Math_TypeInfo->_2.cctor_finished + 1) )
        j_il2cpp_runtime_class_init_0(System_Math_TypeInfo, 0);
      v80 = (double)Value * (double)v79 / 1000.0;
      v81 = vcvtpd_s64_f64(v80);
      v82 = ceil(v80);
      v83 = v81 & ~(v81 >> 63);
      if ( v83 >= 0x7FFFFFFF )
        LODWORD(v83) = 0x7FFFFFFF;
      if ( v82 == INFINITY )
        v16 = 0;
      else
        v16 = (unsigned int)v83;
    }
    if ( damageProcessArgs )
    {
      BattleLogic_DamageProcessArgs__OverwriteFixedDamage(damageProcessArgs, v16, 0);
      v84 = v19->fields._items;
      v85 = v19->fields._version + 2;
      v86 = Method_System_Collections_Generic_List_int__Add__;
      v19->fields._size = 0;
      v19->fields._version = v85;
      if ( v84 )
      {
        if ( LODWORD(v84->max_length) )
        {
          v19->fields._size = 1;
          v84->m_Items[0] = 0;
        }
        else
        {
          System_Collections_Generic_List_int___AddWithResize(
            v19,
            0,
            *(const MethodInfo_4467270 **)(*(_QWORD *)(v86[4] + 192LL) + 112LL));
        }
        goto LABEL_118;
      }
    }
LABEL_124:
    sub_2213CDC(data, v16);
  }
LABEL_118:
  logic = v96->fields.logic;
  v88 = System_Collections_Generic_List_int___ToArray(
          v19,
          (const MethodInfo_4468CF0 *)Method_System_Collections_Generic_List_int__ToArray__);
  IsIncludeIgnoreIndividuality = DataVals__IsIncludeIgnoreIndividuality(baseVals, 0);
  data = (BattleData_o *)DataVals__isParam(baseVals, 94, 0);
  if ( !logic )
    goto LABEL_124;
  data = (BattleData_o *)BattleLogic__getFunctionNpDamagelist(
                           logic,
                           v97,
                           ServantData,
                           v88,
                           funcIndexa,
                           type,
                           actiona,
                           (System_Int32_array *)v31,
                           buffIndv,
                           TargetRarityList,
                           IsIncludeIgnoreIndividuality,
                           (unsigned __int8)data & 1,
                           damageProcessArgs,
                           0);
  v90 = type - 3;
  v91 = (BattleActionData_DamageData_o *)data;
  if ( v90 <= 7 )
    v24 |= 0x93u >> v90;
  if ( !data )
    goto LABEL_124;
  BattleActionData_DamageData__addAttackSideEffectAction((BattleActionData_DamageData_o *)data, 80, 0);
  if ( !v93 )
    goto LABEL_124;
  BattleActionData__setDamageData(v93, v91, baseVals, v24 & 1, v28, 0);
  return v93;
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
  struct BattleLogicFunction___c_StaticFields *static_fields; // x8
  System_Action_object__o *_9__103_0; // x22
  Il2CppObject *v14; // x23
  struct BattleLogicFunction___c_StaticFields *v15; // x0
  System_String_o *v16; // x2
  System_String_o *v17; // x3
  int32_t v18; // w4
  int32_t v19; // w5
  bool v20; // w6
  bool v21; // w7
  struct BattleData_o *v22; // x8
  System_Collections_Generic_List_object__o *v23; // x21
  struct BattleLogicFunction___c_StaticFields *v24; // x8
  System_Comparison_T__o *_9__103_1; // x22
  Il2CppObject *v26; // x23
  struct BattleLogicFunction___c_StaticFields *v27; // x0
  System_String_o *v28; // x2
  System_String_o *v29; // x3
  int32_t v30; // w4
  int32_t v31; // w5
  bool v32; // w6
  bool v33; // w7
  struct BattleData_o *v34; // x8
  int v35; // w8
  unsigned int *v36; // x21
  int v37; // w23
  BattleServantData_o *v38; // x22
  unsigned __int64 v39; // x24
  __int64 v40; // x8
  unsigned __int64 v41; // x9
  unsigned __int64 v42; // x9
  BattleServantData_o *v43; // x22
  bool isAlive; // w8
  __int64 v45; // x8
  BattleLogicTask_c *v46; // x0
  BattleLogicTask_o *v47; // x21

  if ( (byte_5973BC6 & 1) == 0 )
  {
    sub_2213A60(&System_Action_BattleServantData__TypeInfo);
    sub_2213A60(&BattleActionData_TypeInfo);
    sub_2213A60(&BattleLogicTask_TypeInfo);
    sub_2213A60(&System_Comparison_BattleServantData__TypeInfo);
    sub_2213A60(&Method_System_Collections_Generic_List_BattleServantData__ForEach__);
    sub_2213A60(&Method_System_Collections_Generic_List_BattleServantData__Sort__);
    sub_2213A60(&Method_System_Collections_Generic_List_BattleServantData__ToArray__);
    sub_2213A60(&Method_BattleLogicFunction___c__functionPtShuffle_b__103_0__);
    sub_2213A60(&Method_BattleLogicFunction___c__functionPtShuffle_b__103_1__);
    sub_2213A60(&BattleLogicFunction___c_TypeInfo);
    byte_5973BC6 = 1;
  }
  v7 = (BattleActionData_o *)sub_2213CCC(BattleActionData_TypeInfo);
  BattleActionData___ctor(v7, 0);
  data = this->fields.data;
  if ( !data )
    goto LABEL_46;
  BattleData__SubBuffFromPT_52954552((BattleData_o *)data, 0, 0);
  data = this->fields.data;
  if ( !data )
    goto LABEL_46;
  BattleData__SubBuffExitSvt((BattleData_o *)data, 0, 0);
  v10 = this->fields.data;
  if ( !v10 )
    goto LABEL_46;
  player_datalist = (System_Collections_Generic_List_object__o *)v10->fields.player_datalist;
  data = BattleLogicFunction___c_TypeInfo;
  if ( !*(&BattleLogicFunction___c_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(BattleLogicFunction___c_TypeInfo, v8);
    data = BattleLogicFunction___c_TypeInfo;
  }
  static_fields = (struct BattleLogicFunction___c_StaticFields *)*((_QWORD *)data + 23);
  _9__103_0 = (System_Action_object__o *)static_fields->__9__103_0;
  if ( !_9__103_0 )
  {
    if ( !*((_DWORD *)data + 57) )
    {
      j_il2cpp_runtime_class_init_0(data, v8);
      static_fields = BattleLogicFunction___c_TypeInfo->static_fields;
    }
    v14 = (Il2CppObject *)static_fields->__9;
    _9__103_0 = (System_Action_object__o *)sub_2213CCC(System_Action_BattleServantData__TypeInfo);
    System_Action_object____ctor(_9__103_0, v14, Method_BattleLogicFunction___c__functionPtShuffle_b__103_0__, 0);
    v15 = BattleLogicFunction___c_TypeInfo->static_fields;
    v15->__9__103_0 = (struct System_Action_BattleServantData__o *)_9__103_0;
    sub_2213A04((MissionNaviTransitionBoardItem_o *)&v15->__9__103_0, (int32_t)_9__103_0, v16, v17, v18, v19, v20, v21);
  }
  if ( !player_datalist )
    goto LABEL_46;
  System_Collections_Generic_List_object___ForEach(
    player_datalist,
    (System_Action_T__o *)_9__103_0,
    (const MethodInfo_4484684 *)Method_System_Collections_Generic_List_BattleServantData__ForEach__);
  v22 = this->fields.data;
  if ( !v22 )
    goto LABEL_46;
  data = BattleLogicFunction___c_TypeInfo;
  v23 = (System_Collections_Generic_List_object__o *)v22->fields.player_datalist;
  if ( !*(&BattleLogicFunction___c_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(BattleLogicFunction___c_TypeInfo, v8);
    data = BattleLogicFunction___c_TypeInfo;
  }
  v24 = (struct BattleLogicFunction___c_StaticFields *)*((_QWORD *)data + 23);
  _9__103_1 = (System_Comparison_T__o *)v24->__9__103_1;
  if ( !_9__103_1 )
  {
    if ( !*((_DWORD *)data + 57) )
    {
      j_il2cpp_runtime_class_init_0(data, v8);
      v24 = BattleLogicFunction___c_TypeInfo->static_fields;
    }
    v26 = (Il2CppObject *)v24->__9;
    _9__103_1 = (System_Comparison_T__o *)sub_2213CCC(System_Comparison_BattleServantData__TypeInfo);
    System_Comparison_object____ctor(_9__103_1, v26, Method_BattleLogicFunction___c__functionPtShuffle_b__103_1__, 0);
    v27 = BattleLogicFunction___c_TypeInfo->static_fields;
    v27->__9__103_1 = (struct System_Comparison_BattleServantData__o *)_9__103_1;
    sub_2213A04((MissionNaviTransitionBoardItem_o *)&v27->__9__103_1, (int32_t)_9__103_1, v28, v29, v30, v31, v32, v33);
  }
  if ( !v23 )
    goto LABEL_46;
  System_Collections_Generic_List_object___Sort_71849708(
    v23,
    _9__103_1,
    (const MethodInfo_44856EC *)Method_System_Collections_Generic_List_BattleServantData__Sort__);
  v34 = this->fields.data;
  if ( !v34 )
    goto LABEL_46;
  data = v34->fields.player_datalist;
  if ( !data )
    goto LABEL_46;
  data = System_Collections_Generic_List_object___ToArray(
           (System_Collections_Generic_List_object__o *)data,
           (const MethodInfo_4485784 *)Method_System_Collections_Generic_List_BattleServantData__ToArray__);
  if ( !data )
    goto LABEL_46;
  v35 = *((_DWORD *)data + 6);
  v36 = (unsigned int *)data;
  if ( v35 >= 1 )
  {
    v37 = 0;
    while ( 1 )
    {
      if ( v37 >= (unsigned int)v35 )
LABEL_53:
        sub_2213CE4(data);
      v38 = *(BattleServantData_o **)&v36[2 * v37 + 8];
      if ( !v38 )
        break;
      if ( v38->fields.isEntry )
      {
        data = (void *)BattleServantData__isAlive(v38, 0, 0);
        if ( ((unsigned __int8)data & 1) != 0 )
          v38->fields.isEntry = 0;
      }
      v35 = v36[6];
      v38->fields.deckIndex = v37++;
      if ( v37 >= v35 )
        goto LABEL_32;
    }
LABEL_46:
    sub_2213CDC(data, v8);
  }
LABEL_32:
  data = this->fields.data;
  if ( !data )
    goto LABEL_46;
  v39 = 0;
  while ( 1 )
  {
    v40 = *((_QWORD *)data + 39);
    if ( !v40 )
      goto LABEL_46;
    v41 = *(unsigned int *)(v40 + 24);
    if ( (__int64)v39 >= (int)v41 )
      break;
    if ( v39 >= v41 )
      goto LABEL_53;
    v42 = v36[6];
    *(_DWORD *)(v40 + 4 * v39 + 32) = -1;
    if ( (__int64)v39 < (int)v42 )
    {
      if ( v39 >= v42 )
        goto LABEL_53;
      v43 = *(BattleServantData_o **)&v36[2 * v39 + 8];
      if ( !v43 )
        goto LABEL_46;
      isAlive = BattleServantData__isAlive(*(BattleServantData_o **)&v36[2 * v39 + 8], 0, 0);
      data = this->fields.data;
      if ( isAlive )
      {
        if ( !data )
          goto LABEL_46;
        v45 = *((_QWORD *)data + 39);
        if ( !v45 )
          goto LABEL_46;
        if ( v39 >= *(unsigned int *)(v45 + 24) )
          goto LABEL_53;
        *(_DWORD *)(v45 + 4 * v39 + 32) = v43->fields.uniqueId;
        BattleServantData__SetEntry(v43, 1, 0, 0);
        data = this->fields.data;
        v43->fields.flgEntryFunction = 1;
      }
    }
    ++v39;
    if ( !data )
      goto LABEL_46;
  }
  BattleData__createCommandCard((BattleData_o *)data, 0);
  data = this->fields.data;
  if ( !data )
    goto LABEL_46;
  BattleData__shuffleCommand((BattleData_o *)data, 0);
  data = this->fields.logic;
  if ( !data )
    goto LABEL_46;
  BattleLogic__drawCommand((BattleLogic_o *)data, 0);
  if ( !v7 )
    goto LABEL_46;
  v46 = BattleLogicTask_TypeInfo;
  v7->fields.redrawCommandCard = 1;
  v47 = (BattleLogicTask_o *)sub_2213CCC(v46);
  BattleLogicTask___ctor(v47, 0);
  if ( !v47 )
    goto LABEL_46;
  BattleLogicTask__setCheckEntryFunction(v47, 0);
  data = this->fields.logic;
  if ( !data )
    goto LABEL_46;
  BattleLogic__AddBattleLogicTask((BattleLogic_o *)data, v47, 0);
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
  Il2CppClass *v22; // x0
  __int64 v23; // x0
  System_String_o *v24; // x2
  System_String_o *v25; // x3
  int32_t v26; // w4
  int32_t v27; // w5
  bool v28; // w6
  bool v29; // w7
  __int64 v30; // x0
  System_String_o *v31; // x2
  System_String_o *v32; // x3
  int32_t v33; // w4
  int32_t v34; // w5
  bool v35; // w6
  bool v36; // w7
  System_String_o *v37; // x2
  System_String_o *v38; // x3
  int32_t v39; // w4
  int32_t v40; // w5
  bool v41; // w6
  bool v42; // w7
  __int64 v43; // x0
  System_String_o *v44; // x2
  System_String_o *v45; // x3
  int32_t v46; // w4
  int32_t v47; // w5
  bool v48; // w6
  bool v49; // w7
  __int64 v50; // x0
  System_String_o *v51; // x2
  System_String_o *v52; // x3
  int32_t v53; // w4
  int32_t v54; // w5
  bool v55; // w6
  bool v56; // w7
  __int64 v57; // x0
  System_String_o *v58; // x2
  System_String_o *v59; // x3
  int32_t v60; // w4
  int32_t v61; // w5
  bool v62; // w6
  bool v63; // w7
  struct BattleData_o *v64; // x8
  int32_t uniqueId; // w21
  int32_t v66; // w22
  bool IsOpponentPTUniqueID; // w0

  if ( (byte_5973BC4 & 1) == 0 )
  {
    sub_2213A60(&BattleActionData_TypeInfo);
    sub_2213A60(&BattleActionData_DamageData_TypeInfo);
    sub_2213A60(&int___TypeInfo);
    sub_2213A60(&BattleBuffData_ShowBuffData___TypeInfo);
    byte_5973BC4 = 1;
  }
  v11 = (BattleActionData_o *)sub_2213CCC(BattleActionData_TypeInfo);
  BattleActionData___ctor(v11, 0);
  data = (__int64)this->fields.data;
  if ( !data )
    goto LABEL_28;
  data = (__int64)BattleData__getServantData((BattleData_o *)data, playerId, 0);
  if ( !this->fields.data )
    goto LABEL_28;
  v14 = (BattleServantData_o *)data;
  ServantData = BattleData__getServantData(this->fields.data, targetId, 0);
  v16 = sub_2213CCC(BattleActionData_DamageData_TypeInfo);
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
  *(_DWORD *)(v16 + 48) = targetId;
  *(_DWORD *)(v16 + 16) = funcIndex;
  *(_WORD *)(v16 + 52) = 0;
  *(_BYTE *)(v16 + 54) = 0;
  v22 = BattleBuffData_ShowBuffData___TypeInfo;
  *(_DWORD *)(v16 + 56) = 0;
  *(_BYTE *)(v16 + 60) = 0;
  v23 = sub_2213B20(v22, 0);
  *(_QWORD *)(v16 + 80) = v23;
  sub_2213A04((MissionNaviTransitionBoardItem_o *)(v16 + 80), v23, v24, v25, v26, v27, v28, v29);
  v30 = sub_2213B20(BattleBuffData_ShowBuffData___TypeInfo, 0);
  *(_QWORD *)(v16 + 88) = v30;
  sub_2213A04((MissionNaviTransitionBoardItem_o *)(v16 + 88), v30, v31, v32, v33, v34, v35, v36);
  data = sub_2213B20(int___TypeInfo, 1);
  if ( !data )
    goto LABEL_28;
  if ( !*(_DWORD *)(data + 24) )
    sub_2213CE4(data);
  *(_DWORD *)(data + 32) = v19;
  *(_QWORD *)(v16 + 112) = data;
  sub_2213A04((MissionNaviTransitionBoardItem_o *)(v16 + 112), data, v37, v38, v39, v40, v41, v42);
  BattleServantData__CacheDealtDamage(v14, (BattleActionData_DamageData_o *)v16, 0);
  v43 = sub_2213B20(int___TypeInfo, 0);
  *(_QWORD *)(v16 + 120) = v43;
  sub_2213A04((MissionNaviTransitionBoardItem_o *)(v16 + 120), v43, v44, v45, v46, v47, v48, v49);
  v50 = sub_2213B20(int___TypeInfo, 0);
  *(_QWORD *)(v16 + 128) = v50;
  sub_2213A04((MissionNaviTransitionBoardItem_o *)(v16 + 128), v50, v51, v52, v53, v54, v55, v56);
  v57 = sub_2213B20(int___TypeInfo, 0);
  *(_QWORD *)(v16 + 136) = v57;
  sub_2213A04((MissionNaviTransitionBoardItem_o *)(v16 + 136), v57, v58, v59, v60, v61, v62, v63);
  if ( !ServantData )
    goto LABEL_28;
  BattleServantData__provisionalDamage(ServantData, v19, 0);
  BattleServantData__ResultDamage(ServantData, v19, v14, 0, 0, 0, 0);
  data = BattleServantData__isLogicResultAlive(ServantData, 0);
  if ( (data & 1) == 0 )
  {
    v64 = this->fields.data;
    if ( !v64 )
      goto LABEL_28;
    ServantData->fields.deadTurn = v64->fields.typeTurn;
  }
  BattleActionData_DamageData__addAttackSideEffectAction((BattleActionData_DamageData_o *)v16, 80, 0);
  if ( !v11
    || (BattleActionData__SetFuncDamageData(v11, (BattleActionData_DamageData_o *)v16, baseVals, 0),
        (data = (__int64)this->fields.data) == 0) )
  {
LABEL_28:
    sub_2213CDC(data, v12);
  }
  uniqueId = v14->fields.uniqueId;
  v66 = *(_DWORD *)(data + 204);
  IsOpponentPTUniqueID = BattleData__IsOpponentPTUniqueID((BattleData_o *)data, targetId, playerId, 0);
  BattleServantData__setActionHistory(ServantData, uniqueId, 6, v66, IsOpponentPTUniqueID, 0);
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
  struct BattleLogicFunction___c_StaticFields *static_fields; // x8
  System_Func_object__bool__o *_9__95_0; // x22
  Il2CppObject *v15; // x25
  struct BattleLogicFunction___c_StaticFields *v16; // x0
  System_String_o *v17; // x2
  System_String_o *v18; // x3
  int32_t v19; // w4
  int32_t v20; // w5
  bool v21; // w6
  bool v22; // w7
  BattleActionData_o *v23; // x21
  int32_t Param; // w25
  int32_t v25; // w22
  BattleServantData_o *EnemyServantData; // x25
  BattleServantData_o *EnemyServantDataFromNpcId; // x22
  int32_t v28; // w8
  int v29; // w8
  struct System_Int32_array *e_entryid; // x9
  int max_length; // w9
  struct System_Int32_array *v32; // x9
  BattleActionData_o *result; // x0
  int DeckIndex; // w23
  struct BattleData_o *v35; // x8
  struct System_Int32_array *v36; // x9
  il2cpp_array_size_t v37; // x10
  int32_t v38; // w24
  int32_t uniqueId; // w11
  __int64 v40; // x8
  __int64 v41; // x10
  int32_t *m_Items; // x9
  struct System_Int32_array *v43; // x10
  il2cpp_array_size_t v44; // x9
  __int64 v45; // x8
  __int64 v46; // x9
  int32_t *v47; // x10
  const MethodInfo *v48; // x1

  if ( (byte_5973BBE & 1) == 0 )
  {
    sub_2213A60(&BattleActionData_TypeInfo);
    sub_2213A60(&Method_System_Linq_Enumerable_Count_BattleServantData____91751056);
    sub_2213A60(&System_Func_BattleServantData__bool__TypeInfo);
    sub_2213A60(&Method_BattleLogicFunction___c__functionReplaceEnemyMember_b__95_0__);
    sub_2213A60(&BattleLogicFunction___c_TypeInfo);
    byte_5973BBE = 1;
  }
  data = this->fields.data;
  if ( !data )
    goto LABEL_63;
  data = (BattleData_o *)BattleData__getAliveFieldEnemyServantIDList(data, 0, 0);
  v9 = this->fields.data;
  if ( !v9 )
    goto LABEL_63;
  v10 = data;
  enemy_datalist = (System_Collections_Generic_IEnumerable_TSource__o *)v9->fields.enemy_datalist;
  v12 = BattleLogicFunction___c_TypeInfo;
  if ( !*(&BattleLogicFunction___c_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(BattleLogicFunction___c_TypeInfo, funcEnt);
    v12 = BattleLogicFunction___c_TypeInfo;
  }
  static_fields = v12->static_fields;
  _9__95_0 = (System_Func_object__bool__o *)static_fields->__9__95_0;
  if ( !_9__95_0 )
  {
    if ( !*(&v12->_2.cctor_finished + 1) )
    {
      j_il2cpp_runtime_class_init_0(v12, funcEnt);
      static_fields = BattleLogicFunction___c_TypeInfo->static_fields;
    }
    v15 = (Il2CppObject *)static_fields->__9;
    _9__95_0 = (System_Func_object__bool__o *)sub_2213CCC(System_Func_BattleServantData__bool__TypeInfo);
    System_Func_object__bool____ctor(
      _9__95_0,
      v15,
      Method_BattleLogicFunction___c__functionReplaceEnemyMember_b__95_0__,
      0);
    v16 = BattleLogicFunction___c_TypeInfo->static_fields;
    v16->__9__95_0 = (struct System_Func_BattleServantData__bool__o *)_9__95_0;
    sub_2213A04((MissionNaviTransitionBoardItem_o *)&v16->__9__95_0, (int32_t)_9__95_0, v17, v18, v19, v20, v21, v22);
  }
  data = (BattleData_o *)System_Linq_Enumerable__Count_object__59223900(
                           enemy_datalist,
                           (System_Func_TSource__bool__o *)_9__95_0,
                           (const MethodInfo_387AF5C *)Method_System_Linq_Enumerable_Count_BattleServantData____91751056);
  if ( (int)data < 4 )
    return 0;
  if ( !v10 )
    goto LABEL_63;
  if ( !v10->fields.m_CancellationTokenSource )
    return 0;
  v23 = (BattleActionData_o *)sub_2213CCC(BattleActionData_TypeInfo);
  BattleActionData___ctor(v23, 0);
  if ( !baseVals )
    goto LABEL_63;
  Param = DataVals__GetParam(baseVals, 49, 0, 0);
  data = (BattleData_o *)DataVals__GetParam(baseVals, 50, 0, 0);
  if ( !this->fields.data )
    goto LABEL_63;
  v25 = (int)data;
  data = (BattleData_o *)BattleData__getEnemyServantDataFromNpcId(this->fields.data, Param, 0);
  if ( !this->fields.data )
    goto LABEL_63;
  EnemyServantData = (BattleServantData_o *)data;
  EnemyServantDataFromNpcId = BattleData__getEnemyServantDataFromNpcId(this->fields.data, v25, 0);
  if ( !EnemyServantData )
  {
    v28 = DataVals__GetParam(baseVals, 51, 0, 0);
    data = this->fields.data;
    v29 = v28 - 1;
    if ( v29 < 0 )
    {
      if ( !data )
        goto LABEL_63;
      v29 = 0;
    }
    else
    {
      if ( !data )
        goto LABEL_63;
      e_entryid = data->fields.e_entryid;
      if ( !e_entryid )
        goto LABEL_63;
      max_length = e_entryid->max_length;
      if ( v29 >= max_length )
        v29 = max_length - 1;
    }
    v32 = data->fields.e_entryid;
    if ( !v32 )
      goto LABEL_63;
    if ( (unsigned int)v29 >= LODWORD(v32->max_length) )
      goto LABEL_64;
    data = (BattleData_o *)BattleData__getEnemyServantData(data, v32->m_Items[v29], 0);
    if ( !data )
      goto LABEL_63;
    EnemyServantData = (BattleServantData_o *)data;
    data = (BattleData_o *)BattleServantData__isDead((BattleServantData_o *)data, 0);
    if ( ((unsigned __int8)data & 1) != 0 )
    {
      if ( !LODWORD(v10->fields.m_CancellationTokenSource) )
        goto LABEL_64;
      data = this->fields.data;
      if ( !data )
        goto LABEL_63;
      EnemyServantData = BattleData__getEnemyServantData(data, (int32_t)v10->fields.rootfsm, 0);
    }
  }
  if ( !EnemyServantDataFromNpcId )
  {
    data = this->fields.data;
    if ( !data )
      goto LABEL_63;
    EnemyServantDataFromNpcId = BattleData__getEnemySubBackServantData(data, 0);
  }
  result = 0;
  if ( EnemyServantData && EnemyServantDataFromNpcId )
  {
    if ( !EnemyServantData->fields.isEntry || EnemyServantDataFromNpcId->fields.isEntry )
      return 0;
    DeckIndex = BattleServantData__getDeckIndex(EnemyServantData, 0);
    data = (BattleData_o *)BattleServantData__getDeckIndex(EnemyServantDataFromNpcId, 0);
    v35 = this->fields.data;
    if ( v35 )
    {
      v36 = v35->fields.e_entryid;
      if ( v36 )
      {
        v37 = v36->max_length;
        v38 = (int)data;
        if ( DeckIndex >= (int)v37 )
          goto LABEL_47;
        if ( DeckIndex >= (unsigned int)v37 )
          goto LABEL_64;
        if ( v36->m_Items[DeckIndex] == EnemyServantData->fields.uniqueId )
        {
          EnemyServantData->fields.deckIndex = (int)data;
          EnemyServantDataFromNpcId->fields.deckIndex = DeckIndex;
        }
        else
        {
LABEL_47:
          if ( (int)v37 >= 1 )
          {
            uniqueId = EnemyServantData->fields.uniqueId;
            v40 = 0;
            v41 = (unsigned int)v36->max_length;
            m_Items = v36->m_Items;
            do
            {
              if ( m_Items[v40] == uniqueId )
                EnemyServantData->fields.deckIndex = v40;
              ++v40;
            }
            while ( v41 != v40 );
          }
          data = (BattleData_o *)BattleServantData__getDeckIndex(EnemyServantData, 0);
          v35 = this->fields.data;
          EnemyServantData->fields.deckIndex = v38;
          EnemyServantDataFromNpcId->fields.deckIndex = (int)data;
          if ( !v35 )
            goto LABEL_63;
          DeckIndex = (int)data;
        }
        v43 = v35->fields.e_entryid;
        if ( v43 )
        {
          v44 = v43->max_length;
          if ( (int)v44 >= 1 )
          {
            v45 = (unsigned int)v44 & ~((int)v44 >> 31);
            v46 = (unsigned int)v43->max_length;
            v47 = v43->m_Items;
            while ( v46 )
            {
              if ( *v47 == EnemyServantData->fields.uniqueId )
                *v47 = EnemyServantDataFromNpcId->fields.uniqueId;
              --v45;
              ++v47;
              --v46;
              if ( !v45 )
                goto LABEL_61;
            }
LABEL_64:
            sub_2213CE4(data);
          }
LABEL_61:
          if ( v23 )
          {
            BattleActionData__setReplaceMember(
              v23,
              DeckIndex,
              EnemyServantDataFromNpcId->fields.uniqueId,
              EnemyServantData->fields.uniqueId,
              funcIndex,
              0);
            BattleLogicFunction__UpdateCondBuffValueFlagInCurrentContext(this, v48);
            return v23;
          }
        }
      }
    }
LABEL_63:
    sub_2213CDC(data, funcEnt);
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
  il2cpp_array_size_t max_length; // x10
  int32_t v20; // w25
  int32_t uniqueId; // w11
  __int64 v22; // x8
  __int64 v23; // x10
  int32_t *m_Items; // x9
  struct System_Int32_array *v25; // x10
  il2cpp_array_size_t v26; // x9
  __int64 v27; // x8
  __int64 v28; // x9
  int32_t *v29; // x10
  const MethodInfo *v30; // x1

  if ( (byte_5973BBD & 1) == 0 )
  {
    sub_2213A60(&BattleActionData_TypeInfo);
    byte_5973BBD = 1;
  }
  v11 = (BattleActionData_o *)sub_2213CCC(BattleActionData_TypeInfo);
  BattleActionData___ctor(v11, 0);
  data = this->fields.data;
  if ( !data )
    goto LABEL_32;
  data = (BattleData_o *)BattleData__getServantData(data, targetId, 0);
  if ( !this->fields.data )
    goto LABEL_32;
  v14 = (BattleServantData_o *)data;
  data = (BattleData_o *)BattleData__getServantData(this->fields.data, subTargetId, 0);
  if ( !v14 )
    goto LABEL_32;
  v15 = (BattleServantData_o *)data;
  data = (BattleData_o *)BattleServantData__getDeckIndex(v14, 0);
  if ( !v15 )
    goto LABEL_32;
  v16 = (int)data;
  data = (BattleData_o *)BattleServantData__getDeckIndex(v15, 0);
  v17 = this->fields.data;
  if ( !v17 )
    goto LABEL_32;
  p_entryid = v17->fields.p_entryid;
  if ( !p_entryid )
    goto LABEL_32;
  max_length = p_entryid->max_length;
  v20 = (int)data;
  if ( v16 >= (int)max_length )
    goto LABEL_35;
  if ( v16 >= (unsigned int)max_length )
    goto LABEL_31;
  if ( p_entryid->m_Items[v16] == v14->fields.uniqueId )
  {
    v14->fields.deckIndex = (int)data;
    v15->fields.deckIndex = v16;
  }
  else
  {
LABEL_35:
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
      goto LABEL_32;
    v16 = (int)data;
  }
  v25 = v17->fields.p_entryid;
  if ( !v25 )
    goto LABEL_32;
  v26 = v25->max_length;
  if ( (int)v26 >= 1 )
  {
    v27 = (unsigned int)v26 & ~((int)v26 >> 31);
    v28 = (unsigned int)v25->max_length;
    v29 = v25->m_Items;
    while ( v28 )
    {
      if ( *v29 == v14->fields.uniqueId )
        *v29 = v15->fields.uniqueId;
      --v27;
      ++v29;
      --v28;
      if ( !v27 )
        goto LABEL_27;
    }
LABEL_31:
    sub_2213CE4(data);
  }
LABEL_27:
  if ( !v11
    || (BattleActionData__setReplaceMember(v11, v16, v15->fields.uniqueId, v14->fields.uniqueId, funcIndex, 0),
        data = this->fields.data,
        v11->fields.redrawCommandCard = 1,
        !data)
    || (BattleData__SubBuffFromPT_52954552(data, v15, 0), (data = this->fields.data) == 0) )
  {
LABEL_32:
    sub_2213CDC(data, v12);
  }
  BattleData__SubBuffExitSvt(data, v14, 0);
  BattleLogicFunction__UpdateCondBuffValueFlagInCurrentContext(this, v30);
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
  BattleActionData_o *v7; // x19
  __int64 v8; // x1
  BattleData_o *data; // x0

  if ( (byte_5973BBC & 1) == 0 )
  {
    sub_2213A60(&BattleActionData_TypeInfo);
    byte_5973BBC = 1;
  }
  v7 = (BattleActionData_o *)sub_2213CCC(BattleActionData_TypeInfo);
  BattleActionData___ctor(v7, 0);
  data = this->fields.data;
  if ( !data
    || (BattleData__SubBuffFromPT_52954552(data, 0, 0), (data = this->fields.data) == 0)
    || (BattleData__shuffleCommand(data, 0), (data = (BattleData_o *)this->fields.logic) == 0)
    || (BattleLogic__drawCommand((BattleLogic_o *)data, 0), (data = (BattleData_o *)this->fields.logic) == 0)
    || (BattleLogic__setDrawCard((BattleLogic_o *)data, 0), !v7) )
  {
    sub_2213CDC(data, v8);
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
  System_String_o *v23; // x2
  System_String_o *v24; // x3
  int32_t v25; // w4
  int32_t v26; // w5
  bool v27; // w6
  bool v28; // w7
  unsigned int uniqueId; // w8
  struct System_String_o *popupText; // x1
  struct System_Int32_array *effectList; // x1
  __int64 v32; // d0
  System_String_o *v33; // x2
  System_String_o *v34; // x3
  int32_t v35; // w4
  int32_t v36; // w5
  bool v37; // w6
  bool v38; // w7
  const MethodInfo *v39; // [xsp+8h] [xbp-58h]

  if ( (byte_5973BCA & 1) == 0 )
  {
    sub_2213A60(&BattleActionData_TypeInfo);
    sub_2213A60(&BattleActionData_BuffData_TypeInfo);
    byte_5973BCA = 1;
  }
  v13 = (BattleActionData_o *)sub_2213CCC(BattleActionData_TypeInfo);
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
    return BattleLogicFunction__getNoEffectObject(this, targetId, funcIdx, dataVals, isSideEffect, 0, 0, 0, 0, v39);
  if ( !dataVals )
    goto LABEL_22;
  maxhp = v16->fields.maxhp;
  if ( DataVals__GetValue2(dataVals, 0) < 1 )
    Value = DataVals__GetValue(dataVals, 0);
  else
    Value = maxhp * DataVals__GetValue2(dataVals, 0) / 1000;
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
  v22 = sub_2213CCC(BattleActionData_BuffData_TypeInfo);
  BattleActionData_BuffData___ctor((BattleActionData_BuffData_o *)v22, 0);
  if ( !v22 )
    goto LABEL_22;
  uniqueId = v16->fields.uniqueId;
  *(_DWORD *)(v22 + 16) = 0;
  *(_QWORD *)(v22 + 60) = uniqueId;
  if ( !funcEnt )
    goto LABEL_22;
  popupText = funcEnt->fields.popupText;
  *(_QWORD *)(v22 + 72) = popupText;
  sub_2213A04((MissionNaviTransitionBoardItem_o *)(v22 + 72), (int32_t)popupText, v23, v24, v25, v26, v27, v28);
  effectList = funcEnt->fields.effectList;
  v32 = *(_QWORD *)&funcEnt->fields.popupIconId;
  *(_QWORD *)(v22 + 96) = effectList;
  *(_QWORD *)(v22 + 80) = v32;
  sub_2213A04((MissionNaviTransitionBoardItem_o *)(v22 + 96), (int32_t)effectList, v33, v34, v35, v36, v37, v38);
  *(_DWORD *)(v22 + 48) = 2;
  if ( !v13 )
LABEL_22:
    sub_2213CDC(data, v14);
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
  __int64 v10; // x1
  int32_t v11; // w23
  __int64 v12; // x23
  System_String_o *v13; // x2
  System_String_o *v14; // x3
  int32_t v15; // w4
  int32_t v16; // w5
  bool v17; // w6
  bool v18; // w7
  int32_t targetId; // w8
  System_String_o *v20; // x1
  BattleData_o *data; // x22
  BattleActionData_SkillShiftServant_o *v22; // x21
  bool isOverwriteShift; // [xsp+4h] [xbp-4Ch] BYREF
  System_String_o *motionName; // [xsp+8h] [xbp-48h] BYREF

  v8 = this;
  if ( (byte_5973BD5 & 1) == 0 )
  {
    sub_2213A60(&BattleActionData_TypeInfo);
    sub_2213A60(&BattleActorControl_TypeInfo);
    this = (BattleLogicFunction_o *)sub_2213A60(&BattleActionData_SkillShiftServant_TypeInfo);
    byte_5973BD5 = 1;
  }
  motionName = 0;
  isOverwriteShift = 0;
  if ( !baseVals )
    goto LABEL_13;
  Param = DataVals__GetParam(baseVals, 55, 0, 0);
  v11 = DataVals__GetParam(baseVals, 236, 0, 0);
  if ( !*(&BattleActorControl_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(BattleActorControl_TypeInfo, v10);
  BattleActorControl__GetShiftMotionNameAndOverwriteFlag(v11, &motionName, &isOverwriteShift, 0);
  v12 = sub_2213CCC(BattleActionData_TypeInfo);
  BattleActionData___ctor((BattleActionData_o *)v12, 0);
  if ( !targetData )
    goto LABEL_13;
  if ( !v12 )
    goto LABEL_13;
  *(_DWORD *)(v12 + 32) = targetData->fields.uniqueId;
  if ( !actionData )
    goto LABEL_13;
  targetId = actionData->fields.targetId;
  v20 = motionName;
  *(_BYTE *)(v12 + 259) = 1;
  *(_DWORD *)(v12 + 36) = targetId;
  *(_QWORD *)(v12 + 72) = v20;
  sub_2213A04((MissionNaviTransitionBoardItem_o *)(v12 + 72), (int32_t)v20, v13, v14, v15, v16, v17, v18);
  *(_BYTE *)(v12 + 260) = isOverwriteShift;
  *(_BYTE *)(v12 + 261) = DataVals__GetParam(baseVals, 237, 0, 0) == 1;
  BattleActionData__setStateMotion((BattleActionData_o *)v12, 0);
  data = v8->fields.data;
  v22 = (BattleActionData_SkillShiftServant_o *)sub_2213CCC(BattleActionData_SkillShiftServant_TypeInfo);
  BattleActionData_SkillShiftServant___ctor(v22, data, Param, 0);
  if ( !v22 )
LABEL_13:
    sub_2213CDC(this, actionData);
  BattleActionData_ShiftServant__setBeforeSvtData((BattleActionData_ShiftServant_o *)v22, targetData, 0);
  if ( actionData->fields.isOverwriteShift )
    BattleActionData_ShiftServant__SetBeforeWeapon((BattleActionData_ShiftServant_o *)v22, targetData, 0);
  BattleActionData__setShiftServant((BattleActionData_o *)v12, (BattleActionData_ShiftServant_o *)v22, 0);
  BattleActionData__setShiftServant(actionData, (BattleActionData_ShiftServant_o *)v22, 0);
  BattleActionData__AddAfterActionData(actionData, (BattleActionData_o *)v12, 1, 0);
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
  int32_t Value2; // w24
  RemovedBuffInfo_o *v22; // x0
  System_String_o *v23; // x2
  System_String_o *v24; // x3
  int32_t v25; // w4
  int32_t v26; // w5
  bool v27; // w6
  bool v28; // w7
  struct System_Collections_Generic_List_BattleBuffData_BuffData__o *RemovedAllBuffList_k__BackingField; // x25
  BattleActionData_o *v30; // x24
  const MethodInfo *v31; // x1
  const MethodInfo *v33; // [xsp+8h] [xbp-78h]
  BattleLogicFunction_ProcListInArgs_o *v34; // [xsp+18h] [xbp-68h]

  if ( (byte_5973BB0 & 1) == 0 )
  {
    sub_2213A60(&BattleActionData_TypeInfo);
    sub_2213A60(&BattleServantSnapShotOnBuffUpdate_TypeInfo);
    sub_2213A60(&Method_System_Collections_Generic_List_BattleBuffData_BuffData__get_Count__);
    byte_5973BB0 = 1;
  }
  data = this->fields.data;
  if ( !data )
    goto LABEL_12;
  ServantData = BattleData__getServantData(data, targetId, 0);
  v18 = (BattleServantSnapShotOnBuffUpdate_o *)sub_2213CCC(BattleServantSnapShotOnBuffUpdate_TypeInfo);
  BattleServantSnapShotOnBuffUpdate___ctor(v18, ServantData, 0);
  if ( !funcEnt )
    goto LABEL_12;
  if ( !baseVals )
    goto LABEL_12;
  vals = funcEnt->fields.vals;
  Value = DataVals__GetValue(baseVals, 0);
  Value2 = DataVals__GetValue2(baseVals, 0);
  data = (BattleData_o *)DataVals__isParam(baseVals, 93, 0);
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
        sub_2213A04((MissionNaviTransitionBoardItem_o *)subBuffInfo, (int32_t)v22, v23, v24, v25, v26, v27, v28),
        !*subBuffInfo)
    || (RemovedAllBuffList_k__BackingField = (*subBuffInfo)->fields._RemovedAllBuffList_k__BackingField) == 0 )
  {
LABEL_12:
    sub_2213CDC(data, *(_QWORD *)&targetId);
  }
  if ( RemovedAllBuffList_k__BackingField->fields._size < 1 )
    return BattleLogicFunction__getNoEffectObject(this, targetId, index, baseVals, isCommandSideEffect, 0, 0, 0, 0, v33);
  v30 = (BattleActionData_o *)sub_2213CCC(BattleActionData_TypeInfo);
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
    v34,
    v33);
  BattleLogicFunction__UpdateCondBuffValueFlagInCurrentContext(this, v31);
  return v30;
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
  BattleLogicFunction___c__DisplayClass97_0_o *v11; // x19
  void *data; // x0
  __int64 v13; // x1
  BattleActionData_o *v14; // x24
  BattleServantData_o *v15; // x22
  int32_t Param; // w25
  int32_t v17; // w26
  struct BattleData_o *v18; // x8
  struct BattleData_o *v19; // x8
  BattleInfoData_o *battle_info; // x8
  BattleUserServantData_o *UserServantFromID; // x0
  __int64 v22; // x1
  __int64 v23; // x20
  __int64 v24; // x26
  __int64 v25; // x28
  BattleServantData_array *FieldAliveLogicServantArray; // x0
  __int64 v27; // x1
  BattleLogicFunction___c_c *v28; // x8
  BattleServantData_array *v29; // x27
  struct BattleLogicFunction___c_StaticFields *static_fields; // x9
  System_Func_object__object__o *_9__97_0; // x20
  Il2CppObject *v32; // x29
  struct BattleLogicFunction___c_StaticFields *v33; // x0
  System_String_o *v34; // x2
  System_String_o *v35; // x3
  int32_t v36; // w4
  int32_t v37; // w5
  bool v38; // w6
  bool v39; // w7
  BattleLogicFunctionUtilities_FunctionProgressCache_o *v40; // x29
  BattleLogicFunctionUtilities_FunctionProgressCache_SvtCache_o *ElemByUniqueId; // x19
  BattleLogicSkill_SkillExecArgs_o *v42; // x20
  struct BattleServantSnapShot_o *Before_k__BackingField; // x8
  struct BattleServantSnapShot_o *After_k__BackingField; // x1
  System_String_o *v45; // x2
  System_String_o *v46; // x3
  int32_t v47; // w4
  int32_t v48; // w5
  bool v49; // w6
  bool v50; // w7
  struct BattleServantSnapShot_o *v51; // x8
  __int64 naturalAligment; // x11
  BattleServantSnapShotShiftServant_o *v53; // x1
  struct BattleLogicFunctionUtilities_FunctionProgressCache_SvtCache_array *SvtCacheArray_k__BackingField; // x19
  int max_length; // w8
  __int64 v56; // x23
  BattleActionData_o *v57; // x27
  BattleLogicFunctionUtilities_FunctionProgressCache_SvtCache_o *v58; // x24
  struct BattleServantData_o *SvtData_k__BackingField; // x8
  int32_t uniqueId; // w20
  BattleActionData_BuffData_o *v61; // x25
  BattleServantSnapShot_o *v62; // x26
  BattleServantSnapShot_o *v63; // x28
  BattleActionEffect_AddSubChangeMaxHpBuff_o *v64; // x29
  struct BattleServantData_o *v65; // x8
  System_Collections_Generic_IEnumerable_TSource__o *buffdatalist; // x20
  System_Func_object__bool__o *v67; // x21
  struct BattleServantSnapShot_o *v68; // x8
  struct BattleData_o *v69; // x8
  BattleLogicFunctionUtilities_FunctionProgressCache_SvtCache_o *v71; // [xsp+0h] [xbp-90h]
  BattleLogicFunction_o *v72; // [xsp+10h] [xbp-80h]
  BattleLogicFunction_ProcListInArgs_o *v73; // [xsp+18h] [xbp-78h]
  BattleLogicFunction___c__DisplayClass97_0_o *v74; // [xsp+20h] [xbp-70h]
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v76; // 0:x0.16

  if ( (byte_5973BC0 & 1) == 0 )
  {
    sub_2213A60(&BattleActionEffect_AddSubChangeMaxHpBuff_TypeInfo);
    sub_2213A60(&BattleActionData_TypeInfo);
    sub_2213A60(&BattleServantSnapShotShiftServant_TypeInfo);
    sub_2213A60(&BattleActionData_BuffData_TypeInfo);
    sub_2213A60(&Method_System_Linq_Enumerable_FirstOrDefault_BattleActionData_BuffData___);
    sub_2213A60(&System_Func_BattleServantData__BattleServantSnapShot__TypeInfo);
    sub_2213A60(&System_Func_BattleActionData_BuffData__bool__TypeInfo);
    sub_2213A60(&BattleLogicFunctionUtilities_FunctionProgressCache_TypeInfo);
    sub_2213A60(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    sub_2213A60(&BattleActionData_ShiftServant_TypeInfo);
    sub_2213A60(&BattleLogicSkill_SkillExecArgs_TypeInfo);
    sub_2213A60(&Method_BattleLogicFunction___c__functionTransformServant_b__97_0__);
    sub_2213A60(&Method_BattleLogicFunction___c__DisplayClass97_0__functionTransformServant_b__1__);
    sub_2213A60(&BattleLogicFunction___c__DisplayClass97_0_TypeInfo);
    sub_2213A60(&BattleLogicFunction___c_TypeInfo);
    byte_5973BC0 = 1;
  }
  v11 = (BattleLogicFunction___c__DisplayClass97_0_o *)sub_2213CCC(BattleLogicFunction___c__DisplayClass97_0_TypeInfo);
  BattleLogicFunction___c__DisplayClass97_0___ctor(v11, 0);
  if ( !v11 )
    goto LABEL_61;
  v11->fields.targetId = targetId;
  v14 = (BattleActionData_o *)sub_2213CCC(BattleActionData_TypeInfo);
  BattleActionData___ctor(v14, 0);
  data = this->fields.data;
  if ( !data )
    goto LABEL_61;
  data = BattleData__getServantData((BattleData_o *)data, v11->fields.targetId, 0);
  if ( !baeVals )
    goto LABEL_61;
  v15 = (BattleServantData_o *)data;
  Param = DataVals__GetParam(baeVals, 6, 0, 0);
  data = (void *)DataVals__IsCancelTransform(baeVals, 0);
  if ( ((unsigned __int8)data & 1) == 0 )
    goto LABEL_10;
  if ( !v15 )
    goto LABEL_61;
  if ( BattleServantData__get_isTransformed(v15, 0) )
  {
    v17 = DataVals__GetParam(baeVals, 79, 0, 0);
    Param = -1;
  }
  else
  {
LABEL_10:
    v17 = DataVals__GetParam(baeVals, 79, 0, 0);
    if ( Param != -1 )
    {
      data = (void *)DataVals__GetParam(baeVals, 274, 0, 0);
      if ( (_DWORD)data == 1 )
      {
        v18 = this->fields.data;
        if ( !v18 )
          goto LABEL_61;
        if ( !v15 )
          goto LABEL_61;
        data = v18->fields.battle_info;
        if ( !data )
          goto LABEL_61;
        data = BattleInfoData__getTransformDeckServantData((BattleInfoData_o *)data, v15->fields.uniqueId, Param, 0);
        if ( data )
        {
          v19 = this->fields.data;
          if ( !v19 )
            goto LABEL_61;
          battle_info = v19->fields.battle_info;
          if ( !battle_info )
            goto LABEL_61;
          UserServantFromID = BattleInfoData__getUserServantFromID(battle_info, *((_QWORD *)data + 3), 0);
          if ( UserServantFromID )
          {
            v23 = *(_QWORD *)&UserServantFromID->fields.dispLimitCount.fields.currentCryptoKey;
            v24 = *(_QWORD *)&UserServantFromID->fields.dispLimitCount.fields.fakeValue;
            if ( !*(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished + 1) )
              j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v22);
            *(_QWORD *)&v76.fields.currentCryptoKey = v23;
            *(_QWORD *)&v76.fields.fakeValue = v24;
            v17 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_55997068(v76, 0);
          }
        }
      }
    }
  }
  v25 = sub_2213CCC(BattleActionData_ShiftServant_TypeInfo);
  BattleActionData_ShiftServant___ctor((BattleActionData_ShiftServant_o *)v25, funcIndex, 0);
  if ( !v25 )
    goto LABEL_61;
  BattleActionData_ShiftServant__setBeforeSvtData((BattleActionData_ShiftServant_o *)v25, v15, 0);
  if ( !v14 )
    goto LABEL_61;
  BattleActionData__setShiftServant(v14, (BattleActionData_ShiftServant_o *)v25, 0);
  if ( !v15 )
    goto LABEL_61;
  data = this->fields.data;
  v74 = v11;
  v15->fields.shiftNpcId = -1;
  v15->fields.beforeUserSvtId = -1;
  if ( !data )
    goto LABEL_61;
  FieldAliveLogicServantArray = BattleData__GetFieldAliveLogicServantArray((BattleData_o *)data, 3, 0, 0);
  v28 = BattleLogicFunction___c_TypeInfo;
  v29 = FieldAliveLogicServantArray;
  v73 = procArgs;
  if ( !*(&BattleLogicFunction___c_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(BattleLogicFunction___c_TypeInfo, v27);
    v28 = BattleLogicFunction___c_TypeInfo;
  }
  static_fields = v28->static_fields;
  _9__97_0 = (System_Func_object__object__o *)static_fields->__9__97_0;
  if ( !_9__97_0 )
  {
    if ( !*(&v28->_2.cctor_finished + 1) )
    {
      j_il2cpp_runtime_class_init_0(v28, v27);
      static_fields = BattleLogicFunction___c_TypeInfo->static_fields;
    }
    v32 = (Il2CppObject *)static_fields->__9;
    _9__97_0 = (System_Func_object__object__o *)sub_2213CCC(System_Func_BattleServantData__BattleServantSnapShot__TypeInfo);
    System_Func_object__object____ctor(
      _9__97_0,
      v32,
      Method_BattleLogicFunction___c__functionTransformServant_b__97_0__,
      0);
    v33 = BattleLogicFunction___c_TypeInfo->static_fields;
    v33->__9__97_0 = (struct System_Func_BattleServantData__BattleServantSnapShot__o *)_9__97_0;
    sub_2213A04((MissionNaviTransitionBoardItem_o *)&v33->__9__97_0, (int32_t)_9__97_0, v34, v35, v36, v37, v38, v39);
  }
  v40 = (BattleLogicFunctionUtilities_FunctionProgressCache_o *)sub_2213CCC(BattleLogicFunctionUtilities_FunctionProgressCache_TypeInfo);
  BattleLogicFunctionUtilities_FunctionProgressCache___ctor(
    v40,
    v29,
    (System_Func_BattleServantData__BattleServantSnapShot__o *)_9__97_0,
    0);
  if ( !v40 )
    goto LABEL_61;
  BattleLogicFunctionUtilities_FunctionProgressCache__MakeBeforeSvtCache(v40, 0);
  ElemByUniqueId = BattleLogicFunctionUtilities_FunctionProgressCache__GetElemByUniqueId(v40, v11->fields.targetId, 0);
  v42 = (BattleLogicSkill_SkillExecArgs_o *)sub_2213CCC(BattleLogicSkill_SkillExecArgs_TypeInfo);
  BattleLogicSkill_SkillExecArgs___ctor(v42, 0);
  BattleServantData__setTransformServant(v15, this->fields.data, Param, v17, 0, v42, 0);
  if ( !ElemByUniqueId )
    goto LABEL_61;
  Before_k__BackingField = ElemByUniqueId->fields._Before_k__BackingField;
  if ( !Before_k__BackingField )
    goto LABEL_61;
  BattleServantData__CheckUpdateUpDownOnlyResultHp(v15, Before_k__BackingField->fields._MaxHp_k__BackingField, 1, 0);
  BattleLogicFunctionUtilities_FunctionProgressCache__MakeAfterSvtCache(v40, 0);
  After_k__BackingField = ElemByUniqueId->fields._After_k__BackingField;
  *(_QWORD *)(v25 + 80) = After_k__BackingField;
  sub_2213A04(
    (MissionNaviTransitionBoardItem_o *)(v25 + 80),
    (int32_t)After_k__BackingField,
    v45,
    v46,
    v47,
    v48,
    v49,
    v50);
  v51 = ElemByUniqueId->fields._Before_k__BackingField;
  v71 = ElemByUniqueId;
  if ( !v51 )
    goto LABEL_37;
  naturalAligment = BattleServantSnapShotShiftServant_TypeInfo->_2.naturalAligment;
  if ( v51->klass->_2.naturalAligment >= (unsigned int)naturalAligment )
    v53 = (BattleServantSnapShotShiftServant_c *)v51->klass->_2.typeHierarchy[naturalAligment - 1] == BattleServantSnapShotShiftServant_TypeInfo
        ? (BattleServantSnapShotShiftServant_o *)ElemByUniqueId->fields._Before_k__BackingField
        : 0LL;
  else
LABEL_37:
    v53 = 0;
  v72 = this;
  BattleServantData__ApplyCacheForTransformServant(v15, v53, 0);
  SvtCacheArray_k__BackingField = v40->fields._SvtCacheArray_k__BackingField;
  if ( !SvtCacheArray_k__BackingField )
LABEL_61:
    sub_2213CDC(data, v13);
  max_length = SvtCacheArray_k__BackingField->max_length;
  if ( max_length >= 1 )
  {
    v56 = 0;
    do
    {
      if ( (unsigned int)v56 >= max_length )
        sub_2213CE4(data);
      v57 = v14;
      v58 = SvtCacheArray_k__BackingField->m_Items[v56];
      if ( !v58 )
        goto LABEL_61;
      SvtData_k__BackingField = v58->fields._SvtData_k__BackingField;
      if ( !SvtData_k__BackingField )
        goto LABEL_61;
      uniqueId = SvtData_k__BackingField->fields.uniqueId;
      v61 = (BattleActionData_BuffData_o *)sub_2213CCC(BattleActionData_BuffData_TypeInfo);
      BattleActionData_BuffData___ctor(v61, 0);
      if ( !v61 )
        goto LABEL_61;
      v61->fields.targetId = uniqueId;
      v62 = v58->fields._Before_k__BackingField;
      v63 = v58->fields._After_k__BackingField;
      v61->fields.functionIndex = funcIndex;
      v61->fields.isHideEffect = 1;
      v64 = (BattleActionEffect_AddSubChangeMaxHpBuff_o *)sub_2213CCC(BattleActionEffect_AddSubChangeMaxHpBuff_TypeInfo);
      BattleActionEffect_AddSubChangeMaxHpBuff___ctor(v64, uniqueId, v62, v63, 0);
      BattleActionData_BuffData__SetActionEffectProc(v61, (BattleActionEffect_Base_o *)v64, 0);
      v65 = v58->fields._SvtData_k__BackingField;
      if ( !v65 )
        goto LABEL_61;
      BattleActionData_BuffData__setSaveNp(v61, v65->fields.np, 0);
      v14 = v57;
      BattleActionData__setBuffData(v57, v61, 0, 0, 0);
      max_length = SvtCacheArray_k__BackingField->max_length;
    }
    while ( (int)++v56 < max_length );
  }
  BattleActionData__addReflectLogicResultServantId(v14, v74->fields.targetId, 0);
  buffdatalist = (System_Collections_Generic_IEnumerable_TSource__o *)v14->fields.buffdatalist;
  v67 = (System_Func_object__bool__o *)sub_2213CCC(System_Func_BattleActionData_BuffData__bool__TypeInfo);
  System_Func_object__bool____ctor(
    v67,
    (Il2CppObject *)v74,
    Method_BattleLogicFunction___c__DisplayClass97_0__functionTransformServant_b__1__,
    0);
  data = System_Linq_Enumerable__FirstOrDefault_object__59254852(
           buffdatalist,
           (System_Func_TSource__bool__o *)v67,
           (const MethodInfo_3882844 *)Method_System_Linq_Enumerable_FirstOrDefault_BattleActionData_BuffData___);
  if ( !v73 )
    goto LABEL_61;
  if ( !v73->fields._IsTreasureDvc_k__BackingField )
  {
    if ( !data )
      goto LABEL_58;
    LODWORD(v13) = v15->fields.nexttpturn;
LABEL_57:
    BattleActionData_BuffData__SetSaveTpTurn((BattleActionData_BuffData_o *)data, v13, 0);
    goto LABEL_58;
  }
  v68 = v71->fields._Before_k__BackingField;
  if ( !v68 )
    goto LABEL_61;
  v13 = (unsigned int)(v15->fields.maxtpturn - v68->fields._MaxTpTurn_k__BackingField + v15->fields.nexttpturn);
  v15->fields.nexttpturn = v13;
  if ( data )
    goto LABEL_57;
LABEL_58:
  v69 = v72->fields.data;
  if ( !v69 )
    goto LABEL_61;
  data = v69->fields._FieldEnvData_k__BackingField;
  if ( !data )
    goto LABEL_61;
  BattleFieldEnvironmentData__RemoveBgmNotExistsChangeBgmBuff((BattleFieldEnvironmentData_o *)data, 0);
  return v14;
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
  BattleActionData_o *v15; // x23
  __int64 v16; // x1
  BattleData_o *data; // x0
  BattleServantData_o *v18; // x26
  BattleServantData_o *v19; // x24
  System_Int32_array *FixDamageRates; // x19
  __int64 v21; // x25
  int32_t Param; // w0
  int Random; // w27
  BattleData_o *v24; // x1
  int IsIgnoreShiftSafeDamage; // w19
  BattleLogicFunction_o *v26; // x27
  BattleServantData_o *v27; // x22
  BattleActionData_o *v28; // x26
  int32_t v29; // w23
  int32_t v30; // w20
  struct BattleSkillInfoData_o *skillInfo; // x8
  DataMasterBase_TMaster__TEntity__PKType__o *v32; // x28
  bool v33; // w0
  int v34; // w19
  int v35; // w8
  struct BattleSkillInfoData_o *v36; // x8
  int32_t type; // w1
  bool v38; // zf
  bool v39; // w19
  int v40; // w19
  System_String_o *v41; // x2
  System_String_o *v42; // x3
  int32_t v43; // w4
  int32_t v44; // w5
  bool v45; // w6
  bool v46; // w7
  long double v47; // q0
  BattleData_o *v48; // x1
  int32_t v49; // w8
  _QWORD *v50; // x19
  __int64 v51; // x8
  __int64 v52; // x0
  __int64 v53; // x0
  __int64 *v54; // x8
  __int64 v55; // x1
  __int64 v56; // x1
  System_String_o *v57; // x2
  System_String_o *v58; // x3
  int32_t v59; // w4
  int32_t v60; // w5
  bool v61; // w6
  bool v62; // w7
  long double v63; // q0
  _QWORD *v64; // x19
  __int64 v65; // x8
  __int64 v66; // x0
  __int64 v67; // x0
  __int64 *v68; // x8
  __int64 v69; // x1
  int32_t v70; // w28
  System_Int32_array *v71; // x0
  System_String_o *v72; // x2
  System_String_o *v73; // x3
  int32_t v74; // w4
  int32_t v75; // w5
  bool v76; // w6
  bool v77; // w7
  __int64 v78; // x1
  System_String_o *v79; // x2
  System_String_o *v80; // x3
  int32_t v81; // w4
  int32_t v82; // w5
  bool v83; // w6
  bool v84; // w7
  long double v85; // q0
  _QWORD *v86; // x19
  __int64 v87; // x8
  __int64 v88; // x0
  __int64 v89; // x0
  __int64 *v90; // x8
  __int64 v91; // x1
  __int64 v92; // x1
  System_String_o *v93; // x2
  System_String_o *v94; // x3
  int32_t v95; // w4
  int32_t v96; // w5
  bool v97; // w6
  bool v98; // w7
  long double v99; // q0
  _QWORD *v100; // x19
  __int64 v101; // x8
  __int64 v102; // x0
  __int64 v103; // x0
  __int64 *v104; // x8
  __int64 v105; // x1
  __int64 v106; // x1
  System_String_o *v107; // x2
  System_String_o *v108; // x3
  int32_t v109; // w4
  int32_t v110; // w5
  bool v111; // w6
  bool v112; // w7
  long double v113; // q0
  _QWORD *v114; // x19
  __int64 v115; // x8
  __int64 v116; // x0
  __int64 v117; // x0
  __int64 *v118; // x8
  __int64 v119; // x1
  struct BattleData_o *v120; // x8
  int32_t wavecount; // w19
  bool IsOpponentPTUniqueID; // w0
  int v124; // [xsp+14h] [xbp-9Ch]
  bool v125; // [xsp+18h] [xbp-98h]
  int v126; // [xsp+18h] [xbp-98h]
  int32_t bId; // [xsp+1Ch] [xbp-94h]
  struct BattleSkillInfoData_o *v128; // [xsp+20h] [xbp-90h] BYREF
  Il2CppObject *entity; // [xsp+28h] [xbp-88h] BYREF
  bool minimumDamageFlg; // [xsp+30h] [xbp-80h] BYREF
  float damage; // [xsp+34h] [xbp-7Ch] BYREF
  System_Collections_Generic_List_int__o *v132; // [xsp+38h] [xbp-78h] BYREF
  int32_t executeEffectId; // [xsp+44h] [xbp-6Ch] BYREF
  int32_t hitStat[2]; // [xsp+48h] [xbp-68h] BYREF

  if ( (byte_5973BC9 & 1) == 0 )
  {
    sub_2213A60(&Method_System_Array_Empty_int___);
    sub_2213A60(&Method_System_Array_Empty_BattleBuffData_ShowBuffData___);
    sub_2213A60(&BattleActionData_TypeInfo);
    sub_2213A60(&BattleActionData_DamageValueFuncDamageData_TypeInfo);
    sub_2213A60(&Method_DataManager_GetMaster_SkillMaster___);
    sub_2213A60(&DataManager_TypeInfo);
    sub_2213A60(&Method_DataMasterBase_SkillMaster__SkillEntity__int__TryGetEntity__);
    sub_2213A60(&Method_System_Collections_Generic_List_int__ToArray__);
    sub_2213A60(&Method_System_Nullable_BattleSkillInfoData_TYPE__GetValueOrDefault__);
    sub_2213A60(&Method_System_Nullable_BattleSkillInfoData_TYPE___ctor__);
    sub_2213A60(&Method_System_Nullable_BattleSkillInfoData_TYPE__get_HasValue__);
    byte_5973BC9 = 1;
  }
  *(_QWORD *)hitStat = 0;
  executeEffectId = 0;
  v132 = 0;
  damage = 0.0;
  minimumDamageFlg = 0;
  entity = 0;
  v15 = (BattleActionData_o *)sub_2213CCC(BattleActionData_TypeInfo);
  BattleActionData___ctor(v15, 0);
  data = this->fields.data;
  if ( !data )
    goto LABEL_105;
  data = (BattleData_o *)BattleData__getServantData(data, playerId, 0);
  if ( !this->fields.data )
    goto LABEL_105;
  v18 = (BattleServantData_o *)data;
  v125 = safe;
  bId = playerId;
  data = (BattleData_o *)BattleData__getServantData(this->fields.data, targetId, 0);
  if ( !baseVals )
    goto LABEL_105;
  v19 = (BattleServantData_o *)data;
  FixDamageRates = DataVals__GetFixDamageRates(baseVals, 0);
  v21 = sub_2213CCC(BattleActionData_DamageValueFuncDamageData_TypeInfo);
  BattleActionData_DamageValueFuncDamageData___ctor(
    (BattleActionData_DamageValueFuncDamageData_o *)v21,
    FixDamageRates,
    0);
  LODWORD(FixDamageRates) = DataVals__GetValue(baseVals, 0);
  Param = DataVals__GetParam(baseVals, 4, 0, 0);
  Random = BattleRandom__getRandom((int32_t)FixDamageRates, Param + 1, 0);
  hitStat[1] = 0;
  data = (BattleData_o *)DataVals__IsActNoDamageBuff(baseVals, 0);
  if ( ((unsigned __int8)data & 1) != 0 )
  {
    if ( !v19 )
      goto LABEL_105;
    BattleServantData__CheckNoDamageBuff(
      v19,
      this->fields.data,
      v18,
      0,
      (BattleActionData_DamageData_o *)v21,
      mainAction,
      0);
    v24 = this->fields.data;
    minimumDamageFlg = 1;
    damage = (float)Random;
    BattleServantData__CheckInvincibleAvoidanceBuff(
      v19,
      v24,
      v18,
      0,
      (BattleActionData_DamageData_o *)v21,
      &damage,
      &minimumDamageFlg,
      &hitStat[1],
      mainAction,
      0);
    if ( damage <= 0.0 )
      Random = 0;
  }
  IsIgnoreShiftSafeDamage = DataVals__IsIgnoreShiftSafeDamage(baseVals, 0);
  if ( mainAction && mainAction->fields.skillInfo )
  {
    v124 = Random;
    v26 = this;
    v27 = v18;
    v28 = v15;
    v29 = targetId;
    v30 = funcIndex;
    if ( !*(&DataManager_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(DataManager_TypeInfo, v16);
    data = (BattleData_o *)DataManager__GetMaster_object_((const MethodInfo_3856318 *)Method_DataManager_GetMaster_SkillMaster___);
    skillInfo = mainAction->fields.skillInfo;
    if ( !skillInfo )
      goto LABEL_105;
    v32 = (DataMasterBase_TMaster__TEntity__PKType__o *)data;
    data = (BattleData_o *)((BattleData_o *(__fastcall *)(struct BattleSkillInfoData_o *__return_ptr, struct BattleSkillInfoData_o *, const MethodInfo *))skillInfo->klass->vtable._5_get_skillId.methodPtr)(
                             skillInfo,
                             mainAction->fields.skillInfo,
                             skillInfo->klass->vtable._5_get_skillId.method);
    if ( !v32 )
      goto LABEL_105;
    v33 = DataMasterBase_object__object__int___TryGetEntity(
            v32,
            &entity,
            (int32_t)data,
            (const MethodInfo_3F10B80 *)Method_DataMasterBase_SkillMaster__SkillEntity__int__TryGetEntity__);
    funcIndex = v30;
    targetId = v29;
    v15 = v28;
    v18 = v27;
    this = v26;
    Random = v124;
    if ( v33 )
    {
      data = (BattleData_o *)entity;
      if ( !entity )
        goto LABEL_105;
      IsIgnoreShiftSafeDamage |= SkillEntity__IsCheckUpdateShiftServant((SkillEntity_o *)entity, 0);
    }
  }
  data = this->fields.data;
  if ( !data )
    goto LABEL_105;
  data = (BattleData_o *)BattleData__IsDeadOkTurn(data, targetId, 0);
  if ( (((unsigned int)data | IsIgnoreShiftSafeDamage) & 1) != 0 )
  {
    if ( v125 )
    {
      if ( !v19 )
        goto LABEL_105;
      if ( (int)(((__int64 (__fastcall *)(BattleServantData_o *, const MethodInfo *))v19->klass->vtable._13_get_resultHp.methodPtr)(
                   v19,
                   v19->klass->vtable._13_get_resultHp.method)
               - Random) <= 0 )
        Random = ((__int64 (__fastcall *)(BattleServantData_o *, const MethodInfo *))v19->klass->vtable._13_get_resultHp.methodPtr)(
                   v19,
                   v19->klass->vtable._13_get_resultHp.method)
               - 1;
    }
  }
  else
  {
    if ( !v19 )
      goto LABEL_105;
    v34 = ((__int64 (__fastcall *)(BattleServantData_o *, const MethodInfo *))v19->klass->vtable._9_get_hp.methodPtr)(
            v19,
            v19->klass->vtable._9_get_hp.method);
    v35 = v34
        - ((__int64 (__fastcall *)(BattleServantData_o *, const MethodInfo *))v19->klass->vtable._11_get_reducedhp.methodPtr)(
            v19,
            v19->klass->vtable._11_get_reducedhp.method);
    if ( v35 >= 1 && v35 < Random )
      Random = v35 - 1;
  }
  if ( mainAction )
  {
    v36 = mainAction->fields.skillInfo;
    if ( v36 )
    {
      type = v36->fields.type;
      v128 = 0;
      System_Nullable_Int32Enum____ctor(
        (System_Nullable_Int32Enum__o)&v128,
        type,
        (const MethodInfo_45E4698 *)Method_System_Nullable_BattleSkillInfoData_TYPE___ctor__);
      v36 = v128;
    }
    v38 = (_BYTE)v36 && (unsigned __int64)v36 >> 32 == 1;
    v39 = v38;
  }
  else
  {
    v39 = 0;
  }
  data = (BattleData_o *)DataVals__IsActNoDamageBuff(baseVals, 0);
  if ( ((unsigned __int8)data & 1) == 0 )
    goto LABEL_44;
  if ( !v19 )
    goto LABEL_105;
  data = (BattleData_o *)BattleServantData__TryGetReactiveDamageGainHpValue(
                           v19,
                           hitStat,
                           &executeEffectId,
                           Random,
                           0,
                           v18,
                           0,
                           v39,
                           0);
  if ( ((unsigned __int8)data & 1) != 0 )
  {
    Random = hitStat[0];
    hitStat[1] = 6;
    if ( !v21 )
      goto LABEL_105;
    v40 = 1;
    *(_DWORD *)(v21 + 184) = executeEffectId;
  }
  else
  {
LABEL_44:
    if ( !v21 )
      goto LABEL_105;
    v40 = 0;
  }
  data = (BattleData_o *)baseVals->fields.funcEnt;
  *(_DWORD *)(v21 + 48) = targetId;
  *(_DWORD *)(v21 + 16) = funcIndex;
  if ( !data )
    goto LABEL_105;
  data = (BattleData_o *)FunctionEntity__getEffectList((FunctionEntity_o *)data, 0);
  if ( !data )
    goto LABEL_105;
  v126 = v40;
  v48 = data;
  if ( data->fields.m_CancellationTokenSource )
  {
    *(_QWORD *)(v21 + 152) = data;
    sub_2213A04((MissionNaviTransitionBoardItem_o *)(v21 + 152), (int32_t)data, v41, v42, v43, v44, v45, v46);
  }
  v49 = hitStat[1];
  v50 = Method_System_Array_Empty_BattleBuffData_ShowBuffData___;
  *(_WORD *)(v21 + 52) = 0;
  *(_BYTE *)(v21 + 54) = 0;
  *(_DWORD *)(v21 + 56) = v49;
  *(_BYTE *)(v21 + 60) = 0;
  v51 = v50[7];
  if ( !v51 )
  {
    sub_224B964(v50);
    v51 = v50[7];
  }
  v52 = *(_QWORD *)(v51 + 16);
  if ( (*(_WORD *)(v52 + 309) & 1) == 0 )
    v52 = sub_224B908(v47);
  if ( !*(_DWORD *)(v52 + 228) )
    *(__n128 *)&v47 = j_il2cpp_runtime_class_init_0(v52, v48);
  v53 = *(_QWORD *)(v50[7] + 16LL);
  if ( (*(_WORD *)(v53 + 309) & 1) == 0 )
    v53 = sub_224B908(v47);
  v54 = *(__int64 **)(v53 + 184);
  v55 = *v54;
  *(_QWORD *)(v21 + 80) = *v54;
  sub_2213A04((MissionNaviTransitionBoardItem_o *)(v21 + 80), v55, v41, v42, v43, v44, v45, v46);
  v64 = Method_System_Array_Empty_BattleBuffData_ShowBuffData___;
  v65 = *((_QWORD *)Method_System_Array_Empty_BattleBuffData_ShowBuffData___ + 7);
  if ( !v65 )
  {
    sub_224B964(Method_System_Array_Empty_BattleBuffData_ShowBuffData___);
    v65 = v64[7];
  }
  v66 = *(_QWORD *)(v65 + 16);
  if ( (*(_WORD *)(v66 + 309) & 1) == 0 )
    v66 = sub_224B908(v63);
  if ( !*(_DWORD *)(v66 + 228) )
    *(__n128 *)&v63 = j_il2cpp_runtime_class_init_0(v66, v56);
  v67 = *(_QWORD *)(v64[7] + 16LL);
  if ( (*(_WORD *)(v67 + 309) & 1) == 0 )
    v67 = sub_224B908(v63);
  v68 = *(__int64 **)(v67 + 184);
  v69 = *v68;
  *(_QWORD *)(v21 + 88) = *v68;
  sub_2213A04((MissionNaviTransitionBoardItem_o *)(v21 + 88), v69, v57, v58, v59, v60, v61, v62);
  data = (BattleData_o *)(*(__int64 (__fastcall **)(__int64, System_Collections_Generic_List_int__o **, _QWORD, _QWORD, _QWORD))(*(_QWORD *)v21 + 376LL))(
                           v21,
                           &v132,
                           (unsigned int)Random,
                           0,
                           *(_QWORD *)(*(_QWORD *)v21 + 384LL));
  if ( !v132 )
    goto LABEL_105;
  v70 = (int)data;
  v71 = System_Collections_Generic_List_int___ToArray(
          v132,
          (const MethodInfo_4468CF0 *)Method_System_Collections_Generic_List_int__ToArray__);
  *(_QWORD *)(v21 + 112) = v71;
  sub_2213A04((MissionNaviTransitionBoardItem_o *)(v21 + 112), (int32_t)v71, v72, v73, v74, v75, v76, v77);
  if ( v18 )
    BattleServantData__CacheDealtDamage(v18, (BattleActionData_DamageData_o *)v21, 0);
  v86 = Method_System_Array_Empty_int___;
  v87 = *((_QWORD *)Method_System_Array_Empty_int___ + 7);
  if ( !v87 )
  {
    sub_224B964(Method_System_Array_Empty_int___);
    v87 = v86[7];
  }
  v88 = *(_QWORD *)(v87 + 16);
  if ( (*(_WORD *)(v88 + 309) & 1) == 0 )
    v88 = sub_224B908(v85);
  if ( !*(_DWORD *)(v88 + 228) )
    *(__n128 *)&v85 = j_il2cpp_runtime_class_init_0(v88, v78);
  v89 = *(_QWORD *)(v86[7] + 16LL);
  if ( (*(_WORD *)(v89 + 309) & 1) == 0 )
    v89 = sub_224B908(v85);
  v90 = *(__int64 **)(v89 + 184);
  v91 = *v90;
  *(_QWORD *)(v21 + 120) = *v90;
  sub_2213A04((MissionNaviTransitionBoardItem_o *)(v21 + 120), v91, v79, v80, v81, v82, v83, v84);
  v100 = Method_System_Array_Empty_int___;
  v101 = *((_QWORD *)Method_System_Array_Empty_int___ + 7);
  if ( !v101 )
  {
    sub_224B964(Method_System_Array_Empty_int___);
    v101 = v100[7];
  }
  v102 = *(_QWORD *)(v101 + 16);
  if ( (*(_WORD *)(v102 + 309) & 1) == 0 )
    v102 = sub_224B908(v99);
  if ( !*(_DWORD *)(v102 + 228) )
    *(__n128 *)&v99 = j_il2cpp_runtime_class_init_0(v102, v92);
  v103 = *(_QWORD *)(v100[7] + 16LL);
  if ( (*(_WORD *)(v103 + 309) & 1) == 0 )
    v103 = sub_224B908(v99);
  v104 = *(__int64 **)(v103 + 184);
  v105 = *v104;
  *(_QWORD *)(v21 + 128) = *v104;
  sub_2213A04((MissionNaviTransitionBoardItem_o *)(v21 + 128), v105, v93, v94, v95, v96, v97, v98);
  v114 = Method_System_Array_Empty_int___;
  v115 = *((_QWORD *)Method_System_Array_Empty_int___ + 7);
  if ( !v115 )
  {
    sub_224B964(Method_System_Array_Empty_int___);
    v115 = v114[7];
  }
  v116 = *(_QWORD *)(v115 + 16);
  if ( (*(_WORD *)(v116 + 309) & 1) == 0 )
    v116 = sub_224B908(v113);
  if ( !*(_DWORD *)(v116 + 228) )
    *(__n128 *)&v113 = j_il2cpp_runtime_class_init_0(v116, v106);
  v117 = *(_QWORD *)(v114[7] + 16LL);
  if ( (*(_WORD *)(v117 + 309) & 1) == 0 )
    v117 = sub_224B908(v113);
  v118 = *(__int64 **)(v117 + 184);
  v119 = *v118;
  *(_QWORD *)(v21 + 136) = *v118;
  sub_2213A04((MissionNaviTransitionBoardItem_o *)(v21 + 136), v119, v107, v108, v109, v110, v111, v112);
  if ( v126 )
  {
    if ( !v19 )
      goto LABEL_105;
    BattleServantData__resultHeal(v19, v70, 0);
  }
  else
  {
    if ( !v19 )
      goto LABEL_105;
    BattleServantData__provisionalDamage(v19, Random, 0);
    BattleServantData__ResultDamage(v19, Random, v18, 0, 0, 0, 0);
    data = (BattleData_o *)BattleServantData__isLogicResultAlive(v19, 0);
    if ( ((unsigned __int8)data & 1) == 0 )
    {
      v120 = this->fields.data;
      if ( !v120 )
        goto LABEL_105;
      v19->fields.deadTurn = v120->fields.typeTurn;
    }
  }
  data = (BattleData_o *)DataVals__IsActAttackFunction(baseVals, 0);
  if ( ((unsigned __int8)data & 1) != 0 )
    BattleActionData_DamageData__addAttackSideEffectAction((BattleActionData_DamageData_o *)v21, 80, 0);
  if ( !v15
    || (BattleActionData__SetFuncDamageData(v15, (BattleActionData_DamageData_o *)v21, baseVals, 0),
        (data = this->fields.data) == 0) )
  {
LABEL_105:
    sub_2213CDC(data, v16);
  }
  wavecount = data->fields.wavecount;
  IsOpponentPTUniqueID = BattleData__IsOpponentPTUniqueID(data, targetId, bId, 0);
  BattleServantData__setActionHistory(v19, bId, 7, wavecount, IsOpponentPTUniqueID, 0);
  return v15;
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
  int v25; // w22
  int32_t Param; // w0
  _BOOL8 IsDeadOkTurn; // x0
  const MethodInfo *v28; // x6
  BattleActionData_BuffData_o *v29; // x29
  BattleServantData_o *v30; // x28
  __int64 v31; // x25
  BattleData_o *v32; // x1
  System_String_o *v33; // x2
  System_String_o *v34; // x3
  int32_t v35; // w4
  int32_t v36; // w5
  bool v37; // w6
  bool v38; // w7
  long double v39; // q0
  struct BattleBuffData_o *buffData; // x8
  _QWORD *v41; // x22
  __int64 v42; // x8
  __int64 v43; // x0
  __int64 v44; // x0
  __int64 *v45; // x8
  __int64 v46; // x22
  __int64 v47; // x1
  System_String_o *v48; // x2
  System_String_o *v49; // x3
  int32_t v50; // w4
  int32_t v51; // w5
  bool v52; // w6
  bool v53; // w7
  __int64 v54; // x1
  System_String_o *v55; // x2
  System_String_o *v56; // x3
  int32_t v57; // w4
  int32_t v58; // w5
  bool v59; // w6
  bool v60; // w7
  long double v61; // q0
  _QWORD *v62; // x22
  __int64 v63; // x8
  __int64 v64; // x0
  __int64 v65; // x0
  __int64 *v66; // x8
  __int64 v67; // x22
  __int64 v68; // x1
  System_String_o *v69; // x2
  System_String_o *v70; // x3
  int32_t v71; // w4
  int32_t v72; // w5
  bool v73; // w6
  bool v74; // w7
  System_String_o *v75; // x2
  System_String_o *v76; // x3
  int32_t v77; // w4
  int32_t v78; // w5
  bool v79; // w6
  bool v80; // w7
  struct BattleBuffData_o *v81; // x8
  bool isNoDamage; // w8
  int32_t v83; // w1
  MissionNaviTransitionBoardItem_o *p_invalidLossHpData; // x0
  bool v85; // w25
  __int64 v86; // x1
  UnityEngine_Object_o *logic; // x22
  int32_t Wave; // w22
  bool IsOpponentPTUniqueID; // w0
  BattleActionEffect_LossHPFunc_c *v90; // x0
  BattleActionEffect_LossHPFunc_o *v91; // x22
  struct BattleBuffData_o *v92; // x8
  int32_t v93; // w0
  int32_t v95; // [xsp+18h] [xbp-78h]
  int32_t v96; // [xsp+1Ch] [xbp-74h]
  bool v97; // [xsp+20h] [xbp-70h]
  bool v98; // [xsp+24h] [xbp-6Ch]
  bool minimumDamageFlg; // [xsp+28h] [xbp-68h] BYREF
  float damage; // [xsp+2Ch] [xbp-64h] BYREF

  if ( (byte_5973BB8 & 1) == 0 )
  {
    sub_2213A60(&Method_System_Array_Empty_int___);
    sub_2213A60(&Method_System_Array_Empty_BattleBuffData_ShowBuffData___);
    sub_2213A60(&BattleActionData_TypeInfo);
    sub_2213A60(&BattleActionData_DamageData_TypeInfo);
    sub_2213A60(&BattleActionEffect_LossHPFunc_TypeInfo);
    sub_2213A60(&UnityEngine_Object_TypeInfo);
    byte_5973BB8 = 1;
  }
  damage = 0.0;
  minimumDamageFlg = 0;
  v20 = (BattleActionData_o *)sub_2213CCC(BattleActionData_TypeInfo);
  BattleActionData___ctor(v20, 0);
  data = (__int64)this->fields.data;
  if ( !data )
    goto LABEL_64;
  v98 = safe;
  data = (__int64)BattleData__getServantData((BattleData_o *)data, targetId, 0);
  if ( !data )
    goto LABEL_64;
  Random = overwriteLossHp;
  v24 = (BattleServantData_o *)data;
  data = (*(__int64 (__fastcall **)(__int64, _QWORD))(*(_QWORD *)data + 520LL))(
           data,
           *(_QWORD *)(*(_QWORD *)data + 528LL));
  v25 = data;
  if ( overwriteLossHp == -1 )
  {
    if ( !baseVals )
      goto LABEL_64;
    data = DataVals__GetValue(baseVals, 0);
    Random = data;
  }
  if ( isRandomDamage )
  {
    if ( !baseVals )
      goto LABEL_64;
    Param = DataVals__GetParam(baseVals, 4, 0, 0);
    if ( Param >= 1 )
      Random = BattleRandom__getRandom(Random, Param + 1, 0);
  }
  if ( v25 < 1 )
    return 0;
  data = (__int64)this->fields.data;
  if ( !data )
    goto LABEL_64;
  IsDeadOkTurn = BattleData__IsDeadOkTurn((BattleData_o *)data, targetId, 0);
  v96 = funcIndex;
  v97 = IsDeadOkTurn;
  data = (__int64)BattleLogicFunction__getFunctionObject(
                    (BattleLogicFunction_o *)IsDeadOkTurn,
                    funcEnt,
                    v24->fields.uniqueId,
                    funcIndex,
                    isCommandSideEffect,
                    0,
                    v28);
  if ( !this->fields.data )
    goto LABEL_64;
  v29 = (BattleActionData_BuffData_o *)data;
  data = (__int64)BattleData__getServantData(this->fields.data, playerId, 0);
  if ( !baseVals )
    goto LABEL_64;
  v30 = (BattleServantData_o *)data;
  v95 = v25;
  if ( DataVals__IsActNoDamageBuff(baseVals, 0) )
  {
    v31 = sub_2213CCC(BattleActionData_DamageData_TypeInfo);
    BattleActionData_DamageData___ctor((BattleActionData_DamageData_o *)v31, 0);
    BattleServantData__CheckNoDamageBuff(
      v24,
      this->fields.data,
      v30,
      0,
      (BattleActionData_DamageData_o *)v31,
      mainAction,
      0);
    minimumDamageFlg = 1;
    damage = (float)Random;
    if ( !v31 )
      goto LABEL_64;
    v32 = this->fields.data;
    *(_DWORD *)(v31 + 56) = 0;
    BattleServantData__CheckInvincibleAvoidanceBuff(
      v24,
      v32,
      v30,
      0,
      (BattleActionData_DamageData_o *)v31,
      &damage,
      &minimumDamageFlg,
      (int32_t *)(v31 + 56),
      mainAction,
      0);
    *(float *)&v39 = damage;
    buffData = v24->fields.buffData;
    if ( damage <= 0.0 )
      Random = 0;
    if ( !buffData )
      goto LABEL_64;
    if ( buffData->fields.isNoDamage )
    {
      v41 = Method_System_Array_Empty_BattleBuffData_ShowBuffData___;
      v42 = *((_QWORD *)Method_System_Array_Empty_BattleBuffData_ShowBuffData___ + 7);
      if ( !v42 )
      {
        sub_224B964(Method_System_Array_Empty_BattleBuffData_ShowBuffData___);
        v42 = v41[7];
      }
      v43 = *(_QWORD *)(v42 + 16);
      if ( (*(_WORD *)(v43 + 309) & 1) == 0 )
        v43 = sub_224B908(v39);
      if ( !*(_DWORD *)(v43 + 228) )
        *(__n128 *)&v39 = j_il2cpp_runtime_class_init_0(v43, v21);
      v44 = *(_QWORD *)(v41[7] + 16LL);
      if ( (*(_WORD *)(v44 + 309) & 1) == 0 )
        v44 = sub_224B908(v39);
      v45 = *(__int64 **)(v44 + 184);
      v46 = *v45;
      v47 = *v45;
      *(_QWORD *)(v31 + 88) = *v45;
      sub_2213A04((MissionNaviTransitionBoardItem_o *)(v31 + 88), v47, v33, v34, v35, v36, v37, v38);
      *(_QWORD *)(v31 + 80) = v46;
      sub_2213A04((MissionNaviTransitionBoardItem_o *)(v31 + 80), v46, v48, v49, v50, v51, v52, v53);
      v62 = Method_System_Array_Empty_int___;
      v63 = *((_QWORD *)Method_System_Array_Empty_int___ + 7);
      if ( !v63 )
      {
        sub_224B964(Method_System_Array_Empty_int___);
        v63 = v62[7];
      }
      v64 = *(_QWORD *)(v63 + 16);
      if ( (*(_WORD *)(v64 + 309) & 1) == 0 )
        v64 = sub_224B908(v61);
      if ( !*(_DWORD *)(v64 + 228) )
        *(__n128 *)&v61 = j_il2cpp_runtime_class_init_0(v64, v54);
      v65 = *(_QWORD *)(v62[7] + 16LL);
      if ( (*(_WORD *)(v65 + 309) & 1) == 0 )
        v65 = sub_224B908(v61);
      v66 = *(__int64 **)(v65 + 184);
      v67 = *v66;
      v68 = *v66;
      *(_QWORD *)(v31 + 136) = *v66;
      sub_2213A04((MissionNaviTransitionBoardItem_o *)(v31 + 136), v68, v55, v56, v57, v58, v59, v60);
      *(_QWORD *)(v31 + 128) = v67;
      sub_2213A04((MissionNaviTransitionBoardItem_o *)(v31 + 128), v67, v69, v70, v71, v72, v73, v74);
      *(_QWORD *)(v31 + 120) = v67;
      sub_2213A04((MissionNaviTransitionBoardItem_o *)(v31 + 120), v67, v75, v76, v77, v78, v79, v80);
      v81 = v24->fields.buffData;
      if ( !v81 )
        goto LABEL_64;
      isNoDamage = v81->fields.isNoDamage;
      v83 = v31;
      v29->fields.invalidLossHpData = (struct BattleActionData_DamageData_o *)v31;
      p_invalidLossHpData = (MissionNaviTransitionBoardItem_o *)&v29->fields.invalidLossHpData;
      *(_BYTE *)(v31 + 73) = isNoDamage;
    }
    else
    {
      v83 = 0;
      v29->fields.invalidLossHpData = 0;
      p_invalidLossHpData = (MissionNaviTransitionBoardItem_o *)&v29->fields.invalidLossHpData;
    }
    sub_2213A04(p_invalidLossHpData, v83, v33, v34, v35, v36, v37, v38);
  }
  v85 = !v97 || v98;
  BattleServantData__ResultDamage(v24, Random, v30, 0, 0, v85, 0);
  logic = (UnityEngine_Object_o *)this->fields.logic;
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v86);
  if ( UnityEngine_Object__op_Inequality(logic, 0, 0) )
  {
    data = (__int64)this->fields.logic;
    if ( !data )
      goto LABEL_64;
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
        v90 = BattleActionEffect_LossHPFunc_TypeInfo,
        v29->fields.procType = 2,
        v91 = (BattleActionEffect_LossHPFunc_o *)sub_2213CCC(v90),
        BattleActionEffect_LossHPFunc___ctor(v91, targetId, Random, v85, 0),
        BattleActionData_BuffData__SetActionEffectProc(v29, (BattleActionEffect_Base_o *)v91, 0),
        !v20) )
  {
LABEL_64:
    sub_2213CDC(data, v21);
  }
  BattleActionData__setBuffData(v20, v29, baseVals, 0, 0);
  data = DataVals__isLossHpChangeDamage(baseVals, 0);
  if ( (data & 1) != 0 )
  {
    if ( !DataVals__IsActNoDamageBuff(baseVals, 0) )
    {
      data = (__int64)v24->fields.buffData;
      if ( !data )
        goto LABEL_64;
      goto LABEL_58;
    }
    data = DataVals__IsActNoDamageBuff(baseVals, 0);
    if ( (data & 1) != 0 )
    {
      data = (__int64)v24->fields.buffData;
      if ( !data )
        goto LABEL_64;
      if ( !*(_BYTE *)(data + 160) )
LABEL_58:
        BattleBuffData__UseFieldProgressingDoNotAct((BattleBuffData_o *)data, v20, v24, baseVals, v96, 0);
    }
  }
  v92 = v24->fields.buffData;
  if ( !v92 )
    goto LABEL_64;
  data = (__int64)this->fields.data;
  v92->fields.isNoDamage = 0;
  if ( !data )
    goto LABEL_64;
  if ( v24->fields.isEnemy != BattleData__isEnemyID((BattleData_o *)data, playerId, 0) )
  {
    v93 = ((__int64 (__fastcall *)(BattleServantData_o *, const MethodInfo *))v24->klass->vtable._13_get_resultHp.methodPtr)(
            v24,
            v24->klass->vtable._13_get_resultHp.method);
    BattleServantData__procAccumulationDamage(v24, v95, v93, 0);
  }
  return v20;
}


FunctionMaster_o *BattleLogicFunction__getFuncMaster(BattleLogicFunction_o *this, const MethodInfo *method)
{
  FunctionMaster_o *result; // x0
  MissionNaviTransitionBoardItem_o *p_master; // x19
  FunctionMaster_o *master; // t1
  Il2CppObject *Instance; // x0
  __int64 v7; // x1
  Il2CppObject *MasterData_object; // x0
  System_String_o *v9; // x2
  System_String_o *v10; // x3
  int32_t v11; // w4
  int32_t v12; // w5
  bool v13; // w6
  bool v14; // w7

  if ( (byte_5973B94 & 1) == 0 )
  {
    sub_2213A60(&Method_DataManager_GetMasterData_FunctionMaster___);
    sub_2213A60(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_5973B94 = 1;
  }
  master = this->fields.master;
  p_master = (MissionNaviTransitionBoardItem_o *)&this->fields.master;
  result = master;
  if ( !master )
  {
    Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_47A29F8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !Instance )
      sub_2213CDC(0, v7);
    MasterData_object = DataManager__GetMasterData_object_(
                          (DataManager_o *)Instance,
                          (const MethodInfo_385636C *)Method_DataManager_GetMasterData_FunctionMaster___);
    p_master->klass = (MissionNaviTransitionBoardItem_c *)MasterData_object;
    sub_2213A04(p_master, (int32_t)MasterData_object, v9, v10, v11, v12, v13, v14);
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
  MissionNaviTransitionBoardItem_o *p_master; // x20
  struct FunctionMaster_o *master; // t1
  __int64 v8; // x1
  Il2CppObject *MasterData_object; // x0
  System_String_o *v10; // x2
  System_String_o *v11; // x3
  int32_t v12; // w4
  int32_t v13; // w5
  bool v14; // w6
  bool v15; // w7

  if ( (byte_5973B93 & 1) == 0 )
  {
    sub_2213A60(&Method_DataManager_GetMasterData_FunctionMaster___);
    sub_2213A60(&Method_DataMasterBase_FunctionMaster__FunctionEntity__int__GetEntity__);
    sub_2213A60(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_5973B93 = 1;
  }
  master = this->fields.master;
  p_master = (MissionNaviTransitionBoardItem_o *)&this->fields.master;
  Instance = (Il2CppObject *)master;
  if ( !master )
  {
    Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_47A29F8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !Instance
      || (MasterData_object = DataManager__GetMasterData_object_(
                                (DataManager_o *)Instance,
                                (const MethodInfo_385636C *)Method_DataManager_GetMasterData_FunctionMaster___),
          p_master->klass = (MissionNaviTransitionBoardItem_c *)MasterData_object,
          sub_2213A04(p_master, (int32_t)MasterData_object, v10, v11, v12, v13, v14, v15),
          (Instance = (Il2CppObject *)p_master->klass) == 0) )
    {
      sub_2213CDC(Instance, v8);
    }
  }
  return (FunctionEntity_o *)DataMasterBase_object__object__int___GetEntity(
                               (DataMasterBase_TMaster__TEntity__PKType__o *)Instance,
                               id,
                               (const MethodInfo_3F10B30 *)Method_DataMasterBase_FunctionMaster__FunctionEntity__int__GetEntity__);
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

  if ( (byte_5973BC2 & 1) == 0 )
  {
    sub_2213A60(&BattleActionData_BuffData_TypeInfo);
    byte_5973BC2 = 1;
  }
  if ( !defBuffData )
  {
    defBuffData = (BattleActionData_BuffData_o *)sub_2213CCC(BattleActionData_BuffData_TypeInfo);
    BattleActionData_BuffData___ctor(defBuffData, 0);
    if ( !defBuffData )
      sub_2213CDC(v12, v13);
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

  if ( (byte_5973B9B & 1) == 0 )
  {
    sub_2213A60(&Method_System_Collections_Generic_Dictionary_FuncList_TYPE__BattleLogicFunctionProcess_BaseFunctionTypeProcess__ContainsKey__);
    sub_2213A60(&Method_System_Collections_Generic_Dictionary_FuncList_TYPE__BattleLogicFunctionProcess_BaseFunctionTypeProcess__get_Item__);
    byte_5973B9B = 1;
  }
  dicFuncProcess = (System_Collections_Generic_Dictionary_TKey__TValue__o *)this->fields.dicFuncProcess;
  if ( !dicFuncProcess
    || (dicFuncProcess = (System_Collections_Generic_Dictionary_TKey__TValue__o *)System_Collections_Generic_Dictionary_Int32Enum__object___ContainsKey(
                                                                                    dicFuncProcess,
                                                                                    functType,
                                                                                    (const MethodInfo_3FBC594 *)Method_System_Collections_Generic_Dictionary_FuncList_TYPE__BattleLogicFunctionProcess_BaseFunctionTypeProcess__ContainsKey__),
        !this->fields.dicFuncProcess)
    || (((unsigned __int8)dicFuncProcess & 1) == 0 ? (v6 = 0) : (v6 = functType),
        (dicFuncProcess = (System_Collections_Generic_Dictionary_TKey__TValue__o *)System_Collections_Generic_Dictionary_Int32Enum__object___get_Item(
                                                                                     (System_Collections_Generic_Dictionary_TKey__TValue__o *)this->fields.dicFuncProcess,
                                                                                     v6,
                                                                                     (const MethodInfo_3FBC300 *)Method_System_Collections_Generic_Dictionary_FuncList_TYPE__BattleLogicFunctionProcess_BaseFunctionTypeProcess__get_Item__)) == 0) )
  {
    sub_2213CDC(dicFuncProcess, *(_QWORD *)&functType);
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

  if ( (byte_5973BAC & 1) == 0 )
  {
    sub_2213A60(&BattleActionData_TypeInfo);
    byte_5973BAC = 1;
  }
  v10 = (BattleActionData_o *)sub_2213CCC(BattleActionData_TypeInfo);
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
    sub_2213CDC(GrayActionBuffData, v12);
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

  if ( !baseVals )
    goto LABEL_8;
  this = (BattleLogicFunction_o *)DataVals__isParam(baseVals, 122, 0);
  if ( ((unsigned __int8)this & 1) == 0 )
  {
    if ( targetSvtData )
    {
      MaxHp = BattleServantData__getMaxHp(targetSvtData, 0);
      return DataVals__GetValue(baseVals, 0) * MaxHp / 1000;
    }
LABEL_8:
    sub_2213CDC(this, baseVals);
  }
  if ( !targetSvtData )
    goto LABEL_8;
  MaxHp = ((__int64 (__fastcall *)(BattleServantData_o *, const MethodInfo *))targetSvtData->klass->vtable._13_get_resultHp.methodPtr)(
            targetSvtData,
            targetSvtData->klass->vtable._13_get_resultHp.method);
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
  BattleActionData_BuffData_o *v11; // x21
  BattleActionData_o *v19; // x24
  System_String_o *v20; // x2
  System_String_o *v21; // x3
  int32_t v22; // w4
  int32_t v23; // w5
  bool v24; // w6
  bool v25; // w7
  BattleActionData_BuffData_o *v26; // x0
  __int64 v27; // x1
  int32_t v28; // w1
  Il2CppClass *v29; // x0
  __int64 v30; // x0
  System_String_o *v31; // x2
  System_String_o *v32; // x3
  int32_t v33; // w4
  int32_t v34; // w5
  bool v35; // w6
  bool v36; // w7
  BattleActionData_BuffData_o *v37; // x3
  Il2CppClass *v38; // x0
  __int64 v39; // x0
  System_String_o *v40; // x2
  System_String_o *v41; // x3
  int32_t v42; // w4
  int32_t v43; // w5
  bool v44; // w6
  bool v45; // w7
  int32_t Param; // w0

  v11 = defBuffData;
  if ( (byte_5973BA8 & 1) == 0 )
  {
    sub_2213A60(&BattleActionData_TypeInfo);
    sub_2213A60(&BattleActionData_BuffData_TypeInfo);
    sub_2213A60(&int___TypeInfo);
    sub_2213A60(&StringLiteral_1/*""*/);
    byte_5973BA8 = 1;
  }
  v19 = (BattleActionData_o *)sub_2213CCC(BattleActionData_TypeInfo);
  BattleActionData___ctor(v19, 0);
  if ( !defBuffData )
  {
    v11 = (BattleActionData_BuffData_o *)sub_2213CCC(BattleActionData_BuffData_TypeInfo);
    BattleActionData_BuffData___ctor(v11, 0);
    if ( !v11 )
LABEL_14:
      sub_2213CDC(v26, v27);
  }
  v11->fields.functionIndex = funcIndex;
  v11->fields.isMiss = 1;
  v11->fields.targetId = targetId;
  v11->fields.buffId = 0;
  if ( isHide )
  {
    v28 = (int)StringLiteral_1/*""*/;
    v11->fields.popLabel = (struct System_String_o *)StringLiteral_1/*""*/;
  }
  else
  {
    v28 = (int)dispName;
    v11->fields.popLabel = dispName;
  }
  sub_2213A04((MissionNaviTransitionBoardItem_o *)&v11->fields.popLabel, v28, v20, v21, v22, v23, v24, v25);
  if ( funcTarget )
  {
    v29 = int___TypeInfo;
    v11->fields.popIcon = funcTarget->fields.invalidIconId;
    v30 = sub_2213B20(v29, 0);
    v11->fields.effectList = (struct System_Int32_array *)v30;
    sub_2213A04((MissionNaviTransitionBoardItem_o *)&v11->fields.effectList, v30, v31, v32, v33, v34, v35, v36);
    v26 = BattleLogicFunctionProcess_FunctionTargetCheck__get_ParentActBuffData(funcTarget, 0);
    v37 = v26;
    if ( !v19 )
      goto LABEL_14;
  }
  else
  {
    v38 = int___TypeInfo;
    v11->fields.popIcon = 0;
    v39 = sub_2213B20(v38, 0);
    v11->fields.effectList = (struct System_Int32_array *)v39;
    sub_2213A04((MissionNaviTransitionBoardItem_o *)&v11->fields.effectList, v39, v40, v41, v42, v43, v44, v45);
    v37 = 0;
    if ( !v19 )
      goto LABEL_14;
  }
  BattleActionData__setBuffData(v19, v11, 0, v37, 0);
  v11->fields.IsNoEffect = isNoEffect;
  v11->fields.isCommandAfter = isCommandSideEffect;
  if ( !dataVals )
    goto LABEL_14;
  Param = DataVals__GetParam(dataVals, 67, 0, 0);
  v19->fields.funcResult = 0;
  v11->fields.popDelay = Param;
  v19->fields.isHideFailedText = isHide;
  return v19;
}


BattleActionData_o *BattleLogicFunction__getMissObject(
        BattleLogicFunction_o *this,
        int32_t targetId,
        int32_t funcIndex,
        DataVals_o *dataVals,
        bool isCommandSideEffect,
        System_String_o *uniqueText,
        BattleActionData_BuffData_o *defBuffData,
        BattleLogicFunctionProcess_FunctionTargetCheck_o *funcTarget,
        bool isCheckedOverwrite,
        const MethodInfo *method)
{
  System_String_o *InvalidObjectFromParam; // x0
  __int64 v19; // x1
  _BOOL8 isHideMiss; // x0
  const MethodInfo *v22; // [xsp+10h] [xbp-70h]
  BattleActionData_o *invalidObject; // [xsp+28h] [xbp-58h] BYREF

  if ( (byte_5973BA9 & 1) == 0 )
  {
    sub_2213A60(&LocalizationManager_TypeInfo);
    sub_2213A60(&StringLiteral_2919/*"BATTLE_MISS_FUNCTION"*/);
    byte_5973BA9 = 1;
  }
  invalidObject = 0;
  InvalidObjectFromParam = (System_String_o *)BattleLogicFunction__TryGetInvalidObjectFromParam(
                                                this,
                                                &invalidObject,
                                                targetId,
                                                funcIndex,
                                                dataVals,
                                                isCommandSideEffect,
                                                isCheckedOverwrite,
                                                (const MethodInfo *)funcTarget);
  if ( ((unsigned __int8)InvalidObjectFromParam & 1) != 0 )
    return invalidObject;
  if ( !uniqueText )
  {
    if ( !*(&LocalizationManager_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v19);
    InvalidObjectFromParam = LocalizationManager__Get((System_String_o *)StringLiteral_2919/*"BATTLE_MISS_FUNCTION"*/, 0);
    uniqueText = InvalidObjectFromParam;
  }
  if ( !dataVals )
    sub_2213CDC(InvalidObjectFromParam, v19);
  isHideMiss = DataVals__isHideMiss(dataVals, 0);
  return BattleLogicFunction__getInvalidObject(
           (BattleLogicFunction_o *)isHideMiss,
           targetId,
           funcIndex,
           isHideMiss,
           uniqueText,
           dataVals,
           isCommandSideEffect,
           0,
           defBuffData,
           funcTarget,
           v22);
}


BattleActionData_o *BattleLogicFunction__getNoEffectObject(
        BattleLogicFunction_o *this,
        int32_t targetId,
        int32_t funcIndex,
        DataVals_o *dataVals,
        bool isCommandSideEffect,
        System_String_o *uniqueText,
        BattleActionData_BuffData_o *defBuffData,
        BattleLogicFunctionProcess_FunctionTargetCheck_o *funcTarget,
        bool isCheckedOverwrite,
        const MethodInfo *method)
{
  System_String_o *InvalidObjectFromParam; // x0
  __int64 v19; // x1
  _BOOL8 IsHideNoEffect; // x0
  const MethodInfo *v22; // [xsp+10h] [xbp-70h]
  BattleActionData_o *invalidObject; // [xsp+28h] [xbp-58h] BYREF

  if ( (byte_5973BAA & 1) == 0 )
  {
    sub_2213A60(&LocalizationManager_TypeInfo);
    sub_2213A60(&StringLiteral_2930/*"BATTLE_NO_EFFECT_FUNCTION"*/);
    byte_5973BAA = 1;
  }
  invalidObject = 0;
  InvalidObjectFromParam = (System_String_o *)BattleLogicFunction__TryGetInvalidObjectFromParam(
                                                this,
                                                &invalidObject,
                                                targetId,
                                                funcIndex,
                                                dataVals,
                                                isCommandSideEffect,
                                                isCheckedOverwrite,
                                                (const MethodInfo *)funcTarget);
  if ( ((unsigned __int8)InvalidObjectFromParam & 1) != 0 )
    return invalidObject;
  if ( !uniqueText )
  {
    if ( !*(&LocalizationManager_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v19);
    InvalidObjectFromParam = LocalizationManager__Get((System_String_o *)StringLiteral_2930/*"BATTLE_NO_EFFECT_FUNCTION"*/, 0);
    uniqueText = InvalidObjectFromParam;
  }
  if ( !dataVals )
    sub_2213CDC(InvalidObjectFromParam, v19);
  IsHideNoEffect = DataVals__IsHideNoEffect(dataVals, targetId, 0);
  return BattleLogicFunction__getInvalidObject(
           (BattleLogicFunction_o *)IsHideNoEffect,
           targetId,
           funcIndex,
           IsHideNoEffect,
           uniqueText,
           dataVals,
           isCommandSideEffect,
           1,
           defBuffData,
           funcTarget,
           v22);
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
  System_Collections_Generic_IEnumerable_TSource__o *TargetIds_47416160; // x20
  System_Func_int__bool__o *v17; // x21
  System_Collections_Generic_IEnumerable_TSource__o *v18; // x0

  if ( (byte_5973BA1 & 1) == 0 )
  {
    sub_2213A60(&Method_BattleLogicFunction__getTargetids_b__61_0__);
    sub_2213A60(&Target_BattleTargetArgs_TypeInfo);
    sub_2213A60(&Method_System_Linq_Enumerable_ToArray_int___);
    sub_2213A60(&Method_System_Linq_Enumerable_Where_int___);
    sub_2213A60(&System_Func_int__bool__TypeInfo);
    byte_5973BA1 = 1;
  }
  args = (Target_BattleTargetArgs_o *)sub_2213CCC(Target_BattleTargetArgs_TypeInfo);
  Target_BattleTargetArgs___ctor(args, dataVals, 0);
  if ( !mainAction )
    sub_2213CDC(v10, v11);
  data = this->fields.data;
  actorId = mainAction->fields.actorId;
  targetId = mainAction->fields.targetId;
  PTTargetId = BattleActionData__getPTTargetId(mainAction, 0);
  TargetIds_47416160 = (System_Collections_Generic_IEnumerable_TSource__o *)Target__getTargetIds_47416160(
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
  v17 = (System_Func_int__bool__o *)sub_2213CCC(System_Func_int__bool__TypeInfo);
  System_Func_int__bool____ctor(v17, (Il2CppObject *)this, Method_BattleLogicFunction__getTargetids_b__61_0__, 0);
  v18 = System_Linq_Enumerable__Where_int_(
          TargetIds_47416160,
          (System_Func_TSource__bool__o *)v17,
          (const MethodInfo_38A2E70 *)Method_System_Linq_Enumerable_Where_int___);
  return System_Linq_Enumerable__ToArray_int_(
           v18,
           (const MethodInfo_389B994 *)Method_System_Linq_Enumerable_ToArray_int___);
}


BattleFieldEnvironmentData_o *BattleLogicFunction__get_FieldEnvData(
        BattleLogicFunction_o *this,
        const MethodInfo *method)
{
  struct BattleData_o *data; // x8

  data = this->fields.data;
  if ( !data )
    sub_2213CDC(this, method);
  return data->fields._FieldEnvData_k__BackingField;
}


System_Int32_array *BattleLogicFunction__get_IgnoreResistFuncIndividuality(
        BattleLogicFunction_o *this,
        const MethodInfo *method)
{
  MissionNaviTransitionBoardItem_o *p_ignoreResistFuncIndividuality; // x19
  System_Int32_array *ValueArray; // x20
  struct System_Int32_array *ignoreResistFuncIndividuality; // t1
  __int64 v6; // x1
  Il2CppObject *Master_object; // x20
  long double v8; // q0
  _QWORD *v9; // x21
  __int64 v10; // x8
  __int64 v11; // x0
  __int64 v12; // x0
  System_String_o *v13; // x2
  System_String_o *v14; // x3
  int32_t v15; // w4
  int32_t v16; // w5
  bool v17; // w6
  bool v18; // w7

  if ( (byte_5973B99 & 1) == 0 )
  {
    sub_2213A60(&Method_System_Array_Empty_int___);
    sub_2213A60(&Method_DataManager_GetMaster_ConstantStrMaster___);
    sub_2213A60(&DataManager_TypeInfo);
    sub_2213A60(&StringLiteral_7749/*"IGNORE_RESIST_FUNC_INDIVIDUALITY"*/);
    byte_5973B99 = 1;
  }
  ignoreResistFuncIndividuality = this->fields.ignoreResistFuncIndividuality;
  p_ignoreResistFuncIndividuality = (MissionNaviTransitionBoardItem_o *)&this->fields.ignoreResistFuncIndividuality;
  ValueArray = ignoreResistFuncIndividuality;
  if ( !ignoreResistFuncIndividuality )
  {
    if ( !*(&DataManager_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(DataManager_TypeInfo, method);
    Master_object = DataManager__GetMaster_object_((const MethodInfo_3856318 *)Method_DataManager_GetMaster_ConstantStrMaster___);
    v9 = Method_System_Array_Empty_int___;
    v10 = *((_QWORD *)Method_System_Array_Empty_int___ + 7);
    if ( !v10 )
    {
      sub_224B964(Method_System_Array_Empty_int___);
      v10 = v9[7];
    }
    v11 = *(_QWORD *)(v10 + 16);
    if ( (*(_WORD *)(v11 + 309) & 1) == 0 )
      v11 = sub_224B908(v8);
    if ( !*(_DWORD *)(v11 + 228) )
      *(__n128 *)&v8 = j_il2cpp_runtime_class_init_0(v11, v6);
    v12 = *(_QWORD *)(v9[7] + 16LL);
    if ( (*(_WORD *)(v12 + 309) & 1) == 0 )
      v12 = sub_224B908(v8);
    if ( !Master_object )
      sub_2213CDC(v12, v6);
    ValueArray = ConstantStrMaster__GetValueArray(
                   (ConstantStrMaster_o *)Master_object,
                   (System_String_o *)StringLiteral_7749/*"IGNORE_RESIST_FUNC_INDIVIDUALITY"*/,
                   **(System_Int32_array ***)(v12 + 184),
                   0);
    p_ignoreResistFuncIndividuality->klass = (MissionNaviTransitionBoardItem_c *)ValueArray;
    sub_2213A04(p_ignoreResistFuncIndividuality, (int32_t)ValueArray, v13, v14, v15, v16, v17, v18);
  }
  return ValueArray;
}


// local variable allocation has failed, the output may be wrong!
bool BattleLogicFunction__isDisabledBuff(
        BattleLogicFunction_o *this,
        bool passive,
        DataVals_o *baseVals,
        const MethodInfo *method)
{
  _BOOL4 v5; // w20
  char isParam; // w0
  int v8; // w20

  if ( !baseVals )
    sub_2213CDC(this, passive);
  v5 = passive;
  if ( DataVals__isParam(baseVals, 52, 0) || DataVals__isParam(baseVals, 90, 0) )
  {
    isParam = 1;
  }
  else
  {
    isParam = DataVals__isParam(baseVals, 116, 0);
    if ( (isParam & 1) == 0 && v5 )
    {
      v8 = DataVals__isParam(baseVals, 25, 0) || v5;
      isParam = !DataVals__isParam(baseVals, 26, 0) & v8;
    }
  }
  return isParam & 1;
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
    sub_2213CDC(this, args);
  v9 = (int)this;
  if ( BattleLogicFunction_ProcListInArgs__DidTriggeredFuncHaveSpecifyResults(
         args,
         targetId,
         baseVals,
         v8->fields.data,
         0)
    && BattleLogicFunction_ProcListInArgs__DidTriggeredFuncListHaveSpecifyResults(
         args,
         targetId,
         baseVals,
         v8->fields.data,
         0) )
  {
    return v9 < 0
        && !BattleLogicFunction_ProcListInArgs__isPrevFuncSuccess(args, targetId, baseVals->fields.funcIndex, 0);
  }
  else
  {
    return 1;
  }
}


bool BattleLogicFunction__isSafeDamage(
        BattleLogicFunction_o *this,
        DataVals_o *baseVals,
        int32_t targetId,
        const MethodInfo *method)
{
  const MethodInfo *v6; // x2

  if ( !baseVals )
    sub_2213CDC(this, 0);
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
    goto LABEL_9;
  max_length = funclist->max_length;
  v6 = (int)max_length > 0;
  if ( (int)max_length >= 1 )
  {
    v7 = this;
    v8 = 0;
    while ( 1 )
    {
      if ( v8 >= (unsigned int)max_length )
        sub_2213CE4(this);
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
LABEL_9:
    sub_2213CDC(this, *(_QWORD *)&uniqueId);
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
  BattleActionData_o *v19; // x19
  BattleLogicFunction_o *v20; // x20
  System_String_o *v21; // x2
  System_String_o *v22; // x3
  int32_t v23; // w4
  int32_t v24; // w5
  bool v25; // w6
  bool v26; // w7
  struct BattleData_o *data; // x8
  int32_t v28; // w26
  __int64 v29; // x1
  UnityEngine_Object_o *logic; // x21
  BattleLogicFunction_ProcListInArgs_o *v31; // x21
  WeightRate_int__c *v32; // x0
  WeightRate_int__o *v33; // x23
  int max_length; // w8
  unsigned int v35; // w28
  Il2CppClass **v36; // x8
  DataVals_o *v37; // x24
  int32_t ActSetWeight; // w25
  BattleServantData_o *v39; // x28
  int32_t Random; // w0
  int32_t actSetId; // w0
  int32_t v42; // w1
  __int64 v43; // x1
  BattleLogicFunction___c_c *v44; // x0
  System_Object_array *funcUnitArray_k__BackingField; // x23
  struct BattleLogicFunction___c_StaticFields *static_fields; // x8
  System_Func_object__bool__o *_9__46_0; // x24
  Il2CppObject *v48; // x25
  struct BattleLogicFunction___c_StaticFields *v49; // x0
  System_String_o *v50; // x2
  System_String_o *v51; // x3
  int32_t v52; // w4
  int32_t v53; // w5
  bool v54; // w6
  bool v55; // w7
  __int64 v56; // x1
  BattleLogicFunction___c_c *v57; // x0
  System_Collections_Generic_IEnumerable_TSource__o *v58; // x23
  struct BattleLogicFunction___c_StaticFields *v59; // x8
  System_Func_object__bool__o *_9__46_1; // x24
  Il2CppObject *v61; // x25
  struct BattleLogicFunction___c_StaticFields *v62; // x0
  System_String_o *v63; // x2
  System_String_o *v64; // x3
  int32_t v65; // w4
  int32_t v66; // w5
  bool v67; // w6
  bool v68; // w7
  BattleData_o *v69; // x23
  SkillValueUpApplierPlayerMaster_o *v70; // x24
  BattleLogicFunction_o *v71; // x0
  __int64 v72; // x1
  const MethodInfo *v73; // x2
  BattleLogicFunction___c_c *v74; // x0
  struct BattleLogicFunction___c_StaticFields *v75; // x8
  System_Func_object__bool__o *_9__46_2; // x23
  Il2CppObject *v77; // x24
  struct BattleLogicFunction___c_StaticFields *v78; // x0
  System_String_o *v79; // x2
  System_String_o *v80; // x3
  int32_t v81; // w4
  int32_t v82; // w5
  bool v83; // w6
  bool v84; // w7
  __int64 v85; // x1
  System_Collections_Generic_IEnumerable_TSource__o *v86; // x22
  BattleLogicFunction___c_c *v87; // x8
  struct BattleLogicFunction___c_StaticFields *v88; // x9
  System_Func_object__object__o *_9__46_3; // x23
  Il2CppObject *v90; // x24
  struct BattleLogicFunction___c_StaticFields *v91; // x0
  System_String_o *v92; // x2
  System_String_o *v93; // x3
  int32_t v94; // w4
  int32_t v95; // w5
  bool v96; // w6
  bool v97; // w7
  System_Collections_Generic_IEnumerable_TSource__o *v98; // x0
  struct BattleLogicFunctionProcess_FunctionUnitCheck_array *v99; // x26
  int v100; // w8
  bool v101; // w25
  int v102; // w27
  Il2CppClass **v103; // x8
  BattleLogicFunctionProcess_FunctionUnitCheck_o *v104; // x22
  DataVals_o *dataVals_k__BackingField; // x27
  BattleLogicFunction_ProcListInArgs_o *v106; // x26
  FunctionEntity_o *v107; // x24
  const MethodInfo *v108; // x3
  UseInFsmFuncParam_o *v109; // x23
  __int64 v110; // x1
  UseInFsmFuncParam_o *v111; // x26
  System_Collections_Generic_IEnumerable_TSource__o *funcTargetArray_k__BackingField; // x22
  BattleLogicFunction___c_c *v113; // x0
  struct BattleLogicFunction___c_StaticFields *v114; // x8
  System_Func_object__bool__o *_9__46_4; // x23
  Il2CppObject *v116; // x25
  struct BattleLogicFunction___c_StaticFields *v117; // x0
  System_String_o *v118; // x2
  System_String_o *v119; // x3
  int32_t v120; // w4
  int32_t v121; // w5
  bool v122; // w6
  bool v123; // w7
  System_Collections_Generic_IEnumerable_TSource__o *v124; // x0
  __int64 v125; // x1
  BattleLogicFunction___c_c *v126; // x8
  System_Collections_Generic_IEnumerable_TSource__o *v127; // x22
  struct BattleLogicFunction___c_StaticFields *v128; // x9
  System_Func_object__int__o *_9__46_5; // x23
  Il2CppObject *v130; // x25
  struct BattleLogicFunction___c_StaticFields *v131; // x0
  System_String_o *v132; // x2
  System_String_o *v133; // x3
  int32_t v134; // w4
  int32_t v135; // w5
  bool v136; // w6
  bool v137; // w7
  System_Collections_Generic_IEnumerable_TSource__o *v138; // x0
  System_Int32_array *v139; // x22
  bool v140; // w23
  BattleLogicFunction_PreAttackSideEffectMakeArgument_o *v141; // x25
  BattleLogicFunction_SideEffectMakeArgument_o *v142; // x0
  const MethodInfo *v143; // x6
  struct System_Collections_Generic_List_BattleActionData_BuffData__o *buffdatalist; // x8
  struct System_Collections_Generic_List_BattleActionData_HealData__o *healdatalist; // x8
  const MethodInfo *v146; // x4
  bool v147; // w0
  const MethodInfo *v148; // x4
  const MethodInfo *v149; // x6
  struct BattleLogicFunctionProcess_FunctionTargetCheck_array *v150; // x21
  int v151; // w8
  unsigned int v152; // w29
  BattleLogicFunctionProcess_FunctionTargetCheck_o *v153; // x28
  BattleLogicFunction_FuncSideEffectFunctionArgument_o *FuncSideEffectArg; // x0
  int32_t targetId_k__BackingField; // w22
  BattleLogicFunction_o *v156; // x26
  const MethodInfo *v157; // x2
  BattleActionData_o *v158; // x0
  const MethodInfo *v159; // x4
  int32_t funcType; // w23
  struct System_Int32_array *vals; // x8
  Il2CppObject *v162; // x0
  const MethodInfo *v163; // x3
  const MethodInfo *v164; // x5
  bool v166; // w4
  bool isDamage; // w0
  int v168; // w9
  int v169; // w8
  struct System_Int32_array *items; // x8
  _QWORD *v171; // x9
  __int64 v172; // x10
  struct System_Int32_array *v173; // x8
  int v174; // w25
  Il2CppObject *v175; // x0
  const MethodInfo *v176; // x3
  const MethodInfo *v177; // x5
  BattleActionData_o *v178; // x0
  const MethodInfo *v179; // x3
  int32_t actorId; // w23
  int32_t v181; // w25
  bool isSafeDamage; // w0
  int32_t v183; // w2
  const MethodInfo *v184; // x7
  BattleActionData_o *v185; // x0
  const MethodInfo *v186; // x4
  BattleActionData_o *v187; // x0
  const MethodInfo *v188; // x4
  const MethodInfo *v189; // x7
  const MethodInfo *v190; // x7
  int32_t v191; // w1
  int32_t v192; // w2
  BattleLogicFunction_o *v193; // x0
  int32_t v194; // w4
  DataVals_o *v195; // x3
  int32_t v196; // w5
  BattleActionData_o *v197; // x0
  BattleData_o *v198; // x23
  BattleLogicFunction_o *v199; // x0
  const MethodInfo *v200; // x6
  BattleData_o *v201; // x23
  BattleActionData_BuffData_o *FunctionObject; // x0
  const MethodInfo *v203; // x7
  bool isUnaffected; // w25
  int CorrectedValueFuncGainNp; // w23
  BattleLogicFunction_o *v206; // x0
  int32_t v207; // w25
  const MethodInfo *v208; // x6
  BattleActionData_BuffData_o *v209; // x23
  int32_t v210; // w1
  BattleServantData_o *v211; // x0
  BattleLogicFunction_o *v212; // x0
  int32_t v213; // w23
  const MethodInfo *v214; // x6
  BattleActionData_BuffData_o *v215; // x25
  BattleActionData_o *v216; // x0
  BattleActionData_BuffData_o *v217; // x1
  int32_t v218; // w23
  System_Int32_array *TargetList; // x25
  int32_t Value; // w0
  const MethodInfo *v221; // x6
  int32_t v222; // w23
  System_Int32_array *v223; // x25
  int32_t v224; // w0
  int32_t v225; // w2
  BattleLogicFunction_o *v226; // x0
  int32_t v227; // w1
  const MethodInfo *v228; // x3
  int32_t v229; // w23
  bool v230; // w0
  int32_t v231; // w5
  bool v232; // w6
  bool v233; // w7
  BattleLogicFunction_o *v234; // x0
  int32_t v235; // w1
  int32_t v236; // w2
  FunctionEntity_o *v237; // x3
  DataVals_o *v238; // x4
  BattleLogicFunction_o *v239; // x0
  int32_t v240; // w1
  int32_t v241; // w5
  int32_t v242; // w2
  bool v243; // w6
  FunctionEntity_o *v244; // x3
  DataVals_o *v245; // x4
  bool v246; // w7
  BattleLogicFunction_o *v247; // x0
  int32_t v248; // w4
  int32_t v249; // w1
  DataVals_o *v250; // x3
  bool v251; // w5
  FunctionEntity_o *v252; // x2
  int32_t v253; // w7
  const MethodInfo *v254; // x7
  const MethodInfo *v255; // x6
  int32_t v256; // w1
  FunctionEntity_o *v257; // x2
  DataVals_o *v258; // x3
  int32_t v259; // w4
  const MethodInfo *v260; // x5
  BattleActionData_o *v261; // x0
  FunctionEntity_o *v262; // x1
  FunctionEntity_o *v263; // x3
  MethodInfo *v264; // x4
  const MethodInfo *v265; // x6
  int32_t applyTarget; // w8
  FunctionEntity_o *v267; // x2
  const MethodInfo *v268; // x6
  BattleActionData_o *v269; // x0
  const MethodInfo *v270; // x5
  BattleActionData_o *v271; // x0
  FunctionEntity_o *v272; // x2
  const MethodInfo *v273; // x7
  BattleActionData_o *v274; // x0
  int32_t v275; // w1
  FunctionEntity_o *v276; // x2
  DataVals_o *v277; // x3
  int32_t v278; // w4
  const MethodInfo *v279; // x5
  BattleActionData_o *v280; // x0
  FunctionEntity_o *v281; // x3
  int32_t v282; // w5
  const MethodInfo *v283; // x6
  _BOOL8 v284; // x0
  FunctionEntity_o *v285; // x2
  int32_t v286; // w4
  const MethodInfo *v287; // x5
  const MethodInfo *v288; // x3
  int32_t v289; // w23
  int32_t v290; // w25
  char v291; // w5
  const MethodInfo *v292; // x7
  int32_t v293; // w4
  BattleLogicFunction_o *v294; // x0
  int32_t v295; // w1
  int32_t v296; // w2
  DataVals_o *v297; // x3
  System_String_o *v298; // x2
  System_String_o *v299; // x3
  int32_t v300; // w4
  int32_t v301; // w5
  bool v302; // w6
  bool v303; // w7
  struct BattleData_o *v304; // x8
  struct BattleCommandData_array *draw_commandlist; // x1
  int v306; // w28
  bool isParam; // w25
  bool v308; // w23
  BattleServantSnapShotOnBuffUpdate_o *v309; // x24
  System_Int32_array *v310; // x0
  BattleData_o *v311; // x23
  int32_t v312; // w25
  Generator_BGMFromChangeBGMFunc_o *v313; // x28
  float BgmFadeTime; // s0
  const MethodInfo *v315; // x4
  const MethodInfo *v316; // x6
  System_Int32_array *v317; // x23
  int32_t SameIndiualityBuffSum; // w0
  struct BattleData_o *v319; // x8
  int32_t totalCriticalStars; // w23
  int32_t Value2; // w0
  __int64 v322; // x1
  int32_t v323; // w25
  bool v324; // w4
  int32_t v325; // w2
  DataVals_o *v326; // x3
  BattleActionData_BuffData_o *v327; // x6
  const MethodInfo *v328; // x7
  int32_t v329; // w1
  int32_t v330; // w2
  BattleLogicFunction_o *v331; // x0
  int32_t v332; // w4
  DataVals_o *v333; // x3
  int32_t v334; // w5
  const MethodInfo *v335; // x4
  const MethodInfo *v336; // x4
  _BOOL8 v337; // x0
  const MethodInfo *v338; // x3
  int32_t v339; // w8
  bool v340; // w23
  int32_t v341; // w25
  int32_t HpPerValue; // w8
  int32_t v343; // w1
  const MethodInfo *v344; // x4
  BattleLogicFunction_o *v345; // x0
  DataVals_o *v346; // x1
  bool v347; // w2
  const MethodInfo *v348; // x6
  Generator_BGFromQuickChangeBGFunc_o *v349; // x23
  const MethodInfo *v350; // x3
  BattleActionData_MasterBuffData_o *v351; // x23
  const MethodInfo *v352; // x4
  BattleBuffData_o *dicFuncProcess; // x23
  BattleActionData_UpShiftGaugeData_o *v354; // x23
  const MethodInfo *v355; // x5
  DataVals_o *v356; // x3
  const MethodInfo *v357; // x5
  BattleActionData_o *SubMember; // x0
  const MethodInfo *v359; // x3
  const MethodInfo *v360; // x3
  const MethodInfo *v361; // x4
  const MethodInfo *v362; // x3
  _BOOL8 v363; // x0
  const MethodInfo *v364; // x3
  const MethodInfo *v365; // x2
  const MethodInfo *v366; // x2
  const MethodInfo *v367; // x5
  const MethodInfo *v368; // x4
  const MethodInfo *v369; // x4
  int32_t v370; // w0
  const MethodInfo *v371; // x2
  const MethodInfo *v372; // x4
  const MethodInfo *v373; // x4
  int monitor_high; // w23
  int32_t v375; // w2
  const MethodInfo *v376; // x6
  float v377; // s0
  int32_t v378; // w5
  int v379; // w23
  float v380; // s0
  int v381; // w8
  const MethodInfo *v382; // x5
  BattleLogicFunction_ProcListInArgs_o *v383; // x1
  BattleLogicFunction_o *v384; // x0
  int32_t v385; // w2
  DataVals_o *v386; // x3
  bool v387; // w4
  const MethodInfo *v388; // x4
  struct BattleData_o *v389; // x8
  UnityEngine_Object_o *perf; // x23
  struct BattleData_o *v391; // x8
  _BOOL8 v392; // x0
  const MethodInfo *v393; // x3
  _BOOL8 v394; // x0
  const MethodInfo *v395; // x3
  _BOOL8 v396; // x0
  const MethodInfo *v397; // x5
  int32_t v398; // w0
  const MethodInfo *v399; // x2
  int32_t v400; // w0
  const MethodInfo *v401; // x2
  int32_t v402; // w0
  const MethodInfo *v403; // x2
  const MethodInfo *v404; // x3
  const MethodInfo *v405; // x2
  const MethodInfo *v406; // x2
  int32_t v407; // w0
  const MethodInfo *v408; // x2
  const MethodInfo *v409; // x6
  struct BattleSkillInfoData_o *skillInfo; // x8
  char v411; // w23
  bool IsNoTargetSkipSkill; // w8
  _QWORD *v413; // x0
  _BOOL8 v414; // x0
  const MethodInfo *v415; // x3
  struct BattleData_o *v416; // x9
  System_Int32_array **p_e_entryid; // x9
  int32_t UsedNpValue_k__BackingField; // w23
  int32_t v419; // w23
  __int64 v420; // x1
  int32_t v421; // w25
  int32_t UsedChargeTurn_k__BackingField; // w23
  int32_t v423; // w23
  __int64 v424; // x1
  int32_t v425; // w25
  const MethodInfo *v426; // x2
  int32_t v427; // w0
  bool v428; // w22
  BattleLogicFunction_AfterAttackSideEffectMakeArgument_o *v429; // x23
  int v430; // w27
  BattleLogicFunction_SideEffectMakeArgument_o *Argument__Init; // x0
  const MethodInfo *v432; // x6
  BattleLogicFunction_o *v433; // x22
  BattleCommandData_o *v434; // x23
  BattleActionData_MasterBuffData_o *v435; // x22
  BattleActionData_o *NoEffectObject; // x0
  UnityEngine_Object_o *v437; // x24
  struct BattleLogic_o *v438; // x8
  unsigned __int64 v439; // x24
  __int64 v440; // x1
  UnityEngine_Object_o *v441; // x22
  int v442; // w8
  BattleLogicFunction_o *v443; // x22
  __int64 v444; // x23
  __int64 v445; // x8
  const MethodInfo *v446; // x3
  const MethodInfo *v447; // x2
  struct BattleLogicFunction_FunctionArgument_o *externalArg; // x8
  UnityEngine_Object_o *v449; // x22
  struct BattleData_o *v450; // x8
  UnityEngine_Object_o *v451; // x22
  __int64 v452; // x1
  BattleData_o *v453; // x0
  BattleServantData_o *v454; // x0
  BattleLogicFunction_o *v455; // x0
  const MethodInfo *v456; // x3
  const MethodInfo *isCheckedOverwrite; // [xsp+0h] [xbp-190h]
  const MethodInfo *isRandomDamage; // [xsp+8h] [xbp-188h]
  BattleActionData_o *mainAction; // [xsp+10h] [xbp-180h]
  const MethodInfo *v461; // [xsp+18h] [xbp-178h]
  bool isTurn; // [xsp+34h] [xbp-15Ch]
  int32_t subTargetId; // [xsp+44h] [xbp-14Ch]
  char v464; // [xsp+4Ch] [xbp-144h]
  char v465; // [xsp+50h] [xbp-140h]
  bool v466; // [xsp+54h] [xbp-13Ch]
  System_Collections_Generic_List_int__o *v467; // [xsp+58h] [xbp-138h]
  System_Int32_array_array *linkedTargetSkillIndividualityArray; // [xsp+60h] [xbp-130h]
  SkillValueUpApplierPlayerMaster_o *v469; // [xsp+68h] [xbp-128h]
  BattleServantData_o *ServantData; // [xsp+70h] [xbp-120h]
  BattleLogicFunctionProcess_FunctionUnitCheck_o *funcUnit; // [xsp+80h] [xbp-110h]
  char v472; // [xsp+88h] [xbp-108h]
  int32_t damageStartIndex; // [xsp+90h] [xbp-100h]
  int32_t v475; // [xsp+94h] [xbp-FCh]
  int32_t size; // [xsp+98h] [xbp-F8h]
  struct BattleLogicFunctionProcess_FunctionUnitCheck_array *v477; // [xsp+A0h] [xbp-F0h]
  Il2CppObject *MasterData_object; // [xsp+A8h] [xbp-E8h]
  FunctionEntity_o *funcEnt; // [xsp+B0h] [xbp-E0h]
  UseInFsmFuncParam_o *v480; // [xsp+B8h] [xbp-D8h]
  int v481; // [xsp+C4h] [xbp-CCh]
  int32_t index; // [xsp+CCh] [xbp-C4h]
  BattleLogicFunction_ProcListInArgs_o *procArgs; // [xsp+D0h] [xbp-C0h]
  _QWORD v484[2]; // [xsp+D8h] [xbp-B8h] BYREF
  System_Collections_Generic_List_Enumerator_int__o v485; // [xsp+E8h] [xbp-A8h] BYREF
  int32_t param[2]; // [xsp+100h] [xbp-90h] BYREF
  System_Collections_Generic_HashSet_BattleBuffData_BuffData__o *buffsToRemove; // [xsp+108h] [xbp-88h] BYREF
  int32_t absorptionCount; // [xsp+114h] [xbp-7Ch] BYREF
  RemovedBuffInfo_o *subBuffInfo; // [xsp+118h] [xbp-78h] BYREF
  Il2CppObject *entity; // [xsp+120h] [xbp-70h] BYREF
  int32_t funcIndex; // [xsp+12Ch] [xbp-64h] BYREF

  v19 = action;
  v20 = this;
  if ( (byte_5973B9C & 1) == 0 )
  {
    sub_2213A60(&BattleLogicFunction_AfterAttackSideEffectMakeArgument_TypeInfo);
    sub_2213A60(&Generator_BGFromQuickChangeBGFunc_TypeInfo);
    sub_2213A60(&Generator_BGMFromChangeBGMFunc_TypeInfo);
    sub_2213A60(&Method_BasicHelper_Any_BattleLogicFunctionProcess_FunctionUnitCheck___);
    sub_2213A60(&BattleCommandData_TypeInfo);
    sub_2213A60(&BattleServantSnapShotOnBuffUpdate_TypeInfo);
    sub_2213A60(&Method_DataManager_GetMasterData_BuffMaster___);
    sub_2213A60(&Method_DataManager_GetMasterData_SkillMaster___);
    sub_2213A60(&Method_DataMasterBase_BuffMaster__BuffEntity__int__GetEntity__);
    sub_2213A60(&Method_DataMasterBase_SkillMaster__SkillEntity__int__TryGetEntity__);
    sub_2213A60(&BattleActionData_DownShiftGaugeData_TypeInfo);
    sub_2213A60(&Method_System_Linq_Enumerable_All_BattleLogicFunctionProcess_FunctionUnitCheck___);
    sub_2213A60(&Method_System_Linq_Enumerable_SelectMany_DataVals__int_____);
    sub_2213A60(&Method_System_Linq_Enumerable_Select_BattleLogicFunctionProcess_FunctionTargetCheck__int___);
    sub_2213A60(&Method_System_Linq_Enumerable_ToArray_int_____);
    sub_2213A60(&Method_System_Linq_Enumerable_ToArray_int___);
    sub_2213A60(&Method_System_Linq_Enumerable_Where_DataVals___);
    sub_2213A60(&Method_System_Linq_Enumerable_Where_BattleLogicFunctionProcess_FunctionTargetCheck___);
    sub_2213A60(&Method_System_Collections_Generic_List_Enumerator_int__Dispose__);
    sub_2213A60(&Method_System_Collections_Generic_List_Enumerator_int__MoveNext__);
    sub_2213A60(&Method_System_Collections_Generic_List_Enumerator_int__get_Current__);
    sub_2213A60(&System_Func_BattleLogicFunctionProcess_FunctionUnitCheck__bool__TypeInfo);
    sub_2213A60(&System_Func_DataVals__IEnumerable_int_____TypeInfo);
    sub_2213A60(&System_Func_BattleLogicFunctionProcess_FunctionTargetCheck__int__TypeInfo);
    sub_2213A60(&System_Func_BattleLogicFunctionProcess_FunctionTargetCheck__bool__TypeInfo);
    sub_2213A60(&System_Func_DataVals__bool__TypeInfo);
    sub_2213A60(&Method_System_Collections_Generic_HashSet_BattleBuffData_BuffData__get_Count__);
    sub_2213A60(&Method_System_Collections_Generic_List_int__Add__);
    sub_2213A60(&Method_System_Collections_Generic_List_int__GetEnumerator__);
    sub_2213A60(&Method_System_Collections_Generic_List_int___ctor__);
    sub_2213A60(&Method_System_Collections_Generic_List_BattleActionData_BuffData__get_Count__);
    sub_2213A60(&Method_System_Collections_Generic_List_BattleActionData_DamageData__get_Count__);
    sub_2213A60(&Method_System_Collections_Generic_List_BattleActionData_HealData__get_Count__);
    sub_2213A60(&System_Collections_Generic_List_int__TypeInfo);
    sub_2213A60(&BattleActionData_MasterBuffData_TypeInfo);
    sub_2213A60(&System_Math_TypeInfo);
    sub_2213A60(&Method_System_Nullable_bool__GetValueOrDefault__);
    sub_2213A60(&Method_System_Nullable_bool___ctor__);
    sub_2213A60(&UnityEngine_Object_TypeInfo);
    sub_2213A60(&BattleLogicFunction_PreAttackSideEffectMakeArgument_TypeInfo);
    sub_2213A60(&BattleLogicFunction_ProcListInArgs_TypeInfo);
    sub_2213A60(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_2213A60(&SkillValueUpApplierPlayerMaster_TypeInfo);
    sub_2213A60(&Method_BattleLogicFunction___c__procList_b__46_0__);
    sub_2213A60(&Method_BattleLogicFunction___c__procList_b__46_1__);
    sub_2213A60(&Method_BattleLogicFunction___c__procList_b__46_2__);
    sub_2213A60(&Method_BattleLogicFunction___c__procList_b__46_3__);
    sub_2213A60(&Method_BattleLogicFunction___c__procList_b__46_4__);
    sub_2213A60(&Method_BattleLogicFunction___c__procList_b__46_5__);
    sub_2213A60(&BattleLogicFunction___c_TypeInfo);
    sub_2213A60(&BattleActionData_UpShiftGaugeData_TypeInfo);
    sub_2213A60(&Method_WeightRate_int___ctor__);
    sub_2213A60(&Method_WeightRate_int__getCount__);
    sub_2213A60(&Method_WeightRate_int__getData__);
    sub_2213A60(&Method_WeightRate_int__getTotalWeight__);
    sub_2213A60(&Method_WeightRate_int__setWeight__);
    this = (BattleLogicFunction_o *)sub_2213A60(&WeightRate_int__TypeInfo);
    byte_5973B9C = 1;
  }
  funcIndex = 0;
  subBuffInfo = 0;
  entity = 0;
  absorptionCount = 0;
  *(_QWORD *)param = 0;
  buffsToRemove = 0;
  memset(&v485, 0, sizeof(v485));
  if ( !v19 )
    goto LABEL_562;
  this = (BattleLogicFunction_o *)v20->fields.data;
  if ( !this )
    goto LABEL_562;
  ServantData = BattleData__getServantData((BattleData_o *)this, v19->fields.actorId, 0);
  BattleActionData__getPTTargetId(v19, 0);
  this = (BattleLogicFunction_o *)BattleActionData__getPTSubTargetId(v19, 0);
  data = v20->fields.data;
  if ( !data )
    goto LABEL_562;
  v28 = (int)this;
  data->fields.beforeAction = v19;
  sub_2213A04(
    (MissionNaviTransitionBoardItem_o *)&data->fields.beforeAction,
    (int32_t)v19,
    v21,
    v22,
    v23,
    v24,
    v25,
    v26);
  v467 = (System_Collections_Generic_List_int__o *)sub_2213CCC(System_Collections_Generic_List_int__TypeInfo);
  System_Collections_Generic_List_int____ctor(
    v467,
    (const MethodInfo_44669E0 *)Method_System_Collections_Generic_List_int___ctor__);
  this = (BattleLogicFunction_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_47A29F8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !this )
    goto LABEL_562;
  MasterData_object = DataManager__GetMasterData_object_(
                        (DataManager_o *)this,
                        (const MethodInfo_385636C *)Method_DataManager_GetMasterData_BuffMaster___);
  if ( isReduceReset )
  {
    logic = (UnityEngine_Object_o *)v20->fields.logic;
    if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v29);
    if ( UnityEngine_Object__op_Inequality(logic, 0, 0) )
    {
      this = (BattleLogicFunction_o *)v20->fields.logic;
      if ( !this )
        goto LABEL_562;
      BattleLogic__resetReducedHpAll((BattleLogic_o *)this, 0);
    }
  }
  subTargetId = v28;
  v31 = (BattleLogicFunction_ProcListInArgs_o *)sub_2213CCC(BattleLogicFunction_ProcListInArgs_TypeInfo);
  BattleLogicFunction_ProcListInArgs___ctor(v31, argument, v19, 0);
  if ( !v31 )
    goto LABEL_562;
  BattleLogicFunction_ProcListInArgs__set_IsCommandSideEffect(v31, isCommandSideEffect, 0);
  BattleLogicFunction_ProcListInArgs__set_IsShift(v31, isShift, 0);
  BattleLogicFunction_ProcListInArgs__set_IsPassive(v31, passive, 0);
  v31->fields._IsTreasureDvc_k__BackingField = isTreasureDvc;
  if ( BattleLogicFunction_ProcListInArgs__get_SkillId(v31, 0) <= 0 )
    BattleLogicFunction_ProcListInArgs__set_SkillId(v31, skillId, 0);
  funcIndex = 0;
  BattleLogicFunction_ProcListInArgs__initFunctionUnitCheck(v31, v20, functionlist, baseValslist, &funcIndex, v19, 0);
  v32 = WeightRate_int__TypeInfo;
  v31->fields.actSetId = 0;
  v33 = (WeightRate_int__o *)sub_2213CCC(v32);
  WeightRate_int____ctor(v33, (const MethodInfo_3DA1D84 *)Method_WeightRate_int___ctor__);
  if ( !baseValslist )
    goto LABEL_562;
  max_length = baseValslist->max_length;
  if ( max_length >= 1 )
  {
    v35 = 0;
    while ( v35 < max_length )
    {
      v36 = &baseValslist->obj.klass + (int)v35;
      v37 = (DataVals_o *)v36[4];
      if ( !v37 )
        goto LABEL_562;
      DataVals__loadActSet((DataVals_o *)v36[4], 0);
      this = (BattleLogicFunction_o *)DataVals__checkActSet(v37, 0);
      if ( ((unsigned __int8)this & 1) != 0 )
      {
        this = (BattleLogicFunction_o *)DataVals__getActSetWeight(v37, 0);
        if ( (int)this >= 1 )
        {
          ActSetWeight = DataVals__getActSetWeight(v37, 0);
          this = (BattleLogicFunction_o *)DataVals__getActSet(v37, 0);
          if ( !v33 )
            goto LABEL_562;
          WeightRate_int___setWeight(
            v33,
            ActSetWeight,
            (int32_t)this,
            (const MethodInfo_3DA11F8 *)Method_WeightRate_int__setWeight__);
        }
      }
      max_length = baseValslist->max_length;
      if ( (int)++v35 >= max_length )
        goto LABEL_26;
    }
LABEL_563:
    sub_2213CE4(this);
  }
LABEL_26:
  if ( !v33 )
    goto LABEL_562;
  v39 = ServantData;
  if ( WeightRate_int___getCount(v33, (const MethodInfo_3DA15D4 *)Method_WeightRate_int__getCount__) <= 0 )
  {
    actSetId = v31->fields.actSetId;
  }
  else
  {
    Random = BattleRandom__getRandom(0, v33->fields.totalweight, 0);
    actSetId = WeightRate_int___getData(v33, Random, (const MethodInfo_3DA1690 *)Method_WeightRate_int__getData__);
    v31->fields.actSetId = actSetId;
  }
  v42 = funcIndex;
  v19->fields.ActSetId = actSetId;
  BattleActionData__initFuncTargetPlayerType(v19, v42, 0);
  v44 = BattleLogicFunction___c_TypeInfo;
  funcUnitArray_k__BackingField = (System_Object_array *)v31->fields._funcUnitArray_k__BackingField;
  if ( !*(&BattleLogicFunction___c_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(BattleLogicFunction___c_TypeInfo, v43);
    v44 = BattleLogicFunction___c_TypeInfo;
  }
  static_fields = v44->static_fields;
  _9__46_0 = (System_Func_object__bool__o *)static_fields->__9__46_0;
  if ( !_9__46_0 )
  {
    if ( !*(&v44->_2.cctor_finished + 1) )
    {
      j_il2cpp_runtime_class_init_0(v44, v43);
      static_fields = BattleLogicFunction___c_TypeInfo->static_fields;
    }
    v48 = (Il2CppObject *)static_fields->__9;
    _9__46_0 = (System_Func_object__bool__o *)sub_2213CCC(System_Func_BattleLogicFunctionProcess_FunctionUnitCheck__bool__TypeInfo);
    System_Func_object__bool____ctor(_9__46_0, v48, Method_BattleLogicFunction___c__procList_b__46_0__, 0);
    v49 = BattleLogicFunction___c_TypeInfo->static_fields;
    v49->__9__46_0 = (struct System_Func_BattleLogicFunctionProcess_FunctionUnitCheck__bool__o *)_9__46_0;
    sub_2213A04((MissionNaviTransitionBoardItem_o *)&v49->__9__46_0, (int32_t)_9__46_0, v50, v51, v52, v53, v54, v55);
  }
  if ( !BasicHelper__Any_object__58785420(
          funcUnitArray_k__BackingField,
          (System_Func_T__bool__o *)_9__46_0,
          (const MethodInfo_380FE8C *)Method_BasicHelper_Any_BattleLogicFunctionProcess_FunctionUnitCheck___) )
    v19->fields.isSuccessTargetSelection = 1;
  v57 = BattleLogicFunction___c_TypeInfo;
  v58 = (System_Collections_Generic_IEnumerable_TSource__o *)v31->fields._funcUnitArray_k__BackingField;
  if ( !*(&BattleLogicFunction___c_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(BattleLogicFunction___c_TypeInfo, v56);
    v57 = BattleLogicFunction___c_TypeInfo;
  }
  v59 = v57->static_fields;
  _9__46_1 = (System_Func_object__bool__o *)v59->__9__46_1;
  if ( !_9__46_1 )
  {
    if ( !*(&v57->_2.cctor_finished + 1) )
    {
      j_il2cpp_runtime_class_init_0(v57, v56);
      v59 = BattleLogicFunction___c_TypeInfo->static_fields;
    }
    v61 = (Il2CppObject *)v59->__9;
    _9__46_1 = (System_Func_object__bool__o *)sub_2213CCC(System_Func_BattleLogicFunctionProcess_FunctionUnitCheck__bool__TypeInfo);
    System_Func_object__bool____ctor(_9__46_1, v61, Method_BattleLogicFunction___c__procList_b__46_1__, 0);
    v62 = BattleLogicFunction___c_TypeInfo->static_fields;
    v62->__9__46_1 = (struct System_Func_BattleLogicFunctionProcess_FunctionUnitCheck__bool__o *)_9__46_1;
    sub_2213A04((MissionNaviTransitionBoardItem_o *)&v62->__9__46_1, (int32_t)_9__46_1, v63, v64, v65, v66, v67, v68);
  }
  v19->fields.isSkillCopyFunctionOnly = System_Linq_Enumerable__All_object_(
                                          v58,
                                          (System_Func_TSource__bool__o *)_9__46_1,
                                          (const MethodInfo_3864CD0 *)Method_System_Linq_Enumerable_All_BattleLogicFunctionProcess_FunctionUnitCheck___);
  v472 = 1;
  if ( BattleLogicFunction_ProcListInArgs__MatchSkillType(v31, 1, 0) )
  {
    this = (BattleLogicFunction_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_47A29F8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !this )
      goto LABEL_562;
    this = (BattleLogicFunction_o *)DataManager__GetMasterData_object_(
                                      (DataManager_o *)this,
                                      (const MethodInfo_385636C *)Method_DataManager_GetMasterData_SkillMaster___);
    if ( !this )
      goto LABEL_562;
    if ( DataMasterBase_object__object__int___TryGetEntity(
           (DataMasterBase_TMaster__TEntity__PKType__o *)this,
           &entity,
           skillId,
           (const MethodInfo_3F10B80 *)Method_DataMasterBase_SkillMaster__SkillEntity__int__TryGetEntity__) )
    {
      this = (BattleLogicFunction_o *)entity;
      if ( !entity )
        goto LABEL_562;
      if ( SkillEntity__IsIgnoreValueUp((SkillEntity_o *)entity, 0) )
        goto LABEL_53;
    }
    v69 = v20->fields.data;
    v70 = (SkillValueUpApplierPlayerMaster_o *)sub_2213CCC(SkillValueUpApplierPlayerMaster_TypeInfo);
    SkillValueUpApplierPlayerMaster___ctor(v70, v69, 0);
    if ( !v70 )
    {
LABEL_53:
      v469 = 0;
      v472 = 1;
    }
    else
    {
      v469 = v70;
      ((void (__fastcall *)(SkillValueUpApplierPlayerMaster_o *, const MethodInfo *))v70->klass->vtable._4_Init.methodPtr)(
        v70,
        v70->klass->vtable._4_Init.method);
      v472 = 0;
    }
  }
  else
  {
    v469 = 0;
  }
  BattleActionData__UpdateTargetRangeOfTreasureDevice(
    v19,
    v20->fields.data,
    v19,
    v31->fields._funcUnitArray_k__BackingField,
    0);
  v466 = isTreasureDvc
      && BattleLogicFunction__HasMultipleTreasureDamageFunc(v71, v31->fields._funcUnitArray_k__BackingField, v73);
  v74 = BattleLogicFunction___c_TypeInfo;
  if ( !*(&BattleLogicFunction___c_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(BattleLogicFunction___c_TypeInfo, v72);
    v74 = BattleLogicFunction___c_TypeInfo;
  }
  v75 = v74->static_fields;
  _9__46_2 = (System_Func_object__bool__o *)v75->__9__46_2;
  if ( !_9__46_2 )
  {
    if ( !*(&v74->_2.cctor_finished + 1) )
    {
      j_il2cpp_runtime_class_init_0(v74, v72);
      v75 = BattleLogicFunction___c_TypeInfo->static_fields;
    }
    v77 = (Il2CppObject *)v75->__9;
    _9__46_2 = (System_Func_object__bool__o *)sub_2213CCC(System_Func_DataVals__bool__TypeInfo);
    System_Func_object__bool____ctor(_9__46_2, v77, Method_BattleLogicFunction___c__procList_b__46_2__, 0);
    v78 = BattleLogicFunction___c_TypeInfo->static_fields;
    v78->__9__46_2 = (struct System_Func_DataVals__bool__o *)_9__46_2;
    sub_2213A04((MissionNaviTransitionBoardItem_o *)&v78->__9__46_2, (int32_t)_9__46_2, v79, v80, v81, v82, v83, v84);
  }
  v86 = System_Linq_Enumerable__Where_object_(
          (System_Collections_Generic_IEnumerable_TSource__o *)baseValslist,
          (System_Func_TSource__bool__o *)_9__46_2,
          (const MethodInfo_38A3478 *)Method_System_Linq_Enumerable_Where_DataVals___);
  procArgs = v31;
  v87 = BattleLogicFunction___c_TypeInfo;
  if ( !*(&BattleLogicFunction___c_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(BattleLogicFunction___c_TypeInfo, v85);
    v87 = BattleLogicFunction___c_TypeInfo;
  }
  v88 = v87->static_fields;
  _9__46_3 = (System_Func_object__object__o *)v88->__9__46_3;
  if ( !_9__46_3 )
  {
    if ( !*(&v87->_2.cctor_finished + 1) )
    {
      j_il2cpp_runtime_class_init_0(v87, v85);
      v88 = BattleLogicFunction___c_TypeInfo->static_fields;
    }
    v90 = (Il2CppObject *)v88->__9;
    _9__46_3 = (System_Func_object__object__o *)sub_2213CCC(System_Func_DataVals__IEnumerable_int_____TypeInfo);
    System_Func_object__object____ctor(_9__46_3, v90, Method_BattleLogicFunction___c__procList_b__46_3__, 0);
    v91 = BattleLogicFunction___c_TypeInfo->static_fields;
    v91->__9__46_3 = (struct System_Func_DataVals__IEnumerable_int_____o *)_9__46_3;
    sub_2213A04((MissionNaviTransitionBoardItem_o *)&v91->__9__46_3, (int32_t)_9__46_3, v92, v93, v94, v95, v96, v97);
  }
  v98 = (System_Collections_Generic_IEnumerable_TSource__o *)System_Linq_Enumerable__SelectMany_object__object_(
                                                               v86,
                                                               (System_Func_TSource__IEnumerable_TResult___o *)_9__46_3,
                                                               (const MethodInfo_3893CAC *)Method_System_Linq_Enumerable_SelectMany_DataVals__int_____);
  this = (BattleLogicFunction_o *)System_Linq_Enumerable__ToArray_object_(
                                    v98,
                                    (const MethodInfo_389BB2C *)Method_System_Linq_Enumerable_ToArray_int_____);
  linkedTargetSkillIndividualityArray = (System_Int32_array_array *)this;
  v99 = v31->fields._funcUnitArray_k__BackingField;
  if ( !v99 )
    goto LABEL_562;
  v100 = v99->max_length;
  v101 = isCommandSideEffect;
  if ( v100 >= 1 )
  {
    v102 = 0;
    v464 = 0;
    v465 = 0;
    v477 = v31->fields._funcUnitArray_k__BackingField;
    while ( 1 )
    {
      if ( v102 >= (unsigned int)v100 )
        goto LABEL_563;
      v103 = &v99->obj.klass + v102;
      v481 = v102;
      v104 = (BattleLogicFunctionProcess_FunctionUnitCheck_o *)v103[4];
      if ( !v104 )
        goto LABEL_562;
      this = (BattleLogicFunction_o *)BattleLogicFunctionProcess_FunctionUnitCheck__get_FuncIndex(
                                        (BattleLogicFunctionProcess_FunctionUnitCheck_o *)v103[4],
                                        0);
      dataVals_k__BackingField = v104->fields._dataVals_k__BackingField;
      v106 = procArgs;
      index = (int)this;
      if ( !dataVals_k__BackingField )
        goto LABEL_562;
      v107 = dataVals_k__BackingField->fields.funcEnt;
      this = (BattleLogicFunction_o *)BattleLogicFunctionProcess_FunctionUnitCheck__checkCondtion(v104, v19, 0);
      if ( ((unsigned __int8)this & 1) == 0 )
        goto LABEL_501;
      if ( (v472 & 1) == 0 )
        ((void (__fastcall *)(SkillValueUpApplierPlayerMaster_o *, BattleLogicFunctionProcess_FunctionUnitCheck_o *, const MethodInfo *))v469->klass->vtable._5_ApplyTo.methodPtr)(
          v469,
          v104,
          v469->klass->vtable._5_ApplyTo.method);
      this = (BattleLogicFunction_o *)UseInFsmFuncParam__Make(dataVals_k__BackingField, 0);
      v109 = (UseInFsmFuncParam_o *)this;
      funcUnit = v104;
      if ( isCreateSideEffect )
      {
        if ( !v107 )
          goto LABEL_562;
        if ( BattleLogicFunction__IsAttackSideEffectInvokeFunc(
               this,
               v107->fields.funcType,
               dataVals_k__BackingField,
               v108) )
        {
          v111 = v109;
          funcTargetArray_k__BackingField = (System_Collections_Generic_IEnumerable_TSource__o *)v104->fields._funcTargetArray_k__BackingField;
          v113 = BattleLogicFunction___c_TypeInfo;
          if ( !*(&BattleLogicFunction___c_TypeInfo->_2.cctor_finished + 1) )
          {
            j_il2cpp_runtime_class_init_0(BattleLogicFunction___c_TypeInfo, v110);
            v113 = BattleLogicFunction___c_TypeInfo;
          }
          v114 = v113->static_fields;
          _9__46_4 = (System_Func_object__bool__o *)v114->__9__46_4;
          if ( !_9__46_4 )
          {
            if ( !*(&v113->_2.cctor_finished + 1) )
            {
              j_il2cpp_runtime_class_init_0(v113, v110);
              v114 = BattleLogicFunction___c_TypeInfo->static_fields;
            }
            v116 = (Il2CppObject *)v114->__9;
            _9__46_4 = (System_Func_object__bool__o *)sub_2213CCC(System_Func_BattleLogicFunctionProcess_FunctionTargetCheck__bool__TypeInfo);
            System_Func_object__bool____ctor(_9__46_4, v116, Method_BattleLogicFunction___c__procList_b__46_4__, 0);
            v117 = BattleLogicFunction___c_TypeInfo->static_fields;
            v117->__9__46_4 = (struct System_Func_BattleLogicFunctionProcess_FunctionTargetCheck__bool__o *)_9__46_4;
            sub_2213A04(
              (MissionNaviTransitionBoardItem_o *)&v117->__9__46_4,
              (int32_t)_9__46_4,
              v118,
              v119,
              v120,
              v121,
              v122,
              v123);
          }
          v124 = System_Linq_Enumerable__Where_object_(
                   funcTargetArray_k__BackingField,
                   (System_Func_TSource__bool__o *)_9__46_4,
                   (const MethodInfo_38A3478 *)Method_System_Linq_Enumerable_Where_BattleLogicFunctionProcess_FunctionTargetCheck___);
          v126 = BattleLogicFunction___c_TypeInfo;
          v127 = v124;
          if ( !*(&BattleLogicFunction___c_TypeInfo->_2.cctor_finished + 1) )
          {
            j_il2cpp_runtime_class_init_0(BattleLogicFunction___c_TypeInfo, v125);
            v126 = BattleLogicFunction___c_TypeInfo;
          }
          v128 = v126->static_fields;
          _9__46_5 = (System_Func_object__int__o *)v128->__9__46_5;
          if ( !_9__46_5 )
          {
            if ( !*(&v126->_2.cctor_finished + 1) )
            {
              j_il2cpp_runtime_class_init_0(v126, v125);
              v128 = BattleLogicFunction___c_TypeInfo->static_fields;
            }
            v130 = (Il2CppObject *)v128->__9;
            _9__46_5 = (System_Func_object__int__o *)sub_2213CCC(System_Func_BattleLogicFunctionProcess_FunctionTargetCheck__int__TypeInfo);
            System_Func_object__int____ctor(_9__46_5, v130, Method_BattleLogicFunction___c__procList_b__46_5__, 0);
            v131 = BattleLogicFunction___c_TypeInfo->static_fields;
            v131->__9__46_5 = (struct System_Func_BattleLogicFunctionProcess_FunctionTargetCheck__int__o *)_9__46_5;
            sub_2213A04(
              (MissionNaviTransitionBoardItem_o *)&v131->__9__46_5,
              (int32_t)_9__46_5,
              v132,
              v133,
              v134,
              v135,
              v136,
              v137);
          }
          v138 = (System_Collections_Generic_IEnumerable_TSource__o *)System_Linq_Enumerable__Select_object__int_(
                                                                        v127,
                                                                        (System_Func_TSource__TResult__o *)_9__46_5,
                                                                        (const MethodInfo_389085C *)Method_System_Linq_Enumerable_Select_BattleLogicFunctionProcess_FunctionTargetCheck__int___);
          v139 = System_Linq_Enumerable__ToArray_int_(
                   v138,
                   (const MethodInfo_389B994 *)Method_System_Linq_Enumerable_ToArray_int___);
          v140 = FuncList__Check(26, v107->fields.funcType, 0);
          v141 = (BattleLogicFunction_PreAttackSideEffectMakeArgument_o *)sub_2213CCC(BattleLogicFunction_PreAttackSideEffectMakeArgument_TypeInfo);
          BattleLogicFunction_PreAttackSideEffectMakeArgument___ctor(v141, 0);
          if ( !v141 )
            goto LABEL_562;
          v142 = (BattleLogicFunction_SideEffectMakeArgument_o *)((__int64 (__fastcall *)(BattleLogicFunction_PreAttackSideEffectMakeArgument_o *, System_Int32_array *, const MethodInfo *))v141->klass->vtable._6_Init.methodPtr)(
                                                                   v141,
                                                                   v139,
                                                                   v141->klass->vtable._6_Init.method);
          BattleLogicFunction__setAttackSideEffect(v20, v19, v39, v140 || isTreasureDvc, v142, 0, v143);
          v101 = isCommandSideEffect;
          v104 = funcUnit;
          v109 = v111;
          v106 = procArgs;
        }
      }
      buffdatalist = v19->fields.buffdatalist;
      if ( buffdatalist )
        size = buffdatalist->fields._size;
      else
        size = 0;
      healdatalist = v19->fields.healdatalist;
      if ( healdatalist )
        v475 = healdatalist->fields._size;
      else
        v475 = 0;
      this = (BattleLogicFunction_o *)BattleActionData__get_damagedatalist(v19, 0);
      if ( !this || !v107 )
        goto LABEL_562;
      damageStartIndex = (int32_t)this->fields.logic;
      this = (BattleLogicFunction_o *)Target__Check(33, v107->fields.targetType, 0);
      if ( ((unsigned __int8)this & 1) != 0 )
      {
        if ( FuncList__Check(52, v107->fields.funcType, 0)
          || (this = (BattleLogicFunction_o *)FuncList__Check(62, v107->fields.funcType, 0),
              ((unsigned __int8)this & 1) != 0) )
        {
          v147 = FuncList__Check(52, v107->fields.funcType, 0);
          if ( BattleLogicFunction__UpdateUserEquipSkillChargeTurn(
                 v20,
                 dataVals_k__BackingField,
                 v147,
                 linkedTargetSkillIndividualityArray,
                 v148) )
          {
            BattleLogicFunction__CreateMasterBuffEffect(v20, v19, v107, index, v101, dataVals_k__BackingField, v149);
          }
          else
          {
            v435 = (BattleActionData_MasterBuffData_o *)sub_2213CCC(BattleActionData_MasterBuffData_TypeInfo);
            BattleActionData_MasterBuffData___ctor(v435, v107, 0);
            this = (BattleLogicFunction_o *)DataVals__IsImmediateMasterPopupEnabled(dataVals_k__BackingField, 0);
            if ( !v435 )
              goto LABEL_562;
            v435->fields._ShowDuringNoblePhantasm_k__BackingField = (unsigned __int8)this & 1;
            v435->fields.popColor = 1;
            NoEffectObject = BattleLogicFunction__getNoEffectObject(
                               v20,
                               -1,
                               index,
                               dataVals_k__BackingField,
                               v101,
                               0,
                               (BattleActionData_BuffData_o *)v435,
                               0,
                               0,
                               isRandomDamage);
            BattleActionData__addAction(v19, NoEffectObject, 0);
          }
          goto LABEL_501;
        }
      }
      v150 = v104->fields._funcTargetArray_k__BackingField;
      if ( !v150 )
        goto LABEL_562;
      v151 = v150->max_length;
      if ( v151 >= 1 )
        break;
LABEL_491:
      v427 = DataVals__GetParam(dataVals_k__BackingField, 277, 0, 0);
      BattleActionData__SetShowBuffGroupId(v19, v427, size, v475, damageStartIndex, 0);
      BattleActionData__AddUseInFsmFuncParam(v19, v109, 0);
      if ( !isCreateSideEffect )
      {
        v39 = ServantData;
LABEL_501:
        v99 = v477;
        v430 = v481;
        goto LABEL_502;
      }
      v428 = FuncList__Check(26, v107->fields.funcType, 0);
      v429 = (BattleLogicFunction_AfterAttackSideEffectMakeArgument_o *)sub_2213CCC(BattleLogicFunction_AfterAttackSideEffectMakeArgument_TypeInfo);
      BattleLogicFunction_AfterAttackSideEffectMakeArgument___ctor(v429, 0);
      v39 = ServantData;
      v99 = v477;
      v430 = v481;
      if ( !v429 )
        goto LABEL_562;
      Argument__Init = BattleLogicFunction_AfterAttackSideEffectMakeArgument__Init(v429, v19, 0);
      BattleLogicFunction__setAttackSideEffect(v20, v19, ServantData, v428 || isTreasureDvc, Argument__Init, v466, v432);
      this = (BattleLogicFunction_o *)BattleActionData__getDamageTargetIdList(v19, 0);
      if ( !this )
        goto LABEL_562;
      v433 = this;
      if ( this->fields.logic )
      {
        if ( isTreasureDvc && ServantData != 0 )
        {
          v434 = (BattleCommandData_o *)sub_2213CCC(BattleCommandData_TypeInfo);
          BattleCommandData___ctor(v434, 0);
          this = (BattleLogicFunction_o *)BattleServantData__getTreasureDvcCardId(ServantData, 0);
          if ( !v434 )
            goto LABEL_562;
          v434->fields._type = (int)this;
          v434->fields.treasureDvc = BattleServantData__getTreasureDvcId(ServantData, 1, 0, 0);
        }
        else
        {
          v434 = 0;
        }
        v437 = (UnityEngine_Object_o *)v20->fields.logic;
        if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
          j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, action);
        this = (BattleLogicFunction_o *)UnityEngine_Object__op_Inequality(v437, 0, 0);
        if ( ((unsigned __int8)this & 1) != 0 )
        {
          v438 = v433->fields.logic;
          if ( (int)v438 >= 1 )
          {
            v439 = 0;
            do
            {
              if ( v439 >= (unsigned int)v438 )
                goto LABEL_563;
              this = (BattleLogicFunction_o *)v20->fields.logic;
              if ( !this )
                goto LABEL_562;
              this = (BattleLogicFunction_o *)BattleLogic__SetDamageSideEffect(
                                                (BattleLogic_o *)this,
                                                v19,
                                                v19->fields.actorId,
                                                *((_DWORD *)&v433->fields.logictarget + v439),
                                                v434,
                                                index,
                                                0);
              LODWORD(v438) = v433->fields.logic;
              ++v439;
            }
            while ( (__int64)v439 < (int)v438 );
            v101 = isCommandSideEffect;
          }
        }
      }
LABEL_502:
      v100 = v99->max_length;
      v102 = v430 + 1;
      if ( v102 >= v100 )
        goto LABEL_515;
    }
    v152 = 0;
    funcEnt = v107;
    v480 = v109;
    while ( 1 )
    {
      if ( v152 >= v151 )
        goto LABEL_563;
      v153 = v150->m_Items[v152];
      if ( !v153 )
        goto LABEL_562;
      BattleLogicFunction__SetTargetFuncList(
        v20,
        v153->fields._targetId_k__BackingField,
        v19,
        dataVals_k__BackingField,
        v146);
      FuncSideEffectArg = BattleLogicFunction_ProcListInArgs__get_FuncSideEffectArg(v106, 0);
      if ( FuncSideEffectArg )
        BattleLogicFunction_FuncSideEffectFunctionArgument__AddTarget(FuncSideEffectArg, v153, 0);
      this = (BattleLogicFunction_o *)v20->fields.data;
      if ( !this )
        goto LABEL_562;
      targetId_k__BackingField = v153->fields._targetId_k__BackingField;
      this = (BattleLogicFunction_o *)BattleData__getServantData((BattleData_o *)this, targetId_k__BackingField, 0);
      if ( !v153->fields._result_k__BackingField )
      {
        v158 = BattleLogicFunctionProcess_FunctionTargetCheck__getInvalidObject(v153, v19, 0);
LABEL_121:
        BattleActionData__addAction(v19, v158, 0);
        BattleLogicFunction__SetReceiveFunctionId(v20, v19, targetId_k__BackingField, v107, v159);
LABEL_122:
        v106 = procArgs;
        goto LABEL_170;
      }
      v156 = this;
      if ( !this )
        goto LABEL_562;
      this = (BattleLogicFunction_o *)BattleServantData__CheckNotTargetSkill((BattleServantData_o *)this, skillId, 0);
      if ( ((unsigned __int8)this & 1) != 0 )
      {
        v158 = BattleLogicFunction__getNoEffectObject(
                 v20,
                 (int32_t)v156->fields.logic,
                 index,
                 dataVals_k__BackingField,
                 v101,
                 0,
                 0,
                 0,
                 0,
                 isRandomDamage);
        goto LABEL_121;
      }
      v19->fields.funcResult = 1;
      procArgs->fields.tdCommandTypeChange = -1;
      funcType = v107->fields.funcType;
      if ( (unsigned int)(funcType - 160) < 2 || funcType == 16 || funcType == 1 )
      {
        vals = v107->fields.vals;
        if ( !vals )
          goto LABEL_562;
        if ( !LODWORD(vals->max_length) )
          goto LABEL_563;
        this = (BattleLogicFunction_o *)MasterData_object;
        if ( !MasterData_object )
          goto LABEL_562;
        v162 = DataMasterBase_object__object__int___GetEntity(
                 (DataMasterBase_TMaster__TEntity__PKType__o *)MasterData_object,
                 vals->m_Items[0],
                 (const MethodInfo_3F10B30 *)Method_DataMasterBase_BuffMaster__BuffEntity__int__GetEntity__);
        BattleLogicFunction__SetTdCommandTypeChange((BuffEntity_o *)v162, v19->fields.commandType, procArgs, v163);
        v166 = funcType == 16 || funcType == 161;
        BattleLogicFunction__functionAddState(v20, v19, v153, procArgs, v166, v164);
        goto LABEL_136;
      }
      if ( (unsigned int)(funcType - 169) <= 1 )
      {
        this = (BattleLogicFunction_o *)BattleLogicFunction__GetAvailableSkillCount(v20, dataVals_k__BackingField, v157);
        if ( (int)this <= 0 )
        {
          v101 = isCommandSideEffect;
          v185 = BattleLogicFunction__getNoEffectObject(
                   v20,
                   (int32_t)v156->fields.logic,
                   index,
                   dataVals_k__BackingField,
                   isCommandSideEffect,
                   0,
                   0,
                   0,
                   0,
                   isRandomDamage);
          BattleActionData__addAction(v19, v185, 0);
          BattleLogicFunction__SetReceiveFunctionId(v20, v19, targetId_k__BackingField, v107, v186);
          v109 = v480;
          goto LABEL_122;
        }
        v173 = v107->fields.vals;
        if ( !v173 )
          goto LABEL_562;
        if ( !LODWORD(v173->max_length) )
          goto LABEL_563;
        v174 = (int)this;
        this = (BattleLogicFunction_o *)MasterData_object;
        if ( !MasterData_object )
          goto LABEL_562;
        v175 = DataMasterBase_object__object__int___GetEntity(
                 (DataMasterBase_TMaster__TEntity__PKType__o *)MasterData_object,
                 v173->m_Items[0],
                 (const MethodInfo_3F10B30 *)Method_DataMasterBase_BuffMaster__BuffEntity__int__GetEntity__);
        BattleLogicFunction__SetTdCommandTypeChange((BuffEntity_o *)v175, v19->fields.commandType, procArgs, v176);
        do
        {
          BattleLogicFunction__functionAddState(v20, v19, v153, procArgs, funcType == 170, v177);
          --v174;
        }
        while ( v174 );
        goto LABEL_159;
      }
      if ( FuncList__Check(2, funcType, 0) )
      {
        v178 = BattleLogicFunction__functionSubState(
                 v20,
                 targetId_k__BackingField,
                 v107,
                 dataVals_k__BackingField,
                 index,
                 v101,
                 &subBuffInfo,
                 procArgs,
                 isCheckedOverwrite);
        goto LABEL_174;
      }
      if ( FuncList__Check(3, v107->fields.funcType, 0) )
      {
        actorId = v19->fields.actorId;
        v181 = (int32_t)v156->fields.logic;
        isSafeDamage = BattleLogicFunction__isSafeDamage(v20, dataVals_k__BackingField, targetId_k__BackingField, v179);
        v183 = v181;
        v101 = isCommandSideEffect;
        v178 = BattleLogicFunction__functionDamage(
                 v20,
                 actorId,
                 v183,
                 dataVals_k__BackingField,
                 index,
                 v19,
                 isSafeDamage,
                 v184);
        goto LABEL_174;
      }
      if ( FuncList__Check(4, v107->fields.funcType, 0) )
      {
        v178 = BattleLogicFunction__functionNPDamage(
                 v20,
                 v19->fields.actorId,
                 (int32_t)v156->fields.logic,
                 dataVals_k__BackingField,
                 index,
                 1,
                 v19,
                 v189);
        goto LABEL_174;
      }
      v109 = v480;
      if ( FuncList__Check(14, v107->fields.funcType, 0) )
        break;
      if ( FuncList__Check(15, v107->fields.funcType, 0) )
      {
        v191 = v19->fields.actorId;
        v192 = (int32_t)v156->fields.logic;
        v193 = v20;
        v194 = index;
        v195 = dataVals_k__BackingField;
        v196 = 3;
        goto LABEL_190;
      }
      if ( FuncList__Check(18, v107->fields.funcType, 0) )
      {
        v191 = v19->fields.actorId;
        v192 = (int32_t)v156->fields.logic;
        v193 = v20;
        v194 = index;
        v195 = dataVals_k__BackingField;
        v196 = 4;
        goto LABEL_190;
      }
      if ( FuncList__Check(27, v107->fields.funcType, 0) )
      {
        v191 = v19->fields.actorId;
        v192 = (int32_t)v156->fields.logic;
        v193 = v20;
        v194 = index;
        v195 = dataVals_k__BackingField;
        v196 = 7;
        goto LABEL_190;
      }
      if ( FuncList__Check(21, v107->fields.funcType, 0) )
      {
        v191 = v19->fields.actorId;
        v192 = (int32_t)v156->fields.logic;
        v193 = v20;
        v194 = index;
        v195 = dataVals_k__BackingField;
        v196 = 5;
        goto LABEL_190;
      }
      if ( FuncList__Check(22, v107->fields.funcType, 0) )
      {
        v191 = v19->fields.actorId;
        v192 = (int32_t)v156->fields.logic;
        v193 = v20;
        v194 = index;
        v195 = dataVals_k__BackingField;
        v196 = 6;
        goto LABEL_190;
      }
      if ( FuncList__Check(28, v107->fields.funcType, 0) )
      {
        v191 = v19->fields.actorId;
        v192 = (int32_t)v156->fields.logic;
        v193 = v20;
        v194 = index;
        v195 = dataVals_k__BackingField;
        v196 = 8;
        goto LABEL_190;
      }
      if ( FuncList__Check(5, v107->fields.funcType, 0) )
      {
        v198 = v20->fields.data;
        this = (BattleLogicFunction_o *)((__int64 (__fastcall *)(BattleLogicFunctionProcess_FunctionTargetCheck_o *, const MethodInfo *))v153->klass->vtable._16_GetCommonBaseValue.methodPtr)(
                                          v153,
                                          v153->klass->vtable._16_GetCommonBaseValue.method);
        if ( !v198 )
          goto LABEL_562;
        BattleData__addCriticalPoint(v198, (int32_t)this, 0);
LABEL_198:
        FunctionObject = BattleLogicFunction__getFunctionObject(
                           v199,
                           v107,
                           (int32_t)v156->fields.logic,
                           index,
                           v101,
                           0,
                           v200);
        FunctionObject->fields.procType = 4;
        BattleActionData__setBuffData(v19, FunctionObject, dataVals_k__BackingField, 0, 0);
        this = (BattleLogicFunction_o *)v20->fields.data;
        if ( !this )
          goto LABEL_562;
        BattleData__AddPerformedVals((BattleData_o *)this, dataVals_k__BackingField, 0);
        goto LABEL_175;
      }
      if ( FuncList__Check(31, v107->fields.funcType, 0) )
      {
        v201 = v20->fields.data;
        this = (BattleLogicFunction_o *)DataVals__GetValue(dataVals_k__BackingField, 0);
        if ( !v201 )
          goto LABEL_562;
        BattleData__lossCriticalPoint(v201, (int32_t)this, 0);
        goto LABEL_198;
      }
      if ( FuncList__Check(6, v107->fields.funcType, 0) )
      {
        v197 = BattleLogicFunction__functionGainHp(
                 v20,
                 v19->fields.actorId,
                 targetId_k__BackingField,
                 v107,
                 dataVals_k__BackingField,
                 index,
                 v101,
                 -1,
                 isCheckedOverwrite);
      }
      else
      {
        if ( !FuncList__Check(17, v107->fields.funcType, 0) )
        {
          if ( FuncList__Check(7, v107->fields.funcType, 0) )
          {
            if ( !BattleServantData__checkPlayer((BattleServantData_o *)v156, 0) )
              goto LABEL_159;
            isUnaffected = DataVals__isUnaffected(dataVals_k__BackingField, 0);
            CorrectedValueFuncGainNp = ((__int64 (__fastcall *)(BattleLogicFunctionProcess_FunctionTargetCheck_o *, const MethodInfo *))v153->klass->vtable._16_GetCommonBaseValue.methodPtr)(
                                         v153,
                                         v153->klass->vtable._16_GetCommonBaseValue.method);
            if ( !isUnaffected )
              CorrectedValueFuncGainNp = BattleServantData__getCorrectedValueFuncGainNp(
                                           (BattleServantData_o *)v156,
                                           CorrectedValueFuncGainNp,
                                           0);
            goto LABEL_208;
          }
          if ( FuncList__Check(8, v107->fields.funcType, 0) )
          {
            if ( !BattleServantData__checkPlayer((BattleServantData_o *)v156, 0) )
              goto LABEL_159;
            if ( !BattleServantData__CanLossNp((BattleServantData_o *)v156, dataVals_k__BackingField, 0) )
              goto LABEL_322;
            v210 = -DataVals__GetValue(dataVals_k__BackingField, 0);
            goto LABEL_216;
          }
          if ( FuncList__Check(9, funcEnt->fields.funcType, 0) )
          {
            v218 = DataVals__GetValue2(dataVals_k__BackingField, 0) - 1;
            TargetList = DataVals__GetTargetList(dataVals_k__BackingField, 0);
            Value = DataVals__GetValue(dataVals_k__BackingField, 0);
            this = (BattleLogicFunction_o *)BattleServantData__skillChageShorten(
                                              (BattleServantData_o *)v156,
                                              Value,
                                              0,
                                              v218,
                                              TargetList,
                                              0);
LABEL_222:
            v225 = (int32_t)v156->fields.logic;
            if ( ((unsigned __int8)this & 1) == 0 )
            {
              v101 = isCommandSideEffect;
              v226 = v20;
              v227 = (int32_t)v156->fields.logic;
              goto LABEL_324;
            }
LABEL_223:
            v101 = isCommandSideEffect;
            v107 = funcEnt;
LABEL_224:
            v217 = BattleLogicFunction__getFunctionObject(this, v107, v225, index, v101, 0, v221);
            v216 = v19;
LABEL_225:
            BattleActionData__setBuffData(v216, v217, dataVals_k__BackingField, 0, 0);
LABEL_175:
            v109 = v480;
            goto LABEL_137;
          }
          if ( FuncList__Check(10, funcEnt->fields.funcType, 0) )
          {
            v222 = DataVals__GetValue2(dataVals_k__BackingField, 0) - 1;
            v223 = DataVals__GetTargetList(dataVals_k__BackingField, 0);
            v224 = DataVals__GetValue(dataVals_k__BackingField, 0);
            this = (BattleLogicFunction_o *)BattleServantData__skillChageExtend(
                                              (BattleServantData_o *)v156,
                                              v224,
                                              999,
                                              v222,
                                              v223,
                                              0);
            goto LABEL_222;
          }
          if ( FuncList__Check(12, funcEnt->fields.funcType, 0) )
          {
            v229 = v19->fields.actorId;
            v230 = BattleLogicFunction__isSafeDamage(v20, dataVals_k__BackingField, targetId_k__BackingField, v228);
            v101 = isCommandSideEffect;
            v107 = funcEnt;
            v231 = index;
            mainAction = v19;
            v232 = v230;
            v233 = isCommandSideEffect;
            v234 = v20;
            v235 = v229;
            v236 = targetId_k__BackingField;
            v237 = funcEnt;
            v238 = dataVals_k__BackingField;
            goto LABEL_231;
          }
          if ( FuncList__Check(25, funcEnt->fields.funcType, 0) )
          {
            v101 = isCommandSideEffect;
            v107 = funcEnt;
            v235 = v19->fields.actorId;
            v231 = index;
            v234 = v20;
            v233 = isCommandSideEffect;
            v236 = targetId_k__BackingField;
            v237 = funcEnt;
            v238 = dataVals_k__BackingField;
            v232 = 1;
            mainAction = v19;
LABEL_231:
            v178 = BattleLogicFunction__functionlossHp(
                     v234,
                     v235,
                     v236,
                     v237,
                     v238,
                     v231,
                     v232,
                     v233,
                     -1,
                     1,
                     mainAction,
                     v461);
LABEL_174:
            BattleActionData__addAction(v19, v178, 0);
            goto LABEL_175;
          }
          if ( FuncList__Check(13, funcEnt->fields.funcType, 0) )
          {
            v101 = isCommandSideEffect;
            v107 = funcEnt;
            v239 = v20;
            v240 = v19->fields.actorId;
            v241 = index;
            v242 = targetId_k__BackingField;
            v243 = isCommandSideEffect;
            v244 = funcEnt;
            v245 = dataVals_k__BackingField;
            v246 = 0;
LABEL_234:
            v178 = BattleLogicFunction__functionInstantDeath(
                     v239,
                     v240,
                     v242,
                     v244,
                     v245,
                     v241,
                     v243,
                     v246,
                     funcUnit,
                     isRandomDamage);
            goto LABEL_174;
          }
          if ( FuncList__Check(19, funcEnt->fields.funcType, 0) )
          {
            v101 = isCommandSideEffect;
            v107 = funcEnt;
            v247 = v20;
            v248 = index;
            v249 = targetId_k__BackingField;
            v250 = dataVals_k__BackingField;
            v251 = isCommandSideEffect;
            v252 = funcEnt;
            v253 = -1;
LABEL_237:
            v178 = BattleLogicFunction__functionHastenNpTurn(
                     v247,
                     v249,
                     v252,
                     v250,
                     v248,
                     v251,
                     -1,
                     v253,
                     isCheckedOverwrite);
            goto LABEL_174;
          }
          if ( FuncList__Check(20, funcEnt->fields.funcType, 0) )
          {
            v101 = isCommandSideEffect;
            v107 = funcEnt;
            v178 = BattleLogicFunction__functionDelayNpTurn(
                     v20,
                     targetId_k__BackingField,
                     funcEnt,
                     dataVals_k__BackingField,
                     index,
                     isCommandSideEffect,
                     &absorptionCount,
                     v254);
            goto LABEL_174;
          }
          if ( FuncList__Check(56, funcEnt->fields.funcType, 0) )
          {
            v101 = isCommandSideEffect;
            v107 = funcEnt;
            v178 = BattleLogicFunction__functionAbsorbNpTurn(
                     v20,
                     targetId_k__BackingField,
                     funcEnt,
                     v19,
                     v153,
                     isCommandSideEffect,
                     v255);
            goto LABEL_174;
          }
          if ( FuncList__Check(23, funcEnt->fields.funcType, 0) )
          {
            v261 = BattleLogicFunction__functionResetCommandCard(v20, v256, v257, v258, v259, v260);
            goto LABEL_244;
          }
          if ( FuncList__Check(24, funcEnt->fields.funcType, 0) )
          {
            applyTarget = funcEnt->fields.applyTarget;
            if ( applyTarget == 2 )
            {
              v269 = BattleLogicFunction__functionReplaceEnemyMember(v20, v262, dataVals_k__BackingField, index, v264);
              goto LABEL_255;
            }
            if ( applyTarget != 1 )
              goto LABEL_159;
            v261 = BattleLogicFunction__functionReplaceMember(
                     v20,
                     targetId_k__BackingField,
                     subTargetId,
                     v263,
                     (DataVals_o *)v264,
                     index,
                     v265);
LABEL_244:
            BattleActionData__addAction(v19, v261, 0);
            this = (BattleLogicFunction_o *)v20->fields.data;
            if ( !this )
              goto LABEL_562;
            BattleData__AddPerformedVals((BattleData_o *)this, dataVals_k__BackingField, 0);
            goto LABEL_159;
          }
          if ( FuncList__Check(109, funcEnt->fields.funcType, 0) )
          {
            v269 = BattleLogicFunction__functionTransformServant(
                     v20,
                     targetId_k__BackingField,
                     v267,
                     dataVals_k__BackingField,
                     index,
                     procArgs,
                     v268);
            goto LABEL_255;
          }
          if ( FuncList__Check(26, funcEnt->fields.funcType, 0) )
          {
            v271 = BattleLogicFunction__functionReflection(
                     v20,
                     v19->fields.actorId,
                     (int32_t)v156->fields.logic,
                     dataVals_k__BackingField,
                     index,
                     v270);
            BattleActionData__addAction(v19, v271, 0);
            v465 = 1;
            goto LABEL_159;
          }
          if ( FuncList__Check(29, funcEnt->fields.funcType, 0) )
          {
            v101 = isCommandSideEffect;
            v274 = BattleLogicFunction__functionCallServant(
                     v20,
                     v19->fields.actorId,
                     v272,
                     dataVals_k__BackingField,
                     index,
                     isCommandSideEffect,
                     procArgs,
                     v273);
            goto LABEL_326;
          }
          if ( FuncList__Check(30, funcEnt->fields.funcType, 0) )
          {
            v280 = BattleLogicFunction__functionPtShuffle(v20, v275, v276, v277, v278, v279);
            BattleActionData__addAction(v19, v280, 0);
            this = (BattleLogicFunction_o *)v20->fields.data;
            if ( !this )
              goto LABEL_562;
            BattleData__AddPerformedVals((BattleData_o *)this, dataVals_k__BackingField, 0);
            v464 = 1;
            goto LABEL_159;
          }
          if ( FuncList__Check(32, funcEnt->fields.funcType, 0) )
          {
            v269 = BattleLogicFunction__functionChangeServant(
                     v20,
                     v19->fields.actorId,
                     targetId_k__BackingField,
                     v281,
                     dataVals_k__BackingField,
                     v282,
                     v283);
            goto LABEL_255;
          }
          v284 = FuncList__Check(33, funcEnt->fields.funcType, 0);
          if ( v284 )
          {
            v269 = BattleLogicFunction__functionChangeBg(
                     (BattleLogicFunction_o *)v284,
                     v19->fields.actorId,
                     v285,
                     dataVals_k__BackingField,
                     v286,
                     v287);
            goto LABEL_255;
          }
          if ( FuncList__Check(34, funcEnt->fields.funcType, 0) )
          {
            v289 = v19->fields.actorId;
            v290 = (int32_t)v156->fields.logic;
            v291 = BattleLogicFunction__isSafeDamage(v20, dataVals_k__BackingField, targetId_k__BackingField, v288);
            goto LABEL_267;
          }
          if ( FuncList__Check(122, funcEnt->fields.funcType, 0) )
          {
            v295 = v19->fields.actorId;
            v296 = (int32_t)v156->fields.logic;
            v294 = v20;
            v293 = index;
            v297 = dataVals_k__BackingField;
            v291 = 1;
            goto LABEL_270;
          }
          if ( FuncList__Check(35, funcEnt->fields.funcType, 0) )
          {
            BYTE1(v156[9].fields.logic) = 1;
            goto LABEL_159;
          }
          this = (BattleLogicFunction_o *)FuncList__Check(36, funcEnt->fields.funcType, 0);
          if ( ((unsigned __int8)this & 1) != 0 )
          {
            v304 = v20->fields.data;
            if ( !v304 )
              goto LABEL_562;
            draw_commandlist = v304->fields.draw_commandlist;
            v304->fields.fixedCommands = draw_commandlist;
            sub_2213A04(
              (MissionNaviTransitionBoardItem_o *)&v304->fields.fixedCommands,
              (int32_t)draw_commandlist,
              v298,
              v299,
              v300,
              v301,
              v302,
              v303);
LABEL_276:
            v225 = (int32_t)v156->fields.logic;
            goto LABEL_223;
          }
          if ( FuncList__Check(37, funcEnt->fields.funcType, 0)
            || FuncList__Check(38, funcEnt->fields.funcType, 0)
            || FuncList__Check(39, funcEnt->fields.funcType, 0)
            || FuncList__Check(40, funcEnt->fields.funcType, 0) )
          {
            v306 = DataVals__GetValue(dataVals_k__BackingField, 0);
            if ( FuncList__Check(37, funcEnt->fields.funcType, 0) || FuncList__Check(39, funcEnt->fields.funcType, 0) )
              v306 = -v306;
            if ( FuncList__Check(37, funcEnt->fields.funcType, 0) || FuncList__Check(38, funcEnt->fields.funcType, 0) )
            {
              v306 *= 2;
              isTurn = 1;
            }
            else
            {
              isTurn = 0;
            }
            isParam = DataVals__isParam(dataVals_k__BackingField, 94, 0);
            v308 = DataVals__isParam(dataVals_k__BackingField, 153, 0);
            v309 = 0;
            if ( v308 )
            {
              v309 = (BattleServantSnapShotOnBuffUpdate_o *)sub_2213CCC(BattleServantSnapShotOnBuffUpdate_TypeInfo);
              BattleServantSnapShotOnBuffUpdate___ctor(v309, (BattleServantData_o *)v156, 0);
            }
            v310 = DataVals__GetTargetList(dataVals_k__BackingField, 0);
            this = (BattleLogicFunction_o *)BattleServantData__ChangeBuffValue(
                                              (BattleServantData_o *)v156,
                                              v306,
                                              v310,
                                              isTurn,
                                              1,
                                              v308,
                                              &buffsToRemove,
                                              isParam,
                                              0);
            if ( ((unsigned __int8)this & 1) == 0 )
              goto LABEL_322;
            if ( v308 )
            {
              action = (BattleActionData_o *)buffsToRemove;
              if ( !buffsToRemove )
                goto LABEL_562;
              if ( buffsToRemove->fields._count >= 1 )
              {
                this = (BattleLogicFunction_o *)v156[8].fields.dicFuncProcess;
                if ( !this )
                  goto LABEL_562;
                this = (BattleLogicFunction_o *)BattleBuffData__SubBuffSpecified(
                                                  (BattleBuffData_o *)this,
                                                  buffsToRemove,
                                                  1,
                                                  0);
                if ( !this )
                  goto LABEL_562;
                v101 = isCommandSideEffect;
                BattleLogicFunction__ApplySubBuffChanges(
                  v20,
                  v19,
                  (System_Collections_Generic_List_BattleBuffData_BuffData__o *)this->fields.data,
                  targetId_k__BackingField,
                  v309,
                  dataVals_k__BackingField,
                  index,
                  isCommandSideEffect,
                  procArgs,
                  isRandomDamage);
                goto LABEL_136;
              }
            }
            goto LABEL_276;
          }
          if ( FuncList__Check(41, funcEnt->fields.funcType, 0) )
          {
            v311 = v20->fields.data;
            v312 = DataVals__GetValue(dataVals_k__BackingField, 0);
            v313 = (Generator_BGMFromChangeBGMFunc_o *)sub_2213CCC(Generator_BGMFromChangeBGMFunc_TypeInfo);
            Generator_BGMFromChangeBGMFunc___ctor(v313, v311, v312, dataVals_k__BackingField, 0, 0);
            BgmFadeTime = DataVals__GetBgmFadeTime(dataVals_k__BackingField, 0);
            BattleLogicFunction__FunctionChangeBgm(v20, procArgs, (Generator_BGM_o *)v313, 0, BgmFadeTime, v315);
            goto LABEL_159;
          }
          this = (BattleLogicFunction_o *)FuncList__Check(42, funcEnt->fields.funcType, 0);
          if ( ((unsigned __int8)this & 1) != 0 )
            goto LABEL_276;
          if ( FuncList__Check(43, funcEnt->fields.funcType, 0) )
          {
            v101 = isCommandSideEffect;
            v107 = funcEnt;
            v178 = BattleLogicFunction__functionResurrection(
                     v20,
                     (int32_t)v156->fields.logic,
                     index,
                     funcEnt,
                     dataVals_k__BackingField,
                     isCommandSideEffect,
                     v316);
            goto LABEL_174;
          }
          if ( FuncList__Check(44, funcEnt->fields.funcType, 0)
            || FuncList__Check(133, funcEnt->fields.funcType, 0)
            || FuncList__Check(146, funcEnt->fields.funcType, 0)
            || FuncList__Check(154, funcEnt->fields.funcType, 0) )
          {
            v317 = funcEnt->fields.vals;
            if ( FuncList__Check(44, funcEnt->fields.funcType, 0) )
            {
              SameIndiualityBuffSum = BattleServantData__getSameIndiualityBuffSum(
                                        (BattleServantData_o *)v156,
                                        v317,
                                        1,
                                        0,
                                        0,
                                        0);
              goto LABEL_318;
            }
            if ( FuncList__Check(133, funcEnt->fields.funcType, 0) )
            {
              SameIndiualityBuffSum = GainNpIndividualSum__GetSameIndiualitySum(
                                        v20->fields.data,
                                        v19->fields.actorId,
                                        (int32_t)v156->fields.logic,
                                        dataVals_k__BackingField,
                                        funcEnt,
                                        0);
              goto LABEL_318;
            }
            if ( FuncList__Check(146, funcEnt->fields.funcType, 0) )
            {
              SameIndiualityBuffSum = GainNpIndividualSum__GetIndividualityIncludeTargetSum(
                                        v20->fields.data,
                                        v19->fields.actorId,
                                        (int32_t)v156->fields.logic,
                                        dataVals_k__BackingField,
                                        funcEnt,
                                        0);
              goto LABEL_318;
            }
            this = (BattleLogicFunction_o *)FuncList__Check(154, funcEnt->fields.funcType, 0);
            if ( ((unsigned __int8)this & 1) != 0 )
            {
              v319 = v20->fields.data;
              if ( !v319 )
                goto LABEL_562;
              totalCriticalStars = v319->fields.totalCriticalStars;
              Value2 = DataVals__GetValue2(dataVals_k__BackingField, 0);
              if ( Value2 >= 1 )
              {
                v323 = Value2;
                if ( !*(&System_Math_TypeInfo->_2.cctor_finished + 1) )
                  j_il2cpp_runtime_class_init_0(System_Math_TypeInfo, v322);
                SameIndiualityBuffSum = System_Math__Min_77153596(totalCriticalStars, v323, 0);
LABEL_318:
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
                                           (BattleServantData_o *)v156,
                                           CorrectedValueFuncGainNp,
                                           0);
            if ( CorrectedValueFuncGainNp < 1 )
            {
LABEL_322:
              v227 = (int32_t)v156->fields.logic;
              goto LABEL_323;
            }
LABEL_208:
            if ( BattleServantData__isGainNp((BattleServantData_o *)v156, 1, dataVals_k__BackingField, 0) )
            {
              v206 = (BattleLogicFunction_o *)BattleServantData__addNp(
                                                (BattleServantData_o *)v156,
                                                CorrectedValueFuncGainNp,
                                                0,
                                                0);
              v207 = (int)v206;
              v209 = BattleLogicFunction__getFunctionObject(
                       v206,
                       funcEnt,
                       (int32_t)v156->fields.logic,
                       index,
                       isCommandSideEffect,
                       0,
                       v208);
              v209->fields.procType = 3;
              BattleActionData_BuffData__setSaveNp(v209, v207, 0);
              if ( isCommandSideEffect )
                v209->fields.isCommandAfter = 1;
              BattleActionData__setBuffData(v19, v209, dataVals_k__BackingField, 0, 0);
              goto LABEL_159;
            }
            goto LABEL_322;
          }
          if ( FuncList__Check(45, funcEnt->fields.funcType, 0) )
          {
            BYTE4(v156[9].fields.logic) = DataVals__GetValue(dataVals_k__BackingField, 0) == 1;
            goto LABEL_159;
          }
          if ( FuncList__Check(46, funcEnt->fields.funcType, 0) )
          {
            v101 = isCommandSideEffect;
            v107 = funcEnt;
            v239 = v20;
            v240 = v19->fields.actorId;
            v241 = index;
            v242 = targetId_k__BackingField;
            v243 = isCommandSideEffect;
            v244 = funcEnt;
            v245 = dataVals_k__BackingField;
            v246 = 1;
            goto LABEL_234;
          }
          if ( FuncList__Check(47, funcEnt->fields.funcType, 0) )
          {
            v329 = v19->fields.actorId;
            v330 = (int32_t)v156->fields.logic;
            v331 = v20;
            v332 = index;
            v333 = dataVals_k__BackingField;
            v334 = 9;
LABEL_487:
            v269 = BattleLogicFunction__functionNPDamage(v331, v329, v330, v333, v332, v334, v19, v328);
            goto LABEL_255;
          }
          if ( FuncList__Check(48, funcEnt->fields.funcType, 0) )
          {
            v269 = BattleLogicFunction__functionGainNpFromTargets(v20, procArgs, v19, v153, v335);
            goto LABEL_255;
          }
          if ( FuncList__Check(49, funcEnt->fields.funcType, 0) )
          {
            v269 = BattleLogicFunction__functionGainHpFromTargets(v20, procArgs, v19, v153, v336);
            goto LABEL_255;
          }
          v337 = FuncList__Check(50, funcEnt->fields.funcType, 0);
          if ( v337 || (v337 = FuncList__Check(51, funcEnt->fields.funcType, 0)) )
          {
            v339 = funcEnt->fields.funcType;
            v340 = v339 == 51;
            if ( v339 == 50 )
            {
              v337 = BattleLogicFunction__isSafeDamage(v20, dataVals_k__BackingField, targetId_k__BackingField, v338);
              v340 = v337;
            }
            v341 = v19->fields.actorId;
            v107 = funcEnt;
            HpPerValue = BattleLogicFunction__getHpPerValue(
                           (BattleLogicFunction_o *)v337,
                           dataVals_k__BackingField,
                           (BattleServantData_o *)v156,
                           v338);
            v343 = v341;
            v101 = isCommandSideEffect;
            v178 = BattleLogicFunction__functionlossHp(
                     v20,
                     v343,
                     targetId_k__BackingField,
                     funcEnt,
                     dataVals_k__BackingField,
                     index,
                     v340,
                     isCommandSideEffect,
                     HpPerValue,
                     0,
                     v19,
                     v461);
            goto LABEL_174;
          }
          if ( FuncList__Check(52, funcEnt->fields.funcType, 0) )
          {
            v345 = v20;
            v346 = dataVals_k__BackingField;
            v347 = 1;
LABEL_347:
            if ( !BattleLogicFunction__UpdateUserEquipSkillChargeTurn(
                    v345,
                    v346,
                    v347,
                    linkedTargetSkillIndividualityArray,
                    v344) )
            {
              v351 = (BattleActionData_MasterBuffData_o *)sub_2213CCC(BattleActionData_MasterBuffData_TypeInfo);
              BattleActionData_MasterBuffData___ctor(v351, funcEnt, 0);
              this = (BattleLogicFunction_o *)DataVals__IsImmediateMasterPopupEnabled(dataVals_k__BackingField, 0);
              if ( !v351 )
                goto LABEL_562;
              v101 = isCommandSideEffect;
              v325 = index;
              v351->fields._ShowDuringNoblePhantasm_k__BackingField = (unsigned __int8)this & 1;
              v226 = v20;
              v351->fields.popColor = 1;
              v324 = isCommandSideEffect;
              v326 = dataVals_k__BackingField;
              v227 = v153->fields._targetId_k__BackingField;
              v327 = (BattleActionData_BuffData_o *)v351;
              goto LABEL_325;
            }
            v101 = isCommandSideEffect;
            v107 = funcEnt;
            BattleLogicFunction__CreateMasterBuffEffect(
              v20,
              v19,
              funcEnt,
              index,
              isCommandSideEffect,
              dataVals_k__BackingField,
              v348);
            goto LABEL_175;
          }
          if ( FuncList__Check(62, funcEnt->fields.funcType, 0) )
          {
            v345 = v20;
            v346 = dataVals_k__BackingField;
            v347 = 0;
            goto LABEL_347;
          }
          if ( FuncList__Check(53, funcEnt->fields.funcType, 0) )
          {
            v349 = (Generator_BGFromQuickChangeBGFunc_o *)sub_2213CCC(Generator_BGFromQuickChangeBGFunc_TypeInfo);
            Generator_BGFromQuickChangeBGFunc___ctor(v349, dataVals_k__BackingField, 0);
            BattleLogicFunction__FunctionQuickChangeBG(v20, procArgs, (Generator_Background_o *)v349, v350);
            goto LABEL_159;
          }
          if ( FuncList__Check(54, funcEnt->fields.funcType, 0) )
          {
            this = (BattleLogicFunction_o *)v156[2].fields.wkStr;
            if ( !this )
              goto LABEL_562;
            if ( ServantEntity__isInvalidSkillShift((ServantEntity_o *)this, 0) )
            {
              v227 = v153->fields._targetId_k__BackingField;
LABEL_323:
              v101 = isCommandSideEffect;
              v226 = v20;
LABEL_324:
              v324 = v101;
              v325 = index;
              v326 = dataVals_k__BackingField;
              v327 = 0;
LABEL_325:
              v274 = BattleLogicFunction__getNoEffectObject(v226, v227, v325, v326, v324, 0, v327, 0, 0, isRandomDamage);
LABEL_326:
              BattleActionData__addAction(v19, v274, 0);
LABEL_136:
              v107 = funcEnt;
              v109 = v480;
              goto LABEL_137;
            }
            BattleLogicFunction__functionShiftServant(
              v20,
              v19,
              (BattleServantData_o *)v156,
              dataVals_k__BackingField,
              v352);
LABEL_159:
            v101 = isCommandSideEffect;
            goto LABEL_136;
          }
          if ( FuncList__Check(55, funcEnt->fields.funcType, 0) )
          {
            v329 = v19->fields.actorId;
            v330 = (int32_t)v156->fields.logic;
            v331 = v20;
            v332 = index;
            v333 = dataVals_k__BackingField;
            v334 = 10;
            goto LABEL_487;
          }
          if ( FuncList__Check(57, funcEnt->fields.funcType, 0) )
          {
            HIDWORD(v156[7].fields.data) = DataVals__GetValue(dataVals_k__BackingField, 0);
            goto LABEL_159;
          }
          if ( FuncList__Check(58, funcEnt->fields.funcType, 0) )
          {
            dicFuncProcess = (BattleBuffData_o *)v156[8].fields.dicFuncProcess;
            this = (BattleLogicFunction_o *)DataVals__GetParam(dataVals_k__BackingField, 14, 0, 0);
            if ( !dicFuncProcess )
              goto LABEL_562;
            v107 = funcEnt;
            BattleBuffData__UpdateForceAllBuffNoAct(dicFuncProcess, (int32_t)this, funcEnt->fields.vals, 0);
            v101 = isCommandSideEffect;
            v225 = (int32_t)v156->fields.logic;
            goto LABEL_224;
          }
          if ( FuncList__Check(59, funcEnt->fields.funcType, 0) )
          {
            v354 = (BattleActionData_UpShiftGaugeData_o *)sub_2213CCC(BattleActionData_UpShiftGaugeData_TypeInfo);
            BattleActionData_UpShiftGaugeData___ctor(v354, 0);
LABEL_369:
            BattleLogicFunction__functionBreakGaugeChange(
              v20,
              v19,
              funcUnit,
              (BattleServantData_o *)v156,
              (BattleActionData_BaseShiftGaugeData_o *)v354,
              v355);
            goto LABEL_159;
          }
          if ( FuncList__Check(60, funcEnt->fields.funcType, 0) )
          {
            v354 = (BattleActionData_UpShiftGaugeData_o *)sub_2213CCC(BattleActionData_DownShiftGaugeData_TypeInfo);
            BattleActionData_DownShiftGaugeData___ctor((BattleActionData_DownShiftGaugeData_o *)v354, 0);
            goto LABEL_369;
          }
          if ( FuncList__Check(61, funcEnt->fields.funcType, 0) )
          {
            v107 = funcEnt;
            SubMember = BattleLogicFunction__FunctionMoveToLastSubMember(
                          v20,
                          (BattleServantData_o *)v156,
                          funcEnt,
                          v356,
                          index,
                          v357);
            BattleActionData__addAction(v19, SubMember, 0);
            BattleActionData__UpdateForceBuffEffectAllTrue(v19, 0);
            v464 = 1;
            goto LABEL_490;
          }
          if ( FuncList__Check(119, funcEnt->fields.funcType, 0) )
          {
            BattleLogicFunction__functionMovePosition(v20, v19, (BattleServantData_o *)v156, v359);
            goto LABEL_159;
          }
          if ( FuncList__Check(120, funcEnt->fields.funcType, 0) )
          {
            BattleLogicFunction__FunctionRevival(v20, v19, v153, v360);
            goto LABEL_159;
          }
          if ( FuncList__Check(121, funcEnt->fields.funcType, 0) )
          {
            v329 = v19->fields.actorId;
            v330 = (int32_t)v156->fields.logic;
            v331 = v20;
            v332 = index;
            v333 = dataVals_k__BackingField;
            v334 = 11;
            goto LABEL_487;
          }
          if ( FuncList__Check(143, funcEnt->fields.funcType, 0) )
          {
            v329 = v19->fields.actorId;
            v330 = (int32_t)v156->fields.logic;
            v331 = v20;
            v332 = index;
            v333 = dataVals_k__BackingField;
            v334 = 12;
            goto LABEL_487;
          }
          if ( FuncList__Check(124, funcEnt->fields.funcType, 0) )
          {
            BattleLogicFunction__functionMoveState(v20, procArgs, v19, v153, v361);
            goto LABEL_159;
          }
          if ( FuncList__Check(125, funcEnt->fields.funcType, 0) )
          {
            BattleLogicFunction__ChangeBGMCostume(v20, dataVals_k__BackingField, v19, v362);
            goto LABEL_159;
          }
          v363 = FuncList__Check(126, funcEnt->fields.funcType, 0);
          if ( v363 )
          {
            BattleLogicFunction__LossCommandSpell((BattleLogicFunction_o *)v363, dataVals_k__BackingField, v19, v364);
            goto LABEL_159;
          }
          if ( FuncList__Check(127, funcEnt->fields.funcType, 0) )
            goto LABEL_159;
          if ( FuncList__Check(128, funcEnt->fields.funcType, 0) )
          {
            BattleLogicFunction__FunctionUpdateEntryPositions(v20, dataVals_k__BackingField, v365);
            goto LABEL_159;
          }
          if ( FuncList__Check(63, funcEnt->fields.funcType, 0) )
          {
            BattleLogicFunction__FunctionUpdateEntryMaxCountEachTurn(v20, dataVals_k__BackingField, v366);
            goto LABEL_159;
          }
          if ( FuncList__Check(130, funcEnt->fields.funcType, 0) )
          {
            BattleLogicFunction__FunctionToFieldAddChangeFieldBuff(v20, procArgs, v19, v153, isTreasureDvc, v367);
            goto LABEL_159;
          }
          if ( FuncList__Check(131, funcEnt->fields.funcType, 0) )
          {
            BattleLogicFunction__FunctionSubFieldBuff(v20, procArgs, v19, v153, v368);
            goto LABEL_159;
          }
          if ( FuncList__Check(134, funcEnt->fields.funcType, 0) )
          {
            this = (BattleLogicFunction_o *)DataVals__GetValue(dataVals_k__BackingField, 0);
            if ( !v20->fields.data )
              goto LABEL_562;
            BattleData__AddQuestRouteId(v20->fields.data, (int32_t)this, 0);
            goto LABEL_159;
          }
          if ( FuncList__Check(135, funcEnt->fields.funcType, 0) )
          {
            BattleLogicFunction__FunctionLastSkillCopy(v20, v19, dataVals_k__BackingField, procArgs, v369);
            goto LABEL_159;
          }
          if ( FuncList__Check(136, funcEnt->fields.funcType, 0) )
          {
            v370 = DataVals__GetValue(dataVals_k__BackingField, 0);
            BattleLogicFunction__FunctionChangeEnemyMasterFace(v20, v370, v371);
            goto LABEL_159;
          }
          if ( FuncList__Check(137, funcEnt->fields.funcType, 0) )
          {
            v289 = v19->fields.actorId;
            v290 = (int32_t)v156->fields.logic;
            v291 = ((int (__fastcall *)(BattleLogicFunction_o *, Il2CppClass *))v156->klass[1]._1.declaringType)(
                     v156,
                     v156->klass[1]._1.parent) > 1;
LABEL_267:
            v293 = index;
            v294 = v20;
            v295 = v289;
            v296 = v290;
            v297 = dataVals_k__BackingField;
LABEL_270:
            v269 = BattleLogicFunction__functionValueDamage(v294, v295, v296, v297, v293, v291, v19, v292);
            goto LABEL_255;
          }
          if ( FuncList__Check(138, funcEnt->fields.funcType, 0) )
          {
            v107 = funcEnt;
            BattleLogicFunction__FunctionAddBattleValue(v20, v19->fields.actorId, funcEnt, procArgs, v372);
            goto LABEL_490;
          }
          if ( FuncList__Check(139, funcEnt->fields.funcType, 0) )
          {
            v107 = funcEnt;
            BattleLogicFunction__FunctionSetBattleValue(v20, v19->fields.actorId, funcEnt, procArgs, v373);
            goto LABEL_490;
          }
          if ( FuncList__Check(140, funcEnt->fields.funcType, 0) )
          {
            monitor_high = HIDWORD(v156[4].monitor);
            v377 = (float)(monitor_high * (__int64)DataVals__GetValue(dataVals_k__BackingField, 0)) / 1000.0;
            if ( v377 == INFINITY )
              v378 = 0x80000000;
            else
              v378 = (int)v377;
            v269 = BattleLogicFunction__functionGainNp(
                     v20,
                     procArgs,
                     v375,
                     targetId_k__BackingField,
                     dataVals_k__BackingField,
                     v378,
                     v376);
            goto LABEL_255;
          }
          if ( FuncList__Check(141, funcEnt->fields.funcType, 0) )
          {
            if ( !BattleServantData__checkPlayer((BattleServantData_o *)v156, 0) )
              goto LABEL_159;
            if ( !BattleServantData__CanLossNp((BattleServantData_o *)v156, dataVals_k__BackingField, 0) )
              goto LABEL_322;
            v379 = HIDWORD(v156[4].monitor);
            v380 = (float)(v379 * (__int64)DataVals__GetValue(dataVals_k__BackingField, 0)) / 1000.0;
            v381 = (int)v380;
            if ( v380 == INFINITY )
              v381 = 0x80000000;
            v210 = -v381;
LABEL_216:
            v211 = (BattleServantData_o *)v156;
          }
          else
          {
            if ( FuncList__Check(142, funcEnt->fields.funcType, 0) )
            {
              v383 = procArgs;
              v384 = v20;
              v385 = targetId_k__BackingField;
              v386 = dataVals_k__BackingField;
              v387 = 0;
LABEL_423:
              v269 = BattleLogicFunction__FunctionAddBattlePoint(v384, v383, v385, v386, v387, v382);
              if ( !v269 )
                goto LABEL_159;
LABEL_255:
              BattleActionData__addAction(v19, v269, 0);
              goto LABEL_159;
            }
            if ( FuncList__Check(166, funcEnt->fields.funcType, 0) )
            {
              v383 = procArgs;
              v384 = v20;
              v385 = targetId_k__BackingField;
              v386 = dataVals_k__BackingField;
              v387 = 1;
              goto LABEL_423;
            }
            if ( FuncList__Check(144, funcEnt->fields.funcType, 0) )
            {
              v269 = BattleLogicFunction__FunctionSetNpExecutedState(
                       v20,
                       procArgs,
                       targetId_k__BackingField,
                       dataVals_k__BackingField,
                       v388);
              goto LABEL_255;
            }
            this = (BattleLogicFunction_o *)FuncList__Check(145, funcEnt->fields.funcType, 0);
            if ( ((unsigned __int8)this & 1) != 0 )
            {
              v389 = v20->fields.data;
              if ( !v389 )
                goto LABEL_562;
              perf = (UnityEngine_Object_o *)v389->fields.perf;
              if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
                j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, action);
              this = (BattleLogicFunction_o *)UnityEngine_Object__op_Inequality(perf, 0, 0);
              if ( ((unsigned __int8)this & 1) != 0 )
              {
                v391 = v20->fields.data;
                if ( !v391 )
                  goto LABEL_562;
                this = (BattleLogicFunction_o *)v391->fields.perf;
                if ( !this )
                  goto LABEL_562;
                BattlePerformance__HideOverGaugeMessage((BattlePerformance_o *)this, 0);
              }
              goto LABEL_159;
            }
            v392 = FuncList__Check(147, funcEnt->fields.funcType, 0);
            if ( v392 )
            {
              BattleLogicFunction__SetEnemyCountChangeActionData(
                (BattleLogicFunction_o *)v392,
                dataVals_k__BackingField,
                v19,
                v393);
              goto LABEL_159;
            }
            v394 = FuncList__Check(148, funcEnt->fields.funcType, 0);
            if ( v394 )
            {
              BattleLogicFunction__SetDisplayBattleMessage((BattleLogicFunction_o *)v394, v19, v153, v395);
              goto LABEL_159;
            }
            v396 = FuncList__Check(149, funcEnt->fields.funcType, 0);
            if ( v396 )
            {
              BattleLogicFunction__SetBattleSkillDropGeneratorBuff(
                (BattleLogicFunction_o *)v396,
                v19,
                procArgs,
                targetId_k__BackingField,
                dataVals_k__BackingField,
                v397);
              goto LABEL_159;
            }
            if ( FuncList__Check(150, funcEnt->fields.funcType, 0) )
            {
              v398 = DataVals__GetValue(dataVals_k__BackingField, 0);
              BattleLogicFunction__FunctionChangeMasterFace(v20, v398, v399);
              goto LABEL_159;
            }
            if ( FuncList__Check(151, funcEnt->fields.funcType, 0) )
            {
              v400 = DataVals__GetValue(dataVals_k__BackingField, 0);
              BattleLogicFunction__FunctionEnableMasterSkill(v20, v400, v401);
              goto LABEL_159;
            }
            if ( FuncList__Check(152, funcEnt->fields.funcType, 0) )
            {
              v402 = DataVals__GetValue(dataVals_k__BackingField, 0);
              BattleLogicFunction__FunctionEnableMasterCommandSpell(v20, v402, v403);
              goto LABEL_159;
            }
            if ( FuncList__Check(153, funcEnt->fields.funcType, 0) )
            {
              BattleLogicFunction__FunctionBattleModelChange(v20, v19, v153, v404);
              goto LABEL_159;
            }
            if ( FuncList__Check(155, funcEnt->fields.funcType, 0) )
            {
              v107 = funcEnt;
              BattleLogicFunction__FunctionAddBattleMissionValue(v20, funcEnt, v405);
              goto LABEL_490;
            }
            if ( FuncList__Check(156, funcEnt->fields.funcType, 0) )
            {
              v107 = funcEnt;
              BattleLogicFunction__FunctionSetBattleMissionValue(v20, funcEnt, v406);
              goto LABEL_490;
            }
            if ( FuncList__Check(157, funcEnt->fields.funcType, 0) )
            {
              v407 = DataVals__GetValue(dataVals_k__BackingField, 0);
              BattleLogicFunction__FunctionChangeEnemyStatusUiType(v20, v407, v408);
              goto LABEL_159;
            }
            if ( FuncList__Check(158, funcEnt->fields.funcType, 0) )
            {
              this = (BattleLogicFunction_o *)FunctionEntity__IsTargetEnemyOnly(funcEnt, 0);
              skillInfo = v19->fields.skillInfo;
              v411 = (char)this;
              if ( skillInfo )
              {
                this = (BattleLogicFunction_o *)BattleSkillInfoData__GetSelfSkillLvEntity(v19->fields.skillInfo, 0);
                if ( this )
                {
                  IsNoTargetSkipSkill = SkillLvEntity__IsNoTargetSkipSkill((SkillLvEntity_o *)this, 0);
                  v413 = v484;
                  LOWORD(v484[0]) = 0;
                  System_Nullable_bool____ctor(
                    (System_Nullable_bool__o)v413,
                    IsNoTargetSkipSkill,
                    (const MethodInfo_45E0940 *)Method_System_Nullable_bool___ctor__);
                  LODWORD(skillInfo) = BYTE1(v484[0]);
                }
                else
                {
                  LODWORD(skillInfo) = 0;
                }
              }
              v416 = v20->fields.data;
              if ( (v411 & 1) != 0 )
              {
                if ( !v416 )
                  goto LABEL_562;
                p_e_entryid = &v416->fields.e_entryid;
              }
              else
              {
                if ( !v416 )
                  goto LABEL_562;
                p_e_entryid = &v416->fields.p_entryid;
              }
              v269 = BattleLogicFunction__FunctionSwapFieldPosition(
                       v20,
                       dataVals_k__BackingField,
                       index,
                       *p_e_entryid,
                       v411 & 1,
                       (_DWORD)skillInfo != 0,
                       v409);
              goto LABEL_255;
            }
            v414 = FuncList__Check(159, funcEnt->fields.funcType, 0);
            if ( v414 )
            {
              BattleLogicFunction__FunctionSetDisplayDirectBattleMessageInFsm(
                (BattleLogicFunction_o *)v414,
                v19,
                v153,
                v415);
              goto LABEL_159;
            }
            this = (BattleLogicFunction_o *)FuncList__Check(162, funcEnt->fields.funcType, 0);
            if ( ((unsigned __int8)this & 1) == 0 )
            {
              this = (BattleLogicFunction_o *)FuncList__Check(163, funcEnt->fields.funcType, 0);
              if ( ((unsigned __int8)this & 1) != 0 )
              {
                if ( !argument )
                  goto LABEL_562;
                UsedChargeTurn_k__BackingField = argument->fields._UsedChargeTurn_k__BackingField;
                v423 = DataVals__GetValue(dataVals_k__BackingField, 0) * UsedChargeTurn_k__BackingField / 1000;
                if ( DataVals__TryGetParam(dataVals_k__BackingField, 264, param, 0) )
                {
                  v425 = param[0];
                  if ( !*(&System_Math_TypeInfo->_2.cctor_finished + 1) )
                    j_il2cpp_runtime_class_init_0(System_Math_TypeInfo, v424);
                  v423 = System_Math__Min_77153596(v423, v425, 0);
                }
                v101 = isCommandSideEffect;
                v107 = funcEnt;
                v247 = v20;
                v248 = index;
                v249 = targetId_k__BackingField;
                v250 = dataVals_k__BackingField;
                v251 = isCommandSideEffect;
                v252 = funcEnt;
                v253 = v423;
                goto LABEL_237;
              }
              if ( FuncList__Check(164, funcEnt->fields.funcType, 0) )
              {
                v329 = v19->fields.actorId;
                v330 = (int32_t)v156->fields.logic;
                v331 = v20;
                v332 = index;
                v333 = dataVals_k__BackingField;
                v334 = 13;
                goto LABEL_487;
              }
              if ( FuncList__Check(165, funcEnt->fields.funcType, 0) )
              {
                v329 = v19->fields.actorId;
                v330 = (int32_t)v156->fields.logic;
                v331 = v20;
                v332 = index;
                v333 = dataVals_k__BackingField;
                v334 = 14;
                goto LABEL_487;
              }
              if ( !FuncList__Check(168, funcEnt->fields.funcType, 0) )
                goto LABEL_159;
              v107 = funcEnt;
              BattleLogicFunction__FunctionSetBattleMissionValueAsMax(v20, funcEnt, v426);
LABEL_490:
              v101 = isCommandSideEffect;
              goto LABEL_175;
            }
            if ( !argument )
              goto LABEL_562;
            UsedNpValue_k__BackingField = argument->fields._UsedNpValue_k__BackingField;
            v419 = DataVals__GetValue(dataVals_k__BackingField, 0) * UsedNpValue_k__BackingField / 1000;
            if ( DataVals__TryGetParam(dataVals_k__BackingField, 263, &param[1], 0) )
            {
              v421 = param[1];
              if ( !*(&System_Math_TypeInfo->_2.cctor_finished + 1) )
                j_il2cpp_runtime_class_init_0(System_Math_TypeInfo, v420);
              v419 = System_Math__Min_77153596(v419, v421, 0);
            }
            if ( !BattleServantData__isGainNp((BattleServantData_o *)v156, 1, dataVals_k__BackingField, 0) )
              goto LABEL_322;
            v211 = (BattleServantData_o *)v156;
            v210 = v419;
          }
          v212 = (BattleLogicFunction_o *)BattleServantData__addNp(v211, v210, 0, 0);
          v107 = funcEnt;
          v213 = (int)v212;
          v215 = BattleLogicFunction__getFunctionObject(
                   v212,
                   funcEnt,
                   (int32_t)v156->fields.logic,
                   index,
                   isCommandSideEffect,
                   0,
                   v214);
          v215->fields.procType = 3;
          BattleActionData_BuffData__setSaveNp(v215, v213, 0);
          v216 = v19;
          v217 = v215;
          v101 = isCommandSideEffect;
          goto LABEL_225;
        }
        v197 = BattleLogicFunction__functionGainHpPer(
                 v20,
                 v19->fields.actorId,
                 targetId_k__BackingField,
                 v107,
                 dataVals_k__BackingField,
                 index,
                 v101,
                 v203);
      }
LABEL_191:
      BattleActionData__addAction(v19, v197, 0);
LABEL_137:
      isDamage = FuncList__isDamage(v107->fields.funcType, 0);
      if ( isDamage )
        v168 = 0;
      else
        v168 = -67;
      if ( isDamage )
        v169 = 0;
      else
        v169 = 189;
      if ( v168 != -67 )
      {
        if ( v169 )
          return v19;
        if ( !LOBYTE(v156[9].fields.buffProgressTurnSelfList) )
        {
          this = (BattleLogicFunction_o *)v156[8].fields.dicFuncProcess;
          if ( !this )
            goto LABEL_562;
          if ( !*((_BYTE *)this + 160) )
          {
            LOBYTE(v156[9].fields.buffProgressTurnSelfList) = 1;
            if ( !v467 )
              goto LABEL_562;
            items = v467->fields._items;
            action = (BattleActionData_o *)LODWORD(v156->fields.logic);
            v171 = Method_System_Collections_Generic_List_int__Add__;
            ++v467->fields._version;
            if ( !items )
              goto LABEL_562;
            v172 = v467->fields._size;
            if ( (unsigned int)v172 >= LODWORD(items->max_length) )
            {
              System_Collections_Generic_List_int___AddWithResize(
                v467,
                (int32_t)action,
                *(const MethodInfo_4467270 **)(*(_QWORD *)(v171[4] + 192LL) + 112LL));
              this = (BattleLogicFunction_o *)v156[8].fields.dicFuncProcess;
              if ( !this )
                goto LABEL_562;
            }
            else
            {
              v467->fields._size = v172 + 1;
              items->m_Items[v172] = (int)action;
            }
            v187 = BattleBuffData__UseProgressingDoNotAct((BattleBuffData_o *)this, (BattleServantData_o *)v156, 0, 0);
            BattleActionData__addSideEffectActionData(v19, v187, 1, 0);
            this = (BattleLogicFunction_o *)v156[8].fields.dicFuncProcess;
            if ( !this )
              goto LABEL_562;
          }
          *((_BYTE *)this + 160) = 0;
        }
      }
      v106 = procArgs;
      BattleLogicFunction_ProcListInArgs__setFuncResult(
        procArgs,
        targetId_k__BackingField,
        v19->fields.funcResult,
        dataVals_k__BackingField->fields.funcIndex,
        0);
      BattleLogicFunction__SetReceiveFunctionId(v20, v19, targetId_k__BackingField, v107, v188);
      if ( v109 )
        UseInFsmFuncParam__AddTargetId(v109, v19->fields.funcResult, targetId_k__BackingField, 0);
LABEL_170:
      v151 = v150->max_length;
      if ( (int)++v152 >= v151 )
        goto LABEL_491;
    }
    v191 = v19->fields.actorId;
    v192 = (int32_t)v156->fields.logic;
    v193 = v20;
    v194 = index;
    v195 = dataVals_k__BackingField;
    v196 = 2;
LABEL_190:
    v197 = BattleLogicFunction__functionNPDamage(v193, v191, v192, v195, v194, v196, v19, v190);
    goto LABEL_191;
  }
  v464 = 0;
  v465 = 0;
LABEL_515:
  this = (BattleLogicFunction_o *)BattleLogicFunction_ProcListInArgs__get_CheckDuplicateFunc(procArgs, 0);
  if ( !this )
    goto LABEL_562;
  ((void (__fastcall *)(BattleLogicFunction_o *, const char *))this->klass[1]._1.name)(
    this,
    this->klass[1]._1.namespaze);
  if ( (v465 & 1) != 0 )
  {
    this = (BattleLogicFunction_o *)v20->fields.data;
    if ( !this )
      goto LABEL_562;
    this = (BattleLogicFunction_o *)BattleData__getServantData((BattleData_o *)this, v19->fields.actorId, 0);
    if ( !this )
      goto LABEL_562;
    BattleServantData__resetAccumulationDamage((BattleServantData_o *)this, 0);
  }
  if ( BattleActionData__checkSummonServantList(v19, 0) )
  {
    v441 = (UnityEngine_Object_o *)v20->fields.logic;
    if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v440);
    if ( UnityEngine_Object__op_Inequality(v441, 0, 0) )
    {
      this = (BattleLogicFunction_o *)BattleActionData__getSummonServant(v19, -1, 0);
      if ( !this )
        goto LABEL_562;
      v442 = (int)this->fields.logic;
      v443 = this;
      if ( v442 >= 1 )
      {
        v444 = 0;
        while ( (unsigned int)v444 < v442 )
        {
          v445 = *((_QWORD *)&v443->fields.logictarget + v444);
          if ( !v445 )
            goto LABEL_562;
          this = (BattleLogicFunction_o *)v20->fields.logic;
          if ( !this )
            goto LABEL_562;
          BattleLogic__actEnemyPassiveSkill((BattleLogic_o *)this, *(_DWORD *)(v445 + 48), 0);
          v442 = (int)v443->fields.logic;
          if ( (int)++v444 >= v442 )
            goto LABEL_531;
        }
        goto LABEL_563;
      }
    }
  }
LABEL_531:
  this = (BattleLogicFunction_o *)BattleLogicFunction_ProcListInArgs__get_FuncSideEffectArg(procArgs, 0);
  if ( this )
    this = (BattleLogicFunction_o *)((__int64 (__fastcall *)(BattleLogicFunction_o *, BattleLogicFunction_o *, BattleActionData_o *, BattleServantData_o *, _QWORD))this->klass[1]._1.this_arg.data)(
                                      this,
                                      v20,
                                      v19,
                                      v39,
                                      *(_QWORD *)&this->klass[1]._1.this_arg.bits);
  if ( procArgs->fields._IsTreasureDvc_k__BackingField )
  {
    this = (BattleLogicFunction_o *)BattleLogicFunction_ProcListInArgs__get_IsCommandSideEffect(procArgs, 0);
    if ( ((unsigned __int8)this & 1) == 0 )
      BattleLogicFunction__FlushDeferredBattleValues(v20, v19, v447);
  }
  externalArg = procArgs->fields.externalArg;
  if ( !externalArg )
    goto LABEL_562;
  if ( externalArg->fields._IsSetSubstituteBuffAction_k__BackingField )
    BattleLogicFunction__SetSubstituteAction(v20, v19, isTreasureDvc, v446);
  if ( isBuffUpdate )
  {
    v449 = (UnityEngine_Object_o *)v20->fields.logic;
    if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, action);
    if ( UnityEngine_Object__op_Inequality(v449, 0, 0) )
    {
      this = (BattleLogicFunction_o *)v20->fields.logic;
      if ( !this )
        goto LABEL_562;
      BattleLogic__checkUsedBuff((BattleLogic_o *)this, 0);
      v450 = v20->fields.data;
      if ( !v450 )
        goto LABEL_562;
      this = (BattleLogicFunction_o *)v450->fields._FieldEnvData_k__BackingField;
      if ( !this )
        goto LABEL_562;
      BattleFieldEnvironmentData__CheckUsedBuff((BattleFieldEnvironmentData_o *)this, 0);
    }
  }
  if ( (v464 & 1) != 0 || procArgs->fields.updateField )
  {
    v451 = (UnityEngine_Object_o *)v20->fields.logic;
    if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, action);
    if ( UnityEngine_Object__op_Inequality(v451, 0, 0) )
    {
      this = (BattleLogicFunction_o *)v20->fields.logic;
      if ( !this )
        goto LABEL_562;
      BattleLogic__updateFieldBuff((BattleLogic_o *)this, 0);
    }
  }
  this = (BattleLogicFunction_o *)v467;
  if ( !v467 )
LABEL_562:
    sub_2213CDC(this, action);
  System_Collections_Generic_List_int___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v485,
    v467,
    (const MethodInfo_4467D20 *)Method_System_Collections_Generic_List_int__GetEnumerator__);
  v484[0] = 0;
  v484[1] = &v485;
  while ( System_Collections_Generic_List_Enumerator_int___MoveNext(
            &v485,
            (const MethodInfo_40F5CBC *)Method_System_Collections_Generic_List_Enumerator_int__MoveNext__) )
  {
    v453 = v20->fields.data;
    if ( !v453 )
      sub_2213CDC(0, v452);
    v454 = BattleData__getServantData(v453, v485.fields._current, 0);
    if ( v454 )
      v454->fields.isTDLimitCount = 0;
  }
  System_Collections_Generic_List_Enumerator_int___Dispose(
    &v485,
    (const MethodInfo_40F5CB8 *)Method_System_Collections_Generic_List_Enumerator_int__Dispose__);
  BattleLogicFunction__ApplyGroupedResultAggregate(v455, v19, procArgs, v456);
  return v19;
}


void BattleLogicFunction__setAttackSideEffect(
        BattleLogicFunction_o *this,
        BattleActionData_o *mainAction,
        BattleServantData_o *actionSvtData,
        bool isTreasureDvc,
        BattleLogicFunction_SideEffectMakeArgument_o *attackArg,
        bool isTreasureMultiDamageFunc,
        const MethodInfo *method)
{
  BattleActionData_o *v11; // x20
  BattleLogicFunction_o *v12; // x22
  BattleCommandData_o *v13; // x23
  __int64 v14; // x24
  System_String_o *v15; // x2
  System_String_o *v16; // x3
  int32_t v17; // w4
  int32_t v18; // w5
  bool v19; // w6
  bool v20; // w7
  __int64 v21; // x1
  bool v22; // w8
  System_Collections_Generic_IEnumerable_TSource__o *SideEffectList_k__BackingField; // x25
  BattleLogicFunction___c_c *v24; // x0
  struct BattleLogicFunction___c_StaticFields *static_fields; // x8
  System_Func_object__int__o *_9__58_0; // x26
  Il2CppObject *v27; // x27
  struct BattleLogicFunction___c_StaticFields *v28; // x0
  System_String_o *v29; // x2
  System_String_o *v30; // x3
  int32_t v31; // w4
  int32_t v32; // w5
  bool v33; // w6
  bool v34; // w7
  System_Collections_Generic_IEnumerable_TSource__o *v35; // x0
  __int64 v36; // x25
  BattleLogicFunction_SideEffectMakeArgument_o *v37; // x0
  const MethodInfo *v38; // x6
  BattleLogicFunction_SideEffectMakeArgument_o *Argument__SortMainTargetToFirst; // x5
  const MethodInfo *v40; // x6

  v11 = mainAction;
  v12 = this;
  if ( (byte_5973B9F & 1) == 0 )
  {
    sub_2213A60(&BattleLogicFunction_AttackSideEffectFunctionArgument_TypeInfo);
    sub_2213A60(&BattleCommandData_TypeInfo);
    sub_2213A60(&Method_System_Linq_Enumerable_Select_BattleActionData_SideEffectData__int___);
    sub_2213A60(&Method_System_Linq_Enumerable_ToArray_int___);
    sub_2213A60(&System_Func_BattleActionData_SideEffectData__int__TypeInfo);
    sub_2213A60(&int___TypeInfo);
    sub_2213A60(&Method_BattleLogicFunction___c__setAttackSideEffect_b__58_0__);
    this = (BattleLogicFunction_o *)sub_2213A60(&BattleLogicFunction___c_TypeInfo);
    byte_5973B9F = 1;
  }
  if ( actionSvtData )
  {
    if ( !attackArg )
      goto LABEL_23;
    if ( BasicHelper__IsNullOrEmpty(
           (System_Collections_ICollection_o *)attackArg->fields._SideEffectList_k__BackingField,
           0) )
    {
      return;
    }
    if ( isTreasureDvc )
    {
      v13 = (BattleCommandData_o *)sub_2213CCC(BattleCommandData_TypeInfo);
      BattleCommandData___ctor(v13, 0);
      this = (BattleLogicFunction_o *)BattleServantData__getTreasureDvcCardId(actionSvtData, 0);
      if ( !v13 )
        goto LABEL_23;
      v13->fields._type = (int)this;
      v13->fields.treasureDvc = BattleServantData__getTreasureDvcId(actionSvtData, 1, 0, 0);
    }
    else
    {
      v13 = 0;
    }
    v14 = sub_2213CCC(BattleLogicFunction_AttackSideEffectFunctionArgument_TypeInfo);
    BattleLogicFunction_AttackSideEffectFunctionArgument___ctor(
      (BattleLogicFunction_AttackSideEffectFunctionArgument_o *)v14,
      0);
    if ( v14 )
    {
      *(_QWORD *)(v14 + 104) = v11;
      sub_2213A04((MissionNaviTransitionBoardItem_o *)(v14 + 104), (int32_t)v11, v15, v16, v17, v18, v19, v20);
      v22 = isTreasureDvc && isTreasureMultiDamageFunc;
      SideEffectList_k__BackingField = (System_Collections_Generic_IEnumerable_TSource__o *)attackArg->fields._SideEffectList_k__BackingField;
      *(_BYTE *)(v14 + 96) = v22;
      v24 = BattleLogicFunction___c_TypeInfo;
      if ( !*(&BattleLogicFunction___c_TypeInfo->_2.cctor_finished + 1) )
      {
        j_il2cpp_runtime_class_init_0(BattleLogicFunction___c_TypeInfo, v21);
        v24 = BattleLogicFunction___c_TypeInfo;
      }
      static_fields = v24->static_fields;
      _9__58_0 = (System_Func_object__int__o *)static_fields->__9__58_0;
      if ( !_9__58_0 )
      {
        if ( !*(&v24->_2.cctor_finished + 1) )
        {
          j_il2cpp_runtime_class_init_0(v24, v21);
          static_fields = BattleLogicFunction___c_TypeInfo->static_fields;
        }
        v27 = (Il2CppObject *)static_fields->__9;
        _9__58_0 = (System_Func_object__int__o *)sub_2213CCC(System_Func_BattleActionData_SideEffectData__int__TypeInfo);
        System_Func_object__int____ctor(_9__58_0, v27, Method_BattleLogicFunction___c__setAttackSideEffect_b__58_0__, 0);
        v28 = BattleLogicFunction___c_TypeInfo->static_fields;
        v28->__9__58_0 = (struct System_Func_BattleActionData_SideEffectData__int__o *)_9__58_0;
        sub_2213A04(
          (MissionNaviTransitionBoardItem_o *)&v28->__9__58_0,
          (int32_t)_9__58_0,
          v29,
          v30,
          v31,
          v32,
          v33,
          v34);
      }
      v35 = (System_Collections_Generic_IEnumerable_TSource__o *)System_Linq_Enumerable__Select_object__int_(
                                                                   SideEffectList_k__BackingField,
                                                                   (System_Func_TSource__TResult__o *)_9__58_0,
                                                                   (const MethodInfo_389085C *)Method_System_Linq_Enumerable_Select_BattleActionData_SideEffectData__int___);
      this = (BattleLogicFunction_o *)System_Linq_Enumerable__ToArray_int_(
                                        v35,
                                        (const MethodInfo_389B994 *)Method_System_Linq_Enumerable_ToArray_int___);
      if ( v11 )
      {
        BattleActionData__SetFirstAtkMainTargetId(v11, (System_Int32_array *)this, 0);
        v36 = ((__int64 (__fastcall *)(BattleLogicFunction_SideEffectMakeArgument_o *, void *))attackArg->klass[1]._1.image)(
                attackArg,
                attackArg->klass[1]._1.gc_desc);
        this = (BattleLogicFunction_o *)sub_2213B20(int___TypeInfo, 1);
        if ( this )
        {
          mainAction = (BattleActionData_o *)this;
          if ( !LODWORD(this->fields.logic) )
            sub_2213CE4(this);
          LODWORD(this->fields.logictarget) = v11->fields._FirstAtkMainTargetId_k__BackingField;
          if ( v36 )
          {
            v37 = (BattleLogicFunction_SideEffectMakeArgument_o *)(*(__int64 (__fastcall **)(__int64, BattleLogicFunction_o *, _QWORD))(*(_QWORD *)v36 + 408LL))(
                                                                    v36,
                                                                    this,
                                                                    *(_QWORD *)(*(_QWORD *)v36 + 416LL));
            BattleLogicFunction__SetTargetAttackSideEffect(
              v12,
              (BattleLogicFunction_AttackSideEffectFunctionArgument_o *)v14,
              v11,
              actionSvtData,
              v13,
              v37,
              v38);
            Argument__SortMainTargetToFirst = BattleLogicFunction_SideEffectMakeArgument__SortMainTargetToFirst(
                                                attackArg,
                                                v11->fields._FirstAtkMainTargetId_k__BackingField,
                                                0);
            BattleLogicFunction__SetTargetAttackSideEffect(
              v12,
              (BattleLogicFunction_AttackSideEffectFunctionArgument_o *)v14,
              v11,
              actionSvtData,
              v13,
              Argument__SortMainTargetToFirst,
              v40);
            return;
          }
        }
      }
    }
LABEL_23:
    sub_2213CDC(this, mainAction);
  }
}


BattleLogicFunction_SideEffectMakeArgument_o *BattleLogicFunction_AfterAttackSideEffectMakeArgument__Init(
        BattleLogicFunction_AfterAttackSideEffectMakeArgument_o *this,
        BattleActionData_o *mainAction,
        const MethodInfo *method)
{
  struct BattleActionData_SideEffectData_array *DamageAttackSideEffectList; // x0
  System_String_o *v5; // x2
  System_String_o *v6; // x3
  int32_t v7; // w4
  int32_t v8; // w5
  bool v9; // w6
  bool v10; // w7

  if ( !mainAction )
    sub_2213CDC(this, 0);
  DamageAttackSideEffectList = BattleActionData__getDamageAttackSideEffectList(mainAction, 0);
  this->fields._SideEffectList_k__BackingField = DamageAttackSideEffectList;
  sub_2213A04(
    (MissionNaviTransitionBoardItem_o *)&this->fields,
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

  if ( (byte_5973C2A & 1) == 0 )
  {
    sub_2213A60(&BattleLogicFunction_AfterMainAttackSideEffectMakeArgument_TypeInfo);
    byte_5973C2A = 1;
  }
  v2 = (BattleLogicFunction_SideEffectMakeArgument_o *)sub_2213CCC(BattleLogicFunction_AfterMainAttackSideEffectMakeArgument_TypeInfo);
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
  System_String_o *v5; // x2
  System_String_o *v6; // x3
  int32_t v7; // w4
  int32_t v8; // w5
  bool v9; // w6
  bool v10; // w7

  BattleLogicFunction_CommonCheckDuplicateFunction___ctor(
    (BattleLogicFunction_CommonCheckDuplicateFunction_o *)this,
    (const MethodInfo *)argument);
  this->fields.argument = argument;
  sub_2213A04((MissionNaviTransitionBoardItem_o *)&this->fields.argument, (int32_t)argument, v5, v6, v7, v8, v9, v10);
}


void BattleLogicFunction_AttackSideEffectFunctionArgument___ctor(
        BattleLogicFunction_AttackSideEffectFunctionArgument_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x20
  const MethodInfo *v4; // x1
  System_String_o *v5; // x2
  System_String_o *v6; // x3
  int32_t v7; // w4
  int32_t v8; // w5
  bool v9; // w6
  bool v10; // w7
  System_String_o *v11; // x2
  System_String_o *v12; // x3
  int32_t v13; // w4
  int32_t v14; // w5
  bool v15; // w6
  bool v16; // w7

  if ( (byte_5973C0B & 1) == 0 )
  {
    sub_2213A60(&BattleLogicFunction_AttackSideEffectCheckDuplicateFunction_TypeInfo);
    byte_5973C0B = 1;
  }
  BattleLogicFunction_CommonSideEffectFunctionArgument___ctor(
    (BattleLogicFunction_CommonSideEffectFunctionArgument_o *)this,
    method);
  v3 = sub_2213CCC(BattleLogicFunction_AttackSideEffectCheckDuplicateFunction_TypeInfo);
  BattleLogicFunction_CommonCheckDuplicateFunction___ctor((BattleLogicFunction_CommonCheckDuplicateFunction_o *)v3, v4);
  *(_QWORD *)(v3 + 24) = this;
  sub_2213A04((MissionNaviTransitionBoardItem_o *)(v3 + 24), (int32_t)this, v5, v6, v7, v8, v9, v10);
  this->fields.checkDuplicate = (struct BattleLogicFunction_CheckDuplicateFunction_o *)v3;
  sub_2213A04((MissionNaviTransitionBoardItem_o *)&this->fields.checkDuplicate, v3, v11, v12, v13, v14, v15, v16);
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
  System_String_o *v4; // x2
  System_String_o *v5; // x3
  int32_t v6; // w4
  int32_t v7; // w5
  bool v8; // w6
  bool v9; // w7

  if ( (byte_5973C18 & 1) == 0 )
  {
    sub_2213A60(&Method_System_Collections_Generic_List_BattleLogicFunction_ExecutedFunctionData___ctor__);
    sub_2213A60(&System_Collections_Generic_List_BattleLogicFunction_ExecutedFunctionData__TypeInfo);
    byte_5973C18 = 1;
  }
  v3 = (System_Collections_Generic_List_object__o *)sub_2213CCC(System_Collections_Generic_List_BattleLogicFunction_ExecutedFunctionData__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v3,
    (const MethodInfo_44833FC *)Method_System_Collections_Generic_List_BattleLogicFunction_ExecutedFunctionData___ctor__);
  this->fields.executedFuncList = (struct System_Collections_Generic_List_BattleLogicFunction_ExecutedFunctionData__o *)v3;
  sub_2213A04((MissionNaviTransitionBoardItem_o *)&this->fields, (int32_t)v3, v4, v5, v6, v7, v8, v9);
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
  System_Collections_Generic_List_object__o *v5; // x8

  if ( (byte_5973C14 & 1) == 0 )
  {
    sub_2213A60(&Method_System_Collections_Generic_List_BattleLogicFunction_ExecutedFunctionData__get_Count__);
    sub_2213A60(&Method_System_Collections_Generic_List_BattleLogicFunction_ExecutedFunctionData__get_Item__);
    byte_5973C14 = 1;
  }
  executedFuncList = (System_Collections_Generic_List_object__o *)this->fields.executedFuncList;
  if ( !executedFuncList )
LABEL_8:
    sub_2213CDC(executedFuncList, method);
  v4 = 0;
  while ( v4 < executedFuncList->fields._size )
  {
    executedFuncList = (System_Collections_Generic_List_object__o *)System_Collections_Generic_List_object___get_Item(
                                                                      executedFuncList,
                                                                      v4,
                                                                      (const MethodInfo_4483994 *)Method_System_Collections_Generic_List_BattleLogicFunction_ExecutedFunctionData__get_Item__);
    if ( executedFuncList )
    {
      v5 = executedFuncList;
      executedFuncList = (System_Collections_Generic_List_object__o *)this->fields.executedFuncList;
      ++v4;
      LOBYTE(v5->fields._size) = 1;
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
    sub_2213CDC(this, 0);
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
  System_String_o *v8; // x2
  System_String_o *v9; // x3
  int32_t v10; // w4
  int32_t v11; // w5
  bool v12; // w6
  bool v13; // w7
  System_Collections_Generic_List_object__o *executedFuncList; // x19
  System_Predicate_object__o *v15; // x20

  if ( (byte_5973C16 & 1) == 0 )
  {
    sub_2213A60(&Method_System_Collections_Generic_List_BattleLogicFunction_ExecutedFunctionData__FindIndex__);
    sub_2213A60(&System_Predicate_BattleLogicFunction_ExecutedFunctionData__TypeInfo);
    sub_2213A60(&Method_BattleLogicFunction_CommonCheckDuplicateFunction___c__DisplayClass7_0__isExecutedFunction_b__0__);
    sub_2213A60(&BattleLogicFunction_CommonCheckDuplicateFunction___c__DisplayClass7_0_TypeInfo);
    byte_5973C16 = 1;
  }
  v5 = sub_2213CCC(BattleLogicFunction_CommonCheckDuplicateFunction___c__DisplayClass7_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v5, 0);
  if ( !v5
    || (*(_QWORD *)(v5 + 16) = vals,
        sub_2213A04((MissionNaviTransitionBoardItem_o *)(v5 + 16), (int32_t)vals, v8, v9, v10, v11, v12, v13),
        executedFuncList = (System_Collections_Generic_List_object__o *)this->fields.executedFuncList,
        v15 = (System_Predicate_object__o *)sub_2213CCC(System_Predicate_BattleLogicFunction_ExecutedFunctionData__TypeInfo),
        System_Predicate_object____ctor(
          v15,
          (Il2CppObject *)v5,
          Method_BattleLogicFunction_CommonCheckDuplicateFunction___c__DisplayClass7_0__isExecutedFunction_b__0__,
          0),
        !executedFuncList) )
  {
    sub_2213CDC(v6, v7);
  }
  return System_Collections_Generic_List_object___FindIndex(
           executedFuncList,
           (System_Predicate_T__o *)v15,
           (const MethodInfo_44844B8 *)Method_System_Collections_Generic_List_BattleLogicFunction_ExecutedFunctionData__FindIndex__) >= 0;
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
  System_String_o *v10; // x2
  System_String_o *v11; // x3
  int32_t v12; // w4
  int32_t v13; // w5
  bool v14; // w6
  bool v15; // w7
  System_Predicate_BattleLogicFunction_ExecutedFunctionData__c *v16; // x0
  System_Collections_Generic_List_object__o *executedFuncList; // x20
  System_Predicate_object__o *v18; // x19

  if ( (byte_5973C17 & 1) == 0 )
  {
    sub_2213A60(&Method_System_Collections_Generic_List_BattleLogicFunction_ExecutedFunctionData__FindIndex__);
    sub_2213A60(&System_Predicate_BattleLogicFunction_ExecutedFunctionData__TypeInfo);
    sub_2213A60(&Method_BattleLogicFunction_CommonCheckDuplicateFunction___c__DisplayClass8_0__isExecutedTarget_b__0__);
    sub_2213A60(&BattleLogicFunction_CommonCheckDuplicateFunction___c__DisplayClass8_0_TypeInfo);
    byte_5973C17 = 1;
  }
  v7 = sub_2213CCC(BattleLogicFunction_CommonCheckDuplicateFunction___c__DisplayClass8_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v7, 0);
  if ( !v7
    || (*(_QWORD *)(v7 + 16) = vals,
        sub_2213A04((MissionNaviTransitionBoardItem_o *)(v7 + 16), (int32_t)vals, v10, v11, v12, v13, v14, v15),
        v16 = System_Predicate_BattleLogicFunction_ExecutedFunctionData__TypeInfo,
        executedFuncList = (System_Collections_Generic_List_object__o *)this->fields.executedFuncList,
        *(_DWORD *)(v7 + 24) = targetId,
        v18 = (System_Predicate_object__o *)sub_2213CCC(v16),
        System_Predicate_object____ctor(
          v18,
          (Il2CppObject *)v7,
          Method_BattleLogicFunction_CommonCheckDuplicateFunction___c__DisplayClass8_0__isExecutedTarget_b__0__,
          0),
        !executedFuncList) )
  {
    sub_2213CDC(v8, v9);
  }
  return System_Collections_Generic_List_object___FindIndex(
           executedFuncList,
           (System_Predicate_T__o *)v18,
           (const MethodInfo_44844B8 *)Method_System_Collections_Generic_List_BattleLogicFunction_ExecutedFunctionData__FindIndex__) >= 0;
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
    sub_2213CDC(this, 0);
  targetType = vals->fields.targetType;
  return (targetType < 0x1B || targetType == 32 || targetType == 30)
      && ((bool (__fastcall *)(BattleLogicFunction_CommonCheckDuplicateFunction_o *))this->klass->vtable._10_isExecutedFunction.methodPtr)(this);
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
  System_String_o *v10; // x2
  System_String_o *v11; // x3
  int32_t v12; // w4
  int32_t v13; // w5
  bool v14; // w6
  bool v15; // w7
  unsigned __int64 v16; // x26
  __int64 v17; // x22
  System_String_o *v18; // x2
  System_String_o *v19; // x3
  int32_t v20; // w4
  int32_t v21; // w5
  bool v22; // w6
  bool v23; // w7
  __int64 v24; // x23
  __int64 v25; // x0
  System_Collections_Generic_List_object__o *executedFuncList; // x24
  System_Predicate_object__o *v27; // x25
  DataVals_o *v28; // x24
  System_Collections_Generic_List_object__o *v29; // x23
  int32_t v30; // w25
  BattleLogicFunction_ExecutedFunctionData_o *v31; // x22
  const MethodInfo *v32; // x3
  System_String_o *v33; // x2
  System_String_o *v34; // x3
  int32_t v35; // w4
  int32_t v36; // w5
  bool v37; // w6
  bool v38; // w7
  struct System_Object_array *items; // x8
  _QWORD *v40; // x9
  __int64 size; // x10
  Il2CppClass **v42; // x0

  if ( (byte_5973C15 & 1) == 0 )
  {
    sub_2213A60(&BattleLogicFunction_ExecutedFunctionData_TypeInfo);
    sub_2213A60(&Method_System_Collections_Generic_List_BattleLogicFunction_ExecutedFunctionData__Add__);
    sub_2213A60(&Method_System_Collections_Generic_List_BattleLogicFunction_ExecutedFunctionData__FindIndex__);
    sub_2213A60(&System_Predicate_BattleLogicFunction_ExecutedFunctionData__TypeInfo);
    sub_2213A60(&BattleLogicFunction_CommonCheckDuplicateFunction___c__DisplayClass5_0_TypeInfo);
    sub_2213A60(&Method_BattleLogicFunction_CommonCheckDuplicateFunction___c__DisplayClass5_1__saveExecutedFunction_b__0__);
    sub_2213A60(&BattleLogicFunction_CommonCheckDuplicateFunction___c__DisplayClass5_1_TypeInfo);
    byte_5973C15 = 1;
  }
  v7 = sub_2213CCC(BattleLogicFunction_CommonCheckDuplicateFunction___c__DisplayClass5_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v7, 0);
  if ( !v7 )
    goto LABEL_19;
  *(_QWORD *)(v7 + 16) = vals;
  sub_2213A04((MissionNaviTransitionBoardItem_o *)(v7 + 16), (int32_t)vals, v10, v11, v12, v13, v14, v15);
  if ( !targetIds )
    goto LABEL_19;
  if ( SLODWORD(targetIds->max_length) >= 1 )
  {
    v16 = 0;
    while ( 1 )
    {
      v17 = sub_2213CCC(BattleLogicFunction_CommonCheckDuplicateFunction___c__DisplayClass5_1_TypeInfo);
      System_Object___ctor((Il2CppObject *)v17, 0);
      if ( !v17 )
        break;
      *(_QWORD *)(v17 + 24) = v7;
      v24 = v17 + 24;
      sub_2213A04((MissionNaviTransitionBoardItem_o *)(v17 + 24), v7, v18, v19, v20, v21, v22, v23);
      if ( v16 >= LODWORD(targetIds->max_length) )
        sub_2213CE4(v25);
      executedFuncList = (System_Collections_Generic_List_object__o *)this->fields.executedFuncList;
      *(_DWORD *)(v17 + 16) = targetIds->m_Items[v16];
      v27 = (System_Predicate_object__o *)sub_2213CCC(System_Predicate_BattleLogicFunction_ExecutedFunctionData__TypeInfo);
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
                (const MethodInfo_44844B8 *)Method_System_Collections_Generic_List_BattleLogicFunction_ExecutedFunctionData__FindIndex__);
      if ( (Index & 0x80000000) != 0 )
      {
        if ( !*(_QWORD *)v24 )
          break;
        v28 = *(DataVals_o **)(*(_QWORD *)v24 + 16LL);
        v29 = (System_Collections_Generic_List_object__o *)this->fields.executedFuncList;
        v30 = *(_DWORD *)(v17 + 16);
        v31 = (BattleLogicFunction_ExecutedFunctionData_o *)sub_2213CCC(BattleLogicFunction_ExecutedFunctionData_TypeInfo);
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
            *(const MethodInfo_4483C64 **)(*(_QWORD *)(v40[4] + 192LL) + 112LL));
        }
        else
        {
          v42 = &items->obj.klass + size;
          v29->fields._size = size + 1;
          v42[4] = (Il2CppClass *)v31;
          sub_2213A04((MissionNaviTransitionBoardItem_o *)(v42 + 4), (int32_t)v31, v33, v34, v35, v36, v37, v38);
        }
      }
      if ( (__int64)++v16 >= SLODWORD(targetIds->max_length) )
        return;
    }
LABEL_19:
    sub_2213CDC(Index, v9);
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
    sub_2213CDC(this, n);
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
    sub_2213CDC(this, n);
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
  bool result; // w0

  if ( !n || (vals = this->fields.vals) == 0 )
    sub_2213CDC(this, n);
  result = n->fields.index == vals->fields.funcIndex
        && ((targetId = this->fields.targetId, targetId == -1) || n->fields.targetId == targetId)
        && n->fields.isEnable;
  return result;
}


void BattleLogicFunction_CommonSideEffectCheckDuplicateFunction___ctor(
        BattleLogicFunction_CommonSideEffectCheckDuplicateFunction_o *this,
        BattleLogicFunction_CommonSideEffectFunctionArgument_o *argument,
        const MethodInfo *method)
{
  System_String_o *v5; // x2
  System_String_o *v6; // x3
  int32_t v7; // w4
  int32_t v8; // w5
  bool v9; // w6
  bool v10; // w7

  BattleLogicFunction_CommonCheckDuplicateFunction___ctor(
    (BattleLogicFunction_CommonCheckDuplicateFunction_o *)this,
    (const MethodInfo *)argument);
  this->fields.argument = argument;
  sub_2213A04((MissionNaviTransitionBoardItem_o *)&this->fields.argument, (int32_t)argument, v5, v6, v7, v8, v9, v10);
}


void BattleLogicFunction_CommonSideEffectCheckDuplicateFunction__Init(
        BattleLogicFunction_CommonSideEffectCheckDuplicateFunction_o *this,
        const MethodInfo *method)
{
  BattleLogicFunction_CommonSideEffectFunctionArgument_o *argument; // x0
  struct System_Collections_Generic_List_BattleLogicFunction_ExecutedFunctionData__o *v4; // x0
  System_String_o *v5; // x2
  System_String_o *v6; // x3
  int32_t v7; // w4
  int32_t v8; // w5
  bool v9; // w6
  bool v10; // w7

  argument = this->fields.argument;
  if ( !argument )
    sub_2213CDC(0, method);
  v4 = BattleLogicFunction_CommonSideEffectFunctionArgument__getCheckBuffFuncList(argument, method);
  this->fields.executedFuncList = v4;
  sub_2213A04((MissionNaviTransitionBoardItem_o *)&this->fields, (int32_t)v4, v5, v6, v7, v8, v9, v10);
}


bool BattleLogicFunction_CommonSideEffectCheckDuplicateFunction__isNotExecLocal(
        BattleLogicFunction_CommonSideEffectCheckDuplicateFunction_o *this,
        DataVals_o *vals,
        System_Int32_array *targetIds,
        const MethodInfo *method)
{
  __int64 targetType; // x8

  if ( !vals )
    goto LABEL_11;
  targetType = (unsigned int)vals->fields.targetType;
  if ( (unsigned int)(targetType - 5) < 0x16 )
    return ((bool (__fastcall *)(BattleLogicFunction_CommonSideEffectCheckDuplicateFunction_o *))this->klass->vtable._10_isExecutedFunction.methodPtr)(this);
  if ( (unsigned int)targetType > 0x20 )
    return 0;
  if ( ((1LL << targetType) & 0x14000000FLL) != 0 )
    return ((bool (__fastcall *)(BattleLogicFunction_CommonSideEffectCheckDuplicateFunction_o *))this->klass->vtable._10_isExecutedFunction.methodPtr)(this);
  if ( targetType != 4 )
    return 0;
  if ( !targetIds )
LABEL_11:
    sub_2213CDC(this, vals);
  if ( !LODWORD(targetIds->max_length) )
    sub_2213CE4(this);
  return ((bool (__fastcall *)(BattleLogicFunction_CommonSideEffectCheckDuplicateFunction_o *, DataVals_o *, _QWORD, const MethodInfo *))this->klass->vtable._11_isExecutedTarget.methodPtr)(
           this,
           vals,
           (unsigned int)targetIds->m_Items[0],
           this->klass->vtable._11_isExecutedTarget.method);
}


void BattleLogicFunction_CommonSideEffectFunctionArgument___ctor(
        BattleLogicFunction_CommonSideEffectFunctionArgument_o *this,
        const MethodInfo *method)
{
  System_Collections_Generic_Dictionary_int__List_BattleLogicFunction_ExecutedFunctionData___c *v3; // x0
  System_Collections_Generic_Dictionary_int__object__o *v4; // x20
  System_String_o *v5; // x2
  System_String_o *v6; // x3
  int32_t v7; // w4
  int32_t v8; // w5
  bool v9; // w6
  bool v10; // w7
  const MethodInfo *v11; // x1

  if ( (byte_5973C0A & 1) == 0 )
  {
    sub_2213A60(&Method_System_Collections_Generic_Dictionary_int__List_BattleLogicFunction_ExecutedFunctionData____ctor__);
    sub_2213A60(&System_Collections_Generic_Dictionary_int__List_BattleLogicFunction_ExecutedFunctionData___TypeInfo);
    byte_5973C0A = 1;
  }
  v3 = System_Collections_Generic_Dictionary_int__List_BattleLogicFunction_ExecutedFunctionData___TypeInfo;
  this->fields.buffUniqueId = -1;
  v4 = (System_Collections_Generic_Dictionary_int__object__o *)sub_2213CCC(v3);
  System_Collections_Generic_Dictionary_int__object____ctor(
    v4,
    (const MethodInfo_3F9BAFC *)Method_System_Collections_Generic_Dictionary_int__List_BattleLogicFunction_ExecutedFunctionData____ctor__);
  this->fields.executedBuffFuncDic = (struct System_Collections_Generic_Dictionary_int__List_BattleLogicFunction_ExecutedFunctionData___o *)v4;
  sub_2213A04(
    (MissionNaviTransitionBoardItem_o *)&this->fields.executedBuffFuncDic,
    (int32_t)v4,
    v5,
    v6,
    v7,
    v8,
    v9,
    v10);
  BattleLogicFunction_FunctionArgument___ctor((BattleLogicFunction_FunctionArgument_o *)this, v11);
}


System_Collections_Generic_List_BattleLogicFunction_ExecutedFunctionData__o *BattleLogicFunction_CommonSideEffectFunctionArgument__getCheckBuffFuncList(
        BattleLogicFunction_CommonSideEffectFunctionArgument_o *this,
        const MethodInfo *method)
{
  struct System_Collections_Generic_Dictionary_int__List_BattleLogicFunction_ExecutedFunctionData___o *executedBuffFuncDic; // x0
  struct System_Collections_Generic_Dictionary_int__List_BattleLogicFunction_ExecutedFunctionData___o *v4; // x20
  int32_t buffUniqueId; // w21
  System_Collections_Generic_List_object__o *v6; // x22

  if ( (byte_5973C09 & 1) == 0 )
  {
    sub_2213A60(&Method_System_Collections_Generic_Dictionary_int__List_BattleLogicFunction_ExecutedFunctionData___ContainsKey__);
    sub_2213A60(&Method_System_Collections_Generic_Dictionary_int__List_BattleLogicFunction_ExecutedFunctionData___get_Item__);
    sub_2213A60(&Method_System_Collections_Generic_Dictionary_int__List_BattleLogicFunction_ExecutedFunctionData___set_Item__);
    sub_2213A60(&Method_System_Collections_Generic_List_BattleLogicFunction_ExecutedFunctionData___ctor__);
    sub_2213A60(&System_Collections_Generic_List_BattleLogicFunction_ExecutedFunctionData__TypeInfo);
    byte_5973C09 = 1;
  }
  executedBuffFuncDic = this->fields.executedBuffFuncDic;
  if ( !executedBuffFuncDic )
    goto LABEL_9;
  if ( !System_Collections_Generic_Dictionary_int__object___ContainsKey(
          (System_Collections_Generic_Dictionary_int__object__o *)executedBuffFuncDic,
          this->fields.buffUniqueId,
          (const MethodInfo_3F9C6A4 *)Method_System_Collections_Generic_Dictionary_int__List_BattleLogicFunction_ExecutedFunctionData___ContainsKey__) )
  {
    v4 = this->fields.executedBuffFuncDic;
    buffUniqueId = this->fields.buffUniqueId;
    v6 = (System_Collections_Generic_List_object__o *)sub_2213CCC(System_Collections_Generic_List_BattleLogicFunction_ExecutedFunctionData__TypeInfo);
    System_Collections_Generic_List_object____ctor(
      v6,
      (const MethodInfo_44833FC *)Method_System_Collections_Generic_List_BattleLogicFunction_ExecutedFunctionData___ctor__);
    if ( !v4 )
      goto LABEL_9;
    System_Collections_Generic_Dictionary_int__object___set_Item(
      (System_Collections_Generic_Dictionary_int__object__o *)v4,
      buffUniqueId,
      (Il2CppObject *)v6,
      (const MethodInfo_3F9C49C *)Method_System_Collections_Generic_Dictionary_int__List_BattleLogicFunction_ExecutedFunctionData___set_Item__);
  }
  executedBuffFuncDic = this->fields.executedBuffFuncDic;
  if ( !executedBuffFuncDic )
LABEL_9:
    sub_2213CDC(executedBuffFuncDic, method);
  return (System_Collections_Generic_List_BattleLogicFunction_ExecutedFunctionData__o *)System_Collections_Generic_Dictionary_int__object___get_Item(
                                                                                          (System_Collections_Generic_Dictionary_int__object__o *)executedBuffFuncDic,
                                                                                          this->fields.buffUniqueId,
                                                                                          (const MethodInfo_3F9C410 *)Method_System_Collections_Generic_Dictionary_int__List_BattleLogicFunction_ExecutedFunctionData___get_Item__);
}


bool BattleLogicFunction_CommonSideEffectFunctionArgument__get_IsDeferredDealtDamageBattleValueTarget(
        BattleLogicFunction_CommonSideEffectFunctionArgument_o *this,
        const MethodInfo *method)
{
  return this->fields._IsDeferredDealtDamageBattleValueTarget_k__BackingField;
}


BattleActionData_o *BattleLogicFunction_CommonSideEffectFunctionArgument__get_RootMainActionData(
        BattleLogicFunction_CommonSideEffectFunctionArgument_o *this,
        const MethodInfo *method)
{
  return this->fields._RootMainActionData_k__BackingField;
}


void BattleLogicFunction_CommonSideEffectFunctionArgument__set_IsDeferredDealtDamageBattleValueTarget(
        BattleLogicFunction_CommonSideEffectFunctionArgument_o *this,
        bool value,
        const MethodInfo *method)
{
  this->fields._IsDeferredDealtDamageBattleValueTarget_k__BackingField = value;
}


void BattleLogicFunction_CommonSideEffectFunctionArgument__set_RootMainActionData(
        BattleLogicFunction_CommonSideEffectFunctionArgument_o *this,
        BattleActionData_o *value,
        const MethodInfo *method)
{
  System_String_o *v3; // x3
  int32_t v4; // w4
  int32_t v5; // w5
  bool v6; // w6
  bool v7; // w7

  this->fields._RootMainActionData_k__BackingField = value;
  sub_2213A04(
    (MissionNaviTransitionBoardItem_o *)&this->fields._RootMainActionData_k__BackingField,
    (int32_t)value,
    (System_String_o *)method,
    v3,
    v4,
    v5,
    v6,
    v7);
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
    sub_2213CDC(v7, v8);
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
    sub_2213CDC(this, 0);
  return this->fields.index == vals->fields.funcIndex
      && (targetId == -1 || this->fields.targetId == targetId)
      && (!isCheckEnable || this->fields.isEnable);
}


System_Int32_array *BattleLogicFunction_ForSummonedEnemyFunctionArgument__GetFixTargetIds(
        BattleLogicFunction_ForSummonedEnemyFunctionArgument_o *this,
        int32_t targetType,
        System_Int32_array *beforeTargetIds,
        const MethodInfo *method)
{
  __int64 v6; // x1
  long double v7; // q0
  System_Int32_array *result; // x0
  __int64 v9; // x1
  _QWORD *v10; // x19
  __int64 v11; // x8
  __int64 v12; // x0
  __int64 v13; // x0

  if ( (byte_5973C2B & 1) == 0 )
  {
    sub_2213A60(&Method_System_Array_Empty_int___);
    sub_2213A60(&Method_System_Linq_Enumerable_Contains_int___);
    sub_2213A60(&int___TypeInfo);
    byte_5973C2B = 1;
  }
  if ( System_Linq_Enumerable__Contains_int_(
         (System_Collections_Generic_IEnumerable_TSource__o *)beforeTargetIds,
         this->fields._SummonedEnemyUniqueId_k__BackingField,
         (const MethodInfo_3876640 *)Method_System_Linq_Enumerable_Contains_int___) )
  {
    result = (System_Int32_array *)sub_2213B20(int___TypeInfo, 1);
    if ( !result )
      sub_2213CDC(0, v9);
    if ( !LODWORD(result->max_length) )
      sub_2213CE4(result);
    result->m_Items[0] = this->fields._SummonedEnemyUniqueId_k__BackingField;
  }
  else
  {
    v10 = Method_System_Array_Empty_int___;
    v11 = *((_QWORD *)Method_System_Array_Empty_int___ + 7);
    if ( !v11 )
    {
      sub_224B964(Method_System_Array_Empty_int___);
      v11 = v10[7];
    }
    v12 = *(_QWORD *)(v11 + 16);
    if ( (*(_WORD *)(v12 + 309) & 1) == 0 )
      v12 = sub_224B908(v7);
    if ( !*(_DWORD *)(v12 + 228) )
      *(__n128 *)&v7 = j_il2cpp_runtime_class_init_0(v12, v6);
    v13 = *(_QWORD *)(v10[7] + 16LL);
    if ( (*(_WORD *)(v13 + 309) & 1) == 0 )
      v13 = sub_224B908(v7);
    return **(System_Int32_array ***)(v13 + 184);
  }
  return result;
}


int32_t BattleLogicFunction_ForSummonedEnemyFunctionArgument__get_SummonedEnemyUniqueId(
        BattleLogicFunction_ForSummonedEnemyFunctionArgument_o *this,
        const MethodInfo *method)
{
  return this->fields._SummonedEnemyUniqueId_k__BackingField;
}


void BattleLogicFunction_ForSummonedEnemyFunctionArgument__set_SummonedEnemyUniqueId(
        BattleLogicFunction_ForSummonedEnemyFunctionArgument_o *this,
        int32_t value,
        const MethodInfo *method)
{
  this->fields._SummonedEnemyUniqueId_k__BackingField = value;
}


void BattleLogicFunction_FuncActionResult___ctor(
        BattleLogicFunction_FuncActionResult_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


// local variable allocation has failed, the output may be wrong!
void BattleLogicFunction_FuncActionResult__SetResultBySubstituteBuff(
        BattleLogicFunction_FuncActionResult_o *this,
        BattleBuffData_BuffData_o *buff,
        bool isResist,
        const MethodInfo *method)
{
  int32_t v4; // w4
  int32_t v5; // w5
  bool v6; // w6
  bool v7; // w7
  __int64 v11; // x1
  BattleBuffData_SubstituteData_o *substituteData; // x0
  struct System_String_o *ResistPopupText; // x0
  System_String_o *v14; // x2
  System_String_o *v15; // x3
  int32_t v16; // w4
  int32_t v17; // w5
  bool v18; // w6
  bool v19; // w7
  BattleBuffData_SubstituteData_o *v20; // x8
  struct System_Int32_array *ResistEffectList; // x0
  System_String_o *v22; // x2
  System_String_o *v23; // x3
  int32_t v24; // w4
  int32_t v25; // w5
  bool v26; // w6
  bool v27; // w7
  int32_t v28; // w1
  struct System_Int32_array **p_ResistEffectList_k__BackingField; // x19
  struct System_String_o *PopupText; // x0
  System_String_o *v31; // x2
  System_String_o *v32; // x3
  int32_t v33; // w4
  int32_t v34; // w5
  bool v35; // w6
  bool v36; // w7
  BattleBuffData_SubstituteData_o *v37; // x8
  struct System_Int32_array *EffectList; // x0

  if ( buff )
  {
    this->fields._SubstituteBuff_k__BackingField = buff;
    sub_2213A04(
      (MissionNaviTransitionBoardItem_o *)&this->fields._SubstituteBuff_k__BackingField,
      (int32_t)buff,
      (System_String_o *)isResist,
      (System_String_o *)method,
      v4,
      v5,
      v6,
      v7);
    if ( isResist )
    {
      substituteData = buff->fields.substituteData;
      this->fields._IsResisted_k__BackingField = 1;
      if ( substituteData )
      {
        ResistPopupText = BattleBuffData_SubstituteData__get_ResistPopupText(substituteData, 0);
        this->fields._ResistPopupText_k__BackingField = ResistPopupText;
        sub_2213A04(
          (MissionNaviTransitionBoardItem_o *)&this->fields._ResistPopupText_k__BackingField,
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
          substituteData = (BattleBuffData_SubstituteData_o *)BattleBuffData_SubstituteData__get_ResistPopupIconId(
                                                                substituteData,
                                                                0);
          v20 = buff->fields.substituteData;
          this->fields._ResistPopupIconId_k__BackingField = (int)substituteData;
          if ( v20 )
          {
            ResistEffectList = BattleBuffData_SubstituteData__get_ResistEffectList(v20, 0);
            v28 = (int)ResistEffectList;
            this->fields._ResistEffectList_k__BackingField = ResistEffectList;
            p_ResistEffectList_k__BackingField = &this->fields._ResistEffectList_k__BackingField;
LABEL_12:
            sub_2213A04(
              (MissionNaviTransitionBoardItem_o *)p_ResistEffectList_k__BackingField,
              v28,
              v22,
              v23,
              v24,
              v25,
              v26,
              v27);
            return;
          }
        }
      }
    }
    else
    {
      substituteData = buff->fields.substituteData;
      this->fields._IsSubstituted_k__BackingField = 1;
      if ( substituteData )
      {
        PopupText = BattleBuffData_SubstituteData__get_PopupText(substituteData, 0);
        this->fields._SubstitutePopupText_k__BackingField = PopupText;
        sub_2213A04(
          (MissionNaviTransitionBoardItem_o *)&this->fields._SubstitutePopupText_k__BackingField,
          (int32_t)PopupText,
          v31,
          v32,
          v33,
          v34,
          v35,
          v36);
        substituteData = buff->fields.substituteData;
        if ( substituteData )
        {
          substituteData = (BattleBuffData_SubstituteData_o *)BattleBuffData_SubstituteData__get_PopupIconId(
                                                                substituteData,
                                                                0);
          v37 = buff->fields.substituteData;
          this->fields._SubstitutePopupIconId_k__BackingField = (int)substituteData;
          if ( v37 )
          {
            EffectList = BattleBuffData_SubstituteData__get_EffectList(v37, 0);
            v28 = (int)EffectList;
            this->fields._SubstituteEffectList_k__BackingField = EffectList;
            p_ResistEffectList_k__BackingField = &this->fields._SubstituteEffectList_k__BackingField;
            goto LABEL_12;
          }
        }
      }
    }
    sub_2213CDC(substituteData, v11);
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
  System_String_o *v3; // x3
  int32_t v4; // w4
  int32_t v5; // w5
  bool v6; // w6
  bool v7; // w7

  this->fields._ResistEffectList_k__BackingField = value;
  sub_2213A04(
    (MissionNaviTransitionBoardItem_o *)&this->fields._ResistEffectList_k__BackingField,
    (int32_t)value,
    (System_String_o *)method,
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
  System_String_o *v3; // x3
  int32_t v4; // w4
  int32_t v5; // w5
  bool v6; // w6
  bool v7; // w7

  this->fields._ResistPopupText_k__BackingField = value;
  sub_2213A04(
    (MissionNaviTransitionBoardItem_o *)&this->fields._ResistPopupText_k__BackingField,
    (int32_t)value,
    (System_String_o *)method,
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
  System_String_o *v3; // x3
  int32_t v4; // w4
  int32_t v5; // w5
  bool v6; // w6
  bool v7; // w7

  this->fields._SubstituteBuff_k__BackingField = value;
  sub_2213A04(
    (MissionNaviTransitionBoardItem_o *)&this->fields._SubstituteBuff_k__BackingField,
    (int32_t)value,
    (System_String_o *)method,
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
  System_String_o *v3; // x3
  int32_t v4; // w4
  int32_t v5; // w5
  bool v6; // w6
  bool v7; // w7

  this->fields._SubstituteEffectList_k__BackingField = value;
  sub_2213A04(
    (MissionNaviTransitionBoardItem_o *)&this->fields._SubstituteEffectList_k__BackingField,
    (int32_t)value,
    (System_String_o *)method,
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
  System_String_o *v3; // x3
  int32_t v4; // w4
  int32_t v5; // w5
  bool v6; // w6
  bool v7; // w7

  this->fields._SubstitutePopupText_k__BackingField = value;
  sub_2213A04(
    (MissionNaviTransitionBoardItem_o *)&this->fields._SubstitutePopupText_k__BackingField,
    (int32_t)value,
    (System_String_o *)method,
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
  System_String_o *v4; // x2
  System_String_o *v5; // x3
  int32_t v6; // w4
  int32_t v7; // w5
  bool v8; // w6
  bool v9; // w7
  const MethodInfo *v10; // x1
  __int64 v11; // x20
  const MethodInfo *v12; // x1
  System_String_o *v13; // x2
  System_String_o *v14; // x3
  int32_t v15; // w4
  int32_t v16; // w5
  bool v17; // w6
  bool v18; // w7
  System_String_o *v19; // x2
  System_String_o *v20; // x3
  int32_t v21; // w4
  int32_t v22; // w5
  bool v23; // w6
  bool v24; // w7

  if ( (byte_5973C0C & 1) == 0 )
  {
    sub_2213A60(&BattleLogicFunction_CommonSideEffectCheckDuplicateFunction_TypeInfo);
    sub_2213A60(&Method_System_Collections_Generic_HashSet_int___ctor__);
    sub_2213A60(&System_Collections_Generic_HashSet_int__TypeInfo);
    byte_5973C0C = 1;
  }
  v3 = (System_Collections_Generic_HashSet_int__o *)sub_2213CCC(System_Collections_Generic_HashSet_int__TypeInfo);
  System_Collections_Generic_HashSet_int____ctor(
    v3,
    (const MethodInfo_42B3DF0 *)Method_System_Collections_Generic_HashSet_int___ctor__);
  this->fields.hashTargetId = v3;
  sub_2213A04((MissionNaviTransitionBoardItem_o *)&this->fields.hashTargetId, (int32_t)v3, v4, v5, v6, v7, v8, v9);
  BattleLogicFunction_CommonSideEffectFunctionArgument___ctor(
    (BattleLogicFunction_CommonSideEffectFunctionArgument_o *)this,
    v10);
  v11 = sub_2213CCC(BattleLogicFunction_CommonSideEffectCheckDuplicateFunction_TypeInfo);
  BattleLogicFunction_CommonCheckDuplicateFunction___ctor(
    (BattleLogicFunction_CommonCheckDuplicateFunction_o *)v11,
    v12);
  *(_QWORD *)(v11 + 24) = this;
  sub_2213A04((MissionNaviTransitionBoardItem_o *)(v11 + 24), (int32_t)this, v13, v14, v15, v16, v17, v18);
  this->fields.checkDuplicate = (struct BattleLogicFunction_CheckDuplicateFunction_o *)v11;
  sub_2213A04((MissionNaviTransitionBoardItem_o *)&this->fields.checkDuplicate, v11, v19, v20, v21, v22, v23, v24);
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
  if ( (byte_5973C0E & 1) == 0 )
  {
    this = (BattleLogicFunction_FuncSideEffectFunctionArgument_o *)sub_2213A60(&Method_System_Collections_Generic_HashSet_int__Add__);
    byte_5973C0E = 1;
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
        (const MethodInfo_42B5030 *)Method_System_Collections_Generic_HashSet_int__Add__);
      return;
    }
LABEL_12:
    sub_2213CDC(this, funcTarget);
  }
}


void BattleLogicFunction_FuncSideEffectFunctionArgument__AddTarget_54125384(
        BattleLogicFunction_FuncSideEffectFunctionArgument_o *this,
        BattleLogicFunction_FuncSideEffectFunctionArgument_o *arg,
        const MethodInfo *method)
{
  System_Collections_Generic_HashSet_int__o *hashTargetId; // x0

  if ( (byte_5973C0F & 1) == 0 )
  {
    sub_2213A60(&Method_System_Collections_Generic_HashSet_int__UnionWith__);
    byte_5973C0F = 1;
  }
  if ( arg )
  {
    hashTargetId = this->fields.hashTargetId;
    if ( !hashTargetId )
      sub_2213CDC(0, arg);
    System_Collections_Generic_HashSet_int___UnionWith(
      hashTargetId,
      (System_Collections_Generic_IEnumerable_T__o *)arg->fields.hashTargetId,
      (const MethodInfo_42B5040 *)Method_System_Collections_Generic_HashSet_int__UnionWith__);
  }
}


// local variable allocation has failed, the output may be wrong!
BuffList_ACTION_array *BattleLogicFunction_FuncSideEffectFunctionArgument__GetActArray(
        BattleLogicFunction_FuncSideEffectFunctionArgument_o *this,
        bool isMainOnly,
        const MethodInfo *method)
{
  long double v3; // q0
  _QWORD *v4; // x19
  __int64 v5; // x8
  __int64 v6; // x0
  __int64 v7; // x0

  if ( (byte_5973C0D & 1) == 0 )
  {
    sub_2213A60(&Method_System_Array_Empty_BuffList_ACTION___);
    byte_5973C0D = 1;
  }
  v4 = Method_System_Array_Empty_BuffList_ACTION___;
  v5 = *((_QWORD *)Method_System_Array_Empty_BuffList_ACTION___ + 7);
  if ( !v5 )
  {
    sub_224B964(Method_System_Array_Empty_BuffList_ACTION___);
    v5 = v4[7];
  }
  v6 = *(_QWORD *)(v5 + 16);
  if ( (*(_WORD *)(v6 + 309) & 1) == 0 )
    v6 = sub_224B908(v3);
  if ( !*(_DWORD *)(v6 + 228) )
    *(__n128 *)&v3 = j_il2cpp_runtime_class_init_0(v6, isMainOnly);
  v7 = *(_QWORD *)(v4[7] + 16LL);
  if ( (*(_WORD *)(v7 + 309) & 1) == 0 )
    v7 = sub_224B908(v3);
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

  if ( (byte_5973C10 & 1) == 0 )
  {
    sub_2213A60(&Method_System_Linq_Enumerable_ToArray_int___);
    byte_5973C10 = 1;
  }
  v9 = System_Linq_Enumerable__ToArray_int_(
         (System_Collections_Generic_IEnumerable_TSource__o *)this->fields.hashTargetId,
         (const MethodInfo_389B994 *)Method_System_Linq_Enumerable_ToArray_int___);
  if ( !logicFunc )
    sub_2213CDC(v9, v10);
  BattleLogicFunction__SetFuncSideEffect(logicFunc, this, mainActionData, actorSvtData, v9, 0);
}


void BattleLogicFunction_FunctionArgument___ctor(
        BattleLogicFunction_FunctionArgument_o *this,
        const MethodInfo *method)
{
  Il2CppObject *v3; // x20
  System_String_o *v4; // x2
  System_String_o *v5; // x3
  int32_t v6; // w4
  int32_t v7; // w5
  bool v8; // w6
  bool v9; // w7

  if ( (byte_5973C08 & 1) == 0 )
  {
    sub_2213A60(&BattleLogicFunction_CheckDuplicateFunction_TypeInfo);
    byte_5973C08 = 1;
  }
  v3 = (Il2CppObject *)sub_2213CCC(BattleLogicFunction_CheckDuplicateFunction_TypeInfo);
  System_Object___ctor(v3, 0);
  this->fields.checkDuplicate = (struct BattleLogicFunction_CheckDuplicateFunction_o *)v3;
  sub_2213A04((MissionNaviTransitionBoardItem_o *)&this->fields.checkDuplicate, (int32_t)v3, v4, v5, v6, v7, v8, v9);
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
    sub_2213CDC(0, method);
  ((void (__fastcall *)(struct BattleLogicFunction_CheckDuplicateFunction_o *, const MethodInfo *))checkDuplicate->klass->vtable._4_Init.methodPtr)(
    checkDuplicate,
    checkDuplicate->klass->vtable._4_Init.method);
}


void BattleLogicFunction_FunctionArgument__SetAfterFuncSideEffectArgument(
        BattleLogicFunction_FunctionArgument_o *this,
        BattleLogicFunction_FuncSideEffectFunctionArgument_o *arg,
        const MethodInfo *method)
{
  System_String_o *v3; // x3
  int32_t v4; // w4
  int32_t v5; // w5
  bool v6; // w6
  bool v7; // w7

  this->fields._FuncSideEffectArg_k__BackingField = arg;
  sub_2213A04(
    (MissionNaviTransitionBoardItem_o *)&this->fields._FuncSideEffectArg_k__BackingField,
    (int32_t)arg,
    (System_String_o *)method,
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
  System_String_o *v3; // x3
  int32_t v4; // w4
  int32_t v5; // w5
  bool v6; // w6
  bool v7; // w7

  this->fields._FuncSideEffectArg_k__BackingField = value;
  sub_2213A04(
    (MissionNaviTransitionBoardItem_o *)&this->fields._FuncSideEffectArg_k__BackingField,
    (int32_t)value,
    (System_String_o *)method,
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
  System_String_o *v3; // x3
  int32_t v4; // w4
  int32_t v5; // w5
  bool v6; // w6
  bool v7; // w7

  this->fields._ParentActBuffData_k__BackingField = value;
  sub_2213A04(
    (MissionNaviTransitionBoardItem_o *)&this->fields._ParentActBuffData_k__BackingField,
    (int32_t)value,
    (System_String_o *)method,
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

  if ( (byte_5973C29 & 1) == 0 )
  {
    sub_2213A60(&BattleLogicFunction_PreMainAttackSideEffectMakeArgument_TypeInfo);
    byte_5973C29 = 1;
  }
  v2 = (BattleLogicFunction_SideEffectMakeArgument_o *)sub_2213CCC(BattleLogicFunction_PreMainAttackSideEffectMakeArgument_TypeInfo);
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
  System_String_o *v8; // x2
  System_String_o *v9; // x3
  int32_t v10; // w4
  int32_t v11; // w5
  bool v12; // w6
  bool v13; // w7
  System_String_o *v14; // x2
  System_String_o *v15; // x3
  int32_t v16; // w4
  int32_t v17; // w5
  bool v18; // w6
  bool v19; // w7
  const MethodInfo *v20; // x1
  __int64 v21; // x1
  struct BattleLogicFunction_FunctionArgument_o *externalArg; // x0

  if ( (byte_5973C1A & 1) == 0 )
  {
    sub_2213A60(&Method_System_Collections_Generic_Dictionary_KeyValuePair_int__int___bool___ctor__);
    sub_2213A60(&System_Collections_Generic_Dictionary_KeyValuePair_int__int___bool__TypeInfo);
    sub_2213A60(&BattleLogicFunction_FunctionArgument_TypeInfo);
    byte_5973C1A = 1;
  }
  v7 = (System_Collections_Generic_Dictionary_KeyValuePair_int__int___bool__o *)sub_2213CCC(System_Collections_Generic_Dictionary_KeyValuePair_int__int___bool__TypeInfo);
  System_Collections_Generic_Dictionary_KeyValuePair_int__int___bool____ctor(
    v7,
    (const MethodInfo_3F221FC *)Method_System_Collections_Generic_Dictionary_KeyValuePair_int__int___bool___ctor__);
  this->fields.funcResults = v7;
  sub_2213A04((MissionNaviTransitionBoardItem_o *)&this->fields, (int32_t)v7, v8, v9, v10, v11, v12, v13);
  this->fields.tdCommandTypeChange = -1;
  System_Object___ctor((Il2CppObject *)this, 0);
  if ( !argument )
  {
    argument = (BattleLogicFunction_FunctionArgument_o *)sub_2213CCC(BattleLogicFunction_FunctionArgument_TypeInfo);
    BattleLogicFunction_FunctionArgument___ctor(argument, v20);
  }
  this->fields.externalArg = argument;
  sub_2213A04(
    (MissionNaviTransitionBoardItem_o *)&this->fields.externalArg,
    (int32_t)argument,
    v14,
    v15,
    v16,
    v17,
    v18,
    v19);
  externalArg = this->fields.externalArg;
  if ( !externalArg
    || (externalArg = (struct BattleLogicFunction_FunctionArgument_o *)((__int64 (__fastcall *)(struct BattleLogicFunction_FunctionArgument_o *, const MethodInfo *))externalArg->klass->vtable._4_Init.methodPtr)(
                                                                         externalArg,
                                                                         externalArg->klass->vtable._4_Init.method),
        !actionData) )
  {
    sub_2213CDC(externalArg, v21);
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
  __int64 v9; // x20
  System_Collections_Generic_Dictionary_KeyValuePair_int__int___bool__o *TriggeredFuncIndex; // x0
  __int64 v11; // x1
  int v12; // w23
  _BOOL4 v13; // w9
  int v14; // w8
  char v15; // w19
  _BOOL4 v16; // w24
  struct System_Collections_Generic_Dictionary_KeyValuePair_int__int___bool__o *funcResults; // x21
  System_Func_KeyValuePair_KeyValuePair_int__int___bool___bool__o *v18; // x0
  System_Func_TSource__bool__o *v19; // x22
  System_Collections_Generic_IEnumerable_TSource__o *v20; // x21
  System_Collections_Generic_IEnumerable_TSource__c *klass; // x8
  __int64 v22; // x9
  int32_t *p_offset; // x10
  __int64 v24; // x0
  System_Collections_Generic_IEnumerable_TSource__o *v25; // x19
  System_Func_KeyValuePair_KeyValuePair_int__int___bool___bool__o *v26; // x21
  __int64 v27; // x0
  __int64 v28; // x1
  __int64 i; // x21
  __int64 v30; // x8
  __int64 v31; // x9
  int *v32; // x10
  __int64 v33; // x0
  __int64 v34; // x0
  __int64 v35; // x1
  char v36; // w21
  __int64 v37; // x8
  __int64 v38; // x9
  int *v39; // x10
  __int64 v40; // x0
  __int64 v41; // x0
  __int64 v42; // x1
  char v43; // w22
  BattleServantData_o *ServantData; // x0
  __int64 v45; // x8
  __int64 v46; // x9
  int *v47; // x10
  __int64 v48; // x0
  __int64 v50; // [xsp+18h] [xbp-58h]
  bool value; // [xsp+24h] [xbp-4Ch] BYREF
  System_Collections_Generic_KeyValuePair_int__int__o key; // [xsp+28h] [xbp-48h] BYREF
  bool isAllCond; // [xsp+38h] [xbp-38h] BYREF
  bool isSameTargetOnly; // [xsp+3Ch] [xbp-34h] BYREF

  if ( (byte_5973C1C & 1) == 0 )
  {
    sub_2213A60(&Method_System_Collections_Generic_Dictionary_KeyValuePair_int__int___bool__TryGetValue__);
    sub_2213A60(&Method_System_Linq_Enumerable_Any_KeyValuePair_KeyValuePair_int__int___bool____);
    sub_2213A60(&Method_System_Linq_Enumerable_Count_KeyValuePair_KeyValuePair_int__int___bool____);
    sub_2213A60(&Method_System_Linq_Enumerable_Where_KeyValuePair_KeyValuePair_int__int___bool____);
    sub_2213A60(&System_Func_KeyValuePair_KeyValuePair_int__int___bool___bool__TypeInfo);
    sub_2213A60(&System_IDisposable_TypeInfo);
    sub_2213A60(&System_Collections_Generic_IEnumerable_KeyValuePair_KeyValuePair_int__int___bool___TypeInfo);
    sub_2213A60(&System_Collections_Generic_IEnumerator_KeyValuePair_KeyValuePair_int__int___bool___TypeInfo);
    sub_2213A60(&System_Collections_IEnumerator_TypeInfo);
    sub_2213A60(&Method_System_Collections_Generic_KeyValuePair_int__int___ctor__);
    sub_2213A60(&Method_System_Collections_Generic_KeyValuePair_KeyValuePair_int__int___bool__get_Key__);
    sub_2213A60(&Method_System_Collections_Generic_KeyValuePair_int__int__get_Value__);
    sub_2213A60(&Method_System_Collections_Generic_KeyValuePair_KeyValuePair_int__int___bool__get_Value__);
    sub_2213A60(&System_Math_TypeInfo);
    sub_2213A60(&Method_BattleLogicFunction_ProcListInArgs___c__DisplayClass43_0__DidTriggeredFuncHaveSpecifyResults_b__0__);
    sub_2213A60(&Method_BattleLogicFunction_ProcListInArgs___c__DisplayClass43_0__DidTriggeredFuncHaveSpecifyResults_b__1__);
    sub_2213A60(&Method_BattleLogicFunction_ProcListInArgs___c__DisplayClass43_0__DidTriggeredFuncHaveSpecifyResults_b__2__);
    sub_2213A60(&BattleLogicFunction_ProcListInArgs___c__DisplayClass43_0_TypeInfo);
    byte_5973C1C = 1;
  }
  isSameTargetOnly = 0;
  isAllCond = 0;
  key = 0;
  value = 0;
  v9 = sub_2213CCC(BattleLogicFunction_ProcListInArgs___c__DisplayClass43_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v9, 0);
  if ( !baseVals )
    goto LABEL_58;
  TriggeredFuncIndex = (System_Collections_Generic_Dictionary_KeyValuePair_int__int___bool__o *)DataVals__GetTriggeredFuncIndex(
                                                                                                  baseVals,
                                                                                                  &isSameTargetOnly,
                                                                                                  &isAllCond,
                                                                                                  0);
  if ( !v9 )
    goto LABEL_58;
  v12 = (int)TriggeredFuncIndex;
  *(_DWORD *)(v9 + 16) = (_DWORD)TriggeredFuncIndex;
  if ( !(_DWORD)TriggeredFuncIndex )
  {
    v15 = 1;
    return v15 & 1;
  }
  *(_BYTE *)(v9 + 20) = (int)TriggeredFuncIndex > 0;
  if ( !*(&System_Math_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(System_Math_TypeInfo, v11);
  v13 = isSameTargetOnly;
  if ( v12 >= 0 )
    v14 = v12;
  else
    v14 = -v12;
  *(_DWORD *)(v9 + 16) = v14 - 1;
  if ( v13 )
  {
    System_Collections_Generic_KeyValuePair_int__int____ctor(
      (System_Collections_Generic_KeyValuePair_int__int__o)&key,
      v14 - 1,
      targetId,
      (const MethodInfo_439E030 *)Method_System_Collections_Generic_KeyValuePair_int__int___ctor__);
    TriggeredFuncIndex = this->fields.funcResults;
    if ( TriggeredFuncIndex )
    {
      if ( System_Collections_Generic_Dictionary_KeyValuePair_int__int___bool___TryGetValue(
             TriggeredFuncIndex,
             key,
             &value,
             (const MethodInfo_3F24698 *)Method_System_Collections_Generic_Dictionary_KeyValuePair_int__int___bool__TryGetValue__) )
      {
        v15 = value == *(_BYTE *)(v9 + 20);
        return v15 & 1;
      }
LABEL_24:
      v15 = 0;
      return v15 & 1;
    }
    goto LABEL_58;
  }
  v16 = isAllCond;
  funcResults = this->fields.funcResults;
  v18 = (System_Func_KeyValuePair_KeyValuePair_int__int___bool___bool__o *)sub_2213CCC(System_Func_KeyValuePair_KeyValuePair_int__int___bool___bool__TypeInfo);
  v19 = (System_Func_TSource__bool__o *)v18;
  if ( !v16 )
  {
    System_Func_KeyValuePair_KeyValuePair_int__int___bool___bool____ctor(
      v18,
      (Il2CppObject *)v9,
      Method_BattleLogicFunction_ProcListInArgs___c__DisplayClass43_0__DidTriggeredFuncHaveSpecifyResults_b__0__,
      0);
    v25 = System_Linq_Enumerable__Where_KeyValuePair_KeyValuePair_int__int___bool__(
            (System_Collections_Generic_IEnumerable_TSource__o *)funcResults,
            v19,
            (const MethodInfo_38A1650 *)Method_System_Linq_Enumerable_Where_KeyValuePair_KeyValuePair_int__int___bool____);
    v26 = (System_Func_KeyValuePair_KeyValuePair_int__int___bool___bool__o *)sub_2213CCC(System_Func_KeyValuePair_KeyValuePair_int__int___bool___bool__TypeInfo);
    System_Func_KeyValuePair_KeyValuePair_int__int___bool___bool____ctor(
      v26,
      (Il2CppObject *)v9,
      Method_BattleLogicFunction_ProcListInArgs___c__DisplayClass43_0__DidTriggeredFuncHaveSpecifyResults_b__1__,
      0);
    v15 = System_Linq_Enumerable__Any_KeyValuePair_KeyValuePair_int__int___bool__(
            v25,
            (System_Func_TSource__bool__o *)v26,
            (const MethodInfo_386653C *)Method_System_Linq_Enumerable_Any_KeyValuePair_KeyValuePair_int__int___bool____);
    return v15 & 1;
  }
  System_Func_KeyValuePair_KeyValuePair_int__int___bool___bool____ctor(
    v18,
    (Il2CppObject *)v9,
    Method_BattleLogicFunction_ProcListInArgs___c__DisplayClass43_0__DidTriggeredFuncHaveSpecifyResults_b__2__,
    0);
  v20 = System_Linq_Enumerable__Where_KeyValuePair_KeyValuePair_int__int___bool__(
          (System_Collections_Generic_IEnumerable_TSource__o *)funcResults,
          v19,
          (const MethodInfo_38A1650 *)Method_System_Linq_Enumerable_Where_KeyValuePair_KeyValuePair_int__int___bool____);
  TriggeredFuncIndex = (System_Collections_Generic_Dictionary_KeyValuePair_int__int___bool__o *)System_Linq_Enumerable__Count_KeyValuePair_KeyValuePair_int__int___bool__(
                                                                                                  v20,
                                                                                                  (const MethodInfo_387860C *)Method_System_Linq_Enumerable_Count_KeyValuePair_KeyValuePair_int__int___bool____);
  if ( !(_DWORD)TriggeredFuncIndex )
    goto LABEL_24;
  if ( !v20 )
LABEL_58:
    sub_2213CDC(TriggeredFuncIndex, v11);
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
    v24 = sub_224BC3C(
            v20,
            System_Collections_Generic_IEnumerable_KeyValuePair_KeyValuePair_int__int___bool___TypeInfo,
            0);
  }
  v27 = (*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerable_TSource__o *, _QWORD))v24)(
          v20,
          *(_QWORD *)(v24 + 8));
  v50 = v27;
  if ( !v27 )
    sub_2213CDC(v27, v28);
  for ( i = v27; ; i = v50 )
  {
    v30 = *(_QWORD *)i;
    v31 = *(unsigned __int16 *)(*(_QWORD *)i + 302LL);
    if ( *(_WORD *)(*(_QWORD *)i + 302LL) )
    {
      v32 = (int *)(*(_QWORD *)(v30 + 176) + 8LL);
      while ( *((System_Collections_IEnumerator_c **)v32 - 1) != System_Collections_IEnumerator_TypeInfo )
      {
        --v31;
        v32 += 4;
        if ( !v31 )
          goto LABEL_33;
      }
      v33 = v30 + 16LL * *v32 + 312;
    }
    else
    {
LABEL_33:
      v33 = sub_224BC3C(i, System_Collections_IEnumerator_TypeInfo, 0);
    }
    v34 = (*(__int64 (__fastcall **)(__int64, _QWORD))v33)(i, *(_QWORD *)(v33 + 8));
    v36 = v34;
    if ( (v34 & 1) == 0 )
      break;
    if ( !v50 )
      sub_2213CDC(v34, v35);
    v37 = *(_QWORD *)v50;
    v38 = *(unsigned __int16 *)(*(_QWORD *)v50 + 302LL);
    if ( *(_WORD *)(*(_QWORD *)v50 + 302LL) )
    {
      v39 = (int *)(*(_QWORD *)(v37 + 176) + 8LL);
      while ( *((System_Collections_Generic_IEnumerator_KeyValuePair_KeyValuePair_int__int___bool___c **)v39 - 1) != System_Collections_Generic_IEnumerator_KeyValuePair_KeyValuePair_int__int___bool___TypeInfo )
      {
        --v38;
        v39 += 4;
        if ( !v38 )
          goto LABEL_41;
      }
      v40 = v37 + 16LL * *v39 + 312;
    }
    else
    {
LABEL_41:
      v40 = sub_224BC3C(
              v50,
              System_Collections_Generic_IEnumerator_KeyValuePair_KeyValuePair_int__int___bool___TypeInfo,
              0);
    }
    v41 = (*(__int64 (__fastcall **)(__int64, _QWORD))v40)(v50, *(_QWORD *)(v40 + 8));
    if ( !data )
      sub_2213CDC(v41, v42);
    v43 = v42;
    ServantData = BattleData__getServantData(data, SHIDWORD(v41), 0);
    if ( ServantData )
    {
      if ( !ServantData->fields.isDeadAnime && *(_BYTE *)(v9 + 20) != (v43 != 0) )
        break;
    }
  }
  v15 = v36 ^ 1;
  if ( v50 )
  {
    v45 = *(_QWORD *)v50;
    v46 = *(unsigned __int16 *)(*(_QWORD *)v50 + 302LL);
    if ( *(_WORD *)(*(_QWORD *)v50 + 302LL) )
    {
      v47 = (int *)(*(_QWORD *)(v45 + 176) + 8LL);
      while ( *((System_IDisposable_c **)v47 - 1) != System_IDisposable_TypeInfo )
      {
        --v46;
        v47 += 4;
        if ( !v46 )
          goto LABEL_54;
      }
      v48 = v45 + 16LL * *v47 + 312;
    }
    else
    {
LABEL_54:
      v48 = sub_224BC3C(v50, System_IDisposable_TypeInfo, 0);
    }
    (*(void (__fastcall **)(__int64, _QWORD))v48)(v50, *(_QWORD *)(v48 + 8));
  }
  return v15 & 1;
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
  int v14; // w9
  unsigned __int64 v15; // x25
  __int64 v16; // x22
  System_Func_KeyValuePair_KeyValuePair_int__int___bool___bool__c *v17; // x0
  System_Collections_Generic_IEnumerable_TSource__o *funcResults; // x23
  System_Func_KeyValuePair_KeyValuePair_int__int___bool___bool__o *v19; // x24
  System_Collections_Generic_IEnumerable_TSource__o *v20; // x23
  System_Func_KeyValuePair_KeyValuePair_int__int___bool___bool__o *v21; // x24
  _BOOL4 v22; // w0
  _BOOL4 v23; // w8
  BattleLogicFunction_ProcListInArgs_o *v25; // [xsp+0h] [xbp-70h]
  bool isAndCheck; // [xsp+Ch] [xbp-64h] BYREF

  v25 = this;
  if ( (byte_5973C1D & 1) == 0 )
  {
    sub_2213A60(&bool___TypeInfo);
    sub_2213A60(&Method_System_Linq_Enumerable_Any_KeyValuePair_KeyValuePair_int__int___bool____);
    sub_2213A60(&Method_System_Linq_Enumerable_Where_KeyValuePair_KeyValuePair_int__int___bool____);
    sub_2213A60(&System_Func_KeyValuePair_KeyValuePair_int__int___bool___bool__TypeInfo);
    sub_2213A60(&int___TypeInfo);
    sub_2213A60(&System_Math_TypeInfo);
    sub_2213A60(&Method_BattleLogicFunction_ProcListInArgs___c__DisplayClass44_0__DidTriggeredFuncListHaveSpecifyResults_b__0__);
    sub_2213A60(&Method_BattleLogicFunction_ProcListInArgs___c__DisplayClass44_0__DidTriggeredFuncListHaveSpecifyResults_b__1__);
    this = (BattleLogicFunction_ProcListInArgs_o *)sub_2213A60(&BattleLogicFunction_ProcListInArgs___c__DisplayClass44_0_TypeInfo);
    byte_5973C1D = 1;
  }
  isAndCheck = 0;
  if ( !baseVals )
    goto LABEL_34;
  TriggeredFuncIndexArray = DataVals__GetTriggeredFuncIndexArray(baseVals, &isAndCheck, 0);
  this = (BattleLogicFunction_ProcListInArgs_o *)BasicHelper__IsNullOrEmpty(
                                                   (System_Collections_ICollection_o *)TriggeredFuncIndexArray,
                                                   0);
  if ( ((unsigned __int8)this & 1) != 0 )
  {
    v7 = 1;
    return v7 & 1;
  }
  if ( !TriggeredFuncIndexArray )
LABEL_34:
    sub_2213CDC(this, *(_QWORD *)&targetId);
  v8 = sub_2213B20(bool___TypeInfo, LODWORD(TriggeredFuncIndexArray->max_length));
  this = (BattleLogicFunction_ProcListInArgs_o *)sub_2213B20(
                                                   int___TypeInfo,
                                                   LODWORD(TriggeredFuncIndexArray->max_length));
  max_length = TriggeredFuncIndexArray->max_length;
  v10 = this;
  if ( (int)max_length >= 1 )
  {
    v11 = 0;
    while ( 1 )
    {
      if ( v11 >= (unsigned int)max_length )
        goto LABEL_33;
      if ( !v8 )
        goto LABEL_34;
      if ( v11 >= *(unsigned int *)(v8 + 24) )
LABEL_33:
        sub_2213CE4(this);
      this = (BattleLogicFunction_ProcListInArgs_o *)System_Math_TypeInfo;
      v12 = TriggeredFuncIndexArray->m_Items[v11];
      v13 = *(&System_Math_TypeInfo->_2.cctor_finished + 1);
      *(_BYTE *)(v8 + 32 + v11) = v12 > 0;
      if ( !v13 )
        j_il2cpp_runtime_class_init_0(this, *(_QWORD *)&targetId);
      if ( !v10 )
        goto LABEL_34;
      if ( v11 >= LODWORD(v10->fields.externalArg) )
        goto LABEL_33;
      LODWORD(max_length) = TriggeredFuncIndexArray->max_length;
      if ( v12 >= 0 )
        v14 = v12;
      else
        v14 = -v12;
      *((_DWORD *)&v10->fields._IsTreasureDvc_k__BackingField + v11++) = v14 - 1;
      if ( (__int64)v11 >= (int)max_length )
        goto LABEL_22;
    }
  }
  if ( !this )
    goto LABEL_34;
LABEL_22:
  if ( SLODWORD(v10->fields.externalArg) < 1 )
  {
LABEL_30:
    v7 = isAndCheck;
  }
  else
  {
    v15 = 0;
    while ( 1 )
    {
      v16 = sub_2213CCC(BattleLogicFunction_ProcListInArgs___c__DisplayClass44_0_TypeInfo);
      System_Object___ctor((Il2CppObject *)v16, 0);
      if ( v15 >= LODWORD(v10->fields.externalArg) )
        goto LABEL_33;
      if ( !v16 )
        goto LABEL_34;
      *(_DWORD *)(v16 + 16) = *((_DWORD *)&v10->fields._IsTreasureDvc_k__BackingField + v15);
      if ( !v8 )
        goto LABEL_34;
      if ( v15 >= *(unsigned int *)(v8 + 24) )
        goto LABEL_33;
      v17 = System_Func_KeyValuePair_KeyValuePair_int__int___bool___bool__TypeInfo;
      funcResults = (System_Collections_Generic_IEnumerable_TSource__o *)v25->fields.funcResults;
      *(_BYTE *)(v16 + 20) = *(_BYTE *)(v8 + 32 + v15);
      v19 = (System_Func_KeyValuePair_KeyValuePair_int__int___bool___bool__o *)sub_2213CCC(v17);
      System_Func_KeyValuePair_KeyValuePair_int__int___bool___bool____ctor(
        v19,
        (Il2CppObject *)v16,
        Method_BattleLogicFunction_ProcListInArgs___c__DisplayClass44_0__DidTriggeredFuncListHaveSpecifyResults_b__0__,
        0);
      v20 = System_Linq_Enumerable__Where_KeyValuePair_KeyValuePair_int__int___bool__(
              funcResults,
              (System_Func_TSource__bool__o *)v19,
              (const MethodInfo_38A1650 *)Method_System_Linq_Enumerable_Where_KeyValuePair_KeyValuePair_int__int___bool____);
      v21 = (System_Func_KeyValuePair_KeyValuePair_int__int___bool___bool__o *)sub_2213CCC(System_Func_KeyValuePair_KeyValuePair_int__int___bool___bool__TypeInfo);
      System_Func_KeyValuePair_KeyValuePair_int__int___bool___bool____ctor(
        v21,
        (Il2CppObject *)v16,
        Method_BattleLogicFunction_ProcListInArgs___c__DisplayClass44_0__DidTriggeredFuncListHaveSpecifyResults_b__1__,
        0);
      v22 = System_Linq_Enumerable__Any_KeyValuePair_KeyValuePair_int__int___bool__(
              v20,
              (System_Func_TSource__bool__o *)v21,
              (const MethodInfo_386653C *)Method_System_Linq_Enumerable_Any_KeyValuePair_KeyValuePair_int__int___bool____);
      v23 = !isAndCheck;
      if ( ((v22 ^ v23) & 1) == 0 )
        break;
      if ( (__int64)++v15 >= SLODWORD(v10->fields.externalArg) )
        goto LABEL_30;
    }
    v7 = v22 || v23;
  }
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
    sub_2213CDC(0, v7);
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
    sub_2213CDC(0, v5);
  return GeneratedFamilyLinkageIdCacher__GetOrCreateFamilyBuffLinkageIdGenerator(
           familyLinkageIdCacher,
           targetSvtData,
           0);
}


int32_t BattleLogicFunction_ProcListInArgs__GetSatisfyIndividualityGrantBuffUniqueId(
        BattleLogicFunction_ProcListInArgs_o *this,
        int32_t svtUniqueId,
        System_Int32_array *individuality,
        const MethodInfo *method)
{
  GrantBuffInFunctionsData_o *grantBuffInFunctionsData; // x0

  grantBuffInFunctionsData = this->fields.grantBuffInFunctionsData;
  if ( grantBuffInFunctionsData )
    return GrantBuffInFunctionsData__GetSatisfyIndividualityUniqueId(
             grantBuffInFunctionsData,
             svtUniqueId,
             individuality,
             method);
  else
    return -1;
}


// local variable allocation has failed, the output may be wrong!
bool BattleLogicFunction_ProcListInArgs__MatchSkillType(
        BattleLogicFunction_ProcListInArgs_o *this,
        int32_t type,
        const MethodInfo *method)
{
  struct BattleLogicFunction_FunctionArgument_o *externalArg; // x8

  externalArg = this->fields.externalArg;
  if ( !externalArg )
    sub_2213CDC(this, *(_QWORD *)&type);
  return externalArg->fields.grantSkillType == type;
}


void BattleLogicFunction_ProcListInArgs__SaveGrantBuff(
        BattleLogicFunction_ProcListInArgs_o *this,
        int32_t svtUniqueId,
        BattleBuffData_BuffData_o *buff,
        const MethodInfo *method)
{
  GrantBuffInFunctionsData_o *grantBuffInFunctionsData; // x0

  grantBuffInFunctionsData = this->fields.grantBuffInFunctionsData;
  if ( grantBuffInFunctionsData )
    GrantBuffInFunctionsData__Add(grantBuffInFunctionsData, svtUniqueId, buff, method);
}


BattleLogicFunction_CheckDuplicateFunction_o *BattleLogicFunction_ProcListInArgs__get_CheckDuplicateFunc(
        BattleLogicFunction_ProcListInArgs_o *this,
        const MethodInfo *method)
{
  struct BattleLogicFunction_FunctionArgument_o *externalArg; // x8

  externalArg = this->fields.externalArg;
  if ( !externalArg )
    sub_2213CDC(this, method);
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
    sub_2213CDC(this, method);
  return externalArg->fields._FuncSideEffectArg_k__BackingField;
}


int32_t BattleLogicFunction_ProcListInArgs__get_GrantSkillType(
        BattleLogicFunction_ProcListInArgs_o *this,
        const MethodInfo *method)
{
  struct BattleLogicFunction_FunctionArgument_o *externalArg; // x8

  externalArg = this->fields.externalArg;
  if ( !externalArg )
    sub_2213CDC(this, method);
  return externalArg->fields.grantSkillType;
}


bool BattleLogicFunction_ProcListInArgs__get_IsCommandSideEffect(
        BattleLogicFunction_ProcListInArgs_o *this,
        const MethodInfo *method)
{
  struct BattleLogicFunction_FunctionArgument_o *externalArg; // x8

  externalArg = this->fields.externalArg;
  if ( !externalArg )
    sub_2213CDC(this, method);
  return externalArg->fields.isCommandSideEffect;
}


bool BattleLogicFunction_ProcListInArgs__get_IsPassive(
        BattleLogicFunction_ProcListInArgs_o *this,
        const MethodInfo *method)
{
  struct BattleLogicFunction_FunctionArgument_o *externalArg; // x8

  externalArg = this->fields.externalArg;
  if ( !externalArg )
    sub_2213CDC(this, method);
  return externalArg->fields.isPassive;
}


bool BattleLogicFunction_ProcListInArgs__get_IsShift(
        BattleLogicFunction_ProcListInArgs_o *this,
        const MethodInfo *method)
{
  struct BattleLogicFunction_FunctionArgument_o *externalArg; // x8

  externalArg = this->fields.externalArg;
  if ( !externalArg )
    sub_2213CDC(this, method);
  return externalArg->fields.isShift;
}


bool BattleLogicFunction_ProcListInArgs__get_IsShowBattlePointEffect(
        BattleLogicFunction_ProcListInArgs_o *this,
        const MethodInfo *method)
{
  struct BattleLogicFunction_FunctionArgument_o *externalArg; // x8

  externalArg = this->fields.externalArg;
  if ( !externalArg )
    sub_2213CDC(this, method);
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
    sub_2213CDC(this, method);
  return externalArg->fields._ParentActBuffData_k__BackingField;
}


int32_t BattleLogicFunction_ProcListInArgs__get_SkillId(
        BattleLogicFunction_ProcListInArgs_o *this,
        const MethodInfo *method)
{
  struct BattleLogicFunction_FunctionArgument_o *externalArg; // x8

  externalArg = this->fields.externalArg;
  if ( !externalArg )
    sub_2213CDC(this, method);
  return externalArg->fields.skillId;
}


GeneratedFamilyLinkageIdCacher_o *BattleLogicFunction_ProcListInArgs__get_familyLinkageIdCacher(
        BattleLogicFunction_ProcListInArgs_o *this,
        const MethodInfo *method)
{
  GeneratedFamilyLinkageIdCacher_o *result; // x0
  MissionNaviTransitionBoardItem_o *p_familyLinkageIdCacher; // x19
  GeneratedFamilyLinkageIdCacher_o *familyLinkageIdCacher; // t1
  GeneratedFamilyLinkageIdCacher_o *v6; // x20
  System_String_o *v7; // x2
  System_String_o *v8; // x3
  int32_t v9; // w4
  int32_t v10; // w5
  bool v11; // w6
  bool v12; // w7

  if ( (byte_5973C19 & 1) == 0 )
  {
    sub_2213A60(&GeneratedFamilyLinkageIdCacher_TypeInfo);
    byte_5973C19 = 1;
  }
  familyLinkageIdCacher = this->fields._familyLinkageIdCacher;
  p_familyLinkageIdCacher = (MissionNaviTransitionBoardItem_o *)&this->fields._familyLinkageIdCacher;
  result = familyLinkageIdCacher;
  if ( !familyLinkageIdCacher )
  {
    v6 = (GeneratedFamilyLinkageIdCacher_o *)sub_2213CCC(GeneratedFamilyLinkageIdCacher_TypeInfo);
    GeneratedFamilyLinkageIdCacher___ctor(v6, 0);
    p_familyLinkageIdCacher->klass = (MissionNaviTransitionBoardItem_c *)v6;
    sub_2213A04(p_familyLinkageIdCacher, (int32_t)v6, v7, v8, v9, v10, v11, v12);
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
  BattleLogicFunction_ProcListInArgs_o *v10; // x19
  int max_length; // w26
  __int64 v12; // x0
  BattleLogicFunctionProcess_FunctionUnitCheck_array **p_funcUnitArray_k__BackingField; // x20
  System_String_o *v14; // x2
  System_String_o *v15; // x3
  int32_t v16; // w4
  int32_t v17; // w5
  bool v18; // w6
  bool v19; // w7
  int v20; // w28
  __int64 v21; // x29
  __int64 v22; // x27
  struct BattleLogicFunctionProcess_FunctionUnitCheck_array *funcUnitArray_k__BackingField; // x21
  BattleLogicFunctionProcess_FunctionUnitCheck_o *v24; // x26
  const MethodInfo *v25; // x3
  System_String_o *v26; // x2
  System_String_o *v27; // x3
  int32_t v28; // w4
  int32_t v29; // w5
  bool v30; // w6
  bool v31; // w7
  __int64 v32; // x1
  unsigned int v33; // w25
  const MethodInfo *v34; // x5
  BattleLogicFunctionProcess_FunctionUnitCheck_array *v35; // x8
  BattleLogicFunctionProcess_FunctionUnitCheck_array *v36; // x23
  int v37; // w8
  int v38; // w25
  char v39; // w22
  BattleLogicFunctionProcess_FunctionUnitCheck_o *v40; // x24
  int v41; // w26
  BattleLogicFunctionProcess_FunctionUnitCheck_o *v42; // x21
  const MethodInfo *v43; // x2
  int32_t FunctionTriggerStarNum; // w0
  GrantBuffInFunctionsData_o *v47; // x20
  const MethodInfo *v48; // x1
  System_String_o *v49; // x2
  System_String_o *v50; // x3
  int32_t v51; // w4
  int32_t v52; // w5
  bool v53; // w6
  bool v54; // w7
  __int64 v55; // x0

  v10 = this;
  if ( (byte_5973C1F & 1) == 0 )
  {
    sub_2213A60(&BattleLogicFunctionProcess_FunctionUnitCheck___TypeInfo);
    sub_2213A60(&BattleLogicFunctionProcess_FunctionUnitCheck_TypeInfo);
    this = (BattleLogicFunction_ProcListInArgs_o *)sub_2213A60(&GrantBuffInFunctionsData_TypeInfo);
    byte_5973C1F = 1;
  }
  if ( !dataValsList )
    goto LABEL_45;
  max_length = dataValsList->max_length;
  v12 = sub_2213B20(BattleLogicFunctionProcess_FunctionUnitCheck___TypeInfo, (unsigned int)max_length);
  v10->fields._funcUnitArray_k__BackingField = (struct BattleLogicFunctionProcess_FunctionUnitCheck_array *)v12;
  p_funcUnitArray_k__BackingField = &v10->fields._funcUnitArray_k__BackingField;
  sub_2213A04(
    (MissionNaviTransitionBoardItem_o *)&v10->fields._funcUnitArray_k__BackingField,
    v12,
    v14,
    v15,
    v16,
    v17,
    v18,
    v19);
  if ( max_length >= 1 )
  {
    v20 = -max_length;
    v21 = 32;
    v22 = 8;
    while ( 1 )
    {
      funcUnitArray_k__BackingField = v10->fields._funcUnitArray_k__BackingField;
      v24 = (BattleLogicFunctionProcess_FunctionUnitCheck_o *)sub_2213CCC(BattleLogicFunctionProcess_FunctionUnitCheck_TypeInfo);
      BattleLogicFunctionProcess_FunctionUnitCheck___ctor(v24, logic, v10, v25);
      if ( !funcUnitArray_k__BackingField )
        break;
      if ( v24 )
      {
        this = (BattleLogicFunction_ProcListInArgs_o *)sub_2213BB4(
                                                         v24,
                                                         funcUnitArray_k__BackingField->obj.klass->_1.element_class);
        if ( !this )
        {
          v55 = sub_2213D00(0, v32);
          sub_2213BA0(v55, 0);
        }
      }
      v33 = v22 - 8;
      if ( (unsigned int)(v22 - 8) >= LODWORD(funcUnitArray_k__BackingField->max_length) )
        goto LABEL_46;
      *(Il2CppClass **)((char *)&funcUnitArray_k__BackingField->obj.klass + v21) = (Il2CppClass *)v24;
      sub_2213A04(
        (MissionNaviTransitionBoardItem_o *)((char *)funcUnitArray_k__BackingField + v21),
        (int32_t)v24,
        v26,
        v27,
        v28,
        v29,
        v30,
        v31);
      v35 = *p_funcUnitArray_k__BackingField;
      if ( !*p_funcUnitArray_k__BackingField )
        break;
      if ( v33 >= LODWORD(v35->max_length) )
        goto LABEL_46;
      if ( !functionIds )
        break;
      if ( v33 >= LODWORD(functionIds->max_length) || v33 >= LODWORD(dataValsList->max_length) )
LABEL_46:
        sub_2213CE4(this);
      this = *(BattleLogicFunction_ProcListInArgs_o **)((char *)&v35->obj.klass + v21);
      if ( !this )
        break;
      BattleLogicFunctionProcess_FunctionUnitCheck__setDataVals(
        (BattleLogicFunctionProcess_FunctionUnitCheck_o *)this,
        funcIndex,
        *((_DWORD *)&functionIds->obj.klass + v22++),
        *(DataVals_o **)((char *)&dataValsList->obj.klass + v21),
        actionData,
        v34);
      v21 += 8;
      ++*funcIndex;
      if ( v20 + (_DWORD)v22 == 8 )
        goto LABEL_17;
    }
LABEL_45:
    sub_2213CDC(this, logic);
  }
LABEL_17:
  v36 = *p_funcUnitArray_k__BackingField;
  if ( !*p_funcUnitArray_k__BackingField )
    goto LABEL_45;
  v37 = v36->max_length;
  if ( v37 < 1 )
  {
    v39 = 0;
  }
  else
  {
    v38 = 0;
    v39 = 0;
    v40 = 0;
    v41 = -1;
    do
    {
      if ( v38 >= (unsigned int)v37 )
        goto LABEL_46;
      v42 = v36->m_Items[v38];
      if ( !v42 )
        goto LABEL_45;
      this = (BattleLogicFunction_ProcListInArgs_o *)v42->fields._dataVals_k__BackingField;
      if ( !this )
        goto LABEL_45;
      if ( DataVals__IsAddIndividualty((DataVals_o *)this, 0) )
        goto LABEL_26;
      this = (BattleLogicFunction_ProcListInArgs_o *)v42->fields._dataVals_k__BackingField;
      if ( !this )
        goto LABEL_45;
      if ( DataVals__IsAddLinkageTargetIndividualty((DataVals_o *)this, 0) )
LABEL_26:
        BattleLogicFunctionProcess_FunctionUnitCheck__setLinkFunction(v42, *p_funcUnitArray_k__BackingField, v43);
      this = (BattleLogicFunction_ProcListInArgs_o *)v42->fields._dataVals_k__BackingField;
      if ( !this )
        goto LABEL_45;
      FunctionTriggerStarNum = DataVals__GetFunctionTriggerStarNum((DataVals_o *)this, 0);
      if ( (FunctionTriggerStarNum & 0x80000000) == 0 && (!v40 || FunctionTriggerStarNum < v41) )
      {
        v41 = FunctionTriggerStarNum;
        v40 = v42;
      }
      this = (BattleLogicFunction_ProcListInArgs_o *)v42->fields._dataVals_k__BackingField;
      if ( !this )
        goto LABEL_45;
      this = (BattleLogicFunction_ProcListInArgs_o *)DataVals__IsNeedTargetBuffUniqueIdParam((DataVals_o *)this, 0);
      v37 = v36->max_length;
      ++v38;
      v39 |= (unsigned __int8)this;
    }
    while ( v38 < v37 );
    if ( v40 )
      v40->fields.isLowestStarFunction = 1;
  }
  if ( (v39 & 1) != 0 )
  {
    v47 = (GrantBuffInFunctionsData_o *)sub_2213CCC(GrantBuffInFunctionsData_TypeInfo);
    GrantBuffInFunctionsData___ctor(v47, v48);
    v10->fields.grantBuffInFunctionsData = v47;
    sub_2213A04(
      (MissionNaviTransitionBoardItem_o *)&v10->fields.grantBuffInFunctionsData,
      (int32_t)v47,
      v49,
      v50,
      v51,
      v52,
      v53,
      v54);
  }
}


bool BattleLogicFunction_ProcListInArgs__isPrevFuncSuccess(
        BattleLogicFunction_ProcListInArgs_o *this,
        int32_t targetId,
        int32_t index,
        const MethodInfo *method)
{
  __int64 v7; // x1
  System_Collections_Generic_Dictionary_KeyValuePair_int__int___bool__o *funcResults; // x0
  System_Collections_Generic_KeyValuePair_int__int__o key; // [xsp+8h] [xbp-38h] BYREF

  if ( (byte_5973C1B & 1) == 0 )
  {
    sub_2213A60(&Method_System_Collections_Generic_Dictionary_KeyValuePair_int__int___bool__ContainsKey__);
    sub_2213A60(&Method_System_Collections_Generic_Dictionary_KeyValuePair_int__int___bool__get_Item__);
    sub_2213A60(&Method_System_Collections_Generic_KeyValuePair_int__int___ctor__);
    byte_5973C1B = 1;
  }
  key = 0;
  System_Collections_Generic_KeyValuePair_int__int____ctor(
    (System_Collections_Generic_KeyValuePair_int__int__o)&key,
    index - 1,
    targetId,
    (const MethodInfo_439E030 *)Method_System_Collections_Generic_KeyValuePair_int__int___ctor__);
  funcResults = this->fields.funcResults;
  if ( !funcResults )
    goto LABEL_9;
  if ( !System_Collections_Generic_Dictionary_KeyValuePair_int__int___bool___ContainsKey(
          funcResults,
          key,
          (const MethodInfo_3F22DBC *)Method_System_Collections_Generic_Dictionary_KeyValuePair_int__int___bool__ContainsKey__) )
    return 0;
  funcResults = this->fields.funcResults;
  if ( !funcResults )
LABEL_9:
    sub_2213CDC(funcResults, v7);
  return System_Collections_Generic_Dictionary_KeyValuePair_int__int___bool___get_Item(
           funcResults,
           key,
           (const MethodInfo_3F22B10 *)Method_System_Collections_Generic_Dictionary_KeyValuePair_int__int___bool__get_Item__);
}


void BattleLogicFunction_ProcListInArgs__setFuncResult(
        BattleLogicFunction_ProcListInArgs_o *this,
        int32_t targetId,
        bool result,
        int32_t index,
        const MethodInfo *method)
{
  __int64 v9; // x1
  System_Collections_Generic_Dictionary_KeyValuePair_int__int___bool__o *funcResults; // x0
  System_Collections_Generic_KeyValuePair_int__int__o key; // [xsp+8h] [xbp-38h] BYREF

  if ( (byte_5973C1E & 1) == 0 )
  {
    sub_2213A60(&Method_System_Collections_Generic_Dictionary_KeyValuePair_int__int___bool__set_Item__);
    sub_2213A60(&Method_System_Collections_Generic_KeyValuePair_int__int___ctor__);
    byte_5973C1E = 1;
  }
  key = 0;
  System_Collections_Generic_KeyValuePair_int__int____ctor(
    (System_Collections_Generic_KeyValuePair_int__int__o)&key,
    index,
    targetId,
    (const MethodInfo_439E030 *)Method_System_Collections_Generic_KeyValuePair_int__int___ctor__);
  funcResults = this->fields.funcResults;
  if ( !funcResults )
    sub_2213CDC(0, v9);
  System_Collections_Generic_Dictionary_KeyValuePair_int__int___bool___set_Item(
    funcResults,
    key,
    result,
    (const MethodInfo_3F22BA4 *)Method_System_Collections_Generic_Dictionary_KeyValuePair_int__int___bool__set_Item__);
}


// local variable allocation has failed, the output may be wrong!
void BattleLogicFunction_ProcListInArgs__set_IsCommandSideEffect(
        BattleLogicFunction_ProcListInArgs_o *this,
        bool value,
        const MethodInfo *method)
{
  struct BattleLogicFunction_FunctionArgument_o *externalArg; // x8

  externalArg = this->fields.externalArg;
  if ( !externalArg )
    sub_2213CDC(this, value);
  externalArg->fields.isCommandSideEffect = value;
}


// local variable allocation has failed, the output may be wrong!
void BattleLogicFunction_ProcListInArgs__set_IsPassive(
        BattleLogicFunction_ProcListInArgs_o *this,
        bool value,
        const MethodInfo *method)
{
  struct BattleLogicFunction_FunctionArgument_o *externalArg; // x8

  externalArg = this->fields.externalArg;
  if ( !externalArg )
    sub_2213CDC(this, value);
  externalArg->fields.isPassive = value;
}


// local variable allocation has failed, the output may be wrong!
void BattleLogicFunction_ProcListInArgs__set_IsShift(
        BattleLogicFunction_ProcListInArgs_o *this,
        bool value,
        const MethodInfo *method)
{
  struct BattleLogicFunction_FunctionArgument_o *externalArg; // x8

  externalArg = this->fields.externalArg;
  if ( !externalArg )
    sub_2213CDC(this, value);
  externalArg->fields.isShift = value;
}


void BattleLogicFunction_ProcListInArgs__set_IsTreasureDvc(
        BattleLogicFunction_ProcListInArgs_o *this,
        bool value,
        const MethodInfo *method)
{
  this->fields._IsTreasureDvc_k__BackingField = value;
}


// local variable allocation has failed, the output may be wrong!
void BattleLogicFunction_ProcListInArgs__set_SkillId(
        BattleLogicFunction_ProcListInArgs_o *this,
        int32_t value,
        const MethodInfo *method)
{
  struct BattleLogicFunction_FunctionArgument_o *externalArg; // x8

  externalArg = this->fields.externalArg;
  if ( !externalArg )
    sub_2213CDC(this, *(_QWORD *)&value);
  externalArg->fields.skillId = value;
}


void BattleLogicFunction_ProcListInArgs__set_funcUnitArray(
        BattleLogicFunction_ProcListInArgs_o *this,
        BattleLogicFunctionProcess_FunctionUnitCheck_array *value,
        const MethodInfo *method)
{
  System_String_o *v3; // x3
  int32_t v4; // w4
  int32_t v5; // w5
  bool v6; // w6
  bool v7; // w7

  this->fields._funcUnitArray_k__BackingField = value;
  sub_2213A04(
    (MissionNaviTransitionBoardItem_o *)&this->fields._funcUnitArray_k__BackingField,
    (int32_t)value,
    (System_String_o *)method,
    v3,
    v4,
    v5,
    v6,
    v7);
}


void BattleLogicFunction_ProcListInArgs___c__DisplayClass43_0___ctor(
        BattleLogicFunction_ProcListInArgs___c__DisplayClass43_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


bool BattleLogicFunction_ProcListInArgs___c__DisplayClass43_0___DidTriggeredFuncHaveSpecifyResults_b__0(
        BattleLogicFunction_ProcListInArgs___c__DisplayClass43_0_o *this,
        System_Collections_Generic_KeyValuePair_KeyValuePair_int__int___bool__o x,
        const MethodInfo *method)
{
  int32_t key; // w19

  key = x.fields.key.fields.key;
  if ( (byte_5973C21 & 1) == 0 )
  {
    sub_2213A60(&Method_System_Collections_Generic_KeyValuePair_KeyValuePair_int__int___bool__get_Key__);
    sub_2213A60(&Method_System_Collections_Generic_KeyValuePair_int__int__get_Key__);
    byte_5973C21 = 1;
  }
  return this->fields.funcIndex == key;
}


bool BattleLogicFunction_ProcListInArgs___c__DisplayClass43_0___DidTriggeredFuncHaveSpecifyResults_b__1(
        BattleLogicFunction_ProcListInArgs___c__DisplayClass43_0_o *this,
        System_Collections_Generic_KeyValuePair_KeyValuePair_int__int___bool__o x,
        const MethodInfo *method)
{
  bool value; // w19

  value = x.fields.value;
  if ( (byte_5973C22 & 1) == 0 )
  {
    sub_2213A60(&Method_System_Collections_Generic_KeyValuePair_KeyValuePair_int__int___bool__get_Value__);
    byte_5973C22 = 1;
  }
  return this->fields.isTrue == value;
}


bool BattleLogicFunction_ProcListInArgs___c__DisplayClass43_0___DidTriggeredFuncHaveSpecifyResults_b__2(
        BattleLogicFunction_ProcListInArgs___c__DisplayClass43_0_o *this,
        System_Collections_Generic_KeyValuePair_KeyValuePair_int__int___bool__o x,
        const MethodInfo *method)
{
  int32_t key; // w19

  key = x.fields.key.fields.key;
  if ( (byte_5973C20 & 1) == 0 )
  {
    sub_2213A60(&Method_System_Collections_Generic_KeyValuePair_KeyValuePair_int__int___bool__get_Key__);
    sub_2213A60(&Method_System_Collections_Generic_KeyValuePair_int__int__get_Key__);
    byte_5973C20 = 1;
  }
  return this->fields.funcIndex == key;
}


void BattleLogicFunction_ProcListInArgs___c__DisplayClass44_0___ctor(
        BattleLogicFunction_ProcListInArgs___c__DisplayClass44_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


bool BattleLogicFunction_ProcListInArgs___c__DisplayClass44_0___DidTriggeredFuncListHaveSpecifyResults_b__0(
        BattleLogicFunction_ProcListInArgs___c__DisplayClass44_0_o *this,
        System_Collections_Generic_KeyValuePair_KeyValuePair_int__int___bool__o x,
        const MethodInfo *method)
{
  int32_t key; // w19

  key = x.fields.key.fields.key;
  if ( (byte_5973C23 & 1) == 0 )
  {
    sub_2213A60(&Method_System_Collections_Generic_KeyValuePair_KeyValuePair_int__int___bool__get_Key__);
    sub_2213A60(&Method_System_Collections_Generic_KeyValuePair_int__int__get_Key__);
    byte_5973C23 = 1;
  }
  return this->fields.funcIndex == key;
}


bool BattleLogicFunction_ProcListInArgs___c__DisplayClass44_0___DidTriggeredFuncListHaveSpecifyResults_b__1(
        BattleLogicFunction_ProcListInArgs___c__DisplayClass44_0_o *this,
        System_Collections_Generic_KeyValuePair_KeyValuePair_int__int___bool__o x,
        const MethodInfo *method)
{
  bool value; // w19

  value = x.fields.value;
  if ( (byte_5973C24 & 1) == 0 )
  {
    sub_2213A60(&Method_System_Collections_Generic_KeyValuePair_KeyValuePair_int__int___bool__get_Value__);
    byte_5973C24 = 1;
  }
  return this->fields.condition == value;
}


void BattleLogicFunction_SideEffectMakeArgument___ctor(
        BattleLogicFunction_SideEffectMakeArgument_o *this,
        const MethodInfo *method)
{
  System_String_o *v2; // x2
  System_String_o *v3; // x3
  int32_t v4; // w4
  int32_t v5; // w5
  bool v6; // w6
  bool v7; // w7
  long double v8; // q0
  _QWORD *v10; // x20
  __int64 v11; // x8
  __int64 v12; // x0
  __int64 v13; // x0
  struct BattleActionData_SideEffectData_array **v14; // x8
  struct BattleActionData_SideEffectData_array *v15; // x1

  if ( (byte_5973C27 & 1) == 0 )
  {
    sub_2213A60(&Method_System_Array_Empty_BattleActionData_SideEffectData___);
    byte_5973C27 = 1;
  }
  v10 = Method_System_Array_Empty_BattleActionData_SideEffectData___;
  v11 = *((_QWORD *)Method_System_Array_Empty_BattleActionData_SideEffectData___ + 7);
  if ( !v11 )
  {
    sub_224B964(Method_System_Array_Empty_BattleActionData_SideEffectData___);
    v11 = v10[7];
  }
  v12 = *(_QWORD *)(v11 + 16);
  if ( (*(_WORD *)(v12 + 309) & 1) == 0 )
    v12 = sub_224B908(v8);
  if ( !*(_DWORD *)(v12 + 228) )
    *(__n128 *)&v8 = j_il2cpp_runtime_class_init_0(v12, method);
  v13 = *(_QWORD *)(v10[7] + 16LL);
  if ( (*(_WORD *)(v13 + 309) & 1) == 0 )
    v13 = sub_224B908(v8);
  v14 = *(struct BattleActionData_SideEffectData_array ***)(v13 + 184);
  v15 = *v14;
  this->fields._SideEffectList_k__BackingField = *v14;
  sub_2213A04((MissionNaviTransitionBoardItem_o *)&this->fields, (int32_t)v15, v2, v3, v4, v5, v6, v7);
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
  System_String_o *v9; // x2
  System_String_o *v10; // x3
  int32_t v11; // w4
  int32_t v12; // w5
  bool v13; // w6
  bool v14; // w7
  System_Func_T__TResult__o *v15; // x22
  System_Collections_Generic_IEnumerable_TSource__o *v16; // x0
  System_Object_array *v17; // x0
  System_String_o *v18; // x2
  System_String_o *v19; // x3
  int32_t v20; // w4
  int32_t v21; // w5
  bool v22; // w6
  bool v23; // w7

  if ( (byte_5973C25 & 1) == 0 )
  {
    sub_2213A60(&BuffList_ACTION___TypeInfo);
    sub_2213A60(&Method_System_Linq_Enumerable_Select_int__BattleActionData_SideEffectData___);
    sub_2213A60(&Method_System_Linq_Enumerable_ToArray_BattleActionData_SideEffectData___);
    sub_2213A60(&System_Func_int__BattleActionData_SideEffectData__TypeInfo);
    sub_2213A60(&Method_BattleLogicFunction_SideEffectMakeArgument___c__DisplayClass9_0__Init_b__0__);
    sub_2213A60(&BattleLogicFunction_SideEffectMakeArgument___c__DisplayClass9_0_TypeInfo);
    byte_5973C25 = 1;
  }
  v5 = sub_2213CCC(BattleLogicFunction_SideEffectMakeArgument___c__DisplayClass9_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v5, 0);
  v6 = sub_2213B20(BuffList_ACTION___TypeInfo, 1);
  v7 = ((__int64 (__fastcall *)(BattleLogicFunction_SideEffectMakeArgument_o *, const MethodInfo *))this->klass->vtable._4_unknown.methodPtr)(
         this,
         this->klass->vtable._4_unknown.method);
  if ( !v6 )
    goto LABEL_7;
  if ( !*(_DWORD *)(v6 + 24) )
    sub_2213CE4(v7);
  *(_DWORD *)(v6 + 32) = v7;
  if ( !v5 )
LABEL_7:
    sub_2213CDC(v7, v8);
  *(_QWORD *)(v5 + 16) = v6;
  sub_2213A04((MissionNaviTransitionBoardItem_o *)(v5 + 16), v6, v9, v10, v11, v12, v13, v14);
  v15 = (System_Func_T__TResult__o *)sub_2213CCC(System_Func_int__BattleActionData_SideEffectData__TypeInfo);
  System_Func_int__object____ctor(
    v15,
    (Il2CppObject *)v5,
    Method_BattleLogicFunction_SideEffectMakeArgument___c__DisplayClass9_0__Init_b__0__,
    0);
  v16 = (System_Collections_Generic_IEnumerable_TSource__o *)System_Linq_Enumerable__Select_int__object_(
                                                               (System_Collections_Generic_IEnumerable_TSource__o *)targetIds,
                                                               (System_Func_TSource__TResult__o *)v15,
                                                               (const MethodInfo_388DEA8 *)Method_System_Linq_Enumerable_Select_int__BattleActionData_SideEffectData___);
  v17 = System_Linq_Enumerable__ToArray_object_(
          v16,
          (const MethodInfo_389BB2C *)Method_System_Linq_Enumerable_ToArray_BattleActionData_SideEffectData___);
  this->fields._SideEffectList_k__BackingField = (struct BattleActionData_SideEffectData_array *)v17;
  sub_2213A04((MissionNaviTransitionBoardItem_o *)&this->fields, (int32_t)v17, v18, v19, v20, v21, v22, v23);
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
  __int64 v5; // x22
  __int64 v6; // x0
  __int64 v7; // x1
  System_Func_BattleActionData_SideEffectData__bool__c *v8; // x0
  System_Collections_Generic_IEnumerable_TSource__o *SideEffectList_k__BackingField; // x23
  System_Func_object__bool__o *v10; // x20
  System_Collections_Generic_IEnumerable_TSource__o *v11; // x0
  System_Collections_Generic_IEnumerable_TSource__o *v12; // x20
  System_Collections_Generic_IEnumerable_TSource__o *v13; // x23
  System_Func_object__bool__o *v14; // x24
  System_Collections_Generic_IEnumerable_TSource__o *v15; // x0
  System_Collections_Generic_IEnumerable_TSource__o *v16; // x0
  System_Object_array *v17; // x0
  System_String_o *v18; // x2
  System_String_o *v19; // x3
  int32_t v20; // w4
  int32_t v21; // w5
  bool v22; // w6
  bool v23; // w7

  if ( (byte_5973C26 & 1) == 0 )
  {
    sub_2213A60(&Method_System_Linq_Enumerable_Concat_BattleActionData_SideEffectData___);
    sub_2213A60(&Method_System_Linq_Enumerable_ToArray_BattleActionData_SideEffectData___);
    sub_2213A60(&Method_System_Linq_Enumerable_Where_BattleActionData_SideEffectData___);
    sub_2213A60(&System_Func_BattleActionData_SideEffectData__bool__TypeInfo);
    sub_2213A60(&Method_BattleLogicFunction_SideEffectMakeArgument___c__DisplayClass11_0__SortMainTargetToFirst_b__0__);
    sub_2213A60(&Method_BattleLogicFunction_SideEffectMakeArgument___c__DisplayClass11_0__SortMainTargetToFirst_b__1__);
    sub_2213A60(&BattleLogicFunction_SideEffectMakeArgument___c__DisplayClass11_0_TypeInfo);
    byte_5973C26 = 1;
  }
  v5 = sub_2213CCC(BattleLogicFunction_SideEffectMakeArgument___c__DisplayClass11_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v5, 0);
  if ( !v5 )
    sub_2213CDC(v6, v7);
  v8 = System_Func_BattleActionData_SideEffectData__bool__TypeInfo;
  *(_DWORD *)(v5 + 16) = mainTargetId;
  SideEffectList_k__BackingField = (System_Collections_Generic_IEnumerable_TSource__o *)this->fields._SideEffectList_k__BackingField;
  v10 = (System_Func_object__bool__o *)sub_2213CCC(v8);
  System_Func_object__bool____ctor(
    v10,
    (Il2CppObject *)v5,
    Method_BattleLogicFunction_SideEffectMakeArgument___c__DisplayClass11_0__SortMainTargetToFirst_b__0__,
    0);
  v11 = System_Linq_Enumerable__Where_object_(
          SideEffectList_k__BackingField,
          (System_Func_TSource__bool__o *)v10,
          (const MethodInfo_38A3478 *)Method_System_Linq_Enumerable_Where_BattleActionData_SideEffectData___);
  v12 = (System_Collections_Generic_IEnumerable_TSource__o *)this->fields._SideEffectList_k__BackingField;
  v13 = v11;
  v14 = (System_Func_object__bool__o *)sub_2213CCC(System_Func_BattleActionData_SideEffectData__bool__TypeInfo);
  System_Func_object__bool____ctor(
    v14,
    (Il2CppObject *)v5,
    Method_BattleLogicFunction_SideEffectMakeArgument___c__DisplayClass11_0__SortMainTargetToFirst_b__1__,
    0);
  v15 = System_Linq_Enumerable__Where_object_(
          v12,
          (System_Func_TSource__bool__o *)v14,
          (const MethodInfo_38A3478 *)Method_System_Linq_Enumerable_Where_BattleActionData_SideEffectData___);
  v16 = System_Linq_Enumerable__Concat_object_(
          v13,
          v15,
          (const MethodInfo_387607C *)Method_System_Linq_Enumerable_Concat_BattleActionData_SideEffectData___);
  v17 = System_Linq_Enumerable__ToArray_object_(
          v16,
          (const MethodInfo_389BB2C *)Method_System_Linq_Enumerable_ToArray_BattleActionData_SideEffectData___);
  this->fields._SideEffectList_k__BackingField = (struct BattleActionData_SideEffectData_array *)v17;
  sub_2213A04((MissionNaviTransitionBoardItem_o *)&this->fields, (int32_t)v17, v18, v19, v20, v21, v22, v23);
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
  System_String_o *v3; // x3
  int32_t v4; // w4
  int32_t v5; // w5
  bool v6; // w6
  bool v7; // w7

  this->fields._SideEffectList_k__BackingField = value;
  sub_2213A04(
    (MissionNaviTransitionBoardItem_o *)&this->fields,
    (int32_t)value,
    (System_String_o *)method,
    v3,
    v4,
    v5,
    v6,
    v7);
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
    sub_2213CDC(this, 0);
  return x->fields.targetId == this->fields.mainTargetId;
}


bool BattleLogicFunction_SideEffectMakeArgument___c__DisplayClass11_0___SortMainTargetToFirst_b__1(
        BattleLogicFunction_SideEffectMakeArgument___c__DisplayClass11_0_o *this,
        BattleActionData_SideEffectData_o *x,
        const MethodInfo *method)
{
  if ( !x )
    sub_2213CDC(this, 0);
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

  if ( (byte_5973C28 & 1) == 0 )
  {
    sub_2213A60(&BattleActionData_SideEffectData_TypeInfo);
    byte_5973C28 = 1;
  }
  buffActs = this->fields.buffActs;
  v6 = (BattleActionData_SideEffectData_o *)sub_2213CCC(BattleActionData_SideEffectData_TypeInfo);
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
  int32_t v6; // w8

  if ( (byte_5973C11 & 1) == 0 )
  {
    sub_2213A60(&BuffList_ACTION___TypeInfo);
    byte_5973C11 = 1;
  }
  result = (BuffList_ACTION_array *)sub_2213B20(BuffList_ACTION___TypeInfo, 1);
  if ( !isMainOnly )
  {
    if ( result )
    {
      if ( LODWORD(result->max_length) )
      {
        v6 = 122;
        goto LABEL_10;
      }
LABEL_12:
      sub_2213CE4(result);
    }
LABEL_11:
    sub_2213CDC(result, v5);
  }
  if ( !result )
    goto LABEL_11;
  if ( !LODWORD(result->max_length) )
    goto LABEL_12;
  v6 = 123;
LABEL_10:
  result->m_Items[0] = v6;
  return result;
}


BuffList_ACTION_array *BattleLogicFunction_TreasureDeviceSideEffectFunctionArgument__GetActArray(
        BattleLogicFunction_TreasureDeviceSideEffectFunctionArgument_o *this,
        bool isMainOnly,
        const MethodInfo *method)
{
  BuffList_ACTION_array *result; // x0
  __int64 v5; // x1
  int32_t v6; // w8

  if ( (byte_5973C12 & 1) == 0 )
  {
    sub_2213A60(&BuffList_ACTION___TypeInfo);
    byte_5973C12 = 1;
  }
  result = (BuffList_ACTION_array *)sub_2213B20(BuffList_ACTION___TypeInfo, 1);
  if ( !isMainOnly )
  {
    if ( result )
    {
      if ( LODWORD(result->max_length) )
      {
        v6 = 124;
        goto LABEL_10;
      }
LABEL_12:
      sub_2213CE4(result);
    }
LABEL_11:
    sub_2213CDC(result, v5);
  }
  if ( !result )
    goto LABEL_11;
  if ( !LODWORD(result->max_length) )
    goto LABEL_12;
  v6 = 125;
LABEL_10:
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
  __int64 v6; // x1
  System_String_o *v7; // x2
  System_String_o *v8; // x3
  int32_t v9; // w4
  int32_t v10; // w5
  bool v11; // w6
  bool v12; // w7

  if ( (byte_5973C13 & 1) == 0 )
  {
    sub_2213A60(&int___TypeInfo);
    byte_5973C13 = 1;
  }
  BattleLogicFunction_FunctionArgument___ctor(
    (BattleLogicFunction_FunctionArgument_o *)this,
    *(const MethodInfo **)&targetId);
  v5 = sub_2213B20(int___TypeInfo, 1);
  if ( !v5 )
    sub_2213CDC(0, v6);
  if ( !*(_DWORD *)(v5 + 24) )
    sub_2213CE4(v5);
  this->fields.fixTargetIds = (struct System_Int32_array *)v5;
  *(_DWORD *)(v5 + 32) = targetId;
  sub_2213A04((MissionNaviTransitionBoardItem_o *)&this->fields.fixTargetIds, v5, v7, v8, v9, v10, v11, v12);
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
  System_String_o *v2; // x2
  System_String_o *v3; // x3
  int32_t v4; // w4
  int32_t v5; // w5
  bool v6; // w6
  bool v7; // w7

  if ( (byte_5973C2C & 1) == 0 )
  {
    sub_2213A60(&BattleLogicFunction___c_TypeInfo);
    byte_5973C2C = 1;
  }
  v1 = (Il2CppObject *)sub_2213CCC(BattleLogicFunction___c_TypeInfo);
  System_Object___ctor(v1, 0);
  BattleLogicFunction___c_TypeInfo->static_fields->__9 = (struct BattleLogicFunction___c_o *)v1;
  sub_2213A04(
    (MissionNaviTransitionBoardItem_o *)BattleLogicFunction___c_TypeInfo->static_fields,
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


bool BattleLogicFunction___c___ApplySubBuffChanges_b__81_1(
        BattleLogicFunction___c_o *this,
        BattleBuffData_BuffData_o *buff,
        const MethodInfo *method)
{
  if ( !buff )
    sub_2213CDC(this, 0);
  return BattleBuffData_BuffData__get_ExistChangeBgm(buff, 0);
}


bool BattleLogicFunction___c___ApplySubBuffChanges_b__81_2(
        BattleLogicFunction___c_o *this,
        BattleBuffData_BuffData_o *buff,
        const MethodInfo *method)
{
  if ( !buff )
    sub_2213CDC(this, 0);
  return BattleBuffData_BuffData__IsChangeCommandCardTypeBuff(buff, 0);
}


bool BattleLogicFunction___c___ApplySubBuffChanges_b__81_3(
        BattleLogicFunction___c_o *this,
        BattleBuffData_BuffData_o *buff,
        const MethodInfo *method)
{
  __int64 v4; // x1
  int32_t BuffType; // w19

  if ( (byte_5973C2E & 1) == 0 )
  {
    this = (BattleLogicFunction___c_o *)sub_2213A60(&BuffList_TypeInfo);
    byte_5973C2E = 1;
  }
  if ( !buff )
    sub_2213CDC(this, buff);
  BuffType = BattleBuffData_BuffData__get_BuffType(buff, 0);
  if ( !*(&BuffList_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(BuffList_TypeInfo, v4);
  return BuffList__CheckUpdateBattlePointMax(BuffType, 0);
}


int32_t BattleLogicFunction___c___FunctionRevivalInDetail_b__126_0(
        BattleLogicFunction___c_o *this,
        BattleServantData_o *x,
        const MethodInfo *method)
{
  if ( !x || (this = (BattleLogicFunction___c_o *)x->fields.deckSvt) == 0 )
    sub_2213CDC(this, x);
  return BattleDeckServantData__GetRevivalTargetId((BattleDeckServantData_o *)this, 0);
}


int32_t BattleLogicFunction___c___FunctionRevivalInDetail_b__126_1(
        BattleLogicFunction___c_o *this,
        System_Linq_IGrouping_int__BattleServantData__o *x,
        const MethodInfo *method)
{
  System_Linq_IGrouping_int__BattleServantData__c *klass; // x8
  __int64 v5; // x9
  int32_t *p_offset; // x10
  __int64 v7; // x0

  if ( (byte_5973C30 & 1) == 0 )
  {
    this = (BattleLogicFunction___c_o *)sub_2213A60(&System_Linq_IGrouping_int__BattleServantData__TypeInfo);
    byte_5973C30 = 1;
  }
  if ( !x )
    sub_2213CDC(this, x);
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
    v7 = sub_224BC3C(x, System_Linq_IGrouping_int__BattleServantData__TypeInfo, 0);
  }
  return (*(int32_t (__fastcall **)(System_Linq_IGrouping_int__BattleServantData__o *, _QWORD))v7)(
           x,
           *(_QWORD *)(v7 + 8));
}


BattleServantData_array *BattleLogicFunction___c___FunctionRevivalInDetail_b__126_2(
        BattleLogicFunction___c_o *this,
        System_Linq_IGrouping_int__BattleServantData__o *x,
        const MethodInfo *method)
{
  if ( (byte_5973C31 & 1) == 0 )
  {
    sub_2213A60(&Method_System_Linq_Enumerable_ToArray_BattleServantData___);
    byte_5973C31 = 1;
  }
  return (BattleServantData_array *)System_Linq_Enumerable__ToArray_object_(
                                      (System_Collections_Generic_IEnumerable_TSource__o *)x,
                                      (const MethodInfo_389BB2C *)Method_System_Linq_Enumerable_ToArray_BattleServantData___);
}


bool BattleLogicFunction___c___FunctionRevivalInDetail_b__126_7(
        BattleLogicFunction___c_o *this,
        BattleServantData_o *x,
        const MethodInfo *method)
{
  if ( !x )
    sub_2213CDC(this, 0);
  return !x->fields.isEnemy;
}


void BattleLogicFunction___c___FunctionRevivalInDetail_b__126_8(
        BattleLogicFunction___c_o *this,
        BattleServantData_o *x,
        const MethodInfo *method)
{
  if ( !x )
    sub_2213CDC(this, 0);
  BattleServantData__ProcessSkillRevive(x, 0);
}


bool BattleLogicFunction___c___FunctionSubFieldBuff_b__140_1(
        BattleLogicFunction___c_o *this,
        BattleBuffData_BuffData_o *x,
        const MethodInfo *method)
{
  if ( !x )
    sub_2213CDC(this, 0);
  return x->fields.fieldChangeData != 0;
}


bool BattleLogicFunction___c___FunctionSubFieldBuff_b__140_2(
        BattleLogicFunction___c_o *this,
        BattleBuffData_BuffData_o *x,
        const MethodInfo *method)
{
  if ( !x )
    sub_2213CDC(this, 0);
  return BattleBuffData_BuffData__IsChangeCommandCardTypeBuff(x, 0);
}


bool BattleLogicFunction___c___FunctionSubFieldBuff_b__140_3(
        BattleLogicFunction___c_o *this,
        BattleBuffData_BuffData_o *x,
        const MethodInfo *method)
{
  if ( !x )
    sub_2213CDC(this, 0);
  return BattleBuffData_BuffData__IsChangeCommandCardTypeBuff(x, 0);
}


System_Guid_o BattleLogicFunction___c___FunctionSwapFieldPosition_b__165_0(
        BattleLogicFunction___c_o *this,
        int32_t x,
        const MethodInfo *method)
{
  System_Guid_o v5; // kr00_16
  System_Guid_o result; // 0:x0.16

  v5 = System_Guid__NewGuid(0);
  *(_QWORD *)&result.fields._d = *(_QWORD *)&v5.fields._d;
  *(_QWORD *)&result.fields._a = *(_QWORD *)&v5.fields._a;
  return result;
}


bool BattleLogicFunction___c___GetReplaceIndexArray_b__166_0(
        BattleLogicFunction___c_o *this,
        int32_t x,
        const MethodInfo *method)
{
  return x >= 0;
}


System_Guid_o BattleLogicFunction___c___GetReplaceIndexArray_b__166_2(
        BattleLogicFunction___c_o *this,
        int32_t x,
        const MethodInfo *method)
{
  System_Guid_o v5; // kr00_16
  System_Guid_o result; // 0:x0.16

  v5 = System_Guid__NewGuid(0);
  *(_QWORD *)&result.fields._d = *(_QWORD *)&v5.fields._d;
  *(_QWORD *)&result.fields._a = *(_QWORD *)&v5.fields._a;
  return result;
}


void BattleLogicFunction___c___SetFuncSideEffect_b__54_0(
        BattleLogicFunction___c_o *this,
        BattleActionData_o *x,
        const MethodInfo *method)
{
  if ( !x )
    sub_2213CDC(this, 0);
  BattleActionData__SetPopupOnce(x, 0);
}


void BattleLogicFunction___c___SetSubstituteAction_b__170_0(
        BattleLogicFunction___c_o *this,
        BattleServantData_o *svtData,
        const MethodInfo *method)
{
  if ( !svtData )
    sub_2213CDC(this, 0);
  svtData->fields._IsSubstituteBuffActive_k__BackingField = 0;
}


bool BattleLogicFunction___c___SetSubstituteAction_b__170_1(
        BattleLogicFunction___c_o *this,
        BattleServantData_o *x,
        const MethodInfo *method)
{
  if ( !x )
    sub_2213CDC(this, 0);
  return x->fields._IsSubstituteBuffActive_k__BackingField;
}


bool BattleLogicFunction___c___SetSubstituteAction_b__170_2(
        BattleLogicFunction___c_o *this,
        BattleBuffData_BuffData_o *buff,
        const MethodInfo *method)
{
  if ( !buff )
    sub_2213CDC(this, 0);
  return buff->fields._IsSubstituteSuccess_k__BackingField || buff->fields._IsSubstituteResisted_k__BackingField;
}


bool BattleLogicFunction___c___functionMoveState_b__127_2(
        BattleLogicFunction___c_o *this,
        BattleBuffData_BuffData_o *x,
        const MethodInfo *method)
{
  if ( !x )
    sub_2213CDC(this, 0);
  return BattleBuffData_BuffData__get_ExistChangeBgm(x, 0);
}


void BattleLogicFunction___c___functionPtShuffle_b__103_0(
        BattleLogicFunction___c_o *this,
        BattleServantData_o *s,
        const MethodInfo *method)
{
  __int64 Next; // x0
  __int64 v5; // x1

  Next = BattleRandom__getNext(1000, 0);
  if ( !s )
    sub_2213CDC(Next, v5);
  s->fields._shuffuleSeed = Next;
}


int32_t BattleLogicFunction___c___functionPtShuffle_b__103_1(
        BattleLogicFunction___c_o *this,
        BattleServantData_o *a,
        BattleServantData_o *b,
        const MethodInfo *method)
{
  if ( !a || (this = (BattleLogicFunction___c_o *)BattleServantData__get_ShuffleSeed(a, 0), !b) )
    sub_2213CDC(this, a);
  return (_DWORD)this - BattleServantData__get_ShuffleSeed(b, 0);
}


bool BattleLogicFunction___c___functionReplaceEnemyMember_b__95_0(
        BattleLogicFunction___c_o *this,
        BattleServantData_o *x,
        const MethodInfo *method)
{
  if ( !x )
    sub_2213CDC(this, 0);
  return BattleServantData__isAlive(x, 0, 0);
}


BattleServantSnapShot_o *BattleLogicFunction___c___functionTransformServant_b__97_0(
        BattleLogicFunction___c_o *this,
        BattleServantData_o *x,
        const MethodInfo *method)
{
  BattleServantSnapShotShiftServant_o *v4; // x20

  if ( (byte_5973C2F & 1) == 0 )
  {
    sub_2213A60(&BattleServantSnapShotShiftServant_TypeInfo);
    byte_5973C2F = 1;
  }
  v4 = (BattleServantSnapShotShiftServant_o *)sub_2213CCC(BattleServantSnapShotShiftServant_TypeInfo);
  BattleServantSnapShotShiftServant___ctor(v4, x, 0);
  return (BattleServantSnapShot_o *)v4;
}


bool BattleLogicFunction___c___procList_b__46_0(
        BattleLogicFunction___c_o *this,
        BattleLogicFunctionProcess_FunctionUnitCheck_o *x,
        const MethodInfo *method)
{
  struct DataVals_o *dataVals_k__BackingField; // x8

  if ( !x || (dataVals_k__BackingField = x->fields._dataVals_k__BackingField) == 0 )
    sub_2213CDC(this, x);
  return dataVals_k__BackingField->fields.funcType != 0;
}


bool BattleLogicFunction___c___procList_b__46_1(
        BattleLogicFunction___c_o *this,
        BattleLogicFunctionProcess_FunctionUnitCheck_o *x,
        const MethodInfo *method)
{
  struct DataVals_o *dataVals_k__BackingField; // x8

  if ( !x || (dataVals_k__BackingField = x->fields._dataVals_k__BackingField) == 0 )
    sub_2213CDC(this, x);
  return dataVals_k__BackingField->fields.funcType == 135;
}


bool BattleLogicFunction___c___procList_b__46_2(
        BattleLogicFunction___c_o *this,
        DataVals_o *x,
        const MethodInfo *method)
{
  struct FunctionEntity_o *funcEnt; // x8

  if ( !x || (funcEnt = x->fields.funcEnt) == 0 )
    sub_2213CDC(this, x);
  return BattleLogicFunction__IsFuncType169Or170(funcEnt->fields.funcType, 0);
}


System_Collections_Generic_IEnumerable_int____o *BattleLogicFunction___c___procList_b__46_3(
        BattleLogicFunction___c_o *this,
        DataVals_o *x,
        const MethodInfo *method)
{
  System_Collections_Generic_IEnumerable_int____o *result; // x0
  __int64 v5; // x1
  long double v6; // q0
  _QWORD *v7; // x19
  __int64 v8; // x8
  __int64 v9; // x0
  __int64 v10; // x0

  if ( (byte_5973C2D & 1) == 0 )
  {
    this = (BattleLogicFunction___c_o *)sub_2213A60(&Method_System_Array_Empty_int_____);
    byte_5973C2D = 1;
  }
  if ( !x )
    sub_2213CDC(this, x);
  result = (System_Collections_Generic_IEnumerable_int____o *)DataVals__GetFuncTargetArray(x, 0);
  if ( !result )
  {
    v7 = Method_System_Array_Empty_int_____;
    v8 = *((_QWORD *)Method_System_Array_Empty_int_____ + 7);
    if ( !v8 )
    {
      sub_224B964(Method_System_Array_Empty_int_____);
      v8 = v7[7];
    }
    v9 = *(_QWORD *)(v8 + 16);
    if ( (*(_WORD *)(v9 + 309) & 1) == 0 )
      v9 = sub_224B908(v6);
    if ( !*(_DWORD *)(v9 + 228) )
      *(__n128 *)&v6 = j_il2cpp_runtime_class_init_0(v9, v5);
    v10 = *(_QWORD *)(v7[7] + 16LL);
    if ( (*(_WORD *)(v10 + 309) & 1) == 0 )
      v10 = sub_224B908(v6);
    return **(System_Collections_Generic_IEnumerable_int____o ***)(v10 + 184);
  }
  return result;
}


bool BattleLogicFunction___c___procList_b__46_4(
        BattleLogicFunction___c_o *this,
        BattleLogicFunctionProcess_FunctionTargetCheck_o *target,
        const MethodInfo *method)
{
  if ( !target )
    sub_2213CDC(this, 0);
  return target->fields._result_k__BackingField;
}


int32_t BattleLogicFunction___c___procList_b__46_5(
        BattleLogicFunction___c_o *this,
        BattleLogicFunctionProcess_FunctionTargetCheck_o *target,
        const MethodInfo *method)
{
  if ( !target )
    sub_2213CDC(this, 0);
  return target->fields._targetId_k__BackingField;
}


int32_t BattleLogicFunction___c___setAttackSideEffect_b__58_0(
        BattleLogicFunction___c_o *this,
        BattleActionData_SideEffectData_o *x,
        const MethodInfo *method)
{
  if ( !x )
    sub_2213CDC(this, 0);
  return x->fields.targetId;
}


void BattleLogicFunction___c__DisplayClass115_0___ctor(
        BattleLogicFunction___c__DisplayClass115_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


void BattleLogicFunction___c__DisplayClass115_0___UpdateUserEquipSkillChargeTurn_b__0(
        BattleLogicFunction___c__DisplayClass115_0_o *this,
        BattleSkillInfoData_o *x,
        const MethodInfo *method)
{
  BattleLogicFunction___c__DisplayClass115_0_o *v3; // x19

  v3 = this;
  if ( this->fields.onlyAvailableSkill )
  {
    if ( !x )
      goto LABEL_10;
    if ( !BattleSkillInfoData__IsAvailable(x, 0) )
      return;
  }
  this = (BattleLogicFunction___c__DisplayClass115_0_o *)v3->fields.__4__this;
  if ( !this )
    goto LABEL_10;
  this = (BattleLogicFunction___c__DisplayClass115_0_o *)BattleLogicFunction__IsTargetSkill(
                                                           (BattleLogicFunction_o *)this,
                                                           x,
                                                           v3->fields.targetSkillIndividualityArray,
                                                           0);
  if ( ((unsigned __int8)this & 1) == 0 )
    return;
  if ( !x )
LABEL_10:
    sub_2213CDC(this, x);
  if ( BattleSkillInfoData__TurnProgress(
         x,
         v3->fields.progressValue,
         0,
         v3->fields.targetIndex,
         v3->fields.targetIndividualityArray,
         0) )
  {
    v3->fields.isEnable = 1;
  }
}


void BattleLogicFunction___c__DisplayClass115_0___UpdateUserEquipSkillChargeTurn_b__1(
        BattleLogicFunction___c__DisplayClass115_0_o *this,
        BattleSkillInfoData_o *x,
        const MethodInfo *method)
{
  BattleLogicFunction___c__DisplayClass115_0_o *v3; // x19

  v3 = this;
  if ( this->fields.onlyAvailableSkill )
  {
    if ( !x )
      goto LABEL_10;
    if ( !BattleSkillInfoData__IsAvailable(x, 0) )
      return;
  }
  this = (BattleLogicFunction___c__DisplayClass115_0_o *)v3->fields.__4__this;
  if ( !this )
    goto LABEL_10;
  this = (BattleLogicFunction___c__DisplayClass115_0_o *)BattleLogicFunction__IsTargetSkill(
                                                           (BattleLogicFunction_o *)this,
                                                           x,
                                                           v3->fields.targetSkillIndividualityArray,
                                                           0);
  if ( ((unsigned __int8)this & 1) == 0 )
    return;
  if ( !x )
LABEL_10:
    sub_2213CDC(this, x);
  if ( BattleSkillInfoData__TurnExtend(
         x,
         v3->fields.progressValue,
         999,
         v3->fields.targetIndex,
         v3->fields.targetIndividualityArray,
         0) )
  {
    v3->fields.isEnable = 1;
  }
}


bool BattleLogicFunction___c__DisplayClass115_0___UpdateUserEquipSkillChargeTurn_b__2(
        BattleLogicFunction___c__DisplayClass115_0_o *this,
        BattleSkillInfoData_o *x,
        const MethodInfo *method)
{
  if ( !this->fields.onlyAvailableSkill )
    return 1;
  if ( !x )
    sub_2213CDC(this, 0);
  return BattleSkillInfoData__IsAvailable(x, 0);
}


bool BattleLogicFunction___c__DisplayClass115_0___UpdateUserEquipSkillChargeTurn_b__3(
        BattleLogicFunction___c__DisplayClass115_0_o *this,
        BattleSkillInfoData_o *x,
        const MethodInfo *method)
{
  BattleLogicFunction_o *_4__this; // x0

  _4__this = this->fields.__4__this;
  if ( !_4__this )
    sub_2213CDC(0, x);
  return BattleLogicFunction__IsTargetSkill(_4__this, x, this->fields.targetSkillIndividualityArray, 0);
}


void BattleLogicFunction___c__DisplayClass115_0___UpdateUserEquipSkillChargeTurn_b__4(
        BattleLogicFunction___c__DisplayClass115_0_o *this,
        BattleSkillInfoData_o *x,
        const MethodInfo *method)
{
  if ( !x )
    sub_2213CDC(this, 0);
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


void BattleLogicFunction___c__DisplayClass115_0___UpdateUserEquipSkillChargeTurn_b__5(
        BattleLogicFunction___c__DisplayClass115_0_o *this,
        BattleSkillInfoData_o *x,
        const MethodInfo *method)
{
  if ( !x )
    sub_2213CDC(this, 0);
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


void BattleLogicFunction___c__DisplayClass118_0___ctor(
        BattleLogicFunction___c__DisplayClass118_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


bool BattleLogicFunction___c__DisplayClass118_0___GetAvailableSkillCount_b__0(
        BattleLogicFunction___c__DisplayClass118_0_o *this,
        BattleSkillInfoData_o *x,
        const MethodInfo *method)
{
  BattleLogicFunction_o *_4__this; // x0

  _4__this = this->fields.__4__this;
  if ( !_4__this )
    sub_2213CDC(0, x);
  return BattleLogicFunction__IsTargetSkill(_4__this, x, this->fields.targetSkillIndividualityArray, 0);
}


void BattleLogicFunction___c__DisplayClass127_0___ctor(
        BattleLogicFunction___c__DisplayClass127_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


bool BattleLogicFunction___c__DisplayClass127_0___functionMoveState_b__0(
        BattleLogicFunction___c__DisplayClass127_0_o *this,
        BattleBuffData_BuffData_o *x,
        const MethodInfo *method)
{
  if ( !x )
    sub_2213CDC(this, 0);
  return BattleBuffData_BuffData__checkState(x, this->fields.stateUnstealable, 0);
}


bool BattleLogicFunction___c__DisplayClass127_0___functionMoveState_b__1(
        BattleLogicFunction___c__DisplayClass127_0_o *this,
        BattleBuffData_BuffData_o *x,
        const MethodInfo *method)
{
  struct System_Collections_Generic_HashSet_BattleBuffData_BuffData__o *unstealableBuffs; // x0

  if ( (byte_5973C32 & 1) == 0 )
  {
    sub_2213A60(&Method_System_Collections_Generic_HashSet_BattleBuffData_BuffData__Contains__);
    byte_5973C32 = 1;
  }
  unstealableBuffs = this->fields.unstealableBuffs;
  if ( !unstealableBuffs )
    sub_2213CDC(0, x);
  return !System_Collections_Generic_HashSet_object___Contains(
            (System_Collections_Generic_HashSet_object__o *)unstealableBuffs,
            (Il2CppObject *)x,
            (const MethodInfo_42BA9D0 *)Method_System_Collections_Generic_HashSet_BattleBuffData_BuffData__Contains__);
}


void BattleLogicFunction___c__DisplayClass165_0___ctor(
        BattleLogicFunction___c__DisplayClass165_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


bool BattleLogicFunction___c__DisplayClass165_0___FunctionSwapFieldPosition_b__1(
        BattleLogicFunction___c__DisplayClass165_0_o *this,
        RestockServantLogicByMoveToSubMember_o *x,
        const MethodInfo *method)
{
  if ( !x )
    sub_2213CDC(this, 0);
  return this->fields.isEnemy == x->fields._IsEnemy_k__BackingField;
}


void BattleLogicFunction___c__DisplayClass166_0___ctor(
        BattleLogicFunction___c__DisplayClass166_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


bool BattleLogicFunction___c__DisplayClass166_0___GetReplaceIndexArray_b__1(
        BattleLogicFunction___c__DisplayClass166_0_o *this,
        int32_t x,
        const MethodInfo *method)
{
  if ( (byte_5973C33 & 1) == 0 )
  {
    sub_2213A60(&Method_System_Linq_Enumerable_Contains_int___);
    byte_5973C33 = 1;
  }
  return !System_Linq_Enumerable__Contains_int_(
            (System_Collections_Generic_IEnumerable_TSource__o *)this->fields.specifiedReplaceTargetArray,
            x,
            (const MethodInfo_3876640 *)Method_System_Linq_Enumerable_Contains_int___);
}


void BattleLogicFunction___c__DisplayClass79_0___ctor(
        BattleLogicFunction___c__DisplayClass79_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


// local variable allocation has failed, the output may be wrong!
int32_t BattleLogicFunction___c__DisplayClass79_0___BehaveLinkageBuffAsFamily_b__0(
        BattleLogicFunction___c__DisplayClass79_0_o *this,
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
    sub_2213CDC(this, *(_QWORD *)&linkageIndividuality);
  }
  return BattleLogicFunction_ProcListInArgs__GetFamilyBuffLinkageId(
           procArg_k__BackingField,
           linkageIndividuality,
           this->fields.targetSvtData,
           v3);
}


void BattleLogicFunction___c__DisplayClass81_0___ctor(
        BattleLogicFunction___c__DisplayClass81_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


BattleBuffData_BuffData_o *BattleLogicFunction___c__DisplayClass81_0___ApplySubBuffChanges_b__0(
        BattleLogicFunction___c__DisplayClass81_0_o *this,
        BattleBuffData_BuffData_o *buff,
        const MethodInfo *method)
{
  BattleServantData_o *targetSvtData; // x0

  targetSvtData = this->fields.targetSvtData;
  if ( !targetSvtData || (targetSvtData = (BattleServantData_o *)BattleServantData__get_BuffData(targetSvtData, 0)) == 0 )
    sub_2213CDC(targetSvtData, buff);
  return BattleBuffData__CreateDummyBuff((BattleBuffData_o *)targetSvtData, buff, 0);
}


void BattleLogicFunction___c__DisplayClass97_0___ctor(
        BattleLogicFunction___c__DisplayClass97_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


bool BattleLogicFunction___c__DisplayClass97_0___functionTransformServant_b__1(
        BattleLogicFunction___c__DisplayClass97_0_o *this,
        BattleActionData_BuffData_o *x,
        const MethodInfo *method)
{
  if ( !x )
    sub_2213CDC(this, 0);
  return x->fields.targetId == this->fields.targetId;
}