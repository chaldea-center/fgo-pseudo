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
  System_String_array **v16; // x2
  System_String_array **v17; // x3
  System_Boolean_array **v18; // x4
  System_Int32_array **v19; // x5
  System_Int32_array *v20; // x6
  System_Int32_array *v21; // x7
  il2cpp_array_size_t max_length; // w8
  System_Collections_Generic_Dictionary_Voice_BATTLE__string__o *v23; // x20
  BattleLogicFunctionProcess_CommonFunctionTypeProcess_o *v24; // x21
  BattleLogicFunctionProcess_AddStateProcess_o *v25; // x21
  BattleLogicFunctionProcess_AddStateShortProcess_o *v26; // x21
  BattleLogicFunctionProcess_MoveToLastSubMemberProcess_o *v27; // x21
  BattleLogicFunctionProcess_TransformServantProcess_o *v28; // x21
  BattleLogicFunctionProcess_CommonFieldFunctionProcess_o *v29; // x21
  BattleLogicFunctionProcess_CommonFieldFunctionProcess_o *v30; // x21
  BattleLogicFunctionProcess_CommonAddStateProcess_o *v31; // x21
  BattleLogicFunctionProcess_ToFieldCommonFunctionProcess_o *v32; // x21
  System_String_array **v33; // x2
  System_String_array **v34; // x3
  System_Boolean_array **v35; // x4
  System_Int32_array **v36; // x5
  System_Int32_array *v37; // x6
  System_Int32_array *v38; // x7
  __int64 v39; // x0

  if ( (byte_418A7BB & 1) == 0 )
  {
    sub_B2C35C(&BattleLogicFunctionProcess_AddStateProcess_TypeInfo, method);
    sub_B2C35C(&BattleLogicFunctionProcess_AddStateShortProcess_TypeInfo, v3);
    sub_B2C35C(&BattleLogicFunctionProcess_CommonAddStateProcess_TypeInfo, v4);
    sub_B2C35C(&BattleLogicFunctionProcess_CommonFieldFunctionProcess_TypeInfo, v5);
    sub_B2C35C(&BattleLogicFunctionProcess_CommonFunctionTypeProcess_TypeInfo, v6);
    sub_B2C35C(
      &Method_System_Collections_Generic_Dictionary_FuncList_TYPE__BattleLogicFunctionProcess_BaseFunctionTypeProcess__Add__,
      v7);
    sub_B2C35C(
      &Method_System_Collections_Generic_Dictionary_FuncList_TYPE__BattleLogicFunctionProcess_BaseFunctionTypeProcess___ctor__,
      v8);
    sub_B2C35C(
      &System_Collections_Generic_Dictionary_FuncList_TYPE__BattleLogicFunctionProcess_BaseFunctionTypeProcess__TypeInfo,
      v9);
    sub_B2C35C(&int___TypeInfo, v10);
    sub_B2C35C(&BattleLogicFunctionProcess_MoveToLastSubMemberProcess_TypeInfo, v11);
    sub_B2C35C(&BattleLogicFunctionProcess_ToFieldCommonFunctionProcess_TypeInfo, v12);
    sub_B2C35C(&BattleLogicFunctionProcess_TransformServantProcess_TypeInfo, v13);
    byte_418A7BB = 1;
  }
  v14 = (struct System_Int32_array *)sub_B2C374(int___TypeInfo, 2LL);
  if ( !v14 )
    goto LABEL_9;
  max_length = v14->max_length;
  if ( !max_length || (v14->m_Items[1] = 701601, max_length == 1) )
  {
    v39 = sub_B2C460(v14);
    sub_B2C400(v39, 0LL);
  }
  v14->m_Items[2] = 701602;
  this->fields.tamamocatTreasureDeviceIds = v14;
  sub_B2C2F8(
    (BattleServantConfConponent_o *)&this->fields.tamamocatTreasureDeviceIds,
    (System_Int32_array **)v14,
    v16,
    v17,
    v18,
    v19,
    v20,
    v21);
  v23 = (System_Collections_Generic_Dictionary_Voice_BATTLE__string__o *)sub_B2C42C(System_Collections_Generic_Dictionary_FuncList_TYPE__BattleLogicFunctionProcess_BaseFunctionTypeProcess__TypeInfo);
  System_Collections_Generic_Dictionary_Voice_BATTLE__string____ctor(
    v23,
    (const MethodInfo_2E457D0 *)Method_System_Collections_Generic_Dictionary_FuncList_TYPE__BattleLogicFunctionProcess_BaseFunctionTypeProcess___ctor__);
  v24 = (BattleLogicFunctionProcess_CommonFunctionTypeProcess_o *)sub_B2C42C(BattleLogicFunctionProcess_CommonFunctionTypeProcess_TypeInfo);
  BattleLogicFunctionProcess_CommonFunctionTypeProcess___ctor(v24, 0LL);
  if ( !v23 )
LABEL_9:
    sub_B2C434(v14, v15);
  System_Collections_Generic_Dictionary_Voice_BATTLE__string___Add(
    v23,
    0,
    (System_String_o *)v24,
    (const MethodInfo_2E46384 *)Method_System_Collections_Generic_Dictionary_FuncList_TYPE__BattleLogicFunctionProcess_BaseFunctionTypeProcess__Add__);
  v25 = (BattleLogicFunctionProcess_AddStateProcess_o *)sub_B2C42C(BattleLogicFunctionProcess_AddStateProcess_TypeInfo);
  BattleLogicFunctionProcess_AddStateProcess___ctor(v25, 0LL);
  System_Collections_Generic_Dictionary_Voice_BATTLE__string___Add(
    v23,
    1,
    (System_String_o *)v25,
    (const MethodInfo_2E46384 *)Method_System_Collections_Generic_Dictionary_FuncList_TYPE__BattleLogicFunctionProcess_BaseFunctionTypeProcess__Add__);
  v26 = (BattleLogicFunctionProcess_AddStateShortProcess_o *)sub_B2C42C(BattleLogicFunctionProcess_AddStateShortProcess_TypeInfo);
  BattleLogicFunctionProcess_AddStateShortProcess___ctor(v26, 0LL);
  System_Collections_Generic_Dictionary_Voice_BATTLE__string___Add(
    v23,
    16,
    (System_String_o *)v26,
    (const MethodInfo_2E46384 *)Method_System_Collections_Generic_Dictionary_FuncList_TYPE__BattleLogicFunctionProcess_BaseFunctionTypeProcess__Add__);
  v27 = (BattleLogicFunctionProcess_MoveToLastSubMemberProcess_o *)sub_B2C42C(BattleLogicFunctionProcess_MoveToLastSubMemberProcess_TypeInfo);
  BattleLogicFunctionProcess_MoveToLastSubMemberProcess___ctor(v27, 0LL);
  System_Collections_Generic_Dictionary_Voice_BATTLE__string___Add(
    v23,
    61,
    (System_String_o *)v27,
    (const MethodInfo_2E46384 *)Method_System_Collections_Generic_Dictionary_FuncList_TYPE__BattleLogicFunctionProcess_BaseFunctionTypeProcess__Add__);
  v28 = (BattleLogicFunctionProcess_TransformServantProcess_o *)sub_B2C42C(BattleLogicFunctionProcess_TransformServantProcess_TypeInfo);
  BattleLogicFunctionProcess_TransformServantProcess___ctor(v28, 0LL);
  System_Collections_Generic_Dictionary_Voice_BATTLE__string___Add(
    v23,
    109,
    (System_String_o *)v28,
    (const MethodInfo_2E46384 *)Method_System_Collections_Generic_Dictionary_FuncList_TYPE__BattleLogicFunctionProcess_BaseFunctionTypeProcess__Add__);
  v29 = (BattleLogicFunctionProcess_CommonFieldFunctionProcess_o *)sub_B2C42C(BattleLogicFunctionProcess_CommonFieldFunctionProcess_TypeInfo);
  BattleLogicFunctionProcess_CommonFieldFunctionProcess___ctor(v29, 0LL);
  System_Collections_Generic_Dictionary_Voice_BATTLE__string___Add(
    v23,
    29,
    (System_String_o *)v29,
    (const MethodInfo_2E46384 *)Method_System_Collections_Generic_Dictionary_FuncList_TYPE__BattleLogicFunctionProcess_BaseFunctionTypeProcess__Add__);
  v30 = (BattleLogicFunctionProcess_CommonFieldFunctionProcess_o *)sub_B2C42C(BattleLogicFunctionProcess_CommonFieldFunctionProcess_TypeInfo);
  BattleLogicFunctionProcess_CommonFieldFunctionProcess___ctor(v30, 0LL);
  System_Collections_Generic_Dictionary_Voice_BATTLE__string___Add(
    v23,
    128,
    (System_String_o *)v30,
    (const MethodInfo_2E46384 *)Method_System_Collections_Generic_Dictionary_FuncList_TYPE__BattleLogicFunctionProcess_BaseFunctionTypeProcess__Add__);
  v31 = (BattleLogicFunctionProcess_CommonAddStateProcess_o *)sub_B2C42C(BattleLogicFunctionProcess_CommonAddStateProcess_TypeInfo);
  BattleLogicFunctionProcess_CommonAddStateProcess___ctor(v31, 0LL);
  System_Collections_Generic_Dictionary_Voice_BATTLE__string___Add(
    v23,
    130,
    (System_String_o *)v31,
    (const MethodInfo_2E46384 *)Method_System_Collections_Generic_Dictionary_FuncList_TYPE__BattleLogicFunctionProcess_BaseFunctionTypeProcess__Add__);
  v32 = (BattleLogicFunctionProcess_ToFieldCommonFunctionProcess_o *)sub_B2C42C(BattleLogicFunctionProcess_ToFieldCommonFunctionProcess_TypeInfo);
  BattleLogicFunctionProcess_ToFieldCommonFunctionProcess___ctor(v32, 0LL);
  System_Collections_Generic_Dictionary_Voice_BATTLE__string___Add(
    v23,
    131,
    (System_String_o *)v32,
    (const MethodInfo_2E46384 *)Method_System_Collections_Generic_Dictionary_FuncList_TYPE__BattleLogicFunctionProcess_BaseFunctionTypeProcess__Add__);
  this->fields.dicFuncProcess = (struct System_Collections_Generic_Dictionary_FuncList_TYPE__BattleLogicFunctionProcess_BaseFunctionTypeProcess__o *)v23;
  sub_B2C2F8(
    (BattleServantConfConponent_o *)&this->fields.dicFuncProcess,
    (System_Int32_array **)v23,
    v33,
    v34,
    v35,
    v36,
    v37,
    v38);
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
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x1
  __int64 v12; // x1
  __int64 v13; // x1
  __int64 v14; // x1
  struct BattleLogicFunctionProcess_FunctionUnitCheck_o *funcUnit_k__BackingField; // x8
  BattleLogicFunction_ProcListInArgs_o *procArg_k__BackingField; // x22
  DataVals_o *dataVals_k__BackingField; // x24
  BattleActionData_o *v18; // x23
  System_Collections_Generic_List_VoiceCondType_Type__o *v19; // x25
  struct BattleLogic_o *logic; // x8
  unsigned __int64 v21; // x9
  int v22; // w10
  DataVals_o *v23; // x26
  const MethodInfo *v24; // x4
  __int64 v25; // x3
  BattleLogicFunction_c *klass; // x8
  BattleLogicFunction_o *v27; // x25
  unsigned __int64 v28; // x10
  int32_t *p_offset; // x11
  __int64 v30; // x0
  __int64 v31; // x1
  __int64 v32; // x3
  __int64 v33; // x25
  __int64 v34; // x8
  unsigned __int64 v35; // x10
  int *v36; // x11
  __int64 v37; // x0
  __int64 v38; // x3
  __int64 v39; // x8
  unsigned __int64 v40; // x10
  int *v41; // x11
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
  int v57; // w10
  __int64 v58; // x8
  int v59; // w27
  unsigned __int64 v60; // x10
  int *v61; // x11
  __int64 v62; // x0
  __int64 v64; // x0
  BattleLogicFunction_o *v65; // [xsp+0h] [xbp-80h]
  int v66; // [xsp+Ch] [xbp-74h]
  unsigned __int64 v67; // [xsp+10h] [xbp-70h]
  _DWORD v69[1]; // [xsp+20h] [xbp-60h]
  int v70; // [xsp+24h] [xbp-5Ch]
  int32_t diffNp; // [xsp+2Ch] [xbp-54h] BYREF

  v7 = this;
  if ( (byte_418A7A3 & 1) == 0 )
  {
    sub_B2C35C(&BattleActionData_TypeInfo, mainAction);
    sub_B2C35C(&System_IDisposable_TypeInfo, v8);
    sub_B2C35C(&System_Collections_Generic_IEnumerable_BattleLogicFunctionProcess_FunctionTargetCheck__TypeInfo, v9);
    sub_B2C35C(&System_Collections_Generic_IEnumerator_BattleLogicFunctionProcess_FunctionTargetCheck__TypeInfo, v10);
    sub_B2C35C(&System_Collections_IEnumerator_TypeInfo, v11);
    sub_B2C35C(&Method_System_Collections_Generic_List_FuncList_TYPE__Add__, v12);
    sub_B2C35C(&Method_System_Collections_Generic_List_FuncList_TYPE___ctor__, v13);
    this = (BattleLogicFunction_o *)sub_B2C35C(&System_Collections_Generic_List_FuncList_TYPE__TypeInfo, v14);
    byte_418A7A3 = 1;
  }
  diffNp = 0;
  v70 = 0;
  if ( !funcTarget )
    goto LABEL_65;
  funcUnit_k__BackingField = funcTarget->fields._funcUnit_k__BackingField;
  if ( !funcUnit_k__BackingField )
    goto LABEL_65;
  procArg_k__BackingField = funcUnit_k__BackingField->fields._procArg_k__BackingField;
  dataVals_k__BackingField = funcUnit_k__BackingField->fields._dataVals_k__BackingField;
  v18 = (BattleActionData_o *)sub_B2C42C(BattleActionData_TypeInfo);
  BattleActionData___ctor(v18, 0LL);
  v19 = (System_Collections_Generic_List_VoiceCondType_Type__o *)sub_B2C42C(System_Collections_Generic_List_FuncList_TYPE__TypeInfo);
  System_Collections_Generic_List_VoiceCondType_Type____ctor(
    v19,
    (const MethodInfo_2F69274 *)Method_System_Collections_Generic_List_FuncList_TYPE___ctor__);
  if ( !v19 )
    goto LABEL_65;
  System_Collections_Generic_List_VoiceCondType_Type___Add(
    v19,
    8,
    (const MethodInfo_2F69FD0 *)Method_System_Collections_Generic_List_FuncList_TYPE__Add__);
  if ( !dataVals_k__BackingField )
    goto LABEL_65;
  this = (BattleLogicFunction_o *)DataVals__GetDependDataValsArray(
                                    dataVals_k__BackingField,
                                    (System_Collections_Generic_List_FuncList_TYPE__o *)v19,
                                    0,
                                    0LL);
  if ( !this )
    goto LABEL_65;
  logic = this->fields.logic;
  if ( (int)logic >= 1 )
  {
    v21 = 0LL;
    v22 = 0;
    v65 = this;
    while ( 1 )
    {
      if ( v21 >= (unsigned int)logic )
      {
        v64 = sub_B2C460(this);
        sub_B2C400(v64, 0LL);
      }
      v23 = (DataVals_o *)*((_QWORD *)&this->fields.logictarget + v21);
      diffNp = 0;
      if ( !result )
        break;
      this = (BattleLogicFunction_o *)result->fields._Convert_k__BackingField;
      v66 = v22;
      v67 = v21;
      if ( !this )
        break;
      ((void (__fastcall *)(BattleLogicFunction_o *, DataVals_o *, void *))this->klass[1]._1.namespaze)(
        this,
        v23,
        this->klass[1]._1.byval_arg.data);
      this = (BattleLogicFunction_o *)BattleLogicFunction__GetDependFuncTargets(
                                        v7,
                                        procArg_k__BackingField,
                                        mainAction,
                                        v23,
                                        v24);
      if ( !this )
        break;
      klass = this->klass;
      v27 = this;
      if ( *(_WORD *)&this->klass->_2.bitflags1 )
      {
        v28 = 0LL;
        p_offset = &klass->_1.interfaceOffsets->offset;
        while ( *((System_Collections_Generic_IEnumerable_BattleLogicFunctionProcess_FunctionTargetCheck__c **)p_offset
                - 1) != System_Collections_Generic_IEnumerable_BattleLogicFunctionProcess_FunctionTargetCheck__TypeInfo )
        {
          ++v28;
          p_offset += 4;
          if ( v28 >= *(unsigned __int16 *)&this->klass->_2.bitflags1 )
            goto LABEL_25;
        }
        v30 = (__int64)(&klass->vtable._0_Equals.method + 2 * *p_offset);
      }
      else
      {
LABEL_25:
        v30 = sub_AC5258(
                this,
                System_Collections_Generic_IEnumerable_BattleLogicFunctionProcess_FunctionTargetCheck__TypeInfo,
                0LL,
                v25);
      }
      v33 = (*(__int64 (__fastcall **)(BattleLogicFunction_o *, _QWORD))v30)(v27, *(_QWORD *)(v30 + 8));
      if ( !v33 )
        sub_B2C434(0LL, v31);
      while ( 1 )
      {
        v34 = *(_QWORD *)v33;
        if ( *(_WORD *)(*(_QWORD *)v33 + 298LL) )
        {
          v35 = 0LL;
          v36 = (int *)(*(_QWORD *)(v34 + 176) + 8LL);
          while ( *((System_Collections_IEnumerator_c **)v36 - 1) != System_Collections_IEnumerator_TypeInfo )
          {
            ++v35;
            v36 += 4;
            if ( v35 >= *(unsigned __int16 *)(*(_QWORD *)v33 + 298LL) )
              goto LABEL_32;
          }
          v37 = v34 + 16LL * *v36 + 312;
        }
        else
        {
LABEL_32:
          v37 = sub_AC5258(v33, System_Collections_IEnumerator_TypeInfo, 0LL, v32);
        }
        if ( ((*(__int64 (__fastcall **)(__int64, _QWORD))v37)(v33, *(_QWORD *)(v37 + 8)) & 1) == 0 )
          break;
        v39 = *(_QWORD *)v33;
        if ( *(_WORD *)(*(_QWORD *)v33 + 298LL) )
        {
          v40 = 0LL;
          v41 = (int *)(*(_QWORD *)(v39 + 176) + 8LL);
          while ( *((System_Collections_Generic_IEnumerator_BattleLogicFunctionProcess_FunctionTargetCheck__c **)v41 - 1) != System_Collections_Generic_IEnumerator_BattleLogicFunctionProcess_FunctionTargetCheck__TypeInfo )
          {
            ++v40;
            v41 += 4;
            if ( v40 >= *(unsigned __int16 *)(*(_QWORD *)v33 + 298LL) )
              goto LABEL_39;
          }
          v42 = v39 + 16LL * *v41 + 312;
        }
        else
        {
LABEL_39:
          v42 = sub_AC5258(
                  v33,
                  System_Collections_Generic_IEnumerator_BattleLogicFunctionProcess_FunctionTargetCheck__TypeInfo,
                  0LL,
                  v38);
        }
        v43 = (*(__int64 (__fastcall **)(__int64, _QWORD))v42)(v33, *(_QWORD *)(v42 + 8));
        v45 = v43;
        if ( !v43 )
          sub_B2C434(0LL, v44);
        v46 = (*(__int64 (__fastcall **)(__int64, BattleActionData_o *, _QWORD))(*(_QWORD *)v43 + 392LL))(
                v43,
                mainAction,
                *(_QWORD *)(*(_QWORD *)v43 + 400LL));
        if ( (v46 & 1) != 0 )
        {
          if ( !mainAction )
            sub_B2C434(v46, v47);
          v50 = *(_DWORD *)(v45 + 32);
          v51 = BattleLogicFunction__functionLossNp(v7, procArg_k__BackingField, v48, v50, v23, &diffNp, v49);
          v52 = diffNp;
          if ( diffNp < 1 )
          {
            if ( v51 )
            {
              if ( !v23 )
                sub_B2C434(v51, v51);
              if ( !procArg_k__BackingField )
                sub_B2C434(v51, v51);
              funcIndex = v23->fields.funcIndex;
              IsCommandSideEffect = BattleLogicFunction_ProcListInArgs__get_IsCommandSideEffect(
                                      procArg_k__BackingField,
                                      0LL);
              NoEffectObject = BattleLogicFunction__getNoEffectObject(
                                 v7,
                                 v50,
                                 funcIndex,
                                 v23,
                                 IsCommandSideEffect,
                                 0LL,
                                 0LL,
                                 v55);
              if ( !v18 )
                sub_B2C434(NoEffectObject, NoEffectObject);
              BattleActionData__addAction(v18, NoEffectObject, 0LL);
            }
          }
          else
          {
            if ( !v18 )
              sub_B2C434(v51, v51);
            BattleActionData__addAction(v18, v51, 0LL);
            NpGaugeAbsorbResult__AddPoint(result, v52, 0LL);
          }
        }
      }
      v69[v66] = 229;
      v57 = ++v70;
      v58 = *(_QWORD *)v33;
      v59 = v57;
      if ( *(_WORD *)(*(_QWORD *)v33 + 298LL) )
      {
        v60 = 0LL;
        v61 = (int *)(*(_QWORD *)(v58 + 176) + 8LL);
        while ( *((System_IDisposable_c **)v61 - 1) != System_IDisposable_TypeInfo )
        {
          ++v60;
          v61 += 4;
          if ( v60 >= *(unsigned __int16 *)(*(_QWORD *)v33 + 298LL) )
            goto LABEL_57;
        }
        v62 = v58 + 16LL * *v61 + 312;
      }
      else
      {
LABEL_57:
        v62 = sub_AC5258(v33, System_IDisposable_TypeInfo, 0LL, v38);
      }
      (*(void (__fastcall **)(__int64, _QWORD))v62)(v33, *(_QWORD *)(v62 + 8));
      v22 = v59;
      if ( v59 && v69[v59 - 1] == 229 )
      {
        v22 = v59 - 1;
        v70 = v59 - 1;
      }
      this = v65;
      LODWORD(logic) = v65->fields.logic;
      v21 = v67 + 1;
      if ( (__int64)(v67 + 1) >= (int)logic )
        return v18;
    }
LABEL_65:
    sub_B2C434(this, mainAction);
  }
  return v18;
}


BattleActionData_o *__fastcall BattleLogicFunction__AbsorbNpTurn(
        BattleLogicFunction_o *this,
        BattleActionData_o *mainAction,
        BattleLogicFunctionProcess_FunctionTargetCheck_o *funcTarget,
        NpGaugeAbsorbResult_o *result,
        const MethodInfo *method)
{
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x1
  __int64 v12; // x1
  __int64 v13; // x1
  struct BattleLogicFunctionProcess_FunctionUnitCheck_o *funcUnit_k__BackingField; // x8
  DataVals_o *dataVals_k__BackingField; // x24
  BattleLogicFunction_ProcListInArgs_o *procArg_k__BackingField; // x22
  BattleActionData_o *v17; // x23
  System_Collections_Generic_List_VoiceCondType_Type__o *v18; // x25
  struct BattleLogic_o *logic; // x8
  unsigned __int64 v20; // x9
  int v21; // w10
  DataVals_o *v22; // x26
  const MethodInfo *v23; // x4
  __int64 v24; // x3
  BattleLogicFunction_c *klass; // x8
  BattleLogicFunction_o *v26; // x25
  unsigned __int64 v27; // x10
  int32_t *p_offset; // x11
  __int64 v29; // x0
  __int64 v30; // x1
  __int64 v31; // x3
  __int64 v32; // x25
  __int64 v33; // x8
  unsigned __int64 v34; // x10
  int *v35; // x11
  __int64 v36; // x0
  __int64 v37; // x3
  __int64 v38; // x8
  unsigned __int64 v39; // x10
  int *v40; // x11
  __int64 v41; // x0
  __int64 v42; // x0
  __int64 v43; // x1
  __int64 v44; // x27
  __int64 v45; // x0
  __int64 v46; // x1
  int32_t v47; // w27
  FunctionEntity_o *funcEnt; // x28
  int32_t funcIndex; // w24
  bool IsCommandSideEffect; // w0
  const MethodInfo *v51; // x7
  BattleActionData_o *v52; // x0
  int v53; // w10
  __int64 v54; // x8
  int v55; // w24
  unsigned __int64 v56; // x10
  int *v57; // x11
  __int64 v58; // x0
  __int64 v60; // x0
  BattleLogicFunction_o *v61; // [xsp+8h] [xbp-88h]
  unsigned __int64 v62; // [xsp+10h] [xbp-80h]
  int v63; // [xsp+1Ch] [xbp-74h]
  BattleLogicFunction_o *v65; // [xsp+28h] [xbp-68h]
  _DWORD v66[1]; // [xsp+30h] [xbp-60h]
  int v67; // [xsp+34h] [xbp-5Ch]
  int32_t absorptionCount; // [xsp+3Ch] [xbp-54h] BYREF

  v65 = this;
  if ( (byte_418A7A2 & 1) == 0 )
  {
    sub_B2C35C(&BattleActionData_TypeInfo, mainAction);
    sub_B2C35C(&System_IDisposable_TypeInfo, v7);
    sub_B2C35C(&System_Collections_Generic_IEnumerable_BattleLogicFunctionProcess_FunctionTargetCheck__TypeInfo, v8);
    sub_B2C35C(&System_Collections_Generic_IEnumerator_BattleLogicFunctionProcess_FunctionTargetCheck__TypeInfo, v9);
    sub_B2C35C(&System_Collections_IEnumerator_TypeInfo, v10);
    sub_B2C35C(&Method_System_Collections_Generic_List_FuncList_TYPE__Add__, v11);
    sub_B2C35C(&Method_System_Collections_Generic_List_FuncList_TYPE___ctor__, v12);
    this = (BattleLogicFunction_o *)sub_B2C35C(&System_Collections_Generic_List_FuncList_TYPE__TypeInfo, v13);
    byte_418A7A2 = 1;
  }
  absorptionCount = 0;
  v67 = 0;
  if ( !funcTarget )
    goto LABEL_59;
  funcUnit_k__BackingField = funcTarget->fields._funcUnit_k__BackingField;
  if ( !funcUnit_k__BackingField )
    goto LABEL_59;
  dataVals_k__BackingField = funcUnit_k__BackingField->fields._dataVals_k__BackingField;
  if ( !dataVals_k__BackingField )
    goto LABEL_59;
  procArg_k__BackingField = funcUnit_k__BackingField->fields._procArg_k__BackingField;
  v17 = (BattleActionData_o *)sub_B2C42C(BattleActionData_TypeInfo);
  BattleActionData___ctor(v17, 0LL);
  v18 = (System_Collections_Generic_List_VoiceCondType_Type__o *)sub_B2C42C(System_Collections_Generic_List_FuncList_TYPE__TypeInfo);
  System_Collections_Generic_List_VoiceCondType_Type____ctor(
    v18,
    (const MethodInfo_2F69274 *)Method_System_Collections_Generic_List_FuncList_TYPE___ctor__);
  if ( !v18 )
    goto LABEL_59;
  System_Collections_Generic_List_VoiceCondType_Type___Add(
    v18,
    20,
    (const MethodInfo_2F69FD0 *)Method_System_Collections_Generic_List_FuncList_TYPE__Add__);
  this = (BattleLogicFunction_o *)DataVals__GetDependDataValsArray(
                                    dataVals_k__BackingField,
                                    (System_Collections_Generic_List_FuncList_TYPE__o *)v18,
                                    0,
                                    0LL);
  if ( !this )
    goto LABEL_59;
  logic = this->fields.logic;
  if ( (int)logic >= 1 )
  {
    v20 = 0LL;
    v21 = 0;
    v61 = this;
    while ( 1 )
    {
      if ( v20 >= (unsigned int)logic )
      {
        v60 = sub_B2C460(this);
        sub_B2C400(v60, 0LL);
      }
      v22 = (DataVals_o *)*((_QWORD *)&this->fields.logictarget + v20);
      absorptionCount = 0;
      if ( !result )
        break;
      this = (BattleLogicFunction_o *)result->fields._Convert_k__BackingField;
      v63 = v21;
      v62 = v20;
      if ( !this )
        break;
      ((void (__fastcall *)(BattleLogicFunction_o *, DataVals_o *, void *))this->klass[1]._1.namespaze)(
        this,
        v22,
        this->klass[1]._1.byval_arg.data);
      this = (BattleLogicFunction_o *)BattleLogicFunction__GetDependFuncTargets(
                                        v65,
                                        procArg_k__BackingField,
                                        mainAction,
                                        v22,
                                        v23);
      if ( !this )
        break;
      klass = this->klass;
      v26 = this;
      if ( *(_WORD *)&this->klass->_2.bitflags1 )
      {
        v27 = 0LL;
        p_offset = &klass->_1.interfaceOffsets->offset;
        while ( *((System_Collections_Generic_IEnumerable_BattleLogicFunctionProcess_FunctionTargetCheck__c **)p_offset
                - 1) != System_Collections_Generic_IEnumerable_BattleLogicFunctionProcess_FunctionTargetCheck__TypeInfo )
        {
          ++v27;
          p_offset += 4;
          if ( v27 >= *(unsigned __int16 *)&this->klass->_2.bitflags1 )
            goto LABEL_23;
        }
        v29 = (__int64)(&klass->vtable._0_Equals.method + 2 * *p_offset);
      }
      else
      {
LABEL_23:
        v29 = sub_AC5258(
                this,
                System_Collections_Generic_IEnumerable_BattleLogicFunctionProcess_FunctionTargetCheck__TypeInfo,
                0LL,
                v24);
      }
      v32 = (*(__int64 (__fastcall **)(BattleLogicFunction_o *, _QWORD))v29)(v26, *(_QWORD *)(v29 + 8));
      if ( !v32 )
        sub_B2C434(0LL, v30);
      while ( 1 )
      {
        v33 = *(_QWORD *)v32;
        if ( *(_WORD *)(*(_QWORD *)v32 + 298LL) )
        {
          v34 = 0LL;
          v35 = (int *)(*(_QWORD *)(v33 + 176) + 8LL);
          while ( *((System_Collections_IEnumerator_c **)v35 - 1) != System_Collections_IEnumerator_TypeInfo )
          {
            ++v34;
            v35 += 4;
            if ( v34 >= *(unsigned __int16 *)(*(_QWORD *)v32 + 298LL) )
              goto LABEL_30;
          }
          v36 = v33 + 16LL * *v35 + 312;
        }
        else
        {
LABEL_30:
          v36 = sub_AC5258(v32, System_Collections_IEnumerator_TypeInfo, 0LL, v31);
        }
        if ( ((*(__int64 (__fastcall **)(__int64, _QWORD))v36)(v32, *(_QWORD *)(v36 + 8)) & 1) == 0 )
          break;
        v38 = *(_QWORD *)v32;
        if ( *(_WORD *)(*(_QWORD *)v32 + 298LL) )
        {
          v39 = 0LL;
          v40 = (int *)(*(_QWORD *)(v38 + 176) + 8LL);
          while ( *((System_Collections_Generic_IEnumerator_BattleLogicFunctionProcess_FunctionTargetCheck__c **)v40 - 1) != System_Collections_Generic_IEnumerator_BattleLogicFunctionProcess_FunctionTargetCheck__TypeInfo )
          {
            ++v39;
            v40 += 4;
            if ( v39 >= *(unsigned __int16 *)(*(_QWORD *)v32 + 298LL) )
              goto LABEL_37;
          }
          v41 = v38 + 16LL * *v40 + 312;
        }
        else
        {
LABEL_37:
          v41 = sub_AC5258(
                  v32,
                  System_Collections_Generic_IEnumerator_BattleLogicFunctionProcess_FunctionTargetCheck__TypeInfo,
                  0LL,
                  v37);
        }
        v42 = (*(__int64 (__fastcall **)(__int64, _QWORD))v41)(v32, *(_QWORD *)(v41 + 8));
        v44 = v42;
        if ( !v42 )
          sub_B2C434(0LL, v43);
        v45 = (*(__int64 (__fastcall **)(__int64, BattleActionData_o *, _QWORD))(*(_QWORD *)v42 + 392LL))(
                v42,
                mainAction,
                *(_QWORD *)(*(_QWORD *)v42 + 400LL));
        if ( (v45 & 1) != 0 )
        {
          if ( !v22 )
            sub_B2C434(v45, v46);
          if ( !procArg_k__BackingField )
            sub_B2C434(v45, v46);
          v47 = *(_DWORD *)(v44 + 32);
          funcEnt = v22->fields.funcEnt;
          funcIndex = v22->fields.funcIndex;
          IsCommandSideEffect = BattleLogicFunction_ProcListInArgs__get_IsCommandSideEffect(
                                  procArg_k__BackingField,
                                  0LL);
          v52 = BattleLogicFunction__functionDelayNpTurn(
                  v65,
                  v47,
                  funcEnt,
                  v22,
                  funcIndex,
                  IsCommandSideEffect,
                  &absorptionCount,
                  v51);
          if ( !v17 )
            sub_B2C434(v52, v52);
          BattleActionData__addAction(v17, v52, 0LL);
          if ( absorptionCount >= 1 )
            NpGaugeAbsorbResult__AddTurn(result, absorptionCount, 0LL);
        }
      }
      v66[v63] = 209;
      v53 = ++v67;
      v54 = *(_QWORD *)v32;
      v55 = v53;
      if ( *(_WORD *)(*(_QWORD *)v32 + 298LL) )
      {
        v56 = 0LL;
        v57 = (int *)(*(_QWORD *)(v54 + 176) + 8LL);
        while ( *((System_IDisposable_c **)v57 - 1) != System_IDisposable_TypeInfo )
        {
          ++v56;
          v57 += 4;
          if ( v56 >= *(unsigned __int16 *)(*(_QWORD *)v32 + 298LL) )
            goto LABEL_51;
        }
        v58 = v54 + 16LL * *v57 + 312;
      }
      else
      {
LABEL_51:
        v58 = sub_AC5258(v32, System_IDisposable_TypeInfo, 0LL, v37);
      }
      (*(void (__fastcall **)(__int64, _QWORD))v58)(v32, *(_QWORD *)(v58 + 8));
      v21 = v55;
      if ( v55 && v66[v55 - 1] == 209 )
      {
        v21 = v55 - 1;
        v67 = v55 - 1;
      }
      this = v61;
      LODWORD(logic) = v61->fields.logic;
      v20 = v62 + 1;
      if ( (__int64)(v62 + 1) >= (int)logic )
        return v17;
    }
LABEL_59:
    sub_B2C434(this, mainAction);
  }
  return v17;
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
  if ( (byte_418A77E & 1) == 0 )
  {
    this = (BattleLogicFunction_o *)sub_B2C35C(&UnityEngine_Object_TypeInfo, targetSvtData);
    byte_418A77E = 1;
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
      sub_B2C434(this, targetSvtData);
    }
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
  __int64 v11; // x1
  __int64 v12; // x22
  BattleData_o *data; // x0
  __int64 v14; // x1
  System_String_array **v15; // x2
  System_String_array **v16; // x3
  System_Boolean_array **v17; // x4
  System_Int32_array **v18; // x5
  System_Int32_array *v19; // x6
  System_Int32_array *v20; // x7
  __int64 v21; // x8
  System_Int32_array **ServantData; // x0
  System_String_array **v23; // x2
  System_String_array **v24; // x3
  System_Boolean_array **v25; // x4
  System_Int32_array **v26; // x5
  System_Int32_array *v27; // x6
  System_Int32_array *v28; // x7
  System_Func_int__int__o *v29; // x20
  System_Collections_Generic_IEnumerable_TSource__o *v30; // x0
  struct System_Int32_array *v31; // x0
  System_String_array **v32; // x2
  System_String_array **v33; // x3
  System_Boolean_array **v34; // x4
  System_Int32_array **v35; // x5
  System_Int32_array *v36; // x6
  System_Int32_array *v37; // x7
  System_Collections_Generic_IEnumerable_TSource__o *v38; // x0
  struct System_Int32_array *v39; // x0
  System_String_array **v40; // x2
  System_String_array **v41; // x3
  System_Boolean_array **v42; // x4
  System_Int32_array **v43; // x5
  System_Int32_array *v44; // x6
  System_Int32_array *v45; // x7

  if ( (byte_418A788 & 1) == 0 )
  {
    sub_B2C35C(&Method_System_Linq_Enumerable_Select_int__int___, buffData);
    sub_B2C35C(&Method_System_Linq_Enumerable_ToArray_int___, v7);
    sub_B2C35C(&Method_System_Func_int__int___ctor__, v8);
    sub_B2C35C(&System_Func_int__int__TypeInfo, v9);
    sub_B2C35C(&Method_BattleLogicFunction___c__DisplayClass66_0__BehaveLinkageBuffAsFamily_b__0__, v10);
    sub_B2C35C(&BattleLogicFunction___c__DisplayClass66_0_TypeInfo, v11);
    byte_418A788 = 1;
  }
  v12 = sub_B2C42C(BattleLogicFunction___c__DisplayClass66_0_TypeInfo);
  BattleLogicFunction___c__DisplayClass66_0___ctor((BattleLogicFunction___c__DisplayClass66_0_o *)v12, 0LL);
  if ( !v12 )
    goto LABEL_13;
  *(_QWORD *)(v12 + 16) = funcTarget;
  sub_B2C2F8(
    (BattleServantConfConponent_o *)(v12 + 16),
    (System_Int32_array **)funcTarget,
    v15,
    v16,
    v17,
    v18,
    v19,
    v20);
  v21 = *(_QWORD *)(v12 + 16);
  if ( !v21 )
    goto LABEL_13;
  data = this->fields.data;
  if ( !data )
    goto LABEL_13;
  ServantData = (System_Int32_array **)BattleData__getServantData(data, *(_DWORD *)(v21 + 32), 0LL);
  *(_QWORD *)(v12 + 24) = ServantData;
  sub_B2C2F8((BattleServantConfConponent_o *)(v12 + 24), ServantData, v23, v24, v25, v26, v27, v28);
  if ( !*(_QWORD *)(v12 + 24) )
    return;
  v29 = (System_Func_int__int__o *)sub_B2C42C(System_Func_int__int__TypeInfo);
  System_Func_int__int____ctor(
    v29,
    (Il2CppObject *)v12,
    Method_BattleLogicFunction___c__DisplayClass66_0__BehaveLinkageBuffAsFamily_b__0__,
    (const MethodInfo_270CF34 *)Method_System_Func_int__int___ctor__);
  if ( !buffData )
LABEL_13:
    sub_B2C434(data, v14);
  if ( !BasicHelper__IsNullOrEmpty((System_Collections_ICollection_o *)buffData->fields.addIndividualty, 0LL) )
  {
    v30 = (System_Collections_Generic_IEnumerable_TSource__o *)System_Linq_Enumerable__Select_int__int_(
                                                                 (System_Collections_Generic_IEnumerable_TSource__o *)buffData->fields.addIndividualty,
                                                                 (System_Func_TSource__TResult__o *)v29,
                                                                 (const MethodInfo_1A95534 *)Method_System_Linq_Enumerable_Select_int__int___);
    v31 = System_Linq_Enumerable__ToArray_int_(
            v30,
            (const MethodInfo_1A9AE24 *)Method_System_Linq_Enumerable_ToArray_int___);
    buffData->fields.familyLinkageIds = v31;
    sub_B2C2F8(
      (BattleServantConfConponent_o *)&buffData->fields.familyLinkageIds,
      (System_Int32_array **)v31,
      v32,
      v33,
      v34,
      v35,
      v36,
      v37);
    BattleBuffData_BuffData__onState(buffData, 0x400000, 0LL);
  }
  if ( !BasicHelper__IsNullOrEmpty((System_Collections_ICollection_o *)buffData->fields.linkageTargetIndividualty, 0LL) )
  {
    v38 = (System_Collections_Generic_IEnumerable_TSource__o *)System_Linq_Enumerable__Select_int__int_(
                                                                 (System_Collections_Generic_IEnumerable_TSource__o *)buffData->fields.linkageTargetIndividualty,
                                                                 (System_Func_TSource__TResult__o *)v29,
                                                                 (const MethodInfo_1A95534 *)Method_System_Linq_Enumerable_Select_int__int___);
    v39 = System_Linq_Enumerable__ToArray_int_(
            v38,
            (const MethodInfo_1A9AE24 *)Method_System_Linq_Enumerable_ToArray_int___);
    buffData->fields.linkageTargetIndividualty = v39;
    sub_B2C2F8(
      (BattleServantConfConponent_o *)&buffData->fields.linkageTargetIndividualty,
      (System_Int32_array **)v39,
      v40,
      v41,
      v42,
      v43,
      v44,
      v45);
    BattleBuffData_BuffData__onState(buffData, 0x400000, 0LL);
  }
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
    sub_B2C434(this, baseVals);
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
    v16 = sub_B2C460(this);
    sub_B2C400(v16, 0LL);
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
  __int64 v7; // x1
  BattleData_o *data; // x23
  struct BattleFieldEnvironmentData_o *FieldEnvData_k__BackingField; // x21
  int32_t id; // w24
  Generator_BGMFromChangeBGMFunc_o *v11; // x22
  UnityEngine_Object_o *logic; // x20

  v6 = this;
  if ( (byte_418A7B4 & 1) == 0 )
  {
    sub_B2C35C(&Generator_BGMFromChangeBGMFunc_TypeInfo, bgmEnt);
    this = (BattleLogicFunction_o *)sub_B2C35C(&UnityEngine_Object_TypeInfo, v7);
    byte_418A7B4 = 1;
  }
  data = v6->fields.data;
  if ( !data )
    goto LABEL_17;
  FieldEnvData_k__BackingField = data->fields._FieldEnvData_k__BackingField;
  if ( bgmEnt )
  {
    id = bgmEnt->fields.id;
    v11 = (Generator_BGMFromChangeBGMFunc_o *)sub_B2C42C(Generator_BGMFromChangeBGMFunc_TypeInfo);
    Generator_BGMFromChangeBGMFunc___ctor(v11, data, id, baseVals, 1, 0LL);
    if ( !FieldEnvData_k__BackingField )
      goto LABEL_17;
    ((void (__fastcall *)(struct BattleFieldEnvironmentData_o *, Generator_BGMFromChangeBGMFunc_o *, __int64, Il2CppMethodPointer))FieldEnvData_k__BackingField->klass->vtable._6_AddBGM.method)(
      FieldEnvData_k__BackingField,
      v11,
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
    sub_B2C434(this, bgmEnt);
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
  __int64 v16; // x22
  __int64 v17; // x22
  DataManager_o *MasterData_WarQuestSelectionMaster; // x0
  struct BattleSkillInfoData_o *skillInfo; // x8
  SkillLvMaster_o *v20; // x22
  struct BattleSkillInfoData_o *v21; // x8
  SkillLvEntity_o *v22; // x22
  DataMasterBase_WarMaster__WarEntity__int__o *v23; // x19
  BattleData_o *data; // x8
  DataManager_o *v25; // x20
  int datalist; // w8
  System_Int32_array *v27; // x21
  unsigned int v28; // w24
  __int64 v29; // x8
  __int64 v30; // x8
  int32_t v31; // w22
  int64_t v32; // x23
  __int64 v33; // x8
  __int64 v34; // x9
  WarEntity_o *entity; // [xsp+8h] [xbp-58h] BYREF

  if ( (byte_418A7B3 & 1) == 0 )
  {
    sub_B2C35C(&Method_System_Array_IndexOf_int___, *(_QWORD *)&uniqueID);
    sub_B2C35C(&CondType_TypeInfo, v7);
    sub_B2C35C(&Method_DataManager_GetMasterData_BgmMaster___, v8);
    sub_B2C35C(&Method_DataManager_GetMasterData_SkillLvMaster___, v9);
    sub_B2C35C(&Method_DataMasterBase_BgmMaster__BgmEntity__int__TryGetEntity__, v10);
    sub_B2C35C(&Method_System_Collections_Generic_List_SkillLvEntity_SvtChangeBgm__get_Count__, v11);
    sub_B2C35C(&Method_System_Collections_Generic_List_SkillLvEntity_SvtChangeBgm__get_Item__, v12);
    sub_B2C35C(&Method_SingletonMonoBehaviour_DataManager__getInstance__, v13);
    sub_B2C35C(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v14);
    byte_418A7B3 = 1;
  }
  result = 0LL;
  entity = 0LL;
  if ( uniqueID != -1 && actionData )
  {
    v16 = *((_QWORD *)Method_SingletonMonoBehaviour_DataManager__getInstance__ + 3);
    if ( (*(_BYTE *)(v16 + 306) & 1) == 0 )
      sub_AC505C(*((_QWORD *)Method_SingletonMonoBehaviour_DataManager__getInstance__ + 3));
    v17 = **(_QWORD **)(v16 + 192);
    if ( (*(_BYTE *)(v17 + 306) & 1) == 0 )
      sub_AC505C(v17);
    MasterData_WarQuestSelectionMaster = **(DataManager_o ***)(v17 + 184);
    if ( !MasterData_WarQuestSelectionMaster )
      goto LABEL_42;
    MasterData_WarQuestSelectionMaster = (DataManager_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                            MasterData_WarQuestSelectionMaster,
                                                            (const MethodInfo_17339EC *)Method_DataManager_GetMasterData_SkillLvMaster___);
    skillInfo = actionData->fields.skillInfo;
    if ( !skillInfo )
      goto LABEL_42;
    v20 = (SkillLvMaster_o *)MasterData_WarQuestSelectionMaster;
    MasterData_WarQuestSelectionMaster = (DataManager_o *)((__int64 (__fastcall *)(struct BattleSkillInfoData_o *, Il2CppMethodPointer))skillInfo->klass->vtable._5_get_skillId.method)(
                                                            actionData->fields.skillInfo,
                                                            skillInfo->klass->vtable._6_get_IndividualityArray.methodPtr);
    v21 = actionData->fields.skillInfo;
    if ( !v21 )
      goto LABEL_42;
    if ( !v20 )
      goto LABEL_42;
    v22 = SkillLvMaster__GetEntity(v20, (int32_t)MasterData_WarQuestSelectionMaster, v21->fields.skilllv, 0LL);
    MasterData_WarQuestSelectionMaster = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !MasterData_WarQuestSelectionMaster )
      goto LABEL_42;
    MasterData_WarQuestSelectionMaster = (DataManager_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                            MasterData_WarQuestSelectionMaster,
                                                            (const MethodInfo_17339EC *)Method_DataManager_GetMasterData_BgmMaster___);
    if ( !v22 )
      goto LABEL_42;
    v23 = (DataMasterBase_WarMaster__WarEntity__int__o *)MasterData_WarQuestSelectionMaster;
    MasterData_WarQuestSelectionMaster = (DataManager_o *)SkillLvEntity__GetSvtChangeBgm(v22, 0LL);
    data = this->fields.data;
    if ( !data )
      goto LABEL_42;
    v25 = MasterData_WarQuestSelectionMaster;
    MasterData_WarQuestSelectionMaster = (DataManager_o *)BattleData__getPlayerServantData(data, uniqueID, 0LL);
    if ( !MasterData_WarQuestSelectionMaster )
      goto LABEL_42;
    MasterData_WarQuestSelectionMaster = (DataManager_o *)BattleServantData__getIndividualities(
                                                            (BattleServantData_o *)MasterData_WarQuestSelectionMaster,
                                                            0LL,
                                                            0LL);
    if ( !v25 )
      goto LABEL_42;
    datalist = (int)v25->fields.datalist;
    if ( datalist >= 1 )
    {
      v27 = (System_Int32_array *)MasterData_WarQuestSelectionMaster;
      v28 = 0;
      while ( 1 )
      {
        if ( datalist <= v28 )
          System_ThrowHelper__ThrowArgumentOutOfRangeException_41710740(0LL);
        v29 = *(_QWORD *)(*(_QWORD *)&v25->fields.m_CachedPtr + 8LL * (int)v28 + 32);
        if ( !v29 )
          break;
        MasterData_WarQuestSelectionMaster = (DataManager_o *)System_Array__IndexOf_int_(
                                                                v27,
                                                                *(_DWORD *)(v29 + 16),
                                                                (const MethodInfo_1FFD52C *)Method_System_Array_IndexOf_int___);
        if ( (_DWORD)MasterData_WarQuestSelectionMaster != -1 )
        {
          if ( LODWORD(v25->fields.datalist) <= v28 )
            System_ThrowHelper__ThrowArgumentOutOfRangeException_41710740(0LL);
          v30 = *(_QWORD *)(*(_QWORD *)&v25->fields.m_CachedPtr + 8LL * (int)v28 + 32);
          if ( !v30 )
            break;
          v31 = *(_DWORD *)(v30 + 20);
          if ( LODWORD(v25->fields.datalist) <= v28 )
            System_ThrowHelper__ThrowArgumentOutOfRangeException_41710740(0LL);
          v32 = *(int *)(v30 + 24);
          if ( (BYTE3(CondType_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !CondType_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(CondType_TypeInfo);
          MasterData_WarQuestSelectionMaster = (DataManager_o *)CondType__IsOpen(46, v31, v32, 0, 0LL);
          if ( LODWORD(v25->fields.datalist) <= v28 )
            System_ThrowHelper__ThrowArgumentOutOfRangeException_41710740(0LL);
          v33 = *(_QWORD *)(*(_QWORD *)&v25->fields.m_CachedPtr + 8LL * (int)v28 + 32);
          if ( !v33 || !v23 )
            break;
          v34 = 28LL;
          if ( ((unsigned __int8)MasterData_WarQuestSelectionMaster & 1) != 0 )
            v34 = 32LL;
          MasterData_WarQuestSelectionMaster = (DataManager_o *)DataMasterBase_WarMaster__WarEntity__int___TryGetEntity(
                                                                  v23,
                                                                  &entity,
                                                                  *(_DWORD *)(v33 + v34),
                                                                  (const MethodInfo_24E412C *)Method_DataMasterBase_BgmMaster__BgmEntity__int__TryGetEntity__);
          if ( ((unsigned __int8)MasterData_WarQuestSelectionMaster & 1) != 0 )
            return (BgmEntity_o *)entity;
        }
        datalist = (int)v25->fields.datalist;
        if ( (int)++v28 >= datalist )
          return (BgmEntity_o *)entity;
      }
LABEL_42:
      sub_B2C434(MasterData_WarQuestSelectionMaster, *(_QWORD *)&uniqueID);
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


void __fastcall BattleLogicFunction__DebugLog(
        BattleLogicFunction_o *this,
        System_String_o *str,
        const MethodInfo *method)
{
  ;
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
  if ( (byte_418A7B6 & 1) == 0 )
  {
    this = (BattleLogicFunction_o *)sub_B2C35C(&UnityEngine_Object_TypeInfo, args);
    byte_418A7B6 = 1;
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
    sub_B2C434(this, args);
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
    sub_B2C434(this, *(_QWORD *)&faceId);
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
  struct BattleData_o *v17; // x8
  struct BattleSkillInfoData_o *v18; // x8
  BattleLogicFunction_o *v19; // x25
  BattleLogicFunction_OnlyCheckFuncSideEffectFunctionArgument_o *v20; // x23
  struct BattleLogic_o *logic; // x8
  BattleLogicSkill_o *logicSkill; // x26
  System_String_array **v23; // x2
  System_String_array **v24; // x3
  System_Boolean_array **v25; // x4
  System_Int32_array **v26; // x5
  System_Int32_array *v27; // x6
  System_Int32_array *v28; // x7
  int v29; // w8
  BattleLogicFunction_o *v30; // x24
  bool v31; // w26
  unsigned int v32; // w27
  __int64 v33; // x25
  struct BattleLogic_o *v34; // x8
  BattleActionData_o *v35; // x25
  BattleLogicFunction_FuncSideEffectFunctionArgument_o *FuncSideEffectArg; // x0
  __int64 v37; // x0
  BattleActionData_o *baseActionData; // [xsp+8h] [xbp-58h] BYREF

  v8 = this;
  if ( (byte_418A7BA & 1) == 0 )
  {
    sub_B2C35C(&BattleSkillInfoData_TypeInfo, actionData);
    sub_B2C35C(&int___TypeInfo, v9);
    this = (BattleLogicFunction_o *)sub_B2C35C(
                                      &BattleLogicFunction_OnlyCheckFuncSideEffectFunctionArgument_TypeInfo,
                                      v10);
    byte_418A7BA = 1;
  }
  baseActionData = 0LL;
  data = v8->fields.data;
  if ( !data )
    goto LABEL_34;
  if ( !data->fields._lastUsedPlayerSkillInfo_k__BackingField )
    return;
  v12 = (BattleSkillInfoData_o *)sub_B2C42C(BattleSkillInfoData_TypeInfo);
  BattleSkillInfoData___ctor(v12, 0LL);
  if ( !actionData )
    goto LABEL_34;
  if ( !v12 )
    goto LABEL_34;
  v12->fields.svtUniqueId = actionData->fields.actorId;
  v13 = v8->fields.data;
  if ( !v13 )
    goto LABEL_34;
  this = (BattleLogicFunction_o *)v13->fields._lastUsedPlayerSkillInfo_k__BackingField;
  if ( !this )
    goto LABEL_34;
  v14 = ((__int64 (__fastcall *)(BattleLogicFunction_o *, void *))this->klass[1]._1.namespaze)(
          this,
          this->klass[1]._1.byval_arg.data);
  this = (BattleLogicFunction_o *)((__int64 (__fastcall *)(BattleSkillInfoData_o *, _QWORD, Il2CppMethodPointer))v12->klass->vtable._4_set_skillId.method)(
                                    v12,
                                    v14,
                                    v12->klass->vtable._5_get_skillId.methodPtr);
  v15 = v8->fields.data;
  if ( !v15 )
    goto LABEL_34;
  lastUsedPlayerSkillInfo_k__BackingField = v15->fields._lastUsedPlayerSkillInfo_k__BackingField;
  if ( !lastUsedPlayerSkillInfo_k__BackingField )
    goto LABEL_34;
  v12->fields.skilllv = lastUsedPlayerSkillInfo_k__BackingField->fields.skilllv;
  v17 = v8->fields.data;
  if ( !v17 )
    goto LABEL_34;
  v18 = v17->fields._lastUsedPlayerSkillInfo_k__BackingField;
  if ( !v18 )
    goto LABEL_34;
  BattleSkillInfoData__UpdateSelectAddIndex(v12, v18->fields._SelectAddIndex_k__BackingField, 0LL);
  if ( !args )
    goto LABEL_34;
  this = (BattleLogicFunction_o *)BattleLogicFunction_ProcListInArgs__get_FuncSideEffectArg(args, 0LL);
  v19 = this;
  if ( this )
  {
    v20 = (BattleLogicFunction_OnlyCheckFuncSideEffectFunctionArgument_o *)sub_B2C42C(BattleLogicFunction_OnlyCheckFuncSideEffectFunctionArgument_TypeInfo);
    BattleLogicFunction_OnlyCheckFuncSideEffectFunctionArgument___ctor(v20, 0LL);
  }
  else
  {
    v20 = 0LL;
  }
  logic = v8->fields.logic;
  if ( !logic )
    goto LABEL_34;
  logicSkill = logic->fields.logicSkill;
  this = (BattleLogicFunction_o *)sub_B2C374(int___TypeInfo, 1LL);
  if ( !this )
    goto LABEL_34;
  if ( !LODWORD(this->fields.logic) )
    goto LABEL_35;
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
                                          0LL)) == 0LL )
  {
LABEL_34:
    sub_B2C434(this, actionData);
  }
  v29 = (int)this->fields.logic;
  v30 = this;
  v31 = v19 != 0LL;
  if ( v29 >= 1 )
  {
    v32 = 0;
    while ( v32 < v29 )
    {
      v33 = *((_QWORD *)&v30->fields.logictarget + (int)v32);
      if ( !v33 )
        goto LABEL_34;
      *(_QWORD *)(v33 + 176) = v20;
      *(_BYTE *)(v33 + 169) = v31;
      sub_B2C2F8((BattleServantConfConponent_o *)(v33 + 176), (System_Int32_array **)v20, v23, v24, v25, v26, v27, v28);
      v34 = v8->fields.logic;
      if ( !v34 )
        goto LABEL_34;
      this = (BattleLogicFunction_o *)v34->fields.logicSkill;
      if ( !this )
        goto LABEL_34;
      v35 = BattleLogicSkill__createSkillData_28766400(
              (BattleLogicSkill_o *)this,
              (BattleLogicTask_o *)v33,
              1,
              baseVals,
              &baseActionData,
              0LL);
      BattleActionData__addAction(actionData, v35, 0LL);
      if ( v35 )
        actionData->fields.isSuccessSkillCopyFunction = 1;
      v29 = (int)v30->fields.logic;
      if ( (int)++v32 >= v29 )
        goto LABEL_31;
    }
LABEL_35:
    v37 = sub_B2C460(this);
    sub_B2C400(v37, 0LL);
  }
LABEL_31:
  FuncSideEffectArg = BattleLogicFunction_ProcListInArgs__get_FuncSideEffectArg(args, 0LL);
  if ( FuncSideEffectArg )
    BattleLogicFunction_FuncSideEffectFunctionArgument__AddTarget_24165948(
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
  MoveToSubMemberWaveTurnEvent_o *v16; // x25
  bool v17; // w24
  int32_t v18; // w0
  int32_t uniqueId; // w25
  int32_t v20; // w26
  RestockServantLogicByMoveToSubMember_o *v21; // x23
  BattleActionData_o *v22; // x21

  v9 = this;
  if ( (byte_418A798 & 1) == 0 )
  {
    sub_B2C35C(&Method_BasicHelper_IndexValue_int____67381984, targetServantData);
    sub_B2C35C(&BattleActionData_TypeInfo, v10);
    sub_B2C35C(&MoveToSubMemberWaveTurnEvent_TypeInfo, v11);
    this = (BattleLogicFunction_o *)sub_B2C35C(&RestockServantLogicByMoveToSubMember_TypeInfo, v12);
    byte_418A798 = 1;
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
  BattleData__SubBuffFromPT_18448196((BattleData_o *)this, targetServantData, 0LL);
  this = (BattleLogicFunction_o *)v9->fields.data;
  if ( !this )
    goto LABEL_13;
  BattleData__SubBuffExitSvt((BattleData_o *)this, targetServantData, 0LL);
  this = (BattleLogicFunction_o *)v9->fields.data;
  if ( !this )
    goto LABEL_13;
  targetServantData->fields.deckIndex = BattleData__GetSubServantUsableDeckIndex((BattleData_o *)this, isEnemy, 0LL);
  data = v9->fields.data;
  v16 = (MoveToSubMemberWaveTurnEvent_o *)sub_B2C42C(MoveToSubMemberWaveTurnEvent_TypeInfo);
  MoveToSubMemberWaveTurnEvent___ctor(v16, data, 0LL);
  BattleServantData__RegisterWaveTurnEvent(targetServantData, (ServantWaveTurnEvent_o *)v16, 0LL);
  if ( !funcEnt )
    goto LABEL_13;
  v17 = isEnemy;
  v18 = BasicHelper__IndexValue_int_(
          funcEnt->fields.vals,
          0,
          0,
          (const MethodInfo_172891C *)Method_BasicHelper_IndexValue_int____67381984);
  uniqueId = targetServantData->fields.uniqueId;
  v20 = v18;
  v21 = (RestockServantLogicByMoveToSubMember_o *)sub_B2C42C(RestockServantLogicByMoveToSubMember_TypeInfo);
  RestockServantLogicByMoveToSubMember___ctor(v21, ServantIndex, v17, v20, uniqueId, 0LL);
  this = (BattleLogicFunction_o *)v9->fields.data;
  if ( !this
    || (BattleData__AppendRestockServantLogic((BattleData_o *)this, (RestockServantLogic_o *)v21, 0LL),
        v22 = (BattleActionData_o *)sub_B2C42C(BattleActionData_TypeInfo),
        BattleActionData___ctor(v22, 0LL),
        !v22) )
  {
LABEL_13:
    sub_B2C434(this, targetServantData);
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
  if ( (byte_418A7B7 & 1) == 0 )
  {
    this = (BattleLogicFunction_o *)sub_B2C35C(&UnityEngine_Object_TypeInfo, args);
    byte_418A7B7 = 1;
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
    sub_B2C434(this, args);
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
  __int64 v18; // x1
  __int64 v19; // x1
  struct BattleLogicFunctionProcess_FunctionUnitCheck_o *funcUnit_k__BackingField; // x20
  DataVals_o *dataVals_k__BackingField; // x20
  int32_t targetId_k__BackingField; // w25
  FunctionEntity_o *funcEnt; // x27
  int32_t v24; // w24
  Il2CppClass *klass; // x8
  BattleActionData_BuffData_o *v26; // x26
  struct BattleData_o *data; // x23
  int rootfsm; // w28
  _BOOL8 IsCommandSideEffect; // x0
  const MethodInfo *v30; // x6
  const MethodInfo *v31; // x7
  bool v32; // w4
  BattleActionData_BuffData_o *FunctionObject; // x22
  System_Func_WarBoardManager_WarBoardOnboardSkillTarget__WarBoardPieceData__o *v34; // x24
  System_Collections_Generic_IEnumerable_TSource__o *v35; // x0
  System_String_array **v36; // x2
  System_String_array **v37; // x3
  System_Boolean_array **v38; // x4
  System_Int32_array **v39; // x5
  System_Int32_array *v40; // x6
  System_Int32_array *v41; // x7
  BattleLogicFunction___c_c *v42; // x0
  struct BattleLogicFunction___c_StaticFields *static_fields; // x8
  System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *_9__119_1; // x21
  Il2CppObject *v45; // x24
  struct BattleLogicFunction___c_StaticFields *v46; // x0
  System_String_array **v47; // x2
  System_String_array **v48; // x3
  System_Boolean_array **v49; // x4
  System_Int32_array **v50; // x5
  System_Int32_array *v51; // x6
  System_Int32_array *v52; // x7
  BattleActionEffect_UpdateAllInfo_o *v53; // x21
  System_String_array **v54; // x2
  System_String_array **v55; // x3
  System_Boolean_array **v56; // x4
  System_Int32_array **v57; // x5
  System_Int32_array *v58; // x6
  System_Int32_array *v59; // x7

  v8 = (Il2CppObject *)this;
  if ( (byte_418A7B9 & 1) == 0 )
  {
    sub_B2C35C(&Method_BasicHelper_Any_BattleBuffData_BuffData___, args);
    sub_B2C35C(&Method_BattleLogicFunction__FunctionSubFieldBuff_b__119_0__, v9);
    sub_B2C35C(&Method_System_Linq_Enumerable_Select_BattleBuffData_BuffData__BattleBuffData_BuffData___, v10);
    sub_B2C35C(&Method_System_Linq_Enumerable_ToList_BattleBuffData_BuffData___, v11);
    sub_B2C35C(&Method_System_Func_BattleBuffData_BuffData__bool___ctor__, v12);
    sub_B2C35C(&Method_System_Func_BattleBuffData_BuffData__BattleBuffData_BuffData___ctor__, v13);
    sub_B2C35C(&System_Func_BattleBuffData_BuffData__bool__TypeInfo, v14);
    sub_B2C35C(&System_Func_BattleBuffData_BuffData__BattleBuffData_BuffData__TypeInfo, v15);
    sub_B2C35C(&Method_System_Collections_Generic_List_BattleBuffData_BuffData__get_Count__, v16);
    sub_B2C35C(&Method_BattleLogicFunction___c__FunctionSubFieldBuff_b__119_1__, v17);
    sub_B2C35C(&BattleLogicFunction___c_TypeInfo, v18);
    this = (BattleLogicFunction_o *)sub_B2C35C(&BattleActionEffect_UpdateAllInfo_TypeInfo, v19);
    byte_418A7B9 = 1;
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
  v24 = (int)this;
  this = (BattleLogicFunction_o *)((__int64 (__fastcall *)(BattleLogicFunctionProcess_FunctionTargetCheck_o *, Il2CppMethodPointer))funcTarget->klass->vtable._7_MakeActionBuffData.method)(
                                    funcTarget,
                                    funcTarget->klass->vtable._8_AddBuff.methodPtr);
  klass = v8[1].klass;
  if ( !klass )
    goto LABEL_28;
  if ( !funcEnt )
    goto LABEL_28;
  v26 = (BattleActionData_BuffData_o *)this;
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
  v32 = IsCommandSideEffect;
  if ( rootfsm > 0 )
  {
    FunctionObject = BattleLogicFunction__getFunctionObject(
                       (BattleLogicFunction_o *)IsCommandSideEffect,
                       funcEnt,
                       targetId_k__BackingField,
                       v24,
                       v32,
                       v26,
                       v30);
    v34 = (System_Func_WarBoardManager_WarBoardOnboardSkillTarget__WarBoardPieceData__o *)sub_B2C42C(System_Func_BattleBuffData_BuffData__BattleBuffData_BuffData__TypeInfo);
    System_Func_WarBoardManager_WarBoardOnboardSkillTarget__WarBoardPieceData____ctor(
      v34,
      v8,
      Method_BattleLogicFunction__FunctionSubFieldBuff_b__119_0__,
      (const MethodInfo_2713350 *)Method_System_Func_BattleBuffData_BuffData__BattleBuffData_BuffData___ctor__);
    v35 = (System_Collections_Generic_IEnumerable_TSource__o *)System_Linq_Enumerable__Select_WarBoardManager_WarBoardOnboardSkillTarget__WarBoardPieceData_(
                                                                 (System_Collections_Generic_IEnumerable_TSource__o *)data,
                                                                 (System_Func_TSource__TResult__o *)v34,
                                                                 (const MethodInfo_1A96D40 *)Method_System_Linq_Enumerable_Select_BattleBuffData_BuffData__BattleBuffData_BuffData___);
    this = (BattleLogicFunction_o *)System_Linq_Enumerable__ToList_WarBoardManager_WarBoardOnboardSkillTarget_(
                                      v35,
                                      (const MethodInfo_1A9DE9C *)Method_System_Linq_Enumerable_ToList_BattleBuffData_BuffData___);
    if ( FunctionObject )
    {
      FunctionObject->fields.removeBuffList = (struct System_Collections_Generic_List_BattleBuffData_BuffData__o *)this;
      sub_B2C2F8(
        (BattleServantConfConponent_o *)&FunctionObject->fields.removeBuffList,
        (System_Int32_array **)this,
        v36,
        v37,
        v38,
        v39,
        v40,
        v41);
      v42 = BattleLogicFunction___c_TypeInfo;
      if ( (BYTE3(BattleLogicFunction___c_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !BattleLogicFunction___c_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(BattleLogicFunction___c_TypeInfo);
        v42 = BattleLogicFunction___c_TypeInfo;
      }
      static_fields = v42->static_fields;
      _9__119_1 = (System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *)static_fields->__9__119_1;
      if ( !_9__119_1 )
      {
        if ( (BYTE3(v42->vtable._0_Equals.methodPtr) & 4) != 0 && !v42->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(v42);
          static_fields = BattleLogicFunction___c_TypeInfo->static_fields;
        }
        v45 = (Il2CppObject *)static_fields->__9;
        _9__119_1 = (System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *)sub_B2C42C(System_Func_BattleBuffData_BuffData__bool__TypeInfo);
        System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool____ctor(
          _9__119_1,
          v45,
          Method_BattleLogicFunction___c__FunctionSubFieldBuff_b__119_1__,
          (const MethodInfo_2711C04 *)Method_System_Func_BattleBuffData_BuffData__bool___ctor__);
        v46 = BattleLogicFunction___c_TypeInfo->static_fields;
        v46->__9__119_1 = (struct System_Func_BattleBuffData_BuffData__bool__o *)_9__119_1;
        sub_B2C2F8(
          (BattleServantConfConponent_o *)&v46->__9__119_1,
          (System_Int32_array **)_9__119_1,
          v47,
          v48,
          v49,
          v50,
          v51,
          v52);
      }
      this = (BattleLogicFunction_o *)BasicHelper__Any_WarBoardData_SquareRangeSearch_(
                                        (System_Collections_Generic_List_T__o *)data,
                                        (System_Func_T__bool__o *)_9__119_1,
                                        (const MethodInfo_17266AC *)Method_BasicHelper_Any_BattleBuffData_BuffData___);
      if ( ((unsigned __int8)this & 1) != 0 )
      {
        v53 = (BattleActionEffect_UpdateAllInfo_o *)sub_B2C42C(BattleActionEffect_UpdateAllInfo_TypeInfo);
        BattleActionEffect_UpdateAllInfo___ctor(v53, 0LL);
        FunctionObject->fields.EffectProc = (struct BattleActionEffect_Base_o *)v53;
        sub_B2C2F8(
          (BattleServantConfConponent_o *)&FunctionObject->fields.EffectProc,
          (System_Int32_array **)v53,
          v54,
          v55,
          v56,
          v57,
          v58,
          v59);
      }
      if ( mainAction )
      {
        BattleActionData__setBuffData(mainAction, FunctionObject, dataVals_k__BackingField, 0LL);
        return;
      }
    }
LABEL_28:
    sub_B2C434(this, args);
  }
  this = (BattleLogicFunction_o *)BattleLogicFunction__getNoEffectObject(
                                    (BattleLogicFunction_o *)v8,
                                    targetId_k__BackingField,
                                    v24,
                                    dataVals_k__BackingField,
                                    v32,
                                    0LL,
                                    v26,
                                    v31);
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
  __int64 v11; // x1
  struct BattleLogicFunctionProcess_FunctionUnitCheck_o *funcUnit_k__BackingField; // x8
  DataVals_o *dataVals_k__BackingField; // x24
  bool isParam; // w0
  const MethodInfo *v15; // x5
  BattleBuffData_FieldChangeData_o *tamamocatTreasureDeviceIds; // x22
  struct BattleData_o *data; // x8
  Generator_BGFromFieldChangeBGBuff_o *v18; // x21
  const MethodInfo *v19; // x3
  BattleData_o *v20; // x21
  Generator_BGMFromFieldChangeBGBuff_o *v21; // x23
  const MethodInfo *v22; // x3

  v10 = this;
  if ( (byte_418A7B8 & 1) == 0 )
  {
    sub_B2C35C(&Generator_BGFromFieldChangeBGBuff_TypeInfo, args);
    this = (BattleLogicFunction_o *)sub_B2C35C(&Generator_BGMFromFieldChangeBGBuff_TypeInfo, v11);
    byte_418A7B8 = 1;
  }
  if ( !funcTarget )
    goto LABEL_17;
  funcUnit_k__BackingField = funcTarget->fields._funcUnit_k__BackingField;
  if ( !funcUnit_k__BackingField )
    goto LABEL_17;
  dataVals_k__BackingField = funcUnit_k__BackingField->fields._dataVals_k__BackingField;
  if ( !dataVals_k__BackingField )
    goto LABEL_17;
  isParam = DataVals__isParam(funcUnit_k__BackingField->fields._dataVals_k__BackingField, 102, 0LL);
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
        dataVals_k__BackingField,
        data->fields._FieldEnvData_k__BackingField,
        0LL);
      return;
    }
LABEL_17:
    sub_B2C434(this, args);
  }
  if ( !tamamocatTreasureDeviceIds )
    goto LABEL_17;
  if ( tamamocatTreasureDeviceIds->fields.bgId >= 1 )
  {
    v18 = (Generator_BGFromFieldChangeBGBuff_o *)sub_B2C42C(Generator_BGFromFieldChangeBGBuff_TypeInfo);
    Generator_BGFromFieldChangeBGBuff___ctor(v18, tamamocatTreasureDeviceIds, 0LL);
    BattleLogicFunction__FunctionQuickChangeBG(v10, args, (Generator_Background_o *)v18, v19);
  }
  if ( tamamocatTreasureDeviceIds->fields.bgmId >= 1 )
  {
    v20 = v10->fields.data;
    v21 = (Generator_BGMFromFieldChangeBGBuff_o *)sub_B2C42C(Generator_BGMFromFieldChangeBGBuff_TypeInfo);
    Generator_BGMFromFieldChangeBGBuff___ctor(v21, v20, tamamocatTreasureDeviceIds, 0LL);
    BattleLogicFunction__FunctionChangeBgm(v10, args, (Generator_BGM_o *)v21, v22);
  }
}


void __fastcall BattleLogicFunction__FunctionUpdateEntryMaxCountEachTurn(
        BattleLogicFunction_o *this,
        DataVals_o *baseVals,
        const MethodInfo *method)
{
  struct BattleData_o *data; // x19

  if ( !baseVals || (data = this->fields.data, this = (BattleLogicFunction_o *)DataVals__GetValue(baseVals, 0LL), !data) )
    sub_B2C434(this, baseVals);
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
    sub_B2C434(this, baseVals);
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

  if ( (byte_418A78D & 1) == 0 )
  {
    this = (BattleLogicFunction_o *)sub_B2C35C(&System_Math_TypeInfo, dataVals);
    byte_418A78D = 1;
  }
  if ( !dataVals )
    goto LABEL_11;
  this = (BattleLogicFunction_o *)DataVals__isParam(dataVals, 116, 0LL);
  if ( ((unsigned __int8)this & 1) == 0 )
    return healPoint;
  if ( !targetSvtData )
LABEL_11:
    sub_B2C434(this, dataVals);
  MaxHp = BattleServantData__getMaxHp(targetSvtData, 0LL);
  v9 = ((__int64 (__fastcall *)(BattleServantData_o *, Il2CppMethodPointer))targetSvtData->klass->vtable._13_get_resultHp.method)(
         targetSvtData,
         targetSvtData->klass->vtable._14_set_resultHp.methodPtr);
  if ( (BYTE3(System_Math_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !System_Math_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(System_Math_TypeInfo);
  return System_Math__Min_44967328(healPoint, MaxHp - v9, 0LL);
}


BuffEntity_o *__fastcall BattleLogicFunction__GetBuffEntity(
        BattleLogicFunction_o *this,
        FunctionEntity_o *funcEnt,
        const MethodInfo *method)
{
  __int64 v4; // x1
  __int64 v5; // x1
  DataMasterBase_WarMaster__WarEntity__int__o *Master_WarQuestSelectionMaster; // x0
  __int64 v7; // x1
  struct System_Int32_array *vals; // x8
  __int64 v10; // x0

  if ( (byte_418A772 & 1) == 0 )
  {
    sub_B2C35C(&Method_DataManager_GetMaster_BuffMaster___, funcEnt);
    sub_B2C35C(&DataManager_TypeInfo, v4);
    sub_B2C35C(&Method_DataMasterBase_BuffMaster__BuffEntity__int__GetEntity__, v5);
    byte_418A772 = 1;
  }
  if ( (BYTE3(DataManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_WarQuestSelectionMaster = (DataMasterBase_WarMaster__WarEntity__int__o *)DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_173398C *)Method_DataManager_GetMaster_BuffMaster___);
  if ( !funcEnt )
    goto LABEL_11;
  vals = funcEnt->fields.vals;
  if ( !vals )
    goto LABEL_11;
  if ( !vals->max_length )
  {
    v10 = sub_B2C460(Master_WarQuestSelectionMaster);
    sub_B2C400(v10, 0LL);
  }
  if ( !Master_WarQuestSelectionMaster )
LABEL_11:
    sub_B2C434(Master_WarQuestSelectionMaster, v7);
  return (BuffEntity_o *)DataMasterBase_WarMaster__WarEntity__int___GetEntity(
                           Master_WarQuestSelectionMaster,
                           vals->m_Items[1],
                           (const MethodInfo_24E40D0 *)Method_DataMasterBase_BuffMaster__BuffEntity__int__GetEntity__);
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
  DataMasterBase_WarMaster__WarEntity__int__o *v24; // x23
  __int64 v25; // x24
  __int64 v26; // x25
  unsigned __int64 v27; // x24
  System_Collections_Generic_List_int__o *v28; // x23
  System_Collections_Generic_IEnumerable_TSource__o *v29; // x0
  __int64 v30; // x8
  unsigned __int64 v31; // x25
  __int64 v32; // x8
  int32_t v33; // w20
  unsigned __int64 v34; // x22
  int32_t v35; // w1
  const MethodInfo_2F66FF8 *v36; // x2
  __int64 v38; // x0
  int32_t v39; // [xsp+Ch] [xbp-54h]
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v40; // 0:x0.16

  if ( (byte_418A7AF & 1) == 0 )
  {
    sub_B2C35C(&Method_DataManager_GetMasterData_ServantMaster___, baseVals);
    sub_B2C35C(&Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__, v6);
    sub_B2C35C(&Method_System_Linq_Enumerable_Repeat_int___, v7);
    sub_B2C35C(&Method_System_Linq_Enumerable_ToArray_int___, v8);
    sub_B2C35C(&Method_System_Collections_Generic_List_int__AddRange__, v9);
    sub_B2C35C(&Method_System_Collections_Generic_List_int__Add__, v10);
    sub_B2C35C(&Method_System_Collections_Generic_List_int__Contains__, v11);
    sub_B2C35C(&Method_System_Collections_Generic_List_int__ToArray__, v12);
    sub_B2C35C(&Method_System_Collections_Generic_List_int___ctor__, v13);
    sub_B2C35C(&Method_System_Collections_Generic_List_int__get_Count__, v14);
    sub_B2C35C(&Method_System_Collections_Generic_List_int__get_Item__, v15);
    sub_B2C35C(&System_Collections_Generic_List_int__TypeInfo, v16);
    sub_B2C35C(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v17);
    sub_B2C35C(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v18);
    byte_418A7AF = 1;
  }
  v19 = (System_Collections_Generic_List_int__o *)sub_B2C42C(System_Collections_Generic_List_int__TypeInfo);
  System_Collections_Generic_List_int____ctor(
    v19,
    (const MethodInfo_2F6629C *)Method_System_Collections_Generic_List_int___ctor__);
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
      if ( !v19 )
        goto LABEL_52;
      v35 = CardIndex - 1;
    }
    else
    {
      CardIndividuality = BattleRandom__getNext(5, 0LL);
      if ( !v19 )
        goto LABEL_52;
      v35 = CardIndividuality;
    }
    v36 = (const MethodInfo_2F66FF8 *)Method_System_Collections_Generic_List_int__Add__;
    goto LABEL_49;
  }
  IdArrayFromIndividuality = CardMaster__getIdArrayFromIndividuality(CardIndividuality, 0LL);
  CardIndividuality = (unsigned __int64)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !CardIndividuality )
    goto LABEL_52;
  CardIndividuality = (unsigned __int64)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                          (DataManager_o *)CardIndividuality,
                                          (const MethodInfo_17339EC *)Method_DataManager_GetMasterData_ServantMaster___);
  if ( !targetServant )
    goto LABEL_52;
  v24 = (DataMasterBase_WarMaster__WarEntity__int__o *)CardIndividuality;
  v26 = *(_QWORD *)&targetServant->fields.svtId.fields.currentCryptoKey;
  v25 = *(_QWORD *)&targetServant->fields.svtId.fields.fakeValue;
  if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  }
  *(_QWORD *)&v40.fields.currentCryptoKey = v26;
  *(_QWORD *)&v40.fields.fakeValue = v25;
  CardIndividuality = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44758064(v40, 0LL);
  if ( !v24 )
    goto LABEL_52;
  CardIndividuality = (unsigned __int64)DataMasterBase_WarMaster__WarEntity__int___GetEntity(
                                          v24,
                                          CardIndividuality,
                                          (const MethodInfo_24E40D0 *)Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
  if ( !CardIndividuality )
    goto LABEL_52;
  v27 = *(_QWORD *)(CardIndividuality + 144);
  v28 = (System_Collections_Generic_List_int__o *)sub_B2C42C(System_Collections_Generic_List_int__TypeInfo);
  System_Collections_Generic_List_int____ctor(
    v28,
    (const MethodInfo_2F6629C *)Method_System_Collections_Generic_List_int___ctor__);
  CardIndividuality = (unsigned __int64)BattleServantData__get_BuffData(targetServant, 0LL);
  if ( !CardIndividuality )
    goto LABEL_52;
  CardIndividuality = (unsigned __int64)BattleBuffData__GetCommandCardTypeChangeBuff(
                                          (BattleBuffData_o *)CardIndividuality,
                                          0LL);
  v39 = CardIndex;
  if ( CardIndividuality )
  {
    if ( !v27 )
      goto LABEL_52;
    v29 = (System_Collections_Generic_IEnumerable_TSource__o *)System_Linq_Enumerable__Repeat_int_(
                                                                 *(_DWORD *)(CardIndividuality + 28),
                                                                 *(_DWORD *)(v27 + 24),
                                                                 (const MethodInfo_1A93C28 *)Method_System_Linq_Enumerable_Repeat_int___);
    CardIndividuality = (unsigned __int64)System_Linq_Enumerable__ToArray_int_(
                                            v29,
                                            (const MethodInfo_1A9AE24 *)Method_System_Linq_Enumerable_ToArray_int___);
    v27 = CardIndividuality;
  }
  if ( !IdArrayFromIndividuality )
    goto LABEL_52;
  v30 = *(_QWORD *)&IdArrayFromIndividuality->max_length;
  if ( (int)v30 >= 1 )
  {
    v31 = 0LL;
    while ( 1 )
    {
      if ( v31 >= (unsigned int)v30 )
        goto LABEL_51;
      if ( !v27 )
        goto LABEL_52;
      v32 = *(_QWORD *)(v27 + 24);
      if ( (int)v32 >= 1 )
        break;
LABEL_29:
      LODWORD(v30) = IdArrayFromIndividuality->max_length;
      if ( (__int64)++v31 >= (int)v30 )
        goto LABEL_30;
    }
    v33 = IdArrayFromIndividuality->m_Items[v31 + 1];
    v34 = 0LL;
    while ( v34 < (unsigned int)v32 )
    {
      if ( v33 == *(_DWORD *)(v27 + 32 + 4 * v34) )
      {
        if ( !v28 )
          goto LABEL_52;
        CardIndividuality = System_Collections_Generic_List_int___Contains(
                              v28,
                              v34,
                              (const MethodInfo_2F6744C *)Method_System_Collections_Generic_List_int__Contains__);
        if ( (CardIndividuality & 1) == 0 )
          System_Collections_Generic_List_int___Add(
            v28,
            v34,
            (const MethodInfo_2F66FF8 *)Method_System_Collections_Generic_List_int__Add__);
      }
      LODWORD(v32) = *(_DWORD *)(v27 + 24);
      if ( (__int64)++v34 >= (int)v32 )
        goto LABEL_29;
    }
LABEL_51:
    v38 = sub_B2C460(CardIndividuality);
    sub_B2C400(v38, 0LL);
  }
LABEL_30:
  if ( !v28 )
    goto LABEL_52;
  CardIndividuality = (unsigned int)v28->fields._size;
  if ( (int)CardIndividuality < 1 )
  {
LABEL_38:
    if ( v19 )
      return System_Collections_Generic_List_int___ToArray(
               v19,
               (const MethodInfo_2F69104 *)Method_System_Collections_Generic_List_int__ToArray__);
    goto LABEL_52;
  }
  if ( !v39 )
  {
    CardIndividuality = BattleRandom__getNext(CardIndividuality, 0LL);
    if ( v28->fields._size <= (unsigned int)CardIndividuality )
      System_ThrowHelper__ThrowArgumentOutOfRangeException_41710740(0LL);
    if ( v19 )
    {
      v35 = v28->fields._items->m_Items[(int)CardIndividuality + 1];
      v36 = (const MethodInfo_2F66FF8 *)Method_System_Collections_Generic_List_int__Add__;
LABEL_49:
      System_Collections_Generic_List_int___Add(v19, v35, v36);
      return System_Collections_Generic_List_int___ToArray(
               v19,
               (const MethodInfo_2F69104 *)Method_System_Collections_Generic_List_int__ToArray__);
    }
LABEL_52:
    sub_B2C434(CardIndividuality, v21);
  }
  if ( !v19 )
    goto LABEL_52;
  System_Collections_Generic_List_int___AddRange(
    v19,
    (System_Collections_Generic_IEnumerable_T__o *)v28,
    (const MethodInfo_2F6724C *)Method_System_Collections_Generic_List_int__AddRange__);
  return System_Collections_Generic_List_int___ToArray(
           v19,
           (const MethodInfo_2F69104 *)Method_System_Collections_Generic_List_int__ToArray__);
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
  _QWORD **v14; // x20
  __int64 v15; // x19
  __int16 v16; // w8
  __int64 v17; // x19
  __int64 v18; // x19
  __int64 v19; // x19

  if ( (byte_418A780 & 1) == 0 )
  {
    sub_B2C35C(&Method_System_Array_Empty_BattleLogicFunctionProcess_FunctionTargetCheck___, args);
    sub_B2C35C(&BattleLogicFunctionProcess_DependFunctionUnitCheck_TypeInfo, v9);
    byte_418A780 = 1;
  }
  v10 = (BattleLogicFunctionProcess_DependFunctionUnitCheck_o *)sub_B2C42C(BattleLogicFunctionProcess_DependFunctionUnitCheck_TypeInfo);
  BattleLogicFunctionProcess_DependFunctionUnitCheck___ctor(v10, this, args, dataVal, 0LL);
  if ( !v10 )
    sub_B2C434(v11, v12);
  if ( BattleLogicFunctionProcess_FunctionUnitCheck__checkCondtion(
         (BattleLogicFunctionProcess_FunctionUnitCheck_o *)v10,
         mainAction,
         0LL) )
  {
    p_funcTargetArray_k__BackingField = (System_Collections_Generic_IEnumerable_BattleLogicFunctionProcess_FunctionTargetCheck__o **)&v10->fields._funcTargetArray_k__BackingField;
  }
  else
  {
    v14 = (_QWORD **)Method_System_Array_Empty_BattleLogicFunctionProcess_FunctionTargetCheck___;
    v15 = **((_QWORD **)Method_System_Array_Empty_BattleLogicFunctionProcess_FunctionTargetCheck___ + 6);
    v16 = *(_WORD *)(v15 + 306);
    if ( (v16 & 1) == 0 )
    {
      sub_AC505C(**((_QWORD **)Method_System_Array_Empty_BattleLogicFunctionProcess_FunctionTargetCheck___ + 6));
      v16 = *(_WORD *)(v15 + 306);
    }
    if ( (v16 & 0x400) != 0 )
    {
      v17 = *v14[6];
      if ( (*(_BYTE *)(v17 + 306) & 1) == 0 )
        sub_AC505C(*v14[6]);
      if ( !*(_DWORD *)(v17 + 224) )
      {
        v18 = *v14[6];
        if ( (*(_BYTE *)(v18 + 306) & 1) == 0 )
          sub_AC505C(*v14[6]);
        j_il2cpp_runtime_class_init_0(v18);
      }
    }
    v19 = *v14[6];
    if ( (*(_BYTE *)(v19 + 306) & 1) == 0 )
      sub_AC505C(*v14[6]);
    p_funcTargetArray_k__BackingField = *(System_Collections_Generic_IEnumerable_BattleLogicFunctionProcess_FunctionTargetCheck__o ***)(v19 + 184);
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
    sub_B2C434(this, 0LL);
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
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x1
  __int64 v12; // x1
  __int64 v13; // x1
  __int64 v14; // x1
  __int64 v15; // x1
  __int64 v16; // x1
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v17; // x0
  System_Collections_Generic_List_VoiceCondType_Type__o *v18; // x24
  _QWORD *DependDataValsArray; // x0
  __int64 v20; // x1
  RemovedBuffInfoGroup_o *v21; // x22
  const MethodInfo *v22; // x4
  __int64 v23; // x8
  unsigned __int64 v24; // x9
  int v25; // w26
  DataVals_o *v26; // x25
  __int64 v27; // x3
  __int64 v28; // x8
  _QWORD *v29; // x24
  unsigned __int64 v30; // x10
  int *v31; // x11
  __int64 v32; // x0
  __int64 v33; // x1
  __int64 v34; // x3
  __int64 v35; // x24
  __int64 v36; // x8
  unsigned __int64 v37; // x10
  int *v38; // x11
  __int64 v39; // x0
  __int64 v40; // x3
  __int64 v41; // x8
  unsigned __int64 v42; // x10
  int *v43; // x11
  __int64 v44; // x0
  __int64 v45; // x0
  __int64 v46; // x1
  __int64 v47; // x26
  __int64 v48; // x0
  __int64 v49; // x1
  int32_t v50; // w26
  FunctionEntity_o *funcEnt; // x27
  int32_t funcIndex; // w28
  bool IsCommandSideEffect; // w0
  BattleActionData_o *v54; // x0
  __int64 v55; // x0
  __int64 v56; // x1
  __int64 v57; // x8
  unsigned __int64 v58; // x10
  int *v59; // x11
  __int64 v60; // x0
  int v61; // w8
  unsigned __int64 v62; // x9
  __int64 v64; // x0
  const MethodInfo *v65; // [xsp+0h] [xbp-90h]
  _QWORD *v66; // [xsp+10h] [xbp-80h]
  int v67; // [xsp+1Ch] [xbp-74h]
  unsigned __int64 v68; // [xsp+20h] [xbp-70h]
  _DWORD v70[1]; // [xsp+30h] [xbp-60h]
  int v71; // [xsp+34h] [xbp-5Ch]
  RemovedBuffInfo_o *subBuffInfo; // [xsp+38h] [xbp-58h] BYREF

  if ( (byte_418A7B1 & 1) == 0 )
  {
    sub_B2C35C(&System_IDisposable_TypeInfo, procArg);
    sub_B2C35C(&System_Collections_Generic_IEnumerable_BattleLogicFunctionProcess_FunctionTargetCheck__TypeInfo, v8);
    sub_B2C35C(&System_Collections_Generic_IEnumerator_BattleLogicFunctionProcess_FunctionTargetCheck__TypeInfo, v9);
    sub_B2C35C(&System_Collections_IEnumerator_TypeInfo, v10);
    sub_B2C35C(&Method_System_Collections_Generic_List_FuncList_TYPE__Add__, v11);
    sub_B2C35C(&Method_System_Collections_Generic_List_FuncList_TYPE___ctor__, v12);
    sub_B2C35C(&Method_System_Collections_Generic_List_BattleBuffData_BuffData___ctor__, v13);
    sub_B2C35C(&System_Collections_Generic_List_FuncList_TYPE__TypeInfo, v14);
    sub_B2C35C(&System_Collections_Generic_List_BattleBuffData_BuffData__TypeInfo, v15);
    sub_B2C35C(&RemovedBuffInfoGroup_TypeInfo, v16);
    byte_418A7B1 = 1;
  }
  subBuffInfo = 0LL;
  v71 = 0;
  v17 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B2C42C(System_Collections_Generic_List_BattleBuffData_BuffData__TypeInfo);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v17,
    (const MethodInfo_2EF379C *)Method_System_Collections_Generic_List_BattleBuffData_BuffData___ctor__);
  v18 = (System_Collections_Generic_List_VoiceCondType_Type__o *)sub_B2C42C(System_Collections_Generic_List_FuncList_TYPE__TypeInfo);
  System_Collections_Generic_List_VoiceCondType_Type____ctor(
    v18,
    (const MethodInfo_2F69274 *)Method_System_Collections_Generic_List_FuncList_TYPE___ctor__);
  if ( !v18 )
    goto LABEL_57;
  System_Collections_Generic_List_VoiceCondType_Type___Add(
    v18,
    2,
    (const MethodInfo_2F69FD0 *)Method_System_Collections_Generic_List_FuncList_TYPE__Add__);
  v21 = (RemovedBuffInfoGroup_o *)sub_B2C42C(RemovedBuffInfoGroup_TypeInfo);
  RemovedBuffInfoGroup___ctor(v21, 0LL);
  if ( !baseVals )
    goto LABEL_57;
  DependDataValsArray = DataVals__GetDependDataValsArray(
                          baseVals,
                          (System_Collections_Generic_List_FuncList_TYPE__o *)v18,
                          1,
                          0LL);
  if ( !DependDataValsArray )
    goto LABEL_57;
  v23 = DependDataValsArray[3];
  if ( (int)v23 >= 1 )
  {
    v24 = 0LL;
    v25 = 0;
    v66 = DependDataValsArray;
    while ( 1 )
    {
      v67 = v25;
      if ( v24 >= (unsigned int)v23 )
      {
        v64 = sub_B2C460(DependDataValsArray);
        sub_B2C400(v64, 0LL);
      }
      v26 = (DataVals_o *)DependDataValsArray[v24 + 4];
      v68 = v24;
      DependDataValsArray = BattleLogicFunction__GetDependFuncTargets(this, procArg, mainAction, v26, v22);
      if ( !DependDataValsArray )
        break;
      v28 = *DependDataValsArray;
      v29 = DependDataValsArray;
      if ( *(_WORD *)(*DependDataValsArray + 298LL) )
      {
        v30 = 0LL;
        v31 = (int *)(*(_QWORD *)(v28 + 176) + 8LL);
        while ( *((System_Collections_Generic_IEnumerable_BattleLogicFunctionProcess_FunctionTargetCheck__c **)v31 - 1) != System_Collections_Generic_IEnumerable_BattleLogicFunctionProcess_FunctionTargetCheck__TypeInfo )
        {
          ++v30;
          v31 += 4;
          if ( v30 >= *(unsigned __int16 *)(*DependDataValsArray + 298LL) )
            goto LABEL_20;
        }
        v32 = v28 + 16LL * *v31 + 312;
      }
      else
      {
LABEL_20:
        v32 = sub_AC5258(
                DependDataValsArray,
                System_Collections_Generic_IEnumerable_BattleLogicFunctionProcess_FunctionTargetCheck__TypeInfo,
                0LL,
                v27);
      }
      v35 = (*(__int64 (__fastcall **)(_QWORD *, _QWORD))v32)(v29, *(_QWORD *)(v32 + 8));
      if ( !v35 )
        sub_B2C434(0LL, v33);
      while ( 1 )
      {
        v36 = *(_QWORD *)v35;
        if ( *(_WORD *)(*(_QWORD *)v35 + 298LL) )
        {
          v37 = 0LL;
          v38 = (int *)(*(_QWORD *)(v36 + 176) + 8LL);
          while ( *((System_Collections_IEnumerator_c **)v38 - 1) != System_Collections_IEnumerator_TypeInfo )
          {
            ++v37;
            v38 += 4;
            if ( v37 >= *(unsigned __int16 *)(*(_QWORD *)v35 + 298LL) )
              goto LABEL_27;
          }
          v39 = v36 + 16LL * *v38 + 312;
        }
        else
        {
LABEL_27:
          v39 = sub_AC5258(v35, System_Collections_IEnumerator_TypeInfo, 0LL, v34);
        }
        if ( ((*(__int64 (__fastcall **)(__int64, _QWORD))v39)(v35, *(_QWORD *)(v39 + 8)) & 1) == 0 )
          break;
        v41 = *(_QWORD *)v35;
        if ( *(_WORD *)(*(_QWORD *)v35 + 298LL) )
        {
          v42 = 0LL;
          v43 = (int *)(*(_QWORD *)(v41 + 176) + 8LL);
          while ( *((System_Collections_Generic_IEnumerator_BattleLogicFunctionProcess_FunctionTargetCheck__c **)v43 - 1) != System_Collections_Generic_IEnumerator_BattleLogicFunctionProcess_FunctionTargetCheck__TypeInfo )
          {
            ++v42;
            v43 += 4;
            if ( v42 >= *(unsigned __int16 *)(*(_QWORD *)v35 + 298LL) )
              goto LABEL_34;
          }
          v44 = v41 + 16LL * *v43 + 312;
        }
        else
        {
LABEL_34:
          v44 = sub_AC5258(
                  v35,
                  System_Collections_Generic_IEnumerator_BattleLogicFunctionProcess_FunctionTargetCheck__TypeInfo,
                  0LL,
                  v40);
        }
        v45 = (*(__int64 (__fastcall **)(__int64, _QWORD))v44)(v35, *(_QWORD *)(v44 + 8));
        v47 = v45;
        if ( !v45 )
          sub_B2C434(0LL, v46);
        v48 = (*(__int64 (__fastcall **)(__int64, BattleActionData_o *, _QWORD))(*(_QWORD *)v45 + 392LL))(
                v45,
                mainAction,
                *(_QWORD *)(*(_QWORD *)v45 + 400LL));
        if ( (v48 & 1) != 0 )
        {
          if ( !v26 )
            sub_B2C434(v48, v49);
          if ( !procArg )
            sub_B2C434(v48, v49);
          v50 = *(_DWORD *)(v47 + 32);
          funcEnt = v26->fields.funcEnt;
          funcIndex = v26->fields.funcIndex;
          IsCommandSideEffect = BattleLogicFunction_ProcListInArgs__get_IsCommandSideEffect(procArg, 0LL);
          v54 = BattleLogicFunction__functionSubState(
                  this,
                  v50,
                  funcEnt,
                  v26,
                  funcIndex,
                  IsCommandSideEffect,
                  &subBuffInfo,
                  procArg,
                  v65);
          if ( !mainAction )
            sub_B2C434(v54, v54);
          BattleActionData__addAction(mainAction, v54, 0LL);
          if ( !v21 )
            sub_B2C434(v55, v56);
          RemovedBuffInfoGroup__Register(v21, v50, subBuffInfo, 0LL);
        }
      }
      v70[v67] = 165;
      v25 = ++v71;
      v57 = *(_QWORD *)v35;
      if ( *(_WORD *)(*(_QWORD *)v35 + 298LL) )
      {
        v58 = 0LL;
        v59 = (int *)(*(_QWORD *)(v57 + 176) + 8LL);
        while ( *((System_IDisposable_c **)v59 - 1) != System_IDisposable_TypeInfo )
        {
          ++v58;
          v59 += 4;
          if ( v58 >= *(unsigned __int16 *)(*(_QWORD *)v35 + 298LL) )
            goto LABEL_48;
        }
        v60 = v57 + 16LL * *v59 + 312;
      }
      else
      {
LABEL_48:
        v60 = sub_AC5258(v35, System_IDisposable_TypeInfo, 0LL, v40);
      }
      (*(void (__fastcall **)(__int64, _QWORD))v60)(v35, *(_QWORD *)(v60 + 8));
      if ( v25 )
      {
        v61 = v25 - 1;
        DependDataValsArray = v66;
        v62 = v68;
        if ( v70[v25 - 1] == 165 )
        {
          --v25;
          v71 = v61;
        }
      }
      else
      {
        DependDataValsArray = v66;
        v62 = v68;
      }
      LODWORD(v23) = *((_DWORD *)DependDataValsArray + 6);
      v24 = v62 + 1;
      if ( (__int64)v24 >= (int)v23 )
        return v21;
    }
LABEL_57:
    sub_B2C434(DependDataValsArray, v20);
  }
  return v21;
}


bool __fastcall BattleLogicFunction__IsAddStateFieldFlag(
        BattleLogicFunction_o *this,
        BattleBuffData_BuffData_o *buffData,
        const MethodInfo *method)
{
  BattleLogicFunction_o *v4; // x20
  UnityEngine_Object_o *logic; // x21

  v4 = this;
  if ( (byte_418A77F & 1) == 0 )
  {
    this = (BattleLogicFunction_o *)sub_B2C35C(&UnityEngine_Object_TypeInfo, buffData);
    byte_418A77F = 1;
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
      sub_B2C434(this, buffData);
    }
  }
  return 1;
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
    sub_B2C434(data, *(_QWORD *)&targetId);
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
  BattleServantData_o *v13; // x20
  struct BattleData_o *v14; // x8
  int32_t currentTurn; // w8
  bool v16; // w10
  bool v17; // w10

  if ( (byte_418A782 & 1) == 0 )
  {
    sub_B2C35C(&Method_DataManager_GetMaster_ConstantStrMaster___, *(_QWORD *)&targetId);
    sub_B2C35C(&DataManager_TypeInfo, v9);
    sub_B2C35C(&StringLiteral_5793/*"EXTEND_TURN_BUFF_TYPE"*/, v10);
    byte_418A782 = 1;
  }
  data = this->fields.data;
  if ( !data )
    goto LABEL_32;
  ServantData = BattleData__getServantData(data, targetId, 0LL);
  if ( !ServantData )
    return (char)ServantData;
  v13 = ServantData;
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
  data = (BattleData_o *)DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_173398C *)Method_DataManager_GetMaster_ConstantStrMaster___);
  if ( !buffEnt || !data )
LABEL_32:
    sub_B2C434(data, *(_QWORD *)&targetId);
  data = (BattleData_o *)ConstantStrMaster__ExistValueArray(
                           (ConstantStrMaster_o *)data,
                           (System_String_o *)StringLiteral_5793/*"EXTEND_TURN_BUFF_TYPE"*/,
                           buffEnt->fields.type,
                           0LL);
  if ( ((unsigned __int8)data & 1) == 0 )
    goto LABEL_27;
  v14 = this->fields.data;
  if ( !v14 )
    goto LABEL_32;
  currentTurn = v14->fields.currentTurn;
  if ( currentTurn )
    v16 = 0;
  else
    v16 = !v13->fields.isEnemy;
  if ( !v16 || !shortbuff )
  {
    v17 = currentTurn == 1 && v13->fields.isEnemy;
    if ( (!v17 || !shortbuff)
      && (currentTurn || !v13->fields.isEnemy || shortbuff)
      && (currentTurn != 1 || v13->fields.isEnemy || shortbuff) )
    {
      goto LABEL_27;
    }
  }
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
  System_String_array **v15; // x2
  System_String_array **v16; // x3
  System_Boolean_array **v17; // x4
  System_Int32_array **v18; // x5
  System_Int32_array *v19; // x6
  System_Int32_array *v20; // x7
  System_Collections_Generic_IEnumerable_T__o *v21; // x1
  System_Int32_array *ValueArray; // x0

  if ( (byte_418A774 & 1) == 0 )
  {
    sub_B2C35C(&Method_DataManager_GetMasterData_ConstantStrMaster___, *(_QWORD *)&buffType);
    sub_B2C35C(&Method_System_Collections_Generic_List_int__AddRange__, v8);
    sub_B2C35C(&Method_System_Collections_Generic_List_int__Contains__, v9);
    sub_B2C35C(&Method_System_Collections_Generic_List_int___ctor__, v10);
    sub_B2C35C(&System_Collections_Generic_List_int__TypeInfo, v11);
    sub_B2C35C(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v12);
    byte_418A774 = 1;
  }
  Instance = (DataManager_o *)*typeList;
  if ( !*typeList )
  {
    v14 = (System_Collections_Generic_List_int__o *)sub_B2C42C(System_Collections_Generic_List_int__TypeInfo);
    System_Collections_Generic_List_int____ctor(
      v14,
      (const MethodInfo_2F6629C *)Method_System_Collections_Generic_List_int___ctor__);
    *typeList = v14;
    sub_B2C2F8((BattleServantConfConponent_o *)typeList, (System_Int32_array **)v14, v15, v16, v17, v18, v19, v20);
    Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( Instance )
    {
      Instance = (DataManager_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                    Instance,
                                    (const MethodInfo_17339EC *)Method_DataManager_GetMasterData_ConstantStrMaster___);
      if ( Instance )
      {
        ValueArray = ConstantStrMaster__GetValueArray((ConstantStrMaster_o *)Instance, keyName, 0LL, 0LL);
        if ( ValueArray )
        {
          v21 = (System_Collections_Generic_IEnumerable_T__o *)ValueArray;
          Instance = (DataManager_o *)*typeList;
          if ( !*typeList )
            goto LABEL_11;
          System_Collections_Generic_List_int___AddRange(
            (System_Collections_Generic_List_int__o *)Instance,
            v21,
            (const MethodInfo_2F6724C *)Method_System_Collections_Generic_List_int__AddRange__);
        }
        Instance = (DataManager_o *)*typeList;
        if ( *typeList )
          return System_Collections_Generic_List_int___Contains(
                   (System_Collections_Generic_List_int__o *)Instance,
                   buffType,
                   (const MethodInfo_2F6744C *)Method_System_Collections_Generic_List_int__Contains__);
      }
    }
LABEL_11:
    sub_B2C434(Instance, v21);
  }
  return System_Collections_Generic_List_int___Contains(
           (System_Collections_Generic_List_int__o *)Instance,
           buffType,
           (const MethodInfo_2F6744C *)Method_System_Collections_Generic_List_int__Contains__);
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
  System_Int32_array **v10; // x1
  System_String_array **v11; // x2
  System_String_array **v12; // x3
  System_Boolean_array **v13; // x4
  System_Int32_array **v14; // x5
  System_Int32_array *v15; // x6
  System_Int32_array *v16; // x7
  System_Int32_array **skillInfo; // x1
  System_String_array **v18; // x2
  System_String_array **v19; // x3
  System_Boolean_array **v20; // x4
  System_Int32_array **v21; // x5
  System_Int32_array *v22; // x6
  System_Int32_array *v23; // x7
  __int64 v24; // x22

  if ( (byte_418A7B5 & 1) == 0 )
  {
    sub_B2C35C(&BattleActionData_TypeInfo, baseVals);
    sub_B2C35C(&StringLiteral_8448/*"LOSS_COMMAND_SPELL"*/, v6);
    byte_418A7B5 = 1;
  }
  v7 = sub_B2C42C(BattleActionData_TypeInfo);
  BattleActionData___ctor((BattleActionData_o *)v7, 0LL);
  if ( !actionData )
    goto LABEL_8;
  if ( !v7 )
    goto LABEL_8;
  *(_DWORD *)(v7 + 32) = actionData->fields.actorId;
  *(_DWORD *)(v7 + 36) = actionData->fields.targetId;
  BattleActionData__setStateField((BattleActionData_o *)v7, 0LL);
  v10 = (System_Int32_array **)StringLiteral_8448/*"LOSS_COMMAND_SPELL"*/;
  *(_QWORD *)(v7 + 64) = StringLiteral_8448/*"LOSS_COMMAND_SPELL"*/;
  sub_B2C2F8((BattleServantConfConponent_o *)(v7 + 64), v10, v11, v12, v13, v14, v15, v16);
  skillInfo = (System_Int32_array **)actionData->fields.skillInfo;
  *(_QWORD *)(v7 + 144) = skillInfo;
  sub_B2C2F8((BattleServantConfConponent_o *)(v7 + 144), skillInfo, v18, v19, v20, v21, v22, v23);
  if ( !baseVals || (v24 = *(_QWORD *)(v7 + 144), Value = DataVals__GetValue(baseVals, 0LL), !v24) )
LABEL_8:
    sub_B2C434(Value, v9);
  *(_DWORD *)(v24 + 100) = Value;
  *(_BYTE *)(v7 + 241) = DataVals__isForcedEffectSpeedOne(baseVals, 0LL);
  BattleActionData__AddAfterActionData(actionData, (BattleActionData_o *)v7, 0, 0LL);
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
    sub_B2C434(this, actBuffData);
  }
  popupText = funcEnt->fields.popupText;
  actBuffData->fields.popLabel = popupText;
  sub_B2C2F8(
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
  sub_B2C2F8(
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

  if ( (byte_418A786 & 1) == 0 )
  {
    sub_B2C35C(&BattleActionData_BuffData_TypeInfo, *(_QWORD *)&targetId);
    byte_418A786 = 1;
  }
  v12 = sub_B2C42C(BattleActionData_BuffData_TypeInfo);
  BattleActionData_BuffData___ctor((BattleActionData_BuffData_o *)v12, 0LL);
  if ( !v12 )
    sub_B2C434(v13, v14);
  *(_DWORD *)(v12 + 40) = targetId;
  *(_DWORD *)(v12 + 16) = funcIndex;
  *(_DWORD *)(v12 + 64) = iconId;
  *(_QWORD *)(v12 + 56) = popupText;
  sub_B2C2F8((BattleServantConfConponent_o *)(v12 + 56), (System_Int32_array **)popupText, v15, v16, v17, v18, v19, v20);
  *(_DWORD *)(v12 + 68) = popupTextColor;
  *(_QWORD *)(v12 + 72) = 0LL;
  sub_B2C2F8((BattleServantConfConponent_o *)(v12 + 72), 0LL, v21, v22, v23, v24, v25, v26);
  *(_BYTE *)(v12 + 91) = 1;
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
  int v23; // w20
  Il2CppObject *currentValue; // x21
  System_Collections_Generic_Dictionary_int__int__o *v25; // x20
  __int64 v26; // x0
  __int64 v27; // x1
  System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *klass; // x0
  __int64 IsNullOrEmpty; // x0
  __int64 v30; // x8
  unsigned __int64 v31; // x27
  System_Collections_ICollection_o *v32; // x22
  __int64 v33; // x1
  unsigned __int64 monitor; // x8
  unsigned __int64 v35; // x26
  signed __int64 v36; // x24
  System_Collections_ICollection_o *v37; // x28
  _BOOL8 v38; // x0
  __int64 v39; // x1
  int32_t v40; // w23
  int32_t v41; // w0
  _BOOL8 v42; // x0
  __int64 v43; // x1
  Il2CppObject *current; // x22
  __int64 v45; // x21
  System_Int32_array *FamilyLinkageIdArray; // x0
  __int64 v47; // x1
  System_String_array **v48; // x2
  System_String_array **v49; // x3
  System_Boolean_array **v50; // x4
  System_Int32_array **v51; // x5
  System_Int32_array *v52; // x6
  System_Int32_array *v53; // x7
  System_Int32_array **v54; // x23
  System_Int32_array *FamilyLinkageTargetIdArray; // x0
  System_String_array **v56; // x2
  System_String_array **v57; // x3
  System_Boolean_array **v58; // x4
  System_Int32_array **v59; // x5
  System_Int32_array *v60; // x6
  System_Int32_array *v61; // x7
  System_Int32_array **v62; // x22
  __int64 v63; // x0
  int v64; // w21
  __int64 v65; // x0
  __int64 v66; // x0
  __int64 v67; // x0
  __int64 v68; // x0
  __int64 v69; // x0
  __int64 v70; // x0
  __int64 v71; // x0
  __int64 v72; // x0
  int v73; // w20
  int v74; // [xsp+4h] [xbp-BCh]
  _BYTE v75[32]; // [xsp+8h] [xbp-B8h] BYREF
  int v76; // [xsp+28h] [xbp-98h]
  System_Collections_Generic_List_Enumerator_T__o v77; // [xsp+30h] [xbp-90h] BYREF
  System_Collections_Generic_Dictionary_ValueCollection_Enumerator_TKey__TValue__o v78; // [xsp+50h] [xbp-70h] BYREF

  if ( (byte_418A7B2 & 1) == 0 )
  {
    sub_B2C35C(&Method_System_Collections_Generic_Dictionary_int__int__ContainsKey__, procArg);
    sub_B2C35C(&Method_System_Collections_Generic_Dictionary_int__int___ctor__, v8);
    sub_B2C35C(&Method_System_Collections_Generic_Dictionary_int__int__get_Item__, v9);
    sub_B2C35C(&Method_System_Collections_Generic_Dictionary_int__RemovedBuffInfo__get_Values__, v10);
    sub_B2C35C(&Method_System_Collections_Generic_Dictionary_int__int__set_Item__, v11);
    sub_B2C35C(&System_Collections_Generic_Dictionary_int__int__TypeInfo, v12);
    sub_B2C35C(&Method_System_Collections_Generic_List_Enumerator_BattleBuffData_BuffData__Dispose__, v13);
    sub_B2C35C(
      &Method_System_Collections_Generic_Dictionary_ValueCollection_Enumerator_int__RemovedBuffInfo__Dispose__,
      v14);
    sub_B2C35C(&Method_System_Collections_Generic_List_Enumerator_BattleBuffData_BuffData__MoveNext__, v15);
    sub_B2C35C(
      &Method_System_Collections_Generic_Dictionary_ValueCollection_Enumerator_int__RemovedBuffInfo__MoveNext__,
      v16);
    sub_B2C35C(&Method_System_Collections_Generic_List_Enumerator_BattleBuffData_BuffData__get_Current__, v17);
    sub_B2C35C(
      &Method_System_Collections_Generic_Dictionary_ValueCollection_Enumerator_int__RemovedBuffInfo__get_Current__,
      v18);
    sub_B2C35C(&int_____TypeInfo, v19);
    sub_B2C35C(&Method_System_Collections_Generic_List_BattleBuffData_BuffData__GetEnumerator__, v20);
    this = (BattleLogicFunction_o *)sub_B2C35C(
                                      &Method_System_Collections_Generic_Dictionary_ValueCollection_int__RemovedBuffInfo__GetEnumerator__,
                                      v21);
    byte_418A7B2 = 1;
  }
  memset(&v78, 0, sizeof(v78));
  memset(&v77, 0, sizeof(v77));
  v76 = 0;
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
      || (this = (BattleLogicFunction_o *)System_Collections_Generic_Dictionary_int__QuestAfterAction_VoiceInfo___get_Values(
                                            (System_Collections_Generic_Dictionary_int__QuestAfterAction_VoiceInfo__o *)this,
                                            (const MethodInfo_2E644F0 *)Method_System_Collections_Generic_Dictionary_int__RemovedBuffInfo__get_Values__)) == 0LL )
    {
      sub_B2C434(this, procArg);
    }
    System_Collections_Generic_Dictionary_ValueCollection_int__BillBoardGroupManager_GroupData___GetEnumerator(
      (System_Collections_Generic_Dictionary_ValueCollection_Enumerator_TKey__TValue__o *)v75,
      (System_Collections_Generic_Dictionary_ValueCollection_TKey__TValue__o *)this,
      (const MethodInfo_2403028 *)Method_System_Collections_Generic_Dictionary_ValueCollection_int__RemovedBuffInfo__GetEnumerator__);
    v23 = 0;
    v78 = *(System_Collections_Generic_Dictionary_ValueCollection_Enumerator_TKey__TValue__o *)v75;
    while ( System_Collections_Generic_Dictionary_ValueCollection_Enumerator_int__BillBoardGroupManager_GroupData___MoveNext(
              &v78,
              (const MethodInfo_277F158 *)Method_System_Collections_Generic_Dictionary_ValueCollection_Enumerator_int__RemovedBuffInfo__MoveNext__) )
    {
      v74 = v23;
      currentValue = v78.fields.currentValue;
      v25 = (System_Collections_Generic_Dictionary_int__int__o *)sub_B2C42C(System_Collections_Generic_Dictionary_int__int__TypeInfo);
      System_Collections_Generic_Dictionary_int__int____ctor(
        v25,
        (const MethodInfo_2E2399C *)Method_System_Collections_Generic_Dictionary_int__int___ctor__);
      if ( !currentValue )
        sub_B2C434(v26, v27);
      klass = (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)currentValue[1].klass;
      if ( !klass )
        sub_B2C434(0LL, v27);
      System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo___GetEnumerator(
        (System_Collections_Generic_List_Enumerator_T__o *)v75,
        klass,
        (const MethodInfo_2EF52DC *)Method_System_Collections_Generic_List_BattleBuffData_BuffData__GetEnumerator__);
      v77 = *(System_Collections_Generic_List_Enumerator_T__o *)v75;
      while ( 1 )
      {
        v42 = System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___MoveNext(
                &v77,
                (const MethodInfo_20EA42C *)Method_System_Collections_Generic_List_Enumerator_BattleBuffData_BuffData__MoveNext__);
        if ( !v42 )
          break;
        current = v77.fields.current;
        if ( !v77.fields.current )
          sub_B2C434(v42, v43);
        if ( BattleBuffData_BuffData__IsFamilyBuff((BattleBuffData_BuffData_o *)v77.fields.current, 0LL) )
        {
          v45 = sub_B2C374(int_____TypeInfo, 2LL);
          FamilyLinkageIdArray = BattleBuffData_BuffData__get_FamilyLinkageIdArray(
                                   (BattleBuffData_BuffData_o *)current,
                                   0LL);
          if ( !v45 )
            sub_B2C434(FamilyLinkageIdArray, v47);
          v54 = (System_Int32_array **)FamilyLinkageIdArray;
          if ( FamilyLinkageIdArray )
          {
            FamilyLinkageIdArray = (System_Int32_array *)sub_B2C41C(
                                                           FamilyLinkageIdArray,
                                                           *(_QWORD *)(*(_QWORD *)v45 + 64LL));
            if ( !FamilyLinkageIdArray )
            {
              v71 = sub_B2C454(0LL);
              sub_B2C400(v71, 0LL);
            }
          }
          if ( !*(_DWORD *)(v45 + 24) )
          {
            v70 = sub_B2C460(FamilyLinkageIdArray);
            sub_B2C400(v70, 0LL);
          }
          *(_QWORD *)(v45 + 32) = v54;
          sub_B2C2F8((BattleServantConfConponent_o *)(v45 + 32), v54, v48, v49, v50, v51, v52, v53);
          FamilyLinkageTargetIdArray = BattleBuffData_BuffData__get_FamilyLinkageTargetIdArray(
                                         (BattleBuffData_BuffData_o *)current,
                                         0LL);
          v62 = (System_Int32_array **)FamilyLinkageTargetIdArray;
          if ( FamilyLinkageTargetIdArray )
          {
            FamilyLinkageTargetIdArray = (System_Int32_array *)sub_B2C41C(
                                                                 FamilyLinkageTargetIdArray,
                                                                 *(_QWORD *)(*(_QWORD *)v45 + 64LL));
            if ( !FamilyLinkageTargetIdArray )
            {
              v72 = sub_B2C454(0LL);
              sub_B2C400(v72, 0LL);
            }
          }
          if ( *(_DWORD *)(v45 + 24) <= 1u )
          {
            v63 = sub_B2C460(FamilyLinkageTargetIdArray);
            sub_B2C400(v63, 0LL);
          }
          *(_QWORD *)(v45 + 40) = v62;
          sub_B2C2F8((BattleServantConfConponent_o *)(v45 + 40), v62, v56, v57, v58, v59, v60, v61);
          v30 = *(_QWORD *)(v45 + 24);
          if ( (int)v30 >= 1 )
          {
            v31 = 0LL;
            do
            {
              if ( v31 >= (unsigned int)v30 )
              {
                v69 = sub_B2C460(IsNullOrEmpty);
                sub_B2C400(v69, 0LL);
              }
              v32 = *(System_Collections_ICollection_o **)(v45 + 8 * v31 + 32);
              IsNullOrEmpty = BasicHelper__IsNullOrEmpty(v32, 0LL);
              if ( (IsNullOrEmpty & 1) == 0 )
              {
                if ( !v32 )
                  sub_B2C434(IsNullOrEmpty, v33);
                monitor = (unsigned __int64)v32[1].monitor;
                if ( (int)monitor >= 1 )
                {
                  v35 = 0LL;
                  v36 = (int)monitor;
                  v37 = v32 + 2;
                  do
                  {
                    if ( v35 >= (unsigned int)monitor )
                    {
                      v66 = sub_B2C460(IsNullOrEmpty);
                      sub_B2C400(v66, 0LL);
                    }
                    if ( !v25 )
                      sub_B2C434(IsNullOrEmpty, v33);
                    v38 = System_Collections_Generic_Dictionary_int__int___ContainsKey(
                            v25,
                            *((_DWORD *)&v37->klass + v35),
                            (const MethodInfo_2E247A4 *)Method_System_Collections_Generic_Dictionary_int__int__ContainsKey__);
                    if ( !v38 )
                    {
                      if ( v35 >= LODWORD(v32[1].monitor) )
                      {
                        v68 = sub_B2C460(v38);
                        sub_B2C400(v68, 0LL);
                      }
                      if ( !v22 )
                        sub_B2C434(v38, v39);
                      v40 = *((_DWORD *)&v37->klass + v35);
                      v41 = FamilyBuffLinkageIdGenerator__Next(v22, 0LL);
                      System_Collections_Generic_Dictionary_int__int___set_Item(
                        v25,
                        v40,
                        v41,
                        (const MethodInfo_2E24518 *)Method_System_Collections_Generic_Dictionary_int__int__set_Item__);
                    }
                    if ( v35 >= LODWORD(v32[1].monitor) )
                    {
                      v65 = sub_B2C460(v38);
                      sub_B2C400(v65, 0LL);
                    }
                    IsNullOrEmpty = System_Collections_Generic_Dictionary_int__int___get_Item(
                                      v25,
                                      *((_DWORD *)&v37->klass + v35),
                                      (const MethodInfo_2E24480 *)Method_System_Collections_Generic_Dictionary_int__int__get_Item__);
                    monitor = LODWORD(v32[1].monitor);
                    if ( v35 >= monitor )
                    {
                      v67 = sub_B2C460(IsNullOrEmpty);
                      sub_B2C400(v67, 0LL);
                    }
                    *((_DWORD *)&v37->klass + v35++) = IsNullOrEmpty;
                  }
                  while ( (__int64)v35 < v36 );
                }
              }
              LODWORD(v30) = *(_DWORD *)(v45 + 24);
              ++v31;
            }
            while ( (__int64)v31 < (int)v30 );
          }
        }
      }
      v23 = 0;
      *(_DWORD *)&v75[4 * v74 + 24] = 244;
      v64 = ++v76;
      System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___Dispose(
        &v77,
        (const MethodInfo_20EA428 *)Method_System_Collections_Generic_List_Enumerator_BattleBuffData_BuffData__Dispose__);
      if ( v64 )
      {
        v23 = v64;
        if ( *(_DWORD *)&v75[4 * v64 + 20] == 244 )
        {
          v23 = v64 - 1;
          v76 = v64 - 1;
        }
      }
    }
    *(_DWORD *)&v75[4 * v23 + 24] = 272;
    v73 = ++v76;
    System_Collections_Generic_Dictionary_ValueCollection_Enumerator_int__BillBoardGroupManager_GroupData___Dispose(
      &v78,
      (const MethodInfo_277F154 *)Method_System_Collections_Generic_Dictionary_ValueCollection_Enumerator_int__RemovedBuffInfo__Dispose__);
    if ( v73 && *(_DWORD *)&v75[4 * v73 + 20] == 272 )
      v76 = v73 - 1;
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
  SkillLvMaster_o *Master_WarQuestSelectionMaster; // x24
  _QWORD *FuncSideEffectTargetServants; // x0
  __int64 v18; // x1
  __int64 v19; // x8
  unsigned __int64 v20; // x9
  bool v21; // w20
  __int64 v22; // x8
  unsigned __int64 v23; // x21
  BattleServantData_o *v24; // x28
  __int64 v25; // x8
  _QWORD *v26; // x20
  unsigned __int64 v27; // x26
  BattleBuffData_BuffData_o *v28; // x25
  BattleActionData_o *SideEffectActionData_19256184; // x0
  const MethodInfo *v30; // x6
  System_Collections_Generic_IEnumerable_T__o *SideEffectList; // x19
  BattleLogicFunction___c_c *v32; // x8
  struct BattleLogicFunction___c_StaticFields *static_fields; // x9
  System_Action_DrawLotsDisplayMessage_DisplayedInGroup_SaveData__o *_9__47_0; // x20
  Il2CppObject *v35; // x21
  struct BattleLogicFunction___c_StaticFields *v36; // x0
  System_String_array **v37; // x2
  System_String_array **v38; // x3
  System_Boolean_array **v39; // x4
  System_Int32_array **v40; // x5
  System_Int32_array *v41; // x6
  System_Int32_array *v42; // x7
  __int64 v43; // x0
  _DWORD *v44; // [xsp+0h] [xbp-80h]
  unsigned __int64 v46; // [xsp+10h] [xbp-70h]
  _DWORD *v48; // [xsp+20h] [xbp-60h]
  BuffList_ACTION_array *targetActs; // [xsp+28h] [xbp-58h]

  if ( (byte_418A778 & 1) == 0 )
  {
    sub_B2C35C(&Method_System_Action_BattleActionData___ctor__, sideEffectArg);
    sub_B2C35C(&System_Action_BattleActionData__TypeInfo, v9);
    sub_B2C35C(&Method_BasicHelper_ForEach_BattleActionData___, v10);
    sub_B2C35C(&bool___TypeInfo, v11);
    sub_B2C35C(&Method_DataManager_GetMaster_SkillLvMaster___, v12);
    sub_B2C35C(&DataManager_TypeInfo, v13);
    sub_B2C35C(&Method_BattleLogicFunction___c__SetFuncSideEffect_b__47_0__, v14);
    sub_B2C35C(&BattleLogicFunction___c_TypeInfo, v15);
    byte_418A778 = 1;
  }
  if ( actionData && actorSvtData )
  {
    if ( (BYTE3(DataManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !DataManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
    Master_WarQuestSelectionMaster = (SkillLvMaster_o *)DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_173398C *)Method_DataManager_GetMaster_SkillLvMaster___);
    FuncSideEffectTargetServants = (_QWORD *)sub_B2C374(bool___TypeInfo, 2LL);
    if ( !FuncSideEffectTargetServants )
LABEL_38:
      sub_B2C434(FuncSideEffectTargetServants, v18);
    v19 = FuncSideEffectTargetServants[3];
    if ( !(_DWORD)v19 )
      goto LABEL_37;
    *((_BYTE *)FuncSideEffectTargetServants + 32) = 1;
    if ( (int)v19 >= 1 )
    {
      v20 = 0LL;
      v44 = FuncSideEffectTargetServants;
      while ( 1 )
      {
        if ( v20 >= (unsigned int)v19 )
          goto LABEL_37;
        if ( !sideEffectArg )
          goto LABEL_38;
        v46 = v20;
        v21 = *((_BYTE *)FuncSideEffectTargetServants + v20 + 32) != 0;
        targetActs = (BuffList_ACTION_array *)((__int64 (__fastcall *)(BattleLogicFunction_FuncSideEffectFunctionArgument_o *, bool, Il2CppMethodPointer))sideEffectArg->klass->vtable._6_GetActArray.method)(
                                                sideEffectArg,
                                                v21,
                                                sideEffectArg->klass->vtable._7_SetSideEffect.methodPtr);
        FuncSideEffectTargetServants = BattleActionData__GetFuncSideEffectTargetServants(
                                         actionData,
                                         this->fields.data,
                                         v21,
                                         targetIds,
                                         0LL);
        if ( !FuncSideEffectTargetServants )
          goto LABEL_38;
        v22 = FuncSideEffectTargetServants[3];
        if ( (int)v22 >= 1 )
          break;
LABEL_25:
        FuncSideEffectTargetServants = v44;
        LODWORD(v19) = v44[6];
        v20 = v46 + 1;
        if ( (__int64)(v46 + 1) >= (int)v19 )
          goto LABEL_26;
      }
      v23 = 0LL;
      v48 = FuncSideEffectTargetServants;
      while ( 1 )
      {
        if ( v23 >= (unsigned int)v22 )
          goto LABEL_37;
        v24 = (BattleServantData_o *)FuncSideEffectTargetServants[v23 + 4];
        FuncSideEffectTargetServants = BattleServantData__GetAddSideEffectBuffList(actorSvtData, targetActs, v24, 0LL);
        if ( !FuncSideEffectTargetServants )
          goto LABEL_38;
        v25 = FuncSideEffectTargetServants[3];
        v26 = FuncSideEffectTargetServants;
        if ( (int)v25 >= 1 )
          break;
LABEL_24:
        FuncSideEffectTargetServants = v48;
        ++v23;
        LODWORD(v22) = v48[6];
        if ( (__int64)v23 >= (int)v22 )
          goto LABEL_25;
      }
      v27 = 0LL;
      while ( v27 < (unsigned int)v25 )
      {
        if ( !v24 )
          goto LABEL_38;
        v28 = (BattleBuffData_BuffData_o *)v26[v27 + 4];
        SideEffectActionData_19256184 = BattleActionData__MakeSideEffectActionData_19256184(
                                          actionData,
                                          4,
                                          v24->fields.uniqueId,
                                          0LL);
        BattleLogicFunction__SetSideEffectBuff(
          this,
          Master_WarQuestSelectionMaster,
          SideEffectActionData_19256184,
          v28,
          (BattleLogicFunction_CommonSideEffectFunctionArgument_o *)sideEffectArg,
          1,
          v30);
        LODWORD(v25) = *((_DWORD *)v26 + 6);
        if ( (__int64)++v27 >= (int)v25 )
          goto LABEL_24;
      }
LABEL_37:
      v43 = sub_B2C460(FuncSideEffectTargetServants);
      sub_B2C400(v43, 0LL);
    }
LABEL_26:
    if ( BattleActionData__ExistSideEffect(actionData, 4, 0LL) )
    {
      BattleActionData__SetFuncSideEffectTrigger(actionData, 0LL);
      SideEffectList = (System_Collections_Generic_IEnumerable_T__o *)BattleActionData__getSideEffectList(
                                                                        actionData,
                                                                        4,
                                                                        0LL);
      v32 = BattleLogicFunction___c_TypeInfo;
      if ( (BYTE3(BattleLogicFunction___c_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !BattleLogicFunction___c_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(BattleLogicFunction___c_TypeInfo);
        v32 = BattleLogicFunction___c_TypeInfo;
      }
      static_fields = v32->static_fields;
      _9__47_0 = (System_Action_DrawLotsDisplayMessage_DisplayedInGroup_SaveData__o *)static_fields->__9__47_0;
      if ( !_9__47_0 )
      {
        if ( (BYTE3(v32->vtable._0_Equals.methodPtr) & 4) != 0 && !v32->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(v32);
          static_fields = BattleLogicFunction___c_TypeInfo->static_fields;
        }
        v35 = (Il2CppObject *)static_fields->__9;
        _9__47_0 = (System_Action_DrawLotsDisplayMessage_DisplayedInGroup_SaveData__o *)sub_B2C42C(System_Action_BattleActionData__TypeInfo);
        System_Action_DrawLotsDisplayMessage_DisplayedInGroup_SaveData____ctor(
          _9__47_0,
          v35,
          Method_BattleLogicFunction___c__SetFuncSideEffect_b__47_0__,
          (const MethodInfo_24BBAD8 *)Method_System_Action_BattleActionData___ctor__);
        v36 = BattleLogicFunction___c_TypeInfo->static_fields;
        v36->__9__47_0 = (struct System_Action_BattleActionData__o *)_9__47_0;
        sub_B2C2F8(
          (BattleServantConfConponent_o *)&v36->__9__47_0,
          (System_Int32_array **)_9__47_0,
          v37,
          v38,
          v39,
          v40,
          v41,
          v42);
      }
      BasicHelper__ForEach_DrawLotsDisplayMessage_DisplayedInGroup_SaveData_(
        SideEffectList,
        (System_Action_T__o *)_9__47_0,
        (const MethodInfo_1727C50 *)Method_BasicHelper_ForEach_BattleActionData___);
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
  if ( (byte_418A790 & 1) == 0 )
  {
    this = (BattleLogicFunction_o *)sub_B2C35C(&BattleActionData_BuffData___TypeInfo, actiondata);
    byte_418A790 = 1;
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
      sub_B2C434(this, actiondata);
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
  sub_B2C2F8(
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
  this = (BattleLogicFunction_o *)sub_B2C374(BattleActionData_BuffData___TypeInfo, 1LL);
  if ( !this )
    goto LABEL_26;
  v35 = this;
  if ( v28 )
  {
    this = (BattleLogicFunction_o *)sub_B2C41C(v28, this->klass->_1.element_class);
    if ( !this )
    {
      v41 = sub_B2C454(0LL);
      sub_B2C400(v41, 0LL);
    }
  }
  if ( !LODWORD(v35->fields.logic) )
    goto LABEL_27;
  v35->fields.logictarget = (struct BattleLogicTarget_o *)v28;
  sub_B2C2F8((BattleServantConfConponent_o *)&v35->fields.logictarget, v28, v29, v30, v31, v32, v33, v34);
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
    v40 = sub_B2C460(this);
    sub_B2C400(v40, 0LL);
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

  if ( (byte_418A77C & 1) == 0 )
  {
    sub_B2C35C(&BattleServantData_TypeInfo, skillLvMst);
    byte_418A77C = 1;
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
      sub_B2C434(SkillFromBuff, v14);
    arg->fields.buffUniqueId = buff->fields.addOrder;
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
  __int64 v10; // x1
  __int64 v11; // x1
  __int64 v12; // x1
  DataManager_o *Instance; // x0
  __int64 v14; // x1
  struct BattleActionData_SideEffectData_array *SideEffectList_k__BackingField; // x24
  int max_length; // w8
  int v17; // w23
  BattleActionData_SideEffectData_o *v18; // x20
  BattleServantData_o *v19; // x26
  int32_t v20; // w1
  struct DataMasterBase_array *datalist; // x8
  DataManager_o *v22; // x27
  unsigned __int64 v23; // x25
  BattleBuffData_BuffData_o *v24; // x20
  BattleActionData_o *v25; // x28
  bool v26; // w5
  const MethodInfo *v27; // x6
  int32_t v28; // w0
  __int64 v29; // x0
  struct BattleActionData_SideEffectData_array *v30; // [xsp+0h] [xbp-80h]
  SkillLvMaster_o *skillLvMst; // [xsp+10h] [xbp-70h]
  System_Collections_Generic_KeyValuePair_int__int__o pairAttackAndTarget; // [xsp+28h] [xbp-58h] BYREF
  System_Collections_Generic_KeyValuePair_int__int__o p_pairAttackAndTarget; // 0:x0.8
  System_Collections_Generic_KeyValuePair_int__int__o v37; // 0:x1.8
  System_Collections_Generic_KeyValuePair_int__int__o v38; // 0:x1.8

  if ( (byte_418A77B & 1) == 0 )
  {
    sub_B2C35C(&BattleActionData_TypeInfo, arg);
    sub_B2C35C(&Method_DataManager_GetMasterData_SkillLvMaster___, v10);
    sub_B2C35C(&Method_System_Collections_Generic_KeyValuePair_int__int___ctor__, v11);
    sub_B2C35C(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v12);
    byte_418A77B = 1;
  }
  pairAttackAndTarget = 0LL;
  Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance
    || (Instance = (DataManager_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                      Instance,
                                      (const MethodInfo_17339EC *)Method_DataManager_GetMasterData_SkillLvMaster___),
        skillLvMst = (SkillLvMaster_o *)Instance,
        !attackArg)
    || (SideEffectList_k__BackingField = attackArg->fields._SideEffectList_k__BackingField) == 0LL )
  {
LABEL_25:
    sub_B2C434(Instance, v14);
  }
  max_length = SideEffectList_k__BackingField->max_length;
  if ( max_length >= 1 )
  {
    v17 = 0;
    v30 = attackArg->fields._SideEffectList_k__BackingField;
    do
    {
      if ( v17 >= (unsigned int)max_length )
        goto LABEL_26;
      v18 = SideEffectList_k__BackingField->m_Items[v17];
      if ( !v18 )
        goto LABEL_25;
      Instance = (DataManager_o *)this->fields.data;
      if ( !Instance )
        goto LABEL_25;
      Instance = (DataManager_o *)BattleData__getServantData((BattleData_o *)Instance, v18->fields.targetId, 0LL);
      if ( Instance )
      {
        if ( !actionSvtData )
          goto LABEL_25;
        v19 = (BattleServantData_o *)Instance;
        v20 = BattleLogicFunction_SideEffectMakeArgument__MakeCheckKey(attackArg, actionSvtData->fields.uniqueId, 0LL);
        p_pairAttackAndTarget = (System_Collections_Generic_KeyValuePair_int__int__o)&pairAttackAndTarget;
        System_Collections_Generic_KeyValuePair_int__int____ctor(
          p_pairAttackAndTarget,
          v20,
          v19->fields.uniqueId,
          (const MethodInfo_21032DC *)Method_System_Collections_Generic_KeyValuePair_int__int___ctor__);
        if ( !mainAction )
          goto LABEL_25;
        v37 = pairAttackAndTarget;
        Instance = (DataManager_o *)BattleActionData__isReflectedAttackSideEffect(mainAction, v37, 0LL);
        if ( ((unsigned __int8)Instance & 1) == 0 )
        {
          Instance = (DataManager_o *)BattleServantData__getAttackSideEffectBuffList_21293456(
                                        actionSvtData,
                                        v18->fields.sideEffectActs,
                                        command,
                                        v19,
                                        0LL);
          if ( !Instance )
            goto LABEL_25;
          datalist = Instance->fields.datalist;
          v22 = Instance;
          if ( datalist )
          {
            if ( (int)datalist >= 1 )
            {
              v23 = 0LL;
              while ( v23 < (unsigned int)datalist )
              {
                v24 = (BattleBuffData_BuffData_o *)*((_QWORD *)&v22->fields.lookup + v23);
                v25 = (BattleActionData_o *)sub_B2C42C(BattleActionData_TypeInfo);
                BattleActionData___ctor(v25, 0LL);
                if ( !v25 )
                  goto LABEL_25;
                v25->fields.actorId = actionSvtData->fields.uniqueId;
                v25->fields.targetId = v19->fields.uniqueId;
                v26 = ((__int64 (__fastcall *)(BattleLogicFunction_SideEffectMakeArgument_o *, Il2CppMethodPointer))attackArg->klass->vtable._5_unknown.method)(
                        attackArg,
                        attackArg->klass->vtable._6_Init.methodPtr) == 1;
                BattleLogicFunction__SetSideEffectBuff(
                  this,
                  skillLvMst,
                  v25,
                  v24,
                  (BattleLogicFunction_CommonSideEffectFunctionArgument_o *)arg,
                  v26,
                  v27);
                v28 = ((__int64 (__fastcall *)(BattleLogicFunction_SideEffectMakeArgument_o *, Il2CppMethodPointer))attackArg->klass->vtable._5_unknown.method)(
                        attackArg,
                        attackArg->klass->vtable._6_Init.methodPtr);
                BattleActionData__addSideEffectActionData(mainAction, v25, v28, 0LL);
                LODWORD(datalist) = v22->fields.datalist;
                if ( (__int64)++v23 >= (int)datalist )
                  goto LABEL_22;
              }
LABEL_26:
              v29 = sub_B2C460(Instance);
              sub_B2C400(v29, 0LL);
            }
LABEL_22:
            v38 = pairAttackAndTarget;
            BattleActionData__addReflectAttackSideEffect(mainAction, v38, 0LL);
            SideEffectList_k__BackingField = v30;
          }
        }
      }
      max_length = SideEffectList_k__BackingField->max_length;
      ++v17;
    }
    while ( v17 < max_length );
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
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x1
  __int64 v12; // x1
  int32_t funcType; // w23
  DataMasterBase_WarMaster__WarEntity__int__o *MasterData_WarQuestSelectionMaster; // x22
  struct BattleLogic_o *logic; // x8
  BattleLogicFunction_o *v16; // x23
  unsigned __int64 v17; // x26
  const MethodInfo *v18; // x4
  BattleLogicFunction_o *v19; // x24
  BattleLogicFunction_o *v20; // x25
  __int64 v21; // x0
  BattleLogicFunction_o *v22; // [xsp+8h] [xbp-58h]

  v22 = this;
  if ( (byte_418A777 & 1) == 0 )
  {
    sub_B2C35C(&Method_DataManager_GetMasterData_FunctionMaster___, *(_QWORD *)&targetId);
    sub_B2C35C(&Method_DataMasterBase_FunctionMaster__FunctionEntity__int__GetEntity__, v8);
    sub_B2C35C(&int___TypeInfo, v9);
    sub_B2C35C(&Method_System_Collections_Generic_List_int__AddRange__, v10);
    sub_B2C35C(&Method_System_Collections_Generic_List_int__Add__, v11);
    this = (BattleLogicFunction_o *)sub_B2C35C(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v12);
    byte_418A777 = 1;
  }
  if ( !action )
    goto LABEL_19;
  this = (BattleLogicFunction_o *)action->fields.funcTargetList;
  if ( !this )
    goto LABEL_19;
  System_Collections_Generic_List_int___Add(
    (System_Collections_Generic_List_int__o *)this,
    targetId,
    (const MethodInfo_2F66FF8 *)Method_System_Collections_Generic_List_int__Add__);
  if ( !baseVals )
    goto LABEL_19;
  funcType = baseVals->fields.funcType;
  this = (BattleLogicFunction_o *)sub_B2C374(int___TypeInfo, 1LL);
  if ( !this )
    goto LABEL_19;
  if ( !LODWORD(this->fields.logic) )
    goto LABEL_20;
  LODWORD(this->fields.logictarget) = targetId;
  BattleActionData__AddHpDecreaseFuncTargets(action, funcType, (System_Int32_array *)this, 0LL);
  this = (BattleLogicFunction_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !this
    || (MasterData_WarQuestSelectionMaster = (DataMasterBase_WarMaster__WarEntity__int__o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                                                              (DataManager_o *)this,
                                                                                              (const MethodInfo_17339EC *)Method_DataManager_GetMasterData_FunctionMaster___),
        (this = (BattleLogicFunction_o *)DataVals__GetDependFuncIdArray(baseVals, 0LL)) == 0LL) )
  {
LABEL_19:
    sub_B2C434(this, *(_QWORD *)&targetId);
  }
  logic = this->fields.logic;
  v16 = this;
  if ( (int)logic >= 1 )
  {
    v17 = 0LL;
    while ( v17 < (unsigned int)logic )
    {
      if ( !MasterData_WarQuestSelectionMaster )
        goto LABEL_19;
      this = (BattleLogicFunction_o *)DataMasterBase_WarMaster__WarEntity__int___GetEntity(
                                        MasterData_WarQuestSelectionMaster,
                                        *((_DWORD *)&v16->fields.logictarget + v17),
                                        (const MethodInfo_24E40D0 *)Method_DataMasterBase_FunctionMaster__FunctionEntity__int__GetEntity__);
      if ( this )
      {
        v19 = this;
        this = (BattleLogicFunction_o *)BattleLogicFunction__getTargetids(
                                          v22,
                                          action,
                                          HIDWORD(this->fields.logic),
                                          baseVals,
                                          v18);
        if ( !action->fields.funcTargetList )
          goto LABEL_19;
        v20 = this;
        System_Collections_Generic_List_int___AddRange(
          action->fields.funcTargetList,
          (System_Collections_Generic_IEnumerable_T__o *)this,
          (const MethodInfo_2F6724C *)Method_System_Collections_Generic_List_int__AddRange__);
        BattleActionData__AddHpDecreaseFuncTargets(action, (int32_t)v19->fields.logic, (System_Int32_array *)v20, 0LL);
      }
      LODWORD(logic) = v16->fields.logic;
      if ( (__int64)++v17 >= (int)logic )
        return;
    }
LABEL_20:
    v21 = sub_B2C460(this);
    sub_B2C400(v21, 0LL);
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
  if ( (byte_418A773 & 1) == 0 )
  {
    sub_B2C35C(&StringLiteral_15333/*"WAR_BOARD_PROGRESS_OPPONENT_BUFF_TYPES"*/, *(_QWORD *)&buffType);
    this = (BattleLogicFunction_o *)sub_B2C35C(&StringLiteral_15334/*"WAR_BOARD_PROGRESS_SELF_BUFF_TYPES"*/, v8);
    byte_418A773 = 1;
  }
  IsUpdateBuffProgressTurn = BattleLogicFunction__IsUpdateBuffProgressTurn(
                               this,
                               buffType,
                               (System_String_o *)StringLiteral_15334/*"WAR_BOARD_PROGRESS_SELF_BUFF_TYPES"*/,
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
            (System_String_o *)StringLiteral_15333/*"WAR_BOARD_PROGRESS_OPPONENT_BUFF_TYPES"*/,
            &v7->fields.buffProgressTurnOpponentList,
            v10) )
      return;
    v11 = 0;
  }
  *isSelfTurn = v11;
}


void __fastcall BattleLogicFunction__UpdateUserEquipSkillChargeTurn(
        BattleLogicFunction_o *this,
        DataVals_o *dataVals,
        bool isProgress,
        const MethodInfo *method)
{
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x1
  __int64 v12; // x21
  __int64 v13; // x1
  BattleData_o *data; // x0
  System_Collections_Generic_IEnumerable_T__o *v15; // x22
  System_Int32_array **TargetList; // x0
  System_String_array **v17; // x2
  System_String_array **v18; // x3
  System_Boolean_array **v19; // x4
  System_Int32_array **v20; // x5
  System_Int32_array *v21; // x6
  System_Int32_array *v22; // x7
  System_Action_DrawLotsDisplayMessage_DisplayedInGroup_SaveData__o *v23; // x0
  System_Action_T__o *v24; // x20
  __int64 *v25; // x8

  if ( (byte_418A7A9 & 1) == 0 )
  {
    sub_B2C35C(&Method_System_Action_BattleSkillInfoData___ctor__, dataVals);
    sub_B2C35C(&System_Action_BattleSkillInfoData__TypeInfo, v7);
    sub_B2C35C(&Method_BasicHelper_ForEach_BattleSkillInfoData___, v8);
    sub_B2C35C(&Method_BattleLogicFunction___c__DisplayClass99_0__UpdateUserEquipSkillChargeTurn_b__0__, v9);
    sub_B2C35C(&Method_BattleLogicFunction___c__DisplayClass99_0__UpdateUserEquipSkillChargeTurn_b__1__, v10);
    sub_B2C35C(&BattleLogicFunction___c__DisplayClass99_0_TypeInfo, v11);
    byte_418A7A9 = 1;
  }
  v12 = sub_B2C42C(BattleLogicFunction___c__DisplayClass99_0_TypeInfo);
  BattleLogicFunction___c__DisplayClass99_0___ctor((BattleLogicFunction___c__DisplayClass99_0_o *)v12, 0LL);
  data = this->fields.data;
  if ( !data
    || (data = (BattleData_o *)BattleData__getMasterSkillInfos(data, 0LL), !dataVals)
    || (v15 = (System_Collections_Generic_IEnumerable_T__o *)data,
        data = (BattleData_o *)DataVals__GetValue(dataVals, 0LL),
        !v12) )
  {
    sub_B2C434(data, v13);
  }
  *(_DWORD *)(v12 + 16) = (_DWORD)data;
  *(_DWORD *)(v12 + 20) = DataVals__GetValue2(dataVals, 0LL) - 1;
  TargetList = (System_Int32_array **)DataVals__GetTargetList(dataVals, 0LL);
  *(_QWORD *)(v12 + 24) = TargetList;
  sub_B2C2F8((BattleServantConfConponent_o *)(v12 + 24), TargetList, v17, v18, v19, v20, v21, v22);
  v23 = (System_Action_DrawLotsDisplayMessage_DisplayedInGroup_SaveData__o *)sub_B2C42C(System_Action_BattleSkillInfoData__TypeInfo);
  v24 = (System_Action_T__o *)v23;
  if ( isProgress )
    v25 = &Method_BattleLogicFunction___c__DisplayClass99_0__UpdateUserEquipSkillChargeTurn_b__0__;
  else
    v25 = &Method_BattleLogicFunction___c__DisplayClass99_0__UpdateUserEquipSkillChargeTurn_b__1__;
  System_Action_DrawLotsDisplayMessage_DisplayedInGroup_SaveData____ctor(
    v23,
    (Il2CppObject *)v12,
    *v25,
    (const MethodInfo_24BBAD8 *)Method_System_Action_BattleSkillInfoData___ctor__);
  BasicHelper__ForEach_DrawLotsDisplayMessage_DisplayedInGroup_SaveData_(
    v15,
    v24,
    (const MethodInfo_1727C50 *)Method_BasicHelper_ForEach_BattleSkillInfoData___);
}


BattleBuffData_BuffData_o *__fastcall BattleLogicFunction___FunctionSubFieldBuff_b__119_0(
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
    sub_B2C434(this, buff);
  }
  return BattleBuffData__CreateDummyBuff((BattleBuffData_o *)this, buff, 0LL);
}


bool __fastcall BattleLogicFunction___getTargetids_b__53_0(
        BattleLogicFunction_o *this,
        int32_t x,
        const MethodInfo *method)
{
  BattleData_o *data; // x0

  data = this->fields.data;
  if ( !data )
    sub_B2C434(0LL, x);
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
  __int64 v17; // x1
  __int64 v18; // x1
  BattleData_o *data; // x0
  BattleServantData_o *v20; // x21
  BattleServantData_o *v21; // x19
  int v22; // w20
  float BuffTOLERANCEMagnification; // s0
  float BuffGRANTSUBSTATEMagnification; // s0
  int32_t InstantDeathRate; // w0
  bool result; // w0
  float v27; // s0
  int32_t v28; // w0
  int v29; // w8
  BattleLogicFunction_o *Next; // x0
  const MethodInfo *v31; // x4
  struct System_Int32_array **p_vals; // x8
  System_Int32_array *v33; // x20
  System_String_o *v34; // x19
  System_String_o *v35; // x0
  int v36; // w22
  float BuffTOLERANCESUBSTATEMagnification; // s0
  int value; // [xsp+Ch] [xbp-64h]
  __int64 v40; // [xsp+18h] [xbp-58h] BYREF

  if ( (byte_418A779 & 1) == 0 )
  {
    sub_B2C35C(&StringLiteral_17401/*"checkFuncAction("*/, args);
    sub_B2C35C(&StringLiteral_133/*" < "*/, v17);
    sub_B2C35C(&StringLiteral_17400/*"checkFuncAction firstResult:false"*/, v18);
    byte_418A779 = 1;
  }
  v40 = 0LL;
  data = this->fields.data;
  if ( !data )
    goto LABEL_51;
  data = (BattleData_o *)BattleData__getServantData(data, actorId, 0LL);
  if ( !this->fields.data )
    goto LABEL_51;
  v20 = (BattleServantData_o *)data;
  data = (BattleData_o *)BattleData__getServantData(this->fields.data, targetId, 0LL);
  v40 = 0x3E8000003E8LL;
  if ( !baseVals )
    goto LABEL_51;
  v21 = (BattleServantData_o *)data;
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
  data = (BattleData_o *)BattleUtility__Abs_24686912(value, 0LL);
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
        if ( !v21 )
          goto LABEL_51;
        if ( !BattleServantData__checkAvoidInstantDeath(v21, v20, 0LL) )
        {
          Next = (BattleLogicFunction_o *)BattleRandom__getNext(1000, 0LL);
          HIDWORD(v40) = (_DWORD)Next;
          InstantDeathRate = BattleLogicFunction__GetInstantDeathRate(
                               Next,
                               (float)value,
                               v21,
                               v20,
                               isTreasureDevice,
                               v31);
          goto LABEL_37;
        }
        v40 = 0x3E800000000LL;
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
        if ( v20 || !DataVals__isParam(baseVals, 74, 0LL) )
        {
          data = (BattleData_o *)BattleRandom__getNext(1000, 0LL);
          if ( !v21 )
            goto LABEL_51;
          v36 = (int)data;
          BuffTOLERANCESUBSTATEMagnification = BattleServantData__getBuffTOLERANCESUBSTATEMagnification(
                                                 v21,
                                                 v33,
                                                 v20,
                                                 0LL);
          HIDWORD(v40) = BattleUtility__FloorToInt(
                           (float)(BuffTOLERANCESUBSTATEMagnification * 1000.0) + (float)v36,
                           0LL);
          if ( v20 )
          {
            BuffGRANTSUBSTATEMagnification = BattleServantData__getBuffGRANTSUBSTATEMagnification(v20, v33, v21, 0LL);
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
        if ( !v21 )
          goto LABEL_51;
        v27 = (float)(BattleServantData__getBuffResistDelayNPTurn(v21, v20, 0LL) * 1000.0) + (float)(int)data;
LABEL_33:
        v28 = BattleUtility__FloorToInt(v27, 0LL);
LABEL_34:
        HIDWORD(v40) = v28;
LABEL_35:
        v29 = value;
LABEL_45:
        LODWORD(v40) = v29;
        goto LABEL_46;
      }
      if ( !FuncList__Check(46, funcEnt->fields.funcType, 0LL) )
      {
        v28 = BattleRandom__getNext(1000, 0LL);
        goto LABEL_34;
      }
    }
    HIDWORD(v40) = 0;
    v29 = 1000;
    goto LABEL_45;
  }
  if ( buffEnt )
  {
    data = (BattleData_o *)BattleRandom__getNext(1000, 0LL);
    v22 = (int)data;
    if ( v20 )
    {
      if ( v21 )
      {
        BuffTOLERANCEMagnification = BattleServantData__getBuffTOLERANCEMagnification(
                                       v21,
                                       buffEnt->fields.vals,
                                       v20,
                                       &this->fields.wkStr,
                                       0LL);
        HIDWORD(v40) = BattleUtility__FloorToInt((float)(BuffTOLERANCEMagnification * 1000.0) + (float)v22, 0LL);
        BuffGRANTSUBSTATEMagnification = BattleServantData__getBuffGRANTSTATEMagnification(
                                           v20,
                                           buffEnt->fields.vals,
                                           v21,
                                           &this->fields.wkStr,
                                           0,
                                           0LL);
LABEL_15:
        InstantDeathRate = BattleUtility__FloorToInt(
                             (float)(BuffGRANTSUBSTATEMagnification * 1000.0) + (float)value,
                             0LL);
LABEL_37:
        LODWORD(v40) = InstantDeathRate;
        goto LABEL_46;
      }
LABEL_51:
      sub_B2C434(data, args);
    }
    v27 = (float)(int)data;
    goto LABEL_33;
  }
LABEL_46:
  v34 = System_Int32__ToString((int32_t)&v40 + 4, 0LL);
  v35 = System_Int32__ToString((int32_t)&v40, 0LL);
  System_String__Concat_44308944(
    (System_String_o *)StringLiteral_17401/*"checkFuncAction("*/,
    v34,
    (System_String_o *)StringLiteral_133/*" < "*/,
    v35,
    0LL);
  return SHIDWORD(v40) < (int)v40;
}


// local variable allocation has failed, the output may be wrong!
bool __fastcall BattleLogicFunction__checkNoActionCondition(
        BattleLogicFunction_o *this,
        int32_t targetId,
        FunctionEntity_o *funcEnt,
        const MethodInfo *method)
{
  BattleData_o *data; // x0
  unsigned int funcType; // w8

  data = this->fields.data;
  if ( !data )
    goto LABEL_10;
  data = (BattleData_o *)BattleData__getServantData(data, targetId, 0LL);
  if ( !funcEnt )
    goto LABEL_10;
  funcType = funcEnt->fields.funcType;
  if ( (funcType > 0x2C || ((1LL << funcType) & 0x100000000180LL) == 0) && funcType != 133 )
    return 0;
  if ( !data )
LABEL_10:
    sub_B2C434(data, *(_QWORD *)&targetId);
  return HIBYTE(data->fields.combodata) != 0;
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
  const MethodInfo *v19; // [xsp+8h] [xbp-48h]

  if ( (byte_418A7AE & 1) == 0 )
  {
    sub_B2C35C(&BattleActionData_TypeInfo, *(_QWORD *)&targetId);
    byte_418A7AE = 1;
  }
  v13 = (BattleActionData_o *)sub_B2C42C(BattleActionData_TypeInfo);
  BattleActionData___ctor(v13, 0LL);
  data = this->fields.data;
  if ( !data || (data = (BattleData_o *)BattleData__getServantData(data, targetId, 0LL), !baseVals) )
    sub_B2C434(data, v14);
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
  BattleActionData_o *v17; // x23
  NpPointToTurnConvert_o *v18; // x28
  NpGaugeAbsorbResult_o *v19; // x27
  const MethodInfo *v20; // x4
  const MethodInfo *v21; // x4
  BattleActionData_o *v22; // x0
  const MethodInfo *v23; // x7
  float Turn_k__BackingField; // s0
  double v25; // d0
  BattleActionData_o *v26; // x0

  v12 = this;
  if ( (byte_418A7A4 & 1) == 0 )
  {
    sub_B2C35C(&BattleActionData_TypeInfo, *(_QWORD *)&targetId);
    sub_B2C35C(&NpGaugeAbsorbResult_TypeInfo, v13);
    this = (BattleLogicFunction_o *)sub_B2C35C(&NpPointToTurnConvert_TypeInfo, v14);
    byte_418A7A4 = 1;
  }
  if ( !funcTarget )
    goto LABEL_12;
  funcUnit_k__BackingField = funcTarget->fields._funcUnit_k__BackingField;
  if ( !funcUnit_k__BackingField )
    goto LABEL_12;
  dataVals_k__BackingField = funcUnit_k__BackingField->fields._dataVals_k__BackingField;
  v17 = (BattleActionData_o *)sub_B2C42C(BattleActionData_TypeInfo);
  BattleActionData___ctor(v17, 0LL);
  v18 = (NpPointToTurnConvert_o *)sub_B2C42C(NpPointToTurnConvert_TypeInfo);
  NpPointToTurnConvert___ctor(v18, 0LL);
  v19 = (NpGaugeAbsorbResult_o *)sub_B2C42C(NpGaugeAbsorbResult_TypeInfo);
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
    sub_B2C434(this, *(_QWORD *)&targetId);
  }
  Turn_k__BackingField = v19->fields._Turn_k__BackingField;
  if ( Turn_k__BackingField == INFINITY )
    v25 = -Turn_k__BackingField;
  else
    v25 = Turn_k__BackingField;
  v26 = BattleLogicFunction__functionHastenNpTurn(
          v12,
          targetId,
          funcEnt,
          dataVals_k__BackingField,
          dataVals_k__BackingField->fields.funcIndex,
          isCommandSideEffect,
          (int)v25,
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
  _BOOL4 v6; // w25
  BattleActionData_o *v8; // x28
  BattleLogicFunction_o *v9; // x20
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
  struct BattleLogicFunctionProcess_FunctionUnitCheck_o *funcUnit_k__BackingField; // x19
  DataVals_o *dataVals_k__BackingField; // x21
  int32_t actorId; // w26
  BuffEntity_o *v36; // x24
  int32_t v37; // w0
  BattleActionData_o *v38; // x19
  BattleServantData_o *v39; // x22
  BattleServantData_o *ServantData; // x27
  __int64 v41; // x26
  const MethodInfo *v42; // x4
  int v43; // w8
  int v44; // w19
  char v45; // w23
  _BOOL4 v46; // w25
  int32_t type; // w19
  const MethodInfo *v48; // x3
  bool v49; // zf
  BattleLogicFunction_ProcListInArgs_o *v50; // x25
  int v51; // w9
  int v52; // w8
  struct BattleData_o *data; // x8
  int32_t ProgressTurnCond; // w0
  int32_t v55; // w19
  int32_t v56; // w19
  int32_t v57; // w19
  int32_t v58; // w19
  int32_t tdCommandTypeChange; // w8
  System_Int32_array **v60; // x0
  System_String_array **v61; // x2
  System_String_array **v62; // x3
  System_Boolean_array **v63; // x4
  System_Int32_array **v64; // x5
  System_Int32_array *v65; // x6
  System_Int32_array *v66; // x7
  __int64 v67; // x23
  __int64 v68; // x19
  int32_t v69; // w19
  struct BattleData_o *v70; // x8
  struct BattleEntity_o *battle_ent; // x8
  int64_t userId; // x25
  int32_t eventId; // w19
  EventPointBuffMaster_o *v74; // x28
  int32_t EventPointGroupId; // w23
  UserEventPointEntity_o *EntityDefinitely; // x0
  int64_t value; // x19
  int logic; // w8
  int v79; // w10
  __int64 v80; // x9
  __int64 v81; // x11
  System_Int32_array **v82; // x0
  System_String_array **v83; // x2
  System_String_array **v84; // x3
  System_Boolean_array **v85; // x4
  System_Int32_array **v86; // x5
  System_Int32_array *v87; // x6
  System_Int32_array *v88; // x7
  __int64 v89; // x23
  __int64 v90; // x19
  BattleActionData_o *v91; // x28
  int32_t Param; // w23
  __int64 v93; // x19
  bool isEnemy; // w8
  int v95; // w8
  System_Int32_array **TargetIndiv; // x0
  System_String_array **v97; // x2
  System_String_array **v98; // x3
  System_Boolean_array **v99; // x4
  System_Int32_array **v100; // x5
  System_Int32_array *v101; // x6
  System_Int32_array *v102; // x7
  System_String_array **v103; // x2
  System_String_array **v104; // x3
  System_Boolean_array **v105; // x4
  System_Int32_array **v106; // x5
  System_Int32_array *v107; // x6
  System_Int32_array *v108; // x7
  int32_t v109; // w19
  System_Int32_array **IntervalData; // x0
  System_String_array **v111; // x2
  System_String_array **v112; // x3
  System_Boolean_array **v113; // x4
  System_Int32_array **v114; // x5
  System_Int32_array *v115; // x6
  System_Int32_array *v116; // x7
  System_Int32_array **ParamArray; // x0
  System_String_array **v118; // x2
  System_String_array **v119; // x3
  System_Boolean_array **v120; // x4
  System_Int32_array **v121; // x5
  System_Int32_array *v122; // x6
  System_Int32_array *v123; // x7
  int32_t v124; // w19
  int32_t RelationId; // w23
  BattleBuffData_RelationOverwriteData_o *v126; // x19
  System_String_array **v127; // x2
  System_String_array **v128; // x3
  System_Boolean_array **v129; // x4
  System_Int32_array **v130; // x5
  System_Int32_array *v131; // x6
  System_Int32_array *v132; // x7
  BattleDataDefine_c *v133; // x0
  int32_t v134; // w19
  bool v135; // w0
  float UpDownGiveHeal; // s8
  int32_t v137; // w0
  int v138; // s0
  int32_t v139; // w0
  int v140; // s0
  System_Int32_array **v141; // x0
  System_String_array **v142; // x2
  System_String_array **v143; // x3
  System_Boolean_array **v144; // x4
  System_Int32_array **v145; // x5
  System_Int32_array *v146; // x6
  System_Int32_array *v147; // x7
  System_Int32_array **v148; // x0
  System_String_array **v149; // x2
  System_String_array **v150; // x3
  System_Boolean_array **v151; // x4
  System_Int32_array **v152; // x5
  System_Int32_array *v153; // x6
  System_Int32_array *v154; // x7
  System_Int32_array **v155; // x0
  System_String_array **v156; // x2
  System_String_array **v157; // x3
  System_Boolean_array **v158; // x4
  System_Int32_array **v159; // x5
  System_Int32_array *v160; // x6
  System_Int32_array *v161; // x7
  int32_t v162; // w19
  System_Int32_array **UpBuffRateBuffTypeList; // x0
  System_String_array **v164; // x2
  System_String_array **v165; // x3
  System_Boolean_array **v166; // x4
  System_Int32_array **v167; // x5
  System_Int32_array *v168; // x6
  System_Int32_array *v169; // x7
  struct BattleLogicFunction_FunctionArgument_o *externalArg; // x8
  struct BattleData_o *v171; // x8
  System_Int32_array **AddIndividualty; // x0
  System_String_array **v173; // x2
  System_String_array **v174; // x3
  System_Boolean_array **v175; // x4
  System_Int32_array **v176; // x5
  System_Int32_array *v177; // x6
  System_Int32_array *v178; // x7
  System_Int32_array **LinkageTargetIndividualty; // x0
  System_String_array **v180; // x2
  System_String_array **v181; // x3
  System_Boolean_array **v182; // x4
  System_Int32_array **v183; // x5
  System_Int32_array *v184; // x6
  System_Int32_array *v185; // x7
  const MethodInfo *v186; // x3
  struct BattleData_o *v187; // x8
  System_Int32_array **ValsList; // x0
  System_String_array **v189; // x2
  System_String_array **v190; // x3
  System_Boolean_array **v191; // x4
  System_Int32_array **v192; // x5
  System_Int32_array *v193; // x6
  System_Int32_array *v194; // x7
  int32_t v195; // w0
  int v196; // w8
  int v197; // w9
  UnityEngine_Object_o *v198; // x19
  bool v199; // w19
  int32_t v200; // w23
  int32_t v201; // w23
  CommandCodeInfo_o *UserCommandCode; // x0
  int32_t MaxHp; // w25
  int32_t v204; // w23
  bool v205; // w0
  __int64 v206; // x4
  int32_t v207; // w19
  bool IsCommandSideEffect; // w0
  const MethodInfo *v209; // x7
  BattleActionEffect_AddChangeMaxHpBuff_o *v210; // x19
  BattleLogicFunction_o *v211; // x28
  System_String_array **v212; // x2
  System_String_array **v213; // x3
  System_Boolean_array **v214; // x4
  System_Int32_array **v215; // x5
  System_Int32_array *v216; // x6
  System_Int32_array *v217; // x7
  System_Int32_array **v218; // x0
  System_String_array **v219; // x2
  System_String_array **v220; // x3
  System_Boolean_array **v221; // x4
  System_Int32_array **v222; // x5
  System_Int32_array *v223; // x6
  System_Int32_array *v224; // x7
  int32_t id; // w19
  System_Collections_Generic_List_int__o *v226; // x0
  System_String_o *i; // x0
  System_String_o *v228; // x0
  System_String_o *v229; // x0
  System_String_o *v230; // x0
  System_Int32_array *QuestIndividualities; // x0
  UnityEngine_Object_o *v232; // x22
  System_Int32_array *v233; // x19
  BattlePerformance_o *perf; // x2
  struct BattleLogic_o *v235; // x8
  UnityEngine_Object_o *v236; // x19
  int v237; // w8
  BattleLogicFunction_o *v238; // x19
  unsigned int v239; // w22
  int32_t v240; // w19
  struct BattleData_o *v241; // x8
  BattleBuffData_o *buffData; // x19
  BattleBuffData_CheckIndividualitiesData_o *v243; // x22
  FunctionEntity_o *v244; // x2
  DataVals_o *v245; // x3
  int32_t v246; // w4
  const MethodInfo *v247; // x5
  bool v248; // w0
  BattleActionData_BuffData_o *v249; // x22
  UnityEngine_Object_o *v250; // x19
  System_String_array **v251; // x2
  System_String_array **v252; // x3
  System_Boolean_array **v253; // x4
  System_Int32_array **v254; // x5
  System_Int32_array *v255; // x6
  System_Int32_array *v256; // x7
  struct BattleLogic_o *v257; // x8
  System_Int32_array **v258; // x1
  System_Int32_array **v259; // x0
  System_String_array **v260; // x2
  System_String_array **v261; // x3
  System_Boolean_array **v262; // x4
  System_Int32_array **v263; // x5
  System_Int32_array *v264; // x6
  System_Int32_array *v265; // x7
  const MethodInfo *v266; // x3
  __int64 v268; // x0
  __int64 v269; // x0
  BattleActionData_o *userCommandCodeId; // [xsp+8h] [xbp-B8h]
  int userCommandCodeIda; // [xsp+8h] [xbp-B8h]
  int32_t funcIndex; // [xsp+14h] [xbp-ACh]
  BattleActionData_o *v273; // [xsp+18h] [xbp-A8h]
  BattleActionData_o *v274; // [xsp+20h] [xbp-A0h]
  int32_t treasureDvcId; // [xsp+2Ch] [xbp-94h]
  int32_t v276; // [xsp+30h] [xbp-90h]
  unsigned int uniqueId; // [xsp+34h] [xbp-8Ch]
  struct FunctionEntity_o *funcEnt; // [xsp+38h] [xbp-88h]
  BattleActionData_BuffData_o *v280; // [xsp+48h] [xbp-78h]
  BattleLogicFunctionProcess_FunctionTargetCheck_o *funcTargeta; // [xsp+50h] [xbp-70h]
  WarEntity_o *entity; // [xsp+58h] [xbp-68h] BYREF
  int v283; // [xsp+68h] [xbp-58h] BYREF
  bool isSelfTurn; // [xsp+6Ch] [xbp-54h] BYREF

  v6 = shortbuff;
  v8 = mainAction;
  v9 = this;
  if ( (byte_418A781 & 1) == 0 )
  {
    sub_B2C35C(&BattleActionEffect_AddChangeMaxHpBuff_TypeInfo, mainAction);
    sub_B2C35C(&BattleActionData_TypeInfo, v10);
    sub_B2C35C(&BattleDataDefine_TypeInfo, v11);
    sub_B2C35C(&BattleBuffData_BuffData___TypeInfo, v12);
    sub_B2C35C(&BattleBuffData_BuffData_TypeInfo, v13);
    sub_B2C35C(&BuffList_TypeInfo, v14);
    sub_B2C35C(&BattleBuffData_CheckIndividualitiesData_TypeInfo, v15);
    sub_B2C35C(&Method_DataManager_GetMasterData_EventPointBuffMaster___, v16);
    sub_B2C35C(&Method_DataManager_GetMasterData_UserEventPointMaster___, v17);
    sub_B2C35C(&Method_DataManager_GetMaster_BuffTypeDetailMaster___, v18);
    sub_B2C35C(&DataManager_TypeInfo, v19);
    sub_B2C35C(&Method_DataMasterBase_BuffTypeDetailMaster__BuffTypeDetailEntity__int__TryGetEntity__, v20);
    sub_B2C35C(&BattleBuffData_FieldAliveCondData_TypeInfo, v21);
    sub_B2C35C(&int___TypeInfo, v22);
    sub_B2C35C(&Method_System_Collections_Generic_List_int___ctor__, v23);
    sub_B2C35C(&System_Collections_Generic_List_int__TypeInfo, v24);
    sub_B2C35C(&System_Math_TypeInfo, v25);
    sub_B2C35C(&UnityEngine_Object_TypeInfo, v26);
    sub_B2C35C(&BattleBuffData_RelationOverwriteData_TypeInfo, v27);
    sub_B2C35C(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v28);
    sub_B2C35C(&StringLiteral_18930/*"functionAddState=>"*/, v29);
    sub_B2C35C(&StringLiteral_13334/*"TAMAMOCAT_STUN_BUFF_ID"*/, v30);
    sub_B2C35C(&StringLiteral_13335/*"TAMAMOCAT_TREASURE_DEVICE_ID_"*/, v31);
    this = (BattleLogicFunction_o *)sub_B2C35C(&StringLiteral_1/*""*/, v32);
    byte_418A781 = 1;
  }
  isSelfTurn = 0;
  entity = 0LL;
  v283 = 0;
  if ( !funcTarget )
    goto LABEL_309;
  if ( !v8 )
    goto LABEL_309;
  funcUnit_k__BackingField = funcTarget->fields._funcUnit_k__BackingField;
  if ( !funcUnit_k__BackingField )
    goto LABEL_309;
  dataVals_k__BackingField = funcUnit_k__BackingField->fields._dataVals_k__BackingField;
  if ( !dataVals_k__BackingField )
    goto LABEL_309;
  actorId = v8->fields.actorId;
  uniqueId = funcTarget->fields._targetId_k__BackingField;
  funcEnt = dataVals_k__BackingField->fields.funcEnt;
  v36 = (BuffEntity_o *)((__int64 (__fastcall *)(BattleLogicFunctionProcess_FunctionTargetCheck_o *, void *, BattleLogicFunctionProcess_FunctionTargetCheck_o *, BattleLogicFunction_ProcListInArgs_o *, bool, const MethodInfo *))funcTarget->klass->vtable._13_GetFixBuffEntity.method)(
                          funcTarget,
                          funcTarget->klass[1]._1.image,
                          funcTarget,
                          args,
                          shortbuff,
                          method);
  v37 = BattleLogicFunctionProcess_FunctionUnitCheck__get_FuncIndex(funcUnit_k__BackingField, 0LL);
  userCommandCodeId = (BattleActionData_o *)v8->fields.userCommandCodeId;
  treasureDvcId = v8->fields.treasureDvcId;
  funcIndex = v37;
  v38 = (BattleActionData_o *)sub_B2C42C(BattleActionData_TypeInfo);
  BattleActionData___ctor(v38, 0LL);
  this = (BattleLogicFunction_o *)v9->fields.data;
  if ( !this )
    goto LABEL_309;
  v274 = v38;
  this = (BattleLogicFunction_o *)BattleData__getServantData((BattleData_o *)this, actorId, 0LL);
  if ( !v9->fields.data )
    goto LABEL_309;
  v39 = (BattleServantData_o *)this;
  ServantData = BattleData__getServantData(v9->fields.data, uniqueId, 0LL);
  this = (BattleLogicFunction_o *)((__int64 (__fastcall *)(BattleLogicFunctionProcess_FunctionTargetCheck_o *, Il2CppMethodPointer))funcTarget->klass->vtable._7_MakeActionBuffData.method)(
                                    funcTarget,
                                    funcTarget->klass->vtable._8_AddBuff.methodPtr);
  if ( !ServantData )
    goto LABEL_309;
  v276 = actorId;
  funcTargeta = funcTarget;
  if ( !this )
    goto LABEL_309;
  v280 = (BattleActionData_BuffData_o *)this;
  LODWORD(this->fields.master) = ServantData->fields.uniqueId;
  LODWORD(this->fields.data) = funcIndex;
  v41 = sub_B2C42C(BattleBuffData_BuffData_TypeInfo);
  BattleBuffData_BuffData___ctor((BattleBuffData_BuffData_o *)v41, 0LL);
  if ( !v36 )
    goto LABEL_309;
  if ( !v41 )
    goto LABEL_309;
  *(_DWORD *)(v41 + 16) = v36->fields.id;
  if ( !args )
    goto LABEL_309;
  *(_DWORD *)(v41 + 164) = BattleLogicFunction_ProcListInArgs__get_SkillId(args, 0LL);
  *(_DWORD *)(v41 + 188) = BattleLogicFunction_ProcListInArgs__get_GrantSkillType(args, 0LL);
  *(_DWORD *)(v41 + 176) = DataVals__GetMotionChange(dataVals_k__BackingField, 0LL);
  v43 = 2 * DataVals__GetParam(dataVals_k__BackingField, 1, 0, 0LL);
  *(_DWORD *)(v41 + 20) = v43;
  v44 = v8->fields.isReversalShortBuffTurn ^ v6;
  if ( (v44 & 1) != 0 )
    *(_DWORD *)(v41 + 20) = v43 - 1;
  this = (BattleLogicFunction_o *)BattleLogicFunction__IsSvtBuffTurnExtend(v9, uniqueId, v36, v44 & 1, v42);
  if ( ((unsigned __int8)this & 1) != 0 )
  {
    v44 ^= 1u;
    v45 = 1;
    ++*(_DWORD *)(v41 + 20);
  }
  else
  {
    v45 = 0;
  }
  *(_DWORD *)(v41 + 68) = v276;
  if ( !funcEnt )
    goto LABEL_309;
  v46 = (v44 ^ Target__isEnemy(funcEnt->fields.targetType, 0LL)) & 1;
  isSelfTurn = v46;
  type = v36->fields.type;
  if ( (BYTE3(BuffList_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !BuffList_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(BuffList_TypeInfo);
  this = (BattleLogicFunction_o *)BuffList__IsForceProgressSelfTurnType(type, 0LL);
  if ( ((unsigned __int8)this & 1) != 0 )
  {
    v46 = 1;
    isSelfTurn = 1;
  }
  if ( (v45 & 1) == 0 )
  {
    BattleLogicFunction__UpdateBuffProgressTurn(v9, v36->fields.type, &isSelfTurn, v48);
    v46 = isSelfTurn;
  }
  v49 = !v46;
  v50 = args;
  v51 = v49;
  v52 = v51 ^ ServantData->fields.isEnemy;
  *(_BYTE *)(v41 + 180) = v52;
  if ( (v45 & 1) == 0 )
  {
    this = (BattleLogicFunction_o *)BuffEntity__GetProgressSelfTurn(v36, 0LL);
    if ( ((unsigned int)this & 0x80000000) != 0 )
    {
      v52 = *(unsigned __int8 *)(v41 + 180);
    }
    else
    {
      v52 = ((_DWORD)this == 0) ^ ServantData->fields.isEnemy;
      *(_BYTE *)(v41 + 180) = v52;
    }
  }
  *(_BYTE *)(v41 + 192) = (v52 == 0) ^ ServantData->fields.isEnemy;
  data = v9->fields.data;
  if ( !data )
    goto LABEL_309;
  this = (BattleLogicFunction_o *)data->fields.battleEvent;
  if ( !this )
    goto LABEL_309;
  *(_DWORD *)(v41 + 184) = ((__int64 (__fastcall *)(BattleLogicFunction_o *, BuffEntity_o *, Il2CppMethodPointer))this->klass[1].vtable._1_Finalize.method)(
                             this,
                             v36,
                             this->klass[1].vtable._2_GetHashCode.methodPtr);
  ProgressTurnCond = BuffEntity__GetProgressTurnCond(v36, 0LL);
  if ( (ProgressTurnCond & 0x80000000) == 0 )
    *(_DWORD *)(v41 + 184) = ProgressTurnCond;
  *(_DWORD *)(v41 + 24) = DataVals__GetParam(dataVals_k__BackingField, 2, 0, 0LL);
  *(_DWORD *)(v41 + 28) = DataVals__GetParam(dataVals_k__BackingField, 3, 0, 0LL);
  v280->fields.popDelay = DataVals__GetParam(dataVals_k__BackingField, 64, 0, 0LL);
  v55 = v36->fields.type;
  if ( (BYTE3(BuffList_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !BuffList_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(BuffList_TypeInfo);
  if ( BuffList__CheckType(143, v55, 0LL) )
    goto LABEL_54;
  v56 = v36->fields.type;
  if ( (BYTE3(BuffList_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !BuffList_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(BuffList_TypeInfo);
  if ( BuffList__CheckType(145, v56, 0LL) )
    goto LABEL_54;
  v57 = v36->fields.type;
  if ( (BYTE3(BuffList_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !BuffList_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(BuffList_TypeInfo);
  if ( BuffList__CheckType(146, v57, 0LL) )
    goto LABEL_54;
  v58 = v36->fields.type;
  if ( (BYTE3(BuffList_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !BuffList_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(BuffList_TypeInfo);
  if ( BuffList__CheckType(147, v58, 0LL) )
  {
LABEL_54:
    tdCommandTypeChange = args->fields.tdCommandTypeChange;
    if ( (tdCommandTypeChange & 0x80000000) == 0 )
      *(_DWORD *)(v41 + 28) = tdCommandTypeChange;
  }
  *(_DWORD *)(v41 + 52) = DataVals__GetParam(dataVals_k__BackingField, 8, 0, 0LL);
  *(_DWORD *)(v41 + 56) = DataVals__GetParam(dataVals_k__BackingField, 9, 0, 0LL);
  v60 = (System_Int32_array **)sub_B2C374(int___TypeInfo, 2LL);
  *(_QWORD *)(v41 + 40) = v60;
  sub_B2C2F8((BattleServantConfConponent_o *)(v41 + 40), v60, v61, v62, v63, v64, v65, v66);
  v67 = *(_QWORD *)(v41 + 40);
  this = (BattleLogicFunction_o *)DataVals__GetParam(dataVals_k__BackingField, 3, 0, 0LL);
  if ( !v67 )
    goto LABEL_309;
  if ( !*(_DWORD *)(v67 + 24) )
    goto LABEL_310;
  *(_DWORD *)(v67 + 32) = (_DWORD)this;
  v68 = *(_QWORD *)(v41 + 40);
  this = (BattleLogicFunction_o *)DataVals__GetParam(dataVals_k__BackingField, 4, 0, 0LL);
  if ( !v68 )
    goto LABEL_309;
  if ( *(_DWORD *)(v68 + 24) <= 1u )
    goto LABEL_310;
  v273 = v8;
  *(_DWORD *)(v68 + 36) = (_DWORD)this;
  v69 = v36->fields.type;
  if ( (BYTE3(BuffList_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !BuffList_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(BuffList_TypeInfo);
  this = (BattleLogicFunction_o *)BuffList__CheckType(135, v69, 0LL);
  if ( ((unsigned __int8)this & 1) != 0 )
  {
    v70 = v9->fields.data;
    if ( !v70 )
      goto LABEL_309;
    battle_ent = v70->fields.battle_ent;
    if ( !battle_ent )
      goto LABEL_309;
    userId = battle_ent->fields.userId;
    eventId = battle_ent->fields.eventId;
    this = (BattleLogicFunction_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !this )
      goto LABEL_309;
    this = (BattleLogicFunction_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                      (DataManager_o *)this,
                                      (const MethodInfo_17339EC *)Method_DataManager_GetMasterData_EventPointBuffMaster___);
    if ( !this )
      goto LABEL_309;
    v74 = (EventPointBuffMaster_o *)this;
    EventPointGroupId = EventPointBuffMaster__GetEventPointGroupId(
                          (EventPointBuffMaster_o *)this,
                          eventId,
                          funcEnt->fields.id,
                          0,
                          0LL);
    this = (BattleLogicFunction_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !this )
      goto LABEL_309;
    this = (BattleLogicFunction_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                      (DataManager_o *)this,
                                      (const MethodInfo_17339EC *)Method_DataManager_GetMasterData_UserEventPointMaster___);
    if ( !this )
      goto LABEL_309;
    EntityDefinitely = UserEventPointMaster__GetEntityDefinitely(
                         (UserEventPointMaster_o *)this,
                         userId,
                         eventId,
                         EventPointGroupId,
                         0LL);
    v50 = args;
    if ( EntityDefinitely )
    {
      value = EntityDefinitely->fields.value;
      this = (BattleLogicFunction_o *)EventPointBuffMaster__GetAllEventBuff(
                                        v74,
                                        EntityDefinitely->fields.eventId,
                                        EventPointGroupId,
                                        0LL);
      if ( !this )
        goto LABEL_309;
      logic = (int)this->fields.logic;
      if ( logic >= 1 )
      {
        v79 = 0;
        v80 = 0LL;
        do
        {
          if ( v79 >= (unsigned int)logic )
            goto LABEL_310;
          v81 = *((_QWORD *)&this->fields.logictarget + v79);
          if ( !v81 )
            goto LABEL_309;
          if ( value < *(int *)(v81 + 28) )
            break;
          ++v79;
          v80 = v81;
        }
        while ( v79 < logic );
        if ( v80 )
          *(_DWORD *)(v41 + 28) += *(_DWORD *)(v80 + 64);
      }
    }
  }
  if ( DataVals__isParam(dataVals_k__BackingField, 26, 0LL) && DataVals__isParam(dataVals_k__BackingField, 27, 0LL) )
  {
    v82 = (System_Int32_array **)sub_B2C374(int___TypeInfo, 2LL);
    *(_QWORD *)(v41 + 104) = v82;
    sub_B2C2F8((BattleServantConfConponent_o *)(v41 + 104), v82, v83, v84, v85, v86, v87, v88);
    v89 = *(_QWORD *)(v41 + 104);
    this = (BattleLogicFunction_o *)DataVals__GetParam(dataVals_k__BackingField, 26, 0, 0LL);
    if ( !v89 )
      goto LABEL_309;
    if ( !*(_DWORD *)(v89 + 24) )
      goto LABEL_310;
    *(_DWORD *)(v89 + 32) = (_DWORD)this;
    v90 = *(_QWORD *)(v41 + 104);
    this = (BattleLogicFunction_o *)DataVals__GetParam(dataVals_k__BackingField, 27, 0, 0LL);
    if ( !v90 )
      goto LABEL_309;
    if ( *(_DWORD *)(v90 + 24) <= 1u )
      goto LABEL_310;
    *(_DWORD *)(v90 + 36) = (_DWORD)this;
  }
  *(_DWORD *)(v41 + 64) = DataVals__GetParam(dataVals_k__BackingField, 15, 0, 0LL);
  *(_DWORD *)(v41 + 344) = DataVals__GetClassIconAuraEffectId(dataVals_k__BackingField, 0LL);
  if ( DataVals__GetParam(dataVals_k__BackingField, 11, 0, 0LL) >= 1 )
    *(_DWORD *)(v41 + 60) = v276;
  if ( DataVals__GetParam(dataVals_k__BackingField, 46, 0, 0LL) >= 1 )
    BattleBuffData_BuffData__onState((BattleBuffData_BuffData_o *)v41, 0x8000, 0LL);
  v91 = v273;
  if ( DataVals__GetParam(dataVals_k__BackingField, 50, 0, 0LL) >= 1 )
    BattleBuffData_BuffData__onState((BattleBuffData_BuffData_o *)v41, 0x10000, 0LL);
  if ( DataVals__GetParam(dataVals_k__BackingField, 88, 0, 0LL) >= 1 )
    BattleBuffData_BuffData__onState((BattleBuffData_BuffData_o *)v41, 0x80000, 0LL);
  if ( DataVals__GetParam(dataVals_k__BackingField, 90, 0, 0LL) >= 1 )
    BattleBuffData_BuffData__onState((BattleBuffData_BuffData_o *)v41, 0x100000, 0LL);
  if ( DataVals__GetParam(dataVals_k__BackingField, 65, 0, 0LL) >= 1 )
    BattleBuffData_BuffData__onState((BattleBuffData_BuffData_o *)v41, 0x40000, 0LL);
  if ( DataVals__GetParam(dataVals_k__BackingField, 144, 0, 0LL) >= 1 )
    BattleBuffData_BuffData__onState((BattleBuffData_BuffData_o *)v41, 0x2000000, 0LL);
  if ( DataVals__isParam(dataVals_k__BackingField, 42, 0LL) )
  {
    Param = DataVals__GetParam(dataVals_k__BackingField, 42, 0, 0LL);
    v93 = sub_B2C42C(BattleBuffData_FieldAliveCondData_TypeInfo);
    BattleBuffData_FieldAliveCondData___ctor((BattleBuffData_FieldAliveCondData_o *)v93, 0LL);
    if ( !v93 )
      goto LABEL_309;
    isEnemy = ServantData->fields.isEnemy;
    *(_BYTE *)(v93 + 17) = Param > 0;
    *(_BYTE *)(v93 + 16) = isEnemy;
    if ( (BYTE3(System_Math_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !System_Math_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(System_Math_TypeInfo);
    if ( Param >= 0 )
      v95 = Param;
    else
      v95 = -Param;
    *(_DWORD *)(v93 + 20) = v95;
    TargetIndiv = (System_Int32_array **)BuffEntity__GetTargetIndiv(v36, 0LL);
    *(_QWORD *)(v93 + 24) = TargetIndiv;
    sub_B2C2F8((BattleServantConfConponent_o *)(v93 + 24), TargetIndiv, v97, v98, v99, v100, v101, v102);
    *(_BYTE *)(v93 + 32) = BuffEntity__IsIncludeIgnoreIndividuality(v36, 0LL);
    *(_QWORD *)(v41 + 152) = v93;
    sub_B2C2F8(
      (BattleServantConfConponent_o *)(v41 + 152),
      (System_Int32_array **)v93,
      v103,
      v104,
      v105,
      v106,
      v107,
      v108);
    v50->fields.updateField = 1;
  }
  v109 = v36->fields.type;
  if ( (BYTE3(BuffList_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !BuffList_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(BuffList_TypeInfo);
  if ( BuffList__IsIntervalPossibleBuff(v109, 0LL) )
  {
    IntervalData = (System_Int32_array **)DataVals__GetIntervalData(dataVals_k__BackingField, 0LL);
    *(_QWORD *)(v41 + 360) = IntervalData;
    sub_B2C2F8((BattleServantConfConponent_o *)(v41 + 360), IntervalData, v111, v112, v113, v114, v115, v116);
  }
  if ( BattleBuffData__CheckInvalidSacrificeIndiv((BattleBuffData_BuffData_o *)v41, 0LL) )
    v50->fields.updateField = 1;
  ParamArray = (System_Int32_array **)DataVals__GetParamArray(dataVals_k__BackingField, 115, 0LL);
  *(_QWORD *)(v41 + 328) = ParamArray;
  sub_B2C2F8((BattleServantConfConponent_o *)(v41 + 328), ParamArray, v118, v119, v120, v121, v122, v123);
  *(_DWORD *)(v41 + 208) = BuffEntity__GetCardEffectId(v36, 0LL);
  v124 = v36->fields.type;
  if ( (BYTE3(BuffList_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !BuffList_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(BuffList_TypeInfo);
  if ( BuffList__CheckType(144, v124, 0LL) )
  {
    RelationId = BuffEntity__getRelationId(v36, 0LL);
    v126 = (BattleBuffData_RelationOverwriteData_o *)sub_B2C42C(BattleBuffData_RelationOverwriteData_TypeInfo);
    BattleBuffData_RelationOverwriteData___ctor(v126, 0LL);
    if ( RelationId >= 1 )
    {
      this = (BattleLogicFunction_o *)BuffEntity__getRelationId(v36, 0LL);
      if ( !v126 )
        goto LABEL_309;
      v126->fields.id = (int)this;
      v133 = BattleDataDefine_TypeInfo;
      if ( (BYTE3(BattleDataDefine_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !BattleDataDefine_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(BattleDataDefine_TypeInfo);
        v133 = BattleDataDefine_TypeInfo;
      }
      v126->fields.atkPriority = BuffEntity__getAtkRelationPriority(
                                   v36,
                                   v133->static_fields->OVERWRITE_ATK_RATE_PRIORITY,
                                   0LL);
      v126->fields.defPriority = BuffEntity__getDefRelationPriority(
                                   v36,
                                   BattleDataDefine_TypeInfo->static_fields->OVERWRITE_DEF_RATE_PRIORITY,
                                   0LL);
    }
    *(_QWORD *)(v41 + 168) = v126;
    sub_B2C2F8(
      (BattleServantConfConponent_o *)(v41 + 168),
      (System_Int32_array **)v126,
      v127,
      v128,
      v129,
      v130,
      v131,
      v132);
  }
  v134 = v36->fields.type;
  if ( (BYTE3(BuffList_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !BuffList_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(BuffList_TypeInfo);
  if ( BuffList__CheckType(154, v134, 0LL) )
  {
    this = (BattleLogicFunction_o *)BattleServantData__get_BuffData(ServantData, 0LL);
    if ( !this )
      goto LABEL_309;
    this = (BattleLogicFunction_o *)this->fields.wkStr;
    if ( !this )
      goto LABEL_309;
    BattleBuffData_SkillRankChangeData__UpdateAddRightAfter((BattleBuffData_SkillRankChangeData_o *)this, 1, 0LL);
    BattleActionData_BuffData__OnUpdateBuffType(v280, 1, 0LL);
  }
  v135 = BuffEntity__checkBuffType(v36, 7, 0LL);
  if ( v39 && v135 )
  {
    UpDownGiveHeal = BattleServantData__getUpDownGiveHeal(v39, ServantData, 0LL);
    v137 = BattleUtility__FloorToInt(UpDownGiveHeal * (float)*(int *)(v41 + 28), 0LL);
    v138 = *(_DWORD *)(v41 + 52);
    *(_DWORD *)(v41 + 28) = v137;
    v139 = BattleUtility__FloorToInt(UpDownGiveHeal * (float)v138, 0LL);
    v140 = *(_DWORD *)(v41 + 56);
    *(_DWORD *)(v41 + 52) = v139;
    *(_DWORD *)(v41 + 56) = BattleUtility__FloorToInt(UpDownGiveHeal * (float)v140, 0LL);
    BattleServantData__getIndividualities(v39, 0LL, 0LL);
  }
  *(_BYTE *)(v41 + 32) = 0;
  *(_BYTE *)(v41 + 33) = BattleLogicFunction_ProcListInArgs__get_IsPassive(v50, 0LL);
  if ( DataVals__isParam(dataVals_k__BackingField, 23, 0LL) )
    *(_BYTE *)(v41 + 33) = 1;
  if ( DataVals__isParam(dataVals_k__BackingField, 24, 0LL) )
    *(_BYTE *)(v41 + 33) = 0;
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
    v141 = (System_Int32_array **)DataVals__GetParamArray(dataVals_k__BackingField, 69, 0LL);
    *(_QWORD *)(v41 + 224) = v141;
    sub_B2C2F8((BattleServantConfConponent_o *)(v41 + 224), v141, v142, v143, v144, v145, v146, v147);
    v148 = (System_Int32_array **)DataVals__GetParamArray(dataVals_k__BackingField, 70, 0LL);
    *(_QWORD *)(v41 + 232) = v148;
    sub_B2C2F8((BattleServantConfConponent_o *)(v41 + 232), v148, v149, v150, v151, v152, v153, v154);
    v155 = (System_Int32_array **)DataVals__GetParamArray(dataVals_k__BackingField, 71, 0LL);
    *(_QWORD *)(v41 + 240) = v155;
    sub_B2C2F8((BattleServantConfConponent_o *)(v41 + 240), v155, v156, v157, v158, v159, v160, v161);
    *(_DWORD *)(v41 + 248) = DataVals__GetParam(dataVals_k__BackingField, 72, 0, 0LL);
    *(_DWORD *)(v41 + 252) = DataVals__GetParam(dataVals_k__BackingField, 59, 0, 0LL);
    *(_DWORD *)(v41 + 268) = DataVals__GetParam(dataVals_k__BackingField, 60, 0, 0LL);
  }
  v162 = v36->fields.type;
  if ( (BYTE3(BuffList_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !BuffList_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(BuffList_TypeInfo);
  if ( BuffList__CheckType(162, v162, 0LL) )
  {
    UpBuffRateBuffTypeList = (System_Int32_array **)BuffEntity__GetUpBuffRateBuffTypeList(v36, 0LL);
    *(_QWORD *)(v41 + 256) = UpBuffRateBuffTypeList;
    sub_B2C2F8((BattleServantConfConponent_o *)(v41 + 256), UpBuffRateBuffTypeList, v164, v165, v166, v167, v168, v169);
    *(_DWORD *)(v41 + 264) = BuffEntity__GetMaxBuffRate(v36, 0LL);
  }
  if ( DataVals__isParam(dataVals_k__BackingField, 22, 0LL) )
    BattleBuffData_BuffData__onState((BattleBuffData_BuffData_o *)v41, 64, 0LL);
  if ( DataVals__isParam(dataVals_k__BackingField, 25, 0LL) )
    BattleBuffData_BuffData__onState((BattleBuffData_BuffData_o *)v41, 128, 0LL);
  this = (BattleLogicFunction_o *)DataVals__isShowState(dataVals_k__BackingField, 0LL);
  if ( ((unsigned __int8)this & 1) != 0 )
  {
    LODWORD(mainAction) = DataVals__GetParam(dataVals_k__BackingField, 14, 0, 0LL);
LABEL_163:
    BattleBuffData_BuffData__setShowState((BattleBuffData_BuffData_o *)v41, (int32_t)mainAction, 0LL);
    goto LABEL_181;
  }
  if ( *(_BYTE *)(v41 + 33) )
  {
    externalArg = v50->fields.externalArg;
    if ( !externalArg )
      goto LABEL_309;
    if ( externalArg->fields.isWarBoard )
    {
      if ( !v39 )
        goto LABEL_309;
      if ( v39->fields.isEnemy && externalArg->fields.grantSkillType == 12 )
      {
        LODWORD(mainAction) = BuffEntity__GetShowStateWarBoardEnemyEquip(v36, 0, 0LL);
        if ( (_DWORD)mainAction )
          goto LABEL_163;
        if ( (BYTE3(DataManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !DataManager_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
        }
        this = (BattleLogicFunction_o *)DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_173398C *)Method_DataManager_GetMaster_BuffTypeDetailMaster___);
        if ( !this )
          goto LABEL_309;
        this = (BattleLogicFunction_o *)DataMasterBase_WarMaster__WarEntity__int___TryGetEntity(
                                          (DataMasterBase_WarMaster__WarEntity__int__o *)this,
                                          &entity,
                                          v36->fields.type,
                                          (const MethodInfo_24E412C *)Method_DataMasterBase_BuffTypeDetailMaster__BuffTypeDetailEntity__int__TryGetEntity__);
        if ( ((unsigned __int8)this & 1) != 0 )
        {
          this = (BattleLogicFunction_o *)entity;
          if ( !entity )
            goto LABEL_309;
          this = (BattleLogicFunction_o *)BuffTypeDetailEntity__GetShowStateWarBoardEnemyEquip(
                                            (BuffTypeDetailEntity_o *)entity,
                                            0,
                                            0LL);
          mainAction = (BattleActionData_o *)(unsigned int)this;
          if ( (_DWORD)this )
            goto LABEL_163;
        }
      }
    }
    v171 = v9->fields.data;
    if ( !v171 )
      goto LABEL_309;
    this = (BattleLogicFunction_o *)v171->fields.battleEvent;
    if ( !this )
      goto LABEL_309;
    ((void (__fastcall *)(BattleLogicFunction_o *, __int64, Il2CppMethodPointer))this->klass[1].vtable._2_GetHashCode.method)(
      this,
      v41,
      this->klass[1].vtable._3_ToString.methodPtr);
  }
LABEL_181:
  if ( DataVals__IsOpponentOnly(dataVals_k__BackingField, 0LL) )
    BattleBuffData_BuffData__onState((BattleBuffData_BuffData_o *)v41, 2048, 0LL);
  if ( DataVals__isShowCommand(dataVals_k__BackingField, 0LL) )
    BattleBuffData_BuffData__onState((BattleBuffData_BuffData_o *)v41, 512, 0LL);
  if ( DataVals__IsAddIndividualty(dataVals_k__BackingField, 0LL) )
  {
    AddIndividualty = (System_Int32_array **)DataVals__GetAddIndividualty(dataVals_k__BackingField, 0LL);
    *(_QWORD *)(v41 + 120) = AddIndividualty;
    sub_B2C2F8((BattleServantConfConponent_o *)(v41 + 120), AddIndividualty, v173, v174, v175, v176, v177, v178);
  }
  if ( DataVals__IsAddLinkageTargetIndividualty(dataVals_k__BackingField, 0LL) )
  {
    LinkageTargetIndividualty = (System_Int32_array **)DataVals__GetLinkageTargetIndividualty(
                                                         dataVals_k__BackingField,
                                                         0LL);
    *(_QWORD *)(v41 + 128) = LinkageTargetIndividualty;
    sub_B2C2F8(
      (BattleServantConfConponent_o *)(v41 + 128),
      LinkageTargetIndividualty,
      v180,
      v181,
      v182,
      v183,
      v184,
      v185);
  }
  this = (BattleLogicFunction_o *)funcTargeta->fields._funcUnit_k__BackingField;
  if ( !this )
    goto LABEL_309;
  if ( BattleLogicFunctionProcess_FunctionUnitCheck__HasLinkedFuncUnit(
         (BattleLogicFunctionProcess_FunctionUnitCheck_o *)this,
         0LL)
    && DataVals__IsBehaveAsFamilyBuff(dataVals_k__BackingField, 0LL) )
  {
    BattleLogicFunction__BehaveLinkageBuffAsFamily(v9, (BattleBuffData_BuffData_o *)v41, funcTargeta, v186);
  }
  if ( DataVals__isParam(dataVals_k__BackingField, 98, 0LL) )
    BattleBuffData_BuffData__onState((BattleBuffData_BuffData_o *)v41, 0x800000, 0LL);
  if ( DataVals__isParam(dataVals_k__BackingField, 99, 0LL) )
    BattleBuffData_BuffData__onState((BattleBuffData_BuffData_o *)v41, 0x1000000, 0LL);
  if ( BuffEntity__getAppearanceId(v36, 0LL) >= 1 )
  {
    this = (BattleLogicFunction_o *)BattleServantData__isShiftableServant(ServantData, 0LL);
    if ( ((unsigned __int8)this & 1) != 0 )
      goto LABEL_204;
    v187 = v9->fields.data;
    if ( !v187 )
      goto LABEL_309;
    this = (BattleLogicFunction_o *)v187->fields.battleEvent;
    if ( !this )
      goto LABEL_309;
    if ( ((*(__int64 (__fastcall **)(BattleLogicFunction_o *, BattleServantData_o *, _QWORD))&this->klass[1]._2.element_size)(
            this,
            ServantData,
            *(_QWORD *)&this->klass[1]._2.static_fields_size) & 1) != 0
      || BattleServantData__isLogicResultAlive(ServantData, 0LL)
      || BattleServantData__isGuts(ServantData, 0LL) )
    {
LABEL_204:
      BattleBuffData_BuffData__onState((BattleBuffData_BuffData_o *)v41, 256, 0LL);
    }
  }
  *(_DWORD *)(v41 + 276) = DataVals__GetParam(dataVals_k__BackingField, 92, 0, 0LL);
  *(_DWORD *)(v41 + 280) = DataVals__GetParam(dataVals_k__BackingField, 93, 0, 0LL);
  *(_DWORD *)(v41 + 284) = DataVals__GetParam(dataVals_k__BackingField, 94, 0, 0LL);
  *(_BYTE *)(v41 + 288) = DataVals__GetParam(dataVals_k__BackingField, 95, 0, 0LL) == 1;
  *(_BYTE *)(v41 + 289) = DataVals__GetParam(dataVals_k__BackingField, 96, 0, 0LL) == 1;
  ValsList = (System_Int32_array **)DataVals__GetValsList(dataVals_k__BackingField, 101, 0LL);
  *(_QWORD *)(v41 + 304) = ValsList;
  sub_B2C2F8((BattleServantConfConponent_o *)(v41 + 304), ValsList, v189, v190, v191, v192, v193, v194);
  v195 = DataVals__GetParam(dataVals_k__BackingField, 5, 0, 0LL);
  v196 = *(_DWORD *)(v41 + 60);
  if ( v195 )
    v197 = v195;
  else
    v197 = 1000;
  *(_DWORD *)(v41 + 48) = v197;
  if ( v196 < 1 )
    goto LABEL_215;
  v198 = (UnityEngine_Object_o *)v9->fields.logic;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( UnityEngine_Object__op_Inequality(v198, 0LL, 0LL) )
  {
    this = (BattleLogicFunction_o *)v9->fields.logic;
    if ( !this )
      goto LABEL_309;
    v199 = BattleLogic__checkInField((BattleLogic_o *)this, *(_DWORD *)(v41 + 60), 0LL);
  }
  else
  {
LABEL_215:
    v199 = 1;
  }
  v200 = v36->fields.type;
  if ( (BYTE3(BuffList_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !BuffList_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(BuffList_TypeInfo);
  if ( BuffList__CheckAccumulation(v200, 0LL) )
    BattleServantData__resetAccumulationDamage(ServantData, 0LL);
  mainAction = userCommandCodeId;
  v201 = treasureDvcId;
  *(_QWORD *)(v41 + 88) = userCommandCodeId;
  if ( (__int64)userCommandCodeId >= 1 )
  {
    this = (BattleLogicFunction_o *)v9->fields.data;
    if ( !this )
      goto LABEL_309;
    UserCommandCode = BattleData__getUserCommandCode((BattleData_o *)this, (int64_t)userCommandCodeId, 0LL);
    if ( UserCommandCode )
      *(_DWORD *)(v41 + 160) = UserCommandCode->fields.commandCodeId;
  }
  *(_DWORD *)(v41 + 348) = v273->fields.commandAssistId;
  *(_DWORD *)(v41 + 352) = v273->fields.cardIndex;
  ((void (__fastcall *)(BattleLogicFunctionProcess_FunctionTargetCheck_o *, __int64, Il2CppMethodPointer))funcTargeta->klass->vtable._6_ApplyPrevSaveBuffData.method)(
    funcTargeta,
    v41,
    funcTargeta->klass->vtable._7_MakeActionBuffData.methodPtr);
  MaxHp = BattleServantData__getMaxHp(ServantData, 0LL);
  userCommandCodeIda = ((__int64 (__fastcall *)(BattleServantData_o *, Il2CppMethodPointer))ServantData->klass->vtable._9_get_hp.method)(
                         ServantData,
                         ServantData->klass->vtable._10_set_hp.methodPtr);
  if ( !v199 )
    goto LABEL_232;
  v204 = v36->fields.type;
  if ( (BYTE3(BuffList_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !BuffList_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(BuffList_TypeInfo);
  v205 = BuffList__CheckUpdateHp(v204, 0LL);
  v201 = treasureDvcId;
  if ( v205 )
  {
    v280->fields.procType = 2;
    if ( BattleServantData__isLogicResultAlive(ServantData, 0LL) )
    {
      v206 = 1LL;
    }
    else
    {
      if ( BattleServantData__isGuts(ServantData, 0LL) )
      {
        v207 = ServantData->fields.uniqueId;
        IsCommandSideEffect = BattleLogicFunction_ProcListInArgs__get_IsCommandSideEffect(args, 0LL);
        mainAction = BattleLogicFunction__getNoEffectObject(
                       v9,
                       v207,
                       funcIndex,
                       dataVals_k__BackingField,
                       IsCommandSideEffect,
                       0LL,
                       0LL,
                       v209);
        this = (BattleLogicFunction_o *)v274;
        if ( !v274 )
          goto LABEL_309;
        BattleActionData__addAction(v274, mainAction, 0LL);
      }
      v206 = 0LL;
    }
    ((void (__fastcall *)(BattleLogicFunctionProcess_FunctionTargetCheck_o *, BattleActionData_BuffData_o *, __int64, __int64, __int64, Il2CppMethodPointer))funcTargeta->klass->vtable._8_AddBuff.method)(
      funcTargeta,
      v280,
      v41,
      1LL,
      v206,
      funcTargeta->klass->vtable._9_MakeWrapTarget.methodPtr);
    this = (BattleLogicFunction_o *)v274;
    if ( !v274 )
      goto LABEL_309;
    BattleActionData__addReflectLogicResultServantId(v274, uniqueId, 0LL);
    v210 = (BattleActionEffect_AddChangeMaxHpBuff_o *)sub_B2C42C(BattleActionEffect_AddChangeMaxHpBuff_TypeInfo);
    BattleActionEffect_AddChangeMaxHpBuff___ctor(v210, 0LL);
    this = (BattleLogicFunction_o *)sub_B2C374(BattleBuffData_BuffData___TypeInfo, 1LL);
    if ( !this )
      goto LABEL_309;
    v211 = this;
    this = (BattleLogicFunction_o *)sub_B2C41C(v41, this->klass->_1.element_class);
    if ( !this )
    {
      v269 = sub_B2C454(0LL);
      sub_B2C400(v269, 0LL);
    }
    if ( !LODWORD(v211->fields.logic) )
      goto LABEL_310;
    v211->fields.logictarget = (struct BattleLogicTarget_o *)v41;
    sub_B2C2F8(
      (BattleServantConfConponent_o *)&v211->fields.logictarget,
      (System_Int32_array **)v41,
      v212,
      v213,
      v214,
      v215,
      v216,
      v217);
    this = (BattleLogicFunction_o *)BattleServantData__getNowHp(ServantData, 0LL);
    if ( !v210 )
      goto LABEL_309;
    v218 = (System_Int32_array **)((__int64 (__fastcall *)(BattleActionEffect_AddChangeMaxHpBuff_o *, BattleLogicFunction_o *, _QWORD, _QWORD, Il2CppMethodPointer))v210->klass->vtable._7_InitBuff.method)(
                                    v210,
                                    v211,
                                    uniqueId,
                                    (unsigned int)((_DWORD)this - userCommandCodeIda),
                                    v210->klass->vtable._8_PartialPreActionProc.methodPtr);
    v280->fields.EffectProc = (struct BattleActionEffect_Base_o *)v218;
    sub_B2C2F8((BattleServantConfConponent_o *)&v280->fields.EffectProc, v218, v219, v220, v221, v222, v223, v224);
    v91 = v273;
  }
  else
  {
LABEL_232:
    ((void (__fastcall *)(BattleLogicFunctionProcess_FunctionTargetCheck_o *, BattleActionData_BuffData_o *, __int64, bool, _QWORD, Il2CppMethodPointer))funcTargeta->klass->vtable._8_AddBuff.method)(
      funcTargeta,
      v280,
      v41,
      v199,
      0LL,
      funcTargeta->klass->vtable._9_MakeWrapTarget.methodPtr);
  }
  id = v36->fields.id;
  if ( id == ConstantMaster__getValue((System_String_o *)StringLiteral_13334/*"TAMAMOCAT_STUN_BUFF_ID"*/, 0LL) )
  {
    v226 = (System_Collections_Generic_List_int__o *)sub_B2C42C(System_Collections_Generic_List_int__TypeInfo);
    System_Collections_Generic_List_int____ctor(
      v226,
      (const MethodInfo_2F6629C *)Method_System_Collections_Generic_List_int___ctor__);
    v283 = 1;
    for ( i = System_Int32__ToString((int32_t)&v283, 0LL); ; i = System_Int32__ToString((int32_t)&v283, 0LL) )
    {
      v230 = System_String__Concat_44305532((System_String_o *)StringLiteral_13335/*"TAMAMOCAT_TREASURE_DEVICE_ID_"*/, i, 0LL);
      if ( ConstantMaster__getValue(v230, 0LL) == -1 )
        break;
      v228 = System_Int32__ToString((int32_t)&v283, 0LL);
      v229 = System_String__Concat_44305532((System_String_o *)StringLiteral_13335/*"TAMAMOCAT_TREASURE_DEVICE_ID_"*/, v228, 0LL);
      this = (BattleLogicFunction_o *)ConstantMaster__getValue(v229, 0LL);
      if ( (_DWORD)this == v201 )
      {
        if ( !v39 )
          goto LABEL_309;
        BattleServantData__SetIsSleepWaitMode(v39, 1, 0LL);
      }
      ++v283;
    }
  }
  this = (BattleLogicFunction_o *)v9->fields.data;
  if ( !this )
    goto LABEL_309;
  QuestIndividualities = BattleData__getQuestIndividualities((BattleData_o *)this, 0LL);
  v232 = (UnityEngine_Object_o *)v9->fields.logic;
  v233 = QuestIndividualities;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  this = (BattleLogicFunction_o *)UnityEngine_Object__op_Inequality(v232, 0LL, 0LL);
  perf = 0LL;
  if ( ((unsigned __int8)this & 1) != 0 )
  {
    v235 = v9->fields.logic;
    if ( !v235 )
      goto LABEL_309;
    perf = v235->fields.perf;
  }
  BattleServantData__updateConditionsBuff(ServantData, v233, perf, 0LL);
  if ( BuffEntity__checkBuffType(v36, 133, 0LL) || *(_QWORD *)(v41 + 312) )
  {
    v236 = (UnityEngine_Object_o *)v9->fields.logic;
    if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    }
    if ( UnityEngine_Object__op_Inequality(v236, 0LL, 0LL) )
    {
      this = (BattleLogicFunction_o *)v9->fields.logic;
      if ( !this )
        goto LABEL_309;
      BattleLogic__updateConditionsBuffAll((BattleLogic_o *)this, 0LL);
    }
    this = (BattleLogicFunction_o *)v9->fields.data;
    if ( !this )
      goto LABEL_309;
    this = (BattleLogicFunction_o *)BattleData__getFieldServantList((BattleData_o *)this, 0, 0LL);
    if ( !this )
      goto LABEL_309;
    v237 = (int)this->fields.logic;
    v238 = this;
    if ( v237 >= 1 )
    {
      v239 = 0;
      while ( v239 < v237 )
      {
        this = (BattleLogicFunction_o *)*((_QWORD *)&v238->fields.logictarget + (int)v239);
        if ( !this )
          goto LABEL_309;
        BattleServantData__updateBuff((BattleServantData_o *)this, 1, 1, 0LL);
        v237 = (int)v238->fields.logic;
        if ( (int)++v239 >= v237 )
          goto LABEL_272;
      }
LABEL_310:
      v268 = sub_B2C460(this);
      sub_B2C400(v268, 0LL);
    }
  }
LABEL_272:
  this = (BattleLogicFunction_o *)BattleServantData__getMaxHp(ServantData, 0LL);
  if ( (int)this < MaxHp )
  {
    this = (BattleLogicFunction_o *)BuffEntity__checkBuffType(v36, 41, 0LL);
    if ( ((unsigned __int8)this & 1) != 0 )
    {
      v240 = ServantData->fields.maxhp;
      if ( (BYTE3(System_Math_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !System_Math_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(System_Math_TypeInfo);
      }
      this = (BattleLogicFunction_o *)System_Math__Max_45012344(0, userCommandCodeIda - v240, 0LL);
      *(_DWORD *)(v41 + 136) = (_DWORD)this;
    }
  }
  v241 = v9->fields.data;
  if ( !v241 )
    goto LABEL_309;
  this = (BattleLogicFunction_o *)v241->fields.battleEvent;
  if ( !this )
    goto LABEL_309;
  *(_BYTE *)(v41 + 212) = (*(__int64 (__fastcall **)(BattleLogicFunction_o *, __int64, BuffEntity_o *, DataVals_o *, _QWORD))&this->klass[1]._2.field_count)(
                            this,
                            v41,
                            v36,
                            dataVals_k__BackingField,
                            *(_QWORD *)&this->klass[1]._2.interfaces_count) & 1;
  if ( BuffEntity__checkBuffType(v36, 140, 0LL) )
  {
    buffData = ServantData->fields.buffData;
    v243 = (BattleBuffData_CheckIndividualitiesData_o *)sub_B2C42C(BattleBuffData_CheckIndividualitiesData_TypeInfo);
    BattleBuffData_CheckIndividualitiesData___ctor(v243, ServantData, 0LL, 0LL, 0LL, 0LL, 0LL);
    if ( !buffData )
      goto LABEL_309;
    this = (BattleLogicFunction_o *)BattleBuffData__getBuffList_30942396(buffData, 83, v243, 1, 0, 0LL, 0LL);
    if ( !this )
      goto LABEL_309;
    if ( this->fields.logic )
      BattleLogicFunction__functionResetCommandCard(v9, (int32_t)mainAction, v244, v245, v246, v247);
  }
  if ( DataVals__IsOnParty(dataVals_k__BackingField, 0LL) )
    *(_DWORD *)(v41 + 272) = v276;
  v248 = BattleLogicFunction_ProcListInArgs__get_IsCommandSideEffect(args, 0LL);
  v249 = (BattleActionData_BuffData_o *)((__int64 (__fastcall *)(BattleLogicFunctionProcess_FunctionTargetCheck_o *, BattleActionData_BuffData_o *, __int64, struct FunctionEntity_o *, bool, Il2CppMethodPointer))funcTargeta->klass->vtable._10_MakeAddActionBuffData.method)(
                                          funcTargeta,
                                          v280,
                                          v41,
                                          funcEnt,
                                          v248,
                                          funcTargeta->klass->vtable._11_GetConvertBuffEntity.methodPtr);
  if ( BuffEntity__checkBuffType(v36, 142, 0LL) )
  {
    v250 = (UnityEngine_Object_o *)v9->fields.logic;
    if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    }
    this = (BattleLogicFunction_o *)UnityEngine_Object__op_Inequality(v250, 0LL, 0LL);
    if ( ((unsigned __int8)this & 1) != 0 )
    {
      v257 = v9->fields.logic;
      if ( !v257 )
        goto LABEL_309;
      if ( !v249 )
        goto LABEL_309;
      this = (BattleLogicFunction_o *)v257->fields.perf;
      if ( !this )
        goto LABEL_309;
      BattlePerformance__SetMasterBuffEffectData(
        (BattlePerformance_o *)this,
        v249->fields.popLabel,
        v249->fields.popColor,
        v249->fields.effectList,
        0LL);
    }
    else if ( !v249 )
    {
      goto LABEL_309;
    }
    v258 = (System_Int32_array **)StringLiteral_1/*""*/;
    v249->fields.popLabel = (struct System_String_o *)StringLiteral_1/*""*/;
    sub_B2C2F8((BattleServantConfConponent_o *)&v249->fields.popLabel, v258, v251, v252, v253, v254, v255, v256);
    v249->fields.popIcon = 0;
    v259 = (System_Int32_array **)sub_B2C374(int___TypeInfo, 0LL);
    v249->fields.effectList = (struct System_Int32_array *)v259;
    sub_B2C2F8((BattleServantConfConponent_o *)&v249->fields.effectList, v259, v260, v261, v262, v263, v264, v265);
    v249->fields.isBuffEffectTargetMaster = 1;
  }
  if ( DataVals__IsProgressTurnOnBoard(dataVals_k__BackingField, 0LL) )
    *(_BYTE *)(v41 + 368) = 1;
  BattleLogicFunction__AfterAddedBuffProcess(v9, ServantData, v36, v266);
  if ( BuffEntity__getDamageRelease(v36, 0LL) >= 1
    && !BattleServantData__isLogicResultAlive(ServantData, 0LL)
    && (this = (BattleLogicFunction_o *)BattleServantData__isGuts(ServantData, 0LL), ((unsigned __int8)this & 1) != 0)
    || (this = (BattleLogicFunction_o *)BuffEntity__getDamageRelease(v36, 0LL), (_DWORD)this == -1) )
  {
    ServantData->fields.isGutsSleepRelease = 0;
  }
  if ( !v274
    || (BattleActionData__setBuffData(v274, v249, dataVals_k__BackingField, 0LL),
        (this = (BattleLogicFunction_o *)v9->fields.data) == 0LL) )
  {
LABEL_309:
    sub_B2C434(this, mainAction);
  }
  BattleData__AddFreshBuffList((BattleData_o *)this, v249, 0LL);
  BattleActionData__addAction(v91, v274, 0LL);
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
  System_Int32_array **v21; // x0
  System_String_array **v22; // x2
  System_String_array **v23; // x3
  System_Boolean_array **v24; // x4
  System_Int32_array **v25; // x5
  System_Int32_array *v26; // x6
  System_Int32_array *v27; // x7
  int32_t v28; // w26
  int32_t v29; // w27
  FunctionEntity_o *funcEnt; // x28
  _BOOL8 v31; // x0
  const MethodInfo *v32; // x6
  BattleActionData_ShiftServant_o *v33; // x19
  SimpleHpData_o *v34; // x19
  EnemySimpleHpData_o *v35; // x27
  unsigned int Value; // w0
  int v37; // w0
  int v38; // w24
  int v39; // w22
  int32_t v40; // w25
  int32_t Param; // w0
  SimpleHpData_o *v42; // x26
  unsigned int CurrentShiftPos; // w28
  unsigned int MaxShiftIconPos; // w0
  int v45; // [xsp+Ch] [xbp-74h]
  BattleActionData_ShiftServant_o *v46; // [xsp+10h] [xbp-70h]
  BattleActionData_o *v47; // [xsp+18h] [xbp-68h]
  BattleActionData_o *v48; // [xsp+20h] [xbp-60h]
  BattleLogicFunction_o *v49; // [xsp+28h] [xbp-58h]

  v49 = this;
  if ( (byte_418A7AB & 1) == 0 )
  {
    sub_B2C35C(&BattleActionData_TypeInfo, mainAction);
    sub_B2C35C(&EnemySimpleHpData_TypeInfo, v10);
    sub_B2C35C(&System_Math_TypeInfo, v11);
    sub_B2C35C(&BattleActionData_ShiftServant_TypeInfo, v12);
    this = (BattleLogicFunction_o *)sub_B2C35C(&SimpleHpData_TypeInfo, v13);
    byte_418A7AB = 1;
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
                                          v49,
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
    goto LABEL_33;
  }
  v20 = sub_B2C42C(BattleActionData_TypeInfo);
  BattleActionData___ctor((BattleActionData_o *)v20, 0LL);
  if ( !v20 )
    goto LABEL_33;
  *(_DWORD *)(v20 + 32) = targetSvtData->fields.uniqueId;
  *(_DWORD *)(v20 + 36) = targetSvtData->fields.uniqueId;
  v21 = (System_Int32_array **)((__int64 (__fastcall *)(BattleActionData_BaseShiftGaugeData_o *, Il2CppMethodPointer))shiftGauge->klass->vtable._7_unknown.method)(
                                 shiftGauge,
                                 shiftGauge->klass->vtable._8_unknown.methodPtr);
  *(_QWORD *)(v20 + 64) = v21;
  sub_B2C2F8((BattleServantConfConponent_o *)(v20 + 64), v21, v22, v23, v24, v25, v26, v27);
  if ( !dataVals_k__BackingField )
    goto LABEL_33;
  if ( !procArg_k__BackingField )
    goto LABEL_33;
  v28 = dataVals_k__BackingField->fields.funcIndex;
  v29 = targetSvtData->fields.uniqueId;
  funcEnt = dataVals_k__BackingField->fields.funcEnt;
  v31 = BattleLogicFunction_ProcListInArgs__get_IsCommandSideEffect(procArg_k__BackingField, 0LL);
  this = (BattleLogicFunction_o *)BattleLogicFunction__getFunctionObject(
                                    (BattleLogicFunction_o *)v31,
                                    funcEnt,
                                    v29,
                                    v28,
                                    v31,
                                    0LL,
                                    v32);
  if ( !this )
    goto LABEL_33;
  v47 = (BattleActionData_o *)v20;
  v48 = mainAction;
  BYTE6(this[1].fields.logictarget) = 0;
  BattleActionData__setBuffData((BattleActionData_o *)v20, (BattleActionData_BuffData_o *)this, 0LL, 0LL);
  v33 = (BattleActionData_ShiftServant_o *)sub_B2C42C(BattleActionData_ShiftServant_TypeInfo);
  BattleActionData_ShiftServant___ctor(v33, 0LL);
  if ( !v33 )
    goto LABEL_33;
  v46 = v33;
  BattleActionData_ShiftServant__setBeforeSvtData(v33, targetSvtData, 0LL);
  v34 = (SimpleHpData_o *)sub_B2C42C(SimpleHpData_TypeInfo);
  SimpleHpData___ctor(v34, targetSvtData, 0LL);
  v35 = (EnemySimpleHpData_o *)sub_B2C42C(EnemySimpleHpData_TypeInfo);
  EnemySimpleHpData___ctor(v35, targetSvtData, 0LL);
  ((void (__fastcall *)(BattleActionData_BaseShiftGaugeData_o *, BattleServantData_o *, Il2CppMethodPointer))shiftGauge->klass->vtable._12_Init.method)(
    shiftGauge,
    targetSvtData,
    shiftGauge->klass->vtable._13_InitShiftHpPos.methodPtr);
  Value = DataVals__GetValue(dataVals_k__BackingField, 0LL);
  v37 = ((__int64 (__fastcall *)(BattleActionData_BaseShiftGaugeData_o *, BattleServantData_o *, _QWORD, Il2CppMethodPointer))shiftGauge->klass->vtable._9_unknown.method)(
          shiftGauge,
          targetSvtData,
          Value,
          shiftGauge->klass->vtable._10_unknown.methodPtr);
  v38 = 1;
  v45 = v37;
  if ( v37 >= 0 )
    v39 = v37;
  else
    v39 = -v37;
  if ( v37 > 0 )
    v40 = 1;
  else
    v40 = -1;
  while ( 1 )
  {
    if ( (BYTE3(System_Math_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !System_Math_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(System_Math_TypeInfo);
    if ( v38 > v39 )
      break;
    BattleServantData__SetShiftServantChange(targetSvtData, v49->fields.data, v35, v40, 0LL);
    Param = DataVals__GetParam(dataVals_k__BackingField, 58, 0, 0LL);
    ((void (__fastcall *)(BattleActionData_BaseShiftGaugeData_o *, BattleServantData_o *, bool, Il2CppMethodPointer))shiftGauge->klass->vtable._10_unknown.method)(
      shiftGauge,
      targetSvtData,
      Param > 0,
      shiftGauge->klass->vtable._11_unknown.methodPtr);
    v42 = (SimpleHpData_o *)sub_B2C42C(SimpleHpData_TypeInfo);
    SimpleHpData___ctor(v42, targetSvtData, 0LL);
    CurrentShiftPos = BattleServantData__GetCurrentShiftPos(targetSvtData, 0LL);
    MaxShiftIconPos = BattleServantData__GetMaxShiftIconPos(targetSvtData, 0LL);
    ((void (__fastcall *)(BattleActionData_BaseShiftGaugeData_o *, _QWORD, _QWORD, SimpleHpData_o *, SimpleHpData_o *, Il2CppMethodPointer))shiftGauge->klass->vtable._11_unknown.method)(
      shiftGauge,
      CurrentShiftPos,
      MaxShiftIconPos,
      v34,
      v42,
      shiftGauge->klass->vtable._12_Init.methodPtr);
    ++v38;
    v34 = v42;
  }
  if ( v45 )
  {
    this = (BattleLogicFunction_o *)v49->fields.logic;
    if ( !this )
      goto LABEL_33;
    BattleLogic__actEnemyPtPassiveSkill((BattleLogic_o *)this, targetSvtData->fields.uniqueId, 1, 0, 0LL);
  }
  BattleActionData_ShiftServant__setCheckSvtData(v46, targetSvtData, 0LL);
  BattleActionData__setShiftServant(v47, v46, 0LL);
  BattleActionData__SetShiftGauge(v47, shiftGauge, 0LL);
  if ( !v48 )
LABEL_33:
    sub_B2C434(this, mainAction);
  BattleActionData__AddAfterActionData(v48, v47, 0, 0LL);
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
  System_String_array **v26; // x2
  System_String_array **v27; // x3
  System_Boolean_array **v28; // x4
  System_Int32_array **v29; // x5
  System_Int32_array *v30; // x6
  System_Int32_array *v31; // x7
  System_String_array *v32; // x22
  System_Int32_array **v33; // x1
  BattleActionData_o *v34; // x21
  System_String_array **v35; // x2
  System_String_array **v36; // x3
  System_Boolean_array **v37; // x4
  System_Int32_array **v38; // x5
  System_Int32_array *v39; // x6
  System_Int32_array *v40; // x7
  System_Int32_array **v41; // x23
  System_String_array **v42; // x2
  System_String_array **v43; // x3
  System_Boolean_array **v44; // x4
  System_Int32_array **v45; // x5
  System_Int32_array *v46; // x6
  System_Int32_array *v47; // x7
  System_Int32_array **v48; // x1
  System_String_array **v49; // x2
  System_String_array **v50; // x3
  System_Boolean_array **v51; // x4
  System_Int32_array **v52; // x5
  System_Int32_array *v53; // x6
  System_Int32_array *v54; // x7
  System_Int32_array **v55; // x23
  System_String_array **v56; // x2
  System_String_array **v57; // x3
  System_Boolean_array **v58; // x4
  System_Int32_array **v59; // x5
  System_Int32_array *v60; // x6
  System_Int32_array *v61; // x7
  System_Int32_array **v62; // x1
  System_String_array **v63; // x2
  System_String_array **v64; // x3
  System_Boolean_array **v65; // x4
  System_Int32_array **v66; // x5
  System_Int32_array *v67; // x6
  System_Int32_array *v68; // x7
  System_Int32_array **v69; // x23
  System_String_array **v70; // x2
  System_String_array **v71; // x3
  System_Boolean_array **v72; // x4
  System_Int32_array **v73; // x5
  System_Int32_array *v74; // x6
  System_Int32_array *v75; // x7
  System_Int32_array **v76; // x1
  struct BattleData_o *v77; // x8
  struct System_Int32_array *e_entryid; // x8
  char *v79; // x8
  _DWORD *v80; // x8
  int32_t v81; // w22
  int32_t v82; // t1
  BattleServantData_o *v83; // x23
  int32_t uniqueId; // w23
  bool isEffectSummon; // w24
  __int64 v87; // x0
  __int64 v88; // x0
  int32_t Value; // [xsp+4h] [xbp-4Ch] BYREF
  __int64 v90; // [xsp+8h] [xbp-48h] BYREF
  int32_t targetIndex[2]; // [xsp+18h] [xbp-38h] BYREF

  if ( (byte_418A79C & 1) == 0 )
  {
    sub_B2C35C(&BattleActionData_TypeInfo, *(_QWORD *)&playerId);
    sub_B2C35C(&string___TypeInfo, v12);
    sub_B2C35C(&StringLiteral_16626/*"baseVals.GetValue:"*/, v13);
    sub_B2C35C(&StringLiteral_15875/*"] Index["*/, v14);
    sub_B2C35C(&StringLiteral_281/*" 召喚！NPC["*/, v15);
    sub_B2C35C(&StringLiteral_15876/*"] UniqueID["*/, v16);
    sub_B2C35C(&StringLiteral_18931/*"functionCallServant>"*/, v17);
    sub_B2C35C(&StringLiteral_15870/*"]"*/, v18);
    byte_418A79C = 1;
  }
  *(_QWORD *)targetIndex = 0LL;
  v90 = 0LL;
  Value = 0;
  data = (__int64)this->fields.data;
  if ( !data )
    goto LABEL_55;
  data = (__int64)BattleData__getServantData((BattleData_o *)data, playerId, 0LL);
  targetIndex[1] = -1;
  if ( !baseVals )
    goto LABEL_55;
  v20 = this->fields.data;
  v21 = (BattleServantData_o *)data;
  data = DataVals__isCheckEnemyFieldSpace(baseVals, 0LL);
  if ( !v20 )
    goto LABEL_55;
  FieldSpace = (BattleLogicFunction_o *)BattleData__getFieldSpace(v20, playerId, &targetIndex[1], data & 1, 0LL);
  if ( (_DWORD)FieldSpace )
  {
    Value = DataVals__GetValue(baseVals, 0LL);
    v24 = System_Int32__ToString((int32_t)&Value, 0LL);
    System_String__Concat_44305532((System_String_o *)StringLiteral_16626/*"baseVals.GetValue:"*/, v24, 0LL);
    targetIndex[0] = -1;
    if ( playerId == -1 )
    {
      v25 = this->fields.data;
      data = DataVals__GetValue(baseVals, 0LL);
      if ( !v25 )
        goto LABEL_55;
      FieldSpace = (BattleLogicFunction_o *)BattleData__GetEnemySummonId(v25, data, 0LL);
    }
    else
    {
      data = DataVals__GetValue(baseVals, 0LL);
      if ( !v21 )
        goto LABEL_55;
      FieldSpace = (BattleLogicFunction_o *)BattleServantData__getSummonNpcId(v21, data, 0LL);
    }
    targetIndex[0] = (int)FieldSpace;
    if ( (_DWORD)FieldSpace != -1 )
    {
      data = (__int64)this->fields.data;
      if ( !data )
        goto LABEL_55;
      HIDWORD(v90) = BattleData__getNextUniqueID((BattleData_o *)data, 0LL);
      data = (__int64)this->fields.data;
      if ( !data )
        goto LABEL_55;
      LODWORD(v90) = BattleData__getNextNextIndex((BattleData_o *)data, 0LL);
      data = sub_B2C374(string___TypeInfo, 7LL);
      if ( !data )
        goto LABEL_55;
      v32 = (System_String_array *)data;
      data = StringLiteral_281/*" 召喚！NPC["*/;
      if ( StringLiteral_281/*" 召喚！NPC["*/ )
      {
        data = sub_B2C41C(StringLiteral_281/*" 召喚！NPC["*/, v32->obj.klass->_1.element_class);
        if ( !data )
          goto LABEL_57;
        v33 = (System_Int32_array **)StringLiteral_281/*" 召喚！NPC["*/;
      }
      else
      {
        v33 = 0LL;
      }
      if ( !v32->max_length )
        goto LABEL_56;
      v32->m_Items[0] = (System_String_o *)v33;
      sub_B2C2F8((BattleServantConfConponent_o *)v32->m_Items, v33, v26, v27, v28, v29, v30, v31);
      data = (__int64)System_Int32__ToString((int32_t)targetIndex, 0LL);
      v41 = (System_Int32_array **)data;
      if ( !data || (data = sub_B2C41C(data, v32->obj.klass->_1.element_class)) != 0 )
      {
        if ( v32->max_length <= 1 )
          goto LABEL_56;
        v32->m_Items[1] = (System_String_o *)v41;
        sub_B2C2F8((BattleServantConfConponent_o *)&v32->m_Items[1], v41, v35, v36, v37, v38, v39, v40);
        data = StringLiteral_15876/*"] UniqueID["*/;
        if ( StringLiteral_15876/*"] UniqueID["*/ )
        {
          data = sub_B2C41C(StringLiteral_15876/*"] UniqueID["*/, v32->obj.klass->_1.element_class);
          if ( !data )
            goto LABEL_57;
          v48 = (System_Int32_array **)StringLiteral_15876/*"] UniqueID["*/;
        }
        else
        {
          v48 = 0LL;
        }
        if ( v32->max_length <= 2 )
          goto LABEL_56;
        v32->m_Items[2] = (System_String_o *)v48;
        sub_B2C2F8((BattleServantConfConponent_o *)&v32->m_Items[2], v48, v42, v43, v44, v45, v46, v47);
        data = (__int64)System_Int32__ToString((int32_t)&v90 + 4, 0LL);
        v55 = (System_Int32_array **)data;
        if ( !data || (data = sub_B2C41C(data, v32->obj.klass->_1.element_class)) != 0 )
        {
          if ( v32->max_length <= 3 )
            goto LABEL_56;
          v32->m_Items[3] = (System_String_o *)v55;
          sub_B2C2F8((BattleServantConfConponent_o *)&v32->m_Items[3], v55, v49, v50, v51, v52, v53, v54);
          data = StringLiteral_15875/*"] Index["*/;
          if ( StringLiteral_15875/*"] Index["*/ )
          {
            data = sub_B2C41C(StringLiteral_15875/*"] Index["*/, v32->obj.klass->_1.element_class);
            if ( !data )
              goto LABEL_57;
            v62 = (System_Int32_array **)StringLiteral_15875/*"] Index["*/;
          }
          else
          {
            v62 = 0LL;
          }
          if ( v32->max_length <= 4 )
            goto LABEL_56;
          v32->m_Items[4] = (System_String_o *)v62;
          sub_B2C2F8((BattleServantConfConponent_o *)&v32->m_Items[4], v62, v56, v57, v58, v59, v60, v61);
          data = (__int64)System_Int32__ToString((int32_t)&v90, 0LL);
          v69 = (System_Int32_array **)data;
          if ( !data || (data = sub_B2C41C(data, v32->obj.klass->_1.element_class)) != 0 )
          {
            if ( v32->max_length <= 5 )
              goto LABEL_56;
            v32->m_Items[5] = (System_String_o *)v69;
            sub_B2C2F8((BattleServantConfConponent_o *)&v32->m_Items[5], v69, v63, v64, v65, v66, v67, v68);
            data = StringLiteral_15870/*"]"*/;
            if ( !StringLiteral_15870/*"]"*/ )
            {
              v76 = 0LL;
              goto LABEL_45;
            }
            data = sub_B2C41C(StringLiteral_15870/*"]"*/, v32->obj.klass->_1.element_class);
            if ( data )
            {
              v76 = (System_Int32_array **)StringLiteral_15870/*"]"*/;
LABEL_45:
              if ( v32->max_length > 6 )
              {
                v32->m_Items[6] = (System_String_o *)v76;
                sub_B2C2F8((BattleServantConfConponent_o *)&v32->m_Items[6], v76, v70, v71, v72, v73, v74, v75);
                System_String__Concat_44385656(v32, 0LL);
                data = (__int64)this->fields.data;
                if ( !data )
                  goto LABEL_55;
                data = (__int64)BattleData__createSummonEnemyServantData(
                                  (BattleData_o *)data,
                                  SHIDWORD(v90),
                                  v90,
                                  targetIndex[0],
                                  0LL,
                                  0LL,
                                  0LL);
                v77 = this->fields.data;
                if ( !v77 )
                  goto LABEL_55;
                e_entryid = v77->fields.e_entryid;
                if ( !e_entryid )
                  goto LABEL_55;
                if ( targetIndex[1] < e_entryid->max_length )
                {
                  v79 = (char *)e_entryid + 4 * targetIndex[1];
                  v82 = *((_DWORD *)v79 + 8);
                  v80 = v79 + 32;
                  v81 = v82;
                  v83 = (BattleServantData_o *)data;
                  if ( data )
                  {
                    *v80 = *(_DWORD *)(data + 24);
                    *(_BYTE *)(data + 452) = 1;
                    *(_BYTE *)(data + 517) = 1;
                    BattleServantData__SetRemainActionCount((BattleServantData_o *)data, 1, 0LL);
                    data = (__int64)this->fields.logic;
                    if ( data )
                    {
                      BattleLogic__addEnemyActPriorityList((BattleLogic_o *)data, v83, 0LL);
                      v34 = (BattleActionData_o *)sub_B2C42C(BattleActionData_TypeInfo);
                      BattleActionData___ctor(v34, 0LL);
                      uniqueId = v83->fields.uniqueId;
                      isEffectSummon = DataVals__isEffectSummon(baseVals, 0LL);
                      data = DataVals__GetCallSvtEffectId(baseVals, 0LL);
                      if ( v34 )
                      {
                        BattleActionData__setSummonServant(v34, uniqueId, v81, funcIndex, isEffectSummon, data, 0LL);
                        return v34;
                      }
                    }
                  }
LABEL_55:
                  sub_B2C434(data, *(_QWORD *)&playerId);
                }
              }
LABEL_56:
              v87 = sub_B2C460(data);
              sub_B2C400(v87, 0LL);
            }
          }
        }
      }
LABEL_57:
      v88 = sub_B2C454(data);
      sub_B2C400(v88, 0LL);
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
           v23);
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
  int32_t v13; // w0

  if ( (byte_418A79F & 1) == 0 )
  {
    sub_B2C35C(&BattleActionData_TypeInfo, *(_QWORD *)&actionId);
    byte_418A79F = 1;
  }
  v8 = (BattleActionData_o *)sub_B2C42C(BattleActionData_TypeInfo);
  BattleActionData___ctor(v8, 0LL);
  if ( !v8 || (v8->fields.actorId = actionId, !baseVals) )
    sub_B2C434(v9, v10);
  Value = DataVals__GetValue(baseVals, 0LL);
  Param = DataVals__GetParam(baseVals, 4, 0, 0LL);
  v13 = DataVals__GetParam(baseVals, 111, 0, 0LL);
  BattleActionData__setChangeBg(v8, Value, Param, v13, 0LL);
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

  if ( (byte_418A79E & 1) == 0 )
  {
    sub_B2C35C(&BattleActionData_TypeInfo, *(_QWORD *)&actionId);
    sub_B2C35C(&BattleActionData_ShiftServant_TypeInfo, v11);
    byte_418A79E = 1;
  }
  data = this->fields.data;
  if ( !data )
    goto LABEL_9;
  ServantData = BattleData__getServantData(data, targetId, 0LL);
  v14 = (BattleActionData_o *)sub_B2C42C(BattleActionData_TypeInfo);
  BattleActionData___ctor(v14, 0LL);
  if ( !v14 )
    goto LABEL_9;
  v14->fields.actorId = actionId;
  v15 = (BattleActionData_ShiftServant_o *)sub_B2C42C(BattleActionData_ShiftServant_TypeInfo);
  BattleActionData_ShiftServant___ctor(v15, 0LL);
  if ( !v15
    || (BattleActionData_ShiftServant__setBeforeSvtData(v15, ServantData, 0LL), !ServantData)
    || (BattleServantData__setChangeServant(ServantData, this->fields.data, baseVals, 0LL),
        BattleActionData_ShiftServant__setCheckSvtData(v15, ServantData, 0LL),
        BattleActionData__setShiftServant(v14, v15, 0LL),
        (data = (BattleData_o *)this->fields.logic) == 0LL) )
  {
LABEL_9:
    sub_B2C434(data, *(_QWORD *)&actionId);
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

  if ( (byte_418A78B & 1) == 0 )
  {
    sub_B2C35C(&BattleActionData_TypeInfo, *(_QWORD *)&playerId);
    byte_418A78B = 1;
  }
  v15 = (BattleActionData_o *)sub_B2C42C(BattleActionData_TypeInfo);
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
    sub_B2C434(data, v16);
  }
  BattleActionData__setDamageData(v15, v21, baseVals, 0, 0, 0LL);
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

  if ( (byte_418A794 & 1) == 0 )
  {
    sub_B2C35C(&BattleActionData_TypeInfo, *(_QWORD *)&targetId);
    byte_418A794 = 1;
  }
  *absorptionCount = 0;
  v15 = (BattleActionData_o *)sub_B2C42C(BattleActionData_TypeInfo);
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
    sub_B2C434(data, v16);
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
  BattleServantData_o *v22; // x27
  BattleServantData_o *v23; // x25
  const MethodInfo *v24; // x4
  BattleBuffData_o *buffData; // x28
  BattleBuffData_CheckIndividualitiesData_o *v26; // x20
  char v27; // w20
  struct BattleData_o *v28; // x8
  System_String_o *v29; // x0
  float UpDownGiveHeal; // s0
  const MethodInfo *v32; // [xsp+8h] [xbp-68h]
  FunctionEntity_o *v33; // [xsp+10h] [xbp-60h]
  int32_t healPoint[2]; // [xsp+18h] [xbp-58h] BYREF

  LODWORD(v9) = overwriteHeal;
  if ( (byte_418A78E & 1) == 0 )
  {
    sub_B2C35C(&BattleActionData_TypeInfo, *(_QWORD *)&playerId);
    sub_B2C35C(&BattleBuffData_CheckIndividualitiesData_TypeInfo, v17);
    sub_B2C35C(&StringLiteral_18932/*"functionGainHp:"*/, v18);
    byte_418A78E = 1;
  }
  *(_QWORD *)healPoint = 0LL;
  v19 = (BattleActionData_o *)sub_B2C42C(BattleActionData_TypeInfo);
  BattleActionData___ctor(v19, 0LL);
  data = this->fields.data;
  if ( !data )
    goto LABEL_26;
  data = (BattleData_o *)BattleData__getServantData(data, playerId, 0LL);
  if ( !this->fields.data )
    goto LABEL_26;
  v22 = (BattleServantData_o *)data;
  data = (BattleData_o *)BattleData__getServantData(this->fields.data, targetId, 0LL);
  if ( !baseVals )
    goto LABEL_26;
  v23 = (BattleServantData_o *)data;
  baseVals->fields.isShowForcedEffect = 0;
  if ( (_DWORD)v9 == -1 )
    LODWORD(v9) = DataVals__GetValue(baseVals, 0LL);
  healPoint[1] = v9;
  data = (BattleData_o *)DataVals__isUnaffected(baseVals, 0LL);
  if ( ((unsigned __int8)data & 1) != 0 )
  {
LABEL_20:
    v27 = 0;
    goto LABEL_21;
  }
  if ( !v23 )
    goto LABEL_26;
  if ( ((__int64 (__fastcall *)(BattleServantData_o *, Il2CppMethodPointer))v23->klass->vtable._13_get_resultHp.method)(
         v23,
         v23->klass->vtable._14_set_resultHp.methodPtr) <= 0 )
  {
    healPoint[1] = 0;
    data = (BattleData_o *)BattleServantData__isShiftableServant(v23, 0LL);
    if ( ((unsigned __int8)data & 1) == 0 )
    {
      v28 = this->fields.data;
      if ( !v28 )
        goto LABEL_26;
      data = (BattleData_o *)v28->fields.battleEvent;
      if ( !data )
        goto LABEL_26;
      data = (BattleData_o *)(*(__int64 (__fastcall **)(BattleData_o *, BattleServantData_o *, _QWORD))&data->klass[1]._2.initializationExceptionGCHandle)(
                               data,
                               v23,
                               *(_QWORD *)&data->klass[1]._2.cctor_finished);
      if ( ((unsigned __int8)data & 1) == 0 )
      {
        data = (BattleData_o *)BattleServantData__isGuts(v23, 0LL);
        LODWORD(v9) = 0;
        v27 = (unsigned __int8)data ^ 1;
        goto LABEL_21;
      }
    }
    LODWORD(v9) = 0;
    goto LABEL_20;
  }
  data = (BattleData_o *)BattleServantData__isShiftReady(v23, 0LL);
  if ( ((unsigned __int8)data & 1) != 0 )
  {
LABEL_14:
    LODWORD(v9) = 0;
    v27 = 0;
    healPoint[1] = 0;
    goto LABEL_21;
  }
  v33 = funcEnt;
  buffData = v23->fields.buffData;
  v26 = (BattleBuffData_CheckIndividualitiesData_o *)sub_B2C42C(BattleBuffData_CheckIndividualitiesData_TypeInfo);
  BattleBuffData_CheckIndividualitiesData___ctor(v26, v23, 0LL, 0LL, 0LL, 0LL, 0LL);
  if ( !buffData )
LABEL_26:
    sub_B2C434(data, v20);
  data = (BattleData_o *)BattleBuffData__isTurnBuff(buffData, 42, v26, 1, 0LL);
  funcEnt = v33;
  if ( ((unsigned __int8)data & 1) != 0 )
    goto LABEL_14;
  if ( v22 )
  {
    UpDownGiveHeal = BattleServantData__getUpDownGiveHeal(v22, v23, 0LL);
    LODWORD(v9) = BattleUtility__FloorToInt(UpDownGiveHeal * (float)(int)v9, 0LL);
    healPoint[1] = v9;
  }
  healPoint[0] = 1;
  data = (BattleData_o *)BattleServantData__getUpDownHeal(v23, healPoint, 0LL);
  v27 = 0;
  v9 = (int)data * (__int64)(int)v9 / healPoint[0];
  healPoint[1] = v9;
  baseVals->fields.isShowForcedEffect = 1;
LABEL_21:
  healPoint[1] = BattleLogicFunction__GetActualRecoveryHealPoint((BattleLogicFunction_o *)data, baseVals, v23, v9, v24);
  v29 = System_Int32__ToString((int32_t)&healPoint[1], 0LL);
  System_String__Concat_44305532((System_String_o *)StringLiteral_18932/*"functionGainHp:"*/, v29, 0LL);
  BattleLogicFunction__SetGainHpBuff(
    this,
    v19,
    healPoint[1],
    funcIndex,
    v23,
    funcEnt,
    baseVals,
    isCommandSideEffect,
    v27 & 1,
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
  BattleLogicFunction_ProcListInArgs_o *v7; // x24
  BattleLogicFunction_o *v8; // x21
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x1
  __int64 v12; // x1
  __int64 v13; // x1
  __int64 v14; // x1
  __int64 v15; // x1
  __int64 v16; // x1
  __int64 v17; // x1
  struct BattleLogicFunctionProcess_FunctionUnitCheck_o *funcUnit_k__BackingField; // x8
  DataVals_o *dataVals_k__BackingField; // x23
  System_Collections_Generic_List_VoiceCondType_Type__o *v20; // x20
  int logic; // w8
  unsigned int v22; // w25
  int v23; // w19
  DataVals_o *v24; // x26
  int32_t *p_funcType; // x28
  BattleLogicFunction_o *v26; // x19
  System_String_o *v27; // x20
  const MethodInfo *v28; // x4
  __int64 v29; // x3
  BattleLogicFunction_c *klass; // x8
  BattleLogicFunction_o *v31; // x23
  unsigned __int64 v32; // x10
  int32_t *p_offset; // x11
  __int64 v34; // x0
  __int64 v35; // x0
  __int64 v36; // x1
  const MethodInfo *v37; // x3
  __int64 v38; // x27
  BattleLogicFunction_ProcListInArgs_o *v39; // x0
  int32_t actorId; // w19
  FunctionEntity_o *funcEnt; // x22
  int32_t funcIndex; // w24
  bool IsCommandSideEffect; // w0
  BattleActionData_o *v44; // x20
  __int64 v45; // x1
  int v46; // w19
  int32_t v47; // w19
  bool v48; // w0
  const MethodInfo *v49; // x7
  BattleActionData_o *NoEffectObject; // x1
  __int64 v51; // x8
  unsigned __int64 v52; // x10
  int *v53; // x11
  __int64 v54; // x0
  __int64 v55; // x3
  __int64 v56; // x8
  unsigned __int64 v57; // x10
  int *v58; // x11
  __int64 v59; // x0
  __int64 v60; // x0
  __int64 v61; // x1
  __int64 v62; // x20
  __int64 v63; // x1
  BattleData_o *data; // x0
  int32_t v65; // w25
  BattleServantData_o *ServantData; // x0
  __int64 v67; // x1
  BattleServantData_o *v68; // x26
  BattleLogicFunction_o *Value; // x0
  __int64 v70; // x1
  int v71; // w23
  int32_t v72; // w8
  int32_t v73; // w20
  char v74; // w21
  __int64 v75; // x8
  unsigned __int64 v76; // x10
  int *v77; // x11
  __int64 v78; // x0
  int v79; // w8
  int32_t v80; // w19
  FunctionEntity_o *v81; // x20
  int32_t targetId_k__BackingField; // w22
  int32_t v83; // w21
  bool v84; // w0
  __int64 v86; // x0
  const MethodInfo *overwriteLossHp; // [xsp+0h] [xbp-E0h]
  bool isRandomDamage; // [xsp+8h] [xbp-D8h]
  const MethodInfo *v89; // [xsp+18h] [xbp-C8h]
  DataVals_o *v90; // [xsp+28h] [xbp-B8h]
  BattleLogicFunctionProcess_FunctionTargetCheck_o *v91; // [xsp+30h] [xbp-B0h]
  int32_t overwriteHeal; // [xsp+3Ch] [xbp-A4h]
  BattleLogicFunction_o *v93; // [xsp+40h] [xbp-A0h]
  int v94; // [xsp+48h] [xbp-98h]
  unsigned int v95; // [xsp+4Ch] [xbp-94h]
  BattleLogicFunction_ProcListInArgs_o *v96; // [xsp+50h] [xbp-90h]
  BattleActionData_o *v97; // [xsp+58h] [xbp-88h]
  BattleLogicFunction_o *v98; // [xsp+60h] [xbp-80h]
  bool v99; // [xsp+6Ch] [xbp-74h]
  __int64 v100; // [xsp+70h] [xbp-70h]
  BattleActionData_o *v101; // [xsp+78h] [xbp-68h]
  DataVals_o *v102; // [xsp+80h] [xbp-60h]
  _DWORD v103[1]; // [xsp+88h] [xbp-58h]
  int v104; // [xsp+8Ch] [xbp-54h]

  v7 = procArg;
  v8 = this;
  if ( (byte_418A7A8 & 1) == 0 )
  {
    sub_B2C35C(&BattleActionData_TypeInfo, procArg);
    sub_B2C35C(&System_IDisposable_TypeInfo, v9);
    sub_B2C35C(&System_Collections_Generic_IEnumerable_BattleLogicFunctionProcess_FunctionTargetCheck__TypeInfo, v10);
    sub_B2C35C(&System_Collections_Generic_IEnumerator_BattleLogicFunctionProcess_FunctionTargetCheck__TypeInfo, v11);
    sub_B2C35C(&System_Collections_IEnumerator_TypeInfo, v12);
    sub_B2C35C(&Method_System_Collections_Generic_List_FuncList_TYPE__Add__, v13);
    sub_B2C35C(&Method_System_Collections_Generic_List_FuncList_TYPE___ctor__, v14);
    sub_B2C35C(&System_Collections_Generic_List_FuncList_TYPE__TypeInfo, v15);
    sub_B2C35C(&FuncList_TYPE_TypeInfo, v16);
    this = (BattleLogicFunction_o *)sub_B2C35C(&StringLiteral_16052/*"_SAFE"*/, v17);
    byte_418A7A8 = 1;
  }
  v104 = 0;
  if ( !funcTarget )
    goto LABEL_82;
  funcUnit_k__BackingField = funcTarget->fields._funcUnit_k__BackingField;
  v91 = funcTarget;
  if ( !funcUnit_k__BackingField )
    goto LABEL_82;
  dataVals_k__BackingField = funcUnit_k__BackingField->fields._dataVals_k__BackingField;
  v97 = (BattleActionData_o *)sub_B2C42C(BattleActionData_TypeInfo);
  BattleActionData___ctor(v97, 0LL);
  v20 = (System_Collections_Generic_List_VoiceCondType_Type__o *)sub_B2C42C(System_Collections_Generic_List_FuncList_TYPE__TypeInfo);
  System_Collections_Generic_List_VoiceCondType_Type____ctor(
    v20,
    (const MethodInfo_2F69274 *)Method_System_Collections_Generic_List_FuncList_TYPE___ctor__);
  if ( !v20 )
    goto LABEL_82;
  System_Collections_Generic_List_VoiceCondType_Type___Add(
    v20,
    12,
    (const MethodInfo_2F69FD0 *)Method_System_Collections_Generic_List_FuncList_TYPE__Add__);
  System_Collections_Generic_List_VoiceCondType_Type___Add(
    v20,
    25,
    (const MethodInfo_2F69FD0 *)Method_System_Collections_Generic_List_FuncList_TYPE__Add__);
  System_Collections_Generic_List_VoiceCondType_Type___Add(
    v20,
    50,
    (const MethodInfo_2F69FD0 *)Method_System_Collections_Generic_List_FuncList_TYPE__Add__);
  System_Collections_Generic_List_VoiceCondType_Type___Add(
    v20,
    51,
    (const MethodInfo_2F69FD0 *)Method_System_Collections_Generic_List_FuncList_TYPE__Add__);
  if ( !dataVals_k__BackingField )
    goto LABEL_82;
  v90 = dataVals_k__BackingField;
  this = (BattleLogicFunction_o *)DataVals__GetDependDataValsArray(
                                    dataVals_k__BackingField,
                                    (System_Collections_Generic_List_FuncList_TYPE__o *)v20,
                                    1,
                                    0LL);
  if ( !this )
    goto LABEL_82;
  logic = (int)this->fields.logic;
  v98 = v8;
  v101 = mainAction;
  if ( logic >= 1 )
  {
    v22 = 0;
    v23 = 0;
    overwriteHeal = 0;
    v93 = this;
    v96 = v7;
    while ( 1 )
    {
      if ( v22 >= logic )
      {
        v86 = sub_B2C460(this);
        sub_B2C400(v86, 0LL);
      }
      v24 = (DataVals_o *)*((_QWORD *)&this->fields.logictarget + (int)v22);
      v94 = v23;
      if ( !v24 )
        goto LABEL_82;
      p_funcType = &v24->fields.funcType;
      this = (BattleLogicFunction_o *)j_il2cpp_value_box_0(FuncList_TYPE_TypeInfo, &v24->fields.funcType);
      if ( !this )
        goto LABEL_82;
      v26 = this;
      v27 = (System_String_o *)((__int64 (__fastcall *)(BattleLogicFunction_o *, void *))this->klass->vtable._3_ToString.method)(
                                 this,
                                 this->klass[1]._1.image);
      this = (BattleLogicFunction_o *)j_il2cpp_object_unbox_0(v26);
      *p_funcType = (int32_t)this->klass;
      if ( !v27 )
        goto LABEL_82;
      v99 = System_String__Contains(v27, (System_String_o *)StringLiteral_16052/*"_SAFE"*/, 0LL);
      this = (BattleLogicFunction_o *)BattleLogicFunction__GetDependFuncTargets(v8, v7, mainAction, v24, v28);
      if ( !this )
        goto LABEL_82;
      klass = this->klass;
      v31 = this;
      v102 = v24;
      v95 = v22;
      if ( *(_WORD *)&this->klass->_2.bitflags1 )
      {
        v32 = 0LL;
        p_offset = &klass->_1.interfaceOffsets->offset;
        while ( *((System_Collections_Generic_IEnumerable_BattleLogicFunctionProcess_FunctionTargetCheck__c **)p_offset
                - 1) != System_Collections_Generic_IEnumerable_BattleLogicFunctionProcess_FunctionTargetCheck__TypeInfo )
        {
          ++v32;
          p_offset += 4;
          if ( v32 >= *(unsigned __int16 *)&this->klass->_2.bitflags1 )
            goto LABEL_28;
        }
        v34 = (__int64)(&klass->vtable._0_Equals.method + 2 * *p_offset);
      }
      else
      {
LABEL_28:
        v34 = sub_AC5258(
                this,
                System_Collections_Generic_IEnumerable_BattleLogicFunctionProcess_FunctionTargetCheck__TypeInfo,
                0LL,
                v29);
      }
      v35 = (*(__int64 (__fastcall **)(BattleLogicFunction_o *, _QWORD))v34)(v31, *(_QWORD *)(v34 + 8));
      v100 = v35;
      if ( !v35 )
        sub_B2C434(0LL, v36);
      v38 = v35;
      while ( 1 )
      {
        v51 = *(_QWORD *)v38;
        if ( *(_WORD *)(*(_QWORD *)v38 + 298LL) )
        {
          v52 = 0LL;
          v53 = (int *)(*(_QWORD *)(v51 + 176) + 8LL);
          while ( *((System_Collections_IEnumerator_c **)v53 - 1) != System_Collections_IEnumerator_TypeInfo )
          {
            ++v52;
            v53 += 4;
            if ( v52 >= *(unsigned __int16 *)(*(_QWORD *)v38 + 298LL) )
              goto LABEL_42;
          }
          v54 = v51 + 16LL * *v53 + 312;
        }
        else
        {
LABEL_42:
          v54 = sub_AC5258(v38, System_Collections_IEnumerator_TypeInfo, 0LL, v37);
        }
        if ( ((*(__int64 (__fastcall **)(__int64, _QWORD))v54)(v38, *(_QWORD *)(v54 + 8)) & 1) == 0 )
          break;
        v56 = *(_QWORD *)v38;
        if ( *(_WORD *)(*(_QWORD *)v38 + 298LL) )
        {
          v57 = 0LL;
          v58 = (int *)(*(_QWORD *)(v56 + 176) + 8LL);
          while ( *((System_Collections_Generic_IEnumerator_BattleLogicFunctionProcess_FunctionTargetCheck__c **)v58 - 1) != System_Collections_Generic_IEnumerator_BattleLogicFunctionProcess_FunctionTargetCheck__TypeInfo )
          {
            ++v57;
            v58 += 4;
            if ( v57 >= *(unsigned __int16 *)(*(_QWORD *)v38 + 298LL) )
              goto LABEL_49;
          }
          v59 = v56 + 16LL * *v58 + 312;
        }
        else
        {
LABEL_49:
          v59 = sub_AC5258(
                  v38,
                  System_Collections_Generic_IEnumerator_BattleLogicFunctionProcess_FunctionTargetCheck__TypeInfo,
                  0LL,
                  v55);
        }
        v60 = (*(__int64 (__fastcall **)(__int64, _QWORD))v59)(v38, *(_QWORD *)(v59 + 8));
        v62 = v60;
        if ( !v60 )
          sub_B2C434(0LL, v61);
        if ( ((*(__int64 (__fastcall **)(__int64, BattleActionData_o *, _QWORD))(*(_QWORD *)v60 + 392LL))(
                v60,
                mainAction,
                *(_QWORD *)(*(_QWORD *)v60 + 400LL)) & 1) != 0 )
        {
          data = v8->fields.data;
          if ( !data )
            sub_B2C434(0LL, v63);
          v65 = *(_DWORD *)(v62 + 32);
          ServantData = BattleData__getServantData(data, v65, 0LL);
          v68 = ServantData;
          if ( !ServantData )
            sub_B2C434(0LL, v67);
          Value = (BattleLogicFunction_o *)((__int64 (__fastcall *)(BattleServantData_o *, Il2CppMethodPointer))ServantData->klass->vtable._13_get_resultHp.method)(
                                             ServantData,
                                             ServantData->klass->vtable._14_set_resultHp.methodPtr);
          v71 = (int)Value;
          if ( (int)Value >= 1 )
          {
            v72 = *p_funcType;
            if ( *p_funcType == 12 || v72 == 25 )
            {
              Value = (BattleLogicFunction_o *)DataVals__GetValue(v102, 0LL);
              v73 = (int)Value;
            }
            else
            {
              if ( (v72 & 0xFFFFFFFE) == 50 )
              {
                Value = (BattleLogicFunction_o *)BattleLogicFunction__getHpPerValue(Value, v102, v68, v37);
                v73 = (int)Value;
                v74 = 0;
                if ( !mainAction )
                  goto LABEL_64;
                goto LABEL_32;
              }
              v73 = -1;
            }
            v74 = 1;
            if ( !mainAction )
LABEL_64:
              sub_B2C434(Value, v70);
LABEL_32:
            v39 = v7;
            if ( !v7 )
              sub_B2C434(0LL, v70);
            actorId = mainAction->fields.actorId;
            funcEnt = v102->fields.funcEnt;
            funcIndex = v102->fields.funcIndex;
            IsCommandSideEffect = BattleLogicFunction_ProcListInArgs__get_IsCommandSideEffect(v39, 0LL);
            isRandomDamage = v74;
            v8 = v98;
            v44 = BattleLogicFunction__functionlossHp(
                    v98,
                    actorId,
                    v65,
                    funcEnt,
                    v102,
                    funcIndex,
                    v99,
                    IsCommandSideEffect,
                    v73,
                    isRandomDamage,
                    0LL,
                    v89);
            v7 = v96;
            mainAction = v101;
            v46 = v71
                - ((__int64 (__fastcall *)(BattleServantData_o *, Il2CppMethodPointer))v68->klass->vtable._13_get_resultHp.method)(
                    v68,
                    v68->klass->vtable._14_set_resultHp.methodPtr);
            if ( v46 >= 1 )
            {
              if ( !v97 )
                sub_B2C434(0LL, v45);
              v38 = v100;
              BattleActionData__addAction(v97, v44, 0LL);
              overwriteHeal += v46;
            }
            else
            {
              v47 = v102->fields.funcIndex;
              v48 = BattleLogicFunction_ProcListInArgs__get_IsCommandSideEffect(v96, 0LL);
              v38 = v100;
              NoEffectObject = BattleLogicFunction__getNoEffectObject(v98, v65, v47, v102, v48, 0LL, 0LL, v49);
              if ( !v97 )
                sub_B2C434(0LL, NoEffectObject);
              BattleActionData__addAction(v97, NoEffectObject, 0LL);
            }
          }
        }
      }
      v103[v94] = 395;
      v23 = ++v104;
      if ( v38 )
      {
        v75 = *(_QWORD *)v38;
        if ( *(_WORD *)(*(_QWORD *)v38 + 298LL) )
        {
          v76 = 0LL;
          v77 = (int *)(*(_QWORD *)(v75 + 176) + 8LL);
          while ( *((System_IDisposable_c **)v77 - 1) != System_IDisposable_TypeInfo )
          {
            ++v76;
            v77 += 4;
            if ( v76 >= *(unsigned __int16 *)(*(_QWORD *)v38 + 298LL) )
              goto LABEL_70;
          }
          v78 = v75 + 16LL * *v77 + 312;
        }
        else
        {
LABEL_70:
          v78 = sub_AC5258(v38, System_IDisposable_TypeInfo, 0LL, v55);
        }
        (*(void (__fastcall **)(__int64, _QWORD))v78)(v38, *(_QWORD *)(v78 + 8));
      }
      this = v93;
      if ( v23 )
      {
        v79 = v23 - 1;
        mainAction = v101;
        if ( v103[v23 - 1] == 395 )
        {
          --v23;
          v104 = v79;
        }
      }
      else
      {
        mainAction = v101;
      }
      logic = (int)v93->fields.logic;
      v22 = v95 + 1;
      if ( (int)(v95 + 1) >= logic )
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
    || (v80 = v90->fields.funcIndex,
        v81 = v90->fields.funcEnt,
        targetId_k__BackingField = v91->fields._targetId_k__BackingField,
        v83 = v101->fields.actorId,
        v84 = BattleLogicFunction_ProcListInArgs__get_IsCommandSideEffect(v7, 0LL),
        this = (BattleLogicFunction_o *)BattleLogicFunction__functionGainHp(
                                          v98,
                                          v83,
                                          targetId_k__BackingField,
                                          v81,
                                          v90,
                                          v80,
                                          v84,
                                          overwriteHeal,
                                          overwriteLossHp),
        !v97) )
  {
LABEL_82:
    sub_B2C434(this, procArg);
  }
  BattleActionData__addAction(v97, (BattleActionData_o *)this, 0LL);
  return v97;
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
  BattleServantData_o *v19; // x27
  BattleServantData_o *v20; // x25
  int32_t Value; // w26
  const MethodInfo *v22; // x4
  char v23; // w20
  int v24; // w3
  BattleBuffData_o *buffData; // x28
  BattleBuffData_CheckIndividualitiesData_o *v26; // x20
  struct BattleData_o *v27; // x8
  int32_t ActualRecoveryHealPoint; // w0
  float UpDownGiveHeal; // s0
  int32_t UpDownHeal; // w0
  __int64 v32; // x26
  const MethodInfo *v33; // [xsp+8h] [xbp-68h]
  FunctionEntity_o *v34; // [xsp+10h] [xbp-60h]
  int32_t digit; // [xsp+1Ch] [xbp-54h] BYREF

  if ( (byte_418A78F & 1) == 0 )
  {
    sub_B2C35C(&BattleActionData_TypeInfo, *(_QWORD *)&playerId);
    sub_B2C35C(&BattleBuffData_CheckIndividualitiesData_TypeInfo, v15);
    byte_418A78F = 1;
  }
  digit = 0;
  v16 = (BattleActionData_o *)sub_B2C42C(BattleActionData_TypeInfo);
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
  v26 = (BattleBuffData_CheckIndividualitiesData_o *)sub_B2C42C(BattleBuffData_CheckIndividualitiesData_TypeInfo);
  BattleBuffData_CheckIndividualitiesData___ctor(v26, v20, 0LL, 0LL, 0LL, 0LL, 0LL);
  if ( !buffData )
LABEL_24:
    sub_B2C434(data, v17);
  data = (BattleData_o *)BattleBuffData__isTurnBuff(buffData, 42, v26, 1, 0LL);
  if ( ((unsigned __int8)data & 1) != 0 )
  {
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

  if ( (byte_418A7A7 & 1) == 0 )
  {
    sub_B2C35C(&BattleActionData_TypeInfo, procArg);
    byte_418A7A7 = 1;
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
  v14 = (BattleActionData_o *)sub_B2C42C(BattleActionData_TypeInfo);
  BattleActionData___ctor(v14, 0LL);
  if ( !baseVals )
LABEL_18:
    sub_B2C434(data, procArg);
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
  double v22; // d0
  BattleActionData_o *v23; // x0

  v8 = this;
  if ( (byte_418A7A5 & 1) == 0 )
  {
    sub_B2C35C(&BattleActionData_TypeInfo, procArg);
    sub_B2C35C(&NpGaugeAbsorbResult_TypeInfo, v9);
    this = (BattleLogicFunction_o *)sub_B2C35C(&NpTurnToPointConvert_TypeInfo, v10);
    byte_418A7A5 = 1;
  }
  if ( !funcTarget )
    goto LABEL_12;
  funcUnit_k__BackingField = funcTarget->fields._funcUnit_k__BackingField;
  if ( !funcUnit_k__BackingField )
    goto LABEL_12;
  dataVals_k__BackingField = funcUnit_k__BackingField->fields._dataVals_k__BackingField;
  v13 = (BattleActionData_o *)sub_B2C42C(BattleActionData_TypeInfo);
  BattleActionData___ctor(v13, 0LL);
  v14 = (NpTurnToPointConvert_o *)sub_B2C42C(NpTurnToPointConvert_TypeInfo);
  NpTurnToPointConvert___ctor(v14, 0LL);
  v15 = (NpGaugeAbsorbResult_o *)sub_B2C42C(NpGaugeAbsorbResult_TypeInfo);
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
    sub_B2C434(this, procArg);
  }
  Point_k__BackingField = v15->fields._Point_k__BackingField;
  if ( Point_k__BackingField == INFINITY )
    v22 = -Point_k__BackingField;
  else
    v22 = Point_k__BackingField;
  v23 = BattleLogicFunction__functionGainNp(
          v8,
          procArg,
          v19,
          funcTarget->fields._targetId_k__BackingField,
          dataVals_k__BackingField,
          (int)v22,
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
  int32_t v22; // w1
  int32_t v23; // w28
  _BOOL8 isGainNp; // x0
  const MethodInfo *v25; // x6

  if ( (byte_418A793 & 1) == 0 )
  {
    sub_B2C35C(&BattleActionData_TypeInfo, *(_QWORD *)&targetId);
    byte_418A793 = 1;
  }
  v15 = (BattleActionData_o *)sub_B2C42C(BattleActionData_TypeInfo);
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
        sub_B2C434(data, v16);
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
        const MethodInfo *method)
{
  __int64 v15; // x1
  System_String_o *v16; // x0
  BattleActionData_o *v17; // x25
  BattleData_o *v18; // x1
  BattleData_o *data; // x0
  BattleServantData_o *v20; // x27
  BattleServantData_o *v21; // x28
  unsigned int v22; // w0
  int32_t v23; // w20
  bool IsOpponentPTUniqueID; // w0
  int32_t v25; // w0
  const MethodInfo *v26; // x6
  struct BattleData_o *v27; // x8
  int32_t v28; // w2
  int32_t uniqueId; // [xsp+Ch] [xbp-54h] BYREF

  uniqueId = targetId;
  if ( (byte_418A792 & 1) == 0 )
  {
    sub_B2C35C(&BattleActionData_TypeInfo, *(_QWORD *)&playerId);
    sub_B2C35C(&StringLiteral_18933/*"functionInstantDeath>>:"*/, v15);
    byte_418A792 = 1;
  }
  v16 = System_Int32__ToString((int32_t)&uniqueId, 0LL);
  System_String__Concat_44305532((System_String_o *)StringLiteral_18933/*"functionInstantDeath>>:"*/, v16, 0LL);
  v17 = (BattleActionData_o *)sub_B2C42C(BattleActionData_TypeInfo);
  BattleActionData___ctor(v17, 0LL);
  data = this->fields.data;
  if ( !data )
    goto LABEL_15;
  data = (BattleData_o *)BattleData__getServantData(data, uniqueId, 0LL);
  if ( !this->fields.data )
    goto LABEL_15;
  v20 = (BattleServantData_o *)data;
  data = (BattleData_o *)BattleData__getServantData(this->fields.data, playerId, 0LL);
  if ( !v20 )
    goto LABEL_15;
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
    goto LABEL_15;
  data = (BattleData_o *)BattleLogic__getWave((BattleLogic_o *)data, 0LL);
  if ( !this->fields.data )
    goto LABEL_15;
  v23 = (int)data;
  IsOpponentPTUniqueID = BattleData__IsOpponentPTUniqueID(this->fields.data, uniqueId, playerId, 0LL);
  BattleServantData__setActionHistory(v20, playerId, 4, v23, IsOpponentPTUniqueID, 0LL);
  v25 = ((__int64 (__fastcall *)(BattleServantData_o *, Il2CppMethodPointer))v20->klass->vtable._13_get_resultHp.method)(
          v20,
          v20->klass->vtable._14_set_resultHp.methodPtr);
  BattleServantData__ResultDamage(v20, v25, v21, 0LL, 0, 0LL);
  v27 = this->fields.data;
  if ( !v27 )
    goto LABEL_15;
  v28 = v20->fields.uniqueId;
  v20->fields.deadTurn = v27->fields.typeTurn;
  data = (BattleData_o *)BattleLogicFunction__getFunctionObject(
                           (BattleLogicFunction_o *)data,
                           funcEnt,
                           v28,
                           funcIndex,
                           isCommandSideEffect,
                           0LL,
                           v26);
  if ( !data )
    goto LABEL_15;
  HIDWORD(data->fields.rootfsm) = 1;
  v18 = data;
  if ( uniqueId == playerId || isNoAccumulation )
    BYTE1(data->fields.quest_ent) = 1;
  if ( !v17 )
LABEL_15:
    sub_B2C434(data, v18);
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
  double v23; // d0
  int v24; // w24
  int32_t funcIndex; // w21
  int32_t uniqueId; // w22
  FunctionEntity_o *funcEnt; // x25
  _BOOL8 IsCommandSideEffect; // x0
  const MethodInfo *v29; // x6
  BattleActionData_BuffData_o *v30; // x20

  if ( (byte_418A7A6 & 1) == 0 )
  {
    sub_B2C35C(&BattleActionData_TypeInfo, procArg);
    sub_B2C35C(&BattleDataDefine_TypeInfo, v12);
    byte_418A7A6 = 1;
  }
  *diffNp = 0;
  data = this->fields.data;
  if ( !data )
    goto LABEL_22;
  data = (BattleData_o *)BattleData__getServantData(data, targetId, 0LL);
  if ( !data )
    goto LABEL_22;
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
        if ( (BYTE3(BattleDataDefine_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !BattleDataDefine_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(BattleDataDefine_TypeInfo);
          v21 = BattleDataDefine_TypeInfo;
        }
        PERCENTAGE_DENOMINATOR = v21->static_fields->PERCENTAGE_DENOMINATOR;
        v23 = PERCENTAGE_DENOMINATOR == INFINITY ? -PERCENTAGE_DENOMINATOR : PERCENTAGE_DENOMINATOR;
        v24 = v19 % (int)v23;
        if ( v24 >= 1 )
        {
          BattleServantData__addNp(v14, v24, 0, 0LL);
          *diffNp -= v24;
        }
        v15 = (BattleActionData_o *)sub_B2C42C(BattleActionData_TypeInfo);
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
            HIDWORD(data->fields.rootfsm) = 3;
            BattleActionData_BuffData__setSaveNp((BattleActionData_BuffData_o *)data, v20, 0LL);
            if ( v15 )
            {
              BattleActionData__setBuffData(v15, v30, baseVals, 0LL);
              return v15;
            }
          }
        }
      }
LABEL_22:
      sub_B2C434(data, procArg);
    }
  }
  return v15;
}


// local variable allocation has failed, the output may be wrong!
BattleActionData_o *__fastcall BattleLogicFunction__functionMissState(
        BattleLogicFunction_o *this,
        int32_t targetId,
        const MethodInfo *method)
{
  BattleActionData_o *v3; // x19

  if ( (byte_418A78A & 1) == 0 )
  {
    sub_B2C35C(&BattleActionData_TypeInfo, *(_QWORD *)&targetId);
    byte_418A78A = 1;
  }
  v3 = (BattleActionData_o *)sub_B2C42C(BattleActionData_TypeInfo);
  BattleActionData___ctor(v3, 0LL);
  return v3;
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
  __int64 v15; // x22
  __int64 v16; // x22
  DataManager_o *MasterData_WarQuestSelectionMaster; // x0
  SkillLvMaster_o *v18; // x22
  struct BattleSkillInfoData_o *skillInfo; // x8
  SkillLvEntity_o *v20; // x22
  int32_t MovePositionUp; // w23
  int32_t MovePositionDown; // w0
  int v23; // w24
  int v24; // w25
  struct DataMasterBase_array *datalist; // x8
  __int64 v26; // x9
  int i; // w10
  int v28; // w11
  int v29; // w10
  BattleServantData_o *v30; // x23
  struct BattleData_o *data; // x8
  __int64 *v32; // x8
  System_Int32_array **v33; // x21
  __int64 v34; // x22
  System_String_array **v35; // x2
  System_String_array **v36; // x3
  System_Boolean_array **v37; // x4
  System_Int32_array **v38; // x5
  System_Int32_array *v39; // x6
  System_Int32_array *v40; // x7
  __int64 v41; // x0

  if ( (byte_418A7AC & 1) == 0 )
  {
    sub_B2C35C(&BattleActionData_TypeInfo, actionData);
    sub_B2C35C(&Method_DataManager_GetMasterData_SkillLvMaster___, v7);
    sub_B2C35C(&Method_SingletonMonoBehaviour_DataManager__getInstance__, v8);
    sub_B2C35C(&StringLiteral_6371/*"FOCUS_UP_EX"*/, v9);
    sub_B2C35C(&StringLiteral_6369/*"FOCUS_UNDER_EX"*/, v10);
    sub_B2C35C(&StringLiteral_6367/*"FOCUS_CENTER_EX"*/, v11);
    sub_B2C35C(&StringLiteral_6368/*"FOCUS_UNDER"*/, v12);
    sub_B2C35C(&StringLiteral_6366/*"FOCUS_CENTER"*/, v13);
    sub_B2C35C(&StringLiteral_6370/*"FOCUS_UP"*/, v14);
    byte_418A7AC = 1;
  }
  v15 = *((_QWORD *)Method_SingletonMonoBehaviour_DataManager__getInstance__ + 3);
  if ( (*(_BYTE *)(v15 + 306) & 1) == 0 )
    sub_AC505C(*((_QWORD *)Method_SingletonMonoBehaviour_DataManager__getInstance__ + 3));
  v16 = **(_QWORD **)(v15 + 192);
  if ( (*(_BYTE *)(v16 + 306) & 1) == 0 )
    sub_AC505C(v16);
  MasterData_WarQuestSelectionMaster = **(DataManager_o ***)(v16 + 184);
  if ( !MasterData_WarQuestSelectionMaster )
    goto LABEL_23;
  MasterData_WarQuestSelectionMaster = (DataManager_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                          MasterData_WarQuestSelectionMaster,
                                                          (const MethodInfo_17339EC *)Method_DataManager_GetMasterData_SkillLvMaster___);
  if ( !actionData )
    goto LABEL_23;
  v18 = (SkillLvMaster_o *)MasterData_WarQuestSelectionMaster;
  MasterData_WarQuestSelectionMaster = (DataManager_o *)actionData->fields.skillInfo;
  if ( !MasterData_WarQuestSelectionMaster )
    goto LABEL_23;
  MasterData_WarQuestSelectionMaster = (DataManager_o *)((__int64 (__fastcall *)(DataManager_o *, void *))MasterData_WarQuestSelectionMaster->klass[1]._1.namespaze)(
                                                          MasterData_WarQuestSelectionMaster,
                                                          MasterData_WarQuestSelectionMaster->klass[1]._1.byval_arg.data);
  skillInfo = actionData->fields.skillInfo;
  if ( !skillInfo )
    goto LABEL_23;
  if ( !v18 )
    goto LABEL_23;
  MasterData_WarQuestSelectionMaster = (DataManager_o *)SkillLvMaster__GetEntity(
                                                          v18,
                                                          (int32_t)MasterData_WarQuestSelectionMaster,
                                                          skillInfo->fields.skilllv,
                                                          0LL);
  if ( !MasterData_WarQuestSelectionMaster )
    goto LABEL_23;
  v20 = (SkillLvEntity_o *)MasterData_WarQuestSelectionMaster;
  MovePositionUp = SkillLvEntity__getMovePositionUp((SkillLvEntity_o *)MasterData_WarQuestSelectionMaster, 0LL);
  MovePositionDown = SkillLvEntity__getMovePositionDown(v20, 0LL);
  if ( (MovePositionUp & MovePositionDown) != -1 )
  {
    v23 = MovePositionDown;
    MasterData_WarQuestSelectionMaster = (DataManager_o *)this->fields.data;
    if ( !MasterData_WarQuestSelectionMaster )
      goto LABEL_23;
    MasterData_WarQuestSelectionMaster = (DataManager_o *)BattleData__getTargetEnemyId(
                                                            (BattleData_o *)MasterData_WarQuestSelectionMaster,
                                                            0,
                                                            0LL);
    if ( !this->fields.data )
      goto LABEL_23;
    v24 = (int)MasterData_WarQuestSelectionMaster;
    BattleData__getServantData(this->fields.data, (int32_t)MasterData_WarQuestSelectionMaster, 0LL);
    MasterData_WarQuestSelectionMaster = (DataManager_o *)this->fields.data;
    if ( !MasterData_WarQuestSelectionMaster )
      goto LABEL_23;
    datalist = MasterData_WarQuestSelectionMaster[2].fields.datalist;
    if ( !datalist )
      goto LABEL_23;
    v26 = *(_QWORD *)&datalist->max_length;
    for ( i = 0; ; ++i )
    {
      if ( i >= (int)v26 )
        return;
      if ( i >= (unsigned int)v26 )
        goto LABEL_50;
      if ( v24 == *((_DWORD *)datalist->m_Items + i) )
        break;
    }
    v28 = MovePositionUp > 0 ? -MovePositionUp : v23;
    v29 = v28 + i;
    if ( v29 >= 0 && v29 < (int)v26 )
    {
      if ( v29 >= (unsigned int)v26 )
      {
LABEL_50:
        v41 = sub_B2C460(MasterData_WarQuestSelectionMaster);
        sub_B2C400(v41, 0LL);
      }
      MasterData_WarQuestSelectionMaster = (DataManager_o *)BattleData__getServantData(
                                                              (BattleData_o *)MasterData_WarQuestSelectionMaster,
                                                              *((_DWORD *)datalist->m_Items + v29),
                                                              0LL);
      if ( !MasterData_WarQuestSelectionMaster )
        goto LABEL_23;
      v30 = (BattleServantData_o *)MasterData_WarQuestSelectionMaster;
      MasterData_WarQuestSelectionMaster = (DataManager_o *)BattleServantData__isAlive(
                                                              (BattleServantData_o *)MasterData_WarQuestSelectionMaster,
                                                              0,
                                                              0LL);
      if ( ((unsigned __int8)MasterData_WarQuestSelectionMaster & 1) != 0 )
      {
        data = this->fields.data;
        if ( !data )
          goto LABEL_23;
        data->fields.globaltargetId = v30->fields.uniqueId;
        if ( BattleServantData__isMultiTargetUp(v30, 0LL) )
        {
          if ( SkillLvEntity__IsAress(v20, 0LL) )
            v32 = &StringLiteral_6371/*"FOCUS_UP_EX"*/;
          else
            v32 = &StringLiteral_6370/*"FOCUS_UP"*/;
        }
        else if ( BattleServantData__isMultiTargetCore(v30, 0LL) )
        {
          if ( SkillLvEntity__IsAress(v20, 0LL) )
            v32 = &StringLiteral_6367/*"FOCUS_CENTER_EX"*/;
          else
            v32 = &StringLiteral_6366/*"FOCUS_CENTER"*/;
        }
        else
        {
          v33 = 0LL;
          if ( !BattleServantData__isMultiTargetUnder(v30, 0LL) )
          {
LABEL_47:
            v34 = sub_B2C42C(BattleActionData_TypeInfo);
            BattleActionData___ctor((BattleActionData_o *)v34, 0LL);
            if ( targetData && v34 )
            {
              *(_DWORD *)(v34 + 32) = targetData->fields.uniqueId;
              *(_DWORD *)(v34 + 36) = actionData->fields.targetId;
              BattleActionData__setStateField((BattleActionData_o *)v34, 0LL);
              *(_QWORD *)(v34 + 64) = v33;
              sub_B2C2F8((BattleServantConfConponent_o *)(v34 + 64), v33, v35, v36, v37, v38, v39, v40);
              BattleActionData__AddAfterActionData(actionData, (BattleActionData_o *)v34, 0, 0LL);
              return;
            }
LABEL_23:
            sub_B2C434(MasterData_WarQuestSelectionMaster, actionData);
          }
          if ( SkillLvEntity__IsAress(v20, 0LL) )
            v32 = &StringLiteral_6369/*"FOCUS_UNDER_EX"*/;
          else
            v32 = &StringLiteral_6368/*"FOCUS_UNDER"*/;
        }
        v33 = (System_Int32_array **)*v32;
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
  __int64 v24; // x19
  RemovedBuffInfoGroup_o *StealBuffInfoGroup; // x0
  __int64 v26; // x1
  const MethodInfo *v27; // x4
  struct BattleLogicFunctionProcess_FunctionUnitCheck_o *funcUnit_k__BackingField; // x8
  int32_t targetId_k__BackingField; // w26
  DataVals_o *dataVals_k__BackingField; // x20
  RemovedBuffInfoGroup_o *v31; // x24
  BattleServantData_o *ServantData; // x25
  const MethodInfo *v33; // x4
  System_Collections_Generic_IEnumerable_TSource__o *v34; // x26
  System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *v35; // x27
  System_Collections_Generic_IEnumerable_T__o *v36; // x26
  System_Collections_Generic_HashSet_BattleBuffData_BuffData__o *v37; // x27
  System_String_array **v38; // x2
  System_String_array **v39; // x3
  System_Boolean_array **v40; // x4
  System_Int32_array **v41; // x5
  System_Int32_array *v42; // x6
  System_Int32_array *v43; // x7
  System_Collections_Generic_IEnumerable_TSource__o *v44; // x24
  System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *v45; // x26
  System_Collections_Generic_IEnumerable_TSource__o *v46; // x0
  RemovedBuffInfoGroup_o *v47; // x26
  System_Collections_Generic_List_int__o *v48; // x27
  int klass; // w8
  BattleLogicFunction_o *v50; // x21
  DataMasterBase_WarMaster__WarEntity__int__o *v51; // x28
  __int64 v52; // x22
  __int64 v53; // x24
  BattleBuffData_BuffData_o *v54; // x19
  const MethodInfo *v55; // x2
  const MethodInfo *v56; // x3
  int32_t DispTurn; // w0
  _BOOL4 isProgressSelfTurn; // w8
  BattleActionData_BuffData_o *v59; // x24
  struct FunctionEntity_o *funcEnt; // x21
  bool IsCommandSideEffect; // w0
  System_Int32_array **v62; // x0
  System_String_array **v63; // x2
  System_String_array **v64; // x3
  System_Boolean_array **v65; // x4
  System_Int32_array **v66; // x5
  System_Int32_array *v67; // x6
  System_Int32_array *v68; // x7
  int32_t funcIndex; // w19
  bool v70; // w0
  const MethodInfo *v71; // x7
  __int64 v72; // x0
  BattleLogicFunction_ProcListInArgs_o *v73; // [xsp+0h] [xbp-80h]
  BattleLogicFunctionProcess_FunctionTargetCheck_o *v74; // [xsp+8h] [xbp-78h]
  int32_t v75; // [xsp+14h] [xbp-6Ch]
  BattleActionData_o *v76; // [xsp+18h] [xbp-68h]
  WarEntity_o *entity; // [xsp+28h] [xbp-58h] BYREF

  if ( (byte_418A7B0 & 1) == 0 )
  {
    sub_B2C35C(&BattleActionData_BuffData_TypeInfo, procArg);
    sub_B2C35C(&Method_DataManager_GetMasterData_BuffMaster___, v8);
    sub_B2C35C(&Method_DataMasterBase_BuffMaster__BuffEntity__int__TryGetEntity__, v9);
    sub_B2C35C(&Method_System_Linq_Enumerable_ToArray_BattleBuffData_BuffData___, v10);
    sub_B2C35C(&Method_System_Linq_Enumerable_Where_BattleBuffData_BuffData___, v11);
    sub_B2C35C(&Method_System_Func_BattleBuffData_BuffData__bool___ctor__, v12);
    sub_B2C35C(&System_Func_BattleBuffData_BuffData__bool__TypeInfo, v13);
    sub_B2C35C(&Method_System_Collections_Generic_HashSet_BattleBuffData_BuffData___ctor___67288832, v14);
    sub_B2C35C(&System_Collections_Generic_HashSet_BattleBuffData_BuffData__TypeInfo, v15);
    sub_B2C35C(&Method_System_Collections_Generic_List_int__Add__, v16);
    sub_B2C35C(&Method_System_Collections_Generic_List_int__ToArray__, v17);
    sub_B2C35C(&Method_System_Collections_Generic_List_int___ctor__, v18);
    sub_B2C35C(&System_Collections_Generic_List_int__TypeInfo, v19);
    sub_B2C35C(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v20);
    sub_B2C35C(&Method_BattleLogicFunction___c__DisplayClass106_0__functionMoveState_b__0__, v21);
    sub_B2C35C(&Method_BattleLogicFunction___c__DisplayClass106_0__functionMoveState_b__1__, v22);
    sub_B2C35C(&BattleLogicFunction___c__DisplayClass106_0_TypeInfo, v23);
    byte_418A7B0 = 1;
  }
  entity = 0LL;
  v24 = sub_B2C42C(BattleLogicFunction___c__DisplayClass106_0_TypeInfo);
  BattleLogicFunction___c__DisplayClass106_0___ctor((BattleLogicFunction___c__DisplayClass106_0_o *)v24, 0LL);
  if ( !funcTarget )
    goto LABEL_42;
  funcUnit_k__BackingField = funcTarget->fields._funcUnit_k__BackingField;
  if ( !funcUnit_k__BackingField )
    goto LABEL_42;
  targetId_k__BackingField = funcTarget->fields._targetId_k__BackingField;
  dataVals_k__BackingField = funcUnit_k__BackingField->fields._dataVals_k__BackingField;
  StealBuffInfoGroup = BattleLogicFunction__GetStealBuffInfoGroup(
                         this,
                         procArg,
                         mainAction,
                         dataVals_k__BackingField,
                         v27);
  if ( !this->fields.data )
    goto LABEL_42;
  v31 = StealBuffInfoGroup;
  ServantData = BattleData__getServantData(this->fields.data, targetId_k__BackingField, 0LL);
  BattleLogicFunction__ResetFamilyLinkageIdToStolenFamilyBuffs(
    (BattleLogicFunction_o *)ServantData,
    procArg,
    ServantData,
    v31,
    v33);
  if ( !v24 )
    goto LABEL_42;
  v75 = targetId_k__BackingField;
  v74 = funcTarget;
  v76 = mainAction;
  *(_DWORD *)(v24 + 16) = 0x1000000;
  if ( !v31 )
    goto LABEL_42;
  v34 = (System_Collections_Generic_IEnumerable_TSource__o *)RemovedBuffInfoGroup__RemovedLinkageBuffEnumerable(
                                                               v31,
                                                               0LL);
  v35 = (System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *)sub_B2C42C(System_Func_BattleBuffData_BuffData__bool__TypeInfo);
  System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool____ctor(
    v35,
    (Il2CppObject *)v24,
    Method_BattleLogicFunction___c__DisplayClass106_0__functionMoveState_b__0__,
    (const MethodInfo_2711C04 *)Method_System_Func_BattleBuffData_BuffData__bool___ctor__);
  v36 = (System_Collections_Generic_IEnumerable_T__o *)System_Linq_Enumerable__Where_WarBoardManager_WarBoardOnboardSkillTarget_(
                                                         v34,
                                                         (System_Func_TSource__bool__o *)v35,
                                                         (const MethodInfo_1A9F3E4 *)Method_System_Linq_Enumerable_Where_BattleBuffData_BuffData___);
  v37 = (System_Collections_Generic_HashSet_BattleBuffData_BuffData__o *)sub_B2C42C(System_Collections_Generic_HashSet_BattleBuffData_BuffData__TypeInfo);
  System_Collections_Generic_HashSet_BattleBuffData_BuffData____ctor(
    v37,
    v36,
    (const MethodInfo_2D8BB2C *)Method_System_Collections_Generic_HashSet_BattleBuffData_BuffData___ctor___67288832);
  *(_QWORD *)(v24 + 24) = v37;
  sub_B2C2F8((BattleServantConfConponent_o *)(v24 + 24), (System_Int32_array **)v37, v38, v39, v40, v41, v42, v43);
  v44 = (System_Collections_Generic_IEnumerable_TSource__o *)RemovedBuffInfoGroup__RemovedAllBuffEnumerable(v31, 0LL);
  v45 = (System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *)sub_B2C42C(System_Func_BattleBuffData_BuffData__bool__TypeInfo);
  System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool____ctor(
    v45,
    (Il2CppObject *)v24,
    Method_BattleLogicFunction___c__DisplayClass106_0__functionMoveState_b__1__,
    (const MethodInfo_2711C04 *)Method_System_Func_BattleBuffData_BuffData__bool___ctor__);
  v46 = System_Linq_Enumerable__Where_WarBoardManager_WarBoardOnboardSkillTarget_(
          v44,
          (System_Func_TSource__bool__o *)v45,
          (const MethodInfo_1A9F3E4 *)Method_System_Linq_Enumerable_Where_BattleBuffData_BuffData___);
  StealBuffInfoGroup = (RemovedBuffInfoGroup_o *)System_Linq_Enumerable__ToArray_DrawLotsDisplayMessage_DisplayedInGroup_SaveData_(
                                                   v46,
                                                   (const MethodInfo_1A9AFC8 *)Method_System_Linq_Enumerable_ToArray_BattleBuffData_BuffData___);
  if ( !StealBuffInfoGroup )
    goto LABEL_42;
  v47 = StealBuffInfoGroup;
  if ( StealBuffInfoGroup[1].klass )
  {
    v73 = procArg;
    v48 = (System_Collections_Generic_List_int__o *)sub_B2C42C(System_Collections_Generic_List_int__TypeInfo);
    System_Collections_Generic_List_int____ctor(
      v48,
      (const MethodInfo_2F6629C *)Method_System_Collections_Generic_List_int___ctor__);
    StealBuffInfoGroup = (RemovedBuffInfoGroup_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !StealBuffInfoGroup )
      goto LABEL_42;
    StealBuffInfoGroup = (RemovedBuffInfoGroup_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                     (DataManager_o *)StealBuffInfoGroup,
                                                     (const MethodInfo_17339EC *)Method_DataManager_GetMasterData_BuffMaster___);
    klass = (int)v47[1].klass;
    v50 = this;
    if ( klass >= 1 )
    {
      v51 = (DataMasterBase_WarMaster__WarEntity__int__o *)StealBuffInfoGroup;
      v52 = 0LL;
      v53 = 0LL;
      do
      {
        if ( (unsigned int)v52 >= klass )
        {
          v72 = sub_B2C460(StealBuffInfoGroup);
          sub_B2C400(v72, 0LL);
        }
        v54 = (BattleBuffData_BuffData_o *)*((_QWORD *)&v47[1].monitor + v52);
        if ( !v54 || !v51 )
          goto LABEL_42;
        StealBuffInfoGroup = (RemovedBuffInfoGroup_o *)DataMasterBase_WarMaster__WarEntity__int___TryGetEntity(
                                                         v51,
                                                         &entity,
                                                         v54->fields.buffId,
                                                         (const MethodInfo_24E412C *)Method_DataMasterBase_BuffMaster__BuffEntity__int__TryGetEntity__);
        if ( ((unsigned __int8)StealBuffInfoGroup & 1) != 0 )
        {
          StealBuffInfoGroup = (RemovedBuffInfoGroup_o *)BattleLogicFunction__IsAddStateFieldFlag(v50, v54, v55);
          if ( !ServantData )
            goto LABEL_42;
          BattleServantData__addBuff(ServantData, v54, (unsigned __int8)StealBuffInfoGroup & 1, 0, 1, 0LL);
          StealBuffInfoGroup = (RemovedBuffInfoGroup_o *)entity;
          if ( !entity )
            goto LABEL_42;
          if ( !BuffEntity__IsDisableMoveStateTurnChange((BuffEntity_o *)entity, 0LL) )
          {
            if ( v54->fields.turn <= 0 )
            {
              isProgressSelfTurn = v54->fields.isProgressSelfTurn;
            }
            else
            {
              DispTurn = BattleBuffData_BuffData__get_DispTurn(v54, 0LL);
              isProgressSelfTurn = v54->fields.isProgressSelfTurn;
              v54->fields.turn = 2 * DispTurn - isProgressSelfTurn;
            }
            v54->fields.isProgressEndEnemyTurn = ServantData->fields.isEnemy ^ !isProgressSelfTurn;
          }
          BattleLogicFunction__AfterAddedBuffProcess(v50, ServantData, (BuffEntity_o *)entity, v56);
          if ( v53 )
          {
            if ( !v48 )
              goto LABEL_42;
            System_Collections_Generic_List_int___Add(
              v48,
              v54->fields.addOrder,
              (const MethodInfo_2F66FF8 *)Method_System_Collections_Generic_List_int__Add__);
          }
          else
          {
            v59 = (BattleActionData_BuffData_o *)sub_B2C42C(BattleActionData_BuffData_TypeInfo);
            BattleActionData_BuffData___ctor(v59, 0LL);
            if ( !v59 )
              goto LABEL_42;
            v59->fields.targetId = v75;
            if ( !dataVals_k__BackingField )
              goto LABEL_42;
            StealBuffInfoGroup = (RemovedBuffInfoGroup_o *)v73;
            v59->fields.functionIndex = dataVals_k__BackingField->fields.funcIndex;
            if ( !v73 )
              goto LABEL_42;
            funcEnt = dataVals_k__BackingField->fields.funcEnt;
            IsCommandSideEffect = BattleLogicFunction_ProcListInArgs__get_IsCommandSideEffect(v73, 0LL);
            v53 = ((__int64 (__fastcall *)(BattleLogicFunctionProcess_FunctionTargetCheck_o *, BattleActionData_BuffData_o *, BattleBuffData_BuffData_o *, struct FunctionEntity_o *, bool, Il2CppMethodPointer))v74->klass->vtable._10_MakeAddActionBuffData.method)(
                    v74,
                    v59,
                    v54,
                    funcEnt,
                    IsCommandSideEffect,
                    v74->klass->vtable._11_GetConvertBuffEntity.methodPtr);
            StealBuffInfoGroup = (RemovedBuffInfoGroup_o *)v76;
            if ( !v76 )
              goto LABEL_42;
            BattleActionData__setBuffData(v76, (BattleActionData_BuffData_o *)v53, dataVals_k__BackingField, 0LL);
            v50 = this;
            StealBuffInfoGroup = (RemovedBuffInfoGroup_o *)this->fields.data;
            if ( !StealBuffInfoGroup )
              goto LABEL_42;
            BattleData__AddFreshBuffList((BattleData_o *)StealBuffInfoGroup, (BattleActionData_BuffData_o *)v53, 0LL);
          }
        }
        klass = (int)v47[1].klass;
        ++v52;
      }
      while ( (int)v52 < klass );
      if ( v53 )
      {
        if ( v48 )
        {
          v62 = (System_Int32_array **)System_Collections_Generic_List_int___ToArray(
                                         v48,
                                         (const MethodInfo_2F69104 *)Method_System_Collections_Generic_List_int__ToArray__);
          *(_QWORD *)(v53 + 144) = v62;
          sub_B2C2F8((BattleServantConfConponent_o *)(v53 + 144), v62, v63, v64, v65, v66, v67, v68);
          return;
        }
LABEL_42:
        sub_B2C434(StealBuffInfoGroup, v26);
      }
    }
  }
  else
  {
    if ( !dataVals_k__BackingField )
      goto LABEL_42;
    if ( !procArg )
      goto LABEL_42;
    funcIndex = dataVals_k__BackingField->fields.funcIndex;
    v70 = BattleLogicFunction_ProcListInArgs__get_IsCommandSideEffect(procArg, 0LL);
    StealBuffInfoGroup = (RemovedBuffInfoGroup_o *)BattleLogicFunction__getNoEffectObject(
                                                     this,
                                                     v75,
                                                     funcIndex,
                                                     dataVals_k__BackingField,
                                                     v70,
                                                     0LL,
                                                     0LL,
                                                     v71);
    if ( !mainAction )
      goto LABEL_42;
    BattleActionData__addAction(mainAction, (BattleActionData_o *)StealBuffInfoGroup, 0LL);
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
  BattleActionData_o *v23; // x23
  __int64 v24; // x1
  BattleData_o *data; // x0
  BattleData_o *v26; // x8
  BattleServantData_o *v27; // x22
  BattleServantData_o *ServantData; // x21
  System_Collections_Generic_List_int__o *v29; // x27
  System_Int32_array *TargetRarityList; // x28
  char v31; // w21
  int32_t v32; // w1
  int32_t Param; // w0
  int v34; // w8
  char v35; // w10
  System_Int32_array *buffIndv; // x20
  System_Int32_array *v37; // x22
  bool v38; // w9
  bool v39; // zf
  int32_t v40; // w0
  int32_t v41; // w0
  int32_t v42; // w0
  int32_t v43; // w0
  int32_t v44; // w0
  System_Array_o *v45; // x21
  bool v46; // w22
  bool IsOverChargeState; // w0
  int32_t NPFixedDamageValue; // w23
  BattleLogic_DamageProcessArgs_o *damageProcessArgs; // x26
  BattleLogic_o *logic; // x24
  System_Int32_array *v51; // x27
  bool IsIncludeIgnoreIndividuality; // w23
  BattleActionData_DamageData_o *v53; // x20
  char v54; // w22
  __int64 v56; // x0
  bool v57; // [xsp+34h] [xbp-8Ch]
  bool isRarityAtk; // [xsp+38h] [xbp-88h]
  int32_t typea; // [xsp+3Ch] [xbp-84h]
  BattleServantData_o *v60; // [xsp+40h] [xbp-80h]
  BattleServantData_o *v61; // [xsp+48h] [xbp-78h]
  BattleActionData_o *v62; // [xsp+58h] [xbp-68h]
  int32_t v63; // [xsp+64h] [xbp-5Ch]
  System_RuntimeFieldHandle_o v64; // 0:w1.4

  if ( (byte_418A78C & 1) == 0 )
  {
    sub_B2C35C(&BattleActionData_TypeInfo, *(_QWORD *)&playerId);
    sub_B2C35C(&BattleLogic_DamageProcessArgs_TypeInfo, v15);
    sub_B2C35C(&int___TypeInfo, v16);
    sub_B2C35C(&Method_System_Collections_Generic_List_int__Add__, v17);
    sub_B2C35C(&Method_System_Collections_Generic_List_int__ToArray__, v18);
    sub_B2C35C(&Method_System_Collections_Generic_List_int___ctor__, v19);
    sub_B2C35C(&System_Collections_Generic_List_int__TypeInfo, v20);
    sub_B2C35C(&DataVals_OverChargeState___TypeInfo, v21);
    sub_B2C35C(
      &Field__PrivateImplementationDetails__44BE0EBF7C907BA44AD83314C6AD0AA399AD5B73911C129D2CD6A85D4A056C90,
      v22);
    byte_418A78C = 1;
  }
  v23 = (BattleActionData_o *)sub_B2C42C(BattleActionData_TypeInfo);
  BattleActionData___ctor(v23, 0LL);
  data = this->fields.data;
  if ( !data )
    goto LABEL_38;
  data = (BattleData_o *)BattleData__getServantData(data, playerId, 0LL);
  v26 = this->fields.data;
  if ( !v26 )
    goto LABEL_38;
  v27 = (BattleServantData_o *)data;
  ServantData = BattleData__getServantData(v26, targetId, 0LL);
  v29 = (System_Collections_Generic_List_int__o *)sub_B2C42C(System_Collections_Generic_List_int__TypeInfo);
  System_Collections_Generic_List_int____ctor(
    v29,
    (const MethodInfo_2F6629C *)Method_System_Collections_Generic_List_int___ctor__);
  if ( !baseVals
    || (v60 = ServantData,
        v62 = v23,
        v63 = funcIndex,
        data = (BattleData_o *)DataVals__GetParam(baseVals, 3, 0, 0LL),
        !v29) )
  {
LABEL_38:
    sub_B2C434(data, v24);
  }
  System_Collections_Generic_List_int___Add(
    v29,
    (int32_t)data,
    (const MethodInfo_2F66FF8 *)Method_System_Collections_Generic_List_int__Add__);
  TargetRarityList = 0LL;
  v31 = 0;
  v61 = v27;
  typea = type;
  if ( (unsigned int)type > 0xB )
  {
LABEL_26:
    v35 = 0;
    v38 = 0;
    buffIndv = 0LL;
    v37 = 0LL;
    goto LABEL_29;
  }
  if ( ((1 << type) & 0x698) != 0 )
  {
    v32 = 7;
    goto LABEL_12;
  }
  if ( ((1 << type) & 0x60) != 0 )
  {
    v32 = 6;
LABEL_12:
    Param = DataVals__GetParam(baseVals, v32, 0, 0LL);
    System_Collections_Generic_List_int___Add(
      v29,
      Param,
      (const MethodInfo_2F66FF8 *)Method_System_Collections_Generic_List_int__Add__);
    v34 = type - 3;
    TargetRarityList = 0LL;
    v31 = 0;
    v35 = 0;
    buffIndv = 0LL;
    v37 = 0LL;
    v38 = 0;
    switch ( v34 )
    {
      case 0:
      case 1:
        v37 = (System_Int32_array *)sub_B2C374(int___TypeInfo, 1LL);
        data = (BattleData_o *)DataVals__GetParam(baseVals, 6, 0, 0LL);
        if ( !v37 )
          goto LABEL_38;
        if ( !v37->max_length )
          goto LABEL_39;
        v31 = 0;
        v35 = 0;
        TargetRarityList = 0LL;
        v38 = 0;
        buffIndv = 0LL;
        v37->m_Items[1] = (int)data;
        break;
      case 2:
      case 3:
      case 5:
        goto LABEL_29;
      case 4:
        buffIndv = (System_Int32_array *)sub_B2C374(int___TypeInfo, 1LL);
        data = (BattleData_o *)DataVals__GetParam(baseVals, 6, 0, 0LL);
        if ( !buffIndv )
          goto LABEL_38;
        if ( !buffIndv->max_length )
        {
LABEL_39:
          v56 = sub_B2C460(data);
          sub_B2C400(v56, 0LL);
        }
        v31 = 0;
        v35 = 0;
        TargetRarityList = 0LL;
        v38 = 0;
        v37 = 0LL;
        buffIndv->m_Items[1] = (int)data;
        break;
      case 6:
        TargetRarityList = DataVals__GetTargetRarityList(baseVals, 0LL);
        v31 = 0;
        v38 = 0;
        buffIndv = 0LL;
        v37 = 0LL;
        v35 = 1;
        goto LABEL_29;
      case 7:
        v37 = DataVals__GetAndCheckIndividuality(baseVals, 0LL);
        v31 = 0;
        v35 = 0;
        TargetRarityList = 0LL;
        v38 = 0;
        buffIndv = 0LL;
        goto LABEL_29;
      default:
        goto LABEL_26;
    }
    goto LABEL_29;
  }
  v39 = type == 11;
  v35 = 0;
  v38 = 0;
  buffIndv = 0LL;
  v37 = 0LL;
  if ( v39 )
  {
    v29 = (System_Collections_Generic_List_int__o *)sub_B2C42C(System_Collections_Generic_List_int__TypeInfo);
    System_Collections_Generic_List_int____ctor(
      v29,
      (const MethodInfo_2F6629C *)Method_System_Collections_Generic_List_int___ctor__);
    data = (BattleData_o *)DataVals__GetParam(baseVals, 3, 0, 0LL);
    if ( !v29 )
      goto LABEL_38;
    System_Collections_Generic_List_int___Add(
      v29,
      (int32_t)data,
      (const MethodInfo_2F66FF8 *)Method_System_Collections_Generic_List_int__Add__);
    v40 = DataVals__GetParam(baseVals, 7, 0, 0LL);
    System_Collections_Generic_List_int___Add(
      v29,
      v40,
      (const MethodInfo_2F66FF8 *)Method_System_Collections_Generic_List_int__Add__);
    v41 = DataVals__GetParam(baseVals, 59, 0, 0LL);
    System_Collections_Generic_List_int___Add(
      v29,
      v41,
      (const MethodInfo_2F66FF8 *)Method_System_Collections_Generic_List_int__Add__);
    v42 = DataVals__GetParam(baseVals, 60, 0, 0LL);
    System_Collections_Generic_List_int___Add(
      v29,
      v42,
      (const MethodInfo_2F66FF8 *)Method_System_Collections_Generic_List_int__Add__);
    v43 = DataVals__GetParam(baseVals, 4, 0, 0LL);
    System_Collections_Generic_List_int___Add(
      v29,
      v43,
      (const MethodInfo_2F66FF8 *)Method_System_Collections_Generic_List_int__Add__);
    v44 = DataVals__GetParam(baseVals, 6, 0, 0LL);
    System_Collections_Generic_List_int___Add(
      v29,
      v44,
      (const MethodInfo_2F66FF8 *)Method_System_Collections_Generic_List_int__Add__);
    buffIndv = DataVals__GetTargetList(baseVals, 0LL);
    v45 = (System_Array_o *)sub_B2C374(DataVals_OverChargeState___TypeInfo, 3LL);
    v64.fields.value = Field__PrivateImplementationDetails__44BE0EBF7C907BA44AD83314C6AD0AA399AD5B73911C129D2CD6A85D4A056C90;
    System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray_43133304(v45, v64, 0LL);
    DataVals__UpdateOverChargeEachFunc(baseVals, (DataVals_OverChargeState_array *)v45, 0LL);
    v46 = DataVals__IsOverChargeState(baseVals, 2, 0LL) || DataVals__IsOverChargeState(baseVals, 8, 0LL);
    v31 = 1;
    IsOverChargeState = DataVals__IsOverChargeState(baseVals, 1, 0LL);
    v35 = 0;
    TargetRarityList = 0LL;
    v38 = v46 && !IsOverChargeState;
    v37 = buffIndv;
  }
LABEL_29:
  v57 = v38;
  isRarityAtk = v35;
  NPFixedDamageValue = DataVals__GetNPFixedDamageValue(baseVals, 0LL);
  damageProcessArgs = (BattleLogic_DamageProcessArgs_o *)sub_B2C42C(BattleLogic_DamageProcessArgs_TypeInfo);
  BattleLogic_DamageProcessArgs___ctor(damageProcessArgs, 0, NPFixedDamageValue, 0LL);
  logic = this->fields.logic;
  v51 = System_Collections_Generic_List_int___ToArray(
          v29,
          (const MethodInfo_2F69104 *)Method_System_Collections_Generic_List_int__ToArray__);
  IsIncludeIgnoreIndividuality = DataVals__IsIncludeIgnoreIndividuality(baseVals, 0LL);
  data = (BattleData_o *)DataVals__isParam(baseVals, 90, 0LL);
  if ( !logic )
    goto LABEL_38;
  data = (BattleData_o *)BattleLogic__getFunctionNpDamagelist(
                           logic,
                           v61,
                           v60,
                           v51,
                           v63,
                           typea,
                           action,
                           v37,
                           buffIndv,
                           TargetRarityList,
                           IsIncludeIgnoreIndividuality,
                           (unsigned __int8)data & 1,
                           damageProcessArgs,
                           0LL);
  v53 = (BattleActionData_DamageData_o *)data;
  if ( (unsigned int)(typea - 3) < 8 && ((0x93u >> (typea - 3)) & 1) != 0 )
    v54 = 1;
  else
    v54 = v31 & v57;
  if ( !data )
    goto LABEL_38;
  BattleActionData_DamageData__addAttackSideEffectAction((BattleActionData_DamageData_o *)data, 80, 0LL);
  if ( !v62 )
    goto LABEL_38;
  BattleActionData__setDamageData(v62, v53, baseVals, v54, isRarityAtk, 0LL);
  return v62;
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
  __int64 v16; // x1
  __int64 v17; // x1
  BattleActionData_o *v18; // x20
  __int64 v19; // x1
  void *data; // x0
  struct BattleData_o *v21; // x8
  System_Collections_Generic_List_USFGOSetAudioGroupIndexConditional_WeightIndex__o *player_datalist; // x21
  struct BattleLogicFunction___c_StaticFields *static_fields; // x8
  System_Action_DrawLotsDisplayMessage_DisplayedInGroup_SaveData__o *_9__87_0; // x22
  Il2CppObject *v25; // x23
  struct BattleLogicFunction___c_StaticFields *v26; // x0
  System_String_array **v27; // x2
  System_String_array **v28; // x3
  System_Boolean_array **v29; // x4
  System_Int32_array **v30; // x5
  System_Int32_array *v31; // x6
  System_Int32_array *v32; // x7
  struct BattleData_o *v33; // x8
  System_Collections_Generic_List_TitleInfoControl_EventEndTimeInfo__o *v34; // x21
  struct BattleLogicFunction___c_StaticFields *v35; // x8
  System_Comparison_TitleInfoControl_EventEndTimeInfo__o *_9__87_1; // x22
  Il2CppObject *v37; // x23
  struct BattleLogicFunction___c_StaticFields *v38; // x0
  System_String_array **v39; // x2
  System_String_array **v40; // x3
  System_Boolean_array **v41; // x4
  System_Int32_array **v42; // x5
  System_Int32_array *v43; // x6
  System_Int32_array *v44; // x7
  struct BattleData_o *v45; // x8
  int v46; // w8
  unsigned int *v47; // x21
  int32_t v48; // w23
  BattleServantData_o *v49; // x22
  unsigned __int64 v50; // x23
  __int64 v51; // x8
  unsigned __int64 v52; // x9
  unsigned __int64 v53; // x8
  __int64 v54; // x22
  struct BattleData_o *v55; // x8
  struct System_Int32_array *p_entryid; // x8
  BattleLogicTask_o *v57; // x21
  __int64 v59; // x0

  if ( (byte_418A79D & 1) == 0 )
  {
    sub_B2C35C(&Method_System_Action_BattleServantData___ctor__, *(_QWORD *)&actionId);
    sub_B2C35C(&System_Action_BattleServantData__TypeInfo, v7);
    sub_B2C35C(&BattleActionData_TypeInfo, v8);
    sub_B2C35C(&BattleLogicTask_TypeInfo, v9);
    sub_B2C35C(&Method_System_Comparison_BattleServantData___ctor__, v10);
    sub_B2C35C(&System_Comparison_BattleServantData__TypeInfo, v11);
    sub_B2C35C(&Method_System_Collections_Generic_List_BattleServantData__ForEach__, v12);
    sub_B2C35C(&Method_System_Collections_Generic_List_BattleServantData__Sort__, v13);
    sub_B2C35C(&Method_System_Collections_Generic_List_BattleServantData__ToArray__, v14);
    sub_B2C35C(&Method_BattleLogicFunction___c__functionPtShuffle_b__87_0__, v15);
    sub_B2C35C(&Method_BattleLogicFunction___c__functionPtShuffle_b__87_1__, v16);
    sub_B2C35C(&BattleLogicFunction___c_TypeInfo, v17);
    byte_418A79D = 1;
  }
  v18 = (BattleActionData_o *)sub_B2C42C(BattleActionData_TypeInfo);
  BattleActionData___ctor(v18, 0LL);
  data = this->fields.data;
  if ( !data )
    goto LABEL_57;
  BattleData__SubBuffFromPT_18448196((BattleData_o *)data, 0LL, 0LL);
  data = this->fields.data;
  if ( !data )
    goto LABEL_57;
  BattleData__SubBuffExitSvt((BattleData_o *)data, 0LL, 0LL);
  v21 = this->fields.data;
  if ( !v21 )
    goto LABEL_57;
  player_datalist = (System_Collections_Generic_List_USFGOSetAudioGroupIndexConditional_WeightIndex__o *)v21->fields.player_datalist;
  data = BattleLogicFunction___c_TypeInfo;
  if ( (BYTE3(BattleLogicFunction___c_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !BattleLogicFunction___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BattleLogicFunction___c_TypeInfo);
    data = BattleLogicFunction___c_TypeInfo;
  }
  static_fields = (struct BattleLogicFunction___c_StaticFields *)*((_QWORD *)data + 23);
  _9__87_0 = (System_Action_DrawLotsDisplayMessage_DisplayedInGroup_SaveData__o *)static_fields->__9__87_0;
  if ( !_9__87_0 )
  {
    if ( (*((_BYTE *)data + 307) & 4) != 0 && !*((_DWORD *)data + 56) )
    {
      j_il2cpp_runtime_class_init_0(data);
      static_fields = BattleLogicFunction___c_TypeInfo->static_fields;
    }
    v25 = (Il2CppObject *)static_fields->__9;
    _9__87_0 = (System_Action_DrawLotsDisplayMessage_DisplayedInGroup_SaveData__o *)sub_B2C42C(System_Action_BattleServantData__TypeInfo);
    System_Action_DrawLotsDisplayMessage_DisplayedInGroup_SaveData____ctor(
      _9__87_0,
      v25,
      Method_BattleLogicFunction___c__functionPtShuffle_b__87_0__,
      (const MethodInfo_24BBAD8 *)Method_System_Action_BattleServantData___ctor__);
    v26 = BattleLogicFunction___c_TypeInfo->static_fields;
    v26->__9__87_0 = (struct System_Action_BattleServantData__o *)_9__87_0;
    sub_B2C2F8(
      (BattleServantConfConponent_o *)&v26->__9__87_0,
      (System_Int32_array **)_9__87_0,
      v27,
      v28,
      v29,
      v30,
      v31,
      v32);
  }
  if ( !player_datalist )
    goto LABEL_57;
  System_Collections_Generic_List_USFGOSetAudioGroupIndexConditional_WeightIndex___ForEach(
    player_datalist,
    (System_Action_T__o *)_9__87_0,
    (const MethodInfo_2EF5178 *)Method_System_Collections_Generic_List_BattleServantData__ForEach__);
  v33 = this->fields.data;
  if ( !v33 )
    goto LABEL_57;
  data = BattleLogicFunction___c_TypeInfo;
  v34 = (System_Collections_Generic_List_TitleInfoControl_EventEndTimeInfo__o *)v33->fields.player_datalist;
  if ( (BYTE3(BattleLogicFunction___c_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !BattleLogicFunction___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BattleLogicFunction___c_TypeInfo);
    data = BattleLogicFunction___c_TypeInfo;
  }
  v35 = (struct BattleLogicFunction___c_StaticFields *)*((_QWORD *)data + 23);
  _9__87_1 = (System_Comparison_TitleInfoControl_EventEndTimeInfo__o *)v35->__9__87_1;
  if ( !_9__87_1 )
  {
    if ( (*((_BYTE *)data + 307) & 4) != 0 && !*((_DWORD *)data + 56) )
    {
      j_il2cpp_runtime_class_init_0(data);
      v35 = BattleLogicFunction___c_TypeInfo->static_fields;
    }
    v37 = (Il2CppObject *)v35->__9;
    _9__87_1 = (System_Comparison_TitleInfoControl_EventEndTimeInfo__o *)sub_B2C42C(System_Comparison_BattleServantData__TypeInfo);
    System_Comparison_TitleInfoControl_EventEndTimeInfo____ctor(
      _9__87_1,
      v37,
      Method_BattleLogicFunction___c__functionPtShuffle_b__87_1__,
      (const MethodInfo_25D8DF8 *)Method_System_Comparison_BattleServantData___ctor__);
    v38 = BattleLogicFunction___c_TypeInfo->static_fields;
    v38->__9__87_1 = (struct System_Comparison_BattleServantData__o *)_9__87_1;
    sub_B2C2F8(
      (BattleServantConfConponent_o *)&v38->__9__87_1,
      (System_Int32_array **)_9__87_1,
      v39,
      v40,
      v41,
      v42,
      v43,
      v44);
  }
  if ( !v34 )
    goto LABEL_57;
  System_Collections_Generic_List_TitleInfoControl_EventEndTimeInfo___Sort(
    v34,
    (System_Comparison_T__o *)_9__87_1,
    (const MethodInfo_2EF653C *)Method_System_Collections_Generic_List_BattleServantData__Sort__);
  v45 = this->fields.data;
  if ( !v45 )
    goto LABEL_57;
  data = v45->fields.player_datalist;
  if ( !data )
    goto LABEL_57;
  data = System_Collections_Generic_List_WarBoardUiData_SaveData___ToArray(
           (System_Collections_Generic_List_WarBoardUiData_SaveData__o *)data,
           (const MethodInfo_2EF65AC *)Method_System_Collections_Generic_List_BattleServantData__ToArray__);
  if ( !data )
    goto LABEL_57;
  v46 = *((_DWORD *)data + 6);
  v47 = (unsigned int *)data;
  if ( v46 >= 1 )
  {
    v48 = 0;
    while ( 1 )
    {
      if ( v48 >= (unsigned int)v46 )
      {
LABEL_58:
        v59 = sub_B2C460(data);
        sub_B2C400(v59, 0LL);
      }
      v49 = *(BattleServantData_o **)&v47[2 * v48 + 8];
      if ( !v49 )
        break;
      if ( v49->fields.isEntry )
      {
        data = (void *)BattleServantData__isAlive(v49, 0, 0LL);
        if ( ((unsigned __int8)data & 1) != 0 )
          v49->fields.isEntry = 0;
      }
      v49->fields.deckIndex = v48;
      v46 = v47[6];
      if ( ++v48 >= v46 )
        goto LABEL_36;
    }
LABEL_57:
    sub_B2C434(data, v19);
  }
LABEL_36:
  data = this->fields.data;
  if ( !data )
    goto LABEL_57;
  v50 = 0LL;
  while ( 1 )
  {
    v51 = *((_QWORD *)data + 36);
    if ( !v51 )
      goto LABEL_57;
    v52 = *(unsigned int *)(v51 + 24);
    if ( (__int64)v50 >= (int)v52 )
      break;
    if ( v50 >= v52 )
      goto LABEL_58;
    *(_DWORD *)(v51 + 4 * v50 + 32) = -1;
    v53 = v47[6];
    if ( (__int64)v50 < (int)v53 )
    {
      if ( v50 >= v53 )
        goto LABEL_58;
      v54 = *(_QWORD *)&v47[2 * v50 + 8];
      if ( !v54 )
        goto LABEL_57;
      data = (void *)BattleServantData__isAlive(*(BattleServantData_o **)&v47[2 * v50 + 8], 0, 0LL);
      if ( ((unsigned __int8)data & 1) != 0 )
      {
        v55 = this->fields.data;
        if ( !v55 )
          goto LABEL_57;
        p_entryid = v55->fields.p_entryid;
        if ( !p_entryid )
          goto LABEL_57;
        if ( v50 >= p_entryid->max_length )
          goto LABEL_58;
        p_entryid->m_Items[v50 + 1] = *(_DWORD *)(v54 + 24);
        *(_BYTE *)(v54 + 452) = 1;
        *(_BYTE *)(v54 + 517) = 1;
      }
    }
    data = this->fields.data;
    ++v50;
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
  if ( !v18 )
    goto LABEL_57;
  v18->fields.redrawCommandCard = 1;
  v57 = (BattleLogicTask_o *)sub_B2C42C(BattleLogicTask_TypeInfo);
  BattleLogicTask___ctor(v57, 0LL);
  if ( !v57 )
    goto LABEL_57;
  BattleLogicTask__setCheckEntryFunction(v57, 0LL);
  data = this->fields.logic;
  if ( !data )
    goto LABEL_57;
  BattleLogic__AddBattleLogicTask((BattleLogic_o *)data, v57, 0LL);
  return v18;
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
  int v23; // w19
  System_Int32_array **v25; // x0
  System_String_array **v26; // x2
  System_String_array **v27; // x3
  System_Boolean_array **v28; // x4
  System_Int32_array **v29; // x5
  System_Int32_array *v30; // x6
  System_Int32_array *v31; // x7
  System_Int32_array **v32; // x0
  System_String_array **v33; // x2
  System_String_array **v34; // x3
  System_Boolean_array **v35; // x4
  System_Int32_array **v36; // x5
  System_Int32_array *v37; // x6
  System_Int32_array *v38; // x7
  System_String_array **v39; // x2
  System_String_array **v40; // x3
  System_Boolean_array **v41; // x4
  System_Int32_array **v42; // x5
  System_Int32_array *v43; // x6
  System_Int32_array *v44; // x7
  System_Int32_array **v45; // x0
  System_String_array **v46; // x2
  System_String_array **v47; // x3
  System_Boolean_array **v48; // x4
  System_Int32_array **v49; // x5
  System_Int32_array *v50; // x6
  System_Int32_array *v51; // x7
  System_Int32_array **v52; // x0
  System_String_array **v53; // x2
  System_String_array **v54; // x3
  System_Boolean_array **v55; // x4
  System_Int32_array **v56; // x5
  System_Int32_array *v57; // x6
  System_Int32_array *v58; // x7
  System_Int32_array **v59; // x0
  System_String_array **v60; // x2
  System_String_array **v61; // x3
  System_Boolean_array **v62; // x4
  System_Int32_array **v63; // x5
  System_Int32_array *v64; // x6
  System_Int32_array *v65; // x7
  struct BattleData_o *v66; // x8
  int32_t uniqueId; // w19
  int32_t v68; // w21
  bool IsOpponentPTUniqueID; // w0
  __int64 v71; // x0
  int32_t bId; // [xsp+Ch] [xbp-54h]

  if ( (byte_418A79B & 1) == 0 )
  {
    sub_B2C35C(&BattleActionData_TypeInfo, *(_QWORD *)&playerId);
    sub_B2C35C(&BattleActionData_DamageData_TypeInfo, v11);
    sub_B2C35C(&int___TypeInfo, v12);
    sub_B2C35C(&BattleBuffData_ShowBuffData___TypeInfo, v13);
    byte_418A79B = 1;
  }
  v14 = (BattleActionData_o *)sub_B2C42C(BattleActionData_TypeInfo);
  BattleActionData___ctor(v14, 0LL);
  data = (__int64)this->fields.data;
  if ( !data )
    goto LABEL_27;
  bId = playerId;
  data = (__int64)BattleData__getServantData((BattleData_o *)data, playerId, 0LL);
  if ( !this->fields.data )
    goto LABEL_27;
  v17 = (BattleServantData_o *)data;
  ServantData = BattleData__getServantData(this->fields.data, targetId, 0LL);
  v19 = sub_B2C42C(BattleActionData_DamageData_TypeInfo);
  BattleActionData_DamageData___ctor((BattleActionData_DamageData_o *)v19, 0LL);
  if ( !v17 )
    goto LABEL_27;
  data = BattleServantData__getAccumulationDamage(v17, 0LL);
  if ( !baseVals )
    goto LABEL_27;
  v20 = DataVals__GetValue(baseVals, 0LL) * (__int64)(int)data;
  data = (__int64)this->fields.data;
  v21 = (double)v20 / 1000.0;
  if ( v21 == INFINITY )
    v21 = -v21;
  if ( !data )
    goto LABEL_27;
  v22 = (int)v21;
  data = BattleData__IsDeadOkTurn((BattleData_o *)data, targetId, 0LL);
  if ( (data & 1) == 0 )
  {
    if ( !ServantData )
      goto LABEL_27;
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
    goto LABEL_27;
  *(_DWORD *)(v19 + 28) = targetId;
  *(_DWORD *)(v19 + 16) = funcIndex;
  *(_WORD *)(v19 + 32) = 0;
  *(_BYTE *)(v19 + 34) = 0;
  *(_DWORD *)(v19 + 36) = 0;
  *(_BYTE *)(v19 + 40) = 0;
  v25 = (System_Int32_array **)sub_B2C374(BattleBuffData_ShowBuffData___TypeInfo, 0LL);
  *(_QWORD *)(v19 + 64) = v25;
  sub_B2C2F8((BattleServantConfConponent_o *)(v19 + 64), v25, v26, v27, v28, v29, v30, v31);
  v32 = (System_Int32_array **)sub_B2C374(BattleBuffData_ShowBuffData___TypeInfo, 0LL);
  *(_QWORD *)(v19 + 72) = v32;
  sub_B2C2F8((BattleServantConfConponent_o *)(v19 + 72), v32, v33, v34, v35, v36, v37, v38);
  data = sub_B2C374(int___TypeInfo, 1LL);
  if ( !data )
    goto LABEL_27;
  if ( !*(_DWORD *)(data + 24) )
  {
    v71 = sub_B2C460(data);
    sub_B2C400(v71, 0LL);
  }
  *(_DWORD *)(data + 32) = v22;
  *(_QWORD *)(v19 + 96) = data;
  sub_B2C2F8((BattleServantConfConponent_o *)(v19 + 96), (System_Int32_array **)data, v39, v40, v41, v42, v43, v44);
  v45 = (System_Int32_array **)sub_B2C374(int___TypeInfo, 0LL);
  *(_QWORD *)(v19 + 104) = v45;
  sub_B2C2F8((BattleServantConfConponent_o *)(v19 + 104), v45, v46, v47, v48, v49, v50, v51);
  v52 = (System_Int32_array **)sub_B2C374(int___TypeInfo, 0LL);
  *(_QWORD *)(v19 + 112) = v52;
  sub_B2C2F8((BattleServantConfConponent_o *)(v19 + 112), v52, v53, v54, v55, v56, v57, v58);
  v59 = (System_Int32_array **)sub_B2C374(int___TypeInfo, 0LL);
  *(_QWORD *)(v19 + 120) = v59;
  sub_B2C2F8((BattleServantConfConponent_o *)(v19 + 120), v59, v60, v61, v62, v63, v64, v65);
  if ( !ServantData )
    goto LABEL_27;
  BattleServantData__provisionalDamage(ServantData, v22, 0LL);
  BattleServantData__ResultDamage(ServantData, v22, v17, 0LL, 0, 0LL);
  data = BattleServantData__isLogicResultAlive(ServantData, 0LL);
  if ( (data & 1) == 0 )
  {
    v66 = this->fields.data;
    if ( !v66 )
      goto LABEL_27;
    ServantData->fields.deadTurn = v66->fields.typeTurn;
  }
  BattleActionData_DamageData__addAttackSideEffectAction((BattleActionData_DamageData_o *)v19, 80, 0LL);
  if ( !v14
    || (BattleActionData__setDamageData(v14, (BattleActionData_DamageData_o *)v19, baseVals, 0, 0, 0LL),
        (data = (__int64)this->fields.data) == 0) )
  {
LABEL_27:
    sub_B2C434(data, v15);
  }
  uniqueId = v17->fields.uniqueId;
  v68 = *(_DWORD *)(data + 188);
  IsOpponentPTUniqueID = BattleData__IsOpponentPTUniqueID((BattleData_o *)data, targetId, bId, 0LL);
  BattleServantData__setActionHistory(ServantData, uniqueId, 1, v68, IsOpponentPTUniqueID, 0LL);
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
  __int64 v12; // x1
  BattleData_o *data; // x0
  struct BattleData_o *v14; // x8
  BattleData_o *v15; // x23
  System_Collections_Generic_IEnumerable_TSource__o *enemy_datalist; // x21
  BattleLogicFunction___c_c *v17; // x0
  struct BattleLogicFunction___c_StaticFields *static_fields; // x8
  System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *_9__81_0; // x22
  Il2CppObject *v20; // x24
  struct BattleLogicFunction___c_StaticFields *v21; // x0
  System_String_array **v22; // x2
  System_String_array **v23; // x3
  System_Boolean_array **v24; // x4
  System_Int32_array **v25; // x5
  System_Int32_array *v26; // x6
  System_Int32_array *v27; // x7
  BattleActionData_o *v28; // x21
  int32_t Param; // w24
  int32_t v30; // w22
  BattleServantData_o *EnemyServantData; // x24
  BattleServantData_o *EnemyServantDataFromNpcId; // x22
  struct BattleData_o *v33; // x8
  int v34; // w9
  struct System_Int32_array *e_entryid; // x10
  int max_length; // w10
  struct System_Int32_array *v37; // x10
  BattleActionData_o *result; // x0
  int32_t DeckIndex; // w23
  struct BattleData_o *v40; // x8
  struct System_Int32_array *v41; // x9
  int32_t v42; // w10
  int32_t v43; // w25
  int32_t *p_deckIndex; // x26
  unsigned __int64 v45; // x10
  unsigned __int64 v46; // x11
  struct BattleData_o *v47; // x8
  unsigned __int64 v48; // x9
  struct System_Int32_array *v49; // x10
  unsigned __int64 v50; // x11
  char *v51; // x10
  __int64 v52; // x0

  if ( (byte_418A797 & 1) == 0 )
  {
    sub_B2C35C(&BattleActionData_TypeInfo, funcEnt);
    sub_B2C35C(&Method_System_Linq_Enumerable_Count_BattleServantData____67413704, v8);
    sub_B2C35C(&Method_System_Func_BattleServantData__bool___ctor__, v9);
    sub_B2C35C(&System_Func_BattleServantData__bool__TypeInfo, v10);
    sub_B2C35C(&Method_BattleLogicFunction___c__functionReplaceEnemyMember_b__81_0__, v11);
    sub_B2C35C(&BattleLogicFunction___c_TypeInfo, v12);
    byte_418A797 = 1;
  }
  data = this->fields.data;
  if ( !data )
    goto LABEL_68;
  data = (BattleData_o *)BattleData__getAliveFieldEnemyServantIDList(data, 0, 0LL);
  v14 = this->fields.data;
  if ( !v14 )
    goto LABEL_68;
  v15 = data;
  enemy_datalist = (System_Collections_Generic_IEnumerable_TSource__o *)v14->fields.enemy_datalist;
  v17 = BattleLogicFunction___c_TypeInfo;
  if ( (BYTE3(BattleLogicFunction___c_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !BattleLogicFunction___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BattleLogicFunction___c_TypeInfo);
    v17 = BattleLogicFunction___c_TypeInfo;
  }
  static_fields = v17->static_fields;
  _9__81_0 = (System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *)static_fields->__9__81_0;
  if ( !_9__81_0 )
  {
    if ( (BYTE3(v17->vtable._0_Equals.methodPtr) & 4) != 0 && !v17->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v17);
      static_fields = BattleLogicFunction___c_TypeInfo->static_fields;
    }
    v20 = (Il2CppObject *)static_fields->__9;
    _9__81_0 = (System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *)sub_B2C42C(System_Func_BattleServantData__bool__TypeInfo);
    System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool____ctor(
      _9__81_0,
      v20,
      Method_BattleLogicFunction___c__functionReplaceEnemyMember_b__81_0__,
      (const MethodInfo_2711C04 *)Method_System_Func_BattleServantData__bool___ctor__);
    v21 = BattleLogicFunction___c_TypeInfo->static_fields;
    v21->__9__81_0 = (struct System_Func_BattleServantData__bool__o *)_9__81_0;
    sub_B2C2F8(
      (BattleServantConfConponent_o *)&v21->__9__81_0,
      (System_Int32_array **)_9__81_0,
      v22,
      v23,
      v24,
      v25,
      v26,
      v27);
  }
  data = (BattleData_o *)System_Linq_Enumerable__Count_WarBoardAIRoute_RouteData_(
                           enemy_datalist,
                           (System_Func_TSource__bool__o *)_9__81_0,
                           (const MethodInfo_1A8D348 *)Method_System_Linq_Enumerable_Count_BattleServantData____67413704);
  if ( (int)data < 4 )
    return 0LL;
  if ( !v15 )
    goto LABEL_68;
  if ( !v15->fields.rootfsm )
    return 0LL;
  v28 = (BattleActionData_o *)sub_B2C42C(BattleActionData_TypeInfo);
  BattleActionData___ctor(v28, 0LL);
  if ( !baseVals )
    goto LABEL_68;
  Param = DataVals__GetParam(baseVals, 47, 0, 0LL);
  data = (BattleData_o *)DataVals__GetParam(baseVals, 48, 0, 0LL);
  if ( !this->fields.data )
    goto LABEL_68;
  v30 = (int)data;
  data = (BattleData_o *)BattleData__getEnemyServantDataFromNpcId(this->fields.data, Param, 0LL);
  if ( !this->fields.data )
    goto LABEL_68;
  EnemyServantData = (BattleServantData_o *)data;
  EnemyServantDataFromNpcId = BattleData__getEnemyServantDataFromNpcId(this->fields.data, v30, 0LL);
  if ( !EnemyServantData )
  {
    data = (BattleData_o *)DataVals__GetParam(baseVals, 49, 0, 0LL);
    v33 = this->fields.data;
    v34 = (_DWORD)data - 1;
    if ( (int)data - 1 < 0 )
    {
      if ( !v33 )
        goto LABEL_68;
      v34 = 0;
    }
    else
    {
      if ( !v33 )
        goto LABEL_68;
      e_entryid = v33->fields.e_entryid;
      if ( !e_entryid )
        goto LABEL_68;
      max_length = e_entryid->max_length;
      if ( v34 >= max_length )
        v34 = max_length - 1;
    }
    v37 = v33->fields.e_entryid;
    if ( !v37 )
      goto LABEL_68;
    if ( v34 >= v37->max_length )
      goto LABEL_69;
    data = (BattleData_o *)BattleData__getEnemyServantData(this->fields.data, v37->m_Items[v34 + 1], 0LL);
    if ( !data )
      goto LABEL_68;
    EnemyServantData = (BattleServantData_o *)data;
    data = (BattleData_o *)BattleServantData__isDead((BattleServantData_o *)data, 0LL);
    if ( ((unsigned __int8)data & 1) != 0 )
    {
      if ( !LODWORD(v15->fields.rootfsm) )
        goto LABEL_69;
      data = this->fields.data;
      if ( !data )
        goto LABEL_68;
      EnemyServantData = BattleData__getEnemyServantData(data, (int32_t)v15->fields.fsm, 0LL);
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
    v40 = this->fields.data;
    if ( v40 )
    {
      v41 = v40->fields.e_entryid;
      if ( v41 )
      {
        v42 = v41->max_length;
        v43 = (int)data;
        if ( DeckIndex >= v42 )
          goto LABEL_49;
        if ( DeckIndex < (unsigned int)v42 )
        {
          if ( v41->m_Items[DeckIndex + 1] == EnemyServantData->fields.uniqueId )
          {
            p_deckIndex = &EnemyServantData->fields.deckIndex;
            goto LABEL_57;
          }
LABEL_49:
          v45 = 0LL;
          p_deckIndex = &EnemyServantData->fields.deckIndex;
          while ( 1 )
          {
            v46 = v41->max_length;
            if ( (__int64)v45 >= (int)v46 )
              break;
            if ( v45 >= v46 )
              goto LABEL_69;
            if ( v41->m_Items[v45 + 1] != EnemyServantData->fields.uniqueId
              || (*p_deckIndex = v45, (v40 = this->fields.data) != 0LL) )
            {
              v41 = v40->fields.e_entryid;
              ++v45;
              if ( v41 )
                continue;
            }
            goto LABEL_68;
          }
          data = (BattleData_o *)BattleServantData__getDeckIndex(EnemyServantData, 0LL);
          DeckIndex = (int)data;
LABEL_57:
          *p_deckIndex = v43;
          EnemyServantDataFromNpcId->fields.deckIndex = DeckIndex;
          v47 = this->fields.data;
          if ( v47 )
          {
            v48 = 0LL;
            while ( 1 )
            {
              v49 = v47->fields.e_entryid;
              if ( !v49 )
                goto LABEL_68;
              v50 = v49->max_length;
              if ( (__int64)v48 >= (int)v50 )
                break;
              if ( v48 >= v50 )
                goto LABEL_69;
              v51 = (char *)v49 + 4 * v48;
              if ( *((_DWORD *)v51 + 8) == EnemyServantData->fields.uniqueId )
              {
                *((_DWORD *)v51 + 8) = EnemyServantDataFromNpcId->fields.uniqueId;
                v47 = this->fields.data;
              }
              ++v48;
              if ( !v47 )
                goto LABEL_68;
            }
            if ( v28 )
            {
              BattleActionData__setReplaceMember(
                v28,
                DeckIndex,
                EnemyServantDataFromNpcId->fields.uniqueId,
                EnemyServantData->fields.uniqueId,
                funcIndex,
                0LL);
              return v28;
            }
          }
          goto LABEL_68;
        }
LABEL_69:
        v52 = sub_B2C460(data);
        sub_B2C400(v52, 0LL);
      }
    }
LABEL_68:
    sub_B2C434(data, funcEnt);
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

  if ( (byte_418A796 & 1) == 0 )
  {
    sub_B2C35C(&BattleActionData_TypeInfo, *(_QWORD *)&targetId);
    byte_418A796 = 1;
  }
  v11 = (BattleActionData_o *)sub_B2C42C(BattleActionData_TypeInfo);
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
    v30 = sub_B2C460(data);
    sub_B2C400(v30, 0LL);
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
    || (BattleData__SubBuffFromPT_18448196(data, v15, 0LL), (data = this->fields.data) == 0LL) )
  {
LABEL_34:
    sub_B2C434(data, v12);
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

  if ( (byte_418A795 & 1) == 0 )
  {
    sub_B2C35C(&BattleActionData_TypeInfo, *(_QWORD *)&targetId);
    byte_418A795 = 1;
  }
  v7 = (BattleActionData_o *)sub_B2C42C(BattleActionData_TypeInfo);
  BattleActionData___ctor(v7, 0LL);
  data = this->fields.data;
  if ( !data
    || (BattleData__SubBuffFromPT_18448196(data, 0LL, 0LL), (data = this->fields.data) == 0LL)
    || (BattleData__shuffleCommand(data, 0LL), (data = (BattleData_o *)this->fields.logic) == 0LL)
    || (BattleLogic__drawCommand((BattleLogic_o *)data, 0LL), (data = (BattleData_o *)this->fields.logic) == 0LL)
    || (BattleLogic__setDrawCard((BattleLogic_o *)data, 0LL), !v7) )
  {
    sub_B2C434(data, v8);
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
  System_String_array **v25; // x2
  System_String_array **v26; // x3
  System_Boolean_array **v27; // x4
  System_Int32_array **v28; // x5
  System_Int32_array *v29; // x6
  System_Int32_array *v30; // x7
  unsigned int uniqueId; // w8
  System_Int32_array **popupText; // x1
  System_Int32_array **effectList; // x1
  System_String_array **v34; // x2
  System_String_array **v35; // x3
  System_Boolean_array **v36; // x4
  System_Int32_array **v37; // x5
  System_Int32_array *v38; // x6
  System_Int32_array *v39; // x7

  if ( (byte_418A7A1 & 1) == 0 )
  {
    sub_B2C35C(&BattleActionData_TypeInfo, *(_QWORD *)&targetId);
    sub_B2C35C(&BattleActionData_BuffData_TypeInfo, v13);
    byte_418A7A1 = 1;
  }
  v14 = (BattleActionData_o *)sub_B2C42C(BattleActionData_TypeInfo);
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
  v24 = sub_B2C42C(BattleActionData_BuffData_TypeInfo);
  BattleActionData_BuffData___ctor((BattleActionData_BuffData_o *)v24, 0LL);
  if ( !v24 )
    goto LABEL_22;
  uniqueId = v17->fields.uniqueId;
  *(_DWORD *)(v24 + 16) = 0;
  *(_QWORD *)(v24 + 40) = uniqueId;
  if ( !funcEnt )
    goto LABEL_22;
  popupText = (System_Int32_array **)funcEnt->fields.popupText;
  *(_QWORD *)(v24 + 56) = popupText;
  sub_B2C2F8((BattleServantConfConponent_o *)(v24 + 56), popupText, v25, v26, v27, v28, v29, v30);
  *(_DWORD *)(v24 + 68) = funcEnt->fields.popupTextColor;
  *(_DWORD *)(v24 + 64) = funcEnt->fields.popupIconId;
  effectList = (System_Int32_array **)funcEnt->fields.effectList;
  *(_QWORD *)(v24 + 72) = effectList;
  sub_B2C2F8((BattleServantConfConponent_o *)(v24 + 72), effectList, v34, v35, v36, v37, v38, v39);
  *(_DWORD *)(v24 + 28) = 2;
  if ( !v14 )
LABEL_22:
    sub_B2C434(data, v15);
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
  __int64 v16; // x25
  __int64 v17; // x25
  DataManager_o *MasterData_WarQuestSelectionMaster; // x0
  SkillLvMaster_o *v19; // x25
  struct BattleSkillInfoData_o *skillInfo; // x8
  SkillLvEntity_o *v21; // x26
  BattleActionData_o *v22; // x25
  BattleActorControl_o *PartsActor; // x27
  BattleServantData_o *battleSvtData; // x0
  int32_t targetId; // w1
  const MethodInfo *v26; // x6
  BattleActionData_o *RevivalHealData; // x0
  BattleActorControl_o *v28; // x26
  BattleServantData_o *v29; // x0
  BattleActionData_o *v30; // x0
  BattleActionData_o *v31; // x1
  BattleActionData_o *v32; // x27
  int32_t v33; // w1
  const MethodInfo *v34; // x6
  BattleActionData_o *v35; // x0

  if ( (byte_418A7AD & 1) == 0 )
  {
    sub_B2C35C(&BattleActionData_TypeInfo, actionData);
    sub_B2C35C(&Method_DataManager_GetMasterData_SkillLvMaster___, v13);
    sub_B2C35C(&UnityEngine_Object_TypeInfo, v14);
    sub_B2C35C(&Method_SingletonMonoBehaviour_DataManager__getInstance__, v15);
    byte_418A7AD = 1;
  }
  v16 = *((_QWORD *)Method_SingletonMonoBehaviour_DataManager__getInstance__ + 3);
  if ( (*(_BYTE *)(v16 + 306) & 1) == 0 )
    sub_AC505C(*((_QWORD *)Method_SingletonMonoBehaviour_DataManager__getInstance__ + 3));
  v17 = **(_QWORD **)(v16 + 192);
  if ( (*(_BYTE *)(v17 + 306) & 1) == 0 )
    sub_AC505C(v17);
  MasterData_WarQuestSelectionMaster = **(DataManager_o ***)(v17 + 184);
  if ( !MasterData_WarQuestSelectionMaster )
    goto LABEL_42;
  MasterData_WarQuestSelectionMaster = (DataManager_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                          MasterData_WarQuestSelectionMaster,
                                                          (const MethodInfo_17339EC *)Method_DataManager_GetMasterData_SkillLvMaster___);
  if ( !actionData )
    goto LABEL_42;
  v19 = (SkillLvMaster_o *)MasterData_WarQuestSelectionMaster;
  MasterData_WarQuestSelectionMaster = (DataManager_o *)actionData->fields.skillInfo;
  if ( !MasterData_WarQuestSelectionMaster )
    goto LABEL_42;
  MasterData_WarQuestSelectionMaster = (DataManager_o *)((__int64 (__fastcall *)(DataManager_o *, void *))MasterData_WarQuestSelectionMaster->klass[1]._1.namespaze)(
                                                          MasterData_WarQuestSelectionMaster,
                                                          MasterData_WarQuestSelectionMaster->klass[1]._1.byval_arg.data);
  skillInfo = actionData->fields.skillInfo;
  if ( !skillInfo )
    goto LABEL_42;
  if ( !v19 )
    goto LABEL_42;
  MasterData_WarQuestSelectionMaster = (DataManager_o *)SkillLvMaster__GetEntity(
                                                          v19,
                                                          (int32_t)MasterData_WarQuestSelectionMaster,
                                                          skillInfo->fields.skilllv,
                                                          0LL);
  if ( !MasterData_WarQuestSelectionMaster )
    goto LABEL_42;
  v21 = (SkillLvEntity_o *)MasterData_WarQuestSelectionMaster;
  v22 = 0LL;
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
    v22 = 0LL;
    if ( ((unsigned __int8)MasterData_WarQuestSelectionMaster & 1) != 0 )
    {
      if ( !PartsActor )
        goto LABEL_42;
      battleSvtData = PartsActor->fields.battleSvtData;
      if ( battleSvtData )
      {
        v22 = 0LL;
        if ( !BattleServantData__isAlive(battleSvtData, 0, 0LL) )
        {
          v22 = (BattleActionData_o *)sub_B2C42C(BattleActionData_TypeInfo);
          BattleActionData___ctor(v22, 0LL);
          if ( !v22 )
            goto LABEL_42;
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
                              v26);
          BattleActionData__addAction(v22, RevivalHealData, 0LL);
        }
      }
      else
      {
        v22 = 0LL;
      }
    }
  }
  if ( !SkillLvEntity__IsRevivalUnder(v21, 0LL) )
    goto LABEL_34;
  MasterData_WarQuestSelectionMaster = (DataManager_o *)this->fields.data;
  if ( !MasterData_WarQuestSelectionMaster )
LABEL_42:
    sub_B2C434(MasterData_WarQuestSelectionMaster, actionData);
  v28 = BattleData__GetPartsActor((BattleData_o *)MasterData_WarQuestSelectionMaster, 2, 0LL);
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  MasterData_WarQuestSelectionMaster = (DataManager_o *)UnityEngine_Object__op_Inequality(
                                                          (UnityEngine_Object_o *)v28,
                                                          0LL,
                                                          0LL);
  if ( ((unsigned __int8)MasterData_WarQuestSelectionMaster & 1) != 0 )
  {
    if ( v28 )
    {
      v29 = v28->fields.battleSvtData;
      if ( !v29 || BattleServantData__isAlive(v29, 0, 0LL) )
        goto LABEL_34;
      v32 = (BattleActionData_o *)sub_B2C42C(BattleActionData_TypeInfo);
      BattleActionData___ctor(v32, 0LL);
      if ( v32 )
      {
        v32->fields.actorId = actionData->fields.actorId;
        v32->fields.targetId = v28->fields.uniqueID;
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
        if ( !v22 )
        {
          v30 = actionData;
          v31 = v32;
          goto LABEL_36;
        }
        BattleActionData__AddAfterActionData(v22, v32, 0, 0LL);
LABEL_35:
        v30 = actionData;
        v31 = v22;
LABEL_36:
        BattleActionData__AddAfterActionData(v30, v31, 0, 0LL);
        return;
      }
    }
    goto LABEL_42;
  }
LABEL_34:
  if ( v22 )
    goto LABEL_35;
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
  System_Int32_array **v14; // x1
  System_String_array **v15; // x2
  System_String_array **v16; // x3
  System_Boolean_array **v17; // x4
  System_Int32_array **v18; // x5
  System_Int32_array *v19; // x6
  System_Int32_array *v20; // x7
  BattleData_o *data; // x24
  BattleActionData_SkillShiftServant_o *v22; // x23

  if ( (byte_418A7AA & 1) == 0 )
  {
    sub_B2C35C(&BattleActionData_TypeInfo, actionData);
    sub_B2C35C(&BattleActionData_SkillShiftServant_TypeInfo, v9);
    sub_B2C35C(&StringLiteral_8806/*"MOTION_SHIFT"*/, v10);
    byte_418A7AA = 1;
  }
  v11 = sub_B2C42C(BattleActionData_TypeInfo);
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
  v14 = (System_Int32_array **)StringLiteral_8806/*"MOTION_SHIFT"*/;
  *(_QWORD *)(v11 + 64) = StringLiteral_8806/*"MOTION_SHIFT"*/;
  sub_B2C2F8((BattleServantConfConponent_o *)(v11 + 64), v14, v15, v16, v17, v18, v19, v20);
  data = this->fields.data;
  v22 = (BattleActionData_SkillShiftServant_o *)sub_B2C42C(BattleActionData_SkillShiftServant_TypeInfo);
  BattleActionData_SkillShiftServant___ctor(v22, data, npcId, 0LL);
  if ( !v22 )
LABEL_8:
    sub_B2C434(v12, v13);
  BattleActionData_ShiftServant__setBeforeSvtData((BattleActionData_ShiftServant_o *)v22, targetData, 0LL);
  BattleActionData__setShiftServant((BattleActionData_o *)v11, (BattleActionData_ShiftServant_o *)v22, 0LL);
  BattleActionData__setShiftServant(actionData, (BattleActionData_ShiftServant_o *)v22, 0LL);
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
  __int64 v28; // x27
  __int64 v29; // x1
  BattleData_o *data; // x0
  System_String_array **v31; // x2
  System_String_array **v32; // x3
  System_Boolean_array **v33; // x4
  System_Int32_array **v34; // x5
  System_Int32_array *v35; // x6
  System_Int32_array *v36; // x7
  BattleServantData_o **v37; // x26
  int32_t rootfsm; // w28
  int v39; // w19
  BattleServantData_o *v40; // x19
  System_Int32_array *vals; // x28
  int32_t Value; // w20
  int32_t Value2; // w0
  DataVals_o *v44; // x8
  int32_t v45; // w25
  RemovedBuffInfo_o *v46; // x0
  System_String_array **v47; // x2
  System_String_array **v48; // x3
  System_Boolean_array **v49; // x4
  System_Int32_array **v50; // x5
  System_Int32_array *v51; // x6
  System_Int32_array *v52; // x7
  const MethodInfo *v53; // x7
  struct System_Collections_Generic_List_BattleBuffData_BuffData__o *RemovedAllBuffList_k__BackingField; // x22
  const MethodInfo *v55; // x6
  int32_t v56; // w19
  BattleServantData_o *v57; // x21
  System_Func_WarBoardManager_WarBoardOnboardSkillTarget__WarBoardPieceData__o *v58; // x19
  System_Collections_Generic_IEnumerable_TSource__o *v59; // x0
  System_Int32_array **v60; // x0
  System_String_array **v61; // x2
  System_String_array **v62; // x3
  System_Boolean_array **v63; // x4
  System_Int32_array **v64; // x5
  System_Int32_array *v65; // x6
  System_Int32_array *v66; // x7
  BattleActionData_o *v67; // x27
  Il2CppObject *current; // x19
  BattleData_o *v69; // x0
  _BOOL8 v70; // x0
  __int64 v71; // x1
  _BOOL8 v72; // x0
  __int64 v73; // x1
  BattleActionEffect_SubChangeMaxHpBuff_o *v74; // x19
  BattleData_o *v75; // x20
  System_Int32_array **v76; // x0
  System_String_array **v77; // x2
  System_String_array **v78; // x3
  System_Boolean_array **v79; // x4
  System_Int32_array **v80; // x5
  System_Int32_array *v81; // x6
  System_Int32_array *v82; // x7
  int v84; // [xsp+Ch] [xbp-B4h]
  int v85; // [xsp+10h] [xbp-B0h]
  int32_t v86; // [xsp+14h] [xbp-ACh]
  BattleActionData_o *v87; // [xsp+18h] [xbp-A8h]
  DataVals_o *dataVals; // [xsp+28h] [xbp-98h]
  unsigned int targetIda; // [xsp+34h] [xbp-8Ch]
  System_Collections_Generic_List_Enumerator_T__o v92; // [xsp+38h] [xbp-88h] BYREF
  System_Collections_Generic_List_Enumerator_T__o v93; // [xsp+50h] [xbp-70h] BYREF

  if ( (byte_418A789 & 1) == 0 )
  {
    sub_B2C35C(&BattleActionData_TypeInfo, *(_QWORD *)&targetId);
    sub_B2C35C(&Method_System_Linq_Enumerable_Select_BattleBuffData_BuffData__BattleBuffData_BuffData___, v15);
    sub_B2C35C(&Method_System_Linq_Enumerable_ToList_BattleBuffData_BuffData___, v16);
    sub_B2C35C(&Method_System_Collections_Generic_List_Enumerator_BattleBuffData_BuffData__Dispose__, v17);
    sub_B2C35C(&Method_System_Collections_Generic_List_Enumerator_BattleBuffData_BuffData__MoveNext__, v18);
    sub_B2C35C(&Method_System_Collections_Generic_List_Enumerator_BattleBuffData_BuffData__get_Current__, v19);
    sub_B2C35C(&Method_System_Func_BattleBuffData_BuffData__BattleBuffData_BuffData___ctor__, v20);
    sub_B2C35C(&System_Func_BattleBuffData_BuffData__BattleBuffData_BuffData__TypeInfo, v21);
    sub_B2C35C(&Method_System_Collections_Generic_List_BattleBuffData_BuffData__GetEnumerator__, v22);
    sub_B2C35C(&Method_System_Collections_Generic_List_BattleBuffData_BuffData__ToArray__, v23);
    sub_B2C35C(&Method_System_Collections_Generic_List_BattleBuffData_BuffData__get_Count__, v24);
    sub_B2C35C(&BattleActionEffect_SubChangeMaxHpBuff_TypeInfo, v25);
    sub_B2C35C(&Method_BattleLogicFunction___c__DisplayClass67_0__functionSubState_b__0__, v26);
    sub_B2C35C(&BattleLogicFunction___c__DisplayClass67_0_TypeInfo, v27);
    byte_418A789 = 1;
  }
  memset(&v93, 0, sizeof(v93));
  v28 = sub_B2C42C(BattleLogicFunction___c__DisplayClass67_0_TypeInfo);
  BattleLogicFunction___c__DisplayClass67_0___ctor((BattleLogicFunction___c__DisplayClass67_0_o *)v28, 0LL);
  v87 = (BattleActionData_o *)sub_B2C42C(BattleActionData_TypeInfo);
  BattleActionData___ctor(v87, 0LL);
  data = this->fields.data;
  if ( !data )
    goto LABEL_34;
  data = (BattleData_o *)BattleData__getServantData(data, targetId, 0LL);
  if ( !v28 )
    goto LABEL_34;
  *(_QWORD *)(v28 + 16) = data;
  v37 = (BattleServantData_o **)(v28 + 16);
  sub_B2C2F8((BattleServantConfConponent_o *)(v28 + 16), (System_Int32_array **)data, v31, v32, v33, v34, v35, v36);
  data = *(BattleData_o **)(v28 + 16);
  if ( !data )
    goto LABEL_34;
  data = (BattleData_o *)BattleServantData__getAuraIdList((BattleServantData_o *)data, 0LL);
  if ( !data )
    goto LABEL_34;
  if ( !*v37 )
    goto LABEL_34;
  rootfsm = (int32_t)data->fields.rootfsm;
  data = (BattleData_o *)BattleServantData__getMaxHp(*v37, 0LL);
  if ( !*v37 )
    goto LABEL_34;
  v39 = (int)data;
  data = (BattleData_o *)BattleServantData__getNowHp(*v37, 0LL);
  if ( !funcEnt )
    goto LABEL_34;
  v85 = v39;
  v86 = rootfsm;
  v84 = (int)data;
  targetIda = targetId;
  if ( !baseVals )
    goto LABEL_34;
  v40 = *v37;
  vals = funcEnt->fields.vals;
  Value = DataVals__GetValue(baseVals, 0LL);
  Value2 = DataVals__GetValue2(baseVals, 0LL);
  v44 = baseVals;
  v45 = Value2;
  dataVals = v44;
  data = (BattleData_o *)DataVals__isParam(v44, 89, 0LL);
  if ( !v40 )
    goto LABEL_34;
  v46 = BattleServantData__subBuffFromIndividualites(v40, vals, Value, v45, 1, (unsigned __int8)data & 1, 0LL);
  *subBuffInfo = v46;
  sub_B2C2F8((BattleServantConfConponent_o *)subBuffInfo, (System_Int32_array **)v46, v47, v48, v49, v50, v51, v52);
  if ( !*subBuffInfo )
    goto LABEL_34;
  RemovedAllBuffList_k__BackingField = (*subBuffInfo)->fields._RemovedAllBuffList_k__BackingField;
  if ( !RemovedAllBuffList_k__BackingField )
    goto LABEL_34;
  if ( RemovedAllBuffList_k__BackingField->fields._size < 1 )
    return BattleLogicFunction__getNoEffectObject(this, targetIda, index, dataVals, isCommandSideEffect, 0LL, 0LL, v53);
  data = (BattleData_o *)*v37;
  if ( !*v37 )
    goto LABEL_34;
  data = (BattleData_o *)BattleServantData__getAuraIdList((BattleServantData_o *)data, 0LL);
  if ( !data )
    goto LABEL_34;
  if ( !*v37 )
    goto LABEL_34;
  v56 = (int32_t)data->fields.rootfsm;
  data = (BattleData_o *)BattleLogicFunction__getFunctionObject(
                           (BattleLogicFunction_o *)data,
                           funcEnt,
                           (*v37)->fields.uniqueId,
                           index,
                           isCommandSideEffect,
                           0LL,
                           v55);
  if ( !data )
    goto LABEL_34;
  v57 = (BattleServantData_o *)data;
  BYTE4(data->fields.boostSkillInfo) = v86 > v56;
  v58 = (System_Func_WarBoardManager_WarBoardOnboardSkillTarget__WarBoardPieceData__o *)sub_B2C42C(System_Func_BattleBuffData_BuffData__BattleBuffData_BuffData__TypeInfo);
  System_Func_WarBoardManager_WarBoardOnboardSkillTarget__WarBoardPieceData____ctor(
    v58,
    (Il2CppObject *)v28,
    Method_BattleLogicFunction___c__DisplayClass67_0__functionSubState_b__0__,
    (const MethodInfo_2713350 *)Method_System_Func_BattleBuffData_BuffData__BattleBuffData_BuffData___ctor__);
  v59 = (System_Collections_Generic_IEnumerable_TSource__o *)System_Linq_Enumerable__Select_WarBoardManager_WarBoardOnboardSkillTarget__WarBoardPieceData_(
                                                               (System_Collections_Generic_IEnumerable_TSource__o *)RemovedAllBuffList_k__BackingField,
                                                               (System_Func_TSource__TResult__o *)v58,
                                                               (const MethodInfo_1A96D40 *)Method_System_Linq_Enumerable_Select_BattleBuffData_BuffData__BattleBuffData_BuffData___);
  v60 = (System_Int32_array **)System_Linq_Enumerable__ToList_WarBoardManager_WarBoardOnboardSkillTarget_(
                                 v59,
                                 (const MethodInfo_1A9DE9C *)Method_System_Linq_Enumerable_ToList_BattleBuffData_BuffData___);
  *(_QWORD *)&v57->fields._frameType_k__BackingField = v60;
  sub_B2C2F8((BattleServantConfConponent_o *)&v57->fields._frameType_k__BackingField, v60, v61, v62, v63, v64, v65, v66);
  v67 = v87;
  if ( !v87 )
    goto LABEL_34;
  BattleActionData__setBuffData(v87, (BattleActionData_BuffData_o *)v57, dataVals, 0LL);
  System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo___GetEnumerator(
    &v92,
    (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)RemovedAllBuffList_k__BackingField,
    (const MethodInfo_2EF52DC *)Method_System_Collections_Generic_List_BattleBuffData_BuffData__GetEnumerator__);
  v93 = v92;
  while ( 1 )
  {
    v72 = System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___MoveNext(
            &v93,
            (const MethodInfo_20EA42C *)Method_System_Collections_Generic_List_Enumerator_BattleBuffData_BuffData__MoveNext__);
    if ( !v72 )
      break;
    current = v93.fields.current;
    if ( !v93.fields.current )
      sub_B2C434(v72, v73);
    v69 = this->fields.data;
    if ( !v69 )
      sub_B2C434(0LL, v73);
    BattleData__RemoveDoNotSelectCommandCardBuff(v69, (int32_t)v93.fields.current[1].klass, *v37, 0LL);
    v70 = BattleBuffData__CheckInvalidSacrificeIndiv((BattleBuffData_BuffData_o *)current, 0LL);
    if ( v70 )
    {
      if ( !args )
        sub_B2C434(v70, v71);
      args->fields.updateField = 1;
    }
  }
  System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___Dispose(
    &v93,
    (const MethodInfo_20EA428 *)Method_System_Collections_Generic_List_Enumerator_BattleBuffData_BuffData__Dispose__);
  data = (BattleData_o *)*v37;
  if ( !*v37 )
    goto LABEL_34;
  if ( v85 != BattleServantData__getMaxHp((BattleServantData_o *)data, 0LL) )
  {
    BattleActionData__addReflectLogicResultServantId(v87, targetIda, 0LL);
    v74 = (BattleActionEffect_SubChangeMaxHpBuff_o *)sub_B2C42C(BattleActionEffect_SubChangeMaxHpBuff_TypeInfo);
    BattleActionEffect_SubChangeMaxHpBuff___ctor(v74, 0LL);
    data = (BattleData_o *)System_Collections_Generic_List_WarBoardUiData_SaveData___ToArray(
                             (System_Collections_Generic_List_WarBoardUiData_SaveData__o *)RemovedAllBuffList_k__BackingField,
                             (const MethodInfo_2EF65AC *)Method_System_Collections_Generic_List_BattleBuffData_BuffData__ToArray__);
    if ( *v37 )
    {
      v75 = data;
      data = (BattleData_o *)BattleServantData__getNowHp(*v37, 0LL);
      if ( v74 )
      {
        v76 = (System_Int32_array **)((__int64 (__fastcall *)(BattleActionEffect_SubChangeMaxHpBuff_o *, BattleData_o *, _QWORD, _QWORD, Il2CppMethodPointer))v74->klass->vtable._7_InitBuff.method)(
                                       v74,
                                       v75,
                                       targetIda,
                                       (unsigned int)((_DWORD)data - v84),
                                       v74->klass->vtable._8_PartialPreActionProc.methodPtr);
        *(_QWORD *)&v57->fields._commandCardLimitCount_k__BackingField.fields.currentCryptoKey = v76;
        sub_B2C2F8(
          (BattleServantConfConponent_o *)&v57->fields._commandCardLimitCount_k__BackingField,
          v76,
          v77,
          v78,
          v79,
          v80,
          v81,
          v82);
        return v67;
      }
    }
LABEL_34:
    sub_B2C434(data, v29);
  }
  return v67;
}


// local variable allocation has failed, the output may be wrong!
BattleActionData_o *__fastcall BattleLogicFunction__functionTransformServant(
        BattleLogicFunction_o *this,
        int32_t targetId,
        FunctionEntity_o *funcEnt,
        DataVals_o *baeVals,
        int32_t funcIndex,
        const MethodInfo *method)
{
  BattleActionData_o *v10; // x21
  __int64 v11; // x1
  BattleData_o *data; // x0
  BattleServantData_o *v13; // x24
  int32_t Param; // w23
  int32_t v15; // w25

  if ( (byte_418A799 & 1) == 0 )
  {
    sub_B2C35C(&BattleActionData_TypeInfo, *(_QWORD *)&targetId);
    byte_418A799 = 1;
  }
  v10 = (BattleActionData_o *)sub_B2C42C(BattleActionData_TypeInfo);
  BattleActionData___ctor(v10, 0LL);
  data = this->fields.data;
  if ( !data )
    goto LABEL_11;
  data = (BattleData_o *)BattleData__getServantData(data, targetId, 0LL);
  if ( !baeVals )
    goto LABEL_11;
  v13 = (BattleServantData_o *)data;
  Param = DataVals__GetParam(baeVals, 6, 0, 0LL);
  v15 = DataVals__GetParam(baeVals, 76, 0, 0LL);
  data = (BattleData_o *)DataVals__IsCancelTransform(baeVals, 0LL);
  if ( ((unsigned __int8)data & 1) != 0 )
  {
    if ( !v13 )
      goto LABEL_11;
    data = (BattleData_o *)BattleServantData__get_isTransformed(v13, 0LL);
    if ( ((unsigned __int8)data & 1) != 0 )
      Param = -1;
  }
  if ( !v10 )
LABEL_11:
    sub_B2C434(data, v11);
  BattleActionData__AddTransformServant(v10, Param, targetId, funcIndex, v15, 0LL);
  return v10;
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
  __int64 v22; // x1
  __int64 v23; // x1
  __int64 v24; // x1
  __int64 v25; // x1
  __int64 v26; // x1
  __int64 v27; // x1
  __int64 v28; // x1
  BattleActionData_o *v29; // x27
  __int64 v30; // x1
  __int64 data; // x0
  BattleServantData_o *v32; // x26
  BattleServantData_o *ServantData; // x24
  __int64 v34; // x25
  int32_t Value; // w19
  int32_t Param; // w0
  struct BattleSkillInfoData_o *skillInfo; // x8
  DataMasterBase_WarMaster__WarEntity__int__o *v38; // x26
  _BOOL4 v39; // w26
  int v40; // w19
  int v42; // w10
  System_String_array **v43; // x2
  System_String_array **v44; // x3
  System_Boolean_array **v45; // x4
  System_Int32_array **v46; // x5
  System_Int32_array *v47; // x6
  System_Int32_array *v48; // x7
  int32_t v49; // w8
  System_Int32_array **v50; // x0
  System_String_array **v51; // x2
  System_String_array **v52; // x3
  System_Boolean_array **v53; // x4
  System_Int32_array **v54; // x5
  System_Int32_array *v55; // x6
  System_Int32_array *v56; // x7
  System_Int32_array **v57; // x0
  System_String_array **v58; // x2
  System_String_array **v59; // x3
  System_Boolean_array **v60; // x4
  System_Int32_array **v61; // x5
  System_Int32_array *v62; // x6
  System_Int32_array *v63; // x7
  System_Collections_Generic_List_int__o *v64; // x28
  System_Collections_Generic_IEnumerable_int__o *FixDamageRates; // x26
  void *monitor; // x8
  unsigned __int64 v67; // x19
  __int64 v68; // x23
  int size; // w8
  int32_t v70; // w26
  int32_t v71; // w20
  int32_t v72; // w19
  int32_t v73; // w0
  System_Int32_array **v74; // x0
  System_String_array **v75; // x2
  System_String_array **v76; // x3
  System_Boolean_array **v77; // x4
  System_Int32_array **v78; // x5
  System_Int32_array *v79; // x6
  System_Int32_array *v80; // x7
  System_Int32_array **v81; // x0
  System_String_array **v82; // x2
  System_String_array **v83; // x3
  System_Boolean_array **v84; // x4
  System_Int32_array **v85; // x5
  System_Int32_array *v86; // x6
  System_Int32_array *v87; // x7
  System_Int32_array **v88; // x0
  System_String_array **v89; // x2
  System_String_array **v90; // x3
  System_Boolean_array **v91; // x4
  System_Int32_array **v92; // x5
  System_Int32_array *v93; // x6
  System_Int32_array *v94; // x7
  System_Int32_array **v95; // x0
  System_String_array **v96; // x2
  System_String_array **v97; // x3
  System_Boolean_array **v98; // x4
  System_Int32_array **v99; // x5
  System_Int32_array *v100; // x6
  System_Int32_array *v101; // x7
  struct BattleData_o *v102; // x8
  int32_t v103; // w19
  bool IsOpponentPTUniqueID; // w0
  __int64 v106; // x0
  BattleServantData_o *opponent; // [xsp+18h] [xbp-98h]
  DataVals_o *v108; // [xsp+28h] [xbp-88h]
  bool v109; // [xsp+30h] [xbp-80h]
  int32_t v110; // [xsp+3Ch] [xbp-74h]
  int32_t v111; // [xsp+3Ch] [xbp-74h]
  int Random; // [xsp+40h] [xbp-70h]
  WarEntity_o *entity; // [xsp+48h] [xbp-68h] BYREF
  bool minimumDamageFlg; // [xsp+54h] [xbp-5Ch] BYREF
  float damage; // [xsp+58h] [xbp-58h] BYREF
  int32_t hitStat; // [xsp+5Ch] [xbp-54h] BYREF

  if ( (byte_418A7A0 & 1) == 0 )
  {
    sub_B2C35C(&BattleActionData_TypeInfo, *(_QWORD *)&playerId);
    sub_B2C35C(&BattleActionData_DamageData_TypeInfo, v15);
    sub_B2C35C(&Method_DataManager_GetMaster_SkillMaster___, v16);
    sub_B2C35C(&DataManager_TypeInfo, v17);
    sub_B2C35C(&Method_DataMasterBase_SkillMaster__SkillEntity__int__TryGetEntity__, v18);
    sub_B2C35C(&int___TypeInfo, v19);
    sub_B2C35C(&Method_System_Collections_Generic_List_int__Add__, v20);
    sub_B2C35C(&Method_System_Collections_Generic_List_int__ToArray__, v21);
    sub_B2C35C(&Method_System_Collections_Generic_List_int___ctor__, v22);
    sub_B2C35C(&Method_System_Collections_Generic_List_int__get_Count__, v23);
    sub_B2C35C(&Method_System_Collections_Generic_List_int__get_Item__, v24);
    sub_B2C35C(&Method_System_Collections_Generic_List_int__set_Item__, v25);
    sub_B2C35C(&System_Collections_Generic_List_int__TypeInfo, v26);
    sub_B2C35C(&System_Math_TypeInfo, v27);
    sub_B2C35C(&BattleBuffData_ShowBuffData___TypeInfo, v28);
    byte_418A7A0 = 1;
  }
  hitStat = 0;
  damage = 0.0;
  minimumDamageFlg = 0;
  entity = 0LL;
  v29 = (BattleActionData_o *)sub_B2C42C(BattleActionData_TypeInfo);
  BattleActionData___ctor(v29, 0LL);
  data = (__int64)this->fields.data;
  if ( !data )
    goto LABEL_60;
  v109 = safe;
  v110 = funcIndex;
  data = (__int64)BattleData__getServantData((BattleData_o *)data, playerId, 0LL);
  if ( !this->fields.data )
    goto LABEL_60;
  v32 = (BattleServantData_o *)data;
  ServantData = BattleData__getServantData(this->fields.data, targetId, 0LL);
  v34 = sub_B2C42C(BattleActionData_DamageData_TypeInfo);
  BattleActionData_DamageData___ctor((BattleActionData_DamageData_o *)v34, 0LL);
  if ( !baseVals )
    goto LABEL_60;
  Value = DataVals__GetValue(baseVals, 0LL);
  Param = DataVals__GetParam(baseVals, 4, 0, 0LL);
  Random = BattleRandom__getRandom(Value, Param + 1, 0LL);
  hitStat = 0;
  data = DataVals__IsActNoDamageBuff(baseVals, 0LL);
  if ( (data & 1) != 0 )
  {
    if ( !ServantData )
      goto LABEL_60;
    BattleServantData__CheckNoDamageBuff(
      ServantData,
      this->fields.data,
      v32,
      0LL,
      (BattleActionData_DamageData_o *)v34,
      mainAction,
      0LL);
    damage = (float)Random;
    minimumDamageFlg = 1;
    BattleServantData__CheckInvincibleAvoidanceBuff(
      ServantData,
      this->fields.data,
      v32,
      0LL,
      (BattleActionData_DamageData_o *)v34,
      &damage,
      &minimumDamageFlg,
      &hitStat,
      mainAction,
      0LL);
    if ( damage <= 0.0 )
      Random = 0;
  }
  opponent = v32;
  if ( !mainAction || !mainAction->fields.skillInfo )
    goto LABEL_20;
  if ( (BYTE3(DataManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  data = (__int64)DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_173398C *)Method_DataManager_GetMaster_SkillMaster___);
  skillInfo = mainAction->fields.skillInfo;
  if ( !skillInfo )
    goto LABEL_60;
  v38 = (DataMasterBase_WarMaster__WarEntity__int__o *)data;
  data = ((__int64 (__fastcall *)(struct BattleSkillInfoData_o *, Il2CppMethodPointer))skillInfo->klass->vtable._5_get_skillId.method)(
           mainAction->fields.skillInfo,
           skillInfo->klass->vtable._6_get_IndividualityArray.methodPtr);
  if ( !v38 )
    goto LABEL_60;
  if ( DataMasterBase_WarMaster__WarEntity__int___TryGetEntity(
         v38,
         &entity,
         data,
         (const MethodInfo_24E412C *)Method_DataMasterBase_SkillMaster__SkillEntity__int__TryGetEntity__) )
  {
    data = (__int64)entity;
    if ( !entity )
      goto LABEL_60;
    v39 = SkillEntity__IsCheckUpdateShiftServant((SkillEntity_o *)entity, 0LL);
  }
  else
  {
LABEL_20:
    v39 = 0;
  }
  data = (__int64)this->fields.data;
  if ( !data )
    goto LABEL_60;
  data = BattleData__IsDeadOkTurn((BattleData_o *)data, targetId, 0LL);
  if ( ((v39 | (unsigned int)data) & 1) == 0 )
  {
    if ( !ServantData )
      goto LABEL_60;
    v40 = ((__int64 (__fastcall *)(BattleServantData_o *, Il2CppMethodPointer))ServantData->klass->vtable._9_get_hp.method)(
            ServantData,
            ServantData->klass->vtable._10_set_hp.methodPtr);
    data = ((__int64 (__fastcall *)(BattleServantData_o *, Il2CppMethodPointer))ServantData->klass->vtable._11_get_reducedhp.method)(
             ServantData,
             ServantData->klass->vtable._12_set_reducedhp.methodPtr);
    if ( v40 - (int)data >= Random || v40 - (int)data <= 0 )
      v42 = Random;
    else
      v42 = v40 - data - 1;
    Random = v42;
LABEL_36:
    if ( !v34 )
      goto LABEL_60;
    goto LABEL_37;
  }
  if ( !v109 )
    goto LABEL_36;
  if ( !ServantData )
    goto LABEL_60;
  data = ((__int64 (__fastcall *)(BattleServantData_o *, Il2CppMethodPointer))ServantData->klass->vtable._13_get_resultHp.method)(
           ServantData,
           ServantData->klass->vtable._14_set_resultHp.methodPtr);
  if ( (int)data - Random > 0 )
    goto LABEL_36;
  data = ((__int64 (__fastcall *)(BattleServantData_o *, Il2CppMethodPointer))ServantData->klass->vtable._13_get_resultHp.method)(
           ServantData,
           ServantData->klass->vtable._14_set_resultHp.methodPtr);
  Random = data - 1;
  if ( !v34 )
    goto LABEL_60;
LABEL_37:
  *(_DWORD *)(v34 + 28) = targetId;
  *(_DWORD *)(v34 + 16) = v110;
  data = (__int64)baseVals->fields.funcEnt;
  if ( !data )
    goto LABEL_60;
  data = (__int64)FunctionEntity__getEffectList((FunctionEntity_o *)data, 0LL);
  if ( !data )
    goto LABEL_60;
  if ( *(_QWORD *)(data + 24) )
  {
    *(_QWORD *)(v34 + 136) = data;
    sub_B2C2F8((BattleServantConfConponent_o *)(v34 + 136), (System_Int32_array **)data, v43, v44, v45, v46, v47, v48);
  }
  *(_WORD *)(v34 + 32) = 0;
  *(_BYTE *)(v34 + 34) = 0;
  v49 = hitStat;
  v111 = playerId;
  *(_BYTE *)(v34 + 40) = 0;
  *(_DWORD *)(v34 + 36) = v49;
  v50 = (System_Int32_array **)sub_B2C374(BattleBuffData_ShowBuffData___TypeInfo, 0LL);
  *(_QWORD *)(v34 + 64) = v50;
  sub_B2C2F8((BattleServantConfConponent_o *)(v34 + 64), v50, v51, v52, v53, v54, v55, v56);
  v57 = (System_Int32_array **)sub_B2C374(BattleBuffData_ShowBuffData___TypeInfo, 0LL);
  *(_QWORD *)(v34 + 72) = v57;
  sub_B2C2F8((BattleServantConfConponent_o *)(v34 + 72), v57, v58, v59, v60, v61, v62, v63);
  v64 = (System_Collections_Generic_List_int__o *)sub_B2C42C(System_Collections_Generic_List_int__TypeInfo);
  System_Collections_Generic_List_int____ctor(
    v64,
    (const MethodInfo_2F6629C *)Method_System_Collections_Generic_List_int___ctor__);
  v108 = baseVals;
  FixDamageRates = (System_Collections_Generic_IEnumerable_int__o *)DataVals__GetFixDamageRates(baseVals, 0LL);
  data = System_Linq_Enumerable__Sum(FixDamageRates, 0LL);
  if ( !FixDamageRates )
    goto LABEL_60;
  monitor = FixDamageRates[1].monitor;
  if ( (int)monitor >= 1 )
  {
    v67 = 0LL;
    v68 = (int)data;
    do
    {
      if ( v67 >= (unsigned int)monitor )
      {
        v106 = sub_B2C460(data);
        sub_B2C400(v106, 0LL);
      }
      if ( !v64 )
        goto LABEL_60;
      System_Collections_Generic_List_int___Add(
        v64,
        *((int *)&FixDamageRates[2].klass + v67) * (__int64)Random / v68,
        (const MethodInfo_2F66FF8 *)Method_System_Collections_Generic_List_int__Add__);
      LODWORD(monitor) = FixDamageRates[1].monitor;
    }
    while ( (__int64)++v67 < (int)monitor );
  }
  if ( !v64 )
    goto LABEL_60;
  size = v64->fields._size;
  v70 = size - 1;
  if ( size >= 1 )
  {
    v71 = v64->fields._items->m_Items[v70 + 1];
    v72 = System_Linq_Enumerable__Sum((System_Collections_Generic_IEnumerable_int__o *)v64, 0LL);
    if ( (BYTE3(System_Math_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !System_Math_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(System_Math_TypeInfo);
    v73 = System_Math__Max_45012344(0, Random - v72, 0LL);
    System_Collections_Generic_List_int___set_Item(
      v64,
      v70,
      v73 + v71,
      (const MethodInfo_2F66CB8 *)Method_System_Collections_Generic_List_int__set_Item__);
  }
  v74 = (System_Int32_array **)System_Collections_Generic_List_int___ToArray(
                                 v64,
                                 (const MethodInfo_2F69104 *)Method_System_Collections_Generic_List_int__ToArray__);
  *(_QWORD *)(v34 + 96) = v74;
  sub_B2C2F8((BattleServantConfConponent_o *)(v34 + 96), v74, v75, v76, v77, v78, v79, v80);
  v81 = (System_Int32_array **)sub_B2C374(int___TypeInfo, 0LL);
  *(_QWORD *)(v34 + 104) = v81;
  sub_B2C2F8((BattleServantConfConponent_o *)(v34 + 104), v81, v82, v83, v84, v85, v86, v87);
  v88 = (System_Int32_array **)sub_B2C374(int___TypeInfo, 0LL);
  *(_QWORD *)(v34 + 112) = v88;
  sub_B2C2F8((BattleServantConfConponent_o *)(v34 + 112), v88, v89, v90, v91, v92, v93, v94);
  v95 = (System_Int32_array **)sub_B2C374(int___TypeInfo, 0LL);
  *(_QWORD *)(v34 + 120) = v95;
  sub_B2C2F8((BattleServantConfConponent_o *)(v34 + 120), v95, v96, v97, v98, v99, v100, v101);
  if ( !ServantData )
    goto LABEL_60;
  BattleServantData__provisionalDamage(ServantData, Random, 0LL);
  BattleServantData__ResultDamage(ServantData, Random, opponent, 0LL, 0, 0LL);
  data = BattleServantData__isLogicResultAlive(ServantData, 0LL);
  if ( (data & 1) == 0 )
  {
    v102 = this->fields.data;
    if ( !v102 )
      goto LABEL_60;
    ServantData->fields.deadTurn = v102->fields.typeTurn;
  }
  BattleActionData_DamageData__addAttackSideEffectAction((BattleActionData_DamageData_o *)v34, 80, 0LL);
  if ( !v29
    || (BattleActionData__setDamageData(v29, (BattleActionData_DamageData_o *)v34, v108, 0, 0, 0LL),
        (data = (__int64)this->fields.data) == 0) )
  {
LABEL_60:
    sub_B2C434(data, v30);
  }
  v103 = *(_DWORD *)(data + 188);
  IsOpponentPTUniqueID = BattleData__IsOpponentPTUniqueID((BattleData_o *)data, targetId, v111, 0LL);
  BattleServantData__setActionHistory(ServantData, v111, 7, v103, IsOpponentPTUniqueID, 0LL);
  return v29;
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
  __int64 v19; // x1
  __int64 v20; // x1
  __int64 v21; // x1
  BattleActionData_o *v22; // x20
  __int64 v23; // x1
  __int64 data; // x0
  int Random; // w27
  BattleServantData_o *v26; // x24
  int v27; // w19
  int32_t Param; // w0
  _BOOL8 IsDeadOkTurn; // x0
  const MethodInfo *v30; // x6
  __int64 v31; // x23
  BattleServantData_o *v32; // x25
  BattleActionData_DamageData_o *v33; // x19
  System_String_array **v34; // x2
  System_String_array **v35; // x3
  System_Boolean_array **v36; // x4
  System_Int32_array **v37; // x5
  System_Int32_array *v38; // x6
  System_Int32_array *v39; // x7
  struct BattleBuffData_o *buffData; // x8
  BattleServantConfConponent_o *v41; // x0
  System_Int32_array **v42; // x1
  bool v43; // w28
  UnityEngine_Object_o *logic; // x19
  int32_t Wave; // w19
  bool IsOpponentPTUniqueID; // w0
  BattleActionEffect_LossHPFunc_o *v47; // x19
  System_String_array **v48; // x2
  System_String_array **v49; // x3
  System_Boolean_array **v50; // x4
  System_Int32_array **v51; // x5
  System_Int32_array *v52; // x6
  System_Int32_array *v53; // x7
  BattleActionData_BuffData_o *v54; // x0
  struct BattleBuffData_o *v55; // x8
  int32_t v56; // w0
  int32_t before; // [xsp+14h] [xbp-6Ch]
  bool v59; // [xsp+18h] [xbp-68h]
  bool v60; // [xsp+1Ch] [xbp-64h]
  int32_t bId; // [xsp+24h] [xbp-5Ch]
  bool minimumDamageFlg; // [xsp+28h] [xbp-58h] BYREF
  float damage; // [xsp+2Ch] [xbp-54h] BYREF

  if ( (byte_418A791 & 1) == 0 )
  {
    sub_B2C35C(&BattleActionData_TypeInfo, *(_QWORD *)&playerId);
    sub_B2C35C(&BattleActionData_DamageData_TypeInfo, v19);
    sub_B2C35C(&BattleActionEffect_LossHPFunc_TypeInfo, v20);
    sub_B2C35C(&UnityEngine_Object_TypeInfo, v21);
    byte_418A791 = 1;
  }
  damage = 0.0;
  minimumDamageFlg = 0;
  v22 = (BattleActionData_o *)sub_B2C42C(BattleActionData_TypeInfo);
  BattleActionData___ctor(v22, 0LL);
  data = (__int64)this->fields.data;
  if ( !data )
    goto LABEL_51;
  v60 = safe;
  data = (__int64)BattleData__getServantData((BattleData_o *)data, targetId, 0LL);
  if ( !data )
    goto LABEL_51;
  Random = overwriteLossHp;
  v26 = (BattleServantData_o *)data;
  data = (*(__int64 (__fastcall **)(__int64, _QWORD))(*(_QWORD *)data + 520LL))(
           data,
           *(_QWORD *)(*(_QWORD *)data + 528LL));
  v27 = data;
  if ( overwriteLossHp == -1 )
  {
    if ( !baseVals )
      goto LABEL_51;
    data = DataVals__GetValue(baseVals, 0LL);
    Random = data;
  }
  if ( isRandomDamage )
  {
    if ( !baseVals )
      goto LABEL_51;
    Param = DataVals__GetParam(baseVals, 4, 0, 0LL);
    if ( Param >= 1 )
      Random = BattleRandom__getRandom(Random, Param + 1, 0LL);
  }
  if ( v27 < 1 )
    return 0LL;
  data = (__int64)this->fields.data;
  if ( !data )
    goto LABEL_51;
  IsDeadOkTurn = BattleData__IsDeadOkTurn((BattleData_o *)data, targetId, 0LL);
  v59 = IsDeadOkTurn;
  data = (__int64)BattleLogicFunction__getFunctionObject(
                    (BattleLogicFunction_o *)IsDeadOkTurn,
                    funcEnt,
                    v26->fields.uniqueId,
                    funcIndex,
                    isCommandSideEffect,
                    0LL,
                    v30);
  if ( !this->fields.data )
    goto LABEL_51;
  v31 = data;
  data = (__int64)BattleData__getServantData(this->fields.data, playerId, 0LL);
  if ( !baseVals )
    goto LABEL_51;
  v32 = (BattleServantData_o *)data;
  before = v27;
  bId = playerId;
  if ( DataVals__IsActNoDamageBuff(baseVals, 0LL) )
  {
    v33 = (BattleActionData_DamageData_o *)sub_B2C42C(BattleActionData_DamageData_TypeInfo);
    BattleActionData_DamageData___ctor(v33, 0LL);
    BattleServantData__CheckNoDamageBuff(v26, this->fields.data, v32, 0LL, v33, mainAction, 0LL);
    damage = (float)Random;
    minimumDamageFlg = 1;
    if ( !v33 )
      goto LABEL_51;
    v33->fields.hitStates = 0;
    BattleServantData__CheckInvincibleAvoidanceBuff(
      v26,
      this->fields.data,
      v32,
      0LL,
      v33,
      &damage,
      &minimumDamageFlg,
      &v33->fields.hitStates,
      mainAction,
      0LL);
    buffData = v26->fields.buffData;
    if ( damage <= 0.0 )
      Random = 0;
    if ( !buffData )
      goto LABEL_51;
    if ( buffData->fields.isNoDamage )
    {
      v33->fields.noDamage = 1;
      if ( !v31 )
        goto LABEL_51;
      *(_QWORD *)(v31 + 168) = v33;
      v41 = (BattleServantConfConponent_o *)(v31 + 168);
      v42 = (System_Int32_array **)v33;
    }
    else
    {
      if ( !v31 )
        goto LABEL_51;
      *(_QWORD *)(v31 + 168) = 0LL;
      v41 = (BattleServantConfConponent_o *)(v31 + 168);
      v42 = 0LL;
    }
    sub_B2C2F8(v41, v42, v34, v35, v36, v37, v38, v39);
  }
  v43 = !v59 || v60;
  BattleServantData__ResultDamage(v26, Random, v32, 0LL, v43, 0LL);
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
      goto LABEL_51;
    Wave = BattleLogic__getWave((BattleLogic_o *)data, 0LL);
  }
  else
  {
    Wave = 0;
  }
  data = (__int64)this->fields.data;
  if ( !data
    || (IsOpponentPTUniqueID = BattleData__IsOpponentPTUniqueID((BattleData_o *)data, targetId, bId, 0LL),
        BattleServantData__setActionHistory(v26, bId, 3, Wave, IsOpponentPTUniqueID, 0LL),
        !v31)
    || (*(_DWORD *)(v31 + 28) = 2,
        v47 = (BattleActionEffect_LossHPFunc_o *)sub_B2C42C(BattleActionEffect_LossHPFunc_TypeInfo),
        BattleActionEffect_LossHPFunc___ctor(v47, targetId, Random, v43, 0LL),
        *(_QWORD *)(v31 + 128) = v47,
        sub_B2C2F8(
          (BattleServantConfConponent_o *)(v31 + 128),
          (System_Int32_array **)v47,
          v48,
          v49,
          v50,
          v51,
          v52,
          v53),
        !v22) )
  {
LABEL_51:
    sub_B2C434(data, v23);
  }
  BattleActionData__setBuffData(v22, (BattleActionData_BuffData_o *)v31, baseVals, 0LL);
  data = DataVals__isLossHpChangeDamage(baseVals, 0LL);
  if ( (data & 1) != 0 )
  {
    if ( !DataVals__IsActNoDamageBuff(baseVals, 0LL) )
    {
      data = (__int64)v26->fields.buffData;
      if ( !data )
        goto LABEL_51;
      goto LABEL_45;
    }
    data = DataVals__IsActNoDamageBuff(baseVals, 0LL);
    if ( (data & 1) != 0 )
    {
      data = (__int64)v26->fields.buffData;
      if ( !data )
        goto LABEL_51;
      if ( !*(_BYTE *)(data + 152) )
      {
LABEL_45:
        v54 = BattleBuffData__UseFieldProgressingDoNotAct((BattleBuffData_o *)data, v26, funcIndex, 0LL);
        BattleActionData__setBuffData(v22, v54, baseVals, 0LL);
      }
    }
  }
  v55 = v26->fields.buffData;
  if ( !v55 )
    goto LABEL_51;
  v55->fields.isNoDamage = 0;
  data = (__int64)this->fields.data;
  if ( !data )
    goto LABEL_51;
  if ( ((BattleData__isEnemyID((BattleData_o *)data, bId, 0LL) ^ v26->fields.isEnemy) & 1) != 0 )
  {
    v56 = ((__int64 (__fastcall *)(BattleServantData_o *, Il2CppMethodPointer))v26->klass->vtable._13_get_resultHp.method)(
            v26,
            v26->klass->vtable._14_set_resultHp.methodPtr);
    BattleServantData__procAccumulationDamage(v26, before, v56, 0LL);
  }
  return v22;
}


FunctionMaster_o *__fastcall BattleLogicFunction__getFuncMaster(BattleLogicFunction_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  FunctionMaster_o *result; // x0
  BattleServantConfConponent_o *p_master; // x19
  FunctionMaster_o *master; // t1
  WebViewManager_o *Instance; // x0
  __int64 v8; // x1
  System_Int32_array **MasterData_WarQuestSelectionMaster; // x0
  System_String_array **v10; // x2
  System_String_array **v11; // x3
  System_Boolean_array **v12; // x4
  System_Int32_array **v13; // x5
  System_Int32_array *v14; // x6
  System_Int32_array *v15; // x7

  if ( (byte_418A771 & 1) == 0 )
  {
    sub_B2C35C(&Method_DataManager_GetMasterData_FunctionMaster___, method);
    sub_B2C35C(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v3);
    byte_418A771 = 1;
  }
  master = this->fields.master;
  p_master = (BattleServantConfConponent_o *)&this->fields.master;
  result = master;
  if ( !master )
  {
    Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !Instance )
      sub_B2C434(0LL, v8);
    MasterData_WarQuestSelectionMaster = (System_Int32_array **)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                                  (DataManager_o *)Instance,
                                                                  (const MethodInfo_17339EC *)Method_DataManager_GetMasterData_FunctionMaster___);
    p_master->klass = (BattleServantConfConponent_c *)MasterData_WarQuestSelectionMaster;
    sub_B2C2F8(p_master, MasterData_WarQuestSelectionMaster, v10, v11, v12, v13, v14, v15);
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
  WebViewManager_o *Instance; // x0
  BattleServantConfConponent_o *p_master; // x20
  struct FunctionMaster_o *master; // t1
  __int64 v10; // x1
  System_Int32_array **MasterData_WarQuestSelectionMaster; // x0
  System_String_array **v12; // x2
  System_String_array **v13; // x3
  System_Boolean_array **v14; // x4
  System_Int32_array **v15; // x5
  System_Int32_array *v16; // x6
  System_Int32_array *v17; // x7

  if ( (byte_418A770 & 1) == 0 )
  {
    sub_B2C35C(&Method_DataManager_GetMasterData_FunctionMaster___, *(_QWORD *)&id);
    sub_B2C35C(&Method_DataMasterBase_FunctionMaster__FunctionEntity__int__GetEntity__, v5);
    sub_B2C35C(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v6);
    byte_418A770 = 1;
  }
  master = this->fields.master;
  p_master = (BattleServantConfConponent_o *)&this->fields.master;
  Instance = (WebViewManager_o *)master;
  if ( !master )
  {
    Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !Instance
      || (MasterData_WarQuestSelectionMaster = (System_Int32_array **)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                                        (DataManager_o *)Instance,
                                                                        (const MethodInfo_17339EC *)Method_DataManager_GetMasterData_FunctionMaster___),
          p_master->klass = (BattleServantConfConponent_c *)MasterData_WarQuestSelectionMaster,
          sub_B2C2F8(p_master, MasterData_WarQuestSelectionMaster, v12, v13, v14, v15, v16, v17),
          (Instance = (WebViewManager_o *)p_master->klass) == 0LL) )
    {
      sub_B2C434(Instance, v10);
    }
  }
  return (FunctionEntity_o *)DataMasterBase_WarMaster__WarEntity__int___GetEntity(
                               (DataMasterBase_WarMaster__WarEntity__int__o *)Instance,
                               id,
                               (const MethodInfo_24E40D0 *)Method_DataMasterBase_FunctionMaster__FunctionEntity__int__GetEntity__);
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
  if ( (byte_418A79A & 1) == 0 )
  {
    this = (BattleLogicFunction_o *)sub_B2C35C(&BattleActionData_BuffData_TypeInfo, funcEnt);
    byte_418A79A = 1;
  }
  if ( !v8
    && (v8 = (BattleActionData_BuffData_o *)sub_B2C42C(BattleActionData_BuffData_TypeInfo),
        BattleActionData_BuffData___ctor(v8, 0LL),
        !v8)
    || (v8->fields.targetId = uniqueId, v8->fields.functionIndex = funcIndex, !funcEnt) )
  {
    sub_B2C434(this, funcEnt);
  }
  popupText = (System_Int32_array **)funcEnt->fields.popupText;
  v8->fields.popLabel = (struct System_String_o *)popupText;
  sub_B2C2F8(
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
  sub_B2C2F8((BattleServantConfConponent_o *)&v8->fields.effectList, EffectList, v15, v16, v17, v18, v19, v20);
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
  __int64 v5; // x1
  System_Collections_Generic_Dictionary_Voice_BATTLE__string__o *dicFuncProcess; // x0
  int32_t v7; // w1
  BattleLogicFunctionProcess_BaseFunctionTypeProcess_o *v8; // x20

  if ( (byte_418A775 & 1) == 0 )
  {
    sub_B2C35C(
      &Method_System_Collections_Generic_Dictionary_FuncList_TYPE__BattleLogicFunctionProcess_BaseFunctionTypeProcess__ContainsKey__,
      *(_QWORD *)&functType);
    sub_B2C35C(
      &Method_System_Collections_Generic_Dictionary_FuncList_TYPE__BattleLogicFunctionProcess_BaseFunctionTypeProcess__get_Item__,
      v5);
    byte_418A775 = 1;
  }
  dicFuncProcess = (System_Collections_Generic_Dictionary_Voice_BATTLE__string__o *)this->fields.dicFuncProcess;
  if ( !dicFuncProcess
    || (dicFuncProcess = (System_Collections_Generic_Dictionary_Voice_BATTLE__string__o *)System_Collections_Generic_Dictionary_Voice_BATTLE__string___ContainsKey(
                                                                                            dicFuncProcess,
                                                                                            functType,
                                                                                            (const MethodInfo_2E465F8 *)Method_System_Collections_Generic_Dictionary_FuncList_TYPE__BattleLogicFunctionProcess_BaseFunctionTypeProcess__ContainsKey__),
        !this->fields.dicFuncProcess)
    || (((unsigned __int8)dicFuncProcess & 1) == 0 ? (v7 = 0) : (v7 = functType),
        (dicFuncProcess = (System_Collections_Generic_Dictionary_Voice_BATTLE__string__o *)System_Collections_Generic_Dictionary_Voice_BATTLE__string___get_Item(
                                                                                             (System_Collections_Generic_Dictionary_Voice_BATTLE__string__o *)this->fields.dicFuncProcess,
                                                                                             v7,
                                                                                             (const MethodInfo_2E462C0 *)Method_System_Collections_Generic_Dictionary_FuncList_TYPE__BattleLogicFunctionProcess_BaseFunctionTypeProcess__get_Item__)) == 0LL) )
  {
    sub_B2C434(dicFuncProcess, *(_QWORD *)&functType);
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

  if ( (byte_418A787 & 1) == 0 )
  {
    sub_B2C35C(&BattleActionData_TypeInfo, *(_QWORD *)&targetId);
    byte_418A787 = 1;
  }
  v8 = (BattleActionData_o *)sub_B2C42C(BattleActionData_TypeInfo);
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
    sub_B2C434(GrayActionBuffData, v10);
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
    sub_B2C434(this, baseVals);
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
  System_String_array **v22; // x2
  System_String_array **v23; // x3
  System_Boolean_array **v24; // x4
  System_Int32_array **v25; // x5
  System_Int32_array *v26; // x6
  System_Int32_array *v27; // x7
  __int64 v28; // x0
  __int64 v29; // x1
  System_Int32_array **v30; // x1
  BattleServantConfConponent_o *p_popLabel; // x0
  System_Int32_array **v32; // x0
  System_String_array **v33; // x2
  System_String_array **v34; // x3
  System_Boolean_array **v35; // x4
  System_Int32_array **v36; // x5
  System_Int32_array *v37; // x6
  System_Int32_array *v38; // x7

  v10 = defBuffData;
  if ( (byte_418A783 & 1) == 0 )
  {
    sub_B2C35C(&BattleActionData_TypeInfo, *(_QWORD *)&targetId);
    sub_B2C35C(&BattleActionData_BuffData_TypeInfo, v18);
    sub_B2C35C(&int___TypeInfo, v19);
    sub_B2C35C(&StringLiteral_1/*""*/, v20);
    byte_418A783 = 1;
  }
  v21 = (BattleActionData_o *)sub_B2C42C(BattleActionData_TypeInfo);
  BattleActionData___ctor(v21, 0LL);
  if ( !defBuffData )
  {
    v10 = (BattleActionData_BuffData_o *)sub_B2C42C(BattleActionData_BuffData_TypeInfo);
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
    v30 = (System_Int32_array **)StringLiteral_1/*""*/;
    v10->fields.popLabel = (struct System_String_o *)StringLiteral_1/*""*/;
    p_popLabel = (BattleServantConfConponent_o *)&v10->fields.popLabel;
  }
  else
  {
    v10->fields.popLabel = dispName;
    p_popLabel = (BattleServantConfConponent_o *)&v10->fields.popLabel;
    v30 = (System_Int32_array **)dispName;
  }
  sub_B2C2F8(p_popLabel, v30, v22, v23, v24, v25, v26, v27);
  v32 = (System_Int32_array **)sub_B2C374(int___TypeInfo, 0LL);
  v10->fields.effectList = (struct System_Int32_array *)v32;
  sub_B2C2F8((BattleServantConfConponent_o *)&v10->fields.effectList, v32, v33, v34, v35, v36, v37, v38);
  if ( !v21
    || (BattleActionData__setBuffData(v21, v10, 0LL, 0LL),
        v10->fields.IsNoEffect = isNoEffect,
        v10->fields.isCommandAfter = isCommandSideEffect,
        !dataVals) )
  {
LABEL_11:
    sub_B2C434(v28, v29);
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
  if ( (byte_418A784 & 1) != 0 )
  {
    if ( uniqueText )
      goto LABEL_3;
  }
  else
  {
    sub_B2C35C(&LocalizationManager_TypeInfo, *(_QWORD *)&targetId);
    this = (BattleLogicFunction_o *)sub_B2C35C(&StringLiteral_2456/*"BATTLE_MISS_FUNCTION"*/, v16);
    byte_418A784 = 1;
    if ( v9 )
    {
LABEL_3:
      if ( dataVals )
        goto LABEL_4;
LABEL_10:
      sub_B2C434(this, *(_QWORD *)&targetId);
    }
  }
  if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !LocalizationManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  }
  this = (BattleLogicFunction_o *)LocalizationManager__Get((System_String_o *)StringLiteral_2456/*"BATTLE_MISS_FUNCTION"*/, 0LL);
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
  if ( (byte_418A785 & 1) != 0 )
  {
    if ( uniqueText )
      goto LABEL_3;
  }
  else
  {
    sub_B2C35C(&LocalizationManager_TypeInfo, *(_QWORD *)&targetId);
    this = (BattleLogicFunction_o *)sub_B2C35C(&StringLiteral_2467/*"BATTLE_NO_EFFECT_FUNCTION"*/, v16);
    byte_418A785 = 1;
    if ( v9 )
    {
LABEL_3:
      if ( dataVals )
        goto LABEL_4;
LABEL_10:
      sub_B2C434(this, *(_QWORD *)&targetId);
    }
  }
  if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !LocalizationManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  }
  this = (BattleLogicFunction_o *)LocalizationManager__Get((System_String_o *)StringLiteral_2467/*"BATTLE_NO_EFFECT_FUNCTION"*/, 0LL);
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
  __int64 v13; // x1
  Target_BattleTargetArgs_o *args; // x23
  __int64 v15; // x0
  __int64 v16; // x1
  BattleData_o *data; // x22
  int32_t actorId; // w24
  int32_t targetId; // w25
  int32_t PTTargetId; // w0
  System_Collections_Generic_IEnumerable_TSource__o *TargetIds_18697816; // x20
  System_Func_int__bool__o *v22; // x21
  System_Collections_Generic_IEnumerable_TSource__o *v23; // x0

  if ( (byte_418A77D & 1) == 0 )
  {
    sub_B2C35C(&Method_BattleLogicFunction__getTargetids_b__53_0__, mainAction);
    sub_B2C35C(&Target_BattleTargetArgs_TypeInfo, v9);
    sub_B2C35C(&Method_System_Linq_Enumerable_ToArray_int___, v10);
    sub_B2C35C(&Method_System_Linq_Enumerable_Where_int___, v11);
    sub_B2C35C(&Method_System_Func_int__bool___ctor__, v12);
    sub_B2C35C(&System_Func_int__bool__TypeInfo, v13);
    byte_418A77D = 1;
  }
  args = (Target_BattleTargetArgs_o *)sub_B2C42C(Target_BattleTargetArgs_TypeInfo);
  Target_BattleTargetArgs___ctor(args, dataVals, 0LL);
  if ( !mainAction )
    sub_B2C434(v15, v16);
  data = this->fields.data;
  actorId = mainAction->fields.actorId;
  targetId = mainAction->fields.targetId;
  PTTargetId = BattleActionData__getPTTargetId(mainAction, 0LL);
  TargetIds_18697816 = (System_Collections_Generic_IEnumerable_TSource__o *)Target__getTargetIds_18697816(
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
  v22 = (System_Func_int__bool__o *)sub_B2C42C(System_Func_int__bool__TypeInfo);
  System_Func_int__bool____ctor(
    v22,
    (Il2CppObject *)this,
    Method_BattleLogicFunction__getTargetids_b__53_0__,
    (const MethodInfo_270C930 *)Method_System_Func_int__bool___ctor__);
  v23 = System_Linq_Enumerable__Where_int_(
          TargetIds_18697816,
          (System_Func_TSource__bool__o *)v22,
          (const MethodInfo_1A9F150 *)Method_System_Linq_Enumerable_Where_int___);
  return System_Linq_Enumerable__ToArray_int_(
           v23,
           (const MethodInfo_1A9AE24 *)Method_System_Linq_Enumerable_ToArray_int___);
}


BattleFieldEnvironmentData_o *__fastcall BattleLogicFunction__get_FieldEnvData(
        BattleLogicFunction_o *this,
        const MethodInfo *method)
{
  struct BattleData_o *data; // x8

  data = this->fields.data;
  if ( !data )
    sub_B2C434(this, method);
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
    sub_B2C434(this, passive);
  v5 = passive;
  if ( DataVals__isParam(baseVals, 50, 0LL) || DataVals__isParam(baseVals, 87, 0LL) )
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
    sub_B2C434(this, args);
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
    sub_B2C434(this, 0LL);
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
    sub_B2C434(this, *(_QWORD *)&uniqueId);
  v4 = *(_QWORD *)&funclist->max_length;
  if ( (int)v4 < 1 )
    return 0;
  v6 = this;
  v7 = 0LL;
  while ( 1 )
  {
    if ( v7 >= (unsigned int)v4 )
    {
      v9 = sub_B2C460(this);
      sub_B2C400(v9, 0LL);
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
  System_String_o *v68; // x0
  System_String_o *v69; // x0
  System_String_o *v70; // x0
  System_String_array **v71; // x2
  System_String_array **v72; // x3
  System_Boolean_array **v73; // x4
  System_Int32_array **v74; // x5
  System_Int32_array *v75; // x6
  System_Int32_array *v76; // x7
  struct BattleData_o *data; // x8
  UnityEngine_Object_o *logic; // x24
  BattleLogicFunction_ProcListInArgs_o *v79; // x24
  int32_t *p_actSetId; // x22
  WeightRate_int__o *v81; // x23
  signed int max_length; // w8
  unsigned int v83; // w24
  Il2CppClass **v84; // x8
  DataVals_o *v85; // x25
  int32_t ActSetWeight; // w26
  BattleServantData_o *v87; // x24
  int32_t Random; // w0
  System_String_o *v89; // x0
  WellFired_USFGOPlayBgmEventConditional_CondBGM_array *funcUnitArray_k__BackingField; // x21
  BattleLogicFunction___c_c *v91; // x0
  bool v92; // w23
  struct BattleLogicFunction___c_StaticFields *static_fields; // x8
  System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *_9__40_0; // x22
  Il2CppObject *v95; // x23
  struct BattleLogicFunction___c_StaticFields *v96; // x0
  System_String_array **v97; // x2
  System_String_array **v98; // x3
  System_Boolean_array **v99; // x4
  System_Int32_array **v100; // x5
  System_Int32_array *v101; // x6
  System_Int32_array *v102; // x7
  BattleLogicFunction___c_c *v103; // x0
  System_Collections_Generic_IEnumerable_TSource__o *v104; // x21
  struct BattleLogicFunction___c_StaticFields *v105; // x8
  System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *_9__40_1; // x22
  Il2CppObject *v107; // x23
  struct BattleLogicFunction___c_StaticFields *v108; // x0
  System_String_array **v109; // x2
  System_String_array **v110; // x3
  System_Boolean_array **v111; // x4
  System_Int32_array **v112; // x5
  System_Int32_array *v113; // x6
  System_Int32_array *v114; // x7
  BattleData_o *v115; // x21
  SkillValueUpApplierPlayerMaster_o *v116; // x22
  SkillValueUpApplierPlayerMaster_o *v117; // x10
  struct BattleLogicFunctionProcess_FunctionUnitCheck_array *v118; // x22
  int v119; // w8
  BattleLogicFunction_FuncSideEffectFunctionArgument_o *v120; // x25
  int v121; // w26
  BattleCommandData_o *v122; // x22
  UnityEngine_Object_o *v123; // x23
  struct BattleLogic_o *v124; // x8
  unsigned __int64 v125; // x23
  BattleLogicFunctionProcess_FunctionUnitCheck_o *v126; // x21
  DataVals_o *dataVals_k__BackingField; // x26
  const MethodInfo *v128; // x4
  BattleLogicFunction___c_c *v129; // x0
  System_Collections_Generic_IEnumerable_TSource__o *funcTargetArray_k__BackingField; // x21
  struct BattleLogicFunction___c_StaticFields *v131; // x8
  System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *_9__40_2; // x27
  Il2CppObject *v133; // x28
  struct BattleLogicFunction___c_StaticFields *v134; // x0
  System_String_array **v135; // x2
  System_String_array **v136; // x3
  System_Boolean_array **v137; // x4
  System_Int32_array **v138; // x5
  System_Int32_array *v139; // x6
  System_Int32_array *v140; // x7
  System_Collections_Generic_IEnumerable_TSource__o *v141; // x21
  BattleLogicFunction___c_c *v142; // x8
  struct BattleLogicFunction___c_StaticFields *v143; // x9
  System_Func_BattleLogicBuff_ReduceHpProcess_BuffInfo__int__o *_9__40_3; // x27
  Il2CppObject *v145; // x28
  struct BattleLogicFunction___c_StaticFields *v146; // x0
  System_String_array **v147; // x2
  System_String_array **v148; // x3
  System_Boolean_array **v149; // x4
  System_Int32_array **v150; // x5
  System_Int32_array *v151; // x6
  System_Int32_array *v152; // x7
  System_Collections_Generic_IEnumerable_TSource__o *v153; // x0
  System_Int32_array *v154; // x21
  bool v155; // w27
  BattleLogicFunction_PreAttackSideEffectMakeArgument_o *v156; // x28
  BattleLogicFunction_SideEffectMakeArgument_o *v157; // x0
  const MethodInfo *v158; // x5
  struct BattleLogicFunctionProcess_FunctionTargetCheck_array *v159; // x22
  int v160; // w8
  int i; // w24
  BattleData_o *v162; // x21
  int32_t Value; // w20
  BattleLogicFunction_o *v164; // x0
  const MethodInfo *v165; // x6
  BattleData_o *v166; // x21
  int32_t *v167; // x20
  BattleActionData_o *v168; // x0
  const MethodInfo *v169; // x7
  bool isUnaffected; // w23
  int32_t CorrectedValueFuncGainNp; // w21
  const MethodInfo *v172; // x7
  BattleLogicFunction_o *v173; // x0
  int32_t v174; // w23
  const MethodInfo *v175; // x6
  BattleLogicFunction_o *v176; // x21
  BattleActionData_o *v177; // x0
  BattleActionData_BuffData_o *v178; // x1
  DataVals_o *v179; // x2
  int32_t v180; // w0
  BattleLogicFunction_o *v181; // x0
  int32_t v182; // w20
  const MethodInfo *v183; // x6
  BattleLogicFunction_o *v184; // x21
  int32_t v185; // w21
  System_Int32_array *TargetList; // x23
  int32_t v187; // w0
  _BOOL8 v188; // x0
  const MethodInfo *v189; // x6
  int32_t v190; // w1
  BattleLogicFunction_o *v191; // x0
  int32_t v192; // w2
  bool v193; // w4
  DataVals_o *v194; // x3
  int32_t v195; // w21
  System_Int32_array *v196; // x23
  int32_t v197; // w0
  int32_t v198; // w2
  BattleActionData_BuffData_o *FunctionObject; // x1
  BattleActionData_o *v200; // x0
  DataVals_o *v201; // x2
  BattleActionData_o *v202; // x0
  const MethodInfo *v203; // x3
  int32_t v204; // w21
  bool v205; // w6
  int32_t v206; // w1
  BattleLogicFunction_o *v207; // x0
  FunctionEntity_o *v208; // x3
  int32_t v209; // w5
  bool v210; // w6
  int32_t v211; // w2
  DataVals_o *v212; // x4
  bool v213; // w7
  const MethodInfo *v214; // x7
  const MethodInfo *v215; // x7
  const MethodInfo *v216; // x6
  int32_t v217; // w1
  FunctionEntity_o *v218; // x2
  DataVals_o *v219; // x3
  int32_t v220; // w4
  const MethodInfo *v221; // x5
  BattleLogicFunction_o *v222; // x20
  BattleActionData_o *v223; // x0
  FunctionEntity_o *v224; // x1
  FunctionEntity_o *v225; // x3
  MethodInfo *v226; // x4
  const MethodInfo *v227; // x6
  int32_t applyTarget; // w8
  FunctionEntity_o *v229; // x2
  const MethodInfo *v230; // x5
  BattleActionData_o *v231; // x0
  const MethodInfo *v232; // x5
  BattleActionData_o *v233; // x0
  FunctionEntity_o *v234; // x2
  const MethodInfo *v235; // x6
  int32_t v236; // w1
  FunctionEntity_o *v237; // x2
  DataVals_o *v238; // x3
  int32_t v239; // w4
  const MethodInfo *v240; // x5
  BattleActionData_o *v241; // x0
  FunctionEntity_o *v242; // x3
  int32_t v243; // w5
  const MethodInfo *v244; // x6
  _BOOL8 v245; // x0
  FunctionEntity_o *v246; // x2
  int32_t v247; // w4
  const MethodInfo *v248; // x5
  const MethodInfo *v249; // x3
  int32_t v250; // w21
  int32_t v251; // w23
  char v252; // w5
  const MethodInfo *v253; // x7
  BattleLogicFunction_o *v254; // x0
  int32_t v255; // w1
  int32_t v256; // w2
  System_String_array **v257; // x2
  System_String_array **v258; // x3
  System_Boolean_array **v259; // x4
  System_Int32_array **v260; // x5
  System_Int32_array *v261; // x6
  System_Int32_array *v262; // x7
  struct BattleData_o *v263; // x8
  System_Int32_array **draw_commandlist; // x1
  int v265; // w21
  bool isParam; // w23
  System_Int32_array *v267; // x0
  int32_t v268; // w23
  Generator_BGMFromChangeBGMFunc_o *v269; // x21
  const MethodInfo *v270; // x3
  _BOOL8 v271; // x0
  const MethodInfo *v272; // x6
  const MethodInfo *v273; // x6
  System_Int32_array *v274; // x21
  int32_t SameIndiualityBuffSum; // w0
  int32_t v276; // w21
  int v277; // w21
  bool isGainNp; // w0
  BattleLogicFunction_o *v279; // x0
  int32_t v280; // w20
  const MethodInfo *v281; // x6
  const MethodInfo *v282; // x7
  int32_t v283; // w1
  int32_t v284; // w2
  int32_t v285; // w5
  const MethodInfo *v286; // x4
  const MethodInfo *v287; // x4
  _BOOL8 v288; // x0
  const MethodInfo *v289; // x3
  bool v290; // w21
  int32_t v291; // w23
  int32_t v292; // w1
  const MethodInfo *v293; // x3
  BattleLogicFunction_o *v294; // x0
  bool v295; // w2
  DataVals_o *v296; // x1
  Generator_BGFromQuickChangeBGFunc_o *v297; // x21
  const MethodInfo *v298; // x3
  int32_t Param; // w0
  const MethodInfo *v300; // x4
  BattleBuffData_o *buffProgressTurnSelfList; // x21
  BattleActionData_UpShiftGaugeData_o *v302; // x21
  const MethodInfo *v303; // x5
  DataVals_o *v304; // x3
  const MethodInfo *v305; // x5
  BattleActionData_o *SubMember; // x0
  const MethodInfo *v307; // x3
  const MethodInfo *v308; // x6
  const MethodInfo *v309; // x4
  const MethodInfo *v310; // x3
  _BOOL8 v311; // x0
  const MethodInfo *v312; // x3
  const MethodInfo *v313; // x2
  const MethodInfo *v314; // x2
  const MethodInfo *v315; // x5
  const MethodInfo *v316; // x4
  const MethodInfo *v317; // x4
  int32_t v318; // w0
  const MethodInfo *v319; // x2
  bool v320; // cc
  BattleLogicFunctionProcess_FunctionTargetCheck_o *v321; // x21
  int32_t targetId_k__BackingField; // w27
  BattleLogicFunction_o *v323; // x28
  const MethodInfo *v324; // x7
  BattleActionData_o *NoEffectObject; // x0
  struct System_Int32_array *vals; // x8
  int32_t commandType; // w8
  bool v328; // w0
  const MethodInfo *v329; // x5
  const MethodInfo *v330; // x3
  int32_t v331; // w23
  bool isSafeDamage; // w0
  int32_t v333; // w2
  const MethodInfo *v334; // x7
  const MethodInfo *v335; // x7
  int32_t actorId; // w1
  int32_t v337; // w2
  int32_t v338; // w5
  int v339; // w8
  struct System_Collections_Generic_List_int__o *v340; // x8
  BattleActionData_o *v341; // x0
  int v342; // w26
  bool v343; // w21
  BattleLogicFunction_AfterAttackSideEffectMakeArgument_o *v344; // x22
  BattleLogicFunction_SideEffectMakeArgument_o *Argument__Init; // x0
  const MethodInfo *v346; // x5
  BattleLogicFunction_o *v347; // x21
  UnityEngine_Object_o *v348; // x21
  int v349; // w8
  BattleLogicFunction_o *v350; // x21
  unsigned int v351; // w22
  __int64 v352; // x8
  BattleLogicFunction_FuncSideEffectFunctionArgument_o *FuncSideEffectArg; // x0
  UnityEngine_Object_o *v354; // x21
  struct BattleData_o *v355; // x8
  UnityEngine_Object_o *v356; // x21
  BattleData_o *v357; // x0
  BattleServantData_o *v358; // x0
  __int64 v359; // x1
  __int64 v361; // x0
  const MethodInfo *overwriteLossHp; // [xsp+0h] [xbp-170h]
  int32_t overwriteLossHpa; // [xsp+0h] [xbp-170h]
  const MethodInfo *v364; // [xsp+18h] [xbp-158h]
  int32_t subTargetId; // [xsp+24h] [xbp-14Ch]
  int32_t *p_actorId; // [xsp+28h] [xbp-148h]
  _BYTE v367[12]; // [xsp+34h] [xbp-13Ch]
  char isTurn; // [xsp+40h] [xbp-130h]
  BattleData_o *isTurna; // [xsp+40h] [xbp-130h]
  int32_t isTurnb; // [xsp+40h] [xbp-130h]
  BattleLogicFunction_o *v371; // [xsp+48h] [xbp-128h]
  System_Collections_Generic_List_int__o *v372; // [xsp+50h] [xbp-120h]
  struct BattleLogicFunctionProcess_FunctionUnitCheck_array *v373; // [xsp+60h] [xbp-110h]
  int v374; // [xsp+6Ch] [xbp-104h]
  BattleServantData_o *ServantData; // [xsp+70h] [xbp-100h]
  BattleLogicFunctionProcess_FunctionUnitCheck_o *funcUnit; // [xsp+80h] [xbp-F0h]
  int v378; // [xsp+8Ch] [xbp-E4h]
  DataMasterBase_WarMaster__WarEntity__int__o *MasterData_WarQuestSelectionMaster; // [xsp+90h] [xbp-E0h]
  int32_t funcIdx; // [xsp+9Ch] [xbp-D4h]
  int32_t *p_funcType; // [xsp+A0h] [xbp-D0h]
  FunctionEntity_o *funcEnt; // [xsp+B0h] [xbp-C0h]
  BattleLogicFunction_ProcListInArgs_o *args; // [xsp+B8h] [xbp-B8h]
  BattleLogicFunction_o *v384; // [xsp+C0h] [xbp-B0h]
  System_Collections_Generic_List_Enumerator_int__o v385; // [xsp+C8h] [xbp-A8h] BYREF
  System_Collections_Generic_List_Enumerator_int__o v386; // [xsp+E0h] [xbp-90h] BYREF
  int32_t absorptionCount; // [xsp+FCh] [xbp-74h] BYREF
  RemovedBuffInfo_o *subBuffInfo; // [xsp+100h] [xbp-70h] BYREF
  int32_t funcIndex; // [xsp+10Ch] [xbp-64h] BYREF
  __int64 v390[2]; // [xsp+110h] [xbp-60h] BYREF

  v384 = this;
  if ( (byte_418A776 & 1) == 0 )
  {
    sub_B2C35C(&BattleLogicFunction_AfterAttackSideEffectMakeArgument_TypeInfo, action);
    sub_B2C35C(&Generator_BGFromQuickChangeBGFunc_TypeInfo, v20);
    sub_B2C35C(&Generator_BGMFromChangeBGMFunc_TypeInfo, v21);
    sub_B2C35C(&Method_BasicHelper_Any_BattleLogicFunctionProcess_FunctionUnitCheck___, v22);
    sub_B2C35C(&BattleCommandData_TypeInfo, v23);
    sub_B2C35C(&Method_DataManager_GetMasterData_BuffMaster___, v24);
    sub_B2C35C(&Method_DataMasterBase_BuffMaster__BuffEntity__int__GetEntity__, v25);
    sub_B2C35C(&BattleActionData_DownShiftGaugeData_TypeInfo, v26);
    sub_B2C35C(&Method_System_Linq_Enumerable_All_BattleLogicFunctionProcess_FunctionUnitCheck___, v27);
    sub_B2C35C(&Method_System_Linq_Enumerable_Select_BattleLogicFunctionProcess_FunctionTargetCheck__int___, v28);
    sub_B2C35C(&Method_System_Linq_Enumerable_ToArray_int___, v29);
    sub_B2C35C(&Method_System_Linq_Enumerable_Where_BattleLogicFunctionProcess_FunctionTargetCheck___, v30);
    sub_B2C35C(&Method_System_Collections_Generic_List_Enumerator_int__Dispose__, v31);
    sub_B2C35C(&Method_System_Collections_Generic_List_Enumerator_int__MoveNext__, v32);
    sub_B2C35C(&Method_System_Collections_Generic_List_Enumerator_int__get_Current__, v33);
    sub_B2C35C(&Method_System_Func_BattleLogicFunctionProcess_FunctionUnitCheck__bool___ctor__, v34);
    sub_B2C35C(&Method_System_Func_BattleLogicFunctionProcess_FunctionTargetCheck__int___ctor__, v35);
    sub_B2C35C(&Method_System_Func_BattleLogicFunctionProcess_FunctionTargetCheck__bool___ctor__, v36);
    sub_B2C35C(&System_Func_BattleLogicFunctionProcess_FunctionTargetCheck__bool__TypeInfo, v37);
    sub_B2C35C(&System_Func_BattleLogicFunctionProcess_FunctionTargetCheck__int__TypeInfo, v38);
    sub_B2C35C(&System_Func_BattleLogicFunctionProcess_FunctionUnitCheck__bool__TypeInfo, v39);
    sub_B2C35C(&Method_System_Collections_Generic_List_int__Add__, v40);
    sub_B2C35C(&Method_System_Collections_Generic_List_int__GetEnumerator__, v41);
    sub_B2C35C(&Method_System_Collections_Generic_List_int___ctor__, v42);
    sub_B2C35C(&System_Collections_Generic_List_int__TypeInfo, v43);
    sub_B2C35C(&UnityEngine_Object_TypeInfo, v44);
    sub_B2C35C(&BattleLogicFunction_PreAttackSideEffectMakeArgument_TypeInfo, v45);
    sub_B2C35C(&BattleLogicFunction_ProcListInArgs_TypeInfo, v46);
    sub_B2C35C(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v47);
    sub_B2C35C(&SkillValueUpApplierPlayerMaster_TypeInfo, v48);
    sub_B2C35C(&Method_BattleLogicFunction___c__procList_b__40_0__, v49);
    sub_B2C35C(&Method_BattleLogicFunction___c__procList_b__40_1__, v50);
    sub_B2C35C(&Method_BattleLogicFunction___c__procList_b__40_2__, v51);
    sub_B2C35C(&Method_BattleLogicFunction___c__procList_b__40_3__, v52);
    sub_B2C35C(&BattleLogicFunction___c_TypeInfo, v53);
    sub_B2C35C(&BattleActionData_UpShiftGaugeData_TypeInfo, v54);
    sub_B2C35C(&Method_WeightRate_int___ctor__, v55);
    sub_B2C35C(&Method_WeightRate_int__getCount__, v56);
    sub_B2C35C(&Method_WeightRate_int__getData__, v57);
    sub_B2C35C(&Method_WeightRate_int__getTotalWeight__, v58);
    sub_B2C35C(&Method_WeightRate_int__setWeight__, v59);
    sub_B2C35C(&WeightRate_int__TypeInfo, v60);
    sub_B2C35C(&StringLiteral_1508/*"====< end BattleLogicFunction::procList >====="*/, v61);
    sub_B2C35C(&StringLiteral_205/*" enemytargetId: "*/, v62);
    sub_B2C35C(&StringLiteral_1509/*"====< start BattleLogicFunction::procList >====="*/, v63);
    sub_B2C35C(&StringLiteral_251/*" pttargetId: "*/, v64);
    sub_B2C35C(&StringLiteral_1511/*"========="*/, v65);
    sub_B2C35C(&StringLiteral_1520/*">actSetId: "*/, v66);
    this = (BattleLogicFunction_o *)sub_B2C35C(&StringLiteral_176/*" actorId: "*/, v67);
    byte_418A776 = 1;
  }
  v390[0] = 0LL;
  funcIndex = 0;
  subBuffInfo = 0LL;
  absorptionCount = 0;
  memset(&v386, 0, sizeof(v386));
  if ( !action )
    goto LABEL_418;
  p_actorId = &action->fields.actorId;
  v68 = System_Int32__ToString((int)action + 32, 0LL);
  System_String__Concat_44305532((System_String_o *)StringLiteral_176/*" actorId: "*/, v68, 0LL);
  this = (BattleLogicFunction_o *)v384->fields.data;
  if ( !this )
    goto LABEL_418;
  ServantData = BattleData__getServantData((BattleData_o *)this, action->fields.actorId, 0LL);
  HIDWORD(v390[0]) = action->fields.targetId;
  v69 = System_Int32__ToString((int32_t)v390 + 4, 0LL);
  System_String__Concat_44305532((System_String_o *)StringLiteral_205/*" enemytargetId: "*/, v69, 0LL);
  LODWORD(v390[0]) = BattleActionData__getPTTargetId(action, 0LL);
  subTargetId = BattleActionData__getPTSubTargetId(action, 0LL);
  v70 = System_Int32__ToString((int32_t)v390, 0LL);
  this = (BattleLogicFunction_o *)System_String__Concat_44305532((System_String_o *)StringLiteral_251/*" pttargetId: "*/, v70, 0LL);
  data = v384->fields.data;
  if ( !data )
    goto LABEL_418;
  data->fields.beforeAction = action;
  sub_B2C2F8(
    (BattleServantConfConponent_o *)&data->fields.beforeAction,
    (System_Int32_array **)action,
    v71,
    v72,
    v73,
    v74,
    v75,
    v76);
  v372 = (System_Collections_Generic_List_int__o *)sub_B2C42C(System_Collections_Generic_List_int__TypeInfo);
  System_Collections_Generic_List_int____ctor(
    v372,
    (const MethodInfo_2F6629C *)Method_System_Collections_Generic_List_int___ctor__);
  this = (BattleLogicFunction_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !this )
    goto LABEL_418;
  MasterData_WarQuestSelectionMaster = (DataMasterBase_WarMaster__WarEntity__int__o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                                                        (DataManager_o *)this,
                                                                                        (const MethodInfo_17339EC *)Method_DataManager_GetMasterData_BuffMaster___);
  if ( isReduceReset )
  {
    logic = (UnityEngine_Object_o *)v384->fields.logic;
    if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    }
    if ( UnityEngine_Object__op_Inequality(logic, 0LL, 0LL) )
    {
      this = (BattleLogicFunction_o *)v384->fields.logic;
      if ( !this )
        goto LABEL_418;
      BattleLogic__resetReducedHpAll((BattleLogic_o *)this, 0LL);
    }
  }
  v79 = (BattleLogicFunction_ProcListInArgs_o *)sub_B2C42C(BattleLogicFunction_ProcListInArgs_TypeInfo);
  BattleLogicFunction_ProcListInArgs___ctor(v79, argument, 0LL);
  if ( !v79 )
    goto LABEL_418;
  BattleLogicFunction_ProcListInArgs__set_IsCommandSideEffect(v79, isCommandSideEffect, 0LL);
  BattleLogicFunction_ProcListInArgs__set_IsShift(v79, isShift, 0LL);
  BattleLogicFunction_ProcListInArgs__set_IsPassive(v79, passive, 0LL);
  if ( BattleLogicFunction_ProcListInArgs__get_SkillId(v79, 0LL) <= 0 )
    BattleLogicFunction_ProcListInArgs__set_SkillId(v79, skillId, 0LL);
  funcIndex = 0;
  BattleLogicFunction_ProcListInArgs__initFunctionUnitCheck(v79, v384, functionlist, baseValslist, &funcIndex, 0LL);
  args = v79;
  v79->fields.actSetId = 0;
  p_actSetId = &v79->fields.actSetId;
  v81 = (WeightRate_int__o *)sub_B2C42C(WeightRate_int__TypeInfo);
  WeightRate_int____ctor(v81, (const MethodInfo_29E4118 *)Method_WeightRate_int___ctor__);
  if ( !baseValslist )
    goto LABEL_418;
  max_length = baseValslist->max_length;
  if ( max_length >= 1 )
  {
    v83 = 0;
    while ( v83 < max_length )
    {
      v84 = &baseValslist->obj.klass + (int)v83;
      v85 = (DataVals_o *)v84[4];
      if ( !v85 )
        goto LABEL_418;
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
            goto LABEL_418;
          WeightRate_int___setWeight(
            v81,
            ActSetWeight,
            (int32_t)this,
            (const MethodInfo_29E32E0 *)Method_WeightRate_int__setWeight__);
        }
      }
      max_length = baseValslist->max_length;
      if ( (int)++v83 >= max_length )
        goto LABEL_27;
    }
LABEL_419:
    v361 = sub_B2C460(this);
    sub_B2C400(v361, 0LL);
  }
LABEL_27:
  if ( !v81 )
    goto LABEL_418;
  v87 = ServantData;
  if ( WeightRate_int___getCount(v81, (const MethodInfo_29E3680 *)Method_WeightRate_int__getCount__) >= 1 )
  {
    Random = BattleRandom__getRandom(0, v81->fields.totalweight, 0LL);
    *p_actSetId = WeightRate_int___getData(v81, Random, (const MethodInfo_29E3764 *)Method_WeightRate_int__getData__);
    v89 = System_Int32__ToString((int32_t)p_actSetId, 0LL);
    System_String__Concat_44305532((System_String_o *)StringLiteral_1520/*">actSetId: "*/, v89, 0LL);
  }
  action->fields.ActSetId = args->fields.actSetId;
  BattleActionData__initFuncTargetPlayerType(action, funcIndex, 0LL);
  funcUnitArray_k__BackingField = (WellFired_USFGOPlayBgmEventConditional_CondBGM_array *)args->fields._funcUnitArray_k__BackingField;
  v91 = BattleLogicFunction___c_TypeInfo;
  if ( (BYTE3(BattleLogicFunction___c_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 )
  {
    v92 = isCommandSideEffect;
    if ( !BattleLogicFunction___c_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(BattleLogicFunction___c_TypeInfo);
      v91 = BattleLogicFunction___c_TypeInfo;
    }
  }
  else
  {
    v92 = isCommandSideEffect;
  }
  static_fields = v91->static_fields;
  _9__40_0 = (System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *)static_fields->__9__40_0;
  if ( !_9__40_0 )
  {
    if ( (BYTE3(v91->vtable._0_Equals.methodPtr) & 4) != 0 && !v91->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v91);
      static_fields = BattleLogicFunction___c_TypeInfo->static_fields;
    }
    v95 = (Il2CppObject *)static_fields->__9;
    _9__40_0 = (System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *)sub_B2C42C(System_Func_BattleLogicFunctionProcess_FunctionUnitCheck__bool__TypeInfo);
    System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool____ctor(
      _9__40_0,
      v95,
      Method_BattleLogicFunction___c__procList_b__40_0__,
      (const MethodInfo_2711C04 *)Method_System_Func_BattleLogicFunctionProcess_FunctionUnitCheck__bool___ctor__);
    v96 = BattleLogicFunction___c_TypeInfo->static_fields;
    v96->__9__40_0 = (struct System_Func_BattleLogicFunctionProcess_FunctionUnitCheck__bool__o *)_9__40_0;
    sub_B2C2F8(
      (BattleServantConfConponent_o *)&v96->__9__40_0,
      (System_Int32_array **)_9__40_0,
      v97,
      v98,
      v99,
      v100,
      v101,
      v102);
    v92 = isCommandSideEffect;
  }
  if ( !BasicHelper__Any_USFGOPlayBgmEventConditional_CondBGM_(
          funcUnitArray_k__BackingField,
          (System_Func_T__bool__o *)_9__40_0,
          (const MethodInfo_1726758 *)Method_BasicHelper_Any_BattleLogicFunctionProcess_FunctionUnitCheck___) )
    action->fields.isSuccessTargetSelection = 1;
  v103 = BattleLogicFunction___c_TypeInfo;
  v104 = (System_Collections_Generic_IEnumerable_TSource__o *)args->fields._funcUnitArray_k__BackingField;
  if ( (BYTE3(BattleLogicFunction___c_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !BattleLogicFunction___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BattleLogicFunction___c_TypeInfo);
    v103 = BattleLogicFunction___c_TypeInfo;
  }
  v105 = v103->static_fields;
  _9__40_1 = (System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *)v105->__9__40_1;
  if ( !_9__40_1 )
  {
    if ( (BYTE3(v103->vtable._0_Equals.methodPtr) & 4) != 0 && !v103->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v103);
      v105 = BattleLogicFunction___c_TypeInfo->static_fields;
    }
    v107 = (Il2CppObject *)v105->__9;
    _9__40_1 = (System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *)sub_B2C42C(System_Func_BattleLogicFunctionProcess_FunctionUnitCheck__bool__TypeInfo);
    System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool____ctor(
      _9__40_1,
      v107,
      Method_BattleLogicFunction___c__procList_b__40_1__,
      (const MethodInfo_2711C04 *)Method_System_Func_BattleLogicFunctionProcess_FunctionUnitCheck__bool___ctor__);
    v108 = BattleLogicFunction___c_TypeInfo->static_fields;
    v108->__9__40_1 = (struct System_Func_BattleLogicFunctionProcess_FunctionUnitCheck__bool__o *)_9__40_1;
    sub_B2C2F8(
      (BattleServantConfConponent_o *)&v108->__9__40_1,
      (System_Int32_array **)_9__40_1,
      v109,
      v110,
      v111,
      v112,
      v113,
      v114);
    v92 = isCommandSideEffect;
  }
  action->fields.isSkillCopyFunctionOnly = System_Linq_Enumerable__All_WarBoardManager_WarBoardOnboardSkillTarget_(
                                             v104,
                                             (System_Func_TSource__bool__o *)_9__40_1,
                                             (const MethodInfo_173783C *)Method_System_Linq_Enumerable_All_BattleLogicFunctionProcess_FunctionUnitCheck___);
  this = (BattleLogicFunction_o *)BattleLogicFunction_ProcListInArgs__MatchSkillType(args, 1, 0LL);
  if ( ((unsigned __int8)this & 1) != 0
    && (v115 = v384->fields.data,
        v116 = (SkillValueUpApplierPlayerMaster_o *)sub_B2C42C(SkillValueUpApplierPlayerMaster_TypeInfo),
        SkillValueUpApplierPlayerMaster___ctor(v116, v115, 0LL),
        v116) )
  {
    this = (BattleLogicFunction_o *)((__int64 (__fastcall *)(SkillValueUpApplierPlayerMaster_o *, Il2CppMethodPointer))v116->klass->vtable._4_Init.method)(
                                      v116,
                                      v116->klass->vtable._5_ApplyTo.methodPtr);
    v117 = v116;
    v374 = 1;
  }
  else
  {
    v374 = 0;
    v117 = 0LL;
  }
  v118 = args->fields._funcUnitArray_k__BackingField;
  if ( !v118 )
    goto LABEL_418;
  v119 = v118->max_length;
  if ( v119 >= 1 )
  {
    v371 = (BattleLogicFunction_o *)v117;
    v120 = 0LL;
    v121 = 0;
    v367[8] = 0;
    v373 = args->fields._funcUnitArray_k__BackingField;
    *(_QWORD *)v367 = ServantData == 0LL || !isTreasureDvc;
    while ( 1 )
    {
      if ( v121 >= (unsigned int)v119 )
        goto LABEL_419;
      v126 = v118->m_Items[v121];
      v378 = v121;
      if ( !v126 )
        goto LABEL_418;
      this = (BattleLogicFunction_o *)BattleLogicFunctionProcess_FunctionUnitCheck__get_FuncIndex(v126, 0LL);
      dataVals_k__BackingField = v126->fields._dataVals_k__BackingField;
      funcIdx = (int)this;
      if ( !dataVals_k__BackingField )
        goto LABEL_418;
      funcEnt = dataVals_k__BackingField->fields.funcEnt;
      funcUnit = v126;
      this = (BattleLogicFunction_o *)BattleLogicFunctionProcess_FunctionUnitCheck__checkCondtion(v126, action, 0LL);
      if ( ((unsigned __int8)this & 1) == 0 )
        goto LABEL_371;
      if ( v374 )
      {
        this = v371;
        if ( !v371 )
          goto LABEL_418;
        this = (BattleLogicFunction_o *)((__int64 (__fastcall *)(BattleLogicFunction_o *, BattleLogicFunctionProcess_FunctionUnitCheck_o *, void *))v371->klass[1]._1.namespaze)(
                                          v371,
                                          v126,
                                          v371->klass[1]._1.byval_arg.data);
      }
      if ( isCreateSideEffect )
      {
        if ( !funcEnt )
          goto LABEL_418;
        this = (BattleLogicFunction_o *)FuncList__isDamage(funcEnt->fields.funcType, 0LL);
        if ( ((unsigned __int8)this & 1) != 0 )
        {
          v129 = BattleLogicFunction___c_TypeInfo;
          funcTargetArray_k__BackingField = (System_Collections_Generic_IEnumerable_TSource__o *)v126->fields._funcTargetArray_k__BackingField;
          if ( (BYTE3(BattleLogicFunction___c_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
            && !BattleLogicFunction___c_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(BattleLogicFunction___c_TypeInfo);
            v129 = BattleLogicFunction___c_TypeInfo;
          }
          v131 = v129->static_fields;
          _9__40_2 = (System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *)v131->__9__40_2;
          if ( !_9__40_2 )
          {
            if ( (BYTE3(v129->vtable._0_Equals.methodPtr) & 4) != 0 && !v129->_2.cctor_finished )
            {
              j_il2cpp_runtime_class_init_0(v129);
              v131 = BattleLogicFunction___c_TypeInfo->static_fields;
            }
            v133 = (Il2CppObject *)v131->__9;
            _9__40_2 = (System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *)sub_B2C42C(System_Func_BattleLogicFunctionProcess_FunctionTargetCheck__bool__TypeInfo);
            System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool____ctor(
              _9__40_2,
              v133,
              Method_BattleLogicFunction___c__procList_b__40_2__,
              (const MethodInfo_2711C04 *)Method_System_Func_BattleLogicFunctionProcess_FunctionTargetCheck__bool___ctor__);
            v134 = BattleLogicFunction___c_TypeInfo->static_fields;
            v134->__9__40_2 = (struct System_Func_BattleLogicFunctionProcess_FunctionTargetCheck__bool__o *)_9__40_2;
            sub_B2C2F8(
              (BattleServantConfConponent_o *)&v134->__9__40_2,
              (System_Int32_array **)_9__40_2,
              v135,
              v136,
              v137,
              v138,
              v139,
              v140);
          }
          v141 = System_Linq_Enumerable__Where_WarBoardManager_WarBoardOnboardSkillTarget_(
                   funcTargetArray_k__BackingField,
                   (System_Func_TSource__bool__o *)_9__40_2,
                   (const MethodInfo_1A9F3E4 *)Method_System_Linq_Enumerable_Where_BattleLogicFunctionProcess_FunctionTargetCheck___);
          v142 = BattleLogicFunction___c_TypeInfo;
          if ( (BYTE3(BattleLogicFunction___c_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
            && !BattleLogicFunction___c_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(BattleLogicFunction___c_TypeInfo);
            v142 = BattleLogicFunction___c_TypeInfo;
          }
          v143 = v142->static_fields;
          _9__40_3 = (System_Func_BattleLogicBuff_ReduceHpProcess_BuffInfo__int__o *)v143->__9__40_3;
          if ( !_9__40_3 )
          {
            if ( (BYTE3(v142->vtable._0_Equals.methodPtr) & 4) != 0 && !v142->_2.cctor_finished )
            {
              j_il2cpp_runtime_class_init_0(v142);
              v143 = BattleLogicFunction___c_TypeInfo->static_fields;
            }
            v145 = (Il2CppObject *)v143->__9;
            _9__40_3 = (System_Func_BattleLogicBuff_ReduceHpProcess_BuffInfo__int__o *)sub_B2C42C(System_Func_BattleLogicFunctionProcess_FunctionTargetCheck__int__TypeInfo);
            System_Func_BattleLogicBuff_ReduceHpProcess_BuffInfo__int____ctor(
              _9__40_3,
              v145,
              Method_BattleLogicFunction___c__procList_b__40_3__,
              (const MethodInfo_27127B0 *)Method_System_Func_BattleLogicFunctionProcess_FunctionTargetCheck__int___ctor__);
            v146 = BattleLogicFunction___c_TypeInfo->static_fields;
            v146->__9__40_3 = (struct System_Func_BattleLogicFunctionProcess_FunctionTargetCheck__int__o *)_9__40_3;
            sub_B2C2F8(
              (BattleServantConfConponent_o *)&v146->__9__40_3,
              (System_Int32_array **)_9__40_3,
              v147,
              v148,
              v149,
              v150,
              v151,
              v152);
          }
          v153 = (System_Collections_Generic_IEnumerable_TSource__o *)System_Linq_Enumerable__Select_BattleLogicBuff_ReduceHpProcess_BuffInfo__int_(
                                                                        v141,
                                                                        (System_Func_TSource__TResult__o *)_9__40_3,
                                                                        (const MethodInfo_1A967E8 *)Method_System_Linq_Enumerable_Select_BattleLogicFunctionProcess_FunctionTargetCheck__int___);
          v154 = System_Linq_Enumerable__ToArray_int_(
                   v153,
                   (const MethodInfo_1A9AE24 *)Method_System_Linq_Enumerable_ToArray_int___);
          v155 = FuncList__Check(26, funcEnt->fields.funcType, 0LL);
          v156 = (BattleLogicFunction_PreAttackSideEffectMakeArgument_o *)sub_B2C42C(BattleLogicFunction_PreAttackSideEffectMakeArgument_TypeInfo);
          BattleLogicFunction_PreAttackSideEffectMakeArgument___ctor(v156, 0LL);
          if ( !v156 )
            goto LABEL_418;
          v157 = (BattleLogicFunction_SideEffectMakeArgument_o *)((__int64 (__fastcall *)(BattleLogicFunction_PreAttackSideEffectMakeArgument_o *, System_Int32_array *, Il2CppMethodPointer))v156->klass->vtable._6_Init.method)(
                                                                   v156,
                                                                   v154,
                                                                   v156->klass->vtable._7_MakeOnlyMainArgument.methodPtr);
          BattleLogicFunction__setAttackSideEffect(v384, action, v87, v155 || isTreasureDvc, v157, v158);
        }
      }
      v159 = funcUnit->fields._funcTargetArray_k__BackingField;
      if ( !v159 )
        goto LABEL_418;
      v160 = v159->max_length;
      p_funcType = &funcEnt->fields.funcType;
      if ( v160 >= 1 )
      {
        for ( i = 0; i < v160; ++i )
        {
          if ( i >= (unsigned int)v160 )
            goto LABEL_419;
          v321 = v159->m_Items[i];
          if ( !v321 )
            goto LABEL_418;
          BattleLogicFunction__SetTargetFuncList(
            v384,
            v321->fields._targetId_k__BackingField,
            action,
            dataVals_k__BackingField,
            v128);
          this = (BattleLogicFunction_o *)BattleLogicFunction_ProcListInArgs__get_FuncSideEffectArg(args, 0LL);
          if ( this )
            v120 = (BattleLogicFunction_FuncSideEffectFunctionArgument_o *)this;
          if ( this )
          {
            if ( !v120 )
              goto LABEL_418;
            BattleLogicFunction_FuncSideEffectFunctionArgument__AddTarget(v120, v321, 0LL);
          }
          if ( !v321->fields._result_k__BackingField )
          {
            NoEffectObject = BattleLogicFunctionProcess_FunctionTargetCheck__getInvalidObject(v321, 0LL);
            goto LABEL_314;
          }
          this = (BattleLogicFunction_o *)v384->fields.data;
          if ( !this )
            goto LABEL_418;
          targetId_k__BackingField = v321->fields._targetId_k__BackingField;
          this = (BattleLogicFunction_o *)BattleData__getServantData(
                                            (BattleData_o *)this,
                                            targetId_k__BackingField,
                                            0LL);
          if ( !this )
            goto LABEL_418;
          v323 = this;
          this = (BattleLogicFunction_o *)BattleServantData__CheckNotTargetSkill(
                                            (BattleServantData_o *)this,
                                            skillId,
                                            0LL);
          if ( ((unsigned __int8)this & 1) != 0 )
          {
            NoEffectObject = BattleLogicFunction__getNoEffectObject(
                               v384,
                               (int32_t)v323->fields.logic,
                               funcIdx,
                               dataVals_k__BackingField,
                               v92,
                               0LL,
                               0LL,
                               v324);
LABEL_314:
            BattleActionData__addAction(action, NoEffectObject, 0LL);
            goto LABEL_362;
          }
          action->fields.funcResult = 1;
          args->fields.tdCommandTypeChange = -1;
          if ( !funcEnt )
            goto LABEL_418;
          v167 = &funcEnt->fields.funcType;
          this = (BattleLogicFunction_o *)FuncList__Check(1, *p_funcType, 0LL);
          if ( ((unsigned __int8)this & 1) != 0
            || (this = (BattleLogicFunction_o *)FuncList__Check(16, *p_funcType, 0LL), ((unsigned __int8)this & 1) != 0) )
          {
            vals = funcEnt->fields.vals;
            if ( !vals )
              goto LABEL_418;
            if ( !vals->max_length )
              goto LABEL_419;
            this = (BattleLogicFunction_o *)MasterData_WarQuestSelectionMaster;
            if ( !MasterData_WarQuestSelectionMaster )
              goto LABEL_418;
            this = (BattleLogicFunction_o *)DataMasterBase_WarMaster__WarEntity__int___GetEntity(
                                              MasterData_WarQuestSelectionMaster,
                                              vals->m_Items[1],
                                              (const MethodInfo_24E40D0 *)Method_DataMasterBase_BuffMaster__BuffEntity__int__GetEntity__);
            if ( !this )
              goto LABEL_418;
            commandType = 1;
            switch ( HIDWORD(this->fields.data) )
            {
              case 0x8F:
                commandType = action->fields.commandType;
                goto LABEL_328;
              case 0x91:
                goto LABEL_328;
              case 0x92:
                commandType = 2;
                goto LABEL_328;
              case 0x93:
                commandType = 3;
LABEL_328:
                args->fields.tdCommandTypeChange = commandType;
                break;
              default:
                break;
            }
            v167 = &funcEnt->fields.funcType;
            v328 = FuncList__Check(16, *p_funcType, 0LL);
            BattleLogicFunction__functionAddState(v384, action, v321, args, v328, v329);
            goto LABEL_350;
          }
          if ( FuncList__Check(2, *p_funcType, 0LL) )
          {
            v168 = BattleLogicFunction__functionSubState(
                     v384,
                     targetId_k__BackingField,
                     funcEnt,
                     dataVals_k__BackingField,
                     funcIdx,
                     v92,
                     &subBuffInfo,
                     args,
                     overwriteLossHp);
            goto LABEL_349;
          }
          if ( FuncList__Check(3, *p_funcType, 0LL) )
          {
            v331 = (int32_t)v323->fields.logic;
            isTurnb = action->fields.actorId;
            isSafeDamage = BattleLogicFunction__isSafeDamage(
                             v384,
                             dataVals_k__BackingField,
                             targetId_k__BackingField,
                             v330);
            v333 = v331;
            v92 = isCommandSideEffect;
            v168 = BattleLogicFunction__functionDamage(
                     v384,
                     isTurnb,
                     v333,
                     dataVals_k__BackingField,
                     funcIdx,
                     action,
                     isSafeDamage,
                     v334);
            goto LABEL_349;
          }
          if ( FuncList__Check(4, *p_funcType, 0LL) )
          {
            actorId = action->fields.actorId;
            v337 = (int32_t)v323->fields.logic;
            v338 = 1;
            goto LABEL_348;
          }
          if ( FuncList__Check(14, *p_funcType, 0LL) )
          {
            actorId = action->fields.actorId;
            v337 = (int32_t)v323->fields.logic;
            v338 = 2;
            goto LABEL_348;
          }
          if ( FuncList__Check(15, *p_funcType, 0LL) )
          {
            actorId = action->fields.actorId;
            v337 = (int32_t)v323->fields.logic;
            v338 = 3;
            goto LABEL_348;
          }
          if ( FuncList__Check(18, *p_funcType, 0LL) )
          {
            actorId = action->fields.actorId;
            v337 = (int32_t)v323->fields.logic;
            v338 = 4;
            goto LABEL_348;
          }
          if ( FuncList__Check(27, *p_funcType, 0LL) )
          {
            actorId = action->fields.actorId;
            v337 = (int32_t)v323->fields.logic;
            v338 = 7;
            goto LABEL_348;
          }
          if ( FuncList__Check(21, *p_funcType, 0LL) )
          {
            actorId = action->fields.actorId;
            v337 = (int32_t)v323->fields.logic;
            v338 = 5;
            goto LABEL_348;
          }
          if ( FuncList__Check(22, *p_funcType, 0LL) )
          {
            actorId = action->fields.actorId;
            v337 = (int32_t)v323->fields.logic;
            v338 = 6;
            goto LABEL_348;
          }
          if ( FuncList__Check(28, *p_funcType, 0LL) )
          {
            actorId = action->fields.actorId;
            v337 = (int32_t)v323->fields.logic;
            v338 = 8;
LABEL_348:
            v168 = BattleLogicFunction__functionNPDamage(
                     v384,
                     actorId,
                     v337,
                     dataVals_k__BackingField,
                     funcIdx,
                     v338,
                     action,
                     v335);
LABEL_349:
            BattleActionData__addAction(action, v168, 0LL);
            goto LABEL_350;
          }
          if ( FuncList__Check(5, *p_funcType, 0LL) )
          {
            v162 = v384->fields.data;
            Value = DataVals__GetValue(dataVals_k__BackingField, 0LL);
            this = (BattleLogicFunction_o *)DataVals__isMultipleGainStar(dataVals_k__BackingField, 0LL);
            if ( !v162 )
              goto LABEL_418;
            BattleData__addCriticalPoint(v162, Value, (unsigned __int8)this & 1, 0LL);
LABEL_107:
            this = (BattleLogicFunction_o *)BattleLogicFunction__getFunctionObject(
                                              v164,
                                              funcEnt,
                                              (int32_t)v323->fields.logic,
                                              funcIdx,
                                              v92,
                                              0LL,
                                              v165);
            if ( !this )
              goto LABEL_418;
            HIDWORD(this->fields.logic) = 4;
            BattleActionData__setBuffData(action, (BattleActionData_BuffData_o *)this, dataVals_k__BackingField, 0LL);
            this = (BattleLogicFunction_o *)v384->fields.data;
            if ( !this )
              goto LABEL_418;
            BattleData__AddPerformedVals((BattleData_o *)this, dataVals_k__BackingField, 0LL);
            goto LABEL_110;
          }
          if ( FuncList__Check(31, *p_funcType, 0LL) )
          {
            v166 = v384->fields.data;
            this = (BattleLogicFunction_o *)DataVals__GetValue(dataVals_k__BackingField, 0LL);
            if ( !v166 )
              goto LABEL_418;
            BattleData__lossCriticalPoint(v166, (int32_t)this, 0LL);
            goto LABEL_107;
          }
          if ( FuncList__Check(6, *p_funcType, 0LL) )
          {
            v168 = BattleLogicFunction__functionGainHp(
                     v384,
                     action->fields.actorId,
                     targetId_k__BackingField,
                     funcEnt,
                     dataVals_k__BackingField,
                     funcIdx,
                     v92,
                     -1,
                     overwriteLossHp);
            goto LABEL_349;
          }
          if ( FuncList__Check(17, *p_funcType, 0LL) )
          {
            v168 = BattleLogicFunction__functionGainHpPer(
                     v384,
                     action->fields.actorId,
                     targetId_k__BackingField,
                     funcEnt,
                     dataVals_k__BackingField,
                     funcIdx,
                     v92,
                     v169);
            goto LABEL_349;
          }
          if ( FuncList__Check(7, *p_funcType, 0LL) )
          {
            if ( BattleServantData__checkPlayer((BattleServantData_o *)v323, 0LL) )
            {
              isUnaffected = DataVals__isUnaffected(dataVals_k__BackingField, 0LL);
              CorrectedValueFuncGainNp = DataVals__GetValue(dataVals_k__BackingField, 0LL);
              if ( !isUnaffected )
                CorrectedValueFuncGainNp = BattleServantData__getCorrectedValueFuncGainNp(
                                             (BattleServantData_o *)v323,
                                             CorrectedValueFuncGainNp,
                                             0LL);
              if ( !BattleServantData__isGainNp((BattleServantData_o *)v323, 1, 0LL) )
              {
                v92 = isCommandSideEffect;
                v190 = (int32_t)v323->fields.logic;
                v191 = v384;
                v192 = funcIdx;
                v193 = isCommandSideEffect;
                v194 = dataVals_k__BackingField;
                goto LABEL_141;
              }
              v173 = (BattleLogicFunction_o *)BattleServantData__addNp(
                                                (BattleServantData_o *)v323,
                                                CorrectedValueFuncGainNp,
                                                0,
                                                0LL);
              v174 = (int)v173;
              this = (BattleLogicFunction_o *)BattleLogicFunction__getFunctionObject(
                                                v173,
                                                funcEnt,
                                                (int32_t)v323->fields.logic,
                                                funcIdx,
                                                isCommandSideEffect,
                                                0LL,
                                                v175);
              if ( !this )
                goto LABEL_418;
              v176 = this;
              HIDWORD(this->fields.logic) = 3;
              BattleActionData_BuffData__setSaveNp((BattleActionData_BuffData_o *)this, v174, 0LL);
              if ( isCommandSideEffect )
                BYTE2(v176->fields.wkStr) = 1;
              v177 = action;
              v178 = (BattleActionData_BuffData_o *)v176;
              v179 = dataVals_k__BackingField;
              goto LABEL_129;
            }
          }
          else if ( FuncList__Check(8, *p_funcType, 0LL) )
          {
            if ( BattleServantData__checkPlayer((BattleServantData_o *)v323, 0LL) )
            {
              v180 = DataVals__GetValue(dataVals_k__BackingField, 0LL);
              v181 = (BattleLogicFunction_o *)BattleServantData__addNp((BattleServantData_o *)v323, -v180, 0, 0LL);
              v182 = (int)v181;
              this = (BattleLogicFunction_o *)BattleLogicFunction__getFunctionObject(
                                                v181,
                                                funcEnt,
                                                (int32_t)v323->fields.logic,
                                                funcIdx,
                                                isCommandSideEffect,
                                                0LL,
                                                v183);
              if ( !this )
                goto LABEL_418;
              v184 = this;
              HIDWORD(this->fields.logic) = 3;
              BattleActionData_BuffData__setSaveNp((BattleActionData_BuffData_o *)this, v182, 0LL);
              goto LABEL_128;
            }
          }
          else
          {
            if ( FuncList__Check(9, *p_funcType, 0LL) )
            {
              v185 = DataVals__GetValue2(dataVals_k__BackingField, 0LL) - 1;
              TargetList = DataVals__GetTargetList(dataVals_k__BackingField, 0LL);
              v187 = DataVals__GetValue(dataVals_k__BackingField, 0LL);
              v188 = BattleServantData__skillChageShorten((BattleServantData_o *)v323, v187, 0, v185, TargetList, 0LL);
              goto LABEL_136;
            }
            if ( FuncList__Check(10, *p_funcType, 0LL) )
            {
              v195 = DataVals__GetValue2(dataVals_k__BackingField, 0LL) - 1;
              v196 = DataVals__GetTargetList(dataVals_k__BackingField, 0LL);
              v197 = DataVals__GetValue(dataVals_k__BackingField, 0LL);
              v188 = BattleServantData__skillChageExtend((BattleServantData_o *)v323, v197, 999, v195, v196, 0LL);
LABEL_136:
              v198 = (int32_t)v323->fields.logic;
              if ( !v188 )
              {
                v92 = isCommandSideEffect;
                v191 = v384;
                v190 = (int32_t)v323->fields.logic;
                goto LABEL_140;
              }
              goto LABEL_137;
            }
            if ( FuncList__Check(12, *p_funcType, 0LL) )
            {
              v204 = action->fields.actorId;
              v92 = isCommandSideEffect;
              v205 = BattleLogicFunction__isSafeDamage(v384, dataVals_k__BackingField, targetId_k__BackingField, v203);
              v202 = BattleLogicFunction__functionlossHp(
                       v384,
                       v204,
                       targetId_k__BackingField,
                       funcEnt,
                       dataVals_k__BackingField,
                       funcIdx,
                       v205,
                       isCommandSideEffect,
                       -1,
                       1,
                       action,
                       v364);
              goto LABEL_142;
            }
            if ( FuncList__Check(25, *p_funcType, 0LL) )
            {
              v92 = isCommandSideEffect;
              v202 = BattleLogicFunction__functionlossHp(
                       v384,
                       action->fields.actorId,
                       targetId_k__BackingField,
                       funcEnt,
                       dataVals_k__BackingField,
                       funcIdx,
                       1,
                       isCommandSideEffect,
                       -1,
                       1,
                       action,
                       v364);
              goto LABEL_142;
            }
            if ( FuncList__Check(13, *p_funcType, 0LL) )
            {
              v92 = isCommandSideEffect;
              v206 = action->fields.actorId;
              v207 = v384;
              v208 = funcEnt;
              v209 = funcIdx;
              v210 = isCommandSideEffect;
              v211 = targetId_k__BackingField;
              v212 = dataVals_k__BackingField;
              v213 = 0;
LABEL_149:
              v202 = BattleLogicFunction__functionInstantDeath(
                       v207,
                       v206,
                       v211,
                       v208,
                       v212,
                       v209,
                       v210,
                       v213,
                       overwriteLossHp);
              goto LABEL_142;
            }
            if ( FuncList__Check(19, *p_funcType, 0LL) )
            {
              v92 = isCommandSideEffect;
              v202 = BattleLogicFunction__functionHastenNpTurn(
                       v384,
                       targetId_k__BackingField,
                       funcEnt,
                       dataVals_k__BackingField,
                       funcIdx,
                       isCommandSideEffect,
                       -1,
                       v214);
              goto LABEL_142;
            }
            if ( FuncList__Check(20, *p_funcType, 0LL) )
            {
              v92 = isCommandSideEffect;
              v202 = BattleLogicFunction__functionDelayNpTurn(
                       v384,
                       targetId_k__BackingField,
                       funcEnt,
                       dataVals_k__BackingField,
                       funcIdx,
                       isCommandSideEffect,
                       &absorptionCount,
                       v215);
              goto LABEL_142;
            }
            if ( FuncList__Check(56, *p_funcType, 0LL) )
            {
              v92 = isCommandSideEffect;
              v202 = BattleLogicFunction__functionAbsorbNpTurn(
                       v384,
                       targetId_k__BackingField,
                       funcEnt,
                       action,
                       v321,
                       isCommandSideEffect,
                       v216);
              goto LABEL_142;
            }
            if ( FuncList__Check(23, *p_funcType, 0LL) )
            {
              v222 = v384;
              v223 = BattleLogicFunction__functionResetCommandCard(v384, v217, v218, v219, v220, v221);
LABEL_158:
              BattleActionData__addAction(action, v223, 0LL);
              this = (BattleLogicFunction_o *)v222->fields.data;
              if ( !this )
                goto LABEL_418;
              BattleData__AddPerformedVals((BattleData_o *)this, dataVals_k__BackingField, 0LL);
              goto LABEL_130;
            }
            if ( !FuncList__Check(24, *p_funcType, 0LL) )
            {
              if ( FuncList__Check(109, *p_funcType, 0LL) )
              {
                v231 = BattleLogicFunction__functionTransformServant(
                         v384,
                         targetId_k__BackingField,
                         v229,
                         dataVals_k__BackingField,
                         funcIdx,
                         v230);
LABEL_169:
                BattleActionData__addAction(action, v231, 0LL);
                goto LABEL_130;
              }
              if ( FuncList__Check(26, *p_funcType, 0LL) )
              {
                v233 = BattleLogicFunction__functionReflection(
                         v384,
                         action->fields.actorId,
                         (int32_t)v323->fields.logic,
                         dataVals_k__BackingField,
                         funcIdx,
                         v232);
                BattleActionData__addAction(action, v233, 0LL);
                v367[4] = 1;
                goto LABEL_130;
              }
              if ( FuncList__Check(29, *p_funcType, 0LL) )
              {
                v92 = isCommandSideEffect;
                v202 = BattleLogicFunction__functionCallServant(
                         v384,
                         action->fields.actorId,
                         v234,
                         dataVals_k__BackingField,
                         funcIdx,
                         isCommandSideEffect,
                         v235);
                goto LABEL_142;
              }
              if ( FuncList__Check(30, *p_funcType, 0LL) )
              {
                v241 = BattleLogicFunction__functionPtShuffle(v384, v236, v237, v238, v239, v240);
                BattleActionData__addAction(action, v241, 0LL);
                this = (BattleLogicFunction_o *)v384->fields.data;
                if ( !this )
                  goto LABEL_418;
                BattleData__AddPerformedVals((BattleData_o *)this, dataVals_k__BackingField, 0LL);
                goto LABEL_175;
              }
              if ( FuncList__Check(32, *p_funcType, 0LL) )
              {
                v231 = BattleLogicFunction__functionChangeServant(
                         v384,
                         action->fields.actorId,
                         targetId_k__BackingField,
                         v242,
                         dataVals_k__BackingField,
                         v243,
                         v244);
                goto LABEL_169;
              }
              v245 = FuncList__Check(33, *p_funcType, 0LL);
              if ( v245 )
              {
                v231 = BattleLogicFunction__functionChangeBg(
                         (BattleLogicFunction_o *)v245,
                         action->fields.actorId,
                         v246,
                         dataVals_k__BackingField,
                         v247,
                         v248);
                goto LABEL_169;
              }
              if ( FuncList__Check(34, *p_funcType, 0LL) )
              {
                v250 = action->fields.actorId;
                v251 = (int32_t)v323->fields.logic;
                v252 = BattleLogicFunction__isSafeDamage(v384, dataVals_k__BackingField, targetId_k__BackingField, v249);
                v254 = v384;
                goto LABEL_182;
              }
              if ( FuncList__Check(122, *p_funcType, 0LL) )
              {
                v255 = action->fields.actorId;
                v256 = (int32_t)v323->fields.logic;
                v254 = v384;
                v252 = 1;
                goto LABEL_185;
              }
              if ( FuncList__Check(35, *p_funcType, 0LL) )
              {
                BYTE1(v323[9].monitor) = 1;
                goto LABEL_130;
              }
              this = (BattleLogicFunction_o *)FuncList__Check(36, *p_funcType, 0LL);
              if ( ((unsigned __int8)this & 1) != 0 )
              {
                v263 = v384->fields.data;
                if ( !v263 )
                  goto LABEL_418;
                draw_commandlist = (System_Int32_array **)v263->fields.draw_commandlist;
                v263->fields.fixedCommands = (struct BattleCommandData_array *)draw_commandlist;
                sub_B2C2F8(
                  (BattleServantConfConponent_o *)&v263->fields.fixedCommands,
                  draw_commandlist,
                  v257,
                  v258,
                  v259,
                  v260,
                  v261,
                  v262);
                goto LABEL_191;
              }
              if ( FuncList__Check(37, *p_funcType, 0LL)
                || FuncList__Check(38, *p_funcType, 0LL)
                || FuncList__Check(39, *p_funcType, 0LL)
                || FuncList__Check(40, *p_funcType, 0LL) )
              {
                v265 = DataVals__GetValue(dataVals_k__BackingField, 0LL);
                if ( FuncList__Check(37, *p_funcType, 0LL) || FuncList__Check(39, *p_funcType, 0LL) )
                  v265 = -v265;
                if ( FuncList__Check(37, *p_funcType, 0LL) || FuncList__Check(38, *p_funcType, 0LL) )
                {
                  v265 *= 2;
                  isTurn = 1;
                }
                else
                {
                  isTurn = 0;
                }
                isParam = DataVals__isParam(dataVals_k__BackingField, 90, 0LL);
                v267 = DataVals__GetTargetList(dataVals_k__BackingField, 0LL);
                v188 = BattleServantData__ChangeBuffValue(
                         (BattleServantData_o *)v323,
                         v265,
                         v267,
                         isTurn,
                         1,
                         isParam,
                         0LL);
                goto LABEL_136;
              }
              if ( FuncList__Check(41, *p_funcType, 0LL) )
              {
                isTurna = v384->fields.data;
                v268 = DataVals__GetValue(dataVals_k__BackingField, 0LL);
                v269 = (Generator_BGMFromChangeBGMFunc_o *)sub_B2C42C(Generator_BGMFromChangeBGMFunc_TypeInfo);
                Generator_BGMFromChangeBGMFunc___ctor(v269, isTurna, v268, dataVals_k__BackingField, 0, 0LL);
                BattleLogicFunction__FunctionChangeBgm(v384, args, (Generator_BGM_o *)v269, v270);
                goto LABEL_130;
              }
              v271 = FuncList__Check(42, *p_funcType, 0LL);
              if ( v271 )
              {
                v92 = isCommandSideEffect;
                FunctionObject = BattleLogicFunction__getFunctionObject(
                                   (BattleLogicFunction_o *)v271,
                                   funcEnt,
                                   (int32_t)v323->fields.logic,
                                   funcIdx,
                                   isCommandSideEffect,
                                   0LL,
                                   v272);
                v200 = action;
                v201 = 0LL;
                goto LABEL_138;
              }
              if ( FuncList__Check(43, *p_funcType, 0LL) )
              {
                v92 = isCommandSideEffect;
                v202 = BattleLogicFunction__functionResurrection(
                         v384,
                         (int32_t)v323->fields.logic,
                         funcIdx,
                         funcEnt,
                         dataVals_k__BackingField,
                         isCommandSideEffect,
                         v273);
                goto LABEL_142;
              }
              if ( !FuncList__Check(44, *p_funcType, 0LL) && !FuncList__Check(133, *p_funcType, 0LL) )
              {
                if ( FuncList__Check(45, *p_funcType, 0LL) )
                {
                  BYTE3(v323[9].monitor) = DataVals__GetValue(dataVals_k__BackingField, 0LL) == 1;
                  goto LABEL_130;
                }
                if ( FuncList__Check(46, *p_funcType, 0LL) )
                {
                  v92 = isCommandSideEffect;
                  v206 = action->fields.actorId;
                  v207 = v384;
                  v208 = funcEnt;
                  v209 = funcIdx;
                  v210 = isCommandSideEffect;
                  v213 = 1;
                  v211 = targetId_k__BackingField;
                  v212 = dataVals_k__BackingField;
                  goto LABEL_149;
                }
                if ( FuncList__Check(47, *p_funcType, 0LL) )
                {
                  v283 = action->fields.actorId;
                  v284 = (int32_t)v323->fields.logic;
                  v285 = 9;
                }
                else
                {
                  if ( FuncList__Check(48, *p_funcType, 0LL) )
                  {
                    v231 = BattleLogicFunction__functionGainNpFromTargets(v384, args, action, v321, v286);
                    goto LABEL_169;
                  }
                  if ( FuncList__Check(49, *p_funcType, 0LL) )
                  {
                    v231 = BattleLogicFunction__functionGainHpFromTargets(v384, args, action, v321, v287);
                    goto LABEL_169;
                  }
                  v288 = FuncList__Check(50, *p_funcType, 0LL);
                  if ( v288 || (v288 = FuncList__Check(51, *p_funcType, 0LL)) )
                  {
                    v290 = *p_funcType == 51;
                    if ( *p_funcType == 50 )
                    {
                      v288 = BattleLogicFunction__isSafeDamage(
                               v384,
                               dataVals_k__BackingField,
                               targetId_k__BackingField,
                               v289);
                      v290 = v288;
                    }
                    v291 = action->fields.actorId;
                    overwriteLossHpa = BattleLogicFunction__getHpPerValue(
                                         (BattleLogicFunction_o *)v288,
                                         dataVals_k__BackingField,
                                         (BattleServantData_o *)v323,
                                         v289);
                    v292 = v291;
                    v92 = isCommandSideEffect;
                    v202 = BattleLogicFunction__functionlossHp(
                             v384,
                             v292,
                             targetId_k__BackingField,
                             funcEnt,
                             dataVals_k__BackingField,
                             funcIdx,
                             v290,
                             isCommandSideEffect,
                             overwriteLossHpa,
                             0,
                             action,
                             v364);
                    goto LABEL_142;
                  }
                  if ( FuncList__Check(52, *p_funcType, 0LL) )
                  {
                    v294 = v384;
                    v295 = 1;
                    v296 = dataVals_k__BackingField;
LABEL_247:
                    BattleLogicFunction__UpdateUserEquipSkillChargeTurn(v294, v296, v295, v293);
                    goto LABEL_130;
                  }
                  if ( FuncList__Check(62, *p_funcType, 0LL) )
                  {
                    v294 = v384;
                    v296 = dataVals_k__BackingField;
                    v295 = 0;
                    goto LABEL_247;
                  }
                  if ( FuncList__Check(53, *p_funcType, 0LL) )
                  {
                    v297 = (Generator_BGFromQuickChangeBGFunc_o *)sub_B2C42C(Generator_BGFromQuickChangeBGFunc_TypeInfo);
                    Generator_BGFromQuickChangeBGFunc___ctor(v297, dataVals_k__BackingField, 0LL);
                    BattleLogicFunction__FunctionQuickChangeBG(v384, args, (Generator_Background_o *)v297, v298);
                    goto LABEL_130;
                  }
                  if ( FuncList__Check(54, *p_funcType, 0LL) )
                  {
                    this = (BattleLogicFunction_o *)v323[2].fields.buffProgressTurnOpponentList;
                    if ( !this )
                      goto LABEL_418;
                    if ( ServantEntity__isInvalidSkillShift((ServantEntity_o *)this, 0LL) )
                    {
                      v190 = v321->fields._targetId_k__BackingField;
LABEL_228:
                      v92 = isCommandSideEffect;
                      v191 = v384;
LABEL_140:
                      v193 = v92;
                      v192 = funcIdx;
                      v194 = dataVals_k__BackingField;
LABEL_141:
                      v202 = BattleLogicFunction__getNoEffectObject(v191, v190, v192, v194, v193, 0LL, 0LL, v172);
LABEL_142:
                      BattleActionData__addAction(action, v202, 0LL);
                      goto LABEL_110;
                    }
                    Param = DataVals__GetParam(dataVals_k__BackingField, 53, 0, 0LL);
                    BattleLogicFunction__functionShiftServant(v384, action, (BattleServantData_o *)v323, Param, v300);
                    goto LABEL_130;
                  }
                  if ( FuncList__Check(55, *p_funcType, 0LL) )
                  {
                    v283 = action->fields.actorId;
                    v284 = (int32_t)v323->fields.logic;
                    v285 = 10;
                  }
                  else
                  {
                    if ( FuncList__Check(57, *p_funcType, 0LL) )
                    {
                      LODWORD(v323[6].fields.wkStr) = DataVals__GetValue(dataVals_k__BackingField, 0LL);
                      goto LABEL_130;
                    }
                    if ( FuncList__Check(58, *p_funcType, 0LL) )
                    {
                      buffProgressTurnSelfList = (BattleBuffData_o *)v323[8].fields.buffProgressTurnSelfList;
                      this = (BattleLogicFunction_o *)DataVals__GetParam(dataVals_k__BackingField, 14, 0, 0LL);
                      if ( !buffProgressTurnSelfList )
                        goto LABEL_418;
                      BattleBuffData__UpdateForceAllBuffNoAct(buffProgressTurnSelfList, (int32_t)this, 0LL);
LABEL_191:
                      v198 = (int32_t)v323->fields.logic;
LABEL_137:
                      v92 = isCommandSideEffect;
                      FunctionObject = BattleLogicFunction__getFunctionObject(
                                         (BattleLogicFunction_o *)v188,
                                         funcEnt,
                                         v198,
                                         funcIdx,
                                         isCommandSideEffect,
                                         0LL,
                                         v189);
                      v200 = action;
                      v201 = dataVals_k__BackingField;
LABEL_138:
                      BattleActionData__setBuffData(v200, FunctionObject, v201, 0LL);
                      goto LABEL_110;
                    }
                    if ( FuncList__Check(59, *p_funcType, 0LL) )
                    {
                      v302 = (BattleActionData_UpShiftGaugeData_o *)sub_B2C42C(BattleActionData_UpShiftGaugeData_TypeInfo);
                      BattleActionData_UpShiftGaugeData___ctor(v302, 0LL);
LABEL_266:
                      BattleLogicFunction__functionBreakGaugeChange(
                        v384,
                        action,
                        funcUnit,
                        (BattleServantData_o *)v323,
                        (BattleActionData_BaseShiftGaugeData_o *)v302,
                        v303);
                      goto LABEL_130;
                    }
                    if ( FuncList__Check(60, *p_funcType, 0LL) )
                    {
                      v302 = (BattleActionData_UpShiftGaugeData_o *)sub_B2C42C(BattleActionData_DownShiftGaugeData_TypeInfo);
                      BattleActionData_DownShiftGaugeData___ctor((BattleActionData_DownShiftGaugeData_o *)v302, 0LL);
                      goto LABEL_266;
                    }
                    if ( FuncList__Check(61, *p_funcType, 0LL) )
                    {
                      SubMember = BattleLogicFunction__FunctionMoveToLastSubMember(
                                    v384,
                                    (BattleServantData_o *)v323,
                                    funcEnt,
                                    v304,
                                    funcIdx,
                                    v305);
                      BattleActionData__addAction(action, SubMember, 0LL);
                      BattleActionData__UpdateForceBuffEffectAllTrue(action, 0LL);
LABEL_175:
                      v367[8] = 1;
                      goto LABEL_130;
                    }
                    if ( FuncList__Check(119, *p_funcType, 0LL) )
                    {
                      BattleLogicFunction__functionMovePosition(v384, action, (BattleServantData_o *)v323, v307);
                      goto LABEL_130;
                    }
                    if ( FuncList__Check(120, *p_funcType, 0LL) )
                    {
                      v92 = isCommandSideEffect;
                      BattleLogicFunction__functionRevival(
                        v384,
                        action,
                        funcEnt,
                        dataVals_k__BackingField,
                        funcIdx,
                        isCommandSideEffect,
                        v308);
                      goto LABEL_110;
                    }
                    if ( !FuncList__Check(121, *p_funcType, 0LL) )
                    {
                      if ( FuncList__Check(124, *p_funcType, 0LL) )
                      {
                        BattleLogicFunction__functionMoveState(v384, args, action, v321, v309);
                        goto LABEL_130;
                      }
                      if ( FuncList__Check(125, *p_funcType, 0LL) )
                      {
                        BattleLogicFunction__ChangeBGMCostume(v384, dataVals_k__BackingField, action, v310);
                        goto LABEL_130;
                      }
                      v311 = FuncList__Check(126, *p_funcType, 0LL);
                      if ( v311 )
                      {
                        BattleLogicFunction__LossCommandSpell(
                          (BattleLogicFunction_o *)v311,
                          dataVals_k__BackingField,
                          action,
                          v312);
                        goto LABEL_130;
                      }
                      if ( FuncList__Check(127, *p_funcType, 0LL) )
                        goto LABEL_130;
                      if ( FuncList__Check(128, *p_funcType, 0LL) )
                      {
                        BattleLogicFunction__FunctionUpdateEntryPositions(v384, dataVals_k__BackingField, v313);
                        goto LABEL_130;
                      }
                      if ( FuncList__Check(63, *p_funcType, 0LL) )
                      {
                        BattleLogicFunction__FunctionUpdateEntryMaxCountEachTurn(v384, dataVals_k__BackingField, v314);
                        goto LABEL_130;
                      }
                      if ( FuncList__Check(130, *p_funcType, 0LL) )
                      {
                        BattleLogicFunction__FunctionToFieldAddChangeFieldBuff(
                          v384,
                          args,
                          action,
                          v321,
                          isTreasureDvc,
                          v315);
                        goto LABEL_130;
                      }
                      if ( FuncList__Check(131, *p_funcType, 0LL) )
                      {
                        BattleLogicFunction__FunctionSubFieldBuff(v384, args, action, v321, v316);
                        goto LABEL_130;
                      }
                      if ( FuncList__Check(134, *p_funcType, 0LL) )
                      {
                        this = (BattleLogicFunction_o *)DataVals__GetValue(dataVals_k__BackingField, 0LL);
                        if ( !v384->fields.data )
                          goto LABEL_418;
                        BattleData__AddQuestRouteId(v384->fields.data, (int32_t)this, 0LL);
                        goto LABEL_130;
                      }
                      if ( FuncList__Check(135, *p_funcType, 0LL) )
                      {
                        BattleLogicFunction__FunctionLastSkillCopy(v384, action, dataVals_k__BackingField, args, v317);
                        goto LABEL_130;
                      }
                      if ( FuncList__Check(136, *p_funcType, 0LL) )
                      {
                        v318 = DataVals__GetValue(dataVals_k__BackingField, 0LL);
                        BattleLogicFunction__FunctionChangeEnemyMasterFace(v384, v318, v319);
                        goto LABEL_130;
                      }
                      if ( !FuncList__Check(137, *p_funcType, 0LL) )
                        goto LABEL_130;
                      v250 = action->fields.actorId;
                      v251 = (int32_t)v323->fields.logic;
                      v320 = ((__int64 (__fastcall *)(BattleLogicFunction_o *, void *))v323->klass[1]._1.parent)(
                               v323,
                               v323->klass[1]._1.generic_class) <= 1;
                      v254 = v384;
                      v252 = !v320;
LABEL_182:
                      v255 = v250;
                      v256 = v251;
LABEL_185:
                      v231 = BattleLogicFunction__functionValueDamage(
                               v254,
                               v255,
                               v256,
                               dataVals_k__BackingField,
                               funcIdx,
                               v252,
                               action,
                               v253);
                      goto LABEL_169;
                    }
                    v283 = action->fields.actorId;
                    v284 = (int32_t)v323->fields.logic;
                    v285 = 11;
                  }
                }
                v231 = BattleLogicFunction__functionNPDamage(
                         v384,
                         v283,
                         v284,
                         dataVals_k__BackingField,
                         funcIdx,
                         v285,
                         action,
                         v282);
                goto LABEL_169;
              }
              v274 = funcEnt->fields.vals;
              if ( FuncList__Check(44, funcEnt->fields.funcType, 0LL) )
              {
                SameIndiualityBuffSum = BattleServantData__getSameIndiualityBuffSum(
                                          (BattleServantData_o *)v323,
                                          v274,
                                          1,
                                          0,
                                          0,
                                          0LL);
                goto LABEL_216;
              }
              if ( FuncList__Check(133, *p_funcType, 0LL) )
              {
                SameIndiualityBuffSum = GainNpIndividualSum__GetSameIndiualitySum(
                                          v384->fields.data,
                                          *p_actorId,
                                          (int32_t)v323->fields.logic,
                                          dataVals_k__BackingField,
                                          funcEnt,
                                          0LL);
LABEL_216:
                v276 = SameIndiualityBuffSum;
              }
              else
              {
                v276 = 0;
              }
              v277 = DataVals__GetValue(dataVals_k__BackingField, 0LL) * v276;
              if ( !DataVals__isUnaffected(dataVals_k__BackingField, 0LL) )
                v277 = BattleServantData__getCorrectedValueFuncGainNp((BattleServantData_o *)v323, v277, 0LL);
              isGainNp = BattleServantData__isGainNp((BattleServantData_o *)v323, 1, 0LL);
              if ( v277 < 1 || !isGainNp )
              {
                v190 = (int32_t)v323->fields.logic;
                goto LABEL_228;
              }
              v279 = (BattleLogicFunction_o *)BattleServantData__addNp((BattleServantData_o *)v323, v277, 0, 0LL);
              v280 = (int)v279;
              this = (BattleLogicFunction_o *)BattleLogicFunction__getFunctionObject(
                                                v279,
                                                funcEnt,
                                                (int32_t)v323->fields.logic,
                                                funcIdx,
                                                isCommandSideEffect,
                                                0LL,
                                                v281);
              if ( !this )
                goto LABEL_418;
              v184 = this;
              HIDWORD(this->fields.logic) = 3;
              BattleActionData_BuffData__setSaveNp((BattleActionData_BuffData_o *)this, v280, 0LL);
              if ( isCommandSideEffect )
                BYTE2(v184->fields.wkStr) = 1;
LABEL_128:
              v177 = action;
              v178 = (BattleActionData_BuffData_o *)v184;
              v179 = dataVals_k__BackingField;
LABEL_129:
              BattleActionData__setBuffData(v177, v178, v179, 0LL);
              goto LABEL_130;
            }
            applyTarget = funcEnt->fields.applyTarget;
            if ( applyTarget == 2 )
            {
              v231 = BattleLogicFunction__functionReplaceEnemyMember(
                       v384,
                       v224,
                       dataVals_k__BackingField,
                       funcIdx,
                       v226);
              goto LABEL_169;
            }
            if ( applyTarget == 1 )
            {
              v222 = v384;
              v223 = BattleLogicFunction__functionReplaceMember(
                       v384,
                       targetId_k__BackingField,
                       subTargetId,
                       v225,
                       (DataVals_o *)v226,
                       funcIdx,
                       v227);
              goto LABEL_158;
            }
          }
LABEL_130:
          v92 = isCommandSideEffect;
LABEL_110:
          v167 = &funcEnt->fields.funcType;
LABEL_350:
          this = (BattleLogicFunction_o *)FuncList__isDamage(*v167, 0LL);
          if ( ((unsigned __int8)this & 1) != 0 )
            v339 = 0;
          else
            v339 = -107;
          if ( v339 != -107 && !LOBYTE(v323[9].fields.logictarget) )
          {
            v340 = v323[8].fields.buffProgressTurnSelfList;
            if ( !v340 )
              goto LABEL_418;
            if ( !LOBYTE(v340[3].fields._syncRoot) )
            {
              this = (BattleLogicFunction_o *)v372;
              LOBYTE(v323[9].fields.logictarget) = 1;
              if ( !v372 )
                goto LABEL_418;
              System_Collections_Generic_List_int___Add(
                v372,
                (int32_t)v323->fields.logic,
                (const MethodInfo_2F66FF8 *)Method_System_Collections_Generic_List_int__Add__);
              this = (BattleLogicFunction_o *)v323[8].fields.buffProgressTurnSelfList;
              if ( !this )
                goto LABEL_418;
              v341 = BattleBuffData__UseProgressingDoNotAct(
                       (BattleBuffData_o *)this,
                       (BattleServantData_o *)v323,
                       0,
                       0LL);
              BattleActionData__addSideEffectActionData(action, v341, 1, 0LL);
              v340 = v323[8].fields.buffProgressTurnSelfList;
              if ( !v340 )
                goto LABEL_418;
            }
            LOBYTE(v340[3].fields._syncRoot) = 0;
          }
          BattleLogicFunction_ProcListInArgs__setFuncResult(
            args,
            targetId_k__BackingField,
            action->fields.funcResult,
            dataVals_k__BackingField->fields.funcIndex,
            0LL);
LABEL_362:
          v160 = v159->max_length;
        }
      }
      v87 = ServantData;
      if ( !isCreateSideEffect )
        break;
      v342 = v378;
      if ( !funcEnt )
        goto LABEL_418;
      v343 = FuncList__Check(26, *p_funcType, 0LL);
      v344 = (BattleLogicFunction_AfterAttackSideEffectMakeArgument_o *)sub_B2C42C(BattleLogicFunction_AfterAttackSideEffectMakeArgument_TypeInfo);
      BattleLogicFunction_AfterAttackSideEffectMakeArgument___ctor(v344, 0LL);
      if ( !v344 )
        goto LABEL_418;
      Argument__Init = BattleLogicFunction_AfterAttackSideEffectMakeArgument__Init(v344, action, 0LL);
      BattleLogicFunction__setAttackSideEffect(v384, action, ServantData, v343 || isTreasureDvc, Argument__Init, v346);
      this = (BattleLogicFunction_o *)BattleActionData__getDamageTargetIdList(action, 0LL);
      if ( !this )
        goto LABEL_418;
      v118 = v373;
      v347 = this;
      if ( this->fields.logic )
      {
        if ( ServantData == 0LL || !isTreasureDvc )
        {
          v122 = 0LL;
        }
        else
        {
          v122 = (BattleCommandData_o *)sub_B2C42C(BattleCommandData_TypeInfo);
          BattleCommandData___ctor(v122, 0LL);
          this = (BattleLogicFunction_o *)BattleServantData__getTreasureDvcCardId(ServantData, 0LL);
          if ( !v122 )
            goto LABEL_418;
          v122->fields._type = (int)this;
          v122->fields.treasureDvc = BattleServantData__getTreasureDvcId(ServantData, 1, 0LL);
        }
        v123 = (UnityEngine_Object_o *)v384->fields.logic;
        if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
        }
        this = (BattleLogicFunction_o *)UnityEngine_Object__op_Inequality(v123, 0LL, 0LL);
        if ( ((unsigned __int8)this & 1) != 0 && (v124 = v347->fields.logic, (int)v124 >= 1) )
        {
          v125 = 0LL;
          do
          {
            if ( v125 >= (unsigned int)v124 )
              goto LABEL_419;
            this = (BattleLogicFunction_o *)v384->fields.logic;
            if ( !this )
              goto LABEL_418;
            this = (BattleLogicFunction_o *)BattleLogic__setDamageSideEffect(
                                              (BattleLogic_o *)this,
                                              action,
                                              action->fields.actorId,
                                              *((_DWORD *)&v347->fields.logictarget + v125),
                                              v122,
                                              0LL);
            LODWORD(v124) = v347->fields.logic;
            ++v125;
          }
          while ( (__int64)v125 < (int)v124 );
          v92 = isCommandSideEffect;
          v87 = ServantData;
        }
        else
        {
          v92 = isCommandSideEffect;
        }
        v118 = v373;
      }
LABEL_372:
      v119 = v118->max_length;
      v121 = v342 + 1;
      if ( v121 >= v119 )
        goto LABEL_375;
    }
    v118 = v373;
LABEL_371:
    v342 = v378;
    goto LABEL_372;
  }
  *(_QWORD *)&v367[4] = 0LL;
LABEL_375:
  this = (BattleLogicFunction_o *)BattleLogicFunction_ProcListInArgs__get_CheckDuplicateFunc(args, 0LL);
  if ( !this )
    goto LABEL_418;
  ((void (__fastcall *)(BattleLogicFunction_o *, void *))this->klass[1]._1.namespaze)(
    this,
    this->klass[1]._1.byval_arg.data);
  if ( (v367[4] & 1) != 0 )
  {
    this = (BattleLogicFunction_o *)v384->fields.data;
    if ( !this )
      goto LABEL_418;
    this = (BattleLogicFunction_o *)BattleData__getServantData((BattleData_o *)this, *p_actorId, 0LL);
    if ( !this )
      goto LABEL_418;
    BattleServantData__resetAccumulationDamage((BattleServantData_o *)this, 0LL);
  }
  if ( BattleActionData__checkSummonServantList(action, 0LL) )
  {
    v348 = (UnityEngine_Object_o *)v384->fields.logic;
    if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    }
    if ( UnityEngine_Object__op_Inequality(v348, 0LL, 0LL) )
    {
      this = (BattleLogicFunction_o *)BattleActionData__getSummonServant(action, -1, 0LL);
      if ( !this )
        goto LABEL_418;
      v349 = (int)this->fields.logic;
      v350 = this;
      if ( v349 >= 1 )
      {
        v351 = 0;
        while ( v351 < v349 )
        {
          v352 = *((_QWORD *)&v350->fields.logictarget + (int)v351);
          if ( !v352 )
            goto LABEL_418;
          this = (BattleLogicFunction_o *)v384->fields.logic;
          if ( !this )
            goto LABEL_418;
          BattleLogic__actEnemyPassiveSkill((BattleLogic_o *)this, *(_DWORD *)(v352 + 28), 0LL);
          v349 = (int)v350->fields.logic;
          if ( (int)++v351 >= v349 )
            goto LABEL_392;
        }
        goto LABEL_419;
      }
    }
  }
LABEL_392:
  FuncSideEffectArg = BattleLogicFunction_ProcListInArgs__get_FuncSideEffectArg(args, 0LL);
  if ( FuncSideEffectArg )
    ((void (__fastcall *)(BattleLogicFunction_FuncSideEffectFunctionArgument_o *, BattleLogicFunction_o *, BattleActionData_o *, BattleServantData_o *, void *))FuncSideEffectArg->klass->vtable._7_SetSideEffect.method)(
      FuncSideEffectArg,
      v384,
      action,
      v87,
      FuncSideEffectArg->klass[1]._1.image);
  if ( isBuffUpdate )
  {
    v354 = (UnityEngine_Object_o *)v384->fields.logic;
    if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    }
    if ( UnityEngine_Object__op_Inequality(v354, 0LL, 0LL) )
    {
      this = (BattleLogicFunction_o *)v384->fields.logic;
      if ( !this )
        goto LABEL_418;
      BattleLogic__checkUsedBuff((BattleLogic_o *)this, 0LL);
      v355 = v384->fields.data;
      if ( !v355 )
        goto LABEL_418;
      this = (BattleLogicFunction_o *)v355->fields._FieldEnvData_k__BackingField;
      if ( !this )
        goto LABEL_418;
      BattleFieldEnvironmentData__CheckUsedBuff((BattleFieldEnvironmentData_o *)this, 0LL);
    }
  }
  if ( (v367[8] & 1) != 0 || args->fields.updateField )
  {
    v356 = (UnityEngine_Object_o *)v384->fields.logic;
    if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    }
    if ( UnityEngine_Object__op_Inequality(v356, 0LL, 0LL) )
    {
      this = (BattleLogicFunction_o *)v384->fields.logic;
      if ( !this )
        goto LABEL_418;
      BattleLogic__updateFieldBuff((BattleLogic_o *)this, 0LL);
    }
  }
  this = (BattleLogicFunction_o *)v372;
  if ( !v372 )
LABEL_418:
    sub_B2C434(this, action);
  System_Collections_Generic_List_int___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v385,
    v372,
    (const MethodInfo_2F67E3C *)Method_System_Collections_Generic_List_int__GetEnumerator__);
  v386 = v385;
  while ( System_Collections_Generic_List_Enumerator_int___MoveNext(
            &v386,
            (const MethodInfo_20E7EC0 *)Method_System_Collections_Generic_List_Enumerator_int__MoveNext__) )
  {
    v357 = v384->fields.data;
    if ( !v357 )
      sub_B2C434(0LL, v359);
    v358 = BattleData__getServantData(v357, v386.fields.current, 0LL);
    if ( v358 )
      v358->fields.isTDLimitCount = 0;
  }
  System_Collections_Generic_List_Enumerator_int___Dispose(
    &v386,
    (const MethodInfo_20E7EBC *)Method_System_Collections_Generic_List_Enumerator_int__Dispose__);
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
  BattleActionData_o *v9; // x21
  BattleLogicFunction_o *v10; // x22
  __int64 v11; // x1
  __int64 v12; // x1
  __int64 v13; // x1
  __int64 v14; // x1
  __int64 v15; // x1
  __int64 v16; // x1
  __int64 v17; // x1
  __int64 v18; // x1
  BattleCommandData_o *v19; // x23
  BattleLogicFunction_AttackSideEffectFunctionArgument_o *v20; // x24
  System_Collections_Generic_IEnumerable_TSource__o *SideEffectList_k__BackingField; // x25
  BattleLogicFunction___c_c *v22; // x0
  struct BattleLogicFunction___c_StaticFields *static_fields; // x8
  System_Func_BattleLogicBuff_ReduceHpProcess_BuffInfo__int__o *_9__50_0; // x26
  Il2CppObject *v25; // x27
  struct BattleLogicFunction___c_StaticFields *v26; // x0
  System_String_array **v27; // x2
  System_String_array **v28; // x3
  System_Boolean_array **v29; // x4
  System_Int32_array **v30; // x5
  System_Int32_array *v31; // x6
  System_Int32_array *v32; // x7
  System_Collections_Generic_IEnumerable_TSource__o *v33; // x0
  __int64 v34; // x25
  BattleLogicFunction_SideEffectMakeArgument_o *v35; // x0
  const MethodInfo *v36; // x6
  const MethodInfo *v37; // x6
  __int64 v38; // x0

  v9 = mainAction;
  v10 = this;
  if ( (byte_418A77A & 1) == 0 )
  {
    sub_B2C35C(&BattleLogicFunction_AttackSideEffectFunctionArgument_TypeInfo, mainAction);
    sub_B2C35C(&BattleCommandData_TypeInfo, v11);
    sub_B2C35C(&Method_System_Linq_Enumerable_Select_BattleActionData_SideEffectData__int___, v12);
    sub_B2C35C(&Method_System_Linq_Enumerable_ToArray_int___, v13);
    sub_B2C35C(&Method_System_Func_BattleActionData_SideEffectData__int___ctor__, v14);
    sub_B2C35C(&System_Func_BattleActionData_SideEffectData__int__TypeInfo, v15);
    sub_B2C35C(&int___TypeInfo, v16);
    sub_B2C35C(&Method_BattleLogicFunction___c__setAttackSideEffect_b__50_0__, v17);
    this = (BattleLogicFunction_o *)sub_B2C35C(&BattleLogicFunction___c_TypeInfo, v18);
    byte_418A77A = 1;
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
      v19 = (BattleCommandData_o *)sub_B2C42C(BattleCommandData_TypeInfo);
      BattleCommandData___ctor(v19, 0LL);
      this = (BattleLogicFunction_o *)BattleServantData__getTreasureDvcCardId(actionSvtData, 0LL);
      if ( !v19 )
        goto LABEL_24;
      v19->fields._type = (int)this;
      v19->fields.treasureDvc = BattleServantData__getTreasureDvcId(actionSvtData, 1, 0LL);
    }
    else
    {
      v19 = 0LL;
    }
    v20 = (BattleLogicFunction_AttackSideEffectFunctionArgument_o *)sub_B2C42C(BattleLogicFunction_AttackSideEffectFunctionArgument_TypeInfo);
    BattleLogicFunction_AttackSideEffectFunctionArgument___ctor(v20, 0LL);
    SideEffectList_k__BackingField = (System_Collections_Generic_IEnumerable_TSource__o *)attackArg->fields._SideEffectList_k__BackingField;
    v22 = BattleLogicFunction___c_TypeInfo;
    if ( (BYTE3(BattleLogicFunction___c_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !BattleLogicFunction___c_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(BattleLogicFunction___c_TypeInfo);
      v22 = BattleLogicFunction___c_TypeInfo;
    }
    static_fields = v22->static_fields;
    _9__50_0 = (System_Func_BattleLogicBuff_ReduceHpProcess_BuffInfo__int__o *)static_fields->__9__50_0;
    if ( !_9__50_0 )
    {
      if ( (BYTE3(v22->vtable._0_Equals.methodPtr) & 4) != 0 && !v22->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(v22);
        static_fields = BattleLogicFunction___c_TypeInfo->static_fields;
      }
      v25 = (Il2CppObject *)static_fields->__9;
      _9__50_0 = (System_Func_BattleLogicBuff_ReduceHpProcess_BuffInfo__int__o *)sub_B2C42C(System_Func_BattleActionData_SideEffectData__int__TypeInfo);
      System_Func_BattleLogicBuff_ReduceHpProcess_BuffInfo__int____ctor(
        _9__50_0,
        v25,
        Method_BattleLogicFunction___c__setAttackSideEffect_b__50_0__,
        (const MethodInfo_27127B0 *)Method_System_Func_BattleActionData_SideEffectData__int___ctor__);
      v26 = BattleLogicFunction___c_TypeInfo->static_fields;
      v26->__9__50_0 = (struct System_Func_BattleActionData_SideEffectData__int__o *)_9__50_0;
      sub_B2C2F8(
        (BattleServantConfConponent_o *)&v26->__9__50_0,
        (System_Int32_array **)_9__50_0,
        v27,
        v28,
        v29,
        v30,
        v31,
        v32);
    }
    v33 = (System_Collections_Generic_IEnumerable_TSource__o *)System_Linq_Enumerable__Select_BattleLogicBuff_ReduceHpProcess_BuffInfo__int_(
                                                                 SideEffectList_k__BackingField,
                                                                 (System_Func_TSource__TResult__o *)_9__50_0,
                                                                 (const MethodInfo_1A967E8 *)Method_System_Linq_Enumerable_Select_BattleActionData_SideEffectData__int___);
    this = (BattleLogicFunction_o *)System_Linq_Enumerable__ToArray_int_(
                                      v33,
                                      (const MethodInfo_1A9AE24 *)Method_System_Linq_Enumerable_ToArray_int___);
    if ( v9 )
    {
      BattleActionData__SetFirstAtkMainTargetId(v9, (System_Int32_array *)this, 0LL);
      v34 = ((__int64 (__fastcall *)(BattleLogicFunction_SideEffectMakeArgument_o *, const char *))attackArg->klass[1]._1.gc_desc)(
              attackArg,
              attackArg->klass[1]._1.name);
      this = (BattleLogicFunction_o *)sub_B2C374(int___TypeInfo, 1LL);
      if ( this )
      {
        mainAction = (BattleActionData_o *)this;
        if ( !LODWORD(this->fields.logic) )
        {
          v38 = sub_B2C460(this);
          sub_B2C400(v38, 0LL);
        }
        LODWORD(this->fields.logictarget) = v9->fields._FirstAtkMainTargetId_k__BackingField;
        if ( v34 )
        {
          v35 = (BattleLogicFunction_SideEffectMakeArgument_o *)(*(__int64 (__fastcall **)(__int64, BattleLogicFunction_o *, _QWORD))(*(_QWORD *)v34 + 408LL))(
                                                                  v34,
                                                                  this,
                                                                  *(_QWORD *)(*(_QWORD *)v34 + 416LL));
          BattleLogicFunction__SetTargetAttackSideEffect(v10, v20, v9, actionSvtData, v19, v35, v36);
          BattleLogicFunction__SetTargetAttackSideEffect(v10, v20, v9, actionSvtData, v19, attackArg, v37);
          return;
        }
      }
    }
LABEL_24:
    sub_B2C434(this, mainAction);
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
    sub_B2C434(this, 0LL);
  DamageAttackSideEffectList = BattleActionData__getDamageAttackSideEffectList(mainAction, 0LL);
  this->fields._SideEffectList_k__BackingField = DamageAttackSideEffectList;
  sub_B2C2F8(
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

  if ( (byte_418717F & 1) == 0 )
  {
    sub_B2C35C(&BattleLogicFunction_AfterMainAttackSideEffectMakeArgument_TypeInfo, method);
    byte_418717F = 1;
  }
  v2 = (BattleLogicFunction_SideEffectMakeArgument_o *)sub_B2C42C(BattleLogicFunction_AfterMainAttackSideEffectMakeArgument_TypeInfo);
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
  sub_B2C2F8(
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

  if ( (byte_4187180 & 1) == 0 )
  {
    sub_B2C35C(&BattleLogicFunction_AttackSideEffectCheckDuplicateFunction_TypeInfo, method);
    byte_4187180 = 1;
  }
  BattleLogicFunction_CommonSideEffectFunctionArgument___ctor(
    (BattleLogicFunction_CommonSideEffectFunctionArgument_o *)this,
    method);
  v3 = sub_B2C42C(BattleLogicFunction_AttackSideEffectCheckDuplicateFunction_TypeInfo);
  BattleLogicFunction_CommonCheckDuplicateFunction___ctor((BattleLogicFunction_CommonCheckDuplicateFunction_o *)v3, v4);
  *(_QWORD *)(v3 + 24) = this;
  sub_B2C2F8((BattleServantConfConponent_o *)(v3 + 24), (System_Int32_array **)this, v5, v6, v7, v8, v9, v10);
  this->fields.checkDuplicate = (struct BattleLogicFunction_CheckDuplicateFunction_o *)v3;
  sub_B2C2F8(
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
  __int64 v3; // x1
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v4; // x20
  System_String_array **v5; // x2
  System_String_array **v6; // x3
  System_Boolean_array **v7; // x4
  System_Int32_array **v8; // x5
  System_Int32_array *v9; // x6
  System_Int32_array *v10; // x7

  if ( (byte_4187185 & 1) == 0 )
  {
    sub_B2C35C(&Method_System_Collections_Generic_List_BattleLogicFunction_ExecutedFunctionData___ctor__, method);
    sub_B2C35C(&System_Collections_Generic_List_BattleLogicFunction_ExecutedFunctionData__TypeInfo, v3);
    byte_4187185 = 1;
  }
  v4 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B2C42C(System_Collections_Generic_List_BattleLogicFunction_ExecutedFunctionData__TypeInfo);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v4,
    (const MethodInfo_2EF379C *)Method_System_Collections_Generic_List_BattleLogicFunction_ExecutedFunctionData___ctor__);
  this->fields.executedFuncList = (struct System_Collections_Generic_List_BattleLogicFunction_ExecutedFunctionData__o *)v4;
  sub_B2C2F8((BattleServantConfConponent_o *)&this->fields, (System_Int32_array **)v4, v5, v6, v7, v8, v9, v10);
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
  __int64 v3; // x1
  struct System_Collections_Generic_List_BattleLogicFunction_ExecutedFunctionData__o *executedFuncList; // x22
  __int64 v5; // x20
  int size; // w8
  BattleLogicFunction_ExecutedFunctionData_o *v7; // x8

  v2 = this;
  if ( (byte_4187181 & 1) == 0 )
  {
    sub_B2C35C(&Method_System_Collections_Generic_List_BattleLogicFunction_ExecutedFunctionData__get_Count__, method);
    this = (BattleLogicFunction_CommonCheckDuplicateFunction_o *)sub_B2C35C(
                                                                   &Method_System_Collections_Generic_List_BattleLogicFunction_ExecutedFunctionData__get_Item__,
                                                                   v3);
    byte_4187181 = 1;
  }
  executedFuncList = v2->fields.executedFuncList;
  if ( !executedFuncList )
LABEL_10:
    sub_B2C434(this, method);
  v5 = 0LL;
  while ( 1 )
  {
    size = executedFuncList->fields._size;
    if ( (int)v5 >= size )
      break;
    if ( size <= (unsigned int)v5 )
      System_ThrowHelper__ThrowArgumentOutOfRangeException_41710740(0LL);
    v7 = executedFuncList->fields._items->m_Items[v5];
    if ( v7 )
    {
      v7->fields.isEnable = 1;
      executedFuncList = v2->fields.executedFuncList;
      ++v5;
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
    sub_B2C434(this, 0LL);
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
  __int64 v8; // x1
  __int64 v9; // x21
  __int64 v10; // x0
  __int64 v11; // x1
  System_String_array **v12; // x2
  System_String_array **v13; // x3
  System_Boolean_array **v14; // x4
  System_Int32_array **v15; // x5
  System_Int32_array *v16; // x6
  System_Int32_array *v17; // x7
  struct System_Collections_Generic_List_BattleLogicFunction_ExecutedFunctionData__o *executedFuncList; // x19
  System_Predicate_peRenderTexture_ChangeLayerObject__o *v19; // x20

  if ( (byte_4187183 & 1) == 0 )
  {
    sub_B2C35C(&Method_System_Collections_Generic_List_BattleLogicFunction_ExecutedFunctionData__FindIndex__, vals);
    sub_B2C35C(&Method_System_Predicate_BattleLogicFunction_ExecutedFunctionData___ctor__, v5);
    sub_B2C35C(&System_Predicate_BattleLogicFunction_ExecutedFunctionData__TypeInfo, v6);
    sub_B2C35C(
      &Method_BattleLogicFunction_CommonCheckDuplicateFunction___c__DisplayClass7_0__isExecutedFunction_b__0__,
      v7);
    sub_B2C35C(&BattleLogicFunction_CommonCheckDuplicateFunction___c__DisplayClass7_0_TypeInfo, v8);
    byte_4187183 = 1;
  }
  v9 = sub_B2C42C(BattleLogicFunction_CommonCheckDuplicateFunction___c__DisplayClass7_0_TypeInfo);
  BattleLogicFunction_CommonCheckDuplicateFunction___c__DisplayClass7_0___ctor(
    (BattleLogicFunction_CommonCheckDuplicateFunction___c__DisplayClass7_0_o *)v9,
    0LL);
  if ( !v9
    || (*(_QWORD *)(v9 + 16) = vals,
        sub_B2C2F8((BattleServantConfConponent_o *)(v9 + 16), (System_Int32_array **)vals, v12, v13, v14, v15, v16, v17),
        executedFuncList = this->fields.executedFuncList,
        v19 = (System_Predicate_peRenderTexture_ChangeLayerObject__o *)sub_B2C42C(System_Predicate_BattleLogicFunction_ExecutedFunctionData__TypeInfo),
        System_Predicate_peRenderTexture_ChangeLayerObject____ctor(
          v19,
          (Il2CppObject *)v9,
          Method_BattleLogicFunction_CommonCheckDuplicateFunction___c__DisplayClass7_0__isExecutedFunction_b__0__,
          (const MethodInfo_2952BE4 *)Method_System_Predicate_BattleLogicFunction_ExecutedFunctionData___ctor__),
        !executedFuncList) )
  {
    sub_B2C434(v10, v11);
  }
  return System_Collections_Generic_List_SimpleAnimationPlayable_StateInfo___FindIndex(
           (System_Collections_Generic_List_SimpleAnimationPlayable_StateInfo__o *)executedFuncList,
           (System_Predicate_T__o *)v19,
           (const MethodInfo_2EF4F0C *)Method_System_Collections_Generic_List_BattleLogicFunction_ExecutedFunctionData__FindIndex__) >= 0;
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
  __int64 v10; // x1
  __int64 v11; // x22
  __int64 v12; // x0
  __int64 v13; // x1
  System_String_array **v14; // x2
  System_String_array **v15; // x3
  System_Boolean_array **v16; // x4
  System_Int32_array **v17; // x5
  System_Int32_array *v18; // x6
  System_Int32_array *v19; // x7
  struct System_Collections_Generic_List_BattleLogicFunction_ExecutedFunctionData__o *executedFuncList; // x19
  System_Predicate_peRenderTexture_ChangeLayerObject__o *v21; // x20

  if ( (byte_4187184 & 1) == 0 )
  {
    sub_B2C35C(&Method_System_Collections_Generic_List_BattleLogicFunction_ExecutedFunctionData__FindIndex__, vals);
    sub_B2C35C(&Method_System_Predicate_BattleLogicFunction_ExecutedFunctionData___ctor__, v7);
    sub_B2C35C(&System_Predicate_BattleLogicFunction_ExecutedFunctionData__TypeInfo, v8);
    sub_B2C35C(
      &Method_BattleLogicFunction_CommonCheckDuplicateFunction___c__DisplayClass8_0__isExecutedTarget_b__0__,
      v9);
    sub_B2C35C(&BattleLogicFunction_CommonCheckDuplicateFunction___c__DisplayClass8_0_TypeInfo, v10);
    byte_4187184 = 1;
  }
  v11 = sub_B2C42C(BattleLogicFunction_CommonCheckDuplicateFunction___c__DisplayClass8_0_TypeInfo);
  BattleLogicFunction_CommonCheckDuplicateFunction___c__DisplayClass8_0___ctor(
    (BattleLogicFunction_CommonCheckDuplicateFunction___c__DisplayClass8_0_o *)v11,
    0LL);
  if ( !v11
    || (*(_QWORD *)(v11 + 16) = vals,
        sub_B2C2F8(
          (BattleServantConfConponent_o *)(v11 + 16),
          (System_Int32_array **)vals,
          v14,
          v15,
          v16,
          v17,
          v18,
          v19),
        *(_DWORD *)(v11 + 24) = targetId,
        executedFuncList = this->fields.executedFuncList,
        v21 = (System_Predicate_peRenderTexture_ChangeLayerObject__o *)sub_B2C42C(System_Predicate_BattleLogicFunction_ExecutedFunctionData__TypeInfo),
        System_Predicate_peRenderTexture_ChangeLayerObject____ctor(
          v21,
          (Il2CppObject *)v11,
          Method_BattleLogicFunction_CommonCheckDuplicateFunction___c__DisplayClass8_0__isExecutedTarget_b__0__,
          (const MethodInfo_2952BE4 *)Method_System_Predicate_BattleLogicFunction_ExecutedFunctionData___ctor__),
        !executedFuncList) )
  {
    sub_B2C434(v12, v13);
  }
  return System_Collections_Generic_List_SimpleAnimationPlayable_StateInfo___FindIndex(
           (System_Collections_Generic_List_SimpleAnimationPlayable_StateInfo__o *)executedFuncList,
           (System_Predicate_T__o *)v21,
           (const MethodInfo_2EF4F0C *)Method_System_Collections_Generic_List_BattleLogicFunction_ExecutedFunctionData__FindIndex__) >= 0;
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
    sub_B2C434(this, 0LL);
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
  __int64 v13; // x1
  __int64 v14; // x21
  __int64 Index; // x0
  __int64 v16; // x1
  System_String_array **v17; // x2
  System_String_array **v18; // x3
  System_Boolean_array **v19; // x4
  System_Int32_array **v20; // x5
  System_Int32_array *v21; // x6
  System_Int32_array *v22; // x7
  unsigned __int64 v23; // x26
  __int64 v24; // x22
  System_String_array **v25; // x2
  System_String_array **v26; // x3
  System_Boolean_array **v27; // x4
  System_Int32_array **v28; // x5
  System_Int32_array *v29; // x6
  System_Int32_array *v30; // x7
  __int64 v31; // x23
  __int64 v32; // x0
  struct System_Collections_Generic_List_BattleLogicFunction_ExecutedFunctionData__o *executedFuncList; // x24
  System_Predicate_peRenderTexture_ChangeLayerObject__o *v34; // x25
  DataVals_o *v35; // x24
  struct System_Collections_Generic_List_BattleLogicFunction_ExecutedFunctionData__o *v36; // x23
  int32_t v37; // w25
  BattleLogicFunction_ExecutedFunctionData_o *v38; // x22
  const MethodInfo *v39; // x3
  __int64 v40; // x0

  if ( (byte_4187182 & 1) == 0 )
  {
    sub_B2C35C(&BattleLogicFunction_ExecutedFunctionData_TypeInfo, vals);
    sub_B2C35C(&Method_System_Collections_Generic_List_BattleLogicFunction_ExecutedFunctionData__Add__, v7);
    sub_B2C35C(&Method_System_Collections_Generic_List_BattleLogicFunction_ExecutedFunctionData__FindIndex__, v8);
    sub_B2C35C(&Method_System_Predicate_BattleLogicFunction_ExecutedFunctionData___ctor__, v9);
    sub_B2C35C(&System_Predicate_BattleLogicFunction_ExecutedFunctionData__TypeInfo, v10);
    sub_B2C35C(&BattleLogicFunction_CommonCheckDuplicateFunction___c__DisplayClass5_0_TypeInfo, v11);
    sub_B2C35C(
      &Method_BattleLogicFunction_CommonCheckDuplicateFunction___c__DisplayClass5_1__saveExecutedFunction_b__0__,
      v12);
    sub_B2C35C(&BattleLogicFunction_CommonCheckDuplicateFunction___c__DisplayClass5_1_TypeInfo, v13);
    byte_4187182 = 1;
  }
  v14 = sub_B2C42C(BattleLogicFunction_CommonCheckDuplicateFunction___c__DisplayClass5_0_TypeInfo);
  BattleLogicFunction_CommonCheckDuplicateFunction___c__DisplayClass5_0___ctor(
    (BattleLogicFunction_CommonCheckDuplicateFunction___c__DisplayClass5_0_o *)v14,
    0LL);
  if ( !v14 )
    goto LABEL_16;
  *(_QWORD *)(v14 + 16) = vals;
  sub_B2C2F8((BattleServantConfConponent_o *)(v14 + 16), (System_Int32_array **)vals, v17, v18, v19, v20, v21, v22);
  if ( !targetIds )
    goto LABEL_16;
  if ( (int)targetIds->max_length >= 1 )
  {
    v23 = 0LL;
    while ( 1 )
    {
      v24 = sub_B2C42C(BattleLogicFunction_CommonCheckDuplicateFunction___c__DisplayClass5_1_TypeInfo);
      BattleLogicFunction_CommonCheckDuplicateFunction___c__DisplayClass5_1___ctor(
        (BattleLogicFunction_CommonCheckDuplicateFunction___c__DisplayClass5_1_o *)v24,
        0LL);
      if ( !v24 )
        break;
      *(_QWORD *)(v24 + 24) = v14;
      v31 = v24 + 24;
      sub_B2C2F8((BattleServantConfConponent_o *)(v24 + 24), (System_Int32_array **)v14, v25, v26, v27, v28, v29, v30);
      if ( v23 >= targetIds->max_length )
      {
        v40 = sub_B2C460(v32);
        sub_B2C400(v40, 0LL);
      }
      *(_DWORD *)(v24 + 16) = targetIds->m_Items[v23 + 1];
      executedFuncList = this->fields.executedFuncList;
      v34 = (System_Predicate_peRenderTexture_ChangeLayerObject__o *)sub_B2C42C(System_Predicate_BattleLogicFunction_ExecutedFunctionData__TypeInfo);
      System_Predicate_peRenderTexture_ChangeLayerObject____ctor(
        v34,
        (Il2CppObject *)v24,
        Method_BattleLogicFunction_CommonCheckDuplicateFunction___c__DisplayClass5_1__saveExecutedFunction_b__0__,
        (const MethodInfo_2952BE4 *)Method_System_Predicate_BattleLogicFunction_ExecutedFunctionData___ctor__);
      if ( !executedFuncList )
        break;
      Index = System_Collections_Generic_List_SimpleAnimationPlayable_StateInfo___FindIndex(
                (System_Collections_Generic_List_SimpleAnimationPlayable_StateInfo__o *)executedFuncList,
                (System_Predicate_T__o *)v34,
                (const MethodInfo_2EF4F0C *)Method_System_Collections_Generic_List_BattleLogicFunction_ExecutedFunctionData__FindIndex__);
      if ( (Index & 0x80000000) != 0 )
      {
        if ( !*(_QWORD *)v31 )
          break;
        v35 = *(DataVals_o **)(*(_QWORD *)v31 + 16LL);
        v36 = this->fields.executedFuncList;
        v37 = *(_DWORD *)(v24 + 16);
        v38 = (BattleLogicFunction_ExecutedFunctionData_o *)sub_B2C42C(BattleLogicFunction_ExecutedFunctionData_TypeInfo);
        BattleLogicFunction_ExecutedFunctionData___ctor(v38, v35, v37, v39);
        if ( !v36 )
          break;
        System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
          (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)v36,
          (EventMissionProgressRequest_Argument_ProgressData_o *)v38,
          (const MethodInfo_2EF4460 *)Method_System_Collections_Generic_List_BattleLogicFunction_ExecutedFunctionData__Add__);
      }
      if ( (__int64)++v23 >= (int)targetIds->max_length )
        return;
    }
LABEL_16:
    sub_B2C434(Index, v16);
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
    sub_B2C434(this, n);
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
    sub_B2C434(this, 0LL);
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
    sub_B2C434(this, 0LL);
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
  sub_B2C2F8(
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
    sub_B2C434(0LL, method);
  v4 = BattleLogicFunction_CommonSideEffectFunctionArgument__getCheckBuffFuncList(argument, method);
  this->fields.executedFuncList = v4;
  sub_B2C2F8((BattleServantConfConponent_o *)&this->fields, (System_Int32_array **)v4, v5, v6, v7, v8, v9, v10);
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
    sub_B2C434(this, vals);
  if ( !targetIds->max_length )
  {
    v5 = sub_B2C460(this);
    sub_B2C400(v5, 0LL);
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
  __int64 v3; // x1
  System_Collections_Generic_Dictionary_int__WarBoardEvalValueSquare_EvalValueSquare__o *v4; // x20
  System_String_array **v5; // x2
  System_String_array **v6; // x3
  System_Boolean_array **v7; // x4
  System_Int32_array **v8; // x5
  System_Int32_array *v9; // x6
  System_Int32_array *v10; // x7
  const MethodInfo *v11; // x1

  if ( (byte_4187187 & 1) == 0 )
  {
    sub_B2C35C(
      &Method_System_Collections_Generic_Dictionary_int__List_BattleLogicFunction_ExecutedFunctionData____ctor__,
      method);
    sub_B2C35C(&System_Collections_Generic_Dictionary_int__List_BattleLogicFunction_ExecutedFunctionData___TypeInfo, v3);
    byte_4187187 = 1;
  }
  this->fields.buffUniqueId = -1;
  v4 = (System_Collections_Generic_Dictionary_int__WarBoardEvalValueSquare_EvalValueSquare__o *)sub_B2C42C(System_Collections_Generic_Dictionary_int__List_BattleLogicFunction_ExecutedFunctionData___TypeInfo);
  System_Collections_Generic_Dictionary_int__WarBoardEvalValueSquare_EvalValueSquare____ctor(
    v4,
    (const MethodInfo_2E63B98 *)Method_System_Collections_Generic_Dictionary_int__List_BattleLogicFunction_ExecutedFunctionData____ctor__);
  this->fields.executedBuffFuncDic = (struct System_Collections_Generic_Dictionary_int__List_BattleLogicFunction_ExecutedFunctionData___o *)v4;
  sub_B2C2F8(
    (BattleServantConfConponent_o *)&this->fields.executedBuffFuncDic,
    (System_Int32_array **)v4,
    v5,
    v6,
    v7,
    v8,
    v9,
    v10);
  BattleLogicFunction_FunctionArgument___ctor((BattleLogicFunction_FunctionArgument_o *)this, v11);
}


System_Collections_Generic_List_BattleLogicFunction_ExecutedFunctionData__o *__fastcall BattleLogicFunction_CommonSideEffectFunctionArgument__getCheckBuffFuncList(
        BattleLogicFunction_CommonSideEffectFunctionArgument_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  struct System_Collections_Generic_Dictionary_int__List_BattleLogicFunction_ExecutedFunctionData___o *executedBuffFuncDic; // x0
  struct System_Collections_Generic_Dictionary_int__List_BattleLogicFunction_ExecutedFunctionData___o *v8; // x20
  int32_t buffUniqueId; // w21
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v10; // x22

  if ( (byte_4187186 & 1) == 0 )
  {
    sub_B2C35C(
      &Method_System_Collections_Generic_Dictionary_int__List_BattleLogicFunction_ExecutedFunctionData___ContainsKey__,
      method);
    sub_B2C35C(
      &Method_System_Collections_Generic_Dictionary_int__List_BattleLogicFunction_ExecutedFunctionData___get_Item__,
      v3);
    sub_B2C35C(
      &Method_System_Collections_Generic_Dictionary_int__List_BattleLogicFunction_ExecutedFunctionData___set_Item__,
      v4);
    sub_B2C35C(&Method_System_Collections_Generic_List_BattleLogicFunction_ExecutedFunctionData___ctor__, v5);
    sub_B2C35C(&System_Collections_Generic_List_BattleLogicFunction_ExecutedFunctionData__TypeInfo, v6);
    byte_4187186 = 1;
  }
  executedBuffFuncDic = this->fields.executedBuffFuncDic;
  if ( !executedBuffFuncDic )
    goto LABEL_9;
  if ( !System_Collections_Generic_Dictionary_int__WarBoardAIRoute_RouteData___ContainsKey(
          (System_Collections_Generic_Dictionary_int__WarBoardAIRoute_RouteData__o *)executedBuffFuncDic,
          this->fields.buffUniqueId,
          (const MethodInfo_2E649C0 *)Method_System_Collections_Generic_Dictionary_int__List_BattleLogicFunction_ExecutedFunctionData___ContainsKey__) )
  {
    v8 = this->fields.executedBuffFuncDic;
    buffUniqueId = this->fields.buffUniqueId;
    v10 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B2C42C(System_Collections_Generic_List_BattleLogicFunction_ExecutedFunctionData__TypeInfo);
    System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
      v10,
      (const MethodInfo_2EF379C *)Method_System_Collections_Generic_List_BattleLogicFunction_ExecutedFunctionData___ctor__);
    if ( !v8 )
      goto LABEL_9;
    System_Collections_Generic_Dictionary_int__WarBoardAIRoute_RouteData___set_Item(
      (System_Collections_Generic_Dictionary_int__WarBoardAIRoute_RouteData__o *)v8,
      buffUniqueId,
      (WarBoardAIRoute_RouteData_o *)v10,
      (const MethodInfo_2E64724 *)Method_System_Collections_Generic_Dictionary_int__List_BattleLogicFunction_ExecutedFunctionData___set_Item__);
  }
  executedBuffFuncDic = this->fields.executedBuffFuncDic;
  if ( !executedBuffFuncDic )
LABEL_9:
    sub_B2C434(executedBuffFuncDic, method);
  return (System_Collections_Generic_List_BattleLogicFunction_ExecutedFunctionData__o *)System_Collections_Generic_Dictionary_int__WarBoardEvalValueSquare_EvalValueSquare___get_Item(
                                                                                          (System_Collections_Generic_Dictionary_int__WarBoardEvalValueSquare_EvalValueSquare__o *)executedBuffFuncDic,
                                                                                          this->fields.buffUniqueId,
                                                                                          (const MethodInfo_2E64688 *)Method_System_Collections_Generic_Dictionary_int__List_BattleLogicFunction_ExecutedFunctionData___get_Item__);
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
    sub_B2C434(v7, v8);
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
    sub_B2C434(this, 0LL);
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
  System_String_array **v6; // x2
  System_String_array **v7; // x3
  System_Boolean_array **v8; // x4
  System_Int32_array **v9; // x5
  System_Int32_array *v10; // x6
  System_Int32_array *v11; // x7
  const MethodInfo *v12; // x1
  __int64 v13; // x20
  const MethodInfo *v14; // x1
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

  if ( (byte_4187188 & 1) == 0 )
  {
    sub_B2C35C(&BattleLogicFunction_CommonSideEffectCheckDuplicateFunction_TypeInfo, method);
    sub_B2C35C(&Method_System_Collections_Generic_HashSet_int___ctor___67287824, v3);
    sub_B2C35C(&System_Collections_Generic_HashSet_int__TypeInfo, v4);
    byte_4187188 = 1;
  }
  v5 = (System_Collections_Generic_HashSet_int__o *)sub_B2C42C(System_Collections_Generic_HashSet_int__TypeInfo);
  System_Collections_Generic_HashSet_int____ctor(
    v5,
    (const MethodInfo_2D85080 *)Method_System_Collections_Generic_HashSet_int___ctor___67287824);
  this->fields.hashTargetId = v5;
  sub_B2C2F8(
    (BattleServantConfConponent_o *)&this->fields.hashTargetId,
    (System_Int32_array **)v5,
    v6,
    v7,
    v8,
    v9,
    v10,
    v11);
  BattleLogicFunction_CommonSideEffectFunctionArgument___ctor(
    (BattleLogicFunction_CommonSideEffectFunctionArgument_o *)this,
    v12);
  v13 = sub_B2C42C(BattleLogicFunction_CommonSideEffectCheckDuplicateFunction_TypeInfo);
  BattleLogicFunction_CommonCheckDuplicateFunction___ctor(
    (BattleLogicFunction_CommonCheckDuplicateFunction_o *)v13,
    v14);
  *(_QWORD *)(v13 + 24) = this;
  sub_B2C2F8((BattleServantConfConponent_o *)(v13 + 24), (System_Int32_array **)this, v15, v16, v17, v18, v19, v20);
  this->fields.checkDuplicate = (struct BattleLogicFunction_CheckDuplicateFunction_o *)v13;
  sub_B2C2F8(
    (BattleServantConfConponent_o *)&this->fields.checkDuplicate,
    (System_Int32_array **)v13,
    v21,
    v22,
    v23,
    v24,
    v25,
    v26);
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
  if ( (byte_418718A & 1) == 0 )
  {
    this = (BattleLogicFunction_FuncSideEffectFunctionArgument_o *)sub_B2C35C(
                                                                     &Method_System_Collections_Generic_HashSet_int__Add__,
                                                                     funcTarget);
    byte_418718A = 1;
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
    this = (BattleLogicFunction_FuncSideEffectFunctionArgument_o *)v4->fields.hashTargetId;
    if ( this )
    {
      System_Collections_Generic_HashSet_int___Add(
        (System_Collections_Generic_HashSet_int__o *)this,
        funcTarget->fields._targetId_k__BackingField,
        (const MethodInfo_2D8625C *)Method_System_Collections_Generic_HashSet_int__Add__);
      return;
    }
LABEL_12:
    sub_B2C434(this, funcTarget);
  }
}


void __fastcall BattleLogicFunction_FuncSideEffectFunctionArgument__AddTarget_24165948(
        BattleLogicFunction_FuncSideEffectFunctionArgument_o *this,
        BattleLogicFunction_FuncSideEffectFunctionArgument_o *arg,
        const MethodInfo *method)
{
  System_Collections_Generic_HashSet_int__o *hashTargetId; // x0

  if ( (byte_418718B & 1) == 0 )
  {
    sub_B2C35C(&Method_System_Collections_Generic_HashSet_int__UnionWith__, arg);
    byte_418718B = 1;
  }
  if ( arg )
  {
    hashTargetId = this->fields.hashTargetId;
    if ( !hashTargetId )
      sub_B2C434(0LL, arg);
    System_Collections_Generic_HashSet_int___UnionWith(
      hashTargetId,
      (System_Collections_Generic_IEnumerable_T__o *)arg->fields.hashTargetId,
      (const MethodInfo_2D86280 *)Method_System_Collections_Generic_HashSet_int__UnionWith__);
  }
}


// local variable allocation has failed, the output may be wrong!
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

  if ( (byte_4187189 & 1) == 0 )
  {
    sub_B2C35C(&Method_System_Array_Empty_BuffList_ACTION___, isMainOnly);
    byte_4187189 = 1;
  }
  v3 = (_QWORD **)Method_System_Array_Empty_BuffList_ACTION___;
  v4 = **((_QWORD **)Method_System_Array_Empty_BuffList_ACTION___ + 6);
  v5 = *(_WORD *)(v4 + 306);
  if ( (v5 & 1) == 0 )
  {
    sub_AC505C(**((_QWORD **)Method_System_Array_Empty_BuffList_ACTION___ + 6));
    v5 = *(_WORD *)(v4 + 306);
  }
  if ( (v5 & 0x400) != 0 )
  {
    v6 = *v3[6];
    if ( (*(_BYTE *)(v6 + 306) & 1) == 0 )
      sub_AC505C(*v3[6]);
    if ( !*(_DWORD *)(v6 + 224) )
    {
      v7 = *v3[6];
      if ( (*(_BYTE *)(v7 + 306) & 1) == 0 )
        sub_AC505C(*v3[6]);
      j_il2cpp_runtime_class_init_0(v7);
    }
  }
  v8 = *v3[6];
  if ( (*(_BYTE *)(v8 + 306) & 1) == 0 )
    sub_AC505C(*v3[6]);
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

  if ( (byte_418718C & 1) == 0 )
  {
    sub_B2C35C(&Method_System_Linq_Enumerable_ToArray_int___, logicFunc);
    byte_418718C = 1;
  }
  v9 = System_Linq_Enumerable__ToArray_int_(
         (System_Collections_Generic_IEnumerable_TSource__o *)this->fields.hashTargetId,
         (const MethodInfo_1A9AE24 *)Method_System_Linq_Enumerable_ToArray_int___);
  if ( !logicFunc )
    sub_B2C434(v9, v10);
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

  if ( (byte_418718D & 1) == 0 )
  {
    sub_B2C35C(&BattleLogicFunction_CheckDuplicateFunction_TypeInfo, method);
    byte_418718D = 1;
  }
  v3 = (Il2CppObject *)sub_B2C42C(BattleLogicFunction_CheckDuplicateFunction_TypeInfo);
  System_Object___ctor(v3, 0LL);
  this->fields.checkDuplicate = (struct BattleLogicFunction_CheckDuplicateFunction_o *)v3;
  sub_B2C2F8(
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
    sub_B2C434(0LL, method);
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
  sub_B2C2F8(
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
  sub_B2C2F8(
    (BattleServantConfConponent_o *)&this->fields._FuncSideEffectArg_k__BackingField,
    (System_Int32_array **)value,
    (System_String_array **)method,
    v3,
    v4,
    v5,
    v6,
    v7);
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

  if ( (byte_418718E & 1) == 0 )
  {
    sub_B2C35C(&BattleLogicFunction_PreMainAttackSideEffectMakeArgument_TypeInfo, method);
    byte_418718E = 1;
  }
  v2 = (BattleLogicFunction_SideEffectMakeArgument_o *)sub_B2C42C(BattleLogicFunction_PreMainAttackSideEffectMakeArgument_TypeInfo);
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
  System_String_array **v8; // x2
  System_String_array **v9; // x3
  System_Boolean_array **v10; // x4
  System_Int32_array **v11; // x5
  System_Int32_array *v12; // x6
  System_Int32_array *v13; // x7
  System_String_array **v14; // x2
  System_String_array **v15; // x3
  System_Boolean_array **v16; // x4
  System_Int32_array **v17; // x5
  System_Int32_array *v18; // x6
  System_Int32_array *v19; // x7
  const MethodInfo *v20; // x1
  struct BattleLogicFunction_FunctionArgument_o **p_externalArg; // x19
  __int64 v22; // x1

  v3 = argument;
  if ( (byte_4187190 & 1) == 0 )
  {
    sub_B2C35C(&Method_System_Collections_Generic_Dictionary_KeyValuePair_int__int___bool___ctor__, argument);
    sub_B2C35C(&System_Collections_Generic_Dictionary_KeyValuePair_int__int___bool__TypeInfo, v5);
    sub_B2C35C(&BattleLogicFunction_FunctionArgument_TypeInfo, v6);
    byte_4187190 = 1;
  }
  v7 = (System_Collections_Generic_Dictionary_KeyValuePair_int__int___bool__o *)sub_B2C42C(System_Collections_Generic_Dictionary_KeyValuePair_int__int___bool__TypeInfo);
  System_Collections_Generic_Dictionary_KeyValuePair_int__int___bool____ctor(
    v7,
    (const MethodInfo_24E634C *)Method_System_Collections_Generic_Dictionary_KeyValuePair_int__int___bool___ctor__);
  this->fields.funcResults = v7;
  sub_B2C2F8((BattleServantConfConponent_o *)&this->fields, (System_Int32_array **)v7, v8, v9, v10, v11, v12, v13);
  this->fields.tdCommandTypeChange = -1;
  System_Object___ctor((Il2CppObject *)this, 0LL);
  if ( !v3 )
  {
    v3 = (BattleLogicFunction_FunctionArgument_o *)sub_B2C42C(BattleLogicFunction_FunctionArgument_TypeInfo);
    BattleLogicFunction_FunctionArgument___ctor(v3, v20);
  }
  this->fields.externalArg = v3;
  p_externalArg = &this->fields.externalArg;
  sub_B2C2F8((BattleServantConfConponent_o *)p_externalArg, (System_Int32_array **)v3, v14, v15, v16, v17, v18, v19);
  if ( !*p_externalArg )
    sub_B2C434(0LL, v22);
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
  __int64 v26; // x1
  BattleLogicFunction_ProcListInArgs___c__DisplayClass31_0_o *v27; // x20
  System_Collections_Generic_Dictionary_KeyValuePair_int__int___bool__o *TriggeredFuncIndex; // x0
  __int64 v29; // x1
  int v30; // w23
  int v31; // w8
  _BOOL4 v32; // w24
  struct System_Collections_Generic_Dictionary_KeyValuePair_int__int___bool__o *funcResults; // x21
  System_Func_KeyValuePair_KeyValuePair_int__int___bool___bool__o *v34; // x0
  System_Func_TSource__bool__o *v35; // x22
  System_Collections_Generic_IEnumerable_TSource__o *v36; // x21
  __int64 v37; // x3
  System_Collections_Generic_IEnumerable_TSource__c *klass; // x8
  unsigned __int64 v39; // x10
  int32_t *p_offset; // x11
  __int64 p_method; // x0
  System_Collections_Generic_IEnumerable_TSource__o *v42; // x19
  System_Func_KeyValuePair_KeyValuePair_int__int___bool___bool__o *v43; // x21
  __int64 v44; // x1
  __int64 v45; // x3
  __int64 v46; // x21
  __int64 v47; // x8
  unsigned __int64 v48; // x10
  int *v49; // x11
  __int64 v50; // x0
  __int64 v51; // x8
  unsigned __int64 v52; // x10
  int *v53; // x11
  __int64 v54; // x0
  __int64 v55; // x0
  __int64 v56; // x1
  char v57; // w22
  BattleServantData_o *ServantData; // x0
  int v59; // w8
  __int64 v60; // x8
  unsigned __int64 v61; // x10
  int *v62; // x11
  __int64 v63; // x0
  int v65; // [xsp+0h] [xbp-50h]
  bool value; // [xsp+Ch] [xbp-44h] BYREF
  System_Collections_Generic_KeyValuePair_int__int__o key; // [xsp+10h] [xbp-40h] BYREF
  bool isAllCond; // [xsp+18h] [xbp-38h] BYREF
  bool isSameTargetOnly; // [xsp+1Ch] [xbp-34h] BYREF
  System_Collections_Generic_KeyValuePair_int__int__o p_key; // 0:x0.8
  System_Collections_Generic_KeyValuePair_int__int__o v71; // 0:x1.8

  if ( (byte_4187192 & 1) == 0 )
  {
    sub_B2C35C(
      &Method_System_Collections_Generic_Dictionary_KeyValuePair_int__int___bool__TryGetValue__,
      *(_QWORD *)&targetId);
    sub_B2C35C(&Method_System_Linq_Enumerable_Any_KeyValuePair_KeyValuePair_int__int___bool____, v9);
    sub_B2C35C(&Method_System_Linq_Enumerable_Count_KeyValuePair_KeyValuePair_int__int___bool____, v10);
    sub_B2C35C(&Method_System_Linq_Enumerable_Where_KeyValuePair_KeyValuePair_int__int___bool____, v11);
    sub_B2C35C(&Method_System_Func_KeyValuePair_KeyValuePair_int__int___bool___bool___ctor__, v12);
    sub_B2C35C(&System_Func_KeyValuePair_KeyValuePair_int__int___bool___bool__TypeInfo, v13);
    sub_B2C35C(&System_IDisposable_TypeInfo, v14);
    sub_B2C35C(&System_Collections_Generic_IEnumerable_KeyValuePair_KeyValuePair_int__int___bool___TypeInfo, v15);
    sub_B2C35C(&System_Collections_Generic_IEnumerator_KeyValuePair_KeyValuePair_int__int___bool___TypeInfo, v16);
    sub_B2C35C(&System_Collections_IEnumerator_TypeInfo, v17);
    sub_B2C35C(&Method_System_Collections_Generic_KeyValuePair_int__int___ctor__, v18);
    sub_B2C35C(&Method_System_Collections_Generic_KeyValuePair_KeyValuePair_int__int___bool__get_Key__, v19);
    sub_B2C35C(&Method_System_Collections_Generic_KeyValuePair_int__int__get_Value__, v20);
    sub_B2C35C(&Method_System_Collections_Generic_KeyValuePair_KeyValuePair_int__int___bool__get_Value__, v21);
    sub_B2C35C(&System_Math_TypeInfo, v22);
    sub_B2C35C(
      &Method_BattleLogicFunction_ProcListInArgs___c__DisplayClass31_0__DidTriggeredFuncHaveSpecifyResults_b__0__,
      v23);
    sub_B2C35C(
      &Method_BattleLogicFunction_ProcListInArgs___c__DisplayClass31_0__DidTriggeredFuncHaveSpecifyResults_b__1__,
      v24);
    sub_B2C35C(
      &Method_BattleLogicFunction_ProcListInArgs___c__DisplayClass31_0__DidTriggeredFuncHaveSpecifyResults_b__2__,
      v25);
    sub_B2C35C(&BattleLogicFunction_ProcListInArgs___c__DisplayClass31_0_TypeInfo, v26);
    byte_4187192 = 1;
  }
  isSameTargetOnly = 0;
  isAllCond = 0;
  key = 0LL;
  value = 0;
  v27 = (BattleLogicFunction_ProcListInArgs___c__DisplayClass31_0_o *)sub_B2C42C(BattleLogicFunction_ProcListInArgs___c__DisplayClass31_0_TypeInfo);
  BattleLogicFunction_ProcListInArgs___c__DisplayClass31_0___ctor(v27, 0LL);
  if ( !baseVals )
    goto LABEL_57;
  TriggeredFuncIndex = (System_Collections_Generic_Dictionary_KeyValuePair_int__int___bool__o *)DataVals__GetTriggeredFuncIndex(
                                                                                                  baseVals,
                                                                                                  &isSameTargetOnly,
                                                                                                  &isAllCond,
                                                                                                  0LL);
  if ( !v27 )
    goto LABEL_57;
  v30 = (int)TriggeredFuncIndex;
  v27->fields.funcIndex = (int)TriggeredFuncIndex;
  if ( !(_DWORD)TriggeredFuncIndex )
  {
LABEL_55:
    LOBYTE(TriggeredFuncIndex) = 1;
    return (unsigned __int8)TriggeredFuncIndex & 1;
  }
  v27->fields.isTrue = (int)TriggeredFuncIndex > 0;
  if ( (BYTE3(System_Math_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !System_Math_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(System_Math_TypeInfo);
  if ( v30 >= 0 )
    v31 = v30;
  else
    v31 = -v30;
  v27->fields.funcIndex = v31 - 1;
  if ( isSameTargetOnly )
  {
    p_key = (System_Collections_Generic_KeyValuePair_int__int__o)&key;
    System_Collections_Generic_KeyValuePair_int__int____ctor(
      p_key,
      v31 - 1,
      targetId,
      (const MethodInfo_21032DC *)Method_System_Collections_Generic_KeyValuePair_int__int___ctor__);
    TriggeredFuncIndex = this->fields.funcResults;
    if ( TriggeredFuncIndex )
    {
      v71 = key;
      LOBYTE(TriggeredFuncIndex) = System_Collections_Generic_Dictionary_KeyValuePair_int__int___bool___TryGetValue(
                                     TriggeredFuncIndex,
                                     v71,
                                     &value,
                                     (const MethodInfo_24E8BD4 *)Method_System_Collections_Generic_Dictionary_KeyValuePair_int__int___bool__TryGetValue__)
                                && value == v27->fields.isTrue;
      return (unsigned __int8)TriggeredFuncIndex & 1;
    }
LABEL_57:
    sub_B2C434(TriggeredFuncIndex, v29);
  }
  v32 = isAllCond;
  funcResults = this->fields.funcResults;
  v34 = (System_Func_KeyValuePair_KeyValuePair_int__int___bool___bool__o *)sub_B2C42C(System_Func_KeyValuePair_KeyValuePair_int__int___bool___bool__TypeInfo);
  v35 = (System_Func_TSource__bool__o *)v34;
  if ( !v32 )
  {
    System_Func_KeyValuePair_KeyValuePair_int__int___bool___bool____ctor(
      v34,
      (Il2CppObject *)v27,
      Method_BattleLogicFunction_ProcListInArgs___c__DisplayClass31_0__DidTriggeredFuncHaveSpecifyResults_b__0__,
      (const MethodInfo_2702F4C *)Method_System_Func_KeyValuePair_KeyValuePair_int__int___bool___bool___ctor__);
    v42 = System_Linq_Enumerable__Where_KeyValuePair_KeyValuePair_int__int___bool__(
            (System_Collections_Generic_IEnumerable_TSource__o *)funcResults,
            v35,
            (const MethodInfo_1A9E46C *)Method_System_Linq_Enumerable_Where_KeyValuePair_KeyValuePair_int__int___bool____);
    v43 = (System_Func_KeyValuePair_KeyValuePair_int__int___bool___bool__o *)sub_B2C42C(System_Func_KeyValuePair_KeyValuePair_int__int___bool___bool__TypeInfo);
    System_Func_KeyValuePair_KeyValuePair_int__int___bool___bool____ctor(
      v43,
      (Il2CppObject *)v27,
      Method_BattleLogicFunction_ProcListInArgs___c__DisplayClass31_0__DidTriggeredFuncHaveSpecifyResults_b__1__,
      (const MethodInfo_2702F4C *)Method_System_Func_KeyValuePair_KeyValuePair_int__int___bool___bool___ctor__);
    LOBYTE(TriggeredFuncIndex) = System_Linq_Enumerable__Any_KeyValuePair_KeyValuePair_int__int___bool__(
                                   v42,
                                   (System_Func_TSource__bool__o *)v43,
                                   (const MethodInfo_1738854 *)Method_System_Linq_Enumerable_Any_KeyValuePair_KeyValuePair_int__int___bool____);
    return (unsigned __int8)TriggeredFuncIndex & 1;
  }
  System_Func_KeyValuePair_KeyValuePair_int__int___bool___bool____ctor(
    v34,
    (Il2CppObject *)v27,
    Method_BattleLogicFunction_ProcListInArgs___c__DisplayClass31_0__DidTriggeredFuncHaveSpecifyResults_b__2__,
    (const MethodInfo_2702F4C *)Method_System_Func_KeyValuePair_KeyValuePair_int__int___bool___bool___ctor__);
  v36 = System_Linq_Enumerable__Where_KeyValuePair_KeyValuePair_int__int___bool__(
          (System_Collections_Generic_IEnumerable_TSource__o *)funcResults,
          v35,
          (const MethodInfo_1A9E46C *)Method_System_Linq_Enumerable_Where_KeyValuePair_KeyValuePair_int__int___bool____);
  TriggeredFuncIndex = (System_Collections_Generic_Dictionary_KeyValuePair_int__int___bool__o *)System_Linq_Enumerable__Count_KeyValuePair_KeyValuePair_int__int___bool__(
                                                                                                  v36,
                                                                                                  (const MethodInfo_1A8BA38 *)Method_System_Linq_Enumerable_Count_KeyValuePair_KeyValuePair_int__int___bool____);
  if ( (_DWORD)TriggeredFuncIndex )
  {
    if ( !v36 )
      goto LABEL_57;
    klass = v36->klass;
    if ( *(_WORD *)&v36->klass->_2.bitflags1 )
    {
      v39 = 0LL;
      p_offset = &klass->_1.interfaceOffsets->offset;
      while ( *((System_Collections_Generic_IEnumerable_KeyValuePair_KeyValuePair_int__int___bool___c **)p_offset - 1) != System_Collections_Generic_IEnumerable_KeyValuePair_KeyValuePair_int__int___bool___TypeInfo )
      {
        ++v39;
        p_offset += 4;
        if ( v39 >= *(unsigned __int16 *)&v36->klass->_2.bitflags1 )
          goto LABEL_23;
      }
      p_method = (__int64)&klass->vtable[*p_offset].method;
    }
    else
    {
LABEL_23:
      p_method = sub_AC5258(
                   v36,
                   System_Collections_Generic_IEnumerable_KeyValuePair_KeyValuePair_int__int___bool___TypeInfo,
                   0LL,
                   v37);
    }
    v46 = (*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerable_TSource__o *, _QWORD))p_method)(
            v36,
            *(_QWORD *)(p_method + 8));
    if ( !v46 )
      sub_B2C434(0LL, v44);
    while ( 1 )
    {
      v47 = *(_QWORD *)v46;
      if ( *(_WORD *)(*(_QWORD *)v46 + 298LL) )
      {
        v48 = 0LL;
        v49 = (int *)(*(_QWORD *)(v47 + 176) + 8LL);
        while ( *((System_Collections_IEnumerator_c **)v49 - 1) != System_Collections_IEnumerator_TypeInfo )
        {
          ++v48;
          v49 += 4;
          if ( v48 >= *(unsigned __int16 *)(*(_QWORD *)v46 + 298LL) )
            goto LABEL_32;
        }
        v50 = v47 + 16LL * *v49 + 312;
      }
      else
      {
LABEL_32:
        v50 = sub_AC5258(v46, System_Collections_IEnumerator_TypeInfo, 0LL, v45);
      }
      if ( ((*(__int64 (__fastcall **)(__int64, _QWORD))v50)(v46, *(_QWORD *)(v50 + 8)) & 1) == 0 )
        break;
      v51 = *(_QWORD *)v46;
      if ( *(_WORD *)(*(_QWORD *)v46 + 298LL) )
      {
        v52 = 0LL;
        v53 = (int *)(*(_QWORD *)(v51 + 176) + 8LL);
        while ( *((System_Collections_Generic_IEnumerator_KeyValuePair_KeyValuePair_int__int___bool___c **)v53 - 1) != System_Collections_Generic_IEnumerator_KeyValuePair_KeyValuePair_int__int___bool___TypeInfo )
        {
          ++v52;
          v53 += 4;
          if ( v52 >= *(unsigned __int16 *)(*(_QWORD *)v46 + 298LL) )
            goto LABEL_39;
        }
        v54 = v51 + 16LL * *v53 + 312;
      }
      else
      {
LABEL_39:
        v54 = sub_AC5258(
                v46,
                System_Collections_Generic_IEnumerator_KeyValuePair_KeyValuePair_int__int___bool___TypeInfo,
                0LL,
                v45);
      }
      v55 = (*(__int64 (__fastcall **)(__int64, _QWORD))v54)(v46, *(_QWORD *)(v54 + 8));
      if ( !data )
        sub_B2C434(v55, v56);
      v57 = v56;
      ServantData = BattleData__getServantData(data, SHIDWORD(v55), 0LL);
      if ( ServantData && !ServantData->fields.isDeadAnime && (v57 != 0) != v27->fields.isTrue )
      {
        v59 = 297;
        goto LABEL_47;
      }
    }
    v59 = 254;
LABEL_47:
    v65 = v59;
    v60 = *(_QWORD *)v46;
    if ( *(_WORD *)(*(_QWORD *)v46 + 298LL) )
    {
      v61 = 0LL;
      v62 = (int *)(*(_QWORD *)(v60 + 176) + 8LL);
      while ( *((System_IDisposable_c **)v62 - 1) != System_IDisposable_TypeInfo )
      {
        ++v61;
        v62 += 4;
        if ( v61 >= *(unsigned __int16 *)(*(_QWORD *)v46 + 298LL) )
          goto LABEL_51;
      }
      v63 = v60 + 16LL * *v62 + 312;
    }
    else
    {
LABEL_51:
      v63 = sub_AC5258(v46, System_IDisposable_TypeInfo, 0LL, v45);
    }
    (*(void (__fastcall **)(__int64, _QWORD))v63)(v46, *(_QWORD *)(v63 + 8));
    if ( v65 != 254 )
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
    sub_B2C434(0LL, v7);
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
    sub_B2C434(0LL, v5);
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
    sub_B2C434(this, type);
  return externalArg->fields.grantSkillType == type;
}


BattleLogicFunction_CheckDuplicateFunction_o *__fastcall BattleLogicFunction_ProcListInArgs__get_CheckDuplicateFunc(
        BattleLogicFunction_ProcListInArgs_o *this,
        const MethodInfo *method)
{
  struct BattleLogicFunction_FunctionArgument_o *externalArg; // x8

  externalArg = this->fields.externalArg;
  if ( !externalArg )
    sub_B2C434(this, method);
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
    sub_B2C434(this, method);
  return externalArg->fields._FuncSideEffectArg_k__BackingField;
}


int32_t __fastcall BattleLogicFunction_ProcListInArgs__get_GrantSkillType(
        BattleLogicFunction_ProcListInArgs_o *this,
        const MethodInfo *method)
{
  struct BattleLogicFunction_FunctionArgument_o *externalArg; // x8

  externalArg = this->fields.externalArg;
  if ( !externalArg )
    sub_B2C434(this, method);
  return externalArg->fields.grantSkillType;
}


bool __fastcall BattleLogicFunction_ProcListInArgs__get_IsCommandSideEffect(
        BattleLogicFunction_ProcListInArgs_o *this,
        const MethodInfo *method)
{
  struct BattleLogicFunction_FunctionArgument_o *externalArg; // x8

  externalArg = this->fields.externalArg;
  if ( !externalArg )
    sub_B2C434(this, method);
  return externalArg->fields.isCommandSideEffect;
}


bool __fastcall BattleLogicFunction_ProcListInArgs__get_IsPassive(
        BattleLogicFunction_ProcListInArgs_o *this,
        const MethodInfo *method)
{
  struct BattleLogicFunction_FunctionArgument_o *externalArg; // x8

  externalArg = this->fields.externalArg;
  if ( !externalArg )
    sub_B2C434(this, method);
  return externalArg->fields.isPassive;
}


bool __fastcall BattleLogicFunction_ProcListInArgs__get_IsShift(
        BattleLogicFunction_ProcListInArgs_o *this,
        const MethodInfo *method)
{
  struct BattleLogicFunction_FunctionArgument_o *externalArg; // x8

  externalArg = this->fields.externalArg;
  if ( !externalArg )
    sub_B2C434(this, method);
  return externalArg->fields.isShift;
}


int32_t __fastcall BattleLogicFunction_ProcListInArgs__get_SkillId(
        BattleLogicFunction_ProcListInArgs_o *this,
        const MethodInfo *method)
{
  struct BattleLogicFunction_FunctionArgument_o *externalArg; // x8

  externalArg = this->fields.externalArg;
  if ( !externalArg )
    sub_B2C434(this, method);
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

  if ( (byte_418718F & 1) == 0 )
  {
    sub_B2C35C(&GeneratedFamilyLinkageIdCacher_TypeInfo, method);
    byte_418718F = 1;
  }
  familyLinkageIdCacher = this->fields._familyLinkageIdCacher;
  p_familyLinkageIdCacher = (BattleServantConfConponent_o *)&this->fields._familyLinkageIdCacher;
  result = familyLinkageIdCacher;
  if ( !familyLinkageIdCacher )
  {
    v6 = (GeneratedFamilyLinkageIdCacher_o *)sub_B2C42C(GeneratedFamilyLinkageIdCacher_TypeInfo);
    GeneratedFamilyLinkageIdCacher___ctor(v6, 0LL);
    p_familyLinkageIdCacher->klass = (BattleServantConfConponent_c *)v6;
    sub_B2C2F8(p_familyLinkageIdCacher, (System_Int32_array **)v6, v7, v8, v9, v10, v11, v12);
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
  __int64 v9; // x1
  signed int max_length; // w25
  System_Int32_array **v11; // x0
  BattleLogicFunctionProcess_FunctionUnitCheck_array **p_funcUnitArray_k__BackingField; // x19
  System_String_array **v13; // x2
  System_String_array **v14; // x3
  System_Boolean_array **v15; // x4
  System_Int32_array **v16; // x5
  System_Int32_array *v17; // x6
  System_Int32_array *v18; // x7
  struct BattleLogicFunctionProcess_FunctionUnitCheck_array *funcUnitArray_k__BackingField; // x27
  __int64 v20; // x28
  __int64 v21; // x23
  BattleLogicFunctionProcess_FunctionUnitCheck_o *v22; // x26
  const MethodInfo *v23; // x3
  System_String_array **v24; // x2
  System_String_array **v25; // x3
  System_Boolean_array **v26; // x4
  System_Int32_array **v27; // x5
  System_Int32_array *v28; // x6
  System_Int32_array *v29; // x7
  il2cpp_array_size_t v30; // w24
  const MethodInfo *v31; // x4
  BattleLogicFunctionProcess_FunctionUnitCheck_array *v32; // x8
  int v33; // w8
  int v34; // w22
  BattleLogicFunctionProcess_FunctionUnitCheck_o *v35; // x21
  int v36; // w23
  BattleLogicFunctionProcess_FunctionUnitCheck_o *v37; // x20
  const MethodInfo *v38; // x2
  _BOOL4 v39; // w8
  __int64 v40; // x0
  __int64 v41; // x0
  BattleLogicFunction_ProcListInArgs_o *v43; // [xsp+8h] [xbp-58h]

  v43 = this;
  if ( (byte_4187194 & 1) == 0 )
  {
    sub_B2C35C(&BattleLogicFunctionProcess_FunctionUnitCheck___TypeInfo, logic);
    this = (BattleLogicFunction_ProcListInArgs_o *)sub_B2C35C(
                                                     &BattleLogicFunctionProcess_FunctionUnitCheck_TypeInfo,
                                                     v9);
    byte_4187194 = 1;
  }
  if ( !dataValsList )
    goto LABEL_38;
  max_length = dataValsList->max_length;
  v11 = (System_Int32_array **)sub_B2C374(
                                 BattleLogicFunctionProcess_FunctionUnitCheck___TypeInfo,
                                 (unsigned int)max_length);
  v43->fields._funcUnitArray_k__BackingField = (struct BattleLogicFunctionProcess_FunctionUnitCheck_array *)v11;
  p_funcUnitArray_k__BackingField = &v43->fields._funcUnitArray_k__BackingField;
  sub_B2C2F8(
    (BattleServantConfConponent_o *)&v43->fields._funcUnitArray_k__BackingField,
    v11,
    v13,
    v14,
    v15,
    v16,
    v17,
    v18);
  funcUnitArray_k__BackingField = v43->fields._funcUnitArray_k__BackingField;
  if ( max_length >= 1 )
  {
    v20 = 32LL;
    v21 = 8LL;
    while ( 1 )
    {
      v22 = (BattleLogicFunctionProcess_FunctionUnitCheck_o *)sub_B2C42C(BattleLogicFunctionProcess_FunctionUnitCheck_TypeInfo);
      BattleLogicFunctionProcess_FunctionUnitCheck___ctor(v22, logic, v43, v23);
      if ( !funcUnitArray_k__BackingField )
        break;
      if ( v22 )
      {
        this = (BattleLogicFunction_ProcListInArgs_o *)sub_B2C41C(
                                                         v22,
                                                         funcUnitArray_k__BackingField->obj.klass->_1.element_class);
        if ( !this )
        {
          v41 = sub_B2C454();
          sub_B2C400(v41, 0LL);
        }
      }
      v30 = v21 - 8;
      if ( (unsigned int)(v21 - 8) >= funcUnitArray_k__BackingField->max_length )
        goto LABEL_39;
      *(Il2CppClass **)((char *)&funcUnitArray_k__BackingField->obj.klass + v20) = (Il2CppClass *)v22;
      sub_B2C2F8(
        (BattleServantConfConponent_o *)((char *)funcUnitArray_k__BackingField + v20),
        (System_Int32_array **)v22,
        v24,
        v25,
        v26,
        v27,
        v28,
        v29);
      v32 = *p_funcUnitArray_k__BackingField;
      if ( !*p_funcUnitArray_k__BackingField )
        break;
      if ( v30 >= v32->max_length )
        goto LABEL_39;
      if ( !functionIds )
        break;
      if ( v30 >= functionIds->max_length || v30 >= dataValsList->max_length )
      {
LABEL_39:
        v40 = sub_B2C460(this);
        sub_B2C400(v40, 0LL);
      }
      this = *(BattleLogicFunction_ProcListInArgs_o **)((char *)&v32->obj.klass + v20);
      if ( !this )
        break;
      BattleLogicFunctionProcess_FunctionUnitCheck__setDataVals(
        (BattleLogicFunctionProcess_FunctionUnitCheck_o *)this,
        funcIndex,
        *((_DWORD *)&functionIds->obj.klass + v21++),
        *(DataVals_o **)((char *)&dataValsList->obj.klass + v20),
        v31);
      v20 += 8LL;
      ++*funcIndex;
      funcUnitArray_k__BackingField = *p_funcUnitArray_k__BackingField;
      if ( (int)v21 - 8 >= max_length )
        goto LABEL_17;
    }
LABEL_38:
    sub_B2C434(this, logic);
  }
LABEL_17:
  if ( !funcUnitArray_k__BackingField )
    goto LABEL_38;
  v33 = funcUnitArray_k__BackingField->max_length;
  if ( v33 >= 1 )
  {
    v34 = 0;
    v35 = 0LL;
    v36 = -1;
    do
    {
      if ( v34 >= (unsigned int)v33 )
        goto LABEL_39;
      v37 = funcUnitArray_k__BackingField->m_Items[v34];
      if ( !v37 )
        goto LABEL_38;
      this = (BattleLogicFunction_ProcListInArgs_o *)v37->fields._dataVals_k__BackingField;
      if ( !this )
        goto LABEL_38;
      if ( DataVals__IsAddIndividualty((DataVals_o *)this, 0LL) )
        goto LABEL_26;
      this = (BattleLogicFunction_ProcListInArgs_o *)v37->fields._dataVals_k__BackingField;
      if ( !this )
        goto LABEL_38;
      if ( DataVals__IsAddLinkageTargetIndividualty((DataVals_o *)this, 0LL) )
LABEL_26:
        BattleLogicFunctionProcess_FunctionUnitCheck__setLinkFunction(v37, *p_funcUnitArray_k__BackingField, v38);
      this = (BattleLogicFunction_ProcListInArgs_o *)v37->fields._dataVals_k__BackingField;
      if ( !this )
        goto LABEL_38;
      this = (BattleLogicFunction_ProcListInArgs_o *)DataVals__GetFunctionTriggerStarNum((DataVals_o *)this, 0LL);
      if ( ((unsigned int)this & 0x80000000) == 0 )
      {
        v39 = v35 == 0LL || (int)this < v36;
        if ( v39 )
          v36 = (int)this;
        if ( v39 )
          v35 = v37;
      }
      v33 = funcUnitArray_k__BackingField->max_length;
      ++v34;
    }
    while ( v34 < v33 );
    if ( v35 )
      v35->fields.isLowestStarFunction = 1;
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
  System_Collections_Generic_KeyValuePair_int__int__o key; // [xsp+8h] [xbp-28h] BYREF
  System_Collections_Generic_KeyValuePair_int__int__o p_key; // 0:x0.8
  System_Collections_Generic_KeyValuePair_int__int__o v15; // 0:x1.8
  System_Collections_Generic_KeyValuePair_int__int__o v16; // 0:x1.8

  if ( (byte_4187191 & 1) == 0 )
  {
    sub_B2C35C(
      &Method_System_Collections_Generic_Dictionary_KeyValuePair_int__int___bool__ContainsKey__,
      *(_QWORD *)&targetId);
    sub_B2C35C(&Method_System_Collections_Generic_Dictionary_KeyValuePair_int__int___bool__get_Item__, v7);
    sub_B2C35C(&Method_System_Collections_Generic_KeyValuePair_int__int___ctor__, v8);
    byte_4187191 = 1;
  }
  p_key = (System_Collections_Generic_KeyValuePair_int__int__o)&key;
  key = 0LL;
  System_Collections_Generic_KeyValuePair_int__int____ctor(
    p_key,
    index - 1,
    targetId,
    (const MethodInfo_21032DC *)Method_System_Collections_Generic_KeyValuePair_int__int___ctor__);
  funcResults = this->fields.funcResults;
  if ( !funcResults )
    goto LABEL_9;
  v15 = key;
  if ( !System_Collections_Generic_Dictionary_KeyValuePair_int__int___bool___ContainsKey(
          funcResults,
          v15,
          (const MethodInfo_24E718C *)Method_System_Collections_Generic_Dictionary_KeyValuePair_int__int___bool__ContainsKey__) )
    return 0;
  funcResults = this->fields.funcResults;
  if ( !funcResults )
LABEL_9:
    sub_B2C434(funcResults, v9);
  v16 = key;
  return System_Collections_Generic_Dictionary_KeyValuePair_int__int___bool___get_Item(
           funcResults,
           v16,
           (const MethodInfo_24E6E3C *)Method_System_Collections_Generic_Dictionary_KeyValuePair_int__int___bool__get_Item__);
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
  System_Collections_Generic_KeyValuePair_int__int__o key; // [xsp+8h] [xbp-28h] BYREF
  System_Collections_Generic_KeyValuePair_int__int__o p_key; // 0:x0.8
  System_Collections_Generic_KeyValuePair_int__int__o v14; // 0:x1.8

  if ( (byte_4187193 & 1) == 0 )
  {
    sub_B2C35C(
      &Method_System_Collections_Generic_Dictionary_KeyValuePair_int__int___bool__set_Item__,
      *(_QWORD *)&targetId);
    sub_B2C35C(&Method_System_Collections_Generic_KeyValuePair_int__int___ctor__, v9);
    byte_4187193 = 1;
  }
  p_key = (System_Collections_Generic_KeyValuePair_int__int__o)&key;
  key = 0LL;
  System_Collections_Generic_KeyValuePair_int__int____ctor(
    p_key,
    index,
    targetId,
    (const MethodInfo_21032DC *)Method_System_Collections_Generic_KeyValuePair_int__int___ctor__);
  funcResults = this->fields.funcResults;
  if ( !funcResults )
    sub_B2C434(0LL, v10);
  v14 = key;
  System_Collections_Generic_Dictionary_KeyValuePair_int__int___bool___set_Item(
    funcResults,
    v14,
    result,
    (const MethodInfo_24E6ED8 *)Method_System_Collections_Generic_Dictionary_KeyValuePair_int__int___bool__set_Item__);
}


void __fastcall BattleLogicFunction_ProcListInArgs__set_IsCommandSideEffect(
        BattleLogicFunction_ProcListInArgs_o *this,
        bool value,
        const MethodInfo *method)
{
  struct BattleLogicFunction_FunctionArgument_o *externalArg; // x8

  externalArg = this->fields.externalArg;
  if ( !externalArg )
    sub_B2C434(this, value);
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
    sub_B2C434(this, value);
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
    sub_B2C434(this, value);
  externalArg->fields.isShift = value;
}


void __fastcall BattleLogicFunction_ProcListInArgs__set_SkillId(
        BattleLogicFunction_ProcListInArgs_o *this,
        int32_t value,
        const MethodInfo *method)
{
  struct BattleLogicFunction_FunctionArgument_o *externalArg; // x8

  externalArg = this->fields.externalArg;
  if ( !externalArg )
    sub_B2C434(this, value);
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
  sub_B2C2F8(
    (BattleServantConfConponent_o *)&this->fields._funcUnitArray_k__BackingField,
    (System_Int32_array **)value,
    (System_String_array **)method,
    v3,
    v4,
    v5,
    v6,
    v7);
}


void __fastcall BattleLogicFunction_ProcListInArgs___c__DisplayClass31_0___ctor(
        BattleLogicFunction_ProcListInArgs___c__DisplayClass31_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


bool __fastcall BattleLogicFunction_ProcListInArgs___c__DisplayClass31_0___DidTriggeredFuncHaveSpecifyResults_b__0(
        BattleLogicFunction_ProcListInArgs___c__DisplayClass31_0_o *this,
        System_Collections_Generic_KeyValuePair_KeyValuePair_int__int___bool__o x,
        const MethodInfo *method)
{
  int32_t key; // w19
  __int64 v5; // x1

  key = x.fields.key.fields.key;
  if ( (byte_418558A & 1) == 0 )
  {
    sub_B2C35C(
      &Method_System_Collections_Generic_KeyValuePair_KeyValuePair_int__int___bool__get_Key__,
      *(_QWORD *)&x.fields.key);
    sub_B2C35C(&Method_System_Collections_Generic_KeyValuePair_int__int__get_Key__, v5);
    byte_418558A = 1;
  }
  return this->fields.funcIndex == key;
}


bool __fastcall BattleLogicFunction_ProcListInArgs___c__DisplayClass31_0___DidTriggeredFuncHaveSpecifyResults_b__1(
        BattleLogicFunction_ProcListInArgs___c__DisplayClass31_0_o *this,
        System_Collections_Generic_KeyValuePair_KeyValuePair_int__int___bool__o x,
        const MethodInfo *method)
{
  bool value; // w19

  value = x.fields.value;
  if ( (byte_418558B & 1) == 0 )
  {
    sub_B2C35C(
      &Method_System_Collections_Generic_KeyValuePair_KeyValuePair_int__int___bool__get_Value__,
      *(_QWORD *)&x.fields.key);
    byte_418558B = 1;
  }
  return !value ^ this->fields.isTrue;
}


bool __fastcall BattleLogicFunction_ProcListInArgs___c__DisplayClass31_0___DidTriggeredFuncHaveSpecifyResults_b__2(
        BattleLogicFunction_ProcListInArgs___c__DisplayClass31_0_o *this,
        System_Collections_Generic_KeyValuePair_KeyValuePair_int__int___bool__o x,
        const MethodInfo *method)
{
  int32_t key; // w19
  __int64 v5; // x1

  key = x.fields.key.fields.key;
  if ( (byte_4185589 & 1) == 0 )
  {
    sub_B2C35C(
      &Method_System_Collections_Generic_KeyValuePair_KeyValuePair_int__int___bool__get_Key__,
      *(_QWORD *)&x.fields.key);
    sub_B2C35C(&Method_System_Collections_Generic_KeyValuePair_int__int__get_Key__, v5);
    byte_4185589 = 1;
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

  if ( (byte_4187196 & 1) == 0 )
  {
    sub_B2C35C(&Method_System_Array_Empty_BattleActionData_SideEffectData___, method);
    byte_4187196 = 1;
  }
  v9 = (_QWORD **)Method_System_Array_Empty_BattleActionData_SideEffectData___;
  v10 = **((_QWORD **)Method_System_Array_Empty_BattleActionData_SideEffectData___ + 6);
  v11 = *(_WORD *)(v10 + 306);
  if ( (v11 & 1) == 0 )
  {
    sub_AC505C(**((_QWORD **)Method_System_Array_Empty_BattleActionData_SideEffectData___ + 6));
    v11 = *(_WORD *)(v10 + 306);
  }
  if ( (v11 & 0x400) != 0 )
  {
    v12 = *v9[6];
    if ( (*(_BYTE *)(v12 + 306) & 1) == 0 )
      sub_AC505C(*v9[6]);
    if ( !*(_DWORD *)(v12 + 224) )
    {
      v13 = *v9[6];
      if ( (*(_BYTE *)(v13 + 306) & 1) == 0 )
        sub_AC505C(*v9[6]);
      j_il2cpp_runtime_class_init_0(v13);
    }
  }
  v14 = *v9[6];
  if ( (*(_BYTE *)(v14 + 306) & 1) == 0 )
    sub_AC505C(*v9[6]);
  v15 = *(struct BattleActionData_SideEffectData_array ***)(v14 + 184);
  v16 = *v15;
  this->fields._SideEffectList_k__BackingField = *v15;
  sub_B2C2F8((BattleServantConfConponent_o *)&this->fields, (System_Int32_array **)v16, v2, v3, v4, v5, v6, v7);
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
  __int64 v10; // x1
  __int64 v11; // x21
  __int64 v12; // x22
  __int64 v13; // x0
  __int64 v14; // x1
  System_String_array **v15; // x2
  System_String_array **v16; // x3
  System_Boolean_array **v17; // x4
  System_Int32_array **v18; // x5
  System_Int32_array *v19; // x6
  System_Int32_array *v20; // x7
  System_Func_int__BattleActionData_SideEffectData__o *v21; // x22
  System_Collections_Generic_IEnumerable_TSource__o *v22; // x0
  struct BattleActionData_SideEffectData_array *v23; // x0
  System_String_array **v24; // x2
  System_String_array **v25; // x3
  System_Boolean_array **v26; // x4
  System_Int32_array **v27; // x5
  System_Int32_array *v28; // x6
  System_Int32_array *v29; // x7
  __int64 v31; // x0

  if ( (byte_4187195 & 1) == 0 )
  {
    sub_B2C35C(&BuffList_ACTION___TypeInfo, targetIds);
    sub_B2C35C(&Method_System_Linq_Enumerable_Select_int__BattleActionData_SideEffectData___, v5);
    sub_B2C35C(&Method_System_Linq_Enumerable_ToArray_BattleActionData_SideEffectData___, v6);
    sub_B2C35C(&Method_System_Func_int__BattleActionData_SideEffectData___ctor__, v7);
    sub_B2C35C(&System_Func_int__BattleActionData_SideEffectData__TypeInfo, v8);
    sub_B2C35C(&Method_BattleLogicFunction_SideEffectMakeArgument___c__DisplayClass9_0__Init_b__0__, v9);
    sub_B2C35C(&BattleLogicFunction_SideEffectMakeArgument___c__DisplayClass9_0_TypeInfo, v10);
    byte_4187195 = 1;
  }
  v11 = sub_B2C42C(BattleLogicFunction_SideEffectMakeArgument___c__DisplayClass9_0_TypeInfo);
  BattleLogicFunction_SideEffectMakeArgument___c__DisplayClass9_0___ctor(
    (BattleLogicFunction_SideEffectMakeArgument___c__DisplayClass9_0_o *)v11,
    0LL);
  v12 = sub_B2C374(BuffList_ACTION___TypeInfo, 1LL);
  v13 = ((__int64 (__fastcall *)(BattleLogicFunction_SideEffectMakeArgument_o *, Il2CppMethodPointer))this->klass->vtable._4_unknown.method)(
          this,
          this->klass->vtable._5_unknown.methodPtr);
  if ( !v12 )
    goto LABEL_7;
  if ( !*(_DWORD *)(v12 + 24) )
  {
    v31 = sub_B2C460(v13);
    sub_B2C400(v31, 0LL);
  }
  *(_DWORD *)(v12 + 32) = v13;
  if ( !v11 )
LABEL_7:
    sub_B2C434(v13, v14);
  *(_QWORD *)(v11 + 16) = v12;
  sub_B2C2F8((BattleServantConfConponent_o *)(v11 + 16), (System_Int32_array **)v12, v15, v16, v17, v18, v19, v20);
  v21 = (System_Func_int__BattleActionData_SideEffectData__o *)sub_B2C42C(System_Func_int__BattleActionData_SideEffectData__TypeInfo);
  System_Func_int__BattleActionData_SideEffectData____ctor(
    v21,
    (Il2CppObject *)v11,
    Method_BattleLogicFunction_SideEffectMakeArgument___c__DisplayClass9_0__Init_b__0__,
    (const MethodInfo_270D828 *)Method_System_Func_int__BattleActionData_SideEffectData___ctor__);
  v22 = (System_Collections_Generic_IEnumerable_TSource__o *)System_Linq_Enumerable__Select_int__BattleActionData_SideEffectData_(
                                                               (System_Collections_Generic_IEnumerable_TSource__o *)targetIds,
                                                               (System_Func_TSource__TResult__o *)v21,
                                                               (const MethodInfo_1A95A8C *)Method_System_Linq_Enumerable_Select_int__BattleActionData_SideEffectData___);
  v23 = (struct BattleActionData_SideEffectData_array *)System_Linq_Enumerable__ToArray_DrawLotsDisplayMessage_DisplayedInGroup_SaveData_(
                                                          v22,
                                                          (const MethodInfo_1A9AFC8 *)Method_System_Linq_Enumerable_ToArray_BattleActionData_SideEffectData___);
  this->fields._SideEffectList_k__BackingField = v23;
  sub_B2C2F8((BattleServantConfConponent_o *)&this->fields, (System_Int32_array **)v23, v24, v25, v26, v27, v28, v29);
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
  sub_B2C2F8(
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


// local variable allocation has failed, the output may be wrong!
BattleActionData_SideEffectData_o *__fastcall BattleLogicFunction_SideEffectMakeArgument___c__DisplayClass9_0___Init_b__0(
        BattleLogicFunction_SideEffectMakeArgument___c__DisplayClass9_0_o *this,
        int32_t id,
        const MethodInfo *method)
{
  BuffList_ACTION_array *buffActs; // x20
  BattleActionData_SideEffectData_o *v6; // x21

  if ( (byte_418558C & 1) == 0 )
  {
    sub_B2C35C(&BattleActionData_SideEffectData_TypeInfo, *(_QWORD *)&id);
    byte_418558C = 1;
  }
  buffActs = this->fields.buffActs;
  v6 = (BattleActionData_SideEffectData_o *)sub_B2C42C(BattleActionData_SideEffectData_TypeInfo);
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
  __int64 v8; // x0

  if ( (byte_4187197 & 1) == 0 )
  {
    sub_B2C35C(&BuffList_ACTION___TypeInfo, isMainOnly);
    byte_4187197 = 1;
  }
  result = (BuffList_ACTION_array *)sub_B2C374(BuffList_ACTION___TypeInfo, 1LL);
  if ( !result )
    sub_B2C434(0LL, v5);
  max_length = result->max_length;
  if ( !isMainOnly )
  {
    if ( max_length )
    {
      v7 = 122;
      goto LABEL_9;
    }
LABEL_11:
    v8 = sub_B2C460(result);
    sub_B2C400(v8, 0LL);
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
  __int64 v8; // x0

  if ( (byte_4187198 & 1) == 0 )
  {
    sub_B2C35C(&BuffList_ACTION___TypeInfo, isMainOnly);
    byte_4187198 = 1;
  }
  result = (BuffList_ACTION_array *)sub_B2C374(BuffList_ACTION___TypeInfo, 1LL);
  if ( !result )
    sub_B2C434(0LL, v5);
  max_length = result->max_length;
  if ( !isMainOnly )
  {
    if ( max_length )
    {
      v7 = 124;
      goto LABEL_9;
    }
LABEL_11:
    v8 = sub_B2C460(result);
    sub_B2C400(v8, 0LL);
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

  if ( (byte_4187199 & 1) == 0 )
  {
    sub_B2C35C(&int___TypeInfo, *(_QWORD *)&targetId);
    byte_4187199 = 1;
  }
  BattleLogicFunction_FunctionArgument___ctor(
    (BattleLogicFunction_FunctionArgument_o *)this,
    *(const MethodInfo **)&targetId);
  v5 = (struct System_Int32_array *)sub_B2C374(int___TypeInfo, 1LL);
  if ( !v5 )
    sub_B2C434(0LL, v6);
  if ( !v5->max_length )
  {
    v13 = sub_B2C460(v5);
    sub_B2C400(v13, 0LL);
  }
  v5->m_Items[1] = targetId;
  this->fields.fixTargetIds = v5;
  sub_B2C2F8(
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
  __int64 v1; // x1
  Il2CppObject *v2; // x19
  BattleServantConfConponent_o *static_fields; // x0
  System_String_array **v4; // x2
  System_String_array **v5; // x3
  System_Boolean_array **v6; // x4
  System_Int32_array **v7; // x5
  System_Int32_array *v8; // x6
  System_Int32_array *v9; // x7

  if ( (byte_418717D & 1) == 0 )
  {
    sub_B2C35C(&BattleLogicFunction___c_TypeInfo, v1);
    byte_418717D = 1;
  }
  v2 = (Il2CppObject *)sub_B2C42C(BattleLogicFunction___c_TypeInfo);
  System_Object___ctor(v2, 0LL);
  static_fields = (BattleServantConfConponent_o *)BattleLogicFunction___c_TypeInfo->static_fields;
  static_fields->klass = (BattleServantConfConponent_c *)v2;
  sub_B2C2F8(static_fields, (System_Int32_array **)v2, v4, v5, v6, v7, v8, v9);
}


void __fastcall BattleLogicFunction___c___ctor(BattleLogicFunction___c_o *this, const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


bool __fastcall BattleLogicFunction___c___FunctionSubFieldBuff_b__119_1(
        BattleLogicFunction___c_o *this,
        BattleBuffData_BuffData_o *x,
        const MethodInfo *method)
{
  if ( !x )
    sub_B2C434(this, 0LL);
  return x->fields.fieldChangeData != 0LL;
}


void __fastcall BattleLogicFunction___c___SetFuncSideEffect_b__47_0(
        BattleLogicFunction___c_o *this,
        BattleActionData_o *x,
        const MethodInfo *method)
{
  if ( !x )
    sub_B2C434(this, 0LL);
  BattleActionData__SetPopupOnce(x, 0LL);
}


void __fastcall BattleLogicFunction___c___functionPtShuffle_b__87_0(
        BattleLogicFunction___c_o *this,
        BattleServantData_o *s,
        const MethodInfo *method)
{
  __int64 Next; // x0
  __int64 v5; // x1

  Next = BattleRandom__getNext(1000, 0LL);
  if ( !s )
    sub_B2C434(Next, v5);
  s->fields._shuffuleSeed = Next;
}


int32_t __fastcall BattleLogicFunction___c___functionPtShuffle_b__87_1(
        BattleLogicFunction___c_o *this,
        BattleServantData_o *a,
        BattleServantData_o *b,
        const MethodInfo *method)
{
  if ( !a || (this = (BattleLogicFunction___c_o *)BattleServantData__get_ShuffleSeed(a, 0LL), !b) )
    sub_B2C434(this, a);
  return (_DWORD)this - BattleServantData__get_ShuffleSeed(b, 0LL);
}


bool __fastcall BattleLogicFunction___c___functionReplaceEnemyMember_b__81_0(
        BattleLogicFunction___c_o *this,
        BattleServantData_o *x,
        const MethodInfo *method)
{
  if ( !x )
    sub_B2C434(this, 0LL);
  return BattleServantData__isAlive(x, 0, 0LL);
}


bool __fastcall BattleLogicFunction___c___procList_b__40_0(
        BattleLogicFunction___c_o *this,
        BattleLogicFunctionProcess_FunctionUnitCheck_o *x,
        const MethodInfo *method)
{
  struct DataVals_o *dataVals_k__BackingField; // x8

  if ( !x || (dataVals_k__BackingField = x->fields._dataVals_k__BackingField) == 0LL )
    sub_B2C434(this, x);
  return dataVals_k__BackingField->fields.funcType != 0;
}


bool __fastcall BattleLogicFunction___c___procList_b__40_1(
        BattleLogicFunction___c_o *this,
        BattleLogicFunctionProcess_FunctionUnitCheck_o *x,
        const MethodInfo *method)
{
  struct DataVals_o *dataVals_k__BackingField; // x8

  if ( !x || (dataVals_k__BackingField = x->fields._dataVals_k__BackingField) == 0LL )
    sub_B2C434(this, x);
  return dataVals_k__BackingField->fields.funcType == 135;
}


bool __fastcall BattleLogicFunction___c___procList_b__40_2(
        BattleLogicFunction___c_o *this,
        BattleLogicFunctionProcess_FunctionTargetCheck_o *target,
        const MethodInfo *method)
{
  if ( !target )
    sub_B2C434(this, 0LL);
  return target->fields._result_k__BackingField;
}


int32_t __fastcall BattleLogicFunction___c___procList_b__40_3(
        BattleLogicFunction___c_o *this,
        BattleLogicFunctionProcess_FunctionTargetCheck_o *target,
        const MethodInfo *method)
{
  if ( !target )
    sub_B2C434(this, 0LL);
  return target->fields._targetId_k__BackingField;
}


int32_t __fastcall BattleLogicFunction___c___setAttackSideEffect_b__50_0(
        BattleLogicFunction___c_o *this,
        BattleActionData_SideEffectData_o *x,
        const MethodInfo *method)
{
  if ( !x )
    sub_B2C434(this, 0LL);
  return x->fields.targetId;
}


void __fastcall BattleLogicFunction___c__DisplayClass106_0___ctor(
        BattleLogicFunction___c__DisplayClass106_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


bool __fastcall BattleLogicFunction___c__DisplayClass106_0___functionMoveState_b__0(
        BattleLogicFunction___c__DisplayClass106_0_o *this,
        BattleBuffData_BuffData_o *x,
        const MethodInfo *method)
{
  if ( !x )
    sub_B2C434(this, 0LL);
  return BattleBuffData_BuffData__checkState(x, this->fields.stateUnstealable, 0LL);
}


bool __fastcall BattleLogicFunction___c__DisplayClass106_0___functionMoveState_b__1(
        BattleLogicFunction___c__DisplayClass106_0_o *this,
        BattleBuffData_BuffData_o *x,
        const MethodInfo *method)
{
  System_Collections_Generic_HashSet_BattleBuffData_BuffData__o *unstealableBuffs; // x0

  if ( (byte_418717E & 1) == 0 )
  {
    sub_B2C35C(&Method_System_Collections_Generic_HashSet_BattleBuffData_BuffData__Contains__, x);
    byte_418717E = 1;
  }
  unstealableBuffs = this->fields.unstealableBuffs;
  if ( !unstealableBuffs )
    sub_B2C434(0LL, x);
  return !System_Collections_Generic_HashSet_BattleBuffData_BuffData___Contains(
            unstealableBuffs,
            x,
            (const MethodInfo_2D8C0E0 *)Method_System_Collections_Generic_HashSet_BattleBuffData_BuffData__Contains__);
}


void __fastcall BattleLogicFunction___c__DisplayClass66_0___ctor(
        BattleLogicFunction___c__DisplayClass66_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


int32_t __fastcall BattleLogicFunction___c__DisplayClass66_0___BehaveLinkageBuffAsFamily_b__0(
        BattleLogicFunction___c__DisplayClass66_0_o *this,
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
    sub_B2C434(this, linkageIndividuality);
  }
  return BattleLogicFunction_ProcListInArgs__GetFamilyBuffLinkageId(
           procArg_k__BackingField,
           linkageIndividuality,
           this->fields.targetSvtData,
           v3);
}


void __fastcall BattleLogicFunction___c__DisplayClass67_0___ctor(
        BattleLogicFunction___c__DisplayClass67_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


BattleBuffData_BuffData_o *__fastcall BattleLogicFunction___c__DisplayClass67_0___functionSubState_b__0(
        BattleLogicFunction___c__DisplayClass67_0_o *this,
        BattleBuffData_BuffData_o *buff,
        const MethodInfo *method)
{
  BattleServantData_o *targetSvtData; // x0

  targetSvtData = this->fields.targetSvtData;
  if ( !targetSvtData
    || (targetSvtData = (BattleServantData_o *)BattleServantData__get_BuffData(targetSvtData, 0LL)) == 0LL )
  {
    sub_B2C434(targetSvtData, buff);
  }
  return BattleBuffData__CreateDummyBuff((BattleBuffData_o *)targetSvtData, buff, 0LL);
}


void __fastcall BattleLogicFunction___c__DisplayClass99_0___ctor(
        BattleLogicFunction___c__DisplayClass99_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


void __fastcall BattleLogicFunction___c__DisplayClass99_0___UpdateUserEquipSkillChargeTurn_b__0(
        BattleLogicFunction___c__DisplayClass99_0_o *this,
        BattleSkillInfoData_o *x,
        const MethodInfo *method)
{
  if ( !x )
    sub_B2C434(this, 0LL);
  BattleSkillInfoData__TurnProgress(
    x,
    this->fields.progressValue,
    0,
    this->fields.targetIndex,
    this->fields.targetIndividualityArray,
    0LL);
}


void __fastcall BattleLogicFunction___c__DisplayClass99_0___UpdateUserEquipSkillChargeTurn_b__1(
        BattleLogicFunction___c__DisplayClass99_0_o *this,
        BattleSkillInfoData_o *x,
        const MethodInfo *method)
{
  if ( !x )
    sub_B2C434(this, 0LL);
  BattleSkillInfoData__TurnExtend(
    x,
    this->fields.progressValue,
    999,
    this->fields.targetIndex,
    this->fields.targetIndividualityArray,
    0LL);
}