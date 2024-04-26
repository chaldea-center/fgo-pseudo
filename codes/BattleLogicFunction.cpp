void __fastcall BattleLogicFunction___ctor(BattleLogicFunction_o *this, const MethodInfo *method)
{
  struct System_Int32_array *v3; // x0
  __int64 v4; // x1
  System_String_array **v5; // x2
  System_String_array **v6; // x3
  System_Boolean_array **v7; // x4
  System_Int32_array **v8; // x5
  System_Int32_array *v9; // x6
  System_Int32_array *v10; // x7
  il2cpp_array_size_t max_length; // w8
  System_Collections_Generic_Dictionary_Voice_BATTLE__string__o *v12; // x20
  BattleLogicFunctionProcess_CommonFunctionTypeProcess_o *v13; // x21
  BattleLogicFunctionProcess_AddStateProcess_o *v14; // x21
  BattleLogicFunctionProcess_AddStateShortProcess_o *v15; // x21
  BattleLogicFunctionProcess_MoveToLastSubMemberProcess_o *v16; // x21
  BattleLogicFunctionProcess_TransformServantProcess_o *v17; // x21
  BattleLogicFunctionProcess_CommonFieldFunctionProcess_o *v18; // x21
  BattleLogicFunctionProcess_CommonFieldFunctionProcess_o *v19; // x21
  BattleLogicFunctionProcess_CommonAddStateProcess_o *v20; // x21
  BattleLogicFunctionProcess_ToFieldCommonFunctionProcess_o *v21; // x21
  System_String_array **v22; // x2
  System_String_array **v23; // x3
  System_Boolean_array **v24; // x4
  System_Int32_array **v25; // x5
  System_Int32_array *v26; // x6
  System_Int32_array *v27; // x7
  __int64 v28; // x0

  if ( (byte_43538A3 & 1) == 0 )
  {
    sub_B70694(&BattleLogicFunctionProcess_AddStateProcess_TypeInfo);
    sub_B70694(&BattleLogicFunctionProcess_AddStateShortProcess_TypeInfo);
    sub_B70694(&BattleLogicFunctionProcess_CommonAddStateProcess_TypeInfo);
    sub_B70694(&BattleLogicFunctionProcess_CommonFieldFunctionProcess_TypeInfo);
    sub_B70694(&BattleLogicFunctionProcess_CommonFunctionTypeProcess_TypeInfo);
    sub_B70694(&Method_System_Collections_Generic_Dictionary_FuncList_TYPE__BattleLogicFunctionProcess_BaseFunctionTypeProcess__Add__);
    sub_B70694(&Method_System_Collections_Generic_Dictionary_FuncList_TYPE__BattleLogicFunctionProcess_BaseFunctionTypeProcess___ctor__);
    sub_B70694(&System_Collections_Generic_Dictionary_FuncList_TYPE__BattleLogicFunctionProcess_BaseFunctionTypeProcess__TypeInfo);
    sub_B70694(&int___TypeInfo);
    sub_B70694(&BattleLogicFunctionProcess_MoveToLastSubMemberProcess_TypeInfo);
    sub_B70694(&BattleLogicFunctionProcess_ToFieldCommonFunctionProcess_TypeInfo);
    sub_B70694(&BattleLogicFunctionProcess_TransformServantProcess_TypeInfo);
    byte_43538A3 = 1;
  }
  v3 = (struct System_Int32_array *)sub_B706AC(int___TypeInfo, 2LL);
  if ( !v3 )
    goto LABEL_9;
  max_length = v3->max_length;
  if ( !max_length || (v3->m_Items[1] = 701601, max_length == 1) )
  {
    v28 = sub_B70798(v3);
    sub_B70738(v28, 0LL);
  }
  v3->m_Items[2] = 701602;
  this->fields.tamamocatTreasureDeviceIds = v3;
  sub_B70630(
    (BattleServantConfConponent_o *)&this->fields.tamamocatTreasureDeviceIds,
    (System_Int32_array **)v3,
    v5,
    v6,
    v7,
    v8,
    v9,
    v10);
  v12 = (System_Collections_Generic_Dictionary_Voice_BATTLE__string__o *)sub_B70764(System_Collections_Generic_Dictionary_FuncList_TYPE__BattleLogicFunctionProcess_BaseFunctionTypeProcess__TypeInfo);
  System_Collections_Generic_Dictionary_Voice_BATTLE__string____ctor(
    v12,
    (const MethodInfo_2F71470 *)Method_System_Collections_Generic_Dictionary_FuncList_TYPE__BattleLogicFunctionProcess_BaseFunctionTypeProcess___ctor__);
  v13 = (BattleLogicFunctionProcess_CommonFunctionTypeProcess_o *)sub_B70764(BattleLogicFunctionProcess_CommonFunctionTypeProcess_TypeInfo);
  BattleLogicFunctionProcess_CommonFunctionTypeProcess___ctor(v13, 0LL);
  if ( !v12 )
LABEL_9:
    sub_B7076C(v3, v4);
  System_Collections_Generic_Dictionary_Voice_BATTLE__string___Add(
    v12,
    0,
    (System_String_o *)v13,
    (const MethodInfo_2F72024 *)Method_System_Collections_Generic_Dictionary_FuncList_TYPE__BattleLogicFunctionProcess_BaseFunctionTypeProcess__Add__);
  v14 = (BattleLogicFunctionProcess_AddStateProcess_o *)sub_B70764(BattleLogicFunctionProcess_AddStateProcess_TypeInfo);
  BattleLogicFunctionProcess_AddStateProcess___ctor(v14, 0LL);
  System_Collections_Generic_Dictionary_Voice_BATTLE__string___Add(
    v12,
    1,
    (System_String_o *)v14,
    (const MethodInfo_2F72024 *)Method_System_Collections_Generic_Dictionary_FuncList_TYPE__BattleLogicFunctionProcess_BaseFunctionTypeProcess__Add__);
  v15 = (BattleLogicFunctionProcess_AddStateShortProcess_o *)sub_B70764(BattleLogicFunctionProcess_AddStateShortProcess_TypeInfo);
  BattleLogicFunctionProcess_AddStateShortProcess___ctor(v15, 0LL);
  System_Collections_Generic_Dictionary_Voice_BATTLE__string___Add(
    v12,
    16,
    (System_String_o *)v15,
    (const MethodInfo_2F72024 *)Method_System_Collections_Generic_Dictionary_FuncList_TYPE__BattleLogicFunctionProcess_BaseFunctionTypeProcess__Add__);
  v16 = (BattleLogicFunctionProcess_MoveToLastSubMemberProcess_o *)sub_B70764(BattleLogicFunctionProcess_MoveToLastSubMemberProcess_TypeInfo);
  BattleLogicFunctionProcess_MoveToLastSubMemberProcess___ctor(v16, 0LL);
  System_Collections_Generic_Dictionary_Voice_BATTLE__string___Add(
    v12,
    61,
    (System_String_o *)v16,
    (const MethodInfo_2F72024 *)Method_System_Collections_Generic_Dictionary_FuncList_TYPE__BattleLogicFunctionProcess_BaseFunctionTypeProcess__Add__);
  v17 = (BattleLogicFunctionProcess_TransformServantProcess_o *)sub_B70764(BattleLogicFunctionProcess_TransformServantProcess_TypeInfo);
  BattleLogicFunctionProcess_TransformServantProcess___ctor(v17, 0LL);
  System_Collections_Generic_Dictionary_Voice_BATTLE__string___Add(
    v12,
    109,
    (System_String_o *)v17,
    (const MethodInfo_2F72024 *)Method_System_Collections_Generic_Dictionary_FuncList_TYPE__BattleLogicFunctionProcess_BaseFunctionTypeProcess__Add__);
  v18 = (BattleLogicFunctionProcess_CommonFieldFunctionProcess_o *)sub_B70764(BattleLogicFunctionProcess_CommonFieldFunctionProcess_TypeInfo);
  BattleLogicFunctionProcess_CommonFieldFunctionProcess___ctor(v18, 0LL);
  System_Collections_Generic_Dictionary_Voice_BATTLE__string___Add(
    v12,
    29,
    (System_String_o *)v18,
    (const MethodInfo_2F72024 *)Method_System_Collections_Generic_Dictionary_FuncList_TYPE__BattleLogicFunctionProcess_BaseFunctionTypeProcess__Add__);
  v19 = (BattleLogicFunctionProcess_CommonFieldFunctionProcess_o *)sub_B70764(BattleLogicFunctionProcess_CommonFieldFunctionProcess_TypeInfo);
  BattleLogicFunctionProcess_CommonFieldFunctionProcess___ctor(v19, 0LL);
  System_Collections_Generic_Dictionary_Voice_BATTLE__string___Add(
    v12,
    128,
    (System_String_o *)v19,
    (const MethodInfo_2F72024 *)Method_System_Collections_Generic_Dictionary_FuncList_TYPE__BattleLogicFunctionProcess_BaseFunctionTypeProcess__Add__);
  v20 = (BattleLogicFunctionProcess_CommonAddStateProcess_o *)sub_B70764(BattleLogicFunctionProcess_CommonAddStateProcess_TypeInfo);
  BattleLogicFunctionProcess_CommonAddStateProcess___ctor(v20, 0LL);
  System_Collections_Generic_Dictionary_Voice_BATTLE__string___Add(
    v12,
    130,
    (System_String_o *)v20,
    (const MethodInfo_2F72024 *)Method_System_Collections_Generic_Dictionary_FuncList_TYPE__BattleLogicFunctionProcess_BaseFunctionTypeProcess__Add__);
  v21 = (BattleLogicFunctionProcess_ToFieldCommonFunctionProcess_o *)sub_B70764(BattleLogicFunctionProcess_ToFieldCommonFunctionProcess_TypeInfo);
  BattleLogicFunctionProcess_ToFieldCommonFunctionProcess___ctor(v21, 0LL);
  System_Collections_Generic_Dictionary_Voice_BATTLE__string___Add(
    v12,
    131,
    (System_String_o *)v21,
    (const MethodInfo_2F72024 *)Method_System_Collections_Generic_Dictionary_FuncList_TYPE__BattleLogicFunctionProcess_BaseFunctionTypeProcess__Add__);
  this->fields.dicFuncProcess = (struct System_Collections_Generic_Dictionary_FuncList_TYPE__BattleLogicFunctionProcess_BaseFunctionTypeProcess__o *)v12;
  sub_B70630(
    (BattleServantConfConponent_o *)&this->fields.dicFuncProcess,
    (System_Int32_array **)v12,
    v22,
    v23,
    v24,
    v25,
    v26,
    v27);
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


BattleActionData_o *__fastcall BattleLogicFunction__AbsorbNpPoint(
        BattleLogicFunction_o *this,
        BattleActionData_o *mainAction,
        BattleLogicFunctionProcess_FunctionTargetCheck_o *funcTarget,
        NpGaugeAbsorbResult_o *result,
        const MethodInfo *method)
{
  BattleLogicFunction_o *v7; // x21
  struct BattleLogicFunctionProcess_FunctionUnitCheck_o *funcUnit_k__BackingField; // x8
  BattleLogicFunction_ProcListInArgs_o *procArg_k__BackingField; // x22
  DataVals_o *dataVals_k__BackingField; // x24
  BattleActionData_o *v11; // x23
  System_Collections_Generic_List_VoiceCondType_Type__o *v12; // x25
  struct BattleLogic_o *logic; // x8
  unsigned __int64 v14; // x9
  int v15; // w10
  DataVals_o *v16; // x26
  const MethodInfo *v17; // x4
  BattleLogicFunction_c *klass; // x8
  BattleLogicFunction_o *v19; // x25
  unsigned __int64 v20; // x10
  int32_t *p_offset; // x11
  __int64 v22; // x0
  __int64 v23; // x1
  __int64 v24; // x25
  __int64 v25; // x8
  unsigned __int64 v26; // x10
  int *v27; // x11
  __int64 v28; // x0
  __int64 v29; // x8
  unsigned __int64 v30; // x10
  int *v31; // x11
  __int64 v32; // x0
  __int64 v33; // x0
  __int64 v34; // x1
  __int64 v35; // x27
  __int64 v36; // x0
  __int64 v37; // x1
  int32_t v38; // w2
  const MethodInfo *v39; // x6
  int32_t v40; // w27
  BattleActionData_o *v41; // x0
  int32_t v42; // w28
  int32_t funcIndex; // w28
  bool IsCommandSideEffect; // w0
  const MethodInfo *v45; // x7
  BattleActionData_o *NoEffectObject; // x0
  int v47; // w10
  __int64 v48; // x8
  int v49; // w27
  unsigned __int64 v50; // x10
  int *v51; // x11
  __int64 v52; // x0
  __int64 v54; // x0
  BattleLogicFunction_o *v55; // [xsp+0h] [xbp-80h]
  int v56; // [xsp+Ch] [xbp-74h]
  unsigned __int64 v57; // [xsp+10h] [xbp-70h]
  _DWORD v59[1]; // [xsp+20h] [xbp-60h]
  int v60; // [xsp+24h] [xbp-5Ch]
  int32_t diffNp; // [xsp+2Ch] [xbp-54h] BYREF

  v7 = this;
  if ( (byte_4353888 & 1) == 0 )
  {
    sub_B70694(&BattleActionData_TypeInfo);
    sub_B70694(&System_IDisposable_TypeInfo);
    sub_B70694(&System_Collections_Generic_IEnumerable_BattleLogicFunctionProcess_FunctionTargetCheck__TypeInfo);
    sub_B70694(&System_Collections_Generic_IEnumerator_BattleLogicFunctionProcess_FunctionTargetCheck__TypeInfo);
    sub_B70694(&System_Collections_IEnumerator_TypeInfo);
    sub_B70694(&Method_System_Collections_Generic_List_FuncList_TYPE__Add__);
    sub_B70694(&Method_System_Collections_Generic_List_FuncList_TYPE___ctor__);
    this = (BattleLogicFunction_o *)sub_B70694(&System_Collections_Generic_List_FuncList_TYPE__TypeInfo);
    byte_4353888 = 1;
  }
  diffNp = 0;
  v60 = 0;
  if ( !funcTarget )
    goto LABEL_65;
  funcUnit_k__BackingField = funcTarget->fields._funcUnit_k__BackingField;
  if ( !funcUnit_k__BackingField )
    goto LABEL_65;
  procArg_k__BackingField = funcUnit_k__BackingField->fields._procArg_k__BackingField;
  dataVals_k__BackingField = funcUnit_k__BackingField->fields._dataVals_k__BackingField;
  v11 = (BattleActionData_o *)sub_B70764(BattleActionData_TypeInfo);
  BattleActionData___ctor(v11, 0LL);
  v12 = (System_Collections_Generic_List_VoiceCondType_Type__o *)sub_B70764(System_Collections_Generic_List_FuncList_TYPE__TypeInfo);
  System_Collections_Generic_List_VoiceCondType_Type____ctor(
    v12,
    (const MethodInfo_30B8454 *)Method_System_Collections_Generic_List_FuncList_TYPE___ctor__);
  if ( !v12 )
    goto LABEL_65;
  System_Collections_Generic_List_VoiceCondType_Type___Add(
    v12,
    8,
    (const MethodInfo_30B91B0 *)Method_System_Collections_Generic_List_FuncList_TYPE__Add__);
  if ( !dataVals_k__BackingField )
    goto LABEL_65;
  this = (BattleLogicFunction_o *)DataVals__GetDependDataValsArray(
                                    dataVals_k__BackingField,
                                    (System_Collections_Generic_List_FuncList_TYPE__o *)v12,
                                    0,
                                    0LL);
  if ( !this )
    goto LABEL_65;
  logic = this->fields.logic;
  if ( (int)logic >= 1 )
  {
    v14 = 0LL;
    v15 = 0;
    v55 = this;
    while ( 1 )
    {
      if ( v14 >= (unsigned int)logic )
      {
        v54 = sub_B70798(this);
        sub_B70738(v54, 0LL);
      }
      v16 = (DataVals_o *)*((_QWORD *)&this->fields.logictarget + v14);
      diffNp = 0;
      if ( !result )
        break;
      this = (BattleLogicFunction_o *)result->fields._Convert_k__BackingField;
      v56 = v15;
      v57 = v14;
      if ( !this )
        break;
      ((void (__fastcall *)(BattleLogicFunction_o *, DataVals_o *, void *))this->klass[1]._1.namespaze)(
        this,
        v16,
        this->klass[1]._1.byval_arg.data);
      this = (BattleLogicFunction_o *)BattleLogicFunction__GetDependFuncTargets(
                                        v7,
                                        procArg_k__BackingField,
                                        mainAction,
                                        v16,
                                        v17);
      if ( !this )
        break;
      klass = this->klass;
      v19 = this;
      if ( *(_WORD *)&this->klass->_2.bitflags1 )
      {
        v20 = 0LL;
        p_offset = &klass->_1.interfaceOffsets->offset;
        while ( *((System_Collections_Generic_IEnumerable_BattleLogicFunctionProcess_FunctionTargetCheck__c **)p_offset
                - 1) != System_Collections_Generic_IEnumerable_BattleLogicFunctionProcess_FunctionTargetCheck__TypeInfo )
        {
          ++v20;
          p_offset += 4;
          if ( v20 >= *(unsigned __int16 *)&this->klass->_2.bitflags1 )
            goto LABEL_25;
        }
        v22 = (__int64)(&klass->vtable._0_Equals.method + 2 * *p_offset);
      }
      else
      {
LABEL_25:
        v22 = sub_B08590(
                this,
                System_Collections_Generic_IEnumerable_BattleLogicFunctionProcess_FunctionTargetCheck__TypeInfo,
                0LL);
      }
      v24 = (*(__int64 (__fastcall **)(BattleLogicFunction_o *, _QWORD))v22)(v19, *(_QWORD *)(v22 + 8));
      if ( !v24 )
        sub_B7076C(0LL, v23);
      while ( 1 )
      {
        v25 = *(_QWORD *)v24;
        if ( *(_WORD *)(*(_QWORD *)v24 + 298LL) )
        {
          v26 = 0LL;
          v27 = (int *)(*(_QWORD *)(v25 + 176) + 8LL);
          while ( *((System_Collections_IEnumerator_c **)v27 - 1) != System_Collections_IEnumerator_TypeInfo )
          {
            ++v26;
            v27 += 4;
            if ( v26 >= *(unsigned __int16 *)(*(_QWORD *)v24 + 298LL) )
              goto LABEL_32;
          }
          v28 = v25 + 16LL * *v27 + 312;
        }
        else
        {
LABEL_32:
          v28 = sub_B08590(v24, System_Collections_IEnumerator_TypeInfo, 0LL);
        }
        if ( ((*(__int64 (__fastcall **)(__int64, _QWORD))v28)(v24, *(_QWORD *)(v28 + 8)) & 1) == 0 )
          break;
        v29 = *(_QWORD *)v24;
        if ( *(_WORD *)(*(_QWORD *)v24 + 298LL) )
        {
          v30 = 0LL;
          v31 = (int *)(*(_QWORD *)(v29 + 176) + 8LL);
          while ( *((System_Collections_Generic_IEnumerator_BattleLogicFunctionProcess_FunctionTargetCheck__c **)v31 - 1) != System_Collections_Generic_IEnumerator_BattleLogicFunctionProcess_FunctionTargetCheck__TypeInfo )
          {
            ++v30;
            v31 += 4;
            if ( v30 >= *(unsigned __int16 *)(*(_QWORD *)v24 + 298LL) )
              goto LABEL_39;
          }
          v32 = v29 + 16LL * *v31 + 312;
        }
        else
        {
LABEL_39:
          v32 = sub_B08590(
                  v24,
                  System_Collections_Generic_IEnumerator_BattleLogicFunctionProcess_FunctionTargetCheck__TypeInfo,
                  0LL);
        }
        v33 = (*(__int64 (__fastcall **)(__int64, _QWORD))v32)(v24, *(_QWORD *)(v32 + 8));
        v35 = v33;
        if ( !v33 )
          sub_B7076C(0LL, v34);
        v36 = (*(__int64 (__fastcall **)(__int64, BattleActionData_o *, _QWORD))(*(_QWORD *)v33 + 392LL))(
                v33,
                mainAction,
                *(_QWORD *)(*(_QWORD *)v33 + 400LL));
        if ( (v36 & 1) != 0 )
        {
          if ( !mainAction )
            sub_B7076C(v36, v37);
          v40 = *(_DWORD *)(v35 + 32);
          v41 = BattleLogicFunction__functionLossNp(v7, procArg_k__BackingField, v38, v40, v16, &diffNp, v39);
          v42 = diffNp;
          if ( diffNp < 1 )
          {
            if ( v41 )
            {
              if ( !v16 )
                sub_B7076C(v41, v41);
              if ( !procArg_k__BackingField )
                sub_B7076C(v41, v41);
              funcIndex = v16->fields.funcIndex;
              IsCommandSideEffect = BattleLogicFunction_ProcListInArgs__get_IsCommandSideEffect(
                                      procArg_k__BackingField,
                                      0LL);
              NoEffectObject = BattleLogicFunction__getNoEffectObject(
                                 v7,
                                 v40,
                                 funcIndex,
                                 v16,
                                 IsCommandSideEffect,
                                 0LL,
                                 0LL,
                                 v45);
              if ( !v11 )
                sub_B7076C(NoEffectObject, NoEffectObject);
              BattleActionData__addAction(v11, NoEffectObject, 0LL);
            }
          }
          else
          {
            if ( !v11 )
              sub_B7076C(v41, v41);
            BattleActionData__addAction(v11, v41, 0LL);
            NpGaugeAbsorbResult__AddPoint(result, v42, 0LL);
          }
        }
      }
      v59[v56] = 229;
      v47 = ++v60;
      v48 = *(_QWORD *)v24;
      v49 = v47;
      if ( *(_WORD *)(*(_QWORD *)v24 + 298LL) )
      {
        v50 = 0LL;
        v51 = (int *)(*(_QWORD *)(v48 + 176) + 8LL);
        while ( *((System_IDisposable_c **)v51 - 1) != System_IDisposable_TypeInfo )
        {
          ++v50;
          v51 += 4;
          if ( v50 >= *(unsigned __int16 *)(*(_QWORD *)v24 + 298LL) )
            goto LABEL_57;
        }
        v52 = v48 + 16LL * *v51 + 312;
      }
      else
      {
LABEL_57:
        v52 = sub_B08590(v24, System_IDisposable_TypeInfo, 0LL);
      }
      (*(void (__fastcall **)(__int64, _QWORD))v52)(v24, *(_QWORD *)(v52 + 8));
      v15 = v49;
      if ( v49 && v59[v49 - 1] == 229 )
      {
        v15 = v49 - 1;
        v60 = v49 - 1;
      }
      this = v55;
      LODWORD(logic) = v55->fields.logic;
      v14 = v57 + 1;
      if ( (__int64)(v57 + 1) >= (int)logic )
        return v11;
    }
LABEL_65:
    sub_B7076C(this, mainAction);
  }
  return v11;
}


BattleActionData_o *__fastcall BattleLogicFunction__AbsorbNpTurn(
        BattleLogicFunction_o *this,
        BattleActionData_o *mainAction,
        BattleLogicFunctionProcess_FunctionTargetCheck_o *funcTarget,
        NpGaugeAbsorbResult_o *result,
        const MethodInfo *method)
{
  struct BattleLogicFunctionProcess_FunctionUnitCheck_o *funcUnit_k__BackingField; // x8
  DataVals_o *dataVals_k__BackingField; // x24
  BattleLogicFunction_ProcListInArgs_o *procArg_k__BackingField; // x22
  BattleActionData_o *v10; // x23
  System_Collections_Generic_List_VoiceCondType_Type__o *v11; // x25
  struct BattleLogic_o *logic; // x8
  unsigned __int64 v13; // x9
  int v14; // w10
  DataVals_o *v15; // x26
  const MethodInfo *v16; // x4
  BattleLogicFunction_c *klass; // x8
  BattleLogicFunction_o *v18; // x25
  unsigned __int64 v19; // x10
  int32_t *p_offset; // x11
  __int64 v21; // x0
  __int64 v22; // x1
  __int64 v23; // x25
  __int64 v24; // x8
  unsigned __int64 v25; // x10
  int *v26; // x11
  __int64 v27; // x0
  __int64 v28; // x8
  unsigned __int64 v29; // x10
  int *v30; // x11
  __int64 v31; // x0
  __int64 v32; // x0
  __int64 v33; // x1
  __int64 v34; // x27
  __int64 v35; // x0
  __int64 v36; // x1
  int32_t v37; // w27
  FunctionEntity_o *funcEnt; // x28
  int32_t funcIndex; // w24
  bool IsCommandSideEffect; // w0
  const MethodInfo *v41; // x7
  BattleActionData_o *v42; // x0
  int v43; // w10
  __int64 v44; // x8
  int v45; // w24
  unsigned __int64 v46; // x10
  int *v47; // x11
  __int64 v48; // x0
  __int64 v50; // x0
  BattleLogicFunction_o *v51; // [xsp+8h] [xbp-88h]
  unsigned __int64 v52; // [xsp+10h] [xbp-80h]
  int v53; // [xsp+1Ch] [xbp-74h]
  BattleLogicFunction_o *v55; // [xsp+28h] [xbp-68h]
  _DWORD v56[1]; // [xsp+30h] [xbp-60h]
  int v57; // [xsp+34h] [xbp-5Ch]
  int32_t absorptionCount; // [xsp+3Ch] [xbp-54h] BYREF

  v55 = this;
  if ( (byte_4353887 & 1) == 0 )
  {
    sub_B70694(&BattleActionData_TypeInfo);
    sub_B70694(&System_IDisposable_TypeInfo);
    sub_B70694(&System_Collections_Generic_IEnumerable_BattleLogicFunctionProcess_FunctionTargetCheck__TypeInfo);
    sub_B70694(&System_Collections_Generic_IEnumerator_BattleLogicFunctionProcess_FunctionTargetCheck__TypeInfo);
    sub_B70694(&System_Collections_IEnumerator_TypeInfo);
    sub_B70694(&Method_System_Collections_Generic_List_FuncList_TYPE__Add__);
    sub_B70694(&Method_System_Collections_Generic_List_FuncList_TYPE___ctor__);
    this = (BattleLogicFunction_o *)sub_B70694(&System_Collections_Generic_List_FuncList_TYPE__TypeInfo);
    byte_4353887 = 1;
  }
  absorptionCount = 0;
  v57 = 0;
  if ( !funcTarget )
    goto LABEL_59;
  funcUnit_k__BackingField = funcTarget->fields._funcUnit_k__BackingField;
  if ( !funcUnit_k__BackingField )
    goto LABEL_59;
  dataVals_k__BackingField = funcUnit_k__BackingField->fields._dataVals_k__BackingField;
  if ( !dataVals_k__BackingField )
    goto LABEL_59;
  procArg_k__BackingField = funcUnit_k__BackingField->fields._procArg_k__BackingField;
  v10 = (BattleActionData_o *)sub_B70764(BattleActionData_TypeInfo);
  BattleActionData___ctor(v10, 0LL);
  v11 = (System_Collections_Generic_List_VoiceCondType_Type__o *)sub_B70764(System_Collections_Generic_List_FuncList_TYPE__TypeInfo);
  System_Collections_Generic_List_VoiceCondType_Type____ctor(
    v11,
    (const MethodInfo_30B8454 *)Method_System_Collections_Generic_List_FuncList_TYPE___ctor__);
  if ( !v11 )
    goto LABEL_59;
  System_Collections_Generic_List_VoiceCondType_Type___Add(
    v11,
    20,
    (const MethodInfo_30B91B0 *)Method_System_Collections_Generic_List_FuncList_TYPE__Add__);
  this = (BattleLogicFunction_o *)DataVals__GetDependDataValsArray(
                                    dataVals_k__BackingField,
                                    (System_Collections_Generic_List_FuncList_TYPE__o *)v11,
                                    0,
                                    0LL);
  if ( !this )
    goto LABEL_59;
  logic = this->fields.logic;
  if ( (int)logic >= 1 )
  {
    v13 = 0LL;
    v14 = 0;
    v51 = this;
    while ( 1 )
    {
      if ( v13 >= (unsigned int)logic )
      {
        v50 = sub_B70798(this);
        sub_B70738(v50, 0LL);
      }
      v15 = (DataVals_o *)*((_QWORD *)&this->fields.logictarget + v13);
      absorptionCount = 0;
      if ( !result )
        break;
      this = (BattleLogicFunction_o *)result->fields._Convert_k__BackingField;
      v53 = v14;
      v52 = v13;
      if ( !this )
        break;
      ((void (__fastcall *)(BattleLogicFunction_o *, DataVals_o *, void *))this->klass[1]._1.namespaze)(
        this,
        v15,
        this->klass[1]._1.byval_arg.data);
      this = (BattleLogicFunction_o *)BattleLogicFunction__GetDependFuncTargets(
                                        v55,
                                        procArg_k__BackingField,
                                        mainAction,
                                        v15,
                                        v16);
      if ( !this )
        break;
      klass = this->klass;
      v18 = this;
      if ( *(_WORD *)&this->klass->_2.bitflags1 )
      {
        v19 = 0LL;
        p_offset = &klass->_1.interfaceOffsets->offset;
        while ( *((System_Collections_Generic_IEnumerable_BattleLogicFunctionProcess_FunctionTargetCheck__c **)p_offset
                - 1) != System_Collections_Generic_IEnumerable_BattleLogicFunctionProcess_FunctionTargetCheck__TypeInfo )
        {
          ++v19;
          p_offset += 4;
          if ( v19 >= *(unsigned __int16 *)&this->klass->_2.bitflags1 )
            goto LABEL_23;
        }
        v21 = (__int64)(&klass->vtable._0_Equals.method + 2 * *p_offset);
      }
      else
      {
LABEL_23:
        v21 = sub_B08590(
                this,
                System_Collections_Generic_IEnumerable_BattleLogicFunctionProcess_FunctionTargetCheck__TypeInfo,
                0LL);
      }
      v23 = (*(__int64 (__fastcall **)(BattleLogicFunction_o *, _QWORD))v21)(v18, *(_QWORD *)(v21 + 8));
      if ( !v23 )
        sub_B7076C(0LL, v22);
      while ( 1 )
      {
        v24 = *(_QWORD *)v23;
        if ( *(_WORD *)(*(_QWORD *)v23 + 298LL) )
        {
          v25 = 0LL;
          v26 = (int *)(*(_QWORD *)(v24 + 176) + 8LL);
          while ( *((System_Collections_IEnumerator_c **)v26 - 1) != System_Collections_IEnumerator_TypeInfo )
          {
            ++v25;
            v26 += 4;
            if ( v25 >= *(unsigned __int16 *)(*(_QWORD *)v23 + 298LL) )
              goto LABEL_30;
          }
          v27 = v24 + 16LL * *v26 + 312;
        }
        else
        {
LABEL_30:
          v27 = sub_B08590(v23, System_Collections_IEnumerator_TypeInfo, 0LL);
        }
        if ( ((*(__int64 (__fastcall **)(__int64, _QWORD))v27)(v23, *(_QWORD *)(v27 + 8)) & 1) == 0 )
          break;
        v28 = *(_QWORD *)v23;
        if ( *(_WORD *)(*(_QWORD *)v23 + 298LL) )
        {
          v29 = 0LL;
          v30 = (int *)(*(_QWORD *)(v28 + 176) + 8LL);
          while ( *((System_Collections_Generic_IEnumerator_BattleLogicFunctionProcess_FunctionTargetCheck__c **)v30 - 1) != System_Collections_Generic_IEnumerator_BattleLogicFunctionProcess_FunctionTargetCheck__TypeInfo )
          {
            ++v29;
            v30 += 4;
            if ( v29 >= *(unsigned __int16 *)(*(_QWORD *)v23 + 298LL) )
              goto LABEL_37;
          }
          v31 = v28 + 16LL * *v30 + 312;
        }
        else
        {
LABEL_37:
          v31 = sub_B08590(
                  v23,
                  System_Collections_Generic_IEnumerator_BattleLogicFunctionProcess_FunctionTargetCheck__TypeInfo,
                  0LL);
        }
        v32 = (*(__int64 (__fastcall **)(__int64, _QWORD))v31)(v23, *(_QWORD *)(v31 + 8));
        v34 = v32;
        if ( !v32 )
          sub_B7076C(0LL, v33);
        v35 = (*(__int64 (__fastcall **)(__int64, BattleActionData_o *, _QWORD))(*(_QWORD *)v32 + 392LL))(
                v32,
                mainAction,
                *(_QWORD *)(*(_QWORD *)v32 + 400LL));
        if ( (v35 & 1) != 0 )
        {
          if ( !v15 )
            sub_B7076C(v35, v36);
          if ( !procArg_k__BackingField )
            sub_B7076C(v35, v36);
          v37 = *(_DWORD *)(v34 + 32);
          funcEnt = v15->fields.funcEnt;
          funcIndex = v15->fields.funcIndex;
          IsCommandSideEffect = BattleLogicFunction_ProcListInArgs__get_IsCommandSideEffect(
                                  procArg_k__BackingField,
                                  0LL);
          v42 = BattleLogicFunction__functionDelayNpTurn(
                  v55,
                  v37,
                  funcEnt,
                  v15,
                  funcIndex,
                  IsCommandSideEffect,
                  &absorptionCount,
                  v41);
          if ( !v10 )
            sub_B7076C(v42, v42);
          BattleActionData__addAction(v10, v42, 0LL);
          if ( absorptionCount >= 1 )
            NpGaugeAbsorbResult__AddTurn(result, absorptionCount, 0LL);
        }
      }
      v56[v53] = 209;
      v43 = ++v57;
      v44 = *(_QWORD *)v23;
      v45 = v43;
      if ( *(_WORD *)(*(_QWORD *)v23 + 298LL) )
      {
        v46 = 0LL;
        v47 = (int *)(*(_QWORD *)(v44 + 176) + 8LL);
        while ( *((System_IDisposable_c **)v47 - 1) != System_IDisposable_TypeInfo )
        {
          ++v46;
          v47 += 4;
          if ( v46 >= *(unsigned __int16 *)(*(_QWORD *)v23 + 298LL) )
            goto LABEL_51;
        }
        v48 = v44 + 16LL * *v47 + 312;
      }
      else
      {
LABEL_51:
        v48 = sub_B08590(v23, System_IDisposable_TypeInfo, 0LL);
      }
      (*(void (__fastcall **)(__int64, _QWORD))v48)(v23, *(_QWORD *)(v48 + 8));
      v14 = v45;
      if ( v45 && v56[v45 - 1] == 209 )
      {
        v14 = v45 - 1;
        v57 = v45 - 1;
      }
      this = v51;
      LODWORD(logic) = v51->fields.logic;
      v13 = v52 + 1;
      if ( (__int64)(v52 + 1) >= (int)logic )
        return v10;
    }
LABEL_59:
    sub_B7076C(this, mainAction);
  }
  return v10;
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
  if ( (byte_4353862 & 1) == 0 )
  {
    this = (BattleLogicFunction_o *)sub_B70694(&UnityEngine_Object_TypeInfo);
    byte_4353862 = 1;
  }
  if ( !buffEnt )
    goto LABEL_20;
  if ( buffEnt->fields.effectId >= 1 )
  {
    logic = (UnityEngine_Object_o *)v6->fields.logic;
    if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    }
    this = (BattleLogicFunction_o *)UnityEngine_Object__op_Inequality(logic, 0LL, 0LL);
    ServantActor = 0LL;
    if ( ((unsigned __int8)this & 1) != 0 )
    {
      v9 = v6->fields.logic;
      if ( !v9 )
        goto LABEL_20;
      if ( !targetSvtData )
        goto LABEL_20;
      this = (BattleLogicFunction_o *)v9->fields.perf;
      if ( !this )
        goto LABEL_20;
      ServantActor = (UnityEngine_Object_o *)BattlePerformance__getServantActor(
                                               (BattlePerformance_o *)this,
                                               targetSvtData->fields.uniqueId,
                                               0LL);
    }
    if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    }
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
LABEL_20:
      sub_B7076C(this, targetSvtData);
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
  System_String_array **v21; // x2
  System_String_array **v22; // x3
  System_Boolean_array **v23; // x4
  System_Int32_array **v24; // x5
  System_Int32_array *v25; // x6
  System_Int32_array *v26; // x7
  BattleServantData_o **v27; // x23
  const MethodInfo *v28; // x6
  BattleActionData_o *v29; // x19
  int32_t rootfsm; // w28
  int32_t AuraSum_k__BackingField; // w21
  BattleServantData_o *v32; // x24
  System_Func_WarBoardManager_WarBoardOnboardSkillTarget__WarBoardPieceData__o *v33; // x26
  System_Collections_Generic_IEnumerable_TSource__o *v34; // x0
  System_Int32_array **v35; // x0
  System_String_array **v36; // x2
  System_String_array **v37; // x3
  System_Boolean_array **v38; // x4
  System_Int32_array **v39; // x5
  System_Int32_array *v40; // x6
  System_Int32_array *v41; // x7
  Il2CppObject *current; // x25
  BattleData_o *v43; // x0
  _BOOL8 v44; // x0
  __int64 v45; // x1
  _BOOL8 v46; // x0
  __int64 v47; // x1
  BattleActionData_o *v48; // x28
  BattleLogicFunction___c_c *v49; // x0
  BattleServantSnapShotOnBuffUpdate_o *v50; // x19
  struct BattleLogicFunction___c_StaticFields *static_fields; // x8
  System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *_9__70_1; // x25
  Il2CppObject *v53; // x26
  struct BattleLogicFunction___c_StaticFields *v54; // x0
  System_String_array **v55; // x2
  System_String_array **v56; // x3
  System_Boolean_array **v57; // x4
  System_Int32_array **v58; // x5
  System_Int32_array *v59; // x6
  System_Int32_array *v60; // x7
  struct BattleData_o *v61; // x8
  BattleFieldEnvironmentData_o *FieldEnvData_k__BackingField; // x22
  BattleActionEffect_ChangeBgmBuff_o *v63; // x22
  int32_t MaxHp_k__BackingField; // w21
  BattleActionEffect_SubChangeMaxHpBuff_o *v65; // x21
  unsigned int uniqueId; // w22
  BattleData_o *v67; // x20
  BattleActionEffect_Base_o *v68; // x0
  BattleServantSnapShotOnBuffUpdate_o *v69; // [xsp+0h] [xbp-90h]
  System_Collections_Generic_List_Enumerator_T__o v70; // [xsp+8h] [xbp-88h] BYREF
  System_Collections_Generic_List_Enumerator_T__o v71; // [xsp+20h] [xbp-70h] BYREF

  if ( (byte_435386E & 1) == 0 )
  {
    sub_B70694(&Method_BasicHelper_Any_BattleBuffData_BuffData___);
    sub_B70694(&BattleActionEffect_ChangeBgmBuff_TypeInfo);
    sub_B70694(&Method_System_Linq_Enumerable_Select_BattleBuffData_BuffData__BattleBuffData_BuffData___);
    sub_B70694(&Method_System_Linq_Enumerable_ToList_BattleBuffData_BuffData___);
    sub_B70694(&Method_System_Collections_Generic_List_Enumerator_BattleBuffData_BuffData__Dispose__);
    sub_B70694(&Method_System_Collections_Generic_List_Enumerator_BattleBuffData_BuffData__MoveNext__);
    sub_B70694(&Method_System_Collections_Generic_List_Enumerator_BattleBuffData_BuffData__get_Current__);
    sub_B70694(&Method_System_Func_BattleBuffData_BuffData__bool___ctor__);
    sub_B70694(&Method_System_Func_BattleBuffData_BuffData__BattleBuffData_BuffData___ctor__);
    sub_B70694(&System_Func_BattleBuffData_BuffData__bool__TypeInfo);
    sub_B70694(&System_Func_BattleBuffData_BuffData__BattleBuffData_BuffData__TypeInfo);
    sub_B70694(&Method_System_Collections_Generic_List_BattleBuffData_BuffData__GetEnumerator__);
    sub_B70694(&Method_System_Collections_Generic_List_BattleBuffData_BuffData__ToArray__);
    sub_B70694(&BattleActionEffect_SubChangeMaxHpBuff_TypeInfo);
    sub_B70694(&Method_BattleLogicFunction___c__ApplySubBuffChanges_b__70_1__);
    sub_B70694(&Method_BattleLogicFunction___c__DisplayClass70_0__ApplySubBuffChanges_b__0__);
    sub_B70694(&BattleLogicFunction___c__DisplayClass70_0_TypeInfo);
    sub_B70694(&BattleLogicFunction___c_TypeInfo);
    byte_435386E = 1;
  }
  memset(&v71, 0, sizeof(v71));
  v18 = sub_B70764(BattleLogicFunction___c__DisplayClass70_0_TypeInfo);
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
        v27 = (BattleServantData_o **)(v18 + 16);
        sub_B70630(
          (BattleServantConfConponent_o *)(v18 + 16),
          (System_Int32_array **)data,
          v21,
          v22,
          v23,
          v24,
          v25,
          v26);
        data = *(BattleData_o **)(v18 + 16);
        if ( data )
        {
          data = (BattleData_o *)BattleServantData__getAuraIdList((BattleServantData_o *)data, 0LL);
          if ( data )
          {
            if ( svtSnapShotOnBuffUpdate )
            {
              v69 = svtSnapShotOnBuffUpdate;
              if ( baseVals )
              {
                if ( *v27 )
                {
                  v29 = actionData;
                  rootfsm = (int32_t)data->fields.rootfsm;
                  AuraSum_k__BackingField = v69->fields._AuraSum_k__BackingField;
                  data = (BattleData_o *)BattleLogicFunction__getFunctionObject(
                                           (BattleLogicFunction_o *)data,
                                           baseVals->fields.funcEnt,
                                           (*v27)->fields.uniqueId,
                                           index,
                                           isCommandSideEffect,
                                           0LL,
                                           v28);
                  if ( data )
                  {
                    BYTE4(data->fields.player_datalist) = AuraSum_k__BackingField > rootfsm;
                    v32 = (BattleServantData_o *)data;
                    v33 = (System_Func_WarBoardManager_WarBoardOnboardSkillTarget__WarBoardPieceData__o *)sub_B70764(System_Func_BattleBuffData_BuffData__BattleBuffData_BuffData__TypeInfo);
                    System_Func_WarBoardManager_WarBoardOnboardSkillTarget__WarBoardPieceData____ctor(
                      v33,
                      (Il2CppObject *)v18,
                      Method_BattleLogicFunction___c__DisplayClass70_0__ApplySubBuffChanges_b__0__,
                      (const MethodInfo_29ADCC4 *)Method_System_Func_BattleBuffData_BuffData__BattleBuffData_BuffData___ctor__);
                    v34 = (System_Collections_Generic_IEnumerable_TSource__o *)System_Linq_Enumerable__Select_WarBoardManager_WarBoardOnboardSkillTarget__WarBoardPieceData_(
                                                                                 (System_Collections_Generic_IEnumerable_TSource__o *)subBuffList,
                                                                                 (System_Func_TSource__TResult__o *)v33,
                                                                                 (const MethodInfo_1CC4218 *)Method_System_Linq_Enumerable_Select_BattleBuffData_BuffData__BattleBuffData_BuffData___);
                    v35 = (System_Int32_array **)System_Linq_Enumerable__ToList_WarBoardManager_WarBoardOnboardSkillTarget_(
                                                   v34,
                                                   (const MethodInfo_1CCB668 *)Method_System_Linq_Enumerable_ToList_BattleBuffData_BuffData___);
                    v32->fields.transformUserSvtId = (int64_t)v35;
                    sub_B70630(
                      (BattleServantConfConponent_o *)&v32->fields.transformUserSvtId,
                      v35,
                      v36,
                      v37,
                      v38,
                      v39,
                      v40,
                      v41);
                    if ( v29 )
                    {
                      BattleActionData__setBuffData(v29, (BattleActionData_BuffData_o *)v32, baseVals, 0LL);
                      if ( subBuffList )
                      {
                        System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo___GetEnumerator(
                          &v70,
                          (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)subBuffList,
                          (const MethodInfo_3026504 *)Method_System_Collections_Generic_List_BattleBuffData_BuffData__GetEnumerator__);
                        v71 = v70;
                        while ( 1 )
                        {
                          v46 = System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___MoveNext(
                                  &v71,
                                  (const MethodInfo_22212CC *)Method_System_Collections_Generic_List_Enumerator_BattleBuffData_BuffData__MoveNext__);
                          if ( !v46 )
                            break;
                          current = v71.fields.current;
                          if ( !v71.fields.current )
                            sub_B7076C(v46, v47);
                          v43 = this->fields.data;
                          if ( !v43 )
                            sub_B7076C(0LL, v47);
                          BattleData__RemoveDoNotSelectCommandCardBuff(
                            v43,
                            (int32_t)v71.fields.current[1].klass,
                            *v27,
                            0LL);
                          v44 = BattleBuffData__CheckInvalidSacrificeIndiv((BattleBuffData_BuffData_o *)current, 0LL);
                          if ( v44 )
                          {
                            if ( !args )
                              sub_B7076C(v44, v45);
                            args->fields.updateField = 1;
                          }
                        }
                        System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___Dispose(
                          &v71,
                          (const MethodInfo_22212C8 *)Method_System_Collections_Generic_List_Enumerator_BattleBuffData_BuffData__Dispose__);
                        v48 = v29;
                        v49 = BattleLogicFunction___c_TypeInfo;
                        if ( (BYTE3(BattleLogicFunction___c_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 )
                        {
                          v50 = v69;
                          if ( !BattleLogicFunction___c_TypeInfo->_2.cctor_finished )
                          {
                            j_il2cpp_runtime_class_init_0(BattleLogicFunction___c_TypeInfo);
                            v49 = BattleLogicFunction___c_TypeInfo;
                          }
                        }
                        else
                        {
                          v50 = v69;
                        }
                        static_fields = v49->static_fields;
                        _9__70_1 = (System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *)static_fields->__9__70_1;
                        if ( !_9__70_1 )
                        {
                          if ( (BYTE3(v49->vtable._0_Equals.methodPtr) & 4) != 0 && !v49->_2.cctor_finished )
                          {
                            j_il2cpp_runtime_class_init_0(v49);
                            static_fields = BattleLogicFunction___c_TypeInfo->static_fields;
                          }
                          v53 = (Il2CppObject *)static_fields->__9;
                          _9__70_1 = (System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *)sub_B70764(System_Func_BattleBuffData_BuffData__bool__TypeInfo);
                          System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool____ctor(
                            _9__70_1,
                            v53,
                            Method_BattleLogicFunction___c__ApplySubBuffChanges_b__70_1__,
                            (const MethodInfo_29AC578 *)Method_System_Func_BattleBuffData_BuffData__bool___ctor__);
                          v54 = BattleLogicFunction___c_TypeInfo->static_fields;
                          v54->__9__70_1 = (struct System_Func_BattleBuffData_BuffData__bool__o *)_9__70_1;
                          sub_B70630(
                            (BattleServantConfConponent_o *)&v54->__9__70_1,
                            (System_Int32_array **)_9__70_1,
                            v55,
                            v56,
                            v57,
                            v58,
                            v59,
                            v60);
                        }
                        data = (BattleData_o *)BasicHelper__Any_WarBoardData_SquareRangeSearch_(
                                                 (System_Collections_Generic_List_T__o *)subBuffList,
                                                 (System_Func_T__bool__o *)_9__70_1,
                                                 (const MethodInfo_1BDCA88 *)Method_BasicHelper_Any_BattleBuffData_BuffData___);
                        if ( ((unsigned __int8)data & 1) != 0 )
                        {
                          v61 = this->fields.data;
                          if ( !v61 )
                            goto LABEL_44;
                          FieldEnvData_k__BackingField = v61->fields._FieldEnvData_k__BackingField;
                          data = (BattleData_o *)System_Collections_Generic_List_WarBoardUiData_SaveData___ToArray(
                                                   (System_Collections_Generic_List_WarBoardUiData_SaveData__o *)subBuffList,
                                                   (const MethodInfo_30277D4 *)Method_System_Collections_Generic_List_BattleBuffData_BuffData__ToArray__);
                          if ( !FieldEnvData_k__BackingField )
                            goto LABEL_44;
                          BattleFieldEnvironmentData__RemoveBgmRelateBuff(
                            FieldEnvData_k__BackingField,
                            (BattleBuffData_BuffData_array *)data,
                            0LL);
                          v63 = (BattleActionEffect_ChangeBgmBuff_o *)sub_B70764(BattleActionEffect_ChangeBgmBuff_TypeInfo);
                          BattleActionEffect_ChangeBgmBuff___ctor(v63, 0LL);
                          BattleActionData_BuffData__SetActionEffectProc(
                            (BattleActionData_BuffData_o *)v32,
                            (BattleActionEffect_Base_o *)v63,
                            0LL);
                        }
                        data = (BattleData_o *)*v27;
                        if ( *v27 )
                        {
                          MaxHp_k__BackingField = v50->fields._MaxHp_k__BackingField;
                          data = (BattleData_o *)BattleServantData__getMaxHp((BattleServantData_o *)data, 0LL);
                          if ( MaxHp_k__BackingField == (_DWORD)data )
                            return;
                          if ( *v27 )
                          {
                            BattleActionData__addReflectLogicResultServantId(v48, (*v27)->fields.uniqueId, 0LL);
                            v65 = (BattleActionEffect_SubChangeMaxHpBuff_o *)sub_B70764(BattleActionEffect_SubChangeMaxHpBuff_TypeInfo);
                            BattleActionEffect_SubChangeMaxHpBuff___ctor(v65, 0LL);
                            data = (BattleData_o *)System_Collections_Generic_List_WarBoardUiData_SaveData___ToArray(
                                                     (System_Collections_Generic_List_WarBoardUiData_SaveData__o *)subBuffList,
                                                     (const MethodInfo_30277D4 *)Method_System_Collections_Generic_List_BattleBuffData_BuffData__ToArray__);
                            if ( *v27 )
                            {
                              uniqueId = (*v27)->fields.uniqueId;
                              v67 = data;
                              data = (BattleData_o *)BattleServantData__getNowHp(*v27, 0LL);
                              if ( v65 )
                              {
                                v68 = (BattleActionEffect_Base_o *)((__int64 (__fastcall *)(BattleActionEffect_SubChangeMaxHpBuff_o *, BattleData_o *, _QWORD, _QWORD, Il2CppMethodPointer))v65->klass->vtable._7_InitBuff.method)(
                                                                     v65,
                                                                     v67,
                                                                     uniqueId,
                                                                     (unsigned int)((_DWORD)data
                                                                                  - v50->fields._Hp_k__BackingField),
                                                                     v65->klass->vtable._8_PartialPreActionProc.methodPtr);
                                BattleActionData_BuffData__SetActionEffectProc(
                                  (BattleActionData_BuffData_o *)v32,
                                  v68,
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
LABEL_44:
    sub_B7076C(data, v19);
  }
}


void __fastcall BattleLogicFunction__BehaveLinkageBuffAsFamily(
        BattleLogicFunction_o *this,
        BattleBuffData_BuffData_o *buffData,
        BattleLogicFunctionProcess_FunctionTargetCheck_o *funcTarget,
        const MethodInfo *method)
{
  __int64 v7; // x22
  BattleData_o *data; // x0
  __int64 v9; // x1
  System_String_array **v10; // x2
  System_String_array **v11; // x3
  System_Boolean_array **v12; // x4
  System_Int32_array **v13; // x5
  System_Int32_array *v14; // x6
  System_Int32_array *v15; // x7
  __int64 v16; // x8
  System_Int32_array **ServantData; // x0
  System_String_array **v18; // x2
  System_String_array **v19; // x3
  System_Boolean_array **v20; // x4
  System_Int32_array **v21; // x5
  System_Int32_array *v22; // x6
  System_Int32_array *v23; // x7
  System_Func_int__int__o *v24; // x20
  System_Collections_Generic_IEnumerable_TSource__o *v25; // x0
  struct System_Int32_array *v26; // x0
  System_String_array **v27; // x2
  System_String_array **v28; // x3
  System_Boolean_array **v29; // x4
  System_Int32_array **v30; // x5
  System_Int32_array *v31; // x6
  System_Int32_array *v32; // x7
  System_Collections_Generic_IEnumerable_TSource__o *v33; // x0
  struct System_Int32_array *v34; // x0
  System_String_array **v35; // x2
  System_String_array **v36; // x3
  System_Boolean_array **v37; // x4
  System_Int32_array **v38; // x5
  System_Int32_array *v39; // x6
  System_Int32_array *v40; // x7

  if ( (byte_435386C & 1) == 0 )
  {
    sub_B70694(&Method_System_Linq_Enumerable_Select_int__int___);
    sub_B70694(&Method_System_Linq_Enumerable_ToArray_int___);
    sub_B70694(&Method_System_Func_int__int___ctor__);
    sub_B70694(&System_Func_int__int__TypeInfo);
    sub_B70694(&Method_BattleLogicFunction___c__DisplayClass68_0__BehaveLinkageBuffAsFamily_b__0__);
    sub_B70694(&BattleLogicFunction___c__DisplayClass68_0_TypeInfo);
    byte_435386C = 1;
  }
  v7 = sub_B70764(BattleLogicFunction___c__DisplayClass68_0_TypeInfo);
  BattleLogicFunction___c__DisplayClass68_0___ctor((BattleLogicFunction___c__DisplayClass68_0_o *)v7, 0LL);
  if ( !v7 )
    goto LABEL_13;
  *(_QWORD *)(v7 + 16) = funcTarget;
  sub_B70630((BattleServantConfConponent_o *)(v7 + 16), (System_Int32_array **)funcTarget, v10, v11, v12, v13, v14, v15);
  v16 = *(_QWORD *)(v7 + 16);
  if ( !v16 )
    goto LABEL_13;
  data = this->fields.data;
  if ( !data )
    goto LABEL_13;
  ServantData = (System_Int32_array **)BattleData__getServantData(data, *(_DWORD *)(v16 + 32), 0LL);
  *(_QWORD *)(v7 + 24) = ServantData;
  sub_B70630((BattleServantConfConponent_o *)(v7 + 24), ServantData, v18, v19, v20, v21, v22, v23);
  if ( !*(_QWORD *)(v7 + 24) )
    return;
  v24 = (System_Func_int__int__o *)sub_B70764(System_Func_int__int__TypeInfo);
  System_Func_int__int____ctor(
    v24,
    (Il2CppObject *)v7,
    Method_BattleLogicFunction___c__DisplayClass68_0__BehaveLinkageBuffAsFamily_b__0__,
    (const MethodInfo_29A68EC *)Method_System_Func_int__int___ctor__);
  if ( !buffData )
LABEL_13:
    sub_B7076C(data, v9);
  if ( !BasicHelper__IsNullOrEmpty((System_Collections_ICollection_o *)buffData->fields.addIndividualty, 0LL) )
  {
    v25 = (System_Collections_Generic_IEnumerable_TSource__o *)System_Linq_Enumerable__Select_int__int_(
                                                                 (System_Collections_Generic_IEnumerable_TSource__o *)buffData->fields.addIndividualty,
                                                                 (System_Func_TSource__TResult__o *)v24,
                                                                 (const MethodInfo_1CC244C *)Method_System_Linq_Enumerable_Select_int__int___);
    v26 = System_Linq_Enumerable__ToArray_int_(
            v25,
            (const MethodInfo_1CC85F0 *)Method_System_Linq_Enumerable_ToArray_int___);
    buffData->fields.familyLinkageIds = v26;
    sub_B70630(
      (BattleServantConfConponent_o *)&buffData->fields.familyLinkageIds,
      (System_Int32_array **)v26,
      v27,
      v28,
      v29,
      v30,
      v31,
      v32);
    BattleBuffData_BuffData__onState(buffData, 0x400000, 0LL);
  }
  if ( !BasicHelper__IsNullOrEmpty((System_Collections_ICollection_o *)buffData->fields.linkageTargetIndividualty, 0LL) )
  {
    v33 = (System_Collections_Generic_IEnumerable_TSource__o *)System_Linq_Enumerable__Select_int__int_(
                                                                 (System_Collections_Generic_IEnumerable_TSource__o *)buffData->fields.linkageTargetIndividualty,
                                                                 (System_Func_TSource__TResult__o *)v24,
                                                                 (const MethodInfo_1CC244C *)Method_System_Linq_Enumerable_Select_int__int___);
    v34 = System_Linq_Enumerable__ToArray_int_(
            v33,
            (const MethodInfo_1CC85F0 *)Method_System_Linq_Enumerable_ToArray_int___);
    buffData->fields.linkageTargetIndividualty = v34;
    sub_B70630(
      (BattleServantConfConponent_o *)&buffData->fields.linkageTargetIndividualty,
      (System_Int32_array **)v34,
      v35,
      v36,
      v37,
      v38,
      v39,
      v40);
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
    sub_B7076C(this, funcEnt);
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
  int v10; // w8
  struct BattleLogic_o *logic; // x9
  struct BattleLogic_o *v12; // x9
  int32_t v13; // w22
  BgmEntity_o *BgmMasterFromCostume; // x1
  BattleLogicFunction_o *v15; // x0
  __int64 v16; // x0

  if ( !baseVals )
    goto LABEL_22;
  funcEnt = baseVals->fields.funcEnt;
  if ( !funcEnt )
    goto LABEL_22;
  vals = funcEnt->fields.vals;
  if ( !vals )
    goto LABEL_22;
  v7 = *(_QWORD *)&vals->max_length;
  v9 = this;
  if ( !v7 )
  {
    v10 = 1;
    goto LABEL_10;
  }
  if ( !(_DWORD)v7 )
    goto LABEL_23;
  v10 = vals->m_Items[1];
  if ( (v10 & 0x80000000) == 0 )
  {
LABEL_10:
    this = (BattleLogicFunction_o *)this->fields.data;
    if ( this )
    {
      logic = this[3].fields.logic;
      if ( logic )
      {
        if ( v10 >= SLODWORD(logic->fields.fsm) )
          v10 = 1;
        goto LABEL_14;
      }
    }
LABEL_22:
    sub_B7076C(this, baseVals);
  }
  this = (BattleLogicFunction_o *)this->fields.data;
  if ( !this )
    goto LABEL_22;
  v10 = 1;
LABEL_14:
  v12 = this[3].fields.logic;
  if ( !v12 )
    goto LABEL_22;
  if ( (unsigned int)v10 >= LODWORD(v12->fields.fsm) )
  {
LABEL_23:
    v16 = sub_B70798(this);
    sub_B70738(v16, 0LL);
  }
  v13 = *((_DWORD *)&v12->fields.data + v10);
  if ( v13 == -1 )
  {
    v15 = v9;
    BgmMasterFromCostume = 0LL;
  }
  else
  {
    BgmMasterFromCostume = BattleData__getBgmMasterFromCostume((BattleData_o *)this, v13, 0LL);
    if ( !BgmMasterFromCostume )
      BgmMasterFromCostume = BattleLogicFunction__ChangeBgmSvt(v9, v13, actionData, method);
    v15 = v9;
  }
  BattleLogicFunction__ChangeBgmOrReset(v15, BgmMasterFromCostume, baseVals, method);
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
  if ( (byte_4353899 & 1) == 0 )
  {
    sub_B70694(&Generator_BGMFromChangeBGMFunc_TypeInfo);
    this = (BattleLogicFunction_o *)sub_B70694(&UnityEngine_Object_TypeInfo);
    byte_4353899 = 1;
  }
  data = v6->fields.data;
  if ( !data )
    goto LABEL_17;
  FieldEnvData_k__BackingField = data->fields._FieldEnvData_k__BackingField;
  if ( bgmEnt )
  {
    id = bgmEnt->fields.id;
    v10 = (Generator_BGMFromChangeBGMFunc_o *)sub_B70764(Generator_BGMFromChangeBGMFunc_TypeInfo);
    Generator_BGMFromChangeBGMFunc___ctor(v10, data, id, baseVals, 1, 0LL);
    if ( !FieldEnvData_k__BackingField )
      goto LABEL_17;
    ((void (__fastcall *)(struct BattleFieldEnvironmentData_o *, Generator_BGMFromChangeBGMFunc_o *, __int64, Il2CppMethodPointer))FieldEnvData_k__BackingField->klass->vtable._6_AddBGM.method)(
      FieldEnvData_k__BackingField,
      v10,
      2LL,
      FieldEnvData_k__BackingField->klass->vtable._7_RemoveAfterResetBGM.methodPtr);
  }
  else
  {
    if ( !FieldEnvData_k__BackingField )
      goto LABEL_17;
    ((void (__fastcall *)(struct BattleFieldEnvironmentData_o *, void *, DataVals_o *, const MethodInfo *))FieldEnvData_k__BackingField->klass->vtable._7_RemoveAfterResetBGM.method)(
      data->fields._FieldEnvData_k__BackingField,
      FieldEnvData_k__BackingField->klass[1]._1.image,
      baseVals,
      method);
  }
  logic = (UnityEngine_Object_o *)v6->fields.logic;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
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
LABEL_17:
    sub_B7076C(this, bgmEnt);
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
  __int64 v8; // x22
  __int64 v9; // x22
  DataManager_o *MasterData_WarQuestSelectionMaster; // x0
  struct BattleSkillInfoData_o *skillInfo; // x8
  SkillLvMaster_o *v12; // x22
  struct BattleSkillInfoData_o *v13; // x8
  SkillLvEntity_o *v14; // x22
  DataMasterBase_WarMaster__WarEntity__int__o *v15; // x19
  BattleData_o *data; // x8
  DataManager_o *v17; // x20
  int datalist; // w8
  System_Int32_array *v19; // x21
  unsigned int v20; // w24
  __int64 v21; // x8
  __int64 v22; // x8
  int32_t v23; // w22
  int64_t v24; // x23
  __int64 v25; // x8
  __int64 v26; // x9
  WarEntity_o *entity; // [xsp+8h] [xbp-58h] BYREF

  if ( (byte_4353898 & 1) == 0 )
  {
    sub_B70694(&Method_System_Array_IndexOf_int___);
    sub_B70694(&CondType_TypeInfo);
    sub_B70694(&Method_DataManager_GetMasterData_BgmMaster___);
    sub_B70694(&Method_DataManager_GetMasterData_SkillLvMaster___);
    sub_B70694(&Method_DataMasterBase_BgmMaster__BgmEntity__int__TryGetEntity__);
    sub_B70694(&Method_System_Collections_Generic_List_SkillLvEntity_SvtChangeBgm__get_Count__);
    sub_B70694(&Method_System_Collections_Generic_List_SkillLvEntity_SvtChangeBgm__get_Item__);
    sub_B70694(&Method_SingletonMonoBehaviour_DataManager__getInstance__);
    sub_B70694(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_4353898 = 1;
  }
  result = 0LL;
  entity = 0LL;
  if ( uniqueID != -1 && actionData )
  {
    v8 = *((_QWORD *)Method_SingletonMonoBehaviour_DataManager__getInstance__ + 3);
    if ( (*(_BYTE *)(v8 + 306) & 1) == 0 )
      sub_B08394(*((_QWORD *)Method_SingletonMonoBehaviour_DataManager__getInstance__ + 3));
    v9 = **(_QWORD **)(v8 + 192);
    if ( (*(_BYTE *)(v9 + 306) & 1) == 0 )
      sub_B08394(v9);
    MasterData_WarQuestSelectionMaster = **(DataManager_o ***)(v9 + 184);
    if ( !MasterData_WarQuestSelectionMaster )
      goto LABEL_42;
    MasterData_WarQuestSelectionMaster = (DataManager_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                            MasterData_WarQuestSelectionMaster,
                                                            (const MethodInfo_1CA35A0 *)Method_DataManager_GetMasterData_SkillLvMaster___);
    skillInfo = actionData->fields.skillInfo;
    if ( !skillInfo )
      goto LABEL_42;
    v12 = (SkillLvMaster_o *)MasterData_WarQuestSelectionMaster;
    MasterData_WarQuestSelectionMaster = (DataManager_o *)((__int64 (__fastcall *)(struct BattleSkillInfoData_o *, Il2CppMethodPointer))skillInfo->klass->vtable._5_get_skillId.method)(
                                                            actionData->fields.skillInfo,
                                                            skillInfo->klass->vtable._6_get_IndividualityArray.methodPtr);
    v13 = actionData->fields.skillInfo;
    if ( !v13 )
      goto LABEL_42;
    if ( !v12 )
      goto LABEL_42;
    v14 = SkillLvMaster__GetEntity(v12, (int32_t)MasterData_WarQuestSelectionMaster, v13->fields.skilllv, 0LL);
    MasterData_WarQuestSelectionMaster = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2CE992C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !MasterData_WarQuestSelectionMaster )
      goto LABEL_42;
    MasterData_WarQuestSelectionMaster = (DataManager_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                            MasterData_WarQuestSelectionMaster,
                                                            (const MethodInfo_1CA35A0 *)Method_DataManager_GetMasterData_BgmMaster___);
    if ( !v14 )
      goto LABEL_42;
    v15 = (DataMasterBase_WarMaster__WarEntity__int__o *)MasterData_WarQuestSelectionMaster;
    MasterData_WarQuestSelectionMaster = (DataManager_o *)SkillLvEntity__GetSvtChangeBgm(v14, 0LL);
    data = this->fields.data;
    if ( !data )
      goto LABEL_42;
    v17 = MasterData_WarQuestSelectionMaster;
    MasterData_WarQuestSelectionMaster = (DataManager_o *)BattleData__getPlayerServantData(data, uniqueID, 0LL);
    if ( !MasterData_WarQuestSelectionMaster )
      goto LABEL_42;
    MasterData_WarQuestSelectionMaster = (DataManager_o *)BattleServantData__getIndividualities(
                                                            (BattleServantData_o *)MasterData_WarQuestSelectionMaster,
                                                            0LL,
                                                            0LL);
    if ( !v17 )
      goto LABEL_42;
    datalist = (int)v17->fields.datalist;
    if ( datalist >= 1 )
    {
      v19 = (System_Int32_array *)MasterData_WarQuestSelectionMaster;
      v20 = 0;
      while ( 1 )
      {
        if ( datalist <= v20 )
          System_ThrowHelper__ThrowArgumentOutOfRangeException_41939488(0LL);
        v21 = *(_QWORD *)(*(_QWORD *)&v17->fields.m_CachedPtr + 8LL * (int)v20 + 32);
        if ( !v21 )
          break;
        MasterData_WarQuestSelectionMaster = (DataManager_o *)System_Array__IndexOf_int_(
                                                                v19,
                                                                *(_DWORD *)(v21 + 16),
                                                                (const MethodInfo_1FCBFE4 *)Method_System_Array_IndexOf_int___);
        if ( (_DWORD)MasterData_WarQuestSelectionMaster != -1 )
        {
          if ( LODWORD(v17->fields.datalist) <= v20 )
            System_ThrowHelper__ThrowArgumentOutOfRangeException_41939488(0LL);
          v22 = *(_QWORD *)(*(_QWORD *)&v17->fields.m_CachedPtr + 8LL * (int)v20 + 32);
          if ( !v22 )
            break;
          v23 = *(_DWORD *)(v22 + 20);
          if ( LODWORD(v17->fields.datalist) <= v20 )
            System_ThrowHelper__ThrowArgumentOutOfRangeException_41939488(0LL);
          v24 = *(int *)(v22 + 24);
          if ( (BYTE3(CondType_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !CondType_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(CondType_TypeInfo);
          MasterData_WarQuestSelectionMaster = (DataManager_o *)CondType__IsOpen(46, v23, v24, 0, 0LL);
          if ( LODWORD(v17->fields.datalist) <= v20 )
            System_ThrowHelper__ThrowArgumentOutOfRangeException_41939488(0LL);
          v25 = *(_QWORD *)(*(_QWORD *)&v17->fields.m_CachedPtr + 8LL * (int)v20 + 32);
          if ( !v25 || !v15 )
            break;
          v26 = 28LL;
          if ( ((unsigned __int8)MasterData_WarQuestSelectionMaster & 1) != 0 )
            v26 = 32LL;
          MasterData_WarQuestSelectionMaster = (DataManager_o *)DataMasterBase_WarMaster__WarEntity__int___TryGetEntity(
                                                                  v15,
                                                                  &entity,
                                                                  *(_DWORD *)(v25 + v26),
                                                                  (const MethodInfo_21C049C *)Method_DataMasterBase_BgmMaster__BgmEntity__int__TryGetEntity__);
          if ( ((unsigned __int8)MasterData_WarQuestSelectionMaster & 1) != 0 )
            return (BgmEntity_o *)entity;
        }
        datalist = (int)v17->fields.datalist;
        if ( (int)++v20 >= datalist )
          return (BgmEntity_o *)entity;
      }
LABEL_42:
      sub_B7076C(MasterData_WarQuestSelectionMaster, *(_QWORD *)&uniqueID);
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

  if ( (byte_43538A0 & 1) == 0 )
  {
    sub_B70694(&BattleActionData_MasterBuffData_TypeInfo);
    byte_43538A0 = 1;
  }
  v12 = (BattleActionData_MasterBuffData_o *)sub_B70764(BattleActionData_MasterBuffData_TypeInfo);
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
    sub_B7076C(FunctionObject, v16);
  BattleActionData__setBuffData(action, FunctionObject, baseVals, 0LL);
}


void __fastcall BattleLogicFunction__DebugLog(
        BattleLogicFunction_o *this,
        System_String_o *str,
        const MethodInfo *method)
{
  ;
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
  __int64 v15; // x0

  v4 = this;
  if ( (byte_43538A2 & 1) == 0 )
  {
    sub_B70694(&Method_System_Collections_Generic_Dictionary_int__int__Add__);
    sub_B70694(&Method_System_Collections_Generic_Dictionary_int__int__ContainsKey__);
    sub_B70694(&Method_System_Collections_Generic_Dictionary_int__int__get_Item__);
    this = (BattleLogicFunction_o *)sub_B70694(&Method_System_Collections_Generic_Dictionary_int__int__set_Item__);
    byte_43538A2 = 1;
  }
  if ( BattleLogicFunction__CanCheckFuncBattleValue(this, funcEnt, method) )
  {
    data = v4->fields.data;
    if ( !data
      || (data = (BattleData_o *)BattleData__GetBattleValueDict(data, 0LL), !funcEnt)
      || (vals = funcEnt->fields.vals) == 0LL )
    {
LABEL_16:
      sub_B7076C(data, v5);
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
      {
        v15 = sub_B70798(data);
        sub_B70738(v15, 0LL);
      }
      if ( v8 )
      {
        v12 = vals->m_Items[v11 + 1];
        v13 = vals->m_Items[v9 + 1];
        if ( System_Collections_Generic_Dictionary_int__int___ContainsKey(
               v8,
               v12,
               (const MethodInfo_2FBB3C4 *)Method_System_Collections_Generic_Dictionary_int__int__ContainsKey__) )
        {
          Item = System_Collections_Generic_Dictionary_int__int___get_Item(
                   v8,
                   v12,
                   (const MethodInfo_2FBB0A0 *)Method_System_Collections_Generic_Dictionary_int__int__get_Item__);
          System_Collections_Generic_Dictionary_int__int___set_Item(
            v8,
            v12,
            Item + v13,
            (const MethodInfo_2FBB138 *)Method_System_Collections_Generic_Dictionary_int__int__set_Item__);
        }
        else
        {
          System_Collections_Generic_Dictionary_int__int___Add(
            v8,
            v12,
            v13,
            (const MethodInfo_2FBB160 *)Method_System_Collections_Generic_Dictionary_int__int__Add__);
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
        const MethodInfo *method)
{
  BattleLogicFunction_o *v6; // x19
  struct BattleData_o *data; // x8
  UnityEngine_Object_o *logic; // x21
  struct BattleLogicFunction_FunctionArgument_o *externalArg; // x8

  v6 = this;
  if ( (byte_435389B & 1) == 0 )
  {
    this = (BattleLogicFunction_o *)sub_B70694(&UnityEngine_Object_TypeInfo);
    byte_435389B = 1;
  }
  data = v6->fields.data;
  if ( !data )
    goto LABEL_16;
  this = (BattleLogicFunction_o *)data->fields._FieldEnvData_k__BackingField;
  if ( !this )
    goto LABEL_16;
  (*(void (__fastcall **)(BattleLogicFunction_o *, Generator_BGM_o *, __int64, void *))&this->klass[1]._1.byval_arg.bits)(
    this,
    bgmGenerator,
    2LL,
    this->klass[1]._1.this_arg.data);
  logic = (UnityEngine_Object_o *)v6->fields.logic;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( UnityEngine_Object__op_Inequality(logic, 0LL, 0LL) )
  {
    this = (BattleLogicFunction_o *)v6->fields.logic;
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
          this = (BattleLogicFunction_o *)v6->fields.logic;
          if ( this )
          {
            BattleLogic__PlayCurrentBgm((BattleLogic_o *)this, 0.0, 0LL);
            return;
          }
        }
      }
    }
LABEL_16:
    sub_B7076C(this, args);
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
    sub_B7076C(this, *(_QWORD *)&faceId);
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
  struct BattleData_o *v15; // x8
  struct BattleSkillInfoData_o *v16; // x8
  BattleLogicFunction_o *v17; // x25
  BattleLogicFunction_OnlyCheckFuncSideEffectFunctionArgument_o *v18; // x23
  struct BattleLogic_o *logic; // x8
  BattleLogicSkill_o *logicSkill; // x26
  System_String_array **v21; // x2
  System_String_array **v22; // x3
  System_Boolean_array **v23; // x4
  System_Int32_array **v24; // x5
  System_Int32_array *v25; // x6
  System_Int32_array *v26; // x7
  int v27; // w8
  BattleLogicFunction_o *v28; // x24
  bool v29; // w26
  unsigned int v30; // w27
  __int64 v31; // x25
  struct BattleLogic_o *v32; // x8
  BattleActionData_o *v33; // x25
  BattleLogicFunction_FuncSideEffectFunctionArgument_o *FuncSideEffectArg; // x0
  __int64 v35; // x0
  BattleActionData_o *baseActionData; // [xsp+8h] [xbp-58h] BYREF

  v8 = this;
  if ( (byte_435389F & 1) == 0 )
  {
    sub_B70694(&BattleSkillInfoData_TypeInfo);
    sub_B70694(&int___TypeInfo);
    this = (BattleLogicFunction_o *)sub_B70694(&BattleLogicFunction_OnlyCheckFuncSideEffectFunctionArgument_TypeInfo);
    byte_435389F = 1;
  }
  baseActionData = 0LL;
  data = v8->fields.data;
  if ( !data )
    goto LABEL_34;
  if ( !data->fields._lastUsedPlayerSkillInfo_k__BackingField )
    return;
  v10 = (BattleSkillInfoData_o *)sub_B70764(BattleSkillInfoData_TypeInfo);
  BattleSkillInfoData___ctor(v10, 0LL);
  if ( !actionData )
    goto LABEL_34;
  if ( !v10 )
    goto LABEL_34;
  v10->fields.svtUniqueId = actionData->fields.actorId;
  v11 = v8->fields.data;
  if ( !v11 )
    goto LABEL_34;
  this = (BattleLogicFunction_o *)v11->fields._lastUsedPlayerSkillInfo_k__BackingField;
  if ( !this )
    goto LABEL_34;
  v12 = ((__int64 (__fastcall *)(BattleLogicFunction_o *, void *))this->klass[1]._1.namespaze)(
          this,
          this->klass[1]._1.byval_arg.data);
  this = (BattleLogicFunction_o *)((__int64 (__fastcall *)(BattleSkillInfoData_o *, _QWORD, Il2CppMethodPointer))v10->klass->vtable._4_set_skillId.method)(
                                    v10,
                                    v12,
                                    v10->klass->vtable._5_get_skillId.methodPtr);
  v13 = v8->fields.data;
  if ( !v13 )
    goto LABEL_34;
  lastUsedPlayerSkillInfo_k__BackingField = v13->fields._lastUsedPlayerSkillInfo_k__BackingField;
  if ( !lastUsedPlayerSkillInfo_k__BackingField )
    goto LABEL_34;
  v10->fields.skilllv = lastUsedPlayerSkillInfo_k__BackingField->fields.skilllv;
  v15 = v8->fields.data;
  if ( !v15 )
    goto LABEL_34;
  v16 = v15->fields._lastUsedPlayerSkillInfo_k__BackingField;
  if ( !v16 )
    goto LABEL_34;
  BattleSkillInfoData__UpdateSelectAddIndex(v10, v16->fields._SelectAddIndex_k__BackingField, 0LL);
  if ( !args )
    goto LABEL_34;
  this = (BattleLogicFunction_o *)BattleLogicFunction_ProcListInArgs__get_FuncSideEffectArg(args, 0LL);
  v17 = this;
  if ( this )
  {
    v18 = (BattleLogicFunction_OnlyCheckFuncSideEffectFunctionArgument_o *)sub_B70764(BattleLogicFunction_OnlyCheckFuncSideEffectFunctionArgument_TypeInfo);
    BattleLogicFunction_OnlyCheckFuncSideEffectFunctionArgument___ctor(v18, 0LL);
  }
  else
  {
    v18 = 0LL;
  }
  logic = v8->fields.logic;
  if ( !logic )
    goto LABEL_34;
  logicSkill = logic->fields.logicSkill;
  this = (BattleLogicFunction_o *)sub_B706AC(int___TypeInfo, 1LL);
  if ( !this )
    goto LABEL_34;
  if ( !LODWORD(this->fields.logic) )
    goto LABEL_35;
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
                                          0LL)) == 0LL )
  {
LABEL_34:
    sub_B7076C(this, actionData);
  }
  v27 = (int)this->fields.logic;
  v28 = this;
  v29 = v17 != 0LL;
  if ( v27 >= 1 )
  {
    v30 = 0;
    while ( v30 < v27 )
    {
      v31 = *((_QWORD *)&v28->fields.logictarget + (int)v30);
      if ( !v31 )
        goto LABEL_34;
      *(_QWORD *)(v31 + 176) = v18;
      *(_BYTE *)(v31 + 169) = v29;
      sub_B70630((BattleServantConfConponent_o *)(v31 + 176), (System_Int32_array **)v18, v21, v22, v23, v24, v25, v26);
      v32 = v8->fields.logic;
      if ( !v32 )
        goto LABEL_34;
      this = (BattleLogicFunction_o *)v32->fields.logicSkill;
      if ( !this )
        goto LABEL_34;
      v33 = BattleLogicSkill__createSkillData_31281204(
              (BattleLogicSkill_o *)this,
              (BattleLogicTask_o *)v31,
              1,
              baseVals,
              &baseActionData,
              0LL);
      BattleActionData__addAction(actionData, v33, 0LL);
      if ( v33 )
        actionData->fields.isSuccessSkillCopyFunction = 1;
      v27 = (int)v28->fields.logic;
      if ( (int)++v30 >= v27 )
        goto LABEL_31;
    }
LABEL_35:
    v35 = sub_B70798(this);
    sub_B70738(v35, 0LL);
  }
LABEL_31:
  FuncSideEffectArg = BattleLogicFunction_ProcListInArgs__get_FuncSideEffectArg(args, 0LL);
  if ( FuncSideEffectArg )
    BattleLogicFunction_FuncSideEffectFunctionArgument__AddTarget_24190636(
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
  if ( (byte_435387D & 1) == 0 )
  {
    sub_B70694(&Method_BasicHelper_IndexValue_int____69237232);
    sub_B70694(&BattleActionData_TypeInfo);
    sub_B70694(&MoveToSubMemberWaveTurnEvent_TypeInfo);
    this = (BattleLogicFunction_o *)sub_B70694(&RestockServantLogicByMoveToSubMember_TypeInfo);
    byte_435387D = 1;
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
  BattleData__SubBuffFromPT_19008056((BattleData_o *)this, targetServantData, 0LL);
  this = (BattleLogicFunction_o *)v9->fields.data;
  if ( !this )
    goto LABEL_13;
  BattleData__SubBuffExitSvt((BattleData_o *)this, targetServantData, 0LL);
  this = (BattleLogicFunction_o *)v9->fields.data;
  if ( !this )
    goto LABEL_13;
  targetServantData->fields.deckIndex = BattleData__GetSubServantUsableDeckIndex((BattleData_o *)this, isEnemy, 0LL);
  data = v9->fields.data;
  v13 = (MoveToSubMemberWaveTurnEvent_o *)sub_B70764(MoveToSubMemberWaveTurnEvent_TypeInfo);
  MoveToSubMemberWaveTurnEvent___ctor(v13, data, 0LL);
  BattleServantData__RegisterWaveTurnEvent(targetServantData, (ServantWaveTurnEvent_o *)v13, 0LL);
  if ( !funcEnt )
    goto LABEL_13;
  v14 = isEnemy;
  v15 = BasicHelper__IndexValue_int_(
          funcEnt->fields.vals,
          0,
          0,
          (const MethodInfo_1BDECF8 *)Method_BasicHelper_IndexValue_int____69237232);
  uniqueId = targetServantData->fields.uniqueId;
  v17 = v15;
  v18 = (RestockServantLogicByMoveToSubMember_o *)sub_B70764(RestockServantLogicByMoveToSubMember_TypeInfo);
  RestockServantLogicByMoveToSubMember___ctor(v18, ServantIndex, v14, v17, uniqueId, 0LL);
  this = (BattleLogicFunction_o *)v9->fields.data;
  if ( !this
    || (BattleData__AppendRestockServantLogic((BattleData_o *)this, (RestockServantLogic_o *)v18, 0LL),
        v19 = (BattleActionData_o *)sub_B70764(BattleActionData_TypeInfo),
        BattleActionData___ctor(v19, 0LL),
        !v19) )
  {
LABEL_13:
    sub_B7076C(this, targetServantData);
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
  float x; // s8
  float y; // s9
  float z; // s10
  UnityEngine_Object_o *logic; // x21
  struct BattleLogicFunction_FunctionArgument_o *externalArg; // x8
  UnityEngine_Vector3_o zero; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v16; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v17; // 0:s3.4,4:s4.4,8:s5.4

  v6 = this;
  if ( (byte_435389C & 1) == 0 )
  {
    this = (BattleLogicFunction_o *)sub_B70694(&UnityEngine_Object_TypeInfo);
    byte_435389C = 1;
  }
  data = v6->fields.data;
  if ( !data )
    goto LABEL_18;
  this = (BattleLogicFunction_o *)data->fields._FieldEnvData_k__BackingField;
  if ( !this )
    goto LABEL_18;
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
      zero = UnityEngine_Vector3__get_zero(0LL);
      x = zero.fields.x;
      y = zero.fields.y;
      z = zero.fields.z;
      v17 = UnityEngine_Vector3__get_zero(0LL);
      v16.fields.x = x;
      v16.fields.y = y;
      v16.fields.z = z;
      BattlePerformance__ChangeBg(perf, v16, v17, 0, 0, 0LL, 0LL);
    }
  }
  logic = (UnityEngine_Object_o *)v6->fields.logic;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
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
LABEL_18:
    sub_B7076C(this, args);
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
  __int64 v12; // x0

  v4 = this;
  if ( (byte_43538A1 & 1) == 0 )
  {
    this = (BattleLogicFunction_o *)sub_B70694(&Method_System_Collections_Generic_Dictionary_int__int__set_Item__);
    byte_43538A1 = 1;
  }
  if ( BattleLogicFunction__CanCheckFuncBattleValue(this, funcEnt, method) )
  {
    data = v4->fields.data;
    if ( !data
      || (data = (BattleData_o *)BattleData__GetBattleValueDict(data, 0LL), !funcEnt)
      || (vals = funcEnt->fields.vals) == 0LL )
    {
LABEL_13:
      sub_B7076C(data, v5);
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
      {
        v12 = sub_B70798(data);
        sub_B70738(v12, 0LL);
      }
      if ( v8 )
      {
        System_Collections_Generic_Dictionary_int__int___set_Item(
          v8,
          vals->m_Items[v11 + 1],
          vals->m_Items[v9 + 1],
          (const MethodInfo_2FBB138 *)Method_System_Collections_Generic_Dictionary_int__int__set_Item__);
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
  struct BattleLogicFunctionProcess_FunctionUnitCheck_o *funcUnit_k__BackingField; // x20
  DataVals_o *dataVals_k__BackingField; // x20
  int32_t targetId_k__BackingField; // w25
  FunctionEntity_o *funcEnt; // x27
  int32_t v13; // w24
  Il2CppClass *klass; // x8
  BattleActionData_BuffData_o *v15; // x26
  struct BattleData_o *data; // x22
  int rootfsm; // w28
  _BOOL8 IsCommandSideEffect; // x0
  const MethodInfo *v19; // x6
  const MethodInfo *v20; // x7
  bool v21; // w4
  BattleActionData_BuffData_o *FunctionObject; // x23
  System_Func_WarBoardManager_WarBoardOnboardSkillTarget__WarBoardPieceData__o *v23; // x24
  System_Collections_Generic_IEnumerable_TSource__o *v24; // x0
  System_String_array **v25; // x2
  System_String_array **v26; // x3
  System_Boolean_array **v27; // x4
  System_Int32_array **v28; // x5
  System_Int32_array *v29; // x6
  System_Int32_array *v30; // x7
  BattleLogicFunction___c_c *v31; // x0
  struct BattleLogicFunction___c_StaticFields *static_fields; // x8
  System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *_9__122_1; // x21
  Il2CppObject *v34; // x24
  struct BattleLogicFunction___c_StaticFields *v35; // x0
  System_String_array **v36; // x2
  System_String_array **v37; // x3
  System_Boolean_array **v38; // x4
  System_Int32_array **v39; // x5
  System_Int32_array *v40; // x6
  System_Int32_array *v41; // x7
  BattleActionEffect_UpdateAllInfo_o *v42; // x21

  v8 = (Il2CppObject *)this;
  if ( (byte_435389E & 1) == 0 )
  {
    sub_B70694(&Method_BasicHelper_Any_BattleBuffData_BuffData___);
    sub_B70694(&Method_BattleLogicFunction__FunctionSubFieldBuff_b__122_0__);
    sub_B70694(&Method_System_Linq_Enumerable_Select_BattleBuffData_BuffData__BattleBuffData_BuffData___);
    sub_B70694(&Method_System_Linq_Enumerable_ToList_BattleBuffData_BuffData___);
    sub_B70694(&Method_System_Func_BattleBuffData_BuffData__bool___ctor__);
    sub_B70694(&Method_System_Func_BattleBuffData_BuffData__BattleBuffData_BuffData___ctor__);
    sub_B70694(&System_Func_BattleBuffData_BuffData__bool__TypeInfo);
    sub_B70694(&System_Func_BattleBuffData_BuffData__BattleBuffData_BuffData__TypeInfo);
    sub_B70694(&Method_System_Collections_Generic_List_BattleBuffData_BuffData__get_Count__);
    sub_B70694(&Method_BattleLogicFunction___c__FunctionSubFieldBuff_b__122_1__);
    sub_B70694(&BattleLogicFunction___c_TypeInfo);
    this = (BattleLogicFunction_o *)sub_B70694(&BattleActionEffect_UpdateAllInfo_TypeInfo);
    byte_435389E = 1;
  }
  if ( !funcTarget )
    goto LABEL_28;
  funcUnit_k__BackingField = funcTarget->fields._funcUnit_k__BackingField;
  if ( !funcUnit_k__BackingField )
    goto LABEL_28;
  this = (BattleLogicFunction_o *)BattleLogicFunctionProcess_FunctionUnitCheck__get_FuncIndex(
                                    funcTarget->fields._funcUnit_k__BackingField,
                                    0LL);
  dataVals_k__BackingField = funcUnit_k__BackingField->fields._dataVals_k__BackingField;
  if ( !dataVals_k__BackingField )
    goto LABEL_28;
  targetId_k__BackingField = funcTarget->fields._targetId_k__BackingField;
  funcEnt = dataVals_k__BackingField->fields.funcEnt;
  v13 = (int)this;
  this = (BattleLogicFunction_o *)((__int64 (__fastcall *)(BattleLogicFunctionProcess_FunctionTargetCheck_o *, Il2CppMethodPointer))funcTarget->klass->vtable._7_MakeActionBuffData.method)(
                                    funcTarget,
                                    funcTarget->klass->vtable._8_AddBuff.methodPtr);
  klass = v8[1].klass;
  if ( !klass )
    goto LABEL_28;
  if ( !funcEnt )
    goto LABEL_28;
  v15 = (BattleActionData_BuffData_o *)this;
  this = (BattleLogicFunction_o *)klass->_1.nestedTypes;
  if ( !this )
    goto LABEL_28;
  this = (BattleLogicFunction_o *)BattleFieldEnvironmentData__SubBuffFromIndividuality(
                                    (BattleFieldEnvironmentData_o *)this,
                                    funcEnt->fields.vals,
                                    dataVals_k__BackingField,
                                    0LL);
  if ( !this )
    goto LABEL_28;
  data = this->fields.data;
  if ( !data || !args )
    goto LABEL_28;
  rootfsm = (int)data->fields.rootfsm;
  IsCommandSideEffect = BattleLogicFunction_ProcListInArgs__get_IsCommandSideEffect(args, 0LL);
  v21 = IsCommandSideEffect;
  if ( rootfsm > 0 )
  {
    FunctionObject = BattleLogicFunction__getFunctionObject(
                       (BattleLogicFunction_o *)IsCommandSideEffect,
                       funcEnt,
                       targetId_k__BackingField,
                       v13,
                       v21,
                       v15,
                       v19);
    v23 = (System_Func_WarBoardManager_WarBoardOnboardSkillTarget__WarBoardPieceData__o *)sub_B70764(System_Func_BattleBuffData_BuffData__BattleBuffData_BuffData__TypeInfo);
    System_Func_WarBoardManager_WarBoardOnboardSkillTarget__WarBoardPieceData____ctor(
      v23,
      v8,
      Method_BattleLogicFunction__FunctionSubFieldBuff_b__122_0__,
      (const MethodInfo_29ADCC4 *)Method_System_Func_BattleBuffData_BuffData__BattleBuffData_BuffData___ctor__);
    v24 = (System_Collections_Generic_IEnumerable_TSource__o *)System_Linq_Enumerable__Select_WarBoardManager_WarBoardOnboardSkillTarget__WarBoardPieceData_(
                                                                 (System_Collections_Generic_IEnumerable_TSource__o *)data,
                                                                 (System_Func_TSource__TResult__o *)v23,
                                                                 (const MethodInfo_1CC4218 *)Method_System_Linq_Enumerable_Select_BattleBuffData_BuffData__BattleBuffData_BuffData___);
    this = (BattleLogicFunction_o *)System_Linq_Enumerable__ToList_WarBoardManager_WarBoardOnboardSkillTarget_(
                                      v24,
                                      (const MethodInfo_1CCB668 *)Method_System_Linq_Enumerable_ToList_BattleBuffData_BuffData___);
    if ( FunctionObject )
    {
      FunctionObject->fields.removeBuffList = (struct System_Collections_Generic_List_BattleBuffData_BuffData__o *)this;
      sub_B70630(
        (BattleServantConfConponent_o *)&FunctionObject->fields.removeBuffList,
        (System_Int32_array **)this,
        v25,
        v26,
        v27,
        v28,
        v29,
        v30);
      v31 = BattleLogicFunction___c_TypeInfo;
      if ( (BYTE3(BattleLogicFunction___c_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !BattleLogicFunction___c_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(BattleLogicFunction___c_TypeInfo);
        v31 = BattleLogicFunction___c_TypeInfo;
      }
      static_fields = v31->static_fields;
      _9__122_1 = (System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *)static_fields->__9__122_1;
      if ( !_9__122_1 )
      {
        if ( (BYTE3(v31->vtable._0_Equals.methodPtr) & 4) != 0 && !v31->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(v31);
          static_fields = BattleLogicFunction___c_TypeInfo->static_fields;
        }
        v34 = (Il2CppObject *)static_fields->__9;
        _9__122_1 = (System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *)sub_B70764(System_Func_BattleBuffData_BuffData__bool__TypeInfo);
        System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool____ctor(
          _9__122_1,
          v34,
          Method_BattleLogicFunction___c__FunctionSubFieldBuff_b__122_1__,
          (const MethodInfo_29AC578 *)Method_System_Func_BattleBuffData_BuffData__bool___ctor__);
        v35 = BattleLogicFunction___c_TypeInfo->static_fields;
        v35->__9__122_1 = (struct System_Func_BattleBuffData_BuffData__bool__o *)_9__122_1;
        sub_B70630(
          (BattleServantConfConponent_o *)&v35->__9__122_1,
          (System_Int32_array **)_9__122_1,
          v36,
          v37,
          v38,
          v39,
          v40,
          v41);
      }
      this = (BattleLogicFunction_o *)BasicHelper__Any_WarBoardData_SquareRangeSearch_(
                                        (System_Collections_Generic_List_T__o *)data,
                                        (System_Func_T__bool__o *)_9__122_1,
                                        (const MethodInfo_1BDCA88 *)Method_BasicHelper_Any_BattleBuffData_BuffData___);
      if ( ((unsigned __int8)this & 1) != 0 )
      {
        v42 = (BattleActionEffect_UpdateAllInfo_o *)sub_B70764(BattleActionEffect_UpdateAllInfo_TypeInfo);
        BattleActionEffect_UpdateAllInfo___ctor(v42, 0LL);
        BattleActionData_BuffData__SetActionEffectProc(FunctionObject, (BattleActionEffect_Base_o *)v42, 0LL);
      }
      if ( mainAction )
      {
        BattleActionData__setBuffData(mainAction, FunctionObject, dataVals_k__BackingField, 0LL);
        return;
      }
    }
LABEL_28:
    sub_B7076C(this, args);
  }
  this = (BattleLogicFunction_o *)BattleLogicFunction__getNoEffectObject(
                                    (BattleLogicFunction_o *)v8,
                                    targetId_k__BackingField,
                                    v13,
                                    dataVals_k__BackingField,
                                    v21,
                                    0LL,
                                    v15,
                                    v20);
  if ( !mainAction )
    goto LABEL_28;
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
  struct BattleLogicFunctionProcess_FunctionUnitCheck_o *funcUnit_k__BackingField; // x8
  DataVals_o *dataVals_k__BackingField; // x24
  bool isParam; // w0
  const MethodInfo *v14; // x5
  BattleBuffData_FieldChangeData_o *tamamocatTreasureDeviceIds; // x22
  struct BattleData_o *data; // x8
  Generator_BGFromFieldChangeBGBuff_o *v17; // x21
  const MethodInfo *v18; // x3
  BattleData_o *v19; // x21
  Generator_BGMFromFieldChangeBGBuff_o *v20; // x23
  const MethodInfo *v21; // x3

  v10 = this;
  if ( (byte_435389D & 1) == 0 )
  {
    sub_B70694(&Generator_BGFromFieldChangeBGBuff_TypeInfo);
    this = (BattleLogicFunction_o *)sub_B70694(&Generator_BGMFromFieldChangeBGBuff_TypeInfo);
    byte_435389D = 1;
  }
  if ( !funcTarget )
    goto LABEL_17;
  funcUnit_k__BackingField = funcTarget->fields._funcUnit_k__BackingField;
  if ( !funcUnit_k__BackingField )
    goto LABEL_17;
  dataVals_k__BackingField = funcUnit_k__BackingField->fields._dataVals_k__BackingField;
  if ( !dataVals_k__BackingField )
    goto LABEL_17;
  isParam = DataVals__isParam(funcUnit_k__BackingField->fields._dataVals_k__BackingField, 101, 0LL);
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
        dataVals_k__BackingField,
        data->fields._FieldEnvData_k__BackingField,
        0LL);
      return;
    }
LABEL_17:
    sub_B7076C(this, args);
  }
  if ( !tamamocatTreasureDeviceIds )
    goto LABEL_17;
  if ( tamamocatTreasureDeviceIds->fields.bgId >= 1 )
  {
    v17 = (Generator_BGFromFieldChangeBGBuff_o *)sub_B70764(Generator_BGFromFieldChangeBGBuff_TypeInfo);
    Generator_BGFromFieldChangeBGBuff___ctor(v17, tamamocatTreasureDeviceIds, 0LL);
    BattleLogicFunction__FunctionQuickChangeBG(v10, args, (Generator_Background_o *)v17, v18);
  }
  if ( tamamocatTreasureDeviceIds->fields.bgmId >= 1 )
  {
    v19 = v10->fields.data;
    v20 = (Generator_BGMFromFieldChangeBGBuff_o *)sub_B70764(Generator_BGMFromFieldChangeBGBuff_TypeInfo);
    Generator_BGMFromFieldChangeBGBuff___ctor(v20, v19, tamamocatTreasureDeviceIds, 0LL);
    BattleLogicFunction__FunctionChangeBgm(v10, args, (Generator_BGM_o *)v20, v21);
  }
}


void __fastcall BattleLogicFunction__FunctionUpdateEntryMaxCountEachTurn(
        BattleLogicFunction_o *this,
        DataVals_o *baseVals,
        const MethodInfo *method)
{
  struct BattleData_o *data; // x19

  if ( !baseVals || (data = this->fields.data, this = (BattleLogicFunction_o *)DataVals__GetValue(baseVals, 0LL), !data) )
    sub_B7076C(this, baseVals);
  data->fields._EnemyEntryMaxCountEachTurn_k__BackingField = (int)this;
}


void __fastcall BattleLogicFunction__FunctionUpdateEntryPositions(
        BattleLogicFunction_o *this,
        DataVals_o *baseVals,
        const MethodInfo *method)
{
  BattleLogicFunction_o *v4; // x19

  if ( !baseVals
    || (v4 = this, this = (BattleLogicFunction_o *)DataVals__GetParamArray(baseVals, 81, 0LL), !v4->fields.data)
    || (BattleData__UpdateTargetPosEnemyAppearValid(v4->fields.data, (System_Int32_array *)this, 1, 0LL),
        this = (BattleLogicFunction_o *)DataVals__GetParamArray(baseVals, 82, 0LL),
        !v4->fields.data) )
  {
    sub_B7076C(this, baseVals);
  }
  BattleData__UpdateTargetPosEnemyAppearValid(v4->fields.data, (System_Int32_array *)this, 0, 0LL);
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

  if ( (byte_4353872 & 1) == 0 )
  {
    this = (BattleLogicFunction_o *)sub_B70694(&System_Math_TypeInfo);
    byte_4353872 = 1;
  }
  if ( !dataVals )
    goto LABEL_11;
  this = (BattleLogicFunction_o *)DataVals__isParam(dataVals, 115, 0LL);
  if ( ((unsigned __int8)this & 1) == 0 )
    return healPoint;
  if ( !targetSvtData )
LABEL_11:
    sub_B7076C(this, dataVals);
  MaxHp = BattleServantData__getMaxHp(targetSvtData, 0LL);
  v9 = ((__int64 (__fastcall *)(BattleServantData_o *, Il2CppMethodPointer))targetSvtData->klass->vtable._13_get_resultHp.method)(
         targetSvtData,
         targetSvtData->klass->vtable._14_set_resultHp.methodPtr);
  if ( (BYTE3(System_Math_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !System_Math_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(System_Math_TypeInfo);
  return System_Math__Min_45556056(healPoint, MaxHp - v9, 0LL);
}


BuffEntity_o *__fastcall BattleLogicFunction__GetBuffEntity(
        BattleLogicFunction_o *this,
        FunctionEntity_o *funcEnt,
        const MethodInfo *method)
{
  DataMasterBase_WarMaster__WarEntity__int__o *Master_WarQuestSelectionMaster; // x0
  __int64 v5; // x1
  struct System_Int32_array *vals; // x8
  __int64 v8; // x0

  if ( (byte_4353856 & 1) == 0 )
  {
    sub_B70694(&Method_DataManager_GetMaster_BuffMaster___);
    sub_B70694(&DataManager_TypeInfo);
    sub_B70694(&Method_DataMasterBase_BuffMaster__BuffEntity__int__GetEntity__);
    byte_4353856 = 1;
  }
  if ( (BYTE3(DataManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_WarQuestSelectionMaster = (DataMasterBase_WarMaster__WarEntity__int__o *)DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_1CA3540 *)Method_DataManager_GetMaster_BuffMaster___);
  if ( !funcEnt )
    goto LABEL_11;
  vals = funcEnt->fields.vals;
  if ( !vals )
    goto LABEL_11;
  if ( !vals->max_length )
  {
    v8 = sub_B70798(Master_WarQuestSelectionMaster);
    sub_B70738(v8, 0LL);
  }
  if ( !Master_WarQuestSelectionMaster )
LABEL_11:
    sub_B7076C(Master_WarQuestSelectionMaster, v5);
  return (BuffEntity_o *)DataMasterBase_WarMaster__WarEntity__int___GetEntity(
                           Master_WarQuestSelectionMaster,
                           vals->m_Items[1],
                           (const MethodInfo_21C0440 *)Method_DataMasterBase_BuffMaster__BuffEntity__int__GetEntity__);
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
  DataMasterBase_WarMaster__WarEntity__int__o *v11; // x23
  __int64 v12; // x24
  __int64 v13; // x25
  unsigned __int64 v14; // x24
  System_Collections_Generic_List_int__o *v15; // x23
  System_Collections_Generic_IEnumerable_TSource__o *v16; // x0
  __int64 v17; // x8
  unsigned __int64 v18; // x25
  __int64 v19; // x8
  int32_t v20; // w20
  unsigned __int64 v21; // x22
  int32_t v22; // w1
  const MethodInfo_30B61D8 *v23; // x2
  __int64 v25; // x0
  int32_t v26; // [xsp+Ch] [xbp-54h]
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v27; // 0:x0.16

  if ( (byte_4353894 & 1) == 0 )
  {
    sub_B70694(&Method_DataManager_GetMasterData_ServantMaster___);
    sub_B70694(&Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
    sub_B70694(&Method_System_Linq_Enumerable_Repeat_int___);
    sub_B70694(&Method_System_Linq_Enumerable_ToArray_int___);
    sub_B70694(&Method_System_Collections_Generic_List_int__AddRange__);
    sub_B70694(&Method_System_Collections_Generic_List_int__Add__);
    sub_B70694(&Method_System_Collections_Generic_List_int__Contains__);
    sub_B70694(&Method_System_Collections_Generic_List_int__ToArray__);
    sub_B70694(&Method_System_Collections_Generic_List_int___ctor__);
    sub_B70694(&Method_System_Collections_Generic_List_int__get_Count__);
    sub_B70694(&Method_System_Collections_Generic_List_int__get_Item__);
    sub_B70694(&System_Collections_Generic_List_int__TypeInfo);
    sub_B70694(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    sub_B70694(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_4353894 = 1;
  }
  v6 = (System_Collections_Generic_List_int__o *)sub_B70764(System_Collections_Generic_List_int__TypeInfo);
  System_Collections_Generic_List_int____ctor(
    v6,
    (const MethodInfo_30B547C *)Method_System_Collections_Generic_List_int___ctor__);
  if ( !baseVals )
    goto LABEL_52;
  CardIndex = DataVals__GetCardIndex(baseVals, 0LL);
  CardIndividuality = DataVals__GetCardIndividuality(baseVals, 0LL);
  if ( (CardIndividuality & 0x80000000) != 0 )
  {
    if ( (CardIndex & 0x80000000) != 0 )
      goto LABEL_38;
    if ( CardIndex )
    {
      if ( CardIndex > 5 )
        goto LABEL_38;
      if ( !v6 )
        goto LABEL_52;
      v22 = CardIndex - 1;
    }
    else
    {
      CardIndividuality = BattleRandom__getNext(5, 0LL);
      if ( !v6 )
        goto LABEL_52;
      v22 = CardIndividuality;
    }
    v23 = (const MethodInfo_30B61D8 *)Method_System_Collections_Generic_List_int__Add__;
    goto LABEL_49;
  }
  IdArrayFromIndividuality = CardMaster__getIdArrayFromIndividuality(CardIndividuality, 0LL);
  CardIndividuality = (unsigned __int64)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2CE992C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !CardIndividuality )
    goto LABEL_52;
  CardIndividuality = (unsigned __int64)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                          (DataManager_o *)CardIndividuality,
                                          (const MethodInfo_1CA35A0 *)Method_DataManager_GetMasterData_ServantMaster___);
  if ( !targetServant )
    goto LABEL_52;
  v11 = (DataMasterBase_WarMaster__WarEntity__int__o *)CardIndividuality;
  v13 = *(_QWORD *)&targetServant->fields.svtId.fields.currentCryptoKey;
  v12 = *(_QWORD *)&targetServant->fields.svtId.fields.fakeValue;
  if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  }
  *(_QWORD *)&v27.fields.currentCryptoKey = v13;
  *(_QWORD *)&v27.fields.fakeValue = v12;
  CardIndividuality = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_45179984(v27, 0LL);
  if ( !v11 )
    goto LABEL_52;
  CardIndividuality = (unsigned __int64)DataMasterBase_WarMaster__WarEntity__int___GetEntity(
                                          v11,
                                          CardIndividuality,
                                          (const MethodInfo_21C0440 *)Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
  if ( !CardIndividuality )
    goto LABEL_52;
  v14 = *(_QWORD *)(CardIndividuality + 144);
  v15 = (System_Collections_Generic_List_int__o *)sub_B70764(System_Collections_Generic_List_int__TypeInfo);
  System_Collections_Generic_List_int____ctor(
    v15,
    (const MethodInfo_30B547C *)Method_System_Collections_Generic_List_int___ctor__);
  CardIndividuality = (unsigned __int64)BattleServantData__get_BuffData(targetServant, 0LL);
  if ( !CardIndividuality )
    goto LABEL_52;
  CardIndividuality = (unsigned __int64)BattleBuffData__GetCommandCardTypeChangeBuff(
                                          (BattleBuffData_o *)CardIndividuality,
                                          0LL);
  v26 = CardIndex;
  if ( CardIndividuality )
  {
    if ( !v14 )
      goto LABEL_52;
    v16 = (System_Collections_Generic_IEnumerable_TSource__o *)System_Linq_Enumerable__Repeat_int_(
                                                                 *(_DWORD *)(CardIndividuality + 28),
                                                                 *(_DWORD *)(v14 + 24),
                                                                 (const MethodInfo_1CC0270 *)Method_System_Linq_Enumerable_Repeat_int___);
    CardIndividuality = (unsigned __int64)System_Linq_Enumerable__ToArray_int_(
                                            v16,
                                            (const MethodInfo_1CC85F0 *)Method_System_Linq_Enumerable_ToArray_int___);
    v14 = CardIndividuality;
  }
  if ( !IdArrayFromIndividuality )
    goto LABEL_52;
  v17 = *(_QWORD *)&IdArrayFromIndividuality->max_length;
  if ( (int)v17 >= 1 )
  {
    v18 = 0LL;
    while ( 1 )
    {
      if ( v18 >= (unsigned int)v17 )
        goto LABEL_51;
      if ( !v14 )
        goto LABEL_52;
      v19 = *(_QWORD *)(v14 + 24);
      if ( (int)v19 >= 1 )
        break;
LABEL_29:
      LODWORD(v17) = IdArrayFromIndividuality->max_length;
      if ( (__int64)++v18 >= (int)v17 )
        goto LABEL_30;
    }
    v20 = IdArrayFromIndividuality->m_Items[v18 + 1];
    v21 = 0LL;
    while ( v21 < (unsigned int)v19 )
    {
      if ( v20 == *(_DWORD *)(v14 + 32 + 4 * v21) )
      {
        if ( !v15 )
          goto LABEL_52;
        CardIndividuality = System_Collections_Generic_List_int___Contains(
                              v15,
                              v21,
                              (const MethodInfo_30B662C *)Method_System_Collections_Generic_List_int__Contains__);
        if ( (CardIndividuality & 1) == 0 )
          System_Collections_Generic_List_int___Add(
            v15,
            v21,
            (const MethodInfo_30B61D8 *)Method_System_Collections_Generic_List_int__Add__);
      }
      LODWORD(v19) = *(_DWORD *)(v14 + 24);
      if ( (__int64)++v21 >= (int)v19 )
        goto LABEL_29;
    }
LABEL_51:
    v25 = sub_B70798(CardIndividuality);
    sub_B70738(v25, 0LL);
  }
LABEL_30:
  if ( !v15 )
    goto LABEL_52;
  CardIndividuality = (unsigned int)v15->fields._size;
  if ( (int)CardIndividuality < 1 )
  {
LABEL_38:
    if ( v6 )
      return System_Collections_Generic_List_int___ToArray(
               v6,
               (const MethodInfo_30B82E4 *)Method_System_Collections_Generic_List_int__ToArray__);
    goto LABEL_52;
  }
  if ( !v26 )
  {
    CardIndividuality = BattleRandom__getNext(CardIndividuality, 0LL);
    if ( v15->fields._size <= (unsigned int)CardIndividuality )
      System_ThrowHelper__ThrowArgumentOutOfRangeException_41939488(0LL);
    if ( v6 )
    {
      v22 = v15->fields._items->m_Items[(int)CardIndividuality + 1];
      v23 = (const MethodInfo_30B61D8 *)Method_System_Collections_Generic_List_int__Add__;
LABEL_49:
      System_Collections_Generic_List_int___Add(v6, v22, v23);
      return System_Collections_Generic_List_int___ToArray(
               v6,
               (const MethodInfo_30B82E4 *)Method_System_Collections_Generic_List_int__ToArray__);
    }
LABEL_52:
    sub_B7076C(CardIndividuality, v8);
  }
  if ( !v6 )
    goto LABEL_52;
  System_Collections_Generic_List_int___AddRange(
    v6,
    (System_Collections_Generic_IEnumerable_T__o *)v15,
    (const MethodInfo_30B642C *)Method_System_Collections_Generic_List_int__AddRange__);
  return System_Collections_Generic_List_int___ToArray(
           v6,
           (const MethodInfo_30B82E4 *)Method_System_Collections_Generic_List_int__ToArray__);
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
  _QWORD **v13; // x20
  __int64 v14; // x19
  __int16 v15; // w8
  __int64 v16; // x19
  __int64 v17; // x19
  __int64 v18; // x19

  if ( (byte_4353864 & 1) == 0 )
  {
    sub_B70694(&Method_System_Array_Empty_BattleLogicFunctionProcess_FunctionTargetCheck___);
    sub_B70694(&BattleLogicFunctionProcess_DependFunctionUnitCheck_TypeInfo);
    byte_4353864 = 1;
  }
  v9 = (BattleLogicFunctionProcess_DependFunctionUnitCheck_o *)sub_B70764(BattleLogicFunctionProcess_DependFunctionUnitCheck_TypeInfo);
  BattleLogicFunctionProcess_DependFunctionUnitCheck___ctor(v9, this, args, dataVal, 0LL);
  if ( !v9 )
    sub_B7076C(v10, v11);
  if ( BattleLogicFunctionProcess_FunctionUnitCheck__checkCondtion(
         (BattleLogicFunctionProcess_FunctionUnitCheck_o *)v9,
         mainAction,
         0LL) )
  {
    p_funcTargetArray_k__BackingField = (System_Collections_Generic_IEnumerable_BattleLogicFunctionProcess_FunctionTargetCheck__o **)&v9->fields._funcTargetArray_k__BackingField;
  }
  else
  {
    v13 = (_QWORD **)Method_System_Array_Empty_BattleLogicFunctionProcess_FunctionTargetCheck___;
    v14 = **((_QWORD **)Method_System_Array_Empty_BattleLogicFunctionProcess_FunctionTargetCheck___ + 6);
    v15 = *(_WORD *)(v14 + 306);
    if ( (v15 & 1) == 0 )
    {
      sub_B08394(**((_QWORD **)Method_System_Array_Empty_BattleLogicFunctionProcess_FunctionTargetCheck___ + 6));
      v15 = *(_WORD *)(v14 + 306);
    }
    if ( (v15 & 0x400) != 0 )
    {
      v16 = *v13[6];
      if ( (*(_BYTE *)(v16 + 306) & 1) == 0 )
        sub_B08394(*v13[6]);
      if ( !*(_DWORD *)(v16 + 224) )
      {
        v17 = *v13[6];
        if ( (*(_BYTE *)(v17 + 306) & 1) == 0 )
          sub_B08394(*v13[6]);
        j_il2cpp_runtime_class_init_0(v17);
      }
    }
    v18 = *v13[6];
    if ( (*(_BYTE *)(v18 + 306) & 1) == 0 )
      sub_B08394(*v13[6]);
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
    sub_B7076C(this, 0LL);
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
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v8; // x0
  System_Collections_Generic_List_VoiceCondType_Type__o *v9; // x24
  _QWORD *DependDataValsArray; // x0
  __int64 v11; // x1
  RemovedBuffInfoGroup_o *v12; // x22
  const MethodInfo *v13; // x4
  __int64 v14; // x8
  unsigned __int64 v15; // x9
  int v16; // w26
  DataVals_o *v17; // x25
  __int64 v18; // x8
  _QWORD *v19; // x24
  unsigned __int64 v20; // x10
  int *v21; // x11
  __int64 v22; // x0
  __int64 v23; // x1
  __int64 v24; // x24
  __int64 v25; // x8
  unsigned __int64 v26; // x10
  int *v27; // x11
  __int64 v28; // x0
  __int64 v29; // x8
  unsigned __int64 v30; // x10
  int *v31; // x11
  __int64 v32; // x0
  __int64 v33; // x0
  __int64 v34; // x1
  __int64 v35; // x26
  __int64 v36; // x0
  __int64 v37; // x1
  int32_t v38; // w26
  FunctionEntity_o *funcEnt; // x27
  int32_t funcIndex; // w28
  bool IsCommandSideEffect; // w0
  BattleActionData_o *v42; // x0
  __int64 v43; // x0
  __int64 v44; // x1
  __int64 v45; // x8
  unsigned __int64 v46; // x10
  int *v47; // x11
  __int64 v48; // x0
  int v49; // w8
  unsigned __int64 v50; // x9
  __int64 v52; // x0
  const MethodInfo *v53; // [xsp+0h] [xbp-90h]
  _QWORD *v54; // [xsp+10h] [xbp-80h]
  int v55; // [xsp+1Ch] [xbp-74h]
  unsigned __int64 v56; // [xsp+20h] [xbp-70h]
  _DWORD v58[1]; // [xsp+30h] [xbp-60h]
  int v59; // [xsp+34h] [xbp-5Ch]
  RemovedBuffInfo_o *subBuffInfo; // [xsp+38h] [xbp-58h] BYREF

  if ( (byte_4353896 & 1) == 0 )
  {
    sub_B70694(&System_IDisposable_TypeInfo);
    sub_B70694(&System_Collections_Generic_IEnumerable_BattleLogicFunctionProcess_FunctionTargetCheck__TypeInfo);
    sub_B70694(&System_Collections_Generic_IEnumerator_BattleLogicFunctionProcess_FunctionTargetCheck__TypeInfo);
    sub_B70694(&System_Collections_IEnumerator_TypeInfo);
    sub_B70694(&Method_System_Collections_Generic_List_FuncList_TYPE__Add__);
    sub_B70694(&Method_System_Collections_Generic_List_FuncList_TYPE___ctor__);
    sub_B70694(&Method_System_Collections_Generic_List_BattleBuffData_BuffData___ctor__);
    sub_B70694(&System_Collections_Generic_List_FuncList_TYPE__TypeInfo);
    sub_B70694(&System_Collections_Generic_List_BattleBuffData_BuffData__TypeInfo);
    sub_B70694(&RemovedBuffInfoGroup_TypeInfo);
    byte_4353896 = 1;
  }
  subBuffInfo = 0LL;
  v59 = 0;
  v8 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B70764(System_Collections_Generic_List_BattleBuffData_BuffData__TypeInfo);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v8,
    (const MethodInfo_30249C4 *)Method_System_Collections_Generic_List_BattleBuffData_BuffData___ctor__);
  v9 = (System_Collections_Generic_List_VoiceCondType_Type__o *)sub_B70764(System_Collections_Generic_List_FuncList_TYPE__TypeInfo);
  System_Collections_Generic_List_VoiceCondType_Type____ctor(
    v9,
    (const MethodInfo_30B8454 *)Method_System_Collections_Generic_List_FuncList_TYPE___ctor__);
  if ( !v9 )
    goto LABEL_57;
  System_Collections_Generic_List_VoiceCondType_Type___Add(
    v9,
    2,
    (const MethodInfo_30B91B0 *)Method_System_Collections_Generic_List_FuncList_TYPE__Add__);
  v12 = (RemovedBuffInfoGroup_o *)sub_B70764(RemovedBuffInfoGroup_TypeInfo);
  RemovedBuffInfoGroup___ctor(v12, 0LL);
  if ( !baseVals )
    goto LABEL_57;
  DependDataValsArray = DataVals__GetDependDataValsArray(
                          baseVals,
                          (System_Collections_Generic_List_FuncList_TYPE__o *)v9,
                          1,
                          0LL);
  if ( !DependDataValsArray )
    goto LABEL_57;
  v14 = DependDataValsArray[3];
  if ( (int)v14 >= 1 )
  {
    v15 = 0LL;
    v16 = 0;
    v54 = DependDataValsArray;
    while ( 1 )
    {
      v55 = v16;
      if ( v15 >= (unsigned int)v14 )
      {
        v52 = sub_B70798(DependDataValsArray);
        sub_B70738(v52, 0LL);
      }
      v17 = (DataVals_o *)DependDataValsArray[v15 + 4];
      v56 = v15;
      DependDataValsArray = BattleLogicFunction__GetDependFuncTargets(this, procArg, mainAction, v17, v13);
      if ( !DependDataValsArray )
        break;
      v18 = *DependDataValsArray;
      v19 = DependDataValsArray;
      if ( *(_WORD *)(*DependDataValsArray + 298LL) )
      {
        v20 = 0LL;
        v21 = (int *)(*(_QWORD *)(v18 + 176) + 8LL);
        while ( *((System_Collections_Generic_IEnumerable_BattleLogicFunctionProcess_FunctionTargetCheck__c **)v21 - 1) != System_Collections_Generic_IEnumerable_BattleLogicFunctionProcess_FunctionTargetCheck__TypeInfo )
        {
          ++v20;
          v21 += 4;
          if ( v20 >= *(unsigned __int16 *)(*DependDataValsArray + 298LL) )
            goto LABEL_20;
        }
        v22 = v18 + 16LL * *v21 + 312;
      }
      else
      {
LABEL_20:
        v22 = sub_B08590(
                DependDataValsArray,
                System_Collections_Generic_IEnumerable_BattleLogicFunctionProcess_FunctionTargetCheck__TypeInfo,
                0LL);
      }
      v24 = (*(__int64 (__fastcall **)(_QWORD *, _QWORD))v22)(v19, *(_QWORD *)(v22 + 8));
      if ( !v24 )
        sub_B7076C(0LL, v23);
      while ( 1 )
      {
        v25 = *(_QWORD *)v24;
        if ( *(_WORD *)(*(_QWORD *)v24 + 298LL) )
        {
          v26 = 0LL;
          v27 = (int *)(*(_QWORD *)(v25 + 176) + 8LL);
          while ( *((System_Collections_IEnumerator_c **)v27 - 1) != System_Collections_IEnumerator_TypeInfo )
          {
            ++v26;
            v27 += 4;
            if ( v26 >= *(unsigned __int16 *)(*(_QWORD *)v24 + 298LL) )
              goto LABEL_27;
          }
          v28 = v25 + 16LL * *v27 + 312;
        }
        else
        {
LABEL_27:
          v28 = sub_B08590(v24, System_Collections_IEnumerator_TypeInfo, 0LL);
        }
        if ( ((*(__int64 (__fastcall **)(__int64, _QWORD))v28)(v24, *(_QWORD *)(v28 + 8)) & 1) == 0 )
          break;
        v29 = *(_QWORD *)v24;
        if ( *(_WORD *)(*(_QWORD *)v24 + 298LL) )
        {
          v30 = 0LL;
          v31 = (int *)(*(_QWORD *)(v29 + 176) + 8LL);
          while ( *((System_Collections_Generic_IEnumerator_BattleLogicFunctionProcess_FunctionTargetCheck__c **)v31 - 1) != System_Collections_Generic_IEnumerator_BattleLogicFunctionProcess_FunctionTargetCheck__TypeInfo )
          {
            ++v30;
            v31 += 4;
            if ( v30 >= *(unsigned __int16 *)(*(_QWORD *)v24 + 298LL) )
              goto LABEL_34;
          }
          v32 = v29 + 16LL * *v31 + 312;
        }
        else
        {
LABEL_34:
          v32 = sub_B08590(
                  v24,
                  System_Collections_Generic_IEnumerator_BattleLogicFunctionProcess_FunctionTargetCheck__TypeInfo,
                  0LL);
        }
        v33 = (*(__int64 (__fastcall **)(__int64, _QWORD))v32)(v24, *(_QWORD *)(v32 + 8));
        v35 = v33;
        if ( !v33 )
          sub_B7076C(0LL, v34);
        v36 = (*(__int64 (__fastcall **)(__int64, BattleActionData_o *, _QWORD))(*(_QWORD *)v33 + 392LL))(
                v33,
                mainAction,
                *(_QWORD *)(*(_QWORD *)v33 + 400LL));
        if ( (v36 & 1) != 0 )
        {
          if ( !v17 )
            sub_B7076C(v36, v37);
          if ( !procArg )
            sub_B7076C(v36, v37);
          v38 = *(_DWORD *)(v35 + 32);
          funcEnt = v17->fields.funcEnt;
          funcIndex = v17->fields.funcIndex;
          IsCommandSideEffect = BattleLogicFunction_ProcListInArgs__get_IsCommandSideEffect(procArg, 0LL);
          v42 = BattleLogicFunction__functionSubState(
                  this,
                  v38,
                  funcEnt,
                  v17,
                  funcIndex,
                  IsCommandSideEffect,
                  &subBuffInfo,
                  procArg,
                  v53);
          if ( !mainAction )
            sub_B7076C(v42, v42);
          BattleActionData__addAction(mainAction, v42, 0LL);
          if ( !v12 )
            sub_B7076C(v43, v44);
          RemovedBuffInfoGroup__Register(v12, v38, subBuffInfo, 0LL);
        }
      }
      v58[v55] = 165;
      v16 = ++v59;
      v45 = *(_QWORD *)v24;
      if ( *(_WORD *)(*(_QWORD *)v24 + 298LL) )
      {
        v46 = 0LL;
        v47 = (int *)(*(_QWORD *)(v45 + 176) + 8LL);
        while ( *((System_IDisposable_c **)v47 - 1) != System_IDisposable_TypeInfo )
        {
          ++v46;
          v47 += 4;
          if ( v46 >= *(unsigned __int16 *)(*(_QWORD *)v24 + 298LL) )
            goto LABEL_48;
        }
        v48 = v45 + 16LL * *v47 + 312;
      }
      else
      {
LABEL_48:
        v48 = sub_B08590(v24, System_IDisposable_TypeInfo, 0LL);
      }
      (*(void (__fastcall **)(__int64, _QWORD))v48)(v24, *(_QWORD *)(v48 + 8));
      if ( v16 )
      {
        v49 = v16 - 1;
        DependDataValsArray = v54;
        v50 = v56;
        if ( v58[v16 - 1] == 165 )
        {
          --v16;
          v59 = v49;
        }
      }
      else
      {
        DependDataValsArray = v54;
        v50 = v56;
      }
      LODWORD(v14) = *((_DWORD *)DependDataValsArray + 6);
      v15 = v50 + 1;
      if ( (__int64)v15 >= (int)v14 )
        return v12;
    }
LABEL_57:
    sub_B7076C(DependDataValsArray, v11);
  }
  return v12;
}


bool __fastcall BattleLogicFunction__IsAddStateFieldFlag(
        BattleLogicFunction_o *this,
        BattleBuffData_BuffData_o *buffData,
        const MethodInfo *method)
{
  BattleLogicFunction_o *v4; // x20
  UnityEngine_Object_o *logic; // x21

  v4 = this;
  if ( (byte_4353863 & 1) == 0 )
  {
    this = (BattleLogicFunction_o *)sub_B70694(&UnityEngine_Object_TypeInfo);
    byte_4353863 = 1;
  }
  if ( !buffData )
    goto LABEL_12;
  if ( buffData->fields.onfiledUniqueId >= 1 )
  {
    logic = (UnityEngine_Object_o *)v4->fields.logic;
    if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    }
    if ( UnityEngine_Object__op_Inequality(logic, 0LL, 0LL) )
    {
      this = (BattleLogicFunction_o *)v4->fields.logic;
      if ( this )
        return BattleLogic__checkInField((BattleLogic_o *)this, buffData->fields.onfiledUniqueId, 0LL);
LABEL_12:
      sub_B7076C(this, buffData);
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
    sub_B7076C(this, funcType);
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
    sub_B7076C(data, *(_QWORD *)&targetId);
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
  BattleServantData_o *v11; // x20
  struct BattleData_o *v12; // x8
  int32_t currentTurn; // w8
  bool v14; // w10
  bool v15; // w10

  if ( (byte_4353866 & 1) == 0 )
  {
    sub_B70694(&Method_DataManager_GetMaster_ConstantStrMaster___);
    sub_B70694(&DataManager_TypeInfo);
    sub_B70694(&StringLiteral_5882/*"EXTEND_TURN_BUFF_TYPE"*/);
    byte_4353866 = 1;
  }
  data = this->fields.data;
  if ( !data )
    goto LABEL_32;
  ServantData = BattleData__getServantData(data, targetId, 0LL);
  if ( !ServantData )
    return (char)ServantData;
  v11 = ServantData;
  data = (BattleData_o *)ServantData->fields.svtdata;
  if ( !data )
    goto LABEL_32;
  if ( !ServantEntity__IsSvtBuffTurnExtend((ServantEntity_o *)data, 0LL) )
  {
LABEL_27:
    LOBYTE(ServantData) = 0;
    return (char)ServantData;
  }
  if ( (BYTE3(DataManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  data = (BattleData_o *)DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_1CA3540 *)Method_DataManager_GetMaster_ConstantStrMaster___);
  if ( !buffEnt || !data )
LABEL_32:
    sub_B7076C(data, *(_QWORD *)&targetId);
  data = (BattleData_o *)ConstantStrMaster__ExistValueArray(
                           (ConstantStrMaster_o *)data,
                           (System_String_o *)StringLiteral_5882/*"EXTEND_TURN_BUFF_TYPE"*/,
                           buffEnt->fields.type,
                           0LL);
  if ( ((unsigned __int8)data & 1) == 0 )
    goto LABEL_27;
  v12 = this->fields.data;
  if ( !v12 )
    goto LABEL_32;
  currentTurn = v12->fields.currentTurn;
  if ( currentTurn )
    v14 = 0;
  else
    v14 = !v11->fields.isEnemy;
  if ( !v14 || !shortbuff )
  {
    v15 = currentTurn == 1 && v11->fields.isEnemy;
    if ( (!v15 || !shortbuff)
      && (currentTurn || !v11->fields.isEnemy || shortbuff)
      && (currentTurn != 1 || v11->fields.isEnemy || shortbuff) )
    {
      goto LABEL_27;
    }
  }
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
  System_String_array **v10; // x2
  System_String_array **v11; // x3
  System_Boolean_array **v12; // x4
  System_Int32_array **v13; // x5
  System_Int32_array *v14; // x6
  System_Int32_array *v15; // x7
  System_Collections_Generic_IEnumerable_T__o *v16; // x1
  System_Int32_array *ValueArray; // x0

  if ( (byte_4353858 & 1) == 0 )
  {
    sub_B70694(&Method_DataManager_GetMasterData_ConstantStrMaster___);
    sub_B70694(&Method_System_Collections_Generic_List_int__AddRange__);
    sub_B70694(&Method_System_Collections_Generic_List_int__Contains__);
    sub_B70694(&Method_System_Collections_Generic_List_int___ctor__);
    sub_B70694(&System_Collections_Generic_List_int__TypeInfo);
    sub_B70694(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_4353858 = 1;
  }
  Instance = (DataManager_o *)*typeList;
  if ( !*typeList )
  {
    v9 = (System_Collections_Generic_List_int__o *)sub_B70764(System_Collections_Generic_List_int__TypeInfo);
    System_Collections_Generic_List_int____ctor(
      v9,
      (const MethodInfo_30B547C *)Method_System_Collections_Generic_List_int___ctor__);
    *typeList = v9;
    sub_B70630((BattleServantConfConponent_o *)typeList, (System_Int32_array **)v9, v10, v11, v12, v13, v14, v15);
    Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2CE992C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( Instance )
    {
      Instance = (DataManager_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                    Instance,
                                    (const MethodInfo_1CA35A0 *)Method_DataManager_GetMasterData_ConstantStrMaster___);
      if ( Instance )
      {
        ValueArray = ConstantStrMaster__GetValueArray((ConstantStrMaster_o *)Instance, keyName, 0LL, 0LL);
        if ( ValueArray )
        {
          v16 = (System_Collections_Generic_IEnumerable_T__o *)ValueArray;
          Instance = (DataManager_o *)*typeList;
          if ( !*typeList )
            goto LABEL_11;
          System_Collections_Generic_List_int___AddRange(
            (System_Collections_Generic_List_int__o *)Instance,
            v16,
            (const MethodInfo_30B642C *)Method_System_Collections_Generic_List_int__AddRange__);
        }
        Instance = (DataManager_o *)*typeList;
        if ( *typeList )
          return System_Collections_Generic_List_int___Contains(
                   (System_Collections_Generic_List_int__o *)Instance,
                   buffType,
                   (const MethodInfo_30B662C *)Method_System_Collections_Generic_List_int__Contains__);
      }
    }
LABEL_11:
    sub_B7076C(Instance, v16);
  }
  return System_Collections_Generic_List_int___Contains(
           (System_Collections_Generic_List_int__o *)Instance,
           buffType,
           (const MethodInfo_30B662C *)Method_System_Collections_Generic_List_int__Contains__);
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
  System_Int32_array **v9; // x1
  System_String_array **v10; // x2
  System_String_array **v11; // x3
  System_Boolean_array **v12; // x4
  System_Int32_array **v13; // x5
  System_Int32_array *v14; // x6
  System_Int32_array *v15; // x7
  System_Int32_array **skillInfo; // x1
  System_String_array **v17; // x2
  System_String_array **v18; // x3
  System_Boolean_array **v19; // x4
  System_Int32_array **v20; // x5
  System_Int32_array *v21; // x6
  System_Int32_array *v22; // x7
  __int64 v23; // x22

  if ( (byte_435389A & 1) == 0 )
  {
    sub_B70694(&BattleActionData_TypeInfo);
    sub_B70694(&StringLiteral_8548/*"LOSS_COMMAND_SPELL"*/);
    byte_435389A = 1;
  }
  v6 = sub_B70764(BattleActionData_TypeInfo);
  BattleActionData___ctor((BattleActionData_o *)v6, 0LL);
  if ( !actionData )
    goto LABEL_8;
  if ( !v6 )
    goto LABEL_8;
  *(_DWORD *)(v6 + 32) = actionData->fields.actorId;
  *(_DWORD *)(v6 + 36) = actionData->fields.targetId;
  BattleActionData__setStateField((BattleActionData_o *)v6, 0LL);
  v9 = (System_Int32_array **)StringLiteral_8548/*"LOSS_COMMAND_SPELL"*/;
  *(_QWORD *)(v6 + 64) = StringLiteral_8548/*"LOSS_COMMAND_SPELL"*/;
  sub_B70630((BattleServantConfConponent_o *)(v6 + 64), v9, v10, v11, v12, v13, v14, v15);
  skillInfo = (System_Int32_array **)actionData->fields.skillInfo;
  *(_QWORD *)(v6 + 144) = skillInfo;
  sub_B70630((BattleServantConfConponent_o *)(v6 + 144), skillInfo, v17, v18, v19, v20, v21, v22);
  if ( !baseVals || (v23 = *(_QWORD *)(v6 + 144), Value = DataVals__GetValue(baseVals, 0LL), !v23) )
LABEL_8:
    sub_B7076C(Value, v8);
  *(_DWORD *)(v23 + 100) = Value;
  *(_BYTE *)(v6 + 241) = DataVals__isForcedEffectSpeedOne(baseVals, 0LL);
  BattleActionData__AddAfterActionData(actionData, (BattleActionData_o *)v6, 0, 0LL);
}


// local variable allocation has failed, the output may be wrong!
BattleActionData_BuffData_o *__fastcall BattleLogicFunction__MakeAddActionBuffData(
        BattleLogicFunction_o *this,
        BattleActionData_BuffData_o *actBuffData,
        BattleBuffData_BuffData_o *buffData,
        FunctionEntity_o *funcEnt,
        bool isCommandSideEffect,
        bool isConvertBuffFailed,
        const MethodInfo *method)
{
  System_Int32_array *v7; // x7
  struct System_String_o *popupText; // x1
  struct System_Int32_array *EffectList; // x0
  System_String_array **v14; // x2
  System_String_array **v15; // x3
  System_Boolean_array **v16; // x4
  System_Int32_array **v17; // x5
  System_Int32_array *v18; // x6
  System_Int32_array *v19; // x7
  BattleActionData_BuffData_o *result; // x0

  if ( !buffData
    || !actBuffData
    || (actBuffData->fields.buffId = buffData->fields.buffId,
        actBuffData->fields.auraEffectId = buffData->fields.auraEffectId,
        actBuffData->fields.classIconAuraEffectId = buffData->fields.classIconAuraEffectId,
        !funcEnt) )
  {
    sub_B7076C(this, actBuffData);
  }
  popupText = funcEnt->fields.popupText;
  actBuffData->fields.popLabel = popupText;
  sub_B70630(
    (BattleServantConfConponent_o *)&actBuffData->fields.popLabel,
    (System_Int32_array **)popupText,
    (System_String_array **)buffData,
    (System_String_array **)funcEnt,
    (System_Boolean_array **)isCommandSideEffect,
    (System_Int32_array **)isConvertBuffFailed,
    (System_Int32_array *)method,
    v7);
  actBuffData->fields.popIcon = funcEnt->fields.popupIconId;
  actBuffData->fields.popColor = funcEnt->fields.popupTextColor;
  EffectList = FunctionEntity__getEffectList(funcEnt, 0LL);
  actBuffData->fields.effectList = EffectList;
  sub_B70630(
    (BattleServantConfConponent_o *)&actBuffData->fields.effectList,
    (System_Int32_array **)EffectList,
    v14,
    v15,
    v16,
    v17,
    v18,
    v19);
  actBuffData->fields.isCommandAfter = isCommandSideEffect;
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
  System_String_array **v15; // x2
  System_String_array **v16; // x3
  System_Boolean_array **v17; // x4
  System_Int32_array **v18; // x5
  System_Int32_array *v19; // x6
  System_Int32_array *v20; // x7
  System_String_array **v21; // x2
  System_String_array **v22; // x3
  System_Boolean_array **v23; // x4
  System_Int32_array **v24; // x5
  System_Int32_array *v25; // x6
  System_Int32_array *v26; // x7

  if ( (byte_435386A & 1) == 0 )
  {
    sub_B70694(&BattleActionData_BuffData_TypeInfo);
    byte_435386A = 1;
  }
  v12 = sub_B70764(BattleActionData_BuffData_TypeInfo);
  BattleActionData_BuffData___ctor((BattleActionData_BuffData_o *)v12, 0LL);
  if ( !v12 )
    sub_B7076C(v13, v14);
  *(_DWORD *)(v12 + 40) = targetId;
  *(_DWORD *)(v12 + 16) = funcIndex;
  *(_DWORD *)(v12 + 64) = iconId;
  *(_QWORD *)(v12 + 56) = popupText;
  sub_B70630((BattleServantConfConponent_o *)(v12 + 56), (System_Int32_array **)popupText, v15, v16, v17, v18, v19, v20);
  *(_DWORD *)(v12 + 68) = popupTextColor;
  *(_QWORD *)(v12 + 72) = 0LL;
  sub_B70630((BattleServantConfConponent_o *)(v12 + 72), 0LL, v21, v22, v23, v24, v25, v26);
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
  int v9; // w20
  Il2CppObject *currentValue; // x21
  System_Collections_Generic_Dictionary_int__int__o *v11; // x20
  __int64 v12; // x0
  __int64 v13; // x1
  System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *klass; // x0
  __int64 IsNullOrEmpty; // x0
  __int64 v16; // x8
  unsigned __int64 v17; // x27
  System_Collections_ICollection_o *v18; // x22
  __int64 v19; // x1
  unsigned __int64 monitor; // x8
  unsigned __int64 v21; // x26
  signed __int64 v22; // x24
  System_Collections_ICollection_o *v23; // x28
  _BOOL8 v24; // x0
  __int64 v25; // x1
  int32_t v26; // w23
  int32_t v27; // w0
  _BOOL8 v28; // x0
  __int64 v29; // x1
  Il2CppObject *current; // x22
  __int64 v31; // x21
  System_Int32_array *FamilyLinkageIdArray; // x0
  __int64 v33; // x1
  System_String_array **v34; // x2
  System_String_array **v35; // x3
  System_Boolean_array **v36; // x4
  System_Int32_array **v37; // x5
  System_Int32_array *v38; // x6
  System_Int32_array *v39; // x7
  System_Int32_array **v40; // x23
  System_Int32_array *FamilyLinkageTargetIdArray; // x0
  System_String_array **v42; // x2
  System_String_array **v43; // x3
  System_Boolean_array **v44; // x4
  System_Int32_array **v45; // x5
  System_Int32_array *v46; // x6
  System_Int32_array *v47; // x7
  System_Int32_array **v48; // x22
  __int64 v49; // x0
  int v50; // w21
  __int64 v51; // x0
  __int64 v52; // x0
  __int64 v53; // x0
  __int64 v54; // x0
  __int64 v55; // x0
  __int64 v56; // x0
  __int64 v57; // x0
  __int64 v58; // x0
  int v59; // w20
  int v60; // [xsp+4h] [xbp-BCh]
  _BYTE v61[32]; // [xsp+8h] [xbp-B8h] BYREF
  int v62; // [xsp+28h] [xbp-98h]
  System_Collections_Generic_List_Enumerator_T__o v63; // [xsp+30h] [xbp-90h] BYREF
  System_Collections_Generic_Dictionary_ValueCollection_Enumerator_TKey__TValue__o v64; // [xsp+50h] [xbp-70h] BYREF

  if ( (byte_4353897 & 1) == 0 )
  {
    sub_B70694(&Method_System_Collections_Generic_Dictionary_int__int__ContainsKey__);
    sub_B70694(&Method_System_Collections_Generic_Dictionary_int__int___ctor__);
    sub_B70694(&Method_System_Collections_Generic_Dictionary_int__int__get_Item__);
    sub_B70694(&Method_System_Collections_Generic_Dictionary_int__RemovedBuffInfo__get_Values__);
    sub_B70694(&Method_System_Collections_Generic_Dictionary_int__int__set_Item__);
    sub_B70694(&System_Collections_Generic_Dictionary_int__int__TypeInfo);
    sub_B70694(&Method_System_Collections_Generic_List_Enumerator_BattleBuffData_BuffData__Dispose__);
    sub_B70694(&Method_System_Collections_Generic_Dictionary_ValueCollection_Enumerator_int__RemovedBuffInfo__Dispose__);
    sub_B70694(&Method_System_Collections_Generic_List_Enumerator_BattleBuffData_BuffData__MoveNext__);
    sub_B70694(&Method_System_Collections_Generic_Dictionary_ValueCollection_Enumerator_int__RemovedBuffInfo__MoveNext__);
    sub_B70694(&Method_System_Collections_Generic_List_Enumerator_BattleBuffData_BuffData__get_Current__);
    sub_B70694(&Method_System_Collections_Generic_Dictionary_ValueCollection_Enumerator_int__RemovedBuffInfo__get_Current__);
    sub_B70694(&int_____TypeInfo);
    sub_B70694(&Method_System_Collections_Generic_List_BattleBuffData_BuffData__GetEnumerator__);
    this = (BattleLogicFunction_o *)sub_B70694(&Method_System_Collections_Generic_Dictionary_ValueCollection_int__RemovedBuffInfo__GetEnumerator__);
    byte_4353897 = 1;
  }
  memset(&v64, 0, sizeof(v64));
  memset(&v63, 0, sizeof(v63));
  v62 = 0;
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
      || (this = (BattleLogicFunction_o *)System_Collections_Generic_Dictionary_int__QuestAfterAction_VoiceInfo___get_Values(
                                            (System_Collections_Generic_Dictionary_int__QuestAfterAction_VoiceInfo__o *)this,
                                            (const MethodInfo_2FC630C *)Method_System_Collections_Generic_Dictionary_int__RemovedBuffInfo__get_Values__)) == 0LL )
    {
      sub_B7076C(this, procArg);
    }
    System_Collections_Generic_Dictionary_ValueCollection_int__BillBoardGroupManager_GroupData___GetEnumerator(
      (System_Collections_Generic_Dictionary_ValueCollection_Enumerator_TKey__TValue__o *)v61,
      (System_Collections_Generic_Dictionary_ValueCollection_TKey__TValue__o *)this,
      (const MethodInfo_25F5400 *)Method_System_Collections_Generic_Dictionary_ValueCollection_int__RemovedBuffInfo__GetEnumerator__);
    v9 = 0;
    v64 = *(System_Collections_Generic_Dictionary_ValueCollection_Enumerator_TKey__TValue__o *)v61;
    while ( System_Collections_Generic_Dictionary_ValueCollection_Enumerator_int__BillBoardGroupManager_GroupData___MoveNext(
              &v64,
              (const MethodInfo_2833E74 *)Method_System_Collections_Generic_Dictionary_ValueCollection_Enumerator_int__RemovedBuffInfo__MoveNext__) )
    {
      v60 = v9;
      currentValue = v64.fields.currentValue;
      v11 = (System_Collections_Generic_Dictionary_int__int__o *)sub_B70764(System_Collections_Generic_Dictionary_int__int__TypeInfo);
      System_Collections_Generic_Dictionary_int__int____ctor(
        v11,
        (const MethodInfo_2FBA5BC *)Method_System_Collections_Generic_Dictionary_int__int___ctor__);
      if ( !currentValue )
        sub_B7076C(v12, v13);
      klass = (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)currentValue[1].klass;
      if ( !klass )
        sub_B7076C(0LL, v13);
      System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo___GetEnumerator(
        (System_Collections_Generic_List_Enumerator_T__o *)v61,
        klass,
        (const MethodInfo_3026504 *)Method_System_Collections_Generic_List_BattleBuffData_BuffData__GetEnumerator__);
      v63 = *(System_Collections_Generic_List_Enumerator_T__o *)v61;
      while ( 1 )
      {
        v28 = System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___MoveNext(
                &v63,
                (const MethodInfo_22212CC *)Method_System_Collections_Generic_List_Enumerator_BattleBuffData_BuffData__MoveNext__);
        if ( !v28 )
          break;
        current = v63.fields.current;
        if ( !v63.fields.current )
          sub_B7076C(v28, v29);
        if ( BattleBuffData_BuffData__IsFamilyBuff((BattleBuffData_BuffData_o *)v63.fields.current, 0LL) )
        {
          v31 = sub_B706AC(int_____TypeInfo, 2LL);
          FamilyLinkageIdArray = BattleBuffData_BuffData__get_FamilyLinkageIdArray(
                                   (BattleBuffData_BuffData_o *)current,
                                   0LL);
          if ( !v31 )
            sub_B7076C(FamilyLinkageIdArray, v33);
          v40 = (System_Int32_array **)FamilyLinkageIdArray;
          if ( FamilyLinkageIdArray )
          {
            FamilyLinkageIdArray = (System_Int32_array *)sub_B70754(
                                                           FamilyLinkageIdArray,
                                                           *(_QWORD *)(*(_QWORD *)v31 + 64LL));
            if ( !FamilyLinkageIdArray )
            {
              v57 = sub_B7078C(0LL);
              sub_B70738(v57, 0LL);
            }
          }
          if ( !*(_DWORD *)(v31 + 24) )
          {
            v56 = sub_B70798(FamilyLinkageIdArray);
            sub_B70738(v56, 0LL);
          }
          *(_QWORD *)(v31 + 32) = v40;
          sub_B70630((BattleServantConfConponent_o *)(v31 + 32), v40, v34, v35, v36, v37, v38, v39);
          FamilyLinkageTargetIdArray = BattleBuffData_BuffData__get_FamilyLinkageTargetIdArray(
                                         (BattleBuffData_BuffData_o *)current,
                                         0LL);
          v48 = (System_Int32_array **)FamilyLinkageTargetIdArray;
          if ( FamilyLinkageTargetIdArray )
          {
            FamilyLinkageTargetIdArray = (System_Int32_array *)sub_B70754(
                                                                 FamilyLinkageTargetIdArray,
                                                                 *(_QWORD *)(*(_QWORD *)v31 + 64LL));
            if ( !FamilyLinkageTargetIdArray )
            {
              v58 = sub_B7078C(0LL);
              sub_B70738(v58, 0LL);
            }
          }
          if ( *(_DWORD *)(v31 + 24) <= 1u )
          {
            v49 = sub_B70798(FamilyLinkageTargetIdArray);
            sub_B70738(v49, 0LL);
          }
          *(_QWORD *)(v31 + 40) = v48;
          sub_B70630((BattleServantConfConponent_o *)(v31 + 40), v48, v42, v43, v44, v45, v46, v47);
          v16 = *(_QWORD *)(v31 + 24);
          if ( (int)v16 >= 1 )
          {
            v17 = 0LL;
            do
            {
              if ( v17 >= (unsigned int)v16 )
              {
                v55 = sub_B70798(IsNullOrEmpty);
                sub_B70738(v55, 0LL);
              }
              v18 = *(System_Collections_ICollection_o **)(v31 + 8 * v17 + 32);
              IsNullOrEmpty = BasicHelper__IsNullOrEmpty(v18, 0LL);
              if ( (IsNullOrEmpty & 1) == 0 )
              {
                if ( !v18 )
                  sub_B7076C(IsNullOrEmpty, v19);
                monitor = (unsigned __int64)v18[1].monitor;
                if ( (int)monitor >= 1 )
                {
                  v21 = 0LL;
                  v22 = (int)monitor;
                  v23 = v18 + 2;
                  do
                  {
                    if ( v21 >= (unsigned int)monitor )
                    {
                      v52 = sub_B70798(IsNullOrEmpty);
                      sub_B70738(v52, 0LL);
                    }
                    if ( !v11 )
                      sub_B7076C(IsNullOrEmpty, v19);
                    v24 = System_Collections_Generic_Dictionary_int__int___ContainsKey(
                            v11,
                            *((_DWORD *)&v23->klass + v21),
                            (const MethodInfo_2FBB3C4 *)Method_System_Collections_Generic_Dictionary_int__int__ContainsKey__);
                    if ( !v24 )
                    {
                      if ( v21 >= LODWORD(v18[1].monitor) )
                      {
                        v54 = sub_B70798(v24);
                        sub_B70738(v54, 0LL);
                      }
                      if ( !v8 )
                        sub_B7076C(v24, v25);
                      v26 = *((_DWORD *)&v23->klass + v21);
                      v27 = FamilyBuffLinkageIdGenerator__Next(v8, 0LL);
                      System_Collections_Generic_Dictionary_int__int___set_Item(
                        v11,
                        v26,
                        v27,
                        (const MethodInfo_2FBB138 *)Method_System_Collections_Generic_Dictionary_int__int__set_Item__);
                    }
                    if ( v21 >= LODWORD(v18[1].monitor) )
                    {
                      v51 = sub_B70798(v24);
                      sub_B70738(v51, 0LL);
                    }
                    IsNullOrEmpty = System_Collections_Generic_Dictionary_int__int___get_Item(
                                      v11,
                                      *((_DWORD *)&v23->klass + v21),
                                      (const MethodInfo_2FBB0A0 *)Method_System_Collections_Generic_Dictionary_int__int__get_Item__);
                    monitor = LODWORD(v18[1].monitor);
                    if ( v21 >= monitor )
                    {
                      v53 = sub_B70798(IsNullOrEmpty);
                      sub_B70738(v53, 0LL);
                    }
                    *((_DWORD *)&v23->klass + v21++) = IsNullOrEmpty;
                  }
                  while ( (__int64)v21 < v22 );
                }
              }
              LODWORD(v16) = *(_DWORD *)(v31 + 24);
              ++v17;
            }
            while ( (__int64)v17 < (int)v16 );
          }
        }
      }
      v9 = 0;
      *(_DWORD *)&v61[4 * v60 + 24] = 244;
      v50 = ++v62;
      System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___Dispose(
        &v63,
        (const MethodInfo_22212C8 *)Method_System_Collections_Generic_List_Enumerator_BattleBuffData_BuffData__Dispose__);
      if ( v50 )
      {
        v9 = v50;
        if ( *(_DWORD *)&v61[4 * v50 + 20] == 244 )
        {
          v9 = v50 - 1;
          v62 = v50 - 1;
        }
      }
    }
    *(_DWORD *)&v61[4 * v9 + 24] = 272;
    v59 = ++v62;
    System_Collections_Generic_Dictionary_ValueCollection_Enumerator_int__BillBoardGroupManager_GroupData___Dispose(
      &v64,
      (const MethodInfo_2833E70 *)Method_System_Collections_Generic_Dictionary_ValueCollection_Enumerator_int__RemovedBuffInfo__Dispose__);
    if ( v59 && *(_DWORD *)&v61[4 * v59 + 20] == 272 )
      v62 = v59 - 1;
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
  SkillLvMaster_o *Master_WarQuestSelectionMaster; // x24
  _QWORD *FuncSideEffectTargetServants; // x0
  __int64 v11; // x1
  __int64 v12; // x8
  unsigned __int64 v13; // x9
  bool v14; // w20
  __int64 v15; // x8
  unsigned __int64 v16; // x21
  BattleServantData_o *v17; // x28
  __int64 v18; // x8
  _QWORD *v19; // x20
  unsigned __int64 v20; // x26
  BattleBuffData_BuffData_o *v21; // x25
  BattleActionData_o *SideEffectActionData_23801224; // x0
  const MethodInfo *v23; // x6
  System_Collections_Generic_IEnumerable_T__o *SideEffectList; // x19
  BattleLogicFunction___c_c *v25; // x8
  struct BattleLogicFunction___c_StaticFields *static_fields; // x9
  System_Action_DrawLotsDisplayMessage_DisplayedInGroup_SaveData__o *_9__49_0; // x20
  Il2CppObject *v28; // x21
  struct BattleLogicFunction___c_StaticFields *v29; // x0
  System_String_array **v30; // x2
  System_String_array **v31; // x3
  System_Boolean_array **v32; // x4
  System_Int32_array **v33; // x5
  System_Int32_array *v34; // x6
  System_Int32_array *v35; // x7
  __int64 v36; // x0
  _DWORD *v37; // [xsp+0h] [xbp-80h]
  unsigned __int64 v39; // [xsp+10h] [xbp-70h]
  _DWORD *v41; // [xsp+20h] [xbp-60h]
  BuffList_ACTION_array *targetActs; // [xsp+28h] [xbp-58h]

  if ( (byte_435385C & 1) == 0 )
  {
    sub_B70694(&Method_System_Action_BattleActionData___ctor__);
    sub_B70694(&System_Action_BattleActionData__TypeInfo);
    sub_B70694(&Method_BasicHelper_ForEach_BattleActionData___);
    sub_B70694(&bool___TypeInfo);
    sub_B70694(&Method_DataManager_GetMaster_SkillLvMaster___);
    sub_B70694(&DataManager_TypeInfo);
    sub_B70694(&Method_BattleLogicFunction___c__SetFuncSideEffect_b__49_0__);
    sub_B70694(&BattleLogicFunction___c_TypeInfo);
    byte_435385C = 1;
  }
  if ( actionData && actorSvtData )
  {
    if ( (BYTE3(DataManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !DataManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
    Master_WarQuestSelectionMaster = (SkillLvMaster_o *)DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_1CA3540 *)Method_DataManager_GetMaster_SkillLvMaster___);
    FuncSideEffectTargetServants = (_QWORD *)sub_B706AC(bool___TypeInfo, 2LL);
    if ( !FuncSideEffectTargetServants )
LABEL_38:
      sub_B7076C(FuncSideEffectTargetServants, v11);
    v12 = FuncSideEffectTargetServants[3];
    if ( !(_DWORD)v12 )
      goto LABEL_37;
    *((_BYTE *)FuncSideEffectTargetServants + 32) = 1;
    if ( (int)v12 >= 1 )
    {
      v13 = 0LL;
      v37 = FuncSideEffectTargetServants;
      while ( 1 )
      {
        if ( v13 >= (unsigned int)v12 )
          goto LABEL_37;
        if ( !sideEffectArg )
          goto LABEL_38;
        v39 = v13;
        v14 = *((_BYTE *)FuncSideEffectTargetServants + v13 + 32) != 0;
        targetActs = (BuffList_ACTION_array *)((__int64 (__fastcall *)(BattleLogicFunction_FuncSideEffectFunctionArgument_o *, bool, Il2CppMethodPointer))sideEffectArg->klass->vtable._6_GetActArray.method)(
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
          goto LABEL_38;
        v15 = FuncSideEffectTargetServants[3];
        if ( (int)v15 >= 1 )
          break;
LABEL_25:
        FuncSideEffectTargetServants = v37;
        LODWORD(v12) = v37[6];
        v13 = v39 + 1;
        if ( (__int64)(v39 + 1) >= (int)v12 )
          goto LABEL_26;
      }
      v16 = 0LL;
      v41 = FuncSideEffectTargetServants;
      while ( 1 )
      {
        if ( v16 >= (unsigned int)v15 )
          goto LABEL_37;
        v17 = (BattleServantData_o *)FuncSideEffectTargetServants[v16 + 4];
        FuncSideEffectTargetServants = BattleServantData__GetAddSideEffectBuffList(actorSvtData, targetActs, v17, 0LL);
        if ( !FuncSideEffectTargetServants )
          goto LABEL_38;
        v18 = FuncSideEffectTargetServants[3];
        v19 = FuncSideEffectTargetServants;
        if ( (int)v18 >= 1 )
          break;
LABEL_24:
        FuncSideEffectTargetServants = v41;
        ++v16;
        LODWORD(v15) = v41[6];
        if ( (__int64)v16 >= (int)v15 )
          goto LABEL_25;
      }
      v20 = 0LL;
      while ( v20 < (unsigned int)v18 )
      {
        if ( !v17 )
          goto LABEL_38;
        v21 = (BattleBuffData_BuffData_o *)v19[v20 + 4];
        SideEffectActionData_23801224 = BattleActionData__MakeSideEffectActionData_23801224(
                                          actionData,
                                          4,
                                          v17->fields.uniqueId,
                                          0LL);
        BattleLogicFunction__SetSideEffectBuff(
          this,
          Master_WarQuestSelectionMaster,
          SideEffectActionData_23801224,
          v21,
          (BattleLogicFunction_CommonSideEffectFunctionArgument_o *)sideEffectArg,
          1,
          v23);
        LODWORD(v18) = *((_DWORD *)v19 + 6);
        if ( (__int64)++v20 >= (int)v18 )
          goto LABEL_24;
      }
LABEL_37:
      v36 = sub_B70798(FuncSideEffectTargetServants);
      sub_B70738(v36, 0LL);
    }
LABEL_26:
    if ( BattleActionData__ExistSideEffect(actionData, 4, 0LL) )
    {
      BattleActionData__SetFuncSideEffectTrigger(actionData, 0LL);
      SideEffectList = (System_Collections_Generic_IEnumerable_T__o *)BattleActionData__getSideEffectList(
                                                                        actionData,
                                                                        4,
                                                                        0LL);
      v25 = BattleLogicFunction___c_TypeInfo;
      if ( (BYTE3(BattleLogicFunction___c_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !BattleLogicFunction___c_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(BattleLogicFunction___c_TypeInfo);
        v25 = BattleLogicFunction___c_TypeInfo;
      }
      static_fields = v25->static_fields;
      _9__49_0 = (System_Action_DrawLotsDisplayMessage_DisplayedInGroup_SaveData__o *)static_fields->__9__49_0;
      if ( !_9__49_0 )
      {
        if ( (BYTE3(v25->vtable._0_Equals.methodPtr) & 4) != 0 && !v25->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(v25);
          static_fields = BattleLogicFunction___c_TypeInfo->static_fields;
        }
        v28 = (Il2CppObject *)static_fields->__9;
        _9__49_0 = (System_Action_DrawLotsDisplayMessage_DisplayedInGroup_SaveData__o *)sub_B70764(System_Action_BattleActionData__TypeInfo);
        System_Action_DrawLotsDisplayMessage_DisplayedInGroup_SaveData____ctor(
          _9__49_0,
          v28,
          Method_BattleLogicFunction___c__SetFuncSideEffect_b__49_0__,
          (const MethodInfo_264C148 *)Method_System_Action_BattleActionData___ctor__);
        v29 = BattleLogicFunction___c_TypeInfo->static_fields;
        v29->__9__49_0 = (struct System_Action_BattleActionData__o *)_9__49_0;
        sub_B70630(
          (BattleServantConfConponent_o *)&v29->__9__49_0,
          (System_Int32_array **)_9__49_0,
          v30,
          v31,
          v32,
          v33,
          v34,
          v35);
      }
      BasicHelper__ForEach_DrawLotsDisplayMessage_DisplayedInGroup_SaveData_(
        SideEffectList,
        (System_Action_T__o *)_9__49_0,
        (const MethodInfo_1BDE02C *)Method_BasicHelper_ForEach_BattleActionData___);
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
  System_String_array **v22; // x2
  System_String_array **v23; // x3
  System_Boolean_array **v24; // x4
  System_Int32_array **v25; // x5
  System_Int32_array *v26; // x6
  System_Int32_array *v27; // x7
  System_Int32_array **v28; // x22
  System_String_array **v29; // x2
  System_String_array **v30; // x3
  System_Boolean_array **v31; // x4
  System_Int32_array **v32; // x5
  System_Int32_array *v33; // x6
  System_Int32_array *v34; // x7
  BattleLogicFunction_o *v35; // x21
  int logic; // w8
  __int64 v37; // x23
  BattleActionData_BuffData_o *v38; // x22
  BattleActionData_o *NoEffectObject; // x23
  __int64 v40; // x0
  __int64 v41; // x0

  v17 = this;
  if ( (byte_4353875 & 1) == 0 )
  {
    this = (BattleLogicFunction_o *)sub_B70694(&BattleActionData_BuffData___TypeInfo);
    byte_4353875 = 1;
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
        v35 = this;
        if ( !this )
          return;
        goto LABEL_15;
      }
LABEL_26:
      sub_B7076C(this, actiondata);
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
  v28 = (System_Int32_array **)this;
  v19->fields.tamamocatTreasureDeviceIds = (struct System_Int32_array *)this;
  sub_B70630(
    (BattleServantConfConponent_o *)&v19->fields.tamamocatTreasureDeviceIds,
    (System_Int32_array **)this,
    v22,
    v23,
    v24,
    v25,
    v26,
    v27);
  if ( !baseVals )
    goto LABEL_26;
  LODWORD(v19->fields.buffProgressTurnSelfList) = DataVals__GetParam(baseVals, 64, 0, 0LL);
  this = (BattleLogicFunction_o *)sub_B706AC(BattleActionData_BuffData___TypeInfo, 1LL);
  if ( !this )
    goto LABEL_26;
  v35 = this;
  if ( v28 )
  {
    this = (BattleLogicFunction_o *)sub_B70754(v28, this->klass->_1.element_class);
    if ( !this )
    {
      v41 = sub_B7078C(0LL);
      sub_B70738(v41, 0LL);
    }
  }
  if ( !LODWORD(v35->fields.logic) )
    goto LABEL_27;
  v35->fields.logictarget = (struct BattleLogicTarget_o *)v28;
  sub_B70630((BattleServantConfConponent_o *)&v35->fields.logictarget, v28, v29, v30, v31, v32, v33, v34);
LABEL_15:
  logic = (int)v35->fields.logic;
  if ( logic >= 1 )
  {
    v37 = 0LL;
    while ( (unsigned int)v37 < logic )
    {
      v38 = (BattleActionData_BuffData_o *)*((_QWORD *)&v35->fields.logictarget + v37);
      if ( !v38 )
        goto LABEL_26;
      v38->fields.isHideEffect = isHideEffect;
      this = (BattleLogicFunction_o *)BattleServantData__isLogicResultAlive(targetSvtData, 0LL);
      if ( ((unsigned __int8)this & 1) != 0 )
        BattleActionData_BuffData__SetCheckHideWhenDeadInfo(v38, baseVals, 0LL);
      logic = (int)v35->fields.logic;
      if ( (int)++v37 >= logic )
        return;
    }
LABEL_27:
    v40 = sub_B70798(this);
    sub_B70738(v40, 0LL);
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
  __int64 v14; // x1
  System_Int32_array *funcId; // x23
  DataVals_array *DataValsList; // x0
  const MethodInfo *v17; // [xsp+28h] [xbp-48h]

  if ( (byte_4353860 & 1) == 0 )
  {
    sub_B70694(&BattleServantData_TypeInfo);
    byte_4353860 = 1;
  }
  if ( (BYTE3(BattleServantData_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !BattleServantData_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BattleServantData_TypeInfo);
  }
  SkillFromBuff = BattleServantData__getSkillFromBuff(skillLvMst, buff, 0LL);
  if ( SkillFromBuff )
  {
    if ( !buff || !arg )
      sub_B7076C(SkillFromBuff, v14);
    *(&arg->fields._SkillTiming_k__BackingField + 1) = buff->fields.addOrder;
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
  __int64 v11; // x1
  struct BattleActionData_SideEffectData_array *SideEffectList_k__BackingField; // x24
  int max_length; // w8
  int v14; // w23
  BattleActionData_SideEffectData_o *v15; // x20
  BattleServantData_o *v16; // x26
  int32_t v17; // w1
  struct DataMasterBase_array *datalist; // x8
  DataManager_o *v19; // x27
  unsigned __int64 v20; // x25
  BattleBuffData_BuffData_o *v21; // x20
  BattleActionData_o *v22; // x28
  bool v23; // w5
  const MethodInfo *v24; // x6
  int32_t v25; // w0
  __int64 v26; // x0
  struct BattleActionData_SideEffectData_array *v27; // [xsp+0h] [xbp-80h]
  SkillLvMaster_o *skillLvMst; // [xsp+10h] [xbp-70h]
  System_Collections_Generic_KeyValuePair_int__int__o pairAttackAndTarget; // [xsp+28h] [xbp-58h] BYREF
  System_Collections_Generic_KeyValuePair_int__int__o p_pairAttackAndTarget; // 0:x0.8
  System_Collections_Generic_KeyValuePair_int__int__o v34; // 0:x1.8
  System_Collections_Generic_KeyValuePair_int__int__o v35; // 0:x1.8

  if ( (byte_435385F & 1) == 0 )
  {
    sub_B70694(&BattleActionData_TypeInfo);
    sub_B70694(&Method_DataManager_GetMasterData_SkillLvMaster___);
    sub_B70694(&Method_System_Collections_Generic_KeyValuePair_int__int___ctor__);
    sub_B70694(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_435385F = 1;
  }
  pairAttackAndTarget = 0LL;
  Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2CE992C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance
    || (Instance = (DataManager_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                      Instance,
                                      (const MethodInfo_1CA35A0 *)Method_DataManager_GetMasterData_SkillLvMaster___),
        skillLvMst = (SkillLvMaster_o *)Instance,
        !attackArg)
    || (SideEffectList_k__BackingField = attackArg->fields._SideEffectList_k__BackingField) == 0LL )
  {
LABEL_25:
    sub_B7076C(Instance, v11);
  }
  max_length = SideEffectList_k__BackingField->max_length;
  if ( max_length >= 1 )
  {
    v14 = 0;
    v27 = attackArg->fields._SideEffectList_k__BackingField;
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
      Instance = (DataManager_o *)BattleData__getServantData((BattleData_o *)Instance, v15->fields.targetId, 0LL);
      if ( Instance )
      {
        if ( !actionSvtData )
          goto LABEL_25;
        v16 = (BattleServantData_o *)Instance;
        v17 = BattleLogicFunction_SideEffectMakeArgument__MakeCheckKey(attackArg, actionSvtData->fields.uniqueId, 0LL);
        p_pairAttackAndTarget = (System_Collections_Generic_KeyValuePair_int__int__o)&pairAttackAndTarget;
        System_Collections_Generic_KeyValuePair_int__int____ctor(
          p_pairAttackAndTarget,
          v17,
          v16->fields.uniqueId,
          (const MethodInfo_2162428 *)Method_System_Collections_Generic_KeyValuePair_int__int___ctor__);
        if ( !mainAction )
          goto LABEL_25;
        v34 = pairAttackAndTarget;
        Instance = (DataManager_o *)BattleActionData__isReflectedAttackSideEffect(mainAction, v34, 0LL);
        if ( ((unsigned __int8)Instance & 1) == 0 )
        {
          Instance = (DataManager_o *)BattleServantData__getAttackSideEffectBuffList_20722468(
                                        actionSvtData,
                                        v15->fields.sideEffectActs,
                                        command,
                                        v16,
                                        0LL);
          if ( !Instance )
            goto LABEL_25;
          datalist = Instance->fields.datalist;
          v19 = Instance;
          if ( datalist )
          {
            if ( (int)datalist >= 1 )
            {
              v20 = 0LL;
              while ( v20 < (unsigned int)datalist )
              {
                v21 = (BattleBuffData_BuffData_o *)*((_QWORD *)&v19->fields.lookup + v20);
                v22 = (BattleActionData_o *)sub_B70764(BattleActionData_TypeInfo);
                BattleActionData___ctor(v22, 0LL);
                if ( !v22 )
                  goto LABEL_25;
                v22->fields.actorId = actionSvtData->fields.uniqueId;
                v22->fields.targetId = v16->fields.uniqueId;
                v23 = ((__int64 (__fastcall *)(BattleLogicFunction_SideEffectMakeArgument_o *, Il2CppMethodPointer))attackArg->klass->vtable._5_unknown.method)(
                        attackArg,
                        attackArg->klass->vtable._6_Init.methodPtr) == 1;
                BattleLogicFunction__SetSideEffectBuff(
                  this,
                  skillLvMst,
                  v22,
                  v21,
                  (BattleLogicFunction_CommonSideEffectFunctionArgument_o *)arg,
                  v23,
                  v24);
                v25 = ((__int64 (__fastcall *)(BattleLogicFunction_SideEffectMakeArgument_o *, Il2CppMethodPointer))attackArg->klass->vtable._5_unknown.method)(
                        attackArg,
                        attackArg->klass->vtable._6_Init.methodPtr);
                BattleActionData__addSideEffectActionData(mainAction, v22, v25, 0LL);
                LODWORD(datalist) = v19->fields.datalist;
                if ( (__int64)++v20 >= (int)datalist )
                  goto LABEL_22;
              }
LABEL_26:
              v26 = sub_B70798(Instance);
              sub_B70738(v26, 0LL);
            }
LABEL_22:
            v35 = pairAttackAndTarget;
            BattleActionData__addReflectAttackSideEffect(mainAction, v35, 0LL);
            SideEffectList_k__BackingField = v27;
          }
        }
      }
      max_length = SideEffectList_k__BackingField->max_length;
      ++v14;
    }
    while ( v14 < max_length );
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
  int32_t funcType; // w23
  DataMasterBase_WarMaster__WarEntity__int__o *MasterData_WarQuestSelectionMaster; // x22
  struct BattleLogic_o *logic; // x8
  BattleLogicFunction_o *v11; // x23
  unsigned __int64 v12; // x26
  const MethodInfo *v13; // x4
  BattleLogicFunction_o *v14; // x24
  BattleLogicFunction_o *v15; // x25
  __int64 v16; // x0
  BattleLogicFunction_o *v17; // [xsp+8h] [xbp-58h]

  v17 = this;
  if ( (byte_435385B & 1) == 0 )
  {
    sub_B70694(&Method_DataManager_GetMasterData_FunctionMaster___);
    sub_B70694(&Method_DataMasterBase_FunctionMaster__FunctionEntity__int__GetEntity__);
    sub_B70694(&int___TypeInfo);
    sub_B70694(&Method_System_Collections_Generic_List_int__AddRange__);
    sub_B70694(&Method_System_Collections_Generic_List_int__Add__);
    this = (BattleLogicFunction_o *)sub_B70694(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_435385B = 1;
  }
  if ( !action )
    goto LABEL_19;
  this = (BattleLogicFunction_o *)action->fields.funcTargetList;
  if ( !this )
    goto LABEL_19;
  System_Collections_Generic_List_int___Add(
    (System_Collections_Generic_List_int__o *)this,
    targetId,
    (const MethodInfo_30B61D8 *)Method_System_Collections_Generic_List_int__Add__);
  if ( !baseVals )
    goto LABEL_19;
  funcType = baseVals->fields.funcType;
  this = (BattleLogicFunction_o *)sub_B706AC(int___TypeInfo, 1LL);
  if ( !this )
    goto LABEL_19;
  if ( !LODWORD(this->fields.logic) )
    goto LABEL_20;
  LODWORD(this->fields.logictarget) = targetId;
  BattleActionData__AddHpDecreaseFuncTargets(action, funcType, (System_Int32_array *)this, 0LL);
  this = (BattleLogicFunction_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2CE992C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !this
    || (MasterData_WarQuestSelectionMaster = (DataMasterBase_WarMaster__WarEntity__int__o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                                                              (DataManager_o *)this,
                                                                                              (const MethodInfo_1CA35A0 *)Method_DataManager_GetMasterData_FunctionMaster___),
        (this = (BattleLogicFunction_o *)DataVals__GetDependFuncIdArray(baseVals, 0LL)) == 0LL) )
  {
LABEL_19:
    sub_B7076C(this, *(_QWORD *)&targetId);
  }
  logic = this->fields.logic;
  v11 = this;
  if ( (int)logic >= 1 )
  {
    v12 = 0LL;
    while ( v12 < (unsigned int)logic )
    {
      if ( !MasterData_WarQuestSelectionMaster )
        goto LABEL_19;
      this = (BattleLogicFunction_o *)DataMasterBase_WarMaster__WarEntity__int___GetEntity(
                                        MasterData_WarQuestSelectionMaster,
                                        *((_DWORD *)&v11->fields.logictarget + v12),
                                        (const MethodInfo_21C0440 *)Method_DataMasterBase_FunctionMaster__FunctionEntity__int__GetEntity__);
      if ( this )
      {
        v14 = this;
        this = (BattleLogicFunction_o *)BattleLogicFunction__getTargetids(
                                          v17,
                                          action,
                                          HIDWORD(this->fields.logic),
                                          baseVals,
                                          v13);
        if ( !action->fields.funcTargetList )
          goto LABEL_19;
        v15 = this;
        System_Collections_Generic_List_int___AddRange(
          action->fields.funcTargetList,
          (System_Collections_Generic_IEnumerable_T__o *)this,
          (const MethodInfo_30B642C *)Method_System_Collections_Generic_List_int__AddRange__);
        BattleActionData__AddHpDecreaseFuncTargets(action, (int32_t)v14->fields.logic, (System_Int32_array *)v15, 0LL);
      }
      LODWORD(logic) = v11->fields.logic;
      if ( (__int64)++v12 >= (int)logic )
        return;
    }
LABEL_20:
    v16 = sub_B70798(this);
    sub_B70738(v16, 0LL);
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
  if ( (byte_4353857 & 1) == 0 )
  {
    sub_B70694(&StringLiteral_15523/*"WAR_BOARD_PROGRESS_OPPONENT_BUFF_TYPES"*/);
    this = (BattleLogicFunction_o *)sub_B70694(&StringLiteral_15524/*"WAR_BOARD_PROGRESS_SELF_BUFF_TYPES"*/);
    byte_4353857 = 1;
  }
  IsUpdateBuffProgressTurn = BattleLogicFunction__IsUpdateBuffProgressTurn(
                               this,
                               buffType,
                               (System_String_o *)StringLiteral_15524/*"WAR_BOARD_PROGRESS_SELF_BUFF_TYPES"*/,
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
            (System_String_o *)StringLiteral_15523/*"WAR_BOARD_PROGRESS_OPPONENT_BUFF_TYPES"*/,
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
  System_Int32_array **TargetList; // x0
  System_String_array **v12; // x2
  System_String_array **v13; // x3
  System_Boolean_array **v14; // x4
  System_Int32_array **v15; // x5
  System_Int32_array *v16; // x6
  System_Int32_array *v17; // x7
  System_Action_DrawLotsDisplayMessage_DisplayedInGroup_SaveData__o *v18; // x0
  System_Action_T__o *v19; // x21
  __int64 *v20; // x8

  if ( (byte_435388E & 1) == 0 )
  {
    sub_B70694(&Method_System_Action_BattleSkillInfoData___ctor__);
    sub_B70694(&System_Action_BattleSkillInfoData__TypeInfo);
    sub_B70694(&Method_BasicHelper_ForEach_BattleSkillInfoData___);
    sub_B70694(&Method_BattleLogicFunction___c__DisplayClass102_0__UpdateUserEquipSkillChargeTurn_b__0__);
    sub_B70694(&Method_BattleLogicFunction___c__DisplayClass102_0__UpdateUserEquipSkillChargeTurn_b__1__);
    sub_B70694(&BattleLogicFunction___c__DisplayClass102_0_TypeInfo);
    byte_435388E = 1;
  }
  v7 = sub_B70764(BattleLogicFunction___c__DisplayClass102_0_TypeInfo);
  BattleLogicFunction___c__DisplayClass102_0___ctor((BattleLogicFunction___c__DisplayClass102_0_o *)v7, 0LL);
  data = this->fields.data;
  if ( !data
    || (data = (BattleData_o *)BattleData__getMasterSkillInfos(data, 0LL), !dataVals)
    || (v10 = (System_Collections_Generic_IEnumerable_T__o *)data,
        data = (BattleData_o *)DataVals__GetValue(dataVals, 0LL),
        !v7) )
  {
    sub_B7076C(data, v8);
  }
  *(_DWORD *)(v7 + 16) = (_DWORD)data;
  *(_DWORD *)(v7 + 20) = DataVals__GetValue2(dataVals, 0LL) - 1;
  TargetList = (System_Int32_array **)DataVals__GetTargetList(dataVals, 0LL);
  *(_QWORD *)(v7 + 24) = TargetList;
  sub_B70630((BattleServantConfConponent_o *)(v7 + 24), TargetList, v12, v13, v14, v15, v16, v17);
  *(_BYTE *)(v7 + 32) = 0;
  v18 = (System_Action_DrawLotsDisplayMessage_DisplayedInGroup_SaveData__o *)sub_B70764(System_Action_BattleSkillInfoData__TypeInfo);
  v19 = (System_Action_T__o *)v18;
  if ( isProgress )
    v20 = &Method_BattleLogicFunction___c__DisplayClass102_0__UpdateUserEquipSkillChargeTurn_b__0__;
  else
    v20 = &Method_BattleLogicFunction___c__DisplayClass102_0__UpdateUserEquipSkillChargeTurn_b__1__;
  System_Action_DrawLotsDisplayMessage_DisplayedInGroup_SaveData____ctor(
    v18,
    (Il2CppObject *)v7,
    *v20,
    (const MethodInfo_264C148 *)Method_System_Action_BattleSkillInfoData___ctor__);
  BasicHelper__ForEach_DrawLotsDisplayMessage_DisplayedInGroup_SaveData_(
    v10,
    v19,
    (const MethodInfo_1BDE02C *)Method_BasicHelper_ForEach_BattleSkillInfoData___);
  return *(_BYTE *)(v7 + 32);
}


BattleBuffData_BuffData_o *__fastcall BattleLogicFunction___FunctionSubFieldBuff_b__122_0(
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
    sub_B7076C(this, buff);
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
    sub_B7076C(0LL, x);
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
  BattleServantData_o *v18; // x21
  BattleServantData_o *v19; // x19
  int v20; // w20
  float BuffTOLERANCEMagnification; // s0
  float BuffGRANTSUBSTATEMagnification; // s0
  int32_t InstantDeathRate; // w0
  bool result; // w0
  float v25; // s0
  int32_t v26; // w0
  int v27; // w8
  BattleLogicFunction_o *Next; // x0
  const MethodInfo *v29; // x4
  struct System_Int32_array **p_vals; // x8
  System_Int32_array *v31; // x20
  System_String_o *v32; // x19
  System_String_o *v33; // x0
  int v34; // w22
  float BuffTOLERANCESUBSTATEMagnification; // s0
  int value; // [xsp+Ch] [xbp-64h]
  __int64 v38; // [xsp+18h] [xbp-58h] BYREF

  if ( (byte_435385D & 1) == 0 )
  {
    sub_B70694(&StringLiteral_17666/*"checkFuncAction("*/);
    sub_B70694(&StringLiteral_134/*" < "*/);
    sub_B70694(&StringLiteral_17665/*"checkFuncAction firstResult:false"*/);
    byte_435385D = 1;
  }
  v38 = 0LL;
  data = this->fields.data;
  if ( !data )
    goto LABEL_51;
  data = (BattleData_o *)BattleData__getServantData(data, actorId, 0LL);
  if ( !this->fields.data )
    goto LABEL_51;
  v18 = (BattleServantData_o *)data;
  data = (BattleData_o *)BattleData__getServantData(this->fields.data, targetId, 0LL);
  v38 = 0x3E8000003E8LL;
  if ( !baseVals )
    goto LABEL_51;
  v19 = (BattleServantData_o *)data;
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
  data = (BattleData_o *)BattleUtility__Abs_24011596(value, 0LL);
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
        if ( !v19 )
          goto LABEL_51;
        if ( !BattleServantData__checkAvoidInstantDeath(v19, v18, 0LL) )
        {
          Next = (BattleLogicFunction_o *)BattleRandom__getNext(1000, 0LL);
          HIDWORD(v38) = (_DWORD)Next;
          InstantDeathRate = BattleLogicFunction__GetInstantDeathRate(
                               Next,
                               (float)value,
                               v19,
                               v18,
                               isTreasureDevice,
                               v29);
          goto LABEL_37;
        }
        v38 = 0x3E800000000LL;
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
        v31 = *p_vals;
        if ( v18 || !DataVals__isParam(baseVals, 74, 0LL) )
        {
          data = (BattleData_o *)BattleRandom__getNext(1000, 0LL);
          if ( !v19 )
            goto LABEL_51;
          v34 = (int)data;
          BuffTOLERANCESUBSTATEMagnification = BattleServantData__getBuffTOLERANCESUBSTATEMagnification(
                                                 v19,
                                                 v31,
                                                 v18,
                                                 0LL);
          HIDWORD(v38) = BattleUtility__FloorToInt(
                           (float)(BuffTOLERANCESUBSTATEMagnification * 1000.0) + (float)v34,
                           0LL);
          if ( v18 )
          {
            BuffGRANTSUBSTATEMagnification = BattleServantData__getBuffGRANTSUBSTATEMagnification(v18, v31, v19, 0LL);
            goto LABEL_15;
          }
          goto LABEL_35;
        }
        v25 = (float)BattleRandom__getNext(1000, 0LL);
        goto LABEL_33;
      }
      if ( FuncList__Check(20, funcEnt->fields.funcType, 0LL) )
      {
        data = (BattleData_o *)BattleRandom__getNext(1000, 0LL);
        if ( !v19 )
          goto LABEL_51;
        v25 = (float)(BattleServantData__getBuffResistDelayNPTurn(v19, v18, 0LL) * 1000.0) + (float)(int)data;
LABEL_33:
        v26 = BattleUtility__FloorToInt(v25, 0LL);
LABEL_34:
        HIDWORD(v38) = v26;
LABEL_35:
        v27 = value;
LABEL_45:
        LODWORD(v38) = v27;
        goto LABEL_46;
      }
      if ( !FuncList__Check(46, funcEnt->fields.funcType, 0LL) )
      {
        v26 = BattleRandom__getNext(1000, 0LL);
        goto LABEL_34;
      }
    }
    HIDWORD(v38) = 0;
    v27 = 1000;
    goto LABEL_45;
  }
  if ( buffEnt )
  {
    data = (BattleData_o *)BattleRandom__getNext(1000, 0LL);
    v20 = (int)data;
    if ( v18 )
    {
      if ( v19 )
      {
        BuffTOLERANCEMagnification = BattleServantData__getBuffTOLERANCEMagnification(
                                       v19,
                                       buffEnt->fields.vals,
                                       v18,
                                       &this->fields.wkStr,
                                       0LL);
        HIDWORD(v38) = BattleUtility__FloorToInt((float)(BuffTOLERANCEMagnification * 1000.0) + (float)v20, 0LL);
        BuffGRANTSUBSTATEMagnification = BattleServantData__getBuffGRANTSTATEMagnification(
                                           v18,
                                           buffEnt->fields.vals,
                                           v19,
                                           &this->fields.wkStr,
                                           0,
                                           0LL);
LABEL_15:
        InstantDeathRate = BattleUtility__FloorToInt(
                             (float)(BuffGRANTSUBSTATEMagnification * 1000.0) + (float)value,
                             0LL);
LABEL_37:
        LODWORD(v38) = InstantDeathRate;
        goto LABEL_46;
      }
LABEL_51:
      sub_B7076C(data, args);
    }
    v25 = (float)(int)data;
    goto LABEL_33;
  }
LABEL_46:
  v32 = System_Int32__ToString((int32_t)&v38 + 4, 0LL);
  v33 = System_Int32__ToString((int32_t)&v38, 0LL);
  System_String__Concat_44761580(
    (System_String_o *)StringLiteral_17666/*"checkFuncAction("*/,
    v32,
    (System_String_o *)StringLiteral_134/*" < "*/,
    v33,
    0LL);
  return SHIDWORD(v38) < (int)v38;
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
    sub_B7076C(data, *(_QWORD *)&targetId);
  return HIBYTE(data->fields.combodata) != 0;
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
  const MethodInfo *v19; // [xsp+8h] [xbp-48h]

  if ( (byte_4353893 & 1) == 0 )
  {
    sub_B70694(&BattleActionData_TypeInfo);
    byte_4353893 = 1;
  }
  v13 = (BattleActionData_o *)sub_B70764(BattleActionData_TypeInfo);
  BattleActionData___ctor(v13, 0LL);
  data = this->fields.data;
  if ( !data || (data = (BattleData_o *)BattleData__getServantData(data, targetId, 0LL), !baseVals) )
    sub_B7076C(data, v14);
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
  BattleActionData_o *v15; // x23
  NpPointToTurnConvert_o *v16; // x28
  NpGaugeAbsorbResult_o *v17; // x27
  const MethodInfo *v18; // x4
  const MethodInfo *v19; // x4
  BattleActionData_o *v20; // x0
  const MethodInfo *v21; // x7
  float Turn_k__BackingField; // s0
  double v23; // d0
  BattleActionData_o *v24; // x0

  v12 = this;
  if ( (byte_4353889 & 1) == 0 )
  {
    sub_B70694(&BattleActionData_TypeInfo);
    sub_B70694(&NpGaugeAbsorbResult_TypeInfo);
    this = (BattleLogicFunction_o *)sub_B70694(&NpPointToTurnConvert_TypeInfo);
    byte_4353889 = 1;
  }
  if ( !funcTarget )
    goto LABEL_12;
  funcUnit_k__BackingField = funcTarget->fields._funcUnit_k__BackingField;
  if ( !funcUnit_k__BackingField )
    goto LABEL_12;
  dataVals_k__BackingField = funcUnit_k__BackingField->fields._dataVals_k__BackingField;
  v15 = (BattleActionData_o *)sub_B70764(BattleActionData_TypeInfo);
  BattleActionData___ctor(v15, 0LL);
  v16 = (NpPointToTurnConvert_o *)sub_B70764(NpPointToTurnConvert_TypeInfo);
  NpPointToTurnConvert___ctor(v16, 0LL);
  v17 = (NpGaugeAbsorbResult_o *)sub_B70764(NpGaugeAbsorbResult_TypeInfo);
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
    sub_B7076C(this, *(_QWORD *)&targetId);
  }
  Turn_k__BackingField = v17->fields._Turn_k__BackingField;
  if ( Turn_k__BackingField == INFINITY )
    v23 = -Turn_k__BackingField;
  else
    v23 = Turn_k__BackingField;
  v24 = BattleLogicFunction__functionHastenNpTurn(
          v12,
          targetId,
          funcEnt,
          dataVals_k__BackingField,
          dataVals_k__BackingField->fields.funcIndex,
          isCommandSideEffect,
          (int)v23,
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
  _BOOL4 v6; // w22
  BattleActionData_o *v8; // x28
  BattleLogicFunction_o *v9; // x21
  struct BattleLogicFunctionProcess_FunctionUnitCheck_o *funcUnit_k__BackingField; // x19
  DataVals_o *dataVals_k__BackingField; // x23
  int32_t actorId; // w27
  BuffEntity_o *v13; // x25
  int32_t v14; // w0
  BattleActionData_o *v15; // x19
  BattleServantData_o *v16; // x24
  BattleServantData_o *ServantData; // x26
  BattleActionData_MasterBuffData_o *v18; // x19
  __int64 v19; // x27
  const MethodInfo *v20; // x4
  int v21; // w19
  char v22; // w21
  _BOOL4 v23; // w22
  int32_t type; // w19
  const MethodInfo *v25; // x3
  bool v26; // zf
  BattleLogicFunction_ProcListInArgs_o *v27; // x22
  int v28; // w9
  int v29; // w8
  struct BattleData_o *data; // x8
  int32_t ProgressTurnCond; // w0
  int32_t v32; // w19
  int32_t v33; // w19
  int32_t v34; // w19
  int32_t v35; // w19
  int32_t tdCommandTypeChange; // w8
  System_Int32_array **v37; // x0
  System_String_array **v38; // x2
  System_String_array **v39; // x3
  System_Boolean_array **v40; // x4
  System_Int32_array **v41; // x5
  System_Int32_array *v42; // x6
  System_Int32_array *v43; // x7
  __int64 v44; // x21
  __int64 v45; // x19
  int32_t v46; // w19
  struct BattleData_o *v47; // x8
  struct BattleEntity_o *battle_ent; // x8
  int64_t userId; // x22
  int32_t eventId; // w19
  EventPointBuffMaster_o *v51; // x28
  int32_t EventPointGroupId; // w21
  UserEventPointEntity_o *EntityDefinitely; // x0
  int64_t value; // x19
  int logic; // w8
  int v56; // w10
  __int64 v57; // x9
  __int64 v58; // x11
  int v59; // w28
  BattleData_o *v60; // x19
  BattleBuffData_CheckIndividualitiesData_o *v61; // x21
  BattleBuffData_ParamAdd_o *v62; // x22
  BattleBuffData_ParamAdd_o *v63; // x3
  System_Int32_array **v64; // x0
  System_String_array **v65; // x2
  System_String_array **v66; // x3
  System_Boolean_array **v67; // x4
  System_Int32_array **v68; // x5
  System_Int32_array *v69; // x6
  System_Int32_array *v70; // x7
  __int64 v71; // x21
  __int64 v72; // x19
  BattleActionData_o *v73; // x28
  BattleLogicFunction_o *v74; // x21
  int32_t Param; // w21
  __int64 v76; // x19
  bool isEnemy; // w8
  int v78; // w8
  System_Int32_array **TargetIndiv; // x0
  System_String_array **v80; // x2
  System_String_array **v81; // x3
  System_Boolean_array **v82; // x4
  System_Int32_array **v83; // x5
  System_Int32_array *v84; // x6
  System_Int32_array *v85; // x7
  System_String_array **v86; // x2
  System_String_array **v87; // x3
  System_Boolean_array **v88; // x4
  System_Int32_array **v89; // x5
  System_Int32_array *v90; // x6
  System_Int32_array *v91; // x7
  int32_t v92; // w19
  System_Int32_array **IntervalData; // x0
  System_String_array **v94; // x2
  System_String_array **v95; // x3
  System_Boolean_array **v96; // x4
  System_Int32_array **v97; // x5
  System_Int32_array *v98; // x6
  System_Int32_array *v99; // x7
  System_Int32_array **ParamArray; // x0
  System_String_array **v101; // x2
  System_String_array **v102; // x3
  System_Boolean_array **v103; // x4
  System_Int32_array **v104; // x5
  System_Int32_array *v105; // x6
  System_Int32_array *v106; // x7
  int32_t v107; // w19
  int32_t RelationId; // w21
  BattleBuffData_RelationOverwriteData_o *v109; // x19
  System_String_array **v110; // x2
  System_String_array **v111; // x3
  System_Boolean_array **v112; // x4
  System_Int32_array **v113; // x5
  System_Int32_array *v114; // x6
  System_Int32_array *v115; // x7
  BattleDataDefine_c *v116; // x0
  int32_t v117; // w19
  bool v118; // w0
  float UpDownGiveHeal; // s8
  int32_t v120; // w0
  int v121; // s0
  int32_t v122; // w0
  int v123; // s0
  System_Int32_array **v124; // x0
  System_String_array **v125; // x2
  System_String_array **v126; // x3
  System_Boolean_array **v127; // x4
  System_Int32_array **v128; // x5
  System_Int32_array *v129; // x6
  System_Int32_array *v130; // x7
  System_Int32_array **v131; // x0
  System_String_array **v132; // x2
  System_String_array **v133; // x3
  System_Boolean_array **v134; // x4
  System_Int32_array **v135; // x5
  System_Int32_array *v136; // x6
  System_Int32_array *v137; // x7
  System_Int32_array **v138; // x0
  System_String_array **v139; // x2
  System_String_array **v140; // x3
  System_Boolean_array **v141; // x4
  System_Int32_array **v142; // x5
  System_Int32_array *v143; // x6
  System_Int32_array *v144; // x7
  int32_t v145; // w19
  System_Int32_array **UpBuffRateBuffTypeList; // x0
  System_String_array **v147; // x2
  System_String_array **v148; // x3
  System_Boolean_array **v149; // x4
  System_Int32_array **v150; // x5
  System_Int32_array *v151; // x6
  System_Int32_array *v152; // x7
  struct BattleLogicFunction_FunctionArgument_o *externalArg; // x8
  struct BattleData_o *v154; // x8
  System_Int32_array **AddIndividualty; // x0
  System_String_array **v156; // x2
  System_String_array **v157; // x3
  System_Boolean_array **v158; // x4
  System_Int32_array **v159; // x5
  System_Int32_array *v160; // x6
  System_Int32_array *v161; // x7
  System_Int32_array **LinkageTargetIndividualty; // x0
  System_String_array **v163; // x2
  System_String_array **v164; // x3
  System_Boolean_array **v165; // x4
  System_Int32_array **v166; // x5
  System_Int32_array *v167; // x6
  System_Int32_array *v168; // x7
  const MethodInfo *v169; // x3
  struct BattleData_o *v170; // x8
  System_Int32_array **ValsList; // x0
  System_String_array **v172; // x2
  System_String_array **v173; // x3
  System_Boolean_array **v174; // x4
  System_Int32_array **v175; // x5
  System_Int32_array *v176; // x6
  System_Int32_array *v177; // x7
  int32_t v178; // w0
  int v179; // w8
  int v180; // w9
  UnityEngine_Object_o *v181; // x19
  bool v182; // w19
  int32_t v183; // w21
  BattleLogicFunction_o *v184; // x21
  CommandCodeInfo_o *UserCommandCode; // x0
  int32_t MaxHp; // w22
  int32_t v187; // w21
  bool v188; // w0
  BattleActionData_BuffData_o *v189; // x19
  __int64 v190; // x4
  int32_t v191; // w19
  bool IsCommandSideEffect; // w0
  const MethodInfo *v193; // x7
  BattleActionEffect_AddChangeMaxHpBuff_o *v194; // x19
  BattleLogicFunction_o *v195; // x28
  System_String_array **v196; // x2
  System_String_array **v197; // x3
  System_Boolean_array **v198; // x4
  System_Int32_array **v199; // x5
  System_Int32_array *v200; // x6
  System_Int32_array *v201; // x7
  BattleActionEffect_Base_o *v202; // x0
  int32_t id; // w19
  System_Collections_Generic_List_int__o *v204; // x0
  System_String_o *i; // x0
  System_String_o *v206; // x0
  System_String_o *v207; // x0
  System_String_o *v208; // x0
  System_Int32_array *QuestIndividualities; // x0
  UnityEngine_Object_o *v210; // x21
  System_Int32_array *v211; // x19
  BattlePerformance_o *perf; // x2
  struct BattleLogic_o *v213; // x8
  UnityEngine_Object_o *v214; // x19
  int v215; // w8
  BattleLogicFunction_o *v216; // x19
  unsigned int v217; // w21
  BattleLogicFunction_o *v218; // x21
  int32_t v219; // w19
  struct BattleData_o *v220; // x8
  BattleActionData_BuffData_o *v221; // x19
  BattleBuffData_o *buffData; // x19
  BattleBuffData_CheckIndividualitiesData_o *v223; // x21
  FunctionEntity_o *v224; // x2
  DataVals_o *v225; // x3
  int32_t v226; // w4
  const MethodInfo *v227; // x5
  bool v228; // w0
  BattleActionData_BuffData_o *v229; // x19
  const MethodInfo *v230; // x3
  __int64 v232; // x0
  __int64 v233; // x0
  BattleActionData_o *userCommandCodeId; // [xsp+8h] [xbp-B8h]
  int userCommandCodeIda; // [xsp+8h] [xbp-B8h]
  int32_t funcIndex; // [xsp+14h] [xbp-ACh]
  BattleActionData_o *v237; // [xsp+18h] [xbp-A8h]
  BattleActionData_o *v238; // [xsp+20h] [xbp-A0h]
  int32_t v239; // [xsp+28h] [xbp-98h]
  unsigned int uniqueId; // [xsp+2Ch] [xbp-94h]
  FunctionEntity_o *funcEnt; // [xsp+30h] [xbp-90h]
  BattleActionData_BuffData_o *v243; // [xsp+40h] [xbp-80h]
  BattleLogicFunction_o *v244; // [xsp+48h] [xbp-78h]
  int32_t treasureDvcId; // [xsp+54h] [xbp-6Ch]
  WarEntity_o *entity; // [xsp+58h] [xbp-68h] BYREF
  int v247; // [xsp+68h] [xbp-58h] BYREF
  bool isSelfTurn; // [xsp+6Ch] [xbp-54h] BYREF

  v6 = shortbuff;
  v8 = mainAction;
  v9 = this;
  if ( (byte_4353865 & 1) == 0 )
  {
    sub_B70694(&BattleActionEffect_AddChangeMaxHpBuff_TypeInfo);
    sub_B70694(&BattleActionData_TypeInfo);
    sub_B70694(&BattleDataDefine_TypeInfo);
    sub_B70694(&BattleBuffData_BuffData___TypeInfo);
    sub_B70694(&BattleBuffData_BuffData_TypeInfo);
    sub_B70694(&BuffList_TypeInfo);
    sub_B70694(&BattleBuffData_CheckIndividualitiesData_TypeInfo);
    sub_B70694(&Method_DataManager_GetMasterData_EventPointBuffMaster___);
    sub_B70694(&Method_DataManager_GetMasterData_UserEventPointMaster___);
    sub_B70694(&Method_DataManager_GetMaster_BuffTypeDetailMaster___);
    sub_B70694(&DataManager_TypeInfo);
    sub_B70694(&Method_DataMasterBase_BuffTypeDetailMaster__BuffTypeDetailEntity__int__TryGetEntity__);
    sub_B70694(&BattleBuffData_FieldAliveCondData_TypeInfo);
    sub_B70694(&int___TypeInfo);
    sub_B70694(&Method_System_Collections_Generic_List_int___ctor__);
    sub_B70694(&System_Collections_Generic_List_int__TypeInfo);
    sub_B70694(&BattleActionData_MasterBuffData_TypeInfo);
    sub_B70694(&System_Math_TypeInfo);
    sub_B70694(&UnityEngine_Object_TypeInfo);
    sub_B70694(&BattleBuffData_ParamAdd_TypeInfo);
    sub_B70694(&BattleBuffData_RelationOverwriteData_TypeInfo);
    sub_B70694(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_B70694(&StringLiteral_19225/*"functionAddState=>"*/);
    sub_B70694(&StringLiteral_13518/*"TAMAMOCAT_STUN_BUFF_ID"*/);
    this = (BattleLogicFunction_o *)sub_B70694(&StringLiteral_13519/*"TAMAMOCAT_TREASURE_DEVICE_ID_"*/);
    byte_4353865 = 1;
  }
  isSelfTurn = 0;
  entity = 0LL;
  v247 = 0;
  if ( !funcTarget )
    goto LABEL_305;
  if ( !v8 )
    goto LABEL_305;
  funcUnit_k__BackingField = funcTarget->fields._funcUnit_k__BackingField;
  if ( !funcUnit_k__BackingField )
    goto LABEL_305;
  dataVals_k__BackingField = funcUnit_k__BackingField->fields._dataVals_k__BackingField;
  if ( !dataVals_k__BackingField )
    goto LABEL_305;
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
  v14 = BattleLogicFunctionProcess_FunctionUnitCheck__get_FuncIndex(funcUnit_k__BackingField, 0LL);
  userCommandCodeId = (BattleActionData_o *)v8->fields.userCommandCodeId;
  treasureDvcId = v8->fields.treasureDvcId;
  funcIndex = v14;
  v15 = (BattleActionData_o *)sub_B70764(BattleActionData_TypeInfo);
  BattleActionData___ctor(v15, 0LL);
  this = (BattleLogicFunction_o *)v9->fields.data;
  if ( !this )
    goto LABEL_305;
  v238 = v15;
  this = (BattleLogicFunction_o *)BattleData__getServantData((BattleData_o *)this, actorId, 0LL);
  if ( !v9->fields.data )
    goto LABEL_305;
  v16 = (BattleServantData_o *)this;
  ServantData = BattleData__getServantData(v9->fields.data, uniqueId, 0LL);
  this = (BattleLogicFunction_o *)((__int64 (__fastcall *)(BattleLogicFunctionProcess_FunctionTargetCheck_o *, Il2CppMethodPointer))funcTarget->klass->vtable._7_MakeActionBuffData.method)(
                                    funcTarget,
                                    funcTarget->klass->vtable._8_AddBuff.methodPtr);
  if ( !v13 )
    goto LABEL_305;
  v18 = (BattleActionData_MasterBuffData_o *)this;
  this = (BattleLogicFunction_o *)BuffEntity__checkBuffType(v13, 142, 0LL);
  if ( ((unsigned __int8)this & 1) != 0 )
  {
    v18 = (BattleActionData_MasterBuffData_o *)sub_B70764(BattleActionData_MasterBuffData_TypeInfo);
    BattleActionData_MasterBuffData___ctor(v18, funcEnt, 0LL);
  }
  if ( !ServantData )
    goto LABEL_305;
  v239 = actorId;
  if ( !v18 )
    goto LABEL_305;
  v243 = (BattleActionData_BuffData_o *)v18;
  v18->fields.targetId = ServantData->fields.uniqueId;
  v18->fields.functionIndex = funcIndex;
  v19 = sub_B70764(BattleBuffData_BuffData_TypeInfo);
  BattleBuffData_BuffData___ctor((BattleBuffData_BuffData_o *)v19, 0LL);
  if ( !v19 )
    goto LABEL_305;
  *(_DWORD *)(v19 + 16) = v13->fields.id;
  if ( !args )
    goto LABEL_305;
  *(_DWORD *)(v19 + 164) = BattleLogicFunction_ProcListInArgs__get_SkillId(args, 0LL);
  *(_DWORD *)(v19 + 188) = BattleLogicFunction_ProcListInArgs__get_GrantSkillType(args, 0LL);
  *(_DWORD *)(v19 + 176) = DataVals__GetMotionChange(dataVals_k__BackingField, 0LL);
  *(_DWORD *)(v19 + 20) = 2 * DataVals__GetParam(dataVals_k__BackingField, 1, 0, 0LL);
  BattleBuffData_BuffData__RegisterGeneralParams((BattleBuffData_BuffData_o *)v19, dataVals_k__BackingField, 0LL);
  v21 = v8->fields.isReversalShortBuffTurn ^ v6;
  if ( (v21 & 1) != 0 )
    --*(_DWORD *)(v19 + 20);
  v244 = v9;
  this = (BattleLogicFunction_o *)BattleLogicFunction__IsSvtBuffTurnExtend(v9, uniqueId, v13, v21 & 1, v20);
  if ( ((unsigned __int8)this & 1) != 0 )
  {
    v21 ^= 1u;
    v22 = 1;
    ++*(_DWORD *)(v19 + 20);
  }
  else
  {
    v22 = 0;
  }
  *(_DWORD *)(v19 + 68) = v239;
  if ( !funcEnt )
    goto LABEL_305;
  v23 = (v21 ^ Target__isEnemy(funcEnt->fields.targetType, 0LL)) & 1;
  isSelfTurn = v23;
  type = v13->fields.type;
  if ( (BYTE3(BuffList_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !BuffList_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(BuffList_TypeInfo);
  this = (BattleLogicFunction_o *)BuffList__IsForceProgressSelfTurnType(type, 0LL);
  if ( ((unsigned __int8)this & 1) != 0 )
  {
    v23 = 1;
    isSelfTurn = 1;
  }
  if ( (v22 & 1) == 0 )
  {
    BattleLogicFunction__UpdateBuffProgressTurn(v244, v13->fields.type, &isSelfTurn, v25);
    v23 = isSelfTurn;
  }
  v26 = !v23;
  v27 = args;
  v28 = v26;
  v29 = v28 ^ ServantData->fields.isEnemy;
  *(_BYTE *)(v19 + 180) = v29;
  if ( (v22 & 1) == 0 )
  {
    this = (BattleLogicFunction_o *)BuffEntity__GetProgressSelfTurn(v13, 0LL);
    if ( ((unsigned int)this & 0x80000000) != 0 )
    {
      v29 = *(unsigned __int8 *)(v19 + 180);
    }
    else
    {
      v29 = ((_DWORD)this == 0) ^ ServantData->fields.isEnemy;
      *(_BYTE *)(v19 + 180) = v29;
    }
  }
  *(_BYTE *)(v19 + 192) = (v29 == 0) ^ ServantData->fields.isEnemy;
  data = v244->fields.data;
  if ( !data )
    goto LABEL_305;
  this = (BattleLogicFunction_o *)data->fields.battleEvent;
  if ( !this )
    goto LABEL_305;
  *(_DWORD *)(v19 + 184) = ((__int64 (__fastcall *)(BattleLogicFunction_o *, BuffEntity_o *, Il2CppMethodPointer))this->klass[1].vtable._1_Finalize.method)(
                             this,
                             v13,
                             this->klass[1].vtable._2_GetHashCode.methodPtr);
  ProgressTurnCond = BuffEntity__GetProgressTurnCond(v13, 0LL);
  if ( (ProgressTurnCond & 0x80000000) == 0 )
    *(_DWORD *)(v19 + 184) = ProgressTurnCond;
  *(_DWORD *)(v19 + 24) = DataVals__GetParam(dataVals_k__BackingField, 2, 0, 0LL);
  *(_DWORD *)(v19 + 28) = DataVals__GetParam(dataVals_k__BackingField, 3, 0, 0LL);
  v243->fields.popDelay = DataVals__GetParam(dataVals_k__BackingField, 64, 0, 0LL);
  v32 = v13->fields.type;
  if ( (BYTE3(BuffList_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !BuffList_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(BuffList_TypeInfo);
  if ( BuffList__CheckType(143, v32, 0LL) )
    goto LABEL_56;
  v33 = v13->fields.type;
  if ( (BYTE3(BuffList_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !BuffList_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(BuffList_TypeInfo);
  if ( BuffList__CheckType(145, v33, 0LL) )
    goto LABEL_56;
  v34 = v13->fields.type;
  if ( (BYTE3(BuffList_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !BuffList_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(BuffList_TypeInfo);
  if ( BuffList__CheckType(146, v34, 0LL) )
    goto LABEL_56;
  v35 = v13->fields.type;
  if ( (BYTE3(BuffList_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !BuffList_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(BuffList_TypeInfo);
  if ( BuffList__CheckType(147, v35, 0LL) )
  {
LABEL_56:
    tdCommandTypeChange = args->fields.tdCommandTypeChange;
    if ( (tdCommandTypeChange & 0x80000000) == 0 )
      *(_DWORD *)(v19 + 28) = tdCommandTypeChange;
  }
  *(_DWORD *)(v19 + 52) = DataVals__GetParam(dataVals_k__BackingField, 8, 0, 0LL);
  *(_DWORD *)(v19 + 56) = DataVals__GetParam(dataVals_k__BackingField, 9, 0, 0LL);
  v37 = (System_Int32_array **)sub_B706AC(int___TypeInfo, 2LL);
  *(_QWORD *)(v19 + 40) = v37;
  sub_B70630((BattleServantConfConponent_o *)(v19 + 40), v37, v38, v39, v40, v41, v42, v43);
  v44 = *(_QWORD *)(v19 + 40);
  this = (BattleLogicFunction_o *)DataVals__GetParam(dataVals_k__BackingField, 3, 0, 0LL);
  if ( !v44 )
    goto LABEL_305;
  if ( !*(_DWORD *)(v44 + 24) )
    goto LABEL_306;
  *(_DWORD *)(v44 + 32) = (_DWORD)this;
  v45 = *(_QWORD *)(v19 + 40);
  this = (BattleLogicFunction_o *)DataVals__GetParam(dataVals_k__BackingField, 4, 0, 0LL);
  if ( !v45 )
    goto LABEL_305;
  if ( *(_DWORD *)(v45 + 24) <= 1u )
    goto LABEL_306;
  v237 = v8;
  *(_DWORD *)(v45 + 36) = (_DWORD)this;
  v46 = v13->fields.type;
  if ( (BYTE3(BuffList_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !BuffList_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(BuffList_TypeInfo);
  this = (BattleLogicFunction_o *)BuffList__CheckType(135, v46, 0LL);
  if ( ((unsigned __int8)this & 1) != 0 )
  {
    v47 = v244->fields.data;
    if ( !v47 )
      goto LABEL_305;
    battle_ent = v47->fields.battle_ent;
    if ( !battle_ent )
      goto LABEL_305;
    userId = battle_ent->fields.userId;
    eventId = battle_ent->fields.eventId;
    this = (BattleLogicFunction_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2CE992C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !this )
      goto LABEL_305;
    this = (BattleLogicFunction_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                      (DataManager_o *)this,
                                      (const MethodInfo_1CA35A0 *)Method_DataManager_GetMasterData_EventPointBuffMaster___);
    if ( !this )
      goto LABEL_305;
    v51 = (EventPointBuffMaster_o *)this;
    EventPointGroupId = EventPointBuffMaster__GetEventPointGroupId(
                          (EventPointBuffMaster_o *)this,
                          eventId,
                          funcEnt->fields.id,
                          0,
                          0LL);
    this = (BattleLogicFunction_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2CE992C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !this )
      goto LABEL_305;
    this = (BattleLogicFunction_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                      (DataManager_o *)this,
                                      (const MethodInfo_1CA35A0 *)Method_DataManager_GetMasterData_UserEventPointMaster___);
    if ( !this )
      goto LABEL_305;
    EntityDefinitely = UserEventPointMaster__GetEntityDefinitely(
                         (UserEventPointMaster_o *)this,
                         userId,
                         eventId,
                         EventPointGroupId,
                         0LL);
    v27 = args;
    if ( EntityDefinitely )
    {
      value = EntityDefinitely->fields.value;
      this = (BattleLogicFunction_o *)EventPointBuffMaster__GetAllEventBuff(
                                        v51,
                                        EntityDefinitely->fields.eventId,
                                        EventPointGroupId,
                                        0LL);
      if ( !this )
        goto LABEL_305;
      logic = (int)this->fields.logic;
      if ( logic >= 1 )
      {
        v56 = 0;
        v57 = 0LL;
        do
        {
          if ( v56 >= (unsigned int)logic )
            goto LABEL_306;
          v58 = *((_QWORD *)&this->fields.logictarget + v56);
          if ( !v58 )
            goto LABEL_305;
          if ( value < *(int *)(v58 + 28) )
            break;
          ++v56;
          v57 = v58;
        }
        while ( v56 < logic );
        if ( v57 )
          *(_DWORD *)(v19 + 28) += *(_DWORD *)(v57 + 64);
      }
    }
  }
  if ( DataVals__IsExistSnapShotParamAddIndv(dataVals_k__BackingField, 0LL) )
  {
    v59 = *(_DWORD *)(v19 + 28);
    v60 = v244->fields.data;
    v61 = (BattleBuffData_CheckIndividualitiesData_o *)sub_B70764(BattleBuffData_CheckIndividualitiesData_TypeInfo);
    BattleBuffData_CheckIndividualitiesData___ctor(v61, v16, ServantData, 0LL, 0LL, 0LL, 0LL);
    v62 = (BattleBuffData_ParamAdd_o *)sub_B70764(BattleBuffData_ParamAdd_TypeInfo);
    BattleBuffData_ParamAdd___ctor_24125020(v62, dataVals_k__BackingField, 0LL);
    v63 = v62;
    v27 = args;
    *(_DWORD *)(v19 + 28) = BattleBuffData__GetTotalParamAddValue((BattleBuffData_BuffData_o *)v19, v60, v61, v63, 0LL)
                          + v59;
  }
  if ( DataVals__isParam(dataVals_k__BackingField, 26, 0LL) && DataVals__isParam(dataVals_k__BackingField, 27, 0LL) )
  {
    v64 = (System_Int32_array **)sub_B706AC(int___TypeInfo, 2LL);
    *(_QWORD *)(v19 + 104) = v64;
    sub_B70630((BattleServantConfConponent_o *)(v19 + 104), v64, v65, v66, v67, v68, v69, v70);
    v71 = *(_QWORD *)(v19 + 104);
    this = (BattleLogicFunction_o *)DataVals__GetParam(dataVals_k__BackingField, 26, 0, 0LL);
    if ( !v71 )
      goto LABEL_305;
    if ( !*(_DWORD *)(v71 + 24) )
      goto LABEL_306;
    *(_DWORD *)(v71 + 32) = (_DWORD)this;
    v72 = *(_QWORD *)(v19 + 104);
    this = (BattleLogicFunction_o *)DataVals__GetParam(dataVals_k__BackingField, 27, 0, 0LL);
    if ( !v72 )
      goto LABEL_305;
    if ( *(_DWORD *)(v72 + 24) <= 1u )
      goto LABEL_306;
    *(_DWORD *)(v72 + 36) = (_DWORD)this;
  }
  *(_DWORD *)(v19 + 64) = DataVals__GetParam(dataVals_k__BackingField, 15, 0, 0LL);
  *(_DWORD *)(v19 + 344) = DataVals__GetClassIconAuraEffectId(dataVals_k__BackingField, 0LL);
  if ( DataVals__GetParam(dataVals_k__BackingField, 11, 0, 0LL) >= 1 )
    *(_DWORD *)(v19 + 60) = v239;
  v73 = v237;
  v74 = v244;
  if ( DataVals__GetParam(dataVals_k__BackingField, 46, 0, 0LL) >= 1 )
    BattleBuffData_BuffData__onState((BattleBuffData_BuffData_o *)v19, 0x8000, 0LL);
  if ( DataVals__GetParam(dataVals_k__BackingField, 50, 0, 0LL) >= 1 )
    BattleBuffData_BuffData__onState((BattleBuffData_BuffData_o *)v19, 0x10000, 0LL);
  if ( DataVals__GetParam(dataVals_k__BackingField, 88, 0, 0LL) >= 1 )
    BattleBuffData_BuffData__onState((BattleBuffData_BuffData_o *)v19, 0x80000, 0LL);
  if ( DataVals__GetParam(dataVals_k__BackingField, 90, 0, 0LL) >= 1 )
    BattleBuffData_BuffData__onState((BattleBuffData_BuffData_o *)v19, 0x100000, 0LL);
  if ( DataVals__GetParam(dataVals_k__BackingField, 65, 0, 0LL) >= 1 )
    BattleBuffData_BuffData__onState((BattleBuffData_BuffData_o *)v19, 0x40000, 0LL);
  if ( DataVals__GetParam(dataVals_k__BackingField, 143, 0, 0LL) >= 1 )
    BattleBuffData_BuffData__onState((BattleBuffData_BuffData_o *)v19, 0x2000000, 0LL);
  if ( DataVals__isParam(dataVals_k__BackingField, 42, 0LL) )
  {
    Param = DataVals__GetParam(dataVals_k__BackingField, 42, 0, 0LL);
    v76 = sub_B70764(BattleBuffData_FieldAliveCondData_TypeInfo);
    BattleBuffData_FieldAliveCondData___ctor((BattleBuffData_FieldAliveCondData_o *)v76, 0LL);
    if ( !v76 )
      goto LABEL_305;
    isEnemy = ServantData->fields.isEnemy;
    *(_BYTE *)(v76 + 17) = Param > 0;
    *(_BYTE *)(v76 + 16) = isEnemy;
    if ( (BYTE3(System_Math_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !System_Math_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(System_Math_TypeInfo);
    if ( Param >= 0 )
      v78 = Param;
    else
      v78 = -Param;
    *(_DWORD *)(v76 + 20) = v78;
    TargetIndiv = (System_Int32_array **)BuffEntity__GetTargetIndiv(v13, 0LL);
    *(_QWORD *)(v76 + 24) = TargetIndiv;
    sub_B70630((BattleServantConfConponent_o *)(v76 + 24), TargetIndiv, v80, v81, v82, v83, v84, v85);
    *(_BYTE *)(v76 + 32) = BuffEntity__IsIncludeIgnoreIndividuality(v13, 0LL);
    *(_QWORD *)(v19 + 152) = v76;
    sub_B70630((BattleServantConfConponent_o *)(v19 + 152), (System_Int32_array **)v76, v86, v87, v88, v89, v90, v91);
    v74 = v244;
    v27->fields.updateField = 1;
  }
  v92 = v13->fields.type;
  if ( (BYTE3(BuffList_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !BuffList_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(BuffList_TypeInfo);
  if ( BuffList__IsIntervalPossibleBuff(v92, 0LL) )
  {
    IntervalData = (System_Int32_array **)DataVals__GetIntervalData(dataVals_k__BackingField, 0LL);
    *(_QWORD *)(v19 + 360) = IntervalData;
    sub_B70630((BattleServantConfConponent_o *)(v19 + 360), IntervalData, v94, v95, v96, v97, v98, v99);
  }
  if ( BattleBuffData__CheckInvalidSacrificeIndiv((BattleBuffData_BuffData_o *)v19, 0LL) )
    v27->fields.updateField = 1;
  ParamArray = (System_Int32_array **)DataVals__GetParamArray(dataVals_k__BackingField, 114, 0LL);
  *(_QWORD *)(v19 + 328) = ParamArray;
  sub_B70630((BattleServantConfConponent_o *)(v19 + 328), ParamArray, v101, v102, v103, v104, v105, v106);
  *(_DWORD *)(v19 + 208) = BuffEntity__GetCardEffectId(v13, 0LL);
  v107 = v13->fields.type;
  if ( (BYTE3(BuffList_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !BuffList_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(BuffList_TypeInfo);
  if ( BuffList__CheckType(144, v107, 0LL) )
  {
    RelationId = BuffEntity__getRelationId(v13, 0LL);
    v109 = (BattleBuffData_RelationOverwriteData_o *)sub_B70764(BattleBuffData_RelationOverwriteData_TypeInfo);
    BattleBuffData_RelationOverwriteData___ctor(v109, 0LL);
    if ( RelationId >= 1 )
    {
      this = (BattleLogicFunction_o *)BuffEntity__getRelationId(v13, 0LL);
      if ( !v109 )
        goto LABEL_305;
      v109->fields.id = (int)this;
      v116 = BattleDataDefine_TypeInfo;
      if ( (BYTE3(BattleDataDefine_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !BattleDataDefine_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(BattleDataDefine_TypeInfo);
        v116 = BattleDataDefine_TypeInfo;
      }
      v109->fields.atkPriority = BuffEntity__getAtkRelationPriority(
                                   v13,
                                   v116->static_fields->OVERWRITE_ATK_RATE_PRIORITY,
                                   0LL);
      v109->fields.defPriority = BuffEntity__getDefRelationPriority(
                                   v13,
                                   BattleDataDefine_TypeInfo->static_fields->OVERWRITE_DEF_RATE_PRIORITY,
                                   0LL);
    }
    *(_QWORD *)(v19 + 168) = v109;
    sub_B70630(
      (BattleServantConfConponent_o *)(v19 + 168),
      (System_Int32_array **)v109,
      v110,
      v111,
      v112,
      v113,
      v114,
      v115);
    v74 = v244;
  }
  v117 = v13->fields.type;
  if ( (BYTE3(BuffList_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !BuffList_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(BuffList_TypeInfo);
  if ( BuffList__CheckType(154, v117, 0LL) )
  {
    this = (BattleLogicFunction_o *)BattleServantData__get_BuffData(ServantData, 0LL);
    if ( !this )
      goto LABEL_305;
    this = (BattleLogicFunction_o *)this->fields.wkStr;
    if ( !this )
      goto LABEL_305;
    BattleBuffData_SkillRankChangeData__UpdateAddRightAfter((BattleBuffData_SkillRankChangeData_o *)this, 1, 0LL);
    BattleActionData_BuffData__OnUpdateBuffType(v243, 1, 0LL);
  }
  v118 = BuffEntity__checkBuffType(v13, 7, 0LL);
  if ( v16 && v118 )
  {
    UpDownGiveHeal = BattleServantData__getUpDownGiveHeal(v16, ServantData, 0LL);
    v120 = BattleUtility__FloorToInt(UpDownGiveHeal * (float)*(int *)(v19 + 28), 0LL);
    v121 = *(_DWORD *)(v19 + 52);
    *(_DWORD *)(v19 + 28) = v120;
    v122 = BattleUtility__FloorToInt(UpDownGiveHeal * (float)v121, 0LL);
    v123 = *(_DWORD *)(v19 + 56);
    *(_DWORD *)(v19 + 52) = v122;
    *(_DWORD *)(v19 + 56) = BattleUtility__FloorToInt(UpDownGiveHeal * (float)v123, 0LL);
    BattleServantData__getIndividualities(v16, 0LL, 0LL);
  }
  *(_BYTE *)(v19 + 32) = 0;
  *(_BYTE *)(v19 + 33) = BattleLogicFunction_ProcListInArgs__get_IsPassive(v27, 0LL);
  if ( DataVals__isParam(dataVals_k__BackingField, 23, 0LL) )
    *(_BYTE *)(v19 + 33) = 1;
  if ( DataVals__isParam(dataVals_k__BackingField, 24, 0LL) )
    *(_BYTE *)(v19 + 33) = 0;
  if ( dataVals_k__BackingField->fields.flgBoost )
    BattleBuffData_BuffData__onState((BattleBuffData_BuffData_o *)v19, 2, 0LL);
  if ( DataVals__isRatioHpRange(dataVals_k__BackingField, 0LL) )
  {
    *(_DWORD *)(v19 + 72) = DataVals__GetParam(dataVals_k__BackingField, 20, 0, 0LL);
    *(_DWORD *)(v19 + 76) = DataVals__GetParam(dataVals_k__BackingField, 21, 0, 0LL);
    *(_DWORD *)(v19 + 80) = DataVals__GetParam(dataVals_k__BackingField, 30, 0, 0LL);
    *(_DWORD *)(v19 + 84) = DataVals__GetParam(dataVals_k__BackingField, 31, 0, 0LL);
  }
  else if ( DataVals__isParam(dataVals_k__BackingField, 20, 0LL) )
  {
    *(_DWORD *)(v19 + 72) = DataVals__GetParam(dataVals_k__BackingField, 20, 0, 0LL);
  }
  else if ( DataVals__isParam(dataVals_k__BackingField, 21, 0LL) )
  {
    *(_DWORD *)(v19 + 76) = DataVals__GetParam(dataVals_k__BackingField, 21, 0, 0LL);
  }
  if ( DataVals__isParamAddIndividuality(dataVals_k__BackingField, 0LL) )
  {
    v124 = (System_Int32_array **)DataVals__GetParamArray(dataVals_k__BackingField, 69, 0LL);
    *(_QWORD *)(v19 + 224) = v124;
    sub_B70630((BattleServantConfConponent_o *)(v19 + 224), v124, v125, v126, v127, v128, v129, v130);
    v131 = (System_Int32_array **)DataVals__GetParamArray(dataVals_k__BackingField, 70, 0LL);
    *(_QWORD *)(v19 + 232) = v131;
    sub_B70630((BattleServantConfConponent_o *)(v19 + 232), v131, v132, v133, v134, v135, v136, v137);
    v138 = (System_Int32_array **)DataVals__GetParamArray(dataVals_k__BackingField, 71, 0LL);
    *(_QWORD *)(v19 + 240) = v138;
    sub_B70630((BattleServantConfConponent_o *)(v19 + 240), v138, v139, v140, v141, v142, v143, v144);
    *(_DWORD *)(v19 + 248) = DataVals__GetParam(dataVals_k__BackingField, 72, 0, 0LL);
    *(_DWORD *)(v19 + 252) = DataVals__GetParam(dataVals_k__BackingField, 59, 0, 0LL);
    *(_DWORD *)(v19 + 268) = DataVals__GetParam(dataVals_k__BackingField, 60, 0, 0LL);
  }
  v145 = v13->fields.type;
  if ( (BYTE3(BuffList_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !BuffList_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(BuffList_TypeInfo);
  if ( BuffList__CheckType(162, v145, 0LL) )
  {
    UpBuffRateBuffTypeList = (System_Int32_array **)BuffEntity__GetUpBuffRateBuffTypeList(v13, 0LL);
    *(_QWORD *)(v19 + 256) = UpBuffRateBuffTypeList;
    sub_B70630((BattleServantConfConponent_o *)(v19 + 256), UpBuffRateBuffTypeList, v147, v148, v149, v150, v151, v152);
    *(_DWORD *)(v19 + 264) = BuffEntity__GetMaxBuffRate(v13, 0LL);
  }
  if ( DataVals__isParam(dataVals_k__BackingField, 22, 0LL) )
    BattleBuffData_BuffData__onState((BattleBuffData_BuffData_o *)v19, 64, 0LL);
  if ( DataVals__isParam(dataVals_k__BackingField, 25, 0LL) )
    BattleBuffData_BuffData__onState((BattleBuffData_BuffData_o *)v19, 128, 0LL);
  this = (BattleLogicFunction_o *)DataVals__isShowState(dataVals_k__BackingField, 0LL);
  if ( ((unsigned __int8)this & 1) != 0 )
  {
    LODWORD(mainAction) = DataVals__GetParam(dataVals_k__BackingField, 14, 0, 0LL);
LABEL_167:
    BattleBuffData_BuffData__setShowState((BattleBuffData_BuffData_o *)v19, (int32_t)mainAction, 0LL);
    goto LABEL_185;
  }
  if ( *(_BYTE *)(v19 + 33) )
  {
    externalArg = v27->fields.externalArg;
    if ( !externalArg )
      goto LABEL_305;
    if ( externalArg->fields.isWarBoard )
    {
      if ( !v16 )
        goto LABEL_305;
      if ( v16->fields.isEnemy && externalArg->fields.grantSkillType == 12 )
      {
        LODWORD(mainAction) = BuffEntity__GetShowStateWarBoardEnemyEquip(v13, 0, 0LL);
        if ( (_DWORD)mainAction )
          goto LABEL_167;
        if ( (BYTE3(DataManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !DataManager_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
        }
        this = (BattleLogicFunction_o *)DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_1CA3540 *)Method_DataManager_GetMaster_BuffTypeDetailMaster___);
        if ( !this )
          goto LABEL_305;
        this = (BattleLogicFunction_o *)DataMasterBase_WarMaster__WarEntity__int___TryGetEntity(
                                          (DataMasterBase_WarMaster__WarEntity__int__o *)this,
                                          &entity,
                                          v13->fields.type,
                                          (const MethodInfo_21C049C *)Method_DataMasterBase_BuffTypeDetailMaster__BuffTypeDetailEntity__int__TryGetEntity__);
        if ( ((unsigned __int8)this & 1) != 0 )
        {
          this = (BattleLogicFunction_o *)entity;
          if ( !entity )
            goto LABEL_305;
          this = (BattleLogicFunction_o *)BuffTypeDetailEntity__GetShowStateWarBoardEnemyEquip(
                                            (BuffTypeDetailEntity_o *)entity,
                                            0,
                                            0LL);
          mainAction = (BattleActionData_o *)(unsigned int)this;
          if ( (_DWORD)this )
            goto LABEL_167;
        }
      }
    }
    v154 = v74->fields.data;
    if ( !v154 )
      goto LABEL_305;
    this = (BattleLogicFunction_o *)v154->fields.battleEvent;
    if ( !this )
      goto LABEL_305;
    ((void (__fastcall *)(BattleLogicFunction_o *, __int64, Il2CppMethodPointer))this->klass[1].vtable._2_GetHashCode.method)(
      this,
      v19,
      this->klass[1].vtable._3_ToString.methodPtr);
  }
LABEL_185:
  if ( DataVals__IsOpponentOnly(dataVals_k__BackingField, 0LL) )
    BattleBuffData_BuffData__onState((BattleBuffData_BuffData_o *)v19, 2048, 0LL);
  if ( DataVals__isShowCommand(dataVals_k__BackingField, 0LL) )
    BattleBuffData_BuffData__onState((BattleBuffData_BuffData_o *)v19, 512, 0LL);
  if ( DataVals__IsAddIndividualty(dataVals_k__BackingField, 0LL) )
  {
    AddIndividualty = (System_Int32_array **)DataVals__GetAddIndividualty(dataVals_k__BackingField, 0LL);
    *(_QWORD *)(v19 + 120) = AddIndividualty;
    sub_B70630((BattleServantConfConponent_o *)(v19 + 120), AddIndividualty, v156, v157, v158, v159, v160, v161);
  }
  if ( DataVals__IsAddLinkageTargetIndividualty(dataVals_k__BackingField, 0LL) )
  {
    LinkageTargetIndividualty = (System_Int32_array **)DataVals__GetLinkageTargetIndividualty(
                                                         dataVals_k__BackingField,
                                                         0LL);
    *(_QWORD *)(v19 + 128) = LinkageTargetIndividualty;
    sub_B70630(
      (BattleServantConfConponent_o *)(v19 + 128),
      LinkageTargetIndividualty,
      v163,
      v164,
      v165,
      v166,
      v167,
      v168);
  }
  this = (BattleLogicFunction_o *)funcTarget->fields._funcUnit_k__BackingField;
  if ( !this )
    goto LABEL_305;
  if ( BattleLogicFunctionProcess_FunctionUnitCheck__HasLinkedFuncUnit(
         (BattleLogicFunctionProcess_FunctionUnitCheck_o *)this,
         0LL)
    && DataVals__IsBehaveAsFamilyBuff(dataVals_k__BackingField, 0LL) )
  {
    BattleLogicFunction__BehaveLinkageBuffAsFamily(v74, (BattleBuffData_BuffData_o *)v19, funcTarget, v169);
  }
  if ( DataVals__isParam(dataVals_k__BackingField, 98, 0LL) )
    BattleBuffData_BuffData__onState((BattleBuffData_BuffData_o *)v19, 0x800000, 0LL);
  if ( DataVals__isParam(dataVals_k__BackingField, 99, 0LL) )
    BattleBuffData_BuffData__onState((BattleBuffData_BuffData_o *)v19, 0x1000000, 0LL);
  if ( BuffEntity__getAppearanceId(v13, 0LL) >= 1 )
  {
    this = (BattleLogicFunction_o *)BattleServantData__isShiftableServant(ServantData, 0LL);
    if ( ((unsigned __int8)this & 1) != 0 )
      goto LABEL_208;
    v170 = v74->fields.data;
    if ( !v170 )
      goto LABEL_305;
    this = (BattleLogicFunction_o *)v170->fields.battleEvent;
    if ( !this )
      goto LABEL_305;
    if ( ((*(__int64 (__fastcall **)(BattleLogicFunction_o *, BattleServantData_o *, _QWORD))&this->klass[1]._2.element_size)(
            this,
            ServantData,
            *(_QWORD *)&this->klass[1]._2.static_fields_size) & 1) != 0
      || BattleServantData__isLogicResultAlive(ServantData, 0LL)
      || BattleServantData__isGuts(ServantData, 0LL) )
    {
LABEL_208:
      BattleBuffData_BuffData__onState((BattleBuffData_BuffData_o *)v19, 256, 0LL);
    }
  }
  *(_BYTE *)(v19 + 370) = DataVals__IsEqualsTo1(dataVals_k__BackingField, 158, 0LL);
  *(_DWORD *)(v19 + 276) = DataVals__GetParam(dataVals_k__BackingField, 92, 0, 0LL);
  *(_DWORD *)(v19 + 280) = DataVals__GetParam(dataVals_k__BackingField, 93, 0, 0LL);
  *(_DWORD *)(v19 + 284) = DataVals__GetParam(dataVals_k__BackingField, 94, 0, 0LL);
  *(_BYTE *)(v19 + 288) = DataVals__GetParam(dataVals_k__BackingField, 95, 0, 0LL) == 1;
  *(_BYTE *)(v19 + 289) = DataVals__GetParam(dataVals_k__BackingField, 96, 0, 0LL) == 1;
  ValsList = (System_Int32_array **)DataVals__GetValsList(dataVals_k__BackingField, 100, 0LL);
  *(_QWORD *)(v19 + 304) = ValsList;
  sub_B70630((BattleServantConfConponent_o *)(v19 + 304), ValsList, v172, v173, v174, v175, v176, v177);
  v178 = DataVals__GetParam(dataVals_k__BackingField, 5, 0, 0LL);
  v179 = *(_DWORD *)(v19 + 60);
  if ( v178 )
    v180 = v178;
  else
    v180 = 1000;
  *(_DWORD *)(v19 + 48) = v180;
  if ( v179 < 1 )
    goto LABEL_219;
  v181 = (UnityEngine_Object_o *)v74->fields.logic;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( UnityEngine_Object__op_Inequality(v181, 0LL, 0LL) )
  {
    this = (BattleLogicFunction_o *)v74->fields.logic;
    if ( !this )
      goto LABEL_305;
    v182 = BattleLogic__checkInField((BattleLogic_o *)this, *(_DWORD *)(v19 + 60), 0LL);
  }
  else
  {
LABEL_219:
    v182 = 1;
  }
  v183 = v13->fields.type;
  if ( (BYTE3(BuffList_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !BuffList_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(BuffList_TypeInfo);
  if ( BuffList__CheckAccumulation(v183, 0LL) )
    BattleServantData__resetAccumulationDamage(ServantData, 0LL);
  mainAction = userCommandCodeId;
  v184 = v244;
  *(_QWORD *)(v19 + 88) = userCommandCodeId;
  if ( (__int64)userCommandCodeId >= 1 )
  {
    this = (BattleLogicFunction_o *)v244->fields.data;
    if ( !this )
      goto LABEL_305;
    UserCommandCode = BattleData__getUserCommandCode((BattleData_o *)this, (int64_t)userCommandCodeId, 0LL);
    if ( UserCommandCode )
      *(_DWORD *)(v19 + 160) = UserCommandCode->fields.commandCodeId;
  }
  *(_DWORD *)(v19 + 348) = v237->fields.commandAssistId;
  *(_DWORD *)(v19 + 352) = v237->fields.cardIndex;
  ((void (__fastcall *)(BattleLogicFunctionProcess_FunctionTargetCheck_o *, __int64, Il2CppMethodPointer))funcTarget->klass->vtable._6_ApplyPrevSaveBuffData.method)(
    funcTarget,
    v19,
    funcTarget->klass->vtable._7_MakeActionBuffData.methodPtr);
  MaxHp = BattleServantData__getMaxHp(ServantData, 0LL);
  userCommandCodeIda = ((__int64 (__fastcall *)(BattleServantData_o *, Il2CppMethodPointer))ServantData->klass->vtable._9_get_hp.method)(
                         ServantData,
                         ServantData->klass->vtable._10_set_hp.methodPtr);
  if ( !v182 )
    goto LABEL_236;
  v187 = v13->fields.type;
  if ( (BYTE3(BuffList_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !BuffList_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(BuffList_TypeInfo);
  v188 = BuffList__CheckUpdateHp(v187, 0LL);
  v184 = v244;
  if ( v188 )
  {
    v189 = v243;
    v243->fields.procType = 2;
    if ( BattleServantData__isLogicResultAlive(ServantData, 0LL) )
    {
      v190 = 1LL;
    }
    else
    {
      if ( BattleServantData__isGuts(ServantData, 0LL) )
      {
        v191 = ServantData->fields.uniqueId;
        IsCommandSideEffect = BattleLogicFunction_ProcListInArgs__get_IsCommandSideEffect(args, 0LL);
        mainAction = BattleLogicFunction__getNoEffectObject(
                       v244,
                       v191,
                       funcIndex,
                       dataVals_k__BackingField,
                       IsCommandSideEffect,
                       0LL,
                       0LL,
                       v193);
        this = (BattleLogicFunction_o *)v238;
        if ( !v238 )
          goto LABEL_305;
        BattleActionData__addAction(v238, mainAction, 0LL);
        v189 = v243;
      }
      v190 = 0LL;
    }
    ((void (__fastcall *)(BattleLogicFunctionProcess_FunctionTargetCheck_o *, BattleActionData_BuffData_o *, __int64, __int64, __int64, Il2CppMethodPointer))funcTarget->klass->vtable._8_AddBuff.method)(
      funcTarget,
      v189,
      v19,
      1LL,
      v190,
      funcTarget->klass->vtable._9_AfterAddBuffProc.methodPtr);
    this = (BattleLogicFunction_o *)v238;
    if ( !v238 )
      goto LABEL_305;
    BattleActionData__addReflectLogicResultServantId(v238, uniqueId, 0LL);
    v194 = (BattleActionEffect_AddChangeMaxHpBuff_o *)sub_B70764(BattleActionEffect_AddChangeMaxHpBuff_TypeInfo);
    BattleActionEffect_AddChangeMaxHpBuff___ctor(v194, 0LL);
    this = (BattleLogicFunction_o *)sub_B706AC(BattleBuffData_BuffData___TypeInfo, 1LL);
    if ( !this )
      goto LABEL_305;
    v195 = this;
    this = (BattleLogicFunction_o *)sub_B70754(v19, this->klass->_1.element_class);
    if ( !this )
    {
      v233 = sub_B7078C(0LL);
      sub_B70738(v233, 0LL);
    }
    if ( !LODWORD(v195->fields.logic) )
      goto LABEL_306;
    v195->fields.logictarget = (struct BattleLogicTarget_o *)v19;
    sub_B70630(
      (BattleServantConfConponent_o *)&v195->fields.logictarget,
      (System_Int32_array **)v19,
      v196,
      v197,
      v198,
      v199,
      v200,
      v201);
    this = (BattleLogicFunction_o *)BattleServantData__getNowHp(ServantData, 0LL);
    if ( !v194 )
      goto LABEL_305;
    v202 = (BattleActionEffect_Base_o *)((__int64 (__fastcall *)(BattleActionEffect_AddChangeMaxHpBuff_o *, BattleLogicFunction_o *, _QWORD, _QWORD, Il2CppMethodPointer))v194->klass->vtable._7_InitBuff.method)(
                                          v194,
                                          v195,
                                          uniqueId,
                                          (unsigned int)((_DWORD)this - userCommandCodeIda),
                                          v194->klass->vtable._8_PartialPreActionProc.methodPtr);
    BattleActionData_BuffData__SetActionEffectProc(v243, v202, 0LL);
    v73 = v237;
  }
  else
  {
LABEL_236:
    ((void (__fastcall *)(BattleLogicFunctionProcess_FunctionTargetCheck_o *, BattleActionData_BuffData_o *, __int64, bool, _QWORD, Il2CppMethodPointer))funcTarget->klass->vtable._8_AddBuff.method)(
      funcTarget,
      v243,
      v19,
      v182,
      0LL,
      funcTarget->klass->vtable._9_AfterAddBuffProc.methodPtr);
  }
  id = v13->fields.id;
  if ( id == ConstantMaster__getValue((System_String_o *)StringLiteral_13518/*"TAMAMOCAT_STUN_BUFF_ID"*/, 0LL) )
  {
    v204 = (System_Collections_Generic_List_int__o *)sub_B70764(System_Collections_Generic_List_int__TypeInfo);
    System_Collections_Generic_List_int____ctor(
      v204,
      (const MethodInfo_30B547C *)Method_System_Collections_Generic_List_int___ctor__);
    v247 = 1;
    for ( i = System_Int32__ToString((int32_t)&v247, 0LL); ; i = System_Int32__ToString((int32_t)&v247, 0LL) )
    {
      v208 = System_String__Concat_44758168((System_String_o *)StringLiteral_13519/*"TAMAMOCAT_TREASURE_DEVICE_ID_"*/, i, 0LL);
      if ( ConstantMaster__getValue(v208, 0LL) == -1 )
        break;
      v206 = System_Int32__ToString((int32_t)&v247, 0LL);
      v207 = System_String__Concat_44758168((System_String_o *)StringLiteral_13519/*"TAMAMOCAT_TREASURE_DEVICE_ID_"*/, v206, 0LL);
      this = (BattleLogicFunction_o *)ConstantMaster__getValue(v207, 0LL);
      if ( (_DWORD)this == treasureDvcId )
      {
        if ( !v16 )
          goto LABEL_305;
        BattleServantData__SetIsSleepWaitMode(v16, 1, 0LL);
      }
      ++v247;
    }
  }
  this = (BattleLogicFunction_o *)v184->fields.data;
  if ( !this )
    goto LABEL_305;
  QuestIndividualities = BattleData__getQuestIndividualities((BattleData_o *)this, 0LL);
  v210 = (UnityEngine_Object_o *)v184->fields.logic;
  v211 = QuestIndividualities;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  this = (BattleLogicFunction_o *)UnityEngine_Object__op_Inequality(v210, 0LL, 0LL);
  perf = 0LL;
  if ( ((unsigned __int8)this & 1) != 0 )
  {
    v213 = v244->fields.logic;
    if ( !v213 )
      goto LABEL_305;
    perf = v213->fields.perf;
  }
  BattleServantData__updateConditionsBuff(ServantData, v211, perf, 0LL);
  if ( BuffEntity__checkBuffType(v13, 133, 0LL) || *(_QWORD *)(v19 + 312) )
  {
    v214 = (UnityEngine_Object_o *)v244->fields.logic;
    if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    }
    if ( UnityEngine_Object__op_Inequality(v214, 0LL, 0LL) )
    {
      this = (BattleLogicFunction_o *)v244->fields.logic;
      if ( !this )
        goto LABEL_305;
      BattleLogic__updateConditionsBuffAll((BattleLogic_o *)this, 0LL);
    }
    this = (BattleLogicFunction_o *)v244->fields.data;
    if ( !this )
      goto LABEL_305;
    this = (BattleLogicFunction_o *)BattleData__getFieldServantList((BattleData_o *)this, 0, 0LL);
    if ( !this )
      goto LABEL_305;
    v215 = (int)this->fields.logic;
    v216 = this;
    if ( v215 >= 1 )
    {
      v217 = 0;
      while ( v217 < v215 )
      {
        this = (BattleLogicFunction_o *)*((_QWORD *)&v216->fields.logictarget + (int)v217);
        if ( !this )
          goto LABEL_305;
        BattleServantData__updateBuff((BattleServantData_o *)this, 1, 1, 0LL);
        v215 = (int)v216->fields.logic;
        if ( (int)++v217 >= v215 )
          goto LABEL_276;
      }
LABEL_306:
      v232 = sub_B70798(this);
      sub_B70738(v232, 0LL);
    }
  }
LABEL_276:
  this = (BattleLogicFunction_o *)BattleServantData__getMaxHp(ServantData, 0LL);
  v218 = v244;
  if ( (int)this < MaxHp )
  {
    this = (BattleLogicFunction_o *)BuffEntity__checkBuffType(v13, 41, 0LL);
    if ( ((unsigned __int8)this & 1) != 0 )
    {
      v219 = ServantData->fields.maxhp;
      if ( (BYTE3(System_Math_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !System_Math_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(System_Math_TypeInfo);
      }
      this = (BattleLogicFunction_o *)System_Math__Max_45601072(0, userCommandCodeIda - v219, 0LL);
      *(_DWORD *)(v19 + 136) = (_DWORD)this;
    }
  }
  v220 = v244->fields.data;
  if ( !v220 )
    goto LABEL_305;
  this = (BattleLogicFunction_o *)v220->fields.battleEvent;
  v221 = v243;
  if ( !this )
    goto LABEL_305;
  *(_BYTE *)(v19 + 212) = (*(__int64 (__fastcall **)(BattleLogicFunction_o *, __int64, BuffEntity_o *, DataVals_o *, _QWORD))&this->klass[1]._2.field_count)(
                            this,
                            v19,
                            v13,
                            dataVals_k__BackingField,
                            *(_QWORD *)&this->klass[1]._2.interfaces_count) & 1;
  if ( BuffEntity__checkBuffType(v13, 140, 0LL) )
  {
    buffData = ServantData->fields.buffData;
    v223 = (BattleBuffData_CheckIndividualitiesData_o *)sub_B70764(BattleBuffData_CheckIndividualitiesData_TypeInfo);
    BattleBuffData_CheckIndividualitiesData___ctor(v223, ServantData, 0LL, 0LL, 0LL, 0LL, 0LL);
    if ( !buffData )
      goto LABEL_305;
    this = (BattleLogicFunction_o *)BattleBuffData__getBuffList_31751548(buffData, 83, v223, 1, 0, 0LL, 0LL);
    if ( !this )
      goto LABEL_305;
    v221 = v243;
    v218 = v244;
    if ( this->fields.logic )
      BattleLogicFunction__functionResetCommandCard(v244, (int32_t)mainAction, v224, v225, v226, v227);
  }
  if ( DataVals__IsOnParty(dataVals_k__BackingField, 0LL) )
    *(_DWORD *)(v19 + 272) = v239;
  v228 = BattleLogicFunction_ProcListInArgs__get_IsCommandSideEffect(args, 0LL);
  v229 = (BattleActionData_BuffData_o *)((__int64 (__fastcall *)(BattleLogicFunctionProcess_FunctionTargetCheck_o *, BattleActionData_BuffData_o *, __int64, FunctionEntity_o *, bool, Il2CppMethodPointer))funcTarget->klass->vtable._11_MakeAddActionBuffData.method)(
                                          funcTarget,
                                          v221,
                                          v19,
                                          funcEnt,
                                          v228,
                                          funcTarget->klass->vtable._12_GetConvertBuffEntity.methodPtr);
  if ( DataVals__IsProgressTurnOnBoard(dataVals_k__BackingField, 0LL) )
    *(_BYTE *)(v19 + 368) = 1;
  if ( DataVals__GetParam(dataVals_k__BackingField, 148, 0, 0LL) > 0
    || BuffEntity__IsDelayRemoveExpiredOnPlayerTurn(v13, 0LL) )
  {
    *(_BYTE *)(v19 + 369) = 1;
  }
  BattleLogicFunction__AfterAddedBuffProcess(v218, ServantData, v13, v230);
  if ( BuffEntity__getDamageRelease(v13, 0LL) >= 1
    && !BattleServantData__isLogicResultAlive(ServantData, 0LL)
    && (this = (BattleLogicFunction_o *)BattleServantData__isGuts(ServantData, 0LL), ((unsigned __int8)this & 1) != 0)
    || (this = (BattleLogicFunction_o *)BuffEntity__getDamageRelease(v13, 0LL), (_DWORD)this == -1) )
  {
    ServantData->fields.isGutsSleepRelease = 0;
  }
  if ( !v238
    || (BattleActionData__setBuffData(v238, v229, dataVals_k__BackingField, 0LL),
        (this = (BattleLogicFunction_o *)v218->fields.data) == 0LL) )
  {
LABEL_305:
    sub_B7076C(this, mainAction);
  }
  BattleData__AddFreshBuffList((BattleData_o *)this, v229, 0LL);
  BattleActionData__addAction(v73, v238, 0LL);
  ((void (__fastcall *)(BattleLogicFunctionProcess_FunctionTargetCheck_o *, BattleActionData_o *, BattleActionData_BuffData_o *, __int64, Il2CppMethodPointer))funcTarget->klass->vtable._9_AfterAddBuffProc.method)(
    funcTarget,
    v73,
    v229,
    v19,
    funcTarget->klass->vtable._10_MakeWrapTarget.methodPtr);
  return (BattleBuffData_BuffData_o *)v19;
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
  System_Int32_array **v17; // x0
  System_String_array **v18; // x2
  System_String_array **v19; // x3
  System_Boolean_array **v20; // x4
  System_Int32_array **v21; // x5
  System_Int32_array *v22; // x6
  System_Int32_array *v23; // x7
  int32_t v24; // w26
  int32_t v25; // w27
  FunctionEntity_o *funcEnt; // x28
  _BOOL8 v27; // x0
  const MethodInfo *v28; // x6
  BattleActionData_ShiftServant_o *v29; // x19
  SimpleHpData_o *v30; // x19
  EnemySimpleHpData_o *v31; // x27
  unsigned int Value; // w0
  int v33; // w0
  int v34; // w24
  int v35; // w22
  int32_t v36; // w25
  int32_t Param; // w0
  SimpleHpData_o *v38; // x26
  unsigned int CurrentShiftPos; // w28
  unsigned int MaxShiftIconPos; // w0
  int v41; // [xsp+Ch] [xbp-74h]
  BattleActionData_ShiftServant_o *v42; // [xsp+10h] [xbp-70h]
  BattleActionData_o *v43; // [xsp+18h] [xbp-68h]
  BattleActionData_o *v44; // [xsp+20h] [xbp-60h]
  BattleLogicFunction_o *v45; // [xsp+28h] [xbp-58h]

  v45 = this;
  if ( (byte_4353890 & 1) == 0 )
  {
    sub_B70694(&BattleActionData_TypeInfo);
    sub_B70694(&EnemySimpleHpData_TypeInfo);
    sub_B70694(&System_Math_TypeInfo);
    sub_B70694(&BattleActionData_ShiftServant_TypeInfo);
    this = (BattleLogicFunction_o *)sub_B70694(&SimpleHpData_TypeInfo);
    byte_4353890 = 1;
  }
  if ( !funcUnit || !targetSvtData )
    goto LABEL_33;
  procArg_k__BackingField = funcUnit->fields._procArg_k__BackingField;
  dataVals_k__BackingField = funcUnit->fields._dataVals_k__BackingField;
  this = (BattleLogicFunction_o *)BattleServantData__isShiftServant(targetSvtData, 0LL);
  if ( ((unsigned __int8)this & 1) == 0 )
    goto LABEL_36;
  if ( !shiftGauge )
    goto LABEL_33;
  this = (BattleLogicFunction_o *)((__int64 (__fastcall *)(BattleActionData_BaseShiftGaugeData_o *, BattleServantData_o *, Il2CppMethodPointer))shiftGauge->klass->vtable._8_unknown.method)(
                                    shiftGauge,
                                    targetSvtData,
                                    shiftGauge->klass->vtable._9_unknown.methodPtr);
  if ( ((unsigned __int8)this & 1) != 0 )
  {
LABEL_36:
    if ( dataVals_k__BackingField )
    {
      if ( procArg_k__BackingField )
      {
        uniqueId = targetSvtData->fields.uniqueId;
        funcIndex = dataVals_k__BackingField->fields.funcIndex;
        IsCommandSideEffect = BattleLogicFunction_ProcListInArgs__get_IsCommandSideEffect(procArg_k__BackingField, 0LL);
        this = (BattleLogicFunction_o *)BattleLogicFunction__getNoEffectObject(
                                          v45,
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
    goto LABEL_33;
  }
  v16 = sub_B70764(BattleActionData_TypeInfo);
  BattleActionData___ctor((BattleActionData_o *)v16, 0LL);
  if ( !v16 )
    goto LABEL_33;
  *(_DWORD *)(v16 + 32) = targetSvtData->fields.uniqueId;
  *(_DWORD *)(v16 + 36) = targetSvtData->fields.uniqueId;
  v17 = (System_Int32_array **)((__int64 (__fastcall *)(BattleActionData_BaseShiftGaugeData_o *, Il2CppMethodPointer))shiftGauge->klass->vtable._7_unknown.method)(
                                 shiftGauge,
                                 shiftGauge->klass->vtable._8_unknown.methodPtr);
  *(_QWORD *)(v16 + 64) = v17;
  sub_B70630((BattleServantConfConponent_o *)(v16 + 64), v17, v18, v19, v20, v21, v22, v23);
  if ( !dataVals_k__BackingField )
    goto LABEL_33;
  if ( !procArg_k__BackingField )
    goto LABEL_33;
  v24 = dataVals_k__BackingField->fields.funcIndex;
  v25 = targetSvtData->fields.uniqueId;
  funcEnt = dataVals_k__BackingField->fields.funcEnt;
  v27 = BattleLogicFunction_ProcListInArgs__get_IsCommandSideEffect(procArg_k__BackingField, 0LL);
  this = (BattleLogicFunction_o *)BattleLogicFunction__getFunctionObject(
                                    (BattleLogicFunction_o *)v27,
                                    funcEnt,
                                    v25,
                                    v24,
                                    v27,
                                    0LL,
                                    v28);
  if ( !this )
    goto LABEL_33;
  v43 = (BattleActionData_o *)v16;
  v44 = mainAction;
  BYTE5(this[1].fields.master) = 0;
  BattleActionData__setBuffData((BattleActionData_o *)v16, (BattleActionData_BuffData_o *)this, 0LL, 0LL);
  v29 = (BattleActionData_ShiftServant_o *)sub_B70764(BattleActionData_ShiftServant_TypeInfo);
  BattleActionData_ShiftServant___ctor(v29, 0, 0LL);
  if ( !v29 )
    goto LABEL_33;
  v42 = v29;
  BattleActionData_ShiftServant__setBeforeSvtData(v29, targetSvtData, 0LL);
  v30 = (SimpleHpData_o *)sub_B70764(SimpleHpData_TypeInfo);
  SimpleHpData___ctor(v30, targetSvtData, 0LL);
  v31 = (EnemySimpleHpData_o *)sub_B70764(EnemySimpleHpData_TypeInfo);
  EnemySimpleHpData___ctor(v31, targetSvtData, 0LL);
  ((void (__fastcall *)(BattleActionData_BaseShiftGaugeData_o *, BattleServantData_o *, Il2CppMethodPointer))shiftGauge->klass->vtable._12_Init.method)(
    shiftGauge,
    targetSvtData,
    shiftGauge->klass->vtable._13_InitShiftHpPos.methodPtr);
  Value = DataVals__GetValue(dataVals_k__BackingField, 0LL);
  v33 = ((__int64 (__fastcall *)(BattleActionData_BaseShiftGaugeData_o *, BattleServantData_o *, _QWORD, Il2CppMethodPointer))shiftGauge->klass->vtable._9_unknown.method)(
          shiftGauge,
          targetSvtData,
          Value,
          shiftGauge->klass->vtable._10_unknown.methodPtr);
  v34 = 1;
  v41 = v33;
  if ( v33 >= 0 )
    v35 = v33;
  else
    v35 = -v33;
  if ( v33 > 0 )
    v36 = 1;
  else
    v36 = -1;
  while ( 1 )
  {
    if ( (BYTE3(System_Math_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !System_Math_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(System_Math_TypeInfo);
    if ( v34 > v35 )
      break;
    BattleServantData__SetShiftServantChange(targetSvtData, v45->fields.data, v31, v36, 0LL);
    Param = DataVals__GetParam(dataVals_k__BackingField, 58, 0, 0LL);
    ((void (__fastcall *)(BattleActionData_BaseShiftGaugeData_o *, BattleServantData_o *, bool, Il2CppMethodPointer))shiftGauge->klass->vtable._10_unknown.method)(
      shiftGauge,
      targetSvtData,
      Param > 0,
      shiftGauge->klass->vtable._11_unknown.methodPtr);
    v38 = (SimpleHpData_o *)sub_B70764(SimpleHpData_TypeInfo);
    SimpleHpData___ctor(v38, targetSvtData, 0LL);
    CurrentShiftPos = BattleServantData__GetCurrentShiftPos(targetSvtData, 0LL);
    MaxShiftIconPos = BattleServantData__GetMaxShiftIconPos(targetSvtData, 0LL);
    ((void (__fastcall *)(BattleActionData_BaseShiftGaugeData_o *, _QWORD, _QWORD, SimpleHpData_o *, SimpleHpData_o *, Il2CppMethodPointer))shiftGauge->klass->vtable._11_unknown.method)(
      shiftGauge,
      CurrentShiftPos,
      MaxShiftIconPos,
      v30,
      v38,
      shiftGauge->klass->vtable._12_Init.methodPtr);
    ++v34;
    v30 = v38;
  }
  if ( v41 )
  {
    this = (BattleLogicFunction_o *)v45->fields.logic;
    if ( !this )
      goto LABEL_33;
    BattleLogic__actEnemyPtPassiveSkill((BattleLogic_o *)this, targetSvtData->fields.uniqueId, 1, 0, 0LL);
  }
  BattleActionData_ShiftServant__setCheckSvtData(v42, targetSvtData, 0LL);
  BattleActionData__setShiftServant(v43, v42, 0LL);
  BattleActionData__SetShiftGauge(v43, shiftGauge, 0LL);
  if ( !v44 )
LABEL_33:
    sub_B7076C(this, mainAction);
  BattleActionData__AddAfterActionData(v44, v43, 0, 0LL);
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
  System_String_array **v19; // x2
  System_String_array **v20; // x3
  System_Boolean_array **v21; // x4
  System_Int32_array **v22; // x5
  System_Int32_array *v23; // x6
  System_Int32_array *v24; // x7
  System_String_array *v25; // x22
  System_Int32_array **v26; // x1
  BattleActionData_o *v27; // x21
  System_String_array **v28; // x2
  System_String_array **v29; // x3
  System_Boolean_array **v30; // x4
  System_Int32_array **v31; // x5
  System_Int32_array *v32; // x6
  System_Int32_array *v33; // x7
  System_Int32_array **v34; // x23
  System_String_array **v35; // x2
  System_String_array **v36; // x3
  System_Boolean_array **v37; // x4
  System_Int32_array **v38; // x5
  System_Int32_array *v39; // x6
  System_Int32_array *v40; // x7
  System_Int32_array **v41; // x1
  System_String_array **v42; // x2
  System_String_array **v43; // x3
  System_Boolean_array **v44; // x4
  System_Int32_array **v45; // x5
  System_Int32_array *v46; // x6
  System_Int32_array *v47; // x7
  System_Int32_array **v48; // x23
  System_String_array **v49; // x2
  System_String_array **v50; // x3
  System_Boolean_array **v51; // x4
  System_Int32_array **v52; // x5
  System_Int32_array *v53; // x6
  System_Int32_array *v54; // x7
  System_Int32_array **v55; // x1
  System_String_array **v56; // x2
  System_String_array **v57; // x3
  System_Boolean_array **v58; // x4
  System_Int32_array **v59; // x5
  System_Int32_array *v60; // x6
  System_Int32_array *v61; // x7
  System_Int32_array **v62; // x23
  System_String_array **v63; // x2
  System_String_array **v64; // x3
  System_Boolean_array **v65; // x4
  System_Int32_array **v66; // x5
  System_Int32_array *v67; // x6
  System_Int32_array *v68; // x7
  System_Int32_array **v69; // x1
  struct BattleData_o *v70; // x8
  struct System_Int32_array *e_entryid; // x8
  char *v72; // x8
  _DWORD *v73; // x8
  int32_t v74; // w22
  int32_t v75; // t1
  BattleServantData_o *v76; // x23
  int32_t uniqueId; // w23
  bool isEffectSummon; // w24
  __int64 v80; // x0
  __int64 v81; // x0
  int32_t Value; // [xsp+4h] [xbp-4Ch] BYREF
  __int64 v83; // [xsp+8h] [xbp-48h] BYREF
  int32_t targetIndex[2]; // [xsp+18h] [xbp-38h] BYREF

  if ( (byte_4353881 & 1) == 0 )
  {
    sub_B70694(&BattleActionData_TypeInfo);
    sub_B70694(&string___TypeInfo);
    sub_B70694(&StringLiteral_16870/*"baseVals.GetValue:"*/);
    sub_B70694(&StringLiteral_16097/*"] Index["*/);
    sub_B70694(&StringLiteral_290/*" 召喚！NPC["*/);
    sub_B70694(&StringLiteral_16098/*"] UniqueID["*/);
    sub_B70694(&StringLiteral_19226/*"functionCallServant>"*/);
    sub_B70694(&StringLiteral_16092/*"]"*/);
    byte_4353881 = 1;
  }
  *(_QWORD *)targetIndex = 0LL;
  v83 = 0LL;
  Value = 0;
  data = (__int64)this->fields.data;
  if ( !data )
    goto LABEL_55;
  data = (__int64)BattleData__getServantData((BattleData_o *)data, playerId, 0LL);
  targetIndex[1] = -1;
  if ( !baseVals )
    goto LABEL_55;
  v13 = this->fields.data;
  v14 = (BattleServantData_o *)data;
  data = DataVals__isCheckEnemyFieldSpace(baseVals, 0LL);
  if ( !v13 )
    goto LABEL_55;
  FieldSpace = (BattleLogicFunction_o *)BattleData__getFieldSpace(v13, playerId, &targetIndex[1], data & 1, 0LL);
  if ( (_DWORD)FieldSpace )
  {
    Value = DataVals__GetValue(baseVals, 0LL);
    v17 = System_Int32__ToString((int32_t)&Value, 0LL);
    System_String__Concat_44758168((System_String_o *)StringLiteral_16870/*"baseVals.GetValue:"*/, v17, 0LL);
    targetIndex[0] = -1;
    if ( playerId == -1 )
    {
      v18 = this->fields.data;
      data = DataVals__GetValue(baseVals, 0LL);
      if ( !v18 )
        goto LABEL_55;
      FieldSpace = (BattleLogicFunction_o *)BattleData__GetEnemySummonId(v18, data, 0LL);
    }
    else
    {
      data = DataVals__GetValue(baseVals, 0LL);
      if ( !v14 )
        goto LABEL_55;
      FieldSpace = (BattleLogicFunction_o *)BattleServantData__getSummonNpcId(v14, data, 0LL);
    }
    targetIndex[0] = (int)FieldSpace;
    if ( (_DWORD)FieldSpace != -1 )
    {
      data = (__int64)this->fields.data;
      if ( !data )
        goto LABEL_55;
      HIDWORD(v83) = BattleData__getNextUniqueID((BattleData_o *)data, 0LL);
      data = (__int64)this->fields.data;
      if ( !data )
        goto LABEL_55;
      LODWORD(v83) = BattleData__getNextNextIndex((BattleData_o *)data, 0LL);
      data = sub_B706AC(string___TypeInfo, 7LL);
      if ( !data )
        goto LABEL_55;
      v25 = (System_String_array *)data;
      data = StringLiteral_290/*" 召喚！NPC["*/;
      if ( StringLiteral_290/*" 召喚！NPC["*/ )
      {
        data = sub_B70754(StringLiteral_290/*" 召喚！NPC["*/, v25->obj.klass->_1.element_class);
        if ( !data )
          goto LABEL_57;
        v26 = (System_Int32_array **)StringLiteral_290/*" 召喚！NPC["*/;
      }
      else
      {
        v26 = 0LL;
      }
      if ( !v25->max_length )
        goto LABEL_56;
      v25->m_Items[0] = (System_String_o *)v26;
      sub_B70630((BattleServantConfConponent_o *)v25->m_Items, v26, v19, v20, v21, v22, v23, v24);
      data = (__int64)System_Int32__ToString((int32_t)targetIndex, 0LL);
      v34 = (System_Int32_array **)data;
      if ( !data || (data = sub_B70754(data, v25->obj.klass->_1.element_class)) != 0 )
      {
        if ( v25->max_length <= 1 )
          goto LABEL_56;
        v25->m_Items[1] = (System_String_o *)v34;
        sub_B70630((BattleServantConfConponent_o *)&v25->m_Items[1], v34, v28, v29, v30, v31, v32, v33);
        data = StringLiteral_16098/*"] UniqueID["*/;
        if ( StringLiteral_16098/*"] UniqueID["*/ )
        {
          data = sub_B70754(StringLiteral_16098/*"] UniqueID["*/, v25->obj.klass->_1.element_class);
          if ( !data )
            goto LABEL_57;
          v41 = (System_Int32_array **)StringLiteral_16098/*"] UniqueID["*/;
        }
        else
        {
          v41 = 0LL;
        }
        if ( v25->max_length <= 2 )
          goto LABEL_56;
        v25->m_Items[2] = (System_String_o *)v41;
        sub_B70630((BattleServantConfConponent_o *)&v25->m_Items[2], v41, v35, v36, v37, v38, v39, v40);
        data = (__int64)System_Int32__ToString((int32_t)&v83 + 4, 0LL);
        v48 = (System_Int32_array **)data;
        if ( !data || (data = sub_B70754(data, v25->obj.klass->_1.element_class)) != 0 )
        {
          if ( v25->max_length <= 3 )
            goto LABEL_56;
          v25->m_Items[3] = (System_String_o *)v48;
          sub_B70630((BattleServantConfConponent_o *)&v25->m_Items[3], v48, v42, v43, v44, v45, v46, v47);
          data = StringLiteral_16097/*"] Index["*/;
          if ( StringLiteral_16097/*"] Index["*/ )
          {
            data = sub_B70754(StringLiteral_16097/*"] Index["*/, v25->obj.klass->_1.element_class);
            if ( !data )
              goto LABEL_57;
            v55 = (System_Int32_array **)StringLiteral_16097/*"] Index["*/;
          }
          else
          {
            v55 = 0LL;
          }
          if ( v25->max_length <= 4 )
            goto LABEL_56;
          v25->m_Items[4] = (System_String_o *)v55;
          sub_B70630((BattleServantConfConponent_o *)&v25->m_Items[4], v55, v49, v50, v51, v52, v53, v54);
          data = (__int64)System_Int32__ToString((int32_t)&v83, 0LL);
          v62 = (System_Int32_array **)data;
          if ( !data || (data = sub_B70754(data, v25->obj.klass->_1.element_class)) != 0 )
          {
            if ( v25->max_length <= 5 )
              goto LABEL_56;
            v25->m_Items[5] = (System_String_o *)v62;
            sub_B70630((BattleServantConfConponent_o *)&v25->m_Items[5], v62, v56, v57, v58, v59, v60, v61);
            data = StringLiteral_16092/*"]"*/;
            if ( !StringLiteral_16092/*"]"*/ )
            {
              v69 = 0LL;
              goto LABEL_45;
            }
            data = sub_B70754(StringLiteral_16092/*"]"*/, v25->obj.klass->_1.element_class);
            if ( data )
            {
              v69 = (System_Int32_array **)StringLiteral_16092/*"]"*/;
LABEL_45:
              if ( v25->max_length > 6 )
              {
                v25->m_Items[6] = (System_String_o *)v69;
                sub_B70630((BattleServantConfConponent_o *)&v25->m_Items[6], v69, v63, v64, v65, v66, v67, v68);
                System_String__Concat_44838292(v25, 0LL);
                data = (__int64)this->fields.data;
                if ( !data )
                  goto LABEL_55;
                data = (__int64)BattleData__createSummonEnemyServantData(
                                  (BattleData_o *)data,
                                  SHIDWORD(v83),
                                  v83,
                                  targetIndex[0],
                                  0LL,
                                  0LL,
                                  0LL);
                v70 = this->fields.data;
                if ( !v70 )
                  goto LABEL_55;
                e_entryid = v70->fields.e_entryid;
                if ( !e_entryid )
                  goto LABEL_55;
                if ( targetIndex[1] < e_entryid->max_length )
                {
                  v72 = (char *)e_entryid + 4 * targetIndex[1];
                  v75 = *((_DWORD *)v72 + 8);
                  v73 = v72 + 32;
                  v74 = v75;
                  v76 = (BattleServantData_o *)data;
                  if ( data )
                  {
                    *v73 = *(_DWORD *)(data + 24);
                    *(_BYTE *)(data + 452) = 1;
                    *(_BYTE *)(data + 517) = 1;
                    BattleServantData__SetRemainActionCount((BattleServantData_o *)data, 1, 0LL);
                    data = (__int64)this->fields.logic;
                    if ( data )
                    {
                      BattleLogic__addEnemyActPriorityList((BattleLogic_o *)data, v76, 0LL);
                      v27 = (BattleActionData_o *)sub_B70764(BattleActionData_TypeInfo);
                      BattleActionData___ctor(v27, 0LL);
                      uniqueId = v76->fields.uniqueId;
                      isEffectSummon = DataVals__isEffectSummon(baseVals, 0LL);
                      data = DataVals__GetCallSvtEffectId(baseVals, 0LL);
                      if ( v27 )
                      {
                        BattleActionData__setSummonServant(v27, uniqueId, v74, funcIndex, isEffectSummon, data, 0LL);
                        return v27;
                      }
                    }
                  }
LABEL_55:
                  sub_B7076C(data, *(_QWORD *)&playerId);
                }
              }
LABEL_56:
              v80 = sub_B70798(data);
              sub_B70738(v80, 0LL);
            }
          }
        }
      }
LABEL_57:
      v81 = sub_B7078C(data);
      sub_B70738(v81, 0LL);
    }
  }
  return BattleLogicFunction__getMissObject(
           FieldSpace,
           playerId,
           funcIndex,
           baseVals,
           isCommandSideEffect,
           0LL,
           0LL,
           v16);
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

  if ( (byte_4353884 & 1) == 0 )
  {
    sub_B70694(&BattleActionData_TypeInfo);
    byte_4353884 = 1;
  }
  v8 = (BattleActionData_o *)sub_B70764(BattleActionData_TypeInfo);
  BattleActionData___ctor(v8, 0LL);
  if ( !v8 || (v8->fields.actorId = actionId, !baseVals) )
    sub_B7076C(v9, v10);
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

  if ( (byte_4353883 & 1) == 0 )
  {
    sub_B70694(&BattleActionData_TypeInfo);
    sub_B70694(&BattleActionData_ShiftServant_TypeInfo);
    byte_4353883 = 1;
  }
  data = this->fields.data;
  if ( !data )
    goto LABEL_9;
  ServantData = BattleData__getServantData(data, targetId, 0LL);
  v13 = (BattleActionData_o *)sub_B70764(BattleActionData_TypeInfo);
  BattleActionData___ctor(v13, 0LL);
  if ( !v13 )
    goto LABEL_9;
  v13->fields.actorId = actionId;
  v14 = (BattleActionData_ShiftServant_o *)sub_B70764(BattleActionData_ShiftServant_TypeInfo);
  BattleActionData_ShiftServant___ctor(v14, 0, 0LL);
  if ( !v14
    || (BattleActionData_ShiftServant__setBeforeSvtData(v14, ServantData, 0LL), !ServantData)
    || (BattleServantData__setChangeServant(ServantData, this->fields.data, baseVals, 0LL),
        BattleActionData_ShiftServant__setCheckSvtData(v14, ServantData, 0LL),
        BattleActionData__setShiftServant(v13, v14, 0LL),
        (data = (BattleData_o *)this->fields.logic) == 0LL) )
  {
LABEL_9:
    sub_B7076C(data, *(_QWORD *)&actionId);
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

  if ( (byte_4353870 & 1) == 0 )
  {
    sub_B70694(&BattleActionData_TypeInfo);
    byte_4353870 = 1;
  }
  v15 = (BattleActionData_o *)sub_B70764(BattleActionData_TypeInfo);
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
    sub_B7076C(data, v16);
  }
  BattleActionData__setDamageData(v15, v21, baseVals, 0, 0, 0LL);
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

  if ( (byte_4353879 & 1) == 0 )
  {
    sub_B70694(&BattleActionData_TypeInfo);
    byte_4353879 = 1;
  }
  *absorptionCount = 0;
  v15 = (BattleActionData_o *)sub_B70764(BattleActionData_TypeInfo);
  BattleActionData___ctor(v15, 0LL);
  data = this->fields.data;
  if ( !data )
    goto LABEL_22;
  data = (BattleData_o *)BattleData__getServantData(data, targetId, 0LL);
  if ( !data )
    goto LABEL_22;
  v18 = (BattleServantData_o *)data;
  if ( !HIBYTE(data->fields.combodata) )
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
    || (HIDWORD(data->fields.rootfsm) = 5, v16 = data, *absorptionCount = v18->fields.nexttpturn - nexttpturn, !v15) )
  {
LABEL_22:
    sub_B7076C(data, v16);
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
  BattleServantData_o *v20; // x27
  BattleServantData_o *v21; // x25
  const MethodInfo *v22; // x4
  BattleBuffData_o *buffData; // x28
  BattleBuffData_CheckIndividualitiesData_o *v24; // x20
  char v25; // w20
  struct BattleData_o *v26; // x8
  System_String_o *v27; // x0
  float UpDownGiveHeal; // s0
  const MethodInfo *v30; // [xsp+8h] [xbp-68h]
  FunctionEntity_o *v31; // [xsp+10h] [xbp-60h]
  int32_t healPoint[2]; // [xsp+18h] [xbp-58h] BYREF

  LODWORD(v9) = overwriteHeal;
  if ( (byte_4353873 & 1) == 0 )
  {
    sub_B70694(&BattleActionData_TypeInfo);
    sub_B70694(&BattleBuffData_CheckIndividualitiesData_TypeInfo);
    sub_B70694(&StringLiteral_19227/*"functionGainHp:"*/);
    byte_4353873 = 1;
  }
  *(_QWORD *)healPoint = 0LL;
  v17 = (BattleActionData_o *)sub_B70764(BattleActionData_TypeInfo);
  BattleActionData___ctor(v17, 0LL);
  data = this->fields.data;
  if ( !data )
    goto LABEL_26;
  data = (BattleData_o *)BattleData__getServantData(data, playerId, 0LL);
  if ( !this->fields.data )
    goto LABEL_26;
  v20 = (BattleServantData_o *)data;
  data = (BattleData_o *)BattleData__getServantData(this->fields.data, targetId, 0LL);
  if ( !baseVals )
    goto LABEL_26;
  v21 = (BattleServantData_o *)data;
  baseVals->fields.isShowForcedEffect = 0;
  if ( (_DWORD)v9 == -1 )
    LODWORD(v9) = DataVals__GetValue(baseVals, 0LL);
  healPoint[1] = v9;
  data = (BattleData_o *)DataVals__isUnaffected(baseVals, 0LL);
  if ( ((unsigned __int8)data & 1) != 0 )
  {
LABEL_20:
    v25 = 0;
    goto LABEL_21;
  }
  if ( !v21 )
    goto LABEL_26;
  if ( ((__int64 (__fastcall *)(BattleServantData_o *, Il2CppMethodPointer))v21->klass->vtable._13_get_resultHp.method)(
         v21,
         v21->klass->vtable._14_set_resultHp.methodPtr) <= 0 )
  {
    healPoint[1] = 0;
    data = (BattleData_o *)BattleServantData__isShiftableServant(v21, 0LL);
    if ( ((unsigned __int8)data & 1) == 0 )
    {
      v26 = this->fields.data;
      if ( !v26 )
        goto LABEL_26;
      data = (BattleData_o *)v26->fields.battleEvent;
      if ( !data )
        goto LABEL_26;
      data = (BattleData_o *)(*(__int64 (__fastcall **)(BattleData_o *, BattleServantData_o *, _QWORD))&data->klass[1]._2.initializationExceptionGCHandle)(
                               data,
                               v21,
                               *(_QWORD *)&data->klass[1]._2.cctor_finished);
      if ( ((unsigned __int8)data & 1) == 0 )
      {
        data = (BattleData_o *)BattleServantData__isGuts(v21, 0LL);
        LODWORD(v9) = 0;
        v25 = (unsigned __int8)data ^ 1;
        goto LABEL_21;
      }
    }
    LODWORD(v9) = 0;
    goto LABEL_20;
  }
  data = (BattleData_o *)BattleServantData__isShiftReady(v21, 0LL);
  if ( ((unsigned __int8)data & 1) != 0 )
  {
LABEL_14:
    LODWORD(v9) = 0;
    v25 = 0;
    healPoint[1] = 0;
    goto LABEL_21;
  }
  v31 = funcEnt;
  buffData = v21->fields.buffData;
  v24 = (BattleBuffData_CheckIndividualitiesData_o *)sub_B70764(BattleBuffData_CheckIndividualitiesData_TypeInfo);
  BattleBuffData_CheckIndividualitiesData___ctor(v24, v21, 0LL, 0LL, 0LL, 0LL, 0LL);
  if ( !buffData )
LABEL_26:
    sub_B7076C(data, v18);
  data = (BattleData_o *)BattleBuffData__isTurnBuff(buffData, 42, v24, 1, 0LL);
  funcEnt = v31;
  if ( ((unsigned __int8)data & 1) != 0 )
    goto LABEL_14;
  if ( v20 )
  {
    UpDownGiveHeal = BattleServantData__getUpDownGiveHeal(v20, v21, 0LL);
    LODWORD(v9) = BattleUtility__FloorToInt(UpDownGiveHeal * (float)(int)v9, 0LL);
    healPoint[1] = v9;
  }
  healPoint[0] = 1;
  data = (BattleData_o *)BattleServantData__getUpDownHeal(v21, healPoint, 0LL);
  v25 = 0;
  v9 = (int)data * (__int64)(int)v9 / healPoint[0];
  healPoint[1] = v9;
  baseVals->fields.isShowForcedEffect = 1;
LABEL_21:
  healPoint[1] = BattleLogicFunction__GetActualRecoveryHealPoint((BattleLogicFunction_o *)data, baseVals, v21, v9, v22);
  v27 = System_Int32__ToString((int32_t)&healPoint[1], 0LL);
  System_String__Concat_44758168((System_String_o *)StringLiteral_19227/*"functionGainHp:"*/, v27, 0LL);
  BattleLogicFunction__SetGainHpBuff(
    this,
    v17,
    healPoint[1],
    funcIndex,
    v21,
    funcEnt,
    baseVals,
    isCommandSideEffect,
    v25 & 1,
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
  BattleLogicFunction_ProcListInArgs_o *v7; // x24
  BattleLogicFunction_o *v8; // x21
  struct BattleLogicFunctionProcess_FunctionUnitCheck_o *funcUnit_k__BackingField; // x8
  DataVals_o *dataVals_k__BackingField; // x23
  System_Collections_Generic_List_VoiceCondType_Type__o *v11; // x20
  __int64 v12; // x2
  int logic; // w8
  unsigned int v14; // w25
  int v15; // w19
  DataVals_o *v16; // x26
  int32_t *p_funcType; // x28
  BattleLogicFunction_o *v18; // x19
  System_String_o *v19; // x20
  const MethodInfo *v20; // x4
  BattleLogicFunction_c *klass; // x8
  BattleLogicFunction_o *v22; // x23
  unsigned __int64 v23; // x10
  int32_t *p_offset; // x11
  __int64 v25; // x0
  __int64 v26; // x0
  __int64 v27; // x1
  __int64 v28; // x27
  BattleLogicFunction_ProcListInArgs_o *v29; // x0
  int32_t actorId; // w19
  FunctionEntity_o *funcEnt; // x22
  int32_t funcIndex; // w24
  bool IsCommandSideEffect; // w0
  BattleActionData_o *v34; // x20
  __int64 v35; // x1
  int v36; // w19
  int32_t v37; // w19
  bool v38; // w0
  const MethodInfo *v39; // x7
  BattleActionData_o *NoEffectObject; // x1
  __int64 v41; // x8
  unsigned __int64 v42; // x10
  int *v43; // x11
  __int64 v44; // x0
  __int64 v45; // x8
  unsigned __int64 v46; // x10
  int *v47; // x11
  __int64 v48; // x0
  __int64 v49; // x0
  __int64 v50; // x1
  __int64 v51; // x20
  __int64 v52; // x1
  BattleData_o *data; // x0
  int32_t v54; // w25
  BattleServantData_o *ServantData; // x0
  __int64 v56; // x1
  BattleServantData_o *v57; // x26
  BattleLogicFunction_o *Value; // x0
  __int64 v59; // x1
  const MethodInfo *v60; // x3
  int v61; // w23
  int32_t v62; // w8
  int32_t v63; // w20
  char v64; // w21
  __int64 v65; // x8
  unsigned __int64 v66; // x10
  int *v67; // x11
  __int64 v68; // x0
  int v69; // w8
  int32_t v70; // w19
  FunctionEntity_o *v71; // x20
  int32_t targetId_k__BackingField; // w22
  int32_t v73; // w21
  bool v74; // w0
  __int64 v76; // x0
  const MethodInfo *overwriteLossHp; // [xsp+0h] [xbp-E0h]
  bool isRandomDamage; // [xsp+8h] [xbp-D8h]
  const MethodInfo *v79; // [xsp+18h] [xbp-C8h]
  DataVals_o *v80; // [xsp+28h] [xbp-B8h]
  BattleLogicFunctionProcess_FunctionTargetCheck_o *v81; // [xsp+30h] [xbp-B0h]
  int32_t overwriteHeal; // [xsp+3Ch] [xbp-A4h]
  BattleLogicFunction_o *v83; // [xsp+40h] [xbp-A0h]
  int v84; // [xsp+48h] [xbp-98h]
  unsigned int v85; // [xsp+4Ch] [xbp-94h]
  BattleLogicFunction_ProcListInArgs_o *v86; // [xsp+50h] [xbp-90h]
  BattleActionData_o *v87; // [xsp+58h] [xbp-88h]
  BattleLogicFunction_o *v88; // [xsp+60h] [xbp-80h]
  bool v89; // [xsp+6Ch] [xbp-74h]
  __int64 v90; // [xsp+70h] [xbp-70h]
  BattleActionData_o *v91; // [xsp+78h] [xbp-68h]
  DataVals_o *v92; // [xsp+80h] [xbp-60h]
  _DWORD v93[1]; // [xsp+88h] [xbp-58h]
  int v94; // [xsp+8Ch] [xbp-54h]

  v7 = procArg;
  v8 = this;
  if ( (byte_435388D & 1) == 0 )
  {
    sub_B70694(&BattleActionData_TypeInfo);
    sub_B70694(&System_IDisposable_TypeInfo);
    sub_B70694(&System_Collections_Generic_IEnumerable_BattleLogicFunctionProcess_FunctionTargetCheck__TypeInfo);
    sub_B70694(&System_Collections_Generic_IEnumerator_BattleLogicFunctionProcess_FunctionTargetCheck__TypeInfo);
    sub_B70694(&System_Collections_IEnumerator_TypeInfo);
    sub_B70694(&Method_System_Collections_Generic_List_FuncList_TYPE__Add__);
    sub_B70694(&Method_System_Collections_Generic_List_FuncList_TYPE___ctor__);
    sub_B70694(&System_Collections_Generic_List_FuncList_TYPE__TypeInfo);
    sub_B70694(&FuncList_TYPE_TypeInfo);
    this = (BattleLogicFunction_o *)sub_B70694(&StringLiteral_16284/*"_SAFE"*/);
    byte_435388D = 1;
  }
  v94 = 0;
  if ( !funcTarget )
    goto LABEL_82;
  funcUnit_k__BackingField = funcTarget->fields._funcUnit_k__BackingField;
  v81 = funcTarget;
  if ( !funcUnit_k__BackingField )
    goto LABEL_82;
  dataVals_k__BackingField = funcUnit_k__BackingField->fields._dataVals_k__BackingField;
  v87 = (BattleActionData_o *)sub_B70764(BattleActionData_TypeInfo);
  BattleActionData___ctor(v87, 0LL);
  v11 = (System_Collections_Generic_List_VoiceCondType_Type__o *)sub_B70764(System_Collections_Generic_List_FuncList_TYPE__TypeInfo);
  System_Collections_Generic_List_VoiceCondType_Type____ctor(
    v11,
    (const MethodInfo_30B8454 *)Method_System_Collections_Generic_List_FuncList_TYPE___ctor__);
  if ( !v11 )
    goto LABEL_82;
  System_Collections_Generic_List_VoiceCondType_Type___Add(
    v11,
    12,
    (const MethodInfo_30B91B0 *)Method_System_Collections_Generic_List_FuncList_TYPE__Add__);
  System_Collections_Generic_List_VoiceCondType_Type___Add(
    v11,
    25,
    (const MethodInfo_30B91B0 *)Method_System_Collections_Generic_List_FuncList_TYPE__Add__);
  System_Collections_Generic_List_VoiceCondType_Type___Add(
    v11,
    50,
    (const MethodInfo_30B91B0 *)Method_System_Collections_Generic_List_FuncList_TYPE__Add__);
  System_Collections_Generic_List_VoiceCondType_Type___Add(
    v11,
    51,
    (const MethodInfo_30B91B0 *)Method_System_Collections_Generic_List_FuncList_TYPE__Add__);
  if ( !dataVals_k__BackingField )
    goto LABEL_82;
  v80 = dataVals_k__BackingField;
  this = (BattleLogicFunction_o *)DataVals__GetDependDataValsArray(
                                    dataVals_k__BackingField,
                                    (System_Collections_Generic_List_FuncList_TYPE__o *)v11,
                                    1,
                                    0LL);
  if ( !this )
    goto LABEL_82;
  logic = (int)this->fields.logic;
  v88 = v8;
  v91 = mainAction;
  if ( logic >= 1 )
  {
    v14 = 0;
    v15 = 0;
    overwriteHeal = 0;
    v83 = this;
    v86 = v7;
    while ( 1 )
    {
      if ( v14 >= logic )
      {
        v76 = sub_B70798(this);
        sub_B70738(v76, 0LL);
      }
      v16 = (DataVals_o *)*((_QWORD *)&this->fields.logictarget + (int)v14);
      v84 = v15;
      if ( !v16 )
        goto LABEL_82;
      p_funcType = &v16->fields.funcType;
      this = (BattleLogicFunction_o *)j_il2cpp_value_box_0(FuncList_TYPE_TypeInfo, &v16->fields.funcType, v12);
      if ( !this )
        goto LABEL_82;
      v18 = this;
      v19 = (System_String_o *)((__int64 (__fastcall *)(BattleLogicFunction_o *, void *))this->klass->vtable._3_ToString.method)(
                                 this,
                                 this->klass[1]._1.image);
      this = (BattleLogicFunction_o *)j_il2cpp_object_unbox_0(v18);
      *p_funcType = (int32_t)this->klass;
      if ( !v19 )
        goto LABEL_82;
      v89 = System_String__Contains(v19, (System_String_o *)StringLiteral_16284/*"_SAFE"*/, 0LL);
      this = (BattleLogicFunction_o *)BattleLogicFunction__GetDependFuncTargets(v8, v7, mainAction, v16, v20);
      if ( !this )
        goto LABEL_82;
      klass = this->klass;
      v22 = this;
      v92 = v16;
      v85 = v14;
      if ( *(_WORD *)&this->klass->_2.bitflags1 )
      {
        v23 = 0LL;
        p_offset = &klass->_1.interfaceOffsets->offset;
        while ( *((System_Collections_Generic_IEnumerable_BattleLogicFunctionProcess_FunctionTargetCheck__c **)p_offset
                - 1) != System_Collections_Generic_IEnumerable_BattleLogicFunctionProcess_FunctionTargetCheck__TypeInfo )
        {
          ++v23;
          p_offset += 4;
          if ( v23 >= *(unsigned __int16 *)&this->klass->_2.bitflags1 )
            goto LABEL_28;
        }
        v25 = (__int64)(&klass->vtable._0_Equals.method + 2 * *p_offset);
      }
      else
      {
LABEL_28:
        v25 = sub_B08590(
                this,
                System_Collections_Generic_IEnumerable_BattleLogicFunctionProcess_FunctionTargetCheck__TypeInfo,
                0LL);
      }
      v26 = (*(__int64 (__fastcall **)(BattleLogicFunction_o *, _QWORD))v25)(v22, *(_QWORD *)(v25 + 8));
      v90 = v26;
      if ( !v26 )
        sub_B7076C(0LL, v27);
      v28 = v26;
      while ( 1 )
      {
        v41 = *(_QWORD *)v28;
        if ( *(_WORD *)(*(_QWORD *)v28 + 298LL) )
        {
          v42 = 0LL;
          v43 = (int *)(*(_QWORD *)(v41 + 176) + 8LL);
          while ( *((System_Collections_IEnumerator_c **)v43 - 1) != System_Collections_IEnumerator_TypeInfo )
          {
            ++v42;
            v43 += 4;
            if ( v42 >= *(unsigned __int16 *)(*(_QWORD *)v28 + 298LL) )
              goto LABEL_42;
          }
          v44 = v41 + 16LL * *v43 + 312;
        }
        else
        {
LABEL_42:
          v44 = sub_B08590(v28, System_Collections_IEnumerator_TypeInfo, 0LL);
        }
        if ( ((*(__int64 (__fastcall **)(__int64, _QWORD))v44)(v28, *(_QWORD *)(v44 + 8)) & 1) == 0 )
          break;
        v45 = *(_QWORD *)v28;
        if ( *(_WORD *)(*(_QWORD *)v28 + 298LL) )
        {
          v46 = 0LL;
          v47 = (int *)(*(_QWORD *)(v45 + 176) + 8LL);
          while ( *((System_Collections_Generic_IEnumerator_BattleLogicFunctionProcess_FunctionTargetCheck__c **)v47 - 1) != System_Collections_Generic_IEnumerator_BattleLogicFunctionProcess_FunctionTargetCheck__TypeInfo )
          {
            ++v46;
            v47 += 4;
            if ( v46 >= *(unsigned __int16 *)(*(_QWORD *)v28 + 298LL) )
              goto LABEL_49;
          }
          v48 = v45 + 16LL * *v47 + 312;
        }
        else
        {
LABEL_49:
          v48 = sub_B08590(
                  v28,
                  System_Collections_Generic_IEnumerator_BattleLogicFunctionProcess_FunctionTargetCheck__TypeInfo,
                  0LL);
        }
        v49 = (*(__int64 (__fastcall **)(__int64, _QWORD))v48)(v28, *(_QWORD *)(v48 + 8));
        v51 = v49;
        if ( !v49 )
          sub_B7076C(0LL, v50);
        if ( ((*(__int64 (__fastcall **)(__int64, BattleActionData_o *, _QWORD))(*(_QWORD *)v49 + 392LL))(
                v49,
                mainAction,
                *(_QWORD *)(*(_QWORD *)v49 + 400LL)) & 1) != 0 )
        {
          data = v8->fields.data;
          if ( !data )
            sub_B7076C(0LL, v52);
          v54 = *(_DWORD *)(v51 + 32);
          ServantData = BattleData__getServantData(data, v54, 0LL);
          v57 = ServantData;
          if ( !ServantData )
            sub_B7076C(0LL, v56);
          Value = (BattleLogicFunction_o *)((__int64 (__fastcall *)(BattleServantData_o *, Il2CppMethodPointer))ServantData->klass->vtable._13_get_resultHp.method)(
                                             ServantData,
                                             ServantData->klass->vtable._14_set_resultHp.methodPtr);
          v61 = (int)Value;
          if ( (int)Value >= 1 )
          {
            v62 = *p_funcType;
            if ( *p_funcType == 12 || v62 == 25 )
            {
              Value = (BattleLogicFunction_o *)DataVals__GetValue(v92, 0LL);
              v63 = (int)Value;
            }
            else
            {
              if ( (v62 & 0xFFFFFFFE) == 50 )
              {
                Value = (BattleLogicFunction_o *)BattleLogicFunction__getHpPerValue(Value, v92, v57, v60);
                v63 = (int)Value;
                v64 = 0;
                if ( !mainAction )
                  goto LABEL_64;
                goto LABEL_32;
              }
              v63 = -1;
            }
            v64 = 1;
            if ( !mainAction )
LABEL_64:
              sub_B7076C(Value, v59);
LABEL_32:
            v29 = v7;
            if ( !v7 )
              sub_B7076C(0LL, v59);
            actorId = mainAction->fields.actorId;
            funcEnt = v92->fields.funcEnt;
            funcIndex = v92->fields.funcIndex;
            IsCommandSideEffect = BattleLogicFunction_ProcListInArgs__get_IsCommandSideEffect(v29, 0LL);
            isRandomDamage = v64;
            v8 = v88;
            v34 = BattleLogicFunction__functionlossHp(
                    v88,
                    actorId,
                    v54,
                    funcEnt,
                    v92,
                    funcIndex,
                    v89,
                    IsCommandSideEffect,
                    v63,
                    isRandomDamage,
                    0LL,
                    v79);
            v7 = v86;
            mainAction = v91;
            v36 = v61
                - ((__int64 (__fastcall *)(BattleServantData_o *, Il2CppMethodPointer))v57->klass->vtable._13_get_resultHp.method)(
                    v57,
                    v57->klass->vtable._14_set_resultHp.methodPtr);
            if ( v36 >= 1 )
            {
              if ( !v87 )
                sub_B7076C(0LL, v35);
              v28 = v90;
              BattleActionData__addAction(v87, v34, 0LL);
              overwriteHeal += v36;
            }
            else
            {
              v37 = v92->fields.funcIndex;
              v38 = BattleLogicFunction_ProcListInArgs__get_IsCommandSideEffect(v86, 0LL);
              v28 = v90;
              NoEffectObject = BattleLogicFunction__getNoEffectObject(v88, v54, v37, v92, v38, 0LL, 0LL, v39);
              if ( !v87 )
                sub_B7076C(0LL, NoEffectObject);
              BattleActionData__addAction(v87, NoEffectObject, 0LL);
            }
          }
        }
      }
      v93[v84] = 395;
      v15 = ++v94;
      if ( v28 )
      {
        v65 = *(_QWORD *)v28;
        if ( *(_WORD *)(*(_QWORD *)v28 + 298LL) )
        {
          v66 = 0LL;
          v67 = (int *)(*(_QWORD *)(v65 + 176) + 8LL);
          while ( *((System_IDisposable_c **)v67 - 1) != System_IDisposable_TypeInfo )
          {
            ++v66;
            v67 += 4;
            if ( v66 >= *(unsigned __int16 *)(*(_QWORD *)v28 + 298LL) )
              goto LABEL_70;
          }
          v68 = v65 + 16LL * *v67 + 312;
        }
        else
        {
LABEL_70:
          v68 = sub_B08590(v28, System_IDisposable_TypeInfo, 0LL);
        }
        (*(void (__fastcall **)(__int64, _QWORD))v68)(v28, *(_QWORD *)(v68 + 8));
      }
      this = v83;
      if ( v15 )
      {
        v69 = v15 - 1;
        mainAction = v91;
        if ( v93[v15 - 1] == 395 )
        {
          --v15;
          v94 = v69;
        }
      }
      else
      {
        mainAction = v91;
      }
      logic = (int)v83->fields.logic;
      v14 = v85 + 1;
      if ( (int)(v85 + 1) >= logic )
      {
        if ( mainAction )
          goto LABEL_79;
        goto LABEL_82;
      }
    }
  }
  overwriteHeal = 0;
  if ( !mainAction )
    goto LABEL_82;
LABEL_79:
  if ( !v7
    || (v70 = v80->fields.funcIndex,
        v71 = v80->fields.funcEnt,
        targetId_k__BackingField = v81->fields._targetId_k__BackingField,
        v73 = v91->fields.actorId,
        v74 = BattleLogicFunction_ProcListInArgs__get_IsCommandSideEffect(v7, 0LL),
        this = (BattleLogicFunction_o *)BattleLogicFunction__functionGainHp(
                                          v88,
                                          v73,
                                          targetId_k__BackingField,
                                          v71,
                                          v80,
                                          v70,
                                          v74,
                                          overwriteHeal,
                                          overwriteLossHp),
        !v87) )
  {
LABEL_82:
    sub_B7076C(this, procArg);
  }
  BattleActionData__addAction(v87, (BattleActionData_o *)this, 0LL);
  return v87;
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
  BattleServantData_o *v18; // x27
  BattleServantData_o *v19; // x25
  int32_t Value; // w26
  const MethodInfo *v21; // x4
  char v22; // w20
  int v23; // w3
  BattleBuffData_o *buffData; // x28
  BattleBuffData_CheckIndividualitiesData_o *v25; // x20
  struct BattleData_o *v26; // x8
  int32_t ActualRecoveryHealPoint; // w0
  float UpDownGiveHeal; // s0
  int32_t UpDownHeal; // w0
  __int64 v31; // x26
  const MethodInfo *v32; // [xsp+8h] [xbp-68h]
  FunctionEntity_o *v33; // [xsp+10h] [xbp-60h]
  int32_t digit; // [xsp+1Ch] [xbp-54h] BYREF

  if ( (byte_4353874 & 1) == 0 )
  {
    sub_B70694(&BattleActionData_TypeInfo);
    sub_B70694(&BattleBuffData_CheckIndividualitiesData_TypeInfo);
    byte_4353874 = 1;
  }
  digit = 0;
  v15 = (BattleActionData_o *)sub_B70764(BattleActionData_TypeInfo);
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
  v25 = (BattleBuffData_CheckIndividualitiesData_o *)sub_B70764(BattleBuffData_CheckIndividualitiesData_TypeInfo);
  BattleBuffData_CheckIndividualitiesData___ctor(v25, v19, 0LL, 0LL, 0LL, 0LL, 0LL);
  if ( !buffData )
LABEL_24:
    sub_B7076C(data, v16);
  data = (BattleData_o *)BattleBuffData__isTurnBuff(buffData, 42, v25, 1, 0LL);
  if ( ((unsigned __int8)data & 1) != 0 )
  {
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

  if ( (byte_435388C & 1) == 0 )
  {
    sub_B70694(&BattleActionData_TypeInfo);
    byte_435388C = 1;
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
  v14 = (BattleActionData_o *)sub_B70764(BattleActionData_TypeInfo);
  BattleActionData___ctor(v14, 0LL);
  if ( !baseVals )
LABEL_18:
    sub_B7076C(data, procArg);
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
          HIDWORD(data->fields.rootfsm) = 3;
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
  double v20; // d0
  BattleActionData_o *v21; // x0

  v8 = this;
  if ( (byte_435388A & 1) == 0 )
  {
    sub_B70694(&BattleActionData_TypeInfo);
    sub_B70694(&NpGaugeAbsorbResult_TypeInfo);
    this = (BattleLogicFunction_o *)sub_B70694(&NpTurnToPointConvert_TypeInfo);
    byte_435388A = 1;
  }
  if ( !funcTarget )
    goto LABEL_12;
  funcUnit_k__BackingField = funcTarget->fields._funcUnit_k__BackingField;
  if ( !funcUnit_k__BackingField )
    goto LABEL_12;
  dataVals_k__BackingField = funcUnit_k__BackingField->fields._dataVals_k__BackingField;
  v11 = (BattleActionData_o *)sub_B70764(BattleActionData_TypeInfo);
  BattleActionData___ctor(v11, 0LL);
  v12 = (NpTurnToPointConvert_o *)sub_B70764(NpTurnToPointConvert_TypeInfo);
  NpTurnToPointConvert___ctor(v12, 0LL);
  v13 = (NpGaugeAbsorbResult_o *)sub_B70764(NpGaugeAbsorbResult_TypeInfo);
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
    sub_B7076C(this, procArg);
  }
  Point_k__BackingField = v13->fields._Point_k__BackingField;
  if ( Point_k__BackingField == INFINITY )
    v20 = -Point_k__BackingField;
  else
    v20 = Point_k__BackingField;
  v21 = BattleLogicFunction__functionGainNp(
          v8,
          procArg,
          v17,
          funcTarget->fields._targetId_k__BackingField,
          dataVals_k__BackingField,
          (int)v20,
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
  int32_t v22; // w1
  int32_t v23; // w28
  _BOOL8 isGainNp; // x0
  const MethodInfo *v25; // x6

  if ( (byte_4353878 & 1) == 0 )
  {
    sub_B70694(&BattleActionData_TypeInfo);
    byte_4353878 = 1;
  }
  v15 = (BattleActionData_o *)sub_B70764(BattleActionData_TypeInfo);
  BattleActionData___ctor(v15, 0LL);
  data = this->fields.data;
  if ( !data )
    goto LABEL_22;
  data = (BattleData_o *)BattleData__getServantData(data, targetId, 0LL);
  if ( !data )
    goto LABEL_22;
  v18 = (BattleServantData_o *)data;
  if ( HIBYTE(data->fields.combodata) )
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
      goto LABEL_22;
    Value = DataVals__GetValue(baseVals, 0LL);
    if ( (absorptionCount & 0x80000000) != 0 )
    {
      v23 = Value;
      isGainNp = BattleServantData__isGainNp(v18, 1, 0LL);
      if ( !isGainNp )
      {
LABEL_19:
        data = (BattleData_o *)BattleLogicFunction__getFunctionObject(
                                 (BattleLogicFunction_o *)isGainNp,
                                 funcEnt,
                                 v18->fields.uniqueId,
                                 funcIndex,
                                 isCommandSideEffect,
                                 0LL,
                                 v25);
        if ( data )
        {
          v16 = data;
          HIDWORD(data->fields.rootfsm) = 5;
          if ( v15 )
          {
            BattleActionData__setBuffData(v15, (BattleActionData_BuffData_o *)data, baseVals, 0LL);
            return v15;
          }
        }
LABEL_22:
        sub_B7076C(data, v16);
      }
      v22 = -v23;
    }
    else
    {
      if ( !absorptionCount || !BattleServantData__isGainNp(v18, 1, 0LL) )
        return BattleLogicFunction__getNoEffectObject(
                 this,
                 targetId,
                 funcIndex,
                 baseVals,
                 isCommandSideEffect,
                 0LL,
                 0LL,
                 v19);
      v22 = -absorptionCount;
    }
    isGainNp = BattleServantData__updownNextTDTurn(v18, v22, 0LL);
    goto LABEL_19;
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
  int32_t v23; // w19
  bool IsOpponentPTUniqueID; // w0
  System_Int32_array *v25; // x19
  int32_t v26; // w0
  const MethodInfo *v27; // x6
  struct BattleData_o *v28; // x8
  int32_t v29; // w2
  int32_t uniqueId; // [xsp+1Ch] [xbp-54h] BYREF

  uniqueId = targetId;
  if ( (byte_4353877 & 1) == 0 )
  {
    sub_B70694(&BattleActionData_TypeInfo);
    sub_B70694(&StringLiteral_19228/*"functionInstantDeath>>:"*/);
    byte_4353877 = 1;
  }
  v16 = System_Int32__ToString((int32_t)&uniqueId, 0LL);
  System_String__Concat_44758168((System_String_o *)StringLiteral_19228/*"functionInstantDeath>>:"*/, v16, 0LL);
  v17 = (BattleActionData_o *)sub_B70764(BattleActionData_TypeInfo);
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
  HIDWORD(data->fields.rootfsm) = 1;
  v18 = data;
  if ( uniqueId == playerId || isNoAccumulation )
    BYTE1(data->fields.quest_ent) = 1;
  if ( !v17 )
LABEL_16:
    sub_B7076C(data, v18);
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
  double v22; // d0
  int v23; // w24
  int32_t funcIndex; // w21
  int32_t uniqueId; // w22
  FunctionEntity_o *funcEnt; // x25
  _BOOL8 IsCommandSideEffect; // x0
  const MethodInfo *v28; // x6
  BattleActionData_BuffData_o *v29; // x20

  if ( (byte_435388B & 1) == 0 )
  {
    sub_B70694(&BattleActionData_TypeInfo);
    sub_B70694(&BattleDataDefine_TypeInfo);
    byte_435388B = 1;
  }
  *diffNp = 0;
  data = this->fields.data;
  if ( !data )
    goto LABEL_22;
  data = (BattleData_o *)BattleData__getServantData(data, targetId, 0LL);
  if ( !data )
    goto LABEL_22;
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
        if ( (BYTE3(BattleDataDefine_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !BattleDataDefine_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(BattleDataDefine_TypeInfo);
          v20 = BattleDataDefine_TypeInfo;
        }
        PERCENTAGE_DENOMINATOR = v20->static_fields->PERCENTAGE_DENOMINATOR;
        v22 = PERCENTAGE_DENOMINATOR == INFINITY ? -PERCENTAGE_DENOMINATOR : PERCENTAGE_DENOMINATOR;
        v23 = v18 % (int)v22;
        if ( v23 >= 1 )
        {
          BattleServantData__addNp(v13, v23, 0, 0LL);
          *diffNp -= v23;
        }
        v14 = (BattleActionData_o *)sub_B70764(BattleActionData_TypeInfo);
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
            HIDWORD(data->fields.rootfsm) = 3;
            BattleActionData_BuffData__setSaveNp((BattleActionData_BuffData_o *)data, v19, 0LL);
            if ( v14 )
            {
              BattleActionData__setBuffData(v14, v29, baseVals, 0LL);
              return v14;
            }
          }
        }
      }
LABEL_22:
      sub_B7076C(data, procArg);
    }
  }
  return v14;
}


BattleActionData_o *__fastcall BattleLogicFunction__functionMissState(
        BattleLogicFunction_o *this,
        int32_t targetId,
        const MethodInfo *method)
{
  BattleActionData_o *v3; // x19

  if ( (byte_435386F & 1) == 0 )
  {
    sub_B70694(&BattleActionData_TypeInfo);
    byte_435386F = 1;
  }
  v3 = (BattleActionData_o *)sub_B70764(BattleActionData_TypeInfo);
  BattleActionData___ctor(v3, 0LL);
  return v3;
}


void __fastcall BattleLogicFunction__functionMovePosition(
        BattleLogicFunction_o *this,
        BattleActionData_o *actionData,
        BattleServantData_o *targetData,
        const MethodInfo *method)
{
  __int64 v7; // x22
  __int64 v8; // x22
  DataManager_o *MasterData_WarQuestSelectionMaster; // x0
  SkillLvMaster_o *v10; // x22
  struct BattleSkillInfoData_o *skillInfo; // x8
  SkillLvEntity_o *v12; // x22
  int32_t MovePositionUp; // w23
  int32_t MovePositionDown; // w0
  int v15; // w24
  int v16; // w25
  struct DataMasterBase_array *datalist; // x8
  __int64 v18; // x9
  int i; // w10
  int v20; // w11
  int v21; // w10
  BattleServantData_o *v22; // x23
  struct BattleData_o *data; // x8
  __int64 *v24; // x8
  System_Int32_array **v25; // x21
  __int64 v26; // x22
  System_String_array **v27; // x2
  System_String_array **v28; // x3
  System_Boolean_array **v29; // x4
  System_Int32_array **v30; // x5
  System_Int32_array *v31; // x6
  System_Int32_array *v32; // x7
  __int64 v33; // x0

  if ( (byte_4353891 & 1) == 0 )
  {
    sub_B70694(&BattleActionData_TypeInfo);
    sub_B70694(&Method_DataManager_GetMasterData_SkillLvMaster___);
    sub_B70694(&Method_SingletonMonoBehaviour_DataManager__getInstance__);
    sub_B70694(&StringLiteral_6463/*"FOCUS_UP_EX"*/);
    sub_B70694(&StringLiteral_6461/*"FOCUS_UNDER_EX"*/);
    sub_B70694(&StringLiteral_6459/*"FOCUS_CENTER_EX"*/);
    sub_B70694(&StringLiteral_6460/*"FOCUS_UNDER"*/);
    sub_B70694(&StringLiteral_6458/*"FOCUS_CENTER"*/);
    sub_B70694(&StringLiteral_6462/*"FOCUS_UP"*/);
    byte_4353891 = 1;
  }
  v7 = *((_QWORD *)Method_SingletonMonoBehaviour_DataManager__getInstance__ + 3);
  if ( (*(_BYTE *)(v7 + 306) & 1) == 0 )
    sub_B08394(*((_QWORD *)Method_SingletonMonoBehaviour_DataManager__getInstance__ + 3));
  v8 = **(_QWORD **)(v7 + 192);
  if ( (*(_BYTE *)(v8 + 306) & 1) == 0 )
    sub_B08394(v8);
  MasterData_WarQuestSelectionMaster = **(DataManager_o ***)(v8 + 184);
  if ( !MasterData_WarQuestSelectionMaster )
    goto LABEL_23;
  MasterData_WarQuestSelectionMaster = (DataManager_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                          MasterData_WarQuestSelectionMaster,
                                                          (const MethodInfo_1CA35A0 *)Method_DataManager_GetMasterData_SkillLvMaster___);
  if ( !actionData )
    goto LABEL_23;
  v10 = (SkillLvMaster_o *)MasterData_WarQuestSelectionMaster;
  MasterData_WarQuestSelectionMaster = (DataManager_o *)actionData->fields.skillInfo;
  if ( !MasterData_WarQuestSelectionMaster )
    goto LABEL_23;
  MasterData_WarQuestSelectionMaster = (DataManager_o *)((__int64 (__fastcall *)(DataManager_o *, void *))MasterData_WarQuestSelectionMaster->klass[1]._1.namespaze)(
                                                          MasterData_WarQuestSelectionMaster,
                                                          MasterData_WarQuestSelectionMaster->klass[1]._1.byval_arg.data);
  skillInfo = actionData->fields.skillInfo;
  if ( !skillInfo )
    goto LABEL_23;
  if ( !v10 )
    goto LABEL_23;
  MasterData_WarQuestSelectionMaster = (DataManager_o *)SkillLvMaster__GetEntity(
                                                          v10,
                                                          (int32_t)MasterData_WarQuestSelectionMaster,
                                                          skillInfo->fields.skilllv,
                                                          0LL);
  if ( !MasterData_WarQuestSelectionMaster )
    goto LABEL_23;
  v12 = (SkillLvEntity_o *)MasterData_WarQuestSelectionMaster;
  MovePositionUp = SkillLvEntity__getMovePositionUp((SkillLvEntity_o *)MasterData_WarQuestSelectionMaster, 0LL);
  MovePositionDown = SkillLvEntity__getMovePositionDown(v12, 0LL);
  if ( (MovePositionUp & MovePositionDown) != -1 )
  {
    v15 = MovePositionDown;
    MasterData_WarQuestSelectionMaster = (DataManager_o *)this->fields.data;
    if ( !MasterData_WarQuestSelectionMaster )
      goto LABEL_23;
    MasterData_WarQuestSelectionMaster = (DataManager_o *)BattleData__getTargetEnemyId(
                                                            (BattleData_o *)MasterData_WarQuestSelectionMaster,
                                                            0,
                                                            0LL);
    if ( !this->fields.data )
      goto LABEL_23;
    v16 = (int)MasterData_WarQuestSelectionMaster;
    BattleData__getServantData(this->fields.data, (int32_t)MasterData_WarQuestSelectionMaster, 0LL);
    MasterData_WarQuestSelectionMaster = (DataManager_o *)this->fields.data;
    if ( !MasterData_WarQuestSelectionMaster )
      goto LABEL_23;
    datalist = MasterData_WarQuestSelectionMaster[2].fields.datalist;
    if ( !datalist )
      goto LABEL_23;
    v18 = *(_QWORD *)&datalist->max_length;
    for ( i = 0; ; ++i )
    {
      if ( i >= (int)v18 )
        return;
      if ( i >= (unsigned int)v18 )
        goto LABEL_50;
      if ( v16 == *((_DWORD *)datalist->m_Items + i) )
        break;
    }
    v20 = MovePositionUp > 0 ? -MovePositionUp : v15;
    v21 = v20 + i;
    if ( v21 >= 0 && v21 < (int)v18 )
    {
      if ( v21 >= (unsigned int)v18 )
      {
LABEL_50:
        v33 = sub_B70798(MasterData_WarQuestSelectionMaster);
        sub_B70738(v33, 0LL);
      }
      MasterData_WarQuestSelectionMaster = (DataManager_o *)BattleData__getServantData(
                                                              (BattleData_o *)MasterData_WarQuestSelectionMaster,
                                                              *((_DWORD *)datalist->m_Items + v21),
                                                              0LL);
      if ( !MasterData_WarQuestSelectionMaster )
        goto LABEL_23;
      v22 = (BattleServantData_o *)MasterData_WarQuestSelectionMaster;
      MasterData_WarQuestSelectionMaster = (DataManager_o *)BattleServantData__isAlive(
                                                              (BattleServantData_o *)MasterData_WarQuestSelectionMaster,
                                                              0,
                                                              0LL);
      if ( ((unsigned __int8)MasterData_WarQuestSelectionMaster & 1) != 0 )
      {
        data = this->fields.data;
        if ( !data )
          goto LABEL_23;
        data->fields.globaltargetId = v22->fields.uniqueId;
        if ( BattleServantData__isMultiTargetUp(v22, 0LL) )
        {
          if ( SkillLvEntity__IsAress(v12, 0LL) )
            v24 = &StringLiteral_6463/*"FOCUS_UP_EX"*/;
          else
            v24 = &StringLiteral_6462/*"FOCUS_UP"*/;
        }
        else if ( BattleServantData__isMultiTargetCore(v22, 0LL) )
        {
          if ( SkillLvEntity__IsAress(v12, 0LL) )
            v24 = &StringLiteral_6459/*"FOCUS_CENTER_EX"*/;
          else
            v24 = &StringLiteral_6458/*"FOCUS_CENTER"*/;
        }
        else
        {
          v25 = 0LL;
          if ( !BattleServantData__isMultiTargetUnder(v22, 0LL) )
          {
LABEL_47:
            v26 = sub_B70764(BattleActionData_TypeInfo);
            BattleActionData___ctor((BattleActionData_o *)v26, 0LL);
            if ( targetData && v26 )
            {
              *(_DWORD *)(v26 + 32) = targetData->fields.uniqueId;
              *(_DWORD *)(v26 + 36) = actionData->fields.targetId;
              BattleActionData__setStateField((BattleActionData_o *)v26, 0LL);
              *(_QWORD *)(v26 + 64) = v25;
              sub_B70630((BattleServantConfConponent_o *)(v26 + 64), v25, v27, v28, v29, v30, v31, v32);
              BattleActionData__AddAfterActionData(actionData, (BattleActionData_o *)v26, 0, 0LL);
              return;
            }
LABEL_23:
            sub_B7076C(MasterData_WarQuestSelectionMaster, actionData);
          }
          if ( SkillLvEntity__IsAress(v12, 0LL) )
            v24 = &StringLiteral_6461/*"FOCUS_UNDER_EX"*/;
          else
            v24 = &StringLiteral_6460/*"FOCUS_UNDER"*/;
        }
        v25 = (System_Int32_array **)*v24;
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
  __int64 v9; // x20
  RemovedBuffInfoGroup_o *StealBuffInfoGroup; // x0
  __int64 v11; // x1
  const MethodInfo *v12; // x4
  struct BattleLogicFunctionProcess_FunctionUnitCheck_o *funcUnit_k__BackingField; // x8
  DataVals_o *dataVals_k__BackingField; // x19
  int32_t targetId_k__BackingField; // w23
  RemovedBuffInfoGroup_o *v16; // x21
  BattleServantData_o *ServantData; // x26
  const MethodInfo *v18; // x4
  System_Collections_Generic_IEnumerable_TSource__o *v19; // x24
  System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *v20; // x25
  System_Collections_Generic_IEnumerable_T__o *v21; // x24
  System_Collections_Generic_HashSet_BattleBuffData_BuffData__o *v22; // x25
  System_String_array **v23; // x2
  System_String_array **v24; // x3
  System_Boolean_array **v25; // x4
  System_Int32_array **v26; // x5
  System_Int32_array *v27; // x6
  System_Int32_array *v28; // x7
  System_Collections_Generic_IEnumerable_TSource__o *v29; // x21
  System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *v30; // x24
  System_Collections_Generic_IEnumerable_TSource__o *v31; // x0
  struct System_String_o *klass; // x8
  DataVals_o *v33; // x25
  System_Collections_Generic_IEnumerable_TSource__o *v34; // x19
  int monitor; // w8
  DataMasterBase_WarMaster__WarEntity__int__o *v36; // x24
  __int64 v37; // x23
  BattleActionData_o *v38; // x27
  BattleBuffData_ChangeBgmData_o *v39; // x20
  BattleBuffData_BuffData_o *v40; // x21
  const MethodInfo *v41; // x2
  struct BattleBuffData_ChangeBgmData_o *changeBgmData; // x8
  const MethodInfo *v43; // x3
  int32_t DispTurn; // w0
  _BOOL4 isProgressSelfTurn; // w8
  BattleActionData_BuffData_o *v46; // x27
  struct FunctionEntity_o *funcEnt; // x19
  bool v48; // w0
  BattleLogicFunction_o *v49; // x19
  System_Int32_array **v50; // x0
  System_String_array **v51; // x2
  System_String_array **v52; // x3
  System_Boolean_array **v53; // x4
  System_Int32_array **v54; // x5
  System_Int32_array *v55; // x6
  System_Int32_array *v56; // x7
  int v57; // w22
  int32_t funcIndex; // w20
  bool IsCommandSideEffect; // w0
  const MethodInfo *v60; // x7
  struct BattleData_o *data; // x8
  BattleFieldEnvironmentData_o *FieldEnvData_k__BackingField; // x19
  BattleLogicFunction___c_c *v63; // x0
  struct BattleLogicFunction___c_StaticFields *static_fields; // x8
  System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *_9__109_2; // x20
  Il2CppObject *v66; // x21
  struct BattleLogicFunction___c_StaticFields *v67; // x0
  System_String_array **v68; // x2
  System_String_array **v69; // x3
  System_Boolean_array **v70; // x4
  System_Int32_array **v71; // x5
  System_Int32_array *v72; // x6
  System_Int32_array *v73; // x7
  System_Collections_Generic_IEnumerable_TSource__o *v74; // x0
  BattleActionEffect_ChangeBgmBuff_o *v75; // x19
  __int64 v76; // x0
  BattleLogicFunctionProcess_FunctionTargetCheck_o *v77; // [xsp+8h] [xbp-88h]
  int32_t targetId; // [xsp+14h] [xbp-7Ch]
  BattleLogicFunction_ProcListInArgs_o *v79; // [xsp+18h] [xbp-78h]
  System_Collections_Generic_IEnumerable_TSource__o *source; // [xsp+20h] [xbp-70h]
  System_Collections_Generic_List_int__o *v81; // [xsp+28h] [xbp-68h]
  WarEntity_o *entity; // [xsp+38h] [xbp-58h] BYREF

  if ( (byte_4353895 & 1) == 0 )
  {
    sub_B70694(&BattleActionData_BuffData_TypeInfo);
    sub_B70694(&BattleActionEffect_ChangeBgmBuff_TypeInfo);
    sub_B70694(&Method_DataManager_GetMasterData_BuffMaster___);
    sub_B70694(&Method_DataMasterBase_BuffMaster__BuffEntity__int__TryGetEntity__);
    sub_B70694(&Method_System_Linq_Enumerable_ToArray_BattleBuffData_BuffData___);
    sub_B70694(&Method_System_Linq_Enumerable_Where_BattleBuffData_BuffData___);
    sub_B70694(&Method_System_Func_BattleBuffData_BuffData__bool___ctor__);
    sub_B70694(&System_Func_BattleBuffData_BuffData__bool__TypeInfo);
    sub_B70694(&Method_System_Collections_Generic_HashSet_BattleBuffData_BuffData___ctor___69141920);
    sub_B70694(&System_Collections_Generic_HashSet_BattleBuffData_BuffData__TypeInfo);
    sub_B70694(&Method_System_Collections_Generic_List_int__Add__);
    sub_B70694(&Method_System_Collections_Generic_List_int__ToArray__);
    sub_B70694(&Method_System_Collections_Generic_List_int___ctor__);
    sub_B70694(&System_Collections_Generic_List_int__TypeInfo);
    sub_B70694(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_B70694(&Method_BattleLogicFunction___c__functionMoveState_b__109_2__);
    sub_B70694(&Method_BattleLogicFunction___c__DisplayClass109_0__functionMoveState_b__0__);
    sub_B70694(&Method_BattleLogicFunction___c__DisplayClass109_0__functionMoveState_b__1__);
    sub_B70694(&BattleLogicFunction___c__DisplayClass109_0_TypeInfo);
    sub_B70694(&BattleLogicFunction___c_TypeInfo);
    byte_4353895 = 1;
  }
  entity = 0LL;
  v9 = sub_B70764(BattleLogicFunction___c__DisplayClass109_0_TypeInfo);
  BattleLogicFunction___c__DisplayClass109_0___ctor((BattleLogicFunction___c__DisplayClass109_0_o *)v9, 0LL);
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
                         v12);
  if ( !this->fields.data )
    goto LABEL_61;
  v16 = StealBuffInfoGroup;
  ServantData = BattleData__getServantData(this->fields.data, targetId_k__BackingField, 0LL);
  BattleLogicFunction__ResetFamilyLinkageIdToStolenFamilyBuffs(
    (BattleLogicFunction_o *)ServantData,
    procArg,
    ServantData,
    v16,
    v18);
  if ( !v9 )
    goto LABEL_61;
  v77 = funcTarget;
  v79 = procArg;
  targetId = targetId_k__BackingField;
  *(_DWORD *)(v9 + 16) = 0x1000000;
  if ( !v16 )
    goto LABEL_61;
  v19 = (System_Collections_Generic_IEnumerable_TSource__o *)RemovedBuffInfoGroup__RemovedLinkageBuffEnumerable(
                                                               v16,
                                                               0LL);
  v20 = (System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *)sub_B70764(System_Func_BattleBuffData_BuffData__bool__TypeInfo);
  System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool____ctor(
    v20,
    (Il2CppObject *)v9,
    Method_BattleLogicFunction___c__DisplayClass109_0__functionMoveState_b__0__,
    (const MethodInfo_29AC578 *)Method_System_Func_BattleBuffData_BuffData__bool___ctor__);
  v21 = (System_Collections_Generic_IEnumerable_T__o *)System_Linq_Enumerable__Where_WarBoardManager_WarBoardOnboardSkillTarget_(
                                                         v19,
                                                         (System_Func_TSource__bool__o *)v20,
                                                         (const MethodInfo_1CCCE44 *)Method_System_Linq_Enumerable_Where_BattleBuffData_BuffData___);
  v22 = (System_Collections_Generic_HashSet_BattleBuffData_BuffData__o *)sub_B70764(System_Collections_Generic_HashSet_BattleBuffData_BuffData__TypeInfo);
  System_Collections_Generic_HashSet_BattleBuffData_BuffData____ctor(
    v22,
    v21,
    (const MethodInfo_2EB4920 *)Method_System_Collections_Generic_HashSet_BattleBuffData_BuffData___ctor___69141920);
  *(_QWORD *)(v9 + 24) = v22;
  sub_B70630((BattleServantConfConponent_o *)(v9 + 24), (System_Int32_array **)v22, v23, v24, v25, v26, v27, v28);
  v29 = (System_Collections_Generic_IEnumerable_TSource__o *)RemovedBuffInfoGroup__RemovedAllBuffEnumerable(v16, 0LL);
  v30 = (System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *)sub_B70764(System_Func_BattleBuffData_BuffData__bool__TypeInfo);
  System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool____ctor(
    v30,
    (Il2CppObject *)v9,
    Method_BattleLogicFunction___c__DisplayClass109_0__functionMoveState_b__1__,
    (const MethodInfo_29AC578 *)Method_System_Func_BattleBuffData_BuffData__bool___ctor__);
  v31 = System_Linq_Enumerable__Where_WarBoardManager_WarBoardOnboardSkillTarget_(
          v29,
          (System_Func_TSource__bool__o *)v30,
          (const MethodInfo_1CCCE44 *)Method_System_Linq_Enumerable_Where_BattleBuffData_BuffData___);
  StealBuffInfoGroup = (RemovedBuffInfoGroup_o *)System_Linq_Enumerable__ToArray_DrawLotsDisplayMessage_DisplayedInGroup_SaveData_(
                                                   v31,
                                                   (const MethodInfo_1CC8794 *)Method_System_Linq_Enumerable_ToArray_BattleBuffData_BuffData___);
  if ( !StealBuffInfoGroup )
    goto LABEL_61;
  source = (System_Collections_Generic_IEnumerable_TSource__o *)StealBuffInfoGroup;
  klass = (struct System_String_o *)StealBuffInfoGroup[1].klass;
  StealBuffInfoGroup = (RemovedBuffInfoGroup_o *)v79;
  v33 = dataVals_k__BackingField;
  if ( !klass )
  {
    if ( dataVals_k__BackingField )
    {
      if ( v79 )
      {
        funcIndex = dataVals_k__BackingField->fields.funcIndex;
        IsCommandSideEffect = BattleLogicFunction_ProcListInArgs__get_IsCommandSideEffect(v79, 0LL);
        StealBuffInfoGroup = (RemovedBuffInfoGroup_o *)BattleLogicFunction__getNoEffectObject(
                                                         this,
                                                         targetId_k__BackingField,
                                                         funcIndex,
                                                         dataVals_k__BackingField,
                                                         IsCommandSideEffect,
                                                         0LL,
                                                         0LL,
                                                         v60);
        if ( mainAction )
        {
          BattleActionData__addAction(mainAction, (BattleActionData_o *)StealBuffInfoGroup, 0LL);
          return;
        }
      }
    }
    goto LABEL_61;
  }
  v81 = (System_Collections_Generic_List_int__o *)sub_B70764(System_Collections_Generic_List_int__TypeInfo);
  System_Collections_Generic_List_int____ctor(
    v81,
    (const MethodInfo_30B547C *)Method_System_Collections_Generic_List_int___ctor__);
  StealBuffInfoGroup = (RemovedBuffInfoGroup_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2CE992C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !StealBuffInfoGroup )
    goto LABEL_61;
  StealBuffInfoGroup = (RemovedBuffInfoGroup_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                   (DataManager_o *)StealBuffInfoGroup,
                                                   (const MethodInfo_1CA35A0 *)Method_DataManager_GetMasterData_BuffMaster___);
  v34 = source;
  monitor = (int)source[1].monitor;
  if ( monitor < 1 )
  {
    v49 = this;
    v57 = 0;
    v38 = 0LL;
  }
  else
  {
    v36 = (DataMasterBase_WarMaster__WarEntity__int__o *)StealBuffInfoGroup;
    v37 = 0LL;
    v38 = 0LL;
    v39 = 0LL;
    do
    {
      if ( (unsigned int)v37 >= monitor )
      {
        v76 = sub_B70798(StealBuffInfoGroup);
        sub_B70738(v76, 0LL);
      }
      v40 = (BattleBuffData_BuffData_o *)*((_QWORD *)&source[2].klass + v37);
      if ( !v40 || !v36 )
        goto LABEL_61;
      StealBuffInfoGroup = (RemovedBuffInfoGroup_o *)DataMasterBase_WarMaster__WarEntity__int___TryGetEntity(
                                                       v36,
                                                       &entity,
                                                       v40->fields.buffId,
                                                       (const MethodInfo_21C049C *)Method_DataMasterBase_BuffMaster__BuffEntity__int__TryGetEntity__);
      if ( ((unsigned __int8)StealBuffInfoGroup & 1) != 0 )
      {
        StealBuffInfoGroup = (RemovedBuffInfoGroup_o *)BattleLogicFunction__IsAddStateFieldFlag(this, v40, v41);
        if ( !ServantData )
          goto LABEL_61;
        BattleServantData__addBuff(ServantData, v40, (unsigned __int8)StealBuffInfoGroup & 1, 0, 1, 0LL);
        changeBgmData = v40->fields.changeBgmData;
        if ( changeBgmData )
          v39 = v40->fields.changeBgmData;
        if ( changeBgmData )
        {
          if ( !v39 )
            goto LABEL_61;
          BattleBuffData_ChangeBgmData__UpdateUniqueVal(v39, v40->fields.addOrder, ServantData->fields.uniqueId, 0LL);
        }
        StealBuffInfoGroup = (RemovedBuffInfoGroup_o *)entity;
        if ( !entity )
          goto LABEL_61;
        if ( !BuffEntity__IsDisableMoveStateTurnChange((BuffEntity_o *)entity, 0LL) )
        {
          if ( v40->fields.turn <= 0 )
          {
            isProgressSelfTurn = v40->fields.isProgressSelfTurn;
          }
          else
          {
            DispTurn = BattleBuffData_BuffData__get_DispTurn(v40, 0LL);
            isProgressSelfTurn = v40->fields.isProgressSelfTurn;
            v40->fields.turn = 2 * DispTurn - isProgressSelfTurn;
          }
          v40->fields.isProgressEndEnemyTurn = ServantData->fields.isEnemy ^ !isProgressSelfTurn;
        }
        BattleLogicFunction__AfterAddedBuffProcess(this, ServantData, (BuffEntity_o *)entity, v43);
        if ( v38 )
        {
          StealBuffInfoGroup = (RemovedBuffInfoGroup_o *)v81;
          if ( !v81 )
            goto LABEL_61;
          System_Collections_Generic_List_int___Add(
            v81,
            v40->fields.addOrder,
            (const MethodInfo_30B61D8 *)Method_System_Collections_Generic_List_int__Add__);
        }
        else
        {
          v46 = (BattleActionData_BuffData_o *)sub_B70764(BattleActionData_BuffData_TypeInfo);
          BattleActionData_BuffData___ctor(v46, 0LL);
          if ( !v46 )
            goto LABEL_61;
          v46->fields.targetId = targetId;
          if ( !v33 )
            goto LABEL_61;
          StealBuffInfoGroup = (RemovedBuffInfoGroup_o *)v79;
          v46->fields.functionIndex = v33->fields.funcIndex;
          if ( !v79 )
            goto LABEL_61;
          funcEnt = v33->fields.funcEnt;
          v48 = BattleLogicFunction_ProcListInArgs__get_IsCommandSideEffect(v79, 0LL);
          StealBuffInfoGroup = (RemovedBuffInfoGroup_o *)((__int64 (__fastcall *)(BattleLogicFunctionProcess_FunctionTargetCheck_o *, BattleActionData_BuffData_o *, BattleBuffData_BuffData_o *, struct FunctionEntity_o *, bool, Il2CppMethodPointer))v77->klass->vtable._11_MakeAddActionBuffData.method)(
                                                           v77,
                                                           v46,
                                                           v40,
                                                           funcEnt,
                                                           v48,
                                                           v77->klass->vtable._12_GetConvertBuffEntity.methodPtr);
          if ( !mainAction )
            goto LABEL_61;
          v38 = (BattleActionData_o *)StealBuffInfoGroup;
          BattleActionData__setBuffData(mainAction, (BattleActionData_BuffData_o *)StealBuffInfoGroup, v33, 0LL);
          StealBuffInfoGroup = (RemovedBuffInfoGroup_o *)this->fields.data;
          v34 = source;
          if ( !StealBuffInfoGroup )
            goto LABEL_61;
          BattleData__AddFreshBuffList((BattleData_o *)StealBuffInfoGroup, (BattleActionData_BuffData_o *)v38, 0LL);
        }
      }
      monitor = (int)v34[1].monitor;
      ++v37;
    }
    while ( (int)v37 < monitor );
    if ( v38 )
    {
      StealBuffInfoGroup = (RemovedBuffInfoGroup_o *)v81;
      if ( !v81 )
        goto LABEL_61;
      v49 = this;
      v50 = (System_Int32_array **)System_Collections_Generic_List_int___ToArray(
                                     v81,
                                     (const MethodInfo_30B82E4 *)Method_System_Collections_Generic_List_int__ToArray__);
      *(_QWORD *)&v38->fields.addCriticalStars = v50;
      sub_B70630((BattleServantConfConponent_o *)&v38->fields.addCriticalStars, v50, v51, v52, v53, v54, v55, v56);
      v57 = 1;
    }
    else
    {
      v49 = this;
      v57 = 0;
    }
  }
  data = v49->fields.data;
  if ( !data )
    goto LABEL_61;
  FieldEnvData_k__BackingField = data->fields._FieldEnvData_k__BackingField;
  v63 = BattleLogicFunction___c_TypeInfo;
  if ( (BYTE3(BattleLogicFunction___c_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !BattleLogicFunction___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BattleLogicFunction___c_TypeInfo);
    v63 = BattleLogicFunction___c_TypeInfo;
  }
  static_fields = v63->static_fields;
  _9__109_2 = (System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *)static_fields->__9__109_2;
  if ( !_9__109_2 )
  {
    if ( (BYTE3(v63->vtable._0_Equals.methodPtr) & 4) != 0 && !v63->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v63);
      static_fields = BattleLogicFunction___c_TypeInfo->static_fields;
    }
    v66 = (Il2CppObject *)static_fields->__9;
    _9__109_2 = (System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *)sub_B70764(System_Func_BattleBuffData_BuffData__bool__TypeInfo);
    System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool____ctor(
      _9__109_2,
      v66,
      Method_BattleLogicFunction___c__functionMoveState_b__109_2__,
      (const MethodInfo_29AC578 *)Method_System_Func_BattleBuffData_BuffData__bool___ctor__);
    v67 = BattleLogicFunction___c_TypeInfo->static_fields;
    v67->__9__109_2 = (struct System_Func_BattleBuffData_BuffData__bool__o *)_9__109_2;
    sub_B70630(
      (BattleServantConfConponent_o *)&v67->__9__109_2,
      (System_Int32_array **)_9__109_2,
      v68,
      v69,
      v70,
      v71,
      v72,
      v73);
  }
  v74 = System_Linq_Enumerable__Where_WarBoardManager_WarBoardOnboardSkillTarget_(
          source,
          (System_Func_TSource__bool__o *)_9__109_2,
          (const MethodInfo_1CCCE44 *)Method_System_Linq_Enumerable_Where_BattleBuffData_BuffData___);
  StealBuffInfoGroup = (RemovedBuffInfoGroup_o *)System_Linq_Enumerable__ToArray_DrawLotsDisplayMessage_DisplayedInGroup_SaveData_(
                                                   v74,
                                                   (const MethodInfo_1CC8794 *)Method_System_Linq_Enumerable_ToArray_BattleBuffData_BuffData___);
  if ( !FieldEnvData_k__BackingField )
LABEL_61:
    sub_B7076C(StealBuffInfoGroup, v11);
  if ( (v57 & BattleFieldEnvironmentData__AddBgmFromChangeBgmBuffArray(
                FieldEnvData_k__BackingField,
                (BattleBuffData_BuffData_array *)StealBuffInfoGroup,
                0LL)) == 1 )
  {
    v75 = (BattleActionEffect_ChangeBgmBuff_o *)sub_B70764(BattleActionEffect_ChangeBgmBuff_TypeInfo);
    BattleActionEffect_ChangeBgmBuff___ctor(v75, 0LL);
    BattleActionData_BuffData__SetActionEffectProc(
      (BattleActionData_BuffData_o *)v38,
      (BattleActionEffect_Base_o *)v75,
      0LL);
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
  BattleActionData_o *v15; // x23
  __int64 v16; // x1
  BattleData_o *data; // x0
  BattleData_o *v18; // x8
  BattleServantData_o *v19; // x22
  BattleServantData_o *ServantData; // x21
  System_Collections_Generic_List_int__o *v21; // x27
  System_Int32_array *TargetRarityList; // x28
  char v23; // w21
  int32_t v24; // w1
  int32_t Param; // w0
  int v26; // w8
  char v27; // w10
  System_Int32_array *buffIndv; // x20
  System_Int32_array *v29; // x22
  bool v30; // w9
  bool v31; // zf
  int32_t v32; // w0
  int32_t v33; // w0
  int32_t v34; // w0
  int32_t v35; // w0
  int32_t v36; // w0
  System_Array_o *v37; // x21
  bool v38; // w22
  bool IsOverChargeState; // w0
  int32_t NPFixedDamageValue; // w23
  BattleLogic_DamageProcessArgs_o *damageProcessArgs; // x26
  BattleLogic_o *logic; // x24
  System_Int32_array *v43; // x27
  bool IsIncludeIgnoreIndividuality; // w23
  BattleActionData_DamageData_o *v45; // x20
  char v46; // w22
  __int64 v48; // x0
  bool v49; // [xsp+34h] [xbp-8Ch]
  bool isRarityAtk; // [xsp+38h] [xbp-88h]
  int32_t typea; // [xsp+3Ch] [xbp-84h]
  BattleServantData_o *v52; // [xsp+40h] [xbp-80h]
  BattleServantData_o *v53; // [xsp+48h] [xbp-78h]
  BattleActionData_o *v54; // [xsp+58h] [xbp-68h]
  int32_t v55; // [xsp+64h] [xbp-5Ch]
  System_RuntimeFieldHandle_o v56; // 0:w1.4

  if ( (byte_4353871 & 1) == 0 )
  {
    sub_B70694(&BattleActionData_TypeInfo);
    sub_B70694(&BattleLogic_DamageProcessArgs_TypeInfo);
    sub_B70694(&int___TypeInfo);
    sub_B70694(&Method_System_Collections_Generic_List_int__Add__);
    sub_B70694(&Method_System_Collections_Generic_List_int__ToArray__);
    sub_B70694(&Method_System_Collections_Generic_List_int___ctor__);
    sub_B70694(&System_Collections_Generic_List_int__TypeInfo);
    sub_B70694(&DataVals_OverChargeState___TypeInfo);
    sub_B70694(&Field__PrivateImplementationDetails__44BE0EBF7C907BA44AD83314C6AD0AA399AD5B73911C129D2CD6A85D4A056C90);
    byte_4353871 = 1;
  }
  v15 = (BattleActionData_o *)sub_B70764(BattleActionData_TypeInfo);
  BattleActionData___ctor(v15, 0LL);
  data = this->fields.data;
  if ( !data )
    goto LABEL_38;
  data = (BattleData_o *)BattleData__getServantData(data, playerId, 0LL);
  v18 = this->fields.data;
  if ( !v18 )
    goto LABEL_38;
  v19 = (BattleServantData_o *)data;
  ServantData = BattleData__getServantData(v18, targetId, 0LL);
  v21 = (System_Collections_Generic_List_int__o *)sub_B70764(System_Collections_Generic_List_int__TypeInfo);
  System_Collections_Generic_List_int____ctor(
    v21,
    (const MethodInfo_30B547C *)Method_System_Collections_Generic_List_int___ctor__);
  if ( !baseVals
    || (v52 = ServantData,
        v54 = v15,
        v55 = funcIndex,
        data = (BattleData_o *)DataVals__GetParam(baseVals, 3, 0, 0LL),
        !v21) )
  {
LABEL_38:
    sub_B7076C(data, v16);
  }
  System_Collections_Generic_List_int___Add(
    v21,
    (int32_t)data,
    (const MethodInfo_30B61D8 *)Method_System_Collections_Generic_List_int__Add__);
  TargetRarityList = 0LL;
  v23 = 0;
  v53 = v19;
  typea = type;
  if ( (unsigned int)type > 0xB )
  {
LABEL_26:
    v27 = 0;
    v30 = 0;
    buffIndv = 0LL;
    v29 = 0LL;
    goto LABEL_29;
  }
  if ( ((1 << type) & 0x698) != 0 )
  {
    v24 = 7;
    goto LABEL_12;
  }
  if ( ((1 << type) & 0x60) != 0 )
  {
    v24 = 6;
LABEL_12:
    Param = DataVals__GetParam(baseVals, v24, 0, 0LL);
    System_Collections_Generic_List_int___Add(
      v21,
      Param,
      (const MethodInfo_30B61D8 *)Method_System_Collections_Generic_List_int__Add__);
    v26 = type - 3;
    TargetRarityList = 0LL;
    v23 = 0;
    v27 = 0;
    buffIndv = 0LL;
    v29 = 0LL;
    v30 = 0;
    switch ( v26 )
    {
      case 0:
      case 1:
        v29 = (System_Int32_array *)sub_B706AC(int___TypeInfo, 1LL);
        data = (BattleData_o *)DataVals__GetParam(baseVals, 6, 0, 0LL);
        if ( !v29 )
          goto LABEL_38;
        if ( !v29->max_length )
          goto LABEL_39;
        v23 = 0;
        v27 = 0;
        TargetRarityList = 0LL;
        v30 = 0;
        buffIndv = 0LL;
        v29->m_Items[1] = (int)data;
        break;
      case 2:
      case 3:
      case 5:
        goto LABEL_29;
      case 4:
        buffIndv = (System_Int32_array *)sub_B706AC(int___TypeInfo, 1LL);
        data = (BattleData_o *)DataVals__GetParam(baseVals, 6, 0, 0LL);
        if ( !buffIndv )
          goto LABEL_38;
        if ( !buffIndv->max_length )
        {
LABEL_39:
          v48 = sub_B70798(data);
          sub_B70738(v48, 0LL);
        }
        v23 = 0;
        v27 = 0;
        TargetRarityList = 0LL;
        v30 = 0;
        v29 = 0LL;
        buffIndv->m_Items[1] = (int)data;
        break;
      case 6:
        TargetRarityList = DataVals__GetTargetRarityList(baseVals, 0LL);
        v23 = 0;
        v30 = 0;
        buffIndv = 0LL;
        v29 = 0LL;
        v27 = 1;
        goto LABEL_29;
      case 7:
        v29 = DataVals__GetAndCheckIndividuality(baseVals, 0LL);
        v23 = 0;
        v27 = 0;
        TargetRarityList = 0LL;
        v30 = 0;
        buffIndv = 0LL;
        goto LABEL_29;
      default:
        goto LABEL_26;
    }
    goto LABEL_29;
  }
  v31 = type == 11;
  v27 = 0;
  v30 = 0;
  buffIndv = 0LL;
  v29 = 0LL;
  if ( v31 )
  {
    v21 = (System_Collections_Generic_List_int__o *)sub_B70764(System_Collections_Generic_List_int__TypeInfo);
    System_Collections_Generic_List_int____ctor(
      v21,
      (const MethodInfo_30B547C *)Method_System_Collections_Generic_List_int___ctor__);
    data = (BattleData_o *)DataVals__GetParam(baseVals, 3, 0, 0LL);
    if ( !v21 )
      goto LABEL_38;
    System_Collections_Generic_List_int___Add(
      v21,
      (int32_t)data,
      (const MethodInfo_30B61D8 *)Method_System_Collections_Generic_List_int__Add__);
    v32 = DataVals__GetParam(baseVals, 7, 0, 0LL);
    System_Collections_Generic_List_int___Add(
      v21,
      v32,
      (const MethodInfo_30B61D8 *)Method_System_Collections_Generic_List_int__Add__);
    v33 = DataVals__GetParam(baseVals, 59, 0, 0LL);
    System_Collections_Generic_List_int___Add(
      v21,
      v33,
      (const MethodInfo_30B61D8 *)Method_System_Collections_Generic_List_int__Add__);
    v34 = DataVals__GetParam(baseVals, 60, 0, 0LL);
    System_Collections_Generic_List_int___Add(
      v21,
      v34,
      (const MethodInfo_30B61D8 *)Method_System_Collections_Generic_List_int__Add__);
    v35 = DataVals__GetParam(baseVals, 4, 0, 0LL);
    System_Collections_Generic_List_int___Add(
      v21,
      v35,
      (const MethodInfo_30B61D8 *)Method_System_Collections_Generic_List_int__Add__);
    v36 = DataVals__GetParam(baseVals, 6, 0, 0LL);
    System_Collections_Generic_List_int___Add(
      v21,
      v36,
      (const MethodInfo_30B61D8 *)Method_System_Collections_Generic_List_int__Add__);
    buffIndv = DataVals__GetTargetList(baseVals, 0LL);
    v37 = (System_Array_o *)sub_B706AC(DataVals_OverChargeState___TypeInfo, 3LL);
    v56.fields.value = Field__PrivateImplementationDetails__44BE0EBF7C907BA44AD83314C6AD0AA399AD5B73911C129D2CD6A85D4A056C90;
    System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray_43287264(v37, v56, 0LL);
    DataVals__UpdateOverChargeEachFunc(baseVals, (DataVals_OverChargeState_array *)v37, 0LL);
    v38 = DataVals__IsOverChargeState(baseVals, 2, 0LL) || DataVals__IsOverChargeState(baseVals, 8, 0LL);
    v23 = 1;
    IsOverChargeState = DataVals__IsOverChargeState(baseVals, 1, 0LL);
    v27 = 0;
    TargetRarityList = 0LL;
    v30 = v38 && !IsOverChargeState;
    v29 = buffIndv;
  }
LABEL_29:
  v49 = v30;
  isRarityAtk = v27;
  NPFixedDamageValue = DataVals__GetNPFixedDamageValue(baseVals, 0LL);
  damageProcessArgs = (BattleLogic_DamageProcessArgs_o *)sub_B70764(BattleLogic_DamageProcessArgs_TypeInfo);
  BattleLogic_DamageProcessArgs___ctor(damageProcessArgs, 0, NPFixedDamageValue, 0LL);
  logic = this->fields.logic;
  v43 = System_Collections_Generic_List_int___ToArray(
          v21,
          (const MethodInfo_30B82E4 *)Method_System_Collections_Generic_List_int__ToArray__);
  IsIncludeIgnoreIndividuality = DataVals__IsIncludeIgnoreIndividuality(baseVals, 0LL);
  data = (BattleData_o *)DataVals__isParam(baseVals, 90, 0LL);
  if ( !logic )
    goto LABEL_38;
  data = (BattleData_o *)BattleLogic__getFunctionNpDamagelist(
                           logic,
                           v53,
                           v52,
                           v43,
                           v55,
                           typea,
                           action,
                           v29,
                           buffIndv,
                           TargetRarityList,
                           IsIncludeIgnoreIndividuality,
                           (unsigned __int8)data & 1,
                           damageProcessArgs,
                           0LL);
  v45 = (BattleActionData_DamageData_o *)data;
  if ( (unsigned int)(typea - 3) < 8 && ((0x93u >> (typea - 3)) & 1) != 0 )
    v46 = 1;
  else
    v46 = v23 & v49;
  if ( !data )
    goto LABEL_38;
  BattleActionData_DamageData__addAttackSideEffectAction((BattleActionData_DamageData_o *)data, 80, 0LL);
  if ( !v54 )
    goto LABEL_38;
  BattleActionData__setDamageData(v54, v45, baseVals, v46, isRarityAtk, 0LL);
  return v54;
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
  System_Collections_Generic_List_USFGOSetAudioGroupIndexConditional_WeightIndex__o *player_datalist; // x21
  struct BattleLogicFunction___c_StaticFields *static_fields; // x8
  System_Action_DrawLotsDisplayMessage_DisplayedInGroup_SaveData__o *_9__90_0; // x22
  Il2CppObject *v14; // x23
  struct BattleLogicFunction___c_StaticFields *v15; // x0
  System_String_array **v16; // x2
  System_String_array **v17; // x3
  System_Boolean_array **v18; // x4
  System_Int32_array **v19; // x5
  System_Int32_array *v20; // x6
  System_Int32_array *v21; // x7
  struct BattleData_o *v22; // x8
  System_Collections_Generic_List_TitleInfoControl_EventEndTimeInfo__o *v23; // x21
  struct BattleLogicFunction___c_StaticFields *v24; // x8
  System_Comparison_TitleInfoControl_EventEndTimeInfo__o *_9__90_1; // x22
  Il2CppObject *v26; // x23
  struct BattleLogicFunction___c_StaticFields *v27; // x0
  System_String_array **v28; // x2
  System_String_array **v29; // x3
  System_Boolean_array **v30; // x4
  System_Int32_array **v31; // x5
  System_Int32_array *v32; // x6
  System_Int32_array *v33; // x7
  struct BattleData_o *v34; // x8
  int v35; // w8
  unsigned int *v36; // x21
  int32_t v37; // w23
  BattleServantData_o *v38; // x22
  unsigned __int64 v39; // x23
  __int64 v40; // x8
  unsigned __int64 v41; // x9
  unsigned __int64 v42; // x8
  __int64 v43; // x22
  struct BattleData_o *v44; // x8
  struct System_Int32_array *p_entryid; // x8
  BattleLogicTask_o *v46; // x21
  __int64 v48; // x0

  if ( (byte_4353882 & 1) == 0 )
  {
    sub_B70694(&Method_System_Action_BattleServantData___ctor__);
    sub_B70694(&System_Action_BattleServantData__TypeInfo);
    sub_B70694(&BattleActionData_TypeInfo);
    sub_B70694(&BattleLogicTask_TypeInfo);
    sub_B70694(&Method_System_Comparison_BattleServantData___ctor__);
    sub_B70694(&System_Comparison_BattleServantData__TypeInfo);
    sub_B70694(&Method_System_Collections_Generic_List_BattleServantData__ForEach__);
    sub_B70694(&Method_System_Collections_Generic_List_BattleServantData__Sort__);
    sub_B70694(&Method_System_Collections_Generic_List_BattleServantData__ToArray__);
    sub_B70694(&Method_BattleLogicFunction___c__functionPtShuffle_b__90_0__);
    sub_B70694(&Method_BattleLogicFunction___c__functionPtShuffle_b__90_1__);
    sub_B70694(&BattleLogicFunction___c_TypeInfo);
    byte_4353882 = 1;
  }
  v7 = (BattleActionData_o *)sub_B70764(BattleActionData_TypeInfo);
  BattleActionData___ctor(v7, 0LL);
  data = this->fields.data;
  if ( !data )
    goto LABEL_57;
  BattleData__SubBuffFromPT_19008056((BattleData_o *)data, 0LL, 0LL);
  data = this->fields.data;
  if ( !data )
    goto LABEL_57;
  BattleData__SubBuffExitSvt((BattleData_o *)data, 0LL, 0LL);
  v10 = this->fields.data;
  if ( !v10 )
    goto LABEL_57;
  player_datalist = (System_Collections_Generic_List_USFGOSetAudioGroupIndexConditional_WeightIndex__o *)v10->fields.player_datalist;
  data = BattleLogicFunction___c_TypeInfo;
  if ( (BYTE3(BattleLogicFunction___c_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !BattleLogicFunction___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BattleLogicFunction___c_TypeInfo);
    data = BattleLogicFunction___c_TypeInfo;
  }
  static_fields = (struct BattleLogicFunction___c_StaticFields *)*((_QWORD *)data + 23);
  _9__90_0 = (System_Action_DrawLotsDisplayMessage_DisplayedInGroup_SaveData__o *)static_fields->__9__90_0;
  if ( !_9__90_0 )
  {
    if ( (*((_BYTE *)data + 307) & 4) != 0 && !*((_DWORD *)data + 56) )
    {
      j_il2cpp_runtime_class_init_0(data);
      static_fields = BattleLogicFunction___c_TypeInfo->static_fields;
    }
    v14 = (Il2CppObject *)static_fields->__9;
    _9__90_0 = (System_Action_DrawLotsDisplayMessage_DisplayedInGroup_SaveData__o *)sub_B70764(System_Action_BattleServantData__TypeInfo);
    System_Action_DrawLotsDisplayMessage_DisplayedInGroup_SaveData____ctor(
      _9__90_0,
      v14,
      Method_BattleLogicFunction___c__functionPtShuffle_b__90_0__,
      (const MethodInfo_264C148 *)Method_System_Action_BattleServantData___ctor__);
    v15 = BattleLogicFunction___c_TypeInfo->static_fields;
    v15->__9__90_0 = (struct System_Action_BattleServantData__o *)_9__90_0;
    sub_B70630(
      (BattleServantConfConponent_o *)&v15->__9__90_0,
      (System_Int32_array **)_9__90_0,
      v16,
      v17,
      v18,
      v19,
      v20,
      v21);
  }
  if ( !player_datalist )
    goto LABEL_57;
  System_Collections_Generic_List_USFGOSetAudioGroupIndexConditional_WeightIndex___ForEach(
    player_datalist,
    (System_Action_T__o *)_9__90_0,
    (const MethodInfo_30263A0 *)Method_System_Collections_Generic_List_BattleServantData__ForEach__);
  v22 = this->fields.data;
  if ( !v22 )
    goto LABEL_57;
  data = BattleLogicFunction___c_TypeInfo;
  v23 = (System_Collections_Generic_List_TitleInfoControl_EventEndTimeInfo__o *)v22->fields.player_datalist;
  if ( (BYTE3(BattleLogicFunction___c_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !BattleLogicFunction___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BattleLogicFunction___c_TypeInfo);
    data = BattleLogicFunction___c_TypeInfo;
  }
  v24 = (struct BattleLogicFunction___c_StaticFields *)*((_QWORD *)data + 23);
  _9__90_1 = (System_Comparison_TitleInfoControl_EventEndTimeInfo__o *)v24->__9__90_1;
  if ( !_9__90_1 )
  {
    if ( (*((_BYTE *)data + 307) & 4) != 0 && !*((_DWORD *)data + 56) )
    {
      j_il2cpp_runtime_class_init_0(data);
      v24 = BattleLogicFunction___c_TypeInfo->static_fields;
    }
    v26 = (Il2CppObject *)v24->__9;
    _9__90_1 = (System_Comparison_TitleInfoControl_EventEndTimeInfo__o *)sub_B70764(System_Comparison_BattleServantData__TypeInfo);
    System_Comparison_TitleInfoControl_EventEndTimeInfo____ctor(
      _9__90_1,
      v26,
      Method_BattleLogicFunction___c__functionPtShuffle_b__90_1__,
      (const MethodInfo_2B05B38 *)Method_System_Comparison_BattleServantData___ctor__);
    v27 = BattleLogicFunction___c_TypeInfo->static_fields;
    v27->__9__90_1 = (struct System_Comparison_BattleServantData__o *)_9__90_1;
    sub_B70630(
      (BattleServantConfConponent_o *)&v27->__9__90_1,
      (System_Int32_array **)_9__90_1,
      v28,
      v29,
      v30,
      v31,
      v32,
      v33);
  }
  if ( !v23 )
    goto LABEL_57;
  System_Collections_Generic_List_TitleInfoControl_EventEndTimeInfo___Sort(
    v23,
    (System_Comparison_T__o *)_9__90_1,
    (const MethodInfo_3027764 *)Method_System_Collections_Generic_List_BattleServantData__Sort__);
  v34 = this->fields.data;
  if ( !v34 )
    goto LABEL_57;
  data = v34->fields.player_datalist;
  if ( !data )
    goto LABEL_57;
  data = System_Collections_Generic_List_WarBoardUiData_SaveData___ToArray(
           (System_Collections_Generic_List_WarBoardUiData_SaveData__o *)data,
           (const MethodInfo_30277D4 *)Method_System_Collections_Generic_List_BattleServantData__ToArray__);
  if ( !data )
    goto LABEL_57;
  v35 = *((_DWORD *)data + 6);
  v36 = (unsigned int *)data;
  if ( v35 >= 1 )
  {
    v37 = 0;
    while ( 1 )
    {
      if ( v37 >= (unsigned int)v35 )
      {
LABEL_58:
        v48 = sub_B70798(data);
        sub_B70738(v48, 0LL);
      }
      v38 = *(BattleServantData_o **)&v36[2 * v37 + 8];
      if ( !v38 )
        break;
      if ( v38->fields.isEntry )
      {
        data = (void *)BattleServantData__isAlive(v38, 0, 0LL);
        if ( ((unsigned __int8)data & 1) != 0 )
          v38->fields.isEntry = 0;
      }
      v38->fields.deckIndex = v37;
      v35 = v36[6];
      if ( ++v37 >= v35 )
        goto LABEL_36;
    }
LABEL_57:
    sub_B7076C(data, v8);
  }
LABEL_36:
  data = this->fields.data;
  if ( !data )
    goto LABEL_57;
  v39 = 0LL;
  while ( 1 )
  {
    v40 = *((_QWORD *)data + 36);
    if ( !v40 )
      goto LABEL_57;
    v41 = *(unsigned int *)(v40 + 24);
    if ( (__int64)v39 >= (int)v41 )
      break;
    if ( v39 >= v41 )
      goto LABEL_58;
    *(_DWORD *)(v40 + 4 * v39 + 32) = -1;
    v42 = v36[6];
    if ( (__int64)v39 < (int)v42 )
    {
      if ( v39 >= v42 )
        goto LABEL_58;
      v43 = *(_QWORD *)&v36[2 * v39 + 8];
      if ( !v43 )
        goto LABEL_57;
      data = (void *)BattleServantData__isAlive(*(BattleServantData_o **)&v36[2 * v39 + 8], 0, 0LL);
      if ( ((unsigned __int8)data & 1) != 0 )
      {
        v44 = this->fields.data;
        if ( !v44 )
          goto LABEL_57;
        p_entryid = v44->fields.p_entryid;
        if ( !p_entryid )
          goto LABEL_57;
        if ( v39 >= p_entryid->max_length )
          goto LABEL_58;
        p_entryid->m_Items[v39 + 1] = *(_DWORD *)(v43 + 24);
        *(_BYTE *)(v43 + 452) = 1;
        *(_BYTE *)(v43 + 517) = 1;
      }
    }
    data = this->fields.data;
    ++v39;
    if ( !data )
      goto LABEL_57;
  }
  BattleData__createCommandCard((BattleData_o *)data, 0LL);
  data = this->fields.data;
  if ( !data )
    goto LABEL_57;
  BattleData__shuffleCommand((BattleData_o *)data, 0LL);
  data = this->fields.logic;
  if ( !data )
    goto LABEL_57;
  BattleLogic__drawCommand((BattleLogic_o *)data, 0LL);
  if ( !v7 )
    goto LABEL_57;
  v7->fields.redrawCommandCard = 1;
  v46 = (BattleLogicTask_o *)sub_B70764(BattleLogicTask_TypeInfo);
  BattleLogicTask___ctor(v46, 0LL);
  if ( !v46 )
    goto LABEL_57;
  BattleLogicTask__setCheckEntryFunction(v46, 0LL);
  data = this->fields.logic;
  if ( !data )
    goto LABEL_57;
  BattleLogic__AddBattleLogicTask((BattleLogic_o *)data, v46, 0LL);
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
  int v20; // w19
  System_Int32_array **v22; // x0
  System_String_array **v23; // x2
  System_String_array **v24; // x3
  System_Boolean_array **v25; // x4
  System_Int32_array **v26; // x5
  System_Int32_array *v27; // x6
  System_Int32_array *v28; // x7
  System_Int32_array **v29; // x0
  System_String_array **v30; // x2
  System_String_array **v31; // x3
  System_Boolean_array **v32; // x4
  System_Int32_array **v33; // x5
  System_Int32_array *v34; // x6
  System_Int32_array *v35; // x7
  System_String_array **v36; // x2
  System_String_array **v37; // x3
  System_Boolean_array **v38; // x4
  System_Int32_array **v39; // x5
  System_Int32_array *v40; // x6
  System_Int32_array *v41; // x7
  System_Int32_array **v42; // x0
  System_String_array **v43; // x2
  System_String_array **v44; // x3
  System_Boolean_array **v45; // x4
  System_Int32_array **v46; // x5
  System_Int32_array *v47; // x6
  System_Int32_array *v48; // x7
  System_Int32_array **v49; // x0
  System_String_array **v50; // x2
  System_String_array **v51; // x3
  System_Boolean_array **v52; // x4
  System_Int32_array **v53; // x5
  System_Int32_array *v54; // x6
  System_Int32_array *v55; // x7
  System_Int32_array **v56; // x0
  System_String_array **v57; // x2
  System_String_array **v58; // x3
  System_Boolean_array **v59; // x4
  System_Int32_array **v60; // x5
  System_Int32_array *v61; // x6
  System_Int32_array *v62; // x7
  struct BattleData_o *v63; // x8
  int32_t uniqueId; // w19
  int32_t v65; // w21
  bool IsOpponentPTUniqueID; // w0
  __int64 v68; // x0
  int32_t bId; // [xsp+Ch] [xbp-54h]

  if ( (byte_4353880 & 1) == 0 )
  {
    sub_B70694(&BattleActionData_TypeInfo);
    sub_B70694(&BattleActionData_DamageData_TypeInfo);
    sub_B70694(&int___TypeInfo);
    sub_B70694(&BattleBuffData_ShowBuffData___TypeInfo);
    byte_4353880 = 1;
  }
  v11 = (BattleActionData_o *)sub_B70764(BattleActionData_TypeInfo);
  BattleActionData___ctor(v11, 0LL);
  data = (__int64)this->fields.data;
  if ( !data )
    goto LABEL_27;
  bId = playerId;
  data = (__int64)BattleData__getServantData((BattleData_o *)data, playerId, 0LL);
  if ( !this->fields.data )
    goto LABEL_27;
  v14 = (BattleServantData_o *)data;
  ServantData = BattleData__getServantData(this->fields.data, targetId, 0LL);
  v16 = sub_B70764(BattleActionData_DamageData_TypeInfo);
  BattleActionData_DamageData___ctor((BattleActionData_DamageData_o *)v16, 0LL);
  if ( !v14 )
    goto LABEL_27;
  data = BattleServantData__getAccumulationDamage(v14, 0LL);
  if ( !baseVals )
    goto LABEL_27;
  v17 = DataVals__GetValue(baseVals, 0LL) * (__int64)(int)data;
  data = (__int64)this->fields.data;
  v18 = (double)v17 / 1000.0;
  if ( v18 == INFINITY )
    v18 = -v18;
  if ( !data )
    goto LABEL_27;
  v19 = (int)v18;
  data = BattleData__IsDeadOkTurn((BattleData_o *)data, targetId, 0LL);
  if ( (data & 1) == 0 )
  {
    if ( !ServantData )
      goto LABEL_27;
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
    goto LABEL_27;
  *(_DWORD *)(v16 + 28) = targetId;
  *(_DWORD *)(v16 + 16) = funcIndex;
  *(_WORD *)(v16 + 32) = 0;
  *(_BYTE *)(v16 + 34) = 0;
  *(_DWORD *)(v16 + 36) = 0;
  *(_BYTE *)(v16 + 40) = 0;
  v22 = (System_Int32_array **)sub_B706AC(BattleBuffData_ShowBuffData___TypeInfo, 0LL);
  *(_QWORD *)(v16 + 64) = v22;
  sub_B70630((BattleServantConfConponent_o *)(v16 + 64), v22, v23, v24, v25, v26, v27, v28);
  v29 = (System_Int32_array **)sub_B706AC(BattleBuffData_ShowBuffData___TypeInfo, 0LL);
  *(_QWORD *)(v16 + 72) = v29;
  sub_B70630((BattleServantConfConponent_o *)(v16 + 72), v29, v30, v31, v32, v33, v34, v35);
  data = sub_B706AC(int___TypeInfo, 1LL);
  if ( !data )
    goto LABEL_27;
  if ( !*(_DWORD *)(data + 24) )
  {
    v68 = sub_B70798(data);
    sub_B70738(v68, 0LL);
  }
  *(_DWORD *)(data + 32) = v19;
  *(_QWORD *)(v16 + 96) = data;
  sub_B70630((BattleServantConfConponent_o *)(v16 + 96), (System_Int32_array **)data, v36, v37, v38, v39, v40, v41);
  v42 = (System_Int32_array **)sub_B706AC(int___TypeInfo, 0LL);
  *(_QWORD *)(v16 + 104) = v42;
  sub_B70630((BattleServantConfConponent_o *)(v16 + 104), v42, v43, v44, v45, v46, v47, v48);
  v49 = (System_Int32_array **)sub_B706AC(int___TypeInfo, 0LL);
  *(_QWORD *)(v16 + 112) = v49;
  sub_B70630((BattleServantConfConponent_o *)(v16 + 112), v49, v50, v51, v52, v53, v54, v55);
  v56 = (System_Int32_array **)sub_B706AC(int___TypeInfo, 0LL);
  *(_QWORD *)(v16 + 120) = v56;
  sub_B70630((BattleServantConfConponent_o *)(v16 + 120), v56, v57, v58, v59, v60, v61, v62);
  if ( !ServantData )
    goto LABEL_27;
  BattleServantData__provisionalDamage(ServantData, v19, 0LL);
  BattleServantData__ResultDamage(ServantData, v19, v14, 0LL, 0LL, 0, 0LL);
  data = BattleServantData__isLogicResultAlive(ServantData, 0LL);
  if ( (data & 1) == 0 )
  {
    v63 = this->fields.data;
    if ( !v63 )
      goto LABEL_27;
    ServantData->fields.deadTurn = v63->fields.typeTurn;
  }
  BattleActionData_DamageData__addAttackSideEffectAction((BattleActionData_DamageData_o *)v16, 80, 0LL);
  if ( !v11
    || (BattleActionData__setDamageData(v11, (BattleActionData_DamageData_o *)v16, baseVals, 0, 0, 0LL),
        (data = (__int64)this->fields.data) == 0) )
  {
LABEL_27:
    sub_B7076C(data, v12);
  }
  uniqueId = v14->fields.uniqueId;
  v65 = *(_DWORD *)(data + 188);
  IsOpponentPTUniqueID = BattleData__IsOpponentPTUniqueID((BattleData_o *)data, targetId, bId, 0LL);
  BattleServantData__setActionHistory(ServantData, uniqueId, 1, v65, IsOpponentPTUniqueID, 0LL);
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
  struct BattleLogicFunction___c_StaticFields *static_fields; // x8
  System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *_9__84_0; // x22
  Il2CppObject *v15; // x24
  struct BattleLogicFunction___c_StaticFields *v16; // x0
  System_String_array **v17; // x2
  System_String_array **v18; // x3
  System_Boolean_array **v19; // x4
  System_Int32_array **v20; // x5
  System_Int32_array *v21; // x6
  System_Int32_array *v22; // x7
  BattleActionData_o *v23; // x21
  int32_t Param; // w24
  int32_t v25; // w22
  BattleServantData_o *EnemyServantData; // x24
  BattleServantData_o *EnemyServantDataFromNpcId; // x22
  struct BattleData_o *v28; // x8
  int v29; // w9
  struct System_Int32_array *e_entryid; // x10
  int max_length; // w10
  struct System_Int32_array *v32; // x10
  BattleActionData_o *result; // x0
  int32_t DeckIndex; // w23
  struct BattleData_o *v35; // x8
  struct System_Int32_array *v36; // x9
  int32_t v37; // w10
  int32_t v38; // w25
  int32_t *p_deckIndex; // x26
  unsigned __int64 v40; // x10
  unsigned __int64 v41; // x11
  struct BattleData_o *v42; // x8
  unsigned __int64 v43; // x9
  struct System_Int32_array *v44; // x10
  unsigned __int64 v45; // x11
  char *v46; // x10
  __int64 v47; // x0

  if ( (byte_435387C & 1) == 0 )
  {
    sub_B70694(&BattleActionData_TypeInfo);
    sub_B70694(&Method_System_Linq_Enumerable_Count_BattleServantData____69270408);
    sub_B70694(&Method_System_Func_BattleServantData__bool___ctor__);
    sub_B70694(&System_Func_BattleServantData__bool__TypeInfo);
    sub_B70694(&Method_BattleLogicFunction___c__functionReplaceEnemyMember_b__84_0__);
    sub_B70694(&BattleLogicFunction___c_TypeInfo);
    byte_435387C = 1;
  }
  data = this->fields.data;
  if ( !data )
    goto LABEL_68;
  data = (BattleData_o *)BattleData__getAliveFieldEnemyServantIDList(data, 0, 0LL);
  v9 = this->fields.data;
  if ( !v9 )
    goto LABEL_68;
  v10 = data;
  enemy_datalist = (System_Collections_Generic_IEnumerable_TSource__o *)v9->fields.enemy_datalist;
  v12 = BattleLogicFunction___c_TypeInfo;
  if ( (BYTE3(BattleLogicFunction___c_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !BattleLogicFunction___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BattleLogicFunction___c_TypeInfo);
    v12 = BattleLogicFunction___c_TypeInfo;
  }
  static_fields = v12->static_fields;
  _9__84_0 = (System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *)static_fields->__9__84_0;
  if ( !_9__84_0 )
  {
    if ( (BYTE3(v12->vtable._0_Equals.methodPtr) & 4) != 0 && !v12->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v12);
      static_fields = BattleLogicFunction___c_TypeInfo->static_fields;
    }
    v15 = (Il2CppObject *)static_fields->__9;
    _9__84_0 = (System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *)sub_B70764(System_Func_BattleServantData__bool__TypeInfo);
    System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool____ctor(
      _9__84_0,
      v15,
      Method_BattleLogicFunction___c__functionReplaceEnemyMember_b__84_0__,
      (const MethodInfo_29AC578 *)Method_System_Func_BattleServantData__bool___ctor__);
    v16 = BattleLogicFunction___c_TypeInfo->static_fields;
    v16->__9__84_0 = (struct System_Func_BattleServantData__bool__o *)_9__84_0;
    sub_B70630(
      (BattleServantConfConponent_o *)&v16->__9__84_0,
      (System_Int32_array **)_9__84_0,
      v17,
      v18,
      v19,
      v20,
      v21,
      v22);
  }
  data = (BattleData_o *)System_Linq_Enumerable__Count_WarBoardAIRoute_RouteData_(
                           enemy_datalist,
                           (System_Func_TSource__bool__o *)_9__84_0,
                           (const MethodInfo_1CB93A0 *)Method_System_Linq_Enumerable_Count_BattleServantData____69270408);
  if ( (int)data < 4 )
    return 0LL;
  if ( !v10 )
    goto LABEL_68;
  if ( !v10->fields.rootfsm )
    return 0LL;
  v23 = (BattleActionData_o *)sub_B70764(BattleActionData_TypeInfo);
  BattleActionData___ctor(v23, 0LL);
  if ( !baseVals )
    goto LABEL_68;
  Param = DataVals__GetParam(baseVals, 47, 0, 0LL);
  data = (BattleData_o *)DataVals__GetParam(baseVals, 48, 0, 0LL);
  if ( !this->fields.data )
    goto LABEL_68;
  v25 = (int)data;
  data = (BattleData_o *)BattleData__getEnemyServantDataFromNpcId(this->fields.data, Param, 0LL);
  if ( !this->fields.data )
    goto LABEL_68;
  EnemyServantData = (BattleServantData_o *)data;
  EnemyServantDataFromNpcId = BattleData__getEnemyServantDataFromNpcId(this->fields.data, v25, 0LL);
  if ( !EnemyServantData )
  {
    data = (BattleData_o *)DataVals__GetParam(baseVals, 49, 0, 0LL);
    v28 = this->fields.data;
    v29 = (_DWORD)data - 1;
    if ( (int)data - 1 < 0 )
    {
      if ( !v28 )
        goto LABEL_68;
      v29 = 0;
    }
    else
    {
      if ( !v28 )
        goto LABEL_68;
      e_entryid = v28->fields.e_entryid;
      if ( !e_entryid )
        goto LABEL_68;
      max_length = e_entryid->max_length;
      if ( v29 >= max_length )
        v29 = max_length - 1;
    }
    v32 = v28->fields.e_entryid;
    if ( !v32 )
      goto LABEL_68;
    if ( v29 >= v32->max_length )
      goto LABEL_69;
    data = (BattleData_o *)BattleData__getEnemyServantData(this->fields.data, v32->m_Items[v29 + 1], 0LL);
    if ( !data )
      goto LABEL_68;
    EnemyServantData = (BattleServantData_o *)data;
    data = (BattleData_o *)BattleServantData__isDead((BattleServantData_o *)data, 0LL);
    if ( ((unsigned __int8)data & 1) != 0 )
    {
      if ( !LODWORD(v10->fields.rootfsm) )
        goto LABEL_69;
      data = this->fields.data;
      if ( !data )
        goto LABEL_68;
      EnemyServantData = BattleData__getEnemyServantData(data, (int32_t)v10->fields.fsm, 0LL);
    }
  }
  if ( !EnemyServantDataFromNpcId )
  {
    data = this->fields.data;
    if ( !data )
      goto LABEL_68;
    EnemyServantDataFromNpcId = BattleData__getEnemySubBackServantData(data, 0LL);
  }
  result = 0LL;
  if ( EnemyServantData && EnemyServantDataFromNpcId )
  {
    if ( !EnemyServantData->fields.isEntry || EnemyServantDataFromNpcId->fields.isEntry )
      return 0LL;
    DeckIndex = BattleServantData__getDeckIndex(EnemyServantData, 0LL);
    data = (BattleData_o *)BattleServantData__getDeckIndex(EnemyServantDataFromNpcId, 0LL);
    v35 = this->fields.data;
    if ( v35 )
    {
      v36 = v35->fields.e_entryid;
      if ( v36 )
      {
        v37 = v36->max_length;
        v38 = (int)data;
        if ( DeckIndex >= v37 )
          goto LABEL_49;
        if ( DeckIndex < (unsigned int)v37 )
        {
          if ( v36->m_Items[DeckIndex + 1] == EnemyServantData->fields.uniqueId )
          {
            p_deckIndex = &EnemyServantData->fields.deckIndex;
            goto LABEL_57;
          }
LABEL_49:
          v40 = 0LL;
          p_deckIndex = &EnemyServantData->fields.deckIndex;
          while ( 1 )
          {
            v41 = v36->max_length;
            if ( (__int64)v40 >= (int)v41 )
              break;
            if ( v40 >= v41 )
              goto LABEL_69;
            if ( v36->m_Items[v40 + 1] != EnemyServantData->fields.uniqueId
              || (*p_deckIndex = v40, (v35 = this->fields.data) != 0LL) )
            {
              v36 = v35->fields.e_entryid;
              ++v40;
              if ( v36 )
                continue;
            }
            goto LABEL_68;
          }
          data = (BattleData_o *)BattleServantData__getDeckIndex(EnemyServantData, 0LL);
          DeckIndex = (int)data;
LABEL_57:
          *p_deckIndex = v38;
          EnemyServantDataFromNpcId->fields.deckIndex = DeckIndex;
          v42 = this->fields.data;
          if ( v42 )
          {
            v43 = 0LL;
            while ( 1 )
            {
              v44 = v42->fields.e_entryid;
              if ( !v44 )
                goto LABEL_68;
              v45 = v44->max_length;
              if ( (__int64)v43 >= (int)v45 )
                break;
              if ( v43 >= v45 )
                goto LABEL_69;
              v46 = (char *)v44 + 4 * v43;
              if ( *((_DWORD *)v46 + 8) == EnemyServantData->fields.uniqueId )
              {
                *((_DWORD *)v46 + 8) = EnemyServantDataFromNpcId->fields.uniqueId;
                v42 = this->fields.data;
              }
              ++v43;
              if ( !v42 )
                goto LABEL_68;
            }
            if ( v23 )
            {
              BattleActionData__setReplaceMember(
                v23,
                DeckIndex,
                EnemyServantDataFromNpcId->fields.uniqueId,
                EnemyServantData->fields.uniqueId,
                funcIndex,
                0LL);
              return v23;
            }
          }
          goto LABEL_68;
        }
LABEL_69:
        v47 = sub_B70798(data);
        sub_B70738(v47, 0LL);
      }
    }
LABEL_68:
    sub_B7076C(data, funcEnt);
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
  int32_t max_length; // w10
  int32_t v20; // w25
  int32_t *p_deckIndex; // x26
  unsigned __int64 v22; // x10
  unsigned __int64 v23; // x11
  struct BattleData_o *v24; // x8
  unsigned __int64 v25; // x9
  struct System_Int32_array *v26; // x10
  unsigned __int64 v27; // x11
  char *v28; // x10
  __int64 v30; // x0

  if ( (byte_435387B & 1) == 0 )
  {
    sub_B70694(&BattleActionData_TypeInfo);
    byte_435387B = 1;
  }
  v11 = (BattleActionData_o *)sub_B70764(BattleActionData_TypeInfo);
  BattleActionData___ctor(v11, 0LL);
  data = this->fields.data;
  if ( !data )
    goto LABEL_34;
  data = (BattleData_o *)BattleData__getServantData(data, targetId, 0LL);
  if ( !this->fields.data )
    goto LABEL_34;
  v14 = (BattleServantData_o *)data;
  data = (BattleData_o *)BattleData__getServantData(this->fields.data, subTargetId, 0LL);
  if ( !v14 )
    goto LABEL_34;
  v15 = (BattleServantData_o *)data;
  data = (BattleData_o *)BattleServantData__getDeckIndex(v14, 0LL);
  if ( !v15 )
    goto LABEL_34;
  v16 = (int)data;
  data = (BattleData_o *)BattleServantData__getDeckIndex(v15, 0LL);
  v17 = this->fields.data;
  if ( !v17 )
    goto LABEL_34;
  p_entryid = v17->fields.p_entryid;
  if ( !p_entryid )
    goto LABEL_34;
  max_length = p_entryid->max_length;
  v20 = (int)data;
  if ( v16 >= max_length )
    goto LABEL_13;
  if ( v16 >= (unsigned int)max_length )
  {
LABEL_35:
    v30 = sub_B70798(data);
    sub_B70738(v30, 0LL);
  }
  if ( p_entryid->m_Items[v16 + 1] == v14->fields.uniqueId )
  {
    p_deckIndex = &v14->fields.deckIndex;
  }
  else
  {
LABEL_13:
    v22 = 0LL;
    p_deckIndex = &v14->fields.deckIndex;
    while ( 1 )
    {
      v23 = p_entryid->max_length;
      if ( (__int64)v22 >= (int)v23 )
        break;
      if ( v22 >= v23 )
        goto LABEL_35;
      if ( p_entryid->m_Items[v22 + 1] != v14->fields.uniqueId || (*p_deckIndex = v22, (v17 = this->fields.data) != 0LL) )
      {
        p_entryid = v17->fields.p_entryid;
        ++v22;
        if ( p_entryid )
          continue;
      }
      goto LABEL_34;
    }
    data = (BattleData_o *)BattleServantData__getDeckIndex(v14, 0LL);
    v16 = (int)data;
  }
  *p_deckIndex = v20;
  v15->fields.deckIndex = v16;
  v24 = this->fields.data;
  if ( !v24 )
    goto LABEL_34;
  v25 = 0LL;
  while ( 1 )
  {
    v26 = v24->fields.p_entryid;
    if ( !v26 )
      goto LABEL_34;
    v27 = v26->max_length;
    if ( (__int64)v25 >= (int)v27 )
      break;
    if ( v25 >= v27 )
      goto LABEL_35;
    v28 = (char *)v26 + 4 * v25;
    if ( *((_DWORD *)v28 + 8) == v14->fields.uniqueId )
    {
      *((_DWORD *)v28 + 8) = v15->fields.uniqueId;
      v24 = this->fields.data;
    }
    ++v25;
    if ( !v24 )
      goto LABEL_34;
  }
  if ( !v11
    || (BattleActionData__setReplaceMember(v11, v16, v15->fields.uniqueId, v14->fields.uniqueId, funcIndex, 0LL),
        v11->fields.redrawCommandCard = 1,
        (data = this->fields.data) == 0LL)
    || (BattleData__SubBuffFromPT_19008056(data, v15, 0LL), (data = this->fields.data) == 0LL) )
  {
LABEL_34:
    sub_B7076C(data, v12);
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

  if ( (byte_435387A & 1) == 0 )
  {
    sub_B70694(&BattleActionData_TypeInfo);
    byte_435387A = 1;
  }
  v7 = (BattleActionData_o *)sub_B70764(BattleActionData_TypeInfo);
  BattleActionData___ctor(v7, 0LL);
  data = this->fields.data;
  if ( !data
    || (BattleData__SubBuffFromPT_19008056(data, 0LL, 0LL), (data = this->fields.data) == 0LL)
    || (BattleData__shuffleCommand(data, 0LL), (data = (BattleData_o *)this->fields.logic) == 0LL)
    || (BattleLogic__drawCommand((BattleLogic_o *)data, 0LL), (data = (BattleData_o *)this->fields.logic) == 0LL)
    || (BattleLogic__setDrawCard((BattleLogic_o *)data, 0LL), !v7) )
  {
    sub_B7076C(data, v8);
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
  System_String_array **v24; // x2
  System_String_array **v25; // x3
  System_Boolean_array **v26; // x4
  System_Int32_array **v27; // x5
  System_Int32_array *v28; // x6
  System_Int32_array *v29; // x7
  unsigned int uniqueId; // w8
  System_Int32_array **popupText; // x1
  System_Int32_array **effectList; // x1
  System_String_array **v33; // x2
  System_String_array **v34; // x3
  System_Boolean_array **v35; // x4
  System_Int32_array **v36; // x5
  System_Int32_array *v37; // x6
  System_Int32_array *v38; // x7

  if ( (byte_4353886 & 1) == 0 )
  {
    sub_B70694(&BattleActionData_TypeInfo);
    sub_B70694(&BattleActionData_BuffData_TypeInfo);
    byte_4353886 = 1;
  }
  v13 = (BattleActionData_o *)sub_B70764(BattleActionData_TypeInfo);
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
  v23 = sub_B70764(BattleActionData_BuffData_TypeInfo);
  BattleActionData_BuffData___ctor((BattleActionData_BuffData_o *)v23, 0LL);
  if ( !v23 )
    goto LABEL_22;
  uniqueId = v16->fields.uniqueId;
  *(_DWORD *)(v23 + 16) = 0;
  *(_QWORD *)(v23 + 40) = uniqueId;
  if ( !funcEnt )
    goto LABEL_22;
  popupText = (System_Int32_array **)funcEnt->fields.popupText;
  *(_QWORD *)(v23 + 56) = popupText;
  sub_B70630((BattleServantConfConponent_o *)(v23 + 56), popupText, v24, v25, v26, v27, v28, v29);
  *(_DWORD *)(v23 + 68) = funcEnt->fields.popupTextColor;
  *(_DWORD *)(v23 + 64) = funcEnt->fields.popupIconId;
  effectList = (System_Int32_array **)funcEnt->fields.effectList;
  *(_QWORD *)(v23 + 72) = effectList;
  sub_B70630((BattleServantConfConponent_o *)(v23 + 72), effectList, v33, v34, v35, v36, v37, v38);
  *(_DWORD *)(v23 + 28) = 2;
  if ( !v13 )
LABEL_22:
    sub_B7076C(data, v14);
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
  __int64 v13; // x25
  __int64 v14; // x25
  DataManager_o *MasterData_WarQuestSelectionMaster; // x0
  SkillLvMaster_o *v16; // x25
  struct BattleSkillInfoData_o *skillInfo; // x8
  SkillLvEntity_o *v18; // x26
  BattleActionData_o *v19; // x25
  BattleActorControl_o *PartsActor; // x27
  BattleServantData_o *battleSvtData; // x0
  int32_t targetId; // w1
  const MethodInfo *v23; // x6
  BattleActionData_o *RevivalHealData; // x0
  BattleActorControl_o *v25; // x26
  BattleServantData_o *v26; // x0
  BattleActionData_o *v27; // x0
  BattleActionData_o *v28; // x1
  BattleActionData_o *v29; // x27
  int32_t v30; // w1
  const MethodInfo *v31; // x6
  BattleActionData_o *v32; // x0

  if ( (byte_4353892 & 1) == 0 )
  {
    sub_B70694(&BattleActionData_TypeInfo);
    sub_B70694(&Method_DataManager_GetMasterData_SkillLvMaster___);
    sub_B70694(&UnityEngine_Object_TypeInfo);
    sub_B70694(&Method_SingletonMonoBehaviour_DataManager__getInstance__);
    byte_4353892 = 1;
  }
  v13 = *((_QWORD *)Method_SingletonMonoBehaviour_DataManager__getInstance__ + 3);
  if ( (*(_BYTE *)(v13 + 306) & 1) == 0 )
    sub_B08394(*((_QWORD *)Method_SingletonMonoBehaviour_DataManager__getInstance__ + 3));
  v14 = **(_QWORD **)(v13 + 192);
  if ( (*(_BYTE *)(v14 + 306) & 1) == 0 )
    sub_B08394(v14);
  MasterData_WarQuestSelectionMaster = **(DataManager_o ***)(v14 + 184);
  if ( !MasterData_WarQuestSelectionMaster )
    goto LABEL_42;
  MasterData_WarQuestSelectionMaster = (DataManager_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                          MasterData_WarQuestSelectionMaster,
                                                          (const MethodInfo_1CA35A0 *)Method_DataManager_GetMasterData_SkillLvMaster___);
  if ( !actionData )
    goto LABEL_42;
  v16 = (SkillLvMaster_o *)MasterData_WarQuestSelectionMaster;
  MasterData_WarQuestSelectionMaster = (DataManager_o *)actionData->fields.skillInfo;
  if ( !MasterData_WarQuestSelectionMaster )
    goto LABEL_42;
  MasterData_WarQuestSelectionMaster = (DataManager_o *)((__int64 (__fastcall *)(DataManager_o *, void *))MasterData_WarQuestSelectionMaster->klass[1]._1.namespaze)(
                                                          MasterData_WarQuestSelectionMaster,
                                                          MasterData_WarQuestSelectionMaster->klass[1]._1.byval_arg.data);
  skillInfo = actionData->fields.skillInfo;
  if ( !skillInfo )
    goto LABEL_42;
  if ( !v16 )
    goto LABEL_42;
  MasterData_WarQuestSelectionMaster = (DataManager_o *)SkillLvMaster__GetEntity(
                                                          v16,
                                                          (int32_t)MasterData_WarQuestSelectionMaster,
                                                          skillInfo->fields.skilllv,
                                                          0LL);
  if ( !MasterData_WarQuestSelectionMaster )
    goto LABEL_42;
  v18 = (SkillLvEntity_o *)MasterData_WarQuestSelectionMaster;
  v19 = 0LL;
  if ( SkillLvEntity__IsRevivalUp((SkillLvEntity_o *)MasterData_WarQuestSelectionMaster, 0LL) )
  {
    MasterData_WarQuestSelectionMaster = (DataManager_o *)this->fields.data;
    if ( !MasterData_WarQuestSelectionMaster )
      goto LABEL_42;
    PartsActor = BattleData__GetPartsActor((BattleData_o *)MasterData_WarQuestSelectionMaster, 0, 0LL);
    if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    }
    MasterData_WarQuestSelectionMaster = (DataManager_o *)UnityEngine_Object__op_Inequality(
                                                            (UnityEngine_Object_o *)PartsActor,
                                                            0LL,
                                                            0LL);
    v19 = 0LL;
    if ( ((unsigned __int8)MasterData_WarQuestSelectionMaster & 1) != 0 )
    {
      if ( !PartsActor )
        goto LABEL_42;
      battleSvtData = PartsActor->fields.battleSvtData;
      if ( battleSvtData )
      {
        v19 = 0LL;
        if ( !BattleServantData__isAlive(battleSvtData, 0, 0LL) )
        {
          v19 = (BattleActionData_o *)sub_B70764(BattleActionData_TypeInfo);
          BattleActionData___ctor(v19, 0LL);
          if ( !v19 )
            goto LABEL_42;
          v19->fields.actorId = actionData->fields.actorId;
          v19->fields.targetId = PartsActor->fields.uniqueID;
          BattleActionData__setStateActors(v19, 0LL);
          targetId = v19->fields.targetId;
          v19->fields.isRevival = 1;
          v19->fields.motionId = 2201;
          RevivalHealData = BattleLogicFunction__createRevivalHealData(
                              this,
                              targetId,
                              funcEnt,
                              baseVals,
                              funcIndex,
                              isCommandSideEffect,
                              v23);
          BattleActionData__addAction(v19, RevivalHealData, 0LL);
        }
      }
      else
      {
        v19 = 0LL;
      }
    }
  }
  if ( !SkillLvEntity__IsRevivalUnder(v18, 0LL) )
    goto LABEL_34;
  MasterData_WarQuestSelectionMaster = (DataManager_o *)this->fields.data;
  if ( !MasterData_WarQuestSelectionMaster )
LABEL_42:
    sub_B7076C(MasterData_WarQuestSelectionMaster, actionData);
  v25 = BattleData__GetPartsActor((BattleData_o *)MasterData_WarQuestSelectionMaster, 2, 0LL);
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  MasterData_WarQuestSelectionMaster = (DataManager_o *)UnityEngine_Object__op_Inequality(
                                                          (UnityEngine_Object_o *)v25,
                                                          0LL,
                                                          0LL);
  if ( ((unsigned __int8)MasterData_WarQuestSelectionMaster & 1) != 0 )
  {
    if ( v25 )
    {
      v26 = v25->fields.battleSvtData;
      if ( !v26 || BattleServantData__isAlive(v26, 0, 0LL) )
        goto LABEL_34;
      v29 = (BattleActionData_o *)sub_B70764(BattleActionData_TypeInfo);
      BattleActionData___ctor(v29, 0LL);
      if ( v29 )
      {
        v29->fields.actorId = actionData->fields.actorId;
        v29->fields.targetId = v25->fields.uniqueID;
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
        if ( !v19 )
        {
          v27 = actionData;
          v28 = v29;
          goto LABEL_36;
        }
        BattleActionData__AddAfterActionData(v19, v29, 0, 0LL);
LABEL_35:
        v27 = actionData;
        v28 = v19;
LABEL_36:
        BattleActionData__AddAfterActionData(v27, v28, 0, 0LL);
        return;
      }
    }
    goto LABEL_42;
  }
LABEL_34:
  if ( v19 )
    goto LABEL_35;
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
  System_Int32_array **v12; // x1
  System_String_array **v13; // x2
  System_String_array **v14; // x3
  System_Boolean_array **v15; // x4
  System_Int32_array **v16; // x5
  System_Int32_array *v17; // x6
  System_Int32_array *v18; // x7
  BattleData_o *data; // x24
  BattleActionData_SkillShiftServant_o *v20; // x23

  if ( (byte_435388F & 1) == 0 )
  {
    sub_B70694(&BattleActionData_TypeInfo);
    sub_B70694(&BattleActionData_SkillShiftServant_TypeInfo);
    sub_B70694(&StringLiteral_8912/*"MOTION_SHIFT"*/);
    byte_435388F = 1;
  }
  v9 = sub_B70764(BattleActionData_TypeInfo);
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
  v12 = (System_Int32_array **)StringLiteral_8912/*"MOTION_SHIFT"*/;
  *(_QWORD *)(v9 + 64) = StringLiteral_8912/*"MOTION_SHIFT"*/;
  sub_B70630((BattleServantConfConponent_o *)(v9 + 64), v12, v13, v14, v15, v16, v17, v18);
  data = this->fields.data;
  v20 = (BattleActionData_SkillShiftServant_o *)sub_B70764(BattleActionData_SkillShiftServant_TypeInfo);
  BattleActionData_SkillShiftServant___ctor(v20, data, npcId, 0LL);
  if ( !v20 )
LABEL_8:
    sub_B7076C(v10, v11);
  BattleActionData_ShiftServant__setBeforeSvtData((BattleActionData_ShiftServant_o *)v20, targetData, 0LL);
  BattleActionData__setShiftServant((BattleActionData_o *)v9, (BattleActionData_ShiftServant_o *)v20, 0LL);
  BattleActionData__setShiftServant(actionData, (BattleActionData_ShiftServant_o *)v20, 0LL);
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
  int32_t Value; // w22
  int32_t Value2; // w19
  RemovedBuffInfo_o *v22; // x0
  System_String_array **v23; // x2
  System_String_array **v24; // x3
  System_Boolean_array **v25; // x4
  System_Int32_array **v26; // x5
  System_Int32_array *v27; // x6
  System_Int32_array *v28; // x7
  const MethodInfo *v29; // x7
  struct System_Collections_Generic_List_BattleBuffData_BuffData__o *RemovedAllBuffList_k__BackingField; // x22
  BattleActionData_o *v31; // x19
  const MethodInfo *v33; // [xsp+8h] [xbp-68h]
  BattleLogicFunction_ProcListInArgs_o *v34; // [xsp+10h] [xbp-60h]

  if ( (byte_435386D & 1) == 0 )
  {
    sub_B70694(&BattleActionData_TypeInfo);
    sub_B70694(&BattleServantSnapShotOnBuffUpdate_TypeInfo);
    sub_B70694(&Method_System_Collections_Generic_List_BattleBuffData_BuffData__get_Count__);
    byte_435386D = 1;
  }
  data = this->fields.data;
  if ( !data )
    goto LABEL_12;
  ServantData = BattleData__getServantData(data, targetId, 0LL);
  v18 = (BattleServantSnapShotOnBuffUpdate_o *)sub_B70764(BattleServantSnapShotOnBuffUpdate_TypeInfo);
  BattleServantSnapShotOnBuffUpdate___ctor(v18, ServantData, 0LL);
  if ( !funcEnt )
    goto LABEL_12;
  v34 = args;
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
        sub_B70630(
          (BattleServantConfConponent_o *)subBuffInfo,
          (System_Int32_array **)v22,
          v23,
          v24,
          v25,
          v26,
          v27,
          v28),
        !*subBuffInfo)
    || (RemovedAllBuffList_k__BackingField = (*subBuffInfo)->fields._RemovedAllBuffList_k__BackingField) == 0LL )
  {
LABEL_12:
    sub_B7076C(data, *(_QWORD *)&targetId);
  }
  if ( RemovedAllBuffList_k__BackingField->fields._size < 1 )
    return BattleLogicFunction__getNoEffectObject(this, targetId, index, baseVals, isCommandSideEffect, 0LL, 0LL, v29);
  v31 = (BattleActionData_o *)sub_B70764(BattleActionData_TypeInfo);
  BattleActionData___ctor(v31, 0LL);
  BattleLogicFunction__ApplySubBuffChanges(
    this,
    v31,
    RemovedAllBuffList_k__BackingField,
    targetId,
    v18,
    baseVals,
    index,
    isCommandSideEffect,
    v34,
    v33);
  return v31;
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
  BattleLogicFunction___c__DisplayClass86_0_o *v11; // x19
  BattleData_o *data; // x0
  __int64 v13; // x1
  BattleActionData_o *v14; // x24
  BattleServantData_o *v15; // x20
  int32_t Param; // w26
  int32_t v17; // w28
  __int64 v18; // x27
  BattleServantData_array *FieldAliveLogicServantArray; // x25
  BattleLogicFunction___c_c *v20; // x8
  struct BattleLogicFunction___c_StaticFields *static_fields; // x9
  System_Func_WarBoardManager_WarBoardOnboardSkillTarget__WarBoardPieceData__o *_9__86_0; // x19
  Il2CppObject *v23; // x20
  struct BattleLogicFunction___c_StaticFields *v24; // x0
  System_String_array **v25; // x2
  System_String_array **v26; // x3
  System_Boolean_array **v27; // x4
  System_Int32_array **v28; // x5
  System_Int32_array *v29; // x6
  System_Int32_array *v30; // x7
  BattleLogicFunctionUtilities_FunctionProgressCache_o *v31; // x20
  BattleLogicFunctionUtilities_FunctionProgressCache_SvtCache_o *ElemByUniqueId; // x25
  BattleLogicSkill_SkillExecArgs_o *v33; // x19
  struct BattleServantSnapShot_o *Before_k__BackingField; // x8
  System_Int32_array **After_k__BackingField; // x1
  System_String_array **v36; // x2
  System_String_array **v37; // x3
  System_Boolean_array **v38; // x4
  System_Int32_array **v39; // x5
  System_Int32_array *v40; // x6
  System_Int32_array *v41; // x7
  struct BattleServantSnapShot_o *v42; // x8
  __int64 v43; // x11
  BattleServantSnapShotShiftServant_o *v44; // x1
  struct BattleLogicFunctionUtilities_FunctionProgressCache_SvtCache_array *SvtCacheArray_k__BackingField; // x23
  int max_length; // w8
  unsigned int v47; // w25
  BattleActionData_o *v48; // x21
  BattleLogicFunctionUtilities_FunctionProgressCache_SvtCache_o *v49; // x24
  struct BattleServantData_o *SvtData_k__BackingField; // x8
  int32_t uniqueId; // w19
  BattleActionData_BuffData_o *v52; // x20
  BattleServantSnapShot_o *v53; // x26
  BattleServantSnapShot_o *v54; // x27
  BattleActionEffect_AddSubChangeMaxHpBuff_o *v55; // x28
  struct BattleServantData_o *v56; // x8
  System_Collections_Generic_IEnumerable_TSource__o *buffdatalist; // x19
  System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *v58; // x20
  struct BattleServantSnapShot_o *v59; // x8
  int32_t nexttpturn; // w1
  struct BattleData_o *v61; // x8
  __int64 v63; // x0
  BattleLogicFunctionUtilities_FunctionProgressCache_SvtCache_o *v64; // [xsp+0h] [xbp-80h]
  BattleLogicFunction_ProcListInArgs_o *v65; // [xsp+8h] [xbp-78h]
  BattleServantData_o *v66; // [xsp+18h] [xbp-68h]
  BattleLogicFunction___c__DisplayClass86_0_o *v67; // [xsp+20h] [xbp-60h]

  if ( (byte_435387E & 1) == 0 )
  {
    sub_B70694(&BattleActionEffect_AddSubChangeMaxHpBuff_TypeInfo);
    sub_B70694(&BattleActionData_TypeInfo);
    sub_B70694(&BattleServantSnapShotShiftServant_TypeInfo);
    sub_B70694(&BattleActionData_BuffData_TypeInfo);
    sub_B70694(&Method_System_Linq_Enumerable_FirstOrDefault_BattleActionData_BuffData___);
    sub_B70694(&Method_System_Func_BattleActionData_BuffData__bool___ctor__);
    sub_B70694(&Method_System_Func_BattleServantData__BattleServantSnapShot___ctor__);
    sub_B70694(&System_Func_BattleServantData__BattleServantSnapShot__TypeInfo);
    sub_B70694(&System_Func_BattleActionData_BuffData__bool__TypeInfo);
    sub_B70694(&BattleLogicFunctionUtilities_FunctionProgressCache_TypeInfo);
    sub_B70694(&BattleActionData_ShiftServant_TypeInfo);
    sub_B70694(&BattleLogicSkill_SkillExecArgs_TypeInfo);
    sub_B70694(&Method_BattleLogicFunction___c__functionTransformServant_b__86_0__);
    sub_B70694(&Method_BattleLogicFunction___c__DisplayClass86_0__functionTransformServant_b__1__);
    sub_B70694(&BattleLogicFunction___c__DisplayClass86_0_TypeInfo);
    sub_B70694(&BattleLogicFunction___c_TypeInfo);
    byte_435387E = 1;
  }
  v11 = (BattleLogicFunction___c__DisplayClass86_0_o *)sub_B70764(BattleLogicFunction___c__DisplayClass86_0_TypeInfo);
  BattleLogicFunction___c__DisplayClass86_0___ctor(v11, 0LL);
  if ( !v11 )
    goto LABEL_51;
  v11->fields.targetId = targetId;
  v14 = (BattleActionData_o *)sub_B70764(BattleActionData_TypeInfo);
  BattleActionData___ctor(v14, 0LL);
  data = this->fields.data;
  if ( !data )
    goto LABEL_51;
  data = (BattleData_o *)BattleData__getServantData(data, v11->fields.targetId, 0LL);
  if ( !baeVals )
    goto LABEL_51;
  v15 = (BattleServantData_o *)data;
  Param = DataVals__GetParam(baeVals, 6, 0, 0LL);
  v17 = DataVals__GetParam(baeVals, 76, 0, 0LL);
  data = (BattleData_o *)DataVals__IsCancelTransform(baeVals, 0LL);
  if ( ((unsigned __int8)data & 1) != 0 )
  {
    if ( !v15 )
      goto LABEL_51;
    if ( BattleServantData__get_isTransformed(v15, 0LL) )
      Param = -1;
  }
  v18 = sub_B70764(BattleActionData_ShiftServant_TypeInfo);
  BattleActionData_ShiftServant___ctor((BattleActionData_ShiftServant_o *)v18, funcIndex, 0LL);
  if ( !v18 )
    goto LABEL_51;
  BattleActionData_ShiftServant__setBeforeSvtData((BattleActionData_ShiftServant_o *)v18, v15, 0LL);
  if ( !v14 )
    goto LABEL_51;
  BattleActionData__setShiftServant(v14, (BattleActionData_ShiftServant_o *)v18, 0LL);
  if ( !v15 )
    goto LABEL_51;
  v66 = v15;
  v67 = v11;
  v15->fields.shiftNpcId = -1;
  v15->fields.beforeUserSvtId = -1LL;
  data = this->fields.data;
  if ( !data )
    goto LABEL_51;
  FieldAliveLogicServantArray = BattleData__GetFieldAliveLogicServantArray(data, 3, 0, 0LL);
  v20 = BattleLogicFunction___c_TypeInfo;
  if ( (BYTE3(BattleLogicFunction___c_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !BattleLogicFunction___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BattleLogicFunction___c_TypeInfo);
    v20 = BattleLogicFunction___c_TypeInfo;
  }
  static_fields = v20->static_fields;
  _9__86_0 = (System_Func_WarBoardManager_WarBoardOnboardSkillTarget__WarBoardPieceData__o *)static_fields->__9__86_0;
  if ( !_9__86_0 )
  {
    if ( (BYTE3(v20->vtable._0_Equals.methodPtr) & 4) != 0 && !v20->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v20);
      static_fields = BattleLogicFunction___c_TypeInfo->static_fields;
    }
    v23 = (Il2CppObject *)static_fields->__9;
    _9__86_0 = (System_Func_WarBoardManager_WarBoardOnboardSkillTarget__WarBoardPieceData__o *)sub_B70764(System_Func_BattleServantData__BattleServantSnapShot__TypeInfo);
    System_Func_WarBoardManager_WarBoardOnboardSkillTarget__WarBoardPieceData____ctor(
      _9__86_0,
      v23,
      Method_BattleLogicFunction___c__functionTransformServant_b__86_0__,
      (const MethodInfo_29ADCC4 *)Method_System_Func_BattleServantData__BattleServantSnapShot___ctor__);
    v24 = BattleLogicFunction___c_TypeInfo->static_fields;
    v24->__9__86_0 = (struct System_Func_BattleServantData__BattleServantSnapShot__o *)_9__86_0;
    sub_B70630(
      (BattleServantConfConponent_o *)&v24->__9__86_0,
      (System_Int32_array **)_9__86_0,
      v25,
      v26,
      v27,
      v28,
      v29,
      v30);
  }
  v31 = (BattleLogicFunctionUtilities_FunctionProgressCache_o *)sub_B70764(BattleLogicFunctionUtilities_FunctionProgressCache_TypeInfo);
  BattleLogicFunctionUtilities_FunctionProgressCache___ctor(
    v31,
    FieldAliveLogicServantArray,
    (System_Func_BattleServantData__BattleServantSnapShot__o *)_9__86_0,
    0LL);
  if ( !v31 )
    goto LABEL_51;
  BattleLogicFunctionUtilities_FunctionProgressCache__MakeBeforeSvtCache(v31, 0LL);
  ElemByUniqueId = BattleLogicFunctionUtilities_FunctionProgressCache__GetElemByUniqueId(v31, v67->fields.targetId, 0LL);
  v33 = (BattleLogicSkill_SkillExecArgs_o *)sub_B70764(BattleLogicSkill_SkillExecArgs_TypeInfo);
  BattleLogicSkill_SkillExecArgs___ctor(v33, 0LL);
  BattleServantData__setTransformServant(v66, this->fields.data, Param, v17, 0, v33, 0LL);
  if ( !ElemByUniqueId )
    goto LABEL_51;
  Before_k__BackingField = ElemByUniqueId->fields._Before_k__BackingField;
  if ( !Before_k__BackingField )
    goto LABEL_51;
  BattleServantData__CheckUpdateUpDownOnlyResultHp(v66, Before_k__BackingField->fields._MaxHp_k__BackingField, 1, 0LL);
  BattleLogicFunctionUtilities_FunctionProgressCache__MakeAfterSvtCache(v31, 0LL);
  After_k__BackingField = (System_Int32_array **)ElemByUniqueId->fields._After_k__BackingField;
  *(_QWORD *)(v18 + 72) = After_k__BackingField;
  sub_B70630((BattleServantConfConponent_o *)(v18 + 72), After_k__BackingField, v36, v37, v38, v39, v40, v41);
  v42 = ElemByUniqueId->fields._Before_k__BackingField;
  v65 = procArgs;
  if ( !v42 )
    goto LABEL_27;
  v43 = *(&BattleServantSnapShotShiftServant_TypeInfo->_2.bitflags2 + 1);
  if ( *(&v42->klass->_2.bitflags2 + 1) >= (unsigned int)v43 )
    v44 = (BattleServantSnapShotShiftServant_c *)v42->klass->_2.typeHierarchy[v43 - 1] == BattleServantSnapShotShiftServant_TypeInfo
        ? (BattleServantSnapShotShiftServant_o *)ElemByUniqueId->fields._Before_k__BackingField
        : 0LL;
  else
LABEL_27:
    v44 = 0LL;
  v64 = ElemByUniqueId;
  BattleServantData__ApplyCacheForTransformServant(v66, v44, 0LL);
  SvtCacheArray_k__BackingField = v31->fields._SvtCacheArray_k__BackingField;
  if ( !SvtCacheArray_k__BackingField )
LABEL_51:
    sub_B7076C(data, v13);
  max_length = SvtCacheArray_k__BackingField->max_length;
  if ( max_length >= 1 )
  {
    v47 = 0;
    do
    {
      if ( v47 >= max_length )
      {
        v63 = sub_B70798(data);
        sub_B70738(v63, 0LL);
      }
      v48 = v14;
      v49 = SvtCacheArray_k__BackingField->m_Items[v47];
      if ( !v49 )
        goto LABEL_51;
      SvtData_k__BackingField = v49->fields._SvtData_k__BackingField;
      if ( !SvtData_k__BackingField )
        goto LABEL_51;
      uniqueId = SvtData_k__BackingField->fields.uniqueId;
      v52 = (BattleActionData_BuffData_o *)sub_B70764(BattleActionData_BuffData_TypeInfo);
      BattleActionData_BuffData___ctor(v52, 0LL);
      if ( !v52 )
        goto LABEL_51;
      v52->fields.targetId = uniqueId;
      v52->fields.functionIndex = funcIndex;
      v52->fields.isHideEffect = 1;
      v53 = v49->fields._Before_k__BackingField;
      v54 = v49->fields._After_k__BackingField;
      v55 = (BattleActionEffect_AddSubChangeMaxHpBuff_o *)sub_B70764(BattleActionEffect_AddSubChangeMaxHpBuff_TypeInfo);
      BattleActionEffect_AddSubChangeMaxHpBuff___ctor(v55, uniqueId, v53, v54, 0LL);
      BattleActionData_BuffData__SetActionEffectProc(v52, (BattleActionEffect_Base_o *)v55, 0LL);
      v56 = v49->fields._SvtData_k__BackingField;
      if ( !v56 )
        goto LABEL_51;
      BattleActionData_BuffData__setSaveNp(v52, v56->fields.np, 0LL);
      v14 = v48;
      BattleActionData__setBuffData(v48, v52, 0LL, 0LL);
      max_length = SvtCacheArray_k__BackingField->max_length;
    }
    while ( (int)++v47 < max_length );
  }
  BattleActionData__addReflectLogicResultServantId(v14, v67->fields.targetId, 0LL);
  buffdatalist = (System_Collections_Generic_IEnumerable_TSource__o *)v14->fields.buffdatalist;
  v58 = (System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *)sub_B70764(System_Func_BattleActionData_BuffData__bool__TypeInfo);
  System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool____ctor(
    v58,
    (Il2CppObject *)v67,
    Method_BattleLogicFunction___c__DisplayClass86_0__functionTransformServant_b__1__,
    (const MethodInfo_29AC578 *)Method_System_Func_BattleActionData_BuffData__bool___ctor__);
  data = (BattleData_o *)System_Linq_Enumerable__FirstOrDefault_WarBoardData_SquareRangeSearch_(
                           buffdatalist,
                           (System_Func_TSource__bool__o *)v58,
                           (const MethodInfo_1CBD194 *)Method_System_Linq_Enumerable_FirstOrDefault_BattleActionData_BuffData___);
  if ( !v65 )
    goto LABEL_51;
  if ( v65->fields._IsTreasureDvc_k__BackingField )
  {
    v59 = v64->fields._Before_k__BackingField;
    if ( !v59 )
      goto LABEL_51;
    v66->fields.nexttpturn += v66->fields.maxtpturn - v59->fields._MaxTpTurn_k__BackingField;
    if ( data )
    {
      nexttpturn = 0;
LABEL_47:
      BattleActionData_BuffData__SetSaveTpTurn((BattleActionData_BuffData_o *)data, nexttpturn, 0LL);
    }
  }
  else if ( data )
  {
    nexttpturn = v66->fields.nexttpturn;
    goto LABEL_47;
  }
  v61 = this->fields.data;
  if ( !v61 )
    goto LABEL_51;
  data = (BattleData_o *)v61->fields._FieldEnvData_k__BackingField;
  if ( !data )
    goto LABEL_51;
  BattleFieldEnvironmentData__RemoveBgmNotExistsChangeBgmBuff((BattleFieldEnvironmentData_o *)data, 0LL);
  return v14;
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
  BattleActionData_o *v15; // x23
  __int64 v16; // x1
  __int64 data; // x0
  BattleData_o *v18; // x8
  BattleServantData_o *v19; // x24
  System_Int32_array *FixDamageRates; // x26
  __int64 v21; // x25
  int32_t Param; // w0
  int Random; // w28
  int IsIgnoreShiftSafeDamage; // w26
  struct BattleSkillInfoData_o *skillInfo; // x8
  DataMasterBase_WarMaster__WarEntity__int__o *v26; // x27
  int v27; // w26
  System_String_array **v28; // x2
  System_String_array **v29; // x3
  System_Boolean_array **v30; // x4
  System_Int32_array **v31; // x5
  System_Int32_array *v32; // x6
  System_Int32_array *v33; // x7
  int32_t v34; // w8
  System_Int32_array **v35; // x0
  System_String_array **v36; // x2
  System_String_array **v37; // x3
  System_Boolean_array **v38; // x4
  System_Int32_array **v39; // x5
  System_Int32_array *v40; // x6
  System_Int32_array *v41; // x7
  System_Int32_array **v42; // x0
  System_String_array **v43; // x2
  System_String_array **v44; // x3
  System_Boolean_array **v45; // x4
  System_Int32_array **v46; // x5
  System_Int32_array *v47; // x6
  System_Int32_array *v48; // x7
  System_Int32_array **v49; // x0
  System_String_array **v50; // x2
  System_String_array **v51; // x3
  System_Boolean_array **v52; // x4
  System_Int32_array **v53; // x5
  System_Int32_array *v54; // x6
  System_Int32_array *v55; // x7
  System_Int32_array **v56; // x0
  System_String_array **v57; // x2
  System_String_array **v58; // x3
  System_Boolean_array **v59; // x4
  System_Int32_array **v60; // x5
  System_Int32_array *v61; // x6
  System_Int32_array *v62; // x7
  System_Int32_array **v63; // x0
  System_String_array **v64; // x2
  System_String_array **v65; // x3
  System_Boolean_array **v66; // x4
  System_Int32_array **v67; // x5
  System_Int32_array *v68; // x6
  System_Int32_array *v69; // x7
  System_Int32_array **v70; // x0
  System_String_array **v71; // x2
  System_String_array **v72; // x3
  System_Boolean_array **v73; // x4
  System_Int32_array **v74; // x5
  System_Int32_array *v75; // x6
  System_Int32_array *v76; // x7
  struct BattleData_o *v77; // x8
  int32_t v78; // w21
  bool IsOpponentPTUniqueID; // w0
  bool v81; // [xsp+10h] [xbp-80h]
  int32_t v82; // [xsp+14h] [xbp-7Ch]
  BattleServantData_o *actor; // [xsp+18h] [xbp-78h]
  WarEntity_o *entity; // [xsp+20h] [xbp-70h] BYREF
  bool minimumDamageFlg; // [xsp+28h] [xbp-68h] BYREF
  float damage; // [xsp+2Ch] [xbp-64h] BYREF
  System_Collections_Generic_List_int__o *v87; // [xsp+30h] [xbp-60h] BYREF
  int32_t hitStat; // [xsp+3Ch] [xbp-54h] BYREF

  if ( (byte_4353885 & 1) == 0 )
  {
    sub_B70694(&BattleActionData_TypeInfo);
    sub_B70694(&BattleActionData_DamageValueFuncDamageData_TypeInfo);
    sub_B70694(&Method_DataManager_GetMaster_SkillMaster___);
    sub_B70694(&DataManager_TypeInfo);
    sub_B70694(&Method_DataMasterBase_SkillMaster__SkillEntity__int__TryGetEntity__);
    sub_B70694(&int___TypeInfo);
    sub_B70694(&Method_System_Collections_Generic_List_int__ToArray__);
    sub_B70694(&BattleBuffData_ShowBuffData___TypeInfo);
    byte_4353885 = 1;
  }
  hitStat = 0;
  v87 = 0LL;
  damage = 0.0;
  minimumDamageFlg = 0;
  entity = 0LL;
  v15 = (BattleActionData_o *)sub_B70764(BattleActionData_TypeInfo);
  BattleActionData___ctor(v15, 0LL);
  data = (__int64)this->fields.data;
  if ( !data )
    goto LABEL_46;
  data = (__int64)BattleData__getServantData((BattleData_o *)data, playerId, 0LL);
  v18 = this->fields.data;
  actor = (BattleServantData_o *)data;
  if ( !v18 )
    goto LABEL_46;
  v81 = safe;
  v82 = funcIndex;
  data = (__int64)BattleData__getServantData(v18, targetId, 0LL);
  if ( !baseVals )
    goto LABEL_46;
  v19 = (BattleServantData_o *)data;
  FixDamageRates = DataVals__GetFixDamageRates(baseVals, 0LL);
  v21 = sub_B70764(BattleActionData_DamageValueFuncDamageData_TypeInfo);
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
      goto LABEL_46;
    BattleServantData__CheckNoDamageBuff(
      v19,
      this->fields.data,
      actor,
      0LL,
      (BattleActionData_DamageData_o *)v21,
      mainAction,
      0LL);
    damage = (float)Random;
    minimumDamageFlg = 1;
    BattleServantData__CheckInvincibleAvoidanceBuff(
      v19,
      this->fields.data,
      actor,
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
  IsIgnoreShiftSafeDamage = DataVals__IsIgnoreShiftSafeDamage(baseVals, 0LL);
  if ( mainAction && mainAction->fields.skillInfo )
  {
    if ( (BYTE3(DataManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !DataManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
    data = (__int64)DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_1CA3540 *)Method_DataManager_GetMaster_SkillMaster___);
    skillInfo = mainAction->fields.skillInfo;
    if ( !skillInfo )
      goto LABEL_46;
    v26 = (DataMasterBase_WarMaster__WarEntity__int__o *)data;
    data = ((__int64 (__fastcall *)(struct BattleSkillInfoData_o *, Il2CppMethodPointer))skillInfo->klass->vtable._5_get_skillId.method)(
             skillInfo,
             skillInfo->klass->vtable._6_get_IndividualityArray.methodPtr);
    if ( !v26 )
      goto LABEL_46;
    if ( DataMasterBase_WarMaster__WarEntity__int___TryGetEntity(
           v26,
           &entity,
           data,
           (const MethodInfo_21C049C *)Method_DataMasterBase_SkillMaster__SkillEntity__int__TryGetEntity__) )
    {
      data = (__int64)entity;
      if ( !entity )
        goto LABEL_46;
      IsIgnoreShiftSafeDamage |= SkillEntity__IsCheckUpdateShiftServant((SkillEntity_o *)entity, 0LL);
    }
  }
  data = (__int64)this->fields.data;
  if ( !data )
    goto LABEL_46;
  data = BattleData__IsDeadOkTurn((BattleData_o *)data, targetId, 0LL);
  if ( ((IsIgnoreShiftSafeDamage | (unsigned int)data) & 1) == 0 )
  {
    if ( !v19 )
      goto LABEL_46;
    v27 = ((__int64 (__fastcall *)(BattleServantData_o *, Il2CppMethodPointer))v19->klass->vtable._9_get_hp.method)(
            v19,
            v19->klass->vtable._10_set_hp.methodPtr);
    data = ((__int64 (__fastcall *)(BattleServantData_o *, Il2CppMethodPointer))v19->klass->vtable._11_get_reducedhp.method)(
             v19,
             v19->klass->vtable._12_set_reducedhp.methodPtr);
    if ( v27 - (int)data >= 1 && v27 - (int)data < Random )
      Random = v27 - data - 1;
LABEL_31:
    if ( !v21 )
      goto LABEL_46;
    goto LABEL_32;
  }
  if ( !v81 )
    goto LABEL_31;
  if ( !v19 )
    goto LABEL_46;
  data = ((__int64 (__fastcall *)(BattleServantData_o *, Il2CppMethodPointer))v19->klass->vtable._13_get_resultHp.method)(
           v19,
           v19->klass->vtable._14_set_resultHp.methodPtr);
  if ( (int)data - Random > 0 )
    goto LABEL_31;
  data = ((__int64 (__fastcall *)(BattleServantData_o *, Il2CppMethodPointer))v19->klass->vtable._13_get_resultHp.method)(
           v19,
           v19->klass->vtable._14_set_resultHp.methodPtr);
  Random = data - 1;
  if ( !v21 )
    goto LABEL_46;
LABEL_32:
  *(_DWORD *)(v21 + 28) = targetId;
  *(_DWORD *)(v21 + 16) = v82;
  data = (__int64)baseVals->fields.funcEnt;
  if ( !data )
    goto LABEL_46;
  data = (__int64)FunctionEntity__getEffectList((FunctionEntity_o *)data, 0LL);
  if ( !data )
    goto LABEL_46;
  if ( *(_QWORD *)(data + 24) )
  {
    *(_QWORD *)(v21 + 136) = data;
    sub_B70630((BattleServantConfConponent_o *)(v21 + 136), (System_Int32_array **)data, v28, v29, v30, v31, v32, v33);
  }
  *(_WORD *)(v21 + 32) = 0;
  *(_BYTE *)(v21 + 34) = 0;
  v34 = hitStat;
  *(_BYTE *)(v21 + 40) = 0;
  *(_DWORD *)(v21 + 36) = v34;
  v35 = (System_Int32_array **)sub_B706AC(BattleBuffData_ShowBuffData___TypeInfo, 0LL);
  *(_QWORD *)(v21 + 64) = v35;
  sub_B70630((BattleServantConfConponent_o *)(v21 + 64), v35, v36, v37, v38, v39, v40, v41);
  v42 = (System_Int32_array **)sub_B706AC(BattleBuffData_ShowBuffData___TypeInfo, 0LL);
  *(_QWORD *)(v21 + 72) = v42;
  sub_B70630((BattleServantConfConponent_o *)(v21 + 72), v42, v43, v44, v45, v46, v47, v48);
  (*(void (__fastcall **)(__int64, System_Collections_Generic_List_int__o **, _QWORD, _QWORD, _QWORD))(*(_QWORD *)v21 + 376LL))(
    v21,
    &v87,
    (unsigned int)Random,
    0LL,
    *(_QWORD *)(*(_QWORD *)v21 + 384LL));
  data = (__int64)v87;
  if ( !v87 )
    goto LABEL_46;
  v49 = (System_Int32_array **)System_Collections_Generic_List_int___ToArray(
                                 v87,
                                 (const MethodInfo_30B82E4 *)Method_System_Collections_Generic_List_int__ToArray__);
  *(_QWORD *)(v21 + 96) = v49;
  sub_B70630((BattleServantConfConponent_o *)(v21 + 96), v49, v50, v51, v52, v53, v54, v55);
  v56 = (System_Int32_array **)sub_B706AC(int___TypeInfo, 0LL);
  *(_QWORD *)(v21 + 104) = v56;
  sub_B70630((BattleServantConfConponent_o *)(v21 + 104), v56, v57, v58, v59, v60, v61, v62);
  v63 = (System_Int32_array **)sub_B706AC(int___TypeInfo, 0LL);
  *(_QWORD *)(v21 + 112) = v63;
  sub_B70630((BattleServantConfConponent_o *)(v21 + 112), v63, v64, v65, v66, v67, v68, v69);
  v70 = (System_Int32_array **)sub_B706AC(int___TypeInfo, 0LL);
  *(_QWORD *)(v21 + 120) = v70;
  sub_B70630((BattleServantConfConponent_o *)(v21 + 120), v70, v71, v72, v73, v74, v75, v76);
  if ( !v19 )
    goto LABEL_46;
  BattleServantData__provisionalDamage(v19, Random, 0LL);
  BattleServantData__ResultDamage(v19, Random, actor, 0LL, 0LL, 0, 0LL);
  data = BattleServantData__isLogicResultAlive(v19, 0LL);
  if ( (data & 1) == 0 )
  {
    v77 = this->fields.data;
    if ( !v77 )
      goto LABEL_46;
    v19->fields.deadTurn = v77->fields.typeTurn;
  }
  data = DataVals__IsActAttackFunction(baseVals, 0LL);
  if ( (data & 1) != 0 )
    BattleActionData_DamageData__addAttackSideEffectAction((BattleActionData_DamageData_o *)v21, 80, 0LL);
  if ( !v15
    || (BattleActionData__setDamageData(v15, (BattleActionData_DamageData_o *)v21, baseVals, 0, 0, 0LL),
        (data = (__int64)this->fields.data) == 0) )
  {
LABEL_46:
    sub_B7076C(data, v16);
  }
  v78 = *(_DWORD *)(data + 188);
  IsOpponentPTUniqueID = BattleData__IsOpponentPTUniqueID((BattleData_o *)data, targetId, playerId, 0LL);
  BattleServantData__setActionHistory(v19, playerId, 7, v78, IsOpponentPTUniqueID, 0LL);
  return v15;
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
  BattleActionData_o *v19; // x20
  __int64 v20; // x1
  __int64 data; // x0
  int Random; // w27
  BattleServantData_o *v23; // x24
  int v24; // w19
  int32_t Param; // w0
  _BOOL8 IsDeadOkTurn; // x0
  const MethodInfo *v27; // x6
  int32_t v28; // w25
  BattleActionData_BuffData_o *v29; // x23
  __int64 v30; // x28
  BattleServantData_o *v31; // x19
  System_String_array **v32; // x2
  System_String_array **v33; // x3
  System_Boolean_array **v34; // x4
  System_Int32_array **v35; // x5
  System_Int32_array *v36; // x6
  System_Int32_array *v37; // x7
  struct BattleBuffData_o *buffData; // x8
  _QWORD **v39; // x25
  __int64 v40; // x19
  __int16 v41; // w8
  __int64 v42; // x19
  __int64 v43; // x19
  __int64 v44; // x19
  System_Int32_array ***v45; // x8
  System_Int32_array **v46; // x19
  System_String_array **v47; // x2
  System_String_array **v48; // x3
  System_Boolean_array **v49; // x4
  System_Int32_array **v50; // x5
  System_Int32_array *v51; // x6
  System_Int32_array *v52; // x7
  System_String_array **v53; // x2
  System_String_array **v54; // x3
  System_Boolean_array **v55; // x4
  System_Int32_array **v56; // x5
  System_Int32_array *v57; // x6
  System_Int32_array *v58; // x7
  _QWORD **v59; // x25
  __int64 v60; // x19
  __int16 v61; // w8
  __int64 v62; // x19
  __int64 v63; // x19
  __int64 v64; // x19
  System_Int32_array ***v65; // x8
  System_Int32_array **v66; // x19
  System_String_array **v67; // x2
  System_String_array **v68; // x3
  System_Boolean_array **v69; // x4
  System_Int32_array **v70; // x5
  System_Int32_array *v71; // x6
  System_Int32_array *v72; // x7
  System_String_array **v73; // x2
  System_String_array **v74; // x3
  System_Boolean_array **v75; // x4
  System_Int32_array **v76; // x5
  System_Int32_array *v77; // x6
  System_Int32_array *v78; // x7
  struct BattleBuffData_o *v79; // x8
  BattleServantConfConponent_o *p_invalidLossHpData; // x0
  System_Int32_array **v81; // x1
  bool v82; // w8
  bool v83; // w28
  UnityEngine_Object_o *logic; // x19
  int32_t Wave; // w19
  bool IsOpponentPTUniqueID; // w0
  BattleActionEffect_LossHPFunc_o *v87; // x19
  BattleActionData_BuffData_o *v88; // x0
  struct BattleBuffData_o *v89; // x8
  int32_t v90; // w0
  bool v92; // [xsp+1Ch] [xbp-74h]
  int32_t v93; // [xsp+20h] [xbp-70h]
  int32_t v94; // [xsp+24h] [xbp-6Ch]
  BattleServantData_o *actor; // [xsp+28h] [xbp-68h]
  bool v96; // [xsp+30h] [xbp-60h]
  bool minimumDamageFlg; // [xsp+38h] [xbp-58h] BYREF
  float damage; // [xsp+3Ch] [xbp-54h] BYREF

  if ( (byte_4353876 & 1) == 0 )
  {
    sub_B70694(&Method_System_Array_Empty_int___);
    sub_B70694(&Method_System_Array_Empty_BattleBuffData_ShowBuffData___);
    sub_B70694(&BattleActionData_TypeInfo);
    sub_B70694(&BattleActionData_DamageData_TypeInfo);
    sub_B70694(&BattleActionEffect_LossHPFunc_TypeInfo);
    sub_B70694(&UnityEngine_Object_TypeInfo);
    byte_4353876 = 1;
  }
  damage = 0.0;
  minimumDamageFlg = 0;
  v19 = (BattleActionData_o *)sub_B70764(BattleActionData_TypeInfo);
  BattleActionData___ctor(v19, 0LL);
  data = (__int64)this->fields.data;
  if ( !data )
    goto LABEL_75;
  v96 = safe;
  data = (__int64)BattleData__getServantData((BattleData_o *)data, targetId, 0LL);
  if ( !data )
    goto LABEL_75;
  Random = overwriteLossHp;
  v23 = (BattleServantData_o *)data;
  data = (*(__int64 (__fastcall **)(__int64, _QWORD))(*(_QWORD *)data + 520LL))(
           data,
           *(_QWORD *)(*(_QWORD *)data + 528LL));
  v24 = data;
  if ( overwriteLossHp == -1 )
  {
    if ( !baseVals )
      goto LABEL_75;
    data = DataVals__GetValue(baseVals, 0LL);
    Random = data;
  }
  if ( isRandomDamage )
  {
    if ( !baseVals )
      goto LABEL_75;
    Param = DataVals__GetParam(baseVals, 4, 0, 0LL);
    if ( Param >= 1 )
      Random = BattleRandom__getRandom(Random, Param + 1, 0LL);
  }
  if ( v24 < 1 )
    return 0LL;
  data = (__int64)this->fields.data;
  if ( !data )
    goto LABEL_75;
  IsDeadOkTurn = BattleData__IsDeadOkTurn((BattleData_o *)data, targetId, 0LL);
  v92 = IsDeadOkTurn;
  data = (__int64)BattleLogicFunction__getFunctionObject(
                    (BattleLogicFunction_o *)IsDeadOkTurn,
                    funcEnt,
                    v23->fields.uniqueId,
                    funcIndex,
                    isCommandSideEffect,
                    0LL,
                    v27);
  if ( !this->fields.data )
    goto LABEL_75;
  v28 = playerId;
  v29 = (BattleActionData_BuffData_o *)data;
  data = (__int64)BattleData__getServantData(this->fields.data, playerId, 0LL);
  actor = (BattleServantData_o *)data;
  if ( !baseVals )
    goto LABEL_75;
  v94 = funcIndex;
  v93 = v24;
  if ( DataVals__IsActNoDamageBuff(baseVals, 0LL) )
  {
    v30 = sub_B70764(BattleActionData_DamageData_TypeInfo);
    BattleActionData_DamageData___ctor((BattleActionData_DamageData_o *)v30, 0LL);
    v31 = actor;
    BattleServantData__CheckNoDamageBuff(
      v23,
      this->fields.data,
      actor,
      0LL,
      (BattleActionData_DamageData_o *)v30,
      mainAction,
      0LL);
    damage = (float)Random;
    minimumDamageFlg = 1;
    if ( !v30 )
      goto LABEL_75;
    *(_DWORD *)(v30 + 36) = 0;
    BattleServantData__CheckInvincibleAvoidanceBuff(
      v23,
      this->fields.data,
      actor,
      0LL,
      (BattleActionData_DamageData_o *)v30,
      &damage,
      &minimumDamageFlg,
      (int32_t *)(v30 + 36),
      mainAction,
      0LL);
    buffData = v23->fields.buffData;
    if ( damage <= 0.0 )
      Random = 0;
    if ( !buffData )
      goto LABEL_75;
    if ( buffData->fields.isNoDamage )
    {
      v39 = (_QWORD **)Method_System_Array_Empty_BattleBuffData_ShowBuffData___;
      v40 = **((_QWORD **)Method_System_Array_Empty_BattleBuffData_ShowBuffData___ + 6);
      v41 = *(_WORD *)(v40 + 306);
      if ( (v41 & 1) == 0 )
      {
        sub_B08394(**((_QWORD **)Method_System_Array_Empty_BattleBuffData_ShowBuffData___ + 6));
        v41 = *(_WORD *)(v40 + 306);
      }
      if ( (v41 & 0x400) != 0 )
      {
        v42 = *v39[6];
        if ( (*(_BYTE *)(v42 + 306) & 1) == 0 )
          sub_B08394(*v39[6]);
        if ( !*(_DWORD *)(v42 + 224) )
        {
          v43 = *v39[6];
          if ( (*(_BYTE *)(v43 + 306) & 1) == 0 )
            sub_B08394(*v39[6]);
          j_il2cpp_runtime_class_init_0(v43);
        }
      }
      v44 = *v39[6];
      if ( (*(_BYTE *)(v44 + 306) & 1) == 0 )
        sub_B08394(*v39[6]);
      v45 = *(System_Int32_array ****)(v44 + 184);
      v46 = *v45;
      *(_QWORD *)(v30 + 72) = *v45;
      sub_B70630((BattleServantConfConponent_o *)(v30 + 72), v46, v32, v33, v34, v35, v36, v37);
      *(_QWORD *)(v30 + 64) = v46;
      sub_B70630((BattleServantConfConponent_o *)(v30 + 64), v46, v47, v48, v49, v50, v51, v52);
      v59 = (_QWORD **)Method_System_Array_Empty_int___;
      v60 = **((_QWORD **)Method_System_Array_Empty_int___ + 6);
      v61 = *(_WORD *)(v60 + 306);
      if ( (v61 & 1) == 0 )
      {
        sub_B08394(**((_QWORD **)Method_System_Array_Empty_int___ + 6));
        v61 = *(_WORD *)(v60 + 306);
      }
      if ( (v61 & 0x400) != 0 )
      {
        v62 = *v59[6];
        if ( (*(_BYTE *)(v62 + 306) & 1) == 0 )
          sub_B08394(*v59[6]);
        if ( !*(_DWORD *)(v62 + 224) )
        {
          v63 = *v59[6];
          if ( (*(_BYTE *)(v63 + 306) & 1) == 0 )
            sub_B08394(*v59[6]);
          j_il2cpp_runtime_class_init_0(v63);
        }
      }
      v64 = *v59[6];
      if ( (*(_BYTE *)(v64 + 306) & 1) == 0 )
        sub_B08394(*v59[6]);
      v65 = *(System_Int32_array ****)(v64 + 184);
      v66 = *v65;
      *(_QWORD *)(v30 + 120) = *v65;
      sub_B70630((BattleServantConfConponent_o *)(v30 + 120), v66, v53, v54, v55, v56, v57, v58);
      *(_QWORD *)(v30 + 112) = v66;
      sub_B70630((BattleServantConfConponent_o *)(v30 + 112), v66, v67, v68, v69, v70, v71, v72);
      *(_QWORD *)(v30 + 104) = v66;
      sub_B70630((BattleServantConfConponent_o *)(v30 + 104), v66, v73, v74, v75, v76, v77, v78);
      v79 = v23->fields.buffData;
      v28 = playerId;
      if ( !v79 )
        goto LABEL_75;
      v31 = actor;
      *(_BYTE *)(v30 + 53) = v79->fields.isNoDamage;
      if ( !v29 )
        goto LABEL_75;
      v29->fields.invalidLossHpData = (struct BattleActionData_DamageData_o *)v30;
      p_invalidLossHpData = (BattleServantConfConponent_o *)&v29->fields.invalidLossHpData;
      v81 = (System_Int32_array **)v30;
    }
    else
    {
      if ( !v29 )
        goto LABEL_75;
      v29->fields.invalidLossHpData = 0LL;
      p_invalidLossHpData = (BattleServantConfConponent_o *)&v29->fields.invalidLossHpData;
      v81 = 0LL;
    }
    sub_B70630(p_invalidLossHpData, v81, v32, v33, v34, v35, v36, v37);
    v82 = v92;
  }
  else
  {
    v82 = v92;
    v31 = actor;
  }
  v83 = !v82 || v96;
  BattleServantData__ResultDamage(v23, Random, v31, 0LL, 0LL, v83, 0LL);
  logic = (UnityEngine_Object_o *)this->fields.logic;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( UnityEngine_Object__op_Inequality(logic, 0LL, 0LL) )
  {
    data = (__int64)this->fields.logic;
    if ( !data )
      goto LABEL_75;
    Wave = BattleLogic__getWave((BattleLogic_o *)data, 0LL);
  }
  else
  {
    Wave = 0;
  }
  data = (__int64)this->fields.data;
  if ( !data
    || (IsOpponentPTUniqueID = BattleData__IsOpponentPTUniqueID((BattleData_o *)data, targetId, v28, 0LL),
        BattleServantData__setActionHistory(v23, v28, 3, Wave, IsOpponentPTUniqueID, 0LL),
        !v29)
    || (v29->fields.procType = 2,
        v87 = (BattleActionEffect_LossHPFunc_o *)sub_B70764(BattleActionEffect_LossHPFunc_TypeInfo),
        BattleActionEffect_LossHPFunc___ctor(v87, targetId, Random, v83, 0LL),
        BattleActionData_BuffData__SetActionEffectProc(v29, (BattleActionEffect_Base_o *)v87, 0LL),
        !v19) )
  {
LABEL_75:
    sub_B7076C(data, v20);
  }
  BattleActionData__setBuffData(v19, v29, baseVals, 0LL);
  data = DataVals__isLossHpChangeDamage(baseVals, 0LL);
  if ( (data & 1) != 0 )
  {
    if ( !DataVals__IsActNoDamageBuff(baseVals, 0LL) )
    {
      data = (__int64)v23->fields.buffData;
      if ( !data )
        goto LABEL_75;
      goto LABEL_69;
    }
    data = DataVals__IsActNoDamageBuff(baseVals, 0LL);
    if ( (data & 1) != 0 )
    {
      data = (__int64)v23->fields.buffData;
      if ( !data )
        goto LABEL_75;
      if ( !*(_BYTE *)(data + 152) )
      {
LABEL_69:
        v88 = BattleBuffData__UseFieldProgressingDoNotAct((BattleBuffData_o *)data, v23, v94, 0LL);
        BattleActionData__setBuffData(v19, v88, baseVals, 0LL);
      }
    }
  }
  v89 = v23->fields.buffData;
  if ( !v89 )
    goto LABEL_75;
  v89->fields.isNoDamage = 0;
  data = (__int64)this->fields.data;
  if ( !data )
    goto LABEL_75;
  if ( ((BattleData__isEnemyID((BattleData_o *)data, v28, 0LL) ^ v23->fields.isEnemy) & 1) != 0 )
  {
    v90 = ((__int64 (__fastcall *)(BattleServantData_o *, Il2CppMethodPointer))v23->klass->vtable._13_get_resultHp.method)(
            v23,
            v23->klass->vtable._14_set_resultHp.methodPtr);
    BattleServantData__procAccumulationDamage(v23, v93, v90, 0LL);
  }
  return v19;
}


FunctionMaster_o *__fastcall BattleLogicFunction__getFuncMaster(BattleLogicFunction_o *this, const MethodInfo *method)
{
  FunctionMaster_o *result; // x0
  BattleServantConfConponent_o *p_master; // x19
  FunctionMaster_o *master; // t1
  WebViewManager_o *Instance; // x0
  __int64 v7; // x1
  System_Int32_array **MasterData_WarQuestSelectionMaster; // x0
  System_String_array **v9; // x2
  System_String_array **v10; // x3
  System_Boolean_array **v11; // x4
  System_Int32_array **v12; // x5
  System_Int32_array *v13; // x6
  System_Int32_array *v14; // x7

  if ( (byte_4353855 & 1) == 0 )
  {
    sub_B70694(&Method_DataManager_GetMasterData_FunctionMaster___);
    sub_B70694(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_4353855 = 1;
  }
  master = this->fields.master;
  p_master = (BattleServantConfConponent_o *)&this->fields.master;
  result = master;
  if ( !master )
  {
    Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2CE992C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !Instance )
      sub_B7076C(0LL, v7);
    MasterData_WarQuestSelectionMaster = (System_Int32_array **)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                                  (DataManager_o *)Instance,
                                                                  (const MethodInfo_1CA35A0 *)Method_DataManager_GetMasterData_FunctionMaster___);
    p_master->klass = (BattleServantConfConponent_c *)MasterData_WarQuestSelectionMaster;
    sub_B70630(p_master, MasterData_WarQuestSelectionMaster, v9, v10, v11, v12, v13, v14);
    return (FunctionMaster_o *)p_master->klass;
  }
  return result;
}


FunctionEntity_o *__fastcall BattleLogicFunction__getFunctionEntity(
        BattleLogicFunction_o *this,
        int32_t id,
        const MethodInfo *method)
{
  WebViewManager_o *Instance; // x0
  BattleServantConfConponent_o *p_master; // x20
  struct FunctionMaster_o *master; // t1
  __int64 v8; // x1
  System_Int32_array **MasterData_WarQuestSelectionMaster; // x0
  System_String_array **v10; // x2
  System_String_array **v11; // x3
  System_Boolean_array **v12; // x4
  System_Int32_array **v13; // x5
  System_Int32_array *v14; // x6
  System_Int32_array *v15; // x7

  if ( (byte_4353854 & 1) == 0 )
  {
    sub_B70694(&Method_DataManager_GetMasterData_FunctionMaster___);
    sub_B70694(&Method_DataMasterBase_FunctionMaster__FunctionEntity__int__GetEntity__);
    sub_B70694(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_4353854 = 1;
  }
  master = this->fields.master;
  p_master = (BattleServantConfConponent_o *)&this->fields.master;
  Instance = (WebViewManager_o *)master;
  if ( !master )
  {
    Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2CE992C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !Instance
      || (MasterData_WarQuestSelectionMaster = (System_Int32_array **)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                                        (DataManager_o *)Instance,
                                                                        (const MethodInfo_1CA35A0 *)Method_DataManager_GetMasterData_FunctionMaster___),
          p_master->klass = (BattleServantConfConponent_c *)MasterData_WarQuestSelectionMaster,
          sub_B70630(p_master, MasterData_WarQuestSelectionMaster, v10, v11, v12, v13, v14, v15),
          (Instance = (WebViewManager_o *)p_master->klass) == 0LL) )
    {
      sub_B7076C(Instance, v8);
    }
  }
  return (FunctionEntity_o *)DataMasterBase_WarMaster__WarEntity__int___GetEntity(
                               (DataMasterBase_WarMaster__WarEntity__int__o *)Instance,
                               id,
                               (const MethodInfo_21C0440 *)Method_DataMasterBase_FunctionMaster__FunctionEntity__int__GetEntity__);
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
  System_Int32_array *v7; // x7
  BattleActionData_BuffData_o *v8; // x20
  System_Int32_array **popupText; // x1
  System_Int32_array **EffectList; // x0
  System_String_array **v15; // x2
  System_String_array **v16; // x3
  System_Boolean_array **v17; // x4
  System_Int32_array **v18; // x5
  System_Int32_array *v19; // x6
  System_Int32_array *v20; // x7

  v8 = defBuffData;
  if ( (byte_435387F & 1) == 0 )
  {
    this = (BattleLogicFunction_o *)sub_B70694(&BattleActionData_BuffData_TypeInfo);
    byte_435387F = 1;
  }
  if ( !v8
    && (v8 = (BattleActionData_BuffData_o *)sub_B70764(BattleActionData_BuffData_TypeInfo),
        BattleActionData_BuffData___ctor(v8, 0LL),
        !v8)
    || (v8->fields.targetId = uniqueId, v8->fields.functionIndex = funcIndex, !funcEnt) )
  {
    sub_B7076C(this, funcEnt);
  }
  popupText = (System_Int32_array **)funcEnt->fields.popupText;
  v8->fields.popLabel = (struct System_String_o *)popupText;
  sub_B70630(
    (BattleServantConfConponent_o *)&v8->fields.popLabel,
    popupText,
    *(System_String_array ***)&uniqueId,
    *(System_String_array ***)&funcIndex,
    (System_Boolean_array **)isCommandSideEffect,
    (System_Int32_array **)defBuffData,
    (System_Int32_array *)method,
    v7);
  v8->fields.popIcon = funcEnt->fields.popupIconId;
  v8->fields.popColor = funcEnt->fields.popupTextColor;
  EffectList = (System_Int32_array **)FunctionEntity__getEffectList(funcEnt, 0LL);
  v8->fields.effectList = (struct System_Int32_array *)EffectList;
  sub_B70630((BattleServantConfConponent_o *)&v8->fields.effectList, EffectList, v15, v16, v17, v18, v19, v20);
  v8->fields.isCommandAfter = isCommandSideEffect;
  v8->fields.procType = 0;
  return v8;
}


// local variable allocation has failed, the output may be wrong!
BattleLogicFunctionProcess_BaseFunctionTypeProcess_o *__fastcall BattleLogicFunction__getFunctionTypeProcess(
        BattleLogicFunction_o *this,
        int32_t functType,
        const MethodInfo *method)
{
  System_Collections_Generic_Dictionary_Voice_BATTLE__string__o *dicFuncProcess; // x0
  int32_t v6; // w1
  BattleLogicFunctionProcess_BaseFunctionTypeProcess_o *v7; // x20

  if ( (byte_4353859 & 1) == 0 )
  {
    sub_B70694(&Method_System_Collections_Generic_Dictionary_FuncList_TYPE__BattleLogicFunctionProcess_BaseFunctionTypeProcess__ContainsKey__);
    sub_B70694(&Method_System_Collections_Generic_Dictionary_FuncList_TYPE__BattleLogicFunctionProcess_BaseFunctionTypeProcess__get_Item__);
    byte_4353859 = 1;
  }
  dicFuncProcess = (System_Collections_Generic_Dictionary_Voice_BATTLE__string__o *)this->fields.dicFuncProcess;
  if ( !dicFuncProcess
    || (dicFuncProcess = (System_Collections_Generic_Dictionary_Voice_BATTLE__string__o *)System_Collections_Generic_Dictionary_Voice_BATTLE__string___ContainsKey(
                                                                                            dicFuncProcess,
                                                                                            functType,
                                                                                            (const MethodInfo_2F72298 *)Method_System_Collections_Generic_Dictionary_FuncList_TYPE__BattleLogicFunctionProcess_BaseFunctionTypeProcess__ContainsKey__),
        !this->fields.dicFuncProcess)
    || (((unsigned __int8)dicFuncProcess & 1) == 0 ? (v6 = 0) : (v6 = functType),
        (dicFuncProcess = (System_Collections_Generic_Dictionary_Voice_BATTLE__string__o *)System_Collections_Generic_Dictionary_Voice_BATTLE__string___get_Item(
                                                                                             (System_Collections_Generic_Dictionary_Voice_BATTLE__string__o *)this->fields.dicFuncProcess,
                                                                                             v6,
                                                                                             (const MethodInfo_2F71F60 *)Method_System_Collections_Generic_Dictionary_FuncList_TYPE__BattleLogicFunctionProcess_BaseFunctionTypeProcess__get_Item__)) == 0LL) )
  {
    sub_B7076C(dicFuncProcess, *(_QWORD *)&functType);
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

  if ( (byte_435386B & 1) == 0 )
  {
    sub_B70694(&BattleActionData_TypeInfo);
    byte_435386B = 1;
  }
  v8 = (BattleActionData_o *)sub_B70764(BattleActionData_TypeInfo);
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
    sub_B7076C(GrayActionBuffData, v10);
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
    sub_B7076C(this, baseVals);
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
  System_String_array **v19; // x2
  System_String_array **v20; // x3
  System_Boolean_array **v21; // x4
  System_Int32_array **v22; // x5
  System_Int32_array *v23; // x6
  System_Int32_array *v24; // x7
  __int64 v25; // x0
  __int64 v26; // x1
  System_Int32_array **v27; // x1
  BattleServantConfConponent_o *p_popLabel; // x0
  System_Int32_array **v29; // x0
  System_String_array **v30; // x2
  System_String_array **v31; // x3
  System_Boolean_array **v32; // x4
  System_Int32_array **v33; // x5
  System_Int32_array *v34; // x6
  System_Int32_array *v35; // x7

  v10 = defBuffData;
  if ( (byte_4353867 & 1) == 0 )
  {
    sub_B70694(&BattleActionData_TypeInfo);
    sub_B70694(&BattleActionData_BuffData_TypeInfo);
    sub_B70694(&int___TypeInfo);
    sub_B70694(&StringLiteral_1/*""*/);
    byte_4353867 = 1;
  }
  v18 = (BattleActionData_o *)sub_B70764(BattleActionData_TypeInfo);
  BattleActionData___ctor(v18, 0LL);
  if ( !defBuffData )
  {
    v10 = (BattleActionData_BuffData_o *)sub_B70764(BattleActionData_BuffData_TypeInfo);
    BattleActionData_BuffData___ctor(v10, 0LL);
    if ( !v10 )
      goto LABEL_11;
  }
  v10->fields.functionIndex = funcIndex;
  v10->fields.isMiss = 1;
  v10->fields.targetId = targetId;
  v10->fields.buffId = 0;
  if ( isHide )
  {
    v27 = (System_Int32_array **)StringLiteral_1/*""*/;
    v10->fields.popLabel = (struct System_String_o *)StringLiteral_1/*""*/;
    p_popLabel = (BattleServantConfConponent_o *)&v10->fields.popLabel;
  }
  else
  {
    v10->fields.popLabel = dispName;
    p_popLabel = (BattleServantConfConponent_o *)&v10->fields.popLabel;
    v27 = (System_Int32_array **)dispName;
  }
  sub_B70630(p_popLabel, v27, v19, v20, v21, v22, v23, v24);
  v29 = (System_Int32_array **)sub_B706AC(int___TypeInfo, 0LL);
  v10->fields.effectList = (struct System_Int32_array *)v29;
  sub_B70630((BattleServantConfConponent_o *)&v10->fields.effectList, v29, v30, v31, v32, v33, v34, v35);
  if ( !v18
    || (BattleActionData__setBuffData(v18, v10, 0LL, 0LL),
        v10->fields.IsNoEffect = isNoEffect,
        v10->fields.isCommandAfter = isCommandSideEffect,
        !dataVals) )
  {
LABEL_11:
    sub_B7076C(v25, v26);
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
  if ( (byte_4353868 & 1) != 0 )
  {
    if ( uniqueText )
      goto LABEL_3;
  }
  else
  {
    sub_B70694(&LocalizationManager_TypeInfo);
    this = (BattleLogicFunction_o *)sub_B70694(&StringLiteral_2516/*"BATTLE_MISS_FUNCTION"*/);
    byte_4353868 = 1;
    if ( v9 )
    {
LABEL_3:
      if ( dataVals )
        goto LABEL_4;
LABEL_10:
      sub_B7076C(this, *(_QWORD *)&targetId);
    }
  }
  if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !LocalizationManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  }
  this = (BattleLogicFunction_o *)LocalizationManager__Get((System_String_o *)StringLiteral_2516/*"BATTLE_MISS_FUNCTION"*/, 0LL);
  v9 = (System_String_o *)this;
  if ( !dataVals )
    goto LABEL_10;
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
  _BOOL8 isHideNoEffect; // x0
  const MethodInfo *v16; // [xsp+8h] [xbp-48h]

  v9 = uniqueText;
  if ( (byte_4353869 & 1) != 0 )
  {
    if ( uniqueText )
      goto LABEL_3;
  }
  else
  {
    sub_B70694(&LocalizationManager_TypeInfo);
    this = (BattleLogicFunction_o *)sub_B70694(&StringLiteral_2527/*"BATTLE_NO_EFFECT_FUNCTION"*/);
    byte_4353869 = 1;
    if ( v9 )
    {
LABEL_3:
      if ( dataVals )
        goto LABEL_4;
LABEL_10:
      sub_B7076C(this, *(_QWORD *)&targetId);
    }
  }
  if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !LocalizationManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  }
  this = (BattleLogicFunction_o *)LocalizationManager__Get((System_String_o *)StringLiteral_2527/*"BATTLE_NO_EFFECT_FUNCTION"*/, 0LL);
  v9 = (System_String_o *)this;
  if ( !dataVals )
    goto LABEL_10;
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
  System_Collections_Generic_IEnumerable_TSource__o *TargetIds_19749540; // x20
  System_Func_int__bool__o *v17; // x21
  System_Collections_Generic_IEnumerable_TSource__o *v18; // x0

  if ( (byte_4353861 & 1) == 0 )
  {
    sub_B70694(&Method_BattleLogicFunction__getTargetids_b__55_0__);
    sub_B70694(&Target_BattleTargetArgs_TypeInfo);
    sub_B70694(&Method_System_Linq_Enumerable_ToArray_int___);
    sub_B70694(&Method_System_Linq_Enumerable_Where_int___);
    sub_B70694(&Method_System_Func_int__bool___ctor__);
    sub_B70694(&System_Func_int__bool__TypeInfo);
    byte_4353861 = 1;
  }
  args = (Target_BattleTargetArgs_o *)sub_B70764(Target_BattleTargetArgs_TypeInfo);
  Target_BattleTargetArgs___ctor(args, dataVals, 0LL);
  if ( !mainAction )
    sub_B7076C(v10, v11);
  data = this->fields.data;
  actorId = mainAction->fields.actorId;
  targetId = mainAction->fields.targetId;
  PTTargetId = BattleActionData__getPTTargetId(mainAction, 0LL);
  TargetIds_19749540 = (System_Collections_Generic_IEnumerable_TSource__o *)Target__getTargetIds_19749540(
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
  v17 = (System_Func_int__bool__o *)sub_B70764(System_Func_int__bool__TypeInfo);
  System_Func_int__bool____ctor(
    v17,
    (Il2CppObject *)this,
    Method_BattleLogicFunction__getTargetids_b__55_0__,
    (const MethodInfo_29A62E8 *)Method_System_Func_int__bool___ctor__);
  v18 = System_Linq_Enumerable__Where_int_(
          TargetIds_19749540,
          (System_Func_TSource__bool__o *)v17,
          (const MethodInfo_1CCCBB0 *)Method_System_Linq_Enumerable_Where_int___);
  return System_Linq_Enumerable__ToArray_int_(
           v18,
           (const MethodInfo_1CC85F0 *)Method_System_Linq_Enumerable_ToArray_int___);
}


BattleFieldEnvironmentData_o *__fastcall BattleLogicFunction__get_FieldEnvData(
        BattleLogicFunction_o *this,
        const MethodInfo *method)
{
  struct BattleData_o *data; // x8

  data = this->fields.data;
  if ( !data )
    sub_B7076C(this, method);
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
    sub_B7076C(this, passive);
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
  BattleLogicFunction_o *v8; // x23
  int v9; // w22

  if ( !baseVals || (v8 = this, this = (BattleLogicFunction_o *)DataVals__GetParam(baseVals, 0, 0, 0LL), !args) )
    sub_B7076C(this, args);
  v9 = (int)this;
  if ( !BattleLogicFunction_ProcListInArgs__DidTriggeredFuncHaveSpecifyResults(
          args,
          targetId,
          baseVals,
          v8->fields.data,
          0LL) )
    return 1;
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
    sub_B7076C(this, 0LL);
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
  BattleLogicFunction_o *v6; // x20
  unsigned __int64 v7; // x21
  __int64 v9; // x0

  if ( !funclist )
LABEL_11:
    sub_B7076C(this, *(_QWORD *)&uniqueId);
  v4 = *(_QWORD *)&funclist->max_length;
  if ( (int)v4 < 1 )
    return 0;
  v6 = this;
  v7 = 0LL;
  while ( 1 )
  {
    if ( v7 >= (unsigned int)v4 )
    {
      v9 = sub_B70798(this);
      sub_B70738(v9, 0LL);
    }
    this = (BattleLogicFunction_o *)BattleLogicFunction__getFunctionEntity(
                                      v6,
                                      funclist->m_Items[v7 + 1],
                                      (const MethodInfo *)funclist);
    if ( !this )
      goto LABEL_11;
    this = (BattleLogicFunction_o *)Target__isChoose(HIDWORD(this->fields.logic), 0LL);
    if ( ((unsigned __int8)this & 1) != 0 )
      return 1;
    LODWORD(v4) = funclist->max_length;
    if ( (__int64)++v7 >= (int)v4 )
      return 0;
  }
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
  BattleActionData_o *mainAction; // x19
  System_String_o *v20; // x0
  System_String_o *v21; // x0
  System_String_o *v22; // x0
  System_String_array **v23; // x2
  System_String_array **v24; // x3
  System_Boolean_array **v25; // x4
  System_Int32_array **v26; // x5
  System_Int32_array *v27; // x6
  System_Int32_array *v28; // x7
  struct BattleData_o *data; // x8
  UnityEngine_Object_o *v30; // x24
  BattleLogicFunction_ProcListInArgs_o *v31; // x24
  int32_t *p_actSetId; // x22
  WeightRate_int__o *v33; // x23
  signed int max_length; // w8
  unsigned int v35; // w24
  Il2CppClass **v36; // x8
  DataVals_o *v37; // x25
  int32_t ActSetWeight; // w26
  BattleServantData_o *v39; // x24
  int32_t Random; // w0
  System_String_o *v41; // x0
  WellFired_USFGOPlayBgmEventConditional_CondBGM_array *funcUnitArray_k__BackingField; // x21
  BattleLogicFunction___c_c *v43; // x0
  bool v44; // w23
  struct BattleLogicFunction___c_StaticFields *static_fields; // x8
  System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *_9__41_0; // x22
  Il2CppObject *v47; // x23
  struct BattleLogicFunction___c_StaticFields *v48; // x0
  System_String_array **v49; // x2
  System_String_array **v50; // x3
  System_Boolean_array **v51; // x4
  System_Int32_array **v52; // x5
  System_Int32_array *v53; // x6
  System_Int32_array *v54; // x7
  BattleLogicFunction___c_c *v55; // x0
  System_Collections_Generic_IEnumerable_TSource__o *v56; // x21
  struct BattleLogicFunction___c_StaticFields *v57; // x8
  System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *_9__41_1; // x22
  Il2CppObject *v59; // x23
  struct BattleLogicFunction___c_StaticFields *v60; // x0
  System_String_array **v61; // x2
  System_String_array **v62; // x3
  System_Boolean_array **v63; // x4
  System_Int32_array **v64; // x5
  System_Int32_array *v65; // x6
  System_Int32_array *v66; // x7
  BattleData_o *v67; // x21
  SkillValueUpApplierPlayerMaster_o *v68; // x22
  SkillValueUpApplierPlayerMaster_o *v69; // x10
  struct BattleLogicFunctionProcess_FunctionUnitCheck_array *v70; // x22
  int v71; // w8
  BattleLogicFunction_FuncSideEffectFunctionArgument_o *v72; // x25
  int v73; // w26
  BattleCommandData_o *v74; // x22
  UnityEngine_Object_o *v75; // x23
  struct BattleLogic_o *v76; // x8
  unsigned __int64 v77; // x23
  BattleLogicFunctionProcess_FunctionUnitCheck_o *v78; // x21
  DataVals_o *dataVals_k__BackingField; // x26
  const MethodInfo *v80; // x3
  const MethodInfo *v81; // x4
  BattleLogicFunction___c_c *v82; // x0
  System_Collections_Generic_IEnumerable_TSource__o *funcTargetArray_k__BackingField; // x21
  struct BattleLogicFunction___c_StaticFields *v84; // x8
  System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *_9__41_2; // x27
  Il2CppObject *v86; // x28
  struct BattleLogicFunction___c_StaticFields *v87; // x0
  System_String_array **v88; // x2
  System_String_array **v89; // x3
  System_Boolean_array **v90; // x4
  System_Int32_array **v91; // x5
  System_Int32_array *v92; // x6
  System_Int32_array *v93; // x7
  System_Collections_Generic_IEnumerable_TSource__o *v94; // x21
  BattleLogicFunction___c_c *v95; // x8
  struct BattleLogicFunction___c_StaticFields *v96; // x9
  System_Func_BattleLogicBuff_ReduceHpProcess_BuffInfo__int__o *_9__41_3; // x27
  Il2CppObject *v98; // x28
  struct BattleLogicFunction___c_StaticFields *v99; // x0
  System_String_array **v100; // x2
  System_String_array **v101; // x3
  System_Boolean_array **v102; // x4
  System_Int32_array **v103; // x5
  System_Int32_array *v104; // x6
  System_Int32_array *v105; // x7
  System_Collections_Generic_IEnumerable_TSource__o *v106; // x0
  System_Int32_array *v107; // x21
  bool v108; // w27
  BattleLogicFunction_PreAttackSideEffectMakeArgument_o *v109; // x28
  BattleLogicFunction_SideEffectMakeArgument_o *v110; // x0
  const MethodInfo *v111; // x5
  struct BattleLogicFunctionProcess_FunctionTargetCheck_array *v112; // x22
  int v113; // w8
  int i; // w24
  BattleData_o *v115; // x21
  int32_t Value; // w20
  BattleLogicFunction_o *v117; // x0
  const MethodInfo *v118; // x6
  BattleData_o *v119; // x21
  int32_t *v120; // x20
  BattleActionData_o *v121; // x0
  const MethodInfo *v122; // x7
  bool isUnaffected; // w23
  int32_t CorrectedValueFuncGainNp; // w21
  const MethodInfo *v125; // x7
  BattleLogicFunction_o *v126; // x0
  int32_t v127; // w23
  const MethodInfo *v128; // x6
  BattleLogicFunction_o *v129; // x21
  BattleActionData_o *v130; // x0
  BattleActionData_BuffData_o *v131; // x1
  DataVals_o *v132; // x2
  int32_t v133; // w0
  BattleLogicFunction_o *v134; // x0
  int32_t v135; // w20
  const MethodInfo *v136; // x6
  BattleActionData_BuffData_o *v137; // x21
  int32_t v138; // w21
  System_Int32_array *TargetList; // x23
  int32_t v140; // w0
  const MethodInfo *v141; // x6
  int32_t v142; // w1
  BattleLogicFunction_o *v143; // x0
  int32_t v144; // w2
  bool v145; // w4
  DataVals_o *v146; // x3
  int32_t v147; // w21
  System_Int32_array *v148; // x23
  int32_t v149; // w0
  int32_t v150; // w2
  BattleActionData_BuffData_o *FunctionObject; // x1
  BattleActionData_o *v152; // x0
  DataVals_o *v153; // x2
  BattleActionData_BuffData_o *v154; // x6
  BattleActionData_o *v155; // x0
  const MethodInfo *v156; // x3
  int32_t v157; // w21
  bool v158; // w6
  const MethodInfo *v159; // x7
  const MethodInfo *v160; // x7
  const MethodInfo *v161; // x6
  int32_t v162; // w1
  FunctionEntity_o *v163; // x2
  DataVals_o *v164; // x3
  int32_t v165; // w4
  const MethodInfo *v166; // x5
  BattleLogicFunction_o *v167; // x20
  BattleActionData_o *v168; // x0
  FunctionEntity_o *v169; // x1
  FunctionEntity_o *v170; // x3
  MethodInfo *v171; // x4
  const MethodInfo *v172; // x6
  int32_t applyTarget; // w8
  FunctionEntity_o *v174; // x2
  const MethodInfo *v175; // x6
  BattleActionData_o *v176; // x0
  const MethodInfo *v177; // x5
  BattleActionData_o *v178; // x0
  FunctionEntity_o *v179; // x2
  const MethodInfo *v180; // x6
  int32_t v181; // w1
  FunctionEntity_o *v182; // x2
  DataVals_o *v183; // x3
  int32_t v184; // w4
  const MethodInfo *v185; // x5
  BattleActionData_o *v186; // x0
  FunctionEntity_o *v187; // x3
  int32_t v188; // w5
  const MethodInfo *v189; // x6
  _BOOL8 v190; // x0
  FunctionEntity_o *v191; // x2
  int32_t v192; // w4
  const MethodInfo *v193; // x5
  const MethodInfo *v194; // x3
  int32_t v195; // w21
  int32_t v196; // w23
  char v197; // w5
  const MethodInfo *v198; // x7
  BattleLogicFunction_o *v199; // x0
  int32_t v200; // w1
  int32_t v201; // w2
  System_String_array **v202; // x2
  System_String_array **v203; // x3
  System_Boolean_array **v204; // x4
  System_Int32_array **v205; // x5
  System_Int32_array *v206; // x6
  System_Int32_array *v207; // x7
  struct BattleData_o *v208; // x8
  System_Int32_array **draw_commandlist; // x1
  int v210; // w23
  bool v211; // w21
  BattleServantSnapShotOnBuffUpdate_o *v212; // x20
  System_Int32_array *v213; // x0
  int32_t v214; // w23
  Generator_BGMFromChangeBGMFunc_o *v215; // x21
  const MethodInfo *v216; // x3
  _BOOL8 v217; // x0
  const MethodInfo *v218; // x6
  const MethodInfo *v219; // x6
  System_Int32_array *v220; // x21
  int32_t SameIndiualityBuffSum; // w0
  int32_t v222; // w21
  int v223; // w21
  bool isGainNp; // w0
  BattleLogicFunction_o *v225; // x0
  int32_t v226; // w20
  const MethodInfo *v227; // x6
  BattleLogicFunction_o *v228; // x21
  const MethodInfo *v229; // x7
  int32_t v230; // w1
  int32_t v231; // w2
  int32_t v232; // w5
  const MethodInfo *v233; // x4
  const MethodInfo *v234; // x4
  _BOOL8 v235; // x0
  const MethodInfo *v236; // x3
  bool v237; // w21
  int32_t v238; // w23
  int32_t v239; // w1
  const MethodInfo *v240; // x3
  BattleLogicFunction_o *v241; // x0
  bool v242; // w2
  DataVals_o *v243; // x1
  _BOOL8 updated; // x0
  const MethodInfo *v245; // x6
  BattleActionData_MasterBuffData_o *v246; // x20
  Generator_BGFromQuickChangeBGFunc_o *v247; // x21
  const MethodInfo *v248; // x3
  int32_t Param; // w0
  const MethodInfo *v250; // x4
  BattleBuffData_o *buffProgressTurnSelfList; // x21
  BattleActionData_UpShiftGaugeData_o *v252; // x21
  const MethodInfo *v253; // x5
  DataVals_o *v254; // x3
  const MethodInfo *v255; // x5
  BattleActionData_o *SubMember; // x0
  const MethodInfo *v257; // x3
  const MethodInfo *v258; // x6
  const MethodInfo *v259; // x4
  const MethodInfo *v260; // x3
  _BOOL8 v261; // x0
  const MethodInfo *v262; // x3
  const MethodInfo *v263; // x2
  const MethodInfo *v264; // x2
  const MethodInfo *v265; // x5
  const MethodInfo *v266; // x4
  const MethodInfo *v267; // x4
  int32_t v268; // w0
  const MethodInfo *v269; // x2
  bool v270; // cc
  const MethodInfo *v271; // x2
  const MethodInfo *v272; // x2
  __int64 dicFuncProcess_high; // x21
  int32_t v274; // w2
  const MethodInfo *v275; // x6
  float v276; // s0
  double v277; // d0
  __int64 v278; // x21
  float v279; // s0
  double v280; // d0
  BattleLogicFunction_o *v281; // x0
  int32_t v282; // w20
  const MethodInfo *v283; // x6
  BattleLogicFunctionProcess_FunctionTargetCheck_o *v284; // x21
  int32_t targetId_k__BackingField; // w27
  BattleLogicFunction_o *v286; // x28
  const MethodInfo *v287; // x7
  BattleActionData_o *NoEffectObject; // x0
  struct System_Int32_array *vals; // x8
  int commandType; // w8
  bool v291; // w0
  const MethodInfo *v292; // x5
  const MethodInfo *v293; // x3
  int32_t v294; // w23
  bool isSafeDamage; // w0
  int32_t v296; // w2
  const MethodInfo *v297; // x7
  const MethodInfo *v298; // x7
  int32_t actorId; // w1
  int32_t v300; // w2
  int32_t v301; // w5
  int v302; // w8
  struct System_Collections_Generic_List_int__o *v303; // x8
  BattleActionData_o *v304; // x0
  int v305; // w26
  bool v306; // w21
  BattleLogicFunction_AfterAttackSideEffectMakeArgument_o *v307; // x22
  BattleLogicFunction_SideEffectMakeArgument_o *Argument__Init; // x0
  const MethodInfo *v309; // x5
  BattleLogicFunction_o *v310; // x21
  UnityEngine_Object_o *v311; // x21
  int v312; // w8
  BattleLogicFunction_o *v313; // x21
  unsigned int v314; // w22
  __int64 v315; // x8
  BattleLogicFunction_FuncSideEffectFunctionArgument_o *FuncSideEffectArg; // x0
  UnityEngine_Object_o *v317; // x21
  struct BattleData_o *v318; // x8
  UnityEngine_Object_o *v319; // x21
  BattleData_o *v320; // x0
  BattleServantData_o *v321; // x0
  __int64 v322; // x1
  __int64 v324; // x0
  const MethodInfo *overwriteLossHp; // [xsp+0h] [xbp-190h]
  int32_t overwriteLossHpa; // [xsp+0h] [xbp-190h]
  const MethodInfo *isRandomDamage; // [xsp+8h] [xbp-188h]
  const MethodInfo *v328; // [xsp+18h] [xbp-178h]
  bool isParam; // [xsp+20h] [xbp-170h]
  int32_t subTargetId; // [xsp+24h] [xbp-16Ch]
  int32_t *p_actorId; // [xsp+28h] [xbp-168h]
  _BYTE v332[12]; // [xsp+34h] [xbp-15Ch]
  bool playerId; // [xsp+40h] [xbp-150h]
  BattleData_o *playerIda; // [xsp+40h] [xbp-150h]
  int32_t playerIdb; // [xsp+40h] [xbp-150h]
  BattleLogicFunction_o *v336; // [xsp+48h] [xbp-148h]
  System_Collections_Generic_List_int__o *v337; // [xsp+50h] [xbp-140h]
  struct BattleLogicFunctionProcess_FunctionUnitCheck_array *v338; // [xsp+60h] [xbp-130h]
  int v339; // [xsp+6Ch] [xbp-124h]
  BattleServantData_o *ServantData; // [xsp+70h] [xbp-120h]
  BattleLogicFunctionProcess_FunctionUnitCheck_o *funcUnit; // [xsp+80h] [xbp-110h]
  int v343; // [xsp+8Ch] [xbp-104h]
  DataMasterBase_WarMaster__WarEntity__int__o *MasterData_WarQuestSelectionMaster; // [xsp+90h] [xbp-100h]
  int32_t index; // [xsp+9Ch] [xbp-F4h]
  int32_t *p_funcType; // [xsp+A0h] [xbp-F0h]
  FunctionEntity_o *funcEnt; // [xsp+B0h] [xbp-E0h]
  BattleLogicFunction_ProcListInArgs_o *args; // [xsp+B8h] [xbp-D8h]
  BattleLogicFunction_o *logic; // [xsp+C0h] [xbp-D0h]
  System_Collections_Generic_List_Enumerator_int__o v350; // [xsp+C8h] [xbp-C8h] BYREF
  System_Collections_Generic_List_Enumerator_int__o v351; // [xsp+E0h] [xbp-B0h] BYREF
  System_Collections_Generic_HashSet_BattleBuffData_BuffData__o *buffsToRemove; // [xsp+100h] [xbp-90h] BYREF
  int32_t absorptionCount; // [xsp+10Ch] [xbp-84h] BYREF
  RemovedBuffInfo_o *subBuffInfo; // [xsp+110h] [xbp-80h] BYREF
  int32_t funcIndex; // [xsp+11Ch] [xbp-74h] BYREF
  __int64 v356[2]; // [xsp+120h] [xbp-70h] BYREF

  mainAction = action;
  logic = this;
  if ( (byte_435385A & 1) == 0 )
  {
    sub_B70694(&BattleLogicFunction_AfterAttackSideEffectMakeArgument_TypeInfo);
    sub_B70694(&Generator_BGFromQuickChangeBGFunc_TypeInfo);
    sub_B70694(&Generator_BGMFromChangeBGMFunc_TypeInfo);
    sub_B70694(&Method_BasicHelper_Any_BattleLogicFunctionProcess_FunctionUnitCheck___);
    sub_B70694(&BattleCommandData_TypeInfo);
    sub_B70694(&BattleServantSnapShotOnBuffUpdate_TypeInfo);
    sub_B70694(&Method_DataManager_GetMasterData_BuffMaster___);
    sub_B70694(&Method_DataMasterBase_BuffMaster__BuffEntity__int__GetEntity__);
    sub_B70694(&BattleActionData_DownShiftGaugeData_TypeInfo);
    sub_B70694(&Method_System_Linq_Enumerable_All_BattleLogicFunctionProcess_FunctionUnitCheck___);
    sub_B70694(&Method_System_Linq_Enumerable_Select_BattleLogicFunctionProcess_FunctionTargetCheck__int___);
    sub_B70694(&Method_System_Linq_Enumerable_ToArray_int___);
    sub_B70694(&Method_System_Linq_Enumerable_Where_BattleLogicFunctionProcess_FunctionTargetCheck___);
    sub_B70694(&Method_System_Collections_Generic_List_Enumerator_int__Dispose__);
    sub_B70694(&Method_System_Collections_Generic_List_Enumerator_int__MoveNext__);
    sub_B70694(&Method_System_Collections_Generic_List_Enumerator_int__get_Current__);
    sub_B70694(&Method_System_Func_BattleLogicFunctionProcess_FunctionUnitCheck__bool___ctor__);
    sub_B70694(&Method_System_Func_BattleLogicFunctionProcess_FunctionTargetCheck__int___ctor__);
    sub_B70694(&Method_System_Func_BattleLogicFunctionProcess_FunctionTargetCheck__bool___ctor__);
    sub_B70694(&System_Func_BattleLogicFunctionProcess_FunctionTargetCheck__bool__TypeInfo);
    sub_B70694(&System_Func_BattleLogicFunctionProcess_FunctionTargetCheck__int__TypeInfo);
    sub_B70694(&System_Func_BattleLogicFunctionProcess_FunctionUnitCheck__bool__TypeInfo);
    sub_B70694(&Method_System_Collections_Generic_HashSet_BattleBuffData_BuffData__get_Count__);
    sub_B70694(&Method_System_Collections_Generic_List_int__Add__);
    sub_B70694(&Method_System_Collections_Generic_List_int__GetEnumerator__);
    sub_B70694(&Method_System_Collections_Generic_List_int___ctor__);
    sub_B70694(&System_Collections_Generic_List_int__TypeInfo);
    sub_B70694(&BattleActionData_MasterBuffData_TypeInfo);
    sub_B70694(&UnityEngine_Object_TypeInfo);
    sub_B70694(&BattleLogicFunction_PreAttackSideEffectMakeArgument_TypeInfo);
    sub_B70694(&BattleLogicFunction_ProcListInArgs_TypeInfo);
    sub_B70694(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_B70694(&SkillValueUpApplierPlayerMaster_TypeInfo);
    sub_B70694(&Method_BattleLogicFunction___c__procList_b__41_0__);
    sub_B70694(&Method_BattleLogicFunction___c__procList_b__41_1__);
    sub_B70694(&Method_BattleLogicFunction___c__procList_b__41_2__);
    sub_B70694(&Method_BattleLogicFunction___c__procList_b__41_3__);
    sub_B70694(&BattleLogicFunction___c_TypeInfo);
    sub_B70694(&BattleActionData_UpShiftGaugeData_TypeInfo);
    sub_B70694(&Method_WeightRate_int___ctor__);
    sub_B70694(&Method_WeightRate_int__getCount__);
    sub_B70694(&Method_WeightRate_int__getData__);
    sub_B70694(&Method_WeightRate_int__getTotalWeight__);
    sub_B70694(&Method_WeightRate_int__setWeight__);
    sub_B70694(&WeightRate_int__TypeInfo);
    sub_B70694(&StringLiteral_1534/*"====< end BattleLogicFunction::procList >====="*/);
    sub_B70694(&StringLiteral_211/*" enemytargetId: "*/);
    sub_B70694(&StringLiteral_1535/*"====< start BattleLogicFunction::procList >====="*/);
    sub_B70694(&StringLiteral_259/*" pttargetId: "*/);
    sub_B70694(&StringLiteral_1537/*"========="*/);
    sub_B70694(&StringLiteral_1548/*">actSetId: "*/);
    this = (BattleLogicFunction_o *)sub_B70694(&StringLiteral_182/*" actorId: "*/);
    byte_435385A = 1;
  }
  v356[0] = 0LL;
  funcIndex = 0;
  subBuffInfo = 0LL;
  absorptionCount = 0;
  buffsToRemove = 0LL;
  memset(&v351, 0, sizeof(v351));
  if ( !mainAction )
    goto LABEL_445;
  p_actorId = &mainAction->fields.actorId;
  v20 = System_Int32__ToString((int)mainAction + 32, 0LL);
  System_String__Concat_44758168((System_String_o *)StringLiteral_182/*" actorId: "*/, v20, 0LL);
  this = (BattleLogicFunction_o *)logic->fields.data;
  if ( !this )
    goto LABEL_445;
  ServantData = BattleData__getServantData((BattleData_o *)this, mainAction->fields.actorId, 0LL);
  HIDWORD(v356[0]) = mainAction->fields.targetId;
  v21 = System_Int32__ToString((int32_t)v356 + 4, 0LL);
  System_String__Concat_44758168((System_String_o *)StringLiteral_211/*" enemytargetId: "*/, v21, 0LL);
  LODWORD(v356[0]) = BattleActionData__getPTTargetId(mainAction, 0LL);
  subTargetId = BattleActionData__getPTSubTargetId(mainAction, 0LL);
  v22 = System_Int32__ToString((int32_t)v356, 0LL);
  this = (BattleLogicFunction_o *)System_String__Concat_44758168((System_String_o *)StringLiteral_259/*" pttargetId: "*/, v22, 0LL);
  data = logic->fields.data;
  if ( !data )
    goto LABEL_445;
  data->fields.beforeAction = mainAction;
  sub_B70630(
    (BattleServantConfConponent_o *)&data->fields.beforeAction,
    (System_Int32_array **)mainAction,
    v23,
    v24,
    v25,
    v26,
    v27,
    v28);
  v337 = (System_Collections_Generic_List_int__o *)sub_B70764(System_Collections_Generic_List_int__TypeInfo);
  System_Collections_Generic_List_int____ctor(
    v337,
    (const MethodInfo_30B547C *)Method_System_Collections_Generic_List_int___ctor__);
  this = (BattleLogicFunction_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2CE992C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !this )
    goto LABEL_445;
  MasterData_WarQuestSelectionMaster = (DataMasterBase_WarMaster__WarEntity__int__o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                                                        (DataManager_o *)this,
                                                                                        (const MethodInfo_1CA35A0 *)Method_DataManager_GetMasterData_BuffMaster___);
  if ( isReduceReset )
  {
    v30 = (UnityEngine_Object_o *)logic->fields.logic;
    if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    }
    if ( UnityEngine_Object__op_Inequality(v30, 0LL, 0LL) )
    {
      this = (BattleLogicFunction_o *)logic->fields.logic;
      if ( !this )
        goto LABEL_445;
      BattleLogic__resetReducedHpAll((BattleLogic_o *)this, 0LL);
    }
  }
  v31 = (BattleLogicFunction_ProcListInArgs_o *)sub_B70764(BattleLogicFunction_ProcListInArgs_TypeInfo);
  BattleLogicFunction_ProcListInArgs___ctor(v31, argument, 0LL);
  if ( !v31 )
    goto LABEL_445;
  BattleLogicFunction_ProcListInArgs__set_IsCommandSideEffect(v31, isCommandSideEffect, 0LL);
  BattleLogicFunction_ProcListInArgs__set_IsShift(v31, isShift, 0LL);
  BattleLogicFunction_ProcListInArgs__set_IsPassive(v31, passive, 0LL);
  v31->fields._IsTreasureDvc_k__BackingField = isTreasureDvc;
  if ( BattleLogicFunction_ProcListInArgs__get_SkillId(v31, 0LL) <= 0 )
    BattleLogicFunction_ProcListInArgs__set_SkillId(v31, skillId, 0LL);
  funcIndex = 0;
  BattleLogicFunction_ProcListInArgs__initFunctionUnitCheck(v31, logic, functionlist, baseValslist, &funcIndex, 0LL);
  args = v31;
  v31->fields.actSetId = 0;
  p_actSetId = &v31->fields.actSetId;
  v33 = (WeightRate_int__o *)sub_B70764(WeightRate_int__TypeInfo);
  WeightRate_int____ctor(v33, (const MethodInfo_2CBC9CC *)Method_WeightRate_int___ctor__);
  if ( !baseValslist )
    goto LABEL_445;
  max_length = baseValslist->max_length;
  if ( max_length >= 1 )
  {
    v35 = 0;
    while ( v35 < max_length )
    {
      v36 = &baseValslist->obj.klass + (int)v35;
      v37 = (DataVals_o *)v36[4];
      if ( !v37 )
        goto LABEL_445;
      DataVals__loadActSet((DataVals_o *)v36[4], 0LL);
      this = (BattleLogicFunction_o *)DataVals__checkActSet(v37, 0LL);
      if ( ((unsigned __int8)this & 1) != 0 )
      {
        this = (BattleLogicFunction_o *)DataVals__getActSetWeight(v37, 0LL);
        if ( (int)this >= 1 )
        {
          ActSetWeight = DataVals__getActSetWeight(v37, 0LL);
          this = (BattleLogicFunction_o *)DataVals__getActSet(v37, 0LL);
          if ( !v33 )
            goto LABEL_445;
          WeightRate_int___setWeight(
            v33,
            ActSetWeight,
            (int32_t)this,
            (const MethodInfo_2CBBB94 *)Method_WeightRate_int__setWeight__);
        }
      }
      max_length = baseValslist->max_length;
      if ( (int)++v35 >= max_length )
        goto LABEL_27;
    }
LABEL_446:
    v324 = sub_B70798(this);
    sub_B70738(v324, 0LL);
  }
LABEL_27:
  if ( !v33 )
    goto LABEL_445;
  v39 = ServantData;
  if ( WeightRate_int___getCount(v33, (const MethodInfo_2CBBF34 *)Method_WeightRate_int__getCount__) >= 1 )
  {
    Random = BattleRandom__getRandom(0, v33->fields.totalweight, 0LL);
    *p_actSetId = WeightRate_int___getData(v33, Random, (const MethodInfo_2CBC018 *)Method_WeightRate_int__getData__);
    v41 = System_Int32__ToString((int32_t)p_actSetId, 0LL);
    System_String__Concat_44758168((System_String_o *)StringLiteral_1548/*">actSetId: "*/, v41, 0LL);
  }
  mainAction->fields.ActSetId = args->fields.actSetId;
  BattleActionData__initFuncTargetPlayerType(mainAction, funcIndex, 0LL);
  funcUnitArray_k__BackingField = (WellFired_USFGOPlayBgmEventConditional_CondBGM_array *)args->fields._funcUnitArray_k__BackingField;
  v43 = BattleLogicFunction___c_TypeInfo;
  if ( (BYTE3(BattleLogicFunction___c_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 )
  {
    v44 = isCommandSideEffect;
    if ( !BattleLogicFunction___c_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(BattleLogicFunction___c_TypeInfo);
      v43 = BattleLogicFunction___c_TypeInfo;
    }
  }
  else
  {
    v44 = isCommandSideEffect;
  }
  static_fields = v43->static_fields;
  _9__41_0 = (System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *)static_fields->__9__41_0;
  if ( !_9__41_0 )
  {
    if ( (BYTE3(v43->vtable._0_Equals.methodPtr) & 4) != 0 && !v43->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v43);
      static_fields = BattleLogicFunction___c_TypeInfo->static_fields;
    }
    v47 = (Il2CppObject *)static_fields->__9;
    _9__41_0 = (System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *)sub_B70764(System_Func_BattleLogicFunctionProcess_FunctionUnitCheck__bool__TypeInfo);
    System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool____ctor(
      _9__41_0,
      v47,
      Method_BattleLogicFunction___c__procList_b__41_0__,
      (const MethodInfo_29AC578 *)Method_System_Func_BattleLogicFunctionProcess_FunctionUnitCheck__bool___ctor__);
    v48 = BattleLogicFunction___c_TypeInfo->static_fields;
    v48->__9__41_0 = (struct System_Func_BattleLogicFunctionProcess_FunctionUnitCheck__bool__o *)_9__41_0;
    sub_B70630(
      (BattleServantConfConponent_o *)&v48->__9__41_0,
      (System_Int32_array **)_9__41_0,
      v49,
      v50,
      v51,
      v52,
      v53,
      v54);
    v44 = isCommandSideEffect;
  }
  if ( !BasicHelper__Any_USFGOPlayBgmEventConditional_CondBGM_(
          funcUnitArray_k__BackingField,
          (System_Func_T__bool__o *)_9__41_0,
          (const MethodInfo_1BDCB34 *)Method_BasicHelper_Any_BattleLogicFunctionProcess_FunctionUnitCheck___) )
    mainAction->fields.isSuccessTargetSelection = 1;
  v55 = BattleLogicFunction___c_TypeInfo;
  v56 = (System_Collections_Generic_IEnumerable_TSource__o *)args->fields._funcUnitArray_k__BackingField;
  if ( (BYTE3(BattleLogicFunction___c_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !BattleLogicFunction___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BattleLogicFunction___c_TypeInfo);
    v55 = BattleLogicFunction___c_TypeInfo;
  }
  v57 = v55->static_fields;
  _9__41_1 = (System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *)v57->__9__41_1;
  if ( !_9__41_1 )
  {
    if ( (BYTE3(v55->vtable._0_Equals.methodPtr) & 4) != 0 && !v55->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v55);
      v57 = BattleLogicFunction___c_TypeInfo->static_fields;
    }
    v59 = (Il2CppObject *)v57->__9;
    _9__41_1 = (System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *)sub_B70764(System_Func_BattleLogicFunctionProcess_FunctionUnitCheck__bool__TypeInfo);
    System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool____ctor(
      _9__41_1,
      v59,
      Method_BattleLogicFunction___c__procList_b__41_1__,
      (const MethodInfo_29AC578 *)Method_System_Func_BattleLogicFunctionProcess_FunctionUnitCheck__bool___ctor__);
    v60 = BattleLogicFunction___c_TypeInfo->static_fields;
    v60->__9__41_1 = (struct System_Func_BattleLogicFunctionProcess_FunctionUnitCheck__bool__o *)_9__41_1;
    sub_B70630(
      (BattleServantConfConponent_o *)&v60->__9__41_1,
      (System_Int32_array **)_9__41_1,
      v61,
      v62,
      v63,
      v64,
      v65,
      v66);
    v44 = isCommandSideEffect;
  }
  mainAction->fields.isSkillCopyFunctionOnly = System_Linq_Enumerable__All_WarBoardManager_WarBoardOnboardSkillTarget_(
                                                 v56,
                                                 (System_Func_TSource__bool__o *)_9__41_1,
                                                 (const MethodInfo_1CA7D8C *)Method_System_Linq_Enumerable_All_BattleLogicFunctionProcess_FunctionUnitCheck___);
  this = (BattleLogicFunction_o *)BattleLogicFunction_ProcListInArgs__MatchSkillType(args, 1, 0LL);
  if ( ((unsigned __int8)this & 1) != 0
    && (v67 = logic->fields.data,
        v68 = (SkillValueUpApplierPlayerMaster_o *)sub_B70764(SkillValueUpApplierPlayerMaster_TypeInfo),
        SkillValueUpApplierPlayerMaster___ctor(v68, v67, 0LL),
        v68) )
  {
    this = (BattleLogicFunction_o *)((__int64 (__fastcall *)(SkillValueUpApplierPlayerMaster_o *, Il2CppMethodPointer))v68->klass->vtable._4_Init.method)(
                                      v68,
                                      v68->klass->vtable._5_ApplyTo.methodPtr);
    v69 = v68;
    v339 = 1;
  }
  else
  {
    v339 = 0;
    v69 = 0LL;
  }
  v70 = args->fields._funcUnitArray_k__BackingField;
  if ( !v70 )
    goto LABEL_445;
  v71 = v70->max_length;
  if ( v71 >= 1 )
  {
    v336 = (BattleLogicFunction_o *)v69;
    v72 = 0LL;
    v73 = 0;
    v332[8] = 0;
    v338 = args->fields._funcUnitArray_k__BackingField;
    *(_QWORD *)v332 = ServantData == 0LL || !isTreasureDvc;
    while ( 1 )
    {
      if ( v73 >= (unsigned int)v71 )
        goto LABEL_446;
      v78 = v70->m_Items[v73];
      v343 = v73;
      if ( !v78 )
        goto LABEL_445;
      this = (BattleLogicFunction_o *)BattleLogicFunctionProcess_FunctionUnitCheck__get_FuncIndex(v78, 0LL);
      dataVals_k__BackingField = v78->fields._dataVals_k__BackingField;
      index = (int)this;
      if ( !dataVals_k__BackingField )
        goto LABEL_445;
      funcEnt = dataVals_k__BackingField->fields.funcEnt;
      funcUnit = v78;
      this = (BattleLogicFunction_o *)BattleLogicFunctionProcess_FunctionUnitCheck__checkCondtion(v78, mainAction, 0LL);
      if ( ((unsigned __int8)this & 1) == 0 )
        goto LABEL_398;
      if ( v339 )
      {
        this = v336;
        if ( !v336 )
          goto LABEL_445;
        this = (BattleLogicFunction_o *)((__int64 (__fastcall *)(BattleLogicFunction_o *, BattleLogicFunctionProcess_FunctionUnitCheck_o *, void *))v336->klass[1]._1.namespaze)(
                                          v336,
                                          v78,
                                          v336->klass[1]._1.byval_arg.data);
      }
      if ( isCreateSideEffect )
      {
        if ( !funcEnt )
          goto LABEL_445;
        this = (BattleLogicFunction_o *)BattleLogicFunction__IsAttackSideEffectInvokeFunc(
                                          this,
                                          funcEnt->fields.funcType,
                                          dataVals_k__BackingField,
                                          v80);
        if ( ((unsigned __int8)this & 1) != 0 )
        {
          v82 = BattleLogicFunction___c_TypeInfo;
          funcTargetArray_k__BackingField = (System_Collections_Generic_IEnumerable_TSource__o *)v78->fields._funcTargetArray_k__BackingField;
          if ( (BYTE3(BattleLogicFunction___c_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
            && !BattleLogicFunction___c_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(BattleLogicFunction___c_TypeInfo);
            v82 = BattleLogicFunction___c_TypeInfo;
          }
          v84 = v82->static_fields;
          _9__41_2 = (System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *)v84->__9__41_2;
          if ( !_9__41_2 )
          {
            if ( (BYTE3(v82->vtable._0_Equals.methodPtr) & 4) != 0 && !v82->_2.cctor_finished )
            {
              j_il2cpp_runtime_class_init_0(v82);
              v84 = BattleLogicFunction___c_TypeInfo->static_fields;
            }
            v86 = (Il2CppObject *)v84->__9;
            _9__41_2 = (System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *)sub_B70764(System_Func_BattleLogicFunctionProcess_FunctionTargetCheck__bool__TypeInfo);
            System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool____ctor(
              _9__41_2,
              v86,
              Method_BattleLogicFunction___c__procList_b__41_2__,
              (const MethodInfo_29AC578 *)Method_System_Func_BattleLogicFunctionProcess_FunctionTargetCheck__bool___ctor__);
            v87 = BattleLogicFunction___c_TypeInfo->static_fields;
            v87->__9__41_2 = (struct System_Func_BattleLogicFunctionProcess_FunctionTargetCheck__bool__o *)_9__41_2;
            sub_B70630(
              (BattleServantConfConponent_o *)&v87->__9__41_2,
              (System_Int32_array **)_9__41_2,
              v88,
              v89,
              v90,
              v91,
              v92,
              v93);
          }
          v94 = System_Linq_Enumerable__Where_WarBoardManager_WarBoardOnboardSkillTarget_(
                  funcTargetArray_k__BackingField,
                  (System_Func_TSource__bool__o *)_9__41_2,
                  (const MethodInfo_1CCCE44 *)Method_System_Linq_Enumerable_Where_BattleLogicFunctionProcess_FunctionTargetCheck___);
          v95 = BattleLogicFunction___c_TypeInfo;
          if ( (BYTE3(BattleLogicFunction___c_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
            && !BattleLogicFunction___c_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(BattleLogicFunction___c_TypeInfo);
            v95 = BattleLogicFunction___c_TypeInfo;
          }
          v96 = v95->static_fields;
          _9__41_3 = (System_Func_BattleLogicBuff_ReduceHpProcess_BuffInfo__int__o *)v96->__9__41_3;
          if ( !_9__41_3 )
          {
            if ( (BYTE3(v95->vtable._0_Equals.methodPtr) & 4) != 0 && !v95->_2.cctor_finished )
            {
              j_il2cpp_runtime_class_init_0(v95);
              v96 = BattleLogicFunction___c_TypeInfo->static_fields;
            }
            v98 = (Il2CppObject *)v96->__9;
            _9__41_3 = (System_Func_BattleLogicBuff_ReduceHpProcess_BuffInfo__int__o *)sub_B70764(System_Func_BattleLogicFunctionProcess_FunctionTargetCheck__int__TypeInfo);
            System_Func_BattleLogicBuff_ReduceHpProcess_BuffInfo__int____ctor(
              _9__41_3,
              v98,
              Method_BattleLogicFunction___c__procList_b__41_3__,
              (const MethodInfo_29AD124 *)Method_System_Func_BattleLogicFunctionProcess_FunctionTargetCheck__int___ctor__);
            v99 = BattleLogicFunction___c_TypeInfo->static_fields;
            v99->__9__41_3 = (struct System_Func_BattleLogicFunctionProcess_FunctionTargetCheck__int__o *)_9__41_3;
            sub_B70630(
              (BattleServantConfConponent_o *)&v99->__9__41_3,
              (System_Int32_array **)_9__41_3,
              v100,
              v101,
              v102,
              v103,
              v104,
              v105);
          }
          v106 = (System_Collections_Generic_IEnumerable_TSource__o *)System_Linq_Enumerable__Select_BattleLogicBuff_ReduceHpProcess_BuffInfo__int_(
                                                                        v94,
                                                                        (System_Func_TSource__TResult__o *)_9__41_3,
                                                                        (const MethodInfo_1CC3CC0 *)Method_System_Linq_Enumerable_Select_BattleLogicFunctionProcess_FunctionTargetCheck__int___);
          v107 = System_Linq_Enumerable__ToArray_int_(
                   v106,
                   (const MethodInfo_1CC85F0 *)Method_System_Linq_Enumerable_ToArray_int___);
          v108 = FuncList__Check(26, funcEnt->fields.funcType, 0LL);
          v109 = (BattleLogicFunction_PreAttackSideEffectMakeArgument_o *)sub_B70764(BattleLogicFunction_PreAttackSideEffectMakeArgument_TypeInfo);
          BattleLogicFunction_PreAttackSideEffectMakeArgument___ctor(v109, 0LL);
          if ( !v109 )
            goto LABEL_445;
          v110 = (BattleLogicFunction_SideEffectMakeArgument_o *)((__int64 (__fastcall *)(BattleLogicFunction_PreAttackSideEffectMakeArgument_o *, System_Int32_array *, Il2CppMethodPointer))v109->klass->vtable._6_Init.method)(
                                                                   v109,
                                                                   v107,
                                                                   v109->klass->vtable._7_MakeOnlyMainArgument.methodPtr);
          BattleLogicFunction__setAttackSideEffect(logic, mainAction, v39, v108 || isTreasureDvc, v110, v111);
        }
      }
      v112 = funcUnit->fields._funcTargetArray_k__BackingField;
      if ( !v112 )
        goto LABEL_445;
      v113 = v112->max_length;
      p_funcType = &funcEnt->fields.funcType;
      if ( v113 >= 1 )
      {
        for ( i = 0; i < v113; ++i )
        {
          if ( i >= (unsigned int)v113 )
            goto LABEL_446;
          v284 = v112->m_Items[i];
          if ( !v284 )
            goto LABEL_445;
          BattleLogicFunction__SetTargetFuncList(
            logic,
            v284->fields._targetId_k__BackingField,
            mainAction,
            dataVals_k__BackingField,
            v81);
          this = (BattleLogicFunction_o *)BattleLogicFunction_ProcListInArgs__get_FuncSideEffectArg(args, 0LL);
          if ( this )
            v72 = (BattleLogicFunction_FuncSideEffectFunctionArgument_o *)this;
          if ( this )
          {
            if ( !v72 )
              goto LABEL_445;
            BattleLogicFunction_FuncSideEffectFunctionArgument__AddTarget(v72, v284, 0LL);
          }
          if ( !v284->fields._result_k__BackingField )
          {
            NoEffectObject = BattleLogicFunctionProcess_FunctionTargetCheck__getInvalidObject(v284, 0LL);
            goto LABEL_341;
          }
          this = (BattleLogicFunction_o *)logic->fields.data;
          if ( !this )
            goto LABEL_445;
          targetId_k__BackingField = v284->fields._targetId_k__BackingField;
          this = (BattleLogicFunction_o *)BattleData__getServantData(
                                            (BattleData_o *)this,
                                            targetId_k__BackingField,
                                            0LL);
          if ( !this )
            goto LABEL_445;
          v286 = this;
          this = (BattleLogicFunction_o *)BattleServantData__CheckNotTargetSkill(
                                            (BattleServantData_o *)this,
                                            skillId,
                                            0LL);
          if ( ((unsigned __int8)this & 1) != 0 )
          {
            NoEffectObject = BattleLogicFunction__getNoEffectObject(
                               logic,
                               (int32_t)v286->fields.logic,
                               index,
                               dataVals_k__BackingField,
                               v44,
                               0LL,
                               0LL,
                               v287);
LABEL_341:
            BattleActionData__addAction(mainAction, NoEffectObject, 0LL);
            goto LABEL_389;
          }
          mainAction->fields.funcResult = 1;
          args->fields.tdCommandTypeChange = -1;
          if ( !funcEnt )
            goto LABEL_445;
          v120 = &funcEnt->fields.funcType;
          this = (BattleLogicFunction_o *)FuncList__Check(1, *p_funcType, 0LL);
          if ( ((unsigned __int8)this & 1) != 0
            || (this = (BattleLogicFunction_o *)FuncList__Check(16, *p_funcType, 0LL), ((unsigned __int8)this & 1) != 0) )
          {
            vals = funcEnt->fields.vals;
            if ( !vals )
              goto LABEL_445;
            if ( !vals->max_length )
              goto LABEL_446;
            this = (BattleLogicFunction_o *)MasterData_WarQuestSelectionMaster;
            if ( !MasterData_WarQuestSelectionMaster )
              goto LABEL_445;
            this = (BattleLogicFunction_o *)DataMasterBase_WarMaster__WarEntity__int___GetEntity(
                                              MasterData_WarQuestSelectionMaster,
                                              vals->m_Items[1],
                                              (const MethodInfo_21C0440 *)Method_DataMasterBase_BuffMaster__BuffEntity__int__GetEntity__);
            if ( !this )
              goto LABEL_445;
            commandType = 1;
            switch ( HIDWORD(this->fields.data) )
            {
              case 0x8F:
                commandType = mainAction->fields.commandType;
                goto LABEL_355;
              case 0x91:
                goto LABEL_355;
              case 0x92:
                commandType = 2;
                goto LABEL_355;
              case 0x93:
                commandType = 3;
LABEL_355:
                args->fields.tdCommandTypeChange = commandType;
                break;
              default:
                break;
            }
            v120 = &funcEnt->fields.funcType;
            v291 = FuncList__Check(16, *p_funcType, 0LL);
            BattleLogicFunction__functionAddState(logic, mainAction, v284, args, v291, v292);
            goto LABEL_377;
          }
          if ( FuncList__Check(2, *p_funcType, 0LL) )
          {
            v121 = BattleLogicFunction__functionSubState(
                     logic,
                     targetId_k__BackingField,
                     funcEnt,
                     dataVals_k__BackingField,
                     index,
                     v44,
                     &subBuffInfo,
                     args,
                     overwriteLossHp);
            goto LABEL_376;
          }
          if ( FuncList__Check(3, *p_funcType, 0LL) )
          {
            v294 = (int32_t)v286->fields.logic;
            playerIdb = mainAction->fields.actorId;
            isSafeDamage = BattleLogicFunction__isSafeDamage(
                             logic,
                             dataVals_k__BackingField,
                             targetId_k__BackingField,
                             v293);
            v296 = v294;
            v44 = isCommandSideEffect;
            v121 = BattleLogicFunction__functionDamage(
                     logic,
                     playerIdb,
                     v296,
                     dataVals_k__BackingField,
                     index,
                     mainAction,
                     isSafeDamage,
                     v297);
            goto LABEL_376;
          }
          if ( FuncList__Check(4, *p_funcType, 0LL) )
          {
            actorId = mainAction->fields.actorId;
            v300 = (int32_t)v286->fields.logic;
            v301 = 1;
            goto LABEL_375;
          }
          if ( FuncList__Check(14, *p_funcType, 0LL) )
          {
            actorId = mainAction->fields.actorId;
            v300 = (int32_t)v286->fields.logic;
            v301 = 2;
            goto LABEL_375;
          }
          if ( FuncList__Check(15, *p_funcType, 0LL) )
          {
            actorId = mainAction->fields.actorId;
            v300 = (int32_t)v286->fields.logic;
            v301 = 3;
            goto LABEL_375;
          }
          if ( FuncList__Check(18, *p_funcType, 0LL) )
          {
            actorId = mainAction->fields.actorId;
            v300 = (int32_t)v286->fields.logic;
            v301 = 4;
            goto LABEL_375;
          }
          if ( FuncList__Check(27, *p_funcType, 0LL) )
          {
            actorId = mainAction->fields.actorId;
            v300 = (int32_t)v286->fields.logic;
            v301 = 7;
            goto LABEL_375;
          }
          if ( FuncList__Check(21, *p_funcType, 0LL) )
          {
            actorId = mainAction->fields.actorId;
            v300 = (int32_t)v286->fields.logic;
            v301 = 5;
            goto LABEL_375;
          }
          if ( FuncList__Check(22, *p_funcType, 0LL) )
          {
            actorId = mainAction->fields.actorId;
            v300 = (int32_t)v286->fields.logic;
            v301 = 6;
            goto LABEL_375;
          }
          if ( FuncList__Check(28, *p_funcType, 0LL) )
          {
            actorId = mainAction->fields.actorId;
            v300 = (int32_t)v286->fields.logic;
            v301 = 8;
LABEL_375:
            v121 = BattleLogicFunction__functionNPDamage(
                     logic,
                     actorId,
                     v300,
                     dataVals_k__BackingField,
                     index,
                     v301,
                     mainAction,
                     v298);
LABEL_376:
            BattleActionData__addAction(mainAction, v121, 0LL);
            goto LABEL_377;
          }
          if ( FuncList__Check(5, *p_funcType, 0LL) )
          {
            v115 = logic->fields.data;
            Value = DataVals__GetValue(dataVals_k__BackingField, 0LL);
            this = (BattleLogicFunction_o *)DataVals__isMultipleGainStar(dataVals_k__BackingField, 0LL);
            if ( !v115 )
              goto LABEL_445;
            BattleData__addCriticalPoint(v115, Value, (unsigned __int8)this & 1, 0LL);
LABEL_107:
            this = (BattleLogicFunction_o *)BattleLogicFunction__getFunctionObject(
                                              v117,
                                              funcEnt,
                                              (int32_t)v286->fields.logic,
                                              index,
                                              v44,
                                              0LL,
                                              v118);
            if ( !this )
              goto LABEL_445;
            HIDWORD(this->fields.logic) = 4;
            BattleActionData__setBuffData(
              mainAction,
              (BattleActionData_BuffData_o *)this,
              dataVals_k__BackingField,
              0LL);
            this = (BattleLogicFunction_o *)logic->fields.data;
            if ( !this )
              goto LABEL_445;
            BattleData__AddPerformedVals((BattleData_o *)this, dataVals_k__BackingField, 0LL);
            goto LABEL_110;
          }
          if ( FuncList__Check(31, *p_funcType, 0LL) )
          {
            v119 = logic->fields.data;
            this = (BattleLogicFunction_o *)DataVals__GetValue(dataVals_k__BackingField, 0LL);
            if ( !v119 )
              goto LABEL_445;
            BattleData__lossCriticalPoint(v119, (int32_t)this, 0LL);
            goto LABEL_107;
          }
          if ( FuncList__Check(6, *p_funcType, 0LL) )
          {
            v121 = BattleLogicFunction__functionGainHp(
                     logic,
                     mainAction->fields.actorId,
                     targetId_k__BackingField,
                     funcEnt,
                     dataVals_k__BackingField,
                     index,
                     v44,
                     -1,
                     overwriteLossHp);
            goto LABEL_376;
          }
          if ( FuncList__Check(17, *p_funcType, 0LL) )
          {
            v121 = BattleLogicFunction__functionGainHpPer(
                     logic,
                     mainAction->fields.actorId,
                     targetId_k__BackingField,
                     funcEnt,
                     dataVals_k__BackingField,
                     index,
                     v44,
                     v122);
            goto LABEL_376;
          }
          if ( FuncList__Check(7, *p_funcType, 0LL) )
          {
            if ( BattleServantData__checkPlayer((BattleServantData_o *)v286, 0LL) )
            {
              isUnaffected = DataVals__isUnaffected(dataVals_k__BackingField, 0LL);
              CorrectedValueFuncGainNp = DataVals__GetValue(dataVals_k__BackingField, 0LL);
              if ( !isUnaffected )
                CorrectedValueFuncGainNp = BattleServantData__getCorrectedValueFuncGainNp(
                                             (BattleServantData_o *)v286,
                                             CorrectedValueFuncGainNp,
                                             0LL);
              if ( !BattleServantData__isGainNp((BattleServantData_o *)v286, 1, 0LL) )
              {
                v44 = isCommandSideEffect;
                v142 = (int32_t)v286->fields.logic;
                v143 = logic;
                v144 = index;
                v145 = isCommandSideEffect;
                v146 = dataVals_k__BackingField;
                goto LABEL_141;
              }
              v126 = (BattleLogicFunction_o *)BattleServantData__addNp(
                                                (BattleServantData_o *)v286,
                                                CorrectedValueFuncGainNp,
                                                0,
                                                0LL);
              v127 = (int)v126;
              this = (BattleLogicFunction_o *)BattleLogicFunction__getFunctionObject(
                                                v126,
                                                funcEnt,
                                                (int32_t)v286->fields.logic,
                                                index,
                                                isCommandSideEffect,
                                                0LL,
                                                v128);
              if ( !this )
                goto LABEL_445;
              v129 = this;
              HIDWORD(this->fields.logic) = 3;
              BattleActionData_BuffData__setSaveNp((BattleActionData_BuffData_o *)this, v127, 0LL);
              if ( isCommandSideEffect )
                BYTE2(v129->fields.wkStr) = 1;
              v130 = mainAction;
              v131 = (BattleActionData_BuffData_o *)v129;
              v132 = dataVals_k__BackingField;
              goto LABEL_124;
            }
          }
          else
          {
            if ( FuncList__Check(8, *p_funcType, 0LL) )
            {
              if ( BattleServantData__checkPlayer((BattleServantData_o *)v286, 0LL) )
              {
                v133 = DataVals__GetValue(dataVals_k__BackingField, 0LL);
                v134 = (BattleLogicFunction_o *)BattleServantData__addNp((BattleServantData_o *)v286, -v133, 0, 0LL);
                v135 = (int)v134;
                this = (BattleLogicFunction_o *)BattleLogicFunction__getFunctionObject(
                                                  v134,
                                                  funcEnt,
                                                  (int32_t)v286->fields.logic,
                                                  index,
                                                  isCommandSideEffect,
                                                  0LL,
                                                  v136);
                if ( !this )
                  goto LABEL_445;
                v137 = (BattleActionData_BuffData_o *)this;
                HIDWORD(this->fields.logic) = 3;
                BattleActionData_BuffData__setSaveNp((BattleActionData_BuffData_o *)this, v135, 0LL);
                BattleActionData__setBuffData(mainAction, v137, dataVals_k__BackingField, 0LL);
              }
              v44 = isCommandSideEffect;
              v120 = &funcEnt->fields.funcType;
              goto LABEL_377;
            }
            if ( FuncList__Check(9, *p_funcType, 0LL) )
            {
              v138 = DataVals__GetValue2(dataVals_k__BackingField, 0LL) - 1;
              TargetList = DataVals__GetTargetList(dataVals_k__BackingField, 0LL);
              v140 = DataVals__GetValue(dataVals_k__BackingField, 0LL);
              this = (BattleLogicFunction_o *)BattleServantData__skillChageShorten(
                                                (BattleServantData_o *)v286,
                                                v140,
                                                0,
                                                v138,
                                                TargetList,
                                                0LL);
LABEL_136:
              v150 = (int32_t)v286->fields.logic;
              if ( ((unsigned __int8)this & 1) == 0 )
              {
                v44 = isCommandSideEffect;
                v143 = logic;
                v142 = (int32_t)v286->fields.logic;
                goto LABEL_140;
              }
LABEL_137:
              v44 = isCommandSideEffect;
              FunctionObject = BattleLogicFunction__getFunctionObject(
                                 this,
                                 funcEnt,
                                 v150,
                                 index,
                                 isCommandSideEffect,
                                 0LL,
                                 v141);
              v152 = mainAction;
              v153 = dataVals_k__BackingField;
LABEL_138:
              BattleActionData__setBuffData(v152, FunctionObject, v153, 0LL);
              goto LABEL_110;
            }
            if ( FuncList__Check(10, *p_funcType, 0LL) )
            {
              v147 = DataVals__GetValue2(dataVals_k__BackingField, 0LL) - 1;
              v148 = DataVals__GetTargetList(dataVals_k__BackingField, 0LL);
              v149 = DataVals__GetValue(dataVals_k__BackingField, 0LL);
              this = (BattleLogicFunction_o *)BattleServantData__skillChageExtend(
                                                (BattleServantData_o *)v286,
                                                v149,
                                                999,
                                                v147,
                                                v148,
                                                0LL);
              goto LABEL_136;
            }
            if ( FuncList__Check(12, *p_funcType, 0LL) )
            {
              v157 = mainAction->fields.actorId;
              v44 = isCommandSideEffect;
              v158 = BattleLogicFunction__isSafeDamage(logic, dataVals_k__BackingField, targetId_k__BackingField, v156);
              v155 = BattleLogicFunction__functionlossHp(
                       logic,
                       v157,
                       targetId_k__BackingField,
                       funcEnt,
                       dataVals_k__BackingField,
                       index,
                       v158,
                       isCommandSideEffect,
                       -1,
                       1,
                       mainAction,
                       v328);
              goto LABEL_143;
            }
            if ( FuncList__Check(25, *p_funcType, 0LL) )
            {
              v44 = isCommandSideEffect;
              v155 = BattleLogicFunction__functionlossHp(
                       logic,
                       mainAction->fields.actorId,
                       targetId_k__BackingField,
                       funcEnt,
                       dataVals_k__BackingField,
                       index,
                       1,
                       isCommandSideEffect,
                       -1,
                       1,
                       mainAction,
                       v328);
              goto LABEL_143;
            }
            if ( FuncList__Check(13, *p_funcType, 0LL) )
            {
              v44 = isCommandSideEffect;
              v155 = BattleLogicFunction__functionInstantDeath(
                       logic,
                       mainAction->fields.actorId,
                       targetId_k__BackingField,
                       funcEnt,
                       dataVals_k__BackingField,
                       index,
                       isCommandSideEffect,
                       0,
                       funcUnit,
                       isRandomDamage);
              goto LABEL_143;
            }
            if ( FuncList__Check(19, *p_funcType, 0LL) )
            {
              v44 = isCommandSideEffect;
              v155 = BattleLogicFunction__functionHastenNpTurn(
                       logic,
                       targetId_k__BackingField,
                       funcEnt,
                       dataVals_k__BackingField,
                       index,
                       isCommandSideEffect,
                       -1,
                       v159);
              goto LABEL_143;
            }
            if ( FuncList__Check(20, *p_funcType, 0LL) )
            {
              v44 = isCommandSideEffect;
              v155 = BattleLogicFunction__functionDelayNpTurn(
                       logic,
                       targetId_k__BackingField,
                       funcEnt,
                       dataVals_k__BackingField,
                       index,
                       isCommandSideEffect,
                       &absorptionCount,
                       v160);
              goto LABEL_143;
            }
            if ( FuncList__Check(56, *p_funcType, 0LL) )
            {
              v44 = isCommandSideEffect;
              v155 = BattleLogicFunction__functionAbsorbNpTurn(
                       logic,
                       targetId_k__BackingField,
                       funcEnt,
                       mainAction,
                       v284,
                       isCommandSideEffect,
                       v161);
              goto LABEL_143;
            }
            if ( FuncList__Check(23, *p_funcType, 0LL) )
            {
              v167 = logic;
              v168 = BattleLogicFunction__functionResetCommandCard(logic, v162, v163, v164, v165, v166);
LABEL_158:
              BattleActionData__addAction(mainAction, v168, 0LL);
              this = (BattleLogicFunction_o *)v167->fields.data;
              if ( !this )
                goto LABEL_445;
              BattleData__AddPerformedVals((BattleData_o *)this, dataVals_k__BackingField, 0LL);
              goto LABEL_125;
            }
            if ( !FuncList__Check(24, *p_funcType, 0LL) )
            {
              if ( FuncList__Check(109, *p_funcType, 0LL) )
              {
                v176 = BattleLogicFunction__functionTransformServant(
                         logic,
                         targetId_k__BackingField,
                         v174,
                         dataVals_k__BackingField,
                         index,
                         args,
                         v175);
                goto LABEL_169;
              }
              if ( FuncList__Check(26, *p_funcType, 0LL) )
              {
                v178 = BattleLogicFunction__functionReflection(
                         logic,
                         mainAction->fields.actorId,
                         (int32_t)v286->fields.logic,
                         dataVals_k__BackingField,
                         index,
                         v177);
                BattleActionData__addAction(mainAction, v178, 0LL);
                v332[4] = 1;
                goto LABEL_125;
              }
              if ( FuncList__Check(29, *p_funcType, 0LL) )
              {
                v44 = isCommandSideEffect;
                v155 = BattleLogicFunction__functionCallServant(
                         logic,
                         mainAction->fields.actorId,
                         v179,
                         dataVals_k__BackingField,
                         index,
                         isCommandSideEffect,
                         v180);
                goto LABEL_143;
              }
              if ( FuncList__Check(30, *p_funcType, 0LL) )
              {
                v186 = BattleLogicFunction__functionPtShuffle(logic, v181, v182, v183, v184, v185);
                BattleActionData__addAction(mainAction, v186, 0LL);
                this = (BattleLogicFunction_o *)logic->fields.data;
                if ( !this )
                  goto LABEL_445;
                BattleData__AddPerformedVals((BattleData_o *)this, dataVals_k__BackingField, 0LL);
                goto LABEL_175;
              }
              if ( FuncList__Check(32, *p_funcType, 0LL) )
              {
                v176 = BattleLogicFunction__functionChangeServant(
                         logic,
                         mainAction->fields.actorId,
                         targetId_k__BackingField,
                         v187,
                         dataVals_k__BackingField,
                         v188,
                         v189);
                goto LABEL_169;
              }
              v190 = FuncList__Check(33, *p_funcType, 0LL);
              if ( v190 )
              {
                v176 = BattleLogicFunction__functionChangeBg(
                         (BattleLogicFunction_o *)v190,
                         mainAction->fields.actorId,
                         v191,
                         dataVals_k__BackingField,
                         v192,
                         v193);
                goto LABEL_169;
              }
              if ( FuncList__Check(34, *p_funcType, 0LL) )
              {
                v195 = mainAction->fields.actorId;
                v196 = (int32_t)v286->fields.logic;
                v197 = BattleLogicFunction__isSafeDamage(
                         logic,
                         dataVals_k__BackingField,
                         targetId_k__BackingField,
                         v194);
                v199 = logic;
                goto LABEL_182;
              }
              if ( FuncList__Check(122, *p_funcType, 0LL) )
              {
                v200 = mainAction->fields.actorId;
                v201 = (int32_t)v286->fields.logic;
                v199 = logic;
                v197 = 1;
                goto LABEL_185;
              }
              if ( FuncList__Check(35, *p_funcType, 0LL) )
              {
                BYTE1(v286[9].monitor) = 1;
                goto LABEL_125;
              }
              this = (BattleLogicFunction_o *)FuncList__Check(36, *p_funcType, 0LL);
              if ( ((unsigned __int8)this & 1) != 0 )
              {
                v208 = logic->fields.data;
                if ( !v208 )
                  goto LABEL_445;
                draw_commandlist = (System_Int32_array **)v208->fields.draw_commandlist;
                v208->fields.fixedCommands = (struct BattleCommandData_array *)draw_commandlist;
                sub_B70630(
                  (BattleServantConfConponent_o *)&v208->fields.fixedCommands,
                  draw_commandlist,
                  v202,
                  v203,
                  v204,
                  v205,
                  v206,
                  v207);
LABEL_191:
                v150 = (int32_t)v286->fields.logic;
                goto LABEL_137;
              }
              if ( FuncList__Check(37, *p_funcType, 0LL)
                || FuncList__Check(38, *p_funcType, 0LL)
                || FuncList__Check(39, *p_funcType, 0LL)
                || FuncList__Check(40, *p_funcType, 0LL) )
              {
                v210 = DataVals__GetValue(dataVals_k__BackingField, 0LL);
                if ( FuncList__Check(37, *p_funcType, 0LL) || FuncList__Check(39, *p_funcType, 0LL) )
                  v210 = -v210;
                if ( FuncList__Check(37, *p_funcType, 0LL) || FuncList__Check(38, *p_funcType, 0LL) )
                {
                  v210 *= 2;
                  playerId = 1;
                }
                else
                {
                  playerId = 0;
                }
                isParam = DataVals__isParam(dataVals_k__BackingField, 90, 0LL);
                v211 = DataVals__isParam(dataVals_k__BackingField, 149, 0LL);
                v212 = 0LL;
                if ( v211 )
                {
                  v212 = (BattleServantSnapShotOnBuffUpdate_o *)sub_B70764(BattleServantSnapShotOnBuffUpdate_TypeInfo);
                  BattleServantSnapShotOnBuffUpdate___ctor(v212, (BattleServantData_o *)v286, 0LL);
                }
                v213 = DataVals__GetTargetList(dataVals_k__BackingField, 0LL);
                this = (BattleLogicFunction_o *)BattleServantData__ChangeBuffValue(
                                                  (BattleServantData_o *)v286,
                                                  v210,
                                                  v213,
                                                  playerId,
                                                  1,
                                                  v211,
                                                  &buffsToRemove,
                                                  isParam,
                                                  0LL);
                if ( ((unsigned __int8)this & 1) == 0 )
                  goto LABEL_236;
                if ( v211 )
                {
                  action = (BattleActionData_o *)buffsToRemove;
                  if ( !buffsToRemove )
                    goto LABEL_445;
                  if ( buffsToRemove->fields._count >= 1 )
                  {
                    this = (BattleLogicFunction_o *)v286[8].fields.buffProgressTurnSelfList;
                    if ( !this )
                      goto LABEL_445;
                    this = (BattleLogicFunction_o *)BattleBuffData__SubBuffSpecified(
                                                      (BattleBuffData_o *)this,
                                                      buffsToRemove,
                                                      1,
                                                      0LL);
                    if ( !this )
                      goto LABEL_445;
                    v44 = isCommandSideEffect;
                    BattleLogicFunction__ApplySubBuffChanges(
                      logic,
                      mainAction,
                      (System_Collections_Generic_List_BattleBuffData_BuffData__o *)this->fields.data,
                      targetId_k__BackingField,
                      v212,
                      dataVals_k__BackingField,
                      index,
                      isCommandSideEffect,
                      args,
                      isRandomDamage);
                    goto LABEL_110;
                  }
                }
                goto LABEL_191;
              }
              if ( FuncList__Check(41, *p_funcType, 0LL) )
              {
                playerIda = logic->fields.data;
                v214 = DataVals__GetValue(dataVals_k__BackingField, 0LL);
                v215 = (Generator_BGMFromChangeBGMFunc_o *)sub_B70764(Generator_BGMFromChangeBGMFunc_TypeInfo);
                Generator_BGMFromChangeBGMFunc___ctor(v215, playerIda, v214, dataVals_k__BackingField, 0, 0LL);
                BattleLogicFunction__FunctionChangeBgm(logic, args, (Generator_BGM_o *)v215, v216);
                goto LABEL_125;
              }
              v217 = FuncList__Check(42, *p_funcType, 0LL);
              if ( v217 )
              {
                v44 = isCommandSideEffect;
                FunctionObject = BattleLogicFunction__getFunctionObject(
                                   (BattleLogicFunction_o *)v217,
                                   funcEnt,
                                   (int32_t)v286->fields.logic,
                                   index,
                                   isCommandSideEffect,
                                   0LL,
                                   v218);
                v152 = mainAction;
                v153 = 0LL;
                goto LABEL_138;
              }
              if ( FuncList__Check(43, *p_funcType, 0LL) )
              {
                v44 = isCommandSideEffect;
                v155 = BattleLogicFunction__functionResurrection(
                         logic,
                         (int32_t)v286->fields.logic,
                         index,
                         funcEnt,
                         dataVals_k__BackingField,
                         isCommandSideEffect,
                         v219);
                goto LABEL_143;
              }
              if ( FuncList__Check(44, *p_funcType, 0LL) || FuncList__Check(133, *p_funcType, 0LL) )
              {
                v220 = funcEnt->fields.vals;
                if ( FuncList__Check(44, funcEnt->fields.funcType, 0LL) )
                {
                  SameIndiualityBuffSum = BattleServantData__getSameIndiualityBuffSum(
                                            (BattleServantData_o *)v286,
                                            v220,
                                            1,
                                            0,
                                            0,
                                            0LL);
                  goto LABEL_224;
                }
                if ( FuncList__Check(133, *p_funcType, 0LL) )
                {
                  SameIndiualityBuffSum = GainNpIndividualSum__GetSameIndiualitySum(
                                            logic->fields.data,
                                            *p_actorId,
                                            (int32_t)v286->fields.logic,
                                            dataVals_k__BackingField,
                                            funcEnt,
                                            0LL);
LABEL_224:
                  v222 = SameIndiualityBuffSum;
                }
                else
                {
                  v222 = 0;
                }
                v223 = DataVals__GetValue(dataVals_k__BackingField, 0LL) * v222;
                if ( !DataVals__isUnaffected(dataVals_k__BackingField, 0LL) )
                  v223 = BattleServantData__getCorrectedValueFuncGainNp((BattleServantData_o *)v286, v223, 0LL);
                isGainNp = BattleServantData__isGainNp((BattleServantData_o *)v286, 1, 0LL);
                if ( v223 < 1 || !isGainNp )
                {
LABEL_236:
                  v142 = (int32_t)v286->fields.logic;
                  goto LABEL_237;
                }
                v225 = (BattleLogicFunction_o *)BattleServantData__addNp((BattleServantData_o *)v286, v223, 0, 0LL);
                v226 = (int)v225;
                this = (BattleLogicFunction_o *)BattleLogicFunction__getFunctionObject(
                                                  v225,
                                                  funcEnt,
                                                  (int32_t)v286->fields.logic,
                                                  index,
                                                  isCommandSideEffect,
                                                  0LL,
                                                  v227);
                if ( !this )
                  goto LABEL_445;
                v228 = this;
                HIDWORD(this->fields.logic) = 3;
                BattleActionData_BuffData__setSaveNp((BattleActionData_BuffData_o *)this, v226, 0LL);
                if ( isCommandSideEffect )
                  BYTE2(v228->fields.wkStr) = 1;
              }
              else
              {
                if ( FuncList__Check(45, *p_funcType, 0LL) )
                {
                  BYTE3(v286[9].monitor) = DataVals__GetValue(dataVals_k__BackingField, 0LL) == 1;
                  goto LABEL_125;
                }
                if ( FuncList__Check(46, *p_funcType, 0LL) )
                {
                  v44 = isCommandSideEffect;
                  v155 = BattleLogicFunction__functionInstantDeath(
                           logic,
                           mainAction->fields.actorId,
                           targetId_k__BackingField,
                           funcEnt,
                           dataVals_k__BackingField,
                           index,
                           isCommandSideEffect,
                           1,
                           funcUnit,
                           isRandomDamage);
                  goto LABEL_143;
                }
                if ( FuncList__Check(47, *p_funcType, 0LL) )
                {
                  v230 = mainAction->fields.actorId;
                  v231 = (int32_t)v286->fields.logic;
                  v232 = 9;
                  goto LABEL_242;
                }
                if ( FuncList__Check(48, *p_funcType, 0LL) )
                {
                  v176 = BattleLogicFunction__functionGainNpFromTargets(logic, args, mainAction, v284, v233);
                  goto LABEL_169;
                }
                if ( FuncList__Check(49, *p_funcType, 0LL) )
                {
                  v176 = BattleLogicFunction__functionGainHpFromTargets(logic, args, mainAction, v284, v234);
                  goto LABEL_169;
                }
                v235 = FuncList__Check(50, *p_funcType, 0LL);
                if ( v235 || (v235 = FuncList__Check(51, *p_funcType, 0LL)) )
                {
                  v237 = *p_funcType == 51;
                  if ( *p_funcType == 50 )
                  {
                    v235 = BattleLogicFunction__isSafeDamage(
                             logic,
                             dataVals_k__BackingField,
                             targetId_k__BackingField,
                             v236);
                    v237 = v235;
                  }
                  v238 = mainAction->fields.actorId;
                  overwriteLossHpa = BattleLogicFunction__getHpPerValue(
                                       (BattleLogicFunction_o *)v235,
                                       dataVals_k__BackingField,
                                       (BattleServantData_o *)v286,
                                       v236);
                  v239 = v238;
                  v44 = isCommandSideEffect;
                  v155 = BattleLogicFunction__functionlossHp(
                           logic,
                           v239,
                           targetId_k__BackingField,
                           funcEnt,
                           dataVals_k__BackingField,
                           index,
                           v237,
                           isCommandSideEffect,
                           overwriteLossHpa,
                           0,
                           mainAction,
                           v328);
                  goto LABEL_143;
                }
                if ( FuncList__Check(52, *p_funcType, 0LL) )
                {
                  v241 = logic;
                  v242 = 1;
                  v243 = dataVals_k__BackingField;
LABEL_256:
                  updated = BattleLogicFunction__UpdateUserEquipSkillChargeTurn(v241, v243, v242, v240);
                  if ( updated )
                  {
                    v44 = isCommandSideEffect;
                    BattleLogicFunction__CreateMasterBuffEffect(
                      (BattleLogicFunction_o *)updated,
                      mainAction,
                      funcEnt,
                      index,
                      isCommandSideEffect,
                      dataVals_k__BackingField,
                      v245);
                    goto LABEL_110;
                  }
                  v246 = (BattleActionData_MasterBuffData_o *)sub_B70764(BattleActionData_MasterBuffData_TypeInfo);
                  BattleActionData_MasterBuffData___ctor(v246, funcEnt, 0LL);
                  if ( !v246 )
                    goto LABEL_445;
                  v246->fields.popColor = 1;
                  v44 = isCommandSideEffect;
                  v142 = v284->fields._targetId_k__BackingField;
                  v143 = logic;
                  v144 = index;
                  v145 = isCommandSideEffect;
                  v146 = dataVals_k__BackingField;
                  v154 = (BattleActionData_BuffData_o *)v246;
                  goto LABEL_142;
                }
                if ( FuncList__Check(62, *p_funcType, 0LL) )
                {
                  v241 = logic;
                  v243 = dataVals_k__BackingField;
                  v242 = 0;
                  goto LABEL_256;
                }
                if ( FuncList__Check(53, *p_funcType, 0LL) )
                {
                  v247 = (Generator_BGFromQuickChangeBGFunc_o *)sub_B70764(Generator_BGFromQuickChangeBGFunc_TypeInfo);
                  Generator_BGFromQuickChangeBGFunc___ctor(v247, dataVals_k__BackingField, 0LL);
                  BattleLogicFunction__FunctionQuickChangeBG(logic, args, (Generator_Background_o *)v247, v248);
                  goto LABEL_125;
                }
                if ( FuncList__Check(54, *p_funcType, 0LL) )
                {
                  this = (BattleLogicFunction_o *)v286[2].fields.buffProgressTurnOpponentList;
                  if ( !this )
                    goto LABEL_445;
                  if ( ServantEntity__isInvalidSkillShift((ServantEntity_o *)this, 0LL) )
                  {
                    v142 = v284->fields._targetId_k__BackingField;
LABEL_237:
                    v44 = isCommandSideEffect;
                    v143 = logic;
LABEL_140:
                    v145 = v44;
                    v144 = index;
                    v146 = dataVals_k__BackingField;
LABEL_141:
                    v154 = 0LL;
LABEL_142:
                    v155 = BattleLogicFunction__getNoEffectObject(v143, v142, v144, v146, v145, 0LL, v154, v125);
LABEL_143:
                    BattleActionData__addAction(mainAction, v155, 0LL);
                    goto LABEL_110;
                  }
                  Param = DataVals__GetParam(dataVals_k__BackingField, 53, 0, 0LL);
                  BattleLogicFunction__functionShiftServant(logic, mainAction, (BattleServantData_o *)v286, Param, v250);
                  goto LABEL_125;
                }
                if ( FuncList__Check(55, *p_funcType, 0LL) )
                {
                  v230 = mainAction->fields.actorId;
                  v231 = (int32_t)v286->fields.logic;
                  v232 = 10;
                  goto LABEL_242;
                }
                if ( FuncList__Check(57, *p_funcType, 0LL) )
                {
                  LODWORD(v286[6].fields.wkStr) = DataVals__GetValue(dataVals_k__BackingField, 0LL);
                  goto LABEL_125;
                }
                if ( FuncList__Check(58, *p_funcType, 0LL) )
                {
                  buffProgressTurnSelfList = (BattleBuffData_o *)v286[8].fields.buffProgressTurnSelfList;
                  this = (BattleLogicFunction_o *)DataVals__GetParam(dataVals_k__BackingField, 14, 0, 0LL);
                  if ( !buffProgressTurnSelfList )
                    goto LABEL_445;
                  BattleBuffData__UpdateForceAllBuffNoAct(buffProgressTurnSelfList, (int32_t)this, 0LL);
                  goto LABEL_191;
                }
                if ( FuncList__Check(59, *p_funcType, 0LL) )
                {
                  v252 = (BattleActionData_UpShiftGaugeData_o *)sub_B70764(BattleActionData_UpShiftGaugeData_TypeInfo);
                  BattleActionData_UpShiftGaugeData___ctor(v252, 0LL);
LABEL_278:
                  BattleLogicFunction__functionBreakGaugeChange(
                    logic,
                    mainAction,
                    funcUnit,
                    (BattleServantData_o *)v286,
                    (BattleActionData_BaseShiftGaugeData_o *)v252,
                    v253);
                  goto LABEL_125;
                }
                if ( FuncList__Check(60, *p_funcType, 0LL) )
                {
                  v252 = (BattleActionData_UpShiftGaugeData_o *)sub_B70764(BattleActionData_DownShiftGaugeData_TypeInfo);
                  BattleActionData_DownShiftGaugeData___ctor((BattleActionData_DownShiftGaugeData_o *)v252, 0LL);
                  goto LABEL_278;
                }
                if ( FuncList__Check(61, *p_funcType, 0LL) )
                {
                  SubMember = BattleLogicFunction__FunctionMoveToLastSubMember(
                                logic,
                                (BattleServantData_o *)v286,
                                funcEnt,
                                v254,
                                index,
                                v255);
                  BattleActionData__addAction(mainAction, SubMember, 0LL);
                  BattleActionData__UpdateForceBuffEffectAllTrue(mainAction, 0LL);
LABEL_175:
                  v332[8] = 1;
                  goto LABEL_125;
                }
                if ( FuncList__Check(119, *p_funcType, 0LL) )
                {
                  BattleLogicFunction__functionMovePosition(logic, mainAction, (BattleServantData_o *)v286, v257);
                  goto LABEL_125;
                }
                if ( FuncList__Check(120, *p_funcType, 0LL) )
                {
                  v44 = isCommandSideEffect;
                  BattleLogicFunction__functionRevival(
                    logic,
                    mainAction,
                    funcEnt,
                    dataVals_k__BackingField,
                    index,
                    isCommandSideEffect,
                    v258);
                  goto LABEL_110;
                }
                if ( FuncList__Check(121, *p_funcType, 0LL) )
                {
                  v230 = mainAction->fields.actorId;
                  v231 = (int32_t)v286->fields.logic;
                  v232 = 11;
LABEL_242:
                  v176 = BattleLogicFunction__functionNPDamage(
                           logic,
                           v230,
                           v231,
                           dataVals_k__BackingField,
                           index,
                           v232,
                           mainAction,
                           v229);
LABEL_169:
                  BattleActionData__addAction(mainAction, v176, 0LL);
                  goto LABEL_125;
                }
                if ( FuncList__Check(124, *p_funcType, 0LL) )
                {
                  BattleLogicFunction__functionMoveState(logic, args, mainAction, v284, v259);
                  goto LABEL_125;
                }
                if ( FuncList__Check(125, *p_funcType, 0LL) )
                {
                  BattleLogicFunction__ChangeBGMCostume(logic, dataVals_k__BackingField, mainAction, v260);
                  goto LABEL_125;
                }
                v261 = FuncList__Check(126, *p_funcType, 0LL);
                if ( v261 )
                {
                  BattleLogicFunction__LossCommandSpell(
                    (BattleLogicFunction_o *)v261,
                    dataVals_k__BackingField,
                    mainAction,
                    v262);
                  goto LABEL_125;
                }
                if ( FuncList__Check(127, *p_funcType, 0LL) )
                  goto LABEL_125;
                if ( FuncList__Check(128, *p_funcType, 0LL) )
                {
                  BattleLogicFunction__FunctionUpdateEntryPositions(logic, dataVals_k__BackingField, v263);
                  goto LABEL_125;
                }
                if ( FuncList__Check(63, *p_funcType, 0LL) )
                {
                  BattleLogicFunction__FunctionUpdateEntryMaxCountEachTurn(logic, dataVals_k__BackingField, v264);
                  goto LABEL_125;
                }
                if ( FuncList__Check(130, *p_funcType, 0LL) )
                {
                  BattleLogicFunction__FunctionToFieldAddChangeFieldBuff(
                    logic,
                    args,
                    mainAction,
                    v284,
                    isTreasureDvc,
                    v265);
                  goto LABEL_125;
                }
                if ( FuncList__Check(131, *p_funcType, 0LL) )
                {
                  BattleLogicFunction__FunctionSubFieldBuff(logic, args, mainAction, v284, v266);
                  goto LABEL_125;
                }
                if ( FuncList__Check(134, *p_funcType, 0LL) )
                {
                  this = (BattleLogicFunction_o *)DataVals__GetValue(dataVals_k__BackingField, 0LL);
                  if ( !logic->fields.data )
                    goto LABEL_445;
                  BattleData__AddQuestRouteId(logic->fields.data, (int32_t)this, 0LL);
                  goto LABEL_125;
                }
                if ( FuncList__Check(135, *p_funcType, 0LL) )
                {
                  BattleLogicFunction__FunctionLastSkillCopy(logic, mainAction, dataVals_k__BackingField, args, v267);
                  goto LABEL_125;
                }
                if ( FuncList__Check(136, *p_funcType, 0LL) )
                {
                  v268 = DataVals__GetValue(dataVals_k__BackingField, 0LL);
                  BattleLogicFunction__FunctionChangeEnemyMasterFace(logic, v268, v269);
                  goto LABEL_125;
                }
                if ( FuncList__Check(137, *p_funcType, 0LL) )
                {
                  v195 = mainAction->fields.actorId;
                  v196 = (int32_t)v286->fields.logic;
                  v270 = ((__int64 (__fastcall *)(BattleLogicFunction_o *, void *))v286->klass[1]._1.parent)(
                           v286,
                           v286->klass[1]._1.generic_class) <= 1;
                  v199 = logic;
                  v197 = !v270;
LABEL_182:
                  v200 = v195;
                  v201 = v196;
LABEL_185:
                  v176 = BattleLogicFunction__functionValueDamage(
                           v199,
                           v200,
                           v201,
                           dataVals_k__BackingField,
                           index,
                           v197,
                           mainAction,
                           v198);
                  goto LABEL_169;
                }
                if ( FuncList__Check(138, *p_funcType, 0LL) )
                {
                  BattleLogicFunction__FunctionAddBattleValue(logic, funcEnt, v271);
                  goto LABEL_125;
                }
                if ( FuncList__Check(139, *p_funcType, 0LL) )
                {
                  BattleLogicFunction__FunctionSetBattleValue(logic, funcEnt, v272);
                  goto LABEL_125;
                }
                if ( FuncList__Check(140, *p_funcType, 0LL) )
                {
                  dicFuncProcess_high = SHIDWORD(v286[3].fields.dicFuncProcess);
                  v276 = (float)(DataVals__GetValue(dataVals_k__BackingField, 0LL) * dicFuncProcess_high) / 1000.0;
                  if ( v276 == INFINITY )
                    v277 = -INFINITY;
                  else
                    v277 = v276;
                  v176 = BattleLogicFunction__functionGainNp(
                           logic,
                           args,
                           v274,
                           targetId_k__BackingField,
                           dataVals_k__BackingField,
                           (int)v277,
                           v275);
                  goto LABEL_169;
                }
                if ( !FuncList__Check(141, *p_funcType, 0LL) )
                  goto LABEL_125;
                v278 = SHIDWORD(v286[3].fields.dicFuncProcess);
                v279 = (float)(DataVals__GetValue(dataVals_k__BackingField, 0LL) * v278) / 1000.0;
                if ( v279 == INFINITY )
                  v280 = -INFINITY;
                else
                  v280 = v279;
                v281 = (BattleLogicFunction_o *)BattleServantData__addNp(
                                                  (BattleServantData_o *)v286,
                                                  -(int)v280,
                                                  0,
                                                  0LL);
                v282 = (int)v281;
                this = (BattleLogicFunction_o *)BattleLogicFunction__getFunctionObject(
                                                  v281,
                                                  funcEnt,
                                                  (int32_t)v286->fields.logic,
                                                  index,
                                                  isCommandSideEffect,
                                                  0LL,
                                                  v283);
                if ( !this )
                  goto LABEL_445;
                v228 = this;
                HIDWORD(this->fields.logic) = 3;
                BattleActionData_BuffData__setSaveNp((BattleActionData_BuffData_o *)this, v282, 0LL);
              }
              v130 = mainAction;
              v131 = (BattleActionData_BuffData_o *)v228;
              v132 = dataVals_k__BackingField;
LABEL_124:
              BattleActionData__setBuffData(v130, v131, v132, 0LL);
              goto LABEL_125;
            }
            applyTarget = funcEnt->fields.applyTarget;
            if ( applyTarget == 2 )
            {
              v176 = BattleLogicFunction__functionReplaceEnemyMember(logic, v169, dataVals_k__BackingField, index, v171);
              goto LABEL_169;
            }
            if ( applyTarget == 1 )
            {
              v167 = logic;
              v168 = BattleLogicFunction__functionReplaceMember(
                       logic,
                       targetId_k__BackingField,
                       subTargetId,
                       v170,
                       (DataVals_o *)v171,
                       index,
                       v172);
              goto LABEL_158;
            }
          }
LABEL_125:
          v44 = isCommandSideEffect;
LABEL_110:
          v120 = &funcEnt->fields.funcType;
LABEL_377:
          this = (BattleLogicFunction_o *)FuncList__isDamage(*v120, 0LL);
          if ( ((unsigned __int8)this & 1) != 0 )
            v302 = 0;
          else
            v302 = -98;
          if ( v302 != -98 && !LOBYTE(v286[9].fields.logictarget) )
          {
            v303 = v286[8].fields.buffProgressTurnSelfList;
            if ( !v303 )
              goto LABEL_445;
            if ( !LOBYTE(v303[3].fields._syncRoot) )
            {
              this = (BattleLogicFunction_o *)v337;
              LOBYTE(v286[9].fields.logictarget) = 1;
              if ( !v337 )
                goto LABEL_445;
              System_Collections_Generic_List_int___Add(
                v337,
                (int32_t)v286->fields.logic,
                (const MethodInfo_30B61D8 *)Method_System_Collections_Generic_List_int__Add__);
              this = (BattleLogicFunction_o *)v286[8].fields.buffProgressTurnSelfList;
              if ( !this )
                goto LABEL_445;
              v304 = BattleBuffData__UseProgressingDoNotAct(
                       (BattleBuffData_o *)this,
                       (BattleServantData_o *)v286,
                       0,
                       0LL);
              BattleActionData__addSideEffectActionData(mainAction, v304, 1, 0LL);
              v303 = v286[8].fields.buffProgressTurnSelfList;
              if ( !v303 )
                goto LABEL_445;
            }
            LOBYTE(v303[3].fields._syncRoot) = 0;
          }
          BattleLogicFunction_ProcListInArgs__setFuncResult(
            args,
            targetId_k__BackingField,
            mainAction->fields.funcResult,
            dataVals_k__BackingField->fields.funcIndex,
            0LL);
LABEL_389:
          v113 = v112->max_length;
        }
      }
      v39 = ServantData;
      if ( !isCreateSideEffect )
        break;
      v305 = v343;
      if ( !funcEnt )
        goto LABEL_445;
      v306 = FuncList__Check(26, *p_funcType, 0LL);
      v307 = (BattleLogicFunction_AfterAttackSideEffectMakeArgument_o *)sub_B70764(BattleLogicFunction_AfterAttackSideEffectMakeArgument_TypeInfo);
      BattleLogicFunction_AfterAttackSideEffectMakeArgument___ctor(v307, 0LL);
      if ( !v307 )
        goto LABEL_445;
      Argument__Init = BattleLogicFunction_AfterAttackSideEffectMakeArgument__Init(v307, mainAction, 0LL);
      BattleLogicFunction__setAttackSideEffect(
        logic,
        mainAction,
        ServantData,
        v306 || isTreasureDvc,
        Argument__Init,
        v309);
      this = (BattleLogicFunction_o *)BattleActionData__getDamageTargetIdList(mainAction, 0LL);
      if ( !this )
        goto LABEL_445;
      v70 = v338;
      v310 = this;
      if ( this->fields.logic )
      {
        if ( ServantData == 0LL || !isTreasureDvc )
        {
          v74 = 0LL;
        }
        else
        {
          v74 = (BattleCommandData_o *)sub_B70764(BattleCommandData_TypeInfo);
          BattleCommandData___ctor(v74, 0LL);
          this = (BattleLogicFunction_o *)BattleServantData__getTreasureDvcCardId(ServantData, 0LL);
          if ( !v74 )
            goto LABEL_445;
          v74->fields._type = (int)this;
          v74->fields.treasureDvc = BattleServantData__getTreasureDvcId(ServantData, 1, 0LL);
        }
        v75 = (UnityEngine_Object_o *)logic->fields.logic;
        if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
        }
        this = (BattleLogicFunction_o *)UnityEngine_Object__op_Inequality(v75, 0LL, 0LL);
        if ( ((unsigned __int8)this & 1) != 0 && (v76 = v310->fields.logic, (int)v76 >= 1) )
        {
          v77 = 0LL;
          do
          {
            if ( v77 >= (unsigned int)v76 )
              goto LABEL_446;
            this = (BattleLogicFunction_o *)logic->fields.logic;
            if ( !this )
              goto LABEL_445;
            this = (BattleLogicFunction_o *)BattleLogic__setDamageSideEffect(
                                              (BattleLogic_o *)this,
                                              mainAction,
                                              mainAction->fields.actorId,
                                              *((_DWORD *)&v310->fields.logictarget + v77),
                                              v74,
                                              0LL);
            LODWORD(v76) = v310->fields.logic;
            ++v77;
          }
          while ( (__int64)v77 < (int)v76 );
          v44 = isCommandSideEffect;
          v39 = ServantData;
        }
        else
        {
          v44 = isCommandSideEffect;
        }
        v70 = v338;
      }
LABEL_399:
      v71 = v70->max_length;
      v73 = v305 + 1;
      if ( v73 >= v71 )
        goto LABEL_402;
    }
    v70 = v338;
LABEL_398:
    v305 = v343;
    goto LABEL_399;
  }
  *(_QWORD *)&v332[4] = 0LL;
LABEL_402:
  this = (BattleLogicFunction_o *)BattleLogicFunction_ProcListInArgs__get_CheckDuplicateFunc(args, 0LL);
  if ( !this )
    goto LABEL_445;
  ((void (__fastcall *)(BattleLogicFunction_o *, void *))this->klass[1]._1.namespaze)(
    this,
    this->klass[1]._1.byval_arg.data);
  if ( (v332[4] & 1) != 0 )
  {
    this = (BattleLogicFunction_o *)logic->fields.data;
    if ( !this )
      goto LABEL_445;
    this = (BattleLogicFunction_o *)BattleData__getServantData((BattleData_o *)this, *p_actorId, 0LL);
    if ( !this )
      goto LABEL_445;
    BattleServantData__resetAccumulationDamage((BattleServantData_o *)this, 0LL);
  }
  if ( BattleActionData__checkSummonServantList(mainAction, 0LL) )
  {
    v311 = (UnityEngine_Object_o *)logic->fields.logic;
    if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    }
    if ( UnityEngine_Object__op_Inequality(v311, 0LL, 0LL) )
    {
      this = (BattleLogicFunction_o *)BattleActionData__getSummonServant(mainAction, -1, 0LL);
      if ( !this )
        goto LABEL_445;
      v312 = (int)this->fields.logic;
      v313 = this;
      if ( v312 >= 1 )
      {
        v314 = 0;
        while ( v314 < v312 )
        {
          v315 = *((_QWORD *)&v313->fields.logictarget + (int)v314);
          if ( !v315 )
            goto LABEL_445;
          this = (BattleLogicFunction_o *)logic->fields.logic;
          if ( !this )
            goto LABEL_445;
          BattleLogic__actEnemyPassiveSkill((BattleLogic_o *)this, *(_DWORD *)(v315 + 28), 0LL);
          v312 = (int)v313->fields.logic;
          if ( (int)++v314 >= v312 )
            goto LABEL_419;
        }
        goto LABEL_446;
      }
    }
  }
LABEL_419:
  FuncSideEffectArg = BattleLogicFunction_ProcListInArgs__get_FuncSideEffectArg(args, 0LL);
  if ( FuncSideEffectArg )
    ((void (__fastcall *)(BattleLogicFunction_FuncSideEffectFunctionArgument_o *, BattleLogicFunction_o *, BattleActionData_o *, BattleServantData_o *, void *))FuncSideEffectArg->klass->vtable._7_SetSideEffect.method)(
      FuncSideEffectArg,
      logic,
      mainAction,
      v39,
      FuncSideEffectArg->klass[1]._1.image);
  if ( isBuffUpdate )
  {
    v317 = (UnityEngine_Object_o *)logic->fields.logic;
    if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    }
    if ( UnityEngine_Object__op_Inequality(v317, 0LL, 0LL) )
    {
      this = (BattleLogicFunction_o *)logic->fields.logic;
      if ( !this )
        goto LABEL_445;
      BattleLogic__checkUsedBuff((BattleLogic_o *)this, 0LL);
      v318 = logic->fields.data;
      if ( !v318 )
        goto LABEL_445;
      this = (BattleLogicFunction_o *)v318->fields._FieldEnvData_k__BackingField;
      if ( !this )
        goto LABEL_445;
      BattleFieldEnvironmentData__CheckUsedBuff((BattleFieldEnvironmentData_o *)this, 0LL);
    }
  }
  if ( (v332[8] & 1) != 0 || args->fields.updateField )
  {
    v319 = (UnityEngine_Object_o *)logic->fields.logic;
    if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    }
    if ( UnityEngine_Object__op_Inequality(v319, 0LL, 0LL) )
    {
      this = (BattleLogicFunction_o *)logic->fields.logic;
      if ( !this )
        goto LABEL_445;
      BattleLogic__updateFieldBuff((BattleLogic_o *)this, 0LL);
    }
  }
  this = (BattleLogicFunction_o *)v337;
  if ( !v337 )
LABEL_445:
    sub_B7076C(this, action);
  System_Collections_Generic_List_int___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v350,
    v337,
    (const MethodInfo_30B701C *)Method_System_Collections_Generic_List_int__GetEnumerator__);
  v351 = v350;
  while ( System_Collections_Generic_List_Enumerator_int___MoveNext(
            &v351,
            (const MethodInfo_221ED60 *)Method_System_Collections_Generic_List_Enumerator_int__MoveNext__) )
  {
    v320 = logic->fields.data;
    if ( !v320 )
      sub_B7076C(0LL, v322);
    v321 = BattleData__getServantData(v320, v351.fields.current, 0LL);
    if ( v321 )
      v321->fields.isTDLimitCount = 0;
  }
  System_Collections_Generic_List_Enumerator_int___Dispose(
    &v351,
    (const MethodInfo_221ED5C *)Method_System_Collections_Generic_List_Enumerator_int__Dispose__);
  return mainAction;
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
  struct BattleLogicFunction___c_StaticFields *static_fields; // x8
  System_Func_BattleLogicBuff_ReduceHpProcess_BuffInfo__int__o *_9__52_0; // x26
  Il2CppObject *v17; // x27
  struct BattleLogicFunction___c_StaticFields *v18; // x0
  System_String_array **v19; // x2
  System_String_array **v20; // x3
  System_Boolean_array **v21; // x4
  System_Int32_array **v22; // x5
  System_Int32_array *v23; // x6
  System_Int32_array *v24; // x7
  System_Collections_Generic_IEnumerable_TSource__o *v25; // x0
  __int64 v26; // x25
  BattleLogicFunction_SideEffectMakeArgument_o *v27; // x0
  const MethodInfo *v28; // x6
  const MethodInfo *v29; // x6
  __int64 v30; // x0

  v9 = mainAction;
  v10 = this;
  if ( (byte_435385E & 1) == 0 )
  {
    sub_B70694(&BattleLogicFunction_AttackSideEffectFunctionArgument_TypeInfo);
    sub_B70694(&BattleCommandData_TypeInfo);
    sub_B70694(&Method_System_Linq_Enumerable_Select_BattleActionData_SideEffectData__int___);
    sub_B70694(&Method_System_Linq_Enumerable_ToArray_int___);
    sub_B70694(&Method_System_Func_BattleActionData_SideEffectData__int___ctor__);
    sub_B70694(&System_Func_BattleActionData_SideEffectData__int__TypeInfo);
    sub_B70694(&int___TypeInfo);
    sub_B70694(&Method_BattleLogicFunction___c__setAttackSideEffect_b__52_0__);
    this = (BattleLogicFunction_o *)sub_B70694(&BattleLogicFunction___c_TypeInfo);
    byte_435385E = 1;
  }
  if ( actionSvtData )
  {
    if ( !attackArg )
      goto LABEL_24;
    if ( BasicHelper__IsNullOrEmpty(
           (System_Collections_ICollection_o *)attackArg->fields._SideEffectList_k__BackingField,
           0LL) )
    {
      return;
    }
    if ( isTreasureDvc )
    {
      v11 = (BattleCommandData_o *)sub_B70764(BattleCommandData_TypeInfo);
      BattleCommandData___ctor(v11, 0LL);
      this = (BattleLogicFunction_o *)BattleServantData__getTreasureDvcCardId(actionSvtData, 0LL);
      if ( !v11 )
        goto LABEL_24;
      v11->fields._type = (int)this;
      v11->fields.treasureDvc = BattleServantData__getTreasureDvcId(actionSvtData, 1, 0LL);
    }
    else
    {
      v11 = 0LL;
    }
    v12 = (BattleLogicFunction_AttackSideEffectFunctionArgument_o *)sub_B70764(BattleLogicFunction_AttackSideEffectFunctionArgument_TypeInfo);
    BattleLogicFunction_AttackSideEffectFunctionArgument___ctor(v12, 0LL);
    SideEffectList_k__BackingField = (System_Collections_Generic_IEnumerable_TSource__o *)attackArg->fields._SideEffectList_k__BackingField;
    v14 = BattleLogicFunction___c_TypeInfo;
    if ( (BYTE3(BattleLogicFunction___c_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !BattleLogicFunction___c_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(BattleLogicFunction___c_TypeInfo);
      v14 = BattleLogicFunction___c_TypeInfo;
    }
    static_fields = v14->static_fields;
    _9__52_0 = (System_Func_BattleLogicBuff_ReduceHpProcess_BuffInfo__int__o *)static_fields->__9__52_0;
    if ( !_9__52_0 )
    {
      if ( (BYTE3(v14->vtable._0_Equals.methodPtr) & 4) != 0 && !v14->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(v14);
        static_fields = BattleLogicFunction___c_TypeInfo->static_fields;
      }
      v17 = (Il2CppObject *)static_fields->__9;
      _9__52_0 = (System_Func_BattleLogicBuff_ReduceHpProcess_BuffInfo__int__o *)sub_B70764(System_Func_BattleActionData_SideEffectData__int__TypeInfo);
      System_Func_BattleLogicBuff_ReduceHpProcess_BuffInfo__int____ctor(
        _9__52_0,
        v17,
        Method_BattleLogicFunction___c__setAttackSideEffect_b__52_0__,
        (const MethodInfo_29AD124 *)Method_System_Func_BattleActionData_SideEffectData__int___ctor__);
      v18 = BattleLogicFunction___c_TypeInfo->static_fields;
      v18->__9__52_0 = (struct System_Func_BattleActionData_SideEffectData__int__o *)_9__52_0;
      sub_B70630(
        (BattleServantConfConponent_o *)&v18->__9__52_0,
        (System_Int32_array **)_9__52_0,
        v19,
        v20,
        v21,
        v22,
        v23,
        v24);
    }
    v25 = (System_Collections_Generic_IEnumerable_TSource__o *)System_Linq_Enumerable__Select_BattleLogicBuff_ReduceHpProcess_BuffInfo__int_(
                                                                 SideEffectList_k__BackingField,
                                                                 (System_Func_TSource__TResult__o *)_9__52_0,
                                                                 (const MethodInfo_1CC3CC0 *)Method_System_Linq_Enumerable_Select_BattleActionData_SideEffectData__int___);
    this = (BattleLogicFunction_o *)System_Linq_Enumerable__ToArray_int_(
                                      v25,
                                      (const MethodInfo_1CC85F0 *)Method_System_Linq_Enumerable_ToArray_int___);
    if ( v9 )
    {
      BattleActionData__SetFirstAtkMainTargetId(v9, (System_Int32_array *)this, 0LL);
      v26 = ((__int64 (__fastcall *)(BattleLogicFunction_SideEffectMakeArgument_o *, const char *))attackArg->klass[1]._1.gc_desc)(
              attackArg,
              attackArg->klass[1]._1.name);
      this = (BattleLogicFunction_o *)sub_B706AC(int___TypeInfo, 1LL);
      if ( this )
      {
        mainAction = (BattleActionData_o *)this;
        if ( !LODWORD(this->fields.logic) )
        {
          v30 = sub_B70798(this);
          sub_B70738(v30, 0LL);
        }
        LODWORD(this->fields.logictarget) = v9->fields._FirstAtkMainTargetId_k__BackingField;
        if ( v26 )
        {
          v27 = (BattleLogicFunction_SideEffectMakeArgument_o *)(*(__int64 (__fastcall **)(__int64, BattleLogicFunction_o *, _QWORD))(*(_QWORD *)v26 + 408LL))(
                                                                  v26,
                                                                  this,
                                                                  *(_QWORD *)(*(_QWORD *)v26 + 416LL));
          BattleLogicFunction__SetTargetAttackSideEffect(v10, v12, v9, actionSvtData, v11, v27, v28);
          BattleLogicFunction__SetTargetAttackSideEffect(v10, v12, v9, actionSvtData, v11, attackArg, v29);
          return;
        }
      }
    }
LABEL_24:
    sub_B7076C(this, mainAction);
  }
}


// attributes: thunk
void __fastcall BattleLogicFunction_AfterAttackSideEffectMakeArgument___ctor(
        BattleLogicFunction_AfterAttackSideEffectMakeArgument_o *this,
        const MethodInfo *method)
{
  BattleLogicFunction_SideEffectMakeArgument___ctor((BattleLogicFunction_SideEffectMakeArgument_o *)this, method);
}


BattleLogicFunction_SideEffectMakeArgument_o *__fastcall BattleLogicFunction_AfterAttackSideEffectMakeArgument__Init(
        BattleLogicFunction_AfterAttackSideEffectMakeArgument_o *this,
        BattleActionData_o *mainAction,
        const MethodInfo *method)
{
  struct BattleActionData_SideEffectData_array *DamageAttackSideEffectList; // x0
  System_String_array **v5; // x2
  System_String_array **v6; // x3
  System_Boolean_array **v7; // x4
  System_Int32_array **v8; // x5
  System_Int32_array *v9; // x6
  System_Int32_array *v10; // x7

  if ( !mainAction )
    sub_B7076C(this, 0LL);
  DamageAttackSideEffectList = BattleActionData__getDamageAttackSideEffectList(mainAction, 0LL);
  this->fields._SideEffectList_k__BackingField = DamageAttackSideEffectList;
  sub_B70630(
    (BattleServantConfConponent_o *)&this->fields,
    (System_Int32_array **)DamageAttackSideEffectList,
    v5,
    v6,
    v7,
    v8,
    v9,
    v10);
  return (BattleLogicFunction_SideEffectMakeArgument_o *)this;
}


BattleLogicFunction_SideEffectMakeArgument_o *__fastcall BattleLogicFunction_AfterAttackSideEffectMakeArgument__MakeOnlyMainArgument(
        BattleLogicFunction_AfterAttackSideEffectMakeArgument_o *this,
        const MethodInfo *method)
{
  BattleLogicFunction_SideEffectMakeArgument_o *v2; // x19
  const MethodInfo *v3; // x1

  if ( (byte_43513D9 & 1) == 0 )
  {
    sub_B70694(&BattleLogicFunction_AfterMainAttackSideEffectMakeArgument_TypeInfo);
    byte_43513D9 = 1;
  }
  v2 = (BattleLogicFunction_SideEffectMakeArgument_o *)sub_B70764(BattleLogicFunction_AfterMainAttackSideEffectMakeArgument_TypeInfo);
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
  System_String_array **v5; // x2
  System_String_array **v6; // x3
  System_Boolean_array **v7; // x4
  System_Int32_array **v8; // x5
  System_Int32_array *v9; // x6
  System_Int32_array *v10; // x7

  BattleLogicFunction_CommonCheckDuplicateFunction___ctor(
    (BattleLogicFunction_CommonCheckDuplicateFunction_o *)this,
    (const MethodInfo *)argument);
  this->fields.argument = argument;
  sub_B70630(
    (BattleServantConfConponent_o *)&this->fields.argument,
    (System_Int32_array **)argument,
    v5,
    v6,
    v7,
    v8,
    v9,
    v10);
}


void __fastcall BattleLogicFunction_AttackSideEffectFunctionArgument___ctor(
        BattleLogicFunction_AttackSideEffectFunctionArgument_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x20
  const MethodInfo *v4; // x1
  System_String_array **v5; // x2
  System_String_array **v6; // x3
  System_Boolean_array **v7; // x4
  System_Int32_array **v8; // x5
  System_Int32_array *v9; // x6
  System_Int32_array *v10; // x7
  System_String_array **v11; // x2
  System_String_array **v12; // x3
  System_Boolean_array **v13; // x4
  System_Int32_array **v14; // x5
  System_Int32_array *v15; // x6
  System_Int32_array *v16; // x7

  if ( (byte_43513DA & 1) == 0 )
  {
    sub_B70694(&BattleLogicFunction_AttackSideEffectCheckDuplicateFunction_TypeInfo);
    byte_43513DA = 1;
  }
  BattleLogicFunction_CommonSideEffectFunctionArgument___ctor(
    (BattleLogicFunction_CommonSideEffectFunctionArgument_o *)this,
    method);
  v3 = sub_B70764(BattleLogicFunction_AttackSideEffectCheckDuplicateFunction_TypeInfo);
  BattleLogicFunction_CommonCheckDuplicateFunction___ctor((BattleLogicFunction_CommonCheckDuplicateFunction_o *)v3, v4);
  *(_QWORD *)(v3 + 24) = this;
  sub_B70630((BattleServantConfConponent_o *)(v3 + 24), (System_Int32_array **)this, v5, v6, v7, v8, v9, v10);
  this->fields.checkDuplicate = (struct BattleLogicFunction_CheckDuplicateFunction_o *)v3;
  sub_B70630(
    (BattleServantConfConponent_o *)&this->fields.checkDuplicate,
    (System_Int32_array **)v3,
    v11,
    v12,
    v13,
    v14,
    v15,
    v16);
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
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v3; // x20
  System_String_array **v4; // x2
  System_String_array **v5; // x3
  System_Boolean_array **v6; // x4
  System_Int32_array **v7; // x5
  System_Int32_array *v8; // x6
  System_Int32_array *v9; // x7

  if ( (byte_43513DF & 1) == 0 )
  {
    sub_B70694(&Method_System_Collections_Generic_List_BattleLogicFunction_ExecutedFunctionData___ctor__);
    sub_B70694(&System_Collections_Generic_List_BattleLogicFunction_ExecutedFunctionData__TypeInfo);
    byte_43513DF = 1;
  }
  v3 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B70764(System_Collections_Generic_List_BattleLogicFunction_ExecutedFunctionData__TypeInfo);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v3,
    (const MethodInfo_30249C4 *)Method_System_Collections_Generic_List_BattleLogicFunction_ExecutedFunctionData___ctor__);
  this->fields.executedFuncList = (struct System_Collections_Generic_List_BattleLogicFunction_ExecutedFunctionData__o *)v3;
  sub_B70630((BattleServantConfConponent_o *)&this->fields, (System_Int32_array **)v3, v4, v5, v6, v7, v8, v9);
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
  BattleLogicFunction_CommonCheckDuplicateFunction_o *v2; // x19
  struct System_Collections_Generic_List_BattleLogicFunction_ExecutedFunctionData__o *executedFuncList; // x22
  __int64 v4; // x20
  int size; // w8
  BattleLogicFunction_ExecutedFunctionData_o *v6; // x8

  v2 = this;
  if ( (byte_43513DB & 1) == 0 )
  {
    sub_B70694(&Method_System_Collections_Generic_List_BattleLogicFunction_ExecutedFunctionData__get_Count__);
    this = (BattleLogicFunction_CommonCheckDuplicateFunction_o *)sub_B70694(&Method_System_Collections_Generic_List_BattleLogicFunction_ExecutedFunctionData__get_Item__);
    byte_43513DB = 1;
  }
  executedFuncList = v2->fields.executedFuncList;
  if ( !executedFuncList )
LABEL_10:
    sub_B7076C(this, method);
  v4 = 0LL;
  while ( 1 )
  {
    size = executedFuncList->fields._size;
    if ( (int)v4 >= size )
      break;
    if ( size <= (unsigned int)v4 )
      System_ThrowHelper__ThrowArgumentOutOfRangeException_41939488(0LL);
    v6 = executedFuncList->fields._items->m_Items[v4];
    if ( v6 )
    {
      v6->fields.isEnable = 1;
      executedFuncList = v2->fields.executedFuncList;
      ++v4;
      if ( executedFuncList )
        continue;
    }
    goto LABEL_10;
  }
}


bool __fastcall BattleLogicFunction_CommonCheckDuplicateFunction__isCheckCond(
        BattleLogicFunction_CommonCheckDuplicateFunction_o *this,
        DataVals_o *vals,
        const MethodInfo *method)
{
  if ( !vals )
    sub_B7076C(this, 0LL);
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
  System_String_array **v8; // x2
  System_String_array **v9; // x3
  System_Boolean_array **v10; // x4
  System_Int32_array **v11; // x5
  System_Int32_array *v12; // x6
  System_Int32_array *v13; // x7
  struct System_Collections_Generic_List_BattleLogicFunction_ExecutedFunctionData__o *executedFuncList; // x19
  System_Predicate_peRenderTexture_ChangeLayerObject__o *v15; // x20

  if ( (byte_43513DD & 1) == 0 )
  {
    sub_B70694(&Method_System_Collections_Generic_List_BattleLogicFunction_ExecutedFunctionData__FindIndex__);
    sub_B70694(&Method_System_Predicate_BattleLogicFunction_ExecutedFunctionData___ctor__);
    sub_B70694(&System_Predicate_BattleLogicFunction_ExecutedFunctionData__TypeInfo);
    sub_B70694(&Method_BattleLogicFunction_CommonCheckDuplicateFunction___c__DisplayClass7_0__isExecutedFunction_b__0__);
    sub_B70694(&BattleLogicFunction_CommonCheckDuplicateFunction___c__DisplayClass7_0_TypeInfo);
    byte_43513DD = 1;
  }
  v5 = sub_B70764(BattleLogicFunction_CommonCheckDuplicateFunction___c__DisplayClass7_0_TypeInfo);
  BattleLogicFunction_CommonCheckDuplicateFunction___c__DisplayClass7_0___ctor(
    (BattleLogicFunction_CommonCheckDuplicateFunction___c__DisplayClass7_0_o *)v5,
    0LL);
  if ( !v5
    || (*(_QWORD *)(v5 + 16) = vals,
        sub_B70630((BattleServantConfConponent_o *)(v5 + 16), (System_Int32_array **)vals, v8, v9, v10, v11, v12, v13),
        executedFuncList = this->fields.executedFuncList,
        v15 = (System_Predicate_peRenderTexture_ChangeLayerObject__o *)sub_B70764(System_Predicate_BattleLogicFunction_ExecutedFunctionData__TypeInfo),
        System_Predicate_peRenderTexture_ChangeLayerObject____ctor(
          v15,
          (Il2CppObject *)v5,
          Method_BattleLogicFunction_CommonCheckDuplicateFunction___c__DisplayClass7_0__isExecutedFunction_b__0__,
          (const MethodInfo_2BF23B8 *)Method_System_Predicate_BattleLogicFunction_ExecutedFunctionData___ctor__),
        !executedFuncList) )
  {
    sub_B7076C(v6, v7);
  }
  return System_Collections_Generic_List_SimpleAnimationPlayable_StateInfo___FindIndex(
           (System_Collections_Generic_List_SimpleAnimationPlayable_StateInfo__o *)executedFuncList,
           (System_Predicate_T__o *)v15,
           (const MethodInfo_3026134 *)Method_System_Collections_Generic_List_BattleLogicFunction_ExecutedFunctionData__FindIndex__) >= 0;
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
  System_String_array **v10; // x2
  System_String_array **v11; // x3
  System_Boolean_array **v12; // x4
  System_Int32_array **v13; // x5
  System_Int32_array *v14; // x6
  System_Int32_array *v15; // x7
  struct System_Collections_Generic_List_BattleLogicFunction_ExecutedFunctionData__o *executedFuncList; // x19
  System_Predicate_peRenderTexture_ChangeLayerObject__o *v17; // x20

  if ( (byte_43513DE & 1) == 0 )
  {
    sub_B70694(&Method_System_Collections_Generic_List_BattleLogicFunction_ExecutedFunctionData__FindIndex__);
    sub_B70694(&Method_System_Predicate_BattleLogicFunction_ExecutedFunctionData___ctor__);
    sub_B70694(&System_Predicate_BattleLogicFunction_ExecutedFunctionData__TypeInfo);
    sub_B70694(&Method_BattleLogicFunction_CommonCheckDuplicateFunction___c__DisplayClass8_0__isExecutedTarget_b__0__);
    sub_B70694(&BattleLogicFunction_CommonCheckDuplicateFunction___c__DisplayClass8_0_TypeInfo);
    byte_43513DE = 1;
  }
  v7 = sub_B70764(BattleLogicFunction_CommonCheckDuplicateFunction___c__DisplayClass8_0_TypeInfo);
  BattleLogicFunction_CommonCheckDuplicateFunction___c__DisplayClass8_0___ctor(
    (BattleLogicFunction_CommonCheckDuplicateFunction___c__DisplayClass8_0_o *)v7,
    0LL);
  if ( !v7
    || (*(_QWORD *)(v7 + 16) = vals,
        sub_B70630((BattleServantConfConponent_o *)(v7 + 16), (System_Int32_array **)vals, v10, v11, v12, v13, v14, v15),
        *(_DWORD *)(v7 + 24) = targetId,
        executedFuncList = this->fields.executedFuncList,
        v17 = (System_Predicate_peRenderTexture_ChangeLayerObject__o *)sub_B70764(System_Predicate_BattleLogicFunction_ExecutedFunctionData__TypeInfo),
        System_Predicate_peRenderTexture_ChangeLayerObject____ctor(
          v17,
          (Il2CppObject *)v7,
          Method_BattleLogicFunction_CommonCheckDuplicateFunction___c__DisplayClass8_0__isExecutedTarget_b__0__,
          (const MethodInfo_2BF23B8 *)Method_System_Predicate_BattleLogicFunction_ExecutedFunctionData___ctor__),
        !executedFuncList) )
  {
    sub_B7076C(v8, v9);
  }
  return System_Collections_Generic_List_SimpleAnimationPlayable_StateInfo___FindIndex(
           (System_Collections_Generic_List_SimpleAnimationPlayable_StateInfo__o *)executedFuncList,
           (System_Predicate_T__o *)v17,
           (const MethodInfo_3026134 *)Method_System_Collections_Generic_List_BattleLogicFunction_ExecutedFunctionData__FindIndex__) >= 0;
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
    sub_B7076C(this, 0LL);
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
  System_String_array **v10; // x2
  System_String_array **v11; // x3
  System_Boolean_array **v12; // x4
  System_Int32_array **v13; // x5
  System_Int32_array *v14; // x6
  System_Int32_array *v15; // x7
  unsigned __int64 v16; // x26
  __int64 v17; // x22
  System_String_array **v18; // x2
  System_String_array **v19; // x3
  System_Boolean_array **v20; // x4
  System_Int32_array **v21; // x5
  System_Int32_array *v22; // x6
  System_Int32_array *v23; // x7
  __int64 v24; // x23
  __int64 v25; // x0
  struct System_Collections_Generic_List_BattleLogicFunction_ExecutedFunctionData__o *executedFuncList; // x24
  System_Predicate_peRenderTexture_ChangeLayerObject__o *v27; // x25
  DataVals_o *v28; // x24
  struct System_Collections_Generic_List_BattleLogicFunction_ExecutedFunctionData__o *v29; // x23
  int32_t v30; // w25
  BattleLogicFunction_ExecutedFunctionData_o *v31; // x22
  const MethodInfo *v32; // x3
  __int64 v33; // x0

  if ( (byte_43513DC & 1) == 0 )
  {
    sub_B70694(&BattleLogicFunction_ExecutedFunctionData_TypeInfo);
    sub_B70694(&Method_System_Collections_Generic_List_BattleLogicFunction_ExecutedFunctionData__Add__);
    sub_B70694(&Method_System_Collections_Generic_List_BattleLogicFunction_ExecutedFunctionData__FindIndex__);
    sub_B70694(&Method_System_Predicate_BattleLogicFunction_ExecutedFunctionData___ctor__);
    sub_B70694(&System_Predicate_BattleLogicFunction_ExecutedFunctionData__TypeInfo);
    sub_B70694(&BattleLogicFunction_CommonCheckDuplicateFunction___c__DisplayClass5_0_TypeInfo);
    sub_B70694(&Method_BattleLogicFunction_CommonCheckDuplicateFunction___c__DisplayClass5_1__saveExecutedFunction_b__0__);
    sub_B70694(&BattleLogicFunction_CommonCheckDuplicateFunction___c__DisplayClass5_1_TypeInfo);
    byte_43513DC = 1;
  }
  v7 = sub_B70764(BattleLogicFunction_CommonCheckDuplicateFunction___c__DisplayClass5_0_TypeInfo);
  BattleLogicFunction_CommonCheckDuplicateFunction___c__DisplayClass5_0___ctor(
    (BattleLogicFunction_CommonCheckDuplicateFunction___c__DisplayClass5_0_o *)v7,
    0LL);
  if ( !v7 )
    goto LABEL_16;
  *(_QWORD *)(v7 + 16) = vals;
  sub_B70630((BattleServantConfConponent_o *)(v7 + 16), (System_Int32_array **)vals, v10, v11, v12, v13, v14, v15);
  if ( !targetIds )
    goto LABEL_16;
  if ( (int)targetIds->max_length >= 1 )
  {
    v16 = 0LL;
    while ( 1 )
    {
      v17 = sub_B70764(BattleLogicFunction_CommonCheckDuplicateFunction___c__DisplayClass5_1_TypeInfo);
      BattleLogicFunction_CommonCheckDuplicateFunction___c__DisplayClass5_1___ctor(
        (BattleLogicFunction_CommonCheckDuplicateFunction___c__DisplayClass5_1_o *)v17,
        0LL);
      if ( !v17 )
        break;
      *(_QWORD *)(v17 + 24) = v7;
      v24 = v17 + 24;
      sub_B70630((BattleServantConfConponent_o *)(v17 + 24), (System_Int32_array **)v7, v18, v19, v20, v21, v22, v23);
      if ( v16 >= targetIds->max_length )
      {
        v33 = sub_B70798(v25);
        sub_B70738(v33, 0LL);
      }
      *(_DWORD *)(v17 + 16) = targetIds->m_Items[v16 + 1];
      executedFuncList = this->fields.executedFuncList;
      v27 = (System_Predicate_peRenderTexture_ChangeLayerObject__o *)sub_B70764(System_Predicate_BattleLogicFunction_ExecutedFunctionData__TypeInfo);
      System_Predicate_peRenderTexture_ChangeLayerObject____ctor(
        v27,
        (Il2CppObject *)v17,
        Method_BattleLogicFunction_CommonCheckDuplicateFunction___c__DisplayClass5_1__saveExecutedFunction_b__0__,
        (const MethodInfo_2BF23B8 *)Method_System_Predicate_BattleLogicFunction_ExecutedFunctionData___ctor__);
      if ( !executedFuncList )
        break;
      Index = System_Collections_Generic_List_SimpleAnimationPlayable_StateInfo___FindIndex(
                (System_Collections_Generic_List_SimpleAnimationPlayable_StateInfo__o *)executedFuncList,
                (System_Predicate_T__o *)v27,
                (const MethodInfo_3026134 *)Method_System_Collections_Generic_List_BattleLogicFunction_ExecutedFunctionData__FindIndex__);
      if ( (Index & 0x80000000) != 0 )
      {
        if ( !*(_QWORD *)v24 )
          break;
        v28 = *(DataVals_o **)(*(_QWORD *)v24 + 16LL);
        v29 = this->fields.executedFuncList;
        v30 = *(_DWORD *)(v17 + 16);
        v31 = (BattleLogicFunction_ExecutedFunctionData_o *)sub_B70764(BattleLogicFunction_ExecutedFunctionData_TypeInfo);
        BattleLogicFunction_ExecutedFunctionData___ctor(v31, v28, v30, v32);
        if ( !v29 )
          break;
        System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
          (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)v29,
          (EventMissionProgressRequest_Argument_ProgressData_o *)v31,
          (const MethodInfo_3025688 *)Method_System_Collections_Generic_List_BattleLogicFunction_ExecutedFunctionData__Add__);
      }
      if ( (__int64)++v16 >= (int)targetIds->max_length )
        return;
    }
LABEL_16:
    sub_B7076C(Index, v9);
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
  struct BattleLogicFunction_CommonCheckDuplicateFunction___c__DisplayClass5_0_o *CS___8__locals1; // x9
  BattleLogicFunction_CommonCheckDuplicateFunction___c__DisplayClass5_1_o *v4; // x8

  CS___8__locals1 = this->fields.CS___8__locals1;
  if ( !CS___8__locals1
    || (v4 = this, (this = (BattleLogicFunction_CommonCheckDuplicateFunction___c__DisplayClass5_1_o *)n) == 0LL) )
  {
    sub_B7076C(this, n);
  }
  return BattleLogicFunction_ExecutedFunctionData__isMatch(n, CS___8__locals1->fields.vals, v4->fields.targetId, 0, 0LL);
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
  if ( !n )
    sub_B7076C(this, 0LL);
  return BattleLogicFunction_ExecutedFunctionData__isMatch(n, this->fields.vals, -1, 1, 0LL);
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
  if ( !n )
    sub_B7076C(this, 0LL);
  return BattleLogicFunction_ExecutedFunctionData__isMatch(n, this->fields.vals, this->fields.targetId, 1, 0LL);
}


void __fastcall BattleLogicFunction_CommonSideEffectCheckDuplicateFunction___ctor(
        BattleLogicFunction_CommonSideEffectCheckDuplicateFunction_o *this,
        BattleLogicFunction_CommonSideEffectFunctionArgument_o *argument,
        const MethodInfo *method)
{
  System_String_array **v5; // x2
  System_String_array **v6; // x3
  System_Boolean_array **v7; // x4
  System_Int32_array **v8; // x5
  System_Int32_array *v9; // x6
  System_Int32_array *v10; // x7

  BattleLogicFunction_CommonCheckDuplicateFunction___ctor(
    (BattleLogicFunction_CommonCheckDuplicateFunction_o *)this,
    (const MethodInfo *)argument);
  this->fields.argument = argument;
  sub_B70630(
    (BattleServantConfConponent_o *)&this->fields.argument,
    (System_Int32_array **)argument,
    v5,
    v6,
    v7,
    v8,
    v9,
    v10);
}


void __fastcall BattleLogicFunction_CommonSideEffectCheckDuplicateFunction__Init(
        BattleLogicFunction_CommonSideEffectCheckDuplicateFunction_o *this,
        const MethodInfo *method)
{
  BattleLogicFunction_CommonSideEffectFunctionArgument_o *argument; // x0
  struct System_Collections_Generic_List_BattleLogicFunction_ExecutedFunctionData__o *v4; // x0
  System_String_array **v5; // x2
  System_String_array **v6; // x3
  System_Boolean_array **v7; // x4
  System_Int32_array **v8; // x5
  System_Int32_array *v9; // x6
  System_Int32_array *v10; // x7

  argument = this->fields.argument;
  if ( !argument )
    sub_B7076C(0LL, method);
  v4 = BattleLogicFunction_CommonSideEffectFunctionArgument__getCheckBuffFuncList(argument, method);
  this->fields.executedFuncList = v4;
  sub_B70630((BattleServantConfConponent_o *)&this->fields, (System_Int32_array **)v4, v5, v6, v7, v8, v9, v10);
}


bool __fastcall BattleLogicFunction_CommonSideEffectCheckDuplicateFunction__isNotExecLocal(
        BattleLogicFunction_CommonSideEffectCheckDuplicateFunction_o *this,
        DataVals_o *vals,
        System_Int32_array *targetIds,
        const MethodInfo *method)
{
  __int64 v5; // x0

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
    sub_B7076C(this, vals);
  if ( !targetIds->max_length )
  {
    v5 = sub_B70798(this);
    sub_B70738(v5, 0LL);
  }
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
  System_Collections_Generic_Dictionary_int__WarBoardEvalValueSquare_EvalValueSquare__o *v3; // x20
  System_String_array **v4; // x2
  System_String_array **v5; // x3
  System_Boolean_array **v6; // x4
  System_Int32_array **v7; // x5
  System_Int32_array *v8; // x6
  System_Int32_array *v9; // x7
  const MethodInfo *v10; // x1

  if ( (byte_43513E1 & 1) == 0 )
  {
    sub_B70694(&Method_System_Collections_Generic_Dictionary_int__List_BattleLogicFunction_ExecutedFunctionData____ctor__);
    sub_B70694(&System_Collections_Generic_Dictionary_int__List_BattleLogicFunction_ExecutedFunctionData___TypeInfo);
    byte_43513E1 = 1;
  }
  *(&this->fields._SkillTiming_k__BackingField + 1) = -1;
  v3 = (System_Collections_Generic_Dictionary_int__WarBoardEvalValueSquare_EvalValueSquare__o *)sub_B70764(System_Collections_Generic_Dictionary_int__List_BattleLogicFunction_ExecutedFunctionData___TypeInfo);
  System_Collections_Generic_Dictionary_int__WarBoardEvalValueSquare_EvalValueSquare____ctor(
    v3,
    (const MethodInfo_2FC59B4 *)Method_System_Collections_Generic_Dictionary_int__List_BattleLogicFunction_ExecutedFunctionData____ctor__);
  *(_QWORD *)&this->fields.buffUniqueId = v3;
  sub_B70630(
    (BattleServantConfConponent_o *)&this->fields.buffUniqueId,
    (System_Int32_array **)v3,
    v4,
    v5,
    v6,
    v7,
    v8,
    v9);
  BattleLogicFunction_FunctionArgument___ctor((BattleLogicFunction_FunctionArgument_o *)this, v10);
}


System_Collections_Generic_List_BattleLogicFunction_ExecutedFunctionData__o *__fastcall BattleLogicFunction_CommonSideEffectFunctionArgument__getCheckBuffFuncList(
        BattleLogicFunction_CommonSideEffectFunctionArgument_o *this,
        const MethodInfo *method)
{
  System_Collections_Generic_Dictionary_int__WarBoardAIRoute_RouteData__o *v3; // x0
  System_Collections_Generic_Dictionary_int__WarBoardAIRoute_RouteData__o *v4; // x20
  int32_t v5; // w21
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v6; // x22

  if ( (byte_43513E0 & 1) == 0 )
  {
    sub_B70694(&Method_System_Collections_Generic_Dictionary_int__List_BattleLogicFunction_ExecutedFunctionData___ContainsKey__);
    sub_B70694(&Method_System_Collections_Generic_Dictionary_int__List_BattleLogicFunction_ExecutedFunctionData___get_Item__);
    sub_B70694(&Method_System_Collections_Generic_Dictionary_int__List_BattleLogicFunction_ExecutedFunctionData___set_Item__);
    sub_B70694(&Method_System_Collections_Generic_List_BattleLogicFunction_ExecutedFunctionData___ctor__);
    sub_B70694(&System_Collections_Generic_List_BattleLogicFunction_ExecutedFunctionData__TypeInfo);
    byte_43513E0 = 1;
  }
  v3 = *(System_Collections_Generic_Dictionary_int__WarBoardAIRoute_RouteData__o **)&this->fields.buffUniqueId;
  if ( !v3 )
    goto LABEL_9;
  if ( !System_Collections_Generic_Dictionary_int__WarBoardAIRoute_RouteData___ContainsKey(
          v3,
          *(&this->fields._SkillTiming_k__BackingField + 1),
          (const MethodInfo_2FC67DC *)Method_System_Collections_Generic_Dictionary_int__List_BattleLogicFunction_ExecutedFunctionData___ContainsKey__) )
  {
    v4 = *(System_Collections_Generic_Dictionary_int__WarBoardAIRoute_RouteData__o **)&this->fields.buffUniqueId;
    v5 = *(&this->fields._SkillTiming_k__BackingField + 1);
    v6 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B70764(System_Collections_Generic_List_BattleLogicFunction_ExecutedFunctionData__TypeInfo);
    System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
      v6,
      (const MethodInfo_30249C4 *)Method_System_Collections_Generic_List_BattleLogicFunction_ExecutedFunctionData___ctor__);
    if ( !v4 )
      goto LABEL_9;
    System_Collections_Generic_Dictionary_int__WarBoardAIRoute_RouteData___set_Item(
      v4,
      v5,
      (WarBoardAIRoute_RouteData_o *)v6,
      (const MethodInfo_2FC6540 *)Method_System_Collections_Generic_Dictionary_int__List_BattleLogicFunction_ExecutedFunctionData___set_Item__);
  }
  v3 = *(System_Collections_Generic_Dictionary_int__WarBoardAIRoute_RouteData__o **)&this->fields.buffUniqueId;
  if ( !v3 )
LABEL_9:
    sub_B7076C(v3, method);
  return (System_Collections_Generic_List_BattleLogicFunction_ExecutedFunctionData__o *)System_Collections_Generic_Dictionary_int__WarBoardEvalValueSquare_EvalValueSquare___get_Item(
                                                                                          (System_Collections_Generic_Dictionary_int__WarBoardEvalValueSquare_EvalValueSquare__o *)v3,
                                                                                          *(&this->fields._SkillTiming_k__BackingField
                                                                                          + 1),
                                                                                          (const MethodInfo_2FC64A4 *)Method_System_Collections_Generic_Dictionary_int__List_BattleLogicFunction_ExecutedFunctionData___get_Item__);
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
    sub_B7076C(v7, v8);
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
    sub_B7076C(this, 0LL);
  return this->fields.index == vals->fields.funcIndex
      && (targetId == -1 || this->fields.targetId == targetId)
      && (!isCheckEnable || this->fields.isEnable);
}


void __fastcall BattleLogicFunction_FuncSideEffectFunctionArgument___ctor(
        BattleLogicFunction_FuncSideEffectFunctionArgument_o *this,
        const MethodInfo *method)
{
  System_Collections_Generic_HashSet_int__o *v3; // x20
  System_String_array **v4; // x2
  System_String_array **v5; // x3
  System_Boolean_array **v6; // x4
  System_Int32_array **v7; // x5
  System_Int32_array *v8; // x6
  System_Int32_array *v9; // x7
  const MethodInfo *v10; // x1
  __int64 v11; // x20
  const MethodInfo *v12; // x1
  System_String_array **v13; // x2
  System_String_array **v14; // x3
  System_Boolean_array **v15; // x4
  System_Int32_array **v16; // x5
  System_Int32_array *v17; // x6
  System_Int32_array *v18; // x7
  System_String_array **v19; // x2
  System_String_array **v20; // x3
  System_Boolean_array **v21; // x4
  System_Int32_array **v22; // x5
  System_Int32_array *v23; // x6
  System_Int32_array *v24; // x7

  if ( (byte_43513E2 & 1) == 0 )
  {
    sub_B70694(&BattleLogicFunction_CommonSideEffectCheckDuplicateFunction_TypeInfo);
    sub_B70694(&Method_System_Collections_Generic_HashSet_int___ctor___69140912);
    sub_B70694(&System_Collections_Generic_HashSet_int__TypeInfo);
    byte_43513E2 = 1;
  }
  v3 = (System_Collections_Generic_HashSet_int__o *)sub_B70764(System_Collections_Generic_HashSet_int__TypeInfo);
  System_Collections_Generic_HashSet_int____ctor(
    v3,
    (const MethodInfo_2EADE74 *)Method_System_Collections_Generic_HashSet_int___ctor___69140912);
  this->fields.executedBuffFuncDic = (struct System_Collections_Generic_Dictionary_int__List_BattleLogicFunction_ExecutedFunctionData___o *)v3;
  sub_B70630(
    (BattleServantConfConponent_o *)&this->fields.executedBuffFuncDic,
    (System_Int32_array **)v3,
    v4,
    v5,
    v6,
    v7,
    v8,
    v9);
  BattleLogicFunction_CommonSideEffectFunctionArgument___ctor(
    (BattleLogicFunction_CommonSideEffectFunctionArgument_o *)this,
    v10);
  v11 = sub_B70764(BattleLogicFunction_CommonSideEffectCheckDuplicateFunction_TypeInfo);
  BattleLogicFunction_CommonCheckDuplicateFunction___ctor(
    (BattleLogicFunction_CommonCheckDuplicateFunction_o *)v11,
    v12);
  *(_QWORD *)(v11 + 24) = this;
  sub_B70630((BattleServantConfConponent_o *)(v11 + 24), (System_Int32_array **)this, v13, v14, v15, v16, v17, v18);
  this->fields.checkDuplicate = (struct BattleLogicFunction_CheckDuplicateFunction_o *)v11;
  sub_B70630(
    (BattleServantConfConponent_o *)&this->fields.checkDuplicate,
    (System_Int32_array **)v11,
    v19,
    v20,
    v21,
    v22,
    v23,
    v24);
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
  if ( (byte_43513E4 & 1) == 0 )
  {
    this = (BattleLogicFunction_FuncSideEffectFunctionArgument_o *)sub_B70694(&Method_System_Collections_Generic_HashSet_int__Add__);
    byte_43513E4 = 1;
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
        (const MethodInfo_2EAF050 *)Method_System_Collections_Generic_HashSet_int__Add__);
      return;
    }
LABEL_12:
    sub_B7076C(this, funcTarget);
  }
}


void __fastcall BattleLogicFunction_FuncSideEffectFunctionArgument__AddTarget_24190636(
        BattleLogicFunction_FuncSideEffectFunctionArgument_o *this,
        BattleLogicFunction_FuncSideEffectFunctionArgument_o *arg,
        const MethodInfo *method)
{
  struct System_Collections_Generic_Dictionary_int__List_BattleLogicFunction_ExecutedFunctionData___o *executedBuffFuncDic; // x0

  if ( (byte_43513E5 & 1) == 0 )
  {
    sub_B70694(&Method_System_Collections_Generic_HashSet_int__UnionWith__);
    byte_43513E5 = 1;
  }
  if ( arg )
  {
    executedBuffFuncDic = this->fields.executedBuffFuncDic;
    if ( !executedBuffFuncDic )
      sub_B7076C(0LL, arg);
    System_Collections_Generic_HashSet_int___UnionWith(
      (System_Collections_Generic_HashSet_int__o *)executedBuffFuncDic,
      (System_Collections_Generic_IEnumerable_T__o *)arg->fields.executedBuffFuncDic,
      (const MethodInfo_2EAF074 *)Method_System_Collections_Generic_HashSet_int__UnionWith__);
  }
}


BuffList_ACTION_array *__fastcall BattleLogicFunction_FuncSideEffectFunctionArgument__GetActArray(
        BattleLogicFunction_FuncSideEffectFunctionArgument_o *this,
        bool isMainOnly,
        const MethodInfo *method)
{
  _QWORD **v3; // x20
  __int64 v4; // x19
  __int16 v5; // w8
  __int64 v6; // x19
  __int64 v7; // x19
  __int64 v8; // x19

  if ( (byte_43513E3 & 1) == 0 )
  {
    sub_B70694(&Method_System_Array_Empty_BuffList_ACTION___);
    byte_43513E3 = 1;
  }
  v3 = (_QWORD **)Method_System_Array_Empty_BuffList_ACTION___;
  v4 = **((_QWORD **)Method_System_Array_Empty_BuffList_ACTION___ + 6);
  v5 = *(_WORD *)(v4 + 306);
  if ( (v5 & 1) == 0 )
  {
    sub_B08394(**((_QWORD **)Method_System_Array_Empty_BuffList_ACTION___ + 6));
    v5 = *(_WORD *)(v4 + 306);
  }
  if ( (v5 & 0x400) != 0 )
  {
    v6 = *v3[6];
    if ( (*(_BYTE *)(v6 + 306) & 1) == 0 )
      sub_B08394(*v3[6]);
    if ( !*(_DWORD *)(v6 + 224) )
    {
      v7 = *v3[6];
      if ( (*(_BYTE *)(v7 + 306) & 1) == 0 )
        sub_B08394(*v3[6]);
      j_il2cpp_runtime_class_init_0(v7);
    }
  }
  v8 = *v3[6];
  if ( (*(_BYTE *)(v8 + 306) & 1) == 0 )
    sub_B08394(*v3[6]);
  return **(BuffList_ACTION_array ***)(v8 + 184);
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

  if ( (byte_43513E6 & 1) == 0 )
  {
    sub_B70694(&Method_System_Linq_Enumerable_ToArray_int___);
    byte_43513E6 = 1;
  }
  v9 = System_Linq_Enumerable__ToArray_int_(
         (System_Collections_Generic_IEnumerable_TSource__o *)this->fields.executedBuffFuncDic,
         (const MethodInfo_1CC85F0 *)Method_System_Linq_Enumerable_ToArray_int___);
  if ( !logicFunc )
    sub_B7076C(v9, v10);
  BattleLogicFunction__SetFuncSideEffect(logicFunc, this, mainActionData, actorSvtData, v9, 0LL);
}


void __fastcall BattleLogicFunction_FunctionArgument___ctor(
        BattleLogicFunction_FunctionArgument_o *this,
        const MethodInfo *method)
{
  Il2CppObject *v3; // x20
  System_String_array **v4; // x2
  System_String_array **v5; // x3
  System_Boolean_array **v6; // x4
  System_Int32_array **v7; // x5
  System_Int32_array *v8; // x6
  System_Int32_array *v9; // x7

  if ( (byte_43513E7 & 1) == 0 )
  {
    sub_B70694(&BattleLogicFunction_CheckDuplicateFunction_TypeInfo);
    byte_43513E7 = 1;
  }
  v3 = (Il2CppObject *)sub_B70764(BattleLogicFunction_CheckDuplicateFunction_TypeInfo);
  System_Object___ctor(v3, 0LL);
  this->fields.checkDuplicate = (struct BattleLogicFunction_CheckDuplicateFunction_o *)v3;
  sub_B70630(
    (BattleServantConfConponent_o *)&this->fields.checkDuplicate,
    (System_Int32_array **)v3,
    v4,
    v5,
    v6,
    v7,
    v8,
    v9);
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
    sub_B7076C(0LL, method);
  ((void (__fastcall *)(struct BattleLogicFunction_CheckDuplicateFunction_o *, Il2CppMethodPointer))checkDuplicate->klass->vtable._4_Init.method)(
    checkDuplicate,
    checkDuplicate->klass->vtable._5_enableExecutedFunctions.methodPtr);
}


void __fastcall BattleLogicFunction_FunctionArgument__SetAfterFuncSideEffectArgument(
        BattleLogicFunction_FunctionArgument_o *this,
        BattleLogicFunction_FuncSideEffectFunctionArgument_o *arg,
        const MethodInfo *method)
{
  System_String_array **v3; // x3
  System_Boolean_array **v4; // x4
  System_Int32_array **v5; // x5
  System_Int32_array *v6; // x6
  System_Int32_array *v7; // x7

  this->fields._FuncSideEffectArg_k__BackingField = arg;
  sub_B70630(
    (BattleServantConfConponent_o *)&this->fields._FuncSideEffectArg_k__BackingField,
    (System_Int32_array **)arg,
    (System_String_array **)method,
    v3,
    v4,
    v5,
    v6,
    v7);
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
  System_String_array **v3; // x3
  System_Boolean_array **v4; // x4
  System_Int32_array **v5; // x5
  System_Int32_array *v6; // x6
  System_Int32_array *v7; // x7

  this->fields._FuncSideEffectArg_k__BackingField = value;
  sub_B70630(
    (BattleServantConfConponent_o *)&this->fields._FuncSideEffectArg_k__BackingField,
    (System_Int32_array **)value,
    (System_String_array **)method,
    v3,
    v4,
    v5,
    v6,
    v7);
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

  if ( (byte_43513E8 & 1) == 0 )
  {
    sub_B70694(&BattleLogicFunction_PreMainAttackSideEffectMakeArgument_TypeInfo);
    byte_43513E8 = 1;
  }
  v2 = (BattleLogicFunction_SideEffectMakeArgument_o *)sub_B70764(BattleLogicFunction_PreMainAttackSideEffectMakeArgument_TypeInfo);
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
  System_String_array **v6; // x2
  System_String_array **v7; // x3
  System_Boolean_array **v8; // x4
  System_Int32_array **v9; // x5
  System_Int32_array *v10; // x6
  System_Int32_array *v11; // x7
  System_String_array **v12; // x2
  System_String_array **v13; // x3
  System_Boolean_array **v14; // x4
  System_Int32_array **v15; // x5
  System_Int32_array *v16; // x6
  System_Int32_array *v17; // x7
  const MethodInfo *v18; // x1
  struct BattleLogicFunction_FunctionArgument_o **p_externalArg; // x19
  __int64 v20; // x1

  if ( (byte_43513EA & 1) == 0 )
  {
    sub_B70694(&Method_System_Collections_Generic_Dictionary_KeyValuePair_int__int___bool___ctor__);
    sub_B70694(&System_Collections_Generic_Dictionary_KeyValuePair_int__int___bool__TypeInfo);
    sub_B70694(&BattleLogicFunction_FunctionArgument_TypeInfo);
    byte_43513EA = 1;
  }
  v5 = (System_Collections_Generic_Dictionary_KeyValuePair_int__int___bool__o *)sub_B70764(System_Collections_Generic_Dictionary_KeyValuePair_int__int___bool__TypeInfo);
  System_Collections_Generic_Dictionary_KeyValuePair_int__int___bool____ctor(
    v5,
    (const MethodInfo_21C26BC *)Method_System_Collections_Generic_Dictionary_KeyValuePair_int__int___bool___ctor__);
  this->fields.funcResults = v5;
  sub_B70630((BattleServantConfConponent_o *)&this->fields, (System_Int32_array **)v5, v6, v7, v8, v9, v10, v11);
  this->fields.tdCommandTypeChange = -1;
  System_Object___ctor((Il2CppObject *)this, 0LL);
  if ( !argument )
  {
    argument = (BattleLogicFunction_FunctionArgument_o *)sub_B70764(BattleLogicFunction_FunctionArgument_TypeInfo);
    BattleLogicFunction_FunctionArgument___ctor(argument, v18);
  }
  this->fields.externalArg = argument;
  p_externalArg = &this->fields.externalArg;
  sub_B70630(
    (BattleServantConfConponent_o *)p_externalArg,
    (System_Int32_array **)argument,
    v12,
    v13,
    v14,
    v15,
    v16,
    v17);
  if ( !*p_externalArg )
    sub_B7076C(0LL, v20);
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
  BattleLogicFunction_ProcListInArgs___c__DisplayClass35_0_o *v9; // x20
  System_Collections_Generic_Dictionary_KeyValuePair_int__int___bool__o *TriggeredFuncIndex; // x0
  __int64 v11; // x1
  int v12; // w23
  int v13; // w8
  _BOOL4 v14; // w24
  struct System_Collections_Generic_Dictionary_KeyValuePair_int__int___bool__o *funcResults; // x21
  System_Func_KeyValuePair_KeyValuePair_int__int___bool___bool__o *v16; // x0
  System_Func_TSource__bool__o *v17; // x22
  System_Collections_Generic_IEnumerable_TSource__o *v18; // x21
  System_Collections_Generic_IEnumerable_TSource__c *klass; // x8
  unsigned __int64 v20; // x10
  int32_t *p_offset; // x11
  __int64 p_method; // x0
  System_Collections_Generic_IEnumerable_TSource__o *v23; // x19
  System_Func_KeyValuePair_KeyValuePair_int__int___bool___bool__o *v24; // x21
  __int64 v25; // x1
  __int64 v26; // x21
  __int64 v27; // x8
  unsigned __int64 v28; // x10
  int *v29; // x11
  __int64 v30; // x0
  __int64 v31; // x8
  unsigned __int64 v32; // x10
  int *v33; // x11
  __int64 v34; // x0
  __int64 v35; // x0
  __int64 v36; // x1
  char v37; // w22
  BattleServantData_o *ServantData; // x0
  int v39; // w8
  __int64 v40; // x8
  unsigned __int64 v41; // x10
  int *v42; // x11
  __int64 v43; // x0
  int v45; // [xsp+0h] [xbp-50h]
  bool value; // [xsp+Ch] [xbp-44h] BYREF
  System_Collections_Generic_KeyValuePair_int__int__o key; // [xsp+10h] [xbp-40h] BYREF
  bool isAllCond; // [xsp+18h] [xbp-38h] BYREF
  bool isSameTargetOnly; // [xsp+1Ch] [xbp-34h] BYREF
  System_Collections_Generic_KeyValuePair_int__int__o p_key; // 0:x0.8
  System_Collections_Generic_KeyValuePair_int__int__o v51; // 0:x1.8

  if ( (byte_43513EC & 1) == 0 )
  {
    sub_B70694(&Method_System_Collections_Generic_Dictionary_KeyValuePair_int__int___bool__TryGetValue__);
    sub_B70694(&Method_System_Linq_Enumerable_Any_KeyValuePair_KeyValuePair_int__int___bool____);
    sub_B70694(&Method_System_Linq_Enumerable_Count_KeyValuePair_KeyValuePair_int__int___bool____);
    sub_B70694(&Method_System_Linq_Enumerable_Where_KeyValuePair_KeyValuePair_int__int___bool____);
    sub_B70694(&Method_System_Func_KeyValuePair_KeyValuePair_int__int___bool___bool___ctor__);
    sub_B70694(&System_Func_KeyValuePair_KeyValuePair_int__int___bool___bool__TypeInfo);
    sub_B70694(&System_IDisposable_TypeInfo);
    sub_B70694(&System_Collections_Generic_IEnumerable_KeyValuePair_KeyValuePair_int__int___bool___TypeInfo);
    sub_B70694(&System_Collections_Generic_IEnumerator_KeyValuePair_KeyValuePair_int__int___bool___TypeInfo);
    sub_B70694(&System_Collections_IEnumerator_TypeInfo);
    sub_B70694(&Method_System_Collections_Generic_KeyValuePair_int__int___ctor__);
    sub_B70694(&Method_System_Collections_Generic_KeyValuePair_KeyValuePair_int__int___bool__get_Key__);
    sub_B70694(&Method_System_Collections_Generic_KeyValuePair_int__int__get_Value__);
    sub_B70694(&Method_System_Collections_Generic_KeyValuePair_KeyValuePair_int__int___bool__get_Value__);
    sub_B70694(&System_Math_TypeInfo);
    sub_B70694(&Method_BattleLogicFunction_ProcListInArgs___c__DisplayClass35_0__DidTriggeredFuncHaveSpecifyResults_b__0__);
    sub_B70694(&Method_BattleLogicFunction_ProcListInArgs___c__DisplayClass35_0__DidTriggeredFuncHaveSpecifyResults_b__1__);
    sub_B70694(&Method_BattleLogicFunction_ProcListInArgs___c__DisplayClass35_0__DidTriggeredFuncHaveSpecifyResults_b__2__);
    sub_B70694(&BattleLogicFunction_ProcListInArgs___c__DisplayClass35_0_TypeInfo);
    byte_43513EC = 1;
  }
  isSameTargetOnly = 0;
  isAllCond = 0;
  key = 0LL;
  value = 0;
  v9 = (BattleLogicFunction_ProcListInArgs___c__DisplayClass35_0_o *)sub_B70764(BattleLogicFunction_ProcListInArgs___c__DisplayClass35_0_TypeInfo);
  BattleLogicFunction_ProcListInArgs___c__DisplayClass35_0___ctor(v9, 0LL);
  if ( !baseVals )
    goto LABEL_57;
  TriggeredFuncIndex = (System_Collections_Generic_Dictionary_KeyValuePair_int__int___bool__o *)DataVals__GetTriggeredFuncIndex(
                                                                                                  baseVals,
                                                                                                  &isSameTargetOnly,
                                                                                                  &isAllCond,
                                                                                                  0LL);
  if ( !v9 )
    goto LABEL_57;
  v12 = (int)TriggeredFuncIndex;
  v9->fields.funcIndex = (int)TriggeredFuncIndex;
  if ( !(_DWORD)TriggeredFuncIndex )
  {
LABEL_55:
    LOBYTE(TriggeredFuncIndex) = 1;
    return (unsigned __int8)TriggeredFuncIndex & 1;
  }
  v9->fields.isTrue = (int)TriggeredFuncIndex > 0;
  if ( (BYTE3(System_Math_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !System_Math_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(System_Math_TypeInfo);
  if ( v12 >= 0 )
    v13 = v12;
  else
    v13 = -v12;
  v9->fields.funcIndex = v13 - 1;
  if ( isSameTargetOnly )
  {
    p_key = (System_Collections_Generic_KeyValuePair_int__int__o)&key;
    System_Collections_Generic_KeyValuePair_int__int____ctor(
      p_key,
      v13 - 1,
      targetId,
      (const MethodInfo_2162428 *)Method_System_Collections_Generic_KeyValuePair_int__int___ctor__);
    TriggeredFuncIndex = this->fields.funcResults;
    if ( TriggeredFuncIndex )
    {
      v51 = key;
      LOBYTE(TriggeredFuncIndex) = System_Collections_Generic_Dictionary_KeyValuePair_int__int___bool___TryGetValue(
                                     TriggeredFuncIndex,
                                     v51,
                                     &value,
                                     (const MethodInfo_21C4F44 *)Method_System_Collections_Generic_Dictionary_KeyValuePair_int__int___bool__TryGetValue__)
                                && value == v9->fields.isTrue;
      return (unsigned __int8)TriggeredFuncIndex & 1;
    }
LABEL_57:
    sub_B7076C(TriggeredFuncIndex, v11);
  }
  v14 = isAllCond;
  funcResults = this->fields.funcResults;
  v16 = (System_Func_KeyValuePair_KeyValuePair_int__int___bool___bool__o *)sub_B70764(System_Func_KeyValuePair_KeyValuePair_int__int___bool___bool__TypeInfo);
  v17 = (System_Func_TSource__bool__o *)v16;
  if ( !v14 )
  {
    System_Func_KeyValuePair_KeyValuePair_int__int___bool___bool____ctor(
      v16,
      (Il2CppObject *)v9,
      Method_BattleLogicFunction_ProcListInArgs___c__DisplayClass35_0__DidTriggeredFuncHaveSpecifyResults_b__0__,
      (const MethodInfo_2998980 *)Method_System_Func_KeyValuePair_KeyValuePair_int__int___bool___bool___ctor__);
    v23 = System_Linq_Enumerable__Where_KeyValuePair_KeyValuePair_int__int___bool__(
            (System_Collections_Generic_IEnumerable_TSource__o *)funcResults,
            v17,
            (const MethodInfo_1CCBC38 *)Method_System_Linq_Enumerable_Where_KeyValuePair_KeyValuePair_int__int___bool____);
    v24 = (System_Func_KeyValuePair_KeyValuePair_int__int___bool___bool__o *)sub_B70764(System_Func_KeyValuePair_KeyValuePair_int__int___bool___bool__TypeInfo);
    System_Func_KeyValuePair_KeyValuePair_int__int___bool___bool____ctor(
      v24,
      (Il2CppObject *)v9,
      Method_BattleLogicFunction_ProcListInArgs___c__DisplayClass35_0__DidTriggeredFuncHaveSpecifyResults_b__1__,
      (const MethodInfo_2998980 *)Method_System_Func_KeyValuePair_KeyValuePair_int__int___bool___bool___ctor__);
    LOBYTE(TriggeredFuncIndex) = System_Linq_Enumerable__Any_KeyValuePair_KeyValuePair_int__int___bool__(
                                   v23,
                                   (System_Func_TSource__bool__o *)v24,
                                   (const MethodInfo_1CA8DA4 *)Method_System_Linq_Enumerable_Any_KeyValuePair_KeyValuePair_int__int___bool____);
    return (unsigned __int8)TriggeredFuncIndex & 1;
  }
  System_Func_KeyValuePair_KeyValuePair_int__int___bool___bool____ctor(
    v16,
    (Il2CppObject *)v9,
    Method_BattleLogicFunction_ProcListInArgs___c__DisplayClass35_0__DidTriggeredFuncHaveSpecifyResults_b__2__,
    (const MethodInfo_2998980 *)Method_System_Func_KeyValuePair_KeyValuePair_int__int___bool___bool___ctor__);
  v18 = System_Linq_Enumerable__Where_KeyValuePair_KeyValuePair_int__int___bool__(
          (System_Collections_Generic_IEnumerable_TSource__o *)funcResults,
          v17,
          (const MethodInfo_1CCBC38 *)Method_System_Linq_Enumerable_Where_KeyValuePair_KeyValuePair_int__int___bool____);
  TriggeredFuncIndex = (System_Collections_Generic_Dictionary_KeyValuePair_int__int___bool__o *)System_Linq_Enumerable__Count_KeyValuePair_KeyValuePair_int__int___bool__(
                                                                                                  v18,
                                                                                                  (const MethodInfo_1CB76C8 *)Method_System_Linq_Enumerable_Count_KeyValuePair_KeyValuePair_int__int___bool____);
  if ( (_DWORD)TriggeredFuncIndex )
  {
    if ( !v18 )
      goto LABEL_57;
    klass = v18->klass;
    if ( *(_WORD *)&v18->klass->_2.bitflags1 )
    {
      v20 = 0LL;
      p_offset = &klass->_1.interfaceOffsets->offset;
      while ( *((System_Collections_Generic_IEnumerable_KeyValuePair_KeyValuePair_int__int___bool___c **)p_offset - 1) != System_Collections_Generic_IEnumerable_KeyValuePair_KeyValuePair_int__int___bool___TypeInfo )
      {
        ++v20;
        p_offset += 4;
        if ( v20 >= *(unsigned __int16 *)&v18->klass->_2.bitflags1 )
          goto LABEL_23;
      }
      p_method = (__int64)&klass->vtable[*p_offset].method;
    }
    else
    {
LABEL_23:
      p_method = sub_B08590(
                   v18,
                   System_Collections_Generic_IEnumerable_KeyValuePair_KeyValuePair_int__int___bool___TypeInfo,
                   0LL);
    }
    v26 = (*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerable_TSource__o *, _QWORD))p_method)(
            v18,
            *(_QWORD *)(p_method + 8));
    if ( !v26 )
      sub_B7076C(0LL, v25);
    while ( 1 )
    {
      v27 = *(_QWORD *)v26;
      if ( *(_WORD *)(*(_QWORD *)v26 + 298LL) )
      {
        v28 = 0LL;
        v29 = (int *)(*(_QWORD *)(v27 + 176) + 8LL);
        while ( *((System_Collections_IEnumerator_c **)v29 - 1) != System_Collections_IEnumerator_TypeInfo )
        {
          ++v28;
          v29 += 4;
          if ( v28 >= *(unsigned __int16 *)(*(_QWORD *)v26 + 298LL) )
            goto LABEL_32;
        }
        v30 = v27 + 16LL * *v29 + 312;
      }
      else
      {
LABEL_32:
        v30 = sub_B08590(v26, System_Collections_IEnumerator_TypeInfo, 0LL);
      }
      if ( ((*(__int64 (__fastcall **)(__int64, _QWORD))v30)(v26, *(_QWORD *)(v30 + 8)) & 1) == 0 )
        break;
      v31 = *(_QWORD *)v26;
      if ( *(_WORD *)(*(_QWORD *)v26 + 298LL) )
      {
        v32 = 0LL;
        v33 = (int *)(*(_QWORD *)(v31 + 176) + 8LL);
        while ( *((System_Collections_Generic_IEnumerator_KeyValuePair_KeyValuePair_int__int___bool___c **)v33 - 1) != System_Collections_Generic_IEnumerator_KeyValuePair_KeyValuePair_int__int___bool___TypeInfo )
        {
          ++v32;
          v33 += 4;
          if ( v32 >= *(unsigned __int16 *)(*(_QWORD *)v26 + 298LL) )
            goto LABEL_39;
        }
        v34 = v31 + 16LL * *v33 + 312;
      }
      else
      {
LABEL_39:
        v34 = sub_B08590(
                v26,
                System_Collections_Generic_IEnumerator_KeyValuePair_KeyValuePair_int__int___bool___TypeInfo,
                0LL);
      }
      v35 = (*(__int64 (__fastcall **)(__int64, _QWORD))v34)(v26, *(_QWORD *)(v34 + 8));
      if ( !data )
        sub_B7076C(v35, v36);
      v37 = v36;
      ServantData = BattleData__getServantData(data, SHIDWORD(v35), 0LL);
      if ( ServantData && !ServantData->fields.isDeadAnime && (v37 != 0) != v9->fields.isTrue )
      {
        v39 = 297;
        goto LABEL_47;
      }
    }
    v39 = 254;
LABEL_47:
    v45 = v39;
    v40 = *(_QWORD *)v26;
    if ( *(_WORD *)(*(_QWORD *)v26 + 298LL) )
    {
      v41 = 0LL;
      v42 = (int *)(*(_QWORD *)(v40 + 176) + 8LL);
      while ( *((System_IDisposable_c **)v42 - 1) != System_IDisposable_TypeInfo )
      {
        ++v41;
        v42 += 4;
        if ( v41 >= *(unsigned __int16 *)(*(_QWORD *)v26 + 298LL) )
          goto LABEL_51;
      }
      v43 = v40 + 16LL * *v42 + 312;
    }
    else
    {
LABEL_51:
      v43 = sub_B08590(v26, System_IDisposable_TypeInfo, 0LL);
    }
    (*(void (__fastcall **)(__int64, _QWORD))v43)(v26, *(_QWORD *)(v43 + 8));
    if ( v45 != 254 )
    {
      LOBYTE(TriggeredFuncIndex) = 0;
      return (unsigned __int8)TriggeredFuncIndex & 1;
    }
    goto LABEL_55;
  }
  return (unsigned __int8)TriggeredFuncIndex & 1;
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
    sub_B7076C(0LL, v7);
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
    sub_B7076C(0LL, v5);
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
    sub_B7076C(this, type);
  return externalArg->fields.grantSkillType == type;
}


BattleLogicFunction_CheckDuplicateFunction_o *__fastcall BattleLogicFunction_ProcListInArgs__get_CheckDuplicateFunc(
        BattleLogicFunction_ProcListInArgs_o *this,
        const MethodInfo *method)
{
  struct BattleLogicFunction_FunctionArgument_o *externalArg; // x8

  externalArg = this->fields.externalArg;
  if ( !externalArg )
    sub_B7076C(this, method);
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
    sub_B7076C(this, method);
  return externalArg->fields._FuncSideEffectArg_k__BackingField;
}


int32_t __fastcall BattleLogicFunction_ProcListInArgs__get_GrantSkillType(
        BattleLogicFunction_ProcListInArgs_o *this,
        const MethodInfo *method)
{
  struct BattleLogicFunction_FunctionArgument_o *externalArg; // x8

  externalArg = this->fields.externalArg;
  if ( !externalArg )
    sub_B7076C(this, method);
  return externalArg->fields.grantSkillType;
}


bool __fastcall BattleLogicFunction_ProcListInArgs__get_IsCommandSideEffect(
        BattleLogicFunction_ProcListInArgs_o *this,
        const MethodInfo *method)
{
  struct BattleLogicFunction_FunctionArgument_o *externalArg; // x8

  externalArg = this->fields.externalArg;
  if ( !externalArg )
    sub_B7076C(this, method);
  return externalArg->fields.isCommandSideEffect;
}


bool __fastcall BattleLogicFunction_ProcListInArgs__get_IsPassive(
        BattleLogicFunction_ProcListInArgs_o *this,
        const MethodInfo *method)
{
  struct BattleLogicFunction_FunctionArgument_o *externalArg; // x8

  externalArg = this->fields.externalArg;
  if ( !externalArg )
    sub_B7076C(this, method);
  return externalArg->fields.isPassive;
}


bool __fastcall BattleLogicFunction_ProcListInArgs__get_IsShift(
        BattleLogicFunction_ProcListInArgs_o *this,
        const MethodInfo *method)
{
  struct BattleLogicFunction_FunctionArgument_o *externalArg; // x8

  externalArg = this->fields.externalArg;
  if ( !externalArg )
    sub_B7076C(this, method);
  return externalArg->fields.isShift;
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
    sub_B7076C(this, method);
  return externalArg->fields.skillId;
}


GeneratedFamilyLinkageIdCacher_o *__fastcall BattleLogicFunction_ProcListInArgs__get_familyLinkageIdCacher(
        BattleLogicFunction_ProcListInArgs_o *this,
        const MethodInfo *method)
{
  GeneratedFamilyLinkageIdCacher_o *result; // x0
  BattleServantConfConponent_o *p_familyLinkageIdCacher; // x19
  GeneratedFamilyLinkageIdCacher_o *familyLinkageIdCacher; // t1
  GeneratedFamilyLinkageIdCacher_o *v6; // x20
  System_String_array **v7; // x2
  System_String_array **v8; // x3
  System_Boolean_array **v9; // x4
  System_Int32_array **v10; // x5
  System_Int32_array *v11; // x6
  System_Int32_array *v12; // x7

  if ( (byte_43513E9 & 1) == 0 )
  {
    sub_B70694(&GeneratedFamilyLinkageIdCacher_TypeInfo);
    byte_43513E9 = 1;
  }
  familyLinkageIdCacher = this->fields._familyLinkageIdCacher;
  p_familyLinkageIdCacher = (BattleServantConfConponent_o *)&this->fields._familyLinkageIdCacher;
  result = familyLinkageIdCacher;
  if ( !familyLinkageIdCacher )
  {
    v6 = (GeneratedFamilyLinkageIdCacher_o *)sub_B70764(GeneratedFamilyLinkageIdCacher_TypeInfo);
    GeneratedFamilyLinkageIdCacher___ctor(v6, 0LL);
    p_familyLinkageIdCacher->klass = (BattleServantConfConponent_c *)v6;
    sub_B70630(p_familyLinkageIdCacher, (System_Int32_array **)v6, v7, v8, v9, v10, v11, v12);
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
  signed int max_length; // w25
  System_Int32_array **v10; // x0
  BattleLogicFunctionProcess_FunctionUnitCheck_array **p_funcUnitArray_k__BackingField; // x19
  System_String_array **v12; // x2
  System_String_array **v13; // x3
  System_Boolean_array **v14; // x4
  System_Int32_array **v15; // x5
  System_Int32_array *v16; // x6
  System_Int32_array *v17; // x7
  struct BattleLogicFunctionProcess_FunctionUnitCheck_array *funcUnitArray_k__BackingField; // x27
  __int64 v19; // x28
  __int64 v20; // x23
  BattleLogicFunctionProcess_FunctionUnitCheck_o *v21; // x26
  const MethodInfo *v22; // x3
  System_String_array **v23; // x2
  System_String_array **v24; // x3
  System_Boolean_array **v25; // x4
  System_Int32_array **v26; // x5
  System_Int32_array *v27; // x6
  System_Int32_array *v28; // x7
  il2cpp_array_size_t v29; // w24
  const MethodInfo *v30; // x4
  BattleLogicFunctionProcess_FunctionUnitCheck_array *v31; // x8
  int v32; // w8
  int v33; // w22
  BattleLogicFunctionProcess_FunctionUnitCheck_o *v34; // x21
  int v35; // w23
  BattleLogicFunctionProcess_FunctionUnitCheck_o *v36; // x20
  const MethodInfo *v37; // x2
  _BOOL4 v38; // w8
  __int64 v39; // x0
  __int64 v40; // x0
  BattleLogicFunction_ProcListInArgs_o *v42; // [xsp+8h] [xbp-58h]

  v42 = this;
  if ( (byte_43513EE & 1) == 0 )
  {
    sub_B70694(&BattleLogicFunctionProcess_FunctionUnitCheck___TypeInfo);
    this = (BattleLogicFunction_ProcListInArgs_o *)sub_B70694(&BattleLogicFunctionProcess_FunctionUnitCheck_TypeInfo);
    byte_43513EE = 1;
  }
  if ( !dataValsList )
    goto LABEL_38;
  max_length = dataValsList->max_length;
  v10 = (System_Int32_array **)sub_B706AC(
                                 BattleLogicFunctionProcess_FunctionUnitCheck___TypeInfo,
                                 (unsigned int)max_length);
  v42->fields._funcUnitArray_k__BackingField = (struct BattleLogicFunctionProcess_FunctionUnitCheck_array *)v10;
  p_funcUnitArray_k__BackingField = &v42->fields._funcUnitArray_k__BackingField;
  sub_B70630(
    (BattleServantConfConponent_o *)&v42->fields._funcUnitArray_k__BackingField,
    v10,
    v12,
    v13,
    v14,
    v15,
    v16,
    v17);
  funcUnitArray_k__BackingField = v42->fields._funcUnitArray_k__BackingField;
  if ( max_length >= 1 )
  {
    v19 = 32LL;
    v20 = 8LL;
    while ( 1 )
    {
      v21 = (BattleLogicFunctionProcess_FunctionUnitCheck_o *)sub_B70764(BattleLogicFunctionProcess_FunctionUnitCheck_TypeInfo);
      BattleLogicFunctionProcess_FunctionUnitCheck___ctor(v21, logic, v42, v22);
      if ( !funcUnitArray_k__BackingField )
        break;
      if ( v21 )
      {
        this = (BattleLogicFunction_ProcListInArgs_o *)sub_B70754(
                                                         v21,
                                                         funcUnitArray_k__BackingField->obj.klass->_1.element_class);
        if ( !this )
        {
          v40 = sub_B7078C(0LL);
          sub_B70738(v40, 0LL);
        }
      }
      v29 = v20 - 8;
      if ( (unsigned int)(v20 - 8) >= funcUnitArray_k__BackingField->max_length )
        goto LABEL_39;
      *(Il2CppClass **)((char *)&funcUnitArray_k__BackingField->obj.klass + v19) = (Il2CppClass *)v21;
      sub_B70630(
        (BattleServantConfConponent_o *)((char *)funcUnitArray_k__BackingField + v19),
        (System_Int32_array **)v21,
        v23,
        v24,
        v25,
        v26,
        v27,
        v28);
      v31 = *p_funcUnitArray_k__BackingField;
      if ( !*p_funcUnitArray_k__BackingField )
        break;
      if ( v29 >= v31->max_length )
        goto LABEL_39;
      if ( !functionIds )
        break;
      if ( v29 >= functionIds->max_length || v29 >= dataValsList->max_length )
      {
LABEL_39:
        v39 = sub_B70798(this);
        sub_B70738(v39, 0LL);
      }
      this = *(BattleLogicFunction_ProcListInArgs_o **)((char *)&v31->obj.klass + v19);
      if ( !this )
        break;
      BattleLogicFunctionProcess_FunctionUnitCheck__setDataVals(
        (BattleLogicFunctionProcess_FunctionUnitCheck_o *)this,
        funcIndex,
        *((_DWORD *)&functionIds->obj.klass + v20++),
        *(DataVals_o **)((char *)&dataValsList->obj.klass + v19),
        v30);
      v19 += 8LL;
      ++*funcIndex;
      funcUnitArray_k__BackingField = *p_funcUnitArray_k__BackingField;
      if ( (int)v20 - 8 >= max_length )
        goto LABEL_17;
    }
LABEL_38:
    sub_B7076C(this, logic);
  }
LABEL_17:
  if ( !funcUnitArray_k__BackingField )
    goto LABEL_38;
  v32 = funcUnitArray_k__BackingField->max_length;
  if ( v32 >= 1 )
  {
    v33 = 0;
    v34 = 0LL;
    v35 = -1;
    do
    {
      if ( v33 >= (unsigned int)v32 )
        goto LABEL_39;
      v36 = funcUnitArray_k__BackingField->m_Items[v33];
      if ( !v36 )
        goto LABEL_38;
      this = (BattleLogicFunction_ProcListInArgs_o *)v36->fields._dataVals_k__BackingField;
      if ( !this )
        goto LABEL_38;
      if ( DataVals__IsAddIndividualty((DataVals_o *)this, 0LL) )
        goto LABEL_26;
      this = (BattleLogicFunction_ProcListInArgs_o *)v36->fields._dataVals_k__BackingField;
      if ( !this )
        goto LABEL_38;
      if ( DataVals__IsAddLinkageTargetIndividualty((DataVals_o *)this, 0LL) )
LABEL_26:
        BattleLogicFunctionProcess_FunctionUnitCheck__setLinkFunction(v36, *p_funcUnitArray_k__BackingField, v37);
      this = (BattleLogicFunction_ProcListInArgs_o *)v36->fields._dataVals_k__BackingField;
      if ( !this )
        goto LABEL_38;
      this = (BattleLogicFunction_ProcListInArgs_o *)DataVals__GetFunctionTriggerStarNum((DataVals_o *)this, 0LL);
      if ( ((unsigned int)this & 0x80000000) == 0 )
      {
        v38 = v34 == 0LL || (int)this < v35;
        if ( v38 )
          v35 = (int)this;
        if ( v38 )
          v34 = v36;
      }
      v32 = funcUnitArray_k__BackingField->max_length;
      ++v33;
    }
    while ( v33 < v32 );
    if ( v34 )
      v34->fields.isLowestStarFunction = 1;
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
  System_Collections_Generic_KeyValuePair_int__int__o key; // [xsp+8h] [xbp-28h] BYREF
  System_Collections_Generic_KeyValuePair_int__int__o p_key; // 0:x0.8
  System_Collections_Generic_KeyValuePair_int__int__o v13; // 0:x1.8
  System_Collections_Generic_KeyValuePair_int__int__o v14; // 0:x1.8

  if ( (byte_43513EB & 1) == 0 )
  {
    sub_B70694(&Method_System_Collections_Generic_Dictionary_KeyValuePair_int__int___bool__ContainsKey__);
    sub_B70694(&Method_System_Collections_Generic_Dictionary_KeyValuePair_int__int___bool__get_Item__);
    sub_B70694(&Method_System_Collections_Generic_KeyValuePair_int__int___ctor__);
    byte_43513EB = 1;
  }
  p_key = (System_Collections_Generic_KeyValuePair_int__int__o)&key;
  key = 0LL;
  System_Collections_Generic_KeyValuePair_int__int____ctor(
    p_key,
    index - 1,
    targetId,
    (const MethodInfo_2162428 *)Method_System_Collections_Generic_KeyValuePair_int__int___ctor__);
  funcResults = this->fields.funcResults;
  if ( !funcResults )
    goto LABEL_9;
  v13 = key;
  if ( !System_Collections_Generic_Dictionary_KeyValuePair_int__int___bool___ContainsKey(
          funcResults,
          v13,
          (const MethodInfo_21C34FC *)Method_System_Collections_Generic_Dictionary_KeyValuePair_int__int___bool__ContainsKey__) )
    return 0;
  funcResults = this->fields.funcResults;
  if ( !funcResults )
LABEL_9:
    sub_B7076C(funcResults, v7);
  v14 = key;
  return System_Collections_Generic_Dictionary_KeyValuePair_int__int___bool___get_Item(
           funcResults,
           v14,
           (const MethodInfo_21C31AC *)Method_System_Collections_Generic_Dictionary_KeyValuePair_int__int___bool__get_Item__);
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
  System_Collections_Generic_KeyValuePair_int__int__o key; // [xsp+8h] [xbp-28h] BYREF
  System_Collections_Generic_KeyValuePair_int__int__o p_key; // 0:x0.8
  System_Collections_Generic_KeyValuePair_int__int__o v13; // 0:x1.8

  if ( (byte_43513ED & 1) == 0 )
  {
    sub_B70694(&Method_System_Collections_Generic_Dictionary_KeyValuePair_int__int___bool__set_Item__);
    sub_B70694(&Method_System_Collections_Generic_KeyValuePair_int__int___ctor__);
    byte_43513ED = 1;
  }
  p_key = (System_Collections_Generic_KeyValuePair_int__int__o)&key;
  key = 0LL;
  System_Collections_Generic_KeyValuePair_int__int____ctor(
    p_key,
    index,
    targetId,
    (const MethodInfo_2162428 *)Method_System_Collections_Generic_KeyValuePair_int__int___ctor__);
  funcResults = this->fields.funcResults;
  if ( !funcResults )
    sub_B7076C(0LL, v9);
  v13 = key;
  System_Collections_Generic_Dictionary_KeyValuePair_int__int___bool___set_Item(
    funcResults,
    v13,
    result,
    (const MethodInfo_21C3248 *)Method_System_Collections_Generic_Dictionary_KeyValuePair_int__int___bool__set_Item__);
}


void __fastcall BattleLogicFunction_ProcListInArgs__set_IsCommandSideEffect(
        BattleLogicFunction_ProcListInArgs_o *this,
        bool value,
        const MethodInfo *method)
{
  struct BattleLogicFunction_FunctionArgument_o *externalArg; // x8

  externalArg = this->fields.externalArg;
  if ( !externalArg )
    sub_B7076C(this, value);
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
    sub_B7076C(this, value);
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
    sub_B7076C(this, value);
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
    sub_B7076C(this, value);
  externalArg->fields.skillId = value;
}


void __fastcall BattleLogicFunction_ProcListInArgs__set_funcUnitArray(
        BattleLogicFunction_ProcListInArgs_o *this,
        BattleLogicFunctionProcess_FunctionUnitCheck_array *value,
        const MethodInfo *method)
{
  System_String_array **v3; // x3
  System_Boolean_array **v4; // x4
  System_Int32_array **v5; // x5
  System_Int32_array *v6; // x6
  System_Int32_array *v7; // x7

  this->fields._funcUnitArray_k__BackingField = value;
  sub_B70630(
    (BattleServantConfConponent_o *)&this->fields._funcUnitArray_k__BackingField,
    (System_Int32_array **)value,
    (System_String_array **)method,
    v3,
    v4,
    v5,
    v6,
    v7);
}


void __fastcall BattleLogicFunction_ProcListInArgs___c__DisplayClass35_0___ctor(
        BattleLogicFunction_ProcListInArgs___c__DisplayClass35_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


bool __fastcall BattleLogicFunction_ProcListInArgs___c__DisplayClass35_0___DidTriggeredFuncHaveSpecifyResults_b__0(
        BattleLogicFunction_ProcListInArgs___c__DisplayClass35_0_o *this,
        System_Collections_Generic_KeyValuePair_KeyValuePair_int__int___bool__o x,
        const MethodInfo *method)
{
  int32_t key; // w19

  key = x.fields.key.fields.key;
  if ( (byte_435158F & 1) == 0 )
  {
    sub_B70694(&Method_System_Collections_Generic_KeyValuePair_KeyValuePair_int__int___bool__get_Key__);
    sub_B70694(&Method_System_Collections_Generic_KeyValuePair_int__int__get_Key__);
    byte_435158F = 1;
  }
  return this->fields.funcIndex == key;
}


bool __fastcall BattleLogicFunction_ProcListInArgs___c__DisplayClass35_0___DidTriggeredFuncHaveSpecifyResults_b__1(
        BattleLogicFunction_ProcListInArgs___c__DisplayClass35_0_o *this,
        System_Collections_Generic_KeyValuePair_KeyValuePair_int__int___bool__o x,
        const MethodInfo *method)
{
  bool value; // w19

  value = x.fields.value;
  if ( (byte_4351590 & 1) == 0 )
  {
    sub_B70694(&Method_System_Collections_Generic_KeyValuePair_KeyValuePair_int__int___bool__get_Value__);
    byte_4351590 = 1;
  }
  return !value ^ this->fields.isTrue;
}


bool __fastcall BattleLogicFunction_ProcListInArgs___c__DisplayClass35_0___DidTriggeredFuncHaveSpecifyResults_b__2(
        BattleLogicFunction_ProcListInArgs___c__DisplayClass35_0_o *this,
        System_Collections_Generic_KeyValuePair_KeyValuePair_int__int___bool__o x,
        const MethodInfo *method)
{
  int32_t key; // w19

  key = x.fields.key.fields.key;
  if ( (byte_435158E & 1) == 0 )
  {
    sub_B70694(&Method_System_Collections_Generic_KeyValuePair_KeyValuePair_int__int___bool__get_Key__);
    sub_B70694(&Method_System_Collections_Generic_KeyValuePair_int__int__get_Key__);
    byte_435158E = 1;
  }
  return this->fields.funcIndex == key;
}


void __fastcall BattleLogicFunction_SideEffectMakeArgument___ctor(
        BattleLogicFunction_SideEffectMakeArgument_o *this,
        const MethodInfo *method)
{
  System_String_array **v2; // x2
  System_String_array **v3; // x3
  System_Boolean_array **v4; // x4
  System_Int32_array **v5; // x5
  System_Int32_array *v6; // x6
  System_Int32_array *v7; // x7
  _QWORD **v9; // x21
  __int64 v10; // x20
  __int16 v11; // w8
  __int64 v12; // x20
  __int64 v13; // x20
  __int64 v14; // x20
  struct BattleActionData_SideEffectData_array **v15; // x8
  struct BattleActionData_SideEffectData_array *v16; // x1

  if ( (byte_43513F0 & 1) == 0 )
  {
    sub_B70694(&Method_System_Array_Empty_BattleActionData_SideEffectData___);
    byte_43513F0 = 1;
  }
  v9 = (_QWORD **)Method_System_Array_Empty_BattleActionData_SideEffectData___;
  v10 = **((_QWORD **)Method_System_Array_Empty_BattleActionData_SideEffectData___ + 6);
  v11 = *(_WORD *)(v10 + 306);
  if ( (v11 & 1) == 0 )
  {
    sub_B08394(**((_QWORD **)Method_System_Array_Empty_BattleActionData_SideEffectData___ + 6));
    v11 = *(_WORD *)(v10 + 306);
  }
  if ( (v11 & 0x400) != 0 )
  {
    v12 = *v9[6];
    if ( (*(_BYTE *)(v12 + 306) & 1) == 0 )
      sub_B08394(*v9[6]);
    if ( !*(_DWORD *)(v12 + 224) )
    {
      v13 = *v9[6];
      if ( (*(_BYTE *)(v13 + 306) & 1) == 0 )
        sub_B08394(*v9[6]);
      j_il2cpp_runtime_class_init_0(v13);
    }
  }
  v14 = *v9[6];
  if ( (*(_BYTE *)(v14 + 306) & 1) == 0 )
    sub_B08394(*v9[6]);
  v15 = *(struct BattleActionData_SideEffectData_array ***)(v14 + 184);
  v16 = *v15;
  this->fields._SideEffectList_k__BackingField = *v15;
  sub_B70630((BattleServantConfConponent_o *)&this->fields, (System_Int32_array **)v16, v2, v3, v4, v5, v6, v7);
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
  System_String_array **v9; // x2
  System_String_array **v10; // x3
  System_Boolean_array **v11; // x4
  System_Int32_array **v12; // x5
  System_Int32_array *v13; // x6
  System_Int32_array *v14; // x7
  System_Func_int__BattleActionData_SideEffectData__o *v15; // x22
  System_Collections_Generic_IEnumerable_TSource__o *v16; // x0
  struct BattleActionData_SideEffectData_array *v17; // x0
  System_String_array **v18; // x2
  System_String_array **v19; // x3
  System_Boolean_array **v20; // x4
  System_Int32_array **v21; // x5
  System_Int32_array *v22; // x6
  System_Int32_array *v23; // x7
  __int64 v25; // x0

  if ( (byte_43513EF & 1) == 0 )
  {
    sub_B70694(&BuffList_ACTION___TypeInfo);
    sub_B70694(&Method_System_Linq_Enumerable_Select_int__BattleActionData_SideEffectData___);
    sub_B70694(&Method_System_Linq_Enumerable_ToArray_BattleActionData_SideEffectData___);
    sub_B70694(&Method_System_Func_int__BattleActionData_SideEffectData___ctor__);
    sub_B70694(&System_Func_int__BattleActionData_SideEffectData__TypeInfo);
    sub_B70694(&Method_BattleLogicFunction_SideEffectMakeArgument___c__DisplayClass9_0__Init_b__0__);
    sub_B70694(&BattleLogicFunction_SideEffectMakeArgument___c__DisplayClass9_0_TypeInfo);
    byte_43513EF = 1;
  }
  v5 = sub_B70764(BattleLogicFunction_SideEffectMakeArgument___c__DisplayClass9_0_TypeInfo);
  BattleLogicFunction_SideEffectMakeArgument___c__DisplayClass9_0___ctor(
    (BattleLogicFunction_SideEffectMakeArgument___c__DisplayClass9_0_o *)v5,
    0LL);
  v6 = sub_B706AC(BuffList_ACTION___TypeInfo, 1LL);
  v7 = ((__int64 (__fastcall *)(BattleLogicFunction_SideEffectMakeArgument_o *, Il2CppMethodPointer))this->klass->vtable._4_unknown.method)(
         this,
         this->klass->vtable._5_unknown.methodPtr);
  if ( !v6 )
    goto LABEL_7;
  if ( !*(_DWORD *)(v6 + 24) )
  {
    v25 = sub_B70798(v7);
    sub_B70738(v25, 0LL);
  }
  *(_DWORD *)(v6 + 32) = v7;
  if ( !v5 )
LABEL_7:
    sub_B7076C(v7, v8);
  *(_QWORD *)(v5 + 16) = v6;
  sub_B70630((BattleServantConfConponent_o *)(v5 + 16), (System_Int32_array **)v6, v9, v10, v11, v12, v13, v14);
  v15 = (System_Func_int__BattleActionData_SideEffectData__o *)sub_B70764(System_Func_int__BattleActionData_SideEffectData__TypeInfo);
  System_Func_int__BattleActionData_SideEffectData____ctor(
    v15,
    (Il2CppObject *)v5,
    Method_BattleLogicFunction_SideEffectMakeArgument___c__DisplayClass9_0__Init_b__0__,
    (const MethodInfo_29A71E0 *)Method_System_Func_int__BattleActionData_SideEffectData___ctor__);
  v16 = (System_Collections_Generic_IEnumerable_TSource__o *)System_Linq_Enumerable__Select_int__BattleActionData_SideEffectData_(
                                                               (System_Collections_Generic_IEnumerable_TSource__o *)targetIds,
                                                               (System_Func_TSource__TResult__o *)v15,
                                                               (const MethodInfo_1CC29A4 *)Method_System_Linq_Enumerable_Select_int__BattleActionData_SideEffectData___);
  v17 = (struct BattleActionData_SideEffectData_array *)System_Linq_Enumerable__ToArray_DrawLotsDisplayMessage_DisplayedInGroup_SaveData_(
                                                          v16,
                                                          (const MethodInfo_1CC8794 *)Method_System_Linq_Enumerable_ToArray_BattleActionData_SideEffectData___);
  this->fields._SideEffectList_k__BackingField = v17;
  sub_B70630((BattleServantConfConponent_o *)&this->fields, (System_Int32_array **)v17, v18, v19, v20, v21, v22, v23);
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
  System_String_array **v3; // x3
  System_Boolean_array **v4; // x4
  System_Int32_array **v5; // x5
  System_Int32_array *v6; // x6
  System_Int32_array *v7; // x7

  this->fields._SideEffectList_k__BackingField = value;
  sub_B70630(
    (BattleServantConfConponent_o *)&this->fields,
    (System_Int32_array **)value,
    (System_String_array **)method,
    v3,
    v4,
    v5,
    v6,
    v7);
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

  if ( (byte_4351591 & 1) == 0 )
  {
    sub_B70694(&BattleActionData_SideEffectData_TypeInfo);
    byte_4351591 = 1;
  }
  buffActs = this->fields.buffActs;
  v6 = (BattleActionData_SideEffectData_o *)sub_B70764(BattleActionData_SideEffectData_TypeInfo);
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
  __int64 v8; // x0

  if ( (byte_43513F1 & 1) == 0 )
  {
    sub_B70694(&BuffList_ACTION___TypeInfo);
    byte_43513F1 = 1;
  }
  result = (BuffList_ACTION_array *)sub_B706AC(BuffList_ACTION___TypeInfo, 1LL);
  if ( !result )
    sub_B7076C(0LL, v5);
  max_length = result->max_length;
  if ( !isMainOnly )
  {
    if ( max_length )
    {
      v7 = 122;
      goto LABEL_9;
    }
LABEL_11:
    v8 = sub_B70798(result);
    sub_B70738(v8, 0LL);
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
  __int64 v8; // x0

  if ( (byte_43513F2 & 1) == 0 )
  {
    sub_B70694(&BuffList_ACTION___TypeInfo);
    byte_43513F2 = 1;
  }
  result = (BuffList_ACTION_array *)sub_B706AC(BuffList_ACTION___TypeInfo, 1LL);
  if ( !result )
    sub_B7076C(0LL, v5);
  max_length = result->max_length;
  if ( !isMainOnly )
  {
    if ( max_length )
    {
      v7 = 124;
      goto LABEL_9;
    }
LABEL_11:
    v8 = sub_B70798(result);
    sub_B70738(v8, 0LL);
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
  System_String_array **v7; // x2
  System_String_array **v8; // x3
  System_Boolean_array **v9; // x4
  System_Int32_array **v10; // x5
  System_Int32_array *v11; // x6
  System_Int32_array *v12; // x7
  __int64 v13; // x0

  if ( (byte_43513F3 & 1) == 0 )
  {
    sub_B70694(&int___TypeInfo);
    byte_43513F3 = 1;
  }
  BattleLogicFunction_FunctionArgument___ctor(
    (BattleLogicFunction_FunctionArgument_o *)this,
    *(const MethodInfo **)&targetId);
  v5 = (struct System_Int32_array *)sub_B706AC(int___TypeInfo, 1LL);
  if ( !v5 )
    sub_B7076C(0LL, v6);
  if ( !v5->max_length )
  {
    v13 = sub_B70798(v5);
    sub_B70738(v13, 0LL);
  }
  v5->m_Items[1] = targetId;
  this->fields.fixTargetIds = v5;
  sub_B70630(
    (BattleServantConfConponent_o *)&this->fields.fixTargetIds,
    (System_Int32_array **)v5,
    v7,
    v8,
    v9,
    v10,
    v11,
    v12);
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
  BattleServantConfConponent_o *static_fields; // x0
  System_String_array **v3; // x2
  System_String_array **v4; // x3
  System_Boolean_array **v5; // x4
  System_Int32_array **v6; // x5
  System_Int32_array *v7; // x6
  System_Int32_array *v8; // x7

  if ( (byte_43513D6 & 1) == 0 )
  {
    sub_B70694(&BattleLogicFunction___c_TypeInfo);
    byte_43513D6 = 1;
  }
  v1 = (Il2CppObject *)sub_B70764(BattleLogicFunction___c_TypeInfo);
  System_Object___ctor(v1, 0LL);
  static_fields = (BattleServantConfConponent_o *)BattleLogicFunction___c_TypeInfo->static_fields;
  static_fields->klass = (BattleServantConfConponent_c *)v1;
  sub_B70630(static_fields, (System_Int32_array **)v1, v3, v4, v5, v6, v7, v8);
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
    sub_B7076C(this, 0LL);
  return BattleBuffData_BuffData__get_ExistChangeBgm(buff, 0LL);
}


bool __fastcall BattleLogicFunction___c___FunctionSubFieldBuff_b__122_1(
        BattleLogicFunction___c_o *this,
        BattleBuffData_BuffData_o *x,
        const MethodInfo *method)
{
  if ( !x )
    sub_B7076C(this, 0LL);
  return x->fields.fieldChangeData != 0LL;
}


void __fastcall BattleLogicFunction___c___SetFuncSideEffect_b__49_0(
        BattleLogicFunction___c_o *this,
        BattleActionData_o *x,
        const MethodInfo *method)
{
  if ( !x )
    sub_B7076C(this, 0LL);
  BattleActionData__SetPopupOnce(x, 0LL);
}


bool __fastcall BattleLogicFunction___c___functionMoveState_b__109_2(
        BattleLogicFunction___c_o *this,
        BattleBuffData_BuffData_o *x,
        const MethodInfo *method)
{
  if ( !x )
    sub_B7076C(this, 0LL);
  return BattleBuffData_BuffData__get_ExistChangeBgm(x, 0LL);
}


void __fastcall BattleLogicFunction___c___functionPtShuffle_b__90_0(
        BattleLogicFunction___c_o *this,
        BattleServantData_o *s,
        const MethodInfo *method)
{
  __int64 Next; // x0
  __int64 v5; // x1

  Next = BattleRandom__getNext(1000, 0LL);
  if ( !s )
    sub_B7076C(Next, v5);
  s->fields._shuffuleSeed = Next;
}


int32_t __fastcall BattleLogicFunction___c___functionPtShuffle_b__90_1(
        BattleLogicFunction___c_o *this,
        BattleServantData_o *a,
        BattleServantData_o *b,
        const MethodInfo *method)
{
  if ( !a || (this = (BattleLogicFunction___c_o *)BattleServantData__get_ShuffleSeed(a, 0LL), !b) )
    sub_B7076C(this, a);
  return (_DWORD)this - BattleServantData__get_ShuffleSeed(b, 0LL);
}


bool __fastcall BattleLogicFunction___c___functionReplaceEnemyMember_b__84_0(
        BattleLogicFunction___c_o *this,
        BattleServantData_o *x,
        const MethodInfo *method)
{
  if ( !x )
    sub_B7076C(this, 0LL);
  return BattleServantData__isAlive(x, 0, 0LL);
}


BattleServantSnapShot_o *__fastcall BattleLogicFunction___c___functionTransformServant_b__86_0(
        BattleLogicFunction___c_o *this,
        BattleServantData_o *x,
        const MethodInfo *method)
{
  BattleServantSnapShotShiftServant_o *v4; // x20

  if ( (byte_43513D7 & 1) == 0 )
  {
    sub_B70694(&BattleServantSnapShotShiftServant_TypeInfo);
    byte_43513D7 = 1;
  }
  v4 = (BattleServantSnapShotShiftServant_o *)sub_B70764(BattleServantSnapShotShiftServant_TypeInfo);
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
    sub_B7076C(this, x);
  return dataVals_k__BackingField->fields.funcType != 0;
}


bool __fastcall BattleLogicFunction___c___procList_b__41_1(
        BattleLogicFunction___c_o *this,
        BattleLogicFunctionProcess_FunctionUnitCheck_o *x,
        const MethodInfo *method)
{
  struct DataVals_o *dataVals_k__BackingField; // x8

  if ( !x || (dataVals_k__BackingField = x->fields._dataVals_k__BackingField) == 0LL )
    sub_B7076C(this, x);
  return dataVals_k__BackingField->fields.funcType == 135;
}


bool __fastcall BattleLogicFunction___c___procList_b__41_2(
        BattleLogicFunction___c_o *this,
        BattleLogicFunctionProcess_FunctionTargetCheck_o *target,
        const MethodInfo *method)
{
  if ( !target )
    sub_B7076C(this, 0LL);
  return target->fields._result_k__BackingField;
}


int32_t __fastcall BattleLogicFunction___c___procList_b__41_3(
        BattleLogicFunction___c_o *this,
        BattleLogicFunctionProcess_FunctionTargetCheck_o *target,
        const MethodInfo *method)
{
  if ( !target )
    sub_B7076C(this, 0LL);
  return target->fields._targetId_k__BackingField;
}


int32_t __fastcall BattleLogicFunction___c___setAttackSideEffect_b__52_0(
        BattleLogicFunction___c_o *this,
        BattleActionData_SideEffectData_o *x,
        const MethodInfo *method)
{
  if ( !x )
    sub_B7076C(this, 0LL);
  return x->fields.targetId;
}


void __fastcall BattleLogicFunction___c__DisplayClass102_0___ctor(
        BattleLogicFunction___c__DisplayClass102_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


void __fastcall BattleLogicFunction___c__DisplayClass102_0___UpdateUserEquipSkillChargeTurn_b__0(
        BattleLogicFunction___c__DisplayClass102_0_o *this,
        BattleSkillInfoData_o *x,
        const MethodInfo *method)
{
  if ( !x )
    sub_B7076C(this, 0LL);
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


void __fastcall BattleLogicFunction___c__DisplayClass102_0___UpdateUserEquipSkillChargeTurn_b__1(
        BattleLogicFunction___c__DisplayClass102_0_o *this,
        BattleSkillInfoData_o *x,
        const MethodInfo *method)
{
  if ( !x )
    sub_B7076C(this, 0LL);
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


void __fastcall BattleLogicFunction___c__DisplayClass109_0___ctor(
        BattleLogicFunction___c__DisplayClass109_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


bool __fastcall BattleLogicFunction___c__DisplayClass109_0___functionMoveState_b__0(
        BattleLogicFunction___c__DisplayClass109_0_o *this,
        BattleBuffData_BuffData_o *x,
        const MethodInfo *method)
{
  if ( !x )
    sub_B7076C(this, 0LL);
  return BattleBuffData_BuffData__checkState(x, this->fields.stateUnstealable, 0LL);
}


bool __fastcall BattleLogicFunction___c__DisplayClass109_0___functionMoveState_b__1(
        BattleLogicFunction___c__DisplayClass109_0_o *this,
        BattleBuffData_BuffData_o *x,
        const MethodInfo *method)
{
  System_Collections_Generic_HashSet_BattleBuffData_BuffData__o *unstealableBuffs; // x0

  if ( (byte_43513D8 & 1) == 0 )
  {
    sub_B70694(&Method_System_Collections_Generic_HashSet_BattleBuffData_BuffData__Contains__);
    byte_43513D8 = 1;
  }
  unstealableBuffs = this->fields.unstealableBuffs;
  if ( !unstealableBuffs )
    sub_B7076C(0LL, x);
  return !System_Collections_Generic_HashSet_BattleBuffData_BuffData___Contains(
            unstealableBuffs,
            x,
            (const MethodInfo_2EB4ED4 *)Method_System_Collections_Generic_HashSet_BattleBuffData_BuffData__Contains__);
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
    sub_B7076C(this, linkageIndividuality);
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
    sub_B7076C(targetSvtData, buff);
  }
  return BattleBuffData__CreateDummyBuff((BattleBuffData_o *)targetSvtData, buff, 0LL);
}


void __fastcall BattleLogicFunction___c__DisplayClass86_0___ctor(
        BattleLogicFunction___c__DisplayClass86_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


bool __fastcall BattleLogicFunction___c__DisplayClass86_0___functionTransformServant_b__1(
        BattleLogicFunction___c__DisplayClass86_0_o *this,
        BattleActionData_BuffData_o *x,
        const MethodInfo *method)
{
  if ( !x )
    sub_B7076C(this, 0LL);
  return x->fields.targetId == this->fields.targetId;
}