void __fastcall BattleLogicFunction___ctor(BattleLogicFunction_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
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
  __int64 v14; // x1
  struct System_Int32_array *v15; // x0
  System_String_array **v16; // x2
  System_String_array **v17; // x3
  System_Boolean_array **v18; // x4
  System_Int32_array **v19; // x5
  System_Int32_array *v20; // x6
  System_Int32_array *v21; // x7
  il2cpp_array_size_t max_length; // w8
  __int64 v23; // x1
  __int64 v24; // x2
  __int64 v25; // x3
  __int64 v26; // x4
  System_Collections_Generic_Dictionary_Voice_BATTLE__string__o *v27; // x20
  __int64 v28; // x1
  __int64 v29; // x2
  __int64 v30; // x3
  __int64 v31; // x4
  BattleLogicFunctionProcess_CommonFunctionTypeProcess_o *v32; // x21
  __int64 v33; // x1
  __int64 v34; // x2
  __int64 v35; // x3
  __int64 v36; // x4
  BattleLogicFunctionProcess_AddStateProcess_o *v37; // x21
  __int64 v38; // x1
  __int64 v39; // x2
  __int64 v40; // x3
  __int64 v41; // x4
  BattleLogicFunctionProcess_AddStateShortProcess_o *v42; // x21
  __int64 v43; // x1
  __int64 v44; // x2
  __int64 v45; // x3
  __int64 v46; // x4
  BattleLogicFunctionProcess_MoveToLastSubMemberProcess_o *v47; // x21
  __int64 v48; // x1
  __int64 v49; // x2
  __int64 v50; // x3
  __int64 v51; // x4
  BattleLogicFunctionProcess_TransformServantProcess_o *v52; // x21
  __int64 v53; // x1
  __int64 v54; // x2
  __int64 v55; // x3
  __int64 v56; // x4
  BattleLogicFunctionProcess_CommonFieldFunctionProcess_o *v57; // x21
  __int64 v58; // x1
  __int64 v59; // x2
  __int64 v60; // x3
  __int64 v61; // x4
  BattleLogicFunctionProcess_CommonFieldFunctionProcess_o *v62; // x21
  __int64 v63; // x1
  __int64 v64; // x2
  __int64 v65; // x3
  __int64 v66; // x4
  BattleLogicFunctionProcess_CommonAddStateProcess_o *v67; // x21
  __int64 v68; // x1
  __int64 v69; // x2
  __int64 v70; // x3
  __int64 v71; // x4
  BattleLogicFunctionProcess_ToFieldCommonFunctionProcess_o *v72; // x21
  System_String_array **v73; // x2
  System_String_array **v74; // x3
  System_Boolean_array **v75; // x4
  System_Int32_array **v76; // x5
  System_Int32_array *v77; // x6
  System_Int32_array *v78; // x7

  if ( (byte_40FCE10 & 1) == 0 )
  {
    sub_B16FFC(&BattleLogicFunctionProcess_AddStateProcess_TypeInfo, method);
    sub_B16FFC(&BattleLogicFunctionProcess_AddStateShortProcess_TypeInfo, v4);
    sub_B16FFC(&BattleLogicFunctionProcess_CommonAddStateProcess_TypeInfo, v5);
    sub_B16FFC(&BattleLogicFunctionProcess_CommonFieldFunctionProcess_TypeInfo, v6);
    sub_B16FFC(&BattleLogicFunctionProcess_CommonFunctionTypeProcess_TypeInfo, v7);
    sub_B16FFC(
      &Method_System_Collections_Generic_Dictionary_FuncList_TYPE__BattleLogicFunctionProcess_BaseFunctionTypeProcess__Add__,
      v8);
    sub_B16FFC(
      &Method_System_Collections_Generic_Dictionary_FuncList_TYPE__BattleLogicFunctionProcess_BaseFunctionTypeProcess___ctor__,
      v9);
    sub_B16FFC(
      &System_Collections_Generic_Dictionary_FuncList_TYPE__BattleLogicFunctionProcess_BaseFunctionTypeProcess__TypeInfo,
      v10);
    sub_B16FFC(&int___TypeInfo, v11);
    sub_B16FFC(&BattleLogicFunctionProcess_MoveToLastSubMemberProcess_TypeInfo, v12);
    sub_B16FFC(&BattleLogicFunctionProcess_ToFieldCommonFunctionProcess_TypeInfo, v13);
    sub_B16FFC(&BattleLogicFunctionProcess_TransformServantProcess_TypeInfo, v14);
    byte_40FCE10 = 1;
  }
  v15 = (struct System_Int32_array *)sub_B17014(int___TypeInfo, 2LL, v2);
  if ( !v15 )
    goto LABEL_9;
  max_length = v15->max_length;
  if ( !max_length || (v15->m_Items[1] = 701601, max_length == 1) )
  {
    sub_B17100(v15, v15, v16);
    sub_B170A0();
  }
  v15->m_Items[2] = 701602;
  this->fields.tamamocatTreasureDeviceIds = v15;
  sub_B16F98(
    (BattleServantConfConponent_o *)&this->fields.tamamocatTreasureDeviceIds,
    (System_Int32_array **)v15,
    v16,
    v17,
    v18,
    v19,
    v20,
    v21);
  v27 = (System_Collections_Generic_Dictionary_Voice_BATTLE__string__o *)sub_B170CC(
                                                                           System_Collections_Generic_Dictionary_FuncList_TYPE__BattleLogicFunctionProcess_BaseFunctionTypeProcess__TypeInfo,
                                                                           v23,
                                                                           v24,
                                                                           v25,
                                                                           v26);
  System_Collections_Generic_Dictionary_Voice_BATTLE__string____ctor(
    v27,
    (const MethodInfo_2DFF0A0 *)Method_System_Collections_Generic_Dictionary_FuncList_TYPE__BattleLogicFunctionProcess_BaseFunctionTypeProcess___ctor__);
  v32 = (BattleLogicFunctionProcess_CommonFunctionTypeProcess_o *)sub_B170CC(
                                                                    BattleLogicFunctionProcess_CommonFunctionTypeProcess_TypeInfo,
                                                                    v28,
                                                                    v29,
                                                                    v30,
                                                                    v31);
  BattleLogicFunctionProcess_CommonFunctionTypeProcess___ctor(v32, 0LL);
  if ( !v27 )
LABEL_9:
    sub_B170D4();
  System_Collections_Generic_Dictionary_Voice_BATTLE__string___Add(
    v27,
    0,
    (System_String_o *)v32,
    (const MethodInfo_2DFFC54 *)Method_System_Collections_Generic_Dictionary_FuncList_TYPE__BattleLogicFunctionProcess_BaseFunctionTypeProcess__Add__);
  v37 = (BattleLogicFunctionProcess_AddStateProcess_o *)sub_B170CC(
                                                          BattleLogicFunctionProcess_AddStateProcess_TypeInfo,
                                                          v33,
                                                          v34,
                                                          v35,
                                                          v36);
  BattleLogicFunctionProcess_AddStateProcess___ctor(v37, 0LL);
  System_Collections_Generic_Dictionary_Voice_BATTLE__string___Add(
    v27,
    1,
    (System_String_o *)v37,
    (const MethodInfo_2DFFC54 *)Method_System_Collections_Generic_Dictionary_FuncList_TYPE__BattleLogicFunctionProcess_BaseFunctionTypeProcess__Add__);
  v42 = (BattleLogicFunctionProcess_AddStateShortProcess_o *)sub_B170CC(
                                                               BattleLogicFunctionProcess_AddStateShortProcess_TypeInfo,
                                                               v38,
                                                               v39,
                                                               v40,
                                                               v41);
  BattleLogicFunctionProcess_AddStateShortProcess___ctor(v42, 0LL);
  System_Collections_Generic_Dictionary_Voice_BATTLE__string___Add(
    v27,
    16,
    (System_String_o *)v42,
    (const MethodInfo_2DFFC54 *)Method_System_Collections_Generic_Dictionary_FuncList_TYPE__BattleLogicFunctionProcess_BaseFunctionTypeProcess__Add__);
  v47 = (BattleLogicFunctionProcess_MoveToLastSubMemberProcess_o *)sub_B170CC(
                                                                     BattleLogicFunctionProcess_MoveToLastSubMemberProcess_TypeInfo,
                                                                     v43,
                                                                     v44,
                                                                     v45,
                                                                     v46);
  BattleLogicFunctionProcess_MoveToLastSubMemberProcess___ctor(v47, 0LL);
  System_Collections_Generic_Dictionary_Voice_BATTLE__string___Add(
    v27,
    61,
    (System_String_o *)v47,
    (const MethodInfo_2DFFC54 *)Method_System_Collections_Generic_Dictionary_FuncList_TYPE__BattleLogicFunctionProcess_BaseFunctionTypeProcess__Add__);
  v52 = (BattleLogicFunctionProcess_TransformServantProcess_o *)sub_B170CC(
                                                                  BattleLogicFunctionProcess_TransformServantProcess_TypeInfo,
                                                                  v48,
                                                                  v49,
                                                                  v50,
                                                                  v51);
  BattleLogicFunctionProcess_TransformServantProcess___ctor(v52, 0LL);
  System_Collections_Generic_Dictionary_Voice_BATTLE__string___Add(
    v27,
    109,
    (System_String_o *)v52,
    (const MethodInfo_2DFFC54 *)Method_System_Collections_Generic_Dictionary_FuncList_TYPE__BattleLogicFunctionProcess_BaseFunctionTypeProcess__Add__);
  v57 = (BattleLogicFunctionProcess_CommonFieldFunctionProcess_o *)sub_B170CC(
                                                                     BattleLogicFunctionProcess_CommonFieldFunctionProcess_TypeInfo,
                                                                     v53,
                                                                     v54,
                                                                     v55,
                                                                     v56);
  BattleLogicFunctionProcess_CommonFieldFunctionProcess___ctor(v57, 0LL);
  System_Collections_Generic_Dictionary_Voice_BATTLE__string___Add(
    v27,
    29,
    (System_String_o *)v57,
    (const MethodInfo_2DFFC54 *)Method_System_Collections_Generic_Dictionary_FuncList_TYPE__BattleLogicFunctionProcess_BaseFunctionTypeProcess__Add__);
  v62 = (BattleLogicFunctionProcess_CommonFieldFunctionProcess_o *)sub_B170CC(
                                                                     BattleLogicFunctionProcess_CommonFieldFunctionProcess_TypeInfo,
                                                                     v58,
                                                                     v59,
                                                                     v60,
                                                                     v61);
  BattleLogicFunctionProcess_CommonFieldFunctionProcess___ctor(v62, 0LL);
  System_Collections_Generic_Dictionary_Voice_BATTLE__string___Add(
    v27,
    128,
    (System_String_o *)v62,
    (const MethodInfo_2DFFC54 *)Method_System_Collections_Generic_Dictionary_FuncList_TYPE__BattleLogicFunctionProcess_BaseFunctionTypeProcess__Add__);
  v67 = (BattleLogicFunctionProcess_CommonAddStateProcess_o *)sub_B170CC(
                                                                BattleLogicFunctionProcess_CommonAddStateProcess_TypeInfo,
                                                                v63,
                                                                v64,
                                                                v65,
                                                                v66);
  BattleLogicFunctionProcess_CommonAddStateProcess___ctor(v67, 0LL);
  System_Collections_Generic_Dictionary_Voice_BATTLE__string___Add(
    v27,
    130,
    (System_String_o *)v67,
    (const MethodInfo_2DFFC54 *)Method_System_Collections_Generic_Dictionary_FuncList_TYPE__BattleLogicFunctionProcess_BaseFunctionTypeProcess__Add__);
  v72 = (BattleLogicFunctionProcess_ToFieldCommonFunctionProcess_o *)sub_B170CC(
                                                                       BattleLogicFunctionProcess_ToFieldCommonFunctionProcess_TypeInfo,
                                                                       v68,
                                                                       v69,
                                                                       v70,
                                                                       v71);
  BattleLogicFunctionProcess_ToFieldCommonFunctionProcess___ctor(v72, 0LL);
  System_Collections_Generic_Dictionary_Voice_BATTLE__string___Add(
    v27,
    131,
    (System_String_o *)v72,
    (const MethodInfo_2DFFC54 *)Method_System_Collections_Generic_Dictionary_FuncList_TYPE__BattleLogicFunctionProcess_BaseFunctionTypeProcess__Add__);
  this->fields.dicFuncProcess = (struct System_Collections_Generic_Dictionary_FuncList_TYPE__BattleLogicFunctionProcess_BaseFunctionTypeProcess__o *)v27;
  sub_B16F98(
    (BattleServantConfConponent_o *)&this->fields.dicFuncProcess,
    (System_Int32_array **)v27,
    v73,
    v74,
    v75,
    v76,
    v77,
    v78);
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


BattleActionData_o *__fastcall BattleLogicFunction__AbsorbNpPoint(
        BattleLogicFunction_o *this,
        BattleActionData_o *mainAction,
        BattleLogicFunctionProcess_FunctionTargetCheck_o *funcTarget,
        NpGaugeAbsorbResult_o *result,
        const MethodInfo *method)
{
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
  __int64 v21; // x3
  __int64 v22; // x4
  System_Collections_Generic_List_VoiceCondType_Type__o *v23; // x25
  DataVals_array *DependDataValsArray; // x0
  __int64 v25; // x1
  __int64 v26; // x2
  __int64 v27; // x8
  unsigned __int64 v28; // x9
  int v29; // w10
  DataVals_o *v30; // x26
  struct BaseNpGaugeConvert_o *Convert_k__BackingField; // x0
  const MethodInfo *v32; // x4
  System_Collections_Generic_IEnumerable_BattleLogicFunctionProcess_FunctionTargetCheck__o *DependFuncTargets; // x0
  System_Collections_Generic_IEnumerable_BattleLogicFunctionProcess_FunctionTargetCheck__c *klass; // x8
  System_Collections_Generic_IEnumerable_BattleLogicFunctionProcess_FunctionTargetCheck__o *v35; // x25
  unsigned __int64 v36; // x10
  int32_t *p_offset; // x11
  __int64 p_method; // x0
  __int64 v39; // x25
  __int64 v40; // x8
  unsigned __int64 v41; // x10
  int *v42; // x11
  __int64 v43; // x0
  __int64 v44; // x8
  unsigned __int64 v45; // x10
  int *v46; // x11
  __int64 v47; // x0
  __int64 v48; // x0
  __int64 v49; // x27
  int32_t v50; // w2
  const MethodInfo *v51; // x6
  int32_t v52; // w27
  BattleActionData_o *v53; // x0
  int32_t v54; // w28
  int32_t funcIndex; // w28
  bool IsCommandSideEffect; // w0
  const MethodInfo *v57; // x7
  BattleActionData_o *NoEffectObject; // x1
  int v59; // w10
  __int64 v60; // x8
  int v61; // w27
  unsigned __int64 v62; // x10
  int *v63; // x11
  __int64 v64; // x0
  DataVals_array *v66; // [xsp+0h] [xbp-80h]
  int v67; // [xsp+Ch] [xbp-74h]
  unsigned __int64 v68; // [xsp+10h] [xbp-70h]
  _DWORD v70[1]; // [xsp+20h] [xbp-60h]
  int v71; // [xsp+24h] [xbp-5Ch]
  int32_t diffNp; // [xsp+2Ch] [xbp-54h] BYREF

  if ( (byte_40FCDF8 & 1) == 0 )
  {
    sub_B16FFC(&BattleActionData_TypeInfo, mainAction);
    sub_B16FFC(&System_IDisposable_TypeInfo, v8);
    sub_B16FFC(&System_Collections_Generic_IEnumerable_BattleLogicFunctionProcess_FunctionTargetCheck__TypeInfo, v9);
    sub_B16FFC(&System_Collections_Generic_IEnumerator_BattleLogicFunctionProcess_FunctionTargetCheck__TypeInfo, v10);
    sub_B16FFC(&System_Collections_IEnumerator_TypeInfo, v11);
    sub_B16FFC(&Method_System_Collections_Generic_List_FuncList_TYPE__Add__, v12);
    sub_B16FFC(&Method_System_Collections_Generic_List_FuncList_TYPE___ctor__, v13);
    sub_B16FFC(&System_Collections_Generic_List_FuncList_TYPE__TypeInfo, v14);
    byte_40FCDF8 = 1;
  }
  diffNp = 0;
  v71 = 0;
  if ( !funcTarget )
    goto LABEL_65;
  funcUnit_k__BackingField = funcTarget->fields._funcUnit_k__BackingField;
  if ( !funcUnit_k__BackingField )
    goto LABEL_65;
  procArg_k__BackingField = funcUnit_k__BackingField->fields._procArg_k__BackingField;
  dataVals_k__BackingField = funcUnit_k__BackingField->fields._dataVals_k__BackingField;
  v18 = (BattleActionData_o *)sub_B170CC(BattleActionData_TypeInfo, mainAction, funcTarget, result, method);
  BattleActionData___ctor(v18, 0LL);
  v23 = (System_Collections_Generic_List_VoiceCondType_Type__o *)sub_B170CC(
                                                                   System_Collections_Generic_List_FuncList_TYPE__TypeInfo,
                                                                   v19,
                                                                   v20,
                                                                   v21,
                                                                   v22);
  System_Collections_Generic_List_VoiceCondType_Type____ctor(
    v23,
    (const MethodInfo_2F1276C *)Method_System_Collections_Generic_List_FuncList_TYPE___ctor__);
  if ( !v23 )
    goto LABEL_65;
  System_Collections_Generic_List_VoiceCondType_Type___Add(
    v23,
    8,
    (const MethodInfo_2F134C8 *)Method_System_Collections_Generic_List_FuncList_TYPE__Add__);
  if ( !dataVals_k__BackingField )
    goto LABEL_65;
  DependDataValsArray = DataVals__GetDependDataValsArray(
                          dataVals_k__BackingField,
                          (System_Collections_Generic_List_FuncList_TYPE__o *)v23,
                          0,
                          0LL);
  if ( !DependDataValsArray )
    goto LABEL_65;
  v27 = *(_QWORD *)&DependDataValsArray->max_length;
  if ( (int)v27 >= 1 )
  {
    v28 = 0LL;
    v29 = 0;
    v66 = DependDataValsArray;
    while ( 1 )
    {
      if ( v28 >= (unsigned int)v27 )
      {
        sub_B17100(DependDataValsArray, v25, v26);
        sub_B170A0();
      }
      v30 = DependDataValsArray->m_Items[v28];
      diffNp = 0;
      if ( !result )
        break;
      Convert_k__BackingField = result->fields._Convert_k__BackingField;
      v67 = v29;
      v68 = v28;
      if ( !Convert_k__BackingField )
        break;
      ((void (__fastcall *)(struct BaseNpGaugeConvert_o *, DataVals_o *, Il2CppMethodPointer))Convert_k__BackingField->klass->vtable._5_Init.method)(
        Convert_k__BackingField,
        v30,
        Convert_k__BackingField->klass->vtable._6_TurnToPoint.methodPtr);
      DependFuncTargets = BattleLogicFunction__GetDependFuncTargets(this, procArg_k__BackingField, mainAction, v30, v32);
      if ( !DependFuncTargets )
        break;
      klass = DependFuncTargets->klass;
      v35 = DependFuncTargets;
      if ( *(_WORD *)&DependFuncTargets->klass->_2.bitflags1 )
      {
        v36 = 0LL;
        p_offset = &klass->_1.interfaceOffsets->offset;
        while ( *((System_Collections_Generic_IEnumerable_BattleLogicFunctionProcess_FunctionTargetCheck__c **)p_offset
                - 1) != System_Collections_Generic_IEnumerable_BattleLogicFunctionProcess_FunctionTargetCheck__TypeInfo )
        {
          ++v36;
          p_offset += 4;
          if ( v36 >= *(unsigned __int16 *)&DependFuncTargets->klass->_2.bitflags1 )
            goto LABEL_25;
        }
        p_method = (__int64)&klass->vtable[*p_offset].method;
      }
      else
      {
LABEL_25:
        p_method = sub_AAFEF8(
                     DependFuncTargets,
                     System_Collections_Generic_IEnumerable_BattleLogicFunctionProcess_FunctionTargetCheck__TypeInfo,
                     0LL);
      }
      v39 = (*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerable_BattleLogicFunctionProcess_FunctionTargetCheck__o *, _QWORD))p_method)(
              v35,
              *(_QWORD *)(p_method + 8));
      if ( !v39 )
        sub_B170D4();
      while ( 1 )
      {
        v40 = *(_QWORD *)v39;
        if ( *(_WORD *)(*(_QWORD *)v39 + 298LL) )
        {
          v41 = 0LL;
          v42 = (int *)(*(_QWORD *)(v40 + 176) + 8LL);
          while ( *((System_Collections_IEnumerator_c **)v42 - 1) != System_Collections_IEnumerator_TypeInfo )
          {
            ++v41;
            v42 += 4;
            if ( v41 >= *(unsigned __int16 *)(*(_QWORD *)v39 + 298LL) )
              goto LABEL_32;
          }
          v43 = v40 + 16LL * *v42 + 312;
        }
        else
        {
LABEL_32:
          v43 = sub_AAFEF8(v39, System_Collections_IEnumerator_TypeInfo, 0LL);
        }
        if ( ((*(__int64 (__fastcall **)(__int64, _QWORD))v43)(v39, *(_QWORD *)(v43 + 8)) & 1) == 0 )
          break;
        v44 = *(_QWORD *)v39;
        if ( *(_WORD *)(*(_QWORD *)v39 + 298LL) )
        {
          v45 = 0LL;
          v46 = (int *)(*(_QWORD *)(v44 + 176) + 8LL);
          while ( *((System_Collections_Generic_IEnumerator_BattleLogicFunctionProcess_FunctionTargetCheck__c **)v46 - 1) != System_Collections_Generic_IEnumerator_BattleLogicFunctionProcess_FunctionTargetCheck__TypeInfo )
          {
            ++v45;
            v46 += 4;
            if ( v45 >= *(unsigned __int16 *)(*(_QWORD *)v39 + 298LL) )
              goto LABEL_39;
          }
          v47 = v44 + 16LL * *v46 + 312;
        }
        else
        {
LABEL_39:
          v47 = sub_AAFEF8(
                  v39,
                  System_Collections_Generic_IEnumerator_BattleLogicFunctionProcess_FunctionTargetCheck__TypeInfo,
                  0LL);
        }
        v48 = (*(__int64 (__fastcall **)(__int64, _QWORD))v47)(v39, *(_QWORD *)(v47 + 8));
        v49 = v48;
        if ( !v48 )
          sub_B170D4();
        if ( ((*(__int64 (__fastcall **)(__int64, BattleActionData_o *, _QWORD))(*(_QWORD *)v48 + 392LL))(
                v48,
                mainAction,
                *(_QWORD *)(*(_QWORD *)v48 + 400LL)) & 1) != 0 )
        {
          if ( !mainAction )
            sub_B170D4();
          v52 = *(_DWORD *)(v49 + 32);
          v53 = BattleLogicFunction__functionLossNp(this, procArg_k__BackingField, v50, v52, v30, &diffNp, v51);
          v54 = diffNp;
          if ( diffNp < 1 )
          {
            if ( v53 )
            {
              if ( !v30 )
                sub_B170D4();
              if ( !procArg_k__BackingField )
                sub_B170D4();
              funcIndex = v30->fields.funcIndex;
              IsCommandSideEffect = BattleLogicFunction_ProcListInArgs__get_IsCommandSideEffect(
                                      procArg_k__BackingField,
                                      0LL);
              NoEffectObject = BattleLogicFunction__getNoEffectObject(
                                 this,
                                 v52,
                                 funcIndex,
                                 v30,
                                 IsCommandSideEffect,
                                 0LL,
                                 0LL,
                                 v57);
              if ( !v18 )
                sub_B170D4();
              BattleActionData__addAction(v18, NoEffectObject, 0LL);
            }
          }
          else
          {
            if ( !v18 )
              sub_B170D4();
            BattleActionData__addAction(v18, v53, 0LL);
            NpGaugeAbsorbResult__AddPoint(result, v54, 0LL);
          }
        }
      }
      v70[v67] = 229;
      v59 = ++v71;
      v60 = *(_QWORD *)v39;
      v61 = v59;
      if ( *(_WORD *)(*(_QWORD *)v39 + 298LL) )
      {
        v62 = 0LL;
        v63 = (int *)(*(_QWORD *)(v60 + 176) + 8LL);
        while ( *((System_IDisposable_c **)v63 - 1) != System_IDisposable_TypeInfo )
        {
          ++v62;
          v63 += 4;
          if ( v62 >= *(unsigned __int16 *)(*(_QWORD *)v39 + 298LL) )
            goto LABEL_57;
        }
        v64 = v60 + 16LL * *v63 + 312;
      }
      else
      {
LABEL_57:
        v64 = sub_AAFEF8(v39, System_IDisposable_TypeInfo, 0LL);
      }
      (*(void (__fastcall **)(__int64, _QWORD))v64)(v39, *(_QWORD *)(v64 + 8));
      v29 = v61;
      if ( v61 && v70[v61 - 1] == 229 )
      {
        v29 = v61 - 1;
        v71 = v61 - 1;
      }
      DependDataValsArray = v66;
      LODWORD(v27) = v66->max_length;
      v28 = v68 + 1;
      if ( (__int64)(v68 + 1) >= (int)v27 )
        return v18;
    }
LABEL_65:
    sub_B170D4();
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
  __int64 v20; // x3
  __int64 v21; // x4
  System_Collections_Generic_List_VoiceCondType_Type__o *v22; // x25
  DataVals_array *DependDataValsArray; // x0
  __int64 v24; // x1
  __int64 v25; // x2
  __int64 v26; // x8
  unsigned __int64 v27; // x9
  int v28; // w10
  DataVals_o *v29; // x26
  struct BaseNpGaugeConvert_o *Convert_k__BackingField; // x0
  const MethodInfo *v31; // x4
  System_Collections_Generic_IEnumerable_BattleLogicFunctionProcess_FunctionTargetCheck__o *DependFuncTargets; // x0
  System_Collections_Generic_IEnumerable_BattleLogicFunctionProcess_FunctionTargetCheck__c *klass; // x8
  System_Collections_Generic_IEnumerable_BattleLogicFunctionProcess_FunctionTargetCheck__o *v34; // x25
  unsigned __int64 v35; // x10
  int32_t *p_offset; // x11
  __int64 p_method; // x0
  __int64 v38; // x25
  __int64 v39; // x8
  unsigned __int64 v40; // x10
  int *v41; // x11
  __int64 v42; // x0
  __int64 v43; // x8
  unsigned __int64 v44; // x10
  int *v45; // x11
  __int64 v46; // x0
  __int64 v47; // x0
  __int64 v48; // x27
  int32_t v49; // w27
  FunctionEntity_o *funcEnt; // x28
  int32_t funcIndex; // w24
  bool IsCommandSideEffect; // w0
  const MethodInfo *v53; // x7
  BattleActionData_o *v54; // x1
  int v55; // w10
  __int64 v56; // x8
  int v57; // w24
  unsigned __int64 v58; // x10
  int *v59; // x11
  __int64 v60; // x0
  DataVals_array *v62; // [xsp+8h] [xbp-88h]
  unsigned __int64 v63; // [xsp+10h] [xbp-80h]
  int v64; // [xsp+1Ch] [xbp-74h]
  _DWORD v67[1]; // [xsp+30h] [xbp-60h]
  int v68; // [xsp+34h] [xbp-5Ch]
  int32_t absorptionCount; // [xsp+3Ch] [xbp-54h] BYREF

  if ( (byte_40FCDF7 & 1) == 0 )
  {
    sub_B16FFC(&BattleActionData_TypeInfo, mainAction);
    sub_B16FFC(&System_IDisposable_TypeInfo, v7);
    sub_B16FFC(&System_Collections_Generic_IEnumerable_BattleLogicFunctionProcess_FunctionTargetCheck__TypeInfo, v8);
    sub_B16FFC(&System_Collections_Generic_IEnumerator_BattleLogicFunctionProcess_FunctionTargetCheck__TypeInfo, v9);
    sub_B16FFC(&System_Collections_IEnumerator_TypeInfo, v10);
    sub_B16FFC(&Method_System_Collections_Generic_List_FuncList_TYPE__Add__, v11);
    sub_B16FFC(&Method_System_Collections_Generic_List_FuncList_TYPE___ctor__, v12);
    sub_B16FFC(&System_Collections_Generic_List_FuncList_TYPE__TypeInfo, v13);
    byte_40FCDF7 = 1;
  }
  absorptionCount = 0;
  v68 = 0;
  if ( !funcTarget )
    goto LABEL_59;
  funcUnit_k__BackingField = funcTarget->fields._funcUnit_k__BackingField;
  if ( !funcUnit_k__BackingField )
    goto LABEL_59;
  dataVals_k__BackingField = funcUnit_k__BackingField->fields._dataVals_k__BackingField;
  if ( !dataVals_k__BackingField )
    goto LABEL_59;
  procArg_k__BackingField = funcUnit_k__BackingField->fields._procArg_k__BackingField;
  v17 = (BattleActionData_o *)sub_B170CC(BattleActionData_TypeInfo, mainAction, funcTarget, result, method);
  BattleActionData___ctor(v17, 0LL);
  v22 = (System_Collections_Generic_List_VoiceCondType_Type__o *)sub_B170CC(
                                                                   System_Collections_Generic_List_FuncList_TYPE__TypeInfo,
                                                                   v18,
                                                                   v19,
                                                                   v20,
                                                                   v21);
  System_Collections_Generic_List_VoiceCondType_Type____ctor(
    v22,
    (const MethodInfo_2F1276C *)Method_System_Collections_Generic_List_FuncList_TYPE___ctor__);
  if ( !v22 )
    goto LABEL_59;
  System_Collections_Generic_List_VoiceCondType_Type___Add(
    v22,
    20,
    (const MethodInfo_2F134C8 *)Method_System_Collections_Generic_List_FuncList_TYPE__Add__);
  DependDataValsArray = DataVals__GetDependDataValsArray(
                          dataVals_k__BackingField,
                          (System_Collections_Generic_List_FuncList_TYPE__o *)v22,
                          0,
                          0LL);
  if ( !DependDataValsArray )
    goto LABEL_59;
  v26 = *(_QWORD *)&DependDataValsArray->max_length;
  if ( (int)v26 >= 1 )
  {
    v27 = 0LL;
    v28 = 0;
    v62 = DependDataValsArray;
    while ( 1 )
    {
      if ( v27 >= (unsigned int)v26 )
      {
        sub_B17100(DependDataValsArray, v24, v25);
        sub_B170A0();
      }
      v29 = DependDataValsArray->m_Items[v27];
      absorptionCount = 0;
      if ( !result )
        break;
      Convert_k__BackingField = result->fields._Convert_k__BackingField;
      v64 = v28;
      v63 = v27;
      if ( !Convert_k__BackingField )
        break;
      ((void (__fastcall *)(struct BaseNpGaugeConvert_o *, DataVals_o *, Il2CppMethodPointer))Convert_k__BackingField->klass->vtable._5_Init.method)(
        Convert_k__BackingField,
        v29,
        Convert_k__BackingField->klass->vtable._6_TurnToPoint.methodPtr);
      DependFuncTargets = BattleLogicFunction__GetDependFuncTargets(this, procArg_k__BackingField, mainAction, v29, v31);
      if ( !DependFuncTargets )
        break;
      klass = DependFuncTargets->klass;
      v34 = DependFuncTargets;
      if ( *(_WORD *)&DependFuncTargets->klass->_2.bitflags1 )
      {
        v35 = 0LL;
        p_offset = &klass->_1.interfaceOffsets->offset;
        while ( *((System_Collections_Generic_IEnumerable_BattleLogicFunctionProcess_FunctionTargetCheck__c **)p_offset
                - 1) != System_Collections_Generic_IEnumerable_BattleLogicFunctionProcess_FunctionTargetCheck__TypeInfo )
        {
          ++v35;
          p_offset += 4;
          if ( v35 >= *(unsigned __int16 *)&DependFuncTargets->klass->_2.bitflags1 )
            goto LABEL_23;
        }
        p_method = (__int64)&klass->vtable[*p_offset].method;
      }
      else
      {
LABEL_23:
        p_method = sub_AAFEF8(
                     DependFuncTargets,
                     System_Collections_Generic_IEnumerable_BattleLogicFunctionProcess_FunctionTargetCheck__TypeInfo,
                     0LL);
      }
      v38 = (*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerable_BattleLogicFunctionProcess_FunctionTargetCheck__o *, _QWORD))p_method)(
              v34,
              *(_QWORD *)(p_method + 8));
      if ( !v38 )
        sub_B170D4();
      while ( 1 )
      {
        v39 = *(_QWORD *)v38;
        if ( *(_WORD *)(*(_QWORD *)v38 + 298LL) )
        {
          v40 = 0LL;
          v41 = (int *)(*(_QWORD *)(v39 + 176) + 8LL);
          while ( *((System_Collections_IEnumerator_c **)v41 - 1) != System_Collections_IEnumerator_TypeInfo )
          {
            ++v40;
            v41 += 4;
            if ( v40 >= *(unsigned __int16 *)(*(_QWORD *)v38 + 298LL) )
              goto LABEL_30;
          }
          v42 = v39 + 16LL * *v41 + 312;
        }
        else
        {
LABEL_30:
          v42 = sub_AAFEF8(v38, System_Collections_IEnumerator_TypeInfo, 0LL);
        }
        if ( ((*(__int64 (__fastcall **)(__int64, _QWORD))v42)(v38, *(_QWORD *)(v42 + 8)) & 1) == 0 )
          break;
        v43 = *(_QWORD *)v38;
        if ( *(_WORD *)(*(_QWORD *)v38 + 298LL) )
        {
          v44 = 0LL;
          v45 = (int *)(*(_QWORD *)(v43 + 176) + 8LL);
          while ( *((System_Collections_Generic_IEnumerator_BattleLogicFunctionProcess_FunctionTargetCheck__c **)v45 - 1) != System_Collections_Generic_IEnumerator_BattleLogicFunctionProcess_FunctionTargetCheck__TypeInfo )
          {
            ++v44;
            v45 += 4;
            if ( v44 >= *(unsigned __int16 *)(*(_QWORD *)v38 + 298LL) )
              goto LABEL_37;
          }
          v46 = v43 + 16LL * *v45 + 312;
        }
        else
        {
LABEL_37:
          v46 = sub_AAFEF8(
                  v38,
                  System_Collections_Generic_IEnumerator_BattleLogicFunctionProcess_FunctionTargetCheck__TypeInfo,
                  0LL);
        }
        v47 = (*(__int64 (__fastcall **)(__int64, _QWORD))v46)(v38, *(_QWORD *)(v46 + 8));
        v48 = v47;
        if ( !v47 )
          sub_B170D4();
        if ( ((*(__int64 (__fastcall **)(__int64, BattleActionData_o *, _QWORD))(*(_QWORD *)v47 + 392LL))(
                v47,
                mainAction,
                *(_QWORD *)(*(_QWORD *)v47 + 400LL)) & 1) != 0 )
        {
          if ( !v29 )
            sub_B170D4();
          if ( !procArg_k__BackingField )
            sub_B170D4();
          v49 = *(_DWORD *)(v48 + 32);
          funcEnt = v29->fields.funcEnt;
          funcIndex = v29->fields.funcIndex;
          IsCommandSideEffect = BattleLogicFunction_ProcListInArgs__get_IsCommandSideEffect(
                                  procArg_k__BackingField,
                                  0LL);
          v54 = BattleLogicFunction__functionDelayNpTurn(
                  this,
                  v49,
                  funcEnt,
                  v29,
                  funcIndex,
                  IsCommandSideEffect,
                  &absorptionCount,
                  v53);
          if ( !v17 )
            sub_B170D4();
          BattleActionData__addAction(v17, v54, 0LL);
          if ( absorptionCount >= 1 )
            NpGaugeAbsorbResult__AddTurn(result, absorptionCount, 0LL);
        }
      }
      v67[v64] = 209;
      v55 = ++v68;
      v56 = *(_QWORD *)v38;
      v57 = v55;
      if ( *(_WORD *)(*(_QWORD *)v38 + 298LL) )
      {
        v58 = 0LL;
        v59 = (int *)(*(_QWORD *)(v56 + 176) + 8LL);
        while ( *((System_IDisposable_c **)v59 - 1) != System_IDisposable_TypeInfo )
        {
          ++v58;
          v59 += 4;
          if ( v58 >= *(unsigned __int16 *)(*(_QWORD *)v38 + 298LL) )
            goto LABEL_51;
        }
        v60 = v56 + 16LL * *v59 + 312;
      }
      else
      {
LABEL_51:
        v60 = sub_AAFEF8(v38, System_IDisposable_TypeInfo, 0LL);
      }
      (*(void (__fastcall **)(__int64, _QWORD))v60)(v38, *(_QWORD *)(v60 + 8));
      v28 = v57;
      if ( v57 && v67[v57 - 1] == 209 )
      {
        v28 = v57 - 1;
        v68 = v57 - 1;
      }
      DependDataValsArray = v62;
      LODWORD(v26) = v62->max_length;
      v27 = v63 + 1;
      if ( (__int64)(v63 + 1) >= (int)v26 )
        return v17;
    }
LABEL_59:
    sub_B170D4();
  }
  return v17;
}


void __fastcall BattleLogicFunction__AfterAddedBuffProcess(
        BattleLogicFunction_o *this,
        BattleServantData_o *targetSvtData,
        BuffEntity_o *buffEnt,
        const MethodInfo *method)
{
  UnityEngine_Object_o *logic; // x22
  bool v8; // w0
  BattleActorControl_o *ServantActor; // x22
  struct BattleLogic_o *v10; // x8
  BattlePerformance_o *perf; // x0

  if ( (byte_40FCDD3 & 1) == 0 )
  {
    sub_B16FFC(&UnityEngine_Object_TypeInfo, targetSvtData);
    byte_40FCDD3 = 1;
  }
  if ( !buffEnt )
    goto LABEL_20;
  if ( buffEnt->fields.effectId >= 1 )
  {
    logic = (UnityEngine_Object_o *)this->fields.logic;
    if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    }
    v8 = UnityEngine_Object__op_Inequality(logic, 0LL, 0LL);
    ServantActor = 0LL;
    if ( v8 )
    {
      v10 = this->fields.logic;
      if ( !v10 )
        goto LABEL_20;
      if ( !targetSvtData )
        goto LABEL_20;
      perf = v10->fields.perf;
      if ( !perf )
        goto LABEL_20;
      ServantActor = BattlePerformance__getServantActor(perf, targetSvtData->fields.uniqueId, 0LL);
    }
    if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    }
    if ( UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)ServantActor, 0LL, 0LL) )
    {
      if ( ServantActor )
      {
        BattleActorControl__AddReservedEffectBuffEffectId(ServantActor, buffEnt->fields.effectId, 0LL);
        return;
      }
LABEL_20:
      sub_B170D4();
    }
  }
}


void __fastcall BattleLogicFunction__BehaveLinkageBuffAsFamily(
        BattleLogicFunction_o *this,
        BattleBuffData_BuffData_o *buffData,
        BattleLogicFunctionProcess_FunctionTargetCheck_o *funcTarget,
        const MethodInfo *method)
{
  __int64 v4; // x4
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x1
  __int64 v12; // x1
  __int64 v13; // x22
  System_String_array **v14; // x2
  System_String_array **v15; // x3
  System_Boolean_array **v16; // x4
  System_Int32_array **v17; // x5
  System_Int32_array *v18; // x6
  System_Int32_array *v19; // x7
  __int64 v20; // x8
  BattleData_o *data; // x0
  System_Int32_array **ServantData; // x0
  System_String_array **v23; // x2
  System_String_array **v24; // x3
  System_Boolean_array **v25; // x4
  System_Int32_array **v26; // x5
  System_Int32_array *v27; // x6
  System_Int32_array *v28; // x7
  __int64 v29; // x1
  __int64 v30; // x2
  __int64 v31; // x3
  __int64 v32; // x4
  System_Func_int__int__o *v33; // x20
  System_Collections_Generic_IEnumerable_TSource__o *v34; // x0
  struct System_Int32_array *v35; // x0
  System_String_array **v36; // x2
  System_String_array **v37; // x3
  System_Boolean_array **v38; // x4
  System_Int32_array **v39; // x5
  System_Int32_array *v40; // x6
  System_Int32_array *v41; // x7
  System_Collections_Generic_IEnumerable_TSource__o *v42; // x0
  struct System_Int32_array *v43; // x0
  System_String_array **v44; // x2
  System_String_array **v45; // x3
  System_Boolean_array **v46; // x4
  System_Int32_array **v47; // x5
  System_Int32_array *v48; // x6
  System_Int32_array *v49; // x7

  if ( (byte_40FCDDD & 1) == 0 )
  {
    sub_B16FFC(&Method_System_Linq_Enumerable_Select_int__int___, buffData);
    sub_B16FFC(&Method_System_Linq_Enumerable_ToArray_int___, v8);
    sub_B16FFC(&Method_System_Func_int__int___ctor__, v9);
    sub_B16FFC(&System_Func_int__int__TypeInfo, v10);
    sub_B16FFC(&Method_BattleLogicFunction___c__DisplayClass59_0__BehaveLinkageBuffAsFamily_b__0__, v11);
    sub_B16FFC(&BattleLogicFunction___c__DisplayClass59_0_TypeInfo, v12);
    byte_40FCDDD = 1;
  }
  v13 = sub_B170CC(BattleLogicFunction___c__DisplayClass59_0_TypeInfo, buffData, funcTarget, method, v4);
  BattleLogicFunction___c__DisplayClass59_0___ctor((BattleLogicFunction___c__DisplayClass59_0_o *)v13, 0LL);
  if ( !v13 )
    goto LABEL_13;
  *(_QWORD *)(v13 + 16) = funcTarget;
  sub_B16F98(
    (BattleServantConfConponent_o *)(v13 + 16),
    (System_Int32_array **)funcTarget,
    v14,
    v15,
    v16,
    v17,
    v18,
    v19);
  v20 = *(_QWORD *)(v13 + 16);
  if ( !v20 )
    goto LABEL_13;
  data = this->fields.data;
  if ( !data )
    goto LABEL_13;
  ServantData = (System_Int32_array **)BattleData__getServantData(data, *(_DWORD *)(v20 + 32), 0LL);
  *(_QWORD *)(v13 + 24) = ServantData;
  sub_B16F98((BattleServantConfConponent_o *)(v13 + 24), ServantData, v23, v24, v25, v26, v27, v28);
  if ( !*(_QWORD *)(v13 + 24) )
    return;
  v33 = (System_Func_int__int__o *)sub_B170CC(System_Func_int__int__TypeInfo, v29, v30, v31, v32);
  System_Func_int__int____ctor(
    v33,
    (Il2CppObject *)v13,
    Method_BattleLogicFunction___c__DisplayClass59_0__BehaveLinkageBuffAsFamily_b__0__,
    (const MethodInfo_2B65E70 *)Method_System_Func_int__int___ctor__);
  if ( !buffData )
LABEL_13:
    sub_B170D4();
  if ( !BasicHelper__IsNullOrEmpty((System_Collections_ICollection_o *)buffData->fields.addIndividualty, 0LL) )
  {
    v34 = (System_Collections_Generic_IEnumerable_TSource__o *)System_Linq_Enumerable__Select_int__int_(
                                                                 (System_Collections_Generic_IEnumerable_TSource__o *)buffData->fields.addIndividualty,
                                                                 (System_Func_TSource__TResult__o *)v33,
                                                                 (const MethodInfo_19BF310 *)Method_System_Linq_Enumerable_Select_int__int___);
    v35 = System_Linq_Enumerable__ToArray_int_(
            v34,
            (const MethodInfo_19C4A28 *)Method_System_Linq_Enumerable_ToArray_int___);
    buffData->fields.familyLinkageIds = v35;
    sub_B16F98(
      (BattleServantConfConponent_o *)&buffData->fields.familyLinkageIds,
      (System_Int32_array **)v35,
      v36,
      v37,
      v38,
      v39,
      v40,
      v41);
    BattleBuffData_BuffData__onState(buffData, 0x400000, 0LL);
  }
  if ( !BasicHelper__IsNullOrEmpty((System_Collections_ICollection_o *)buffData->fields.linkageTargetIndividualty, 0LL) )
  {
    v42 = (System_Collections_Generic_IEnumerable_TSource__o *)System_Linq_Enumerable__Select_int__int_(
                                                                 (System_Collections_Generic_IEnumerable_TSource__o *)buffData->fields.linkageTargetIndividualty,
                                                                 (System_Func_TSource__TResult__o *)v33,
                                                                 (const MethodInfo_19BF310 *)Method_System_Linq_Enumerable_Select_int__int___);
    v43 = System_Linq_Enumerable__ToArray_int_(
            v42,
            (const MethodInfo_19C4A28 *)Method_System_Linq_Enumerable_ToArray_int___);
    buffData->fields.linkageTargetIndividualty = v43;
    sub_B16F98(
      (BattleServantConfConponent_o *)&buffData->fields.linkageTargetIndividualty,
      (System_Int32_array **)v43,
      v44,
      v45,
      v46,
      v47,
      v48,
      v49);
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
    sub_B170D4();
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
    sub_B17100(this, baseVals, actionData);
    sub_B170A0();
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
  __int64 v4; // x4
  __int64 v8; // x1
  struct BattleData_o *data; // x23
  struct BattleFieldEnvironmentData_o *FieldEnvData_k__BackingField; // x21
  int32_t id; // w24
  Generator_BGMFromChangeBGMFunc_o *v12; // x22
  UnityEngine_Object_o *logic; // x20
  BattleLogic_o *v14; // x0
  BattleLogic_o *v15; // x0

  if ( (byte_40FCE09 & 1) == 0 )
  {
    sub_B16FFC(&Generator_BGMFromChangeBGMFunc_TypeInfo, bgmEnt);
    sub_B16FFC(&UnityEngine_Object_TypeInfo, v8);
    byte_40FCE09 = 1;
  }
  data = this->fields.data;
  if ( !data )
    goto LABEL_17;
  FieldEnvData_k__BackingField = data->fields._FieldEnvData_k__BackingField;
  if ( bgmEnt )
  {
    id = bgmEnt->fields.id;
    v12 = (Generator_BGMFromChangeBGMFunc_o *)sub_B170CC(
                                                Generator_BGMFromChangeBGMFunc_TypeInfo,
                                                bgmEnt,
                                                baseVals,
                                                method,
                                                v4);
    Generator_BGMFromChangeBGMFunc___ctor(v12, data, id, baseVals, 1, 0LL);
    if ( !FieldEnvData_k__BackingField )
      goto LABEL_17;
    ((void (__fastcall *)(struct BattleFieldEnvironmentData_o *, Generator_BGMFromChangeBGMFunc_o *, __int64, Il2CppMethodPointer))FieldEnvData_k__BackingField->klass->vtable._6_AddBGM.method)(
      FieldEnvData_k__BackingField,
      v12,
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
  logic = (UnityEngine_Object_o *)this->fields.logic;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( UnityEngine_Object__op_Inequality(logic, 0LL, 0LL) )
  {
    v14 = this->fields.logic;
    if ( v14 )
    {
      BattleLogic__loadBgmName(v14, 0LL, 0LL);
      v15 = this->fields.logic;
      if ( v15 )
      {
        BattleLogic__PlayCurrentBgm(v15, 0.0, 0LL);
        return;
      }
    }
LABEL_17:
    sub_B170D4();
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
  DataManager_o *v18; // x0
  WarQuestSelectionMaster_o *MasterData_WarQuestSelectionMaster; // x0
  struct BattleSkillInfoData_o *skillInfo; // x8
  SkillLvMaster_o *v21; // x22
  int32_t v22; // w0
  struct BattleSkillInfoData_o *v23; // x8
  SkillLvEntity_o *v24; // x22
  WebViewManager_o *Instance; // x0
  WarQuestSelectionMaster_o *v26; // x0
  DataMasterBase_WarMaster__WarEntity__int__o *v27; // x19
  System_Collections_Generic_List_SkillLvEntity_SvtChangeBgm__o *v28; // x0
  BattleData_o *data; // x8
  System_Collections_Generic_List_SkillLvEntity_SvtChangeBgm__o *v30; // x20
  BattleServantData_o *PlayerServantData; // x0
  System_Int32_array *Individualities; // x0
  int size; // w8
  System_Int32_array *v34; // x21
  unsigned int v35; // w24
  SkillLvEntity_SvtChangeBgm_o *v36; // x8
  SkillLvEntity_SvtChangeBgm_o *v37; // x8
  int32_t questId; // w22
  int64_t questPhase; // x23
  bool IsOpen; // w22
  SkillLvEntity_SvtChangeBgm_o *v41; // x8
  __int64 v42; // x9
  WarEntity_o *entity; // [xsp+8h] [xbp-58h] BYREF

  if ( (byte_40FCE08 & 1) == 0 )
  {
    sub_B16FFC(&Method_System_Array_IndexOf_int___, *(_QWORD *)&uniqueID);
    sub_B16FFC(&CondType_TypeInfo, v7);
    sub_B16FFC(&Method_DataManager_GetMasterData_BgmMaster___, v8);
    sub_B16FFC(&Method_DataManager_GetMasterData_SkillLvMaster___, v9);
    sub_B16FFC(&Method_DataMasterBase_BgmMaster__BgmEntity__int__TryGetEntity__, v10);
    sub_B16FFC(&Method_System_Collections_Generic_List_SkillLvEntity_SvtChangeBgm__get_Count__, v11);
    sub_B16FFC(&Method_System_Collections_Generic_List_SkillLvEntity_SvtChangeBgm__get_Item__, v12);
    sub_B16FFC(&Method_SingletonMonoBehaviour_DataManager__getInstance__, v13);
    sub_B16FFC(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v14);
    byte_40FCE08 = 1;
  }
  result = 0LL;
  entity = 0LL;
  if ( uniqueID != -1 && actionData )
  {
    v16 = *((_QWORD *)Method_SingletonMonoBehaviour_DataManager__getInstance__ + 3);
    if ( (*(_BYTE *)(v16 + 306) & 1) == 0 )
      sub_AAFCFC(*((_QWORD *)Method_SingletonMonoBehaviour_DataManager__getInstance__ + 3));
    v17 = **(_QWORD **)(v16 + 192);
    if ( (*(_BYTE *)(v17 + 306) & 1) == 0 )
      sub_AAFCFC(v17);
    v18 = **(DataManager_o ***)(v17 + 184);
    if ( !v18 )
      goto LABEL_42;
    MasterData_WarQuestSelectionMaster = DataManager__GetMasterData_WarQuestSelectionMaster_(
                                           v18,
                                           (const MethodInfo_18C3284 *)Method_DataManager_GetMasterData_SkillLvMaster___);
    skillInfo = actionData->fields.skillInfo;
    if ( !skillInfo )
      goto LABEL_42;
    v21 = (SkillLvMaster_o *)MasterData_WarQuestSelectionMaster;
    v22 = ((__int64 (__fastcall *)(struct BattleSkillInfoData_o *, Il2CppMethodPointer))skillInfo->klass->vtable._5_get_skillId.method)(
            actionData->fields.skillInfo,
            skillInfo->klass->vtable._6_get_IndividualityArray.methodPtr);
    v23 = actionData->fields.skillInfo;
    if ( !v23 )
      goto LABEL_42;
    if ( !v21 )
      goto LABEL_42;
    v24 = SkillLvMaster__GetEntity(v21, v22, v23->fields.skilllv, 0LL);
    Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !Instance )
      goto LABEL_42;
    v26 = DataManager__GetMasterData_WarQuestSelectionMaster_(
            (DataManager_o *)Instance,
            (const MethodInfo_18C3284 *)Method_DataManager_GetMasterData_BgmMaster___);
    if ( !v24 )
      goto LABEL_42;
    v27 = (DataMasterBase_WarMaster__WarEntity__int__o *)v26;
    v28 = SkillLvEntity__GetSvtChangeBgm(v24, 0LL);
    data = this->fields.data;
    if ( !data )
      goto LABEL_42;
    v30 = v28;
    PlayerServantData = BattleData__getPlayerServantData(data, uniqueID, 0LL);
    if ( !PlayerServantData )
      goto LABEL_42;
    Individualities = BattleServantData__getIndividualities(PlayerServantData, 0LL, 0LL);
    if ( !v30 )
      goto LABEL_42;
    size = v30->fields._size;
    if ( size >= 1 )
    {
      v34 = Individualities;
      v35 = 0;
      while ( 1 )
      {
        if ( size <= v35 )
          System_ThrowHelper__ThrowArgumentOutOfRangeException_41329284(0LL);
        v36 = v30->fields._items->m_Items[v35];
        if ( !v36 )
          break;
        if ( System_Array__IndexOf_int_(
               v34,
               v36->fields.svtIndv,
               (const MethodInfo_2045560 *)Method_System_Array_IndexOf_int___) != -1 )
        {
          if ( v30->fields._size <= v35 )
            System_ThrowHelper__ThrowArgumentOutOfRangeException_41329284(0LL);
          v37 = v30->fields._items->m_Items[v35];
          if ( !v37 )
            break;
          questId = v37->fields.questId;
          if ( v30->fields._size <= v35 )
            System_ThrowHelper__ThrowArgumentOutOfRangeException_41329284(0LL);
          questPhase = v37->fields.questPhase;
          if ( (BYTE3(CondType_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !CondType_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(CondType_TypeInfo);
          IsOpen = CondType__IsOpen(46, questId, questPhase, 0, 0LL);
          if ( v30->fields._size <= v35 )
            System_ThrowHelper__ThrowArgumentOutOfRangeException_41329284(0LL);
          v41 = v30->fields._items->m_Items[v35];
          if ( !v41 || !v27 )
            break;
          v42 = 28LL;
          if ( IsOpen )
            v42 = 32LL;
          if ( DataMasterBase_WarMaster__WarEntity__int___TryGetEntity(
                 v27,
                 &entity,
                 *(_DWORD *)((char *)&v41->klass + v42),
                 (const MethodInfo_266F3E4 *)Method_DataMasterBase_BgmMaster__BgmEntity__int__TryGetEntity__) )
          {
            return (BgmEntity_o *)entity;
          }
        }
        size = v30->fields._size;
        if ( (int)++v35 >= size )
          return (BgmEntity_o *)entity;
      }
LABEL_42:
      sub_B170D4();
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
  struct BattleData_o *data; // x8
  struct BattleFieldEnvironmentData_o *FieldEnvData_k__BackingField; // x0
  UnityEngine_Object_o *logic; // x21
  BattleLogic_o *v10; // x0
  struct BattleLogicFunction_FunctionArgument_o *externalArg; // x8
  BattleLogic_o *v12; // x0

  if ( (byte_40FCE0B & 1) == 0 )
  {
    sub_B16FFC(&UnityEngine_Object_TypeInfo, args);
    byte_40FCE0B = 1;
  }
  data = this->fields.data;
  if ( !data )
    goto LABEL_16;
  FieldEnvData_k__BackingField = data->fields._FieldEnvData_k__BackingField;
  if ( !FieldEnvData_k__BackingField )
    goto LABEL_16;
  ((void (__fastcall *)(struct BattleFieldEnvironmentData_o *, Generator_BGM_o *, __int64, Il2CppMethodPointer))FieldEnvData_k__BackingField->klass->vtable._6_AddBGM.method)(
    FieldEnvData_k__BackingField,
    bgmGenerator,
    2LL,
    FieldEnvData_k__BackingField->klass->vtable._7_RemoveAfterResetBGM.methodPtr);
  logic = (UnityEngine_Object_o *)this->fields.logic;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( UnityEngine_Object__op_Inequality(logic, 0LL, 0LL) )
  {
    v10 = this->fields.logic;
    if ( v10 )
    {
      BattleLogic__loadBgmName(v10, 0LL, 0LL);
      if ( args )
      {
        externalArg = args->fields.externalArg;
        if ( externalArg )
        {
          if ( externalArg->fields.isDeckDataLoad )
            return;
          v12 = this->fields.logic;
          if ( v12 )
          {
            BattleLogic__PlayCurrentBgm(v12, 0.0, 0LL);
            return;
          }
        }
      }
    }
LABEL_16:
    sub_B170D4();
  }
}


void __fastcall BattleLogicFunction__FunctionChangeEnemyMasterFace(
        BattleLogicFunction_o *this,
        int32_t faceId,
        const MethodInfo *method)
{
  struct BattleData_o *data; // x8
  BattlePerformance_o *perf; // x0
  struct BattleData_o *v7; // x8

  data = this->fields.data;
  if ( !data )
    goto LABEL_7;
  if ( !data->fields.enemyMasterInfo )
    return;
  perf = data->fields.perf;
  if ( !perf || (BattlePerformance__ChangeEnemyMasterFace(perf, faceId, 0LL), (v7 = this->fields.data) == 0LL) )
LABEL_7:
    sub_B170D4();
  v7->fields.enemyMasterChangedFaceId = faceId;
}


void __fastcall BattleLogicFunction__FunctionLastSkillCopy(
        BattleLogicFunction_o *this,
        BattleActionData_o *actionData,
        DataVals_o *baseVals,
        const MethodInfo *method)
{
  __int64 v4; // x4
  __int64 v8; // x1
  struct BattleData_o *data; // x8
  BattleSkillInfoData_o *v10; // x22
  struct BattleData_o *v11; // x8
  struct BattleSkillInfoData_o *lastUsedPlayerSkillInfo_k__BackingField; // x0
  unsigned int v13; // w0
  struct BattleData_o *v14; // x8
  struct BattleSkillInfoData_o *v15; // x8
  struct BattleData_o *v16; // x8
  struct BattleSkillInfoData_o *v17; // x8
  __int64 v18; // x2
  struct BattleLogic_o *logic; // x8
  BattleLogicSkill_o *logicSkill; // x23
  System_Int32_array *v21; // x0
  __int64 v22; // x1
  System_Int32_array *v23; // x2
  __int64 v24; // x8
  System_Int32_array *v25; // x22
  unsigned __int64 v26; // x24
  struct BattleLogic_o *v27; // x8
  BattleLogicSkill_o *v28; // x0
  BattleActionData_o *v29; // x23
  BattleActionData_o *baseActionData; // [xsp+8h] [xbp-48h] BYREF

  if ( (byte_40FCE0F & 1) == 0 )
  {
    sub_B16FFC(&BattleSkillInfoData_TypeInfo, actionData);
    sub_B16FFC(&int___TypeInfo, v8);
    byte_40FCE0F = 1;
  }
  baseActionData = 0LL;
  data = this->fields.data;
  if ( !data )
    goto LABEL_27;
  if ( !data->fields._lastUsedPlayerSkillInfo_k__BackingField )
    return;
  v10 = (BattleSkillInfoData_o *)sub_B170CC(BattleSkillInfoData_TypeInfo, actionData, baseVals, method, v4);
  BattleSkillInfoData___ctor(v10, 0LL);
  if ( !actionData )
    goto LABEL_27;
  if ( !v10 )
    goto LABEL_27;
  v10->fields.svtUniqueId = actionData->fields.actorId;
  v11 = this->fields.data;
  if ( !v11 )
    goto LABEL_27;
  lastUsedPlayerSkillInfo_k__BackingField = v11->fields._lastUsedPlayerSkillInfo_k__BackingField;
  if ( !lastUsedPlayerSkillInfo_k__BackingField )
    goto LABEL_27;
  v13 = ((__int64 (__fastcall *)(struct BattleSkillInfoData_o *, Il2CppMethodPointer))lastUsedPlayerSkillInfo_k__BackingField->klass->vtable._5_get_skillId.method)(
          lastUsedPlayerSkillInfo_k__BackingField,
          lastUsedPlayerSkillInfo_k__BackingField->klass->vtable._6_get_IndividualityArray.methodPtr);
  ((void (__fastcall *)(BattleSkillInfoData_o *, _QWORD, Il2CppMethodPointer))v10->klass->vtable._4_set_skillId.method)(
    v10,
    v13,
    v10->klass->vtable._5_get_skillId.methodPtr);
  v14 = this->fields.data;
  if ( !v14 )
    goto LABEL_27;
  v15 = v14->fields._lastUsedPlayerSkillInfo_k__BackingField;
  if ( !v15 )
    goto LABEL_27;
  v10->fields.skilllv = v15->fields.skilllv;
  v16 = this->fields.data;
  if ( !v16 )
    goto LABEL_27;
  v17 = v16->fields._lastUsedPlayerSkillInfo_k__BackingField;
  if ( !v17 )
    goto LABEL_27;
  BattleSkillInfoData__UpdateSelectAddIndex(v10, v17->fields._SelectAddIndex_k__BackingField, 0LL);
  logic = this->fields.logic;
  if ( !logic )
    goto LABEL_27;
  logicSkill = logic->fields.logicSkill;
  v21 = (System_Int32_array *)sub_B17014(int___TypeInfo, 1LL, v18);
  if ( !v21 )
    goto LABEL_27;
  v23 = v21;
  if ( !v21->max_length )
    goto LABEL_28;
  v21->m_Items[1] = actionData->fields.actorId;
  if ( !logicSkill
    || (v21 = (System_Int32_array *)BattleLogicSkill__taskSkill(logicSkill, v10, v21, 0LL, 0, 0, 0, 0LL)) == 0LL )
  {
LABEL_27:
    sub_B170D4();
  }
  v24 = *(_QWORD *)&v21->max_length;
  v25 = v21;
  if ( (int)v24 >= 1 )
  {
    v26 = 0LL;
    while ( v26 < (unsigned int)v24 )
    {
      v27 = this->fields.logic;
      if ( !v27 )
        goto LABEL_27;
      v28 = v27->fields.logicSkill;
      if ( !v28 )
        goto LABEL_27;
      v29 = BattleLogicSkill__createSkillData_29250012(
              v28,
              *(BattleLogicTask_o **)&v25->m_Items[2 * v26 + 1],
              1,
              baseVals,
              &baseActionData,
              0LL);
      BattleActionData__addAction(actionData, v29, 0LL);
      if ( v29 )
        actionData->fields.isSuccessSkillCopyFunction = 1;
      LODWORD(v24) = v25->max_length;
      if ( (__int64)++v26 >= (int)v24 )
        return;
    }
LABEL_28:
    sub_B17100(v21, v22, v23);
    sub_B170A0();
  }
}


BattleActionData_o *__fastcall BattleLogicFunction__FunctionMoveToLastSubMember(
        BattleLogicFunction_o *this,
        BattleServantData_o *targetServantData,
        FunctionEntity_o *funcEnt,
        DataVals_o *baseVals,
        int32_t funcIndex,
        const MethodInfo *method)
{
  __int64 v10; // x1
  __int64 v11; // x1
  __int64 v12; // x1
  BattleData_o *data; // x0
  _BOOL4 isEnemy; // w26
  int32_t ServantIndex; // w22
  BattleData_o *v16; // x0
  BattleData_o *v17; // x0
  BattleData_o *v18; // x0
  BattleData_o *v19; // x0
  BattleData_o *v20; // x24
  __int64 v21; // x1
  __int64 v22; // x2
  __int64 v23; // x3
  __int64 v24; // x4
  MoveToSubMemberWaveTurnEvent_o *v25; // x25
  bool v26; // w24
  int32_t v27; // w0
  int32_t uniqueId; // w25
  int32_t v29; // w26
  __int64 v30; // x1
  __int64 v31; // x2
  __int64 v32; // x3
  __int64 v33; // x4
  RestockServantLogicByMoveToSubMember_o *v34; // x23
  BattleData_o *v35; // x0
  __int64 v36; // x1
  __int64 v37; // x2
  __int64 v38; // x3
  __int64 v39; // x4
  BattleActionData_o *v40; // x21

  if ( (byte_40FCDED & 1) == 0 )
  {
    sub_B16FFC(&Method_BasicHelper_IndexValue_int____66807072, targetServantData);
    sub_B16FFC(&BattleActionData_TypeInfo, v10);
    sub_B16FFC(&MoveToSubMemberWaveTurnEvent_TypeInfo, v11);
    sub_B16FFC(&RestockServantLogicByMoveToSubMember_TypeInfo, v12);
    byte_40FCDED = 1;
  }
  if ( !targetServantData )
    goto LABEL_13;
  data = this->fields.data;
  if ( !data )
    goto LABEL_13;
  isEnemy = targetServantData->fields.isEnemy;
  ServantIndex = BattleData__getServantIndex(
                   data,
                   targetServantData->fields.isEnemy,
                   targetServantData->fields.uniqueId,
                   0LL);
  targetServantData->fields.deckIndex = ServantIndex;
  BattleServantData__resetParamObject(targetServantData, 0LL);
  v16 = this->fields.data;
  if ( !v16 )
    goto LABEL_13;
  BattleData__RemoveEntry(v16, targetServantData, 0LL);
  v17 = this->fields.data;
  if ( !v17 )
    goto LABEL_13;
  BattleData__SubBuffFromPT_18778888(v17, targetServantData, 0LL);
  v18 = this->fields.data;
  if ( !v18 )
    goto LABEL_13;
  BattleData__SubBuffExitSvt(v18, targetServantData, 0LL);
  v19 = this->fields.data;
  if ( !v19 )
    goto LABEL_13;
  targetServantData->fields.deckIndex = BattleData__GetSubServantUsableDeckIndex(v19, isEnemy, 0LL);
  v20 = this->fields.data;
  v25 = (MoveToSubMemberWaveTurnEvent_o *)sub_B170CC(MoveToSubMemberWaveTurnEvent_TypeInfo, v21, v22, v23, v24);
  MoveToSubMemberWaveTurnEvent___ctor(v25, v20, 0LL);
  BattleServantData__RegisterWaveTurnEvent(targetServantData, (ServantWaveTurnEvent_o *)v25, 0LL);
  if ( !funcEnt )
    goto LABEL_13;
  v26 = isEnemy;
  v27 = BasicHelper__IndexValue_int_(
          funcEnt->fields.vals,
          0,
          0,
          (const MethodInfo_18B81B4 *)Method_BasicHelper_IndexValue_int____66807072);
  uniqueId = targetServantData->fields.uniqueId;
  v29 = v27;
  v34 = (RestockServantLogicByMoveToSubMember_o *)sub_B170CC(
                                                    RestockServantLogicByMoveToSubMember_TypeInfo,
                                                    v30,
                                                    v31,
                                                    v32,
                                                    v33);
  RestockServantLogicByMoveToSubMember___ctor(v34, ServantIndex, v26, v29, uniqueId, 0LL);
  v35 = this->fields.data;
  if ( !v35
    || (BattleData__AppendRestockServantLogic(v35, (RestockServantLogic_o *)v34, 0LL),
        v40 = (BattleActionData_o *)sub_B170CC(BattleActionData_TypeInfo, v36, v37, v38, v39),
        BattleActionData___ctor(v40, 0LL),
        !v40) )
  {
LABEL_13:
    sub_B170D4();
  }
  BattleActionData__AddNewMoveToSubMember(v40, ServantIndex, targetServantData->fields.uniqueId, funcIndex, 1, 0LL);
  return v40;
}


void __fastcall BattleLogicFunction__FunctionQuickChangeBG(
        BattleLogicFunction_o *this,
        BattleLogicFunction_ProcListInArgs_o *args,
        Generator_Background_o *bgGenerator,
        const MethodInfo *method)
{
  struct BattleData_o *data; // x8
  struct BattleFieldEnvironmentData_o *FieldEnvData_k__BackingField; // x0
  struct BattleData_o *v9; // x8
  BattlePerformance_o *perf; // x21
  float x; // s8
  float y; // s9
  float z; // s10
  UnityEngine_Object_o *logic; // x21
  struct BattleLogicFunction_FunctionArgument_o *externalArg; // x8
  BattleLogic_o *v16; // x0
  UnityEngine_Vector3_o zero; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v18; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v19; // 0:s3.4,4:s4.4,8:s5.4

  if ( (byte_40FCE0C & 1) == 0 )
  {
    sub_B16FFC(&UnityEngine_Object_TypeInfo, args);
    byte_40FCE0C = 1;
  }
  data = this->fields.data;
  if ( !data )
    goto LABEL_18;
  FieldEnvData_k__BackingField = data->fields._FieldEnvData_k__BackingField;
  if ( !FieldEnvData_k__BackingField )
    goto LABEL_18;
  ((void (__fastcall *)(struct BattleFieldEnvironmentData_o *, Generator_Background_o *, __int64, Il2CppMethodPointer))FieldEnvData_k__BackingField->klass->vtable._5_AddBackground.method)(
    FieldEnvData_k__BackingField,
    bgGenerator,
    2LL,
    FieldEnvData_k__BackingField->klass->vtable._6_AddBGM.methodPtr);
  v9 = this->fields.data;
  if ( v9 )
  {
    perf = v9->fields.perf;
    if ( perf )
    {
      zero = UnityEngine_Vector3__get_zero(0LL);
      x = zero.fields.x;
      y = zero.fields.y;
      z = zero.fields.z;
      v19 = UnityEngine_Vector3__get_zero(0LL);
      v18.fields.x = x;
      v18.fields.y = y;
      v18.fields.z = z;
      BattlePerformance__ChangeBg(perf, v18, v19, 0, 0, 0LL, 0LL);
    }
  }
  logic = (UnityEngine_Object_o *)this->fields.logic;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( UnityEngine_Object__op_Inequality(logic, 0LL, 0LL) )
  {
    if ( args )
    {
      externalArg = args->fields.externalArg;
      if ( externalArg )
      {
        if ( externalArg->fields.isDeckDataLoad )
          return;
        v16 = this->fields.logic;
        if ( v16 )
        {
          BattleLogic__PlayCurrentBgm(v16, 0.0, 0LL);
          return;
        }
      }
    }
LABEL_18:
    sub_B170D4();
  }
}


void __fastcall BattleLogicFunction__FunctionSubFieldBuff(
        BattleLogicFunction_o *this,
        BattleLogicFunction_ProcListInArgs_o *args,
        BattleActionData_o *mainAction,
        BattleLogicFunctionProcess_FunctionTargetCheck_o *funcTarget,
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
  struct BattleLogicFunctionProcess_FunctionUnitCheck_o *funcUnit_k__BackingField; // x20
  int32_t v21; // w0
  DataVals_o *dataVals_k__BackingField; // x20
  int32_t targetId_k__BackingField; // w25
  FunctionEntity_o *funcEnt; // x27
  int32_t v25; // w24
  __int64 v26; // x0
  struct BattleData_o *data; // x8
  BattleActionData_BuffData_o *v28; // x26
  BattleFieldEnvironmentData_o *FieldEnvData_k__BackingField; // x0
  RemovedBuffInfo_o *v30; // x0
  struct System_Collections_Generic_List_BattleBuffData_BuffData__o *RemovedAllBuffList_k__BackingField; // x23
  int size; // w28
  _BOOL8 IsCommandSideEffect; // x0
  const MethodInfo *v34; // x6
  const MethodInfo *v35; // x7
  bool v36; // w4
  BattleActionData_BuffData_o *FunctionObject; // x22
  __int64 v38; // x1
  __int64 v39; // x2
  __int64 v40; // x3
  __int64 v41; // x4
  System_Func_WarBoardManager_WarBoardOnboardSkillTarget__WarBoardPieceData__o *v42; // x24
  System_Collections_Generic_IEnumerable_TSource__o *v43; // x0
  System_Int32_array **v44; // x0
  System_String_array **v45; // x2
  System_String_array **v46; // x3
  System_Boolean_array **v47; // x4
  System_Int32_array **v48; // x5
  System_Int32_array *v49; // x6
  System_Int32_array *v50; // x7
  __int64 v51; // x1
  __int64 v52; // x2
  __int64 v53; // x3
  __int64 v54; // x4
  BattleLogicFunction___c_c *v55; // x0
  struct BattleLogicFunction___c_StaticFields *static_fields; // x8
  System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *_9__112_1; // x21
  Il2CppObject *v58; // x24
  struct BattleLogicFunction___c_StaticFields *v59; // x0
  System_String_array **v60; // x2
  System_String_array **v61; // x3
  System_Boolean_array **v62; // x4
  System_Int32_array **v63; // x5
  System_Int32_array *v64; // x6
  System_Int32_array *v65; // x7
  __int64 v66; // x1
  __int64 v67; // x2
  __int64 v68; // x3
  __int64 v69; // x4
  BattleActionEffect_UpdateAllInfo_o *v70; // x21
  System_String_array **v71; // x2
  System_String_array **v72; // x3
  System_Boolean_array **v73; // x4
  System_Int32_array **v74; // x5
  System_Int32_array *v75; // x6
  System_Int32_array *v76; // x7
  BattleActionData_o *NoEffectObject; // x0

  if ( (byte_40FCE0E & 1) == 0 )
  {
    sub_B16FFC(&Method_BasicHelper_Any_BattleBuffData_BuffData___, args);
    sub_B16FFC(&Method_BattleLogicFunction__FunctionSubFieldBuff_b__112_0__, v9);
    sub_B16FFC(&Method_System_Linq_Enumerable_Select_BattleBuffData_BuffData__BattleBuffData_BuffData___, v10);
    sub_B16FFC(&Method_System_Linq_Enumerable_ToList_BattleBuffData_BuffData___, v11);
    sub_B16FFC(&Method_System_Func_BattleBuffData_BuffData__bool___ctor__, v12);
    sub_B16FFC(&Method_System_Func_BattleBuffData_BuffData__BattleBuffData_BuffData___ctor__, v13);
    sub_B16FFC(&System_Func_BattleBuffData_BuffData__bool__TypeInfo, v14);
    sub_B16FFC(&System_Func_BattleBuffData_BuffData__BattleBuffData_BuffData__TypeInfo, v15);
    sub_B16FFC(&Method_System_Collections_Generic_List_BattleBuffData_BuffData__get_Count__, v16);
    sub_B16FFC(&Method_BattleLogicFunction___c__FunctionSubFieldBuff_b__112_1__, v17);
    sub_B16FFC(&BattleLogicFunction___c_TypeInfo, v18);
    sub_B16FFC(&BattleActionEffect_UpdateAllInfo_TypeInfo, v19);
    byte_40FCE0E = 1;
  }
  if ( !funcTarget )
    goto LABEL_28;
  funcUnit_k__BackingField = funcTarget->fields._funcUnit_k__BackingField;
  if ( !funcUnit_k__BackingField )
    goto LABEL_28;
  v21 = BattleLogicFunctionProcess_FunctionUnitCheck__get_FuncIndex(funcTarget->fields._funcUnit_k__BackingField, 0LL);
  dataVals_k__BackingField = funcUnit_k__BackingField->fields._dataVals_k__BackingField;
  if ( !dataVals_k__BackingField )
    goto LABEL_28;
  targetId_k__BackingField = funcTarget->fields._targetId_k__BackingField;
  funcEnt = dataVals_k__BackingField->fields.funcEnt;
  v25 = v21;
  v26 = ((__int64 (__fastcall *)(BattleLogicFunctionProcess_FunctionTargetCheck_o *, Il2CppMethodPointer))funcTarget->klass->vtable._7_MakeActionBuffData.method)(
          funcTarget,
          funcTarget->klass->vtable._8_AddBuff.methodPtr);
  data = this->fields.data;
  if ( !data )
    goto LABEL_28;
  if ( !funcEnt )
    goto LABEL_28;
  v28 = (BattleActionData_BuffData_o *)v26;
  FieldEnvData_k__BackingField = data->fields._FieldEnvData_k__BackingField;
  if ( !FieldEnvData_k__BackingField )
    goto LABEL_28;
  v30 = BattleFieldEnvironmentData__SubBuffFromIndividuality(
          FieldEnvData_k__BackingField,
          funcEnt->fields.vals,
          dataVals_k__BackingField,
          0LL);
  if ( !v30 )
    goto LABEL_28;
  RemovedAllBuffList_k__BackingField = v30->fields._RemovedAllBuffList_k__BackingField;
  if ( !RemovedAllBuffList_k__BackingField || !args )
    goto LABEL_28;
  size = RemovedAllBuffList_k__BackingField->fields._size;
  IsCommandSideEffect = BattleLogicFunction_ProcListInArgs__get_IsCommandSideEffect(args, 0LL);
  v36 = IsCommandSideEffect;
  if ( size > 0 )
  {
    FunctionObject = BattleLogicFunction__getFunctionObject(
                       (BattleLogicFunction_o *)IsCommandSideEffect,
                       funcEnt,
                       targetId_k__BackingField,
                       v25,
                       v36,
                       v28,
                       v34);
    v42 = (System_Func_WarBoardManager_WarBoardOnboardSkillTarget__WarBoardPieceData__o *)sub_B170CC(
                                                                                            System_Func_BattleBuffData_BuffData__BattleBuffData_BuffData__TypeInfo,
                                                                                            v38,
                                                                                            v39,
                                                                                            v40,
                                                                                            v41);
    System_Func_WarBoardManager_WarBoardOnboardSkillTarget__WarBoardPieceData____ctor(
      v42,
      (Il2CppObject *)this,
      Method_BattleLogicFunction__FunctionSubFieldBuff_b__112_0__,
      (const MethodInfo_2B6C28C *)Method_System_Func_BattleBuffData_BuffData__BattleBuffData_BuffData___ctor__);
    v43 = (System_Collections_Generic_IEnumerable_TSource__o *)System_Linq_Enumerable__Select_WarBoardManager_WarBoardOnboardSkillTarget__WarBoardPieceData_(
                                                                 (System_Collections_Generic_IEnumerable_TSource__o *)RemovedAllBuffList_k__BackingField,
                                                                 (System_Func_TSource__TResult__o *)v42,
                                                                 (const MethodInfo_19C0B1C *)Method_System_Linq_Enumerable_Select_BattleBuffData_BuffData__BattleBuffData_BuffData___);
    v44 = (System_Int32_array **)System_Linq_Enumerable__ToList_WarBoardManager_WarBoardOnboardSkillTarget_(
                                   v43,
                                   (const MethodInfo_19C7AA0 *)Method_System_Linq_Enumerable_ToList_BattleBuffData_BuffData___);
    if ( FunctionObject )
    {
      FunctionObject->fields.removeBuffList = (struct System_Collections_Generic_List_BattleBuffData_BuffData__o *)v44;
      sub_B16F98(
        (BattleServantConfConponent_o *)&FunctionObject->fields.removeBuffList,
        v44,
        v45,
        v46,
        v47,
        v48,
        v49,
        v50);
      v55 = BattleLogicFunction___c_TypeInfo;
      if ( (BYTE3(BattleLogicFunction___c_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !BattleLogicFunction___c_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(BattleLogicFunction___c_TypeInfo);
        v55 = BattleLogicFunction___c_TypeInfo;
      }
      static_fields = v55->static_fields;
      _9__112_1 = (System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *)static_fields->__9__112_1;
      if ( !_9__112_1 )
      {
        if ( (BYTE3(v55->vtable._0_Equals.methodPtr) & 4) != 0 && !v55->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(v55);
          static_fields = BattleLogicFunction___c_TypeInfo->static_fields;
        }
        v58 = (Il2CppObject *)static_fields->__9;
        _9__112_1 = (System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *)sub_B170CC(
                                                                                         System_Func_BattleBuffData_BuffData__bool__TypeInfo,
                                                                                         v51,
                                                                                         v52,
                                                                                         v53,
                                                                                         v54);
        System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool____ctor(
          _9__112_1,
          v58,
          Method_BattleLogicFunction___c__FunctionSubFieldBuff_b__112_1__,
          (const MethodInfo_2B6AB40 *)Method_System_Func_BattleBuffData_BuffData__bool___ctor__);
        v59 = BattleLogicFunction___c_TypeInfo->static_fields;
        v59->__9__112_1 = (struct System_Func_BattleBuffData_BuffData__bool__o *)_9__112_1;
        sub_B16F98(
          (BattleServantConfConponent_o *)&v59->__9__112_1,
          (System_Int32_array **)_9__112_1,
          v60,
          v61,
          v62,
          v63,
          v64,
          v65);
      }
      if ( BasicHelper__Any_WarBoardData_SquareRangeSearch_(
             (System_Collections_Generic_List_T__o *)RemovedAllBuffList_k__BackingField,
             (System_Func_T__bool__o *)_9__112_1,
             (const MethodInfo_18B5FC8 *)Method_BasicHelper_Any_BattleBuffData_BuffData___) )
      {
        v70 = (BattleActionEffect_UpdateAllInfo_o *)sub_B170CC(
                                                      BattleActionEffect_UpdateAllInfo_TypeInfo,
                                                      v66,
                                                      v67,
                                                      v68,
                                                      v69);
        BattleActionEffect_UpdateAllInfo___ctor(v70, 0LL);
        FunctionObject->fields.EffectProc = (struct BattleActionEffect_Base_o *)v70;
        sub_B16F98(
          (BattleServantConfConponent_o *)&FunctionObject->fields.EffectProc,
          (System_Int32_array **)v70,
          v71,
          v72,
          v73,
          v74,
          v75,
          v76);
      }
      if ( mainAction )
      {
        BattleActionData__setBuffData(mainAction, FunctionObject, dataVals_k__BackingField, 0LL);
        return;
      }
    }
LABEL_28:
    sub_B170D4();
  }
  NoEffectObject = BattleLogicFunction__getNoEffectObject(
                     this,
                     targetId_k__BackingField,
                     v25,
                     dataVals_k__BackingField,
                     v36,
                     0LL,
                     v28,
                     v35);
  if ( !mainAction )
    goto LABEL_28;
  BattleActionData__addAction(mainAction, NoEffectObject, 0LL);
}


void __fastcall BattleLogicFunction__FunctionToFieldAddChangeFieldBuff(
        BattleLogicFunction_o *this,
        BattleLogicFunction_ProcListInArgs_o *args,
        BattleActionData_o *mainAction,
        BattleLogicFunctionProcess_FunctionTargetCheck_o *funcTarget,
        bool isTreasureDvc,
        const MethodInfo *method)
{
  __int64 v11; // x1
  struct BattleLogicFunctionProcess_FunctionUnitCheck_o *funcUnit_k__BackingField; // x8
  DataVals_o *dataVals_k__BackingField; // x24
  bool isParam; // w0
  const MethodInfo *v15; // x5
  BattleBuffData_BuffData_o *v16; // x0
  __int64 v17; // x1
  __int64 v18; // x2
  __int64 v19; // x3
  __int64 v20; // x4
  BattleBuffData_FieldChangeData_o *fieldChangeData; // x22
  struct BattleData_o *data; // x8
  Generator_BGFromFieldChangeBGBuff_o *v23; // x21
  const MethodInfo *v24; // x3
  BattleData_o *v25; // x21
  Generator_BGMFromFieldChangeBGBuff_o *v26; // x23
  const MethodInfo *v27; // x3

  if ( (byte_40FCE0D & 1) == 0 )
  {
    sub_B16FFC(&Generator_BGFromFieldChangeBGBuff_TypeInfo, args);
    sub_B16FFC(&Generator_BGMFromFieldChangeBGBuff_TypeInfo, v11);
    byte_40FCE0D = 1;
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
  v16 = BattleLogicFunction__functionAddState(this, mainAction, funcTarget, args, isParam, v15);
  if ( !v16 )
    goto LABEL_17;
  fieldChangeData = v16->fields.fieldChangeData;
  if ( isTreasureDvc )
  {
    data = this->fields.data;
    if ( data && mainAction )
    {
      BattleActionData__SetAfterChangeField(
        mainAction,
        fieldChangeData,
        dataVals_k__BackingField,
        data->fields._FieldEnvData_k__BackingField,
        0LL);
      return;
    }
LABEL_17:
    sub_B170D4();
  }
  if ( !fieldChangeData )
    goto LABEL_17;
  if ( fieldChangeData->fields.bgId >= 1 )
  {
    v23 = (Generator_BGFromFieldChangeBGBuff_o *)sub_B170CC(
                                                   Generator_BGFromFieldChangeBGBuff_TypeInfo,
                                                   v17,
                                                   v18,
                                                   v19,
                                                   v20);
    Generator_BGFromFieldChangeBGBuff___ctor(v23, fieldChangeData, 0LL);
    BattleLogicFunction__FunctionQuickChangeBG(this, args, (Generator_Background_o *)v23, v24);
  }
  if ( fieldChangeData->fields.bgmId >= 1 )
  {
    v25 = this->fields.data;
    v26 = (Generator_BGMFromFieldChangeBGBuff_o *)sub_B170CC(
                                                    Generator_BGMFromFieldChangeBGBuff_TypeInfo,
                                                    v17,
                                                    v18,
                                                    v19,
                                                    v20);
    Generator_BGMFromFieldChangeBGBuff___ctor(v26, v25, fieldChangeData, 0LL);
    BattleLogicFunction__FunctionChangeBgm(this, args, (Generator_BGM_o *)v26, v27);
  }
}


void __fastcall BattleLogicFunction__FunctionUpdateEntryMaxCountEachTurn(
        BattleLogicFunction_o *this,
        DataVals_o *baseVals,
        const MethodInfo *method)
{
  struct BattleData_o *data; // x19
  int32_t Value; // w0

  if ( !baseVals || (data = this->fields.data, Value = DataVals__GetValue(baseVals, 0LL), !data) )
    sub_B170D4();
  data->fields._EnemyEntryMaxCountEachTurn_k__BackingField = Value;
}


void __fastcall BattleLogicFunction__FunctionUpdateEntryPositions(
        BattleLogicFunction_o *this,
        DataVals_o *baseVals,
        const MethodInfo *method)
{
  System_Int32_array *ParamArray; // x0
  System_Int32_array *v6; // x0

  if ( !baseVals
    || (ParamArray = DataVals__GetParamArray(baseVals, 81, 0LL), !this->fields.data)
    || (BattleData__UpdateTargetPosEnemyAppearValid(this->fields.data, ParamArray, 1, 0LL),
        v6 = DataVals__GetParamArray(baseVals, 82, 0LL),
        !this->fields.data) )
  {
    sub_B170D4();
  }
  BattleData__UpdateTargetPosEnemyAppearValid(this->fields.data, v6, 0, 0LL);
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

  if ( (byte_40FCDE2 & 1) == 0 )
  {
    sub_B16FFC(&System_Math_TypeInfo, dataVals);
    byte_40FCDE2 = 1;
  }
  if ( !dataVals )
    goto LABEL_11;
  if ( !DataVals__isParam(dataVals, 116, 0LL) )
    return healPoint;
  if ( !targetSvtData )
LABEL_11:
    sub_B170D4();
  MaxHp = BattleServantData__getMaxHp(targetSvtData, 0LL);
  v9 = ((__int64 (__fastcall *)(BattleServantData_o *, Il2CppMethodPointer))targetSvtData->klass->vtable._13_get_resultHp.method)(
         targetSvtData,
         targetSvtData->klass->vtable._14_set_resultHp.methodPtr);
  if ( (BYTE3(System_Math_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !System_Math_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(System_Math_TypeInfo);
  return System_Math__Min_44418752(healPoint, MaxHp - v9, 0LL);
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
  __int64 v8; // x2
  struct System_Int32_array *vals; // x8

  if ( (byte_40FCDC8 & 1) == 0 )
  {
    sub_B16FFC(&Method_DataManager_GetMaster_BuffMaster___, funcEnt);
    sub_B16FFC(&DataManager_TypeInfo, v4);
    sub_B16FFC(&Method_DataMasterBase_BuffMaster__BuffEntity__int__GetEntity__, v5);
    byte_40FCDC8 = 1;
  }
  if ( (BYTE3(DataManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_WarQuestSelectionMaster = (DataMasterBase_WarMaster__WarEntity__int__o *)DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_18C3224 *)Method_DataManager_GetMaster_BuffMaster___);
  if ( !funcEnt )
    goto LABEL_11;
  vals = funcEnt->fields.vals;
  if ( !vals )
    goto LABEL_11;
  if ( !vals->max_length )
  {
    sub_B17100(Master_WarQuestSelectionMaster, v7, v8);
    sub_B170A0();
  }
  if ( !Master_WarQuestSelectionMaster )
LABEL_11:
    sub_B170D4();
  return (BuffEntity_o *)DataMasterBase_WarMaster__WarEntity__int___GetEntity(
                           Master_WarQuestSelectionMaster,
                           vals->m_Items[1],
                           (const MethodInfo_266F388 *)Method_DataMasterBase_BuffMaster__BuffEntity__int__GetEntity__);
}


System_Int32_array *__fastcall BattleLogicFunction__GetBuffTargetCardIndexArray(
        BattleLogicFunction_o *this,
        DataVals_o *baseVals,
        BattleServantData_o *targetServant,
        const MethodInfo *method)
{
  __int64 v4; // x4
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
  System_Collections_Generic_List_int__o *v20; // x19
  int32_t CardIndex; // w20
  int32_t CardIndividuality; // w0
  System_Int32_array *IdArrayFromIndividuality; // x21
  WebViewManager_o *Instance; // x0
  WarQuestSelectionMaster_o *MasterData_WarQuestSelectionMaster; // x0
  DataMasterBase_WarMaster__WarEntity__int__o *v26; // x23
  __int64 v27; // x24
  __int64 v28; // x25
  int32_t v29; // w0
  WarEntity_o *Entity; // x0
  __int64 v31; // x1
  __int64 v32; // x2
  __int64 v33; // x3
  __int64 v34; // x4
  _DWORD *v35; // x24
  System_Collections_Generic_List_int__o *v36; // x23
  BattleBuffData_o *BuffData; // x0
  void *v38; // x0
  __int64 v39; // x1
  __int64 v40; // x2
  System_Collections_Generic_IEnumerable_TSource__o *v41; // x0
  __int64 v42; // x8
  unsigned __int64 v43; // x25
  __int64 v44; // x8
  int32_t v45; // w20
  unsigned __int64 v46; // x22
  int32_t size; // w0
  int32_t v48; // w20
  int32_t v49; // w1
  const MethodInfo_2F104F0 *v50; // x2
  int32_t Next; // w0
  int32_t v53; // [xsp+Ch] [xbp-54h]
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v54; // 0:x0.16

  if ( (byte_40FCE04 & 1) == 0 )
  {
    sub_B16FFC(&Method_DataManager_GetMasterData_ServantMaster___, baseVals);
    sub_B16FFC(&Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__, v7);
    sub_B16FFC(&Method_System_Linq_Enumerable_Repeat_int___, v8);
    sub_B16FFC(&Method_System_Linq_Enumerable_ToArray_int___, v9);
    sub_B16FFC(&Method_System_Collections_Generic_List_int__AddRange__, v10);
    sub_B16FFC(&Method_System_Collections_Generic_List_int__Add__, v11);
    sub_B16FFC(&Method_System_Collections_Generic_List_int__Contains__, v12);
    sub_B16FFC(&Method_System_Collections_Generic_List_int__ToArray__, v13);
    sub_B16FFC(&Method_System_Collections_Generic_List_int___ctor__, v14);
    sub_B16FFC(&Method_System_Collections_Generic_List_int__get_Count__, v15);
    sub_B16FFC(&Method_System_Collections_Generic_List_int__get_Item__, v16);
    sub_B16FFC(&System_Collections_Generic_List_int__TypeInfo, v17);
    sub_B16FFC(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v18);
    sub_B16FFC(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v19);
    byte_40FCE04 = 1;
  }
  v20 = (System_Collections_Generic_List_int__o *)sub_B170CC(
                                                    System_Collections_Generic_List_int__TypeInfo,
                                                    baseVals,
                                                    targetServant,
                                                    method,
                                                    v4);
  System_Collections_Generic_List_int____ctor(
    v20,
    (const MethodInfo_2F0F794 *)Method_System_Collections_Generic_List_int___ctor__);
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
      if ( !v20 )
        goto LABEL_52;
      v49 = CardIndex - 1;
    }
    else
    {
      Next = BattleRandom__getNext(5, 0LL);
      if ( !v20 )
        goto LABEL_52;
      v49 = Next;
    }
    v50 = (const MethodInfo_2F104F0 *)Method_System_Collections_Generic_List_int__Add__;
    goto LABEL_49;
  }
  IdArrayFromIndividuality = CardMaster__getIdArrayFromIndividuality(CardIndividuality, 0LL);
  Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_52;
  MasterData_WarQuestSelectionMaster = DataManager__GetMasterData_WarQuestSelectionMaster_(
                                         (DataManager_o *)Instance,
                                         (const MethodInfo_18C3284 *)Method_DataManager_GetMasterData_ServantMaster___);
  if ( !targetServant )
    goto LABEL_52;
  v26 = (DataMasterBase_WarMaster__WarEntity__int__o *)MasterData_WarQuestSelectionMaster;
  v28 = *(_QWORD *)&targetServant->fields.svtId.fields.currentCryptoKey;
  v27 = *(_QWORD *)&targetServant->fields.svtId.fields.fakeValue;
  if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  }
  *(_QWORD *)&v54.fields.currentCryptoKey = v28;
  *(_QWORD *)&v54.fields.fakeValue = v27;
  v29 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44068536(v54, 0LL);
  if ( !v26 )
    goto LABEL_52;
  Entity = DataMasterBase_WarMaster__WarEntity__int___GetEntity(
             v26,
             v29,
             (const MethodInfo_266F388 *)Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
  if ( !Entity )
    goto LABEL_52;
  v35 = *(_DWORD **)&Entity[1].fields.id;
  v36 = (System_Collections_Generic_List_int__o *)sub_B170CC(
                                                    System_Collections_Generic_List_int__TypeInfo,
                                                    v31,
                                                    v32,
                                                    v33,
                                                    v34);
  System_Collections_Generic_List_int____ctor(
    v36,
    (const MethodInfo_2F0F794 *)Method_System_Collections_Generic_List_int___ctor__);
  BuffData = BattleServantData__get_BuffData(targetServant, 0LL);
  if ( !BuffData )
    goto LABEL_52;
  v38 = BattleBuffData__GetCommandCardTypeChangeBuff(BuffData, 0LL);
  v53 = CardIndex;
  if ( v38 )
  {
    if ( !v35 )
      goto LABEL_52;
    v41 = (System_Collections_Generic_IEnumerable_TSource__o *)System_Linq_Enumerable__Repeat_int_(
                                                                 *((_DWORD *)v38 + 7),
                                                                 v35[6],
                                                                 (const MethodInfo_19BDCB0 *)Method_System_Linq_Enumerable_Repeat_int___);
    v38 = System_Linq_Enumerable__ToArray_int_(
            v41,
            (const MethodInfo_19C4A28 *)Method_System_Linq_Enumerable_ToArray_int___);
    v35 = v38;
  }
  if ( !IdArrayFromIndividuality )
    goto LABEL_52;
  v42 = *(_QWORD *)&IdArrayFromIndividuality->max_length;
  if ( (int)v42 >= 1 )
  {
    v43 = 0LL;
    while ( 1 )
    {
      if ( v43 >= (unsigned int)v42 )
        goto LABEL_51;
      if ( !v35 )
        goto LABEL_52;
      v44 = *((_QWORD *)v35 + 3);
      if ( (int)v44 >= 1 )
        break;
LABEL_29:
      LODWORD(v42) = IdArrayFromIndividuality->max_length;
      if ( (__int64)++v43 >= (int)v42 )
        goto LABEL_30;
    }
    v45 = IdArrayFromIndividuality->m_Items[v43 + 1];
    v46 = 0LL;
    while ( v46 < (unsigned int)v44 )
    {
      if ( v45 == v35[v46 + 8] )
      {
        if ( !v36 )
          goto LABEL_52;
        v38 = (void *)System_Collections_Generic_List_int___Contains(
                        v36,
                        v46,
                        (const MethodInfo_2F10944 *)Method_System_Collections_Generic_List_int__Contains__);
        if ( ((unsigned __int8)v38 & 1) == 0 )
          System_Collections_Generic_List_int___Add(
            v36,
            v46,
            (const MethodInfo_2F104F0 *)Method_System_Collections_Generic_List_int__Add__);
      }
      LODWORD(v44) = v35[6];
      if ( (__int64)++v46 >= (int)v44 )
        goto LABEL_29;
    }
LABEL_51:
    sub_B17100(v38, v39, v40);
    sub_B170A0();
  }
LABEL_30:
  if ( !v36 )
    goto LABEL_52;
  size = v36->fields._size;
  if ( size < 1 )
  {
LABEL_38:
    if ( v20 )
      return System_Collections_Generic_List_int___ToArray(
               v20,
               (const MethodInfo_2F125FC *)Method_System_Collections_Generic_List_int__ToArray__);
    goto LABEL_52;
  }
  if ( !v53 )
  {
    v48 = BattleRandom__getNext(size, 0LL);
    if ( v36->fields._size <= (unsigned int)v48 )
      System_ThrowHelper__ThrowArgumentOutOfRangeException_41329284(0LL);
    if ( v20 )
    {
      v49 = v36->fields._items->m_Items[v48 + 1];
      v50 = (const MethodInfo_2F104F0 *)Method_System_Collections_Generic_List_int__Add__;
LABEL_49:
      System_Collections_Generic_List_int___Add(v20, v49, v50);
      return System_Collections_Generic_List_int___ToArray(
               v20,
               (const MethodInfo_2F125FC *)Method_System_Collections_Generic_List_int__ToArray__);
    }
LABEL_52:
    sub_B170D4();
  }
  if ( !v20 )
    goto LABEL_52;
  System_Collections_Generic_List_int___AddRange(
    v20,
    (System_Collections_Generic_IEnumerable_T__o *)v36,
    (const MethodInfo_2F10744 *)Method_System_Collections_Generic_List_int__AddRange__);
  return System_Collections_Generic_List_int___ToArray(
           v20,
           (const MethodInfo_2F125FC *)Method_System_Collections_Generic_List_int__ToArray__);
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
  System_Collections_Generic_IEnumerable_BattleLogicFunctionProcess_FunctionTargetCheck__o **p_funcTargetArray_k__BackingField; // x8
  _QWORD **v12; // x20
  __int64 v13; // x19
  __int16 v14; // w8
  __int64 v15; // x19
  __int64 v16; // x19
  __int64 v17; // x19

  if ( (byte_40FCDD5 & 1) == 0 )
  {
    sub_B16FFC(&Method_System_Array_Empty_BattleLogicFunctionProcess_FunctionTargetCheck___, args);
    sub_B16FFC(&BattleLogicFunctionProcess_DependFunctionUnitCheck_TypeInfo, v9);
    byte_40FCDD5 = 1;
  }
  v10 = (BattleLogicFunctionProcess_DependFunctionUnitCheck_o *)sub_B170CC(
                                                                  BattleLogicFunctionProcess_DependFunctionUnitCheck_TypeInfo,
                                                                  args,
                                                                  mainAction,
                                                                  dataVal,
                                                                  method);
  BattleLogicFunctionProcess_DependFunctionUnitCheck___ctor(v10, this, args, dataVal, 0LL);
  if ( !v10 )
    sub_B170D4();
  if ( BattleLogicFunctionProcess_FunctionUnitCheck__checkCondtion(
         (BattleLogicFunctionProcess_FunctionUnitCheck_o *)v10,
         mainAction,
         0LL) )
  {
    p_funcTargetArray_k__BackingField = (System_Collections_Generic_IEnumerable_BattleLogicFunctionProcess_FunctionTargetCheck__o **)&v10->fields._funcTargetArray_k__BackingField;
  }
  else
  {
    v12 = (_QWORD **)Method_System_Array_Empty_BattleLogicFunctionProcess_FunctionTargetCheck___;
    v13 = **((_QWORD **)Method_System_Array_Empty_BattleLogicFunctionProcess_FunctionTargetCheck___ + 6);
    v14 = *(_WORD *)(v13 + 306);
    if ( (v14 & 1) == 0 )
    {
      sub_AAFCFC(**((_QWORD **)Method_System_Array_Empty_BattleLogicFunctionProcess_FunctionTargetCheck___ + 6));
      v14 = *(_WORD *)(v13 + 306);
    }
    if ( (v14 & 0x400) != 0 )
    {
      v15 = *v12[6];
      if ( (*(_BYTE *)(v15 + 306) & 1) == 0 )
        sub_AAFCFC(*v12[6]);
      if ( !*(_DWORD *)(v15 + 224) )
      {
        v16 = *v12[6];
        if ( (*(_BYTE *)(v16 + 306) & 1) == 0 )
          sub_AAFCFC(*v12[6]);
        j_il2cpp_runtime_class_init_0(v16);
      }
    }
    v17 = *v12[6];
    if ( (*(_BYTE *)(v17 + 306) & 1) == 0 )
      sub_AAFCFC(*v12[6]);
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
    sub_B170D4();
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
  __int64 v20; // x3
  __int64 v21; // x4
  System_Collections_Generic_List_VoiceCondType_Type__o *v22; // x24
  __int64 v23; // x1
  __int64 v24; // x2
  __int64 v25; // x3
  __int64 v26; // x4
  RemovedBuffInfoGroup_o *v27; // x22
  DataVals_array *DependDataValsArray; // x0
  __int64 v29; // x1
  __int64 v30; // x2
  const MethodInfo *v31; // x4
  __int64 v32; // x8
  unsigned __int64 v33; // x9
  int v34; // w26
  DataVals_o *v35; // x25
  System_Collections_Generic_IEnumerable_BattleLogicFunctionProcess_FunctionTargetCheck__o *DependFuncTargets; // x0
  System_Collections_Generic_IEnumerable_BattleLogicFunctionProcess_FunctionTargetCheck__c *klass; // x8
  System_Collections_Generic_IEnumerable_BattleLogicFunctionProcess_FunctionTargetCheck__o *v38; // x24
  unsigned __int64 v39; // x10
  int32_t *p_offset; // x11
  __int64 p_method; // x0
  __int64 v42; // x24
  __int64 v43; // x8
  unsigned __int64 v44; // x10
  int *v45; // x11
  __int64 v46; // x0
  __int64 v47; // x8
  unsigned __int64 v48; // x10
  int *v49; // x11
  __int64 v50; // x0
  __int64 v51; // x0
  __int64 v52; // x26
  int32_t v53; // w26
  FunctionEntity_o *funcEnt; // x27
  int32_t funcIndex; // w28
  bool IsCommandSideEffect; // w0
  BattleActionData_o *v57; // x1
  __int64 v58; // x8
  unsigned __int64 v59; // x10
  int *v60; // x11
  __int64 v61; // x0
  int v62; // w8
  unsigned __int64 v63; // x9
  const MethodInfo *v65; // [xsp+0h] [xbp-90h]
  DataVals_array *v66; // [xsp+10h] [xbp-80h]
  int v67; // [xsp+1Ch] [xbp-74h]
  unsigned __int64 v68; // [xsp+20h] [xbp-70h]
  _DWORD v70[1]; // [xsp+30h] [xbp-60h]
  int v71; // [xsp+34h] [xbp-5Ch]
  RemovedBuffInfo_o *subBuffInfo; // [xsp+38h] [xbp-58h] BYREF

  if ( (byte_40FCE06 & 1) == 0 )
  {
    sub_B16FFC(&System_IDisposable_TypeInfo, procArg);
    sub_B16FFC(&System_Collections_Generic_IEnumerable_BattleLogicFunctionProcess_FunctionTargetCheck__TypeInfo, v8);
    sub_B16FFC(&System_Collections_Generic_IEnumerator_BattleLogicFunctionProcess_FunctionTargetCheck__TypeInfo, v9);
    sub_B16FFC(&System_Collections_IEnumerator_TypeInfo, v10);
    sub_B16FFC(&Method_System_Collections_Generic_List_FuncList_TYPE__Add__, v11);
    sub_B16FFC(&Method_System_Collections_Generic_List_FuncList_TYPE___ctor__, v12);
    sub_B16FFC(&Method_System_Collections_Generic_List_BattleBuffData_BuffData___ctor__, v13);
    sub_B16FFC(&System_Collections_Generic_List_FuncList_TYPE__TypeInfo, v14);
    sub_B16FFC(&System_Collections_Generic_List_BattleBuffData_BuffData__TypeInfo, v15);
    sub_B16FFC(&RemovedBuffInfoGroup_TypeInfo, v16);
    byte_40FCE06 = 1;
  }
  subBuffInfo = 0LL;
  v71 = 0;
  v17 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B170CC(
                                                                                                  System_Collections_Generic_List_BattleBuffData_BuffData__TypeInfo,
                                                                                                  procArg,
                                                                                                  mainAction,
                                                                                                  baseVals,
                                                                                                  method);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v17,
    (const MethodInfo_2F25014 *)Method_System_Collections_Generic_List_BattleBuffData_BuffData___ctor__);
  v22 = (System_Collections_Generic_List_VoiceCondType_Type__o *)sub_B170CC(
                                                                   System_Collections_Generic_List_FuncList_TYPE__TypeInfo,
                                                                   v18,
                                                                   v19,
                                                                   v20,
                                                                   v21);
  System_Collections_Generic_List_VoiceCondType_Type____ctor(
    v22,
    (const MethodInfo_2F1276C *)Method_System_Collections_Generic_List_FuncList_TYPE___ctor__);
  if ( !v22 )
    goto LABEL_57;
  System_Collections_Generic_List_VoiceCondType_Type___Add(
    v22,
    2,
    (const MethodInfo_2F134C8 *)Method_System_Collections_Generic_List_FuncList_TYPE__Add__);
  v27 = (RemovedBuffInfoGroup_o *)sub_B170CC(RemovedBuffInfoGroup_TypeInfo, v23, v24, v25, v26);
  RemovedBuffInfoGroup___ctor(v27, 0LL);
  if ( !baseVals )
    goto LABEL_57;
  DependDataValsArray = DataVals__GetDependDataValsArray(
                          baseVals,
                          (System_Collections_Generic_List_FuncList_TYPE__o *)v22,
                          1,
                          0LL);
  if ( !DependDataValsArray )
    goto LABEL_57;
  v32 = *(_QWORD *)&DependDataValsArray->max_length;
  if ( (int)v32 >= 1 )
  {
    v33 = 0LL;
    v34 = 0;
    v66 = DependDataValsArray;
    while ( 1 )
    {
      v67 = v34;
      if ( v33 >= (unsigned int)v32 )
      {
        sub_B17100(DependDataValsArray, v29, v30);
        sub_B170A0();
      }
      v35 = DependDataValsArray->m_Items[v33];
      v68 = v33;
      DependFuncTargets = BattleLogicFunction__GetDependFuncTargets(this, procArg, mainAction, v35, v31);
      if ( !DependFuncTargets )
        break;
      klass = DependFuncTargets->klass;
      v38 = DependFuncTargets;
      if ( *(_WORD *)&DependFuncTargets->klass->_2.bitflags1 )
      {
        v39 = 0LL;
        p_offset = &klass->_1.interfaceOffsets->offset;
        while ( *((System_Collections_Generic_IEnumerable_BattleLogicFunctionProcess_FunctionTargetCheck__c **)p_offset
                - 1) != System_Collections_Generic_IEnumerable_BattleLogicFunctionProcess_FunctionTargetCheck__TypeInfo )
        {
          ++v39;
          p_offset += 4;
          if ( v39 >= *(unsigned __int16 *)&DependFuncTargets->klass->_2.bitflags1 )
            goto LABEL_20;
        }
        p_method = (__int64)&klass->vtable[*p_offset].method;
      }
      else
      {
LABEL_20:
        p_method = sub_AAFEF8(
                     DependFuncTargets,
                     System_Collections_Generic_IEnumerable_BattleLogicFunctionProcess_FunctionTargetCheck__TypeInfo,
                     0LL);
      }
      v42 = (*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerable_BattleLogicFunctionProcess_FunctionTargetCheck__o *, _QWORD))p_method)(
              v38,
              *(_QWORD *)(p_method + 8));
      if ( !v42 )
        sub_B170D4();
      while ( 1 )
      {
        v43 = *(_QWORD *)v42;
        if ( *(_WORD *)(*(_QWORD *)v42 + 298LL) )
        {
          v44 = 0LL;
          v45 = (int *)(*(_QWORD *)(v43 + 176) + 8LL);
          while ( *((System_Collections_IEnumerator_c **)v45 - 1) != System_Collections_IEnumerator_TypeInfo )
          {
            ++v44;
            v45 += 4;
            if ( v44 >= *(unsigned __int16 *)(*(_QWORD *)v42 + 298LL) )
              goto LABEL_27;
          }
          v46 = v43 + 16LL * *v45 + 312;
        }
        else
        {
LABEL_27:
          v46 = sub_AAFEF8(v42, System_Collections_IEnumerator_TypeInfo, 0LL);
        }
        if ( ((*(__int64 (__fastcall **)(__int64, _QWORD))v46)(v42, *(_QWORD *)(v46 + 8)) & 1) == 0 )
          break;
        v47 = *(_QWORD *)v42;
        if ( *(_WORD *)(*(_QWORD *)v42 + 298LL) )
        {
          v48 = 0LL;
          v49 = (int *)(*(_QWORD *)(v47 + 176) + 8LL);
          while ( *((System_Collections_Generic_IEnumerator_BattleLogicFunctionProcess_FunctionTargetCheck__c **)v49 - 1) != System_Collections_Generic_IEnumerator_BattleLogicFunctionProcess_FunctionTargetCheck__TypeInfo )
          {
            ++v48;
            v49 += 4;
            if ( v48 >= *(unsigned __int16 *)(*(_QWORD *)v42 + 298LL) )
              goto LABEL_34;
          }
          v50 = v47 + 16LL * *v49 + 312;
        }
        else
        {
LABEL_34:
          v50 = sub_AAFEF8(
                  v42,
                  System_Collections_Generic_IEnumerator_BattleLogicFunctionProcess_FunctionTargetCheck__TypeInfo,
                  0LL);
        }
        v51 = (*(__int64 (__fastcall **)(__int64, _QWORD))v50)(v42, *(_QWORD *)(v50 + 8));
        v52 = v51;
        if ( !v51 )
          sub_B170D4();
        if ( ((*(__int64 (__fastcall **)(__int64, BattleActionData_o *, _QWORD))(*(_QWORD *)v51 + 392LL))(
                v51,
                mainAction,
                *(_QWORD *)(*(_QWORD *)v51 + 400LL)) & 1) != 0 )
        {
          if ( !v35 )
            sub_B170D4();
          if ( !procArg )
            sub_B170D4();
          v53 = *(_DWORD *)(v52 + 32);
          funcEnt = v35->fields.funcEnt;
          funcIndex = v35->fields.funcIndex;
          IsCommandSideEffect = BattleLogicFunction_ProcListInArgs__get_IsCommandSideEffect(procArg, 0LL);
          v57 = BattleLogicFunction__functionSubState(
                  this,
                  v53,
                  funcEnt,
                  v35,
                  funcIndex,
                  IsCommandSideEffect,
                  &subBuffInfo,
                  procArg,
                  v65);
          if ( !mainAction )
            sub_B170D4();
          BattleActionData__addAction(mainAction, v57, 0LL);
          if ( !v27 )
            sub_B170D4();
          RemovedBuffInfoGroup__Register(v27, v53, subBuffInfo, 0LL);
        }
      }
      v70[v67] = 165;
      v34 = ++v71;
      v58 = *(_QWORD *)v42;
      if ( *(_WORD *)(*(_QWORD *)v42 + 298LL) )
      {
        v59 = 0LL;
        v60 = (int *)(*(_QWORD *)(v58 + 176) + 8LL);
        while ( *((System_IDisposable_c **)v60 - 1) != System_IDisposable_TypeInfo )
        {
          ++v59;
          v60 += 4;
          if ( v59 >= *(unsigned __int16 *)(*(_QWORD *)v42 + 298LL) )
            goto LABEL_48;
        }
        v61 = v58 + 16LL * *v60 + 312;
      }
      else
      {
LABEL_48:
        v61 = sub_AAFEF8(v42, System_IDisposable_TypeInfo, 0LL);
      }
      (*(void (__fastcall **)(__int64, _QWORD))v61)(v42, *(_QWORD *)(v61 + 8));
      if ( v34 )
      {
        v62 = v34 - 1;
        DependDataValsArray = v66;
        v63 = v68;
        if ( v70[v34 - 1] == 165 )
        {
          --v34;
          v71 = v62;
        }
      }
      else
      {
        DependDataValsArray = v66;
        v63 = v68;
      }
      LODWORD(v32) = DependDataValsArray->max_length;
      v33 = v63 + 1;
      if ( (__int64)v33 >= (int)v32 )
        return v27;
    }
LABEL_57:
    sub_B170D4();
  }
  return v27;
}


bool __fastcall BattleLogicFunction__IsAddStateFieldFlag(
        BattleLogicFunction_o *this,
        BattleBuffData_BuffData_o *buffData,
        const MethodInfo *method)
{
  UnityEngine_Object_o *logic; // x21
  BattleLogic_o *v6; // x0

  if ( (byte_40FCDD4 & 1) == 0 )
  {
    sub_B16FFC(&UnityEngine_Object_TypeInfo, buffData);
    byte_40FCDD4 = 1;
  }
  if ( !buffData )
    goto LABEL_12;
  if ( buffData->fields.onfiledUniqueId >= 1 )
  {
    logic = (UnityEngine_Object_o *)this->fields.logic;
    if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    }
    if ( UnityEngine_Object__op_Inequality(logic, 0LL, 0LL) )
    {
      v6 = this->fields.logic;
      if ( v6 )
        return BattleLogic__checkInField(v6, buffData->fields.onfiledUniqueId, 0LL);
LABEL_12:
      sub_B170D4();
    }
  }
  return 1;
}


bool __fastcall BattleLogicFunction__IsSafeWin(BattleLogicFunction_o *this, int32_t targetId, const MethodInfo *method)
{
  BattleData_o *data; // x0
  BattleServantData_o *ServantData; // x8
  BattleData_o *v6; // x0

  data = this->fields.data;
  if ( !data )
    goto LABEL_8;
  ServantData = BattleData__getServantData(data, targetId, 0LL);
  if ( !ServantData )
    return (unsigned __int8)ServantData & 1;
  v6 = this->fields.data;
  if ( !v6 )
LABEL_8:
    sub_B170D4();
  if ( ServantData->fields.isEnemy )
    LOBYTE(ServantData) = ~BattleData__IsAliveLogic(v6, 0, 0LL);
  else
    LOBYTE(ServantData) = !BattleData__checkBattleContinuationEnemys(v6, 0LL);
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
  ServantEntity_o *svtdata; // x0
  ConstantStrMaster_o *Master_WarQuestSelectionMaster; // x0
  struct BattleData_o *v16; // x8
  int32_t currentTurn; // w8
  bool v18; // w10
  bool v19; // w10

  if ( (byte_40FCDD7 & 1) == 0 )
  {
    sub_B16FFC(&Method_DataManager_GetMaster_ConstantStrMaster___, *(_QWORD *)&targetId);
    sub_B16FFC(&DataManager_TypeInfo, v9);
    sub_B16FFC(&StringLiteral_5776, v10);
    byte_40FCDD7 = 1;
  }
  data = this->fields.data;
  if ( !data )
    goto LABEL_32;
  ServantData = BattleData__getServantData(data, targetId, 0LL);
  if ( !ServantData )
    return (char)ServantData;
  v13 = ServantData;
  svtdata = ServantData->fields.svtdata;
  if ( !svtdata )
    goto LABEL_32;
  if ( !ServantEntity__IsSvtBuffTurnExtend(svtdata, 0LL) )
  {
LABEL_27:
    LOBYTE(ServantData) = 0;
    return (char)ServantData;
  }
  if ( (BYTE3(DataManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_WarQuestSelectionMaster = (ConstantStrMaster_o *)DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_18C3224 *)Method_DataManager_GetMaster_ConstantStrMaster___);
  if ( !buffEnt || !Master_WarQuestSelectionMaster )
LABEL_32:
    sub_B170D4();
  if ( !ConstantStrMaster__ExistValueArray(
          Master_WarQuestSelectionMaster,
          (System_String_o *)StringLiteral_5776,
          buffEnt->fields.type,
          0LL) )
    goto LABEL_27;
  v16 = this->fields.data;
  if ( !v16 )
    goto LABEL_32;
  currentTurn = v16->fields.currentTurn;
  if ( currentTurn )
    v18 = 0;
  else
    v18 = !v13->fields.isEnemy;
  if ( !v18 || !shortbuff )
  {
    v19 = currentTurn == 1 && v13->fields.isEnemy;
    if ( (!v19 || !shortbuff)
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
  System_Collections_Generic_List_int__o *v13; // x0
  System_Collections_Generic_List_int__o *v14; // x22
  System_String_array **v15; // x2
  System_String_array **v16; // x3
  System_Boolean_array **v17; // x4
  System_Int32_array **v18; // x5
  System_Int32_array *v19; // x6
  System_Int32_array *v20; // x7
  WebViewManager_o *Instance; // x0
  ConstantStrMaster_o *MasterData_WarQuestSelectionMaster; // x0
  System_Collections_Generic_IEnumerable_T__o *ValueArray; // x0

  if ( (byte_40FCDCA & 1) == 0 )
  {
    sub_B16FFC(&Method_DataManager_GetMasterData_ConstantStrMaster___, *(_QWORD *)&buffType);
    sub_B16FFC(&Method_System_Collections_Generic_List_int__AddRange__, v8);
    sub_B16FFC(&Method_System_Collections_Generic_List_int__Contains__, v9);
    sub_B16FFC(&Method_System_Collections_Generic_List_int___ctor__, v10);
    sub_B16FFC(&System_Collections_Generic_List_int__TypeInfo, v11);
    sub_B16FFC(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v12);
    byte_40FCDCA = 1;
  }
  v13 = *typeList;
  if ( !*typeList )
  {
    v14 = (System_Collections_Generic_List_int__o *)sub_B170CC(
                                                      System_Collections_Generic_List_int__TypeInfo,
                                                      *(_QWORD *)&buffType,
                                                      keyName,
                                                      typeList,
                                                      method);
    System_Collections_Generic_List_int____ctor(
      v14,
      (const MethodInfo_2F0F794 *)Method_System_Collections_Generic_List_int___ctor__);
    *typeList = v14;
    sub_B16F98((BattleServantConfConponent_o *)typeList, (System_Int32_array **)v14, v15, v16, v17, v18, v19, v20);
    Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( Instance )
    {
      MasterData_WarQuestSelectionMaster = (ConstantStrMaster_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                                    (DataManager_o *)Instance,
                                                                    (const MethodInfo_18C3284 *)Method_DataManager_GetMasterData_ConstantStrMaster___);
      if ( MasterData_WarQuestSelectionMaster )
      {
        ValueArray = (System_Collections_Generic_IEnumerable_T__o *)ConstantStrMaster__GetValueArray(
                                                                      MasterData_WarQuestSelectionMaster,
                                                                      keyName,
                                                                      0LL,
                                                                      0LL);
        if ( ValueArray )
        {
          if ( !*typeList )
            goto LABEL_11;
          System_Collections_Generic_List_int___AddRange(
            *typeList,
            ValueArray,
            (const MethodInfo_2F10744 *)Method_System_Collections_Generic_List_int__AddRange__);
        }
        v13 = *typeList;
        if ( *typeList )
          return System_Collections_Generic_List_int___Contains(
                   v13,
                   buffType,
                   (const MethodInfo_2F10944 *)Method_System_Collections_Generic_List_int__Contains__);
      }
    }
LABEL_11:
    sub_B170D4();
  }
  return System_Collections_Generic_List_int___Contains(
           v13,
           buffType,
           (const MethodInfo_2F10944 *)Method_System_Collections_Generic_List_int__Contains__);
}


void __fastcall BattleLogicFunction__LossCommandSpell(
        BattleLogicFunction_o *this,
        DataVals_o *baseVals,
        BattleActionData_o *actionData,
        const MethodInfo *method)
{
  __int64 v4; // x4
  __int64 v7; // x1
  __int64 v8; // x21
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
  int32_t Value; // w0

  if ( (byte_40FCE0A & 1) == 0 )
  {
    sub_B16FFC(&BattleActionData_TypeInfo, baseVals);
    sub_B16FFC(&StringLiteral_8419, v7);
    byte_40FCE0A = 1;
  }
  v8 = sub_B170CC(BattleActionData_TypeInfo, baseVals, actionData, method, v4);
  BattleActionData___ctor((BattleActionData_o *)v8, 0LL);
  if ( !actionData )
    goto LABEL_8;
  if ( !v8 )
    goto LABEL_8;
  *(_DWORD *)(v8 + 32) = actionData->fields.actorId;
  *(_DWORD *)(v8 + 36) = actionData->fields.targetId;
  BattleActionData__setStateField((BattleActionData_o *)v8, 0LL);
  v9 = (System_Int32_array **)StringLiteral_8419;
  *(_QWORD *)(v8 + 64) = StringLiteral_8419;
  sub_B16F98((BattleServantConfConponent_o *)(v8 + 64), v9, v10, v11, v12, v13, v14, v15);
  skillInfo = (System_Int32_array **)actionData->fields.skillInfo;
  *(_QWORD *)(v8 + 144) = skillInfo;
  sub_B16F98((BattleServantConfConponent_o *)(v8 + 144), skillInfo, v17, v18, v19, v20, v21, v22);
  if ( !baseVals || (v23 = *(_QWORD *)(v8 + 144), Value = DataVals__GetValue(baseVals, 0LL), !v23) )
LABEL_8:
    sub_B170D4();
  *(_DWORD *)(v23 + 100) = Value;
  *(_BYTE *)(v8 + 241) = DataVals__isForcedEffectSpeedOne(baseVals, 0LL);
  BattleActionData__AddAfterActionData(actionData, (BattleActionData_o *)v8, 0, 0LL);
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
    sub_B170D4();
  }
  popupText = funcEnt->fields.popupText;
  actBuffData->fields.popLabel = popupText;
  sub_B16F98(
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
  sub_B16F98(
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

  if ( (byte_40FCDDB & 1) == 0 )
  {
    sub_B16FFC(&BattleActionData_BuffData_TypeInfo, *(_QWORD *)&targetId);
    byte_40FCDDB = 1;
  }
  v12 = sub_B170CC(
          BattleActionData_BuffData_TypeInfo,
          *(_QWORD *)&targetId,
          *(_QWORD *)&funcIndex,
          *(_QWORD *)&iconId,
          popupText);
  BattleActionData_BuffData___ctor((BattleActionData_BuffData_o *)v12, 0LL);
  if ( !v12 )
    sub_B170D4();
  *(_DWORD *)(v12 + 40) = targetId;
  *(_DWORD *)(v12 + 16) = funcIndex;
  *(_DWORD *)(v12 + 64) = iconId;
  *(_QWORD *)(v12 + 56) = popupText;
  sub_B16F98((BattleServantConfConponent_o *)(v12 + 56), (System_Int32_array **)popupText, v13, v14, v15, v16, v17, v18);
  *(_DWORD *)(v12 + 68) = popupTextColor;
  *(_QWORD *)(v12 + 72) = 0LL;
  sub_B16F98((BattleServantConfConponent_o *)(v12 + 72), 0LL, v19, v20, v21, v22, v23, v24);
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
  FamilyBuffLinkageIdGenerator_o *FamilyBuffLinkageIdGenerator; // x0
  FamilyBuffLinkageIdGenerator_o *v23; // x19
  struct System_Collections_Generic_Dictionary_int__RemovedBuffInfo__o *servantUniqueIdToRemovedBuffInfoMap_k__BackingField; // x0
  System_Collections_Generic_Dictionary_ValueCollection_TKey__TValue__o *Values; // x0
  int v26; // w20
  __int64 v27; // x1
  __int64 v28; // x2
  __int64 v29; // x3
  __int64 v30; // x4
  Il2CppObject *currentValue; // x21
  System_Collections_Generic_Dictionary_int__int__o *v32; // x20
  System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *klass; // x0
  __int64 IsNullOrEmpty; // x0
  __int64 v35; // x1
  __int64 v36; // x2
  __int64 v37; // x8
  unsigned __int64 v38; // x27
  System_Collections_ICollection_o *v39; // x22
  unsigned __int64 monitor; // x8
  unsigned __int64 v41; // x26
  signed __int64 v42; // x24
  System_Collections_ICollection_o *v43; // x28
  _BOOL8 v44; // x0
  __int64 v45; // x1
  __int64 v46; // x2
  int32_t v47; // w23
  int32_t v48; // w0
  Il2CppObject *current; // x22
  __int64 v50; // x2
  __int64 v51; // x21
  System_Int32_array *FamilyLinkageIdArray; // x0
  __int64 v53; // x1
  System_String_array **v54; // x2
  System_String_array **v55; // x3
  System_Boolean_array **v56; // x4
  System_Int32_array **v57; // x5
  System_Int32_array *v58; // x6
  System_Int32_array *v59; // x7
  System_Int32_array **v60; // x23
  System_Int32_array *FamilyLinkageTargetIdArray; // x0
  __int64 v62; // x1
  System_String_array **v63; // x2
  System_String_array **v64; // x3
  System_Boolean_array **v65; // x4
  System_Int32_array **v66; // x5
  System_Int32_array *v67; // x6
  System_Int32_array *v68; // x7
  System_Int32_array **v69; // x22
  int v70; // w21
  int v71; // w20
  int v72; // [xsp+4h] [xbp-BCh]
  _BYTE v73[32]; // [xsp+8h] [xbp-B8h] BYREF
  int v74; // [xsp+28h] [xbp-98h]
  System_Collections_Generic_List_Enumerator_T__o v75; // [xsp+30h] [xbp-90h] BYREF
  System_Collections_Generic_Dictionary_ValueCollection_Enumerator_TKey__TValue__o v76; // [xsp+50h] [xbp-70h] BYREF

  if ( (byte_40FCE07 & 1) == 0 )
  {
    sub_B16FFC(&Method_System_Collections_Generic_Dictionary_int__int__ContainsKey__, procArg);
    sub_B16FFC(&Method_System_Collections_Generic_Dictionary_int__int___ctor__, v8);
    sub_B16FFC(&Method_System_Collections_Generic_Dictionary_int__int__get_Item__, v9);
    sub_B16FFC(&Method_System_Collections_Generic_Dictionary_int__RemovedBuffInfo__get_Values__, v10);
    sub_B16FFC(&Method_System_Collections_Generic_Dictionary_int__int__set_Item__, v11);
    sub_B16FFC(&System_Collections_Generic_Dictionary_int__int__TypeInfo, v12);
    sub_B16FFC(&Method_System_Collections_Generic_List_Enumerator_BattleBuffData_BuffData__Dispose__, v13);
    sub_B16FFC(
      &Method_System_Collections_Generic_Dictionary_ValueCollection_Enumerator_int__RemovedBuffInfo__Dispose__,
      v14);
    sub_B16FFC(&Method_System_Collections_Generic_List_Enumerator_BattleBuffData_BuffData__MoveNext__, v15);
    sub_B16FFC(
      &Method_System_Collections_Generic_Dictionary_ValueCollection_Enumerator_int__RemovedBuffInfo__MoveNext__,
      v16);
    sub_B16FFC(&Method_System_Collections_Generic_List_Enumerator_BattleBuffData_BuffData__get_Current__, v17);
    sub_B16FFC(
      &Method_System_Collections_Generic_Dictionary_ValueCollection_Enumerator_int__RemovedBuffInfo__get_Current__,
      v18);
    sub_B16FFC(&int_____TypeInfo, v19);
    sub_B16FFC(&Method_System_Collections_Generic_List_BattleBuffData_BuffData__GetEnumerator__, v20);
    sub_B16FFC(&Method_System_Collections_Generic_Dictionary_ValueCollection_int__RemovedBuffInfo__GetEnumerator__, v21);
    byte_40FCE07 = 1;
  }
  memset(&v76, 0, sizeof(v76));
  memset(&v75, 0, sizeof(v75));
  v74 = 0;
  if ( targetServant )
  {
    if ( !procArg
      || (FamilyBuffLinkageIdGenerator = BattleLogicFunction_ProcListInArgs__GetFamilyBuffLinkageIdGenerator(
                                           procArg,
                                           targetServant,
                                           0LL),
          !stealBuffInfoGroup)
      || (v23 = FamilyBuffLinkageIdGenerator,
          (servantUniqueIdToRemovedBuffInfoMap_k__BackingField = stealBuffInfoGroup->fields._servantUniqueIdToRemovedBuffInfoMap_k__BackingField) == 0LL)
      || (Values = System_Collections_Generic_Dictionary_int__QuestAfterAction_VoiceInfo___get_Values(
                     (System_Collections_Generic_Dictionary_int__QuestAfterAction_VoiceInfo__o *)servantUniqueIdToRemovedBuffInfoMap_k__BackingField,
                     (const MethodInfo_2DE9160 *)Method_System_Collections_Generic_Dictionary_int__RemovedBuffInfo__get_Values__)) == 0LL )
    {
      sub_B170D4();
    }
    System_Collections_Generic_Dictionary_ValueCollection_int__BillBoardGroupManager_GroupData___GetEnumerator(
      (System_Collections_Generic_Dictionary_ValueCollection_Enumerator_TKey__TValue__o *)v73,
      Values,
      (const MethodInfo_227BDC0 *)Method_System_Collections_Generic_Dictionary_ValueCollection_int__RemovedBuffInfo__GetEnumerator__);
    v26 = 0;
    v76 = *(System_Collections_Generic_Dictionary_ValueCollection_Enumerator_TKey__TValue__o *)v73;
    while ( System_Collections_Generic_Dictionary_ValueCollection_Enumerator_int__BillBoardGroupManager_GroupData___MoveNext(
              &v76,
              (const MethodInfo_27297EC *)Method_System_Collections_Generic_Dictionary_ValueCollection_Enumerator_int__RemovedBuffInfo__MoveNext__) )
    {
      v72 = v26;
      currentValue = v76.fields.currentValue;
      v32 = (System_Collections_Generic_Dictionary_int__int__o *)sub_B170CC(
                                                                   System_Collections_Generic_Dictionary_int__int__TypeInfo,
                                                                   v27,
                                                                   v28,
                                                                   v29,
                                                                   v30);
      System_Collections_Generic_Dictionary_int__int____ctor(
        v32,
        (const MethodInfo_2DDC410 *)Method_System_Collections_Generic_Dictionary_int__int___ctor__);
      if ( !currentValue )
        sub_B170D4();
      klass = (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)currentValue[1].klass;
      if ( !klass )
        sub_B170D4();
      System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo___GetEnumerator(
        (System_Collections_Generic_List_Enumerator_T__o *)v73,
        klass,
        (const MethodInfo_2F26B54 *)Method_System_Collections_Generic_List_BattleBuffData_BuffData__GetEnumerator__);
      v75 = *(System_Collections_Generic_List_Enumerator_T__o *)v73;
      while ( System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___MoveNext(
                &v75,
                (const MethodInfo_2074054 *)Method_System_Collections_Generic_List_Enumerator_BattleBuffData_BuffData__MoveNext__) )
      {
        current = v75.fields.current;
        if ( !v75.fields.current )
          sub_B170D4();
        if ( BattleBuffData_BuffData__IsFamilyBuff((BattleBuffData_BuffData_o *)v75.fields.current, 0LL) )
        {
          v51 = sub_B17014(int_____TypeInfo, 2LL, v50);
          FamilyLinkageIdArray = BattleBuffData_BuffData__get_FamilyLinkageIdArray(
                                   (BattleBuffData_BuffData_o *)current,
                                   0LL);
          if ( !v51 )
            sub_B170D4();
          v60 = (System_Int32_array **)FamilyLinkageIdArray;
          if ( FamilyLinkageIdArray )
          {
            FamilyLinkageIdArray = (System_Int32_array *)sub_B170BC(
                                                           FamilyLinkageIdArray,
                                                           *(_QWORD *)(*(_QWORD *)v51 + 64LL));
            if ( !FamilyLinkageIdArray )
            {
              sub_B170F4(0LL);
              sub_B170A0();
            }
          }
          if ( !*(_DWORD *)(v51 + 24) )
          {
            sub_B17100(FamilyLinkageIdArray, v53, v54);
            sub_B170A0();
          }
          *(_QWORD *)(v51 + 32) = v60;
          sub_B16F98((BattleServantConfConponent_o *)(v51 + 32), v60, v54, v55, v56, v57, v58, v59);
          FamilyLinkageTargetIdArray = BattleBuffData_BuffData__get_FamilyLinkageTargetIdArray(
                                         (BattleBuffData_BuffData_o *)current,
                                         0LL);
          v69 = (System_Int32_array **)FamilyLinkageTargetIdArray;
          if ( FamilyLinkageTargetIdArray )
          {
            FamilyLinkageTargetIdArray = (System_Int32_array *)sub_B170BC(
                                                                 FamilyLinkageTargetIdArray,
                                                                 *(_QWORD *)(*(_QWORD *)v51 + 64LL));
            if ( !FamilyLinkageTargetIdArray )
            {
              sub_B170F4(0LL);
              sub_B170A0();
            }
          }
          if ( *(_DWORD *)(v51 + 24) <= 1u )
          {
            sub_B17100(FamilyLinkageTargetIdArray, v62, v63);
            sub_B170A0();
          }
          *(_QWORD *)(v51 + 40) = v69;
          sub_B16F98((BattleServantConfConponent_o *)(v51 + 40), v69, v63, v64, v65, v66, v67, v68);
          v37 = *(_QWORD *)(v51 + 24);
          if ( (int)v37 >= 1 )
          {
            v38 = 0LL;
            do
            {
              if ( v38 >= (unsigned int)v37 )
              {
                sub_B17100(IsNullOrEmpty, v35, v36);
                sub_B170A0();
              }
              v39 = *(System_Collections_ICollection_o **)(v51 + 8 * v38 + 32);
              IsNullOrEmpty = BasicHelper__IsNullOrEmpty(v39, 0LL);
              if ( (IsNullOrEmpty & 1) == 0 )
              {
                if ( !v39 )
                  sub_B170D4();
                monitor = (unsigned __int64)v39[1].monitor;
                if ( (int)monitor >= 1 )
                {
                  v41 = 0LL;
                  v42 = (int)monitor;
                  v43 = v39 + 2;
                  do
                  {
                    if ( v41 >= (unsigned int)monitor )
                    {
                      sub_B17100(IsNullOrEmpty, v35, v36);
                      sub_B170A0();
                    }
                    if ( !v32 )
                      sub_B170D4();
                    v44 = System_Collections_Generic_Dictionary_int__int___ContainsKey(
                            v32,
                            *((_DWORD *)&v43->klass + v41),
                            (const MethodInfo_2DDD218 *)Method_System_Collections_Generic_Dictionary_int__int__ContainsKey__);
                    if ( !v44 )
                    {
                      if ( v41 >= LODWORD(v39[1].monitor) )
                      {
                        sub_B17100(v44, v45, v46);
                        sub_B170A0();
                      }
                      if ( !v23 )
                        sub_B170D4();
                      v47 = *((_DWORD *)&v43->klass + v41);
                      v48 = FamilyBuffLinkageIdGenerator__Next(v23, 0LL);
                      System_Collections_Generic_Dictionary_int__int___set_Item(
                        v32,
                        v47,
                        v48,
                        (const MethodInfo_2DDCF8C *)Method_System_Collections_Generic_Dictionary_int__int__set_Item__);
                    }
                    if ( v41 >= LODWORD(v39[1].monitor) )
                    {
                      sub_B17100(v44, v45, v46);
                      sub_B170A0();
                    }
                    IsNullOrEmpty = System_Collections_Generic_Dictionary_int__int___get_Item(
                                      v32,
                                      *((_DWORD *)&v43->klass + v41),
                                      (const MethodInfo_2DDCEF4 *)Method_System_Collections_Generic_Dictionary_int__int__get_Item__);
                    monitor = LODWORD(v39[1].monitor);
                    if ( v41 >= monitor )
                    {
                      sub_B17100(IsNullOrEmpty, v35, v36);
                      sub_B170A0();
                    }
                    *((_DWORD *)&v43->klass + v41++) = IsNullOrEmpty;
                  }
                  while ( (__int64)v41 < v42 );
                }
              }
              LODWORD(v37) = *(_DWORD *)(v51 + 24);
              ++v38;
            }
            while ( (__int64)v38 < (int)v37 );
          }
        }
      }
      v26 = 0;
      *(_DWORD *)&v73[4 * v72 + 24] = 244;
      v70 = ++v74;
      System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___Dispose(
        &v75,
        (const MethodInfo_2074050 *)Method_System_Collections_Generic_List_Enumerator_BattleBuffData_BuffData__Dispose__);
      if ( v70 )
      {
        v26 = v70;
        if ( *(_DWORD *)&v73[4 * v70 + 20] == 244 )
        {
          v26 = v70 - 1;
          v74 = v70 - 1;
        }
      }
    }
    *(_DWORD *)&v73[4 * v26 + 24] = 272;
    v71 = ++v74;
    System_Collections_Generic_Dictionary_ValueCollection_Enumerator_int__BillBoardGroupManager_GroupData___Dispose(
      &v76,
      (const MethodInfo_27297E8 *)Method_System_Collections_Generic_Dictionary_ValueCollection_Enumerator_int__RemovedBuffInfo__Dispose__);
    if ( v71 && *(_DWORD *)&v73[4 * v71 + 20] == 272 )
      v74 = v71 - 1;
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
  const MethodInfo *v18; // x7
  BattleActionData_HealData_o *v19; // x25
  _BOOL8 v20; // x0
  const MethodInfo *v21; // x6
  System_Int32_array **FunctionObject; // x0
  System_String_array **v23; // x2
  System_String_array **v24; // x3
  System_Boolean_array **v25; // x4
  System_Int32_array **v26; // x5
  System_Int32_array *v27; // x6
  System_Int32_array *v28; // x7
  System_Int32_array **v29; // x22
  __int64 v30; // x2
  __int64 BuffList; // x0
  __int64 v32; // x1
  System_String_array **v33; // x2
  System_String_array **v34; // x3
  System_Boolean_array **v35; // x4
  System_Int32_array **v36; // x5
  System_Int32_array *v37; // x6
  System_Int32_array *v38; // x7
  BattleActionData_BuffData_array *v39; // x21
  int max_length; // w8
  __int64 v41; // x23
  BattleActionData_BuffData_o *v42; // x22
  BattleActionData_o *NoEffectObject; // x23

  if ( (byte_40FCDE5 & 1) == 0 )
  {
    sub_B16FFC(&BattleActionData_BuffData___TypeInfo, actiondata);
    byte_40FCDE5 = 1;
  }
  if ( !targetSvtData || !actiondata )
    goto LABEL_26;
  v19 = BattleActionData__setHealData(
          actiondata,
          targetSvtData->fields.uniqueId,
          healPoint,
          funcIndex,
          0,
          baseVals,
          isCommandSideEffect,
          0LL);
  if ( healPoint <= 0 )
  {
    if ( !baseVals )
      goto LABEL_26;
    if ( !baseVals->fields.isShowForcedEffect )
    {
      NoEffectObject = BattleLogicFunction__getNoEffectObject(
                         this,
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
        BuffList = (__int64)BattleActionData__getBuffList(NoEffectObject, funcIndex, 0LL);
        v39 = (BattleActionData_BuffData_array *)BuffList;
        if ( !BuffList )
          return;
        goto LABEL_15;
      }
LABEL_26:
      sub_B170D4();
    }
  }
  v20 = BattleServantData__resultHeal(targetSvtData, healPoint, 0LL);
  FunctionObject = (System_Int32_array **)BattleLogicFunction__getFunctionObject(
                                            (BattleLogicFunction_o *)v20,
                                            funcEnt,
                                            targetSvtData->fields.uniqueId,
                                            funcIndex,
                                            isCommandSideEffect,
                                            0LL,
                                            v21);
  if ( !v19 )
    goto LABEL_26;
  v29 = FunctionObject;
  v19->fields.effect = (struct BattleActionData_BuffData_o *)FunctionObject;
  sub_B16F98((BattleServantConfConponent_o *)&v19->fields.effect, FunctionObject, v23, v24, v25, v26, v27, v28);
  if ( !baseVals )
    goto LABEL_26;
  v19->fields.popDelay = DataVals__GetParam(baseVals, 64, 0, 0LL);
  BuffList = sub_B17014(BattleActionData_BuffData___TypeInfo, 1LL, v30);
  if ( !BuffList )
    goto LABEL_26;
  v39 = (BattleActionData_BuffData_array *)BuffList;
  if ( v29 )
  {
    BuffList = sub_B170BC(v29, *(_QWORD *)(*(_QWORD *)BuffList + 64LL));
    if ( !BuffList )
    {
      sub_B170F4(0LL);
      sub_B170A0();
    }
  }
  if ( !v39->max_length )
    goto LABEL_27;
  v39->m_Items[0] = (BattleActionData_BuffData_o *)v29;
  sub_B16F98((BattleServantConfConponent_o *)v39->m_Items, v29, v33, v34, v35, v36, v37, v38);
LABEL_15:
  max_length = v39->max_length;
  if ( max_length >= 1 )
  {
    v41 = 0LL;
    while ( (unsigned int)v41 < max_length )
    {
      v42 = v39->m_Items[v41];
      if ( !v42 )
        goto LABEL_26;
      v42->fields.isHideEffect = isHideEffect;
      BuffList = BattleServantData__isLogicResultAlive(targetSvtData, 0LL);
      if ( (BuffList & 1) != 0 )
        BattleActionData_BuffData__SetCheckHideWhenDeadInfo(v42, baseVals, 0LL);
      max_length = v39->max_length;
      if ( (int)++v41 >= max_length )
        return;
    }
LABEL_27:
    sub_B17100(BuffList, v32, v33);
    sub_B170A0();
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
  WebViewManager_o *Instance; // x0
  SkillLvMaster_o *MasterData_WarQuestSelectionMaster; // x0
  __int64 v15; // x1
  __int64 v16; // x2
  struct BattleActionData_SideEffectData_array *SideEffectList_k__BackingField; // x24
  int max_length; // w8
  int v19; // w23
  BattleActionData_SideEffectData_o *v20; // x20
  BattleData_o *data; // x0
  BattleServantData_o *v22; // x26
  int32_t v23; // w1
  __int64 v24; // x3
  __int64 v25; // x4
  struct System_String_o *MasterName_k__BackingField; // x8
  SkillLvMaster_o *v27; // x27
  unsigned __int64 v28; // x25
  BattleBuffData_BuffData_o *v29; // x20
  BattleActionData_o *v30; // x28
  bool v31; // w5
  const MethodInfo *v32; // x6
  int32_t v33; // w0
  struct BattleActionData_SideEffectData_array *v34; // [xsp+0h] [xbp-80h]
  SkillLvMaster_o *skillLvMst; // [xsp+10h] [xbp-70h]
  System_Collections_Generic_KeyValuePair_int__int__o pairAttackAndTarget; // [xsp+28h] [xbp-58h] BYREF
  System_Collections_Generic_KeyValuePair_int__int__o p_pairAttackAndTarget; // 0:x0.8
  System_Collections_Generic_KeyValuePair_int__int__o v41; // 0:x1.8
  System_Collections_Generic_KeyValuePair_int__int__o v42; // 0:x1.8

  if ( (byte_40FCDD0 & 1) == 0 )
  {
    sub_B16FFC(&BattleActionData_TypeInfo, arg);
    sub_B16FFC(&Method_DataManager_GetMasterData_SkillLvMaster___, v10);
    sub_B16FFC(&Method_System_Collections_Generic_KeyValuePair_int__int___ctor__, v11);
    sub_B16FFC(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v12);
    byte_40FCDD0 = 1;
  }
  pairAttackAndTarget = 0LL;
  Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance
    || (MasterData_WarQuestSelectionMaster = (SkillLvMaster_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                                  (DataManager_o *)Instance,
                                                                  (const MethodInfo_18C3284 *)Method_DataManager_GetMasterData_SkillLvMaster___),
        skillLvMst = MasterData_WarQuestSelectionMaster,
        !attackArg)
    || (SideEffectList_k__BackingField = attackArg->fields._SideEffectList_k__BackingField) == 0LL )
  {
LABEL_25:
    sub_B170D4();
  }
  max_length = SideEffectList_k__BackingField->max_length;
  if ( max_length >= 1 )
  {
    v19 = 0;
    v34 = attackArg->fields._SideEffectList_k__BackingField;
    do
    {
      if ( v19 >= (unsigned int)max_length )
        goto LABEL_26;
      v20 = SideEffectList_k__BackingField->m_Items[v19];
      if ( !v20 )
        goto LABEL_25;
      data = this->fields.data;
      if ( !data )
        goto LABEL_25;
      MasterData_WarQuestSelectionMaster = (SkillLvMaster_o *)BattleData__getServantData(
                                                                data,
                                                                v20->fields.targetId,
                                                                0LL);
      if ( MasterData_WarQuestSelectionMaster )
      {
        if ( !actionSvtData )
          goto LABEL_25;
        v22 = (BattleServantData_o *)MasterData_WarQuestSelectionMaster;
        v23 = BattleLogicFunction_SideEffectMakeArgument__MakeCheckKey(attackArg, actionSvtData->fields.uniqueId, 0LL);
        p_pairAttackAndTarget = (System_Collections_Generic_KeyValuePair_int__int__o)&pairAttackAndTarget;
        System_Collections_Generic_KeyValuePair_int__int____ctor(
          p_pairAttackAndTarget,
          v23,
          v22->fields.uniqueId,
          (const MethodInfo_23F57EC *)Method_System_Collections_Generic_KeyValuePair_int__int___ctor__);
        if ( !mainAction )
          goto LABEL_25;
        v41 = pairAttackAndTarget;
        MasterData_WarQuestSelectionMaster = (SkillLvMaster_o *)BattleActionData__isReflectedAttackSideEffect(
                                                                  mainAction,
                                                                  v41,
                                                                  0LL);
        if ( ((unsigned __int8)MasterData_WarQuestSelectionMaster & 1) == 0 )
        {
          MasterData_WarQuestSelectionMaster = (SkillLvMaster_o *)BattleServantData__getAttackSideEffectBuffList_22759320(
                                                                    actionSvtData,
                                                                    v20->fields.sideEffectActs,
                                                                    command,
                                                                    v22,
                                                                    0LL);
          if ( !MasterData_WarQuestSelectionMaster )
            goto LABEL_25;
          MasterName_k__BackingField = MasterData_WarQuestSelectionMaster->fields._MasterName_k__BackingField;
          v27 = MasterData_WarQuestSelectionMaster;
          if ( MasterName_k__BackingField )
          {
            if ( (int)MasterName_k__BackingField >= 1 )
            {
              v28 = 0LL;
              while ( v28 < (unsigned int)MasterName_k__BackingField )
              {
                v29 = (BattleBuffData_BuffData_o *)*((_QWORD *)&v27->fields.list + v28);
                v30 = (BattleActionData_o *)sub_B170CC(BattleActionData_TypeInfo, v15, v16, v24, v25);
                BattleActionData___ctor(v30, 0LL);
                if ( !v30 )
                  goto LABEL_25;
                v30->fields.actorId = actionSvtData->fields.uniqueId;
                v30->fields.targetId = v22->fields.uniqueId;
                v31 = ((__int64 (__fastcall *)(BattleLogicFunction_SideEffectMakeArgument_o *, Il2CppMethodPointer))attackArg->klass->vtable._5_unknown.method)(
                        attackArg,
                        attackArg->klass->vtable._6_Init.methodPtr) == 1;
                BattleLogicFunction__setAttackSideEffectBuff(this, skillLvMst, v30, v29, arg, v31, v32);
                v33 = ((__int64 (__fastcall *)(BattleLogicFunction_SideEffectMakeArgument_o *, Il2CppMethodPointer))attackArg->klass->vtable._5_unknown.method)(
                        attackArg,
                        attackArg->klass->vtable._6_Init.methodPtr);
                BattleActionData__addSideEffectActionData(mainAction, v30, v33, 0LL);
                LODWORD(MasterName_k__BackingField) = v27->fields._MasterName_k__BackingField;
                if ( (__int64)++v28 >= (int)MasterName_k__BackingField )
                  goto LABEL_22;
              }
LABEL_26:
              sub_B17100(MasterData_WarQuestSelectionMaster, v15, v16);
              sub_B170A0();
            }
LABEL_22:
            v42 = pairAttackAndTarget;
            BattleActionData__addReflectAttackSideEffect(mainAction, v42, 0LL);
            SideEffectList_k__BackingField = v34;
          }
        }
      }
      max_length = SideEffectList_k__BackingField->max_length;
      ++v19;
    }
    while ( v19 < max_length );
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
  System_Collections_Generic_List_int__o *funcTargetList; // x0
  __int64 v14; // x2
  int32_t funcType; // w23
  System_Int32_array *DependFuncIdArray; // x0
  __int64 v17; // x1
  System_Int32_array *v18; // x2
  WebViewManager_o *Instance; // x0
  DataMasterBase_WarMaster__WarEntity__int__o *MasterData_WarQuestSelectionMaster; // x22
  __int64 v21; // x8
  System_Int32_array *v22; // x23
  unsigned __int64 v23; // x26
  const MethodInfo *v24; // x4
  System_Int32_array *v25; // x24
  System_Collections_Generic_IEnumerable_T__o *Targetids; // x0
  System_Int32_array *v27; // x25

  if ( (byte_40FCDCD & 1) == 0 )
  {
    sub_B16FFC(&Method_DataManager_GetMasterData_FunctionMaster___, *(_QWORD *)&targetId);
    sub_B16FFC(&Method_DataMasterBase_FunctionMaster__FunctionEntity__int__GetEntity__, v8);
    sub_B16FFC(&int___TypeInfo, v9);
    sub_B16FFC(&Method_System_Collections_Generic_List_int__AddRange__, v10);
    sub_B16FFC(&Method_System_Collections_Generic_List_int__Add__, v11);
    sub_B16FFC(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v12);
    byte_40FCDCD = 1;
  }
  if ( !action )
    goto LABEL_19;
  funcTargetList = action->fields.funcTargetList;
  if ( !funcTargetList )
    goto LABEL_19;
  System_Collections_Generic_List_int___Add(
    funcTargetList,
    targetId,
    (const MethodInfo_2F104F0 *)Method_System_Collections_Generic_List_int__Add__);
  if ( !baseVals )
    goto LABEL_19;
  funcType = baseVals->fields.funcType;
  DependFuncIdArray = (System_Int32_array *)sub_B17014(int___TypeInfo, 1LL, v14);
  if ( !DependFuncIdArray )
    goto LABEL_19;
  v18 = DependFuncIdArray;
  if ( !DependFuncIdArray->max_length )
    goto LABEL_20;
  DependFuncIdArray->m_Items[1] = targetId;
  BattleActionData__AddHpDecreaseFuncTargets(action, funcType, DependFuncIdArray, 0LL);
  Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance
    || (MasterData_WarQuestSelectionMaster = (DataMasterBase_WarMaster__WarEntity__int__o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                                                              (DataManager_o *)Instance,
                                                                                              (const MethodInfo_18C3284 *)Method_DataManager_GetMasterData_FunctionMaster___),
        (DependFuncIdArray = DataVals__GetDependFuncIdArray(baseVals, 0LL)) == 0LL) )
  {
LABEL_19:
    sub_B170D4();
  }
  v21 = *(_QWORD *)&DependFuncIdArray->max_length;
  v22 = DependFuncIdArray;
  if ( (int)v21 >= 1 )
  {
    v23 = 0LL;
    while ( v23 < (unsigned int)v21 )
    {
      if ( !MasterData_WarQuestSelectionMaster )
        goto LABEL_19;
      DependFuncIdArray = (System_Int32_array *)DataMasterBase_WarMaster__WarEntity__int___GetEntity(
                                                  MasterData_WarQuestSelectionMaster,
                                                  v22->m_Items[v23 + 1],
                                                  (const MethodInfo_266F388 *)Method_DataMasterBase_FunctionMaster__FunctionEntity__int__GetEntity__);
      if ( DependFuncIdArray )
      {
        v25 = DependFuncIdArray;
        Targetids = (System_Collections_Generic_IEnumerable_T__o *)BattleLogicFunction__getTargetids(
                                                                     this,
                                                                     action,
                                                                     DependFuncIdArray->m_Items[0],
                                                                     baseVals,
                                                                     v24);
        if ( !action->fields.funcTargetList )
          goto LABEL_19;
        v27 = (System_Int32_array *)Targetids;
        System_Collections_Generic_List_int___AddRange(
          action->fields.funcTargetList,
          Targetids,
          (const MethodInfo_2F10744 *)Method_System_Collections_Generic_List_int__AddRange__);
        BattleActionData__AddHpDecreaseFuncTargets(action, v25->max_length, v27, 0LL);
      }
      LODWORD(v21) = v22->max_length;
      if ( (__int64)++v23 >= (int)v21 )
        return;
    }
LABEL_20:
    sub_B17100(DependFuncIdArray, v17, v18);
    sub_B170A0();
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
  if ( (byte_40FCDC9 & 1) == 0 )
  {
    sub_B16FFC(&StringLiteral_15273, *(_QWORD *)&buffType);
    this = (BattleLogicFunction_o *)sub_B16FFC(&StringLiteral_15274, v8);
    byte_40FCDC9 = 1;
  }
  IsUpdateBuffProgressTurn = BattleLogicFunction__IsUpdateBuffProgressTurn(
                               this,
                               buffType,
                               (System_String_o *)StringLiteral_15274,
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
            (System_String_o *)StringLiteral_15273,
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
  __int64 v4; // x4
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x1
  __int64 v12; // x1
  __int64 v13; // x21
  BattleData_o *data; // x0
  BattleSkillInfoData_array *MasterSkillInfos; // x0
  System_Collections_Generic_IEnumerable_T__o *v16; // x22
  int32_t Value; // w0
  System_Int32_array **TargetList; // x0
  System_String_array **v19; // x2
  System_String_array **v20; // x3
  System_Boolean_array **v21; // x4
  System_Int32_array **v22; // x5
  System_Int32_array *v23; // x6
  System_Int32_array *v24; // x7
  __int64 v25; // x1
  __int64 v26; // x2
  __int64 v27; // x3
  __int64 v28; // x4
  System_Action_DrawLotsDisplayMessage_DisplayedInGroup_SaveData__o *v29; // x0
  System_Action_T__o *v30; // x20
  __int64 *v31; // x8

  if ( (byte_40FCDFE & 1) == 0 )
  {
    sub_B16FFC(&Method_System_Action_BattleSkillInfoData___ctor__, dataVals);
    sub_B16FFC(&System_Action_BattleSkillInfoData__TypeInfo, v8);
    sub_B16FFC(&Method_BasicHelper_ForEach_BattleSkillInfoData___, v9);
    sub_B16FFC(&Method_BattleLogicFunction___c__DisplayClass92_0__UpdateUserEquipSkillChargeTurn_b__0__, v10);
    sub_B16FFC(&Method_BattleLogicFunction___c__DisplayClass92_0__UpdateUserEquipSkillChargeTurn_b__1__, v11);
    sub_B16FFC(&BattleLogicFunction___c__DisplayClass92_0_TypeInfo, v12);
    byte_40FCDFE = 1;
  }
  v13 = sub_B170CC(BattleLogicFunction___c__DisplayClass92_0_TypeInfo, dataVals, isProgress, method, v4);
  BattleLogicFunction___c__DisplayClass92_0___ctor((BattleLogicFunction___c__DisplayClass92_0_o *)v13, 0LL);
  data = this->fields.data;
  if ( !data
    || (MasterSkillInfos = BattleData__getMasterSkillInfos(data, 0LL), !dataVals)
    || (v16 = (System_Collections_Generic_IEnumerable_T__o *)MasterSkillInfos,
        Value = DataVals__GetValue(dataVals, 0LL),
        !v13) )
  {
    sub_B170D4();
  }
  *(_DWORD *)(v13 + 16) = Value;
  *(_DWORD *)(v13 + 20) = DataVals__GetValue2(dataVals, 0LL) - 1;
  TargetList = (System_Int32_array **)DataVals__GetTargetList(dataVals, 0LL);
  *(_QWORD *)(v13 + 24) = TargetList;
  sub_B16F98((BattleServantConfConponent_o *)(v13 + 24), TargetList, v19, v20, v21, v22, v23, v24);
  v29 = (System_Action_DrawLotsDisplayMessage_DisplayedInGroup_SaveData__o *)sub_B170CC(
                                                                               System_Action_BattleSkillInfoData__TypeInfo,
                                                                               v25,
                                                                               v26,
                                                                               v27,
                                                                               v28);
  v30 = (System_Action_T__o *)v29;
  if ( isProgress )
    v31 = &Method_BattleLogicFunction___c__DisplayClass92_0__UpdateUserEquipSkillChargeTurn_b__0__;
  else
    v31 = &Method_BattleLogicFunction___c__DisplayClass92_0__UpdateUserEquipSkillChargeTurn_b__1__;
  System_Action_DrawLotsDisplayMessage_DisplayedInGroup_SaveData____ctor(
    v29,
    (Il2CppObject *)v13,
    *v31,
    (const MethodInfo_24B7310 *)Method_System_Action_BattleSkillInfoData___ctor__);
  BasicHelper__ForEach_DrawLotsDisplayMessage_DisplayedInGroup_SaveData_(
    v16,
    v30,
    (const MethodInfo_18B756C *)Method_BasicHelper_ForEach_BattleSkillInfoData___);
}


BattleBuffData_BuffData_o *__fastcall BattleLogicFunction___FunctionSubFieldBuff_b__112_0(
        BattleLogicFunction_o *this,
        BattleBuffData_BuffData_o *buff,
        const MethodInfo *method)
{
  struct BattleData_o *data; // x8
  BattleFieldEnvironmentData_o *FieldEnvData_k__BackingField; // x0
  BattleBuffData_o *BuffData; // x0

  data = this->fields.data;
  if ( !data
    || (FieldEnvData_k__BackingField = data->fields._FieldEnvData_k__BackingField) == 0LL
    || (BuffData = BattleFieldEnvironmentData__get_BuffData(FieldEnvData_k__BackingField, 0LL)) == 0LL )
  {
    sub_B170D4();
  }
  return BattleBuffData__CreateDummyBuff(BuffData, buff, 0LL);
}


bool __fastcall BattleLogicFunction___getTargetids_b__46_0(
        BattleLogicFunction_o *this,
        int32_t x,
        const MethodInfo *method)
{
  BattleData_o *data; // x0

  data = this->fields.data;
  if ( !data )
    sub_B170D4();
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
  BattleServantData_o *ServantData; // x0
  BattleServantData_o *v21; // x21
  BattleServantData_o *v22; // x0
  BattleServantData_o *v23; // x19
  int32_t v24; // w20
  float BuffTOLERANCEMagnification; // s0
  float BuffGRANTSUBSTATEMagnification; // s0
  int32_t InstantDeathRate; // w0
  bool result; // w0
  int32_t v29; // w0
  float v30; // s0
  int32_t v31; // w0
  int v32; // w8
  BattleLogicFunction_o *Next; // x0
  const MethodInfo *v34; // x4
  struct System_Int32_array **p_vals; // x8
  System_Int32_array *v36; // x20
  System_String_o *v37; // x19
  System_String_o *v38; // x0
  int32_t v39; // w0
  int v40; // w22
  float BuffTOLERANCESUBSTATEMagnification; // s0
  int value; // [xsp+Ch] [xbp-64h]
  __int64 v44; // [xsp+18h] [xbp-58h] BYREF

  if ( (byte_40FCDCE & 1) == 0 )
  {
    sub_B16FFC(&StringLiteral_17335, args);
    sub_B16FFC(&StringLiteral_133, v17);
    sub_B16FFC(&StringLiteral_17334, v18);
    byte_40FCDCE = 1;
  }
  v44 = 0LL;
  data = this->fields.data;
  if ( !data )
    goto LABEL_51;
  ServantData = BattleData__getServantData(data, actorId, 0LL);
  if ( !this->fields.data )
    goto LABEL_51;
  v21 = ServantData;
  v22 = BattleData__getServantData(this->fields.data, targetId, 0LL);
  v44 = 0x3E8000003E8LL;
  if ( !baseVals )
    goto LABEL_51;
  v23 = v22;
  value = DataVals__GetParam(baseVals, 0, 0, 0LL);
  if ( !args )
    goto LABEL_51;
  if ( !BattleLogicFunction_ProcListInArgs__DidTriggeredFuncHaveSpecifyResults(
          args,
          targetId,
          baseVals,
          this->fields.data,
          0LL) )
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
  value = BattleUtility__Abs_23374496(value, 0LL);
  if ( !funcEnt )
    goto LABEL_51;
LABEL_10:
  if ( !FuncList__Check(1, funcEnt->fields.funcType, 0LL) )
  {
    if ( FuncList__Check(13, funcEnt->fields.funcType, 0LL) )
    {
      if ( actorId != targetId || DataVals__GetParam(baseVals, 57, 0, 0LL) < 1 )
      {
        if ( !v23 )
          goto LABEL_51;
        if ( !BattleServantData__checkAvoidInstantDeath(v23, v21, 0LL) )
        {
          Next = (BattleLogicFunction_o *)BattleRandom__getNext(1000, 0LL);
          HIDWORD(v44) = (_DWORD)Next;
          InstantDeathRate = BattleLogicFunction__GetInstantDeathRate(
                               Next,
                               (float)value,
                               v23,
                               v21,
                               isTreasureDevice,
                               v34);
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
        v36 = *p_vals;
        if ( v21 || !DataVals__isParam(baseVals, 74, 0LL) )
        {
          v39 = BattleRandom__getNext(1000, 0LL);
          if ( !v23 )
            goto LABEL_51;
          v40 = v39;
          BuffTOLERANCESUBSTATEMagnification = BattleServantData__getBuffTOLERANCESUBSTATEMagnification(
                                                 v23,
                                                 v36,
                                                 v21,
                                                 0LL);
          HIDWORD(v44) = BattleUtility__FloorToInt(
                           (float)(BuffTOLERANCESUBSTATEMagnification * 1000.0) + (float)v40,
                           0LL);
          if ( v21 )
          {
            BuffGRANTSUBSTATEMagnification = BattleServantData__getBuffGRANTSUBSTATEMagnification(v21, v36, v23, 0LL);
            goto LABEL_15;
          }
          goto LABEL_35;
        }
        v30 = (float)BattleRandom__getNext(1000, 0LL);
        goto LABEL_33;
      }
      if ( FuncList__Check(20, funcEnt->fields.funcType, 0LL) )
      {
        v29 = BattleRandom__getNext(1000, 0LL);
        if ( !v23 )
          goto LABEL_51;
        v30 = (float)(BattleServantData__getBuffResistDelayNPTurn(v23, v21, 0LL) * 1000.0) + (float)v29;
LABEL_33:
        v31 = BattleUtility__FloorToInt(v30, 0LL);
LABEL_34:
        HIDWORD(v44) = v31;
LABEL_35:
        v32 = value;
LABEL_45:
        LODWORD(v44) = v32;
        goto LABEL_46;
      }
      if ( !FuncList__Check(46, funcEnt->fields.funcType, 0LL) )
      {
        v31 = BattleRandom__getNext(1000, 0LL);
        goto LABEL_34;
      }
    }
    HIDWORD(v44) = 0;
    v32 = 1000;
    goto LABEL_45;
  }
  if ( buffEnt )
  {
    v24 = BattleRandom__getNext(1000, 0LL);
    if ( v21 )
    {
      if ( v23 )
      {
        BuffTOLERANCEMagnification = BattleServantData__getBuffTOLERANCEMagnification(
                                       v23,
                                       buffEnt->fields.vals,
                                       v21,
                                       &this->fields.wkStr,
                                       0LL);
        HIDWORD(v44) = BattleUtility__FloorToInt((float)(BuffTOLERANCEMagnification * 1000.0) + (float)v24, 0LL);
        BuffGRANTSUBSTATEMagnification = BattleServantData__getBuffGRANTSTATEMagnification(
                                           v21,
                                           buffEnt->fields.vals,
                                           v23,
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
      sub_B170D4();
    }
    v30 = (float)v24;
    goto LABEL_33;
  }
LABEL_46:
  v37 = System_Int32__ToString((int32_t)&v44 + 4, 0LL);
  v38 = System_Int32__ToString((int32_t)&v44, 0LL);
  System_String__Concat_43747144(
    (System_String_o *)StringLiteral_17335,
    v37,
    (System_String_o *)StringLiteral_133,
    v38,
    0LL);
  return SHIDWORD(v44) < (int)v44;
}


bool __fastcall BattleLogicFunction__checkNoActionCondition(
        BattleLogicFunction_o *this,
        int32_t targetId,
        FunctionEntity_o *funcEnt,
        const MethodInfo *method)
{
  BattleData_o *data; // x0
  BattleServantData_o *ServantData; // x0
  unsigned int funcType; // w8

  data = this->fields.data;
  if ( !data )
    goto LABEL_10;
  ServantData = BattleData__getServantData(data, targetId, 0LL);
  if ( !funcEnt )
    goto LABEL_10;
  funcType = funcEnt->fields.funcType;
  if ( (funcType > 0x2C || ((1LL << funcType) & 0x100000000180LL) == 0) && funcType != 133 )
    return 0;
  if ( !ServantData )
LABEL_10:
    sub_B170D4();
  return ServantData->fields.isEnemy;
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
  BattleServantData_o *ServantData; // x0
  BattleServantData_o *v16; // x25
  int32_t Value; // w0
  const MethodInfo *v19; // [xsp+8h] [xbp-48h]

  if ( (byte_40FCE03 & 1) == 0 )
  {
    sub_B16FFC(&BattleActionData_TypeInfo, *(_QWORD *)&targetId);
    byte_40FCE03 = 1;
  }
  v13 = (BattleActionData_o *)sub_B170CC(
                                BattleActionData_TypeInfo,
                                *(_QWORD *)&targetId,
                                funcEnt,
                                baseVals,
                                *(_QWORD *)&funcIndex);
  BattleActionData___ctor(v13, 0LL);
  data = this->fields.data;
  if ( !data || (ServantData = BattleData__getServantData(data, targetId, 0LL), !baseVals) )
    sub_B170D4();
  v16 = ServantData;
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
  __int64 v13; // x1
  __int64 v14; // x1
  struct BattleLogicFunctionProcess_FunctionUnitCheck_o *funcUnit_k__BackingField; // x8
  DataVals_o *dataVals_k__BackingField; // x26
  BattleActionData_o *v17; // x23
  __int64 v18; // x1
  __int64 v19; // x2
  __int64 v20; // x3
  __int64 v21; // x4
  NpPointToTurnConvert_o *v22; // x28
  __int64 v23; // x1
  __int64 v24; // x2
  __int64 v25; // x3
  __int64 v26; // x4
  NpGaugeAbsorbResult_o *v27; // x27
  const MethodInfo *v28; // x4
  BattleActionData_o *v29; // x0
  const MethodInfo *v30; // x4
  BattleActionData_o *v31; // x0
  const MethodInfo *v32; // x7
  float Turn_k__BackingField; // s0
  double v34; // d0
  BattleActionData_o *v35; // x0

  if ( (byte_40FCDF9 & 1) == 0 )
  {
    sub_B16FFC(&BattleActionData_TypeInfo, *(_QWORD *)&targetId);
    sub_B16FFC(&NpGaugeAbsorbResult_TypeInfo, v13);
    sub_B16FFC(&NpPointToTurnConvert_TypeInfo, v14);
    byte_40FCDF9 = 1;
  }
  if ( !funcTarget )
    goto LABEL_12;
  funcUnit_k__BackingField = funcTarget->fields._funcUnit_k__BackingField;
  if ( !funcUnit_k__BackingField )
    goto LABEL_12;
  dataVals_k__BackingField = funcUnit_k__BackingField->fields._dataVals_k__BackingField;
  v17 = (BattleActionData_o *)sub_B170CC(
                                BattleActionData_TypeInfo,
                                *(_QWORD *)&targetId,
                                funcEnt,
                                mainAction,
                                funcTarget);
  BattleActionData___ctor(v17, 0LL);
  v22 = (NpPointToTurnConvert_o *)sub_B170CC(NpPointToTurnConvert_TypeInfo, v18, v19, v20, v21);
  NpPointToTurnConvert___ctor(v22, 0LL);
  v27 = (NpGaugeAbsorbResult_o *)sub_B170CC(NpGaugeAbsorbResult_TypeInfo, v23, v24, v25, v26);
  NpGaugeAbsorbResult___ctor(v27, (BaseNpGaugeConvert_o *)v22, 0LL);
  v29 = BattleLogicFunction__AbsorbNpTurn(this, mainAction, funcTarget, v27, v28);
  if ( !v17
    || (BattleActionData__addAction(v17, v29, 0LL),
        v31 = BattleLogicFunction__AbsorbNpPoint(this, mainAction, funcTarget, v27, v30),
        BattleActionData__addAction(v17, v31, 0LL),
        !dataVals_k__BackingField)
    || !v27 )
  {
LABEL_12:
    sub_B170D4();
  }
  Turn_k__BackingField = v27->fields._Turn_k__BackingField;
  if ( Turn_k__BackingField == INFINITY )
    v34 = -Turn_k__BackingField;
  else
    v34 = Turn_k__BackingField;
  v35 = BattleLogicFunction__functionHastenNpTurn(
          this,
          targetId,
          funcEnt,
          dataVals_k__BackingField,
          dataVals_k__BackingField->fields.funcIndex,
          isCommandSideEffect,
          (int)v34,
          v32);
  BattleActionData__addAction(v17, v35, 0LL);
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
  __int64 v40; // x3
  __int64 v41; // x4
  BattleActionData_o *v42; // x19
  BattleData_o *data; // x0
  BattleServantData_o *ServantData; // x0
  BattleServantData_o *v45; // x22
  BattleServantData_o *v46; // x27
  __int64 v47; // x0
  __int64 v48; // x1
  __int64 v49; // x2
  __int64 v50; // x3
  __int64 v51; // x4
  __int64 v52; // x26
  const MethodInfo *v53; // x4
  int v54; // w8
  int v55; // w19
  char v56; // w23
  _BOOL4 v57; // w25
  int32_t type; // w19
  const MethodInfo *v59; // x3
  bool v60; // zf
  BattleLogicFunction_ProcListInArgs_o *v61; // x25
  int v62; // w9
  int v63; // w8
  int32_t ProgressSelfTurn; // w0
  struct BattleData_o *v65; // x8
  struct BaseBattleEvent_o *battleEvent; // x0
  int32_t ProgressTurnCond; // w0
  int32_t v68; // w19
  int32_t v69; // w19
  int32_t v70; // w19
  int32_t v71; // w19
  int32_t tdCommandTypeChange; // w8
  __int64 v73; // x2
  System_Int32_array **v74; // x0
  System_String_array **v75; // x2
  System_String_array **v76; // x3
  System_Boolean_array **v77; // x4
  System_Int32_array **v78; // x5
  System_Int32_array *v79; // x6
  System_Int32_array *v80; // x7
  __int64 v81; // x23
  __int64 Param; // x0
  __int64 v83; // x1
  System_String_array **v84; // x2
  __int64 v85; // x19
  int32_t v86; // w19
  struct BattleData_o *v87; // x8
  struct BattleEntity_o *battle_ent; // x8
  int64_t userId; // x25
  int32_t eventId; // w19
  WebViewManager_o *Instance; // x0
  EventPointBuffMaster_o *MasterData_WarQuestSelectionMaster; // x0
  EventPointBuffMaster_o *v93; // x28
  int32_t EventPointGroupId; // w23
  WebViewManager_o *v95; // x0
  UserEventPointMaster_o *v96; // x0
  UserEventPointEntity_o *EntityDefinitely; // x0
  int64_t value; // x19
  int v99; // w8
  int v100; // w10
  __int64 v101; // x9
  __int64 v102; // x11
  __int64 v103; // x2
  System_Int32_array **v104; // x0
  System_String_array **v105; // x2
  System_String_array **v106; // x3
  System_Boolean_array **v107; // x4
  System_Int32_array **v108; // x5
  System_Int32_array *v109; // x6
  System_Int32_array *v110; // x7
  __int64 v111; // x23
  __int64 v112; // x19
  BattleActionData_o *v113; // x28
  int32_t v114; // w23
  __int64 v115; // x1
  __int64 v116; // x2
  __int64 v117; // x3
  __int64 v118; // x4
  __int64 v119; // x19
  bool isEnemy; // w8
  int v121; // w8
  System_Int32_array **TargetIndiv; // x0
  System_String_array **v123; // x2
  System_String_array **v124; // x3
  System_Boolean_array **v125; // x4
  System_Int32_array **v126; // x5
  System_Int32_array *v127; // x6
  System_Int32_array *v128; // x7
  System_String_array **v129; // x2
  System_String_array **v130; // x3
  System_Boolean_array **v131; // x4
  System_Int32_array **v132; // x5
  System_Int32_array *v133; // x6
  System_Int32_array *v134; // x7
  int32_t v135; // w19
  System_Int32_array **IntervalData; // x0
  System_String_array **v137; // x2
  System_String_array **v138; // x3
  System_Boolean_array **v139; // x4
  System_Int32_array **v140; // x5
  System_Int32_array *v141; // x6
  System_Int32_array *v142; // x7
  System_Int32_array **ParamArray; // x0
  System_String_array **v144; // x2
  System_String_array **v145; // x3
  System_Boolean_array **v146; // x4
  System_Int32_array **v147; // x5
  System_Int32_array *v148; // x6
  System_Int32_array *v149; // x7
  int32_t v150; // w19
  int32_t RelationId; // w23
  __int64 v152; // x1
  __int64 v153; // x2
  __int64 v154; // x3
  __int64 v155; // x4
  BattleBuffData_RelationOverwriteData_o *v156; // x19
  System_String_array **v157; // x2
  System_String_array **v158; // x3
  System_Boolean_array **v159; // x4
  System_Int32_array **v160; // x5
  System_Int32_array *v161; // x6
  System_Int32_array *v162; // x7
  int32_t v163; // w0
  BattleDataDefine_c *v164; // x0
  int32_t v165; // w19
  BattleBuffData_o *BuffData; // x0
  BattleBuffData_SkillRankChangeData_o *skillChangeData; // x0
  bool v168; // w0
  float UpDownGiveHeal; // s8
  int32_t v170; // w0
  int v171; // s0
  int32_t v172; // w0
  int v173; // s0
  System_Int32_array **v174; // x0
  System_String_array **v175; // x2
  System_String_array **v176; // x3
  System_Boolean_array **v177; // x4
  System_Int32_array **v178; // x5
  System_Int32_array *v179; // x6
  System_Int32_array *v180; // x7
  System_Int32_array **v181; // x0
  System_String_array **v182; // x2
  System_String_array **v183; // x3
  System_Boolean_array **v184; // x4
  System_Int32_array **v185; // x5
  System_Int32_array *v186; // x6
  System_Int32_array *v187; // x7
  System_Int32_array **v188; // x0
  System_String_array **v189; // x2
  System_String_array **v190; // x3
  System_Boolean_array **v191; // x4
  System_Int32_array **v192; // x5
  System_Int32_array *v193; // x6
  System_Int32_array *v194; // x7
  int32_t v195; // w19
  System_Int32_array **UpBuffRateBuffTypeList; // x0
  System_String_array **v197; // x2
  System_String_array **v198; // x3
  System_Boolean_array **v199; // x4
  System_Int32_array **v200; // x5
  System_Int32_array *v201; // x6
  System_Int32_array *v202; // x7
  int32_t ShowStateWarBoardEnemyEquip; // w1
  struct BattleLogicFunction_FunctionArgument_o *externalArg; // x8
  DataMasterBase_WarMaster__WarEntity__int__o *Master_WarQuestSelectionMaster; // x0
  struct BattleData_o *v206; // x8
  struct BaseBattleEvent_o *v207; // x0
  System_Int32_array **AddIndividualty; // x0
  System_String_array **v209; // x2
  System_String_array **v210; // x3
  System_Boolean_array **v211; // x4
  System_Int32_array **v212; // x5
  System_Int32_array *v213; // x6
  System_Int32_array *v214; // x7
  System_Int32_array **LinkageTargetIndividualty; // x0
  System_String_array **v216; // x2
  System_String_array **v217; // x3
  System_Boolean_array **v218; // x4
  System_Int32_array **v219; // x5
  System_Int32_array *v220; // x6
  System_Int32_array *v221; // x7
  BattleLogicFunctionProcess_FunctionUnitCheck_o *v222; // x0
  const MethodInfo *v223; // x3
  struct BattleData_o *v224; // x8
  struct BaseBattleEvent_o *v225; // x0
  System_Int32_array **ValsList; // x0
  System_String_array **v227; // x2
  System_String_array **v228; // x3
  System_Boolean_array **v229; // x4
  System_Int32_array **v230; // x5
  System_Int32_array *v231; // x6
  System_Int32_array *v232; // x7
  int32_t v233; // w0
  int v234; // w8
  int v235; // w9
  UnityEngine_Object_o *logic; // x19
  BattleLogic_o *v237; // x0
  bool v238; // w19
  int32_t v239; // w23
  int32_t v240; // w23
  BattleData_o *v241; // x0
  CommandCodeInfo_o *UserCommandCode; // x0
  int32_t MaxHp; // w25
  int32_t v244; // w23
  bool v245; // w0
  __int64 v246; // x4
  int32_t v247; // w19
  bool IsCommandSideEffect; // w0
  const MethodInfo *v249; // x7
  BattleActionData_o *NoEffectObject; // x1
  __int64 v251; // x1
  __int64 v252; // x2
  __int64 v253; // x3
  __int64 v254; // x4
  BattleActionEffect_AddChangeMaxHpBuff_o *v255; // x19
  __int64 v256; // x2
  __int64 v257; // x0
  __int64 v258; // x28
  System_String_array **v259; // x3
  System_Boolean_array **v260; // x4
  System_Int32_array **v261; // x5
  System_Int32_array *v262; // x6
  System_Int32_array *v263; // x7
  int32_t NowHp; // w0
  System_Int32_array **v265; // x0
  System_String_array **v266; // x2
  System_String_array **v267; // x3
  System_Boolean_array **v268; // x4
  System_Int32_array **v269; // x5
  System_Int32_array *v270; // x6
  System_Int32_array *v271; // x7
  int32_t id; // w19
  __int64 v273; // x1
  __int64 v274; // x2
  __int64 v275; // x3
  __int64 v276; // x4
  System_Collections_Generic_List_int__o *v277; // x0
  System_String_o *i; // x0
  System_String_o *v279; // x0
  System_String_o *v280; // x0
  System_String_o *v281; // x0
  BattleData_o *v282; // x0
  System_Int32_array *QuestIndividualities; // x0
  UnityEngine_Object_o *v284; // x22
  System_Int32_array *v285; // x19
  bool v286; // w0
  BattlePerformance_o *perf; // x2
  struct BattleLogic_o *v288; // x8
  UnityEngine_Object_o *v289; // x19
  BattleLogic_o *v290; // x0
  BattleData_o *v291; // x0
  int v292; // w8
  __int64 v293; // x19
  unsigned int v294; // w22
  BattleServantData_o *v295; // x0
  int32_t v296; // w19
  struct BattleData_o *v297; // x8
  struct BaseBattleEvent_o *v298; // x0
  __int64 v299; // x1
  __int64 v300; // x2
  __int64 v301; // x3
  __int64 v302; // x4
  BattleBuffData_o *v303; // x19
  BattleBuffData_CheckIndividualitiesData_o *v304; // x22
  BattleBuffData_BuffData_array *BuffList_31040328; // x0
  int32_t v306; // w1
  FunctionEntity_o *v307; // x2
  DataVals_o *v308; // x3
  int32_t v309; // w4
  const MethodInfo *v310; // x5
  bool v311; // w0
  BattleActionData_BuffData_o *v312; // x22
  UnityEngine_Object_o *v313; // x19
  System_String_array **v314; // x2
  System_String_array **v315; // x3
  System_Boolean_array **v316; // x4
  System_Int32_array **v317; // x5
  System_Int32_array *v318; // x6
  System_Int32_array *v319; // x7
  struct BattleLogic_o *v320; // x8
  BattlePerformance_o *v321; // x0
  System_Int32_array **v322; // x1
  __int64 v323; // x2
  System_Int32_array **v324; // x0
  System_String_array **v325; // x2
  System_String_array **v326; // x3
  System_Boolean_array **v327; // x4
  System_Int32_array **v328; // x5
  System_Int32_array *v329; // x6
  System_Int32_array *v330; // x7
  const MethodInfo *v331; // x3
  BattleData_o *v332; // x0
  __int64 userCommandCodeId; // [xsp+8h] [xbp-B8h]
  int userCommandCodeIda; // [xsp+8h] [xbp-B8h]
  int32_t funcIndex; // [xsp+14h] [xbp-ACh]
  BattleActionData_o *v337; // [xsp+18h] [xbp-A8h]
  BattleActionData_o *v338; // [xsp+20h] [xbp-A0h]
  int32_t treasureDvcId; // [xsp+2Ch] [xbp-94h]
  int32_t v340; // [xsp+30h] [xbp-90h]
  unsigned int uniqueId; // [xsp+34h] [xbp-8Ch]
  struct FunctionEntity_o *funcEnt; // [xsp+38h] [xbp-88h]
  BattleActionData_BuffData_o *v344; // [xsp+48h] [xbp-78h]
  BattleLogicFunctionProcess_FunctionTargetCheck_o *funcTargeta; // [xsp+50h] [xbp-70h]
  WarEntity_o *entity; // [xsp+58h] [xbp-68h] BYREF
  int v347; // [xsp+68h] [xbp-58h] BYREF
  bool isSelfTurn; // [xsp+6Ch] [xbp-54h] BYREF

  v6 = shortbuff;
  if ( (byte_40FCDD6 & 1) == 0 )
  {
    sub_B16FFC(&BattleActionEffect_AddChangeMaxHpBuff_TypeInfo, mainAction);
    sub_B16FFC(&BattleActionData_TypeInfo, v10);
    sub_B16FFC(&BattleDataDefine_TypeInfo, v11);
    sub_B16FFC(&BattleBuffData_BuffData___TypeInfo, v12);
    sub_B16FFC(&BattleBuffData_BuffData_TypeInfo, v13);
    sub_B16FFC(&BuffList_TypeInfo, v14);
    sub_B16FFC(&BattleBuffData_CheckIndividualitiesData_TypeInfo, v15);
    sub_B16FFC(&Method_DataManager_GetMasterData_EventPointBuffMaster___, v16);
    sub_B16FFC(&Method_DataManager_GetMasterData_UserEventPointMaster___, v17);
    sub_B16FFC(&Method_DataManager_GetMaster_BuffTypeDetailMaster___, v18);
    sub_B16FFC(&DataManager_TypeInfo, v19);
    sub_B16FFC(&Method_DataMasterBase_BuffTypeDetailMaster__BuffTypeDetailEntity__int__TryGetEntity__, v20);
    sub_B16FFC(&BattleBuffData_FieldAliveCondData_TypeInfo, v21);
    sub_B16FFC(&int___TypeInfo, v22);
    sub_B16FFC(&Method_System_Collections_Generic_List_int___ctor__, v23);
    sub_B16FFC(&System_Collections_Generic_List_int__TypeInfo, v24);
    sub_B16FFC(&System_Math_TypeInfo, v25);
    sub_B16FFC(&UnityEngine_Object_TypeInfo, v26);
    sub_B16FFC(&BattleBuffData_RelationOverwriteData_TypeInfo, v27);
    sub_B16FFC(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v28);
    sub_B16FFC(&StringLiteral_18858, v29);
    sub_B16FFC(&StringLiteral_13278, v30);
    sub_B16FFC(&StringLiteral_13279, v31);
    sub_B16FFC(&StringLiteral_1, v32);
    byte_40FCDD6 = 1;
  }
  isSelfTurn = 0;
  entity = 0LL;
  v347 = 0;
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
  v42 = (BattleActionData_o *)sub_B170CC(BattleActionData_TypeInfo, v38, v39, v40, v41);
  BattleActionData___ctor(v42, 0LL);
  data = this->fields.data;
  if ( !data )
    goto LABEL_309;
  v338 = v42;
  ServantData = BattleData__getServantData(data, actorId, 0LL);
  if ( !this->fields.data )
    goto LABEL_309;
  v45 = ServantData;
  v46 = BattleData__getServantData(this->fields.data, uniqueId, 0LL);
  v47 = ((__int64 (__fastcall *)(BattleLogicFunctionProcess_FunctionTargetCheck_o *, Il2CppMethodPointer))funcTarget->klass->vtable._7_MakeActionBuffData.method)(
          funcTarget,
          funcTarget->klass->vtable._8_AddBuff.methodPtr);
  if ( !v46 )
    goto LABEL_309;
  v340 = actorId;
  funcTargeta = funcTarget;
  if ( !v47 )
    goto LABEL_309;
  v344 = (BattleActionData_BuffData_o *)v47;
  *(_DWORD *)(v47 + 40) = v46->fields.uniqueId;
  *(_DWORD *)(v47 + 16) = funcIndex;
  v52 = sub_B170CC(BattleBuffData_BuffData_TypeInfo, v48, v49, v50, v51);
  BattleBuffData_BuffData___ctor((BattleBuffData_BuffData_o *)v52, 0LL);
  if ( !v36 )
    goto LABEL_309;
  if ( !v52 )
    goto LABEL_309;
  *(_DWORD *)(v52 + 16) = v36->fields.id;
  if ( !args )
    goto LABEL_309;
  *(_DWORD *)(v52 + 164) = BattleLogicFunction_ProcListInArgs__get_SkillId(args, 0LL);
  *(_DWORD *)(v52 + 188) = BattleLogicFunction_ProcListInArgs__get_GrantSkillType(args, 0LL);
  *(_DWORD *)(v52 + 176) = DataVals__GetMotionChange(dataVals_k__BackingField, 0LL);
  v54 = 2 * DataVals__GetParam(dataVals_k__BackingField, 1, 0, 0LL);
  *(_DWORD *)(v52 + 20) = v54;
  v55 = mainAction->fields.isReversalShortBuffTurn ^ v6;
  if ( (v55 & 1) != 0 )
    *(_DWORD *)(v52 + 20) = v54 - 1;
  if ( BattleLogicFunction__IsSvtBuffTurnExtend(this, uniqueId, v36, v55 & 1, v53) )
  {
    v55 ^= 1u;
    v56 = 1;
    ++*(_DWORD *)(v52 + 20);
  }
  else
  {
    v56 = 0;
  }
  *(_DWORD *)(v52 + 68) = v340;
  if ( !funcEnt )
    goto LABEL_309;
  v57 = (v55 ^ Target__isEnemy(funcEnt->fields.targetType, 0LL)) & 1;
  isSelfTurn = v57;
  type = v36->fields.type;
  if ( (BYTE3(BuffList_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !BuffList_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(BuffList_TypeInfo);
  if ( BuffList__IsForceProgressSelfTurnType(type, 0LL) )
  {
    v57 = 1;
    isSelfTurn = 1;
  }
  if ( (v56 & 1) == 0 )
  {
    BattleLogicFunction__UpdateBuffProgressTurn(this, v36->fields.type, &isSelfTurn, v59);
    v57 = isSelfTurn;
  }
  v60 = !v57;
  v61 = args;
  v62 = v60;
  v63 = v62 ^ v46->fields.isEnemy;
  *(_BYTE *)(v52 + 180) = v63;
  if ( (v56 & 1) == 0 )
  {
    ProgressSelfTurn = BuffEntity__GetProgressSelfTurn(v36, 0LL);
    if ( (ProgressSelfTurn & 0x80000000) != 0 )
    {
      v63 = *(unsigned __int8 *)(v52 + 180);
    }
    else
    {
      v63 = (ProgressSelfTurn == 0) ^ v46->fields.isEnemy;
      *(_BYTE *)(v52 + 180) = v63;
    }
  }
  *(_BYTE *)(v52 + 192) = (v63 == 0) ^ v46->fields.isEnemy;
  v65 = this->fields.data;
  if ( !v65 )
    goto LABEL_309;
  battleEvent = v65->fields.battleEvent;
  if ( !battleEvent )
    goto LABEL_309;
  *(_DWORD *)(v52 + 184) = ((__int64 (__fastcall *)(struct BaseBattleEvent_o *, BuffEntity_o *, Il2CppMethodPointer))battleEvent->klass->vtable._24_GetProgressBuffTurnCond.method)(
                             battleEvent,
                             v36,
                             battleEvent->klass->vtable._25_SetDefaultPassiveBuffShowState.methodPtr);
  ProgressTurnCond = BuffEntity__GetProgressTurnCond(v36, 0LL);
  if ( (ProgressTurnCond & 0x80000000) == 0 )
    *(_DWORD *)(v52 + 184) = ProgressTurnCond;
  *(_DWORD *)(v52 + 24) = DataVals__GetParam(dataVals_k__BackingField, 2, 0, 0LL);
  *(_DWORD *)(v52 + 28) = DataVals__GetParam(dataVals_k__BackingField, 3, 0, 0LL);
  v344->fields.popDelay = DataVals__GetParam(dataVals_k__BackingField, 64, 0, 0LL);
  v68 = v36->fields.type;
  if ( (BYTE3(BuffList_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !BuffList_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(BuffList_TypeInfo);
  if ( BuffList__CheckType(143, v68, 0LL) )
    goto LABEL_54;
  v69 = v36->fields.type;
  if ( (BYTE3(BuffList_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !BuffList_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(BuffList_TypeInfo);
  if ( BuffList__CheckType(145, v69, 0LL) )
    goto LABEL_54;
  v70 = v36->fields.type;
  if ( (BYTE3(BuffList_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !BuffList_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(BuffList_TypeInfo);
  if ( BuffList__CheckType(146, v70, 0LL) )
    goto LABEL_54;
  v71 = v36->fields.type;
  if ( (BYTE3(BuffList_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !BuffList_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(BuffList_TypeInfo);
  if ( BuffList__CheckType(147, v71, 0LL) )
  {
LABEL_54:
    tdCommandTypeChange = args->fields.tdCommandTypeChange;
    if ( (tdCommandTypeChange & 0x80000000) == 0 )
      *(_DWORD *)(v52 + 28) = tdCommandTypeChange;
  }
  *(_DWORD *)(v52 + 52) = DataVals__GetParam(dataVals_k__BackingField, 8, 0, 0LL);
  *(_DWORD *)(v52 + 56) = DataVals__GetParam(dataVals_k__BackingField, 9, 0, 0LL);
  v74 = (System_Int32_array **)sub_B17014(int___TypeInfo, 2LL, v73);
  *(_QWORD *)(v52 + 40) = v74;
  sub_B16F98((BattleServantConfConponent_o *)(v52 + 40), v74, v75, v76, v77, v78, v79, v80);
  v81 = *(_QWORD *)(v52 + 40);
  Param = DataVals__GetParam(dataVals_k__BackingField, 3, 0, 0LL);
  if ( !v81 )
    goto LABEL_309;
  if ( !*(_DWORD *)(v81 + 24) )
    goto LABEL_310;
  *(_DWORD *)(v81 + 32) = Param;
  v85 = *(_QWORD *)(v52 + 40);
  Param = DataVals__GetParam(dataVals_k__BackingField, 4, 0, 0LL);
  if ( !v85 )
    goto LABEL_309;
  if ( *(_DWORD *)(v85 + 24) <= 1u )
    goto LABEL_310;
  v337 = mainAction;
  *(_DWORD *)(v85 + 36) = Param;
  v86 = v36->fields.type;
  if ( (BYTE3(BuffList_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !BuffList_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(BuffList_TypeInfo);
  if ( BuffList__CheckType(135, v86, 0LL) )
  {
    v87 = this->fields.data;
    if ( !v87 )
      goto LABEL_309;
    battle_ent = v87->fields.battle_ent;
    if ( !battle_ent )
      goto LABEL_309;
    userId = battle_ent->fields.userId;
    eventId = battle_ent->fields.eventId;
    Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !Instance )
      goto LABEL_309;
    MasterData_WarQuestSelectionMaster = (EventPointBuffMaster_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                                     (DataManager_o *)Instance,
                                                                     (const MethodInfo_18C3284 *)Method_DataManager_GetMasterData_EventPointBuffMaster___);
    if ( !MasterData_WarQuestSelectionMaster )
      goto LABEL_309;
    v93 = MasterData_WarQuestSelectionMaster;
    EventPointGroupId = EventPointBuffMaster__GetEventPointGroupId(
                          MasterData_WarQuestSelectionMaster,
                          eventId,
                          funcEnt->fields.id,
                          0,
                          0LL);
    v95 = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !v95 )
      goto LABEL_309;
    v96 = (UserEventPointMaster_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                      (DataManager_o *)v95,
                                      (const MethodInfo_18C3284 *)Method_DataManager_GetMasterData_UserEventPointMaster___);
    if ( !v96 )
      goto LABEL_309;
    EntityDefinitely = UserEventPointMaster__GetEntityDefinitely(v96, userId, eventId, EventPointGroupId, 0LL);
    v61 = args;
    if ( EntityDefinitely )
    {
      value = EntityDefinitely->fields.value;
      Param = (__int64)EventPointBuffMaster__GetAllEventBuff(
                         v93,
                         EntityDefinitely->fields.eventId,
                         EventPointGroupId,
                         0LL);
      if ( !Param )
        goto LABEL_309;
      v99 = *(_DWORD *)(Param + 24);
      if ( v99 >= 1 )
      {
        v100 = 0;
        v101 = 0LL;
        do
        {
          if ( v100 >= (unsigned int)v99 )
            goto LABEL_310;
          v102 = *(_QWORD *)(Param + 8LL * v100 + 32);
          if ( !v102 )
            goto LABEL_309;
          if ( value < *(int *)(v102 + 28) )
            break;
          ++v100;
          v101 = v102;
        }
        while ( v100 < v99 );
        if ( v101 )
          *(_DWORD *)(v52 + 28) += *(_DWORD *)(v101 + 64);
      }
    }
  }
  if ( DataVals__isParam(dataVals_k__BackingField, 26, 0LL) && DataVals__isParam(dataVals_k__BackingField, 27, 0LL) )
  {
    v104 = (System_Int32_array **)sub_B17014(int___TypeInfo, 2LL, v103);
    *(_QWORD *)(v52 + 104) = v104;
    sub_B16F98((BattleServantConfConponent_o *)(v52 + 104), v104, v105, v106, v107, v108, v109, v110);
    v111 = *(_QWORD *)(v52 + 104);
    Param = DataVals__GetParam(dataVals_k__BackingField, 26, 0, 0LL);
    if ( !v111 )
      goto LABEL_309;
    if ( !*(_DWORD *)(v111 + 24) )
      goto LABEL_310;
    *(_DWORD *)(v111 + 32) = Param;
    v112 = *(_QWORD *)(v52 + 104);
    Param = DataVals__GetParam(dataVals_k__BackingField, 27, 0, 0LL);
    if ( !v112 )
      goto LABEL_309;
    if ( *(_DWORD *)(v112 + 24) <= 1u )
      goto LABEL_310;
    *(_DWORD *)(v112 + 36) = Param;
  }
  *(_DWORD *)(v52 + 64) = DataVals__GetParam(dataVals_k__BackingField, 15, 0, 0LL);
  *(_DWORD *)(v52 + 344) = DataVals__GetClassIconAuraEffectId(dataVals_k__BackingField, 0LL);
  if ( DataVals__GetParam(dataVals_k__BackingField, 11, 0, 0LL) >= 1 )
    *(_DWORD *)(v52 + 60) = v340;
  if ( DataVals__GetParam(dataVals_k__BackingField, 46, 0, 0LL) >= 1 )
    BattleBuffData_BuffData__onState((BattleBuffData_BuffData_o *)v52, 0x8000, 0LL);
  v113 = v337;
  if ( DataVals__GetParam(dataVals_k__BackingField, 50, 0, 0LL) >= 1 )
    BattleBuffData_BuffData__onState((BattleBuffData_BuffData_o *)v52, 0x10000, 0LL);
  if ( DataVals__GetParam(dataVals_k__BackingField, 88, 0, 0LL) >= 1 )
    BattleBuffData_BuffData__onState((BattleBuffData_BuffData_o *)v52, 0x80000, 0LL);
  if ( DataVals__GetParam(dataVals_k__BackingField, 90, 0, 0LL) >= 1 )
    BattleBuffData_BuffData__onState((BattleBuffData_BuffData_o *)v52, 0x100000, 0LL);
  if ( DataVals__GetParam(dataVals_k__BackingField, 65, 0, 0LL) >= 1 )
    BattleBuffData_BuffData__onState((BattleBuffData_BuffData_o *)v52, 0x40000, 0LL);
  if ( DataVals__GetParam(dataVals_k__BackingField, 144, 0, 0LL) >= 1 )
    BattleBuffData_BuffData__onState((BattleBuffData_BuffData_o *)v52, 0x2000000, 0LL);
  if ( DataVals__isParam(dataVals_k__BackingField, 42, 0LL) )
  {
    v114 = DataVals__GetParam(dataVals_k__BackingField, 42, 0, 0LL);
    v119 = sub_B170CC(BattleBuffData_FieldAliveCondData_TypeInfo, v115, v116, v117, v118);
    BattleBuffData_FieldAliveCondData___ctor((BattleBuffData_FieldAliveCondData_o *)v119, 0LL);
    if ( !v119 )
      goto LABEL_309;
    isEnemy = v46->fields.isEnemy;
    *(_BYTE *)(v119 + 17) = v114 > 0;
    *(_BYTE *)(v119 + 16) = isEnemy;
    if ( (BYTE3(System_Math_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !System_Math_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(System_Math_TypeInfo);
    if ( v114 >= 0 )
      v121 = v114;
    else
      v121 = -v114;
    *(_DWORD *)(v119 + 20) = v121;
    TargetIndiv = (System_Int32_array **)BuffEntity__GetTargetIndiv(v36, 0LL);
    *(_QWORD *)(v119 + 24) = TargetIndiv;
    sub_B16F98((BattleServantConfConponent_o *)(v119 + 24), TargetIndiv, v123, v124, v125, v126, v127, v128);
    *(_BYTE *)(v119 + 32) = BuffEntity__IsIncludeIgnoreIndividuality(v36, 0LL);
    *(_QWORD *)(v52 + 152) = v119;
    sub_B16F98(
      (BattleServantConfConponent_o *)(v52 + 152),
      (System_Int32_array **)v119,
      v129,
      v130,
      v131,
      v132,
      v133,
      v134);
    v61->fields.updateField = 1;
  }
  v135 = v36->fields.type;
  if ( (BYTE3(BuffList_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !BuffList_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(BuffList_TypeInfo);
  if ( BuffList__IsIntervalPossibleBuff(v135, 0LL) )
  {
    IntervalData = (System_Int32_array **)DataVals__GetIntervalData(dataVals_k__BackingField, 0LL);
    *(_QWORD *)(v52 + 360) = IntervalData;
    sub_B16F98((BattleServantConfConponent_o *)(v52 + 360), IntervalData, v137, v138, v139, v140, v141, v142);
  }
  if ( BattleBuffData__CheckInvalidSacrificeIndiv((BattleBuffData_BuffData_o *)v52, 0LL) )
    v61->fields.updateField = 1;
  ParamArray = (System_Int32_array **)DataVals__GetParamArray(dataVals_k__BackingField, 115, 0LL);
  *(_QWORD *)(v52 + 328) = ParamArray;
  sub_B16F98((BattleServantConfConponent_o *)(v52 + 328), ParamArray, v144, v145, v146, v147, v148, v149);
  *(_DWORD *)(v52 + 208) = BuffEntity__GetCardEffectId(v36, 0LL);
  v150 = v36->fields.type;
  if ( (BYTE3(BuffList_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !BuffList_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(BuffList_TypeInfo);
  if ( BuffList__CheckType(144, v150, 0LL) )
  {
    RelationId = BuffEntity__getRelationId(v36, 0LL);
    v156 = (BattleBuffData_RelationOverwriteData_o *)sub_B170CC(
                                                       BattleBuffData_RelationOverwriteData_TypeInfo,
                                                       v152,
                                                       v153,
                                                       v154,
                                                       v155);
    BattleBuffData_RelationOverwriteData___ctor(v156, 0LL);
    if ( RelationId >= 1 )
    {
      v163 = BuffEntity__getRelationId(v36, 0LL);
      if ( !v156 )
        goto LABEL_309;
      v156->fields.id = v163;
      v164 = BattleDataDefine_TypeInfo;
      if ( (BYTE3(BattleDataDefine_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !BattleDataDefine_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(BattleDataDefine_TypeInfo);
        v164 = BattleDataDefine_TypeInfo;
      }
      v156->fields.atkPriority = BuffEntity__getAtkRelationPriority(
                                   v36,
                                   v164->static_fields->OVERWRITE_ATK_RATE_PRIORITY,
                                   0LL);
      v156->fields.defPriority = BuffEntity__getDefRelationPriority(
                                   v36,
                                   BattleDataDefine_TypeInfo->static_fields->OVERWRITE_DEF_RATE_PRIORITY,
                                   0LL);
    }
    *(_QWORD *)(v52 + 168) = v156;
    sub_B16F98(
      (BattleServantConfConponent_o *)(v52 + 168),
      (System_Int32_array **)v156,
      v157,
      v158,
      v159,
      v160,
      v161,
      v162);
  }
  v165 = v36->fields.type;
  if ( (BYTE3(BuffList_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !BuffList_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(BuffList_TypeInfo);
  if ( BuffList__CheckType(154, v165, 0LL) )
  {
    BuffData = BattleServantData__get_BuffData(v46, 0LL);
    if ( !BuffData )
      goto LABEL_309;
    skillChangeData = BuffData->fields.skillChangeData;
    if ( !skillChangeData )
      goto LABEL_309;
    BattleBuffData_SkillRankChangeData__UpdateAddRightAfter(skillChangeData, 1, 0LL);
    BattleActionData_BuffData__OnUpdateBuffType(v344, 1, 0LL);
  }
  v168 = BuffEntity__checkBuffType(v36, 7, 0LL);
  if ( v45 && v168 )
  {
    UpDownGiveHeal = BattleServantData__getUpDownGiveHeal(v45, v46, 0LL);
    v170 = BattleUtility__FloorToInt(UpDownGiveHeal * (float)*(int *)(v52 + 28), 0LL);
    v171 = *(_DWORD *)(v52 + 52);
    *(_DWORD *)(v52 + 28) = v170;
    v172 = BattleUtility__FloorToInt(UpDownGiveHeal * (float)v171, 0LL);
    v173 = *(_DWORD *)(v52 + 56);
    *(_DWORD *)(v52 + 52) = v172;
    *(_DWORD *)(v52 + 56) = BattleUtility__FloorToInt(UpDownGiveHeal * (float)v173, 0LL);
    BattleServantData__getIndividualities(v45, 0LL, 0LL);
  }
  *(_BYTE *)(v52 + 32) = 0;
  *(_BYTE *)(v52 + 33) = BattleLogicFunction_ProcListInArgs__get_IsPassive(v61, 0LL);
  if ( DataVals__isParam(dataVals_k__BackingField, 23, 0LL) )
    *(_BYTE *)(v52 + 33) = 1;
  if ( DataVals__isParam(dataVals_k__BackingField, 24, 0LL) )
    *(_BYTE *)(v52 + 33) = 0;
  if ( dataVals_k__BackingField->fields.flgBoost )
    BattleBuffData_BuffData__onState((BattleBuffData_BuffData_o *)v52, 2, 0LL);
  if ( DataVals__isRatioHpRange(dataVals_k__BackingField, 0LL) )
  {
    *(_DWORD *)(v52 + 72) = DataVals__GetParam(dataVals_k__BackingField, 20, 0, 0LL);
    *(_DWORD *)(v52 + 76) = DataVals__GetParam(dataVals_k__BackingField, 21, 0, 0LL);
    *(_DWORD *)(v52 + 80) = DataVals__GetParam(dataVals_k__BackingField, 30, 0, 0LL);
    *(_DWORD *)(v52 + 84) = DataVals__GetParam(dataVals_k__BackingField, 31, 0, 0LL);
  }
  else if ( DataVals__isParam(dataVals_k__BackingField, 20, 0LL) )
  {
    *(_DWORD *)(v52 + 72) = DataVals__GetParam(dataVals_k__BackingField, 20, 0, 0LL);
  }
  else if ( DataVals__isParam(dataVals_k__BackingField, 21, 0LL) )
  {
    *(_DWORD *)(v52 + 76) = DataVals__GetParam(dataVals_k__BackingField, 21, 0, 0LL);
  }
  if ( DataVals__isParamAddIndividuality(dataVals_k__BackingField, 0LL) )
  {
    v174 = (System_Int32_array **)DataVals__GetParamArray(dataVals_k__BackingField, 69, 0LL);
    *(_QWORD *)(v52 + 224) = v174;
    sub_B16F98((BattleServantConfConponent_o *)(v52 + 224), v174, v175, v176, v177, v178, v179, v180);
    v181 = (System_Int32_array **)DataVals__GetParamArray(dataVals_k__BackingField, 70, 0LL);
    *(_QWORD *)(v52 + 232) = v181;
    sub_B16F98((BattleServantConfConponent_o *)(v52 + 232), v181, v182, v183, v184, v185, v186, v187);
    v188 = (System_Int32_array **)DataVals__GetParamArray(dataVals_k__BackingField, 71, 0LL);
    *(_QWORD *)(v52 + 240) = v188;
    sub_B16F98((BattleServantConfConponent_o *)(v52 + 240), v188, v189, v190, v191, v192, v193, v194);
    *(_DWORD *)(v52 + 248) = DataVals__GetParam(dataVals_k__BackingField, 72, 0, 0LL);
    *(_DWORD *)(v52 + 252) = DataVals__GetParam(dataVals_k__BackingField, 59, 0, 0LL);
    *(_DWORD *)(v52 + 268) = DataVals__GetParam(dataVals_k__BackingField, 60, 0, 0LL);
  }
  v195 = v36->fields.type;
  if ( (BYTE3(BuffList_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !BuffList_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(BuffList_TypeInfo);
  if ( BuffList__CheckType(162, v195, 0LL) )
  {
    UpBuffRateBuffTypeList = (System_Int32_array **)BuffEntity__GetUpBuffRateBuffTypeList(v36, 0LL);
    *(_QWORD *)(v52 + 256) = UpBuffRateBuffTypeList;
    sub_B16F98((BattleServantConfConponent_o *)(v52 + 256), UpBuffRateBuffTypeList, v197, v198, v199, v200, v201, v202);
    *(_DWORD *)(v52 + 264) = BuffEntity__GetMaxBuffRate(v36, 0LL);
  }
  if ( DataVals__isParam(dataVals_k__BackingField, 22, 0LL) )
    BattleBuffData_BuffData__onState((BattleBuffData_BuffData_o *)v52, 64, 0LL);
  if ( DataVals__isParam(dataVals_k__BackingField, 25, 0LL) )
    BattleBuffData_BuffData__onState((BattleBuffData_BuffData_o *)v52, 128, 0LL);
  if ( DataVals__isShowState(dataVals_k__BackingField, 0LL) )
  {
    ShowStateWarBoardEnemyEquip = DataVals__GetParam(dataVals_k__BackingField, 14, 0, 0LL);
LABEL_163:
    BattleBuffData_BuffData__setShowState((BattleBuffData_BuffData_o *)v52, ShowStateWarBoardEnemyEquip, 0LL);
    goto LABEL_181;
  }
  if ( *(_BYTE *)(v52 + 33) )
  {
    externalArg = v61->fields.externalArg;
    if ( !externalArg )
      goto LABEL_309;
    if ( externalArg->fields.isWarBoard )
    {
      if ( !v45 )
        goto LABEL_309;
      if ( v45->fields.isEnemy && externalArg->fields.grantSkillType == 12 )
      {
        ShowStateWarBoardEnemyEquip = BuffEntity__GetShowStateWarBoardEnemyEquip(v36, 0, 0LL);
        if ( ShowStateWarBoardEnemyEquip )
          goto LABEL_163;
        if ( (BYTE3(DataManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !DataManager_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
        }
        Master_WarQuestSelectionMaster = (DataMasterBase_WarMaster__WarEntity__int__o *)DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_18C3224 *)Method_DataManager_GetMaster_BuffTypeDetailMaster___);
        if ( !Master_WarQuestSelectionMaster )
          goto LABEL_309;
        if ( DataMasterBase_WarMaster__WarEntity__int___TryGetEntity(
               Master_WarQuestSelectionMaster,
               &entity,
               v36->fields.type,
               (const MethodInfo_266F3E4 *)Method_DataMasterBase_BuffTypeDetailMaster__BuffTypeDetailEntity__int__TryGetEntity__) )
        {
          if ( !entity )
            goto LABEL_309;
          ShowStateWarBoardEnemyEquip = BuffTypeDetailEntity__GetShowStateWarBoardEnemyEquip(
                                          (BuffTypeDetailEntity_o *)entity,
                                          0,
                                          0LL);
          if ( ShowStateWarBoardEnemyEquip )
            goto LABEL_163;
        }
      }
    }
    v206 = this->fields.data;
    if ( !v206 )
      goto LABEL_309;
    v207 = v206->fields.battleEvent;
    if ( !v207 )
      goto LABEL_309;
    ((void (__fastcall *)(struct BaseBattleEvent_o *, __int64, Il2CppMethodPointer))v207->klass->vtable._25_SetDefaultPassiveBuffShowState.method)(
      v207,
      v52,
      v207->klass->vtable._26_ProcOnActAiFixed.methodPtr);
  }
LABEL_181:
  if ( DataVals__IsOpponentOnly(dataVals_k__BackingField, 0LL) )
    BattleBuffData_BuffData__onState((BattleBuffData_BuffData_o *)v52, 2048, 0LL);
  if ( DataVals__isShowCommand(dataVals_k__BackingField, 0LL) )
    BattleBuffData_BuffData__onState((BattleBuffData_BuffData_o *)v52, 512, 0LL);
  if ( DataVals__IsAddIndividualty(dataVals_k__BackingField, 0LL) )
  {
    AddIndividualty = (System_Int32_array **)DataVals__GetAddIndividualty(dataVals_k__BackingField, 0LL);
    *(_QWORD *)(v52 + 120) = AddIndividualty;
    sub_B16F98((BattleServantConfConponent_o *)(v52 + 120), AddIndividualty, v209, v210, v211, v212, v213, v214);
  }
  if ( DataVals__IsAddLinkageTargetIndividualty(dataVals_k__BackingField, 0LL) )
  {
    LinkageTargetIndividualty = (System_Int32_array **)DataVals__GetLinkageTargetIndividualty(
                                                         dataVals_k__BackingField,
                                                         0LL);
    *(_QWORD *)(v52 + 128) = LinkageTargetIndividualty;
    sub_B16F98(
      (BattleServantConfConponent_o *)(v52 + 128),
      LinkageTargetIndividualty,
      v216,
      v217,
      v218,
      v219,
      v220,
      v221);
  }
  v222 = funcTargeta->fields._funcUnit_k__BackingField;
  if ( !v222 )
    goto LABEL_309;
  if ( BattleLogicFunctionProcess_FunctionUnitCheck__HasLinkedFuncUnit(v222, 0LL)
    && DataVals__IsBehaveAsFamilyBuff(dataVals_k__BackingField, 0LL) )
  {
    BattleLogicFunction__BehaveLinkageBuffAsFamily(this, (BattleBuffData_BuffData_o *)v52, funcTargeta, v223);
  }
  if ( DataVals__isParam(dataVals_k__BackingField, 98, 0LL) )
    BattleBuffData_BuffData__onState((BattleBuffData_BuffData_o *)v52, 0x800000, 0LL);
  if ( DataVals__isParam(dataVals_k__BackingField, 99, 0LL) )
    BattleBuffData_BuffData__onState((BattleBuffData_BuffData_o *)v52, 0x1000000, 0LL);
  if ( BuffEntity__getAppearanceId(v36, 0LL) >= 1 )
  {
    if ( BattleServantData__isShiftableServant(v46, 0LL) )
      goto LABEL_204;
    v224 = this->fields.data;
    if ( !v224 )
      goto LABEL_309;
    v225 = v224->fields.battleEvent;
    if ( !v225 )
      goto LABEL_309;
    if ( (((__int64 (__fastcall *)(struct BaseBattleEvent_o *, BattleServantData_o *, Il2CppMethodPointer))v225->klass->vtable._19_IsUseDefeatPointReady.method)(
            v225,
            v46,
            v225->klass->vtable._20_IsLogicEscape.methodPtr) & 1) != 0
      || BattleServantData__isLogicResultAlive(v46, 0LL)
      || BattleServantData__isGuts(v46, 0LL) )
    {
LABEL_204:
      BattleBuffData_BuffData__onState((BattleBuffData_BuffData_o *)v52, 256, 0LL);
    }
  }
  *(_DWORD *)(v52 + 276) = DataVals__GetParam(dataVals_k__BackingField, 92, 0, 0LL);
  *(_DWORD *)(v52 + 280) = DataVals__GetParam(dataVals_k__BackingField, 93, 0, 0LL);
  *(_DWORD *)(v52 + 284) = DataVals__GetParam(dataVals_k__BackingField, 94, 0, 0LL);
  *(_BYTE *)(v52 + 288) = DataVals__GetParam(dataVals_k__BackingField, 95, 0, 0LL) == 1;
  *(_BYTE *)(v52 + 289) = DataVals__GetParam(dataVals_k__BackingField, 96, 0, 0LL) == 1;
  ValsList = (System_Int32_array **)DataVals__GetValsList(dataVals_k__BackingField, 101, 0LL);
  *(_QWORD *)(v52 + 304) = ValsList;
  sub_B16F98((BattleServantConfConponent_o *)(v52 + 304), ValsList, v227, v228, v229, v230, v231, v232);
  v233 = DataVals__GetParam(dataVals_k__BackingField, 5, 0, 0LL);
  v234 = *(_DWORD *)(v52 + 60);
  if ( v233 )
    v235 = v233;
  else
    v235 = 1000;
  *(_DWORD *)(v52 + 48) = v235;
  if ( v234 < 1 )
    goto LABEL_215;
  logic = (UnityEngine_Object_o *)this->fields.logic;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( UnityEngine_Object__op_Inequality(logic, 0LL, 0LL) )
  {
    v237 = this->fields.logic;
    if ( !v237 )
      goto LABEL_309;
    v238 = BattleLogic__checkInField(v237, *(_DWORD *)(v52 + 60), 0LL);
  }
  else
  {
LABEL_215:
    v238 = 1;
  }
  v239 = v36->fields.type;
  if ( (BYTE3(BuffList_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !BuffList_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(BuffList_TypeInfo);
  if ( BuffList__CheckAccumulation(v239, 0LL) )
    BattleServantData__resetAccumulationDamage(v46, 0LL);
  v240 = treasureDvcId;
  *(_QWORD *)(v52 + 88) = userCommandCodeId;
  if ( userCommandCodeId >= 1 )
  {
    v241 = this->fields.data;
    if ( !v241 )
      goto LABEL_309;
    UserCommandCode = BattleData__getUserCommandCode(v241, userCommandCodeId, 0LL);
    if ( UserCommandCode )
      *(_DWORD *)(v52 + 160) = UserCommandCode->fields.commandCodeId;
  }
  *(_DWORD *)(v52 + 348) = v337->fields.commandAssistId;
  *(_DWORD *)(v52 + 352) = v337->fields.cardIndex;
  ((void (__fastcall *)(BattleLogicFunctionProcess_FunctionTargetCheck_o *, __int64, Il2CppMethodPointer))funcTargeta->klass->vtable._6_ApplyPrevSaveBuffData.method)(
    funcTargeta,
    v52,
    funcTargeta->klass->vtable._7_MakeActionBuffData.methodPtr);
  MaxHp = BattleServantData__getMaxHp(v46, 0LL);
  userCommandCodeIda = ((__int64 (__fastcall *)(BattleServantData_o *, Il2CppMethodPointer))v46->klass->vtable._9_get_hp.method)(
                         v46,
                         v46->klass->vtable._10_set_hp.methodPtr);
  if ( !v238 )
    goto LABEL_232;
  v244 = v36->fields.type;
  if ( (BYTE3(BuffList_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !BuffList_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(BuffList_TypeInfo);
  v245 = BuffList__CheckUpdateHp(v244, 0LL);
  v240 = treasureDvcId;
  if ( v245 )
  {
    v344->fields.procType = 2;
    if ( BattleServantData__isLogicResultAlive(v46, 0LL) )
    {
      v246 = 1LL;
    }
    else
    {
      if ( BattleServantData__isGuts(v46, 0LL) )
      {
        v247 = v46->fields.uniqueId;
        IsCommandSideEffect = BattleLogicFunction_ProcListInArgs__get_IsCommandSideEffect(args, 0LL);
        NoEffectObject = BattleLogicFunction__getNoEffectObject(
                           this,
                           v247,
                           funcIndex,
                           dataVals_k__BackingField,
                           IsCommandSideEffect,
                           0LL,
                           0LL,
                           v249);
        if ( !v338 )
          goto LABEL_309;
        BattleActionData__addAction(v338, NoEffectObject, 0LL);
      }
      v246 = 0LL;
    }
    ((void (__fastcall *)(BattleLogicFunctionProcess_FunctionTargetCheck_o *, BattleActionData_BuffData_o *, __int64, __int64, __int64, Il2CppMethodPointer))funcTargeta->klass->vtable._8_AddBuff.method)(
      funcTargeta,
      v344,
      v52,
      1LL,
      v246,
      funcTargeta->klass->vtable._9_MakeWrapTarget.methodPtr);
    if ( !v338 )
      goto LABEL_309;
    BattleActionData__addReflectLogicResultServantId(v338, uniqueId, 0LL);
    v255 = (BattleActionEffect_AddChangeMaxHpBuff_o *)sub_B170CC(
                                                        BattleActionEffect_AddChangeMaxHpBuff_TypeInfo,
                                                        v251,
                                                        v252,
                                                        v253,
                                                        v254);
    BattleActionEffect_AddChangeMaxHpBuff___ctor(v255, 0LL);
    v257 = sub_B17014(BattleBuffData_BuffData___TypeInfo, 1LL, v256);
    if ( !v257 )
      goto LABEL_309;
    v258 = v257;
    Param = sub_B170BC(v52, *(_QWORD *)(*(_QWORD *)v257 + 64LL));
    if ( !Param )
    {
      sub_B170F4(0LL);
      sub_B170A0();
    }
    if ( !*(_DWORD *)(v258 + 24) )
      goto LABEL_310;
    *(_QWORD *)(v258 + 32) = v52;
    sub_B16F98(
      (BattleServantConfConponent_o *)(v258 + 32),
      (System_Int32_array **)v52,
      v84,
      v259,
      v260,
      v261,
      v262,
      v263);
    NowHp = BattleServantData__getNowHp(v46, 0LL);
    if ( !v255 )
      goto LABEL_309;
    v265 = (System_Int32_array **)((__int64 (__fastcall *)(BattleActionEffect_AddChangeMaxHpBuff_o *, __int64, _QWORD, _QWORD, Il2CppMethodPointer))v255->klass->vtable._7_InitBuff.method)(
                                    v255,
                                    v258,
                                    uniqueId,
                                    (unsigned int)(NowHp - userCommandCodeIda),
                                    v255->klass->vtable._8_PartialPreActionProc.methodPtr);
    v344->fields.EffectProc = (struct BattleActionEffect_Base_o *)v265;
    sub_B16F98((BattleServantConfConponent_o *)&v344->fields.EffectProc, v265, v266, v267, v268, v269, v270, v271);
    v113 = v337;
  }
  else
  {
LABEL_232:
    ((void (__fastcall *)(BattleLogicFunctionProcess_FunctionTargetCheck_o *, BattleActionData_BuffData_o *, __int64, bool, _QWORD, Il2CppMethodPointer))funcTargeta->klass->vtable._8_AddBuff.method)(
      funcTargeta,
      v344,
      v52,
      v238,
      0LL,
      funcTargeta->klass->vtable._9_MakeWrapTarget.methodPtr);
  }
  id = v36->fields.id;
  if ( id == ConstantMaster__getValue((System_String_o *)StringLiteral_13278, 0LL) )
  {
    v277 = (System_Collections_Generic_List_int__o *)sub_B170CC(
                                                       System_Collections_Generic_List_int__TypeInfo,
                                                       v273,
                                                       v274,
                                                       v275,
                                                       v276);
    System_Collections_Generic_List_int____ctor(
      v277,
      (const MethodInfo_2F0F794 *)Method_System_Collections_Generic_List_int___ctor__);
    v347 = 1;
    for ( i = System_Int32__ToString((int32_t)&v347, 0LL); ; i = System_Int32__ToString((int32_t)&v347, 0LL) )
    {
      v281 = System_String__Concat_43743732((System_String_o *)StringLiteral_13279, i, 0LL);
      if ( ConstantMaster__getValue(v281, 0LL) == -1 )
        break;
      v279 = System_Int32__ToString((int32_t)&v347, 0LL);
      v280 = System_String__Concat_43743732((System_String_o *)StringLiteral_13279, v279, 0LL);
      if ( ConstantMaster__getValue(v280, 0LL) == v240 )
      {
        if ( !v45 )
          goto LABEL_309;
        BattleServantData__SetIsSleepWaitMode(v45, 1, 0LL);
      }
      ++v347;
    }
  }
  v282 = this->fields.data;
  if ( !v282 )
    goto LABEL_309;
  QuestIndividualities = BattleData__getQuestIndividualities(v282, 0LL);
  v284 = (UnityEngine_Object_o *)this->fields.logic;
  v285 = QuestIndividualities;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  v286 = UnityEngine_Object__op_Inequality(v284, 0LL, 0LL);
  perf = 0LL;
  if ( v286 )
  {
    v288 = this->fields.logic;
    if ( !v288 )
      goto LABEL_309;
    perf = v288->fields.perf;
  }
  BattleServantData__updateConditionsBuff(v46, v285, perf, 0LL);
  if ( BuffEntity__checkBuffType(v36, 133, 0LL) || *(_QWORD *)(v52 + 312) )
  {
    v289 = (UnityEngine_Object_o *)this->fields.logic;
    if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    }
    if ( UnityEngine_Object__op_Inequality(v289, 0LL, 0LL) )
    {
      v290 = this->fields.logic;
      if ( !v290 )
        goto LABEL_309;
      BattleLogic__updateConditionsBuffAll(v290, 0LL);
    }
    v291 = this->fields.data;
    if ( !v291 )
      goto LABEL_309;
    Param = (__int64)BattleData__getFieldServantList(v291, 0, 0LL);
    if ( !Param )
      goto LABEL_309;
    v292 = *(_DWORD *)(Param + 24);
    v293 = Param;
    if ( v292 >= 1 )
    {
      v294 = 0;
      while ( v294 < v292 )
      {
        v295 = *(BattleServantData_o **)(v293 + 8LL * (int)v294 + 32);
        if ( !v295 )
          goto LABEL_309;
        BattleServantData__updateBuff(v295, 1, 1, 0LL);
        v292 = *(_DWORD *)(v293 + 24);
        if ( (int)++v294 >= v292 )
          goto LABEL_272;
      }
LABEL_310:
      sub_B17100(Param, v83, v84);
      sub_B170A0();
    }
  }
LABEL_272:
  if ( BattleServantData__getMaxHp(v46, 0LL) < MaxHp && BuffEntity__checkBuffType(v36, 41, 0LL) )
  {
    v296 = v46->fields.maxhp;
    if ( (BYTE3(System_Math_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !System_Math_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(System_Math_TypeInfo);
    *(_DWORD *)(v52 + 136) = System_Math__Max_44463768(0, userCommandCodeIda - v296, 0LL);
  }
  v297 = this->fields.data;
  if ( !v297 )
    goto LABEL_309;
  v298 = v297->fields.battleEvent;
  if ( !v298 )
    goto LABEL_309;
  *(_BYTE *)(v52 + 212) = ((__int64 (__fastcall *)(struct BaseBattleEvent_o *, __int64, BuffEntity_o *, DataVals_o *, Il2CppMethodPointer))v298->klass->vtable._21_IsTakeOverNextBattleBuff.method)(
                            v298,
                            v52,
                            v36,
                            dataVals_k__BackingField,
                            v298->klass->vtable._22_IsActionPassiveSkillOnBattle.methodPtr) & 1;
  if ( BuffEntity__checkBuffType(v36, 140, 0LL) )
  {
    v303 = v46->fields.buffData;
    v304 = (BattleBuffData_CheckIndividualitiesData_o *)sub_B170CC(
                                                          BattleBuffData_CheckIndividualitiesData_TypeInfo,
                                                          v299,
                                                          v300,
                                                          v301,
                                                          v302);
    BattleBuffData_CheckIndividualitiesData___ctor(v304, v46, 0LL, 0LL, 0LL, 0LL, 0LL);
    if ( !v303 )
      goto LABEL_309;
    BuffList_31040328 = BattleBuffData__getBuffList_31040328(v303, 83, v304, 1, 0, 0LL);
    if ( !BuffList_31040328 )
      goto LABEL_309;
    if ( *(_QWORD *)&BuffList_31040328->max_length )
      BattleLogicFunction__functionResetCommandCard(this, v306, v307, v308, v309, v310);
  }
  if ( DataVals__IsOnParty(dataVals_k__BackingField, 0LL) )
    *(_DWORD *)(v52 + 272) = v340;
  v311 = BattleLogicFunction_ProcListInArgs__get_IsCommandSideEffect(args, 0LL);
  v312 = (BattleActionData_BuffData_o *)((__int64 (__fastcall *)(BattleLogicFunctionProcess_FunctionTargetCheck_o *, BattleActionData_BuffData_o *, __int64, struct FunctionEntity_o *, bool, Il2CppMethodPointer))funcTargeta->klass->vtable._10_MakeAddActionBuffData.method)(
                                          funcTargeta,
                                          v344,
                                          v52,
                                          funcEnt,
                                          v311,
                                          funcTargeta->klass->vtable._11_GetConvertBuffEntity.methodPtr);
  if ( BuffEntity__checkBuffType(v36, 142, 0LL) )
  {
    v313 = (UnityEngine_Object_o *)this->fields.logic;
    if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    }
    if ( UnityEngine_Object__op_Inequality(v313, 0LL, 0LL) )
    {
      v320 = this->fields.logic;
      if ( !v320 )
        goto LABEL_309;
      if ( !v312 )
        goto LABEL_309;
      v321 = v320->fields.perf;
      if ( !v321 )
        goto LABEL_309;
      BattlePerformance__SetMasterBuffEffectData(
        v321,
        v312->fields.popLabel,
        v312->fields.popColor,
        v312->fields.effectList,
        0LL);
    }
    else if ( !v312 )
    {
      goto LABEL_309;
    }
    v322 = (System_Int32_array **)StringLiteral_1;
    v312->fields.popLabel = (struct System_String_o *)StringLiteral_1;
    sub_B16F98((BattleServantConfConponent_o *)&v312->fields.popLabel, v322, v314, v315, v316, v317, v318, v319);
    v312->fields.popIcon = 0;
    v324 = (System_Int32_array **)sub_B17014(int___TypeInfo, 0LL, v323);
    v312->fields.effectList = (struct System_Int32_array *)v324;
    sub_B16F98((BattleServantConfConponent_o *)&v312->fields.effectList, v324, v325, v326, v327, v328, v329, v330);
    v312->fields.isBuffEffectTargetMaster = 1;
  }
  if ( DataVals__IsProgressTurnOnBoard(dataVals_k__BackingField, 0LL) )
    *(_BYTE *)(v52 + 368) = 1;
  BattleLogicFunction__AfterAddedBuffProcess(this, v46, v36, v331);
  if ( BuffEntity__getDamageRelease(v36, 0LL) >= 1
    && !BattleServantData__isLogicResultAlive(v46, 0LL)
    && BattleServantData__isGuts(v46, 0LL)
    || BuffEntity__getDamageRelease(v36, 0LL) == -1 )
  {
    v46->fields.isGutsSleepRelease = 0;
  }
  if ( !v338
    || (BattleActionData__setBuffData(v338, v312, dataVals_k__BackingField, 0LL), (v332 = this->fields.data) == 0LL) )
  {
LABEL_309:
    sub_B170D4();
  }
  BattleData__AddFreshBuffList(v332, v312, 0LL);
  BattleActionData__addAction(v113, v338, 0LL);
  return (BattleBuffData_BuffData_o *)v52;
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
  __int64 v18; // x3
  __int64 v19; // x4
  int32_t uniqueId; // w20
  int32_t funcIndex; // w21
  bool IsCommandSideEffect; // w0
  const MethodInfo *v23; // x7
  BattleActionData_o *NoEffectObject; // x0
  __int64 v25; // x19
  System_Int32_array **v26; // x0
  System_String_array **v27; // x2
  System_String_array **v28; // x3
  System_Boolean_array **v29; // x4
  System_Int32_array **v30; // x5
  System_Int32_array *v31; // x6
  System_Int32_array *v32; // x7
  int32_t v33; // w26
  int32_t v34; // w27
  FunctionEntity_o *funcEnt; // x28
  _BOOL8 v36; // x0
  const MethodInfo *v37; // x6
  BattleActionData_BuffData_o *FunctionObject; // x0
  __int64 v39; // x1
  __int64 v40; // x2
  __int64 v41; // x3
  __int64 v42; // x4
  BattleActionData_ShiftServant_o *v43; // x19
  __int64 v44; // x1
  __int64 v45; // x2
  __int64 v46; // x3
  __int64 v47; // x4
  SimpleHpData_o *v48; // x19
  __int64 v49; // x1
  __int64 v50; // x2
  __int64 v51; // x3
  __int64 v52; // x4
  EnemySimpleHpData_o *v53; // x27
  unsigned int Value; // w0
  int v55; // w0
  int v56; // w24
  int v57; // w22
  int32_t v58; // w25
  int32_t Param; // w0
  __int64 v60; // x1
  __int64 v61; // x2
  __int64 v62; // x3
  __int64 v63; // x4
  SimpleHpData_o *v64; // x26
  unsigned int CurrentShiftPos; // w28
  unsigned int MaxShiftIconPos; // w0
  BattleLogic_o *logic; // x0
  int v68; // [xsp+Ch] [xbp-74h]
  BattleActionData_ShiftServant_o *v69; // [xsp+10h] [xbp-70h]
  BattleActionData_o *v70; // [xsp+18h] [xbp-68h]
  BattleActionData_o *v71; // [xsp+20h] [xbp-60h]

  if ( (byte_40FCE00 & 1) == 0 )
  {
    sub_B16FFC(&BattleActionData_TypeInfo, mainAction);
    sub_B16FFC(&EnemySimpleHpData_TypeInfo, v10);
    sub_B16FFC(&System_Math_TypeInfo, v11);
    sub_B16FFC(&BattleActionData_ShiftServant_TypeInfo, v12);
    sub_B16FFC(&SimpleHpData_TypeInfo, v13);
    byte_40FCE00 = 1;
  }
  if ( !funcUnit || !targetSvtData )
    goto LABEL_33;
  procArg_k__BackingField = funcUnit->fields._procArg_k__BackingField;
  dataVals_k__BackingField = funcUnit->fields._dataVals_k__BackingField;
  if ( !BattleServantData__isShiftServant(targetSvtData, 0LL) )
    goto LABEL_36;
  if ( !shiftGauge )
    goto LABEL_33;
  if ( (((__int64 (__fastcall *)(BattleActionData_BaseShiftGaugeData_o *, BattleServantData_o *, Il2CppMethodPointer))shiftGauge->klass->vtable._8_unknown.method)(
          shiftGauge,
          targetSvtData,
          shiftGauge->klass->vtable._9_unknown.methodPtr) & 1) != 0 )
  {
LABEL_36:
    if ( dataVals_k__BackingField )
    {
      if ( procArg_k__BackingField )
      {
        uniqueId = targetSvtData->fields.uniqueId;
        funcIndex = dataVals_k__BackingField->fields.funcIndex;
        IsCommandSideEffect = BattleLogicFunction_ProcListInArgs__get_IsCommandSideEffect(procArg_k__BackingField, 0LL);
        NoEffectObject = BattleLogicFunction__getNoEffectObject(
                           this,
                           uniqueId,
                           funcIndex,
                           dataVals_k__BackingField,
                           IsCommandSideEffect,
                           0LL,
                           0LL,
                           v23);
        if ( mainAction )
        {
          BattleActionData__addAction(mainAction, NoEffectObject, 0LL);
          return;
        }
      }
    }
    goto LABEL_33;
  }
  v25 = sub_B170CC(BattleActionData_TypeInfo, v16, v17, v18, v19);
  BattleActionData___ctor((BattleActionData_o *)v25, 0LL);
  if ( !v25 )
    goto LABEL_33;
  *(_DWORD *)(v25 + 32) = targetSvtData->fields.uniqueId;
  *(_DWORD *)(v25 + 36) = targetSvtData->fields.uniqueId;
  v26 = (System_Int32_array **)((__int64 (__fastcall *)(BattleActionData_BaseShiftGaugeData_o *, Il2CppMethodPointer))shiftGauge->klass->vtable._7_unknown.method)(
                                 shiftGauge,
                                 shiftGauge->klass->vtable._8_unknown.methodPtr);
  *(_QWORD *)(v25 + 64) = v26;
  sub_B16F98((BattleServantConfConponent_o *)(v25 + 64), v26, v27, v28, v29, v30, v31, v32);
  if ( !dataVals_k__BackingField )
    goto LABEL_33;
  if ( !procArg_k__BackingField )
    goto LABEL_33;
  v33 = dataVals_k__BackingField->fields.funcIndex;
  v34 = targetSvtData->fields.uniqueId;
  funcEnt = dataVals_k__BackingField->fields.funcEnt;
  v36 = BattleLogicFunction_ProcListInArgs__get_IsCommandSideEffect(procArg_k__BackingField, 0LL);
  FunctionObject = BattleLogicFunction__getFunctionObject(
                     (BattleLogicFunction_o *)v36,
                     funcEnt,
                     v34,
                     v33,
                     v36,
                     0LL,
                     v37);
  if ( !FunctionObject )
    goto LABEL_33;
  v70 = (BattleActionData_o *)v25;
  v71 = mainAction;
  FunctionObject->fields.isUpdateShowBuffAfter = 0;
  BattleActionData__setBuffData((BattleActionData_o *)v25, FunctionObject, 0LL, 0LL);
  v43 = (BattleActionData_ShiftServant_o *)sub_B170CC(BattleActionData_ShiftServant_TypeInfo, v39, v40, v41, v42);
  BattleActionData_ShiftServant___ctor(v43, 0LL);
  if ( !v43 )
    goto LABEL_33;
  v69 = v43;
  BattleActionData_ShiftServant__setBeforeSvtData(v43, targetSvtData, 0LL);
  v48 = (SimpleHpData_o *)sub_B170CC(SimpleHpData_TypeInfo, v44, v45, v46, v47);
  SimpleHpData___ctor(v48, targetSvtData, 0LL);
  v53 = (EnemySimpleHpData_o *)sub_B170CC(EnemySimpleHpData_TypeInfo, v49, v50, v51, v52);
  EnemySimpleHpData___ctor(v53, targetSvtData, 0LL);
  ((void (__fastcall *)(BattleActionData_BaseShiftGaugeData_o *, BattleServantData_o *, Il2CppMethodPointer))shiftGauge->klass->vtable._12_Init.method)(
    shiftGauge,
    targetSvtData,
    shiftGauge->klass->vtable._13_InitShiftHpPos.methodPtr);
  Value = DataVals__GetValue(dataVals_k__BackingField, 0LL);
  v55 = ((__int64 (__fastcall *)(BattleActionData_BaseShiftGaugeData_o *, BattleServantData_o *, _QWORD, Il2CppMethodPointer))shiftGauge->klass->vtable._9_unknown.method)(
          shiftGauge,
          targetSvtData,
          Value,
          shiftGauge->klass->vtable._10_unknown.methodPtr);
  v56 = 1;
  v68 = v55;
  if ( v55 >= 0 )
    v57 = v55;
  else
    v57 = -v55;
  if ( v55 > 0 )
    v58 = 1;
  else
    v58 = -1;
  while ( 1 )
  {
    if ( (BYTE3(System_Math_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !System_Math_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(System_Math_TypeInfo);
    if ( v56 > v57 )
      break;
    BattleServantData__SetShiftServantChange(targetSvtData, this->fields.data, v53, v58, 0LL);
    Param = DataVals__GetParam(dataVals_k__BackingField, 58, 0, 0LL);
    ((void (__fastcall *)(BattleActionData_BaseShiftGaugeData_o *, BattleServantData_o *, bool, Il2CppMethodPointer))shiftGauge->klass->vtable._10_unknown.method)(
      shiftGauge,
      targetSvtData,
      Param > 0,
      shiftGauge->klass->vtable._11_unknown.methodPtr);
    v64 = (SimpleHpData_o *)sub_B170CC(SimpleHpData_TypeInfo, v60, v61, v62, v63);
    SimpleHpData___ctor(v64, targetSvtData, 0LL);
    CurrentShiftPos = BattleServantData__GetCurrentShiftPos(targetSvtData, 0LL);
    MaxShiftIconPos = BattleServantData__GetMaxShiftIconPos(targetSvtData, 0LL);
    ((void (__fastcall *)(BattleActionData_BaseShiftGaugeData_o *, _QWORD, _QWORD, SimpleHpData_o *, SimpleHpData_o *, Il2CppMethodPointer))shiftGauge->klass->vtable._11_unknown.method)(
      shiftGauge,
      CurrentShiftPos,
      MaxShiftIconPos,
      v48,
      v64,
      shiftGauge->klass->vtable._12_Init.methodPtr);
    ++v56;
    v48 = v64;
  }
  if ( v68 )
  {
    logic = this->fields.logic;
    if ( !logic )
      goto LABEL_33;
    BattleLogic__actEnemyPtPassiveSkill(logic, targetSvtData->fields.uniqueId, 1, 0, 0LL);
  }
  BattleActionData_ShiftServant__setCheckSvtData(v69, targetSvtData, 0LL);
  BattleActionData__setShiftServant(v70, v69, 0LL);
  BattleActionData__SetShiftGauge(v70, shiftGauge, 0LL);
  if ( !v71 )
LABEL_33:
    sub_B170D4();
  BattleActionData__AddAfterActionData(v71, v70, 0, 0LL);
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
  BattleData_o *data; // x0
  BattleServantData_o *ServantData; // x0
  BattleData_o *v21; // x25
  BattleServantData_o *v22; // x24
  bool v23; // w0
  BattleLogicFunction_o *FieldSpace; // x0
  const MethodInfo *v25; // x7
  System_String_o *v26; // x0
  int32_t v27; // w0
  BattleData_o *v28; // x24
  int32_t v29; // w0
  BattleData_o *v30; // x0
  BattleData_o *v31; // x0
  __int64 v32; // x2
  __int64 v33; // x0
  System_String_array **v34; // x2
  System_String_array **v35; // x3
  System_Boolean_array **v36; // x4
  System_Int32_array **v37; // x5
  System_Int32_array *v38; // x6
  System_Int32_array *v39; // x7
  System_String_array *v40; // x22
  BattleServantData_o *SummonEnemyServantData; // x0
  System_Int32_array **v42; // x1
  BattleActionData_o *v43; // x21
  System_String_array **v44; // x3
  System_Boolean_array **v45; // x4
  System_Int32_array **v46; // x5
  System_Int32_array *v47; // x6
  System_Int32_array *v48; // x7
  System_Int32_array **v49; // x23
  System_String_array **v50; // x3
  System_Boolean_array **v51; // x4
  System_Int32_array **v52; // x5
  System_Int32_array *v53; // x6
  System_Int32_array *v54; // x7
  System_String_array **v55; // x3
  System_Boolean_array **v56; // x4
  System_Int32_array **v57; // x5
  System_Int32_array *v58; // x6
  System_Int32_array *v59; // x7
  System_Int32_array **v60; // x23
  System_String_array **v61; // x3
  System_Boolean_array **v62; // x4
  System_Int32_array **v63; // x5
  System_Int32_array *v64; // x6
  System_Int32_array *v65; // x7
  System_String_array **v66; // x3
  System_Boolean_array **v67; // x4
  System_Int32_array **v68; // x5
  System_Int32_array *v69; // x6
  System_Int32_array *v70; // x7
  System_Int32_array **v71; // x23
  System_String_array **v72; // x3
  System_Boolean_array **v73; // x4
  System_Int32_array **v74; // x5
  System_Int32_array *v75; // x6
  System_Int32_array *v76; // x7
  BattleData_o *v77; // x0
  struct BattleData_o *v78; // x8
  struct System_Int32_array *e_entryid; // x8
  char *v80; // x8
  int32_t *v81; // x8
  int32_t v82; // w22
  int32_t v83; // t1
  BattleServantData_o *v84; // x23
  BattleLogic_o *logic; // x0
  __int64 v86; // x1
  __int64 v87; // x2
  __int64 v88; // x3
  __int64 v89; // x4
  int32_t uniqueId; // w23
  bool isEffectSummon; // w24
  int32_t v92; // w0
  int32_t Value; // [xsp+4h] [xbp-4Ch] BYREF
  __int64 v95; // [xsp+8h] [xbp-48h] BYREF
  int32_t targetIndex[2]; // [xsp+18h] [xbp-38h] BYREF

  if ( (byte_40FCDF1 & 1) == 0 )
  {
    sub_B16FFC(&BattleActionData_TypeInfo, *(_QWORD *)&playerId);
    sub_B16FFC(&string___TypeInfo, v12);
    sub_B16FFC(&StringLiteral_16562, v13);
    sub_B16FFC(&StringLiteral_15812, v14);
    sub_B16FFC(&StringLiteral_281, v15);
    sub_B16FFC(&StringLiteral_15813, v16);
    sub_B16FFC(&StringLiteral_18859, v17);
    sub_B16FFC(&StringLiteral_15807, v18);
    byte_40FCDF1 = 1;
  }
  *(_QWORD *)targetIndex = 0LL;
  v95 = 0LL;
  Value = 0;
  data = this->fields.data;
  if ( !data )
    goto LABEL_55;
  ServantData = BattleData__getServantData(data, playerId, 0LL);
  targetIndex[1] = -1;
  if ( !baseVals )
    goto LABEL_55;
  v21 = this->fields.data;
  v22 = ServantData;
  v23 = DataVals__isCheckEnemyFieldSpace(baseVals, 0LL);
  if ( !v21 )
    goto LABEL_55;
  FieldSpace = (BattleLogicFunction_o *)BattleData__getFieldSpace(v21, playerId, &targetIndex[1], v23, 0LL);
  if ( (_DWORD)FieldSpace )
  {
    Value = DataVals__GetValue(baseVals, 0LL);
    v26 = System_Int32__ToString((int32_t)&Value, 0LL);
    System_String__Concat_43743732((System_String_o *)StringLiteral_16562, v26, 0LL);
    targetIndex[0] = -1;
    if ( playerId == -1 )
    {
      v28 = this->fields.data;
      v29 = DataVals__GetValue(baseVals, 0LL);
      if ( !v28 )
        goto LABEL_55;
      FieldSpace = (BattleLogicFunction_o *)BattleData__GetEnemySummonId(v28, v29, 0LL);
    }
    else
    {
      v27 = DataVals__GetValue(baseVals, 0LL);
      if ( !v22 )
        goto LABEL_55;
      FieldSpace = (BattleLogicFunction_o *)BattleServantData__getSummonNpcId(v22, v27, 0LL);
    }
    targetIndex[0] = (int)FieldSpace;
    if ( (_DWORD)FieldSpace != -1 )
    {
      v30 = this->fields.data;
      if ( !v30 )
        goto LABEL_55;
      HIDWORD(v95) = BattleData__getNextUniqueID(v30, 0LL);
      v31 = this->fields.data;
      if ( !v31 )
        goto LABEL_55;
      LODWORD(v95) = BattleData__getNextNextIndex(v31, 0LL);
      v33 = sub_B17014(string___TypeInfo, 7LL, v32);
      if ( !v33 )
        goto LABEL_55;
      v40 = (System_String_array *)v33;
      SummonEnemyServantData = (BattleServantData_o *)StringLiteral_281;
      if ( StringLiteral_281 )
      {
        SummonEnemyServantData = (BattleServantData_o *)sub_B170BC(StringLiteral_281, v40->obj.klass->_1.element_class);
        if ( !SummonEnemyServantData )
          goto LABEL_57;
        v42 = (System_Int32_array **)StringLiteral_281;
      }
      else
      {
        v42 = 0LL;
      }
      if ( !v40->max_length )
        goto LABEL_56;
      v40->m_Items[0] = (System_String_o *)v42;
      sub_B16F98((BattleServantConfConponent_o *)v40->m_Items, v42, v34, v35, v36, v37, v38, v39);
      SummonEnemyServantData = (BattleServantData_o *)System_Int32__ToString((int32_t)targetIndex, 0LL);
      v49 = (System_Int32_array **)SummonEnemyServantData;
      if ( !SummonEnemyServantData
        || (SummonEnemyServantData = (BattleServantData_o *)sub_B170BC(
                                                              SummonEnemyServantData,
                                                              v40->obj.klass->_1.element_class)) != 0LL )
      {
        if ( v40->max_length <= 1 )
          goto LABEL_56;
        v40->m_Items[1] = (System_String_o *)v49;
        sub_B16F98((BattleServantConfConponent_o *)&v40->m_Items[1], v49, v34, v44, v45, v46, v47, v48);
        SummonEnemyServantData = (BattleServantData_o *)StringLiteral_15813;
        if ( StringLiteral_15813 )
        {
          SummonEnemyServantData = (BattleServantData_o *)sub_B170BC(
                                                            StringLiteral_15813,
                                                            v40->obj.klass->_1.element_class);
          if ( !SummonEnemyServantData )
            goto LABEL_57;
          v42 = (System_Int32_array **)StringLiteral_15813;
        }
        else
        {
          v42 = 0LL;
        }
        if ( v40->max_length <= 2 )
          goto LABEL_56;
        v40->m_Items[2] = (System_String_o *)v42;
        sub_B16F98((BattleServantConfConponent_o *)&v40->m_Items[2], v42, v34, v50, v51, v52, v53, v54);
        SummonEnemyServantData = (BattleServantData_o *)System_Int32__ToString((int32_t)&v95 + 4, 0LL);
        v60 = (System_Int32_array **)SummonEnemyServantData;
        if ( !SummonEnemyServantData
          || (SummonEnemyServantData = (BattleServantData_o *)sub_B170BC(
                                                                SummonEnemyServantData,
                                                                v40->obj.klass->_1.element_class)) != 0LL )
        {
          if ( v40->max_length <= 3 )
            goto LABEL_56;
          v40->m_Items[3] = (System_String_o *)v60;
          sub_B16F98((BattleServantConfConponent_o *)&v40->m_Items[3], v60, v34, v55, v56, v57, v58, v59);
          SummonEnemyServantData = (BattleServantData_o *)StringLiteral_15812;
          if ( StringLiteral_15812 )
          {
            SummonEnemyServantData = (BattleServantData_o *)sub_B170BC(
                                                              StringLiteral_15812,
                                                              v40->obj.klass->_1.element_class);
            if ( !SummonEnemyServantData )
              goto LABEL_57;
            v42 = (System_Int32_array **)StringLiteral_15812;
          }
          else
          {
            v42 = 0LL;
          }
          if ( v40->max_length <= 4 )
            goto LABEL_56;
          v40->m_Items[4] = (System_String_o *)v42;
          sub_B16F98((BattleServantConfConponent_o *)&v40->m_Items[4], v42, v34, v61, v62, v63, v64, v65);
          SummonEnemyServantData = (BattleServantData_o *)System_Int32__ToString((int32_t)&v95, 0LL);
          v71 = (System_Int32_array **)SummonEnemyServantData;
          if ( !SummonEnemyServantData
            || (SummonEnemyServantData = (BattleServantData_o *)sub_B170BC(
                                                                  SummonEnemyServantData,
                                                                  v40->obj.klass->_1.element_class)) != 0LL )
          {
            if ( v40->max_length <= 5 )
              goto LABEL_56;
            v40->m_Items[5] = (System_String_o *)v71;
            sub_B16F98((BattleServantConfConponent_o *)&v40->m_Items[5], v71, v34, v66, v67, v68, v69, v70);
            SummonEnemyServantData = (BattleServantData_o *)StringLiteral_15807;
            if ( !StringLiteral_15807 )
            {
              v42 = 0LL;
              goto LABEL_45;
            }
            SummonEnemyServantData = (BattleServantData_o *)sub_B170BC(
                                                              StringLiteral_15807,
                                                              v40->obj.klass->_1.element_class);
            if ( SummonEnemyServantData )
            {
              v42 = (System_Int32_array **)StringLiteral_15807;
LABEL_45:
              if ( v40->max_length > 6 )
              {
                v40->m_Items[6] = (System_String_o *)v42;
                sub_B16F98((BattleServantConfConponent_o *)&v40->m_Items[6], v42, v34, v72, v73, v74, v75, v76);
                System_String__Concat_43823856(v40, 0LL);
                v77 = this->fields.data;
                if ( !v77 )
                  goto LABEL_55;
                SummonEnemyServantData = BattleData__createSummonEnemyServantData(
                                           v77,
                                           SHIDWORD(v95),
                                           v95,
                                           targetIndex[0],
                                           0LL,
                                           0LL,
                                           0LL);
                v78 = this->fields.data;
                if ( !v78 )
                  goto LABEL_55;
                e_entryid = v78->fields.e_entryid;
                if ( !e_entryid )
                  goto LABEL_55;
                if ( targetIndex[1] < e_entryid->max_length )
                {
                  v80 = (char *)e_entryid + 4 * targetIndex[1];
                  v83 = *((_DWORD *)v80 + 8);
                  v81 = (int32_t *)(v80 + 32);
                  v82 = v83;
                  v84 = SummonEnemyServantData;
                  if ( SummonEnemyServantData )
                  {
                    *v81 = SummonEnemyServantData->fields.uniqueId;
                    SummonEnemyServantData->fields.isEntry = 1;
                    SummonEnemyServantData->fields.flgEntryFunction = 1;
                    BattleServantData__SetRemainActionCount(SummonEnemyServantData, 1, 0LL);
                    logic = this->fields.logic;
                    if ( logic )
                    {
                      BattleLogic__addEnemyActPriorityList(logic, v84, 0LL);
                      v43 = (BattleActionData_o *)sub_B170CC(BattleActionData_TypeInfo, v86, v87, v88, v89);
                      BattleActionData___ctor(v43, 0LL);
                      uniqueId = v84->fields.uniqueId;
                      isEffectSummon = DataVals__isEffectSummon(baseVals, 0LL);
                      v92 = DataVals__GetCallSvtEffectId(baseVals, 0LL);
                      if ( v43 )
                      {
                        BattleActionData__setSummonServant(v43, uniqueId, v82, funcIndex, isEffectSummon, v92, 0LL);
                        return v43;
                      }
                    }
                  }
LABEL_55:
                  sub_B170D4();
                }
              }
LABEL_56:
              sub_B17100(SummonEnemyServantData, v42, v34);
              sub_B170A0();
            }
          }
        }
      }
LABEL_57:
      sub_B170F4(SummonEnemyServantData);
      sub_B170A0();
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
           v25);
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
  int32_t Value; // w21
  int32_t Param; // w22
  int32_t v11; // w0

  if ( (byte_40FCDF4 & 1) == 0 )
  {
    sub_B16FFC(&BattleActionData_TypeInfo, *(_QWORD *)&actionId);
    byte_40FCDF4 = 1;
  }
  v8 = (BattleActionData_o *)sub_B170CC(
                               BattleActionData_TypeInfo,
                               *(_QWORD *)&actionId,
                               funcEnt,
                               baseVals,
                               *(_QWORD *)&funcIndex);
  BattleActionData___ctor(v8, 0LL);
  if ( !v8 || (v8->fields.actorId = actionId, !baseVals) )
    sub_B170D4();
  Value = DataVals__GetValue(baseVals, 0LL);
  Param = DataVals__GetParam(baseVals, 4, 0, 0LL);
  v11 = DataVals__GetParam(baseVals, 111, 0, 0LL);
  BattleActionData__setChangeBg(v8, Value, Param, v11, 0LL);
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
  __int64 v16; // x3
  __int64 v17; // x4
  BattleActionData_o *v18; // x21
  __int64 v19; // x1
  __int64 v20; // x2
  __int64 v21; // x3
  __int64 v22; // x4
  BattleActionData_ShiftServant_o *v23; // x23
  BattleLogic_o *logic; // x0

  if ( (byte_40FCDF3 & 1) == 0 )
  {
    sub_B16FFC(&BattleActionData_TypeInfo, *(_QWORD *)&actionId);
    sub_B16FFC(&BattleActionData_ShiftServant_TypeInfo, v11);
    byte_40FCDF3 = 1;
  }
  data = this->fields.data;
  if ( !data )
    goto LABEL_9;
  ServantData = BattleData__getServantData(data, targetId, 0LL);
  v18 = (BattleActionData_o *)sub_B170CC(BattleActionData_TypeInfo, v14, v15, v16, v17);
  BattleActionData___ctor(v18, 0LL);
  if ( !v18 )
    goto LABEL_9;
  v18->fields.actorId = actionId;
  v23 = (BattleActionData_ShiftServant_o *)sub_B170CC(BattleActionData_ShiftServant_TypeInfo, v19, v20, v21, v22);
  BattleActionData_ShiftServant___ctor(v23, 0LL);
  if ( !v23
    || (BattleActionData_ShiftServant__setBeforeSvtData(v23, ServantData, 0LL), !ServantData)
    || (BattleServantData__setChangeServant(ServantData, this->fields.data, baseVals, 0LL),
        BattleActionData_ShiftServant__setCheckSvtData(v23, ServantData, 0LL),
        BattleActionData__setShiftServant(v18, v23, 0LL),
        (logic = this->fields.logic) == 0LL) )
  {
LABEL_9:
    sub_B170D4();
  }
  BattleLogic__actEnemyPtPassiveSkill(logic, ServantData->fields.uniqueId, 0, 0, 0LL);
  return v18;
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
  BattleServantData_o *ServantData; // x0
  BattleServantData_o *v18; // x26
  BattleServantData_o *v19; // x0
  BattleLogic_o *logic; // x24
  BattleServantData_o *v21; // x25
  int32_t Value; // w0
  BattleActionData_DamageData_o *FunctionDamagelist; // x0
  BattleActionData_DamageData_o *v24; // x21

  if ( (byte_40FCDE0 & 1) == 0 )
  {
    sub_B16FFC(&BattleActionData_TypeInfo, *(_QWORD *)&playerId);
    byte_40FCDE0 = 1;
  }
  v15 = (BattleActionData_o *)sub_B170CC(
                                BattleActionData_TypeInfo,
                                *(_QWORD *)&playerId,
                                *(_QWORD *)&targetId,
                                baseVals,
                                *(_QWORD *)&funcIndex);
  BattleActionData___ctor(v15, 0LL);
  data = this->fields.data;
  if ( !data )
    goto LABEL_10;
  ServantData = BattleData__getServantData(data, playerId, 0LL);
  if ( !this->fields.data )
    goto LABEL_10;
  v18 = ServantData;
  v19 = BattleData__getServantData(this->fields.data, targetId, 0LL);
  if ( !baseVals
    || (logic = this->fields.logic, v21 = v19, Value = DataVals__GetValue(baseVals, 0LL), !logic)
    || (FunctionDamagelist = BattleLogic__getFunctionDamagelist(logic, v18, v21, Value, funcIndex, action, isSafe, 0LL)) == 0LL
    || (v24 = FunctionDamagelist,
        BattleActionData_DamageData__addAttackSideEffectAction(FunctionDamagelist, 80, 0LL),
        !v15) )
  {
LABEL_10:
    sub_B170D4();
  }
  BattleActionData__setDamageData(v15, v24, baseVals, 0, 0, 0LL);
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
  BattleServantData_o *ServantData; // x0
  BattleServantData_o *v18; // x27
  struct BattleData_o *v19; // x8
  struct BaseBattleEvent_o *battleEvent; // x0
  const MethodInfo *v21; // x7
  int32_t Value; // w0
  int32_t nexttpturn; // w28
  _BOOL8 TDTurn; // x0
  const MethodInfo *v25; // x6
  BattleActionData_BuffData_o *FunctionObject; // x0

  if ( (byte_40FCDE9 & 1) == 0 )
  {
    sub_B16FFC(&BattleActionData_TypeInfo, *(_QWORD *)&targetId);
    byte_40FCDE9 = 1;
  }
  *absorptionCount = 0;
  v15 = (BattleActionData_o *)sub_B170CC(
                                BattleActionData_TypeInfo,
                                *(_QWORD *)&targetId,
                                funcEnt,
                                baseVals,
                                *(_QWORD *)&funcIndex);
  BattleActionData___ctor(v15, 0LL);
  data = this->fields.data;
  if ( !data )
    goto LABEL_22;
  ServantData = BattleData__getServantData(data, targetId, 0LL);
  if ( !ServantData )
    goto LABEL_22;
  v18 = ServantData;
  if ( !ServantData->fields.isEnemy )
    return 0LL;
  if ( !BattleServantData__isLogicResultAlive(ServantData, 0LL)
    && !BattleServantData__isGuts(v18, 0LL)
    && !BattleServantData__isShiftableServant(v18, 0LL) )
  {
    v19 = this->fields.data;
    if ( !v19 )
      goto LABEL_22;
    battleEvent = v19->fields.battleEvent;
    if ( !battleEvent )
      goto LABEL_22;
    if ( (((__int64 (__fastcall *)(struct BaseBattleEvent_o *, BattleServantData_o *, Il2CppMethodPointer))battleEvent->klass->vtable._19_IsUseDefeatPointReady.method)(
            battleEvent,
            v18,
            battleEvent->klass->vtable._20_IsLogicEscape.methodPtr) & 1) == 0 )
      return 0LL;
  }
  if ( !BattleServantData__hasTreasureDvc(v18, 0LL) || BattleServantData__isTDSeraled(v18, 0LL) )
    return BattleLogicFunction__getNoEffectObject(
             this,
             targetId,
             funcIndex,
             baseVals,
             isCommandSideEffect,
             0LL,
             0LL,
             v21);
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
             v21);
  FunctionObject = BattleLogicFunction__getFunctionObject(
                     (BattleLogicFunction_o *)TDTurn,
                     funcEnt,
                     v18->fields.uniqueId,
                     funcIndex,
                     isCommandSideEffect,
                     0LL,
                     v25);
  if ( !FunctionObject
    || (FunctionObject->fields.procType = 5, *absorptionCount = v18->fields.nexttpturn - nexttpturn, !v15) )
  {
LABEL_22:
    sub_B170D4();
  }
  BattleActionData__setBuffData(v15, FunctionObject, baseVals, 0LL);
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
  FunctionEntity_o *v13; // x28
  __int64 v17; // x1
  __int64 v18; // x1
  BattleActionData_o *v19; // x24
  BattleData_o *data; // x0
  BattleServantData_o *ServantData; // x0
  BattleServantData_o *v22; // x27
  BattleServantData_o *v23; // x0
  BattleServantData_o *v24; // x25
  BattleLogicFunction_o *isUnaffected; // x0
  const MethodInfo *v26; // x4
  __int64 v27; // x1
  __int64 v28; // x2
  __int64 v29; // x3
  BattleBuffData_o *buffData; // x28
  BattleBuffData_CheckIndividualitiesData_o *v31; // x20
  char v32; // w20
  struct BattleData_o *v33; // x8
  struct BaseBattleEvent_o *battleEvent; // x0
  System_String_o *v35; // x0
  float UpDownGiveHeal; // s0
  const MethodInfo *v38; // [xsp+8h] [xbp-68h]
  FunctionEntity_o *v39; // [xsp+10h] [xbp-60h]
  int32_t healPoint[2]; // [xsp+18h] [xbp-58h] BYREF

  LODWORD(v9) = overwriteHeal;
  v13 = funcEnt;
  if ( (byte_40FCDE3 & 1) == 0 )
  {
    sub_B16FFC(&BattleActionData_TypeInfo, *(_QWORD *)&playerId);
    sub_B16FFC(&BattleBuffData_CheckIndividualitiesData_TypeInfo, v17);
    sub_B16FFC(&StringLiteral_18860, v18);
    byte_40FCDE3 = 1;
  }
  *(_QWORD *)healPoint = 0LL;
  v19 = (BattleActionData_o *)sub_B170CC(
                                BattleActionData_TypeInfo,
                                *(_QWORD *)&playerId,
                                *(_QWORD *)&targetId,
                                funcEnt,
                                baseVals);
  BattleActionData___ctor(v19, 0LL);
  data = this->fields.data;
  if ( !data )
    goto LABEL_26;
  ServantData = BattleData__getServantData(data, playerId, 0LL);
  if ( !this->fields.data )
    goto LABEL_26;
  v22 = ServantData;
  v23 = BattleData__getServantData(this->fields.data, targetId, 0LL);
  if ( !baseVals )
    goto LABEL_26;
  v24 = v23;
  baseVals->fields.isShowForcedEffect = 0;
  if ( (_DWORD)v9 == -1 )
    LODWORD(v9) = DataVals__GetValue(baseVals, 0LL);
  healPoint[1] = v9;
  isUnaffected = (BattleLogicFunction_o *)DataVals__isUnaffected(baseVals, 0LL);
  if ( ((unsigned __int8)isUnaffected & 1) != 0 )
  {
LABEL_20:
    v32 = 0;
    goto LABEL_21;
  }
  if ( !v24 )
    goto LABEL_26;
  if ( ((__int64 (__fastcall *)(BattleServantData_o *, Il2CppMethodPointer))v24->klass->vtable._13_get_resultHp.method)(
         v24,
         v24->klass->vtable._14_set_resultHp.methodPtr) <= 0 )
  {
    healPoint[1] = 0;
    isUnaffected = (BattleLogicFunction_o *)BattleServantData__isShiftableServant(v24, 0LL);
    if ( ((unsigned __int8)isUnaffected & 1) == 0 )
    {
      v33 = this->fields.data;
      if ( !v33 )
        goto LABEL_26;
      battleEvent = v33->fields.battleEvent;
      if ( !battleEvent )
        goto LABEL_26;
      isUnaffected = (BattleLogicFunction_o *)((__int64 (__fastcall *)(struct BaseBattleEvent_o *, BattleServantData_o *, Il2CppMethodPointer))battleEvent->klass->vtable._19_IsUseDefeatPointReady.method)(
                                                battleEvent,
                                                v24,
                                                battleEvent->klass->vtable._20_IsLogicEscape.methodPtr);
      if ( ((unsigned __int8)isUnaffected & 1) == 0 )
      {
        isUnaffected = (BattleLogicFunction_o *)BattleServantData__isGuts(v24, 0LL);
        LODWORD(v9) = 0;
        v32 = (unsigned __int8)isUnaffected ^ 1;
        goto LABEL_21;
      }
    }
    LODWORD(v9) = 0;
    goto LABEL_20;
  }
  isUnaffected = (BattleLogicFunction_o *)BattleServantData__isShiftReady(v24, 0LL);
  if ( ((unsigned __int8)isUnaffected & 1) != 0 )
  {
LABEL_14:
    LODWORD(v9) = 0;
    v32 = 0;
    healPoint[1] = 0;
    goto LABEL_21;
  }
  v39 = v13;
  buffData = v24->fields.buffData;
  v31 = (BattleBuffData_CheckIndividualitiesData_o *)sub_B170CC(
                                                       BattleBuffData_CheckIndividualitiesData_TypeInfo,
                                                       v27,
                                                       v28,
                                                       v29,
                                                       v26);
  BattleBuffData_CheckIndividualitiesData___ctor(v31, v24, 0LL, 0LL, 0LL, 0LL, 0LL);
  if ( !buffData )
LABEL_26:
    sub_B170D4();
  isUnaffected = (BattleLogicFunction_o *)BattleBuffData__isTurnBuff(buffData, 42, v31, 1, 0LL);
  v13 = v39;
  if ( ((unsigned __int8)isUnaffected & 1) != 0 )
    goto LABEL_14;
  if ( v22 )
  {
    UpDownGiveHeal = BattleServantData__getUpDownGiveHeal(v22, v24, 0LL);
    LODWORD(v9) = BattleUtility__FloorToInt(UpDownGiveHeal * (float)(int)v9, 0LL);
    healPoint[1] = v9;
  }
  healPoint[0] = 1;
  isUnaffected = (BattleLogicFunction_o *)BattleServantData__getUpDownHeal(v24, healPoint, 0LL);
  v32 = 0;
  v9 = (int)isUnaffected * (__int64)(int)v9 / healPoint[0];
  healPoint[1] = v9;
  baseVals->fields.isShowForcedEffect = 1;
LABEL_21:
  healPoint[1] = BattleLogicFunction__GetActualRecoveryHealPoint(isUnaffected, baseVals, v24, v9, v26);
  v35 = System_Int32__ToString((int32_t)&healPoint[1], 0LL);
  System_String__Concat_43743732((System_String_o *)StringLiteral_18860, v35, 0LL);
  BattleLogicFunction__SetGainHpBuff(
    this,
    v19,
    healPoint[1],
    funcIndex,
    v24,
    v13,
    baseVals,
    isCommandSideEffect,
    v32 & 1,
    v38);
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
  __int64 v22; // x3
  __int64 v23; // x4
  System_Collections_Generic_List_VoiceCondType_Type__o *v24; // x20
  DataVals_array *DependDataValsArray; // x0
  __int64 v26; // x1
  __int64 v27; // x2
  int max_length; // w8
  unsigned int v29; // w25
  int v30; // w19
  DataVals_o *v31; // x26
  int32_t *p_funcType; // x28
  __int64 v33; // x0
  __int64 v34; // x19
  System_String_o *v35; // x20
  const MethodInfo *v36; // x4
  System_Collections_Generic_IEnumerable_BattleLogicFunctionProcess_FunctionTargetCheck__o *DependFuncTargets; // x0
  System_Collections_Generic_IEnumerable_BattleLogicFunctionProcess_FunctionTargetCheck__c *klass; // x8
  System_Collections_Generic_IEnumerable_BattleLogicFunctionProcess_FunctionTargetCheck__o *v39; // x23
  unsigned __int64 v40; // x10
  int32_t *p_offset; // x11
  __int64 p_method; // x0
  __int64 v43; // x0
  __int64 v44; // x27
  BattleLogicFunction_ProcListInArgs_o *v45; // x0
  int32_t actorId; // w19
  FunctionEntity_o *funcEnt; // x22
  int32_t funcIndex; // w24
  bool IsCommandSideEffect; // w0
  BattleActionData_o *v50; // x20
  int v51; // w19
  int32_t v52; // w19
  bool v53; // w0
  const MethodInfo *v54; // x7
  BattleActionData_o *NoEffectObject; // x1
  __int64 v56; // x8
  unsigned __int64 v57; // x10
  int *v58; // x11
  __int64 v59; // x0
  __int64 v60; // x8
  unsigned __int64 v61; // x10
  int *v62; // x11
  __int64 v63; // x0
  __int64 v64; // x0
  __int64 v65; // x20
  BattleData_o *data; // x0
  int32_t v67; // w25
  BattleServantData_o *ServantData; // x0
  BattleServantData_o *v69; // x26
  BattleLogicFunction_o *v70; // x0
  const MethodInfo *v71; // x3
  int v72; // w23
  int32_t v73; // w8
  int32_t Value; // w20
  char v75; // w21
  __int64 v76; // x8
  unsigned __int64 v77; // x10
  int *v78; // x11
  __int64 v79; // x0
  int v80; // w8
  int32_t v81; // w19
  FunctionEntity_o *v82; // x20
  int32_t targetId_k__BackingField; // w22
  int32_t v84; // w21
  bool v85; // w0
  BattleActionData_o *v86; // x0
  const MethodInfo *overwriteLossHp; // [xsp+0h] [xbp-E0h]
  bool isRandomDamage; // [xsp+8h] [xbp-D8h]
  const MethodInfo *v90; // [xsp+18h] [xbp-C8h]
  DataVals_o *v91; // [xsp+28h] [xbp-B8h]
  BattleLogicFunctionProcess_FunctionTargetCheck_o *v92; // [xsp+30h] [xbp-B0h]
  int32_t overwriteHeal; // [xsp+3Ch] [xbp-A4h]
  DataVals_array *v94; // [xsp+40h] [xbp-A0h]
  int v95; // [xsp+48h] [xbp-98h]
  unsigned int v96; // [xsp+4Ch] [xbp-94h]
  BattleLogicFunction_ProcListInArgs_o *v97; // [xsp+50h] [xbp-90h]
  BattleActionData_o *v98; // [xsp+58h] [xbp-88h]
  BattleLogicFunction_o *v99; // [xsp+60h] [xbp-80h]
  bool v100; // [xsp+6Ch] [xbp-74h]
  __int64 v101; // [xsp+70h] [xbp-70h]
  BattleActionData_o *v102; // [xsp+78h] [xbp-68h]
  DataVals_o *v103; // [xsp+80h] [xbp-60h]
  _DWORD v104[1]; // [xsp+88h] [xbp-58h]
  int v105; // [xsp+8Ch] [xbp-54h]

  v6 = mainAction;
  v7 = procArg;
  if ( (byte_40FCDFD & 1) == 0 )
  {
    sub_B16FFC(&BattleActionData_TypeInfo, procArg);
    sub_B16FFC(&System_IDisposable_TypeInfo, v9);
    sub_B16FFC(&System_Collections_Generic_IEnumerable_BattleLogicFunctionProcess_FunctionTargetCheck__TypeInfo, v10);
    sub_B16FFC(&System_Collections_Generic_IEnumerator_BattleLogicFunctionProcess_FunctionTargetCheck__TypeInfo, v11);
    sub_B16FFC(&System_Collections_IEnumerator_TypeInfo, v12);
    sub_B16FFC(&Method_System_Collections_Generic_List_FuncList_TYPE__Add__, v13);
    sub_B16FFC(&Method_System_Collections_Generic_List_FuncList_TYPE___ctor__, v14);
    sub_B16FFC(&System_Collections_Generic_List_FuncList_TYPE__TypeInfo, v15);
    sub_B16FFC(&FuncList_TYPE_TypeInfo, v16);
    sub_B16FFC(&StringLiteral_15989, v17);
    byte_40FCDFD = 1;
  }
  v105 = 0;
  if ( !funcTarget )
    goto LABEL_82;
  funcUnit_k__BackingField = funcTarget->fields._funcUnit_k__BackingField;
  v92 = funcTarget;
  if ( !funcUnit_k__BackingField )
    goto LABEL_82;
  dataVals_k__BackingField = funcUnit_k__BackingField->fields._dataVals_k__BackingField;
  v98 = (BattleActionData_o *)sub_B170CC(BattleActionData_TypeInfo, procArg, mainAction, funcTarget, method);
  BattleActionData___ctor(v98, 0LL);
  v24 = (System_Collections_Generic_List_VoiceCondType_Type__o *)sub_B170CC(
                                                                   System_Collections_Generic_List_FuncList_TYPE__TypeInfo,
                                                                   v20,
                                                                   v21,
                                                                   v22,
                                                                   v23);
  System_Collections_Generic_List_VoiceCondType_Type____ctor(
    v24,
    (const MethodInfo_2F1276C *)Method_System_Collections_Generic_List_FuncList_TYPE___ctor__);
  if ( !v24 )
    goto LABEL_82;
  System_Collections_Generic_List_VoiceCondType_Type___Add(
    v24,
    12,
    (const MethodInfo_2F134C8 *)Method_System_Collections_Generic_List_FuncList_TYPE__Add__);
  System_Collections_Generic_List_VoiceCondType_Type___Add(
    v24,
    25,
    (const MethodInfo_2F134C8 *)Method_System_Collections_Generic_List_FuncList_TYPE__Add__);
  System_Collections_Generic_List_VoiceCondType_Type___Add(
    v24,
    50,
    (const MethodInfo_2F134C8 *)Method_System_Collections_Generic_List_FuncList_TYPE__Add__);
  System_Collections_Generic_List_VoiceCondType_Type___Add(
    v24,
    51,
    (const MethodInfo_2F134C8 *)Method_System_Collections_Generic_List_FuncList_TYPE__Add__);
  if ( !dataVals_k__BackingField )
    goto LABEL_82;
  v91 = dataVals_k__BackingField;
  DependDataValsArray = DataVals__GetDependDataValsArray(
                          dataVals_k__BackingField,
                          (System_Collections_Generic_List_FuncList_TYPE__o *)v24,
                          1,
                          0LL);
  if ( !DependDataValsArray )
    goto LABEL_82;
  max_length = DependDataValsArray->max_length;
  v99 = this;
  v102 = v6;
  if ( max_length >= 1 )
  {
    v29 = 0;
    v30 = 0;
    overwriteHeal = 0;
    v94 = DependDataValsArray;
    v97 = v7;
    while ( 1 )
    {
      if ( v29 >= max_length )
      {
        sub_B17100(DependDataValsArray, v26, v27);
        sub_B170A0();
      }
      v31 = DependDataValsArray->m_Items[v29];
      v95 = v30;
      if ( !v31 )
        goto LABEL_82;
      p_funcType = &v31->fields.funcType;
      v33 = j_il2cpp_value_box_0(FuncList_TYPE_TypeInfo, &v31->fields.funcType);
      if ( !v33 )
        goto LABEL_82;
      v34 = v33;
      v35 = (System_String_o *)(*(__int64 (__fastcall **)(__int64, _QWORD))(*(_QWORD *)v33 + 360LL))(
                                 v33,
                                 *(_QWORD *)(*(_QWORD *)v33 + 368LL));
      *p_funcType = *(_DWORD *)j_il2cpp_object_unbox_0(v34);
      if ( !v35 )
        goto LABEL_82;
      v100 = System_String__Contains(v35, (System_String_o *)StringLiteral_15989, 0LL);
      DependFuncTargets = BattleLogicFunction__GetDependFuncTargets(this, v7, v6, v31, v36);
      if ( !DependFuncTargets )
        goto LABEL_82;
      klass = DependFuncTargets->klass;
      v39 = DependFuncTargets;
      v103 = v31;
      v96 = v29;
      if ( *(_WORD *)&DependFuncTargets->klass->_2.bitflags1 )
      {
        v40 = 0LL;
        p_offset = &klass->_1.interfaceOffsets->offset;
        while ( *((System_Collections_Generic_IEnumerable_BattleLogicFunctionProcess_FunctionTargetCheck__c **)p_offset
                - 1) != System_Collections_Generic_IEnumerable_BattleLogicFunctionProcess_FunctionTargetCheck__TypeInfo )
        {
          ++v40;
          p_offset += 4;
          if ( v40 >= *(unsigned __int16 *)&DependFuncTargets->klass->_2.bitflags1 )
            goto LABEL_28;
        }
        p_method = (__int64)&klass->vtable[*p_offset].method;
      }
      else
      {
LABEL_28:
        p_method = sub_AAFEF8(
                     DependFuncTargets,
                     System_Collections_Generic_IEnumerable_BattleLogicFunctionProcess_FunctionTargetCheck__TypeInfo,
                     0LL);
      }
      v43 = (*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerable_BattleLogicFunctionProcess_FunctionTargetCheck__o *, _QWORD))p_method)(
              v39,
              *(_QWORD *)(p_method + 8));
      v101 = v43;
      if ( !v43 )
        sub_B170D4();
      v44 = v43;
      while ( 1 )
      {
        v56 = *(_QWORD *)v44;
        if ( *(_WORD *)(*(_QWORD *)v44 + 298LL) )
        {
          v57 = 0LL;
          v58 = (int *)(*(_QWORD *)(v56 + 176) + 8LL);
          while ( *((System_Collections_IEnumerator_c **)v58 - 1) != System_Collections_IEnumerator_TypeInfo )
          {
            ++v57;
            v58 += 4;
            if ( v57 >= *(unsigned __int16 *)(*(_QWORD *)v44 + 298LL) )
              goto LABEL_42;
          }
          v59 = v56 + 16LL * *v58 + 312;
        }
        else
        {
LABEL_42:
          v59 = sub_AAFEF8(v44, System_Collections_IEnumerator_TypeInfo, 0LL);
        }
        if ( ((*(__int64 (__fastcall **)(__int64, _QWORD))v59)(v44, *(_QWORD *)(v59 + 8)) & 1) == 0 )
          break;
        v60 = *(_QWORD *)v44;
        if ( *(_WORD *)(*(_QWORD *)v44 + 298LL) )
        {
          v61 = 0LL;
          v62 = (int *)(*(_QWORD *)(v60 + 176) + 8LL);
          while ( *((System_Collections_Generic_IEnumerator_BattleLogicFunctionProcess_FunctionTargetCheck__c **)v62 - 1) != System_Collections_Generic_IEnumerator_BattleLogicFunctionProcess_FunctionTargetCheck__TypeInfo )
          {
            ++v61;
            v62 += 4;
            if ( v61 >= *(unsigned __int16 *)(*(_QWORD *)v44 + 298LL) )
              goto LABEL_49;
          }
          v63 = v60 + 16LL * *v62 + 312;
        }
        else
        {
LABEL_49:
          v63 = sub_AAFEF8(
                  v44,
                  System_Collections_Generic_IEnumerator_BattleLogicFunctionProcess_FunctionTargetCheck__TypeInfo,
                  0LL);
        }
        v64 = (*(__int64 (__fastcall **)(__int64, _QWORD))v63)(v44, *(_QWORD *)(v63 + 8));
        v65 = v64;
        if ( !v64 )
          sub_B170D4();
        if ( ((*(__int64 (__fastcall **)(__int64, BattleActionData_o *, _QWORD))(*(_QWORD *)v64 + 392LL))(
                v64,
                v6,
                *(_QWORD *)(*(_QWORD *)v64 + 400LL)) & 1) != 0 )
        {
          data = this->fields.data;
          if ( !data )
            sub_B170D4();
          v67 = *(_DWORD *)(v65 + 32);
          ServantData = BattleData__getServantData(data, v67, 0LL);
          v69 = ServantData;
          if ( !ServantData )
            sub_B170D4();
          v70 = (BattleLogicFunction_o *)((__int64 (__fastcall *)(BattleServantData_o *, Il2CppMethodPointer))ServantData->klass->vtable._13_get_resultHp.method)(
                                           ServantData,
                                           ServantData->klass->vtable._14_set_resultHp.methodPtr);
          v72 = (int)v70;
          if ( (int)v70 >= 1 )
          {
            v73 = *p_funcType;
            if ( *p_funcType == 12 || v73 == 25 )
            {
              Value = DataVals__GetValue(v103, 0LL);
            }
            else
            {
              if ( (v73 & 0xFFFFFFFE) == 50 )
              {
                Value = BattleLogicFunction__getHpPerValue(v70, v103, v69, v71);
                v75 = 0;
                if ( !v6 )
                  goto LABEL_64;
                goto LABEL_32;
              }
              Value = -1;
            }
            v75 = 1;
            if ( !v6 )
LABEL_64:
              sub_B170D4();
LABEL_32:
            v45 = v7;
            if ( !v7 )
              sub_B170D4();
            actorId = v6->fields.actorId;
            funcEnt = v103->fields.funcEnt;
            funcIndex = v103->fields.funcIndex;
            IsCommandSideEffect = BattleLogicFunction_ProcListInArgs__get_IsCommandSideEffect(v45, 0LL);
            isRandomDamage = v75;
            this = v99;
            v50 = BattleLogicFunction__functionlossHp(
                    v99,
                    actorId,
                    v67,
                    funcEnt,
                    v103,
                    funcIndex,
                    v100,
                    IsCommandSideEffect,
                    Value,
                    isRandomDamage,
                    0LL,
                    v90);
            v7 = v97;
            v6 = v102;
            v51 = v72
                - ((__int64 (__fastcall *)(BattleServantData_o *, Il2CppMethodPointer))v69->klass->vtable._13_get_resultHp.method)(
                    v69,
                    v69->klass->vtable._14_set_resultHp.methodPtr);
            if ( v51 >= 1 )
            {
              if ( !v98 )
                sub_B170D4();
              v44 = v101;
              BattleActionData__addAction(v98, v50, 0LL);
              overwriteHeal += v51;
            }
            else
            {
              v52 = v103->fields.funcIndex;
              v53 = BattleLogicFunction_ProcListInArgs__get_IsCommandSideEffect(v97, 0LL);
              v44 = v101;
              NoEffectObject = BattleLogicFunction__getNoEffectObject(v99, v67, v52, v103, v53, 0LL, 0LL, v54);
              if ( !v98 )
                sub_B170D4();
              BattleActionData__addAction(v98, NoEffectObject, 0LL);
            }
          }
        }
      }
      v104[v95] = 395;
      v30 = ++v105;
      if ( v44 )
      {
        v76 = *(_QWORD *)v44;
        if ( *(_WORD *)(*(_QWORD *)v44 + 298LL) )
        {
          v77 = 0LL;
          v78 = (int *)(*(_QWORD *)(v76 + 176) + 8LL);
          while ( *((System_IDisposable_c **)v78 - 1) != System_IDisposable_TypeInfo )
          {
            ++v77;
            v78 += 4;
            if ( v77 >= *(unsigned __int16 *)(*(_QWORD *)v44 + 298LL) )
              goto LABEL_70;
          }
          v79 = v76 + 16LL * *v78 + 312;
        }
        else
        {
LABEL_70:
          v79 = sub_AAFEF8(v44, System_IDisposable_TypeInfo, 0LL);
        }
        (*(void (__fastcall **)(__int64, _QWORD))v79)(v44, *(_QWORD *)(v79 + 8));
      }
      DependDataValsArray = v94;
      if ( v30 )
      {
        v80 = v30 - 1;
        v6 = v102;
        if ( v104[v30 - 1] == 395 )
        {
          --v30;
          v105 = v80;
        }
      }
      else
      {
        v6 = v102;
      }
      max_length = v94->max_length;
      v29 = v96 + 1;
      if ( (int)(v96 + 1) >= max_length )
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
    || (v81 = v91->fields.funcIndex,
        v82 = v91->fields.funcEnt,
        targetId_k__BackingField = v92->fields._targetId_k__BackingField,
        v84 = v102->fields.actorId,
        v85 = BattleLogicFunction_ProcListInArgs__get_IsCommandSideEffect(v7, 0LL),
        v86 = BattleLogicFunction__functionGainHp(
                v99,
                v84,
                targetId_k__BackingField,
                v82,
                v91,
                v81,
                v85,
                overwriteHeal,
                overwriteLossHp),
        !v98) )
  {
LABEL_82:
    sub_B170D4();
  }
  BattleActionData__addAction(v98, v86, 0LL);
  return v98;
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
  FunctionEntity_o *v11; // x28
  __int64 v15; // x1
  BattleActionData_o *v16; // x24
  BattleData_o *data; // x0
  BattleServantData_o *ServantData; // x0
  BattleServantData_o *v19; // x27
  BattleServantData_o *v20; // x0
  BattleServantData_o *v21; // x25
  int32_t Value; // w26
  bool isUnaffected; // w0
  BattleLogicFunction_o *MaxHp; // x0
  const MethodInfo *v25; // x4
  char v26; // w20
  int v27; // w3
  __int64 v28; // x1
  __int64 v29; // x2
  __int64 v30; // x3
  BattleBuffData_o *buffData; // x28
  BattleBuffData_CheckIndividualitiesData_o *v32; // x20
  struct BattleData_o *v33; // x8
  struct BaseBattleEvent_o *battleEvent; // x0
  int32_t ActualRecoveryHealPoint; // w0
  float UpDownGiveHeal; // s0
  int32_t UpDownHeal; // w0
  __int64 v39; // x26
  const MethodInfo *v40; // [xsp+8h] [xbp-68h]
  FunctionEntity_o *v41; // [xsp+10h] [xbp-60h]
  int32_t digit; // [xsp+1Ch] [xbp-54h] BYREF

  v11 = funcEnt;
  if ( (byte_40FCDE4 & 1) == 0 )
  {
    sub_B16FFC(&BattleActionData_TypeInfo, *(_QWORD *)&playerId);
    sub_B16FFC(&BattleBuffData_CheckIndividualitiesData_TypeInfo, v15);
    byte_40FCDE4 = 1;
  }
  digit = 0;
  v16 = (BattleActionData_o *)sub_B170CC(
                                BattleActionData_TypeInfo,
                                *(_QWORD *)&playerId,
                                *(_QWORD *)&targetId,
                                funcEnt,
                                baseVals);
  BattleActionData___ctor(v16, 0LL);
  data = this->fields.data;
  if ( !data )
    goto LABEL_24;
  ServantData = BattleData__getServantData(data, playerId, 0LL);
  if ( !this->fields.data )
    goto LABEL_24;
  v19 = ServantData;
  v20 = BattleData__getServantData(this->fields.data, targetId, 0LL);
  if ( !baseVals )
    goto LABEL_24;
  v21 = v20;
  baseVals->fields.isShowForcedEffect = 0;
  Value = DataVals__GetValue(baseVals, 0LL);
  isUnaffected = DataVals__isUnaffected(baseVals, 0LL);
  if ( !v21 )
    goto LABEL_24;
  if ( isUnaffected )
  {
    MaxHp = (BattleLogicFunction_o *)BattleServantData__getMaxHp(v21, 0LL);
    v26 = 0;
    v27 = (int)MaxHp * Value / 1000;
    goto LABEL_19;
  }
  if ( ((__int64 (__fastcall *)(BattleServantData_o *, Il2CppMethodPointer))v21->klass->vtable._13_get_resultHp.method)(
         v21,
         v21->klass->vtable._14_set_resultHp.methodPtr) <= 0 )
  {
    MaxHp = (BattleLogicFunction_o *)BattleServantData__isShiftableServant(v21, 0LL);
    if ( ((unsigned __int8)MaxHp & 1) != 0 )
      goto LABEL_18;
    v33 = this->fields.data;
    if ( v33 )
    {
      battleEvent = v33->fields.battleEvent;
      if ( battleEvent )
      {
        MaxHp = (BattleLogicFunction_o *)((__int64 (__fastcall *)(struct BaseBattleEvent_o *, BattleServantData_o *, Il2CppMethodPointer))battleEvent->klass->vtable._19_IsUseDefeatPointReady.method)(
                                           battleEvent,
                                           v21,
                                           battleEvent->klass->vtable._20_IsLogicEscape.methodPtr);
        if ( ((unsigned __int8)MaxHp & 1) == 0 )
        {
          MaxHp = (BattleLogicFunction_o *)BattleServantData__isGuts(v21, 0LL);
          v27 = 0;
          v26 = (unsigned __int8)MaxHp ^ 1;
          goto LABEL_19;
        }
        goto LABEL_18;
      }
    }
    goto LABEL_24;
  }
  MaxHp = (BattleLogicFunction_o *)BattleServantData__isShiftReady(v21, 0LL);
  if ( ((unsigned __int8)MaxHp & 1) != 0 )
  {
LABEL_18:
    v27 = 0;
    v26 = 0;
    goto LABEL_19;
  }
  v41 = v11;
  buffData = v21->fields.buffData;
  v32 = (BattleBuffData_CheckIndividualitiesData_o *)sub_B170CC(
                                                       BattleBuffData_CheckIndividualitiesData_TypeInfo,
                                                       v28,
                                                       v29,
                                                       v30,
                                                       v25);
  BattleBuffData_CheckIndividualitiesData___ctor(v32, v21, 0LL, 0LL, 0LL, 0LL, 0LL);
  if ( !buffData )
LABEL_24:
    sub_B170D4();
  MaxHp = (BattleLogicFunction_o *)BattleBuffData__isTurnBuff(buffData, 42, v32, 1, 0LL);
  if ( ((unsigned __int8)MaxHp & 1) != 0 )
  {
    v11 = v41;
    goto LABEL_18;
  }
  if ( v19 )
  {
    UpDownGiveHeal = BattleServantData__getUpDownGiveHeal(v19, v21, 0LL);
    Value = BattleUtility__FloorToInt(UpDownGiveHeal * (float)Value, 0LL);
  }
  v11 = v41;
  digit = 1;
  UpDownHeal = BattleServantData__getUpDownHeal(v21, &digit, 0LL);
  v39 = UpDownHeal * (__int64)Value / digit;
  MaxHp = (BattleLogicFunction_o *)BattleServantData__getMaxHp(v21, 0LL);
  v26 = 0;
  v27 = (int)v39 * (int)MaxHp / 1000;
  baseVals->fields.isShowForcedEffect = 1;
LABEL_19:
  ActualRecoveryHealPoint = BattleLogicFunction__GetActualRecoveryHealPoint(MaxHp, baseVals, v21, v27, v25);
  BattleLogicFunction__SetGainHpBuff(
    this,
    v16,
    ActualRecoveryHealPoint,
    funcIndex,
    v21,
    v11,
    baseVals,
    isCommandSideEffect,
    v26 & 1,
    v40);
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
  BattleServantData_o *ServantData; // x0
  BattleServantData_o *v14; // x24
  __int64 v15; // x1
  __int64 v16; // x2
  __int64 v17; // x3
  __int64 v18; // x4
  BattleActionData_o *v19; // x21
  int32_t v20; // w0
  int32_t funcIndex; // w23
  int32_t uniqueId; // w24
  FunctionEntity_o *funcEnt; // x25
  int32_t v24; // w22
  _BOOL8 IsCommandSideEffect; // x0
  const MethodInfo *v26; // x6
  BattleActionData_BuffData_o *FunctionObject; // x0
  BattleActionData_BuffData_o *v28; // x20
  int32_t v30; // w21
  int32_t v31; // w23
  bool v32; // w4
  const MethodInfo *v33; // x7

  if ( (byte_40FCDFC & 1) == 0 )
  {
    sub_B16FFC(&BattleActionData_TypeInfo, procArg);
    byte_40FCDFC = 1;
  }
  data = this->fields.data;
  if ( !data )
    goto LABEL_18;
  ServantData = BattleData__getServantData(data, targetId, 0LL);
  if ( !ServantData )
    goto LABEL_18;
  v14 = ServantData;
  v19 = 0LL;
  if ( !BattleServantData__checkPlayer(ServantData, 0LL) )
    return v19;
  v19 = (BattleActionData_o *)sub_B170CC(BattleActionData_TypeInfo, v15, v16, v17, v18);
  BattleActionData___ctor(v19, 0LL);
  if ( !baseVals )
LABEL_18:
    sub_B170D4();
  if ( !DataVals__isUnaffected(baseVals, 0LL) )
    value = BattleServantData__getCorrectedValueFuncGainNp(v14, value, 0LL);
  if ( value >= 1 && BattleServantData__isGainNp(v14, 1, 0LL) )
  {
    v20 = BattleServantData__addNp(v14, value, 0, 0LL);
    if ( procArg )
    {
      funcIndex = baseVals->fields.funcIndex;
      uniqueId = v14->fields.uniqueId;
      funcEnt = baseVals->fields.funcEnt;
      v24 = v20;
      IsCommandSideEffect = BattleLogicFunction_ProcListInArgs__get_IsCommandSideEffect(procArg, 0LL);
      FunctionObject = BattleLogicFunction__getFunctionObject(
                         (BattleLogicFunction_o *)IsCommandSideEffect,
                         funcEnt,
                         uniqueId,
                         funcIndex,
                         IsCommandSideEffect,
                         0LL,
                         v26);
      if ( FunctionObject )
      {
        v28 = FunctionObject;
        FunctionObject->fields.procType = 3;
        BattleActionData_BuffData__setSaveNp(FunctionObject, v24, 0LL);
        if ( v19 )
        {
          BattleActionData__setBuffData(v19, v28, baseVals, 0LL);
          return v19;
        }
      }
    }
    goto LABEL_18;
  }
  if ( !procArg )
    goto LABEL_18;
  v30 = baseVals->fields.funcIndex;
  v31 = v14->fields.uniqueId;
  v32 = BattleLogicFunction_ProcListInArgs__get_IsCommandSideEffect(procArg, 0LL);
  return BattleLogicFunction__getNoEffectObject(this, v31, v30, baseVals, v32, 0LL, 0LL, v33);
}


BattleActionData_o *__fastcall BattleLogicFunction__functionGainNpFromTargets(
        BattleLogicFunction_o *this,
        BattleLogicFunction_ProcListInArgs_o *procArg,
        BattleActionData_o *mainAction,
        BattleLogicFunctionProcess_FunctionTargetCheck_o *funcTarget,
        const MethodInfo *method)
{
  __int64 v9; // x1
  __int64 v10; // x1
  struct BattleLogicFunctionProcess_FunctionUnitCheck_o *funcUnit_k__BackingField; // x8
  DataVals_o *dataVals_k__BackingField; // x24
  BattleActionData_o *v13; // x23
  __int64 v14; // x1
  __int64 v15; // x2
  __int64 v16; // x3
  __int64 v17; // x4
  NpTurnToPointConvert_o *v18; // x26
  __int64 v19; // x1
  __int64 v20; // x2
  __int64 v21; // x3
  __int64 v22; // x4
  NpGaugeAbsorbResult_o *v23; // x25
  const MethodInfo *v24; // x4
  BattleActionData_o *v25; // x0
  const MethodInfo *v26; // x4
  BattleActionData_o *v27; // x0
  int32_t v28; // w2
  const MethodInfo *v29; // x6
  float Point_k__BackingField; // s0
  double v31; // d0
  BattleActionData_o *v32; // x0

  if ( (byte_40FCDFA & 1) == 0 )
  {
    sub_B16FFC(&BattleActionData_TypeInfo, procArg);
    sub_B16FFC(&NpGaugeAbsorbResult_TypeInfo, v9);
    sub_B16FFC(&NpTurnToPointConvert_TypeInfo, v10);
    byte_40FCDFA = 1;
  }
  if ( !funcTarget )
    goto LABEL_12;
  funcUnit_k__BackingField = funcTarget->fields._funcUnit_k__BackingField;
  if ( !funcUnit_k__BackingField )
    goto LABEL_12;
  dataVals_k__BackingField = funcUnit_k__BackingField->fields._dataVals_k__BackingField;
  v13 = (BattleActionData_o *)sub_B170CC(BattleActionData_TypeInfo, procArg, mainAction, funcTarget, method);
  BattleActionData___ctor(v13, 0LL);
  v18 = (NpTurnToPointConvert_o *)sub_B170CC(NpTurnToPointConvert_TypeInfo, v14, v15, v16, v17);
  NpTurnToPointConvert___ctor(v18, 0LL);
  v23 = (NpGaugeAbsorbResult_o *)sub_B170CC(NpGaugeAbsorbResult_TypeInfo, v19, v20, v21, v22);
  NpGaugeAbsorbResult___ctor(v23, (BaseNpGaugeConvert_o *)v18, 0LL);
  v25 = BattleLogicFunction__AbsorbNpPoint(this, mainAction, funcTarget, v23, v24);
  if ( !v13
    || (BattleActionData__addAction(v13, v25, 0LL),
        v27 = BattleLogicFunction__AbsorbNpTurn(this, mainAction, funcTarget, v23, v26),
        BattleActionData__addAction(v13, v27, 0LL),
        !mainAction)
    || !v23 )
  {
LABEL_12:
    sub_B170D4();
  }
  Point_k__BackingField = v23->fields._Point_k__BackingField;
  if ( Point_k__BackingField == INFINITY )
    v31 = -Point_k__BackingField;
  else
    v31 = Point_k__BackingField;
  v32 = BattleLogicFunction__functionGainNp(
          this,
          procArg,
          v28,
          funcTarget->fields._targetId_k__BackingField,
          dataVals_k__BackingField,
          (int)v31,
          v29);
  BattleActionData__addAction(v13, v32, 0LL);
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
  BattleServantData_o *ServantData; // x0
  BattleServantData_o *v18; // x27
  const MethodInfo *v19; // x7
  int32_t Value; // w0
  int32_t v22; // w1
  int32_t v23; // w28
  _BOOL8 isGainNp; // x0
  const MethodInfo *v25; // x6
  BattleActionData_BuffData_o *FunctionObject; // x0

  if ( (byte_40FCDE8 & 1) == 0 )
  {
    sub_B16FFC(&BattleActionData_TypeInfo, *(_QWORD *)&targetId);
    byte_40FCDE8 = 1;
  }
  v15 = (BattleActionData_o *)sub_B170CC(
                                BattleActionData_TypeInfo,
                                *(_QWORD *)&targetId,
                                funcEnt,
                                baseVals,
                                *(_QWORD *)&funcIndex);
  BattleActionData___ctor(v15, 0LL);
  data = this->fields.data;
  if ( !data )
    goto LABEL_22;
  ServantData = BattleData__getServantData(data, targetId, 0LL);
  if ( !ServantData )
    goto LABEL_22;
  v18 = ServantData;
  if ( ServantData->fields.isEnemy )
  {
    if ( !BattleServantData__hasTreasureDvc(ServantData, 0LL) || BattleServantData__isTDSeraled(v18, 0LL) )
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
        FunctionObject = BattleLogicFunction__getFunctionObject(
                           (BattleLogicFunction_o *)isGainNp,
                           funcEnt,
                           v18->fields.uniqueId,
                           funcIndex,
                           isCommandSideEffect,
                           0LL,
                           v25);
        if ( FunctionObject )
        {
          FunctionObject->fields.procType = 5;
          if ( v15 )
          {
            BattleActionData__setBuffData(v15, FunctionObject, baseVals, 0LL);
            return v15;
          }
        }
LABEL_22:
        sub_B170D4();
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
  __int64 v16; // x1
  System_String_o *v17; // x0
  __int64 v18; // x1
  __int64 v19; // x2
  __int64 v20; // x3
  __int64 v21; // x4
  BattleActionData_o *v22; // x25
  BattleData_o *data; // x0
  BattleServantData_o *ServantData; // x0
  BattleServantData_o *v25; // x27
  unsigned int v26; // w0
  BattleLogic_o *logic; // x0
  int32_t Wave; // w0
  int32_t v29; // w28
  bool IsOpponentPTUniqueID; // w0
  int32_t v31; // w0
  _BOOL8 v32; // x0
  const MethodInfo *v33; // x6
  struct BattleData_o *v34; // x8
  int32_t v35; // w2
  BattleActionData_BuffData_o *FunctionObject; // x0
  int32_t uniqueId; // [xsp+Ch] [xbp-54h] BYREF

  uniqueId = targetId;
  if ( (byte_40FCDE7 & 1) == 0 )
  {
    sub_B16FFC(&BattleActionData_TypeInfo, *(_QWORD *)&playerId);
    sub_B16FFC(&StringLiteral_18861, v16);
    byte_40FCDE7 = 1;
  }
  v17 = System_Int32__ToString((int32_t)&uniqueId, 0LL);
  System_String__Concat_43743732((System_String_o *)StringLiteral_18861, v17, 0LL);
  v22 = (BattleActionData_o *)sub_B170CC(BattleActionData_TypeInfo, v18, v19, v20, v21);
  BattleActionData___ctor(v22, 0LL);
  data = this->fields.data;
  if ( !data )
    goto LABEL_14;
  ServantData = BattleData__getServantData(data, uniqueId, 0LL);
  if ( !ServantData )
    goto LABEL_14;
  v25 = ServantData;
  v26 = ((__int64 (__fastcall *)(BattleServantData_o *, Il2CppMethodPointer))ServantData->klass->vtable._9_get_hp.method)(
          ServantData,
          ServantData->klass->vtable._10_set_hp.methodPtr);
  ((void (__fastcall *)(BattleServantData_o *, _QWORD, Il2CppMethodPointer))v25->klass->vtable._12_set_reducedhp.method)(
    v25,
    v26,
    v25->klass->vtable._13_get_resultHp.methodPtr);
  logic = this->fields.logic;
  if ( !logic )
    goto LABEL_14;
  Wave = BattleLogic__getWave(logic, 0LL);
  if ( !this->fields.data )
    goto LABEL_14;
  v29 = Wave;
  IsOpponentPTUniqueID = BattleData__IsOpponentPTUniqueID(this->fields.data, uniqueId, playerId, 0LL);
  BattleServantData__setActionHistory(v25, playerId, 4, v29, IsOpponentPTUniqueID, 0LL);
  v31 = ((__int64 (__fastcall *)(BattleServantData_o *, Il2CppMethodPointer))v25->klass->vtable._13_get_resultHp.method)(
          v25,
          v25->klass->vtable._14_set_resultHp.methodPtr);
  v32 = BattleServantData__resultDamage(v25, v31, 0, 0LL);
  v34 = this->fields.data;
  if ( !v34 )
    goto LABEL_14;
  v35 = v25->fields.uniqueId;
  v25->fields.deadTurn = v34->fields.typeTurn;
  FunctionObject = BattleLogicFunction__getFunctionObject(
                     (BattleLogicFunction_o *)v32,
                     funcEnt,
                     v35,
                     funcIndex,
                     isCommandSideEffect,
                     0LL,
                     v33);
  if ( !FunctionObject )
    goto LABEL_14;
  FunctionObject->fields.procType = 1;
  if ( uniqueId == playerId || isNoAccumulation )
    FunctionObject->fields.noAccumulation = 1;
  if ( !v22 )
LABEL_14:
    sub_B170D4();
  BattleActionData__setBuffData(v22, FunctionObject, baseVals, 0LL);
  return v22;
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
  BattleServantData_o *ServantData; // x0
  BattleServantData_o *v15; // x22
  BattleActionData_o *v16; // x24
  int32_t np; // w24
  int32_t Value; // w0
  int32_t v19; // w0
  __int64 v20; // x1
  __int64 v21; // x2
  __int64 v22; // x3
  __int64 v23; // x4
  int32_t v24; // w24
  int32_t v25; // w23
  BattleDataDefine_c *v26; // x0
  float PERCENTAGE_DENOMINATOR; // s0
  double v28; // d0
  int v29; // w24
  int32_t funcIndex; // w21
  int32_t uniqueId; // w22
  FunctionEntity_o *funcEnt; // x25
  _BOOL8 IsCommandSideEffect; // x0
  const MethodInfo *v34; // x6
  BattleActionData_BuffData_o *FunctionObject; // x0
  BattleActionData_BuffData_o *v36; // x20

  if ( (byte_40FCDFB & 1) == 0 )
  {
    sub_B16FFC(&BattleActionData_TypeInfo, procArg);
    sub_B16FFC(&BattleDataDefine_TypeInfo, v12);
    byte_40FCDFB = 1;
  }
  *diffNp = 0;
  data = this->fields.data;
  if ( !data )
    goto LABEL_22;
  ServantData = BattleData__getServantData(data, targetId, 0LL);
  if ( !ServantData )
    goto LABEL_22;
  v15 = ServantData;
  v16 = 0LL;
  if ( BattleServantData__checkPlayer(ServantData, 0LL) )
  {
    if ( BattleServantData__isLogicResultAlive(v15, 0LL) || (v16 = 0LL, BattleServantData__isGuts(v15, 0LL)) )
    {
      if ( baseVals )
      {
        np = v15->fields.np;
        Value = DataVals__GetValue(baseVals, 0LL);
        v19 = BattleServantData__addNp(v15, -Value, 0, 0LL);
        v24 = np - v19;
        *diffNp = v24;
        v25 = v19;
        v26 = BattleDataDefine_TypeInfo;
        if ( (BYTE3(BattleDataDefine_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !BattleDataDefine_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(BattleDataDefine_TypeInfo);
          v26 = BattleDataDefine_TypeInfo;
        }
        PERCENTAGE_DENOMINATOR = v26->static_fields->PERCENTAGE_DENOMINATOR;
        v28 = PERCENTAGE_DENOMINATOR == INFINITY ? -PERCENTAGE_DENOMINATOR : PERCENTAGE_DENOMINATOR;
        v29 = v24 % (int)v28;
        if ( v29 >= 1 )
        {
          BattleServantData__addNp(v15, v29, 0, 0LL);
          *diffNp -= v29;
        }
        v16 = (BattleActionData_o *)sub_B170CC(BattleActionData_TypeInfo, v20, v21, v22, v23);
        BattleActionData___ctor(v16, 0LL);
        if ( procArg )
        {
          funcIndex = baseVals->fields.funcIndex;
          uniqueId = v15->fields.uniqueId;
          funcEnt = baseVals->fields.funcEnt;
          IsCommandSideEffect = BattleLogicFunction_ProcListInArgs__get_IsCommandSideEffect(procArg, 0LL);
          FunctionObject = BattleLogicFunction__getFunctionObject(
                             (BattleLogicFunction_o *)IsCommandSideEffect,
                             funcEnt,
                             uniqueId,
                             funcIndex,
                             IsCommandSideEffect,
                             0LL,
                             v34);
          if ( FunctionObject )
          {
            v36 = FunctionObject;
            FunctionObject->fields.procType = 3;
            BattleActionData_BuffData__setSaveNp(FunctionObject, v25, 0LL);
            if ( v16 )
            {
              BattleActionData__setBuffData(v16, v36, baseVals, 0LL);
              return v16;
            }
          }
        }
      }
LABEL_22:
      sub_B170D4();
    }
  }
  return v16;
}


// local variable allocation has failed, the output may be wrong!
BattleActionData_o *__fastcall BattleLogicFunction__functionMissState(
        BattleLogicFunction_o *this,
        int32_t targetId,
        const MethodInfo *method)
{
  __int64 v3; // x3
  __int64 v4; // x4
  BattleActionData_o *v5; // x19

  if ( (byte_40FCDDF & 1) == 0 )
  {
    sub_B16FFC(&BattleActionData_TypeInfo, *(_QWORD *)&targetId);
    byte_40FCDDF = 1;
  }
  v5 = (BattleActionData_o *)sub_B170CC(BattleActionData_TypeInfo, *(_QWORD *)&targetId, method, v3, v4);
  BattleActionData___ctor(v5, 0LL);
  return v5;
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
  DataManager_o *v17; // x0
  WarQuestSelectionMaster_o *MasterData_WarQuestSelectionMaster; // x0
  SkillLvMaster_o *v19; // x22
  struct BattleSkillInfoData_o *skillInfo; // x0
  int32_t v21; // w0
  struct BattleSkillInfoData_o *v22; // x8
  SkillLvEntity_o *Entity; // x0
  SkillLvEntity_o *v24; // x22
  int32_t MovePositionUp; // w23
  int32_t MovePositionDown; // w0
  int v27; // w24
  BattleData_o *data; // x0
  int32_t TargetEnemyId; // w0
  int32_t v30; // w25
  __int64 v31; // x1
  __int64 v32; // x2
  struct BattleData_o *v33; // x0
  struct System_Int32_array *e_entryid; // x8
  __int64 v35; // x9
  int i; // w10
  int v37; // w11
  int v38; // w10
  BattleServantData_o *ServantData; // x0
  BattleServantData_o *v40; // x23
  struct BattleData_o *v41; // x8
  __int64 v42; // x1
  __int64 v43; // x2
  __int64 v44; // x3
  __int64 v45; // x4
  __int64 *v46; // x8
  System_Int32_array **v47; // x21
  __int64 v48; // x22
  System_String_array **v49; // x2
  System_String_array **v50; // x3
  System_Boolean_array **v51; // x4
  System_Int32_array **v52; // x5
  System_Int32_array *v53; // x6
  System_Int32_array *v54; // x7

  if ( (byte_40FCE01 & 1) == 0 )
  {
    sub_B16FFC(&BattleActionData_TypeInfo, actionData);
    sub_B16FFC(&Method_DataManager_GetMasterData_SkillLvMaster___, v7);
    sub_B16FFC(&Method_SingletonMonoBehaviour_DataManager__getInstance__, v8);
    sub_B16FFC(&StringLiteral_6353, v9);
    sub_B16FFC(&StringLiteral_6351, v10);
    sub_B16FFC(&StringLiteral_6349, v11);
    sub_B16FFC(&StringLiteral_6350, v12);
    sub_B16FFC(&StringLiteral_6348, v13);
    sub_B16FFC(&StringLiteral_6352, v14);
    byte_40FCE01 = 1;
  }
  v15 = *((_QWORD *)Method_SingletonMonoBehaviour_DataManager__getInstance__ + 3);
  if ( (*(_BYTE *)(v15 + 306) & 1) == 0 )
    sub_AAFCFC(*((_QWORD *)Method_SingletonMonoBehaviour_DataManager__getInstance__ + 3));
  v16 = **(_QWORD **)(v15 + 192);
  if ( (*(_BYTE *)(v16 + 306) & 1) == 0 )
    sub_AAFCFC(v16);
  v17 = **(DataManager_o ***)(v16 + 184);
  if ( !v17 )
    goto LABEL_23;
  MasterData_WarQuestSelectionMaster = DataManager__GetMasterData_WarQuestSelectionMaster_(
                                         v17,
                                         (const MethodInfo_18C3284 *)Method_DataManager_GetMasterData_SkillLvMaster___);
  if ( !actionData )
    goto LABEL_23;
  v19 = (SkillLvMaster_o *)MasterData_WarQuestSelectionMaster;
  skillInfo = actionData->fields.skillInfo;
  if ( !skillInfo )
    goto LABEL_23;
  v21 = ((__int64 (__fastcall *)(struct BattleSkillInfoData_o *, Il2CppMethodPointer))skillInfo->klass->vtable._5_get_skillId.method)(
          skillInfo,
          skillInfo->klass->vtable._6_get_IndividualityArray.methodPtr);
  v22 = actionData->fields.skillInfo;
  if ( !v22 )
    goto LABEL_23;
  if ( !v19 )
    goto LABEL_23;
  Entity = SkillLvMaster__GetEntity(v19, v21, v22->fields.skilllv, 0LL);
  if ( !Entity )
    goto LABEL_23;
  v24 = Entity;
  MovePositionUp = SkillLvEntity__getMovePositionUp(Entity, 0LL);
  MovePositionDown = SkillLvEntity__getMovePositionDown(v24, 0LL);
  if ( (MovePositionUp & MovePositionDown) != -1 )
  {
    v27 = MovePositionDown;
    data = this->fields.data;
    if ( !data )
      goto LABEL_23;
    TargetEnemyId = BattleData__getTargetEnemyId(data, 0, 0LL);
    if ( !this->fields.data )
      goto LABEL_23;
    v30 = TargetEnemyId;
    BattleData__getServantData(this->fields.data, TargetEnemyId, 0LL);
    v33 = this->fields.data;
    if ( !v33 )
      goto LABEL_23;
    e_entryid = v33->fields.e_entryid;
    if ( !e_entryid )
      goto LABEL_23;
    v35 = *(_QWORD *)&e_entryid->max_length;
    for ( i = 0; ; ++i )
    {
      if ( i >= (int)v35 )
        return;
      if ( i >= (unsigned int)v35 )
        goto LABEL_50;
      if ( v30 == e_entryid->m_Items[i + 1] )
        break;
    }
    v37 = MovePositionUp > 0 ? -MovePositionUp : v27;
    v38 = v37 + i;
    if ( v38 >= 0 && v38 < (int)v35 )
    {
      if ( v38 >= (unsigned int)v35 )
      {
LABEL_50:
        sub_B17100(v33, v31, v32);
        sub_B170A0();
      }
      ServantData = BattleData__getServantData(v33, e_entryid->m_Items[v38 + 1], 0LL);
      if ( !ServantData )
        goto LABEL_23;
      v40 = ServantData;
      if ( BattleServantData__isAlive(ServantData, 0, 0LL) )
      {
        v41 = this->fields.data;
        if ( !v41 )
          goto LABEL_23;
        v41->fields.globaltargetId = v40->fields.uniqueId;
        if ( BattleServantData__isMultiTargetUp(v40, 0LL) )
        {
          if ( SkillLvEntity__IsAress(v24, 0LL) )
            v46 = &StringLiteral_6353;
          else
            v46 = &StringLiteral_6352;
        }
        else if ( BattleServantData__isMultiTargetCore(v40, 0LL) )
        {
          if ( SkillLvEntity__IsAress(v24, 0LL) )
            v46 = &StringLiteral_6349;
          else
            v46 = &StringLiteral_6348;
        }
        else
        {
          v47 = 0LL;
          if ( !BattleServantData__isMultiTargetUnder(v40, 0LL) )
          {
LABEL_47:
            v48 = sub_B170CC(BattleActionData_TypeInfo, v42, v43, v44, v45);
            BattleActionData___ctor((BattleActionData_o *)v48, 0LL);
            if ( targetData && v48 )
            {
              *(_DWORD *)(v48 + 32) = targetData->fields.uniqueId;
              *(_DWORD *)(v48 + 36) = actionData->fields.targetId;
              BattleActionData__setStateField((BattleActionData_o *)v48, 0LL);
              *(_QWORD *)(v48 + 64) = v47;
              sub_B16F98((BattleServantConfConponent_o *)(v48 + 64), v47, v49, v50, v51, v52, v53, v54);
              BattleActionData__AddAfterActionData(actionData, (BattleActionData_o *)v48, 0, 0LL);
              return;
            }
LABEL_23:
            sub_B170D4();
          }
          if ( SkillLvEntity__IsAress(v24, 0LL) )
            v46 = &StringLiteral_6351;
          else
            v46 = &StringLiteral_6350;
        }
        v47 = (System_Int32_array **)*v46;
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
  const MethodInfo *v25; // x4
  struct BattleLogicFunctionProcess_FunctionUnitCheck_o *funcUnit_k__BackingField; // x8
  int32_t targetId_k__BackingField; // w26
  DataVals_o *dataVals_k__BackingField; // x20
  RemovedBuffInfoGroup_o *StealBuffInfoGroup; // x0
  RemovedBuffInfoGroup_o *v30; // x24
  BattleServantData_o *ServantData; // x25
  const MethodInfo *v32; // x4
  System_Collections_Generic_IEnumerable_TSource__o *v33; // x26
  __int64 v34; // x1
  __int64 v35; // x2
  __int64 v36; // x3
  __int64 v37; // x4
  System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *v38; // x27
  System_Collections_Generic_IEnumerable_T__o *v39; // x26
  __int64 v40; // x1
  __int64 v41; // x2
  __int64 v42; // x3
  __int64 v43; // x4
  System_Collections_Generic_HashSet_BattleBuffData_BuffData__o *v44; // x27
  System_String_array **v45; // x2
  System_String_array **v46; // x3
  System_Boolean_array **v47; // x4
  System_Int32_array **v48; // x5
  System_Int32_array *v49; // x6
  System_Int32_array *v50; // x7
  System_Collections_Generic_IEnumerable_TSource__o *v51; // x24
  __int64 v52; // x1
  __int64 v53; // x2
  __int64 v54; // x3
  __int64 v55; // x4
  System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *v56; // x26
  System_Collections_Generic_IEnumerable_TSource__o *v57; // x0
  DrawLotsDisplayMessage_DisplayedInGroup_SaveData_array *v58; // x0
  __int64 v59; // x1
  __int64 v60; // x2
  __int64 v61; // x3
  __int64 v62; // x4
  DrawLotsDisplayMessage_DisplayedInGroup_SaveData_array *v63; // x26
  System_Collections_Generic_List_int__o *v64; // x27
  WebViewManager_o *Instance; // x0
  WarQuestSelectionMaster_o *MasterData_WarQuestSelectionMaster; // x0
  __int64 v67; // x1
  const MethodInfo *v68; // x2
  int max_length; // w8
  BattleLogicFunction_o *v70; // x21
  DataMasterBase_WarMaster__WarEntity__int__o *v71; // x28
  __int64 v72; // x22
  __int64 v73; // x24
  BattleBuffData_BuffData_o *v74; // x19
  bool IsAddStateFieldFlag; // w0
  const MethodInfo *v76; // x3
  int32_t DispTurn; // w0
  _BOOL4 isProgressSelfTurn; // w8
  __int64 v79; // x1
  __int64 v80; // x2
  __int64 v81; // x3
  __int64 v82; // x4
  BattleActionData_BuffData_o *v83; // x24
  struct FunctionEntity_o *funcEnt; // x21
  bool IsCommandSideEffect; // w0
  BattleData_o *data; // x0
  System_Int32_array **v87; // x0
  System_String_array **v88; // x2
  System_String_array **v89; // x3
  System_Boolean_array **v90; // x4
  System_Int32_array **v91; // x5
  System_Int32_array *v92; // x6
  System_Int32_array *v93; // x7
  int32_t funcIndex; // w19
  bool v95; // w0
  const MethodInfo *v96; // x7
  BattleActionData_o *NoEffectObject; // x0
  BattleLogicFunction_ProcListInArgs_o *v98; // [xsp+0h] [xbp-80h]
  BattleLogicFunctionProcess_FunctionTargetCheck_o *v99; // [xsp+8h] [xbp-78h]
  int32_t v100; // [xsp+14h] [xbp-6Ch]
  BattleActionData_o *v101; // [xsp+18h] [xbp-68h]
  WarEntity_o *entity; // [xsp+28h] [xbp-58h] BYREF

  if ( (byte_40FCE05 & 1) == 0 )
  {
    sub_B16FFC(&BattleActionData_BuffData_TypeInfo, procArg);
    sub_B16FFC(&Method_DataManager_GetMasterData_BuffMaster___, v8);
    sub_B16FFC(&Method_DataMasterBase_BuffMaster__BuffEntity__int__TryGetEntity__, v9);
    sub_B16FFC(&Method_System_Linq_Enumerable_ToArray_BattleBuffData_BuffData___, v10);
    sub_B16FFC(&Method_System_Linq_Enumerable_Where_BattleBuffData_BuffData___, v11);
    sub_B16FFC(&Method_System_Func_BattleBuffData_BuffData__bool___ctor__, v12);
    sub_B16FFC(&System_Func_BattleBuffData_BuffData__bool__TypeInfo, v13);
    sub_B16FFC(&Method_System_Collections_Generic_HashSet_BattleBuffData_BuffData___ctor___66714872, v14);
    sub_B16FFC(&System_Collections_Generic_HashSet_BattleBuffData_BuffData__TypeInfo, v15);
    sub_B16FFC(&Method_System_Collections_Generic_List_int__Add__, v16);
    sub_B16FFC(&Method_System_Collections_Generic_List_int__ToArray__, v17);
    sub_B16FFC(&Method_System_Collections_Generic_List_int___ctor__, v18);
    sub_B16FFC(&System_Collections_Generic_List_int__TypeInfo, v19);
    sub_B16FFC(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v20);
    sub_B16FFC(&Method_BattleLogicFunction___c__DisplayClass99_0__functionMoveState_b__0__, v21);
    sub_B16FFC(&Method_BattleLogicFunction___c__DisplayClass99_0__functionMoveState_b__1__, v22);
    sub_B16FFC(&BattleLogicFunction___c__DisplayClass99_0_TypeInfo, v23);
    byte_40FCE05 = 1;
  }
  entity = 0LL;
  v24 = sub_B170CC(BattleLogicFunction___c__DisplayClass99_0_TypeInfo, procArg, mainAction, funcTarget, method);
  BattleLogicFunction___c__DisplayClass99_0___ctor((BattleLogicFunction___c__DisplayClass99_0_o *)v24, 0LL);
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
                         v25);
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
  v100 = targetId_k__BackingField;
  v99 = funcTarget;
  v101 = mainAction;
  *(_DWORD *)(v24 + 16) = 0x1000000;
  if ( !v30 )
    goto LABEL_42;
  v33 = (System_Collections_Generic_IEnumerable_TSource__o *)RemovedBuffInfoGroup__RemovedLinkageBuffEnumerable(
                                                               v30,
                                                               0LL);
  v38 = (System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *)sub_B170CC(
                                                                             System_Func_BattleBuffData_BuffData__bool__TypeInfo,
                                                                             v34,
                                                                             v35,
                                                                             v36,
                                                                             v37);
  System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool____ctor(
    v38,
    (Il2CppObject *)v24,
    Method_BattleLogicFunction___c__DisplayClass99_0__functionMoveState_b__0__,
    (const MethodInfo_2B6AB40 *)Method_System_Func_BattleBuffData_BuffData__bool___ctor__);
  v39 = (System_Collections_Generic_IEnumerable_T__o *)System_Linq_Enumerable__Where_WarBoardManager_WarBoardOnboardSkillTarget_(
                                                         v33,
                                                         (System_Func_TSource__bool__o *)v38,
                                                         (const MethodInfo_19C8FE8 *)Method_System_Linq_Enumerable_Where_BattleBuffData_BuffData___);
  v44 = (System_Collections_Generic_HashSet_BattleBuffData_BuffData__o *)sub_B170CC(
                                                                           System_Collections_Generic_HashSet_BattleBuffData_BuffData__TypeInfo,
                                                                           v40,
                                                                           v41,
                                                                           v42,
                                                                           v43);
  System_Collections_Generic_HashSet_BattleBuffData_BuffData____ctor(
    v44,
    v39,
    (const MethodInfo_21DEA2C *)Method_System_Collections_Generic_HashSet_BattleBuffData_BuffData___ctor___66714872);
  *(_QWORD *)(v24 + 24) = v44;
  sub_B16F98((BattleServantConfConponent_o *)(v24 + 24), (System_Int32_array **)v44, v45, v46, v47, v48, v49, v50);
  v51 = (System_Collections_Generic_IEnumerable_TSource__o *)RemovedBuffInfoGroup__RemovedAllBuffEnumerable(v30, 0LL);
  v56 = (System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *)sub_B170CC(
                                                                             System_Func_BattleBuffData_BuffData__bool__TypeInfo,
                                                                             v52,
                                                                             v53,
                                                                             v54,
                                                                             v55);
  System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool____ctor(
    v56,
    (Il2CppObject *)v24,
    Method_BattleLogicFunction___c__DisplayClass99_0__functionMoveState_b__1__,
    (const MethodInfo_2B6AB40 *)Method_System_Func_BattleBuffData_BuffData__bool___ctor__);
  v57 = System_Linq_Enumerable__Where_WarBoardManager_WarBoardOnboardSkillTarget_(
          v51,
          (System_Func_TSource__bool__o *)v56,
          (const MethodInfo_19C8FE8 *)Method_System_Linq_Enumerable_Where_BattleBuffData_BuffData___);
  v58 = System_Linq_Enumerable__ToArray_DrawLotsDisplayMessage_DisplayedInGroup_SaveData_(
          v57,
          (const MethodInfo_19C4BCC *)Method_System_Linq_Enumerable_ToArray_BattleBuffData_BuffData___);
  if ( !v58 )
    goto LABEL_42;
  v63 = v58;
  if ( *(_QWORD *)&v58->max_length )
  {
    v98 = procArg;
    v64 = (System_Collections_Generic_List_int__o *)sub_B170CC(
                                                      System_Collections_Generic_List_int__TypeInfo,
                                                      v59,
                                                      v60,
                                                      v61,
                                                      v62);
    System_Collections_Generic_List_int____ctor(
      v64,
      (const MethodInfo_2F0F794 *)Method_System_Collections_Generic_List_int___ctor__);
    Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !Instance )
      goto LABEL_42;
    MasterData_WarQuestSelectionMaster = DataManager__GetMasterData_WarQuestSelectionMaster_(
                                           (DataManager_o *)Instance,
                                           (const MethodInfo_18C3284 *)Method_DataManager_GetMasterData_BuffMaster___);
    max_length = v63->max_length;
    v70 = this;
    if ( max_length >= 1 )
    {
      v71 = (DataMasterBase_WarMaster__WarEntity__int__o *)MasterData_WarQuestSelectionMaster;
      v72 = 0LL;
      v73 = 0LL;
      do
      {
        if ( (unsigned int)v72 >= max_length )
        {
          sub_B17100(MasterData_WarQuestSelectionMaster, v67, v68);
          sub_B170A0();
        }
        v74 = (BattleBuffData_BuffData_o *)v63->m_Items[v72];
        if ( !v74 || !v71 )
          goto LABEL_42;
        MasterData_WarQuestSelectionMaster = (WarQuestSelectionMaster_o *)DataMasterBase_WarMaster__WarEntity__int___TryGetEntity(
                                                                            v71,
                                                                            &entity,
                                                                            v74->fields.buffId,
                                                                            (const MethodInfo_266F3E4 *)Method_DataMasterBase_BuffMaster__BuffEntity__int__TryGetEntity__);
        if ( ((unsigned __int8)MasterData_WarQuestSelectionMaster & 1) != 0 )
        {
          IsAddStateFieldFlag = BattleLogicFunction__IsAddStateFieldFlag(v70, v74, v68);
          if ( !ServantData )
            goto LABEL_42;
          BattleServantData__addBuff(ServantData, v74, IsAddStateFieldFlag, 0, 1, 0LL);
          if ( !entity )
            goto LABEL_42;
          if ( !BuffEntity__IsDisableMoveStateTurnChange((BuffEntity_o *)entity, 0LL) )
          {
            if ( v74->fields.turn <= 0 )
            {
              isProgressSelfTurn = v74->fields.isProgressSelfTurn;
            }
            else
            {
              DispTurn = BattleBuffData_BuffData__get_DispTurn(v74, 0LL);
              isProgressSelfTurn = v74->fields.isProgressSelfTurn;
              v74->fields.turn = 2 * DispTurn - isProgressSelfTurn;
            }
            v74->fields.isProgressEndEnemyTurn = ServantData->fields.isEnemy ^ !isProgressSelfTurn;
          }
          BattleLogicFunction__AfterAddedBuffProcess(v70, ServantData, (BuffEntity_o *)entity, v76);
          if ( v73 )
          {
            if ( !v64 )
              goto LABEL_42;
            System_Collections_Generic_List_int___Add(
              v64,
              v74->fields.addOrder,
              (const MethodInfo_2F104F0 *)Method_System_Collections_Generic_List_int__Add__);
          }
          else
          {
            v83 = (BattleActionData_BuffData_o *)sub_B170CC(BattleActionData_BuffData_TypeInfo, v79, v80, v81, v82);
            BattleActionData_BuffData___ctor(v83, 0LL);
            if ( !v83 )
              goto LABEL_42;
            v83->fields.targetId = v100;
            if ( !dataVals_k__BackingField )
              goto LABEL_42;
            v83->fields.functionIndex = dataVals_k__BackingField->fields.funcIndex;
            if ( !v98 )
              goto LABEL_42;
            funcEnt = dataVals_k__BackingField->fields.funcEnt;
            IsCommandSideEffect = BattleLogicFunction_ProcListInArgs__get_IsCommandSideEffect(v98, 0LL);
            v73 = ((__int64 (__fastcall *)(BattleLogicFunctionProcess_FunctionTargetCheck_o *, BattleActionData_BuffData_o *, BattleBuffData_BuffData_o *, struct FunctionEntity_o *, bool, Il2CppMethodPointer))v99->klass->vtable._10_MakeAddActionBuffData.method)(
                    v99,
                    v83,
                    v74,
                    funcEnt,
                    IsCommandSideEffect,
                    v99->klass->vtable._11_GetConvertBuffEntity.methodPtr);
            if ( !v101 )
              goto LABEL_42;
            BattleActionData__setBuffData(v101, (BattleActionData_BuffData_o *)v73, dataVals_k__BackingField, 0LL);
            v70 = this;
            data = this->fields.data;
            if ( !data )
              goto LABEL_42;
            BattleData__AddFreshBuffList(data, (BattleActionData_BuffData_o *)v73, 0LL);
          }
        }
        max_length = v63->max_length;
        ++v72;
      }
      while ( (int)v72 < max_length );
      if ( v73 )
      {
        if ( v64 )
        {
          v87 = (System_Int32_array **)System_Collections_Generic_List_int___ToArray(
                                         v64,
                                         (const MethodInfo_2F125FC *)Method_System_Collections_Generic_List_int__ToArray__);
          *(_QWORD *)(v73 + 144) = v87;
          sub_B16F98((BattleServantConfConponent_o *)(v73 + 144), v87, v88, v89, v90, v91, v92, v93);
          return;
        }
LABEL_42:
        sub_B170D4();
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
    v95 = BattleLogicFunction_ProcListInArgs__get_IsCommandSideEffect(procArg, 0LL);
    NoEffectObject = BattleLogicFunction__getNoEffectObject(
                       this,
                       v100,
                       funcIndex,
                       dataVals_k__BackingField,
                       v95,
                       0LL,
                       0LL,
                       v96);
    if ( !mainAction )
      goto LABEL_42;
    BattleActionData__addAction(mainAction, NoEffectObject, 0LL);
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
  BattleActionData_o *v22; // x28
  BattleData_o *data; // x0
  BattleServantData_o *ServantData; // x0
  BattleData_o *v25; // x8
  BattleServantData_o *v26; // x22
  BattleServantData_o *v27; // x21
  __int64 v28; // x1
  __int64 v29; // x2
  __int64 v30; // x3
  __int64 v31; // x4
  System_Collections_Generic_List_int__o *v32; // x27
  int32_t Param; // w0
  __int64 v34; // x1
  __int64 v35; // x2
  __int64 v36; // x3
  __int64 v37; // x4
  System_Int32_array *TargetRarityList; // x28
  char v39; // w21
  int32_t v40; // w1
  int32_t v41; // w0
  __int64 v42; // x2
  int v43; // w8
  bool v44; // w25
  System_Int32_array *buffIndv; // x23
  System_Int32_array *v46; // x22
  char v47; // w9
  __int64 v48; // x0
  __int64 v49; // x1
  __int64 v50; // x2
  bool v51; // zf
  int32_t v52; // w0
  int32_t v53; // w0
  int32_t v54; // w0
  int32_t v55; // w0
  int32_t v56; // w0
  int32_t v57; // w0
  __int64 v58; // x2
  System_Array_o *v59; // x21
  bool v60; // w22
  bool IsOverChargeState; // w0
  BattleLogic_o *logic; // x24
  System_Int32_array *v63; // x27
  bool IsIncludeIgnoreIndividuality; // w26
  bool isParam; // w0
  BattleActionData_DamageData_o *FunctionNpDamagelist; // x0
  BattleActionData_DamageData_o *v67; // x20
  char v68; // w22
  bool isRarityAtk; // [xsp+34h] [xbp-8Ch]
  BattleServantData_o *v71; // [xsp+38h] [xbp-88h]
  BattleServantData_o *v72; // [xsp+40h] [xbp-80h]
  BattleActionData_o *v73; // [xsp+50h] [xbp-70h]
  int32_t funcIndexa; // [xsp+5Ch] [xbp-64h]
  BattleActionData_o *actiona; // [xsp+60h] [xbp-60h]
  int32_t v76; // [xsp+6Ch] [xbp-54h]
  System_RuntimeFieldHandle_o v77; // 0:w1.4

  if ( (byte_40FCDE1 & 1) == 0 )
  {
    sub_B16FFC(&BattleActionData_TypeInfo, *(_QWORD *)&playerId);
    sub_B16FFC(&int___TypeInfo, v15);
    sub_B16FFC(&Method_System_Collections_Generic_List_int__Add__, v16);
    sub_B16FFC(&Method_System_Collections_Generic_List_int__ToArray__, v17);
    sub_B16FFC(&Method_System_Collections_Generic_List_int___ctor__, v18);
    sub_B16FFC(&System_Collections_Generic_List_int__TypeInfo, v19);
    sub_B16FFC(&DataVals_OverChargeState___TypeInfo, v20);
    sub_B16FFC(
      &Field__PrivateImplementationDetails__44BE0EBF7C907BA44AD83314C6AD0AA399AD5B73911C129D2CD6A85D4A056C90,
      v21);
    byte_40FCDE1 = 1;
  }
  v22 = (BattleActionData_o *)sub_B170CC(
                                BattleActionData_TypeInfo,
                                *(_QWORD *)&playerId,
                                *(_QWORD *)&targetId,
                                baseVals,
                                *(_QWORD *)&funcIndex);
  BattleActionData___ctor(v22, 0LL);
  data = this->fields.data;
  if ( !data )
    goto LABEL_38;
  ServantData = BattleData__getServantData(data, playerId, 0LL);
  v25 = this->fields.data;
  if ( !v25 )
    goto LABEL_38;
  v26 = ServantData;
  v27 = BattleData__getServantData(v25, targetId, 0LL);
  v32 = (System_Collections_Generic_List_int__o *)sub_B170CC(
                                                    System_Collections_Generic_List_int__TypeInfo,
                                                    v28,
                                                    v29,
                                                    v30,
                                                    v31);
  System_Collections_Generic_List_int____ctor(
    v32,
    (const MethodInfo_2F0F794 *)Method_System_Collections_Generic_List_int___ctor__);
  if ( !baseVals
    || (v71 = v27, v73 = v22, funcIndexa = funcIndex, Param = DataVals__GetParam(baseVals, 3, 0, 0LL), !v32) )
  {
LABEL_38:
    sub_B170D4();
  }
  System_Collections_Generic_List_int___Add(
    v32,
    Param,
    (const MethodInfo_2F104F0 *)Method_System_Collections_Generic_List_int__Add__);
  TargetRarityList = 0LL;
  v39 = 0;
  v76 = type;
  actiona = action;
  v72 = v26;
  if ( (unsigned int)type > 0xB )
  {
LABEL_26:
    v47 = 0;
    v44 = 0;
    buffIndv = 0LL;
    v46 = 0LL;
    goto LABEL_29;
  }
  if ( ((1 << type) & 0x698) != 0 )
  {
    v40 = 7;
    goto LABEL_12;
  }
  if ( ((1 << type) & 0x60) != 0 )
  {
    v40 = 6;
LABEL_12:
    v41 = DataVals__GetParam(baseVals, v40, 0, 0LL);
    System_Collections_Generic_List_int___Add(
      v32,
      v41,
      (const MethodInfo_2F104F0 *)Method_System_Collections_Generic_List_int__Add__);
    v43 = type - 3;
    TargetRarityList = 0LL;
    v39 = 0;
    v44 = 0;
    buffIndv = 0LL;
    v46 = 0LL;
    v47 = 0;
    switch ( v43 )
    {
      case 0:
      case 1:
        v46 = (System_Int32_array *)sub_B17014(int___TypeInfo, 1LL, v42);
        v48 = DataVals__GetParam(baseVals, 6, 0, 0LL);
        if ( !v46 )
          goto LABEL_38;
        if ( !v46->max_length )
          goto LABEL_39;
        v39 = 0;
        v47 = 0;
        TargetRarityList = 0LL;
        v44 = 0;
        buffIndv = 0LL;
        v46->m_Items[1] = v48;
        break;
      case 2:
      case 3:
      case 5:
        goto LABEL_29;
      case 4:
        buffIndv = (System_Int32_array *)sub_B17014(int___TypeInfo, 1LL, v42);
        v48 = DataVals__GetParam(baseVals, 6, 0, 0LL);
        if ( !buffIndv )
          goto LABEL_38;
        if ( !buffIndv->max_length )
        {
LABEL_39:
          sub_B17100(v48, v49, v50);
          sub_B170A0();
        }
        v39 = 0;
        v47 = 0;
        TargetRarityList = 0LL;
        v44 = 0;
        v46 = 0LL;
        buffIndv->m_Items[1] = v48;
        break;
      case 6:
        TargetRarityList = DataVals__GetTargetRarityList(baseVals, 0LL);
        v39 = 0;
        v44 = 0;
        buffIndv = 0LL;
        v46 = 0LL;
        v47 = 1;
        goto LABEL_29;
      case 7:
        v46 = DataVals__GetAndCheckIndividuality(baseVals, 0LL);
        v39 = 0;
        v47 = 0;
        TargetRarityList = 0LL;
        v44 = 0;
        buffIndv = 0LL;
        goto LABEL_29;
      default:
        goto LABEL_26;
    }
    goto LABEL_29;
  }
  v51 = type == 11;
  v47 = 0;
  v44 = 0;
  buffIndv = 0LL;
  v46 = 0LL;
  if ( v51 )
  {
    v32 = (System_Collections_Generic_List_int__o *)sub_B170CC(
                                                      System_Collections_Generic_List_int__TypeInfo,
                                                      v34,
                                                      v35,
                                                      v36,
                                                      v37);
    System_Collections_Generic_List_int____ctor(
      v32,
      (const MethodInfo_2F0F794 *)Method_System_Collections_Generic_List_int___ctor__);
    v52 = DataVals__GetParam(baseVals, 3, 0, 0LL);
    if ( !v32 )
      goto LABEL_38;
    System_Collections_Generic_List_int___Add(
      v32,
      v52,
      (const MethodInfo_2F104F0 *)Method_System_Collections_Generic_List_int__Add__);
    v53 = DataVals__GetParam(baseVals, 7, 0, 0LL);
    System_Collections_Generic_List_int___Add(
      v32,
      v53,
      (const MethodInfo_2F104F0 *)Method_System_Collections_Generic_List_int__Add__);
    v54 = DataVals__GetParam(baseVals, 59, 0, 0LL);
    System_Collections_Generic_List_int___Add(
      v32,
      v54,
      (const MethodInfo_2F104F0 *)Method_System_Collections_Generic_List_int__Add__);
    v55 = DataVals__GetParam(baseVals, 60, 0, 0LL);
    System_Collections_Generic_List_int___Add(
      v32,
      v55,
      (const MethodInfo_2F104F0 *)Method_System_Collections_Generic_List_int__Add__);
    v56 = DataVals__GetParam(baseVals, 4, 0, 0LL);
    System_Collections_Generic_List_int___Add(
      v32,
      v56,
      (const MethodInfo_2F104F0 *)Method_System_Collections_Generic_List_int__Add__);
    v57 = DataVals__GetParam(baseVals, 6, 0, 0LL);
    System_Collections_Generic_List_int___Add(
      v32,
      v57,
      (const MethodInfo_2F104F0 *)Method_System_Collections_Generic_List_int__Add__);
    buffIndv = DataVals__GetTargetList(baseVals, 0LL);
    v59 = (System_Array_o *)sub_B17014(DataVals_OverChargeState___TypeInfo, 3LL, v58);
    v77.fields.value = Field__PrivateImplementationDetails__44BE0EBF7C907BA44AD83314C6AD0AA399AD5B73911C129D2CD6A85D4A056C90;
    System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray_42629164(v59, v77, 0LL);
    DataVals__UpdateOverChargeEachFunc(baseVals, (DataVals_OverChargeState_array *)v59, 0LL);
    v60 = DataVals__IsOverChargeState(baseVals, 2, 0LL) || DataVals__IsOverChargeState(baseVals, 8, 0LL);
    v39 = 1;
    IsOverChargeState = DataVals__IsOverChargeState(baseVals, 1, 0LL);
    v47 = 0;
    TargetRarityList = 0LL;
    v44 = v60 && !IsOverChargeState;
    v46 = buffIndv;
  }
LABEL_29:
  isRarityAtk = v47;
  logic = this->fields.logic;
  v63 = System_Collections_Generic_List_int___ToArray(
          v32,
          (const MethodInfo_2F125FC *)Method_System_Collections_Generic_List_int__ToArray__);
  IsIncludeIgnoreIndividuality = DataVals__IsIncludeIgnoreIndividuality(baseVals, 0LL);
  isParam = DataVals__isParam(baseVals, 90, 0LL);
  if ( !logic )
    goto LABEL_38;
  FunctionNpDamagelist = BattleLogic__getFunctionNpDamagelist(
                           logic,
                           v72,
                           v71,
                           v63,
                           funcIndexa,
                           v76,
                           actiona,
                           v46,
                           buffIndv,
                           TargetRarityList,
                           IsIncludeIgnoreIndividuality,
                           isParam,
                           0LL);
  v67 = FunctionNpDamagelist;
  if ( (unsigned int)(v76 - 3) < 8 && ((0x93u >> (v76 - 3)) & 1) != 0 )
    v68 = 1;
  else
    v68 = v39 & v44;
  if ( !FunctionNpDamagelist )
    goto LABEL_38;
  BattleActionData_DamageData__addAttackSideEffectAction(FunctionNpDamagelist, 80, 0LL);
  if ( !v73 )
    goto LABEL_38;
  BattleActionData__setDamageData(v73, v67, baseVals, v68, isRarityAtk, 0LL);
  return v73;
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
  BattleData_o *data; // x0
  BattleData_o *v20; // x0
  __int64 v21; // x1
  __int64 v22; // x2
  __int64 v23; // x3
  __int64 v24; // x4
  struct BattleData_o *v25; // x8
  System_Collections_Generic_List_USFGOSetAudioGroupIndexConditional_WeightIndex__o *player_datalist; // x21
  BattleLogicFunction___c_c *v27; // x0
  struct BattleLogicFunction___c_StaticFields *static_fields; // x8
  System_Action_DrawLotsDisplayMessage_DisplayedInGroup_SaveData__o *_9__80_0; // x22
  Il2CppObject *v30; // x23
  struct BattleLogicFunction___c_StaticFields *v31; // x0
  System_String_array **v32; // x2
  System_String_array **v33; // x3
  System_Boolean_array **v34; // x4
  System_Int32_array **v35; // x5
  System_Int32_array *v36; // x6
  System_Int32_array *v37; // x7
  __int64 v38; // x1
  __int64 v39; // x2
  __int64 v40; // x3
  __int64 v41; // x4
  struct BattleData_o *v42; // x8
  BattleLogicFunction___c_c *v43; // x0
  System_Collections_Generic_List_TitleInfoControl_EventEndTimeInfo__o *v44; // x21
  struct BattleLogicFunction___c_StaticFields *v45; // x8
  System_Comparison_TitleInfoControl_EventEndTimeInfo__o *_9__80_1; // x22
  Il2CppObject *v47; // x23
  struct BattleLogicFunction___c_StaticFields *v48; // x0
  System_String_array **v49; // x2
  System_String_array **v50; // x3
  System_Boolean_array **v51; // x4
  System_Int32_array **v52; // x5
  System_Int32_array *v53; // x6
  System_Int32_array *v54; // x7
  struct BattleData_o *v55; // x8
  System_Collections_Generic_List_WarBoardUiData_SaveData__o *v56; // x0
  void *isAlive; // x0
  __int64 v58; // x1
  __int64 v59; // x2
  int v60; // w8
  unsigned int *v61; // x21
  int32_t v62; // w23
  BattleServantData_o *v63; // x22
  unsigned __int64 v64; // x23
  __int64 v65; // x8
  unsigned __int64 v66; // x9
  unsigned __int64 v67; // x8
  __int64 v68; // x22
  struct BattleData_o *v69; // x8
  struct System_Int32_array *p_entryid; // x8
  BattleData_o *v71; // x0
  BattleLogic_o *logic; // x0
  __int64 v73; // x1
  __int64 v74; // x2
  __int64 v75; // x3
  __int64 v76; // x4
  BattleLogicTask_o *v77; // x21
  BattleLogic_o *v78; // x0

  if ( (byte_40FCDF2 & 1) == 0 )
  {
    sub_B16FFC(&Method_System_Action_BattleServantData___ctor__, *(_QWORD *)&actionId);
    sub_B16FFC(&System_Action_BattleServantData__TypeInfo, v7);
    sub_B16FFC(&BattleActionData_TypeInfo, v8);
    sub_B16FFC(&BattleLogicTask_TypeInfo, v9);
    sub_B16FFC(&Method_System_Comparison_BattleServantData___ctor__, v10);
    sub_B16FFC(&System_Comparison_BattleServantData__TypeInfo, v11);
    sub_B16FFC(&Method_System_Collections_Generic_List_BattleServantData__ForEach__, v12);
    sub_B16FFC(&Method_System_Collections_Generic_List_BattleServantData__Sort__, v13);
    sub_B16FFC(&Method_System_Collections_Generic_List_BattleServantData__ToArray__, v14);
    sub_B16FFC(&Method_BattleLogicFunction___c__functionPtShuffle_b__80_0__, v15);
    sub_B16FFC(&Method_BattleLogicFunction___c__functionPtShuffle_b__80_1__, v16);
    sub_B16FFC(&BattleLogicFunction___c_TypeInfo, v17);
    byte_40FCDF2 = 1;
  }
  v18 = (BattleActionData_o *)sub_B170CC(
                                BattleActionData_TypeInfo,
                                *(_QWORD *)&actionId,
                                funcEnt,
                                baeVals,
                                *(_QWORD *)&funcIndex);
  BattleActionData___ctor(v18, 0LL);
  data = this->fields.data;
  if ( !data )
    goto LABEL_57;
  BattleData__SubBuffFromPT_18778888(data, 0LL, 0LL);
  v20 = this->fields.data;
  if ( !v20 )
    goto LABEL_57;
  BattleData__SubBuffExitSvt(v20, 0LL, 0LL);
  v25 = this->fields.data;
  if ( !v25 )
    goto LABEL_57;
  player_datalist = (System_Collections_Generic_List_USFGOSetAudioGroupIndexConditional_WeightIndex__o *)v25->fields.player_datalist;
  v27 = BattleLogicFunction___c_TypeInfo;
  if ( (BYTE3(BattleLogicFunction___c_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !BattleLogicFunction___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BattleLogicFunction___c_TypeInfo);
    v27 = BattleLogicFunction___c_TypeInfo;
  }
  static_fields = v27->static_fields;
  _9__80_0 = (System_Action_DrawLotsDisplayMessage_DisplayedInGroup_SaveData__o *)static_fields->__9__80_0;
  if ( !_9__80_0 )
  {
    if ( (BYTE3(v27->vtable._0_Equals.methodPtr) & 4) != 0 && !v27->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v27);
      static_fields = BattleLogicFunction___c_TypeInfo->static_fields;
    }
    v30 = (Il2CppObject *)static_fields->__9;
    _9__80_0 = (System_Action_DrawLotsDisplayMessage_DisplayedInGroup_SaveData__o *)sub_B170CC(
                                                                                      System_Action_BattleServantData__TypeInfo,
                                                                                      v21,
                                                                                      v22,
                                                                                      v23,
                                                                                      v24);
    System_Action_DrawLotsDisplayMessage_DisplayedInGroup_SaveData____ctor(
      _9__80_0,
      v30,
      Method_BattleLogicFunction___c__functionPtShuffle_b__80_0__,
      (const MethodInfo_24B7310 *)Method_System_Action_BattleServantData___ctor__);
    v31 = BattleLogicFunction___c_TypeInfo->static_fields;
    v31->__9__80_0 = (struct System_Action_BattleServantData__o *)_9__80_0;
    sub_B16F98(
      (BattleServantConfConponent_o *)&v31->__9__80_0,
      (System_Int32_array **)_9__80_0,
      v32,
      v33,
      v34,
      v35,
      v36,
      v37);
  }
  if ( !player_datalist )
    goto LABEL_57;
  System_Collections_Generic_List_USFGOSetAudioGroupIndexConditional_WeightIndex___ForEach(
    player_datalist,
    (System_Action_T__o *)_9__80_0,
    (const MethodInfo_2F269F0 *)Method_System_Collections_Generic_List_BattleServantData__ForEach__);
  v42 = this->fields.data;
  if ( !v42 )
    goto LABEL_57;
  v43 = BattleLogicFunction___c_TypeInfo;
  v44 = (System_Collections_Generic_List_TitleInfoControl_EventEndTimeInfo__o *)v42->fields.player_datalist;
  if ( (BYTE3(BattleLogicFunction___c_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !BattleLogicFunction___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BattleLogicFunction___c_TypeInfo);
    v43 = BattleLogicFunction___c_TypeInfo;
  }
  v45 = v43->static_fields;
  _9__80_1 = (System_Comparison_TitleInfoControl_EventEndTimeInfo__o *)v45->__9__80_1;
  if ( !_9__80_1 )
  {
    if ( (BYTE3(v43->vtable._0_Equals.methodPtr) & 4) != 0 && !v43->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v43);
      v45 = BattleLogicFunction___c_TypeInfo->static_fields;
    }
    v47 = (Il2CppObject *)v45->__9;
    _9__80_1 = (System_Comparison_TitleInfoControl_EventEndTimeInfo__o *)sub_B170CC(
                                                                           System_Comparison_BattleServantData__TypeInfo,
                                                                           v38,
                                                                           v39,
                                                                           v40,
                                                                           v41);
    System_Comparison_TitleInfoControl_EventEndTimeInfo____ctor(
      _9__80_1,
      v47,
      Method_BattleLogicFunction___c__functionPtShuffle_b__80_1__,
      (const MethodInfo_25BFD48 *)Method_System_Comparison_BattleServantData___ctor__);
    v48 = BattleLogicFunction___c_TypeInfo->static_fields;
    v48->__9__80_1 = (struct System_Comparison_BattleServantData__o *)_9__80_1;
    sub_B16F98(
      (BattleServantConfConponent_o *)&v48->__9__80_1,
      (System_Int32_array **)_9__80_1,
      v49,
      v50,
      v51,
      v52,
      v53,
      v54);
  }
  if ( !v44 )
    goto LABEL_57;
  System_Collections_Generic_List_TitleInfoControl_EventEndTimeInfo___Sort(
    v44,
    (System_Comparison_T__o *)_9__80_1,
    (const MethodInfo_2F27DB4 *)Method_System_Collections_Generic_List_BattleServantData__Sort__);
  v55 = this->fields.data;
  if ( !v55 )
    goto LABEL_57;
  v56 = (System_Collections_Generic_List_WarBoardUiData_SaveData__o *)v55->fields.player_datalist;
  if ( !v56 )
    goto LABEL_57;
  isAlive = System_Collections_Generic_List_WarBoardUiData_SaveData___ToArray(
              v56,
              (const MethodInfo_2F27E24 *)Method_System_Collections_Generic_List_BattleServantData__ToArray__);
  if ( !isAlive )
    goto LABEL_57;
  v60 = *((_DWORD *)isAlive + 6);
  v61 = (unsigned int *)isAlive;
  if ( v60 >= 1 )
  {
    v62 = 0;
    while ( 1 )
    {
      if ( v62 >= (unsigned int)v60 )
      {
LABEL_58:
        sub_B17100(isAlive, v58, v59);
        sub_B170A0();
      }
      v63 = *(BattleServantData_o **)&v61[2 * v62 + 8];
      if ( !v63 )
        break;
      if ( v63->fields.isEntry )
      {
        isAlive = (void *)BattleServantData__isAlive(v63, 0, 0LL);
        if ( ((unsigned __int8)isAlive & 1) != 0 )
          v63->fields.isEntry = 0;
      }
      v63->fields.deckIndex = v62;
      v60 = v61[6];
      if ( ++v62 >= v60 )
        goto LABEL_36;
    }
LABEL_57:
    sub_B170D4();
  }
LABEL_36:
  isAlive = this->fields.data;
  if ( !isAlive )
    goto LABEL_57;
  v64 = 0LL;
  while ( 1 )
  {
    v65 = *((_QWORD *)isAlive + 36);
    if ( !v65 )
      goto LABEL_57;
    v66 = *(unsigned int *)(v65 + 24);
    if ( (__int64)v64 >= (int)v66 )
      break;
    if ( v64 >= v66 )
      goto LABEL_58;
    *(_DWORD *)(v65 + 4 * v64 + 32) = -1;
    v67 = v61[6];
    if ( (__int64)v64 < (int)v67 )
    {
      if ( v64 >= v67 )
        goto LABEL_58;
      v68 = *(_QWORD *)&v61[2 * v64 + 8];
      if ( !v68 )
        goto LABEL_57;
      isAlive = (void *)BattleServantData__isAlive(*(BattleServantData_o **)&v61[2 * v64 + 8], 0, 0LL);
      if ( ((unsigned __int8)isAlive & 1) != 0 )
      {
        v69 = this->fields.data;
        if ( !v69 )
          goto LABEL_57;
        p_entryid = v69->fields.p_entryid;
        if ( !p_entryid )
          goto LABEL_57;
        if ( v64 >= p_entryid->max_length )
          goto LABEL_58;
        p_entryid->m_Items[v64 + 1] = *(_DWORD *)(v68 + 24);
        *(_BYTE *)(v68 + 444) = 1;
        *(_BYTE *)(v68 + 509) = 1;
      }
    }
    isAlive = this->fields.data;
    ++v64;
    if ( !isAlive )
      goto LABEL_57;
  }
  BattleData__createCommandCard((BattleData_o *)isAlive, 0LL);
  v71 = this->fields.data;
  if ( !v71 )
    goto LABEL_57;
  BattleData__shuffleCommand(v71, 0LL);
  logic = this->fields.logic;
  if ( !logic )
    goto LABEL_57;
  BattleLogic__drawCommand(logic, 0LL);
  if ( !v18 )
    goto LABEL_57;
  v18->fields.redrawCommandCard = 1;
  v77 = (BattleLogicTask_o *)sub_B170CC(BattleLogicTask_TypeInfo, v73, v74, v75, v76);
  BattleLogicTask___ctor(v77, 0LL);
  if ( !v77 )
    goto LABEL_57;
  BattleLogicTask__setCheckEntryFunction(v77, 0LL);
  v78 = this->fields.logic;
  if ( !v78 )
    goto LABEL_57;
  BattleLogic__AddBattleLogicTask(v78, v77, 0LL);
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
  BattleData_o *data; // x0
  BattleServantData_o *ServantData; // x0
  BattleServantData_o *v17; // x25
  BattleServantData_o *v18; // x24
  __int64 v19; // x1
  __int64 v20; // x2
  __int64 v21; // x3
  __int64 v22; // x4
  __int64 v23; // x26
  int32_t AccumulationDamage; // w0
  __int64 v25; // x8
  BattleData_o *v26; // x0
  double v27; // d0
  int32_t v28; // w28
  __int64 v29; // x2
  int v30; // w19
  int32_t v31; // w8
  System_Int32_array **v33; // x0
  System_String_array **v34; // x2
  System_String_array **v35; // x3
  System_Boolean_array **v36; // x4
  System_Int32_array **v37; // x5
  System_Int32_array *v38; // x6
  System_Int32_array *v39; // x7
  __int64 v40; // x2
  System_Int32_array **v41; // x0
  System_String_array **v42; // x2
  System_String_array **v43; // x3
  System_Boolean_array **v44; // x4
  System_Int32_array **v45; // x5
  System_Int32_array *v46; // x6
  System_Int32_array *v47; // x7
  __int64 v48; // x2
  __int64 v49; // x0
  System_String_array **v50; // x2
  System_String_array **v51; // x3
  System_Boolean_array **v52; // x4
  System_Int32_array **v53; // x5
  System_Int32_array *v54; // x6
  System_Int32_array *v55; // x7
  __int64 v56; // x2
  System_Int32_array **v57; // x0
  System_String_array **v58; // x2
  System_String_array **v59; // x3
  System_Boolean_array **v60; // x4
  System_Int32_array **v61; // x5
  System_Int32_array *v62; // x6
  System_Int32_array *v63; // x7
  __int64 v64; // x2
  System_Int32_array **v65; // x0
  System_String_array **v66; // x2
  System_String_array **v67; // x3
  System_Boolean_array **v68; // x4
  System_Int32_array **v69; // x5
  System_Int32_array *v70; // x6
  System_Int32_array *v71; // x7
  __int64 v72; // x2
  System_Int32_array **v73; // x0
  System_String_array **v74; // x2
  System_String_array **v75; // x3
  System_Boolean_array **v76; // x4
  System_Int32_array **v77; // x5
  System_Int32_array *v78; // x6
  System_Int32_array *v79; // x7
  struct BattleData_o *v80; // x8
  struct BattleData_o *v81; // x0
  int32_t uniqueId; // w19
  int32_t wavecount; // w21
  bool IsOpponentPTUniqueID; // w0
  int32_t bId; // [xsp+Ch] [xbp-54h]

  if ( (byte_40FCDF0 & 1) == 0 )
  {
    sub_B16FFC(&BattleActionData_TypeInfo, *(_QWORD *)&playerId);
    sub_B16FFC(&BattleActionData_DamageData_TypeInfo, v11);
    sub_B16FFC(&int___TypeInfo, v12);
    sub_B16FFC(&BattleBuffData_ShowBuffData___TypeInfo, v13);
    byte_40FCDF0 = 1;
  }
  v14 = (BattleActionData_o *)sub_B170CC(
                                BattleActionData_TypeInfo,
                                *(_QWORD *)&playerId,
                                *(_QWORD *)&targetId,
                                baseVals,
                                *(_QWORD *)&funcIndex);
  BattleActionData___ctor(v14, 0LL);
  data = this->fields.data;
  if ( !data )
    goto LABEL_27;
  bId = playerId;
  ServantData = BattleData__getServantData(data, playerId, 0LL);
  if ( !this->fields.data )
    goto LABEL_27;
  v17 = ServantData;
  v18 = BattleData__getServantData(this->fields.data, targetId, 0LL);
  v23 = sub_B170CC(BattleActionData_DamageData_TypeInfo, v19, v20, v21, v22);
  BattleActionData_DamageData___ctor((BattleActionData_DamageData_o *)v23, 0LL);
  if ( !v17 )
    goto LABEL_27;
  AccumulationDamage = BattleServantData__getAccumulationDamage(v17, 0LL);
  if ( !baseVals )
    goto LABEL_27;
  v25 = DataVals__GetValue(baseVals, 0LL) * (__int64)AccumulationDamage;
  v26 = this->fields.data;
  v27 = (double)v25 / 1000.0;
  if ( v27 == INFINITY )
    v27 = -v27;
  if ( !v26 )
    goto LABEL_27;
  v28 = (int)v27;
  if ( !BattleData__IsDeadOkTurn(v26, targetId, 0LL) )
  {
    if ( !v18 )
      goto LABEL_27;
    v30 = ((__int64 (__fastcall *)(BattleServantData_o *, Il2CppMethodPointer))v18->klass->vtable._9_get_hp.method)(
            v18,
            v18->klass->vtable._10_set_hp.methodPtr);
    v31 = v30
        - ((__int64 (__fastcall *)(BattleServantData_o *, Il2CppMethodPointer))v18->klass->vtable._11_get_reducedhp.method)(
            v18,
            v18->klass->vtable._12_set_reducedhp.methodPtr);
    if ( v31 < v28 && v31 > 0 )
      v28 = v31 - 1;
  }
  if ( !v23 )
    goto LABEL_27;
  *(_DWORD *)(v23 + 28) = targetId;
  *(_DWORD *)(v23 + 16) = funcIndex;
  *(_WORD *)(v23 + 32) = 0;
  *(_BYTE *)(v23 + 34) = 0;
  *(_DWORD *)(v23 + 36) = 0;
  *(_BYTE *)(v23 + 40) = 0;
  v33 = (System_Int32_array **)sub_B17014(BattleBuffData_ShowBuffData___TypeInfo, 0LL, v29);
  *(_QWORD *)(v23 + 64) = v33;
  sub_B16F98((BattleServantConfConponent_o *)(v23 + 64), v33, v34, v35, v36, v37, v38, v39);
  v41 = (System_Int32_array **)sub_B17014(BattleBuffData_ShowBuffData___TypeInfo, 0LL, v40);
  *(_QWORD *)(v23 + 72) = v41;
  sub_B16F98((BattleServantConfConponent_o *)(v23 + 72), v41, v42, v43, v44, v45, v46, v47);
  v49 = sub_B17014(int___TypeInfo, 1LL, v48);
  if ( !v49 )
    goto LABEL_27;
  if ( !*(_DWORD *)(v49 + 24) )
  {
    sub_B17100(v49, v49, v50);
    sub_B170A0();
  }
  *(_DWORD *)(v49 + 32) = v28;
  *(_QWORD *)(v23 + 96) = v49;
  sub_B16F98((BattleServantConfConponent_o *)(v23 + 96), (System_Int32_array **)v49, v50, v51, v52, v53, v54, v55);
  v57 = (System_Int32_array **)sub_B17014(int___TypeInfo, 0LL, v56);
  *(_QWORD *)(v23 + 104) = v57;
  sub_B16F98((BattleServantConfConponent_o *)(v23 + 104), v57, v58, v59, v60, v61, v62, v63);
  v65 = (System_Int32_array **)sub_B17014(int___TypeInfo, 0LL, v64);
  *(_QWORD *)(v23 + 112) = v65;
  sub_B16F98((BattleServantConfConponent_o *)(v23 + 112), v65, v66, v67, v68, v69, v70, v71);
  v73 = (System_Int32_array **)sub_B17014(int___TypeInfo, 0LL, v72);
  *(_QWORD *)(v23 + 120) = v73;
  sub_B16F98((BattleServantConfConponent_o *)(v23 + 120), v73, v74, v75, v76, v77, v78, v79);
  if ( !v18 )
    goto LABEL_27;
  BattleServantData__provisionalDamage(v18, v28, 0LL);
  BattleServantData__resultDamage(v18, v28, 0, 0LL);
  if ( !BattleServantData__isLogicResultAlive(v18, 0LL) )
  {
    v80 = this->fields.data;
    if ( !v80 )
      goto LABEL_27;
    v18->fields.deadTurn = v80->fields.typeTurn;
  }
  BattleActionData_DamageData__addAttackSideEffectAction((BattleActionData_DamageData_o *)v23, 80, 0LL);
  if ( !v14
    || (BattleActionData__setDamageData(v14, (BattleActionData_DamageData_o *)v23, baseVals, 0, 0, 0LL),
        (v81 = this->fields.data) == 0LL) )
  {
LABEL_27:
    sub_B170D4();
  }
  uniqueId = v17->fields.uniqueId;
  wavecount = v81->fields.wavecount;
  IsOpponentPTUniqueID = BattleData__IsOpponentPTUniqueID(v81, targetId, bId, 0LL);
  BattleServantData__setActionHistory(v18, uniqueId, 1, wavecount, IsOpponentPTUniqueID, 0LL);
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
  System_Int32_array *AliveFieldEnemyServantIDList; // x0
  __int64 v15; // x1
  __int64 v16; // x2
  __int64 v17; // x3
  __int64 v18; // x4
  struct BattleData_o *v19; // x8
  System_Int32_array *v20; // x23
  System_Collections_Generic_IEnumerable_TSource__o *enemy_datalist; // x21
  BattleLogicFunction___c_c *v22; // x0
  struct BattleLogicFunction___c_StaticFields *static_fields; // x8
  System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *_9__74_0; // x22
  Il2CppObject *v25; // x24
  struct BattleLogicFunction___c_StaticFields *v26; // x0
  System_String_array **v27; // x2
  System_String_array **v28; // x3
  System_Boolean_array **v29; // x4
  System_Int32_array **v30; // x5
  System_Int32_array *v31; // x6
  System_Int32_array *v32; // x7
  __int64 v33; // x1
  __int64 v34; // x2
  __int64 v35; // x3
  __int64 v36; // x4
  BattleActionData_o *v37; // x21
  int32_t Param; // w24
  int32_t v39; // w0
  int32_t v40; // w22
  BattleServantData_o *EnemyServantDataFromNpcId; // x0
  BattleServantData_o *v42; // x24
  BattleServantData_o *EnemySubBackServantData; // x22
  __int64 isDead; // x0
  __int64 v45; // x1
  __int64 v46; // x2
  struct BattleData_o *v47; // x8
  il2cpp_array_size_t v48; // w9
  struct System_Int32_array *e_entryid; // x10
  signed int max_length; // w10
  struct System_Int32_array *v51; // x10
  BattleServantData_o *EnemyServantData; // x0
  BattleData_o *v53; // x0
  BattleData_o *v54; // x0
  BattleActionData_o *result; // x0
  int32_t DeckIndex; // w23
  struct BattleData_o *v57; // x8
  struct System_Int32_array *v58; // x9
  int32_t v59; // w10
  int32_t v60; // w25
  int32_t *p_deckIndex; // x26
  unsigned __int64 v62; // x10
  unsigned __int64 v63; // x11
  struct BattleData_o *v64; // x8
  unsigned __int64 v65; // x9
  struct System_Int32_array *v66; // x10
  unsigned __int64 v67; // x11
  char *v68; // x10

  if ( (byte_40FCDEC & 1) == 0 )
  {
    sub_B16FFC(&BattleActionData_TypeInfo, funcEnt);
    sub_B16FFC(&Method_System_Linq_Enumerable_Count_BattleServantData____66838536, v8);
    sub_B16FFC(&Method_System_Func_BattleServantData__bool___ctor__, v9);
    sub_B16FFC(&System_Func_BattleServantData__bool__TypeInfo, v10);
    sub_B16FFC(&Method_BattleLogicFunction___c__functionReplaceEnemyMember_b__74_0__, v11);
    sub_B16FFC(&BattleLogicFunction___c_TypeInfo, v12);
    byte_40FCDEC = 1;
  }
  data = this->fields.data;
  if ( !data )
    goto LABEL_68;
  AliveFieldEnemyServantIDList = BattleData__getAliveFieldEnemyServantIDList(data, 0, 0LL);
  v19 = this->fields.data;
  if ( !v19 )
    goto LABEL_68;
  v20 = AliveFieldEnemyServantIDList;
  enemy_datalist = (System_Collections_Generic_IEnumerable_TSource__o *)v19->fields.enemy_datalist;
  v22 = BattleLogicFunction___c_TypeInfo;
  if ( (BYTE3(BattleLogicFunction___c_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !BattleLogicFunction___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BattleLogicFunction___c_TypeInfo);
    v22 = BattleLogicFunction___c_TypeInfo;
  }
  static_fields = v22->static_fields;
  _9__74_0 = (System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *)static_fields->__9__74_0;
  if ( !_9__74_0 )
  {
    if ( (BYTE3(v22->vtable._0_Equals.methodPtr) & 4) != 0 && !v22->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v22);
      static_fields = BattleLogicFunction___c_TypeInfo->static_fields;
    }
    v25 = (Il2CppObject *)static_fields->__9;
    _9__74_0 = (System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *)sub_B170CC(
                                                                                    System_Func_BattleServantData__bool__TypeInfo,
                                                                                    v15,
                                                                                    v16,
                                                                                    v17,
                                                                                    v18);
    System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool____ctor(
      _9__74_0,
      v25,
      Method_BattleLogicFunction___c__functionReplaceEnemyMember_b__74_0__,
      (const MethodInfo_2B6AB40 *)Method_System_Func_BattleServantData__bool___ctor__);
    v26 = BattleLogicFunction___c_TypeInfo->static_fields;
    v26->__9__74_0 = (struct System_Func_BattleServantData__bool__o *)_9__74_0;
    sub_B16F98(
      (BattleServantConfConponent_o *)&v26->__9__74_0,
      (System_Int32_array **)_9__74_0,
      v27,
      v28,
      v29,
      v30,
      v31,
      v32);
  }
  if ( System_Linq_Enumerable__Count_WarBoardAIRoute_RouteData_(
         enemy_datalist,
         (System_Func_TSource__bool__o *)_9__74_0,
         (const MethodInfo_18D4A90 *)Method_System_Linq_Enumerable_Count_BattleServantData____66838536) < 4 )
    return 0LL;
  if ( !v20 )
    goto LABEL_68;
  if ( !*(_QWORD *)&v20->max_length )
    return 0LL;
  v37 = (BattleActionData_o *)sub_B170CC(BattleActionData_TypeInfo, v33, v34, v35, v36);
  BattleActionData___ctor(v37, 0LL);
  if ( !baseVals )
    goto LABEL_68;
  Param = DataVals__GetParam(baseVals, 47, 0, 0LL);
  v39 = DataVals__GetParam(baseVals, 48, 0, 0LL);
  if ( !this->fields.data )
    goto LABEL_68;
  v40 = v39;
  EnemyServantDataFromNpcId = BattleData__getEnemyServantDataFromNpcId(this->fields.data, Param, 0LL);
  if ( !this->fields.data )
    goto LABEL_68;
  v42 = EnemyServantDataFromNpcId;
  EnemySubBackServantData = BattleData__getEnemyServantDataFromNpcId(this->fields.data, v40, 0LL);
  if ( !v42 )
  {
    isDead = DataVals__GetParam(baseVals, 49, 0, 0LL);
    v47 = this->fields.data;
    v48 = isDead - 1;
    if ( (int)isDead - 1 < 0 )
    {
      if ( !v47 )
        goto LABEL_68;
      v48 = 0;
    }
    else
    {
      if ( !v47 )
        goto LABEL_68;
      e_entryid = v47->fields.e_entryid;
      if ( !e_entryid )
        goto LABEL_68;
      max_length = e_entryid->max_length;
      if ( (int)v48 >= max_length )
        v48 = max_length - 1;
    }
    v51 = v47->fields.e_entryid;
    if ( !v51 )
      goto LABEL_68;
    if ( v48 >= v51->max_length )
      goto LABEL_69;
    EnemyServantData = BattleData__getEnemyServantData(this->fields.data, v51->m_Items[v48 + 1], 0LL);
    if ( !EnemyServantData )
      goto LABEL_68;
    v42 = EnemyServantData;
    isDead = BattleServantData__isDead(EnemyServantData, 0LL);
    if ( (isDead & 1) != 0 )
    {
      if ( !v20->max_length )
        goto LABEL_69;
      v53 = this->fields.data;
      if ( !v53 )
        goto LABEL_68;
      v42 = BattleData__getEnemyServantData(v53, v20->m_Items[1], 0LL);
    }
  }
  if ( !EnemySubBackServantData )
  {
    v54 = this->fields.data;
    if ( !v54 )
      goto LABEL_68;
    EnemySubBackServantData = BattleData__getEnemySubBackServantData(v54, 0LL);
  }
  result = 0LL;
  if ( v42 && EnemySubBackServantData )
  {
    if ( !v42->fields.isEntry || EnemySubBackServantData->fields.isEntry )
      return 0LL;
    DeckIndex = BattleServantData__getDeckIndex(v42, 0LL);
    isDead = BattleServantData__getDeckIndex(EnemySubBackServantData, 0LL);
    v57 = this->fields.data;
    if ( v57 )
    {
      v58 = v57->fields.e_entryid;
      if ( v58 )
      {
        v59 = v58->max_length;
        v60 = isDead;
        if ( DeckIndex >= v59 )
          goto LABEL_49;
        if ( DeckIndex < (unsigned int)v59 )
        {
          if ( v58->m_Items[DeckIndex + 1] == v42->fields.uniqueId )
          {
            p_deckIndex = &v42->fields.deckIndex;
            goto LABEL_57;
          }
LABEL_49:
          v62 = 0LL;
          p_deckIndex = &v42->fields.deckIndex;
          while ( 1 )
          {
            v63 = v58->max_length;
            if ( (__int64)v62 >= (int)v63 )
              break;
            if ( v62 >= v63 )
              goto LABEL_69;
            if ( v58->m_Items[v62 + 1] != v42->fields.uniqueId || (*p_deckIndex = v62, (v57 = this->fields.data) != 0LL) )
            {
              v58 = v57->fields.e_entryid;
              ++v62;
              if ( v58 )
                continue;
            }
            goto LABEL_68;
          }
          isDead = BattleServantData__getDeckIndex(v42, 0LL);
          DeckIndex = isDead;
LABEL_57:
          *p_deckIndex = v60;
          EnemySubBackServantData->fields.deckIndex = DeckIndex;
          v64 = this->fields.data;
          if ( v64 )
          {
            v65 = 0LL;
            while ( 1 )
            {
              v66 = v64->fields.e_entryid;
              if ( !v66 )
                goto LABEL_68;
              v67 = v66->max_length;
              if ( (__int64)v65 >= (int)v67 )
                break;
              if ( v65 >= v67 )
                goto LABEL_69;
              v68 = (char *)v66 + 4 * v65;
              if ( *((_DWORD *)v68 + 8) == v42->fields.uniqueId )
              {
                *((_DWORD *)v68 + 8) = EnemySubBackServantData->fields.uniqueId;
                v64 = this->fields.data;
              }
              ++v65;
              if ( !v64 )
                goto LABEL_68;
            }
            if ( v37 )
            {
              BattleActionData__setReplaceMember(
                v37,
                DeckIndex,
                EnemySubBackServantData->fields.uniqueId,
                v42->fields.uniqueId,
                funcIndex,
                0LL);
              return v37;
            }
          }
          goto LABEL_68;
        }
LABEL_69:
        sub_B17100(isDead, v45, v46);
        sub_B170A0();
      }
    }
LABEL_68:
    sub_B170D4();
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
  BattleServantData_o *ServantData; // x0
  BattleServantData_o *v14; // x22
  BattleServantData_o *v15; // x0
  BattleServantData_o *v16; // x23
  int32_t DeckIndex; // w0
  int32_t v18; // w24
  __int64 v19; // x0
  __int64 v20; // x1
  __int64 v21; // x2
  struct BattleData_o *v22; // x8
  struct System_Int32_array *p_entryid; // x9
  int32_t max_length; // w10
  int32_t v25; // w25
  int32_t *p_deckIndex; // x26
  unsigned __int64 v27; // x10
  unsigned __int64 v28; // x11
  struct BattleData_o *v29; // x8
  unsigned __int64 v30; // x9
  struct System_Int32_array *v31; // x10
  unsigned __int64 v32; // x11
  char *v33; // x10
  BattleData_o *v34; // x0
  BattleData_o *v35; // x0

  if ( (byte_40FCDEB & 1) == 0 )
  {
    sub_B16FFC(&BattleActionData_TypeInfo, *(_QWORD *)&targetId);
    byte_40FCDEB = 1;
  }
  v11 = (BattleActionData_o *)sub_B170CC(
                                BattleActionData_TypeInfo,
                                *(_QWORD *)&targetId,
                                *(_QWORD *)&subTargetId,
                                funcEnt,
                                baeVals);
  BattleActionData___ctor(v11, 0LL);
  data = this->fields.data;
  if ( !data )
    goto LABEL_34;
  ServantData = BattleData__getServantData(data, targetId, 0LL);
  if ( !this->fields.data )
    goto LABEL_34;
  v14 = ServantData;
  v15 = BattleData__getServantData(this->fields.data, subTargetId, 0LL);
  if ( !v14 )
    goto LABEL_34;
  v16 = v15;
  DeckIndex = BattleServantData__getDeckIndex(v14, 0LL);
  if ( !v16 )
    goto LABEL_34;
  v18 = DeckIndex;
  v19 = BattleServantData__getDeckIndex(v16, 0LL);
  v22 = this->fields.data;
  if ( !v22 )
    goto LABEL_34;
  p_entryid = v22->fields.p_entryid;
  if ( !p_entryid )
    goto LABEL_34;
  max_length = p_entryid->max_length;
  v25 = v19;
  if ( v18 >= max_length )
    goto LABEL_13;
  if ( v18 >= (unsigned int)max_length )
  {
LABEL_35:
    sub_B17100(v19, v20, v21);
    sub_B170A0();
  }
  if ( p_entryid->m_Items[v18 + 1] == v14->fields.uniqueId )
  {
    p_deckIndex = &v14->fields.deckIndex;
  }
  else
  {
LABEL_13:
    v27 = 0LL;
    p_deckIndex = &v14->fields.deckIndex;
    while ( 1 )
    {
      v28 = p_entryid->max_length;
      if ( (__int64)v27 >= (int)v28 )
        break;
      if ( v27 >= v28 )
        goto LABEL_35;
      if ( p_entryid->m_Items[v27 + 1] != v14->fields.uniqueId || (*p_deckIndex = v27, (v22 = this->fields.data) != 0LL) )
      {
        p_entryid = v22->fields.p_entryid;
        ++v27;
        if ( p_entryid )
          continue;
      }
      goto LABEL_34;
    }
    v19 = BattleServantData__getDeckIndex(v14, 0LL);
    v18 = v19;
  }
  *p_deckIndex = v25;
  v16->fields.deckIndex = v18;
  v29 = this->fields.data;
  if ( !v29 )
    goto LABEL_34;
  v30 = 0LL;
  while ( 1 )
  {
    v31 = v29->fields.p_entryid;
    if ( !v31 )
      goto LABEL_34;
    v32 = v31->max_length;
    if ( (__int64)v30 >= (int)v32 )
      break;
    if ( v30 >= v32 )
      goto LABEL_35;
    v33 = (char *)v31 + 4 * v30;
    if ( *((_DWORD *)v33 + 8) == v14->fields.uniqueId )
    {
      *((_DWORD *)v33 + 8) = v16->fields.uniqueId;
      v29 = this->fields.data;
    }
    ++v30;
    if ( !v29 )
      goto LABEL_34;
  }
  if ( !v11
    || (BattleActionData__setReplaceMember(v11, v18, v16->fields.uniqueId, v14->fields.uniqueId, funcIndex, 0LL),
        v11->fields.redrawCommandCard = 1,
        (v34 = this->fields.data) == 0LL)
    || (BattleData__SubBuffFromPT_18778888(v34, v16, 0LL), (v35 = this->fields.data) == 0LL) )
  {
LABEL_34:
    sub_B170D4();
  }
  BattleData__SubBuffExitSvt(v35, v14, 0LL);
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
  BattleData_o *v9; // x0
  BattleLogic_o *logic; // x0
  BattleLogic_o *v11; // x0

  if ( (byte_40FCDEA & 1) == 0 )
  {
    sub_B16FFC(&BattleActionData_TypeInfo, *(_QWORD *)&targetId);
    byte_40FCDEA = 1;
  }
  v7 = (BattleActionData_o *)sub_B170CC(
                               BattleActionData_TypeInfo,
                               *(_QWORD *)&targetId,
                               funcEnt,
                               baseVals,
                               *(_QWORD *)&funcIndex);
  BattleActionData___ctor(v7, 0LL);
  data = this->fields.data;
  if ( !data
    || (BattleData__SubBuffFromPT_18778888(data, 0LL, 0LL), (v9 = this->fields.data) == 0LL)
    || (BattleData__shuffleCommand(v9, 0LL), (logic = this->fields.logic) == 0LL)
    || (BattleLogic__drawCommand(logic, 0LL), (v11 = this->fields.logic) == 0LL)
    || (BattleLogic__setDrawCard(v11, 0LL), !v7) )
  {
    sub_B170D4();
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
  BattleServantData_o *ServantData; // x0
  BattleServantData_o *v17; // x22
  const MethodInfo *v18; // x7
  int32_t maxhp; // w24
  int32_t Value; // w0
  int32_t v22; // w1
  __int64 v23; // x1
  __int64 v24; // x2
  __int64 v25; // x3
  __int64 v26; // x4
  struct BattleData_o *v27; // x8
  __int64 v28; // x21
  System_String_array **v29; // x2
  System_String_array **v30; // x3
  System_Boolean_array **v31; // x4
  System_Int32_array **v32; // x5
  System_Int32_array *v33; // x6
  System_Int32_array *v34; // x7
  unsigned int uniqueId; // w8
  System_Int32_array **popupText; // x1
  System_Int32_array **effectList; // x1
  System_String_array **v38; // x2
  System_String_array **v39; // x3
  System_Boolean_array **v40; // x4
  System_Int32_array **v41; // x5
  System_Int32_array *v42; // x6
  System_Int32_array *v43; // x7

  if ( (byte_40FCDF6 & 1) == 0 )
  {
    sub_B16FFC(&BattleActionData_TypeInfo, *(_QWORD *)&targetId);
    sub_B16FFC(&BattleActionData_BuffData_TypeInfo, v13);
    byte_40FCDF6 = 1;
  }
  v14 = (BattleActionData_o *)sub_B170CC(
                                BattleActionData_TypeInfo,
                                *(_QWORD *)&targetId,
                                *(_QWORD *)&funcIdx,
                                funcEnt,
                                dataVals);
  BattleActionData___ctor(v14, 0LL);
  data = this->fields.data;
  if ( !data )
    goto LABEL_22;
  ServantData = BattleData__getServantData(data, targetId, 0LL);
  if ( !ServantData )
    goto LABEL_22;
  v17 = ServantData;
  if ( ((__int64 (__fastcall *)(BattleServantData_o *, Il2CppMethodPointer))ServantData->klass->vtable._9_get_hp.method)(
         ServantData,
         ServantData->klass->vtable._10_set_hp.methodPtr) >= 1 )
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
  if ( BattleServantData__isDeadEscape(v17, 0LL) )
  {
    v27 = this->fields.data;
    if ( !v27 )
      goto LABEL_22;
    if ( v27->fields.endbattleFlg )
      v17->fields.isSystemDead = 1;
  }
  v28 = sub_B170CC(BattleActionData_BuffData_TypeInfo, v23, v24, v25, v26);
  BattleActionData_BuffData___ctor((BattleActionData_BuffData_o *)v28, 0LL);
  if ( !v28 )
    goto LABEL_22;
  uniqueId = v17->fields.uniqueId;
  *(_DWORD *)(v28 + 16) = 0;
  *(_QWORD *)(v28 + 40) = uniqueId;
  if ( !funcEnt )
    goto LABEL_22;
  popupText = (System_Int32_array **)funcEnt->fields.popupText;
  *(_QWORD *)(v28 + 56) = popupText;
  sub_B16F98((BattleServantConfConponent_o *)(v28 + 56), popupText, v29, v30, v31, v32, v33, v34);
  *(_DWORD *)(v28 + 68) = funcEnt->fields.popupTextColor;
  *(_DWORD *)(v28 + 64) = funcEnt->fields.popupIconId;
  effectList = (System_Int32_array **)funcEnt->fields.effectList;
  *(_QWORD *)(v28 + 72) = effectList;
  sub_B16F98((BattleServantConfConponent_o *)(v28 + 72), effectList, v38, v39, v40, v41, v42, v43);
  *(_DWORD *)(v28 + 28) = 2;
  if ( !v14 )
LABEL_22:
    sub_B170D4();
  BattleActionData__setBuffData(v14, (BattleActionData_BuffData_o *)v28, 0LL, 0LL);
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
  DataManager_o *v18; // x0
  WarQuestSelectionMaster_o *MasterData_WarQuestSelectionMaster; // x0
  SkillLvMaster_o *v20; // x25
  struct BattleSkillInfoData_o *skillInfo; // x0
  int32_t v22; // w0
  struct BattleSkillInfoData_o *v23; // x8
  SkillLvEntity_o *Entity; // x0
  SkillLvEntity_o *v25; // x26
  BattleActionData_o *v26; // x25
  BattleData_o *data; // x0
  UnityEngine_Object_o *PartsActor; // x27
  BattleServantData_o *monitor; // x0
  __int64 v30; // x1
  __int64 v31; // x2
  __int64 v32; // x3
  __int64 v33; // x4
  int32_t targetId; // w1
  const MethodInfo *v35; // x6
  BattleActionData_o *RevivalHealData; // x0
  BattleData_o *v37; // x0
  UnityEngine_Object_o *v38; // x26
  BattleServantData_o *v39; // x0
  __int64 v40; // x1
  __int64 v41; // x2
  __int64 v42; // x3
  __int64 v43; // x4
  BattleActionData_o *v44; // x0
  BattleActionData_o *v45; // x1
  BattleActionData_o *v46; // x27
  int32_t v47; // w1
  const MethodInfo *v48; // x6
  BattleActionData_o *v49; // x0

  if ( (byte_40FCE02 & 1) == 0 )
  {
    sub_B16FFC(&BattleActionData_TypeInfo, actionData);
    sub_B16FFC(&Method_DataManager_GetMasterData_SkillLvMaster___, v13);
    sub_B16FFC(&UnityEngine_Object_TypeInfo, v14);
    sub_B16FFC(&Method_SingletonMonoBehaviour_DataManager__getInstance__, v15);
    byte_40FCE02 = 1;
  }
  v16 = *((_QWORD *)Method_SingletonMonoBehaviour_DataManager__getInstance__ + 3);
  if ( (*(_BYTE *)(v16 + 306) & 1) == 0 )
    sub_AAFCFC(*((_QWORD *)Method_SingletonMonoBehaviour_DataManager__getInstance__ + 3));
  v17 = **(_QWORD **)(v16 + 192);
  if ( (*(_BYTE *)(v17 + 306) & 1) == 0 )
    sub_AAFCFC(v17);
  v18 = **(DataManager_o ***)(v17 + 184);
  if ( !v18 )
    goto LABEL_42;
  MasterData_WarQuestSelectionMaster = DataManager__GetMasterData_WarQuestSelectionMaster_(
                                         v18,
                                         (const MethodInfo_18C3284 *)Method_DataManager_GetMasterData_SkillLvMaster___);
  if ( !actionData )
    goto LABEL_42;
  v20 = (SkillLvMaster_o *)MasterData_WarQuestSelectionMaster;
  skillInfo = actionData->fields.skillInfo;
  if ( !skillInfo )
    goto LABEL_42;
  v22 = ((__int64 (__fastcall *)(struct BattleSkillInfoData_o *, Il2CppMethodPointer))skillInfo->klass->vtable._5_get_skillId.method)(
          skillInfo,
          skillInfo->klass->vtable._6_get_IndividualityArray.methodPtr);
  v23 = actionData->fields.skillInfo;
  if ( !v23 )
    goto LABEL_42;
  if ( !v20 )
    goto LABEL_42;
  Entity = SkillLvMaster__GetEntity(v20, v22, v23->fields.skilllv, 0LL);
  if ( !Entity )
    goto LABEL_42;
  v25 = Entity;
  v26 = 0LL;
  if ( SkillLvEntity__IsRevivalUp(Entity, 0LL) )
  {
    data = this->fields.data;
    if ( !data )
      goto LABEL_42;
    PartsActor = (UnityEngine_Object_o *)BattleData__GetPartsActor(data, 0, 0LL);
    if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    }
    v26 = 0LL;
    if ( UnityEngine_Object__op_Inequality(PartsActor, 0LL, 0LL) )
    {
      if ( !PartsActor )
        goto LABEL_42;
      monitor = (BattleServantData_o *)PartsActor[17].monitor;
      if ( monitor )
      {
        v26 = 0LL;
        if ( !BattleServantData__isAlive(monitor, 0, 0LL) )
        {
          v26 = (BattleActionData_o *)sub_B170CC(BattleActionData_TypeInfo, v30, v31, v32, v33);
          BattleActionData___ctor(v26, 0LL);
          if ( !v26 )
            goto LABEL_42;
          v26->fields.actorId = actionData->fields.actorId;
          v26->fields.targetId = PartsActor[17].fields.m_CachedPtr;
          BattleActionData__setStateActors(v26, 0LL);
          targetId = v26->fields.targetId;
          v26->fields.isRevival = 1;
          v26->fields.motionId = 2201;
          RevivalHealData = BattleLogicFunction__createRevivalHealData(
                              this,
                              targetId,
                              funcEnt,
                              baseVals,
                              funcIndex,
                              isCommandSideEffect,
                              v35);
          BattleActionData__addAction(v26, RevivalHealData, 0LL);
        }
      }
      else
      {
        v26 = 0LL;
      }
    }
  }
  if ( !SkillLvEntity__IsRevivalUnder(v25, 0LL) )
    goto LABEL_34;
  v37 = this->fields.data;
  if ( !v37 )
LABEL_42:
    sub_B170D4();
  v38 = (UnityEngine_Object_o *)BattleData__GetPartsActor(v37, 2, 0LL);
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( UnityEngine_Object__op_Inequality(v38, 0LL, 0LL) )
  {
    if ( v38 )
    {
      v39 = (BattleServantData_o *)v38[17].monitor;
      if ( !v39 || BattleServantData__isAlive(v39, 0, 0LL) )
        goto LABEL_34;
      v46 = (BattleActionData_o *)sub_B170CC(BattleActionData_TypeInfo, v40, v41, v42, v43);
      BattleActionData___ctor(v46, 0LL);
      if ( v46 )
      {
        v46->fields.actorId = actionData->fields.actorId;
        v46->fields.targetId = v38[17].fields.m_CachedPtr;
        BattleActionData__setStateActors(v46, 0LL);
        v47 = v46->fields.targetId;
        v46->fields.isRevival = 1;
        v46->fields.motionId = 2202;
        v49 = BattleLogicFunction__createRevivalHealData(
                this,
                v47,
                funcEnt,
                baseVals,
                funcIndex,
                isCommandSideEffect,
                v48);
        BattleActionData__addAction(v46, v49, 0LL);
        if ( !v26 )
        {
          v44 = actionData;
          v45 = v46;
          goto LABEL_36;
        }
        BattleActionData__AddAfterActionData(v26, v46, 0, 0LL);
LABEL_35:
        v44 = actionData;
        v45 = v26;
LABEL_36:
        BattleActionData__AddAfterActionData(v44, v45, 0, 0LL);
        return;
      }
    }
    goto LABEL_42;
  }
LABEL_34:
  if ( v26 )
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
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x22
  System_Int32_array **v12; // x1
  System_String_array **v13; // x2
  System_String_array **v14; // x3
  System_Boolean_array **v15; // x4
  System_Int32_array **v16; // x5
  System_Int32_array *v17; // x6
  System_Int32_array *v18; // x7
  BattleData_o *data; // x24
  __int64 v20; // x1
  __int64 v21; // x2
  __int64 v22; // x3
  __int64 v23; // x4
  BattleActionData_SkillShiftServant_o *v24; // x23

  if ( (byte_40FCDFF & 1) == 0 )
  {
    sub_B16FFC(&BattleActionData_TypeInfo, actionData);
    sub_B16FFC(&BattleActionData_SkillShiftServant_TypeInfo, v9);
    sub_B16FFC(&StringLiteral_8777, v10);
    byte_40FCDFF = 1;
  }
  v11 = sub_B170CC(BattleActionData_TypeInfo, actionData, targetData, *(_QWORD *)&npcId, method);
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
  v12 = (System_Int32_array **)StringLiteral_8777;
  *(_QWORD *)(v11 + 64) = StringLiteral_8777;
  sub_B16F98((BattleServantConfConponent_o *)(v11 + 64), v12, v13, v14, v15, v16, v17, v18);
  data = this->fields.data;
  v24 = (BattleActionData_SkillShiftServant_o *)sub_B170CC(
                                                  BattleActionData_SkillShiftServant_TypeInfo,
                                                  v20,
                                                  v21,
                                                  v22,
                                                  v23);
  BattleActionData_SkillShiftServant___ctor(v24, data, npcId, 0LL);
  if ( !v24 )
LABEL_8:
    sub_B170D4();
  BattleActionData_ShiftServant__setBeforeSvtData((BattleActionData_ShiftServant_o *)v24, targetData, 0LL);
  BattleActionData__setShiftServant((BattleActionData_o *)v11, (BattleActionData_ShiftServant_o *)v24, 0LL);
  BattleActionData__setShiftServant(actionData, (BattleActionData_ShiftServant_o *)v24, 0LL);
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
  __int64 v31; // x3
  __int64 v32; // x4
  BattleData_o *data; // x0
  System_Int32_array **ServantData; // x0
  System_String_array **v35; // x2
  System_String_array **v36; // x3
  System_Boolean_array **v37; // x4
  System_Int32_array **v38; // x5
  System_Int32_array *v39; // x6
  System_Int32_array *v40; // x7
  BattleServantData_o **v41; // x26
  System_Int32_array *AuraIdList; // x0
  il2cpp_array_size_t max_length; // w28
  int32_t MaxHp; // w0
  int32_t v45; // w19
  int32_t NowHp; // w0
  BattleServantData_o *v47; // x19
  System_Int32_array *vals; // x28
  int32_t Value; // w20
  int32_t Value2; // w0
  DataVals_o *v51; // x8
  int32_t v52; // w25
  bool isParam; // w0
  RemovedBuffInfo_o *v54; // x0
  System_String_array **v55; // x2
  System_String_array **v56; // x3
  System_Boolean_array **v57; // x4
  System_Int32_array **v58; // x5
  System_Int32_array *v59; // x6
  System_Int32_array *v60; // x7
  const MethodInfo *v61; // x7
  struct System_Collections_Generic_List_BattleBuffData_BuffData__o *RemovedAllBuffList_k__BackingField; // x22
  System_Int32_array *v63; // x0
  const MethodInfo *v64; // x6
  signed int v65; // w19
  BattleActionData_BuffData_o *FunctionObject; // x0
  __int64 v67; // x1
  __int64 v68; // x2
  __int64 v69; // x3
  __int64 v70; // x4
  BattleActionData_BuffData_o *v71; // x21
  System_Func_WarBoardManager_WarBoardOnboardSkillTarget__WarBoardPieceData__o *v72; // x19
  System_Collections_Generic_IEnumerable_TSource__o *v73; // x0
  System_Int32_array **v74; // x0
  System_String_array **v75; // x2
  System_String_array **v76; // x3
  System_Boolean_array **v77; // x4
  System_Int32_array **v78; // x5
  System_Int32_array *v79; // x6
  System_Int32_array *v80; // x7
  BattleActionData_o *v81; // x27
  Il2CppObject *current; // x19
  BattleData_o *v83; // x0
  __int64 v84; // x1
  __int64 v85; // x2
  __int64 v86; // x3
  __int64 v87; // x4
  BattleActionEffect_SubChangeMaxHpBuff_o *v88; // x19
  WarBoardUiData_SaveData_array *v89; // x0
  WarBoardUiData_SaveData_array *v90; // x20
  int32_t v91; // w0
  System_Int32_array **v92; // x0
  System_String_array **v93; // x2
  System_String_array **v94; // x3
  System_Boolean_array **v95; // x4
  System_Int32_array **v96; // x5
  System_Int32_array *v97; // x6
  System_Int32_array *v98; // x7
  int32_t v100; // [xsp+Ch] [xbp-B4h]
  int32_t v101; // [xsp+10h] [xbp-B0h]
  signed int v102; // [xsp+14h] [xbp-ACh]
  BattleActionData_o *v103; // [xsp+18h] [xbp-A8h]
  DataVals_o *dataVals; // [xsp+28h] [xbp-98h]
  unsigned int targetIda; // [xsp+34h] [xbp-8Ch]
  System_Collections_Generic_List_Enumerator_T__o v108; // [xsp+38h] [xbp-88h] BYREF
  System_Collections_Generic_List_Enumerator_T__o v109; // [xsp+50h] [xbp-70h] BYREF

  if ( (byte_40FCDDE & 1) == 0 )
  {
    sub_B16FFC(&BattleActionData_TypeInfo, *(_QWORD *)&targetId);
    sub_B16FFC(&Method_System_Linq_Enumerable_Select_BattleBuffData_BuffData__BattleBuffData_BuffData___, v15);
    sub_B16FFC(&Method_System_Linq_Enumerable_ToList_BattleBuffData_BuffData___, v16);
    sub_B16FFC(&Method_System_Collections_Generic_List_Enumerator_BattleBuffData_BuffData__Dispose__, v17);
    sub_B16FFC(&Method_System_Collections_Generic_List_Enumerator_BattleBuffData_BuffData__MoveNext__, v18);
    sub_B16FFC(&Method_System_Collections_Generic_List_Enumerator_BattleBuffData_BuffData__get_Current__, v19);
    sub_B16FFC(&Method_System_Func_BattleBuffData_BuffData__BattleBuffData_BuffData___ctor__, v20);
    sub_B16FFC(&System_Func_BattleBuffData_BuffData__BattleBuffData_BuffData__TypeInfo, v21);
    sub_B16FFC(&Method_System_Collections_Generic_List_BattleBuffData_BuffData__GetEnumerator__, v22);
    sub_B16FFC(&Method_System_Collections_Generic_List_BattleBuffData_BuffData__ToArray__, v23);
    sub_B16FFC(&Method_System_Collections_Generic_List_BattleBuffData_BuffData__get_Count__, v24);
    sub_B16FFC(&BattleActionEffect_SubChangeMaxHpBuff_TypeInfo, v25);
    sub_B16FFC(&Method_BattleLogicFunction___c__DisplayClass60_0__functionSubState_b__0__, v26);
    sub_B16FFC(&BattleLogicFunction___c__DisplayClass60_0_TypeInfo, v27);
    byte_40FCDDE = 1;
  }
  memset(&v109, 0, sizeof(v109));
  v28 = sub_B170CC(
          BattleLogicFunction___c__DisplayClass60_0_TypeInfo,
          *(_QWORD *)&targetId,
          funcEnt,
          baseVals,
          *(_QWORD *)&index);
  BattleLogicFunction___c__DisplayClass60_0___ctor((BattleLogicFunction___c__DisplayClass60_0_o *)v28, 0LL);
  v103 = (BattleActionData_o *)sub_B170CC(BattleActionData_TypeInfo, v29, v30, v31, v32);
  BattleActionData___ctor(v103, 0LL);
  data = this->fields.data;
  if ( !data )
    goto LABEL_34;
  ServantData = (System_Int32_array **)BattleData__getServantData(data, targetId, 0LL);
  if ( !v28 )
    goto LABEL_34;
  *(_QWORD *)(v28 + 16) = ServantData;
  v41 = (BattleServantData_o **)(v28 + 16);
  sub_B16F98((BattleServantConfConponent_o *)(v28 + 16), ServantData, v35, v36, v37, v38, v39, v40);
  if ( !*(_QWORD *)(v28 + 16) )
    goto LABEL_34;
  AuraIdList = BattleServantData__getAuraIdList(*(BattleServantData_o **)(v28 + 16), 0LL);
  if ( !AuraIdList )
    goto LABEL_34;
  if ( !*v41 )
    goto LABEL_34;
  max_length = AuraIdList->max_length;
  MaxHp = BattleServantData__getMaxHp(*v41, 0LL);
  if ( !*v41 )
    goto LABEL_34;
  v45 = MaxHp;
  NowHp = BattleServantData__getNowHp(*v41, 0LL);
  if ( !funcEnt )
    goto LABEL_34;
  v101 = v45;
  v102 = max_length;
  v100 = NowHp;
  targetIda = targetId;
  if ( !baseVals )
    goto LABEL_34;
  v47 = *v41;
  vals = funcEnt->fields.vals;
  Value = DataVals__GetValue(baseVals, 0LL);
  Value2 = DataVals__GetValue2(baseVals, 0LL);
  v51 = baseVals;
  v52 = Value2;
  dataVals = v51;
  isParam = DataVals__isParam(v51, 89, 0LL);
  if ( !v47 )
    goto LABEL_34;
  v54 = BattleServantData__subBuffFromIndividualites(v47, vals, Value, v52, 1, isParam, 0LL);
  *subBuffInfo = v54;
  sub_B16F98((BattleServantConfConponent_o *)subBuffInfo, (System_Int32_array **)v54, v55, v56, v57, v58, v59, v60);
  if ( !*subBuffInfo )
    goto LABEL_34;
  RemovedAllBuffList_k__BackingField = (*subBuffInfo)->fields._RemovedAllBuffList_k__BackingField;
  if ( !RemovedAllBuffList_k__BackingField )
    goto LABEL_34;
  if ( RemovedAllBuffList_k__BackingField->fields._size < 1 )
    return BattleLogicFunction__getNoEffectObject(this, targetIda, index, dataVals, isCommandSideEffect, 0LL, 0LL, v61);
  if ( !*v41 )
    goto LABEL_34;
  v63 = BattleServantData__getAuraIdList(*v41, 0LL);
  if ( !v63 )
    goto LABEL_34;
  if ( !*v41 )
    goto LABEL_34;
  v65 = v63->max_length;
  FunctionObject = BattleLogicFunction__getFunctionObject(
                     (BattleLogicFunction_o *)v63,
                     funcEnt,
                     (*v41)->fields.uniqueId,
                     index,
                     isCommandSideEffect,
                     0LL,
                     v64);
  if ( !FunctionObject )
    goto LABEL_34;
  v71 = FunctionObject;
  FunctionObject->fields.isShowBuffAuraUpdate = v102 > v65;
  v72 = (System_Func_WarBoardManager_WarBoardOnboardSkillTarget__WarBoardPieceData__o *)sub_B170CC(
                                                                                          System_Func_BattleBuffData_BuffData__BattleBuffData_BuffData__TypeInfo,
                                                                                          v67,
                                                                                          v68,
                                                                                          v69,
                                                                                          v70);
  System_Func_WarBoardManager_WarBoardOnboardSkillTarget__WarBoardPieceData____ctor(
    v72,
    (Il2CppObject *)v28,
    Method_BattleLogicFunction___c__DisplayClass60_0__functionSubState_b__0__,
    (const MethodInfo_2B6C28C *)Method_System_Func_BattleBuffData_BuffData__BattleBuffData_BuffData___ctor__);
  v73 = (System_Collections_Generic_IEnumerable_TSource__o *)System_Linq_Enumerable__Select_WarBoardManager_WarBoardOnboardSkillTarget__WarBoardPieceData_(
                                                               (System_Collections_Generic_IEnumerable_TSource__o *)RemovedAllBuffList_k__BackingField,
                                                               (System_Func_TSource__TResult__o *)v72,
                                                               (const MethodInfo_19C0B1C *)Method_System_Linq_Enumerable_Select_BattleBuffData_BuffData__BattleBuffData_BuffData___);
  v74 = (System_Int32_array **)System_Linq_Enumerable__ToList_WarBoardManager_WarBoardOnboardSkillTarget_(
                                 v73,
                                 (const MethodInfo_19C7AA0 *)Method_System_Linq_Enumerable_ToList_BattleBuffData_BuffData___);
  v71->fields.removeBuffList = (struct System_Collections_Generic_List_BattleBuffData_BuffData__o *)v74;
  sub_B16F98((BattleServantConfConponent_o *)&v71->fields.removeBuffList, v74, v75, v76, v77, v78, v79, v80);
  v81 = v103;
  if ( !v103 )
    goto LABEL_34;
  BattleActionData__setBuffData(v103, v71, dataVals, 0LL);
  System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo___GetEnumerator(
    &v108,
    (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)RemovedAllBuffList_k__BackingField,
    (const MethodInfo_2F26B54 *)Method_System_Collections_Generic_List_BattleBuffData_BuffData__GetEnumerator__);
  v109 = v108;
  while ( System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___MoveNext(
            &v109,
            (const MethodInfo_2074054 *)Method_System_Collections_Generic_List_Enumerator_BattleBuffData_BuffData__MoveNext__) )
  {
    current = v109.fields.current;
    if ( !v109.fields.current )
      sub_B170D4();
    v83 = this->fields.data;
    if ( !v83 )
      sub_B170D4();
    BattleData__RemoveDoNotSelectCommandCardBuff(v83, (int32_t)v109.fields.current[1].klass, *v41, 0LL);
    if ( BattleBuffData__CheckInvalidSacrificeIndiv((BattleBuffData_BuffData_o *)current, 0LL) )
    {
      if ( !args )
        sub_B170D4();
      args->fields.updateField = 1;
    }
  }
  System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___Dispose(
    &v109,
    (const MethodInfo_2074050 *)Method_System_Collections_Generic_List_Enumerator_BattleBuffData_BuffData__Dispose__);
  if ( !*v41 )
    goto LABEL_34;
  if ( v101 != BattleServantData__getMaxHp(*v41, 0LL) )
  {
    BattleActionData__addReflectLogicResultServantId(v103, targetIda, 0LL);
    v88 = (BattleActionEffect_SubChangeMaxHpBuff_o *)sub_B170CC(
                                                       BattleActionEffect_SubChangeMaxHpBuff_TypeInfo,
                                                       v84,
                                                       v85,
                                                       v86,
                                                       v87);
    BattleActionEffect_SubChangeMaxHpBuff___ctor(v88, 0LL);
    v89 = System_Collections_Generic_List_WarBoardUiData_SaveData___ToArray(
            (System_Collections_Generic_List_WarBoardUiData_SaveData__o *)RemovedAllBuffList_k__BackingField,
            (const MethodInfo_2F27E24 *)Method_System_Collections_Generic_List_BattleBuffData_BuffData__ToArray__);
    if ( *v41 )
    {
      v90 = v89;
      v91 = BattleServantData__getNowHp(*v41, 0LL);
      if ( v88 )
      {
        v92 = (System_Int32_array **)((__int64 (__fastcall *)(BattleActionEffect_SubChangeMaxHpBuff_o *, WarBoardUiData_SaveData_array *, _QWORD, _QWORD, Il2CppMethodPointer))v88->klass->vtable._7_InitBuff.method)(
                                       v88,
                                       v90,
                                       targetIda,
                                       (unsigned int)(v91 - v100),
                                       v88->klass->vtable._8_PartialPreActionProc.methodPtr);
        v71->fields.EffectProc = (struct BattleActionEffect_Base_o *)v92;
        sub_B16F98((BattleServantConfConponent_o *)&v71->fields.EffectProc, v92, v93, v94, v95, v96, v97, v98);
        return v81;
      }
    }
LABEL_34:
    sub_B170D4();
  }
  return v81;
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
  BattleServantData_o *ServantData; // x0
  BattleServantData_o *v13; // x24
  int32_t Param; // w23
  int32_t v15; // w25

  if ( (byte_40FCDEE & 1) == 0 )
  {
    sub_B16FFC(&BattleActionData_TypeInfo, *(_QWORD *)&targetId);
    byte_40FCDEE = 1;
  }
  v10 = (BattleActionData_o *)sub_B170CC(
                                BattleActionData_TypeInfo,
                                *(_QWORD *)&targetId,
                                funcEnt,
                                baeVals,
                                *(_QWORD *)&funcIndex);
  BattleActionData___ctor(v10, 0LL);
  data = this->fields.data;
  if ( !data )
    goto LABEL_11;
  ServantData = BattleData__getServantData(data, targetId, 0LL);
  if ( !baeVals )
    goto LABEL_11;
  v13 = ServantData;
  Param = DataVals__GetParam(baeVals, 6, 0, 0LL);
  v15 = DataVals__GetParam(baeVals, 76, 0, 0LL);
  if ( DataVals__IsCancelTransform(baeVals, 0LL) )
  {
    if ( !v13 )
      goto LABEL_11;
    if ( BattleServantData__get_isTransformed(v13, 0LL) )
      Param = -1;
  }
  if ( !v10 )
LABEL_11:
    sub_B170D4();
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
  BattleActionData_o *v26; // x24
  BattleData_o *data; // x0
  BattleServantData_o *ServantData; // x0
  BattleServantData_o *v29; // x19
  int32_t v30; // w20
  BattleServantData_o *v31; // x24
  __int64 v32; // x1
  __int64 v33; // x2
  __int64 v34; // x3
  __int64 v35; // x4
  __int64 v36; // x25
  int32_t Value; // w26
  int32_t Param; // w0
  int Random; // w26
  BattleData_o *v40; // x0
  int v41; // w19
  int v42; // w8
  FunctionEntity_o *funcEnt; // x0
  System_Int32_array *EffectList; // x0
  System_String_array **v46; // x2
  System_String_array **v47; // x3
  System_Boolean_array **v48; // x4
  System_Int32_array **v49; // x5
  System_Int32_array *v50; // x6
  System_Int32_array *v51; // x7
  int32_t v52; // w8
  System_Int32_array **v53; // x0
  System_String_array **v54; // x2
  System_String_array **v55; // x3
  System_Boolean_array **v56; // x4
  System_Int32_array **v57; // x5
  System_Int32_array *v58; // x6
  System_Int32_array *v59; // x7
  __int64 v60; // x2
  System_Int32_array **v61; // x0
  System_String_array **v62; // x2
  System_String_array **v63; // x3
  System_Boolean_array **v64; // x4
  System_Int32_array **v65; // x5
  System_Int32_array *v66; // x6
  System_Int32_array *v67; // x7
  __int64 v68; // x1
  __int64 v69; // x2
  __int64 v70; // x3
  __int64 v71; // x4
  System_Collections_Generic_List_int__o *v72; // x27
  System_Collections_Generic_IEnumerable_int__o *FixDamageRates; // x19
  __int64 v74; // x0
  __int64 v75; // x1
  __int64 v76; // x2
  void *monitor; // x8
  unsigned __int64 v78; // x28
  __int64 v79; // x23
  int size; // w8
  int32_t v81; // w19
  int32_t v82; // w20
  int32_t v83; // w28
  int32_t v84; // w0
  System_Int32_array **v85; // x0
  System_String_array **v86; // x2
  System_String_array **v87; // x3
  System_Boolean_array **v88; // x4
  System_Int32_array **v89; // x5
  System_Int32_array *v90; // x6
  System_Int32_array *v91; // x7
  __int64 v92; // x2
  System_Int32_array **v93; // x0
  System_String_array **v94; // x2
  System_String_array **v95; // x3
  System_Boolean_array **v96; // x4
  System_Int32_array **v97; // x5
  System_Int32_array *v98; // x6
  System_Int32_array *v99; // x7
  __int64 v100; // x2
  System_Int32_array **v101; // x0
  System_String_array **v102; // x2
  System_String_array **v103; // x3
  System_Boolean_array **v104; // x4
  System_Int32_array **v105; // x5
  System_Int32_array *v106; // x6
  System_Int32_array *v107; // x7
  __int64 v108; // x2
  System_Int32_array **v109; // x0
  System_String_array **v110; // x2
  System_String_array **v111; // x3
  System_Boolean_array **v112; // x4
  System_Int32_array **v113; // x5
  System_Int32_array *v114; // x6
  System_Int32_array *v115; // x7
  struct BattleData_o *v116; // x8
  struct BattleData_o *v117; // x0
  int32_t wavecount; // w19
  bool IsOpponentPTUniqueID; // w0
  BattleActionData_o *v121; // [xsp+10h] [xbp-80h]
  DataVals_o *v122; // [xsp+18h] [xbp-78h]
  int32_t v123; // [xsp+30h] [xbp-60h]
  bool minimumDamageFlg; // [xsp+34h] [xbp-5Ch] BYREF
  int32_t hitStat[2]; // [xsp+38h] [xbp-58h] BYREF

  if ( (byte_40FCDF5 & 1) == 0 )
  {
    sub_B16FFC(&BattleActionData_TypeInfo, *(_QWORD *)&playerId);
    sub_B16FFC(&BattleActionData_DamageData_TypeInfo, v15);
    sub_B16FFC(&int___TypeInfo, v16);
    sub_B16FFC(&Method_System_Collections_Generic_List_int__Add__, v17);
    sub_B16FFC(&Method_System_Collections_Generic_List_int__ToArray__, v18);
    sub_B16FFC(&Method_System_Collections_Generic_List_int___ctor__, v19);
    sub_B16FFC(&Method_System_Collections_Generic_List_int__get_Count__, v20);
    sub_B16FFC(&Method_System_Collections_Generic_List_int__get_Item__, v21);
    sub_B16FFC(&Method_System_Collections_Generic_List_int__set_Item__, v22);
    sub_B16FFC(&System_Collections_Generic_List_int__TypeInfo, v23);
    sub_B16FFC(&System_Math_TypeInfo, v24);
    sub_B16FFC(&BattleBuffData_ShowBuffData___TypeInfo, v25);
    byte_40FCDF5 = 1;
  }
  *(_QWORD *)hitStat = 0LL;
  minimumDamageFlg = 0;
  v26 = (BattleActionData_o *)sub_B170CC(
                                BattleActionData_TypeInfo,
                                *(_QWORD *)&playerId,
                                *(_QWORD *)&targetId,
                                baseVals,
                                *(_QWORD *)&funcIndex);
  BattleActionData___ctor(v26, 0LL);
  data = this->fields.data;
  if ( !data )
    goto LABEL_47;
  v123 = playerId;
  ServantData = BattleData__getServantData(data, playerId, 0LL);
  if ( !this->fields.data )
    goto LABEL_47;
  v29 = ServantData;
  v30 = funcIndex;
  v121 = v26;
  v31 = BattleData__getServantData(this->fields.data, targetId, 0LL);
  v36 = sub_B170CC(BattleActionData_DamageData_TypeInfo, v32, v33, v34, v35);
  BattleActionData_DamageData___ctor((BattleActionData_DamageData_o *)v36, 0LL);
  if ( !baseVals )
    goto LABEL_47;
  Value = DataVals__GetValue(baseVals, 0LL);
  Param = DataVals__GetParam(baseVals, 4, 0, 0LL);
  Random = BattleRandom__getRandom(Value, Param + 1, 0LL);
  hitStat[1] = 0;
  if ( DataVals__IsActNoDamageBuff(baseVals, 0LL) )
  {
    if ( !v31 )
      goto LABEL_47;
    BattleServantData__CheckNoDamageBuff(
      v31,
      this->fields.data,
      v29,
      0LL,
      (BattleActionData_DamageData_o *)v36,
      mainAction,
      0LL);
    *(float *)hitStat = (float)Random;
    minimumDamageFlg = 1;
    BattleServantData__CheckInvincibleAvoidanceBuff(
      v31,
      this->fields.data,
      v29,
      0LL,
      (BattleActionData_DamageData_o *)v36,
      (float *)hitStat,
      &minimumDamageFlg,
      &hitStat[1],
      mainAction,
      0LL);
    if ( *(float *)hitStat <= 0.0 )
      Random = 0;
  }
  v40 = this->fields.data;
  if ( !v40 )
    goto LABEL_47;
  if ( !BattleData__IsDeadOkTurn(v40, targetId, 0LL) )
  {
    if ( !v31 )
      goto LABEL_47;
    v41 = ((__int64 (__fastcall *)(BattleServantData_o *, Il2CppMethodPointer))v31->klass->vtable._9_get_hp.method)(
            v31,
            v31->klass->vtable._10_set_hp.methodPtr);
    v42 = v41
        - ((__int64 (__fastcall *)(BattleServantData_o *, Il2CppMethodPointer))v31->klass->vtable._11_get_reducedhp.method)(
            v31,
            v31->klass->vtable._12_set_reducedhp.methodPtr);
    if ( v42 < Random && v42 > 0 )
      Random = v42 - 1;
LABEL_23:
    if ( !v36 )
      goto LABEL_47;
    goto LABEL_24;
  }
  if ( !safe )
    goto LABEL_23;
  if ( !v31 )
    goto LABEL_47;
  if ( (int)(((__int64 (__fastcall *)(BattleServantData_o *, Il2CppMethodPointer))v31->klass->vtable._13_get_resultHp.method)(
               v31,
               v31->klass->vtable._14_set_resultHp.methodPtr)
           - Random) > 0 )
    goto LABEL_23;
  Random = ((__int64 (__fastcall *)(BattleServantData_o *, Il2CppMethodPointer))v31->klass->vtable._13_get_resultHp.method)(
             v31,
             v31->klass->vtable._14_set_resultHp.methodPtr)
         - 1;
  if ( !v36 )
    goto LABEL_47;
LABEL_24:
  *(_DWORD *)(v36 + 28) = targetId;
  *(_DWORD *)(v36 + 16) = v30;
  funcEnt = baseVals->fields.funcEnt;
  if ( !funcEnt )
    goto LABEL_47;
  EffectList = FunctionEntity__getEffectList(funcEnt, 0LL);
  if ( !EffectList )
    goto LABEL_47;
  if ( *(_QWORD *)&EffectList->max_length )
  {
    *(_QWORD *)(v36 + 136) = EffectList;
    sub_B16F98(
      (BattleServantConfConponent_o *)(v36 + 136),
      (System_Int32_array **)EffectList,
      v46,
      v47,
      v48,
      v49,
      v50,
      v51);
  }
  *(_WORD *)(v36 + 32) = 0;
  *(_BYTE *)(v36 + 34) = 0;
  v52 = hitStat[1];
  *(_BYTE *)(v36 + 40) = 0;
  *(_DWORD *)(v36 + 36) = v52;
  v53 = (System_Int32_array **)sub_B17014(BattleBuffData_ShowBuffData___TypeInfo, 0LL, v46);
  *(_QWORD *)(v36 + 64) = v53;
  sub_B16F98((BattleServantConfConponent_o *)(v36 + 64), v53, v54, v55, v56, v57, v58, v59);
  v61 = (System_Int32_array **)sub_B17014(BattleBuffData_ShowBuffData___TypeInfo, 0LL, v60);
  *(_QWORD *)(v36 + 72) = v61;
  sub_B16F98((BattleServantConfConponent_o *)(v36 + 72), v61, v62, v63, v64, v65, v66, v67);
  v72 = (System_Collections_Generic_List_int__o *)sub_B170CC(
                                                    System_Collections_Generic_List_int__TypeInfo,
                                                    v68,
                                                    v69,
                                                    v70,
                                                    v71);
  System_Collections_Generic_List_int____ctor(
    v72,
    (const MethodInfo_2F0F794 *)Method_System_Collections_Generic_List_int___ctor__);
  v122 = baseVals;
  FixDamageRates = (System_Collections_Generic_IEnumerable_int__o *)DataVals__GetFixDamageRates(baseVals, 0LL);
  v74 = System_Linq_Enumerable__Sum(FixDamageRates, 0LL);
  if ( !FixDamageRates )
    goto LABEL_47;
  monitor = FixDamageRates[1].monitor;
  if ( (int)monitor >= 1 )
  {
    v78 = 0LL;
    v79 = (int)v74;
    do
    {
      if ( v78 >= (unsigned int)monitor )
      {
        sub_B17100(v74, v75, v76);
        sub_B170A0();
      }
      if ( !v72 )
        goto LABEL_47;
      System_Collections_Generic_List_int___Add(
        v72,
        *((int *)&FixDamageRates[2].klass + v78) * (__int64)Random / v79,
        (const MethodInfo_2F104F0 *)Method_System_Collections_Generic_List_int__Add__);
      LODWORD(monitor) = FixDamageRates[1].monitor;
    }
    while ( (__int64)++v78 < (int)monitor );
  }
  if ( !v72 )
    goto LABEL_47;
  size = v72->fields._size;
  v81 = size - 1;
  if ( size >= 1 )
  {
    v82 = v72->fields._items->m_Items[v81 + 1];
    v83 = System_Linq_Enumerable__Sum((System_Collections_Generic_IEnumerable_int__o *)v72, 0LL);
    if ( (BYTE3(System_Math_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !System_Math_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(System_Math_TypeInfo);
    v84 = System_Math__Max_44463768(0, Random - v83, 0LL);
    System_Collections_Generic_List_int___set_Item(
      v72,
      v81,
      v84 + v82,
      (const MethodInfo_2F101B0 *)Method_System_Collections_Generic_List_int__set_Item__);
  }
  v85 = (System_Int32_array **)System_Collections_Generic_List_int___ToArray(
                                 v72,
                                 (const MethodInfo_2F125FC *)Method_System_Collections_Generic_List_int__ToArray__);
  *(_QWORD *)(v36 + 96) = v85;
  sub_B16F98((BattleServantConfConponent_o *)(v36 + 96), v85, v86, v87, v88, v89, v90, v91);
  v93 = (System_Int32_array **)sub_B17014(int___TypeInfo, 0LL, v92);
  *(_QWORD *)(v36 + 104) = v93;
  sub_B16F98((BattleServantConfConponent_o *)(v36 + 104), v93, v94, v95, v96, v97, v98, v99);
  v101 = (System_Int32_array **)sub_B17014(int___TypeInfo, 0LL, v100);
  *(_QWORD *)(v36 + 112) = v101;
  sub_B16F98((BattleServantConfConponent_o *)(v36 + 112), v101, v102, v103, v104, v105, v106, v107);
  v109 = (System_Int32_array **)sub_B17014(int___TypeInfo, 0LL, v108);
  *(_QWORD *)(v36 + 120) = v109;
  sub_B16F98((BattleServantConfConponent_o *)(v36 + 120), v109, v110, v111, v112, v113, v114, v115);
  if ( !v31 )
    goto LABEL_47;
  BattleServantData__provisionalDamage(v31, Random, 0LL);
  BattleServantData__resultDamage(v31, Random, 0, 0LL);
  if ( !BattleServantData__isLogicResultAlive(v31, 0LL) )
  {
    v116 = this->fields.data;
    if ( !v116 )
      goto LABEL_47;
    v31->fields.deadTurn = v116->fields.typeTurn;
  }
  BattleActionData_DamageData__addAttackSideEffectAction((BattleActionData_DamageData_o *)v36, 80, 0LL);
  if ( !v121
    || (BattleActionData__setDamageData(v121, (BattleActionData_DamageData_o *)v36, v122, 0, 0, 0LL),
        (v117 = this->fields.data) == 0LL) )
  {
LABEL_47:
    sub_B170D4();
  }
  wavecount = v117->fields.wavecount;
  IsOpponentPTUniqueID = BattleData__IsOpponentPTUniqueID(v117, targetId, v123, 0LL);
  BattleServantData__setActionHistory(v31, v123, 7, wavecount, IsOpponentPTUniqueID, 0LL);
  return v121;
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
  int32_t v17; // w28
  __int64 v19; // x1
  __int64 v20; // x1
  __int64 v21; // x1
  BattleActionData_o *v22; // x20
  BattleData_o *data; // x0
  BattleServantData_o *ServantData; // x0
  int Value; // w27
  BattleServantData_o *v26; // x24
  int v27; // w19
  int32_t Param; // w0
  BattleData_o *v29; // x0
  _BOOL8 IsDeadOkTurn; // x0
  const MethodInfo *v31; // x6
  BattleActionData_BuffData_o *FunctionObject; // x0
  BattleActionData_BuffData_o *v33; // x23
  BattleData_o *v34; // x0
  BattleServantData_o *v35; // x28
  __int64 v36; // x1
  __int64 v37; // x2
  __int64 v38; // x3
  __int64 v39; // x4
  BattleActionData_DamageData_o *v40; // x25
  System_String_array **v41; // x2
  System_String_array **v42; // x3
  System_Boolean_array **v43; // x4
  System_Int32_array **v44; // x5
  System_Int32_array *v45; // x6
  System_Int32_array *v46; // x7
  struct BattleBuffData_o *buffData; // x8
  BattleServantConfConponent_o *p_invalidLossHpData; // x0
  System_Int32_array **v49; // x1
  bool v50; // w25
  UnityEngine_Object_o *logic; // x19
  BattleLogic_o *v52; // x0
  int32_t Wave; // w19
  BattleData_o *v54; // x0
  bool IsOpponentPTUniqueID; // w0
  __int64 v56; // x1
  __int64 v57; // x2
  __int64 v58; // x3
  __int64 v59; // x4
  BattleActionEffect_LossHPFunc_o *v60; // x19
  System_String_array **v61; // x2
  System_String_array **v62; // x3
  System_Boolean_array **v63; // x4
  System_Int32_array **v64; // x5
  System_Int32_array *v65; // x6
  System_Int32_array *v66; // x7
  BattleBuffData_o *v67; // x0
  BattleActionData_BuffData_o *v68; // x0
  struct BattleBuffData_o *v69; // x8
  BattleData_o *v70; // x0
  int32_t v71; // w0
  int32_t v73; // [xsp+14h] [xbp-6Ch]
  bool v74; // [xsp+18h] [xbp-68h]
  int32_t v75; // [xsp+1Ch] [xbp-64h]
  bool v76; // [xsp+20h] [xbp-60h]
  bool minimumDamageFlg; // [xsp+28h] [xbp-58h] BYREF
  float damage; // [xsp+2Ch] [xbp-54h] BYREF

  v17 = playerId;
  if ( (byte_40FCDE6 & 1) == 0 )
  {
    sub_B16FFC(&BattleActionData_TypeInfo, *(_QWORD *)&playerId);
    sub_B16FFC(&BattleActionData_DamageData_TypeInfo, v19);
    sub_B16FFC(&BattleActionEffect_LossHPFunc_TypeInfo, v20);
    sub_B16FFC(&UnityEngine_Object_TypeInfo, v21);
    byte_40FCDE6 = 1;
  }
  damage = 0.0;
  minimumDamageFlg = 0;
  v22 = (BattleActionData_o *)sub_B170CC(
                                BattleActionData_TypeInfo,
                                *(_QWORD *)&playerId,
                                *(_QWORD *)&targetId,
                                funcEnt,
                                baseVals);
  BattleActionData___ctor(v22, 0LL);
  data = this->fields.data;
  if ( !data )
    goto LABEL_51;
  v76 = safe;
  ServantData = BattleData__getServantData(data, targetId, 0LL);
  if ( !ServantData )
    goto LABEL_51;
  Value = overwriteLossHp;
  v26 = ServantData;
  v27 = ((__int64 (__fastcall *)(BattleServantData_o *, Il2CppMethodPointer))ServantData->klass->vtable._13_get_resultHp.method)(
          ServantData,
          ServantData->klass->vtable._14_set_resultHp.methodPtr);
  if ( overwriteLossHp == -1 )
  {
    if ( !baseVals )
      goto LABEL_51;
    Value = DataVals__GetValue(baseVals, 0LL);
  }
  if ( isRandomDamage )
  {
    if ( !baseVals )
      goto LABEL_51;
    Param = DataVals__GetParam(baseVals, 4, 0, 0LL);
    if ( Param >= 1 )
      Value = BattleRandom__getRandom(Value, Param + 1, 0LL);
  }
  if ( v27 < 1 )
    return 0LL;
  v29 = this->fields.data;
  if ( !v29 )
    goto LABEL_51;
  IsDeadOkTurn = BattleData__IsDeadOkTurn(v29, targetId, 0LL);
  v74 = IsDeadOkTurn;
  FunctionObject = BattleLogicFunction__getFunctionObject(
                     (BattleLogicFunction_o *)IsDeadOkTurn,
                     funcEnt,
                     v26->fields.uniqueId,
                     funcIndex,
                     isCommandSideEffect,
                     0LL,
                     v31);
  if ( !baseVals )
    goto LABEL_51;
  v33 = FunctionObject;
  v75 = v27;
  if ( DataVals__IsActNoDamageBuff(baseVals, 0LL) )
  {
    v34 = this->fields.data;
    if ( !v34 )
      goto LABEL_51;
    v73 = v17;
    v35 = BattleData__getServantData(v34, v17, 0LL);
    v40 = (BattleActionData_DamageData_o *)sub_B170CC(BattleActionData_DamageData_TypeInfo, v36, v37, v38, v39);
    BattleActionData_DamageData___ctor(v40, 0LL);
    BattleServantData__CheckNoDamageBuff(v26, this->fields.data, v35, 0LL, v40, mainAction, 0LL);
    damage = (float)Value;
    minimumDamageFlg = 1;
    if ( !v40 )
      goto LABEL_51;
    v40->fields.hitStates = 0;
    BattleServantData__CheckInvincibleAvoidanceBuff(
      v26,
      this->fields.data,
      v35,
      0LL,
      v40,
      &damage,
      &minimumDamageFlg,
      &v40->fields.hitStates,
      mainAction,
      0LL);
    buffData = v26->fields.buffData;
    if ( damage <= 0.0 )
      Value = 0;
    if ( !buffData )
      goto LABEL_51;
    v17 = v73;
    if ( buffData->fields.isNoDamage )
    {
      v40->fields.noDamage = 1;
      if ( !v33 )
        goto LABEL_51;
      v33->fields.invalidLossHpData = v40;
      p_invalidLossHpData = (BattleServantConfConponent_o *)&v33->fields.invalidLossHpData;
      v49 = (System_Int32_array **)v40;
    }
    else
    {
      if ( !v33 )
        goto LABEL_51;
      v33->fields.invalidLossHpData = 0LL;
      p_invalidLossHpData = (BattleServantConfConponent_o *)&v33->fields.invalidLossHpData;
      v49 = 0LL;
    }
    sub_B16F98(p_invalidLossHpData, v49, v41, v42, v43, v44, v45, v46);
  }
  v50 = !v74 || v76;
  BattleServantData__resultDamage(v26, Value, v50, 0LL);
  logic = (UnityEngine_Object_o *)this->fields.logic;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( UnityEngine_Object__op_Inequality(logic, 0LL, 0LL) )
  {
    v52 = this->fields.logic;
    if ( !v52 )
      goto LABEL_51;
    Wave = BattleLogic__getWave(v52, 0LL);
  }
  else
  {
    Wave = 0;
  }
  v54 = this->fields.data;
  if ( !v54
    || (IsOpponentPTUniqueID = BattleData__IsOpponentPTUniqueID(v54, targetId, v17, 0LL),
        BattleServantData__setActionHistory(v26, v17, 3, Wave, IsOpponentPTUniqueID, 0LL),
        !v33)
    || (v33->fields.procType = 2,
        v60 = (BattleActionEffect_LossHPFunc_o *)sub_B170CC(BattleActionEffect_LossHPFunc_TypeInfo, v56, v57, v58, v59),
        BattleActionEffect_LossHPFunc___ctor(v60, targetId, Value, v50, 0LL),
        v33->fields.EffectProc = (struct BattleActionEffect_Base_o *)v60,
        sub_B16F98(
          (BattleServantConfConponent_o *)&v33->fields.EffectProc,
          (System_Int32_array **)v60,
          v61,
          v62,
          v63,
          v64,
          v65,
          v66),
        !v22) )
  {
LABEL_51:
    sub_B170D4();
  }
  BattleActionData__setBuffData(v22, v33, baseVals, 0LL);
  if ( DataVals__isLossHpChangeDamage(baseVals, 0LL) )
  {
    if ( !DataVals__IsActNoDamageBuff(baseVals, 0LL) )
    {
      v67 = v26->fields.buffData;
      if ( !v67 )
        goto LABEL_51;
      goto LABEL_45;
    }
    if ( DataVals__IsActNoDamageBuff(baseVals, 0LL) )
    {
      v67 = v26->fields.buffData;
      if ( !v67 )
        goto LABEL_51;
      if ( !v67->fields.isNoDamage )
      {
LABEL_45:
        v68 = BattleBuffData__UseFieldProgressingDoNotAct(v67, v26, funcIndex, 0LL);
        BattleActionData__setBuffData(v22, v68, baseVals, 0LL);
      }
    }
  }
  v69 = v26->fields.buffData;
  if ( !v69 )
    goto LABEL_51;
  v69->fields.isNoDamage = 0;
  v70 = this->fields.data;
  if ( !v70 )
    goto LABEL_51;
  if ( ((BattleData__isEnemyID(v70, v17, 0LL) ^ v26->fields.isEnemy) & 1) != 0 )
  {
    v71 = ((__int64 (__fastcall *)(BattleServantData_o *, Il2CppMethodPointer))v26->klass->vtable._13_get_resultHp.method)(
            v26,
            v26->klass->vtable._14_set_resultHp.methodPtr);
    BattleServantData__procAccumulationDamage(v26, v75, v71, 0LL);
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

  if ( (byte_40FCDC7 & 1) == 0 )
  {
    sub_B16FFC(&Method_DataManager_GetMasterData_FunctionMaster___, method);
    sub_B16FFC(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v3);
    byte_40FCDC7 = 1;
  }
  master = this->fields.master;
  p_master = (BattleServantConfConponent_o *)&this->fields.master;
  result = master;
  if ( !master )
  {
    Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !Instance )
      sub_B170D4();
    MasterData_WarQuestSelectionMaster = (System_Int32_array **)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                                  (DataManager_o *)Instance,
                                                                  (const MethodInfo_18C3284 *)Method_DataManager_GetMasterData_FunctionMaster___);
    p_master->klass = (BattleServantConfConponent_c *)MasterData_WarQuestSelectionMaster;
    sub_B16F98(p_master, MasterData_WarQuestSelectionMaster, v9, v10, v11, v12, v13, v14);
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
  DataMasterBase_WarMaster__WarEntity__int__o *klass; // x0
  BattleServantConfConponent_o *p_master; // x20
  struct FunctionMaster_o *master; // t1
  WebViewManager_o *Instance; // x0
  System_Int32_array **MasterData_WarQuestSelectionMaster; // x0
  System_String_array **v12; // x2
  System_String_array **v13; // x3
  System_Boolean_array **v14; // x4
  System_Int32_array **v15; // x5
  System_Int32_array *v16; // x6
  System_Int32_array *v17; // x7

  if ( (byte_40FCDC6 & 1) == 0 )
  {
    sub_B16FFC(&Method_DataManager_GetMasterData_FunctionMaster___, *(_QWORD *)&id);
    sub_B16FFC(&Method_DataMasterBase_FunctionMaster__FunctionEntity__int__GetEntity__, v5);
    sub_B16FFC(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v6);
    byte_40FCDC6 = 1;
  }
  master = this->fields.master;
  p_master = (BattleServantConfConponent_o *)&this->fields.master;
  klass = (DataMasterBase_WarMaster__WarEntity__int__o *)master;
  if ( !master )
  {
    Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !Instance
      || (MasterData_WarQuestSelectionMaster = (System_Int32_array **)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                                        (DataManager_o *)Instance,
                                                                        (const MethodInfo_18C3284 *)Method_DataManager_GetMasterData_FunctionMaster___),
          p_master->klass = (BattleServantConfConponent_c *)MasterData_WarQuestSelectionMaster,
          sub_B16F98(p_master, MasterData_WarQuestSelectionMaster, v12, v13, v14, v15, v16, v17),
          (klass = (DataMasterBase_WarMaster__WarEntity__int__o *)p_master->klass) == 0LL) )
    {
      sub_B170D4();
    }
  }
  return (FunctionEntity_o *)DataMasterBase_WarMaster__WarEntity__int___GetEntity(
                               klass,
                               id,
                               (const MethodInfo_266F388 *)Method_DataMasterBase_FunctionMaster__FunctionEntity__int__GetEntity__);
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
  if ( (byte_40FCDEF & 1) == 0 )
  {
    sub_B16FFC(&BattleActionData_BuffData_TypeInfo, funcEnt);
    byte_40FCDEF = 1;
  }
  if ( !v8
    && (v8 = (BattleActionData_BuffData_o *)sub_B170CC(
                                              BattleActionData_BuffData_TypeInfo,
                                              funcEnt,
                                              *(_QWORD *)&uniqueId,
                                              *(_QWORD *)&funcIndex,
                                              isCommandSideEffect),
        BattleActionData_BuffData___ctor(v8, 0LL),
        !v8)
    || (v8->fields.targetId = uniqueId, v8->fields.functionIndex = funcIndex, !funcEnt) )
  {
    sub_B170D4();
  }
  popupText = (System_Int32_array **)funcEnt->fields.popupText;
  v8->fields.popLabel = (struct System_String_o *)popupText;
  sub_B16F98(
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
  sub_B16F98((BattleServantConfConponent_o *)&v8->fields.effectList, EffectList, v15, v16, v17, v18, v19, v20);
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
  struct System_Collections_Generic_Dictionary_FuncList_TYPE__BattleLogicFunctionProcess_BaseFunctionTypeProcess__o *dicFuncProcess; // x0
  bool v7; // w0
  int32_t v8; // w1
  System_String_o *Item; // x0
  BattleLogicFunctionProcess_BaseFunctionTypeProcess_o *v10; // x20

  if ( (byte_40FCDCB & 1) == 0 )
  {
    sub_B16FFC(
      &Method_System_Collections_Generic_Dictionary_FuncList_TYPE__BattleLogicFunctionProcess_BaseFunctionTypeProcess__ContainsKey__,
      *(_QWORD *)&functType);
    sub_B16FFC(
      &Method_System_Collections_Generic_Dictionary_FuncList_TYPE__BattleLogicFunctionProcess_BaseFunctionTypeProcess__get_Item__,
      v5);
    byte_40FCDCB = 1;
  }
  dicFuncProcess = this->fields.dicFuncProcess;
  if ( !dicFuncProcess
    || (v7 = System_Collections_Generic_Dictionary_Voice_BATTLE__string___ContainsKey(
               (System_Collections_Generic_Dictionary_Voice_BATTLE__string__o *)dicFuncProcess,
               functType,
               (const MethodInfo_2DFFEC8 *)Method_System_Collections_Generic_Dictionary_FuncList_TYPE__BattleLogicFunctionProcess_BaseFunctionTypeProcess__ContainsKey__),
        !this->fields.dicFuncProcess)
    || (!v7 ? (v8 = 0) : (v8 = functType),
        (Item = System_Collections_Generic_Dictionary_Voice_BATTLE__string___get_Item(
                  (System_Collections_Generic_Dictionary_Voice_BATTLE__string__o *)this->fields.dicFuncProcess,
                  v8,
                  (const MethodInfo_2DFFB90 *)Method_System_Collections_Generic_Dictionary_FuncList_TYPE__BattleLogicFunctionProcess_BaseFunctionTypeProcess__get_Item__)) == 0LL) )
  {
    sub_B170D4();
  }
  v10 = (BattleLogicFunctionProcess_BaseFunctionTypeProcess_o *)Item;
  if ( BattleLogicFunctionProcess_BaseFunctionTypeProcess__IsNeedInit(
         (BattleLogicFunctionProcess_BaseFunctionTypeProcess_o *)Item,
         this,
         0LL) )
  {
    ((void (__fastcall *)(BattleLogicFunctionProcess_BaseFunctionTypeProcess_o *, BattleLogicFunction_o *, Il2CppMethodPointer))v10->klass->vtable._4_init.method)(
      v10,
      this,
      v10->klass->vtable._5_IsPreCheckTargetsAvailable.methodPtr);
  }
  return v10;
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
  BattleLogicFunction_o *v9; // x0
  const MethodInfo *v10; // x6
  BattleActionData_BuffData_o *GrayActionBuffData; // x0

  if ( (byte_40FCDDC & 1) == 0 )
  {
    sub_B16FFC(&BattleActionData_TypeInfo, *(_QWORD *)&targetId);
    byte_40FCDDC = 1;
  }
  v8 = (BattleActionData_o *)sub_B170CC(
                               BattleActionData_TypeInfo,
                               *(_QWORD *)&targetId,
                               *(_QWORD *)&funcIndex,
                               funcEnt,
                               method);
  BattleActionData___ctor(v8, 0LL);
  if ( !funcEnt
    || (GrayActionBuffData = BattleLogicFunction__MakeGrayActionBuffData(
                               v9,
                               targetId,
                               funcIndex,
                               funcEnt->fields.popupIconId,
                               funcEnt->fields.popupText,
                               funcEnt->fields.popupTextColor,
                               v10),
        !v8) )
  {
    sub_B170D4();
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
  bool isParam; // w0
  int32_t MaxHp; // w0

  if ( !baseVals || (isParam = DataVals__isParam(baseVals, 119, 0LL), !targetSvtData) )
    sub_B170D4();
  if ( isParam )
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
  System_Int32_array **v29; // x1
  BattleServantConfConponent_o *p_popLabel; // x0
  __int64 v31; // x2
  System_Int32_array **v32; // x0
  System_String_array **v33; // x2
  System_String_array **v34; // x3
  System_Boolean_array **v35; // x4
  System_Int32_array **v36; // x5
  System_Int32_array *v37; // x6
  System_Int32_array *v38; // x7

  v10 = defBuffData;
  if ( (byte_40FCDD8 & 1) == 0 )
  {
    sub_B16FFC(&BattleActionData_TypeInfo, *(_QWORD *)&targetId);
    sub_B16FFC(&BattleActionData_BuffData_TypeInfo, v18);
    sub_B16FFC(&int___TypeInfo, v19);
    sub_B16FFC(&StringLiteral_1, v20);
    byte_40FCDD8 = 1;
  }
  v21 = (BattleActionData_o *)sub_B170CC(
                                BattleActionData_TypeInfo,
                                *(_QWORD *)&targetId,
                                *(_QWORD *)&funcIndex,
                                isHide,
                                dispName);
  BattleActionData___ctor(v21, 0LL);
  if ( !defBuffData )
  {
    v10 = (BattleActionData_BuffData_o *)sub_B170CC(BattleActionData_BuffData_TypeInfo, v22, v23, v24, v25);
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
    v29 = (System_Int32_array **)StringLiteral_1;
    v10->fields.popLabel = (struct System_String_o *)StringLiteral_1;
    p_popLabel = (BattleServantConfConponent_o *)&v10->fields.popLabel;
  }
  else
  {
    v10->fields.popLabel = dispName;
    p_popLabel = (BattleServantConfConponent_o *)&v10->fields.popLabel;
    v29 = (System_Int32_array **)dispName;
  }
  sub_B16F98(p_popLabel, v29, v23, v24, v25, v26, v27, v28);
  v32 = (System_Int32_array **)sub_B17014(int___TypeInfo, 0LL, v31);
  v10->fields.effectList = (struct System_Int32_array *)v32;
  sub_B16F98((BattleServantConfConponent_o *)&v10->fields.effectList, v32, v33, v34, v35, v36, v37, v38);
  if ( !v21
    || (BattleActionData__setBuffData(v21, v10, 0LL, 0LL),
        v10->fields.IsNoEffect = isNoEffect,
        v10->fields.isCommandAfter = isCommandSideEffect,
        !dataVals) )
  {
LABEL_11:
    sub_B170D4();
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
  if ( (byte_40FCDD9 & 1) != 0 )
  {
    if ( uniqueText )
      goto LABEL_3;
  }
  else
  {
    sub_B16FFC(&LocalizationManager_TypeInfo, *(_QWORD *)&targetId);
    sub_B16FFC(&StringLiteral_2446, v16);
    byte_40FCDD9 = 1;
    if ( v9 )
    {
LABEL_3:
      if ( dataVals )
        goto LABEL_4;
LABEL_10:
      sub_B170D4();
    }
  }
  if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !LocalizationManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  }
  v9 = LocalizationManager__Get((System_String_o *)StringLiteral_2446, 0LL);
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
  if ( (byte_40FCDDA & 1) != 0 )
  {
    if ( uniqueText )
      goto LABEL_3;
  }
  else
  {
    sub_B16FFC(&LocalizationManager_TypeInfo, *(_QWORD *)&targetId);
    sub_B16FFC(&StringLiteral_2457, v16);
    byte_40FCDDA = 1;
    if ( v9 )
    {
LABEL_3:
      if ( dataVals )
        goto LABEL_4;
LABEL_10:
      sub_B170D4();
    }
  }
  if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !LocalizationManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  }
  v9 = LocalizationManager__Get((System_String_o *)StringLiteral_2457, 0LL);
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
  BattleData_o *data; // x22
  int32_t actorId; // w24
  int32_t targetId; // w25
  int32_t PTTargetId; // w0
  System_Collections_Generic_IEnumerable_TSource__o *TargetIds_19019748; // x20
  __int64 v20; // x1
  __int64 v21; // x2
  __int64 v22; // x3
  __int64 v23; // x4
  System_Func_int__bool__o *v24; // x21
  System_Collections_Generic_IEnumerable_TSource__o *v25; // x0

  if ( (byte_40FCDD2 & 1) == 0 )
  {
    sub_B16FFC(&Method_BattleLogicFunction__getTargetids_b__46_0__, mainAction);
    sub_B16FFC(&Target_BattleTargetArgs_TypeInfo, v9);
    sub_B16FFC(&Method_System_Linq_Enumerable_ToArray_int___, v10);
    sub_B16FFC(&Method_System_Linq_Enumerable_Where_int___, v11);
    sub_B16FFC(&Method_System_Func_int__bool___ctor__, v12);
    sub_B16FFC(&System_Func_int__bool__TypeInfo, v13);
    byte_40FCDD2 = 1;
  }
  args = (Target_BattleTargetArgs_o *)sub_B170CC(
                                        Target_BattleTargetArgs_TypeInfo,
                                        mainAction,
                                        *(_QWORD *)&targetType,
                                        dataVals,
                                        method);
  Target_BattleTargetArgs___ctor(args, dataVals, 0LL);
  if ( !mainAction )
    sub_B170D4();
  data = this->fields.data;
  actorId = mainAction->fields.actorId;
  targetId = mainAction->fields.targetId;
  PTTargetId = BattleActionData__getPTTargetId(mainAction, 0LL);
  TargetIds_19019748 = (System_Collections_Generic_IEnumerable_TSource__o *)Target__getTargetIds_19019748(
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
  v24 = (System_Func_int__bool__o *)sub_B170CC(System_Func_int__bool__TypeInfo, v20, v21, v22, v23);
  System_Func_int__bool____ctor(
    v24,
    (Il2CppObject *)this,
    Method_BattleLogicFunction__getTargetids_b__46_0__,
    (const MethodInfo_2B6586C *)Method_System_Func_int__bool___ctor__);
  v25 = System_Linq_Enumerable__Where_int_(
          TargetIds_19019748,
          (System_Func_TSource__bool__o *)v24,
          (const MethodInfo_19C8D54 *)Method_System_Linq_Enumerable_Where_int___);
  return System_Linq_Enumerable__ToArray_int_(
           v25,
           (const MethodInfo_19C4A28 *)Method_System_Linq_Enumerable_ToArray_int___);
}


BattleFieldEnvironmentData_o *__fastcall BattleLogicFunction__get_FieldEnvData(
        BattleLogicFunction_o *this,
        const MethodInfo *method)
{
  struct BattleData_o *data; // x8

  data = this->fields.data;
  if ( !data )
    sub_B170D4();
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
    sub_B170D4();
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
  int32_t Param; // w0
  int32_t v10; // w22

  if ( !baseVals || (Param = DataVals__GetParam(baseVals, 0, 0, 0LL), !args) )
    sub_B170D4();
  v10 = Param;
  if ( !BattleLogicFunction_ProcListInArgs__DidTriggeredFuncHaveSpecifyResults(
          args,
          targetId,
          baseVals,
          this->fields.data,
          0LL) )
    return 1;
  if ( (v10 & 0x80000000) != 0 )
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
    sub_B170D4();
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
  FunctionEntity_o *FunctionEntity; // x0

  if ( !funclist )
LABEL_11:
    sub_B170D4();
  v4 = *(_QWORD *)&funclist->max_length;
  if ( (int)v4 < 1 )
    return 0;
  v6 = this;
  v7 = 0LL;
  while ( 1 )
  {
    if ( v7 >= (unsigned int)v4 )
    {
      sub_B17100(this, *(_QWORD *)&uniqueId, funclist);
      sub_B170A0();
    }
    FunctionEntity = BattleLogicFunction__getFunctionEntity(v6, funclist->m_Items[v7 + 1], (const MethodInfo *)funclist);
    if ( !FunctionEntity )
      goto LABEL_11;
    this = (BattleLogicFunction_o *)Target__isChoose(FunctionEntity->fields.targetType, 0LL);
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
  System_String_o *v69; // x0
  BattleData_o *data; // x0
  System_String_o *v71; // x0
  System_String_o *v72; // x0
  System_String_array **v73; // x2
  System_String_array **v74; // x3
  System_Boolean_array **v75; // x4
  System_Int32_array **v76; // x5
  System_Int32_array *v77; // x6
  System_Int32_array *v78; // x7
  struct BattleData_o *v79; // x8
  __int64 v80; // x1
  __int64 v81; // x2
  __int64 v82; // x3
  __int64 v83; // x4
  WebViewManager_o *Instance; // x0
  __int64 v85; // x1
  __int64 v86; // x2
  __int64 v87; // x3
  __int64 v88; // x4
  UnityEngine_Object_o *logic; // x23
  BattleLogic_o *v90; // x0
  BattleLogicFunction_ProcListInArgs_o *v91; // x23
  bool v92; // w26
  int32_t *p_actSetId; // x22
  __int64 v94; // x1
  __int64 v95; // x2
  __int64 v96; // x3
  __int64 v97; // x4
  WeightRate_int__o *v98; // x24
  __int64 ActSetWeight; // x0
  __int64 v100; // x1
  __int64 v101; // x2
  signed int max_length; // w8
  unsigned int v103; // w23
  Il2CppClass **v104; // x8
  DataVals_o *v105; // x25
  int32_t v106; // w26
  int32_t ActSet; // w0
  BattleServantData_o *v108; // x25
  int32_t Random; // w0
  System_String_o *v110; // x0
  __int64 v111; // x1
  __int64 v112; // x2
  __int64 v113; // x3
  __int64 v114; // x4
  WellFired_USFGOPlayBgmEventConditional_CondBGM_array *funcUnitArray_k__BackingField; // x21
  BattleLogicFunction___c_c *v116; // x0
  struct BattleLogicFunction___c_StaticFields *static_fields; // x8
  System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *_9__34_0; // x22
  Il2CppObject *v119; // x24
  struct BattleLogicFunction___c_StaticFields *v120; // x0
  System_String_array **v121; // x2
  System_String_array **v122; // x3
  System_Boolean_array **v123; // x4
  System_Int32_array **v124; // x5
  System_Int32_array *v125; // x6
  System_Int32_array *v126; // x7
  __int64 v127; // x1
  __int64 v128; // x2
  __int64 v129; // x3
  __int64 v130; // x4
  BattleLogicFunction___c_c *v131; // x0
  System_Collections_Generic_IEnumerable_TSource__o *v132; // x21
  struct BattleLogicFunction___c_StaticFields *v133; // x8
  System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *_9__34_1; // x22
  Il2CppObject *v135; // x24
  struct BattleLogicFunction___c_StaticFields *v136; // x0
  System_String_array **v137; // x2
  System_String_array **v138; // x3
  System_Boolean_array **v139; // x4
  System_Int32_array **v140; // x5
  System_Int32_array *v141; // x6
  System_Int32_array *v142; // x7
  __int64 v143; // x3
  __int64 v144; // x4
  BattleData_o *v145; // x21
  SkillValueUpApplierPlayerMaster_o *v146; // x22
  struct BattleLogicFunctionProcess_FunctionUnitCheck_array *v147; // x24
  int v148; // w8
  unsigned int v149; // w23
  Il2CppClass **v150; // x8
  BattleLogicFunctionProcess_FunctionUnitCheck_o *v151; // x21
  int32_t v152; // w0
  DataVals_o *dataVals_k__BackingField; // x22
  const MethodInfo *v154; // x4
  __int64 v155; // x3
  BattleLogicFunction___c_c *v156; // x0
  System_Collections_Generic_IEnumerable_TSource__o *funcTargetArray_k__BackingField; // x21
  struct BattleLogicFunction___c_StaticFields *v158; // x8
  System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *_9__34_2; // x27
  Il2CppObject *v160; // x28
  struct BattleLogicFunction___c_StaticFields *v161; // x0
  System_String_array **v162; // x2
  System_String_array **v163; // x3
  System_Boolean_array **v164; // x4
  System_Int32_array **v165; // x5
  System_Int32_array *v166; // x6
  System_Int32_array *v167; // x7
  __int64 v168; // x1
  __int64 v169; // x2
  __int64 v170; // x3
  __int64 v171; // x4
  System_Collections_Generic_IEnumerable_TSource__o *v172; // x21
  BattleLogicFunction___c_c *v173; // x8
  struct BattleLogicFunction___c_StaticFields *v174; // x9
  System_Func_BattleLogicBuff_ReduceHpProcess_BuffInfo__int__o *_9__34_3; // x27
  Il2CppObject *v176; // x28
  struct BattleLogicFunction___c_StaticFields *v177; // x0
  System_String_array **v178; // x2
  System_String_array **v179; // x3
  System_Boolean_array **v180; // x4
  System_Int32_array **v181; // x5
  System_Int32_array *v182; // x6
  System_Int32_array *v183; // x7
  System_Collections_Generic_IEnumerable_TSource__o *v184; // x0
  System_Int32_array *v185; // x21
  bool v186; // w27
  __int64 v187; // x1
  __int64 v188; // x2
  __int64 v189; // x3
  __int64 v190; // x4
  BattleLogicFunction_PreAttackSideEffectMakeArgument_o *v191; // x28
  BattleLogicFunction_SideEffectMakeArgument_o *v192; // x0
  const MethodInfo *v193; // x5
  struct BattleLogicFunctionProcess_FunctionTargetCheck_array *v194; // x24
  int v195; // w8
  int32_t *p_funcType; // x25
  int i; // w23
  BattleData_o *v198; // x28
  bool isMultipleGainStar; // w0
  BattleLogicFunction_o *v200; // x0
  const MethodInfo *v201; // x6
  BattleData_o *v202; // x28
  int32_t Value; // w0
  BattleActionData_BuffData_o *FunctionObject; // x0
  BattleData_o *v205; // x0
  BattleActionData_o *v206; // x0
  const MethodInfo *v207; // x7
  bool isUnaffected; // w26
  int CorrectedValueFuncGainNp; // w28
  bool isGainNp; // w0
  const MethodInfo *v211; // x7
  BattleLogicFunction_o *v212; // x0
  int32_t v213; // w26
  const MethodInfo *v214; // x6
  BattleActionData_BuffData_o *v215; // x0
  BattleActionData_BuffData_o *v216; // x28
  int32_t v217; // w0
  BattleLogicFunction_o *v218; // x0
  int32_t v219; // w26
  const MethodInfo *v220; // x6
  BattleActionData_BuffData_o *v221; // x0
  int32_t v222; // w26
  System_Int32_array *TargetList; // x28
  int32_t v224; // w0
  _BOOL8 v225; // x0
  const MethodInfo *v226; // x6
  int32_t v227; // w26
  System_Int32_array *v228; // x28
  int32_t v229; // w0
  int32_t v230; // w2
  BattleActionData_BuffData_o *v231; // x1
  BattleActionData_o *v232; // x0
  DataVals_o *v233; // x2
  BattleLogicFunction_o *v234; // x0
  int32_t v235; // w1
  const MethodInfo *v236; // x3
  int32_t v237; // w26
  bool v238; // w0
  bool v239; // w8
  bool v240; // w6
  bool v241; // w7
  BattleLogicFunction_o *v242; // x0
  int32_t v243; // w1
  int32_t v244; // w1
  FunctionEntity_o *v245; // x3
  int32_t v246; // w5
  bool v247; // w6
  BattleLogicFunction_o *v248; // x0
  int32_t v249; // w2
  DataVals_o *v250; // x4
  bool v251; // w7
  const MethodInfo *v252; // x7
  const MethodInfo *v253; // x7
  const MethodInfo *v254; // x6
  int32_t v255; // w1
  FunctionEntity_o *v256; // x2
  DataVals_o *v257; // x3
  int32_t v258; // w4
  const MethodInfo *v259; // x5
  BattleActionData_o *v260; // x0
  BattleData_o *v261; // x0
  FunctionEntity_o *v262; // x1
  FunctionEntity_o *v263; // x3
  MethodInfo *v264; // x4
  const MethodInfo *v265; // x6
  int32_t applyTarget; // w8
  FunctionEntity_o *v267; // x2
  const MethodInfo *v268; // x5
  BattleActionData_o *v269; // x0
  const MethodInfo *v270; // x5
  BattleActionData_o *v271; // x0
  FunctionEntity_o *v272; // x2
  const MethodInfo *v273; // x6
  int32_t v274; // w1
  FunctionEntity_o *v275; // x2
  DataVals_o *v276; // x3
  int32_t v277; // w4
  const MethodInfo *v278; // x5
  BattleActionData_o *v279; // x0
  BattleData_o *v280; // x0
  FunctionEntity_o *v281; // x3
  int32_t v282; // w5
  const MethodInfo *v283; // x6
  _BOOL8 v284; // x0
  FunctionEntity_o *v285; // x2
  int32_t v286; // w4
  const MethodInfo *v287; // x5
  const MethodInfo *v288; // x3
  int32_t v289; // w26
  int32_t v290; // w28
  char v291; // w5
  const MethodInfo *v292; // x7
  BattleLogicFunction_o *v293; // x0
  int32_t v294; // w1
  int32_t v295; // w2
  System_String_array **v296; // x2
  System_String_array **v297; // x3
  System_Boolean_array **v298; // x4
  System_Int32_array **v299; // x5
  System_Int32_array *v300; // x6
  System_Int32_array *v301; // x7
  struct BattleData_o *v302; // x8
  System_Int32_array **draw_commandlist; // x1
  int v304; // w28
  bool isParam; // w26
  System_Int32_array *v306; // x0
  int32_t v307; // w28
  __int64 v308; // x1
  __int64 v309; // x2
  __int64 v310; // x3
  __int64 v311; // x4
  Generator_BGMFromChangeBGMFunc_o *v312; // x26
  const MethodInfo *v313; // x3
  _BOOL8 v314; // x0
  const MethodInfo *v315; // x6
  const MethodInfo *v316; // x6
  System_Int32_array *v317; // x28
  int32_t SameIndiualityBuffSum; // w0
  int32_t v319; // w28
  const MethodInfo *v320; // x7
  int32_t v321; // w1
  int32_t v322; // w2
  int32_t v323; // w5
  const MethodInfo *v324; // x4
  const MethodInfo *v325; // x4
  _BOOL8 v326; // x0
  const MethodInfo *v327; // x3
  bool v328; // w28
  int32_t HpPerValue; // w0
  const MethodInfo *v330; // x3
  bool v331; // w2
  BattleLogicFunction_o *v332; // x0
  DataVals_o *v333; // x1
  __int64 v334; // x1
  __int64 v335; // x2
  __int64 v336; // x3
  __int64 v337; // x4
  Generator_BGFromQuickChangeBGFunc_o *v338; // x26
  const MethodInfo *v339; // x3
  ServantEntity_o *svtdata; // x0
  int32_t Param; // w0
  const MethodInfo *v342; // x4
  BattleBuffData_o *buffData; // x28
  int32_t v344; // w0
  __int64 v345; // x1
  __int64 v346; // x2
  __int64 v347; // x3
  __int64 v348; // x4
  BattleActionData_UpShiftGaugeData_o *v349; // x26
  const MethodInfo *v350; // x5
  __int64 v351; // x1
  __int64 v352; // x2
  __int64 v353; // x3
  __int64 v354; // x4
  DataVals_o *v355; // x3
  const MethodInfo *v356; // x5
  BattleActionData_o *SubMember; // x0
  const MethodInfo *v358; // x3
  const MethodInfo *v359; // x6
  const MethodInfo *v360; // x4
  const MethodInfo *v361; // x3
  _BOOL8 v362; // x0
  const MethodInfo *v363; // x3
  const MethodInfo *v364; // x2
  const MethodInfo *v365; // x2
  const MethodInfo *v366; // x5
  const MethodInfo *v367; // x4
  int32_t v368; // w0
  const MethodInfo *v369; // x3
  int32_t v370; // w0
  const MethodInfo *v371; // x2
  BattleLogicFunctionProcess_FunctionTargetCheck_o *v372; // x28
  BattleData_o *v373; // x0
  int32_t targetId_k__BackingField; // w21
  BattleServantData_o *ServantData; // x0
  BattleServantData_o *v376; // x27
  const MethodInfo *v377; // x7
  BattleActionData_o *NoEffectObject; // x0
  struct System_Int32_array *vals; // x8
  WarEntity_o *Entity; // x0
  int32_t commandType; // w8
  bool v382; // w0
  const MethodInfo *v383; // x5
  const MethodInfo *v384; // x3
  int32_t actorId; // w28
  int32_t uniqueId; // w26
  bool isSafeDamage; // w0
  int32_t v388; // w2
  const MethodInfo *v389; // x7
  const MethodInfo *v390; // x7
  int32_t v391; // w1
  int32_t v392; // w2
  int32_t v393; // w5
  int v394; // w8
  struct BattleBuffData_o *v395; // x8
  BattleBuffData_o *v396; // x0
  BattleActionData_o *v397; // x0
  bool v398; // w21
  __int64 v399; // x1
  __int64 v400; // x2
  __int64 v401; // x3
  __int64 v402; // x4
  BattleLogicFunction_AfterAttackSideEffectMakeArgument_o *v403; // x22
  BattleLogicFunction_SideEffectMakeArgument_o *Argument__Init; // x0
  const MethodInfo *v405; // x5
  __int64 v406; // x3
  __int64 v407; // x4
  __int64 v408; // x21
  BattleCommandData_o *v409; // x22
  int32_t TreasureDvcCardId; // w0
  UnityEngine_Object_o *v411; // x24
  __int64 v412; // x8
  unsigned __int64 v413; // x23
  BattleLogic_o *v414; // x0
  BattleLogicFunction_CheckDuplicateFunction_o *v415; // x0
  BattleData_o *v416; // x0
  BattleServantData_o *v417; // x0
  UnityEngine_Object_o *v418; // x21
  int v419; // w8
  __int64 v420; // x21
  unsigned int v421; // w22
  __int64 v422; // x8
  BattleLogic_o *v423; // x0
  UnityEngine_Object_o *v424; // x21
  BattleLogic_o *v425; // x0
  struct BattleData_o *v426; // x8
  BattleFieldEnvironmentData_o *FieldEnvData_k__BackingField; // x0
  UnityEngine_Object_o *v428; // x21
  BattleLogic_o *v429; // x0
  BattleData_o *v430; // x0
  BattleServantData_o *v431; // x0
  const MethodInfo *overwriteLossHp; // [xsp+0h] [xbp-160h]
  int32_t overwriteLossHpa; // [xsp+0h] [xbp-160h]
  char isRandomDamage; // [xsp+8h] [xbp-158h]
  BattleActionData_o *mainAction; // [xsp+10h] [xbp-150h]
  const MethodInfo *v437; // [xsp+18h] [xbp-148h]
  int32_t count; // [xsp+28h] [xbp-138h]
  bool counta; // [xsp+28h] [xbp-138h]
  BattleData_o *countb; // [xsp+28h] [xbp-138h]
  int32_t subTargetId; // [xsp+34h] [xbp-12Ch]
  int32_t *p_actorId; // [xsp+38h] [xbp-128h]
  _BYTE v443[12]; // [xsp+44h] [xbp-11Ch]
  SkillValueUpApplierPlayerMaster_o *v444; // [xsp+50h] [xbp-110h]
  System_Collections_Generic_List_int__o *v445; // [xsp+58h] [xbp-108h]
  struct BattleLogicFunctionProcess_FunctionUnitCheck_array *v446; // [xsp+68h] [xbp-F8h]
  int v447; // [xsp+74h] [xbp-ECh]
  BattleServantData_o *actionSvtData; // [xsp+78h] [xbp-E8h]
  unsigned int v449; // [xsp+84h] [xbp-DCh]
  BattleLogicFunctionProcess_FunctionUnitCheck_o *funcUnit; // [xsp+90h] [xbp-D0h]
  DataMasterBase_WarMaster__WarEntity__int__o *MasterData_WarQuestSelectionMaster; // [xsp+98h] [xbp-C8h]
  int32_t funcIdx; // [xsp+A0h] [xbp-C0h]
  FunctionEntity_o *funcEnt; // [xsp+A8h] [xbp-B8h]
  BattleLogicFunction_ProcListInArgs_o *args; // [xsp+B0h] [xbp-B0h]
  System_Collections_Generic_List_Enumerator_int__o v456; // [xsp+B8h] [xbp-A8h] BYREF
  System_Collections_Generic_List_Enumerator_int__o v457; // [xsp+D0h] [xbp-90h] BYREF
  int32_t absorptionCount; // [xsp+ECh] [xbp-74h] BYREF
  RemovedBuffInfo_o *subBuffInfo; // [xsp+F0h] [xbp-70h] BYREF
  int32_t funcIndex; // [xsp+FCh] [xbp-64h] BYREF
  __int64 v461[2]; // [xsp+100h] [xbp-60h] BYREF

  if ( (byte_40FCDCC & 1) == 0 )
  {
    sub_B16FFC(&BattleLogicFunction_AfterAttackSideEffectMakeArgument_TypeInfo, action);
    sub_B16FFC(&Generator_BGFromQuickChangeBGFunc_TypeInfo, v21);
    sub_B16FFC(&Generator_BGMFromChangeBGMFunc_TypeInfo, v22);
    sub_B16FFC(&Method_BasicHelper_Any_BattleLogicFunctionProcess_FunctionUnitCheck___, v23);
    sub_B16FFC(&BattleCommandData_TypeInfo, v24);
    sub_B16FFC(&Method_DataManager_GetMasterData_BuffMaster___, v25);
    sub_B16FFC(&Method_DataMasterBase_BuffMaster__BuffEntity__int__GetEntity__, v26);
    sub_B16FFC(&BattleActionData_DownShiftGaugeData_TypeInfo, v27);
    sub_B16FFC(&Method_System_Linq_Enumerable_All_BattleLogicFunctionProcess_FunctionUnitCheck___, v28);
    sub_B16FFC(&Method_System_Linq_Enumerable_Select_BattleLogicFunctionProcess_FunctionTargetCheck__int___, v29);
    sub_B16FFC(&Method_System_Linq_Enumerable_ToArray_int___, v30);
    sub_B16FFC(&Method_System_Linq_Enumerable_Where_BattleLogicFunctionProcess_FunctionTargetCheck___, v31);
    sub_B16FFC(&Method_System_Collections_Generic_List_Enumerator_int__Dispose__, v32);
    sub_B16FFC(&Method_System_Collections_Generic_List_Enumerator_int__MoveNext__, v33);
    sub_B16FFC(&Method_System_Collections_Generic_List_Enumerator_int__get_Current__, v34);
    sub_B16FFC(&Method_System_Func_BattleLogicFunctionProcess_FunctionUnitCheck__bool___ctor__, v35);
    sub_B16FFC(&Method_System_Func_BattleLogicFunctionProcess_FunctionTargetCheck__int___ctor__, v36);
    sub_B16FFC(&Method_System_Func_BattleLogicFunctionProcess_FunctionTargetCheck__bool___ctor__, v37);
    sub_B16FFC(&System_Func_BattleLogicFunctionProcess_FunctionTargetCheck__bool__TypeInfo, v38);
    sub_B16FFC(&System_Func_BattleLogicFunctionProcess_FunctionTargetCheck__int__TypeInfo, v39);
    sub_B16FFC(&System_Func_BattleLogicFunctionProcess_FunctionUnitCheck__bool__TypeInfo, v40);
    sub_B16FFC(&Method_System_Collections_Generic_List_int__Add__, v41);
    sub_B16FFC(&Method_System_Collections_Generic_List_int__GetEnumerator__, v42);
    sub_B16FFC(&Method_System_Collections_Generic_List_int___ctor__, v43);
    sub_B16FFC(&System_Collections_Generic_List_int__TypeInfo, v44);
    sub_B16FFC(&UnityEngine_Object_TypeInfo, v45);
    sub_B16FFC(&BattleLogicFunction_PreAttackSideEffectMakeArgument_TypeInfo, v46);
    sub_B16FFC(&BattleLogicFunction_ProcListInArgs_TypeInfo, v47);
    sub_B16FFC(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v48);
    sub_B16FFC(&SkillValueUpApplierPlayerMaster_TypeInfo, v49);
    sub_B16FFC(&Method_BattleLogicFunction___c__procList_b__34_0__, v50);
    sub_B16FFC(&Method_BattleLogicFunction___c__procList_b__34_1__, v51);
    sub_B16FFC(&Method_BattleLogicFunction___c__procList_b__34_2__, v52);
    sub_B16FFC(&Method_BattleLogicFunction___c__procList_b__34_3__, v53);
    sub_B16FFC(&BattleLogicFunction___c_TypeInfo, v54);
    sub_B16FFC(&BattleActionData_UpShiftGaugeData_TypeInfo, v55);
    sub_B16FFC(&Method_WeightRate_int___ctor__, v56);
    sub_B16FFC(&Method_WeightRate_int__getCount__, v57);
    sub_B16FFC(&Method_WeightRate_int__getData__, v58);
    sub_B16FFC(&Method_WeightRate_int__getTotalWeight__, v59);
    sub_B16FFC(&Method_WeightRate_int__setWeight__, v60);
    sub_B16FFC(&WeightRate_int__TypeInfo, v61);
    sub_B16FFC(&StringLiteral_1506, v62);
    sub_B16FFC(&StringLiteral_205, v63);
    sub_B16FFC(&StringLiteral_1507, v64);
    sub_B16FFC(&StringLiteral_251, v65);
    sub_B16FFC(&StringLiteral_1509, v66);
    sub_B16FFC(&StringLiteral_1518, v67);
    sub_B16FFC(&StringLiteral_176, v68);
    byte_40FCDCC = 1;
  }
  v461[0] = 0LL;
  funcIndex = 0;
  subBuffInfo = 0LL;
  absorptionCount = 0;
  memset(&v457, 0, sizeof(v457));
  if ( !action )
    goto LABEL_401;
  p_actorId = &action->fields.actorId;
  v69 = System_Int32__ToString((int)action + 32, 0LL);
  System_String__Concat_43743732((System_String_o *)StringLiteral_176, v69, 0LL);
  data = this->fields.data;
  if ( !data )
    goto LABEL_401;
  actionSvtData = BattleData__getServantData(data, action->fields.actorId, 0LL);
  HIDWORD(v461[0]) = action->fields.targetId;
  v71 = System_Int32__ToString((int32_t)v461 + 4, 0LL);
  System_String__Concat_43743732((System_String_o *)StringLiteral_205, v71, 0LL);
  LODWORD(v461[0]) = BattleActionData__getPTTargetId(action, 0LL);
  subTargetId = BattleActionData__getPTSubTargetId(action, 0LL);
  v72 = System_Int32__ToString((int32_t)v461, 0LL);
  System_String__Concat_43743732((System_String_o *)StringLiteral_251, v72, 0LL);
  v79 = this->fields.data;
  if ( !v79 )
    goto LABEL_401;
  v79->fields.beforeAction = action;
  sub_B16F98(
    (BattleServantConfConponent_o *)&v79->fields.beforeAction,
    (System_Int32_array **)action,
    v73,
    v74,
    v75,
    v76,
    v77,
    v78);
  v445 = (System_Collections_Generic_List_int__o *)sub_B170CC(
                                                     System_Collections_Generic_List_int__TypeInfo,
                                                     v80,
                                                     v81,
                                                     v82,
                                                     v83);
  System_Collections_Generic_List_int____ctor(
    v445,
    (const MethodInfo_2F0F794 *)Method_System_Collections_Generic_List_int___ctor__);
  Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_401;
  MasterData_WarQuestSelectionMaster = (DataMasterBase_WarMaster__WarEntity__int__o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                                                        (DataManager_o *)Instance,
                                                                                        (const MethodInfo_18C3284 *)Method_DataManager_GetMasterData_BuffMaster___);
  if ( isReduceReset )
  {
    logic = (UnityEngine_Object_o *)this->fields.logic;
    if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    }
    if ( UnityEngine_Object__op_Inequality(logic, 0LL, 0LL) )
    {
      v90 = this->fields.logic;
      if ( !v90 )
        goto LABEL_401;
      BattleLogic__resetReducedHpAll(v90, 0LL);
    }
  }
  v91 = (BattleLogicFunction_ProcListInArgs_o *)sub_B170CC(
                                                  BattleLogicFunction_ProcListInArgs_TypeInfo,
                                                  v85,
                                                  v86,
                                                  v87,
                                                  v88);
  BattleLogicFunction_ProcListInArgs___ctor(v91, argument, 0LL);
  if ( !v91 )
    goto LABEL_401;
  v92 = isCommandSideEffect;
  BattleLogicFunction_ProcListInArgs__set_IsCommandSideEffect(v91, isCommandSideEffect, 0LL);
  BattleLogicFunction_ProcListInArgs__set_IsShift(v91, isShift, 0LL);
  BattleLogicFunction_ProcListInArgs__set_IsPassive(v91, passive, 0LL);
  if ( BattleLogicFunction_ProcListInArgs__get_SkillId(v91, 0LL) <= 0 )
    BattleLogicFunction_ProcListInArgs__set_SkillId(v91, skillId, 0LL);
  funcIndex = 0;
  BattleLogicFunction_ProcListInArgs__initFunctionUnitCheck(v91, this, functionlist, baseValslist, &funcIndex, 0LL);
  args = v91;
  v91->fields.actSetId = 0;
  p_actSetId = &v91->fields.actSetId;
  v98 = (WeightRate_int__o *)sub_B170CC(WeightRate_int__TypeInfo, v94, v95, v96, v97);
  WeightRate_int____ctor(v98, (const MethodInfo_2ADD274 *)Method_WeightRate_int___ctor__);
  if ( !baseValslist )
    goto LABEL_401;
  max_length = baseValslist->max_length;
  if ( max_length >= 1 )
  {
    v103 = 0;
    while ( v103 < max_length )
    {
      v104 = &baseValslist->obj.klass + (int)v103;
      v105 = (DataVals_o *)v104[4];
      if ( !v105 )
        goto LABEL_401;
      DataVals__loadActSet((DataVals_o *)v104[4], 0LL);
      ActSetWeight = DataVals__checkActSet(v105, 0LL);
      if ( (ActSetWeight & 1) != 0 )
      {
        ActSetWeight = DataVals__getActSetWeight(v105, 0LL);
        if ( (int)ActSetWeight >= 1 )
        {
          v106 = DataVals__getActSetWeight(v105, 0LL);
          ActSet = DataVals__getActSet(v105, 0LL);
          if ( !v98 )
            goto LABEL_401;
          WeightRate_int___setWeight(v98, v106, ActSet, (const MethodInfo_2ADC43C *)Method_WeightRate_int__setWeight__);
          v92 = isCommandSideEffect;
        }
      }
      max_length = baseValslist->max_length;
      if ( (int)++v103 >= max_length )
        goto LABEL_27;
    }
LABEL_402:
    sub_B17100(ActSetWeight, v100, v101);
    sub_B170A0();
  }
LABEL_27:
  if ( !v98 )
    goto LABEL_401;
  v108 = actionSvtData;
  if ( WeightRate_int___getCount(v98, (const MethodInfo_2ADC7DC *)Method_WeightRate_int__getCount__) >= 1 )
  {
    Random = BattleRandom__getRandom(0, v98->fields.totalweight, 0LL);
    *p_actSetId = WeightRate_int___getData(v98, Random, (const MethodInfo_2ADC8C0 *)Method_WeightRate_int__getData__);
    v110 = System_Int32__ToString((int32_t)p_actSetId, 0LL);
    System_String__Concat_43743732((System_String_o *)StringLiteral_1518, v110, 0LL);
  }
  action->fields.ActSetId = args->fields.actSetId;
  BattleActionData__initFuncTargetPlayerType(action, funcIndex, 0LL);
  funcUnitArray_k__BackingField = (WellFired_USFGOPlayBgmEventConditional_CondBGM_array *)args->fields._funcUnitArray_k__BackingField;
  v116 = BattleLogicFunction___c_TypeInfo;
  if ( (BYTE3(BattleLogicFunction___c_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !BattleLogicFunction___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BattleLogicFunction___c_TypeInfo);
    v116 = BattleLogicFunction___c_TypeInfo;
  }
  static_fields = v116->static_fields;
  _9__34_0 = (System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *)static_fields->__9__34_0;
  if ( !_9__34_0 )
  {
    if ( (BYTE3(v116->vtable._0_Equals.methodPtr) & 4) != 0 && !v116->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v116);
      static_fields = BattleLogicFunction___c_TypeInfo->static_fields;
    }
    v119 = (Il2CppObject *)static_fields->__9;
    _9__34_0 = (System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *)sub_B170CC(
                                                                                    System_Func_BattleLogicFunctionProcess_FunctionUnitCheck__bool__TypeInfo,
                                                                                    v111,
                                                                                    v112,
                                                                                    v113,
                                                                                    v114);
    System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool____ctor(
      _9__34_0,
      v119,
      Method_BattleLogicFunction___c__procList_b__34_0__,
      (const MethodInfo_2B6AB40 *)Method_System_Func_BattleLogicFunctionProcess_FunctionUnitCheck__bool___ctor__);
    v120 = BattleLogicFunction___c_TypeInfo->static_fields;
    v120->__9__34_0 = (struct System_Func_BattleLogicFunctionProcess_FunctionUnitCheck__bool__o *)_9__34_0;
    sub_B16F98(
      (BattleServantConfConponent_o *)&v120->__9__34_0,
      (System_Int32_array **)_9__34_0,
      v121,
      v122,
      v123,
      v124,
      v125,
      v126);
  }
  if ( !BasicHelper__Any_USFGOPlayBgmEventConditional_CondBGM_(
          funcUnitArray_k__BackingField,
          (System_Func_T__bool__o *)_9__34_0,
          (const MethodInfo_18B6074 *)Method_BasicHelper_Any_BattleLogicFunctionProcess_FunctionUnitCheck___) )
    action->fields.isSuccessTargetSelection = 1;
  v131 = BattleLogicFunction___c_TypeInfo;
  v132 = (System_Collections_Generic_IEnumerable_TSource__o *)args->fields._funcUnitArray_k__BackingField;
  if ( (BYTE3(BattleLogicFunction___c_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !BattleLogicFunction___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BattleLogicFunction___c_TypeInfo);
    v131 = BattleLogicFunction___c_TypeInfo;
  }
  v133 = v131->static_fields;
  _9__34_1 = (System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *)v133->__9__34_1;
  if ( !_9__34_1 )
  {
    if ( (BYTE3(v131->vtable._0_Equals.methodPtr) & 4) != 0 && !v131->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v131);
      v133 = BattleLogicFunction___c_TypeInfo->static_fields;
    }
    v135 = (Il2CppObject *)v133->__9;
    _9__34_1 = (System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *)sub_B170CC(
                                                                                    System_Func_BattleLogicFunctionProcess_FunctionUnitCheck__bool__TypeInfo,
                                                                                    v127,
                                                                                    v128,
                                                                                    v129,
                                                                                    v130);
    System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool____ctor(
      _9__34_1,
      v135,
      Method_BattleLogicFunction___c__procList_b__34_1__,
      (const MethodInfo_2B6AB40 *)Method_System_Func_BattleLogicFunctionProcess_FunctionUnitCheck__bool___ctor__);
    v136 = BattleLogicFunction___c_TypeInfo->static_fields;
    v136->__9__34_1 = (struct System_Func_BattleLogicFunctionProcess_FunctionUnitCheck__bool__o *)_9__34_1;
    sub_B16F98(
      (BattleServantConfConponent_o *)&v136->__9__34_1,
      (System_Int32_array **)_9__34_1,
      v137,
      v138,
      v139,
      v140,
      v141,
      v142);
  }
  action->fields.isSkillCopyFunctionOnly = System_Linq_Enumerable__All_WarBoardManager_WarBoardOnboardSkillTarget_(
                                             v132,
                                             (System_Func_TSource__bool__o *)_9__34_1,
                                             (const MethodInfo_18C70D4 *)Method_System_Linq_Enumerable_All_BattleLogicFunctionProcess_FunctionUnitCheck___);
  ActSetWeight = BattleLogicFunction_ProcListInArgs__MatchSkillType(args, 1, 0LL);
  if ( (ActSetWeight & 1) != 0 )
  {
    v145 = this->fields.data;
    v146 = (SkillValueUpApplierPlayerMaster_o *)sub_B170CC(
                                                  SkillValueUpApplierPlayerMaster_TypeInfo,
                                                  v100,
                                                  v101,
                                                  v143,
                                                  v144);
    SkillValueUpApplierPlayerMaster___ctor(v146, v145, 0LL);
    if ( v146 )
    {
      ActSetWeight = ((__int64 (__fastcall *)(SkillValueUpApplierPlayerMaster_o *, Il2CppMethodPointer))v146->klass->vtable._4_Init.method)(
                       v146,
                       v146->klass->vtable._5_ApplyTo.methodPtr);
      v447 = 1;
    }
    else
    {
      v447 = 0;
    }
  }
  else
  {
    v447 = 0;
    v146 = 0LL;
  }
  v147 = args->fields._funcUnitArray_k__BackingField;
  if ( !v147 )
    goto LABEL_401;
  v148 = v147->max_length;
  if ( v148 >= 1 )
  {
    v149 = 0;
    v443[8] = 0;
    v444 = v146;
    v446 = args->fields._funcUnitArray_k__BackingField;
    *(_QWORD *)v443 = actionSvtData == 0LL || !isTreasureDvc;
    while ( 1 )
    {
      if ( v149 >= v148 )
        goto LABEL_402;
      v150 = &v147->obj.klass + (int)v149;
      v151 = (BattleLogicFunctionProcess_FunctionUnitCheck_o *)v150[4];
      if ( !v151 )
        goto LABEL_401;
      v152 = BattleLogicFunctionProcess_FunctionUnitCheck__get_FuncIndex(
               (BattleLogicFunctionProcess_FunctionUnitCheck_o *)v150[4],
               0LL);
      dataVals_k__BackingField = v151->fields._dataVals_k__BackingField;
      funcIdx = v152;
      if ( !dataVals_k__BackingField )
        goto LABEL_401;
      funcEnt = dataVals_k__BackingField->fields.funcEnt;
      funcUnit = v151;
      ActSetWeight = BattleLogicFunctionProcess_FunctionUnitCheck__checkCondtion(v151, action, 0LL);
      if ( (ActSetWeight & 1) != 0 )
      {
        if ( v447 )
        {
          if ( !v444 )
            goto LABEL_401;
          ActSetWeight = ((__int64 (__fastcall *)(SkillValueUpApplierPlayerMaster_o *, BattleLogicFunctionProcess_FunctionUnitCheck_o *, Il2CppMethodPointer))v444->klass->vtable._5_ApplyTo.method)(
                           v444,
                           v151,
                           v444->klass->vtable._6_CreateFuncParamValueUpInfo.methodPtr);
        }
        v449 = v149;
        if ( isCreateSideEffect )
        {
          if ( !funcEnt )
            goto LABEL_401;
          ActSetWeight = FuncList__isDamage(funcEnt->fields.funcType, 0LL);
          if ( (ActSetWeight & 1) != 0 )
          {
            v156 = BattleLogicFunction___c_TypeInfo;
            funcTargetArray_k__BackingField = (System_Collections_Generic_IEnumerable_TSource__o *)v151->fields._funcTargetArray_k__BackingField;
            if ( (BYTE3(BattleLogicFunction___c_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
              && !BattleLogicFunction___c_TypeInfo->_2.cctor_finished )
            {
              j_il2cpp_runtime_class_init_0(BattleLogicFunction___c_TypeInfo);
              v156 = BattleLogicFunction___c_TypeInfo;
            }
            v158 = v156->static_fields;
            _9__34_2 = (System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *)v158->__9__34_2;
            if ( !_9__34_2 )
            {
              if ( (BYTE3(v156->vtable._0_Equals.methodPtr) & 4) != 0 && !v156->_2.cctor_finished )
              {
                j_il2cpp_runtime_class_init_0(v156);
                v158 = BattleLogicFunction___c_TypeInfo->static_fields;
              }
              v160 = (Il2CppObject *)v158->__9;
              _9__34_2 = (System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *)sub_B170CC(
                                                                                              System_Func_BattleLogicFunctionProcess_FunctionTargetCheck__bool__TypeInfo,
                                                                                              v100,
                                                                                              v101,
                                                                                              v155,
                                                                                              v154);
              System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool____ctor(
                _9__34_2,
                v160,
                Method_BattleLogicFunction___c__procList_b__34_2__,
                (const MethodInfo_2B6AB40 *)Method_System_Func_BattleLogicFunctionProcess_FunctionTargetCheck__bool___ctor__);
              v161 = BattleLogicFunction___c_TypeInfo->static_fields;
              v161->__9__34_2 = (struct System_Func_BattleLogicFunctionProcess_FunctionTargetCheck__bool__o *)_9__34_2;
              sub_B16F98(
                (BattleServantConfConponent_o *)&v161->__9__34_2,
                (System_Int32_array **)_9__34_2,
                v162,
                v163,
                v164,
                v165,
                v166,
                v167);
            }
            v172 = System_Linq_Enumerable__Where_WarBoardManager_WarBoardOnboardSkillTarget_(
                     funcTargetArray_k__BackingField,
                     (System_Func_TSource__bool__o *)_9__34_2,
                     (const MethodInfo_19C8FE8 *)Method_System_Linq_Enumerable_Where_BattleLogicFunctionProcess_FunctionTargetCheck___);
            v173 = BattleLogicFunction___c_TypeInfo;
            if ( (BYTE3(BattleLogicFunction___c_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
              && !BattleLogicFunction___c_TypeInfo->_2.cctor_finished )
            {
              j_il2cpp_runtime_class_init_0(BattleLogicFunction___c_TypeInfo);
              v173 = BattleLogicFunction___c_TypeInfo;
            }
            v174 = v173->static_fields;
            _9__34_3 = (System_Func_BattleLogicBuff_ReduceHpProcess_BuffInfo__int__o *)v174->__9__34_3;
            if ( !_9__34_3 )
            {
              if ( (BYTE3(v173->vtable._0_Equals.methodPtr) & 4) != 0 && !v173->_2.cctor_finished )
              {
                j_il2cpp_runtime_class_init_0(v173);
                v174 = BattleLogicFunction___c_TypeInfo->static_fields;
              }
              v176 = (Il2CppObject *)v174->__9;
              _9__34_3 = (System_Func_BattleLogicBuff_ReduceHpProcess_BuffInfo__int__o *)sub_B170CC(
                                                                                           System_Func_BattleLogicFunctionProcess_FunctionTargetCheck__int__TypeInfo,
                                                                                           v168,
                                                                                           v169,
                                                                                           v170,
                                                                                           v171);
              System_Func_BattleLogicBuff_ReduceHpProcess_BuffInfo__int____ctor(
                _9__34_3,
                v176,
                Method_BattleLogicFunction___c__procList_b__34_3__,
                (const MethodInfo_2B6B6EC *)Method_System_Func_BattleLogicFunctionProcess_FunctionTargetCheck__int___ctor__);
              v177 = BattleLogicFunction___c_TypeInfo->static_fields;
              v177->__9__34_3 = (struct System_Func_BattleLogicFunctionProcess_FunctionTargetCheck__int__o *)_9__34_3;
              sub_B16F98(
                (BattleServantConfConponent_o *)&v177->__9__34_3,
                (System_Int32_array **)_9__34_3,
                v178,
                v179,
                v180,
                v181,
                v182,
                v183);
            }
            v184 = (System_Collections_Generic_IEnumerable_TSource__o *)System_Linq_Enumerable__Select_BattleLogicBuff_ReduceHpProcess_BuffInfo__int_(
                                                                          v172,
                                                                          (System_Func_TSource__TResult__o *)_9__34_3,
                                                                          (const MethodInfo_19C05C4 *)Method_System_Linq_Enumerable_Select_BattleLogicFunctionProcess_FunctionTargetCheck__int___);
            v185 = System_Linq_Enumerable__ToArray_int_(
                     v184,
                     (const MethodInfo_19C4A28 *)Method_System_Linq_Enumerable_ToArray_int___);
            v186 = FuncList__Check(26, funcEnt->fields.funcType, 0LL);
            v191 = (BattleLogicFunction_PreAttackSideEffectMakeArgument_o *)sub_B170CC(
                                                                              BattleLogicFunction_PreAttackSideEffectMakeArgument_TypeInfo,
                                                                              v187,
                                                                              v188,
                                                                              v189,
                                                                              v190);
            BattleLogicFunction_PreAttackSideEffectMakeArgument___ctor(v191, 0LL);
            if ( !v191 )
              goto LABEL_401;
            v192 = (BattleLogicFunction_SideEffectMakeArgument_o *)((__int64 (__fastcall *)(BattleLogicFunction_PreAttackSideEffectMakeArgument_o *, System_Int32_array *, Il2CppMethodPointer))v191->klass->vtable._6_Init.method)(
                                                                     v191,
                                                                     v185,
                                                                     v191->klass->vtable._7_MakeOnlyMainArgument.methodPtr);
            BattleLogicFunction__setAttackSideEffect(this, action, v108, v186 || isTreasureDvc, v192, v193);
          }
        }
        v194 = funcUnit->fields._funcTargetArray_k__BackingField;
        if ( !v194 )
          goto LABEL_401;
        v195 = v194->max_length;
        p_funcType = &funcEnt->fields.funcType;
        if ( v195 >= 1 )
        {
          for ( i = 0; i < v195; ++i )
          {
            if ( i >= (unsigned int)v195 )
              goto LABEL_402;
            v372 = v194->m_Items[i];
            if ( !v372 )
              goto LABEL_401;
            BattleLogicFunction__SetTargetFuncList(
              this,
              v372->fields._targetId_k__BackingField,
              action,
              dataVals_k__BackingField,
              v154);
            if ( !v372->fields._result_k__BackingField )
            {
              NoEffectObject = BattleLogicFunctionProcess_FunctionTargetCheck__getInvalidObject(v372, 0LL);
              goto LABEL_286;
            }
            v373 = this->fields.data;
            if ( !v373 )
              goto LABEL_401;
            targetId_k__BackingField = v372->fields._targetId_k__BackingField;
            ServantData = BattleData__getServantData(v373, targetId_k__BackingField, 0LL);
            if ( !ServantData )
              goto LABEL_401;
            v376 = ServantData;
            if ( BattleServantData__CheckNotTargetSkill(ServantData, skillId, 0LL) )
            {
              NoEffectObject = BattleLogicFunction__getNoEffectObject(
                                 this,
                                 v376->fields.uniqueId,
                                 funcIdx,
                                 dataVals_k__BackingField,
                                 v92,
                                 0LL,
                                 0LL,
                                 v377);
LABEL_286:
              BattleActionData__addAction(action, NoEffectObject, 0LL);
              goto LABEL_334;
            }
            action->fields.funcResult = 1;
            args->fields.tdCommandTypeChange = -1;
            if ( !funcEnt )
              goto LABEL_401;
            ActSetWeight = FuncList__Check(1, *p_funcType, 0LL);
            if ( (ActSetWeight & 1) != 0
              || (ActSetWeight = FuncList__Check(16, *p_funcType, 0LL), (ActSetWeight & 1) != 0) )
            {
              vals = funcEnt->fields.vals;
              if ( !vals )
                goto LABEL_401;
              if ( !vals->max_length )
                goto LABEL_402;
              if ( !MasterData_WarQuestSelectionMaster )
                goto LABEL_401;
              Entity = DataMasterBase_WarMaster__WarEntity__int___GetEntity(
                         MasterData_WarQuestSelectionMaster,
                         vals->m_Items[1],
                         (const MethodInfo_266F388 *)Method_DataMasterBase_BuffMaster__BuffEntity__int__GetEntity__);
              if ( !Entity )
                goto LABEL_401;
              commandType = 1;
              switch ( *(&Entity->fields.id + 1) )
              {
                case 0x8F:
                  commandType = action->fields.commandType;
                  goto LABEL_300;
                case 0x91:
                  goto LABEL_300;
                case 0x92:
                  commandType = 2;
                  goto LABEL_300;
                case 0x93:
                  commandType = 3;
LABEL_300:
                  args->fields.tdCommandTypeChange = commandType;
                  break;
                default:
                  break;
              }
              v382 = FuncList__Check(16, *p_funcType, 0LL);
              BattleLogicFunction__functionAddState(this, action, v372, args, v382, v383);
              goto LABEL_322;
            }
            if ( FuncList__Check(2, *p_funcType, 0LL) )
            {
              v206 = BattleLogicFunction__functionSubState(
                       this,
                       targetId_k__BackingField,
                       funcEnt,
                       dataVals_k__BackingField,
                       funcIdx,
                       v92,
                       &subBuffInfo,
                       args,
                       overwriteLossHp);
              goto LABEL_321;
            }
            if ( FuncList__Check(3, *p_funcType, 0LL) )
            {
              actorId = action->fields.actorId;
              uniqueId = v376->fields.uniqueId;
              isSafeDamage = BattleLogicFunction__isSafeDamage(
                               this,
                               dataVals_k__BackingField,
                               targetId_k__BackingField,
                               v384);
              v388 = uniqueId;
              v92 = isCommandSideEffect;
              v206 = BattleLogicFunction__functionDamage(
                       this,
                       actorId,
                       v388,
                       dataVals_k__BackingField,
                       funcIdx,
                       action,
                       isSafeDamage,
                       v389);
              goto LABEL_321;
            }
            if ( FuncList__Check(4, *p_funcType, 0LL) )
            {
              v391 = action->fields.actorId;
              v392 = v376->fields.uniqueId;
              v393 = 1;
LABEL_320:
              v206 = BattleLogicFunction__functionNPDamage(
                       this,
                       v391,
                       v392,
                       dataVals_k__BackingField,
                       funcIdx,
                       v393,
                       action,
                       v390);
              goto LABEL_321;
            }
            if ( FuncList__Check(14, *p_funcType, 0LL) )
            {
              v391 = action->fields.actorId;
              v392 = v376->fields.uniqueId;
              v393 = 2;
              goto LABEL_320;
            }
            if ( FuncList__Check(15, *p_funcType, 0LL) )
            {
              v391 = action->fields.actorId;
              v392 = v376->fields.uniqueId;
              v393 = 3;
              goto LABEL_320;
            }
            if ( FuncList__Check(18, *p_funcType, 0LL) )
            {
              v391 = action->fields.actorId;
              v392 = v376->fields.uniqueId;
              v393 = 4;
              goto LABEL_320;
            }
            if ( FuncList__Check(27, *p_funcType, 0LL) )
            {
              v391 = action->fields.actorId;
              v392 = v376->fields.uniqueId;
              v393 = 7;
              goto LABEL_320;
            }
            if ( FuncList__Check(21, *p_funcType, 0LL) )
            {
              v391 = action->fields.actorId;
              v392 = v376->fields.uniqueId;
              v393 = 5;
              goto LABEL_320;
            }
            if ( FuncList__Check(22, *p_funcType, 0LL) )
            {
              v391 = action->fields.actorId;
              v392 = v376->fields.uniqueId;
              v393 = 6;
              goto LABEL_320;
            }
            if ( FuncList__Check(28, *p_funcType, 0LL) )
            {
              v391 = action->fields.actorId;
              v392 = v376->fields.uniqueId;
              v393 = 8;
              goto LABEL_320;
            }
            if ( FuncList__Check(5, *p_funcType, 0LL) )
            {
              v198 = this->fields.data;
              count = DataVals__GetValue(dataVals_k__BackingField, 0LL);
              isMultipleGainStar = DataVals__isMultipleGainStar(dataVals_k__BackingField, 0LL);
              if ( !v198 )
                goto LABEL_401;
              BattleData__addCriticalPoint(v198, count, isMultipleGainStar, 0LL);
LABEL_93:
              FunctionObject = BattleLogicFunction__getFunctionObject(
                                 v200,
                                 funcEnt,
                                 v376->fields.uniqueId,
                                 funcIdx,
                                 v92,
                                 0LL,
                                 v201);
              if ( !FunctionObject )
                goto LABEL_401;
              FunctionObject->fields.procType = 4;
              BattleActionData__setBuffData(action, FunctionObject, dataVals_k__BackingField, 0LL);
              v205 = this->fields.data;
              if ( !v205 )
                goto LABEL_401;
              BattleData__AddPerformedVals(v205, dataVals_k__BackingField, 0LL);
              goto LABEL_322;
            }
            if ( FuncList__Check(31, *p_funcType, 0LL) )
            {
              v202 = this->fields.data;
              Value = DataVals__GetValue(dataVals_k__BackingField, 0LL);
              if ( !v202 )
                goto LABEL_401;
              BattleData__lossCriticalPoint(v202, Value, 0LL);
              goto LABEL_93;
            }
            if ( FuncList__Check(6, *p_funcType, 0LL) )
            {
              v206 = BattleLogicFunction__functionGainHp(
                       this,
                       action->fields.actorId,
                       targetId_k__BackingField,
                       funcEnt,
                       dataVals_k__BackingField,
                       funcIdx,
                       v92,
                       -1,
                       overwriteLossHp);
LABEL_321:
              BattleActionData__addAction(action, v206, 0LL);
              goto LABEL_322;
            }
            if ( FuncList__Check(17, *p_funcType, 0LL) )
            {
              v206 = BattleLogicFunction__functionGainHpPer(
                       this,
                       action->fields.actorId,
                       targetId_k__BackingField,
                       funcEnt,
                       dataVals_k__BackingField,
                       funcIdx,
                       v92,
                       v207);
              goto LABEL_321;
            }
            if ( FuncList__Check(7, *p_funcType, 0LL) )
            {
              if ( BattleServantData__checkPlayer(v376, 0LL) )
              {
                isUnaffected = DataVals__isUnaffected(dataVals_k__BackingField, 0LL);
                CorrectedValueFuncGainNp = DataVals__GetValue(dataVals_k__BackingField, 0LL);
                if ( !isUnaffected )
                  CorrectedValueFuncGainNp = BattleServantData__getCorrectedValueFuncGainNp(
                                               v376,
                                               CorrectedValueFuncGainNp,
                                               0LL);
                isGainNp = BattleServantData__isGainNp(v376, 1, 0LL);
                goto LABEL_105;
              }
            }
            else if ( FuncList__Check(8, *p_funcType, 0LL) )
            {
              if ( BattleServantData__checkPlayer(v376, 0LL) )
              {
                v217 = DataVals__GetValue(dataVals_k__BackingField, 0LL);
                v218 = (BattleLogicFunction_o *)BattleServantData__addNp(v376, -v217, 0, 0LL);
                v219 = (int)v218;
                v221 = BattleLogicFunction__getFunctionObject(
                         v218,
                         funcEnt,
                         v376->fields.uniqueId,
                         funcIdx,
                         isCommandSideEffect,
                         0LL,
                         v220);
                if ( !v221 )
                  goto LABEL_401;
                v216 = v221;
                v221->fields.procType = 3;
                BattleActionData_BuffData__setSaveNp(v221, v219, 0LL);
                goto LABEL_113;
              }
            }
            else
            {
              if ( FuncList__Check(9, *p_funcType, 0LL) )
              {
                v222 = DataVals__GetValue2(dataVals_k__BackingField, 0LL) - 1;
                TargetList = DataVals__GetTargetList(dataVals_k__BackingField, 0LL);
                v224 = DataVals__GetValue(dataVals_k__BackingField, 0LL);
                v225 = BattleServantData__skillChageShorten(v376, v224, 0, v222, TargetList, 0LL);
                goto LABEL_119;
              }
              if ( FuncList__Check(10, *p_funcType, 0LL) )
              {
                v227 = DataVals__GetValue2(dataVals_k__BackingField, 0LL) - 1;
                v228 = DataVals__GetTargetList(dataVals_k__BackingField, 0LL);
                v229 = DataVals__GetValue(dataVals_k__BackingField, 0LL);
                v225 = BattleServantData__skillChageExtend(v376, v229, 999, v227, v228, 0LL);
LABEL_119:
                v230 = v376->fields.uniqueId;
                if ( !v225 )
                {
                  v92 = isCommandSideEffect;
                  v234 = this;
                  v235 = v376->fields.uniqueId;
                  goto LABEL_207;
                }
                goto LABEL_120;
              }
              if ( FuncList__Check(12, *p_funcType, 0LL) )
              {
                v237 = action->fields.actorId;
                v238 = BattleLogicFunction__isSafeDamage(this, dataVals_k__BackingField, targetId_k__BackingField, v236);
                isRandomDamage = 1;
                v239 = isCommandSideEffect;
                mainAction = action;
                v240 = v238;
                v241 = isCommandSideEffect;
                overwriteLossHpa = -1;
                goto LABEL_125;
              }
              if ( FuncList__Check(25, *p_funcType, 0LL) )
              {
                v92 = isCommandSideEffect;
                v243 = action->fields.actorId;
                isRandomDamage = 1;
                mainAction = action;
                v241 = isCommandSideEffect;
                v240 = 1;
                overwriteLossHpa = -1;
                v242 = this;
                goto LABEL_128;
              }
              if ( FuncList__Check(13, *p_funcType, 0LL) )
              {
                v92 = isCommandSideEffect;
                v244 = action->fields.actorId;
                v245 = funcEnt;
                v246 = funcIdx;
                v247 = isCommandSideEffect;
                v248 = this;
                v249 = targetId_k__BackingField;
                v250 = dataVals_k__BackingField;
                v251 = 0;
LABEL_131:
                v206 = BattleLogicFunction__functionInstantDeath(
                         v248,
                         v244,
                         v249,
                         v245,
                         v250,
                         v246,
                         v247,
                         v251,
                         overwriteLossHp);
                goto LABEL_321;
              }
              if ( FuncList__Check(19, *p_funcType, 0LL) )
              {
                v92 = isCommandSideEffect;
                v206 = BattleLogicFunction__functionHastenNpTurn(
                         this,
                         targetId_k__BackingField,
                         funcEnt,
                         dataVals_k__BackingField,
                         funcIdx,
                         isCommandSideEffect,
                         -1,
                         v252);
                goto LABEL_321;
              }
              if ( FuncList__Check(20, *p_funcType, 0LL) )
              {
                v92 = isCommandSideEffect;
                v206 = BattleLogicFunction__functionDelayNpTurn(
                         this,
                         targetId_k__BackingField,
                         funcEnt,
                         dataVals_k__BackingField,
                         funcIdx,
                         isCommandSideEffect,
                         &absorptionCount,
                         v253);
                goto LABEL_321;
              }
              if ( FuncList__Check(56, *p_funcType, 0LL) )
              {
                v92 = isCommandSideEffect;
                v206 = BattleLogicFunction__functionAbsorbNpTurn(
                         this,
                         targetId_k__BackingField,
                         funcEnt,
                         action,
                         v372,
                         isCommandSideEffect,
                         v254);
                goto LABEL_321;
              }
              if ( FuncList__Check(23, *p_funcType, 0LL) )
              {
                v260 = BattleLogicFunction__functionResetCommandCard(this, v255, v256, v257, v258, v259);
LABEL_140:
                BattleActionData__addAction(action, v260, 0LL);
                v261 = this->fields.data;
                if ( !v261 )
                  goto LABEL_401;
                BattleData__AddPerformedVals(v261, dataVals_k__BackingField, 0LL);
                goto LABEL_114;
              }
              if ( !FuncList__Check(24, *p_funcType, 0LL) )
              {
                if ( FuncList__Check(109, *p_funcType, 0LL) )
                {
                  v269 = BattleLogicFunction__functionTransformServant(
                           this,
                           targetId_k__BackingField,
                           v267,
                           dataVals_k__BackingField,
                           funcIdx,
                           v268);
LABEL_151:
                  BattleActionData__addAction(action, v269, 0LL);
                  goto LABEL_114;
                }
                if ( FuncList__Check(26, *p_funcType, 0LL) )
                {
                  v271 = BattleLogicFunction__functionReflection(
                           this,
                           action->fields.actorId,
                           v376->fields.uniqueId,
                           dataVals_k__BackingField,
                           funcIdx,
                           v270);
                  BattleActionData__addAction(action, v271, 0LL);
                  v443[4] = 1;
                  goto LABEL_114;
                }
                if ( FuncList__Check(29, *p_funcType, 0LL) )
                {
                  v92 = isCommandSideEffect;
                  v206 = BattleLogicFunction__functionCallServant(
                           this,
                           action->fields.actorId,
                           v272,
                           dataVals_k__BackingField,
                           funcIdx,
                           isCommandSideEffect,
                           v273);
                  goto LABEL_321;
                }
                if ( FuncList__Check(30, *p_funcType, 0LL) )
                {
                  v279 = BattleLogicFunction__functionPtShuffle(this, v274, v275, v276, v277, v278);
                  BattleActionData__addAction(action, v279, 0LL);
                  v280 = this->fields.data;
                  if ( !v280 )
                    goto LABEL_401;
                  BattleData__AddPerformedVals(v280, dataVals_k__BackingField, 0LL);
                  goto LABEL_157;
                }
                if ( FuncList__Check(32, *p_funcType, 0LL) )
                {
                  v269 = BattleLogicFunction__functionChangeServant(
                           this,
                           action->fields.actorId,
                           targetId_k__BackingField,
                           v281,
                           dataVals_k__BackingField,
                           v282,
                           v283);
                  goto LABEL_151;
                }
                v284 = FuncList__Check(33, *p_funcType, 0LL);
                if ( v284 )
                {
                  v269 = BattleLogicFunction__functionChangeBg(
                           (BattleLogicFunction_o *)v284,
                           action->fields.actorId,
                           v285,
                           dataVals_k__BackingField,
                           v286,
                           v287);
                  goto LABEL_151;
                }
                if ( FuncList__Check(34, *p_funcType, 0LL) )
                {
                  v289 = action->fields.actorId;
                  v290 = v376->fields.uniqueId;
                  v291 = BattleLogicFunction__isSafeDamage(
                           this,
                           dataVals_k__BackingField,
                           targetId_k__BackingField,
                           v288);
                  goto LABEL_164;
                }
                if ( FuncList__Check(122, *p_funcType, 0LL) )
                {
                  v294 = action->fields.actorId;
                  v295 = v376->fields.uniqueId;
                  v291 = 1;
                  v293 = this;
                  goto LABEL_167;
                }
                if ( FuncList__Check(35, *p_funcType, 0LL) )
                {
                  v376->fields.isWithdraw = 1;
                  goto LABEL_114;
                }
                if ( FuncList__Check(36, *p_funcType, 0LL) )
                {
                  v302 = this->fields.data;
                  if ( !v302 )
                    goto LABEL_401;
                  draw_commandlist = (System_Int32_array **)v302->fields.draw_commandlist;
                  v302->fields.fixedCommands = (struct BattleCommandData_array *)draw_commandlist;
                  sub_B16F98(
                    (BattleServantConfConponent_o *)&v302->fields.fixedCommands,
                    draw_commandlist,
                    v296,
                    v297,
                    v298,
                    v299,
                    v300,
                    v301);
                  goto LABEL_173;
                }
                if ( FuncList__Check(37, *p_funcType, 0LL)
                  || FuncList__Check(38, *p_funcType, 0LL)
                  || FuncList__Check(39, *p_funcType, 0LL)
                  || FuncList__Check(40, *p_funcType, 0LL) )
                {
                  v304 = DataVals__GetValue(dataVals_k__BackingField, 0LL);
                  if ( FuncList__Check(37, *p_funcType, 0LL) || FuncList__Check(39, *p_funcType, 0LL) )
                    v304 = -v304;
                  if ( FuncList__Check(37, *p_funcType, 0LL) || FuncList__Check(38, *p_funcType, 0LL) )
                  {
                    v304 *= 2;
                    counta = 1;
                  }
                  else
                  {
                    counta = 0;
                  }
                  isParam = DataVals__isParam(dataVals_k__BackingField, 90, 0LL);
                  v306 = DataVals__GetTargetList(dataVals_k__BackingField, 0LL);
                  v225 = BattleServantData__ChangeBuffValue(v376, v304, v306, counta, 1, isParam, 0LL);
                  goto LABEL_119;
                }
                if ( FuncList__Check(41, *p_funcType, 0LL) )
                {
                  countb = this->fields.data;
                  v307 = DataVals__GetValue(dataVals_k__BackingField, 0LL);
                  v312 = (Generator_BGMFromChangeBGMFunc_o *)sub_B170CC(
                                                               Generator_BGMFromChangeBGMFunc_TypeInfo,
                                                               v308,
                                                               v309,
                                                               v310,
                                                               v311);
                  Generator_BGMFromChangeBGMFunc___ctor(v312, countb, v307, dataVals_k__BackingField, 0, 0LL);
                  BattleLogicFunction__FunctionChangeBgm(this, args, (Generator_BGM_o *)v312, v313);
                  goto LABEL_114;
                }
                v314 = FuncList__Check(42, *p_funcType, 0LL);
                if ( v314 )
                {
                  v92 = isCommandSideEffect;
                  v231 = BattleLogicFunction__getFunctionObject(
                           (BattleLogicFunction_o *)v314,
                           funcEnt,
                           v376->fields.uniqueId,
                           funcIdx,
                           isCommandSideEffect,
                           0LL,
                           v315);
                  v232 = action;
                  v233 = 0LL;
                  goto LABEL_121;
                }
                if ( FuncList__Check(43, *p_funcType, 0LL) )
                {
                  v92 = isCommandSideEffect;
                  v206 = BattleLogicFunction__functionResurrection(
                           this,
                           v376->fields.uniqueId,
                           funcIdx,
                           funcEnt,
                           dataVals_k__BackingField,
                           isCommandSideEffect,
                           v316);
                  goto LABEL_321;
                }
                if ( !FuncList__Check(44, *p_funcType, 0LL) && !FuncList__Check(133, *p_funcType, 0LL) )
                {
                  if ( FuncList__Check(45, *p_funcType, 0LL) )
                  {
                    v376->fields.isSystemAlive = DataVals__GetValue(dataVals_k__BackingField, 0LL) == 1;
                    goto LABEL_114;
                  }
                  if ( FuncList__Check(46, *p_funcType, 0LL) )
                  {
                    v92 = isCommandSideEffect;
                    v244 = action->fields.actorId;
                    v245 = funcEnt;
                    v246 = funcIdx;
                    v247 = isCommandSideEffect;
                    v251 = 1;
                    v248 = this;
                    v249 = targetId_k__BackingField;
                    v250 = dataVals_k__BackingField;
                    goto LABEL_131;
                  }
                  if ( FuncList__Check(47, *p_funcType, 0LL) )
                  {
                    v321 = action->fields.actorId;
                    v322 = v376->fields.uniqueId;
                    v323 = 9;
                  }
                  else
                  {
                    if ( FuncList__Check(48, *p_funcType, 0LL) )
                    {
                      v269 = BattleLogicFunction__functionGainNpFromTargets(this, args, action, v372, v324);
                      goto LABEL_151;
                    }
                    if ( FuncList__Check(49, *p_funcType, 0LL) )
                    {
                      v269 = BattleLogicFunction__functionGainHpFromTargets(this, args, action, v372, v325);
                      goto LABEL_151;
                    }
                    v326 = FuncList__Check(50, *p_funcType, 0LL);
                    if ( v326 || (v326 = FuncList__Check(51, *p_funcType, 0LL)) )
                    {
                      v328 = *p_funcType == 51;
                      if ( *p_funcType == 50 )
                      {
                        v326 = BattleLogicFunction__isSafeDamage(
                                 this,
                                 dataVals_k__BackingField,
                                 targetId_k__BackingField,
                                 v327);
                        v328 = v326;
                      }
                      v237 = action->fields.actorId;
                      HpPerValue = BattleLogicFunction__getHpPerValue(
                                     (BattleLogicFunction_o *)v326,
                                     dataVals_k__BackingField,
                                     v376,
                                     v327);
                      v239 = isCommandSideEffect;
                      v240 = v328;
                      mainAction = action;
                      isRandomDamage = 0;
                      v241 = isCommandSideEffect;
                      overwriteLossHpa = HpPerValue;
LABEL_125:
                      v242 = this;
                      v243 = v237;
                      v92 = v239;
LABEL_128:
                      v206 = BattleLogicFunction__functionlossHp(
                               v242,
                               v243,
                               targetId_k__BackingField,
                               funcEnt,
                               dataVals_k__BackingField,
                               funcIdx,
                               v240,
                               v241,
                               overwriteLossHpa,
                               isRandomDamage,
                               mainAction,
                               v437);
                      goto LABEL_321;
                    }
                    if ( FuncList__Check(52, *p_funcType, 0LL) )
                    {
                      v331 = 1;
                      v332 = this;
                      v333 = dataVals_k__BackingField;
LABEL_226:
                      BattleLogicFunction__UpdateUserEquipSkillChargeTurn(v332, v333, v331, v330);
                      goto LABEL_114;
                    }
                    if ( FuncList__Check(62, *p_funcType, 0LL) )
                    {
                      v332 = this;
                      v333 = dataVals_k__BackingField;
                      v331 = 0;
                      goto LABEL_226;
                    }
                    if ( FuncList__Check(53, *p_funcType, 0LL) )
                    {
                      v338 = (Generator_BGFromQuickChangeBGFunc_o *)sub_B170CC(
                                                                      Generator_BGFromQuickChangeBGFunc_TypeInfo,
                                                                      v334,
                                                                      v335,
                                                                      v336,
                                                                      v337);
                      Generator_BGFromQuickChangeBGFunc___ctor(v338, dataVals_k__BackingField, 0LL);
                      BattleLogicFunction__FunctionQuickChangeBG(this, args, (Generator_Background_o *)v338, v339);
                      goto LABEL_114;
                    }
                    if ( FuncList__Check(54, *p_funcType, 0LL) )
                    {
                      svtdata = v376->fields.svtdata;
                      if ( !svtdata )
                        goto LABEL_401;
                      if ( ServantEntity__isInvalidSkillShift(svtdata, 0LL) )
                      {
                        v235 = v372->fields._targetId_k__BackingField;
LABEL_206:
                        v92 = isCommandSideEffect;
                        v234 = this;
LABEL_207:
                        v206 = BattleLogicFunction__getNoEffectObject(
                                 v234,
                                 v235,
                                 funcIdx,
                                 dataVals_k__BackingField,
                                 v92,
                                 0LL,
                                 0LL,
                                 v211);
                        goto LABEL_321;
                      }
                      Param = DataVals__GetParam(dataVals_k__BackingField, 53, 0, 0LL);
                      BattleLogicFunction__functionShiftServant(this, action, v376, Param, v342);
                      goto LABEL_114;
                    }
                    if ( FuncList__Check(55, *p_funcType, 0LL) )
                    {
                      v321 = action->fields.actorId;
                      v322 = v376->fields.uniqueId;
                      v323 = 10;
                    }
                    else
                    {
                      if ( FuncList__Check(57, *p_funcType, 0LL) )
                      {
                        v376->fields.deadtype = DataVals__GetValue(dataVals_k__BackingField, 0LL);
                        goto LABEL_114;
                      }
                      if ( FuncList__Check(58, *p_funcType, 0LL) )
                      {
                        buffData = v376->fields.buffData;
                        v344 = DataVals__GetParam(dataVals_k__BackingField, 14, 0, 0LL);
                        if ( !buffData )
                          goto LABEL_401;
                        BattleBuffData__UpdateForceAllBuffNoAct(buffData, v344, 0LL);
LABEL_173:
                        v230 = v376->fields.uniqueId;
LABEL_120:
                        v92 = isCommandSideEffect;
                        v231 = BattleLogicFunction__getFunctionObject(
                                 (BattleLogicFunction_o *)v225,
                                 funcEnt,
                                 v230,
                                 funcIdx,
                                 isCommandSideEffect,
                                 0LL,
                                 v226);
                        v232 = action;
                        v233 = dataVals_k__BackingField;
LABEL_121:
                        BattleActionData__setBuffData(v232, v231, v233, 0LL);
                        goto LABEL_322;
                      }
                      if ( FuncList__Check(59, *p_funcType, 0LL) )
                      {
                        v349 = (BattleActionData_UpShiftGaugeData_o *)sub_B170CC(
                                                                        BattleActionData_UpShiftGaugeData_TypeInfo,
                                                                        v345,
                                                                        v346,
                                                                        v347,
                                                                        v348);
                        BattleActionData_UpShiftGaugeData___ctor(v349, 0LL);
LABEL_245:
                        BattleLogicFunction__functionBreakGaugeChange(
                          this,
                          action,
                          funcUnit,
                          v376,
                          (BattleActionData_BaseShiftGaugeData_o *)v349,
                          v350);
                        goto LABEL_114;
                      }
                      if ( FuncList__Check(60, *p_funcType, 0LL) )
                      {
                        v349 = (BattleActionData_UpShiftGaugeData_o *)sub_B170CC(
                                                                        BattleActionData_DownShiftGaugeData_TypeInfo,
                                                                        v351,
                                                                        v352,
                                                                        v353,
                                                                        v354);
                        BattleActionData_DownShiftGaugeData___ctor((BattleActionData_DownShiftGaugeData_o *)v349, 0LL);
                        goto LABEL_245;
                      }
                      if ( FuncList__Check(61, *p_funcType, 0LL) )
                      {
                        SubMember = BattleLogicFunction__FunctionMoveToLastSubMember(
                                      this,
                                      v376,
                                      funcEnt,
                                      v355,
                                      funcIdx,
                                      v356);
                        BattleActionData__addAction(action, SubMember, 0LL);
                        BattleActionData__UpdateForceBuffEffectAllTrue(action, 0LL);
LABEL_157:
                        v443[8] = 1;
                        goto LABEL_114;
                      }
                      if ( FuncList__Check(119, *p_funcType, 0LL) )
                      {
                        BattleLogicFunction__functionMovePosition(this, action, v376, v358);
                        goto LABEL_114;
                      }
                      if ( FuncList__Check(120, *p_funcType, 0LL) )
                      {
                        v92 = isCommandSideEffect;
                        BattleLogicFunction__functionRevival(
                          this,
                          action,
                          funcEnt,
                          dataVals_k__BackingField,
                          funcIdx,
                          isCommandSideEffect,
                          v359);
                        goto LABEL_322;
                      }
                      if ( !FuncList__Check(121, *p_funcType, 0LL) )
                      {
                        if ( FuncList__Check(124, *p_funcType, 0LL) )
                        {
                          BattleLogicFunction__functionMoveState(this, args, action, v372, v360);
                          goto LABEL_114;
                        }
                        if ( FuncList__Check(125, *p_funcType, 0LL) )
                        {
                          BattleLogicFunction__ChangeBGMCostume(this, dataVals_k__BackingField, action, v361);
                          goto LABEL_114;
                        }
                        v362 = FuncList__Check(126, *p_funcType, 0LL);
                        if ( v362 )
                        {
                          BattleLogicFunction__LossCommandSpell(
                            (BattleLogicFunction_o *)v362,
                            dataVals_k__BackingField,
                            action,
                            v363);
                          goto LABEL_114;
                        }
                        if ( FuncList__Check(127, *p_funcType, 0LL) )
                          goto LABEL_114;
                        if ( FuncList__Check(128, *p_funcType, 0LL) )
                        {
                          BattleLogicFunction__FunctionUpdateEntryPositions(this, dataVals_k__BackingField, v364);
                          goto LABEL_114;
                        }
                        if ( FuncList__Check(63, *p_funcType, 0LL) )
                        {
                          BattleLogicFunction__FunctionUpdateEntryMaxCountEachTurn(this, dataVals_k__BackingField, v365);
                          goto LABEL_114;
                        }
                        if ( FuncList__Check(130, *p_funcType, 0LL) )
                        {
                          BattleLogicFunction__FunctionToFieldAddChangeFieldBuff(
                            this,
                            args,
                            action,
                            v372,
                            isTreasureDvc,
                            v366);
                          goto LABEL_114;
                        }
                        if ( FuncList__Check(131, *p_funcType, 0LL) )
                        {
                          BattleLogicFunction__FunctionSubFieldBuff(this, args, action, v372, v367);
                          goto LABEL_114;
                        }
                        if ( FuncList__Check(134, *p_funcType, 0LL) )
                        {
                          v368 = DataVals__GetValue(dataVals_k__BackingField, 0LL);
                          if ( !this->fields.data )
                            goto LABEL_401;
                          BattleData__AddQuestRouteId(this->fields.data, v368, 0LL);
                          goto LABEL_114;
                        }
                        if ( FuncList__Check(135, *p_funcType, 0LL) )
                        {
                          BattleLogicFunction__FunctionLastSkillCopy(this, action, dataVals_k__BackingField, v369);
                          goto LABEL_114;
                        }
                        if ( FuncList__Check(136, *p_funcType, 0LL) )
                        {
                          v370 = DataVals__GetValue(dataVals_k__BackingField, 0LL);
                          BattleLogicFunction__FunctionChangeEnemyMasterFace(this, v370, v371);
                          goto LABEL_114;
                        }
                        if ( !FuncList__Check(137, *p_funcType, 0LL) )
                          goto LABEL_114;
                        v289 = action->fields.actorId;
                        v290 = v376->fields.uniqueId;
                        v291 = ((__int64 (__fastcall *)(BattleServantData_o *, Il2CppMethodPointer))v376->klass->vtable._9_get_hp.method)(
                                 v376,
                                 v376->klass->vtable._10_set_hp.methodPtr) > 1;
LABEL_164:
                        v293 = this;
                        v294 = v289;
                        v295 = v290;
LABEL_167:
                        v269 = BattleLogicFunction__functionValueDamage(
                                 v293,
                                 v294,
                                 v295,
                                 dataVals_k__BackingField,
                                 funcIdx,
                                 v291,
                                 action,
                                 v292);
                        goto LABEL_151;
                      }
                      v321 = action->fields.actorId;
                      v322 = v376->fields.uniqueId;
                      v323 = 11;
                    }
                  }
                  v269 = BattleLogicFunction__functionNPDamage(
                           this,
                           v321,
                           v322,
                           dataVals_k__BackingField,
                           funcIdx,
                           v323,
                           action,
                           v320);
                  goto LABEL_151;
                }
                v317 = funcEnt->fields.vals;
                if ( FuncList__Check(44, funcEnt->fields.funcType, 0LL) )
                {
                  SameIndiualityBuffSum = BattleServantData__getSameIndiualityBuffSum(v376, v317, 1, 0, 0, 0LL);
                  goto LABEL_198;
                }
                if ( FuncList__Check(133, *p_funcType, 0LL) )
                {
                  SameIndiualityBuffSum = GainNpIndividualSum__GetSameIndiualitySum(
                                            this->fields.data,
                                            *p_actorId,
                                            v376->fields.uniqueId,
                                            dataVals_k__BackingField,
                                            funcEnt,
                                            0LL);
LABEL_198:
                  v319 = SameIndiualityBuffSum;
                }
                else
                {
                  v319 = 0;
                }
                CorrectedValueFuncGainNp = DataVals__GetValue(dataVals_k__BackingField, 0LL) * v319;
                if ( !DataVals__isUnaffected(dataVals_k__BackingField, 0LL) )
                  CorrectedValueFuncGainNp = BattleServantData__getCorrectedValueFuncGainNp(
                                               v376,
                                               CorrectedValueFuncGainNp,
                                               0LL);
                isGainNp = BattleServantData__isGainNp(v376, 1, 0LL);
                if ( CorrectedValueFuncGainNp < 1 )
                {
LABEL_205:
                  v235 = v376->fields.uniqueId;
                  goto LABEL_206;
                }
LABEL_105:
                if ( !isGainNp )
                  goto LABEL_205;
                v212 = (BattleLogicFunction_o *)BattleServantData__addNp(v376, CorrectedValueFuncGainNp, 0, 0LL);
                v213 = (int)v212;
                v215 = BattleLogicFunction__getFunctionObject(
                         v212,
                         funcEnt,
                         v376->fields.uniqueId,
                         funcIdx,
                         isCommandSideEffect,
                         0LL,
                         v214);
                if ( !v215 )
                  goto LABEL_401;
                v216 = v215;
                v215->fields.procType = 3;
                BattleActionData_BuffData__setSaveNp(v215, v213, 0LL);
                if ( isCommandSideEffect )
                  v216->fields.isCommandAfter = 1;
LABEL_113:
                BattleActionData__setBuffData(action, v216, dataVals_k__BackingField, 0LL);
                goto LABEL_114;
              }
              applyTarget = funcEnt->fields.applyTarget;
              if ( applyTarget == 2 )
              {
                v269 = BattleLogicFunction__functionReplaceEnemyMember(
                         this,
                         v262,
                         dataVals_k__BackingField,
                         funcIdx,
                         v264);
                goto LABEL_151;
              }
              if ( applyTarget == 1 )
              {
                v260 = BattleLogicFunction__functionReplaceMember(
                         this,
                         targetId_k__BackingField,
                         subTargetId,
                         v263,
                         (DataVals_o *)v264,
                         funcIdx,
                         v265);
                goto LABEL_140;
              }
            }
LABEL_114:
            v92 = isCommandSideEffect;
LABEL_322:
            if ( FuncList__isDamage(*p_funcType, 0LL) )
              v394 = 0;
            else
              v394 = -109;
            if ( v394 != -109 && !v376->fields.isTDLimitCount )
            {
              v395 = v376->fields.buffData;
              if ( !v395 )
                goto LABEL_401;
              if ( !v395->fields.isNoDamage )
              {
                v376->fields.isTDLimitCount = 1;
                if ( !v445 )
                  goto LABEL_401;
                System_Collections_Generic_List_int___Add(
                  v445,
                  v376->fields.uniqueId,
                  (const MethodInfo_2F104F0 *)Method_System_Collections_Generic_List_int__Add__);
                v396 = v376->fields.buffData;
                if ( !v396 )
                  goto LABEL_401;
                v397 = BattleBuffData__UseProgressingDoNotAct(v396, v376, 0, 0LL);
                BattleActionData__addSideEffectActionData(action, v397, 1, 0LL);
                v395 = v376->fields.buffData;
                if ( !v395 )
                  goto LABEL_401;
              }
              v395->fields.isNoDamage = 0;
            }
            BattleLogicFunction_ProcListInArgs__setFuncResult(
              args,
              targetId_k__BackingField,
              action->fields.funcResult,
              dataVals_k__BackingField->fields.funcIndex,
              0LL);
LABEL_334:
            v195 = v194->max_length;
          }
        }
        if ( isCreateSideEffect )
        {
          v147 = v446;
          v149 = v449;
          if ( !funcEnt )
            goto LABEL_401;
          v398 = FuncList__Check(26, *p_funcType, 0LL);
          v403 = (BattleLogicFunction_AfterAttackSideEffectMakeArgument_o *)sub_B170CC(
                                                                              BattleLogicFunction_AfterAttackSideEffectMakeArgument_TypeInfo,
                                                                              v399,
                                                                              v400,
                                                                              v401,
                                                                              v402);
          BattleLogicFunction_AfterAttackSideEffectMakeArgument___ctor(v403, 0LL);
          if ( !v403 )
            goto LABEL_401;
          Argument__Init = BattleLogicFunction_AfterAttackSideEffectMakeArgument__Init(v403, action, 0LL);
          v108 = actionSvtData;
          BattleLogicFunction__setAttackSideEffect(
            this,
            action,
            actionSvtData,
            v398 || isTreasureDvc,
            Argument__Init,
            v405);
          ActSetWeight = (__int64)BattleActionData__getDamageTargetIdList(action, 0LL);
          if ( !ActSetWeight )
            goto LABEL_401;
          v408 = ActSetWeight;
          if ( *(_QWORD *)(ActSetWeight + 24) )
          {
            if ( actionSvtData == 0LL || !isTreasureDvc )
            {
              v409 = 0LL;
            }
            else
            {
              v409 = (BattleCommandData_o *)sub_B170CC(BattleCommandData_TypeInfo, v100, v101, v406, v407);
              BattleCommandData___ctor(v409, 0LL);
              TreasureDvcCardId = BattleServantData__getTreasureDvcCardId(actionSvtData, 0LL);
              if ( !v409 )
                goto LABEL_401;
              v409->fields._type = TreasureDvcCardId;
              v409->fields.treasureDvc = BattleServantData__getTreasureDvcId(actionSvtData, 1, 0LL);
            }
            v411 = (UnityEngine_Object_o *)this->fields.logic;
            if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
              && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
            {
              j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
            }
            ActSetWeight = UnityEngine_Object__op_Inequality(v411, 0LL, 0LL);
            if ( (ActSetWeight & 1) != 0 )
            {
              v412 = *(_QWORD *)(v408 + 24);
              if ( (int)v412 >= 1 )
              {
                v413 = 0LL;
                while ( v413 < (unsigned int)v412 )
                {
                  v414 = this->fields.logic;
                  if ( !v414 )
                    goto LABEL_401;
                  ActSetWeight = BattleLogic__setDamageSideEffect(
                                   v414,
                                   action,
                                   action->fields.actorId,
                                   *(_DWORD *)(v408 + 32 + 4 * v413),
                                   v409,
                                   0LL);
                  LODWORD(v412) = *(_DWORD *)(v408 + 24);
                  if ( (__int64)++v413 >= (int)v412 )
                    goto LABEL_343;
                }
                goto LABEL_402;
              }
            }
            v147 = v446;
          }
        }
        else
        {
          v108 = actionSvtData;
LABEL_343:
          v147 = v446;
          v149 = v449;
        }
      }
      v148 = v147->max_length;
      if ( (int)++v149 >= v148 )
        goto LABEL_360;
    }
  }
  *(_QWORD *)&v443[4] = 0LL;
LABEL_360:
  v415 = BattleLogicFunction_ProcListInArgs__get_CheckDuplicateFunc(args, 0LL);
  if ( !v415 )
    goto LABEL_401;
  ((void (__fastcall *)(BattleLogicFunction_CheckDuplicateFunction_o *, Il2CppMethodPointer))v415->klass->vtable._5_enableExecutedFunctions.method)(
    v415,
    v415->klass->vtable._6_isNotExec.methodPtr);
  if ( (v443[4] & 1) != 0 )
  {
    v416 = this->fields.data;
    if ( !v416 )
      goto LABEL_401;
    v417 = BattleData__getServantData(v416, *p_actorId, 0LL);
    if ( !v417 )
      goto LABEL_401;
    BattleServantData__resetAccumulationDamage(v417, 0LL);
  }
  if ( BattleActionData__checkSummonServantList(action, 0LL) )
  {
    v418 = (UnityEngine_Object_o *)this->fields.logic;
    if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    }
    if ( UnityEngine_Object__op_Inequality(v418, 0LL, 0LL) )
    {
      ActSetWeight = (__int64)BattleActionData__getSummonServant(action, -1, 0LL);
      if ( !ActSetWeight )
        goto LABEL_401;
      v419 = *(_DWORD *)(ActSetWeight + 24);
      v420 = ActSetWeight;
      if ( v419 >= 1 )
      {
        v421 = 0;
        while ( v421 < v419 )
        {
          v422 = *(_QWORD *)(v420 + 8LL * (int)v421 + 32);
          if ( !v422 )
            goto LABEL_401;
          v423 = this->fields.logic;
          if ( !v423 )
            goto LABEL_401;
          BattleLogic__actEnemyPassiveSkill(v423, *(_DWORD *)(v422 + 28), 0LL);
          v419 = *(_DWORD *)(v420 + 24);
          if ( (int)++v421 >= v419 )
            goto LABEL_377;
        }
        goto LABEL_402;
      }
    }
  }
LABEL_377:
  if ( isBuffUpdate )
  {
    v424 = (UnityEngine_Object_o *)this->fields.logic;
    if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    }
    if ( UnityEngine_Object__op_Inequality(v424, 0LL, 0LL) )
    {
      v425 = this->fields.logic;
      if ( !v425 )
        goto LABEL_401;
      BattleLogic__checkUsedBuff(v425, 0LL);
      v426 = this->fields.data;
      if ( !v426 )
        goto LABEL_401;
      FieldEnvData_k__BackingField = v426->fields._FieldEnvData_k__BackingField;
      if ( !FieldEnvData_k__BackingField )
        goto LABEL_401;
      BattleFieldEnvironmentData__CheckUsedBuff(FieldEnvData_k__BackingField, 0LL);
    }
  }
  if ( (v443[8] & 1) != 0 || args->fields.updateField )
  {
    v428 = (UnityEngine_Object_o *)this->fields.logic;
    if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    }
    if ( UnityEngine_Object__op_Inequality(v428, 0LL, 0LL) )
    {
      v429 = this->fields.logic;
      if ( !v429 )
        goto LABEL_401;
      BattleLogic__updateFieldBuff(v429, 0LL);
    }
  }
  if ( !v445 )
LABEL_401:
    sub_B170D4();
  System_Collections_Generic_List_int___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v456,
    v445,
    (const MethodInfo_2F11334 *)Method_System_Collections_Generic_List_int__GetEnumerator__);
  v457 = v456;
  while ( System_Collections_Generic_List_Enumerator_int___MoveNext(
            &v457,
            (const MethodInfo_2071AE8 *)Method_System_Collections_Generic_List_Enumerator_int__MoveNext__) )
  {
    v430 = this->fields.data;
    if ( !v430 )
      sub_B170D4();
    v431 = BattleData__getServantData(v430, v457.fields.current, 0LL);
    if ( v431 )
      v431->fields.isTDLimitCount = 0;
  }
  System_Collections_Generic_List_Enumerator_int___Dispose(
    &v457,
    (const MethodInfo_2071AE4 *)Method_System_Collections_Generic_List_Enumerator_int__Dispose__);
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
  __int64 v21; // x3
  __int64 v22; // x4
  BattleCommandData_o *v23; // x23
  int32_t TreasureDvcCardId; // w0
  BattleLogicFunction_AttackSideEffectFunctionArgument_o *v25; // x24
  __int64 v26; // x1
  __int64 v27; // x2
  __int64 v28; // x3
  __int64 v29; // x4
  System_Collections_Generic_IEnumerable_TSource__o *SideEffectList_k__BackingField; // x25
  BattleLogicFunction___c_c *v31; // x0
  struct BattleLogicFunction___c_StaticFields *static_fields; // x8
  System_Func_BattleLogicBuff_ReduceHpProcess_BuffInfo__int__o *_9__43_0; // x26
  Il2CppObject *v34; // x27
  struct BattleLogicFunction___c_StaticFields *v35; // x0
  System_String_array **v36; // x2
  System_String_array **v37; // x3
  System_Boolean_array **v38; // x4
  System_Int32_array **v39; // x5
  System_Int32_array *v40; // x6
  System_Int32_array *v41; // x7
  System_Collections_Generic_IEnumerable_TSource__o *v42; // x0
  System_Int32_array *v43; // x0
  __int64 v44; // x25
  __int64 v45; // x2
  __int64 v46; // x0
  __int64 v47; // x2
  BattleLogicFunction_SideEffectMakeArgument_o *v48; // x0
  const MethodInfo *v49; // x6
  const MethodInfo *v50; // x6

  if ( (byte_40FCDCF & 1) == 0 )
  {
    sub_B16FFC(&BattleLogicFunction_AttackSideEffectFunctionArgument_TypeInfo, mainAction);
    sub_B16FFC(&BattleCommandData_TypeInfo, v11);
    sub_B16FFC(&Method_System_Linq_Enumerable_Select_BattleActionData_SideEffectData__int___, v12);
    sub_B16FFC(&Method_System_Linq_Enumerable_ToArray_int___, v13);
    sub_B16FFC(&Method_System_Func_BattleActionData_SideEffectData__int___ctor__, v14);
    sub_B16FFC(&System_Func_BattleActionData_SideEffectData__int__TypeInfo, v15);
    sub_B16FFC(&int___TypeInfo, v16);
    sub_B16FFC(&Method_BattleLogicFunction___c__setAttackSideEffect_b__43_0__, v17);
    sub_B16FFC(&BattleLogicFunction___c_TypeInfo, v18);
    byte_40FCDCF = 1;
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
      v23 = (BattleCommandData_o *)sub_B170CC(BattleCommandData_TypeInfo, v19, v20, v21, v22);
      BattleCommandData___ctor(v23, 0LL);
      TreasureDvcCardId = BattleServantData__getTreasureDvcCardId(actionSvtData, 0LL);
      if ( !v23 )
        goto LABEL_24;
      v23->fields._type = TreasureDvcCardId;
      v23->fields.treasureDvc = BattleServantData__getTreasureDvcId(actionSvtData, 1, 0LL);
    }
    else
    {
      v23 = 0LL;
    }
    v25 = (BattleLogicFunction_AttackSideEffectFunctionArgument_o *)sub_B170CC(
                                                                      BattleLogicFunction_AttackSideEffectFunctionArgument_TypeInfo,
                                                                      v19,
                                                                      v20,
                                                                      v21,
                                                                      v22);
    BattleLogicFunction_AttackSideEffectFunctionArgument___ctor(v25, 0LL);
    SideEffectList_k__BackingField = (System_Collections_Generic_IEnumerable_TSource__o *)attackArg->fields._SideEffectList_k__BackingField;
    v31 = BattleLogicFunction___c_TypeInfo;
    if ( (BYTE3(BattleLogicFunction___c_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !BattleLogicFunction___c_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(BattleLogicFunction___c_TypeInfo);
      v31 = BattleLogicFunction___c_TypeInfo;
    }
    static_fields = v31->static_fields;
    _9__43_0 = (System_Func_BattleLogicBuff_ReduceHpProcess_BuffInfo__int__o *)static_fields->__9__43_0;
    if ( !_9__43_0 )
    {
      if ( (BYTE3(v31->vtable._0_Equals.methodPtr) & 4) != 0 && !v31->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(v31);
        static_fields = BattleLogicFunction___c_TypeInfo->static_fields;
      }
      v34 = (Il2CppObject *)static_fields->__9;
      _9__43_0 = (System_Func_BattleLogicBuff_ReduceHpProcess_BuffInfo__int__o *)sub_B170CC(
                                                                                   System_Func_BattleActionData_SideEffectData__int__TypeInfo,
                                                                                   v26,
                                                                                   v27,
                                                                                   v28,
                                                                                   v29);
      System_Func_BattleLogicBuff_ReduceHpProcess_BuffInfo__int____ctor(
        _9__43_0,
        v34,
        Method_BattleLogicFunction___c__setAttackSideEffect_b__43_0__,
        (const MethodInfo_2B6B6EC *)Method_System_Func_BattleActionData_SideEffectData__int___ctor__);
      v35 = BattleLogicFunction___c_TypeInfo->static_fields;
      v35->__9__43_0 = (struct System_Func_BattleActionData_SideEffectData__int__o *)_9__43_0;
      sub_B16F98(
        (BattleServantConfConponent_o *)&v35->__9__43_0,
        (System_Int32_array **)_9__43_0,
        v36,
        v37,
        v38,
        v39,
        v40,
        v41);
    }
    v42 = (System_Collections_Generic_IEnumerable_TSource__o *)System_Linq_Enumerable__Select_BattleLogicBuff_ReduceHpProcess_BuffInfo__int_(
                                                                 SideEffectList_k__BackingField,
                                                                 (System_Func_TSource__TResult__o *)_9__43_0,
                                                                 (const MethodInfo_19C05C4 *)Method_System_Linq_Enumerable_Select_BattleActionData_SideEffectData__int___);
    v43 = System_Linq_Enumerable__ToArray_int_(
            v42,
            (const MethodInfo_19C4A28 *)Method_System_Linq_Enumerable_ToArray_int___);
    if ( mainAction )
    {
      BattleActionData__SetFirstAtkMainTargetId(mainAction, v43, 0LL);
      v44 = ((__int64 (__fastcall *)(BattleLogicFunction_SideEffectMakeArgument_o *, const char *))attackArg->klass[1]._1.gc_desc)(
              attackArg,
              attackArg->klass[1]._1.name);
      v46 = sub_B17014(int___TypeInfo, 1LL, v45);
      if ( v46 )
      {
        if ( !*(_DWORD *)(v46 + 24) )
        {
          sub_B17100(v46, v46, v47);
          sub_B170A0();
        }
        *(_DWORD *)(v46 + 32) = mainAction->fields._FirstAtkMainTargetId_k__BackingField;
        if ( v44 )
        {
          v48 = (BattleLogicFunction_SideEffectMakeArgument_o *)(*(__int64 (__fastcall **)(__int64, __int64, _QWORD))(*(_QWORD *)v44 + 408LL))(
                                                                  v44,
                                                                  v46,
                                                                  *(_QWORD *)(*(_QWORD *)v44 + 416LL));
          BattleLogicFunction__SetTargetAttackSideEffect(this, v25, mainAction, actionSvtData, v23, v48, v49);
          BattleLogicFunction__SetTargetAttackSideEffect(this, v25, mainAction, actionSvtData, v23, attackArg, v50);
          return;
        }
      }
    }
LABEL_24:
    sub_B170D4();
  }
}


void __fastcall BattleLogicFunction__setAttackSideEffectBuff(
        BattleLogicFunction_o *this,
        SkillLvMaster_o *skillLvMst,
        BattleActionData_o *actData,
        BattleBuffData_BuffData_o *buff,
        BattleLogicFunction_AttackSideEffectFunctionArgument_o *arg,
        bool isCommandSideEffect,
        const MethodInfo *method)
{
  SkillLvEntity_o *SkillFromBuff; // x0
  System_Int32_array *funcId; // x23
  DataVals_array *DataValsList; // x0
  const MethodInfo *v16; // [xsp+28h] [xbp-48h]

  if ( (byte_40FCDD1 & 1) == 0 )
  {
    sub_B16FFC(&BattleServantData_TypeInfo, skillLvMst);
    byte_40FCDD1 = 1;
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
      sub_B170D4();
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


void __fastcall BattleLogicFunction_AfterAttackSideEffectMakeArgument___ctor(
        BattleLogicFunction_AfterAttackSideEffectMakeArgument_o *this,
        const MethodInfo *method)
{
  BattleLogicFunction_SideEffectMakeArgument___ctor((BattleLogicFunction_SideEffectMakeArgument_o *)this, 0LL);
}


BattleLogicFunction_SideEffectMakeArgument_o *__fastcall BattleLogicFunction_AfterAttackSideEffectMakeArgument__Init(
        BattleLogicFunction_AfterAttackSideEffectMakeArgument_o *this,
        BattleActionData_o *mainAction,
        const MethodInfo *method)
{
  struct BattleActionData_SideEffectData_array *DamageAttackSideEffectList; // x0

  if ( !mainAction )
    sub_B170D4();
  DamageAttackSideEffectList = BattleActionData__getDamageAttackSideEffectList(mainAction, 0LL);
  this->fields._SideEffectList_k__BackingField = DamageAttackSideEffectList;
  sub_B16F98(&this->fields, DamageAttackSideEffectList);
  return (BattleLogicFunction_SideEffectMakeArgument_o *)this;
}


BattleLogicFunction_SideEffectMakeArgument_o *__fastcall BattleLogicFunction_AfterAttackSideEffectMakeArgument__MakeOnlyMainArgument(
        BattleLogicFunction_AfterAttackSideEffectMakeArgument_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v3; // x3
  __int64 v4; // x4
  BattleLogicFunction_SideEffectMakeArgument_o *v5; // x19

  if ( (byte_40F854E & 1) == 0 )
  {
    sub_B16FFC(&BattleLogicFunction_AfterMainAttackSideEffectMakeArgument_TypeInfo, method);
    byte_40F854E = 1;
  }
  v5 = (BattleLogicFunction_SideEffectMakeArgument_o *)sub_B170CC(
                                                         BattleLogicFunction_AfterMainAttackSideEffectMakeArgument_TypeInfo,
                                                         method,
                                                         v2,
                                                         v3,
                                                         v4);
  BattleLogicFunction_SideEffectMakeArgument___ctor(v5, 0LL);
  return v5;
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


void __fastcall BattleLogicFunction_AfterMainAttackSideEffectMakeArgument___ctor(
        BattleLogicFunction_AfterMainAttackSideEffectMakeArgument_o *this,
        const MethodInfo *method)
{
  BattleLogicFunction_SideEffectMakeArgument___ctor((BattleLogicFunction_SideEffectMakeArgument_o *)this, 0LL);
}


int32_t __fastcall BattleLogicFunction_AfterMainAttackSideEffectMakeArgument__get_BuffAct(
        BattleLogicFunction_AfterMainAttackSideEffectMakeArgument_o *this,
        const MethodInfo *method)
{
  return 121;
}


void __fastcall BattleLogicFunction_AttackSideEffectCheckDuplicateFunction___ctor(
        BattleLogicFunction_AttackSideEffectCheckDuplicateFunction_o *this,
        BattleLogicFunction_AttackSideEffectFunctionArgument_o *argument,
        const MethodInfo *method)
{
  BattleLogicFunction_CommonCheckDuplicateFunction___ctor(
    (BattleLogicFunction_CommonCheckDuplicateFunction_o *)this,
    (const MethodInfo *)argument);
  this->fields.argument = argument;
  sub_B16F98(&this->fields.argument, argument);
}


void __fastcall BattleLogicFunction_AttackSideEffectCheckDuplicateFunction__Init(
        BattleLogicFunction_AttackSideEffectCheckDuplicateFunction_o *this,
        const MethodInfo *method)
{
  BattleLogicFunction_AttackSideEffectFunctionArgument_o *argument; // x0
  struct System_Collections_Generic_List_BattleLogicFunction_ExecutedFunctionData__o *v4; // x0

  argument = this->fields.argument;
  if ( !argument )
    sub_B170D4();
  v4 = BattleLogicFunction_AttackSideEffectFunctionArgument__getCheckBuffFuncList(argument, method);
  this->fields.executedFuncList = v4;
  sub_B16F98(&this->fields, v4);
}


bool __fastcall BattleLogicFunction_AttackSideEffectCheckDuplicateFunction__isNotExecLocal(
        BattleLogicFunction_AttackSideEffectCheckDuplicateFunction_o *this,
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
    sub_B170D4();
  if ( !targetIds->max_length )
  {
    sub_B17100(this, vals, targetIds);
    sub_B170A0();
  }
  return ((__int64 (__fastcall *)(BattleLogicFunction_AttackSideEffectCheckDuplicateFunction_o *, DataVals_o *, _QWORD, void *))this->klass->vtable._11_isExecutedTarget.method)(
           this,
           vals,
           (unsigned int)targetIds->m_Items[1],
           this->klass[1]._1.image);
}


void __fastcall BattleLogicFunction_AttackSideEffectFunctionArgument___ctor(
        BattleLogicFunction_AttackSideEffectFunctionArgument_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v3; // x3
  __int64 v4; // x4
  __int64 v6; // x1
  __int64 v7; // x1
  System_Collections_Generic_Dictionary_int__WarBoardEvalValueSquare_EvalValueSquare__o *v8; // x20
  __int64 v9; // x1
  __int64 v10; // x2
  __int64 v11; // x3
  __int64 v12; // x4
  BattleLogicFunction_CommonCheckDuplicateFunction_o *v13; // x20
  const MethodInfo *v14; // x1

  if ( (byte_40F854F & 1) == 0 )
  {
    sub_B16FFC(&BattleLogicFunction_AttackSideEffectCheckDuplicateFunction_TypeInfo, method);
    sub_B16FFC(
      &Method_System_Collections_Generic_Dictionary_int__List_BattleLogicFunction_ExecutedFunctionData____ctor__,
      v6);
    sub_B16FFC(&System_Collections_Generic_Dictionary_int__List_BattleLogicFunction_ExecutedFunctionData___TypeInfo, v7);
    byte_40F854F = 1;
  }
  this->fields.buffUniqueId = -1;
  v8 = (System_Collections_Generic_Dictionary_int__WarBoardEvalValueSquare_EvalValueSquare__o *)sub_B170CC(
                                                                                                  System_Collections_Generic_Dictionary_int__List_BattleLogicFunction_ExecutedFunctionData___TypeInfo,
                                                                                                  method,
                                                                                                  v2,
                                                                                                  v3,
                                                                                                  v4);
  System_Collections_Generic_Dictionary_int__WarBoardEvalValueSquare_EvalValueSquare____ctor(
    v8,
    (const MethodInfo_2DE8808 *)Method_System_Collections_Generic_Dictionary_int__List_BattleLogicFunction_ExecutedFunctionData____ctor__);
  this->fields.executedBuffFuncDic = (struct System_Collections_Generic_Dictionary_int__List_BattleLogicFunction_ExecutedFunctionData___o *)v8;
  sub_B16F98(&this->fields.executedBuffFuncDic, v8);
  BattleLogicFunction_FunctionArgument___ctor((BattleLogicFunction_FunctionArgument_o *)this, 0LL);
  v13 = (BattleLogicFunction_CommonCheckDuplicateFunction_o *)sub_B170CC(
                                                                BattleLogicFunction_AttackSideEffectCheckDuplicateFunction_TypeInfo,
                                                                v9,
                                                                v10,
                                                                v11,
                                                                v12);
  BattleLogicFunction_CommonCheckDuplicateFunction___ctor(v13, v14);
  v13[1].klass = (BattleLogicFunction_CommonCheckDuplicateFunction_c *)this;
  sub_B16F98(&v13[1], this);
  this->fields.checkDuplicate = (struct BattleLogicFunction_CheckDuplicateFunction_o *)v13;
  sub_B16F98(&this->fields.checkDuplicate, v13);
}


System_Collections_Generic_List_BattleLogicFunction_ExecutedFunctionData__o *__fastcall BattleLogicFunction_AttackSideEffectFunctionArgument__getCheckBuffFuncList(
        BattleLogicFunction_AttackSideEffectFunctionArgument_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  struct System_Collections_Generic_Dictionary_int__List_BattleLogicFunction_ExecutedFunctionData___o *executedBuffFuncDic; // x0
  __int64 v8; // x1
  __int64 v9; // x2
  __int64 v10; // x3
  __int64 v11; // x4
  struct System_Collections_Generic_Dictionary_int__List_BattleLogicFunction_ExecutedFunctionData___o *v12; // x20
  int32_t buffUniqueId; // w21
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v14; // x22
  struct System_Collections_Generic_Dictionary_int__List_BattleLogicFunction_ExecutedFunctionData___o *v15; // x0

  if ( (byte_40F8550 & 1) == 0 )
  {
    sub_B16FFC(
      &Method_System_Collections_Generic_Dictionary_int__List_BattleLogicFunction_ExecutedFunctionData___ContainsKey__,
      method);
    sub_B16FFC(
      &Method_System_Collections_Generic_Dictionary_int__List_BattleLogicFunction_ExecutedFunctionData___get_Item__,
      v3);
    sub_B16FFC(
      &Method_System_Collections_Generic_Dictionary_int__List_BattleLogicFunction_ExecutedFunctionData___set_Item__,
      v4);
    sub_B16FFC(&Method_System_Collections_Generic_List_BattleLogicFunction_ExecutedFunctionData___ctor__, v5);
    sub_B16FFC(&System_Collections_Generic_List_BattleLogicFunction_ExecutedFunctionData__TypeInfo, v6);
    byte_40F8550 = 1;
  }
  executedBuffFuncDic = this->fields.executedBuffFuncDic;
  if ( !executedBuffFuncDic )
    goto LABEL_9;
  if ( !System_Collections_Generic_Dictionary_int__WarBoardAIRoute_RouteData___ContainsKey(
          (System_Collections_Generic_Dictionary_int__WarBoardAIRoute_RouteData__o *)executedBuffFuncDic,
          this->fields.buffUniqueId,
          (const MethodInfo_2DE9630 *)Method_System_Collections_Generic_Dictionary_int__List_BattleLogicFunction_ExecutedFunctionData___ContainsKey__) )
  {
    v12 = this->fields.executedBuffFuncDic;
    buffUniqueId = this->fields.buffUniqueId;
    v14 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B170CC(
                                                                                                    System_Collections_Generic_List_BattleLogicFunction_ExecutedFunctionData__TypeInfo,
                                                                                                    v8,
                                                                                                    v9,
                                                                                                    v10,
                                                                                                    v11);
    System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
      v14,
      (const MethodInfo_2F25014 *)Method_System_Collections_Generic_List_BattleLogicFunction_ExecutedFunctionData___ctor__);
    if ( !v12 )
      goto LABEL_9;
    System_Collections_Generic_Dictionary_int__WarBoardAIRoute_RouteData___set_Item(
      (System_Collections_Generic_Dictionary_int__WarBoardAIRoute_RouteData__o *)v12,
      buffUniqueId,
      (WarBoardAIRoute_RouteData_o *)v14,
      (const MethodInfo_2DE9394 *)Method_System_Collections_Generic_Dictionary_int__List_BattleLogicFunction_ExecutedFunctionData___set_Item__);
  }
  v15 = this->fields.executedBuffFuncDic;
  if ( !v15 )
LABEL_9:
    sub_B170D4();
  return (System_Collections_Generic_List_BattleLogicFunction_ExecutedFunctionData__o *)System_Collections_Generic_Dictionary_int__WarBoardEvalValueSquare_EvalValueSquare___get_Item(
                                                                                          (System_Collections_Generic_Dictionary_int__WarBoardEvalValueSquare_EvalValueSquare__o *)v15,
                                                                                          this->fields.buffUniqueId,
                                                                                          (const MethodInfo_2DE92F8 *)Method_System_Collections_Generic_Dictionary_int__List_BattleLogicFunction_ExecutedFunctionData___get_Item__);
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
  __int64 v3; // x3
  __int64 v4; // x4
  __int64 v6; // x1
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v7; // x20

  if ( (byte_40F8555 & 1) == 0 )
  {
    sub_B16FFC(&Method_System_Collections_Generic_List_BattleLogicFunction_ExecutedFunctionData___ctor__, method);
    sub_B16FFC(&System_Collections_Generic_List_BattleLogicFunction_ExecutedFunctionData__TypeInfo, v6);
    byte_40F8555 = 1;
  }
  v7 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B170CC(
                                                                                                 System_Collections_Generic_List_BattleLogicFunction_ExecutedFunctionData__TypeInfo,
                                                                                                 method,
                                                                                                 v2,
                                                                                                 v3,
                                                                                                 v4);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v7,
    (const MethodInfo_2F25014 *)Method_System_Collections_Generic_List_BattleLogicFunction_ExecutedFunctionData___ctor__);
  this->fields.executedFuncList = (struct System_Collections_Generic_List_BattleLogicFunction_ExecutedFunctionData__o *)v7;
  sub_B16F98(&this->fields, v7);
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
  struct System_Collections_Generic_List_BattleLogicFunction_ExecutedFunctionData__o *executedFuncList; // x22
  __int64 v5; // x20
  int size; // w8
  BattleLogicFunction_ExecutedFunctionData_o *v7; // x8

  if ( (byte_40F8551 & 1) == 0 )
  {
    sub_B16FFC(&Method_System_Collections_Generic_List_BattleLogicFunction_ExecutedFunctionData__get_Count__, method);
    sub_B16FFC(&Method_System_Collections_Generic_List_BattleLogicFunction_ExecutedFunctionData__get_Item__, v3);
    byte_40F8551 = 1;
  }
  executedFuncList = this->fields.executedFuncList;
  if ( !executedFuncList )
LABEL_10:
    sub_B170D4();
  v5 = 0LL;
  while ( 1 )
  {
    size = executedFuncList->fields._size;
    if ( (int)v5 >= size )
      break;
    if ( size <= (unsigned int)v5 )
      System_ThrowHelper__ThrowArgumentOutOfRangeException_41329284(0LL);
    v7 = executedFuncList->fields._items->m_Items[v5];
    if ( v7 )
    {
      v7->fields.isEnable = 1;
      executedFuncList = this->fields.executedFuncList;
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
    sub_B170D4();
  return DataVals__isCheckDuplicate(vals, 0LL);
}


bool __fastcall BattleLogicFunction_CommonCheckDuplicateFunction__isExecutedFunction(
        BattleLogicFunction_CommonCheckDuplicateFunction_o *this,
        DataVals_o *vals,
        const MethodInfo *method)
{
  __int64 v3; // x3
  __int64 v4; // x4
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  BattleLogicFunction_CommonCheckDuplicateFunction___c__DisplayClass7_0_o *v11; // x21
  struct System_Collections_Generic_List_BattleLogicFunction_ExecutedFunctionData__o *executedFuncList; // x19
  __int64 v13; // x1
  __int64 v14; // x2
  __int64 v15; // x3
  __int64 v16; // x4
  System_Predicate_peRenderTexture_ChangeLayerObject__o *v17; // x20

  if ( (byte_40F8553 & 1) == 0 )
  {
    sub_B16FFC(&Method_System_Collections_Generic_List_BattleLogicFunction_ExecutedFunctionData__FindIndex__, vals);
    sub_B16FFC(&Method_System_Predicate_BattleLogicFunction_ExecutedFunctionData___ctor__, v7);
    sub_B16FFC(&System_Predicate_BattleLogicFunction_ExecutedFunctionData__TypeInfo, v8);
    sub_B16FFC(
      &Method_BattleLogicFunction_CommonCheckDuplicateFunction___c__DisplayClass7_0__isExecutedFunction_b__0__,
      v9);
    sub_B16FFC(&BattleLogicFunction_CommonCheckDuplicateFunction___c__DisplayClass7_0_TypeInfo, v10);
    byte_40F8553 = 1;
  }
  v11 = (BattleLogicFunction_CommonCheckDuplicateFunction___c__DisplayClass7_0_o *)sub_B170CC(
                                                                                     BattleLogicFunction_CommonCheckDuplicateFunction___c__DisplayClass7_0_TypeInfo,
                                                                                     vals,
                                                                                     method,
                                                                                     v3,
                                                                                     v4);
  BattleLogicFunction_CommonCheckDuplicateFunction___c__DisplayClass7_0___ctor(v11, 0LL);
  if ( !v11
    || (v11->fields.vals = vals,
        sub_B16F98(&v11->fields, vals),
        executedFuncList = this->fields.executedFuncList,
        v17 = (System_Predicate_peRenderTexture_ChangeLayerObject__o *)sub_B170CC(
                                                                         System_Predicate_BattleLogicFunction_ExecutedFunctionData__TypeInfo,
                                                                         v13,
                                                                         v14,
                                                                         v15,
                                                                         v16),
        System_Predicate_peRenderTexture_ChangeLayerObject____ctor(
          v17,
          (Il2CppObject *)v11,
          Method_BattleLogicFunction_CommonCheckDuplicateFunction___c__DisplayClass7_0__isExecutedFunction_b__0__,
          (const MethodInfo_2B0B204 *)Method_System_Predicate_BattleLogicFunction_ExecutedFunctionData___ctor__),
        !executedFuncList) )
  {
    sub_B170D4();
  }
  return System_Collections_Generic_List_SimpleAnimationPlayable_StateInfo___FindIndex(
           (System_Collections_Generic_List_SimpleAnimationPlayable_StateInfo__o *)executedFuncList,
           (System_Predicate_T__o *)v17,
           (const MethodInfo_2F26784 *)Method_System_Collections_Generic_List_BattleLogicFunction_ExecutedFunctionData__FindIndex__) >= 0;
}


// local variable allocation has failed, the output may be wrong!
bool __fastcall BattleLogicFunction_CommonCheckDuplicateFunction__isExecutedTarget(
        BattleLogicFunction_CommonCheckDuplicateFunction_o *this,
        DataVals_o *vals,
        int32_t targetId,
        const MethodInfo *method)
{
  __int64 v4; // x4
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x1
  BattleLogicFunction_CommonCheckDuplicateFunction___c__DisplayClass8_0_o *v12; // x22
  struct System_Collections_Generic_List_BattleLogicFunction_ExecutedFunctionData__o *executedFuncList; // x19
  __int64 v14; // x1
  __int64 v15; // x2
  __int64 v16; // x3
  __int64 v17; // x4
  System_Predicate_peRenderTexture_ChangeLayerObject__o *v18; // x20

  if ( (byte_40F8554 & 1) == 0 )
  {
    sub_B16FFC(&Method_System_Collections_Generic_List_BattleLogicFunction_ExecutedFunctionData__FindIndex__, vals);
    sub_B16FFC(&Method_System_Predicate_BattleLogicFunction_ExecutedFunctionData___ctor__, v8);
    sub_B16FFC(&System_Predicate_BattleLogicFunction_ExecutedFunctionData__TypeInfo, v9);
    sub_B16FFC(
      &Method_BattleLogicFunction_CommonCheckDuplicateFunction___c__DisplayClass8_0__isExecutedTarget_b__0__,
      v10);
    sub_B16FFC(&BattleLogicFunction_CommonCheckDuplicateFunction___c__DisplayClass8_0_TypeInfo, v11);
    byte_40F8554 = 1;
  }
  v12 = (BattleLogicFunction_CommonCheckDuplicateFunction___c__DisplayClass8_0_o *)sub_B170CC(
                                                                                     BattleLogicFunction_CommonCheckDuplicateFunction___c__DisplayClass8_0_TypeInfo,
                                                                                     vals,
                                                                                     *(_QWORD *)&targetId,
                                                                                     method,
                                                                                     v4);
  BattleLogicFunction_CommonCheckDuplicateFunction___c__DisplayClass8_0___ctor(v12, 0LL);
  if ( !v12
    || (v12->fields.vals = vals,
        sub_B16F98(&v12->fields, vals),
        v12->fields.targetId = targetId,
        executedFuncList = this->fields.executedFuncList,
        v18 = (System_Predicate_peRenderTexture_ChangeLayerObject__o *)sub_B170CC(
                                                                         System_Predicate_BattleLogicFunction_ExecutedFunctionData__TypeInfo,
                                                                         v14,
                                                                         v15,
                                                                         v16,
                                                                         v17),
        System_Predicate_peRenderTexture_ChangeLayerObject____ctor(
          v18,
          (Il2CppObject *)v12,
          Method_BattleLogicFunction_CommonCheckDuplicateFunction___c__DisplayClass8_0__isExecutedTarget_b__0__,
          (const MethodInfo_2B0B204 *)Method_System_Predicate_BattleLogicFunction_ExecutedFunctionData___ctor__),
        !executedFuncList) )
  {
    sub_B170D4();
  }
  return System_Collections_Generic_List_SimpleAnimationPlayable_StateInfo___FindIndex(
           (System_Collections_Generic_List_SimpleAnimationPlayable_StateInfo__o *)executedFuncList,
           (System_Predicate_T__o *)v18,
           (const MethodInfo_2F26784 *)Method_System_Collections_Generic_List_BattleLogicFunction_ExecutedFunctionData__FindIndex__) >= 0;
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
    sub_B170D4();
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
  __int64 v4; // x4
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x1
  __int64 v12; // x1
  __int64 v13; // x1
  __int64 v14; // x1
  BattleLogicFunction_CommonCheckDuplicateFunction___c__DisplayClass5_0_o *v15; // x21
  __int64 v16; // x1
  __int64 v17; // x2
  __int64 v18; // x3
  __int64 v19; // x4
  unsigned __int64 v20; // x26
  BattleLogicFunction_CommonCheckDuplicateFunction___c__DisplayClass5_1_o *v21; // x22
  struct BattleLogicFunction_CommonCheckDuplicateFunction___c__DisplayClass5_0_o **p_CS___8__locals1; // x23
  __int64 v23; // x0
  __int64 v24; // x1
  __int64 v25; // x2
  __int64 v26; // x3
  __int64 v27; // x4
  struct System_Collections_Generic_List_BattleLogicFunction_ExecutedFunctionData__o *executedFuncList; // x24
  System_Predicate_peRenderTexture_ChangeLayerObject__o *v29; // x25
  DataVals_o *v30; // x24
  struct System_Collections_Generic_List_BattleLogicFunction_ExecutedFunctionData__o *v31; // x23
  int32_t targetId; // w25
  BattleLogicFunction_ExecutedFunctionData_o *v33; // x22

  if ( (byte_40F8552 & 1) == 0 )
  {
    sub_B16FFC(&BattleLogicFunction_ExecutedFunctionData_TypeInfo, vals);
    sub_B16FFC(&Method_System_Collections_Generic_List_BattleLogicFunction_ExecutedFunctionData__Add__, v8);
    sub_B16FFC(&Method_System_Collections_Generic_List_BattleLogicFunction_ExecutedFunctionData__FindIndex__, v9);
    sub_B16FFC(&Method_System_Predicate_BattleLogicFunction_ExecutedFunctionData___ctor__, v10);
    sub_B16FFC(&System_Predicate_BattleLogicFunction_ExecutedFunctionData__TypeInfo, v11);
    sub_B16FFC(&BattleLogicFunction_CommonCheckDuplicateFunction___c__DisplayClass5_0_TypeInfo, v12);
    sub_B16FFC(
      &Method_BattleLogicFunction_CommonCheckDuplicateFunction___c__DisplayClass5_1__saveExecutedFunction_b__0__,
      v13);
    sub_B16FFC(&BattleLogicFunction_CommonCheckDuplicateFunction___c__DisplayClass5_1_TypeInfo, v14);
    byte_40F8552 = 1;
  }
  v15 = (BattleLogicFunction_CommonCheckDuplicateFunction___c__DisplayClass5_0_o *)sub_B170CC(
                                                                                     BattleLogicFunction_CommonCheckDuplicateFunction___c__DisplayClass5_0_TypeInfo,
                                                                                     vals,
                                                                                     targetIds,
                                                                                     method,
                                                                                     v4);
  BattleLogicFunction_CommonCheckDuplicateFunction___c__DisplayClass5_0___ctor(v15, 0LL);
  if ( !v15 )
    goto LABEL_16;
  v15->fields.vals = vals;
  sub_B16F98(&v15->fields, vals);
  if ( !targetIds )
    goto LABEL_16;
  if ( (int)targetIds->max_length >= 1 )
  {
    v20 = 0LL;
    while ( 1 )
    {
      v21 = (BattleLogicFunction_CommonCheckDuplicateFunction___c__DisplayClass5_1_o *)sub_B170CC(
                                                                                         BattleLogicFunction_CommonCheckDuplicateFunction___c__DisplayClass5_1_TypeInfo,
                                                                                         v16,
                                                                                         v17,
                                                                                         v18,
                                                                                         v19);
      BattleLogicFunction_CommonCheckDuplicateFunction___c__DisplayClass5_1___ctor(v21, 0LL);
      if ( !v21 )
        break;
      v21->fields.CS___8__locals1 = v15;
      p_CS___8__locals1 = &v21->fields.CS___8__locals1;
      sub_B16F98(&v21->fields.CS___8__locals1, v15);
      if ( v20 >= targetIds->max_length )
      {
        sub_B17100(v23, v24, v25);
        sub_B170A0();
      }
      v21->fields.targetId = targetIds->m_Items[v20 + 1];
      executedFuncList = this->fields.executedFuncList;
      v29 = (System_Predicate_peRenderTexture_ChangeLayerObject__o *)sub_B170CC(
                                                                       System_Predicate_BattleLogicFunction_ExecutedFunctionData__TypeInfo,
                                                                       v24,
                                                                       v25,
                                                                       v26,
                                                                       v27);
      System_Predicate_peRenderTexture_ChangeLayerObject____ctor(
        v29,
        (Il2CppObject *)v21,
        Method_BattleLogicFunction_CommonCheckDuplicateFunction___c__DisplayClass5_1__saveExecutedFunction_b__0__,
        (const MethodInfo_2B0B204 *)Method_System_Predicate_BattleLogicFunction_ExecutedFunctionData___ctor__);
      if ( !executedFuncList )
        break;
      if ( (System_Collections_Generic_List_SimpleAnimationPlayable_StateInfo___FindIndex(
              (System_Collections_Generic_List_SimpleAnimationPlayable_StateInfo__o *)executedFuncList,
              (System_Predicate_T__o *)v29,
              (const MethodInfo_2F26784 *)Method_System_Collections_Generic_List_BattleLogicFunction_ExecutedFunctionData__FindIndex__) & 0x80000000) != 0 )
      {
        if ( !*p_CS___8__locals1 )
          break;
        v30 = (*p_CS___8__locals1)->fields.vals;
        v31 = this->fields.executedFuncList;
        targetId = v21->fields.targetId;
        v33 = (BattleLogicFunction_ExecutedFunctionData_o *)sub_B170CC(
                                                              BattleLogicFunction_ExecutedFunctionData_TypeInfo,
                                                              v16,
                                                              v17,
                                                              v18,
                                                              v19);
        BattleLogicFunction_ExecutedFunctionData___ctor(v33, v30, targetId, 0LL);
        if ( !v31 )
          break;
        System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
          (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)v31,
          (EventMissionProgressRequest_Argument_ProgressData_o *)v33,
          (const MethodInfo_2F25CD8 *)Method_System_Collections_Generic_List_BattleLogicFunction_ExecutedFunctionData__Add__);
      }
      if ( (__int64)++v20 >= (int)targetIds->max_length )
        return;
    }
LABEL_16:
    sub_B170D4();
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

  CS___8__locals1 = this->fields.CS___8__locals1;
  if ( !CS___8__locals1 || !n )
    sub_B170D4();
  return BattleLogicFunction_ExecutedFunctionData__isMatch(
           n,
           CS___8__locals1->fields.vals,
           this->fields.targetId,
           0,
           0LL);
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
    sub_B170D4();
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
    sub_B170D4();
  return BattleLogicFunction_ExecutedFunctionData__isMatch(n, this->fields.vals, this->fields.targetId, 1, 0LL);
}


void __fastcall BattleLogicFunction_ExecutedFunctionData___ctor(
        BattleLogicFunction_ExecutedFunctionData_o *this,
        DataVals_o *vals,
        int32_t targetId,
        const MethodInfo *method)
{
  int32_t funcIndex; // w8

  *(_QWORD *)&this->fields.index = -1LL;
  System_Object___ctor((Il2CppObject *)this, 0LL);
  if ( !vals )
    sub_B170D4();
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
    sub_B170D4();
  return this->fields.index == vals->fields.funcIndex
      && (targetId == -1 || this->fields.targetId == targetId)
      && (!isCheckEnable || this->fields.isEnable);
}


void __fastcall BattleLogicFunction_FunctionArgument___ctor(
        BattleLogicFunction_FunctionArgument_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v3; // x3
  __int64 v4; // x4
  BattleLogicFunction_CheckDuplicateFunction_o *v6; // x20
  System_String_array **v7; // x2
  System_String_array **v8; // x3
  System_Boolean_array **v9; // x4
  System_Int32_array **v10; // x5
  System_Int32_array *v11; // x6
  System_Int32_array *v12; // x7

  if ( (byte_40F9DA0 & 1) == 0 )
  {
    sub_B16FFC(&BattleLogicFunction_CheckDuplicateFunction_TypeInfo, method);
    byte_40F9DA0 = 1;
  }
  v6 = (BattleLogicFunction_CheckDuplicateFunction_o *)sub_B170CC(
                                                         BattleLogicFunction_CheckDuplicateFunction_TypeInfo,
                                                         method,
                                                         v2,
                                                         v3,
                                                         v4);
  BattleLogicFunction_CheckDuplicateFunction___ctor(v6, 0LL);
  this->fields.checkDuplicate = v6;
  sub_B16F98(
    (BattleServantConfConponent_o *)&this->fields.checkDuplicate,
    (System_Int32_array **)v6,
    v7,
    v8,
    v9,
    v10,
    v11,
    v12);
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
    sub_B170D4();
  ((void (__fastcall *)(struct BattleLogicFunction_CheckDuplicateFunction_o *, Il2CppMethodPointer))checkDuplicate->klass->vtable._4_Init.method)(
    checkDuplicate,
    checkDuplicate->klass->vtable._5_enableExecutedFunctions.methodPtr);
}


// attributes: thunk
void __fastcall BattleLogicFunction_PreAttackSideEffectMakeArgument___ctor(
        BattleLogicFunction_PreAttackSideEffectMakeArgument_o *this,
        const MethodInfo *method)
{
  BattleLogicFunction_SideEffectMakeArgument___ctor((BattleLogicFunction_SideEffectMakeArgument_o *)this, method);
}


BattleLogicFunction_SideEffectMakeArgument_o *__fastcall BattleLogicFunction_PreAttackSideEffectMakeArgument__MakeOnlyMainArgument(
        BattleLogicFunction_PreAttackSideEffectMakeArgument_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v3; // x3
  __int64 v4; // x4
  BattleLogicFunction_SideEffectMakeArgument_o *v5; // x19
  const MethodInfo *v6; // x1

  if ( (byte_40F9DA1 & 1) == 0 )
  {
    sub_B16FFC(&BattleLogicFunction_PreMainAttackSideEffectMakeArgument_TypeInfo, method);
    byte_40F9DA1 = 1;
  }
  v5 = (BattleLogicFunction_SideEffectMakeArgument_o *)sub_B170CC(
                                                         BattleLogicFunction_PreMainAttackSideEffectMakeArgument_TypeInfo,
                                                         method,
                                                         v2,
                                                         v3,
                                                         v4);
  BattleLogicFunction_SideEffectMakeArgument___ctor(v5, v6);
  return v5;
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
  __int64 v4; // x4
  BattleLogicFunction_FunctionArgument_o *v5; // x20
  __int64 v7; // x1
  __int64 v8; // x1
  System_Collections_Generic_Dictionary_KeyValuePair_int__int___bool__o *v9; // x21
  System_String_array **v10; // x2
  System_String_array **v11; // x3
  System_Boolean_array **v12; // x4
  System_Int32_array **v13; // x5
  System_Int32_array *v14; // x6
  System_Int32_array *v15; // x7
  __int64 v16; // x1
  System_String_array **v17; // x2
  System_String_array **v18; // x3
  System_Boolean_array **v19; // x4
  System_Int32_array **v20; // x5
  System_Int32_array *v21; // x6
  System_Int32_array *v22; // x7
  const MethodInfo *v23; // x1
  struct BattleLogicFunction_FunctionArgument_o **p_externalArg; // x19

  v5 = argument;
  if ( (byte_40F9DA3 & 1) == 0 )
  {
    sub_B16FFC(&Method_System_Collections_Generic_Dictionary_KeyValuePair_int__int___bool___ctor__, argument);
    sub_B16FFC(&System_Collections_Generic_Dictionary_KeyValuePair_int__int___bool__TypeInfo, v7);
    sub_B16FFC(&BattleLogicFunction_FunctionArgument_TypeInfo, v8);
    byte_40F9DA3 = 1;
  }
  v9 = (System_Collections_Generic_Dictionary_KeyValuePair_int__int___bool__o *)sub_B170CC(
                                                                                  System_Collections_Generic_Dictionary_KeyValuePair_int__int___bool__TypeInfo,
                                                                                  argument,
                                                                                  method,
                                                                                  v3,
                                                                                  v4);
  System_Collections_Generic_Dictionary_KeyValuePair_int__int___bool____ctor(
    v9,
    (const MethodInfo_2671604 *)Method_System_Collections_Generic_Dictionary_KeyValuePair_int__int___bool___ctor__);
  this->fields.funcResults = v9;
  sub_B16F98((BattleServantConfConponent_o *)&this->fields, (System_Int32_array **)v9, v10, v11, v12, v13, v14, v15);
  this->fields.tdCommandTypeChange = -1;
  System_Object___ctor((Il2CppObject *)this, 0LL);
  if ( !v5 )
  {
    v5 = (BattleLogicFunction_FunctionArgument_o *)sub_B170CC(
                                                     BattleLogicFunction_FunctionArgument_TypeInfo,
                                                     v16,
                                                     v17,
                                                     v18,
                                                     v19);
    BattleLogicFunction_FunctionArgument___ctor(v5, v23);
  }
  this->fields.externalArg = v5;
  p_externalArg = &this->fields.externalArg;
  sub_B16F98((BattleServantConfConponent_o *)p_externalArg, (System_Int32_array **)v5, v17, v18, v19, v20, v21, v22);
  if ( !*p_externalArg )
    sub_B170D4();
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
  BattleLogicFunction_ProcListInArgs___c__DisplayClass29_0_o *v27; // x20
  int32_t TriggeredFuncIndex; // w0
  __int64 v29; // x2
  __int64 v30; // x3
  __int64 v31; // x4
  int v32; // w23
  int v33; // w8
  __int64 v34; // x1
  System_Collections_Generic_Dictionary_KeyValuePair_int__int___bool__o *funcResults; // x0
  int32_t v36; // w0
  _BOOL4 v37; // w24
  struct System_Collections_Generic_Dictionary_KeyValuePair_int__int___bool__o *v38; // x21
  System_Func_KeyValuePair_KeyValuePair_int__int___bool___bool__o *v39; // x0
  System_Func_TSource__bool__o *v40; // x22
  System_Collections_Generic_IEnumerable_TSource__o *v41; // x21
  System_Collections_Generic_IEnumerable_TSource__c *klass; // x8
  unsigned __int64 v43; // x10
  int32_t *p_offset; // x11
  __int64 p_method; // x0
  System_Collections_Generic_IEnumerable_TSource__o *v46; // x19
  __int64 v47; // x1
  __int64 v48; // x2
  __int64 v49; // x3
  __int64 v50; // x4
  System_Func_KeyValuePair_KeyValuePair_int__int___bool___bool__o *v51; // x21
  __int64 v52; // x21
  __int64 v53; // x8
  unsigned __int64 v54; // x10
  int *v55; // x11
  __int64 v56; // x0
  __int64 v57; // x8
  unsigned __int64 v58; // x10
  int *v59; // x11
  __int64 v60; // x0
  __int64 v61; // x0
  char v62; // w1
  char v63; // w22
  BattleServantData_o *ServantData; // x0
  int v65; // w8
  __int64 v66; // x8
  unsigned __int64 v67; // x10
  int *v68; // x11
  __int64 v69; // x0
  int v71; // [xsp+0h] [xbp-50h]
  bool value; // [xsp+Ch] [xbp-44h] BYREF
  System_Collections_Generic_KeyValuePair_int__int__o key; // [xsp+10h] [xbp-40h] BYREF
  bool isAllCond; // [xsp+18h] [xbp-38h] BYREF
  bool isSameTargetOnly; // [xsp+1Ch] [xbp-34h] BYREF
  System_Collections_Generic_KeyValuePair_int__int__o p_key; // 0:x0.8
  System_Collections_Generic_KeyValuePair_int__int__o v77; // 0:x1.8

  if ( (byte_40F9DA5 & 1) == 0 )
  {
    sub_B16FFC(
      &Method_System_Collections_Generic_Dictionary_KeyValuePair_int__int___bool__TryGetValue__,
      *(_QWORD *)&targetId);
    sub_B16FFC(&Method_System_Linq_Enumerable_Any_KeyValuePair_KeyValuePair_int__int___bool____, v9);
    sub_B16FFC(&Method_System_Linq_Enumerable_Count_KeyValuePair_KeyValuePair_int__int___bool____, v10);
    sub_B16FFC(&Method_System_Linq_Enumerable_Where_KeyValuePair_KeyValuePair_int__int___bool____, v11);
    sub_B16FFC(&Method_System_Func_KeyValuePair_KeyValuePair_int__int___bool___bool___ctor__, v12);
    sub_B16FFC(&System_Func_KeyValuePair_KeyValuePair_int__int___bool___bool__TypeInfo, v13);
    sub_B16FFC(&System_IDisposable_TypeInfo, v14);
    sub_B16FFC(&System_Collections_Generic_IEnumerable_KeyValuePair_KeyValuePair_int__int___bool___TypeInfo, v15);
    sub_B16FFC(&System_Collections_Generic_IEnumerator_KeyValuePair_KeyValuePair_int__int___bool___TypeInfo, v16);
    sub_B16FFC(&System_Collections_IEnumerator_TypeInfo, v17);
    sub_B16FFC(&Method_System_Collections_Generic_KeyValuePair_int__int___ctor__, v18);
    sub_B16FFC(&Method_System_Collections_Generic_KeyValuePair_KeyValuePair_int__int___bool__get_Key__, v19);
    sub_B16FFC(&Method_System_Collections_Generic_KeyValuePair_int__int__get_Value__, v20);
    sub_B16FFC(&Method_System_Collections_Generic_KeyValuePair_KeyValuePair_int__int___bool__get_Value__, v21);
    sub_B16FFC(&System_Math_TypeInfo, v22);
    sub_B16FFC(
      &Method_BattleLogicFunction_ProcListInArgs___c__DisplayClass29_0__DidTriggeredFuncHaveSpecifyResults_b__0__,
      v23);
    sub_B16FFC(
      &Method_BattleLogicFunction_ProcListInArgs___c__DisplayClass29_0__DidTriggeredFuncHaveSpecifyResults_b__1__,
      v24);
    sub_B16FFC(
      &Method_BattleLogicFunction_ProcListInArgs___c__DisplayClass29_0__DidTriggeredFuncHaveSpecifyResults_b__2__,
      v25);
    sub_B16FFC(&BattleLogicFunction_ProcListInArgs___c__DisplayClass29_0_TypeInfo, v26);
    byte_40F9DA5 = 1;
  }
  isSameTargetOnly = 0;
  isAllCond = 0;
  key = 0LL;
  value = 0;
  v27 = (BattleLogicFunction_ProcListInArgs___c__DisplayClass29_0_o *)sub_B170CC(
                                                                        BattleLogicFunction_ProcListInArgs___c__DisplayClass29_0_TypeInfo,
                                                                        *(_QWORD *)&targetId,
                                                                        baseVals,
                                                                        data,
                                                                        method);
  BattleLogicFunction_ProcListInArgs___c__DisplayClass29_0___ctor(v27, 0LL);
  if ( !baseVals )
    goto LABEL_57;
  TriggeredFuncIndex = DataVals__GetTriggeredFuncIndex(baseVals, &isSameTargetOnly, &isAllCond, 0LL);
  if ( !v27 )
    goto LABEL_57;
  v32 = TriggeredFuncIndex;
  v27->fields.funcIndex = TriggeredFuncIndex;
  if ( !TriggeredFuncIndex )
  {
LABEL_55:
    LOBYTE(v36) = 1;
    return v36 & 1;
  }
  v27->fields.isTrue = TriggeredFuncIndex > 0;
  if ( (BYTE3(System_Math_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !System_Math_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(System_Math_TypeInfo);
  if ( v32 >= 0 )
    v33 = v32;
  else
    v33 = -v32;
  v34 = (unsigned int)(v33 - 1);
  v27->fields.funcIndex = v34;
  if ( isSameTargetOnly )
  {
    p_key = (System_Collections_Generic_KeyValuePair_int__int__o)&key;
    System_Collections_Generic_KeyValuePair_int__int____ctor(
      p_key,
      v34,
      targetId,
      (const MethodInfo_23F57EC *)Method_System_Collections_Generic_KeyValuePair_int__int___ctor__);
    funcResults = this->fields.funcResults;
    if ( funcResults )
    {
      v77 = key;
      LOBYTE(v36) = System_Collections_Generic_Dictionary_KeyValuePair_int__int___bool___TryGetValue(
                      funcResults,
                      v77,
                      &value,
                      (const MethodInfo_2673E8C *)Method_System_Collections_Generic_Dictionary_KeyValuePair_int__int___bool__TryGetValue__)
                 && value == v27->fields.isTrue;
      return v36 & 1;
    }
LABEL_57:
    sub_B170D4();
  }
  v37 = isAllCond;
  v38 = this->fields.funcResults;
  v39 = (System_Func_KeyValuePair_KeyValuePair_int__int___bool___bool__o *)sub_B170CC(
                                                                             System_Func_KeyValuePair_KeyValuePair_int__int___bool___bool__TypeInfo,
                                                                             v34,
                                                                             v29,
                                                                             v30,
                                                                             v31);
  v40 = (System_Func_TSource__bool__o *)v39;
  if ( !v37 )
  {
    System_Func_KeyValuePair_KeyValuePair_int__int___bool___bool____ctor(
      v39,
      (Il2CppObject *)v27,
      Method_BattleLogicFunction_ProcListInArgs___c__DisplayClass29_0__DidTriggeredFuncHaveSpecifyResults_b__0__,
      (const MethodInfo_2B5D194 *)Method_System_Func_KeyValuePair_KeyValuePair_int__int___bool___bool___ctor__);
    v46 = System_Linq_Enumerable__Where_KeyValuePair_KeyValuePair_int__int___bool__(
            (System_Collections_Generic_IEnumerable_TSource__o *)v38,
            v40,
            (const MethodInfo_19C8070 *)Method_System_Linq_Enumerable_Where_KeyValuePair_KeyValuePair_int__int___bool____);
    v51 = (System_Func_KeyValuePair_KeyValuePair_int__int___bool___bool__o *)sub_B170CC(
                                                                               System_Func_KeyValuePair_KeyValuePair_int__int___bool___bool__TypeInfo,
                                                                               v47,
                                                                               v48,
                                                                               v49,
                                                                               v50);
    System_Func_KeyValuePair_KeyValuePair_int__int___bool___bool____ctor(
      v51,
      (Il2CppObject *)v27,
      Method_BattleLogicFunction_ProcListInArgs___c__DisplayClass29_0__DidTriggeredFuncHaveSpecifyResults_b__1__,
      (const MethodInfo_2B5D194 *)Method_System_Func_KeyValuePair_KeyValuePair_int__int___bool___bool___ctor__);
    LOBYTE(v36) = System_Linq_Enumerable__Any_KeyValuePair_KeyValuePair_int__int___bool__(
                    v46,
                    (System_Func_TSource__bool__o *)v51,
                    (const MethodInfo_18C80EC *)Method_System_Linq_Enumerable_Any_KeyValuePair_KeyValuePair_int__int___bool____);
    return v36 & 1;
  }
  System_Func_KeyValuePair_KeyValuePair_int__int___bool___bool____ctor(
    v39,
    (Il2CppObject *)v27,
    Method_BattleLogicFunction_ProcListInArgs___c__DisplayClass29_0__DidTriggeredFuncHaveSpecifyResults_b__2__,
    (const MethodInfo_2B5D194 *)Method_System_Func_KeyValuePair_KeyValuePair_int__int___bool___bool___ctor__);
  v41 = System_Linq_Enumerable__Where_KeyValuePair_KeyValuePair_int__int___bool__(
          (System_Collections_Generic_IEnumerable_TSource__o *)v38,
          v40,
          (const MethodInfo_19C8070 *)Method_System_Linq_Enumerable_Where_KeyValuePair_KeyValuePair_int__int___bool____);
  v36 = System_Linq_Enumerable__Count_KeyValuePair_KeyValuePair_int__int___bool__(
          v41,
          (const MethodInfo_18D3180 *)Method_System_Linq_Enumerable_Count_KeyValuePair_KeyValuePair_int__int___bool____);
  if ( v36 )
  {
    if ( !v41 )
      goto LABEL_57;
    klass = v41->klass;
    if ( *(_WORD *)&v41->klass->_2.bitflags1 )
    {
      v43 = 0LL;
      p_offset = &klass->_1.interfaceOffsets->offset;
      while ( *((System_Collections_Generic_IEnumerable_KeyValuePair_KeyValuePair_int__int___bool___c **)p_offset - 1) != System_Collections_Generic_IEnumerable_KeyValuePair_KeyValuePair_int__int___bool___TypeInfo )
      {
        ++v43;
        p_offset += 4;
        if ( v43 >= *(unsigned __int16 *)&v41->klass->_2.bitflags1 )
          goto LABEL_23;
      }
      p_method = (__int64)&klass->vtable[*p_offset].method;
    }
    else
    {
LABEL_23:
      p_method = sub_AAFEF8(
                   v41,
                   System_Collections_Generic_IEnumerable_KeyValuePair_KeyValuePair_int__int___bool___TypeInfo,
                   0LL);
    }
    v52 = (*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerable_TSource__o *, _QWORD))p_method)(
            v41,
            *(_QWORD *)(p_method + 8));
    if ( !v52 )
      sub_B170D4();
    while ( 1 )
    {
      v53 = *(_QWORD *)v52;
      if ( *(_WORD *)(*(_QWORD *)v52 + 298LL) )
      {
        v54 = 0LL;
        v55 = (int *)(*(_QWORD *)(v53 + 176) + 8LL);
        while ( *((System_Collections_IEnumerator_c **)v55 - 1) != System_Collections_IEnumerator_TypeInfo )
        {
          ++v54;
          v55 += 4;
          if ( v54 >= *(unsigned __int16 *)(*(_QWORD *)v52 + 298LL) )
            goto LABEL_32;
        }
        v56 = v53 + 16LL * *v55 + 312;
      }
      else
      {
LABEL_32:
        v56 = sub_AAFEF8(v52, System_Collections_IEnumerator_TypeInfo, 0LL);
      }
      if ( ((*(__int64 (__fastcall **)(__int64, _QWORD))v56)(v52, *(_QWORD *)(v56 + 8)) & 1) == 0 )
        break;
      v57 = *(_QWORD *)v52;
      if ( *(_WORD *)(*(_QWORD *)v52 + 298LL) )
      {
        v58 = 0LL;
        v59 = (int *)(*(_QWORD *)(v57 + 176) + 8LL);
        while ( *((System_Collections_Generic_IEnumerator_KeyValuePair_KeyValuePair_int__int___bool___c **)v59 - 1) != System_Collections_Generic_IEnumerator_KeyValuePair_KeyValuePair_int__int___bool___TypeInfo )
        {
          ++v58;
          v59 += 4;
          if ( v58 >= *(unsigned __int16 *)(*(_QWORD *)v52 + 298LL) )
            goto LABEL_39;
        }
        v60 = v57 + 16LL * *v59 + 312;
      }
      else
      {
LABEL_39:
        v60 = sub_AAFEF8(
                v52,
                System_Collections_Generic_IEnumerator_KeyValuePair_KeyValuePair_int__int___bool___TypeInfo,
                0LL);
      }
      v61 = (*(__int64 (__fastcall **)(__int64, _QWORD))v60)(v52, *(_QWORD *)(v60 + 8));
      if ( !data )
        sub_B170D4();
      v63 = v62;
      ServantData = BattleData__getServantData(data, SHIDWORD(v61), 0LL);
      if ( ServantData && !ServantData->fields.isDeadAnime && (v63 != 0) != v27->fields.isTrue )
      {
        v65 = 297;
        goto LABEL_47;
      }
    }
    v65 = 254;
LABEL_47:
    v71 = v65;
    v66 = *(_QWORD *)v52;
    if ( *(_WORD *)(*(_QWORD *)v52 + 298LL) )
    {
      v67 = 0LL;
      v68 = (int *)(*(_QWORD *)(v66 + 176) + 8LL);
      while ( *((System_IDisposable_c **)v68 - 1) != System_IDisposable_TypeInfo )
      {
        ++v67;
        v68 += 4;
        if ( v67 >= *(unsigned __int16 *)(*(_QWORD *)v52 + 298LL) )
          goto LABEL_51;
      }
      v69 = v66 + 16LL * *v68 + 312;
    }
    else
    {
LABEL_51:
      v69 = sub_AAFEF8(v52, System_IDisposable_TypeInfo, 0LL);
    }
    (*(void (__fastcall **)(__int64, _QWORD))v69)(v52, *(_QWORD *)(v69 + 8));
    if ( v71 != 254 )
    {
      LOBYTE(v36) = 0;
      return v36 & 1;
    }
    goto LABEL_55;
  }
  return v36 & 1;
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
    sub_B170D4();
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
    sub_B170D4();
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
    sub_B170D4();
  return externalArg->fields.grantSkillType == type;
}


BattleLogicFunction_CheckDuplicateFunction_o *__fastcall BattleLogicFunction_ProcListInArgs__get_CheckDuplicateFunc(
        BattleLogicFunction_ProcListInArgs_o *this,
        const MethodInfo *method)
{
  struct BattleLogicFunction_FunctionArgument_o *externalArg; // x8

  externalArg = this->fields.externalArg;
  if ( !externalArg )
    sub_B170D4();
  return externalArg->fields.checkDuplicate;
}


BattleLogicFunction_FunctionArgument_o *__fastcall BattleLogicFunction_ProcListInArgs__get_ExternalArg(
        BattleLogicFunction_ProcListInArgs_o *this,
        const MethodInfo *method)
{
  return this->fields.externalArg;
}


int32_t __fastcall BattleLogicFunction_ProcListInArgs__get_GrantSkillType(
        BattleLogicFunction_ProcListInArgs_o *this,
        const MethodInfo *method)
{
  struct BattleLogicFunction_FunctionArgument_o *externalArg; // x8

  externalArg = this->fields.externalArg;
  if ( !externalArg )
    sub_B170D4();
  return externalArg->fields.grantSkillType;
}


bool __fastcall BattleLogicFunction_ProcListInArgs__get_IsCommandSideEffect(
        BattleLogicFunction_ProcListInArgs_o *this,
        const MethodInfo *method)
{
  struct BattleLogicFunction_FunctionArgument_o *externalArg; // x8

  externalArg = this->fields.externalArg;
  if ( !externalArg )
    sub_B170D4();
  return externalArg->fields.isCommandSideEffect;
}


bool __fastcall BattleLogicFunction_ProcListInArgs__get_IsPassive(
        BattleLogicFunction_ProcListInArgs_o *this,
        const MethodInfo *method)
{
  struct BattleLogicFunction_FunctionArgument_o *externalArg; // x8

  externalArg = this->fields.externalArg;
  if ( !externalArg )
    sub_B170D4();
  return externalArg->fields.isPassive;
}


bool __fastcall BattleLogicFunction_ProcListInArgs__get_IsShift(
        BattleLogicFunction_ProcListInArgs_o *this,
        const MethodInfo *method)
{
  struct BattleLogicFunction_FunctionArgument_o *externalArg; // x8

  externalArg = this->fields.externalArg;
  if ( !externalArg )
    sub_B170D4();
  return externalArg->fields.isShift;
}


int32_t __fastcall BattleLogicFunction_ProcListInArgs__get_SkillId(
        BattleLogicFunction_ProcListInArgs_o *this,
        const MethodInfo *method)
{
  struct BattleLogicFunction_FunctionArgument_o *externalArg; // x8

  externalArg = this->fields.externalArg;
  if ( !externalArg )
    sub_B170D4();
  return externalArg->fields.skillId;
}


GeneratedFamilyLinkageIdCacher_o *__fastcall BattleLogicFunction_ProcListInArgs__get_familyLinkageIdCacher(
        BattleLogicFunction_ProcListInArgs_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v3; // x3
  __int64 v4; // x4
  GeneratedFamilyLinkageIdCacher_o *result; // x0
  BattleServantConfConponent_o *p_familyLinkageIdCacher; // x19
  GeneratedFamilyLinkageIdCacher_o *familyLinkageIdCacher; // t1
  GeneratedFamilyLinkageIdCacher_o *v9; // x20
  System_String_array **v10; // x2
  System_String_array **v11; // x3
  System_Boolean_array **v12; // x4
  System_Int32_array **v13; // x5
  System_Int32_array *v14; // x6
  System_Int32_array *v15; // x7

  if ( (byte_40F9DA2 & 1) == 0 )
  {
    sub_B16FFC(&GeneratedFamilyLinkageIdCacher_TypeInfo, method);
    byte_40F9DA2 = 1;
  }
  familyLinkageIdCacher = this->fields._familyLinkageIdCacher;
  p_familyLinkageIdCacher = (BattleServantConfConponent_o *)&this->fields._familyLinkageIdCacher;
  result = familyLinkageIdCacher;
  if ( !familyLinkageIdCacher )
  {
    v9 = (GeneratedFamilyLinkageIdCacher_o *)sub_B170CC(GeneratedFamilyLinkageIdCacher_TypeInfo, method, v2, v3, v4);
    GeneratedFamilyLinkageIdCacher___ctor(v9, 0LL);
    p_familyLinkageIdCacher->klass = (BattleServantConfConponent_c *)v9;
    sub_B16F98(p_familyLinkageIdCacher, (System_Int32_array **)v9, v10, v11, v12, v13, v14, v15);
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
  struct BattleLogicFunctionProcess_FunctionUnitCheck_array *v11; // x0
  BattleLogicFunctionProcess_FunctionUnitCheck_array **p_funcUnitArray_k__BackingField; // x19
  System_String_array **v13; // x2
  System_String_array **v14; // x3
  System_Boolean_array **v15; // x4
  System_Int32_array **v16; // x5
  System_Int32_array *v17; // x6
  System_Int32_array *v18; // x7
  __int64 FunctionTriggerStarNum; // x0
  __int64 v20; // x1
  System_String_array **v21; // x2
  __int64 v22; // x3
  __int64 v23; // x4
  struct BattleLogicFunctionProcess_FunctionUnitCheck_array *funcUnitArray_k__BackingField; // x27
  __int64 v25; // x28
  __int64 v26; // x23
  BattleLogicFunctionProcess_FunctionUnitCheck_o *v27; // x26
  const MethodInfo *v28; // x3
  System_String_array **v29; // x3
  System_Boolean_array **v30; // x4
  System_Int32_array **v31; // x5
  System_Int32_array *v32; // x6
  System_Int32_array *v33; // x7
  il2cpp_array_size_t v34; // w24
  const MethodInfo *v35; // x4
  BattleLogicFunctionProcess_FunctionUnitCheck_array *v36; // x8
  BattleLogicFunctionProcess_FunctionUnitCheck_o *v37; // x0
  int v38; // w8
  int v39; // w22
  BattleLogicFunctionProcess_FunctionUnitCheck_o *v40; // x21
  int v41; // w23
  BattleLogicFunctionProcess_FunctionUnitCheck_o *v42; // x20
  DataVals_o *dataVals_k__BackingField; // x0
  const MethodInfo *v44; // x2
  DataVals_o *v45; // x0
  DataVals_o *v46; // x0
  _BOOL4 v47; // w8

  if ( (byte_40F9DA7 & 1) == 0 )
  {
    sub_B16FFC(&BattleLogicFunctionProcess_FunctionUnitCheck___TypeInfo, logic);
    sub_B16FFC(&BattleLogicFunctionProcess_FunctionUnitCheck_TypeInfo, v9);
    byte_40F9DA7 = 1;
  }
  if ( !dataValsList )
    goto LABEL_38;
  max_length = dataValsList->max_length;
  v11 = (struct BattleLogicFunctionProcess_FunctionUnitCheck_array *)sub_B17014(
                                                                       BattleLogicFunctionProcess_FunctionUnitCheck___TypeInfo,
                                                                       (unsigned int)max_length,
                                                                       functionIds);
  this->fields._funcUnitArray_k__BackingField = v11;
  p_funcUnitArray_k__BackingField = &this->fields._funcUnitArray_k__BackingField;
  sub_B16F98(
    (BattleServantConfConponent_o *)&this->fields._funcUnitArray_k__BackingField,
    (System_Int32_array **)v11,
    v13,
    v14,
    v15,
    v16,
    v17,
    v18);
  funcUnitArray_k__BackingField = this->fields._funcUnitArray_k__BackingField;
  if ( max_length >= 1 )
  {
    v25 = 32LL;
    v26 = 8LL;
    while ( 1 )
    {
      v27 = (BattleLogicFunctionProcess_FunctionUnitCheck_o *)sub_B170CC(
                                                                BattleLogicFunctionProcess_FunctionUnitCheck_TypeInfo,
                                                                v20,
                                                                v21,
                                                                v22,
                                                                v23);
      BattleLogicFunctionProcess_FunctionUnitCheck___ctor(v27, logic, this, v28);
      if ( !funcUnitArray_k__BackingField )
        break;
      if ( v27 )
      {
        FunctionTriggerStarNum = sub_B170BC(v27, funcUnitArray_k__BackingField->obj.klass->_1.element_class);
        if ( !FunctionTriggerStarNum )
        {
          sub_B170F4();
          sub_B170A0();
        }
      }
      v34 = v26 - 8;
      if ( (unsigned int)(v26 - 8) >= funcUnitArray_k__BackingField->max_length )
        goto LABEL_39;
      *(Il2CppClass **)((char *)&funcUnitArray_k__BackingField->obj.klass + v25) = (Il2CppClass *)v27;
      sub_B16F98(
        (BattleServantConfConponent_o *)((char *)funcUnitArray_k__BackingField + v25),
        (System_Int32_array **)v27,
        v21,
        v29,
        v30,
        v31,
        v32,
        v33);
      v36 = *p_funcUnitArray_k__BackingField;
      if ( !*p_funcUnitArray_k__BackingField )
        break;
      if ( v34 >= v36->max_length )
        goto LABEL_39;
      if ( !functionIds )
        break;
      if ( v34 >= functionIds->max_length || v34 >= dataValsList->max_length )
      {
LABEL_39:
        sub_B17100(FunctionTriggerStarNum, v20, v21);
        sub_B170A0();
      }
      v37 = *(BattleLogicFunctionProcess_FunctionUnitCheck_o **)((char *)&v36->obj.klass + v25);
      if ( !v37 )
        break;
      BattleLogicFunctionProcess_FunctionUnitCheck__setDataVals(
        v37,
        funcIndex,
        *((_DWORD *)&functionIds->obj.klass + v26++),
        *(DataVals_o **)((char *)&dataValsList->obj.klass + v25),
        v35);
      v25 += 8LL;
      ++*funcIndex;
      funcUnitArray_k__BackingField = *p_funcUnitArray_k__BackingField;
      if ( (int)v26 - 8 >= max_length )
        goto LABEL_17;
    }
LABEL_38:
    sub_B170D4();
  }
LABEL_17:
  if ( !funcUnitArray_k__BackingField )
    goto LABEL_38;
  v38 = funcUnitArray_k__BackingField->max_length;
  if ( v38 >= 1 )
  {
    v39 = 0;
    v40 = 0LL;
    v41 = -1;
    do
    {
      if ( v39 >= (unsigned int)v38 )
        goto LABEL_39;
      v42 = funcUnitArray_k__BackingField->m_Items[v39];
      if ( !v42 )
        goto LABEL_38;
      dataVals_k__BackingField = v42->fields._dataVals_k__BackingField;
      if ( !dataVals_k__BackingField )
        goto LABEL_38;
      if ( DataVals__IsAddIndividualty(dataVals_k__BackingField, 0LL) )
        goto LABEL_26;
      v45 = v42->fields._dataVals_k__BackingField;
      if ( !v45 )
        goto LABEL_38;
      if ( DataVals__IsAddLinkageTargetIndividualty(v45, 0LL) )
LABEL_26:
        BattleLogicFunctionProcess_FunctionUnitCheck__setLinkFunction(v42, *p_funcUnitArray_k__BackingField, v44);
      v46 = v42->fields._dataVals_k__BackingField;
      if ( !v46 )
        goto LABEL_38;
      FunctionTriggerStarNum = DataVals__GetFunctionTriggerStarNum(v46, 0LL);
      if ( (FunctionTriggerStarNum & 0x80000000) == 0 )
      {
        v47 = v40 == 0LL || (int)FunctionTriggerStarNum < v41;
        if ( v47 )
          v41 = FunctionTriggerStarNum;
        if ( v47 )
          v40 = v42;
      }
      v38 = funcUnitArray_k__BackingField->max_length;
      ++v39;
    }
    while ( v39 < v38 );
    if ( v40 )
      v40->fields.isLowestStarFunction = 1;
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
  System_Collections_Generic_Dictionary_KeyValuePair_int__int___bool__o *v10; // x0
  System_Collections_Generic_KeyValuePair_int__int__o key; // [xsp+8h] [xbp-28h] BYREF
  System_Collections_Generic_KeyValuePair_int__int__o p_key; // 0:x0.8
  System_Collections_Generic_KeyValuePair_int__int__o v15; // 0:x1.8
  System_Collections_Generic_KeyValuePair_int__int__o v16; // 0:x1.8

  if ( (byte_40F9DA4 & 1) == 0 )
  {
    sub_B16FFC(
      &Method_System_Collections_Generic_Dictionary_KeyValuePair_int__int___bool__ContainsKey__,
      *(_QWORD *)&targetId);
    sub_B16FFC(&Method_System_Collections_Generic_Dictionary_KeyValuePair_int__int___bool__get_Item__, v7);
    sub_B16FFC(&Method_System_Collections_Generic_KeyValuePair_int__int___ctor__, v8);
    byte_40F9DA4 = 1;
  }
  p_key = (System_Collections_Generic_KeyValuePair_int__int__o)&key;
  key = 0LL;
  System_Collections_Generic_KeyValuePair_int__int____ctor(
    p_key,
    index - 1,
    targetId,
    (const MethodInfo_23F57EC *)Method_System_Collections_Generic_KeyValuePair_int__int___ctor__);
  funcResults = this->fields.funcResults;
  if ( !funcResults )
    goto LABEL_9;
  v15 = key;
  if ( !System_Collections_Generic_Dictionary_KeyValuePair_int__int___bool___ContainsKey(
          funcResults,
          v15,
          (const MethodInfo_2672444 *)Method_System_Collections_Generic_Dictionary_KeyValuePair_int__int___bool__ContainsKey__) )
    return 0;
  v10 = this->fields.funcResults;
  if ( !v10 )
LABEL_9:
    sub_B170D4();
  v16 = key;
  return System_Collections_Generic_Dictionary_KeyValuePair_int__int___bool___get_Item(
           v10,
           v16,
           (const MethodInfo_26720F4 *)Method_System_Collections_Generic_Dictionary_KeyValuePair_int__int___bool__get_Item__);
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

  if ( (byte_40F9DA6 & 1) == 0 )
  {
    sub_B16FFC(
      &Method_System_Collections_Generic_Dictionary_KeyValuePair_int__int___bool__set_Item__,
      *(_QWORD *)&targetId);
    sub_B16FFC(&Method_System_Collections_Generic_KeyValuePair_int__int___ctor__, v9);
    byte_40F9DA6 = 1;
  }
  p_key = (System_Collections_Generic_KeyValuePair_int__int__o)&key;
  key = 0LL;
  System_Collections_Generic_KeyValuePair_int__int____ctor(
    p_key,
    index,
    targetId,
    (const MethodInfo_23F57EC *)Method_System_Collections_Generic_KeyValuePair_int__int___ctor__);
  funcResults = this->fields.funcResults;
  if ( !funcResults )
    sub_B170D4();
  v13 = key;
  System_Collections_Generic_Dictionary_KeyValuePair_int__int___bool___set_Item(
    funcResults,
    v13,
    result,
    (const MethodInfo_2672190 *)Method_System_Collections_Generic_Dictionary_KeyValuePair_int__int___bool__set_Item__);
}


void __fastcall BattleLogicFunction_ProcListInArgs__set_IsCommandSideEffect(
        BattleLogicFunction_ProcListInArgs_o *this,
        bool value,
        const MethodInfo *method)
{
  struct BattleLogicFunction_FunctionArgument_o *externalArg; // x8

  externalArg = this->fields.externalArg;
  if ( !externalArg )
    sub_B170D4();
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
    sub_B170D4();
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
    sub_B170D4();
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
    sub_B170D4();
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
  sub_B16F98(
    (BattleServantConfConponent_o *)&this->fields._funcUnitArray_k__BackingField,
    (System_Int32_array **)value,
    (System_String_array **)method,
    v3,
    v4,
    v5,
    v6,
    v7);
}


void __fastcall BattleLogicFunction_ProcListInArgs___c__DisplayClass29_0___ctor(
        BattleLogicFunction_ProcListInArgs___c__DisplayClass29_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


bool __fastcall BattleLogicFunction_ProcListInArgs___c__DisplayClass29_0___DidTriggeredFuncHaveSpecifyResults_b__0(
        BattleLogicFunction_ProcListInArgs___c__DisplayClass29_0_o *this,
        System_Collections_Generic_KeyValuePair_KeyValuePair_int__int___bool__o x,
        const MethodInfo *method)
{
  int32_t key; // w19
  __int64 v5; // x1

  key = x.fields.key.fields.key;
  if ( (byte_40F78C4 & 1) == 0 )
  {
    sub_B16FFC(
      &Method_System_Collections_Generic_KeyValuePair_KeyValuePair_int__int___bool__get_Key__,
      *(_QWORD *)&x.fields.key);
    sub_B16FFC(&Method_System_Collections_Generic_KeyValuePair_int__int__get_Key__, v5);
    byte_40F78C4 = 1;
  }
  return this->fields.funcIndex == key;
}


bool __fastcall BattleLogicFunction_ProcListInArgs___c__DisplayClass29_0___DidTriggeredFuncHaveSpecifyResults_b__1(
        BattleLogicFunction_ProcListInArgs___c__DisplayClass29_0_o *this,
        System_Collections_Generic_KeyValuePair_KeyValuePair_int__int___bool__o x,
        const MethodInfo *method)
{
  bool value; // w19

  value = x.fields.value;
  if ( (byte_40F78C5 & 1) == 0 )
  {
    sub_B16FFC(
      &Method_System_Collections_Generic_KeyValuePair_KeyValuePair_int__int___bool__get_Value__,
      *(_QWORD *)&x.fields.key);
    byte_40F78C5 = 1;
  }
  return !value ^ this->fields.isTrue;
}


bool __fastcall BattleLogicFunction_ProcListInArgs___c__DisplayClass29_0___DidTriggeredFuncHaveSpecifyResults_b__2(
        BattleLogicFunction_ProcListInArgs___c__DisplayClass29_0_o *this,
        System_Collections_Generic_KeyValuePair_KeyValuePair_int__int___bool__o x,
        const MethodInfo *method)
{
  int32_t key; // w19
  __int64 v5; // x1

  key = x.fields.key.fields.key;
  if ( (byte_40F78C3 & 1) == 0 )
  {
    sub_B16FFC(
      &Method_System_Collections_Generic_KeyValuePair_KeyValuePair_int__int___bool__get_Key__,
      *(_QWORD *)&x.fields.key);
    sub_B16FFC(&Method_System_Collections_Generic_KeyValuePair_int__int__get_Key__, v5);
    byte_40F78C3 = 1;
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

  if ( (byte_40F9DA9 & 1) == 0 )
  {
    sub_B16FFC(&Method_System_Array_Empty_BattleActionData_SideEffectData___, method);
    byte_40F9DA9 = 1;
  }
  v9 = (_QWORD **)Method_System_Array_Empty_BattleActionData_SideEffectData___;
  v10 = **((_QWORD **)Method_System_Array_Empty_BattleActionData_SideEffectData___ + 6);
  v11 = *(_WORD *)(v10 + 306);
  if ( (v11 & 1) == 0 )
  {
    sub_AAFCFC(**((_QWORD **)Method_System_Array_Empty_BattleActionData_SideEffectData___ + 6));
    v11 = *(_WORD *)(v10 + 306);
  }
  if ( (v11 & 0x400) != 0 )
  {
    v12 = *v9[6];
    if ( (*(_BYTE *)(v12 + 306) & 1) == 0 )
      sub_AAFCFC(*v9[6]);
    if ( !*(_DWORD *)(v12 + 224) )
    {
      v13 = *v9[6];
      if ( (*(_BYTE *)(v13 + 306) & 1) == 0 )
        sub_AAFCFC(*v9[6]);
      j_il2cpp_runtime_class_init_0(v13);
    }
  }
  v14 = *v9[6];
  if ( (*(_BYTE *)(v14 + 306) & 1) == 0 )
    sub_AAFCFC(*v9[6]);
  v15 = *(struct BattleActionData_SideEffectData_array ***)(v14 + 184);
  v16 = *v15;
  this->fields._SideEffectList_k__BackingField = *v15;
  sub_B16F98((BattleServantConfConponent_o *)&this->fields, (System_Int32_array **)v16, v2, v3, v4, v5, v6, v7);
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


BattleLogicFunction_SideEffectMakeArgument_o *__fastcall BattleLogicFunction_SideEffectMakeArgument__Init(
        BattleLogicFunction_SideEffectMakeArgument_o *this,
        System_Int32_array *targetIds,
        const MethodInfo *method)
{
  __int64 v3; // x3
  __int64 v4; // x4
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x1
  __int64 v12; // x1
  __int64 v13; // x21
  __int64 v14; // x2
  __int64 v15; // x22
  __int64 v16; // x0
  __int64 v17; // x1
  System_String_array **v18; // x2
  System_String_array **v19; // x3
  System_Boolean_array **v20; // x4
  System_Int32_array **v21; // x5
  System_Int32_array *v22; // x6
  System_Int32_array *v23; // x7
  __int64 v24; // x1
  __int64 v25; // x2
  __int64 v26; // x3
  __int64 v27; // x4
  System_Func_int__BattleActionData_SideEffectData__o *v28; // x22
  System_Collections_Generic_IEnumerable_TSource__o *v29; // x0
  struct BattleActionData_SideEffectData_array *v30; // x0
  System_String_array **v31; // x2
  System_String_array **v32; // x3
  System_Boolean_array **v33; // x4
  System_Int32_array **v34; // x5
  System_Int32_array *v35; // x6
  System_Int32_array *v36; // x7

  if ( (byte_40F9DA8 & 1) == 0 )
  {
    sub_B16FFC(&BuffList_ACTION___TypeInfo, targetIds);
    sub_B16FFC(&Method_System_Linq_Enumerable_Select_int__BattleActionData_SideEffectData___, v7);
    sub_B16FFC(&Method_System_Linq_Enumerable_ToArray_BattleActionData_SideEffectData___, v8);
    sub_B16FFC(&Method_System_Func_int__BattleActionData_SideEffectData___ctor__, v9);
    sub_B16FFC(&System_Func_int__BattleActionData_SideEffectData__TypeInfo, v10);
    sub_B16FFC(&Method_BattleLogicFunction_SideEffectMakeArgument___c__DisplayClass9_0__Init_b__0__, v11);
    sub_B16FFC(&BattleLogicFunction_SideEffectMakeArgument___c__DisplayClass9_0_TypeInfo, v12);
    byte_40F9DA8 = 1;
  }
  v13 = sub_B170CC(BattleLogicFunction_SideEffectMakeArgument___c__DisplayClass9_0_TypeInfo, targetIds, method, v3, v4);
  BattleLogicFunction_SideEffectMakeArgument___c__DisplayClass9_0___ctor(
    (BattleLogicFunction_SideEffectMakeArgument___c__DisplayClass9_0_o *)v13,
    0LL);
  v15 = sub_B17014(BuffList_ACTION___TypeInfo, 1LL, v14);
  v16 = ((__int64 (__fastcall *)(BattleLogicFunction_SideEffectMakeArgument_o *, Il2CppMethodPointer))this->klass->vtable._4_unknown.method)(
          this,
          this->klass->vtable._5_unknown.methodPtr);
  if ( !v15 )
    goto LABEL_7;
  if ( !*(_DWORD *)(v15 + 24) )
  {
    sub_B17100(v16, v17, v18);
    sub_B170A0();
  }
  *(_DWORD *)(v15 + 32) = v16;
  if ( !v13 )
LABEL_7:
    sub_B170D4();
  *(_QWORD *)(v13 + 16) = v15;
  sub_B16F98((BattleServantConfConponent_o *)(v13 + 16), (System_Int32_array **)v15, v18, v19, v20, v21, v22, v23);
  v28 = (System_Func_int__BattleActionData_SideEffectData__o *)sub_B170CC(
                                                                 System_Func_int__BattleActionData_SideEffectData__TypeInfo,
                                                                 v24,
                                                                 v25,
                                                                 v26,
                                                                 v27);
  System_Func_int__BattleActionData_SideEffectData____ctor(
    v28,
    (Il2CppObject *)v13,
    Method_BattleLogicFunction_SideEffectMakeArgument___c__DisplayClass9_0__Init_b__0__,
    (const MethodInfo_2B66764 *)Method_System_Func_int__BattleActionData_SideEffectData___ctor__);
  v29 = (System_Collections_Generic_IEnumerable_TSource__o *)System_Linq_Enumerable__Select_int__BattleActionData_SideEffectData_(
                                                               (System_Collections_Generic_IEnumerable_TSource__o *)targetIds,
                                                               (System_Func_TSource__TResult__o *)v28,
                                                               (const MethodInfo_19BF868 *)Method_System_Linq_Enumerable_Select_int__BattleActionData_SideEffectData___);
  v30 = (struct BattleActionData_SideEffectData_array *)System_Linq_Enumerable__ToArray_DrawLotsDisplayMessage_DisplayedInGroup_SaveData_(
                                                          v29,
                                                          (const MethodInfo_19C4BCC *)Method_System_Linq_Enumerable_ToArray_BattleActionData_SideEffectData___);
  this->fields._SideEffectList_k__BackingField = v30;
  sub_B16F98((BattleServantConfConponent_o *)&this->fields, (System_Int32_array **)v30, v31, v32, v33, v34, v35, v36);
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
  sub_B16F98(
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
  __int64 v3; // x3
  __int64 v4; // x4
  BuffList_ACTION_array *buffActs; // x20
  BattleActionData_SideEffectData_o *v8; // x21

  if ( (byte_40F78C6 & 1) == 0 )
  {
    sub_B16FFC(&BattleActionData_SideEffectData_TypeInfo, *(_QWORD *)&id);
    byte_40F78C6 = 1;
  }
  buffActs = this->fields.buffActs;
  v8 = (BattleActionData_SideEffectData_o *)sub_B170CC(
                                              BattleActionData_SideEffectData_TypeInfo,
                                              *(_QWORD *)&id,
                                              method,
                                              v3,
                                              v4);
  BattleActionData_SideEffectData___ctor(v8, id, buffActs, 0LL);
  return v8;
}


// local variable allocation has failed, the output may be wrong!
void __fastcall BattleLogicFunction_WarBoardFunctionArgument___ctor(
        BattleLogicFunction_WarBoardFunctionArgument_o *this,
        int32_t targetId,
        const MethodInfo *method)
{
  __int64 v5; // x2
  struct System_Int32_array *v6; // x0
  System_String_array **v7; // x2
  System_String_array **v8; // x3
  System_Boolean_array **v9; // x4
  System_Int32_array **v10; // x5
  System_Int32_array *v11; // x6
  System_Int32_array *v12; // x7

  if ( (byte_40F9DAA & 1) == 0 )
  {
    sub_B16FFC(&int___TypeInfo, *(_QWORD *)&targetId);
    byte_40F9DAA = 1;
  }
  BattleLogicFunction_FunctionArgument___ctor(
    (BattleLogicFunction_FunctionArgument_o *)this,
    *(const MethodInfo **)&targetId);
  v6 = (struct System_Int32_array *)sub_B17014(int___TypeInfo, 1LL, v5);
  if ( !v6 )
    sub_B170D4();
  if ( !v6->max_length )
  {
    sub_B17100(v6, v6, v7);
    sub_B170A0();
  }
  v6->m_Items[1] = targetId;
  this->fields.fixTargetIds = v6;
  sub_B16F98(
    (BattleServantConfConponent_o *)&this->fields.fixTargetIds,
    (System_Int32_array **)v6,
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
  __int64 v2; // x2
  __int64 v3; // x3
  __int64 v4; // x4
  Il2CppObject *v5; // x19
  struct BattleLogicFunction___c_StaticFields *static_fields; // x0

  if ( (byte_40F854C & 1) == 0 )
  {
    sub_B16FFC(&BattleLogicFunction___c_TypeInfo, v1);
    byte_40F854C = 1;
  }
  v5 = (Il2CppObject *)sub_B170CC(BattleLogicFunction___c_TypeInfo, v1, v2, v3, v4);
  System_Object___ctor(v5, 0LL);
  static_fields = BattleLogicFunction___c_TypeInfo->static_fields;
  static_fields->__9 = (struct BattleLogicFunction___c_o *)v5;
  sub_B16F98(static_fields, v5);
}


void __fastcall BattleLogicFunction___c___ctor(BattleLogicFunction___c_o *this, const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


bool __fastcall BattleLogicFunction___c___FunctionSubFieldBuff_b__112_1(
        BattleLogicFunction___c_o *this,
        BattleBuffData_BuffData_o *x,
        const MethodInfo *method)
{
  if ( !x )
    sub_B170D4();
  return x->fields.fieldChangeData != 0LL;
}


void __fastcall BattleLogicFunction___c___functionPtShuffle_b__80_0(
        BattleLogicFunction___c_o *this,
        BattleServantData_o *s,
        const MethodInfo *method)
{
  int32_t Next; // w0

  Next = BattleRandom__getNext(1000, 0LL);
  if ( !s )
    sub_B170D4();
  s->fields._shuffuleSeed = Next;
}


int32_t __fastcall BattleLogicFunction___c___functionPtShuffle_b__80_1(
        BattleLogicFunction___c_o *this,
        BattleServantData_o *a,
        BattleServantData_o *b,
        const MethodInfo *method)
{
  int32_t ShuffleSeed; // w0

  if ( !a || (ShuffleSeed = BattleServantData__get_ShuffleSeed(a, 0LL), !b) )
    sub_B170D4();
  return ShuffleSeed - BattleServantData__get_ShuffleSeed(b, 0LL);
}


bool __fastcall BattleLogicFunction___c___functionReplaceEnemyMember_b__74_0(
        BattleLogicFunction___c_o *this,
        BattleServantData_o *x,
        const MethodInfo *method)
{
  if ( !x )
    sub_B170D4();
  return BattleServantData__isAlive(x, 0, 0LL);
}


bool __fastcall BattleLogicFunction___c___procList_b__34_0(
        BattleLogicFunction___c_o *this,
        BattleLogicFunctionProcess_FunctionUnitCheck_o *x,
        const MethodInfo *method)
{
  if ( !x )
    sub_B170D4();
  return BattleLogicFunctionProcess_FunctionUnitCheck__get_FuncType(x, 0LL) != 0;
}


bool __fastcall BattleLogicFunction___c___procList_b__34_1(
        BattleLogicFunction___c_o *this,
        BattleLogicFunctionProcess_FunctionUnitCheck_o *x,
        const MethodInfo *method)
{
  if ( !x )
    sub_B170D4();
  return BattleLogicFunctionProcess_FunctionUnitCheck__get_FuncType(x, 0LL) == 135;
}


bool __fastcall BattleLogicFunction___c___procList_b__34_2(
        BattleLogicFunction___c_o *this,
        BattleLogicFunctionProcess_FunctionTargetCheck_o *target,
        const MethodInfo *method)
{
  if ( !target )
    sub_B170D4();
  return target->fields._result_k__BackingField;
}


int32_t __fastcall BattleLogicFunction___c___procList_b__34_3(
        BattleLogicFunction___c_o *this,
        BattleLogicFunctionProcess_FunctionTargetCheck_o *target,
        const MethodInfo *method)
{
  if ( !target )
    sub_B170D4();
  return target->fields._targetId_k__BackingField;
}


int32_t __fastcall BattleLogicFunction___c___setAttackSideEffect_b__43_0(
        BattleLogicFunction___c_o *this,
        BattleActionData_SideEffectData_o *x,
        const MethodInfo *method)
{
  if ( !x )
    sub_B170D4();
  return x->fields.targetId;
}


void __fastcall BattleLogicFunction___c__DisplayClass59_0___ctor(
        BattleLogicFunction___c__DisplayClass59_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


int32_t __fastcall BattleLogicFunction___c__DisplayClass59_0___BehaveLinkageBuffAsFamily_b__0(
        BattleLogicFunction___c__DisplayClass59_0_o *this,
        int32_t linkageIndividuality,
        const MethodInfo *method)
{
  struct BattleLogicFunctionProcess_FunctionTargetCheck_o *funcTarget; // x8
  struct BattleLogicFunctionProcess_FunctionUnitCheck_o *funcUnit_k__BackingField; // x8
  BattleLogicFunction_ProcListInArgs_o *procArg_k__BackingField; // x8

  funcTarget = this->fields.funcTarget;
  if ( !funcTarget
    || (funcUnit_k__BackingField = funcTarget->fields._funcUnit_k__BackingField) == 0LL
    || (procArg_k__BackingField = funcUnit_k__BackingField->fields._procArg_k__BackingField) == 0LL )
  {
    sub_B170D4();
  }
  return BattleLogicFunction_ProcListInArgs__GetFamilyBuffLinkageId(
           procArg_k__BackingField,
           linkageIndividuality,
           this->fields.targetSvtData,
           0LL);
}


void __fastcall BattleLogicFunction___c__DisplayClass60_0___ctor(
        BattleLogicFunction___c__DisplayClass60_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


BattleBuffData_BuffData_o *__fastcall BattleLogicFunction___c__DisplayClass60_0___functionSubState_b__0(
        BattleLogicFunction___c__DisplayClass60_0_o *this,
        BattleBuffData_BuffData_o *buff,
        const MethodInfo *method)
{
  BattleServantData_o *targetSvtData; // x0
  BattleBuffData_o *BuffData; // x0

  targetSvtData = this->fields.targetSvtData;
  if ( !targetSvtData || (BuffData = BattleServantData__get_BuffData(targetSvtData, 0LL)) == 0LL )
    sub_B170D4();
  return BattleBuffData__CreateDummyBuff(BuffData, buff, 0LL);
}


void __fastcall BattleLogicFunction___c__DisplayClass92_0___ctor(
        BattleLogicFunction___c__DisplayClass92_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


void __fastcall BattleLogicFunction___c__DisplayClass92_0___UpdateUserEquipSkillChargeTurn_b__0(
        BattleLogicFunction___c__DisplayClass92_0_o *this,
        BattleSkillInfoData_o *x,
        const MethodInfo *method)
{
  if ( !x )
    sub_B170D4();
  BattleSkillInfoData__TurnProgress(
    x,
    this->fields.progressValue,
    0,
    this->fields.targetIndex,
    this->fields.targetIndividualityArray,
    0LL);
}


void __fastcall BattleLogicFunction___c__DisplayClass92_0___UpdateUserEquipSkillChargeTurn_b__1(
        BattleLogicFunction___c__DisplayClass92_0_o *this,
        BattleSkillInfoData_o *x,
        const MethodInfo *method)
{
  if ( !x )
    sub_B170D4();
  BattleSkillInfoData__TurnExtend(
    x,
    this->fields.progressValue,
    999,
    this->fields.targetIndex,
    this->fields.targetIndividualityArray,
    0LL);
}


void __fastcall BattleLogicFunction___c__DisplayClass99_0___ctor(
        BattleLogicFunction___c__DisplayClass99_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


bool __fastcall BattleLogicFunction___c__DisplayClass99_0___functionMoveState_b__0(
        BattleLogicFunction___c__DisplayClass99_0_o *this,
        BattleBuffData_BuffData_o *x,
        const MethodInfo *method)
{
  char v3; // vf

  if ( !x )
    sub_B170D4();
  return !(((x->fields.state & this->fields.stateUnstealable) < 0) ^ v3 | ((x->fields.state & this->fields.stateUnstealable) == 0));
}


bool __fastcall BattleLogicFunction___c__DisplayClass99_0___functionMoveState_b__1(
        BattleLogicFunction___c__DisplayClass99_0_o *this,
        BattleBuffData_BuffData_o *x,
        const MethodInfo *method)
{
  System_Collections_Generic_HashSet_BattleBuffData_BuffData__o *unstealableBuffs; // x0

  if ( (byte_40F854D & 1) == 0 )
  {
    sub_B16FFC(&Method_System_Collections_Generic_HashSet_BattleBuffData_BuffData__Contains__, x);
    byte_40F854D = 1;
  }
  unstealableBuffs = this->fields.unstealableBuffs;
  if ( !unstealableBuffs )
    sub_B170D4();
  return !System_Collections_Generic_HashSet_BattleBuffData_BuffData___Contains(
            unstealableBuffs,
            x,
            (const MethodInfo_21DEFE0 *)Method_System_Collections_Generic_HashSet_BattleBuffData_BuffData__Contains__);
}