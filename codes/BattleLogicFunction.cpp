void __fastcall BattleLogicFunction___ctor(BattleLogicFunction_o *this, const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  int v8; // w1
  int v9; // w2
  __int64 v10; // x3
  int v11; // w1
  int v12; // w2
  __int64 v13; // x3
  int v14; // w1
  int v15; // w2
  __int64 v16; // x3
  int v17; // w1
  int v18; // w2
  __int64 v19; // x3
  int v20; // w1
  int v21; // w2
  __int64 v22; // x3
  int v23; // w1
  int v24; // w2
  __int64 v25; // x3
  int v26; // w1
  int v27; // w2
  __int64 v28; // x3
  int v29; // w1
  int v30; // w2
  __int64 v31; // x3
  int v32; // w1
  int v33; // w2
  __int64 v34; // x3
  int v35; // w1
  int v36; // w2
  __int64 v37; // x3
  struct System_Int32_array *v38; // x0
  __int64 v39; // x1
  System_String_array **v40; // x2
  System_String_array **v41; // x3
  System_Boolean_array **v42; // x4
  System_Int32_array **v43; // x5
  System_Int32_array *v44; // x6
  System_Int32_array *v45; // x7
  il2cpp_array_size_t max_length; // w8
  System_Collections_Generic_Dictionary_Voice_BATTLE__string__o *v47; // x20
  BattleLogicFunctionProcess_CommonFunctionTypeProcess_o *v48; // x21
  BattleLogicFunctionProcess_AddStateProcess_o *v49; // x21
  BattleLogicFunctionProcess_AddStateShortProcess_o *v50; // x21
  BattleLogicFunctionProcess_MoveToLastSubMemberProcess_o *v51; // x21
  BattleLogicFunctionProcess_TransformServantProcess_o *v52; // x21
  BattleLogicFunctionProcess_CommonFieldFunctionProcess_o *v53; // x21
  BattleLogicFunctionProcess_CommonFieldFunctionProcess_o *v54; // x21
  BattleLogicFunctionProcess_CommonAddStateProcess_o *v55; // x21
  BattleLogicFunctionProcess_ToFieldCommonFunctionProcess_o *v56; // x21
  System_String_array **v57; // x2
  System_String_array **v58; // x3
  System_Boolean_array **v59; // x4
  System_Int32_array **v60; // x5
  System_Int32_array *v61; // x6
  System_Int32_array *v62; // x7
  __int64 v63; // x0

  if ( (byte_42EB027 & 1) == 0 )
  {
    sub_B5D5C4(&BattleLogicFunctionProcess_AddStateProcess_TypeInfo, (_DWORD)method, v2, v3);
    sub_B5D5C4(&BattleLogicFunctionProcess_AddStateShortProcess_TypeInfo, v5, v6, v7);
    sub_B5D5C4(&BattleLogicFunctionProcess_CommonAddStateProcess_TypeInfo, v8, v9, v10);
    sub_B5D5C4(&BattleLogicFunctionProcess_CommonFieldFunctionProcess_TypeInfo, v11, v12, v13);
    sub_B5D5C4(&BattleLogicFunctionProcess_CommonFunctionTypeProcess_TypeInfo, v14, v15, v16);
    sub_B5D5C4(
      &Method_System_Collections_Generic_Dictionary_FuncList_TYPE__BattleLogicFunctionProcess_BaseFunctionTypeProcess__Add__,
      v17,
      v18,
      v19);
    sub_B5D5C4(
      &Method_System_Collections_Generic_Dictionary_FuncList_TYPE__BattleLogicFunctionProcess_BaseFunctionTypeProcess___ctor__,
      v20,
      v21,
      v22);
    sub_B5D5C4(
      &System_Collections_Generic_Dictionary_FuncList_TYPE__BattleLogicFunctionProcess_BaseFunctionTypeProcess__TypeInfo,
      v23,
      v24,
      v25);
    sub_B5D5C4(&int___TypeInfo, v26, v27, v28);
    sub_B5D5C4(&BattleLogicFunctionProcess_MoveToLastSubMemberProcess_TypeInfo, v29, v30, v31);
    sub_B5D5C4(&BattleLogicFunctionProcess_ToFieldCommonFunctionProcess_TypeInfo, v32, v33, v34);
    sub_B5D5C4(&BattleLogicFunctionProcess_TransformServantProcess_TypeInfo, v35, v36, v37);
    byte_42EB027 = 1;
  }
  v38 = (struct System_Int32_array *)sub_B5D5DC(int___TypeInfo, 2LL);
  if ( !v38 )
    goto LABEL_9;
  max_length = v38->max_length;
  if ( !max_length || (v38->m_Items[1] = 701601, max_length == 1) )
  {
    v63 = sub_B5D6C8(v38);
    sub_B5D668(v63, 0LL);
  }
  v38->m_Items[2] = 701602;
  this->fields.tamamocatTreasureDeviceIds = v38;
  sub_B5D560(
    (BattleServantConfConponent_o *)&this->fields.tamamocatTreasureDeviceIds,
    (System_Int32_array **)v38,
    v40,
    v41,
    v42,
    v43,
    v44,
    v45);
  v47 = (System_Collections_Generic_Dictionary_Voice_BATTLE__string__o *)sub_B5D694(System_Collections_Generic_Dictionary_FuncList_TYPE__BattleLogicFunctionProcess_BaseFunctionTypeProcess__TypeInfo);
  System_Collections_Generic_Dictionary_Voice_BATTLE__string____ctor(
    v47,
    (const MethodInfo_2F48DA8 *)Method_System_Collections_Generic_Dictionary_FuncList_TYPE__BattleLogicFunctionProcess_BaseFunctionTypeProcess___ctor__);
  v48 = (BattleLogicFunctionProcess_CommonFunctionTypeProcess_o *)sub_B5D694(BattleLogicFunctionProcess_CommonFunctionTypeProcess_TypeInfo);
  BattleLogicFunctionProcess_CommonFunctionTypeProcess___ctor(v48, 0LL);
  if ( !v47 )
LABEL_9:
    sub_B5D69C(v38, v39);
  System_Collections_Generic_Dictionary_Voice_BATTLE__string___Add(
    v47,
    0,
    (System_String_o *)v48,
    (const MethodInfo_2F4995C *)Method_System_Collections_Generic_Dictionary_FuncList_TYPE__BattleLogicFunctionProcess_BaseFunctionTypeProcess__Add__);
  v49 = (BattleLogicFunctionProcess_AddStateProcess_o *)sub_B5D694(BattleLogicFunctionProcess_AddStateProcess_TypeInfo);
  BattleLogicFunctionProcess_AddStateProcess___ctor(v49, 0LL);
  System_Collections_Generic_Dictionary_Voice_BATTLE__string___Add(
    v47,
    1,
    (System_String_o *)v49,
    (const MethodInfo_2F4995C *)Method_System_Collections_Generic_Dictionary_FuncList_TYPE__BattleLogicFunctionProcess_BaseFunctionTypeProcess__Add__);
  v50 = (BattleLogicFunctionProcess_AddStateShortProcess_o *)sub_B5D694(BattleLogicFunctionProcess_AddStateShortProcess_TypeInfo);
  BattleLogicFunctionProcess_AddStateShortProcess___ctor(v50, 0LL);
  System_Collections_Generic_Dictionary_Voice_BATTLE__string___Add(
    v47,
    16,
    (System_String_o *)v50,
    (const MethodInfo_2F4995C *)Method_System_Collections_Generic_Dictionary_FuncList_TYPE__BattleLogicFunctionProcess_BaseFunctionTypeProcess__Add__);
  v51 = (BattleLogicFunctionProcess_MoveToLastSubMemberProcess_o *)sub_B5D694(BattleLogicFunctionProcess_MoveToLastSubMemberProcess_TypeInfo);
  BattleLogicFunctionProcess_MoveToLastSubMemberProcess___ctor(v51, 0LL);
  System_Collections_Generic_Dictionary_Voice_BATTLE__string___Add(
    v47,
    61,
    (System_String_o *)v51,
    (const MethodInfo_2F4995C *)Method_System_Collections_Generic_Dictionary_FuncList_TYPE__BattleLogicFunctionProcess_BaseFunctionTypeProcess__Add__);
  v52 = (BattleLogicFunctionProcess_TransformServantProcess_o *)sub_B5D694(BattleLogicFunctionProcess_TransformServantProcess_TypeInfo);
  BattleLogicFunctionProcess_TransformServantProcess___ctor(v52, 0LL);
  System_Collections_Generic_Dictionary_Voice_BATTLE__string___Add(
    v47,
    109,
    (System_String_o *)v52,
    (const MethodInfo_2F4995C *)Method_System_Collections_Generic_Dictionary_FuncList_TYPE__BattleLogicFunctionProcess_BaseFunctionTypeProcess__Add__);
  v53 = (BattleLogicFunctionProcess_CommonFieldFunctionProcess_o *)sub_B5D694(BattleLogicFunctionProcess_CommonFieldFunctionProcess_TypeInfo);
  BattleLogicFunctionProcess_CommonFieldFunctionProcess___ctor(v53, 0LL);
  System_Collections_Generic_Dictionary_Voice_BATTLE__string___Add(
    v47,
    29,
    (System_String_o *)v53,
    (const MethodInfo_2F4995C *)Method_System_Collections_Generic_Dictionary_FuncList_TYPE__BattleLogicFunctionProcess_BaseFunctionTypeProcess__Add__);
  v54 = (BattleLogicFunctionProcess_CommonFieldFunctionProcess_o *)sub_B5D694(BattleLogicFunctionProcess_CommonFieldFunctionProcess_TypeInfo);
  BattleLogicFunctionProcess_CommonFieldFunctionProcess___ctor(v54, 0LL);
  System_Collections_Generic_Dictionary_Voice_BATTLE__string___Add(
    v47,
    128,
    (System_String_o *)v54,
    (const MethodInfo_2F4995C *)Method_System_Collections_Generic_Dictionary_FuncList_TYPE__BattleLogicFunctionProcess_BaseFunctionTypeProcess__Add__);
  v55 = (BattleLogicFunctionProcess_CommonAddStateProcess_o *)sub_B5D694(BattleLogicFunctionProcess_CommonAddStateProcess_TypeInfo);
  BattleLogicFunctionProcess_CommonAddStateProcess___ctor(v55, 0LL);
  System_Collections_Generic_Dictionary_Voice_BATTLE__string___Add(
    v47,
    130,
    (System_String_o *)v55,
    (const MethodInfo_2F4995C *)Method_System_Collections_Generic_Dictionary_FuncList_TYPE__BattleLogicFunctionProcess_BaseFunctionTypeProcess__Add__);
  v56 = (BattleLogicFunctionProcess_ToFieldCommonFunctionProcess_o *)sub_B5D694(BattleLogicFunctionProcess_ToFieldCommonFunctionProcess_TypeInfo);
  BattleLogicFunctionProcess_ToFieldCommonFunctionProcess___ctor(v56, 0LL);
  System_Collections_Generic_Dictionary_Voice_BATTLE__string___Add(
    v47,
    131,
    (System_String_o *)v56,
    (const MethodInfo_2F4995C *)Method_System_Collections_Generic_Dictionary_FuncList_TYPE__BattleLogicFunctionProcess_BaseFunctionTypeProcess__Add__);
  this->fields.dicFuncProcess = (struct System_Collections_Generic_Dictionary_FuncList_TYPE__BattleLogicFunctionProcess_BaseFunctionTypeProcess__o *)v47;
  sub_B5D560(
    (BattleServantConfConponent_o *)&this->fields.dicFuncProcess,
    (System_Int32_array **)v47,
    v57,
    v58,
    v59,
    v60,
    v61,
    v62);
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
  int v8; // w1
  int v9; // w2
  __int64 v10; // x3
  int v11; // w1
  int v12; // w2
  __int64 v13; // x3
  int v14; // w1
  int v15; // w2
  __int64 v16; // x3
  int v17; // w1
  int v18; // w2
  __int64 v19; // x3
  int v20; // w1
  int v21; // w2
  __int64 v22; // x3
  int v23; // w1
  int v24; // w2
  __int64 v25; // x3
  int v26; // w1
  int v27; // w2
  __int64 v28; // x3
  struct BattleLogicFunctionProcess_FunctionUnitCheck_o *funcUnit_k__BackingField; // x8
  BattleLogicFunction_ProcListInArgs_o *procArg_k__BackingField; // x22
  DataVals_o *dataVals_k__BackingField; // x24
  BattleActionData_o *v32; // x23
  System_Collections_Generic_List_VoiceCondType_Type__o *v33; // x25
  struct BattleLogic_o *logic; // x8
  unsigned __int64 v35; // x9
  int v36; // w10
  DataVals_o *v37; // x26
  const MethodInfo *v38; // x4
  __int64 v39; // x3
  BattleLogicFunction_c *klass; // x8
  BattleLogicFunction_o *v41; // x25
  unsigned __int64 v42; // x10
  int32_t *p_offset; // x11
  __int64 v44; // x0
  __int64 v45; // x1
  __int64 v46; // x3
  __int64 v47; // x25
  __int64 v48; // x8
  unsigned __int64 v49; // x10
  int *v50; // x11
  __int64 v51; // x0
  __int64 v52; // x3
  __int64 v53; // x8
  unsigned __int64 v54; // x10
  int *v55; // x11
  __int64 v56; // x0
  __int64 v57; // x0
  __int64 v58; // x1
  __int64 v59; // x27
  __int64 v60; // x0
  __int64 v61; // x1
  int32_t v62; // w2
  const MethodInfo *v63; // x6
  int32_t v64; // w27
  BattleActionData_o *v65; // x0
  int32_t v66; // w28
  int32_t funcIndex; // w28
  bool IsCommandSideEffect; // w0
  const MethodInfo *v69; // x7
  BattleActionData_o *NoEffectObject; // x0
  int v71; // w10
  __int64 v72; // x8
  int v73; // w27
  unsigned __int64 v74; // x10
  int *v75; // x11
  __int64 v76; // x0
  __int64 v78; // x0
  BattleLogicFunction_o *v79; // [xsp+0h] [xbp-80h]
  int v80; // [xsp+Ch] [xbp-74h]
  unsigned __int64 v81; // [xsp+10h] [xbp-70h]
  _DWORD v83[1]; // [xsp+20h] [xbp-60h]
  int v84; // [xsp+24h] [xbp-5Ch]
  int32_t diffNp; // [xsp+2Ch] [xbp-54h] BYREF

  v7 = this;
  if ( (byte_42EB00C & 1) == 0 )
  {
    sub_B5D5C4(&BattleActionData_TypeInfo, (_DWORD)mainAction, (_DWORD)funcTarget, result);
    sub_B5D5C4(&System_IDisposable_TypeInfo, v8, v9, v10);
    sub_B5D5C4(
      &System_Collections_Generic_IEnumerable_BattleLogicFunctionProcess_FunctionTargetCheck__TypeInfo,
      v11,
      v12,
      v13);
    sub_B5D5C4(
      &System_Collections_Generic_IEnumerator_BattleLogicFunctionProcess_FunctionTargetCheck__TypeInfo,
      v14,
      v15,
      v16);
    sub_B5D5C4(&System_Collections_IEnumerator_TypeInfo, v17, v18, v19);
    sub_B5D5C4(&Method_System_Collections_Generic_List_FuncList_TYPE__Add__, v20, v21, v22);
    sub_B5D5C4(&Method_System_Collections_Generic_List_FuncList_TYPE___ctor__, v23, v24, v25);
    this = (BattleLogicFunction_o *)sub_B5D5C4(&System_Collections_Generic_List_FuncList_TYPE__TypeInfo, v26, v27, v28);
    byte_42EB00C = 1;
  }
  diffNp = 0;
  v84 = 0;
  if ( !funcTarget )
    goto LABEL_65;
  funcUnit_k__BackingField = funcTarget->fields._funcUnit_k__BackingField;
  if ( !funcUnit_k__BackingField )
    goto LABEL_65;
  procArg_k__BackingField = funcUnit_k__BackingField->fields._procArg_k__BackingField;
  dataVals_k__BackingField = funcUnit_k__BackingField->fields._dataVals_k__BackingField;
  v32 = (BattleActionData_o *)sub_B5D694(BattleActionData_TypeInfo);
  BattleActionData___ctor(v32, 0LL);
  v33 = (System_Collections_Generic_List_VoiceCondType_Type__o *)sub_B5D694(System_Collections_Generic_List_FuncList_TYPE__TypeInfo);
  System_Collections_Generic_List_VoiceCondType_Type____ctor(
    v33,
    (const MethodInfo_3043A54 *)Method_System_Collections_Generic_List_FuncList_TYPE___ctor__);
  if ( !v33 )
    goto LABEL_65;
  System_Collections_Generic_List_VoiceCondType_Type___Add(
    v33,
    8,
    (const MethodInfo_30447B0 *)Method_System_Collections_Generic_List_FuncList_TYPE__Add__);
  if ( !dataVals_k__BackingField )
    goto LABEL_65;
  this = (BattleLogicFunction_o *)DataVals__GetDependDataValsArray(
                                    dataVals_k__BackingField,
                                    (System_Collections_Generic_List_FuncList_TYPE__o *)v33,
                                    0,
                                    0LL);
  if ( !this )
    goto LABEL_65;
  logic = this->fields.logic;
  if ( (int)logic >= 1 )
  {
    v35 = 0LL;
    v36 = 0;
    v79 = this;
    while ( 1 )
    {
      if ( v35 >= (unsigned int)logic )
      {
        v78 = sub_B5D6C8(this);
        sub_B5D668(v78, 0LL);
      }
      v37 = (DataVals_o *)*((_QWORD *)&this->fields.logictarget + v35);
      diffNp = 0;
      if ( !result )
        break;
      this = (BattleLogicFunction_o *)result->fields._Convert_k__BackingField;
      v80 = v36;
      v81 = v35;
      if ( !this )
        break;
      ((void (__fastcall *)(BattleLogicFunction_o *, DataVals_o *, void *))this->klass[1]._1.namespaze)(
        this,
        v37,
        this->klass[1]._1.byval_arg.data);
      this = (BattleLogicFunction_o *)BattleLogicFunction__GetDependFuncTargets(
                                        v7,
                                        procArg_k__BackingField,
                                        mainAction,
                                        v37,
                                        v38);
      if ( !this )
        break;
      klass = this->klass;
      v41 = this;
      if ( *(_WORD *)&this->klass->_2.bitflags1 )
      {
        v42 = 0LL;
        p_offset = &klass->_1.interfaceOffsets->offset;
        while ( *((System_Collections_Generic_IEnumerable_BattleLogicFunctionProcess_FunctionTargetCheck__c **)p_offset
                - 1) != System_Collections_Generic_IEnumerable_BattleLogicFunctionProcess_FunctionTargetCheck__TypeInfo )
        {
          ++v42;
          p_offset += 4;
          if ( v42 >= *(unsigned __int16 *)&this->klass->_2.bitflags1 )
            goto LABEL_25;
        }
        v44 = (__int64)(&klass->vtable._0_Equals.method + 2 * *p_offset);
      }
      else
      {
LABEL_25:
        v44 = sub_AF54C0(
                this,
                System_Collections_Generic_IEnumerable_BattleLogicFunctionProcess_FunctionTargetCheck__TypeInfo,
                0LL,
                v39);
      }
      v47 = (*(__int64 (__fastcall **)(BattleLogicFunction_o *, _QWORD))v44)(v41, *(_QWORD *)(v44 + 8));
      if ( !v47 )
        sub_B5D69C(0LL, v45);
      while ( 1 )
      {
        v48 = *(_QWORD *)v47;
        if ( *(_WORD *)(*(_QWORD *)v47 + 298LL) )
        {
          v49 = 0LL;
          v50 = (int *)(*(_QWORD *)(v48 + 176) + 8LL);
          while ( *((System_Collections_IEnumerator_c **)v50 - 1) != System_Collections_IEnumerator_TypeInfo )
          {
            ++v49;
            v50 += 4;
            if ( v49 >= *(unsigned __int16 *)(*(_QWORD *)v47 + 298LL) )
              goto LABEL_32;
          }
          v51 = v48 + 16LL * *v50 + 312;
        }
        else
        {
LABEL_32:
          v51 = sub_AF54C0(v47, System_Collections_IEnumerator_TypeInfo, 0LL, v46);
        }
        if ( ((*(__int64 (__fastcall **)(__int64, _QWORD))v51)(v47, *(_QWORD *)(v51 + 8)) & 1) == 0 )
          break;
        v53 = *(_QWORD *)v47;
        if ( *(_WORD *)(*(_QWORD *)v47 + 298LL) )
        {
          v54 = 0LL;
          v55 = (int *)(*(_QWORD *)(v53 + 176) + 8LL);
          while ( *((System_Collections_Generic_IEnumerator_BattleLogicFunctionProcess_FunctionTargetCheck__c **)v55 - 1) != System_Collections_Generic_IEnumerator_BattleLogicFunctionProcess_FunctionTargetCheck__TypeInfo )
          {
            ++v54;
            v55 += 4;
            if ( v54 >= *(unsigned __int16 *)(*(_QWORD *)v47 + 298LL) )
              goto LABEL_39;
          }
          v56 = v53 + 16LL * *v55 + 312;
        }
        else
        {
LABEL_39:
          v56 = sub_AF54C0(
                  v47,
                  System_Collections_Generic_IEnumerator_BattleLogicFunctionProcess_FunctionTargetCheck__TypeInfo,
                  0LL,
                  v52);
        }
        v57 = (*(__int64 (__fastcall **)(__int64, _QWORD))v56)(v47, *(_QWORD *)(v56 + 8));
        v59 = v57;
        if ( !v57 )
          sub_B5D69C(0LL, v58);
        v60 = (*(__int64 (__fastcall **)(__int64, BattleActionData_o *, _QWORD))(*(_QWORD *)v57 + 392LL))(
                v57,
                mainAction,
                *(_QWORD *)(*(_QWORD *)v57 + 400LL));
        if ( (v60 & 1) != 0 )
        {
          if ( !mainAction )
            sub_B5D69C(v60, v61);
          v64 = *(_DWORD *)(v59 + 32);
          v65 = BattleLogicFunction__functionLossNp(v7, procArg_k__BackingField, v62, v64, v37, &diffNp, v63);
          v66 = diffNp;
          if ( diffNp < 1 )
          {
            if ( v65 )
            {
              if ( !v37 )
                sub_B5D69C(v65, v65);
              if ( !procArg_k__BackingField )
                sub_B5D69C(v65, v65);
              funcIndex = v37->fields.funcIndex;
              IsCommandSideEffect = BattleLogicFunction_ProcListInArgs__get_IsCommandSideEffect(
                                      procArg_k__BackingField,
                                      0LL);
              NoEffectObject = BattleLogicFunction__getNoEffectObject(
                                 v7,
                                 v64,
                                 funcIndex,
                                 v37,
                                 IsCommandSideEffect,
                                 0LL,
                                 0LL,
                                 v69);
              if ( !v32 )
                sub_B5D69C(NoEffectObject, NoEffectObject);
              BattleActionData__addAction(v32, NoEffectObject, 0LL);
            }
          }
          else
          {
            if ( !v32 )
              sub_B5D69C(v65, v65);
            BattleActionData__addAction(v32, v65, 0LL);
            NpGaugeAbsorbResult__AddPoint(result, v66, 0LL);
          }
        }
      }
      v83[v80] = 229;
      v71 = ++v84;
      v72 = *(_QWORD *)v47;
      v73 = v71;
      if ( *(_WORD *)(*(_QWORD *)v47 + 298LL) )
      {
        v74 = 0LL;
        v75 = (int *)(*(_QWORD *)(v72 + 176) + 8LL);
        while ( *((System_IDisposable_c **)v75 - 1) != System_IDisposable_TypeInfo )
        {
          ++v74;
          v75 += 4;
          if ( v74 >= *(unsigned __int16 *)(*(_QWORD *)v47 + 298LL) )
            goto LABEL_57;
        }
        v76 = v72 + 16LL * *v75 + 312;
      }
      else
      {
LABEL_57:
        v76 = sub_AF54C0(v47, System_IDisposable_TypeInfo, 0LL, v52);
      }
      (*(void (__fastcall **)(__int64, _QWORD))v76)(v47, *(_QWORD *)(v76 + 8));
      v36 = v73;
      if ( v73 && v83[v73 - 1] == 229 )
      {
        v36 = v73 - 1;
        v84 = v73 - 1;
      }
      this = v79;
      LODWORD(logic) = v79->fields.logic;
      v35 = v81 + 1;
      if ( (__int64)(v81 + 1) >= (int)logic )
        return v32;
    }
LABEL_65:
    sub_B5D69C(this, mainAction);
  }
  return v32;
}


BattleActionData_o *__fastcall BattleLogicFunction__AbsorbNpTurn(
        BattleLogicFunction_o *this,
        BattleActionData_o *mainAction,
        BattleLogicFunctionProcess_FunctionTargetCheck_o *funcTarget,
        NpGaugeAbsorbResult_o *result,
        const MethodInfo *method)
{
  int v7; // w1
  int v8; // w2
  __int64 v9; // x3
  int v10; // w1
  int v11; // w2
  __int64 v12; // x3
  int v13; // w1
  int v14; // w2
  __int64 v15; // x3
  int v16; // w1
  int v17; // w2
  __int64 v18; // x3
  int v19; // w1
  int v20; // w2
  __int64 v21; // x3
  int v22; // w1
  int v23; // w2
  __int64 v24; // x3
  int v25; // w1
  int v26; // w2
  __int64 v27; // x3
  struct BattleLogicFunctionProcess_FunctionUnitCheck_o *funcUnit_k__BackingField; // x8
  DataVals_o *dataVals_k__BackingField; // x24
  BattleLogicFunction_ProcListInArgs_o *procArg_k__BackingField; // x22
  BattleActionData_o *v31; // x23
  System_Collections_Generic_List_VoiceCondType_Type__o *v32; // x25
  struct BattleLogic_o *logic; // x8
  unsigned __int64 v34; // x9
  int v35; // w10
  DataVals_o *v36; // x26
  const MethodInfo *v37; // x4
  __int64 v38; // x3
  BattleLogicFunction_c *klass; // x8
  BattleLogicFunction_o *v40; // x25
  unsigned __int64 v41; // x10
  int32_t *p_offset; // x11
  __int64 v43; // x0
  __int64 v44; // x1
  __int64 v45; // x3
  __int64 v46; // x25
  __int64 v47; // x8
  unsigned __int64 v48; // x10
  int *v49; // x11
  __int64 v50; // x0
  __int64 v51; // x3
  __int64 v52; // x8
  unsigned __int64 v53; // x10
  int *v54; // x11
  __int64 v55; // x0
  __int64 v56; // x0
  __int64 v57; // x1
  __int64 v58; // x27
  __int64 v59; // x0
  __int64 v60; // x1
  int32_t v61; // w27
  FunctionEntity_o *funcEnt; // x28
  int32_t funcIndex; // w24
  bool IsCommandSideEffect; // w0
  const MethodInfo *v65; // x7
  BattleActionData_o *v66; // x0
  int v67; // w10
  __int64 v68; // x8
  int v69; // w24
  unsigned __int64 v70; // x10
  int *v71; // x11
  __int64 v72; // x0
  __int64 v74; // x0
  BattleLogicFunction_o *v75; // [xsp+8h] [xbp-88h]
  unsigned __int64 v76; // [xsp+10h] [xbp-80h]
  int v77; // [xsp+1Ch] [xbp-74h]
  BattleLogicFunction_o *v79; // [xsp+28h] [xbp-68h]
  _DWORD v80[1]; // [xsp+30h] [xbp-60h]
  int v81; // [xsp+34h] [xbp-5Ch]
  int32_t absorptionCount; // [xsp+3Ch] [xbp-54h] BYREF

  v79 = this;
  if ( (byte_42EB00B & 1) == 0 )
  {
    sub_B5D5C4(&BattleActionData_TypeInfo, (_DWORD)mainAction, (_DWORD)funcTarget, result);
    sub_B5D5C4(&System_IDisposable_TypeInfo, v7, v8, v9);
    sub_B5D5C4(
      &System_Collections_Generic_IEnumerable_BattleLogicFunctionProcess_FunctionTargetCheck__TypeInfo,
      v10,
      v11,
      v12);
    sub_B5D5C4(
      &System_Collections_Generic_IEnumerator_BattleLogicFunctionProcess_FunctionTargetCheck__TypeInfo,
      v13,
      v14,
      v15);
    sub_B5D5C4(&System_Collections_IEnumerator_TypeInfo, v16, v17, v18);
    sub_B5D5C4(&Method_System_Collections_Generic_List_FuncList_TYPE__Add__, v19, v20, v21);
    sub_B5D5C4(&Method_System_Collections_Generic_List_FuncList_TYPE___ctor__, v22, v23, v24);
    this = (BattleLogicFunction_o *)sub_B5D5C4(&System_Collections_Generic_List_FuncList_TYPE__TypeInfo, v25, v26, v27);
    byte_42EB00B = 1;
  }
  absorptionCount = 0;
  v81 = 0;
  if ( !funcTarget )
    goto LABEL_59;
  funcUnit_k__BackingField = funcTarget->fields._funcUnit_k__BackingField;
  if ( !funcUnit_k__BackingField )
    goto LABEL_59;
  dataVals_k__BackingField = funcUnit_k__BackingField->fields._dataVals_k__BackingField;
  if ( !dataVals_k__BackingField )
    goto LABEL_59;
  procArg_k__BackingField = funcUnit_k__BackingField->fields._procArg_k__BackingField;
  v31 = (BattleActionData_o *)sub_B5D694(BattleActionData_TypeInfo);
  BattleActionData___ctor(v31, 0LL);
  v32 = (System_Collections_Generic_List_VoiceCondType_Type__o *)sub_B5D694(System_Collections_Generic_List_FuncList_TYPE__TypeInfo);
  System_Collections_Generic_List_VoiceCondType_Type____ctor(
    v32,
    (const MethodInfo_3043A54 *)Method_System_Collections_Generic_List_FuncList_TYPE___ctor__);
  if ( !v32 )
    goto LABEL_59;
  System_Collections_Generic_List_VoiceCondType_Type___Add(
    v32,
    20,
    (const MethodInfo_30447B0 *)Method_System_Collections_Generic_List_FuncList_TYPE__Add__);
  this = (BattleLogicFunction_o *)DataVals__GetDependDataValsArray(
                                    dataVals_k__BackingField,
                                    (System_Collections_Generic_List_FuncList_TYPE__o *)v32,
                                    0,
                                    0LL);
  if ( !this )
    goto LABEL_59;
  logic = this->fields.logic;
  if ( (int)logic >= 1 )
  {
    v34 = 0LL;
    v35 = 0;
    v75 = this;
    while ( 1 )
    {
      if ( v34 >= (unsigned int)logic )
      {
        v74 = sub_B5D6C8(this);
        sub_B5D668(v74, 0LL);
      }
      v36 = (DataVals_o *)*((_QWORD *)&this->fields.logictarget + v34);
      absorptionCount = 0;
      if ( !result )
        break;
      this = (BattleLogicFunction_o *)result->fields._Convert_k__BackingField;
      v77 = v35;
      v76 = v34;
      if ( !this )
        break;
      ((void (__fastcall *)(BattleLogicFunction_o *, DataVals_o *, void *))this->klass[1]._1.namespaze)(
        this,
        v36,
        this->klass[1]._1.byval_arg.data);
      this = (BattleLogicFunction_o *)BattleLogicFunction__GetDependFuncTargets(
                                        v79,
                                        procArg_k__BackingField,
                                        mainAction,
                                        v36,
                                        v37);
      if ( !this )
        break;
      klass = this->klass;
      v40 = this;
      if ( *(_WORD *)&this->klass->_2.bitflags1 )
      {
        v41 = 0LL;
        p_offset = &klass->_1.interfaceOffsets->offset;
        while ( *((System_Collections_Generic_IEnumerable_BattleLogicFunctionProcess_FunctionTargetCheck__c **)p_offset
                - 1) != System_Collections_Generic_IEnumerable_BattleLogicFunctionProcess_FunctionTargetCheck__TypeInfo )
        {
          ++v41;
          p_offset += 4;
          if ( v41 >= *(unsigned __int16 *)&this->klass->_2.bitflags1 )
            goto LABEL_23;
        }
        v43 = (__int64)(&klass->vtable._0_Equals.method + 2 * *p_offset);
      }
      else
      {
LABEL_23:
        v43 = sub_AF54C0(
                this,
                System_Collections_Generic_IEnumerable_BattleLogicFunctionProcess_FunctionTargetCheck__TypeInfo,
                0LL,
                v38);
      }
      v46 = (*(__int64 (__fastcall **)(BattleLogicFunction_o *, _QWORD))v43)(v40, *(_QWORD *)(v43 + 8));
      if ( !v46 )
        sub_B5D69C(0LL, v44);
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
              goto LABEL_30;
          }
          v50 = v47 + 16LL * *v49 + 312;
        }
        else
        {
LABEL_30:
          v50 = sub_AF54C0(v46, System_Collections_IEnumerator_TypeInfo, 0LL, v45);
        }
        if ( ((*(__int64 (__fastcall **)(__int64, _QWORD))v50)(v46, *(_QWORD *)(v50 + 8)) & 1) == 0 )
          break;
        v52 = *(_QWORD *)v46;
        if ( *(_WORD *)(*(_QWORD *)v46 + 298LL) )
        {
          v53 = 0LL;
          v54 = (int *)(*(_QWORD *)(v52 + 176) + 8LL);
          while ( *((System_Collections_Generic_IEnumerator_BattleLogicFunctionProcess_FunctionTargetCheck__c **)v54 - 1) != System_Collections_Generic_IEnumerator_BattleLogicFunctionProcess_FunctionTargetCheck__TypeInfo )
          {
            ++v53;
            v54 += 4;
            if ( v53 >= *(unsigned __int16 *)(*(_QWORD *)v46 + 298LL) )
              goto LABEL_37;
          }
          v55 = v52 + 16LL * *v54 + 312;
        }
        else
        {
LABEL_37:
          v55 = sub_AF54C0(
                  v46,
                  System_Collections_Generic_IEnumerator_BattleLogicFunctionProcess_FunctionTargetCheck__TypeInfo,
                  0LL,
                  v51);
        }
        v56 = (*(__int64 (__fastcall **)(__int64, _QWORD))v55)(v46, *(_QWORD *)(v55 + 8));
        v58 = v56;
        if ( !v56 )
          sub_B5D69C(0LL, v57);
        v59 = (*(__int64 (__fastcall **)(__int64, BattleActionData_o *, _QWORD))(*(_QWORD *)v56 + 392LL))(
                v56,
                mainAction,
                *(_QWORD *)(*(_QWORD *)v56 + 400LL));
        if ( (v59 & 1) != 0 )
        {
          if ( !v36 )
            sub_B5D69C(v59, v60);
          if ( !procArg_k__BackingField )
            sub_B5D69C(v59, v60);
          v61 = *(_DWORD *)(v58 + 32);
          funcEnt = v36->fields.funcEnt;
          funcIndex = v36->fields.funcIndex;
          IsCommandSideEffect = BattleLogicFunction_ProcListInArgs__get_IsCommandSideEffect(
                                  procArg_k__BackingField,
                                  0LL);
          v66 = BattleLogicFunction__functionDelayNpTurn(
                  v79,
                  v61,
                  funcEnt,
                  v36,
                  funcIndex,
                  IsCommandSideEffect,
                  &absorptionCount,
                  v65);
          if ( !v31 )
            sub_B5D69C(v66, v66);
          BattleActionData__addAction(v31, v66, 0LL);
          if ( absorptionCount >= 1 )
            NpGaugeAbsorbResult__AddTurn(result, absorptionCount, 0LL);
        }
      }
      v80[v77] = 209;
      v67 = ++v81;
      v68 = *(_QWORD *)v46;
      v69 = v67;
      if ( *(_WORD *)(*(_QWORD *)v46 + 298LL) )
      {
        v70 = 0LL;
        v71 = (int *)(*(_QWORD *)(v68 + 176) + 8LL);
        while ( *((System_IDisposable_c **)v71 - 1) != System_IDisposable_TypeInfo )
        {
          ++v70;
          v71 += 4;
          if ( v70 >= *(unsigned __int16 *)(*(_QWORD *)v46 + 298LL) )
            goto LABEL_51;
        }
        v72 = v68 + 16LL * *v71 + 312;
      }
      else
      {
LABEL_51:
        v72 = sub_AF54C0(v46, System_IDisposable_TypeInfo, 0LL, v51);
      }
      (*(void (__fastcall **)(__int64, _QWORD))v72)(v46, *(_QWORD *)(v72 + 8));
      v35 = v69;
      if ( v69 && v80[v69 - 1] == 209 )
      {
        v35 = v69 - 1;
        v81 = v69 - 1;
      }
      this = v75;
      LODWORD(logic) = v75->fields.logic;
      v34 = v76 + 1;
      if ( (__int64)(v76 + 1) >= (int)logic )
        return v31;
    }
LABEL_59:
    sub_B5D69C(this, mainAction);
  }
  return v31;
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
  if ( (byte_42EAFE7 & 1) == 0 )
  {
    this = (BattleLogicFunction_o *)sub_B5D5C4(
                                      &UnityEngine_Object_TypeInfo,
                                      (_DWORD)targetSvtData,
                                      (_DWORD)buffEnt,
                                      method);
    byte_42EAFE7 = 1;
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
      sub_B5D69C(this, targetSvtData);
    }
  }
}


void __fastcall BattleLogicFunction__BehaveLinkageBuffAsFamily(
        BattleLogicFunction_o *this,
        BattleBuffData_BuffData_o *buffData,
        BattleLogicFunctionProcess_FunctionTargetCheck_o *funcTarget,
        const MethodInfo *method)
{
  int v7; // w1
  int v8; // w2
  __int64 v9; // x3
  int v10; // w1
  int v11; // w2
  __int64 v12; // x3
  int v13; // w1
  int v14; // w2
  __int64 v15; // x3
  int v16; // w1
  int v17; // w2
  __int64 v18; // x3
  int v19; // w1
  int v20; // w2
  __int64 v21; // x3
  __int64 v22; // x22
  BattleData_o *data; // x0
  __int64 v24; // x1
  System_String_array **v25; // x2
  System_String_array **v26; // x3
  System_Boolean_array **v27; // x4
  System_Int32_array **v28; // x5
  System_Int32_array *v29; // x6
  System_Int32_array *v30; // x7
  __int64 v31; // x8
  System_Int32_array **ServantData; // x0
  System_String_array **v33; // x2
  System_String_array **v34; // x3
  System_Boolean_array **v35; // x4
  System_Int32_array **v36; // x5
  System_Int32_array *v37; // x6
  System_Int32_array *v38; // x7
  System_Func_int__int__o *v39; // x20
  System_Collections_Generic_IEnumerable_TSource__o *v40; // x0
  struct System_Int32_array *v41; // x0
  System_String_array **v42; // x2
  System_String_array **v43; // x3
  System_Boolean_array **v44; // x4
  System_Int32_array **v45; // x5
  System_Int32_array *v46; // x6
  System_Int32_array *v47; // x7
  System_Collections_Generic_IEnumerable_TSource__o *v48; // x0
  struct System_Int32_array *v49; // x0
  System_String_array **v50; // x2
  System_String_array **v51; // x3
  System_Boolean_array **v52; // x4
  System_Int32_array **v53; // x5
  System_Int32_array *v54; // x6
  System_Int32_array *v55; // x7

  if ( (byte_42EAFF1 & 1) == 0 )
  {
    sub_B5D5C4(&Method_System_Linq_Enumerable_Select_int__int___, (_DWORD)buffData, (_DWORD)funcTarget, method);
    sub_B5D5C4(&Method_System_Linq_Enumerable_ToArray_int___, v7, v8, v9);
    sub_B5D5C4(&Method_System_Func_int__int___ctor__, v10, v11, v12);
    sub_B5D5C4(&System_Func_int__int__TypeInfo, v13, v14, v15);
    sub_B5D5C4(&Method_BattleLogicFunction___c__DisplayClass68_0__BehaveLinkageBuffAsFamily_b__0__, v16, v17, v18);
    sub_B5D5C4(&BattleLogicFunction___c__DisplayClass68_0_TypeInfo, v19, v20, v21);
    byte_42EAFF1 = 1;
  }
  v22 = sub_B5D694(BattleLogicFunction___c__DisplayClass68_0_TypeInfo);
  BattleLogicFunction___c__DisplayClass68_0___ctor((BattleLogicFunction___c__DisplayClass68_0_o *)v22, 0LL);
  if ( !v22 )
    goto LABEL_13;
  *(_QWORD *)(v22 + 16) = funcTarget;
  sub_B5D560(
    (BattleServantConfConponent_o *)(v22 + 16),
    (System_Int32_array **)funcTarget,
    v25,
    v26,
    v27,
    v28,
    v29,
    v30);
  v31 = *(_QWORD *)(v22 + 16);
  if ( !v31 )
    goto LABEL_13;
  data = this->fields.data;
  if ( !data )
    goto LABEL_13;
  ServantData = (System_Int32_array **)BattleData__getServantData(data, *(_DWORD *)(v31 + 32), 0LL);
  *(_QWORD *)(v22 + 24) = ServantData;
  sub_B5D560((BattleServantConfConponent_o *)(v22 + 24), ServantData, v33, v34, v35, v36, v37, v38);
  if ( !*(_QWORD *)(v22 + 24) )
    return;
  v39 = (System_Func_int__int__o *)sub_B5D694(System_Func_int__int__TypeInfo);
  System_Func_int__int____ctor(
    v39,
    (Il2CppObject *)v22,
    Method_BattleLogicFunction___c__DisplayClass68_0__BehaveLinkageBuffAsFamily_b__0__,
    (const MethodInfo_2C29044 *)Method_System_Func_int__int___ctor__);
  if ( !buffData )
LABEL_13:
    sub_B5D69C(data, v24);
  if ( !BasicHelper__IsNullOrEmpty((System_Collections_ICollection_o *)buffData->fields.addIndividualty, 0LL) )
  {
    v40 = (System_Collections_Generic_IEnumerable_TSource__o *)System_Linq_Enumerable__Select_int__int_(
                                                                 (System_Collections_Generic_IEnumerable_TSource__o *)buffData->fields.addIndividualty,
                                                                 (System_Func_TSource__TResult__o *)v39,
                                                                 (const MethodInfo_1CB17E8 *)Method_System_Linq_Enumerable_Select_int__int___);
    v41 = System_Linq_Enumerable__ToArray_int_(
            v40,
            (const MethodInfo_1CB76BC *)Method_System_Linq_Enumerable_ToArray_int___);
    buffData->fields.familyLinkageIds = v41;
    sub_B5D560(
      (BattleServantConfConponent_o *)&buffData->fields.familyLinkageIds,
      (System_Int32_array **)v41,
      v42,
      v43,
      v44,
      v45,
      v46,
      v47);
    BattleBuffData_BuffData__onState(buffData, 0x400000, 0LL);
  }
  if ( !BasicHelper__IsNullOrEmpty((System_Collections_ICollection_o *)buffData->fields.linkageTargetIndividualty, 0LL) )
  {
    v48 = (System_Collections_Generic_IEnumerable_TSource__o *)System_Linq_Enumerable__Select_int__int_(
                                                                 (System_Collections_Generic_IEnumerable_TSource__o *)buffData->fields.linkageTargetIndividualty,
                                                                 (System_Func_TSource__TResult__o *)v39,
                                                                 (const MethodInfo_1CB17E8 *)Method_System_Linq_Enumerable_Select_int__int___);
    v49 = System_Linq_Enumerable__ToArray_int_(
            v48,
            (const MethodInfo_1CB76BC *)Method_System_Linq_Enumerable_ToArray_int___);
    buffData->fields.linkageTargetIndividualty = v49;
    sub_B5D560(
      (BattleServantConfConponent_o *)&buffData->fields.linkageTargetIndividualty,
      (System_Int32_array **)v49,
      v50,
      v51,
      v52,
      v53,
      v54,
      v55);
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
    sub_B5D69C(this, funcEnt);
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
    sub_B5D69C(this, baseVals);
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
    v16 = sub_B5D6C8(this);
    sub_B5D668(v16, 0LL);
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
  int v7; // w1
  int v8; // w2
  __int64 v9; // x3
  BattleData_o *data; // x23
  struct BattleFieldEnvironmentData_o *FieldEnvData_k__BackingField; // x21
  int32_t id; // w24
  Generator_BGMFromChangeBGMFunc_o *v13; // x22
  UnityEngine_Object_o *logic; // x20

  v6 = this;
  if ( (byte_42EB01D & 1) == 0 )
  {
    sub_B5D5C4(&Generator_BGMFromChangeBGMFunc_TypeInfo, (_DWORD)bgmEnt, (_DWORD)baseVals, method);
    this = (BattleLogicFunction_o *)sub_B5D5C4(&UnityEngine_Object_TypeInfo, v7, v8, v9);
    byte_42EB01D = 1;
  }
  data = v6->fields.data;
  if ( !data )
    goto LABEL_17;
  FieldEnvData_k__BackingField = data->fields._FieldEnvData_k__BackingField;
  if ( bgmEnt )
  {
    id = bgmEnt->fields.id;
    v13 = (Generator_BGMFromChangeBGMFunc_o *)sub_B5D694(Generator_BGMFromChangeBGMFunc_TypeInfo);
    Generator_BGMFromChangeBGMFunc___ctor(v13, data, id, baseVals, 1, 0LL);
    if ( !FieldEnvData_k__BackingField )
      goto LABEL_17;
    ((void (__fastcall *)(struct BattleFieldEnvironmentData_o *, Generator_BGMFromChangeBGMFunc_o *, __int64, Il2CppMethodPointer))FieldEnvData_k__BackingField->klass->vtable._6_AddBGM.method)(
      FieldEnvData_k__BackingField,
      v13,
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
    sub_B5D69C(this, bgmEnt);
  }
}


// local variable allocation has failed, the output may be wrong!
BgmEntity_o *__fastcall BattleLogicFunction__ChangeBgmSvt(
        BattleLogicFunction_o *this,
        int32_t uniqueID,
        BattleActionData_o *actionData,
        const MethodInfo *method)
{
  int v7; // w1
  int v8; // w2
  __int64 v9; // x3
  int v10; // w1
  int v11; // w2
  __int64 v12; // x3
  int v13; // w1
  int v14; // w2
  __int64 v15; // x3
  int v16; // w1
  int v17; // w2
  __int64 v18; // x3
  int v19; // w1
  int v20; // w2
  __int64 v21; // x3
  int v22; // w1
  int v23; // w2
  __int64 v24; // x3
  int v25; // w1
  int v26; // w2
  __int64 v27; // x3
  int v28; // w1
  int v29; // w2
  __int64 v30; // x3
  BgmEntity_o *result; // x0
  __int64 v32; // x22
  __int64 v33; // x22
  DataManager_o *MasterData_WarQuestSelectionMaster; // x0
  struct BattleSkillInfoData_o *skillInfo; // x8
  SkillLvMaster_o *v36; // x22
  struct BattleSkillInfoData_o *v37; // x8
  SkillLvEntity_o *v38; // x22
  DataMasterBase_WarMaster__WarEntity__int__o *v39; // x19
  BattleData_o *data; // x8
  DataManager_o *v41; // x20
  int datalist; // w8
  System_Int32_array *v43; // x21
  unsigned int v44; // w24
  __int64 v45; // x8
  __int64 v46; // x8
  int32_t v47; // w22
  int64_t v48; // x23
  __int64 v49; // x8
  __int64 v50; // x9
  WarEntity_o *entity; // [xsp+8h] [xbp-58h] BYREF

  if ( (byte_42EB01C & 1) == 0 )
  {
    sub_B5D5C4(&Method_System_Array_IndexOf_int___, uniqueID, (_DWORD)actionData, method);
    sub_B5D5C4(&CondType_TypeInfo, v7, v8, v9);
    sub_B5D5C4(&Method_DataManager_GetMasterData_BgmMaster___, v10, v11, v12);
    sub_B5D5C4(&Method_DataManager_GetMasterData_SkillLvMaster___, v13, v14, v15);
    sub_B5D5C4(&Method_DataMasterBase_BgmMaster__BgmEntity__int__TryGetEntity__, v16, v17, v18);
    sub_B5D5C4(&Method_System_Collections_Generic_List_SkillLvEntity_SvtChangeBgm__get_Count__, v19, v20, v21);
    sub_B5D5C4(&Method_System_Collections_Generic_List_SkillLvEntity_SvtChangeBgm__get_Item__, v22, v23, v24);
    sub_B5D5C4(&Method_SingletonMonoBehaviour_DataManager__getInstance__, v25, v26, v27);
    sub_B5D5C4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v28, v29, v30);
    byte_42EB01C = 1;
  }
  result = 0LL;
  entity = 0LL;
  if ( uniqueID != -1 && actionData )
  {
    v32 = *((_QWORD *)Method_SingletonMonoBehaviour_DataManager__getInstance__ + 3);
    if ( (*(_BYTE *)(v32 + 306) & 1) == 0 )
      sub_AF52C4(*((_QWORD *)Method_SingletonMonoBehaviour_DataManager__getInstance__ + 3));
    v33 = **(_QWORD **)(v32 + 192);
    if ( (*(_BYTE *)(v33 + 306) & 1) == 0 )
      sub_AF52C4(v33);
    MasterData_WarQuestSelectionMaster = **(DataManager_o ***)(v33 + 184);
    if ( !MasterData_WarQuestSelectionMaster )
      goto LABEL_42;
    MasterData_WarQuestSelectionMaster = (DataManager_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                            MasterData_WarQuestSelectionMaster,
                                                            (const MethodInfo_1AE424C *)Method_DataManager_GetMasterData_SkillLvMaster___);
    skillInfo = actionData->fields.skillInfo;
    if ( !skillInfo )
      goto LABEL_42;
    v36 = (SkillLvMaster_o *)MasterData_WarQuestSelectionMaster;
    MasterData_WarQuestSelectionMaster = (DataManager_o *)((__int64 (__fastcall *)(struct BattleSkillInfoData_o *, Il2CppMethodPointer))skillInfo->klass->vtable._5_get_skillId.method)(
                                                            actionData->fields.skillInfo,
                                                            skillInfo->klass->vtable._6_get_IndividualityArray.methodPtr);
    v37 = actionData->fields.skillInfo;
    if ( !v37 )
      goto LABEL_42;
    if ( !v36 )
      goto LABEL_42;
    v38 = SkillLvMaster__GetEntity(v36, (int32_t)MasterData_WarQuestSelectionMaster, v37->fields.skilllv, 0LL);
    MasterData_WarQuestSelectionMaster = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !MasterData_WarQuestSelectionMaster )
      goto LABEL_42;
    MasterData_WarQuestSelectionMaster = (DataManager_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                            MasterData_WarQuestSelectionMaster,
                                                            (const MethodInfo_1AE424C *)Method_DataManager_GetMasterData_BgmMaster___);
    if ( !v38 )
      goto LABEL_42;
    v39 = (DataMasterBase_WarMaster__WarEntity__int__o *)MasterData_WarQuestSelectionMaster;
    MasterData_WarQuestSelectionMaster = (DataManager_o *)SkillLvEntity__GetSvtChangeBgm(v38, 0LL);
    data = this->fields.data;
    if ( !data )
      goto LABEL_42;
    v41 = MasterData_WarQuestSelectionMaster;
    MasterData_WarQuestSelectionMaster = (DataManager_o *)BattleData__getPlayerServantData(data, uniqueID, 0LL);
    if ( !MasterData_WarQuestSelectionMaster )
      goto LABEL_42;
    MasterData_WarQuestSelectionMaster = (DataManager_o *)BattleServantData__getIndividualities(
                                                            (BattleServantData_o *)MasterData_WarQuestSelectionMaster,
                                                            0LL,
                                                            0LL);
    if ( !v41 )
      goto LABEL_42;
    datalist = (int)v41->fields.datalist;
    if ( datalist >= 1 )
    {
      v43 = (System_Int32_array *)MasterData_WarQuestSelectionMaster;
      v44 = 0;
      while ( 1 )
      {
        if ( datalist <= v44 )
          System_ThrowHelper__ThrowArgumentOutOfRangeException_42302284(0LL);
        v45 = *(_QWORD *)(*(_QWORD *)&v41->fields.m_CachedPtr + 8LL * (int)v44 + 32);
        if ( !v45 )
          break;
        MasterData_WarQuestSelectionMaster = (DataManager_o *)System_Array__IndexOf_int_(
                                                                v43,
                                                                *(_DWORD *)(v45 + 16),
                                                                (const MethodInfo_1FC176C *)Method_System_Array_IndexOf_int___);
        if ( (_DWORD)MasterData_WarQuestSelectionMaster != -1 )
        {
          if ( LODWORD(v41->fields.datalist) <= v44 )
            System_ThrowHelper__ThrowArgumentOutOfRangeException_42302284(0LL);
          v46 = *(_QWORD *)(*(_QWORD *)&v41->fields.m_CachedPtr + 8LL * (int)v44 + 32);
          if ( !v46 )
            break;
          v47 = *(_DWORD *)(v46 + 20);
          if ( LODWORD(v41->fields.datalist) <= v44 )
            System_ThrowHelper__ThrowArgumentOutOfRangeException_42302284(0LL);
          v48 = *(int *)(v46 + 24);
          if ( (BYTE3(CondType_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !CondType_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(CondType_TypeInfo);
          MasterData_WarQuestSelectionMaster = (DataManager_o *)CondType__IsOpen(46, v47, v48, 0, 0LL);
          if ( LODWORD(v41->fields.datalist) <= v44 )
            System_ThrowHelper__ThrowArgumentOutOfRangeException_42302284(0LL);
          v49 = *(_QWORD *)(*(_QWORD *)&v41->fields.m_CachedPtr + 8LL * (int)v44 + 32);
          if ( !v49 || !v39 )
            break;
          v50 = 28LL;
          if ( ((unsigned __int8)MasterData_WarQuestSelectionMaster & 1) != 0 )
            v50 = 32LL;
          MasterData_WarQuestSelectionMaster = (DataManager_o *)DataMasterBase_WarMaster__WarEntity__int___TryGetEntity(
                                                                  v39,
                                                                  &entity,
                                                                  *(_DWORD *)(v49 + v50),
                                                                  (const MethodInfo_23FAE6C *)Method_DataMasterBase_BgmMaster__BgmEntity__int__TryGetEntity__);
          if ( ((unsigned __int8)MasterData_WarQuestSelectionMaster & 1) != 0 )
            return (BgmEntity_o *)entity;
        }
        datalist = (int)v41->fields.datalist;
        if ( (int)++v44 >= datalist )
          return (BgmEntity_o *)entity;
      }
LABEL_42:
      sub_B5D69C(MasterData_WarQuestSelectionMaster, *(_QWORD *)&uniqueID);
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


// local variable allocation has failed, the output may be wrong!
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

  if ( (byte_42EB024 & 1) == 0 )
  {
    sub_B5D5C4(&BattleActionData_MasterBuffData_TypeInfo, (_DWORD)action, (_DWORD)funcEnt, *(_QWORD *)&index);
    byte_42EB024 = 1;
  }
  v12 = (BattleActionData_MasterBuffData_o *)sub_B5D694(BattleActionData_MasterBuffData_TypeInfo);
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
    sub_B5D69C(FunctionObject, v16);
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
  __int64 v3; // x3
  BattleLogicFunction_o *v5; // x20
  int v6; // w1
  int v7; // w2
  __int64 v8; // x3
  int v9; // w1
  int v10; // w2
  __int64 v11; // x3
  int v12; // w1
  int v13; // w2
  __int64 v14; // x3
  __int64 v15; // x1
  BattleData_o *data; // x0
  struct System_Int32_array *vals; // x8
  System_Collections_Generic_Dictionary_int__int__o *v18; // x20
  int v19; // w23
  il2cpp_array_size_t max_length; // w10
  unsigned int v21; // w9
  int32_t v22; // w21
  int32_t v23; // w22
  int32_t Item; // w0
  __int64 v25; // x0

  v5 = this;
  if ( (byte_42EB026 & 1) == 0 )
  {
    sub_B5D5C4(&Method_System_Collections_Generic_Dictionary_int__int__Add__, (_DWORD)funcEnt, (_DWORD)method, v3);
    sub_B5D5C4(&Method_System_Collections_Generic_Dictionary_int__int__ContainsKey__, v6, v7, v8);
    sub_B5D5C4(&Method_System_Collections_Generic_Dictionary_int__int__get_Item__, v9, v10, v11);
    this = (BattleLogicFunction_o *)sub_B5D5C4(
                                      &Method_System_Collections_Generic_Dictionary_int__int__set_Item__,
                                      v12,
                                      v13,
                                      v14);
    byte_42EB026 = 1;
  }
  if ( BattleLogicFunction__CanCheckFuncBattleValue(this, funcEnt, method) )
  {
    data = v5->fields.data;
    if ( !data
      || (data = (BattleData_o *)BattleData__GetBattleValueDict(data, 0LL), !funcEnt)
      || (vals = funcEnt->fields.vals) == 0LL )
    {
LABEL_16:
      sub_B5D69C(data, v15);
    }
    v18 = (System_Collections_Generic_Dictionary_int__int__o *)data;
    v19 = 1;
    while ( 1 )
    {
      max_length = vals->max_length;
      v21 = v19 - 1;
      if ( v19 - 1 >= (int)max_length )
        break;
      if ( v21 >= max_length || v19 >= max_length )
      {
        v25 = sub_B5D6C8(data);
        sub_B5D668(v25, 0LL);
      }
      if ( v18 )
      {
        v22 = vals->m_Items[v21 + 1];
        v23 = vals->m_Items[v19 + 1];
        if ( System_Collections_Generic_Dictionary_int__int___ContainsKey(
               v18,
               v22,
               (const MethodInfo_2F0B0BC *)Method_System_Collections_Generic_Dictionary_int__int__ContainsKey__) )
        {
          Item = System_Collections_Generic_Dictionary_int__int___get_Item(
                   v18,
                   v22,
                   (const MethodInfo_2F0AD98 *)Method_System_Collections_Generic_Dictionary_int__int__get_Item__);
          System_Collections_Generic_Dictionary_int__int___set_Item(
            v18,
            v22,
            Item + v23,
            (const MethodInfo_2F0AE30 *)Method_System_Collections_Generic_Dictionary_int__int__set_Item__);
        }
        else
        {
          System_Collections_Generic_Dictionary_int__int___Add(
            v18,
            v22,
            v23,
            (const MethodInfo_2F0AE58 *)Method_System_Collections_Generic_Dictionary_int__int__Add__);
        }
        vals = funcEnt->fields.vals;
        v19 += 2;
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
  if ( (byte_42EB01F & 1) == 0 )
  {
    this = (BattleLogicFunction_o *)sub_B5D5C4(&UnityEngine_Object_TypeInfo, (_DWORD)args, (_DWORD)bgmGenerator, method);
    byte_42EB01F = 1;
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
    sub_B5D69C(this, args);
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
    sub_B5D69C(this, *(_QWORD *)&faceId);
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
  int v9; // w1
  int v10; // w2
  __int64 v11; // x3
  int v12; // w1
  int v13; // w2
  __int64 v14; // x3
  struct BattleData_o *data; // x8
  BattleSkillInfoData_o *v16; // x24
  struct BattleData_o *v17; // x8
  unsigned int v18; // w0
  struct BattleData_o *v19; // x8
  struct BattleSkillInfoData_o *lastUsedPlayerSkillInfo_k__BackingField; // x8
  struct BattleData_o *v21; // x8
  struct BattleSkillInfoData_o *v22; // x8
  BattleLogicFunction_o *v23; // x25
  BattleLogicFunction_OnlyCheckFuncSideEffectFunctionArgument_o *v24; // x23
  struct BattleLogic_o *logic; // x8
  BattleLogicSkill_o *logicSkill; // x26
  System_String_array **v27; // x2
  System_String_array **v28; // x3
  System_Boolean_array **v29; // x4
  System_Int32_array **v30; // x5
  System_Int32_array *v31; // x6
  System_Int32_array *v32; // x7
  int v33; // w8
  BattleLogicFunction_o *v34; // x24
  bool v35; // w26
  unsigned int v36; // w27
  __int64 v37; // x25
  struct BattleLogic_o *v38; // x8
  BattleActionData_o *v39; // x25
  BattleLogicFunction_FuncSideEffectFunctionArgument_o *FuncSideEffectArg; // x0
  __int64 v41; // x0
  BattleActionData_o *baseActionData; // [xsp+8h] [xbp-58h] BYREF

  v8 = this;
  if ( (byte_42EB023 & 1) == 0 )
  {
    sub_B5D5C4(&BattleSkillInfoData_TypeInfo, (_DWORD)actionData, (_DWORD)baseVals, args);
    sub_B5D5C4(&int___TypeInfo, v9, v10, v11);
    this = (BattleLogicFunction_o *)sub_B5D5C4(
                                      &BattleLogicFunction_OnlyCheckFuncSideEffectFunctionArgument_TypeInfo,
                                      v12,
                                      v13,
                                      v14);
    byte_42EB023 = 1;
  }
  baseActionData = 0LL;
  data = v8->fields.data;
  if ( !data )
    goto LABEL_34;
  if ( !data->fields._lastUsedPlayerSkillInfo_k__BackingField )
    return;
  v16 = (BattleSkillInfoData_o *)sub_B5D694(BattleSkillInfoData_TypeInfo);
  BattleSkillInfoData___ctor(v16, 0LL);
  if ( !actionData )
    goto LABEL_34;
  if ( !v16 )
    goto LABEL_34;
  v16->fields.svtUniqueId = actionData->fields.actorId;
  v17 = v8->fields.data;
  if ( !v17 )
    goto LABEL_34;
  this = (BattleLogicFunction_o *)v17->fields._lastUsedPlayerSkillInfo_k__BackingField;
  if ( !this )
    goto LABEL_34;
  v18 = ((__int64 (__fastcall *)(BattleLogicFunction_o *, void *))this->klass[1]._1.namespaze)(
          this,
          this->klass[1]._1.byval_arg.data);
  this = (BattleLogicFunction_o *)((__int64 (__fastcall *)(BattleSkillInfoData_o *, _QWORD, Il2CppMethodPointer))v16->klass->vtable._4_set_skillId.method)(
                                    v16,
                                    v18,
                                    v16->klass->vtable._5_get_skillId.methodPtr);
  v19 = v8->fields.data;
  if ( !v19 )
    goto LABEL_34;
  lastUsedPlayerSkillInfo_k__BackingField = v19->fields._lastUsedPlayerSkillInfo_k__BackingField;
  if ( !lastUsedPlayerSkillInfo_k__BackingField )
    goto LABEL_34;
  v16->fields.skilllv = lastUsedPlayerSkillInfo_k__BackingField->fields.skilllv;
  v21 = v8->fields.data;
  if ( !v21 )
    goto LABEL_34;
  v22 = v21->fields._lastUsedPlayerSkillInfo_k__BackingField;
  if ( !v22 )
    goto LABEL_34;
  BattleSkillInfoData__UpdateSelectAddIndex(v16, v22->fields._SelectAddIndex_k__BackingField, 0LL);
  if ( !args )
    goto LABEL_34;
  this = (BattleLogicFunction_o *)BattleLogicFunction_ProcListInArgs__get_FuncSideEffectArg(args, 0LL);
  v23 = this;
  if ( this )
  {
    v24 = (BattleLogicFunction_OnlyCheckFuncSideEffectFunctionArgument_o *)sub_B5D694(BattleLogicFunction_OnlyCheckFuncSideEffectFunctionArgument_TypeInfo);
    BattleLogicFunction_OnlyCheckFuncSideEffectFunctionArgument___ctor(v24, 0LL);
  }
  else
  {
    v24 = 0LL;
  }
  logic = v8->fields.logic;
  if ( !logic )
    goto LABEL_34;
  logicSkill = logic->fields.logicSkill;
  this = (BattleLogicFunction_o *)sub_B5D5DC(int___TypeInfo, 1LL);
  if ( !this )
    goto LABEL_34;
  if ( !LODWORD(this->fields.logic) )
    goto LABEL_35;
  LODWORD(this->fields.logictarget) = actionData->fields.actorId;
  if ( !logicSkill
    || (this = (BattleLogicFunction_o *)BattleLogicSkill__taskSkill(
                                          logicSkill,
                                          v16,
                                          (System_Int32_array *)this,
                                          0LL,
                                          0,
                                          0,
                                          0,
                                          0LL)) == 0LL )
  {
LABEL_34:
    sub_B5D69C(this, actionData);
  }
  v33 = (int)this->fields.logic;
  v34 = this;
  v35 = v23 != 0LL;
  if ( v33 >= 1 )
  {
    v36 = 0;
    while ( v36 < v33 )
    {
      v37 = *((_QWORD *)&v34->fields.logictarget + (int)v36);
      if ( !v37 )
        goto LABEL_34;
      *(_QWORD *)(v37 + 176) = v24;
      *(_BYTE *)(v37 + 169) = v35;
      sub_B5D560((BattleServantConfConponent_o *)(v37 + 176), (System_Int32_array **)v24, v27, v28, v29, v30, v31, v32);
      v38 = v8->fields.logic;
      if ( !v38 )
        goto LABEL_34;
      this = (BattleLogicFunction_o *)v38->fields.logicSkill;
      if ( !this )
        goto LABEL_34;
      v39 = BattleLogicSkill__createSkillData_31393224(
              (BattleLogicSkill_o *)this,
              (BattleLogicTask_o *)v37,
              1,
              baseVals,
              &baseActionData,
              0LL);
      BattleActionData__addAction(actionData, v39, 0LL);
      if ( v39 )
        actionData->fields.isSuccessSkillCopyFunction = 1;
      v33 = (int)v34->fields.logic;
      if ( (int)++v36 >= v33 )
        goto LABEL_31;
    }
LABEL_35:
    v41 = sub_B5D6C8(this);
    sub_B5D668(v41, 0LL);
  }
LABEL_31:
  FuncSideEffectArg = BattleLogicFunction_ProcListInArgs__get_FuncSideEffectArg(args, 0LL);
  if ( FuncSideEffectArg )
    BattleLogicFunction_FuncSideEffectFunctionArgument__AddTarget_23755264(
      FuncSideEffectArg,
      (BattleLogicFunction_FuncSideEffectFunctionArgument_o *)v24,
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
  int v10; // w1
  int v11; // w2
  __int64 v12; // x3
  int v13; // w1
  int v14; // w2
  __int64 v15; // x3
  int v16; // w1
  int v17; // w2
  __int64 v18; // x3
  _BOOL4 isEnemy; // w26
  int32_t ServantIndex; // w22
  BattleData_o *data; // x24
  MoveToSubMemberWaveTurnEvent_o *v22; // x25
  bool v23; // w24
  int32_t v24; // w0
  int32_t uniqueId; // w25
  int32_t v26; // w26
  RestockServantLogicByMoveToSubMember_o *v27; // x23
  BattleActionData_o *v28; // x21

  v9 = this;
  if ( (byte_42EB001 & 1) == 0 )
  {
    sub_B5D5C4(&Method_BasicHelper_IndexValue_int____68811968, (_DWORD)targetServantData, (_DWORD)funcEnt, baseVals);
    sub_B5D5C4(&BattleActionData_TypeInfo, v10, v11, v12);
    sub_B5D5C4(&MoveToSubMemberWaveTurnEvent_TypeInfo, v13, v14, v15);
    this = (BattleLogicFunction_o *)sub_B5D5C4(&RestockServantLogicByMoveToSubMember_TypeInfo, v16, v17, v18);
    byte_42EB001 = 1;
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
  BattleData__SubBuffFromPT_18966596((BattleData_o *)this, targetServantData, 0LL);
  this = (BattleLogicFunction_o *)v9->fields.data;
  if ( !this )
    goto LABEL_13;
  BattleData__SubBuffExitSvt((BattleData_o *)this, targetServantData, 0LL);
  this = (BattleLogicFunction_o *)v9->fields.data;
  if ( !this )
    goto LABEL_13;
  targetServantData->fields.deckIndex = BattleData__GetSubServantUsableDeckIndex((BattleData_o *)this, isEnemy, 0LL);
  data = v9->fields.data;
  v22 = (MoveToSubMemberWaveTurnEvent_o *)sub_B5D694(MoveToSubMemberWaveTurnEvent_TypeInfo);
  MoveToSubMemberWaveTurnEvent___ctor(v22, data, 0LL);
  BattleServantData__RegisterWaveTurnEvent(targetServantData, (ServantWaveTurnEvent_o *)v22, 0LL);
  if ( !funcEnt )
    goto LABEL_13;
  v23 = isEnemy;
  v24 = BasicHelper__IndexValue_int_(
          funcEnt->fields.vals,
          0,
          0,
          (const MethodInfo_1AD8FA4 *)Method_BasicHelper_IndexValue_int____68811968);
  uniqueId = targetServantData->fields.uniqueId;
  v26 = v24;
  v27 = (RestockServantLogicByMoveToSubMember_o *)sub_B5D694(RestockServantLogicByMoveToSubMember_TypeInfo);
  RestockServantLogicByMoveToSubMember___ctor(v27, ServantIndex, v23, v26, uniqueId, 0LL);
  this = (BattleLogicFunction_o *)v9->fields.data;
  if ( !this
    || (BattleData__AppendRestockServantLogic((BattleData_o *)this, (RestockServantLogic_o *)v27, 0LL),
        v28 = (BattleActionData_o *)sub_B5D694(BattleActionData_TypeInfo),
        BattleActionData___ctor(v28, 0LL),
        !v28) )
  {
LABEL_13:
    sub_B5D69C(this, targetServantData);
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
  if ( (byte_42EB020 & 1) == 0 )
  {
    this = (BattleLogicFunction_o *)sub_B5D5C4(&UnityEngine_Object_TypeInfo, (_DWORD)args, (_DWORD)bgGenerator, method);
    byte_42EB020 = 1;
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
    sub_B5D69C(this, args);
  }
}


void __fastcall BattleLogicFunction__FunctionSetBattleValue(
        BattleLogicFunction_o *this,
        FunctionEntity_o *funcEnt,
        const MethodInfo *method)
{
  __int64 v3; // x3
  BattleLogicFunction_o *v5; // x20
  __int64 v6; // x1
  BattleData_o *data; // x0
  struct System_Int32_array *vals; // x8
  System_Collections_Generic_Dictionary_int__int__o *v9; // x20
  int v10; // w21
  il2cpp_array_size_t max_length; // w10
  unsigned int v12; // w9
  __int64 v13; // x0

  v5 = this;
  if ( (byte_42EB025 & 1) == 0 )
  {
    this = (BattleLogicFunction_o *)sub_B5D5C4(
                                      &Method_System_Collections_Generic_Dictionary_int__int__set_Item__,
                                      (_DWORD)funcEnt,
                                      (_DWORD)method,
                                      v3);
    byte_42EB025 = 1;
  }
  if ( BattleLogicFunction__CanCheckFuncBattleValue(this, funcEnt, method) )
  {
    data = v5->fields.data;
    if ( !data
      || (data = (BattleData_o *)BattleData__GetBattleValueDict(data, 0LL), !funcEnt)
      || (vals = funcEnt->fields.vals) == 0LL )
    {
LABEL_13:
      sub_B5D69C(data, v6);
    }
    v9 = (System_Collections_Generic_Dictionary_int__int__o *)data;
    v10 = 1;
    while ( 1 )
    {
      max_length = vals->max_length;
      v12 = v10 - 1;
      if ( v10 - 1 >= (int)max_length )
        break;
      if ( v12 >= max_length || v10 >= max_length )
      {
        v13 = sub_B5D6C8(data);
        sub_B5D668(v13, 0LL);
      }
      if ( v9 )
      {
        System_Collections_Generic_Dictionary_int__int___set_Item(
          v9,
          vals->m_Items[v12 + 1],
          vals->m_Items[v10 + 1],
          (const MethodInfo_2F0AE30 *)Method_System_Collections_Generic_Dictionary_int__int__set_Item__);
        vals = funcEnt->fields.vals;
        v10 += 2;
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
  int v9; // w1
  int v10; // w2
  __int64 v11; // x3
  int v12; // w1
  int v13; // w2
  __int64 v14; // x3
  int v15; // w1
  int v16; // w2
  __int64 v17; // x3
  int v18; // w1
  int v19; // w2
  __int64 v20; // x3
  int v21; // w1
  int v22; // w2
  __int64 v23; // x3
  int v24; // w1
  int v25; // w2
  __int64 v26; // x3
  int v27; // w1
  int v28; // w2
  __int64 v29; // x3
  int v30; // w1
  int v31; // w2
  __int64 v32; // x3
  int v33; // w1
  int v34; // w2
  __int64 v35; // x3
  int v36; // w1
  int v37; // w2
  __int64 v38; // x3
  int v39; // w1
  int v40; // w2
  __int64 v41; // x3
  struct BattleLogicFunctionProcess_FunctionUnitCheck_o *funcUnit_k__BackingField; // x20
  DataVals_o *dataVals_k__BackingField; // x20
  int32_t targetId_k__BackingField; // w25
  FunctionEntity_o *funcEnt; // x27
  int32_t v46; // w24
  Il2CppClass *klass; // x8
  BattleActionData_BuffData_o *v48; // x26
  struct BattleData_o *data; // x23
  int rootfsm; // w28
  _BOOL8 IsCommandSideEffect; // x0
  const MethodInfo *v52; // x6
  const MethodInfo *v53; // x7
  bool v54; // w4
  BattleActionData_BuffData_o *FunctionObject; // x22
  System_Func_WarBoardManager_WarBoardOnboardSkillTarget__WarBoardPieceData__o *v56; // x24
  System_Collections_Generic_IEnumerable_TSource__o *v57; // x0
  System_String_array **v58; // x2
  System_String_array **v59; // x3
  System_Boolean_array **v60; // x4
  System_Int32_array **v61; // x5
  System_Int32_array *v62; // x6
  System_Int32_array *v63; // x7
  BattleLogicFunction___c_c *v64; // x0
  struct BattleLogicFunction___c_StaticFields *static_fields; // x8
  System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *_9__121_1; // x21
  Il2CppObject *v67; // x24
  struct BattleLogicFunction___c_StaticFields *v68; // x0
  System_String_array **v69; // x2
  System_String_array **v70; // x3
  System_Boolean_array **v71; // x4
  System_Int32_array **v72; // x5
  System_Int32_array *v73; // x6
  System_Int32_array *v74; // x7
  BattleActionEffect_UpdateAllInfo_o *v75; // x21
  System_String_array **v76; // x2
  System_String_array **v77; // x3
  System_Boolean_array **v78; // x4
  System_Int32_array **v79; // x5
  System_Int32_array *v80; // x6
  System_Int32_array *v81; // x7

  v8 = (Il2CppObject *)this;
  if ( (byte_42EB022 & 1) == 0 )
  {
    sub_B5D5C4(&Method_BasicHelper_Any_BattleBuffData_BuffData___, (_DWORD)args, (_DWORD)mainAction, funcTarget);
    sub_B5D5C4(&Method_BattleLogicFunction__FunctionSubFieldBuff_b__121_0__, v9, v10, v11);
    sub_B5D5C4(&Method_System_Linq_Enumerable_Select_BattleBuffData_BuffData__BattleBuffData_BuffData___, v12, v13, v14);
    sub_B5D5C4(&Method_System_Linq_Enumerable_ToList_BattleBuffData_BuffData___, v15, v16, v17);
    sub_B5D5C4(&Method_System_Func_BattleBuffData_BuffData__bool___ctor__, v18, v19, v20);
    sub_B5D5C4(&Method_System_Func_BattleBuffData_BuffData__BattleBuffData_BuffData___ctor__, v21, v22, v23);
    sub_B5D5C4(&System_Func_BattleBuffData_BuffData__bool__TypeInfo, v24, v25, v26);
    sub_B5D5C4(&System_Func_BattleBuffData_BuffData__BattleBuffData_BuffData__TypeInfo, v27, v28, v29);
    sub_B5D5C4(&Method_System_Collections_Generic_List_BattleBuffData_BuffData__get_Count__, v30, v31, v32);
    sub_B5D5C4(&Method_BattleLogicFunction___c__FunctionSubFieldBuff_b__121_1__, v33, v34, v35);
    sub_B5D5C4(&BattleLogicFunction___c_TypeInfo, v36, v37, v38);
    this = (BattleLogicFunction_o *)sub_B5D5C4(&BattleActionEffect_UpdateAllInfo_TypeInfo, v39, v40, v41);
    byte_42EB022 = 1;
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
  v46 = (int)this;
  this = (BattleLogicFunction_o *)((__int64 (__fastcall *)(BattleLogicFunctionProcess_FunctionTargetCheck_o *, Il2CppMethodPointer))funcTarget->klass->vtable._7_MakeActionBuffData.method)(
                                    funcTarget,
                                    funcTarget->klass->vtable._8_AddBuff.methodPtr);
  klass = v8[1].klass;
  if ( !klass )
    goto LABEL_28;
  if ( !funcEnt )
    goto LABEL_28;
  v48 = (BattleActionData_BuffData_o *)this;
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
  v54 = IsCommandSideEffect;
  if ( rootfsm > 0 )
  {
    FunctionObject = BattleLogicFunction__getFunctionObject(
                       (BattleLogicFunction_o *)IsCommandSideEffect,
                       funcEnt,
                       targetId_k__BackingField,
                       v46,
                       v54,
                       v48,
                       v52);
    v56 = (System_Func_WarBoardManager_WarBoardOnboardSkillTarget__WarBoardPieceData__o *)sub_B5D694(System_Func_BattleBuffData_BuffData__BattleBuffData_BuffData__TypeInfo);
    System_Func_WarBoardManager_WarBoardOnboardSkillTarget__WarBoardPieceData____ctor(
      v56,
      v8,
      Method_BattleLogicFunction__FunctionSubFieldBuff_b__121_0__,
      (const MethodInfo_2C3041C *)Method_System_Func_BattleBuffData_BuffData__BattleBuffData_BuffData___ctor__);
    v57 = (System_Collections_Generic_IEnumerable_TSource__o *)System_Linq_Enumerable__Select_WarBoardManager_WarBoardOnboardSkillTarget__WarBoardPieceData_(
                                                                 (System_Collections_Generic_IEnumerable_TSource__o *)data,
                                                                 (System_Func_TSource__TResult__o *)v56,
                                                                 (const MethodInfo_1CB354C *)Method_System_Linq_Enumerable_Select_BattleBuffData_BuffData__BattleBuffData_BuffData___);
    this = (BattleLogicFunction_o *)System_Linq_Enumerable__ToList_WarBoardManager_WarBoardOnboardSkillTarget_(
                                      v57,
                                      (const MethodInfo_1CBA734 *)Method_System_Linq_Enumerable_ToList_BattleBuffData_BuffData___);
    if ( FunctionObject )
    {
      FunctionObject->fields.removeBuffList = (struct System_Collections_Generic_List_BattleBuffData_BuffData__o *)this;
      sub_B5D560(
        (BattleServantConfConponent_o *)&FunctionObject->fields.removeBuffList,
        (System_Int32_array **)this,
        v58,
        v59,
        v60,
        v61,
        v62,
        v63);
      v64 = BattleLogicFunction___c_TypeInfo;
      if ( (BYTE3(BattleLogicFunction___c_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !BattleLogicFunction___c_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(BattleLogicFunction___c_TypeInfo);
        v64 = BattleLogicFunction___c_TypeInfo;
      }
      static_fields = v64->static_fields;
      _9__121_1 = (System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *)static_fields->__9__121_1;
      if ( !_9__121_1 )
      {
        if ( (BYTE3(v64->vtable._0_Equals.methodPtr) & 4) != 0 && !v64->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(v64);
          static_fields = BattleLogicFunction___c_TypeInfo->static_fields;
        }
        v67 = (Il2CppObject *)static_fields->__9;
        _9__121_1 = (System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *)sub_B5D694(System_Func_BattleBuffData_BuffData__bool__TypeInfo);
        System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool____ctor(
          _9__121_1,
          v67,
          Method_BattleLogicFunction___c__FunctionSubFieldBuff_b__121_1__,
          (const MethodInfo_2C2ECD0 *)Method_System_Func_BattleBuffData_BuffData__bool___ctor__);
        v68 = BattleLogicFunction___c_TypeInfo->static_fields;
        v68->__9__121_1 = (struct System_Func_BattleBuffData_BuffData__bool__o *)_9__121_1;
        sub_B5D560(
          (BattleServantConfConponent_o *)&v68->__9__121_1,
          (System_Int32_array **)_9__121_1,
          v69,
          v70,
          v71,
          v72,
          v73,
          v74);
      }
      this = (BattleLogicFunction_o *)BasicHelper__Any_WarBoardData_SquareRangeSearch_(
                                        (System_Collections_Generic_List_T__o *)data,
                                        (System_Func_T__bool__o *)_9__121_1,
                                        (const MethodInfo_1AD6D34 *)Method_BasicHelper_Any_BattleBuffData_BuffData___);
      if ( ((unsigned __int8)this & 1) != 0 )
      {
        v75 = (BattleActionEffect_UpdateAllInfo_o *)sub_B5D694(BattleActionEffect_UpdateAllInfo_TypeInfo);
        BattleActionEffect_UpdateAllInfo___ctor(v75, 0LL);
        FunctionObject->fields.EffectProc = (struct BattleActionEffect_Base_o *)v75;
        sub_B5D560(
          (BattleServantConfConponent_o *)&FunctionObject->fields.EffectProc,
          (System_Int32_array **)v75,
          v76,
          v77,
          v78,
          v79,
          v80,
          v81);
      }
      if ( mainAction )
      {
        BattleActionData__setBuffData(mainAction, FunctionObject, dataVals_k__BackingField, 0LL);
        return;
      }
    }
LABEL_28:
    sub_B5D69C(this, args);
  }
  this = (BattleLogicFunction_o *)BattleLogicFunction__getNoEffectObject(
                                    (BattleLogicFunction_o *)v8,
                                    targetId_k__BackingField,
                                    v46,
                                    dataVals_k__BackingField,
                                    v54,
                                    0LL,
                                    v48,
                                    v53);
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
  int v11; // w1
  int v12; // w2
  __int64 v13; // x3
  struct BattleLogicFunctionProcess_FunctionUnitCheck_o *funcUnit_k__BackingField; // x8
  DataVals_o *dataVals_k__BackingField; // x24
  bool isParam; // w0
  const MethodInfo *v17; // x5
  BattleBuffData_FieldChangeData_o *tamamocatTreasureDeviceIds; // x22
  struct BattleData_o *data; // x8
  Generator_BGFromFieldChangeBGBuff_o *v20; // x21
  const MethodInfo *v21; // x3
  BattleData_o *v22; // x21
  Generator_BGMFromFieldChangeBGBuff_o *v23; // x23
  const MethodInfo *v24; // x3

  v10 = this;
  if ( (byte_42EB021 & 1) == 0 )
  {
    sub_B5D5C4(&Generator_BGFromFieldChangeBGBuff_TypeInfo, (_DWORD)args, (_DWORD)mainAction, funcTarget);
    this = (BattleLogicFunction_o *)sub_B5D5C4(&Generator_BGMFromFieldChangeBGBuff_TypeInfo, v11, v12, v13);
    byte_42EB021 = 1;
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
  this = (BattleLogicFunction_o *)BattleLogicFunction__functionAddState(v10, mainAction, funcTarget, args, isParam, v17);
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
    sub_B5D69C(this, args);
  }
  if ( !tamamocatTreasureDeviceIds )
    goto LABEL_17;
  if ( tamamocatTreasureDeviceIds->fields.bgId >= 1 )
  {
    v20 = (Generator_BGFromFieldChangeBGBuff_o *)sub_B5D694(Generator_BGFromFieldChangeBGBuff_TypeInfo);
    Generator_BGFromFieldChangeBGBuff___ctor(v20, tamamocatTreasureDeviceIds, 0LL);
    BattleLogicFunction__FunctionQuickChangeBG(v10, args, (Generator_Background_o *)v20, v21);
  }
  if ( tamamocatTreasureDeviceIds->fields.bgmId >= 1 )
  {
    v22 = v10->fields.data;
    v23 = (Generator_BGMFromFieldChangeBGBuff_o *)sub_B5D694(Generator_BGMFromFieldChangeBGBuff_TypeInfo);
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
    sub_B5D69C(this, baseVals);
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
    sub_B5D69C(this, baseVals);
  }
  BattleData__UpdateTargetPosEnemyAppearValid(v4->fields.data, (System_Int32_array *)this, 0, 0LL);
}


// local variable allocation has failed, the output may be wrong!
int32_t __fastcall BattleLogicFunction__GetActualRecoveryHealPoint(
        BattleLogicFunction_o *this,
        DataVals_o *dataVals,
        BattleServantData_o *targetSvtData,
        int32_t healPoint,
        const MethodInfo *method)
{
  int32_t MaxHp; // w21
  int v9; // w20

  if ( (byte_42EAFF6 & 1) == 0 )
  {
    this = (BattleLogicFunction_o *)sub_B5D5C4(
                                      &System_Math_TypeInfo,
                                      (_DWORD)dataVals,
                                      (_DWORD)targetSvtData,
                                      *(_QWORD *)&healPoint);
    byte_42EAFF6 = 1;
  }
  if ( !dataVals )
    goto LABEL_11;
  this = (BattleLogicFunction_o *)DataVals__isParam(dataVals, 116, 0LL);
  if ( ((unsigned __int8)this & 1) == 0 )
    return healPoint;
  if ( !targetSvtData )
LABEL_11:
    sub_B5D69C(this, dataVals);
  MaxHp = BattleServantData__getMaxHp(targetSvtData, 0LL);
  v9 = ((__int64 (__fastcall *)(BattleServantData_o *, Il2CppMethodPointer))targetSvtData->klass->vtable._13_get_resultHp.method)(
         targetSvtData,
         targetSvtData->klass->vtable._14_set_resultHp.methodPtr);
  if ( (BYTE3(System_Math_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !System_Math_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(System_Math_TypeInfo);
  return System_Math__Min_45104456(healPoint, MaxHp - v9, 0LL);
}


BuffEntity_o *__fastcall BattleLogicFunction__GetBuffEntity(
        BattleLogicFunction_o *this,
        FunctionEntity_o *funcEnt,
        const MethodInfo *method)
{
  __int64 v3; // x3
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  int v8; // w1
  int v9; // w2
  __int64 v10; // x3
  DataMasterBase_WarMaster__WarEntity__int__o *Master_WarQuestSelectionMaster; // x0
  __int64 v12; // x1
  struct System_Int32_array *vals; // x8
  __int64 v15; // x0

  if ( (byte_42EAFDB & 1) == 0 )
  {
    sub_B5D5C4(&Method_DataManager_GetMaster_BuffMaster___, (_DWORD)funcEnt, (_DWORD)method, v3);
    sub_B5D5C4(&DataManager_TypeInfo, v5, v6, v7);
    sub_B5D5C4(&Method_DataMasterBase_BuffMaster__BuffEntity__int__GetEntity__, v8, v9, v10);
    byte_42EAFDB = 1;
  }
  if ( (BYTE3(DataManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_WarQuestSelectionMaster = (DataMasterBase_WarMaster__WarEntity__int__o *)DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_1AE41EC *)Method_DataManager_GetMaster_BuffMaster___);
  if ( !funcEnt )
    goto LABEL_11;
  vals = funcEnt->fields.vals;
  if ( !vals )
    goto LABEL_11;
  if ( !vals->max_length )
  {
    v15 = sub_B5D6C8(Master_WarQuestSelectionMaster);
    sub_B5D668(v15, 0LL);
  }
  if ( !Master_WarQuestSelectionMaster )
LABEL_11:
    sub_B5D69C(Master_WarQuestSelectionMaster, v12);
  return (BuffEntity_o *)DataMasterBase_WarMaster__WarEntity__int___GetEntity(
                           Master_WarQuestSelectionMaster,
                           vals->m_Items[1],
                           (const MethodInfo_23FAE10 *)Method_DataMasterBase_BuffMaster__BuffEntity__int__GetEntity__);
}


System_Int32_array *__fastcall BattleLogicFunction__GetBuffTargetCardIndexArray(
        BattleLogicFunction_o *this,
        DataVals_o *baseVals,
        BattleServantData_o *targetServant,
        const MethodInfo *method)
{
  int v6; // w1
  int v7; // w2
  __int64 v8; // x3
  int v9; // w1
  int v10; // w2
  __int64 v11; // x3
  int v12; // w1
  int v13; // w2
  __int64 v14; // x3
  int v15; // w1
  int v16; // w2
  __int64 v17; // x3
  int v18; // w1
  int v19; // w2
  __int64 v20; // x3
  int v21; // w1
  int v22; // w2
  __int64 v23; // x3
  int v24; // w1
  int v25; // w2
  __int64 v26; // x3
  int v27; // w1
  int v28; // w2
  __int64 v29; // x3
  int v30; // w1
  int v31; // w2
  __int64 v32; // x3
  int v33; // w1
  int v34; // w2
  __int64 v35; // x3
  int v36; // w1
  int v37; // w2
  __int64 v38; // x3
  int v39; // w1
  int v40; // w2
  __int64 v41; // x3
  int v42; // w1
  int v43; // w2
  __int64 v44; // x3
  System_Collections_Generic_List_int__o *v45; // x19
  unsigned __int64 CardIndividuality; // x0
  __int64 v47; // x1
  int32_t CardIndex; // w20
  System_Int32_array *IdArrayFromIndividuality; // x21
  DataMasterBase_WarMaster__WarEntity__int__o *v50; // x23
  __int64 v51; // x24
  __int64 v52; // x25
  unsigned __int64 v53; // x24
  System_Collections_Generic_List_int__o *v54; // x23
  System_Collections_Generic_IEnumerable_TSource__o *v55; // x0
  __int64 v56; // x8
  unsigned __int64 v57; // x25
  __int64 v58; // x8
  int32_t v59; // w20
  unsigned __int64 v60; // x22
  int32_t v61; // w1
  const MethodInfo_308440C *v62; // x2
  __int64 v64; // x0
  int32_t v65; // [xsp+Ch] [xbp-54h]
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v66; // 0:x0.16

  if ( (byte_42EB018 & 1) == 0 )
  {
    sub_B5D5C4(&Method_DataManager_GetMasterData_ServantMaster___, (_DWORD)baseVals, (_DWORD)targetServant, method);
    sub_B5D5C4(&Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__, v6, v7, v8);
    sub_B5D5C4(&Method_System_Linq_Enumerable_Repeat_int___, v9, v10, v11);
    sub_B5D5C4(&Method_System_Linq_Enumerable_ToArray_int___, v12, v13, v14);
    sub_B5D5C4(&Method_System_Collections_Generic_List_int__AddRange__, v15, v16, v17);
    sub_B5D5C4(&Method_System_Collections_Generic_List_int__Add__, v18, v19, v20);
    sub_B5D5C4(&Method_System_Collections_Generic_List_int__Contains__, v21, v22, v23);
    sub_B5D5C4(&Method_System_Collections_Generic_List_int__ToArray__, v24, v25, v26);
    sub_B5D5C4(&Method_System_Collections_Generic_List_int___ctor___68740224, v27, v28, v29);
    sub_B5D5C4(&Method_System_Collections_Generic_List_int__get_Count__, v30, v31, v32);
    sub_B5D5C4(&Method_System_Collections_Generic_List_int__get_Item__, v33, v34, v35);
    sub_B5D5C4(&System_Collections_Generic_List_int__TypeInfo, v36, v37, v38);
    sub_B5D5C4(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v39, v40, v41);
    sub_B5D5C4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v42, v43, v44);
    byte_42EB018 = 1;
  }
  v45 = (System_Collections_Generic_List_int__o *)sub_B5D694(System_Collections_Generic_List_int__TypeInfo);
  System_Collections_Generic_List_int____ctor(
    v45,
    (const MethodInfo_30836B0 *)Method_System_Collections_Generic_List_int___ctor___68740224);
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
      if ( !v45 )
        goto LABEL_52;
      v61 = CardIndex - 1;
    }
    else
    {
      CardIndividuality = BattleRandom__getNext(5, 0LL);
      if ( !v45 )
        goto LABEL_52;
      v61 = CardIndividuality;
    }
    v62 = (const MethodInfo_308440C *)Method_System_Collections_Generic_List_int__Add__;
    goto LABEL_49;
  }
  IdArrayFromIndividuality = CardMaster__getIdArrayFromIndividuality(CardIndividuality, 0LL);
  CardIndividuality = (unsigned __int64)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !CardIndividuality )
    goto LABEL_52;
  CardIndividuality = (unsigned __int64)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                          (DataManager_o *)CardIndividuality,
                                          (const MethodInfo_1AE424C *)Method_DataManager_GetMasterData_ServantMaster___);
  if ( !targetServant )
    goto LABEL_52;
  v50 = (DataMasterBase_WarMaster__WarEntity__int__o *)CardIndividuality;
  v52 = *(_QWORD *)&targetServant->fields.svtId.fields.currentCryptoKey;
  v51 = *(_QWORD *)&targetServant->fields.svtId.fields.fakeValue;
  if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  }
  *(_QWORD *)&v66.fields.currentCryptoKey = v52;
  *(_QWORD *)&v66.fields.fakeValue = v51;
  CardIndividuality = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44899288(v66, 0LL);
  if ( !v50 )
    goto LABEL_52;
  CardIndividuality = (unsigned __int64)DataMasterBase_WarMaster__WarEntity__int___GetEntity(
                                          v50,
                                          CardIndividuality,
                                          (const MethodInfo_23FAE10 *)Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
  if ( !CardIndividuality )
    goto LABEL_52;
  v53 = *(_QWORD *)(CardIndividuality + 144);
  v54 = (System_Collections_Generic_List_int__o *)sub_B5D694(System_Collections_Generic_List_int__TypeInfo);
  System_Collections_Generic_List_int____ctor(
    v54,
    (const MethodInfo_30836B0 *)Method_System_Collections_Generic_List_int___ctor___68740224);
  CardIndividuality = (unsigned __int64)BattleServantData__get_BuffData(targetServant, 0LL);
  if ( !CardIndividuality )
    goto LABEL_52;
  CardIndividuality = (unsigned __int64)BattleBuffData__GetCommandCardTypeChangeBuff(
                                          (BattleBuffData_o *)CardIndividuality,
                                          0LL);
  v65 = CardIndex;
  if ( CardIndividuality )
  {
    if ( !v53 )
      goto LABEL_52;
    v55 = (System_Collections_Generic_IEnumerable_TSource__o *)System_Linq_Enumerable__Repeat_int_(
                                                                 *(_DWORD *)(CardIndividuality + 28),
                                                                 *(_DWORD *)(v53 + 24),
                                                                 (const MethodInfo_1CAF8B8 *)Method_System_Linq_Enumerable_Repeat_int___);
    CardIndividuality = (unsigned __int64)System_Linq_Enumerable__ToArray_int_(
                                            v55,
                                            (const MethodInfo_1CB76BC *)Method_System_Linq_Enumerable_ToArray_int___);
    v53 = CardIndividuality;
  }
  if ( !IdArrayFromIndividuality )
    goto LABEL_52;
  v56 = *(_QWORD *)&IdArrayFromIndividuality->max_length;
  if ( (int)v56 >= 1 )
  {
    v57 = 0LL;
    while ( 1 )
    {
      if ( v57 >= (unsigned int)v56 )
        goto LABEL_51;
      if ( !v53 )
        goto LABEL_52;
      v58 = *(_QWORD *)(v53 + 24);
      if ( (int)v58 >= 1 )
        break;
LABEL_29:
      LODWORD(v56) = IdArrayFromIndividuality->max_length;
      if ( (__int64)++v57 >= (int)v56 )
        goto LABEL_30;
    }
    v59 = IdArrayFromIndividuality->m_Items[v57 + 1];
    v60 = 0LL;
    while ( v60 < (unsigned int)v58 )
    {
      if ( v59 == *(_DWORD *)(v53 + 32 + 4 * v60) )
      {
        if ( !v54 )
          goto LABEL_52;
        CardIndividuality = System_Collections_Generic_List_int___Contains(
                              v54,
                              v60,
                              (const MethodInfo_3084860 *)Method_System_Collections_Generic_List_int__Contains__);
        if ( (CardIndividuality & 1) == 0 )
          System_Collections_Generic_List_int___Add(
            v54,
            v60,
            (const MethodInfo_308440C *)Method_System_Collections_Generic_List_int__Add__);
      }
      LODWORD(v58) = *(_DWORD *)(v53 + 24);
      if ( (__int64)++v60 >= (int)v58 )
        goto LABEL_29;
    }
LABEL_51:
    v64 = sub_B5D6C8(CardIndividuality);
    sub_B5D668(v64, 0LL);
  }
LABEL_30:
  if ( !v54 )
    goto LABEL_52;
  CardIndividuality = (unsigned int)v54->fields._size;
  if ( (int)CardIndividuality < 1 )
  {
LABEL_38:
    if ( v45 )
      return System_Collections_Generic_List_int___ToArray(
               v45,
               (const MethodInfo_3086518 *)Method_System_Collections_Generic_List_int__ToArray__);
    goto LABEL_52;
  }
  if ( !v65 )
  {
    CardIndividuality = BattleRandom__getNext(CardIndividuality, 0LL);
    if ( v54->fields._size <= (unsigned int)CardIndividuality )
      System_ThrowHelper__ThrowArgumentOutOfRangeException_42302284(0LL);
    if ( v45 )
    {
      v61 = v54->fields._items->m_Items[(int)CardIndividuality + 1];
      v62 = (const MethodInfo_308440C *)Method_System_Collections_Generic_List_int__Add__;
LABEL_49:
      System_Collections_Generic_List_int___Add(v45, v61, v62);
      return System_Collections_Generic_List_int___ToArray(
               v45,
               (const MethodInfo_3086518 *)Method_System_Collections_Generic_List_int__ToArray__);
    }
LABEL_52:
    sub_B5D69C(CardIndividuality, v47);
  }
  if ( !v45 )
    goto LABEL_52;
  System_Collections_Generic_List_int___AddRange(
    v45,
    (System_Collections_Generic_IEnumerable_T__o *)v54,
    (const MethodInfo_3084660 *)Method_System_Collections_Generic_List_int__AddRange__);
  return System_Collections_Generic_List_int___ToArray(
           v45,
           (const MethodInfo_3086518 *)Method_System_Collections_Generic_List_int__ToArray__);
}


System_Collections_Generic_IEnumerable_BattleLogicFunctionProcess_FunctionTargetCheck__o *__fastcall BattleLogicFunction__GetDependFuncTargets(
        BattleLogicFunction_o *this,
        BattleLogicFunction_ProcListInArgs_o *args,
        BattleActionData_o *mainAction,
        DataVals_o *dataVal,
        const MethodInfo *method)
{
  int v9; // w1
  int v10; // w2
  __int64 v11; // x3
  BattleLogicFunctionProcess_DependFunctionUnitCheck_o *v12; // x23
  __int64 v13; // x0
  __int64 v14; // x1
  System_Collections_Generic_IEnumerable_BattleLogicFunctionProcess_FunctionTargetCheck__o **p_funcTargetArray_k__BackingField; // x8
  _QWORD **v16; // x20
  __int64 v17; // x19
  __int16 v18; // w8
  __int64 v19; // x19
  __int64 v20; // x19
  __int64 v21; // x19

  if ( (byte_42EAFE9 & 1) == 0 )
  {
    sub_B5D5C4(
      &Method_System_Array_Empty_BattleLogicFunctionProcess_FunctionTargetCheck___,
      (_DWORD)args,
      (_DWORD)mainAction,
      dataVal);
    sub_B5D5C4(&BattleLogicFunctionProcess_DependFunctionUnitCheck_TypeInfo, v9, v10, v11);
    byte_42EAFE9 = 1;
  }
  v12 = (BattleLogicFunctionProcess_DependFunctionUnitCheck_o *)sub_B5D694(BattleLogicFunctionProcess_DependFunctionUnitCheck_TypeInfo);
  BattleLogicFunctionProcess_DependFunctionUnitCheck___ctor(v12, this, args, dataVal, 0LL);
  if ( !v12 )
    sub_B5D69C(v13, v14);
  if ( BattleLogicFunctionProcess_FunctionUnitCheck__checkCondtion(
         (BattleLogicFunctionProcess_FunctionUnitCheck_o *)v12,
         mainAction,
         0LL) )
  {
    p_funcTargetArray_k__BackingField = (System_Collections_Generic_IEnumerable_BattleLogicFunctionProcess_FunctionTargetCheck__o **)&v12->fields._funcTargetArray_k__BackingField;
  }
  else
  {
    v16 = (_QWORD **)Method_System_Array_Empty_BattleLogicFunctionProcess_FunctionTargetCheck___;
    v17 = **((_QWORD **)Method_System_Array_Empty_BattleLogicFunctionProcess_FunctionTargetCheck___ + 6);
    v18 = *(_WORD *)(v17 + 306);
    if ( (v18 & 1) == 0 )
    {
      sub_AF52C4(**((_QWORD **)Method_System_Array_Empty_BattleLogicFunctionProcess_FunctionTargetCheck___ + 6));
      v18 = *(_WORD *)(v17 + 306);
    }
    if ( (v18 & 0x400) != 0 )
    {
      v19 = *v16[6];
      if ( (*(_BYTE *)(v19 + 306) & 1) == 0 )
        sub_AF52C4(*v16[6]);
      if ( !*(_DWORD *)(v19 + 224) )
      {
        v20 = *v16[6];
        if ( (*(_BYTE *)(v20 + 306) & 1) == 0 )
          sub_AF52C4(*v16[6]);
        j_il2cpp_runtime_class_init_0(v20);
      }
    }
    v21 = *v16[6];
    if ( (*(_BYTE *)(v21 + 306) & 1) == 0 )
      sub_AF52C4(*v16[6]);
    p_funcTargetArray_k__BackingField = *(System_Collections_Generic_IEnumerable_BattleLogicFunctionProcess_FunctionTargetCheck__o ***)(v21 + 184);
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
    sub_B5D69C(this, 0LL);
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
  int v8; // w1
  int v9; // w2
  __int64 v10; // x3
  int v11; // w1
  int v12; // w2
  __int64 v13; // x3
  int v14; // w1
  int v15; // w2
  __int64 v16; // x3
  int v17; // w1
  int v18; // w2
  __int64 v19; // x3
  int v20; // w1
  int v21; // w2
  __int64 v22; // x3
  int v23; // w1
  int v24; // w2
  __int64 v25; // x3
  int v26; // w1
  int v27; // w2
  __int64 v28; // x3
  int v29; // w1
  int v30; // w2
  __int64 v31; // x3
  int v32; // w1
  int v33; // w2
  __int64 v34; // x3
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v35; // x0
  System_Collections_Generic_List_VoiceCondType_Type__o *v36; // x24
  _QWORD *DependDataValsArray; // x0
  __int64 v38; // x1
  RemovedBuffInfoGroup_o *v39; // x22
  const MethodInfo *v40; // x4
  __int64 v41; // x8
  unsigned __int64 v42; // x9
  int v43; // w26
  DataVals_o *v44; // x25
  __int64 v45; // x3
  __int64 v46; // x8
  _QWORD *v47; // x24
  unsigned __int64 v48; // x10
  int *v49; // x11
  __int64 v50; // x0
  __int64 v51; // x1
  __int64 v52; // x3
  __int64 v53; // x24
  __int64 v54; // x8
  unsigned __int64 v55; // x10
  int *v56; // x11
  __int64 v57; // x0
  __int64 v58; // x3
  __int64 v59; // x8
  unsigned __int64 v60; // x10
  int *v61; // x11
  __int64 v62; // x0
  __int64 v63; // x0
  __int64 v64; // x1
  __int64 v65; // x26
  __int64 v66; // x0
  __int64 v67; // x1
  int32_t v68; // w26
  FunctionEntity_o *funcEnt; // x27
  int32_t funcIndex; // w28
  bool IsCommandSideEffect; // w0
  BattleActionData_o *v72; // x0
  __int64 v73; // x0
  __int64 v74; // x1
  __int64 v75; // x8
  unsigned __int64 v76; // x10
  int *v77; // x11
  __int64 v78; // x0
  int v79; // w8
  unsigned __int64 v80; // x9
  __int64 v82; // x0
  const MethodInfo *v83; // [xsp+0h] [xbp-90h]
  _QWORD *v84; // [xsp+10h] [xbp-80h]
  int v85; // [xsp+1Ch] [xbp-74h]
  unsigned __int64 v86; // [xsp+20h] [xbp-70h]
  _DWORD v88[1]; // [xsp+30h] [xbp-60h]
  int v89; // [xsp+34h] [xbp-5Ch]
  RemovedBuffInfo_o *subBuffInfo; // [xsp+38h] [xbp-58h] BYREF

  if ( (byte_42EB01A & 1) == 0 )
  {
    sub_B5D5C4(&System_IDisposable_TypeInfo, (_DWORD)procArg, (_DWORD)mainAction, baseVals);
    sub_B5D5C4(
      &System_Collections_Generic_IEnumerable_BattleLogicFunctionProcess_FunctionTargetCheck__TypeInfo,
      v8,
      v9,
      v10);
    sub_B5D5C4(
      &System_Collections_Generic_IEnumerator_BattleLogicFunctionProcess_FunctionTargetCheck__TypeInfo,
      v11,
      v12,
      v13);
    sub_B5D5C4(&System_Collections_IEnumerator_TypeInfo, v14, v15, v16);
    sub_B5D5C4(&Method_System_Collections_Generic_List_FuncList_TYPE__Add__, v17, v18, v19);
    sub_B5D5C4(&Method_System_Collections_Generic_List_FuncList_TYPE___ctor__, v20, v21, v22);
    sub_B5D5C4(&Method_System_Collections_Generic_List_BattleBuffData_BuffData___ctor__, v23, v24, v25);
    sub_B5D5C4(&System_Collections_Generic_List_FuncList_TYPE__TypeInfo, v26, v27, v28);
    sub_B5D5C4(&System_Collections_Generic_List_BattleBuffData_BuffData__TypeInfo, v29, v30, v31);
    sub_B5D5C4(&RemovedBuffInfoGroup_TypeInfo, v32, v33, v34);
    byte_42EB01A = 1;
  }
  subBuffInfo = 0LL;
  v89 = 0;
  v35 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B5D694(System_Collections_Generic_List_BattleBuffData_BuffData__TypeInfo);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v35,
    (const MethodInfo_30562FC *)Method_System_Collections_Generic_List_BattleBuffData_BuffData___ctor__);
  v36 = (System_Collections_Generic_List_VoiceCondType_Type__o *)sub_B5D694(System_Collections_Generic_List_FuncList_TYPE__TypeInfo);
  System_Collections_Generic_List_VoiceCondType_Type____ctor(
    v36,
    (const MethodInfo_3043A54 *)Method_System_Collections_Generic_List_FuncList_TYPE___ctor__);
  if ( !v36 )
    goto LABEL_57;
  System_Collections_Generic_List_VoiceCondType_Type___Add(
    v36,
    2,
    (const MethodInfo_30447B0 *)Method_System_Collections_Generic_List_FuncList_TYPE__Add__);
  v39 = (RemovedBuffInfoGroup_o *)sub_B5D694(RemovedBuffInfoGroup_TypeInfo);
  RemovedBuffInfoGroup___ctor(v39, 0LL);
  if ( !baseVals )
    goto LABEL_57;
  DependDataValsArray = DataVals__GetDependDataValsArray(
                          baseVals,
                          (System_Collections_Generic_List_FuncList_TYPE__o *)v36,
                          1,
                          0LL);
  if ( !DependDataValsArray )
    goto LABEL_57;
  v41 = DependDataValsArray[3];
  if ( (int)v41 >= 1 )
  {
    v42 = 0LL;
    v43 = 0;
    v84 = DependDataValsArray;
    while ( 1 )
    {
      v85 = v43;
      if ( v42 >= (unsigned int)v41 )
      {
        v82 = sub_B5D6C8(DependDataValsArray);
        sub_B5D668(v82, 0LL);
      }
      v44 = (DataVals_o *)DependDataValsArray[v42 + 4];
      v86 = v42;
      DependDataValsArray = BattleLogicFunction__GetDependFuncTargets(this, procArg, mainAction, v44, v40);
      if ( !DependDataValsArray )
        break;
      v46 = *DependDataValsArray;
      v47 = DependDataValsArray;
      if ( *(_WORD *)(*DependDataValsArray + 298LL) )
      {
        v48 = 0LL;
        v49 = (int *)(*(_QWORD *)(v46 + 176) + 8LL);
        while ( *((System_Collections_Generic_IEnumerable_BattleLogicFunctionProcess_FunctionTargetCheck__c **)v49 - 1) != System_Collections_Generic_IEnumerable_BattleLogicFunctionProcess_FunctionTargetCheck__TypeInfo )
        {
          ++v48;
          v49 += 4;
          if ( v48 >= *(unsigned __int16 *)(*DependDataValsArray + 298LL) )
            goto LABEL_20;
        }
        v50 = v46 + 16LL * *v49 + 312;
      }
      else
      {
LABEL_20:
        v50 = sub_AF54C0(
                DependDataValsArray,
                System_Collections_Generic_IEnumerable_BattleLogicFunctionProcess_FunctionTargetCheck__TypeInfo,
                0LL,
                v45);
      }
      v53 = (*(__int64 (__fastcall **)(_QWORD *, _QWORD))v50)(v47, *(_QWORD *)(v50 + 8));
      if ( !v53 )
        sub_B5D69C(0LL, v51);
      while ( 1 )
      {
        v54 = *(_QWORD *)v53;
        if ( *(_WORD *)(*(_QWORD *)v53 + 298LL) )
        {
          v55 = 0LL;
          v56 = (int *)(*(_QWORD *)(v54 + 176) + 8LL);
          while ( *((System_Collections_IEnumerator_c **)v56 - 1) != System_Collections_IEnumerator_TypeInfo )
          {
            ++v55;
            v56 += 4;
            if ( v55 >= *(unsigned __int16 *)(*(_QWORD *)v53 + 298LL) )
              goto LABEL_27;
          }
          v57 = v54 + 16LL * *v56 + 312;
        }
        else
        {
LABEL_27:
          v57 = sub_AF54C0(v53, System_Collections_IEnumerator_TypeInfo, 0LL, v52);
        }
        if ( ((*(__int64 (__fastcall **)(__int64, _QWORD))v57)(v53, *(_QWORD *)(v57 + 8)) & 1) == 0 )
          break;
        v59 = *(_QWORD *)v53;
        if ( *(_WORD *)(*(_QWORD *)v53 + 298LL) )
        {
          v60 = 0LL;
          v61 = (int *)(*(_QWORD *)(v59 + 176) + 8LL);
          while ( *((System_Collections_Generic_IEnumerator_BattleLogicFunctionProcess_FunctionTargetCheck__c **)v61 - 1) != System_Collections_Generic_IEnumerator_BattleLogicFunctionProcess_FunctionTargetCheck__TypeInfo )
          {
            ++v60;
            v61 += 4;
            if ( v60 >= *(unsigned __int16 *)(*(_QWORD *)v53 + 298LL) )
              goto LABEL_34;
          }
          v62 = v59 + 16LL * *v61 + 312;
        }
        else
        {
LABEL_34:
          v62 = sub_AF54C0(
                  v53,
                  System_Collections_Generic_IEnumerator_BattleLogicFunctionProcess_FunctionTargetCheck__TypeInfo,
                  0LL,
                  v58);
        }
        v63 = (*(__int64 (__fastcall **)(__int64, _QWORD))v62)(v53, *(_QWORD *)(v62 + 8));
        v65 = v63;
        if ( !v63 )
          sub_B5D69C(0LL, v64);
        v66 = (*(__int64 (__fastcall **)(__int64, BattleActionData_o *, _QWORD))(*(_QWORD *)v63 + 392LL))(
                v63,
                mainAction,
                *(_QWORD *)(*(_QWORD *)v63 + 400LL));
        if ( (v66 & 1) != 0 )
        {
          if ( !v44 )
            sub_B5D69C(v66, v67);
          if ( !procArg )
            sub_B5D69C(v66, v67);
          v68 = *(_DWORD *)(v65 + 32);
          funcEnt = v44->fields.funcEnt;
          funcIndex = v44->fields.funcIndex;
          IsCommandSideEffect = BattleLogicFunction_ProcListInArgs__get_IsCommandSideEffect(procArg, 0LL);
          v72 = BattleLogicFunction__functionSubState(
                  this,
                  v68,
                  funcEnt,
                  v44,
                  funcIndex,
                  IsCommandSideEffect,
                  &subBuffInfo,
                  procArg,
                  v83);
          if ( !mainAction )
            sub_B5D69C(v72, v72);
          BattleActionData__addAction(mainAction, v72, 0LL);
          if ( !v39 )
            sub_B5D69C(v73, v74);
          RemovedBuffInfoGroup__Register(v39, v68, subBuffInfo, 0LL);
        }
      }
      v88[v85] = 165;
      v43 = ++v89;
      v75 = *(_QWORD *)v53;
      if ( *(_WORD *)(*(_QWORD *)v53 + 298LL) )
      {
        v76 = 0LL;
        v77 = (int *)(*(_QWORD *)(v75 + 176) + 8LL);
        while ( *((System_IDisposable_c **)v77 - 1) != System_IDisposable_TypeInfo )
        {
          ++v76;
          v77 += 4;
          if ( v76 >= *(unsigned __int16 *)(*(_QWORD *)v53 + 298LL) )
            goto LABEL_48;
        }
        v78 = v75 + 16LL * *v77 + 312;
      }
      else
      {
LABEL_48:
        v78 = sub_AF54C0(v53, System_IDisposable_TypeInfo, 0LL, v58);
      }
      (*(void (__fastcall **)(__int64, _QWORD))v78)(v53, *(_QWORD *)(v78 + 8));
      if ( v43 )
      {
        v79 = v43 - 1;
        DependDataValsArray = v84;
        v80 = v86;
        if ( v88[v43 - 1] == 165 )
        {
          --v43;
          v89 = v79;
        }
      }
      else
      {
        DependDataValsArray = v84;
        v80 = v86;
      }
      LODWORD(v41) = *((_DWORD *)DependDataValsArray + 6);
      v42 = v80 + 1;
      if ( (__int64)v42 >= (int)v41 )
        return v39;
    }
LABEL_57:
    sub_B5D69C(DependDataValsArray, v38);
  }
  return v39;
}


bool __fastcall BattleLogicFunction__IsAddStateFieldFlag(
        BattleLogicFunction_o *this,
        BattleBuffData_BuffData_o *buffData,
        const MethodInfo *method)
{
  __int64 v3; // x3
  BattleLogicFunction_o *v5; // x20
  UnityEngine_Object_o *logic; // x21

  v5 = this;
  if ( (byte_42EAFE8 & 1) == 0 )
  {
    this = (BattleLogicFunction_o *)sub_B5D5C4(&UnityEngine_Object_TypeInfo, (_DWORD)buffData, (_DWORD)method, v3);
    byte_42EAFE8 = 1;
  }
  if ( !buffData )
    goto LABEL_12;
  if ( buffData->fields.onfiledUniqueId >= 1 )
  {
    logic = (UnityEngine_Object_o *)v5->fields.logic;
    if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    }
    if ( UnityEngine_Object__op_Inequality(logic, 0LL, 0LL) )
    {
      this = (BattleLogicFunction_o *)v5->fields.logic;
      if ( this )
        return BattleLogic__checkInField((BattleLogic_o *)this, buffData->fields.onfiledUniqueId, 0LL);
LABEL_12:
      sub_B5D69C(this, buffData);
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
    sub_B5D69C(this, funcType);
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
    sub_B5D69C(data, *(_QWORD *)&targetId);
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
  int v9; // w1
  int v10; // w2
  __int64 v11; // x3
  int v12; // w1
  int v13; // w2
  __int64 v14; // x3
  BattleData_o *data; // x0
  BattleServantData_o *ServantData; // x0
  BattleServantData_o *v17; // x20
  struct BattleData_o *v18; // x8
  int32_t currentTurn; // w8
  bool v20; // w10
  bool v21; // w10

  if ( (byte_42EAFEB & 1) == 0 )
  {
    sub_B5D5C4(&Method_DataManager_GetMaster_ConstantStrMaster___, targetId, (_DWORD)buffEnt, shortbuff);
    sub_B5D5C4(&DataManager_TypeInfo, v9, v10, v11);
    sub_B5D5C4(&StringLiteral_5870/*"EXTEND_TURN_BUFF_TYPE"*/, v12, v13, v14);
    byte_42EAFEB = 1;
  }
  data = this->fields.data;
  if ( !data )
    goto LABEL_32;
  ServantData = BattleData__getServantData(data, targetId, 0LL);
  if ( !ServantData )
    return (char)ServantData;
  v17 = ServantData;
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
  data = (BattleData_o *)DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_1AE41EC *)Method_DataManager_GetMaster_ConstantStrMaster___);
  if ( !buffEnt || !data )
LABEL_32:
    sub_B5D69C(data, *(_QWORD *)&targetId);
  data = (BattleData_o *)ConstantStrMaster__ExistValueArray(
                           (ConstantStrMaster_o *)data,
                           (System_String_o *)StringLiteral_5870/*"EXTEND_TURN_BUFF_TYPE"*/,
                           buffEnt->fields.type,
                           0LL);
  if ( ((unsigned __int8)data & 1) == 0 )
    goto LABEL_27;
  v18 = this->fields.data;
  if ( !v18 )
    goto LABEL_32;
  currentTurn = v18->fields.currentTurn;
  if ( currentTurn )
    v20 = 0;
  else
    v20 = !v17->fields.isEnemy;
  if ( !v20 || !shortbuff )
  {
    v21 = currentTurn == 1 && v17->fields.isEnemy;
    if ( (!v21 || !shortbuff)
      && (currentTurn || !v17->fields.isEnemy || shortbuff)
      && (currentTurn != 1 || v17->fields.isEnemy || shortbuff) )
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
  int v8; // w1
  int v9; // w2
  __int64 v10; // x3
  int v11; // w1
  int v12; // w2
  __int64 v13; // x3
  int v14; // w1
  int v15; // w2
  __int64 v16; // x3
  int v17; // w1
  int v18; // w2
  __int64 v19; // x3
  int v20; // w1
  int v21; // w2
  __int64 v22; // x3
  DataManager_o *Instance; // x0
  System_Collections_Generic_List_int__o *v24; // x22
  System_String_array **v25; // x2
  System_String_array **v26; // x3
  System_Boolean_array **v27; // x4
  System_Int32_array **v28; // x5
  System_Int32_array *v29; // x6
  System_Int32_array *v30; // x7
  System_Collections_Generic_IEnumerable_T__o *v31; // x1
  System_Int32_array *ValueArray; // x0

  if ( (byte_42EAFDD & 1) == 0 )
  {
    sub_B5D5C4(&Method_DataManager_GetMasterData_ConstantStrMaster___, buffType, (_DWORD)keyName, typeList);
    sub_B5D5C4(&Method_System_Collections_Generic_List_int__AddRange__, v8, v9, v10);
    sub_B5D5C4(&Method_System_Collections_Generic_List_int__Contains__, v11, v12, v13);
    sub_B5D5C4(&Method_System_Collections_Generic_List_int___ctor___68740224, v14, v15, v16);
    sub_B5D5C4(&System_Collections_Generic_List_int__TypeInfo, v17, v18, v19);
    sub_B5D5C4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v20, v21, v22);
    byte_42EAFDD = 1;
  }
  Instance = (DataManager_o *)*typeList;
  if ( !*typeList )
  {
    v24 = (System_Collections_Generic_List_int__o *)sub_B5D694(System_Collections_Generic_List_int__TypeInfo);
    System_Collections_Generic_List_int____ctor(
      v24,
      (const MethodInfo_30836B0 *)Method_System_Collections_Generic_List_int___ctor___68740224);
    *typeList = v24;
    sub_B5D560((BattleServantConfConponent_o *)typeList, (System_Int32_array **)v24, v25, v26, v27, v28, v29, v30);
    Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( Instance )
    {
      Instance = (DataManager_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                    Instance,
                                    (const MethodInfo_1AE424C *)Method_DataManager_GetMasterData_ConstantStrMaster___);
      if ( Instance )
      {
        ValueArray = ConstantStrMaster__GetValueArray((ConstantStrMaster_o *)Instance, keyName, 0LL, 0LL);
        if ( ValueArray )
        {
          v31 = (System_Collections_Generic_IEnumerable_T__o *)ValueArray;
          Instance = (DataManager_o *)*typeList;
          if ( !*typeList )
            goto LABEL_11;
          System_Collections_Generic_List_int___AddRange(
            (System_Collections_Generic_List_int__o *)Instance,
            v31,
            (const MethodInfo_3084660 *)Method_System_Collections_Generic_List_int__AddRange__);
        }
        Instance = (DataManager_o *)*typeList;
        if ( *typeList )
          return System_Collections_Generic_List_int___Contains(
                   (System_Collections_Generic_List_int__o *)Instance,
                   buffType,
                   (const MethodInfo_3084860 *)Method_System_Collections_Generic_List_int__Contains__);
      }
    }
LABEL_11:
    sub_B5D69C(Instance, v31);
  }
  return System_Collections_Generic_List_int___Contains(
           (System_Collections_Generic_List_int__o *)Instance,
           buffType,
           (const MethodInfo_3084860 *)Method_System_Collections_Generic_List_int__Contains__);
}


void __fastcall BattleLogicFunction__LossCommandSpell(
        BattleLogicFunction_o *this,
        DataVals_o *baseVals,
        BattleActionData_o *actionData,
        const MethodInfo *method)
{
  int v6; // w1
  int v7; // w2
  __int64 v8; // x3
  __int64 v9; // x21
  __int64 Value; // x0
  __int64 v11; // x1
  System_Int32_array **v12; // x1
  System_String_array **v13; // x2
  System_String_array **v14; // x3
  System_Boolean_array **v15; // x4
  System_Int32_array **v16; // x5
  System_Int32_array *v17; // x6
  System_Int32_array *v18; // x7
  System_Int32_array **skillInfo; // x1
  System_String_array **v20; // x2
  System_String_array **v21; // x3
  System_Boolean_array **v22; // x4
  System_Int32_array **v23; // x5
  System_Int32_array *v24; // x6
  System_Int32_array *v25; // x7
  __int64 v26; // x22

  if ( (byte_42EB01E & 1) == 0 )
  {
    sub_B5D5C4(&BattleActionData_TypeInfo, (_DWORD)baseVals, (_DWORD)actionData, method);
    sub_B5D5C4(&StringLiteral_8533/*"LOSS_COMMAND_SPELL"*/, v6, v7, v8);
    byte_42EB01E = 1;
  }
  v9 = sub_B5D694(BattleActionData_TypeInfo);
  BattleActionData___ctor((BattleActionData_o *)v9, 0LL);
  if ( !actionData )
    goto LABEL_8;
  if ( !v9 )
    goto LABEL_8;
  *(_DWORD *)(v9 + 32) = actionData->fields.actorId;
  *(_DWORD *)(v9 + 36) = actionData->fields.targetId;
  BattleActionData__setStateField((BattleActionData_o *)v9, 0LL);
  v12 = (System_Int32_array **)StringLiteral_8533/*"LOSS_COMMAND_SPELL"*/;
  *(_QWORD *)(v9 + 64) = StringLiteral_8533/*"LOSS_COMMAND_SPELL"*/;
  sub_B5D560((BattleServantConfConponent_o *)(v9 + 64), v12, v13, v14, v15, v16, v17, v18);
  skillInfo = (System_Int32_array **)actionData->fields.skillInfo;
  *(_QWORD *)(v9 + 144) = skillInfo;
  sub_B5D560((BattleServantConfConponent_o *)(v9 + 144), skillInfo, v20, v21, v22, v23, v24, v25);
  if ( !baseVals || (v26 = *(_QWORD *)(v9 + 144), Value = DataVals__GetValue(baseVals, 0LL), !v26) )
LABEL_8:
    sub_B5D69C(Value, v11);
  *(_DWORD *)(v26 + 100) = Value;
  *(_BYTE *)(v9 + 241) = DataVals__isForcedEffectSpeedOne(baseVals, 0LL);
  BattleActionData__AddAfterActionData(actionData, (BattleActionData_o *)v9, 0, 0LL);
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
    sub_B5D69C(this, actBuffData);
  }
  popupText = funcEnt->fields.popupText;
  actBuffData->fields.popLabel = popupText;
  sub_B5D560(
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
  sub_B5D560(
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

  if ( (byte_42EAFEF & 1) == 0 )
  {
    sub_B5D5C4(&BattleActionData_BuffData_TypeInfo, targetId, funcIndex, *(_QWORD *)&iconId);
    byte_42EAFEF = 1;
  }
  v12 = sub_B5D694(BattleActionData_BuffData_TypeInfo);
  BattleActionData_BuffData___ctor((BattleActionData_BuffData_o *)v12, 0LL);
  if ( !v12 )
    sub_B5D69C(v13, v14);
  *(_DWORD *)(v12 + 40) = targetId;
  *(_DWORD *)(v12 + 16) = funcIndex;
  *(_DWORD *)(v12 + 64) = iconId;
  *(_QWORD *)(v12 + 56) = popupText;
  sub_B5D560((BattleServantConfConponent_o *)(v12 + 56), (System_Int32_array **)popupText, v15, v16, v17, v18, v19, v20);
  *(_DWORD *)(v12 + 68) = popupTextColor;
  *(_QWORD *)(v12 + 72) = 0LL;
  sub_B5D560((BattleServantConfConponent_o *)(v12 + 72), 0LL, v21, v22, v23, v24, v25, v26);
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
  int v8; // w1
  int v9; // w2
  __int64 v10; // x3
  int v11; // w1
  int v12; // w2
  __int64 v13; // x3
  int v14; // w1
  int v15; // w2
  __int64 v16; // x3
  int v17; // w1
  int v18; // w2
  __int64 v19; // x3
  int v20; // w1
  int v21; // w2
  __int64 v22; // x3
  int v23; // w1
  int v24; // w2
  __int64 v25; // x3
  int v26; // w1
  int v27; // w2
  __int64 v28; // x3
  int v29; // w1
  int v30; // w2
  __int64 v31; // x3
  int v32; // w1
  int v33; // w2
  __int64 v34; // x3
  int v35; // w1
  int v36; // w2
  __int64 v37; // x3
  int v38; // w1
  int v39; // w2
  __int64 v40; // x3
  int v41; // w1
  int v42; // w2
  __int64 v43; // x3
  int v44; // w1
  int v45; // w2
  __int64 v46; // x3
  int v47; // w1
  int v48; // w2
  __int64 v49; // x3
  FamilyBuffLinkageIdGenerator_o *v50; // x19
  int v51; // w20
  Il2CppObject *currentValue; // x21
  System_Collections_Generic_Dictionary_int__int__o *v53; // x20
  __int64 v54; // x0
  __int64 v55; // x1
  System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *klass; // x0
  __int64 IsNullOrEmpty; // x0
  __int64 v58; // x8
  unsigned __int64 v59; // x27
  System_Collections_ICollection_o *v60; // x22
  __int64 v61; // x1
  unsigned __int64 monitor; // x8
  unsigned __int64 v63; // x26
  signed __int64 v64; // x24
  System_Collections_ICollection_o *v65; // x28
  _BOOL8 v66; // x0
  __int64 v67; // x1
  int32_t v68; // w23
  int32_t v69; // w0
  _BOOL8 v70; // x0
  __int64 v71; // x1
  Il2CppObject *current; // x22
  __int64 v73; // x21
  System_Int32_array *FamilyLinkageIdArray; // x0
  __int64 v75; // x1
  System_String_array **v76; // x2
  System_String_array **v77; // x3
  System_Boolean_array **v78; // x4
  System_Int32_array **v79; // x5
  System_Int32_array *v80; // x6
  System_Int32_array *v81; // x7
  System_Int32_array **v82; // x23
  System_Int32_array *FamilyLinkageTargetIdArray; // x0
  System_String_array **v84; // x2
  System_String_array **v85; // x3
  System_Boolean_array **v86; // x4
  System_Int32_array **v87; // x5
  System_Int32_array *v88; // x6
  System_Int32_array *v89; // x7
  System_Int32_array **v90; // x22
  __int64 v91; // x0
  int v92; // w21
  __int64 v93; // x0
  __int64 v94; // x0
  __int64 v95; // x0
  __int64 v96; // x0
  __int64 v97; // x0
  __int64 v98; // x0
  __int64 v99; // x0
  __int64 v100; // x0
  int v101; // w20
  int v102; // [xsp+4h] [xbp-BCh]
  _BYTE v103[32]; // [xsp+8h] [xbp-B8h] BYREF
  int v104; // [xsp+28h] [xbp-98h]
  System_Collections_Generic_List_Enumerator_T__o v105; // [xsp+30h] [xbp-90h] BYREF
  System_Collections_Generic_Dictionary_ValueCollection_Enumerator_TKey__TValue__o v106; // [xsp+50h] [xbp-70h] BYREF

  if ( (byte_42EB01B & 1) == 0 )
  {
    sub_B5D5C4(
      &Method_System_Collections_Generic_Dictionary_int__int__ContainsKey__,
      (_DWORD)procArg,
      (_DWORD)targetServant,
      stealBuffInfoGroup);
    sub_B5D5C4(&Method_System_Collections_Generic_Dictionary_int__int___ctor__, v8, v9, v10);
    sub_B5D5C4(&Method_System_Collections_Generic_Dictionary_int__int__get_Item__, v11, v12, v13);
    sub_B5D5C4(&Method_System_Collections_Generic_Dictionary_int__RemovedBuffInfo__get_Values__, v14, v15, v16);
    sub_B5D5C4(&Method_System_Collections_Generic_Dictionary_int__int__set_Item__, v17, v18, v19);
    sub_B5D5C4(&System_Collections_Generic_Dictionary_int__int__TypeInfo, v20, v21, v22);
    sub_B5D5C4(&Method_System_Collections_Generic_List_Enumerator_BattleBuffData_BuffData__Dispose__, v23, v24, v25);
    sub_B5D5C4(
      &Method_System_Collections_Generic_Dictionary_ValueCollection_Enumerator_int__RemovedBuffInfo__Dispose__,
      v26,
      v27,
      v28);
    sub_B5D5C4(&Method_System_Collections_Generic_List_Enumerator_BattleBuffData_BuffData__MoveNext__, v29, v30, v31);
    sub_B5D5C4(
      &Method_System_Collections_Generic_Dictionary_ValueCollection_Enumerator_int__RemovedBuffInfo__MoveNext__,
      v32,
      v33,
      v34);
    sub_B5D5C4(&Method_System_Collections_Generic_List_Enumerator_BattleBuffData_BuffData__get_Current__, v35, v36, v37);
    sub_B5D5C4(
      &Method_System_Collections_Generic_Dictionary_ValueCollection_Enumerator_int__RemovedBuffInfo__get_Current__,
      v38,
      v39,
      v40);
    sub_B5D5C4(&int_____TypeInfo, v41, v42, v43);
    sub_B5D5C4(&Method_System_Collections_Generic_List_BattleBuffData_BuffData__GetEnumerator__, v44, v45, v46);
    this = (BattleLogicFunction_o *)sub_B5D5C4(
                                      &Method_System_Collections_Generic_Dictionary_ValueCollection_int__RemovedBuffInfo__GetEnumerator__,
                                      v47,
                                      v48,
                                      v49);
    byte_42EB01B = 1;
  }
  memset(&v106, 0, sizeof(v106));
  memset(&v105, 0, sizeof(v105));
  v104 = 0;
  if ( targetServant )
  {
    if ( !procArg
      || (this = (BattleLogicFunction_o *)BattleLogicFunction_ProcListInArgs__GetFamilyBuffLinkageIdGenerator(
                                            procArg,
                                            targetServant,
                                            0LL),
          !stealBuffInfoGroup)
      || (v50 = (FamilyBuffLinkageIdGenerator_o *)this,
          (this = (BattleLogicFunction_o *)stealBuffInfoGroup->fields._servantUniqueIdToRemovedBuffInfoMap_k__BackingField) == 0LL)
      || (this = (BattleLogicFunction_o *)System_Collections_Generic_Dictionary_int__QuestAfterAction_VoiceInfo___get_Values(
                                            (System_Collections_Generic_Dictionary_int__QuestAfterAction_VoiceInfo__o *)this,
                                            (const MethodInfo_2F31E68 *)Method_System_Collections_Generic_Dictionary_int__RemovedBuffInfo__get_Values__)) == 0LL )
    {
      sub_B5D69C(this, procArg);
    }
    System_Collections_Generic_Dictionary_ValueCollection_int__BillBoardGroupManager_GroupData___GetEnumerator(
      (System_Collections_Generic_Dictionary_ValueCollection_Enumerator_TKey__TValue__o *)v103,
      (System_Collections_Generic_Dictionary_ValueCollection_TKey__TValue__o *)this,
      (const MethodInfo_23B95BC *)Method_System_Collections_Generic_Dictionary_ValueCollection_int__RemovedBuffInfo__GetEnumerator__);
    v51 = 0;
    v106 = *(System_Collections_Generic_Dictionary_ValueCollection_Enumerator_TKey__TValue__o *)v103;
    while ( System_Collections_Generic_Dictionary_ValueCollection_Enumerator_int__BillBoardGroupManager_GroupData___MoveNext(
              &v106,
              (const MethodInfo_28A2E24 *)Method_System_Collections_Generic_Dictionary_ValueCollection_Enumerator_int__RemovedBuffInfo__MoveNext__) )
    {
      v102 = v51;
      currentValue = v106.fields.currentValue;
      v53 = (System_Collections_Generic_Dictionary_int__int__o *)sub_B5D694(System_Collections_Generic_Dictionary_int__int__TypeInfo);
      System_Collections_Generic_Dictionary_int__int____ctor(
        v53,
        (const MethodInfo_2F0A2B4 *)Method_System_Collections_Generic_Dictionary_int__int___ctor__);
      if ( !currentValue )
        sub_B5D69C(v54, v55);
      klass = (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)currentValue[1].klass;
      if ( !klass )
        sub_B5D69C(0LL, v55);
      System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo___GetEnumerator(
        (System_Collections_Generic_List_Enumerator_T__o *)v103,
        klass,
        (const MethodInfo_3057E3C *)Method_System_Collections_Generic_List_BattleBuffData_BuffData__GetEnumerator__);
      v105 = *(System_Collections_Generic_List_Enumerator_T__o *)v103;
      while ( 1 )
      {
        v70 = System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___MoveNext(
                &v105,
                (const MethodInfo_201EFD0 *)Method_System_Collections_Generic_List_Enumerator_BattleBuffData_BuffData__MoveNext__);
        if ( !v70 )
          break;
        current = v105.fields.current;
        if ( !v105.fields.current )
          sub_B5D69C(v70, v71);
        if ( BattleBuffData_BuffData__IsFamilyBuff((BattleBuffData_BuffData_o *)v105.fields.current, 0LL) )
        {
          v73 = sub_B5D5DC(int_____TypeInfo, 2LL);
          FamilyLinkageIdArray = BattleBuffData_BuffData__get_FamilyLinkageIdArray(
                                   (BattleBuffData_BuffData_o *)current,
                                   0LL);
          if ( !v73 )
            sub_B5D69C(FamilyLinkageIdArray, v75);
          v82 = (System_Int32_array **)FamilyLinkageIdArray;
          if ( FamilyLinkageIdArray )
          {
            FamilyLinkageIdArray = (System_Int32_array *)sub_B5D684(
                                                           FamilyLinkageIdArray,
                                                           *(_QWORD *)(*(_QWORD *)v73 + 64LL));
            if ( !FamilyLinkageIdArray )
            {
              v99 = sub_B5D6BC(0LL);
              sub_B5D668(v99, 0LL);
            }
          }
          if ( !*(_DWORD *)(v73 + 24) )
          {
            v98 = sub_B5D6C8(FamilyLinkageIdArray);
            sub_B5D668(v98, 0LL);
          }
          *(_QWORD *)(v73 + 32) = v82;
          sub_B5D560((BattleServantConfConponent_o *)(v73 + 32), v82, v76, v77, v78, v79, v80, v81);
          FamilyLinkageTargetIdArray = BattleBuffData_BuffData__get_FamilyLinkageTargetIdArray(
                                         (BattleBuffData_BuffData_o *)current,
                                         0LL);
          v90 = (System_Int32_array **)FamilyLinkageTargetIdArray;
          if ( FamilyLinkageTargetIdArray )
          {
            FamilyLinkageTargetIdArray = (System_Int32_array *)sub_B5D684(
                                                                 FamilyLinkageTargetIdArray,
                                                                 *(_QWORD *)(*(_QWORD *)v73 + 64LL));
            if ( !FamilyLinkageTargetIdArray )
            {
              v100 = sub_B5D6BC(0LL);
              sub_B5D668(v100, 0LL);
            }
          }
          if ( *(_DWORD *)(v73 + 24) <= 1u )
          {
            v91 = sub_B5D6C8(FamilyLinkageTargetIdArray);
            sub_B5D668(v91, 0LL);
          }
          *(_QWORD *)(v73 + 40) = v90;
          sub_B5D560((BattleServantConfConponent_o *)(v73 + 40), v90, v84, v85, v86, v87, v88, v89);
          v58 = *(_QWORD *)(v73 + 24);
          if ( (int)v58 >= 1 )
          {
            v59 = 0LL;
            do
            {
              if ( v59 >= (unsigned int)v58 )
              {
                v97 = sub_B5D6C8(IsNullOrEmpty);
                sub_B5D668(v97, 0LL);
              }
              v60 = *(System_Collections_ICollection_o **)(v73 + 8 * v59 + 32);
              IsNullOrEmpty = BasicHelper__IsNullOrEmpty(v60, 0LL);
              if ( (IsNullOrEmpty & 1) == 0 )
              {
                if ( !v60 )
                  sub_B5D69C(IsNullOrEmpty, v61);
                monitor = (unsigned __int64)v60[1].monitor;
                if ( (int)monitor >= 1 )
                {
                  v63 = 0LL;
                  v64 = (int)monitor;
                  v65 = v60 + 2;
                  do
                  {
                    if ( v63 >= (unsigned int)monitor )
                    {
                      v94 = sub_B5D6C8(IsNullOrEmpty);
                      sub_B5D668(v94, 0LL);
                    }
                    if ( !v53 )
                      sub_B5D69C(IsNullOrEmpty, v61);
                    v66 = System_Collections_Generic_Dictionary_int__int___ContainsKey(
                            v53,
                            *((_DWORD *)&v65->klass + v63),
                            (const MethodInfo_2F0B0BC *)Method_System_Collections_Generic_Dictionary_int__int__ContainsKey__);
                    if ( !v66 )
                    {
                      if ( v63 >= LODWORD(v60[1].monitor) )
                      {
                        v96 = sub_B5D6C8(v66);
                        sub_B5D668(v96, 0LL);
                      }
                      if ( !v50 )
                        sub_B5D69C(v66, v67);
                      v68 = *((_DWORD *)&v65->klass + v63);
                      v69 = FamilyBuffLinkageIdGenerator__Next(v50, 0LL);
                      System_Collections_Generic_Dictionary_int__int___set_Item(
                        v53,
                        v68,
                        v69,
                        (const MethodInfo_2F0AE30 *)Method_System_Collections_Generic_Dictionary_int__int__set_Item__);
                    }
                    if ( v63 >= LODWORD(v60[1].monitor) )
                    {
                      v93 = sub_B5D6C8(v66);
                      sub_B5D668(v93, 0LL);
                    }
                    IsNullOrEmpty = System_Collections_Generic_Dictionary_int__int___get_Item(
                                      v53,
                                      *((_DWORD *)&v65->klass + v63),
                                      (const MethodInfo_2F0AD98 *)Method_System_Collections_Generic_Dictionary_int__int__get_Item__);
                    monitor = LODWORD(v60[1].monitor);
                    if ( v63 >= monitor )
                    {
                      v95 = sub_B5D6C8(IsNullOrEmpty);
                      sub_B5D668(v95, 0LL);
                    }
                    *((_DWORD *)&v65->klass + v63++) = IsNullOrEmpty;
                  }
                  while ( (__int64)v63 < v64 );
                }
              }
              LODWORD(v58) = *(_DWORD *)(v73 + 24);
              ++v59;
            }
            while ( (__int64)v59 < (int)v58 );
          }
        }
      }
      v51 = 0;
      *(_DWORD *)&v103[4 * v102 + 24] = 244;
      v92 = ++v104;
      System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___Dispose(
        &v105,
        (const MethodInfo_201EFCC *)Method_System_Collections_Generic_List_Enumerator_BattleBuffData_BuffData__Dispose__);
      if ( v92 )
      {
        v51 = v92;
        if ( *(_DWORD *)&v103[4 * v92 + 20] == 244 )
        {
          v51 = v92 - 1;
          v104 = v92 - 1;
        }
      }
    }
    *(_DWORD *)&v103[4 * v51 + 24] = 272;
    v101 = ++v104;
    System_Collections_Generic_Dictionary_ValueCollection_Enumerator_int__BillBoardGroupManager_GroupData___Dispose(
      &v106,
      (const MethodInfo_28A2E20 *)Method_System_Collections_Generic_Dictionary_ValueCollection_Enumerator_int__RemovedBuffInfo__Dispose__);
    if ( v101 && *(_DWORD *)&v103[4 * v101 + 20] == 272 )
      v104 = v101 - 1;
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
  int v9; // w1
  int v10; // w2
  __int64 v11; // x3
  int v12; // w1
  int v13; // w2
  __int64 v14; // x3
  int v15; // w1
  int v16; // w2
  __int64 v17; // x3
  int v18; // w1
  int v19; // w2
  __int64 v20; // x3
  int v21; // w1
  int v22; // w2
  __int64 v23; // x3
  int v24; // w1
  int v25; // w2
  __int64 v26; // x3
  int v27; // w1
  int v28; // w2
  __int64 v29; // x3
  SkillLvMaster_o *Master_WarQuestSelectionMaster; // x24
  _QWORD *FuncSideEffectTargetServants; // x0
  __int64 v32; // x1
  __int64 v33; // x8
  unsigned __int64 v34; // x9
  bool v35; // w20
  __int64 v36; // x8
  unsigned __int64 v37; // x21
  BattleServantData_o *v38; // x28
  __int64 v39; // x8
  _QWORD *v40; // x20
  unsigned __int64 v41; // x26
  BattleBuffData_BuffData_o *v42; // x25
  BattleActionData_o *SideEffectActionData_24156716; // x0
  const MethodInfo *v44; // x6
  System_Collections_Generic_IEnumerable_T__o *SideEffectList; // x19
  BattleLogicFunction___c_c *v46; // x8
  struct BattleLogicFunction___c_StaticFields *static_fields; // x9
  System_Action_DrawLotsDisplayMessage_DisplayedInGroup_SaveData__o *_9__49_0; // x20
  Il2CppObject *v49; // x21
  struct BattleLogicFunction___c_StaticFields *v50; // x0
  System_String_array **v51; // x2
  System_String_array **v52; // x3
  System_Boolean_array **v53; // x4
  System_Int32_array **v54; // x5
  System_Int32_array *v55; // x6
  System_Int32_array *v56; // x7
  __int64 v57; // x0
  _DWORD *v58; // [xsp+0h] [xbp-80h]
  unsigned __int64 v60; // [xsp+10h] [xbp-70h]
  _DWORD *v62; // [xsp+20h] [xbp-60h]
  BuffList_ACTION_array *targetActs; // [xsp+28h] [xbp-58h]

  if ( (byte_42EAFE1 & 1) == 0 )
  {
    sub_B5D5C4(&Method_System_Action_BattleActionData___ctor__, (_DWORD)sideEffectArg, (_DWORD)actionData, actorSvtData);
    sub_B5D5C4(&System_Action_BattleActionData__TypeInfo, v9, v10, v11);
    sub_B5D5C4(&Method_BasicHelper_ForEach_BattleActionData___, v12, v13, v14);
    sub_B5D5C4(&bool___TypeInfo, v15, v16, v17);
    sub_B5D5C4(&Method_DataManager_GetMaster_SkillLvMaster___, v18, v19, v20);
    sub_B5D5C4(&DataManager_TypeInfo, v21, v22, v23);
    sub_B5D5C4(&Method_BattleLogicFunction___c__SetFuncSideEffect_b__49_0__, v24, v25, v26);
    sub_B5D5C4(&BattleLogicFunction___c_TypeInfo, v27, v28, v29);
    byte_42EAFE1 = 1;
  }
  if ( actionData && actorSvtData )
  {
    if ( (BYTE3(DataManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !DataManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
    Master_WarQuestSelectionMaster = (SkillLvMaster_o *)DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_1AE41EC *)Method_DataManager_GetMaster_SkillLvMaster___);
    FuncSideEffectTargetServants = (_QWORD *)sub_B5D5DC(bool___TypeInfo, 2LL);
    if ( !FuncSideEffectTargetServants )
LABEL_38:
      sub_B5D69C(FuncSideEffectTargetServants, v32);
    v33 = FuncSideEffectTargetServants[3];
    if ( !(_DWORD)v33 )
      goto LABEL_37;
    *((_BYTE *)FuncSideEffectTargetServants + 32) = 1;
    if ( (int)v33 >= 1 )
    {
      v34 = 0LL;
      v58 = FuncSideEffectTargetServants;
      while ( 1 )
      {
        if ( v34 >= (unsigned int)v33 )
          goto LABEL_37;
        if ( !sideEffectArg )
          goto LABEL_38;
        v60 = v34;
        v35 = *((_BYTE *)FuncSideEffectTargetServants + v34 + 32) != 0;
        targetActs = (BuffList_ACTION_array *)((__int64 (__fastcall *)(BattleLogicFunction_FuncSideEffectFunctionArgument_o *, bool, Il2CppMethodPointer))sideEffectArg->klass->vtable._6_GetActArray.method)(
                                                sideEffectArg,
                                                v35,
                                                sideEffectArg->klass->vtable._7_SetSideEffect.methodPtr);
        FuncSideEffectTargetServants = BattleActionData__GetFuncSideEffectTargetServants(
                                         actionData,
                                         this->fields.data,
                                         v35,
                                         targetIds,
                                         0LL);
        if ( !FuncSideEffectTargetServants )
          goto LABEL_38;
        v36 = FuncSideEffectTargetServants[3];
        if ( (int)v36 >= 1 )
          break;
LABEL_25:
        FuncSideEffectTargetServants = v58;
        LODWORD(v33) = v58[6];
        v34 = v60 + 1;
        if ( (__int64)(v60 + 1) >= (int)v33 )
          goto LABEL_26;
      }
      v37 = 0LL;
      v62 = FuncSideEffectTargetServants;
      while ( 1 )
      {
        if ( v37 >= (unsigned int)v36 )
          goto LABEL_37;
        v38 = (BattleServantData_o *)FuncSideEffectTargetServants[v37 + 4];
        FuncSideEffectTargetServants = BattleServantData__GetAddSideEffectBuffList(actorSvtData, targetActs, v38, 0LL);
        if ( !FuncSideEffectTargetServants )
          goto LABEL_38;
        v39 = FuncSideEffectTargetServants[3];
        v40 = FuncSideEffectTargetServants;
        if ( (int)v39 >= 1 )
          break;
LABEL_24:
        FuncSideEffectTargetServants = v62;
        ++v37;
        LODWORD(v36) = v62[6];
        if ( (__int64)v37 >= (int)v36 )
          goto LABEL_25;
      }
      v41 = 0LL;
      while ( v41 < (unsigned int)v39 )
      {
        if ( !v38 )
          goto LABEL_38;
        v42 = (BattleBuffData_BuffData_o *)v40[v41 + 4];
        SideEffectActionData_24156716 = BattleActionData__MakeSideEffectActionData_24156716(
                                          actionData,
                                          4,
                                          v38->fields.uniqueId,
                                          0LL);
        BattleLogicFunction__SetSideEffectBuff(
          this,
          Master_WarQuestSelectionMaster,
          SideEffectActionData_24156716,
          v42,
          (BattleLogicFunction_CommonSideEffectFunctionArgument_o *)sideEffectArg,
          1,
          v44);
        LODWORD(v39) = *((_DWORD *)v40 + 6);
        if ( (__int64)++v41 >= (int)v39 )
          goto LABEL_24;
      }
LABEL_37:
      v57 = sub_B5D6C8(FuncSideEffectTargetServants);
      sub_B5D668(v57, 0LL);
    }
LABEL_26:
    if ( BattleActionData__ExistSideEffect(actionData, 4, 0LL) )
    {
      BattleActionData__SetFuncSideEffectTrigger(actionData, 0LL);
      SideEffectList = (System_Collections_Generic_IEnumerable_T__o *)BattleActionData__getSideEffectList(
                                                                        actionData,
                                                                        4,
                                                                        0LL);
      v46 = BattleLogicFunction___c_TypeInfo;
      if ( (BYTE3(BattleLogicFunction___c_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !BattleLogicFunction___c_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(BattleLogicFunction___c_TypeInfo);
        v46 = BattleLogicFunction___c_TypeInfo;
      }
      static_fields = v46->static_fields;
      _9__49_0 = (System_Action_DrawLotsDisplayMessage_DisplayedInGroup_SaveData__o *)static_fields->__9__49_0;
      if ( !_9__49_0 )
      {
        if ( (BYTE3(v46->vtable._0_Equals.methodPtr) & 4) != 0 && !v46->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(v46);
          static_fields = BattleLogicFunction___c_TypeInfo->static_fields;
        }
        v49 = (Il2CppObject *)static_fields->__9;
        _9__49_0 = (System_Action_DrawLotsDisplayMessage_DisplayedInGroup_SaveData__o *)sub_B5D694(System_Action_BattleActionData__TypeInfo);
        System_Action_DrawLotsDisplayMessage_DisplayedInGroup_SaveData____ctor(
          _9__49_0,
          v49,
          Method_BattleLogicFunction___c__SetFuncSideEffect_b__49_0__,
          (const MethodInfo_258B320 *)Method_System_Action_BattleActionData___ctor__);
        v50 = BattleLogicFunction___c_TypeInfo->static_fields;
        v50->__9__49_0 = (struct System_Action_BattleActionData__o *)_9__49_0;
        sub_B5D560(
          (BattleServantConfConponent_o *)&v50->__9__49_0,
          (System_Int32_array **)_9__49_0,
          v51,
          v52,
          v53,
          v54,
          v55,
          v56);
      }
      BasicHelper__ForEach_DrawLotsDisplayMessage_DisplayedInGroup_SaveData_(
        SideEffectList,
        (System_Action_T__o *)_9__49_0,
        (const MethodInfo_1AD82D8 *)Method_BasicHelper_ForEach_BattleActionData___);
    }
  }
}


// local variable allocation has failed, the output may be wrong!
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
  if ( (byte_42EAFF9 & 1) == 0 )
  {
    this = (BattleLogicFunction_o *)sub_B5D5C4(
                                      &BattleActionData_BuffData___TypeInfo,
                                      (_DWORD)actiondata,
                                      healPoint,
                                      *(_QWORD *)&funcIndex);
    byte_42EAFF9 = 1;
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
      sub_B5D69C(this, actiondata);
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
  sub_B5D560(
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
  this = (BattleLogicFunction_o *)sub_B5D5DC(BattleActionData_BuffData___TypeInfo, 1LL);
  if ( !this )
    goto LABEL_26;
  v35 = this;
  if ( v28 )
  {
    this = (BattleLogicFunction_o *)sub_B5D684(v28, this->klass->_1.element_class);
    if ( !this )
    {
      v41 = sub_B5D6BC(0LL);
      sub_B5D668(v41, 0LL);
    }
  }
  if ( !LODWORD(v35->fields.logic) )
    goto LABEL_27;
  v35->fields.logictarget = (struct BattleLogicTarget_o *)v28;
  sub_B5D560((BattleServantConfConponent_o *)&v35->fields.logictarget, v28, v29, v30, v31, v32, v33, v34);
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
    v40 = sub_B5D6C8(this);
    sub_B5D668(v40, 0LL);
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

  if ( (byte_42EAFE5 & 1) == 0 )
  {
    sub_B5D5C4(&BattleServantData_TypeInfo, (_DWORD)skillLvMst, (_DWORD)actData, buff);
    byte_42EAFE5 = 1;
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
      sub_B5D69C(SkillFromBuff, v14);
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
  int v10; // w1
  int v11; // w2
  __int64 v12; // x3
  int v13; // w1
  int v14; // w2
  __int64 v15; // x3
  int v16; // w1
  int v17; // w2
  __int64 v18; // x3
  DataManager_o *Instance; // x0
  __int64 v20; // x1
  struct BattleActionData_SideEffectData_array *SideEffectList_k__BackingField; // x24
  int max_length; // w8
  int v23; // w23
  BattleActionData_SideEffectData_o *v24; // x20
  BattleServantData_o *v25; // x26
  int32_t v26; // w1
  struct DataMasterBase_array *datalist; // x8
  DataManager_o *v28; // x27
  unsigned __int64 v29; // x25
  BattleBuffData_BuffData_o *v30; // x20
  BattleActionData_o *v31; // x28
  bool v32; // w5
  const MethodInfo *v33; // x6
  int32_t v34; // w0
  __int64 v35; // x0
  struct BattleActionData_SideEffectData_array *v36; // [xsp+0h] [xbp-80h]
  SkillLvMaster_o *skillLvMst; // [xsp+10h] [xbp-70h]
  System_Collections_Generic_KeyValuePair_int__int__o pairAttackAndTarget; // [xsp+28h] [xbp-58h] BYREF
  System_Collections_Generic_KeyValuePair_int__int__o p_pairAttackAndTarget; // 0:x0.8
  System_Collections_Generic_KeyValuePair_int__int__o v43; // 0:x1.8
  System_Collections_Generic_KeyValuePair_int__int__o v44; // 0:x1.8

  if ( (byte_42EAFE4 & 1) == 0 )
  {
    sub_B5D5C4(&BattleActionData_TypeInfo, (_DWORD)arg, (_DWORD)mainAction, actionSvtData);
    sub_B5D5C4(&Method_DataManager_GetMasterData_SkillLvMaster___, v10, v11, v12);
    sub_B5D5C4(&Method_System_Collections_Generic_KeyValuePair_int__int___ctor__, v13, v14, v15);
    sub_B5D5C4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v16, v17, v18);
    byte_42EAFE4 = 1;
  }
  pairAttackAndTarget = 0LL;
  Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance
    || (Instance = (DataManager_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                      Instance,
                                      (const MethodInfo_1AE424C *)Method_DataManager_GetMasterData_SkillLvMaster___),
        skillLvMst = (SkillLvMaster_o *)Instance,
        !attackArg)
    || (SideEffectList_k__BackingField = attackArg->fields._SideEffectList_k__BackingField) == 0LL )
  {
LABEL_25:
    sub_B5D69C(Instance, v20);
  }
  max_length = SideEffectList_k__BackingField->max_length;
  if ( max_length >= 1 )
  {
    v23 = 0;
    v36 = attackArg->fields._SideEffectList_k__BackingField;
    do
    {
      if ( v23 >= (unsigned int)max_length )
        goto LABEL_26;
      v24 = SideEffectList_k__BackingField->m_Items[v23];
      if ( !v24 )
        goto LABEL_25;
      Instance = (DataManager_o *)this->fields.data;
      if ( !Instance )
        goto LABEL_25;
      Instance = (DataManager_o *)BattleData__getServantData((BattleData_o *)Instance, v24->fields.targetId, 0LL);
      if ( Instance )
      {
        if ( !actionSvtData )
          goto LABEL_25;
        v25 = (BattleServantData_o *)Instance;
        v26 = BattleLogicFunction_SideEffectMakeArgument__MakeCheckKey(attackArg, actionSvtData->fields.uniqueId, 0LL);
        p_pairAttackAndTarget = (System_Collections_Generic_KeyValuePair_int__int__o)&pairAttackAndTarget;
        System_Collections_Generic_KeyValuePair_int__int____ctor(
          p_pairAttackAndTarget,
          v26,
          v25->fields.uniqueId,
          (const MethodInfo_237C760 *)Method_System_Collections_Generic_KeyValuePair_int__int___ctor__);
        if ( !mainAction )
          goto LABEL_25;
        v43 = pairAttackAndTarget;
        Instance = (DataManager_o *)BattleActionData__isReflectedAttackSideEffect(mainAction, v43, 0LL);
        if ( ((unsigned __int8)Instance & 1) == 0 )
        {
          Instance = (DataManager_o *)BattleServantData__getAttackSideEffectBuffList_21185296(
                                        actionSvtData,
                                        v24->fields.sideEffectActs,
                                        command,
                                        v25,
                                        0LL);
          if ( !Instance )
            goto LABEL_25;
          datalist = Instance->fields.datalist;
          v28 = Instance;
          if ( datalist )
          {
            if ( (int)datalist >= 1 )
            {
              v29 = 0LL;
              while ( v29 < (unsigned int)datalist )
              {
                v30 = (BattleBuffData_BuffData_o *)*((_QWORD *)&v28->fields.lookup + v29);
                v31 = (BattleActionData_o *)sub_B5D694(BattleActionData_TypeInfo);
                BattleActionData___ctor(v31, 0LL);
                if ( !v31 )
                  goto LABEL_25;
                v31->fields.actorId = actionSvtData->fields.uniqueId;
                v31->fields.targetId = v25->fields.uniqueId;
                v32 = ((__int64 (__fastcall *)(BattleLogicFunction_SideEffectMakeArgument_o *, Il2CppMethodPointer))attackArg->klass->vtable._5_unknown.method)(
                        attackArg,
                        attackArg->klass->vtable._6_Init.methodPtr) == 1;
                BattleLogicFunction__SetSideEffectBuff(
                  this,
                  skillLvMst,
                  v31,
                  v30,
                  (BattleLogicFunction_CommonSideEffectFunctionArgument_o *)arg,
                  v32,
                  v33);
                v34 = ((__int64 (__fastcall *)(BattleLogicFunction_SideEffectMakeArgument_o *, Il2CppMethodPointer))attackArg->klass->vtable._5_unknown.method)(
                        attackArg,
                        attackArg->klass->vtable._6_Init.methodPtr);
                BattleActionData__addSideEffectActionData(mainAction, v31, v34, 0LL);
                LODWORD(datalist) = v28->fields.datalist;
                if ( (__int64)++v29 >= (int)datalist )
                  goto LABEL_22;
              }
LABEL_26:
              v35 = sub_B5D6C8(Instance);
              sub_B5D668(v35, 0LL);
            }
LABEL_22:
            v44 = pairAttackAndTarget;
            BattleActionData__addReflectAttackSideEffect(mainAction, v44, 0LL);
            SideEffectList_k__BackingField = v36;
          }
        }
      }
      max_length = SideEffectList_k__BackingField->max_length;
      ++v23;
    }
    while ( v23 < max_length );
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
  int v8; // w1
  int v9; // w2
  __int64 v10; // x3
  int v11; // w1
  int v12; // w2
  __int64 v13; // x3
  int v14; // w1
  int v15; // w2
  __int64 v16; // x3
  int v17; // w1
  int v18; // w2
  __int64 v19; // x3
  int v20; // w1
  int v21; // w2
  __int64 v22; // x3
  int32_t funcType; // w23
  DataMasterBase_WarMaster__WarEntity__int__o *MasterData_WarQuestSelectionMaster; // x22
  struct BattleLogic_o *logic; // x8
  BattleLogicFunction_o *v26; // x23
  unsigned __int64 v27; // x26
  const MethodInfo *v28; // x4
  BattleLogicFunction_o *v29; // x24
  BattleLogicFunction_o *v30; // x25
  __int64 v31; // x0
  BattleLogicFunction_o *v32; // [xsp+8h] [xbp-58h]

  v32 = this;
  if ( (byte_42EAFE0 & 1) == 0 )
  {
    sub_B5D5C4(&Method_DataManager_GetMasterData_FunctionMaster___, targetId, (_DWORD)action, baseVals);
    sub_B5D5C4(&Method_DataMasterBase_FunctionMaster__FunctionEntity__int__GetEntity__, v8, v9, v10);
    sub_B5D5C4(&int___TypeInfo, v11, v12, v13);
    sub_B5D5C4(&Method_System_Collections_Generic_List_int__AddRange__, v14, v15, v16);
    sub_B5D5C4(&Method_System_Collections_Generic_List_int__Add__, v17, v18, v19);
    this = (BattleLogicFunction_o *)sub_B5D5C4(
                                      &Method_SingletonMonoBehaviour_DataManager__get_Instance__,
                                      v20,
                                      v21,
                                      v22);
    byte_42EAFE0 = 1;
  }
  if ( !action )
    goto LABEL_19;
  this = (BattleLogicFunction_o *)action->fields.funcTargetList;
  if ( !this )
    goto LABEL_19;
  System_Collections_Generic_List_int___Add(
    (System_Collections_Generic_List_int__o *)this,
    targetId,
    (const MethodInfo_308440C *)Method_System_Collections_Generic_List_int__Add__);
  if ( !baseVals )
    goto LABEL_19;
  funcType = baseVals->fields.funcType;
  this = (BattleLogicFunction_o *)sub_B5D5DC(int___TypeInfo, 1LL);
  if ( !this )
    goto LABEL_19;
  if ( !LODWORD(this->fields.logic) )
    goto LABEL_20;
  LODWORD(this->fields.logictarget) = targetId;
  BattleActionData__AddHpDecreaseFuncTargets(action, funcType, (System_Int32_array *)this, 0LL);
  this = (BattleLogicFunction_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !this
    || (MasterData_WarQuestSelectionMaster = (DataMasterBase_WarMaster__WarEntity__int__o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                                                              (DataManager_o *)this,
                                                                                              (const MethodInfo_1AE424C *)Method_DataManager_GetMasterData_FunctionMaster___),
        (this = (BattleLogicFunction_o *)DataVals__GetDependFuncIdArray(baseVals, 0LL)) == 0LL) )
  {
LABEL_19:
    sub_B5D69C(this, *(_QWORD *)&targetId);
  }
  logic = this->fields.logic;
  v26 = this;
  if ( (int)logic >= 1 )
  {
    v27 = 0LL;
    while ( v27 < (unsigned int)logic )
    {
      if ( !MasterData_WarQuestSelectionMaster )
        goto LABEL_19;
      this = (BattleLogicFunction_o *)DataMasterBase_WarMaster__WarEntity__int___GetEntity(
                                        MasterData_WarQuestSelectionMaster,
                                        *((_DWORD *)&v26->fields.logictarget + v27),
                                        (const MethodInfo_23FAE10 *)Method_DataMasterBase_FunctionMaster__FunctionEntity__int__GetEntity__);
      if ( this )
      {
        v29 = this;
        this = (BattleLogicFunction_o *)BattleLogicFunction__getTargetids(
                                          v32,
                                          action,
                                          HIDWORD(this->fields.logic),
                                          baseVals,
                                          v28);
        if ( !action->fields.funcTargetList )
          goto LABEL_19;
        v30 = this;
        System_Collections_Generic_List_int___AddRange(
          action->fields.funcTargetList,
          (System_Collections_Generic_IEnumerable_T__o *)this,
          (const MethodInfo_3084660 *)Method_System_Collections_Generic_List_int__AddRange__);
        BattleActionData__AddHpDecreaseFuncTargets(action, (int32_t)v29->fields.logic, (System_Int32_array *)v30, 0LL);
      }
      LODWORD(logic) = v26->fields.logic;
      if ( (__int64)++v27 >= (int)logic )
        return;
    }
LABEL_20:
    v31 = sub_B5D6C8(this);
    sub_B5D668(v31, 0LL);
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
  int v8; // w1
  int v9; // w2
  __int64 v10; // x3
  _BOOL8 IsUpdateBuffProgressTurn; // x0
  const MethodInfo *v12; // x4
  bool v13; // w8

  v7 = this;
  if ( (byte_42EAFDC & 1) == 0 )
  {
    sub_B5D5C4(&StringLiteral_15492/*"WAR_BOARD_PROGRESS_OPPONENT_BUFF_TYPES"*/, buffType, (_DWORD)isSelfTurn, method);
    this = (BattleLogicFunction_o *)sub_B5D5C4(&StringLiteral_15493/*"WAR_BOARD_PROGRESS_SELF_BUFF_TYPES"*/, v8, v9, v10);
    byte_42EAFDC = 1;
  }
  IsUpdateBuffProgressTurn = BattleLogicFunction__IsUpdateBuffProgressTurn(
                               this,
                               buffType,
                               (System_String_o *)StringLiteral_15493/*"WAR_BOARD_PROGRESS_SELF_BUFF_TYPES"*/,
                               &v7->fields.buffProgressTurnSelfList,
                               v4);
  if ( IsUpdateBuffProgressTurn )
  {
    v13 = 1;
  }
  else
  {
    if ( !BattleLogicFunction__IsUpdateBuffProgressTurn(
            (BattleLogicFunction_o *)IsUpdateBuffProgressTurn,
            buffType,
            (System_String_o *)StringLiteral_15492/*"WAR_BOARD_PROGRESS_OPPONENT_BUFF_TYPES"*/,
            &v7->fields.buffProgressTurnOpponentList,
            v12) )
      return;
    v13 = 0;
  }
  *isSelfTurn = v13;
}


bool __fastcall BattleLogicFunction__UpdateUserEquipSkillChargeTurn(
        BattleLogicFunction_o *this,
        DataVals_o *dataVals,
        bool isProgress,
        const MethodInfo *method)
{
  int v7; // w1
  char v8; // w2
  __int64 v9; // x3
  int v10; // w1
  char v11; // w2
  __int64 v12; // x3
  int v13; // w1
  char v14; // w2
  __int64 v15; // x3
  int v16; // w1
  char v17; // w2
  __int64 v18; // x3
  int v19; // w1
  char v20; // w2
  __int64 v21; // x3
  __int64 v22; // x20
  __int64 v23; // x1
  BattleData_o *data; // x0
  System_Collections_Generic_IEnumerable_T__o *v25; // x22
  System_Int32_array **TargetList; // x0
  System_String_array **v27; // x2
  System_String_array **v28; // x3
  System_Boolean_array **v29; // x4
  System_Int32_array **v30; // x5
  System_Int32_array *v31; // x6
  System_Int32_array *v32; // x7
  System_Action_DrawLotsDisplayMessage_DisplayedInGroup_SaveData__o *v33; // x0
  System_Action_T__o *v34; // x21
  __int64 *v35; // x8

  if ( (byte_42EB012 & 1) == 0 )
  {
    sub_B5D5C4(&Method_System_Action_BattleSkillInfoData___ctor__, (_DWORD)dataVals, isProgress, method);
    sub_B5D5C4(&System_Action_BattleSkillInfoData__TypeInfo, v7, v8, v9);
    sub_B5D5C4(&Method_BasicHelper_ForEach_BattleSkillInfoData___, v10, v11, v12);
    sub_B5D5C4(&Method_BattleLogicFunction___c__DisplayClass101_0__UpdateUserEquipSkillChargeTurn_b__0__, v13, v14, v15);
    sub_B5D5C4(&Method_BattleLogicFunction___c__DisplayClass101_0__UpdateUserEquipSkillChargeTurn_b__1__, v16, v17, v18);
    sub_B5D5C4(&BattleLogicFunction___c__DisplayClass101_0_TypeInfo, v19, v20, v21);
    byte_42EB012 = 1;
  }
  v22 = sub_B5D694(BattleLogicFunction___c__DisplayClass101_0_TypeInfo);
  BattleLogicFunction___c__DisplayClass101_0___ctor((BattleLogicFunction___c__DisplayClass101_0_o *)v22, 0LL);
  data = this->fields.data;
  if ( !data
    || (data = (BattleData_o *)BattleData__getMasterSkillInfos(data, 0LL), !dataVals)
    || (v25 = (System_Collections_Generic_IEnumerable_T__o *)data,
        data = (BattleData_o *)DataVals__GetValue(dataVals, 0LL),
        !v22) )
  {
    sub_B5D69C(data, v23);
  }
  *(_DWORD *)(v22 + 16) = (_DWORD)data;
  *(_DWORD *)(v22 + 20) = DataVals__GetValue2(dataVals, 0LL) - 1;
  TargetList = (System_Int32_array **)DataVals__GetTargetList(dataVals, 0LL);
  *(_QWORD *)(v22 + 24) = TargetList;
  sub_B5D560((BattleServantConfConponent_o *)(v22 + 24), TargetList, v27, v28, v29, v30, v31, v32);
  *(_BYTE *)(v22 + 32) = 0;
  v33 = (System_Action_DrawLotsDisplayMessage_DisplayedInGroup_SaveData__o *)sub_B5D694(System_Action_BattleSkillInfoData__TypeInfo);
  v34 = (System_Action_T__o *)v33;
  if ( isProgress )
    v35 = &Method_BattleLogicFunction___c__DisplayClass101_0__UpdateUserEquipSkillChargeTurn_b__0__;
  else
    v35 = &Method_BattleLogicFunction___c__DisplayClass101_0__UpdateUserEquipSkillChargeTurn_b__1__;
  System_Action_DrawLotsDisplayMessage_DisplayedInGroup_SaveData____ctor(
    v33,
    (Il2CppObject *)v22,
    *v35,
    (const MethodInfo_258B320 *)Method_System_Action_BattleSkillInfoData___ctor__);
  BasicHelper__ForEach_DrawLotsDisplayMessage_DisplayedInGroup_SaveData_(
    v25,
    v34,
    (const MethodInfo_1AD82D8 *)Method_BasicHelper_ForEach_BattleSkillInfoData___);
  return *(_BYTE *)(v22 + 32);
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
    sub_B5D69C(this, buff);
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
    sub_B5D69C(0LL, x);
  return BattleData__getServantData(data, x, 0LL) != 0LL;
}


// local variable allocation has failed, the output may be wrong!
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
  int v17; // w1
  int v18; // w2
  __int64 v19; // x3
  int v20; // w1
  int v21; // w2
  __int64 v22; // x3
  BattleData_o *data; // x0
  BattleServantData_o *v24; // x21
  BattleServantData_o *v25; // x19
  int v26; // w20
  float BuffTOLERANCEMagnification; // s0
  float BuffGRANTSUBSTATEMagnification; // s0
  int32_t InstantDeathRate; // w0
  bool result; // w0
  float v31; // s0
  int32_t v32; // w0
  int v33; // w8
  BattleLogicFunction_o *Next; // x0
  const MethodInfo *v35; // x4
  struct System_Int32_array **p_vals; // x8
  System_Int32_array *v37; // x20
  System_String_o *v38; // x19
  System_String_o *v39; // x0
  int v40; // w22
  float BuffTOLERANCESUBSTATEMagnification; // s0
  int value; // [xsp+Ch] [xbp-64h]
  __int64 v44; // [xsp+18h] [xbp-58h] BYREF

  if ( (byte_42EAFE2 & 1) == 0 )
  {
    sub_B5D5C4(&StringLiteral_17619/*"checkFuncAction("*/, (_DWORD)args, actorId, *(_QWORD *)&targetId);
    sub_B5D5C4(&StringLiteral_133/*" < "*/, v17, v18, v19);
    sub_B5D5C4(&StringLiteral_17618/*"checkFuncAction firstResult:false"*/, v20, v21, v22);
    byte_42EAFE2 = 1;
  }
  v44 = 0LL;
  data = this->fields.data;
  if ( !data )
    goto LABEL_51;
  data = (BattleData_o *)BattleData__getServantData(data, actorId, 0LL);
  if ( !this->fields.data )
    goto LABEL_51;
  v24 = (BattleServantData_o *)data;
  data = (BattleData_o *)BattleData__getServantData(this->fields.data, targetId, 0LL);
  v44 = 0x3E8000003E8LL;
  if ( !baseVals )
    goto LABEL_51;
  v25 = (BattleServantData_o *)data;
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
  data = (BattleData_o *)BattleUtility__Abs_23939196(value, 0LL);
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
        if ( !v25 )
          goto LABEL_51;
        if ( !BattleServantData__checkAvoidInstantDeath(v25, v24, 0LL) )
        {
          Next = (BattleLogicFunction_o *)BattleRandom__getNext(1000, 0LL);
          HIDWORD(v44) = (_DWORD)Next;
          InstantDeathRate = BattleLogicFunction__GetInstantDeathRate(
                               Next,
                               (float)value,
                               v25,
                               v24,
                               isTreasureDevice,
                               v35);
          goto LABEL_37;
        }
        v44 = 0x3E800000000LL;
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
        v37 = *p_vals;
        if ( v24 || !DataVals__isParam(baseVals, 74, 0LL) )
        {
          data = (BattleData_o *)BattleRandom__getNext(1000, 0LL);
          if ( !v25 )
            goto LABEL_51;
          v40 = (int)data;
          BuffTOLERANCESUBSTATEMagnification = BattleServantData__getBuffTOLERANCESUBSTATEMagnification(
                                                 v25,
                                                 v37,
                                                 v24,
                                                 0LL);
          HIDWORD(v44) = BattleUtility__FloorToInt(
                           (float)(BuffTOLERANCESUBSTATEMagnification * 1000.0) + (float)v40,
                           0LL);
          if ( v24 )
          {
            BuffGRANTSUBSTATEMagnification = BattleServantData__getBuffGRANTSUBSTATEMagnification(v24, v37, v25, 0LL);
            goto LABEL_15;
          }
          goto LABEL_35;
        }
        v31 = (float)BattleRandom__getNext(1000, 0LL);
        goto LABEL_33;
      }
      if ( FuncList__Check(20, funcEnt->fields.funcType, 0LL) )
      {
        data = (BattleData_o *)BattleRandom__getNext(1000, 0LL);
        if ( !v25 )
          goto LABEL_51;
        v31 = (float)(BattleServantData__getBuffResistDelayNPTurn(v25, v24, 0LL) * 1000.0) + (float)(int)data;
LABEL_33:
        v32 = BattleUtility__FloorToInt(v31, 0LL);
LABEL_34:
        HIDWORD(v44) = v32;
LABEL_35:
        v33 = value;
LABEL_45:
        LODWORD(v44) = v33;
        goto LABEL_46;
      }
      if ( !FuncList__Check(46, funcEnt->fields.funcType, 0LL) )
      {
        v32 = BattleRandom__getNext(1000, 0LL);
        goto LABEL_34;
      }
    }
    HIDWORD(v44) = 0;
    v33 = 1000;
    goto LABEL_45;
  }
  if ( buffEnt )
  {
    data = (BattleData_o *)BattleRandom__getNext(1000, 0LL);
    v26 = (int)data;
    if ( v24 )
    {
      if ( v25 )
      {
        BuffTOLERANCEMagnification = BattleServantData__getBuffTOLERANCEMagnification(
                                       v25,
                                       buffEnt->fields.vals,
                                       v24,
                                       &this->fields.wkStr,
                                       0LL);
        HIDWORD(v44) = BattleUtility__FloorToInt((float)(BuffTOLERANCEMagnification * 1000.0) + (float)v26, 0LL);
        BuffGRANTSUBSTATEMagnification = BattleServantData__getBuffGRANTSTATEMagnification(
                                           v24,
                                           buffEnt->fields.vals,
                                           v25,
                                           &this->fields.wkStr,
                                           0,
                                           0LL);
LABEL_15:
        InstantDeathRate = BattleUtility__FloorToInt(
                             (float)(BuffGRANTSUBSTATEMagnification * 1000.0) + (float)value,
                             0LL);
LABEL_37:
        LODWORD(v44) = InstantDeathRate;
        goto LABEL_46;
      }
LABEL_51:
      sub_B5D69C(data, args);
    }
    v31 = (float)(int)data;
    goto LABEL_33;
  }
LABEL_46:
  v38 = System_Int32__ToString((int32_t)&v44 + 4, 0LL);
  v39 = System_Int32__ToString((int32_t)&v44, 0LL);
  System_String__Concat_44581200(
    (System_String_o *)StringLiteral_17619/*"checkFuncAction("*/,
    v38,
    (System_String_o *)StringLiteral_133/*" < "*/,
    v39,
    0LL);
  return SHIDWORD(v44) < (int)v44;
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
    sub_B5D69C(data, *(_QWORD *)&targetId);
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

  if ( (byte_42EB017 & 1) == 0 )
  {
    sub_B5D5C4(&BattleActionData_TypeInfo, targetId, (_DWORD)funcEnt, baseVals);
    byte_42EB017 = 1;
  }
  v13 = (BattleActionData_o *)sub_B5D694(BattleActionData_TypeInfo);
  BattleActionData___ctor(v13, 0LL);
  data = this->fields.data;
  if ( !data || (data = (BattleData_o *)BattleData__getServantData(data, targetId, 0LL), !baseVals) )
    sub_B5D69C(data, v14);
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
  int v13; // w1
  int v14; // w2
  __int64 v15; // x3
  int v16; // w1
  int v17; // w2
  __int64 v18; // x3
  struct BattleLogicFunctionProcess_FunctionUnitCheck_o *funcUnit_k__BackingField; // x8
  DataVals_o *dataVals_k__BackingField; // x26
  BattleActionData_o *v21; // x23
  NpPointToTurnConvert_o *v22; // x28
  NpGaugeAbsorbResult_o *v23; // x27
  const MethodInfo *v24; // x4
  const MethodInfo *v25; // x4
  BattleActionData_o *v26; // x0
  const MethodInfo *v27; // x7
  float Turn_k__BackingField; // s0
  double v29; // d0
  BattleActionData_o *v30; // x0

  v12 = this;
  if ( (byte_42EB00D & 1) == 0 )
  {
    sub_B5D5C4(&BattleActionData_TypeInfo, targetId, (_DWORD)funcEnt, mainAction);
    sub_B5D5C4(&NpGaugeAbsorbResult_TypeInfo, v13, v14, v15);
    this = (BattleLogicFunction_o *)sub_B5D5C4(&NpPointToTurnConvert_TypeInfo, v16, v17, v18);
    byte_42EB00D = 1;
  }
  if ( !funcTarget )
    goto LABEL_12;
  funcUnit_k__BackingField = funcTarget->fields._funcUnit_k__BackingField;
  if ( !funcUnit_k__BackingField )
    goto LABEL_12;
  dataVals_k__BackingField = funcUnit_k__BackingField->fields._dataVals_k__BackingField;
  v21 = (BattleActionData_o *)sub_B5D694(BattleActionData_TypeInfo);
  BattleActionData___ctor(v21, 0LL);
  v22 = (NpPointToTurnConvert_o *)sub_B5D694(NpPointToTurnConvert_TypeInfo);
  NpPointToTurnConvert___ctor(v22, 0LL);
  v23 = (NpGaugeAbsorbResult_o *)sub_B5D694(NpGaugeAbsorbResult_TypeInfo);
  NpGaugeAbsorbResult___ctor(v23, (BaseNpGaugeConvert_o *)v22, 0LL);
  this = (BattleLogicFunction_o *)BattleLogicFunction__AbsorbNpTurn(v12, mainAction, funcTarget, v23, v24);
  if ( !v21
    || (BattleActionData__addAction(v21, (BattleActionData_o *)this, 0LL),
        v26 = BattleLogicFunction__AbsorbNpPoint(v12, mainAction, funcTarget, v23, v25),
        BattleActionData__addAction(v21, v26, 0LL),
        !dataVals_k__BackingField)
    || !v23 )
  {
LABEL_12:
    sub_B5D69C(this, *(_QWORD *)&targetId);
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
  BattleActionData__addAction(v21, v30, 0LL);
  return v21;
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
  BattleLogicFunction_o *v9; // x20
  int v10; // w1
  int v11; // w2
  __int64 v12; // x3
  int v13; // w1
  int v14; // w2
  __int64 v15; // x3
  int v16; // w1
  int v17; // w2
  __int64 v18; // x3
  int v19; // w1
  int v20; // w2
  __int64 v21; // x3
  int v22; // w1
  int v23; // w2
  __int64 v24; // x3
  int v25; // w1
  int v26; // w2
  __int64 v27; // x3
  int v28; // w1
  int v29; // w2
  __int64 v30; // x3
  int v31; // w1
  int v32; // w2
  __int64 v33; // x3
  int v34; // w1
  int v35; // w2
  __int64 v36; // x3
  int v37; // w1
  int v38; // w2
  __int64 v39; // x3
  int v40; // w1
  int v41; // w2
  __int64 v42; // x3
  int v43; // w1
  int v44; // w2
  __int64 v45; // x3
  int v46; // w1
  int v47; // w2
  __int64 v48; // x3
  int v49; // w1
  int v50; // w2
  __int64 v51; // x3
  int v52; // w1
  int v53; // w2
  __int64 v54; // x3
  int v55; // w1
  int v56; // w2
  __int64 v57; // x3
  int v58; // w1
  int v59; // w2
  __int64 v60; // x3
  int v61; // w1
  int v62; // w2
  __int64 v63; // x3
  int v64; // w1
  int v65; // w2
  __int64 v66; // x3
  int v67; // w1
  int v68; // w2
  __int64 v69; // x3
  int v70; // w1
  int v71; // w2
  __int64 v72; // x3
  int v73; // w1
  int v74; // w2
  __int64 v75; // x3
  int v76; // w1
  int v77; // w2
  __int64 v78; // x3
  struct BattleLogicFunctionProcess_FunctionUnitCheck_o *funcUnit_k__BackingField; // x19
  DataVals_o *dataVals_k__BackingField; // x23
  int32_t actorId; // w27
  BuffEntity_o *v82; // x25
  int32_t v83; // w0
  BattleActionData_o *v84; // x19
  BattleServantData_o *v85; // x24
  BattleServantData_o *ServantData; // x26
  BattleActionData_MasterBuffData_o *v87; // x19
  __int64 v88; // x27
  const MethodInfo *v89; // x4
  int v90; // w8
  int v91; // w19
  char v92; // w21
  _BOOL4 v93; // w22
  int32_t type; // w19
  const MethodInfo *v95; // x3
  bool v96; // zf
  BattleLogicFunction_ProcListInArgs_o *v97; // x22
  int v98; // w9
  int v99; // w8
  struct BattleData_o *data; // x8
  int32_t ProgressTurnCond; // w0
  int32_t v102; // w19
  int32_t v103; // w19
  int32_t v104; // w19
  int32_t v105; // w19
  int32_t tdCommandTypeChange; // w8
  System_Int32_array **v107; // x0
  System_String_array **v108; // x2
  System_String_array **v109; // x3
  System_Boolean_array **v110; // x4
  System_Int32_array **v111; // x5
  System_Int32_array *v112; // x6
  System_Int32_array *v113; // x7
  __int64 v114; // x21
  __int64 v115; // x19
  int32_t v116; // w19
  struct BattleData_o *v117; // x8
  struct BattleEntity_o *battle_ent; // x8
  int64_t userId; // x22
  int32_t eventId; // w19
  EventPointBuffMaster_o *v121; // x28
  int32_t EventPointGroupId; // w21
  UserEventPointEntity_o *EntityDefinitely; // x0
  int64_t value; // x19
  int logic; // w8
  int v126; // w10
  __int64 v127; // x9
  __int64 v128; // x11
  System_Int32_array **v129; // x0
  System_String_array **v130; // x2
  System_String_array **v131; // x3
  System_Boolean_array **v132; // x4
  System_Int32_array **v133; // x5
  System_Int32_array *v134; // x6
  System_Int32_array *v135; // x7
  __int64 v136; // x21
  __int64 v137; // x19
  BattleActionData_o *v138; // x28
  int32_t Param; // w21
  __int64 v140; // x19
  bool isEnemy; // w8
  int v142; // w8
  System_Int32_array **TargetIndiv; // x0
  System_String_array **v144; // x2
  System_String_array **v145; // x3
  System_Boolean_array **v146; // x4
  System_Int32_array **v147; // x5
  System_Int32_array *v148; // x6
  System_Int32_array *v149; // x7
  System_String_array **v150; // x2
  System_String_array **v151; // x3
  System_Boolean_array **v152; // x4
  System_Int32_array **v153; // x5
  System_Int32_array *v154; // x6
  System_Int32_array *v155; // x7
  int32_t v156; // w19
  System_Int32_array **IntervalData; // x0
  System_String_array **v158; // x2
  System_String_array **v159; // x3
  System_Boolean_array **v160; // x4
  System_Int32_array **v161; // x5
  System_Int32_array *v162; // x6
  System_Int32_array *v163; // x7
  System_Int32_array **ParamArray; // x0
  System_String_array **v165; // x2
  System_String_array **v166; // x3
  System_Boolean_array **v167; // x4
  System_Int32_array **v168; // x5
  System_Int32_array *v169; // x6
  System_Int32_array *v170; // x7
  int32_t v171; // w19
  int32_t RelationId; // w21
  BattleBuffData_RelationOverwriteData_o *v173; // x19
  System_String_array **v174; // x2
  System_String_array **v175; // x3
  System_Boolean_array **v176; // x4
  System_Int32_array **v177; // x5
  System_Int32_array *v178; // x6
  System_Int32_array *v179; // x7
  BattleDataDefine_c *v180; // x0
  int32_t v181; // w19
  bool v182; // w0
  float UpDownGiveHeal; // s8
  int32_t v184; // w0
  int v185; // s0
  int32_t v186; // w0
  int v187; // s0
  System_Int32_array **v188; // x0
  System_String_array **v189; // x2
  System_String_array **v190; // x3
  System_Boolean_array **v191; // x4
  System_Int32_array **v192; // x5
  System_Int32_array *v193; // x6
  System_Int32_array *v194; // x7
  System_Int32_array **v195; // x0
  System_String_array **v196; // x2
  System_String_array **v197; // x3
  System_Boolean_array **v198; // x4
  System_Int32_array **v199; // x5
  System_Int32_array *v200; // x6
  System_Int32_array *v201; // x7
  System_Int32_array **v202; // x0
  System_String_array **v203; // x2
  System_String_array **v204; // x3
  System_Boolean_array **v205; // x4
  System_Int32_array **v206; // x5
  System_Int32_array *v207; // x6
  System_Int32_array *v208; // x7
  int32_t v209; // w19
  System_Int32_array **UpBuffRateBuffTypeList; // x0
  System_String_array **v211; // x2
  System_String_array **v212; // x3
  System_Boolean_array **v213; // x4
  System_Int32_array **v214; // x5
  System_Int32_array *v215; // x6
  System_Int32_array *v216; // x7
  struct BattleLogicFunction_FunctionArgument_o *externalArg; // x8
  struct BattleData_o *v218; // x8
  System_Int32_array **AddIndividualty; // x0
  System_String_array **v220; // x2
  System_String_array **v221; // x3
  System_Boolean_array **v222; // x4
  System_Int32_array **v223; // x5
  System_Int32_array *v224; // x6
  System_Int32_array *v225; // x7
  System_Int32_array **LinkageTargetIndividualty; // x0
  System_String_array **v227; // x2
  System_String_array **v228; // x3
  System_Boolean_array **v229; // x4
  System_Int32_array **v230; // x5
  System_Int32_array *v231; // x6
  System_Int32_array *v232; // x7
  const MethodInfo *v233; // x3
  struct BattleData_o *v234; // x8
  System_Int32_array **ValsList; // x0
  System_String_array **v236; // x2
  System_String_array **v237; // x3
  System_Boolean_array **v238; // x4
  System_Int32_array **v239; // x5
  System_Int32_array *v240; // x6
  System_Int32_array *v241; // x7
  int32_t v242; // w0
  int v243; // w8
  int v244; // w9
  UnityEngine_Object_o *v245; // x19
  bool v246; // w19
  int32_t v247; // w21
  int32_t v248; // w21
  CommandCodeInfo_o *UserCommandCode; // x0
  int32_t MaxHp; // w22
  int32_t v251; // w21
  bool v252; // w0
  BattleActionData_MasterBuffData_o *v253; // x19
  __int64 v254; // x4
  int32_t v255; // w19
  bool IsCommandSideEffect; // w0
  const MethodInfo *v257; // x7
  BattleActionEffect_AddChangeMaxHpBuff_o *v258; // x19
  BattleLogicFunction_o *v259; // x28
  System_String_array **v260; // x2
  System_String_array **v261; // x3
  System_Boolean_array **v262; // x4
  System_Int32_array **v263; // x5
  System_Int32_array *v264; // x6
  System_Int32_array *v265; // x7
  System_Int32_array **v266; // x0
  System_String_array **v267; // x2
  System_String_array **v268; // x3
  System_Boolean_array **v269; // x4
  System_Int32_array **v270; // x5
  System_Int32_array *v271; // x6
  System_Int32_array *v272; // x7
  int32_t id; // w19
  System_Collections_Generic_List_int__o *v274; // x0
  System_String_o *i; // x0
  System_String_o *v276; // x0
  System_String_o *v277; // x0
  System_String_o *v278; // x0
  System_Int32_array *QuestIndividualities; // x0
  UnityEngine_Object_o *v280; // x21
  System_Int32_array *v281; // x19
  BattlePerformance_o *perf; // x2
  struct BattleLogic_o *v283; // x8
  UnityEngine_Object_o *v284; // x19
  int v285; // w8
  BattleLogicFunction_o *v286; // x19
  unsigned int v287; // w21
  int32_t v288; // w19
  struct BattleData_o *v289; // x8
  BattleActionData_MasterBuffData_o *v290; // x19
  BattleBuffData_o *buffData; // x19
  BattleBuffData_CheckIndividualitiesData_o *v292; // x21
  FunctionEntity_o *v293; // x2
  DataVals_o *v294; // x3
  int32_t v295; // w4
  const MethodInfo *v296; // x5
  bool v297; // w0
  BattleActionData_BuffData_o *v298; // x19
  const MethodInfo *v299; // x3
  __int64 v301; // x0
  __int64 v302; // x0
  BattleActionData_o *userCommandCodeId; // [xsp+8h] [xbp-B8h]
  int userCommandCodeIda; // [xsp+8h] [xbp-B8h]
  int32_t funcIndex; // [xsp+14h] [xbp-ACh]
  BattleActionData_o *v306; // [xsp+18h] [xbp-A8h]
  BattleActionData_o *v307; // [xsp+20h] [xbp-A0h]
  int32_t treasureDvcId; // [xsp+2Ch] [xbp-94h]
  int32_t v309; // [xsp+30h] [xbp-90h]
  unsigned int uniqueId; // [xsp+34h] [xbp-8Ch]
  FunctionEntity_o *funcEnt; // [xsp+38h] [xbp-88h]
  BattleLogicFunctionProcess_FunctionTargetCheck_o *funcTargeta; // [xsp+48h] [xbp-78h]
  BattleActionData_MasterBuffData_o *v314; // [xsp+50h] [xbp-70h]
  WarEntity_o *entity; // [xsp+58h] [xbp-68h] BYREF
  int v316; // [xsp+68h] [xbp-58h] BYREF
  bool isSelfTurn; // [xsp+6Ch] [xbp-54h] BYREF

  v6 = shortbuff;
  v8 = mainAction;
  v9 = this;
  if ( (byte_42EAFEA & 1) == 0 )
  {
    sub_B5D5C4(&BattleActionEffect_AddChangeMaxHpBuff_TypeInfo, (_DWORD)mainAction, (_DWORD)funcTarget, args);
    sub_B5D5C4(&BattleActionData_TypeInfo, v10, v11, v12);
    sub_B5D5C4(&BattleDataDefine_TypeInfo, v13, v14, v15);
    sub_B5D5C4(&BattleBuffData_BuffData___TypeInfo, v16, v17, v18);
    sub_B5D5C4(&BattleBuffData_BuffData_TypeInfo, v19, v20, v21);
    sub_B5D5C4(&BuffList_TypeInfo, v22, v23, v24);
    sub_B5D5C4(&BattleBuffData_CheckIndividualitiesData_TypeInfo, v25, v26, v27);
    sub_B5D5C4(&Method_DataManager_GetMasterData_EventPointBuffMaster___, v28, v29, v30);
    sub_B5D5C4(&Method_DataManager_GetMasterData_UserEventPointMaster___, v31, v32, v33);
    sub_B5D5C4(&Method_DataManager_GetMaster_BuffTypeDetailMaster___, v34, v35, v36);
    sub_B5D5C4(&DataManager_TypeInfo, v37, v38, v39);
    sub_B5D5C4(&Method_DataMasterBase_BuffTypeDetailMaster__BuffTypeDetailEntity__int__TryGetEntity__, v40, v41, v42);
    sub_B5D5C4(&BattleBuffData_FieldAliveCondData_TypeInfo, v43, v44, v45);
    sub_B5D5C4(&int___TypeInfo, v46, v47, v48);
    sub_B5D5C4(&Method_System_Collections_Generic_List_int___ctor___68740224, v49, v50, v51);
    sub_B5D5C4(&System_Collections_Generic_List_int__TypeInfo, v52, v53, v54);
    sub_B5D5C4(&BattleActionData_MasterBuffData_TypeInfo, v55, v56, v57);
    sub_B5D5C4(&System_Math_TypeInfo, v58, v59, v60);
    sub_B5D5C4(&UnityEngine_Object_TypeInfo, v61, v62, v63);
    sub_B5D5C4(&BattleBuffData_RelationOverwriteData_TypeInfo, v64, v65, v66);
    sub_B5D5C4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v67, v68, v69);
    sub_B5D5C4(&StringLiteral_19169/*"functionAddState=>"*/, v70, v71, v72);
    sub_B5D5C4(&StringLiteral_13490/*"TAMAMOCAT_STUN_BUFF_ID"*/, v73, v74, v75);
    this = (BattleLogicFunction_o *)sub_B5D5C4(&StringLiteral_13491/*"TAMAMOCAT_TREASURE_DEVICE_ID_"*/, v76, v77, v78);
    byte_42EAFEA = 1;
  }
  isSelfTurn = 0;
  entity = 0LL;
  v316 = 0;
  if ( !funcTarget )
    goto LABEL_303;
  if ( !v8 )
    goto LABEL_303;
  funcUnit_k__BackingField = funcTarget->fields._funcUnit_k__BackingField;
  if ( !funcUnit_k__BackingField )
    goto LABEL_303;
  dataVals_k__BackingField = funcUnit_k__BackingField->fields._dataVals_k__BackingField;
  if ( !dataVals_k__BackingField )
    goto LABEL_303;
  actorId = v8->fields.actorId;
  uniqueId = funcTarget->fields._targetId_k__BackingField;
  funcEnt = dataVals_k__BackingField->fields.funcEnt;
  v82 = (BuffEntity_o *)((__int64 (__fastcall *)(BattleLogicFunctionProcess_FunctionTargetCheck_o *, void *, BattleLogicFunctionProcess_FunctionTargetCheck_o *, BattleLogicFunction_ProcListInArgs_o *, bool, const MethodInfo *))funcTarget->klass->vtable._13_GetFixBuffEntity.method)(
                          funcTarget,
                          funcTarget->klass[1]._1.image,
                          funcTarget,
                          args,
                          shortbuff,
                          method);
  v83 = BattleLogicFunctionProcess_FunctionUnitCheck__get_FuncIndex(funcUnit_k__BackingField, 0LL);
  userCommandCodeId = (BattleActionData_o *)v8->fields.userCommandCodeId;
  treasureDvcId = v8->fields.treasureDvcId;
  funcIndex = v83;
  v84 = (BattleActionData_o *)sub_B5D694(BattleActionData_TypeInfo);
  BattleActionData___ctor(v84, 0LL);
  this = (BattleLogicFunction_o *)v9->fields.data;
  if ( !this )
    goto LABEL_303;
  v307 = v84;
  this = (BattleLogicFunction_o *)BattleData__getServantData((BattleData_o *)this, actorId, 0LL);
  if ( !v9->fields.data )
    goto LABEL_303;
  v85 = (BattleServantData_o *)this;
  ServantData = BattleData__getServantData(v9->fields.data, uniqueId, 0LL);
  this = (BattleLogicFunction_o *)((__int64 (__fastcall *)(BattleLogicFunctionProcess_FunctionTargetCheck_o *, Il2CppMethodPointer))funcTarget->klass->vtable._7_MakeActionBuffData.method)(
                                    funcTarget,
                                    funcTarget->klass->vtable._8_AddBuff.methodPtr);
  if ( !v82 )
    goto LABEL_303;
  v87 = (BattleActionData_MasterBuffData_o *)this;
  this = (BattleLogicFunction_o *)BuffEntity__checkBuffType(v82, 142, 0LL);
  if ( ((unsigned __int8)this & 1) != 0 )
  {
    v87 = (BattleActionData_MasterBuffData_o *)sub_B5D694(BattleActionData_MasterBuffData_TypeInfo);
    BattleActionData_MasterBuffData___ctor(v87, funcEnt, 0LL);
  }
  if ( !ServantData )
    goto LABEL_303;
  v309 = actorId;
  funcTargeta = funcTarget;
  if ( !v87 )
    goto LABEL_303;
  v314 = v87;
  v87->fields.targetId = ServantData->fields.uniqueId;
  v87->fields.functionIndex = funcIndex;
  v88 = sub_B5D694(BattleBuffData_BuffData_TypeInfo);
  BattleBuffData_BuffData___ctor((BattleBuffData_BuffData_o *)v88, 0LL);
  if ( !v88 )
    goto LABEL_303;
  *(_DWORD *)(v88 + 16) = v82->fields.id;
  if ( !args )
    goto LABEL_303;
  *(_DWORD *)(v88 + 164) = BattleLogicFunction_ProcListInArgs__get_SkillId(args, 0LL);
  *(_DWORD *)(v88 + 188) = BattleLogicFunction_ProcListInArgs__get_GrantSkillType(args, 0LL);
  *(_DWORD *)(v88 + 176) = DataVals__GetMotionChange(dataVals_k__BackingField, 0LL);
  v90 = 2 * DataVals__GetParam(dataVals_k__BackingField, 1, 0, 0LL);
  *(_DWORD *)(v88 + 20) = v90;
  v91 = v8->fields.isReversalShortBuffTurn ^ v6;
  if ( (v91 & 1) != 0 )
    *(_DWORD *)(v88 + 20) = v90 - 1;
  this = (BattleLogicFunction_o *)BattleLogicFunction__IsSvtBuffTurnExtend(v9, uniqueId, v82, v91 & 1, v89);
  if ( ((unsigned __int8)this & 1) != 0 )
  {
    v91 ^= 1u;
    v92 = 1;
    ++*(_DWORD *)(v88 + 20);
  }
  else
  {
    v92 = 0;
  }
  *(_DWORD *)(v88 + 68) = v309;
  if ( !funcEnt )
    goto LABEL_303;
  v93 = (v91 ^ Target__isEnemy(funcEnt->fields.targetType, 0LL)) & 1;
  isSelfTurn = v93;
  type = v82->fields.type;
  if ( (BYTE3(BuffList_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !BuffList_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(BuffList_TypeInfo);
  this = (BattleLogicFunction_o *)BuffList__IsForceProgressSelfTurnType(type, 0LL);
  if ( ((unsigned __int8)this & 1) != 0 )
  {
    v93 = 1;
    isSelfTurn = 1;
  }
  if ( (v92 & 1) == 0 )
  {
    BattleLogicFunction__UpdateBuffProgressTurn(v9, v82->fields.type, &isSelfTurn, v95);
    v93 = isSelfTurn;
  }
  v96 = !v93;
  v97 = args;
  v98 = v96;
  v99 = v98 ^ ServantData->fields.isEnemy;
  *(_BYTE *)(v88 + 180) = v99;
  if ( (v92 & 1) == 0 )
  {
    this = (BattleLogicFunction_o *)BuffEntity__GetProgressSelfTurn(v82, 0LL);
    if ( ((unsigned int)this & 0x80000000) != 0 )
    {
      v99 = *(unsigned __int8 *)(v88 + 180);
    }
    else
    {
      v99 = ((_DWORD)this == 0) ^ ServantData->fields.isEnemy;
      *(_BYTE *)(v88 + 180) = v99;
    }
  }
  *(_BYTE *)(v88 + 192) = (v99 == 0) ^ ServantData->fields.isEnemy;
  data = v9->fields.data;
  if ( !data )
    goto LABEL_303;
  this = (BattleLogicFunction_o *)data->fields.battleEvent;
  if ( !this )
    goto LABEL_303;
  *(_DWORD *)(v88 + 184) = ((__int64 (__fastcall *)(BattleLogicFunction_o *, BuffEntity_o *, Il2CppMethodPointer))this->klass[1].vtable._1_Finalize.method)(
                             this,
                             v82,
                             this->klass[1].vtable._2_GetHashCode.methodPtr);
  ProgressTurnCond = BuffEntity__GetProgressTurnCond(v82, 0LL);
  if ( (ProgressTurnCond & 0x80000000) == 0 )
    *(_DWORD *)(v88 + 184) = ProgressTurnCond;
  *(_DWORD *)(v88 + 24) = DataVals__GetParam(dataVals_k__BackingField, 2, 0, 0LL);
  *(_DWORD *)(v88 + 28) = DataVals__GetParam(dataVals_k__BackingField, 3, 0, 0LL);
  v314->fields.popDelay = DataVals__GetParam(dataVals_k__BackingField, 64, 0, 0LL);
  v102 = v82->fields.type;
  if ( (BYTE3(BuffList_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !BuffList_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(BuffList_TypeInfo);
  if ( BuffList__CheckType(143, v102, 0LL) )
    goto LABEL_56;
  v103 = v82->fields.type;
  if ( (BYTE3(BuffList_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !BuffList_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(BuffList_TypeInfo);
  if ( BuffList__CheckType(145, v103, 0LL) )
    goto LABEL_56;
  v104 = v82->fields.type;
  if ( (BYTE3(BuffList_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !BuffList_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(BuffList_TypeInfo);
  if ( BuffList__CheckType(146, v104, 0LL) )
    goto LABEL_56;
  v105 = v82->fields.type;
  if ( (BYTE3(BuffList_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !BuffList_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(BuffList_TypeInfo);
  if ( BuffList__CheckType(147, v105, 0LL) )
  {
LABEL_56:
    tdCommandTypeChange = args->fields.tdCommandTypeChange;
    if ( (tdCommandTypeChange & 0x80000000) == 0 )
      *(_DWORD *)(v88 + 28) = tdCommandTypeChange;
  }
  *(_DWORD *)(v88 + 52) = DataVals__GetParam(dataVals_k__BackingField, 8, 0, 0LL);
  *(_DWORD *)(v88 + 56) = DataVals__GetParam(dataVals_k__BackingField, 9, 0, 0LL);
  v107 = (System_Int32_array **)sub_B5D5DC(int___TypeInfo, 2LL);
  *(_QWORD *)(v88 + 40) = v107;
  sub_B5D560((BattleServantConfConponent_o *)(v88 + 40), v107, v108, v109, v110, v111, v112, v113);
  v114 = *(_QWORD *)(v88 + 40);
  this = (BattleLogicFunction_o *)DataVals__GetParam(dataVals_k__BackingField, 3, 0, 0LL);
  if ( !v114 )
    goto LABEL_303;
  if ( !*(_DWORD *)(v114 + 24) )
    goto LABEL_304;
  *(_DWORD *)(v114 + 32) = (_DWORD)this;
  v115 = *(_QWORD *)(v88 + 40);
  this = (BattleLogicFunction_o *)DataVals__GetParam(dataVals_k__BackingField, 4, 0, 0LL);
  if ( !v115 )
    goto LABEL_303;
  if ( *(_DWORD *)(v115 + 24) <= 1u )
    goto LABEL_304;
  v306 = v8;
  *(_DWORD *)(v115 + 36) = (_DWORD)this;
  v116 = v82->fields.type;
  if ( (BYTE3(BuffList_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !BuffList_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(BuffList_TypeInfo);
  this = (BattleLogicFunction_o *)BuffList__CheckType(135, v116, 0LL);
  if ( ((unsigned __int8)this & 1) != 0 )
  {
    v117 = v9->fields.data;
    if ( !v117 )
      goto LABEL_303;
    battle_ent = v117->fields.battle_ent;
    if ( !battle_ent )
      goto LABEL_303;
    userId = battle_ent->fields.userId;
    eventId = battle_ent->fields.eventId;
    this = (BattleLogicFunction_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !this )
      goto LABEL_303;
    this = (BattleLogicFunction_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                      (DataManager_o *)this,
                                      (const MethodInfo_1AE424C *)Method_DataManager_GetMasterData_EventPointBuffMaster___);
    if ( !this )
      goto LABEL_303;
    v121 = (EventPointBuffMaster_o *)this;
    EventPointGroupId = EventPointBuffMaster__GetEventPointGroupId(
                          (EventPointBuffMaster_o *)this,
                          eventId,
                          funcEnt->fields.id,
                          0,
                          0LL);
    this = (BattleLogicFunction_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !this )
      goto LABEL_303;
    this = (BattleLogicFunction_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                      (DataManager_o *)this,
                                      (const MethodInfo_1AE424C *)Method_DataManager_GetMasterData_UserEventPointMaster___);
    if ( !this )
      goto LABEL_303;
    EntityDefinitely = UserEventPointMaster__GetEntityDefinitely(
                         (UserEventPointMaster_o *)this,
                         userId,
                         eventId,
                         EventPointGroupId,
                         0LL);
    v97 = args;
    if ( EntityDefinitely )
    {
      value = EntityDefinitely->fields.value;
      this = (BattleLogicFunction_o *)EventPointBuffMaster__GetAllEventBuff(
                                        v121,
                                        EntityDefinitely->fields.eventId,
                                        EventPointGroupId,
                                        0LL);
      if ( !this )
        goto LABEL_303;
      logic = (int)this->fields.logic;
      if ( logic >= 1 )
      {
        v126 = 0;
        v127 = 0LL;
        do
        {
          if ( v126 >= (unsigned int)logic )
            goto LABEL_304;
          v128 = *((_QWORD *)&this->fields.logictarget + v126);
          if ( !v128 )
            goto LABEL_303;
          if ( value < *(int *)(v128 + 28) )
            break;
          ++v126;
          v127 = v128;
        }
        while ( v126 < logic );
        if ( v127 )
          *(_DWORD *)(v88 + 28) += *(_DWORD *)(v127 + 64);
      }
    }
  }
  if ( DataVals__isParam(dataVals_k__BackingField, 26, 0LL) && DataVals__isParam(dataVals_k__BackingField, 27, 0LL) )
  {
    v129 = (System_Int32_array **)sub_B5D5DC(int___TypeInfo, 2LL);
    *(_QWORD *)(v88 + 104) = v129;
    sub_B5D560((BattleServantConfConponent_o *)(v88 + 104), v129, v130, v131, v132, v133, v134, v135);
    v136 = *(_QWORD *)(v88 + 104);
    this = (BattleLogicFunction_o *)DataVals__GetParam(dataVals_k__BackingField, 26, 0, 0LL);
    if ( !v136 )
      goto LABEL_303;
    if ( !*(_DWORD *)(v136 + 24) )
      goto LABEL_304;
    *(_DWORD *)(v136 + 32) = (_DWORD)this;
    v137 = *(_QWORD *)(v88 + 104);
    this = (BattleLogicFunction_o *)DataVals__GetParam(dataVals_k__BackingField, 27, 0, 0LL);
    if ( !v137 )
      goto LABEL_303;
    if ( *(_DWORD *)(v137 + 24) <= 1u )
      goto LABEL_304;
    *(_DWORD *)(v137 + 36) = (_DWORD)this;
  }
  *(_DWORD *)(v88 + 64) = DataVals__GetParam(dataVals_k__BackingField, 15, 0, 0LL);
  *(_DWORD *)(v88 + 344) = DataVals__GetClassIconAuraEffectId(dataVals_k__BackingField, 0LL);
  if ( DataVals__GetParam(dataVals_k__BackingField, 11, 0, 0LL) >= 1 )
    *(_DWORD *)(v88 + 60) = v309;
  if ( DataVals__GetParam(dataVals_k__BackingField, 46, 0, 0LL) >= 1 )
    BattleBuffData_BuffData__onState((BattleBuffData_BuffData_o *)v88, 0x8000, 0LL);
  v138 = v306;
  if ( DataVals__GetParam(dataVals_k__BackingField, 50, 0, 0LL) >= 1 )
    BattleBuffData_BuffData__onState((BattleBuffData_BuffData_o *)v88, 0x10000, 0LL);
  if ( DataVals__GetParam(dataVals_k__BackingField, 88, 0, 0LL) >= 1 )
    BattleBuffData_BuffData__onState((BattleBuffData_BuffData_o *)v88, 0x80000, 0LL);
  if ( DataVals__GetParam(dataVals_k__BackingField, 90, 0, 0LL) >= 1 )
    BattleBuffData_BuffData__onState((BattleBuffData_BuffData_o *)v88, 0x100000, 0LL);
  if ( DataVals__GetParam(dataVals_k__BackingField, 65, 0, 0LL) >= 1 )
    BattleBuffData_BuffData__onState((BattleBuffData_BuffData_o *)v88, 0x40000, 0LL);
  if ( DataVals__GetParam(dataVals_k__BackingField, 144, 0, 0LL) >= 1 )
    BattleBuffData_BuffData__onState((BattleBuffData_BuffData_o *)v88, 0x2000000, 0LL);
  if ( DataVals__isParam(dataVals_k__BackingField, 42, 0LL) )
  {
    Param = DataVals__GetParam(dataVals_k__BackingField, 42, 0, 0LL);
    v140 = sub_B5D694(BattleBuffData_FieldAliveCondData_TypeInfo);
    BattleBuffData_FieldAliveCondData___ctor((BattleBuffData_FieldAliveCondData_o *)v140, 0LL);
    if ( !v140 )
      goto LABEL_303;
    isEnemy = ServantData->fields.isEnemy;
    *(_BYTE *)(v140 + 17) = Param > 0;
    *(_BYTE *)(v140 + 16) = isEnemy;
    if ( (BYTE3(System_Math_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !System_Math_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(System_Math_TypeInfo);
    if ( Param >= 0 )
      v142 = Param;
    else
      v142 = -Param;
    *(_DWORD *)(v140 + 20) = v142;
    TargetIndiv = (System_Int32_array **)BuffEntity__GetTargetIndiv(v82, 0LL);
    *(_QWORD *)(v140 + 24) = TargetIndiv;
    sub_B5D560((BattleServantConfConponent_o *)(v140 + 24), TargetIndiv, v144, v145, v146, v147, v148, v149);
    *(_BYTE *)(v140 + 32) = BuffEntity__IsIncludeIgnoreIndividuality(v82, 0LL);
    *(_QWORD *)(v88 + 152) = v140;
    sub_B5D560(
      (BattleServantConfConponent_o *)(v88 + 152),
      (System_Int32_array **)v140,
      v150,
      v151,
      v152,
      v153,
      v154,
      v155);
    v97->fields.updateField = 1;
  }
  v156 = v82->fields.type;
  if ( (BYTE3(BuffList_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !BuffList_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(BuffList_TypeInfo);
  if ( BuffList__IsIntervalPossibleBuff(v156, 0LL) )
  {
    IntervalData = (System_Int32_array **)DataVals__GetIntervalData(dataVals_k__BackingField, 0LL);
    *(_QWORD *)(v88 + 360) = IntervalData;
    sub_B5D560((BattleServantConfConponent_o *)(v88 + 360), IntervalData, v158, v159, v160, v161, v162, v163);
  }
  if ( BattleBuffData__CheckInvalidSacrificeIndiv((BattleBuffData_BuffData_o *)v88, 0LL) )
    v97->fields.updateField = 1;
  ParamArray = (System_Int32_array **)DataVals__GetParamArray(dataVals_k__BackingField, 115, 0LL);
  *(_QWORD *)(v88 + 328) = ParamArray;
  sub_B5D560((BattleServantConfConponent_o *)(v88 + 328), ParamArray, v165, v166, v167, v168, v169, v170);
  *(_DWORD *)(v88 + 208) = BuffEntity__GetCardEffectId(v82, 0LL);
  v171 = v82->fields.type;
  if ( (BYTE3(BuffList_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !BuffList_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(BuffList_TypeInfo);
  if ( BuffList__CheckType(144, v171, 0LL) )
  {
    RelationId = BuffEntity__getRelationId(v82, 0LL);
    v173 = (BattleBuffData_RelationOverwriteData_o *)sub_B5D694(BattleBuffData_RelationOverwriteData_TypeInfo);
    BattleBuffData_RelationOverwriteData___ctor(v173, 0LL);
    if ( RelationId >= 1 )
    {
      this = (BattleLogicFunction_o *)BuffEntity__getRelationId(v82, 0LL);
      if ( !v173 )
        goto LABEL_303;
      v173->fields.id = (int)this;
      v180 = BattleDataDefine_TypeInfo;
      if ( (BYTE3(BattleDataDefine_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !BattleDataDefine_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(BattleDataDefine_TypeInfo);
        v180 = BattleDataDefine_TypeInfo;
      }
      v173->fields.atkPriority = BuffEntity__getAtkRelationPriority(
                                   v82,
                                   v180->static_fields->OVERWRITE_ATK_RATE_PRIORITY,
                                   0LL);
      v173->fields.defPriority = BuffEntity__getDefRelationPriority(
                                   v82,
                                   BattleDataDefine_TypeInfo->static_fields->OVERWRITE_DEF_RATE_PRIORITY,
                                   0LL);
    }
    *(_QWORD *)(v88 + 168) = v173;
    sub_B5D560(
      (BattleServantConfConponent_o *)(v88 + 168),
      (System_Int32_array **)v173,
      v174,
      v175,
      v176,
      v177,
      v178,
      v179);
  }
  v181 = v82->fields.type;
  if ( (BYTE3(BuffList_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !BuffList_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(BuffList_TypeInfo);
  if ( BuffList__CheckType(154, v181, 0LL) )
  {
    this = (BattleLogicFunction_o *)BattleServantData__get_BuffData(ServantData, 0LL);
    if ( !this )
      goto LABEL_303;
    this = (BattleLogicFunction_o *)this->fields.wkStr;
    if ( !this )
      goto LABEL_303;
    BattleBuffData_SkillRankChangeData__UpdateAddRightAfter((BattleBuffData_SkillRankChangeData_o *)this, 1, 0LL);
    BattleActionData_BuffData__OnUpdateBuffType((BattleActionData_BuffData_o *)v314, 1, 0LL);
  }
  v182 = BuffEntity__checkBuffType(v82, 7, 0LL);
  if ( v85 && v182 )
  {
    UpDownGiveHeal = BattleServantData__getUpDownGiveHeal(v85, ServantData, 0LL);
    v184 = BattleUtility__FloorToInt(UpDownGiveHeal * (float)*(int *)(v88 + 28), 0LL);
    v185 = *(_DWORD *)(v88 + 52);
    *(_DWORD *)(v88 + 28) = v184;
    v186 = BattleUtility__FloorToInt(UpDownGiveHeal * (float)v185, 0LL);
    v187 = *(_DWORD *)(v88 + 56);
    *(_DWORD *)(v88 + 52) = v186;
    *(_DWORD *)(v88 + 56) = BattleUtility__FloorToInt(UpDownGiveHeal * (float)v187, 0LL);
    BattleServantData__getIndividualities(v85, 0LL, 0LL);
  }
  *(_BYTE *)(v88 + 32) = 0;
  *(_BYTE *)(v88 + 33) = BattleLogicFunction_ProcListInArgs__get_IsPassive(v97, 0LL);
  if ( DataVals__isParam(dataVals_k__BackingField, 23, 0LL) )
    *(_BYTE *)(v88 + 33) = 1;
  if ( DataVals__isParam(dataVals_k__BackingField, 24, 0LL) )
    *(_BYTE *)(v88 + 33) = 0;
  if ( dataVals_k__BackingField->fields.flgBoost )
    BattleBuffData_BuffData__onState((BattleBuffData_BuffData_o *)v88, 2, 0LL);
  if ( DataVals__isRatioHpRange(dataVals_k__BackingField, 0LL) )
  {
    *(_DWORD *)(v88 + 72) = DataVals__GetParam(dataVals_k__BackingField, 20, 0, 0LL);
    *(_DWORD *)(v88 + 76) = DataVals__GetParam(dataVals_k__BackingField, 21, 0, 0LL);
    *(_DWORD *)(v88 + 80) = DataVals__GetParam(dataVals_k__BackingField, 30, 0, 0LL);
    *(_DWORD *)(v88 + 84) = DataVals__GetParam(dataVals_k__BackingField, 31, 0, 0LL);
  }
  else if ( DataVals__isParam(dataVals_k__BackingField, 20, 0LL) )
  {
    *(_DWORD *)(v88 + 72) = DataVals__GetParam(dataVals_k__BackingField, 20, 0, 0LL);
  }
  else if ( DataVals__isParam(dataVals_k__BackingField, 21, 0LL) )
  {
    *(_DWORD *)(v88 + 76) = DataVals__GetParam(dataVals_k__BackingField, 21, 0, 0LL);
  }
  if ( DataVals__isParamAddIndividuality(dataVals_k__BackingField, 0LL) )
  {
    v188 = (System_Int32_array **)DataVals__GetParamArray(dataVals_k__BackingField, 69, 0LL);
    *(_QWORD *)(v88 + 224) = v188;
    sub_B5D560((BattleServantConfConponent_o *)(v88 + 224), v188, v189, v190, v191, v192, v193, v194);
    v195 = (System_Int32_array **)DataVals__GetParamArray(dataVals_k__BackingField, 70, 0LL);
    *(_QWORD *)(v88 + 232) = v195;
    sub_B5D560((BattleServantConfConponent_o *)(v88 + 232), v195, v196, v197, v198, v199, v200, v201);
    v202 = (System_Int32_array **)DataVals__GetParamArray(dataVals_k__BackingField, 71, 0LL);
    *(_QWORD *)(v88 + 240) = v202;
    sub_B5D560((BattleServantConfConponent_o *)(v88 + 240), v202, v203, v204, v205, v206, v207, v208);
    *(_DWORD *)(v88 + 248) = DataVals__GetParam(dataVals_k__BackingField, 72, 0, 0LL);
    *(_DWORD *)(v88 + 252) = DataVals__GetParam(dataVals_k__BackingField, 59, 0, 0LL);
    *(_DWORD *)(v88 + 268) = DataVals__GetParam(dataVals_k__BackingField, 60, 0, 0LL);
  }
  v209 = v82->fields.type;
  if ( (BYTE3(BuffList_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !BuffList_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(BuffList_TypeInfo);
  if ( BuffList__CheckType(162, v209, 0LL) )
  {
    UpBuffRateBuffTypeList = (System_Int32_array **)BuffEntity__GetUpBuffRateBuffTypeList(v82, 0LL);
    *(_QWORD *)(v88 + 256) = UpBuffRateBuffTypeList;
    sub_B5D560((BattleServantConfConponent_o *)(v88 + 256), UpBuffRateBuffTypeList, v211, v212, v213, v214, v215, v216);
    *(_DWORD *)(v88 + 264) = BuffEntity__GetMaxBuffRate(v82, 0LL);
  }
  if ( DataVals__isParam(dataVals_k__BackingField, 22, 0LL) )
    BattleBuffData_BuffData__onState((BattleBuffData_BuffData_o *)v88, 64, 0LL);
  if ( DataVals__isParam(dataVals_k__BackingField, 25, 0LL) )
    BattleBuffData_BuffData__onState((BattleBuffData_BuffData_o *)v88, 128, 0LL);
  this = (BattleLogicFunction_o *)DataVals__isShowState(dataVals_k__BackingField, 0LL);
  if ( ((unsigned __int8)this & 1) != 0 )
  {
    LODWORD(mainAction) = DataVals__GetParam(dataVals_k__BackingField, 14, 0, 0LL);
LABEL_165:
    BattleBuffData_BuffData__setShowState((BattleBuffData_BuffData_o *)v88, (int32_t)mainAction, 0LL);
    goto LABEL_183;
  }
  if ( *(_BYTE *)(v88 + 33) )
  {
    externalArg = v97->fields.externalArg;
    if ( !externalArg )
      goto LABEL_303;
    if ( externalArg->fields.isWarBoard )
    {
      if ( !v85 )
        goto LABEL_303;
      if ( v85->fields.isEnemy && externalArg->fields.grantSkillType == 12 )
      {
        LODWORD(mainAction) = BuffEntity__GetShowStateWarBoardEnemyEquip(v82, 0, 0LL);
        if ( (_DWORD)mainAction )
          goto LABEL_165;
        if ( (BYTE3(DataManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !DataManager_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
        }
        this = (BattleLogicFunction_o *)DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_1AE41EC *)Method_DataManager_GetMaster_BuffTypeDetailMaster___);
        if ( !this )
          goto LABEL_303;
        this = (BattleLogicFunction_o *)DataMasterBase_WarMaster__WarEntity__int___TryGetEntity(
                                          (DataMasterBase_WarMaster__WarEntity__int__o *)this,
                                          &entity,
                                          v82->fields.type,
                                          (const MethodInfo_23FAE6C *)Method_DataMasterBase_BuffTypeDetailMaster__BuffTypeDetailEntity__int__TryGetEntity__);
        if ( ((unsigned __int8)this & 1) != 0 )
        {
          this = (BattleLogicFunction_o *)entity;
          if ( !entity )
            goto LABEL_303;
          this = (BattleLogicFunction_o *)BuffTypeDetailEntity__GetShowStateWarBoardEnemyEquip(
                                            (BuffTypeDetailEntity_o *)entity,
                                            0,
                                            0LL);
          mainAction = (BattleActionData_o *)(unsigned int)this;
          if ( (_DWORD)this )
            goto LABEL_165;
        }
      }
    }
    v218 = v9->fields.data;
    if ( !v218 )
      goto LABEL_303;
    this = (BattleLogicFunction_o *)v218->fields.battleEvent;
    if ( !this )
      goto LABEL_303;
    ((void (__fastcall *)(BattleLogicFunction_o *, __int64, Il2CppMethodPointer))this->klass[1].vtable._2_GetHashCode.method)(
      this,
      v88,
      this->klass[1].vtable._3_ToString.methodPtr);
  }
LABEL_183:
  if ( DataVals__IsOpponentOnly(dataVals_k__BackingField, 0LL) )
    BattleBuffData_BuffData__onState((BattleBuffData_BuffData_o *)v88, 2048, 0LL);
  if ( DataVals__isShowCommand(dataVals_k__BackingField, 0LL) )
    BattleBuffData_BuffData__onState((BattleBuffData_BuffData_o *)v88, 512, 0LL);
  if ( DataVals__IsAddIndividualty(dataVals_k__BackingField, 0LL) )
  {
    AddIndividualty = (System_Int32_array **)DataVals__GetAddIndividualty(dataVals_k__BackingField, 0LL);
    *(_QWORD *)(v88 + 120) = AddIndividualty;
    sub_B5D560((BattleServantConfConponent_o *)(v88 + 120), AddIndividualty, v220, v221, v222, v223, v224, v225);
  }
  if ( DataVals__IsAddLinkageTargetIndividualty(dataVals_k__BackingField, 0LL) )
  {
    LinkageTargetIndividualty = (System_Int32_array **)DataVals__GetLinkageTargetIndividualty(
                                                         dataVals_k__BackingField,
                                                         0LL);
    *(_QWORD *)(v88 + 128) = LinkageTargetIndividualty;
    sub_B5D560(
      (BattleServantConfConponent_o *)(v88 + 128),
      LinkageTargetIndividualty,
      v227,
      v228,
      v229,
      v230,
      v231,
      v232);
  }
  this = (BattleLogicFunction_o *)funcTargeta->fields._funcUnit_k__BackingField;
  if ( !this )
    goto LABEL_303;
  if ( BattleLogicFunctionProcess_FunctionUnitCheck__HasLinkedFuncUnit(
         (BattleLogicFunctionProcess_FunctionUnitCheck_o *)this,
         0LL)
    && DataVals__IsBehaveAsFamilyBuff(dataVals_k__BackingField, 0LL) )
  {
    BattleLogicFunction__BehaveLinkageBuffAsFamily(v9, (BattleBuffData_BuffData_o *)v88, funcTargeta, v233);
  }
  if ( DataVals__isParam(dataVals_k__BackingField, 98, 0LL) )
    BattleBuffData_BuffData__onState((BattleBuffData_BuffData_o *)v88, 0x800000, 0LL);
  if ( DataVals__isParam(dataVals_k__BackingField, 99, 0LL) )
    BattleBuffData_BuffData__onState((BattleBuffData_BuffData_o *)v88, 0x1000000, 0LL);
  if ( BuffEntity__getAppearanceId(v82, 0LL) >= 1 )
  {
    this = (BattleLogicFunction_o *)BattleServantData__isShiftableServant(ServantData, 0LL);
    if ( ((unsigned __int8)this & 1) != 0 )
      goto LABEL_206;
    v234 = v9->fields.data;
    if ( !v234 )
      goto LABEL_303;
    this = (BattleLogicFunction_o *)v234->fields.battleEvent;
    if ( !this )
      goto LABEL_303;
    if ( ((*(__int64 (__fastcall **)(BattleLogicFunction_o *, BattleServantData_o *, _QWORD))&this->klass[1]._2.element_size)(
            this,
            ServantData,
            *(_QWORD *)&this->klass[1]._2.static_fields_size) & 1) != 0
      || BattleServantData__isLogicResultAlive(ServantData, 0LL)
      || BattleServantData__isGuts(ServantData, 0LL) )
    {
LABEL_206:
      BattleBuffData_BuffData__onState((BattleBuffData_BuffData_o *)v88, 256, 0LL);
    }
  }
  *(_DWORD *)(v88 + 276) = DataVals__GetParam(dataVals_k__BackingField, 92, 0, 0LL);
  *(_DWORD *)(v88 + 280) = DataVals__GetParam(dataVals_k__BackingField, 93, 0, 0LL);
  *(_DWORD *)(v88 + 284) = DataVals__GetParam(dataVals_k__BackingField, 94, 0, 0LL);
  *(_BYTE *)(v88 + 288) = DataVals__GetParam(dataVals_k__BackingField, 95, 0, 0LL) == 1;
  *(_BYTE *)(v88 + 289) = DataVals__GetParam(dataVals_k__BackingField, 96, 0, 0LL) == 1;
  ValsList = (System_Int32_array **)DataVals__GetValsList(dataVals_k__BackingField, 101, 0LL);
  *(_QWORD *)(v88 + 304) = ValsList;
  sub_B5D560((BattleServantConfConponent_o *)(v88 + 304), ValsList, v236, v237, v238, v239, v240, v241);
  v242 = DataVals__GetParam(dataVals_k__BackingField, 5, 0, 0LL);
  v243 = *(_DWORD *)(v88 + 60);
  if ( v242 )
    v244 = v242;
  else
    v244 = 1000;
  *(_DWORD *)(v88 + 48) = v244;
  if ( v243 < 1 )
    goto LABEL_217;
  v245 = (UnityEngine_Object_o *)v9->fields.logic;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( UnityEngine_Object__op_Inequality(v245, 0LL, 0LL) )
  {
    this = (BattleLogicFunction_o *)v9->fields.logic;
    if ( !this )
      goto LABEL_303;
    v246 = BattleLogic__checkInField((BattleLogic_o *)this, *(_DWORD *)(v88 + 60), 0LL);
  }
  else
  {
LABEL_217:
    v246 = 1;
  }
  v247 = v82->fields.type;
  if ( (BYTE3(BuffList_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !BuffList_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(BuffList_TypeInfo);
  if ( BuffList__CheckAccumulation(v247, 0LL) )
    BattleServantData__resetAccumulationDamage(ServantData, 0LL);
  mainAction = userCommandCodeId;
  v248 = treasureDvcId;
  *(_QWORD *)(v88 + 88) = userCommandCodeId;
  if ( (__int64)userCommandCodeId >= 1 )
  {
    this = (BattleLogicFunction_o *)v9->fields.data;
    if ( !this )
      goto LABEL_303;
    UserCommandCode = BattleData__getUserCommandCode((BattleData_o *)this, (int64_t)userCommandCodeId, 0LL);
    if ( UserCommandCode )
      *(_DWORD *)(v88 + 160) = UserCommandCode->fields.commandCodeId;
  }
  *(_DWORD *)(v88 + 348) = v306->fields.commandAssistId;
  *(_DWORD *)(v88 + 352) = v306->fields.cardIndex;
  ((void (__fastcall *)(BattleLogicFunctionProcess_FunctionTargetCheck_o *, __int64, Il2CppMethodPointer))funcTargeta->klass->vtable._6_ApplyPrevSaveBuffData.method)(
    funcTargeta,
    v88,
    funcTargeta->klass->vtable._7_MakeActionBuffData.methodPtr);
  MaxHp = BattleServantData__getMaxHp(ServantData, 0LL);
  userCommandCodeIda = ((__int64 (__fastcall *)(BattleServantData_o *, Il2CppMethodPointer))ServantData->klass->vtable._9_get_hp.method)(
                         ServantData,
                         ServantData->klass->vtable._10_set_hp.methodPtr);
  if ( !v246 )
    goto LABEL_234;
  v251 = v82->fields.type;
  if ( (BYTE3(BuffList_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !BuffList_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(BuffList_TypeInfo);
  v252 = BuffList__CheckUpdateHp(v251, 0LL);
  v248 = treasureDvcId;
  if ( v252 )
  {
    v253 = v314;
    v314->fields.procType = 2;
    if ( BattleServantData__isLogicResultAlive(ServantData, 0LL) )
    {
      v254 = 1LL;
    }
    else
    {
      if ( BattleServantData__isGuts(ServantData, 0LL) )
      {
        v255 = ServantData->fields.uniqueId;
        IsCommandSideEffect = BattleLogicFunction_ProcListInArgs__get_IsCommandSideEffect(args, 0LL);
        mainAction = BattleLogicFunction__getNoEffectObject(
                       v9,
                       v255,
                       funcIndex,
                       dataVals_k__BackingField,
                       IsCommandSideEffect,
                       0LL,
                       0LL,
                       v257);
        this = (BattleLogicFunction_o *)v307;
        if ( !v307 )
          goto LABEL_303;
        BattleActionData__addAction(v307, mainAction, 0LL);
        v253 = v314;
      }
      v254 = 0LL;
    }
    ((void (__fastcall *)(BattleLogicFunctionProcess_FunctionTargetCheck_o *, BattleActionData_MasterBuffData_o *, __int64, __int64, __int64, Il2CppMethodPointer))funcTargeta->klass->vtable._8_AddBuff.method)(
      funcTargeta,
      v253,
      v88,
      1LL,
      v254,
      funcTargeta->klass->vtable._9_MakeWrapTarget.methodPtr);
    this = (BattleLogicFunction_o *)v307;
    if ( !v307 )
      goto LABEL_303;
    BattleActionData__addReflectLogicResultServantId(v307, uniqueId, 0LL);
    v258 = (BattleActionEffect_AddChangeMaxHpBuff_o *)sub_B5D694(BattleActionEffect_AddChangeMaxHpBuff_TypeInfo);
    BattleActionEffect_AddChangeMaxHpBuff___ctor(v258, 0LL);
    this = (BattleLogicFunction_o *)sub_B5D5DC(BattleBuffData_BuffData___TypeInfo, 1LL);
    if ( !this )
      goto LABEL_303;
    v259 = this;
    this = (BattleLogicFunction_o *)sub_B5D684(v88, this->klass->_1.element_class);
    if ( !this )
    {
      v302 = sub_B5D6BC(0LL);
      sub_B5D668(v302, 0LL);
    }
    if ( !LODWORD(v259->fields.logic) )
      goto LABEL_304;
    v259->fields.logictarget = (struct BattleLogicTarget_o *)v88;
    sub_B5D560(
      (BattleServantConfConponent_o *)&v259->fields.logictarget,
      (System_Int32_array **)v88,
      v260,
      v261,
      v262,
      v263,
      v264,
      v265);
    this = (BattleLogicFunction_o *)BattleServantData__getNowHp(ServantData, 0LL);
    if ( !v258 )
      goto LABEL_303;
    v266 = (System_Int32_array **)((__int64 (__fastcall *)(BattleActionEffect_AddChangeMaxHpBuff_o *, BattleLogicFunction_o *, _QWORD, _QWORD, Il2CppMethodPointer))v258->klass->vtable._7_InitBuff.method)(
                                    v258,
                                    v259,
                                    uniqueId,
                                    (unsigned int)((_DWORD)this - userCommandCodeIda),
                                    v258->klass->vtable._8_PartialPreActionProc.methodPtr);
    v314->fields.EffectProc = (struct BattleActionEffect_Base_o *)v266;
    sub_B5D560((BattleServantConfConponent_o *)&v314->fields.EffectProc, v266, v267, v268, v269, v270, v271, v272);
    v138 = v306;
  }
  else
  {
LABEL_234:
    ((void (__fastcall *)(BattleLogicFunctionProcess_FunctionTargetCheck_o *, BattleActionData_MasterBuffData_o *, __int64, bool, _QWORD, Il2CppMethodPointer))funcTargeta->klass->vtable._8_AddBuff.method)(
      funcTargeta,
      v314,
      v88,
      v246,
      0LL,
      funcTargeta->klass->vtable._9_MakeWrapTarget.methodPtr);
  }
  id = v82->fields.id;
  if ( id == ConstantMaster__getValue((System_String_o *)StringLiteral_13490/*"TAMAMOCAT_STUN_BUFF_ID"*/, 0LL) )
  {
    v274 = (System_Collections_Generic_List_int__o *)sub_B5D694(System_Collections_Generic_List_int__TypeInfo);
    System_Collections_Generic_List_int____ctor(
      v274,
      (const MethodInfo_30836B0 *)Method_System_Collections_Generic_List_int___ctor___68740224);
    v316 = 1;
    for ( i = System_Int32__ToString((int32_t)&v316, 0LL); ; i = System_Int32__ToString((int32_t)&v316, 0LL) )
    {
      v278 = System_String__Concat_44577788((System_String_o *)StringLiteral_13491/*"TAMAMOCAT_TREASURE_DEVICE_ID_"*/, i, 0LL);
      if ( ConstantMaster__getValue(v278, 0LL) == -1 )
        break;
      v276 = System_Int32__ToString((int32_t)&v316, 0LL);
      v277 = System_String__Concat_44577788((System_String_o *)StringLiteral_13491/*"TAMAMOCAT_TREASURE_DEVICE_ID_"*/, v276, 0LL);
      this = (BattleLogicFunction_o *)ConstantMaster__getValue(v277, 0LL);
      if ( (_DWORD)this == v248 )
      {
        if ( !v85 )
          goto LABEL_303;
        BattleServantData__SetIsSleepWaitMode(v85, 1, 0LL);
      }
      ++v316;
    }
  }
  this = (BattleLogicFunction_o *)v9->fields.data;
  if ( !this )
    goto LABEL_303;
  QuestIndividualities = BattleData__getQuestIndividualities((BattleData_o *)this, 0LL);
  v280 = (UnityEngine_Object_o *)v9->fields.logic;
  v281 = QuestIndividualities;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  this = (BattleLogicFunction_o *)UnityEngine_Object__op_Inequality(v280, 0LL, 0LL);
  perf = 0LL;
  if ( ((unsigned __int8)this & 1) != 0 )
  {
    v283 = v9->fields.logic;
    if ( !v283 )
      goto LABEL_303;
    perf = v283->fields.perf;
  }
  BattleServantData__updateConditionsBuff(ServantData, v281, perf, 0LL);
  if ( BuffEntity__checkBuffType(v82, 133, 0LL) || *(_QWORD *)(v88 + 312) )
  {
    v284 = (UnityEngine_Object_o *)v9->fields.logic;
    if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    }
    if ( UnityEngine_Object__op_Inequality(v284, 0LL, 0LL) )
    {
      this = (BattleLogicFunction_o *)v9->fields.logic;
      if ( !this )
        goto LABEL_303;
      BattleLogic__updateConditionsBuffAll((BattleLogic_o *)this, 0LL);
    }
    this = (BattleLogicFunction_o *)v9->fields.data;
    if ( !this )
      goto LABEL_303;
    this = (BattleLogicFunction_o *)BattleData__getFieldServantList((BattleData_o *)this, 0, 0LL);
    if ( !this )
      goto LABEL_303;
    v285 = (int)this->fields.logic;
    v286 = this;
    if ( v285 >= 1 )
    {
      v287 = 0;
      while ( v287 < v285 )
      {
        this = (BattleLogicFunction_o *)*((_QWORD *)&v286->fields.logictarget + (int)v287);
        if ( !this )
          goto LABEL_303;
        BattleServantData__updateBuff((BattleServantData_o *)this, 1, 1, 0LL);
        v285 = (int)v286->fields.logic;
        if ( (int)++v287 >= v285 )
          goto LABEL_274;
      }
LABEL_304:
      v301 = sub_B5D6C8(this);
      sub_B5D668(v301, 0LL);
    }
  }
LABEL_274:
  this = (BattleLogicFunction_o *)BattleServantData__getMaxHp(ServantData, 0LL);
  if ( (int)this < MaxHp )
  {
    this = (BattleLogicFunction_o *)BuffEntity__checkBuffType(v82, 41, 0LL);
    if ( ((unsigned __int8)this & 1) != 0 )
    {
      v288 = ServantData->fields.maxhp;
      if ( (BYTE3(System_Math_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !System_Math_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(System_Math_TypeInfo);
      }
      this = (BattleLogicFunction_o *)System_Math__Max_45149472(0, userCommandCodeIda - v288, 0LL);
      *(_DWORD *)(v88 + 136) = (_DWORD)this;
    }
  }
  v289 = v9->fields.data;
  if ( !v289 )
    goto LABEL_303;
  this = (BattleLogicFunction_o *)v289->fields.battleEvent;
  v290 = v314;
  if ( !this )
    goto LABEL_303;
  *(_BYTE *)(v88 + 212) = (*(__int64 (__fastcall **)(BattleLogicFunction_o *, __int64, BuffEntity_o *, DataVals_o *, _QWORD))&this->klass[1]._2.field_count)(
                            this,
                            v88,
                            v82,
                            dataVals_k__BackingField,
                            *(_QWORD *)&this->klass[1]._2.interfaces_count) & 1;
  if ( BuffEntity__checkBuffType(v82, 140, 0LL) )
  {
    buffData = ServantData->fields.buffData;
    v292 = (BattleBuffData_CheckIndividualitiesData_o *)sub_B5D694(BattleBuffData_CheckIndividualitiesData_TypeInfo);
    BattleBuffData_CheckIndividualitiesData___ctor(v292, ServantData, 0LL, 0LL, 0LL, 0LL, 0LL);
    if ( !buffData )
      goto LABEL_303;
    this = (BattleLogicFunction_o *)BattleBuffData__getBuffList_31668004(buffData, 83, v292, 1, 0, 0LL, 0LL);
    if ( !this )
      goto LABEL_303;
    v290 = v314;
    if ( this->fields.logic )
      BattleLogicFunction__functionResetCommandCard(v9, (int32_t)mainAction, v293, v294, v295, v296);
  }
  if ( DataVals__IsOnParty(dataVals_k__BackingField, 0LL) )
    *(_DWORD *)(v88 + 272) = v309;
  v297 = BattleLogicFunction_ProcListInArgs__get_IsCommandSideEffect(args, 0LL);
  v298 = (BattleActionData_BuffData_o *)((__int64 (__fastcall *)(BattleLogicFunctionProcess_FunctionTargetCheck_o *, BattleActionData_MasterBuffData_o *, __int64, FunctionEntity_o *, bool, Il2CppMethodPointer))funcTargeta->klass->vtable._10_MakeAddActionBuffData.method)(
                                          funcTargeta,
                                          v290,
                                          v88,
                                          funcEnt,
                                          v297,
                                          funcTargeta->klass->vtable._11_GetConvertBuffEntity.methodPtr);
  if ( DataVals__IsProgressTurnOnBoard(dataVals_k__BackingField, 0LL) )
    *(_BYTE *)(v88 + 368) = 1;
  if ( DataVals__GetParam(dataVals_k__BackingField, 149, 0, 0LL) > 0
    || BuffEntity__IsDelayRemoveExpiredOnPlayerTurn(v82, 0LL) )
  {
    *(_BYTE *)(v88 + 369) = 1;
  }
  BattleLogicFunction__AfterAddedBuffProcess(v9, ServantData, v82, v299);
  if ( BuffEntity__getDamageRelease(v82, 0LL) >= 1
    && !BattleServantData__isLogicResultAlive(ServantData, 0LL)
    && (this = (BattleLogicFunction_o *)BattleServantData__isGuts(ServantData, 0LL), ((unsigned __int8)this & 1) != 0)
    || (this = (BattleLogicFunction_o *)BuffEntity__getDamageRelease(v82, 0LL), (_DWORD)this == -1) )
  {
    ServantData->fields.isGutsSleepRelease = 0;
  }
  if ( !v307
    || (BattleActionData__setBuffData(v307, v298, dataVals_k__BackingField, 0LL),
        (this = (BattleLogicFunction_o *)v9->fields.data) == 0LL) )
  {
LABEL_303:
    sub_B5D69C(this, mainAction);
  }
  BattleData__AddFreshBuffList((BattleData_o *)this, v298, 0LL);
  BattleActionData__addAction(v138, v307, 0LL);
  return (BattleBuffData_BuffData_o *)v88;
}


void __fastcall BattleLogicFunction__functionBreakGaugeChange(
        BattleLogicFunction_o *this,
        BattleActionData_o *mainAction,
        BattleLogicFunctionProcess_FunctionUnitCheck_o *funcUnit,
        BattleServantData_o *targetSvtData,
        BattleActionData_BaseShiftGaugeData_o *shiftGauge,
        const MethodInfo *method)
{
  int v10; // w1
  int v11; // w2
  __int64 v12; // x3
  int v13; // w1
  int v14; // w2
  __int64 v15; // x3
  int v16; // w1
  int v17; // w2
  __int64 v18; // x3
  int v19; // w1
  int v20; // w2
  __int64 v21; // x3
  struct DataVals_o *dataVals_k__BackingField; // x23
  BattleLogicFunction_ProcListInArgs_o *procArg_k__BackingField; // x25
  int32_t uniqueId; // w20
  int32_t funcIndex; // w21
  bool IsCommandSideEffect; // w0
  const MethodInfo *v27; // x7
  __int64 v28; // x19
  System_Int32_array **v29; // x0
  System_String_array **v30; // x2
  System_String_array **v31; // x3
  System_Boolean_array **v32; // x4
  System_Int32_array **v33; // x5
  System_Int32_array *v34; // x6
  System_Int32_array *v35; // x7
  int32_t v36; // w26
  int32_t v37; // w27
  FunctionEntity_o *funcEnt; // x28
  _BOOL8 v39; // x0
  const MethodInfo *v40; // x6
  BattleActionData_ShiftServant_o *v41; // x19
  SimpleHpData_o *v42; // x19
  EnemySimpleHpData_o *v43; // x27
  unsigned int Value; // w0
  int v45; // w0
  int v46; // w24
  int v47; // w22
  int32_t v48; // w25
  int32_t Param; // w0
  SimpleHpData_o *v50; // x26
  unsigned int CurrentShiftPos; // w28
  unsigned int MaxShiftIconPos; // w0
  int v53; // [xsp+Ch] [xbp-74h]
  BattleActionData_ShiftServant_o *v54; // [xsp+10h] [xbp-70h]
  BattleActionData_o *v55; // [xsp+18h] [xbp-68h]
  BattleActionData_o *v56; // [xsp+20h] [xbp-60h]
  BattleLogicFunction_o *v57; // [xsp+28h] [xbp-58h]

  v57 = this;
  if ( (byte_42EB014 & 1) == 0 )
  {
    sub_B5D5C4(&BattleActionData_TypeInfo, (_DWORD)mainAction, (_DWORD)funcUnit, targetSvtData);
    sub_B5D5C4(&EnemySimpleHpData_TypeInfo, v10, v11, v12);
    sub_B5D5C4(&System_Math_TypeInfo, v13, v14, v15);
    sub_B5D5C4(&BattleActionData_ShiftServant_TypeInfo, v16, v17, v18);
    this = (BattleLogicFunction_o *)sub_B5D5C4(&SimpleHpData_TypeInfo, v19, v20, v21);
    byte_42EB014 = 1;
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
                                          v57,
                                          uniqueId,
                                          funcIndex,
                                          dataVals_k__BackingField,
                                          IsCommandSideEffect,
                                          0LL,
                                          0LL,
                                          v27);
        if ( mainAction )
        {
          BattleActionData__addAction(mainAction, (BattleActionData_o *)this, 0LL);
          return;
        }
      }
    }
    goto LABEL_33;
  }
  v28 = sub_B5D694(BattleActionData_TypeInfo);
  BattleActionData___ctor((BattleActionData_o *)v28, 0LL);
  if ( !v28 )
    goto LABEL_33;
  *(_DWORD *)(v28 + 32) = targetSvtData->fields.uniqueId;
  *(_DWORD *)(v28 + 36) = targetSvtData->fields.uniqueId;
  v29 = (System_Int32_array **)((__int64 (__fastcall *)(BattleActionData_BaseShiftGaugeData_o *, Il2CppMethodPointer))shiftGauge->klass->vtable._7_unknown.method)(
                                 shiftGauge,
                                 shiftGauge->klass->vtable._8_unknown.methodPtr);
  *(_QWORD *)(v28 + 64) = v29;
  sub_B5D560((BattleServantConfConponent_o *)(v28 + 64), v29, v30, v31, v32, v33, v34, v35);
  if ( !dataVals_k__BackingField )
    goto LABEL_33;
  if ( !procArg_k__BackingField )
    goto LABEL_33;
  v36 = dataVals_k__BackingField->fields.funcIndex;
  v37 = targetSvtData->fields.uniqueId;
  funcEnt = dataVals_k__BackingField->fields.funcEnt;
  v39 = BattleLogicFunction_ProcListInArgs__get_IsCommandSideEffect(procArg_k__BackingField, 0LL);
  this = (BattleLogicFunction_o *)BattleLogicFunction__getFunctionObject(
                                    (BattleLogicFunction_o *)v39,
                                    funcEnt,
                                    v37,
                                    v36,
                                    v39,
                                    0LL,
                                    v40);
  if ( !this )
    goto LABEL_33;
  v55 = (BattleActionData_o *)v28;
  v56 = mainAction;
  BYTE5(this[1].fields.logictarget) = 0;
  BattleActionData__setBuffData((BattleActionData_o *)v28, (BattleActionData_BuffData_o *)this, 0LL, 0LL);
  v41 = (BattleActionData_ShiftServant_o *)sub_B5D694(BattleActionData_ShiftServant_TypeInfo);
  BattleActionData_ShiftServant___ctor(v41, 0LL);
  if ( !v41 )
    goto LABEL_33;
  v54 = v41;
  BattleActionData_ShiftServant__setBeforeSvtData(v41, targetSvtData, 0LL);
  v42 = (SimpleHpData_o *)sub_B5D694(SimpleHpData_TypeInfo);
  SimpleHpData___ctor(v42, targetSvtData, 0LL);
  v43 = (EnemySimpleHpData_o *)sub_B5D694(EnemySimpleHpData_TypeInfo);
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
  v53 = v45;
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
    BattleServantData__SetShiftServantChange(targetSvtData, v57->fields.data, v43, v48, 0LL);
    Param = DataVals__GetParam(dataVals_k__BackingField, 58, 0, 0LL);
    ((void (__fastcall *)(BattleActionData_BaseShiftGaugeData_o *, BattleServantData_o *, bool, Il2CppMethodPointer))shiftGauge->klass->vtable._10_unknown.method)(
      shiftGauge,
      targetSvtData,
      Param > 0,
      shiftGauge->klass->vtable._11_unknown.methodPtr);
    v50 = (SimpleHpData_o *)sub_B5D694(SimpleHpData_TypeInfo);
    SimpleHpData___ctor(v50, targetSvtData, 0LL);
    CurrentShiftPos = BattleServantData__GetCurrentShiftPos(targetSvtData, 0LL);
    MaxShiftIconPos = BattleServantData__GetMaxShiftIconPos(targetSvtData, 0LL);
    ((void (__fastcall *)(BattleActionData_BaseShiftGaugeData_o *, _QWORD, _QWORD, SimpleHpData_o *, SimpleHpData_o *, Il2CppMethodPointer))shiftGauge->klass->vtable._11_unknown.method)(
      shiftGauge,
      CurrentShiftPos,
      MaxShiftIconPos,
      v42,
      v50,
      shiftGauge->klass->vtable._12_Init.methodPtr);
    ++v46;
    v42 = v50;
  }
  if ( v53 )
  {
    this = (BattleLogicFunction_o *)v57->fields.logic;
    if ( !this )
      goto LABEL_33;
    BattleLogic__actEnemyPtPassiveSkill((BattleLogic_o *)this, targetSvtData->fields.uniqueId, 1, 0, 0LL);
  }
  BattleActionData_ShiftServant__setCheckSvtData(v54, targetSvtData, 0LL);
  BattleActionData__setShiftServant(v55, v54, 0LL);
  BattleActionData__SetShiftGauge(v55, shiftGauge, 0LL);
  if ( !v56 )
LABEL_33:
    sub_B5D69C(this, mainAction);
  BattleActionData__AddAfterActionData(v56, v55, 0, 0LL);
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
  int v12; // w1
  int v13; // w2
  __int64 v14; // x3
  int v15; // w1
  int v16; // w2
  __int64 v17; // x3
  int v18; // w1
  int v19; // w2
  __int64 v20; // x3
  int v21; // w1
  int v22; // w2
  __int64 v23; // x3
  int v24; // w1
  int v25; // w2
  __int64 v26; // x3
  int v27; // w1
  int v28; // w2
  __int64 v29; // x3
  int v30; // w1
  int v31; // w2
  __int64 v32; // x3
  __int64 data; // x0
  BattleData_o *v34; // x25
  BattleServantData_o *v35; // x24
  BattleLogicFunction_o *FieldSpace; // x0
  const MethodInfo *v37; // x7
  System_String_o *v38; // x0
  BattleData_o *v39; // x24
  System_String_array **v40; // x2
  System_String_array **v41; // x3
  System_Boolean_array **v42; // x4
  System_Int32_array **v43; // x5
  System_Int32_array *v44; // x6
  System_Int32_array *v45; // x7
  System_String_array *v46; // x22
  System_Int32_array **v47; // x1
  BattleActionData_o *v48; // x21
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
  System_String_array **v77; // x2
  System_String_array **v78; // x3
  System_Boolean_array **v79; // x4
  System_Int32_array **v80; // x5
  System_Int32_array *v81; // x6
  System_Int32_array *v82; // x7
  System_Int32_array **v83; // x23
  System_String_array **v84; // x2
  System_String_array **v85; // x3
  System_Boolean_array **v86; // x4
  System_Int32_array **v87; // x5
  System_Int32_array *v88; // x6
  System_Int32_array *v89; // x7
  System_Int32_array **v90; // x1
  struct BattleData_o *v91; // x8
  struct System_Int32_array *e_entryid; // x8
  char *v93; // x8
  _DWORD *v94; // x8
  int32_t v95; // w22
  int32_t v96; // t1
  BattleServantData_o *v97; // x23
  int32_t uniqueId; // w23
  bool isEffectSummon; // w24
  __int64 v101; // x0
  __int64 v102; // x0
  int32_t Value; // [xsp+4h] [xbp-4Ch] BYREF
  __int64 v104; // [xsp+8h] [xbp-48h] BYREF
  int32_t targetIndex[2]; // [xsp+18h] [xbp-38h] BYREF

  if ( (byte_42EB005 & 1) == 0 )
  {
    sub_B5D5C4(&BattleActionData_TypeInfo, playerId, (_DWORD)funcEnt, baseVals);
    sub_B5D5C4(&string___TypeInfo, v12, v13, v14);
    sub_B5D5C4(&StringLiteral_16826/*"baseVals.GetValue:"*/, v15, v16, v17);
    sub_B5D5C4(&StringLiteral_16066/*"] Index["*/, v18, v19, v20);
    sub_B5D5C4(&StringLiteral_286/*" 召喚！NPC["*/, v21, v22, v23);
    sub_B5D5C4(&StringLiteral_16067/*"] UniqueID["*/, v24, v25, v26);
    sub_B5D5C4(&StringLiteral_19170/*"functionCallServant>"*/, v27, v28, v29);
    sub_B5D5C4(&StringLiteral_16061/*"]"*/, v30, v31, v32);
    byte_42EB005 = 1;
  }
  *(_QWORD *)targetIndex = 0LL;
  v104 = 0LL;
  Value = 0;
  data = (__int64)this->fields.data;
  if ( !data )
    goto LABEL_55;
  data = (__int64)BattleData__getServantData((BattleData_o *)data, playerId, 0LL);
  targetIndex[1] = -1;
  if ( !baseVals )
    goto LABEL_55;
  v34 = this->fields.data;
  v35 = (BattleServantData_o *)data;
  data = DataVals__isCheckEnemyFieldSpace(baseVals, 0LL);
  if ( !v34 )
    goto LABEL_55;
  FieldSpace = (BattleLogicFunction_o *)BattleData__getFieldSpace(v34, playerId, &targetIndex[1], data & 1, 0LL);
  if ( (_DWORD)FieldSpace )
  {
    Value = DataVals__GetValue(baseVals, 0LL);
    v38 = System_Int32__ToString((int32_t)&Value, 0LL);
    System_String__Concat_44577788((System_String_o *)StringLiteral_16826/*"baseVals.GetValue:"*/, v38, 0LL);
    targetIndex[0] = -1;
    if ( playerId == -1 )
    {
      v39 = this->fields.data;
      data = DataVals__GetValue(baseVals, 0LL);
      if ( !v39 )
        goto LABEL_55;
      FieldSpace = (BattleLogicFunction_o *)BattleData__GetEnemySummonId(v39, data, 0LL);
    }
    else
    {
      data = DataVals__GetValue(baseVals, 0LL);
      if ( !v35 )
        goto LABEL_55;
      FieldSpace = (BattleLogicFunction_o *)BattleServantData__getSummonNpcId(v35, data, 0LL);
    }
    targetIndex[0] = (int)FieldSpace;
    if ( (_DWORD)FieldSpace != -1 )
    {
      data = (__int64)this->fields.data;
      if ( !data )
        goto LABEL_55;
      HIDWORD(v104) = BattleData__getNextUniqueID((BattleData_o *)data, 0LL);
      data = (__int64)this->fields.data;
      if ( !data )
        goto LABEL_55;
      LODWORD(v104) = BattleData__getNextNextIndex((BattleData_o *)data, 0LL);
      data = sub_B5D5DC(string___TypeInfo, 7LL);
      if ( !data )
        goto LABEL_55;
      v46 = (System_String_array *)data;
      data = StringLiteral_286/*" 召喚！NPC["*/;
      if ( StringLiteral_286/*" 召喚！NPC["*/ )
      {
        data = sub_B5D684(StringLiteral_286/*" 召喚！NPC["*/, v46->obj.klass->_1.element_class);
        if ( !data )
          goto LABEL_57;
        v47 = (System_Int32_array **)StringLiteral_286/*" 召喚！NPC["*/;
      }
      else
      {
        v47 = 0LL;
      }
      if ( !v46->max_length )
        goto LABEL_56;
      v46->m_Items[0] = (System_String_o *)v47;
      sub_B5D560((BattleServantConfConponent_o *)v46->m_Items, v47, v40, v41, v42, v43, v44, v45);
      data = (__int64)System_Int32__ToString((int32_t)targetIndex, 0LL);
      v55 = (System_Int32_array **)data;
      if ( !data || (data = sub_B5D684(data, v46->obj.klass->_1.element_class)) != 0 )
      {
        if ( v46->max_length <= 1 )
          goto LABEL_56;
        v46->m_Items[1] = (System_String_o *)v55;
        sub_B5D560((BattleServantConfConponent_o *)&v46->m_Items[1], v55, v49, v50, v51, v52, v53, v54);
        data = StringLiteral_16067/*"] UniqueID["*/;
        if ( StringLiteral_16067/*"] UniqueID["*/ )
        {
          data = sub_B5D684(StringLiteral_16067/*"] UniqueID["*/, v46->obj.klass->_1.element_class);
          if ( !data )
            goto LABEL_57;
          v62 = (System_Int32_array **)StringLiteral_16067/*"] UniqueID["*/;
        }
        else
        {
          v62 = 0LL;
        }
        if ( v46->max_length <= 2 )
          goto LABEL_56;
        v46->m_Items[2] = (System_String_o *)v62;
        sub_B5D560((BattleServantConfConponent_o *)&v46->m_Items[2], v62, v56, v57, v58, v59, v60, v61);
        data = (__int64)System_Int32__ToString((int32_t)&v104 + 4, 0LL);
        v69 = (System_Int32_array **)data;
        if ( !data || (data = sub_B5D684(data, v46->obj.klass->_1.element_class)) != 0 )
        {
          if ( v46->max_length <= 3 )
            goto LABEL_56;
          v46->m_Items[3] = (System_String_o *)v69;
          sub_B5D560((BattleServantConfConponent_o *)&v46->m_Items[3], v69, v63, v64, v65, v66, v67, v68);
          data = StringLiteral_16066/*"] Index["*/;
          if ( StringLiteral_16066/*"] Index["*/ )
          {
            data = sub_B5D684(StringLiteral_16066/*"] Index["*/, v46->obj.klass->_1.element_class);
            if ( !data )
              goto LABEL_57;
            v76 = (System_Int32_array **)StringLiteral_16066/*"] Index["*/;
          }
          else
          {
            v76 = 0LL;
          }
          if ( v46->max_length <= 4 )
            goto LABEL_56;
          v46->m_Items[4] = (System_String_o *)v76;
          sub_B5D560((BattleServantConfConponent_o *)&v46->m_Items[4], v76, v70, v71, v72, v73, v74, v75);
          data = (__int64)System_Int32__ToString((int32_t)&v104, 0LL);
          v83 = (System_Int32_array **)data;
          if ( !data || (data = sub_B5D684(data, v46->obj.klass->_1.element_class)) != 0 )
          {
            if ( v46->max_length <= 5 )
              goto LABEL_56;
            v46->m_Items[5] = (System_String_o *)v83;
            sub_B5D560((BattleServantConfConponent_o *)&v46->m_Items[5], v83, v77, v78, v79, v80, v81, v82);
            data = StringLiteral_16061/*"]"*/;
            if ( !StringLiteral_16061/*"]"*/ )
            {
              v90 = 0LL;
              goto LABEL_45;
            }
            data = sub_B5D684(StringLiteral_16061/*"]"*/, v46->obj.klass->_1.element_class);
            if ( data )
            {
              v90 = (System_Int32_array **)StringLiteral_16061/*"]"*/;
LABEL_45:
              if ( v46->max_length > 6 )
              {
                v46->m_Items[6] = (System_String_o *)v90;
                sub_B5D560((BattleServantConfConponent_o *)&v46->m_Items[6], v90, v84, v85, v86, v87, v88, v89);
                System_String__Concat_44657912(v46, 0LL);
                data = (__int64)this->fields.data;
                if ( !data )
                  goto LABEL_55;
                data = (__int64)BattleData__createSummonEnemyServantData(
                                  (BattleData_o *)data,
                                  SHIDWORD(v104),
                                  v104,
                                  targetIndex[0],
                                  0LL,
                                  0LL,
                                  0LL);
                v91 = this->fields.data;
                if ( !v91 )
                  goto LABEL_55;
                e_entryid = v91->fields.e_entryid;
                if ( !e_entryid )
                  goto LABEL_55;
                if ( targetIndex[1] < e_entryid->max_length )
                {
                  v93 = (char *)e_entryid + 4 * targetIndex[1];
                  v96 = *((_DWORD *)v93 + 8);
                  v94 = v93 + 32;
                  v95 = v96;
                  v97 = (BattleServantData_o *)data;
                  if ( data )
                  {
                    *v94 = *(_DWORD *)(data + 24);
                    *(_BYTE *)(data + 452) = 1;
                    *(_BYTE *)(data + 517) = 1;
                    BattleServantData__SetRemainActionCount((BattleServantData_o *)data, 1, 0LL);
                    data = (__int64)this->fields.logic;
                    if ( data )
                    {
                      BattleLogic__addEnemyActPriorityList((BattleLogic_o *)data, v97, 0LL);
                      v48 = (BattleActionData_o *)sub_B5D694(BattleActionData_TypeInfo);
                      BattleActionData___ctor(v48, 0LL);
                      uniqueId = v97->fields.uniqueId;
                      isEffectSummon = DataVals__isEffectSummon(baseVals, 0LL);
                      data = DataVals__GetCallSvtEffectId(baseVals, 0LL);
                      if ( v48 )
                      {
                        BattleActionData__setSummonServant(v48, uniqueId, v95, funcIndex, isEffectSummon, data, 0LL);
                        return v48;
                      }
                    }
                  }
LABEL_55:
                  sub_B5D69C(data, *(_QWORD *)&playerId);
                }
              }
LABEL_56:
              v101 = sub_B5D6C8(data);
              sub_B5D668(v101, 0LL);
            }
          }
        }
      }
LABEL_57:
      v102 = sub_B5D6BC(data);
      sub_B5D668(v102, 0LL);
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
           v37);
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
  int32_t v13; // w0

  if ( (byte_42EB008 & 1) == 0 )
  {
    sub_B5D5C4(&BattleActionData_TypeInfo, actionId, (_DWORD)funcEnt, baseVals);
    byte_42EB008 = 1;
  }
  v8 = (BattleActionData_o *)sub_B5D694(BattleActionData_TypeInfo);
  BattleActionData___ctor(v8, 0LL);
  if ( !v8 || (v8->fields.actorId = actionId, !baseVals) )
    sub_B5D69C(v9, v10);
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
  int v11; // w1
  int v12; // w2
  __int64 v13; // x3
  BattleData_o *data; // x0
  BattleServantData_o *ServantData; // x22
  BattleActionData_o *v16; // x21
  BattleActionData_ShiftServant_o *v17; // x23

  if ( (byte_42EB007 & 1) == 0 )
  {
    sub_B5D5C4(&BattleActionData_TypeInfo, actionId, targetId, funcEnt);
    sub_B5D5C4(&BattleActionData_ShiftServant_TypeInfo, v11, v12, v13);
    byte_42EB007 = 1;
  }
  data = this->fields.data;
  if ( !data )
    goto LABEL_9;
  ServantData = BattleData__getServantData(data, targetId, 0LL);
  v16 = (BattleActionData_o *)sub_B5D694(BattleActionData_TypeInfo);
  BattleActionData___ctor(v16, 0LL);
  if ( !v16 )
    goto LABEL_9;
  v16->fields.actorId = actionId;
  v17 = (BattleActionData_ShiftServant_o *)sub_B5D694(BattleActionData_ShiftServant_TypeInfo);
  BattleActionData_ShiftServant___ctor(v17, 0LL);
  if ( !v17
    || (BattleActionData_ShiftServant__setBeforeSvtData(v17, ServantData, 0LL), !ServantData)
    || (BattleServantData__setChangeServant(ServantData, this->fields.data, baseVals, 0LL),
        BattleActionData_ShiftServant__setCheckSvtData(v17, ServantData, 0LL),
        BattleActionData__setShiftServant(v16, v17, 0LL),
        (data = (BattleData_o *)this->fields.logic) == 0LL) )
  {
LABEL_9:
    sub_B5D69C(data, *(_QWORD *)&actionId);
  }
  BattleLogic__actEnemyPtPassiveSkill((BattleLogic_o *)data, ServantData->fields.uniqueId, 0, 0, 0LL);
  return v16;
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

  if ( (byte_42EAFF4 & 1) == 0 )
  {
    sub_B5D5C4(&BattleActionData_TypeInfo, playerId, targetId, baseVals);
    byte_42EAFF4 = 1;
  }
  v15 = (BattleActionData_o *)sub_B5D694(BattleActionData_TypeInfo);
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
    sub_B5D69C(data, v16);
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

  if ( (byte_42EAFFD & 1) == 0 )
  {
    sub_B5D5C4(&BattleActionData_TypeInfo, targetId, (_DWORD)funcEnt, baseVals);
    byte_42EAFFD = 1;
  }
  *absorptionCount = 0;
  v15 = (BattleActionData_o *)sub_B5D694(BattleActionData_TypeInfo);
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
    sub_B5D69C(data, v16);
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
  FunctionEntity_o *v13; // x28
  int v17; // w1
  int v18; // w2
  __int64 v19; // x3
  int v20; // w1
  int v21; // w2
  __int64 v22; // x3
  BattleActionData_o *v23; // x24
  __int64 v24; // x1
  BattleData_o *data; // x0
  BattleServantData_o *v26; // x27
  BattleServantData_o *v27; // x25
  const MethodInfo *v28; // x4
  BattleBuffData_o *buffData; // x28
  BattleBuffData_CheckIndividualitiesData_o *v30; // x20
  char v31; // w20
  struct BattleData_o *v32; // x8
  System_String_o *v33; // x0
  float UpDownGiveHeal; // s0
  const MethodInfo *v36; // [xsp+8h] [xbp-68h]
  FunctionEntity_o *v37; // [xsp+10h] [xbp-60h]
  int32_t healPoint[2]; // [xsp+18h] [xbp-58h] BYREF

  LODWORD(v9) = overwriteHeal;
  v13 = funcEnt;
  if ( (byte_42EAFF7 & 1) == 0 )
  {
    sub_B5D5C4(&BattleActionData_TypeInfo, playerId, targetId, funcEnt);
    sub_B5D5C4(&BattleBuffData_CheckIndividualitiesData_TypeInfo, v17, v18, v19);
    sub_B5D5C4(&StringLiteral_19171/*"functionGainHp:"*/, v20, v21, v22);
    byte_42EAFF7 = 1;
  }
  *(_QWORD *)healPoint = 0LL;
  v23 = (BattleActionData_o *)sub_B5D694(BattleActionData_TypeInfo);
  BattleActionData___ctor(v23, 0LL);
  data = this->fields.data;
  if ( !data )
    goto LABEL_26;
  data = (BattleData_o *)BattleData__getServantData(data, playerId, 0LL);
  if ( !this->fields.data )
    goto LABEL_26;
  v26 = (BattleServantData_o *)data;
  data = (BattleData_o *)BattleData__getServantData(this->fields.data, targetId, 0LL);
  if ( !baseVals )
    goto LABEL_26;
  v27 = (BattleServantData_o *)data;
  baseVals->fields.isShowForcedEffect = 0;
  if ( (_DWORD)v9 == -1 )
    LODWORD(v9) = DataVals__GetValue(baseVals, 0LL);
  healPoint[1] = v9;
  data = (BattleData_o *)DataVals__isUnaffected(baseVals, 0LL);
  if ( ((unsigned __int8)data & 1) != 0 )
  {
LABEL_20:
    v31 = 0;
    goto LABEL_21;
  }
  if ( !v27 )
    goto LABEL_26;
  if ( ((__int64 (__fastcall *)(BattleServantData_o *, Il2CppMethodPointer))v27->klass->vtable._13_get_resultHp.method)(
         v27,
         v27->klass->vtable._14_set_resultHp.methodPtr) <= 0 )
  {
    healPoint[1] = 0;
    data = (BattleData_o *)BattleServantData__isShiftableServant(v27, 0LL);
    if ( ((unsigned __int8)data & 1) == 0 )
    {
      v32 = this->fields.data;
      if ( !v32 )
        goto LABEL_26;
      data = (BattleData_o *)v32->fields.battleEvent;
      if ( !data )
        goto LABEL_26;
      data = (BattleData_o *)(*(__int64 (__fastcall **)(BattleData_o *, BattleServantData_o *, _QWORD))&data->klass[1]._2.initializationExceptionGCHandle)(
                               data,
                               v27,
                               *(_QWORD *)&data->klass[1]._2.cctor_finished);
      if ( ((unsigned __int8)data & 1) == 0 )
      {
        data = (BattleData_o *)BattleServantData__isGuts(v27, 0LL);
        LODWORD(v9) = 0;
        v31 = (unsigned __int8)data ^ 1;
        goto LABEL_21;
      }
    }
    LODWORD(v9) = 0;
    goto LABEL_20;
  }
  data = (BattleData_o *)BattleServantData__isShiftReady(v27, 0LL);
  if ( ((unsigned __int8)data & 1) != 0 )
  {
LABEL_14:
    LODWORD(v9) = 0;
    v31 = 0;
    healPoint[1] = 0;
    goto LABEL_21;
  }
  v37 = v13;
  buffData = v27->fields.buffData;
  v30 = (BattleBuffData_CheckIndividualitiesData_o *)sub_B5D694(BattleBuffData_CheckIndividualitiesData_TypeInfo);
  BattleBuffData_CheckIndividualitiesData___ctor(v30, v27, 0LL, 0LL, 0LL, 0LL, 0LL);
  if ( !buffData )
LABEL_26:
    sub_B5D69C(data, v24);
  data = (BattleData_o *)BattleBuffData__isTurnBuff(buffData, 42, v30, 1, 0LL);
  v13 = v37;
  if ( ((unsigned __int8)data & 1) != 0 )
    goto LABEL_14;
  if ( v26 )
  {
    UpDownGiveHeal = BattleServantData__getUpDownGiveHeal(v26, v27, 0LL);
    LODWORD(v9) = BattleUtility__FloorToInt(UpDownGiveHeal * (float)(int)v9, 0LL);
    healPoint[1] = v9;
  }
  healPoint[0] = 1;
  data = (BattleData_o *)BattleServantData__getUpDownHeal(v27, healPoint, 0LL);
  v31 = 0;
  v9 = (int)data * (__int64)(int)v9 / healPoint[0];
  healPoint[1] = v9;
  baseVals->fields.isShowForcedEffect = 1;
LABEL_21:
  healPoint[1] = BattleLogicFunction__GetActualRecoveryHealPoint((BattleLogicFunction_o *)data, baseVals, v27, v9, v28);
  v33 = System_Int32__ToString((int32_t)&healPoint[1], 0LL);
  System_String__Concat_44577788((System_String_o *)StringLiteral_19171/*"functionGainHp:"*/, v33, 0LL);
  BattleLogicFunction__SetGainHpBuff(
    this,
    v23,
    healPoint[1],
    funcIndex,
    v27,
    v13,
    baseVals,
    isCommandSideEffect,
    v31 & 1,
    v36);
  return v23;
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
  int v9; // w1
  int v10; // w2
  __int64 v11; // x3
  int v12; // w1
  int v13; // w2
  __int64 v14; // x3
  int v15; // w1
  int v16; // w2
  __int64 v17; // x3
  int v18; // w1
  int v19; // w2
  __int64 v20; // x3
  int v21; // w1
  int v22; // w2
  __int64 v23; // x3
  int v24; // w1
  int v25; // w2
  __int64 v26; // x3
  int v27; // w1
  int v28; // w2
  __int64 v29; // x3
  int v30; // w1
  int v31; // w2
  __int64 v32; // x3
  int v33; // w1
  int v34; // w2
  __int64 v35; // x3
  struct BattleLogicFunctionProcess_FunctionUnitCheck_o *funcUnit_k__BackingField; // x8
  DataVals_o *dataVals_k__BackingField; // x23
  System_Collections_Generic_List_VoiceCondType_Type__o *v38; // x20
  int logic; // w8
  unsigned int v40; // w25
  int v41; // w19
  DataVals_o *v42; // x26
  int32_t *p_funcType; // x28
  BattleLogicFunction_o *v44; // x19
  System_String_o *v45; // x20
  const MethodInfo *v46; // x4
  __int64 v47; // x3
  BattleLogicFunction_c *klass; // x8
  BattleLogicFunction_o *v49; // x23
  unsigned __int64 v50; // x10
  int32_t *p_offset; // x11
  __int64 v52; // x0
  __int64 v53; // x0
  __int64 v54; // x1
  const MethodInfo *v55; // x3
  __int64 v56; // x27
  BattleLogicFunction_ProcListInArgs_o *v57; // x0
  int32_t actorId; // w19
  FunctionEntity_o *funcEnt; // x22
  int32_t funcIndex; // w24
  bool IsCommandSideEffect; // w0
  BattleActionData_o *v62; // x20
  __int64 v63; // x1
  int v64; // w19
  int32_t v65; // w19
  bool v66; // w0
  const MethodInfo *v67; // x7
  BattleActionData_o *NoEffectObject; // x1
  __int64 v69; // x8
  unsigned __int64 v70; // x10
  int *v71; // x11
  __int64 v72; // x0
  __int64 v73; // x3
  __int64 v74; // x8
  unsigned __int64 v75; // x10
  int *v76; // x11
  __int64 v77; // x0
  __int64 v78; // x0
  __int64 v79; // x1
  __int64 v80; // x20
  __int64 v81; // x1
  BattleData_o *data; // x0
  int32_t v83; // w25
  BattleServantData_o *ServantData; // x0
  __int64 v85; // x1
  BattleServantData_o *v86; // x26
  BattleLogicFunction_o *Value; // x0
  __int64 v88; // x1
  int v89; // w23
  int32_t v90; // w8
  int32_t v91; // w20
  char v92; // w21
  __int64 v93; // x8
  unsigned __int64 v94; // x10
  int *v95; // x11
  __int64 v96; // x0
  int v97; // w8
  int32_t v98; // w19
  FunctionEntity_o *v99; // x20
  int32_t targetId_k__BackingField; // w22
  int32_t v101; // w21
  bool v102; // w0
  __int64 v104; // x0
  const MethodInfo *overwriteLossHp; // [xsp+0h] [xbp-E0h]
  bool isRandomDamage; // [xsp+8h] [xbp-D8h]
  const MethodInfo *v107; // [xsp+18h] [xbp-C8h]
  DataVals_o *v108; // [xsp+28h] [xbp-B8h]
  BattleLogicFunctionProcess_FunctionTargetCheck_o *v109; // [xsp+30h] [xbp-B0h]
  int32_t overwriteHeal; // [xsp+3Ch] [xbp-A4h]
  BattleLogicFunction_o *v111; // [xsp+40h] [xbp-A0h]
  int v112; // [xsp+48h] [xbp-98h]
  unsigned int v113; // [xsp+4Ch] [xbp-94h]
  BattleLogicFunction_ProcListInArgs_o *v114; // [xsp+50h] [xbp-90h]
  BattleActionData_o *v115; // [xsp+58h] [xbp-88h]
  BattleLogicFunction_o *v116; // [xsp+60h] [xbp-80h]
  bool v117; // [xsp+6Ch] [xbp-74h]
  __int64 v118; // [xsp+70h] [xbp-70h]
  BattleActionData_o *v119; // [xsp+78h] [xbp-68h]
  DataVals_o *v120; // [xsp+80h] [xbp-60h]
  _DWORD v121[1]; // [xsp+88h] [xbp-58h]
  int v122; // [xsp+8Ch] [xbp-54h]

  v6 = mainAction;
  v7 = procArg;
  v8 = this;
  if ( (byte_42EB011 & 1) == 0 )
  {
    sub_B5D5C4(&BattleActionData_TypeInfo, (_DWORD)procArg, (_DWORD)mainAction, funcTarget);
    sub_B5D5C4(&System_IDisposable_TypeInfo, v9, v10, v11);
    sub_B5D5C4(
      &System_Collections_Generic_IEnumerable_BattleLogicFunctionProcess_FunctionTargetCheck__TypeInfo,
      v12,
      v13,
      v14);
    sub_B5D5C4(
      &System_Collections_Generic_IEnumerator_BattleLogicFunctionProcess_FunctionTargetCheck__TypeInfo,
      v15,
      v16,
      v17);
    sub_B5D5C4(&System_Collections_IEnumerator_TypeInfo, v18, v19, v20);
    sub_B5D5C4(&Method_System_Collections_Generic_List_FuncList_TYPE__Add__, v21, v22, v23);
    sub_B5D5C4(&Method_System_Collections_Generic_List_FuncList_TYPE___ctor__, v24, v25, v26);
    sub_B5D5C4(&System_Collections_Generic_List_FuncList_TYPE__TypeInfo, v27, v28, v29);
    sub_B5D5C4(&FuncList_TYPE_TypeInfo, v30, v31, v32);
    this = (BattleLogicFunction_o *)sub_B5D5C4(&StringLiteral_16244/*"_SAFE"*/, v33, v34, v35);
    byte_42EB011 = 1;
  }
  v122 = 0;
  if ( !funcTarget )
    goto LABEL_82;
  funcUnit_k__BackingField = funcTarget->fields._funcUnit_k__BackingField;
  v109 = funcTarget;
  if ( !funcUnit_k__BackingField )
    goto LABEL_82;
  dataVals_k__BackingField = funcUnit_k__BackingField->fields._dataVals_k__BackingField;
  v115 = (BattleActionData_o *)sub_B5D694(BattleActionData_TypeInfo);
  BattleActionData___ctor(v115, 0LL);
  v38 = (System_Collections_Generic_List_VoiceCondType_Type__o *)sub_B5D694(System_Collections_Generic_List_FuncList_TYPE__TypeInfo);
  System_Collections_Generic_List_VoiceCondType_Type____ctor(
    v38,
    (const MethodInfo_3043A54 *)Method_System_Collections_Generic_List_FuncList_TYPE___ctor__);
  if ( !v38 )
    goto LABEL_82;
  System_Collections_Generic_List_VoiceCondType_Type___Add(
    v38,
    12,
    (const MethodInfo_30447B0 *)Method_System_Collections_Generic_List_FuncList_TYPE__Add__);
  System_Collections_Generic_List_VoiceCondType_Type___Add(
    v38,
    25,
    (const MethodInfo_30447B0 *)Method_System_Collections_Generic_List_FuncList_TYPE__Add__);
  System_Collections_Generic_List_VoiceCondType_Type___Add(
    v38,
    50,
    (const MethodInfo_30447B0 *)Method_System_Collections_Generic_List_FuncList_TYPE__Add__);
  System_Collections_Generic_List_VoiceCondType_Type___Add(
    v38,
    51,
    (const MethodInfo_30447B0 *)Method_System_Collections_Generic_List_FuncList_TYPE__Add__);
  if ( !dataVals_k__BackingField )
    goto LABEL_82;
  v108 = dataVals_k__BackingField;
  this = (BattleLogicFunction_o *)DataVals__GetDependDataValsArray(
                                    dataVals_k__BackingField,
                                    (System_Collections_Generic_List_FuncList_TYPE__o *)v38,
                                    1,
                                    0LL);
  if ( !this )
    goto LABEL_82;
  logic = (int)this->fields.logic;
  v116 = v8;
  v119 = v6;
  if ( logic >= 1 )
  {
    v40 = 0;
    v41 = 0;
    overwriteHeal = 0;
    v111 = this;
    v114 = v7;
    while ( 1 )
    {
      if ( v40 >= logic )
      {
        v104 = sub_B5D6C8(this);
        sub_B5D668(v104, 0LL);
      }
      v42 = (DataVals_o *)*((_QWORD *)&this->fields.logictarget + (int)v40);
      v112 = v41;
      if ( !v42 )
        goto LABEL_82;
      p_funcType = &v42->fields.funcType;
      this = (BattleLogicFunction_o *)j_il2cpp_value_box_0(FuncList_TYPE_TypeInfo, &v42->fields.funcType);
      if ( !this )
        goto LABEL_82;
      v44 = this;
      v45 = (System_String_o *)((__int64 (__fastcall *)(BattleLogicFunction_o *, void *))this->klass->vtable._3_ToString.method)(
                                 this,
                                 this->klass[1]._1.image);
      this = (BattleLogicFunction_o *)j_il2cpp_object_unbox_0(v44);
      *p_funcType = (int32_t)this->klass;
      if ( !v45 )
        goto LABEL_82;
      v117 = System_String__Contains(v45, (System_String_o *)StringLiteral_16244/*"_SAFE"*/, 0LL);
      this = (BattleLogicFunction_o *)BattleLogicFunction__GetDependFuncTargets(v8, v7, v6, v42, v46);
      if ( !this )
        goto LABEL_82;
      klass = this->klass;
      v49 = this;
      v120 = v42;
      v113 = v40;
      if ( *(_WORD *)&this->klass->_2.bitflags1 )
      {
        v50 = 0LL;
        p_offset = &klass->_1.interfaceOffsets->offset;
        while ( *((System_Collections_Generic_IEnumerable_BattleLogicFunctionProcess_FunctionTargetCheck__c **)p_offset
                - 1) != System_Collections_Generic_IEnumerable_BattleLogicFunctionProcess_FunctionTargetCheck__TypeInfo )
        {
          ++v50;
          p_offset += 4;
          if ( v50 >= *(unsigned __int16 *)&this->klass->_2.bitflags1 )
            goto LABEL_28;
        }
        v52 = (__int64)(&klass->vtable._0_Equals.method + 2 * *p_offset);
      }
      else
      {
LABEL_28:
        v52 = sub_AF54C0(
                this,
                System_Collections_Generic_IEnumerable_BattleLogicFunctionProcess_FunctionTargetCheck__TypeInfo,
                0LL,
                v47);
      }
      v53 = (*(__int64 (__fastcall **)(BattleLogicFunction_o *, _QWORD))v52)(v49, *(_QWORD *)(v52 + 8));
      v118 = v53;
      if ( !v53 )
        sub_B5D69C(0LL, v54);
      v56 = v53;
      while ( 1 )
      {
        v69 = *(_QWORD *)v56;
        if ( *(_WORD *)(*(_QWORD *)v56 + 298LL) )
        {
          v70 = 0LL;
          v71 = (int *)(*(_QWORD *)(v69 + 176) + 8LL);
          while ( *((System_Collections_IEnumerator_c **)v71 - 1) != System_Collections_IEnumerator_TypeInfo )
          {
            ++v70;
            v71 += 4;
            if ( v70 >= *(unsigned __int16 *)(*(_QWORD *)v56 + 298LL) )
              goto LABEL_42;
          }
          v72 = v69 + 16LL * *v71 + 312;
        }
        else
        {
LABEL_42:
          v72 = sub_AF54C0(v56, System_Collections_IEnumerator_TypeInfo, 0LL, v55);
        }
        if ( ((*(__int64 (__fastcall **)(__int64, _QWORD))v72)(v56, *(_QWORD *)(v72 + 8)) & 1) == 0 )
          break;
        v74 = *(_QWORD *)v56;
        if ( *(_WORD *)(*(_QWORD *)v56 + 298LL) )
        {
          v75 = 0LL;
          v76 = (int *)(*(_QWORD *)(v74 + 176) + 8LL);
          while ( *((System_Collections_Generic_IEnumerator_BattleLogicFunctionProcess_FunctionTargetCheck__c **)v76 - 1) != System_Collections_Generic_IEnumerator_BattleLogicFunctionProcess_FunctionTargetCheck__TypeInfo )
          {
            ++v75;
            v76 += 4;
            if ( v75 >= *(unsigned __int16 *)(*(_QWORD *)v56 + 298LL) )
              goto LABEL_49;
          }
          v77 = v74 + 16LL * *v76 + 312;
        }
        else
        {
LABEL_49:
          v77 = sub_AF54C0(
                  v56,
                  System_Collections_Generic_IEnumerator_BattleLogicFunctionProcess_FunctionTargetCheck__TypeInfo,
                  0LL,
                  v73);
        }
        v78 = (*(__int64 (__fastcall **)(__int64, _QWORD))v77)(v56, *(_QWORD *)(v77 + 8));
        v80 = v78;
        if ( !v78 )
          sub_B5D69C(0LL, v79);
        if ( ((*(__int64 (__fastcall **)(__int64, BattleActionData_o *, _QWORD))(*(_QWORD *)v78 + 392LL))(
                v78,
                v6,
                *(_QWORD *)(*(_QWORD *)v78 + 400LL)) & 1) != 0 )
        {
          data = v8->fields.data;
          if ( !data )
            sub_B5D69C(0LL, v81);
          v83 = *(_DWORD *)(v80 + 32);
          ServantData = BattleData__getServantData(data, v83, 0LL);
          v86 = ServantData;
          if ( !ServantData )
            sub_B5D69C(0LL, v85);
          Value = (BattleLogicFunction_o *)((__int64 (__fastcall *)(BattleServantData_o *, Il2CppMethodPointer))ServantData->klass->vtable._13_get_resultHp.method)(
                                             ServantData,
                                             ServantData->klass->vtable._14_set_resultHp.methodPtr);
          v89 = (int)Value;
          if ( (int)Value >= 1 )
          {
            v90 = *p_funcType;
            if ( *p_funcType == 12 || v90 == 25 )
            {
              Value = (BattleLogicFunction_o *)DataVals__GetValue(v120, 0LL);
              v91 = (int)Value;
            }
            else
            {
              if ( (v90 & 0xFFFFFFFE) == 50 )
              {
                Value = (BattleLogicFunction_o *)BattleLogicFunction__getHpPerValue(Value, v120, v86, v55);
                v91 = (int)Value;
                v92 = 0;
                if ( !v6 )
                  goto LABEL_64;
                goto LABEL_32;
              }
              v91 = -1;
            }
            v92 = 1;
            if ( !v6 )
LABEL_64:
              sub_B5D69C(Value, v88);
LABEL_32:
            v57 = v7;
            if ( !v7 )
              sub_B5D69C(0LL, v88);
            actorId = v6->fields.actorId;
            funcEnt = v120->fields.funcEnt;
            funcIndex = v120->fields.funcIndex;
            IsCommandSideEffect = BattleLogicFunction_ProcListInArgs__get_IsCommandSideEffect(v57, 0LL);
            isRandomDamage = v92;
            v8 = v116;
            v62 = BattleLogicFunction__functionlossHp(
                    v116,
                    actorId,
                    v83,
                    funcEnt,
                    v120,
                    funcIndex,
                    v117,
                    IsCommandSideEffect,
                    v91,
                    isRandomDamage,
                    0LL,
                    v107);
            v7 = v114;
            v6 = v119;
            v64 = v89
                - ((__int64 (__fastcall *)(BattleServantData_o *, Il2CppMethodPointer))v86->klass->vtable._13_get_resultHp.method)(
                    v86,
                    v86->klass->vtable._14_set_resultHp.methodPtr);
            if ( v64 >= 1 )
            {
              if ( !v115 )
                sub_B5D69C(0LL, v63);
              v56 = v118;
              BattleActionData__addAction(v115, v62, 0LL);
              overwriteHeal += v64;
            }
            else
            {
              v65 = v120->fields.funcIndex;
              v66 = BattleLogicFunction_ProcListInArgs__get_IsCommandSideEffect(v114, 0LL);
              v56 = v118;
              NoEffectObject = BattleLogicFunction__getNoEffectObject(v116, v83, v65, v120, v66, 0LL, 0LL, v67);
              if ( !v115 )
                sub_B5D69C(0LL, NoEffectObject);
              BattleActionData__addAction(v115, NoEffectObject, 0LL);
            }
          }
        }
      }
      v121[v112] = 395;
      v41 = ++v122;
      if ( v56 )
      {
        v93 = *(_QWORD *)v56;
        if ( *(_WORD *)(*(_QWORD *)v56 + 298LL) )
        {
          v94 = 0LL;
          v95 = (int *)(*(_QWORD *)(v93 + 176) + 8LL);
          while ( *((System_IDisposable_c **)v95 - 1) != System_IDisposable_TypeInfo )
          {
            ++v94;
            v95 += 4;
            if ( v94 >= *(unsigned __int16 *)(*(_QWORD *)v56 + 298LL) )
              goto LABEL_70;
          }
          v96 = v93 + 16LL * *v95 + 312;
        }
        else
        {
LABEL_70:
          v96 = sub_AF54C0(v56, System_IDisposable_TypeInfo, 0LL, v73);
        }
        (*(void (__fastcall **)(__int64, _QWORD))v96)(v56, *(_QWORD *)(v96 + 8));
      }
      this = v111;
      if ( v41 )
      {
        v97 = v41 - 1;
        v6 = v119;
        if ( v121[v41 - 1] == 395 )
        {
          --v41;
          v122 = v97;
        }
      }
      else
      {
        v6 = v119;
      }
      logic = (int)v111->fields.logic;
      v40 = v113 + 1;
      if ( (int)(v113 + 1) >= logic )
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
    || (v98 = v108->fields.funcIndex,
        v99 = v108->fields.funcEnt,
        targetId_k__BackingField = v109->fields._targetId_k__BackingField,
        v101 = v119->fields.actorId,
        v102 = BattleLogicFunction_ProcListInArgs__get_IsCommandSideEffect(v7, 0LL),
        this = (BattleLogicFunction_o *)BattleLogicFunction__functionGainHp(
                                          v116,
                                          v101,
                                          targetId_k__BackingField,
                                          v99,
                                          v108,
                                          v98,
                                          v102,
                                          overwriteHeal,
                                          overwriteLossHp),
        !v115) )
  {
LABEL_82:
    sub_B5D69C(this, procArg);
  }
  BattleActionData__addAction(v115, (BattleActionData_o *)this, 0LL);
  return v115;
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
  FunctionEntity_o *v11; // x28
  int v15; // w1
  int v16; // w2
  __int64 v17; // x3
  BattleActionData_o *v18; // x24
  __int64 v19; // x1
  BattleData_o *data; // x0
  BattleServantData_o *v21; // x27
  BattleServantData_o *v22; // x25
  int32_t Value; // w26
  const MethodInfo *v24; // x4
  char v25; // w20
  int v26; // w3
  BattleBuffData_o *buffData; // x28
  BattleBuffData_CheckIndividualitiesData_o *v28; // x20
  struct BattleData_o *v29; // x8
  int32_t ActualRecoveryHealPoint; // w0
  float UpDownGiveHeal; // s0
  int32_t UpDownHeal; // w0
  __int64 v34; // x26
  const MethodInfo *v35; // [xsp+8h] [xbp-68h]
  FunctionEntity_o *v36; // [xsp+10h] [xbp-60h]
  int32_t digit; // [xsp+1Ch] [xbp-54h] BYREF

  v11 = funcEnt;
  if ( (byte_42EAFF8 & 1) == 0 )
  {
    sub_B5D5C4(&BattleActionData_TypeInfo, playerId, targetId, funcEnt);
    sub_B5D5C4(&BattleBuffData_CheckIndividualitiesData_TypeInfo, v15, v16, v17);
    byte_42EAFF8 = 1;
  }
  digit = 0;
  v18 = (BattleActionData_o *)sub_B5D694(BattleActionData_TypeInfo);
  BattleActionData___ctor(v18, 0LL);
  data = this->fields.data;
  if ( !data )
    goto LABEL_24;
  data = (BattleData_o *)BattleData__getServantData(data, playerId, 0LL);
  if ( !this->fields.data )
    goto LABEL_24;
  v21 = (BattleServantData_o *)data;
  data = (BattleData_o *)BattleData__getServantData(this->fields.data, targetId, 0LL);
  if ( !baseVals )
    goto LABEL_24;
  v22 = (BattleServantData_o *)data;
  baseVals->fields.isShowForcedEffect = 0;
  Value = DataVals__GetValue(baseVals, 0LL);
  data = (BattleData_o *)DataVals__isUnaffected(baseVals, 0LL);
  if ( !v22 )
    goto LABEL_24;
  if ( ((unsigned __int8)data & 1) != 0 )
  {
    data = (BattleData_o *)BattleServantData__getMaxHp(v22, 0LL);
    v25 = 0;
    v26 = (int)data * Value / 1000;
    goto LABEL_19;
  }
  if ( ((__int64 (__fastcall *)(BattleServantData_o *, Il2CppMethodPointer))v22->klass->vtable._13_get_resultHp.method)(
         v22,
         v22->klass->vtable._14_set_resultHp.methodPtr) <= 0 )
  {
    data = (BattleData_o *)BattleServantData__isShiftableServant(v22, 0LL);
    if ( ((unsigned __int8)data & 1) != 0 )
      goto LABEL_18;
    v29 = this->fields.data;
    if ( v29 )
    {
      data = (BattleData_o *)v29->fields.battleEvent;
      if ( data )
      {
        data = (BattleData_o *)(*(__int64 (__fastcall **)(BattleData_o *, BattleServantData_o *, _QWORD))&data->klass[1]._2.initializationExceptionGCHandle)(
                                 data,
                                 v22,
                                 *(_QWORD *)&data->klass[1]._2.cctor_finished);
        if ( ((unsigned __int8)data & 1) == 0 )
        {
          data = (BattleData_o *)BattleServantData__isGuts(v22, 0LL);
          v26 = 0;
          v25 = (unsigned __int8)data ^ 1;
          goto LABEL_19;
        }
        goto LABEL_18;
      }
    }
    goto LABEL_24;
  }
  data = (BattleData_o *)BattleServantData__isShiftReady(v22, 0LL);
  if ( ((unsigned __int8)data & 1) != 0 )
  {
LABEL_18:
    v26 = 0;
    v25 = 0;
    goto LABEL_19;
  }
  v36 = v11;
  buffData = v22->fields.buffData;
  v28 = (BattleBuffData_CheckIndividualitiesData_o *)sub_B5D694(BattleBuffData_CheckIndividualitiesData_TypeInfo);
  BattleBuffData_CheckIndividualitiesData___ctor(v28, v22, 0LL, 0LL, 0LL, 0LL, 0LL);
  if ( !buffData )
LABEL_24:
    sub_B5D69C(data, v19);
  data = (BattleData_o *)BattleBuffData__isTurnBuff(buffData, 42, v28, 1, 0LL);
  if ( ((unsigned __int8)data & 1) != 0 )
  {
    v11 = v36;
    goto LABEL_18;
  }
  if ( v21 )
  {
    UpDownGiveHeal = BattleServantData__getUpDownGiveHeal(v21, v22, 0LL);
    Value = BattleUtility__FloorToInt(UpDownGiveHeal * (float)Value, 0LL);
  }
  v11 = v36;
  digit = 1;
  UpDownHeal = BattleServantData__getUpDownHeal(v22, &digit, 0LL);
  v34 = UpDownHeal * (__int64)Value / digit;
  data = (BattleData_o *)BattleServantData__getMaxHp(v22, 0LL);
  v25 = 0;
  v26 = (int)v34 * (int)data / 1000;
  baseVals->fields.isShowForcedEffect = 1;
LABEL_19:
  ActualRecoveryHealPoint = BattleLogicFunction__GetActualRecoveryHealPoint(
                              (BattleLogicFunction_o *)data,
                              baseVals,
                              v22,
                              v26,
                              v24);
  BattleLogicFunction__SetGainHpBuff(
    this,
    v18,
    ActualRecoveryHealPoint,
    funcIndex,
    v22,
    v11,
    baseVals,
    isCommandSideEffect,
    v25 & 1,
    v35);
  return v18;
}


// local variable allocation has failed, the output may be wrong!
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

  if ( (byte_42EB010 & 1) == 0 )
  {
    sub_B5D5C4(&BattleActionData_TypeInfo, (_DWORD)procArg, actorId, *(_QWORD *)&targetId);
    byte_42EB010 = 1;
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
  v14 = (BattleActionData_o *)sub_B5D694(BattleActionData_TypeInfo);
  BattleActionData___ctor(v14, 0LL);
  if ( !baseVals )
LABEL_18:
    sub_B5D69C(data, procArg);
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
  int v9; // w1
  int v10; // w2
  __int64 v11; // x3
  int v12; // w1
  int v13; // w2
  __int64 v14; // x3
  struct BattleLogicFunctionProcess_FunctionUnitCheck_o *funcUnit_k__BackingField; // x8
  DataVals_o *dataVals_k__BackingField; // x24
  BattleActionData_o *v17; // x23
  NpTurnToPointConvert_o *v18; // x26
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
  if ( (byte_42EB00E & 1) == 0 )
  {
    sub_B5D5C4(&BattleActionData_TypeInfo, (_DWORD)procArg, (_DWORD)mainAction, funcTarget);
    sub_B5D5C4(&NpGaugeAbsorbResult_TypeInfo, v9, v10, v11);
    this = (BattleLogicFunction_o *)sub_B5D5C4(&NpTurnToPointConvert_TypeInfo, v12, v13, v14);
    byte_42EB00E = 1;
  }
  if ( !funcTarget )
    goto LABEL_12;
  funcUnit_k__BackingField = funcTarget->fields._funcUnit_k__BackingField;
  if ( !funcUnit_k__BackingField )
    goto LABEL_12;
  dataVals_k__BackingField = funcUnit_k__BackingField->fields._dataVals_k__BackingField;
  v17 = (BattleActionData_o *)sub_B5D694(BattleActionData_TypeInfo);
  BattleActionData___ctor(v17, 0LL);
  v18 = (NpTurnToPointConvert_o *)sub_B5D694(NpTurnToPointConvert_TypeInfo);
  NpTurnToPointConvert___ctor(v18, 0LL);
  v19 = (NpGaugeAbsorbResult_o *)sub_B5D694(NpGaugeAbsorbResult_TypeInfo);
  NpGaugeAbsorbResult___ctor(v19, (BaseNpGaugeConvert_o *)v18, 0LL);
  this = (BattleLogicFunction_o *)BattleLogicFunction__AbsorbNpPoint(v8, mainAction, funcTarget, v19, v20);
  if ( !v17
    || (BattleActionData__addAction(v17, (BattleActionData_o *)this, 0LL),
        v22 = BattleLogicFunction__AbsorbNpTurn(v8, mainAction, funcTarget, v19, v21),
        BattleActionData__addAction(v17, v22, 0LL),
        !mainAction)
    || !v19 )
  {
LABEL_12:
    sub_B5D69C(this, procArg);
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
  BattleActionData__addAction(v17, v27, 0LL);
  return v17;
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

  if ( (byte_42EAFFC & 1) == 0 )
  {
    sub_B5D5C4(&BattleActionData_TypeInfo, targetId, (_DWORD)funcEnt, baseVals);
    byte_42EAFFC = 1;
  }
  v15 = (BattleActionData_o *)sub_B5D694(BattleActionData_TypeInfo);
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
        sub_B5D69C(data, v16);
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
        const MethodInfo *method)
{
  int v15; // w1
  int v16; // w2
  __int64 v17; // x3
  System_String_o *v18; // x0
  BattleActionData_o *v19; // x25
  BattleData_o *v20; // x1
  BattleData_o *data; // x0
  BattleServantData_o *v22; // x27
  BattleServantData_o *v23; // x28
  unsigned int v24; // w0
  int32_t v25; // w20
  bool IsOpponentPTUniqueID; // w0
  int32_t v27; // w0
  const MethodInfo *v28; // x6
  struct BattleData_o *v29; // x8
  int32_t v30; // w2
  int32_t uniqueId; // [xsp+Ch] [xbp-54h] BYREF

  uniqueId = targetId;
  if ( (byte_42EAFFB & 1) == 0 )
  {
    sub_B5D5C4(&BattleActionData_TypeInfo, playerId, targetId, funcEnt);
    sub_B5D5C4(&StringLiteral_19172/*"functionInstantDeath>>:"*/, v15, v16, v17);
    byte_42EAFFB = 1;
  }
  v18 = System_Int32__ToString((int32_t)&uniqueId, 0LL);
  System_String__Concat_44577788((System_String_o *)StringLiteral_19172/*"functionInstantDeath>>:"*/, v18, 0LL);
  v19 = (BattleActionData_o *)sub_B5D694(BattleActionData_TypeInfo);
  BattleActionData___ctor(v19, 0LL);
  data = this->fields.data;
  if ( !data )
    goto LABEL_15;
  data = (BattleData_o *)BattleData__getServantData(data, uniqueId, 0LL);
  if ( !this->fields.data )
    goto LABEL_15;
  v22 = (BattleServantData_o *)data;
  data = (BattleData_o *)BattleData__getServantData(this->fields.data, playerId, 0LL);
  if ( !v22 )
    goto LABEL_15;
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
    goto LABEL_15;
  data = (BattleData_o *)BattleLogic__getWave((BattleLogic_o *)data, 0LL);
  if ( !this->fields.data )
    goto LABEL_15;
  v25 = (int)data;
  IsOpponentPTUniqueID = BattleData__IsOpponentPTUniqueID(this->fields.data, uniqueId, playerId, 0LL);
  BattleServantData__setActionHistory(v22, playerId, 4, v25, IsOpponentPTUniqueID, 0LL);
  v27 = ((__int64 (__fastcall *)(BattleServantData_o *, Il2CppMethodPointer))v22->klass->vtable._13_get_resultHp.method)(
          v22,
          v22->klass->vtable._14_set_resultHp.methodPtr);
  BattleServantData__ResultDamage(v22, v27, v23, 0LL, 0, 0LL);
  v29 = this->fields.data;
  if ( !v29 )
    goto LABEL_15;
  v30 = v22->fields.uniqueId;
  v22->fields.deadTurn = v29->fields.typeTurn;
  data = (BattleData_o *)BattleLogicFunction__getFunctionObject(
                           (BattleLogicFunction_o *)data,
                           funcEnt,
                           v30,
                           funcIndex,
                           isCommandSideEffect,
                           0LL,
                           v28);
  if ( !data )
    goto LABEL_15;
  HIDWORD(data->fields.rootfsm) = 1;
  v20 = data;
  if ( uniqueId == playerId || isNoAccumulation )
    BYTE1(data->fields.quest_ent) = 1;
  if ( !v19 )
LABEL_15:
    sub_B5D69C(data, v20);
  BattleActionData__setBuffData(v19, (BattleActionData_BuffData_o *)data, baseVals, 0LL);
  return v19;
}


// local variable allocation has failed, the output may be wrong!
BattleActionData_o *__fastcall BattleLogicFunction__functionLossNp(
        BattleLogicFunction_o *this,
        BattleLogicFunction_ProcListInArgs_o *procArg,
        int32_t actorId,
        int32_t targetId,
        DataVals_o *baseVals,
        int32_t *diffNp,
        const MethodInfo *method)
{
  int v12; // w1
  int v13; // w2
  __int64 v14; // x3
  BattleData_o *data; // x0
  BattleServantData_o *v16; // x22
  BattleActionData_o *v17; // x24
  int32_t np; // w24
  int32_t Value; // w0
  int32_t v20; // w0
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

  if ( (byte_42EB00F & 1) == 0 )
  {
    sub_B5D5C4(&BattleActionData_TypeInfo, (_DWORD)procArg, actorId, *(_QWORD *)&targetId);
    sub_B5D5C4(&BattleDataDefine_TypeInfo, v12, v13, v14);
    byte_42EB00F = 1;
  }
  *diffNp = 0;
  data = this->fields.data;
  if ( !data )
    goto LABEL_22;
  data = (BattleData_o *)BattleData__getServantData(data, targetId, 0LL);
  if ( !data )
    goto LABEL_22;
  v16 = (BattleServantData_o *)data;
  v17 = 0LL;
  if ( BattleServantData__checkPlayer((BattleServantData_o *)data, 0LL) )
  {
    data = (BattleData_o *)BattleServantData__isLogicResultAlive(v16, 0LL);
    if ( ((unsigned __int8)data & 1) != 0
      || (data = (BattleData_o *)BattleServantData__isGuts(v16, 0LL), v17 = 0LL, ((unsigned __int8)data & 1) != 0) )
    {
      if ( baseVals )
      {
        np = v16->fields.np;
        Value = DataVals__GetValue(baseVals, 0LL);
        v20 = BattleServantData__addNp(v16, -Value, 0, 0LL);
        v21 = np - v20;
        *diffNp = v21;
        v22 = v20;
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
          BattleServantData__addNp(v16, v26, 0, 0LL);
          *diffNp -= v26;
        }
        v17 = (BattleActionData_o *)sub_B5D694(BattleActionData_TypeInfo);
        BattleActionData___ctor(v17, 0LL);
        if ( procArg )
        {
          funcIndex = baseVals->fields.funcIndex;
          uniqueId = v16->fields.uniqueId;
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
            if ( v17 )
            {
              BattleActionData__setBuffData(v17, v32, baseVals, 0LL);
              return v17;
            }
          }
        }
      }
LABEL_22:
      sub_B5D69C(data, procArg);
    }
  }
  return v17;
}


BattleActionData_o *__fastcall BattleLogicFunction__functionMissState(
        BattleLogicFunction_o *this,
        int32_t targetId,
        const MethodInfo *method)
{
  __int64 v3; // x3
  BattleActionData_o *v4; // x19

  if ( (byte_42EAFF3 & 1) == 0 )
  {
    sub_B5D5C4(&BattleActionData_TypeInfo, targetId, (_DWORD)method, v3);
    byte_42EAFF3 = 1;
  }
  v4 = (BattleActionData_o *)sub_B5D694(BattleActionData_TypeInfo);
  BattleActionData___ctor(v4, 0LL);
  return v4;
}


void __fastcall BattleLogicFunction__functionMovePosition(
        BattleLogicFunction_o *this,
        BattleActionData_o *actionData,
        BattleServantData_o *targetData,
        const MethodInfo *method)
{
  int v7; // w1
  int v8; // w2
  __int64 v9; // x3
  int v10; // w1
  int v11; // w2
  __int64 v12; // x3
  int v13; // w1
  int v14; // w2
  __int64 v15; // x3
  int v16; // w1
  int v17; // w2
  __int64 v18; // x3
  int v19; // w1
  int v20; // w2
  __int64 v21; // x3
  int v22; // w1
  int v23; // w2
  __int64 v24; // x3
  int v25; // w1
  int v26; // w2
  __int64 v27; // x3
  int v28; // w1
  int v29; // w2
  __int64 v30; // x3
  __int64 v31; // x22
  __int64 v32; // x22
  DataManager_o *MasterData_WarQuestSelectionMaster; // x0
  SkillLvMaster_o *v34; // x22
  struct BattleSkillInfoData_o *skillInfo; // x8
  SkillLvEntity_o *v36; // x22
  int32_t MovePositionUp; // w23
  int32_t MovePositionDown; // w0
  int v39; // w24
  int v40; // w25
  struct DataMasterBase_array *datalist; // x8
  __int64 v42; // x9
  int i; // w10
  int v44; // w11
  int v45; // w10
  BattleServantData_o *v46; // x23
  struct BattleData_o *data; // x8
  __int64 *v48; // x8
  System_Int32_array **v49; // x21
  __int64 v50; // x22
  System_String_array **v51; // x2
  System_String_array **v52; // x3
  System_Boolean_array **v53; // x4
  System_Int32_array **v54; // x5
  System_Int32_array *v55; // x6
  System_Int32_array *v56; // x7
  __int64 v57; // x0

  if ( (byte_42EB015 & 1) == 0 )
  {
    sub_B5D5C4(&BattleActionData_TypeInfo, (_DWORD)actionData, (_DWORD)targetData, method);
    sub_B5D5C4(&Method_DataManager_GetMasterData_SkillLvMaster___, v7, v8, v9);
    sub_B5D5C4(&Method_SingletonMonoBehaviour_DataManager__getInstance__, v10, v11, v12);
    sub_B5D5C4(&StringLiteral_6450/*"FOCUS_UP_EX"*/, v13, v14, v15);
    sub_B5D5C4(&StringLiteral_6448/*"FOCUS_UNDER_EX"*/, v16, v17, v18);
    sub_B5D5C4(&StringLiteral_6446/*"FOCUS_CENTER_EX"*/, v19, v20, v21);
    sub_B5D5C4(&StringLiteral_6447/*"FOCUS_UNDER"*/, v22, v23, v24);
    sub_B5D5C4(&StringLiteral_6445/*"FOCUS_CENTER"*/, v25, v26, v27);
    sub_B5D5C4(&StringLiteral_6449/*"FOCUS_UP"*/, v28, v29, v30);
    byte_42EB015 = 1;
  }
  v31 = *((_QWORD *)Method_SingletonMonoBehaviour_DataManager__getInstance__ + 3);
  if ( (*(_BYTE *)(v31 + 306) & 1) == 0 )
    sub_AF52C4(*((_QWORD *)Method_SingletonMonoBehaviour_DataManager__getInstance__ + 3));
  v32 = **(_QWORD **)(v31 + 192);
  if ( (*(_BYTE *)(v32 + 306) & 1) == 0 )
    sub_AF52C4(v32);
  MasterData_WarQuestSelectionMaster = **(DataManager_o ***)(v32 + 184);
  if ( !MasterData_WarQuestSelectionMaster )
    goto LABEL_23;
  MasterData_WarQuestSelectionMaster = (DataManager_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                          MasterData_WarQuestSelectionMaster,
                                                          (const MethodInfo_1AE424C *)Method_DataManager_GetMasterData_SkillLvMaster___);
  if ( !actionData )
    goto LABEL_23;
  v34 = (SkillLvMaster_o *)MasterData_WarQuestSelectionMaster;
  MasterData_WarQuestSelectionMaster = (DataManager_o *)actionData->fields.skillInfo;
  if ( !MasterData_WarQuestSelectionMaster )
    goto LABEL_23;
  MasterData_WarQuestSelectionMaster = (DataManager_o *)((__int64 (__fastcall *)(DataManager_o *, void *))MasterData_WarQuestSelectionMaster->klass[1]._1.namespaze)(
                                                          MasterData_WarQuestSelectionMaster,
                                                          MasterData_WarQuestSelectionMaster->klass[1]._1.byval_arg.data);
  skillInfo = actionData->fields.skillInfo;
  if ( !skillInfo )
    goto LABEL_23;
  if ( !v34 )
    goto LABEL_23;
  MasterData_WarQuestSelectionMaster = (DataManager_o *)SkillLvMaster__GetEntity(
                                                          v34,
                                                          (int32_t)MasterData_WarQuestSelectionMaster,
                                                          skillInfo->fields.skilllv,
                                                          0LL);
  if ( !MasterData_WarQuestSelectionMaster )
    goto LABEL_23;
  v36 = (SkillLvEntity_o *)MasterData_WarQuestSelectionMaster;
  MovePositionUp = SkillLvEntity__getMovePositionUp((SkillLvEntity_o *)MasterData_WarQuestSelectionMaster, 0LL);
  MovePositionDown = SkillLvEntity__getMovePositionDown(v36, 0LL);
  if ( (MovePositionUp & MovePositionDown) != -1 )
  {
    v39 = MovePositionDown;
    MasterData_WarQuestSelectionMaster = (DataManager_o *)this->fields.data;
    if ( !MasterData_WarQuestSelectionMaster )
      goto LABEL_23;
    MasterData_WarQuestSelectionMaster = (DataManager_o *)BattleData__getTargetEnemyId(
                                                            (BattleData_o *)MasterData_WarQuestSelectionMaster,
                                                            0,
                                                            0LL);
    if ( !this->fields.data )
      goto LABEL_23;
    v40 = (int)MasterData_WarQuestSelectionMaster;
    BattleData__getServantData(this->fields.data, (int32_t)MasterData_WarQuestSelectionMaster, 0LL);
    MasterData_WarQuestSelectionMaster = (DataManager_o *)this->fields.data;
    if ( !MasterData_WarQuestSelectionMaster )
      goto LABEL_23;
    datalist = MasterData_WarQuestSelectionMaster[2].fields.datalist;
    if ( !datalist )
      goto LABEL_23;
    v42 = *(_QWORD *)&datalist->max_length;
    for ( i = 0; ; ++i )
    {
      if ( i >= (int)v42 )
        return;
      if ( i >= (unsigned int)v42 )
        goto LABEL_50;
      if ( v40 == *((_DWORD *)datalist->m_Items + i) )
        break;
    }
    v44 = MovePositionUp > 0 ? -MovePositionUp : v39;
    v45 = v44 + i;
    if ( v45 >= 0 && v45 < (int)v42 )
    {
      if ( v45 >= (unsigned int)v42 )
      {
LABEL_50:
        v57 = sub_B5D6C8(MasterData_WarQuestSelectionMaster);
        sub_B5D668(v57, 0LL);
      }
      MasterData_WarQuestSelectionMaster = (DataManager_o *)BattleData__getServantData(
                                                              (BattleData_o *)MasterData_WarQuestSelectionMaster,
                                                              *((_DWORD *)datalist->m_Items + v45),
                                                              0LL);
      if ( !MasterData_WarQuestSelectionMaster )
        goto LABEL_23;
      v46 = (BattleServantData_o *)MasterData_WarQuestSelectionMaster;
      MasterData_WarQuestSelectionMaster = (DataManager_o *)BattleServantData__isAlive(
                                                              (BattleServantData_o *)MasterData_WarQuestSelectionMaster,
                                                              0,
                                                              0LL);
      if ( ((unsigned __int8)MasterData_WarQuestSelectionMaster & 1) != 0 )
      {
        data = this->fields.data;
        if ( !data )
          goto LABEL_23;
        data->fields.globaltargetId = v46->fields.uniqueId;
        if ( BattleServantData__isMultiTargetUp(v46, 0LL) )
        {
          if ( SkillLvEntity__IsAress(v36, 0LL) )
            v48 = &StringLiteral_6450/*"FOCUS_UP_EX"*/;
          else
            v48 = &StringLiteral_6449/*"FOCUS_UP"*/;
        }
        else if ( BattleServantData__isMultiTargetCore(v46, 0LL) )
        {
          if ( SkillLvEntity__IsAress(v36, 0LL) )
            v48 = &StringLiteral_6446/*"FOCUS_CENTER_EX"*/;
          else
            v48 = &StringLiteral_6445/*"FOCUS_CENTER"*/;
        }
        else
        {
          v49 = 0LL;
          if ( !BattleServantData__isMultiTargetUnder(v46, 0LL) )
          {
LABEL_47:
            v50 = sub_B5D694(BattleActionData_TypeInfo);
            BattleActionData___ctor((BattleActionData_o *)v50, 0LL);
            if ( targetData && v50 )
            {
              *(_DWORD *)(v50 + 32) = targetData->fields.uniqueId;
              *(_DWORD *)(v50 + 36) = actionData->fields.targetId;
              BattleActionData__setStateField((BattleActionData_o *)v50, 0LL);
              *(_QWORD *)(v50 + 64) = v49;
              sub_B5D560((BattleServantConfConponent_o *)(v50 + 64), v49, v51, v52, v53, v54, v55, v56);
              BattleActionData__AddAfterActionData(actionData, (BattleActionData_o *)v50, 0, 0LL);
              return;
            }
LABEL_23:
            sub_B5D69C(MasterData_WarQuestSelectionMaster, actionData);
          }
          if ( SkillLvEntity__IsAress(v36, 0LL) )
            v48 = &StringLiteral_6448/*"FOCUS_UNDER_EX"*/;
          else
            v48 = &StringLiteral_6447/*"FOCUS_UNDER"*/;
        }
        v49 = (System_Int32_array **)*v48;
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
  int v8; // w1
  int v9; // w2
  __int64 v10; // x3
  int v11; // w1
  int v12; // w2
  __int64 v13; // x3
  int v14; // w1
  int v15; // w2
  __int64 v16; // x3
  int v17; // w1
  int v18; // w2
  __int64 v19; // x3
  int v20; // w1
  int v21; // w2
  __int64 v22; // x3
  int v23; // w1
  int v24; // w2
  __int64 v25; // x3
  int v26; // w1
  int v27; // w2
  __int64 v28; // x3
  int v29; // w1
  int v30; // w2
  __int64 v31; // x3
  int v32; // w1
  int v33; // w2
  __int64 v34; // x3
  int v35; // w1
  int v36; // w2
  __int64 v37; // x3
  int v38; // w1
  int v39; // w2
  __int64 v40; // x3
  int v41; // w1
  int v42; // w2
  __int64 v43; // x3
  int v44; // w1
  int v45; // w2
  __int64 v46; // x3
  int v47; // w1
  int v48; // w2
  __int64 v49; // x3
  int v50; // w1
  int v51; // w2
  __int64 v52; // x3
  int v53; // w1
  int v54; // w2
  __int64 v55; // x3
  __int64 v56; // x19
  RemovedBuffInfoGroup_o *StealBuffInfoGroup; // x0
  __int64 v58; // x1
  const MethodInfo *v59; // x4
  struct BattleLogicFunctionProcess_FunctionUnitCheck_o *funcUnit_k__BackingField; // x8
  int32_t targetId_k__BackingField; // w26
  DataVals_o *dataVals_k__BackingField; // x20
  RemovedBuffInfoGroup_o *v63; // x24
  BattleServantData_o *ServantData; // x25
  const MethodInfo *v65; // x4
  System_Collections_Generic_IEnumerable_TSource__o *v66; // x26
  System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *v67; // x27
  System_Collections_Generic_IEnumerable_T__o *v68; // x26
  System_Collections_Generic_HashSet_BattleBuffData_BuffData__o *v69; // x27
  System_String_array **v70; // x2
  System_String_array **v71; // x3
  System_Boolean_array **v72; // x4
  System_Int32_array **v73; // x5
  System_Int32_array *v74; // x6
  System_Int32_array *v75; // x7
  System_Collections_Generic_IEnumerable_TSource__o *v76; // x24
  System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *v77; // x26
  System_Collections_Generic_IEnumerable_TSource__o *v78; // x0
  RemovedBuffInfoGroup_o *v79; // x26
  System_Collections_Generic_List_int__o *v80; // x27
  int klass; // w8
  BattleLogicFunction_o *v82; // x21
  DataMasterBase_WarMaster__WarEntity__int__o *v83; // x28
  __int64 v84; // x22
  __int64 v85; // x24
  BattleBuffData_BuffData_o *v86; // x19
  const MethodInfo *v87; // x2
  const MethodInfo *v88; // x3
  int32_t DispTurn; // w0
  _BOOL4 isProgressSelfTurn; // w8
  BattleActionData_BuffData_o *v91; // x24
  struct FunctionEntity_o *funcEnt; // x21
  bool IsCommandSideEffect; // w0
  System_Int32_array **v94; // x0
  System_String_array **v95; // x2
  System_String_array **v96; // x3
  System_Boolean_array **v97; // x4
  System_Int32_array **v98; // x5
  System_Int32_array *v99; // x6
  System_Int32_array *v100; // x7
  int32_t funcIndex; // w19
  bool v102; // w0
  const MethodInfo *v103; // x7
  __int64 v104; // x0
  BattleLogicFunction_ProcListInArgs_o *v105; // [xsp+0h] [xbp-80h]
  BattleLogicFunctionProcess_FunctionTargetCheck_o *v106; // [xsp+8h] [xbp-78h]
  int32_t v107; // [xsp+14h] [xbp-6Ch]
  BattleActionData_o *v108; // [xsp+18h] [xbp-68h]
  WarEntity_o *entity; // [xsp+28h] [xbp-58h] BYREF

  if ( (byte_42EB019 & 1) == 0 )
  {
    sub_B5D5C4(&BattleActionData_BuffData_TypeInfo, (_DWORD)procArg, (_DWORD)mainAction, funcTarget);
    sub_B5D5C4(&Method_DataManager_GetMasterData_BuffMaster___, v8, v9, v10);
    sub_B5D5C4(&Method_DataMasterBase_BuffMaster__BuffEntity__int__TryGetEntity__, v11, v12, v13);
    sub_B5D5C4(&Method_System_Linq_Enumerable_ToArray_BattleBuffData_BuffData___, v14, v15, v16);
    sub_B5D5C4(&Method_System_Linq_Enumerable_Where_BattleBuffData_BuffData___, v17, v18, v19);
    sub_B5D5C4(&Method_System_Func_BattleBuffData_BuffData__bool___ctor__, v20, v21, v22);
    sub_B5D5C4(&System_Func_BattleBuffData_BuffData__bool__TypeInfo, v23, v24, v25);
    sub_B5D5C4(&Method_System_Collections_Generic_HashSet_BattleBuffData_BuffData___ctor___68717232, v26, v27, v28);
    sub_B5D5C4(&System_Collections_Generic_HashSet_BattleBuffData_BuffData__TypeInfo, v29, v30, v31);
    sub_B5D5C4(&Method_System_Collections_Generic_List_int__Add__, v32, v33, v34);
    sub_B5D5C4(&Method_System_Collections_Generic_List_int__ToArray__, v35, v36, v37);
    sub_B5D5C4(&Method_System_Collections_Generic_List_int___ctor___68740224, v38, v39, v40);
    sub_B5D5C4(&System_Collections_Generic_List_int__TypeInfo, v41, v42, v43);
    sub_B5D5C4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v44, v45, v46);
    sub_B5D5C4(&Method_BattleLogicFunction___c__DisplayClass108_0__functionMoveState_b__0__, v47, v48, v49);
    sub_B5D5C4(&Method_BattleLogicFunction___c__DisplayClass108_0__functionMoveState_b__1__, v50, v51, v52);
    sub_B5D5C4(&BattleLogicFunction___c__DisplayClass108_0_TypeInfo, v53, v54, v55);
    byte_42EB019 = 1;
  }
  entity = 0LL;
  v56 = sub_B5D694(BattleLogicFunction___c__DisplayClass108_0_TypeInfo);
  BattleLogicFunction___c__DisplayClass108_0___ctor((BattleLogicFunction___c__DisplayClass108_0_o *)v56, 0LL);
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
                         v59);
  if ( !this->fields.data )
    goto LABEL_42;
  v63 = StealBuffInfoGroup;
  ServantData = BattleData__getServantData(this->fields.data, targetId_k__BackingField, 0LL);
  BattleLogicFunction__ResetFamilyLinkageIdToStolenFamilyBuffs(
    (BattleLogicFunction_o *)ServantData,
    procArg,
    ServantData,
    v63,
    v65);
  if ( !v56 )
    goto LABEL_42;
  v107 = targetId_k__BackingField;
  v106 = funcTarget;
  v108 = mainAction;
  *(_DWORD *)(v56 + 16) = 0x1000000;
  if ( !v63 )
    goto LABEL_42;
  v66 = (System_Collections_Generic_IEnumerable_TSource__o *)RemovedBuffInfoGroup__RemovedLinkageBuffEnumerable(
                                                               v63,
                                                               0LL);
  v67 = (System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *)sub_B5D694(System_Func_BattleBuffData_BuffData__bool__TypeInfo);
  System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool____ctor(
    v67,
    (Il2CppObject *)v56,
    Method_BattleLogicFunction___c__DisplayClass108_0__functionMoveState_b__0__,
    (const MethodInfo_2C2ECD0 *)Method_System_Func_BattleBuffData_BuffData__bool___ctor__);
  v68 = (System_Collections_Generic_IEnumerable_T__o *)System_Linq_Enumerable__Where_WarBoardManager_WarBoardOnboardSkillTarget_(
                                                         v66,
                                                         (System_Func_TSource__bool__o *)v67,
                                                         (const MethodInfo_1CBBF10 *)Method_System_Linq_Enumerable_Where_BattleBuffData_BuffData___);
  v69 = (System_Collections_Generic_HashSet_BattleBuffData_BuffData__o *)sub_B5D694(System_Collections_Generic_HashSet_BattleBuffData_BuffData__TypeInfo);
  System_Collections_Generic_HashSet_BattleBuffData_BuffData____ctor(
    v69,
    v68,
    (const MethodInfo_2505F24 *)Method_System_Collections_Generic_HashSet_BattleBuffData_BuffData___ctor___68717232);
  *(_QWORD *)(v56 + 24) = v69;
  sub_B5D560((BattleServantConfConponent_o *)(v56 + 24), (System_Int32_array **)v69, v70, v71, v72, v73, v74, v75);
  v76 = (System_Collections_Generic_IEnumerable_TSource__o *)RemovedBuffInfoGroup__RemovedAllBuffEnumerable(v63, 0LL);
  v77 = (System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *)sub_B5D694(System_Func_BattleBuffData_BuffData__bool__TypeInfo);
  System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool____ctor(
    v77,
    (Il2CppObject *)v56,
    Method_BattleLogicFunction___c__DisplayClass108_0__functionMoveState_b__1__,
    (const MethodInfo_2C2ECD0 *)Method_System_Func_BattleBuffData_BuffData__bool___ctor__);
  v78 = System_Linq_Enumerable__Where_WarBoardManager_WarBoardOnboardSkillTarget_(
          v76,
          (System_Func_TSource__bool__o *)v77,
          (const MethodInfo_1CBBF10 *)Method_System_Linq_Enumerable_Where_BattleBuffData_BuffData___);
  StealBuffInfoGroup = (RemovedBuffInfoGroup_o *)System_Linq_Enumerable__ToArray_DrawLotsDisplayMessage_DisplayedInGroup_SaveData_(
                                                   v78,
                                                   (const MethodInfo_1CB7860 *)Method_System_Linq_Enumerable_ToArray_BattleBuffData_BuffData___);
  if ( !StealBuffInfoGroup )
    goto LABEL_42;
  v79 = StealBuffInfoGroup;
  if ( StealBuffInfoGroup[1].klass )
  {
    v105 = procArg;
    v80 = (System_Collections_Generic_List_int__o *)sub_B5D694(System_Collections_Generic_List_int__TypeInfo);
    System_Collections_Generic_List_int____ctor(
      v80,
      (const MethodInfo_30836B0 *)Method_System_Collections_Generic_List_int___ctor___68740224);
    StealBuffInfoGroup = (RemovedBuffInfoGroup_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !StealBuffInfoGroup )
      goto LABEL_42;
    StealBuffInfoGroup = (RemovedBuffInfoGroup_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                     (DataManager_o *)StealBuffInfoGroup,
                                                     (const MethodInfo_1AE424C *)Method_DataManager_GetMasterData_BuffMaster___);
    klass = (int)v79[1].klass;
    v82 = this;
    if ( klass >= 1 )
    {
      v83 = (DataMasterBase_WarMaster__WarEntity__int__o *)StealBuffInfoGroup;
      v84 = 0LL;
      v85 = 0LL;
      do
      {
        if ( (unsigned int)v84 >= klass )
        {
          v104 = sub_B5D6C8(StealBuffInfoGroup);
          sub_B5D668(v104, 0LL);
        }
        v86 = (BattleBuffData_BuffData_o *)*((_QWORD *)&v79[1].monitor + v84);
        if ( !v86 || !v83 )
          goto LABEL_42;
        StealBuffInfoGroup = (RemovedBuffInfoGroup_o *)DataMasterBase_WarMaster__WarEntity__int___TryGetEntity(
                                                         v83,
                                                         &entity,
                                                         v86->fields.buffId,
                                                         (const MethodInfo_23FAE6C *)Method_DataMasterBase_BuffMaster__BuffEntity__int__TryGetEntity__);
        if ( ((unsigned __int8)StealBuffInfoGroup & 1) != 0 )
        {
          StealBuffInfoGroup = (RemovedBuffInfoGroup_o *)BattleLogicFunction__IsAddStateFieldFlag(v82, v86, v87);
          if ( !ServantData )
            goto LABEL_42;
          BattleServantData__addBuff(ServantData, v86, (unsigned __int8)StealBuffInfoGroup & 1, 0, 1, 0LL);
          StealBuffInfoGroup = (RemovedBuffInfoGroup_o *)entity;
          if ( !entity )
            goto LABEL_42;
          if ( !BuffEntity__IsDisableMoveStateTurnChange((BuffEntity_o *)entity, 0LL) )
          {
            if ( v86->fields.turn <= 0 )
            {
              isProgressSelfTurn = v86->fields.isProgressSelfTurn;
            }
            else
            {
              DispTurn = BattleBuffData_BuffData__get_DispTurn(v86, 0LL);
              isProgressSelfTurn = v86->fields.isProgressSelfTurn;
              v86->fields.turn = 2 * DispTurn - isProgressSelfTurn;
            }
            v86->fields.isProgressEndEnemyTurn = ServantData->fields.isEnemy ^ !isProgressSelfTurn;
          }
          BattleLogicFunction__AfterAddedBuffProcess(v82, ServantData, (BuffEntity_o *)entity, v88);
          if ( v85 )
          {
            if ( !v80 )
              goto LABEL_42;
            System_Collections_Generic_List_int___Add(
              v80,
              v86->fields.addOrder,
              (const MethodInfo_308440C *)Method_System_Collections_Generic_List_int__Add__);
          }
          else
          {
            v91 = (BattleActionData_BuffData_o *)sub_B5D694(BattleActionData_BuffData_TypeInfo);
            BattleActionData_BuffData___ctor(v91, 0LL);
            if ( !v91 )
              goto LABEL_42;
            v91->fields.targetId = v107;
            if ( !dataVals_k__BackingField )
              goto LABEL_42;
            StealBuffInfoGroup = (RemovedBuffInfoGroup_o *)v105;
            v91->fields.functionIndex = dataVals_k__BackingField->fields.funcIndex;
            if ( !v105 )
              goto LABEL_42;
            funcEnt = dataVals_k__BackingField->fields.funcEnt;
            IsCommandSideEffect = BattleLogicFunction_ProcListInArgs__get_IsCommandSideEffect(v105, 0LL);
            v85 = ((__int64 (__fastcall *)(BattleLogicFunctionProcess_FunctionTargetCheck_o *, BattleActionData_BuffData_o *, BattleBuffData_BuffData_o *, struct FunctionEntity_o *, bool, Il2CppMethodPointer))v106->klass->vtable._10_MakeAddActionBuffData.method)(
                    v106,
                    v91,
                    v86,
                    funcEnt,
                    IsCommandSideEffect,
                    v106->klass->vtable._11_GetConvertBuffEntity.methodPtr);
            StealBuffInfoGroup = (RemovedBuffInfoGroup_o *)v108;
            if ( !v108 )
              goto LABEL_42;
            BattleActionData__setBuffData(v108, (BattleActionData_BuffData_o *)v85, dataVals_k__BackingField, 0LL);
            v82 = this;
            StealBuffInfoGroup = (RemovedBuffInfoGroup_o *)this->fields.data;
            if ( !StealBuffInfoGroup )
              goto LABEL_42;
            BattleData__AddFreshBuffList((BattleData_o *)StealBuffInfoGroup, (BattleActionData_BuffData_o *)v85, 0LL);
          }
        }
        klass = (int)v79[1].klass;
        ++v84;
      }
      while ( (int)v84 < klass );
      if ( v85 )
      {
        if ( v80 )
        {
          v94 = (System_Int32_array **)System_Collections_Generic_List_int___ToArray(
                                         v80,
                                         (const MethodInfo_3086518 *)Method_System_Collections_Generic_List_int__ToArray__);
          *(_QWORD *)(v85 + 144) = v94;
          sub_B5D560((BattleServantConfConponent_o *)(v85 + 144), v94, v95, v96, v97, v98, v99, v100);
          return;
        }
LABEL_42:
        sub_B5D69C(StealBuffInfoGroup, v58);
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
    v102 = BattleLogicFunction_ProcListInArgs__get_IsCommandSideEffect(procArg, 0LL);
    StealBuffInfoGroup = (RemovedBuffInfoGroup_o *)BattleLogicFunction__getNoEffectObject(
                                                     this,
                                                     v107,
                                                     funcIndex,
                                                     dataVals_k__BackingField,
                                                     v102,
                                                     0LL,
                                                     0LL,
                                                     v103);
    if ( !mainAction )
      goto LABEL_42;
    BattleActionData__addAction(mainAction, (BattleActionData_o *)StealBuffInfoGroup, 0LL);
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
  int v15; // w1
  int v16; // w2
  __int64 v17; // x3
  int v18; // w1
  int v19; // w2
  __int64 v20; // x3
  int v21; // w1
  int v22; // w2
  __int64 v23; // x3
  int v24; // w1
  int v25; // w2
  __int64 v26; // x3
  int v27; // w1
  int v28; // w2
  __int64 v29; // x3
  int v30; // w1
  int v31; // w2
  __int64 v32; // x3
  int v33; // w1
  int v34; // w2
  __int64 v35; // x3
  int v36; // w1
  int v37; // w2
  __int64 v38; // x3
  BattleActionData_o *v39; // x23
  __int64 v40; // x1
  BattleData_o *data; // x0
  BattleData_o *v42; // x8
  BattleServantData_o *v43; // x22
  BattleServantData_o *ServantData; // x21
  System_Collections_Generic_List_int__o *v45; // x27
  System_Int32_array *TargetRarityList; // x28
  char v47; // w21
  int32_t v48; // w1
  int32_t Param; // w0
  int v50; // w8
  char v51; // w10
  System_Int32_array *buffIndv; // x20
  System_Int32_array *v53; // x22
  bool v54; // w9
  bool v55; // zf
  int32_t v56; // w0
  int32_t v57; // w0
  int32_t v58; // w0
  int32_t v59; // w0
  int32_t v60; // w0
  System_Array_o *v61; // x21
  bool v62; // w22
  bool IsOverChargeState; // w0
  int32_t NPFixedDamageValue; // w23
  BattleLogic_DamageProcessArgs_o *damageProcessArgs; // x26
  BattleLogic_o *logic; // x24
  System_Int32_array *v67; // x27
  bool IsIncludeIgnoreIndividuality; // w23
  BattleActionData_DamageData_o *v69; // x20
  char v70; // w22
  __int64 v72; // x0
  bool v73; // [xsp+34h] [xbp-8Ch]
  bool isRarityAtk; // [xsp+38h] [xbp-88h]
  int32_t typea; // [xsp+3Ch] [xbp-84h]
  BattleServantData_o *v76; // [xsp+40h] [xbp-80h]
  BattleServantData_o *v77; // [xsp+48h] [xbp-78h]
  BattleActionData_o *v78; // [xsp+58h] [xbp-68h]
  int32_t v79; // [xsp+64h] [xbp-5Ch]
  System_RuntimeFieldHandle_o v80; // 0:w1.4

  if ( (byte_42EAFF5 & 1) == 0 )
  {
    sub_B5D5C4(&BattleActionData_TypeInfo, playerId, targetId, baseVals);
    sub_B5D5C4(&BattleLogic_DamageProcessArgs_TypeInfo, v15, v16, v17);
    sub_B5D5C4(&int___TypeInfo, v18, v19, v20);
    sub_B5D5C4(&Method_System_Collections_Generic_List_int__Add__, v21, v22, v23);
    sub_B5D5C4(&Method_System_Collections_Generic_List_int__ToArray__, v24, v25, v26);
    sub_B5D5C4(&Method_System_Collections_Generic_List_int___ctor___68740224, v27, v28, v29);
    sub_B5D5C4(&System_Collections_Generic_List_int__TypeInfo, v30, v31, v32);
    sub_B5D5C4(&DataVals_OverChargeState___TypeInfo, v33, v34, v35);
    sub_B5D5C4(
      &Field__PrivateImplementationDetails__44BE0EBF7C907BA44AD83314C6AD0AA399AD5B73911C129D2CD6A85D4A056C90,
      v36,
      v37,
      v38);
    byte_42EAFF5 = 1;
  }
  v39 = (BattleActionData_o *)sub_B5D694(BattleActionData_TypeInfo);
  BattleActionData___ctor(v39, 0LL);
  data = this->fields.data;
  if ( !data )
    goto LABEL_38;
  data = (BattleData_o *)BattleData__getServantData(data, playerId, 0LL);
  v42 = this->fields.data;
  if ( !v42 )
    goto LABEL_38;
  v43 = (BattleServantData_o *)data;
  ServantData = BattleData__getServantData(v42, targetId, 0LL);
  v45 = (System_Collections_Generic_List_int__o *)sub_B5D694(System_Collections_Generic_List_int__TypeInfo);
  System_Collections_Generic_List_int____ctor(
    v45,
    (const MethodInfo_30836B0 *)Method_System_Collections_Generic_List_int___ctor___68740224);
  if ( !baseVals
    || (v76 = ServantData,
        v78 = v39,
        v79 = funcIndex,
        data = (BattleData_o *)DataVals__GetParam(baseVals, 3, 0, 0LL),
        !v45) )
  {
LABEL_38:
    sub_B5D69C(data, v40);
  }
  System_Collections_Generic_List_int___Add(
    v45,
    (int32_t)data,
    (const MethodInfo_308440C *)Method_System_Collections_Generic_List_int__Add__);
  TargetRarityList = 0LL;
  v47 = 0;
  v77 = v43;
  typea = type;
  if ( (unsigned int)type > 0xB )
  {
LABEL_26:
    v51 = 0;
    v54 = 0;
    buffIndv = 0LL;
    v53 = 0LL;
    goto LABEL_29;
  }
  if ( ((1 << type) & 0x698) != 0 )
  {
    v48 = 7;
    goto LABEL_12;
  }
  if ( ((1 << type) & 0x60) != 0 )
  {
    v48 = 6;
LABEL_12:
    Param = DataVals__GetParam(baseVals, v48, 0, 0LL);
    System_Collections_Generic_List_int___Add(
      v45,
      Param,
      (const MethodInfo_308440C *)Method_System_Collections_Generic_List_int__Add__);
    v50 = type - 3;
    TargetRarityList = 0LL;
    v47 = 0;
    v51 = 0;
    buffIndv = 0LL;
    v53 = 0LL;
    v54 = 0;
    switch ( v50 )
    {
      case 0:
      case 1:
        v53 = (System_Int32_array *)sub_B5D5DC(int___TypeInfo, 1LL);
        data = (BattleData_o *)DataVals__GetParam(baseVals, 6, 0, 0LL);
        if ( !v53 )
          goto LABEL_38;
        if ( !v53->max_length )
          goto LABEL_39;
        v47 = 0;
        v51 = 0;
        TargetRarityList = 0LL;
        v54 = 0;
        buffIndv = 0LL;
        v53->m_Items[1] = (int)data;
        break;
      case 2:
      case 3:
      case 5:
        goto LABEL_29;
      case 4:
        buffIndv = (System_Int32_array *)sub_B5D5DC(int___TypeInfo, 1LL);
        data = (BattleData_o *)DataVals__GetParam(baseVals, 6, 0, 0LL);
        if ( !buffIndv )
          goto LABEL_38;
        if ( !buffIndv->max_length )
        {
LABEL_39:
          v72 = sub_B5D6C8(data);
          sub_B5D668(v72, 0LL);
        }
        v47 = 0;
        v51 = 0;
        TargetRarityList = 0LL;
        v54 = 0;
        v53 = 0LL;
        buffIndv->m_Items[1] = (int)data;
        break;
      case 6:
        TargetRarityList = DataVals__GetTargetRarityList(baseVals, 0LL);
        v47 = 0;
        v54 = 0;
        buffIndv = 0LL;
        v53 = 0LL;
        v51 = 1;
        goto LABEL_29;
      case 7:
        v53 = DataVals__GetAndCheckIndividuality(baseVals, 0LL);
        v47 = 0;
        v51 = 0;
        TargetRarityList = 0LL;
        v54 = 0;
        buffIndv = 0LL;
        goto LABEL_29;
      default:
        goto LABEL_26;
    }
    goto LABEL_29;
  }
  v55 = type == 11;
  v51 = 0;
  v54 = 0;
  buffIndv = 0LL;
  v53 = 0LL;
  if ( v55 )
  {
    v45 = (System_Collections_Generic_List_int__o *)sub_B5D694(System_Collections_Generic_List_int__TypeInfo);
    System_Collections_Generic_List_int____ctor(
      v45,
      (const MethodInfo_30836B0 *)Method_System_Collections_Generic_List_int___ctor___68740224);
    data = (BattleData_o *)DataVals__GetParam(baseVals, 3, 0, 0LL);
    if ( !v45 )
      goto LABEL_38;
    System_Collections_Generic_List_int___Add(
      v45,
      (int32_t)data,
      (const MethodInfo_308440C *)Method_System_Collections_Generic_List_int__Add__);
    v56 = DataVals__GetParam(baseVals, 7, 0, 0LL);
    System_Collections_Generic_List_int___Add(
      v45,
      v56,
      (const MethodInfo_308440C *)Method_System_Collections_Generic_List_int__Add__);
    v57 = DataVals__GetParam(baseVals, 59, 0, 0LL);
    System_Collections_Generic_List_int___Add(
      v45,
      v57,
      (const MethodInfo_308440C *)Method_System_Collections_Generic_List_int__Add__);
    v58 = DataVals__GetParam(baseVals, 60, 0, 0LL);
    System_Collections_Generic_List_int___Add(
      v45,
      v58,
      (const MethodInfo_308440C *)Method_System_Collections_Generic_List_int__Add__);
    v59 = DataVals__GetParam(baseVals, 4, 0, 0LL);
    System_Collections_Generic_List_int___Add(
      v45,
      v59,
      (const MethodInfo_308440C *)Method_System_Collections_Generic_List_int__Add__);
    v60 = DataVals__GetParam(baseVals, 6, 0, 0LL);
    System_Collections_Generic_List_int___Add(
      v45,
      v60,
      (const MethodInfo_308440C *)Method_System_Collections_Generic_List_int__Add__);
    buffIndv = DataVals__GetTargetList(baseVals, 0LL);
    v61 = (System_Array_o *)sub_B5D5DC(DataVals_OverChargeState___TypeInfo, 3LL);
    v80.fields.value = Field__PrivateImplementationDetails__44BE0EBF7C907BA44AD83314C6AD0AA399AD5B73911C129D2CD6A85D4A056C90;
    System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray_43674272(v61, v80, 0LL);
    DataVals__UpdateOverChargeEachFunc(baseVals, (DataVals_OverChargeState_array *)v61, 0LL);
    v62 = DataVals__IsOverChargeState(baseVals, 2, 0LL) || DataVals__IsOverChargeState(baseVals, 8, 0LL);
    v47 = 1;
    IsOverChargeState = DataVals__IsOverChargeState(baseVals, 1, 0LL);
    v51 = 0;
    TargetRarityList = 0LL;
    v54 = v62 && !IsOverChargeState;
    v53 = buffIndv;
  }
LABEL_29:
  v73 = v54;
  isRarityAtk = v51;
  NPFixedDamageValue = DataVals__GetNPFixedDamageValue(baseVals, 0LL);
  damageProcessArgs = (BattleLogic_DamageProcessArgs_o *)sub_B5D694(BattleLogic_DamageProcessArgs_TypeInfo);
  BattleLogic_DamageProcessArgs___ctor(damageProcessArgs, 0, NPFixedDamageValue, 0LL);
  logic = this->fields.logic;
  v67 = System_Collections_Generic_List_int___ToArray(
          v45,
          (const MethodInfo_3086518 *)Method_System_Collections_Generic_List_int__ToArray__);
  IsIncludeIgnoreIndividuality = DataVals__IsIncludeIgnoreIndividuality(baseVals, 0LL);
  data = (BattleData_o *)DataVals__isParam(baseVals, 90, 0LL);
  if ( !logic )
    goto LABEL_38;
  data = (BattleData_o *)BattleLogic__getFunctionNpDamagelist(
                           logic,
                           v77,
                           v76,
                           v67,
                           v79,
                           typea,
                           action,
                           v53,
                           buffIndv,
                           TargetRarityList,
                           IsIncludeIgnoreIndividuality,
                           (unsigned __int8)data & 1,
                           damageProcessArgs,
                           0LL);
  v69 = (BattleActionData_DamageData_o *)data;
  if ( (unsigned int)(typea - 3) < 8 && ((0x93u >> (typea - 3)) & 1) != 0 )
    v70 = 1;
  else
    v70 = v47 & v73;
  if ( !data )
    goto LABEL_38;
  BattleActionData_DamageData__addAttackSideEffectAction((BattleActionData_DamageData_o *)data, 80, 0LL);
  if ( !v78 )
    goto LABEL_38;
  BattleActionData__setDamageData(v78, v69, baseVals, v70, isRarityAtk, 0LL);
  return v78;
}


BattleActionData_o *__fastcall BattleLogicFunction__functionPtShuffle(
        BattleLogicFunction_o *this,
        int32_t actionId,
        FunctionEntity_o *funcEnt,
        DataVals_o *baeVals,
        int32_t funcIndex,
        const MethodInfo *method)
{
  int v7; // w1
  int v8; // w2
  __int64 v9; // x3
  int v10; // w1
  int v11; // w2
  __int64 v12; // x3
  int v13; // w1
  int v14; // w2
  __int64 v15; // x3
  int v16; // w1
  int v17; // w2
  __int64 v18; // x3
  int v19; // w1
  int v20; // w2
  __int64 v21; // x3
  int v22; // w1
  int v23; // w2
  __int64 v24; // x3
  int v25; // w1
  int v26; // w2
  __int64 v27; // x3
  int v28; // w1
  int v29; // w2
  __int64 v30; // x3
  int v31; // w1
  int v32; // w2
  __int64 v33; // x3
  int v34; // w1
  int v35; // w2
  __int64 v36; // x3
  int v37; // w1
  int v38; // w2
  __int64 v39; // x3
  BattleActionData_o *v40; // x20
  __int64 v41; // x1
  void *data; // x0
  struct BattleData_o *v43; // x8
  System_Collections_Generic_List_USFGOSetAudioGroupIndexConditional_WeightIndex__o *player_datalist; // x21
  struct BattleLogicFunction___c_StaticFields *static_fields; // x8
  System_Action_DrawLotsDisplayMessage_DisplayedInGroup_SaveData__o *_9__89_0; // x22
  Il2CppObject *v47; // x23
  struct BattleLogicFunction___c_StaticFields *v48; // x0
  System_String_array **v49; // x2
  System_String_array **v50; // x3
  System_Boolean_array **v51; // x4
  System_Int32_array **v52; // x5
  System_Int32_array *v53; // x6
  System_Int32_array *v54; // x7
  struct BattleData_o *v55; // x8
  System_Collections_Generic_List_TitleInfoControl_EventEndTimeInfo__o *v56; // x21
  struct BattleLogicFunction___c_StaticFields *v57; // x8
  System_Comparison_TitleInfoControl_EventEndTimeInfo__o *_9__89_1; // x22
  Il2CppObject *v59; // x23
  struct BattleLogicFunction___c_StaticFields *v60; // x0
  System_String_array **v61; // x2
  System_String_array **v62; // x3
  System_Boolean_array **v63; // x4
  System_Int32_array **v64; // x5
  System_Int32_array *v65; // x6
  System_Int32_array *v66; // x7
  struct BattleData_o *v67; // x8
  int v68; // w8
  unsigned int *v69; // x21
  int32_t v70; // w23
  BattleServantData_o *v71; // x22
  unsigned __int64 v72; // x23
  __int64 v73; // x8
  unsigned __int64 v74; // x9
  unsigned __int64 v75; // x8
  __int64 v76; // x22
  struct BattleData_o *v77; // x8
  struct System_Int32_array *p_entryid; // x8
  BattleLogicTask_o *v79; // x21
  __int64 v81; // x0

  if ( (byte_42EB006 & 1) == 0 )
  {
    sub_B5D5C4(&Method_System_Action_BattleServantData___ctor__, actionId, (_DWORD)funcEnt, baeVals);
    sub_B5D5C4(&System_Action_BattleServantData__TypeInfo, v7, v8, v9);
    sub_B5D5C4(&BattleActionData_TypeInfo, v10, v11, v12);
    sub_B5D5C4(&BattleLogicTask_TypeInfo, v13, v14, v15);
    sub_B5D5C4(&Method_System_Comparison_BattleServantData___ctor__, v16, v17, v18);
    sub_B5D5C4(&System_Comparison_BattleServantData__TypeInfo, v19, v20, v21);
    sub_B5D5C4(&Method_System_Collections_Generic_List_BattleServantData__ForEach__, v22, v23, v24);
    sub_B5D5C4(&Method_System_Collections_Generic_List_BattleServantData__Sort__, v25, v26, v27);
    sub_B5D5C4(&Method_System_Collections_Generic_List_BattleServantData__ToArray__, v28, v29, v30);
    sub_B5D5C4(&Method_BattleLogicFunction___c__functionPtShuffle_b__89_0__, v31, v32, v33);
    sub_B5D5C4(&Method_BattleLogicFunction___c__functionPtShuffle_b__89_1__, v34, v35, v36);
    sub_B5D5C4(&BattleLogicFunction___c_TypeInfo, v37, v38, v39);
    byte_42EB006 = 1;
  }
  v40 = (BattleActionData_o *)sub_B5D694(BattleActionData_TypeInfo);
  BattleActionData___ctor(v40, 0LL);
  data = this->fields.data;
  if ( !data )
    goto LABEL_57;
  BattleData__SubBuffFromPT_18966596((BattleData_o *)data, 0LL, 0LL);
  data = this->fields.data;
  if ( !data )
    goto LABEL_57;
  BattleData__SubBuffExitSvt((BattleData_o *)data, 0LL, 0LL);
  v43 = this->fields.data;
  if ( !v43 )
    goto LABEL_57;
  player_datalist = (System_Collections_Generic_List_USFGOSetAudioGroupIndexConditional_WeightIndex__o *)v43->fields.player_datalist;
  data = BattleLogicFunction___c_TypeInfo;
  if ( (BYTE3(BattleLogicFunction___c_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !BattleLogicFunction___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BattleLogicFunction___c_TypeInfo);
    data = BattleLogicFunction___c_TypeInfo;
  }
  static_fields = (struct BattleLogicFunction___c_StaticFields *)*((_QWORD *)data + 23);
  _9__89_0 = (System_Action_DrawLotsDisplayMessage_DisplayedInGroup_SaveData__o *)static_fields->__9__89_0;
  if ( !_9__89_0 )
  {
    if ( (*((_BYTE *)data + 307) & 4) != 0 && !*((_DWORD *)data + 56) )
    {
      j_il2cpp_runtime_class_init_0(data);
      static_fields = BattleLogicFunction___c_TypeInfo->static_fields;
    }
    v47 = (Il2CppObject *)static_fields->__9;
    _9__89_0 = (System_Action_DrawLotsDisplayMessage_DisplayedInGroup_SaveData__o *)sub_B5D694(System_Action_BattleServantData__TypeInfo);
    System_Action_DrawLotsDisplayMessage_DisplayedInGroup_SaveData____ctor(
      _9__89_0,
      v47,
      Method_BattleLogicFunction___c__functionPtShuffle_b__89_0__,
      (const MethodInfo_258B320 *)Method_System_Action_BattleServantData___ctor__);
    v48 = BattleLogicFunction___c_TypeInfo->static_fields;
    v48->__9__89_0 = (struct System_Action_BattleServantData__o *)_9__89_0;
    sub_B5D560(
      (BattleServantConfConponent_o *)&v48->__9__89_0,
      (System_Int32_array **)_9__89_0,
      v49,
      v50,
      v51,
      v52,
      v53,
      v54);
  }
  if ( !player_datalist )
    goto LABEL_57;
  System_Collections_Generic_List_USFGOSetAudioGroupIndexConditional_WeightIndex___ForEach(
    player_datalist,
    (System_Action_T__o *)_9__89_0,
    (const MethodInfo_3057CD8 *)Method_System_Collections_Generic_List_BattleServantData__ForEach__);
  v55 = this->fields.data;
  if ( !v55 )
    goto LABEL_57;
  data = BattleLogicFunction___c_TypeInfo;
  v56 = (System_Collections_Generic_List_TitleInfoControl_EventEndTimeInfo__o *)v55->fields.player_datalist;
  if ( (BYTE3(BattleLogicFunction___c_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !BattleLogicFunction___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BattleLogicFunction___c_TypeInfo);
    data = BattleLogicFunction___c_TypeInfo;
  }
  v57 = (struct BattleLogicFunction___c_StaticFields *)*((_QWORD *)data + 23);
  _9__89_1 = (System_Comparison_TitleInfoControl_EventEndTimeInfo__o *)v57->__9__89_1;
  if ( !_9__89_1 )
  {
    if ( (*((_BYTE *)data + 307) & 4) != 0 && !*((_DWORD *)data + 56) )
    {
      j_il2cpp_runtime_class_init_0(data);
      v57 = BattleLogicFunction___c_TypeInfo->static_fields;
    }
    v59 = (Il2CppObject *)v57->__9;
    _9__89_1 = (System_Comparison_TitleInfoControl_EventEndTimeInfo__o *)sub_B5D694(System_Comparison_BattleServantData__TypeInfo);
    System_Comparison_TitleInfoControl_EventEndTimeInfo____ctor(
      _9__89_1,
      v59,
      Method_BattleLogicFunction___c__functionPtShuffle_b__89_1__,
      (const MethodInfo_249B1FC *)Method_System_Comparison_BattleServantData___ctor__);
    v60 = BattleLogicFunction___c_TypeInfo->static_fields;
    v60->__9__89_1 = (struct System_Comparison_BattleServantData__o *)_9__89_1;
    sub_B5D560(
      (BattleServantConfConponent_o *)&v60->__9__89_1,
      (System_Int32_array **)_9__89_1,
      v61,
      v62,
      v63,
      v64,
      v65,
      v66);
  }
  if ( !v56 )
    goto LABEL_57;
  System_Collections_Generic_List_TitleInfoControl_EventEndTimeInfo___Sort(
    v56,
    (System_Comparison_T__o *)_9__89_1,
    (const MethodInfo_305909C *)Method_System_Collections_Generic_List_BattleServantData__Sort__);
  v67 = this->fields.data;
  if ( !v67 )
    goto LABEL_57;
  data = v67->fields.player_datalist;
  if ( !data )
    goto LABEL_57;
  data = System_Collections_Generic_List_WarBoardUiData_SaveData___ToArray(
           (System_Collections_Generic_List_WarBoardUiData_SaveData__o *)data,
           (const MethodInfo_305910C *)Method_System_Collections_Generic_List_BattleServantData__ToArray__);
  if ( !data )
    goto LABEL_57;
  v68 = *((_DWORD *)data + 6);
  v69 = (unsigned int *)data;
  if ( v68 >= 1 )
  {
    v70 = 0;
    while ( 1 )
    {
      if ( v70 >= (unsigned int)v68 )
      {
LABEL_58:
        v81 = sub_B5D6C8(data);
        sub_B5D668(v81, 0LL);
      }
      v71 = *(BattleServantData_o **)&v69[2 * v70 + 8];
      if ( !v71 )
        break;
      if ( v71->fields.isEntry )
      {
        data = (void *)BattleServantData__isAlive(v71, 0, 0LL);
        if ( ((unsigned __int8)data & 1) != 0 )
          v71->fields.isEntry = 0;
      }
      v71->fields.deckIndex = v70;
      v68 = v69[6];
      if ( ++v70 >= v68 )
        goto LABEL_36;
    }
LABEL_57:
    sub_B5D69C(data, v41);
  }
LABEL_36:
  data = this->fields.data;
  if ( !data )
    goto LABEL_57;
  v72 = 0LL;
  while ( 1 )
  {
    v73 = *((_QWORD *)data + 36);
    if ( !v73 )
      goto LABEL_57;
    v74 = *(unsigned int *)(v73 + 24);
    if ( (__int64)v72 >= (int)v74 )
      break;
    if ( v72 >= v74 )
      goto LABEL_58;
    *(_DWORD *)(v73 + 4 * v72 + 32) = -1;
    v75 = v69[6];
    if ( (__int64)v72 < (int)v75 )
    {
      if ( v72 >= v75 )
        goto LABEL_58;
      v76 = *(_QWORD *)&v69[2 * v72 + 8];
      if ( !v76 )
        goto LABEL_57;
      data = (void *)BattleServantData__isAlive(*(BattleServantData_o **)&v69[2 * v72 + 8], 0, 0LL);
      if ( ((unsigned __int8)data & 1) != 0 )
      {
        v77 = this->fields.data;
        if ( !v77 )
          goto LABEL_57;
        p_entryid = v77->fields.p_entryid;
        if ( !p_entryid )
          goto LABEL_57;
        if ( v72 >= p_entryid->max_length )
          goto LABEL_58;
        p_entryid->m_Items[v72 + 1] = *(_DWORD *)(v76 + 24);
        *(_BYTE *)(v76 + 452) = 1;
        *(_BYTE *)(v76 + 517) = 1;
      }
    }
    data = this->fields.data;
    ++v72;
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
  if ( !v40 )
    goto LABEL_57;
  v40->fields.redrawCommandCard = 1;
  v79 = (BattleLogicTask_o *)sub_B5D694(BattleLogicTask_TypeInfo);
  BattleLogicTask___ctor(v79, 0LL);
  if ( !v79 )
    goto LABEL_57;
  BattleLogicTask__setCheckEntryFunction(v79, 0LL);
  data = this->fields.logic;
  if ( !data )
    goto LABEL_57;
  BattleLogic__AddBattleLogicTask((BattleLogic_o *)data, v79, 0LL);
  return v40;
}


BattleActionData_o *__fastcall BattleLogicFunction__functionReflection(
        BattleLogicFunction_o *this,
        int32_t playerId,
        int32_t targetId,
        DataVals_o *baseVals,
        int32_t funcIndex,
        const MethodInfo *method)
{
  int v11; // w1
  int v12; // w2
  __int64 v13; // x3
  int v14; // w1
  int v15; // w2
  __int64 v16; // x3
  int v17; // w1
  int v18; // w2
  __int64 v19; // x3
  BattleActionData_o *v20; // x23
  __int64 v21; // x1
  __int64 data; // x0
  BattleServantData_o *v23; // x25
  BattleServantData_o *ServantData; // x24
  __int64 v25; // x26
  __int64 v26; // x8
  double v27; // d0
  int32_t v28; // w28
  int v29; // w19
  System_Int32_array **v31; // x0
  System_String_array **v32; // x2
  System_String_array **v33; // x3
  System_Boolean_array **v34; // x4
  System_Int32_array **v35; // x5
  System_Int32_array *v36; // x6
  System_Int32_array *v37; // x7
  System_Int32_array **v38; // x0
  System_String_array **v39; // x2
  System_String_array **v40; // x3
  System_Boolean_array **v41; // x4
  System_Int32_array **v42; // x5
  System_Int32_array *v43; // x6
  System_Int32_array *v44; // x7
  System_String_array **v45; // x2
  System_String_array **v46; // x3
  System_Boolean_array **v47; // x4
  System_Int32_array **v48; // x5
  System_Int32_array *v49; // x6
  System_Int32_array *v50; // x7
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
  System_Int32_array **v65; // x0
  System_String_array **v66; // x2
  System_String_array **v67; // x3
  System_Boolean_array **v68; // x4
  System_Int32_array **v69; // x5
  System_Int32_array *v70; // x6
  System_Int32_array *v71; // x7
  struct BattleData_o *v72; // x8
  int32_t uniqueId; // w19
  int32_t v74; // w21
  bool IsOpponentPTUniqueID; // w0
  __int64 v77; // x0
  int32_t bId; // [xsp+Ch] [xbp-54h]

  if ( (byte_42EB004 & 1) == 0 )
  {
    sub_B5D5C4(&BattleActionData_TypeInfo, playerId, targetId, baseVals);
    sub_B5D5C4(&BattleActionData_DamageData_TypeInfo, v11, v12, v13);
    sub_B5D5C4(&int___TypeInfo, v14, v15, v16);
    sub_B5D5C4(&BattleBuffData_ShowBuffData___TypeInfo, v17, v18, v19);
    byte_42EB004 = 1;
  }
  v20 = (BattleActionData_o *)sub_B5D694(BattleActionData_TypeInfo);
  BattleActionData___ctor(v20, 0LL);
  data = (__int64)this->fields.data;
  if ( !data )
    goto LABEL_27;
  bId = playerId;
  data = (__int64)BattleData__getServantData((BattleData_o *)data, playerId, 0LL);
  if ( !this->fields.data )
    goto LABEL_27;
  v23 = (BattleServantData_o *)data;
  ServantData = BattleData__getServantData(this->fields.data, targetId, 0LL);
  v25 = sub_B5D694(BattleActionData_DamageData_TypeInfo);
  BattleActionData_DamageData___ctor((BattleActionData_DamageData_o *)v25, 0LL);
  if ( !v23 )
    goto LABEL_27;
  data = BattleServantData__getAccumulationDamage(v23, 0LL);
  if ( !baseVals )
    goto LABEL_27;
  v26 = DataVals__GetValue(baseVals, 0LL) * (__int64)(int)data;
  data = (__int64)this->fields.data;
  v27 = (double)v26 / 1000.0;
  if ( v27 == INFINITY )
    v27 = -v27;
  if ( !data )
    goto LABEL_27;
  v28 = (int)v27;
  data = BattleData__IsDeadOkTurn((BattleData_o *)data, targetId, 0LL);
  if ( (data & 1) == 0 )
  {
    if ( !ServantData )
      goto LABEL_27;
    v29 = ((__int64 (__fastcall *)(BattleServantData_o *, Il2CppMethodPointer))ServantData->klass->vtable._9_get_hp.method)(
            ServantData,
            ServantData->klass->vtable._10_set_hp.methodPtr);
    data = ((__int64 (__fastcall *)(BattleServantData_o *, Il2CppMethodPointer))ServantData->klass->vtable._11_get_reducedhp.method)(
             ServantData,
             ServantData->klass->vtable._12_set_reducedhp.methodPtr);
    if ( v29 - (int)data < v28 && v29 - (int)data > 0 )
      v28 = v29 - data - 1;
  }
  if ( !v25 )
    goto LABEL_27;
  *(_DWORD *)(v25 + 28) = targetId;
  *(_DWORD *)(v25 + 16) = funcIndex;
  *(_WORD *)(v25 + 32) = 0;
  *(_BYTE *)(v25 + 34) = 0;
  *(_DWORD *)(v25 + 36) = 0;
  *(_BYTE *)(v25 + 40) = 0;
  v31 = (System_Int32_array **)sub_B5D5DC(BattleBuffData_ShowBuffData___TypeInfo, 0LL);
  *(_QWORD *)(v25 + 64) = v31;
  sub_B5D560((BattleServantConfConponent_o *)(v25 + 64), v31, v32, v33, v34, v35, v36, v37);
  v38 = (System_Int32_array **)sub_B5D5DC(BattleBuffData_ShowBuffData___TypeInfo, 0LL);
  *(_QWORD *)(v25 + 72) = v38;
  sub_B5D560((BattleServantConfConponent_o *)(v25 + 72), v38, v39, v40, v41, v42, v43, v44);
  data = sub_B5D5DC(int___TypeInfo, 1LL);
  if ( !data )
    goto LABEL_27;
  if ( !*(_DWORD *)(data + 24) )
  {
    v77 = sub_B5D6C8(data);
    sub_B5D668(v77, 0LL);
  }
  *(_DWORD *)(data + 32) = v28;
  *(_QWORD *)(v25 + 96) = data;
  sub_B5D560((BattleServantConfConponent_o *)(v25 + 96), (System_Int32_array **)data, v45, v46, v47, v48, v49, v50);
  v51 = (System_Int32_array **)sub_B5D5DC(int___TypeInfo, 0LL);
  *(_QWORD *)(v25 + 104) = v51;
  sub_B5D560((BattleServantConfConponent_o *)(v25 + 104), v51, v52, v53, v54, v55, v56, v57);
  v58 = (System_Int32_array **)sub_B5D5DC(int___TypeInfo, 0LL);
  *(_QWORD *)(v25 + 112) = v58;
  sub_B5D560((BattleServantConfConponent_o *)(v25 + 112), v58, v59, v60, v61, v62, v63, v64);
  v65 = (System_Int32_array **)sub_B5D5DC(int___TypeInfo, 0LL);
  *(_QWORD *)(v25 + 120) = v65;
  sub_B5D560((BattleServantConfConponent_o *)(v25 + 120), v65, v66, v67, v68, v69, v70, v71);
  if ( !ServantData )
    goto LABEL_27;
  BattleServantData__provisionalDamage(ServantData, v28, 0LL);
  BattleServantData__ResultDamage(ServantData, v28, v23, 0LL, 0, 0LL);
  data = BattleServantData__isLogicResultAlive(ServantData, 0LL);
  if ( (data & 1) == 0 )
  {
    v72 = this->fields.data;
    if ( !v72 )
      goto LABEL_27;
    ServantData->fields.deadTurn = v72->fields.typeTurn;
  }
  BattleActionData_DamageData__addAttackSideEffectAction((BattleActionData_DamageData_o *)v25, 80, 0LL);
  if ( !v20
    || (BattleActionData__setDamageData(v20, (BattleActionData_DamageData_o *)v25, baseVals, 0, 0, 0LL),
        (data = (__int64)this->fields.data) == 0) )
  {
LABEL_27:
    sub_B5D69C(data, v21);
  }
  uniqueId = v23->fields.uniqueId;
  v74 = *(_DWORD *)(data + 188);
  IsOpponentPTUniqueID = BattleData__IsOpponentPTUniqueID((BattleData_o *)data, targetId, bId, 0LL);
  BattleServantData__setActionHistory(ServantData, uniqueId, 1, v74, IsOpponentPTUniqueID, 0LL);
  return v20;
}


// local variable allocation has failed, the output may be wrong!
BattleActionData_o *__fastcall BattleLogicFunction__functionReplaceEnemyMember(
        BattleLogicFunction_o *this,
        FunctionEntity_o *funcEnt,
        DataVals_o *baseVals,
        int32_t funcIndex,
        const MethodInfo *method)
{
  int v8; // w1
  int v9; // w2
  __int64 v10; // x3
  int v11; // w1
  int v12; // w2
  __int64 v13; // x3
  int v14; // w1
  int v15; // w2
  __int64 v16; // x3
  int v17; // w1
  int v18; // w2
  __int64 v19; // x3
  int v20; // w1
  int v21; // w2
  __int64 v22; // x3
  BattleData_o *data; // x0
  struct BattleData_o *v24; // x8
  BattleData_o *v25; // x23
  System_Collections_Generic_IEnumerable_TSource__o *enemy_datalist; // x21
  BattleLogicFunction___c_c *v27; // x0
  struct BattleLogicFunction___c_StaticFields *static_fields; // x8
  System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *_9__83_0; // x22
  Il2CppObject *v30; // x24
  struct BattleLogicFunction___c_StaticFields *v31; // x0
  System_String_array **v32; // x2
  System_String_array **v33; // x3
  System_Boolean_array **v34; // x4
  System_Int32_array **v35; // x5
  System_Int32_array *v36; // x6
  System_Int32_array *v37; // x7
  BattleActionData_o *v38; // x21
  int32_t Param; // w24
  int32_t v40; // w22
  BattleServantData_o *EnemyServantData; // x24
  BattleServantData_o *EnemyServantDataFromNpcId; // x22
  struct BattleData_o *v43; // x8
  int v44; // w9
  struct System_Int32_array *e_entryid; // x10
  int max_length; // w10
  struct System_Int32_array *v47; // x10
  BattleActionData_o *result; // x0
  int32_t DeckIndex; // w23
  struct BattleData_o *v50; // x8
  struct System_Int32_array *v51; // x9
  int32_t v52; // w10
  int32_t v53; // w25
  int32_t *p_deckIndex; // x26
  unsigned __int64 v55; // x10
  unsigned __int64 v56; // x11
  struct BattleData_o *v57; // x8
  unsigned __int64 v58; // x9
  struct System_Int32_array *v59; // x10
  unsigned __int64 v60; // x11
  char *v61; // x10
  __int64 v62; // x0

  if ( (byte_42EB000 & 1) == 0 )
  {
    sub_B5D5C4(&BattleActionData_TypeInfo, (_DWORD)funcEnt, (_DWORD)baseVals, *(_QWORD *)&funcIndex);
    sub_B5D5C4(&Method_System_Linq_Enumerable_Count_BattleServantData____68844904, v8, v9, v10);
    sub_B5D5C4(&Method_System_Func_BattleServantData__bool___ctor__, v11, v12, v13);
    sub_B5D5C4(&System_Func_BattleServantData__bool__TypeInfo, v14, v15, v16);
    sub_B5D5C4(&Method_BattleLogicFunction___c__functionReplaceEnemyMember_b__83_0__, v17, v18, v19);
    sub_B5D5C4(&BattleLogicFunction___c_TypeInfo, v20, v21, v22);
    byte_42EB000 = 1;
  }
  data = this->fields.data;
  if ( !data )
    goto LABEL_68;
  data = (BattleData_o *)BattleData__getAliveFieldEnemyServantIDList(data, 0, 0LL);
  v24 = this->fields.data;
  if ( !v24 )
    goto LABEL_68;
  v25 = data;
  enemy_datalist = (System_Collections_Generic_IEnumerable_TSource__o *)v24->fields.enemy_datalist;
  v27 = BattleLogicFunction___c_TypeInfo;
  if ( (BYTE3(BattleLogicFunction___c_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !BattleLogicFunction___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BattleLogicFunction___c_TypeInfo);
    v27 = BattleLogicFunction___c_TypeInfo;
  }
  static_fields = v27->static_fields;
  _9__83_0 = (System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *)static_fields->__9__83_0;
  if ( !_9__83_0 )
  {
    if ( (BYTE3(v27->vtable._0_Equals.methodPtr) & 4) != 0 && !v27->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v27);
      static_fields = BattleLogicFunction___c_TypeInfo->static_fields;
    }
    v30 = (Il2CppObject *)static_fields->__9;
    _9__83_0 = (System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *)sub_B5D694(System_Func_BattleServantData__bool__TypeInfo);
    System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool____ctor(
      _9__83_0,
      v30,
      Method_BattleLogicFunction___c__functionReplaceEnemyMember_b__83_0__,
      (const MethodInfo_2C2ECD0 *)Method_System_Func_BattleServantData__bool___ctor__);
    v31 = BattleLogicFunction___c_TypeInfo->static_fields;
    v31->__9__83_0 = (struct System_Func_BattleServantData__bool__o *)_9__83_0;
    sub_B5D560(
      (BattleServantConfConponent_o *)&v31->__9__83_0,
      (System_Int32_array **)_9__83_0,
      v32,
      v33,
      v34,
      v35,
      v36,
      v37);
  }
  data = (BattleData_o *)System_Linq_Enumerable__Count_WarBoardAIRoute_RouteData_(
                           enemy_datalist,
                           (System_Func_TSource__bool__o *)_9__83_0,
                           (const MethodInfo_1CA8A5C *)Method_System_Linq_Enumerable_Count_BattleServantData____68844904);
  if ( (int)data < 4 )
    return 0LL;
  if ( !v25 )
    goto LABEL_68;
  if ( !v25->fields.rootfsm )
    return 0LL;
  v38 = (BattleActionData_o *)sub_B5D694(BattleActionData_TypeInfo);
  BattleActionData___ctor(v38, 0LL);
  if ( !baseVals )
    goto LABEL_68;
  Param = DataVals__GetParam(baseVals, 47, 0, 0LL);
  data = (BattleData_o *)DataVals__GetParam(baseVals, 48, 0, 0LL);
  if ( !this->fields.data )
    goto LABEL_68;
  v40 = (int)data;
  data = (BattleData_o *)BattleData__getEnemyServantDataFromNpcId(this->fields.data, Param, 0LL);
  if ( !this->fields.data )
    goto LABEL_68;
  EnemyServantData = (BattleServantData_o *)data;
  EnemyServantDataFromNpcId = BattleData__getEnemyServantDataFromNpcId(this->fields.data, v40, 0LL);
  if ( !EnemyServantData )
  {
    data = (BattleData_o *)DataVals__GetParam(baseVals, 49, 0, 0LL);
    v43 = this->fields.data;
    v44 = (_DWORD)data - 1;
    if ( (int)data - 1 < 0 )
    {
      if ( !v43 )
        goto LABEL_68;
      v44 = 0;
    }
    else
    {
      if ( !v43 )
        goto LABEL_68;
      e_entryid = v43->fields.e_entryid;
      if ( !e_entryid )
        goto LABEL_68;
      max_length = e_entryid->max_length;
      if ( v44 >= max_length )
        v44 = max_length - 1;
    }
    v47 = v43->fields.e_entryid;
    if ( !v47 )
      goto LABEL_68;
    if ( v44 >= v47->max_length )
      goto LABEL_69;
    data = (BattleData_o *)BattleData__getEnemyServantData(this->fields.data, v47->m_Items[v44 + 1], 0LL);
    if ( !data )
      goto LABEL_68;
    EnemyServantData = (BattleServantData_o *)data;
    data = (BattleData_o *)BattleServantData__isDead((BattleServantData_o *)data, 0LL);
    if ( ((unsigned __int8)data & 1) != 0 )
    {
      if ( !LODWORD(v25->fields.rootfsm) )
        goto LABEL_69;
      data = this->fields.data;
      if ( !data )
        goto LABEL_68;
      EnemyServantData = BattleData__getEnemyServantData(data, (int32_t)v25->fields.fsm, 0LL);
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
    v50 = this->fields.data;
    if ( v50 )
    {
      v51 = v50->fields.e_entryid;
      if ( v51 )
      {
        v52 = v51->max_length;
        v53 = (int)data;
        if ( DeckIndex >= v52 )
          goto LABEL_49;
        if ( DeckIndex < (unsigned int)v52 )
        {
          if ( v51->m_Items[DeckIndex + 1] == EnemyServantData->fields.uniqueId )
          {
            p_deckIndex = &EnemyServantData->fields.deckIndex;
            goto LABEL_57;
          }
LABEL_49:
          v55 = 0LL;
          p_deckIndex = &EnemyServantData->fields.deckIndex;
          while ( 1 )
          {
            v56 = v51->max_length;
            if ( (__int64)v55 >= (int)v56 )
              break;
            if ( v55 >= v56 )
              goto LABEL_69;
            if ( v51->m_Items[v55 + 1] != EnemyServantData->fields.uniqueId
              || (*p_deckIndex = v55, (v50 = this->fields.data) != 0LL) )
            {
              v51 = v50->fields.e_entryid;
              ++v55;
              if ( v51 )
                continue;
            }
            goto LABEL_68;
          }
          data = (BattleData_o *)BattleServantData__getDeckIndex(EnemyServantData, 0LL);
          DeckIndex = (int)data;
LABEL_57:
          *p_deckIndex = v53;
          EnemyServantDataFromNpcId->fields.deckIndex = DeckIndex;
          v57 = this->fields.data;
          if ( v57 )
          {
            v58 = 0LL;
            while ( 1 )
            {
              v59 = v57->fields.e_entryid;
              if ( !v59 )
                goto LABEL_68;
              v60 = v59->max_length;
              if ( (__int64)v58 >= (int)v60 )
                break;
              if ( v58 >= v60 )
                goto LABEL_69;
              v61 = (char *)v59 + 4 * v58;
              if ( *((_DWORD *)v61 + 8) == EnemyServantData->fields.uniqueId )
              {
                *((_DWORD *)v61 + 8) = EnemyServantDataFromNpcId->fields.uniqueId;
                v57 = this->fields.data;
              }
              ++v58;
              if ( !v57 )
                goto LABEL_68;
            }
            if ( v38 )
            {
              BattleActionData__setReplaceMember(
                v38,
                DeckIndex,
                EnemyServantDataFromNpcId->fields.uniqueId,
                EnemyServantData->fields.uniqueId,
                funcIndex,
                0LL);
              return v38;
            }
          }
          goto LABEL_68;
        }
LABEL_69:
        v62 = sub_B5D6C8(data);
        sub_B5D668(v62, 0LL);
      }
    }
LABEL_68:
    sub_B5D69C(data, funcEnt);
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

  if ( (byte_42EAFFF & 1) == 0 )
  {
    sub_B5D5C4(&BattleActionData_TypeInfo, targetId, subTargetId, funcEnt);
    byte_42EAFFF = 1;
  }
  v11 = (BattleActionData_o *)sub_B5D694(BattleActionData_TypeInfo);
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
    v30 = sub_B5D6C8(data);
    sub_B5D668(v30, 0LL);
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
    || (BattleData__SubBuffFromPT_18966596(data, v15, 0LL), (data = this->fields.data) == 0LL) )
  {
LABEL_34:
    sub_B5D69C(data, v12);
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

  if ( (byte_42EAFFE & 1) == 0 )
  {
    sub_B5D5C4(&BattleActionData_TypeInfo, targetId, (_DWORD)funcEnt, baseVals);
    byte_42EAFFE = 1;
  }
  v7 = (BattleActionData_o *)sub_B5D694(BattleActionData_TypeInfo);
  BattleActionData___ctor(v7, 0LL);
  data = this->fields.data;
  if ( !data
    || (BattleData__SubBuffFromPT_18966596(data, 0LL, 0LL), (data = this->fields.data) == 0LL)
    || (BattleData__shuffleCommand(data, 0LL), (data = (BattleData_o *)this->fields.logic) == 0LL)
    || (BattleLogic__drawCommand((BattleLogic_o *)data, 0LL), (data = (BattleData_o *)this->fields.logic) == 0LL)
    || (BattleLogic__setDrawCard((BattleLogic_o *)data, 0LL), !v7) )
  {
    sub_B5D69C(data, v8);
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
  int v13; // w1
  int v14; // w2
  __int64 v15; // x3
  BattleActionData_o *v16; // x20
  __int64 v17; // x1
  BattleData_o *data; // x0
  BattleServantData_o *v19; // x22
  const MethodInfo *v20; // x7
  int32_t maxhp; // w24
  int32_t Value; // w0
  int32_t v24; // w1
  struct BattleData_o *v25; // x8
  __int64 v26; // x21
  System_String_array **v27; // x2
  System_String_array **v28; // x3
  System_Boolean_array **v29; // x4
  System_Int32_array **v30; // x5
  System_Int32_array *v31; // x6
  System_Int32_array *v32; // x7
  unsigned int uniqueId; // w8
  System_Int32_array **popupText; // x1
  System_Int32_array **effectList; // x1
  System_String_array **v36; // x2
  System_String_array **v37; // x3
  System_Boolean_array **v38; // x4
  System_Int32_array **v39; // x5
  System_Int32_array *v40; // x6
  System_Int32_array *v41; // x7

  if ( (byte_42EB00A & 1) == 0 )
  {
    sub_B5D5C4(&BattleActionData_TypeInfo, targetId, funcIdx, funcEnt);
    sub_B5D5C4(&BattleActionData_BuffData_TypeInfo, v13, v14, v15);
    byte_42EB00A = 1;
  }
  v16 = (BattleActionData_o *)sub_B5D694(BattleActionData_TypeInfo);
  BattleActionData___ctor(v16, 0LL);
  data = this->fields.data;
  if ( !data )
    goto LABEL_22;
  data = (BattleData_o *)BattleData__getServantData(data, targetId, 0LL);
  if ( !data )
    goto LABEL_22;
  v19 = (BattleServantData_o *)data;
  data = (BattleData_o *)(*(__int64 (__fastcall **)(BattleData_o *, Il2CppClass *))&data->klass[1]._1.this_arg.bits)(
                           data,
                           data->klass[1]._1.element_class);
  if ( (int)data >= 1 )
    return BattleLogicFunction__getNoEffectObject(this, targetId, funcIdx, dataVals, isSideEffect, 0LL, 0LL, v20);
  if ( !dataVals )
    goto LABEL_22;
  maxhp = v19->fields.maxhp;
  if ( DataVals__GetValue2(dataVals, 0LL) < 1 )
    Value = DataVals__GetValue(dataVals, 0LL);
  else
    Value = DataVals__GetValue2(dataVals, 0LL) * maxhp / 1000;
  if ( Value <= 1 )
    v24 = 1;
  else
    v24 = Value;
  BattleServantData__setHp(v19, v24, 1, 0LL);
  v19->fields.status = 0;
  data = (BattleData_o *)BattleServantData__isDeadEscape(v19, 0LL);
  if ( ((unsigned __int8)data & 1) != 0 )
  {
    v25 = this->fields.data;
    if ( !v25 )
      goto LABEL_22;
    if ( v25->fields.endbattleFlg )
      v19->fields.isSystemDead = 1;
  }
  v26 = sub_B5D694(BattleActionData_BuffData_TypeInfo);
  BattleActionData_BuffData___ctor((BattleActionData_BuffData_o *)v26, 0LL);
  if ( !v26 )
    goto LABEL_22;
  uniqueId = v19->fields.uniqueId;
  *(_DWORD *)(v26 + 16) = 0;
  *(_QWORD *)(v26 + 40) = uniqueId;
  if ( !funcEnt )
    goto LABEL_22;
  popupText = (System_Int32_array **)funcEnt->fields.popupText;
  *(_QWORD *)(v26 + 56) = popupText;
  sub_B5D560((BattleServantConfConponent_o *)(v26 + 56), popupText, v27, v28, v29, v30, v31, v32);
  *(_DWORD *)(v26 + 68) = funcEnt->fields.popupTextColor;
  *(_DWORD *)(v26 + 64) = funcEnt->fields.popupIconId;
  effectList = (System_Int32_array **)funcEnt->fields.effectList;
  *(_QWORD *)(v26 + 72) = effectList;
  sub_B5D560((BattleServantConfConponent_o *)(v26 + 72), effectList, v36, v37, v38, v39, v40, v41);
  *(_DWORD *)(v26 + 28) = 2;
  if ( !v16 )
LABEL_22:
    sub_B5D69C(data, v17);
  BattleActionData__setBuffData(v16, (BattleActionData_BuffData_o *)v26, 0LL, 0LL);
  return v16;
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
  int v13; // w1
  int v14; // w2
  __int64 v15; // x3
  int v16; // w1
  int v17; // w2
  __int64 v18; // x3
  int v19; // w1
  int v20; // w2
  __int64 v21; // x3
  __int64 v22; // x25
  __int64 v23; // x25
  DataManager_o *MasterData_WarQuestSelectionMaster; // x0
  SkillLvMaster_o *v25; // x25
  struct BattleSkillInfoData_o *skillInfo; // x8
  SkillLvEntity_o *v27; // x26
  BattleActionData_o *v28; // x25
  UnityEngine_Object_o *PartsActor; // x27
  BattleServantData_o *monitor; // x0
  int32_t targetId; // w1
  const MethodInfo *v32; // x6
  BattleActionData_o *RevivalHealData; // x0
  UnityEngine_Object_o *v34; // x26
  BattleServantData_o *v35; // x0
  BattleActionData_o *v36; // x0
  BattleActionData_o *v37; // x1
  BattleActionData_o *v38; // x27
  int32_t v39; // w1
  const MethodInfo *v40; // x6
  BattleActionData_o *v41; // x0

  if ( (byte_42EB016 & 1) == 0 )
  {
    sub_B5D5C4(&BattleActionData_TypeInfo, (_DWORD)actionData, (_DWORD)funcEnt, baseVals);
    sub_B5D5C4(&Method_DataManager_GetMasterData_SkillLvMaster___, v13, v14, v15);
    sub_B5D5C4(&UnityEngine_Object_TypeInfo, v16, v17, v18);
    sub_B5D5C4(&Method_SingletonMonoBehaviour_DataManager__getInstance__, v19, v20, v21);
    byte_42EB016 = 1;
  }
  v22 = *((_QWORD *)Method_SingletonMonoBehaviour_DataManager__getInstance__ + 3);
  if ( (*(_BYTE *)(v22 + 306) & 1) == 0 )
    sub_AF52C4(*((_QWORD *)Method_SingletonMonoBehaviour_DataManager__getInstance__ + 3));
  v23 = **(_QWORD **)(v22 + 192);
  if ( (*(_BYTE *)(v23 + 306) & 1) == 0 )
    sub_AF52C4(v23);
  MasterData_WarQuestSelectionMaster = **(DataManager_o ***)(v23 + 184);
  if ( !MasterData_WarQuestSelectionMaster )
    goto LABEL_42;
  MasterData_WarQuestSelectionMaster = (DataManager_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                          MasterData_WarQuestSelectionMaster,
                                                          (const MethodInfo_1AE424C *)Method_DataManager_GetMasterData_SkillLvMaster___);
  if ( !actionData )
    goto LABEL_42;
  v25 = (SkillLvMaster_o *)MasterData_WarQuestSelectionMaster;
  MasterData_WarQuestSelectionMaster = (DataManager_o *)actionData->fields.skillInfo;
  if ( !MasterData_WarQuestSelectionMaster )
    goto LABEL_42;
  MasterData_WarQuestSelectionMaster = (DataManager_o *)((__int64 (__fastcall *)(DataManager_o *, void *))MasterData_WarQuestSelectionMaster->klass[1]._1.namespaze)(
                                                          MasterData_WarQuestSelectionMaster,
                                                          MasterData_WarQuestSelectionMaster->klass[1]._1.byval_arg.data);
  skillInfo = actionData->fields.skillInfo;
  if ( !skillInfo )
    goto LABEL_42;
  if ( !v25 )
    goto LABEL_42;
  MasterData_WarQuestSelectionMaster = (DataManager_o *)SkillLvMaster__GetEntity(
                                                          v25,
                                                          (int32_t)MasterData_WarQuestSelectionMaster,
                                                          skillInfo->fields.skilllv,
                                                          0LL);
  if ( !MasterData_WarQuestSelectionMaster )
    goto LABEL_42;
  v27 = (SkillLvEntity_o *)MasterData_WarQuestSelectionMaster;
  v28 = 0LL;
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
    v28 = 0LL;
    if ( ((unsigned __int8)MasterData_WarQuestSelectionMaster & 1) != 0 )
    {
      if ( !PartsActor )
        goto LABEL_42;
      monitor = (BattleServantData_o *)PartsActor[18].monitor;
      if ( monitor )
      {
        v28 = 0LL;
        if ( !BattleServantData__isAlive(monitor, 0, 0LL) )
        {
          v28 = (BattleActionData_o *)sub_B5D694(BattleActionData_TypeInfo);
          BattleActionData___ctor(v28, 0LL);
          if ( !v28 )
            goto LABEL_42;
          v28->fields.actorId = actionData->fields.actorId;
          v28->fields.targetId = PartsActor[18].fields.m_CachedPtr;
          BattleActionData__setStateActors(v28, 0LL);
          targetId = v28->fields.targetId;
          v28->fields.isRevival = 1;
          v28->fields.motionId = 2201;
          RevivalHealData = BattleLogicFunction__createRevivalHealData(
                              this,
                              targetId,
                              funcEnt,
                              baseVals,
                              funcIndex,
                              isCommandSideEffect,
                              v32);
          BattleActionData__addAction(v28, RevivalHealData, 0LL);
        }
      }
      else
      {
        v28 = 0LL;
      }
    }
  }
  if ( !SkillLvEntity__IsRevivalUnder(v27, 0LL) )
    goto LABEL_34;
  MasterData_WarQuestSelectionMaster = (DataManager_o *)this->fields.data;
  if ( !MasterData_WarQuestSelectionMaster )
LABEL_42:
    sub_B5D69C(MasterData_WarQuestSelectionMaster, actionData);
  v34 = (UnityEngine_Object_o *)BattleData__GetPartsActor((BattleData_o *)MasterData_WarQuestSelectionMaster, 2, 0LL);
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  MasterData_WarQuestSelectionMaster = (DataManager_o *)UnityEngine_Object__op_Inequality(v34, 0LL, 0LL);
  if ( ((unsigned __int8)MasterData_WarQuestSelectionMaster & 1) != 0 )
  {
    if ( v34 )
    {
      v35 = (BattleServantData_o *)v34[18].monitor;
      if ( !v35 || BattleServantData__isAlive(v35, 0, 0LL) )
        goto LABEL_34;
      v38 = (BattleActionData_o *)sub_B5D694(BattleActionData_TypeInfo);
      BattleActionData___ctor(v38, 0LL);
      if ( v38 )
      {
        v38->fields.actorId = actionData->fields.actorId;
        v38->fields.targetId = v34[18].fields.m_CachedPtr;
        BattleActionData__setStateActors(v38, 0LL);
        v39 = v38->fields.targetId;
        v38->fields.isRevival = 1;
        v38->fields.motionId = 2202;
        v41 = BattleLogicFunction__createRevivalHealData(
                this,
                v39,
                funcEnt,
                baseVals,
                funcIndex,
                isCommandSideEffect,
                v40);
        BattleActionData__addAction(v38, v41, 0LL);
        if ( !v28 )
        {
          v36 = actionData;
          v37 = v38;
          goto LABEL_36;
        }
        BattleActionData__AddAfterActionData(v28, v38, 0, 0LL);
LABEL_35:
        v36 = actionData;
        v37 = v28;
LABEL_36:
        BattleActionData__AddAfterActionData(v36, v37, 0, 0LL);
        return;
      }
    }
    goto LABEL_42;
  }
LABEL_34:
  if ( v28 )
    goto LABEL_35;
}


// local variable allocation has failed, the output may be wrong!
void __fastcall BattleLogicFunction__functionShiftServant(
        BattleLogicFunction_o *this,
        BattleActionData_o *actionData,
        BattleServantData_o *targetData,
        int32_t npcId,
        const MethodInfo *method)
{
  int v9; // w1
  int v10; // w2
  __int64 v11; // x3
  int v12; // w1
  int v13; // w2
  __int64 v14; // x3
  __int64 v15; // x22
  __int64 v16; // x0
  __int64 v17; // x1
  System_Int32_array **v18; // x1
  System_String_array **v19; // x2
  System_String_array **v20; // x3
  System_Boolean_array **v21; // x4
  System_Int32_array **v22; // x5
  System_Int32_array *v23; // x6
  System_Int32_array *v24; // x7
  BattleData_o *data; // x24
  BattleActionData_SkillShiftServant_o *v26; // x23

  if ( (byte_42EB013 & 1) == 0 )
  {
    sub_B5D5C4(&BattleActionData_TypeInfo, (_DWORD)actionData, (_DWORD)targetData, *(_QWORD *)&npcId);
    sub_B5D5C4(&BattleActionData_SkillShiftServant_TypeInfo, v9, v10, v11);
    sub_B5D5C4(&StringLiteral_8897/*"MOTION_SHIFT"*/, v12, v13, v14);
    byte_42EB013 = 1;
  }
  v15 = sub_B5D694(BattleActionData_TypeInfo);
  BattleActionData___ctor((BattleActionData_o *)v15, 0LL);
  if ( !targetData )
    goto LABEL_8;
  if ( !v15 )
    goto LABEL_8;
  *(_DWORD *)(v15 + 32) = targetData->fields.uniqueId;
  if ( !actionData )
    goto LABEL_8;
  *(_DWORD *)(v15 + 36) = actionData->fields.targetId;
  BattleActionData__setStateMotion((BattleActionData_o *)v15, 0LL);
  *(_BYTE *)(v15 + 243) = 1;
  v18 = (System_Int32_array **)StringLiteral_8897/*"MOTION_SHIFT"*/;
  *(_QWORD *)(v15 + 64) = StringLiteral_8897/*"MOTION_SHIFT"*/;
  sub_B5D560((BattleServantConfConponent_o *)(v15 + 64), v18, v19, v20, v21, v22, v23, v24);
  data = this->fields.data;
  v26 = (BattleActionData_SkillShiftServant_o *)sub_B5D694(BattleActionData_SkillShiftServant_TypeInfo);
  BattleActionData_SkillShiftServant___ctor(v26, data, npcId, 0LL);
  if ( !v26 )
LABEL_8:
    sub_B5D69C(v16, v17);
  BattleActionData_ShiftServant__setBeforeSvtData((BattleActionData_ShiftServant_o *)v26, targetData, 0LL);
  BattleActionData__setShiftServant((BattleActionData_o *)v15, (BattleActionData_ShiftServant_o *)v26, 0LL);
  BattleActionData__setShiftServant(actionData, (BattleActionData_ShiftServant_o *)v26, 0LL);
  BattleActionData__AddAfterActionData(actionData, (BattleActionData_o *)v15, 1, 0LL);
}


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
  int v15; // w1
  int v16; // w2
  __int64 v17; // x3
  int v18; // w1
  int v19; // w2
  __int64 v20; // x3
  int v21; // w1
  int v22; // w2
  __int64 v23; // x3
  int v24; // w1
  int v25; // w2
  __int64 v26; // x3
  int v27; // w1
  int v28; // w2
  __int64 v29; // x3
  int v30; // w1
  int v31; // w2
  __int64 v32; // x3
  int v33; // w1
  int v34; // w2
  __int64 v35; // x3
  int v36; // w1
  int v37; // w2
  __int64 v38; // x3
  int v39; // w1
  int v40; // w2
  __int64 v41; // x3
  int v42; // w1
  int v43; // w2
  __int64 v44; // x3
  int v45; // w1
  int v46; // w2
  __int64 v47; // x3
  int v48; // w1
  int v49; // w2
  __int64 v50; // x3
  int v51; // w1
  int v52; // w2
  __int64 v53; // x3
  __int64 v54; // x27
  __int64 v55; // x1
  BattleData_o *data; // x0
  System_String_array **v57; // x2
  System_String_array **v58; // x3
  System_Boolean_array **v59; // x4
  System_Int32_array **v60; // x5
  System_Int32_array *v61; // x6
  System_Int32_array *v62; // x7
  BattleServantData_o **v63; // x26
  int32_t rootfsm; // w28
  int v65; // w19
  BattleServantData_o *v66; // x19
  System_Int32_array *vals; // x28
  int32_t Value; // w20
  int32_t Value2; // w0
  DataVals_o *v70; // x8
  int32_t v71; // w25
  RemovedBuffInfo_o *v72; // x0
  System_String_array **v73; // x2
  System_String_array **v74; // x3
  System_Boolean_array **v75; // x4
  System_Int32_array **v76; // x5
  System_Int32_array *v77; // x6
  System_Int32_array *v78; // x7
  const MethodInfo *v79; // x7
  struct System_Collections_Generic_List_BattleBuffData_BuffData__o *RemovedAllBuffList_k__BackingField; // x22
  const MethodInfo *v81; // x6
  int32_t v82; // w19
  BattleServantData_o *v83; // x21
  System_Func_WarBoardManager_WarBoardOnboardSkillTarget__WarBoardPieceData__o *v84; // x19
  System_Collections_Generic_IEnumerable_TSource__o *v85; // x0
  System_Int32_array **v86; // x0
  System_String_array **v87; // x2
  System_String_array **v88; // x3
  System_Boolean_array **v89; // x4
  System_Int32_array **v90; // x5
  System_Int32_array *v91; // x6
  System_Int32_array *v92; // x7
  BattleActionData_o *v93; // x27
  Il2CppObject *current; // x19
  BattleData_o *v95; // x0
  _BOOL8 v96; // x0
  __int64 v97; // x1
  _BOOL8 v98; // x0
  __int64 v99; // x1
  BattleActionEffect_SubChangeMaxHpBuff_o *v100; // x19
  BattleData_o *v101; // x20
  System_Int32_array **v102; // x0
  System_String_array **v103; // x2
  System_String_array **v104; // x3
  System_Boolean_array **v105; // x4
  System_Int32_array **v106; // x5
  System_Int32_array *v107; // x6
  System_Int32_array *v108; // x7
  int v110; // [xsp+Ch] [xbp-B4h]
  int v111; // [xsp+10h] [xbp-B0h]
  int32_t v112; // [xsp+14h] [xbp-ACh]
  BattleActionData_o *v113; // [xsp+18h] [xbp-A8h]
  DataVals_o *dataVals; // [xsp+28h] [xbp-98h]
  unsigned int targetIda; // [xsp+34h] [xbp-8Ch]
  System_Collections_Generic_List_Enumerator_T__o v118; // [xsp+38h] [xbp-88h] BYREF
  System_Collections_Generic_List_Enumerator_T__o v119; // [xsp+50h] [xbp-70h] BYREF

  if ( (byte_42EAFF2 & 1) == 0 )
  {
    sub_B5D5C4(&BattleActionData_TypeInfo, targetId, (_DWORD)funcEnt, baseVals);
    sub_B5D5C4(&Method_System_Linq_Enumerable_Select_BattleBuffData_BuffData__BattleBuffData_BuffData___, v15, v16, v17);
    sub_B5D5C4(&Method_System_Linq_Enumerable_ToList_BattleBuffData_BuffData___, v18, v19, v20);
    sub_B5D5C4(&Method_System_Collections_Generic_List_Enumerator_BattleBuffData_BuffData__Dispose__, v21, v22, v23);
    sub_B5D5C4(&Method_System_Collections_Generic_List_Enumerator_BattleBuffData_BuffData__MoveNext__, v24, v25, v26);
    sub_B5D5C4(&Method_System_Collections_Generic_List_Enumerator_BattleBuffData_BuffData__get_Current__, v27, v28, v29);
    sub_B5D5C4(&Method_System_Func_BattleBuffData_BuffData__BattleBuffData_BuffData___ctor__, v30, v31, v32);
    sub_B5D5C4(&System_Func_BattleBuffData_BuffData__BattleBuffData_BuffData__TypeInfo, v33, v34, v35);
    sub_B5D5C4(&Method_System_Collections_Generic_List_BattleBuffData_BuffData__GetEnumerator__, v36, v37, v38);
    sub_B5D5C4(&Method_System_Collections_Generic_List_BattleBuffData_BuffData__ToArray__, v39, v40, v41);
    sub_B5D5C4(&Method_System_Collections_Generic_List_BattleBuffData_BuffData__get_Count__, v42, v43, v44);
    sub_B5D5C4(&BattleActionEffect_SubChangeMaxHpBuff_TypeInfo, v45, v46, v47);
    sub_B5D5C4(&Method_BattleLogicFunction___c__DisplayClass69_0__functionSubState_b__0__, v48, v49, v50);
    sub_B5D5C4(&BattleLogicFunction___c__DisplayClass69_0_TypeInfo, v51, v52, v53);
    byte_42EAFF2 = 1;
  }
  memset(&v119, 0, sizeof(v119));
  v54 = sub_B5D694(BattleLogicFunction___c__DisplayClass69_0_TypeInfo);
  BattleLogicFunction___c__DisplayClass69_0___ctor((BattleLogicFunction___c__DisplayClass69_0_o *)v54, 0LL);
  v113 = (BattleActionData_o *)sub_B5D694(BattleActionData_TypeInfo);
  BattleActionData___ctor(v113, 0LL);
  data = this->fields.data;
  if ( !data )
    goto LABEL_34;
  data = (BattleData_o *)BattleData__getServantData(data, targetId, 0LL);
  if ( !v54 )
    goto LABEL_34;
  *(_QWORD *)(v54 + 16) = data;
  v63 = (BattleServantData_o **)(v54 + 16);
  sub_B5D560((BattleServantConfConponent_o *)(v54 + 16), (System_Int32_array **)data, v57, v58, v59, v60, v61, v62);
  data = *(BattleData_o **)(v54 + 16);
  if ( !data )
    goto LABEL_34;
  data = (BattleData_o *)BattleServantData__getAuraIdList((BattleServantData_o *)data, 0LL);
  if ( !data )
    goto LABEL_34;
  if ( !*v63 )
    goto LABEL_34;
  rootfsm = (int32_t)data->fields.rootfsm;
  data = (BattleData_o *)BattleServantData__getMaxHp(*v63, 0LL);
  if ( !*v63 )
    goto LABEL_34;
  v65 = (int)data;
  data = (BattleData_o *)BattleServantData__getNowHp(*v63, 0LL);
  if ( !funcEnt )
    goto LABEL_34;
  v111 = v65;
  v112 = rootfsm;
  v110 = (int)data;
  targetIda = targetId;
  if ( !baseVals )
    goto LABEL_34;
  v66 = *v63;
  vals = funcEnt->fields.vals;
  Value = DataVals__GetValue(baseVals, 0LL);
  Value2 = DataVals__GetValue2(baseVals, 0LL);
  v70 = baseVals;
  v71 = Value2;
  dataVals = v70;
  data = (BattleData_o *)DataVals__isParam(v70, 89, 0LL);
  if ( !v66 )
    goto LABEL_34;
  v72 = BattleServantData__subBuffFromIndividualites(v66, vals, Value, v71, 1, (unsigned __int8)data & 1, 0LL);
  *subBuffInfo = v72;
  sub_B5D560((BattleServantConfConponent_o *)subBuffInfo, (System_Int32_array **)v72, v73, v74, v75, v76, v77, v78);
  if ( !*subBuffInfo )
    goto LABEL_34;
  RemovedAllBuffList_k__BackingField = (*subBuffInfo)->fields._RemovedAllBuffList_k__BackingField;
  if ( !RemovedAllBuffList_k__BackingField )
    goto LABEL_34;
  if ( RemovedAllBuffList_k__BackingField->fields._size < 1 )
    return BattleLogicFunction__getNoEffectObject(this, targetIda, index, dataVals, isCommandSideEffect, 0LL, 0LL, v79);
  data = (BattleData_o *)*v63;
  if ( !*v63 )
    goto LABEL_34;
  data = (BattleData_o *)BattleServantData__getAuraIdList((BattleServantData_o *)data, 0LL);
  if ( !data )
    goto LABEL_34;
  if ( !*v63 )
    goto LABEL_34;
  v82 = (int32_t)data->fields.rootfsm;
  data = (BattleData_o *)BattleLogicFunction__getFunctionObject(
                           (BattleLogicFunction_o *)data,
                           funcEnt,
                           (*v63)->fields.uniqueId,
                           index,
                           isCommandSideEffect,
                           0LL,
                           v81);
  if ( !data )
    goto LABEL_34;
  v83 = (BattleServantData_o *)data;
  BYTE4(data->fields.boostSkillInfo) = v112 > v82;
  v84 = (System_Func_WarBoardManager_WarBoardOnboardSkillTarget__WarBoardPieceData__o *)sub_B5D694(System_Func_BattleBuffData_BuffData__BattleBuffData_BuffData__TypeInfo);
  System_Func_WarBoardManager_WarBoardOnboardSkillTarget__WarBoardPieceData____ctor(
    v84,
    (Il2CppObject *)v54,
    Method_BattleLogicFunction___c__DisplayClass69_0__functionSubState_b__0__,
    (const MethodInfo_2C3041C *)Method_System_Func_BattleBuffData_BuffData__BattleBuffData_BuffData___ctor__);
  v85 = (System_Collections_Generic_IEnumerable_TSource__o *)System_Linq_Enumerable__Select_WarBoardManager_WarBoardOnboardSkillTarget__WarBoardPieceData_(
                                                               (System_Collections_Generic_IEnumerable_TSource__o *)RemovedAllBuffList_k__BackingField,
                                                               (System_Func_TSource__TResult__o *)v84,
                                                               (const MethodInfo_1CB354C *)Method_System_Linq_Enumerable_Select_BattleBuffData_BuffData__BattleBuffData_BuffData___);
  v86 = (System_Int32_array **)System_Linq_Enumerable__ToList_WarBoardManager_WarBoardOnboardSkillTarget_(
                                 v85,
                                 (const MethodInfo_1CBA734 *)Method_System_Linq_Enumerable_ToList_BattleBuffData_BuffData___);
  *(_QWORD *)&v83->fields._frameType_k__BackingField = v86;
  sub_B5D560((BattleServantConfConponent_o *)&v83->fields._frameType_k__BackingField, v86, v87, v88, v89, v90, v91, v92);
  v93 = v113;
  if ( !v113 )
    goto LABEL_34;
  BattleActionData__setBuffData(v113, (BattleActionData_BuffData_o *)v83, dataVals, 0LL);
  System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo___GetEnumerator(
    &v118,
    (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)RemovedAllBuffList_k__BackingField,
    (const MethodInfo_3057E3C *)Method_System_Collections_Generic_List_BattleBuffData_BuffData__GetEnumerator__);
  v119 = v118;
  while ( 1 )
  {
    v98 = System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___MoveNext(
            &v119,
            (const MethodInfo_201EFD0 *)Method_System_Collections_Generic_List_Enumerator_BattleBuffData_BuffData__MoveNext__);
    if ( !v98 )
      break;
    current = v119.fields.current;
    if ( !v119.fields.current )
      sub_B5D69C(v98, v99);
    v95 = this->fields.data;
    if ( !v95 )
      sub_B5D69C(0LL, v99);
    BattleData__RemoveDoNotSelectCommandCardBuff(v95, (int32_t)v119.fields.current[1].klass, *v63, 0LL);
    v96 = BattleBuffData__CheckInvalidSacrificeIndiv((BattleBuffData_BuffData_o *)current, 0LL);
    if ( v96 )
    {
      if ( !args )
        sub_B5D69C(v96, v97);
      args->fields.updateField = 1;
    }
  }
  System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___Dispose(
    &v119,
    (const MethodInfo_201EFCC *)Method_System_Collections_Generic_List_Enumerator_BattleBuffData_BuffData__Dispose__);
  data = (BattleData_o *)*v63;
  if ( !*v63 )
    goto LABEL_34;
  if ( v111 != BattleServantData__getMaxHp((BattleServantData_o *)data, 0LL) )
  {
    BattleActionData__addReflectLogicResultServantId(v113, targetIda, 0LL);
    v100 = (BattleActionEffect_SubChangeMaxHpBuff_o *)sub_B5D694(BattleActionEffect_SubChangeMaxHpBuff_TypeInfo);
    BattleActionEffect_SubChangeMaxHpBuff___ctor(v100, 0LL);
    data = (BattleData_o *)System_Collections_Generic_List_WarBoardUiData_SaveData___ToArray(
                             (System_Collections_Generic_List_WarBoardUiData_SaveData__o *)RemovedAllBuffList_k__BackingField,
                             (const MethodInfo_305910C *)Method_System_Collections_Generic_List_BattleBuffData_BuffData__ToArray__);
    if ( *v63 )
    {
      v101 = data;
      data = (BattleData_o *)BattleServantData__getNowHp(*v63, 0LL);
      if ( v100 )
      {
        v102 = (System_Int32_array **)((__int64 (__fastcall *)(BattleActionEffect_SubChangeMaxHpBuff_o *, BattleData_o *, _QWORD, _QWORD, Il2CppMethodPointer))v100->klass->vtable._7_InitBuff.method)(
                                        v100,
                                        v101,
                                        targetIda,
                                        (unsigned int)((_DWORD)data - v110),
                                        v100->klass->vtable._8_PartialPreActionProc.methodPtr);
        *(_QWORD *)&v83->fields._commandCardLimitCount_k__BackingField.fields.currentCryptoKey = v102;
        sub_B5D560(
          (BattleServantConfConponent_o *)&v83->fields._commandCardLimitCount_k__BackingField,
          v102,
          v103,
          v104,
          v105,
          v106,
          v107,
          v108);
        return v93;
      }
    }
LABEL_34:
    sub_B5D69C(data, v55);
  }
  return v93;
}


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

  if ( (byte_42EB002 & 1) == 0 )
  {
    sub_B5D5C4(&BattleActionData_TypeInfo, targetId, (_DWORD)funcEnt, baeVals);
    byte_42EB002 = 1;
  }
  v10 = (BattleActionData_o *)sub_B5D694(BattleActionData_TypeInfo);
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
    sub_B5D69C(data, v11);
  BattleActionData__AddTransformServant(v10, Param, targetId, funcIndex, v15, 0LL);
  return v10;
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
  int v15; // w1
  int v16; // w2
  __int64 v17; // x3
  int v18; // w1
  int v19; // w2
  __int64 v20; // x3
  int v21; // w1
  int v22; // w2
  __int64 v23; // x3
  int v24; // w1
  int v25; // w2
  __int64 v26; // x3
  int v27; // w1
  int v28; // w2
  __int64 v29; // x3
  int v30; // w1
  int v31; // w2
  __int64 v32; // x3
  int v33; // w1
  int v34; // w2
  __int64 v35; // x3
  int v36; // w1
  int v37; // w2
  __int64 v38; // x3
  int v39; // w1
  int v40; // w2
  __int64 v41; // x3
  int v42; // w1
  int v43; // w2
  __int64 v44; // x3
  int v45; // w1
  int v46; // w2
  __int64 v47; // x3
  int v48; // w1
  int v49; // w2
  __int64 v50; // x3
  int v51; // w1
  int v52; // w2
  __int64 v53; // x3
  int v54; // w1
  int v55; // w2
  __int64 v56; // x3
  BattleActionData_o *v57; // x26
  __int64 v58; // x1
  __int64 data; // x0
  BattleServantData_o *v60; // x27
  BattleServantData_o *ServantData; // x24
  __int64 v62; // x25
  int32_t Value; // w19
  int32_t Param; // w0
  int IsIgnoreShiftSafeDamage; // w26
  struct BattleSkillInfoData_o *skillInfo; // x8
  DataMasterBase_WarMaster__WarEntity__int__o *v67; // x28
  int v68; // w19
  int v70; // w10
  System_String_array **v71; // x2
  System_String_array **v72; // x3
  System_Boolean_array **v73; // x4
  System_Int32_array **v74; // x5
  System_Int32_array *v75; // x6
  System_Int32_array *v76; // x7
  int32_t v77; // w8
  System_Int32_array **v78; // x0
  System_String_array **v79; // x2
  System_String_array **v80; // x3
  System_Boolean_array **v81; // x4
  System_Int32_array **v82; // x5
  System_Int32_array *v83; // x6
  System_Int32_array *v84; // x7
  System_Int32_array **v85; // x0
  System_String_array **v86; // x2
  System_String_array **v87; // x3
  System_Boolean_array **v88; // x4
  System_Int32_array **v89; // x5
  System_Int32_array *v90; // x6
  System_Int32_array *v91; // x7
  System_Collections_Generic_List_int__o *v92; // x28
  DataVals_o *v93; // x22
  System_Collections_Generic_IEnumerable_int__o *FixDamageRates; // x26
  void *monitor; // x8
  unsigned __int64 v96; // x19
  __int64 v97; // x23
  int size; // w8
  int32_t v99; // w26
  int32_t v100; // w20
  int32_t v101; // w19
  int32_t v102; // w0
  System_Int32_array **v103; // x0
  System_String_array **v104; // x2
  System_String_array **v105; // x3
  System_Boolean_array **v106; // x4
  System_Int32_array **v107; // x5
  System_Int32_array *v108; // x6
  System_Int32_array *v109; // x7
  System_Int32_array **v110; // x0
  System_String_array **v111; // x2
  System_String_array **v112; // x3
  System_Boolean_array **v113; // x4
  System_Int32_array **v114; // x5
  System_Int32_array *v115; // x6
  System_Int32_array *v116; // x7
  System_Int32_array **v117; // x0
  System_String_array **v118; // x2
  System_String_array **v119; // x3
  System_Boolean_array **v120; // x4
  System_Int32_array **v121; // x5
  System_Int32_array *v122; // x6
  System_Int32_array *v123; // x7
  System_Int32_array **v124; // x0
  System_String_array **v125; // x2
  System_String_array **v126; // x3
  System_Boolean_array **v127; // x4
  System_Int32_array **v128; // x5
  System_Int32_array *v129; // x6
  System_Int32_array *v130; // x7
  struct BattleData_o *v131; // x8
  int32_t v132; // w19
  bool IsOpponentPTUniqueID; // w0
  __int64 v135; // x0
  BattleActionData_o *v136; // [xsp+20h] [xbp-90h]
  bool v137; // [xsp+30h] [xbp-80h]
  BattleLogicFunction_o *v138; // [xsp+30h] [xbp-80h]
  int32_t v139; // [xsp+3Ch] [xbp-74h]
  int32_t v140; // [xsp+3Ch] [xbp-74h]
  int Random; // [xsp+40h] [xbp-70h]
  WarEntity_o *entity; // [xsp+48h] [xbp-68h] BYREF
  bool minimumDamageFlg; // [xsp+54h] [xbp-5Ch] BYREF
  float damage; // [xsp+58h] [xbp-58h] BYREF
  int32_t hitStat; // [xsp+5Ch] [xbp-54h] BYREF

  if ( (byte_42EB009 & 1) == 0 )
  {
    sub_B5D5C4(&BattleActionData_TypeInfo, playerId, targetId, baseVals);
    sub_B5D5C4(&BattleActionData_DamageData_TypeInfo, v15, v16, v17);
    sub_B5D5C4(&Method_DataManager_GetMaster_SkillMaster___, v18, v19, v20);
    sub_B5D5C4(&DataManager_TypeInfo, v21, v22, v23);
    sub_B5D5C4(&Method_DataMasterBase_SkillMaster__SkillEntity__int__TryGetEntity__, v24, v25, v26);
    sub_B5D5C4(&int___TypeInfo, v27, v28, v29);
    sub_B5D5C4(&Method_System_Collections_Generic_List_int__Add__, v30, v31, v32);
    sub_B5D5C4(&Method_System_Collections_Generic_List_int__ToArray__, v33, v34, v35);
    sub_B5D5C4(&Method_System_Collections_Generic_List_int___ctor___68740224, v36, v37, v38);
    sub_B5D5C4(&Method_System_Collections_Generic_List_int__get_Count__, v39, v40, v41);
    sub_B5D5C4(&Method_System_Collections_Generic_List_int__get_Item__, v42, v43, v44);
    sub_B5D5C4(&Method_System_Collections_Generic_List_int__set_Item__, v45, v46, v47);
    sub_B5D5C4(&System_Collections_Generic_List_int__TypeInfo, v48, v49, v50);
    sub_B5D5C4(&System_Math_TypeInfo, v51, v52, v53);
    sub_B5D5C4(&BattleBuffData_ShowBuffData___TypeInfo, v54, v55, v56);
    byte_42EB009 = 1;
  }
  hitStat = 0;
  damage = 0.0;
  minimumDamageFlg = 0;
  entity = 0LL;
  v57 = (BattleActionData_o *)sub_B5D694(BattleActionData_TypeInfo);
  BattleActionData___ctor(v57, 0LL);
  data = (__int64)this->fields.data;
  if ( !data )
    goto LABEL_61;
  v137 = safe;
  v139 = funcIndex;
  data = (__int64)BattleData__getServantData((BattleData_o *)data, playerId, 0LL);
  if ( !this->fields.data )
    goto LABEL_61;
  v60 = (BattleServantData_o *)data;
  ServantData = BattleData__getServantData(this->fields.data, targetId, 0LL);
  v62 = sub_B5D694(BattleActionData_DamageData_TypeInfo);
  BattleActionData_DamageData___ctor((BattleActionData_DamageData_o *)v62, 0LL);
  if ( !baseVals )
    goto LABEL_61;
  Value = DataVals__GetValue(baseVals, 0LL);
  Param = DataVals__GetParam(baseVals, 4, 0, 0LL);
  Random = BattleRandom__getRandom(Value, Param + 1, 0LL);
  hitStat = 0;
  data = DataVals__IsActNoDamageBuff(baseVals, 0LL);
  v136 = v57;
  if ( (data & 1) != 0 )
  {
    if ( !ServantData )
      goto LABEL_61;
    BattleServantData__CheckNoDamageBuff(
      ServantData,
      this->fields.data,
      v60,
      0LL,
      (BattleActionData_DamageData_o *)v62,
      mainAction,
      0LL);
    damage = (float)Random;
    minimumDamageFlg = 1;
    BattleServantData__CheckInvincibleAvoidanceBuff(
      ServantData,
      this->fields.data,
      v60,
      0LL,
      (BattleActionData_DamageData_o *)v62,
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
    data = (__int64)DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_1AE41EC *)Method_DataManager_GetMaster_SkillMaster___);
    skillInfo = mainAction->fields.skillInfo;
    if ( !skillInfo )
      goto LABEL_61;
    v67 = (DataMasterBase_WarMaster__WarEntity__int__o *)data;
    data = ((__int64 (__fastcall *)(struct BattleSkillInfoData_o *, Il2CppMethodPointer))skillInfo->klass->vtable._5_get_skillId.method)(
             skillInfo,
             skillInfo->klass->vtable._6_get_IndividualityArray.methodPtr);
    if ( !v67 )
      goto LABEL_61;
    if ( DataMasterBase_WarMaster__WarEntity__int___TryGetEntity(
           v67,
           &entity,
           data,
           (const MethodInfo_23FAE6C *)Method_DataMasterBase_SkillMaster__SkillEntity__int__TryGetEntity__) )
    {
      data = (__int64)entity;
      if ( !entity )
        goto LABEL_61;
      IsIgnoreShiftSafeDamage |= SkillEntity__IsCheckUpdateShiftServant((SkillEntity_o *)entity, 0LL);
    }
  }
  data = (__int64)this->fields.data;
  if ( !data )
    goto LABEL_61;
  data = BattleData__IsDeadOkTurn((BattleData_o *)data, targetId, 0LL);
  if ( ((IsIgnoreShiftSafeDamage | (unsigned int)data) & 1) == 0 )
  {
    if ( !ServantData )
      goto LABEL_61;
    v68 = ((__int64 (__fastcall *)(BattleServantData_o *, Il2CppMethodPointer))ServantData->klass->vtable._9_get_hp.method)(
            ServantData,
            ServantData->klass->vtable._10_set_hp.methodPtr);
    data = ((__int64 (__fastcall *)(BattleServantData_o *, Il2CppMethodPointer))ServantData->klass->vtable._11_get_reducedhp.method)(
             ServantData,
             ServantData->klass->vtable._12_set_reducedhp.methodPtr);
    if ( v68 - (int)data >= Random || v68 - (int)data <= 0 )
      v70 = Random;
    else
      v70 = v68 - data - 1;
    Random = v70;
LABEL_35:
    if ( !v62 )
      goto LABEL_61;
    goto LABEL_36;
  }
  if ( !v137 )
    goto LABEL_35;
  if ( !ServantData )
    goto LABEL_61;
  data = ((__int64 (__fastcall *)(BattleServantData_o *, Il2CppMethodPointer))ServantData->klass->vtable._13_get_resultHp.method)(
           ServantData,
           ServantData->klass->vtable._14_set_resultHp.methodPtr);
  if ( (int)data - Random > 0 )
    goto LABEL_35;
  data = ((__int64 (__fastcall *)(BattleServantData_o *, Il2CppMethodPointer))ServantData->klass->vtable._13_get_resultHp.method)(
           ServantData,
           ServantData->klass->vtable._14_set_resultHp.methodPtr);
  Random = data - 1;
  if ( !v62 )
    goto LABEL_61;
LABEL_36:
  *(_DWORD *)(v62 + 28) = targetId;
  *(_DWORD *)(v62 + 16) = v139;
  data = (__int64)baseVals->fields.funcEnt;
  if ( !data )
    goto LABEL_61;
  data = (__int64)FunctionEntity__getEffectList((FunctionEntity_o *)data, 0LL);
  if ( !data )
    goto LABEL_61;
  v138 = this;
  if ( *(_QWORD *)(data + 24) )
  {
    *(_QWORD *)(v62 + 136) = data;
    sub_B5D560((BattleServantConfConponent_o *)(v62 + 136), (System_Int32_array **)data, v71, v72, v73, v74, v75, v76);
  }
  *(_WORD *)(v62 + 32) = 0;
  *(_BYTE *)(v62 + 34) = 0;
  v77 = hitStat;
  v140 = playerId;
  *(_BYTE *)(v62 + 40) = 0;
  *(_DWORD *)(v62 + 36) = v77;
  v78 = (System_Int32_array **)sub_B5D5DC(BattleBuffData_ShowBuffData___TypeInfo, 0LL);
  *(_QWORD *)(v62 + 64) = v78;
  sub_B5D560((BattleServantConfConponent_o *)(v62 + 64), v78, v79, v80, v81, v82, v83, v84);
  v85 = (System_Int32_array **)sub_B5D5DC(BattleBuffData_ShowBuffData___TypeInfo, 0LL);
  *(_QWORD *)(v62 + 72) = v85;
  sub_B5D560((BattleServantConfConponent_o *)(v62 + 72), v85, v86, v87, v88, v89, v90, v91);
  v92 = (System_Collections_Generic_List_int__o *)sub_B5D694(System_Collections_Generic_List_int__TypeInfo);
  System_Collections_Generic_List_int____ctor(
    v92,
    (const MethodInfo_30836B0 *)Method_System_Collections_Generic_List_int___ctor___68740224);
  v93 = baseVals;
  FixDamageRates = (System_Collections_Generic_IEnumerable_int__o *)DataVals__GetFixDamageRates(baseVals, 0LL);
  data = System_Linq_Enumerable__Sum(FixDamageRates, 0LL);
  if ( !FixDamageRates )
    goto LABEL_61;
  monitor = FixDamageRates[1].monitor;
  if ( (int)monitor >= 1 )
  {
    v96 = 0LL;
    v97 = (int)data;
    do
    {
      if ( v96 >= (unsigned int)monitor )
      {
        v135 = sub_B5D6C8(data);
        sub_B5D668(v135, 0LL);
      }
      if ( !v92 )
        goto LABEL_61;
      System_Collections_Generic_List_int___Add(
        v92,
        *((int *)&FixDamageRates[2].klass + v96) * (__int64)Random / v97,
        (const MethodInfo_308440C *)Method_System_Collections_Generic_List_int__Add__);
      LODWORD(monitor) = FixDamageRates[1].monitor;
    }
    while ( (__int64)++v96 < (int)monitor );
  }
  if ( !v92 )
    goto LABEL_61;
  size = v92->fields._size;
  v99 = size - 1;
  if ( size >= 1 )
  {
    v100 = v92->fields._items->m_Items[v99 + 1];
    v101 = System_Linq_Enumerable__Sum((System_Collections_Generic_IEnumerable_int__o *)v92, 0LL);
    if ( (BYTE3(System_Math_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !System_Math_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(System_Math_TypeInfo);
    v102 = System_Math__Max_45149472(0, Random - v101, 0LL);
    System_Collections_Generic_List_int___set_Item(
      v92,
      v99,
      v102 + v100,
      (const MethodInfo_30840CC *)Method_System_Collections_Generic_List_int__set_Item__);
  }
  v103 = (System_Int32_array **)System_Collections_Generic_List_int___ToArray(
                                  v92,
                                  (const MethodInfo_3086518 *)Method_System_Collections_Generic_List_int__ToArray__);
  *(_QWORD *)(v62 + 96) = v103;
  sub_B5D560((BattleServantConfConponent_o *)(v62 + 96), v103, v104, v105, v106, v107, v108, v109);
  v110 = (System_Int32_array **)sub_B5D5DC(int___TypeInfo, 0LL);
  *(_QWORD *)(v62 + 104) = v110;
  sub_B5D560((BattleServantConfConponent_o *)(v62 + 104), v110, v111, v112, v113, v114, v115, v116);
  v117 = (System_Int32_array **)sub_B5D5DC(int___TypeInfo, 0LL);
  *(_QWORD *)(v62 + 112) = v117;
  sub_B5D560((BattleServantConfConponent_o *)(v62 + 112), v117, v118, v119, v120, v121, v122, v123);
  v124 = (System_Int32_array **)sub_B5D5DC(int___TypeInfo, 0LL);
  *(_QWORD *)(v62 + 120) = v124;
  sub_B5D560((BattleServantConfConponent_o *)(v62 + 120), v124, v125, v126, v127, v128, v129, v130);
  if ( !ServantData )
    goto LABEL_61;
  BattleServantData__provisionalDamage(ServantData, Random, 0LL);
  BattleServantData__ResultDamage(ServantData, Random, v60, 0LL, 0, 0LL);
  data = BattleServantData__isLogicResultAlive(ServantData, 0LL);
  if ( (data & 1) == 0 )
  {
    v131 = v138->fields.data;
    if ( !v131 )
      goto LABEL_61;
    ServantData->fields.deadTurn = v131->fields.typeTurn;
  }
  data = DataVals__IsActAttackFunction(v93, 0LL);
  if ( (data & 1) != 0 )
    BattleActionData_DamageData__addAttackSideEffectAction((BattleActionData_DamageData_o *)v62, 80, 0LL);
  if ( !v136
    || (BattleActionData__setDamageData(v136, (BattleActionData_DamageData_o *)v62, v93, 0, 0, 0LL),
        (data = (__int64)v138->fields.data) == 0) )
  {
LABEL_61:
    sub_B5D69C(data, v58);
  }
  v132 = *(_DWORD *)(data + 188);
  IsOpponentPTUniqueID = BattleData__IsOpponentPTUniqueID((BattleData_o *)data, targetId, v140, 0LL);
  BattleServantData__setActionHistory(ServantData, v140, 7, v132, IsOpponentPTUniqueID, 0LL);
  return v136;
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
  int v19; // w1
  int v20; // w2
  __int64 v21; // x3
  int v22; // w1
  int v23; // w2
  __int64 v24; // x3
  int v25; // w1
  int v26; // w2
  __int64 v27; // x3
  BattleActionData_o *v28; // x20
  __int64 v29; // x1
  __int64 data; // x0
  int Random; // w27
  BattleServantData_o *v32; // x24
  int v33; // w19
  int32_t Param; // w0
  _BOOL8 IsDeadOkTurn; // x0
  const MethodInfo *v36; // x6
  __int64 v37; // x23
  BattleServantData_o *v38; // x25
  BattleActionData_DamageData_o *v39; // x19
  System_String_array **v40; // x2
  System_String_array **v41; // x3
  System_Boolean_array **v42; // x4
  System_Int32_array **v43; // x5
  System_Int32_array *v44; // x6
  System_Int32_array *v45; // x7
  struct BattleBuffData_o *buffData; // x8
  BattleServantConfConponent_o *v47; // x0
  System_Int32_array **v48; // x1
  bool v49; // w28
  UnityEngine_Object_o *logic; // x19
  int32_t Wave; // w19
  bool IsOpponentPTUniqueID; // w0
  BattleActionEffect_LossHPFunc_o *v53; // x19
  System_String_array **v54; // x2
  System_String_array **v55; // x3
  System_Boolean_array **v56; // x4
  System_Int32_array **v57; // x5
  System_Int32_array *v58; // x6
  System_Int32_array *v59; // x7
  BattleActionData_BuffData_o *v60; // x0
  struct BattleBuffData_o *v61; // x8
  int32_t v62; // w0
  int32_t before; // [xsp+14h] [xbp-6Ch]
  bool v65; // [xsp+18h] [xbp-68h]
  bool v66; // [xsp+1Ch] [xbp-64h]
  int32_t bId; // [xsp+24h] [xbp-5Ch]
  bool minimumDamageFlg; // [xsp+28h] [xbp-58h] BYREF
  float damage; // [xsp+2Ch] [xbp-54h] BYREF

  if ( (byte_42EAFFA & 1) == 0 )
  {
    sub_B5D5C4(&BattleActionData_TypeInfo, playerId, targetId, funcEnt);
    sub_B5D5C4(&BattleActionData_DamageData_TypeInfo, v19, v20, v21);
    sub_B5D5C4(&BattleActionEffect_LossHPFunc_TypeInfo, v22, v23, v24);
    sub_B5D5C4(&UnityEngine_Object_TypeInfo, v25, v26, v27);
    byte_42EAFFA = 1;
  }
  damage = 0.0;
  minimumDamageFlg = 0;
  v28 = (BattleActionData_o *)sub_B5D694(BattleActionData_TypeInfo);
  BattleActionData___ctor(v28, 0LL);
  data = (__int64)this->fields.data;
  if ( !data )
    goto LABEL_51;
  v66 = safe;
  data = (__int64)BattleData__getServantData((BattleData_o *)data, targetId, 0LL);
  if ( !data )
    goto LABEL_51;
  Random = overwriteLossHp;
  v32 = (BattleServantData_o *)data;
  data = (*(__int64 (__fastcall **)(__int64, _QWORD))(*(_QWORD *)data + 520LL))(
           data,
           *(_QWORD *)(*(_QWORD *)data + 528LL));
  v33 = data;
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
  if ( v33 < 1 )
    return 0LL;
  data = (__int64)this->fields.data;
  if ( !data )
    goto LABEL_51;
  IsDeadOkTurn = BattleData__IsDeadOkTurn((BattleData_o *)data, targetId, 0LL);
  v65 = IsDeadOkTurn;
  data = (__int64)BattleLogicFunction__getFunctionObject(
                    (BattleLogicFunction_o *)IsDeadOkTurn,
                    funcEnt,
                    v32->fields.uniqueId,
                    funcIndex,
                    isCommandSideEffect,
                    0LL,
                    v36);
  if ( !this->fields.data )
    goto LABEL_51;
  v37 = data;
  data = (__int64)BattleData__getServantData(this->fields.data, playerId, 0LL);
  if ( !baseVals )
    goto LABEL_51;
  v38 = (BattleServantData_o *)data;
  before = v33;
  bId = playerId;
  if ( DataVals__IsActNoDamageBuff(baseVals, 0LL) )
  {
    v39 = (BattleActionData_DamageData_o *)sub_B5D694(BattleActionData_DamageData_TypeInfo);
    BattleActionData_DamageData___ctor(v39, 0LL);
    BattleServantData__CheckNoDamageBuff(v32, this->fields.data, v38, 0LL, v39, mainAction, 0LL);
    damage = (float)Random;
    minimumDamageFlg = 1;
    if ( !v39 )
      goto LABEL_51;
    v39->fields.hitStates = 0;
    BattleServantData__CheckInvincibleAvoidanceBuff(
      v32,
      this->fields.data,
      v38,
      0LL,
      v39,
      &damage,
      &minimumDamageFlg,
      &v39->fields.hitStates,
      mainAction,
      0LL);
    buffData = v32->fields.buffData;
    if ( damage <= 0.0 )
      Random = 0;
    if ( !buffData )
      goto LABEL_51;
    if ( buffData->fields.isNoDamage )
    {
      v39->fields.noDamage = 1;
      if ( !v37 )
        goto LABEL_51;
      *(_QWORD *)(v37 + 168) = v39;
      v47 = (BattleServantConfConponent_o *)(v37 + 168);
      v48 = (System_Int32_array **)v39;
    }
    else
    {
      if ( !v37 )
        goto LABEL_51;
      *(_QWORD *)(v37 + 168) = 0LL;
      v47 = (BattleServantConfConponent_o *)(v37 + 168);
      v48 = 0LL;
    }
    sub_B5D560(v47, v48, v40, v41, v42, v43, v44, v45);
  }
  v49 = !v65 || v66;
  BattleServantData__ResultDamage(v32, Random, v38, 0LL, v49, 0LL);
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
        BattleServantData__setActionHistory(v32, bId, 3, Wave, IsOpponentPTUniqueID, 0LL),
        !v37)
    || (*(_DWORD *)(v37 + 28) = 2,
        v53 = (BattleActionEffect_LossHPFunc_o *)sub_B5D694(BattleActionEffect_LossHPFunc_TypeInfo),
        BattleActionEffect_LossHPFunc___ctor(v53, targetId, Random, v49, 0LL),
        *(_QWORD *)(v37 + 128) = v53,
        sub_B5D560(
          (BattleServantConfConponent_o *)(v37 + 128),
          (System_Int32_array **)v53,
          v54,
          v55,
          v56,
          v57,
          v58,
          v59),
        !v28) )
  {
LABEL_51:
    sub_B5D69C(data, v29);
  }
  BattleActionData__setBuffData(v28, (BattleActionData_BuffData_o *)v37, baseVals, 0LL);
  data = DataVals__isLossHpChangeDamage(baseVals, 0LL);
  if ( (data & 1) != 0 )
  {
    if ( !DataVals__IsActNoDamageBuff(baseVals, 0LL) )
    {
      data = (__int64)v32->fields.buffData;
      if ( !data )
        goto LABEL_51;
      goto LABEL_45;
    }
    data = DataVals__IsActNoDamageBuff(baseVals, 0LL);
    if ( (data & 1) != 0 )
    {
      data = (__int64)v32->fields.buffData;
      if ( !data )
        goto LABEL_51;
      if ( !*(_BYTE *)(data + 152) )
      {
LABEL_45:
        v60 = BattleBuffData__UseFieldProgressingDoNotAct((BattleBuffData_o *)data, v32, funcIndex, 0LL);
        BattleActionData__setBuffData(v28, v60, baseVals, 0LL);
      }
    }
  }
  v61 = v32->fields.buffData;
  if ( !v61 )
    goto LABEL_51;
  v61->fields.isNoDamage = 0;
  data = (__int64)this->fields.data;
  if ( !data )
    goto LABEL_51;
  if ( ((BattleData__isEnemyID((BattleData_o *)data, bId, 0LL) ^ v32->fields.isEnemy) & 1) != 0 )
  {
    v62 = ((__int64 (__fastcall *)(BattleServantData_o *, Il2CppMethodPointer))v32->klass->vtable._13_get_resultHp.method)(
            v32,
            v32->klass->vtable._14_set_resultHp.methodPtr);
    BattleServantData__procAccumulationDamage(v32, before, v62, 0LL);
  }
  return v28;
}


FunctionMaster_o *__fastcall BattleLogicFunction__getFuncMaster(BattleLogicFunction_o *this, const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  FunctionMaster_o *result; // x0
  BattleServantConfConponent_o *p_master; // x19
  FunctionMaster_o *master; // t1
  WebViewManager_o *Instance; // x0
  __int64 v12; // x1
  System_Int32_array **MasterData_WarQuestSelectionMaster; // x0
  System_String_array **v14; // x2
  System_String_array **v15; // x3
  System_Boolean_array **v16; // x4
  System_Int32_array **v17; // x5
  System_Int32_array *v18; // x6
  System_Int32_array *v19; // x7

  if ( (byte_42EAFDA & 1) == 0 )
  {
    sub_B5D5C4(&Method_DataManager_GetMasterData_FunctionMaster___, (_DWORD)method, v2, v3);
    sub_B5D5C4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v5, v6, v7);
    byte_42EAFDA = 1;
  }
  master = this->fields.master;
  p_master = (BattleServantConfConponent_o *)&this->fields.master;
  result = master;
  if ( !master )
  {
    Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !Instance )
      sub_B5D69C(0LL, v12);
    MasterData_WarQuestSelectionMaster = (System_Int32_array **)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                                  (DataManager_o *)Instance,
                                                                  (const MethodInfo_1AE424C *)Method_DataManager_GetMasterData_FunctionMaster___);
    p_master->klass = (BattleServantConfConponent_c *)MasterData_WarQuestSelectionMaster;
    sub_B5D560(p_master, MasterData_WarQuestSelectionMaster, v14, v15, v16, v17, v18, v19);
    return (FunctionMaster_o *)p_master->klass;
  }
  return result;
}


FunctionEntity_o *__fastcall BattleLogicFunction__getFunctionEntity(
        BattleLogicFunction_o *this,
        int32_t id,
        const MethodInfo *method)
{
  __int64 v3; // x3
  int v6; // w1
  int v7; // w2
  __int64 v8; // x3
  int v9; // w1
  int v10; // w2
  __int64 v11; // x3
  WebViewManager_o *Instance; // x0
  BattleServantConfConponent_o *p_master; // x20
  struct FunctionMaster_o *master; // t1
  __int64 v15; // x1
  System_Int32_array **MasterData_WarQuestSelectionMaster; // x0
  System_String_array **v17; // x2
  System_String_array **v18; // x3
  System_Boolean_array **v19; // x4
  System_Int32_array **v20; // x5
  System_Int32_array *v21; // x6
  System_Int32_array *v22; // x7

  if ( (byte_42EAFD9 & 1) == 0 )
  {
    sub_B5D5C4(&Method_DataManager_GetMasterData_FunctionMaster___, id, (_DWORD)method, v3);
    sub_B5D5C4(&Method_DataMasterBase_FunctionMaster__FunctionEntity__int__GetEntity__, v6, v7, v8);
    sub_B5D5C4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v9, v10, v11);
    byte_42EAFD9 = 1;
  }
  master = this->fields.master;
  p_master = (BattleServantConfConponent_o *)&this->fields.master;
  Instance = (WebViewManager_o *)master;
  if ( !master )
  {
    Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !Instance
      || (MasterData_WarQuestSelectionMaster = (System_Int32_array **)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                                        (DataManager_o *)Instance,
                                                                        (const MethodInfo_1AE424C *)Method_DataManager_GetMasterData_FunctionMaster___),
          p_master->klass = (BattleServantConfConponent_c *)MasterData_WarQuestSelectionMaster,
          sub_B5D560(p_master, MasterData_WarQuestSelectionMaster, v17, v18, v19, v20, v21, v22),
          (Instance = (WebViewManager_o *)p_master->klass) == 0LL) )
    {
      sub_B5D69C(Instance, v15);
    }
  }
  return (FunctionEntity_o *)DataMasterBase_WarMaster__WarEntity__int___GetEntity(
                               (DataMasterBase_WarMaster__WarEntity__int__o *)Instance,
                               id,
                               (const MethodInfo_23FAE10 *)Method_DataMasterBase_FunctionMaster__FunctionEntity__int__GetEntity__);
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
  if ( (byte_42EB003 & 1) == 0 )
  {
    this = (BattleLogicFunction_o *)sub_B5D5C4(
                                      &BattleActionData_BuffData_TypeInfo,
                                      (_DWORD)funcEnt,
                                      uniqueId,
                                      *(_QWORD *)&funcIndex);
    byte_42EB003 = 1;
  }
  if ( !v8
    && (v8 = (BattleActionData_BuffData_o *)sub_B5D694(BattleActionData_BuffData_TypeInfo),
        BattleActionData_BuffData___ctor(v8, 0LL),
        !v8)
    || (v8->fields.targetId = uniqueId, v8->fields.functionIndex = funcIndex, !funcEnt) )
  {
    sub_B5D69C(this, funcEnt);
  }
  popupText = (System_Int32_array **)funcEnt->fields.popupText;
  v8->fields.popLabel = (struct System_String_o *)popupText;
  sub_B5D560(
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
  sub_B5D560((BattleServantConfConponent_o *)&v8->fields.effectList, EffectList, v15, v16, v17, v18, v19, v20);
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
  __int64 v3; // x3
  int v6; // w1
  int v7; // w2
  __int64 v8; // x3
  System_Collections_Generic_Dictionary_Voice_BATTLE__string__o *dicFuncProcess; // x0
  int32_t v10; // w1
  BattleLogicFunctionProcess_BaseFunctionTypeProcess_o *v11; // x20

  if ( (byte_42EAFDE & 1) == 0 )
  {
    sub_B5D5C4(
      &Method_System_Collections_Generic_Dictionary_FuncList_TYPE__BattleLogicFunctionProcess_BaseFunctionTypeProcess__ContainsKey__,
      functType,
      (_DWORD)method,
      v3);
    sub_B5D5C4(
      &Method_System_Collections_Generic_Dictionary_FuncList_TYPE__BattleLogicFunctionProcess_BaseFunctionTypeProcess__get_Item__,
      v6,
      v7,
      v8);
    byte_42EAFDE = 1;
  }
  dicFuncProcess = (System_Collections_Generic_Dictionary_Voice_BATTLE__string__o *)this->fields.dicFuncProcess;
  if ( !dicFuncProcess
    || (dicFuncProcess = (System_Collections_Generic_Dictionary_Voice_BATTLE__string__o *)System_Collections_Generic_Dictionary_Voice_BATTLE__string___ContainsKey(
                                                                                            dicFuncProcess,
                                                                                            functType,
                                                                                            (const MethodInfo_2F49BD0 *)Method_System_Collections_Generic_Dictionary_FuncList_TYPE__BattleLogicFunctionProcess_BaseFunctionTypeProcess__ContainsKey__),
        !this->fields.dicFuncProcess)
    || (((unsigned __int8)dicFuncProcess & 1) == 0 ? (v10 = 0) : (v10 = functType),
        (dicFuncProcess = (System_Collections_Generic_Dictionary_Voice_BATTLE__string__o *)System_Collections_Generic_Dictionary_Voice_BATTLE__string___get_Item(
                                                                                             (System_Collections_Generic_Dictionary_Voice_BATTLE__string__o *)this->fields.dicFuncProcess,
                                                                                             v10,
                                                                                             (const MethodInfo_2F49898 *)Method_System_Collections_Generic_Dictionary_FuncList_TYPE__BattleLogicFunctionProcess_BaseFunctionTypeProcess__get_Item__)) == 0LL) )
  {
    sub_B5D69C(dicFuncProcess, *(_QWORD *)&functType);
  }
  v11 = (BattleLogicFunctionProcess_BaseFunctionTypeProcess_o *)dicFuncProcess;
  if ( BattleLogicFunctionProcess_BaseFunctionTypeProcess__IsNeedInit(
         (BattleLogicFunctionProcess_BaseFunctionTypeProcess_o *)dicFuncProcess,
         this,
         0LL) )
  {
    ((void (__fastcall *)(BattleLogicFunctionProcess_BaseFunctionTypeProcess_o *, BattleLogicFunction_o *, Il2CppMethodPointer))v11->klass->vtable._4_init.method)(
      v11,
      this,
      v11->klass->vtable._5_IsPreCheckTargetsAvailable.methodPtr);
  }
  return v11;
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

  if ( (byte_42EAFF0 & 1) == 0 )
  {
    sub_B5D5C4(&BattleActionData_TypeInfo, targetId, funcIndex, funcEnt);
    byte_42EAFF0 = 1;
  }
  v8 = (BattleActionData_o *)sub_B5D694(BattleActionData_TypeInfo);
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
    sub_B5D69C(GrayActionBuffData, v10);
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
    sub_B5D69C(this, baseVals);
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
  int v18; // w1
  int v19; // w2
  __int64 v20; // x3
  int v21; // w1
  int v22; // w2
  __int64 v23; // x3
  int v24; // w1
  int v25; // w2
  __int64 v26; // x3
  BattleActionData_o *v27; // x23
  System_String_array **v28; // x2
  System_String_array **v29; // x3
  System_Boolean_array **v30; // x4
  System_Int32_array **v31; // x5
  System_Int32_array *v32; // x6
  System_Int32_array *v33; // x7
  __int64 v34; // x0
  __int64 v35; // x1
  System_Int32_array **v36; // x1
  BattleServantConfConponent_o *p_popLabel; // x0
  System_Int32_array **v38; // x0
  System_String_array **v39; // x2
  System_String_array **v40; // x3
  System_Boolean_array **v41; // x4
  System_Int32_array **v42; // x5
  System_Int32_array *v43; // x6
  System_Int32_array *v44; // x7

  v10 = defBuffData;
  if ( (byte_42EAFEC & 1) == 0 )
  {
    sub_B5D5C4(&BattleActionData_TypeInfo, targetId, funcIndex, isHide);
    sub_B5D5C4(&BattleActionData_BuffData_TypeInfo, v18, v19, v20);
    sub_B5D5C4(&int___TypeInfo, v21, v22, v23);
    sub_B5D5C4(&StringLiteral_1/*""*/, v24, v25, v26);
    byte_42EAFEC = 1;
  }
  v27 = (BattleActionData_o *)sub_B5D694(BattleActionData_TypeInfo);
  BattleActionData___ctor(v27, 0LL);
  if ( !defBuffData )
  {
    v10 = (BattleActionData_BuffData_o *)sub_B5D694(BattleActionData_BuffData_TypeInfo);
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
    v36 = (System_Int32_array **)StringLiteral_1/*""*/;
    v10->fields.popLabel = (struct System_String_o *)StringLiteral_1/*""*/;
    p_popLabel = (BattleServantConfConponent_o *)&v10->fields.popLabel;
  }
  else
  {
    v10->fields.popLabel = dispName;
    p_popLabel = (BattleServantConfConponent_o *)&v10->fields.popLabel;
    v36 = (System_Int32_array **)dispName;
  }
  sub_B5D560(p_popLabel, v36, v28, v29, v30, v31, v32, v33);
  v38 = (System_Int32_array **)sub_B5D5DC(int___TypeInfo, 0LL);
  v10->fields.effectList = (struct System_Int32_array *)v38;
  sub_B5D560((BattleServantConfConponent_o *)&v10->fields.effectList, v38, v39, v40, v41, v42, v43, v44);
  if ( !v27
    || (BattleActionData__setBuffData(v27, v10, 0LL, 0LL),
        v10->fields.IsNoEffect = isNoEffect,
        v10->fields.isCommandAfter = isCommandSideEffect,
        !dataVals) )
  {
LABEL_11:
    sub_B5D69C(v34, v35);
  }
  v10->fields.popDelay = DataVals__GetParam(dataVals, 64, 0, 0LL);
  v27->fields.funcResult = 0;
  return v27;
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
  int v16; // w1
  int v17; // w2
  __int64 v18; // x3
  const MethodInfo *v19; // [xsp+8h] [xbp-48h]

  v9 = uniqueText;
  if ( (byte_42EAFED & 1) != 0 )
  {
    if ( uniqueText )
      goto LABEL_3;
  }
  else
  {
    sub_B5D5C4(&LocalizationManager_TypeInfo, targetId, funcIndex, dataVals);
    this = (BattleLogicFunction_o *)sub_B5D5C4(&StringLiteral_2509/*"BATTLE_MISS_FUNCTION"*/, v16, v17, v18);
    byte_42EAFED = 1;
    if ( v9 )
    {
LABEL_3:
      if ( dataVals )
        goto LABEL_4;
LABEL_10:
      sub_B5D69C(this, *(_QWORD *)&targetId);
    }
  }
  if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !LocalizationManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  }
  this = (BattleLogicFunction_o *)LocalizationManager__Get((System_String_o *)StringLiteral_2509/*"BATTLE_MISS_FUNCTION"*/, 0LL);
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
           v19);
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
  int v16; // w1
  int v17; // w2
  __int64 v18; // x3
  const MethodInfo *v19; // [xsp+8h] [xbp-48h]

  v9 = uniqueText;
  if ( (byte_42EAFEE & 1) != 0 )
  {
    if ( uniqueText )
      goto LABEL_3;
  }
  else
  {
    sub_B5D5C4(&LocalizationManager_TypeInfo, targetId, funcIndex, dataVals);
    this = (BattleLogicFunction_o *)sub_B5D5C4(&StringLiteral_2520/*"BATTLE_NO_EFFECT_FUNCTION"*/, v16, v17, v18);
    byte_42EAFEE = 1;
    if ( v9 )
    {
LABEL_3:
      if ( dataVals )
        goto LABEL_4;
LABEL_10:
      sub_B5D69C(this, *(_QWORD *)&targetId);
    }
  }
  if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !LocalizationManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  }
  this = (BattleLogicFunction_o *)LocalizationManager__Get((System_String_o *)StringLiteral_2520/*"BATTLE_NO_EFFECT_FUNCTION"*/, 0LL);
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
           v19);
}


System_Int32_array *__fastcall BattleLogicFunction__getTargetids(
        BattleLogicFunction_o *this,
        BattleActionData_o *mainAction,
        int32_t targetType,
        DataVals_o *dataVals,
        const MethodInfo *method)
{
  int v9; // w1
  int v10; // w2
  __int64 v11; // x3
  int v12; // w1
  int v13; // w2
  __int64 v14; // x3
  int v15; // w1
  int v16; // w2
  __int64 v17; // x3
  int v18; // w1
  int v19; // w2
  __int64 v20; // x3
  int v21; // w1
  int v22; // w2
  __int64 v23; // x3
  Target_BattleTargetArgs_o *args; // x23
  __int64 v25; // x0
  __int64 v26; // x1
  BattleData_o *data; // x22
  int32_t actorId; // w24
  int32_t targetId; // w25
  int32_t PTTargetId; // w0
  System_Collections_Generic_IEnumerable_TSource__o *TargetIds_19913408; // x20
  System_Func_int__bool__o *v32; // x21
  System_Collections_Generic_IEnumerable_TSource__o *v33; // x0

  if ( (byte_42EAFE6 & 1) == 0 )
  {
    sub_B5D5C4(&Method_BattleLogicFunction__getTargetids_b__55_0__, (_DWORD)mainAction, targetType, dataVals);
    sub_B5D5C4(&Target_BattleTargetArgs_TypeInfo, v9, v10, v11);
    sub_B5D5C4(&Method_System_Linq_Enumerable_ToArray_int___, v12, v13, v14);
    sub_B5D5C4(&Method_System_Linq_Enumerable_Where_int___, v15, v16, v17);
    sub_B5D5C4(&Method_System_Func_int__bool___ctor__, v18, v19, v20);
    sub_B5D5C4(&System_Func_int__bool__TypeInfo, v21, v22, v23);
    byte_42EAFE6 = 1;
  }
  args = (Target_BattleTargetArgs_o *)sub_B5D694(Target_BattleTargetArgs_TypeInfo);
  Target_BattleTargetArgs___ctor(args, dataVals, 0LL);
  if ( !mainAction )
    sub_B5D69C(v25, v26);
  data = this->fields.data;
  actorId = mainAction->fields.actorId;
  targetId = mainAction->fields.targetId;
  PTTargetId = BattleActionData__getPTTargetId(mainAction, 0LL);
  TargetIds_19913408 = (System_Collections_Generic_IEnumerable_TSource__o *)Target__getTargetIds_19913408(
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
  v32 = (System_Func_int__bool__o *)sub_B5D694(System_Func_int__bool__TypeInfo);
  System_Func_int__bool____ctor(
    v32,
    (Il2CppObject *)this,
    Method_BattleLogicFunction__getTargetids_b__55_0__,
    (const MethodInfo_2C28A40 *)Method_System_Func_int__bool___ctor__);
  v33 = System_Linq_Enumerable__Where_int_(
          TargetIds_19913408,
          (System_Func_TSource__bool__o *)v32,
          (const MethodInfo_1CBBC7C *)Method_System_Linq_Enumerable_Where_int___);
  return System_Linq_Enumerable__ToArray_int_(
           v33,
           (const MethodInfo_1CB76BC *)Method_System_Linq_Enumerable_ToArray_int___);
}


BattleFieldEnvironmentData_o *__fastcall BattleLogicFunction__get_FieldEnvData(
        BattleLogicFunction_o *this,
        const MethodInfo *method)
{
  struct BattleData_o *data; // x8

  data = this->fields.data;
  if ( !data )
    sub_B5D69C(this, method);
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
    sub_B5D69C(this, passive);
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
    sub_B5D69C(this, args);
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
    sub_B5D69C(this, 0LL);
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
    sub_B5D69C(this, *(_QWORD *)&uniqueId);
  v4 = *(_QWORD *)&funclist->max_length;
  if ( (int)v4 < 1 )
    return 0;
  v6 = this;
  v7 = 0LL;
  while ( 1 )
  {
    if ( v7 >= (unsigned int)v4 )
    {
      v9 = sub_B5D6C8(this);
      sub_B5D668(v9, 0LL);
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
  int v20; // w1
  int v21; // w2
  __int64 v22; // x3
  int v23; // w1
  int v24; // w2
  __int64 v25; // x3
  int v26; // w1
  int v27; // w2
  __int64 v28; // x3
  int v29; // w1
  int v30; // w2
  __int64 v31; // x3
  int v32; // w1
  int v33; // w2
  __int64 v34; // x3
  int v35; // w1
  int v36; // w2
  __int64 v37; // x3
  int v38; // w1
  int v39; // w2
  __int64 v40; // x3
  int v41; // w1
  int v42; // w2
  __int64 v43; // x3
  int v44; // w1
  int v45; // w2
  __int64 v46; // x3
  int v47; // w1
  int v48; // w2
  __int64 v49; // x3
  int v50; // w1
  int v51; // w2
  __int64 v52; // x3
  int v53; // w1
  int v54; // w2
  __int64 v55; // x3
  int v56; // w1
  int v57; // w2
  __int64 v58; // x3
  int v59; // w1
  int v60; // w2
  __int64 v61; // x3
  int v62; // w1
  int v63; // w2
  __int64 v64; // x3
  int v65; // w1
  int v66; // w2
  __int64 v67; // x3
  int v68; // w1
  int v69; // w2
  __int64 v70; // x3
  int v71; // w1
  int v72; // w2
  __int64 v73; // x3
  int v74; // w1
  int v75; // w2
  __int64 v76; // x3
  int v77; // w1
  int v78; // w2
  __int64 v79; // x3
  int v80; // w1
  int v81; // w2
  __int64 v82; // x3
  int v83; // w1
  int v84; // w2
  __int64 v85; // x3
  int v86; // w1
  int v87; // w2
  __int64 v88; // x3
  int v89; // w1
  int v90; // w2
  __int64 v91; // x3
  int v92; // w1
  int v93; // w2
  __int64 v94; // x3
  int v95; // w1
  int v96; // w2
  __int64 v97; // x3
  int v98; // w1
  int v99; // w2
  __int64 v100; // x3
  int v101; // w1
  int v102; // w2
  __int64 v103; // x3
  int v104; // w1
  int v105; // w2
  __int64 v106; // x3
  int v107; // w1
  int v108; // w2
  __int64 v109; // x3
  int v110; // w1
  int v111; // w2
  __int64 v112; // x3
  int v113; // w1
  int v114; // w2
  __int64 v115; // x3
  int v116; // w1
  int v117; // w2
  __int64 v118; // x3
  int v119; // w1
  int v120; // w2
  __int64 v121; // x3
  int v122; // w1
  int v123; // w2
  __int64 v124; // x3
  int v125; // w1
  int v126; // w2
  __int64 v127; // x3
  int v128; // w1
  int v129; // w2
  __int64 v130; // x3
  int v131; // w1
  int v132; // w2
  __int64 v133; // x3
  int v134; // w1
  int v135; // w2
  __int64 v136; // x3
  int v137; // w1
  int v138; // w2
  __int64 v139; // x3
  int v140; // w1
  int v141; // w2
  __int64 v142; // x3
  int v143; // w1
  int v144; // w2
  __int64 v145; // x3
  int v146; // w1
  int v147; // w2
  __int64 v148; // x3
  int v149; // w1
  int v150; // w2
  __int64 v151; // x3
  int v152; // w1
  int v153; // w2
  __int64 v154; // x3
  int v155; // w1
  int v156; // w2
  __int64 v157; // x3
  int v158; // w1
  int v159; // w2
  __int64 v160; // x3
  int v161; // w1
  int v162; // w2
  __int64 v163; // x3
  int v164; // w1
  int v165; // w2
  __int64 v166; // x3
  System_String_o *v167; // x0
  System_String_o *v168; // x0
  System_String_o *v169; // x0
  System_String_array **v170; // x2
  System_String_array **v171; // x3
  System_Boolean_array **v172; // x4
  System_Int32_array **v173; // x5
  System_Int32_array *v174; // x6
  System_Int32_array *v175; // x7
  struct BattleData_o *data; // x8
  UnityEngine_Object_o *logic; // x24
  BattleLogicFunction_ProcListInArgs_o *v178; // x24
  int32_t *p_actSetId; // x22
  WeightRate_int__o *v180; // x23
  signed int max_length; // w8
  unsigned int v182; // w24
  Il2CppClass **v183; // x8
  DataVals_o *v184; // x25
  int32_t ActSetWeight; // w26
  BattleServantData_o *v186; // x24
  int32_t Random; // w0
  System_String_o *v188; // x0
  WellFired_USFGOPlayBgmEventConditional_CondBGM_array *funcUnitArray_k__BackingField; // x21
  BattleLogicFunction___c_c *v190; // x0
  bool v191; // w23
  struct BattleLogicFunction___c_StaticFields *static_fields; // x8
  System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *_9__41_0; // x22
  Il2CppObject *v194; // x23
  struct BattleLogicFunction___c_StaticFields *v195; // x0
  System_String_array **v196; // x2
  System_String_array **v197; // x3
  System_Boolean_array **v198; // x4
  System_Int32_array **v199; // x5
  System_Int32_array *v200; // x6
  System_Int32_array *v201; // x7
  BattleLogicFunction___c_c *v202; // x0
  System_Collections_Generic_IEnumerable_TSource__o *v203; // x21
  struct BattleLogicFunction___c_StaticFields *v204; // x8
  System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *_9__41_1; // x22
  Il2CppObject *v206; // x23
  struct BattleLogicFunction___c_StaticFields *v207; // x0
  System_String_array **v208; // x2
  System_String_array **v209; // x3
  System_Boolean_array **v210; // x4
  System_Int32_array **v211; // x5
  System_Int32_array *v212; // x6
  System_Int32_array *v213; // x7
  BattleData_o *v214; // x21
  SkillValueUpApplierPlayerMaster_o *v215; // x22
  SkillValueUpApplierPlayerMaster_o *v216; // x10
  struct BattleLogicFunctionProcess_FunctionUnitCheck_array *v217; // x22
  int v218; // w8
  BattleLogicFunction_FuncSideEffectFunctionArgument_o *v219; // x25
  int v220; // w26
  BattleCommandData_o *v221; // x22
  UnityEngine_Object_o *v222; // x23
  struct BattleLogic_o *v223; // x8
  unsigned __int64 v224; // x23
  BattleLogicFunctionProcess_FunctionUnitCheck_o *v225; // x21
  DataVals_o *dataVals_k__BackingField; // x26
  const MethodInfo *v227; // x3
  const MethodInfo *v228; // x4
  BattleLogicFunction___c_c *v229; // x0
  System_Collections_Generic_IEnumerable_TSource__o *funcTargetArray_k__BackingField; // x21
  struct BattleLogicFunction___c_StaticFields *v231; // x8
  System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *_9__41_2; // x27
  Il2CppObject *v233; // x28
  struct BattleLogicFunction___c_StaticFields *v234; // x0
  System_String_array **v235; // x2
  System_String_array **v236; // x3
  System_Boolean_array **v237; // x4
  System_Int32_array **v238; // x5
  System_Int32_array *v239; // x6
  System_Int32_array *v240; // x7
  System_Collections_Generic_IEnumerable_TSource__o *v241; // x21
  BattleLogicFunction___c_c *v242; // x8
  struct BattleLogicFunction___c_StaticFields *v243; // x9
  System_Func_BattleLogicBuff_ReduceHpProcess_BuffInfo__int__o *_9__41_3; // x27
  Il2CppObject *v245; // x28
  struct BattleLogicFunction___c_StaticFields *v246; // x0
  System_String_array **v247; // x2
  System_String_array **v248; // x3
  System_Boolean_array **v249; // x4
  System_Int32_array **v250; // x5
  System_Int32_array *v251; // x6
  System_Int32_array *v252; // x7
  System_Collections_Generic_IEnumerable_TSource__o *v253; // x0
  System_Int32_array *v254; // x21
  bool v255; // w27
  BattleLogicFunction_PreAttackSideEffectMakeArgument_o *v256; // x28
  BattleLogicFunction_SideEffectMakeArgument_o *v257; // x0
  const MethodInfo *v258; // x5
  struct BattleLogicFunctionProcess_FunctionTargetCheck_array *v259; // x22
  int v260; // w8
  int i; // w24
  BattleData_o *v262; // x21
  int32_t Value; // w20
  BattleLogicFunction_o *v264; // x0
  const MethodInfo *v265; // x6
  BattleData_o *v266; // x21
  int32_t *v267; // x20
  BattleActionData_o *v268; // x0
  const MethodInfo *v269; // x7
  bool isUnaffected; // w23
  int32_t CorrectedValueFuncGainNp; // w21
  const MethodInfo *v272; // x7
  BattleLogicFunction_o *v273; // x0
  int32_t v274; // w23
  const MethodInfo *v275; // x6
  BattleLogicFunction_o *v276; // x21
  BattleActionData_o *v277; // x0
  BattleActionData_BuffData_o *v278; // x1
  DataVals_o *v279; // x2
  int32_t v280; // w0
  BattleLogicFunction_o *v281; // x0
  int32_t v282; // w20
  const MethodInfo *v283; // x6
  BattleActionData_BuffData_o *v284; // x21
  int32_t v285; // w21
  System_Int32_array *TargetList; // x23
  int32_t v287; // w0
  _BOOL8 v288; // x0
  const MethodInfo *v289; // x6
  int32_t v290; // w1
  BattleLogicFunction_o *v291; // x0
  int32_t v292; // w2
  bool v293; // w4
  DataVals_o *v294; // x3
  int32_t v295; // w21
  System_Int32_array *v296; // x23
  int32_t v297; // w0
  int32_t v298; // w2
  BattleActionData_BuffData_o *FunctionObject; // x1
  BattleActionData_o *v300; // x0
  DataVals_o *v301; // x2
  BattleActionData_BuffData_o *v302; // x6
  BattleActionData_o *v303; // x0
  const MethodInfo *v304; // x3
  int32_t v305; // w21
  bool v306; // w6
  int32_t v307; // w1
  BattleLogicFunction_o *v308; // x0
  FunctionEntity_o *v309; // x3
  int32_t v310; // w5
  bool v311; // w6
  int32_t v312; // w2
  DataVals_o *v313; // x4
  bool v314; // w7
  const MethodInfo *v315; // x7
  const MethodInfo *v316; // x7
  const MethodInfo *v317; // x6
  int32_t v318; // w1
  FunctionEntity_o *v319; // x2
  DataVals_o *v320; // x3
  int32_t v321; // w4
  const MethodInfo *v322; // x5
  BattleLogicFunction_o *v323; // x20
  BattleActionData_o *v324; // x0
  FunctionEntity_o *v325; // x1
  FunctionEntity_o *v326; // x3
  MethodInfo *v327; // x4
  const MethodInfo *v328; // x6
  int32_t applyTarget; // w8
  FunctionEntity_o *v330; // x2
  const MethodInfo *v331; // x5
  BattleActionData_o *v332; // x0
  const MethodInfo *v333; // x5
  BattleActionData_o *v334; // x0
  FunctionEntity_o *v335; // x2
  const MethodInfo *v336; // x6
  int32_t v337; // w1
  FunctionEntity_o *v338; // x2
  DataVals_o *v339; // x3
  int32_t v340; // w4
  const MethodInfo *v341; // x5
  BattleActionData_o *v342; // x0
  FunctionEntity_o *v343; // x3
  int32_t v344; // w5
  const MethodInfo *v345; // x6
  _BOOL8 v346; // x0
  FunctionEntity_o *v347; // x2
  int32_t v348; // w4
  const MethodInfo *v349; // x5
  const MethodInfo *v350; // x3
  int32_t v351; // w21
  int32_t v352; // w23
  char v353; // w5
  const MethodInfo *v354; // x7
  BattleLogicFunction_o *v355; // x0
  int32_t v356; // w1
  int32_t v357; // w2
  System_String_array **v358; // x2
  System_String_array **v359; // x3
  System_Boolean_array **v360; // x4
  System_Int32_array **v361; // x5
  System_Int32_array *v362; // x6
  System_Int32_array *v363; // x7
  struct BattleData_o *v364; // x8
  System_Int32_array **draw_commandlist; // x1
  int v366; // w21
  bool isParam; // w23
  System_Int32_array *v368; // x0
  int32_t v369; // w23
  Generator_BGMFromChangeBGMFunc_o *v370; // x21
  const MethodInfo *v371; // x3
  _BOOL8 v372; // x0
  const MethodInfo *v373; // x6
  const MethodInfo *v374; // x6
  System_Int32_array *v375; // x21
  int32_t SameIndiualityBuffSum; // w0
  int32_t v377; // w21
  int v378; // w21
  bool isGainNp; // w0
  BattleLogicFunction_o *v380; // x0
  int32_t v381; // w20
  const MethodInfo *v382; // x6
  BattleLogicFunction_o *v383; // x21
  const MethodInfo *v384; // x7
  int32_t v385; // w1
  int32_t v386; // w2
  int32_t v387; // w5
  const MethodInfo *v388; // x4
  const MethodInfo *v389; // x4
  _BOOL8 v390; // x0
  const MethodInfo *v391; // x3
  bool v392; // w21
  int32_t v393; // w23
  int32_t v394; // w1
  const MethodInfo *v395; // x3
  BattleLogicFunction_o *v396; // x0
  bool v397; // w2
  DataVals_o *v398; // x1
  _BOOL8 updated; // x0
  const MethodInfo *v400; // x6
  BattleActionData_MasterBuffData_o *v401; // x20
  Generator_BGFromQuickChangeBGFunc_o *v402; // x21
  const MethodInfo *v403; // x3
  int32_t Param; // w0
  const MethodInfo *v405; // x4
  BattleBuffData_o *buffProgressTurnSelfList; // x21
  BattleActionData_UpShiftGaugeData_o *v407; // x21
  const MethodInfo *v408; // x5
  DataVals_o *v409; // x3
  const MethodInfo *v410; // x5
  BattleActionData_o *SubMember; // x0
  const MethodInfo *v412; // x3
  const MethodInfo *v413; // x6
  const MethodInfo *v414; // x4
  const MethodInfo *v415; // x3
  _BOOL8 v416; // x0
  const MethodInfo *v417; // x3
  const MethodInfo *v418; // x2
  const MethodInfo *v419; // x2
  const MethodInfo *v420; // x5
  const MethodInfo *v421; // x4
  const MethodInfo *v422; // x4
  int32_t v423; // w0
  const MethodInfo *v424; // x2
  bool v425; // cc
  const MethodInfo *v426; // x2
  const MethodInfo *v427; // x2
  BattleLogicFunctionProcess_FunctionTargetCheck_o *v428; // x21
  int32_t targetId_k__BackingField; // w27
  BattleLogicFunction_o *v430; // x28
  const MethodInfo *v431; // x7
  BattleActionData_o *NoEffectObject; // x0
  struct System_Int32_array *vals; // x8
  int32_t commandType; // w8
  bool v435; // w0
  const MethodInfo *v436; // x5
  const MethodInfo *v437; // x3
  int32_t v438; // w23
  bool isSafeDamage; // w0
  int32_t v440; // w2
  const MethodInfo *v441; // x7
  const MethodInfo *v442; // x7
  int32_t actorId; // w1
  int32_t v444; // w2
  int32_t v445; // w5
  int v446; // w8
  struct System_Collections_Generic_List_int__o *v447; // x8
  BattleActionData_o *v448; // x0
  int v449; // w26
  bool v450; // w21
  BattleLogicFunction_AfterAttackSideEffectMakeArgument_o *v451; // x22
  BattleLogicFunction_SideEffectMakeArgument_o *Argument__Init; // x0
  const MethodInfo *v453; // x5
  BattleLogicFunction_o *v454; // x21
  UnityEngine_Object_o *v455; // x21
  int v456; // w8
  BattleLogicFunction_o *v457; // x21
  unsigned int v458; // w22
  __int64 v459; // x8
  BattleLogicFunction_FuncSideEffectFunctionArgument_o *FuncSideEffectArg; // x0
  UnityEngine_Object_o *v461; // x21
  struct BattleData_o *v462; // x8
  UnityEngine_Object_o *v463; // x21
  BattleData_o *v464; // x0
  BattleServantData_o *v465; // x0
  __int64 v466; // x1
  __int64 v468; // x0
  const MethodInfo *overwriteLossHp; // [xsp+0h] [xbp-170h]
  int32_t overwriteLossHpa; // [xsp+0h] [xbp-170h]
  const MethodInfo *v471; // [xsp+18h] [xbp-158h]
  int32_t subTargetId; // [xsp+24h] [xbp-14Ch]
  int32_t *p_actorId; // [xsp+28h] [xbp-148h]
  _BYTE v474[12]; // [xsp+34h] [xbp-13Ch]
  bool playerId; // [xsp+40h] [xbp-130h]
  BattleData_o *playerIda; // [xsp+40h] [xbp-130h]
  int32_t playerIdb; // [xsp+40h] [xbp-130h]
  BattleLogicFunction_o *v478; // [xsp+48h] [xbp-128h]
  System_Collections_Generic_List_int__o *v479; // [xsp+50h] [xbp-120h]
  struct BattleLogicFunctionProcess_FunctionUnitCheck_array *v480; // [xsp+60h] [xbp-110h]
  int v481; // [xsp+6Ch] [xbp-104h]
  BattleServantData_o *ServantData; // [xsp+70h] [xbp-100h]
  BattleLogicFunctionProcess_FunctionUnitCheck_o *funcUnit; // [xsp+80h] [xbp-F0h]
  int v485; // [xsp+8Ch] [xbp-E4h]
  DataMasterBase_WarMaster__WarEntity__int__o *MasterData_WarQuestSelectionMaster; // [xsp+90h] [xbp-E0h]
  int32_t funcIdx; // [xsp+9Ch] [xbp-D4h]
  int32_t *p_funcType; // [xsp+A0h] [xbp-D0h]
  FunctionEntity_o *funcEnt; // [xsp+B0h] [xbp-C0h]
  BattleLogicFunction_ProcListInArgs_o *args; // [xsp+B8h] [xbp-B8h]
  BattleLogicFunction_o *v491; // [xsp+C0h] [xbp-B0h]
  System_Collections_Generic_List_Enumerator_int__o v492; // [xsp+C8h] [xbp-A8h] BYREF
  System_Collections_Generic_List_Enumerator_int__o v493; // [xsp+E0h] [xbp-90h] BYREF
  int32_t absorptionCount; // [xsp+FCh] [xbp-74h] BYREF
  RemovedBuffInfo_o *subBuffInfo; // [xsp+100h] [xbp-70h] BYREF
  int32_t funcIndex; // [xsp+10Ch] [xbp-64h] BYREF
  __int64 v497[2]; // [xsp+110h] [xbp-60h] BYREF

  v491 = this;
  if ( (byte_42EAFDF & 1) == 0 )
  {
    sub_B5D5C4(
      &BattleLogicFunction_AfterAttackSideEffectMakeArgument_TypeInfo,
      (_DWORD)action,
      (_DWORD)functionlist,
      baseValslist);
    sub_B5D5C4(&Generator_BGFromQuickChangeBGFunc_TypeInfo, v20, v21, v22);
    sub_B5D5C4(&Generator_BGMFromChangeBGMFunc_TypeInfo, v23, v24, v25);
    sub_B5D5C4(&Method_BasicHelper_Any_BattleLogicFunctionProcess_FunctionUnitCheck___, v26, v27, v28);
    sub_B5D5C4(&BattleCommandData_TypeInfo, v29, v30, v31);
    sub_B5D5C4(&Method_DataManager_GetMasterData_BuffMaster___, v32, v33, v34);
    sub_B5D5C4(&Method_DataMasterBase_BuffMaster__BuffEntity__int__GetEntity__, v35, v36, v37);
    sub_B5D5C4(&BattleActionData_DownShiftGaugeData_TypeInfo, v38, v39, v40);
    sub_B5D5C4(&Method_System_Linq_Enumerable_All_BattleLogicFunctionProcess_FunctionUnitCheck___, v41, v42, v43);
    sub_B5D5C4(
      &Method_System_Linq_Enumerable_Select_BattleLogicFunctionProcess_FunctionTargetCheck__int___,
      v44,
      v45,
      v46);
    sub_B5D5C4(&Method_System_Linq_Enumerable_ToArray_int___, v47, v48, v49);
    sub_B5D5C4(&Method_System_Linq_Enumerable_Where_BattleLogicFunctionProcess_FunctionTargetCheck___, v50, v51, v52);
    sub_B5D5C4(&Method_System_Collections_Generic_List_Enumerator_int__Dispose__, v53, v54, v55);
    sub_B5D5C4(&Method_System_Collections_Generic_List_Enumerator_int__MoveNext__, v56, v57, v58);
    sub_B5D5C4(&Method_System_Collections_Generic_List_Enumerator_int__get_Current__, v59, v60, v61);
    sub_B5D5C4(&Method_System_Func_BattleLogicFunctionProcess_FunctionUnitCheck__bool___ctor__, v62, v63, v64);
    sub_B5D5C4(&Method_System_Func_BattleLogicFunctionProcess_FunctionTargetCheck__int___ctor__, v65, v66, v67);
    sub_B5D5C4(&Method_System_Func_BattleLogicFunctionProcess_FunctionTargetCheck__bool___ctor__, v68, v69, v70);
    sub_B5D5C4(&System_Func_BattleLogicFunctionProcess_FunctionTargetCheck__bool__TypeInfo, v71, v72, v73);
    sub_B5D5C4(&System_Func_BattleLogicFunctionProcess_FunctionTargetCheck__int__TypeInfo, v74, v75, v76);
    sub_B5D5C4(&System_Func_BattleLogicFunctionProcess_FunctionUnitCheck__bool__TypeInfo, v77, v78, v79);
    sub_B5D5C4(&Method_System_Collections_Generic_List_int__Add__, v80, v81, v82);
    sub_B5D5C4(&Method_System_Collections_Generic_List_int__GetEnumerator__, v83, v84, v85);
    sub_B5D5C4(&Method_System_Collections_Generic_List_int___ctor___68740224, v86, v87, v88);
    sub_B5D5C4(&System_Collections_Generic_List_int__TypeInfo, v89, v90, v91);
    sub_B5D5C4(&BattleActionData_MasterBuffData_TypeInfo, v92, v93, v94);
    sub_B5D5C4(&UnityEngine_Object_TypeInfo, v95, v96, v97);
    sub_B5D5C4(&BattleLogicFunction_PreAttackSideEffectMakeArgument_TypeInfo, v98, v99, v100);
    sub_B5D5C4(&BattleLogicFunction_ProcListInArgs_TypeInfo, v101, v102, v103);
    sub_B5D5C4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v104, v105, v106);
    sub_B5D5C4(&SkillValueUpApplierPlayerMaster_TypeInfo, v107, v108, v109);
    sub_B5D5C4(&Method_BattleLogicFunction___c__procList_b__41_0__, v110, v111, v112);
    sub_B5D5C4(&Method_BattleLogicFunction___c__procList_b__41_1__, v113, v114, v115);
    sub_B5D5C4(&Method_BattleLogicFunction___c__procList_b__41_2__, v116, v117, v118);
    sub_B5D5C4(&Method_BattleLogicFunction___c__procList_b__41_3__, v119, v120, v121);
    sub_B5D5C4(&BattleLogicFunction___c_TypeInfo, v122, v123, v124);
    sub_B5D5C4(&BattleActionData_UpShiftGaugeData_TypeInfo, v125, v126, v127);
    sub_B5D5C4(&Method_WeightRate_int___ctor__, v128, v129, v130);
    sub_B5D5C4(&Method_WeightRate_int__getCount__, v131, v132, v133);
    sub_B5D5C4(&Method_WeightRate_int__getData__, v134, v135, v136);
    sub_B5D5C4(&Method_WeightRate_int__getTotalWeight__, v137, v138, v139);
    sub_B5D5C4(&Method_WeightRate_int__setWeight__, v140, v141, v142);
    sub_B5D5C4(&WeightRate_int__TypeInfo, v143, v144, v145);
    sub_B5D5C4(&StringLiteral_1529/*"====< end BattleLogicFunction::procList >====="*/, v146, v147, v148);
    sub_B5D5C4(&StringLiteral_209/*" enemytargetId: "*/, v149, v150, v151);
    sub_B5D5C4(&StringLiteral_1530/*"====< start BattleLogicFunction::procList >====="*/, v152, v153, v154);
    sub_B5D5C4(&StringLiteral_255/*" pttargetId: "*/, v155, v156, v157);
    sub_B5D5C4(&StringLiteral_1532/*"========="*/, v158, v159, v160);
    sub_B5D5C4(&StringLiteral_1543/*">actSetId: "*/, v161, v162, v163);
    this = (BattleLogicFunction_o *)sub_B5D5C4(&StringLiteral_180/*" actorId: "*/, v164, v165, v166);
    byte_42EAFDF = 1;
  }
  v497[0] = 0LL;
  funcIndex = 0;
  subBuffInfo = 0LL;
  absorptionCount = 0;
  memset(&v493, 0, sizeof(v493));
  if ( !action )
    goto LABEL_427;
  p_actorId = &action->fields.actorId;
  v167 = System_Int32__ToString((int)action + 32, 0LL);
  System_String__Concat_44577788((System_String_o *)StringLiteral_180/*" actorId: "*/, v167, 0LL);
  this = (BattleLogicFunction_o *)v491->fields.data;
  if ( !this )
    goto LABEL_427;
  ServantData = BattleData__getServantData((BattleData_o *)this, action->fields.actorId, 0LL);
  HIDWORD(v497[0]) = action->fields.targetId;
  v168 = System_Int32__ToString((int32_t)v497 + 4, 0LL);
  System_String__Concat_44577788((System_String_o *)StringLiteral_209/*" enemytargetId: "*/, v168, 0LL);
  LODWORD(v497[0]) = BattleActionData__getPTTargetId(action, 0LL);
  subTargetId = BattleActionData__getPTSubTargetId(action, 0LL);
  v169 = System_Int32__ToString((int32_t)v497, 0LL);
  this = (BattleLogicFunction_o *)System_String__Concat_44577788((System_String_o *)StringLiteral_255/*" pttargetId: "*/, v169, 0LL);
  data = v491->fields.data;
  if ( !data )
    goto LABEL_427;
  data->fields.beforeAction = action;
  sub_B5D560(
    (BattleServantConfConponent_o *)&data->fields.beforeAction,
    (System_Int32_array **)action,
    v170,
    v171,
    v172,
    v173,
    v174,
    v175);
  v479 = (System_Collections_Generic_List_int__o *)sub_B5D694(System_Collections_Generic_List_int__TypeInfo);
  System_Collections_Generic_List_int____ctor(
    v479,
    (const MethodInfo_30836B0 *)Method_System_Collections_Generic_List_int___ctor___68740224);
  this = (BattleLogicFunction_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !this )
    goto LABEL_427;
  MasterData_WarQuestSelectionMaster = (DataMasterBase_WarMaster__WarEntity__int__o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                                                        (DataManager_o *)this,
                                                                                        (const MethodInfo_1AE424C *)Method_DataManager_GetMasterData_BuffMaster___);
  if ( isReduceReset )
  {
    logic = (UnityEngine_Object_o *)v491->fields.logic;
    if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    }
    if ( UnityEngine_Object__op_Inequality(logic, 0LL, 0LL) )
    {
      this = (BattleLogicFunction_o *)v491->fields.logic;
      if ( !this )
        goto LABEL_427;
      BattleLogic__resetReducedHpAll((BattleLogic_o *)this, 0LL);
    }
  }
  v178 = (BattleLogicFunction_ProcListInArgs_o *)sub_B5D694(BattleLogicFunction_ProcListInArgs_TypeInfo);
  BattleLogicFunction_ProcListInArgs___ctor(v178, argument, 0LL);
  if ( !v178 )
    goto LABEL_427;
  BattleLogicFunction_ProcListInArgs__set_IsCommandSideEffect(v178, isCommandSideEffect, 0LL);
  BattleLogicFunction_ProcListInArgs__set_IsShift(v178, isShift, 0LL);
  BattleLogicFunction_ProcListInArgs__set_IsPassive(v178, passive, 0LL);
  if ( BattleLogicFunction_ProcListInArgs__get_SkillId(v178, 0LL) <= 0 )
    BattleLogicFunction_ProcListInArgs__set_SkillId(v178, skillId, 0LL);
  funcIndex = 0;
  BattleLogicFunction_ProcListInArgs__initFunctionUnitCheck(v178, v491, functionlist, baseValslist, &funcIndex, 0LL);
  args = v178;
  v178->fields.actSetId = 0;
  p_actSetId = &v178->fields.actSetId;
  v180 = (WeightRate_int__o *)sub_B5D694(WeightRate_int__TypeInfo);
  WeightRate_int____ctor(v180, (const MethodInfo_2BF9C18 *)Method_WeightRate_int___ctor__);
  if ( !baseValslist )
    goto LABEL_427;
  max_length = baseValslist->max_length;
  if ( max_length >= 1 )
  {
    v182 = 0;
    while ( v182 < max_length )
    {
      v183 = &baseValslist->obj.klass + (int)v182;
      v184 = (DataVals_o *)v183[4];
      if ( !v184 )
        goto LABEL_427;
      DataVals__loadActSet((DataVals_o *)v183[4], 0LL);
      this = (BattleLogicFunction_o *)DataVals__checkActSet(v184, 0LL);
      if ( ((unsigned __int8)this & 1) != 0 )
      {
        this = (BattleLogicFunction_o *)DataVals__getActSetWeight(v184, 0LL);
        if ( (int)this >= 1 )
        {
          ActSetWeight = DataVals__getActSetWeight(v184, 0LL);
          this = (BattleLogicFunction_o *)DataVals__getActSet(v184, 0LL);
          if ( !v180 )
            goto LABEL_427;
          WeightRate_int___setWeight(
            v180,
            ActSetWeight,
            (int32_t)this,
            (const MethodInfo_2BF8DE0 *)Method_WeightRate_int__setWeight__);
        }
      }
      max_length = baseValslist->max_length;
      if ( (int)++v182 >= max_length )
        goto LABEL_27;
    }
LABEL_428:
    v468 = sub_B5D6C8(this);
    sub_B5D668(v468, 0LL);
  }
LABEL_27:
  if ( !v180 )
    goto LABEL_427;
  v186 = ServantData;
  if ( WeightRate_int___getCount(v180, (const MethodInfo_2BF9180 *)Method_WeightRate_int__getCount__) >= 1 )
  {
    Random = BattleRandom__getRandom(0, v180->fields.totalweight, 0LL);
    *p_actSetId = WeightRate_int___getData(v180, Random, (const MethodInfo_2BF9264 *)Method_WeightRate_int__getData__);
    v188 = System_Int32__ToString((int32_t)p_actSetId, 0LL);
    System_String__Concat_44577788((System_String_o *)StringLiteral_1543/*">actSetId: "*/, v188, 0LL);
  }
  action->fields.ActSetId = args->fields.actSetId;
  BattleActionData__initFuncTargetPlayerType(action, funcIndex, 0LL);
  funcUnitArray_k__BackingField = (WellFired_USFGOPlayBgmEventConditional_CondBGM_array *)args->fields._funcUnitArray_k__BackingField;
  v190 = BattleLogicFunction___c_TypeInfo;
  if ( (BYTE3(BattleLogicFunction___c_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 )
  {
    v191 = isCommandSideEffect;
    if ( !BattleLogicFunction___c_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(BattleLogicFunction___c_TypeInfo);
      v190 = BattleLogicFunction___c_TypeInfo;
    }
  }
  else
  {
    v191 = isCommandSideEffect;
  }
  static_fields = v190->static_fields;
  _9__41_0 = (System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *)static_fields->__9__41_0;
  if ( !_9__41_0 )
  {
    if ( (BYTE3(v190->vtable._0_Equals.methodPtr) & 4) != 0 && !v190->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v190);
      static_fields = BattleLogicFunction___c_TypeInfo->static_fields;
    }
    v194 = (Il2CppObject *)static_fields->__9;
    _9__41_0 = (System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *)sub_B5D694(System_Func_BattleLogicFunctionProcess_FunctionUnitCheck__bool__TypeInfo);
    System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool____ctor(
      _9__41_0,
      v194,
      Method_BattleLogicFunction___c__procList_b__41_0__,
      (const MethodInfo_2C2ECD0 *)Method_System_Func_BattleLogicFunctionProcess_FunctionUnitCheck__bool___ctor__);
    v195 = BattleLogicFunction___c_TypeInfo->static_fields;
    v195->__9__41_0 = (struct System_Func_BattleLogicFunctionProcess_FunctionUnitCheck__bool__o *)_9__41_0;
    sub_B5D560(
      (BattleServantConfConponent_o *)&v195->__9__41_0,
      (System_Int32_array **)_9__41_0,
      v196,
      v197,
      v198,
      v199,
      v200,
      v201);
    v191 = isCommandSideEffect;
  }
  if ( !BasicHelper__Any_USFGOPlayBgmEventConditional_CondBGM_(
          funcUnitArray_k__BackingField,
          (System_Func_T__bool__o *)_9__41_0,
          (const MethodInfo_1AD6DE0 *)Method_BasicHelper_Any_BattleLogicFunctionProcess_FunctionUnitCheck___) )
    action->fields.isSuccessTargetSelection = 1;
  v202 = BattleLogicFunction___c_TypeInfo;
  v203 = (System_Collections_Generic_IEnumerable_TSource__o *)args->fields._funcUnitArray_k__BackingField;
  if ( (BYTE3(BattleLogicFunction___c_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !BattleLogicFunction___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BattleLogicFunction___c_TypeInfo);
    v202 = BattleLogicFunction___c_TypeInfo;
  }
  v204 = v202->static_fields;
  _9__41_1 = (System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *)v204->__9__41_1;
  if ( !_9__41_1 )
  {
    if ( (BYTE3(v202->vtable._0_Equals.methodPtr) & 4) != 0 && !v202->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v202);
      v204 = BattleLogicFunction___c_TypeInfo->static_fields;
    }
    v206 = (Il2CppObject *)v204->__9;
    _9__41_1 = (System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *)sub_B5D694(System_Func_BattleLogicFunctionProcess_FunctionUnitCheck__bool__TypeInfo);
    System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool____ctor(
      _9__41_1,
      v206,
      Method_BattleLogicFunction___c__procList_b__41_1__,
      (const MethodInfo_2C2ECD0 *)Method_System_Func_BattleLogicFunctionProcess_FunctionUnitCheck__bool___ctor__);
    v207 = BattleLogicFunction___c_TypeInfo->static_fields;
    v207->__9__41_1 = (struct System_Func_BattleLogicFunctionProcess_FunctionUnitCheck__bool__o *)_9__41_1;
    sub_B5D560(
      (BattleServantConfConponent_o *)&v207->__9__41_1,
      (System_Int32_array **)_9__41_1,
      v208,
      v209,
      v210,
      v211,
      v212,
      v213);
    v191 = isCommandSideEffect;
  }
  action->fields.isSkillCopyFunctionOnly = System_Linq_Enumerable__All_WarBoardManager_WarBoardOnboardSkillTarget_(
                                             v203,
                                             (System_Func_TSource__bool__o *)_9__41_1,
                                             (const MethodInfo_1C97E70 *)Method_System_Linq_Enumerable_All_BattleLogicFunctionProcess_FunctionUnitCheck___);
  this = (BattleLogicFunction_o *)BattleLogicFunction_ProcListInArgs__MatchSkillType(args, 1, 0LL);
  if ( ((unsigned __int8)this & 1) != 0
    && (v214 = v491->fields.data,
        v215 = (SkillValueUpApplierPlayerMaster_o *)sub_B5D694(SkillValueUpApplierPlayerMaster_TypeInfo),
        SkillValueUpApplierPlayerMaster___ctor(v215, v214, 0LL),
        v215) )
  {
    this = (BattleLogicFunction_o *)((__int64 (__fastcall *)(SkillValueUpApplierPlayerMaster_o *, Il2CppMethodPointer))v215->klass->vtable._4_Init.method)(
                                      v215,
                                      v215->klass->vtable._5_ApplyTo.methodPtr);
    v216 = v215;
    v481 = 1;
  }
  else
  {
    v481 = 0;
    v216 = 0LL;
  }
  v217 = args->fields._funcUnitArray_k__BackingField;
  if ( !v217 )
    goto LABEL_427;
  v218 = v217->max_length;
  if ( v218 >= 1 )
  {
    v478 = (BattleLogicFunction_o *)v216;
    v219 = 0LL;
    v220 = 0;
    v474[8] = 0;
    v480 = args->fields._funcUnitArray_k__BackingField;
    *(_QWORD *)v474 = ServantData == 0LL || !isTreasureDvc;
    while ( 1 )
    {
      if ( v220 >= (unsigned int)v218 )
        goto LABEL_428;
      v225 = v217->m_Items[v220];
      v485 = v220;
      if ( !v225 )
        goto LABEL_427;
      this = (BattleLogicFunction_o *)BattleLogicFunctionProcess_FunctionUnitCheck__get_FuncIndex(v225, 0LL);
      dataVals_k__BackingField = v225->fields._dataVals_k__BackingField;
      funcIdx = (int)this;
      if ( !dataVals_k__BackingField )
        goto LABEL_427;
      funcEnt = dataVals_k__BackingField->fields.funcEnt;
      funcUnit = v225;
      this = (BattleLogicFunction_o *)BattleLogicFunctionProcess_FunctionUnitCheck__checkCondtion(v225, action, 0LL);
      if ( ((unsigned __int8)this & 1) == 0 )
        goto LABEL_380;
      if ( v481 )
      {
        this = v478;
        if ( !v478 )
          goto LABEL_427;
        this = (BattleLogicFunction_o *)((__int64 (__fastcall *)(BattleLogicFunction_o *, BattleLogicFunctionProcess_FunctionUnitCheck_o *, void *))v478->klass[1]._1.namespaze)(
                                          v478,
                                          v225,
                                          v478->klass[1]._1.byval_arg.data);
      }
      if ( isCreateSideEffect )
      {
        if ( !funcEnt )
          goto LABEL_427;
        this = (BattleLogicFunction_o *)BattleLogicFunction__IsAttackSideEffectInvokeFunc(
                                          this,
                                          funcEnt->fields.funcType,
                                          dataVals_k__BackingField,
                                          v227);
        if ( ((unsigned __int8)this & 1) != 0 )
        {
          v229 = BattleLogicFunction___c_TypeInfo;
          funcTargetArray_k__BackingField = (System_Collections_Generic_IEnumerable_TSource__o *)v225->fields._funcTargetArray_k__BackingField;
          if ( (BYTE3(BattleLogicFunction___c_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
            && !BattleLogicFunction___c_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(BattleLogicFunction___c_TypeInfo);
            v229 = BattleLogicFunction___c_TypeInfo;
          }
          v231 = v229->static_fields;
          _9__41_2 = (System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *)v231->__9__41_2;
          if ( !_9__41_2 )
          {
            if ( (BYTE3(v229->vtable._0_Equals.methodPtr) & 4) != 0 && !v229->_2.cctor_finished )
            {
              j_il2cpp_runtime_class_init_0(v229);
              v231 = BattleLogicFunction___c_TypeInfo->static_fields;
            }
            v233 = (Il2CppObject *)v231->__9;
            _9__41_2 = (System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *)sub_B5D694(System_Func_BattleLogicFunctionProcess_FunctionTargetCheck__bool__TypeInfo);
            System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool____ctor(
              _9__41_2,
              v233,
              Method_BattleLogicFunction___c__procList_b__41_2__,
              (const MethodInfo_2C2ECD0 *)Method_System_Func_BattleLogicFunctionProcess_FunctionTargetCheck__bool___ctor__);
            v234 = BattleLogicFunction___c_TypeInfo->static_fields;
            v234->__9__41_2 = (struct System_Func_BattleLogicFunctionProcess_FunctionTargetCheck__bool__o *)_9__41_2;
            sub_B5D560(
              (BattleServantConfConponent_o *)&v234->__9__41_2,
              (System_Int32_array **)_9__41_2,
              v235,
              v236,
              v237,
              v238,
              v239,
              v240);
          }
          v241 = System_Linq_Enumerable__Where_WarBoardManager_WarBoardOnboardSkillTarget_(
                   funcTargetArray_k__BackingField,
                   (System_Func_TSource__bool__o *)_9__41_2,
                   (const MethodInfo_1CBBF10 *)Method_System_Linq_Enumerable_Where_BattleLogicFunctionProcess_FunctionTargetCheck___);
          v242 = BattleLogicFunction___c_TypeInfo;
          if ( (BYTE3(BattleLogicFunction___c_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
            && !BattleLogicFunction___c_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(BattleLogicFunction___c_TypeInfo);
            v242 = BattleLogicFunction___c_TypeInfo;
          }
          v243 = v242->static_fields;
          _9__41_3 = (System_Func_BattleLogicBuff_ReduceHpProcess_BuffInfo__int__o *)v243->__9__41_3;
          if ( !_9__41_3 )
          {
            if ( (BYTE3(v242->vtable._0_Equals.methodPtr) & 4) != 0 && !v242->_2.cctor_finished )
            {
              j_il2cpp_runtime_class_init_0(v242);
              v243 = BattleLogicFunction___c_TypeInfo->static_fields;
            }
            v245 = (Il2CppObject *)v243->__9;
            _9__41_3 = (System_Func_BattleLogicBuff_ReduceHpProcess_BuffInfo__int__o *)sub_B5D694(System_Func_BattleLogicFunctionProcess_FunctionTargetCheck__int__TypeInfo);
            System_Func_BattleLogicBuff_ReduceHpProcess_BuffInfo__int____ctor(
              _9__41_3,
              v245,
              Method_BattleLogicFunction___c__procList_b__41_3__,
              (const MethodInfo_2C2F87C *)Method_System_Func_BattleLogicFunctionProcess_FunctionTargetCheck__int___ctor__);
            v246 = BattleLogicFunction___c_TypeInfo->static_fields;
            v246->__9__41_3 = (struct System_Func_BattleLogicFunctionProcess_FunctionTargetCheck__int__o *)_9__41_3;
            sub_B5D560(
              (BattleServantConfConponent_o *)&v246->__9__41_3,
              (System_Int32_array **)_9__41_3,
              v247,
              v248,
              v249,
              v250,
              v251,
              v252);
          }
          v253 = (System_Collections_Generic_IEnumerable_TSource__o *)System_Linq_Enumerable__Select_BattleLogicBuff_ReduceHpProcess_BuffInfo__int_(
                                                                        v241,
                                                                        (System_Func_TSource__TResult__o *)_9__41_3,
                                                                        (const MethodInfo_1CB2FF4 *)Method_System_Linq_Enumerable_Select_BattleLogicFunctionProcess_FunctionTargetCheck__int___);
          v254 = System_Linq_Enumerable__ToArray_int_(
                   v253,
                   (const MethodInfo_1CB76BC *)Method_System_Linq_Enumerable_ToArray_int___);
          v255 = FuncList__Check(26, funcEnt->fields.funcType, 0LL);
          v256 = (BattleLogicFunction_PreAttackSideEffectMakeArgument_o *)sub_B5D694(BattleLogicFunction_PreAttackSideEffectMakeArgument_TypeInfo);
          BattleLogicFunction_PreAttackSideEffectMakeArgument___ctor(v256, 0LL);
          if ( !v256 )
            goto LABEL_427;
          v257 = (BattleLogicFunction_SideEffectMakeArgument_o *)((__int64 (__fastcall *)(BattleLogicFunction_PreAttackSideEffectMakeArgument_o *, System_Int32_array *, Il2CppMethodPointer))v256->klass->vtable._6_Init.method)(
                                                                   v256,
                                                                   v254,
                                                                   v256->klass->vtable._7_MakeOnlyMainArgument.methodPtr);
          BattleLogicFunction__setAttackSideEffect(v491, action, v186, v255 || isTreasureDvc, v257, v258);
        }
      }
      v259 = funcUnit->fields._funcTargetArray_k__BackingField;
      if ( !v259 )
        goto LABEL_427;
      v260 = v259->max_length;
      p_funcType = &funcEnt->fields.funcType;
      if ( v260 >= 1 )
      {
        for ( i = 0; i < v260; ++i )
        {
          if ( i >= (unsigned int)v260 )
            goto LABEL_428;
          v428 = v259->m_Items[i];
          if ( !v428 )
            goto LABEL_427;
          BattleLogicFunction__SetTargetFuncList(
            v491,
            v428->fields._targetId_k__BackingField,
            action,
            dataVals_k__BackingField,
            v228);
          this = (BattleLogicFunction_o *)BattleLogicFunction_ProcListInArgs__get_FuncSideEffectArg(args, 0LL);
          if ( this )
            v219 = (BattleLogicFunction_FuncSideEffectFunctionArgument_o *)this;
          if ( this )
          {
            if ( !v219 )
              goto LABEL_427;
            BattleLogicFunction_FuncSideEffectFunctionArgument__AddTarget(v219, v428, 0LL);
          }
          if ( !v428->fields._result_k__BackingField )
          {
            NoEffectObject = BattleLogicFunctionProcess_FunctionTargetCheck__getInvalidObject(v428, 0LL);
            goto LABEL_323;
          }
          this = (BattleLogicFunction_o *)v491->fields.data;
          if ( !this )
            goto LABEL_427;
          targetId_k__BackingField = v428->fields._targetId_k__BackingField;
          this = (BattleLogicFunction_o *)BattleData__getServantData(
                                            (BattleData_o *)this,
                                            targetId_k__BackingField,
                                            0LL);
          if ( !this )
            goto LABEL_427;
          v430 = this;
          this = (BattleLogicFunction_o *)BattleServantData__CheckNotTargetSkill(
                                            (BattleServantData_o *)this,
                                            skillId,
                                            0LL);
          if ( ((unsigned __int8)this & 1) != 0 )
          {
            NoEffectObject = BattleLogicFunction__getNoEffectObject(
                               v491,
                               (int32_t)v430->fields.logic,
                               funcIdx,
                               dataVals_k__BackingField,
                               v191,
                               0LL,
                               0LL,
                               v431);
LABEL_323:
            BattleActionData__addAction(action, NoEffectObject, 0LL);
            goto LABEL_371;
          }
          action->fields.funcResult = 1;
          args->fields.tdCommandTypeChange = -1;
          if ( !funcEnt )
            goto LABEL_427;
          v267 = &funcEnt->fields.funcType;
          this = (BattleLogicFunction_o *)FuncList__Check(1, *p_funcType, 0LL);
          if ( ((unsigned __int8)this & 1) != 0
            || (this = (BattleLogicFunction_o *)FuncList__Check(16, *p_funcType, 0LL), ((unsigned __int8)this & 1) != 0) )
          {
            vals = funcEnt->fields.vals;
            if ( !vals )
              goto LABEL_427;
            if ( !vals->max_length )
              goto LABEL_428;
            this = (BattleLogicFunction_o *)MasterData_WarQuestSelectionMaster;
            if ( !MasterData_WarQuestSelectionMaster )
              goto LABEL_427;
            this = (BattleLogicFunction_o *)DataMasterBase_WarMaster__WarEntity__int___GetEntity(
                                              MasterData_WarQuestSelectionMaster,
                                              vals->m_Items[1],
                                              (const MethodInfo_23FAE10 *)Method_DataMasterBase_BuffMaster__BuffEntity__int__GetEntity__);
            if ( !this )
              goto LABEL_427;
            commandType = 1;
            switch ( HIDWORD(this->fields.data) )
            {
              case 0x8F:
                commandType = action->fields.commandType;
                goto LABEL_337;
              case 0x91:
                goto LABEL_337;
              case 0x92:
                commandType = 2;
                goto LABEL_337;
              case 0x93:
                commandType = 3;
LABEL_337:
                args->fields.tdCommandTypeChange = commandType;
                break;
              default:
                break;
            }
            v267 = &funcEnt->fields.funcType;
            v435 = FuncList__Check(16, *p_funcType, 0LL);
            BattleLogicFunction__functionAddState(v491, action, v428, args, v435, v436);
            goto LABEL_359;
          }
          if ( FuncList__Check(2, *p_funcType, 0LL) )
          {
            v268 = BattleLogicFunction__functionSubState(
                     v491,
                     targetId_k__BackingField,
                     funcEnt,
                     dataVals_k__BackingField,
                     funcIdx,
                     v191,
                     &subBuffInfo,
                     args,
                     overwriteLossHp);
            goto LABEL_358;
          }
          if ( FuncList__Check(3, *p_funcType, 0LL) )
          {
            v438 = (int32_t)v430->fields.logic;
            playerIdb = action->fields.actorId;
            isSafeDamage = BattleLogicFunction__isSafeDamage(
                             v491,
                             dataVals_k__BackingField,
                             targetId_k__BackingField,
                             v437);
            v440 = v438;
            v191 = isCommandSideEffect;
            v268 = BattleLogicFunction__functionDamage(
                     v491,
                     playerIdb,
                     v440,
                     dataVals_k__BackingField,
                     funcIdx,
                     action,
                     isSafeDamage,
                     v441);
            goto LABEL_358;
          }
          if ( FuncList__Check(4, *p_funcType, 0LL) )
          {
            actorId = action->fields.actorId;
            v444 = (int32_t)v430->fields.logic;
            v445 = 1;
            goto LABEL_357;
          }
          if ( FuncList__Check(14, *p_funcType, 0LL) )
          {
            actorId = action->fields.actorId;
            v444 = (int32_t)v430->fields.logic;
            v445 = 2;
            goto LABEL_357;
          }
          if ( FuncList__Check(15, *p_funcType, 0LL) )
          {
            actorId = action->fields.actorId;
            v444 = (int32_t)v430->fields.logic;
            v445 = 3;
            goto LABEL_357;
          }
          if ( FuncList__Check(18, *p_funcType, 0LL) )
          {
            actorId = action->fields.actorId;
            v444 = (int32_t)v430->fields.logic;
            v445 = 4;
            goto LABEL_357;
          }
          if ( FuncList__Check(27, *p_funcType, 0LL) )
          {
            actorId = action->fields.actorId;
            v444 = (int32_t)v430->fields.logic;
            v445 = 7;
            goto LABEL_357;
          }
          if ( FuncList__Check(21, *p_funcType, 0LL) )
          {
            actorId = action->fields.actorId;
            v444 = (int32_t)v430->fields.logic;
            v445 = 5;
            goto LABEL_357;
          }
          if ( FuncList__Check(22, *p_funcType, 0LL) )
          {
            actorId = action->fields.actorId;
            v444 = (int32_t)v430->fields.logic;
            v445 = 6;
            goto LABEL_357;
          }
          if ( FuncList__Check(28, *p_funcType, 0LL) )
          {
            actorId = action->fields.actorId;
            v444 = (int32_t)v430->fields.logic;
            v445 = 8;
LABEL_357:
            v268 = BattleLogicFunction__functionNPDamage(
                     v491,
                     actorId,
                     v444,
                     dataVals_k__BackingField,
                     funcIdx,
                     v445,
                     action,
                     v442);
LABEL_358:
            BattleActionData__addAction(action, v268, 0LL);
            goto LABEL_359;
          }
          if ( FuncList__Check(5, *p_funcType, 0LL) )
          {
            v262 = v491->fields.data;
            Value = DataVals__GetValue(dataVals_k__BackingField, 0LL);
            this = (BattleLogicFunction_o *)DataVals__isMultipleGainStar(dataVals_k__BackingField, 0LL);
            if ( !v262 )
              goto LABEL_427;
            BattleData__addCriticalPoint(v262, Value, (unsigned __int8)this & 1, 0LL);
LABEL_107:
            this = (BattleLogicFunction_o *)BattleLogicFunction__getFunctionObject(
                                              v264,
                                              funcEnt,
                                              (int32_t)v430->fields.logic,
                                              funcIdx,
                                              v191,
                                              0LL,
                                              v265);
            if ( !this )
              goto LABEL_427;
            HIDWORD(this->fields.logic) = 4;
            BattleActionData__setBuffData(action, (BattleActionData_BuffData_o *)this, dataVals_k__BackingField, 0LL);
            this = (BattleLogicFunction_o *)v491->fields.data;
            if ( !this )
              goto LABEL_427;
            BattleData__AddPerformedVals((BattleData_o *)this, dataVals_k__BackingField, 0LL);
            goto LABEL_110;
          }
          if ( FuncList__Check(31, *p_funcType, 0LL) )
          {
            v266 = v491->fields.data;
            this = (BattleLogicFunction_o *)DataVals__GetValue(dataVals_k__BackingField, 0LL);
            if ( !v266 )
              goto LABEL_427;
            BattleData__lossCriticalPoint(v266, (int32_t)this, 0LL);
            goto LABEL_107;
          }
          if ( FuncList__Check(6, *p_funcType, 0LL) )
          {
            v268 = BattleLogicFunction__functionGainHp(
                     v491,
                     action->fields.actorId,
                     targetId_k__BackingField,
                     funcEnt,
                     dataVals_k__BackingField,
                     funcIdx,
                     v191,
                     -1,
                     overwriteLossHp);
            goto LABEL_358;
          }
          if ( FuncList__Check(17, *p_funcType, 0LL) )
          {
            v268 = BattleLogicFunction__functionGainHpPer(
                     v491,
                     action->fields.actorId,
                     targetId_k__BackingField,
                     funcEnt,
                     dataVals_k__BackingField,
                     funcIdx,
                     v191,
                     v269);
            goto LABEL_358;
          }
          if ( FuncList__Check(7, *p_funcType, 0LL) )
          {
            if ( BattleServantData__checkPlayer((BattleServantData_o *)v430, 0LL) )
            {
              isUnaffected = DataVals__isUnaffected(dataVals_k__BackingField, 0LL);
              CorrectedValueFuncGainNp = DataVals__GetValue(dataVals_k__BackingField, 0LL);
              if ( !isUnaffected )
                CorrectedValueFuncGainNp = BattleServantData__getCorrectedValueFuncGainNp(
                                             (BattleServantData_o *)v430,
                                             CorrectedValueFuncGainNp,
                                             0LL);
              if ( !BattleServantData__isGainNp((BattleServantData_o *)v430, 1, 0LL) )
              {
                v191 = isCommandSideEffect;
                v290 = (int32_t)v430->fields.logic;
                v291 = v491;
                v292 = funcIdx;
                v293 = isCommandSideEffect;
                v294 = dataVals_k__BackingField;
                goto LABEL_141;
              }
              v273 = (BattleLogicFunction_o *)BattleServantData__addNp(
                                                (BattleServantData_o *)v430,
                                                CorrectedValueFuncGainNp,
                                                0,
                                                0LL);
              v274 = (int)v273;
              this = (BattleLogicFunction_o *)BattleLogicFunction__getFunctionObject(
                                                v273,
                                                funcEnt,
                                                (int32_t)v430->fields.logic,
                                                funcIdx,
                                                isCommandSideEffect,
                                                0LL,
                                                v275);
              if ( !this )
                goto LABEL_427;
              v276 = this;
              HIDWORD(this->fields.logic) = 3;
              BattleActionData_BuffData__setSaveNp((BattleActionData_BuffData_o *)this, v274, 0LL);
              if ( isCommandSideEffect )
                BYTE2(v276->fields.wkStr) = 1;
              v277 = action;
              v278 = (BattleActionData_BuffData_o *)v276;
              v279 = dataVals_k__BackingField;
              goto LABEL_124;
            }
          }
          else
          {
            if ( FuncList__Check(8, *p_funcType, 0LL) )
            {
              if ( BattleServantData__checkPlayer((BattleServantData_o *)v430, 0LL) )
              {
                v280 = DataVals__GetValue(dataVals_k__BackingField, 0LL);
                v281 = (BattleLogicFunction_o *)BattleServantData__addNp((BattleServantData_o *)v430, -v280, 0, 0LL);
                v282 = (int)v281;
                this = (BattleLogicFunction_o *)BattleLogicFunction__getFunctionObject(
                                                  v281,
                                                  funcEnt,
                                                  (int32_t)v430->fields.logic,
                                                  funcIdx,
                                                  isCommandSideEffect,
                                                  0LL,
                                                  v283);
                if ( !this )
                  goto LABEL_427;
                v284 = (BattleActionData_BuffData_o *)this;
                HIDWORD(this->fields.logic) = 3;
                BattleActionData_BuffData__setSaveNp((BattleActionData_BuffData_o *)this, v282, 0LL);
                BattleActionData__setBuffData(action, v284, dataVals_k__BackingField, 0LL);
              }
              v191 = isCommandSideEffect;
              v267 = &funcEnt->fields.funcType;
              goto LABEL_359;
            }
            if ( FuncList__Check(9, *p_funcType, 0LL) )
            {
              v285 = DataVals__GetValue2(dataVals_k__BackingField, 0LL) - 1;
              TargetList = DataVals__GetTargetList(dataVals_k__BackingField, 0LL);
              v287 = DataVals__GetValue(dataVals_k__BackingField, 0LL);
              v288 = BattleServantData__skillChageShorten((BattleServantData_o *)v430, v287, 0, v285, TargetList, 0LL);
LABEL_136:
              v298 = (int32_t)v430->fields.logic;
              if ( !v288 )
              {
                v191 = isCommandSideEffect;
                v291 = v491;
                v290 = (int32_t)v430->fields.logic;
                goto LABEL_140;
              }
LABEL_137:
              v191 = isCommandSideEffect;
              FunctionObject = BattleLogicFunction__getFunctionObject(
                                 (BattleLogicFunction_o *)v288,
                                 funcEnt,
                                 v298,
                                 funcIdx,
                                 isCommandSideEffect,
                                 0LL,
                                 v289);
              v300 = action;
              v301 = dataVals_k__BackingField;
LABEL_138:
              BattleActionData__setBuffData(v300, FunctionObject, v301, 0LL);
              goto LABEL_110;
            }
            if ( FuncList__Check(10, *p_funcType, 0LL) )
            {
              v295 = DataVals__GetValue2(dataVals_k__BackingField, 0LL) - 1;
              v296 = DataVals__GetTargetList(dataVals_k__BackingField, 0LL);
              v297 = DataVals__GetValue(dataVals_k__BackingField, 0LL);
              v288 = BattleServantData__skillChageExtend((BattleServantData_o *)v430, v297, 999, v295, v296, 0LL);
              goto LABEL_136;
            }
            if ( FuncList__Check(12, *p_funcType, 0LL) )
            {
              v305 = action->fields.actorId;
              v191 = isCommandSideEffect;
              v306 = BattleLogicFunction__isSafeDamage(v491, dataVals_k__BackingField, targetId_k__BackingField, v304);
              v303 = BattleLogicFunction__functionlossHp(
                       v491,
                       v305,
                       targetId_k__BackingField,
                       funcEnt,
                       dataVals_k__BackingField,
                       funcIdx,
                       v306,
                       isCommandSideEffect,
                       -1,
                       1,
                       action,
                       v471);
              goto LABEL_143;
            }
            if ( FuncList__Check(25, *p_funcType, 0LL) )
            {
              v191 = isCommandSideEffect;
              v303 = BattleLogicFunction__functionlossHp(
                       v491,
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
                       v471);
              goto LABEL_143;
            }
            if ( FuncList__Check(13, *p_funcType, 0LL) )
            {
              v191 = isCommandSideEffect;
              v307 = action->fields.actorId;
              v308 = v491;
              v309 = funcEnt;
              v310 = funcIdx;
              v311 = isCommandSideEffect;
              v312 = targetId_k__BackingField;
              v313 = dataVals_k__BackingField;
              v314 = 0;
LABEL_150:
              v303 = BattleLogicFunction__functionInstantDeath(
                       v308,
                       v307,
                       v312,
                       v309,
                       v313,
                       v310,
                       v311,
                       v314,
                       overwriteLossHp);
              goto LABEL_143;
            }
            if ( FuncList__Check(19, *p_funcType, 0LL) )
            {
              v191 = isCommandSideEffect;
              v303 = BattleLogicFunction__functionHastenNpTurn(
                       v491,
                       targetId_k__BackingField,
                       funcEnt,
                       dataVals_k__BackingField,
                       funcIdx,
                       isCommandSideEffect,
                       -1,
                       v315);
              goto LABEL_143;
            }
            if ( FuncList__Check(20, *p_funcType, 0LL) )
            {
              v191 = isCommandSideEffect;
              v303 = BattleLogicFunction__functionDelayNpTurn(
                       v491,
                       targetId_k__BackingField,
                       funcEnt,
                       dataVals_k__BackingField,
                       funcIdx,
                       isCommandSideEffect,
                       &absorptionCount,
                       v316);
              goto LABEL_143;
            }
            if ( FuncList__Check(56, *p_funcType, 0LL) )
            {
              v191 = isCommandSideEffect;
              v303 = BattleLogicFunction__functionAbsorbNpTurn(
                       v491,
                       targetId_k__BackingField,
                       funcEnt,
                       action,
                       v428,
                       isCommandSideEffect,
                       v317);
              goto LABEL_143;
            }
            if ( FuncList__Check(23, *p_funcType, 0LL) )
            {
              v323 = v491;
              v324 = BattleLogicFunction__functionResetCommandCard(v491, v318, v319, v320, v321, v322);
LABEL_159:
              BattleActionData__addAction(action, v324, 0LL);
              this = (BattleLogicFunction_o *)v323->fields.data;
              if ( !this )
                goto LABEL_427;
              BattleData__AddPerformedVals((BattleData_o *)this, dataVals_k__BackingField, 0LL);
              goto LABEL_125;
            }
            if ( !FuncList__Check(24, *p_funcType, 0LL) )
            {
              if ( FuncList__Check(109, *p_funcType, 0LL) )
              {
                v332 = BattleLogicFunction__functionTransformServant(
                         v491,
                         targetId_k__BackingField,
                         v330,
                         dataVals_k__BackingField,
                         funcIdx,
                         v331);
LABEL_170:
                BattleActionData__addAction(action, v332, 0LL);
                goto LABEL_125;
              }
              if ( FuncList__Check(26, *p_funcType, 0LL) )
              {
                v334 = BattleLogicFunction__functionReflection(
                         v491,
                         action->fields.actorId,
                         (int32_t)v430->fields.logic,
                         dataVals_k__BackingField,
                         funcIdx,
                         v333);
                BattleActionData__addAction(action, v334, 0LL);
                v474[4] = 1;
                goto LABEL_125;
              }
              if ( FuncList__Check(29, *p_funcType, 0LL) )
              {
                v191 = isCommandSideEffect;
                v303 = BattleLogicFunction__functionCallServant(
                         v491,
                         action->fields.actorId,
                         v335,
                         dataVals_k__BackingField,
                         funcIdx,
                         isCommandSideEffect,
                         v336);
                goto LABEL_143;
              }
              if ( FuncList__Check(30, *p_funcType, 0LL) )
              {
                v342 = BattleLogicFunction__functionPtShuffle(v491, v337, v338, v339, v340, v341);
                BattleActionData__addAction(action, v342, 0LL);
                this = (BattleLogicFunction_o *)v491->fields.data;
                if ( !this )
                  goto LABEL_427;
                BattleData__AddPerformedVals((BattleData_o *)this, dataVals_k__BackingField, 0LL);
                goto LABEL_176;
              }
              if ( FuncList__Check(32, *p_funcType, 0LL) )
              {
                v332 = BattleLogicFunction__functionChangeServant(
                         v491,
                         action->fields.actorId,
                         targetId_k__BackingField,
                         v343,
                         dataVals_k__BackingField,
                         v344,
                         v345);
                goto LABEL_170;
              }
              v346 = FuncList__Check(33, *p_funcType, 0LL);
              if ( v346 )
              {
                v332 = BattleLogicFunction__functionChangeBg(
                         (BattleLogicFunction_o *)v346,
                         action->fields.actorId,
                         v347,
                         dataVals_k__BackingField,
                         v348,
                         v349);
                goto LABEL_170;
              }
              if ( FuncList__Check(34, *p_funcType, 0LL) )
              {
                v351 = action->fields.actorId;
                v352 = (int32_t)v430->fields.logic;
                v353 = BattleLogicFunction__isSafeDamage(v491, dataVals_k__BackingField, targetId_k__BackingField, v350);
                v355 = v491;
                goto LABEL_183;
              }
              if ( FuncList__Check(122, *p_funcType, 0LL) )
              {
                v356 = action->fields.actorId;
                v357 = (int32_t)v430->fields.logic;
                v355 = v491;
                v353 = 1;
                goto LABEL_186;
              }
              if ( FuncList__Check(35, *p_funcType, 0LL) )
              {
                BYTE1(v430[9].monitor) = 1;
                goto LABEL_125;
              }
              this = (BattleLogicFunction_o *)FuncList__Check(36, *p_funcType, 0LL);
              if ( ((unsigned __int8)this & 1) != 0 )
              {
                v364 = v491->fields.data;
                if ( !v364 )
                  goto LABEL_427;
                draw_commandlist = (System_Int32_array **)v364->fields.draw_commandlist;
                v364->fields.fixedCommands = (struct BattleCommandData_array *)draw_commandlist;
                sub_B5D560(
                  (BattleServantConfConponent_o *)&v364->fields.fixedCommands,
                  draw_commandlist,
                  v358,
                  v359,
                  v360,
                  v361,
                  v362,
                  v363);
LABEL_192:
                v298 = (int32_t)v430->fields.logic;
                goto LABEL_137;
              }
              if ( FuncList__Check(37, *p_funcType, 0LL)
                || FuncList__Check(38, *p_funcType, 0LL)
                || FuncList__Check(39, *p_funcType, 0LL)
                || FuncList__Check(40, *p_funcType, 0LL) )
              {
                v366 = DataVals__GetValue(dataVals_k__BackingField, 0LL);
                if ( FuncList__Check(37, *p_funcType, 0LL) || FuncList__Check(39, *p_funcType, 0LL) )
                  v366 = -v366;
                if ( FuncList__Check(37, *p_funcType, 0LL) || FuncList__Check(38, *p_funcType, 0LL) )
                {
                  v366 *= 2;
                  playerId = 1;
                }
                else
                {
                  playerId = 0;
                }
                isParam = DataVals__isParam(dataVals_k__BackingField, 90, 0LL);
                v368 = DataVals__GetTargetList(dataVals_k__BackingField, 0LL);
                v288 = BattleServantData__ChangeBuffValue(
                         (BattleServantData_o *)v430,
                         v366,
                         v368,
                         playerId,
                         1,
                         isParam,
                         0LL);
                goto LABEL_136;
              }
              if ( FuncList__Check(41, *p_funcType, 0LL) )
              {
                playerIda = v491->fields.data;
                v369 = DataVals__GetValue(dataVals_k__BackingField, 0LL);
                v370 = (Generator_BGMFromChangeBGMFunc_o *)sub_B5D694(Generator_BGMFromChangeBGMFunc_TypeInfo);
                Generator_BGMFromChangeBGMFunc___ctor(v370, playerIda, v369, dataVals_k__BackingField, 0, 0LL);
                BattleLogicFunction__FunctionChangeBgm(v491, args, (Generator_BGM_o *)v370, v371);
                goto LABEL_125;
              }
              v372 = FuncList__Check(42, *p_funcType, 0LL);
              if ( v372 )
              {
                v191 = isCommandSideEffect;
                FunctionObject = BattleLogicFunction__getFunctionObject(
                                   (BattleLogicFunction_o *)v372,
                                   funcEnt,
                                   (int32_t)v430->fields.logic,
                                   funcIdx,
                                   isCommandSideEffect,
                                   0LL,
                                   v373);
                v300 = action;
                v301 = 0LL;
                goto LABEL_138;
              }
              if ( FuncList__Check(43, *p_funcType, 0LL) )
              {
                v191 = isCommandSideEffect;
                v303 = BattleLogicFunction__functionResurrection(
                         v491,
                         (int32_t)v430->fields.logic,
                         funcIdx,
                         funcEnt,
                         dataVals_k__BackingField,
                         isCommandSideEffect,
                         v374);
                goto LABEL_143;
              }
              if ( !FuncList__Check(44, *p_funcType, 0LL) && !FuncList__Check(133, *p_funcType, 0LL) )
              {
                if ( FuncList__Check(45, *p_funcType, 0LL) )
                {
                  BYTE3(v430[9].monitor) = DataVals__GetValue(dataVals_k__BackingField, 0LL) == 1;
                  goto LABEL_125;
                }
                if ( FuncList__Check(46, *p_funcType, 0LL) )
                {
                  v191 = isCommandSideEffect;
                  v307 = action->fields.actorId;
                  v308 = v491;
                  v309 = funcEnt;
                  v310 = funcIdx;
                  v311 = isCommandSideEffect;
                  v314 = 1;
                  v312 = targetId_k__BackingField;
                  v313 = dataVals_k__BackingField;
                  goto LABEL_150;
                }
                if ( FuncList__Check(47, *p_funcType, 0LL) )
                {
                  v385 = action->fields.actorId;
                  v386 = (int32_t)v430->fields.logic;
                  v387 = 9;
                }
                else
                {
                  if ( FuncList__Check(48, *p_funcType, 0LL) )
                  {
                    v332 = BattleLogicFunction__functionGainNpFromTargets(v491, args, action, v428, v388);
                    goto LABEL_170;
                  }
                  if ( FuncList__Check(49, *p_funcType, 0LL) )
                  {
                    v332 = BattleLogicFunction__functionGainHpFromTargets(v491, args, action, v428, v389);
                    goto LABEL_170;
                  }
                  v390 = FuncList__Check(50, *p_funcType, 0LL);
                  if ( v390 || (v390 = FuncList__Check(51, *p_funcType, 0LL)) )
                  {
                    v392 = *p_funcType == 51;
                    if ( *p_funcType == 50 )
                    {
                      v390 = BattleLogicFunction__isSafeDamage(
                               v491,
                               dataVals_k__BackingField,
                               targetId_k__BackingField,
                               v391);
                      v392 = v390;
                    }
                    v393 = action->fields.actorId;
                    overwriteLossHpa = BattleLogicFunction__getHpPerValue(
                                         (BattleLogicFunction_o *)v390,
                                         dataVals_k__BackingField,
                                         (BattleServantData_o *)v430,
                                         v391);
                    v394 = v393;
                    v191 = isCommandSideEffect;
                    v303 = BattleLogicFunction__functionlossHp(
                             v491,
                             v394,
                             targetId_k__BackingField,
                             funcEnt,
                             dataVals_k__BackingField,
                             funcIdx,
                             v392,
                             isCommandSideEffect,
                             overwriteLossHpa,
                             0,
                             action,
                             v471);
                    goto LABEL_143;
                  }
                  if ( FuncList__Check(52, *p_funcType, 0LL) )
                  {
                    v396 = v491;
                    v397 = 1;
                    v398 = dataVals_k__BackingField;
LABEL_249:
                    updated = BattleLogicFunction__UpdateUserEquipSkillChargeTurn(v396, v398, v397, v395);
                    if ( updated )
                    {
                      v191 = isCommandSideEffect;
                      BattleLogicFunction__CreateMasterBuffEffect(
                        (BattleLogicFunction_o *)updated,
                        action,
                        funcEnt,
                        funcIdx,
                        isCommandSideEffect,
                        dataVals_k__BackingField,
                        v400);
                      goto LABEL_110;
                    }
                    v401 = (BattleActionData_MasterBuffData_o *)sub_B5D694(BattleActionData_MasterBuffData_TypeInfo);
                    BattleActionData_MasterBuffData___ctor(v401, funcEnt, 0LL);
                    if ( !v401 )
                      goto LABEL_427;
                    v401->fields.popColor = 1;
                    v191 = isCommandSideEffect;
                    v290 = v428->fields._targetId_k__BackingField;
                    v291 = v491;
                    v292 = funcIdx;
                    v293 = isCommandSideEffect;
                    v294 = dataVals_k__BackingField;
                    v302 = (BattleActionData_BuffData_o *)v401;
                    goto LABEL_142;
                  }
                  if ( FuncList__Check(62, *p_funcType, 0LL) )
                  {
                    v396 = v491;
                    v398 = dataVals_k__BackingField;
                    v397 = 0;
                    goto LABEL_249;
                  }
                  if ( FuncList__Check(53, *p_funcType, 0LL) )
                  {
                    v402 = (Generator_BGFromQuickChangeBGFunc_o *)sub_B5D694(Generator_BGFromQuickChangeBGFunc_TypeInfo);
                    Generator_BGFromQuickChangeBGFunc___ctor(v402, dataVals_k__BackingField, 0LL);
                    BattleLogicFunction__FunctionQuickChangeBG(v491, args, (Generator_Background_o *)v402, v403);
                    goto LABEL_125;
                  }
                  if ( FuncList__Check(54, *p_funcType, 0LL) )
                  {
                    this = (BattleLogicFunction_o *)v430[2].fields.buffProgressTurnOpponentList;
                    if ( !this )
                      goto LABEL_427;
                    if ( ServantEntity__isInvalidSkillShift((ServantEntity_o *)this, 0LL) )
                    {
                      v290 = v428->fields._targetId_k__BackingField;
LABEL_230:
                      v191 = isCommandSideEffect;
                      v291 = v491;
LABEL_140:
                      v293 = v191;
                      v292 = funcIdx;
                      v294 = dataVals_k__BackingField;
LABEL_141:
                      v302 = 0LL;
LABEL_142:
                      v303 = BattleLogicFunction__getNoEffectObject(v291, v290, v292, v294, v293, 0LL, v302, v272);
LABEL_143:
                      BattleActionData__addAction(action, v303, 0LL);
                      goto LABEL_110;
                    }
                    Param = DataVals__GetParam(dataVals_k__BackingField, 53, 0, 0LL);
                    BattleLogicFunction__functionShiftServant(v491, action, (BattleServantData_o *)v430, Param, v405);
                    goto LABEL_125;
                  }
                  if ( FuncList__Check(55, *p_funcType, 0LL) )
                  {
                    v385 = action->fields.actorId;
                    v386 = (int32_t)v430->fields.logic;
                    v387 = 10;
                  }
                  else
                  {
                    if ( FuncList__Check(57, *p_funcType, 0LL) )
                    {
                      LODWORD(v430[6].fields.wkStr) = DataVals__GetValue(dataVals_k__BackingField, 0LL);
                      goto LABEL_125;
                    }
                    if ( FuncList__Check(58, *p_funcType, 0LL) )
                    {
                      buffProgressTurnSelfList = (BattleBuffData_o *)v430[8].fields.buffProgressTurnSelfList;
                      this = (BattleLogicFunction_o *)DataVals__GetParam(dataVals_k__BackingField, 14, 0, 0LL);
                      if ( !buffProgressTurnSelfList )
                        goto LABEL_427;
                      BattleBuffData__UpdateForceAllBuffNoAct(buffProgressTurnSelfList, (int32_t)this, 0LL);
                      goto LABEL_192;
                    }
                    if ( FuncList__Check(59, *p_funcType, 0LL) )
                    {
                      v407 = (BattleActionData_UpShiftGaugeData_o *)sub_B5D694(BattleActionData_UpShiftGaugeData_TypeInfo);
                      BattleActionData_UpShiftGaugeData___ctor(v407, 0LL);
LABEL_271:
                      BattleLogicFunction__functionBreakGaugeChange(
                        v491,
                        action,
                        funcUnit,
                        (BattleServantData_o *)v430,
                        (BattleActionData_BaseShiftGaugeData_o *)v407,
                        v408);
                      goto LABEL_125;
                    }
                    if ( FuncList__Check(60, *p_funcType, 0LL) )
                    {
                      v407 = (BattleActionData_UpShiftGaugeData_o *)sub_B5D694(BattleActionData_DownShiftGaugeData_TypeInfo);
                      BattleActionData_DownShiftGaugeData___ctor((BattleActionData_DownShiftGaugeData_o *)v407, 0LL);
                      goto LABEL_271;
                    }
                    if ( FuncList__Check(61, *p_funcType, 0LL) )
                    {
                      SubMember = BattleLogicFunction__FunctionMoveToLastSubMember(
                                    v491,
                                    (BattleServantData_o *)v430,
                                    funcEnt,
                                    v409,
                                    funcIdx,
                                    v410);
                      BattleActionData__addAction(action, SubMember, 0LL);
                      BattleActionData__UpdateForceBuffEffectAllTrue(action, 0LL);
LABEL_176:
                      v474[8] = 1;
                      goto LABEL_125;
                    }
                    if ( FuncList__Check(119, *p_funcType, 0LL) )
                    {
                      BattleLogicFunction__functionMovePosition(v491, action, (BattleServantData_o *)v430, v412);
                      goto LABEL_125;
                    }
                    if ( FuncList__Check(120, *p_funcType, 0LL) )
                    {
                      v191 = isCommandSideEffect;
                      BattleLogicFunction__functionRevival(
                        v491,
                        action,
                        funcEnt,
                        dataVals_k__BackingField,
                        funcIdx,
                        isCommandSideEffect,
                        v413);
                      goto LABEL_110;
                    }
                    if ( !FuncList__Check(121, *p_funcType, 0LL) )
                    {
                      if ( FuncList__Check(124, *p_funcType, 0LL) )
                      {
                        BattleLogicFunction__functionMoveState(v491, args, action, v428, v414);
                        goto LABEL_125;
                      }
                      if ( FuncList__Check(125, *p_funcType, 0LL) )
                      {
                        BattleLogicFunction__ChangeBGMCostume(v491, dataVals_k__BackingField, action, v415);
                        goto LABEL_125;
                      }
                      v416 = FuncList__Check(126, *p_funcType, 0LL);
                      if ( v416 )
                      {
                        BattleLogicFunction__LossCommandSpell(
                          (BattleLogicFunction_o *)v416,
                          dataVals_k__BackingField,
                          action,
                          v417);
                        goto LABEL_125;
                      }
                      if ( FuncList__Check(127, *p_funcType, 0LL) )
                        goto LABEL_125;
                      if ( FuncList__Check(128, *p_funcType, 0LL) )
                      {
                        BattleLogicFunction__FunctionUpdateEntryPositions(v491, dataVals_k__BackingField, v418);
                        goto LABEL_125;
                      }
                      if ( FuncList__Check(63, *p_funcType, 0LL) )
                      {
                        BattleLogicFunction__FunctionUpdateEntryMaxCountEachTurn(v491, dataVals_k__BackingField, v419);
                        goto LABEL_125;
                      }
                      if ( FuncList__Check(130, *p_funcType, 0LL) )
                      {
                        BattleLogicFunction__FunctionToFieldAddChangeFieldBuff(
                          v491,
                          args,
                          action,
                          v428,
                          isTreasureDvc,
                          v420);
                        goto LABEL_125;
                      }
                      if ( FuncList__Check(131, *p_funcType, 0LL) )
                      {
                        BattleLogicFunction__FunctionSubFieldBuff(v491, args, action, v428, v421);
                        goto LABEL_125;
                      }
                      if ( FuncList__Check(134, *p_funcType, 0LL) )
                      {
                        this = (BattleLogicFunction_o *)DataVals__GetValue(dataVals_k__BackingField, 0LL);
                        if ( !v491->fields.data )
                          goto LABEL_427;
                        BattleData__AddQuestRouteId(v491->fields.data, (int32_t)this, 0LL);
                        goto LABEL_125;
                      }
                      if ( FuncList__Check(135, *p_funcType, 0LL) )
                      {
                        BattleLogicFunction__FunctionLastSkillCopy(v491, action, dataVals_k__BackingField, args, v422);
                        goto LABEL_125;
                      }
                      if ( FuncList__Check(136, *p_funcType, 0LL) )
                      {
                        v423 = DataVals__GetValue(dataVals_k__BackingField, 0LL);
                        BattleLogicFunction__FunctionChangeEnemyMasterFace(v491, v423, v424);
                        goto LABEL_125;
                      }
                      if ( !FuncList__Check(137, *p_funcType, 0LL) )
                      {
                        if ( FuncList__Check(138, *p_funcType, 0LL) )
                        {
                          BattleLogicFunction__FunctionAddBattleValue(v491, funcEnt, v426);
                        }
                        else if ( FuncList__Check(139, *p_funcType, 0LL) )
                        {
                          BattleLogicFunction__FunctionSetBattleValue(v491, funcEnt, v427);
                        }
                        goto LABEL_125;
                      }
                      v351 = action->fields.actorId;
                      v352 = (int32_t)v430->fields.logic;
                      v425 = ((__int64 (__fastcall *)(BattleLogicFunction_o *, void *))v430->klass[1]._1.parent)(
                               v430,
                               v430->klass[1]._1.generic_class) <= 1;
                      v355 = v491;
                      v353 = !v425;
LABEL_183:
                      v356 = v351;
                      v357 = v352;
LABEL_186:
                      v332 = BattleLogicFunction__functionValueDamage(
                               v355,
                               v356,
                               v357,
                               dataVals_k__BackingField,
                               funcIdx,
                               v353,
                               action,
                               v354);
                      goto LABEL_170;
                    }
                    v385 = action->fields.actorId;
                    v386 = (int32_t)v430->fields.logic;
                    v387 = 11;
                  }
                }
                v332 = BattleLogicFunction__functionNPDamage(
                         v491,
                         v385,
                         v386,
                         dataVals_k__BackingField,
                         funcIdx,
                         v387,
                         action,
                         v384);
                goto LABEL_170;
              }
              v375 = funcEnt->fields.vals;
              if ( FuncList__Check(44, funcEnt->fields.funcType, 0LL) )
              {
                SameIndiualityBuffSum = BattleServantData__getSameIndiualityBuffSum(
                                          (BattleServantData_o *)v430,
                                          v375,
                                          1,
                                          0,
                                          0,
                                          0LL);
                goto LABEL_217;
              }
              if ( FuncList__Check(133, *p_funcType, 0LL) )
              {
                SameIndiualityBuffSum = GainNpIndividualSum__GetSameIndiualitySum(
                                          v491->fields.data,
                                          *p_actorId,
                                          (int32_t)v430->fields.logic,
                                          dataVals_k__BackingField,
                                          funcEnt,
                                          0LL);
LABEL_217:
                v377 = SameIndiualityBuffSum;
              }
              else
              {
                v377 = 0;
              }
              v378 = DataVals__GetValue(dataVals_k__BackingField, 0LL) * v377;
              if ( !DataVals__isUnaffected(dataVals_k__BackingField, 0LL) )
                v378 = BattleServantData__getCorrectedValueFuncGainNp((BattleServantData_o *)v430, v378, 0LL);
              isGainNp = BattleServantData__isGainNp((BattleServantData_o *)v430, 1, 0LL);
              if ( v378 < 1 || !isGainNp )
              {
                v290 = (int32_t)v430->fields.logic;
                goto LABEL_230;
              }
              v380 = (BattleLogicFunction_o *)BattleServantData__addNp((BattleServantData_o *)v430, v378, 0, 0LL);
              v381 = (int)v380;
              this = (BattleLogicFunction_o *)BattleLogicFunction__getFunctionObject(
                                                v380,
                                                funcEnt,
                                                (int32_t)v430->fields.logic,
                                                funcIdx,
                                                isCommandSideEffect,
                                                0LL,
                                                v382);
              if ( !this )
                goto LABEL_427;
              v383 = this;
              HIDWORD(this->fields.logic) = 3;
              BattleActionData_BuffData__setSaveNp((BattleActionData_BuffData_o *)this, v381, 0LL);
              if ( isCommandSideEffect )
                BYTE2(v383->fields.wkStr) = 1;
              v277 = action;
              v278 = (BattleActionData_BuffData_o *)v383;
              v279 = dataVals_k__BackingField;
LABEL_124:
              BattleActionData__setBuffData(v277, v278, v279, 0LL);
              goto LABEL_125;
            }
            applyTarget = funcEnt->fields.applyTarget;
            if ( applyTarget == 2 )
            {
              v332 = BattleLogicFunction__functionReplaceEnemyMember(
                       v491,
                       v325,
                       dataVals_k__BackingField,
                       funcIdx,
                       v327);
              goto LABEL_170;
            }
            if ( applyTarget == 1 )
            {
              v323 = v491;
              v324 = BattleLogicFunction__functionReplaceMember(
                       v491,
                       targetId_k__BackingField,
                       subTargetId,
                       v326,
                       (DataVals_o *)v327,
                       funcIdx,
                       v328);
              goto LABEL_159;
            }
          }
LABEL_125:
          v191 = isCommandSideEffect;
LABEL_110:
          v267 = &funcEnt->fields.funcType;
LABEL_359:
          this = (BattleLogicFunction_o *)FuncList__isDamage(*v267, 0LL);
          if ( ((unsigned __int8)this & 1) != 0 )
            v446 = 0;
          else
            v446 = -103;
          if ( v446 != -103 && !LOBYTE(v430[9].fields.logictarget) )
          {
            v447 = v430[8].fields.buffProgressTurnSelfList;
            if ( !v447 )
              goto LABEL_427;
            if ( !LOBYTE(v447[3].fields._syncRoot) )
            {
              this = (BattleLogicFunction_o *)v479;
              LOBYTE(v430[9].fields.logictarget) = 1;
              if ( !v479 )
                goto LABEL_427;
              System_Collections_Generic_List_int___Add(
                v479,
                (int32_t)v430->fields.logic,
                (const MethodInfo_308440C *)Method_System_Collections_Generic_List_int__Add__);
              this = (BattleLogicFunction_o *)v430[8].fields.buffProgressTurnSelfList;
              if ( !this )
                goto LABEL_427;
              v448 = BattleBuffData__UseProgressingDoNotAct(
                       (BattleBuffData_o *)this,
                       (BattleServantData_o *)v430,
                       0,
                       0LL);
              BattleActionData__addSideEffectActionData(action, v448, 1, 0LL);
              v447 = v430[8].fields.buffProgressTurnSelfList;
              if ( !v447 )
                goto LABEL_427;
            }
            LOBYTE(v447[3].fields._syncRoot) = 0;
          }
          BattleLogicFunction_ProcListInArgs__setFuncResult(
            args,
            targetId_k__BackingField,
            action->fields.funcResult,
            dataVals_k__BackingField->fields.funcIndex,
            0LL);
LABEL_371:
          v260 = v259->max_length;
        }
      }
      v186 = ServantData;
      if ( !isCreateSideEffect )
        break;
      v449 = v485;
      if ( !funcEnt )
        goto LABEL_427;
      v450 = FuncList__Check(26, *p_funcType, 0LL);
      v451 = (BattleLogicFunction_AfterAttackSideEffectMakeArgument_o *)sub_B5D694(BattleLogicFunction_AfterAttackSideEffectMakeArgument_TypeInfo);
      BattleLogicFunction_AfterAttackSideEffectMakeArgument___ctor(v451, 0LL);
      if ( !v451 )
        goto LABEL_427;
      Argument__Init = BattleLogicFunction_AfterAttackSideEffectMakeArgument__Init(v451, action, 0LL);
      BattleLogicFunction__setAttackSideEffect(v491, action, ServantData, v450 || isTreasureDvc, Argument__Init, v453);
      this = (BattleLogicFunction_o *)BattleActionData__getDamageTargetIdList(action, 0LL);
      if ( !this )
        goto LABEL_427;
      v217 = v480;
      v454 = this;
      if ( this->fields.logic )
      {
        if ( ServantData == 0LL || !isTreasureDvc )
        {
          v221 = 0LL;
        }
        else
        {
          v221 = (BattleCommandData_o *)sub_B5D694(BattleCommandData_TypeInfo);
          BattleCommandData___ctor(v221, 0LL);
          this = (BattleLogicFunction_o *)BattleServantData__getTreasureDvcCardId(ServantData, 0LL);
          if ( !v221 )
            goto LABEL_427;
          v221->fields._type = (int)this;
          v221->fields.treasureDvc = BattleServantData__getTreasureDvcId(ServantData, 1, 0LL);
        }
        v222 = (UnityEngine_Object_o *)v491->fields.logic;
        if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
        }
        this = (BattleLogicFunction_o *)UnityEngine_Object__op_Inequality(v222, 0LL, 0LL);
        if ( ((unsigned __int8)this & 1) != 0 && (v223 = v454->fields.logic, (int)v223 >= 1) )
        {
          v224 = 0LL;
          do
          {
            if ( v224 >= (unsigned int)v223 )
              goto LABEL_428;
            this = (BattleLogicFunction_o *)v491->fields.logic;
            if ( !this )
              goto LABEL_427;
            this = (BattleLogicFunction_o *)BattleLogic__setDamageSideEffect(
                                              (BattleLogic_o *)this,
                                              action,
                                              action->fields.actorId,
                                              *((_DWORD *)&v454->fields.logictarget + v224),
                                              v221,
                                              0LL);
            LODWORD(v223) = v454->fields.logic;
            ++v224;
          }
          while ( (__int64)v224 < (int)v223 );
          v191 = isCommandSideEffect;
          v186 = ServantData;
        }
        else
        {
          v191 = isCommandSideEffect;
        }
        v217 = v480;
      }
LABEL_381:
      v218 = v217->max_length;
      v220 = v449 + 1;
      if ( v220 >= v218 )
        goto LABEL_384;
    }
    v217 = v480;
LABEL_380:
    v449 = v485;
    goto LABEL_381;
  }
  *(_QWORD *)&v474[4] = 0LL;
LABEL_384:
  this = (BattleLogicFunction_o *)BattleLogicFunction_ProcListInArgs__get_CheckDuplicateFunc(args, 0LL);
  if ( !this )
    goto LABEL_427;
  ((void (__fastcall *)(BattleLogicFunction_o *, void *))this->klass[1]._1.namespaze)(
    this,
    this->klass[1]._1.byval_arg.data);
  if ( (v474[4] & 1) != 0 )
  {
    this = (BattleLogicFunction_o *)v491->fields.data;
    if ( !this )
      goto LABEL_427;
    this = (BattleLogicFunction_o *)BattleData__getServantData((BattleData_o *)this, *p_actorId, 0LL);
    if ( !this )
      goto LABEL_427;
    BattleServantData__resetAccumulationDamage((BattleServantData_o *)this, 0LL);
  }
  if ( BattleActionData__checkSummonServantList(action, 0LL) )
  {
    v455 = (UnityEngine_Object_o *)v491->fields.logic;
    if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    }
    if ( UnityEngine_Object__op_Inequality(v455, 0LL, 0LL) )
    {
      this = (BattleLogicFunction_o *)BattleActionData__getSummonServant(action, -1, 0LL);
      if ( !this )
        goto LABEL_427;
      v456 = (int)this->fields.logic;
      v457 = this;
      if ( v456 >= 1 )
      {
        v458 = 0;
        while ( v458 < v456 )
        {
          v459 = *((_QWORD *)&v457->fields.logictarget + (int)v458);
          if ( !v459 )
            goto LABEL_427;
          this = (BattleLogicFunction_o *)v491->fields.logic;
          if ( !this )
            goto LABEL_427;
          BattleLogic__actEnemyPassiveSkill((BattleLogic_o *)this, *(_DWORD *)(v459 + 28), 0LL);
          v456 = (int)v457->fields.logic;
          if ( (int)++v458 >= v456 )
            goto LABEL_401;
        }
        goto LABEL_428;
      }
    }
  }
LABEL_401:
  FuncSideEffectArg = BattleLogicFunction_ProcListInArgs__get_FuncSideEffectArg(args, 0LL);
  if ( FuncSideEffectArg )
    ((void (__fastcall *)(BattleLogicFunction_FuncSideEffectFunctionArgument_o *, BattleLogicFunction_o *, BattleActionData_o *, BattleServantData_o *, void *))FuncSideEffectArg->klass->vtable._7_SetSideEffect.method)(
      FuncSideEffectArg,
      v491,
      action,
      v186,
      FuncSideEffectArg->klass[1]._1.image);
  if ( isBuffUpdate )
  {
    v461 = (UnityEngine_Object_o *)v491->fields.logic;
    if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    }
    if ( UnityEngine_Object__op_Inequality(v461, 0LL, 0LL) )
    {
      this = (BattleLogicFunction_o *)v491->fields.logic;
      if ( !this )
        goto LABEL_427;
      BattleLogic__checkUsedBuff((BattleLogic_o *)this, 0LL);
      v462 = v491->fields.data;
      if ( !v462 )
        goto LABEL_427;
      this = (BattleLogicFunction_o *)v462->fields._FieldEnvData_k__BackingField;
      if ( !this )
        goto LABEL_427;
      BattleFieldEnvironmentData__CheckUsedBuff((BattleFieldEnvironmentData_o *)this, 0LL);
    }
  }
  if ( (v474[8] & 1) != 0 || args->fields.updateField )
  {
    v463 = (UnityEngine_Object_o *)v491->fields.logic;
    if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    }
    if ( UnityEngine_Object__op_Inequality(v463, 0LL, 0LL) )
    {
      this = (BattleLogicFunction_o *)v491->fields.logic;
      if ( !this )
        goto LABEL_427;
      BattleLogic__updateFieldBuff((BattleLogic_o *)this, 0LL);
    }
  }
  this = (BattleLogicFunction_o *)v479;
  if ( !v479 )
LABEL_427:
    sub_B5D69C(this, action);
  System_Collections_Generic_List_int___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v492,
    v479,
    (const MethodInfo_3085250 *)Method_System_Collections_Generic_List_int__GetEnumerator__);
  v493 = v492;
  while ( System_Collections_Generic_List_Enumerator_int___MoveNext(
            &v493,
            (const MethodInfo_201CA64 *)Method_System_Collections_Generic_List_Enumerator_int__MoveNext__) )
  {
    v464 = v491->fields.data;
    if ( !v464 )
      sub_B5D69C(0LL, v466);
    v465 = BattleData__getServantData(v464, v493.fields.current, 0LL);
    if ( v465 )
      v465->fields.isTDLimitCount = 0;
  }
  System_Collections_Generic_List_Enumerator_int___Dispose(
    &v493,
    (const MethodInfo_201CA60 *)Method_System_Collections_Generic_List_Enumerator_int__Dispose__);
  return action;
}


// local variable allocation has failed, the output may be wrong!
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
  int v11; // w1
  int v12; // w2
  __int64 v13; // x3
  int v14; // w1
  int v15; // w2
  __int64 v16; // x3
  int v17; // w1
  int v18; // w2
  __int64 v19; // x3
  int v20; // w1
  int v21; // w2
  __int64 v22; // x3
  int v23; // w1
  int v24; // w2
  __int64 v25; // x3
  int v26; // w1
  int v27; // w2
  __int64 v28; // x3
  int v29; // w1
  int v30; // w2
  __int64 v31; // x3
  int v32; // w1
  int v33; // w2
  __int64 v34; // x3
  BattleCommandData_o *v35; // x23
  BattleLogicFunction_AttackSideEffectFunctionArgument_o *v36; // x24
  System_Collections_Generic_IEnumerable_TSource__o *SideEffectList_k__BackingField; // x25
  BattleLogicFunction___c_c *v38; // x0
  struct BattleLogicFunction___c_StaticFields *static_fields; // x8
  System_Func_BattleLogicBuff_ReduceHpProcess_BuffInfo__int__o *_9__52_0; // x26
  Il2CppObject *v41; // x27
  struct BattleLogicFunction___c_StaticFields *v42; // x0
  System_String_array **v43; // x2
  System_String_array **v44; // x3
  System_Boolean_array **v45; // x4
  System_Int32_array **v46; // x5
  System_Int32_array *v47; // x6
  System_Int32_array *v48; // x7
  System_Collections_Generic_IEnumerable_TSource__o *v49; // x0
  __int64 v50; // x25
  BattleLogicFunction_SideEffectMakeArgument_o *v51; // x0
  const MethodInfo *v52; // x6
  const MethodInfo *v53; // x6
  __int64 v54; // x0

  v9 = mainAction;
  v10 = this;
  if ( (byte_42EAFE3 & 1) == 0 )
  {
    sub_B5D5C4(
      &BattleLogicFunction_AttackSideEffectFunctionArgument_TypeInfo,
      (_DWORD)mainAction,
      (_DWORD)actionSvtData,
      isTreasureDvc);
    sub_B5D5C4(&BattleCommandData_TypeInfo, v11, v12, v13);
    sub_B5D5C4(&Method_System_Linq_Enumerable_Select_BattleActionData_SideEffectData__int___, v14, v15, v16);
    sub_B5D5C4(&Method_System_Linq_Enumerable_ToArray_int___, v17, v18, v19);
    sub_B5D5C4(&Method_System_Func_BattleActionData_SideEffectData__int___ctor__, v20, v21, v22);
    sub_B5D5C4(&System_Func_BattleActionData_SideEffectData__int__TypeInfo, v23, v24, v25);
    sub_B5D5C4(&int___TypeInfo, v26, v27, v28);
    sub_B5D5C4(&Method_BattleLogicFunction___c__setAttackSideEffect_b__52_0__, v29, v30, v31);
    this = (BattleLogicFunction_o *)sub_B5D5C4(&BattleLogicFunction___c_TypeInfo, v32, v33, v34);
    byte_42EAFE3 = 1;
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
      v35 = (BattleCommandData_o *)sub_B5D694(BattleCommandData_TypeInfo);
      BattleCommandData___ctor(v35, 0LL);
      this = (BattleLogicFunction_o *)BattleServantData__getTreasureDvcCardId(actionSvtData, 0LL);
      if ( !v35 )
        goto LABEL_24;
      v35->fields._type = (int)this;
      v35->fields.treasureDvc = BattleServantData__getTreasureDvcId(actionSvtData, 1, 0LL);
    }
    else
    {
      v35 = 0LL;
    }
    v36 = (BattleLogicFunction_AttackSideEffectFunctionArgument_o *)sub_B5D694(BattleLogicFunction_AttackSideEffectFunctionArgument_TypeInfo);
    BattleLogicFunction_AttackSideEffectFunctionArgument___ctor(v36, 0LL);
    SideEffectList_k__BackingField = (System_Collections_Generic_IEnumerable_TSource__o *)attackArg->fields._SideEffectList_k__BackingField;
    v38 = BattleLogicFunction___c_TypeInfo;
    if ( (BYTE3(BattleLogicFunction___c_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !BattleLogicFunction___c_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(BattleLogicFunction___c_TypeInfo);
      v38 = BattleLogicFunction___c_TypeInfo;
    }
    static_fields = v38->static_fields;
    _9__52_0 = (System_Func_BattleLogicBuff_ReduceHpProcess_BuffInfo__int__o *)static_fields->__9__52_0;
    if ( !_9__52_0 )
    {
      if ( (BYTE3(v38->vtable._0_Equals.methodPtr) & 4) != 0 && !v38->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(v38);
        static_fields = BattleLogicFunction___c_TypeInfo->static_fields;
      }
      v41 = (Il2CppObject *)static_fields->__9;
      _9__52_0 = (System_Func_BattleLogicBuff_ReduceHpProcess_BuffInfo__int__o *)sub_B5D694(System_Func_BattleActionData_SideEffectData__int__TypeInfo);
      System_Func_BattleLogicBuff_ReduceHpProcess_BuffInfo__int____ctor(
        _9__52_0,
        v41,
        Method_BattleLogicFunction___c__setAttackSideEffect_b__52_0__,
        (const MethodInfo_2C2F87C *)Method_System_Func_BattleActionData_SideEffectData__int___ctor__);
      v42 = BattleLogicFunction___c_TypeInfo->static_fields;
      v42->__9__52_0 = (struct System_Func_BattleActionData_SideEffectData__int__o *)_9__52_0;
      sub_B5D560(
        (BattleServantConfConponent_o *)&v42->__9__52_0,
        (System_Int32_array **)_9__52_0,
        v43,
        v44,
        v45,
        v46,
        v47,
        v48);
    }
    v49 = (System_Collections_Generic_IEnumerable_TSource__o *)System_Linq_Enumerable__Select_BattleLogicBuff_ReduceHpProcess_BuffInfo__int_(
                                                                 SideEffectList_k__BackingField,
                                                                 (System_Func_TSource__TResult__o *)_9__52_0,
                                                                 (const MethodInfo_1CB2FF4 *)Method_System_Linq_Enumerable_Select_BattleActionData_SideEffectData__int___);
    this = (BattleLogicFunction_o *)System_Linq_Enumerable__ToArray_int_(
                                      v49,
                                      (const MethodInfo_1CB76BC *)Method_System_Linq_Enumerable_ToArray_int___);
    if ( v9 )
    {
      BattleActionData__SetFirstAtkMainTargetId(v9, (System_Int32_array *)this, 0LL);
      v50 = ((__int64 (__fastcall *)(BattleLogicFunction_SideEffectMakeArgument_o *, const char *))attackArg->klass[1]._1.gc_desc)(
              attackArg,
              attackArg->klass[1]._1.name);
      this = (BattleLogicFunction_o *)sub_B5D5DC(int___TypeInfo, 1LL);
      if ( this )
      {
        mainAction = (BattleActionData_o *)this;
        if ( !LODWORD(this->fields.logic) )
        {
          v54 = sub_B5D6C8(this);
          sub_B5D668(v54, 0LL);
        }
        LODWORD(this->fields.logictarget) = v9->fields._FirstAtkMainTargetId_k__BackingField;
        if ( v50 )
        {
          v51 = (BattleLogicFunction_SideEffectMakeArgument_o *)(*(__int64 (__fastcall **)(__int64, BattleLogicFunction_o *, _QWORD))(*(_QWORD *)v50 + 408LL))(
                                                                  v50,
                                                                  this,
                                                                  *(_QWORD *)(*(_QWORD *)v50 + 416LL));
          BattleLogicFunction__SetTargetAttackSideEffect(v10, v36, v9, actionSvtData, v35, v51, v52);
          BattleLogicFunction__SetTargetAttackSideEffect(v10, v36, v9, actionSvtData, v35, attackArg, v53);
          return;
        }
      }
    }
LABEL_24:
    sub_B5D69C(this, mainAction);
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
    sub_B5D69C(this, 0LL);
  DamageAttackSideEffectList = BattleActionData__getDamageAttackSideEffectList(mainAction, 0LL);
  this->fields._SideEffectList_k__BackingField = DamageAttackSideEffectList;
  sub_B5D560(
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
  int v2; // w2
  __int64 v3; // x3
  BattleLogicFunction_SideEffectMakeArgument_o *v4; // x19
  const MethodInfo *v5; // x1

  if ( (byte_42E7C69 & 1) == 0 )
  {
    sub_B5D5C4(&BattleLogicFunction_AfterMainAttackSideEffectMakeArgument_TypeInfo, (_DWORD)method, v2, v3);
    byte_42E7C69 = 1;
  }
  v4 = (BattleLogicFunction_SideEffectMakeArgument_o *)sub_B5D694(BattleLogicFunction_AfterMainAttackSideEffectMakeArgument_TypeInfo);
  BattleLogicFunction_SideEffectMakeArgument___ctor(v4, v5);
  return v4;
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
  sub_B5D560(
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
  int v2; // w2
  __int64 v3; // x3
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

  if ( (byte_42E7C6A & 1) == 0 )
  {
    sub_B5D5C4(&BattleLogicFunction_AttackSideEffectCheckDuplicateFunction_TypeInfo, (_DWORD)method, v2, v3);
    byte_42E7C6A = 1;
  }
  BattleLogicFunction_CommonSideEffectFunctionArgument___ctor(
    (BattleLogicFunction_CommonSideEffectFunctionArgument_o *)this,
    method);
  v5 = sub_B5D694(BattleLogicFunction_AttackSideEffectCheckDuplicateFunction_TypeInfo);
  BattleLogicFunction_CommonCheckDuplicateFunction___ctor((BattleLogicFunction_CommonCheckDuplicateFunction_o *)v5, v6);
  *(_QWORD *)(v5 + 24) = this;
  sub_B5D560((BattleServantConfConponent_o *)(v5 + 24), (System_Int32_array **)this, v7, v8, v9, v10, v11, v12);
  this->fields.checkDuplicate = (struct BattleLogicFunction_CheckDuplicateFunction_o *)v5;
  sub_B5D560(
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
  int v2; // w2
  __int64 v3; // x3
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v8; // x20
  System_String_array **v9; // x2
  System_String_array **v10; // x3
  System_Boolean_array **v11; // x4
  System_Int32_array **v12; // x5
  System_Int32_array *v13; // x6
  System_Int32_array *v14; // x7

  if ( (byte_42E7C6F & 1) == 0 )
  {
    sub_B5D5C4(
      &Method_System_Collections_Generic_List_BattleLogicFunction_ExecutedFunctionData___ctor__,
      (_DWORD)method,
      v2,
      v3);
    sub_B5D5C4(&System_Collections_Generic_List_BattleLogicFunction_ExecutedFunctionData__TypeInfo, v5, v6, v7);
    byte_42E7C6F = 1;
  }
  v8 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B5D694(System_Collections_Generic_List_BattleLogicFunction_ExecutedFunctionData__TypeInfo);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v8,
    (const MethodInfo_30562FC *)Method_System_Collections_Generic_List_BattleLogicFunction_ExecutedFunctionData___ctor__);
  this->fields.executedFuncList = (struct System_Collections_Generic_List_BattleLogicFunction_ExecutedFunctionData__o *)v8;
  sub_B5D560((BattleServantConfConponent_o *)&this->fields, (System_Int32_array **)v8, v9, v10, v11, v12, v13, v14);
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
  int v2; // w2
  __int64 v3; // x3
  BattleLogicFunction_CommonCheckDuplicateFunction_o *v4; // x19
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  struct System_Collections_Generic_List_BattleLogicFunction_ExecutedFunctionData__o *executedFuncList; // x22
  __int64 v9; // x20
  int size; // w8
  BattleLogicFunction_ExecutedFunctionData_o *v11; // x8

  v4 = this;
  if ( (byte_42E7C6B & 1) == 0 )
  {
    sub_B5D5C4(
      &Method_System_Collections_Generic_List_BattleLogicFunction_ExecutedFunctionData__get_Count__,
      (_DWORD)method,
      v2,
      v3);
    this = (BattleLogicFunction_CommonCheckDuplicateFunction_o *)sub_B5D5C4(
                                                                   &Method_System_Collections_Generic_List_BattleLogicFunction_ExecutedFunctionData__get_Item__,
                                                                   v5,
                                                                   v6,
                                                                   v7);
    byte_42E7C6B = 1;
  }
  executedFuncList = v4->fields.executedFuncList;
  if ( !executedFuncList )
LABEL_10:
    sub_B5D69C(this, method);
  v9 = 0LL;
  while ( 1 )
  {
    size = executedFuncList->fields._size;
    if ( (int)v9 >= size )
      break;
    if ( size <= (unsigned int)v9 )
      System_ThrowHelper__ThrowArgumentOutOfRangeException_42302284(0LL);
    v11 = executedFuncList->fields._items->m_Items[v9];
    if ( v11 )
    {
      v11->fields.isEnable = 1;
      executedFuncList = v4->fields.executedFuncList;
      ++v9;
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
    sub_B5D69C(this, 0LL);
  return DataVals__isCheckDuplicate(vals, 0LL);
}


bool __fastcall BattleLogicFunction_CommonCheckDuplicateFunction__isExecutedFunction(
        BattleLogicFunction_CommonCheckDuplicateFunction_o *this,
        DataVals_o *vals,
        const MethodInfo *method)
{
  __int64 v3; // x3
  int v6; // w1
  int v7; // w2
  __int64 v8; // x3
  int v9; // w1
  int v10; // w2
  __int64 v11; // x3
  int v12; // w1
  int v13; // w2
  __int64 v14; // x3
  int v15; // w1
  int v16; // w2
  __int64 v17; // x3
  __int64 v18; // x21
  __int64 v19; // x0
  __int64 v20; // x1
  System_String_array **v21; // x2
  System_String_array **v22; // x3
  System_Boolean_array **v23; // x4
  System_Int32_array **v24; // x5
  System_Int32_array *v25; // x6
  System_Int32_array *v26; // x7
  struct System_Collections_Generic_List_BattleLogicFunction_ExecutedFunctionData__o *executedFuncList; // x19
  System_Predicate_peRenderTexture_ChangeLayerObject__o *v28; // x20

  if ( (byte_42E7C6D & 1) == 0 )
  {
    sub_B5D5C4(
      &Method_System_Collections_Generic_List_BattleLogicFunction_ExecutedFunctionData__FindIndex__,
      (_DWORD)vals,
      (_DWORD)method,
      v3);
    sub_B5D5C4(&Method_System_Predicate_BattleLogicFunction_ExecutedFunctionData___ctor__, v6, v7, v8);
    sub_B5D5C4(&System_Predicate_BattleLogicFunction_ExecutedFunctionData__TypeInfo, v9, v10, v11);
    sub_B5D5C4(
      &Method_BattleLogicFunction_CommonCheckDuplicateFunction___c__DisplayClass7_0__isExecutedFunction_b__0__,
      v12,
      v13,
      v14);
    sub_B5D5C4(&BattleLogicFunction_CommonCheckDuplicateFunction___c__DisplayClass7_0_TypeInfo, v15, v16, v17);
    byte_42E7C6D = 1;
  }
  v18 = sub_B5D694(BattleLogicFunction_CommonCheckDuplicateFunction___c__DisplayClass7_0_TypeInfo);
  BattleLogicFunction_CommonCheckDuplicateFunction___c__DisplayClass7_0___ctor(
    (BattleLogicFunction_CommonCheckDuplicateFunction___c__DisplayClass7_0_o *)v18,
    0LL);
  if ( !v18
    || (*(_QWORD *)(v18 + 16) = vals,
        sub_B5D560(
          (BattleServantConfConponent_o *)(v18 + 16),
          (System_Int32_array **)vals,
          v21,
          v22,
          v23,
          v24,
          v25,
          v26),
        executedFuncList = this->fields.executedFuncList,
        v28 = (System_Predicate_peRenderTexture_ChangeLayerObject__o *)sub_B5D694(System_Predicate_BattleLogicFunction_ExecutedFunctionData__TypeInfo),
        System_Predicate_peRenderTexture_ChangeLayerObject____ctor(
          v28,
          (Il2CppObject *)v18,
          Method_BattleLogicFunction_CommonCheckDuplicateFunction___c__DisplayClass7_0__isExecutedFunction_b__0__,
          (const MethodInfo_2B9320C *)Method_System_Predicate_BattleLogicFunction_ExecutedFunctionData___ctor__),
        !executedFuncList) )
  {
    sub_B5D69C(v19, v20);
  }
  return System_Collections_Generic_List_SimpleAnimationPlayable_StateInfo___FindIndex(
           (System_Collections_Generic_List_SimpleAnimationPlayable_StateInfo__o *)executedFuncList,
           (System_Predicate_T__o *)v28,
           (const MethodInfo_3057A6C *)Method_System_Collections_Generic_List_BattleLogicFunction_ExecutedFunctionData__FindIndex__) >= 0;
}


bool __fastcall BattleLogicFunction_CommonCheckDuplicateFunction__isExecutedTarget(
        BattleLogicFunction_CommonCheckDuplicateFunction_o *this,
        DataVals_o *vals,
        int32_t targetId,
        const MethodInfo *method)
{
  int v7; // w1
  int v8; // w2
  __int64 v9; // x3
  int v10; // w1
  int v11; // w2
  __int64 v12; // x3
  int v13; // w1
  int v14; // w2
  __int64 v15; // x3
  int v16; // w1
  int v17; // w2
  __int64 v18; // x3
  __int64 v19; // x22
  __int64 v20; // x0
  __int64 v21; // x1
  System_String_array **v22; // x2
  System_String_array **v23; // x3
  System_Boolean_array **v24; // x4
  System_Int32_array **v25; // x5
  System_Int32_array *v26; // x6
  System_Int32_array *v27; // x7
  struct System_Collections_Generic_List_BattleLogicFunction_ExecutedFunctionData__o *executedFuncList; // x19
  System_Predicate_peRenderTexture_ChangeLayerObject__o *v29; // x20

  if ( (byte_42E7C6E & 1) == 0 )
  {
    sub_B5D5C4(
      &Method_System_Collections_Generic_List_BattleLogicFunction_ExecutedFunctionData__FindIndex__,
      (_DWORD)vals,
      targetId,
      method);
    sub_B5D5C4(&Method_System_Predicate_BattleLogicFunction_ExecutedFunctionData___ctor__, v7, v8, v9);
    sub_B5D5C4(&System_Predicate_BattleLogicFunction_ExecutedFunctionData__TypeInfo, v10, v11, v12);
    sub_B5D5C4(
      &Method_BattleLogicFunction_CommonCheckDuplicateFunction___c__DisplayClass8_0__isExecutedTarget_b__0__,
      v13,
      v14,
      v15);
    sub_B5D5C4(&BattleLogicFunction_CommonCheckDuplicateFunction___c__DisplayClass8_0_TypeInfo, v16, v17, v18);
    byte_42E7C6E = 1;
  }
  v19 = sub_B5D694(BattleLogicFunction_CommonCheckDuplicateFunction___c__DisplayClass8_0_TypeInfo);
  BattleLogicFunction_CommonCheckDuplicateFunction___c__DisplayClass8_0___ctor(
    (BattleLogicFunction_CommonCheckDuplicateFunction___c__DisplayClass8_0_o *)v19,
    0LL);
  if ( !v19
    || (*(_QWORD *)(v19 + 16) = vals,
        sub_B5D560(
          (BattleServantConfConponent_o *)(v19 + 16),
          (System_Int32_array **)vals,
          v22,
          v23,
          v24,
          v25,
          v26,
          v27),
        *(_DWORD *)(v19 + 24) = targetId,
        executedFuncList = this->fields.executedFuncList,
        v29 = (System_Predicate_peRenderTexture_ChangeLayerObject__o *)sub_B5D694(System_Predicate_BattleLogicFunction_ExecutedFunctionData__TypeInfo),
        System_Predicate_peRenderTexture_ChangeLayerObject____ctor(
          v29,
          (Il2CppObject *)v19,
          Method_BattleLogicFunction_CommonCheckDuplicateFunction___c__DisplayClass8_0__isExecutedTarget_b__0__,
          (const MethodInfo_2B9320C *)Method_System_Predicate_BattleLogicFunction_ExecutedFunctionData___ctor__),
        !executedFuncList) )
  {
    sub_B5D69C(v20, v21);
  }
  return System_Collections_Generic_List_SimpleAnimationPlayable_StateInfo___FindIndex(
           (System_Collections_Generic_List_SimpleAnimationPlayable_StateInfo__o *)executedFuncList,
           (System_Predicate_T__o *)v29,
           (const MethodInfo_3057A6C *)Method_System_Collections_Generic_List_BattleLogicFunction_ExecutedFunctionData__FindIndex__) >= 0;
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
    sub_B5D69C(this, 0LL);
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
  int v7; // w1
  int v8; // w2
  __int64 v9; // x3
  int v10; // w1
  int v11; // w2
  __int64 v12; // x3
  int v13; // w1
  int v14; // w2
  __int64 v15; // x3
  int v16; // w1
  int v17; // w2
  __int64 v18; // x3
  int v19; // w1
  int v20; // w2
  __int64 v21; // x3
  int v22; // w1
  int v23; // w2
  __int64 v24; // x3
  int v25; // w1
  int v26; // w2
  __int64 v27; // x3
  __int64 v28; // x21
  __int64 Index; // x0
  __int64 v30; // x1
  System_String_array **v31; // x2
  System_String_array **v32; // x3
  System_Boolean_array **v33; // x4
  System_Int32_array **v34; // x5
  System_Int32_array *v35; // x6
  System_Int32_array *v36; // x7
  unsigned __int64 v37; // x26
  __int64 v38; // x22
  System_String_array **v39; // x2
  System_String_array **v40; // x3
  System_Boolean_array **v41; // x4
  System_Int32_array **v42; // x5
  System_Int32_array *v43; // x6
  System_Int32_array *v44; // x7
  __int64 v45; // x23
  __int64 v46; // x0
  struct System_Collections_Generic_List_BattleLogicFunction_ExecutedFunctionData__o *executedFuncList; // x24
  System_Predicate_peRenderTexture_ChangeLayerObject__o *v48; // x25
  DataVals_o *v49; // x24
  struct System_Collections_Generic_List_BattleLogicFunction_ExecutedFunctionData__o *v50; // x23
  int32_t v51; // w25
  BattleLogicFunction_ExecutedFunctionData_o *v52; // x22
  const MethodInfo *v53; // x3
  __int64 v54; // x0

  if ( (byte_42E7C6C & 1) == 0 )
  {
    sub_B5D5C4(&BattleLogicFunction_ExecutedFunctionData_TypeInfo, (_DWORD)vals, (_DWORD)targetIds, method);
    sub_B5D5C4(&Method_System_Collections_Generic_List_BattleLogicFunction_ExecutedFunctionData__Add__, v7, v8, v9);
    sub_B5D5C4(
      &Method_System_Collections_Generic_List_BattleLogicFunction_ExecutedFunctionData__FindIndex__,
      v10,
      v11,
      v12);
    sub_B5D5C4(&Method_System_Predicate_BattleLogicFunction_ExecutedFunctionData___ctor__, v13, v14, v15);
    sub_B5D5C4(&System_Predicate_BattleLogicFunction_ExecutedFunctionData__TypeInfo, v16, v17, v18);
    sub_B5D5C4(&BattleLogicFunction_CommonCheckDuplicateFunction___c__DisplayClass5_0_TypeInfo, v19, v20, v21);
    sub_B5D5C4(
      &Method_BattleLogicFunction_CommonCheckDuplicateFunction___c__DisplayClass5_1__saveExecutedFunction_b__0__,
      v22,
      v23,
      v24);
    sub_B5D5C4(&BattleLogicFunction_CommonCheckDuplicateFunction___c__DisplayClass5_1_TypeInfo, v25, v26, v27);
    byte_42E7C6C = 1;
  }
  v28 = sub_B5D694(BattleLogicFunction_CommonCheckDuplicateFunction___c__DisplayClass5_0_TypeInfo);
  BattleLogicFunction_CommonCheckDuplicateFunction___c__DisplayClass5_0___ctor(
    (BattleLogicFunction_CommonCheckDuplicateFunction___c__DisplayClass5_0_o *)v28,
    0LL);
  if ( !v28 )
    goto LABEL_16;
  *(_QWORD *)(v28 + 16) = vals;
  sub_B5D560((BattleServantConfConponent_o *)(v28 + 16), (System_Int32_array **)vals, v31, v32, v33, v34, v35, v36);
  if ( !targetIds )
    goto LABEL_16;
  if ( (int)targetIds->max_length >= 1 )
  {
    v37 = 0LL;
    while ( 1 )
    {
      v38 = sub_B5D694(BattleLogicFunction_CommonCheckDuplicateFunction___c__DisplayClass5_1_TypeInfo);
      BattleLogicFunction_CommonCheckDuplicateFunction___c__DisplayClass5_1___ctor(
        (BattleLogicFunction_CommonCheckDuplicateFunction___c__DisplayClass5_1_o *)v38,
        0LL);
      if ( !v38 )
        break;
      *(_QWORD *)(v38 + 24) = v28;
      v45 = v38 + 24;
      sub_B5D560((BattleServantConfConponent_o *)(v38 + 24), (System_Int32_array **)v28, v39, v40, v41, v42, v43, v44);
      if ( v37 >= targetIds->max_length )
      {
        v54 = sub_B5D6C8(v46);
        sub_B5D668(v54, 0LL);
      }
      *(_DWORD *)(v38 + 16) = targetIds->m_Items[v37 + 1];
      executedFuncList = this->fields.executedFuncList;
      v48 = (System_Predicate_peRenderTexture_ChangeLayerObject__o *)sub_B5D694(System_Predicate_BattleLogicFunction_ExecutedFunctionData__TypeInfo);
      System_Predicate_peRenderTexture_ChangeLayerObject____ctor(
        v48,
        (Il2CppObject *)v38,
        Method_BattleLogicFunction_CommonCheckDuplicateFunction___c__DisplayClass5_1__saveExecutedFunction_b__0__,
        (const MethodInfo_2B9320C *)Method_System_Predicate_BattleLogicFunction_ExecutedFunctionData___ctor__);
      if ( !executedFuncList )
        break;
      Index = System_Collections_Generic_List_SimpleAnimationPlayable_StateInfo___FindIndex(
                (System_Collections_Generic_List_SimpleAnimationPlayable_StateInfo__o *)executedFuncList,
                (System_Predicate_T__o *)v48,
                (const MethodInfo_3057A6C *)Method_System_Collections_Generic_List_BattleLogicFunction_ExecutedFunctionData__FindIndex__);
      if ( (Index & 0x80000000) != 0 )
      {
        if ( !*(_QWORD *)v45 )
          break;
        v49 = *(DataVals_o **)(*(_QWORD *)v45 + 16LL);
        v50 = this->fields.executedFuncList;
        v51 = *(_DWORD *)(v38 + 16);
        v52 = (BattleLogicFunction_ExecutedFunctionData_o *)sub_B5D694(BattleLogicFunction_ExecutedFunctionData_TypeInfo);
        BattleLogicFunction_ExecutedFunctionData___ctor(v52, v49, v51, v53);
        if ( !v50 )
          break;
        System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
          (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)v50,
          (EventMissionProgressRequest_Argument_ProgressData_o *)v52,
          (const MethodInfo_3056FC0 *)Method_System_Collections_Generic_List_BattleLogicFunction_ExecutedFunctionData__Add__);
      }
      if ( (__int64)++v37 >= (int)targetIds->max_length )
        return;
    }
LABEL_16:
    sub_B5D69C(Index, v30);
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
    sub_B5D69C(this, n);
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
    sub_B5D69C(this, 0LL);
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
    sub_B5D69C(this, 0LL);
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
  sub_B5D560(
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
    sub_B5D69C(0LL, method);
  v4 = BattleLogicFunction_CommonSideEffectFunctionArgument__getCheckBuffFuncList(argument, method);
  this->fields.executedFuncList = v4;
  sub_B5D560((BattleServantConfConponent_o *)&this->fields, (System_Int32_array **)v4, v5, v6, v7, v8, v9, v10);
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
    sub_B5D69C(this, vals);
  if ( !targetIds->max_length )
  {
    v5 = sub_B5D6C8(this);
    sub_B5D668(v5, 0LL);
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
  int v2; // w2
  __int64 v3; // x3
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  System_Collections_Generic_Dictionary_int__WarBoardEvalValueSquare_EvalValueSquare__o *v8; // x20
  System_String_array **v9; // x2
  System_String_array **v10; // x3
  System_Boolean_array **v11; // x4
  System_Int32_array **v12; // x5
  System_Int32_array *v13; // x6
  System_Int32_array *v14; // x7
  const MethodInfo *v15; // x1

  if ( (byte_42E7C71 & 1) == 0 )
  {
    sub_B5D5C4(
      &Method_System_Collections_Generic_Dictionary_int__List_BattleLogicFunction_ExecutedFunctionData____ctor__,
      (_DWORD)method,
      v2,
      v3);
    sub_B5D5C4(
      &System_Collections_Generic_Dictionary_int__List_BattleLogicFunction_ExecutedFunctionData___TypeInfo,
      v5,
      v6,
      v7);
    byte_42E7C71 = 1;
  }
  this->fields.buffUniqueId = -1;
  v8 = (System_Collections_Generic_Dictionary_int__WarBoardEvalValueSquare_EvalValueSquare__o *)sub_B5D694(System_Collections_Generic_Dictionary_int__List_BattleLogicFunction_ExecutedFunctionData___TypeInfo);
  System_Collections_Generic_Dictionary_int__WarBoardEvalValueSquare_EvalValueSquare____ctor(
    v8,
    (const MethodInfo_2F31510 *)Method_System_Collections_Generic_Dictionary_int__List_BattleLogicFunction_ExecutedFunctionData____ctor__);
  this->fields.executedBuffFuncDic = (struct System_Collections_Generic_Dictionary_int__List_BattleLogicFunction_ExecutedFunctionData___o *)v8;
  sub_B5D560(
    (BattleServantConfConponent_o *)&this->fields.executedBuffFuncDic,
    (System_Int32_array **)v8,
    v9,
    v10,
    v11,
    v12,
    v13,
    v14);
  BattleLogicFunction_FunctionArgument___ctor((BattleLogicFunction_FunctionArgument_o *)this, v15);
}


System_Collections_Generic_List_BattleLogicFunction_ExecutedFunctionData__o *__fastcall BattleLogicFunction_CommonSideEffectFunctionArgument__getCheckBuffFuncList(
        BattleLogicFunction_CommonSideEffectFunctionArgument_o *this,
        const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  int v8; // w1
  int v9; // w2
  __int64 v10; // x3
  int v11; // w1
  int v12; // w2
  __int64 v13; // x3
  int v14; // w1
  int v15; // w2
  __int64 v16; // x3
  struct System_Collections_Generic_Dictionary_int__List_BattleLogicFunction_ExecutedFunctionData___o *executedBuffFuncDic; // x0
  struct System_Collections_Generic_Dictionary_int__List_BattleLogicFunction_ExecutedFunctionData___o *v18; // x20
  int32_t buffUniqueId; // w21
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v20; // x22

  if ( (byte_42E7C70 & 1) == 0 )
  {
    sub_B5D5C4(
      &Method_System_Collections_Generic_Dictionary_int__List_BattleLogicFunction_ExecutedFunctionData___ContainsKey__,
      (_DWORD)method,
      v2,
      v3);
    sub_B5D5C4(
      &Method_System_Collections_Generic_Dictionary_int__List_BattleLogicFunction_ExecutedFunctionData___get_Item__,
      v5,
      v6,
      v7);
    sub_B5D5C4(
      &Method_System_Collections_Generic_Dictionary_int__List_BattleLogicFunction_ExecutedFunctionData___set_Item__,
      v8,
      v9,
      v10);
    sub_B5D5C4(&Method_System_Collections_Generic_List_BattleLogicFunction_ExecutedFunctionData___ctor__, v11, v12, v13);
    sub_B5D5C4(&System_Collections_Generic_List_BattleLogicFunction_ExecutedFunctionData__TypeInfo, v14, v15, v16);
    byte_42E7C70 = 1;
  }
  executedBuffFuncDic = this->fields.executedBuffFuncDic;
  if ( !executedBuffFuncDic )
    goto LABEL_9;
  if ( !System_Collections_Generic_Dictionary_int__WarBoardAIRoute_RouteData___ContainsKey(
          (System_Collections_Generic_Dictionary_int__WarBoardAIRoute_RouteData__o *)executedBuffFuncDic,
          this->fields.buffUniqueId,
          (const MethodInfo_2F32338 *)Method_System_Collections_Generic_Dictionary_int__List_BattleLogicFunction_ExecutedFunctionData___ContainsKey__) )
  {
    v18 = this->fields.executedBuffFuncDic;
    buffUniqueId = this->fields.buffUniqueId;
    v20 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B5D694(System_Collections_Generic_List_BattleLogicFunction_ExecutedFunctionData__TypeInfo);
    System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
      v20,
      (const MethodInfo_30562FC *)Method_System_Collections_Generic_List_BattleLogicFunction_ExecutedFunctionData___ctor__);
    if ( !v18 )
      goto LABEL_9;
    System_Collections_Generic_Dictionary_int__WarBoardAIRoute_RouteData___set_Item(
      (System_Collections_Generic_Dictionary_int__WarBoardAIRoute_RouteData__o *)v18,
      buffUniqueId,
      (WarBoardAIRoute_RouteData_o *)v20,
      (const MethodInfo_2F3209C *)Method_System_Collections_Generic_Dictionary_int__List_BattleLogicFunction_ExecutedFunctionData___set_Item__);
  }
  executedBuffFuncDic = this->fields.executedBuffFuncDic;
  if ( !executedBuffFuncDic )
LABEL_9:
    sub_B5D69C(executedBuffFuncDic, method);
  return (System_Collections_Generic_List_BattleLogicFunction_ExecutedFunctionData__o *)System_Collections_Generic_Dictionary_int__WarBoardEvalValueSquare_EvalValueSquare___get_Item(
                                                                                          (System_Collections_Generic_Dictionary_int__WarBoardEvalValueSquare_EvalValueSquare__o *)executedBuffFuncDic,
                                                                                          this->fields.buffUniqueId,
                                                                                          (const MethodInfo_2F32000 *)Method_System_Collections_Generic_Dictionary_int__List_BattleLogicFunction_ExecutedFunctionData___get_Item__);
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
    sub_B5D69C(v7, v8);
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
    sub_B5D69C(this, 0LL);
  return this->fields.index == vals->fields.funcIndex
      && (targetId == -1 || this->fields.targetId == targetId)
      && (!isCheckEnable || this->fields.isEnable);
}


void __fastcall BattleLogicFunction_FuncSideEffectFunctionArgument___ctor(
        BattleLogicFunction_FuncSideEffectFunctionArgument_o *this,
        const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  int v8; // w1
  int v9; // w2
  __int64 v10; // x3
  System_Collections_Generic_HashSet_int__o *v11; // x20
  System_String_array **v12; // x2
  System_String_array **v13; // x3
  System_Boolean_array **v14; // x4
  System_Int32_array **v15; // x5
  System_Int32_array *v16; // x6
  System_Int32_array *v17; // x7
  const MethodInfo *v18; // x1
  __int64 v19; // x20
  const MethodInfo *v20; // x1
  System_String_array **v21; // x2
  System_String_array **v22; // x3
  System_Boolean_array **v23; // x4
  System_Int32_array **v24; // x5
  System_Int32_array *v25; // x6
  System_Int32_array *v26; // x7
  System_String_array **v27; // x2
  System_String_array **v28; // x3
  System_Boolean_array **v29; // x4
  System_Int32_array **v30; // x5
  System_Int32_array *v31; // x6
  System_Int32_array *v32; // x7

  if ( (byte_42E7C72 & 1) == 0 )
  {
    sub_B5D5C4(&BattleLogicFunction_CommonSideEffectCheckDuplicateFunction_TypeInfo, (_DWORD)method, v2, v3);
    sub_B5D5C4(&Method_System_Collections_Generic_HashSet_int___ctor___68716232, v5, v6, v7);
    sub_B5D5C4(&System_Collections_Generic_HashSet_int__TypeInfo, v8, v9, v10);
    byte_42E7C72 = 1;
  }
  v11 = (System_Collections_Generic_HashSet_int__o *)sub_B5D694(System_Collections_Generic_HashSet_int__TypeInfo);
  System_Collections_Generic_HashSet_int____ctor(
    v11,
    (const MethodInfo_24FF478 *)Method_System_Collections_Generic_HashSet_int___ctor___68716232);
  this->fields.hashTargetId = v11;
  sub_B5D560(
    (BattleServantConfConponent_o *)&this->fields.hashTargetId,
    (System_Int32_array **)v11,
    v12,
    v13,
    v14,
    v15,
    v16,
    v17);
  BattleLogicFunction_CommonSideEffectFunctionArgument___ctor(
    (BattleLogicFunction_CommonSideEffectFunctionArgument_o *)this,
    v18);
  v19 = sub_B5D694(BattleLogicFunction_CommonSideEffectCheckDuplicateFunction_TypeInfo);
  BattleLogicFunction_CommonCheckDuplicateFunction___ctor(
    (BattleLogicFunction_CommonCheckDuplicateFunction_o *)v19,
    v20);
  *(_QWORD *)(v19 + 24) = this;
  sub_B5D560((BattleServantConfConponent_o *)(v19 + 24), (System_Int32_array **)this, v21, v22, v23, v24, v25, v26);
  this->fields.checkDuplicate = (struct BattleLogicFunction_CheckDuplicateFunction_o *)v19;
  sub_B5D560(
    (BattleServantConfConponent_o *)&this->fields.checkDuplicate,
    (System_Int32_array **)v19,
    v27,
    v28,
    v29,
    v30,
    v31,
    v32);
}


void __fastcall BattleLogicFunction_FuncSideEffectFunctionArgument__AddTarget(
        BattleLogicFunction_FuncSideEffectFunctionArgument_o *this,
        BattleLogicFunctionProcess_FunctionTargetCheck_o *funcTarget,
        const MethodInfo *method)
{
  __int64 v3; // x3
  BattleLogicFunction_FuncSideEffectFunctionArgument_o *v5; // x20
  struct BattleLogicFunctionProcess_FunctionUnitCheck_o *funcUnit_k__BackingField; // x8
  struct DataVals_o *dataVals_k__BackingField; // x8

  v5 = this;
  if ( (byte_42E7C74 & 1) == 0 )
  {
    this = (BattleLogicFunction_FuncSideEffectFunctionArgument_o *)sub_B5D5C4(
                                                                     &Method_System_Collections_Generic_HashSet_int__Add__,
                                                                     (_DWORD)funcTarget,
                                                                     (_DWORD)method,
                                                                     v3);
    byte_42E7C74 = 1;
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
    this = (BattleLogicFunction_FuncSideEffectFunctionArgument_o *)v5->fields.hashTargetId;
    if ( this )
    {
      System_Collections_Generic_HashSet_int___Add(
        (System_Collections_Generic_HashSet_int__o *)this,
        funcTarget->fields._targetId_k__BackingField,
        (const MethodInfo_2500654 *)Method_System_Collections_Generic_HashSet_int__Add__);
      return;
    }
LABEL_12:
    sub_B5D69C(this, funcTarget);
  }
}


void __fastcall BattleLogicFunction_FuncSideEffectFunctionArgument__AddTarget_23755264(
        BattleLogicFunction_FuncSideEffectFunctionArgument_o *this,
        BattleLogicFunction_FuncSideEffectFunctionArgument_o *arg,
        const MethodInfo *method)
{
  __int64 v3; // x3
  System_Collections_Generic_HashSet_int__o *hashTargetId; // x0

  if ( (byte_42E7C75 & 1) == 0 )
  {
    sub_B5D5C4(&Method_System_Collections_Generic_HashSet_int__UnionWith__, (_DWORD)arg, (_DWORD)method, v3);
    byte_42E7C75 = 1;
  }
  if ( arg )
  {
    hashTargetId = this->fields.hashTargetId;
    if ( !hashTargetId )
      sub_B5D69C(0LL, arg);
    System_Collections_Generic_HashSet_int___UnionWith(
      hashTargetId,
      (System_Collections_Generic_IEnumerable_T__o *)arg->fields.hashTargetId,
      (const MethodInfo_2500678 *)Method_System_Collections_Generic_HashSet_int__UnionWith__);
  }
}


BuffList_ACTION_array *__fastcall BattleLogicFunction_FuncSideEffectFunctionArgument__GetActArray(
        BattleLogicFunction_FuncSideEffectFunctionArgument_o *this,
        bool isMainOnly,
        const MethodInfo *method)
{
  __int64 v3; // x3
  _QWORD **v4; // x20
  __int64 v5; // x19
  __int16 v6; // w8
  __int64 v7; // x19
  __int64 v8; // x19
  __int64 v9; // x19

  if ( (byte_42E7C73 & 1) == 0 )
  {
    sub_B5D5C4(&Method_System_Array_Empty_BuffList_ACTION___, isMainOnly, (_DWORD)method, v3);
    byte_42E7C73 = 1;
  }
  v4 = (_QWORD **)Method_System_Array_Empty_BuffList_ACTION___;
  v5 = **((_QWORD **)Method_System_Array_Empty_BuffList_ACTION___ + 6);
  v6 = *(_WORD *)(v5 + 306);
  if ( (v6 & 1) == 0 )
  {
    sub_AF52C4(**((_QWORD **)Method_System_Array_Empty_BuffList_ACTION___ + 6));
    v6 = *(_WORD *)(v5 + 306);
  }
  if ( (v6 & 0x400) != 0 )
  {
    v7 = *v4[6];
    if ( (*(_BYTE *)(v7 + 306) & 1) == 0 )
      sub_AF52C4(*v4[6]);
    if ( !*(_DWORD *)(v7 + 224) )
    {
      v8 = *v4[6];
      if ( (*(_BYTE *)(v8 + 306) & 1) == 0 )
        sub_AF52C4(*v4[6]);
      j_il2cpp_runtime_class_init_0(v8);
    }
  }
  v9 = *v4[6];
  if ( (*(_BYTE *)(v9 + 306) & 1) == 0 )
    sub_AF52C4(*v4[6]);
  return **(BuffList_ACTION_array ***)(v9 + 184);
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

  if ( (byte_42E7C76 & 1) == 0 )
  {
    sub_B5D5C4(&Method_System_Linq_Enumerable_ToArray_int___, (_DWORD)logicFunc, (_DWORD)mainActionData, actorSvtData);
    byte_42E7C76 = 1;
  }
  v9 = System_Linq_Enumerable__ToArray_int_(
         (System_Collections_Generic_IEnumerable_TSource__o *)this->fields.hashTargetId,
         (const MethodInfo_1CB76BC *)Method_System_Linq_Enumerable_ToArray_int___);
  if ( !logicFunc )
    sub_B5D69C(v9, v10);
  BattleLogicFunction__SetFuncSideEffect(logicFunc, this, mainActionData, actorSvtData, v9, 0LL);
}


void __fastcall BattleLogicFunction_FunctionArgument___ctor(
        BattleLogicFunction_FunctionArgument_o *this,
        const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  Il2CppObject *v5; // x20
  System_String_array **v6; // x2
  System_String_array **v7; // x3
  System_Boolean_array **v8; // x4
  System_Int32_array **v9; // x5
  System_Int32_array *v10; // x6
  System_Int32_array *v11; // x7

  if ( (byte_42E7C77 & 1) == 0 )
  {
    sub_B5D5C4(&BattleLogicFunction_CheckDuplicateFunction_TypeInfo, (_DWORD)method, v2, v3);
    byte_42E7C77 = 1;
  }
  v5 = (Il2CppObject *)sub_B5D694(BattleLogicFunction_CheckDuplicateFunction_TypeInfo);
  System_Object___ctor(v5, 0LL);
  this->fields.checkDuplicate = (struct BattleLogicFunction_CheckDuplicateFunction_o *)v5;
  sub_B5D560(
    (BattleServantConfConponent_o *)&this->fields.checkDuplicate,
    (System_Int32_array **)v5,
    v6,
    v7,
    v8,
    v9,
    v10,
    v11);
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
    sub_B5D69C(0LL, method);
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
  sub_B5D560(
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
  sub_B5D560(
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
  int v2; // w2
  __int64 v3; // x3
  BattleLogicFunction_SideEffectMakeArgument_o *v4; // x19
  const MethodInfo *v5; // x1

  if ( (byte_42E7C78 & 1) == 0 )
  {
    sub_B5D5C4(&BattleLogicFunction_PreMainAttackSideEffectMakeArgument_TypeInfo, (_DWORD)method, v2, v3);
    byte_42E7C78 = 1;
  }
  v4 = (BattleLogicFunction_SideEffectMakeArgument_o *)sub_B5D694(BattleLogicFunction_PreMainAttackSideEffectMakeArgument_TypeInfo);
  BattleLogicFunction_SideEffectMakeArgument___ctor(v4, v5);
  return v4;
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
  __int64 v3; // x3
  BattleLogicFunction_FunctionArgument_o *v4; // x20
  int v6; // w1
  int v7; // w2
  __int64 v8; // x3
  int v9; // w1
  int v10; // w2
  __int64 v11; // x3
  System_Collections_Generic_Dictionary_KeyValuePair_int__int___bool__o *v12; // x21
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
  const MethodInfo *v25; // x1
  struct BattleLogicFunction_FunctionArgument_o **p_externalArg; // x19
  __int64 v27; // x1

  v4 = argument;
  if ( (byte_42E7C7A & 1) == 0 )
  {
    sub_B5D5C4(
      &Method_System_Collections_Generic_Dictionary_KeyValuePair_int__int___bool___ctor__,
      (_DWORD)argument,
      (_DWORD)method,
      v3);
    sub_B5D5C4(&System_Collections_Generic_Dictionary_KeyValuePair_int__int___bool__TypeInfo, v6, v7, v8);
    sub_B5D5C4(&BattleLogicFunction_FunctionArgument_TypeInfo, v9, v10, v11);
    byte_42E7C7A = 1;
  }
  v12 = (System_Collections_Generic_Dictionary_KeyValuePair_int__int___bool__o *)sub_B5D694(System_Collections_Generic_Dictionary_KeyValuePair_int__int___bool__TypeInfo);
  System_Collections_Generic_Dictionary_KeyValuePair_int__int___bool____ctor(
    v12,
    (const MethodInfo_23FD08C *)Method_System_Collections_Generic_Dictionary_KeyValuePair_int__int___bool___ctor__);
  this->fields.funcResults = v12;
  sub_B5D560((BattleServantConfConponent_o *)&this->fields, (System_Int32_array **)v12, v13, v14, v15, v16, v17, v18);
  this->fields.tdCommandTypeChange = -1;
  System_Object___ctor((Il2CppObject *)this, 0LL);
  if ( !v4 )
  {
    v4 = (BattleLogicFunction_FunctionArgument_o *)sub_B5D694(BattleLogicFunction_FunctionArgument_TypeInfo);
    BattleLogicFunction_FunctionArgument___ctor(v4, v25);
  }
  this->fields.externalArg = v4;
  p_externalArg = &this->fields.externalArg;
  sub_B5D560((BattleServantConfConponent_o *)p_externalArg, (System_Int32_array **)v4, v19, v20, v21, v22, v23, v24);
  if ( !*p_externalArg )
    sub_B5D69C(0LL, v27);
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
  int v9; // w1
  int v10; // w2
  __int64 v11; // x3
  int v12; // w1
  int v13; // w2
  __int64 v14; // x3
  int v15; // w1
  int v16; // w2
  __int64 v17; // x3
  int v18; // w1
  int v19; // w2
  __int64 v20; // x3
  int v21; // w1
  int v22; // w2
  __int64 v23; // x3
  int v24; // w1
  int v25; // w2
  __int64 v26; // x3
  int v27; // w1
  int v28; // w2
  __int64 v29; // x3
  int v30; // w1
  int v31; // w2
  __int64 v32; // x3
  int v33; // w1
  int v34; // w2
  __int64 v35; // x3
  int v36; // w1
  int v37; // w2
  __int64 v38; // x3
  int v39; // w1
  int v40; // w2
  __int64 v41; // x3
  int v42; // w1
  int v43; // w2
  __int64 v44; // x3
  int v45; // w1
  int v46; // w2
  __int64 v47; // x3
  int v48; // w1
  int v49; // w2
  __int64 v50; // x3
  int v51; // w1
  int v52; // w2
  __int64 v53; // x3
  int v54; // w1
  int v55; // w2
  __int64 v56; // x3
  int v57; // w1
  int v58; // w2
  __int64 v59; // x3
  int v60; // w1
  int v61; // w2
  __int64 v62; // x3
  BattleLogicFunction_ProcListInArgs___c__DisplayClass31_0_o *v63; // x20
  System_Collections_Generic_Dictionary_KeyValuePair_int__int___bool__o *TriggeredFuncIndex; // x0
  __int64 v65; // x1
  int v66; // w23
  int v67; // w8
  _BOOL4 v68; // w24
  struct System_Collections_Generic_Dictionary_KeyValuePair_int__int___bool__o *funcResults; // x21
  System_Func_KeyValuePair_KeyValuePair_int__int___bool___bool__o *v70; // x0
  System_Func_TSource__bool__o *v71; // x22
  System_Collections_Generic_IEnumerable_TSource__o *v72; // x21
  __int64 v73; // x3
  System_Collections_Generic_IEnumerable_TSource__c *klass; // x8
  unsigned __int64 v75; // x10
  int32_t *p_offset; // x11
  __int64 p_method; // x0
  System_Collections_Generic_IEnumerable_TSource__o *v78; // x19
  System_Func_KeyValuePair_KeyValuePair_int__int___bool___bool__o *v79; // x21
  __int64 v80; // x1
  __int64 v81; // x3
  __int64 v82; // x21
  __int64 v83; // x8
  unsigned __int64 v84; // x10
  int *v85; // x11
  __int64 v86; // x0
  __int64 v87; // x8
  unsigned __int64 v88; // x10
  int *v89; // x11
  __int64 v90; // x0
  __int64 v91; // x0
  __int64 v92; // x1
  char v93; // w22
  BattleServantData_o *ServantData; // x0
  int v95; // w8
  __int64 v96; // x8
  unsigned __int64 v97; // x10
  int *v98; // x11
  __int64 v99; // x0
  int v101; // [xsp+0h] [xbp-50h]
  bool value; // [xsp+Ch] [xbp-44h] BYREF
  System_Collections_Generic_KeyValuePair_int__int__o key; // [xsp+10h] [xbp-40h] BYREF
  bool isAllCond; // [xsp+18h] [xbp-38h] BYREF
  bool isSameTargetOnly; // [xsp+1Ch] [xbp-34h] BYREF
  System_Collections_Generic_KeyValuePair_int__int__o p_key; // 0:x0.8
  System_Collections_Generic_KeyValuePair_int__int__o v107; // 0:x1.8

  if ( (byte_42E7C7C & 1) == 0 )
  {
    sub_B5D5C4(
      &Method_System_Collections_Generic_Dictionary_KeyValuePair_int__int___bool__TryGetValue__,
      targetId,
      (_DWORD)baseVals,
      data);
    sub_B5D5C4(&Method_System_Linq_Enumerable_Any_KeyValuePair_KeyValuePair_int__int___bool____, v9, v10, v11);
    sub_B5D5C4(&Method_System_Linq_Enumerable_Count_KeyValuePair_KeyValuePair_int__int___bool____, v12, v13, v14);
    sub_B5D5C4(&Method_System_Linq_Enumerable_Where_KeyValuePair_KeyValuePair_int__int___bool____, v15, v16, v17);
    sub_B5D5C4(&Method_System_Func_KeyValuePair_KeyValuePair_int__int___bool___bool___ctor__, v18, v19, v20);
    sub_B5D5C4(&System_Func_KeyValuePair_KeyValuePair_int__int___bool___bool__TypeInfo, v21, v22, v23);
    sub_B5D5C4(&System_IDisposable_TypeInfo, v24, v25, v26);
    sub_B5D5C4(
      &System_Collections_Generic_IEnumerable_KeyValuePair_KeyValuePair_int__int___bool___TypeInfo,
      v27,
      v28,
      v29);
    sub_B5D5C4(
      &System_Collections_Generic_IEnumerator_KeyValuePair_KeyValuePair_int__int___bool___TypeInfo,
      v30,
      v31,
      v32);
    sub_B5D5C4(&System_Collections_IEnumerator_TypeInfo, v33, v34, v35);
    sub_B5D5C4(&Method_System_Collections_Generic_KeyValuePair_int__int___ctor__, v36, v37, v38);
    sub_B5D5C4(&Method_System_Collections_Generic_KeyValuePair_KeyValuePair_int__int___bool__get_Key__, v39, v40, v41);
    sub_B5D5C4(&Method_System_Collections_Generic_KeyValuePair_int__int__get_Value__, v42, v43, v44);
    sub_B5D5C4(&Method_System_Collections_Generic_KeyValuePair_KeyValuePair_int__int___bool__get_Value__, v45, v46, v47);
    sub_B5D5C4(&System_Math_TypeInfo, v48, v49, v50);
    sub_B5D5C4(
      &Method_BattleLogicFunction_ProcListInArgs___c__DisplayClass31_0__DidTriggeredFuncHaveSpecifyResults_b__0__,
      v51,
      v52,
      v53);
    sub_B5D5C4(
      &Method_BattleLogicFunction_ProcListInArgs___c__DisplayClass31_0__DidTriggeredFuncHaveSpecifyResults_b__1__,
      v54,
      v55,
      v56);
    sub_B5D5C4(
      &Method_BattleLogicFunction_ProcListInArgs___c__DisplayClass31_0__DidTriggeredFuncHaveSpecifyResults_b__2__,
      v57,
      v58,
      v59);
    sub_B5D5C4(&BattleLogicFunction_ProcListInArgs___c__DisplayClass31_0_TypeInfo, v60, v61, v62);
    byte_42E7C7C = 1;
  }
  isSameTargetOnly = 0;
  isAllCond = 0;
  key = 0LL;
  value = 0;
  v63 = (BattleLogicFunction_ProcListInArgs___c__DisplayClass31_0_o *)sub_B5D694(BattleLogicFunction_ProcListInArgs___c__DisplayClass31_0_TypeInfo);
  BattleLogicFunction_ProcListInArgs___c__DisplayClass31_0___ctor(v63, 0LL);
  if ( !baseVals )
    goto LABEL_57;
  TriggeredFuncIndex = (System_Collections_Generic_Dictionary_KeyValuePair_int__int___bool__o *)DataVals__GetTriggeredFuncIndex(
                                                                                                  baseVals,
                                                                                                  &isSameTargetOnly,
                                                                                                  &isAllCond,
                                                                                                  0LL);
  if ( !v63 )
    goto LABEL_57;
  v66 = (int)TriggeredFuncIndex;
  v63->fields.funcIndex = (int)TriggeredFuncIndex;
  if ( !(_DWORD)TriggeredFuncIndex )
  {
LABEL_55:
    LOBYTE(TriggeredFuncIndex) = 1;
    return (unsigned __int8)TriggeredFuncIndex & 1;
  }
  v63->fields.isTrue = (int)TriggeredFuncIndex > 0;
  if ( (BYTE3(System_Math_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !System_Math_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(System_Math_TypeInfo);
  if ( v66 >= 0 )
    v67 = v66;
  else
    v67 = -v66;
  v63->fields.funcIndex = v67 - 1;
  if ( isSameTargetOnly )
  {
    p_key = (System_Collections_Generic_KeyValuePair_int__int__o)&key;
    System_Collections_Generic_KeyValuePair_int__int____ctor(
      p_key,
      v67 - 1,
      targetId,
      (const MethodInfo_237C760 *)Method_System_Collections_Generic_KeyValuePair_int__int___ctor__);
    TriggeredFuncIndex = this->fields.funcResults;
    if ( TriggeredFuncIndex )
    {
      v107 = key;
      LOBYTE(TriggeredFuncIndex) = System_Collections_Generic_Dictionary_KeyValuePair_int__int___bool___TryGetValue(
                                     TriggeredFuncIndex,
                                     v107,
                                     &value,
                                     (const MethodInfo_23FF914 *)Method_System_Collections_Generic_Dictionary_KeyValuePair_int__int___bool__TryGetValue__)
                                && value == v63->fields.isTrue;
      return (unsigned __int8)TriggeredFuncIndex & 1;
    }
LABEL_57:
    sub_B5D69C(TriggeredFuncIndex, v65);
  }
  v68 = isAllCond;
  funcResults = this->fields.funcResults;
  v70 = (System_Func_KeyValuePair_KeyValuePair_int__int___bool___bool__o *)sub_B5D694(System_Func_KeyValuePair_KeyValuePair_int__int___bool___bool__TypeInfo);
  v71 = (System_Func_TSource__bool__o *)v70;
  if ( !v68 )
  {
    System_Func_KeyValuePair_KeyValuePair_int__int___bool___bool____ctor(
      v70,
      (Il2CppObject *)v63,
      Method_BattleLogicFunction_ProcListInArgs___c__DisplayClass31_0__DidTriggeredFuncHaveSpecifyResults_b__0__,
      (const MethodInfo_2792018 *)Method_System_Func_KeyValuePair_KeyValuePair_int__int___bool___bool___ctor__);
    v78 = System_Linq_Enumerable__Where_KeyValuePair_KeyValuePair_int__int___bool__(
            (System_Collections_Generic_IEnumerable_TSource__o *)funcResults,
            v71,
            (const MethodInfo_1CBAD04 *)Method_System_Linq_Enumerable_Where_KeyValuePair_KeyValuePair_int__int___bool____);
    v79 = (System_Func_KeyValuePair_KeyValuePair_int__int___bool___bool__o *)sub_B5D694(System_Func_KeyValuePair_KeyValuePair_int__int___bool___bool__TypeInfo);
    System_Func_KeyValuePair_KeyValuePair_int__int___bool___bool____ctor(
      v79,
      (Il2CppObject *)v63,
      Method_BattleLogicFunction_ProcListInArgs___c__DisplayClass31_0__DidTriggeredFuncHaveSpecifyResults_b__1__,
      (const MethodInfo_2792018 *)Method_System_Func_KeyValuePair_KeyValuePair_int__int___bool___bool___ctor__);
    LOBYTE(TriggeredFuncIndex) = System_Linq_Enumerable__Any_KeyValuePair_KeyValuePair_int__int___bool__(
                                   v78,
                                   (System_Func_TSource__bool__o *)v79,
                                   (const MethodInfo_1C98E88 *)Method_System_Linq_Enumerable_Any_KeyValuePair_KeyValuePair_int__int___bool____);
    return (unsigned __int8)TriggeredFuncIndex & 1;
  }
  System_Func_KeyValuePair_KeyValuePair_int__int___bool___bool____ctor(
    v70,
    (Il2CppObject *)v63,
    Method_BattleLogicFunction_ProcListInArgs___c__DisplayClass31_0__DidTriggeredFuncHaveSpecifyResults_b__2__,
    (const MethodInfo_2792018 *)Method_System_Func_KeyValuePair_KeyValuePair_int__int___bool___bool___ctor__);
  v72 = System_Linq_Enumerable__Where_KeyValuePair_KeyValuePair_int__int___bool__(
          (System_Collections_Generic_IEnumerable_TSource__o *)funcResults,
          v71,
          (const MethodInfo_1CBAD04 *)Method_System_Linq_Enumerable_Where_KeyValuePair_KeyValuePair_int__int___bool____);
  TriggeredFuncIndex = (System_Collections_Generic_Dictionary_KeyValuePair_int__int___bool__o *)System_Linq_Enumerable__Count_KeyValuePair_KeyValuePair_int__int___bool__(
                                                                                                  v72,
                                                                                                  (const MethodInfo_1CA6D84 *)Method_System_Linq_Enumerable_Count_KeyValuePair_KeyValuePair_int__int___bool____);
  if ( (_DWORD)TriggeredFuncIndex )
  {
    if ( !v72 )
      goto LABEL_57;
    klass = v72->klass;
    if ( *(_WORD *)&v72->klass->_2.bitflags1 )
    {
      v75 = 0LL;
      p_offset = &klass->_1.interfaceOffsets->offset;
      while ( *((System_Collections_Generic_IEnumerable_KeyValuePair_KeyValuePair_int__int___bool___c **)p_offset - 1) != System_Collections_Generic_IEnumerable_KeyValuePair_KeyValuePair_int__int___bool___TypeInfo )
      {
        ++v75;
        p_offset += 4;
        if ( v75 >= *(unsigned __int16 *)&v72->klass->_2.bitflags1 )
          goto LABEL_23;
      }
      p_method = (__int64)&klass->vtable[*p_offset].method;
    }
    else
    {
LABEL_23:
      p_method = sub_AF54C0(
                   v72,
                   System_Collections_Generic_IEnumerable_KeyValuePair_KeyValuePair_int__int___bool___TypeInfo,
                   0LL,
                   v73);
    }
    v82 = (*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerable_TSource__o *, _QWORD))p_method)(
            v72,
            *(_QWORD *)(p_method + 8));
    if ( !v82 )
      sub_B5D69C(0LL, v80);
    while ( 1 )
    {
      v83 = *(_QWORD *)v82;
      if ( *(_WORD *)(*(_QWORD *)v82 + 298LL) )
      {
        v84 = 0LL;
        v85 = (int *)(*(_QWORD *)(v83 + 176) + 8LL);
        while ( *((System_Collections_IEnumerator_c **)v85 - 1) != System_Collections_IEnumerator_TypeInfo )
        {
          ++v84;
          v85 += 4;
          if ( v84 >= *(unsigned __int16 *)(*(_QWORD *)v82 + 298LL) )
            goto LABEL_32;
        }
        v86 = v83 + 16LL * *v85 + 312;
      }
      else
      {
LABEL_32:
        v86 = sub_AF54C0(v82, System_Collections_IEnumerator_TypeInfo, 0LL, v81);
      }
      if ( ((*(__int64 (__fastcall **)(__int64, _QWORD))v86)(v82, *(_QWORD *)(v86 + 8)) & 1) == 0 )
        break;
      v87 = *(_QWORD *)v82;
      if ( *(_WORD *)(*(_QWORD *)v82 + 298LL) )
      {
        v88 = 0LL;
        v89 = (int *)(*(_QWORD *)(v87 + 176) + 8LL);
        while ( *((System_Collections_Generic_IEnumerator_KeyValuePair_KeyValuePair_int__int___bool___c **)v89 - 1) != System_Collections_Generic_IEnumerator_KeyValuePair_KeyValuePair_int__int___bool___TypeInfo )
        {
          ++v88;
          v89 += 4;
          if ( v88 >= *(unsigned __int16 *)(*(_QWORD *)v82 + 298LL) )
            goto LABEL_39;
        }
        v90 = v87 + 16LL * *v89 + 312;
      }
      else
      {
LABEL_39:
        v90 = sub_AF54C0(
                v82,
                System_Collections_Generic_IEnumerator_KeyValuePair_KeyValuePair_int__int___bool___TypeInfo,
                0LL,
                v81);
      }
      v91 = (*(__int64 (__fastcall **)(__int64, _QWORD))v90)(v82, *(_QWORD *)(v90 + 8));
      if ( !data )
        sub_B5D69C(v91, v92);
      v93 = v92;
      ServantData = BattleData__getServantData(data, SHIDWORD(v91), 0LL);
      if ( ServantData && !ServantData->fields.isDeadAnime && (v93 != 0) != v63->fields.isTrue )
      {
        v95 = 297;
        goto LABEL_47;
      }
    }
    v95 = 254;
LABEL_47:
    v101 = v95;
    v96 = *(_QWORD *)v82;
    if ( *(_WORD *)(*(_QWORD *)v82 + 298LL) )
    {
      v97 = 0LL;
      v98 = (int *)(*(_QWORD *)(v96 + 176) + 8LL);
      while ( *((System_IDisposable_c **)v98 - 1) != System_IDisposable_TypeInfo )
      {
        ++v97;
        v98 += 4;
        if ( v97 >= *(unsigned __int16 *)(*(_QWORD *)v82 + 298LL) )
          goto LABEL_51;
      }
      v99 = v96 + 16LL * *v98 + 312;
    }
    else
    {
LABEL_51:
      v99 = sub_AF54C0(v82, System_IDisposable_TypeInfo, 0LL, v81);
    }
    (*(void (__fastcall **)(__int64, _QWORD))v99)(v82, *(_QWORD *)(v99 + 8));
    if ( v101 != 254 )
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
    sub_B5D69C(0LL, v7);
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
    sub_B5D69C(0LL, v5);
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
    sub_B5D69C(this, type);
  return externalArg->fields.grantSkillType == type;
}


BattleLogicFunction_CheckDuplicateFunction_o *__fastcall BattleLogicFunction_ProcListInArgs__get_CheckDuplicateFunc(
        BattleLogicFunction_ProcListInArgs_o *this,
        const MethodInfo *method)
{
  struct BattleLogicFunction_FunctionArgument_o *externalArg; // x8

  externalArg = this->fields.externalArg;
  if ( !externalArg )
    sub_B5D69C(this, method);
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
    sub_B5D69C(this, method);
  return externalArg->fields._FuncSideEffectArg_k__BackingField;
}


int32_t __fastcall BattleLogicFunction_ProcListInArgs__get_GrantSkillType(
        BattleLogicFunction_ProcListInArgs_o *this,
        const MethodInfo *method)
{
  struct BattleLogicFunction_FunctionArgument_o *externalArg; // x8

  externalArg = this->fields.externalArg;
  if ( !externalArg )
    sub_B5D69C(this, method);
  return externalArg->fields.grantSkillType;
}


bool __fastcall BattleLogicFunction_ProcListInArgs__get_IsCommandSideEffect(
        BattleLogicFunction_ProcListInArgs_o *this,
        const MethodInfo *method)
{
  struct BattleLogicFunction_FunctionArgument_o *externalArg; // x8

  externalArg = this->fields.externalArg;
  if ( !externalArg )
    sub_B5D69C(this, method);
  return externalArg->fields.isCommandSideEffect;
}


bool __fastcall BattleLogicFunction_ProcListInArgs__get_IsPassive(
        BattleLogicFunction_ProcListInArgs_o *this,
        const MethodInfo *method)
{
  struct BattleLogicFunction_FunctionArgument_o *externalArg; // x8

  externalArg = this->fields.externalArg;
  if ( !externalArg )
    sub_B5D69C(this, method);
  return externalArg->fields.isPassive;
}


bool __fastcall BattleLogicFunction_ProcListInArgs__get_IsShift(
        BattleLogicFunction_ProcListInArgs_o *this,
        const MethodInfo *method)
{
  struct BattleLogicFunction_FunctionArgument_o *externalArg; // x8

  externalArg = this->fields.externalArg;
  if ( !externalArg )
    sub_B5D69C(this, method);
  return externalArg->fields.isShift;
}


int32_t __fastcall BattleLogicFunction_ProcListInArgs__get_SkillId(
        BattleLogicFunction_ProcListInArgs_o *this,
        const MethodInfo *method)
{
  struct BattleLogicFunction_FunctionArgument_o *externalArg; // x8

  externalArg = this->fields.externalArg;
  if ( !externalArg )
    sub_B5D69C(this, method);
  return externalArg->fields.skillId;
}


GeneratedFamilyLinkageIdCacher_o *__fastcall BattleLogicFunction_ProcListInArgs__get_familyLinkageIdCacher(
        BattleLogicFunction_ProcListInArgs_o *this,
        const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  GeneratedFamilyLinkageIdCacher_o *result; // x0
  BattleServantConfConponent_o *p_familyLinkageIdCacher; // x19
  GeneratedFamilyLinkageIdCacher_o *familyLinkageIdCacher; // t1
  GeneratedFamilyLinkageIdCacher_o *v8; // x20
  System_String_array **v9; // x2
  System_String_array **v10; // x3
  System_Boolean_array **v11; // x4
  System_Int32_array **v12; // x5
  System_Int32_array *v13; // x6
  System_Int32_array *v14; // x7

  if ( (byte_42E7C79 & 1) == 0 )
  {
    sub_B5D5C4(&GeneratedFamilyLinkageIdCacher_TypeInfo, (_DWORD)method, v2, v3);
    byte_42E7C79 = 1;
  }
  familyLinkageIdCacher = this->fields._familyLinkageIdCacher;
  p_familyLinkageIdCacher = (BattleServantConfConponent_o *)&this->fields._familyLinkageIdCacher;
  result = familyLinkageIdCacher;
  if ( !familyLinkageIdCacher )
  {
    v8 = (GeneratedFamilyLinkageIdCacher_o *)sub_B5D694(GeneratedFamilyLinkageIdCacher_TypeInfo);
    GeneratedFamilyLinkageIdCacher___ctor(v8, 0LL);
    p_familyLinkageIdCacher->klass = (BattleServantConfConponent_c *)v8;
    sub_B5D560(p_familyLinkageIdCacher, (System_Int32_array **)v8, v9, v10, v11, v12, v13, v14);
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
  int v9; // w1
  int v10; // w2
  __int64 v11; // x3
  signed int max_length; // w25
  System_Int32_array **v13; // x0
  BattleLogicFunctionProcess_FunctionUnitCheck_array **p_funcUnitArray_k__BackingField; // x19
  System_String_array **v15; // x2
  System_String_array **v16; // x3
  System_Boolean_array **v17; // x4
  System_Int32_array **v18; // x5
  System_Int32_array *v19; // x6
  System_Int32_array *v20; // x7
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
  if ( (byte_42E7C7E & 1) == 0 )
  {
    sub_B5D5C4(
      &BattleLogicFunctionProcess_FunctionUnitCheck___TypeInfo,
      (_DWORD)logic,
      (_DWORD)functionIds,
      dataValsList);
    this = (BattleLogicFunction_ProcListInArgs_o *)sub_B5D5C4(
                                                     &BattleLogicFunctionProcess_FunctionUnitCheck_TypeInfo,
                                                     v9,
                                                     v10,
                                                     v11);
    byte_42E7C7E = 1;
  }
  if ( !dataValsList )
    goto LABEL_38;
  max_length = dataValsList->max_length;
  v13 = (System_Int32_array **)sub_B5D5DC(
                                 BattleLogicFunctionProcess_FunctionUnitCheck___TypeInfo,
                                 (unsigned int)max_length);
  v45->fields._funcUnitArray_k__BackingField = (struct BattleLogicFunctionProcess_FunctionUnitCheck_array *)v13;
  p_funcUnitArray_k__BackingField = &v45->fields._funcUnitArray_k__BackingField;
  sub_B5D560(
    (BattleServantConfConponent_o *)&v45->fields._funcUnitArray_k__BackingField,
    v13,
    v15,
    v16,
    v17,
    v18,
    v19,
    v20);
  funcUnitArray_k__BackingField = v45->fields._funcUnitArray_k__BackingField;
  if ( max_length >= 1 )
  {
    v22 = 32LL;
    v23 = 8LL;
    while ( 1 )
    {
      v24 = (BattleLogicFunctionProcess_FunctionUnitCheck_o *)sub_B5D694(BattleLogicFunctionProcess_FunctionUnitCheck_TypeInfo);
      BattleLogicFunctionProcess_FunctionUnitCheck___ctor(v24, logic, v45, v25);
      if ( !funcUnitArray_k__BackingField )
        break;
      if ( v24 )
      {
        this = (BattleLogicFunction_ProcListInArgs_o *)sub_B5D684(
                                                         v24,
                                                         funcUnitArray_k__BackingField->obj.klass->_1.element_class);
        if ( !this )
        {
          v43 = sub_B5D6BC(0LL);
          sub_B5D668(v43, 0LL);
        }
      }
      v32 = v23 - 8;
      if ( (unsigned int)(v23 - 8) >= funcUnitArray_k__BackingField->max_length )
        goto LABEL_39;
      *(Il2CppClass **)((char *)&funcUnitArray_k__BackingField->obj.klass + v22) = (Il2CppClass *)v24;
      sub_B5D560(
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
        v42 = sub_B5D6C8(this);
        sub_B5D668(v42, 0LL);
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
    sub_B5D69C(this, logic);
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


bool __fastcall BattleLogicFunction_ProcListInArgs__isPrevFuncSuccess(
        BattleLogicFunction_ProcListInArgs_o *this,
        int32_t targetId,
        int32_t index,
        const MethodInfo *method)
{
  int v7; // w1
  int v8; // w2
  __int64 v9; // x3
  int v10; // w1
  int v11; // w2
  __int64 v12; // x3
  __int64 v13; // x1
  System_Collections_Generic_Dictionary_KeyValuePair_int__int___bool__o *funcResults; // x0
  System_Collections_Generic_KeyValuePair_int__int__o key; // [xsp+8h] [xbp-28h] BYREF
  System_Collections_Generic_KeyValuePair_int__int__o p_key; // 0:x0.8
  System_Collections_Generic_KeyValuePair_int__int__o v19; // 0:x1.8
  System_Collections_Generic_KeyValuePair_int__int__o v20; // 0:x1.8

  if ( (byte_42E7C7B & 1) == 0 )
  {
    sub_B5D5C4(
      &Method_System_Collections_Generic_Dictionary_KeyValuePair_int__int___bool__ContainsKey__,
      targetId,
      index,
      method);
    sub_B5D5C4(&Method_System_Collections_Generic_Dictionary_KeyValuePair_int__int___bool__get_Item__, v7, v8, v9);
    sub_B5D5C4(&Method_System_Collections_Generic_KeyValuePair_int__int___ctor__, v10, v11, v12);
    byte_42E7C7B = 1;
  }
  p_key = (System_Collections_Generic_KeyValuePair_int__int__o)&key;
  key = 0LL;
  System_Collections_Generic_KeyValuePair_int__int____ctor(
    p_key,
    index - 1,
    targetId,
    (const MethodInfo_237C760 *)Method_System_Collections_Generic_KeyValuePair_int__int___ctor__);
  funcResults = this->fields.funcResults;
  if ( !funcResults )
    goto LABEL_9;
  v19 = key;
  if ( !System_Collections_Generic_Dictionary_KeyValuePair_int__int___bool___ContainsKey(
          funcResults,
          v19,
          (const MethodInfo_23FDECC *)Method_System_Collections_Generic_Dictionary_KeyValuePair_int__int___bool__ContainsKey__) )
    return 0;
  funcResults = this->fields.funcResults;
  if ( !funcResults )
LABEL_9:
    sub_B5D69C(funcResults, v13);
  v20 = key;
  return System_Collections_Generic_Dictionary_KeyValuePair_int__int___bool___get_Item(
           funcResults,
           v20,
           (const MethodInfo_23FDB7C *)Method_System_Collections_Generic_Dictionary_KeyValuePair_int__int___bool__get_Item__);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall BattleLogicFunction_ProcListInArgs__setFuncResult(
        BattleLogicFunction_ProcListInArgs_o *this,
        int32_t targetId,
        bool result,
        int32_t index,
        const MethodInfo *method)
{
  int v9; // w1
  char v10; // w2
  __int64 v11; // x3
  __int64 v12; // x1
  System_Collections_Generic_Dictionary_KeyValuePair_int__int___bool__o *funcResults; // x0
  System_Collections_Generic_KeyValuePair_int__int__o key; // [xsp+8h] [xbp-28h] BYREF
  System_Collections_Generic_KeyValuePair_int__int__o p_key; // 0:x0.8
  System_Collections_Generic_KeyValuePair_int__int__o v16; // 0:x1.8

  if ( (byte_42E7C7D & 1) == 0 )
  {
    sub_B5D5C4(
      &Method_System_Collections_Generic_Dictionary_KeyValuePair_int__int___bool__set_Item__,
      targetId,
      result,
      *(_QWORD *)&index);
    sub_B5D5C4(&Method_System_Collections_Generic_KeyValuePair_int__int___ctor__, v9, v10, v11);
    byte_42E7C7D = 1;
  }
  p_key = (System_Collections_Generic_KeyValuePair_int__int__o)&key;
  key = 0LL;
  System_Collections_Generic_KeyValuePair_int__int____ctor(
    p_key,
    index,
    targetId,
    (const MethodInfo_237C760 *)Method_System_Collections_Generic_KeyValuePair_int__int___ctor__);
  funcResults = this->fields.funcResults;
  if ( !funcResults )
    sub_B5D69C(0LL, v12);
  v16 = key;
  System_Collections_Generic_Dictionary_KeyValuePair_int__int___bool___set_Item(
    funcResults,
    v16,
    result,
    (const MethodInfo_23FDC18 *)Method_System_Collections_Generic_Dictionary_KeyValuePair_int__int___bool__set_Item__);
}


void __fastcall BattleLogicFunction_ProcListInArgs__set_IsCommandSideEffect(
        BattleLogicFunction_ProcListInArgs_o *this,
        bool value,
        const MethodInfo *method)
{
  struct BattleLogicFunction_FunctionArgument_o *externalArg; // x8

  externalArg = this->fields.externalArg;
  if ( !externalArg )
    sub_B5D69C(this, value);
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
    sub_B5D69C(this, value);
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
    sub_B5D69C(this, value);
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
    sub_B5D69C(this, value);
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
  sub_B5D560(
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
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3

  key = x.fields.key.fields.key;
  if ( (byte_42E6029 & 1) == 0 )
  {
    sub_B5D5C4(
      &Method_System_Collections_Generic_KeyValuePair_KeyValuePair_int__int___bool__get_Key__,
      x.fields.key.fields.key,
      *(_DWORD *)&x.fields.value,
      method);
    sub_B5D5C4(&Method_System_Collections_Generic_KeyValuePair_int__int__get_Key__, v5, v6, v7);
    byte_42E6029 = 1;
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
  if ( (byte_42E602A & 1) == 0 )
  {
    sub_B5D5C4(
      &Method_System_Collections_Generic_KeyValuePair_KeyValuePair_int__int___bool__get_Value__,
      x.fields.key.fields.key,
      x.fields.value,
      method);
    byte_42E602A = 1;
  }
  return !value ^ this->fields.isTrue;
}


bool __fastcall BattleLogicFunction_ProcListInArgs___c__DisplayClass31_0___DidTriggeredFuncHaveSpecifyResults_b__2(
        BattleLogicFunction_ProcListInArgs___c__DisplayClass31_0_o *this,
        System_Collections_Generic_KeyValuePair_KeyValuePair_int__int___bool__o x,
        const MethodInfo *method)
{
  int32_t key; // w19
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3

  key = x.fields.key.fields.key;
  if ( (byte_42E6028 & 1) == 0 )
  {
    sub_B5D5C4(
      &Method_System_Collections_Generic_KeyValuePair_KeyValuePair_int__int___bool__get_Key__,
      x.fields.key.fields.key,
      *(_DWORD *)&x.fields.value,
      method);
    sub_B5D5C4(&Method_System_Collections_Generic_KeyValuePair_int__int__get_Key__, v5, v6, v7);
    byte_42E6028 = 1;
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

  if ( (byte_42E7C80 & 1) == 0 )
  {
    sub_B5D5C4(&Method_System_Array_Empty_BattleActionData_SideEffectData___, (_DWORD)method, (_DWORD)v2, v3);
    byte_42E7C80 = 1;
  }
  v9 = (_QWORD **)Method_System_Array_Empty_BattleActionData_SideEffectData___;
  v10 = **((_QWORD **)Method_System_Array_Empty_BattleActionData_SideEffectData___ + 6);
  v11 = *(_WORD *)(v10 + 306);
  if ( (v11 & 1) == 0 )
  {
    sub_AF52C4(**((_QWORD **)Method_System_Array_Empty_BattleActionData_SideEffectData___ + 6));
    v11 = *(_WORD *)(v10 + 306);
  }
  if ( (v11 & 0x400) != 0 )
  {
    v12 = *v9[6];
    if ( (*(_BYTE *)(v12 + 306) & 1) == 0 )
      sub_AF52C4(*v9[6]);
    if ( !*(_DWORD *)(v12 + 224) )
    {
      v13 = *v9[6];
      if ( (*(_BYTE *)(v13 + 306) & 1) == 0 )
        sub_AF52C4(*v9[6]);
      j_il2cpp_runtime_class_init_0(v13);
    }
  }
  v14 = *v9[6];
  if ( (*(_BYTE *)(v14 + 306) & 1) == 0 )
    sub_AF52C4(*v9[6]);
  v15 = *(struct BattleActionData_SideEffectData_array ***)(v14 + 184);
  v16 = *v15;
  this->fields._SideEffectList_k__BackingField = *v15;
  sub_B5D560((BattleServantConfConponent_o *)&this->fields, (System_Int32_array **)v16, v2, v3, v4, v5, v6, v7);
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


BattleLogicFunction_SideEffectMakeArgument_o *__fastcall BattleLogicFunction_SideEffectMakeArgument__Init(
        BattleLogicFunction_SideEffectMakeArgument_o *this,
        System_Int32_array *targetIds,
        const MethodInfo *method)
{
  __int64 v3; // x3
  int v6; // w1
  int v7; // w2
  __int64 v8; // x3
  int v9; // w1
  int v10; // w2
  __int64 v11; // x3
  int v12; // w1
  int v13; // w2
  __int64 v14; // x3
  int v15; // w1
  int v16; // w2
  __int64 v17; // x3
  int v18; // w1
  int v19; // w2
  __int64 v20; // x3
  int v21; // w1
  int v22; // w2
  __int64 v23; // x3
  __int64 v24; // x21
  __int64 v25; // x22
  __int64 v26; // x0
  __int64 v27; // x1
  System_String_array **v28; // x2
  System_String_array **v29; // x3
  System_Boolean_array **v30; // x4
  System_Int32_array **v31; // x5
  System_Int32_array *v32; // x6
  System_Int32_array *v33; // x7
  System_Func_int__BattleActionData_SideEffectData__o *v34; // x22
  System_Collections_Generic_IEnumerable_TSource__o *v35; // x0
  struct BattleActionData_SideEffectData_array *v36; // x0
  System_String_array **v37; // x2
  System_String_array **v38; // x3
  System_Boolean_array **v39; // x4
  System_Int32_array **v40; // x5
  System_Int32_array *v41; // x6
  System_Int32_array *v42; // x7
  __int64 v44; // x0

  if ( (byte_42E7C7F & 1) == 0 )
  {
    sub_B5D5C4(&BuffList_ACTION___TypeInfo, (_DWORD)targetIds, (_DWORD)method, v3);
    sub_B5D5C4(&Method_System_Linq_Enumerable_Select_int__BattleActionData_SideEffectData___, v6, v7, v8);
    sub_B5D5C4(&Method_System_Linq_Enumerable_ToArray_BattleActionData_SideEffectData___, v9, v10, v11);
    sub_B5D5C4(&Method_System_Func_int__BattleActionData_SideEffectData___ctor__, v12, v13, v14);
    sub_B5D5C4(&System_Func_int__BattleActionData_SideEffectData__TypeInfo, v15, v16, v17);
    sub_B5D5C4(&Method_BattleLogicFunction_SideEffectMakeArgument___c__DisplayClass9_0__Init_b__0__, v18, v19, v20);
    sub_B5D5C4(&BattleLogicFunction_SideEffectMakeArgument___c__DisplayClass9_0_TypeInfo, v21, v22, v23);
    byte_42E7C7F = 1;
  }
  v24 = sub_B5D694(BattleLogicFunction_SideEffectMakeArgument___c__DisplayClass9_0_TypeInfo);
  BattleLogicFunction_SideEffectMakeArgument___c__DisplayClass9_0___ctor(
    (BattleLogicFunction_SideEffectMakeArgument___c__DisplayClass9_0_o *)v24,
    0LL);
  v25 = sub_B5D5DC(BuffList_ACTION___TypeInfo, 1LL);
  v26 = ((__int64 (__fastcall *)(BattleLogicFunction_SideEffectMakeArgument_o *, Il2CppMethodPointer))this->klass->vtable._4_unknown.method)(
          this,
          this->klass->vtable._5_unknown.methodPtr);
  if ( !v25 )
    goto LABEL_7;
  if ( !*(_DWORD *)(v25 + 24) )
  {
    v44 = sub_B5D6C8(v26);
    sub_B5D668(v44, 0LL);
  }
  *(_DWORD *)(v25 + 32) = v26;
  if ( !v24 )
LABEL_7:
    sub_B5D69C(v26, v27);
  *(_QWORD *)(v24 + 16) = v25;
  sub_B5D560((BattleServantConfConponent_o *)(v24 + 16), (System_Int32_array **)v25, v28, v29, v30, v31, v32, v33);
  v34 = (System_Func_int__BattleActionData_SideEffectData__o *)sub_B5D694(System_Func_int__BattleActionData_SideEffectData__TypeInfo);
  System_Func_int__BattleActionData_SideEffectData____ctor(
    v34,
    (Il2CppObject *)v24,
    Method_BattleLogicFunction_SideEffectMakeArgument___c__DisplayClass9_0__Init_b__0__,
    (const MethodInfo_2C29938 *)Method_System_Func_int__BattleActionData_SideEffectData___ctor__);
  v35 = (System_Collections_Generic_IEnumerable_TSource__o *)System_Linq_Enumerable__Select_int__BattleActionData_SideEffectData_(
                                                               (System_Collections_Generic_IEnumerable_TSource__o *)targetIds,
                                                               (System_Func_TSource__TResult__o *)v34,
                                                               (const MethodInfo_1CB1D40 *)Method_System_Linq_Enumerable_Select_int__BattleActionData_SideEffectData___);
  v36 = (struct BattleActionData_SideEffectData_array *)System_Linq_Enumerable__ToArray_DrawLotsDisplayMessage_DisplayedInGroup_SaveData_(
                                                          v35,
                                                          (const MethodInfo_1CB7860 *)Method_System_Linq_Enumerable_ToArray_BattleActionData_SideEffectData___);
  this->fields._SideEffectList_k__BackingField = v36;
  sub_B5D560((BattleServantConfConponent_o *)&this->fields, (System_Int32_array **)v36, v37, v38, v39, v40, v41, v42);
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
  sub_B5D560(
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
  __int64 v3; // x3
  BuffList_ACTION_array *buffActs; // x20
  BattleActionData_SideEffectData_o *v7; // x21

  if ( (byte_42E602B & 1) == 0 )
  {
    sub_B5D5C4(&BattleActionData_SideEffectData_TypeInfo, id, (_DWORD)method, v3);
    byte_42E602B = 1;
  }
  buffActs = this->fields.buffActs;
  v7 = (BattleActionData_SideEffectData_o *)sub_B5D694(BattleActionData_SideEffectData_TypeInfo);
  BattleActionData_SideEffectData___ctor(v7, id, buffActs, 0LL);
  return v7;
}


BuffList_ACTION_array *__fastcall BattleLogicFunction_SkillSideEffectFunctionArgument__GetActArray(
        BattleLogicFunction_SkillSideEffectFunctionArgument_o *this,
        bool isMainOnly,
        const MethodInfo *method)
{
  __int64 v3; // x3
  BuffList_ACTION_array *result; // x0
  __int64 v6; // x1
  il2cpp_array_size_t max_length; // w8
  int32_t v8; // w8
  __int64 v9; // x0

  if ( (byte_42E7C81 & 1) == 0 )
  {
    sub_B5D5C4(&BuffList_ACTION___TypeInfo, isMainOnly, (_DWORD)method, v3);
    byte_42E7C81 = 1;
  }
  result = (BuffList_ACTION_array *)sub_B5D5DC(BuffList_ACTION___TypeInfo, 1LL);
  if ( !result )
    sub_B5D69C(0LL, v6);
  max_length = result->max_length;
  if ( !isMainOnly )
  {
    if ( max_length )
    {
      v8 = 122;
      goto LABEL_9;
    }
LABEL_11:
    v9 = sub_B5D6C8(result);
    sub_B5D668(v9, 0LL);
  }
  if ( !max_length )
    goto LABEL_11;
  v8 = 123;
LABEL_9:
  result->m_Items[1] = v8;
  return result;
}


BuffList_ACTION_array *__fastcall BattleLogicFunction_TreasureDeviceSideEffectFunctionArgument__GetActArray(
        BattleLogicFunction_TreasureDeviceSideEffectFunctionArgument_o *this,
        bool isMainOnly,
        const MethodInfo *method)
{
  __int64 v3; // x3
  BuffList_ACTION_array *result; // x0
  __int64 v6; // x1
  il2cpp_array_size_t max_length; // w8
  int32_t v8; // w8
  __int64 v9; // x0

  if ( (byte_42E7C82 & 1) == 0 )
  {
    sub_B5D5C4(&BuffList_ACTION___TypeInfo, isMainOnly, (_DWORD)method, v3);
    byte_42E7C82 = 1;
  }
  result = (BuffList_ACTION_array *)sub_B5D5DC(BuffList_ACTION___TypeInfo, 1LL);
  if ( !result )
    sub_B5D69C(0LL, v6);
  max_length = result->max_length;
  if ( !isMainOnly )
  {
    if ( max_length )
    {
      v8 = 124;
      goto LABEL_9;
    }
LABEL_11:
    v9 = sub_B5D6C8(result);
    sub_B5D668(v9, 0LL);
  }
  if ( !max_length )
    goto LABEL_11;
  v8 = 125;
LABEL_9:
  result->m_Items[1] = v8;
  return result;
}


// local variable allocation has failed, the output may be wrong!
void __fastcall BattleLogicFunction_WarBoardFunctionArgument___ctor(
        BattleLogicFunction_WarBoardFunctionArgument_o *this,
        int32_t targetId,
        const MethodInfo *method)
{
  __int64 v3; // x3
  struct System_Int32_array *v6; // x0
  __int64 v7; // x1
  System_String_array **v8; // x2
  System_String_array **v9; // x3
  System_Boolean_array **v10; // x4
  System_Int32_array **v11; // x5
  System_Int32_array *v12; // x6
  System_Int32_array *v13; // x7
  __int64 v14; // x0

  if ( (byte_42E7C83 & 1) == 0 )
  {
    sub_B5D5C4(&int___TypeInfo, targetId, (_DWORD)method, v3);
    byte_42E7C83 = 1;
  }
  BattleLogicFunction_FunctionArgument___ctor(
    (BattleLogicFunction_FunctionArgument_o *)this,
    *(const MethodInfo **)&targetId);
  v6 = (struct System_Int32_array *)sub_B5D5DC(int___TypeInfo, 1LL);
  if ( !v6 )
    sub_B5D69C(0LL, v7);
  if ( !v6->max_length )
  {
    v14 = sub_B5D6C8(v6);
    sub_B5D668(v14, 0LL);
  }
  v6->m_Items[1] = targetId;
  this->fields.fixTargetIds = v6;
  sub_B5D560(
    (BattleServantConfConponent_o *)&this->fields.fixTargetIds,
    (System_Int32_array **)v6,
    v8,
    v9,
    v10,
    v11,
    v12,
    v13);
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
  int v1; // w1
  int v2; // w2
  __int64 v3; // x3
  Il2CppObject *v4; // x19
  BattleServantConfConponent_o *static_fields; // x0
  System_String_array **v6; // x2
  System_String_array **v7; // x3
  System_Boolean_array **v8; // x4
  System_Int32_array **v9; // x5
  System_Int32_array *v10; // x6
  System_Int32_array *v11; // x7

  if ( (byte_42E7C67 & 1) == 0 )
  {
    sub_B5D5C4(&BattleLogicFunction___c_TypeInfo, v1, v2, v3);
    byte_42E7C67 = 1;
  }
  v4 = (Il2CppObject *)sub_B5D694(BattleLogicFunction___c_TypeInfo);
  System_Object___ctor(v4, 0LL);
  static_fields = (BattleServantConfConponent_o *)BattleLogicFunction___c_TypeInfo->static_fields;
  static_fields->klass = (BattleServantConfConponent_c *)v4;
  sub_B5D560(static_fields, (System_Int32_array **)v4, v6, v7, v8, v9, v10, v11);
}


void __fastcall BattleLogicFunction___c___ctor(BattleLogicFunction___c_o *this, const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


bool __fastcall BattleLogicFunction___c___FunctionSubFieldBuff_b__121_1(
        BattleLogicFunction___c_o *this,
        BattleBuffData_BuffData_o *x,
        const MethodInfo *method)
{
  if ( !x )
    sub_B5D69C(this, 0LL);
  return x->fields.fieldChangeData != 0LL;
}


void __fastcall BattleLogicFunction___c___SetFuncSideEffect_b__49_0(
        BattleLogicFunction___c_o *this,
        BattleActionData_o *x,
        const MethodInfo *method)
{
  if ( !x )
    sub_B5D69C(this, 0LL);
  BattleActionData__SetPopupOnce(x, 0LL);
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
    sub_B5D69C(Next, v5);
  s->fields._shuffuleSeed = Next;
}


int32_t __fastcall BattleLogicFunction___c___functionPtShuffle_b__89_1(
        BattleLogicFunction___c_o *this,
        BattleServantData_o *a,
        BattleServantData_o *b,
        const MethodInfo *method)
{
  if ( !a || (this = (BattleLogicFunction___c_o *)BattleServantData__get_ShuffleSeed(a, 0LL), !b) )
    sub_B5D69C(this, a);
  return (_DWORD)this - BattleServantData__get_ShuffleSeed(b, 0LL);
}


bool __fastcall BattleLogicFunction___c___functionReplaceEnemyMember_b__83_0(
        BattleLogicFunction___c_o *this,
        BattleServantData_o *x,
        const MethodInfo *method)
{
  if ( !x )
    sub_B5D69C(this, 0LL);
  return BattleServantData__isAlive(x, 0, 0LL);
}


bool __fastcall BattleLogicFunction___c___procList_b__41_0(
        BattleLogicFunction___c_o *this,
        BattleLogicFunctionProcess_FunctionUnitCheck_o *x,
        const MethodInfo *method)
{
  struct DataVals_o *dataVals_k__BackingField; // x8

  if ( !x || (dataVals_k__BackingField = x->fields._dataVals_k__BackingField) == 0LL )
    sub_B5D69C(this, x);
  return dataVals_k__BackingField->fields.funcType != 0;
}


bool __fastcall BattleLogicFunction___c___procList_b__41_1(
        BattleLogicFunction___c_o *this,
        BattleLogicFunctionProcess_FunctionUnitCheck_o *x,
        const MethodInfo *method)
{
  struct DataVals_o *dataVals_k__BackingField; // x8

  if ( !x || (dataVals_k__BackingField = x->fields._dataVals_k__BackingField) == 0LL )
    sub_B5D69C(this, x);
  return dataVals_k__BackingField->fields.funcType == 135;
}


bool __fastcall BattleLogicFunction___c___procList_b__41_2(
        BattleLogicFunction___c_o *this,
        BattleLogicFunctionProcess_FunctionTargetCheck_o *target,
        const MethodInfo *method)
{
  if ( !target )
    sub_B5D69C(this, 0LL);
  return target->fields._result_k__BackingField;
}


int32_t __fastcall BattleLogicFunction___c___procList_b__41_3(
        BattleLogicFunction___c_o *this,
        BattleLogicFunctionProcess_FunctionTargetCheck_o *target,
        const MethodInfo *method)
{
  if ( !target )
    sub_B5D69C(this, 0LL);
  return target->fields._targetId_k__BackingField;
}


int32_t __fastcall BattleLogicFunction___c___setAttackSideEffect_b__52_0(
        BattleLogicFunction___c_o *this,
        BattleActionData_SideEffectData_o *x,
        const MethodInfo *method)
{
  if ( !x )
    sub_B5D69C(this, 0LL);
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
    sub_B5D69C(this, 0LL);
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
    sub_B5D69C(this, 0LL);
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
    sub_B5D69C(this, 0LL);
  return BattleBuffData_BuffData__checkState(x, this->fields.stateUnstealable, 0LL);
}


bool __fastcall BattleLogicFunction___c__DisplayClass108_0___functionMoveState_b__1(
        BattleLogicFunction___c__DisplayClass108_0_o *this,
        BattleBuffData_BuffData_o *x,
        const MethodInfo *method)
{
  __int64 v3; // x3
  System_Collections_Generic_HashSet_BattleBuffData_BuffData__o *unstealableBuffs; // x0

  if ( (byte_42E7C68 & 1) == 0 )
  {
    sub_B5D5C4(
      &Method_System_Collections_Generic_HashSet_BattleBuffData_BuffData__Contains__,
      (_DWORD)x,
      (_DWORD)method,
      v3);
    byte_42E7C68 = 1;
  }
  unstealableBuffs = this->fields.unstealableBuffs;
  if ( !unstealableBuffs )
    sub_B5D69C(0LL, x);
  return !System_Collections_Generic_HashSet_BattleBuffData_BuffData___Contains(
            unstealableBuffs,
            x,
            (const MethodInfo_25064D8 *)Method_System_Collections_Generic_HashSet_BattleBuffData_BuffData__Contains__);
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
    sub_B5D69C(this, linkageIndividuality);
  }
  return BattleLogicFunction_ProcListInArgs__GetFamilyBuffLinkageId(
           procArg_k__BackingField,
           linkageIndividuality,
           this->fields.targetSvtData,
           v3);
}


void __fastcall BattleLogicFunction___c__DisplayClass69_0___ctor(
        BattleLogicFunction___c__DisplayClass69_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


BattleBuffData_BuffData_o *__fastcall BattleLogicFunction___c__DisplayClass69_0___functionSubState_b__0(
        BattleLogicFunction___c__DisplayClass69_0_o *this,
        BattleBuffData_BuffData_o *buff,
        const MethodInfo *method)
{
  BattleServantData_o *targetSvtData; // x0

  targetSvtData = this->fields.targetSvtData;
  if ( !targetSvtData
    || (targetSvtData = (BattleServantData_o *)BattleServantData__get_BuffData(targetSvtData, 0LL)) == 0LL )
  {
    sub_B5D69C(targetSvtData, buff);
  }
  return BattleBuffData__CreateDummyBuff((BattleBuffData_o *)targetSvtData, buff, 0LL);
}