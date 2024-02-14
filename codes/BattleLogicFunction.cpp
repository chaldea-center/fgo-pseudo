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
  System_String_array **v15; // x2
  System_String_array **v16; // x3
  System_Boolean_array **v17; // x4
  System_Int32_array **v18; // x5
  System_Int32_array *v19; // x6
  System_Int32_array *v20; // x7
  il2cpp_array_size_t max_length; // w8
  __int64 v22; // x1
  __int64 v23; // x2
  System_Collections_Generic_Dictionary_Voice_BATTLE__string__o *v24; // x20
  __int64 v25; // x1
  __int64 v26; // x2
  BattleLogicFunctionProcess_CommonFunctionTypeProcess_o *v27; // x21
  __int64 v28; // x1
  __int64 v29; // x2
  BattleLogicFunctionProcess_AddStateProcess_o *v30; // x21
  __int64 v31; // x1
  __int64 v32; // x2
  BattleLogicFunctionProcess_AddStateShortProcess_o *v33; // x21
  __int64 v34; // x1
  __int64 v35; // x2
  BattleLogicFunctionProcess_MoveToLastSubMemberProcess_o *v36; // x21
  __int64 v37; // x1
  __int64 v38; // x2
  BattleLogicFunctionProcess_TransformServantProcess_o *v39; // x21
  __int64 v40; // x1
  __int64 v41; // x2
  BattleLogicFunctionProcess_CommonFieldFunctionProcess_o *v42; // x21
  __int64 v43; // x1
  __int64 v44; // x2
  BattleLogicFunctionProcess_CommonFieldFunctionProcess_o *v45; // x21
  __int64 v46; // x1
  __int64 v47; // x2
  BattleLogicFunctionProcess_CommonAddStateProcess_o *v48; // x21
  __int64 v49; // x1
  __int64 v50; // x2
  BattleLogicFunctionProcess_ToFieldCommonFunctionProcess_o *v51; // x21
  System_String_array **v52; // x2
  System_String_array **v53; // x3
  System_Boolean_array **v54; // x4
  System_Int32_array **v55; // x5
  System_Int32_array *v56; // x6
  System_Int32_array *v57; // x7
  __int64 v58; // x0

  if ( (byte_4217059 & 1) == 0 )
  {
    sub_B0D8A4(&BattleLogicFunctionProcess_AddStateProcess_TypeInfo, method);
    sub_B0D8A4(&BattleLogicFunctionProcess_AddStateShortProcess_TypeInfo, v3);
    sub_B0D8A4(&BattleLogicFunctionProcess_CommonAddStateProcess_TypeInfo, v4);
    sub_B0D8A4(&BattleLogicFunctionProcess_CommonFieldFunctionProcess_TypeInfo, v5);
    sub_B0D8A4(&BattleLogicFunctionProcess_CommonFunctionTypeProcess_TypeInfo, v6);
    sub_B0D8A4(
      &Method_System_Collections_Generic_Dictionary_FuncList_TYPE__BattleLogicFunctionProcess_BaseFunctionTypeProcess__Add__,
      v7);
    sub_B0D8A4(
      &Method_System_Collections_Generic_Dictionary_FuncList_TYPE__BattleLogicFunctionProcess_BaseFunctionTypeProcess___ctor__,
      v8);
    sub_B0D8A4(
      &System_Collections_Generic_Dictionary_FuncList_TYPE__BattleLogicFunctionProcess_BaseFunctionTypeProcess__TypeInfo,
      v9);
    sub_B0D8A4(&int___TypeInfo, v10);
    sub_B0D8A4(&BattleLogicFunctionProcess_MoveToLastSubMemberProcess_TypeInfo, v11);
    sub_B0D8A4(&BattleLogicFunctionProcess_ToFieldCommonFunctionProcess_TypeInfo, v12);
    sub_B0D8A4(&BattleLogicFunctionProcess_TransformServantProcess_TypeInfo, v13);
    byte_4217059 = 1;
  }
  v14 = (struct System_Int32_array *)sub_B0D8BC(int___TypeInfo, 2LL);
  if ( !v14 )
    goto LABEL_9;
  max_length = v14->max_length;
  if ( !max_length || (v14->m_Items[1] = 701601, max_length == 1) )
  {
    v58 = sub_B0D9A8(v14);
    sub_B0D948(v58, 0LL);
  }
  v14->m_Items[2] = 701602;
  this->fields.tamamocatTreasureDeviceIds = v14;
  sub_B0D840(
    (BattleServantConfConponent_o *)&this->fields.tamamocatTreasureDeviceIds,
    (System_Int32_array **)v14,
    v15,
    v16,
    v17,
    v18,
    v19,
    v20);
  v24 = (System_Collections_Generic_Dictionary_Voice_BATTLE__string__o *)sub_B0D974(
                                                                           System_Collections_Generic_Dictionary_FuncList_TYPE__BattleLogicFunctionProcess_BaseFunctionTypeProcess__TypeInfo,
                                                                           v22,
                                                                           v23);
  System_Collections_Generic_Dictionary_Voice_BATTLE__string____ctor(
    v24,
    (const MethodInfo_2EA610C *)Method_System_Collections_Generic_Dictionary_FuncList_TYPE__BattleLogicFunctionProcess_BaseFunctionTypeProcess___ctor__);
  v27 = (BattleLogicFunctionProcess_CommonFunctionTypeProcess_o *)sub_B0D974(
                                                                    BattleLogicFunctionProcess_CommonFunctionTypeProcess_TypeInfo,
                                                                    v25,
                                                                    v26);
  BattleLogicFunctionProcess_CommonFunctionTypeProcess___ctor(v27, 0LL);
  if ( !v24 )
LABEL_9:
    sub_B0D97C(v14);
  System_Collections_Generic_Dictionary_Voice_BATTLE__string___Add(
    v24,
    0,
    (System_String_o *)v27,
    (const MethodInfo_2EA6CC0 *)Method_System_Collections_Generic_Dictionary_FuncList_TYPE__BattleLogicFunctionProcess_BaseFunctionTypeProcess__Add__);
  v30 = (BattleLogicFunctionProcess_AddStateProcess_o *)sub_B0D974(
                                                          BattleLogicFunctionProcess_AddStateProcess_TypeInfo,
                                                          v28,
                                                          v29);
  BattleLogicFunctionProcess_AddStateProcess___ctor(v30, 0LL);
  System_Collections_Generic_Dictionary_Voice_BATTLE__string___Add(
    v24,
    1,
    (System_String_o *)v30,
    (const MethodInfo_2EA6CC0 *)Method_System_Collections_Generic_Dictionary_FuncList_TYPE__BattleLogicFunctionProcess_BaseFunctionTypeProcess__Add__);
  v33 = (BattleLogicFunctionProcess_AddStateShortProcess_o *)sub_B0D974(
                                                               BattleLogicFunctionProcess_AddStateShortProcess_TypeInfo,
                                                               v31,
                                                               v32);
  BattleLogicFunctionProcess_AddStateShortProcess___ctor(v33, 0LL);
  System_Collections_Generic_Dictionary_Voice_BATTLE__string___Add(
    v24,
    16,
    (System_String_o *)v33,
    (const MethodInfo_2EA6CC0 *)Method_System_Collections_Generic_Dictionary_FuncList_TYPE__BattleLogicFunctionProcess_BaseFunctionTypeProcess__Add__);
  v36 = (BattleLogicFunctionProcess_MoveToLastSubMemberProcess_o *)sub_B0D974(
                                                                     BattleLogicFunctionProcess_MoveToLastSubMemberProcess_TypeInfo,
                                                                     v34,
                                                                     v35);
  BattleLogicFunctionProcess_MoveToLastSubMemberProcess___ctor(v36, 0LL);
  System_Collections_Generic_Dictionary_Voice_BATTLE__string___Add(
    v24,
    61,
    (System_String_o *)v36,
    (const MethodInfo_2EA6CC0 *)Method_System_Collections_Generic_Dictionary_FuncList_TYPE__BattleLogicFunctionProcess_BaseFunctionTypeProcess__Add__);
  v39 = (BattleLogicFunctionProcess_TransformServantProcess_o *)sub_B0D974(
                                                                  BattleLogicFunctionProcess_TransformServantProcess_TypeInfo,
                                                                  v37,
                                                                  v38);
  BattleLogicFunctionProcess_TransformServantProcess___ctor(v39, 0LL);
  System_Collections_Generic_Dictionary_Voice_BATTLE__string___Add(
    v24,
    109,
    (System_String_o *)v39,
    (const MethodInfo_2EA6CC0 *)Method_System_Collections_Generic_Dictionary_FuncList_TYPE__BattleLogicFunctionProcess_BaseFunctionTypeProcess__Add__);
  v42 = (BattleLogicFunctionProcess_CommonFieldFunctionProcess_o *)sub_B0D974(
                                                                     BattleLogicFunctionProcess_CommonFieldFunctionProcess_TypeInfo,
                                                                     v40,
                                                                     v41);
  BattleLogicFunctionProcess_CommonFieldFunctionProcess___ctor(v42, 0LL);
  System_Collections_Generic_Dictionary_Voice_BATTLE__string___Add(
    v24,
    29,
    (System_String_o *)v42,
    (const MethodInfo_2EA6CC0 *)Method_System_Collections_Generic_Dictionary_FuncList_TYPE__BattleLogicFunctionProcess_BaseFunctionTypeProcess__Add__);
  v45 = (BattleLogicFunctionProcess_CommonFieldFunctionProcess_o *)sub_B0D974(
                                                                     BattleLogicFunctionProcess_CommonFieldFunctionProcess_TypeInfo,
                                                                     v43,
                                                                     v44);
  BattleLogicFunctionProcess_CommonFieldFunctionProcess___ctor(v45, 0LL);
  System_Collections_Generic_Dictionary_Voice_BATTLE__string___Add(
    v24,
    128,
    (System_String_o *)v45,
    (const MethodInfo_2EA6CC0 *)Method_System_Collections_Generic_Dictionary_FuncList_TYPE__BattleLogicFunctionProcess_BaseFunctionTypeProcess__Add__);
  v48 = (BattleLogicFunctionProcess_CommonAddStateProcess_o *)sub_B0D974(
                                                                BattleLogicFunctionProcess_CommonAddStateProcess_TypeInfo,
                                                                v46,
                                                                v47);
  BattleLogicFunctionProcess_CommonAddStateProcess___ctor(v48, 0LL);
  System_Collections_Generic_Dictionary_Voice_BATTLE__string___Add(
    v24,
    130,
    (System_String_o *)v48,
    (const MethodInfo_2EA6CC0 *)Method_System_Collections_Generic_Dictionary_FuncList_TYPE__BattleLogicFunctionProcess_BaseFunctionTypeProcess__Add__);
  v51 = (BattleLogicFunctionProcess_ToFieldCommonFunctionProcess_o *)sub_B0D974(
                                                                       BattleLogicFunctionProcess_ToFieldCommonFunctionProcess_TypeInfo,
                                                                       v49,
                                                                       v50);
  BattleLogicFunctionProcess_ToFieldCommonFunctionProcess___ctor(v51, 0LL);
  System_Collections_Generic_Dictionary_Voice_BATTLE__string___Add(
    v24,
    131,
    (System_String_o *)v51,
    (const MethodInfo_2EA6CC0 *)Method_System_Collections_Generic_Dictionary_FuncList_TYPE__BattleLogicFunctionProcess_BaseFunctionTypeProcess__Add__);
  this->fields.dicFuncProcess = (struct System_Collections_Generic_Dictionary_FuncList_TYPE__BattleLogicFunctionProcess_BaseFunctionTypeProcess__o *)v24;
  sub_B0D840(
    (BattleServantConfConponent_o *)&this->fields.dicFuncProcess,
    (System_Int32_array **)v24,
    v52,
    v53,
    v54,
    v55,
    v56,
    v57);
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
  __int64 v19; // x1
  __int64 v20; // x2
  System_Collections_Generic_List_VoiceCondType_Type__o *v21; // x25
  struct BattleLogic_o *logic; // x8
  unsigned __int64 v23; // x9
  int v24; // w10
  DataVals_o *v25; // x26
  const MethodInfo *v26; // x4
  BattleLogicFunction_c *klass; // x8
  BattleLogicFunction_o *v28; // x25
  unsigned __int64 v29; // x10
  int32_t *p_offset; // x11
  __int64 v31; // x0
  __int64 v32; // x25
  __int64 v33; // x8
  unsigned __int64 v34; // x10
  int *v35; // x11
  __int64 v36; // x0
  __int64 v37; // x8
  unsigned __int64 v38; // x10
  int *v39; // x11
  __int64 v40; // x0
  __int64 v41; // x0
  __int64 v42; // x27
  __int64 v43; // x0
  int32_t v44; // w2
  const MethodInfo *v45; // x6
  int32_t v46; // w27
  BattleActionData_o *v47; // x0
  int32_t v48; // w28
  int32_t funcIndex; // w28
  bool IsCommandSideEffect; // w0
  const MethodInfo *v51; // x7
  BattleActionData_o *NoEffectObject; // x0
  int v53; // w10
  __int64 v54; // x8
  int v55; // w27
  unsigned __int64 v56; // x10
  int *v57; // x11
  __int64 v58; // x0
  __int64 v60; // x0
  BattleLogicFunction_o *v61; // [xsp+0h] [xbp-80h]
  int v62; // [xsp+Ch] [xbp-74h]
  unsigned __int64 v63; // [xsp+10h] [xbp-70h]
  _DWORD v65[1]; // [xsp+20h] [xbp-60h]
  int v66; // [xsp+24h] [xbp-5Ch]
  int32_t diffNp; // [xsp+2Ch] [xbp-54h] BYREF

  v7 = this;
  if ( (byte_4217041 & 1) == 0 )
  {
    sub_B0D8A4(&BattleActionData_TypeInfo, mainAction);
    sub_B0D8A4(&System_IDisposable_TypeInfo, v8);
    sub_B0D8A4(&System_Collections_Generic_IEnumerable_BattleLogicFunctionProcess_FunctionTargetCheck__TypeInfo, v9);
    sub_B0D8A4(&System_Collections_Generic_IEnumerator_BattleLogicFunctionProcess_FunctionTargetCheck__TypeInfo, v10);
    sub_B0D8A4(&System_Collections_IEnumerator_TypeInfo, v11);
    sub_B0D8A4(&Method_System_Collections_Generic_List_FuncList_TYPE__Add__, v12);
    sub_B0D8A4(&Method_System_Collections_Generic_List_FuncList_TYPE___ctor__, v13);
    this = (BattleLogicFunction_o *)sub_B0D8A4(&System_Collections_Generic_List_FuncList_TYPE__TypeInfo, v14);
    byte_4217041 = 1;
  }
  diffNp = 0;
  v66 = 0;
  if ( !funcTarget )
    goto LABEL_65;
  funcUnit_k__BackingField = funcTarget->fields._funcUnit_k__BackingField;
  if ( !funcUnit_k__BackingField )
    goto LABEL_65;
  procArg_k__BackingField = funcUnit_k__BackingField->fields._procArg_k__BackingField;
  dataVals_k__BackingField = funcUnit_k__BackingField->fields._dataVals_k__BackingField;
  v18 = (BattleActionData_o *)sub_B0D974(BattleActionData_TypeInfo, mainAction, funcTarget);
  BattleActionData___ctor(v18, 0LL);
  v21 = (System_Collections_Generic_List_VoiceCondType_Type__o *)sub_B0D974(
                                                                   System_Collections_Generic_List_FuncList_TYPE__TypeInfo,
                                                                   v19,
                                                                   v20);
  System_Collections_Generic_List_VoiceCondType_Type____ctor(
    v21,
    (const MethodInfo_2FB217C *)Method_System_Collections_Generic_List_FuncList_TYPE___ctor__);
  if ( !v21 )
    goto LABEL_65;
  System_Collections_Generic_List_VoiceCondType_Type___Add(
    v21,
    8,
    (const MethodInfo_2FB2ED8 *)Method_System_Collections_Generic_List_FuncList_TYPE__Add__);
  if ( !dataVals_k__BackingField )
    goto LABEL_65;
  this = (BattleLogicFunction_o *)DataVals__GetDependDataValsArray(
                                    dataVals_k__BackingField,
                                    (System_Collections_Generic_List_FuncList_TYPE__o *)v21,
                                    0,
                                    0LL);
  if ( !this )
    goto LABEL_65;
  logic = this->fields.logic;
  if ( (int)logic >= 1 )
  {
    v23 = 0LL;
    v24 = 0;
    v61 = this;
    while ( 1 )
    {
      if ( v23 >= (unsigned int)logic )
      {
        v60 = sub_B0D9A8(this);
        sub_B0D948(v60, 0LL);
      }
      v25 = (DataVals_o *)*((_QWORD *)&this->fields.logictarget + v23);
      diffNp = 0;
      if ( !result )
        break;
      this = (BattleLogicFunction_o *)result->fields._Convert_k__BackingField;
      v62 = v24;
      v63 = v23;
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
      if ( *(_WORD *)&this->klass->_2.bitflags1 )
      {
        v29 = 0LL;
        p_offset = &klass->_1.interfaceOffsets->offset;
        while ( *((System_Collections_Generic_IEnumerable_BattleLogicFunctionProcess_FunctionTargetCheck__c **)p_offset
                - 1) != System_Collections_Generic_IEnumerable_BattleLogicFunctionProcess_FunctionTargetCheck__TypeInfo )
        {
          ++v29;
          p_offset += 4;
          if ( v29 >= *(unsigned __int16 *)&this->klass->_2.bitflags1 )
            goto LABEL_25;
        }
        v31 = (__int64)(&klass->vtable._0_Equals.method + 2 * *p_offset);
      }
      else
      {
LABEL_25:
        v31 = sub_AA67A0(
                this,
                System_Collections_Generic_IEnumerable_BattleLogicFunctionProcess_FunctionTargetCheck__TypeInfo,
                0LL);
      }
      v32 = (*(__int64 (__fastcall **)(BattleLogicFunction_o *, _QWORD))v31)(v28, *(_QWORD *)(v31 + 8));
      if ( !v32 )
        sub_B0D97C(0LL);
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
              goto LABEL_32;
          }
          v36 = v33 + 16LL * *v35 + 312;
        }
        else
        {
LABEL_32:
          v36 = sub_AA67A0(v32, System_Collections_IEnumerator_TypeInfo, 0LL);
        }
        if ( ((*(__int64 (__fastcall **)(__int64, _QWORD))v36)(v32, *(_QWORD *)(v36 + 8)) & 1) == 0 )
          break;
        v37 = *(_QWORD *)v32;
        if ( *(_WORD *)(*(_QWORD *)v32 + 298LL) )
        {
          v38 = 0LL;
          v39 = (int *)(*(_QWORD *)(v37 + 176) + 8LL);
          while ( *((System_Collections_Generic_IEnumerator_BattleLogicFunctionProcess_FunctionTargetCheck__c **)v39 - 1) != System_Collections_Generic_IEnumerator_BattleLogicFunctionProcess_FunctionTargetCheck__TypeInfo )
          {
            ++v38;
            v39 += 4;
            if ( v38 >= *(unsigned __int16 *)(*(_QWORD *)v32 + 298LL) )
              goto LABEL_39;
          }
          v40 = v37 + 16LL * *v39 + 312;
        }
        else
        {
LABEL_39:
          v40 = sub_AA67A0(
                  v32,
                  System_Collections_Generic_IEnumerator_BattleLogicFunctionProcess_FunctionTargetCheck__TypeInfo,
                  0LL);
        }
        v41 = (*(__int64 (__fastcall **)(__int64, _QWORD))v40)(v32, *(_QWORD *)(v40 + 8));
        v42 = v41;
        if ( !v41 )
          sub_B0D97C(0LL);
        v43 = (*(__int64 (__fastcall **)(__int64, BattleActionData_o *, _QWORD))(*(_QWORD *)v41 + 392LL))(
                v41,
                mainAction,
                *(_QWORD *)(*(_QWORD *)v41 + 400LL));
        if ( (v43 & 1) != 0 )
        {
          if ( !mainAction )
            sub_B0D97C(v43);
          v46 = *(_DWORD *)(v42 + 32);
          v47 = BattleLogicFunction__functionLossNp(v7, procArg_k__BackingField, v44, v46, v25, &diffNp, v45);
          v48 = diffNp;
          if ( diffNp < 1 )
          {
            if ( v47 )
            {
              if ( !v25 )
                sub_B0D97C(v47);
              if ( !procArg_k__BackingField )
                sub_B0D97C(v47);
              funcIndex = v25->fields.funcIndex;
              IsCommandSideEffect = BattleLogicFunction_ProcListInArgs__get_IsCommandSideEffect(
                                      procArg_k__BackingField,
                                      0LL);
              NoEffectObject = BattleLogicFunction__getNoEffectObject(
                                 v7,
                                 v46,
                                 funcIndex,
                                 v25,
                                 IsCommandSideEffect,
                                 0LL,
                                 0LL,
                                 v51);
              if ( !v18 )
                sub_B0D97C(NoEffectObject);
              BattleActionData__addAction(v18, NoEffectObject, 0LL);
            }
          }
          else
          {
            if ( !v18 )
              sub_B0D97C(v47);
            BattleActionData__addAction(v18, v47, 0LL);
            NpGaugeAbsorbResult__AddPoint(result, v48, 0LL);
          }
        }
      }
      v65[v62] = 229;
      v53 = ++v66;
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
            goto LABEL_57;
        }
        v58 = v54 + 16LL * *v57 + 312;
      }
      else
      {
LABEL_57:
        v58 = sub_AA67A0(v32, System_IDisposable_TypeInfo, 0LL);
      }
      (*(void (__fastcall **)(__int64, _QWORD))v58)(v32, *(_QWORD *)(v58 + 8));
      v24 = v55;
      if ( v55 && v65[v55 - 1] == 229 )
      {
        v24 = v55 - 1;
        v66 = v55 - 1;
      }
      this = v61;
      LODWORD(logic) = v61->fields.logic;
      v23 = v63 + 1;
      if ( (__int64)(v63 + 1) >= (int)logic )
        return v18;
    }
LABEL_65:
    sub_B0D97C(this);
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
  __int64 v18; // x1
  __int64 v19; // x2
  System_Collections_Generic_List_VoiceCondType_Type__o *v20; // x25
  struct BattleLogic_o *logic; // x8
  unsigned __int64 v22; // x9
  int v23; // w10
  DataVals_o *v24; // x26
  const MethodInfo *v25; // x4
  BattleLogicFunction_c *klass; // x8
  BattleLogicFunction_o *v27; // x25
  unsigned __int64 v28; // x10
  int32_t *p_offset; // x11
  __int64 v30; // x0
  __int64 v31; // x25
  __int64 v32; // x8
  unsigned __int64 v33; // x10
  int *v34; // x11
  __int64 v35; // x0
  __int64 v36; // x8
  unsigned __int64 v37; // x10
  int *v38; // x11
  __int64 v39; // x0
  __int64 v40; // x0
  __int64 v41; // x27
  __int64 v42; // x0
  int32_t v43; // w27
  FunctionEntity_o *funcEnt; // x28
  int32_t funcIndex; // w24
  bool IsCommandSideEffect; // w0
  const MethodInfo *v47; // x7
  BattleActionData_o *v48; // x0
  int v49; // w10
  __int64 v50; // x8
  int v51; // w24
  unsigned __int64 v52; // x10
  int *v53; // x11
  __int64 v54; // x0
  __int64 v56; // x0
  BattleLogicFunction_o *v57; // [xsp+8h] [xbp-88h]
  unsigned __int64 v58; // [xsp+10h] [xbp-80h]
  int v59; // [xsp+1Ch] [xbp-74h]
  BattleLogicFunction_o *v61; // [xsp+28h] [xbp-68h]
  _DWORD v62[1]; // [xsp+30h] [xbp-60h]
  int v63; // [xsp+34h] [xbp-5Ch]
  int32_t absorptionCount; // [xsp+3Ch] [xbp-54h] BYREF

  v61 = this;
  if ( (byte_4217040 & 1) == 0 )
  {
    sub_B0D8A4(&BattleActionData_TypeInfo, mainAction);
    sub_B0D8A4(&System_IDisposable_TypeInfo, v7);
    sub_B0D8A4(&System_Collections_Generic_IEnumerable_BattleLogicFunctionProcess_FunctionTargetCheck__TypeInfo, v8);
    sub_B0D8A4(&System_Collections_Generic_IEnumerator_BattleLogicFunctionProcess_FunctionTargetCheck__TypeInfo, v9);
    sub_B0D8A4(&System_Collections_IEnumerator_TypeInfo, v10);
    sub_B0D8A4(&Method_System_Collections_Generic_List_FuncList_TYPE__Add__, v11);
    sub_B0D8A4(&Method_System_Collections_Generic_List_FuncList_TYPE___ctor__, v12);
    this = (BattleLogicFunction_o *)sub_B0D8A4(&System_Collections_Generic_List_FuncList_TYPE__TypeInfo, v13);
    byte_4217040 = 1;
  }
  absorptionCount = 0;
  v63 = 0;
  if ( !funcTarget )
    goto LABEL_59;
  funcUnit_k__BackingField = funcTarget->fields._funcUnit_k__BackingField;
  if ( !funcUnit_k__BackingField )
    goto LABEL_59;
  dataVals_k__BackingField = funcUnit_k__BackingField->fields._dataVals_k__BackingField;
  if ( !dataVals_k__BackingField )
    goto LABEL_59;
  procArg_k__BackingField = funcUnit_k__BackingField->fields._procArg_k__BackingField;
  v17 = (BattleActionData_o *)sub_B0D974(BattleActionData_TypeInfo, mainAction, funcTarget);
  BattleActionData___ctor(v17, 0LL);
  v20 = (System_Collections_Generic_List_VoiceCondType_Type__o *)sub_B0D974(
                                                                   System_Collections_Generic_List_FuncList_TYPE__TypeInfo,
                                                                   v18,
                                                                   v19);
  System_Collections_Generic_List_VoiceCondType_Type____ctor(
    v20,
    (const MethodInfo_2FB217C *)Method_System_Collections_Generic_List_FuncList_TYPE___ctor__);
  if ( !v20 )
    goto LABEL_59;
  System_Collections_Generic_List_VoiceCondType_Type___Add(
    v20,
    20,
    (const MethodInfo_2FB2ED8 *)Method_System_Collections_Generic_List_FuncList_TYPE__Add__);
  this = (BattleLogicFunction_o *)DataVals__GetDependDataValsArray(
                                    dataVals_k__BackingField,
                                    (System_Collections_Generic_List_FuncList_TYPE__o *)v20,
                                    0,
                                    0LL);
  if ( !this )
    goto LABEL_59;
  logic = this->fields.logic;
  if ( (int)logic >= 1 )
  {
    v22 = 0LL;
    v23 = 0;
    v57 = this;
    while ( 1 )
    {
      if ( v22 >= (unsigned int)logic )
      {
        v56 = sub_B0D9A8(this);
        sub_B0D948(v56, 0LL);
      }
      v24 = (DataVals_o *)*((_QWORD *)&this->fields.logictarget + v22);
      absorptionCount = 0;
      if ( !result )
        break;
      this = (BattleLogicFunction_o *)result->fields._Convert_k__BackingField;
      v59 = v23;
      v58 = v22;
      if ( !this )
        break;
      ((void (__fastcall *)(BattleLogicFunction_o *, DataVals_o *, void *))this->klass[1]._1.namespaze)(
        this,
        v24,
        this->klass[1]._1.byval_arg.data);
      this = (BattleLogicFunction_o *)BattleLogicFunction__GetDependFuncTargets(
                                        v61,
                                        procArg_k__BackingField,
                                        mainAction,
                                        v24,
                                        v25);
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
            goto LABEL_23;
        }
        v30 = (__int64)(&klass->vtable._0_Equals.method + 2 * *p_offset);
      }
      else
      {
LABEL_23:
        v30 = sub_AA67A0(
                this,
                System_Collections_Generic_IEnumerable_BattleLogicFunctionProcess_FunctionTargetCheck__TypeInfo,
                0LL);
      }
      v31 = (*(__int64 (__fastcall **)(BattleLogicFunction_o *, _QWORD))v30)(v27, *(_QWORD *)(v30 + 8));
      if ( !v31 )
        sub_B0D97C(0LL);
      while ( 1 )
      {
        v32 = *(_QWORD *)v31;
        if ( *(_WORD *)(*(_QWORD *)v31 + 298LL) )
        {
          v33 = 0LL;
          v34 = (int *)(*(_QWORD *)(v32 + 176) + 8LL);
          while ( *((System_Collections_IEnumerator_c **)v34 - 1) != System_Collections_IEnumerator_TypeInfo )
          {
            ++v33;
            v34 += 4;
            if ( v33 >= *(unsigned __int16 *)(*(_QWORD *)v31 + 298LL) )
              goto LABEL_30;
          }
          v35 = v32 + 16LL * *v34 + 312;
        }
        else
        {
LABEL_30:
          v35 = sub_AA67A0(v31, System_Collections_IEnumerator_TypeInfo, 0LL);
        }
        if ( ((*(__int64 (__fastcall **)(__int64, _QWORD))v35)(v31, *(_QWORD *)(v35 + 8)) & 1) == 0 )
          break;
        v36 = *(_QWORD *)v31;
        if ( *(_WORD *)(*(_QWORD *)v31 + 298LL) )
        {
          v37 = 0LL;
          v38 = (int *)(*(_QWORD *)(v36 + 176) + 8LL);
          while ( *((System_Collections_Generic_IEnumerator_BattleLogicFunctionProcess_FunctionTargetCheck__c **)v38 - 1) != System_Collections_Generic_IEnumerator_BattleLogicFunctionProcess_FunctionTargetCheck__TypeInfo )
          {
            ++v37;
            v38 += 4;
            if ( v37 >= *(unsigned __int16 *)(*(_QWORD *)v31 + 298LL) )
              goto LABEL_37;
          }
          v39 = v36 + 16LL * *v38 + 312;
        }
        else
        {
LABEL_37:
          v39 = sub_AA67A0(
                  v31,
                  System_Collections_Generic_IEnumerator_BattleLogicFunctionProcess_FunctionTargetCheck__TypeInfo,
                  0LL);
        }
        v40 = (*(__int64 (__fastcall **)(__int64, _QWORD))v39)(v31, *(_QWORD *)(v39 + 8));
        v41 = v40;
        if ( !v40 )
          sub_B0D97C(0LL);
        v42 = (*(__int64 (__fastcall **)(__int64, BattleActionData_o *, _QWORD))(*(_QWORD *)v40 + 392LL))(
                v40,
                mainAction,
                *(_QWORD *)(*(_QWORD *)v40 + 400LL));
        if ( (v42 & 1) != 0 )
        {
          if ( !v24 )
            sub_B0D97C(v42);
          if ( !procArg_k__BackingField )
            sub_B0D97C(v42);
          v43 = *(_DWORD *)(v41 + 32);
          funcEnt = v24->fields.funcEnt;
          funcIndex = v24->fields.funcIndex;
          IsCommandSideEffect = BattleLogicFunction_ProcListInArgs__get_IsCommandSideEffect(
                                  procArg_k__BackingField,
                                  0LL);
          v48 = BattleLogicFunction__functionDelayNpTurn(
                  v61,
                  v43,
                  funcEnt,
                  v24,
                  funcIndex,
                  IsCommandSideEffect,
                  &absorptionCount,
                  v47);
          if ( !v17 )
            sub_B0D97C(v48);
          BattleActionData__addAction(v17, v48, 0LL);
          if ( absorptionCount >= 1 )
            NpGaugeAbsorbResult__AddTurn(result, absorptionCount, 0LL);
        }
      }
      v62[v59] = 209;
      v49 = ++v63;
      v50 = *(_QWORD *)v31;
      v51 = v49;
      if ( *(_WORD *)(*(_QWORD *)v31 + 298LL) )
      {
        v52 = 0LL;
        v53 = (int *)(*(_QWORD *)(v50 + 176) + 8LL);
        while ( *((System_IDisposable_c **)v53 - 1) != System_IDisposable_TypeInfo )
        {
          ++v52;
          v53 += 4;
          if ( v52 >= *(unsigned __int16 *)(*(_QWORD *)v31 + 298LL) )
            goto LABEL_51;
        }
        v54 = v50 + 16LL * *v53 + 312;
      }
      else
      {
LABEL_51:
        v54 = sub_AA67A0(v31, System_IDisposable_TypeInfo, 0LL);
      }
      (*(void (__fastcall **)(__int64, _QWORD))v54)(v31, *(_QWORD *)(v54 + 8));
      v23 = v51;
      if ( v51 && v62[v51 - 1] == 209 )
      {
        v23 = v51 - 1;
        v63 = v51 - 1;
      }
      this = v57;
      LODWORD(logic) = v57->fields.logic;
      v22 = v58 + 1;
      if ( (__int64)(v58 + 1) >= (int)logic )
        return v17;
    }
LABEL_59:
    sub_B0D97C(this);
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
  if ( (byte_421701C & 1) == 0 )
  {
    this = (BattleLogicFunction_o *)sub_B0D8A4(&UnityEngine_Object_TypeInfo, targetSvtData);
    byte_421701C = 1;
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
      sub_B0D97C(this);
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
  System_String_array **v14; // x2
  System_String_array **v15; // x3
  System_Boolean_array **v16; // x4
  System_Int32_array **v17; // x5
  System_Int32_array *v18; // x6
  System_Int32_array *v19; // x7
  __int64 v20; // x8
  System_Int32_array **ServantData; // x0
  System_String_array **v22; // x2
  System_String_array **v23; // x3
  System_Boolean_array **v24; // x4
  System_Int32_array **v25; // x5
  System_Int32_array *v26; // x6
  System_Int32_array *v27; // x7
  __int64 v28; // x1
  __int64 v29; // x2
  System_Func_int__int__o *v30; // x20
  System_Collections_Generic_IEnumerable_TSource__o *v31; // x0
  struct System_Int32_array *v32; // x0
  System_String_array **v33; // x2
  System_String_array **v34; // x3
  System_Boolean_array **v35; // x4
  System_Int32_array **v36; // x5
  System_Int32_array *v37; // x6
  System_Int32_array *v38; // x7
  System_Collections_Generic_IEnumerable_TSource__o *v39; // x0
  struct System_Int32_array *v40; // x0
  System_String_array **v41; // x2
  System_String_array **v42; // x3
  System_Boolean_array **v43; // x4
  System_Int32_array **v44; // x5
  System_Int32_array *v45; // x6
  System_Int32_array *v46; // x7

  if ( (byte_4217026 & 1) == 0 )
  {
    sub_B0D8A4(&Method_System_Linq_Enumerable_Select_int__int___, buffData);
    sub_B0D8A4(&Method_System_Linq_Enumerable_ToArray_int___, v7);
    sub_B0D8A4(&Method_System_Func_int__int___ctor__, v8);
    sub_B0D8A4(&System_Func_int__int__TypeInfo, v9);
    sub_B0D8A4(&Method_BattleLogicFunction___c__DisplayClass66_0__BehaveLinkageBuffAsFamily_b__0__, v10);
    sub_B0D8A4(&BattleLogicFunction___c__DisplayClass66_0_TypeInfo, v11);
    byte_4217026 = 1;
  }
  v12 = sub_B0D974(BattleLogicFunction___c__DisplayClass66_0_TypeInfo, buffData, funcTarget);
  BattleLogicFunction___c__DisplayClass66_0___ctor((BattleLogicFunction___c__DisplayClass66_0_o *)v12, 0LL);
  if ( !v12 )
    goto LABEL_13;
  *(_QWORD *)(v12 + 16) = funcTarget;
  sub_B0D840(
    (BattleServantConfConponent_o *)(v12 + 16),
    (System_Int32_array **)funcTarget,
    v14,
    v15,
    v16,
    v17,
    v18,
    v19);
  v20 = *(_QWORD *)(v12 + 16);
  if ( !v20 )
    goto LABEL_13;
  data = this->fields.data;
  if ( !data )
    goto LABEL_13;
  ServantData = (System_Int32_array **)BattleData__getServantData(data, *(_DWORD *)(v20 + 32), 0LL);
  *(_QWORD *)(v12 + 24) = ServantData;
  sub_B0D840((BattleServantConfConponent_o *)(v12 + 24), ServantData, v22, v23, v24, v25, v26, v27);
  if ( !*(_QWORD *)(v12 + 24) )
    return;
  v30 = (System_Func_int__int__o *)sub_B0D974(System_Func_int__int__TypeInfo, v28, v29);
  System_Func_int__int____ctor(
    v30,
    (Il2CppObject *)v12,
    Method_BattleLogicFunction___c__DisplayClass66_0__BehaveLinkageBuffAsFamily_b__0__,
    (const MethodInfo_2613CE8 *)Method_System_Func_int__int___ctor__);
  if ( !buffData )
LABEL_13:
    sub_B0D97C(data);
  if ( !BasicHelper__IsNullOrEmpty((System_Collections_ICollection_o *)buffData->fields.addIndividualty, 0LL) )
  {
    v31 = (System_Collections_Generic_IEnumerable_TSource__o *)System_Linq_Enumerable__Select_int__int_(
                                                                 (System_Collections_Generic_IEnumerable_TSource__o *)buffData->fields.addIndividualty,
                                                                 (System_Func_TSource__TResult__o *)v30,
                                                                 (const MethodInfo_1B50800 *)Method_System_Linq_Enumerable_Select_int__int___);
    v32 = System_Linq_Enumerable__ToArray_int_(
            v31,
            (const MethodInfo_1B560F0 *)Method_System_Linq_Enumerable_ToArray_int___);
    buffData->fields.familyLinkageIds = v32;
    sub_B0D840(
      (BattleServantConfConponent_o *)&buffData->fields.familyLinkageIds,
      (System_Int32_array **)v32,
      v33,
      v34,
      v35,
      v36,
      v37,
      v38);
    BattleBuffData_BuffData__onState(buffData, 0x400000, 0LL);
  }
  if ( !BasicHelper__IsNullOrEmpty((System_Collections_ICollection_o *)buffData->fields.linkageTargetIndividualty, 0LL) )
  {
    v39 = (System_Collections_Generic_IEnumerable_TSource__o *)System_Linq_Enumerable__Select_int__int_(
                                                                 (System_Collections_Generic_IEnumerable_TSource__o *)buffData->fields.linkageTargetIndividualty,
                                                                 (System_Func_TSource__TResult__o *)v30,
                                                                 (const MethodInfo_1B50800 *)Method_System_Linq_Enumerable_Select_int__int___);
    v40 = System_Linq_Enumerable__ToArray_int_(
            v39,
            (const MethodInfo_1B560F0 *)Method_System_Linq_Enumerable_ToArray_int___);
    buffData->fields.linkageTargetIndividualty = v40;
    sub_B0D840(
      (BattleServantConfConponent_o *)&buffData->fields.linkageTargetIndividualty,
      (System_Int32_array **)v40,
      v41,
      v42,
      v43,
      v44,
      v45,
      v46);
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
    sub_B0D97C(this);
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
    v16 = sub_B0D9A8(this);
    sub_B0D948(v16, 0LL);
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
  if ( (byte_4217052 & 1) == 0 )
  {
    sub_B0D8A4(&Generator_BGMFromChangeBGMFunc_TypeInfo, bgmEnt);
    this = (BattleLogicFunction_o *)sub_B0D8A4(&UnityEngine_Object_TypeInfo, v7);
    byte_4217052 = 1;
  }
  data = v6->fields.data;
  if ( !data )
    goto LABEL_17;
  FieldEnvData_k__BackingField = data->fields._FieldEnvData_k__BackingField;
  if ( bgmEnt )
  {
    id = bgmEnt->fields.id;
    v11 = (Generator_BGMFromChangeBGMFunc_o *)sub_B0D974(Generator_BGMFromChangeBGMFunc_TypeInfo, bgmEnt, baseVals);
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
    sub_B0D97C(this);
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

  if ( (byte_4217051 & 1) == 0 )
  {
    sub_B0D8A4(&Method_System_Array_IndexOf_int___, *(_QWORD *)&uniqueID);
    sub_B0D8A4(&CondType_TypeInfo, v7);
    sub_B0D8A4(&Method_DataManager_GetMasterData_BgmMaster___, v8);
    sub_B0D8A4(&Method_DataManager_GetMasterData_SkillLvMaster___, v9);
    sub_B0D8A4(&Method_DataMasterBase_BgmMaster__BgmEntity__int__TryGetEntity__, v10);
    sub_B0D8A4(&Method_System_Collections_Generic_List_SkillLvEntity_SvtChangeBgm__get_Count__, v11);
    sub_B0D8A4(&Method_System_Collections_Generic_List_SkillLvEntity_SvtChangeBgm__get_Item__, v12);
    sub_B0D8A4(&Method_SingletonMonoBehaviour_DataManager__getInstance__, v13);
    sub_B0D8A4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v14);
    byte_4217051 = 1;
  }
  result = 0LL;
  entity = 0LL;
  if ( uniqueID != -1 && actionData )
  {
    v16 = *((_QWORD *)Method_SingletonMonoBehaviour_DataManager__getInstance__ + 3);
    if ( (*(_BYTE *)(v16 + 306) & 1) == 0 )
      sub_AA65A4(*((_QWORD *)Method_SingletonMonoBehaviour_DataManager__getInstance__ + 3));
    v17 = **(_QWORD **)(v16 + 192);
    if ( (*(_BYTE *)(v17 + 306) & 1) == 0 )
      sub_AA65A4(v17);
    MasterData_WarQuestSelectionMaster = **(DataManager_o ***)(v17 + 184);
    if ( !MasterData_WarQuestSelectionMaster )
      goto LABEL_42;
    MasterData_WarQuestSelectionMaster = (DataManager_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                            MasterData_WarQuestSelectionMaster,
                                                            (const MethodInfo_17145A8 *)Method_DataManager_GetMasterData_SkillLvMaster___);
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
    MasterData_WarQuestSelectionMaster = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A71064 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !MasterData_WarQuestSelectionMaster )
      goto LABEL_42;
    MasterData_WarQuestSelectionMaster = (DataManager_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                            MasterData_WarQuestSelectionMaster,
                                                            (const MethodInfo_17145A8 *)Method_DataManager_GetMasterData_BgmMaster___);
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
          System_ThrowHelper__ThrowArgumentOutOfRangeException_41496008(0LL);
        v29 = *(_QWORD *)(*(_QWORD *)&v25->fields.m_CachedPtr + 8LL * (int)v28 + 32);
        if ( !v29 )
          break;
        MasterData_WarQuestSelectionMaster = (DataManager_o *)System_Array__IndexOf_int_(
                                                                v27,
                                                                *(_DWORD *)(v29 + 16),
                                                                (const MethodInfo_1F69B20 *)Method_System_Array_IndexOf_int___);
        if ( (_DWORD)MasterData_WarQuestSelectionMaster != -1 )
        {
          if ( LODWORD(v25->fields.datalist) <= v28 )
            System_ThrowHelper__ThrowArgumentOutOfRangeException_41496008(0LL);
          v30 = *(_QWORD *)(*(_QWORD *)&v25->fields.m_CachedPtr + 8LL * (int)v28 + 32);
          if ( !v30 )
            break;
          v31 = *(_DWORD *)(v30 + 20);
          if ( LODWORD(v25->fields.datalist) <= v28 )
            System_ThrowHelper__ThrowArgumentOutOfRangeException_41496008(0LL);
          v32 = *(int *)(v30 + 24);
          if ( (BYTE3(CondType_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !CondType_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(CondType_TypeInfo);
          MasterData_WarQuestSelectionMaster = (DataManager_o *)CondType__IsOpen(46, v31, v32, 0, 0LL);
          if ( LODWORD(v25->fields.datalist) <= v28 )
            System_ThrowHelper__ThrowArgumentOutOfRangeException_41496008(0LL);
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
                                                                  (const MethodInfo_2669C30 *)Method_DataMasterBase_BgmMaster__BgmEntity__int__TryGetEntity__);
          if ( ((unsigned __int8)MasterData_WarQuestSelectionMaster & 1) != 0 )
            return (BgmEntity_o *)entity;
        }
        datalist = (int)v25->fields.datalist;
        if ( (int)++v28 >= datalist )
          return (BgmEntity_o *)entity;
      }
LABEL_42:
      sub_B0D97C(MasterData_WarQuestSelectionMaster);
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
  if ( (byte_4217054 & 1) == 0 )
  {
    this = (BattleLogicFunction_o *)sub_B0D8A4(&UnityEngine_Object_TypeInfo, args);
    byte_4217054 = 1;
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
    sub_B0D97C(this);
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
    sub_B0D97C(this);
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
  __int64 v19; // x1
  __int64 v20; // x2
  BattleLogicFunction_o *v21; // x25
  BattleLogicFunction_OnlyCheckFuncSideEffectFunctionArgument_o *v22; // x23
  struct BattleLogic_o *logic; // x8
  BattleLogicSkill_o *logicSkill; // x26
  System_String_array **v25; // x2
  System_String_array **v26; // x3
  System_Boolean_array **v27; // x4
  System_Int32_array **v28; // x5
  System_Int32_array *v29; // x6
  System_Int32_array *v30; // x7
  int v31; // w8
  BattleLogicFunction_o *v32; // x24
  bool v33; // w26
  unsigned int v34; // w27
  __int64 v35; // x25
  struct BattleLogic_o *v36; // x8
  BattleActionData_o *v37; // x25
  BattleLogicFunction_FuncSideEffectFunctionArgument_o *FuncSideEffectArg; // x0
  __int64 v39; // x0
  BattleActionData_o *baseActionData; // [xsp+8h] [xbp-58h] BYREF

  v8 = this;
  if ( (byte_4217058 & 1) == 0 )
  {
    sub_B0D8A4(&BattleSkillInfoData_TypeInfo, actionData);
    sub_B0D8A4(&int___TypeInfo, v9);
    this = (BattleLogicFunction_o *)sub_B0D8A4(
                                      &BattleLogicFunction_OnlyCheckFuncSideEffectFunctionArgument_TypeInfo,
                                      v10);
    byte_4217058 = 1;
  }
  baseActionData = 0LL;
  data = v8->fields.data;
  if ( !data )
    goto LABEL_34;
  if ( !data->fields._lastUsedPlayerSkillInfo_k__BackingField )
    return;
  v12 = (BattleSkillInfoData_o *)sub_B0D974(BattleSkillInfoData_TypeInfo, actionData, baseVals);
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
  v21 = this;
  if ( this )
  {
    v22 = (BattleLogicFunction_OnlyCheckFuncSideEffectFunctionArgument_o *)sub_B0D974(
                                                                             BattleLogicFunction_OnlyCheckFuncSideEffectFunctionArgument_TypeInfo,
                                                                             v19,
                                                                             v20);
    BattleLogicFunction_OnlyCheckFuncSideEffectFunctionArgument___ctor(v22, 0LL);
  }
  else
  {
    v22 = 0LL;
  }
  logic = v8->fields.logic;
  if ( !logic )
    goto LABEL_34;
  logicSkill = logic->fields.logicSkill;
  this = (BattleLogicFunction_o *)sub_B0D8BC(int___TypeInfo, 1LL);
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
    sub_B0D97C(this);
  }
  v31 = (int)this->fields.logic;
  v32 = this;
  v33 = v21 != 0LL;
  if ( v31 >= 1 )
  {
    v34 = 0;
    while ( v34 < v31 )
    {
      v35 = *((_QWORD *)&v32->fields.logictarget + (int)v34);
      if ( !v35 )
        goto LABEL_34;
      *(_QWORD *)(v35 + 176) = v22;
      *(_BYTE *)(v35 + 169) = v33;
      sub_B0D840((BattleServantConfConponent_o *)(v35 + 176), (System_Int32_array **)v22, v25, v26, v27, v28, v29, v30);
      v36 = v8->fields.logic;
      if ( !v36 )
        goto LABEL_34;
      this = (BattleLogicFunction_o *)v36->fields.logicSkill;
      if ( !this )
        goto LABEL_34;
      v37 = BattleLogicSkill__createSkillData_29867180(
              (BattleLogicSkill_o *)this,
              (BattleLogicTask_o *)v35,
              1,
              baseVals,
              &baseActionData,
              0LL);
      BattleActionData__addAction(actionData, v37, 0LL);
      if ( v37 )
        actionData->fields.isSuccessSkillCopyFunction = 1;
      v31 = (int)v32->fields.logic;
      if ( (int)++v34 >= v31 )
        goto LABEL_31;
    }
LABEL_35:
    v39 = sub_B0D9A8(this);
    sub_B0D948(v39, 0LL);
  }
LABEL_31:
  FuncSideEffectArg = BattleLogicFunction_ProcListInArgs__get_FuncSideEffectArg(args, 0LL);
  if ( FuncSideEffectArg )
    BattleLogicFunction_FuncSideEffectFunctionArgument__AddTarget_23128068(
      FuncSideEffectArg,
      (BattleLogicFunction_FuncSideEffectFunctionArgument_o *)v22,
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
  if ( (byte_4217036 & 1) == 0 )
  {
    sub_B0D8A4(&Method_BasicHelper_IndexValue_int____67955848, targetServantData);
    sub_B0D8A4(&BattleActionData_TypeInfo, v10);
    sub_B0D8A4(&MoveToSubMemberWaveTurnEvent_TypeInfo, v11);
    this = (BattleLogicFunction_o *)sub_B0D8A4(&RestockServantLogicByMoveToSubMember_TypeInfo, v12);
    byte_4217036 = 1;
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
  BattleData__SubBuffFromPT_18558064((BattleData_o *)this, targetServantData, 0LL);
  this = (BattleLogicFunction_o *)v9->fields.data;
  if ( !this )
    goto LABEL_13;
  BattleData__SubBuffExitSvt((BattleData_o *)this, targetServantData, 0LL);
  this = (BattleLogicFunction_o *)v9->fields.data;
  if ( !this )
    goto LABEL_13;
  targetServantData->fields.deckIndex = BattleData__GetSubServantUsableDeckIndex((BattleData_o *)this, isEnemy, 0LL);
  data = v9->fields.data;
  v18 = (MoveToSubMemberWaveTurnEvent_o *)sub_B0D974(MoveToSubMemberWaveTurnEvent_TypeInfo, v16, v17);
  MoveToSubMemberWaveTurnEvent___ctor(v18, data, 0LL);
  BattleServantData__RegisterWaveTurnEvent(targetServantData, (ServantWaveTurnEvent_o *)v18, 0LL);
  if ( !funcEnt )
    goto LABEL_13;
  v19 = isEnemy;
  v20 = BasicHelper__IndexValue_int_(
          funcEnt->fields.vals,
          0,
          0,
          (const MethodInfo_17093A8 *)Method_BasicHelper_IndexValue_int____67955848);
  uniqueId = targetServantData->fields.uniqueId;
  v22 = v20;
  v25 = (RestockServantLogicByMoveToSubMember_o *)sub_B0D974(RestockServantLogicByMoveToSubMember_TypeInfo, v23, v24);
  RestockServantLogicByMoveToSubMember___ctor(v25, ServantIndex, v19, v22, uniqueId, 0LL);
  this = (BattleLogicFunction_o *)v9->fields.data;
  if ( !this
    || (BattleData__AppendRestockServantLogic((BattleData_o *)this, (RestockServantLogic_o *)v25, 0LL),
        v28 = (BattleActionData_o *)sub_B0D974(BattleActionData_TypeInfo, v26, v27),
        BattleActionData___ctor(v28, 0LL),
        !v28) )
  {
LABEL_13:
    sub_B0D97C(this);
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
  if ( (byte_4217055 & 1) == 0 )
  {
    this = (BattleLogicFunction_o *)sub_B0D8A4(&UnityEngine_Object_TypeInfo, args);
    byte_4217055 = 1;
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
    sub_B0D97C(this);
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
  __int64 v34; // x1
  __int64 v35; // x2
  System_Func_WarBoardManager_WarBoardOnboardSkillTarget__WarBoardPieceData__o *v36; // x24
  System_Collections_Generic_IEnumerable_TSource__o *v37; // x0
  System_String_array **v38; // x2
  System_String_array **v39; // x3
  System_Boolean_array **v40; // x4
  System_Int32_array **v41; // x5
  System_Int32_array *v42; // x6
  System_Int32_array *v43; // x7
  __int64 v44; // x1
  __int64 v45; // x2
  BattleLogicFunction___c_c *v46; // x0
  struct BattleLogicFunction___c_StaticFields *static_fields; // x8
  System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *_9__119_1; // x21
  Il2CppObject *v49; // x24
  struct BattleLogicFunction___c_StaticFields *v50; // x0
  System_String_array **v51; // x2
  System_String_array **v52; // x3
  System_Boolean_array **v53; // x4
  System_Int32_array **v54; // x5
  System_Int32_array *v55; // x6
  System_Int32_array *v56; // x7
  __int64 v57; // x1
  __int64 v58; // x2
  BattleActionEffect_UpdateAllInfo_o *v59; // x21
  System_String_array **v60; // x2
  System_String_array **v61; // x3
  System_Boolean_array **v62; // x4
  System_Int32_array **v63; // x5
  System_Int32_array *v64; // x6
  System_Int32_array *v65; // x7

  v8 = (Il2CppObject *)this;
  if ( (byte_4217057 & 1) == 0 )
  {
    sub_B0D8A4(&Method_BasicHelper_Any_BattleBuffData_BuffData___, args);
    sub_B0D8A4(&Method_BattleLogicFunction__FunctionSubFieldBuff_b__119_0__, v9);
    sub_B0D8A4(&Method_System_Linq_Enumerable_Select_BattleBuffData_BuffData__BattleBuffData_BuffData___, v10);
    sub_B0D8A4(&Method_System_Linq_Enumerable_ToList_BattleBuffData_BuffData___, v11);
    sub_B0D8A4(&Method_System_Func_BattleBuffData_BuffData__bool___ctor__, v12);
    sub_B0D8A4(&Method_System_Func_BattleBuffData_BuffData__BattleBuffData_BuffData___ctor__, v13);
    sub_B0D8A4(&System_Func_BattleBuffData_BuffData__bool__TypeInfo, v14);
    sub_B0D8A4(&System_Func_BattleBuffData_BuffData__BattleBuffData_BuffData__TypeInfo, v15);
    sub_B0D8A4(&Method_System_Collections_Generic_List_BattleBuffData_BuffData__get_Count__, v16);
    sub_B0D8A4(&Method_BattleLogicFunction___c__FunctionSubFieldBuff_b__119_1__, v17);
    sub_B0D8A4(&BattleLogicFunction___c_TypeInfo, v18);
    this = (BattleLogicFunction_o *)sub_B0D8A4(&BattleActionEffect_UpdateAllInfo_TypeInfo, v19);
    byte_4217057 = 1;
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
    v36 = (System_Func_WarBoardManager_WarBoardOnboardSkillTarget__WarBoardPieceData__o *)sub_B0D974(
                                                                                            System_Func_BattleBuffData_BuffData__BattleBuffData_BuffData__TypeInfo,
                                                                                            v34,
                                                                                            v35);
    System_Func_WarBoardManager_WarBoardOnboardSkillTarget__WarBoardPieceData____ctor(
      v36,
      v8,
      Method_BattleLogicFunction__FunctionSubFieldBuff_b__119_0__,
      (const MethodInfo_261A104 *)Method_System_Func_BattleBuffData_BuffData__BattleBuffData_BuffData___ctor__);
    v37 = (System_Collections_Generic_IEnumerable_TSource__o *)System_Linq_Enumerable__Select_WarBoardManager_WarBoardOnboardSkillTarget__WarBoardPieceData_(
                                                                 (System_Collections_Generic_IEnumerable_TSource__o *)data,
                                                                 (System_Func_TSource__TResult__o *)v36,
                                                                 (const MethodInfo_1B5200C *)Method_System_Linq_Enumerable_Select_BattleBuffData_BuffData__BattleBuffData_BuffData___);
    this = (BattleLogicFunction_o *)System_Linq_Enumerable__ToList_WarBoardManager_WarBoardOnboardSkillTarget_(
                                      v37,
                                      (const MethodInfo_1B59168 *)Method_System_Linq_Enumerable_ToList_BattleBuffData_BuffData___);
    if ( FunctionObject )
    {
      FunctionObject->fields.removeBuffList = (struct System_Collections_Generic_List_BattleBuffData_BuffData__o *)this;
      sub_B0D840(
        (BattleServantConfConponent_o *)&FunctionObject->fields.removeBuffList,
        (System_Int32_array **)this,
        v38,
        v39,
        v40,
        v41,
        v42,
        v43);
      v46 = BattleLogicFunction___c_TypeInfo;
      if ( (BYTE3(BattleLogicFunction___c_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !BattleLogicFunction___c_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(BattleLogicFunction___c_TypeInfo);
        v46 = BattleLogicFunction___c_TypeInfo;
      }
      static_fields = v46->static_fields;
      _9__119_1 = (System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *)static_fields->__9__119_1;
      if ( !_9__119_1 )
      {
        if ( (BYTE3(v46->vtable._0_Equals.methodPtr) & 4) != 0 && !v46->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(v46);
          static_fields = BattleLogicFunction___c_TypeInfo->static_fields;
        }
        v49 = (Il2CppObject *)static_fields->__9;
        _9__119_1 = (System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *)sub_B0D974(
                                                                                         System_Func_BattleBuffData_BuffData__bool__TypeInfo,
                                                                                         v44,
                                                                                         v45);
        System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool____ctor(
          _9__119_1,
          v49,
          Method_BattleLogicFunction___c__FunctionSubFieldBuff_b__119_1__,
          (const MethodInfo_26189B8 *)Method_System_Func_BattleBuffData_BuffData__bool___ctor__);
        v50 = BattleLogicFunction___c_TypeInfo->static_fields;
        v50->__9__119_1 = (struct System_Func_BattleBuffData_BuffData__bool__o *)_9__119_1;
        sub_B0D840(
          (BattleServantConfConponent_o *)&v50->__9__119_1,
          (System_Int32_array **)_9__119_1,
          v51,
          v52,
          v53,
          v54,
          v55,
          v56);
      }
      this = (BattleLogicFunction_o *)BasicHelper__Any_WarBoardData_SquareRangeSearch_(
                                        (System_Collections_Generic_List_T__o *)data,
                                        (System_Func_T__bool__o *)_9__119_1,
                                        (const MethodInfo_1707138 *)Method_BasicHelper_Any_BattleBuffData_BuffData___);
      if ( ((unsigned __int8)this & 1) != 0 )
      {
        v59 = (BattleActionEffect_UpdateAllInfo_o *)sub_B0D974(BattleActionEffect_UpdateAllInfo_TypeInfo, v57, v58);
        BattleActionEffect_UpdateAllInfo___ctor(v59, 0LL);
        FunctionObject->fields.EffectProc = (struct BattleActionEffect_Base_o *)v59;
        sub_B0D840(
          (BattleServantConfConponent_o *)&FunctionObject->fields.EffectProc,
          (System_Int32_array **)v59,
          v60,
          v61,
          v62,
          v63,
          v64,
          v65);
      }
      if ( mainAction )
      {
        BattleActionData__setBuffData(mainAction, FunctionObject, dataVals_k__BackingField, 0LL);
        return;
      }
    }
LABEL_28:
    sub_B0D97C(this);
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
  __int64 v16; // x1
  __int64 v17; // x2
  BattleBuffData_FieldChangeData_o *tamamocatTreasureDeviceIds; // x22
  struct BattleData_o *data; // x8
  Generator_BGFromFieldChangeBGBuff_o *v20; // x21
  const MethodInfo *v21; // x3
  BattleData_o *v22; // x21
  Generator_BGMFromFieldChangeBGBuff_o *v23; // x23
  const MethodInfo *v24; // x3

  v10 = this;
  if ( (byte_4217056 & 1) == 0 )
  {
    sub_B0D8A4(&Generator_BGFromFieldChangeBGBuff_TypeInfo, args);
    this = (BattleLogicFunction_o *)sub_B0D8A4(&Generator_BGMFromFieldChangeBGBuff_TypeInfo, v11);
    byte_4217056 = 1;
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
    sub_B0D97C(this);
  }
  if ( !tamamocatTreasureDeviceIds )
    goto LABEL_17;
  if ( tamamocatTreasureDeviceIds->fields.bgId >= 1 )
  {
    v20 = (Generator_BGFromFieldChangeBGBuff_o *)sub_B0D974(Generator_BGFromFieldChangeBGBuff_TypeInfo, v16, v17);
    Generator_BGFromFieldChangeBGBuff___ctor(v20, tamamocatTreasureDeviceIds, 0LL);
    BattleLogicFunction__FunctionQuickChangeBG(v10, args, (Generator_Background_o *)v20, v21);
  }
  if ( tamamocatTreasureDeviceIds->fields.bgmId >= 1 )
  {
    v22 = v10->fields.data;
    v23 = (Generator_BGMFromFieldChangeBGBuff_o *)sub_B0D974(Generator_BGMFromFieldChangeBGBuff_TypeInfo, v16, v17);
    Generator_BGMFromFieldChangeBGBuff___ctor(v23, v22, tamamocatTreasureDeviceIds, 0LL);
    BattleLogicFunction__FunctionChangeBgm(v10, args, (Generator_BGM_o *)v23, v24);
  }
}


void __fastcall BattleLogicFunction__FunctionUpdateEntryMaxCountEachTurn(
        BattleLogicFunction_o *this,
        DataVals_o *baseVals,
        const MethodInfo *method)
{
  struct BattleData_o *data; // x19

  if ( !baseVals || (data = this->fields.data, this = (BattleLogicFunction_o *)DataVals__GetValue(baseVals, 0LL), !data) )
    sub_B0D97C(this);
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
    sub_B0D97C(this);
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

  if ( (byte_421702B & 1) == 0 )
  {
    this = (BattleLogicFunction_o *)sub_B0D8A4(&System_Math_TypeInfo, dataVals);
    byte_421702B = 1;
  }
  if ( !dataVals )
    goto LABEL_11;
  this = (BattleLogicFunction_o *)DataVals__isParam(dataVals, 116, 0LL);
  if ( ((unsigned __int8)this & 1) == 0 )
    return healPoint;
  if ( !targetSvtData )
LABEL_11:
    sub_B0D97C(this);
  MaxHp = BattleServantData__getMaxHp(targetSvtData, 0LL);
  v9 = ((__int64 (__fastcall *)(BattleServantData_o *, Il2CppMethodPointer))targetSvtData->klass->vtable._13_get_resultHp.method)(
         targetSvtData,
         targetSvtData->klass->vtable._14_set_resultHp.methodPtr);
  if ( (BYTE3(System_Math_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !System_Math_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(System_Math_TypeInfo);
  return System_Math__Min_44514512(healPoint, MaxHp - v9, 0LL);
}


BuffEntity_o *__fastcall BattleLogicFunction__GetBuffEntity(
        BattleLogicFunction_o *this,
        FunctionEntity_o *funcEnt,
        const MethodInfo *method)
{
  __int64 v4; // x1
  __int64 v5; // x1
  DataMasterBase_WarMaster__WarEntity__int__o *Master_WarQuestSelectionMaster; // x0
  struct System_Int32_array *vals; // x8
  __int64 v9; // x0

  if ( (byte_4217010 & 1) == 0 )
  {
    sub_B0D8A4(&Method_DataManager_GetMaster_BuffMaster___, funcEnt);
    sub_B0D8A4(&DataManager_TypeInfo, v4);
    sub_B0D8A4(&Method_DataMasterBase_BuffMaster__BuffEntity__int__GetEntity__, v5);
    byte_4217010 = 1;
  }
  if ( (BYTE3(DataManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_WarQuestSelectionMaster = (DataMasterBase_WarMaster__WarEntity__int__o *)DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_1714548 *)Method_DataManager_GetMaster_BuffMaster___);
  if ( !funcEnt )
    goto LABEL_11;
  vals = funcEnt->fields.vals;
  if ( !vals )
    goto LABEL_11;
  if ( !vals->max_length )
  {
    v9 = sub_B0D9A8(Master_WarQuestSelectionMaster);
    sub_B0D948(v9, 0LL);
  }
  if ( !Master_WarQuestSelectionMaster )
LABEL_11:
    sub_B0D97C(Master_WarQuestSelectionMaster);
  return (BuffEntity_o *)DataMasterBase_WarMaster__WarEntity__int___GetEntity(
                           Master_WarQuestSelectionMaster,
                           vals->m_Items[1],
                           (const MethodInfo_2669BD4 *)Method_DataMasterBase_BuffMaster__BuffEntity__int__GetEntity__);
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
  DataMasterBase_WarMaster__WarEntity__int__o *v23; // x23
  __int64 v24; // x24
  __int64 v25; // x25
  __int64 v26; // x1
  __int64 v27; // x2
  unsigned __int64 v28; // x24
  System_Collections_Generic_List_int__o *v29; // x23
  System_Collections_Generic_IEnumerable_TSource__o *v30; // x0
  __int64 v31; // x8
  unsigned __int64 v32; // x25
  __int64 v33; // x8
  int32_t v34; // w20
  unsigned __int64 v35; // x22
  int32_t v36; // w1
  const MethodInfo_2FAFF00 *v37; // x2
  __int64 v39; // x0
  int32_t v40; // [xsp+Ch] [xbp-54h]
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v41; // 0:x0.16

  if ( (byte_421704D & 1) == 0 )
  {
    sub_B0D8A4(&Method_DataManager_GetMasterData_ServantMaster___, baseVals);
    sub_B0D8A4(&Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__, v6);
    sub_B0D8A4(&Method_System_Linq_Enumerable_Repeat_int___, v7);
    sub_B0D8A4(&Method_System_Linq_Enumerable_ToArray_int___, v8);
    sub_B0D8A4(&Method_System_Collections_Generic_List_int__AddRange__, v9);
    sub_B0D8A4(&Method_System_Collections_Generic_List_int__Add__, v10);
    sub_B0D8A4(&Method_System_Collections_Generic_List_int__Contains__, v11);
    sub_B0D8A4(&Method_System_Collections_Generic_List_int__ToArray__, v12);
    sub_B0D8A4(&Method_System_Collections_Generic_List_int___ctor__, v13);
    sub_B0D8A4(&Method_System_Collections_Generic_List_int__get_Count__, v14);
    sub_B0D8A4(&Method_System_Collections_Generic_List_int__get_Item__, v15);
    sub_B0D8A4(&System_Collections_Generic_List_int__TypeInfo, v16);
    sub_B0D8A4(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v17);
    sub_B0D8A4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v18);
    byte_421704D = 1;
  }
  v19 = (System_Collections_Generic_List_int__o *)sub_B0D974(
                                                    System_Collections_Generic_List_int__TypeInfo,
                                                    baseVals,
                                                    targetServant);
  System_Collections_Generic_List_int____ctor(
    v19,
    (const MethodInfo_2FAF1A4 *)Method_System_Collections_Generic_List_int___ctor__);
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
      v36 = CardIndex - 1;
    }
    else
    {
      CardIndividuality = BattleRandom__getNext(5, 0LL);
      if ( !v19 )
        goto LABEL_52;
      v36 = CardIndividuality;
    }
    v37 = (const MethodInfo_2FAFF00 *)Method_System_Collections_Generic_List_int__Add__;
    goto LABEL_49;
  }
  IdArrayFromIndividuality = CardMaster__getIdArrayFromIndividuality(CardIndividuality, 0LL);
  CardIndividuality = (unsigned __int64)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A71064 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !CardIndividuality )
    goto LABEL_52;
  CardIndividuality = (unsigned __int64)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                          (DataManager_o *)CardIndividuality,
                                          (const MethodInfo_17145A8 *)Method_DataManager_GetMasterData_ServantMaster___);
  if ( !targetServant )
    goto LABEL_52;
  v23 = (DataMasterBase_WarMaster__WarEntity__int__o *)CardIndividuality;
  v25 = *(_QWORD *)&targetServant->fields.svtId.fields.currentCryptoKey;
  v24 = *(_QWORD *)&targetServant->fields.svtId.fields.fakeValue;
  if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  }
  *(_QWORD *)&v41.fields.currentCryptoKey = v25;
  *(_QWORD *)&v41.fields.fakeValue = v24;
  CardIndividuality = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44162576(v41, 0LL);
  if ( !v23 )
    goto LABEL_52;
  CardIndividuality = (unsigned __int64)DataMasterBase_WarMaster__WarEntity__int___GetEntity(
                                          v23,
                                          CardIndividuality,
                                          (const MethodInfo_2669BD4 *)Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
  if ( !CardIndividuality )
    goto LABEL_52;
  v28 = *(_QWORD *)(CardIndividuality + 144);
  v29 = (System_Collections_Generic_List_int__o *)sub_B0D974(System_Collections_Generic_List_int__TypeInfo, v26, v27);
  System_Collections_Generic_List_int____ctor(
    v29,
    (const MethodInfo_2FAF1A4 *)Method_System_Collections_Generic_List_int___ctor__);
  CardIndividuality = (unsigned __int64)BattleServantData__get_BuffData(targetServant, 0LL);
  if ( !CardIndividuality )
    goto LABEL_52;
  CardIndividuality = (unsigned __int64)BattleBuffData__GetCommandCardTypeChangeBuff(
                                          (BattleBuffData_o *)CardIndividuality,
                                          0LL);
  v40 = CardIndex;
  if ( CardIndividuality )
  {
    if ( !v28 )
      goto LABEL_52;
    v30 = (System_Collections_Generic_IEnumerable_TSource__o *)System_Linq_Enumerable__Repeat_int_(
                                                                 *(_DWORD *)(CardIndividuality + 28),
                                                                 *(_DWORD *)(v28 + 24),
                                                                 (const MethodInfo_1B4EEF4 *)Method_System_Linq_Enumerable_Repeat_int___);
    CardIndividuality = (unsigned __int64)System_Linq_Enumerable__ToArray_int_(
                                            v30,
                                            (const MethodInfo_1B560F0 *)Method_System_Linq_Enumerable_ToArray_int___);
    v28 = CardIndividuality;
  }
  if ( !IdArrayFromIndividuality )
    goto LABEL_52;
  v31 = *(_QWORD *)&IdArrayFromIndividuality->max_length;
  if ( (int)v31 >= 1 )
  {
    v32 = 0LL;
    while ( 1 )
    {
      if ( v32 >= (unsigned int)v31 )
        goto LABEL_51;
      if ( !v28 )
        goto LABEL_52;
      v33 = *(_QWORD *)(v28 + 24);
      if ( (int)v33 >= 1 )
        break;
LABEL_29:
      LODWORD(v31) = IdArrayFromIndividuality->max_length;
      if ( (__int64)++v32 >= (int)v31 )
        goto LABEL_30;
    }
    v34 = IdArrayFromIndividuality->m_Items[v32 + 1];
    v35 = 0LL;
    while ( v35 < (unsigned int)v33 )
    {
      if ( v34 == *(_DWORD *)(v28 + 32 + 4 * v35) )
      {
        if ( !v29 )
          goto LABEL_52;
        CardIndividuality = System_Collections_Generic_List_int___Contains(
                              v29,
                              v35,
                              (const MethodInfo_2FB0354 *)Method_System_Collections_Generic_List_int__Contains__);
        if ( (CardIndividuality & 1) == 0 )
          System_Collections_Generic_List_int___Add(
            v29,
            v35,
            (const MethodInfo_2FAFF00 *)Method_System_Collections_Generic_List_int__Add__);
      }
      LODWORD(v33) = *(_DWORD *)(v28 + 24);
      if ( (__int64)++v35 >= (int)v33 )
        goto LABEL_29;
    }
LABEL_51:
    v39 = sub_B0D9A8(CardIndividuality);
    sub_B0D948(v39, 0LL);
  }
LABEL_30:
  if ( !v29 )
    goto LABEL_52;
  CardIndividuality = (unsigned int)v29->fields._size;
  if ( (int)CardIndividuality < 1 )
  {
LABEL_38:
    if ( v19 )
      return System_Collections_Generic_List_int___ToArray(
               v19,
               (const MethodInfo_2FB200C *)Method_System_Collections_Generic_List_int__ToArray__);
    goto LABEL_52;
  }
  if ( !v40 )
  {
    CardIndividuality = BattleRandom__getNext(CardIndividuality, 0LL);
    if ( v29->fields._size <= (unsigned int)CardIndividuality )
      System_ThrowHelper__ThrowArgumentOutOfRangeException_41496008(0LL);
    if ( v19 )
    {
      v36 = v29->fields._items->m_Items[(int)CardIndividuality + 1];
      v37 = (const MethodInfo_2FAFF00 *)Method_System_Collections_Generic_List_int__Add__;
LABEL_49:
      System_Collections_Generic_List_int___Add(v19, v36, v37);
      return System_Collections_Generic_List_int___ToArray(
               v19,
               (const MethodInfo_2FB200C *)Method_System_Collections_Generic_List_int__ToArray__);
    }
LABEL_52:
    sub_B0D97C(CardIndividuality);
  }
  if ( !v19 )
    goto LABEL_52;
  System_Collections_Generic_List_int___AddRange(
    v19,
    (System_Collections_Generic_IEnumerable_T__o *)v29,
    (const MethodInfo_2FB0154 *)Method_System_Collections_Generic_List_int__AddRange__);
  return System_Collections_Generic_List_int___ToArray(
           v19,
           (const MethodInfo_2FB200C *)Method_System_Collections_Generic_List_int__ToArray__);
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
  _QWORD **v13; // x20
  __int64 v14; // x19
  __int16 v15; // w8
  __int64 v16; // x19
  __int64 v17; // x19
  __int64 v18; // x19

  if ( (byte_421701E & 1) == 0 )
  {
    sub_B0D8A4(&Method_System_Array_Empty_BattleLogicFunctionProcess_FunctionTargetCheck___, args);
    sub_B0D8A4(&BattleLogicFunctionProcess_DependFunctionUnitCheck_TypeInfo, v9);
    byte_421701E = 1;
  }
  v10 = (BattleLogicFunctionProcess_DependFunctionUnitCheck_o *)sub_B0D974(
                                                                  BattleLogicFunctionProcess_DependFunctionUnitCheck_TypeInfo,
                                                                  args,
                                                                  mainAction);
  BattleLogicFunctionProcess_DependFunctionUnitCheck___ctor(v10, this, args, dataVal, 0LL);
  if ( !v10 )
    sub_B0D97C(v11);
  if ( BattleLogicFunctionProcess_FunctionUnitCheck__checkCondtion(
         (BattleLogicFunctionProcess_FunctionUnitCheck_o *)v10,
         mainAction,
         0LL) )
  {
    p_funcTargetArray_k__BackingField = (System_Collections_Generic_IEnumerable_BattleLogicFunctionProcess_FunctionTargetCheck__o **)&v10->fields._funcTargetArray_k__BackingField;
  }
  else
  {
    v13 = (_QWORD **)Method_System_Array_Empty_BattleLogicFunctionProcess_FunctionTargetCheck___;
    v14 = **((_QWORD **)Method_System_Array_Empty_BattleLogicFunctionProcess_FunctionTargetCheck___ + 6);
    v15 = *(_WORD *)(v14 + 306);
    if ( (v15 & 1) == 0 )
    {
      sub_AA65A4(**((_QWORD **)Method_System_Array_Empty_BattleLogicFunctionProcess_FunctionTargetCheck___ + 6));
      v15 = *(_WORD *)(v14 + 306);
    }
    if ( (v15 & 0x400) != 0 )
    {
      v16 = *v13[6];
      if ( (*(_BYTE *)(v16 + 306) & 1) == 0 )
        sub_AA65A4(*v13[6]);
      if ( !*(_DWORD *)(v16 + 224) )
      {
        v17 = *v13[6];
        if ( (*(_BYTE *)(v17 + 306) & 1) == 0 )
          sub_AA65A4(*v13[6]);
        j_il2cpp_runtime_class_init_0(v17);
      }
    }
    v18 = *v13[6];
    if ( (*(_BYTE *)(v18 + 306) & 1) == 0 )
      sub_AA65A4(*v13[6]);
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
    sub_B0D97C(this);
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
  __int64 v18; // x1
  __int64 v19; // x2
  System_Collections_Generic_List_VoiceCondType_Type__o *v20; // x24
  _QWORD *DependDataValsArray; // x0
  __int64 v22; // x1
  __int64 v23; // x2
  RemovedBuffInfoGroup_o *v24; // x22
  const MethodInfo *v25; // x4
  __int64 v26; // x8
  unsigned __int64 v27; // x9
  int v28; // w26
  DataVals_o *v29; // x25
  __int64 v30; // x8
  _QWORD *v31; // x24
  unsigned __int64 v32; // x10
  int *v33; // x11
  __int64 v34; // x0
  __int64 v35; // x24
  __int64 v36; // x8
  unsigned __int64 v37; // x10
  int *v38; // x11
  __int64 v39; // x0
  __int64 v40; // x8
  unsigned __int64 v41; // x10
  int *v42; // x11
  __int64 v43; // x0
  __int64 v44; // x0
  __int64 v45; // x26
  __int64 v46; // x0
  int32_t v47; // w26
  FunctionEntity_o *funcEnt; // x27
  int32_t funcIndex; // w28
  bool IsCommandSideEffect; // w0
  BattleActionData_o *v51; // x0
  __int64 v52; // x0
  __int64 v53; // x8
  unsigned __int64 v54; // x10
  int *v55; // x11
  __int64 v56; // x0
  int v57; // w8
  unsigned __int64 v58; // x9
  __int64 v60; // x0
  const MethodInfo *v61; // [xsp+0h] [xbp-90h]
  _QWORD *v62; // [xsp+10h] [xbp-80h]
  int v63; // [xsp+1Ch] [xbp-74h]
  unsigned __int64 v64; // [xsp+20h] [xbp-70h]
  _DWORD v66[1]; // [xsp+30h] [xbp-60h]
  int v67; // [xsp+34h] [xbp-5Ch]
  RemovedBuffInfo_o *subBuffInfo; // [xsp+38h] [xbp-58h] BYREF

  if ( (byte_421704F & 1) == 0 )
  {
    sub_B0D8A4(&System_IDisposable_TypeInfo, procArg);
    sub_B0D8A4(&System_Collections_Generic_IEnumerable_BattleLogicFunctionProcess_FunctionTargetCheck__TypeInfo, v8);
    sub_B0D8A4(&System_Collections_Generic_IEnumerator_BattleLogicFunctionProcess_FunctionTargetCheck__TypeInfo, v9);
    sub_B0D8A4(&System_Collections_IEnumerator_TypeInfo, v10);
    sub_B0D8A4(&Method_System_Collections_Generic_List_FuncList_TYPE__Add__, v11);
    sub_B0D8A4(&Method_System_Collections_Generic_List_FuncList_TYPE___ctor__, v12);
    sub_B0D8A4(&Method_System_Collections_Generic_List_BattleBuffData_BuffData___ctor__, v13);
    sub_B0D8A4(&System_Collections_Generic_List_FuncList_TYPE__TypeInfo, v14);
    sub_B0D8A4(&System_Collections_Generic_List_BattleBuffData_BuffData__TypeInfo, v15);
    sub_B0D8A4(&RemovedBuffInfoGroup_TypeInfo, v16);
    byte_421704F = 1;
  }
  subBuffInfo = 0LL;
  v67 = 0;
  v17 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B0D974(
                                                                                                  System_Collections_Generic_List_BattleBuffData_BuffData__TypeInfo,
                                                                                                  procArg,
                                                                                                  mainAction);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v17,
    (const MethodInfo_2FC4A24 *)Method_System_Collections_Generic_List_BattleBuffData_BuffData___ctor__);
  v20 = (System_Collections_Generic_List_VoiceCondType_Type__o *)sub_B0D974(
                                                                   System_Collections_Generic_List_FuncList_TYPE__TypeInfo,
                                                                   v18,
                                                                   v19);
  System_Collections_Generic_List_VoiceCondType_Type____ctor(
    v20,
    (const MethodInfo_2FB217C *)Method_System_Collections_Generic_List_FuncList_TYPE___ctor__);
  if ( !v20 )
    goto LABEL_57;
  System_Collections_Generic_List_VoiceCondType_Type___Add(
    v20,
    2,
    (const MethodInfo_2FB2ED8 *)Method_System_Collections_Generic_List_FuncList_TYPE__Add__);
  v24 = (RemovedBuffInfoGroup_o *)sub_B0D974(RemovedBuffInfoGroup_TypeInfo, v22, v23);
  RemovedBuffInfoGroup___ctor(v24, 0LL);
  if ( !baseVals )
    goto LABEL_57;
  DependDataValsArray = DataVals__GetDependDataValsArray(
                          baseVals,
                          (System_Collections_Generic_List_FuncList_TYPE__o *)v20,
                          1,
                          0LL);
  if ( !DependDataValsArray )
    goto LABEL_57;
  v26 = DependDataValsArray[3];
  if ( (int)v26 >= 1 )
  {
    v27 = 0LL;
    v28 = 0;
    v62 = DependDataValsArray;
    while ( 1 )
    {
      v63 = v28;
      if ( v27 >= (unsigned int)v26 )
      {
        v60 = sub_B0D9A8(DependDataValsArray);
        sub_B0D948(v60, 0LL);
      }
      v29 = (DataVals_o *)DependDataValsArray[v27 + 4];
      v64 = v27;
      DependDataValsArray = BattleLogicFunction__GetDependFuncTargets(this, procArg, mainAction, v29, v25);
      if ( !DependDataValsArray )
        break;
      v30 = *DependDataValsArray;
      v31 = DependDataValsArray;
      if ( *(_WORD *)(*DependDataValsArray + 298LL) )
      {
        v32 = 0LL;
        v33 = (int *)(*(_QWORD *)(v30 + 176) + 8LL);
        while ( *((System_Collections_Generic_IEnumerable_BattleLogicFunctionProcess_FunctionTargetCheck__c **)v33 - 1) != System_Collections_Generic_IEnumerable_BattleLogicFunctionProcess_FunctionTargetCheck__TypeInfo )
        {
          ++v32;
          v33 += 4;
          if ( v32 >= *(unsigned __int16 *)(*DependDataValsArray + 298LL) )
            goto LABEL_20;
        }
        v34 = v30 + 16LL * *v33 + 312;
      }
      else
      {
LABEL_20:
        v34 = sub_AA67A0(
                DependDataValsArray,
                System_Collections_Generic_IEnumerable_BattleLogicFunctionProcess_FunctionTargetCheck__TypeInfo,
                0LL);
      }
      v35 = (*(__int64 (__fastcall **)(_QWORD *, _QWORD))v34)(v31, *(_QWORD *)(v34 + 8));
      if ( !v35 )
        sub_B0D97C(0LL);
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
          v39 = sub_AA67A0(v35, System_Collections_IEnumerator_TypeInfo, 0LL);
        }
        if ( ((*(__int64 (__fastcall **)(__int64, _QWORD))v39)(v35, *(_QWORD *)(v39 + 8)) & 1) == 0 )
          break;
        v40 = *(_QWORD *)v35;
        if ( *(_WORD *)(*(_QWORD *)v35 + 298LL) )
        {
          v41 = 0LL;
          v42 = (int *)(*(_QWORD *)(v40 + 176) + 8LL);
          while ( *((System_Collections_Generic_IEnumerator_BattleLogicFunctionProcess_FunctionTargetCheck__c **)v42 - 1) != System_Collections_Generic_IEnumerator_BattleLogicFunctionProcess_FunctionTargetCheck__TypeInfo )
          {
            ++v41;
            v42 += 4;
            if ( v41 >= *(unsigned __int16 *)(*(_QWORD *)v35 + 298LL) )
              goto LABEL_34;
          }
          v43 = v40 + 16LL * *v42 + 312;
        }
        else
        {
LABEL_34:
          v43 = sub_AA67A0(
                  v35,
                  System_Collections_Generic_IEnumerator_BattleLogicFunctionProcess_FunctionTargetCheck__TypeInfo,
                  0LL);
        }
        v44 = (*(__int64 (__fastcall **)(__int64, _QWORD))v43)(v35, *(_QWORD *)(v43 + 8));
        v45 = v44;
        if ( !v44 )
          sub_B0D97C(0LL);
        v46 = (*(__int64 (__fastcall **)(__int64, BattleActionData_o *, _QWORD))(*(_QWORD *)v44 + 392LL))(
                v44,
                mainAction,
                *(_QWORD *)(*(_QWORD *)v44 + 400LL));
        if ( (v46 & 1) != 0 )
        {
          if ( !v29 )
            sub_B0D97C(v46);
          if ( !procArg )
            sub_B0D97C(v46);
          v47 = *(_DWORD *)(v45 + 32);
          funcEnt = v29->fields.funcEnt;
          funcIndex = v29->fields.funcIndex;
          IsCommandSideEffect = BattleLogicFunction_ProcListInArgs__get_IsCommandSideEffect(procArg, 0LL);
          v51 = BattleLogicFunction__functionSubState(
                  this,
                  v47,
                  funcEnt,
                  v29,
                  funcIndex,
                  IsCommandSideEffect,
                  &subBuffInfo,
                  procArg,
                  v61);
          if ( !mainAction )
            sub_B0D97C(v51);
          BattleActionData__addAction(mainAction, v51, 0LL);
          if ( !v24 )
            sub_B0D97C(v52);
          RemovedBuffInfoGroup__Register(v24, v47, subBuffInfo, 0LL);
        }
      }
      v66[v63] = 165;
      v28 = ++v67;
      v53 = *(_QWORD *)v35;
      if ( *(_WORD *)(*(_QWORD *)v35 + 298LL) )
      {
        v54 = 0LL;
        v55 = (int *)(*(_QWORD *)(v53 + 176) + 8LL);
        while ( *((System_IDisposable_c **)v55 - 1) != System_IDisposable_TypeInfo )
        {
          ++v54;
          v55 += 4;
          if ( v54 >= *(unsigned __int16 *)(*(_QWORD *)v35 + 298LL) )
            goto LABEL_48;
        }
        v56 = v53 + 16LL * *v55 + 312;
      }
      else
      {
LABEL_48:
        v56 = sub_AA67A0(v35, System_IDisposable_TypeInfo, 0LL);
      }
      (*(void (__fastcall **)(__int64, _QWORD))v56)(v35, *(_QWORD *)(v56 + 8));
      if ( v28 )
      {
        v57 = v28 - 1;
        DependDataValsArray = v62;
        v58 = v64;
        if ( v66[v28 - 1] == 165 )
        {
          --v28;
          v67 = v57;
        }
      }
      else
      {
        DependDataValsArray = v62;
        v58 = v64;
      }
      LODWORD(v26) = *((_DWORD *)DependDataValsArray + 6);
      v27 = v58 + 1;
      if ( (__int64)v27 >= (int)v26 )
        return v24;
    }
LABEL_57:
    sub_B0D97C(DependDataValsArray);
  }
  return v24;
}


bool __fastcall BattleLogicFunction__IsAddStateFieldFlag(
        BattleLogicFunction_o *this,
        BattleBuffData_BuffData_o *buffData,
        const MethodInfo *method)
{
  BattleLogicFunction_o *v4; // x20
  UnityEngine_Object_o *logic; // x21

  v4 = this;
  if ( (byte_421701D & 1) == 0 )
  {
    this = (BattleLogicFunction_o *)sub_B0D8A4(&UnityEngine_Object_TypeInfo, buffData);
    byte_421701D = 1;
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
      sub_B0D97C(this);
    }
  }
  return 1;
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
    sub_B0D97C(data);
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

  if ( (byte_4217020 & 1) == 0 )
  {
    sub_B0D8A4(&Method_DataManager_GetMaster_ConstantStrMaster___, *(_QWORD *)&targetId);
    sub_B0D8A4(&DataManager_TypeInfo, v9);
    sub_B0D8A4(&StringLiteral_5809/*"EXTEND_TURN_BUFF_TYPE"*/, v10);
    byte_4217020 = 1;
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
  data = (BattleData_o *)DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_1714548 *)Method_DataManager_GetMaster_ConstantStrMaster___);
  if ( !buffEnt || !data )
LABEL_32:
    sub_B0D97C(data);
  data = (BattleData_o *)ConstantStrMaster__ExistValueArray(
                           (ConstantStrMaster_o *)data,
                           (System_String_o *)StringLiteral_5809/*"EXTEND_TURN_BUFF_TYPE"*/,
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
  System_Int32_array *ValueArray; // x0
  System_Collections_Generic_IEnumerable_T__o *v22; // x1

  if ( (byte_4217012 & 1) == 0 )
  {
    sub_B0D8A4(&Method_DataManager_GetMasterData_ConstantStrMaster___, *(_QWORD *)&buffType);
    sub_B0D8A4(&Method_System_Collections_Generic_List_int__AddRange__, v8);
    sub_B0D8A4(&Method_System_Collections_Generic_List_int__Contains__, v9);
    sub_B0D8A4(&Method_System_Collections_Generic_List_int___ctor__, v10);
    sub_B0D8A4(&System_Collections_Generic_List_int__TypeInfo, v11);
    sub_B0D8A4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v12);
    byte_4217012 = 1;
  }
  Instance = (DataManager_o *)*typeList;
  if ( !*typeList )
  {
    v14 = (System_Collections_Generic_List_int__o *)sub_B0D974(
                                                      System_Collections_Generic_List_int__TypeInfo,
                                                      *(_QWORD *)&buffType,
                                                      keyName);
    System_Collections_Generic_List_int____ctor(
      v14,
      (const MethodInfo_2FAF1A4 *)Method_System_Collections_Generic_List_int___ctor__);
    *typeList = v14;
    sub_B0D840((BattleServantConfConponent_o *)typeList, (System_Int32_array **)v14, v15, v16, v17, v18, v19, v20);
    Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A71064 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( Instance )
    {
      Instance = (DataManager_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                    Instance,
                                    (const MethodInfo_17145A8 *)Method_DataManager_GetMasterData_ConstantStrMaster___);
      if ( Instance )
      {
        ValueArray = ConstantStrMaster__GetValueArray((ConstantStrMaster_o *)Instance, keyName, 0LL, 0LL);
        if ( ValueArray )
        {
          v22 = (System_Collections_Generic_IEnumerable_T__o *)ValueArray;
          Instance = (DataManager_o *)*typeList;
          if ( !*typeList )
            goto LABEL_11;
          System_Collections_Generic_List_int___AddRange(
            (System_Collections_Generic_List_int__o *)Instance,
            v22,
            (const MethodInfo_2FB0154 *)Method_System_Collections_Generic_List_int__AddRange__);
        }
        Instance = (DataManager_o *)*typeList;
        if ( *typeList )
          return System_Collections_Generic_List_int___Contains(
                   (System_Collections_Generic_List_int__o *)Instance,
                   buffType,
                   (const MethodInfo_2FB0354 *)Method_System_Collections_Generic_List_int__Contains__);
      }
    }
LABEL_11:
    sub_B0D97C(Instance);
  }
  return System_Collections_Generic_List_int___Contains(
           (System_Collections_Generic_List_int__o *)Instance,
           buffType,
           (const MethodInfo_2FB0354 *)Method_System_Collections_Generic_List_int__Contains__);
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

  if ( (byte_4217053 & 1) == 0 )
  {
    sub_B0D8A4(&BattleActionData_TypeInfo, baseVals);
    sub_B0D8A4(&StringLiteral_8469/*"LOSS_COMMAND_SPELL"*/, v6);
    byte_4217053 = 1;
  }
  v7 = sub_B0D974(BattleActionData_TypeInfo, baseVals, actionData);
  BattleActionData___ctor((BattleActionData_o *)v7, 0LL);
  if ( !actionData )
    goto LABEL_8;
  if ( !v7 )
    goto LABEL_8;
  *(_DWORD *)(v7 + 32) = actionData->fields.actorId;
  *(_DWORD *)(v7 + 36) = actionData->fields.targetId;
  BattleActionData__setStateField((BattleActionData_o *)v7, 0LL);
  v9 = (System_Int32_array **)StringLiteral_8469/*"LOSS_COMMAND_SPELL"*/;
  *(_QWORD *)(v7 + 64) = StringLiteral_8469/*"LOSS_COMMAND_SPELL"*/;
  sub_B0D840((BattleServantConfConponent_o *)(v7 + 64), v9, v10, v11, v12, v13, v14, v15);
  skillInfo = (System_Int32_array **)actionData->fields.skillInfo;
  *(_QWORD *)(v7 + 144) = skillInfo;
  sub_B0D840((BattleServantConfConponent_o *)(v7 + 144), skillInfo, v17, v18, v19, v20, v21, v22);
  if ( !baseVals || (v23 = *(_QWORD *)(v7 + 144), Value = DataVals__GetValue(baseVals, 0LL), !v23) )
LABEL_8:
    sub_B0D97C(Value);
  *(_DWORD *)(v23 + 100) = Value;
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
    sub_B0D97C(this);
  }
  popupText = funcEnt->fields.popupText;
  actBuffData->fields.popLabel = popupText;
  sub_B0D840(
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
  sub_B0D840(
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
  System_String_array **v14; // x2
  System_String_array **v15; // x3
  System_Boolean_array **v16; // x4
  System_Int32_array **v17; // x5
  System_Int32_array *v18; // x6
  System_Int32_array *v19; // x7
  System_String_array **v20; // x2
  System_String_array **v21; // x3
  System_Boolean_array **v22; // x4
  System_Int32_array **v23; // x5
  System_Int32_array *v24; // x6
  System_Int32_array *v25; // x7

  if ( (byte_4217024 & 1) == 0 )
  {
    sub_B0D8A4(&BattleActionData_BuffData_TypeInfo, *(_QWORD *)&targetId);
    byte_4217024 = 1;
  }
  v12 = sub_B0D974(BattleActionData_BuffData_TypeInfo, *(_QWORD *)&targetId, *(_QWORD *)&funcIndex);
  BattleActionData_BuffData___ctor((BattleActionData_BuffData_o *)v12, 0LL);
  if ( !v12 )
    sub_B0D97C(v13);
  *(_DWORD *)(v12 + 40) = targetId;
  *(_DWORD *)(v12 + 16) = funcIndex;
  *(_DWORD *)(v12 + 64) = iconId;
  *(_QWORD *)(v12 + 56) = popupText;
  sub_B0D840((BattleServantConfConponent_o *)(v12 + 56), (System_Int32_array **)popupText, v14, v15, v16, v17, v18, v19);
  *(_DWORD *)(v12 + 68) = popupTextColor;
  *(_QWORD *)(v12 + 72) = 0LL;
  sub_B0D840((BattleServantConfConponent_o *)(v12 + 72), 0LL, v20, v21, v22, v23, v24, v25);
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
  __int64 v24; // x1
  __int64 v25; // x2
  Il2CppObject *currentValue; // x21
  System_Collections_Generic_Dictionary_int__int__o *v27; // x20
  __int64 v28; // x0
  System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *klass; // x0
  __int64 IsNullOrEmpty; // x0
  __int64 v31; // x8
  unsigned __int64 v32; // x27
  System_Collections_ICollection_o *v33; // x22
  unsigned __int64 monitor; // x8
  unsigned __int64 v35; // x26
  signed __int64 v36; // x24
  System_Collections_ICollection_o *v37; // x28
  _BOOL8 v38; // x0
  int32_t v39; // w23
  int32_t v40; // w0
  _BOOL8 v41; // x0
  Il2CppObject *current; // x22
  __int64 v43; // x21
  System_Int32_array *FamilyLinkageIdArray; // x0
  System_String_array **v45; // x2
  System_String_array **v46; // x3
  System_Boolean_array **v47; // x4
  System_Int32_array **v48; // x5
  System_Int32_array *v49; // x6
  System_Int32_array *v50; // x7
  System_Int32_array **v51; // x23
  System_Int32_array *FamilyLinkageTargetIdArray; // x0
  System_String_array **v53; // x2
  System_String_array **v54; // x3
  System_Boolean_array **v55; // x4
  System_Int32_array **v56; // x5
  System_Int32_array *v57; // x6
  System_Int32_array *v58; // x7
  System_Int32_array **v59; // x22
  __int64 v60; // x0
  int v61; // w21
  __int64 v62; // x0
  __int64 v63; // x0
  __int64 v64; // x0
  __int64 v65; // x0
  __int64 v66; // x0
  __int64 v67; // x0
  __int64 v68; // x0
  __int64 v69; // x0
  int v70; // w20
  int v71; // [xsp+4h] [xbp-BCh]
  _BYTE v72[32]; // [xsp+8h] [xbp-B8h] BYREF
  int v73; // [xsp+28h] [xbp-98h]
  System_Collections_Generic_List_Enumerator_T__o v74; // [xsp+30h] [xbp-90h] BYREF
  System_Collections_Generic_Dictionary_ValueCollection_Enumerator_TKey__TValue__o v75; // [xsp+50h] [xbp-70h] BYREF

  if ( (byte_4217050 & 1) == 0 )
  {
    sub_B0D8A4(&Method_System_Collections_Generic_Dictionary_int__int__ContainsKey__, procArg);
    sub_B0D8A4(&Method_System_Collections_Generic_Dictionary_int__int___ctor__, v8);
    sub_B0D8A4(&Method_System_Collections_Generic_Dictionary_int__int__get_Item__, v9);
    sub_B0D8A4(&Method_System_Collections_Generic_Dictionary_int__RemovedBuffInfo__get_Values__, v10);
    sub_B0D8A4(&Method_System_Collections_Generic_Dictionary_int__int__set_Item__, v11);
    sub_B0D8A4(&System_Collections_Generic_Dictionary_int__int__TypeInfo, v12);
    sub_B0D8A4(&Method_System_Collections_Generic_List_Enumerator_BattleBuffData_BuffData__Dispose__, v13);
    sub_B0D8A4(
      &Method_System_Collections_Generic_Dictionary_ValueCollection_Enumerator_int__RemovedBuffInfo__Dispose__,
      v14);
    sub_B0D8A4(&Method_System_Collections_Generic_List_Enumerator_BattleBuffData_BuffData__MoveNext__, v15);
    sub_B0D8A4(
      &Method_System_Collections_Generic_Dictionary_ValueCollection_Enumerator_int__RemovedBuffInfo__MoveNext__,
      v16);
    sub_B0D8A4(&Method_System_Collections_Generic_List_Enumerator_BattleBuffData_BuffData__get_Current__, v17);
    sub_B0D8A4(
      &Method_System_Collections_Generic_Dictionary_ValueCollection_Enumerator_int__RemovedBuffInfo__get_Current__,
      v18);
    sub_B0D8A4(&int_____TypeInfo, v19);
    sub_B0D8A4(&Method_System_Collections_Generic_List_BattleBuffData_BuffData__GetEnumerator__, v20);
    this = (BattleLogicFunction_o *)sub_B0D8A4(
                                      &Method_System_Collections_Generic_Dictionary_ValueCollection_int__RemovedBuffInfo__GetEnumerator__,
                                      v21);
    byte_4217050 = 1;
  }
  memset(&v75, 0, sizeof(v75));
  memset(&v74, 0, sizeof(v74));
  v73 = 0;
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
                                            (const MethodInfo_2E901CC *)Method_System_Collections_Generic_Dictionary_int__RemovedBuffInfo__get_Values__)) == 0LL )
    {
      sub_B0D97C(this);
    }
    System_Collections_Generic_Dictionary_ValueCollection_int__BillBoardGroupManager_GroupData___GetEnumerator(
      (System_Collections_Generic_Dictionary_ValueCollection_Enumerator_TKey__TValue__o *)v72,
      (System_Collections_Generic_Dictionary_ValueCollection_TKey__TValue__o *)this,
      (const MethodInfo_22CF168 *)Method_System_Collections_Generic_Dictionary_ValueCollection_int__RemovedBuffInfo__GetEnumerator__);
    v23 = 0;
    v75 = *(System_Collections_Generic_Dictionary_ValueCollection_Enumerator_TKey__TValue__o *)v72;
    while ( System_Collections_Generic_Dictionary_ValueCollection_Enumerator_int__BillBoardGroupManager_GroupData___MoveNext(
              &v75,
              (const MethodInfo_2811954 *)Method_System_Collections_Generic_Dictionary_ValueCollection_Enumerator_int__RemovedBuffInfo__MoveNext__) )
    {
      v71 = v23;
      currentValue = v75.fields.currentValue;
      v27 = (System_Collections_Generic_Dictionary_int__int__o *)sub_B0D974(
                                                                   System_Collections_Generic_Dictionary_int__int__TypeInfo,
                                                                   v24,
                                                                   v25);
      System_Collections_Generic_Dictionary_int__int____ctor(
        v27,
        (const MethodInfo_2E68CB0 *)Method_System_Collections_Generic_Dictionary_int__int___ctor__);
      if ( !currentValue )
        sub_B0D97C(v28);
      klass = (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)currentValue[1].klass;
      if ( !klass )
        sub_B0D97C(0LL);
      System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo___GetEnumerator(
        (System_Collections_Generic_List_Enumerator_T__o *)v72,
        klass,
        (const MethodInfo_2FC6564 *)Method_System_Collections_Generic_List_BattleBuffData_BuffData__GetEnumerator__);
      v74 = *(System_Collections_Generic_List_Enumerator_T__o *)v72;
      while ( 1 )
      {
        v41 = System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___MoveNext(
                &v74,
                (const MethodInfo_2112550 *)Method_System_Collections_Generic_List_Enumerator_BattleBuffData_BuffData__MoveNext__);
        if ( !v41 )
          break;
        current = v74.fields.current;
        if ( !v74.fields.current )
          sub_B0D97C(v41);
        if ( BattleBuffData_BuffData__IsFamilyBuff((BattleBuffData_BuffData_o *)v74.fields.current, 0LL) )
        {
          v43 = sub_B0D8BC(int_____TypeInfo, 2LL);
          FamilyLinkageIdArray = BattleBuffData_BuffData__get_FamilyLinkageIdArray(
                                   (BattleBuffData_BuffData_o *)current,
                                   0LL);
          if ( !v43 )
            sub_B0D97C(FamilyLinkageIdArray);
          v51 = (System_Int32_array **)FamilyLinkageIdArray;
          if ( FamilyLinkageIdArray )
          {
            FamilyLinkageIdArray = (System_Int32_array *)sub_B0D964(
                                                           FamilyLinkageIdArray,
                                                           *(_QWORD *)(*(_QWORD *)v43 + 64LL));
            if ( !FamilyLinkageIdArray )
            {
              v68 = sub_B0D99C(0LL);
              sub_B0D948(v68, 0LL);
            }
          }
          if ( !*(_DWORD *)(v43 + 24) )
          {
            v67 = sub_B0D9A8(FamilyLinkageIdArray);
            sub_B0D948(v67, 0LL);
          }
          *(_QWORD *)(v43 + 32) = v51;
          sub_B0D840((BattleServantConfConponent_o *)(v43 + 32), v51, v45, v46, v47, v48, v49, v50);
          FamilyLinkageTargetIdArray = BattleBuffData_BuffData__get_FamilyLinkageTargetIdArray(
                                         (BattleBuffData_BuffData_o *)current,
                                         0LL);
          v59 = (System_Int32_array **)FamilyLinkageTargetIdArray;
          if ( FamilyLinkageTargetIdArray )
          {
            FamilyLinkageTargetIdArray = (System_Int32_array *)sub_B0D964(
                                                                 FamilyLinkageTargetIdArray,
                                                                 *(_QWORD *)(*(_QWORD *)v43 + 64LL));
            if ( !FamilyLinkageTargetIdArray )
            {
              v69 = sub_B0D99C(0LL);
              sub_B0D948(v69, 0LL);
            }
          }
          if ( *(_DWORD *)(v43 + 24) <= 1u )
          {
            v60 = sub_B0D9A8(FamilyLinkageTargetIdArray);
            sub_B0D948(v60, 0LL);
          }
          *(_QWORD *)(v43 + 40) = v59;
          sub_B0D840((BattleServantConfConponent_o *)(v43 + 40), v59, v53, v54, v55, v56, v57, v58);
          v31 = *(_QWORD *)(v43 + 24);
          if ( (int)v31 >= 1 )
          {
            v32 = 0LL;
            do
            {
              if ( v32 >= (unsigned int)v31 )
              {
                v66 = sub_B0D9A8(IsNullOrEmpty);
                sub_B0D948(v66, 0LL);
              }
              v33 = *(System_Collections_ICollection_o **)(v43 + 8 * v32 + 32);
              IsNullOrEmpty = BasicHelper__IsNullOrEmpty(v33, 0LL);
              if ( (IsNullOrEmpty & 1) == 0 )
              {
                if ( !v33 )
                  sub_B0D97C(IsNullOrEmpty);
                monitor = (unsigned __int64)v33[1].monitor;
                if ( (int)monitor >= 1 )
                {
                  v35 = 0LL;
                  v36 = (int)monitor;
                  v37 = v33 + 2;
                  do
                  {
                    if ( v35 >= (unsigned int)monitor )
                    {
                      v63 = sub_B0D9A8(IsNullOrEmpty);
                      sub_B0D948(v63, 0LL);
                    }
                    if ( !v27 )
                      sub_B0D97C(IsNullOrEmpty);
                    v38 = System_Collections_Generic_Dictionary_int__int___ContainsKey(
                            v27,
                            *((_DWORD *)&v37->klass + v35),
                            (const MethodInfo_2E69AB8 *)Method_System_Collections_Generic_Dictionary_int__int__ContainsKey__);
                    if ( !v38 )
                    {
                      if ( v35 >= LODWORD(v33[1].monitor) )
                      {
                        v65 = sub_B0D9A8(v38);
                        sub_B0D948(v65, 0LL);
                      }
                      if ( !v22 )
                        sub_B0D97C(v38);
                      v39 = *((_DWORD *)&v37->klass + v35);
                      v40 = FamilyBuffLinkageIdGenerator__Next(v22, 0LL);
                      System_Collections_Generic_Dictionary_int__int___set_Item(
                        v27,
                        v39,
                        v40,
                        (const MethodInfo_2E6982C *)Method_System_Collections_Generic_Dictionary_int__int__set_Item__);
                    }
                    if ( v35 >= LODWORD(v33[1].monitor) )
                    {
                      v62 = sub_B0D9A8(v38);
                      sub_B0D948(v62, 0LL);
                    }
                    IsNullOrEmpty = System_Collections_Generic_Dictionary_int__int___get_Item(
                                      v27,
                                      *((_DWORD *)&v37->klass + v35),
                                      (const MethodInfo_2E69794 *)Method_System_Collections_Generic_Dictionary_int__int__get_Item__);
                    monitor = LODWORD(v33[1].monitor);
                    if ( v35 >= monitor )
                    {
                      v64 = sub_B0D9A8(IsNullOrEmpty);
                      sub_B0D948(v64, 0LL);
                    }
                    *((_DWORD *)&v37->klass + v35++) = IsNullOrEmpty;
                  }
                  while ( (__int64)v35 < v36 );
                }
              }
              LODWORD(v31) = *(_DWORD *)(v43 + 24);
              ++v32;
            }
            while ( (__int64)v32 < (int)v31 );
          }
        }
      }
      v23 = 0;
      *(_DWORD *)&v72[4 * v71 + 24] = 244;
      v61 = ++v73;
      System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___Dispose(
        &v74,
        (const MethodInfo_211254C *)Method_System_Collections_Generic_List_Enumerator_BattleBuffData_BuffData__Dispose__);
      if ( v61 )
      {
        v23 = v61;
        if ( *(_DWORD *)&v72[4 * v61 + 20] == 244 )
        {
          v23 = v61 - 1;
          v73 = v61 - 1;
        }
      }
    }
    *(_DWORD *)&v72[4 * v23 + 24] = 272;
    v70 = ++v73;
    System_Collections_Generic_Dictionary_ValueCollection_Enumerator_int__BillBoardGroupManager_GroupData___Dispose(
      &v75,
      (const MethodInfo_2811950 *)Method_System_Collections_Generic_Dictionary_ValueCollection_Enumerator_int__RemovedBuffInfo__Dispose__);
    if ( v70 && *(_DWORD *)&v72[4 * v70 + 20] == 272 )
      v73 = v70 - 1;
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
  __int64 v18; // x8
  unsigned __int64 v19; // x9
  bool v20; // w20
  __int64 v21; // x8
  unsigned __int64 v22; // x21
  BattleServantData_o *v23; // x28
  __int64 v24; // x8
  _QWORD *v25; // x20
  unsigned __int64 v26; // x26
  BattleBuffData_BuffData_o *v27; // x25
  BattleActionData_o *SideEffectActionData_18753744; // x0
  const MethodInfo *v29; // x6
  __int64 v30; // x1
  __int64 v31; // x2
  System_Collections_Generic_IEnumerable_T__o *SideEffectList; // x19
  BattleLogicFunction___c_c *v33; // x8
  struct BattleLogicFunction___c_StaticFields *static_fields; // x9
  System_Action_DrawLotsDisplayMessage_DisplayedInGroup_SaveData__o *_9__47_0; // x20
  Il2CppObject *v36; // x21
  struct BattleLogicFunction___c_StaticFields *v37; // x0
  System_String_array **v38; // x2
  System_String_array **v39; // x3
  System_Boolean_array **v40; // x4
  System_Int32_array **v41; // x5
  System_Int32_array *v42; // x6
  System_Int32_array *v43; // x7
  __int64 v44; // x0
  _DWORD *v45; // [xsp+0h] [xbp-80h]
  unsigned __int64 v47; // [xsp+10h] [xbp-70h]
  _DWORD *v49; // [xsp+20h] [xbp-60h]
  BuffList_ACTION_array *targetActs; // [xsp+28h] [xbp-58h]

  if ( (byte_4217016 & 1) == 0 )
  {
    sub_B0D8A4(&Method_System_Action_BattleActionData___ctor__, sideEffectArg);
    sub_B0D8A4(&System_Action_BattleActionData__TypeInfo, v9);
    sub_B0D8A4(&Method_BasicHelper_ForEach_BattleActionData___, v10);
    sub_B0D8A4(&bool___TypeInfo, v11);
    sub_B0D8A4(&Method_DataManager_GetMaster_SkillLvMaster___, v12);
    sub_B0D8A4(&DataManager_TypeInfo, v13);
    sub_B0D8A4(&Method_BattleLogicFunction___c__SetFuncSideEffect_b__47_0__, v14);
    sub_B0D8A4(&BattleLogicFunction___c_TypeInfo, v15);
    byte_4217016 = 1;
  }
  if ( actionData && actorSvtData )
  {
    if ( (BYTE3(DataManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !DataManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
    Master_WarQuestSelectionMaster = (SkillLvMaster_o *)DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_1714548 *)Method_DataManager_GetMaster_SkillLvMaster___);
    FuncSideEffectTargetServants = (_QWORD *)sub_B0D8BC(bool___TypeInfo, 2LL);
    if ( !FuncSideEffectTargetServants )
LABEL_38:
      sub_B0D97C(FuncSideEffectTargetServants);
    v18 = FuncSideEffectTargetServants[3];
    if ( !(_DWORD)v18 )
      goto LABEL_37;
    *((_BYTE *)FuncSideEffectTargetServants + 32) = 1;
    if ( (int)v18 >= 1 )
    {
      v19 = 0LL;
      v45 = FuncSideEffectTargetServants;
      while ( 1 )
      {
        if ( v19 >= (unsigned int)v18 )
          goto LABEL_37;
        if ( !sideEffectArg )
          goto LABEL_38;
        v47 = v19;
        v20 = *((_BYTE *)FuncSideEffectTargetServants + v19 + 32) != 0;
        targetActs = (BuffList_ACTION_array *)((__int64 (__fastcall *)(BattleLogicFunction_FuncSideEffectFunctionArgument_o *, bool, Il2CppMethodPointer))sideEffectArg->klass->vtable._6_GetActArray.method)(
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
          goto LABEL_38;
        v21 = FuncSideEffectTargetServants[3];
        if ( (int)v21 >= 1 )
          break;
LABEL_25:
        FuncSideEffectTargetServants = v45;
        LODWORD(v18) = v45[6];
        v19 = v47 + 1;
        if ( (__int64)(v47 + 1) >= (int)v18 )
          goto LABEL_26;
      }
      v22 = 0LL;
      v49 = FuncSideEffectTargetServants;
      while ( 1 )
      {
        if ( v22 >= (unsigned int)v21 )
          goto LABEL_37;
        v23 = (BattleServantData_o *)FuncSideEffectTargetServants[v22 + 4];
        FuncSideEffectTargetServants = BattleServantData__GetAddSideEffectBuffList(actorSvtData, targetActs, v23, 0LL);
        if ( !FuncSideEffectTargetServants )
          goto LABEL_38;
        v24 = FuncSideEffectTargetServants[3];
        v25 = FuncSideEffectTargetServants;
        if ( (int)v24 >= 1 )
          break;
LABEL_24:
        FuncSideEffectTargetServants = v49;
        ++v22;
        LODWORD(v21) = v49[6];
        if ( (__int64)v22 >= (int)v21 )
          goto LABEL_25;
      }
      v26 = 0LL;
      while ( v26 < (unsigned int)v24 )
      {
        if ( !v23 )
          goto LABEL_38;
        v27 = (BattleBuffData_BuffData_o *)v25[v26 + 4];
        SideEffectActionData_18753744 = BattleActionData__MakeSideEffectActionData_18753744(
                                          actionData,
                                          4,
                                          v23->fields.uniqueId,
                                          0LL);
        BattleLogicFunction__SetSideEffectBuff(
          this,
          Master_WarQuestSelectionMaster,
          SideEffectActionData_18753744,
          v27,
          (BattleLogicFunction_CommonSideEffectFunctionArgument_o *)sideEffectArg,
          1,
          v29);
        LODWORD(v24) = *((_DWORD *)v25 + 6);
        if ( (__int64)++v26 >= (int)v24 )
          goto LABEL_24;
      }
LABEL_37:
      v44 = sub_B0D9A8(FuncSideEffectTargetServants);
      sub_B0D948(v44, 0LL);
    }
LABEL_26:
    if ( BattleActionData__ExistSideEffect(actionData, 4, 0LL) )
    {
      BattleActionData__SetFuncSideEffectTrigger(actionData, 0LL);
      SideEffectList = (System_Collections_Generic_IEnumerable_T__o *)BattleActionData__getSideEffectList(
                                                                        actionData,
                                                                        4,
                                                                        0LL);
      v33 = BattleLogicFunction___c_TypeInfo;
      if ( (BYTE3(BattleLogicFunction___c_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !BattleLogicFunction___c_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(BattleLogicFunction___c_TypeInfo);
        v33 = BattleLogicFunction___c_TypeInfo;
      }
      static_fields = v33->static_fields;
      _9__47_0 = (System_Action_DrawLotsDisplayMessage_DisplayedInGroup_SaveData__o *)static_fields->__9__47_0;
      if ( !_9__47_0 )
      {
        if ( (BYTE3(v33->vtable._0_Equals.methodPtr) & 4) != 0 && !v33->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(v33);
          static_fields = BattleLogicFunction___c_TypeInfo->static_fields;
        }
        v36 = (Il2CppObject *)static_fields->__9;
        _9__47_0 = (System_Action_DrawLotsDisplayMessage_DisplayedInGroup_SaveData__o *)sub_B0D974(
                                                                                          System_Action_BattleActionData__TypeInfo,
                                                                                          v30,
                                                                                          v31);
        System_Action_DrawLotsDisplayMessage_DisplayedInGroup_SaveData____ctor(
          _9__47_0,
          v36,
          Method_BattleLogicFunction___c__SetFuncSideEffect_b__47_0__,
          (const MethodInfo_246EA3C *)Method_System_Action_BattleActionData___ctor__);
        v37 = BattleLogicFunction___c_TypeInfo->static_fields;
        v37->__9__47_0 = (struct System_Action_BattleActionData__o *)_9__47_0;
        sub_B0D840(
          (BattleServantConfConponent_o *)&v37->__9__47_0,
          (System_Int32_array **)_9__47_0,
          v38,
          v39,
          v40,
          v41,
          v42,
          v43);
      }
      BasicHelper__ForEach_DrawLotsDisplayMessage_DisplayedInGroup_SaveData_(
        SideEffectList,
        (System_Action_T__o *)_9__47_0,
        (const MethodInfo_17086DC *)Method_BasicHelper_ForEach_BattleActionData___);
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
  if ( (byte_421702E & 1) == 0 )
  {
    this = (BattleLogicFunction_o *)sub_B0D8A4(&BattleActionData_BuffData___TypeInfo, actiondata);
    byte_421702E = 1;
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
      sub_B0D97C(this);
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
  sub_B0D840(
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
  this = (BattleLogicFunction_o *)sub_B0D8BC(BattleActionData_BuffData___TypeInfo, 1LL);
  if ( !this )
    goto LABEL_26;
  v35 = this;
  if ( v28 )
  {
    this = (BattleLogicFunction_o *)sub_B0D964(v28, this->klass->_1.element_class);
    if ( !this )
    {
      v41 = sub_B0D99C(0LL);
      sub_B0D948(v41, 0LL);
    }
  }
  if ( !LODWORD(v35->fields.logic) )
    goto LABEL_27;
  v35->fields.logictarget = (struct BattleLogicTarget_o *)v28;
  sub_B0D840((BattleServantConfConponent_o *)&v35->fields.logictarget, v28, v29, v30, v31, v32, v33, v34);
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
    v40 = sub_B0D9A8(this);
    sub_B0D948(v40, 0LL);
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
  System_Int32_array *funcId; // x23
  DataVals_array *DataValsList; // x0
  const MethodInfo *v16; // [xsp+28h] [xbp-48h]

  if ( (byte_421701A & 1) == 0 )
  {
    sub_B0D8A4(&BattleServantData_TypeInfo, skillLvMst);
    byte_421701A = 1;
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
      sub_B0D97C(SkillFromBuff);
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
  __int64 v10; // x1
  __int64 v11; // x1
  __int64 v12; // x1
  DataManager_o *Instance; // x0
  struct BattleActionData_SideEffectData_array *SideEffectList_k__BackingField; // x24
  int max_length; // w8
  int v16; // w23
  BattleActionData_SideEffectData_o *v17; // x20
  BattleServantData_o *v18; // x26
  int32_t v19; // w1
  __int64 v20; // x1
  __int64 v21; // x2
  struct DataMasterBase_array *datalist; // x8
  DataManager_o *v23; // x27
  unsigned __int64 v24; // x25
  BattleBuffData_BuffData_o *v25; // x20
  BattleActionData_o *v26; // x28
  bool v27; // w5
  const MethodInfo *v28; // x6
  int32_t v29; // w0
  __int64 v30; // x0
  struct BattleActionData_SideEffectData_array *v31; // [xsp+0h] [xbp-80h]
  SkillLvMaster_o *skillLvMst; // [xsp+10h] [xbp-70h]
  System_Collections_Generic_KeyValuePair_int__int__o pairAttackAndTarget; // [xsp+28h] [xbp-58h] BYREF
  System_Collections_Generic_KeyValuePair_int__int__o p_pairAttackAndTarget; // 0:x0.8
  System_Collections_Generic_KeyValuePair_int__int__o v38; // 0:x1.8
  System_Collections_Generic_KeyValuePair_int__int__o v39; // 0:x1.8

  if ( (byte_4217019 & 1) == 0 )
  {
    sub_B0D8A4(&BattleActionData_TypeInfo, arg);
    sub_B0D8A4(&Method_DataManager_GetMasterData_SkillLvMaster___, v10);
    sub_B0D8A4(&Method_System_Collections_Generic_KeyValuePair_int__int___ctor__, v11);
    sub_B0D8A4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v12);
    byte_4217019 = 1;
  }
  pairAttackAndTarget = 0LL;
  Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A71064 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance
    || (Instance = (DataManager_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                      Instance,
                                      (const MethodInfo_17145A8 *)Method_DataManager_GetMasterData_SkillLvMaster___),
        skillLvMst = (SkillLvMaster_o *)Instance,
        !attackArg)
    || (SideEffectList_k__BackingField = attackArg->fields._SideEffectList_k__BackingField) == 0LL )
  {
LABEL_25:
    sub_B0D97C(Instance);
  }
  max_length = SideEffectList_k__BackingField->max_length;
  if ( max_length >= 1 )
  {
    v16 = 0;
    v31 = attackArg->fields._SideEffectList_k__BackingField;
    do
    {
      if ( v16 >= (unsigned int)max_length )
        goto LABEL_26;
      v17 = SideEffectList_k__BackingField->m_Items[v16];
      if ( !v17 )
        goto LABEL_25;
      Instance = (DataManager_o *)this->fields.data;
      if ( !Instance )
        goto LABEL_25;
      Instance = (DataManager_o *)BattleData__getServantData((BattleData_o *)Instance, v17->fields.targetId, 0LL);
      if ( Instance )
      {
        if ( !actionSvtData )
          goto LABEL_25;
        v18 = (BattleServantData_o *)Instance;
        v19 = BattleLogicFunction_SideEffectMakeArgument__MakeCheckKey(attackArg, actionSvtData->fields.uniqueId, 0LL);
        p_pairAttackAndTarget = (System_Collections_Generic_KeyValuePair_int__int__o)&pairAttackAndTarget;
        System_Collections_Generic_KeyValuePair_int__int____ctor(
          p_pairAttackAndTarget,
          v19,
          v18->fields.uniqueId,
          (const MethodInfo_2028C14 *)Method_System_Collections_Generic_KeyValuePair_int__int___ctor__);
        if ( !mainAction )
          goto LABEL_25;
        v38 = pairAttackAndTarget;
        Instance = (DataManager_o *)BattleActionData__isReflectedAttackSideEffect(mainAction, v38, 0LL);
        if ( ((unsigned __int8)Instance & 1) == 0 )
        {
          Instance = (DataManager_o *)BattleServantData__getAttackSideEffectBuffList_20781520(
                                        actionSvtData,
                                        v17->fields.sideEffectActs,
                                        command,
                                        v18,
                                        0LL);
          if ( !Instance )
            goto LABEL_25;
          datalist = Instance->fields.datalist;
          v23 = Instance;
          if ( datalist )
          {
            if ( (int)datalist >= 1 )
            {
              v24 = 0LL;
              while ( v24 < (unsigned int)datalist )
              {
                v25 = (BattleBuffData_BuffData_o *)*((_QWORD *)&v23->fields.lookup + v24);
                v26 = (BattleActionData_o *)sub_B0D974(BattleActionData_TypeInfo, v20, v21);
                BattleActionData___ctor(v26, 0LL);
                if ( !v26 )
                  goto LABEL_25;
                v26->fields.actorId = actionSvtData->fields.uniqueId;
                v26->fields.targetId = v18->fields.uniqueId;
                v27 = ((__int64 (__fastcall *)(BattleLogicFunction_SideEffectMakeArgument_o *, Il2CppMethodPointer))attackArg->klass->vtable._5_unknown.method)(
                        attackArg,
                        attackArg->klass->vtable._6_Init.methodPtr) == 1;
                BattleLogicFunction__SetSideEffectBuff(
                  this,
                  skillLvMst,
                  v26,
                  v25,
                  (BattleLogicFunction_CommonSideEffectFunctionArgument_o *)arg,
                  v27,
                  v28);
                v29 = ((__int64 (__fastcall *)(BattleLogicFunction_SideEffectMakeArgument_o *, Il2CppMethodPointer))attackArg->klass->vtable._5_unknown.method)(
                        attackArg,
                        attackArg->klass->vtable._6_Init.methodPtr);
                BattleActionData__addSideEffectActionData(mainAction, v26, v29, 0LL);
                LODWORD(datalist) = v23->fields.datalist;
                if ( (__int64)++v24 >= (int)datalist )
                  goto LABEL_22;
              }
LABEL_26:
              v30 = sub_B0D9A8(Instance);
              sub_B0D948(v30, 0LL);
            }
LABEL_22:
            v39 = pairAttackAndTarget;
            BattleActionData__addReflectAttackSideEffect(mainAction, v39, 0LL);
            SideEffectList_k__BackingField = v31;
          }
        }
      }
      max_length = SideEffectList_k__BackingField->max_length;
      ++v16;
    }
    while ( v16 < max_length );
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
  if ( (byte_4217015 & 1) == 0 )
  {
    sub_B0D8A4(&Method_DataManager_GetMasterData_FunctionMaster___, *(_QWORD *)&targetId);
    sub_B0D8A4(&Method_DataMasterBase_FunctionMaster__FunctionEntity__int__GetEntity__, v8);
    sub_B0D8A4(&int___TypeInfo, v9);
    sub_B0D8A4(&Method_System_Collections_Generic_List_int__AddRange__, v10);
    sub_B0D8A4(&Method_System_Collections_Generic_List_int__Add__, v11);
    this = (BattleLogicFunction_o *)sub_B0D8A4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v12);
    byte_4217015 = 1;
  }
  if ( !action )
    goto LABEL_19;
  this = (BattleLogicFunction_o *)action->fields.funcTargetList;
  if ( !this )
    goto LABEL_19;
  System_Collections_Generic_List_int___Add(
    (System_Collections_Generic_List_int__o *)this,
    targetId,
    (const MethodInfo_2FAFF00 *)Method_System_Collections_Generic_List_int__Add__);
  if ( !baseVals )
    goto LABEL_19;
  funcType = baseVals->fields.funcType;
  this = (BattleLogicFunction_o *)sub_B0D8BC(int___TypeInfo, 1LL);
  if ( !this )
    goto LABEL_19;
  if ( !LODWORD(this->fields.logic) )
    goto LABEL_20;
  LODWORD(this->fields.logictarget) = targetId;
  BattleActionData__AddHpDecreaseFuncTargets(action, funcType, (System_Int32_array *)this, 0LL);
  this = (BattleLogicFunction_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A71064 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !this
    || (MasterData_WarQuestSelectionMaster = (DataMasterBase_WarMaster__WarEntity__int__o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                                                              (DataManager_o *)this,
                                                                                              (const MethodInfo_17145A8 *)Method_DataManager_GetMasterData_FunctionMaster___),
        (this = (BattleLogicFunction_o *)DataVals__GetDependFuncIdArray(baseVals, 0LL)) == 0LL) )
  {
LABEL_19:
    sub_B0D97C(this);
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
                                        (const MethodInfo_2669BD4 *)Method_DataMasterBase_FunctionMaster__FunctionEntity__int__GetEntity__);
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
          (const MethodInfo_2FB0154 *)Method_System_Collections_Generic_List_int__AddRange__);
        BattleActionData__AddHpDecreaseFuncTargets(action, (int32_t)v19->fields.logic, (System_Int32_array *)v20, 0LL);
      }
      LODWORD(logic) = v16->fields.logic;
      if ( (__int64)++v17 >= (int)logic )
        return;
    }
LABEL_20:
    v21 = sub_B0D9A8(this);
    sub_B0D948(v21, 0LL);
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
  if ( (byte_4217011 & 1) == 0 )
  {
    sub_B0D8A4(&StringLiteral_15380/*"WAR_BOARD_PROGRESS_OPPONENT_BUFF_TYPES"*/, *(_QWORD *)&buffType);
    this = (BattleLogicFunction_o *)sub_B0D8A4(&StringLiteral_15381/*"WAR_BOARD_PROGRESS_SELF_BUFF_TYPES"*/, v8);
    byte_4217011 = 1;
  }
  IsUpdateBuffProgressTurn = BattleLogicFunction__IsUpdateBuffProgressTurn(
                               this,
                               buffType,
                               (System_String_o *)StringLiteral_15381/*"WAR_BOARD_PROGRESS_SELF_BUFF_TYPES"*/,
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
            (System_String_o *)StringLiteral_15380/*"WAR_BOARD_PROGRESS_OPPONENT_BUFF_TYPES"*/,
            &v7->fields.buffProgressTurnOpponentList,
            v10) )
      return;
    v11 = 0;
  }
  *isSelfTurn = v11;
}


// local variable allocation has failed, the output may be wrong!
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
  BattleData_o *data; // x0
  System_Collections_Generic_IEnumerable_T__o *v14; // x22
  System_Int32_array **TargetList; // x0
  System_String_array **v16; // x2
  System_String_array **v17; // x3
  System_Boolean_array **v18; // x4
  System_Int32_array **v19; // x5
  System_Int32_array *v20; // x6
  System_Int32_array *v21; // x7
  __int64 v22; // x1
  __int64 v23; // x2
  System_Action_DrawLotsDisplayMessage_DisplayedInGroup_SaveData__o *v24; // x0
  System_Action_T__o *v25; // x20
  __int64 *v26; // x8

  if ( (byte_4217047 & 1) == 0 )
  {
    sub_B0D8A4(&Method_System_Action_BattleSkillInfoData___ctor__, dataVals);
    sub_B0D8A4(&System_Action_BattleSkillInfoData__TypeInfo, v7);
    sub_B0D8A4(&Method_BasicHelper_ForEach_BattleSkillInfoData___, v8);
    sub_B0D8A4(&Method_BattleLogicFunction___c__DisplayClass99_0__UpdateUserEquipSkillChargeTurn_b__0__, v9);
    sub_B0D8A4(&Method_BattleLogicFunction___c__DisplayClass99_0__UpdateUserEquipSkillChargeTurn_b__1__, v10);
    sub_B0D8A4(&BattleLogicFunction___c__DisplayClass99_0_TypeInfo, v11);
    byte_4217047 = 1;
  }
  v12 = sub_B0D974(BattleLogicFunction___c__DisplayClass99_0_TypeInfo, dataVals, isProgress);
  BattleLogicFunction___c__DisplayClass99_0___ctor((BattleLogicFunction___c__DisplayClass99_0_o *)v12, 0LL);
  data = this->fields.data;
  if ( !data
    || (data = (BattleData_o *)BattleData__getMasterSkillInfos(data, 0LL), !dataVals)
    || (v14 = (System_Collections_Generic_IEnumerable_T__o *)data,
        data = (BattleData_o *)DataVals__GetValue(dataVals, 0LL),
        !v12) )
  {
    sub_B0D97C(data);
  }
  *(_DWORD *)(v12 + 16) = (_DWORD)data;
  *(_DWORD *)(v12 + 20) = DataVals__GetValue2(dataVals, 0LL) - 1;
  TargetList = (System_Int32_array **)DataVals__GetTargetList(dataVals, 0LL);
  *(_QWORD *)(v12 + 24) = TargetList;
  sub_B0D840((BattleServantConfConponent_o *)(v12 + 24), TargetList, v16, v17, v18, v19, v20, v21);
  v24 = (System_Action_DrawLotsDisplayMessage_DisplayedInGroup_SaveData__o *)sub_B0D974(
                                                                               System_Action_BattleSkillInfoData__TypeInfo,
                                                                               v22,
                                                                               v23);
  v25 = (System_Action_T__o *)v24;
  if ( isProgress )
    v26 = &Method_BattleLogicFunction___c__DisplayClass99_0__UpdateUserEquipSkillChargeTurn_b__0__;
  else
    v26 = &Method_BattleLogicFunction___c__DisplayClass99_0__UpdateUserEquipSkillChargeTurn_b__1__;
  System_Action_DrawLotsDisplayMessage_DisplayedInGroup_SaveData____ctor(
    v24,
    (Il2CppObject *)v12,
    *v26,
    (const MethodInfo_246EA3C *)Method_System_Action_BattleSkillInfoData___ctor__);
  BasicHelper__ForEach_DrawLotsDisplayMessage_DisplayedInGroup_SaveData_(
    v14,
    v25,
    (const MethodInfo_17086DC *)Method_BasicHelper_ForEach_BattleSkillInfoData___);
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
    sub_B0D97C(this);
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
    sub_B0D97C(0LL);
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

  if ( (byte_4217017 & 1) == 0 )
  {
    sub_B0D8A4(&StringLiteral_17456/*"checkFuncAction("*/, args);
    sub_B0D8A4(&StringLiteral_133/*" < "*/, v17);
    sub_B0D8A4(&StringLiteral_17455/*"checkFuncAction firstResult:false"*/, v18);
    byte_4217017 = 1;
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
  data = (BattleData_o *)BattleUtility__Abs_23825740(value, 0LL);
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
      sub_B0D97C(data);
    }
    v27 = (float)(int)data;
    goto LABEL_33;
  }
LABEL_46:
  v34 = System_Int32__ToString((int32_t)&v40 + 4, 0LL);
  v35 = System_Int32__ToString((int32_t)&v40, 0LL);
  System_String__Concat_43853316(
    (System_String_o *)StringLiteral_17456/*"checkFuncAction("*/,
    v34,
    (System_String_o *)StringLiteral_133/*" < "*/,
    v35,
    0LL);
  return SHIDWORD(v40) < (int)v40;
}


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
    sub_B0D97C(data);
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
  BattleData_o *data; // x0
  BattleServantData_o *v15; // x25
  int32_t Value; // w0
  const MethodInfo *v18; // [xsp+8h] [xbp-48h]

  if ( (byte_421704C & 1) == 0 )
  {
    sub_B0D8A4(&BattleActionData_TypeInfo, *(_QWORD *)&targetId);
    byte_421704C = 1;
  }
  v13 = (BattleActionData_o *)sub_B0D974(BattleActionData_TypeInfo, *(_QWORD *)&targetId, funcEnt);
  BattleActionData___ctor(v13, 0LL);
  data = this->fields.data;
  if ( !data || (data = (BattleData_o *)BattleData__getServantData(data, targetId, 0LL), !baseVals) )
    sub_B0D97C(data);
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
  BattleActionData_o *v17; // x23
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
  double v29; // d0
  BattleActionData_o *v30; // x0

  v12 = this;
  if ( (byte_4217042 & 1) == 0 )
  {
    sub_B0D8A4(&BattleActionData_TypeInfo, *(_QWORD *)&targetId);
    sub_B0D8A4(&NpGaugeAbsorbResult_TypeInfo, v13);
    this = (BattleLogicFunction_o *)sub_B0D8A4(&NpPointToTurnConvert_TypeInfo, v14);
    byte_4217042 = 1;
  }
  if ( !funcTarget )
    goto LABEL_12;
  funcUnit_k__BackingField = funcTarget->fields._funcUnit_k__BackingField;
  if ( !funcUnit_k__BackingField )
    goto LABEL_12;
  dataVals_k__BackingField = funcUnit_k__BackingField->fields._dataVals_k__BackingField;
  v17 = (BattleActionData_o *)sub_B0D974(BattleActionData_TypeInfo, *(_QWORD *)&targetId, funcEnt);
  BattleActionData___ctor(v17, 0LL);
  v20 = (NpPointToTurnConvert_o *)sub_B0D974(NpPointToTurnConvert_TypeInfo, v18, v19);
  NpPointToTurnConvert___ctor(v20, 0LL);
  v23 = (NpGaugeAbsorbResult_o *)sub_B0D974(NpGaugeAbsorbResult_TypeInfo, v21, v22);
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
    sub_B0D97C(this);
  }
  Turn_k__BackingField = v23->fields._Turn_k__BackingField;
  if ( Turn_k__BackingField == INFINITY )
    v29 = -Turn_k__BackingField;
  else
    v29 = Turn_k__BackingField;
  v30 = BattleLogicFunction__functionHastenNpTurn(
          v12,
          targetId,
          funcEnt,
          dataVals_k__BackingField,
          dataVals_k__BackingField->fields.funcIndex,
          isCommandSideEffect,
          (int)v29,
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
  _BOOL4 v6; // w25
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
  __int64 v38; // x1
  __int64 v39; // x2
  BattleActionData_o *v40; // x19
  BattleServantData_o *v41; // x22
  BattleServantData_o *ServantData; // x27
  __int64 v43; // x1
  __int64 v44; // x2
  __int64 v45; // x26
  const MethodInfo *v46; // x4
  int v47; // w8
  int v48; // w19
  char v49; // w23
  _BOOL4 v50; // w25
  int32_t type; // w19
  const MethodInfo *v52; // x3
  bool v53; // zf
  BattleLogicFunction_ProcListInArgs_o *v54; // x25
  int v55; // w9
  int v56; // w8
  struct BattleData_o *data; // x8
  int32_t ProgressTurnCond; // w0
  int32_t v59; // w19
  int32_t v60; // w19
  int32_t v61; // w19
  int32_t v62; // w19
  int32_t tdCommandTypeChange; // w8
  System_Int32_array **v64; // x0
  System_String_array **v65; // x2
  System_String_array **v66; // x3
  System_Boolean_array **v67; // x4
  System_Int32_array **v68; // x5
  System_Int32_array *v69; // x6
  System_Int32_array *v70; // x7
  __int64 v71; // x23
  __int64 v72; // x19
  int32_t v73; // w19
  struct BattleData_o *v74; // x8
  struct BattleEntity_o *battle_ent; // x8
  int64_t userId; // x25
  int32_t eventId; // w19
  EventPointBuffMaster_o *v78; // x28
  int32_t EventPointGroupId; // w23
  UserEventPointEntity_o *EntityDefinitely; // x0
  int64_t value; // x19
  int logic; // w8
  int v83; // w10
  __int64 v84; // x9
  __int64 v85; // x11
  System_Int32_array **v86; // x0
  System_String_array **v87; // x2
  System_String_array **v88; // x3
  System_Boolean_array **v89; // x4
  System_Int32_array **v90; // x5
  System_Int32_array *v91; // x6
  System_Int32_array *v92; // x7
  __int64 v93; // x23
  __int64 v94; // x19
  BattleActionData_o *v95; // x28
  int32_t Param; // w23
  __int64 v97; // x1
  __int64 v98; // x2
  __int64 v99; // x19
  bool isEnemy; // w8
  int v101; // w8
  System_Int32_array **TargetIndiv; // x0
  System_String_array **v103; // x2
  System_String_array **v104; // x3
  System_Boolean_array **v105; // x4
  System_Int32_array **v106; // x5
  System_Int32_array *v107; // x6
  System_Int32_array *v108; // x7
  System_String_array **v109; // x2
  System_String_array **v110; // x3
  System_Boolean_array **v111; // x4
  System_Int32_array **v112; // x5
  System_Int32_array *v113; // x6
  System_Int32_array *v114; // x7
  int32_t v115; // w19
  System_Int32_array **IntervalData; // x0
  System_String_array **v117; // x2
  System_String_array **v118; // x3
  System_Boolean_array **v119; // x4
  System_Int32_array **v120; // x5
  System_Int32_array *v121; // x6
  System_Int32_array *v122; // x7
  System_Int32_array **ParamArray; // x0
  System_String_array **v124; // x2
  System_String_array **v125; // x3
  System_Boolean_array **v126; // x4
  System_Int32_array **v127; // x5
  System_Int32_array *v128; // x6
  System_Int32_array *v129; // x7
  int32_t v130; // w19
  int32_t RelationId; // w23
  __int64 v132; // x1
  __int64 v133; // x2
  BattleBuffData_RelationOverwriteData_o *v134; // x19
  System_String_array **v135; // x2
  System_String_array **v136; // x3
  System_Boolean_array **v137; // x4
  System_Int32_array **v138; // x5
  System_Int32_array *v139; // x6
  System_Int32_array *v140; // x7
  BattleDataDefine_c *v141; // x0
  int32_t v142; // w19
  bool v143; // w0
  float UpDownGiveHeal; // s8
  int32_t v145; // w0
  int v146; // s0
  int32_t v147; // w0
  int v148; // s0
  System_Int32_array **v149; // x0
  System_String_array **v150; // x2
  System_String_array **v151; // x3
  System_Boolean_array **v152; // x4
  System_Int32_array **v153; // x5
  System_Int32_array *v154; // x6
  System_Int32_array *v155; // x7
  System_Int32_array **v156; // x0
  System_String_array **v157; // x2
  System_String_array **v158; // x3
  System_Boolean_array **v159; // x4
  System_Int32_array **v160; // x5
  System_Int32_array *v161; // x6
  System_Int32_array *v162; // x7
  System_Int32_array **v163; // x0
  System_String_array **v164; // x2
  System_String_array **v165; // x3
  System_Boolean_array **v166; // x4
  System_Int32_array **v167; // x5
  System_Int32_array *v168; // x6
  System_Int32_array *v169; // x7
  int32_t v170; // w19
  System_Int32_array **UpBuffRateBuffTypeList; // x0
  System_String_array **v172; // x2
  System_String_array **v173; // x3
  System_Boolean_array **v174; // x4
  System_Int32_array **v175; // x5
  System_Int32_array *v176; // x6
  System_Int32_array *v177; // x7
  int32_t ShowStateWarBoardEnemyEquip; // w1
  struct BattleLogicFunction_FunctionArgument_o *externalArg; // x8
  struct BattleData_o *v180; // x8
  System_Int32_array **AddIndividualty; // x0
  System_String_array **v182; // x2
  System_String_array **v183; // x3
  System_Boolean_array **v184; // x4
  System_Int32_array **v185; // x5
  System_Int32_array *v186; // x6
  System_Int32_array *v187; // x7
  System_Int32_array **LinkageTargetIndividualty; // x0
  System_String_array **v189; // x2
  System_String_array **v190; // x3
  System_Boolean_array **v191; // x4
  System_Int32_array **v192; // x5
  System_Int32_array *v193; // x6
  System_Int32_array *v194; // x7
  const MethodInfo *v195; // x3
  struct BattleData_o *v196; // x8
  System_Int32_array **ValsList; // x0
  System_String_array **v198; // x2
  System_String_array **v199; // x3
  System_Boolean_array **v200; // x4
  System_Int32_array **v201; // x5
  System_Int32_array *v202; // x6
  System_Int32_array *v203; // x7
  int32_t v204; // w0
  int v205; // w8
  int v206; // w9
  UnityEngine_Object_o *v207; // x19
  bool v208; // w19
  int32_t v209; // w23
  int32_t v210; // w23
  CommandCodeInfo_o *UserCommandCode; // x0
  int32_t MaxHp; // w25
  int32_t v213; // w23
  bool v214; // w0
  __int64 v215; // x4
  int32_t v216; // w19
  bool IsCommandSideEffect; // w0
  const MethodInfo *v218; // x7
  BattleActionData_o *NoEffectObject; // x1
  __int64 v220; // x1
  __int64 v221; // x2
  BattleActionEffect_AddChangeMaxHpBuff_o *v222; // x19
  BattleLogicFunction_o *v223; // x28
  System_String_array **v224; // x2
  System_String_array **v225; // x3
  System_Boolean_array **v226; // x4
  System_Int32_array **v227; // x5
  System_Int32_array *v228; // x6
  System_Int32_array *v229; // x7
  System_Int32_array **v230; // x0
  System_String_array **v231; // x2
  System_String_array **v232; // x3
  System_Boolean_array **v233; // x4
  System_Int32_array **v234; // x5
  System_Int32_array *v235; // x6
  System_Int32_array *v236; // x7
  int32_t id; // w19
  __int64 v238; // x1
  __int64 v239; // x2
  System_Collections_Generic_List_int__o *v240; // x0
  System_String_o *i; // x0
  System_String_o *v242; // x0
  System_String_o *v243; // x0
  System_String_o *v244; // x0
  System_Int32_array *QuestIndividualities; // x0
  UnityEngine_Object_o *v246; // x22
  System_Int32_array *v247; // x19
  BattlePerformance_o *perf; // x2
  struct BattleLogic_o *v249; // x8
  UnityEngine_Object_o *v250; // x19
  int v251; // w8
  BattleLogicFunction_o *v252; // x19
  unsigned int v253; // w22
  int32_t v254; // w19
  struct BattleData_o *v255; // x8
  __int64 v256; // x1
  __int64 v257; // x2
  BattleBuffData_o *buffData; // x19
  BattleBuffData_CheckIndividualitiesData_o *v259; // x22
  int32_t v260; // w1
  FunctionEntity_o *v261; // x2
  DataVals_o *v262; // x3
  int32_t v263; // w4
  const MethodInfo *v264; // x5
  bool v265; // w0
  BattleActionData_BuffData_o *v266; // x22
  UnityEngine_Object_o *v267; // x19
  System_String_array **v268; // x2
  System_String_array **v269; // x3
  System_Boolean_array **v270; // x4
  System_Int32_array **v271; // x5
  System_Int32_array *v272; // x6
  System_Int32_array *v273; // x7
  struct BattleLogic_o *v274; // x8
  System_Int32_array **v275; // x1
  System_Int32_array **v276; // x0
  System_String_array **v277; // x2
  System_String_array **v278; // x3
  System_Boolean_array **v279; // x4
  System_Int32_array **v280; // x5
  System_Int32_array *v281; // x6
  System_Int32_array *v282; // x7
  const MethodInfo *v283; // x3
  __int64 v285; // x0
  __int64 v286; // x0
  __int64 userCommandCodeId; // [xsp+8h] [xbp-B8h]
  int userCommandCodeIda; // [xsp+8h] [xbp-B8h]
  int32_t funcIndex; // [xsp+14h] [xbp-ACh]
  BattleActionData_o *v290; // [xsp+18h] [xbp-A8h]
  BattleActionData_o *v291; // [xsp+20h] [xbp-A0h]
  int32_t treasureDvcId; // [xsp+2Ch] [xbp-94h]
  int32_t v293; // [xsp+30h] [xbp-90h]
  unsigned int uniqueId; // [xsp+34h] [xbp-8Ch]
  struct FunctionEntity_o *funcEnt; // [xsp+38h] [xbp-88h]
  BattleActionData_BuffData_o *v297; // [xsp+48h] [xbp-78h]
  BattleLogicFunctionProcess_FunctionTargetCheck_o *funcTargeta; // [xsp+50h] [xbp-70h]
  WarEntity_o *entity; // [xsp+58h] [xbp-68h] BYREF
  int v300; // [xsp+68h] [xbp-58h] BYREF
  bool isSelfTurn; // [xsp+6Ch] [xbp-54h] BYREF

  v6 = shortbuff;
  v9 = this;
  if ( (byte_421701F & 1) == 0 )
  {
    sub_B0D8A4(&BattleActionEffect_AddChangeMaxHpBuff_TypeInfo, mainAction);
    sub_B0D8A4(&BattleActionData_TypeInfo, v10);
    sub_B0D8A4(&BattleDataDefine_TypeInfo, v11);
    sub_B0D8A4(&BattleBuffData_BuffData___TypeInfo, v12);
    sub_B0D8A4(&BattleBuffData_BuffData_TypeInfo, v13);
    sub_B0D8A4(&BuffList_TypeInfo, v14);
    sub_B0D8A4(&BattleBuffData_CheckIndividualitiesData_TypeInfo, v15);
    sub_B0D8A4(&Method_DataManager_GetMasterData_EventPointBuffMaster___, v16);
    sub_B0D8A4(&Method_DataManager_GetMasterData_UserEventPointMaster___, v17);
    sub_B0D8A4(&Method_DataManager_GetMaster_BuffTypeDetailMaster___, v18);
    sub_B0D8A4(&DataManager_TypeInfo, v19);
    sub_B0D8A4(&Method_DataMasterBase_BuffTypeDetailMaster__BuffTypeDetailEntity__int__TryGetEntity__, v20);
    sub_B0D8A4(&BattleBuffData_FieldAliveCondData_TypeInfo, v21);
    sub_B0D8A4(&int___TypeInfo, v22);
    sub_B0D8A4(&Method_System_Collections_Generic_List_int___ctor__, v23);
    sub_B0D8A4(&System_Collections_Generic_List_int__TypeInfo, v24);
    sub_B0D8A4(&System_Math_TypeInfo, v25);
    sub_B0D8A4(&UnityEngine_Object_TypeInfo, v26);
    sub_B0D8A4(&BattleBuffData_RelationOverwriteData_TypeInfo, v27);
    sub_B0D8A4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v28);
    sub_B0D8A4(&StringLiteral_18988/*"functionAddState=>"*/, v29);
    sub_B0D8A4(&StringLiteral_13378/*"TAMAMOCAT_STUN_BUFF_ID"*/, v30);
    sub_B0D8A4(&StringLiteral_13379/*"TAMAMOCAT_TREASURE_DEVICE_ID_"*/, v31);
    this = (BattleLogicFunction_o *)sub_B0D8A4(&StringLiteral_1/*""*/, v32);
    byte_421701F = 1;
  }
  isSelfTurn = 0;
  entity = 0LL;
  v300 = 0;
  if ( !funcTarget )
    goto LABEL_309;
  if ( !mainAction )
    goto LABEL_309;
  funcUnit_k__BackingField = funcTarget->fields._funcUnit_k__BackingField;
  if ( !funcUnit_k__BackingField )
    goto LABEL_309;
  dataVals_k__BackingField = funcUnit_k__BackingField->fields._dataVals_k__BackingField;
  if ( !dataVals_k__BackingField )
    goto LABEL_309;
  actorId = mainAction->fields.actorId;
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
  userCommandCodeId = mainAction->fields.userCommandCodeId;
  treasureDvcId = mainAction->fields.treasureDvcId;
  funcIndex = v37;
  v40 = (BattleActionData_o *)sub_B0D974(BattleActionData_TypeInfo, v38, v39);
  BattleActionData___ctor(v40, 0LL);
  this = (BattleLogicFunction_o *)v9->fields.data;
  if ( !this )
    goto LABEL_309;
  v291 = v40;
  this = (BattleLogicFunction_o *)BattleData__getServantData((BattleData_o *)this, actorId, 0LL);
  if ( !v9->fields.data )
    goto LABEL_309;
  v41 = (BattleServantData_o *)this;
  ServantData = BattleData__getServantData(v9->fields.data, uniqueId, 0LL);
  this = (BattleLogicFunction_o *)((__int64 (__fastcall *)(BattleLogicFunctionProcess_FunctionTargetCheck_o *, Il2CppMethodPointer))funcTarget->klass->vtable._7_MakeActionBuffData.method)(
                                    funcTarget,
                                    funcTarget->klass->vtable._8_AddBuff.methodPtr);
  if ( !ServantData )
    goto LABEL_309;
  v293 = actorId;
  funcTargeta = funcTarget;
  if ( !this )
    goto LABEL_309;
  v297 = (BattleActionData_BuffData_o *)this;
  LODWORD(this->fields.master) = ServantData->fields.uniqueId;
  LODWORD(this->fields.data) = funcIndex;
  v45 = sub_B0D974(BattleBuffData_BuffData_TypeInfo, v43, v44);
  BattleBuffData_BuffData___ctor((BattleBuffData_BuffData_o *)v45, 0LL);
  if ( !v36 )
    goto LABEL_309;
  if ( !v45 )
    goto LABEL_309;
  *(_DWORD *)(v45 + 16) = v36->fields.id;
  if ( !args )
    goto LABEL_309;
  *(_DWORD *)(v45 + 164) = BattleLogicFunction_ProcListInArgs__get_SkillId(args, 0LL);
  *(_DWORD *)(v45 + 188) = BattleLogicFunction_ProcListInArgs__get_GrantSkillType(args, 0LL);
  *(_DWORD *)(v45 + 176) = DataVals__GetMotionChange(dataVals_k__BackingField, 0LL);
  v47 = 2 * DataVals__GetParam(dataVals_k__BackingField, 1, 0, 0LL);
  *(_DWORD *)(v45 + 20) = v47;
  v48 = mainAction->fields.isReversalShortBuffTurn ^ v6;
  if ( (v48 & 1) != 0 )
    *(_DWORD *)(v45 + 20) = v47 - 1;
  this = (BattleLogicFunction_o *)BattleLogicFunction__IsSvtBuffTurnExtend(v9, uniqueId, v36, v48 & 1, v46);
  if ( ((unsigned __int8)this & 1) != 0 )
  {
    v48 ^= 1u;
    v49 = 1;
    ++*(_DWORD *)(v45 + 20);
  }
  else
  {
    v49 = 0;
  }
  *(_DWORD *)(v45 + 68) = v293;
  if ( !funcEnt )
    goto LABEL_309;
  v50 = (v48 ^ Target__isEnemy(funcEnt->fields.targetType, 0LL)) & 1;
  isSelfTurn = v50;
  type = v36->fields.type;
  if ( (BYTE3(BuffList_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !BuffList_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(BuffList_TypeInfo);
  this = (BattleLogicFunction_o *)BuffList__IsForceProgressSelfTurnType(type, 0LL);
  if ( ((unsigned __int8)this & 1) != 0 )
  {
    v50 = 1;
    isSelfTurn = 1;
  }
  if ( (v49 & 1) == 0 )
  {
    BattleLogicFunction__UpdateBuffProgressTurn(v9, v36->fields.type, &isSelfTurn, v52);
    v50 = isSelfTurn;
  }
  v53 = !v50;
  v54 = args;
  v55 = v53;
  v56 = v55 ^ ServantData->fields.isEnemy;
  *(_BYTE *)(v45 + 180) = v56;
  if ( (v49 & 1) == 0 )
  {
    this = (BattleLogicFunction_o *)BuffEntity__GetProgressSelfTurn(v36, 0LL);
    if ( ((unsigned int)this & 0x80000000) != 0 )
    {
      v56 = *(unsigned __int8 *)(v45 + 180);
    }
    else
    {
      v56 = ((_DWORD)this == 0) ^ ServantData->fields.isEnemy;
      *(_BYTE *)(v45 + 180) = v56;
    }
  }
  *(_BYTE *)(v45 + 192) = (v56 == 0) ^ ServantData->fields.isEnemy;
  data = v9->fields.data;
  if ( !data )
    goto LABEL_309;
  this = (BattleLogicFunction_o *)data->fields.battleEvent;
  if ( !this )
    goto LABEL_309;
  *(_DWORD *)(v45 + 184) = ((__int64 (__fastcall *)(BattleLogicFunction_o *, BuffEntity_o *, Il2CppMethodPointer))this->klass[1].vtable._1_Finalize.method)(
                             this,
                             v36,
                             this->klass[1].vtable._2_GetHashCode.methodPtr);
  ProgressTurnCond = BuffEntity__GetProgressTurnCond(v36, 0LL);
  if ( (ProgressTurnCond & 0x80000000) == 0 )
    *(_DWORD *)(v45 + 184) = ProgressTurnCond;
  *(_DWORD *)(v45 + 24) = DataVals__GetParam(dataVals_k__BackingField, 2, 0, 0LL);
  *(_DWORD *)(v45 + 28) = DataVals__GetParam(dataVals_k__BackingField, 3, 0, 0LL);
  v297->fields.popDelay = DataVals__GetParam(dataVals_k__BackingField, 64, 0, 0LL);
  v59 = v36->fields.type;
  if ( (BYTE3(BuffList_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !BuffList_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(BuffList_TypeInfo);
  if ( BuffList__CheckType(143, v59, 0LL) )
    goto LABEL_54;
  v60 = v36->fields.type;
  if ( (BYTE3(BuffList_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !BuffList_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(BuffList_TypeInfo);
  if ( BuffList__CheckType(145, v60, 0LL) )
    goto LABEL_54;
  v61 = v36->fields.type;
  if ( (BYTE3(BuffList_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !BuffList_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(BuffList_TypeInfo);
  if ( BuffList__CheckType(146, v61, 0LL) )
    goto LABEL_54;
  v62 = v36->fields.type;
  if ( (BYTE3(BuffList_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !BuffList_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(BuffList_TypeInfo);
  if ( BuffList__CheckType(147, v62, 0LL) )
  {
LABEL_54:
    tdCommandTypeChange = args->fields.tdCommandTypeChange;
    if ( (tdCommandTypeChange & 0x80000000) == 0 )
      *(_DWORD *)(v45 + 28) = tdCommandTypeChange;
  }
  *(_DWORD *)(v45 + 52) = DataVals__GetParam(dataVals_k__BackingField, 8, 0, 0LL);
  *(_DWORD *)(v45 + 56) = DataVals__GetParam(dataVals_k__BackingField, 9, 0, 0LL);
  v64 = (System_Int32_array **)sub_B0D8BC(int___TypeInfo, 2LL);
  *(_QWORD *)(v45 + 40) = v64;
  sub_B0D840((BattleServantConfConponent_o *)(v45 + 40), v64, v65, v66, v67, v68, v69, v70);
  v71 = *(_QWORD *)(v45 + 40);
  this = (BattleLogicFunction_o *)DataVals__GetParam(dataVals_k__BackingField, 3, 0, 0LL);
  if ( !v71 )
    goto LABEL_309;
  if ( !*(_DWORD *)(v71 + 24) )
    goto LABEL_310;
  *(_DWORD *)(v71 + 32) = (_DWORD)this;
  v72 = *(_QWORD *)(v45 + 40);
  this = (BattleLogicFunction_o *)DataVals__GetParam(dataVals_k__BackingField, 4, 0, 0LL);
  if ( !v72 )
    goto LABEL_309;
  if ( *(_DWORD *)(v72 + 24) <= 1u )
    goto LABEL_310;
  v290 = mainAction;
  *(_DWORD *)(v72 + 36) = (_DWORD)this;
  v73 = v36->fields.type;
  if ( (BYTE3(BuffList_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !BuffList_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(BuffList_TypeInfo);
  this = (BattleLogicFunction_o *)BuffList__CheckType(135, v73, 0LL);
  if ( ((unsigned __int8)this & 1) != 0 )
  {
    v74 = v9->fields.data;
    if ( !v74 )
      goto LABEL_309;
    battle_ent = v74->fields.battle_ent;
    if ( !battle_ent )
      goto LABEL_309;
    userId = battle_ent->fields.userId;
    eventId = battle_ent->fields.eventId;
    this = (BattleLogicFunction_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A71064 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !this )
      goto LABEL_309;
    this = (BattleLogicFunction_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                      (DataManager_o *)this,
                                      (const MethodInfo_17145A8 *)Method_DataManager_GetMasterData_EventPointBuffMaster___);
    if ( !this )
      goto LABEL_309;
    v78 = (EventPointBuffMaster_o *)this;
    EventPointGroupId = EventPointBuffMaster__GetEventPointGroupId(
                          (EventPointBuffMaster_o *)this,
                          eventId,
                          funcEnt->fields.id,
                          0,
                          0LL);
    this = (BattleLogicFunction_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A71064 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !this )
      goto LABEL_309;
    this = (BattleLogicFunction_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                      (DataManager_o *)this,
                                      (const MethodInfo_17145A8 *)Method_DataManager_GetMasterData_UserEventPointMaster___);
    if ( !this )
      goto LABEL_309;
    EntityDefinitely = UserEventPointMaster__GetEntityDefinitely(
                         (UserEventPointMaster_o *)this,
                         userId,
                         eventId,
                         EventPointGroupId,
                         0LL);
    v54 = args;
    if ( EntityDefinitely )
    {
      value = EntityDefinitely->fields.value;
      this = (BattleLogicFunction_o *)EventPointBuffMaster__GetAllEventBuff(
                                        v78,
                                        EntityDefinitely->fields.eventId,
                                        EventPointGroupId,
                                        0LL);
      if ( !this )
        goto LABEL_309;
      logic = (int)this->fields.logic;
      if ( logic >= 1 )
      {
        v83 = 0;
        v84 = 0LL;
        do
        {
          if ( v83 >= (unsigned int)logic )
            goto LABEL_310;
          v85 = *((_QWORD *)&this->fields.logictarget + v83);
          if ( !v85 )
            goto LABEL_309;
          if ( value < *(int *)(v85 + 28) )
            break;
          ++v83;
          v84 = v85;
        }
        while ( v83 < logic );
        if ( v84 )
          *(_DWORD *)(v45 + 28) += *(_DWORD *)(v84 + 64);
      }
    }
  }
  if ( DataVals__isParam(dataVals_k__BackingField, 26, 0LL) && DataVals__isParam(dataVals_k__BackingField, 27, 0LL) )
  {
    v86 = (System_Int32_array **)sub_B0D8BC(int___TypeInfo, 2LL);
    *(_QWORD *)(v45 + 104) = v86;
    sub_B0D840((BattleServantConfConponent_o *)(v45 + 104), v86, v87, v88, v89, v90, v91, v92);
    v93 = *(_QWORD *)(v45 + 104);
    this = (BattleLogicFunction_o *)DataVals__GetParam(dataVals_k__BackingField, 26, 0, 0LL);
    if ( !v93 )
      goto LABEL_309;
    if ( !*(_DWORD *)(v93 + 24) )
      goto LABEL_310;
    *(_DWORD *)(v93 + 32) = (_DWORD)this;
    v94 = *(_QWORD *)(v45 + 104);
    this = (BattleLogicFunction_o *)DataVals__GetParam(dataVals_k__BackingField, 27, 0, 0LL);
    if ( !v94 )
      goto LABEL_309;
    if ( *(_DWORD *)(v94 + 24) <= 1u )
      goto LABEL_310;
    *(_DWORD *)(v94 + 36) = (_DWORD)this;
  }
  *(_DWORD *)(v45 + 64) = DataVals__GetParam(dataVals_k__BackingField, 15, 0, 0LL);
  *(_DWORD *)(v45 + 344) = DataVals__GetClassIconAuraEffectId(dataVals_k__BackingField, 0LL);
  if ( DataVals__GetParam(dataVals_k__BackingField, 11, 0, 0LL) >= 1 )
    *(_DWORD *)(v45 + 60) = v293;
  if ( DataVals__GetParam(dataVals_k__BackingField, 46, 0, 0LL) >= 1 )
    BattleBuffData_BuffData__onState((BattleBuffData_BuffData_o *)v45, 0x8000, 0LL);
  v95 = v290;
  if ( DataVals__GetParam(dataVals_k__BackingField, 50, 0, 0LL) >= 1 )
    BattleBuffData_BuffData__onState((BattleBuffData_BuffData_o *)v45, 0x10000, 0LL);
  if ( DataVals__GetParam(dataVals_k__BackingField, 88, 0, 0LL) >= 1 )
    BattleBuffData_BuffData__onState((BattleBuffData_BuffData_o *)v45, 0x80000, 0LL);
  if ( DataVals__GetParam(dataVals_k__BackingField, 90, 0, 0LL) >= 1 )
    BattleBuffData_BuffData__onState((BattleBuffData_BuffData_o *)v45, 0x100000, 0LL);
  if ( DataVals__GetParam(dataVals_k__BackingField, 65, 0, 0LL) >= 1 )
    BattleBuffData_BuffData__onState((BattleBuffData_BuffData_o *)v45, 0x40000, 0LL);
  if ( DataVals__GetParam(dataVals_k__BackingField, 144, 0, 0LL) >= 1 )
    BattleBuffData_BuffData__onState((BattleBuffData_BuffData_o *)v45, 0x2000000, 0LL);
  if ( DataVals__isParam(dataVals_k__BackingField, 42, 0LL) )
  {
    Param = DataVals__GetParam(dataVals_k__BackingField, 42, 0, 0LL);
    v99 = sub_B0D974(BattleBuffData_FieldAliveCondData_TypeInfo, v97, v98);
    BattleBuffData_FieldAliveCondData___ctor((BattleBuffData_FieldAliveCondData_o *)v99, 0LL);
    if ( !v99 )
      goto LABEL_309;
    isEnemy = ServantData->fields.isEnemy;
    *(_BYTE *)(v99 + 17) = Param > 0;
    *(_BYTE *)(v99 + 16) = isEnemy;
    if ( (BYTE3(System_Math_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !System_Math_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(System_Math_TypeInfo);
    if ( Param >= 0 )
      v101 = Param;
    else
      v101 = -Param;
    *(_DWORD *)(v99 + 20) = v101;
    TargetIndiv = (System_Int32_array **)BuffEntity__GetTargetIndiv(v36, 0LL);
    *(_QWORD *)(v99 + 24) = TargetIndiv;
    sub_B0D840((BattleServantConfConponent_o *)(v99 + 24), TargetIndiv, v103, v104, v105, v106, v107, v108);
    *(_BYTE *)(v99 + 32) = BuffEntity__IsIncludeIgnoreIndividuality(v36, 0LL);
    *(_QWORD *)(v45 + 152) = v99;
    sub_B0D840(
      (BattleServantConfConponent_o *)(v45 + 152),
      (System_Int32_array **)v99,
      v109,
      v110,
      v111,
      v112,
      v113,
      v114);
    v54->fields.updateField = 1;
  }
  v115 = v36->fields.type;
  if ( (BYTE3(BuffList_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !BuffList_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(BuffList_TypeInfo);
  if ( BuffList__IsIntervalPossibleBuff(v115, 0LL) )
  {
    IntervalData = (System_Int32_array **)DataVals__GetIntervalData(dataVals_k__BackingField, 0LL);
    *(_QWORD *)(v45 + 360) = IntervalData;
    sub_B0D840((BattleServantConfConponent_o *)(v45 + 360), IntervalData, v117, v118, v119, v120, v121, v122);
  }
  if ( BattleBuffData__CheckInvalidSacrificeIndiv((BattleBuffData_BuffData_o *)v45, 0LL) )
    v54->fields.updateField = 1;
  ParamArray = (System_Int32_array **)DataVals__GetParamArray(dataVals_k__BackingField, 115, 0LL);
  *(_QWORD *)(v45 + 328) = ParamArray;
  sub_B0D840((BattleServantConfConponent_o *)(v45 + 328), ParamArray, v124, v125, v126, v127, v128, v129);
  *(_DWORD *)(v45 + 208) = BuffEntity__GetCardEffectId(v36, 0LL);
  v130 = v36->fields.type;
  if ( (BYTE3(BuffList_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !BuffList_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(BuffList_TypeInfo);
  if ( BuffList__CheckType(144, v130, 0LL) )
  {
    RelationId = BuffEntity__getRelationId(v36, 0LL);
    v134 = (BattleBuffData_RelationOverwriteData_o *)sub_B0D974(
                                                       BattleBuffData_RelationOverwriteData_TypeInfo,
                                                       v132,
                                                       v133);
    BattleBuffData_RelationOverwriteData___ctor(v134, 0LL);
    if ( RelationId >= 1 )
    {
      this = (BattleLogicFunction_o *)BuffEntity__getRelationId(v36, 0LL);
      if ( !v134 )
        goto LABEL_309;
      v134->fields.id = (int)this;
      v141 = BattleDataDefine_TypeInfo;
      if ( (BYTE3(BattleDataDefine_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !BattleDataDefine_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(BattleDataDefine_TypeInfo);
        v141 = BattleDataDefine_TypeInfo;
      }
      v134->fields.atkPriority = BuffEntity__getAtkRelationPriority(
                                   v36,
                                   v141->static_fields->OVERWRITE_ATK_RATE_PRIORITY,
                                   0LL);
      v134->fields.defPriority = BuffEntity__getDefRelationPriority(
                                   v36,
                                   BattleDataDefine_TypeInfo->static_fields->OVERWRITE_DEF_RATE_PRIORITY,
                                   0LL);
    }
    *(_QWORD *)(v45 + 168) = v134;
    sub_B0D840(
      (BattleServantConfConponent_o *)(v45 + 168),
      (System_Int32_array **)v134,
      v135,
      v136,
      v137,
      v138,
      v139,
      v140);
  }
  v142 = v36->fields.type;
  if ( (BYTE3(BuffList_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !BuffList_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(BuffList_TypeInfo);
  if ( BuffList__CheckType(154, v142, 0LL) )
  {
    this = (BattleLogicFunction_o *)BattleServantData__get_BuffData(ServantData, 0LL);
    if ( !this )
      goto LABEL_309;
    this = (BattleLogicFunction_o *)this->fields.wkStr;
    if ( !this )
      goto LABEL_309;
    BattleBuffData_SkillRankChangeData__UpdateAddRightAfter((BattleBuffData_SkillRankChangeData_o *)this, 1, 0LL);
    BattleActionData_BuffData__OnUpdateBuffType(v297, 1, 0LL);
  }
  v143 = BuffEntity__checkBuffType(v36, 7, 0LL);
  if ( v41 && v143 )
  {
    UpDownGiveHeal = BattleServantData__getUpDownGiveHeal(v41, ServantData, 0LL);
    v145 = BattleUtility__FloorToInt(UpDownGiveHeal * (float)*(int *)(v45 + 28), 0LL);
    v146 = *(_DWORD *)(v45 + 52);
    *(_DWORD *)(v45 + 28) = v145;
    v147 = BattleUtility__FloorToInt(UpDownGiveHeal * (float)v146, 0LL);
    v148 = *(_DWORD *)(v45 + 56);
    *(_DWORD *)(v45 + 52) = v147;
    *(_DWORD *)(v45 + 56) = BattleUtility__FloorToInt(UpDownGiveHeal * (float)v148, 0LL);
    BattleServantData__getIndividualities(v41, 0LL, 0LL);
  }
  *(_BYTE *)(v45 + 32) = 0;
  *(_BYTE *)(v45 + 33) = BattleLogicFunction_ProcListInArgs__get_IsPassive(v54, 0LL);
  if ( DataVals__isParam(dataVals_k__BackingField, 23, 0LL) )
    *(_BYTE *)(v45 + 33) = 1;
  if ( DataVals__isParam(dataVals_k__BackingField, 24, 0LL) )
    *(_BYTE *)(v45 + 33) = 0;
  if ( dataVals_k__BackingField->fields.flgBoost )
    BattleBuffData_BuffData__onState((BattleBuffData_BuffData_o *)v45, 2, 0LL);
  if ( DataVals__isRatioHpRange(dataVals_k__BackingField, 0LL) )
  {
    *(_DWORD *)(v45 + 72) = DataVals__GetParam(dataVals_k__BackingField, 20, 0, 0LL);
    *(_DWORD *)(v45 + 76) = DataVals__GetParam(dataVals_k__BackingField, 21, 0, 0LL);
    *(_DWORD *)(v45 + 80) = DataVals__GetParam(dataVals_k__BackingField, 30, 0, 0LL);
    *(_DWORD *)(v45 + 84) = DataVals__GetParam(dataVals_k__BackingField, 31, 0, 0LL);
  }
  else if ( DataVals__isParam(dataVals_k__BackingField, 20, 0LL) )
  {
    *(_DWORD *)(v45 + 72) = DataVals__GetParam(dataVals_k__BackingField, 20, 0, 0LL);
  }
  else if ( DataVals__isParam(dataVals_k__BackingField, 21, 0LL) )
  {
    *(_DWORD *)(v45 + 76) = DataVals__GetParam(dataVals_k__BackingField, 21, 0, 0LL);
  }
  if ( DataVals__isParamAddIndividuality(dataVals_k__BackingField, 0LL) )
  {
    v149 = (System_Int32_array **)DataVals__GetParamArray(dataVals_k__BackingField, 69, 0LL);
    *(_QWORD *)(v45 + 224) = v149;
    sub_B0D840((BattleServantConfConponent_o *)(v45 + 224), v149, v150, v151, v152, v153, v154, v155);
    v156 = (System_Int32_array **)DataVals__GetParamArray(dataVals_k__BackingField, 70, 0LL);
    *(_QWORD *)(v45 + 232) = v156;
    sub_B0D840((BattleServantConfConponent_o *)(v45 + 232), v156, v157, v158, v159, v160, v161, v162);
    v163 = (System_Int32_array **)DataVals__GetParamArray(dataVals_k__BackingField, 71, 0LL);
    *(_QWORD *)(v45 + 240) = v163;
    sub_B0D840((BattleServantConfConponent_o *)(v45 + 240), v163, v164, v165, v166, v167, v168, v169);
    *(_DWORD *)(v45 + 248) = DataVals__GetParam(dataVals_k__BackingField, 72, 0, 0LL);
    *(_DWORD *)(v45 + 252) = DataVals__GetParam(dataVals_k__BackingField, 59, 0, 0LL);
    *(_DWORD *)(v45 + 268) = DataVals__GetParam(dataVals_k__BackingField, 60, 0, 0LL);
  }
  v170 = v36->fields.type;
  if ( (BYTE3(BuffList_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !BuffList_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(BuffList_TypeInfo);
  if ( BuffList__CheckType(162, v170, 0LL) )
  {
    UpBuffRateBuffTypeList = (System_Int32_array **)BuffEntity__GetUpBuffRateBuffTypeList(v36, 0LL);
    *(_QWORD *)(v45 + 256) = UpBuffRateBuffTypeList;
    sub_B0D840((BattleServantConfConponent_o *)(v45 + 256), UpBuffRateBuffTypeList, v172, v173, v174, v175, v176, v177);
    *(_DWORD *)(v45 + 264) = BuffEntity__GetMaxBuffRate(v36, 0LL);
  }
  if ( DataVals__isParam(dataVals_k__BackingField, 22, 0LL) )
    BattleBuffData_BuffData__onState((BattleBuffData_BuffData_o *)v45, 64, 0LL);
  if ( DataVals__isParam(dataVals_k__BackingField, 25, 0LL) )
    BattleBuffData_BuffData__onState((BattleBuffData_BuffData_o *)v45, 128, 0LL);
  this = (BattleLogicFunction_o *)DataVals__isShowState(dataVals_k__BackingField, 0LL);
  if ( ((unsigned __int8)this & 1) != 0 )
  {
    ShowStateWarBoardEnemyEquip = DataVals__GetParam(dataVals_k__BackingField, 14, 0, 0LL);
LABEL_163:
    BattleBuffData_BuffData__setShowState((BattleBuffData_BuffData_o *)v45, ShowStateWarBoardEnemyEquip, 0LL);
    goto LABEL_181;
  }
  if ( *(_BYTE *)(v45 + 33) )
  {
    externalArg = v54->fields.externalArg;
    if ( !externalArg )
      goto LABEL_309;
    if ( externalArg->fields.isWarBoard )
    {
      if ( !v41 )
        goto LABEL_309;
      if ( v41->fields.isEnemy && externalArg->fields.grantSkillType == 12 )
      {
        ShowStateWarBoardEnemyEquip = BuffEntity__GetShowStateWarBoardEnemyEquip(v36, 0, 0LL);
        if ( ShowStateWarBoardEnemyEquip )
          goto LABEL_163;
        if ( (BYTE3(DataManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !DataManager_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
        }
        this = (BattleLogicFunction_o *)DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_1714548 *)Method_DataManager_GetMaster_BuffTypeDetailMaster___);
        if ( !this )
          goto LABEL_309;
        this = (BattleLogicFunction_o *)DataMasterBase_WarMaster__WarEntity__int___TryGetEntity(
                                          (DataMasterBase_WarMaster__WarEntity__int__o *)this,
                                          &entity,
                                          v36->fields.type,
                                          (const MethodInfo_2669C30 *)Method_DataMasterBase_BuffTypeDetailMaster__BuffTypeDetailEntity__int__TryGetEntity__);
        if ( ((unsigned __int8)this & 1) != 0 )
        {
          this = (BattleLogicFunction_o *)entity;
          if ( !entity )
            goto LABEL_309;
          this = (BattleLogicFunction_o *)BuffTypeDetailEntity__GetShowStateWarBoardEnemyEquip(
                                            (BuffTypeDetailEntity_o *)entity,
                                            0,
                                            0LL);
          ShowStateWarBoardEnemyEquip = (int)this;
          if ( (_DWORD)this )
            goto LABEL_163;
        }
      }
    }
    v180 = v9->fields.data;
    if ( !v180 )
      goto LABEL_309;
    this = (BattleLogicFunction_o *)v180->fields.battleEvent;
    if ( !this )
      goto LABEL_309;
    ((void (__fastcall *)(BattleLogicFunction_o *, __int64, Il2CppMethodPointer))this->klass[1].vtable._2_GetHashCode.method)(
      this,
      v45,
      this->klass[1].vtable._3_ToString.methodPtr);
  }
LABEL_181:
  if ( DataVals__IsOpponentOnly(dataVals_k__BackingField, 0LL) )
    BattleBuffData_BuffData__onState((BattleBuffData_BuffData_o *)v45, 2048, 0LL);
  if ( DataVals__isShowCommand(dataVals_k__BackingField, 0LL) )
    BattleBuffData_BuffData__onState((BattleBuffData_BuffData_o *)v45, 512, 0LL);
  if ( DataVals__IsAddIndividualty(dataVals_k__BackingField, 0LL) )
  {
    AddIndividualty = (System_Int32_array **)DataVals__GetAddIndividualty(dataVals_k__BackingField, 0LL);
    *(_QWORD *)(v45 + 120) = AddIndividualty;
    sub_B0D840((BattleServantConfConponent_o *)(v45 + 120), AddIndividualty, v182, v183, v184, v185, v186, v187);
  }
  if ( DataVals__IsAddLinkageTargetIndividualty(dataVals_k__BackingField, 0LL) )
  {
    LinkageTargetIndividualty = (System_Int32_array **)DataVals__GetLinkageTargetIndividualty(
                                                         dataVals_k__BackingField,
                                                         0LL);
    *(_QWORD *)(v45 + 128) = LinkageTargetIndividualty;
    sub_B0D840(
      (BattleServantConfConponent_o *)(v45 + 128),
      LinkageTargetIndividualty,
      v189,
      v190,
      v191,
      v192,
      v193,
      v194);
  }
  this = (BattleLogicFunction_o *)funcTargeta->fields._funcUnit_k__BackingField;
  if ( !this )
    goto LABEL_309;
  if ( BattleLogicFunctionProcess_FunctionUnitCheck__HasLinkedFuncUnit(
         (BattleLogicFunctionProcess_FunctionUnitCheck_o *)this,
         0LL)
    && DataVals__IsBehaveAsFamilyBuff(dataVals_k__BackingField, 0LL) )
  {
    BattleLogicFunction__BehaveLinkageBuffAsFamily(v9, (BattleBuffData_BuffData_o *)v45, funcTargeta, v195);
  }
  if ( DataVals__isParam(dataVals_k__BackingField, 98, 0LL) )
    BattleBuffData_BuffData__onState((BattleBuffData_BuffData_o *)v45, 0x800000, 0LL);
  if ( DataVals__isParam(dataVals_k__BackingField, 99, 0LL) )
    BattleBuffData_BuffData__onState((BattleBuffData_BuffData_o *)v45, 0x1000000, 0LL);
  if ( BuffEntity__getAppearanceId(v36, 0LL) >= 1 )
  {
    this = (BattleLogicFunction_o *)BattleServantData__isShiftableServant(ServantData, 0LL);
    if ( ((unsigned __int8)this & 1) != 0 )
      goto LABEL_204;
    v196 = v9->fields.data;
    if ( !v196 )
      goto LABEL_309;
    this = (BattleLogicFunction_o *)v196->fields.battleEvent;
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
      BattleBuffData_BuffData__onState((BattleBuffData_BuffData_o *)v45, 256, 0LL);
    }
  }
  *(_DWORD *)(v45 + 276) = DataVals__GetParam(dataVals_k__BackingField, 92, 0, 0LL);
  *(_DWORD *)(v45 + 280) = DataVals__GetParam(dataVals_k__BackingField, 93, 0, 0LL);
  *(_DWORD *)(v45 + 284) = DataVals__GetParam(dataVals_k__BackingField, 94, 0, 0LL);
  *(_BYTE *)(v45 + 288) = DataVals__GetParam(dataVals_k__BackingField, 95, 0, 0LL) == 1;
  *(_BYTE *)(v45 + 289) = DataVals__GetParam(dataVals_k__BackingField, 96, 0, 0LL) == 1;
  ValsList = (System_Int32_array **)DataVals__GetValsList(dataVals_k__BackingField, 101, 0LL);
  *(_QWORD *)(v45 + 304) = ValsList;
  sub_B0D840((BattleServantConfConponent_o *)(v45 + 304), ValsList, v198, v199, v200, v201, v202, v203);
  v204 = DataVals__GetParam(dataVals_k__BackingField, 5, 0, 0LL);
  v205 = *(_DWORD *)(v45 + 60);
  if ( v204 )
    v206 = v204;
  else
    v206 = 1000;
  *(_DWORD *)(v45 + 48) = v206;
  if ( v205 < 1 )
    goto LABEL_215;
  v207 = (UnityEngine_Object_o *)v9->fields.logic;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( UnityEngine_Object__op_Inequality(v207, 0LL, 0LL) )
  {
    this = (BattleLogicFunction_o *)v9->fields.logic;
    if ( !this )
      goto LABEL_309;
    v208 = BattleLogic__checkInField((BattleLogic_o *)this, *(_DWORD *)(v45 + 60), 0LL);
  }
  else
  {
LABEL_215:
    v208 = 1;
  }
  v209 = v36->fields.type;
  if ( (BYTE3(BuffList_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !BuffList_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(BuffList_TypeInfo);
  if ( BuffList__CheckAccumulation(v209, 0LL) )
    BattleServantData__resetAccumulationDamage(ServantData, 0LL);
  v210 = treasureDvcId;
  *(_QWORD *)(v45 + 88) = userCommandCodeId;
  if ( userCommandCodeId >= 1 )
  {
    this = (BattleLogicFunction_o *)v9->fields.data;
    if ( !this )
      goto LABEL_309;
    UserCommandCode = BattleData__getUserCommandCode((BattleData_o *)this, userCommandCodeId, 0LL);
    if ( UserCommandCode )
      *(_DWORD *)(v45 + 160) = UserCommandCode->fields.commandCodeId;
  }
  *(_DWORD *)(v45 + 348) = v290->fields.commandAssistId;
  *(_DWORD *)(v45 + 352) = v290->fields.cardIndex;
  ((void (__fastcall *)(BattleLogicFunctionProcess_FunctionTargetCheck_o *, __int64, Il2CppMethodPointer))funcTargeta->klass->vtable._6_ApplyPrevSaveBuffData.method)(
    funcTargeta,
    v45,
    funcTargeta->klass->vtable._7_MakeActionBuffData.methodPtr);
  MaxHp = BattleServantData__getMaxHp(ServantData, 0LL);
  userCommandCodeIda = ((__int64 (__fastcall *)(BattleServantData_o *, Il2CppMethodPointer))ServantData->klass->vtable._9_get_hp.method)(
                         ServantData,
                         ServantData->klass->vtable._10_set_hp.methodPtr);
  if ( !v208 )
    goto LABEL_232;
  v213 = v36->fields.type;
  if ( (BYTE3(BuffList_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !BuffList_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(BuffList_TypeInfo);
  v214 = BuffList__CheckUpdateHp(v213, 0LL);
  v210 = treasureDvcId;
  if ( v214 )
  {
    v297->fields.procType = 2;
    if ( BattleServantData__isLogicResultAlive(ServantData, 0LL) )
    {
      v215 = 1LL;
    }
    else
    {
      if ( BattleServantData__isGuts(ServantData, 0LL) )
      {
        v216 = ServantData->fields.uniqueId;
        IsCommandSideEffect = BattleLogicFunction_ProcListInArgs__get_IsCommandSideEffect(args, 0LL);
        NoEffectObject = BattleLogicFunction__getNoEffectObject(
                           v9,
                           v216,
                           funcIndex,
                           dataVals_k__BackingField,
                           IsCommandSideEffect,
                           0LL,
                           0LL,
                           v218);
        this = (BattleLogicFunction_o *)v291;
        if ( !v291 )
          goto LABEL_309;
        BattleActionData__addAction(v291, NoEffectObject, 0LL);
      }
      v215 = 0LL;
    }
    ((void (__fastcall *)(BattleLogicFunctionProcess_FunctionTargetCheck_o *, BattleActionData_BuffData_o *, __int64, __int64, __int64, Il2CppMethodPointer))funcTargeta->klass->vtable._8_AddBuff.method)(
      funcTargeta,
      v297,
      v45,
      1LL,
      v215,
      funcTargeta->klass->vtable._9_MakeWrapTarget.methodPtr);
    this = (BattleLogicFunction_o *)v291;
    if ( !v291 )
      goto LABEL_309;
    BattleActionData__addReflectLogicResultServantId(v291, uniqueId, 0LL);
    v222 = (BattleActionEffect_AddChangeMaxHpBuff_o *)sub_B0D974(
                                                        BattleActionEffect_AddChangeMaxHpBuff_TypeInfo,
                                                        v220,
                                                        v221);
    BattleActionEffect_AddChangeMaxHpBuff___ctor(v222, 0LL);
    this = (BattleLogicFunction_o *)sub_B0D8BC(BattleBuffData_BuffData___TypeInfo, 1LL);
    if ( !this )
      goto LABEL_309;
    v223 = this;
    this = (BattleLogicFunction_o *)sub_B0D964(v45, this->klass->_1.element_class);
    if ( !this )
    {
      v286 = sub_B0D99C(0LL);
      sub_B0D948(v286, 0LL);
    }
    if ( !LODWORD(v223->fields.logic) )
      goto LABEL_310;
    v223->fields.logictarget = (struct BattleLogicTarget_o *)v45;
    sub_B0D840(
      (BattleServantConfConponent_o *)&v223->fields.logictarget,
      (System_Int32_array **)v45,
      v224,
      v225,
      v226,
      v227,
      v228,
      v229);
    this = (BattleLogicFunction_o *)BattleServantData__getNowHp(ServantData, 0LL);
    if ( !v222 )
      goto LABEL_309;
    v230 = (System_Int32_array **)((__int64 (__fastcall *)(BattleActionEffect_AddChangeMaxHpBuff_o *, BattleLogicFunction_o *, _QWORD, _QWORD, Il2CppMethodPointer))v222->klass->vtable._7_InitBuff.method)(
                                    v222,
                                    v223,
                                    uniqueId,
                                    (unsigned int)((_DWORD)this - userCommandCodeIda),
                                    v222->klass->vtable._8_PartialPreActionProc.methodPtr);
    v297->fields.EffectProc = (struct BattleActionEffect_Base_o *)v230;
    sub_B0D840((BattleServantConfConponent_o *)&v297->fields.EffectProc, v230, v231, v232, v233, v234, v235, v236);
    v95 = v290;
  }
  else
  {
LABEL_232:
    ((void (__fastcall *)(BattleLogicFunctionProcess_FunctionTargetCheck_o *, BattleActionData_BuffData_o *, __int64, bool, _QWORD, Il2CppMethodPointer))funcTargeta->klass->vtable._8_AddBuff.method)(
      funcTargeta,
      v297,
      v45,
      v208,
      0LL,
      funcTargeta->klass->vtable._9_MakeWrapTarget.methodPtr);
  }
  id = v36->fields.id;
  if ( id == ConstantMaster__getValue((System_String_o *)StringLiteral_13378/*"TAMAMOCAT_STUN_BUFF_ID"*/, 0LL) )
  {
    v240 = (System_Collections_Generic_List_int__o *)sub_B0D974(
                                                       System_Collections_Generic_List_int__TypeInfo,
                                                       v238,
                                                       v239);
    System_Collections_Generic_List_int____ctor(
      v240,
      (const MethodInfo_2FAF1A4 *)Method_System_Collections_Generic_List_int___ctor__);
    v300 = 1;
    for ( i = System_Int32__ToString((int32_t)&v300, 0LL); ; i = System_Int32__ToString((int32_t)&v300, 0LL) )
    {
      v244 = System_String__Concat_43849904((System_String_o *)StringLiteral_13379/*"TAMAMOCAT_TREASURE_DEVICE_ID_"*/, i, 0LL);
      if ( ConstantMaster__getValue(v244, 0LL) == -1 )
        break;
      v242 = System_Int32__ToString((int32_t)&v300, 0LL);
      v243 = System_String__Concat_43849904((System_String_o *)StringLiteral_13379/*"TAMAMOCAT_TREASURE_DEVICE_ID_"*/, v242, 0LL);
      this = (BattleLogicFunction_o *)ConstantMaster__getValue(v243, 0LL);
      if ( (_DWORD)this == v210 )
      {
        if ( !v41 )
          goto LABEL_309;
        BattleServantData__SetIsSleepWaitMode(v41, 1, 0LL);
      }
      ++v300;
    }
  }
  this = (BattleLogicFunction_o *)v9->fields.data;
  if ( !this )
    goto LABEL_309;
  QuestIndividualities = BattleData__getQuestIndividualities((BattleData_o *)this, 0LL);
  v246 = (UnityEngine_Object_o *)v9->fields.logic;
  v247 = QuestIndividualities;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  this = (BattleLogicFunction_o *)UnityEngine_Object__op_Inequality(v246, 0LL, 0LL);
  perf = 0LL;
  if ( ((unsigned __int8)this & 1) != 0 )
  {
    v249 = v9->fields.logic;
    if ( !v249 )
      goto LABEL_309;
    perf = v249->fields.perf;
  }
  BattleServantData__updateConditionsBuff(ServantData, v247, perf, 0LL);
  if ( BuffEntity__checkBuffType(v36, 133, 0LL) || *(_QWORD *)(v45 + 312) )
  {
    v250 = (UnityEngine_Object_o *)v9->fields.logic;
    if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    }
    if ( UnityEngine_Object__op_Inequality(v250, 0LL, 0LL) )
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
    v251 = (int)this->fields.logic;
    v252 = this;
    if ( v251 >= 1 )
    {
      v253 = 0;
      while ( v253 < v251 )
      {
        this = (BattleLogicFunction_o *)*((_QWORD *)&v252->fields.logictarget + (int)v253);
        if ( !this )
          goto LABEL_309;
        BattleServantData__updateBuff((BattleServantData_o *)this, 1, 1, 0LL);
        v251 = (int)v252->fields.logic;
        if ( (int)++v253 >= v251 )
          goto LABEL_272;
      }
LABEL_310:
      v285 = sub_B0D9A8(this);
      sub_B0D948(v285, 0LL);
    }
  }
LABEL_272:
  this = (BattleLogicFunction_o *)BattleServantData__getMaxHp(ServantData, 0LL);
  if ( (int)this < MaxHp )
  {
    this = (BattleLogicFunction_o *)BuffEntity__checkBuffType(v36, 41, 0LL);
    if ( ((unsigned __int8)this & 1) != 0 )
    {
      v254 = ServantData->fields.maxhp;
      if ( (BYTE3(System_Math_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !System_Math_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(System_Math_TypeInfo);
      }
      this = (BattleLogicFunction_o *)System_Math__Max_44559528(0, userCommandCodeIda - v254, 0LL);
      *(_DWORD *)(v45 + 136) = (_DWORD)this;
    }
  }
  v255 = v9->fields.data;
  if ( !v255 )
    goto LABEL_309;
  this = (BattleLogicFunction_o *)v255->fields.battleEvent;
  if ( !this )
    goto LABEL_309;
  *(_BYTE *)(v45 + 212) = (*(__int64 (__fastcall **)(BattleLogicFunction_o *, __int64, BuffEntity_o *, DataVals_o *, _QWORD))&this->klass[1]._2.field_count)(
                            this,
                            v45,
                            v36,
                            dataVals_k__BackingField,
                            *(_QWORD *)&this->klass[1]._2.interfaces_count) & 1;
  if ( BuffEntity__checkBuffType(v36, 140, 0LL) )
  {
    buffData = ServantData->fields.buffData;
    v259 = (BattleBuffData_CheckIndividualitiesData_o *)sub_B0D974(
                                                          BattleBuffData_CheckIndividualitiesData_TypeInfo,
                                                          v256,
                                                          v257);
    BattleBuffData_CheckIndividualitiesData___ctor(v259, ServantData, 0LL, 0LL, 0LL, 0LL, 0LL);
    if ( !buffData )
      goto LABEL_309;
    this = (BattleLogicFunction_o *)BattleBuffData__getBuffList_30806472(buffData, 83, v259, 1, 0, 0LL, 0LL);
    if ( !this )
      goto LABEL_309;
    if ( this->fields.logic )
      BattleLogicFunction__functionResetCommandCard(v9, v260, v261, v262, v263, v264);
  }
  if ( DataVals__IsOnParty(dataVals_k__BackingField, 0LL) )
    *(_DWORD *)(v45 + 272) = v293;
  v265 = BattleLogicFunction_ProcListInArgs__get_IsCommandSideEffect(args, 0LL);
  v266 = (BattleActionData_BuffData_o *)((__int64 (__fastcall *)(BattleLogicFunctionProcess_FunctionTargetCheck_o *, BattleActionData_BuffData_o *, __int64, struct FunctionEntity_o *, bool, Il2CppMethodPointer))funcTargeta->klass->vtable._10_MakeAddActionBuffData.method)(
                                          funcTargeta,
                                          v297,
                                          v45,
                                          funcEnt,
                                          v265,
                                          funcTargeta->klass->vtable._11_GetConvertBuffEntity.methodPtr);
  if ( BuffEntity__checkBuffType(v36, 142, 0LL) )
  {
    v267 = (UnityEngine_Object_o *)v9->fields.logic;
    if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    }
    this = (BattleLogicFunction_o *)UnityEngine_Object__op_Inequality(v267, 0LL, 0LL);
    if ( ((unsigned __int8)this & 1) != 0 )
    {
      v274 = v9->fields.logic;
      if ( !v274 )
        goto LABEL_309;
      if ( !v266 )
        goto LABEL_309;
      this = (BattleLogicFunction_o *)v274->fields.perf;
      if ( !this )
        goto LABEL_309;
      BattlePerformance__SetMasterBuffEffectData(
        (BattlePerformance_o *)this,
        v266->fields.popLabel,
        v266->fields.popColor,
        v266->fields.effectList,
        0LL);
    }
    else if ( !v266 )
    {
      goto LABEL_309;
    }
    v275 = (System_Int32_array **)StringLiteral_1/*""*/;
    v266->fields.popLabel = (struct System_String_o *)StringLiteral_1/*""*/;
    sub_B0D840((BattleServantConfConponent_o *)&v266->fields.popLabel, v275, v268, v269, v270, v271, v272, v273);
    v266->fields.popIcon = 0;
    v276 = (System_Int32_array **)sub_B0D8BC(int___TypeInfo, 0LL);
    v266->fields.effectList = (struct System_Int32_array *)v276;
    sub_B0D840((BattleServantConfConponent_o *)&v266->fields.effectList, v276, v277, v278, v279, v280, v281, v282);
    v266->fields.isBuffEffectTargetMaster = 1;
  }
  if ( DataVals__IsProgressTurnOnBoard(dataVals_k__BackingField, 0LL) )
    *(_BYTE *)(v45 + 368) = 1;
  BattleLogicFunction__AfterAddedBuffProcess(v9, ServantData, v36, v283);
  if ( BuffEntity__getDamageRelease(v36, 0LL) >= 1
    && !BattleServantData__isLogicResultAlive(ServantData, 0LL)
    && (this = (BattleLogicFunction_o *)BattleServantData__isGuts(ServantData, 0LL), ((unsigned __int8)this & 1) != 0)
    || (this = (BattleLogicFunction_o *)BuffEntity__getDamageRelease(v36, 0LL), (_DWORD)this == -1) )
  {
    ServantData->fields.isGutsSleepRelease = 0;
  }
  if ( !v291
    || (BattleActionData__setBuffData(v291, v266, dataVals_k__BackingField, 0LL),
        (this = (BattleLogicFunction_o *)v9->fields.data) == 0LL) )
  {
LABEL_309:
    sub_B0D97C(this);
  }
  BattleData__AddFreshBuffList((BattleData_o *)this, v266, 0LL);
  BattleActionData__addAction(v95, v291, 0LL);
  return (BattleBuffData_BuffData_o *)v45;
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
  System_Int32_array **v23; // x0
  System_String_array **v24; // x2
  System_String_array **v25; // x3
  System_Boolean_array **v26; // x4
  System_Int32_array **v27; // x5
  System_Int32_array *v28; // x6
  System_Int32_array *v29; // x7
  int32_t v30; // w26
  int32_t v31; // w27
  FunctionEntity_o *funcEnt; // x28
  _BOOL8 v33; // x0
  const MethodInfo *v34; // x6
  __int64 v35; // x1
  __int64 v36; // x2
  BattleActionData_ShiftServant_o *v37; // x19
  __int64 v38; // x1
  __int64 v39; // x2
  SimpleHpData_o *v40; // x19
  __int64 v41; // x1
  __int64 v42; // x2
  EnemySimpleHpData_o *v43; // x27
  unsigned int Value; // w0
  int v45; // w0
  int v46; // w24
  int v47; // w22
  int32_t v48; // w25
  int32_t Param; // w0
  __int64 v50; // x1
  __int64 v51; // x2
  SimpleHpData_o *v52; // x26
  unsigned int CurrentShiftPos; // w28
  unsigned int MaxShiftIconPos; // w0
  int v55; // [xsp+Ch] [xbp-74h]
  BattleActionData_ShiftServant_o *v56; // [xsp+10h] [xbp-70h]
  BattleActionData_o *v57; // [xsp+18h] [xbp-68h]
  BattleActionData_o *v58; // [xsp+20h] [xbp-60h]
  BattleLogicFunction_o *v59; // [xsp+28h] [xbp-58h]

  v59 = this;
  if ( (byte_4217049 & 1) == 0 )
  {
    sub_B0D8A4(&BattleActionData_TypeInfo, mainAction);
    sub_B0D8A4(&EnemySimpleHpData_TypeInfo, v10);
    sub_B0D8A4(&System_Math_TypeInfo, v11);
    sub_B0D8A4(&BattleActionData_ShiftServant_TypeInfo, v12);
    this = (BattleLogicFunction_o *)sub_B0D8A4(&SimpleHpData_TypeInfo, v13);
    byte_4217049 = 1;
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
                                          v59,
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
    goto LABEL_33;
  }
  v22 = sub_B0D974(BattleActionData_TypeInfo, v16, v17);
  BattleActionData___ctor((BattleActionData_o *)v22, 0LL);
  if ( !v22 )
    goto LABEL_33;
  *(_DWORD *)(v22 + 32) = targetSvtData->fields.uniqueId;
  *(_DWORD *)(v22 + 36) = targetSvtData->fields.uniqueId;
  v23 = (System_Int32_array **)((__int64 (__fastcall *)(BattleActionData_BaseShiftGaugeData_o *, Il2CppMethodPointer))shiftGauge->klass->vtable._7_unknown.method)(
                                 shiftGauge,
                                 shiftGauge->klass->vtable._8_unknown.methodPtr);
  *(_QWORD *)(v22 + 64) = v23;
  sub_B0D840((BattleServantConfConponent_o *)(v22 + 64), v23, v24, v25, v26, v27, v28, v29);
  if ( !dataVals_k__BackingField )
    goto LABEL_33;
  if ( !procArg_k__BackingField )
    goto LABEL_33;
  v30 = dataVals_k__BackingField->fields.funcIndex;
  v31 = targetSvtData->fields.uniqueId;
  funcEnt = dataVals_k__BackingField->fields.funcEnt;
  v33 = BattleLogicFunction_ProcListInArgs__get_IsCommandSideEffect(procArg_k__BackingField, 0LL);
  this = (BattleLogicFunction_o *)BattleLogicFunction__getFunctionObject(
                                    (BattleLogicFunction_o *)v33,
                                    funcEnt,
                                    v31,
                                    v30,
                                    v33,
                                    0LL,
                                    v34);
  if ( !this )
    goto LABEL_33;
  v57 = (BattleActionData_o *)v22;
  v58 = mainAction;
  BYTE6(this[1].fields.logictarget) = 0;
  BattleActionData__setBuffData((BattleActionData_o *)v22, (BattleActionData_BuffData_o *)this, 0LL, 0LL);
  v37 = (BattleActionData_ShiftServant_o *)sub_B0D974(BattleActionData_ShiftServant_TypeInfo, v35, v36);
  BattleActionData_ShiftServant___ctor(v37, 0LL);
  if ( !v37 )
    goto LABEL_33;
  v56 = v37;
  BattleActionData_ShiftServant__setBeforeSvtData(v37, targetSvtData, 0LL);
  v40 = (SimpleHpData_o *)sub_B0D974(SimpleHpData_TypeInfo, v38, v39);
  SimpleHpData___ctor(v40, targetSvtData, 0LL);
  v43 = (EnemySimpleHpData_o *)sub_B0D974(EnemySimpleHpData_TypeInfo, v41, v42);
  EnemySimpleHpData___ctor(v43, targetSvtData, 0LL);
  ((void (__fastcall *)(BattleActionData_BaseShiftGaugeData_o *, BattleServantData_o *, Il2CppMethodPointer))shiftGauge->klass->vtable._12_Init.method)(
    shiftGauge,
    targetSvtData,
    shiftGauge->klass->vtable._13_InitShiftHpPos.methodPtr);
  Value = DataVals__GetValue(dataVals_k__BackingField, 0LL);
  v45 = ((__int64 (__fastcall *)(BattleActionData_BaseShiftGaugeData_o *, BattleServantData_o *, _QWORD, Il2CppMethodPointer))shiftGauge->klass->vtable._9_unknown.method)(
          shiftGauge,
          targetSvtData,
          Value,
          shiftGauge->klass->vtable._10_unknown.methodPtr);
  v46 = 1;
  v55 = v45;
  if ( v45 >= 0 )
    v47 = v45;
  else
    v47 = -v45;
  if ( v45 > 0 )
    v48 = 1;
  else
    v48 = -1;
  while ( 1 )
  {
    if ( (BYTE3(System_Math_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !System_Math_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(System_Math_TypeInfo);
    if ( v46 > v47 )
      break;
    BattleServantData__SetShiftServantChange(targetSvtData, v59->fields.data, v43, v48, 0LL);
    Param = DataVals__GetParam(dataVals_k__BackingField, 58, 0, 0LL);
    ((void (__fastcall *)(BattleActionData_BaseShiftGaugeData_o *, BattleServantData_o *, bool, Il2CppMethodPointer))shiftGauge->klass->vtable._10_unknown.method)(
      shiftGauge,
      targetSvtData,
      Param > 0,
      shiftGauge->klass->vtable._11_unknown.methodPtr);
    v52 = (SimpleHpData_o *)sub_B0D974(SimpleHpData_TypeInfo, v50, v51);
    SimpleHpData___ctor(v52, targetSvtData, 0LL);
    CurrentShiftPos = BattleServantData__GetCurrentShiftPos(targetSvtData, 0LL);
    MaxShiftIconPos = BattleServantData__GetMaxShiftIconPos(targetSvtData, 0LL);
    ((void (__fastcall *)(BattleActionData_BaseShiftGaugeData_o *, _QWORD, _QWORD, SimpleHpData_o *, SimpleHpData_o *, Il2CppMethodPointer))shiftGauge->klass->vtable._11_unknown.method)(
      shiftGauge,
      CurrentShiftPos,
      MaxShiftIconPos,
      v40,
      v52,
      shiftGauge->klass->vtable._12_Init.methodPtr);
    ++v46;
    v40 = v52;
  }
  if ( v55 )
  {
    this = (BattleLogicFunction_o *)v59->fields.logic;
    if ( !this )
      goto LABEL_33;
    BattleLogic__actEnemyPtPassiveSkill((BattleLogic_o *)this, targetSvtData->fields.uniqueId, 1, 0, 0LL);
  }
  BattleActionData_ShiftServant__setCheckSvtData(v56, targetSvtData, 0LL);
  BattleActionData__setShiftServant(v57, v56, 0LL);
  BattleActionData__SetShiftGauge(v57, shiftGauge, 0LL);
  if ( !v58 )
LABEL_33:
    sub_B0D97C(this);
  BattleActionData__AddAfterActionData(v58, v57, 0, 0LL);
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
  __int64 v84; // x1
  __int64 v85; // x2
  int32_t uniqueId; // w23
  bool isEffectSummon; // w24
  __int64 v89; // x0
  __int64 v90; // x0
  int32_t Value; // [xsp+4h] [xbp-4Ch] BYREF
  __int64 v92; // [xsp+8h] [xbp-48h] BYREF
  int32_t targetIndex[2]; // [xsp+18h] [xbp-38h] BYREF

  if ( (byte_421703A & 1) == 0 )
  {
    sub_B0D8A4(&BattleActionData_TypeInfo, *(_QWORD *)&playerId);
    sub_B0D8A4(&string___TypeInfo, v12);
    sub_B0D8A4(&StringLiteral_16675/*"baseVals.GetValue:"*/, v13);
    sub_B0D8A4(&StringLiteral_15922/*"] Index["*/, v14);
    sub_B0D8A4(&StringLiteral_285/*" 召喚！NPC["*/, v15);
    sub_B0D8A4(&StringLiteral_15923/*"] UniqueID["*/, v16);
    sub_B0D8A4(&StringLiteral_18989/*"functionCallServant>"*/, v17);
    sub_B0D8A4(&StringLiteral_15917/*"]"*/, v18);
    byte_421703A = 1;
  }
  *(_QWORD *)targetIndex = 0LL;
  v92 = 0LL;
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
    System_String__Concat_43849904((System_String_o *)StringLiteral_16675/*"baseVals.GetValue:"*/, v24, 0LL);
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
      HIDWORD(v92) = BattleData__getNextUniqueID((BattleData_o *)data, 0LL);
      data = (__int64)this->fields.data;
      if ( !data )
        goto LABEL_55;
      LODWORD(v92) = BattleData__getNextNextIndex((BattleData_o *)data, 0LL);
      data = sub_B0D8BC(string___TypeInfo, 7LL);
      if ( !data )
        goto LABEL_55;
      v32 = (System_String_array *)data;
      data = StringLiteral_285/*" 召喚！NPC["*/;
      if ( StringLiteral_285/*" 召喚！NPC["*/ )
      {
        data = sub_B0D964(StringLiteral_285/*" 召喚！NPC["*/, v32->obj.klass->_1.element_class);
        if ( !data )
          goto LABEL_57;
        v33 = (System_Int32_array **)StringLiteral_285/*" 召喚！NPC["*/;
      }
      else
      {
        v33 = 0LL;
      }
      if ( !v32->max_length )
        goto LABEL_56;
      v32->m_Items[0] = (System_String_o *)v33;
      sub_B0D840((BattleServantConfConponent_o *)v32->m_Items, v33, v26, v27, v28, v29, v30, v31);
      data = (__int64)System_Int32__ToString((int32_t)targetIndex, 0LL);
      v41 = (System_Int32_array **)data;
      if ( !data || (data = sub_B0D964(data, v32->obj.klass->_1.element_class)) != 0 )
      {
        if ( v32->max_length <= 1 )
          goto LABEL_56;
        v32->m_Items[1] = (System_String_o *)v41;
        sub_B0D840((BattleServantConfConponent_o *)&v32->m_Items[1], v41, v35, v36, v37, v38, v39, v40);
        data = StringLiteral_15923/*"] UniqueID["*/;
        if ( StringLiteral_15923/*"] UniqueID["*/ )
        {
          data = sub_B0D964(StringLiteral_15923/*"] UniqueID["*/, v32->obj.klass->_1.element_class);
          if ( !data )
            goto LABEL_57;
          v48 = (System_Int32_array **)StringLiteral_15923/*"] UniqueID["*/;
        }
        else
        {
          v48 = 0LL;
        }
        if ( v32->max_length <= 2 )
          goto LABEL_56;
        v32->m_Items[2] = (System_String_o *)v48;
        sub_B0D840((BattleServantConfConponent_o *)&v32->m_Items[2], v48, v42, v43, v44, v45, v46, v47);
        data = (__int64)System_Int32__ToString((int32_t)&v92 + 4, 0LL);
        v55 = (System_Int32_array **)data;
        if ( !data || (data = sub_B0D964(data, v32->obj.klass->_1.element_class)) != 0 )
        {
          if ( v32->max_length <= 3 )
            goto LABEL_56;
          v32->m_Items[3] = (System_String_o *)v55;
          sub_B0D840((BattleServantConfConponent_o *)&v32->m_Items[3], v55, v49, v50, v51, v52, v53, v54);
          data = StringLiteral_15922/*"] Index["*/;
          if ( StringLiteral_15922/*"] Index["*/ )
          {
            data = sub_B0D964(StringLiteral_15922/*"] Index["*/, v32->obj.klass->_1.element_class);
            if ( !data )
              goto LABEL_57;
            v62 = (System_Int32_array **)StringLiteral_15922/*"] Index["*/;
          }
          else
          {
            v62 = 0LL;
          }
          if ( v32->max_length <= 4 )
            goto LABEL_56;
          v32->m_Items[4] = (System_String_o *)v62;
          sub_B0D840((BattleServantConfConponent_o *)&v32->m_Items[4], v62, v56, v57, v58, v59, v60, v61);
          data = (__int64)System_Int32__ToString((int32_t)&v92, 0LL);
          v69 = (System_Int32_array **)data;
          if ( !data || (data = sub_B0D964(data, v32->obj.klass->_1.element_class)) != 0 )
          {
            if ( v32->max_length <= 5 )
              goto LABEL_56;
            v32->m_Items[5] = (System_String_o *)v69;
            sub_B0D840((BattleServantConfConponent_o *)&v32->m_Items[5], v69, v63, v64, v65, v66, v67, v68);
            data = StringLiteral_15917/*"]"*/;
            if ( !StringLiteral_15917/*"]"*/ )
            {
              v76 = 0LL;
              goto LABEL_45;
            }
            data = sub_B0D964(StringLiteral_15917/*"]"*/, v32->obj.klass->_1.element_class);
            if ( data )
            {
              v76 = (System_Int32_array **)StringLiteral_15917/*"]"*/;
LABEL_45:
              if ( v32->max_length > 6 )
              {
                v32->m_Items[6] = (System_String_o *)v76;
                sub_B0D840((BattleServantConfConponent_o *)&v32->m_Items[6], v76, v70, v71, v72, v73, v74, v75);
                System_String__Concat_43930028(v32, 0LL);
                data = (__int64)this->fields.data;
                if ( !data )
                  goto LABEL_55;
                data = (__int64)BattleData__createSummonEnemyServantData(
                                  (BattleData_o *)data,
                                  SHIDWORD(v92),
                                  v92,
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
                      v34 = (BattleActionData_o *)sub_B0D974(BattleActionData_TypeInfo, v84, v85);
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
                  sub_B0D97C(data);
                }
              }
LABEL_56:
              v89 = sub_B0D9A8(data);
              sub_B0D948(v89, 0LL);
            }
          }
        }
      }
LABEL_57:
      v90 = sub_B0D99C(data);
      sub_B0D948(v90, 0LL);
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
  int32_t Value; // w21
  int32_t Param; // w22
  int32_t v12; // w0

  if ( (byte_421703D & 1) == 0 )
  {
    sub_B0D8A4(&BattleActionData_TypeInfo, *(_QWORD *)&actionId);
    byte_421703D = 1;
  }
  v8 = (BattleActionData_o *)sub_B0D974(BattleActionData_TypeInfo, *(_QWORD *)&actionId, funcEnt);
  BattleActionData___ctor(v8, 0LL);
  if ( !v8 || (v8->fields.actorId = actionId, !baseVals) )
    sub_B0D97C(v9);
  Value = DataVals__GetValue(baseVals, 0LL);
  Param = DataVals__GetParam(baseVals, 4, 0, 0LL);
  v12 = DataVals__GetParam(baseVals, 111, 0, 0LL);
  BattleActionData__setChangeBg(v8, Value, Param, v12, 0LL);
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

  if ( (byte_421703C & 1) == 0 )
  {
    sub_B0D8A4(&BattleActionData_TypeInfo, *(_QWORD *)&actionId);
    sub_B0D8A4(&BattleActionData_ShiftServant_TypeInfo, v11);
    byte_421703C = 1;
  }
  data = this->fields.data;
  if ( !data )
    goto LABEL_9;
  ServantData = BattleData__getServantData(data, targetId, 0LL);
  v16 = (BattleActionData_o *)sub_B0D974(BattleActionData_TypeInfo, v14, v15);
  BattleActionData___ctor(v16, 0LL);
  if ( !v16 )
    goto LABEL_9;
  v16->fields.actorId = actionId;
  v19 = (BattleActionData_ShiftServant_o *)sub_B0D974(BattleActionData_ShiftServant_TypeInfo, v17, v18);
  BattleActionData_ShiftServant___ctor(v19, 0LL);
  if ( !v19
    || (BattleActionData_ShiftServant__setBeforeSvtData(v19, ServantData, 0LL), !ServantData)
    || (BattleServantData__setChangeServant(ServantData, this->fields.data, baseVals, 0LL),
        BattleActionData_ShiftServant__setCheckSvtData(v19, ServantData, 0LL),
        BattleActionData__setShiftServant(v16, v19, 0LL),
        (data = (BattleData_o *)this->fields.logic) == 0LL) )
  {
LABEL_9:
    sub_B0D97C(data);
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

  if ( (byte_4217029 & 1) == 0 )
  {
    sub_B0D8A4(&BattleActionData_TypeInfo, *(_QWORD *)&playerId);
    byte_4217029 = 1;
  }
  v15 = (BattleActionData_o *)sub_B0D974(BattleActionData_TypeInfo, *(_QWORD *)&playerId, *(_QWORD *)&targetId);
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
    sub_B0D97C(data);
  }
  BattleActionData__setDamageData(v15, v20, baseVals, 0, 0, 0LL);
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

  if ( (byte_4217032 & 1) == 0 )
  {
    sub_B0D8A4(&BattleActionData_TypeInfo, *(_QWORD *)&targetId);
    byte_4217032 = 1;
  }
  *absorptionCount = 0;
  v15 = (BattleActionData_o *)sub_B0D974(BattleActionData_TypeInfo, *(_QWORD *)&targetId, funcEnt);
  BattleActionData___ctor(v15, 0LL);
  data = this->fields.data;
  if ( !data )
    goto LABEL_22;
  data = (BattleData_o *)BattleData__getServantData(data, targetId, 0LL);
  if ( !data )
    goto LABEL_22;
  v17 = (BattleServantData_o *)data;
  if ( !HIBYTE(data->fields.combodata) )
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
  if ( !data || (HIDWORD(data->fields.rootfsm) = 5, *absorptionCount = v17->fields.nexttpturn - nexttpturn, !v15) )
LABEL_22:
    sub_B0D97C(data);
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
  BattleBuffData_CheckIndividualitiesData_o *v27; // x20
  char v28; // w20
  struct BattleData_o *v29; // x8
  System_String_o *v30; // x0
  float UpDownGiveHeal; // s0
  const MethodInfo *v33; // [xsp+8h] [xbp-68h]
  FunctionEntity_o *v34; // [xsp+10h] [xbp-60h]
  int32_t healPoint[2]; // [xsp+18h] [xbp-58h] BYREF

  LODWORD(v9) = overwriteHeal;
  if ( (byte_421702C & 1) == 0 )
  {
    sub_B0D8A4(&BattleActionData_TypeInfo, *(_QWORD *)&playerId);
    sub_B0D8A4(&BattleBuffData_CheckIndividualitiesData_TypeInfo, v17);
    sub_B0D8A4(&StringLiteral_18990/*"functionGainHp:"*/, v18);
    byte_421702C = 1;
  }
  *(_QWORD *)healPoint = 0LL;
  v19 = (BattleActionData_o *)sub_B0D974(BattleActionData_TypeInfo, *(_QWORD *)&playerId, *(_QWORD *)&targetId);
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
  healPoint[1] = v9;
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
    healPoint[1] = 0;
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
    healPoint[1] = 0;
    goto LABEL_21;
  }
  v34 = funcEnt;
  buffData = v22->fields.buffData;
  v27 = (BattleBuffData_CheckIndividualitiesData_o *)sub_B0D974(
                                                       BattleBuffData_CheckIndividualitiesData_TypeInfo,
                                                       v24,
                                                       v25);
  BattleBuffData_CheckIndividualitiesData___ctor(v27, v22, 0LL, 0LL, 0LL, 0LL, 0LL);
  if ( !buffData )
LABEL_26:
    sub_B0D97C(data);
  data = (BattleData_o *)BattleBuffData__isTurnBuff(buffData, 42, v27, 1, 0LL);
  funcEnt = v34;
  if ( ((unsigned __int8)data & 1) != 0 )
    goto LABEL_14;
  if ( v21 )
  {
    UpDownGiveHeal = BattleServantData__getUpDownGiveHeal(v21, v22, 0LL);
    LODWORD(v9) = BattleUtility__FloorToInt(UpDownGiveHeal * (float)(int)v9, 0LL);
    healPoint[1] = v9;
  }
  healPoint[0] = 1;
  data = (BattleData_o *)BattleServantData__getUpDownHeal(v22, healPoint, 0LL);
  v28 = 0;
  v9 = (int)data * (__int64)(int)v9 / healPoint[0];
  healPoint[1] = v9;
  baseVals->fields.isShowForcedEffect = 1;
LABEL_21:
  healPoint[1] = BattleLogicFunction__GetActualRecoveryHealPoint((BattleLogicFunction_o *)data, baseVals, v22, v9, v23);
  v30 = System_Int32__ToString((int32_t)&healPoint[1], 0LL);
  System_String__Concat_43849904((System_String_o *)StringLiteral_18990/*"functionGainHp:"*/, v30, 0LL);
  BattleLogicFunction__SetGainHpBuff(
    this,
    v19,
    healPoint[1],
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
  BattleActionData_o *v6; // x22
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
  __int64 v20; // x1
  __int64 v21; // x2
  System_Collections_Generic_List_VoiceCondType_Type__o *v22; // x20
  int logic; // w8
  unsigned int v24; // w25
  int v25; // w19
  DataVals_o *v26; // x26
  int32_t *p_funcType; // x28
  BattleLogicFunction_o *v28; // x19
  System_String_o *v29; // x20
  const MethodInfo *v30; // x4
  BattleLogicFunction_c *klass; // x8
  BattleLogicFunction_o *v32; // x23
  unsigned __int64 v33; // x10
  int32_t *p_offset; // x11
  __int64 v35; // x0
  __int64 v36; // x0
  __int64 v37; // x27
  BattleLogicFunction_ProcListInArgs_o *v38; // x0
  int32_t actorId; // w19
  FunctionEntity_o *funcEnt; // x22
  int32_t funcIndex; // w24
  bool IsCommandSideEffect; // w0
  BattleActionData_o *v43; // x20
  int v44; // w19
  int32_t v45; // w19
  bool v46; // w0
  const MethodInfo *v47; // x7
  BattleActionData_o *NoEffectObject; // x1
  __int64 v49; // x8
  unsigned __int64 v50; // x10
  int *v51; // x11
  __int64 v52; // x0
  __int64 v53; // x8
  unsigned __int64 v54; // x10
  int *v55; // x11
  __int64 v56; // x0
  __int64 v57; // x0
  __int64 v58; // x20
  BattleData_o *data; // x0
  int32_t v60; // w25
  BattleServantData_o *ServantData; // x0
  BattleServantData_o *v62; // x26
  BattleLogicFunction_o *Value; // x0
  const MethodInfo *v64; // x3
  int v65; // w23
  int32_t v66; // w8
  int32_t v67; // w20
  char v68; // w21
  __int64 v69; // x8
  unsigned __int64 v70; // x10
  int *v71; // x11
  __int64 v72; // x0
  int v73; // w8
  int32_t v74; // w19
  FunctionEntity_o *v75; // x20
  int32_t targetId_k__BackingField; // w22
  int32_t v77; // w21
  bool v78; // w0
  __int64 v80; // x0
  const MethodInfo *overwriteLossHp; // [xsp+0h] [xbp-E0h]
  bool isRandomDamage; // [xsp+8h] [xbp-D8h]
  const MethodInfo *v83; // [xsp+18h] [xbp-C8h]
  DataVals_o *v84; // [xsp+28h] [xbp-B8h]
  BattleLogicFunctionProcess_FunctionTargetCheck_o *v85; // [xsp+30h] [xbp-B0h]
  int32_t overwriteHeal; // [xsp+3Ch] [xbp-A4h]
  BattleLogicFunction_o *v87; // [xsp+40h] [xbp-A0h]
  int v88; // [xsp+48h] [xbp-98h]
  unsigned int v89; // [xsp+4Ch] [xbp-94h]
  BattleLogicFunction_ProcListInArgs_o *v90; // [xsp+50h] [xbp-90h]
  BattleActionData_o *v91; // [xsp+58h] [xbp-88h]
  BattleLogicFunction_o *v92; // [xsp+60h] [xbp-80h]
  bool v93; // [xsp+6Ch] [xbp-74h]
  __int64 v94; // [xsp+70h] [xbp-70h]
  BattleActionData_o *v95; // [xsp+78h] [xbp-68h]
  DataVals_o *v96; // [xsp+80h] [xbp-60h]
  _DWORD v97[1]; // [xsp+88h] [xbp-58h]
  int v98; // [xsp+8Ch] [xbp-54h]

  v6 = mainAction;
  v7 = procArg;
  v8 = this;
  if ( (byte_4217046 & 1) == 0 )
  {
    sub_B0D8A4(&BattleActionData_TypeInfo, procArg);
    sub_B0D8A4(&System_IDisposable_TypeInfo, v9);
    sub_B0D8A4(&System_Collections_Generic_IEnumerable_BattleLogicFunctionProcess_FunctionTargetCheck__TypeInfo, v10);
    sub_B0D8A4(&System_Collections_Generic_IEnumerator_BattleLogicFunctionProcess_FunctionTargetCheck__TypeInfo, v11);
    sub_B0D8A4(&System_Collections_IEnumerator_TypeInfo, v12);
    sub_B0D8A4(&Method_System_Collections_Generic_List_FuncList_TYPE__Add__, v13);
    sub_B0D8A4(&Method_System_Collections_Generic_List_FuncList_TYPE___ctor__, v14);
    sub_B0D8A4(&System_Collections_Generic_List_FuncList_TYPE__TypeInfo, v15);
    sub_B0D8A4(&FuncList_TYPE_TypeInfo, v16);
    this = (BattleLogicFunction_o *)sub_B0D8A4(&StringLiteral_16100/*"_SAFE"*/, v17);
    byte_4217046 = 1;
  }
  v98 = 0;
  if ( !funcTarget )
    goto LABEL_82;
  funcUnit_k__BackingField = funcTarget->fields._funcUnit_k__BackingField;
  v85 = funcTarget;
  if ( !funcUnit_k__BackingField )
    goto LABEL_82;
  dataVals_k__BackingField = funcUnit_k__BackingField->fields._dataVals_k__BackingField;
  v91 = (BattleActionData_o *)sub_B0D974(BattleActionData_TypeInfo, procArg, mainAction);
  BattleActionData___ctor(v91, 0LL);
  v22 = (System_Collections_Generic_List_VoiceCondType_Type__o *)sub_B0D974(
                                                                   System_Collections_Generic_List_FuncList_TYPE__TypeInfo,
                                                                   v20,
                                                                   v21);
  System_Collections_Generic_List_VoiceCondType_Type____ctor(
    v22,
    (const MethodInfo_2FB217C *)Method_System_Collections_Generic_List_FuncList_TYPE___ctor__);
  if ( !v22 )
    goto LABEL_82;
  System_Collections_Generic_List_VoiceCondType_Type___Add(
    v22,
    12,
    (const MethodInfo_2FB2ED8 *)Method_System_Collections_Generic_List_FuncList_TYPE__Add__);
  System_Collections_Generic_List_VoiceCondType_Type___Add(
    v22,
    25,
    (const MethodInfo_2FB2ED8 *)Method_System_Collections_Generic_List_FuncList_TYPE__Add__);
  System_Collections_Generic_List_VoiceCondType_Type___Add(
    v22,
    50,
    (const MethodInfo_2FB2ED8 *)Method_System_Collections_Generic_List_FuncList_TYPE__Add__);
  System_Collections_Generic_List_VoiceCondType_Type___Add(
    v22,
    51,
    (const MethodInfo_2FB2ED8 *)Method_System_Collections_Generic_List_FuncList_TYPE__Add__);
  if ( !dataVals_k__BackingField )
    goto LABEL_82;
  v84 = dataVals_k__BackingField;
  this = (BattleLogicFunction_o *)DataVals__GetDependDataValsArray(
                                    dataVals_k__BackingField,
                                    (System_Collections_Generic_List_FuncList_TYPE__o *)v22,
                                    1,
                                    0LL);
  if ( !this )
    goto LABEL_82;
  logic = (int)this->fields.logic;
  v92 = v8;
  v95 = v6;
  if ( logic >= 1 )
  {
    v24 = 0;
    v25 = 0;
    overwriteHeal = 0;
    v87 = this;
    v90 = v7;
    while ( 1 )
    {
      if ( v24 >= logic )
      {
        v80 = sub_B0D9A8(this);
        sub_B0D948(v80, 0LL);
      }
      v26 = (DataVals_o *)*((_QWORD *)&this->fields.logictarget + (int)v24);
      v88 = v25;
      if ( !v26 )
        goto LABEL_82;
      p_funcType = &v26->fields.funcType;
      this = (BattleLogicFunction_o *)j_il2cpp_value_box_0(FuncList_TYPE_TypeInfo, &v26->fields.funcType);
      if ( !this )
        goto LABEL_82;
      v28 = this;
      v29 = (System_String_o *)((__int64 (__fastcall *)(BattleLogicFunction_o *, void *))this->klass->vtable._3_ToString.method)(
                                 this,
                                 this->klass[1]._1.image);
      this = (BattleLogicFunction_o *)j_il2cpp_object_unbox_0(v28);
      *p_funcType = (int32_t)this->klass;
      if ( !v29 )
        goto LABEL_82;
      v93 = System_String__Contains(v29, (System_String_o *)StringLiteral_16100/*"_SAFE"*/, 0LL);
      this = (BattleLogicFunction_o *)BattleLogicFunction__GetDependFuncTargets(v8, v7, v6, v26, v30);
      if ( !this )
        goto LABEL_82;
      klass = this->klass;
      v32 = this;
      v96 = v26;
      v89 = v24;
      if ( *(_WORD *)&this->klass->_2.bitflags1 )
      {
        v33 = 0LL;
        p_offset = &klass->_1.interfaceOffsets->offset;
        while ( *((System_Collections_Generic_IEnumerable_BattleLogicFunctionProcess_FunctionTargetCheck__c **)p_offset
                - 1) != System_Collections_Generic_IEnumerable_BattleLogicFunctionProcess_FunctionTargetCheck__TypeInfo )
        {
          ++v33;
          p_offset += 4;
          if ( v33 >= *(unsigned __int16 *)&this->klass->_2.bitflags1 )
            goto LABEL_28;
        }
        v35 = (__int64)(&klass->vtable._0_Equals.method + 2 * *p_offset);
      }
      else
      {
LABEL_28:
        v35 = sub_AA67A0(
                this,
                System_Collections_Generic_IEnumerable_BattleLogicFunctionProcess_FunctionTargetCheck__TypeInfo,
                0LL);
      }
      v36 = (*(__int64 (__fastcall **)(BattleLogicFunction_o *, _QWORD))v35)(v32, *(_QWORD *)(v35 + 8));
      v94 = v36;
      if ( !v36 )
        sub_B0D97C(0LL);
      v37 = v36;
      while ( 1 )
      {
        v49 = *(_QWORD *)v37;
        if ( *(_WORD *)(*(_QWORD *)v37 + 298LL) )
        {
          v50 = 0LL;
          v51 = (int *)(*(_QWORD *)(v49 + 176) + 8LL);
          while ( *((System_Collections_IEnumerator_c **)v51 - 1) != System_Collections_IEnumerator_TypeInfo )
          {
            ++v50;
            v51 += 4;
            if ( v50 >= *(unsigned __int16 *)(*(_QWORD *)v37 + 298LL) )
              goto LABEL_42;
          }
          v52 = v49 + 16LL * *v51 + 312;
        }
        else
        {
LABEL_42:
          v52 = sub_AA67A0(v37, System_Collections_IEnumerator_TypeInfo, 0LL);
        }
        if ( ((*(__int64 (__fastcall **)(__int64, _QWORD))v52)(v37, *(_QWORD *)(v52 + 8)) & 1) == 0 )
          break;
        v53 = *(_QWORD *)v37;
        if ( *(_WORD *)(*(_QWORD *)v37 + 298LL) )
        {
          v54 = 0LL;
          v55 = (int *)(*(_QWORD *)(v53 + 176) + 8LL);
          while ( *((System_Collections_Generic_IEnumerator_BattleLogicFunctionProcess_FunctionTargetCheck__c **)v55 - 1) != System_Collections_Generic_IEnumerator_BattleLogicFunctionProcess_FunctionTargetCheck__TypeInfo )
          {
            ++v54;
            v55 += 4;
            if ( v54 >= *(unsigned __int16 *)(*(_QWORD *)v37 + 298LL) )
              goto LABEL_49;
          }
          v56 = v53 + 16LL * *v55 + 312;
        }
        else
        {
LABEL_49:
          v56 = sub_AA67A0(
                  v37,
                  System_Collections_Generic_IEnumerator_BattleLogicFunctionProcess_FunctionTargetCheck__TypeInfo,
                  0LL);
        }
        v57 = (*(__int64 (__fastcall **)(__int64, _QWORD))v56)(v37, *(_QWORD *)(v56 + 8));
        v58 = v57;
        if ( !v57 )
          sub_B0D97C(0LL);
        if ( ((*(__int64 (__fastcall **)(__int64, BattleActionData_o *, _QWORD))(*(_QWORD *)v57 + 392LL))(
                v57,
                v6,
                *(_QWORD *)(*(_QWORD *)v57 + 400LL)) & 1) != 0 )
        {
          data = v8->fields.data;
          if ( !data )
            sub_B0D97C(0LL);
          v60 = *(_DWORD *)(v58 + 32);
          ServantData = BattleData__getServantData(data, v60, 0LL);
          v62 = ServantData;
          if ( !ServantData )
            sub_B0D97C(0LL);
          Value = (BattleLogicFunction_o *)((__int64 (__fastcall *)(BattleServantData_o *, Il2CppMethodPointer))ServantData->klass->vtable._13_get_resultHp.method)(
                                             ServantData,
                                             ServantData->klass->vtable._14_set_resultHp.methodPtr);
          v65 = (int)Value;
          if ( (int)Value >= 1 )
          {
            v66 = *p_funcType;
            if ( *p_funcType == 12 || v66 == 25 )
            {
              Value = (BattleLogicFunction_o *)DataVals__GetValue(v96, 0LL);
              v67 = (int)Value;
            }
            else
            {
              if ( (v66 & 0xFFFFFFFE) == 50 )
              {
                Value = (BattleLogicFunction_o *)BattleLogicFunction__getHpPerValue(Value, v96, v62, v64);
                v67 = (int)Value;
                v68 = 0;
                if ( !v6 )
                  goto LABEL_64;
                goto LABEL_32;
              }
              v67 = -1;
            }
            v68 = 1;
            if ( !v6 )
LABEL_64:
              sub_B0D97C(Value);
LABEL_32:
            v38 = v7;
            if ( !v7 )
              sub_B0D97C(0LL);
            actorId = v6->fields.actorId;
            funcEnt = v96->fields.funcEnt;
            funcIndex = v96->fields.funcIndex;
            IsCommandSideEffect = BattleLogicFunction_ProcListInArgs__get_IsCommandSideEffect(v38, 0LL);
            isRandomDamage = v68;
            v8 = v92;
            v43 = BattleLogicFunction__functionlossHp(
                    v92,
                    actorId,
                    v60,
                    funcEnt,
                    v96,
                    funcIndex,
                    v93,
                    IsCommandSideEffect,
                    v67,
                    isRandomDamage,
                    0LL,
                    v83);
            v7 = v90;
            v6 = v95;
            v44 = v65
                - ((__int64 (__fastcall *)(BattleServantData_o *, Il2CppMethodPointer))v62->klass->vtable._13_get_resultHp.method)(
                    v62,
                    v62->klass->vtable._14_set_resultHp.methodPtr);
            if ( v44 >= 1 )
            {
              if ( !v91 )
                sub_B0D97C(0LL);
              v37 = v94;
              BattleActionData__addAction(v91, v43, 0LL);
              overwriteHeal += v44;
            }
            else
            {
              v45 = v96->fields.funcIndex;
              v46 = BattleLogicFunction_ProcListInArgs__get_IsCommandSideEffect(v90, 0LL);
              v37 = v94;
              NoEffectObject = BattleLogicFunction__getNoEffectObject(v92, v60, v45, v96, v46, 0LL, 0LL, v47);
              if ( !v91 )
                sub_B0D97C(0LL);
              BattleActionData__addAction(v91, NoEffectObject, 0LL);
            }
          }
        }
      }
      v97[v88] = 395;
      v25 = ++v98;
      if ( v37 )
      {
        v69 = *(_QWORD *)v37;
        if ( *(_WORD *)(*(_QWORD *)v37 + 298LL) )
        {
          v70 = 0LL;
          v71 = (int *)(*(_QWORD *)(v69 + 176) + 8LL);
          while ( *((System_IDisposable_c **)v71 - 1) != System_IDisposable_TypeInfo )
          {
            ++v70;
            v71 += 4;
            if ( v70 >= *(unsigned __int16 *)(*(_QWORD *)v37 + 298LL) )
              goto LABEL_70;
          }
          v72 = v69 + 16LL * *v71 + 312;
        }
        else
        {
LABEL_70:
          v72 = sub_AA67A0(v37, System_IDisposable_TypeInfo, 0LL);
        }
        (*(void (__fastcall **)(__int64, _QWORD))v72)(v37, *(_QWORD *)(v72 + 8));
      }
      this = v87;
      if ( v25 )
      {
        v73 = v25 - 1;
        v6 = v95;
        if ( v97[v25 - 1] == 395 )
        {
          --v25;
          v98 = v73;
        }
      }
      else
      {
        v6 = v95;
      }
      logic = (int)v87->fields.logic;
      v24 = v89 + 1;
      if ( (int)(v89 + 1) >= logic )
      {
        if ( v6 )
          goto LABEL_79;
        goto LABEL_82;
      }
    }
  }
  overwriteHeal = 0;
  if ( !v6 )
    goto LABEL_82;
LABEL_79:
  if ( !v7
    || (v74 = v84->fields.funcIndex,
        v75 = v84->fields.funcEnt,
        targetId_k__BackingField = v85->fields._targetId_k__BackingField,
        v77 = v95->fields.actorId,
        v78 = BattleLogicFunction_ProcListInArgs__get_IsCommandSideEffect(v7, 0LL),
        this = (BattleLogicFunction_o *)BattleLogicFunction__functionGainHp(
                                          v92,
                                          v77,
                                          targetId_k__BackingField,
                                          v75,
                                          v84,
                                          v74,
                                          v78,
                                          overwriteHeal,
                                          overwriteLossHp),
        !v91) )
  {
LABEL_82:
    sub_B0D97C(this);
  }
  BattleActionData__addAction(v91, (BattleActionData_o *)this, 0LL);
  return v91;
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
  char v22; // w20
  int v23; // w3
  __int64 v24; // x1
  __int64 v25; // x2
  BattleBuffData_o *buffData; // x28
  BattleBuffData_CheckIndividualitiesData_o *v27; // x20
  struct BattleData_o *v28; // x8
  int32_t ActualRecoveryHealPoint; // w0
  float UpDownGiveHeal; // s0
  int32_t UpDownHeal; // w0
  __int64 v33; // x26
  const MethodInfo *v34; // [xsp+8h] [xbp-68h]
  FunctionEntity_o *v35; // [xsp+10h] [xbp-60h]
  int32_t digit; // [xsp+1Ch] [xbp-54h] BYREF

  if ( (byte_421702D & 1) == 0 )
  {
    sub_B0D8A4(&BattleActionData_TypeInfo, *(_QWORD *)&playerId);
    sub_B0D8A4(&BattleBuffData_CheckIndividualitiesData_TypeInfo, v15);
    byte_421702D = 1;
  }
  digit = 0;
  v16 = (BattleActionData_o *)sub_B0D974(BattleActionData_TypeInfo, *(_QWORD *)&playerId, *(_QWORD *)&targetId);
  BattleActionData___ctor(v16, 0LL);
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
    v28 = this->fields.data;
    if ( v28 )
    {
      data = (BattleData_o *)v28->fields.battleEvent;
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
  v35 = funcEnt;
  buffData = v19->fields.buffData;
  v27 = (BattleBuffData_CheckIndividualitiesData_o *)sub_B0D974(
                                                       BattleBuffData_CheckIndividualitiesData_TypeInfo,
                                                       v24,
                                                       v25);
  BattleBuffData_CheckIndividualitiesData___ctor(v27, v19, 0LL, 0LL, 0LL, 0LL, 0LL);
  if ( !buffData )
LABEL_24:
    sub_B0D97C(data);
  data = (BattleData_o *)BattleBuffData__isTurnBuff(buffData, 42, v27, 1, 0LL);
  if ( ((unsigned __int8)data & 1) != 0 )
  {
    funcEnt = v35;
    goto LABEL_18;
  }
  if ( v18 )
  {
    UpDownGiveHeal = BattleServantData__getUpDownGiveHeal(v18, v19, 0LL);
    Value = BattleUtility__FloorToInt(UpDownGiveHeal * (float)Value, 0LL);
  }
  funcEnt = v35;
  digit = 1;
  UpDownHeal = BattleServantData__getUpDownHeal(v19, &digit, 0LL);
  v33 = UpDownHeal * (__int64)Value / digit;
  data = (BattleData_o *)BattleServantData__getMaxHp(v19, 0LL);
  v22 = 0;
  v23 = (int)v33 * (int)data / 1000;
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

  if ( (byte_4217045 & 1) == 0 )
  {
    sub_B0D8A4(&BattleActionData_TypeInfo, procArg);
    byte_4217045 = 1;
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
  v16 = (BattleActionData_o *)sub_B0D974(BattleActionData_TypeInfo, v14, v15);
  BattleActionData___ctor(v16, 0LL);
  if ( !baseVals )
LABEL_18:
    sub_B0D97C(data);
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
          HIDWORD(data->fields.rootfsm) = 3;
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
  BattleLogicFunction_o *v8; // x21
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
  double v26; // d0
  BattleActionData_o *v27; // x0

  v8 = this;
  if ( (byte_4217043 & 1) == 0 )
  {
    sub_B0D8A4(&BattleActionData_TypeInfo, procArg);
    sub_B0D8A4(&NpGaugeAbsorbResult_TypeInfo, v9);
    this = (BattleLogicFunction_o *)sub_B0D8A4(&NpTurnToPointConvert_TypeInfo, v10);
    byte_4217043 = 1;
  }
  if ( !funcTarget )
    goto LABEL_12;
  funcUnit_k__BackingField = funcTarget->fields._funcUnit_k__BackingField;
  if ( !funcUnit_k__BackingField )
    goto LABEL_12;
  dataVals_k__BackingField = funcUnit_k__BackingField->fields._dataVals_k__BackingField;
  v13 = (BattleActionData_o *)sub_B0D974(BattleActionData_TypeInfo, procArg, mainAction);
  BattleActionData___ctor(v13, 0LL);
  v16 = (NpTurnToPointConvert_o *)sub_B0D974(NpTurnToPointConvert_TypeInfo, v14, v15);
  NpTurnToPointConvert___ctor(v16, 0LL);
  v19 = (NpGaugeAbsorbResult_o *)sub_B0D974(NpGaugeAbsorbResult_TypeInfo, v17, v18);
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
    sub_B0D97C(this);
  }
  Point_k__BackingField = v19->fields._Point_k__BackingField;
  if ( Point_k__BackingField == INFINITY )
    v26 = -Point_k__BackingField;
  else
    v26 = Point_k__BackingField;
  v27 = BattleLogicFunction__functionGainNp(
          v8,
          procArg,
          v23,
          funcTarget->fields._targetId_k__BackingField,
          dataVals_k__BackingField,
          (int)v26,
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
  int32_t v21; // w1
  int32_t v22; // w28
  _BOOL8 isGainNp; // x0
  const MethodInfo *v24; // x6

  if ( (byte_4217031 & 1) == 0 )
  {
    sub_B0D8A4(&BattleActionData_TypeInfo, *(_QWORD *)&targetId);
    byte_4217031 = 1;
  }
  v15 = (BattleActionData_o *)sub_B0D974(BattleActionData_TypeInfo, *(_QWORD *)&targetId, funcEnt);
  BattleActionData___ctor(v15, 0LL);
  data = this->fields.data;
  if ( !data )
    goto LABEL_22;
  data = (BattleData_o *)BattleData__getServantData(data, targetId, 0LL);
  if ( !data )
    goto LABEL_22;
  v17 = (BattleServantData_o *)data;
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
      goto LABEL_22;
    Value = DataVals__GetValue(baseVals, 0LL);
    if ( (absorptionCount & 0x80000000) != 0 )
    {
      v22 = Value;
      isGainNp = BattleServantData__isGainNp(v17, 1, 0LL);
      if ( !isGainNp )
      {
LABEL_19:
        data = (BattleData_o *)BattleLogicFunction__getFunctionObject(
                                 (BattleLogicFunction_o *)isGainNp,
                                 funcEnt,
                                 v17->fields.uniqueId,
                                 funcIndex,
                                 isCommandSideEffect,
                                 0LL,
                                 v24);
        if ( data )
        {
          HIDWORD(data->fields.rootfsm) = 5;
          if ( v15 )
          {
            BattleActionData__setBuffData(v15, (BattleActionData_BuffData_o *)data, baseVals, 0LL);
            return v15;
          }
        }
LABEL_22:
        sub_B0D97C(data);
      }
      v21 = -v22;
    }
    else
    {
      if ( !absorptionCount || !BattleServantData__isGainNp(v17, 1, 0LL) )
        return BattleLogicFunction__getNoEffectObject(
                 this,
                 targetId,
                 funcIndex,
                 baseVals,
                 isCommandSideEffect,
                 0LL,
                 0LL,
                 v18);
      v21 = -absorptionCount;
    }
    isGainNp = BattleServantData__updownNextTDTurn(v17, v21, 0LL);
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
  __int64 v17; // x1
  __int64 v18; // x2
  BattleActionData_o *v19; // x25
  BattleData_o *data; // x0
  BattleServantData_o *v21; // x27
  BattleServantData_o *v22; // x28
  unsigned int v23; // w0
  int32_t v24; // w20
  bool IsOpponentPTUniqueID; // w0
  int32_t v26; // w0
  const MethodInfo *v27; // x6
  struct BattleData_o *v28; // x8
  int32_t v29; // w2
  int32_t uniqueId; // [xsp+Ch] [xbp-54h] BYREF

  uniqueId = targetId;
  if ( (byte_4217030 & 1) == 0 )
  {
    sub_B0D8A4(&BattleActionData_TypeInfo, *(_QWORD *)&playerId);
    sub_B0D8A4(&StringLiteral_18991/*"functionInstantDeath>>:"*/, v15);
    byte_4217030 = 1;
  }
  v16 = System_Int32__ToString((int32_t)&uniqueId, 0LL);
  System_String__Concat_43849904((System_String_o *)StringLiteral_18991/*"functionInstantDeath>>:"*/, v16, 0LL);
  v19 = (BattleActionData_o *)sub_B0D974(BattleActionData_TypeInfo, v17, v18);
  BattleActionData___ctor(v19, 0LL);
  data = this->fields.data;
  if ( !data )
    goto LABEL_15;
  data = (BattleData_o *)BattleData__getServantData(data, uniqueId, 0LL);
  if ( !this->fields.data )
    goto LABEL_15;
  v21 = (BattleServantData_o *)data;
  data = (BattleData_o *)BattleData__getServantData(this->fields.data, playerId, 0LL);
  if ( !v21 )
    goto LABEL_15;
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
    goto LABEL_15;
  data = (BattleData_o *)BattleLogic__getWave((BattleLogic_o *)data, 0LL);
  if ( !this->fields.data )
    goto LABEL_15;
  v24 = (int)data;
  IsOpponentPTUniqueID = BattleData__IsOpponentPTUniqueID(this->fields.data, uniqueId, playerId, 0LL);
  BattleServantData__setActionHistory(v21, playerId, 4, v24, IsOpponentPTUniqueID, 0LL);
  v26 = ((__int64 (__fastcall *)(BattleServantData_o *, Il2CppMethodPointer))v21->klass->vtable._13_get_resultHp.method)(
          v21,
          v21->klass->vtable._14_set_resultHp.methodPtr);
  BattleServantData__ResultDamage(v21, v26, v22, 0LL, 0, 0LL);
  v28 = this->fields.data;
  if ( !v28 )
    goto LABEL_15;
  v29 = v21->fields.uniqueId;
  v21->fields.deadTurn = v28->fields.typeTurn;
  data = (BattleData_o *)BattleLogicFunction__getFunctionObject(
                           (BattleLogicFunction_o *)data,
                           funcEnt,
                           v29,
                           funcIndex,
                           isCommandSideEffect,
                           0LL,
                           v27);
  if ( !data )
    goto LABEL_15;
  HIDWORD(data->fields.rootfsm) = 1;
  if ( uniqueId == playerId || isNoAccumulation )
    BYTE1(data->fields.quest_ent) = 1;
  if ( !v19 )
LABEL_15:
    sub_B0D97C(data);
  BattleActionData__setBuffData(v19, (BattleActionData_BuffData_o *)data, baseVals, 0LL);
  return v19;
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
  double v25; // d0
  int v26; // w24
  int32_t funcIndex; // w21
  int32_t uniqueId; // w22
  FunctionEntity_o *funcEnt; // x25
  _BOOL8 IsCommandSideEffect; // x0
  const MethodInfo *v31; // x6
  BattleActionData_BuffData_o *v32; // x20

  if ( (byte_4217044 & 1) == 0 )
  {
    sub_B0D8A4(&BattleActionData_TypeInfo, procArg);
    sub_B0D8A4(&BattleDataDefine_TypeInfo, v12);
    byte_4217044 = 1;
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
        v21 = np - v18;
        *diffNp = v21;
        v22 = v18;
        v23 = BattleDataDefine_TypeInfo;
        if ( (BYTE3(BattleDataDefine_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !BattleDataDefine_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(BattleDataDefine_TypeInfo);
          v23 = BattleDataDefine_TypeInfo;
        }
        PERCENTAGE_DENOMINATOR = v23->static_fields->PERCENTAGE_DENOMINATOR;
        v25 = PERCENTAGE_DENOMINATOR == INFINITY ? -PERCENTAGE_DENOMINATOR : PERCENTAGE_DENOMINATOR;
        v26 = v21 % (int)v25;
        if ( v26 >= 1 )
        {
          BattleServantData__addNp(v14, v26, 0, 0LL);
          *diffNp -= v26;
        }
        v15 = (BattleActionData_o *)sub_B0D974(BattleActionData_TypeInfo, v19, v20);
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
            HIDWORD(data->fields.rootfsm) = 3;
            BattleActionData_BuffData__setSaveNp((BattleActionData_BuffData_o *)data, v22, 0LL);
            if ( v15 )
            {
              BattleActionData__setBuffData(v15, v32, baseVals, 0LL);
              return v15;
            }
          }
        }
      }
LABEL_22:
      sub_B0D97C(data);
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

  if ( (byte_4217028 & 1) == 0 )
  {
    sub_B0D8A4(&BattleActionData_TypeInfo, *(_QWORD *)&targetId);
    byte_4217028 = 1;
  }
  v3 = (BattleActionData_o *)sub_B0D974(BattleActionData_TypeInfo, *(_QWORD *)&targetId, method);
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
  __int64 v32; // x1
  __int64 v33; // x2
  __int64 *v34; // x8
  System_Int32_array **v35; // x21
  __int64 v36; // x22
  System_String_array **v37; // x2
  System_String_array **v38; // x3
  System_Boolean_array **v39; // x4
  System_Int32_array **v40; // x5
  System_Int32_array *v41; // x6
  System_Int32_array *v42; // x7
  __int64 v43; // x0

  if ( (byte_421704A & 1) == 0 )
  {
    sub_B0D8A4(&BattleActionData_TypeInfo, actionData);
    sub_B0D8A4(&Method_DataManager_GetMasterData_SkillLvMaster___, v7);
    sub_B0D8A4(&Method_SingletonMonoBehaviour_DataManager__getInstance__, v8);
    sub_B0D8A4(&StringLiteral_6388/*"FOCUS_UP_EX"*/, v9);
    sub_B0D8A4(&StringLiteral_6386/*"FOCUS_UNDER_EX"*/, v10);
    sub_B0D8A4(&StringLiteral_6384/*"FOCUS_CENTER_EX"*/, v11);
    sub_B0D8A4(&StringLiteral_6385/*"FOCUS_UNDER"*/, v12);
    sub_B0D8A4(&StringLiteral_6383/*"FOCUS_CENTER"*/, v13);
    sub_B0D8A4(&StringLiteral_6387/*"FOCUS_UP"*/, v14);
    byte_421704A = 1;
  }
  v15 = *((_QWORD *)Method_SingletonMonoBehaviour_DataManager__getInstance__ + 3);
  if ( (*(_BYTE *)(v15 + 306) & 1) == 0 )
    sub_AA65A4(*((_QWORD *)Method_SingletonMonoBehaviour_DataManager__getInstance__ + 3));
  v16 = **(_QWORD **)(v15 + 192);
  if ( (*(_BYTE *)(v16 + 306) & 1) == 0 )
    sub_AA65A4(v16);
  MasterData_WarQuestSelectionMaster = **(DataManager_o ***)(v16 + 184);
  if ( !MasterData_WarQuestSelectionMaster )
    goto LABEL_23;
  MasterData_WarQuestSelectionMaster = (DataManager_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                          MasterData_WarQuestSelectionMaster,
                                                          (const MethodInfo_17145A8 *)Method_DataManager_GetMasterData_SkillLvMaster___);
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
        v43 = sub_B0D9A8(MasterData_WarQuestSelectionMaster);
        sub_B0D948(v43, 0LL);
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
            v34 = &StringLiteral_6388/*"FOCUS_UP_EX"*/;
          else
            v34 = &StringLiteral_6387/*"FOCUS_UP"*/;
        }
        else if ( BattleServantData__isMultiTargetCore(v30, 0LL) )
        {
          if ( SkillLvEntity__IsAress(v20, 0LL) )
            v34 = &StringLiteral_6384/*"FOCUS_CENTER_EX"*/;
          else
            v34 = &StringLiteral_6383/*"FOCUS_CENTER"*/;
        }
        else
        {
          v35 = 0LL;
          if ( !BattleServantData__isMultiTargetUnder(v30, 0LL) )
          {
LABEL_47:
            v36 = sub_B0D974(BattleActionData_TypeInfo, v32, v33);
            BattleActionData___ctor((BattleActionData_o *)v36, 0LL);
            if ( targetData && v36 )
            {
              *(_DWORD *)(v36 + 32) = targetData->fields.uniqueId;
              *(_DWORD *)(v36 + 36) = actionData->fields.targetId;
              BattleActionData__setStateField((BattleActionData_o *)v36, 0LL);
              *(_QWORD *)(v36 + 64) = v35;
              sub_B0D840((BattleServantConfConponent_o *)(v36 + 64), v35, v37, v38, v39, v40, v41, v42);
              BattleActionData__AddAfterActionData(actionData, (BattleActionData_o *)v36, 0, 0LL);
              return;
            }
LABEL_23:
            sub_B0D97C(MasterData_WarQuestSelectionMaster);
          }
          if ( SkillLvEntity__IsAress(v20, 0LL) )
            v34 = &StringLiteral_6386/*"FOCUS_UNDER_EX"*/;
          else
            v34 = &StringLiteral_6385/*"FOCUS_UNDER"*/;
        }
        v35 = (System_Int32_array **)*v34;
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
  const MethodInfo *v26; // x4
  struct BattleLogicFunctionProcess_FunctionUnitCheck_o *funcUnit_k__BackingField; // x8
  int32_t targetId_k__BackingField; // w26
  DataVals_o *dataVals_k__BackingField; // x20
  RemovedBuffInfoGroup_o *v30; // x24
  BattleServantData_o *ServantData; // x25
  const MethodInfo *v32; // x4
  System_Collections_Generic_IEnumerable_TSource__o *v33; // x26
  __int64 v34; // x1
  __int64 v35; // x2
  System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *v36; // x27
  System_Collections_Generic_IEnumerable_T__o *v37; // x26
  __int64 v38; // x1
  __int64 v39; // x2
  System_Collections_Generic_HashSet_BattleBuffData_BuffData__o *v40; // x27
  System_String_array **v41; // x2
  System_String_array **v42; // x3
  System_Boolean_array **v43; // x4
  System_Int32_array **v44; // x5
  System_Int32_array *v45; // x6
  System_Int32_array *v46; // x7
  System_Collections_Generic_IEnumerable_TSource__o *v47; // x24
  __int64 v48; // x1
  __int64 v49; // x2
  System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *v50; // x26
  System_Collections_Generic_IEnumerable_TSource__o *v51; // x0
  __int64 v52; // x1
  __int64 v53; // x2
  RemovedBuffInfoGroup_o *v54; // x26
  System_Collections_Generic_List_int__o *v55; // x27
  int klass; // w8
  BattleLogicFunction_o *v57; // x21
  DataMasterBase_WarMaster__WarEntity__int__o *v58; // x28
  __int64 v59; // x22
  __int64 v60; // x24
  BattleBuffData_BuffData_o *v61; // x19
  const MethodInfo *v62; // x2
  const MethodInfo *v63; // x3
  int32_t DispTurn; // w0
  _BOOL4 isProgressSelfTurn; // w8
  __int64 v66; // x1
  __int64 v67; // x2
  BattleActionData_BuffData_o *v68; // x24
  struct FunctionEntity_o *funcEnt; // x21
  bool IsCommandSideEffect; // w0
  System_Int32_array **v71; // x0
  System_String_array **v72; // x2
  System_String_array **v73; // x3
  System_Boolean_array **v74; // x4
  System_Int32_array **v75; // x5
  System_Int32_array *v76; // x6
  System_Int32_array *v77; // x7
  int32_t funcIndex; // w19
  bool v79; // w0
  const MethodInfo *v80; // x7
  __int64 v81; // x0
  BattleLogicFunction_ProcListInArgs_o *v82; // [xsp+0h] [xbp-80h]
  BattleLogicFunctionProcess_FunctionTargetCheck_o *v83; // [xsp+8h] [xbp-78h]
  int32_t v84; // [xsp+14h] [xbp-6Ch]
  BattleActionData_o *v85; // [xsp+18h] [xbp-68h]
  WarEntity_o *entity; // [xsp+28h] [xbp-58h] BYREF

  if ( (byte_421704E & 1) == 0 )
  {
    sub_B0D8A4(&BattleActionData_BuffData_TypeInfo, procArg);
    sub_B0D8A4(&Method_DataManager_GetMasterData_BuffMaster___, v8);
    sub_B0D8A4(&Method_DataMasterBase_BuffMaster__BuffEntity__int__TryGetEntity__, v9);
    sub_B0D8A4(&Method_System_Linq_Enumerable_ToArray_BattleBuffData_BuffData___, v10);
    sub_B0D8A4(&Method_System_Linq_Enumerable_Where_BattleBuffData_BuffData___, v11);
    sub_B0D8A4(&Method_System_Func_BattleBuffData_BuffData__bool___ctor__, v12);
    sub_B0D8A4(&System_Func_BattleBuffData_BuffData__bool__TypeInfo, v13);
    sub_B0D8A4(&Method_System_Collections_Generic_HashSet_BattleBuffData_BuffData___ctor___67862304, v14);
    sub_B0D8A4(&System_Collections_Generic_HashSet_BattleBuffData_BuffData__TypeInfo, v15);
    sub_B0D8A4(&Method_System_Collections_Generic_List_int__Add__, v16);
    sub_B0D8A4(&Method_System_Collections_Generic_List_int__ToArray__, v17);
    sub_B0D8A4(&Method_System_Collections_Generic_List_int___ctor__, v18);
    sub_B0D8A4(&System_Collections_Generic_List_int__TypeInfo, v19);
    sub_B0D8A4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v20);
    sub_B0D8A4(&Method_BattleLogicFunction___c__DisplayClass106_0__functionMoveState_b__0__, v21);
    sub_B0D8A4(&Method_BattleLogicFunction___c__DisplayClass106_0__functionMoveState_b__1__, v22);
    sub_B0D8A4(&BattleLogicFunction___c__DisplayClass106_0_TypeInfo, v23);
    byte_421704E = 1;
  }
  entity = 0LL;
  v24 = sub_B0D974(BattleLogicFunction___c__DisplayClass106_0_TypeInfo, procArg, mainAction);
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
                         v26);
  if ( !this->fields.data )
    goto LABEL_42;
  v30 = StealBuffInfoGroup;
  ServantData = BattleData__getServantData(this->fields.data, targetId_k__BackingField, 0LL);
  BattleLogicFunction__ResetFamilyLinkageIdToStolenFamilyBuffs(
    (BattleLogicFunction_o *)ServantData,
    procArg,
    ServantData,
    v30,
    v32);
  if ( !v24 )
    goto LABEL_42;
  v84 = targetId_k__BackingField;
  v83 = funcTarget;
  v85 = mainAction;
  *(_DWORD *)(v24 + 16) = 0x1000000;
  if ( !v30 )
    goto LABEL_42;
  v33 = (System_Collections_Generic_IEnumerable_TSource__o *)RemovedBuffInfoGroup__RemovedLinkageBuffEnumerable(
                                                               v30,
                                                               0LL);
  v36 = (System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *)sub_B0D974(
                                                                             System_Func_BattleBuffData_BuffData__bool__TypeInfo,
                                                                             v34,
                                                                             v35);
  System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool____ctor(
    v36,
    (Il2CppObject *)v24,
    Method_BattleLogicFunction___c__DisplayClass106_0__functionMoveState_b__0__,
    (const MethodInfo_26189B8 *)Method_System_Func_BattleBuffData_BuffData__bool___ctor__);
  v37 = (System_Collections_Generic_IEnumerable_T__o *)System_Linq_Enumerable__Where_WarBoardManager_WarBoardOnboardSkillTarget_(
                                                         v33,
                                                         (System_Func_TSource__bool__o *)v36,
                                                         (const MethodInfo_1B5A6B0 *)Method_System_Linq_Enumerable_Where_BattleBuffData_BuffData___);
  v40 = (System_Collections_Generic_HashSet_BattleBuffData_BuffData__o *)sub_B0D974(
                                                                           System_Collections_Generic_HashSet_BattleBuffData_BuffData__TypeInfo,
                                                                           v38,
                                                                           v39);
  System_Collections_Generic_HashSet_BattleBuffData_BuffData____ctor(
    v40,
    v37,
    (const MethodInfo_2C7BAA8 *)Method_System_Collections_Generic_HashSet_BattleBuffData_BuffData___ctor___67862304);
  *(_QWORD *)(v24 + 24) = v40;
  sub_B0D840((BattleServantConfConponent_o *)(v24 + 24), (System_Int32_array **)v40, v41, v42, v43, v44, v45, v46);
  v47 = (System_Collections_Generic_IEnumerable_TSource__o *)RemovedBuffInfoGroup__RemovedAllBuffEnumerable(v30, 0LL);
  v50 = (System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *)sub_B0D974(
                                                                             System_Func_BattleBuffData_BuffData__bool__TypeInfo,
                                                                             v48,
                                                                             v49);
  System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool____ctor(
    v50,
    (Il2CppObject *)v24,
    Method_BattleLogicFunction___c__DisplayClass106_0__functionMoveState_b__1__,
    (const MethodInfo_26189B8 *)Method_System_Func_BattleBuffData_BuffData__bool___ctor__);
  v51 = System_Linq_Enumerable__Where_WarBoardManager_WarBoardOnboardSkillTarget_(
          v47,
          (System_Func_TSource__bool__o *)v50,
          (const MethodInfo_1B5A6B0 *)Method_System_Linq_Enumerable_Where_BattleBuffData_BuffData___);
  StealBuffInfoGroup = (RemovedBuffInfoGroup_o *)System_Linq_Enumerable__ToArray_DrawLotsDisplayMessage_DisplayedInGroup_SaveData_(
                                                   v51,
                                                   (const MethodInfo_1B56294 *)Method_System_Linq_Enumerable_ToArray_BattleBuffData_BuffData___);
  if ( !StealBuffInfoGroup )
    goto LABEL_42;
  v54 = StealBuffInfoGroup;
  if ( StealBuffInfoGroup[1].klass )
  {
    v82 = procArg;
    v55 = (System_Collections_Generic_List_int__o *)sub_B0D974(System_Collections_Generic_List_int__TypeInfo, v52, v53);
    System_Collections_Generic_List_int____ctor(
      v55,
      (const MethodInfo_2FAF1A4 *)Method_System_Collections_Generic_List_int___ctor__);
    StealBuffInfoGroup = (RemovedBuffInfoGroup_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A71064 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !StealBuffInfoGroup )
      goto LABEL_42;
    StealBuffInfoGroup = (RemovedBuffInfoGroup_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                     (DataManager_o *)StealBuffInfoGroup,
                                                     (const MethodInfo_17145A8 *)Method_DataManager_GetMasterData_BuffMaster___);
    klass = (int)v54[1].klass;
    v57 = this;
    if ( klass >= 1 )
    {
      v58 = (DataMasterBase_WarMaster__WarEntity__int__o *)StealBuffInfoGroup;
      v59 = 0LL;
      v60 = 0LL;
      do
      {
        if ( (unsigned int)v59 >= klass )
        {
          v81 = sub_B0D9A8(StealBuffInfoGroup);
          sub_B0D948(v81, 0LL);
        }
        v61 = (BattleBuffData_BuffData_o *)*((_QWORD *)&v54[1].monitor + v59);
        if ( !v61 || !v58 )
          goto LABEL_42;
        StealBuffInfoGroup = (RemovedBuffInfoGroup_o *)DataMasterBase_WarMaster__WarEntity__int___TryGetEntity(
                                                         v58,
                                                         &entity,
                                                         v61->fields.buffId,
                                                         (const MethodInfo_2669C30 *)Method_DataMasterBase_BuffMaster__BuffEntity__int__TryGetEntity__);
        if ( ((unsigned __int8)StealBuffInfoGroup & 1) != 0 )
        {
          StealBuffInfoGroup = (RemovedBuffInfoGroup_o *)BattleLogicFunction__IsAddStateFieldFlag(v57, v61, v62);
          if ( !ServantData )
            goto LABEL_42;
          BattleServantData__addBuff(ServantData, v61, (unsigned __int8)StealBuffInfoGroup & 1, 0, 1, 0LL);
          StealBuffInfoGroup = (RemovedBuffInfoGroup_o *)entity;
          if ( !entity )
            goto LABEL_42;
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
            v61->fields.isProgressEndEnemyTurn = ServantData->fields.isEnemy ^ !isProgressSelfTurn;
          }
          BattleLogicFunction__AfterAddedBuffProcess(v57, ServantData, (BuffEntity_o *)entity, v63);
          if ( v60 )
          {
            if ( !v55 )
              goto LABEL_42;
            System_Collections_Generic_List_int___Add(
              v55,
              v61->fields.addOrder,
              (const MethodInfo_2FAFF00 *)Method_System_Collections_Generic_List_int__Add__);
          }
          else
          {
            v68 = (BattleActionData_BuffData_o *)sub_B0D974(BattleActionData_BuffData_TypeInfo, v66, v67);
            BattleActionData_BuffData___ctor(v68, 0LL);
            if ( !v68 )
              goto LABEL_42;
            v68->fields.targetId = v84;
            if ( !dataVals_k__BackingField )
              goto LABEL_42;
            StealBuffInfoGroup = (RemovedBuffInfoGroup_o *)v82;
            v68->fields.functionIndex = dataVals_k__BackingField->fields.funcIndex;
            if ( !v82 )
              goto LABEL_42;
            funcEnt = dataVals_k__BackingField->fields.funcEnt;
            IsCommandSideEffect = BattleLogicFunction_ProcListInArgs__get_IsCommandSideEffect(v82, 0LL);
            v60 = ((__int64 (__fastcall *)(BattleLogicFunctionProcess_FunctionTargetCheck_o *, BattleActionData_BuffData_o *, BattleBuffData_BuffData_o *, struct FunctionEntity_o *, bool, Il2CppMethodPointer))v83->klass->vtable._10_MakeAddActionBuffData.method)(
                    v83,
                    v68,
                    v61,
                    funcEnt,
                    IsCommandSideEffect,
                    v83->klass->vtable._11_GetConvertBuffEntity.methodPtr);
            StealBuffInfoGroup = (RemovedBuffInfoGroup_o *)v85;
            if ( !v85 )
              goto LABEL_42;
            BattleActionData__setBuffData(v85, (BattleActionData_BuffData_o *)v60, dataVals_k__BackingField, 0LL);
            v57 = this;
            StealBuffInfoGroup = (RemovedBuffInfoGroup_o *)this->fields.data;
            if ( !StealBuffInfoGroup )
              goto LABEL_42;
            BattleData__AddFreshBuffList((BattleData_o *)StealBuffInfoGroup, (BattleActionData_BuffData_o *)v60, 0LL);
          }
        }
        klass = (int)v54[1].klass;
        ++v59;
      }
      while ( (int)v59 < klass );
      if ( v60 )
      {
        if ( v55 )
        {
          v71 = (System_Int32_array **)System_Collections_Generic_List_int___ToArray(
                                         v55,
                                         (const MethodInfo_2FB200C *)Method_System_Collections_Generic_List_int__ToArray__);
          *(_QWORD *)(v60 + 144) = v71;
          sub_B0D840((BattleServantConfConponent_o *)(v60 + 144), v71, v72, v73, v74, v75, v76, v77);
          return;
        }
LABEL_42:
        sub_B0D97C(StealBuffInfoGroup);
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
    v79 = BattleLogicFunction_ProcListInArgs__get_IsCommandSideEffect(procArg, 0LL);
    StealBuffInfoGroup = (RemovedBuffInfoGroup_o *)BattleLogicFunction__getNoEffectObject(
                                                     this,
                                                     v84,
                                                     funcIndex,
                                                     dataVals_k__BackingField,
                                                     v79,
                                                     0LL,
                                                     0LL,
                                                     v80);
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
  BattleData_o *data; // x0
  BattleData_o *v25; // x8
  BattleServantData_o *v26; // x22
  BattleServantData_o *ServantData; // x21
  __int64 v28; // x1
  __int64 v29; // x2
  System_Collections_Generic_List_int__o *v30; // x27
  __int64 v31; // x1
  __int64 v32; // x2
  System_Int32_array *TargetRarityList; // x28
  char v34; // w21
  int32_t v35; // w1
  int32_t Param; // w0
  int v37; // w8
  char v38; // w10
  System_Int32_array *buffIndv; // x20
  System_Int32_array *v40; // x22
  bool v41; // w9
  bool v42; // zf
  int32_t v43; // w0
  int32_t v44; // w0
  int32_t v45; // w0
  int32_t v46; // w0
  int32_t v47; // w0
  System_Array_o *v48; // x21
  bool v49; // w22
  bool IsOverChargeState; // w0
  int32_t NPFixedDamageValue; // w23
  __int64 v52; // x1
  __int64 v53; // x2
  BattleLogic_DamageProcessArgs_o *damageProcessArgs; // x26
  BattleLogic_o *logic; // x24
  System_Int32_array *v56; // x27
  bool IsIncludeIgnoreIndividuality; // w23
  BattleActionData_DamageData_o *v58; // x20
  char v59; // w22
  __int64 v61; // x0
  bool v62; // [xsp+34h] [xbp-8Ch]
  bool isRarityAtk; // [xsp+38h] [xbp-88h]
  int32_t typea; // [xsp+3Ch] [xbp-84h]
  BattleServantData_o *v65; // [xsp+40h] [xbp-80h]
  BattleServantData_o *v66; // [xsp+48h] [xbp-78h]
  BattleActionData_o *v67; // [xsp+58h] [xbp-68h]
  int32_t v68; // [xsp+64h] [xbp-5Ch]
  System_RuntimeFieldHandle_o v69; // 0:w1.4

  if ( (byte_421702A & 1) == 0 )
  {
    sub_B0D8A4(&BattleActionData_TypeInfo, *(_QWORD *)&playerId);
    sub_B0D8A4(&BattleLogic_DamageProcessArgs_TypeInfo, v15);
    sub_B0D8A4(&int___TypeInfo, v16);
    sub_B0D8A4(&Method_System_Collections_Generic_List_int__Add__, v17);
    sub_B0D8A4(&Method_System_Collections_Generic_List_int__ToArray__, v18);
    sub_B0D8A4(&Method_System_Collections_Generic_List_int___ctor__, v19);
    sub_B0D8A4(&System_Collections_Generic_List_int__TypeInfo, v20);
    sub_B0D8A4(&DataVals_OverChargeState___TypeInfo, v21);
    sub_B0D8A4(
      &Field__PrivateImplementationDetails__44BE0EBF7C907BA44AD83314C6AD0AA399AD5B73911C129D2CD6A85D4A056C90,
      v22);
    byte_421702A = 1;
  }
  v23 = (BattleActionData_o *)sub_B0D974(BattleActionData_TypeInfo, *(_QWORD *)&playerId, *(_QWORD *)&targetId);
  BattleActionData___ctor(v23, 0LL);
  data = this->fields.data;
  if ( !data )
    goto LABEL_38;
  data = (BattleData_o *)BattleData__getServantData(data, playerId, 0LL);
  v25 = this->fields.data;
  if ( !v25 )
    goto LABEL_38;
  v26 = (BattleServantData_o *)data;
  ServantData = BattleData__getServantData(v25, targetId, 0LL);
  v30 = (System_Collections_Generic_List_int__o *)sub_B0D974(System_Collections_Generic_List_int__TypeInfo, v28, v29);
  System_Collections_Generic_List_int____ctor(
    v30,
    (const MethodInfo_2FAF1A4 *)Method_System_Collections_Generic_List_int___ctor__);
  if ( !baseVals
    || (v65 = ServantData,
        v67 = v23,
        v68 = funcIndex,
        data = (BattleData_o *)DataVals__GetParam(baseVals, 3, 0, 0LL),
        !v30) )
  {
LABEL_38:
    sub_B0D97C(data);
  }
  System_Collections_Generic_List_int___Add(
    v30,
    (int32_t)data,
    (const MethodInfo_2FAFF00 *)Method_System_Collections_Generic_List_int__Add__);
  TargetRarityList = 0LL;
  v34 = 0;
  v66 = v26;
  typea = type;
  if ( (unsigned int)type > 0xB )
  {
LABEL_26:
    v38 = 0;
    v41 = 0;
    buffIndv = 0LL;
    v40 = 0LL;
    goto LABEL_29;
  }
  if ( ((1 << type) & 0x698) != 0 )
  {
    v35 = 7;
    goto LABEL_12;
  }
  if ( ((1 << type) & 0x60) != 0 )
  {
    v35 = 6;
LABEL_12:
    Param = DataVals__GetParam(baseVals, v35, 0, 0LL);
    System_Collections_Generic_List_int___Add(
      v30,
      Param,
      (const MethodInfo_2FAFF00 *)Method_System_Collections_Generic_List_int__Add__);
    v37 = type - 3;
    TargetRarityList = 0LL;
    v34 = 0;
    v38 = 0;
    buffIndv = 0LL;
    v40 = 0LL;
    v41 = 0;
    switch ( v37 )
    {
      case 0:
      case 1:
        v40 = (System_Int32_array *)sub_B0D8BC(int___TypeInfo, 1LL);
        data = (BattleData_o *)DataVals__GetParam(baseVals, 6, 0, 0LL);
        if ( !v40 )
          goto LABEL_38;
        if ( !v40->max_length )
          goto LABEL_39;
        v34 = 0;
        v38 = 0;
        TargetRarityList = 0LL;
        v41 = 0;
        buffIndv = 0LL;
        v40->m_Items[1] = (int)data;
        break;
      case 2:
      case 3:
      case 5:
        goto LABEL_29;
      case 4:
        buffIndv = (System_Int32_array *)sub_B0D8BC(int___TypeInfo, 1LL);
        data = (BattleData_o *)DataVals__GetParam(baseVals, 6, 0, 0LL);
        if ( !buffIndv )
          goto LABEL_38;
        if ( !buffIndv->max_length )
        {
LABEL_39:
          v61 = sub_B0D9A8(data);
          sub_B0D948(v61, 0LL);
        }
        v34 = 0;
        v38 = 0;
        TargetRarityList = 0LL;
        v41 = 0;
        v40 = 0LL;
        buffIndv->m_Items[1] = (int)data;
        break;
      case 6:
        TargetRarityList = DataVals__GetTargetRarityList(baseVals, 0LL);
        v34 = 0;
        v41 = 0;
        buffIndv = 0LL;
        v40 = 0LL;
        v38 = 1;
        goto LABEL_29;
      case 7:
        v40 = DataVals__GetAndCheckIndividuality(baseVals, 0LL);
        v34 = 0;
        v38 = 0;
        TargetRarityList = 0LL;
        v41 = 0;
        buffIndv = 0LL;
        goto LABEL_29;
      default:
        goto LABEL_26;
    }
    goto LABEL_29;
  }
  v42 = type == 11;
  v38 = 0;
  v41 = 0;
  buffIndv = 0LL;
  v40 = 0LL;
  if ( v42 )
  {
    v30 = (System_Collections_Generic_List_int__o *)sub_B0D974(System_Collections_Generic_List_int__TypeInfo, v31, v32);
    System_Collections_Generic_List_int____ctor(
      v30,
      (const MethodInfo_2FAF1A4 *)Method_System_Collections_Generic_List_int___ctor__);
    data = (BattleData_o *)DataVals__GetParam(baseVals, 3, 0, 0LL);
    if ( !v30 )
      goto LABEL_38;
    System_Collections_Generic_List_int___Add(
      v30,
      (int32_t)data,
      (const MethodInfo_2FAFF00 *)Method_System_Collections_Generic_List_int__Add__);
    v43 = DataVals__GetParam(baseVals, 7, 0, 0LL);
    System_Collections_Generic_List_int___Add(
      v30,
      v43,
      (const MethodInfo_2FAFF00 *)Method_System_Collections_Generic_List_int__Add__);
    v44 = DataVals__GetParam(baseVals, 59, 0, 0LL);
    System_Collections_Generic_List_int___Add(
      v30,
      v44,
      (const MethodInfo_2FAFF00 *)Method_System_Collections_Generic_List_int__Add__);
    v45 = DataVals__GetParam(baseVals, 60, 0, 0LL);
    System_Collections_Generic_List_int___Add(
      v30,
      v45,
      (const MethodInfo_2FAFF00 *)Method_System_Collections_Generic_List_int__Add__);
    v46 = DataVals__GetParam(baseVals, 4, 0, 0LL);
    System_Collections_Generic_List_int___Add(
      v30,
      v46,
      (const MethodInfo_2FAFF00 *)Method_System_Collections_Generic_List_int__Add__);
    v47 = DataVals__GetParam(baseVals, 6, 0, 0LL);
    System_Collections_Generic_List_int___Add(
      v30,
      v47,
      (const MethodInfo_2FAFF00 *)Method_System_Collections_Generic_List_int__Add__);
    buffIndv = DataVals__GetTargetList(baseVals, 0LL);
    v48 = (System_Array_o *)sub_B0D8BC(DataVals_OverChargeState___TypeInfo, 3LL);
    v69.fields.value = Field__PrivateImplementationDetails__44BE0EBF7C907BA44AD83314C6AD0AA399AD5B73911C129D2CD6A85D4A056C90;
    System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray_42880004(v48, v69, 0LL);
    DataVals__UpdateOverChargeEachFunc(baseVals, (DataVals_OverChargeState_array *)v48, 0LL);
    v49 = DataVals__IsOverChargeState(baseVals, 2, 0LL) || DataVals__IsOverChargeState(baseVals, 8, 0LL);
    v34 = 1;
    IsOverChargeState = DataVals__IsOverChargeState(baseVals, 1, 0LL);
    v38 = 0;
    TargetRarityList = 0LL;
    v41 = v49 && !IsOverChargeState;
    v40 = buffIndv;
  }
LABEL_29:
  v62 = v41;
  isRarityAtk = v38;
  NPFixedDamageValue = DataVals__GetNPFixedDamageValue(baseVals, 0LL);
  damageProcessArgs = (BattleLogic_DamageProcessArgs_o *)sub_B0D974(BattleLogic_DamageProcessArgs_TypeInfo, v52, v53);
  BattleLogic_DamageProcessArgs___ctor(damageProcessArgs, 0, NPFixedDamageValue, 0LL);
  logic = this->fields.logic;
  v56 = System_Collections_Generic_List_int___ToArray(
          v30,
          (const MethodInfo_2FB200C *)Method_System_Collections_Generic_List_int__ToArray__);
  IsIncludeIgnoreIndividuality = DataVals__IsIncludeIgnoreIndividuality(baseVals, 0LL);
  data = (BattleData_o *)DataVals__isParam(baseVals, 90, 0LL);
  if ( !logic )
    goto LABEL_38;
  data = (BattleData_o *)BattleLogic__getFunctionNpDamagelist(
                           logic,
                           v66,
                           v65,
                           v56,
                           v68,
                           typea,
                           action,
                           v40,
                           buffIndv,
                           TargetRarityList,
                           IsIncludeIgnoreIndividuality,
                           (unsigned __int8)data & 1,
                           damageProcessArgs,
                           0LL);
  v58 = (BattleActionData_DamageData_o *)data;
  if ( (unsigned int)(typea - 3) < 8 && ((0x93u >> (typea - 3)) & 1) != 0 )
    v59 = 1;
  else
    v59 = v34 & v62;
  if ( !data )
    goto LABEL_38;
  BattleActionData_DamageData__addAttackSideEffectAction((BattleActionData_DamageData_o *)data, 80, 0LL);
  if ( !v67 )
    goto LABEL_38;
  BattleActionData__setDamageData(v67, v58, baseVals, v59, isRarityAtk, 0LL);
  return v67;
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
  void *data; // x0
  __int64 v20; // x1
  __int64 v21; // x2
  struct BattleData_o *v22; // x8
  System_Collections_Generic_List_USFGOSetAudioGroupIndexConditional_WeightIndex__o *player_datalist; // x21
  struct BattleLogicFunction___c_StaticFields *static_fields; // x8
  System_Action_DrawLotsDisplayMessage_DisplayedInGroup_SaveData__o *_9__87_0; // x22
  Il2CppObject *v26; // x23
  struct BattleLogicFunction___c_StaticFields *v27; // x0
  System_String_array **v28; // x2
  System_String_array **v29; // x3
  System_Boolean_array **v30; // x4
  System_Int32_array **v31; // x5
  System_Int32_array *v32; // x6
  System_Int32_array *v33; // x7
  __int64 v34; // x1
  __int64 v35; // x2
  struct BattleData_o *v36; // x8
  System_Collections_Generic_List_TitleInfoControl_EventEndTimeInfo__o *v37; // x21
  struct BattleLogicFunction___c_StaticFields *v38; // x8
  System_Comparison_TitleInfoControl_EventEndTimeInfo__o *_9__87_1; // x22
  Il2CppObject *v40; // x23
  struct BattleLogicFunction___c_StaticFields *v41; // x0
  System_String_array **v42; // x2
  System_String_array **v43; // x3
  System_Boolean_array **v44; // x4
  System_Int32_array **v45; // x5
  System_Int32_array *v46; // x6
  System_Int32_array *v47; // x7
  struct BattleData_o *v48; // x8
  int v49; // w8
  unsigned int *v50; // x21
  int32_t v51; // w23
  BattleServantData_o *v52; // x22
  unsigned __int64 v53; // x23
  __int64 v54; // x8
  unsigned __int64 v55; // x9
  unsigned __int64 v56; // x8
  __int64 v57; // x22
  struct BattleData_o *v58; // x8
  struct System_Int32_array *p_entryid; // x8
  __int64 v60; // x1
  __int64 v61; // x2
  BattleLogicTask_o *v62; // x21
  __int64 v64; // x0

  if ( (byte_421703B & 1) == 0 )
  {
    sub_B0D8A4(&Method_System_Action_BattleServantData___ctor__, *(_QWORD *)&actionId);
    sub_B0D8A4(&System_Action_BattleServantData__TypeInfo, v7);
    sub_B0D8A4(&BattleActionData_TypeInfo, v8);
    sub_B0D8A4(&BattleLogicTask_TypeInfo, v9);
    sub_B0D8A4(&Method_System_Comparison_BattleServantData___ctor__, v10);
    sub_B0D8A4(&System_Comparison_BattleServantData__TypeInfo, v11);
    sub_B0D8A4(&Method_System_Collections_Generic_List_BattleServantData__ForEach__, v12);
    sub_B0D8A4(&Method_System_Collections_Generic_List_BattleServantData__Sort__, v13);
    sub_B0D8A4(&Method_System_Collections_Generic_List_BattleServantData__ToArray__, v14);
    sub_B0D8A4(&Method_BattleLogicFunction___c__functionPtShuffle_b__87_0__, v15);
    sub_B0D8A4(&Method_BattleLogicFunction___c__functionPtShuffle_b__87_1__, v16);
    sub_B0D8A4(&BattleLogicFunction___c_TypeInfo, v17);
    byte_421703B = 1;
  }
  v18 = (BattleActionData_o *)sub_B0D974(BattleActionData_TypeInfo, *(_QWORD *)&actionId, funcEnt);
  BattleActionData___ctor(v18, 0LL);
  data = this->fields.data;
  if ( !data )
    goto LABEL_57;
  BattleData__SubBuffFromPT_18558064((BattleData_o *)data, 0LL, 0LL);
  data = this->fields.data;
  if ( !data )
    goto LABEL_57;
  BattleData__SubBuffExitSvt((BattleData_o *)data, 0LL, 0LL);
  v22 = this->fields.data;
  if ( !v22 )
    goto LABEL_57;
  player_datalist = (System_Collections_Generic_List_USFGOSetAudioGroupIndexConditional_WeightIndex__o *)v22->fields.player_datalist;
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
    v26 = (Il2CppObject *)static_fields->__9;
    _9__87_0 = (System_Action_DrawLotsDisplayMessage_DisplayedInGroup_SaveData__o *)sub_B0D974(
                                                                                      System_Action_BattleServantData__TypeInfo,
                                                                                      v20,
                                                                                      v21);
    System_Action_DrawLotsDisplayMessage_DisplayedInGroup_SaveData____ctor(
      _9__87_0,
      v26,
      Method_BattleLogicFunction___c__functionPtShuffle_b__87_0__,
      (const MethodInfo_246EA3C *)Method_System_Action_BattleServantData___ctor__);
    v27 = BattleLogicFunction___c_TypeInfo->static_fields;
    v27->__9__87_0 = (struct System_Action_BattleServantData__o *)_9__87_0;
    sub_B0D840(
      (BattleServantConfConponent_o *)&v27->__9__87_0,
      (System_Int32_array **)_9__87_0,
      v28,
      v29,
      v30,
      v31,
      v32,
      v33);
  }
  if ( !player_datalist )
    goto LABEL_57;
  System_Collections_Generic_List_USFGOSetAudioGroupIndexConditional_WeightIndex___ForEach(
    player_datalist,
    (System_Action_T__o *)_9__87_0,
    (const MethodInfo_2FC6400 *)Method_System_Collections_Generic_List_BattleServantData__ForEach__);
  v36 = this->fields.data;
  if ( !v36 )
    goto LABEL_57;
  data = BattleLogicFunction___c_TypeInfo;
  v37 = (System_Collections_Generic_List_TitleInfoControl_EventEndTimeInfo__o *)v36->fields.player_datalist;
  if ( (BYTE3(BattleLogicFunction___c_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !BattleLogicFunction___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BattleLogicFunction___c_TypeInfo);
    data = BattleLogicFunction___c_TypeInfo;
  }
  v38 = (struct BattleLogicFunction___c_StaticFields *)*((_QWORD *)data + 23);
  _9__87_1 = (System_Comparison_TitleInfoControl_EventEndTimeInfo__o *)v38->__9__87_1;
  if ( !_9__87_1 )
  {
    if ( (*((_BYTE *)data + 307) & 4) != 0 && !*((_DWORD *)data + 56) )
    {
      j_il2cpp_runtime_class_init_0(data);
      v38 = BattleLogicFunction___c_TypeInfo->static_fields;
    }
    v40 = (Il2CppObject *)v38->__9;
    _9__87_1 = (System_Comparison_TitleInfoControl_EventEndTimeInfo__o *)sub_B0D974(
                                                                           System_Comparison_BattleServantData__TypeInfo,
                                                                           v34,
                                                                           v35);
    System_Comparison_TitleInfoControl_EventEndTimeInfo____ctor(
      _9__87_1,
      v40,
      Method_BattleLogicFunction___c__functionPtShuffle_b__87_1__,
      (const MethodInfo_2412E90 *)Method_System_Comparison_BattleServantData___ctor__);
    v41 = BattleLogicFunction___c_TypeInfo->static_fields;
    v41->__9__87_1 = (struct System_Comparison_BattleServantData__o *)_9__87_1;
    sub_B0D840(
      (BattleServantConfConponent_o *)&v41->__9__87_1,
      (System_Int32_array **)_9__87_1,
      v42,
      v43,
      v44,
      v45,
      v46,
      v47);
  }
  if ( !v37 )
    goto LABEL_57;
  System_Collections_Generic_List_TitleInfoControl_EventEndTimeInfo___Sort(
    v37,
    (System_Comparison_T__o *)_9__87_1,
    (const MethodInfo_2FC77C4 *)Method_System_Collections_Generic_List_BattleServantData__Sort__);
  v48 = this->fields.data;
  if ( !v48 )
    goto LABEL_57;
  data = v48->fields.player_datalist;
  if ( !data )
    goto LABEL_57;
  data = System_Collections_Generic_List_WarBoardUiData_SaveData___ToArray(
           (System_Collections_Generic_List_WarBoardUiData_SaveData__o *)data,
           (const MethodInfo_2FC7834 *)Method_System_Collections_Generic_List_BattleServantData__ToArray__);
  if ( !data )
    goto LABEL_57;
  v49 = *((_DWORD *)data + 6);
  v50 = (unsigned int *)data;
  if ( v49 >= 1 )
  {
    v51 = 0;
    while ( 1 )
    {
      if ( v51 >= (unsigned int)v49 )
      {
LABEL_58:
        v64 = sub_B0D9A8(data);
        sub_B0D948(v64, 0LL);
      }
      v52 = *(BattleServantData_o **)&v50[2 * v51 + 8];
      if ( !v52 )
        break;
      if ( v52->fields.isEntry )
      {
        data = (void *)BattleServantData__isAlive(v52, 0, 0LL);
        if ( ((unsigned __int8)data & 1) != 0 )
          v52->fields.isEntry = 0;
      }
      v52->fields.deckIndex = v51;
      v49 = v50[6];
      if ( ++v51 >= v49 )
        goto LABEL_36;
    }
LABEL_57:
    sub_B0D97C(data);
  }
LABEL_36:
  data = this->fields.data;
  if ( !data )
    goto LABEL_57;
  v53 = 0LL;
  while ( 1 )
  {
    v54 = *((_QWORD *)data + 36);
    if ( !v54 )
      goto LABEL_57;
    v55 = *(unsigned int *)(v54 + 24);
    if ( (__int64)v53 >= (int)v55 )
      break;
    if ( v53 >= v55 )
      goto LABEL_58;
    *(_DWORD *)(v54 + 4 * v53 + 32) = -1;
    v56 = v50[6];
    if ( (__int64)v53 < (int)v56 )
    {
      if ( v53 >= v56 )
        goto LABEL_58;
      v57 = *(_QWORD *)&v50[2 * v53 + 8];
      if ( !v57 )
        goto LABEL_57;
      data = (void *)BattleServantData__isAlive(*(BattleServantData_o **)&v50[2 * v53 + 8], 0, 0LL);
      if ( ((unsigned __int8)data & 1) != 0 )
      {
        v58 = this->fields.data;
        if ( !v58 )
          goto LABEL_57;
        p_entryid = v58->fields.p_entryid;
        if ( !p_entryid )
          goto LABEL_57;
        if ( v53 >= p_entryid->max_length )
          goto LABEL_58;
        p_entryid->m_Items[v53 + 1] = *(_DWORD *)(v57 + 24);
        *(_BYTE *)(v57 + 452) = 1;
        *(_BYTE *)(v57 + 517) = 1;
      }
    }
    data = this->fields.data;
    ++v53;
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
  v62 = (BattleLogicTask_o *)sub_B0D974(BattleLogicTask_TypeInfo, v60, v61);
  BattleLogicTask___ctor(v62, 0LL);
  if ( !v62 )
    goto LABEL_57;
  BattleLogicTask__setCheckEntryFunction(v62, 0LL);
  data = this->fields.logic;
  if ( !data )
    goto LABEL_57;
  BattleLogic__AddBattleLogicTask((BattleLogic_o *)data, v62, 0LL);
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
  __int64 data; // x0
  BattleServantData_o *v16; // x25
  BattleServantData_o *ServantData; // x24
  __int64 v18; // x1
  __int64 v19; // x2
  __int64 v20; // x26
  __int64 v21; // x8
  double v22; // d0
  int32_t v23; // w28
  int v24; // w19
  System_Int32_array **v26; // x0
  System_String_array **v27; // x2
  System_String_array **v28; // x3
  System_Boolean_array **v29; // x4
  System_Int32_array **v30; // x5
  System_Int32_array *v31; // x6
  System_Int32_array *v32; // x7
  System_Int32_array **v33; // x0
  System_String_array **v34; // x2
  System_String_array **v35; // x3
  System_Boolean_array **v36; // x4
  System_Int32_array **v37; // x5
  System_Int32_array *v38; // x6
  System_Int32_array *v39; // x7
  System_String_array **v40; // x2
  System_String_array **v41; // x3
  System_Boolean_array **v42; // x4
  System_Int32_array **v43; // x5
  System_Int32_array *v44; // x6
  System_Int32_array *v45; // x7
  System_Int32_array **v46; // x0
  System_String_array **v47; // x2
  System_String_array **v48; // x3
  System_Boolean_array **v49; // x4
  System_Int32_array **v50; // x5
  System_Int32_array *v51; // x6
  System_Int32_array *v52; // x7
  System_Int32_array **v53; // x0
  System_String_array **v54; // x2
  System_String_array **v55; // x3
  System_Boolean_array **v56; // x4
  System_Int32_array **v57; // x5
  System_Int32_array *v58; // x6
  System_Int32_array *v59; // x7
  System_Int32_array **v60; // x0
  System_String_array **v61; // x2
  System_String_array **v62; // x3
  System_Boolean_array **v63; // x4
  System_Int32_array **v64; // x5
  System_Int32_array *v65; // x6
  System_Int32_array *v66; // x7
  struct BattleData_o *v67; // x8
  int32_t uniqueId; // w19
  int32_t v69; // w21
  bool IsOpponentPTUniqueID; // w0
  __int64 v72; // x0
  int32_t bId; // [xsp+Ch] [xbp-54h]

  if ( (byte_4217039 & 1) == 0 )
  {
    sub_B0D8A4(&BattleActionData_TypeInfo, *(_QWORD *)&playerId);
    sub_B0D8A4(&BattleActionData_DamageData_TypeInfo, v11);
    sub_B0D8A4(&int___TypeInfo, v12);
    sub_B0D8A4(&BattleBuffData_ShowBuffData___TypeInfo, v13);
    byte_4217039 = 1;
  }
  v14 = (BattleActionData_o *)sub_B0D974(BattleActionData_TypeInfo, *(_QWORD *)&playerId, *(_QWORD *)&targetId);
  BattleActionData___ctor(v14, 0LL);
  data = (__int64)this->fields.data;
  if ( !data )
    goto LABEL_27;
  bId = playerId;
  data = (__int64)BattleData__getServantData((BattleData_o *)data, playerId, 0LL);
  if ( !this->fields.data )
    goto LABEL_27;
  v16 = (BattleServantData_o *)data;
  ServantData = BattleData__getServantData(this->fields.data, targetId, 0LL);
  v20 = sub_B0D974(BattleActionData_DamageData_TypeInfo, v18, v19);
  BattleActionData_DamageData___ctor((BattleActionData_DamageData_o *)v20, 0LL);
  if ( !v16 )
    goto LABEL_27;
  data = BattleServantData__getAccumulationDamage(v16, 0LL);
  if ( !baseVals )
    goto LABEL_27;
  v21 = DataVals__GetValue(baseVals, 0LL) * (__int64)(int)data;
  data = (__int64)this->fields.data;
  v22 = (double)v21 / 1000.0;
  if ( v22 == INFINITY )
    v22 = -v22;
  if ( !data )
    goto LABEL_27;
  v23 = (int)v22;
  data = BattleData__IsDeadOkTurn((BattleData_o *)data, targetId, 0LL);
  if ( (data & 1) == 0 )
  {
    if ( !ServantData )
      goto LABEL_27;
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
    goto LABEL_27;
  *(_DWORD *)(v20 + 28) = targetId;
  *(_DWORD *)(v20 + 16) = funcIndex;
  *(_WORD *)(v20 + 32) = 0;
  *(_BYTE *)(v20 + 34) = 0;
  *(_DWORD *)(v20 + 36) = 0;
  *(_BYTE *)(v20 + 40) = 0;
  v26 = (System_Int32_array **)sub_B0D8BC(BattleBuffData_ShowBuffData___TypeInfo, 0LL);
  *(_QWORD *)(v20 + 64) = v26;
  sub_B0D840((BattleServantConfConponent_o *)(v20 + 64), v26, v27, v28, v29, v30, v31, v32);
  v33 = (System_Int32_array **)sub_B0D8BC(BattleBuffData_ShowBuffData___TypeInfo, 0LL);
  *(_QWORD *)(v20 + 72) = v33;
  sub_B0D840((BattleServantConfConponent_o *)(v20 + 72), v33, v34, v35, v36, v37, v38, v39);
  data = sub_B0D8BC(int___TypeInfo, 1LL);
  if ( !data )
    goto LABEL_27;
  if ( !*(_DWORD *)(data + 24) )
  {
    v72 = sub_B0D9A8(data);
    sub_B0D948(v72, 0LL);
  }
  *(_DWORD *)(data + 32) = v23;
  *(_QWORD *)(v20 + 96) = data;
  sub_B0D840((BattleServantConfConponent_o *)(v20 + 96), (System_Int32_array **)data, v40, v41, v42, v43, v44, v45);
  v46 = (System_Int32_array **)sub_B0D8BC(int___TypeInfo, 0LL);
  *(_QWORD *)(v20 + 104) = v46;
  sub_B0D840((BattleServantConfConponent_o *)(v20 + 104), v46, v47, v48, v49, v50, v51, v52);
  v53 = (System_Int32_array **)sub_B0D8BC(int___TypeInfo, 0LL);
  *(_QWORD *)(v20 + 112) = v53;
  sub_B0D840((BattleServantConfConponent_o *)(v20 + 112), v53, v54, v55, v56, v57, v58, v59);
  v60 = (System_Int32_array **)sub_B0D8BC(int___TypeInfo, 0LL);
  *(_QWORD *)(v20 + 120) = v60;
  sub_B0D840((BattleServantConfConponent_o *)(v20 + 120), v60, v61, v62, v63, v64, v65, v66);
  if ( !ServantData )
    goto LABEL_27;
  BattleServantData__provisionalDamage(ServantData, v23, 0LL);
  BattleServantData__ResultDamage(ServantData, v23, v16, 0LL, 0, 0LL);
  data = BattleServantData__isLogicResultAlive(ServantData, 0LL);
  if ( (data & 1) == 0 )
  {
    v67 = this->fields.data;
    if ( !v67 )
      goto LABEL_27;
    ServantData->fields.deadTurn = v67->fields.typeTurn;
  }
  BattleActionData_DamageData__addAttackSideEffectAction((BattleActionData_DamageData_o *)v20, 80, 0LL);
  if ( !v14
    || (BattleActionData__setDamageData(v14, (BattleActionData_DamageData_o *)v20, baseVals, 0, 0, 0LL),
        (data = (__int64)this->fields.data) == 0) )
  {
LABEL_27:
    sub_B0D97C(data);
  }
  uniqueId = v16->fields.uniqueId;
  v69 = *(_DWORD *)(data + 188);
  IsOpponentPTUniqueID = BattleData__IsOpponentPTUniqueID((BattleData_o *)data, targetId, bId, 0LL);
  BattleServantData__setActionHistory(ServantData, uniqueId, 1, v69, IsOpponentPTUniqueID, 0LL);
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
  __int64 v14; // x1
  __int64 v15; // x2
  struct BattleData_o *v16; // x8
  BattleData_o *v17; // x23
  System_Collections_Generic_IEnumerable_TSource__o *enemy_datalist; // x21
  BattleLogicFunction___c_c *v19; // x0
  struct BattleLogicFunction___c_StaticFields *static_fields; // x8
  System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *_9__81_0; // x22
  Il2CppObject *v22; // x24
  struct BattleLogicFunction___c_StaticFields *v23; // x0
  System_String_array **v24; // x2
  System_String_array **v25; // x3
  System_Boolean_array **v26; // x4
  System_Int32_array **v27; // x5
  System_Int32_array *v28; // x6
  System_Int32_array *v29; // x7
  __int64 v30; // x1
  __int64 v31; // x2
  BattleActionData_o *v32; // x21
  int32_t Param; // w24
  int32_t v34; // w22
  BattleServantData_o *EnemyServantData; // x24
  BattleServantData_o *EnemyServantDataFromNpcId; // x22
  struct BattleData_o *v37; // x8
  int v38; // w9
  struct System_Int32_array *e_entryid; // x10
  int max_length; // w10
  struct System_Int32_array *v41; // x10
  BattleActionData_o *result; // x0
  int32_t DeckIndex; // w23
  struct BattleData_o *v44; // x8
  struct System_Int32_array *v45; // x9
  int32_t v46; // w10
  int32_t v47; // w25
  int32_t *p_deckIndex; // x26
  unsigned __int64 v49; // x10
  unsigned __int64 v50; // x11
  struct BattleData_o *v51; // x8
  unsigned __int64 v52; // x9
  struct System_Int32_array *v53; // x10
  unsigned __int64 v54; // x11
  char *v55; // x10
  __int64 v56; // x0

  if ( (byte_4217035 & 1) == 0 )
  {
    sub_B0D8A4(&BattleActionData_TypeInfo, funcEnt);
    sub_B0D8A4(&Method_System_Linq_Enumerable_Count_BattleServantData____67988176, v8);
    sub_B0D8A4(&Method_System_Func_BattleServantData__bool___ctor__, v9);
    sub_B0D8A4(&System_Func_BattleServantData__bool__TypeInfo, v10);
    sub_B0D8A4(&Method_BattleLogicFunction___c__functionReplaceEnemyMember_b__81_0__, v11);
    sub_B0D8A4(&BattleLogicFunction___c_TypeInfo, v12);
    byte_4217035 = 1;
  }
  data = this->fields.data;
  if ( !data )
    goto LABEL_68;
  data = (BattleData_o *)BattleData__getAliveFieldEnemyServantIDList(data, 0, 0LL);
  v16 = this->fields.data;
  if ( !v16 )
    goto LABEL_68;
  v17 = data;
  enemy_datalist = (System_Collections_Generic_IEnumerable_TSource__o *)v16->fields.enemy_datalist;
  v19 = BattleLogicFunction___c_TypeInfo;
  if ( (BYTE3(BattleLogicFunction___c_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !BattleLogicFunction___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BattleLogicFunction___c_TypeInfo);
    v19 = BattleLogicFunction___c_TypeInfo;
  }
  static_fields = v19->static_fields;
  _9__81_0 = (System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *)static_fields->__9__81_0;
  if ( !_9__81_0 )
  {
    if ( (BYTE3(v19->vtable._0_Equals.methodPtr) & 4) != 0 && !v19->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v19);
      static_fields = BattleLogicFunction___c_TypeInfo->static_fields;
    }
    v22 = (Il2CppObject *)static_fields->__9;
    _9__81_0 = (System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *)sub_B0D974(
                                                                                    System_Func_BattleServantData__bool__TypeInfo,
                                                                                    v14,
                                                                                    v15);
    System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool____ctor(
      _9__81_0,
      v22,
      Method_BattleLogicFunction___c__functionReplaceEnemyMember_b__81_0__,
      (const MethodInfo_26189B8 *)Method_System_Func_BattleServantData__bool___ctor__);
    v23 = BattleLogicFunction___c_TypeInfo->static_fields;
    v23->__9__81_0 = (struct System_Func_BattleServantData__bool__o *)_9__81_0;
    sub_B0D840(
      (BattleServantConfConponent_o *)&v23->__9__81_0,
      (System_Int32_array **)_9__81_0,
      v24,
      v25,
      v26,
      v27,
      v28,
      v29);
  }
  data = (BattleData_o *)System_Linq_Enumerable__Count_WarBoardAIRoute_RouteData_(
                           enemy_datalist,
                           (System_Func_TSource__bool__o *)_9__81_0,
                           (const MethodInfo_1B48614 *)Method_System_Linq_Enumerable_Count_BattleServantData____67988176);
  if ( (int)data < 4 )
    return 0LL;
  if ( !v17 )
    goto LABEL_68;
  if ( !v17->fields.rootfsm )
    return 0LL;
  v32 = (BattleActionData_o *)sub_B0D974(BattleActionData_TypeInfo, v30, v31);
  BattleActionData___ctor(v32, 0LL);
  if ( !baseVals )
    goto LABEL_68;
  Param = DataVals__GetParam(baseVals, 47, 0, 0LL);
  data = (BattleData_o *)DataVals__GetParam(baseVals, 48, 0, 0LL);
  if ( !this->fields.data )
    goto LABEL_68;
  v34 = (int)data;
  data = (BattleData_o *)BattleData__getEnemyServantDataFromNpcId(this->fields.data, Param, 0LL);
  if ( !this->fields.data )
    goto LABEL_68;
  EnemyServantData = (BattleServantData_o *)data;
  EnemyServantDataFromNpcId = BattleData__getEnemyServantDataFromNpcId(this->fields.data, v34, 0LL);
  if ( !EnemyServantData )
  {
    data = (BattleData_o *)DataVals__GetParam(baseVals, 49, 0, 0LL);
    v37 = this->fields.data;
    v38 = (_DWORD)data - 1;
    if ( (int)data - 1 < 0 )
    {
      if ( !v37 )
        goto LABEL_68;
      v38 = 0;
    }
    else
    {
      if ( !v37 )
        goto LABEL_68;
      e_entryid = v37->fields.e_entryid;
      if ( !e_entryid )
        goto LABEL_68;
      max_length = e_entryid->max_length;
      if ( v38 >= max_length )
        v38 = max_length - 1;
    }
    v41 = v37->fields.e_entryid;
    if ( !v41 )
      goto LABEL_68;
    if ( v38 >= v41->max_length )
      goto LABEL_69;
    data = (BattleData_o *)BattleData__getEnemyServantData(this->fields.data, v41->m_Items[v38 + 1], 0LL);
    if ( !data )
      goto LABEL_68;
    EnemyServantData = (BattleServantData_o *)data;
    data = (BattleData_o *)BattleServantData__isDead((BattleServantData_o *)data, 0LL);
    if ( ((unsigned __int8)data & 1) != 0 )
    {
      if ( !LODWORD(v17->fields.rootfsm) )
        goto LABEL_69;
      data = this->fields.data;
      if ( !data )
        goto LABEL_68;
      EnemyServantData = BattleData__getEnemyServantData(data, (int32_t)v17->fields.fsm, 0LL);
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
    v44 = this->fields.data;
    if ( v44 )
    {
      v45 = v44->fields.e_entryid;
      if ( v45 )
      {
        v46 = v45->max_length;
        v47 = (int)data;
        if ( DeckIndex >= v46 )
          goto LABEL_49;
        if ( DeckIndex < (unsigned int)v46 )
        {
          if ( v45->m_Items[DeckIndex + 1] == EnemyServantData->fields.uniqueId )
          {
            p_deckIndex = &EnemyServantData->fields.deckIndex;
            goto LABEL_57;
          }
LABEL_49:
          v49 = 0LL;
          p_deckIndex = &EnemyServantData->fields.deckIndex;
          while ( 1 )
          {
            v50 = v45->max_length;
            if ( (__int64)v49 >= (int)v50 )
              break;
            if ( v49 >= v50 )
              goto LABEL_69;
            if ( v45->m_Items[v49 + 1] != EnemyServantData->fields.uniqueId
              || (*p_deckIndex = v49, (v44 = this->fields.data) != 0LL) )
            {
              v45 = v44->fields.e_entryid;
              ++v49;
              if ( v45 )
                continue;
            }
            goto LABEL_68;
          }
          data = (BattleData_o *)BattleServantData__getDeckIndex(EnemyServantData, 0LL);
          DeckIndex = (int)data;
LABEL_57:
          *p_deckIndex = v47;
          EnemyServantDataFromNpcId->fields.deckIndex = DeckIndex;
          v51 = this->fields.data;
          if ( v51 )
          {
            v52 = 0LL;
            while ( 1 )
            {
              v53 = v51->fields.e_entryid;
              if ( !v53 )
                goto LABEL_68;
              v54 = v53->max_length;
              if ( (__int64)v52 >= (int)v54 )
                break;
              if ( v52 >= v54 )
                goto LABEL_69;
              v55 = (char *)v53 + 4 * v52;
              if ( *((_DWORD *)v55 + 8) == EnemyServantData->fields.uniqueId )
              {
                *((_DWORD *)v55 + 8) = EnemyServantDataFromNpcId->fields.uniqueId;
                v51 = this->fields.data;
              }
              ++v52;
              if ( !v51 )
                goto LABEL_68;
            }
            if ( v32 )
            {
              BattleActionData__setReplaceMember(
                v32,
                DeckIndex,
                EnemyServantDataFromNpcId->fields.uniqueId,
                EnemyServantData->fields.uniqueId,
                funcIndex,
                0LL);
              return v32;
            }
          }
          goto LABEL_68;
        }
LABEL_69:
        v56 = sub_B0D9A8(data);
        sub_B0D948(v56, 0LL);
      }
    }
LABEL_68:
    sub_B0D97C(data);
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
  struct BattleData_o *v16; // x8
  struct System_Int32_array *p_entryid; // x9
  int32_t max_length; // w10
  int32_t v19; // w25
  int32_t *p_deckIndex; // x26
  unsigned __int64 v21; // x10
  unsigned __int64 v22; // x11
  struct BattleData_o *v23; // x8
  unsigned __int64 v24; // x9
  struct System_Int32_array *v25; // x10
  unsigned __int64 v26; // x11
  char *v27; // x10
  __int64 v29; // x0

  if ( (byte_4217034 & 1) == 0 )
  {
    sub_B0D8A4(&BattleActionData_TypeInfo, *(_QWORD *)&targetId);
    byte_4217034 = 1;
  }
  v11 = (BattleActionData_o *)sub_B0D974(BattleActionData_TypeInfo, *(_QWORD *)&targetId, *(_QWORD *)&subTargetId);
  BattleActionData___ctor(v11, 0LL);
  data = this->fields.data;
  if ( !data )
    goto LABEL_34;
  data = (BattleData_o *)BattleData__getServantData(data, targetId, 0LL);
  if ( !this->fields.data )
    goto LABEL_34;
  v13 = (BattleServantData_o *)data;
  data = (BattleData_o *)BattleData__getServantData(this->fields.data, subTargetId, 0LL);
  if ( !v13 )
    goto LABEL_34;
  v14 = (BattleServantData_o *)data;
  data = (BattleData_o *)BattleServantData__getDeckIndex(v13, 0LL);
  if ( !v14 )
    goto LABEL_34;
  v15 = (int)data;
  data = (BattleData_o *)BattleServantData__getDeckIndex(v14, 0LL);
  v16 = this->fields.data;
  if ( !v16 )
    goto LABEL_34;
  p_entryid = v16->fields.p_entryid;
  if ( !p_entryid )
    goto LABEL_34;
  max_length = p_entryid->max_length;
  v19 = (int)data;
  if ( v15 >= max_length )
    goto LABEL_13;
  if ( v15 >= (unsigned int)max_length )
  {
LABEL_35:
    v29 = sub_B0D9A8(data);
    sub_B0D948(v29, 0LL);
  }
  if ( p_entryid->m_Items[v15 + 1] == v13->fields.uniqueId )
  {
    p_deckIndex = &v13->fields.deckIndex;
  }
  else
  {
LABEL_13:
    v21 = 0LL;
    p_deckIndex = &v13->fields.deckIndex;
    while ( 1 )
    {
      v22 = p_entryid->max_length;
      if ( (__int64)v21 >= (int)v22 )
        break;
      if ( v21 >= v22 )
        goto LABEL_35;
      if ( p_entryid->m_Items[v21 + 1] != v13->fields.uniqueId || (*p_deckIndex = v21, (v16 = this->fields.data) != 0LL) )
      {
        p_entryid = v16->fields.p_entryid;
        ++v21;
        if ( p_entryid )
          continue;
      }
      goto LABEL_34;
    }
    data = (BattleData_o *)BattleServantData__getDeckIndex(v13, 0LL);
    v15 = (int)data;
  }
  *p_deckIndex = v19;
  v14->fields.deckIndex = v15;
  v23 = this->fields.data;
  if ( !v23 )
    goto LABEL_34;
  v24 = 0LL;
  while ( 1 )
  {
    v25 = v23->fields.p_entryid;
    if ( !v25 )
      goto LABEL_34;
    v26 = v25->max_length;
    if ( (__int64)v24 >= (int)v26 )
      break;
    if ( v24 >= v26 )
      goto LABEL_35;
    v27 = (char *)v25 + 4 * v24;
    if ( *((_DWORD *)v27 + 8) == v13->fields.uniqueId )
    {
      *((_DWORD *)v27 + 8) = v14->fields.uniqueId;
      v23 = this->fields.data;
    }
    ++v24;
    if ( !v23 )
      goto LABEL_34;
  }
  if ( !v11
    || (BattleActionData__setReplaceMember(v11, v15, v14->fields.uniqueId, v13->fields.uniqueId, funcIndex, 0LL),
        v11->fields.redrawCommandCard = 1,
        (data = this->fields.data) == 0LL)
    || (BattleData__SubBuffFromPT_18558064(data, v14, 0LL), (data = this->fields.data) == 0LL) )
  {
LABEL_34:
    sub_B0D97C(data);
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

  if ( (byte_4217033 & 1) == 0 )
  {
    sub_B0D8A4(&BattleActionData_TypeInfo, *(_QWORD *)&targetId);
    byte_4217033 = 1;
  }
  v7 = (BattleActionData_o *)sub_B0D974(BattleActionData_TypeInfo, *(_QWORD *)&targetId, funcEnt);
  BattleActionData___ctor(v7, 0LL);
  data = this->fields.data;
  if ( !data
    || (BattleData__SubBuffFromPT_18558064(data, 0LL, 0LL), (data = this->fields.data) == 0LL)
    || (BattleData__shuffleCommand(data, 0LL), (data = (BattleData_o *)this->fields.logic) == 0LL)
    || (BattleLogic__drawCommand((BattleLogic_o *)data, 0LL), (data = (BattleData_o *)this->fields.logic) == 0LL)
    || (BattleLogic__setDrawCard((BattleLogic_o *)data, 0LL), !v7) )
  {
    sub_B0D97C(data);
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
  System_String_array **v26; // x2
  System_String_array **v27; // x3
  System_Boolean_array **v28; // x4
  System_Int32_array **v29; // x5
  System_Int32_array *v30; // x6
  System_Int32_array *v31; // x7
  unsigned int uniqueId; // w8
  System_Int32_array **popupText; // x1
  System_Int32_array **effectList; // x1
  System_String_array **v35; // x2
  System_String_array **v36; // x3
  System_Boolean_array **v37; // x4
  System_Int32_array **v38; // x5
  System_Int32_array *v39; // x6
  System_Int32_array *v40; // x7

  if ( (byte_421703F & 1) == 0 )
  {
    sub_B0D8A4(&BattleActionData_TypeInfo, *(_QWORD *)&targetId);
    sub_B0D8A4(&BattleActionData_BuffData_TypeInfo, v13);
    byte_421703F = 1;
  }
  v14 = (BattleActionData_o *)sub_B0D974(BattleActionData_TypeInfo, *(_QWORD *)&targetId, *(_QWORD *)&funcIdx);
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
  v25 = sub_B0D974(BattleActionData_BuffData_TypeInfo, v22, v23);
  BattleActionData_BuffData___ctor((BattleActionData_BuffData_o *)v25, 0LL);
  if ( !v25 )
    goto LABEL_22;
  uniqueId = v16->fields.uniqueId;
  *(_DWORD *)(v25 + 16) = 0;
  *(_QWORD *)(v25 + 40) = uniqueId;
  if ( !funcEnt )
    goto LABEL_22;
  popupText = (System_Int32_array **)funcEnt->fields.popupText;
  *(_QWORD *)(v25 + 56) = popupText;
  sub_B0D840((BattleServantConfConponent_o *)(v25 + 56), popupText, v26, v27, v28, v29, v30, v31);
  *(_DWORD *)(v25 + 68) = funcEnt->fields.popupTextColor;
  *(_DWORD *)(v25 + 64) = funcEnt->fields.popupIconId;
  effectList = (System_Int32_array **)funcEnt->fields.effectList;
  *(_QWORD *)(v25 + 72) = effectList;
  sub_B0D840((BattleServantConfConponent_o *)(v25 + 72), effectList, v35, v36, v37, v38, v39, v40);
  *(_DWORD *)(v25 + 28) = 2;
  if ( !v14 )
LABEL_22:
    sub_B0D97C(data);
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
  __int64 v16; // x25
  __int64 v17; // x25
  DataManager_o *MasterData_WarQuestSelectionMaster; // x0
  SkillLvMaster_o *v19; // x25
  struct BattleSkillInfoData_o *skillInfo; // x8
  SkillLvEntity_o *v21; // x26
  BattleActionData_o *v22; // x25
  UnityEngine_Object_o *PartsActor; // x27
  BattleServantData_o *monitor; // x0
  __int64 v25; // x1
  __int64 v26; // x2
  int32_t targetId; // w1
  const MethodInfo *v28; // x6
  BattleActionData_o *RevivalHealData; // x0
  UnityEngine_Object_o *v30; // x26
  BattleServantData_o *v31; // x0
  __int64 v32; // x1
  __int64 v33; // x2
  BattleActionData_o *v34; // x0
  BattleActionData_o *v35; // x1
  BattleActionData_o *v36; // x27
  int32_t v37; // w1
  const MethodInfo *v38; // x6
  BattleActionData_o *v39; // x0

  if ( (byte_421704B & 1) == 0 )
  {
    sub_B0D8A4(&BattleActionData_TypeInfo, actionData);
    sub_B0D8A4(&Method_DataManager_GetMasterData_SkillLvMaster___, v13);
    sub_B0D8A4(&UnityEngine_Object_TypeInfo, v14);
    sub_B0D8A4(&Method_SingletonMonoBehaviour_DataManager__getInstance__, v15);
    byte_421704B = 1;
  }
  v16 = *((_QWORD *)Method_SingletonMonoBehaviour_DataManager__getInstance__ + 3);
  if ( (*(_BYTE *)(v16 + 306) & 1) == 0 )
    sub_AA65A4(*((_QWORD *)Method_SingletonMonoBehaviour_DataManager__getInstance__ + 3));
  v17 = **(_QWORD **)(v16 + 192);
  if ( (*(_BYTE *)(v17 + 306) & 1) == 0 )
    sub_AA65A4(v17);
  MasterData_WarQuestSelectionMaster = **(DataManager_o ***)(v17 + 184);
  if ( !MasterData_WarQuestSelectionMaster )
    goto LABEL_42;
  MasterData_WarQuestSelectionMaster = (DataManager_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                          MasterData_WarQuestSelectionMaster,
                                                          (const MethodInfo_17145A8 *)Method_DataManager_GetMasterData_SkillLvMaster___);
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
    PartsActor = (UnityEngine_Object_o *)BattleData__GetPartsActor(
                                           (BattleData_o *)MasterData_WarQuestSelectionMaster,
                                           0,
                                           0LL);
    if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    }
    MasterData_WarQuestSelectionMaster = (DataManager_o *)UnityEngine_Object__op_Inequality(PartsActor, 0LL, 0LL);
    v22 = 0LL;
    if ( ((unsigned __int8)MasterData_WarQuestSelectionMaster & 1) != 0 )
    {
      if ( !PartsActor )
        goto LABEL_42;
      monitor = (BattleServantData_o *)PartsActor[18].monitor;
      if ( monitor )
      {
        v22 = 0LL;
        if ( !BattleServantData__isAlive(monitor, 0, 0LL) )
        {
          v22 = (BattleActionData_o *)sub_B0D974(BattleActionData_TypeInfo, v25, v26);
          BattleActionData___ctor(v22, 0LL);
          if ( !v22 )
            goto LABEL_42;
          v22->fields.actorId = actionData->fields.actorId;
          v22->fields.targetId = PartsActor[18].fields.m_CachedPtr;
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
                              v28);
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
    sub_B0D97C(MasterData_WarQuestSelectionMaster);
  v30 = (UnityEngine_Object_o *)BattleData__GetPartsActor((BattleData_o *)MasterData_WarQuestSelectionMaster, 2, 0LL);
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  MasterData_WarQuestSelectionMaster = (DataManager_o *)UnityEngine_Object__op_Inequality(v30, 0LL, 0LL);
  if ( ((unsigned __int8)MasterData_WarQuestSelectionMaster & 1) != 0 )
  {
    if ( v30 )
    {
      v31 = (BattleServantData_o *)v30[18].monitor;
      if ( !v31 || BattleServantData__isAlive(v31, 0, 0LL) )
        goto LABEL_34;
      v36 = (BattleActionData_o *)sub_B0D974(BattleActionData_TypeInfo, v32, v33);
      BattleActionData___ctor(v36, 0LL);
      if ( v36 )
      {
        v36->fields.actorId = actionData->fields.actorId;
        v36->fields.targetId = v30[18].fields.m_CachedPtr;
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
        if ( !v22 )
        {
          v34 = actionData;
          v35 = v36;
          goto LABEL_36;
        }
        BattleActionData__AddAfterActionData(v22, v36, 0, 0LL);
LABEL_35:
        v34 = actionData;
        v35 = v22;
LABEL_36:
        BattleActionData__AddAfterActionData(v34, v35, 0, 0LL);
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
  System_Int32_array **v13; // x1
  System_String_array **v14; // x2
  System_String_array **v15; // x3
  System_Boolean_array **v16; // x4
  System_Int32_array **v17; // x5
  System_Int32_array *v18; // x6
  System_Int32_array *v19; // x7
  BattleData_o *data; // x24
  __int64 v21; // x1
  __int64 v22; // x2
  BattleActionData_SkillShiftServant_o *v23; // x23

  if ( (byte_4217048 & 1) == 0 )
  {
    sub_B0D8A4(&BattleActionData_TypeInfo, actionData);
    sub_B0D8A4(&BattleActionData_SkillShiftServant_TypeInfo, v9);
    sub_B0D8A4(&StringLiteral_8829/*"MOTION_SHIFT"*/, v10);
    byte_4217048 = 1;
  }
  v11 = sub_B0D974(BattleActionData_TypeInfo, actionData, targetData);
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
  v13 = (System_Int32_array **)StringLiteral_8829/*"MOTION_SHIFT"*/;
  *(_QWORD *)(v11 + 64) = StringLiteral_8829/*"MOTION_SHIFT"*/;
  sub_B0D840((BattleServantConfConponent_o *)(v11 + 64), v13, v14, v15, v16, v17, v18, v19);
  data = this->fields.data;
  v23 = (BattleActionData_SkillShiftServant_o *)sub_B0D974(BattleActionData_SkillShiftServant_TypeInfo, v21, v22);
  BattleActionData_SkillShiftServant___ctor(v23, data, npcId, 0LL);
  if ( !v23 )
LABEL_8:
    sub_B0D97C(v12);
  BattleActionData_ShiftServant__setBeforeSvtData((BattleActionData_ShiftServant_o *)v23, targetData, 0LL);
  BattleActionData__setShiftServant((BattleActionData_o *)v11, (BattleActionData_ShiftServant_o *)v23, 0LL);
  BattleActionData__setShiftServant(actionData, (BattleActionData_ShiftServant_o *)v23, 0LL);
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
  __int64 v30; // x2
  BattleData_o *data; // x0
  System_String_array **v32; // x2
  System_String_array **v33; // x3
  System_Boolean_array **v34; // x4
  System_Int32_array **v35; // x5
  System_Int32_array *v36; // x6
  System_Int32_array *v37; // x7
  BattleServantData_o **v38; // x26
  int32_t rootfsm; // w28
  int v40; // w19
  BattleServantData_o *v41; // x19
  System_Int32_array *vals; // x28
  int32_t Value; // w20
  int32_t Value2; // w0
  DataVals_o *v45; // x8
  int32_t v46; // w25
  RemovedBuffInfo_o *v47; // x0
  System_String_array **v48; // x2
  System_String_array **v49; // x3
  System_Boolean_array **v50; // x4
  System_Int32_array **v51; // x5
  System_Int32_array *v52; // x6
  System_Int32_array *v53; // x7
  const MethodInfo *v54; // x7
  struct System_Collections_Generic_List_BattleBuffData_BuffData__o *RemovedAllBuffList_k__BackingField; // x22
  const MethodInfo *v56; // x6
  int32_t v57; // w19
  __int64 v58; // x1
  __int64 v59; // x2
  BattleServantData_o *v60; // x21
  System_Func_WarBoardManager_WarBoardOnboardSkillTarget__WarBoardPieceData__o *v61; // x19
  System_Collections_Generic_IEnumerable_TSource__o *v62; // x0
  System_Int32_array **v63; // x0
  System_String_array **v64; // x2
  System_String_array **v65; // x3
  System_Boolean_array **v66; // x4
  System_Int32_array **v67; // x5
  System_Int32_array *v68; // x6
  System_Int32_array *v69; // x7
  BattleActionData_o *v70; // x27
  Il2CppObject *current; // x19
  BattleData_o *v72; // x0
  _BOOL8 v73; // x0
  _BOOL8 v74; // x0
  __int64 v75; // x1
  __int64 v76; // x2
  BattleActionEffect_SubChangeMaxHpBuff_o *v77; // x19
  BattleData_o *v78; // x20
  System_Int32_array **v79; // x0
  System_String_array **v80; // x2
  System_String_array **v81; // x3
  System_Boolean_array **v82; // x4
  System_Int32_array **v83; // x5
  System_Int32_array *v84; // x6
  System_Int32_array *v85; // x7
  int v87; // [xsp+Ch] [xbp-B4h]
  int v88; // [xsp+10h] [xbp-B0h]
  int32_t v89; // [xsp+14h] [xbp-ACh]
  BattleActionData_o *v90; // [xsp+18h] [xbp-A8h]
  DataVals_o *dataVals; // [xsp+28h] [xbp-98h]
  unsigned int targetIda; // [xsp+34h] [xbp-8Ch]
  System_Collections_Generic_List_Enumerator_T__o v95; // [xsp+38h] [xbp-88h] BYREF
  System_Collections_Generic_List_Enumerator_T__o v96; // [xsp+50h] [xbp-70h] BYREF

  if ( (byte_4217027 & 1) == 0 )
  {
    sub_B0D8A4(&BattleActionData_TypeInfo, *(_QWORD *)&targetId);
    sub_B0D8A4(&Method_System_Linq_Enumerable_Select_BattleBuffData_BuffData__BattleBuffData_BuffData___, v15);
    sub_B0D8A4(&Method_System_Linq_Enumerable_ToList_BattleBuffData_BuffData___, v16);
    sub_B0D8A4(&Method_System_Collections_Generic_List_Enumerator_BattleBuffData_BuffData__Dispose__, v17);
    sub_B0D8A4(&Method_System_Collections_Generic_List_Enumerator_BattleBuffData_BuffData__MoveNext__, v18);
    sub_B0D8A4(&Method_System_Collections_Generic_List_Enumerator_BattleBuffData_BuffData__get_Current__, v19);
    sub_B0D8A4(&Method_System_Func_BattleBuffData_BuffData__BattleBuffData_BuffData___ctor__, v20);
    sub_B0D8A4(&System_Func_BattleBuffData_BuffData__BattleBuffData_BuffData__TypeInfo, v21);
    sub_B0D8A4(&Method_System_Collections_Generic_List_BattleBuffData_BuffData__GetEnumerator__, v22);
    sub_B0D8A4(&Method_System_Collections_Generic_List_BattleBuffData_BuffData__ToArray__, v23);
    sub_B0D8A4(&Method_System_Collections_Generic_List_BattleBuffData_BuffData__get_Count__, v24);
    sub_B0D8A4(&BattleActionEffect_SubChangeMaxHpBuff_TypeInfo, v25);
    sub_B0D8A4(&Method_BattleLogicFunction___c__DisplayClass67_0__functionSubState_b__0__, v26);
    sub_B0D8A4(&BattleLogicFunction___c__DisplayClass67_0_TypeInfo, v27);
    byte_4217027 = 1;
  }
  memset(&v96, 0, sizeof(v96));
  v28 = sub_B0D974(BattleLogicFunction___c__DisplayClass67_0_TypeInfo, *(_QWORD *)&targetId, funcEnt);
  BattleLogicFunction___c__DisplayClass67_0___ctor((BattleLogicFunction___c__DisplayClass67_0_o *)v28, 0LL);
  v90 = (BattleActionData_o *)sub_B0D974(BattleActionData_TypeInfo, v29, v30);
  BattleActionData___ctor(v90, 0LL);
  data = this->fields.data;
  if ( !data )
    goto LABEL_34;
  data = (BattleData_o *)BattleData__getServantData(data, targetId, 0LL);
  if ( !v28 )
    goto LABEL_34;
  *(_QWORD *)(v28 + 16) = data;
  v38 = (BattleServantData_o **)(v28 + 16);
  sub_B0D840((BattleServantConfConponent_o *)(v28 + 16), (System_Int32_array **)data, v32, v33, v34, v35, v36, v37);
  data = *(BattleData_o **)(v28 + 16);
  if ( !data )
    goto LABEL_34;
  data = (BattleData_o *)BattleServantData__getAuraIdList((BattleServantData_o *)data, 0LL);
  if ( !data )
    goto LABEL_34;
  if ( !*v38 )
    goto LABEL_34;
  rootfsm = (int32_t)data->fields.rootfsm;
  data = (BattleData_o *)BattleServantData__getMaxHp(*v38, 0LL);
  if ( !*v38 )
    goto LABEL_34;
  v40 = (int)data;
  data = (BattleData_o *)BattleServantData__getNowHp(*v38, 0LL);
  if ( !funcEnt )
    goto LABEL_34;
  v88 = v40;
  v89 = rootfsm;
  v87 = (int)data;
  targetIda = targetId;
  if ( !baseVals )
    goto LABEL_34;
  v41 = *v38;
  vals = funcEnt->fields.vals;
  Value = DataVals__GetValue(baseVals, 0LL);
  Value2 = DataVals__GetValue2(baseVals, 0LL);
  v45 = baseVals;
  v46 = Value2;
  dataVals = v45;
  data = (BattleData_o *)DataVals__isParam(v45, 89, 0LL);
  if ( !v41 )
    goto LABEL_34;
  v47 = BattleServantData__subBuffFromIndividualites(v41, vals, Value, v46, 1, (unsigned __int8)data & 1, 0LL);
  *subBuffInfo = v47;
  sub_B0D840((BattleServantConfConponent_o *)subBuffInfo, (System_Int32_array **)v47, v48, v49, v50, v51, v52, v53);
  if ( !*subBuffInfo )
    goto LABEL_34;
  RemovedAllBuffList_k__BackingField = (*subBuffInfo)->fields._RemovedAllBuffList_k__BackingField;
  if ( !RemovedAllBuffList_k__BackingField )
    goto LABEL_34;
  if ( RemovedAllBuffList_k__BackingField->fields._size < 1 )
    return BattleLogicFunction__getNoEffectObject(this, targetIda, index, dataVals, isCommandSideEffect, 0LL, 0LL, v54);
  data = (BattleData_o *)*v38;
  if ( !*v38 )
    goto LABEL_34;
  data = (BattleData_o *)BattleServantData__getAuraIdList((BattleServantData_o *)data, 0LL);
  if ( !data )
    goto LABEL_34;
  if ( !*v38 )
    goto LABEL_34;
  v57 = (int32_t)data->fields.rootfsm;
  data = (BattleData_o *)BattleLogicFunction__getFunctionObject(
                           (BattleLogicFunction_o *)data,
                           funcEnt,
                           (*v38)->fields.uniqueId,
                           index,
                           isCommandSideEffect,
                           0LL,
                           v56);
  if ( !data )
    goto LABEL_34;
  v60 = (BattleServantData_o *)data;
  BYTE4(data->fields.boostSkillInfo) = v89 > v57;
  v61 = (System_Func_WarBoardManager_WarBoardOnboardSkillTarget__WarBoardPieceData__o *)sub_B0D974(
                                                                                          System_Func_BattleBuffData_BuffData__BattleBuffData_BuffData__TypeInfo,
                                                                                          v58,
                                                                                          v59);
  System_Func_WarBoardManager_WarBoardOnboardSkillTarget__WarBoardPieceData____ctor(
    v61,
    (Il2CppObject *)v28,
    Method_BattleLogicFunction___c__DisplayClass67_0__functionSubState_b__0__,
    (const MethodInfo_261A104 *)Method_System_Func_BattleBuffData_BuffData__BattleBuffData_BuffData___ctor__);
  v62 = (System_Collections_Generic_IEnumerable_TSource__o *)System_Linq_Enumerable__Select_WarBoardManager_WarBoardOnboardSkillTarget__WarBoardPieceData_(
                                                               (System_Collections_Generic_IEnumerable_TSource__o *)RemovedAllBuffList_k__BackingField,
                                                               (System_Func_TSource__TResult__o *)v61,
                                                               (const MethodInfo_1B5200C *)Method_System_Linq_Enumerable_Select_BattleBuffData_BuffData__BattleBuffData_BuffData___);
  v63 = (System_Int32_array **)System_Linq_Enumerable__ToList_WarBoardManager_WarBoardOnboardSkillTarget_(
                                 v62,
                                 (const MethodInfo_1B59168 *)Method_System_Linq_Enumerable_ToList_BattleBuffData_BuffData___);
  *(_QWORD *)&v60->fields._frameType_k__BackingField = v63;
  sub_B0D840((BattleServantConfConponent_o *)&v60->fields._frameType_k__BackingField, v63, v64, v65, v66, v67, v68, v69);
  v70 = v90;
  if ( !v90 )
    goto LABEL_34;
  BattleActionData__setBuffData(v90, (BattleActionData_BuffData_o *)v60, dataVals, 0LL);
  System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo___GetEnumerator(
    &v95,
    (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)RemovedAllBuffList_k__BackingField,
    (const MethodInfo_2FC6564 *)Method_System_Collections_Generic_List_BattleBuffData_BuffData__GetEnumerator__);
  v96 = v95;
  while ( 1 )
  {
    v74 = System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___MoveNext(
            &v96,
            (const MethodInfo_2112550 *)Method_System_Collections_Generic_List_Enumerator_BattleBuffData_BuffData__MoveNext__);
    if ( !v74 )
      break;
    current = v96.fields.current;
    if ( !v96.fields.current )
      sub_B0D97C(v74);
    v72 = this->fields.data;
    if ( !v72 )
      sub_B0D97C(0LL);
    BattleData__RemoveDoNotSelectCommandCardBuff(v72, (int32_t)v96.fields.current[1].klass, *v38, 0LL);
    v73 = BattleBuffData__CheckInvalidSacrificeIndiv((BattleBuffData_BuffData_o *)current, 0LL);
    if ( v73 )
    {
      if ( !args )
        sub_B0D97C(v73);
      args->fields.updateField = 1;
    }
  }
  System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___Dispose(
    &v96,
    (const MethodInfo_211254C *)Method_System_Collections_Generic_List_Enumerator_BattleBuffData_BuffData__Dispose__);
  data = (BattleData_o *)*v38;
  if ( !*v38 )
    goto LABEL_34;
  if ( v88 != BattleServantData__getMaxHp((BattleServantData_o *)data, 0LL) )
  {
    BattleActionData__addReflectLogicResultServantId(v90, targetIda, 0LL);
    v77 = (BattleActionEffect_SubChangeMaxHpBuff_o *)sub_B0D974(
                                                       BattleActionEffect_SubChangeMaxHpBuff_TypeInfo,
                                                       v75,
                                                       v76);
    BattleActionEffect_SubChangeMaxHpBuff___ctor(v77, 0LL);
    data = (BattleData_o *)System_Collections_Generic_List_WarBoardUiData_SaveData___ToArray(
                             (System_Collections_Generic_List_WarBoardUiData_SaveData__o *)RemovedAllBuffList_k__BackingField,
                             (const MethodInfo_2FC7834 *)Method_System_Collections_Generic_List_BattleBuffData_BuffData__ToArray__);
    if ( *v38 )
    {
      v78 = data;
      data = (BattleData_o *)BattleServantData__getNowHp(*v38, 0LL);
      if ( v77 )
      {
        v79 = (System_Int32_array **)((__int64 (__fastcall *)(BattleActionEffect_SubChangeMaxHpBuff_o *, BattleData_o *, _QWORD, _QWORD, Il2CppMethodPointer))v77->klass->vtable._7_InitBuff.method)(
                                       v77,
                                       v78,
                                       targetIda,
                                       (unsigned int)((_DWORD)data - v87),
                                       v77->klass->vtable._8_PartialPreActionProc.methodPtr);
        *(_QWORD *)&v60->fields._commandCardLimitCount_k__BackingField.fields.currentCryptoKey = v79;
        sub_B0D840(
          (BattleServantConfConponent_o *)&v60->fields._commandCardLimitCount_k__BackingField,
          v79,
          v80,
          v81,
          v82,
          v83,
          v84,
          v85);
        return v70;
      }
    }
LABEL_34:
    sub_B0D97C(data);
  }
  return v70;
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
  BattleData_o *data; // x0
  BattleServantData_o *v12; // x24
  int32_t Param; // w23
  int32_t v14; // w25

  if ( (byte_4217037 & 1) == 0 )
  {
    sub_B0D8A4(&BattleActionData_TypeInfo, *(_QWORD *)&targetId);
    byte_4217037 = 1;
  }
  v10 = (BattleActionData_o *)sub_B0D974(BattleActionData_TypeInfo, *(_QWORD *)&targetId, funcEnt);
  BattleActionData___ctor(v10, 0LL);
  data = this->fields.data;
  if ( !data )
    goto LABEL_11;
  data = (BattleData_o *)BattleData__getServantData(data, targetId, 0LL);
  if ( !baeVals )
    goto LABEL_11;
  v12 = (BattleServantData_o *)data;
  Param = DataVals__GetParam(baeVals, 6, 0, 0LL);
  v14 = DataVals__GetParam(baeVals, 76, 0, 0LL);
  data = (BattleData_o *)DataVals__IsCancelTransform(baeVals, 0LL);
  if ( ((unsigned __int8)data & 1) != 0 )
  {
    if ( !v12 )
      goto LABEL_11;
    data = (BattleData_o *)BattleServantData__get_isTransformed(v12, 0LL);
    if ( ((unsigned __int8)data & 1) != 0 )
      Param = -1;
  }
  if ( !v10 )
LABEL_11:
    sub_B0D97C(data);
  BattleActionData__AddTransformServant(v10, Param, targetId, funcIndex, v14, 0LL);
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
  __int64 data; // x0
  BattleServantData_o *v31; // x26
  BattleServantData_o *ServantData; // x24
  __int64 v33; // x1
  __int64 v34; // x2
  __int64 v35; // x25
  int32_t Value; // w19
  int32_t Param; // w0
  int IsIgnoreShiftSafeDamage; // w26
  struct BattleSkillInfoData_o *skillInfo; // x8
  DataMasterBase_WarMaster__WarEntity__int__o *v40; // x28
  int v41; // w19
  int v43; // w10
  System_String_array **v44; // x2
  System_String_array **v45; // x3
  System_Boolean_array **v46; // x4
  System_Int32_array **v47; // x5
  System_Int32_array *v48; // x6
  System_Int32_array *v49; // x7
  int32_t v50; // w8
  System_Int32_array **v51; // x0
  System_String_array **v52; // x2
  System_String_array **v53; // x3
  System_Boolean_array **v54; // x4
  System_Int32_array **v55; // x5
  System_Int32_array *v56; // x6
  System_Int32_array *v57; // x7
  System_Int32_array **v58; // x0
  System_String_array **v59; // x2
  System_String_array **v60; // x3
  System_Boolean_array **v61; // x4
  System_Int32_array **v62; // x5
  System_Int32_array *v63; // x6
  System_Int32_array *v64; // x7
  __int64 v65; // x1
  __int64 v66; // x2
  System_Collections_Generic_List_int__o *v67; // x28
  System_Collections_Generic_IEnumerable_int__o *FixDamageRates; // x26
  void *monitor; // x8
  unsigned __int64 v70; // x19
  __int64 v71; // x23
  int size; // w8
  int32_t v73; // w26
  int32_t v74; // w20
  int32_t v75; // w19
  int32_t v76; // w0
  System_Int32_array **v77; // x0
  System_String_array **v78; // x2
  System_String_array **v79; // x3
  System_Boolean_array **v80; // x4
  System_Int32_array **v81; // x5
  System_Int32_array *v82; // x6
  System_Int32_array *v83; // x7
  System_Int32_array **v84; // x0
  System_String_array **v85; // x2
  System_String_array **v86; // x3
  System_Boolean_array **v87; // x4
  System_Int32_array **v88; // x5
  System_Int32_array *v89; // x6
  System_Int32_array *v90; // x7
  System_Int32_array **v91; // x0
  System_String_array **v92; // x2
  System_String_array **v93; // x3
  System_Boolean_array **v94; // x4
  System_Int32_array **v95; // x5
  System_Int32_array *v96; // x6
  System_Int32_array *v97; // x7
  System_Int32_array **v98; // x0
  System_String_array **v99; // x2
  System_String_array **v100; // x3
  System_Boolean_array **v101; // x4
  System_Int32_array **v102; // x5
  System_Int32_array *v103; // x6
  System_Int32_array *v104; // x7
  struct BattleData_o *v105; // x8
  int32_t v106; // w19
  bool IsOpponentPTUniqueID; // w0
  __int64 v109; // x0
  BattleServantData_o *opponent; // [xsp+18h] [xbp-98h]
  DataVals_o *v111; // [xsp+28h] [xbp-88h]
  bool v112; // [xsp+30h] [xbp-80h]
  int32_t v113; // [xsp+3Ch] [xbp-74h]
  int32_t v114; // [xsp+3Ch] [xbp-74h]
  int Random; // [xsp+40h] [xbp-70h]
  WarEntity_o *entity; // [xsp+48h] [xbp-68h] BYREF
  bool minimumDamageFlg; // [xsp+54h] [xbp-5Ch] BYREF
  float damage; // [xsp+58h] [xbp-58h] BYREF
  int32_t hitStat; // [xsp+5Ch] [xbp-54h] BYREF

  if ( (byte_421703E & 1) == 0 )
  {
    sub_B0D8A4(&BattleActionData_TypeInfo, *(_QWORD *)&playerId);
    sub_B0D8A4(&BattleActionData_DamageData_TypeInfo, v15);
    sub_B0D8A4(&Method_DataManager_GetMaster_SkillMaster___, v16);
    sub_B0D8A4(&DataManager_TypeInfo, v17);
    sub_B0D8A4(&Method_DataMasterBase_SkillMaster__SkillEntity__int__TryGetEntity__, v18);
    sub_B0D8A4(&int___TypeInfo, v19);
    sub_B0D8A4(&Method_System_Collections_Generic_List_int__Add__, v20);
    sub_B0D8A4(&Method_System_Collections_Generic_List_int__ToArray__, v21);
    sub_B0D8A4(&Method_System_Collections_Generic_List_int___ctor__, v22);
    sub_B0D8A4(&Method_System_Collections_Generic_List_int__get_Count__, v23);
    sub_B0D8A4(&Method_System_Collections_Generic_List_int__get_Item__, v24);
    sub_B0D8A4(&Method_System_Collections_Generic_List_int__set_Item__, v25);
    sub_B0D8A4(&System_Collections_Generic_List_int__TypeInfo, v26);
    sub_B0D8A4(&System_Math_TypeInfo, v27);
    sub_B0D8A4(&BattleBuffData_ShowBuffData___TypeInfo, v28);
    byte_421703E = 1;
  }
  hitStat = 0;
  damage = 0.0;
  minimumDamageFlg = 0;
  entity = 0LL;
  v29 = (BattleActionData_o *)sub_B0D974(BattleActionData_TypeInfo, *(_QWORD *)&playerId, *(_QWORD *)&targetId);
  BattleActionData___ctor(v29, 0LL);
  data = (__int64)this->fields.data;
  if ( !data )
    goto LABEL_59;
  v112 = safe;
  v113 = funcIndex;
  data = (__int64)BattleData__getServantData((BattleData_o *)data, playerId, 0LL);
  if ( !this->fields.data )
    goto LABEL_59;
  v31 = (BattleServantData_o *)data;
  ServantData = BattleData__getServantData(this->fields.data, targetId, 0LL);
  v35 = sub_B0D974(BattleActionData_DamageData_TypeInfo, v33, v34);
  BattleActionData_DamageData___ctor((BattleActionData_DamageData_o *)v35, 0LL);
  if ( !baseVals )
    goto LABEL_59;
  Value = DataVals__GetValue(baseVals, 0LL);
  Param = DataVals__GetParam(baseVals, 4, 0, 0LL);
  Random = BattleRandom__getRandom(Value, Param + 1, 0LL);
  hitStat = 0;
  data = DataVals__IsActNoDamageBuff(baseVals, 0LL);
  opponent = v31;
  if ( (data & 1) != 0 )
  {
    if ( !ServantData )
      goto LABEL_59;
    BattleServantData__CheckNoDamageBuff(
      ServantData,
      this->fields.data,
      v31,
      0LL,
      (BattleActionData_DamageData_o *)v35,
      mainAction,
      0LL);
    damage = (float)Random;
    minimumDamageFlg = 1;
    BattleServantData__CheckInvincibleAvoidanceBuff(
      ServantData,
      this->fields.data,
      v31,
      0LL,
      (BattleActionData_DamageData_o *)v35,
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
    data = (__int64)DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_1714548 *)Method_DataManager_GetMaster_SkillMaster___);
    skillInfo = mainAction->fields.skillInfo;
    if ( !skillInfo )
      goto LABEL_59;
    v40 = (DataMasterBase_WarMaster__WarEntity__int__o *)data;
    data = ((__int64 (__fastcall *)(struct BattleSkillInfoData_o *, Il2CppMethodPointer))skillInfo->klass->vtable._5_get_skillId.method)(
             skillInfo,
             skillInfo->klass->vtable._6_get_IndividualityArray.methodPtr);
    if ( !v40 )
      goto LABEL_59;
    if ( DataMasterBase_WarMaster__WarEntity__int___TryGetEntity(
           v40,
           &entity,
           data,
           (const MethodInfo_2669C30 *)Method_DataMasterBase_SkillMaster__SkillEntity__int__TryGetEntity__) )
    {
      data = (__int64)entity;
      if ( !entity )
        goto LABEL_59;
      IsIgnoreShiftSafeDamage |= SkillEntity__IsCheckUpdateShiftServant((SkillEntity_o *)entity, 0LL);
    }
  }
  data = (__int64)this->fields.data;
  if ( !data )
    goto LABEL_59;
  data = BattleData__IsDeadOkTurn((BattleData_o *)data, targetId, 0LL);
  if ( ((IsIgnoreShiftSafeDamage | (unsigned int)data) & 1) == 0 )
  {
    if ( !ServantData )
      goto LABEL_59;
    v41 = ((__int64 (__fastcall *)(BattleServantData_o *, Il2CppMethodPointer))ServantData->klass->vtable._9_get_hp.method)(
            ServantData,
            ServantData->klass->vtable._10_set_hp.methodPtr);
    data = ((__int64 (__fastcall *)(BattleServantData_o *, Il2CppMethodPointer))ServantData->klass->vtable._11_get_reducedhp.method)(
             ServantData,
             ServantData->klass->vtable._12_set_reducedhp.methodPtr);
    if ( v41 - (int)data >= Random || v41 - (int)data <= 0 )
      v43 = Random;
    else
      v43 = v41 - data - 1;
    Random = v43;
LABEL_35:
    if ( !v35 )
      goto LABEL_59;
    goto LABEL_36;
  }
  if ( !v112 )
    goto LABEL_35;
  if ( !ServantData )
    goto LABEL_59;
  data = ((__int64 (__fastcall *)(BattleServantData_o *, Il2CppMethodPointer))ServantData->klass->vtable._13_get_resultHp.method)(
           ServantData,
           ServantData->klass->vtable._14_set_resultHp.methodPtr);
  if ( (int)data - Random > 0 )
    goto LABEL_35;
  data = ((__int64 (__fastcall *)(BattleServantData_o *, Il2CppMethodPointer))ServantData->klass->vtable._13_get_resultHp.method)(
           ServantData,
           ServantData->klass->vtable._14_set_resultHp.methodPtr);
  Random = data - 1;
  if ( !v35 )
    goto LABEL_59;
LABEL_36:
  *(_DWORD *)(v35 + 28) = targetId;
  *(_DWORD *)(v35 + 16) = v113;
  data = (__int64)baseVals->fields.funcEnt;
  if ( !data )
    goto LABEL_59;
  data = (__int64)FunctionEntity__getEffectList((FunctionEntity_o *)data, 0LL);
  if ( !data )
    goto LABEL_59;
  if ( *(_QWORD *)(data + 24) )
  {
    *(_QWORD *)(v35 + 136) = data;
    sub_B0D840((BattleServantConfConponent_o *)(v35 + 136), (System_Int32_array **)data, v44, v45, v46, v47, v48, v49);
  }
  *(_WORD *)(v35 + 32) = 0;
  *(_BYTE *)(v35 + 34) = 0;
  v50 = hitStat;
  v114 = playerId;
  *(_BYTE *)(v35 + 40) = 0;
  *(_DWORD *)(v35 + 36) = v50;
  v51 = (System_Int32_array **)sub_B0D8BC(BattleBuffData_ShowBuffData___TypeInfo, 0LL);
  *(_QWORD *)(v35 + 64) = v51;
  sub_B0D840((BattleServantConfConponent_o *)(v35 + 64), v51, v52, v53, v54, v55, v56, v57);
  v58 = (System_Int32_array **)sub_B0D8BC(BattleBuffData_ShowBuffData___TypeInfo, 0LL);
  *(_QWORD *)(v35 + 72) = v58;
  sub_B0D840((BattleServantConfConponent_o *)(v35 + 72), v58, v59, v60, v61, v62, v63, v64);
  v67 = (System_Collections_Generic_List_int__o *)sub_B0D974(System_Collections_Generic_List_int__TypeInfo, v65, v66);
  System_Collections_Generic_List_int____ctor(
    v67,
    (const MethodInfo_2FAF1A4 *)Method_System_Collections_Generic_List_int___ctor__);
  v111 = baseVals;
  FixDamageRates = (System_Collections_Generic_IEnumerable_int__o *)DataVals__GetFixDamageRates(baseVals, 0LL);
  data = System_Linq_Enumerable__Sum(FixDamageRates, 0LL);
  if ( !FixDamageRates )
    goto LABEL_59;
  monitor = FixDamageRates[1].monitor;
  if ( (int)monitor >= 1 )
  {
    v70 = 0LL;
    v71 = (int)data;
    do
    {
      if ( v70 >= (unsigned int)monitor )
      {
        v109 = sub_B0D9A8(data);
        sub_B0D948(v109, 0LL);
      }
      if ( !v67 )
        goto LABEL_59;
      System_Collections_Generic_List_int___Add(
        v67,
        *((int *)&FixDamageRates[2].klass + v70) * (__int64)Random / v71,
        (const MethodInfo_2FAFF00 *)Method_System_Collections_Generic_List_int__Add__);
      LODWORD(monitor) = FixDamageRates[1].monitor;
    }
    while ( (__int64)++v70 < (int)monitor );
  }
  if ( !v67 )
    goto LABEL_59;
  size = v67->fields._size;
  v73 = size - 1;
  if ( size >= 1 )
  {
    v74 = v67->fields._items->m_Items[v73 + 1];
    v75 = System_Linq_Enumerable__Sum((System_Collections_Generic_IEnumerable_int__o *)v67, 0LL);
    if ( (BYTE3(System_Math_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !System_Math_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(System_Math_TypeInfo);
    v76 = System_Math__Max_44559528(0, Random - v75, 0LL);
    System_Collections_Generic_List_int___set_Item(
      v67,
      v73,
      v76 + v74,
      (const MethodInfo_2FAFBC0 *)Method_System_Collections_Generic_List_int__set_Item__);
  }
  v77 = (System_Int32_array **)System_Collections_Generic_List_int___ToArray(
                                 v67,
                                 (const MethodInfo_2FB200C *)Method_System_Collections_Generic_List_int__ToArray__);
  *(_QWORD *)(v35 + 96) = v77;
  sub_B0D840((BattleServantConfConponent_o *)(v35 + 96), v77, v78, v79, v80, v81, v82, v83);
  v84 = (System_Int32_array **)sub_B0D8BC(int___TypeInfo, 0LL);
  *(_QWORD *)(v35 + 104) = v84;
  sub_B0D840((BattleServantConfConponent_o *)(v35 + 104), v84, v85, v86, v87, v88, v89, v90);
  v91 = (System_Int32_array **)sub_B0D8BC(int___TypeInfo, 0LL);
  *(_QWORD *)(v35 + 112) = v91;
  sub_B0D840((BattleServantConfConponent_o *)(v35 + 112), v91, v92, v93, v94, v95, v96, v97);
  v98 = (System_Int32_array **)sub_B0D8BC(int___TypeInfo, 0LL);
  *(_QWORD *)(v35 + 120) = v98;
  sub_B0D840((BattleServantConfConponent_o *)(v35 + 120), v98, v99, v100, v101, v102, v103, v104);
  if ( !ServantData )
    goto LABEL_59;
  BattleServantData__provisionalDamage(ServantData, Random, 0LL);
  BattleServantData__ResultDamage(ServantData, Random, opponent, 0LL, 0, 0LL);
  data = BattleServantData__isLogicResultAlive(ServantData, 0LL);
  if ( (data & 1) == 0 )
  {
    v105 = this->fields.data;
    if ( !v105 )
      goto LABEL_59;
    ServantData->fields.deadTurn = v105->fields.typeTurn;
  }
  BattleActionData_DamageData__addAttackSideEffectAction((BattleActionData_DamageData_o *)v35, 80, 0LL);
  if ( !v29
    || (BattleActionData__setDamageData(v29, (BattleActionData_DamageData_o *)v35, v111, 0, 0, 0LL),
        (data = (__int64)this->fields.data) == 0) )
  {
LABEL_59:
    sub_B0D97C(data);
  }
  v106 = *(_DWORD *)(data + 188);
  IsOpponentPTUniqueID = BattleData__IsOpponentPTUniqueID((BattleData_o *)data, targetId, v114, 0LL);
  BattleServantData__setActionHistory(ServantData, v114, 7, v106, IsOpponentPTUniqueID, 0LL);
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
  __int64 data; // x0
  int Random; // w27
  BattleServantData_o *v25; // x24
  int v26; // w19
  int32_t Param; // w0
  _BOOL8 IsDeadOkTurn; // x0
  const MethodInfo *v29; // x6
  __int64 v30; // x23
  BattleServantData_o *v31; // x25
  __int64 v32; // x1
  __int64 v33; // x2
  BattleActionData_DamageData_o *v34; // x19
  System_String_array **v35; // x2
  System_String_array **v36; // x3
  System_Boolean_array **v37; // x4
  System_Int32_array **v38; // x5
  System_Int32_array *v39; // x6
  System_Int32_array *v40; // x7
  struct BattleBuffData_o *buffData; // x8
  BattleServantConfConponent_o *v42; // x0
  System_Int32_array **v43; // x1
  bool v44; // w28
  UnityEngine_Object_o *logic; // x19
  int32_t Wave; // w19
  bool IsOpponentPTUniqueID; // w0
  __int64 v48; // x1
  __int64 v49; // x2
  BattleActionEffect_LossHPFunc_o *v50; // x19
  System_String_array **v51; // x2
  System_String_array **v52; // x3
  System_Boolean_array **v53; // x4
  System_Int32_array **v54; // x5
  System_Int32_array *v55; // x6
  System_Int32_array *v56; // x7
  BattleActionData_BuffData_o *v57; // x0
  struct BattleBuffData_o *v58; // x8
  int32_t v59; // w0
  int32_t before; // [xsp+14h] [xbp-6Ch]
  bool v62; // [xsp+18h] [xbp-68h]
  bool v63; // [xsp+1Ch] [xbp-64h]
  int32_t bId; // [xsp+24h] [xbp-5Ch]
  bool minimumDamageFlg; // [xsp+28h] [xbp-58h] BYREF
  float damage; // [xsp+2Ch] [xbp-54h] BYREF

  if ( (byte_421702F & 1) == 0 )
  {
    sub_B0D8A4(&BattleActionData_TypeInfo, *(_QWORD *)&playerId);
    sub_B0D8A4(&BattleActionData_DamageData_TypeInfo, v19);
    sub_B0D8A4(&BattleActionEffect_LossHPFunc_TypeInfo, v20);
    sub_B0D8A4(&UnityEngine_Object_TypeInfo, v21);
    byte_421702F = 1;
  }
  damage = 0.0;
  minimumDamageFlg = 0;
  v22 = (BattleActionData_o *)sub_B0D974(BattleActionData_TypeInfo, *(_QWORD *)&playerId, *(_QWORD *)&targetId);
  BattleActionData___ctor(v22, 0LL);
  data = (__int64)this->fields.data;
  if ( !data )
    goto LABEL_51;
  v63 = safe;
  data = (__int64)BattleData__getServantData((BattleData_o *)data, targetId, 0LL);
  if ( !data )
    goto LABEL_51;
  Random = overwriteLossHp;
  v25 = (BattleServantData_o *)data;
  data = (*(__int64 (__fastcall **)(__int64, _QWORD))(*(_QWORD *)data + 520LL))(
           data,
           *(_QWORD *)(*(_QWORD *)data + 528LL));
  v26 = data;
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
  if ( v26 < 1 )
    return 0LL;
  data = (__int64)this->fields.data;
  if ( !data )
    goto LABEL_51;
  IsDeadOkTurn = BattleData__IsDeadOkTurn((BattleData_o *)data, targetId, 0LL);
  v62 = IsDeadOkTurn;
  data = (__int64)BattleLogicFunction__getFunctionObject(
                    (BattleLogicFunction_o *)IsDeadOkTurn,
                    funcEnt,
                    v25->fields.uniqueId,
                    funcIndex,
                    isCommandSideEffect,
                    0LL,
                    v29);
  if ( !this->fields.data )
    goto LABEL_51;
  v30 = data;
  data = (__int64)BattleData__getServantData(this->fields.data, playerId, 0LL);
  if ( !baseVals )
    goto LABEL_51;
  v31 = (BattleServantData_o *)data;
  before = v26;
  bId = playerId;
  if ( DataVals__IsActNoDamageBuff(baseVals, 0LL) )
  {
    v34 = (BattleActionData_DamageData_o *)sub_B0D974(BattleActionData_DamageData_TypeInfo, v32, v33);
    BattleActionData_DamageData___ctor(v34, 0LL);
    BattleServantData__CheckNoDamageBuff(v25, this->fields.data, v31, 0LL, v34, mainAction, 0LL);
    damage = (float)Random;
    minimumDamageFlg = 1;
    if ( !v34 )
      goto LABEL_51;
    v34->fields.hitStates = 0;
    BattleServantData__CheckInvincibleAvoidanceBuff(
      v25,
      this->fields.data,
      v31,
      0LL,
      v34,
      &damage,
      &minimumDamageFlg,
      &v34->fields.hitStates,
      mainAction,
      0LL);
    buffData = v25->fields.buffData;
    if ( damage <= 0.0 )
      Random = 0;
    if ( !buffData )
      goto LABEL_51;
    if ( buffData->fields.isNoDamage )
    {
      v34->fields.noDamage = 1;
      if ( !v30 )
        goto LABEL_51;
      *(_QWORD *)(v30 + 168) = v34;
      v42 = (BattleServantConfConponent_o *)(v30 + 168);
      v43 = (System_Int32_array **)v34;
    }
    else
    {
      if ( !v30 )
        goto LABEL_51;
      *(_QWORD *)(v30 + 168) = 0LL;
      v42 = (BattleServantConfConponent_o *)(v30 + 168);
      v43 = 0LL;
    }
    sub_B0D840(v42, v43, v35, v36, v37, v38, v39, v40);
  }
  v44 = !v62 || v63;
  BattleServantData__ResultDamage(v25, Random, v31, 0LL, v44, 0LL);
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
        BattleServantData__setActionHistory(v25, bId, 3, Wave, IsOpponentPTUniqueID, 0LL),
        !v30)
    || (*(_DWORD *)(v30 + 28) = 2,
        v50 = (BattleActionEffect_LossHPFunc_o *)sub_B0D974(BattleActionEffect_LossHPFunc_TypeInfo, v48, v49),
        BattleActionEffect_LossHPFunc___ctor(v50, targetId, Random, v44, 0LL),
        *(_QWORD *)(v30 + 128) = v50,
        sub_B0D840(
          (BattleServantConfConponent_o *)(v30 + 128),
          (System_Int32_array **)v50,
          v51,
          v52,
          v53,
          v54,
          v55,
          v56),
        !v22) )
  {
LABEL_51:
    sub_B0D97C(data);
  }
  BattleActionData__setBuffData(v22, (BattleActionData_BuffData_o *)v30, baseVals, 0LL);
  data = DataVals__isLossHpChangeDamage(baseVals, 0LL);
  if ( (data & 1) != 0 )
  {
    if ( !DataVals__IsActNoDamageBuff(baseVals, 0LL) )
    {
      data = (__int64)v25->fields.buffData;
      if ( !data )
        goto LABEL_51;
      goto LABEL_45;
    }
    data = DataVals__IsActNoDamageBuff(baseVals, 0LL);
    if ( (data & 1) != 0 )
    {
      data = (__int64)v25->fields.buffData;
      if ( !data )
        goto LABEL_51;
      if ( !*(_BYTE *)(data + 152) )
      {
LABEL_45:
        v57 = BattleBuffData__UseFieldProgressingDoNotAct((BattleBuffData_o *)data, v25, funcIndex, 0LL);
        BattleActionData__setBuffData(v22, v57, baseVals, 0LL);
      }
    }
  }
  v58 = v25->fields.buffData;
  if ( !v58 )
    goto LABEL_51;
  v58->fields.isNoDamage = 0;
  data = (__int64)this->fields.data;
  if ( !data )
    goto LABEL_51;
  if ( ((BattleData__isEnemyID((BattleData_o *)data, bId, 0LL) ^ v25->fields.isEnemy) & 1) != 0 )
  {
    v59 = ((__int64 (__fastcall *)(BattleServantData_o *, Il2CppMethodPointer))v25->klass->vtable._13_get_resultHp.method)(
            v25,
            v25->klass->vtable._14_set_resultHp.methodPtr);
    BattleServantData__procAccumulationDamage(v25, before, v59, 0LL);
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
  System_Int32_array **MasterData_WarQuestSelectionMaster; // x0
  System_String_array **v9; // x2
  System_String_array **v10; // x3
  System_Boolean_array **v11; // x4
  System_Int32_array **v12; // x5
  System_Int32_array *v13; // x6
  System_Int32_array *v14; // x7

  if ( (byte_421700F & 1) == 0 )
  {
    sub_B0D8A4(&Method_DataManager_GetMasterData_FunctionMaster___, method);
    sub_B0D8A4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v3);
    byte_421700F = 1;
  }
  master = this->fields.master;
  p_master = (BattleServantConfConponent_o *)&this->fields.master;
  result = master;
  if ( !master )
  {
    Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A71064 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !Instance )
      sub_B0D97C(0LL);
    MasterData_WarQuestSelectionMaster = (System_Int32_array **)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                                  (DataManager_o *)Instance,
                                                                  (const MethodInfo_17145A8 *)Method_DataManager_GetMasterData_FunctionMaster___);
    p_master->klass = (BattleServantConfConponent_c *)MasterData_WarQuestSelectionMaster;
    sub_B0D840(p_master, MasterData_WarQuestSelectionMaster, v9, v10, v11, v12, v13, v14);
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
  System_Int32_array **MasterData_WarQuestSelectionMaster; // x0
  System_String_array **v11; // x2
  System_String_array **v12; // x3
  System_Boolean_array **v13; // x4
  System_Int32_array **v14; // x5
  System_Int32_array *v15; // x6
  System_Int32_array *v16; // x7

  if ( (byte_421700E & 1) == 0 )
  {
    sub_B0D8A4(&Method_DataManager_GetMasterData_FunctionMaster___, *(_QWORD *)&id);
    sub_B0D8A4(&Method_DataMasterBase_FunctionMaster__FunctionEntity__int__GetEntity__, v5);
    sub_B0D8A4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v6);
    byte_421700E = 1;
  }
  master = this->fields.master;
  p_master = (BattleServantConfConponent_o *)&this->fields.master;
  Instance = (WebViewManager_o *)master;
  if ( !master )
  {
    Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A71064 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !Instance
      || (MasterData_WarQuestSelectionMaster = (System_Int32_array **)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                                        (DataManager_o *)Instance,
                                                                        (const MethodInfo_17145A8 *)Method_DataManager_GetMasterData_FunctionMaster___),
          p_master->klass = (BattleServantConfConponent_c *)MasterData_WarQuestSelectionMaster,
          sub_B0D840(p_master, MasterData_WarQuestSelectionMaster, v11, v12, v13, v14, v15, v16),
          (Instance = (WebViewManager_o *)p_master->klass) == 0LL) )
    {
      sub_B0D97C(Instance);
    }
  }
  return (FunctionEntity_o *)DataMasterBase_WarMaster__WarEntity__int___GetEntity(
                               (DataMasterBase_WarMaster__WarEntity__int__o *)Instance,
                               id,
                               (const MethodInfo_2669BD4 *)Method_DataMasterBase_FunctionMaster__FunctionEntity__int__GetEntity__);
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
  if ( (byte_4217038 & 1) == 0 )
  {
    this = (BattleLogicFunction_o *)sub_B0D8A4(&BattleActionData_BuffData_TypeInfo, funcEnt);
    byte_4217038 = 1;
  }
  if ( !v8
    && (v8 = (BattleActionData_BuffData_o *)sub_B0D974(
                                              BattleActionData_BuffData_TypeInfo,
                                              funcEnt,
                                              *(_QWORD *)&uniqueId),
        BattleActionData_BuffData___ctor(v8, 0LL),
        !v8)
    || (v8->fields.targetId = uniqueId, v8->fields.functionIndex = funcIndex, !funcEnt) )
  {
    sub_B0D97C(this);
  }
  popupText = (System_Int32_array **)funcEnt->fields.popupText;
  v8->fields.popLabel = (struct System_String_o *)popupText;
  sub_B0D840(
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
  sub_B0D840((BattleServantConfConponent_o *)&v8->fields.effectList, EffectList, v15, v16, v17, v18, v19, v20);
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

  if ( (byte_4217013 & 1) == 0 )
  {
    sub_B0D8A4(
      &Method_System_Collections_Generic_Dictionary_FuncList_TYPE__BattleLogicFunctionProcess_BaseFunctionTypeProcess__ContainsKey__,
      *(_QWORD *)&functType);
    sub_B0D8A4(
      &Method_System_Collections_Generic_Dictionary_FuncList_TYPE__BattleLogicFunctionProcess_BaseFunctionTypeProcess__get_Item__,
      v5);
    byte_4217013 = 1;
  }
  dicFuncProcess = (System_Collections_Generic_Dictionary_Voice_BATTLE__string__o *)this->fields.dicFuncProcess;
  if ( !dicFuncProcess
    || (dicFuncProcess = (System_Collections_Generic_Dictionary_Voice_BATTLE__string__o *)System_Collections_Generic_Dictionary_Voice_BATTLE__string___ContainsKey(
                                                                                            dicFuncProcess,
                                                                                            functType,
                                                                                            (const MethodInfo_2EA6F34 *)Method_System_Collections_Generic_Dictionary_FuncList_TYPE__BattleLogicFunctionProcess_BaseFunctionTypeProcess__ContainsKey__),
        !this->fields.dicFuncProcess)
    || (((unsigned __int8)dicFuncProcess & 1) == 0 ? (v7 = 0) : (v7 = functType),
        (dicFuncProcess = (System_Collections_Generic_Dictionary_Voice_BATTLE__string__o *)System_Collections_Generic_Dictionary_Voice_BATTLE__string___get_Item(
                                                                                             (System_Collections_Generic_Dictionary_Voice_BATTLE__string__o *)this->fields.dicFuncProcess,
                                                                                             v7,
                                                                                             (const MethodInfo_2EA6BFC *)Method_System_Collections_Generic_Dictionary_FuncList_TYPE__BattleLogicFunctionProcess_BaseFunctionTypeProcess__get_Item__)) == 0LL) )
  {
    sub_B0D97C(dicFuncProcess);
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

  if ( (byte_4217025 & 1) == 0 )
  {
    sub_B0D8A4(&BattleActionData_TypeInfo, *(_QWORD *)&targetId);
    byte_4217025 = 1;
  }
  v8 = (BattleActionData_o *)sub_B0D974(BattleActionData_TypeInfo, *(_QWORD *)&targetId, *(_QWORD *)&funcIndex);
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
    sub_B0D97C(GrayActionBuffData);
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
    sub_B0D97C(this);
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
  System_String_array **v23; // x2
  System_String_array **v24; // x3
  System_Boolean_array **v25; // x4
  System_Int32_array **v26; // x5
  System_Int32_array *v27; // x6
  System_Int32_array *v28; // x7
  __int64 v29; // x0
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
  if ( (byte_4217021 & 1) == 0 )
  {
    sub_B0D8A4(&BattleActionData_TypeInfo, *(_QWORD *)&targetId);
    sub_B0D8A4(&BattleActionData_BuffData_TypeInfo, v18);
    sub_B0D8A4(&int___TypeInfo, v19);
    sub_B0D8A4(&StringLiteral_1/*""*/, v20);
    byte_4217021 = 1;
  }
  v21 = (BattleActionData_o *)sub_B0D974(BattleActionData_TypeInfo, *(_QWORD *)&targetId, *(_QWORD *)&funcIndex);
  BattleActionData___ctor(v21, 0LL);
  if ( !defBuffData )
  {
    v10 = (BattleActionData_BuffData_o *)sub_B0D974(BattleActionData_BuffData_TypeInfo, v22, v23);
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
  sub_B0D840(p_popLabel, v30, v23, v24, v25, v26, v27, v28);
  v32 = (System_Int32_array **)sub_B0D8BC(int___TypeInfo, 0LL);
  v10->fields.effectList = (struct System_Int32_array *)v32;
  sub_B0D840((BattleServantConfConponent_o *)&v10->fields.effectList, v32, v33, v34, v35, v36, v37, v38);
  if ( !v21
    || (BattleActionData__setBuffData(v21, v10, 0LL, 0LL),
        v10->fields.IsNoEffect = isNoEffect,
        v10->fields.isCommandAfter = isCommandSideEffect,
        !dataVals) )
  {
LABEL_11:
    sub_B0D97C(v29);
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
  if ( (byte_4217022 & 1) != 0 )
  {
    if ( uniqueText )
      goto LABEL_3;
  }
  else
  {
    sub_B0D8A4(&LocalizationManager_TypeInfo, *(_QWORD *)&targetId);
    this = (BattleLogicFunction_o *)sub_B0D8A4(&StringLiteral_2467/*"BATTLE_MISS_FUNCTION"*/, v16);
    byte_4217022 = 1;
    if ( v9 )
    {
LABEL_3:
      if ( dataVals )
        goto LABEL_4;
LABEL_10:
      sub_B0D97C(this);
    }
  }
  if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !LocalizationManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  }
  this = (BattleLogicFunction_o *)LocalizationManager__Get((System_String_o *)StringLiteral_2467/*"BATTLE_MISS_FUNCTION"*/, 0LL);
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
  if ( (byte_4217023 & 1) != 0 )
  {
    if ( uniqueText )
      goto LABEL_3;
  }
  else
  {
    sub_B0D8A4(&LocalizationManager_TypeInfo, *(_QWORD *)&targetId);
    this = (BattleLogicFunction_o *)sub_B0D8A4(&StringLiteral_2478/*"BATTLE_NO_EFFECT_FUNCTION"*/, v16);
    byte_4217023 = 1;
    if ( v9 )
    {
LABEL_3:
      if ( dataVals )
        goto LABEL_4;
LABEL_10:
      sub_B0D97C(this);
    }
  }
  if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !LocalizationManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  }
  this = (BattleLogicFunction_o *)LocalizationManager__Get((System_String_o *)StringLiteral_2478/*"BATTLE_NO_EFFECT_FUNCTION"*/, 0LL);
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
  __int64 v13; // x1
  Target_BattleTargetArgs_o *args; // x23
  __int64 v15; // x0
  BattleData_o *data; // x22
  int32_t actorId; // w24
  int32_t targetId; // w25
  int32_t PTTargetId; // w0
  System_Collections_Generic_IEnumerable_TSource__o *TargetIds_19028192; // x20
  __int64 v21; // x1
  __int64 v22; // x2
  System_Func_int__bool__o *v23; // x21
  System_Collections_Generic_IEnumerable_TSource__o *v24; // x0

  if ( (byte_421701B & 1) == 0 )
  {
    sub_B0D8A4(&Method_BattleLogicFunction__getTargetids_b__53_0__, mainAction);
    sub_B0D8A4(&Target_BattleTargetArgs_TypeInfo, v9);
    sub_B0D8A4(&Method_System_Linq_Enumerable_ToArray_int___, v10);
    sub_B0D8A4(&Method_System_Linq_Enumerable_Where_int___, v11);
    sub_B0D8A4(&Method_System_Func_int__bool___ctor__, v12);
    sub_B0D8A4(&System_Func_int__bool__TypeInfo, v13);
    byte_421701B = 1;
  }
  args = (Target_BattleTargetArgs_o *)sub_B0D974(Target_BattleTargetArgs_TypeInfo, mainAction, *(_QWORD *)&targetType);
  Target_BattleTargetArgs___ctor(args, dataVals, 0LL);
  if ( !mainAction )
    sub_B0D97C(v15);
  data = this->fields.data;
  actorId = mainAction->fields.actorId;
  targetId = mainAction->fields.targetId;
  PTTargetId = BattleActionData__getPTTargetId(mainAction, 0LL);
  TargetIds_19028192 = (System_Collections_Generic_IEnumerable_TSource__o *)Target__getTargetIds_19028192(
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
  v23 = (System_Func_int__bool__o *)sub_B0D974(System_Func_int__bool__TypeInfo, v21, v22);
  System_Func_int__bool____ctor(
    v23,
    (Il2CppObject *)this,
    Method_BattleLogicFunction__getTargetids_b__53_0__,
    (const MethodInfo_26136E4 *)Method_System_Func_int__bool___ctor__);
  v24 = System_Linq_Enumerable__Where_int_(
          TargetIds_19028192,
          (System_Func_TSource__bool__o *)v23,
          (const MethodInfo_1B5A41C *)Method_System_Linq_Enumerable_Where_int___);
  return System_Linq_Enumerable__ToArray_int_(
           v24,
           (const MethodInfo_1B560F0 *)Method_System_Linq_Enumerable_ToArray_int___);
}


BattleFieldEnvironmentData_o *__fastcall BattleLogicFunction__get_FieldEnvData(
        BattleLogicFunction_o *this,
        const MethodInfo *method)
{
  struct BattleData_o *data; // x8

  data = this->fields.data;
  if ( !data )
    sub_B0D97C(this);
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
    sub_B0D97C(this);
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
    sub_B0D97C(this);
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
    sub_B0D97C(this);
  return !DataVals__IsEvenIfWinDie(baseVals, 0LL) && BattleLogicFunction__IsSafeWin(this, targetId, v6);
}


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
    sub_B0D97C(this);
  v4 = *(_QWORD *)&funclist->max_length;
  if ( (int)v4 < 1 )
    return 0;
  v6 = this;
  v7 = 0LL;
  while ( 1 )
  {
    if ( v7 >= (unsigned int)v4 )
    {
      v9 = sub_B0D9A8(this);
      sub_B0D948(v9, 0LL);
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
  __int64 v78; // x1
  __int64 v79; // x2
  __int64 v80; // x1
  __int64 v81; // x2
  UnityEngine_Object_o *logic; // x24
  BattleLogicFunction_ProcListInArgs_o *v83; // x24
  int32_t *p_actSetId; // x22
  __int64 v85; // x1
  __int64 v86; // x2
  WeightRate_int__o *v87; // x23
  signed int max_length; // w8
  unsigned int v89; // w24
  Il2CppClass **v90; // x8
  DataVals_o *v91; // x25
  int32_t ActSetWeight; // w26
  BattleServantData_o *v93; // x24
  int32_t Random; // w0
  System_String_o *v95; // x0
  __int64 v96; // x1
  __int64 v97; // x2
  WellFired_USFGOPlayBgmEventConditional_CondBGM_array *funcUnitArray_k__BackingField; // x21
  BattleLogicFunction___c_c *v99; // x0
  bool v100; // w23
  struct BattleLogicFunction___c_StaticFields *static_fields; // x8
  System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *_9__40_0; // x22
  Il2CppObject *v103; // x23
  struct BattleLogicFunction___c_StaticFields *v104; // x0
  System_String_array **v105; // x2
  System_String_array **v106; // x3
  System_Boolean_array **v107; // x4
  System_Int32_array **v108; // x5
  System_Int32_array *v109; // x6
  System_Int32_array *v110; // x7
  __int64 v111; // x1
  __int64 v112; // x2
  BattleLogicFunction___c_c *v113; // x0
  System_Collections_Generic_IEnumerable_TSource__o *v114; // x21
  struct BattleLogicFunction___c_StaticFields *v115; // x8
  System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *_9__40_1; // x22
  Il2CppObject *v117; // x23
  struct BattleLogicFunction___c_StaticFields *v118; // x0
  System_String_array **v119; // x2
  System_String_array **v120; // x3
  System_Boolean_array **v121; // x4
  System_Int32_array **v122; // x5
  System_Int32_array *v123; // x6
  System_Int32_array *v124; // x7
  __int64 v125; // x1
  __int64 v126; // x2
  BattleData_o *v127; // x21
  SkillValueUpApplierPlayerMaster_o *v128; // x22
  SkillValueUpApplierPlayerMaster_o *v129; // x10
  struct BattleLogicFunctionProcess_FunctionUnitCheck_array *v130; // x22
  int v131; // w8
  BattleLogicFunction_FuncSideEffectFunctionArgument_o *v132; // x25
  int v133; // w26
  BattleCommandData_o *v134; // x22
  UnityEngine_Object_o *v135; // x23
  struct BattleLogic_o *v136; // x8
  unsigned __int64 v137; // x23
  BattleLogicFunctionProcess_FunctionUnitCheck_o *v138; // x21
  DataVals_o *dataVals_k__BackingField; // x26
  const MethodInfo *v140; // x4
  __int64 v141; // x1
  __int64 v142; // x2
  BattleLogicFunction___c_c *v143; // x0
  System_Collections_Generic_IEnumerable_TSource__o *funcTargetArray_k__BackingField; // x21
  struct BattleLogicFunction___c_StaticFields *v145; // x8
  System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *_9__40_2; // x27
  Il2CppObject *v147; // x28
  struct BattleLogicFunction___c_StaticFields *v148; // x0
  System_String_array **v149; // x2
  System_String_array **v150; // x3
  System_Boolean_array **v151; // x4
  System_Int32_array **v152; // x5
  System_Int32_array *v153; // x6
  System_Int32_array *v154; // x7
  __int64 v155; // x1
  __int64 v156; // x2
  System_Collections_Generic_IEnumerable_TSource__o *v157; // x21
  BattleLogicFunction___c_c *v158; // x8
  struct BattleLogicFunction___c_StaticFields *v159; // x9
  System_Func_BattleLogicBuff_ReduceHpProcess_BuffInfo__int__o *_9__40_3; // x27
  Il2CppObject *v161; // x28
  struct BattleLogicFunction___c_StaticFields *v162; // x0
  System_String_array **v163; // x2
  System_String_array **v164; // x3
  System_Boolean_array **v165; // x4
  System_Int32_array **v166; // x5
  System_Int32_array *v167; // x6
  System_Int32_array *v168; // x7
  System_Collections_Generic_IEnumerable_TSource__o *v169; // x0
  System_Int32_array *v170; // x21
  bool v171; // w27
  __int64 v172; // x1
  __int64 v173; // x2
  BattleLogicFunction_PreAttackSideEffectMakeArgument_o *v174; // x28
  BattleLogicFunction_SideEffectMakeArgument_o *v175; // x0
  const MethodInfo *v176; // x5
  struct BattleLogicFunctionProcess_FunctionTargetCheck_array *v177; // x22
  int v178; // w8
  int i; // w24
  BattleData_o *v180; // x21
  int32_t Value; // w20
  BattleLogicFunction_o *v182; // x0
  const MethodInfo *v183; // x6
  BattleData_o *v184; // x21
  int32_t *v185; // x20
  BattleActionData_o *v186; // x0
  const MethodInfo *v187; // x7
  bool isUnaffected; // w23
  int32_t CorrectedValueFuncGainNp; // w21
  const MethodInfo *v190; // x7
  BattleLogicFunction_o *v191; // x0
  int32_t v192; // w23
  const MethodInfo *v193; // x6
  BattleLogicFunction_o *v194; // x21
  BattleActionData_o *v195; // x0
  BattleActionData_BuffData_o *v196; // x1
  DataVals_o *v197; // x2
  int32_t v198; // w0
  BattleLogicFunction_o *v199; // x0
  int32_t v200; // w20
  const MethodInfo *v201; // x6
  BattleLogicFunction_o *v202; // x21
  int32_t v203; // w21
  System_Int32_array *TargetList; // x23
  int32_t v205; // w0
  _BOOL8 v206; // x0
  const MethodInfo *v207; // x6
  int32_t v208; // w1
  BattleLogicFunction_o *v209; // x0
  int32_t v210; // w2
  bool v211; // w4
  DataVals_o *v212; // x3
  int32_t v213; // w21
  System_Int32_array *v214; // x23
  int32_t v215; // w0
  int32_t v216; // w2
  BattleActionData_BuffData_o *FunctionObject; // x1
  BattleActionData_o *v218; // x0
  DataVals_o *v219; // x2
  BattleActionData_o *v220; // x0
  const MethodInfo *v221; // x3
  int32_t v222; // w21
  bool v223; // w6
  int32_t v224; // w1
  BattleLogicFunction_o *v225; // x0
  FunctionEntity_o *v226; // x3
  int32_t v227; // w5
  bool v228; // w6
  int32_t v229; // w2
  DataVals_o *v230; // x4
  bool v231; // w7
  const MethodInfo *v232; // x7
  const MethodInfo *v233; // x7
  const MethodInfo *v234; // x6
  int32_t v235; // w1
  FunctionEntity_o *v236; // x2
  DataVals_o *v237; // x3
  int32_t v238; // w4
  const MethodInfo *v239; // x5
  BattleLogicFunction_o *v240; // x20
  BattleActionData_o *v241; // x0
  FunctionEntity_o *v242; // x1
  FunctionEntity_o *v243; // x3
  MethodInfo *v244; // x4
  const MethodInfo *v245; // x6
  int32_t applyTarget; // w8
  FunctionEntity_o *v247; // x2
  const MethodInfo *v248; // x5
  BattleActionData_o *v249; // x0
  const MethodInfo *v250; // x5
  BattleActionData_o *v251; // x0
  FunctionEntity_o *v252; // x2
  const MethodInfo *v253; // x6
  int32_t v254; // w1
  FunctionEntity_o *v255; // x2
  DataVals_o *v256; // x3
  int32_t v257; // w4
  const MethodInfo *v258; // x5
  BattleActionData_o *v259; // x0
  FunctionEntity_o *v260; // x3
  int32_t v261; // w5
  const MethodInfo *v262; // x6
  _BOOL8 v263; // x0
  FunctionEntity_o *v264; // x2
  int32_t v265; // w4
  const MethodInfo *v266; // x5
  const MethodInfo *v267; // x3
  int32_t v268; // w21
  int32_t v269; // w23
  char v270; // w5
  const MethodInfo *v271; // x7
  BattleLogicFunction_o *v272; // x0
  int32_t v273; // w1
  int32_t v274; // w2
  System_String_array **v275; // x2
  System_String_array **v276; // x3
  System_Boolean_array **v277; // x4
  System_Int32_array **v278; // x5
  System_Int32_array *v279; // x6
  System_Int32_array *v280; // x7
  struct BattleData_o *v281; // x8
  System_Int32_array **draw_commandlist; // x1
  int v283; // w21
  bool isParam; // w23
  System_Int32_array *v285; // x0
  int32_t v286; // w23
  __int64 v287; // x1
  __int64 v288; // x2
  Generator_BGMFromChangeBGMFunc_o *v289; // x21
  const MethodInfo *v290; // x3
  _BOOL8 v291; // x0
  const MethodInfo *v292; // x6
  const MethodInfo *v293; // x6
  System_Int32_array *v294; // x21
  int32_t SameIndiualityBuffSum; // w0
  int32_t v296; // w21
  int v297; // w21
  bool isGainNp; // w0
  BattleLogicFunction_o *v299; // x0
  int32_t v300; // w20
  const MethodInfo *v301; // x6
  const MethodInfo *v302; // x7
  int32_t v303; // w1
  int32_t v304; // w2
  int32_t v305; // w5
  const MethodInfo *v306; // x4
  const MethodInfo *v307; // x4
  _BOOL8 v308; // x0
  const MethodInfo *v309; // x3
  bool v310; // w21
  int32_t v311; // w23
  int32_t v312; // w1
  const MethodInfo *v313; // x3
  BattleLogicFunction_o *v314; // x0
  bool v315; // w2
  DataVals_o *v316; // x1
  __int64 v317; // x1
  __int64 v318; // x2
  Generator_BGFromQuickChangeBGFunc_o *v319; // x21
  const MethodInfo *v320; // x3
  int32_t Param; // w0
  const MethodInfo *v322; // x4
  BattleBuffData_o *buffProgressTurnSelfList; // x21
  __int64 v324; // x1
  __int64 v325; // x2
  BattleActionData_UpShiftGaugeData_o *v326; // x21
  const MethodInfo *v327; // x5
  __int64 v328; // x1
  __int64 v329; // x2
  DataVals_o *v330; // x3
  const MethodInfo *v331; // x5
  BattleActionData_o *SubMember; // x0
  const MethodInfo *v333; // x3
  const MethodInfo *v334; // x6
  const MethodInfo *v335; // x4
  const MethodInfo *v336; // x3
  _BOOL8 v337; // x0
  const MethodInfo *v338; // x3
  const MethodInfo *v339; // x2
  const MethodInfo *v340; // x2
  const MethodInfo *v341; // x5
  const MethodInfo *v342; // x4
  const MethodInfo *v343; // x4
  int32_t v344; // w0
  const MethodInfo *v345; // x2
  bool v346; // cc
  BattleLogicFunctionProcess_FunctionTargetCheck_o *v347; // x21
  int32_t targetId_k__BackingField; // w27
  BattleLogicFunction_o *v349; // x28
  const MethodInfo *v350; // x7
  BattleActionData_o *NoEffectObject; // x0
  struct System_Int32_array *vals; // x8
  int32_t commandType; // w8
  bool v354; // w0
  const MethodInfo *v355; // x5
  const MethodInfo *v356; // x3
  int32_t v357; // w23
  bool isSafeDamage; // w0
  int32_t v359; // w2
  const MethodInfo *v360; // x7
  const MethodInfo *v361; // x7
  int32_t actorId; // w1
  int32_t v363; // w2
  int32_t v364; // w5
  int v365; // w8
  struct System_Collections_Generic_List_int__o *v366; // x8
  BattleActionData_o *v367; // x0
  int v368; // w26
  bool v369; // w21
  __int64 v370; // x1
  __int64 v371; // x2
  BattleLogicFunction_AfterAttackSideEffectMakeArgument_o *v372; // x22
  BattleLogicFunction_SideEffectMakeArgument_o *Argument__Init; // x0
  const MethodInfo *v374; // x5
  __int64 v375; // x1
  __int64 v376; // x2
  BattleLogicFunction_o *v377; // x21
  UnityEngine_Object_o *v378; // x21
  int v379; // w8
  BattleLogicFunction_o *v380; // x21
  unsigned int v381; // w22
  __int64 v382; // x8
  BattleLogicFunction_FuncSideEffectFunctionArgument_o *FuncSideEffectArg; // x0
  UnityEngine_Object_o *v384; // x21
  struct BattleData_o *v385; // x8
  UnityEngine_Object_o *v386; // x21
  BattleData_o *v387; // x0
  BattleServantData_o *v388; // x0
  __int64 v390; // x0
  const MethodInfo *overwriteLossHp; // [xsp+0h] [xbp-170h]
  int32_t overwriteLossHpa; // [xsp+0h] [xbp-170h]
  const MethodInfo *v393; // [xsp+18h] [xbp-158h]
  int32_t subTargetId; // [xsp+24h] [xbp-14Ch]
  int32_t *p_actorId; // [xsp+28h] [xbp-148h]
  _BYTE v396[12]; // [xsp+34h] [xbp-13Ch]
  char isTurn; // [xsp+40h] [xbp-130h]
  BattleData_o *isTurna; // [xsp+40h] [xbp-130h]
  int32_t isTurnb; // [xsp+40h] [xbp-130h]
  BattleLogicFunction_o *v400; // [xsp+48h] [xbp-128h]
  System_Collections_Generic_List_int__o *v401; // [xsp+50h] [xbp-120h]
  struct BattleLogicFunctionProcess_FunctionUnitCheck_array *v402; // [xsp+60h] [xbp-110h]
  int v403; // [xsp+6Ch] [xbp-104h]
  BattleServantData_o *ServantData; // [xsp+70h] [xbp-100h]
  BattleLogicFunctionProcess_FunctionUnitCheck_o *funcUnit; // [xsp+80h] [xbp-F0h]
  int v407; // [xsp+8Ch] [xbp-E4h]
  DataMasterBase_WarMaster__WarEntity__int__o *MasterData_WarQuestSelectionMaster; // [xsp+90h] [xbp-E0h]
  int32_t funcIdx; // [xsp+9Ch] [xbp-D4h]
  int32_t *p_funcType; // [xsp+A0h] [xbp-D0h]
  FunctionEntity_o *funcEnt; // [xsp+B0h] [xbp-C0h]
  BattleLogicFunction_ProcListInArgs_o *args; // [xsp+B8h] [xbp-B8h]
  BattleLogicFunction_o *v413; // [xsp+C0h] [xbp-B0h]
  System_Collections_Generic_List_Enumerator_int__o v414; // [xsp+C8h] [xbp-A8h] BYREF
  System_Collections_Generic_List_Enumerator_int__o v415; // [xsp+E0h] [xbp-90h] BYREF
  int32_t absorptionCount; // [xsp+FCh] [xbp-74h] BYREF
  RemovedBuffInfo_o *subBuffInfo; // [xsp+100h] [xbp-70h] BYREF
  int32_t funcIndex; // [xsp+10Ch] [xbp-64h] BYREF
  __int64 v419[2]; // [xsp+110h] [xbp-60h] BYREF

  v413 = this;
  if ( (byte_4217014 & 1) == 0 )
  {
    sub_B0D8A4(&BattleLogicFunction_AfterAttackSideEffectMakeArgument_TypeInfo, action);
    sub_B0D8A4(&Generator_BGFromQuickChangeBGFunc_TypeInfo, v20);
    sub_B0D8A4(&Generator_BGMFromChangeBGMFunc_TypeInfo, v21);
    sub_B0D8A4(&Method_BasicHelper_Any_BattleLogicFunctionProcess_FunctionUnitCheck___, v22);
    sub_B0D8A4(&BattleCommandData_TypeInfo, v23);
    sub_B0D8A4(&Method_DataManager_GetMasterData_BuffMaster___, v24);
    sub_B0D8A4(&Method_DataMasterBase_BuffMaster__BuffEntity__int__GetEntity__, v25);
    sub_B0D8A4(&BattleActionData_DownShiftGaugeData_TypeInfo, v26);
    sub_B0D8A4(&Method_System_Linq_Enumerable_All_BattleLogicFunctionProcess_FunctionUnitCheck___, v27);
    sub_B0D8A4(&Method_System_Linq_Enumerable_Select_BattleLogicFunctionProcess_FunctionTargetCheck__int___, v28);
    sub_B0D8A4(&Method_System_Linq_Enumerable_ToArray_int___, v29);
    sub_B0D8A4(&Method_System_Linq_Enumerable_Where_BattleLogicFunctionProcess_FunctionTargetCheck___, v30);
    sub_B0D8A4(&Method_System_Collections_Generic_List_Enumerator_int__Dispose__, v31);
    sub_B0D8A4(&Method_System_Collections_Generic_List_Enumerator_int__MoveNext__, v32);
    sub_B0D8A4(&Method_System_Collections_Generic_List_Enumerator_int__get_Current__, v33);
    sub_B0D8A4(&Method_System_Func_BattleLogicFunctionProcess_FunctionUnitCheck__bool___ctor__, v34);
    sub_B0D8A4(&Method_System_Func_BattleLogicFunctionProcess_FunctionTargetCheck__int___ctor__, v35);
    sub_B0D8A4(&Method_System_Func_BattleLogicFunctionProcess_FunctionTargetCheck__bool___ctor__, v36);
    sub_B0D8A4(&System_Func_BattleLogicFunctionProcess_FunctionTargetCheck__bool__TypeInfo, v37);
    sub_B0D8A4(&System_Func_BattleLogicFunctionProcess_FunctionTargetCheck__int__TypeInfo, v38);
    sub_B0D8A4(&System_Func_BattleLogicFunctionProcess_FunctionUnitCheck__bool__TypeInfo, v39);
    sub_B0D8A4(&Method_System_Collections_Generic_List_int__Add__, v40);
    sub_B0D8A4(&Method_System_Collections_Generic_List_int__GetEnumerator__, v41);
    sub_B0D8A4(&Method_System_Collections_Generic_List_int___ctor__, v42);
    sub_B0D8A4(&System_Collections_Generic_List_int__TypeInfo, v43);
    sub_B0D8A4(&UnityEngine_Object_TypeInfo, v44);
    sub_B0D8A4(&BattleLogicFunction_PreAttackSideEffectMakeArgument_TypeInfo, v45);
    sub_B0D8A4(&BattleLogicFunction_ProcListInArgs_TypeInfo, v46);
    sub_B0D8A4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v47);
    sub_B0D8A4(&SkillValueUpApplierPlayerMaster_TypeInfo, v48);
    sub_B0D8A4(&Method_BattleLogicFunction___c__procList_b__40_0__, v49);
    sub_B0D8A4(&Method_BattleLogicFunction___c__procList_b__40_1__, v50);
    sub_B0D8A4(&Method_BattleLogicFunction___c__procList_b__40_2__, v51);
    sub_B0D8A4(&Method_BattleLogicFunction___c__procList_b__40_3__, v52);
    sub_B0D8A4(&BattleLogicFunction___c_TypeInfo, v53);
    sub_B0D8A4(&BattleActionData_UpShiftGaugeData_TypeInfo, v54);
    sub_B0D8A4(&Method_WeightRate_int___ctor__, v55);
    sub_B0D8A4(&Method_WeightRate_int__getCount__, v56);
    sub_B0D8A4(&Method_WeightRate_int__getData__, v57);
    sub_B0D8A4(&Method_WeightRate_int__getTotalWeight__, v58);
    sub_B0D8A4(&Method_WeightRate_int__setWeight__, v59);
    sub_B0D8A4(&WeightRate_int__TypeInfo, v60);
    sub_B0D8A4(&StringLiteral_1516/*"====< end BattleLogicFunction::procList >====="*/, v61);
    sub_B0D8A4(&StringLiteral_208/*" enemytargetId: "*/, v62);
    sub_B0D8A4(&StringLiteral_1517/*"====< start BattleLogicFunction::procList >====="*/, v63);
    sub_B0D8A4(&StringLiteral_254/*" pttargetId: "*/, v64);
    sub_B0D8A4(&StringLiteral_1519/*"========="*/, v65);
    sub_B0D8A4(&StringLiteral_1528/*">actSetId: "*/, v66);
    this = (BattleLogicFunction_o *)sub_B0D8A4(&StringLiteral_179/*" actorId: "*/, v67);
    byte_4217014 = 1;
  }
  v419[0] = 0LL;
  funcIndex = 0;
  subBuffInfo = 0LL;
  absorptionCount = 0;
  memset(&v415, 0, sizeof(v415));
  if ( !action )
    goto LABEL_418;
  p_actorId = &action->fields.actorId;
  v68 = System_Int32__ToString((int)action + 32, 0LL);
  System_String__Concat_43849904((System_String_o *)StringLiteral_179/*" actorId: "*/, v68, 0LL);
  this = (BattleLogicFunction_o *)v413->fields.data;
  if ( !this )
    goto LABEL_418;
  ServantData = BattleData__getServantData((BattleData_o *)this, action->fields.actorId, 0LL);
  HIDWORD(v419[0]) = action->fields.targetId;
  v69 = System_Int32__ToString((int32_t)v419 + 4, 0LL);
  System_String__Concat_43849904((System_String_o *)StringLiteral_208/*" enemytargetId: "*/, v69, 0LL);
  LODWORD(v419[0]) = BattleActionData__getPTTargetId(action, 0LL);
  subTargetId = BattleActionData__getPTSubTargetId(action, 0LL);
  v70 = System_Int32__ToString((int32_t)v419, 0LL);
  this = (BattleLogicFunction_o *)System_String__Concat_43849904((System_String_o *)StringLiteral_254/*" pttargetId: "*/, v70, 0LL);
  data = v413->fields.data;
  if ( !data )
    goto LABEL_418;
  data->fields.beforeAction = action;
  sub_B0D840(
    (BattleServantConfConponent_o *)&data->fields.beforeAction,
    (System_Int32_array **)action,
    v71,
    v72,
    v73,
    v74,
    v75,
    v76);
  v401 = (System_Collections_Generic_List_int__o *)sub_B0D974(System_Collections_Generic_List_int__TypeInfo, v78, v79);
  System_Collections_Generic_List_int____ctor(
    v401,
    (const MethodInfo_2FAF1A4 *)Method_System_Collections_Generic_List_int___ctor__);
  this = (BattleLogicFunction_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A71064 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !this )
    goto LABEL_418;
  MasterData_WarQuestSelectionMaster = (DataMasterBase_WarMaster__WarEntity__int__o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                                                        (DataManager_o *)this,
                                                                                        (const MethodInfo_17145A8 *)Method_DataManager_GetMasterData_BuffMaster___);
  if ( isReduceReset )
  {
    logic = (UnityEngine_Object_o *)v413->fields.logic;
    if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    }
    if ( UnityEngine_Object__op_Inequality(logic, 0LL, 0LL) )
    {
      this = (BattleLogicFunction_o *)v413->fields.logic;
      if ( !this )
        goto LABEL_418;
      BattleLogic__resetReducedHpAll((BattleLogic_o *)this, 0LL);
    }
  }
  v83 = (BattleLogicFunction_ProcListInArgs_o *)sub_B0D974(BattleLogicFunction_ProcListInArgs_TypeInfo, v80, v81);
  BattleLogicFunction_ProcListInArgs___ctor(v83, argument, 0LL);
  if ( !v83 )
    goto LABEL_418;
  BattleLogicFunction_ProcListInArgs__set_IsCommandSideEffect(v83, isCommandSideEffect, 0LL);
  BattleLogicFunction_ProcListInArgs__set_IsShift(v83, isShift, 0LL);
  BattleLogicFunction_ProcListInArgs__set_IsPassive(v83, passive, 0LL);
  if ( BattleLogicFunction_ProcListInArgs__get_SkillId(v83, 0LL) <= 0 )
    BattleLogicFunction_ProcListInArgs__set_SkillId(v83, skillId, 0LL);
  funcIndex = 0;
  BattleLogicFunction_ProcListInArgs__initFunctionUnitCheck(v83, v413, functionlist, baseValslist, &funcIndex, 0LL);
  args = v83;
  v83->fields.actSetId = 0;
  p_actSetId = &v83->fields.actSetId;
  v87 = (WeightRate_int__o *)sub_B0D974(WeightRate_int__TypeInfo, v85, v86);
  WeightRate_int____ctor(v87, (const MethodInfo_2ADF078 *)Method_WeightRate_int___ctor__);
  if ( !baseValslist )
    goto LABEL_418;
  max_length = baseValslist->max_length;
  if ( max_length >= 1 )
  {
    v89 = 0;
    while ( v89 < max_length )
    {
      v90 = &baseValslist->obj.klass + (int)v89;
      v91 = (DataVals_o *)v90[4];
      if ( !v91 )
        goto LABEL_418;
      DataVals__loadActSet((DataVals_o *)v90[4], 0LL);
      this = (BattleLogicFunction_o *)DataVals__checkActSet(v91, 0LL);
      if ( ((unsigned __int8)this & 1) != 0 )
      {
        this = (BattleLogicFunction_o *)DataVals__getActSetWeight(v91, 0LL);
        if ( (int)this >= 1 )
        {
          ActSetWeight = DataVals__getActSetWeight(v91, 0LL);
          this = (BattleLogicFunction_o *)DataVals__getActSet(v91, 0LL);
          if ( !v87 )
            goto LABEL_418;
          WeightRate_int___setWeight(
            v87,
            ActSetWeight,
            (int32_t)this,
            (const MethodInfo_2ADE240 *)Method_WeightRate_int__setWeight__);
        }
      }
      max_length = baseValslist->max_length;
      if ( (int)++v89 >= max_length )
        goto LABEL_27;
    }
LABEL_419:
    v390 = sub_B0D9A8(this);
    sub_B0D948(v390, 0LL);
  }
LABEL_27:
  if ( !v87 )
    goto LABEL_418;
  v93 = ServantData;
  if ( WeightRate_int___getCount(v87, (const MethodInfo_2ADE5E0 *)Method_WeightRate_int__getCount__) >= 1 )
  {
    Random = BattleRandom__getRandom(0, v87->fields.totalweight, 0LL);
    *p_actSetId = WeightRate_int___getData(v87, Random, (const MethodInfo_2ADE6C4 *)Method_WeightRate_int__getData__);
    v95 = System_Int32__ToString((int32_t)p_actSetId, 0LL);
    System_String__Concat_43849904((System_String_o *)StringLiteral_1528/*">actSetId: "*/, v95, 0LL);
  }
  action->fields.ActSetId = args->fields.actSetId;
  BattleActionData__initFuncTargetPlayerType(action, funcIndex, 0LL);
  funcUnitArray_k__BackingField = (WellFired_USFGOPlayBgmEventConditional_CondBGM_array *)args->fields._funcUnitArray_k__BackingField;
  v99 = BattleLogicFunction___c_TypeInfo;
  if ( (BYTE3(BattleLogicFunction___c_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 )
  {
    v100 = isCommandSideEffect;
    if ( !BattleLogicFunction___c_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(BattleLogicFunction___c_TypeInfo);
      v99 = BattleLogicFunction___c_TypeInfo;
    }
  }
  else
  {
    v100 = isCommandSideEffect;
  }
  static_fields = v99->static_fields;
  _9__40_0 = (System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *)static_fields->__9__40_0;
  if ( !_9__40_0 )
  {
    if ( (BYTE3(v99->vtable._0_Equals.methodPtr) & 4) != 0 && !v99->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v99);
      static_fields = BattleLogicFunction___c_TypeInfo->static_fields;
    }
    v103 = (Il2CppObject *)static_fields->__9;
    _9__40_0 = (System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *)sub_B0D974(
                                                                                    System_Func_BattleLogicFunctionProcess_FunctionUnitCheck__bool__TypeInfo,
                                                                                    v96,
                                                                                    v97);
    System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool____ctor(
      _9__40_0,
      v103,
      Method_BattleLogicFunction___c__procList_b__40_0__,
      (const MethodInfo_26189B8 *)Method_System_Func_BattleLogicFunctionProcess_FunctionUnitCheck__bool___ctor__);
    v104 = BattleLogicFunction___c_TypeInfo->static_fields;
    v104->__9__40_0 = (struct System_Func_BattleLogicFunctionProcess_FunctionUnitCheck__bool__o *)_9__40_0;
    sub_B0D840(
      (BattleServantConfConponent_o *)&v104->__9__40_0,
      (System_Int32_array **)_9__40_0,
      v105,
      v106,
      v107,
      v108,
      v109,
      v110);
    v100 = isCommandSideEffect;
  }
  if ( !BasicHelper__Any_USFGOPlayBgmEventConditional_CondBGM_(
          funcUnitArray_k__BackingField,
          (System_Func_T__bool__o *)_9__40_0,
          (const MethodInfo_17071E4 *)Method_BasicHelper_Any_BattleLogicFunctionProcess_FunctionUnitCheck___) )
    action->fields.isSuccessTargetSelection = 1;
  v113 = BattleLogicFunction___c_TypeInfo;
  v114 = (System_Collections_Generic_IEnumerable_TSource__o *)args->fields._funcUnitArray_k__BackingField;
  if ( (BYTE3(BattleLogicFunction___c_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !BattleLogicFunction___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BattleLogicFunction___c_TypeInfo);
    v113 = BattleLogicFunction___c_TypeInfo;
  }
  v115 = v113->static_fields;
  _9__40_1 = (System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *)v115->__9__40_1;
  if ( !_9__40_1 )
  {
    if ( (BYTE3(v113->vtable._0_Equals.methodPtr) & 4) != 0 && !v113->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v113);
      v115 = BattleLogicFunction___c_TypeInfo->static_fields;
    }
    v117 = (Il2CppObject *)v115->__9;
    _9__40_1 = (System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *)sub_B0D974(
                                                                                    System_Func_BattleLogicFunctionProcess_FunctionUnitCheck__bool__TypeInfo,
                                                                                    v111,
                                                                                    v112);
    System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool____ctor(
      _9__40_1,
      v117,
      Method_BattleLogicFunction___c__procList_b__40_1__,
      (const MethodInfo_26189B8 *)Method_System_Func_BattleLogicFunctionProcess_FunctionUnitCheck__bool___ctor__);
    v118 = BattleLogicFunction___c_TypeInfo->static_fields;
    v118->__9__40_1 = (struct System_Func_BattleLogicFunctionProcess_FunctionUnitCheck__bool__o *)_9__40_1;
    sub_B0D840(
      (BattleServantConfConponent_o *)&v118->__9__40_1,
      (System_Int32_array **)_9__40_1,
      v119,
      v120,
      v121,
      v122,
      v123,
      v124);
    v100 = isCommandSideEffect;
  }
  action->fields.isSkillCopyFunctionOnly = System_Linq_Enumerable__All_WarBoardManager_WarBoardOnboardSkillTarget_(
                                             v114,
                                             (System_Func_TSource__bool__o *)_9__40_1,
                                             (const MethodInfo_171872C *)Method_System_Linq_Enumerable_All_BattleLogicFunctionProcess_FunctionUnitCheck___);
  this = (BattleLogicFunction_o *)BattleLogicFunction_ProcListInArgs__MatchSkillType(args, 1, 0LL);
  if ( ((unsigned __int8)this & 1) != 0
    && (v127 = v413->fields.data,
        v128 = (SkillValueUpApplierPlayerMaster_o *)sub_B0D974(SkillValueUpApplierPlayerMaster_TypeInfo, v125, v126),
        SkillValueUpApplierPlayerMaster___ctor(v128, v127, 0LL),
        v128) )
  {
    this = (BattleLogicFunction_o *)((__int64 (__fastcall *)(SkillValueUpApplierPlayerMaster_o *, Il2CppMethodPointer))v128->klass->vtable._4_Init.method)(
                                      v128,
                                      v128->klass->vtable._5_ApplyTo.methodPtr);
    v129 = v128;
    v403 = 1;
  }
  else
  {
    v403 = 0;
    v129 = 0LL;
  }
  v130 = args->fields._funcUnitArray_k__BackingField;
  if ( !v130 )
    goto LABEL_418;
  v131 = v130->max_length;
  if ( v131 >= 1 )
  {
    v400 = (BattleLogicFunction_o *)v129;
    v132 = 0LL;
    v133 = 0;
    v396[8] = 0;
    v402 = args->fields._funcUnitArray_k__BackingField;
    *(_QWORD *)v396 = ServantData == 0LL || !isTreasureDvc;
    while ( 1 )
    {
      if ( v133 >= (unsigned int)v131 )
        goto LABEL_419;
      v138 = v130->m_Items[v133];
      v407 = v133;
      if ( !v138 )
        goto LABEL_418;
      this = (BattleLogicFunction_o *)BattleLogicFunctionProcess_FunctionUnitCheck__get_FuncIndex(v138, 0LL);
      dataVals_k__BackingField = v138->fields._dataVals_k__BackingField;
      funcIdx = (int)this;
      if ( !dataVals_k__BackingField )
        goto LABEL_418;
      funcEnt = dataVals_k__BackingField->fields.funcEnt;
      funcUnit = v138;
      this = (BattleLogicFunction_o *)BattleLogicFunctionProcess_FunctionUnitCheck__checkCondtion(v138, action, 0LL);
      if ( ((unsigned __int8)this & 1) == 0 )
        goto LABEL_371;
      if ( v403 )
      {
        this = v400;
        if ( !v400 )
          goto LABEL_418;
        this = (BattleLogicFunction_o *)((__int64 (__fastcall *)(BattleLogicFunction_o *, BattleLogicFunctionProcess_FunctionUnitCheck_o *, void *))v400->klass[1]._1.namespaze)(
                                          v400,
                                          v138,
                                          v400->klass[1]._1.byval_arg.data);
      }
      if ( isCreateSideEffect )
      {
        if ( !funcEnt )
          goto LABEL_418;
        this = (BattleLogicFunction_o *)FuncList__isDamage(funcEnt->fields.funcType, 0LL);
        if ( ((unsigned __int8)this & 1) != 0 )
        {
          v143 = BattleLogicFunction___c_TypeInfo;
          funcTargetArray_k__BackingField = (System_Collections_Generic_IEnumerable_TSource__o *)v138->fields._funcTargetArray_k__BackingField;
          if ( (BYTE3(BattleLogicFunction___c_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
            && !BattleLogicFunction___c_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(BattleLogicFunction___c_TypeInfo);
            v143 = BattleLogicFunction___c_TypeInfo;
          }
          v145 = v143->static_fields;
          _9__40_2 = (System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *)v145->__9__40_2;
          if ( !_9__40_2 )
          {
            if ( (BYTE3(v143->vtable._0_Equals.methodPtr) & 4) != 0 && !v143->_2.cctor_finished )
            {
              j_il2cpp_runtime_class_init_0(v143);
              v145 = BattleLogicFunction___c_TypeInfo->static_fields;
            }
            v147 = (Il2CppObject *)v145->__9;
            _9__40_2 = (System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *)sub_B0D974(
                                                                                            System_Func_BattleLogicFunctionProcess_FunctionTargetCheck__bool__TypeInfo,
                                                                                            v141,
                                                                                            v142);
            System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool____ctor(
              _9__40_2,
              v147,
              Method_BattleLogicFunction___c__procList_b__40_2__,
              (const MethodInfo_26189B8 *)Method_System_Func_BattleLogicFunctionProcess_FunctionTargetCheck__bool___ctor__);
            v148 = BattleLogicFunction___c_TypeInfo->static_fields;
            v148->__9__40_2 = (struct System_Func_BattleLogicFunctionProcess_FunctionTargetCheck__bool__o *)_9__40_2;
            sub_B0D840(
              (BattleServantConfConponent_o *)&v148->__9__40_2,
              (System_Int32_array **)_9__40_2,
              v149,
              v150,
              v151,
              v152,
              v153,
              v154);
          }
          v157 = System_Linq_Enumerable__Where_WarBoardManager_WarBoardOnboardSkillTarget_(
                   funcTargetArray_k__BackingField,
                   (System_Func_TSource__bool__o *)_9__40_2,
                   (const MethodInfo_1B5A6B0 *)Method_System_Linq_Enumerable_Where_BattleLogicFunctionProcess_FunctionTargetCheck___);
          v158 = BattleLogicFunction___c_TypeInfo;
          if ( (BYTE3(BattleLogicFunction___c_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
            && !BattleLogicFunction___c_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(BattleLogicFunction___c_TypeInfo);
            v158 = BattleLogicFunction___c_TypeInfo;
          }
          v159 = v158->static_fields;
          _9__40_3 = (System_Func_BattleLogicBuff_ReduceHpProcess_BuffInfo__int__o *)v159->__9__40_3;
          if ( !_9__40_3 )
          {
            if ( (BYTE3(v158->vtable._0_Equals.methodPtr) & 4) != 0 && !v158->_2.cctor_finished )
            {
              j_il2cpp_runtime_class_init_0(v158);
              v159 = BattleLogicFunction___c_TypeInfo->static_fields;
            }
            v161 = (Il2CppObject *)v159->__9;
            _9__40_3 = (System_Func_BattleLogicBuff_ReduceHpProcess_BuffInfo__int__o *)sub_B0D974(
                                                                                         System_Func_BattleLogicFunctionProcess_FunctionTargetCheck__int__TypeInfo,
                                                                                         v155,
                                                                                         v156);
            System_Func_BattleLogicBuff_ReduceHpProcess_BuffInfo__int____ctor(
              _9__40_3,
              v161,
              Method_BattleLogicFunction___c__procList_b__40_3__,
              (const MethodInfo_2619564 *)Method_System_Func_BattleLogicFunctionProcess_FunctionTargetCheck__int___ctor__);
            v162 = BattleLogicFunction___c_TypeInfo->static_fields;
            v162->__9__40_3 = (struct System_Func_BattleLogicFunctionProcess_FunctionTargetCheck__int__o *)_9__40_3;
            sub_B0D840(
              (BattleServantConfConponent_o *)&v162->__9__40_3,
              (System_Int32_array **)_9__40_3,
              v163,
              v164,
              v165,
              v166,
              v167,
              v168);
          }
          v169 = (System_Collections_Generic_IEnumerable_TSource__o *)System_Linq_Enumerable__Select_BattleLogicBuff_ReduceHpProcess_BuffInfo__int_(
                                                                        v157,
                                                                        (System_Func_TSource__TResult__o *)_9__40_3,
                                                                        (const MethodInfo_1B51AB4 *)Method_System_Linq_Enumerable_Select_BattleLogicFunctionProcess_FunctionTargetCheck__int___);
          v170 = System_Linq_Enumerable__ToArray_int_(
                   v169,
                   (const MethodInfo_1B560F0 *)Method_System_Linq_Enumerable_ToArray_int___);
          v171 = FuncList__Check(26, funcEnt->fields.funcType, 0LL);
          v174 = (BattleLogicFunction_PreAttackSideEffectMakeArgument_o *)sub_B0D974(
                                                                            BattleLogicFunction_PreAttackSideEffectMakeArgument_TypeInfo,
                                                                            v172,
                                                                            v173);
          BattleLogicFunction_PreAttackSideEffectMakeArgument___ctor(v174, 0LL);
          if ( !v174 )
            goto LABEL_418;
          v175 = (BattleLogicFunction_SideEffectMakeArgument_o *)((__int64 (__fastcall *)(BattleLogicFunction_PreAttackSideEffectMakeArgument_o *, System_Int32_array *, Il2CppMethodPointer))v174->klass->vtable._6_Init.method)(
                                                                   v174,
                                                                   v170,
                                                                   v174->klass->vtable._7_MakeOnlyMainArgument.methodPtr);
          BattleLogicFunction__setAttackSideEffect(v413, action, v93, v171 || isTreasureDvc, v175, v176);
        }
      }
      v177 = funcUnit->fields._funcTargetArray_k__BackingField;
      if ( !v177 )
        goto LABEL_418;
      v178 = v177->max_length;
      p_funcType = &funcEnt->fields.funcType;
      if ( v178 >= 1 )
      {
        for ( i = 0; i < v178; ++i )
        {
          if ( i >= (unsigned int)v178 )
            goto LABEL_419;
          v347 = v177->m_Items[i];
          if ( !v347 )
            goto LABEL_418;
          BattleLogicFunction__SetTargetFuncList(
            v413,
            v347->fields._targetId_k__BackingField,
            action,
            dataVals_k__BackingField,
            v140);
          this = (BattleLogicFunction_o *)BattleLogicFunction_ProcListInArgs__get_FuncSideEffectArg(args, 0LL);
          if ( this )
            v132 = (BattleLogicFunction_FuncSideEffectFunctionArgument_o *)this;
          if ( this )
          {
            if ( !v132 )
              goto LABEL_418;
            BattleLogicFunction_FuncSideEffectFunctionArgument__AddTarget(v132, v347, 0LL);
          }
          if ( !v347->fields._result_k__BackingField )
          {
            NoEffectObject = BattleLogicFunctionProcess_FunctionTargetCheck__getInvalidObject(v347, 0LL);
            goto LABEL_314;
          }
          this = (BattleLogicFunction_o *)v413->fields.data;
          if ( !this )
            goto LABEL_418;
          targetId_k__BackingField = v347->fields._targetId_k__BackingField;
          this = (BattleLogicFunction_o *)BattleData__getServantData(
                                            (BattleData_o *)this,
                                            targetId_k__BackingField,
                                            0LL);
          if ( !this )
            goto LABEL_418;
          v349 = this;
          this = (BattleLogicFunction_o *)BattleServantData__CheckNotTargetSkill(
                                            (BattleServantData_o *)this,
                                            skillId,
                                            0LL);
          if ( ((unsigned __int8)this & 1) != 0 )
          {
            NoEffectObject = BattleLogicFunction__getNoEffectObject(
                               v413,
                               (int32_t)v349->fields.logic,
                               funcIdx,
                               dataVals_k__BackingField,
                               v100,
                               0LL,
                               0LL,
                               v350);
LABEL_314:
            BattleActionData__addAction(action, NoEffectObject, 0LL);
            goto LABEL_362;
          }
          action->fields.funcResult = 1;
          args->fields.tdCommandTypeChange = -1;
          if ( !funcEnt )
            goto LABEL_418;
          v185 = &funcEnt->fields.funcType;
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
                                              (const MethodInfo_2669BD4 *)Method_DataMasterBase_BuffMaster__BuffEntity__int__GetEntity__);
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
            v185 = &funcEnt->fields.funcType;
            v354 = FuncList__Check(16, *p_funcType, 0LL);
            BattleLogicFunction__functionAddState(v413, action, v347, args, v354, v355);
            goto LABEL_350;
          }
          if ( FuncList__Check(2, *p_funcType, 0LL) )
          {
            v186 = BattleLogicFunction__functionSubState(
                     v413,
                     targetId_k__BackingField,
                     funcEnt,
                     dataVals_k__BackingField,
                     funcIdx,
                     v100,
                     &subBuffInfo,
                     args,
                     overwriteLossHp);
            goto LABEL_349;
          }
          if ( FuncList__Check(3, *p_funcType, 0LL) )
          {
            v357 = (int32_t)v349->fields.logic;
            isTurnb = action->fields.actorId;
            isSafeDamage = BattleLogicFunction__isSafeDamage(
                             v413,
                             dataVals_k__BackingField,
                             targetId_k__BackingField,
                             v356);
            v359 = v357;
            v100 = isCommandSideEffect;
            v186 = BattleLogicFunction__functionDamage(
                     v413,
                     isTurnb,
                     v359,
                     dataVals_k__BackingField,
                     funcIdx,
                     action,
                     isSafeDamage,
                     v360);
            goto LABEL_349;
          }
          if ( FuncList__Check(4, *p_funcType, 0LL) )
          {
            actorId = action->fields.actorId;
            v363 = (int32_t)v349->fields.logic;
            v364 = 1;
            goto LABEL_348;
          }
          if ( FuncList__Check(14, *p_funcType, 0LL) )
          {
            actorId = action->fields.actorId;
            v363 = (int32_t)v349->fields.logic;
            v364 = 2;
            goto LABEL_348;
          }
          if ( FuncList__Check(15, *p_funcType, 0LL) )
          {
            actorId = action->fields.actorId;
            v363 = (int32_t)v349->fields.logic;
            v364 = 3;
            goto LABEL_348;
          }
          if ( FuncList__Check(18, *p_funcType, 0LL) )
          {
            actorId = action->fields.actorId;
            v363 = (int32_t)v349->fields.logic;
            v364 = 4;
            goto LABEL_348;
          }
          if ( FuncList__Check(27, *p_funcType, 0LL) )
          {
            actorId = action->fields.actorId;
            v363 = (int32_t)v349->fields.logic;
            v364 = 7;
            goto LABEL_348;
          }
          if ( FuncList__Check(21, *p_funcType, 0LL) )
          {
            actorId = action->fields.actorId;
            v363 = (int32_t)v349->fields.logic;
            v364 = 5;
            goto LABEL_348;
          }
          if ( FuncList__Check(22, *p_funcType, 0LL) )
          {
            actorId = action->fields.actorId;
            v363 = (int32_t)v349->fields.logic;
            v364 = 6;
            goto LABEL_348;
          }
          if ( FuncList__Check(28, *p_funcType, 0LL) )
          {
            actorId = action->fields.actorId;
            v363 = (int32_t)v349->fields.logic;
            v364 = 8;
LABEL_348:
            v186 = BattleLogicFunction__functionNPDamage(
                     v413,
                     actorId,
                     v363,
                     dataVals_k__BackingField,
                     funcIdx,
                     v364,
                     action,
                     v361);
LABEL_349:
            BattleActionData__addAction(action, v186, 0LL);
            goto LABEL_350;
          }
          if ( FuncList__Check(5, *p_funcType, 0LL) )
          {
            v180 = v413->fields.data;
            Value = DataVals__GetValue(dataVals_k__BackingField, 0LL);
            this = (BattleLogicFunction_o *)DataVals__isMultipleGainStar(dataVals_k__BackingField, 0LL);
            if ( !v180 )
              goto LABEL_418;
            BattleData__addCriticalPoint(v180, Value, (unsigned __int8)this & 1, 0LL);
LABEL_107:
            this = (BattleLogicFunction_o *)BattleLogicFunction__getFunctionObject(
                                              v182,
                                              funcEnt,
                                              (int32_t)v349->fields.logic,
                                              funcIdx,
                                              v100,
                                              0LL,
                                              v183);
            if ( !this )
              goto LABEL_418;
            HIDWORD(this->fields.logic) = 4;
            BattleActionData__setBuffData(action, (BattleActionData_BuffData_o *)this, dataVals_k__BackingField, 0LL);
            this = (BattleLogicFunction_o *)v413->fields.data;
            if ( !this )
              goto LABEL_418;
            BattleData__AddPerformedVals((BattleData_o *)this, dataVals_k__BackingField, 0LL);
            goto LABEL_110;
          }
          if ( FuncList__Check(31, *p_funcType, 0LL) )
          {
            v184 = v413->fields.data;
            this = (BattleLogicFunction_o *)DataVals__GetValue(dataVals_k__BackingField, 0LL);
            if ( !v184 )
              goto LABEL_418;
            BattleData__lossCriticalPoint(v184, (int32_t)this, 0LL);
            goto LABEL_107;
          }
          if ( FuncList__Check(6, *p_funcType, 0LL) )
          {
            v186 = BattleLogicFunction__functionGainHp(
                     v413,
                     action->fields.actorId,
                     targetId_k__BackingField,
                     funcEnt,
                     dataVals_k__BackingField,
                     funcIdx,
                     v100,
                     -1,
                     overwriteLossHp);
            goto LABEL_349;
          }
          if ( FuncList__Check(17, *p_funcType, 0LL) )
          {
            v186 = BattleLogicFunction__functionGainHpPer(
                     v413,
                     action->fields.actorId,
                     targetId_k__BackingField,
                     funcEnt,
                     dataVals_k__BackingField,
                     funcIdx,
                     v100,
                     v187);
            goto LABEL_349;
          }
          if ( FuncList__Check(7, *p_funcType, 0LL) )
          {
            if ( BattleServantData__checkPlayer((BattleServantData_o *)v349, 0LL) )
            {
              isUnaffected = DataVals__isUnaffected(dataVals_k__BackingField, 0LL);
              CorrectedValueFuncGainNp = DataVals__GetValue(dataVals_k__BackingField, 0LL);
              if ( !isUnaffected )
                CorrectedValueFuncGainNp = BattleServantData__getCorrectedValueFuncGainNp(
                                             (BattleServantData_o *)v349,
                                             CorrectedValueFuncGainNp,
                                             0LL);
              if ( !BattleServantData__isGainNp((BattleServantData_o *)v349, 1, 0LL) )
              {
                v100 = isCommandSideEffect;
                v208 = (int32_t)v349->fields.logic;
                v209 = v413;
                v210 = funcIdx;
                v211 = isCommandSideEffect;
                v212 = dataVals_k__BackingField;
                goto LABEL_141;
              }
              v191 = (BattleLogicFunction_o *)BattleServantData__addNp(
                                                (BattleServantData_o *)v349,
                                                CorrectedValueFuncGainNp,
                                                0,
                                                0LL);
              v192 = (int)v191;
              this = (BattleLogicFunction_o *)BattleLogicFunction__getFunctionObject(
                                                v191,
                                                funcEnt,
                                                (int32_t)v349->fields.logic,
                                                funcIdx,
                                                isCommandSideEffect,
                                                0LL,
                                                v193);
              if ( !this )
                goto LABEL_418;
              v194 = this;
              HIDWORD(this->fields.logic) = 3;
              BattleActionData_BuffData__setSaveNp((BattleActionData_BuffData_o *)this, v192, 0LL);
              if ( isCommandSideEffect )
                BYTE2(v194->fields.wkStr) = 1;
              v195 = action;
              v196 = (BattleActionData_BuffData_o *)v194;
              v197 = dataVals_k__BackingField;
              goto LABEL_129;
            }
          }
          else if ( FuncList__Check(8, *p_funcType, 0LL) )
          {
            if ( BattleServantData__checkPlayer((BattleServantData_o *)v349, 0LL) )
            {
              v198 = DataVals__GetValue(dataVals_k__BackingField, 0LL);
              v199 = (BattleLogicFunction_o *)BattleServantData__addNp((BattleServantData_o *)v349, -v198, 0, 0LL);
              v200 = (int)v199;
              this = (BattleLogicFunction_o *)BattleLogicFunction__getFunctionObject(
                                                v199,
                                                funcEnt,
                                                (int32_t)v349->fields.logic,
                                                funcIdx,
                                                isCommandSideEffect,
                                                0LL,
                                                v201);
              if ( !this )
                goto LABEL_418;
              v202 = this;
              HIDWORD(this->fields.logic) = 3;
              BattleActionData_BuffData__setSaveNp((BattleActionData_BuffData_o *)this, v200, 0LL);
              goto LABEL_128;
            }
          }
          else
          {
            if ( FuncList__Check(9, *p_funcType, 0LL) )
            {
              v203 = DataVals__GetValue2(dataVals_k__BackingField, 0LL) - 1;
              TargetList = DataVals__GetTargetList(dataVals_k__BackingField, 0LL);
              v205 = DataVals__GetValue(dataVals_k__BackingField, 0LL);
              v206 = BattleServantData__skillChageShorten((BattleServantData_o *)v349, v205, 0, v203, TargetList, 0LL);
              goto LABEL_136;
            }
            if ( FuncList__Check(10, *p_funcType, 0LL) )
            {
              v213 = DataVals__GetValue2(dataVals_k__BackingField, 0LL) - 1;
              v214 = DataVals__GetTargetList(dataVals_k__BackingField, 0LL);
              v215 = DataVals__GetValue(dataVals_k__BackingField, 0LL);
              v206 = BattleServantData__skillChageExtend((BattleServantData_o *)v349, v215, 999, v213, v214, 0LL);
LABEL_136:
              v216 = (int32_t)v349->fields.logic;
              if ( !v206 )
              {
                v100 = isCommandSideEffect;
                v209 = v413;
                v208 = (int32_t)v349->fields.logic;
                goto LABEL_140;
              }
              goto LABEL_137;
            }
            if ( FuncList__Check(12, *p_funcType, 0LL) )
            {
              v222 = action->fields.actorId;
              v100 = isCommandSideEffect;
              v223 = BattleLogicFunction__isSafeDamage(v413, dataVals_k__BackingField, targetId_k__BackingField, v221);
              v220 = BattleLogicFunction__functionlossHp(
                       v413,
                       v222,
                       targetId_k__BackingField,
                       funcEnt,
                       dataVals_k__BackingField,
                       funcIdx,
                       v223,
                       isCommandSideEffect,
                       -1,
                       1,
                       action,
                       v393);
              goto LABEL_142;
            }
            if ( FuncList__Check(25, *p_funcType, 0LL) )
            {
              v100 = isCommandSideEffect;
              v220 = BattleLogicFunction__functionlossHp(
                       v413,
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
                       v393);
              goto LABEL_142;
            }
            if ( FuncList__Check(13, *p_funcType, 0LL) )
            {
              v100 = isCommandSideEffect;
              v224 = action->fields.actorId;
              v225 = v413;
              v226 = funcEnt;
              v227 = funcIdx;
              v228 = isCommandSideEffect;
              v229 = targetId_k__BackingField;
              v230 = dataVals_k__BackingField;
              v231 = 0;
LABEL_149:
              v220 = BattleLogicFunction__functionInstantDeath(
                       v225,
                       v224,
                       v229,
                       v226,
                       v230,
                       v227,
                       v228,
                       v231,
                       overwriteLossHp);
              goto LABEL_142;
            }
            if ( FuncList__Check(19, *p_funcType, 0LL) )
            {
              v100 = isCommandSideEffect;
              v220 = BattleLogicFunction__functionHastenNpTurn(
                       v413,
                       targetId_k__BackingField,
                       funcEnt,
                       dataVals_k__BackingField,
                       funcIdx,
                       isCommandSideEffect,
                       -1,
                       v232);
              goto LABEL_142;
            }
            if ( FuncList__Check(20, *p_funcType, 0LL) )
            {
              v100 = isCommandSideEffect;
              v220 = BattleLogicFunction__functionDelayNpTurn(
                       v413,
                       targetId_k__BackingField,
                       funcEnt,
                       dataVals_k__BackingField,
                       funcIdx,
                       isCommandSideEffect,
                       &absorptionCount,
                       v233);
              goto LABEL_142;
            }
            if ( FuncList__Check(56, *p_funcType, 0LL) )
            {
              v100 = isCommandSideEffect;
              v220 = BattleLogicFunction__functionAbsorbNpTurn(
                       v413,
                       targetId_k__BackingField,
                       funcEnt,
                       action,
                       v347,
                       isCommandSideEffect,
                       v234);
              goto LABEL_142;
            }
            if ( FuncList__Check(23, *p_funcType, 0LL) )
            {
              v240 = v413;
              v241 = BattleLogicFunction__functionResetCommandCard(v413, v235, v236, v237, v238, v239);
LABEL_158:
              BattleActionData__addAction(action, v241, 0LL);
              this = (BattleLogicFunction_o *)v240->fields.data;
              if ( !this )
                goto LABEL_418;
              BattleData__AddPerformedVals((BattleData_o *)this, dataVals_k__BackingField, 0LL);
              goto LABEL_130;
            }
            if ( !FuncList__Check(24, *p_funcType, 0LL) )
            {
              if ( FuncList__Check(109, *p_funcType, 0LL) )
              {
                v249 = BattleLogicFunction__functionTransformServant(
                         v413,
                         targetId_k__BackingField,
                         v247,
                         dataVals_k__BackingField,
                         funcIdx,
                         v248);
LABEL_169:
                BattleActionData__addAction(action, v249, 0LL);
                goto LABEL_130;
              }
              if ( FuncList__Check(26, *p_funcType, 0LL) )
              {
                v251 = BattleLogicFunction__functionReflection(
                         v413,
                         action->fields.actorId,
                         (int32_t)v349->fields.logic,
                         dataVals_k__BackingField,
                         funcIdx,
                         v250);
                BattleActionData__addAction(action, v251, 0LL);
                v396[4] = 1;
                goto LABEL_130;
              }
              if ( FuncList__Check(29, *p_funcType, 0LL) )
              {
                v100 = isCommandSideEffect;
                v220 = BattleLogicFunction__functionCallServant(
                         v413,
                         action->fields.actorId,
                         v252,
                         dataVals_k__BackingField,
                         funcIdx,
                         isCommandSideEffect,
                         v253);
                goto LABEL_142;
              }
              if ( FuncList__Check(30, *p_funcType, 0LL) )
              {
                v259 = BattleLogicFunction__functionPtShuffle(v413, v254, v255, v256, v257, v258);
                BattleActionData__addAction(action, v259, 0LL);
                this = (BattleLogicFunction_o *)v413->fields.data;
                if ( !this )
                  goto LABEL_418;
                BattleData__AddPerformedVals((BattleData_o *)this, dataVals_k__BackingField, 0LL);
                goto LABEL_175;
              }
              if ( FuncList__Check(32, *p_funcType, 0LL) )
              {
                v249 = BattleLogicFunction__functionChangeServant(
                         v413,
                         action->fields.actorId,
                         targetId_k__BackingField,
                         v260,
                         dataVals_k__BackingField,
                         v261,
                         v262);
                goto LABEL_169;
              }
              v263 = FuncList__Check(33, *p_funcType, 0LL);
              if ( v263 )
              {
                v249 = BattleLogicFunction__functionChangeBg(
                         (BattleLogicFunction_o *)v263,
                         action->fields.actorId,
                         v264,
                         dataVals_k__BackingField,
                         v265,
                         v266);
                goto LABEL_169;
              }
              if ( FuncList__Check(34, *p_funcType, 0LL) )
              {
                v268 = action->fields.actorId;
                v269 = (int32_t)v349->fields.logic;
                v270 = BattleLogicFunction__isSafeDamage(v413, dataVals_k__BackingField, targetId_k__BackingField, v267);
                v272 = v413;
                goto LABEL_182;
              }
              if ( FuncList__Check(122, *p_funcType, 0LL) )
              {
                v273 = action->fields.actorId;
                v274 = (int32_t)v349->fields.logic;
                v272 = v413;
                v270 = 1;
                goto LABEL_185;
              }
              if ( FuncList__Check(35, *p_funcType, 0LL) )
              {
                BYTE1(v349[9].monitor) = 1;
                goto LABEL_130;
              }
              this = (BattleLogicFunction_o *)FuncList__Check(36, *p_funcType, 0LL);
              if ( ((unsigned __int8)this & 1) != 0 )
              {
                v281 = v413->fields.data;
                if ( !v281 )
                  goto LABEL_418;
                draw_commandlist = (System_Int32_array **)v281->fields.draw_commandlist;
                v281->fields.fixedCommands = (struct BattleCommandData_array *)draw_commandlist;
                sub_B0D840(
                  (BattleServantConfConponent_o *)&v281->fields.fixedCommands,
                  draw_commandlist,
                  v275,
                  v276,
                  v277,
                  v278,
                  v279,
                  v280);
                goto LABEL_191;
              }
              if ( FuncList__Check(37, *p_funcType, 0LL)
                || FuncList__Check(38, *p_funcType, 0LL)
                || FuncList__Check(39, *p_funcType, 0LL)
                || FuncList__Check(40, *p_funcType, 0LL) )
              {
                v283 = DataVals__GetValue(dataVals_k__BackingField, 0LL);
                if ( FuncList__Check(37, *p_funcType, 0LL) || FuncList__Check(39, *p_funcType, 0LL) )
                  v283 = -v283;
                if ( FuncList__Check(37, *p_funcType, 0LL) || FuncList__Check(38, *p_funcType, 0LL) )
                {
                  v283 *= 2;
                  isTurn = 1;
                }
                else
                {
                  isTurn = 0;
                }
                isParam = DataVals__isParam(dataVals_k__BackingField, 90, 0LL);
                v285 = DataVals__GetTargetList(dataVals_k__BackingField, 0LL);
                v206 = BattleServantData__ChangeBuffValue(
                         (BattleServantData_o *)v349,
                         v283,
                         v285,
                         isTurn,
                         1,
                         isParam,
                         0LL);
                goto LABEL_136;
              }
              if ( FuncList__Check(41, *p_funcType, 0LL) )
              {
                isTurna = v413->fields.data;
                v286 = DataVals__GetValue(dataVals_k__BackingField, 0LL);
                v289 = (Generator_BGMFromChangeBGMFunc_o *)sub_B0D974(
                                                             Generator_BGMFromChangeBGMFunc_TypeInfo,
                                                             v287,
                                                             v288);
                Generator_BGMFromChangeBGMFunc___ctor(v289, isTurna, v286, dataVals_k__BackingField, 0, 0LL);
                BattleLogicFunction__FunctionChangeBgm(v413, args, (Generator_BGM_o *)v289, v290);
                goto LABEL_130;
              }
              v291 = FuncList__Check(42, *p_funcType, 0LL);
              if ( v291 )
              {
                v100 = isCommandSideEffect;
                FunctionObject = BattleLogicFunction__getFunctionObject(
                                   (BattleLogicFunction_o *)v291,
                                   funcEnt,
                                   (int32_t)v349->fields.logic,
                                   funcIdx,
                                   isCommandSideEffect,
                                   0LL,
                                   v292);
                v218 = action;
                v219 = 0LL;
                goto LABEL_138;
              }
              if ( FuncList__Check(43, *p_funcType, 0LL) )
              {
                v100 = isCommandSideEffect;
                v220 = BattleLogicFunction__functionResurrection(
                         v413,
                         (int32_t)v349->fields.logic,
                         funcIdx,
                         funcEnt,
                         dataVals_k__BackingField,
                         isCommandSideEffect,
                         v293);
                goto LABEL_142;
              }
              if ( !FuncList__Check(44, *p_funcType, 0LL) && !FuncList__Check(133, *p_funcType, 0LL) )
              {
                if ( FuncList__Check(45, *p_funcType, 0LL) )
                {
                  BYTE3(v349[9].monitor) = DataVals__GetValue(dataVals_k__BackingField, 0LL) == 1;
                  goto LABEL_130;
                }
                if ( FuncList__Check(46, *p_funcType, 0LL) )
                {
                  v100 = isCommandSideEffect;
                  v224 = action->fields.actorId;
                  v225 = v413;
                  v226 = funcEnt;
                  v227 = funcIdx;
                  v228 = isCommandSideEffect;
                  v231 = 1;
                  v229 = targetId_k__BackingField;
                  v230 = dataVals_k__BackingField;
                  goto LABEL_149;
                }
                if ( FuncList__Check(47, *p_funcType, 0LL) )
                {
                  v303 = action->fields.actorId;
                  v304 = (int32_t)v349->fields.logic;
                  v305 = 9;
                }
                else
                {
                  if ( FuncList__Check(48, *p_funcType, 0LL) )
                  {
                    v249 = BattleLogicFunction__functionGainNpFromTargets(v413, args, action, v347, v306);
                    goto LABEL_169;
                  }
                  if ( FuncList__Check(49, *p_funcType, 0LL) )
                  {
                    v249 = BattleLogicFunction__functionGainHpFromTargets(v413, args, action, v347, v307);
                    goto LABEL_169;
                  }
                  v308 = FuncList__Check(50, *p_funcType, 0LL);
                  if ( v308 || (v308 = FuncList__Check(51, *p_funcType, 0LL)) )
                  {
                    v310 = *p_funcType == 51;
                    if ( *p_funcType == 50 )
                    {
                      v308 = BattleLogicFunction__isSafeDamage(
                               v413,
                               dataVals_k__BackingField,
                               targetId_k__BackingField,
                               v309);
                      v310 = v308;
                    }
                    v311 = action->fields.actorId;
                    overwriteLossHpa = BattleLogicFunction__getHpPerValue(
                                         (BattleLogicFunction_o *)v308,
                                         dataVals_k__BackingField,
                                         (BattleServantData_o *)v349,
                                         v309);
                    v312 = v311;
                    v100 = isCommandSideEffect;
                    v220 = BattleLogicFunction__functionlossHp(
                             v413,
                             v312,
                             targetId_k__BackingField,
                             funcEnt,
                             dataVals_k__BackingField,
                             funcIdx,
                             v310,
                             isCommandSideEffect,
                             overwriteLossHpa,
                             0,
                             action,
                             v393);
                    goto LABEL_142;
                  }
                  if ( FuncList__Check(52, *p_funcType, 0LL) )
                  {
                    v314 = v413;
                    v315 = 1;
                    v316 = dataVals_k__BackingField;
LABEL_247:
                    BattleLogicFunction__UpdateUserEquipSkillChargeTurn(v314, v316, v315, v313);
                    goto LABEL_130;
                  }
                  if ( FuncList__Check(62, *p_funcType, 0LL) )
                  {
                    v314 = v413;
                    v316 = dataVals_k__BackingField;
                    v315 = 0;
                    goto LABEL_247;
                  }
                  if ( FuncList__Check(53, *p_funcType, 0LL) )
                  {
                    v319 = (Generator_BGFromQuickChangeBGFunc_o *)sub_B0D974(
                                                                    Generator_BGFromQuickChangeBGFunc_TypeInfo,
                                                                    v317,
                                                                    v318);
                    Generator_BGFromQuickChangeBGFunc___ctor(v319, dataVals_k__BackingField, 0LL);
                    BattleLogicFunction__FunctionQuickChangeBG(v413, args, (Generator_Background_o *)v319, v320);
                    goto LABEL_130;
                  }
                  if ( FuncList__Check(54, *p_funcType, 0LL) )
                  {
                    this = (BattleLogicFunction_o *)v349[2].fields.buffProgressTurnOpponentList;
                    if ( !this )
                      goto LABEL_418;
                    if ( ServantEntity__isInvalidSkillShift((ServantEntity_o *)this, 0LL) )
                    {
                      v208 = v347->fields._targetId_k__BackingField;
LABEL_228:
                      v100 = isCommandSideEffect;
                      v209 = v413;
LABEL_140:
                      v211 = v100;
                      v210 = funcIdx;
                      v212 = dataVals_k__BackingField;
LABEL_141:
                      v220 = BattleLogicFunction__getNoEffectObject(v209, v208, v210, v212, v211, 0LL, 0LL, v190);
LABEL_142:
                      BattleActionData__addAction(action, v220, 0LL);
                      goto LABEL_110;
                    }
                    Param = DataVals__GetParam(dataVals_k__BackingField, 53, 0, 0LL);
                    BattleLogicFunction__functionShiftServant(v413, action, (BattleServantData_o *)v349, Param, v322);
                    goto LABEL_130;
                  }
                  if ( FuncList__Check(55, *p_funcType, 0LL) )
                  {
                    v303 = action->fields.actorId;
                    v304 = (int32_t)v349->fields.logic;
                    v305 = 10;
                  }
                  else
                  {
                    if ( FuncList__Check(57, *p_funcType, 0LL) )
                    {
                      LODWORD(v349[6].fields.wkStr) = DataVals__GetValue(dataVals_k__BackingField, 0LL);
                      goto LABEL_130;
                    }
                    if ( FuncList__Check(58, *p_funcType, 0LL) )
                    {
                      buffProgressTurnSelfList = (BattleBuffData_o *)v349[8].fields.buffProgressTurnSelfList;
                      this = (BattleLogicFunction_o *)DataVals__GetParam(dataVals_k__BackingField, 14, 0, 0LL);
                      if ( !buffProgressTurnSelfList )
                        goto LABEL_418;
                      BattleBuffData__UpdateForceAllBuffNoAct(buffProgressTurnSelfList, (int32_t)this, 0LL);
LABEL_191:
                      v216 = (int32_t)v349->fields.logic;
LABEL_137:
                      v100 = isCommandSideEffect;
                      FunctionObject = BattleLogicFunction__getFunctionObject(
                                         (BattleLogicFunction_o *)v206,
                                         funcEnt,
                                         v216,
                                         funcIdx,
                                         isCommandSideEffect,
                                         0LL,
                                         v207);
                      v218 = action;
                      v219 = dataVals_k__BackingField;
LABEL_138:
                      BattleActionData__setBuffData(v218, FunctionObject, v219, 0LL);
                      goto LABEL_110;
                    }
                    if ( FuncList__Check(59, *p_funcType, 0LL) )
                    {
                      v326 = (BattleActionData_UpShiftGaugeData_o *)sub_B0D974(
                                                                      BattleActionData_UpShiftGaugeData_TypeInfo,
                                                                      v324,
                                                                      v325);
                      BattleActionData_UpShiftGaugeData___ctor(v326, 0LL);
LABEL_266:
                      BattleLogicFunction__functionBreakGaugeChange(
                        v413,
                        action,
                        funcUnit,
                        (BattleServantData_o *)v349,
                        (BattleActionData_BaseShiftGaugeData_o *)v326,
                        v327);
                      goto LABEL_130;
                    }
                    if ( FuncList__Check(60, *p_funcType, 0LL) )
                    {
                      v326 = (BattleActionData_UpShiftGaugeData_o *)sub_B0D974(
                                                                      BattleActionData_DownShiftGaugeData_TypeInfo,
                                                                      v328,
                                                                      v329);
                      BattleActionData_DownShiftGaugeData___ctor((BattleActionData_DownShiftGaugeData_o *)v326, 0LL);
                      goto LABEL_266;
                    }
                    if ( FuncList__Check(61, *p_funcType, 0LL) )
                    {
                      SubMember = BattleLogicFunction__FunctionMoveToLastSubMember(
                                    v413,
                                    (BattleServantData_o *)v349,
                                    funcEnt,
                                    v330,
                                    funcIdx,
                                    v331);
                      BattleActionData__addAction(action, SubMember, 0LL);
                      BattleActionData__UpdateForceBuffEffectAllTrue(action, 0LL);
LABEL_175:
                      v396[8] = 1;
                      goto LABEL_130;
                    }
                    if ( FuncList__Check(119, *p_funcType, 0LL) )
                    {
                      BattleLogicFunction__functionMovePosition(v413, action, (BattleServantData_o *)v349, v333);
                      goto LABEL_130;
                    }
                    if ( FuncList__Check(120, *p_funcType, 0LL) )
                    {
                      v100 = isCommandSideEffect;
                      BattleLogicFunction__functionRevival(
                        v413,
                        action,
                        funcEnt,
                        dataVals_k__BackingField,
                        funcIdx,
                        isCommandSideEffect,
                        v334);
                      goto LABEL_110;
                    }
                    if ( !FuncList__Check(121, *p_funcType, 0LL) )
                    {
                      if ( FuncList__Check(124, *p_funcType, 0LL) )
                      {
                        BattleLogicFunction__functionMoveState(v413, args, action, v347, v335);
                        goto LABEL_130;
                      }
                      if ( FuncList__Check(125, *p_funcType, 0LL) )
                      {
                        BattleLogicFunction__ChangeBGMCostume(v413, dataVals_k__BackingField, action, v336);
                        goto LABEL_130;
                      }
                      v337 = FuncList__Check(126, *p_funcType, 0LL);
                      if ( v337 )
                      {
                        BattleLogicFunction__LossCommandSpell(
                          (BattleLogicFunction_o *)v337,
                          dataVals_k__BackingField,
                          action,
                          v338);
                        goto LABEL_130;
                      }
                      if ( FuncList__Check(127, *p_funcType, 0LL) )
                        goto LABEL_130;
                      if ( FuncList__Check(128, *p_funcType, 0LL) )
                      {
                        BattleLogicFunction__FunctionUpdateEntryPositions(v413, dataVals_k__BackingField, v339);
                        goto LABEL_130;
                      }
                      if ( FuncList__Check(63, *p_funcType, 0LL) )
                      {
                        BattleLogicFunction__FunctionUpdateEntryMaxCountEachTurn(v413, dataVals_k__BackingField, v340);
                        goto LABEL_130;
                      }
                      if ( FuncList__Check(130, *p_funcType, 0LL) )
                      {
                        BattleLogicFunction__FunctionToFieldAddChangeFieldBuff(
                          v413,
                          args,
                          action,
                          v347,
                          isTreasureDvc,
                          v341);
                        goto LABEL_130;
                      }
                      if ( FuncList__Check(131, *p_funcType, 0LL) )
                      {
                        BattleLogicFunction__FunctionSubFieldBuff(v413, args, action, v347, v342);
                        goto LABEL_130;
                      }
                      if ( FuncList__Check(134, *p_funcType, 0LL) )
                      {
                        this = (BattleLogicFunction_o *)DataVals__GetValue(dataVals_k__BackingField, 0LL);
                        if ( !v413->fields.data )
                          goto LABEL_418;
                        BattleData__AddQuestRouteId(v413->fields.data, (int32_t)this, 0LL);
                        goto LABEL_130;
                      }
                      if ( FuncList__Check(135, *p_funcType, 0LL) )
                      {
                        BattleLogicFunction__FunctionLastSkillCopy(v413, action, dataVals_k__BackingField, args, v343);
                        goto LABEL_130;
                      }
                      if ( FuncList__Check(136, *p_funcType, 0LL) )
                      {
                        v344 = DataVals__GetValue(dataVals_k__BackingField, 0LL);
                        BattleLogicFunction__FunctionChangeEnemyMasterFace(v413, v344, v345);
                        goto LABEL_130;
                      }
                      if ( !FuncList__Check(137, *p_funcType, 0LL) )
                        goto LABEL_130;
                      v268 = action->fields.actorId;
                      v269 = (int32_t)v349->fields.logic;
                      v346 = ((__int64 (__fastcall *)(BattleLogicFunction_o *, void *))v349->klass[1]._1.parent)(
                               v349,
                               v349->klass[1]._1.generic_class) <= 1;
                      v272 = v413;
                      v270 = !v346;
LABEL_182:
                      v273 = v268;
                      v274 = v269;
LABEL_185:
                      v249 = BattleLogicFunction__functionValueDamage(
                               v272,
                               v273,
                               v274,
                               dataVals_k__BackingField,
                               funcIdx,
                               v270,
                               action,
                               v271);
                      goto LABEL_169;
                    }
                    v303 = action->fields.actorId;
                    v304 = (int32_t)v349->fields.logic;
                    v305 = 11;
                  }
                }
                v249 = BattleLogicFunction__functionNPDamage(
                         v413,
                         v303,
                         v304,
                         dataVals_k__BackingField,
                         funcIdx,
                         v305,
                         action,
                         v302);
                goto LABEL_169;
              }
              v294 = funcEnt->fields.vals;
              if ( FuncList__Check(44, funcEnt->fields.funcType, 0LL) )
              {
                SameIndiualityBuffSum = BattleServantData__getSameIndiualityBuffSum(
                                          (BattleServantData_o *)v349,
                                          v294,
                                          1,
                                          0,
                                          0,
                                          0LL);
                goto LABEL_216;
              }
              if ( FuncList__Check(133, *p_funcType, 0LL) )
              {
                SameIndiualityBuffSum = GainNpIndividualSum__GetSameIndiualitySum(
                                          v413->fields.data,
                                          *p_actorId,
                                          (int32_t)v349->fields.logic,
                                          dataVals_k__BackingField,
                                          funcEnt,
                                          0LL);
LABEL_216:
                v296 = SameIndiualityBuffSum;
              }
              else
              {
                v296 = 0;
              }
              v297 = DataVals__GetValue(dataVals_k__BackingField, 0LL) * v296;
              if ( !DataVals__isUnaffected(dataVals_k__BackingField, 0LL) )
                v297 = BattleServantData__getCorrectedValueFuncGainNp((BattleServantData_o *)v349, v297, 0LL);
              isGainNp = BattleServantData__isGainNp((BattleServantData_o *)v349, 1, 0LL);
              if ( v297 < 1 || !isGainNp )
              {
                v208 = (int32_t)v349->fields.logic;
                goto LABEL_228;
              }
              v299 = (BattleLogicFunction_o *)BattleServantData__addNp((BattleServantData_o *)v349, v297, 0, 0LL);
              v300 = (int)v299;
              this = (BattleLogicFunction_o *)BattleLogicFunction__getFunctionObject(
                                                v299,
                                                funcEnt,
                                                (int32_t)v349->fields.logic,
                                                funcIdx,
                                                isCommandSideEffect,
                                                0LL,
                                                v301);
              if ( !this )
                goto LABEL_418;
              v202 = this;
              HIDWORD(this->fields.logic) = 3;
              BattleActionData_BuffData__setSaveNp((BattleActionData_BuffData_o *)this, v300, 0LL);
              if ( isCommandSideEffect )
                BYTE2(v202->fields.wkStr) = 1;
LABEL_128:
              v195 = action;
              v196 = (BattleActionData_BuffData_o *)v202;
              v197 = dataVals_k__BackingField;
LABEL_129:
              BattleActionData__setBuffData(v195, v196, v197, 0LL);
              goto LABEL_130;
            }
            applyTarget = funcEnt->fields.applyTarget;
            if ( applyTarget == 2 )
            {
              v249 = BattleLogicFunction__functionReplaceEnemyMember(
                       v413,
                       v242,
                       dataVals_k__BackingField,
                       funcIdx,
                       v244);
              goto LABEL_169;
            }
            if ( applyTarget == 1 )
            {
              v240 = v413;
              v241 = BattleLogicFunction__functionReplaceMember(
                       v413,
                       targetId_k__BackingField,
                       subTargetId,
                       v243,
                       (DataVals_o *)v244,
                       funcIdx,
                       v245);
              goto LABEL_158;
            }
          }
LABEL_130:
          v100 = isCommandSideEffect;
LABEL_110:
          v185 = &funcEnt->fields.funcType;
LABEL_350:
          this = (BattleLogicFunction_o *)FuncList__isDamage(*v185, 0LL);
          if ( ((unsigned __int8)this & 1) != 0 )
            v365 = 0;
          else
            v365 = -107;
          if ( v365 != -107 && !LOBYTE(v349[9].fields.logictarget) )
          {
            v366 = v349[8].fields.buffProgressTurnSelfList;
            if ( !v366 )
              goto LABEL_418;
            if ( !LOBYTE(v366[3].fields._syncRoot) )
            {
              this = (BattleLogicFunction_o *)v401;
              LOBYTE(v349[9].fields.logictarget) = 1;
              if ( !v401 )
                goto LABEL_418;
              System_Collections_Generic_List_int___Add(
                v401,
                (int32_t)v349->fields.logic,
                (const MethodInfo_2FAFF00 *)Method_System_Collections_Generic_List_int__Add__);
              this = (BattleLogicFunction_o *)v349[8].fields.buffProgressTurnSelfList;
              if ( !this )
                goto LABEL_418;
              v367 = BattleBuffData__UseProgressingDoNotAct(
                       (BattleBuffData_o *)this,
                       (BattleServantData_o *)v349,
                       0,
                       0LL);
              BattleActionData__addSideEffectActionData(action, v367, 1, 0LL);
              v366 = v349[8].fields.buffProgressTurnSelfList;
              if ( !v366 )
                goto LABEL_418;
            }
            LOBYTE(v366[3].fields._syncRoot) = 0;
          }
          BattleLogicFunction_ProcListInArgs__setFuncResult(
            args,
            targetId_k__BackingField,
            action->fields.funcResult,
            dataVals_k__BackingField->fields.funcIndex,
            0LL);
LABEL_362:
          v178 = v177->max_length;
        }
      }
      v93 = ServantData;
      if ( !isCreateSideEffect )
        break;
      v368 = v407;
      if ( !funcEnt )
        goto LABEL_418;
      v369 = FuncList__Check(26, *p_funcType, 0LL);
      v372 = (BattleLogicFunction_AfterAttackSideEffectMakeArgument_o *)sub_B0D974(
                                                                          BattleLogicFunction_AfterAttackSideEffectMakeArgument_TypeInfo,
                                                                          v370,
                                                                          v371);
      BattleLogicFunction_AfterAttackSideEffectMakeArgument___ctor(v372, 0LL);
      if ( !v372 )
        goto LABEL_418;
      Argument__Init = BattleLogicFunction_AfterAttackSideEffectMakeArgument__Init(v372, action, 0LL);
      BattleLogicFunction__setAttackSideEffect(v413, action, ServantData, v369 || isTreasureDvc, Argument__Init, v374);
      this = (BattleLogicFunction_o *)BattleActionData__getDamageTargetIdList(action, 0LL);
      if ( !this )
        goto LABEL_418;
      v130 = v402;
      v377 = this;
      if ( this->fields.logic )
      {
        if ( ServantData == 0LL || !isTreasureDvc )
        {
          v134 = 0LL;
        }
        else
        {
          v134 = (BattleCommandData_o *)sub_B0D974(BattleCommandData_TypeInfo, v375, v376);
          BattleCommandData___ctor(v134, 0LL);
          this = (BattleLogicFunction_o *)BattleServantData__getTreasureDvcCardId(ServantData, 0LL);
          if ( !v134 )
            goto LABEL_418;
          v134->fields._type = (int)this;
          v134->fields.treasureDvc = BattleServantData__getTreasureDvcId(ServantData, 1, 0LL);
        }
        v135 = (UnityEngine_Object_o *)v413->fields.logic;
        if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
        }
        this = (BattleLogicFunction_o *)UnityEngine_Object__op_Inequality(v135, 0LL, 0LL);
        if ( ((unsigned __int8)this & 1) != 0 && (v136 = v377->fields.logic, (int)v136 >= 1) )
        {
          v137 = 0LL;
          do
          {
            if ( v137 >= (unsigned int)v136 )
              goto LABEL_419;
            this = (BattleLogicFunction_o *)v413->fields.logic;
            if ( !this )
              goto LABEL_418;
            this = (BattleLogicFunction_o *)BattleLogic__setDamageSideEffect(
                                              (BattleLogic_o *)this,
                                              action,
                                              action->fields.actorId,
                                              *((_DWORD *)&v377->fields.logictarget + v137),
                                              v134,
                                              0LL);
            LODWORD(v136) = v377->fields.logic;
            ++v137;
          }
          while ( (__int64)v137 < (int)v136 );
          v100 = isCommandSideEffect;
          v93 = ServantData;
        }
        else
        {
          v100 = isCommandSideEffect;
        }
        v130 = v402;
      }
LABEL_372:
      v131 = v130->max_length;
      v133 = v368 + 1;
      if ( v133 >= v131 )
        goto LABEL_375;
    }
    v130 = v402;
LABEL_371:
    v368 = v407;
    goto LABEL_372;
  }
  *(_QWORD *)&v396[4] = 0LL;
LABEL_375:
  this = (BattleLogicFunction_o *)BattleLogicFunction_ProcListInArgs__get_CheckDuplicateFunc(args, 0LL);
  if ( !this )
    goto LABEL_418;
  ((void (__fastcall *)(BattleLogicFunction_o *, void *))this->klass[1]._1.namespaze)(
    this,
    this->klass[1]._1.byval_arg.data);
  if ( (v396[4] & 1) != 0 )
  {
    this = (BattleLogicFunction_o *)v413->fields.data;
    if ( !this )
      goto LABEL_418;
    this = (BattleLogicFunction_o *)BattleData__getServantData((BattleData_o *)this, *p_actorId, 0LL);
    if ( !this )
      goto LABEL_418;
    BattleServantData__resetAccumulationDamage((BattleServantData_o *)this, 0LL);
  }
  if ( BattleActionData__checkSummonServantList(action, 0LL) )
  {
    v378 = (UnityEngine_Object_o *)v413->fields.logic;
    if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    }
    if ( UnityEngine_Object__op_Inequality(v378, 0LL, 0LL) )
    {
      this = (BattleLogicFunction_o *)BattleActionData__getSummonServant(action, -1, 0LL);
      if ( !this )
        goto LABEL_418;
      v379 = (int)this->fields.logic;
      v380 = this;
      if ( v379 >= 1 )
      {
        v381 = 0;
        while ( v381 < v379 )
        {
          v382 = *((_QWORD *)&v380->fields.logictarget + (int)v381);
          if ( !v382 )
            goto LABEL_418;
          this = (BattleLogicFunction_o *)v413->fields.logic;
          if ( !this )
            goto LABEL_418;
          BattleLogic__actEnemyPassiveSkill((BattleLogic_o *)this, *(_DWORD *)(v382 + 28), 0LL);
          v379 = (int)v380->fields.logic;
          if ( (int)++v381 >= v379 )
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
      v413,
      action,
      v93,
      FuncSideEffectArg->klass[1]._1.image);
  if ( isBuffUpdate )
  {
    v384 = (UnityEngine_Object_o *)v413->fields.logic;
    if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    }
    if ( UnityEngine_Object__op_Inequality(v384, 0LL, 0LL) )
    {
      this = (BattleLogicFunction_o *)v413->fields.logic;
      if ( !this )
        goto LABEL_418;
      BattleLogic__checkUsedBuff((BattleLogic_o *)this, 0LL);
      v385 = v413->fields.data;
      if ( !v385 )
        goto LABEL_418;
      this = (BattleLogicFunction_o *)v385->fields._FieldEnvData_k__BackingField;
      if ( !this )
        goto LABEL_418;
      BattleFieldEnvironmentData__CheckUsedBuff((BattleFieldEnvironmentData_o *)this, 0LL);
    }
  }
  if ( (v396[8] & 1) != 0 || args->fields.updateField )
  {
    v386 = (UnityEngine_Object_o *)v413->fields.logic;
    if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    }
    if ( UnityEngine_Object__op_Inequality(v386, 0LL, 0LL) )
    {
      this = (BattleLogicFunction_o *)v413->fields.logic;
      if ( !this )
        goto LABEL_418;
      BattleLogic__updateFieldBuff((BattleLogic_o *)this, 0LL);
    }
  }
  this = (BattleLogicFunction_o *)v401;
  if ( !v401 )
LABEL_418:
    sub_B0D97C(this);
  System_Collections_Generic_List_int___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v414,
    v401,
    (const MethodInfo_2FB0D44 *)Method_System_Collections_Generic_List_int__GetEnumerator__);
  v415 = v414;
  while ( System_Collections_Generic_List_Enumerator_int___MoveNext(
            &v415,
            (const MethodInfo_210FFE4 *)Method_System_Collections_Generic_List_Enumerator_int__MoveNext__) )
  {
    v387 = v413->fields.data;
    if ( !v387 )
      sub_B0D97C(0LL);
    v388 = BattleData__getServantData(v387, v415.fields.current, 0LL);
    if ( v388 )
      v388->fields.isTDLimitCount = 0;
  }
  System_Collections_Generic_List_Enumerator_int___Dispose(
    &v415,
    (const MethodInfo_210FFE0 *)Method_System_Collections_Generic_List_Enumerator_int__Dispose__);
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
  __int64 v19; // x1
  __int64 v20; // x2
  BattleCommandData_o *v21; // x23
  BattleLogicFunction_AttackSideEffectFunctionArgument_o *v22; // x24
  __int64 v23; // x1
  __int64 v24; // x2
  System_Collections_Generic_IEnumerable_TSource__o *SideEffectList_k__BackingField; // x25
  BattleLogicFunction___c_c *v26; // x0
  struct BattleLogicFunction___c_StaticFields *static_fields; // x8
  System_Func_BattleLogicBuff_ReduceHpProcess_BuffInfo__int__o *_9__50_0; // x26
  Il2CppObject *v29; // x27
  struct BattleLogicFunction___c_StaticFields *v30; // x0
  System_String_array **v31; // x2
  System_String_array **v32; // x3
  System_Boolean_array **v33; // x4
  System_Int32_array **v34; // x5
  System_Int32_array *v35; // x6
  System_Int32_array *v36; // x7
  System_Collections_Generic_IEnumerable_TSource__o *v37; // x0
  __int64 v38; // x25
  BattleLogicFunction_SideEffectMakeArgument_o *v39; // x0
  const MethodInfo *v40; // x6
  const MethodInfo *v41; // x6
  __int64 v42; // x0

  v10 = this;
  if ( (byte_4217018 & 1) == 0 )
  {
    sub_B0D8A4(&BattleLogicFunction_AttackSideEffectFunctionArgument_TypeInfo, mainAction);
    sub_B0D8A4(&BattleCommandData_TypeInfo, v11);
    sub_B0D8A4(&Method_System_Linq_Enumerable_Select_BattleActionData_SideEffectData__int___, v12);
    sub_B0D8A4(&Method_System_Linq_Enumerable_ToArray_int___, v13);
    sub_B0D8A4(&Method_System_Func_BattleActionData_SideEffectData__int___ctor__, v14);
    sub_B0D8A4(&System_Func_BattleActionData_SideEffectData__int__TypeInfo, v15);
    sub_B0D8A4(&int___TypeInfo, v16);
    sub_B0D8A4(&Method_BattleLogicFunction___c__setAttackSideEffect_b__50_0__, v17);
    this = (BattleLogicFunction_o *)sub_B0D8A4(&BattleLogicFunction___c_TypeInfo, v18);
    byte_4217018 = 1;
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
      v21 = (BattleCommandData_o *)sub_B0D974(BattleCommandData_TypeInfo, v19, v20);
      BattleCommandData___ctor(v21, 0LL);
      this = (BattleLogicFunction_o *)BattleServantData__getTreasureDvcCardId(actionSvtData, 0LL);
      if ( !v21 )
        goto LABEL_24;
      v21->fields._type = (int)this;
      v21->fields.treasureDvc = BattleServantData__getTreasureDvcId(actionSvtData, 1, 0LL);
    }
    else
    {
      v21 = 0LL;
    }
    v22 = (BattleLogicFunction_AttackSideEffectFunctionArgument_o *)sub_B0D974(
                                                                      BattleLogicFunction_AttackSideEffectFunctionArgument_TypeInfo,
                                                                      v19,
                                                                      v20);
    BattleLogicFunction_AttackSideEffectFunctionArgument___ctor(v22, 0LL);
    SideEffectList_k__BackingField = (System_Collections_Generic_IEnumerable_TSource__o *)attackArg->fields._SideEffectList_k__BackingField;
    v26 = BattleLogicFunction___c_TypeInfo;
    if ( (BYTE3(BattleLogicFunction___c_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !BattleLogicFunction___c_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(BattleLogicFunction___c_TypeInfo);
      v26 = BattleLogicFunction___c_TypeInfo;
    }
    static_fields = v26->static_fields;
    _9__50_0 = (System_Func_BattleLogicBuff_ReduceHpProcess_BuffInfo__int__o *)static_fields->__9__50_0;
    if ( !_9__50_0 )
    {
      if ( (BYTE3(v26->vtable._0_Equals.methodPtr) & 4) != 0 && !v26->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(v26);
        static_fields = BattleLogicFunction___c_TypeInfo->static_fields;
      }
      v29 = (Il2CppObject *)static_fields->__9;
      _9__50_0 = (System_Func_BattleLogicBuff_ReduceHpProcess_BuffInfo__int__o *)sub_B0D974(
                                                                                   System_Func_BattleActionData_SideEffectData__int__TypeInfo,
                                                                                   v23,
                                                                                   v24);
      System_Func_BattleLogicBuff_ReduceHpProcess_BuffInfo__int____ctor(
        _9__50_0,
        v29,
        Method_BattleLogicFunction___c__setAttackSideEffect_b__50_0__,
        (const MethodInfo_2619564 *)Method_System_Func_BattleActionData_SideEffectData__int___ctor__);
      v30 = BattleLogicFunction___c_TypeInfo->static_fields;
      v30->__9__50_0 = (struct System_Func_BattleActionData_SideEffectData__int__o *)_9__50_0;
      sub_B0D840(
        (BattleServantConfConponent_o *)&v30->__9__50_0,
        (System_Int32_array **)_9__50_0,
        v31,
        v32,
        v33,
        v34,
        v35,
        v36);
    }
    v37 = (System_Collections_Generic_IEnumerable_TSource__o *)System_Linq_Enumerable__Select_BattleLogicBuff_ReduceHpProcess_BuffInfo__int_(
                                                                 SideEffectList_k__BackingField,
                                                                 (System_Func_TSource__TResult__o *)_9__50_0,
                                                                 (const MethodInfo_1B51AB4 *)Method_System_Linq_Enumerable_Select_BattleActionData_SideEffectData__int___);
    this = (BattleLogicFunction_o *)System_Linq_Enumerable__ToArray_int_(
                                      v37,
                                      (const MethodInfo_1B560F0 *)Method_System_Linq_Enumerable_ToArray_int___);
    if ( mainAction )
    {
      BattleActionData__SetFirstAtkMainTargetId(mainAction, (System_Int32_array *)this, 0LL);
      v38 = ((__int64 (__fastcall *)(BattleLogicFunction_SideEffectMakeArgument_o *, const char *))attackArg->klass[1]._1.gc_desc)(
              attackArg,
              attackArg->klass[1]._1.name);
      this = (BattleLogicFunction_o *)sub_B0D8BC(int___TypeInfo, 1LL);
      if ( this )
      {
        if ( !LODWORD(this->fields.logic) )
        {
          v42 = sub_B0D9A8(this);
          sub_B0D948(v42, 0LL);
        }
        LODWORD(this->fields.logictarget) = mainAction->fields._FirstAtkMainTargetId_k__BackingField;
        if ( v38 )
        {
          v39 = (BattleLogicFunction_SideEffectMakeArgument_o *)(*(__int64 (__fastcall **)(__int64, BattleLogicFunction_o *, _QWORD))(*(_QWORD *)v38 + 408LL))(
                                                                  v38,
                                                                  this,
                                                                  *(_QWORD *)(*(_QWORD *)v38 + 416LL));
          BattleLogicFunction__SetTargetAttackSideEffect(v10, v22, mainAction, actionSvtData, v21, v39, v40);
          BattleLogicFunction__SetTargetAttackSideEffect(v10, v22, mainAction, actionSvtData, v21, attackArg, v41);
          return;
        }
      }
    }
LABEL_24:
    sub_B0D97C(this);
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
    sub_B0D97C(this);
  DamageAttackSideEffectList = BattleActionData__getDamageAttackSideEffectList(mainAction, 0LL);
  this->fields._SideEffectList_k__BackingField = DamageAttackSideEffectList;
  sub_B0D840(
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
  __int64 v2; // x2
  BattleLogicFunction_SideEffectMakeArgument_o *v3; // x19
  const MethodInfo *v4; // x1

  if ( (byte_4213B96 & 1) == 0 )
  {
    sub_B0D8A4(&BattleLogicFunction_AfterMainAttackSideEffectMakeArgument_TypeInfo, method);
    byte_4213B96 = 1;
  }
  v3 = (BattleLogicFunction_SideEffectMakeArgument_o *)sub_B0D974(
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
  sub_B0D840(
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
  __int64 v3; // x1
  __int64 v4; // x2
  __int64 v5; // x20
  const MethodInfo *v6; // x1
  System_String_array **v7; // x2
  System_String_array **v8; // x3
  System_Boolean_array **v9; // x4
  System_Int32_array **v10; // x5
  System_Int32_array *v11; // x6
  System_Int32_array *v12; // x7
  System_String_array **v13; // x2
  System_String_array **v14; // x3
  System_Boolean_array **v15; // x4
  System_Int32_array **v16; // x5
  System_Int32_array *v17; // x6
  System_Int32_array *v18; // x7

  if ( (byte_4213B97 & 1) == 0 )
  {
    sub_B0D8A4(&BattleLogicFunction_AttackSideEffectCheckDuplicateFunction_TypeInfo, method);
    byte_4213B97 = 1;
  }
  BattleLogicFunction_CommonSideEffectFunctionArgument___ctor(
    (BattleLogicFunction_CommonSideEffectFunctionArgument_o *)this,
    method);
  v5 = sub_B0D974(BattleLogicFunction_AttackSideEffectCheckDuplicateFunction_TypeInfo, v3, v4);
  BattleLogicFunction_CommonCheckDuplicateFunction___ctor((BattleLogicFunction_CommonCheckDuplicateFunction_o *)v5, v6);
  *(_QWORD *)(v5 + 24) = this;
  sub_B0D840((BattleServantConfConponent_o *)(v5 + 24), (System_Int32_array **)this, v7, v8, v9, v10, v11, v12);
  this->fields.checkDuplicate = (struct BattleLogicFunction_CheckDuplicateFunction_o *)v5;
  sub_B0D840(
    (BattleServantConfConponent_o *)&this->fields.checkDuplicate,
    (System_Int32_array **)v5,
    v13,
    v14,
    v15,
    v16,
    v17,
    v18);
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
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v5; // x20
  System_String_array **v6; // x2
  System_String_array **v7; // x3
  System_Boolean_array **v8; // x4
  System_Int32_array **v9; // x5
  System_Int32_array *v10; // x6
  System_Int32_array *v11; // x7

  if ( (byte_4213B9C & 1) == 0 )
  {
    sub_B0D8A4(&Method_System_Collections_Generic_List_BattleLogicFunction_ExecutedFunctionData___ctor__, method);
    sub_B0D8A4(&System_Collections_Generic_List_BattleLogicFunction_ExecutedFunctionData__TypeInfo, v4);
    byte_4213B9C = 1;
  }
  v5 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B0D974(
                                                                                                 System_Collections_Generic_List_BattleLogicFunction_ExecutedFunctionData__TypeInfo,
                                                                                                 method,
                                                                                                 v2);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v5,
    (const MethodInfo_2FC4A24 *)Method_System_Collections_Generic_List_BattleLogicFunction_ExecutedFunctionData___ctor__);
  this->fields.executedFuncList = (struct System_Collections_Generic_List_BattleLogicFunction_ExecutedFunctionData__o *)v5;
  sub_B0D840((BattleServantConfConponent_o *)&this->fields, (System_Int32_array **)v5, v6, v7, v8, v9, v10, v11);
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
  if ( (byte_4213B98 & 1) == 0 )
  {
    sub_B0D8A4(&Method_System_Collections_Generic_List_BattleLogicFunction_ExecutedFunctionData__get_Count__, method);
    this = (BattleLogicFunction_CommonCheckDuplicateFunction_o *)sub_B0D8A4(
                                                                   &Method_System_Collections_Generic_List_BattleLogicFunction_ExecutedFunctionData__get_Item__,
                                                                   v3);
    byte_4213B98 = 1;
  }
  executedFuncList = v2->fields.executedFuncList;
  if ( !executedFuncList )
LABEL_10:
    sub_B0D97C(this);
  v5 = 0LL;
  while ( 1 )
  {
    size = executedFuncList->fields._size;
    if ( (int)v5 >= size )
      break;
    if ( size <= (unsigned int)v5 )
      System_ThrowHelper__ThrowArgumentOutOfRangeException_41496008(0LL);
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
    sub_B0D97C(this);
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
  System_String_array **v11; // x2
  System_String_array **v12; // x3
  System_Boolean_array **v13; // x4
  System_Int32_array **v14; // x5
  System_Int32_array *v15; // x6
  System_Int32_array *v16; // x7
  struct System_Collections_Generic_List_BattleLogicFunction_ExecutedFunctionData__o *executedFuncList; // x19
  __int64 v18; // x1
  __int64 v19; // x2
  System_Predicate_peRenderTexture_ChangeLayerObject__o *v20; // x20

  if ( (byte_4213B9A & 1) == 0 )
  {
    sub_B0D8A4(&Method_System_Collections_Generic_List_BattleLogicFunction_ExecutedFunctionData__FindIndex__, vals);
    sub_B0D8A4(&Method_System_Predicate_BattleLogicFunction_ExecutedFunctionData___ctor__, v5);
    sub_B0D8A4(&System_Predicate_BattleLogicFunction_ExecutedFunctionData__TypeInfo, v6);
    sub_B0D8A4(
      &Method_BattleLogicFunction_CommonCheckDuplicateFunction___c__DisplayClass7_0__isExecutedFunction_b__0__,
      v7);
    sub_B0D8A4(&BattleLogicFunction_CommonCheckDuplicateFunction___c__DisplayClass7_0_TypeInfo, v8);
    byte_4213B9A = 1;
  }
  v9 = sub_B0D974(BattleLogicFunction_CommonCheckDuplicateFunction___c__DisplayClass7_0_TypeInfo, vals, method);
  BattleLogicFunction_CommonCheckDuplicateFunction___c__DisplayClass7_0___ctor(
    (BattleLogicFunction_CommonCheckDuplicateFunction___c__DisplayClass7_0_o *)v9,
    0LL);
  if ( !v9
    || (*(_QWORD *)(v9 + 16) = vals,
        sub_B0D840((BattleServantConfConponent_o *)(v9 + 16), (System_Int32_array **)vals, v11, v12, v13, v14, v15, v16),
        executedFuncList = this->fields.executedFuncList,
        v20 = (System_Predicate_peRenderTexture_ChangeLayerObject__o *)sub_B0D974(
                                                                         System_Predicate_BattleLogicFunction_ExecutedFunctionData__TypeInfo,
                                                                         v18,
                                                                         v19),
        System_Predicate_peRenderTexture_ChangeLayerObject____ctor(
          v20,
          (Il2CppObject *)v9,
          Method_BattleLogicFunction_CommonCheckDuplicateFunction___c__DisplayClass7_0__isExecutedFunction_b__0__,
          (const MethodInfo_2AF7E30 *)Method_System_Predicate_BattleLogicFunction_ExecutedFunctionData___ctor__),
        !executedFuncList) )
  {
    sub_B0D97C(v10);
  }
  return System_Collections_Generic_List_SimpleAnimationPlayable_StateInfo___FindIndex(
           (System_Collections_Generic_List_SimpleAnimationPlayable_StateInfo__o *)executedFuncList,
           (System_Predicate_T__o *)v20,
           (const MethodInfo_2FC6194 *)Method_System_Collections_Generic_List_BattleLogicFunction_ExecutedFunctionData__FindIndex__) >= 0;
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
  __int64 v10; // x1
  __int64 v11; // x22
  __int64 v12; // x0
  System_String_array **v13; // x2
  System_String_array **v14; // x3
  System_Boolean_array **v15; // x4
  System_Int32_array **v16; // x5
  System_Int32_array *v17; // x6
  System_Int32_array *v18; // x7
  struct System_Collections_Generic_List_BattleLogicFunction_ExecutedFunctionData__o *executedFuncList; // x19
  __int64 v20; // x1
  __int64 v21; // x2
  System_Predicate_peRenderTexture_ChangeLayerObject__o *v22; // x20

  if ( (byte_4213B9B & 1) == 0 )
  {
    sub_B0D8A4(&Method_System_Collections_Generic_List_BattleLogicFunction_ExecutedFunctionData__FindIndex__, vals);
    sub_B0D8A4(&Method_System_Predicate_BattleLogicFunction_ExecutedFunctionData___ctor__, v7);
    sub_B0D8A4(&System_Predicate_BattleLogicFunction_ExecutedFunctionData__TypeInfo, v8);
    sub_B0D8A4(
      &Method_BattleLogicFunction_CommonCheckDuplicateFunction___c__DisplayClass8_0__isExecutedTarget_b__0__,
      v9);
    sub_B0D8A4(&BattleLogicFunction_CommonCheckDuplicateFunction___c__DisplayClass8_0_TypeInfo, v10);
    byte_4213B9B = 1;
  }
  v11 = sub_B0D974(
          BattleLogicFunction_CommonCheckDuplicateFunction___c__DisplayClass8_0_TypeInfo,
          vals,
          *(_QWORD *)&targetId);
  BattleLogicFunction_CommonCheckDuplicateFunction___c__DisplayClass8_0___ctor(
    (BattleLogicFunction_CommonCheckDuplicateFunction___c__DisplayClass8_0_o *)v11,
    0LL);
  if ( !v11
    || (*(_QWORD *)(v11 + 16) = vals,
        sub_B0D840(
          (BattleServantConfConponent_o *)(v11 + 16),
          (System_Int32_array **)vals,
          v13,
          v14,
          v15,
          v16,
          v17,
          v18),
        *(_DWORD *)(v11 + 24) = targetId,
        executedFuncList = this->fields.executedFuncList,
        v22 = (System_Predicate_peRenderTexture_ChangeLayerObject__o *)sub_B0D974(
                                                                         System_Predicate_BattleLogicFunction_ExecutedFunctionData__TypeInfo,
                                                                         v20,
                                                                         v21),
        System_Predicate_peRenderTexture_ChangeLayerObject____ctor(
          v22,
          (Il2CppObject *)v11,
          Method_BattleLogicFunction_CommonCheckDuplicateFunction___c__DisplayClass8_0__isExecutedTarget_b__0__,
          (const MethodInfo_2AF7E30 *)Method_System_Predicate_BattleLogicFunction_ExecutedFunctionData___ctor__),
        !executedFuncList) )
  {
    sub_B0D97C(v12);
  }
  return System_Collections_Generic_List_SimpleAnimationPlayable_StateInfo___FindIndex(
           (System_Collections_Generic_List_SimpleAnimationPlayable_StateInfo__o *)executedFuncList,
           (System_Predicate_T__o *)v22,
           (const MethodInfo_2FC6194 *)Method_System_Collections_Generic_List_BattleLogicFunction_ExecutedFunctionData__FindIndex__) >= 0;
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
    sub_B0D97C(this);
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
  System_String_array **v16; // x2
  System_String_array **v17; // x3
  System_Boolean_array **v18; // x4
  System_Int32_array **v19; // x5
  System_Int32_array *v20; // x6
  System_Int32_array *v21; // x7
  __int64 v22; // x1
  __int64 v23; // x2
  unsigned __int64 v24; // x26
  __int64 v25; // x22
  System_String_array **v26; // x2
  System_String_array **v27; // x3
  System_Boolean_array **v28; // x4
  System_Int32_array **v29; // x5
  System_Int32_array *v30; // x6
  System_Int32_array *v31; // x7
  __int64 v32; // x23
  __int64 v33; // x0
  __int64 v34; // x1
  __int64 v35; // x2
  struct System_Collections_Generic_List_BattleLogicFunction_ExecutedFunctionData__o *executedFuncList; // x24
  System_Predicate_peRenderTexture_ChangeLayerObject__o *v37; // x25
  DataVals_o *v38; // x24
  struct System_Collections_Generic_List_BattleLogicFunction_ExecutedFunctionData__o *v39; // x23
  int32_t v40; // w25
  BattleLogicFunction_ExecutedFunctionData_o *v41; // x22
  const MethodInfo *v42; // x3
  __int64 v43; // x0

  if ( (byte_4213B99 & 1) == 0 )
  {
    sub_B0D8A4(&BattleLogicFunction_ExecutedFunctionData_TypeInfo, vals);
    sub_B0D8A4(&Method_System_Collections_Generic_List_BattleLogicFunction_ExecutedFunctionData__Add__, v7);
    sub_B0D8A4(&Method_System_Collections_Generic_List_BattleLogicFunction_ExecutedFunctionData__FindIndex__, v8);
    sub_B0D8A4(&Method_System_Predicate_BattleLogicFunction_ExecutedFunctionData___ctor__, v9);
    sub_B0D8A4(&System_Predicate_BattleLogicFunction_ExecutedFunctionData__TypeInfo, v10);
    sub_B0D8A4(&BattleLogicFunction_CommonCheckDuplicateFunction___c__DisplayClass5_0_TypeInfo, v11);
    sub_B0D8A4(
      &Method_BattleLogicFunction_CommonCheckDuplicateFunction___c__DisplayClass5_1__saveExecutedFunction_b__0__,
      v12);
    sub_B0D8A4(&BattleLogicFunction_CommonCheckDuplicateFunction___c__DisplayClass5_1_TypeInfo, v13);
    byte_4213B99 = 1;
  }
  v14 = sub_B0D974(BattleLogicFunction_CommonCheckDuplicateFunction___c__DisplayClass5_0_TypeInfo, vals, targetIds);
  BattleLogicFunction_CommonCheckDuplicateFunction___c__DisplayClass5_0___ctor(
    (BattleLogicFunction_CommonCheckDuplicateFunction___c__DisplayClass5_0_o *)v14,
    0LL);
  if ( !v14 )
    goto LABEL_16;
  *(_QWORD *)(v14 + 16) = vals;
  sub_B0D840((BattleServantConfConponent_o *)(v14 + 16), (System_Int32_array **)vals, v16, v17, v18, v19, v20, v21);
  if ( !targetIds )
    goto LABEL_16;
  if ( (int)targetIds->max_length >= 1 )
  {
    v24 = 0LL;
    while ( 1 )
    {
      v25 = sub_B0D974(BattleLogicFunction_CommonCheckDuplicateFunction___c__DisplayClass5_1_TypeInfo, v22, v23);
      BattleLogicFunction_CommonCheckDuplicateFunction___c__DisplayClass5_1___ctor(
        (BattleLogicFunction_CommonCheckDuplicateFunction___c__DisplayClass5_1_o *)v25,
        0LL);
      if ( !v25 )
        break;
      *(_QWORD *)(v25 + 24) = v14;
      v32 = v25 + 24;
      sub_B0D840((BattleServantConfConponent_o *)(v25 + 24), (System_Int32_array **)v14, v26, v27, v28, v29, v30, v31);
      if ( v24 >= targetIds->max_length )
      {
        v43 = sub_B0D9A8(v33);
        sub_B0D948(v43, 0LL);
      }
      *(_DWORD *)(v25 + 16) = targetIds->m_Items[v24 + 1];
      executedFuncList = this->fields.executedFuncList;
      v37 = (System_Predicate_peRenderTexture_ChangeLayerObject__o *)sub_B0D974(
                                                                       System_Predicate_BattleLogicFunction_ExecutedFunctionData__TypeInfo,
                                                                       v34,
                                                                       v35);
      System_Predicate_peRenderTexture_ChangeLayerObject____ctor(
        v37,
        (Il2CppObject *)v25,
        Method_BattleLogicFunction_CommonCheckDuplicateFunction___c__DisplayClass5_1__saveExecutedFunction_b__0__,
        (const MethodInfo_2AF7E30 *)Method_System_Predicate_BattleLogicFunction_ExecutedFunctionData___ctor__);
      if ( !executedFuncList )
        break;
      Index = System_Collections_Generic_List_SimpleAnimationPlayable_StateInfo___FindIndex(
                (System_Collections_Generic_List_SimpleAnimationPlayable_StateInfo__o *)executedFuncList,
                (System_Predicate_T__o *)v37,
                (const MethodInfo_2FC6194 *)Method_System_Collections_Generic_List_BattleLogicFunction_ExecutedFunctionData__FindIndex__);
      if ( (Index & 0x80000000) != 0 )
      {
        if ( !*(_QWORD *)v32 )
          break;
        v38 = *(DataVals_o **)(*(_QWORD *)v32 + 16LL);
        v39 = this->fields.executedFuncList;
        v40 = *(_DWORD *)(v25 + 16);
        v41 = (BattleLogicFunction_ExecutedFunctionData_o *)sub_B0D974(
                                                              BattleLogicFunction_ExecutedFunctionData_TypeInfo,
                                                              v22,
                                                              v23);
        BattleLogicFunction_ExecutedFunctionData___ctor(v41, v38, v40, v42);
        if ( !v39 )
          break;
        System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
          (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)v39,
          (EventMissionProgressRequest_Argument_ProgressData_o *)v41,
          (const MethodInfo_2FC56E8 *)Method_System_Collections_Generic_List_BattleLogicFunction_ExecutedFunctionData__Add__);
      }
      if ( (__int64)++v24 >= (int)targetIds->max_length )
        return;
    }
LABEL_16:
    sub_B0D97C(Index);
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
    sub_B0D97C(this);
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
    sub_B0D97C(this);
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
    sub_B0D97C(this);
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
  sub_B0D840(
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
    sub_B0D97C(0LL);
  v4 = BattleLogicFunction_CommonSideEffectFunctionArgument__getCheckBuffFuncList(argument, method);
  this->fields.executedFuncList = v4;
  sub_B0D840((BattleServantConfConponent_o *)&this->fields, (System_Int32_array **)v4, v5, v6, v7, v8, v9, v10);
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
    sub_B0D97C(this);
  if ( !targetIds->max_length )
  {
    v5 = sub_B0D9A8(this);
    sub_B0D948(v5, 0LL);
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
  __int64 v2; // x2
  __int64 v4; // x1
  System_Collections_Generic_Dictionary_int__WarBoardEvalValueSquare_EvalValueSquare__o *v5; // x20
  System_String_array **v6; // x2
  System_String_array **v7; // x3
  System_Boolean_array **v8; // x4
  System_Int32_array **v9; // x5
  System_Int32_array *v10; // x6
  System_Int32_array *v11; // x7
  const MethodInfo *v12; // x1

  if ( (byte_4213B9E & 1) == 0 )
  {
    sub_B0D8A4(
      &Method_System_Collections_Generic_Dictionary_int__List_BattleLogicFunction_ExecutedFunctionData____ctor__,
      method);
    sub_B0D8A4(&System_Collections_Generic_Dictionary_int__List_BattleLogicFunction_ExecutedFunctionData___TypeInfo, v4);
    byte_4213B9E = 1;
  }
  this->fields.buffUniqueId = -1;
  v5 = (System_Collections_Generic_Dictionary_int__WarBoardEvalValueSquare_EvalValueSquare__o *)sub_B0D974(
                                                                                                  System_Collections_Generic_Dictionary_int__List_BattleLogicFunction_ExecutedFunctionData___TypeInfo,
                                                                                                  method,
                                                                                                  v2);
  System_Collections_Generic_Dictionary_int__WarBoardEvalValueSquare_EvalValueSquare____ctor(
    v5,
    (const MethodInfo_2E8F874 *)Method_System_Collections_Generic_Dictionary_int__List_BattleLogicFunction_ExecutedFunctionData____ctor__);
  this->fields.executedBuffFuncDic = (struct System_Collections_Generic_Dictionary_int__List_BattleLogicFunction_ExecutedFunctionData___o *)v5;
  sub_B0D840(
    (BattleServantConfConponent_o *)&this->fields.executedBuffFuncDic,
    (System_Int32_array **)v5,
    v6,
    v7,
    v8,
    v9,
    v10,
    v11);
  BattleLogicFunction_FunctionArgument___ctor((BattleLogicFunction_FunctionArgument_o *)this, v12);
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
  __int64 v8; // x1
  __int64 v9; // x2
  struct System_Collections_Generic_Dictionary_int__List_BattleLogicFunction_ExecutedFunctionData___o *v10; // x20
  int32_t buffUniqueId; // w21
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v12; // x22

  if ( (byte_4213B9D & 1) == 0 )
  {
    sub_B0D8A4(
      &Method_System_Collections_Generic_Dictionary_int__List_BattleLogicFunction_ExecutedFunctionData___ContainsKey__,
      method);
    sub_B0D8A4(
      &Method_System_Collections_Generic_Dictionary_int__List_BattleLogicFunction_ExecutedFunctionData___get_Item__,
      v3);
    sub_B0D8A4(
      &Method_System_Collections_Generic_Dictionary_int__List_BattleLogicFunction_ExecutedFunctionData___set_Item__,
      v4);
    sub_B0D8A4(&Method_System_Collections_Generic_List_BattleLogicFunction_ExecutedFunctionData___ctor__, v5);
    sub_B0D8A4(&System_Collections_Generic_List_BattleLogicFunction_ExecutedFunctionData__TypeInfo, v6);
    byte_4213B9D = 1;
  }
  executedBuffFuncDic = this->fields.executedBuffFuncDic;
  if ( !executedBuffFuncDic )
    goto LABEL_9;
  if ( !System_Collections_Generic_Dictionary_int__WarBoardAIRoute_RouteData___ContainsKey(
          (System_Collections_Generic_Dictionary_int__WarBoardAIRoute_RouteData__o *)executedBuffFuncDic,
          this->fields.buffUniqueId,
          (const MethodInfo_2E9069C *)Method_System_Collections_Generic_Dictionary_int__List_BattleLogicFunction_ExecutedFunctionData___ContainsKey__) )
  {
    v10 = this->fields.executedBuffFuncDic;
    buffUniqueId = this->fields.buffUniqueId;
    v12 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B0D974(
                                                                                                    System_Collections_Generic_List_BattleLogicFunction_ExecutedFunctionData__TypeInfo,
                                                                                                    v8,
                                                                                                    v9);
    System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
      v12,
      (const MethodInfo_2FC4A24 *)Method_System_Collections_Generic_List_BattleLogicFunction_ExecutedFunctionData___ctor__);
    if ( !v10 )
      goto LABEL_9;
    System_Collections_Generic_Dictionary_int__WarBoardAIRoute_RouteData___set_Item(
      (System_Collections_Generic_Dictionary_int__WarBoardAIRoute_RouteData__o *)v10,
      buffUniqueId,
      (WarBoardAIRoute_RouteData_o *)v12,
      (const MethodInfo_2E90400 *)Method_System_Collections_Generic_Dictionary_int__List_BattleLogicFunction_ExecutedFunctionData___set_Item__);
  }
  executedBuffFuncDic = this->fields.executedBuffFuncDic;
  if ( !executedBuffFuncDic )
LABEL_9:
    sub_B0D97C(executedBuffFuncDic);
  return (System_Collections_Generic_List_BattleLogicFunction_ExecutedFunctionData__o *)System_Collections_Generic_Dictionary_int__WarBoardEvalValueSquare_EvalValueSquare___get_Item(
                                                                                          (System_Collections_Generic_Dictionary_int__WarBoardEvalValueSquare_EvalValueSquare__o *)executedBuffFuncDic,
                                                                                          this->fields.buffUniqueId,
                                                                                          (const MethodInfo_2E90364 *)Method_System_Collections_Generic_Dictionary_int__List_BattleLogicFunction_ExecutedFunctionData___get_Item__);
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
    sub_B0D97C(v7);
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
    sub_B0D97C(this);
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
  System_String_array **v7; // x2
  System_String_array **v8; // x3
  System_Boolean_array **v9; // x4
  System_Int32_array **v10; // x5
  System_Int32_array *v11; // x6
  System_Int32_array *v12; // x7
  const MethodInfo *v13; // x1
  __int64 v14; // x1
  __int64 v15; // x2
  __int64 v16; // x20
  const MethodInfo *v17; // x1
  System_String_array **v18; // x2
  System_String_array **v19; // x3
  System_Boolean_array **v20; // x4
  System_Int32_array **v21; // x5
  System_Int32_array *v22; // x6
  System_Int32_array *v23; // x7
  System_String_array **v24; // x2
  System_String_array **v25; // x3
  System_Boolean_array **v26; // x4
  System_Int32_array **v27; // x5
  System_Int32_array *v28; // x6
  System_Int32_array *v29; // x7

  if ( (byte_4213B9F & 1) == 0 )
  {
    sub_B0D8A4(&BattleLogicFunction_CommonSideEffectCheckDuplicateFunction_TypeInfo, method);
    sub_B0D8A4(&Method_System_Collections_Generic_HashSet_int___ctor___67861296, v4);
    sub_B0D8A4(&System_Collections_Generic_HashSet_int__TypeInfo, v5);
    byte_4213B9F = 1;
  }
  v6 = (System_Collections_Generic_HashSet_int__o *)sub_B0D974(
                                                      System_Collections_Generic_HashSet_int__TypeInfo,
                                                      method,
                                                      v2);
  System_Collections_Generic_HashSet_int____ctor(
    v6,
    (const MethodInfo_2C74FFC *)Method_System_Collections_Generic_HashSet_int___ctor___67861296);
  this->fields.hashTargetId = v6;
  sub_B0D840(
    (BattleServantConfConponent_o *)&this->fields.hashTargetId,
    (System_Int32_array **)v6,
    v7,
    v8,
    v9,
    v10,
    v11,
    v12);
  BattleLogicFunction_CommonSideEffectFunctionArgument___ctor(
    (BattleLogicFunction_CommonSideEffectFunctionArgument_o *)this,
    v13);
  v16 = sub_B0D974(BattleLogicFunction_CommonSideEffectCheckDuplicateFunction_TypeInfo, v14, v15);
  BattleLogicFunction_CommonCheckDuplicateFunction___ctor(
    (BattleLogicFunction_CommonCheckDuplicateFunction_o *)v16,
    v17);
  *(_QWORD *)(v16 + 24) = this;
  sub_B0D840((BattleServantConfConponent_o *)(v16 + 24), (System_Int32_array **)this, v18, v19, v20, v21, v22, v23);
  this->fields.checkDuplicate = (struct BattleLogicFunction_CheckDuplicateFunction_o *)v16;
  sub_B0D840(
    (BattleServantConfConponent_o *)&this->fields.checkDuplicate,
    (System_Int32_array **)v16,
    v24,
    v25,
    v26,
    v27,
    v28,
    v29);
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
  if ( (byte_4213BA1 & 1) == 0 )
  {
    this = (BattleLogicFunction_FuncSideEffectFunctionArgument_o *)sub_B0D8A4(
                                                                     &Method_System_Collections_Generic_HashSet_int__Add__,
                                                                     funcTarget);
    byte_4213BA1 = 1;
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
        (const MethodInfo_2C761D8 *)Method_System_Collections_Generic_HashSet_int__Add__);
      return;
    }
LABEL_12:
    sub_B0D97C(this);
  }
}


void __fastcall BattleLogicFunction_FuncSideEffectFunctionArgument__AddTarget_23128068(
        BattleLogicFunction_FuncSideEffectFunctionArgument_o *this,
        BattleLogicFunction_FuncSideEffectFunctionArgument_o *arg,
        const MethodInfo *method)
{
  System_Collections_Generic_HashSet_int__o *hashTargetId; // x0

  if ( (byte_4213BA2 & 1) == 0 )
  {
    sub_B0D8A4(&Method_System_Collections_Generic_HashSet_int__UnionWith__, arg);
    byte_4213BA2 = 1;
  }
  if ( arg )
  {
    hashTargetId = this->fields.hashTargetId;
    if ( !hashTargetId )
      sub_B0D97C(0LL);
    System_Collections_Generic_HashSet_int___UnionWith(
      hashTargetId,
      (System_Collections_Generic_IEnumerable_T__o *)arg->fields.hashTargetId,
      (const MethodInfo_2C761FC *)Method_System_Collections_Generic_HashSet_int__UnionWith__);
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

  if ( (byte_4213BA0 & 1) == 0 )
  {
    sub_B0D8A4(&Method_System_Array_Empty_BuffList_ACTION___, isMainOnly);
    byte_4213BA0 = 1;
  }
  v3 = (_QWORD **)Method_System_Array_Empty_BuffList_ACTION___;
  v4 = **((_QWORD **)Method_System_Array_Empty_BuffList_ACTION___ + 6);
  v5 = *(_WORD *)(v4 + 306);
  if ( (v5 & 1) == 0 )
  {
    sub_AA65A4(**((_QWORD **)Method_System_Array_Empty_BuffList_ACTION___ + 6));
    v5 = *(_WORD *)(v4 + 306);
  }
  if ( (v5 & 0x400) != 0 )
  {
    v6 = *v3[6];
    if ( (*(_BYTE *)(v6 + 306) & 1) == 0 )
      sub_AA65A4(*v3[6]);
    if ( !*(_DWORD *)(v6 + 224) )
    {
      v7 = *v3[6];
      if ( (*(_BYTE *)(v7 + 306) & 1) == 0 )
        sub_AA65A4(*v3[6]);
      j_il2cpp_runtime_class_init_0(v7);
    }
  }
  v8 = *v3[6];
  if ( (*(_BYTE *)(v8 + 306) & 1) == 0 )
    sub_AA65A4(*v3[6]);
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

  if ( (byte_4213BA3 & 1) == 0 )
  {
    sub_B0D8A4(&Method_System_Linq_Enumerable_ToArray_int___, logicFunc);
    byte_4213BA3 = 1;
  }
  v9 = System_Linq_Enumerable__ToArray_int_(
         (System_Collections_Generic_IEnumerable_TSource__o *)this->fields.hashTargetId,
         (const MethodInfo_1B560F0 *)Method_System_Linq_Enumerable_ToArray_int___);
  if ( !logicFunc )
    sub_B0D97C(v9);
  BattleLogicFunction__SetFuncSideEffect(logicFunc, this, mainActionData, actorSvtData, v9, 0LL);
}


void __fastcall BattleLogicFunction_FunctionArgument___ctor(
        BattleLogicFunction_FunctionArgument_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  Il2CppObject *v4; // x20
  System_String_array **v5; // x2
  System_String_array **v6; // x3
  System_Boolean_array **v7; // x4
  System_Int32_array **v8; // x5
  System_Int32_array *v9; // x6
  System_Int32_array *v10; // x7

  if ( (byte_4213BA4 & 1) == 0 )
  {
    sub_B0D8A4(&BattleLogicFunction_CheckDuplicateFunction_TypeInfo, method);
    byte_4213BA4 = 1;
  }
  v4 = (Il2CppObject *)sub_B0D974(BattleLogicFunction_CheckDuplicateFunction_TypeInfo, method, v2);
  System_Object___ctor(v4, 0LL);
  this->fields.checkDuplicate = (struct BattleLogicFunction_CheckDuplicateFunction_o *)v4;
  sub_B0D840(
    (BattleServantConfConponent_o *)&this->fields.checkDuplicate,
    (System_Int32_array **)v4,
    v5,
    v6,
    v7,
    v8,
    v9,
    v10);
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
    sub_B0D97C(0LL);
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
  sub_B0D840(
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
  sub_B0D840(
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
  __int64 v2; // x2
  BattleLogicFunction_SideEffectMakeArgument_o *v3; // x19
  const MethodInfo *v4; // x1

  if ( (byte_4213BA5 & 1) == 0 )
  {
    sub_B0D8A4(&BattleLogicFunction_PreMainAttackSideEffectMakeArgument_TypeInfo, method);
    byte_4213BA5 = 1;
  }
  v3 = (BattleLogicFunction_SideEffectMakeArgument_o *)sub_B0D974(
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
  System_String_array **v8; // x2
  System_String_array **v9; // x3
  System_Boolean_array **v10; // x4
  System_Int32_array **v11; // x5
  System_Int32_array *v12; // x6
  System_Int32_array *v13; // x7
  __int64 v14; // x1
  System_String_array **v15; // x2
  System_String_array **v16; // x3
  System_Boolean_array **v17; // x4
  System_Int32_array **v18; // x5
  System_Int32_array *v19; // x6
  System_Int32_array *v20; // x7
  const MethodInfo *v21; // x1
  struct BattleLogicFunction_FunctionArgument_o **p_externalArg; // x19

  v3 = argument;
  if ( (byte_4213BA7 & 1) == 0 )
  {
    sub_B0D8A4(&Method_System_Collections_Generic_Dictionary_KeyValuePair_int__int___bool___ctor__, argument);
    sub_B0D8A4(&System_Collections_Generic_Dictionary_KeyValuePair_int__int___bool__TypeInfo, v5);
    sub_B0D8A4(&BattleLogicFunction_FunctionArgument_TypeInfo, v6);
    byte_4213BA7 = 1;
  }
  v7 = (System_Collections_Generic_Dictionary_KeyValuePair_int__int___bool__o *)sub_B0D974(
                                                                                  System_Collections_Generic_Dictionary_KeyValuePair_int__int___bool__TypeInfo,
                                                                                  argument,
                                                                                  method);
  System_Collections_Generic_Dictionary_KeyValuePair_int__int___bool____ctor(
    v7,
    (const MethodInfo_266BE50 *)Method_System_Collections_Generic_Dictionary_KeyValuePair_int__int___bool___ctor__);
  this->fields.funcResults = v7;
  sub_B0D840((BattleServantConfConponent_o *)&this->fields, (System_Int32_array **)v7, v8, v9, v10, v11, v12, v13);
  this->fields.tdCommandTypeChange = -1;
  System_Object___ctor((Il2CppObject *)this, 0LL);
  if ( !v3 )
  {
    v3 = (BattleLogicFunction_FunctionArgument_o *)sub_B0D974(BattleLogicFunction_FunctionArgument_TypeInfo, v14, v15);
    BattleLogicFunction_FunctionArgument___ctor(v3, v21);
  }
  this->fields.externalArg = v3;
  p_externalArg = &this->fields.externalArg;
  sub_B0D840((BattleServantConfConponent_o *)p_externalArg, (System_Int32_array **)v3, v15, v16, v17, v18, v19, v20);
  if ( !*p_externalArg )
    sub_B0D97C(0LL);
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
  __int64 v29; // x2
  int v30; // w23
  int v31; // w8
  __int64 v32; // x1
  _BOOL4 v33; // w24
  struct System_Collections_Generic_Dictionary_KeyValuePair_int__int___bool__o *funcResults; // x21
  System_Func_KeyValuePair_KeyValuePair_int__int___bool___bool__o *v35; // x0
  System_Func_TSource__bool__o *v36; // x22
  System_Collections_Generic_IEnumerable_TSource__o *v37; // x21
  System_Collections_Generic_IEnumerable_TSource__c *klass; // x8
  unsigned __int64 v39; // x10
  int32_t *p_offset; // x11
  __int64 p_method; // x0
  System_Collections_Generic_IEnumerable_TSource__o *v42; // x19
  __int64 v43; // x1
  __int64 v44; // x2
  System_Func_KeyValuePair_KeyValuePair_int__int___bool___bool__o *v45; // x21
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
  char v56; // w1
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

  if ( (byte_4213BA9 & 1) == 0 )
  {
    sub_B0D8A4(
      &Method_System_Collections_Generic_Dictionary_KeyValuePair_int__int___bool__TryGetValue__,
      *(_QWORD *)&targetId);
    sub_B0D8A4(&Method_System_Linq_Enumerable_Any_KeyValuePair_KeyValuePair_int__int___bool____, v9);
    sub_B0D8A4(&Method_System_Linq_Enumerable_Count_KeyValuePair_KeyValuePair_int__int___bool____, v10);
    sub_B0D8A4(&Method_System_Linq_Enumerable_Where_KeyValuePair_KeyValuePair_int__int___bool____, v11);
    sub_B0D8A4(&Method_System_Func_KeyValuePair_KeyValuePair_int__int___bool___bool___ctor__, v12);
    sub_B0D8A4(&System_Func_KeyValuePair_KeyValuePair_int__int___bool___bool__TypeInfo, v13);
    sub_B0D8A4(&System_IDisposable_TypeInfo, v14);
    sub_B0D8A4(&System_Collections_Generic_IEnumerable_KeyValuePair_KeyValuePair_int__int___bool___TypeInfo, v15);
    sub_B0D8A4(&System_Collections_Generic_IEnumerator_KeyValuePair_KeyValuePair_int__int___bool___TypeInfo, v16);
    sub_B0D8A4(&System_Collections_IEnumerator_TypeInfo, v17);
    sub_B0D8A4(&Method_System_Collections_Generic_KeyValuePair_int__int___ctor__, v18);
    sub_B0D8A4(&Method_System_Collections_Generic_KeyValuePair_KeyValuePair_int__int___bool__get_Key__, v19);
    sub_B0D8A4(&Method_System_Collections_Generic_KeyValuePair_int__int__get_Value__, v20);
    sub_B0D8A4(&Method_System_Collections_Generic_KeyValuePair_KeyValuePair_int__int___bool__get_Value__, v21);
    sub_B0D8A4(&System_Math_TypeInfo, v22);
    sub_B0D8A4(
      &Method_BattleLogicFunction_ProcListInArgs___c__DisplayClass31_0__DidTriggeredFuncHaveSpecifyResults_b__0__,
      v23);
    sub_B0D8A4(
      &Method_BattleLogicFunction_ProcListInArgs___c__DisplayClass31_0__DidTriggeredFuncHaveSpecifyResults_b__1__,
      v24);
    sub_B0D8A4(
      &Method_BattleLogicFunction_ProcListInArgs___c__DisplayClass31_0__DidTriggeredFuncHaveSpecifyResults_b__2__,
      v25);
    sub_B0D8A4(&BattleLogicFunction_ProcListInArgs___c__DisplayClass31_0_TypeInfo, v26);
    byte_4213BA9 = 1;
  }
  isSameTargetOnly = 0;
  isAllCond = 0;
  key = 0LL;
  value = 0;
  v27 = (BattleLogicFunction_ProcListInArgs___c__DisplayClass31_0_o *)sub_B0D974(
                                                                        BattleLogicFunction_ProcListInArgs___c__DisplayClass31_0_TypeInfo,
                                                                        *(_QWORD *)&targetId,
                                                                        baseVals);
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
  v32 = (unsigned int)(v31 - 1);
  v27->fields.funcIndex = v32;
  if ( isSameTargetOnly )
  {
    p_key = (System_Collections_Generic_KeyValuePair_int__int__o)&key;
    System_Collections_Generic_KeyValuePair_int__int____ctor(
      p_key,
      v32,
      targetId,
      (const MethodInfo_2028C14 *)Method_System_Collections_Generic_KeyValuePair_int__int___ctor__);
    TriggeredFuncIndex = this->fields.funcResults;
    if ( TriggeredFuncIndex )
    {
      v71 = key;
      LOBYTE(TriggeredFuncIndex) = System_Collections_Generic_Dictionary_KeyValuePair_int__int___bool___TryGetValue(
                                     TriggeredFuncIndex,
                                     v71,
                                     &value,
                                     (const MethodInfo_266E6D8 *)Method_System_Collections_Generic_Dictionary_KeyValuePair_int__int___bool__TryGetValue__)
                                && value == v27->fields.isTrue;
      return (unsigned __int8)TriggeredFuncIndex & 1;
    }
LABEL_57:
    sub_B0D97C(TriggeredFuncIndex);
  }
  v33 = isAllCond;
  funcResults = this->fields.funcResults;
  v35 = (System_Func_KeyValuePair_KeyValuePair_int__int___bool___bool__o *)sub_B0D974(
                                                                             System_Func_KeyValuePair_KeyValuePair_int__int___bool___bool__TypeInfo,
                                                                             v32,
                                                                             v29);
  v36 = (System_Func_TSource__bool__o *)v35;
  if ( !v33 )
  {
    System_Func_KeyValuePair_KeyValuePair_int__int___bool___bool____ctor(
      v35,
      (Il2CppObject *)v27,
      Method_BattleLogicFunction_ProcListInArgs___c__DisplayClass31_0__DidTriggeredFuncHaveSpecifyResults_b__0__,
      (const MethodInfo_2609D00 *)Method_System_Func_KeyValuePair_KeyValuePair_int__int___bool___bool___ctor__);
    v42 = System_Linq_Enumerable__Where_KeyValuePair_KeyValuePair_int__int___bool__(
            (System_Collections_Generic_IEnumerable_TSource__o *)funcResults,
            v36,
            (const MethodInfo_1B59738 *)Method_System_Linq_Enumerable_Where_KeyValuePair_KeyValuePair_int__int___bool____);
    v45 = (System_Func_KeyValuePair_KeyValuePair_int__int___bool___bool__o *)sub_B0D974(
                                                                               System_Func_KeyValuePair_KeyValuePair_int__int___bool___bool__TypeInfo,
                                                                               v43,
                                                                               v44);
    System_Func_KeyValuePair_KeyValuePair_int__int___bool___bool____ctor(
      v45,
      (Il2CppObject *)v27,
      Method_BattleLogicFunction_ProcListInArgs___c__DisplayClass31_0__DidTriggeredFuncHaveSpecifyResults_b__1__,
      (const MethodInfo_2609D00 *)Method_System_Func_KeyValuePair_KeyValuePair_int__int___bool___bool___ctor__);
    LOBYTE(TriggeredFuncIndex) = System_Linq_Enumerable__Any_KeyValuePair_KeyValuePair_int__int___bool__(
                                   v42,
                                   (System_Func_TSource__bool__o *)v45,
                                   (const MethodInfo_1719744 *)Method_System_Linq_Enumerable_Any_KeyValuePair_KeyValuePair_int__int___bool____);
    return (unsigned __int8)TriggeredFuncIndex & 1;
  }
  System_Func_KeyValuePair_KeyValuePair_int__int___bool___bool____ctor(
    v35,
    (Il2CppObject *)v27,
    Method_BattleLogicFunction_ProcListInArgs___c__DisplayClass31_0__DidTriggeredFuncHaveSpecifyResults_b__2__,
    (const MethodInfo_2609D00 *)Method_System_Func_KeyValuePair_KeyValuePair_int__int___bool___bool___ctor__);
  v37 = System_Linq_Enumerable__Where_KeyValuePair_KeyValuePair_int__int___bool__(
          (System_Collections_Generic_IEnumerable_TSource__o *)funcResults,
          v36,
          (const MethodInfo_1B59738 *)Method_System_Linq_Enumerable_Where_KeyValuePair_KeyValuePair_int__int___bool____);
  TriggeredFuncIndex = (System_Collections_Generic_Dictionary_KeyValuePair_int__int___bool__o *)System_Linq_Enumerable__Count_KeyValuePair_KeyValuePair_int__int___bool__(
                                                                                                  v37,
                                                                                                  (const MethodInfo_1B46D04 *)Method_System_Linq_Enumerable_Count_KeyValuePair_KeyValuePair_int__int___bool____);
  if ( (_DWORD)TriggeredFuncIndex )
  {
    if ( !v37 )
      goto LABEL_57;
    klass = v37->klass;
    if ( *(_WORD *)&v37->klass->_2.bitflags1 )
    {
      v39 = 0LL;
      p_offset = &klass->_1.interfaceOffsets->offset;
      while ( *((System_Collections_Generic_IEnumerable_KeyValuePair_KeyValuePair_int__int___bool___c **)p_offset - 1) != System_Collections_Generic_IEnumerable_KeyValuePair_KeyValuePair_int__int___bool___TypeInfo )
      {
        ++v39;
        p_offset += 4;
        if ( v39 >= *(unsigned __int16 *)&v37->klass->_2.bitflags1 )
          goto LABEL_23;
      }
      p_method = (__int64)&klass->vtable[*p_offset].method;
    }
    else
    {
LABEL_23:
      p_method = sub_AA67A0(
                   v37,
                   System_Collections_Generic_IEnumerable_KeyValuePair_KeyValuePair_int__int___bool___TypeInfo,
                   0LL);
    }
    v46 = (*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerable_TSource__o *, _QWORD))p_method)(
            v37,
            *(_QWORD *)(p_method + 8));
    if ( !v46 )
      sub_B0D97C(0LL);
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
        v50 = sub_AA67A0(v46, System_Collections_IEnumerator_TypeInfo, 0LL);
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
        v54 = sub_AA67A0(
                v46,
                System_Collections_Generic_IEnumerator_KeyValuePair_KeyValuePair_int__int___bool___TypeInfo,
                0LL);
      }
      v55 = (*(__int64 (__fastcall **)(__int64, _QWORD))v54)(v46, *(_QWORD *)(v54 + 8));
      if ( !data )
        sub_B0D97C(v55);
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
      v63 = sub_AA67A0(v46, System_IDisposable_TypeInfo, 0LL);
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

  familyLinkageIdCacher = BattleLogicFunction_ProcListInArgs__get_familyLinkageIdCacher(
                            this,
                            *(const MethodInfo **)&linkageIndividuality);
  if ( !familyLinkageIdCacher )
    sub_B0D97C(0LL);
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
    sub_B0D97C(0LL);
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
    sub_B0D97C(this);
  return externalArg->fields.grantSkillType == type;
}


BattleLogicFunction_CheckDuplicateFunction_o *__fastcall BattleLogicFunction_ProcListInArgs__get_CheckDuplicateFunc(
        BattleLogicFunction_ProcListInArgs_o *this,
        const MethodInfo *method)
{
  struct BattleLogicFunction_FunctionArgument_o *externalArg; // x8

  externalArg = this->fields.externalArg;
  if ( !externalArg )
    sub_B0D97C(this);
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
    sub_B0D97C(this);
  return externalArg->fields._FuncSideEffectArg_k__BackingField;
}


int32_t __fastcall BattleLogicFunction_ProcListInArgs__get_GrantSkillType(
        BattleLogicFunction_ProcListInArgs_o *this,
        const MethodInfo *method)
{
  struct BattleLogicFunction_FunctionArgument_o *externalArg; // x8

  externalArg = this->fields.externalArg;
  if ( !externalArg )
    sub_B0D97C(this);
  return externalArg->fields.grantSkillType;
}


bool __fastcall BattleLogicFunction_ProcListInArgs__get_IsCommandSideEffect(
        BattleLogicFunction_ProcListInArgs_o *this,
        const MethodInfo *method)
{
  struct BattleLogicFunction_FunctionArgument_o *externalArg; // x8

  externalArg = this->fields.externalArg;
  if ( !externalArg )
    sub_B0D97C(this);
  return externalArg->fields.isCommandSideEffect;
}


bool __fastcall BattleLogicFunction_ProcListInArgs__get_IsPassive(
        BattleLogicFunction_ProcListInArgs_o *this,
        const MethodInfo *method)
{
  struct BattleLogicFunction_FunctionArgument_o *externalArg; // x8

  externalArg = this->fields.externalArg;
  if ( !externalArg )
    sub_B0D97C(this);
  return externalArg->fields.isPassive;
}


bool __fastcall BattleLogicFunction_ProcListInArgs__get_IsShift(
        BattleLogicFunction_ProcListInArgs_o *this,
        const MethodInfo *method)
{
  struct BattleLogicFunction_FunctionArgument_o *externalArg; // x8

  externalArg = this->fields.externalArg;
  if ( !externalArg )
    sub_B0D97C(this);
  return externalArg->fields.isShift;
}


int32_t __fastcall BattleLogicFunction_ProcListInArgs__get_SkillId(
        BattleLogicFunction_ProcListInArgs_o *this,
        const MethodInfo *method)
{
  struct BattleLogicFunction_FunctionArgument_o *externalArg; // x8

  externalArg = this->fields.externalArg;
  if ( !externalArg )
    sub_B0D97C(this);
  return externalArg->fields.skillId;
}


GeneratedFamilyLinkageIdCacher_o *__fastcall BattleLogicFunction_ProcListInArgs__get_familyLinkageIdCacher(
        BattleLogicFunction_ProcListInArgs_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  GeneratedFamilyLinkageIdCacher_o *result; // x0
  BattleServantConfConponent_o *p_familyLinkageIdCacher; // x19
  GeneratedFamilyLinkageIdCacher_o *familyLinkageIdCacher; // t1
  GeneratedFamilyLinkageIdCacher_o *v7; // x20
  System_String_array **v8; // x2
  System_String_array **v9; // x3
  System_Boolean_array **v10; // x4
  System_Int32_array **v11; // x5
  System_Int32_array *v12; // x6
  System_Int32_array *v13; // x7

  if ( (byte_4213BA6 & 1) == 0 )
  {
    sub_B0D8A4(&GeneratedFamilyLinkageIdCacher_TypeInfo, method);
    byte_4213BA6 = 1;
  }
  familyLinkageIdCacher = this->fields._familyLinkageIdCacher;
  p_familyLinkageIdCacher = (BattleServantConfConponent_o *)&this->fields._familyLinkageIdCacher;
  result = familyLinkageIdCacher;
  if ( !familyLinkageIdCacher )
  {
    v7 = (GeneratedFamilyLinkageIdCacher_o *)sub_B0D974(GeneratedFamilyLinkageIdCacher_TypeInfo, method, v2);
    GeneratedFamilyLinkageIdCacher___ctor(v7, 0LL);
    p_familyLinkageIdCacher->klass = (BattleServantConfConponent_c *)v7;
    sub_B0D840(p_familyLinkageIdCacher, (System_Int32_array **)v7, v8, v9, v10, v11, v12, v13);
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
  __int64 v19; // x1
  __int64 v20; // x2
  struct BattleLogicFunctionProcess_FunctionUnitCheck_array *funcUnitArray_k__BackingField; // x27
  __int64 v22; // x28
  __int64 v23; // x23
  BattleLogicFunctionProcess_FunctionUnitCheck_o *v24; // x26
  const MethodInfo *v25; // x3
  System_String_array **v26; // x2
  System_String_array **v27; // x3
  System_Boolean_array **v28; // x4
  System_Int32_array **v29; // x5
  System_Int32_array *v30; // x6
  System_Int32_array *v31; // x7
  il2cpp_array_size_t v32; // w24
  const MethodInfo *v33; // x4
  BattleLogicFunctionProcess_FunctionUnitCheck_array *v34; // x8
  int v35; // w8
  int v36; // w22
  BattleLogicFunctionProcess_FunctionUnitCheck_o *v37; // x21
  int v38; // w23
  BattleLogicFunctionProcess_FunctionUnitCheck_o *v39; // x20
  const MethodInfo *v40; // x2
  _BOOL4 v41; // w8
  __int64 v42; // x0
  __int64 v43; // x0
  BattleLogicFunction_ProcListInArgs_o *v45; // [xsp+8h] [xbp-58h]

  v45 = this;
  if ( (byte_4213BAB & 1) == 0 )
  {
    sub_B0D8A4(&BattleLogicFunctionProcess_FunctionUnitCheck___TypeInfo, logic);
    this = (BattleLogicFunction_ProcListInArgs_o *)sub_B0D8A4(
                                                     &BattleLogicFunctionProcess_FunctionUnitCheck_TypeInfo,
                                                     v9);
    byte_4213BAB = 1;
  }
  if ( !dataValsList )
    goto LABEL_38;
  max_length = dataValsList->max_length;
  v11 = (System_Int32_array **)sub_B0D8BC(
                                 BattleLogicFunctionProcess_FunctionUnitCheck___TypeInfo,
                                 (unsigned int)max_length);
  v45->fields._funcUnitArray_k__BackingField = (struct BattleLogicFunctionProcess_FunctionUnitCheck_array *)v11;
  p_funcUnitArray_k__BackingField = &v45->fields._funcUnitArray_k__BackingField;
  sub_B0D840(
    (BattleServantConfConponent_o *)&v45->fields._funcUnitArray_k__BackingField,
    v11,
    v13,
    v14,
    v15,
    v16,
    v17,
    v18);
  funcUnitArray_k__BackingField = v45->fields._funcUnitArray_k__BackingField;
  if ( max_length >= 1 )
  {
    v22 = 32LL;
    v23 = 8LL;
    while ( 1 )
    {
      v24 = (BattleLogicFunctionProcess_FunctionUnitCheck_o *)sub_B0D974(
                                                                BattleLogicFunctionProcess_FunctionUnitCheck_TypeInfo,
                                                                v19,
                                                                v20);
      BattleLogicFunctionProcess_FunctionUnitCheck___ctor(v24, logic, v45, v25);
      if ( !funcUnitArray_k__BackingField )
        break;
      if ( v24 )
      {
        this = (BattleLogicFunction_ProcListInArgs_o *)sub_B0D964(
                                                         v24,
                                                         funcUnitArray_k__BackingField->obj.klass->_1.element_class);
        if ( !this )
        {
          v43 = sub_B0D99C();
          sub_B0D948(v43, 0LL);
        }
      }
      v32 = v23 - 8;
      if ( (unsigned int)(v23 - 8) >= funcUnitArray_k__BackingField->max_length )
        goto LABEL_39;
      *(Il2CppClass **)((char *)&funcUnitArray_k__BackingField->obj.klass + v22) = (Il2CppClass *)v24;
      sub_B0D840(
        (BattleServantConfConponent_o *)((char *)funcUnitArray_k__BackingField + v22),
        (System_Int32_array **)v24,
        v26,
        v27,
        v28,
        v29,
        v30,
        v31);
      v34 = *p_funcUnitArray_k__BackingField;
      if ( !*p_funcUnitArray_k__BackingField )
        break;
      if ( v32 >= v34->max_length )
        goto LABEL_39;
      if ( !functionIds )
        break;
      if ( v32 >= functionIds->max_length || v32 >= dataValsList->max_length )
      {
LABEL_39:
        v42 = sub_B0D9A8(this);
        sub_B0D948(v42, 0LL);
      }
      this = *(BattleLogicFunction_ProcListInArgs_o **)((char *)&v34->obj.klass + v22);
      if ( !this )
        break;
      BattleLogicFunctionProcess_FunctionUnitCheck__setDataVals(
        (BattleLogicFunctionProcess_FunctionUnitCheck_o *)this,
        funcIndex,
        *((_DWORD *)&functionIds->obj.klass + v23++),
        *(DataVals_o **)((char *)&dataValsList->obj.klass + v22),
        v33);
      v22 += 8LL;
      ++*funcIndex;
      funcUnitArray_k__BackingField = *p_funcUnitArray_k__BackingField;
      if ( (int)v23 - 8 >= max_length )
        goto LABEL_17;
    }
LABEL_38:
    sub_B0D97C(this);
  }
LABEL_17:
  if ( !funcUnitArray_k__BackingField )
    goto LABEL_38;
  v35 = funcUnitArray_k__BackingField->max_length;
  if ( v35 >= 1 )
  {
    v36 = 0;
    v37 = 0LL;
    v38 = -1;
    do
    {
      if ( v36 >= (unsigned int)v35 )
        goto LABEL_39;
      v39 = funcUnitArray_k__BackingField->m_Items[v36];
      if ( !v39 )
        goto LABEL_38;
      this = (BattleLogicFunction_ProcListInArgs_o *)v39->fields._dataVals_k__BackingField;
      if ( !this )
        goto LABEL_38;
      if ( DataVals__IsAddIndividualty((DataVals_o *)this, 0LL) )
        goto LABEL_26;
      this = (BattleLogicFunction_ProcListInArgs_o *)v39->fields._dataVals_k__BackingField;
      if ( !this )
        goto LABEL_38;
      if ( DataVals__IsAddLinkageTargetIndividualty((DataVals_o *)this, 0LL) )
LABEL_26:
        BattleLogicFunctionProcess_FunctionUnitCheck__setLinkFunction(v39, *p_funcUnitArray_k__BackingField, v40);
      this = (BattleLogicFunction_ProcListInArgs_o *)v39->fields._dataVals_k__BackingField;
      if ( !this )
        goto LABEL_38;
      this = (BattleLogicFunction_ProcListInArgs_o *)DataVals__GetFunctionTriggerStarNum((DataVals_o *)this, 0LL);
      if ( ((unsigned int)this & 0x80000000) == 0 )
      {
        v41 = v37 == 0LL || (int)this < v38;
        if ( v41 )
          v38 = (int)this;
        if ( v41 )
          v37 = v39;
      }
      v35 = funcUnitArray_k__BackingField->max_length;
      ++v36;
    }
    while ( v36 < v35 );
    if ( v37 )
      v37->fields.isLowestStarFunction = 1;
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
  System_Collections_Generic_KeyValuePair_int__int__o key; // [xsp+8h] [xbp-28h] BYREF
  System_Collections_Generic_KeyValuePair_int__int__o p_key; // 0:x0.8
  System_Collections_Generic_KeyValuePair_int__int__o v14; // 0:x1.8
  System_Collections_Generic_KeyValuePair_int__int__o v15; // 0:x1.8

  if ( (byte_4213BA8 & 1) == 0 )
  {
    sub_B0D8A4(
      &Method_System_Collections_Generic_Dictionary_KeyValuePair_int__int___bool__ContainsKey__,
      *(_QWORD *)&targetId);
    sub_B0D8A4(&Method_System_Collections_Generic_Dictionary_KeyValuePair_int__int___bool__get_Item__, v7);
    sub_B0D8A4(&Method_System_Collections_Generic_KeyValuePair_int__int___ctor__, v8);
    byte_4213BA8 = 1;
  }
  p_key = (System_Collections_Generic_KeyValuePair_int__int__o)&key;
  key = 0LL;
  System_Collections_Generic_KeyValuePair_int__int____ctor(
    p_key,
    index - 1,
    targetId,
    (const MethodInfo_2028C14 *)Method_System_Collections_Generic_KeyValuePair_int__int___ctor__);
  funcResults = this->fields.funcResults;
  if ( !funcResults )
    goto LABEL_9;
  v14 = key;
  if ( !System_Collections_Generic_Dictionary_KeyValuePair_int__int___bool___ContainsKey(
          funcResults,
          v14,
          (const MethodInfo_266CC90 *)Method_System_Collections_Generic_Dictionary_KeyValuePair_int__int___bool__ContainsKey__) )
    return 0;
  funcResults = this->fields.funcResults;
  if ( !funcResults )
LABEL_9:
    sub_B0D97C(funcResults);
  v15 = key;
  return System_Collections_Generic_Dictionary_KeyValuePair_int__int___bool___get_Item(
           funcResults,
           v15,
           (const MethodInfo_266C940 *)Method_System_Collections_Generic_Dictionary_KeyValuePair_int__int___bool__get_Item__);
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
  System_Collections_Generic_KeyValuePair_int__int__o key; // [xsp+8h] [xbp-28h] BYREF
  System_Collections_Generic_KeyValuePair_int__int__o p_key; // 0:x0.8
  System_Collections_Generic_KeyValuePair_int__int__o v13; // 0:x1.8

  if ( (byte_4213BAA & 1) == 0 )
  {
    sub_B0D8A4(
      &Method_System_Collections_Generic_Dictionary_KeyValuePair_int__int___bool__set_Item__,
      *(_QWORD *)&targetId);
    sub_B0D8A4(&Method_System_Collections_Generic_KeyValuePair_int__int___ctor__, v9);
    byte_4213BAA = 1;
  }
  p_key = (System_Collections_Generic_KeyValuePair_int__int__o)&key;
  key = 0LL;
  System_Collections_Generic_KeyValuePair_int__int____ctor(
    p_key,
    index,
    targetId,
    (const MethodInfo_2028C14 *)Method_System_Collections_Generic_KeyValuePair_int__int___ctor__);
  funcResults = this->fields.funcResults;
  if ( !funcResults )
    sub_B0D97C(0LL);
  v13 = key;
  System_Collections_Generic_Dictionary_KeyValuePair_int__int___bool___set_Item(
    funcResults,
    v13,
    result,
    (const MethodInfo_266C9DC *)Method_System_Collections_Generic_Dictionary_KeyValuePair_int__int___bool__set_Item__);
}


void __fastcall BattleLogicFunction_ProcListInArgs__set_IsCommandSideEffect(
        BattleLogicFunction_ProcListInArgs_o *this,
        bool value,
        const MethodInfo *method)
{
  struct BattleLogicFunction_FunctionArgument_o *externalArg; // x8

  externalArg = this->fields.externalArg;
  if ( !externalArg )
    sub_B0D97C(this);
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
    sub_B0D97C(this);
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
    sub_B0D97C(this);
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
    sub_B0D97C(this);
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
  sub_B0D840(
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
  if ( (byte_4211F61 & 1) == 0 )
  {
    sub_B0D8A4(
      &Method_System_Collections_Generic_KeyValuePair_KeyValuePair_int__int___bool__get_Key__,
      *(_QWORD *)&x.fields.key);
    sub_B0D8A4(&Method_System_Collections_Generic_KeyValuePair_int__int__get_Key__, v5);
    byte_4211F61 = 1;
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
  if ( (byte_4211F62 & 1) == 0 )
  {
    sub_B0D8A4(
      &Method_System_Collections_Generic_KeyValuePair_KeyValuePair_int__int___bool__get_Value__,
      *(_QWORD *)&x.fields.key);
    byte_4211F62 = 1;
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
  if ( (byte_4211F60 & 1) == 0 )
  {
    sub_B0D8A4(
      &Method_System_Collections_Generic_KeyValuePair_KeyValuePair_int__int___bool__get_Key__,
      *(_QWORD *)&x.fields.key);
    sub_B0D8A4(&Method_System_Collections_Generic_KeyValuePair_int__int__get_Key__, v5);
    byte_4211F60 = 1;
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

  if ( (byte_4213BAD & 1) == 0 )
  {
    sub_B0D8A4(&Method_System_Array_Empty_BattleActionData_SideEffectData___, method);
    byte_4213BAD = 1;
  }
  v9 = (_QWORD **)Method_System_Array_Empty_BattleActionData_SideEffectData___;
  v10 = **((_QWORD **)Method_System_Array_Empty_BattleActionData_SideEffectData___ + 6);
  v11 = *(_WORD *)(v10 + 306);
  if ( (v11 & 1) == 0 )
  {
    sub_AA65A4(**((_QWORD **)Method_System_Array_Empty_BattleActionData_SideEffectData___ + 6));
    v11 = *(_WORD *)(v10 + 306);
  }
  if ( (v11 & 0x400) != 0 )
  {
    v12 = *v9[6];
    if ( (*(_BYTE *)(v12 + 306) & 1) == 0 )
      sub_AA65A4(*v9[6]);
    if ( !*(_DWORD *)(v12 + 224) )
    {
      v13 = *v9[6];
      if ( (*(_BYTE *)(v13 + 306) & 1) == 0 )
        sub_AA65A4(*v9[6]);
      j_il2cpp_runtime_class_init_0(v13);
    }
  }
  v14 = *v9[6];
  if ( (*(_BYTE *)(v14 + 306) & 1) == 0 )
    sub_AA65A4(*v9[6]);
  v15 = *(struct BattleActionData_SideEffectData_array ***)(v14 + 184);
  v16 = *v15;
  this->fields._SideEffectList_k__BackingField = *v15;
  sub_B0D840((BattleServantConfConponent_o *)&this->fields, (System_Int32_array **)v16, v2, v3, v4, v5, v6, v7);
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
  System_String_array **v14; // x2
  System_String_array **v15; // x3
  System_Boolean_array **v16; // x4
  System_Int32_array **v17; // x5
  System_Int32_array *v18; // x6
  System_Int32_array *v19; // x7
  __int64 v20; // x1
  __int64 v21; // x2
  System_Func_int__BattleActionData_SideEffectData__o *v22; // x22
  System_Collections_Generic_IEnumerable_TSource__o *v23; // x0
  struct BattleActionData_SideEffectData_array *v24; // x0
  System_String_array **v25; // x2
  System_String_array **v26; // x3
  System_Boolean_array **v27; // x4
  System_Int32_array **v28; // x5
  System_Int32_array *v29; // x6
  System_Int32_array *v30; // x7
  __int64 v32; // x0

  if ( (byte_4213BAC & 1) == 0 )
  {
    sub_B0D8A4(&BuffList_ACTION___TypeInfo, targetIds);
    sub_B0D8A4(&Method_System_Linq_Enumerable_Select_int__BattleActionData_SideEffectData___, v5);
    sub_B0D8A4(&Method_System_Linq_Enumerable_ToArray_BattleActionData_SideEffectData___, v6);
    sub_B0D8A4(&Method_System_Func_int__BattleActionData_SideEffectData___ctor__, v7);
    sub_B0D8A4(&System_Func_int__BattleActionData_SideEffectData__TypeInfo, v8);
    sub_B0D8A4(&Method_BattleLogicFunction_SideEffectMakeArgument___c__DisplayClass9_0__Init_b__0__, v9);
    sub_B0D8A4(&BattleLogicFunction_SideEffectMakeArgument___c__DisplayClass9_0_TypeInfo, v10);
    byte_4213BAC = 1;
  }
  v11 = sub_B0D974(BattleLogicFunction_SideEffectMakeArgument___c__DisplayClass9_0_TypeInfo, targetIds, method);
  BattleLogicFunction_SideEffectMakeArgument___c__DisplayClass9_0___ctor(
    (BattleLogicFunction_SideEffectMakeArgument___c__DisplayClass9_0_o *)v11,
    0LL);
  v12 = sub_B0D8BC(BuffList_ACTION___TypeInfo, 1LL);
  v13 = ((__int64 (__fastcall *)(BattleLogicFunction_SideEffectMakeArgument_o *, Il2CppMethodPointer))this->klass->vtable._4_unknown.method)(
          this,
          this->klass->vtable._5_unknown.methodPtr);
  if ( !v12 )
    goto LABEL_7;
  if ( !*(_DWORD *)(v12 + 24) )
  {
    v32 = sub_B0D9A8(v13);
    sub_B0D948(v32, 0LL);
  }
  *(_DWORD *)(v12 + 32) = v13;
  if ( !v11 )
LABEL_7:
    sub_B0D97C(v13);
  *(_QWORD *)(v11 + 16) = v12;
  sub_B0D840((BattleServantConfConponent_o *)(v11 + 16), (System_Int32_array **)v12, v14, v15, v16, v17, v18, v19);
  v22 = (System_Func_int__BattleActionData_SideEffectData__o *)sub_B0D974(
                                                                 System_Func_int__BattleActionData_SideEffectData__TypeInfo,
                                                                 v20,
                                                                 v21);
  System_Func_int__BattleActionData_SideEffectData____ctor(
    v22,
    (Il2CppObject *)v11,
    Method_BattleLogicFunction_SideEffectMakeArgument___c__DisplayClass9_0__Init_b__0__,
    (const MethodInfo_26145DC *)Method_System_Func_int__BattleActionData_SideEffectData___ctor__);
  v23 = (System_Collections_Generic_IEnumerable_TSource__o *)System_Linq_Enumerable__Select_int__BattleActionData_SideEffectData_(
                                                               (System_Collections_Generic_IEnumerable_TSource__o *)targetIds,
                                                               (System_Func_TSource__TResult__o *)v22,
                                                               (const MethodInfo_1B50D58 *)Method_System_Linq_Enumerable_Select_int__BattleActionData_SideEffectData___);
  v24 = (struct BattleActionData_SideEffectData_array *)System_Linq_Enumerable__ToArray_DrawLotsDisplayMessage_DisplayedInGroup_SaveData_(
                                                          v23,
                                                          (const MethodInfo_1B56294 *)Method_System_Linq_Enumerable_ToArray_BattleActionData_SideEffectData___);
  this->fields._SideEffectList_k__BackingField = v24;
  sub_B0D840((BattleServantConfConponent_o *)&this->fields, (System_Int32_array **)v24, v25, v26, v27, v28, v29, v30);
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
  sub_B0D840(
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

  if ( (byte_4211F63 & 1) == 0 )
  {
    sub_B0D8A4(&BattleActionData_SideEffectData_TypeInfo, *(_QWORD *)&id);
    byte_4211F63 = 1;
  }
  buffActs = this->fields.buffActs;
  v6 = (BattleActionData_SideEffectData_o *)sub_B0D974(BattleActionData_SideEffectData_TypeInfo, *(_QWORD *)&id, method);
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
  il2cpp_array_size_t max_length; // w8
  int32_t v6; // w8
  __int64 v7; // x0

  if ( (byte_4213BAE & 1) == 0 )
  {
    sub_B0D8A4(&BuffList_ACTION___TypeInfo, isMainOnly);
    byte_4213BAE = 1;
  }
  result = (BuffList_ACTION_array *)sub_B0D8BC(BuffList_ACTION___TypeInfo, 1LL);
  if ( !result )
    sub_B0D97C(0LL);
  max_length = result->max_length;
  if ( !isMainOnly )
  {
    if ( max_length )
    {
      v6 = 122;
      goto LABEL_9;
    }
LABEL_11:
    v7 = sub_B0D9A8(result);
    sub_B0D948(v7, 0LL);
  }
  if ( !max_length )
    goto LABEL_11;
  v6 = 123;
LABEL_9:
  result->m_Items[1] = v6;
  return result;
}


// local variable allocation has failed, the output may be wrong!
BuffList_ACTION_array *__fastcall BattleLogicFunction_TreasureDeviceSideEffectFunctionArgument__GetActArray(
        BattleLogicFunction_TreasureDeviceSideEffectFunctionArgument_o *this,
        bool isMainOnly,
        const MethodInfo *method)
{
  BuffList_ACTION_array *result; // x0
  il2cpp_array_size_t max_length; // w8
  int32_t v6; // w8
  __int64 v7; // x0

  if ( (byte_4213BAF & 1) == 0 )
  {
    sub_B0D8A4(&BuffList_ACTION___TypeInfo, isMainOnly);
    byte_4213BAF = 1;
  }
  result = (BuffList_ACTION_array *)sub_B0D8BC(BuffList_ACTION___TypeInfo, 1LL);
  if ( !result )
    sub_B0D97C(0LL);
  max_length = result->max_length;
  if ( !isMainOnly )
  {
    if ( max_length )
    {
      v6 = 124;
      goto LABEL_9;
    }
LABEL_11:
    v7 = sub_B0D9A8(result);
    sub_B0D948(v7, 0LL);
  }
  if ( !max_length )
    goto LABEL_11;
  v6 = 125;
LABEL_9:
  result->m_Items[1] = v6;
  return result;
}


// local variable allocation has failed, the output may be wrong!
void __fastcall BattleLogicFunction_WarBoardFunctionArgument___ctor(
        BattleLogicFunction_WarBoardFunctionArgument_o *this,
        int32_t targetId,
        const MethodInfo *method)
{
  struct System_Int32_array *v5; // x0
  System_String_array **v6; // x2
  System_String_array **v7; // x3
  System_Boolean_array **v8; // x4
  System_Int32_array **v9; // x5
  System_Int32_array *v10; // x6
  System_Int32_array *v11; // x7
  __int64 v12; // x0

  if ( (byte_4213BB0 & 1) == 0 )
  {
    sub_B0D8A4(&int___TypeInfo, *(_QWORD *)&targetId);
    byte_4213BB0 = 1;
  }
  BattleLogicFunction_FunctionArgument___ctor(
    (BattleLogicFunction_FunctionArgument_o *)this,
    *(const MethodInfo **)&targetId);
  v5 = (struct System_Int32_array *)sub_B0D8BC(int___TypeInfo, 1LL);
  if ( !v5 )
    sub_B0D97C(0LL);
  if ( !v5->max_length )
  {
    v12 = sub_B0D9A8(v5);
    sub_B0D948(v12, 0LL);
  }
  v5->m_Items[1] = targetId;
  this->fields.fixTargetIds = v5;
  sub_B0D840(
    (BattleServantConfConponent_o *)&this->fields.fixTargetIds,
    (System_Int32_array **)v5,
    v6,
    v7,
    v8,
    v9,
    v10,
    v11);
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
  BattleServantConfConponent_o *static_fields; // x0
  System_String_array **v5; // x2
  System_String_array **v6; // x3
  System_Boolean_array **v7; // x4
  System_Int32_array **v8; // x5
  System_Int32_array *v9; // x6
  System_Int32_array *v10; // x7

  if ( (byte_4213B94 & 1) == 0 )
  {
    sub_B0D8A4(&BattleLogicFunction___c_TypeInfo, v1);
    byte_4213B94 = 1;
  }
  v3 = (Il2CppObject *)sub_B0D974(BattleLogicFunction___c_TypeInfo, v1, v2);
  System_Object___ctor(v3, 0LL);
  static_fields = (BattleServantConfConponent_o *)BattleLogicFunction___c_TypeInfo->static_fields;
  static_fields->klass = (BattleServantConfConponent_c *)v3;
  sub_B0D840(static_fields, (System_Int32_array **)v3, v5, v6, v7, v8, v9, v10);
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
    sub_B0D97C(this);
  return x->fields.fieldChangeData != 0LL;
}


void __fastcall BattleLogicFunction___c___SetFuncSideEffect_b__47_0(
        BattleLogicFunction___c_o *this,
        BattleActionData_o *x,
        const MethodInfo *method)
{
  if ( !x )
    sub_B0D97C(this);
  BattleActionData__SetPopupOnce(x, 0LL);
}


void __fastcall BattleLogicFunction___c___functionPtShuffle_b__87_0(
        BattleLogicFunction___c_o *this,
        BattleServantData_o *s,
        const MethodInfo *method)
{
  __int64 Next; // x0

  Next = BattleRandom__getNext(1000, 0LL);
  if ( !s )
    sub_B0D97C(Next);
  s->fields._shuffuleSeed = Next;
}


int32_t __fastcall BattleLogicFunction___c___functionPtShuffle_b__87_1(
        BattleLogicFunction___c_o *this,
        BattleServantData_o *a,
        BattleServantData_o *b,
        const MethodInfo *method)
{
  if ( !a || (this = (BattleLogicFunction___c_o *)BattleServantData__get_ShuffleSeed(a, 0LL), !b) )
    sub_B0D97C(this);
  return (_DWORD)this - BattleServantData__get_ShuffleSeed(b, 0LL);
}


bool __fastcall BattleLogicFunction___c___functionReplaceEnemyMember_b__81_0(
        BattleLogicFunction___c_o *this,
        BattleServantData_o *x,
        const MethodInfo *method)
{
  if ( !x )
    sub_B0D97C(this);
  return BattleServantData__isAlive(x, 0, 0LL);
}


bool __fastcall BattleLogicFunction___c___procList_b__40_0(
        BattleLogicFunction___c_o *this,
        BattleLogicFunctionProcess_FunctionUnitCheck_o *x,
        const MethodInfo *method)
{
  struct DataVals_o *dataVals_k__BackingField; // x8

  if ( !x || (dataVals_k__BackingField = x->fields._dataVals_k__BackingField) == 0LL )
    sub_B0D97C(this);
  return dataVals_k__BackingField->fields.funcType != 0;
}


bool __fastcall BattleLogicFunction___c___procList_b__40_1(
        BattleLogicFunction___c_o *this,
        BattleLogicFunctionProcess_FunctionUnitCheck_o *x,
        const MethodInfo *method)
{
  struct DataVals_o *dataVals_k__BackingField; // x8

  if ( !x || (dataVals_k__BackingField = x->fields._dataVals_k__BackingField) == 0LL )
    sub_B0D97C(this);
  return dataVals_k__BackingField->fields.funcType == 135;
}


bool __fastcall BattleLogicFunction___c___procList_b__40_2(
        BattleLogicFunction___c_o *this,
        BattleLogicFunctionProcess_FunctionTargetCheck_o *target,
        const MethodInfo *method)
{
  if ( !target )
    sub_B0D97C(this);
  return target->fields._result_k__BackingField;
}


int32_t __fastcall BattleLogicFunction___c___procList_b__40_3(
        BattleLogicFunction___c_o *this,
        BattleLogicFunctionProcess_FunctionTargetCheck_o *target,
        const MethodInfo *method)
{
  if ( !target )
    sub_B0D97C(this);
  return target->fields._targetId_k__BackingField;
}


int32_t __fastcall BattleLogicFunction___c___setAttackSideEffect_b__50_0(
        BattleLogicFunction___c_o *this,
        BattleActionData_SideEffectData_o *x,
        const MethodInfo *method)
{
  if ( !x )
    sub_B0D97C(this);
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
    sub_B0D97C(this);
  return BattleBuffData_BuffData__checkState(x, this->fields.stateUnstealable, 0LL);
}


bool __fastcall BattleLogicFunction___c__DisplayClass106_0___functionMoveState_b__1(
        BattleLogicFunction___c__DisplayClass106_0_o *this,
        BattleBuffData_BuffData_o *x,
        const MethodInfo *method)
{
  System_Collections_Generic_HashSet_BattleBuffData_BuffData__o *unstealableBuffs; // x0

  if ( (byte_4213B95 & 1) == 0 )
  {
    sub_B0D8A4(&Method_System_Collections_Generic_HashSet_BattleBuffData_BuffData__Contains__, x);
    byte_4213B95 = 1;
  }
  unstealableBuffs = this->fields.unstealableBuffs;
  if ( !unstealableBuffs )
    sub_B0D97C(0LL);
  return !System_Collections_Generic_HashSet_BattleBuffData_BuffData___Contains(
            unstealableBuffs,
            x,
            (const MethodInfo_2C7C05C *)Method_System_Collections_Generic_HashSet_BattleBuffData_BuffData__Contains__);
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
    sub_B0D97C(this);
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
    sub_B0D97C(targetSvtData);
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
    sub_B0D97C(this);
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
    sub_B0D97C(this);
  BattleSkillInfoData__TurnExtend(
    x,
    this->fields.progressValue,
    999,
    this->fields.targetIndex,
    this->fields.targetIndividualityArray,
    0LL);
}